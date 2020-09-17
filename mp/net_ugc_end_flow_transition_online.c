void __EntryFunction__()
{
	iLocal_13 = 675980447;
	fLocal_28 = 1f;
	fLocal_29 = 1f;
	func_1(&uScriptParam_0);
	while (!func_2())
	{
		func_3();
		if (iLocal_31 >= 0 && iLocal_31 < 32)
		{
			iLocal_36 = get_game_timer();
			func_4();
			func_5();
			func_6();
		}
		else
		{
			iVar0 = get_game_timer();
			if (iLocal_36 != 0)
			{
				if ((iVar0 - iLocal_36) > 30000)
				{
					do_screen_fade_in(0);
					func_7();
					terminate_this_thread();
				}
			}
			else
			{
				iLocal_36 = iVar0;
			}
		}
		wait(0);
	}
	func_7();
	terminate_this_thread();
}

void func_1(var uParam0)
{
	network_set_script_is_safe_for_network_game();
	func_8(32, *uParam0);
	func_9();
	set_this_script_can_be_paused(false);
	func_10();
	network_register_host_broadcast_variables(&Local_37, 394, 48);
	func_11(_0xba24095ea96dfe17(&Local_37), 394, "sServerBD");
	network_register_player_broadcast_variables(&Local_431, 161, 49);
	func_12(_0x690806bc83bc8ca2(Local_431[0]), 161, "sClientBD");
	network_register_player_broadcast_variables(&Local_592, 385, 50);
	func_12(_0x690806bc83bc8ca2(Local_592[0]), 385, "sCutscenePlayerBD");
	network_register_player_broadcast_variables(&Local_977, 1217, 51);
	func_12(_0x690806bc83bc8ca2(Local_977[0]), 1217, "sVotingPlayerBD");
	while (!_0x5d10b3795f3fc886() && !func_2())
	{
		wait(0);
	}
	while (!func_13() && !func_2())
	{
		if (!func_14(&uLocal_34))
		{
			func_15(&uLocal_34, 1, 0);
		}
		wait(0);
	}
}

bool func_2()
{
	if (func_16(Global_390124->f_6, Global_390124->f_7))
	{
		return true;
	}
	if (Local_37 == 5)
	{
		return true;
	}
	return false;
}

void func_3()
{
	bLocal_30 = network_is_host_of_this_script();
	iLocal_31 = participant_id_to_int();
}

void func_4()
{
	iVar1 = 0;
	while (iVar1 < get_number_of_events(1))
	{
		iVar0 = get_event_at_index(1, iVar1);
		switch (iVar0)
		{
			case -507840394:
				func_17(iVar1);
				break;
		}
		iVar1++;
	}
}

void func_5()
{
	if (!bLocal_30)
	{
		return;
	}
	while (iVar0 < 6)
	{
		iVar1 = Local_37;
		switch (Local_37)
		{
			case 0:
				if (func_18(1))
				{
					func_19();
					iVar1 = 1;
				}
				break;
			case 1:
				if (func_18(3))
				{
					iVar1 = 2;
				}
				break;
			case 2:
				if (func_20())
				{
					iVar1 = 3;
				}
				break;
			case 3:
				if (func_18(5))
				{
					iVar1 = 4;
				}
				break;
			case 4:
				iVar1 = 5;
				break;
		}
		if (iVar1 != Local_37)
		{
			Local_37 = iVar1;
			iVar0++;
		}
	else
	{
		}
	else
	{
		}
	}
}

void func_6()
{
	while (iVar0 < 6)
	{
		iVar1 = &Local_431[iLocal_31];
		switch (&Local_431[iLocal_31])
		{
			case 0:
				if (func_21())
				{
					iVar1 = 1;
				}
				break;
			case 1:
				if (Local_37 >= 1)
				{
					func_22();
					iVar1 = 2;
				}
				break;
			case 2:
				if (func_23())
				{
					iVar1 = 3;
				}
				break;
			case 3:
				if (Local_37 >= 2)
				{
					iVar1 = 4;
				}
				break;
			case 4:
				if (func_24())
				{
					iVar1 = 5;
				}
				break;
		}
		if (iVar1 != &Local_431[iLocal_31])
		{
			Local_431[iLocal_31] = iVar1;
			iVar0++;
		}
	else
	{
		}
	else
	{
		}
	}
}

void func_7()
{
	if (func_25())
	{
		func_26(&Local_2194, 12);
	}
	func_27(&Local_2194, Local_592[iLocal_31]);
	func_28();
}

void func_8(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_29();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_9()
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
			func_29();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_29();
					break;
				case 2:
					func_29();
					break;
				case 4:
					func_29();
					break;
				case 3:
					func_29();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_29();
		}
		if (!network_is_game_in_progress())
		{
			func_29();
		}
		if (!network_is_signed_online())
		{
			func_29();
		}
		if (func_30() == 0)
		{
			if (func_31())
			{
				func_29();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_29();
	}
	return 1;
}

void func_10()
{
	func_32(Local_37.f_2[0]);
	iVar0 = 0;
	while (iVar0 < iVar590)
	{
		func_33(Local_592[iVar0]);
		iVar0++;
	}
	func_34(&Local_2194);
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_12(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_13()
{
	if (func_35(Global_3407872->f_2499, 8))
	{
		return true;
	}
	if (func_14(&uLocal_34) && func_36(&uLocal_34, 1, 0) > 20000)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!network_is_handle_valid((*Global_3407872)[iVar0]))
		{
		}
		else
		{
			if (!network_is_gamer_in_my_session((*Global_3407872)[iVar0]))
			{
				return false;
			}
			iVar1 = network_get_player_from_gamer_handle((*Global_3407872)[iVar0]);
			if (!_network_is_player_index_valid(iVar1))
			{
				return false;
			}
			if (!network_is_player_a_participant(iVar1))
			{
				return false;
			}
			iVar2 = network_get_participant_index(iVar1);
			if (!network_is_participant_active(iVar2))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_14(var uParam0)
{
	return uParam0->f_1;
}

void func_15(var uParam0, bool bParam1, bool bParam2)
{
	if (network_is_game_in_progress() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = get_network_time();
		}
		else
		{
			*uParam0 = get_network_time_accurate();
		}
	}
	else
	{
		*uParam0 = get_game_timer();
	}
	uParam0->f_1 = 1;
}

bool func_16(bool bParam0, bool bParam1)
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

void func_17(int iParam0)
{
	if (!get_event_data(1, iParam0, &uVar0, 4))
	{
		return;
	}
}

bool func_18(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar1))
		{
		}
		else if (&Local_431[iVar0] != iParam0)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_19()
{
	if (!func_25())
	{
		return;
	}
	Local_37.f_393 = 255;
	iVar0 = 255;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = int_to_participantindex(iVar1);
		if (network_is_participant_active(iVar2))
		{
			if (Local_431[iVar1]->f_3 == 0)
			{
			}
			else
			{
				iVar3 = network_get_player_index(iVar2);
				if (iVar3 != _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar3)))
				{
					if (iVar0 == 255)
					{
						iVar0 = iVar2;
					}
				}
				else
				{
					Local_37.f_393 = iVar2;
				}
			}
		}
		iVar1++;
	}
	if (Local_37.f_393 == 255)
	{
		if (iVar0 != 255)
		{
			Local_37.f_393 = iVar0;
		}
	}
	if (Local_37.f_393 != 255)
	{
		Local_37.f_391 = Local_431[Local_37.f_393]->f_3;
		Local_37.f_392 = Local_431[Local_37.f_393]->f_4;
	}
	if (Local_37.f_392 == -1)
	{
		Local_37.f_391 = 0;
	}
}

bool func_20()
{
	switch (Global_3407872->f_225)
	{
		case 1:
			return func_37();
		default:
			break;
	}
	return true;
	return false;
}

bool func_21()
{
	if (!func_25())
	{
		return true;
	}
	if (!func_38())
	{
		return false;
	}
	if (_unlock_is_unlocked(-2111141782))
	{
		set_bit(&(Local_431[iLocal_31]->f_3), 0);
		set_bit(&(Local_431[iLocal_31]->f_3), 1);
	}
	if (_unlock_is_unlocked(-1384963671))
	{
		set_bit(&(Local_431[iLocal_31]->f_3), 3);
	}
	if (_unlock_is_unlocked(-567253426))
	{
		set_bit(&(Local_431[iLocal_31]->f_3), 2);
	}
	iVar0 = func_40(func_39(), 1);
	if (iVar0 == -1)
	{
		Local_431[iLocal_31]->f_3 = 0;
	}
	Local_431[iLocal_31]->f_4 = iVar0;
	return true;
}

void func_22()
{
	if (!func_25())
	{
		return;
	}
	if (!func_41())
	{
		return;
	}
	if (Local_37.f_393 == participant_id())
	{
		uVar0 = 4;
		func_42(&uVar0);
		func_43(&uVar0);
	}
	if (Global_3407872->f_226 == 2)
	{
		func_44(-1, &(Global_3407872->f_227[0]->f_2056[0]->f_17), Global_3407872->f_227[0]->f_1621[0], &(Global_3407872->f_227[0]->f_2056[0]->f_16), &(Local_37.f_392));
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			func_44(iVar5, &(Global_3407872->f_227[0]->f_2056[iVar5]->f_17), Global_3407872->f_227[0]->f_1621[iVar5], &(Global_3407872->f_227[0]->f_2056[iVar5]->f_16), &(Local_37.f_392));
			iVar5++;
		}
	}
}

bool func_23()
{
	if (!func_25())
	{
		return true;
	}
	if (!func_41())
	{
		return true;
	}
	bVar0 = func_45(255);
	bVar1 = is_entity_dead(Global_34);
	bVar2 = Global_1298378->f_29.f_3 == 2;
	if ((!bVar0 && !bVar1) && bVar2)
	{
		return true;
	}
	return false;
}

bool func_24()
{
	func_46();
	switch (Global_3407872->f_225)
	{
		case 1:
			return func_47();
		default:
			break;
	}
	return true;
	return false;
}

bool func_25()
{
	return (Global_3407872->f_226 == 3 || Global_3407872->f_226 == 2);
}

void func_26(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_27(int* iParam0, var uParam1)
{
	clear_bit(&(Global_1957959->f_1), 5);
	Global_1048584 = 0;
	clear_focus();
	if (network_is_game_in_progress())
	{
		if (func_48(iParam0))
		{
			_0x007ff852dcf49da4(256);
			_0x4b05b97ba46f419d(1);
			_0x6c7e04e9de451789();
		}
	}
	if (!is_gameplay_cam_rendering())
	{
		render_script_cams(false, false, 3000, true, false, 0);
	}
	if (does_cam_exist(iParam0->f_1478))
	{
		destroy_cam(iParam0->f_1478, false);
	}
	if (func_49(&(iParam0->f_1483)))
	{
		func_50(&(iParam0->f_1483));
	}
	func_51(&(iParam0->f_1483));
	func_52(iParam0, uParam1);
}

void func_28()
{
	Var0 = 32;
	Var0.f_227 = 1;
	Var0.f_227.f_1.f_24 = 4;
	Var0.f_227.f_1.f_24.f_1.f_11 = 2;
	Var0.f_227.f_1.f_24.f_1.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11 = 2;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11 = 2;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11 = 2;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_345 = 20;
	Var0.f_227.f_1.f_345.f_1 = -1;
	Var0.f_227.f_1.f_345.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_926 = 20;
	Var0.f_227.f_1.f_926.f_1 = -1;
	Var0.f_227.f_1.f_926.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227 = 10;
	Var0.f_227.f_1.f_1227.f_1 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378 = 10;
	Var0.f_227.f_1.f_1378.f_1 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1529 = 1;
	Var0.f_227.f_1.f_1529.f_1 = -1;
	Var0.f_227.f_1.f_1529.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1529.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545 = 5;
	Var0.f_227.f_1.f_1545.f_1 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1621 = 8;
	Var0.f_227.f_1.f_1647 = 2;
	Var0.f_227.f_1.f_1651 = 4;
	Var0.f_227.f_1.f_1668 = 20;
	Var0.f_227.f_1.f_1829 = 20;
	Var0.f_227.f_1.f_1910 = 10;
	Var0.f_227.f_1.f_1951 = 1;
	Var0.f_227.f_1.f_1956 = 10;
	Var0.f_227.f_1.f_1997 = 5;
	Var0.f_227.f_1.f_2018 = 3;
	Var0.f_227.f_1.f_2043 = 3;
	Var0.f_227.f_1.f_2056 = 8;
	Var0.f_227.f_1.f_2056.f_1.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	_copy_memory(Global_3407872, &Var0, 2500);
}

void func_29()
{
	terminate_this_thread();
}

int func_30()
{
	return Global_1572887->f_13;
}

bool func_31()
{
	return Global_1051252->f_8;
}

void func_32(var uParam0)
{
	func_53(uParam0);
}

void func_33(var uParam0)
{
	func_54(uParam0);
}

void func_34(int iParam0)
{
	func_55(iParam0);
	func_56(&(iParam0->f_1776));
}

bool func_35(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_36(var uParam0, bool bParam1, bool bParam2)
{
	if (network_is_game_in_progress() && !bParam1)
	{
		if (!bParam2)
		{
			return get_time_difference(*uParam0, get_network_time());
		}
		else
		{
			return get_time_difference(*uParam0, get_network_time_accurate());
		}
	}
	return get_time_difference(*uParam0, get_game_timer());
}

int func_37()
{
	uVar0 = 32;
	bVar33 = func_59(Local_37.f_2[0], 0, &Local_592, &uVar0, Global_3407872->f_227[0], &(Local_37.f_61), &Local_977, 8630, 8638);
	while (iVar35 < 6)
	{
		iVar36 = Local_37.f_1;
		switch (Local_37.f_1)
		{
			case 0:
				Local_37.f_388 = { func_60() };
				Local_37.f_388 = 1;
				Local_37.f_388.f_1 = 0;
				iVar36 = 1;
				break;
			case 1:
				if (!func_61(&(Local_37.f_388.f_2), &bVar34))
				{
					return 0;
				}
				if (bVar34)
				{
					iVar36 = 5;
				}
				else
				{
					iVar36 = 2;
				}
				break;
			case 2:
				if (func_62(Local_37.f_2[0], 0, Local_37.f_388, 2, 0))
				{
					iVar36 = 3;
				}
				break;
			case 3:
				if (func_63(1))
				{
					if (func_62(Local_37.f_2[0], 0, Local_37.f_388, 3, 0))
					{
						iVar36 = 4;
					}
				}
				break;
			case 4:
				if (bVar33)
				{
					iVar36 = 5;
				}
				break;
			case 5:
				return 1;
		}
		if (iVar36 != Local_37.f_1)
		{
			Local_37.f_1 = iVar36;
			iVar35++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

bool func_38()
{
	return (func_64() && &Global_1298166 == 1);
}

int func_39()
{
	return Global_1298166->f_200;
}

int func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return -1;
		}
	}
	return (*Global_1298536)[iParam0]->f_5.f_12;
}

bool func_41()
{
	return Local_37.f_392 != -1;
}

void func_42(var uParam0)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (iVar0 <= iVar1)
		{
		}
		else
		{
			if (!network_is_handle_valid((*Global_3407872)[iVar2]))
			{
			}
			else if (!network_is_gamer_in_my_session((*Global_3407872)[iVar2]))
			{
			}
			else
			{
				iVar3 = network_get_player_from_gamer_handle((*Global_3407872)[iVar2]);
				if (!_network_is_player_index_valid(iVar3))
				{
				}
				else
				{
					(*uParam0)[iVar1] = iVar3;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
}

void func_43(var uParam0)
{
	if (Global_1298166->f_1 == 4)
	{
		return;
	}
	func_65(4);
	iVar0 = *uParam0;
	if (iVar0 > 4)
	{
		return;
	}
	func_66(2, 0, 1);
	Var1.f_5 = 255;
	Var1.f_7 = -1;
	Var1.f_9 = 7;
	Var1.f_19 = -1;
	Var1.f_19.f_1 = -1;
	Var1.f_5 = &Global_1296859->f_154[&Global_1296859];
	Var1.f_4 = 2;
	iVar28 = 0;
	while (iVar28 <= (iVar0 - 1))
	{
		if (network_is_player_active(uParam0[iVar28]) && uParam0[iVar28] != &Global_1296859->f_154[&Global_1296859])
		{
			_0x31010318ba9897ac(&uVar27, uParam0[iVar28]);
		}
		iVar28++;
	}
	func_67(&Var1, uVar27);
	func_68(0);
}

void func_44(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 3:
			StringCopy(sParam1, "pl_Band", 32);
			break;
		case 2:
			StringCopy(sParam1, "pl_Bar", 32);
			break;
		case 1:
			StringCopy(sParam1, "pl_Cook", 32);
			break;
		case 0:
			StringCopy(sParam1, "pl_Maggie", 32);
			break;
	}
	switch (*uParam4)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 1779.365f, -802.881f, 187.965f };
					*uParam3 = -136.6f;
					break;
				case 1:
					*uParam2 = { 1789.989f, -818.1904f, 188.401f };
					*uParam3 = 28.4f;
					break;
				case 0:
					*uParam2 = { 1789.589f, -812.6585f, 191.5976f };
					*uParam3 = -176.6f;
					break;
				case -1:
					*uParam2 = { 1787.426f, -809.093f, 190.695f };
					*uParam3 = -108.9f;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { -1086.47f, 694.842f, 79.6002f };
					*uParam3 = 23.5f;
					break;
				case 1:
					*uParam2 = { -1091.248f, 712.8531f, 80.0358f };
					*uParam3 = -171.5f;
					break;
				case 0:
					*uParam2 = { -1092.755f, 707.5154f, 83.2324f };
					*uParam3 = -16.5f;
					break;
				case -1:
					*uParam2 = { -1091.934f, 703.427f, 82.33f };
					*uParam3 = 51.2f;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { -2785.119f, -3060.223f, -13.3343f };
					*uParam3 = -27.7f;
					break;
				case 1:
					*uParam2 = { -2774.076f, -3045.214f, -12.8987f };
					*uParam3 = 137.3f;
					break;
				case 0:
					*uParam2 = { -2779.18f, -3047.384f, -9.7021f };
					*uParam3 = -67.7f;
					break;
				case -1:
					*uParam2 = { -2781.852f, -3050.585f, -10.605f };
					*uParam3 = 0f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 1615.008f, 837.4983f, 120.3081f };
					*uParam3 = -113.2f;
					break;
				case 1:
					*uParam2 = { 1630.838f, 827.6671f, 120.7437f };
					*uParam3 = 51.8f;
					break;
				case 0:
					*uParam2 = { 1628.273f, 832.5851f, 123.9403f };
					*uParam3 = -153.2f;
					break;
				case -1:
					*uParam2 = { 1624.872f, 834.998f, 123.038f };
					*uParam3 = -85.5f;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { -1851.025f, -1738.521f, 84.6213f };
					*uParam3 = 60f;
					break;
				case 1:
					*uParam2 = { -1865.579f, -1726.884f, 85.0569f };
					*uParam3 = -135f;
					break;
				case 0:
					*uParam2 = { -1863.615f, -1732.071f, 88.2535f };
					*uParam3 = 20f;
					break;
				case -1:
					*uParam2 = { -1860.524f, -1734.87f, 87.351f };
					*uParam3 = 87.7f;
					break;
			}
			break;
	}
}

bool func_45(int iParam0)
{
	return func_69(1, iParam0);
}

void func_46()
{
	if (iLocal_33 == 4)
	{
		return;
	}
	sVar0 = func_70();
	if (is_string_null_or_empty(sVar0))
	{
		func_71(4);
		return;
	}
	switch (iLocal_33)
	{
		case 0:
			func_71(1);
			break;
		case 1:
			prepare_music_event(sVar0);
			func_71(2);
			break;
		case 2:
			if (is_screen_faded_in())
			{
				func_71(3);
			}
			break;
		case 3:
			trigger_music_event(sVar0);
			func_71(4);
			break;
	}
}

int func_47()
{
	func_72(&(Local_2194.f_1483), 524288, 1);
	uVar1 = 32;
	if (Local_431[iLocal_31]->f_2 >= 1)
	{
		bVar0 = func_74(&(Local_37.f_2), 1, &Local_2194, &Local_592, iLocal_31, iLocal_31, &uVar1, &(Local_37.f_61), &Local_977, &(Global_3407872->f_227), 9848, 8638, 0);
	}
	while (iVar34 < 6)
	{
		iVar35 = Local_431[iLocal_31]->f_2;
		switch (Local_431[iLocal_31]->f_2)
		{
			case 0:
				if (Local_37.f_1 > 4)
				{
					iVar35 = 5;
				}
				else if (Local_37.f_388.f_2 >= 0 && Local_37.f_388.f_2 < 8)
				{
					if (func_75())
					{
						func_76(1);
						func_77(1);
						func_78(1);
						func_79(1);
						func_80(*Global_3407872->f_227[0]->f_1621[Local_37.f_388.f_2], Global_3407872->f_227[0]->f_2056[Local_37.f_388.f_2]->f_16, 1);
					}
					func_15(&uLocal_34, 1, 0);
					iVar35 = 3;
				}
				break;
			case 3:
				if (func_81(255) != 1 || (func_36(&uLocal_34, 1, 0) > 100 && func_81(255) == 1))
				{
					func_82(&(Global_3407872->f_2499), 4);
					iVar35 = 4;
				}
				break;
			case 4:
				if (func_81(255) == 1)
				{
					iVar35 = 1;
				}
				break;
			case 1:
				if ((func_35(Global_3407872->f_2499, 1) && func_83(Local_592[iLocal_31])) && _does_anim_scene_exist(Local_2194.f_1483.f_208))
				{
					func_82(&(Local_431[iLocal_31]->f_1), 1);
					iVar35 = 2;
				}
				break;
			case 2:
				if (func_84(Local_592[iLocal_31]))
				{
					if (!func_35(uLocal_32, 1))
					{
						func_85(0, 0);
						func_82(&uLocal_32, 1);
					}
				}
				if (bVar0)
				{
					iVar35 = 5;
				}
				break;
			case 5:
				return 1;
		}
		if (iVar35 != Local_431[iLocal_31]->f_2)
		{
			Local_431[iLocal_31]->f_2 = iVar35;
			iVar34++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

bool func_48(int* iParam0)
{
	return !func_86(*iParam0, 12);
}

bool func_49(var uParam0)
{
	return _does_anim_scene_exist(uParam0->f_208);
}

void func_50(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_208))
	{
		_delete_anim_scene(uParam0->f_208);
	}
}

void func_51(var uParam0)
{
	Var0 = 1;
	Var0.f_17 = 14;
	Var0.f_186 = 1097859072;
	Var0.f_187 = 1101004800;
	Var0.f_225 = 4;
	Var0.f_292 = 1000;
	_copy_memory(uParam0, &Var0, 293);
}

void func_52(int* iParam0, var uParam1)
{
	func_34(iParam0);
	func_33(uParam1);
}

void func_53(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_87(&(uParam0->f_4));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_88(uParam0->f_7[iVar0]);
		iVar0++;
	}
	uParam0->f_28 = 255;
	func_89(&(uParam0->f_29));
	func_89(&(uParam0->f_31));
}

void func_54(var uParam0)
{
	*uParam0 = -1;
	func_87(&(uParam0->f_1));
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	func_87(&(uParam0->f_9));
}

void func_55(int iParam0)
{
	func_90(iParam0);
	func_91(0);
	Global_1048584 = 0;
}

void func_56(var uParam0)
{
	func_92(uParam0);
}

void func_57(var uParam0, var uParam1, var uParam2)
{
}

int func_58(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return 2;
}

int func_59(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8)
{
	iVar0 = *uParam0;
	while (iVar1 < 8)
	{
		switch (*uParam0)
		{
			case 0:
				if (func_93(uParam0))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				if (func_94(uParam0, iParam1, uParam2, uParam3, uParam4))
				{
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_95(uParam0, iParam1, uParam2, uParam3, uParam4))
				{
					iVar0 = 3;
				}
				break;
			case 3:
				if (func_96(uParam0, uParam4, iParam8))
				{
					iVar0 = 4;
				}
				break;
			case 4:
				if (func_97(uParam0, iParam1, uParam4, uParam5, iParam8))
				{
					iVar0 = 5;
				}
				break;
			case 5:
				if (func_98(uParam0, iParam1, uParam2, uParam4))
				{
					iVar0 = 6;
				}
				break;
			case 6:
				if (func_99(uParam0, iParam1, uParam2, uParam5, uParam6, iParam7))
				{
					iVar0 = 7;
				}
				break;
			case 7:
				if (func_100(uParam0, iParam1, uParam2))
				{
					return 1;
				}
				break;
		}
		if (iVar0 != *uParam0)
		{
			*uParam0 = iVar0;
			iVar1++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

Vector3 func_60()
{
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	return vVar0;
}

bool func_61(var uParam0, var uParam1)
{
	iVar11 = 0;
	if (func_25())
	{
		if (Local_37.f_391 != 0)
		{
			if (Global_3407872->f_226 == 2)
			{
				iVar2[0] = 0;
				iVar1 = 1;
			}
			else
			{
				iVar11 = 0;
				while (iVar11 <= 7)
				{
					if (is_bit_set(Local_37.f_391, iVar11))
					{
						iVar2[iVar1] = iVar11;
						iVar1++;
					}
					iVar11++;
				}
			}
		}
		else
		{
			iVar1 = 0;
		}
		iVar0 = 8;
	}
	else
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (func_101(iVar11, Global_3407872->f_227[0], Global_3407872->f_2498, Local_37.f_36[iVar11]))
			{
				iVar0++;
				if (!Local_37.f_36[iVar11]->f_2)
				{
					iVar2[iVar1] = iVar11;
					iVar1++;
				}
			}
			iVar11++;
		}
	}
	if (iVar0 < 8)
	{
		return false;
	}
	if (iVar1 == 0)
	{
		*uParam1 = 1;
		return true;
	}
	*uParam0 = -1;
	if (*uParam0 == -1)
	{
		*uParam0 = &iVar2[get_random_int_in_range(0, func_102(iVar1, 0, 7))];
	}
	iVar11 = 0;
	while (iVar11 <= 7)
	{
		if (iVar11 != *uParam0 && _0xf6a8a652a6b186cd(&(Local_37.f_36[iVar11])))
		{
			_0xfdfecc6ee4491e11(&(Local_37.f_36[iVar11]));
		}
		iVar11++;
	}
	return true;
}

bool func_62(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return false;
	}
	if (!func_103(vParam2, 1))
	{
		return false;
	}
	if (func_104(uParam0))
	{
		return false;
	}
	if (func_105(uParam0->f_4, vParam2) && iParam5 == uParam0->f_2)
	{
		return true;
	}
	uParam0->f_4 = { vParam2 };
	uParam0->f_2 = iParam5;
	uParam0->f_3 = iParam6;
	return true;
}

bool func_63(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar1))
		{
		}
		else if (!func_35(Local_431[iVar0]->f_1, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_64()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

void func_65(int iParam0)
{
	Global_1298166->f_1 = iParam0;
}

int func_66(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!network_is_player_active(player_id()))
		{
			return 0;
		}
	}
	(*Global_1298536)[player_id()]->f_5[iParam0] = iParam1;
	return 1;
}

void func_67(var uParam0, var uParam1)
{
	*uParam0 = 13;
	uParam0->f_1 = get_player_index();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 26, 15, &uParam1);
}

void func_68(bool bParam0)
{
	func_106(128);
	func_107(1);
	if (bParam0)
	{
		func_106(1024);
	}
}

bool func_69(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_108(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_109())
	{
		return func_108(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_108(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

char* func_70()
{
	if (Global_3407872->f_226 == 1)
	{
		return "MP_BH_MISSION_COMPLETE_MUSIC";
	}
	return "";
}

void func_71(int iParam0)
{
	iLocal_33 = iParam0;
}

void func_72(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_208)) && _0xef324e9550a394d5(uParam0->f_208))
	{
		_0x8a8208ae92bf87a5(uParam0->f_208);
	}
}

void func_73(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_82(&(Global_3407872->f_2499), 2);
			break;
		case 7:
			func_110();
			break;
		case 2:
			func_111();
			break;
	}
}

int func_74(var uParam0, int iParam1, int* iParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, bool bParam12)
{
	Var0 = 1;
	Var0.f_1.f_8.f_24 = 4;
	Var0.f_1.f_8.f_24.f_1.f_11 = 2;
	Var0.f_1.f_8.f_24.f_1.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11 = 2;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11 = 2;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11 = 2;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_345 = 20;
	Var0.f_1.f_8.f_345.f_1 = -1;
	Var0.f_1.f_8.f_345.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_926 = 20;
	Var0.f_1.f_8.f_926.f_1 = -1;
	Var0.f_1.f_8.f_926.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227 = 10;
	Var0.f_1.f_8.f_1227.f_1 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378 = 10;
	Var0.f_1.f_8.f_1378.f_1 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1529 = 1;
	Var0.f_1.f_8.f_1529.f_1 = -1;
	Var0.f_1.f_8.f_1529.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1529.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545 = 5;
	Var0.f_1.f_8.f_1545.f_1 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1621 = 8;
	Var0.f_1.f_8.f_1647 = 2;
	Var0.f_1.f_1659 = 20;
	Var0.f_1.f_2381 = 4;
	Var0.f_1.f_2381.f_1 = 2;
	Var0.f_1.f_2381.f_1.f_3 = 2;
	Var0.f_1.f_2381.f_1.f_3.f_3 = 2;
	Var0.f_1.f_2381.f_1.f_3.f_3.f_3 = 2;
	Var0.f_1.f_2394 = 20;
	func_112(uParam0, iParam1, (*uParam3)[iParam4], uParam6[iParam5], &Var0, uParam9);
	func_113(iParam2);
	if (func_103((*uParam3)[iParam4]->f_1, 1) && (*uParam3)[iParam4]->f_1 == 1)
	{
		func_114(uParam0, iParam2, (*uParam3)[iParam4], uParam9);
		return func_115(uParam0, iParam2, uParam3, iParam4, iParam5, uParam7, uParam8, uParam9, iParam10, iParam11, bParam12);
	}
	return 0;
}

bool func_75()
{
	if (func_25())
	{
		return false;
	}
	return true;
}

void func_76(bool bParam0)
{
	if (!bParam0)
	{
		func_116(19);
	}
	else
	{
		func_117(19);
	}
}

void func_77(bool bParam0)
{
	if (!bParam0)
	{
		func_116(18);
	}
	else
	{
		func_117(18);
	}
}

void func_78(bool bParam0)
{
	if (!bParam0)
	{
		func_116(25);
	}
	else
	{
		func_117(25);
	}
}

void func_79(bool bParam0)
{
	if (bParam0)
	{
		func_117(129);
	}
	else
	{
		func_116(129);
	}
}

void func_80(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_118(vParam0, uParam3))
	{
		func_119(1, bParam4);
	}
}

int func_81(int iParam0)
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

void func_82(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_83(var uParam0)
{
	if (!func_120(uParam0))
	{
		return false;
	}
	if (uParam0->f_8 != 3)
	{
		return false;
	}
	return true;
}

bool func_84(var uParam0)
{
	if (!func_120(uParam0))
	{
		return false;
	}
	return uParam0->f_4 == 10;
}

void func_85(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_121(49);
	}
	if (bParam1)
	{
		func_121(51);
	}
	func_122(48);
	func_121(52);
	func_121(3);
}

bool func_86(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

void func_87(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_88(var uParam0)
{
	*uParam0 = 255;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
}

void func_89(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_90(int iParam0)
{
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iParam0->f_1[iVar0] = -1;
		iVar0++;
	}
	iParam0->f_6 = -1;
	iParam0->f_7 = 0;
	iParam0->f_8 = 255;
	iParam0->f_9 = { 0f, 0f, 0f };
	func_89(&(iParam0->f_12));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_123(iParam0->f_14[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_124(iParam0->f_99[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_125(iParam0->f_500[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_125(iParam0->f_761[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_125(iParam0->f_892[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_125(iParam0->f_1023[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_126(iParam0->f_1089[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		func_127(iParam0->f_1104[iVar0]);
		iVar0++;
	}
	iParam0->f_1465 = 0;
	iParam0->f_1466 = 0;
	func_89(&(iParam0->f_1467));
	func_89(&(iParam0->f_1469));
	func_89(&(iParam0->f_1471));
	func_89(&(iParam0->f_1473));
	func_128(&(iParam0->f_1475));
	iParam0->f_1478 = 0;
	iParam0->f_1479 = 0;
	iParam0->f_1480 = -1;
	func_89(&(iParam0->f_1481));
	func_129(&(iParam0->f_1483));
}

void func_91(int iParam0)
{
	Global_1048585 = iParam0;
}

void func_92(var uParam0)
{
	func_130(uParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_131(uParam0->f_1546[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_131(uParam0->f_1671[iVar0]);
		iVar0++;
	}
}

bool func_93(var uParam0)
{
	if (!func_103(uParam0->f_4, 1))
	{
		return false;
	}
	if (uParam0->f_2 != 3)
	{
		return false;
	}
	func_132(&(uParam0->f_29), 0, 1);
	return true;
}

bool func_94(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	bVar0 = true;
	bVar1 = _0x31dad2cd6d49546e(get_id_of_this_thread());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (bVar1)
		{
			if (!network_is_participant_active(int_to_participantindex(iVar2)))
			{
			}
			else
			{
				Jump @62; //curOff = 50
				if (iVar2 != 0)
				{
				}
				else
				{
					if (!func_133(uParam3[iVar2], iParam1, uParam4))
					{
					}
					else if (func_134(uParam0, iParam1, (*uParam2)[iVar2]) && (*uParam2)[iVar2]->f_4 > 1)
					{
					}
					else
					{
						bVar0 = false;
					}
					else
					{
						iVar2++;
					}
				}
				if (!bVar0)
				{
					return false;
				}
				return true;
			}
		}
	}
}

bool func_95(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	if (*uParam2 != *uParam3)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_135(uParam0->f_7[iVar0]);
		iVar0++;
	}
	if (!_0x31dad2cd6d49546e(get_id_of_this_thread()))
	{
		uParam0->f_7[0] = player_id();
		uParam0->f_7[0]->f_2 = uParam3[0];
		if (func_136(&(uParam0->f_7[0]), (*uParam2)[0], uParam4))
		{
			func_82(&(uParam0->f_7[0]->f_1), 1);
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar1 >= 4)
		{
		}
		else
		{
			if (!network_is_participant_active(int_to_participantindex(iVar0)))
			{
			}
			else if (!func_133(uParam3[iVar0], iParam1, uParam4))
			{
			}
			else if ((*uParam2)[iVar0]->f_4 <= 1 || (*uParam2)[iVar0]->f_4 > 2)
			{
			}
			else
			{
				uParam0->f_7[iVar1] = network_get_player_index(int_to_participantindex(iVar0));
				if (func_136(&(uParam0->f_7[iVar1]), (*uParam2)[iVar0], uParam4))
				{
					func_82(&(uParam0->f_7[iVar1]->f_1), 1);
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	iVar2 = func_137(uParam0->f_4.f_2);
	if (iVar1 > 1)
	{
		func_138(&(uParam0->f_7), *uParam4->f_1621[iVar2]);
	}
	return true;
}

bool func_96(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&uParam0->f_7[iVar0] == 255)
		{
		}
		else
		{
			uParam0->f_7[iVar0]->f_3 = func_139(get_player_ped(&(uParam0->f_7[iVar0])), uParam1, &iParam2);
		}
		iVar0++;
	}
	return true;
}

bool func_97(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	if (!func_35(uParam2->f_18, 256))
	{
		func_140(uParam0, uParam2, iParam4, &uVar1);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar6 = &uVar1[iVar0];
			if (iVar6 < 0 || iVar6 >= 4)
			{
			}
			else
			{
				uParam0->f_7[iVar6]->f_4 = iVar0;
			}
			iVar0++;
		}
	}
	if (func_141(uParam2))
	{
		if (!func_143(uParam3, func_142(iParam1)))
		{
			func_144(uParam3, func_142(iParam1), 1, 0, 0);
		}
	}
	return true;
}

bool func_98(var uParam0, int iParam1, var uParam2, var uParam3)
{
	bVar0 = func_35(uParam3->f_18, 1024);
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		iVar2 = int_to_participantindex(iVar1);
		if (!network_is_participant_active(iVar2))
		{
		}
		else if (!func_134(uParam0, iParam1, (*uParam2)[iVar1]))
		{
		}
		else if (!bVar0)
		{
			if (func_35((*uParam2)[iVar1]->f_5, 2))
			{
			}
			else if ((*uParam2)[iVar1]->f_4 < 8)
			{
				return false;
			}
			iVar1++;
			iVar3 = func_36(&(uParam0->f_29), 0, 1);
			iVar4 = func_145((uParam3->f_20 - iVar3), 350);
			func_15(&(uParam0->f_31), 0, 1);
			func_146(&(uParam0->f_31), iVar4);
			return true;
		}
	}
}

bool func_99(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	func_147(uParam0, uParam3, iParam1, uParam2, uParam4, &iVar0, &iVar1, &iVar3, &iVar2, &iVar5, &iVar4, &iVar6, &iVar7);
	iVar8 = ((iVar7 + iVar6) + iVar4);
	if (func_143(uParam3, func_142(iParam1)))
	{
		if (!func_86(uParam0->f_1, 1))
		{
			if (iVar3 == (iVar0 - iVar8))
			{
				if (iVar3 > 0)
				{
					func_148(uParam3, func_142(iParam1));
				}
				func_26(&(uParam0->f_1), 1);
			}
		}
		else if (!func_86(uParam0->f_1, 2))
		{
			if (iVar1 == 0)
			{
				iVar9 = func_142(iParam1);
				if (func_143(uParam3, iVar9))
				{
					iVar10 = func_149(uParam3, iVar9);
					if (!func_150((*uParam3)[iVar10]))
					{
						func_151(uParam3, iVar9, -1);
					}
				}
				func_26(&(uParam0->f_1), 2);
			}
		}
	}
	if (!func_86(uParam0->f_1, 4) && func_86(uParam0->f_1, 0))
	{
		func_26(&(uParam0->f_1), 4);
		func_152(iParam5, uParam0, iParam1, 1);
	}
	if (!func_86(uParam0->f_1, 5) && (iVar8 + iVar5) >= iVar0)
	{
		func_26(&(uParam0->f_1), 5);
		func_152(iParam5, uParam0, iParam1, 2);
	}
	if (!func_86(uParam0->f_1, 6) && (iVar8 > 0 || iVar5 >= iVar0))
	{
		func_26(&(uParam0->f_1), 6);
		func_152(iParam5, uParam0, iParam1, 3);
	}
	if (!func_86(uParam0->f_1, 0))
	{
		if (((iVar2 == iVar0 || func_86(uParam0->f_1, 6)) || iVar8 > 0) || iVar5 >= iVar0)
		{
			func_26(&(uParam0->f_1), 0);
			func_152(iParam5, uParam0, iParam1, 0);
		}
	}
	if (iVar0 <= 0)
	{
		return true;
	}
	else if (iVar7 == iVar0)
	{
		return true;
	}
	return false;
}

bool func_100(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar1))
		{
		}
		else if (func_134(uParam0, iParam1, (*uParam2)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	func_32(uParam0);
	return true;
}

bool func_101(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (uParam3->f_2)
	{
		return true;
	}
	if (!is_bit_set(iParam2, iParam0))
	{
		uParam3->f_2 = 1;
		return true;
	}
	vVar0 = { *uParam1->f_1621[iParam0] };
	if (func_153(vVar0))
	{
		uParam3->f_2 = 1;
		return true;
	}
	fVar3 = 25f;
	if (!_0xa4a4359320345b34(uParam3->f_1))
	{
		if (_0x397769175a7dbb30(vVar0, fVar3, 0, 0, 0))
		{
			uParam3->f_2 = 1;
			return true;
		}
		uVar4 = func_154(vVar0, 0f, 0f, 0f, fVar3, fVar3, fVar3, -432403087, 0, 8);
		iVar5 = count_player_bits(&uVar4);
		if (iVar5 > 0)
		{
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 <= 31)
			{
				if (_0x72b2e00c9bac6789(&uVar4, iVar7))
				{
					iVar6 = int_to_playerindex(iVar7);
					if ((network_is_player_active(iVar6) && iVar6 != player_id()) && !_0x81fb74c83c2ed69f(iVar6))
					{
						uParam3->f_2 = 1;
						return true;
					}
				}
				iVar7++;
			}
		}
		Var8 = { vVar0 };
		Var8.f_4 = fVar3;
		Var8.f_6 = get_hash_key("net_ugc_end_flow_transition_online");
		Var8.f_7 = iParam0;
		Var8.f_5 = 0;
		uParam3->f_1 = _0x183c0b6cfeffcae4(&Var8);
	}
	switch (_0xb33a604345f58202(uParam3->f_1))
	{
		case 3:
			*uParam3 = _0x351d71b8b72b858b(uParam3->f_1);
			return true;
		case 4:
			uParam3->f_1 = 0;
			uParam3->f_2 = 1;
			return true;
		case 0:
			uParam3->f_1 = 0;
			uParam3->f_2 = 1;
			return true;
		default:
			break;
	}
	return false;
}

int func_102(int iParam0, int iParam1, int iParam2)
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

bool func_103(vector3 vParam0, bool bParam3)
{
	if (vParam0.x == -1)
	{
		return false;
	}
	if (vParam0.y < 0 || vParam0.y >= 8)
	{
		return false;
	}
	if (!bParam3)
	{
		if (vParam0.z < 0 || vParam0.z >= 8)
		{
			return false;
		}
	}
	return true;
}

bool func_104(var uParam0)
{
	if (!func_103(uParam0->f_4, 1))
	{
		return false;
	}
	if (uParam0->f_2 == 3)
	{
		return true;
	}
	if (*uParam0 > 0)
	{
		return true;
	}
	return false;
}

bool func_105(vector3 vParam0, vector3 vParam3)
{
	if (vParam0.x != vParam3.x)
	{
		return false;
	}
	if (vParam0.y != vParam3.y)
	{
		return false;
	}
	if (vParam0.z != vParam3.z)
	{
		return false;
	}
	return true;
}

void func_106(int iParam0)
{
	func_155(&(Global_1298378->f_156), iParam0);
}

void func_107(int iParam0)
{
	func_155(&((*Global_1298536)[network_player_id_to_int()]->f_86), iParam0);
}

bool func_108(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_109()
{
	return Global_1102219->f_3672;
}

void func_110()
{
	if (Global_3407872->f_226 != 2)
	{
		return;
	}
	func_156(*Global_3407872->f_227[0]->f_2056[0]);
	func_107(1024);
}

void func_111()
{
	if (!func_25())
	{
		return;
	}
	func_107(64);
}

void func_112(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5)
{
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= iParam1)
	{
		return;
	}
	if (func_157(uParam2))
	{
		return;
	}
	if (!func_158(uParam0, uParam2, iParam3, uParam4, uParam5))
	{
		return;
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < iParam1)
	{
		vVar2 = { (*uParam0)[iVar1]->f_4 };
		if (!func_103(vVar2, 1))
		{
		}
		else if (uParam0[iVar1] > 4)
		{
		}
		else
		{
			switch (vVar2.x)
			{
				case 0:
					if (!func_133(iParam3, iVar1, &((*uParam4)[vVar2.y]->f_8)))
					{
					}
					else
					{
						Jump @212; //curOff = 182
						if (!func_133(iParam3, iVar1, (*uParam5)[vVar2.y]))
						{
						}
						else if (iVar0 == -1)
						{
							iVar0 = iVar1;
						}
						else if (iVar1 == iParam3 && iVar0 != iParam3)
						{
							iVar0 = iVar1;
						}
					}
					iVar1++;
					if (iVar0 == -1)
					{
					}
					else if (iVar0 >= 0 && iVar0 < *uParam0)
					{
						if (!func_105(uParam2->f_1, (*uParam0)[iVar0]->f_4))
						{
							uParam2->f_1 = { (*uParam0)[iVar0]->f_4 };
						}
						if (*uParam2 != iVar0)
						{
							*uParam2 = iVar0;
						}
					}
					default:
						break;
			}
		}
	}
}

void func_113(int* iParam0)
{
	iVar0 = func_159();
	if (_network_is_player_index_valid(iVar0))
	{
		iParam0->f_8 = iVar0;
	}
}

void func_114(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	iVar0 = uParam2->f_8;
	vVar2 = { uParam2->f_1 };
	while (iVar5 < 5)
	{
		switch (uParam2->f_8)
		{
			case 0:
				if (func_160(iParam1, uParam2, uParam3))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				iVar1 = func_161((*uParam0)[*uParam2], uParam2, (*uParam3)[vVar2.y]);
				if (iVar1 == 1)
				{
					iVar0 = 2;
				}
				else if (iVar1 == 2)
				{
					iVar0 = 0;
				}
				break;
			case 2:
				iVar1 = func_162((*uParam0)[*uParam2], iParam1, uParam2, (*uParam3)[vVar2.y]);
				if (iVar1 == 1)
				{
					iVar0 = 3;
				}
				else if (iVar1 == 2)
				{
					iVar0 = 4;
				}
				break;
			case 3:
				if (!func_163((*uParam0)[*uParam2], iParam1, uParam2, (*uParam3)[vVar2.y]))
				{
					iVar0 = 4;
				}
				break;
			case 4:
				func_164(iParam1, uParam2);
				iVar0 = 0;
				break;
		}
		if (iVar0 != uParam2->f_8)
		{
			uParam2->f_8 = iVar0;
			iVar5++;
		}
	else
	{
		}
	else
	{
		}
	}
}

int func_115(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 < 0 || iParam3 >= *uParam2)
	{
		return 0;
	}
	if (iParam4 < 0 || iParam4 >= *uParam2)
	{
		return 0;
	}
	iVar0 = (*uParam2)[iParam3]->f_4;
	while (iVar1 < 17)
	{
		vVar2 = { (*uParam2)[iParam3]->f_1 };
		iVar5 = uParam2[iParam3];
		if (func_103(vVar2, 1))
		{
			func_165((*uParam0)[iVar5], iParam1, (*uParam2)[iParam3], (*uParam7)[vVar2.y], iParam9);
		}
		switch ((*uParam2)[iParam3]->f_4)
		{
			case 0:
				if (func_166(uParam0, (*uParam2)[iParam3], iParam1))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				if (func_167((*uParam2)[iParam3], (*uParam7)[vVar2.y], iParam8))
				{
					iVar0 = 16;
				}
				else
				{
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_168((*uParam0)[iVar5], iParam1, (*uParam7)[vVar2.y], iParam8, iParam9))
				{
					iVar0 = 3;
				}
				break;
			case 3:
				if (func_169())
				{
					iVar0 = 4;
				}
				break;
			case 4:
				if (func_170(iParam1, (*uParam2)[iParam3], (*uParam7)[vVar2.y]))
				{
					iVar0 = 6;
				}
				break;
			case 6:
				if (func_171(iParam1, (*uParam2)[iParam3]))
				{
					iVar0 = 5;
				}
				break;
			case 5:
				if (func_172(iParam1, (*uParam2)[iParam3], (*uParam7)[vVar2.y]))
				{
					iVar0 = 7;
				}
				break;
			case 7:
				iVar6 = func_173(iParam1, (*uParam2)[iParam3], (*uParam7)[vVar2.y]);
				if (iVar6 == 1)
				{
					iVar0 = 8;
				}
				else if (iVar6 == 2)
				{
					iVar0 = 11;
				}
				break;
			case 8:
				if (func_174((*uParam0)[iVar5]))
				{
					iVar0 = 9;
				}
				break;
			case 9:
				if (func_175((*uParam0)[iVar5], iParam1, uParam2, iParam3, (*uParam7)[vVar2.y], iParam8, iParam9))
				{
					iVar0 = 10;
				}
				break;
			case 10:
				if (func_176((*uParam0)[iVar5], iParam1, (*uParam2)[iParam3], uParam5, uParam6, (*uParam7)[vVar2.y], iParam8))
				{
					iVar0 = 11;
				}
				break;
			case 11:
				iVar6 = func_177((*uParam0)[iVar5], iParam1, (*uParam2)[iParam3]);
				if (iVar6 == 1)
				{
					iVar0 = 13;
				}
				else if (iVar6 == 2)
				{
					iVar0 = 12;
				}
				break;
			case 12:
				if (func_178((*uParam0)[iVar5], (*uParam7)[vVar2.y]))
				{
					iVar0 = 13;
				}
				break;
			case 13:
				if (func_179(iParam1))
				{
					iVar0 = 14;
				}
				break;
			case 14:
				func_180((*uParam0)[iVar5], iParam1, (*uParam7)[vVar2.y], iParam8, iParam9);
				iVar0 = 15;
				break;
			case 15:
				if (func_181(iParam1, (*uParam2)[iParam3], (*uParam7)[vVar2.y], 0, bParam10))
				{
					iVar0 = 16;
				}
				break;
			case 16:
				if (func_182((*uParam0)[iVar5], iParam1, (*uParam2)[iParam3], (*uParam7)[vVar2.y]))
				{
					return 1;
				}
				break;
		}
		if (iVar0 != (*uParam2)[iParam3]->f_4)
		{
			(*uParam2)[iParam3]->f_4 = iVar0;
			iVar1++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

int func_116(int iParam0)
{
	if (func_183(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0)
{
	if (func_184(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_118(vector3 vParam0, var uParam3)
{
	if (func_153(vParam0))
	{
		return false;
	}
	if (func_81(255) == 4)
	{
		return false;
	}
	if (func_69(4, 255))
	{
	}
	func_117(4);
	func_185(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = uParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_186(Global_1102219->f_3879, 36);
	return true;
}

void func_119(bool bParam0, bool bParam1)
{
	if (func_81(255) == 4)
	{
		return;
	}
	if (func_153(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_116(0);
	}
	else
	{
		if (bParam1)
		{
			func_187(0, 0, 0, 1);
		}
		func_117(0);
		func_188(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_189(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_190(Global_1102219->f_3849, 36);
	func_191(Global_1102219->f_3888, 36);
}

bool func_120(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (!func_103(uParam0->f_1, 1))
	{
		return false;
	}
	return true;
}

void func_121(int iParam0)
{
	if (!func_192(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_122(int iParam0)
{
	if (!func_192(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_123(var uParam0)
{
	*uParam0 = -1;
	func_124(&(uParam0->f_1));
}

void func_124(var uParam0)
{
	func_125(uParam0);
	func_193(&(uParam0->f_13));
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

void func_125(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	func_194(&(uParam0->f_5));
	uParam0->f_10 = 0;
	func_89(&(uParam0->f_11));
}

void func_126(var uParam0)
{
	func_125(uParam0);
	uParam0->f_13 = 0;
}

void func_127(var uParam0)
{
	func_125(uParam0);
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
}

void func_128(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
}

void func_129(var uParam0)
{
	*uParam0 = 1;
	func_128(&(uParam0->f_1));
	uParam0->f_4 = 0;
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0f;
	uParam0->f_16 = 0f;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_195(uParam0->f_17[iVar0]);
		iVar0++;
	}
	uParam0->f_186 = 15f;
	uParam0->f_187 = 20f;
	uParam0->f_191 = 0;
	StringCopy(&(uParam0->f_192), "", 128);
	uParam0->f_208 = 0;
	StringCopy(&(uParam0->f_209), "", 64);
	StringCopy(&(uParam0->f_217), "", 64);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_196(uParam0->f_225[iVar0]);
		iVar0++;
	}
	uParam0->f_262 = 0;
	uParam0->f_263 = 0;
	uParam0->f_264 = 0;
	uParam0->f_265 = { 0f, 0f, 0f };
	uParam0->f_268 = { 0f, 0f, 0f };
	uParam0->f_271 = 0f;
	uParam0->f_272 = 0;
	uParam0->f_273 = 0f;
	uParam0->f_274 = 0;
	uParam0->f_275 = 0;
	func_197(&(uParam0->f_276));
	uParam0->f_292 = 1000;
}

void func_130(var uParam0)
{
	func_198(uParam0);
	func_199(&(uParam0->f_524));
	func_200(&(uParam0->f_550));
	uParam0->f_1539 = 0;
	uParam0->f_1540 = 0;
	uParam0->f_1541 = 0;
	uParam0->f_1542 = 0;
	uParam0->f_1543 = 0;
	uParam0->f_1544 = 0;
	uParam0->f_1545 = 0;
}

void func_131(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = { 0f, 0f, 0f };
	uParam0->f_13 = -1;
	uParam0->f_14 = 255;
	func_89(&(uParam0->f_15));
	func_89(&(uParam0->f_17));
	func_89(&(uParam0->f_19));
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = -1;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	func_201(&(uParam0->f_29));
}

void func_132(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (network_is_game_in_progress() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = get_network_time();
			}
			else
			{
				*uParam0 = get_network_time_accurate();
			}
		}
		else
		{
			*uParam0 = get_game_timer();
		}
		uParam0->f_1 = 1;
	}
}

bool func_133(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return false;
	}
	if (iParam1 == iParam0)
	{
		return true;
	}
	if (is_bit_set(uParam2->f_19, iParam0))
	{
		return true;
	}
	return false;
}

bool func_134(var uParam0, int iParam1, var uParam2)
{
	if (!func_202(uParam0))
	{
		return false;
	}
	if (!func_120(uParam2))
	{
		return false;
	}
	if (*uParam2 != iParam1)
	{
		return false;
	}
	if (!func_105(uParam0->f_4, uParam2->f_1))
	{
		return false;
	}
	return true;
}

void func_135(var uParam0)
{
	func_88(uParam0);
}

bool func_136(int iParam0, var uParam1, var uParam2)
{
	iVar0 = func_137(uParam1->f_1.f_2);
	if (!func_203(get_player_ped(iParam0), *uParam2->f_1621[iVar0], to_float(uParam2->f_1)))
	{
		return false;
	}
	return true;
}

int func_137(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		iParam0 = 0;
	}
	return iParam0;
}

void func_138(var uParam0, vector3 vParam1)
{
	Var0 = 4;
	Var0.f_1.f_1 = 255;
	Var0.f_1.f_1.f_2 = -1;
	Var0.f_1.f_1.f_3 = -1;
	Var0.f_1.f_1.f_4 = -1;
	Var0.f_1.f_6.f_1 = 255;
	Var0.f_1.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_1.f_4 = -1;
	Var0.f_1.f_6.f_6.f_1 = 255;
	Var0.f_1.f_6.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_6.f_1.f_4 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1 = 255;
	Var0.f_1.f_6.f_6.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1.f_4 = -1;
	iVar25 = 0;
	while (iVar25 < *uParam0)
	{
		Var0[iVar25]->f_1 = { *(*uParam0)[iVar25] };
		Var0[iVar25] = 99999.9f;
		if (uParam0[iVar25] == 255)
		{
		}
		else
		{
			vVar26 = { get_entity_coords(get_player_ped(uParam0[iVar25]), false, false) };
			Var0[iVar25] = get_distance_between_coords(vVar26, vParam1, true);
		}
		iVar25++;
	}
	_0x7e300b5b86ab1d1a(&Var0, Var0, 6, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	iVar25 = 0;
	while (iVar25 < *uParam0)
	{
		_copy_memory((*uParam0)[iVar25], &(Var0[iVar25]->f_1), 5);
		iVar25++;
	}
}

int func_139(int iParam0, var uParam1, int iParam2)
{
	fVar1 = -1f;
	iVar4 = 0;
	switch (uParam1->f_1646)
	{
		case 1:
			iVar5 = 0;
			while (iVar5 < 2)
			{
				fVar6 = vdist2(get_entity_coords(iParam0, false, false), *uParam1->f_24[0]->f_11[iVar5]);
				if (fVar6 < fVar1 || fVar1 == -1f)
				{
					fVar6 = fVar1;
					iVar0 = iVar5;
				}
				iVar5++;
			}
			return iVar0;
		case 2:
			iVar5 = 0;
			while (iVar5 < 2)
			{
				if (func_204(*iParam2, &(uParam1->f_1647[iVar5]), -1566524474, &uVar2, &uVar3, &iVar4) != 1)
				{
				}
				else
				{
					iVar7 = _0xf18af483df70bbde(uVar2);
					if (!_does_volume_exist(iVar7))
					{
					}
					else if (is_entity_in_volume(iParam0, iVar7, false, 0))
					{
						func_205(iVar7);
						return iVar5;
					}
					else
					{
						func_205(iVar7);
					}
				}
				iVar5++;
			}
			break;
	}
	return 0;
}

void func_140(var uParam0, var uParam1, int iParam2, var uParam3)
{
	iVar1 = 0;
	while (iVar1 < 4)
	{
		(*uParam3)[iVar1] = -1;
		if (&uParam0->f_7[iVar1] != 255)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (uParam1->f_16 > iVar0)
	{
	}
	iVar2 = uParam1->f_17;
	if (iVar2 <= 0)
	{
		iVar2 = 3;
	}
	iVar2 = func_102(iVar2, 0, iVar0);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 < iVar2)
	{
		bVar6 = iVar4 >= uParam1->f_16;
		iVar7 = &uParam1->f_24[iVar4];
		iVar8 = -1;
		while (iVar8 == -1)
		{
			switch (iVar7)
			{
				case 0:
					iVar8 = func_206(&(uParam0->f_7), iVar3, bVar6);
					break;
				case 1:
					iVar8 = func_207(&(uParam0->f_7), iVar3, bVar6, uParam0->f_28);
					break;
				case 3:
					iVar8 = func_208(&(uParam0->f_7), iVar3, bVar6);
					break;
				case 2:
					iVar8 = func_209(&(uParam0->f_7), iVar3, bVar6, uParam1->f_24[iVar4]);
					break;
				case 4:
					iVar8 = func_210(&(uParam0->f_7), iVar3, bVar6, uParam1->f_24[iVar4], iParam2);
					break;
				case 5:
					iVar8 = func_211(&(uParam0->f_7), iVar3, bVar6);
					break;
				case 6:
					iVar8 = func_212(&(uParam0->f_7), iVar3, bVar6, uParam1->f_24[iVar4]);
					break;
			}
			if (iVar8 != -1 && &uParam0->f_7[iVar8] != 255)
			{
				(*uParam3)[iVar4] = iVar8;
				iVar5++;
				set_bit(&iVar3, iVar8);
				Jump @393; //curOff = 369
			}
			else if (iVar7 != 0)
			{
				iVar7 = 0;
			}
		else
		{
			}
		else
		{
			}
		}
		iVar4++;
	}
	if (iVar5 < uParam1->f_16)
	{
	}
}

bool func_141(var uParam0)
{
	if (func_35(uParam0->f_18, 65536))
	{
		return true;
	}
	return false;
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 6;
		case 4:
			return 7;
		case 5:
			return 8;
		case 6:
			return 9;
		case 7:
			return 10;
		default:
			break;
	}
	return 0;
}

bool func_143(var uParam0, int iParam1)
{
	return func_149(uParam0, iParam1) > -1;
}

void func_144(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_213(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	(*uParam0)[iVar0] = iParam1;
	if (bParam2)
	{
		set_bit(&((*uParam0)[iVar0]->f_1), 6);
	}
	if (bParam3)
	{
		set_bit(&((*uParam0)[iVar0]->f_1), 7);
	}
	if (bParam4)
	{
		set_bit(&((*uParam0)[iVar0]->f_1), 8);
	}
}

int func_145(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_146(var uParam0, int iParam1)
{
	*uParam0 = get_time_offset(*uParam0, iParam1);
}

void func_147(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bVar0 = func_143(uParam1, func_142(iParam2));
	bVar1 = _0x31dad2cd6d49546e(get_id_of_this_thread());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (bVar1)
		{
			if (!network_is_participant_active(int_to_participantindex(iVar2)))
			{
			}
			else
			{
				Jump @73; //curOff = 61
				if (iVar2 != 0)
				{
				}
				else
				{
					if (!func_134(uParam0, iParam2, (*uParam3)[iVar2]))
					{
					}
					else
					{
						*iParam5++;
						bVar3 = false;
						if (func_35((*uParam3)[iVar2]->f_5, 2))
						{
							bVar3 = true;
						}
						if (func_84((*uParam3)[iVar2]))
						{
							*iParam6++;
							bVar3 = true;
							if (bVar0 && func_214((*uParam4)[iVar2], func_142(iParam2)))
							{
								*iParam7++;
							}
							if (func_35((*uParam3)[iVar2]->f_5, 1))
							{
								*iParam10++;
							}
						}
						else if ((*uParam3)[iVar2]->f_4 == 12)
						{
							*iParam9++;
							bVar3 = true;
						}
						else if (func_215((*uParam3)[iVar2]))
						{
							*iParam12++;
							bVar3 = true;
						}
						else if (func_216((*uParam3)[iVar2]))
						{
							*iParam11++;
							bVar3 = true;
						}
						if (bVar3)
						{
							*iParam8++;
						}
					}
					iVar2++;
				}
			}
		}
	}
}

void func_148(var uParam0, int iParam1)
{
	iVar0 = func_149(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	set_bit(&((*uParam0)[iVar0]->f_1), 0);
}

int func_149(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_150(var uParam0)
{
	return is_bit_set(uParam0->f_1, 1);
}

void func_151(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_149(uParam0, iParam1);
	}
	if (iParam2 == -1)
	{
		return;
	}
	set_bit(&((*uParam0)[iParam2]->f_1), 4);
}

void func_152(int iParam0, var uParam1, int iParam2, int iParam3)
{
	Stack.Push(uParam1);
	Stack.Push(iParam2);
	Stack.Push(iParam3);
	Call_Loc(iParam0);
}

bool func_153(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

var func_154(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, var uParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_217() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_218());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_218());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_218());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_219(get_player_team(iVar5)));
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
			if (func_220(iVar2))
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
				if (iVar9 & 8192 != 0 && func_81(iVar2) != 1)
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
					if (!func_221(iVar10))
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

void func_155(var uParam0, int iParam1)
{
	func_222(uParam0, iParam1);
}

void func_156(struct<16> Param0)
{
	Global_1298378->f_140 = { Param0 };
}

bool func_157(var uParam0)
{
	if (!func_120(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 == 0)
	{
		return false;
	}
	return true;
}

bool func_158(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_103(uParam1->f_1, 1))
	{
		return true;
	}
	else if (*uParam1 < 0 || *uParam1 >= *uParam0)
	{
		return true;
	}
	else if (((iParam2 >= 0 && iParam2 < *uParam0) && iParam2 != *uParam1) && func_103((*uParam0)[iParam2]->f_4, 1))
	{
		return true;
	}
	else if (!func_105(uParam1->f_1, (*uParam0)[*uParam1]->f_4))
	{
		return true;
	}
	else
	{
		vVar0 = { uParam1->f_1 };
		switch (vVar0.x)
		{
			case 0:
				if (vVar0.y >= *uParam3 || !func_133(iParam2, *uParam1, &((*uParam3)[vVar0.y]->f_8)))
				{
					return true;
				}
				break;
			case 1:
				if (vVar0.y >= *uParam4 || !func_133(iParam2, *uParam1, (*uParam4)[vVar0.y]))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

int func_159()
{
	iVar0 = 255;
	iVar1 = func_223();
	if (func_224(iVar1))
	{
		return player_id();
	}
	if (does_entity_exist(iVar1))
	{
		if (is_entity_a_ped(iVar1))
		{
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (is_ped_a_player(iVar2))
			{
				iVar0 = network_get_player_index_from_ped(iVar2);
			}
		}
	}
	return iVar0;
}

bool func_160(int* iParam0, var uParam1, var uParam2)
{
	if (!func_225(uParam1))
	{
		return false;
	}
	iVar0 = uParam1->f_1.f_1;
	iVar1 = func_137(uParam1->f_1.f_2);
	if (!func_226((*uParam2)[iVar0], 0))
	{
		return false;
	}
	iParam0->f_1483.f_192 = { *(*uParam2)[iVar0]->f_2056[iVar1] };
	func_227(&(iParam0->f_1483), 8192);
	func_228(&(iParam0->f_1483), 2);
	func_229(&(iParam0->f_1483.f_264), 1);
	func_227(&(iParam0->f_1483), 2);
	func_230(&(iParam0->f_1483.f_263), 4);
	func_230(&(iParam0->f_1483.f_263), 8388608);
	func_229(&(iParam0->f_1483.f_264), 2048);
	func_229(&(iParam0->f_1483.f_264), 1024);
	if (func_231(140))
	{
		func_230(&(iParam0->f_1483.f_263), 2097152);
	}
	if ((*uParam2)[iVar0]->f_2267 > -1)
	{
		iParam0->f_1483.f_292 = (*uParam2)[iVar0]->f_2267;
	}
	if (func_35((*uParam2)[iVar0]->f_1650, 64))
	{
		func_26(iParam0, 12);
	}
	if (func_35((*uParam2)[iVar0]->f_1650, 2))
	{
		vVar2 = { *(*uParam2)[iVar0]->f_1621[iVar1] };
		fVar5 = (*uParam2)[iVar0]->f_2056[iVar1]->f_16;
		func_232(&(iParam0->f_1483), vVar2, 0f, 0f, fVar5);
	}
	if (!is_string_null_or_empty(&((*uParam2)[iVar0]->f_2056[iVar1]->f_17)))
	{
		func_233(&(iParam0->f_1483), &((*uParam2)[iVar0]->f_2056[iVar1]->f_17));
	}
	else
	{
		func_228(&(iParam0->f_1483), 1);
	}
	if ((*uParam2)[iVar0]->f_2265 >= 0 && (*uParam2)[iVar0]->f_2265 < 8)
	{
		iVar6 = (*uParam2)[iVar0]->f_2265;
		cVar7 = { (*uParam2)[iVar0]->f_2056[iVar6]->f_17 };
		if (!is_string_null_or_empty(&cVar7))
		{
			func_234(&(iParam0->f_1483), &cVar7, 1);
		}
	}
	if ((*uParam2)[iVar0]->f_2266 >= 0 && (*uParam2)[iVar0]->f_2266 < 8)
	{
		iVar11 = (*uParam2)[iVar0]->f_2266;
		cVar12 = { (*uParam2)[iVar0]->f_2056[iVar11]->f_17 };
		if (!is_string_null_or_empty(&cVar12))
		{
			func_234(&(iParam0->f_1483), &cVar12, 1);
		}
	}
	return true;
}

int func_161(var uParam0, var uParam1, var uParam2)
{
	if (func_235(uParam1))
	{
		return 2;
	}
	if (func_236() != 0 && func_223() != func_237())
	{
		return 2;
	}
	if (uParam0->f_2 == 3 || uParam0->f_2 == 2)
	{
		return 1;
	}
	iVar0 = func_137(uParam1->f_9.f_2);
	if (func_238(player_ped_id(), *uParam2->f_1621[iVar0], 200f, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_162(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	iVar0 = func_239(uParam0, iParam1, uParam2, uParam3);
	if (iVar0 == 2)
	{
		return 2;
	}
	iVar1 = func_137(uParam2->f_9.f_2);
	if (!func_240(&(iParam1->f_1483), uParam3->f_2056[iVar1], 1, 1))
	{
		iVar0 = 0;
	}
	else if (func_35(uParam3->f_1650, 2))
	{
		set_anim_scene_origin(iParam1->f_1483.f_208, *uParam3->f_1621[iVar1], 0f, 0f, uParam3->f_2056[iVar1]->f_16, 2);
	}
	if (!_does_anim_scene_exist(iParam1->f_1483.f_208) || !_is_anim_scene_metadata_loaded(iParam1->f_1483.f_208, false))
	{
		iVar0 = 0;
	}
	else if (_0x6f1f0b17109309da(iParam1->f_1483.f_208, "P_BINOCULARS01x"))
	{
		request_model(iLocal_13, false);
		if (!has_model_loaded(iLocal_13))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
	}
	return iVar0;
}

bool func_163(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	if (!func_241(uParam0, uParam2, uParam3))
	{
		return false;
	}
	iVar0 = func_137(uParam2->f_9.f_2);
	if (uParam2->f_4 < 10)
	{
		if (!func_240(&(iParam1->f_1483), uParam3->f_2056[iVar0], 1, 1))
		{
			return false;
		}
	}
	return true;
}

void func_164(int* iParam0, var uParam1)
{
	func_242(iParam0, uParam1);
	set_model_as_no_longer_needed(iLocal_13);
	func_50(&(iParam0->f_1483));
	func_51(&(iParam0->f_1483));
}

void func_165(var uParam0, int* iParam1, var uParam2, var uParam3, int iParam4)
{
	func_243(iParam1, uParam2, uParam3);
	if (uParam2->f_4 >= 3 && uParam2->f_4 <= 11)
	{
		iParam1->f_1466 = func_244(uParam0, iParam1, uParam2, uParam3, iParam4);
	}
}

bool func_166(var uParam0, var uParam1, int* iParam2)
{
	if (!func_103(uParam1->f_1, 1))
	{
		return false;
	}
	if (*uParam1 == -1)
	{
		return false;
	}
	if (!func_105((*uParam0)[*uParam1]->f_4, uParam1->f_1))
	{
		return false;
	}
	if ((*uParam0)[*uParam1]->f_2 != 3)
	{
		return false;
	}
	if (func_48(iParam2))
	{
		_0x007ff852dcf49da4(7);
	}
	func_245();
	if (_is_loading_screen_active())
	{
		do_screen_fade_out(0);
	}
	return true;
}

bool func_167(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_137(uParam0->f_1.f_2);
	if (!func_203(player_ped_id(), *uParam1->f_1621[iVar0], to_float(*uParam1)))
	{
		uParam0->f_6 = 1;
		func_246(iParam2, 4);
		return true;
	}
	return false;
}

bool func_168(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4)
{
	if (*uParam0 <= 4)
	{
		return false;
	}
	if (func_35(uParam2->f_18, 256))
	{
		func_140(uParam0, uParam2, iParam4, &(iParam1->f_1));
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = uParam0->f_7[iVar0]->f_4;
			if (iVar1 < 0 || iVar1 >= 4)
			{
			}
			else
			{
				iParam1->f_1[iVar1] = iVar0;
			}
			iVar0++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = &iParam1->f_1[iVar2];
		if (iVar3 < 0 || iVar3 >= 4)
		{
		}
		else if (&uParam0->f_7[iVar3] == 255)
		{
		}
		else if (&uParam0->f_7[iVar3] != player_id())
		{
		}
		else
		{
			iParam1->f_6 = iVar2;
		}
		else
		{
			iVar2++;
		}
	}
	func_246(iParam3, 0);
	return true;
}

bool func_169()
{
	if (!func_247(255))
	{
		set_player_invincible(player_id(), true);
		_0x64ff4bf9af59e139(player_id(), 1);
		func_248(0);
	}
	set_bit(&(Global_1957959->f_1), 5);
	Global_1048584 = 1;
	return true;
}

bool func_170(int* iParam0, var uParam1, var uParam2)
{
	if (func_249() == 0)
	{
		return true;
	}
	if (!func_86(*iParam0, 9))
	{
		bVar0 = true;
		if (func_247(255))
		{
			func_26(iParam0, 8);
		}
		else if (!func_250())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			if (is_screen_faded_in() || is_screen_fading_in())
			{
				func_251(uParam1, 250);
			}
			else if (is_screen_faded_out())
			{
				func_26(iParam0, 9);
				if (func_86(*iParam0, 8))
				{
					set_entity_coords(player_ped_id(), *uParam2->f_1621[func_137(iParam0->f_7)], false, false, true, true);
				}
				func_252(128);
				func_252(64);
				func_187(0, 0, 0, 1);
			}
		}
	}
	return false;
}

bool func_171(int* iParam0, var uParam1)
{
	if (func_86(*iParam0, 8))
	{
		return true;
	}
	if (func_253(255) && func_254())
	{
		return true;
	}
	if (func_69(11, 255))
	{
		return false;
	}
	if (func_254())
	{
		return false;
	}
	if (is_screen_faded_out() || (func_14(&(iParam0->f_1473)) && func_36(&(iParam0->f_1473), 1, 0) > 5000))
	{
		if (func_255())
		{
			func_256();
			func_76(1);
			func_77(1);
			func_78(1);
			func_79(1);
			func_82(&(uParam1->f_5), 16);
		}
		if (func_257(0))
		{
			func_258();
		}
	}
	else if (is_screen_faded_in())
	{
		if (!func_14(&(iParam0->f_1473)))
		{
			func_15(&(iParam0->f_1473), 1, 0);
		}
		func_251(uParam1, 500);
		if (func_255())
		{
			func_76(1);
			func_77(1);
			func_78(1);
		}
	}
	return false;
}

bool func_172(int* iParam0, var uParam1, var uParam2)
{
	if (_is_loading_screen_active())
	{
		return false;
	}
	if (!func_259(uParam1, uParam2))
	{
		return false;
	}
	iVar0 = func_137(uParam1->f_1.f_2);
	if (func_260(iParam0, uParam1, *uParam2->f_1621[iVar0]))
	{
		func_261(iParam0, 7);
		return true;
	}
	return false;
}

int func_173(int* iParam0, var uParam1, var uParam2)
{
	if (func_35(uParam1->f_5, 4))
	{
		return 2;
	}
	if (_is_loading_screen_active() || func_262())
	{
		return 0;
	}
	if (func_35(uParam2->f_18, 2) && !func_86(*iParam0, 6))
	{
		return 0;
	}
	if (!func_105(uParam1->f_9, uParam1->f_1))
	{
		return 0;
	}
	if (uParam1->f_8 != 3)
	{
		return 0;
	}
	if (!iParam0->f_1466)
	{
		return 0;
	}
	return 1;
}

bool func_174(var uParam0)
{
	if (*uParam0 < 6)
	{
		return false;
	}
	if (!func_14(&(uParam0->f_31)))
	{
		return false;
	}
	iVar0 = func_36(&(uParam0->f_31), 0, 1);
	if (iVar0 < 0)
	{
		return false;
	}
	return true;
}

bool func_175(var uParam0, int* iParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6)
{
	if (!func_86(*iParam1, 2))
	{
		iParam1->f_7 = func_137((*uParam2)[iParam3]->f_1.f_2);
		iVar0 = 0;
		iVar1 = func_263(iParam1, 0);
		if (iVar1 >= 0 && iVar1 < 4)
		{
			iVar0 = get_player_ped(&(uParam0->f_7[iVar1]));
		}
		if (does_entity_exist(iVar0))
		{
			if (is_ped_male(iVar0))
			{
				if ((uParam4->f_2265 >= 0 && uParam4->f_2265 < 8) && !is_string_null_or_empty(&(uParam4->f_2056[uParam4->f_2265]->f_17)))
				{
					iParam1->f_7 = uParam4->f_2265;
				}
			}
			else if ((uParam4->f_2266 >= 0 && uParam4->f_2266 < 8) && !is_string_null_or_empty(&(uParam4->f_2056[uParam4->f_2266]->f_17)))
			{
				iParam1->f_7 = uParam4->f_2266;
			}
		}
		Var2 = { func_264(&(iParam1->f_1483)) };
		if (((iParam1->f_7 >= 0 && iParam1->f_7 < 8) && !is_string_null_or_empty(&(uParam4->f_2056[iParam1->f_7]->f_17))) && !are_strings_equal(&Var2, &(uParam4->f_2056[iParam1->f_7]->f_17)))
		{
			func_265(&(iParam1->f_1483), &(uParam4->f_2056[iParam1->f_7]->f_17));
		}
		func_266(&(iParam1->f_1483));
		iVar10 = 0;
		while (iVar10 < 4)
		{
			iVar11 = get_ped_index_from_entity_index(iParam1->f_14[iVar10]->f_1.f_2);
			Var12 = { func_267(uParam4->f_1651[iVar10], iVar11, iVar10, 0) };
			if (func_268(iParam1, &Var12, iParam1->f_14[iVar10]->f_1.f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 20)
		{
			if (func_268(iParam1, uParam4->f_1668[iVar10], iParam1->f_99[iVar10]->f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 20)
		{
			if (func_268(iParam1, uParam4->f_1829[iVar10], iParam1->f_500[iVar10]->f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 10)
		{
			if (func_268(iParam1, uParam4->f_1910[iVar10], iParam1->f_761[iVar10]->f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 1)
		{
			if (func_268(iParam1, uParam4->f_1951[iVar10], iParam1->f_1089[iVar10]->f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 10)
		{
			if (func_268(iParam1, uParam4->f_1956[iVar10], iParam1->f_892[iVar10]->f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 5)
		{
			if (func_268(iParam1, uParam4->f_1997[iVar10], iParam1->f_1023[iVar10]->f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 24)
		{
			StringCopy(&cVar16, "", 32);
			if (!func_269(iParam1, uParam4, iVar10, 0, &cVar16, 0, 0))
			{
			}
			if (func_268(iParam1, &cVar16, iParam1->f_1104[iVar10]->f_2))
			{
			}
			iVar10++;
		}
		func_270(&(iParam1->f_1483));
		func_271(&(iParam1->f_1483), 1);
		if (func_35(uParam0->f_3, 2))
		{
			func_227(&(iParam1->f_1483), 524288);
			func_228(&(iParam1->f_1483), 4);
		}
		if (func_35(uParam4->f_1650, 8) && !func_86(*iParam1, 3))
		{
			if (are_strings_equal(uParam4->f_2056[iParam1->f_7], "cutscene@mpgvo1_int"))
			{
				func_26(iParam1, 3);
			}
		}
		func_26(iParam1, 2);
		iVar20 = 0;
		while (iVar20 < 4)
		{
			iVar21 = func_263(iParam1, iVar20);
			if (iVar21 < 0 || iVar21 >= 4)
			{
			}
			else if (&uParam0->f_7[iVar21] == 255)
			{
			}
			else
			{
				iVar22 = uParam0->f_7[iVar21]->f_3;
				if (&uParam0->f_7[iVar21] == player_id())
				{
					if (_0x6f1f0b17109309da(iParam1->f_1483.f_208, "local_player_variation"))
					{
						set_anim_scene_int(iParam1->f_1483.f_208, "local_player_variation", iVar22 + 1, false);
					}
				}
				StringCopy(&cVar23, "mp_player_", 24);
				StringIntConCat(&cVar23, iVar20 + 1, 24);
				StringConCat(&cVar23, "_variation", 24);
				if (_0x6f1f0b17109309da(iParam1->f_1483.f_208, &cVar23))
				{
					set_anim_scene_int(iParam1->f_1483.f_208, &cVar23, iVar22 + 1, false);
				}
			}
			iVar20++;
		}
	}
	func_272(*uParam4->f_2056[iParam1->f_7], &(iParam1->f_1483));
	if (_does_anim_scene_exist(iParam1->f_1483.f_208) && _is_anim_scene_started(iParam1->f_1483.f_208, false))
	{
		func_273(iParam1, uParam0, (*uParam2)[iParam3], uParam4, iParam5);
		if (func_35(uParam4->f_1650, 4))
		{
			func_274(0, iParam6);
			func_26(iParam1, 4);
		}
		iVar26 = 0;
		while (iVar26 < 3)
		{
			if (is_string_null_or_empty(&(uParam4->f_2043[iVar26]->f_1)))
			{
			}
			else if (!_0x6f1f0b17109309da(iParam1->f_1483.f_208, &(uParam4->f_2043[iVar26]->f_1)))
			{
			}
			else if (!is_bit_set(uParam4->f_2056[iParam1->f_7]->f_25, iVar26))
			{
			}
			else
			{
				func_275(iParam1, &(uParam4->f_2043[iVar26]), uParam4->f_2043[iVar26]->f_1, &(uParam4->f_2056[iParam1->f_7]->f_21[iVar26]));
			}
			iVar26++;
		}
		return true;
	}
	return false;
}

bool func_176(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	func_276(uParam2, iParam1, uParam5);
	bVar0 = false;
	if (func_277(uParam0, iParam1, uParam2, uParam3, uParam4, uParam5, iParam6, &bVar0))
	{
		func_227(&(iParam1->f_1483), 524288);
		func_228(&(iParam1->f_1483), 4);
		if (!func_86(*iParam1, 1))
		{
			if (bVar0)
			{
				func_227(&(iParam1->f_1483), 67108864);
			}
			func_26(iParam1, 1);
		}
	}
	if (func_272(*uParam5->f_2056[iParam1->f_7], &(iParam1->f_1483)))
	{
		if (func_48(iParam1))
		{
			func_278(uParam0, 0);
		}
		return true;
	}
	else if (_does_anim_scene_exist(iParam1->f_1483.f_208))
	{
		if (_is_anim_scene_started(iParam1->f_1483.f_208, false))
		{
			iVar1 = round((_get_anim_scene_duration(iParam1->f_1483.f_208) * 1000f));
			iVar2 = round((_get_anim_scene_time(iParam1->f_1483.f_208) * 1000f));
			bVar3 = !has_anim_event_fired(get_ped_index_from_entity_index(iParam1->f_14[0]->f_1.f_2), get_hash_key("NotFinalPlaylist"));
			if (!func_35(uParam2->f_5, 1))
			{
				if (bVar3 && func_279(uParam5, iVar1, iVar2))
				{
					func_82(&(uParam2->f_5), 1);
				}
			}
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (is_bit_set(uParam2->f_7, iVar4))
				{
				}
				else if (_0x375f5870a7b8bec1(&(uParam5->f_2018[iVar4]->f_1)))
				{
				}
				else if (_0x375f5870a7b8bec1(&(uParam5->f_2018[iVar4]->f_4)))
				{
				}
				else if (!_0x6f1f0b17109309da(iParam1->f_1483.f_208, &(uParam5->f_2018[iVar4]->f_1)))
				{
				}
				else
				{
					iVar5 = func_280(iParam1->f_1483.f_208, &(uParam5->f_2018[iVar4]->f_1), 0);
					if (!does_entity_exist(iVar5))
					{
					}
					else if (!has_anim_event_fired(iVar5, get_hash_key(&(uParam5->f_2018[iVar4]->f_4))))
					{
					}
					else
					{
						set_bit(&(uParam2->f_7), iVar4);
					}
				}
				iVar4++;
			}
			if (!func_35(uParam2->f_5, 8))
			{
				if (func_86(uParam0->f_1, 0))
				{
					if (_get_anim_scene_entity_matrix(iParam1->f_1483.f_208, "ExportCamera", &Var6, false, 0, 2) && !func_153(Var6.f_6))
					{
						iParam1->f_9 = { Var6.f_6 };
						set_focus_pos_and_vel(iParam1->f_9, 0f, 0f, 0f);
					}
					func_82(&(uParam2->f_5), 8);
				}
			}
			if ((bVar3 && uParam5->f_2269 > -2) && !func_86(*iParam1, 11))
			{
				iVar18 = 1000;
				if (uParam5->f_2269 > -1)
				{
					iVar18 = uParam5->f_2269;
				}
				if (func_281(uParam5, iVar1, iVar2, iVar18 + 100))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
						do_screen_fade_out(iVar18);
					}
					func_227(&(iParam1->f_1483), 524288);
					func_228(&(iParam1->f_1483), 4);
					func_246(iParam6, 7);
					func_26(iParam1, 11);
				}
			}
		}
	}
	return false;
}

int func_177(var uParam0, int* iParam1, var uParam2)
{
	bVar0 = true;
	if (!iParam1->f_1466)
	{
		if (!func_14(&(iParam1->f_1469)))
		{
			if (func_86(uParam0->f_1, 0))
			{
				func_15(&(iParam1->f_1469), 0, 0);
			}
		}
		if (is_screen_faded_in())
		{
		}
		else if (func_14(&(iParam1->f_1469)) && func_282(&(iParam1->f_1469), 5000, 0))
		{
		}
		else
		{
			bVar0 = false;
		}
	}
	if (!func_260(iParam1, uParam2, 0f, 0f, 0f))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_283(&(iParam1->f_1469));
		func_261(iParam1, 7);
		if (func_35(uParam2->f_5, 4))
		{
			return 2;
		}
		return 1;
	}
	return 0;
}

bool func_178(var uParam0, var uParam1)
{
	if (!func_86(uParam0->f_1, 0))
	{
		return false;
	}
	if (func_35(uParam1->f_18, 1) && !func_86(uParam0->f_1, 6))
	{
		return false;
	}
	return true;
}

bool func_179(int* iParam0)
{
	if (!func_86(*iParam0, 8))
	{
		return true;
	}
	func_252(64);
	func_252(128);
	if (func_247(255))
	{
		return true;
	}
	if (!func_86(*iParam0, 10))
	{
		if (iParam0->f_8 != 255 && network_is_player_active(iParam0->f_8))
		{
			iVar0 = get_player_ped(iParam0->f_8);
		}
		func_26(iParam0, 10);
		func_252(128);
		func_252(64);
		func_284(7, iVar0, 1, 0);
	}
	return false;
}

void func_180(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4)
{
	func_285(uParam0, iParam1, uParam2, iParam3);
	if (func_35(uParam2->f_1650, 4) && func_86(*iParam1, 4))
	{
		func_274(1, iParam4);
		func_261(iParam1, 4);
	}
}

bool func_181(int* iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	iVar0 = 1;
	if (func_35(uParam1->f_5, 16))
	{
		if ((bParam4 || !bParam3) || !_0x251241caec707106())
		{
			func_286(&(uParam1->f_5), 16);
			if (!is_player_control_on(player_id()) && func_287(iParam0, uParam2))
			{
				func_288(1, 2);
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (!func_86(*iParam0, 8))
	{
		if (!func_35(uParam2->f_18, 512))
		{
			if (!bParam4 && func_36(&(iParam0->f_1471), 0, 0) <= 4000)
			{
				set_ped_reset_flag(player_ped_id(), 25, true);
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_182(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	if (*uParam0 < 7)
	{
		return false;
	}
	if (!is_player_control_on(player_id()) && func_287(iParam1, uParam3))
	{
		func_288(1, 2);
	}
	func_27(iParam1, uParam2);
	return true;
}

bool func_183(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_184(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_185(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_186(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_187(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_289(iParam0);
	if (!func_290(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_291(128) && !func_231(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_292() == 4)
	{
		func_116(18);
	}
	func_252(1024);
}

void func_188(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_189(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_190(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (does_entity_exist(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (_does_volume_exist(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_191(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_192(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_193(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -2;
}

void func_194(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = -1f;
}

void func_195(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
}

void func_196(char* sParam0)
{
	StringCopy(sParam0, "", 64);
	sParam0->f_8 = 0;
}

void func_197(char* sParam0)
{
	StringCopy(sParam0, "", 64);
	StringCopy(&(sParam0->f_8), "", 64);
}

void func_198(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_293((*uParam0)[iVar0]);
		iVar0++;
	}
	uParam0->f_91 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		uParam0->f_92[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_123 = 0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		uParam0->f_124[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_185[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			(*uParam0->f_188[iVar0])[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			(*uParam0->f_414[iVar0])[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			(*uParam0->f_511[iVar0])[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
}

void func_199(var uParam0)
{
}

void func_200(var uParam0)
{
	*uParam0 = 0;
	func_294(&(uParam0->f_1));
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_99[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_103[iVar0] = 0;
		iVar0++;
	}
	StringCopy(&(uParam0->f_107), "", 24);
	uParam0->f_110 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_111[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_116[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_121 = 0;
	iVar0 = 0;
	while (iVar0 < 75)
	{
		func_295(uParam0->f_122[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_295(uParam0->f_273[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		uParam0->f_314[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_390[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		uParam0->f_423[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_499[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_296(uParam0->f_532[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		func_89(uParam0->f_583[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		func_89(uParam0->f_734[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_89(uParam0->f_885[iVar0]);
		iVar0++;
	}
	func_297(&(uParam0->f_950));
}

void func_201(var uParam0)
{
	*uParam0 = 0f;
	uParam0->f_1 = 0;
}

bool func_202(var uParam0)
{
	if (!func_103(uParam0->f_4, 1))
	{
		return false;
	}
	return true;
}

bool func_203(int iParam0, vector3 vParam1, float fParam4)
{
	if (fParam4 == -1f)
	{
		return true;
	}
	if (fParam4 == 0f)
	{
		fVar0 = 100f;
	}
	else
	{
		fVar0 = fParam4;
	}
	return func_238(iParam0, vParam1, fVar0, 1, 1);
}

int func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Stack.Push(iParam1);
	Stack.Push(iParam2);
	Stack.Push(iParam3);
	Stack.Push(iParam4);
	Stack.Push(iParam5);
	Call_Loc(iParam0);
	return StackVal;
}

void func_205(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_206(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, (*uParam0)[iVar0], iParam1, bParam2))
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_207(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, (*uParam0)[iVar0], iParam1, bParam2))
		{
		}
		else if (uParam0[iVar0] != iParam3)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_208(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, (*uParam0)[iVar0], iParam1, bParam2))
		{
		}
		else
		{
			iVar1 = uParam0[iVar0];
			iVar2 = _0x901e0dc25080c8b9(iVar1);
			if (!_0xd6f6acf4392187fb(iVar2))
			{
			}
			else if (!_0x0f99f6436528a089(iVar2))
			{
			}
			else if (!_0x424b17a7dc5c90bc(iVar1))
			{
			}
			else
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_209(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	if (uParam3->f_1 < 0 || uParam3->f_1 >= 8)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, (*uParam0)[iVar0], iParam1, bParam2))
		{
		}
		else if ((*uParam0)[iVar0]->f_2 < 0 || (*uParam0)[iVar0]->f_2 >= 8)
		{
		}
		else if ((*uParam0)[iVar0]->f_2 != uParam3->f_1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_210(var uParam0, int iParam1, bool bParam2, var uParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, (*uParam0)[iVar0], iParam1, bParam2))
		{
		}
		else
		{
			iVar1 = 0;
			iVar2 = 0;
			iVar3 = 0;
			Stack.Push(uParam3->f_1);
			Stack.Push(1135537454);
			Stack.Push(&iVar1);
			Stack.Push(&iVar2);
			Stack.Push(&iVar3);
			Call_Loc(iParam4);
			if (StackVal != 1)
			{
			}
			else
			{
				iVar4 = uParam0[iVar0];
				iVar5 = get_player_ped(iVar4);
				iVar6 = get_vehicle_index_from_entity_index(_get_entity_from_item(iVar1));
				if (is_ped_in_vehicle(iVar5, iVar6, true) && func_299(iVar5, iVar6) == uParam3->f_2)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_211(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, (*uParam0)[iVar0], iParam1, bParam2))
		{
		}
		else if (uParam0[iVar0] != player_id())
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_212(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, (*uParam0)[iVar0], iParam1, bParam2))
		{
		}
		else if ((*uParam0)[iVar0]->f_3 != uParam3->f_1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_213(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam0[iVar0] == iParam1)
		{
		}
		if (uParam0[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_214(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		return false;
	}
	return is_bit_set(*uParam0, 0);
}

bool func_215(var uParam0)
{
	if (!func_120(uParam0))
	{
		return true;
	}
	if (uParam0->f_4 < 15)
	{
		return false;
	}
	else if (uParam0->f_4 == 15)
	{
		return !func_35(uParam0->f_5, 16);
	}
	return true;
}

bool func_216(var uParam0)
{
	if (!func_120(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 <= 14)
	{
		return false;
	}
	return true;
}

int func_217()
{
	return Global_1051252->f_12;
}

char* func_218()
{
	return "unnamed";
}

int func_219(int iParam0)
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

bool func_220(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_69(36, iParam0);
}

bool func_221(int iParam0)
{
	if (func_300(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_301(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_222(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_223()
{
	return Global_1102219->f_26.f_3341;
}

bool func_224(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (iVar0 == Global_1102219->f_26.f_3344)
	{
		return true;
	}
	if (iVar0 == get_player_ped(player_id()))
	{
		return true;
	}
	return false;
}

bool func_225(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (!func_103(uParam0->f_1, 1))
	{
		return false;
	}
	uParam0->f_9 = { uParam0->f_1 };
	return true;
}

bool func_226(var uParam0, int iParam1)
{
	if (func_302(uParam0))
	{
		return true;
	}
	if (!func_303(uParam0, iParam1))
	{
		return false;
	}
	if (is_string_null_or_empty(uParam0->f_2056[iParam1]))
	{
		return false;
	}
	return true;
}

void func_227(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_228(var uParam0, int iParam1)
{
	uParam0->f_12 = (uParam0->f_12 || iParam1);
}

void func_229(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_230(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_231(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

void func_232(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_153(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
	uParam0->f_8 = { vParam4 };
	func_230(&(uParam0->f_263), 4194304);
}

void func_233(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_209), sParam1, 64);
}

void func_234(var uParam0, char* sParam1, bool bParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (func_304(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (is_string_null_or_empty(uParam0->f_225[iVar0]))
		{
			if (!func_305(uParam0, sParam1) || func_306(uParam0, 8388608))
			{
				StringCopy(uParam0->f_225[iVar0], sParam1, 64);
				if (!bParam2)
				{
					if (_does_anim_scene_exist(uParam0->f_208) && _is_anim_scene_loaded(uParam0->f_208, true, false))
					{
						if (_0xa9016536015de29d(uParam0->f_208, sParam1))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_208, sParam1);
						}
					}
					else
					{
						func_227(uParam0, 4194304);
					}
				}
				else
				{
					func_227(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

bool func_235(var uParam0)
{
	if (!func_157(uParam0))
	{
		return false;
	}
	return !func_105(uParam0->f_1, uParam0->f_9);
}

int func_236()
{
	return func_249();
}

int func_237()
{
	return Global_1102219->f_26.f_3342;
}

bool func_238(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_307(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_239(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	if (func_308(uParam0, uParam2, uParam3))
	{
		return 2;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (!func_309(iVar1, 966820754, get_ped_index_from_entity_index(iParam1->f_14[iVar1]->f_1.f_1), uParam3->f_24[iVar1]->f_11[iVar2], &(iParam1->f_14[iVar1]->f_1.f_18), 1))
			{
				iVar0 = 0;
			}
			if (!func_309(iVar1, 966820754, get_ped_index_from_entity_index(iParam1->f_14[iVar1]->f_1.f_1), &(uParam3->f_24[iVar1]->f_11[iVar2]->f_13), &(iParam1->f_14[iVar1]->f_1.f_19), 0))
			{
				iVar0 = 0;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!func_309(iVar1, 1627542854, get_ped_index_from_entity_index(iParam1->f_99[iVar1]->f_1), &(uParam3->f_345[iVar1]->f_3), &(iParam1->f_99[iVar1]->f_18), 0))
		{
			iVar0 = 0;
		}
		bVar3 = (iVar0 == 1 && func_310(uParam3->f_345[iVar1]->f_3, uParam3->f_345[iVar1]->f_16, 0.5f, 1));
		if (!func_309(iVar1, 1627542854, get_ped_index_from_entity_index(iParam1->f_99[iVar1]->f_1), &(uParam3->f_345[iVar1]->f_16), &(iParam1->f_99[iVar1]->f_19), bVar3))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_240(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		uParam0->f_274++;
		if (uParam0->f_274 < 10)
		{
			return (func_306(uParam0, 256) && !func_306(uParam0, 4194304));
		}
		uParam0->f_274 = 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	func_311(uParam0, sParam1);
	if (!func_306(uParam0, 64))
	{
		if (!func_153(func_312(uParam0)))
		{
			func_227(uParam0, 64);
		}
		else if (func_313(uParam0, &vVar0, &vVar3))
		{
			uParam0->f_5 = { vVar0 };
			uParam0->f_8 = { vVar3 };
		}
		return false;
	}
	fVar6 = func_314(Global_34, func_312(uParam0), 1);
	if (func_306(uParam0, 128) || func_306(uParam0, 256))
	{
		if ((fVar6 >= func_315(uParam0) && !bParam2) || !_does_anim_scene_exist(uParam0->f_208))
		{
			func_316(uParam0);
			if (_does_anim_scene_exist(uParam0->f_208))
			{
				_delete_anim_scene(uParam0->f_208);
			}
			func_317(uParam0);
			func_72(uParam0, 128, 1);
			func_72(uParam0, 256, 1);
			func_72(uParam0, 4096, 1);
			func_72(uParam0, 32768, 1);
			func_72(uParam0, 16777216, 1);
		}
	}
	else if (fVar6 <= func_318(uParam0) || bParam2)
	{
		if (!func_306(uParam0, 128))
		{
			if (!_does_anim_scene_exist(uParam0->f_208))
			{
				if (func_318(uParam0) >= func_315(uParam0))
				{
				}
				Var7 = { func_264(uParam0) };
				if (!func_319(uParam0, 1) && is_string_null_or_empty(&Var7))
				{
					func_320(uParam0);
					Var7 = { func_264(uParam0) };
				}
				iVar15 = 256;
				if (!func_306(uParam0, 1))
				{
					iVar15 |= 2048;
				}
				if (func_319(uParam0, 2))
				{
					iVar15 |= 16384;
				}
				uParam0->f_208 = _create_anim_scene(&(uParam0->f_192), iVar15, &Var7, false, true);
				func_321(uParam0, 0, 0, 0, 0);
				func_227(uParam0, 128);
			}
		}
	}
	if (func_306(uParam0, 128))
	{
		if (func_306(uParam0, 256) && !func_306(uParam0, 4194304))
		{
			return true;
		}
		func_322(uParam0);
		if (_is_anim_scene_loaded(uParam0->f_208, true, false))
		{
			bVar16 = true;
			Var18 = { func_323(uParam0) };
			iVar17 = 0;
			while (iVar17 < 4)
			{
				if (!is_string_null_or_empty(uParam0->f_225[iVar17]))
				{
					if (!are_strings_equal(uParam0->f_225[iVar17], &Var18))
					{
						if (!uParam0->f_225[iVar17]->f_8)
						{
							uParam0->f_225[iVar17]->f_8 = 1;
							_0xdf7b5144e25cd3fe(uParam0->f_208, uParam0->f_225[iVar17]);
							bVar16 = false;
						}
						else if (!_0x23e33cb9f4a3f547(uParam0->f_208, uParam0->f_225[iVar17]))
						{
							bVar16 = false;
						}
					}
				}
				iVar17++;
			}
			if (!func_306(uParam0, 8388608))
			{
				if (_0xa9016536015de29d(uParam0->f_208, &Var18))
				{
					if (!func_306(uParam0, 16777216))
					{
						_0xdf7b5144e25cd3fe(uParam0->f_208, &Var18);
						func_227(uParam0, 16777216);
					}
					if (!_0x23e33cb9f4a3f547(uParam0->f_208, &Var18))
					{
						bVar16 = false;
					}
				}
			}
			if (!bVar16)
			{
				return false;
			}
			func_227(uParam0, 256);
			func_72(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_241(var uParam0, var uParam1, var uParam2)
{
	if (func_308(uParam0, uParam1, uParam2))
	{
		return false;
	}
	return true;
}

void func_242(int* iParam0, var uParam1)
{
	_0x4f57397388e1dff8();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_324(iVar0, 966820754, &(iParam0->f_14[iVar0]->f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_324(iVar0, 1627542854, iParam0->f_99[iVar0]);
		iVar0++;
	}
	uParam1->f_9 = { func_60() };
}

void func_243(int* iParam0, var uParam1, var uParam2)
{
	func_325(iParam0, uParam1, uParam2);
	func_326(iParam0, uParam1, uParam2);
	_0xf45e46deecf7df6e(4224, 0, 0, -1, -1);
	if (is_entity_dead(player_ped_id()) && is_screen_faded_out())
	{
		func_327(0);
	}
	if (func_328(uParam1) || func_84(uParam1))
	{
		if (_is_app_running(1433015236) || _is_app_active(1433015236))
		{
			_close_app_by_hash(1433015236);
		}
		if (_is_app_running(29649618) || _is_app_active(29649618))
		{
			_close_app_by_hash(29649618);
		}
		disable_control_action(0, -484677055, false);
		disable_control_action(0, -1678863853, false);
		disable_control_action(2, -668070958, false);
		disable_control_action(2, 1250966545, false);
	}
	if (uParam1->f_4 != 0)
	{
		_0xb3e8841f6bdaf83e();
	}
}

bool func_244(var uParam0, int* iParam1, var uParam2, var uParam3, int iParam4)
{
	bVar0 = true;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar4 = func_263(iParam1, iVar3);
		if (iVar4 < 0 || iVar4 >= 4)
		{
		}
		else
		{
			if (!func_329(uParam0, uParam0->f_7[iVar4], iParam1, uParam2, iVar3, iVar3, 966820754, iParam1->f_14[iVar3], uParam3, uParam3->f_24[iVar3], iParam4))
			{
				if (bVar0)
				{
					bVar0 = false;
				}
			}
			func_330(&(iParam1->f_14[iVar3]->f_1), &iVar1, &iVar2);
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if (!func_331(uParam0, iParam1, uParam2, iVar3, &(uParam3->f_345[iVar3]), 1627542854, iParam1->f_99[iVar3], uParam3, uParam3->f_345[iVar3], uParam3->f_1668[iVar3], iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_330(iParam1->f_99[iVar3], &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 20)
	{
		iVar5 = 0;
		if (!func_332(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_926[iVar3]), -1821507459, iParam1->f_500[iVar3], &iVar5, uParam3, uParam3->f_926[iVar3], &(uParam3->f_926[iVar3]->f_3), &(uParam3->f_926[iVar3]->f_9), uParam3->f_1829[iVar3], iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_330(iParam1->f_500[iVar3], &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		iVar6 = 0;
		if (!func_332(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_1227[iVar3]), 1135537454, iParam1->f_761[iVar3], &iVar6, uParam3, uParam3->f_1227[iVar3], &(uParam3->f_1227[iVar3]->f_3), &(uParam3->f_1227[iVar3]->f_9), uParam3->f_1910[iVar3], iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_333(uParam0, iParam1->f_761[iVar3], *uParam3->f_1227[iVar3]);
		func_330(iParam1->f_761[iVar3], &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 1)
	{
		if (!func_332(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_1529[iVar3]), 465509728, iParam1->f_1089[iVar3], &(iParam1->f_1089[iVar3]->f_13), uParam3, uParam3->f_1529[iVar3], &(uParam3->f_1529[iVar3]->f_3), &(uParam3->f_1529[iVar3]->f_9), uParam3->f_1951[iVar3], iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_330(iParam1->f_1089[iVar3], &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		iVar7 = 0;
		if (!func_332(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_1378[iVar3]), 422112462, iParam1->f_892[iVar3], &iVar7, uParam3, uParam3->f_1378[iVar3], &(uParam3->f_1378[iVar3]->f_3), &(uParam3->f_1378[iVar3]->f_9), uParam3->f_1956[iVar3], iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_330(iParam1->f_892[iVar3], &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar8 = 0;
		if (!func_332(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_1545[iVar3]), -230450704, iParam1->f_1023[iVar3], &iVar8, uParam3, uParam3->f_1545[iVar3], &(uParam3->f_1545[iVar3]->f_3), &(uParam3->f_1545[iVar3]->f_9), uParam3->f_1997[iVar3], iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_330(iParam1->f_892[iVar3], &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 24)
	{
		if (!func_334(iParam1, uParam0, uParam2, iVar3, 0, iParam1->f_1104[iVar3], uParam3, iVar1, iVar2, iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		iVar3++;
	}
	return bVar0;
}

void func_245()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

void func_246(int iParam0, int iParam1)
{
	Stack.Push(iParam1);
	Call_Loc(iParam0);
}

bool func_247(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 128 != 0;
	}
	return func_335(128, iParam0);
}

void func_248(bool bParam0)
{
	if (func_257(bParam0))
	{
		func_337(func_336(), 0);
	}
}

int func_249()
{
	return Global_1102219->f_26.f_3337;
}

bool func_250()
{
	return (func_338() && func_339(Global_1102219->f_3520.f_17, 1500));
}

void func_251(var uParam0, int iParam1)
{
	if (is_screen_faded_in() || is_screen_fading_in())
	{
		do_screen_fade_out(iParam1);
	}
	if (func_328(uParam0))
	{
		func_82(&(uParam0->f_5), 2);
	}
}

void func_252(int iParam0)
{
	if (func_340(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_253(int iParam0)
{
	return !func_45(iParam0);
}

bool func_254()
{
	if (func_255() || func_257(0))
	{
		return false;
	}
	return true;
}

bool func_255()
{
	iVar0 = player_ped_id();
	if ((((((_0xb655db7582aec805(iVar0) || is_ped_injured(iVar0)) || is_ped_dead_or_dying(iVar0, true)) || _0x3bdfcf25b58b0415(iVar0)) || _is_ped_hogtied(iVar0)) || is_ped_falling(iVar0)) || _is_ped_lassoed(iVar0))
	{
		return true;
	}
	return false;
}

void func_256()
{
	func_117(11);
	func_119(1, 1);
	func_185(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { get_entity_coords(player_ped_id(), false, false) };
	Global_1102219->f_3879 = get_gameplay_cam_relative_heading();
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_186(Global_1102219->f_3879, 36);
}

bool func_257(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

void func_258()
{
	if (func_257(0))
	{
		Global_1051439->f_43 = 1;
	}
}

bool func_259(var uParam0, var uParam1)
{
	if (uParam1->f_2 != -1)
	{
		if (is_screen_faded_in())
		{
			func_251(uParam0, uParam1->f_2);
		}
		if (!is_screen_faded_out())
		{
			return false;
		}
	}
	return true;
}

bool func_260(int* iParam0, var uParam1, vector3 vParam2)
{
	bVar0 = !func_153(vParam2);
	bVar1 = ((bVar0 && !func_153(iParam0->f_9)) || (!bVar0 && func_153(iParam0->f_9)));
	bVar2 = false;
	if (_does_anim_scene_exist(Global_1071686->f_28662.f_8.f_3) && _is_anim_scene_started(Global_1071686->f_28662.f_8.f_3, false))
	{
		bVar2 = true;
	}
	if (!func_86(*iParam0, 7))
	{
		if (!bVar1)
		{
			func_283(&(iParam0->f_12));
			if (bVar0)
			{
				if (is_screen_faded_in() && !bVar2)
				{
					if (get_distance_between_coords(get_entity_coords(player_ped_id(), true, false), vParam2, true) < 100f)
					{
						bVar3 = true;
					}
					else
					{
						func_251(uParam1, 500);
					}
				}
				else if (is_screen_faded_out() || bVar2)
				{
					if (_0xcf45df50c7775f2a())
					{
						_0x5a8b01199c3e79c3();
					}
					if (_0x513f8aa5bf2f17cf(vParam2, 100f, 5))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					set_focus_pos_and_vel(vParam2, 0f, 0f, 0f);
					iParam0->f_9 = { vParam2 };
					bVar1 = true;
				}
			}
			else
			{
				if (is_screen_faded_in() && !bVar2)
				{
					if (get_distance_between_coords(get_entity_coords(player_ped_id(), true, false), iParam0->f_9, true) < 100f)
					{
						bVar4 = true;
					}
					else
					{
						func_251(uParam1, 500);
					}
				}
				else if (is_screen_faded_out() || bVar2)
				{
					if (!is_gameplay_cam_rendering())
					{
						render_script_cams(false, false, 3000, true, false, 0);
					}
					if (does_cam_exist(iParam0->f_1478))
					{
						destroy_cam(iParam0->f_1478, false);
					}
					if (_0xcf45df50c7775f2a())
					{
						_0x5a8b01199c3e79c3();
					}
					vVar5 = { get_entity_coords(player_ped_id(), true, false) };
					if (_0x513f8aa5bf2f17cf(vVar5, 100f, 5))
					{
						bVar4 = true;
					}
				}
				if (bVar4)
				{
					clear_focus();
					iParam0->f_9 = { 0f, 0f, 0f };
					bVar1 = true;
				}
			}
		}
		if (bVar1)
		{
			if (_0xcf45df50c7775f2a())
			{
				if (!func_14(&(iParam0->f_12)))
				{
					func_132(&(iParam0->f_12), 0, 0);
				}
				if (_0x0909f71b5c070797() || func_282(&(iParam0->f_12), 5000, 0))
				{
					_0x5a8b01199c3e79c3();
					func_26(iParam0, 7);
					if (is_screen_faded_out())
					{
						return false;
					}
				}
			}
			else
			{
				func_26(iParam0, 7);
				if (is_screen_faded_out())
				{
					return false;
				}
			}
		}
	}
	return func_86(*iParam0, 7);
}

void func_261(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_262()
{
	return Global_1071686->f_28662.f_8.f_13 != 0;
}

int func_263(int* iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return -1;
	}
	return &(iParam0->f_1[iParam1]);
}

struct<8> func_264(var uParam0)
{
	return uParam0->f_209;
}

void func_265(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (!_does_anim_scene_exist(uParam0->f_208))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_208, true, false))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_208, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_225[iVar0]) && are_strings_equal(sParam1, uParam0->f_225[iVar0]))
		{
			Var1 = { uParam0->f_209 };
			*uParam0->f_225[iVar0] = { Var1 };
		}
		iVar0++;
	}
	func_233(uParam0, sParam1);
	func_72(uParam0, 2097152, 1);
	func_227(uParam0, 33554432);
	_set_anim_scene_playback_list_bool(uParam0->f_208, sParam1, true);
}

void func_266(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		uParam0->f_17[iVar0]->f_11 = 0;
		iVar0++;
	}
}

struct<4> func_267(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_string_null_or_empty(sParam0))
	{
		return *sParam0;
	}
	if (!does_entity_exist(iParam1))
	{
		return Var0;
	}
	StringCopy(&Var0, "mp_player_", 32);
	if (!bParam3)
	{
		if (is_ped_male(iParam1))
		{
			StringConCat(&Var0, "m_", 32);
		}
		else
		{
			StringConCat(&Var0, "f_", 32);
		}
	}
	if (iParam2 >= 0 && iParam2 < 4)
	{
		StringIntConCat(&Var0, iParam2 + 1, 32);
	}
	return Var0;
}

bool func_268(int* iParam0, char* sParam1, int iParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (!_0x6f1f0b17109309da(iParam0->f_1483.f_208, sParam1))
	{
		return false;
	}
	if (does_entity_exist(iParam2))
	{
		if (func_341(&(iParam0->f_1483), iParam2, sParam1, 0, get_entity_model(iParam2), 1))
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
		return false;
	}
	return false;
}

bool func_269(int* iParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6)
{
	if (iParam2 < 0)
	{
		return false;
	}
	switch (iParam3)
	{
		case 966820754:
			if (!bParam5)
			{
				*sParam4 = { func_267(uParam1->f_1651[iParam2], get_ped_index_from_entity_index(iParam0->f_14[iParam2]->f_1.f_1), iParam2, bParam6) };
				return true;
			}
			break;
		case 1627542854:
			if (bParam5)
			{
				*sParam4 = { uParam1->f_1668[iParam2]->f_4 };
				return true;
			}
			else
			{
				*sParam4 = { *uParam1->f_1668[iParam2] };
				return true;
			}
			break;
		case 1135537454:
			if (!bParam5)
			{
				*sParam4 = { *uParam1->f_1910[iParam2] };
				return true;
			}
			break;
		case 465509728:
			if (!bParam5)
			{
				*sParam4 = { *uParam1->f_1951[iParam2] };
				return true;
			}
			break;
		case 422112462:
			if (!bParam5)
			{
				*sParam4 = { *uParam1->f_1956[iParam2] };
				return true;
			}
			break;
		case 0:
			if (bParam5)
			{
				return false;
			}
			if (iParam0->f_1104[iParam2]->f_13 == -1)
			{
				return false;
			}
			if (iParam0->f_1104[iParam2]->f_14 == 0)
			{
				return false;
			}
			if (func_269(iParam0, uParam1, iParam0->f_1104[iParam2]->f_13, iParam0->f_1104[iParam2]->f_14, sParam4, 1, 1))
			{
				return true;
			}
			else if (func_269(iParam0, uParam1, iParam0->f_1104[iParam2]->f_13, iParam0->f_1104[iParam2]->f_14, sParam4, 0, 1))
			{
				iVar0 = iParam0->f_1104[iParam2]->f_1;
				if (func_342(iVar0))
				{
					StringConCat(sParam4, "_horse", 32);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_270(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_208))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_208, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!is_entity_dead(&(uParam0->f_17[iVar0])) || func_343(uParam0->f_17[iVar0], 2))
		{
			if (_0x6f1f0b17109309da(uParam0->f_208, &(uParam0->f_17[iVar0]->f_1)))
			{
				func_344(uParam0->f_17[iVar0], 1);
			}
		}
		iVar0++;
	}
}

void func_271(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!is_entity_dead(&(uParam0->f_17[iVar0])) || func_343(uParam0->f_17[iVar0], 2))
		{
			if (func_343(uParam0->f_17[iVar0], 1) || _0x6f1f0b17109309da(uParam0->f_208, &(uParam0->f_17[iVar0]->f_1)))
			{
				func_345(uParam0, &(uParam0->f_17[iVar0]->f_1), &(uParam0->f_17[iVar0]), uParam0->f_17[iVar0]->f_9);
				if (bParam1 && is_entity_a_ped(&(uParam0->f_17[iVar0])))
				{
					iVar1 = get_ped_index_from_entity_index(&(uParam0->f_17[iVar0]));
					if (iVar1 != Global_34 && !func_343(uParam0->f_17[iVar0], 16))
					{
						func_346(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_272(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	func_311(uParam16, &uParam0);
	if (func_347(uParam16) != 1)
	{
		func_348(uParam16);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_34, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_347(uParam16))
	{
		case 1:
			if (_does_anim_scene_exist(uParam16->f_208) && _is_anim_scene_loaded(uParam16->f_208, true, false))
			{
				if (!_is_anim_scene_started(uParam16->f_208, false))
				{
					func_349(uParam16, &uParam0);
				}
				else if (_0xef324e9550a394d5(uParam16->f_208))
				{
					func_350(uParam16, 4);
					return false;
				}
				else if (func_351(uParam16, 2))
				{
					Stack.Push(uParam16);
					Call_Loc(uParam16->f_189);
				}
				func_350(uParam16, 3);
			}
			else if (!_does_anim_scene_exist(uParam16->f_208))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (!is_string_null_or_empty(&(uParam16->f_209)) && func_306(uParam16, 134217728))
				{
				}
				else
				{
					func_352(uParam16);
				}
				func_353(&(uParam16->f_1));
				func_350(uParam16, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_322(uParam16);
				if (!func_354(&(uParam16->f_1)))
				{
					func_355(&(uParam16->f_1), 0);
				}
				else if (func_356(&(uParam16->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam16->f_208))
					{
						_delete_anim_scene(uParam16->f_208);
					}
					func_350(uParam16, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam16->f_208) || !_is_anim_scene_loaded(uParam16->f_208, true, false))
			{
				if (func_240(uParam16, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam16->f_208, true, false))
					{
						func_350(uParam16, 4);
					}
					else if (!func_153(func_312(uParam16)) && !func_238(Global_34, func_312(uParam16), 100f, 1, 1))
					{
						if (!func_357(uParam16->f_263, 8388608))
						{
							func_358(1);
						}
						start_player_teleport(get_player_index(), func_312(uParam16), 0f, true, true, true, false);
					}
				}
				else if (func_356(&(uParam16->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam16->f_208))
					{
						_delete_anim_scene(uParam16->f_208);
					}
					func_350(uParam16, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				func_359(1, 0);
				func_349(uParam16, &uParam0);
				func_350(uParam16, 3);
			}
			else if (func_356(&(uParam16->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam16->f_208))
				{
					_delete_anim_scene(uParam16->f_208);
				}
				func_350(uParam16, 4);
			}
			break;
		case 3:
			func_360(uParam16);
			if (func_351(uParam16, 2))
			{
				Stack.Push(uParam16);
				Call_Loc(uParam16->f_189);
			}
			if ((_does_anim_scene_exist(uParam16->f_208) && _is_anim_scene_started(uParam16->f_208, false)) && (_0xef324e9550a394d5(uParam16->f_208) || func_306(uParam16, 512)))
			{
				if (!func_306(uParam16, 1024) && func_361(uParam16, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_306(uParam16, 512))
				{
					func_353(&(uParam16->f_1));
					func_227(uParam16, 512);
					func_350(uParam16, 4);
				}
				else if (func_306(uParam16, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
						do_screen_fade_out(0);
					}
				}
			}
			else
			{
				func_348(uParam16);
			}
			if (func_306(uParam16, 524288))
			{
				if (IntToFloat(absi((func_362(uParam16) - func_363(uParam16)))) <= 2f)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if (_does_anim_scene_exist(uParam16->f_208))
				{
					if (_0xef324e9550a394d5(uParam16->f_208))
					{
						_0x1b70811d3bf75db9(1, 1);
					}
				}
				if (func_364(uParam16, Global_34, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if (!func_319(uParam16, 4))
				{
					if ((is_screen_faded_out() || is_screen_fading_out()) && func_363(uParam16) > 5000)
					{
						_0x1b70811d3bf75db9(1, 1);
					}
				}
			}
			if (func_365(uParam16))
			{
				if (!_does_anim_scene_exist(uParam16->f_208))
				{
				}
				func_366(uParam16);
				func_367(uParam16);
				return true;
			}
			else
			{
				if (func_306(uParam16, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam16->f_208) && !_0xef324e9550a394d5(uParam16->f_208))
						{
							_delete_anim_scene_2(uParam16->f_208);
						}
						func_353(&(uParam16->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_227(uParam16, 512);
						func_72(uParam16, 67108864, 1);
						func_350(uParam16, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_306(uParam16, 16384) && !_0xef324e9550a394d5(uParam16->f_208)) && is_screen_faded_out()) && func_363(uParam16) <= 5000) && func_363(uParam16) >= 0)
				{
					do_screen_fade_in(uParam16->f_292);
				}
				if (!func_306(uParam16, 536870912) && has_anim_event_fired(Global_34, -1495039362))
				{
					func_368(&(uParam16->f_264), 0);
					func_227(uParam16, 536870912);
				}
				if (func_363(uParam16) >= 5000 && func_363(uParam16) <= (func_362(uParam16) - 5000))
				{
					func_369();
				}
			}
			break;
		case 6:
			if (func_365(uParam16))
			{
				func_366(uParam16);
				func_367(uParam16);
				return true;
			}
			break;
		case 4:
			if (func_306(uParam16, 524288))
			{
				_0x1b70811d3bf75db9(1, 1);
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1000);
					if (_is_anim_scene_paused(uParam16->f_208))
					{
						func_227(uParam16, 1073741824);
					}
				}
			}
			else
			{
				if (_does_anim_scene_exist(uParam16->f_208))
				{
					if (!_is_anim_scene_paused(uParam16->f_208))
					{
						set_anim_scene_paused(uParam16->f_208, true);
						if (_0xc17f69e1418cd11f(9) != 0)
						{
							_0xdd1232b332cbb9e7(9, 1, 0);
						}
						return false;
					}
					else if (_0x4cdffe3189ebdbd0(uParam16->f_208))
					{
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_351(uParam16, 4));
					Stack.Push(uParam16);
					Call_Loc(uParam16->f_190);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam16->f_208) && _is_anim_scene_paused(uParam16->f_208))
						{
							set_anim_scene_paused(uParam16->f_208, false);
						}
						func_350(uParam16, 3);
					}
					else if (func_356(&(uParam16->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam16->f_208) && _is_anim_scene_paused(uParam16->f_208))
						{
							set_anim_scene_paused(uParam16->f_208, false);
						}
						func_350(uParam16, 3);
					}
				}
				if (func_347(uParam16) == 3)
				{
					if (func_306(uParam16, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_350(uParam16, 4);
			break;
	}
	return false;
}

void func_273(int* iParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (!func_86(*iParam0, 8))
	{
		iVar0 = 8;
		if (func_370(57))
		{
			iVar0 |= 128;
		}
		if (!func_48(iParam0))
		{
			iVar0 |= 4;
			iVar0 |= 16;
		}
		func_288(0, iVar0);
		func_82(&(uParam2->f_5), 16);
		func_371(0);
		func_372();
		clear_area(get_entity_coords(player_ped_id(), true, false), 10f, 1);
	}
	func_245();
	if (func_48(iParam0))
	{
		func_278(uParam1, 1);
	}
	func_91(1);
	func_373(0);
	if (!func_35(uParam3->f_18, 128))
	{
		set_audio_flag("EnableCutsceneMusic", true);
	}
	iVar1 = func_137(uParam2->f_1.f_2);
	func_374(*uParam3->f_1621[iVar1], 20f, 1);
	func_375(0);
	if (is_screen_faded_out())
	{
		do_screen_fade_in(500);
	}
	func_246(iParam4, 1);
}

void func_274(bool bParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 150)
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		func_204(iParam1, iVar0, -230450704, &iVar1, &iVar2, &iVar3);
		if (!_does_item_have_valid_base(iVar1))
		{
		}
		else
		{
			iVar4 = _get_entity_from_item(iVar1);
			if (!does_entity_exist(iVar4))
			{
			}
			else
			{
				set_entity_visible(iVar4, bParam0);
			}
		}
		iVar0++;
	}
}

void func_275(int* iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5)
{
	switch (iParam1)
	{
		case 0:
			if (fParam5 != 0f)
			{
				bVar0 = true;
			}
			set_anim_scene_bool(iParam0->f_1483.f_208, &uParam2, bVar0, false);
			break;
		case 1:
			iVar1 = round(fParam5);
			set_anim_scene_int(iParam0->f_1483.f_208, &uParam2, iVar1, false);
			break;
		case 2:
			set_anim_scene_float(iParam0->f_1483.f_208, &uParam2, fParam5, false, false);
			break;
	}
}

void func_276(var uParam0, int* iParam1, var uParam2)
{
	if ((func_86(*iParam1, 3) && _does_anim_scene_exist(iParam1->f_1483.f_208)) && _is_anim_scene_started(iParam1->f_1483.f_208, false))
	{
		_0xd346248c1dce0d76(6, 6, 10, 10);
		if (!func_86(*iParam1, 4))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!is_bit_set(uParam0->f_7, iVar0))
				{
				}
				else if (!are_strings_equal(&(uParam2->f_2018[iVar0]->f_4), "TriggerMusic"))
				{
				}
				else
				{
					func_26(iParam1, 4);
				}
				iVar0++;
			}
		}
		else
		{
			_0x98a7cd5ea379a854();
		}
	}
}

bool func_277(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7)
{
	_uiprompt_enable_prompt_type_this_frame(6);
	func_376();
	_0x236905c700fdb54d();
	func_377(0, 0, 1);
	_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	if (func_141(uParam5))
	{
		iVar0 = func_142(*uParam2);
		if (func_143(uParam3, iVar0))
		{
			iVar1 = 0;
			if (_0x31dad2cd6d49546e(get_id_of_this_thread()))
			{
				iVar1 = participant_id_to_int();
			}
			iVar2 = func_149(uParam3, iVar0);
			func_378(uParam4, (*uParam3)[iVar2], 0, &iVar3, &uVar4);
			if (iVar3 < 1)
			{
				if (!is_bit_set(uParam4[iVar1], 6))
				{
					set_bit((*uParam4)[iVar1], 6);
				}
			}
			else if (is_bit_set(uParam4[iVar1], 6))
			{
				clear_bit((*uParam4)[iVar1], 6);
			}
			if (!func_214((*uParam4)[iVar1], iVar0))
			{
				func_380((*uParam4)[iVar1], func_379("VOTE_SKIP_CONTEXT"), 0, -842734359, 6);
				func_381((*uParam4)[iVar1], iVar0, !func_86(*iParam1, 8));
				set_bit((*uParam4)[iVar1], 7);
			}
			if (func_35(uParam2->f_5, 1) || func_86(*iParam1, 0))
			{
				if (!func_382((*uParam4)[iVar1]))
				{
					func_383((*uParam4)[iVar1]);
				}
				func_384((*uParam4)[iVar1]);
			}
			else if (func_385((*uParam4)[iVar1]) && func_86(uParam0->f_1, 0))
			{
				if (func_150((*uParam3)[iVar2]) && func_386(uParam4, (*uParam3)[iVar2]) == 0)
				{
					func_26(iParam1, 0);
					func_384((*uParam4)[iVar1]);
				}
			}
		}
	}
	if (func_86(*iParam1, 0))
	{
		bVar5 = true;
		*bParam7 = 1;
	}
	else if (func_35(uParam2->f_5, 1) && get_distance_between_coords(get_entity_coords(player_ped_id(), true, false), iParam1->f_9, true) >= 100f)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (is_screen_faded_in() || is_screen_fading_in())
		{
			do_screen_fade_out(500);
		}
		else if (is_screen_faded_out())
		{
			if (func_86(*iParam1, 0))
			{
				uParam2->f_6 = 2;
				func_246(iParam6, 5);
			}
			return true;
		}
	}
	return false;
}

void func_278(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (network_is_in_mp_cutscene())
		{
			network_set_in_mp_cutscene(false, true, 32, true);
		}
		_0x4b05b97ba46f419d(0);
		_0x89d803cd48622150(1);
		_0x34bc1e79546ba543(1);
		network_set_in_mp_cutscene(true, true, 7, false);
		set_local_player_visible_in_cutscene(0, 0, 7);
		_0xdc6ad5c046f33ab4(1, 1);
	}
	else if (network_is_in_mp_cutscene())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!network_is_player_active(&(uParam0->f_7[iVar0])))
			{
			}
			else
			{
				iVar1 = get_player_ped(&(uParam0->f_7[iVar0]));
				set_entity_visible_in_cutscene(iVar1, 1, 1, 256);
			}
			iVar0++;
		}
		network_set_in_mp_cutscene(false, true, 32, true);
		_0x89d803cd48622150(0);
	}
}

bool func_279(var uParam0, int iParam1, int iParam2)
{
	return func_281(uParam0, iParam1, iParam2, 600);
}

int func_280(int iParam0, char* sParam1, bool bParam2)
{
	iVar0 = _get_anim_scene_ped(iParam0, sParam1, bParam2);
	if (does_entity_exist(iVar0))
	{
		return iVar0;
	}
	iVar0 = _get_anim_scene_object(iParam0, sParam1, bParam2);
	if (does_entity_exist(iVar0))
	{
		return iVar0;
	}
	iVar0 = _get_anim_scene_vehicle(iParam0, sParam1, bParam2);
	if (does_entity_exist(iVar0))
	{
		return iVar0;
	}
	return func_387();
}

bool func_281(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_145(uParam0->f_22, iParam3);
	if ((iParam1 - iParam2) <= iVar0)
	{
		return true;
	}
	return false;
}

bool func_282(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_132(uParam0, bParam2, 0);
	if (network_is_game_in_progress() && !bParam2)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(get_game_timer(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_283(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_284(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = player_ped_id();
	if (iVar0 == iParam1)
	{
		iVar1 = 1;
	}
	func_388(1);
	func_389(iParam0, iParam1, bParam2, iParam3, iVar1, 0);
}

void func_285(var uParam0, int* iParam1, var uParam2, int iParam3)
{
	func_246(iParam3, 2);
	iVar0 = player_ped_id();
	if (!is_ped_injured(iVar0) && !func_86(*iParam1, 8))
	{
		set_player_invincible(player_id(), false);
		if (func_390(iVar0, -1959848946))
		{
			clear_ped_tasks_immediately(iVar0, false, true);
		}
		iVar1 = iParam1->f_6;
		if (iVar1 >= 0 && iVar1 < 4)
		{
			iVar2 = func_263(iParam1, iVar1);
			if (iVar2 >= 0 && iVar2 < 4)
			{
				iVar3 = uParam0->f_7[iVar2]->f_3;
				if (iVar3 < 0 || iVar3 > 2)
				{
					iVar3 = 0;
				}
				if (func_86(uParam2->f_24[iVar1]->f_11[iVar3]->f_13.f_13, 3))
				{
					func_391(uParam2->f_24[iVar1]->f_11[iVar3]->f_13.f_16);
				}
				else
				{
					if (!func_86(uParam2->f_24[iVar1]->f_11[iVar3]->f_13.f_13, 1))
					{
						set_gameplay_cam_relative_heading(uParam2->f_24[iVar1]->f_11[iVar3]->f_13.f_14, 1f);
					}
					if (!func_86(uParam2->f_24[iVar1]->f_11[iVar3]->f_13.f_13, 2))
					{
						set_gameplay_cam_relative_pitch(uParam2->f_24[iVar1]->f_11[iVar3]->f_13.f_15, 1f);
					}
				}
				if (func_86(uParam2->f_24[iVar1]->f_11[iVar3]->f_13.f_13, 0))
				{
					func_392(uParam2->f_24[iVar1]->f_11[iVar3]->f_13.f_19, uParam2->f_24[iVar1]->f_11[iVar3]->f_13.f_20, 1, 1);
				}
			}
		}
	}
	func_393(iParam1);
	func_15(&(iParam1->f_1471), 0, 0);
	func_394(0, 0);
	func_375(1);
	if (!func_35(uParam2->f_18, 128))
	{
		set_audio_flag("EnableCutsceneMusic", false);
	}
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	clear_focus();
	iParam1->f_9 = { 0f, 0f, 0f };
	Global_1048584 = 0;
	func_91(0);
	if (is_screen_faded_out() || is_screen_fading_out())
	{
		if (func_35(uParam0->f_3, 2))
		{
			if (func_86(*iParam1, 8))
			{
				func_395(64);
				func_395(128);
			}
		}
		else if (func_35(uParam2->f_18, 2048))
		{
			func_246(iParam3, 6);
			if (func_86(*iParam1, 8))
			{
				func_395(64);
				func_395(128);
			}
		}
		else
		{
			do_screen_fade_in(500);
			if (func_86(*iParam1, 8))
			{
				func_395(64);
				func_395(128);
			}
		}
	}
	func_396();
}

void func_286(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_287(int* iParam0, var uParam1)
{
	if (func_86(*iParam0, 8))
	{
		return false;
	}
	if (func_35(uParam1->f_18, 2048))
	{
		if (is_screen_faded_out())
		{
			return false;
		}
	}
	return true;
}

void func_288(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_397(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_398(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_289(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_290(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_291(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

int func_292()
{
	if (&Global_1102219 <= 5)
	{
		return &Global_1102219;
	}
	if (&Global_1102219 <= 22)
	{
		return 4;
	}
	if (&Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_293(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	func_89(&(uParam0->f_2));
	func_89(&(uParam0->f_4));
}

void func_294(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 24)
	{
		func_399((*uParam0)[iVar0]);
		iVar0++;
	}
	uParam0->f_97 = 0;
}

void func_295(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_296(var uParam0)
{
	*uParam0 = "";
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_89(&(uParam0->f_3));
}

void func_297(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 0f;
	uParam0->f_16 = 0f;
	uParam0->f_17 = 623901053;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_400(uParam0->f_18[iVar0]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = 0.25f;
	uParam0->f_33 = 10f;
	uParam0->f_34 = -1f;
	uParam0->f_35 = -1f;
	uParam0->f_36 = 0f;
	uParam0->f_37 = 0f;
	uParam0->f_38 = 0;
}

bool func_298(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (*uParam1 == 255)
	{
		return false;
	}
	if (func_401(*uParam1))
	{
		return false;
	}
	if (is_bit_set(iParam2, iParam0))
	{
		return false;
	}
	if (bParam3)
	{
		if (!func_35(uParam1->f_1, 1))
		{
			return false;
		}
	}
	return true;
}

int func_299(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (get_ped_in_vehicle_seat(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_300(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_301(int iParam0)
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
		func_402(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_403(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_302(var uParam0)
{
	if (func_35(uParam0->f_1650, 32))
	{
		return true;
	}
	return false;
}

bool func_303(var uParam0, int iParam1)
{
	if (func_153(*uParam0->f_1621[iParam1]))
	{
		return false;
	}
	return true;
}

bool func_304(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_225[iVar0]) && are_strings_equal(uParam0->f_225[iVar0], sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_305(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	Var0 = { func_323(uParam0) };
	return are_strings_equal(sParam1, &Var0);
}

bool func_306(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

float func_307(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_308(var uParam0, var uParam1, var uParam2)
{
	if (func_235(uParam1))
	{
		return true;
	}
	if (uParam0->f_2 == 3 || uParam0->f_2 == 2)
	{
		return false;
	}
	if (uParam1->f_4 > 10)
	{
		return true;
	}
	iVar0 = func_137(uParam1->f_9.f_2);
	if (!func_238(player_ped_id(), *uParam2->f_1621[iVar0], 300f, 1, 1))
	{
		return true;
	}
	if (func_236() != 0 && func_223() != func_237())
	{
		return true;
	}
	return false;
}

bool func_309(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	if (uParam3->f_7 != 3)
	{
		return true;
	}
	iVar0 = 1;
	if (!bParam5 && !_does_volume_exist(*uParam4))
	{
		vVar1 = { 2f, 2f, 2f };
		vVar4 = { *uParam3 };
		StringCopy(&cVar7, "[MC][CS] CoverLoadArea - ", 64);
		StringConCat(&cVar7, " iCSIdx: ", 64);
		StringIntConCat(&cVar7, iParam0, 64);
		*uParam4 = _create_volume_box_with_custom_name(vVar4, 0f, 0f, uParam3->f_3, vVar1, &cVar7);
		if (_does_volume_exist(*uParam4))
		{
			_0x2a10538d0a005e81(*uParam4, 1);
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_310(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (absf((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (absf((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || absf((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_311(var uParam0, char* sParam1)
{
	if (func_306(uParam0, 8192))
	{
		return;
	}
	if (_does_string_exist_in_string(sParam1, "cutscene@"))
	{
		iVar0 = _0x94e8ca3dee952789(sParam1, "@");
		if (_0x94e8ca3dee952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_192), {func_404("cutscene@", _0x5b4a8121a47d844d((iVar0 - 1)), 1, 63)}, 16);
		}
		_0x3c3c7b1b5ec08764();
	}
	else
	{
		MemCopy(&(uParam0->f_192), {func_404("cutscene@", sParam1, 1, 63)}, 16);
	}
	func_227(uParam0, 8192);
}

Vector3 func_312(var uParam0)
{
	return uParam0->f_5;
}

bool func_313(var uParam0, Vector3* vParam1, Vector3* vParam2)
{
	*vParam1 = { 0f, 0f, 0f };
	*vParam2 = { 0f, 0f, 0f };
	MemCopy(&uVar0, {func_405(uParam0)}, 8);
	if (!_does_anim_scene_exist(uParam0->f_208))
	{
		iVar8 = 0;
		if (func_306(uParam0, 2) && !func_306(uParam0, 67108864))
		{
			iVar8 |= 256;
		}
		uParam0->f_208 = _create_anim_scene(&(uParam0->f_192), iVar8, &(uParam0->f_209), false, true);
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_208, false))
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_208, func_406(Global_34), &Var9, false, 0, 2))
		{
			*vParam1 = { Var9 };
			*vParam2 = { Var9.f_3 };
		}
		else
		{
			_get_anim_scene_origin(uParam0->f_208, vParam1, vParam2, 2);
		}
		_delete_anim_scene(uParam0->f_208);
		return true;
	}
	return false;
}

float func_314(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_315(var uParam0)
{
	return uParam0->f_187;
}

void func_316(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_208))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_208, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_225[iVar0]) && (_0x23e33cb9f4a3f547(uParam0->f_208, uParam0->f_225[iVar0]) || _0x0df57f86fe71dbe5(uParam0->f_208, uParam0->f_225[iVar0])))
		{
			_0xae6ada8fe7e84acc(uParam0->f_208, uParam0->f_225[iVar0]);
		}
		uParam0->f_225[iVar0]->f_8 = 0;
		iVar0++;
	}
}

void func_317(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_306(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_407(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_306(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_72(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_72(uParam0, 16, 1);
}

float func_318(var uParam0)
{
	return uParam0->f_186;
}

bool func_319(var uParam0, int iParam1)
{
	return (uParam0->f_12 && iParam1) != 0;
}

void func_320(var uParam0)
{
	Var0 = { func_408() };
	func_233(uParam0, &Var0);
}

void func_321(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_306(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_409(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_218());
		func_227(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_410(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_227(uParam0, 16);
	}
}

void func_322(var uParam0)
{
	if ((!func_306(uParam0, 32768) && _does_anim_scene_exist(uParam0->f_208)) && _is_anim_scene_metadata_loaded(uParam0->f_208, false))
	{
		func_270(uParam0);
		func_271(uParam0, 0);
		if (!_is_anim_scene_loading(uParam0->f_208, true))
		{
			if (func_357(uParam0->f_263, 4194304))
			{
				set_anim_scene_origin(uParam0->f_208, uParam0->f_5, uParam0->f_8, 2);
			}
			load_anim_scene(uParam0->f_208);
		}
		func_227(uParam0, 32768);
	}
}

struct<8> func_323(var uParam0)
{
	Var0 = { func_411(uParam0) };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { func_412() };
	}
	return Var0;
}

void func_324(int iParam0, int iParam1, var uParam2)
{
	if (_does_volume_exist(uParam2->f_18))
	{
		_delete_volume(uParam2->f_18);
	}
	if (does_entity_exist(uParam2->f_2))
	{
		_0x1a7a802b2301edc0(get_ped_index_from_entity_index(uParam2->f_2));
	}
	if (_does_volume_exist(uParam2->f_19))
	{
		_delete_volume(uParam2->f_19);
	}
	if (does_entity_exist(uParam2->f_1))
	{
		_0x1a7a802b2301edc0(get_ped_index_from_entity_index(uParam2->f_1));
	}
}

void func_325(int* iParam0, var uParam1, var uParam2)
{
	if (func_35(uParam1->f_5, 4))
	{
		return;
	}
	if (!func_35(uParam1->f_5, 2))
	{
		return;
	}
	if (!is_screen_faded_out())
	{
		return;
	}
	if (!func_328(uParam1))
	{
		return;
	}
	if (uParam2->f_3 < 0)
	{
		return;
	}
	if (!func_14(&(iParam0->f_1467)))
	{
		func_132(&(iParam0->f_1467), 1, 0);
	}
	if (uParam2->f_3 == 0 || func_36(&(iParam0->f_1467), 1, 0) >= uParam2->f_3)
	{
		func_82(&(uParam1->f_5), 4);
	}
}

void func_326(int* iParam0, var uParam1, var uParam2)
{
	if (!func_328(uParam1))
	{
		return;
	}
	if (!func_35(uParam2->f_18, 2))
	{
		return;
	}
	bVar0 = true;
	iVar1 = player_ped_id();
	bVar2 = !func_35(uParam2->f_18, 64);
	iVar3 = func_137(uParam1->f_1.f_2);
	if (!func_35(uParam2->f_18, 4))
	{
		func_413(iVar1, *uParam2->f_1621[iVar3], 0, uParam2->f_4, uParam2->f_5, uParam2->f_6, uParam2->f_7, 1, 0, bVar2, 0);
	}
	if (!func_35(uParam2->f_18, 16))
	{
		fVar4 = (to_float(uParam2->f_8) / 1000f);
		if (func_414(iVar1, *uParam2->f_1621[iVar3], &(iParam0->f_1475), uParam2->f_7, fVar4, 0, 0, 0, bVar2))
		{
		}
	}
	if (!func_35(uParam2->f_18, 32))
	{
		if (!func_86(*iParam0, 5))
		{
			_hide_ped_weapons(iVar1, 2, false);
			task_swap_weapon(iVar1, 1, 1, 0, 0);
			func_26(iParam0, 5);
		}
	}
	if (!func_35(uParam2->f_18, 8))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		if (_0xa2b1c7ef759a63ce() < 1f)
		{
			bVar0 = false;
		}
	}
	if (bVar0 && !func_86(*iParam0, 6))
	{
		func_26(iParam0, 6);
	}
}

void func_327(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

bool func_328(var uParam0)
{
	if (!func_120(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 <= 1 || uParam0->f_4 >= 10)
	{
		return false;
	}
	return true;
}

bool func_329(var uParam0, var uParam1, int* iParam2, var uParam3, int iParam4, int iParam5, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	uParam7->f_1.f_3 = func_415(uParam0, uParam7->f_1.f_1, iParam6, iParam5, iParam4);
	func_416(uParam0, &(uParam7->f_1), uParam9);
	uVar5 = -1;
	while (iVar8 < 15)
	{
		iVar9 = uParam7->f_1.f_10;
		switch (uParam7->f_1.f_10)
		{
			case 0:
				iVar10 = func_417(uParam0, iParam2, iParam4, iParam5, iParam6, &(uParam7->f_1), &uVar4, iParam10);
				if (iVar10 == 1)
				{
					iVar9 = 1;
				}
				else if (iVar10 == 2)
				{
					iVar9 = 14;
				}
				break;
			case 1:
				iVar10 = func_418(iParam2, uParam7, uParam8->f_1651[iParam4]);
				if (iVar10 != 0)
				{
					if (iVar10 == 1)
					{
						func_26(&(uParam7->f_1.f_4), 0);
					}
					iVar9 = 2;
				}
				break;
			case 2:
				func_269(iParam2, uParam8, iParam4, iParam6, &cVar0, 0, 0);
				if (func_419(*uParam1))
				{
					if (func_420(uParam3, iParam2, &(uParam7->f_1), iParam4, iParam6, uParam8, uParam9->f_11[uParam1->f_3], &cVar0, 1) != 0)
					{
						iVar9 = 4;
					}
				}
				break;
			case 4:
				if (uParam3->f_4 >= 7)
				{
					if (!func_421(&(uParam7->f_1)) || func_422(&(uParam7->f_1)))
					{
						iVar9 = 5;
					}
				}
				break;
			case 5:
				if (!does_entity_exist(uParam7->f_1.f_2) || func_423(&(uParam7->f_1), iParam4, iParam6, 1, &uVar5))
				{
					iVar9 = 6;
				}
				break;
			case 6:
				if (!does_entity_exist(uParam7->f_1.f_2) || func_424(iParam2, iParam4, iParam6, &(uParam7->f_1), uParam9->f_11[uParam1->f_3], 1))
				{
					iVar9 = 7;
				}
				break;
			case 7:
				if (uParam3->f_4 > 9)
				{
					if (does_entity_exist(uParam7->f_1.f_2))
					{
						func_425(uParam7->f_1.f_2, 0);
					}
					iVar9 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((func_86(uParam0->f_1, 0) || func_35(uParam3->f_5, 1)) && func_423(&(uParam7->f_1), iParam4, iParam6, 0, &uVar5))
				{
					iVar9 = 9;
				}
				break;
			case 9:
				if (func_424(iParam2, iParam4, iParam6, &(uParam7->f_1), uParam9->f_11[uParam1->f_3], 0))
				{
					func_194(&(uParam7->f_1.f_5));
					func_193(&(uParam7->f_1.f_13));
					iVar9 = 10;
				}
				break;
			case 10:
				func_269(iParam2, uParam8, iParam4, iParam6, &cVar0, 0, 0);
				if (func_420(uParam3, iParam2, &(uParam7->f_1), iParam4, iParam6, uParam8, &(uParam9->f_11[uParam1->f_3]->f_13), &cVar0, 0) != 0)
				{
					iVar9 = 12;
				}
				break;
			case 12:
				if (func_423(&(uParam7->f_1), iParam4, iParam6, 0, &uVar5))
				{
					iVar9 = 13;
				}
				break;
			case 13:
				if (func_424(iParam2, iParam4, iParam6, &(uParam7->f_1), &(uParam9->f_11[uParam1->f_3]->f_13), 0))
				{
					iVar9 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar9 != uParam7->f_1.f_10)
		{
			uParam7->f_1.f_10 = iVar9;
			iVar8++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

void func_330(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_10 > 0 && uParam0->f_10 <= 2)
	{
		*iParam1++;
		*iParam2++;
	}
	else if (uParam0->f_10 > 2 && uParam0->f_10 <= 10)
	{
		*iParam2++;
	}
}

bool func_331(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10)
{
	iVar0 = 0;
	uParam6->f_3 = func_415(uParam0, uParam6->f_1, iParam5, iParam4, iParam3);
	while (iVar5 < 15)
	{
		iVar6 = uParam6->f_10;
		switch (uParam6->f_10)
		{
			case 0:
				iVar7 = func_417(uParam0, iParam1, iParam3, iParam4, iParam5, uParam6, &iVar0, iParam10);
				if (iVar7 == 1)
				{
					iVar6 = 1;
				}
				else if (iVar7 == 2)
				{
					iVar6 = 14;
				}
				break;
			case 1:
				iVar7 = func_426(iParam1, uParam6, uParam8, sParam9);
				if (iVar7 != 0)
				{
					if (iVar7 == 1)
					{
						func_26(&(uParam6->f_4), 0);
					}
					iVar6 = 2;
				}
				break;
			case 2:
				func_269(iParam1, uParam7, iParam3, iParam5, &cVar1, 0, 0);
				if (func_420(uParam2, iParam1, uParam6, iParam3, iParam5, uParam7, &(uParam8->f_3), &cVar1, 1) != 0)
				{
					iVar6 = 4;
				}
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_421(uParam6) || func_422(uParam6))
					{
						iVar6 = 5;
					}
				}
				break;
			case 5:
				if (!does_entity_exist(uParam6->f_2) || func_423(uParam6, iParam3, iParam5, 1, uParam8))
				{
					iVar6 = 6;
				}
				break;
			case 6:
				if (!does_entity_exist(uParam6->f_2) || func_424(iParam1, iParam3, iParam5, uParam6, &(uParam8->f_3), 1))
				{
					iVar6 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (does_entity_exist(uParam6->f_2))
					{
						func_425(uParam6->f_2, 0);
					}
					else if (func_86(uParam6->f_4, 1))
					{
						set_entity_visible_in_cutscene(uParam6->f_1, 1, 1, 7);
					}
					iVar6 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((func_86(uParam0->f_1, 0) || func_35(uParam2->f_5, 1)) && func_423(uParam6, iParam3, iParam5, 0, uParam8))
				{
					iVar6 = 9;
				}
				break;
			case 9:
				if (func_424(iParam1, iParam3, iParam5, uParam6, &(uParam8->f_3), 0))
				{
					func_194(&(uParam6->f_5));
					func_193(&(uParam6->f_13));
					iVar6 = 10;
				}
				break;
			case 10:
				func_269(iParam1, uParam7, iParam3, iParam5, &cVar1, 0, 0);
				if (func_420(uParam2, iParam1, uParam6, iParam3, iParam5, uParam7, &(uParam8->f_16), &cVar1, 0) != 0)
				{
					iVar6 = 12;
				}
				break;
			case 12:
				if (func_423(uParam6, iParam3, iParam5, 0, uParam8))
				{
					iVar6 = 13;
				}
				break;
			case 13:
				if (func_424(iParam1, iParam3, iParam5, uParam6, &(uParam8->f_16), 0))
				{
					iVar6 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar6 != uParam6->f_10)
		{
			uParam6->f_10 = iVar6;
			iVar5++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

bool func_332(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, char* sParam12, int iParam13)
{
	func_427(uParam6);
	uParam6->f_3 = func_415(uParam1, uParam6->f_1, iParam5, iParam4, iParam3);
	while (iVar4 < 15)
	{
		iVar5 = uParam6->f_10;
		switch (uParam6->f_10)
		{
			case 0:
				iVar6 = func_417(uParam1, iParam0, iParam3, iParam4, iParam5, uParam6, iParam7, iParam13);
				if (iVar6 == 1)
				{
					iVar5 = 1;
				}
				else if (iVar6 == 2)
				{
					iVar5 = 14;
				}
				break;
			case 1:
				iVar6 = func_426(iParam0, uParam6, uParam9, sParam12);
				if (iVar6 != 0)
				{
					if (iVar6 == 1)
					{
						func_26(&(uParam6->f_4), 0);
					}
					iVar5 = 2;
				}
				break;
			case 2:
				func_269(iParam0, uParam8, iParam3, iParam5, &uVar0, 0, 0);
				func_428(uParam2, iParam0, uParam6, iParam3, iParam5, uParam8, uParam10, &uVar0, 1, 0, 1);
				iVar5 = 4;
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_421(uParam6) || func_429(uParam6, *iParam7, iParam13))
					{
						iVar5 = 5;
					}
				}
				break;
			case 5:
				if (!does_entity_exist(uParam6->f_2) || func_430(uParam6, iParam3, iParam5, 1, uParam9))
				{
					iVar5 = 6;
				}
				break;
			case 6:
				if (func_431(uParam10, uParam6, iParam3, iParam5, 1))
				{
					iVar5 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (does_entity_exist(uParam6->f_2))
					{
						func_425(uParam6->f_2, 0);
					}
					else if (func_86(uParam9->f_1, 1))
					{
						set_entity_visible_in_cutscene(uParam6->f_1, 1, 1, 7);
					}
					iVar5 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((func_86(uParam1->f_1, 0) || func_35(uParam2->f_5, 1)) && func_430(uParam6, iParam3, iParam5, 0, uParam9))
				{
					func_194(&(uParam6->f_5));
					iVar5 = 10;
				}
				break;
			case 10:
				func_269(iParam0, uParam8, iParam3, iParam5, &uVar0, 0, 0);
				func_428(uParam2, iParam0, uParam6, iParam3, iParam5, uParam8, uParam11, &uVar0, 0, 0, 1);
				iVar5 = 12;
				break;
			case 12:
				if (func_430(uParam6, iParam3, iParam5, 0, uParam9))
				{
					iVar5 = 13;
				}
				break;
			case 13:
				if (func_431(uParam11, uParam6, iParam3, iParam5, 0))
				{
					iVar5 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar5 != uParam6->f_10)
		{
			uParam6->f_10 = iVar5;
			iVar4++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

void func_333(var uParam0, var uParam1, struct<2> Param2, var uParam4)
{
	if (!does_entity_exist(uParam1->f_2))
	{
		return;
	}
	func_432(uParam0, uParam1, 6, 10, get_hash_key("Breaking_Front_Left_Wheel"), 0);
	func_432(uParam0, uParam1, 7, 11, get_hash_key("Breaking_Front_Right_Wheel"), 1);
	func_432(uParam0, uParam1, 8, 12, get_hash_key("Breaking_Rear_Left_Wheel"), 2);
	func_432(uParam0, uParam1, 9, 13, get_hash_key("Breaking_Rear_Right_Wheel"), 3);
	if (func_86(Param2.f_1, 3))
	{
		_0x201b8ed4ff7fe9f5(get_vehicle_index_from_entity_index(uParam1->f_2));
	}
	else if (func_86(Param2.f_1, 4))
	{
		if (has_anim_event_fired(uParam1->f_2, -913345033))
		{
			_0x201b8ed4ff7fe9f5(get_vehicle_index_from_entity_index(uParam1->f_2));
		}
		else
		{
			_0x41cda90ee3450921(get_vehicle_index_from_entity_index(uParam1->f_2));
		}
	}
}

bool func_334(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9)
{
	Var4.f_5 = -1082130432;
	uVar11 = -1;
	uParam5->f_3 = func_415(uParam1, uParam5->f_1, iParam4, -1, iParam3);
	while (iVar14 < 15)
	{
		iVar15 = uParam5->f_10;
		switch (uParam5->f_10)
		{
			case 0:
				if (does_entity_exist(uParam5->f_1))
				{
					iVar15 = 1;
				}
				else
				{
					return true;
				}
				break;
			case 1:
				iVar16 = func_433(iParam0, uParam5, iParam3, uParam6);
				if (iVar16 != 0)
				{
					if (iVar16 == 1)
					{
						func_26(&(uParam5->f_4), 0);
					}
					iVar15 = 2;
				}
				break;
			case 2:
				func_269(iParam0, uParam6, iParam3, 0, &cVar0, 0, 0);
				if (func_428(uParam2, iParam0, uParam5, iParam3, iParam4, uParam6, &Var4, &cVar0, 1, 1, 1))
				{
					iVar15 = 3;
				}
				break;
			case 3:
				if (iParam7 == 0 || func_86(uParam5->f_5, 0))
				{
					iVar15 = 4;
				}
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_421(uParam5) || func_429(uParam5, iVar10, iParam9))
					{
						iVar15 = 5;
					}
				}
				break;
			case 5:
				if (!does_entity_exist(uParam5->f_2) || func_430(uParam5, iParam3, iParam4, 1, &uVar11))
				{
					iVar15 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (does_entity_exist(uParam5->f_2))
					{
						func_425(uParam5->f_2, 0);
					}
					iVar15 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if (!does_entity_exist(uParam5->f_1) || ((func_86(uParam1->f_1, 0) || func_35(uParam2->f_5, 1)) && func_430(uParam5, iParam3, iParam4, 0, &uVar11)))
				{
					func_194(&(uParam5->f_5));
					iVar15 = 10;
				}
				break;
			case 10:
				func_269(iParam0, uParam6, iParam3, 0, &cVar0, 0, 0);
				if (func_428(uParam2, iParam0, uParam5, iParam3, 0, uParam6, &Var4, &cVar0, 0, 1, 1))
				{
					iVar15 = 11;
				}
				break;
			case 11:
				if (iParam8 == 0 || func_86(uParam5->f_5, 0))
				{
					iVar15 = 12;
				}
				break;
			case 12:
				if (!does_entity_exist(uParam5->f_1) || func_430(uParam5, iParam3, iParam4, 0, &uVar11))
				{
					iVar15 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar15 != uParam5->f_10)
		{
			uParam5->f_10 = iVar15;
			iVar14++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

bool func_335(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

int func_336()
{
	return Global_1915715->f_20241;
}

void func_337(int iParam0, bool bParam1)
{
	if (!func_434(iParam0))
	{
		return;
	}
	if ((bParam1 && func_435(iParam0, 512)) || (!bParam1 && !func_435(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_436(iParam0, 512);
	}
	else
	{
		func_437(iParam0, 512);
	}
	if (func_438(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_338()
{
	return func_439(4096);
}

bool func_339(int iParam0, int iParam1)
{
	return absi((_get_system_time() - iParam0)) >= iParam1;
}

bool func_340(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

bool func_341(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (iParam3 == 0 && !does_entity_exist(iParam1))
	{
		return false;
	}
	if (iParam3 == 0 && (is_entity_dead(iParam1) && !bParam5))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_440(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return false;
	}
	iVar0 = func_441(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!are_strings_equal(&(uParam0->f_17[iVar0]->f_1), sParam2))
		{
		}
		else if (uParam0->f_17[iVar0]->f_9 != iParam3)
		{
		}
		else if (uParam0->f_17[iVar0]->f_10 != iParam4)
		{
		}
		else
		{
			return true;
		}
	}
	else
	{
		iVar1 = func_442(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_443(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_444(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_17[iVar0] = iParam1;
		StringCopy(&(uParam0->f_17[iVar0]->f_1), sParam2, 64);
		uParam0->f_17[iVar0]->f_9 = iParam3;
		uParam0->f_17[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_344(uParam0->f_17[iVar0], 2);
		}
		else
		{
			func_445(uParam0->f_17[iVar0], 2);
		}
		return true;
	}
	return false;
}

bool func_342(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	return _is_this_model_a_horse(iVar0);
}

bool func_343(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_344(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_345(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (_0x9d1eca9337be9fc3(uParam0->f_208, sParam1))
		{
			iParam3 = 0;
		}
	}
	set_anim_scene_entity(uParam0->f_208, sParam1, iParam2, iParam3);
}

void func_346(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	clear_ped_blood_damage(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		_clear_ped_blood_damage_facial(iParam0, iVar0);
		iVar0++;
	}
}

int func_347(var uParam0)
{
	return *uParam0;
}

void func_348(var uParam0)
{
	if (((!_does_anim_scene_exist(uParam0->f_208) || !_is_anim_scene_started(uParam0->f_208, false)) || _0xef324e9550a394d5(uParam0->f_208)) || func_306(uParam0, 512))
	{
		if (!func_446(uParam0->f_264, 128))
		{
			func_447();
		}
		return;
	}
	if ((func_364(uParam0, Global_34, 4) || (_0x6f1f0b17109309da(uParam0->f_208, func_406(Global_34)) && _0xb89fcff19dafff28(uParam0->f_208, func_406(Global_34)))) || !_0x4b85b3cf91972222(uParam0->f_208))
	{
		if (!func_446(uParam0->f_264, 128))
		{
			func_447();
		}
		return;
	}
	bVar0 = true;
	iVar1 = _0xc17f69e1418cd11f(9);
	if (iVar1 != 0)
	{
		if (func_448(iVar1))
		{
			if (func_449(Global_26539, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_446(uParam0->f_264, 512))
	{
		bVar2 = true;
	}
	if (!func_306(uParam0, 2) && func_450(bVar0, bVar2))
	{
		_delete_anim_scene_2(uParam0->f_208);
		func_447();
	}
}

void func_349(var uParam0, char* sParam1)
{
	if (func_347(uParam0) == 2 && (func_357(uParam0->f_263, 16384) || func_306(uParam0, 268435456)))
	{
		Var0 = { func_323(uParam0) };
		func_265(uParam0, &Var0);
	}
	func_451(uParam0, sParam1);
	if (func_306(uParam0, 131072))
	{
		func_452(uParam0, 0);
	}
	if (func_453())
	{
		func_454(1);
	}
	func_321(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_455(uParam0, cVar8);
	func_359(1, 0);
	func_316(uParam0);
	if (func_351(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_188);
	}
	func_456(uParam0);
	func_271(uParam0, 1);
	if (func_357(uParam0->f_263, 4194304))
	{
		set_anim_scene_origin(uParam0->f_208, uParam0->f_5, uParam0->f_8, 2);
	}
	start_anim_scene(uParam0->f_208);
	Global_26538 = uParam0->f_208;
	StringCopy(&Global_26540, sParam1, 24);
}

void func_350(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_353(&(uParam0->f_1));
}

bool func_351(var uParam0, int iParam1)
{
	return (uParam0->f_191 && iParam1) != 0;
}

void func_352(var uParam0)
{
	Var0 = { func_323(uParam0) };
	func_233(uParam0, &Var0);
}

void func_353(float fParam0)
{
	func_457(fParam0, 0f);
}

bool func_354(float fParam0)
{
	return func_458(*fParam0, 1);
}

void func_355(float fParam0, bool bParam1)
{
	if (bParam1 || !func_354(fParam0))
	{
		func_353(fParam0);
	}
}

float func_356(float fParam0)
{
	if (!func_354(fParam0))
	{
		return fParam0->f_1;
	}
	if (func_459(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_460() - fParam0->f_1);
}

bool func_357(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_358(int iParam0)
{
	if (!network_is_in_session())
	{
		return;
	}
	if (network_is_in_mp_cutscene())
	{
		return;
	}
	set_entity_visible_in_cutscene(player_ped_id(), iParam0, 0, 256);
	network_set_in_mp_cutscene(true, true, 32, true);
}

void func_359(bool bParam0, int iParam1)
{
	if (func_461())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_462())
		{
			func_463(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_360(var uParam0)
{
	if (!func_306(uParam0, 4))
	{
		if (func_357(uParam0->f_263, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_464(uParam0) };
		if (!func_357(uParam0->f_263, 524288))
		{
			func_465(&(uParam0->f_275));
		}
		func_466(&(uParam0->f_263), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_467(uParam0, 0f, 0f, 0f);
		func_468(uParam0);
		func_469(uParam0);
		func_470(uParam0, 0f, 0f, 0f, 0, 0);
		func_471(uParam0);
		func_227(uParam0, 4);
		func_472(uParam0, 0);
		func_473(Global_34, 65601, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_276)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_276));
		}
	}
}

bool func_361(var uParam0, int iParam1)
{
	if (func_306(uParam0, 262144))
	{
		return false;
	}
	if (!_does_anim_scene_exist(uParam0->f_208))
	{
		return false;
	}
	if (!_0x6f1f0b17109309da(uParam0->f_208, "ExportCamera"))
	{
		return false;
	}
	if ((_0xb89fcff19dafff28(uParam0->f_208, "ExportCamera") || (_0x005e6f28dd7ed58d(uParam0->f_208, "ExportCamera") && iParam1)) || _is_anim_scene_active(uParam0->f_208))
	{
		func_227(uParam0, 262144);
		func_472(uParam0, 1);
		return true;
	}
	return false;
}

int func_362(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_208) || !_is_anim_scene_started(uParam0->f_208, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_duration(uParam0->f_208) * 1000f));
}

int func_363(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_208) || !_is_anim_scene_started(uParam0->f_208, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_time(uParam0->f_208) * 1000f));
}

bool func_364(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((does_entity_exist(&(uParam0->f_17[iVar0])) && &uParam0->f_17[iVar0] == iParam1) && func_343(uParam0->f_17[iVar0], iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_365(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_208))
	{
		return true;
	}
	if (_0xf94692eb9dc15d74(uParam0->f_208, 0))
	{
		if (func_306(uParam0, 524288))
		{
			_0x1b70811d3bf75db9(1, 1);
		}
		return true;
	}
	if (func_306(uParam0, 1048576) && _is_anim_scene_active(uParam0->f_208))
	{
		return true;
	}
	if ((func_446(uParam0->f_264, 1024) && _0x6f1f0b17109309da(uParam0->f_208, "ExportCamera")) && _0xb89fcff19dafff28(uParam0->f_208, "ExportCamera"))
	{
		return true;
	}
	return false;
}

void func_366(var uParam0)
{
	if (((func_306(uParam0, 1073741824) && !func_306(uParam0, 524288)) && func_306(uParam0, 512)) && is_screen_faded_out())
	{
		do_screen_fade_in(uParam0->f_292);
	}
}

void func_367(var uParam0)
{
	if (!func_306(uParam0, 536870912))
	{
		func_472(uParam0, 1);
		func_368(&(uParam0->f_264), uParam0->f_275);
		func_227(uParam0, 536870912);
	}
	if (func_306(uParam0, 524288))
	{
		do_screen_fade_out(0);
	}
	func_474(uParam0);
	func_350(uParam0, 1);
	func_317(uParam0);
	func_266(uParam0);
	func_475(uParam0);
	func_476(uParam0, 4);
	func_320(uParam0);
	func_452(uParam0, 1);
	func_316(uParam0);
	func_477(&(uParam0->f_1));
	if (_does_anim_scene_exist(uParam0->f_208) && check_ownership_of_anim_scene(uParam0->f_208))
	{
		_delete_anim_scene(uParam0->f_208);
	}
	func_478(!func_446(uParam0->f_264, 128));
	if (!func_446(uParam0->f_264, 128))
	{
		func_447();
	}
}

void func_368(var uParam0, int iParam1)
{
	if (Global_1940258->f_6)
	{
		return;
	}
	func_479(2000);
	Global_13 = 0;
	if (!func_446(*uParam0, 2048))
	{
		func_480();
	}
	set_entity_invincible(Global_34, func_446(*uParam0, 8));
	if (!func_446(*uParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_446(*uParam0, 2) || func_446(*uParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_446(*uParam0, 16))
	{
		func_481(1);
	}
	if ((iParam1 != 0 && func_482(iParam1) != -525676072) && !func_446(*uParam0, 32))
	{
		func_483(Global_34, -1144282354, 0, 0, 0);
	}
	else if (func_484(-1406972469) != -1)
	{
		func_483(Global_34, -1406972469, 0, 0, 0);
	}
	func_485(Global_34, 98369, 1, 1, 0);
	*uParam0 = 0;
}

void func_369()
{
	Global_1940258->f_46 = 1;
}

bool func_370(int iParam0)
{
	return func_486(&(Global_524288->f_6), iParam0);
}

void func_371(bool bParam0)
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

void func_372()
{
	Global_1913501 = 1;
}

void func_373(int iParam0)
{
	if (is_bit_set(iLocal_14, iParam0))
	{
	}
	else
	{
		set_bit(&iLocal_14, iParam0);
		_hide_hud_component(func_487(iParam0));
	}
}

void func_374(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_375(bool bParam0)
{
	func_488(46, !bParam0);
}

void func_376()
{
	func_489(0);
}

void func_377(bool bParam0, bool bParam1, bool bParam2)
{
	Global_1071686->f_7 = 1;
	if ((Global_1296859->f_21 - Global_1071686->f_9) > 2)
	{
		if (bParam2)
		{
			func_490(20f);
		}
	}
	Global_1071686->f_9 = Global_1296859->f_21;
	if (bParam0)
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = int_to_playerindex(iVar2);
		if (!_network_is_player_index_valid(iVar0))
		{
		}
		else if (!network_is_player_active(iVar0))
		{
		}
		else
		{
			iVar1 = get_player_ped(iVar0);
			if (!does_entity_exist(iVar1))
			{
			}
			else if (network_has_control_of_entity(iVar1))
			{
				set_ped_reset_flag(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_491())
	{
		_0x236905c700fdb54d();
	}
	set_ped_reset_flag(player_ped_id(), 25, true);
	_0x3c8f74e8fe751614();
	_0x634f4a0562cf19b8();
	func_492(250);
	if (bParam1)
	{
		_0x5651516d947abc53();
	}
}

void func_378(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = 0;
	*uParam4 = 0;
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	iVar2 = 0;
	while (iVar2 <= (*uParam0 - 1))
	{
		iVar1 = int_to_participantindex(iVar2);
		if (!network_is_participant_active(iVar1))
		{
		}
		else if (is_bit_set(uParam0[iVar2], 0) && !is_bit_set(uParam0[iVar2], 8))
		{
			*uParam4++;
			if (_0x0a79c81c418f5d38(uParam1->f_29[iParam2], iVar2))
			{
				if (iVar0 == network_get_player_index(iVar1))
				{
					uParam1->f_6 = iParam2;
				}
				*iParam3++;
			}
		}
		iVar2++;
	}
	if (&uParam1->f_14[iParam2] > 0)
	{
		*uParam4 = &uParam1->f_14[iParam2];
	}
}

Vector3 func_379(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_380(int* iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	*iParam0->f_9[iParam4] = { vParam1 };
	iParam0->f_27[iParam4] = iParam5;
	iParam0->f_32[iParam4] = iParam6;
	set_bit(iParam0, 5);
}

void func_381(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		set_bit(iParam0, 0);
	}
	else
	{
		clear_bit(iParam0, 0);
	}
	iParam0->f_2 = iParam1;
}

bool func_382(var uParam0)
{
	return is_bit_set(*uParam0, 8);
}

void func_383(int* iParam0)
{
	set_bit(iParam0, 8);
}

void func_384(int* iParam0)
{
	if (is_bit_set(*iParam0, 3) && !is_bit_set(*iParam0, 4))
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (func_493(&(uLocal_15[iVar0])))
			{
				func_494(&(uLocal_15[iVar0]), 0, 1, 1);
				func_495(&(uLocal_15[iVar0]), 0, 1);
				func_496(uLocal_15[iVar0], 1, 1);
			}
			iVar0++;
		}
		set_bit(iParam0, 4);
	}
}

bool func_385(var uParam0)
{
	return is_bit_set(*uParam0, 2);
}

int func_386(var uParam0, var uParam1)
{
	iVar0 = participant_id_to_int();
	if (is_bit_set(uParam1->f_1, 8))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (_0x0a79c81c418f5d38(uParam1->f_29[iVar1], iVar0))
			{
				return iVar1;
			}
			iVar1++;
		}
		return uParam1->f_5;
	}
	if ((*uParam0)[iVar0]->f_1 != -1)
	{
		if (&uParam1->f_19[(*uParam0)[iVar0]->f_1])
		{
			return (*uParam0)[iVar0]->f_1;
		}
	}
	return uParam1->f_4;
}

int func_387()
{
	return -1;
}

void func_388(bool bParam0)
{
	if (bParam0)
	{
		func_252(32);
	}
	else
	{
		func_395(32);
	}
}

void func_389(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!does_entity_exist(iParam1))
	{
		iParam4 = 1;
	}
	func_289(iParam0);
	func_395(1024);
	if (bParam5)
	{
		func_252(16);
	}
	func_497(iParam1);
	func_498(iParam4);
	if (bParam2)
	{
		Global_1102219->f_26.f_4 = 1;
		Global_1102219->f_26.f_5 = iParam3;
	}
}

bool func_390(int iParam0, int iParam1)
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

void func_391(vector3 vParam0)
{
	if (!Global_1940258->f_6)
	{
		func_499(vParam0);
		func_500(vParam0);
	}
}

void func_392(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar1 = player_id();
	iVar2 = player_ped_id();
	if (is_ped_on_mount(iVar2))
	{
		iVar3 = get_mount(iVar2);
		if (!is_ped_injured(iVar3))
		{
			iVar0 = iVar3;
		}
		else
		{
			iVar0 = iVar2;
		}
	}
	else if (is_ped_in_any_vehicle(iVar2, false))
	{
		iVar4 = get_vehicle_ped_is_in(iVar2, false);
		if (_0x083d497d57b7400f(iVar4))
		{
			freeze_entity_position(iVar4, false);
		}
		set_vehicle_forward_speed(iVar4, (fParam0 * 3f));
		return;
	}
	else
	{
		iVar0 = iVar2;
	}
	if (_0x083d497d57b7400f(iVar0))
	{
		freeze_entity_position(iVar0, false);
	}
	force_ped_motion_state(iVar0, func_501(fParam0), false, iParam2, bParam3);
	simulate_player_input_gait(iVar1, fParam0, iParam1, get_entity_heading(iVar0), false, false);
}

void func_393(int* iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (does_entity_exist(iParam0->f_14[iVar0]->f_1.f_2))
		{
			delete_entity(&(iParam0->f_14[iVar0]->f_1.f_2));
		}
		iParam0->f_14[iVar0]->f_1.f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (does_entity_exist(iParam0->f_99[iVar0]->f_2))
		{
			delete_entity(&(iParam0->f_99[iVar0]->f_2));
		}
		iParam0->f_99[iVar0]->f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (does_entity_exist(iParam0->f_500[iVar0]->f_2))
		{
			delete_entity(&(iParam0->f_500[iVar0]->f_2));
		}
		iParam0->f_500[iVar0]->f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (does_entity_exist(iParam0->f_761[iVar0]->f_2))
		{
			delete_entity(&(iParam0->f_761[iVar0]->f_2));
		}
		iParam0->f_761[iVar0]->f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (does_entity_exist(iParam0->f_892[iVar0]->f_2))
		{
			delete_entity(&(iParam0->f_892[iVar0]->f_2));
		}
		iParam0->f_892[iVar0]->f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (does_entity_exist(iParam0->f_1023[iVar0]->f_2))
		{
			delete_entity(&(iParam0->f_1023[iVar0]->f_2));
		}
		iParam0->f_1023[iVar0]->f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (does_entity_exist(iParam0->f_1089[iVar0]->f_2))
		{
			iVar1 = get_vehicle_index_from_entity_index(iParam0->f_1089[iVar0]->f_2);
			delete_mission_train(&iVar1);
		}
		iParam0->f_1089[iVar0]->f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (does_entity_exist(iParam0->f_1104[iVar0]->f_2))
		{
			delete_entity(&(iParam0->f_1104[iVar0]->f_2));
		}
		iParam0->f_1104[iVar0]->f_2 = 0;
		iVar0++;
	}
}

void func_394(int iParam0, bool bParam1)
{
	if (is_bit_set(iLocal_14, iParam0) || bParam1)
	{
		clear_bit(&iLocal_14, iParam0);
		_display_hud_component(func_487(iParam0));
	}
}

void func_395(int iParam0)
{
	if (!func_502(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 - (Global_1102219->f_26.f_9 && iParam0));
}

void func_396()
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2977)
	{
		if (!&Global_1952637->f_2977.f_1[iVar0])
		{
		}
		else if (_0x93ffd92f05ec32fd(Global_1952637->f_2977.f_1[iVar0]->f_1))
		{
			_0x13e7320c762f0477(Global_1952637->f_2977.f_1[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_397(int iParam0)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	set_entity_visible(iVar1, true);
	_0x18ff3110cf47115d(iVar1, 2, true);
	_0x18ff3110cf47115d(iVar1, 3, true);
	_0x18ff3110cf47115d(iVar1, 11, true);
	_0x18ff3110cf47115d(iVar1, 12, true);
	_0x18ff3110cf47115d(iVar1, 1, true);
	_0x18ff3110cf47115d(iVar1, 0, true);
	set_ped_can_ragdoll(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		set_player_control(iVar0, true, 0, false);
	}
	else
	{
		set_player_control(iVar0, true, 4, false);
	}
	freeze_entity_position(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_245();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_398(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = player_id();
	iVar1 = player_ped_id();
	iVar2 = 0;
	if (bParam3 && !is_ped_fatally_injured(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	set_player_control(iVar0, false, iVar2, false);
	set_entity_visible(iVar1, bParam0);
	_0x18ff3110cf47115d(iVar1, 2, bParam0);
	_0x18ff3110cf47115d(iVar1, 3, bParam0);
	_0x18ff3110cf47115d(iVar1, 11, bParam0);
	_0x18ff3110cf47115d(iVar1, 12, bParam0);
	_0x18ff3110cf47115d(iVar1, 1, bParam0);
	_0x18ff3110cf47115d(iVar1, 0, bParam0);
	if (bParam1)
	{
		set_player_invincible(iVar0, true);
	}
	if ((!is_ped_in_any_vehicle(iVar1, true) && !is_entity_attached_to_any_object(iVar1)) && !is_entity_attached_to_any_ped(iVar1))
	{
		if (bParam2)
		{
			set_entity_collision(iVar1, false, false);
			set_entity_completely_disable_collision(iVar1, false, false);
			freeze_entity_position(iVar1, true);
		}
	}
	if (bParam3 && !is_ped_fatally_injured(iVar1))
	{
		if (_0x9ff5f9b24e870748(iVar1))
		{
			clear_ped_tasks_immediately(iVar1, false, !bParam6);
		}
	}
}

void func_399(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 24);
}

void func_400(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

bool func_401(int iParam0)
{
	return func_335(128, iParam0);
}

void func_402(int iParam0)
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
	func_403(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_403(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

struct<8> func_404(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	iVar0 = get_length_of_literal_string(sParam0);
	iVar1 = get_length_of_literal_string(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = get_length_of_literal_string(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, _0x806862e5d266cf38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = get_length_of_literal_string(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, _0x806862e5d266cf38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

struct<16> func_405(var uParam0)
{
	return uParam0->f_192;
}

char* func_406(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_34)
	{
		if (get_entity_model(Global_34) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = get_entity_model(iParam0);
	return func_503(iVar0);
}

void func_407(var uParam0)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_13))
	{
		remove_scenario_blocking_area(uParam0->f_13, false);
	}
}

struct<8> func_408()
{
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_409(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_410(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_13))
	{
		remove_scenario_blocking_area(uParam0->f_13, false);
	}
	uParam0->f_4 = uParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_13 = _0x4c39c95ae5db1329(uParam1, iParam2, iVar0);
}

struct<8> func_411(var uParam0)
{
	return uParam0->f_217;
}

struct<8> func_412()
{
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

void func_413(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
{
	if (bParam4)
	{
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!is_ped_human(iParam0))
	{
		return;
	}
	if (func_409(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(iParam0, false);
	}
	fVar3 = func_314(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.75f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1.5f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.25f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.25f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
			if (bParam9 == 1)
			{
				if (_0x33fa048675821da7(iVar0, 3))
				{
					_0x06d26a96ca1bca75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1f);
					if (bParam9 == 1)
					{
						if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
						{
							if (_0x33fa048675821da7(iVar0, 3))
							{
								_0x06d26a96ca1bca75(iVar2, 3, 0f, 0);
							}
						}
					}
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_34)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_504(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_504(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

bool func_414(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	iVar1 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar2 = get_vehicle_ped_is_in(iParam0, false);
	}
	fVar4 = func_314(iParam0, vParam1, 1);
	if (!func_354(fParam4))
	{
		if (fVar4 <= fParam5)
		{
			if (does_entity_exist(iVar1) || does_entity_exist(iVar2))
			{
				func_355(fParam4, 0);
			}
		}
	}
	else if (bParam7 && fVar4 > fParam5)
	{
		func_477(fParam4);
	}
	if (func_354(fParam4))
	{
		if (bParam10)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (!is_entity_dead(iVar1))
		{
			set_ped_max_move_blend_ratio(iVar1, 1f);
		}
		if (!is_entity_dead(iVar2) && _is_draft_vehicle(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = _get_ped_in_draft_seat(iVar2, iVar0);
				if (!is_entity_dead(iVar3))
				{
					set_ped_max_move_blend_ratio(iVar3, 1f);
					_0x0c3f0f7f92ca847c(iVar2, _0x46bf2a810679d6e6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_356(fParam4) >= fParam6)
		{
			if (iParam0 == Global_34)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar1) && !func_504(iParam0, 501393341))
			{
				if (is_ped_on_mount(iParam0))
				{
					task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!is_entity_dead(iVar2) && !func_504(iParam0, -828834893))
			{
				if (is_ped_in_any_vehicle(iParam0, false))
				{
					task_leave_any_vehicle(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_34 && bParam8 == 0)
		{
			if (get_is_task_active(iParam0, 8))
			{
				clear_ped_tasks(iParam0, 1, 0);
			}
			set_ped_reset_flag(iParam0, 175, true);
		}
	}
	return false;
}

int func_415(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!does_entity_exist(iParam1))
	{
		return 2;
	}
	if (is_entity_a_ped(iParam1) && is_ped_a_player(get_ped_index_from_entity_index(iParam1)))
	{
		if (get_ped_index_from_entity_index(iParam1) == player_ped_id())
		{
			return 1;
		}
		return 2;
	}
	iVar0 = network_get_network_id_from_entity(iParam1);
	if (!network_does_network_id_exist(iVar0))
	{
		return 1;
	}
	iVar1 = _0xa6c0787443c9583e(iVar0);
	if (iVar1 == 255)
	{
		return 0;
	}
	if (iVar1 == player_id())
	{
		_0x7182edda1ee7db5a(iVar0);
		return 1;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (&uParam0->f_7[iVar2] == 255)
		{
		}
		else if (&uParam0->f_7[iVar2] == iVar1)
		{
			return 2;
		}
		iVar2++;
	}
	if (&uParam0->f_7[0] != 255 && &uParam0->f_7[0] == player_id())
	{
		network_request_control_of_network_id(iVar0);
	}
	return 0;
}

void func_416(var uParam0, var uParam1, var uParam2)
{
	if (is_string_null_or_empty(&(uParam2->f_3)))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(uParam1->f_1);
	iVar1 = get_ped_index_from_entity_index(uParam1->f_2);
	bVar2 = func_505(uParam1->f_1) == player_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (is_ped_male(iVar1))
	{
		iVar3 = get_hash_key(&(uParam2->f_3));
	}
	else
	{
		iVar3 = get_hash_key(&(uParam2->f_7));
	}
	if (_0xa0bc8faed8cfeb3c(iVar1))
	{
		if (!func_86(uParam1->f_4, 14) && func_86(uParam1->f_4, 15))
		{
			func_506(iVar1, iVar3);
			func_26(&(uParam1->f_4), 14);
		}
		if (!func_86(uParam1->f_4, 15))
		{
			_0x59bd177a1a48600a(iVar1, 1);
			func_26(&(uParam1->f_4), 15);
		}
	}
	if (has_anim_event_fired(uParam1->f_2, get_hash_key("ChangeOutfit")))
	{
		if (!func_86(uParam1->f_4, 17) && _0xa0bc8faed8cfeb3c(iVar1))
		{
			func_507(iVar1, iVar3);
			func_26(&(uParam1->f_4), 17);
		}
		if (!func_86(uParam1->f_4, 16))
		{
			if (!bVar2)
			{
				func_26(&(uParam1->f_4), 16);
			}
			else if (_0xa0bc8faed8cfeb3c(iVar0) && func_508())
			{
				func_507(iVar0, iVar3);
				iVar4 = iVar3;
				func_509(&iVar4);
				func_26(&(uParam1->f_4), 16);
			}
		}
	}
}

int func_417(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	if (iParam3 <= -1)
	{
		return 2;
	}
	if (does_entity_exist(uParam5->f_1))
	{
		return 1;
	}
	else if (iParam4 == 966820754)
	{
		if (iParam3 >= 4)
		{
			return 2;
		}
		iVar0 = func_263(iParam1, iParam3);
		if (iVar0 < 0 || iVar0 >= 4)
		{
			return 2;
		}
		iVar1 = &uParam0->f_7[iVar0];
		if (iVar1 == 255)
		{
			return 2;
		}
		uParam5->f_1 = get_player_ped(iVar1);
		*uParam5 = iParam3;
		*iParam6 = 0;
		return 1;
	}
	else
	{
		iVar4 = func_204(iParam7, iParam3, iParam4, &iVar2, iParam6, &uVar3);
		uParam5->f_1 = _get_entity_from_item(iVar2);
		if (iVar4 == 0)
		{
			if (!func_14(&(uParam5->f_11)))
			{
				func_15(&(uParam5->f_11), 0, 0);
			}
			if (func_36(&(uParam5->f_11), 0, 0) >= 15000)
			{
				func_283(&(uParam5->f_11));
				return 2;
			}
			return 0;
		}
		else if (iVar4 == 2 || !does_entity_exist(uParam5->f_1))
		{
			func_283(&(uParam5->f_11));
			return 2;
		}
		else if (iVar4 == 1)
		{
			func_283(&(uParam5->f_11));
			*uParam5 = iParam3;
			return 1;
		}
	}
	return 0;
}

int func_418(int* iParam0, var uParam1, char* sParam2)
{
	Var0 = { func_267(sParam2, get_ped_index_from_entity_index(uParam1->f_1.f_1), uParam1->f_1, 0) };
	return func_510(iParam0, &Var0);
}

bool func_419(int iParam0)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		if (!func_253(iVar0))
		{
			return false;
		}
		iVar1 = get_player_ped(iParam0);
		if (is_entity_dead(iVar1))
		{
			return false;
		}
		return true;
	}
	return false;
}

int func_420(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, char* sParam7, bool bParam8)
{
	iVar0 = get_ped_index_from_entity_index(uParam2->f_1);
	uParam2->f_13 = uParam6->f_7;
	switch (uParam6->f_7)
	{
		case 0:
			func_26(&(uParam2->f_5), 1);
			if (is_ped_dead_or_dying(iVar0, true) && !is_ped_a_player(iVar0))
			{
				uParam2->f_13 = 5;
			}
			else if (_0xdc44f405a6b98d03(iVar0, 0))
			{
				if (is_ped_in_any_vehicle(iVar0, false) && is_mounted_weapon_task_underneath_driving_task(iVar0))
				{
					uParam2->f_13 = 1;
				}
				else
				{
					iVar1 = _0x849bd6c6314793d0(iVar0);
					uParam2->f_13.f_4 = _0x4e76cb57222a00e5(iVar0);
					uParam2->f_13 = 6;
				}
			}
			else if (_is_ped_hogtied(iVar0))
			{
				iVar2 = _0x61914209c36efddb(iVar0);
				if (iVar2 == 7 || iVar2 == 5)
				{
					iVar1 = _get_carrier_as_ped(iVar0);
				}
				uParam2->f_13 = 4;
			}
			else if (is_ped_in_cover(iVar0, 0, 0))
			{
				uParam2->f_13 = 3;
			}
			else if (_get_ped_crouch_movement(iVar0))
			{
				uParam2->f_13 = 2;
			}
			else
			{
				uParam2->f_13 = 1;
			}
			break;
		case 4:
			break;
		case 6:
			iVar1 = _get_last_mount(iVar0);
			if (!does_entity_exist(iVar1))
			{
				uParam2->f_13 = 1;
			}
			else
			{
				uParam2->f_13.f_4 = uParam6->f_10;
			}
			break;
		case 7:
			uParam2->f_13.f_2 = uParam6->f_8;
			uParam2->f_13.f_1 = uParam6->f_9;
			uParam2->f_13.f_4 = uParam6->f_10;
			break;
		case 8:
			if (is_ped_a_player(iVar0))
			{
				iVar3 = network_get_player_index_from_ped(iVar0);
				iVar4 = _0xf49f14462f0ae27c(iVar3);
				iVar5 = _0xb9050a97594c8832(iVar3);
				if (does_entity_exist(iVar4))
				{
					iVar1 = iVar4;
				}
				else if (does_entity_exist(iVar5))
				{
					iVar1 = iVar5;
				}
				else
				{
					uParam2->f_13 = 1;
				}
			}
			else
			{
				uParam2->f_13 = 1;
			}
			break;
	}
	if (does_entity_exist(iVar1))
	{
		iVar6 = -1;
		if (func_511(iParam1, iVar1, 0, &iVar6, &uVar7))
		{
			uParam2->f_13.f_2 = iVar6;
			uParam2->f_13.f_1 = uVar7;
		}
		else if (!func_86(uParam2->f_13.f_3, 0))
		{
			func_26(&(uParam2->f_13.f_3), 0);
			return 0;
		}
		else
		{
			iVar8 = func_512(iVar1, iParam1, iParam3, iParam4);
			if (iVar8 != -1)
			{
				uParam2->f_13.f_2 = iVar8;
				uParam2->f_13.f_1 = 0;
			}
		}
	}
	if (func_86(uParam6->f_6, 0) && _0xdc44f405a6b98d03(iVar0, 0))
	{
		bVar9 = true;
	}
	if (func_428(uParam0, iParam1, uParam2, iParam3, iParam4, uParam5, uParam6, sParam7, bParam8, bVar9, func_86(uParam2->f_5, 1)))
	{
		bVar9 = true;
	}
	if (uParam2->f_13.f_2 != -1 && uParam2->f_13.f_1 == 0)
	{
		iVar10 = uParam2->f_13.f_2;
		if (uParam2->f_10 == 2)
		{
			iVar11 = 3;
		}
		else
		{
			iVar11 = 11;
		}
		if (iParam1->f_1104[iVar10]->f_10 < iVar11)
		{
			return 0;
		}
		else if (!func_86(iParam1->f_1104[iVar10]->f_5, 0))
		{
			if (uParam2->f_13 != 6 || uParam2->f_13.f_4 == -1)
			{
				iParam1->f_1104[iVar10]->f_5.f_1 = { uParam2->f_5.f_1 };
				iParam1->f_1104[iVar10]->f_5.f_4 = uParam2->f_5.f_4;
				func_26(&(iParam1->f_1104[iVar10]->f_5), 0);
			}
		}
	}
	if (bVar9)
	{
		return 1;
	}
	return 2;
}

bool func_421(var uParam0)
{
	if (!func_86(uParam0->f_4, 0))
	{
		return false;
	}
	if (!does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	return true;
}

bool func_422(var uParam0)
{
	if (!does_entity_exist(uParam0->f_1))
	{
		return true;
	}
	iVar0 = get_ped_index_from_entity_index(uParam0->f_1);
	if (!_0xa0bc8faed8cfeb3c(iVar0))
	{
		return false;
	}
	vVar1 = { func_513(iVar0) };
	vVar1.f_1 = (vVar1.y + 100f);
	fVar4 = get_entity_heading(iVar0);
	iVar5 = get_ped_index_from_entity_index(uParam0->f_2);
	if (!does_entity_exist(iVar5))
	{
		iVar5 = clone_ped(iVar0, 0f, false, true);
		if (!does_entity_exist(iVar5))
		{
			return true;
		}
		set_entity_invincible(iVar5, true);
		set_blocking_of_non_temporary_events(iVar5, true);
		func_514(iVar0, iVar5);
		set_entity_coords(iVar5, vVar1, true, false, true, true);
		set_entity_heading(iVar5, fVar4);
		func_425(iVar5, 1);
		uParam0->f_2 = iVar5;
	}
	if (!func_515(iVar0, iVar5, &(uParam0->f_4)))
	{
		return false;
	}
	return true;
}

bool func_423(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	if (bParam3)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
		if (uParam0->f_3 != 1)
		{
			return uParam0->f_3 != 0;
		}
	}
	if (uParam0->f_13.f_2 == -1)
	{
		iVar1 = get_ped_index_from_entity_index(iVar0);
		if (func_516(iVar1))
		{
			_0x8886d83a430537fd(iVar1, 4194336);
		}
		return func_430(uParam0, iParam1, iParam2, bParam3, uParam4);
	}
	return true;
}

bool func_424(int* iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	if (bParam5)
	{
		iVar0 = get_ped_index_from_entity_index(uParam3->f_2);
	}
	else
	{
		iVar0 = get_ped_index_from_entity_index(uParam3->f_1);
		if (uParam3->f_3 != 1)
		{
			return uParam3->f_3 != 0;
		}
	}
	Var1 = -1;
	Var1.f_5.f_4 = -1082130432;
	if (func_517(iParam0, uParam3->f_13.f_2, uParam3->f_13.f_1, &Var1))
	{
		if (Var1.f_10 <= 1)
		{
			return false;
		}
		else if (func_86(Var1.f_4, 0))
		{
			if (func_518(iParam0, uParam3->f_13.f_2, uParam3->f_13.f_1, bParam5, &iVar14))
			{
			}
			else
			{
				return false;
			}
		}
	}
	iVar15 = 0;
	iVar16 = func_519(iVar0, 1, 0, 0);
	Var17 = { func_520() };
	bVar21 = false;
	bVar22 = func_86(uParam4->f_6, 5);
	switch (uParam4->f_11)
	{
		case 0:
			break;
		case 1:
			_hide_ped_weapons(iVar0, 2, true);
			break;
		case 2:
			iVar15 = get_best_ped_weapon(iVar0, bVar22, true);
			break;
		case 4:
			iVar15 = _0xda37a053c1522f5d(iVar0, bVar22, 0, 0);
			break;
		case 5:
			iVar15 = uParam4->f_12;
			break;
		case 3:
			iVar15 = get_best_ped_weapon(iVar0, bVar22, false);
			break;
		case 6:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == -1241684019)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, -1241684019, bVar22, 0);
			}
			break;
		case 7:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == 1622482340)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, 1622482340, bVar22, 0);
			}
			break;
		case 8:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == -1569042529)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, -1569042529, bVar22, 0);
			}
			break;
		case 9:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == -954861255)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, -954861255, bVar22, 0);
			}
			break;
		case 10:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == 308416707)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, 308416707, bVar22, 0);
			}
			break;
		case 11:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == -728555052)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, -728555052, bVar22, 0);
			}
			break;
		case 12:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == 1595662460)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, 1595662460, bVar22, 0);
			}
			break;
		case 13:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == 416676503)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, 416676503, bVar22, 0);
			}
			break;
		case 14:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == -594562071)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, -594562071, bVar22, 0);
			}
			break;
		case 15:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == -1101297303)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, -1101297303, bVar22, 0);
			}
			break;
		case 16:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == 970310034)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, 970310034, bVar22, 0);
			}
			break;
		case 17:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == 860033945)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, 860033945, bVar22, 0);
			}
			break;
		case 18:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == -1212426201)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, -1212426201, bVar22, 0);
			}
			break;
		case 19:
			if (func_86(uParam4->f_6, 4) && get_weapontype_group(iVar16) == 1548507267)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = _0x9f67929d98e7c6e8(iVar0, 1548507267, bVar22, 0);
			}
			break;
		case 20:
			if (func_86(uParam4->f_6, 4) && _is_weapon_one_handed(iVar16))
			{
				iVar15 = iVar16;
			}
			else
			{
				_0xf52bd94b47ccf736(iVar0, &Var17, bVar22, 0);
				bVar21 = true;
			}
			break;
		case 21:
			remove_all_ped_weapons(iVar0, true, true);
			break;
	}
	if (bVar21)
	{
		_0x12fb95fe3d579238(iVar0, &Var17, 1, 0, 0, 0);
	}
	else
	{
		iVar23 = uParam4->f_11;
		if ((iVar23 >= 6 && iVar23 <= 19) && iVar15 == 0)
		{
			_0xf52bd94b47ccf736(iVar0, &Var17, bVar22, 0);
			_0x12fb95fe3d579238(iVar0, &Var17, 1, 0, 0, 0);
		}
		if (iVar15 != 0)
		{
			if (!has_ped_got_weapon(iVar0, iVar15, 0, false))
			{
				_give_weapon_to_ped_2(iVar0, iVar15, 0, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				_add_ammo_to_ped(iVar0, iVar15, 10, 752097756);
				set_ped_infinite_ammo(iVar0, true, iVar15);
			}
			set_current_ped_weapon(iVar0, iVar15, true, 0, false, false);
		}
	}
	if (!func_521(iVar0, uParam4))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iVar0, true))
	{
		return true;
	}
	switch (uParam3->f_13)
	{
		case 0:
			break;
		case 1:
			if (is_ped_on_foot(iVar0))
			{
				if (_get_ped_crouch_movement(iVar0))
				{
					_set_ped_crouch_movement(iVar0, false, 0, true);
				}
			}
			else if (_0xdc44f405a6b98d03(iVar0, 0))
			{
				_0x8886d83a430537fd(iVar0, 4194336);
			}
			break;
		case 2:
			if (!_get_ped_crouch_movement(iVar0))
			{
				_set_ped_crouch_movement(iVar0, true, 0, true);
			}
			break;
		case 3:
			if (!func_390(iVar0, -1959848946))
			{
				if (_0x083d497d57b7400f(iVar0))
				{
					freeze_entity_position(iVar0, false);
					bVar24 = true;
				}
				task_put_ped_directly_into_cover(iVar0, uParam3->f_5.f_1, -1, 1, 0, 1, func_86(uParam4->f_6, 1), 0, 0, 1, 0);
				_0x2208438012482a1a(iVar0, false, false);
				if (bVar24)
				{
					freeze_entity_position(iVar0, true);
				}
			}
			break;
		case 4:
			if (!func_390(iVar0, -2108652971))
			{
				task_carriable(iVar0, -2146271366, get_ped_index_from_entity_index(iVar14), 0, 0);
				if (!does_entity_exist(iVar14))
				{
					_0x9587913b9e772d29(iVar0, 0);
				}
				_0x2208438012482a1a(iVar0, false, false);
			}
			if (!_is_ped_hogtied(iVar0))
			{
				return false;
			}
			break;
		case 6:
		case 7:
		case 8:
			if (!does_entity_exist(iVar14))
			{
				return true;
			}
			if (!_0x159ef5b6edce00e8(iVar0, iVar14) || (uParam3->f_13.f_4 != -2 && _0x4e76cb57222a00e5(iVar0) != uParam3->f_13.f_4))
			{
				if (_0x083d497d57b7400f(iVar0))
				{
					freeze_entity_position(iVar0, false);
				}
				_0xe588b5a8a005cb5e(iVar0, iVar14, uParam3->f_13.f_4, 4194336);
				if (!_0x159ef5b6edce00e8(iVar0, iVar14))
				{
					return false;
				}
			}
			break;
		case 5:
			if (!is_ped_dead_or_dying(iVar0, true))
			{
				func_522(iVar0, 0);
			}
			break;
	}
	return true;
}

void func_425(int iParam0, bool bParam1)
{
	freeze_entity_position(iParam0, bParam1);
	set_entity_collision(iParam0, !bParam1, false);
	set_entity_visible(iParam0, !bParam1);
}

int func_426(int* iParam0, var uParam1, var uParam2, char* sParam3)
{
	if (!func_86(uParam2->f_1, 0) && is_entity_dead(uParam1->f_1))
	{
		return 2;
	}
	return func_510(iParam0, sParam3);
}

void func_427(var uParam0)
{
	if (does_entity_exist(uParam0->f_2))
	{
		_0xc3abcfbc7d74afa5(uParam0->f_2, 6, 1);
	}
}

bool func_428(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, char* sParam7, bool bParam8, bool bParam9, bool bParam10)
{
	iVar0 = uParam2->f_1;
	if (get_entity_type(iVar0) == 1 && !bParam10)
	{
		vVar1 = { func_513(get_ped_index_from_entity_index(iVar0)) };
	}
	else
	{
		vVar1 = { get_entity_coords(iVar0, true, false) };
	}
	fVar4 = get_entity_heading(iVar0);
	iVar5 = func_137(uParam0->f_1.f_2);
	uParam2->f_5.f_1 = { vVar1 };
	uParam2->f_5.f_4 = fVar4;
	if (bParam9)
	{
		bVar6 = true;
	}
	if (get_distance_between_coords(vVar1, *uParam5->f_1621[iVar5], true) < 100f && func_86(uParam6->f_4, 0))
	{
		bVar6 = true;
	}
	if (func_86(uParam6->f_4, 1))
	{
		bVar7 = true;
	}
	if (!bVar6)
	{
		if (func_86(uParam6->f_4, 2))
		{
			if (_get_anim_scene_entity_matrix(iParam1->f_1483.f_208, sParam7, &Var14, false, 0, 2))
			{
				if (bParam8)
				{
					vVar8 = { Var14 };
					vVar11 = { Var14.f_3 };
				}
				else
				{
					vVar8 = { Var14.f_6 };
					vVar11 = { Var14.f_9 };
				}
				if (!bVar7)
				{
					uParam2->f_5.f_1 = { vVar8 };
				}
				uParam2->f_5.f_4 = vVar11.z;
				bVar6 = true;
			}
		}
	}
	if (!bVar6)
	{
		if (!func_153(*uParam6))
		{
			if (!bVar7)
			{
				uParam2->f_5.f_1 = { *uParam6 };
			}
			uParam2->f_5.f_4 = uParam6->f_3;
			bVar6 = true;
		}
	}
	return bVar6;
}

int func_429(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = get_entity_type(uParam0->f_1);
	switch (iVar0)
	{
		case 1:
			return func_422(uParam0);
		case 2:
			if (is_this_model_a_train(get_entity_model(uParam0->f_1)))
			{
				return func_523(uParam0, iParam1);
			}
			else
			{
				return func_524(uParam0, iParam2);
			}
			break;
		case 3:
			return func_525(uParam0);
	}
	return 1;
}

bool func_430(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	if (bParam3)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
		if (uParam0->f_3 != 1)
		{
			return uParam0->f_3 != 0;
		}
	}
	bVar1 = _0x083d497d57b7400f(iVar0);
	if (bVar1)
	{
		freeze_entity_position(iVar0, false);
	}
	if (func_86(uParam0->f_5, 1))
	{
		func_526(iVar0, uParam0->f_5.f_1, uParam0->f_5.f_4, 1, 1073741824);
	}
	else
	{
		func_526(iVar0, uParam0->f_5.f_1, uParam0->f_5.f_4, 2, 1073741824);
	}
	if (!func_86(uParam4->f_1, 2))
	{
		_0x9587913b9e772d29(iVar0, 1);
	}
	if (bParam3 && is_entity_a_ped(iVar0))
	{
		_0x2208438012482a1a(get_ped_index_from_entity_index(iVar0), false, false);
	}
	if (bVar1)
	{
		freeze_entity_position(iVar0, true);
	}
	_set_entity_something(iVar0, true);
	vVar2 = { get_entity_coords(iVar0, true, false) };
	fVar5 = get_entity_heading(iVar0);
	return true;
}

bool func_431(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		iVar0 = uParam1->f_2;
	}
	else
	{
		iVar0 = uParam1->f_1;
		if (uParam1->f_3 != 1)
		{
			return uParam1->f_3 != 0;
		}
	}
	if (is_bit_set(uParam0->f_4, 3) && is_entity_a_vehicle(iVar0))
	{
		iVar1 = get_vehicle_index_from_entity_index(iVar0);
		iVar2 = 9;
		if (_0xff5791b7639c2a46(iVar1, &iVar2))
		{
			_0x194d877fc5597b7d(iVar1, iVar2, uParam0->f_5, 1);
		}
	}
	return true;
}

void func_432(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (has_anim_event_fired(uParam1->f_2, iParam4))
	{
		if (!func_86(uParam1->f_4, iParam2) && func_86(uParam0->f_1, 0))
		{
			func_26(&(uParam1->f_4), iParam2);
			if (network_has_control_of_entity(uParam1->f_1))
			{
				iVar0 = get_vehicle_index_from_entity_index(uParam1->f_1);
				_0xd4f5efb55769d272(iVar0, iParam5);
			}
		}
		if (!func_86(uParam1->f_4, iParam3))
		{
			func_26(&(uParam1->f_4), iParam3);
			iVar1 = get_vehicle_index_from_entity_index(uParam1->f_2);
			_0xd4f5efb55769d272(iVar1, iParam5);
		}
	}
}

int func_433(int* iParam0, var uParam1, int iParam2, var uParam3)
{
	if (!func_269(iParam0, uParam3, iParam2, 0, &uVar0, 0, 0))
	{
		return 2;
	}
	return func_510(iParam0, &uVar0);
}

bool func_434(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_435(int iParam0, int iParam1)
{
	if (!func_434(iParam0))
	{
		return false;
	}
	if (func_30() == -1)
	{
		return (Global_1915715->f_3[iParam0]->f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
	}
	return false;
}

void func_436(int iParam0, int iParam1)
{
	if (!func_434(iParam0))
	{
		return;
	}
	if (func_30() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 || iParam1);
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
	}
}

void func_437(int iParam0, int iParam1)
{
	if (!func_434(iParam0))
	{
		return;
	}
	if (func_30() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 - (Global_1915715->f_3[iParam0]->f_6 && iParam1));
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
	}
}

bool func_438(int iParam0)
{
	if (func_527())
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_439(int iParam0)
{
	return (Global_1102219->f_3520 && iParam0) != 0;
}

char* func_440(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_406(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_528(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_529(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_441(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (does_entity_exist(&(uParam0->f_17[iVar0])) && &uParam0->f_17[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_442(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (does_entity_exist(&(uParam0->f_17[iVar0])) && are_strings_equal(&(uParam0->f_17[iVar0]->f_1), sParam1))
		{
			return &(uParam0->f_17[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_443(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 14)
	{
		if (&uParam0->f_17[iVar12] == iParam1)
		{
			*uParam0->f_17[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_444(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!does_entity_exist(&(uParam0->f_17[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_445(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_446(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_447()
{
	if (func_493(Global_26539))
	{
		func_496(&Global_26539, 0, 0);
	}
}

bool func_448(int iParam0)
{
	if (func_530(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_449(int iParam0, bool bParam1)
{
	if (bParam1 && !func_493(iParam0))
	{
		return false;
	}
	return !func_531(iParam0, 4);
}

bool func_450(bool bParam0, bool bParam1)
{
	if (!func_493(Global_26539))
	{
		Global_26539 = func_532("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		(*Global_1951255)[Global_26539]->f_16 = &Global_20[3];
		func_495(Global_26539, 0, 1);
		func_533(Global_26539, 6, 1);
		if (bParam1)
		{
			func_533(Global_26539, 14, 1);
		}
	}
	else
	{
		if (!func_449(Global_26539, 0))
		{
			func_494(Global_26539, 1, 1, 1);
		}
		if (func_534(Global_26539, 1) != 0f && bParam0)
		{
			func_495(Global_26539, 1, 1);
		}
		else
		{
			func_495(Global_26539, 0, 1);
		}
		return func_535(Global_26539, 1);
	}
	return false;
}

void func_451(var uParam0, char* sParam1)
{
	if (((!func_306(uParam0, 32) || func_536(uParam0)) || func_306(uParam0, 268435456)) && !func_306(uParam0, 65536))
	{
		func_230(&(uParam0->f_263), 256);
	}
}

void func_452(var uParam0, bool bParam1)
{
	if (get_current_ped_weapon(Global_34, &uVar0, false, 9, false))
	{
		_0x67e21acc5c0c970c(Global_34, 9, bParam1);
	}
	if (get_current_ped_weapon(Global_34, &uVar0, false, 7, false))
	{
		_0x67e21acc5c0c970c(Global_34, 7, bParam1);
	}
	if (get_current_ped_weapon(Global_34, &uVar0, false, 8, false))
	{
		_0x67e21acc5c0c970c(Global_34, 8, bParam1);
	}
	if (get_current_ped_weapon(Global_34, &uVar0, false, 10, false))
	{
		_0x67e21acc5c0c970c(Global_34, 10, bParam1);
	}
}

bool func_453()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(872480335) > 0)
	{
		return true;
	}
	return false;
}

void func_454(bool bParam0)
{
	if (func_453())
	{
		Global_1958008 = 1;
	}
	if (func_537(-92416669))
	{
	}
	if (bParam0 && (Global_1940258->f_38 == -1016714371 || Global_1940258->f_38 == 332793555))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		Global_1940258->f_38 = -1569615261;
	}
}

void func_455(var uParam0, char[16] cParam1)
{
	MemCopy(&(uParam0->f_192), {cParam1}, 16);
}

void func_456(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_225[iVar0]))
		{
			func_538(uParam0, uParam0->f_225[iVar0]);
		}
		iVar0++;
	}
	Var1 = { func_408() };
	func_538(uParam0, &Var1);
	Var1 = { func_323(uParam0) };
	func_538(uParam0, &Var1);
}

void func_457(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_460() - fParam1);
	func_539(fParam0, 1);
	func_540(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_458(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_459(float fParam0)
{
	return func_458(*fParam0, 2);
}

float func_460()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_461()
{
	return func_530(_0xc17f69e1418cd11f(3));
}

bool func_462()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_463(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

Vector3 func_464(var uParam0)
{
	return uParam0->f_265;
}

void func_465(var uParam0)
{
	if (func_541(&iVar0))
	{
		if (func_542(iVar0, 0))
		{
			if (func_482(iVar0) == -525676072)
			{
				func_543(-1406972469, Global_34, 0, 0);
			}
			else
			{
				func_543(-1144282354, Global_34, 0, 0);
			}
		}
		if (*uParam0 == 0)
		{
			*uParam0 = iVar0;
		}
	}
}

void func_466(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	if (Global_1940258->f_6)
	{
		return;
	}
	Global_13 = 1;
	if (!network_is_game_in_progress())
	{
		func_544(-1);
		func_545(-1);
	}
	if (!func_357(*uParam0, 8388608))
	{
		func_358(1);
	}
	set_entity_invincible(Global_34, true);
	if (!func_357(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_357(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_357(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_357(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_357(*uParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_357(*uParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_357(*uParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_357(*uParam0, 4) && !func_357(*uParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_357(*uParam0, 2048))
	{
		func_546(0);
	}
	if (func_357(*uParam0, 8))
	{
		clear_ped_tasks_immediately(Global_34, false, true);
	}
	if (func_357(*uParam0, 256))
	{
		_hide_ped_weapons(Global_34, 2, true);
	}
	if (func_357(*uParam0, 8192))
	{
		func_547();
	}
	if (!func_357(*uParam0, 262144))
	{
		set_ped_reset_flag(Global_34, 264, true);
	}
	if (!func_357(*uParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_357(*uParam0, 1024))
	{
		set_cinematic_mode_active(false);
	}
	if (iParam2 != 2)
	{
		set_ped_stealth_movement(Global_34, iParam2 == 1, 0, 0);
	}
	if (is_ped_on_foot(Global_34))
	{
		if (bParam6)
		{
			set_ped_desired_move_blend_ratio(Global_34, 0f);
			set_ped_desired_heading(Global_34, get_entity_heading(Global_34));
			set_entity_velocity(Global_34, 0f, 0f, 0f);
		}
		if (!func_357(*uParam0, 16))
		{
			iVar0 = create_itemset(true);
			bVar1 = false;
			find_all_attached_carriable_entities(Global_34, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < get_itemset_size(iVar0))
			{
				iVar6 = get_indexed_item_in_itemset(iVar2, iVar0);
				iVar7 = _get_entity_from_item(iVar6);
				if (!does_entity_exist(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (is_entity_an_object(iVar7))
					{
						if (func_548() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_153(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_34, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_549(&vVar3, 50, 10, 0, 0);
					}
					vVar3.f_2 = (vVar3.z + 10f);
					if (!get_ground_z_for_3d_coord(vVar3, &(vVar3.f_2), true))
					{
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_550(2);
						func_551(-1);
						func_552(vVar3);
						func_554(func_553());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!_0x3ab6c7b0bb0df4b1(Global_34, -1))
				{
					clear_ped_tasks_immediately(Global_34, false, true);
					_0x2208438012482a1a(Global_34, false, false);
				}
			}
			destroy_itemset(iVar0);
		}
	}
	if (bParam6 && is_ped_on_mount(Global_34))
	{
		iVar9 = get_mount(Global_34);
		if (!is_entity_dead(iVar9))
		{
			clear_ped_tasks(iVar9, 1, 0);
			task_stand_still(iVar9, -1);
		}
	}
	if (!func_357(*uParam0, 4096))
	{
		func_346(Global_34);
	}
	if (!func_357(*uParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_357(*uParam0, 2097152) && !func_231(140))
	{
		if (func_555() || _0x50f124e6ef188b22(Global_34))
		{
			func_556(1);
		}
	}
	*uParam0 = 0;
}

void func_467(var uParam0, vector3 vParam1)
{
	uParam0->f_265 = { vParam1 };
}

void func_468(var uParam0)
{
	if (func_306(uParam0, 2048) && !func_153(func_557(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_34);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_306(uParam0, -2147483648))) && get_mount(Global_34) != iVar1)
		{
			func_526(iVar1, func_557(uParam0), func_558(uParam0), 2, 1073741824);
		}
		iVar2 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar2) && ((bVar0 && is_entity_in_volume(iVar2, uParam0->f_4, true, 0)) || func_306(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_34, iVar2, true))
		{
			func_526(iVar2, func_557(uParam0), func_558(uParam0), 2, 1073741824);
		}
	}
}

void func_469(var uParam0)
{
	if ((func_306(uParam0, 268435456) && !func_153(func_557(uParam0))) && is_ped_in_any_vehicle(Global_34, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_34);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_557(uParam0) };
			func_526(iVar0, vVar1, func_559(vVar1, Global_35, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_470(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_268 = { vParam1 };
	uParam0->f_271 = iParam4;
	if (func_153(vParam1))
	{
		func_72(uParam0, 2048, 1);
	}
	else
	{
		func_227(uParam0, 2048);
		if (bParam5)
		{
			func_227(uParam0, -2147483648);
		}
	}
}

void func_471(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((!is_entity_dead(&(uParam0->f_17[iVar0])) && is_entity_a_ped(&(uParam0->f_17[iVar0]))) && get_ped_index_from_entity_index(&(uParam0->f_17[iVar0])) != Global_34)
		{
			iVar1 = get_ped_index_from_entity_index(&(uParam0->f_17[iVar0]));
			if (is_ped_human(iVar1))
			{
				if (_0x6f1f0b17109309da(uParam0->f_208, &(uParam0->f_17[iVar0]->f_1)))
				{
					if (!func_343(uParam0->f_17[iVar0], 8))
					{
						if (func_561(func_560(iVar1, 0, 1, 0)))
						{
							if (!func_562(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_561(func_560(iVar1, 1, 1, 0)))
						{
							if (!func_562(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_472(var uParam0, bool bParam1)
{
	_0x67e21acc5c0c970c(Global_34, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_14)
		{
			_set_ped_component_disabled(Global_34, -1229581779, 1);
		}
	}
	else if (!func_446(uParam0->f_264, 256))
	{
		func_563(Global_34, &(Global_1952637->f_1675.f_1[28]), 0, -735900586, 1, 1, 0, 1, 0, 0, 1);
		func_229(&(uParam0->f_264), 256);
	}
	Global_14 = !bParam1;
}

int func_473(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_564(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_564(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_565(0))
	{
	}
	func_566(&(Global_1952637->f_1675), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

void func_474(var uParam0)
{
	StringCopy(&(uParam0->f_192), "", 128);
	func_567(uParam0);
	func_568(uParam0);
	func_569(uParam0);
}

void func_475(var uParam0)
{
	uParam0->f_11 = 0;
}

void func_476(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_445(uParam0->f_17[iVar0], iParam1);
		iVar0++;
	}
}

void func_477(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

void func_478(bool bParam0)
{
	if (_does_anim_scene_exist(Global_26538))
	{
		if (check_ownership_of_anim_scene(Global_26538))
		{
			_delete_anim_scene(Global_26538);
		}
	}
	Global_26538 = -1;
	StringCopy(&Global_26540, "", 24);
	Global_13 = 0;
	if (bParam0)
	{
		func_447();
	}
	_0xa0cefcea390aab9b(0);
}

void func_479(int iParam0)
{
	func_570();
	Global_1913504->f_1 = get_game_timer();
	Global_1913504->f_2 = iParam0;
}

void func_480()
{
	if (!network_is_in_session())
	{
		return;
	}
	if (!network_is_in_mp_cutscene())
	{
		return;
	}
	network_set_in_mp_cutscene(false, false, 32, true);
}

void func_481(bool bParam0)
{
	if (bParam0)
	{
		Global_1951255->f_1381 = (Global_1951255->f_1381 - Global_1951255->f_1381 & 2);
	}
	else
	{
		Global_1951255->f_1381 |= 2;
	}
	func_571(bParam0);
}

int func_482(int iParam0)
{
	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_483(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_572(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_573(iParam1);
	return func_485(iParam0, iVar0, bParam2, bParam2, bParam4);
}

int func_484(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2843.f_1)
	{
		if (&Global_1952637->f_2843.f_43[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_485(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!func_574(bParam4))
	{
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_564(2, iParam1, 0, 0, 0);
		}
		else
		{
			func_564(2, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	func_566(&(Global_1952637->f_1675), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

bool func_486(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_487(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 598430796;
		case 1:
			return 690901814;
		case 3:
			return 2083323686;
		case 2:
			return 474191950;
		case 4:
			return 128623374;
		case 6:
			return -993263478;
		case 7:
			return 1344742130;
		case 8:
			return 537169871;
		case 9:
			return -1763610107;
		case 10:
			return 68203906;
		case 11:
			return 253418738;
		case 12:
			return 433996714;
		case 13:
			return 999578278;
	}
	return 0;
}

void func_488(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_121(iParam0);
	}
	else
	{
		func_122(iParam0);
	}
}

void func_489(int iParam0)
{
	Global_1956200->f_1431.f_2 = 0f;
	Global_1956200->f_1431.f_1 = iParam0;
}

void func_490(float fParam0)
{
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	vVar1 = { get_entity_coords(iVar0, true, false) };
	clear_area(vVar1, fParam0, 65536);
	remove_particle_fx_in_range(vVar1, fParam0);
}

bool func_491()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_492(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

bool func_493(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if ((*Global_1951255)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1951255)[iParam0]->f_3);
}

void func_494(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_493(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	if (bParam1)
	{
		func_576(iParam0, 4);
		if (bParam3)
		{
			func_577(iVar0, 1);
		}
		func_578(iVar0, 1);
	}
	else
	{
		func_579(iParam0, 4);
		func_578(iVar0, 0);
	}
}

void func_495(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_493(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	func_577(iVar0, bParam1);
}

void func_496(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_493(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_575(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_580(iVar0);
	*uParam0 = 0;
}

void func_497(int iParam0)
{
	if (Global_1102219->f_26.f_3342 == iParam0)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		Global_1102219->f_26.f_3342 = 0;
		return;
	}
	if (iParam0 == func_581(player_ped_id()))
	{
		if (does_entity_exist(Global_1102219->f_26.f_3344))
		{
			iParam0 = Global_1102219->f_26.f_3344;
		}
	}
	Global_1102219->f_26.f_3342 = iParam0;
}

void func_498(int iParam0)
{
	Global_1102219->f_26.f_3 = iParam0;
}

void func_499(vector3 vParam0)
{
	if (!Global_1940258->f_6)
	{
		vVar1 = { get_offset_from_entity_given_world_coords(Global_34, vParam0) };
		fVar0 = get_heading_from_vector_2d(vVar1.x, vVar1.y);
		set_gameplay_cam_relative_heading(fVar0, 1f);
		_0x05bd5e4088b30a66(-180f, 180f);
	}
}

void func_500(vector3 vParam0)
{
	if (!Global_1940258->f_6)
	{
		vVar0 = { get_offset_from_entity_given_world_coords(Global_34, vParam0) };
		fVar3 = atan((vVar0.z / sqrt(((vVar0.y * vVar0.y) + (vVar0.x * vVar0.x)))));
		set_gameplay_cam_relative_pitch(fVar3, 1f);
	}
}

int func_501(float fParam0)
{
	if (fParam0 == 0f)
	{
		return -1871534317;
	}
	if (fParam0 >= 1f && fParam0 < 2f)
	{
		return -668482597;
	}
	if (fParam0 >= 2f && fParam0 < 3f)
	{
		return -530524;
	}
	if (fParam0 == 3f)
	{
		return -1115154469;
	}
	return -1871534317;
}

bool func_502(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

char* func_503(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return "Arthur";
		case -1464743433:
			return "Abe";
		case -1418951751:
			return "ABERDEENPIGFARMER";
		case 2029634351:
			return "ABERDEENSISTER";
		case -288068792:
			return "AbigailRoberts";
		case 513427234:
			return "AlbertMason";
		case -121985991:
			return "ArchieDown";
		case -205121720:
			return "Baptiste";
		case -77509825:
			return "BartholomewBraithwaite";
		case -55633154:
			return "CS_BEATENUPCAPTAIN";
		case 1266159496:
			return "BeauGray";
		case -2045269112:
			return "PenelopeBraithwaite";
		case 2070393450:
			return "BillWilliamson";
		case 477547053:
			return "BraithwaiteServant";
		case 1382164045:
			return "CatherineBraithwaite";
		case 1407031519:
			return "CharlesSmith";
		case -754733870:
			return "CS_CIGCARDGUY";
		case 1253299569:
			return "CS_DINOBONESLADY";
		case -464684897:
			return "Cleet";
		case -820975767:
			return "ColmODriscoll";
		case -1765531164:
			return "CreoleGuy";
		case -820854800:
			return "SDDoctor_01";
		case 382040614:
			return "DaleMaroney";
		case 1944593012:
			return "Dutch";
		case -450226655:
			return "EdithDown";
		case -1920451728:
			return "Fussar";
		case 1514128030:
			return "cs_fishcollector";
		case -1865855539:
			return "Bronte";
		case -1629501717:
			return "GuidoMartelli";
		case -1208814201:
			return "U_M_M_NBXBRONTEGOON_01";
		case 1478983280:
			return "G_M_M_UNIBRONTEGOONS_01";
		case -1769295812:
			return "GarethBraithwaite";
		case 1020041649:
			return "GenStoryFemale";
		case -639059862:
			return "GenStoryMale";
		case -920985758:
			return "Leon";
		case -1154137714:
			return "GeraldBraithwaite";
		case 1225208808:
			return "HoseaMatthews";
		case 1912073755:
			return "JackMarston";
		case -631664452:
			return "JackMarston_Teen";
		case 4991732:
			return "Jamie";
		case 1843625996:
			return "JavierEscuella";
		case 1815090590:
			return "JimCalloway";
		case -446093729:
			return "Joe";
		case 95866989:
			return "JohnMarston";
		case 2100656433:
			return "CS_JOHNWEATHERS";
		case 1006468445:
			return "JosiahTrelawny";
		case -1707202053:
			return "Karen";
		case 358502875:
			return "MrsAdler";
		case 1939579094:
			return "Kieran";
		case -100461901:
			return "LeoStrauss";
		case 1304311224:
			return "LondonderrySon";
		case -1690877284:
			return "MaryBeth";
		case 1051047356:
			return "MaryLinton";
		case -566878875:
			return "MicahBell";
		case -346700962:
			return "MollyOshea";
		case -272634447:
			return "CS_MrLinton";
		case 984264800:
			return "MrPearson";
		case 1367851675:
			return "MrsLondonderry";
		case -2075588078:
			return "Mud2BigGuy";
		case 2115504616:
			return "ProfessorBell";
		case 1618031732:
			return "RevSwanson";
		case -265719023:
			return "CS_Samaritan";
		case -1483559144:
			return "StrDeputy_01";
		case -572941403:
			return "StrDeputy_02";
		case -2081966149:
		case 2012148102:
			return "StrSheriff_01";
		case 1695129705:
			return "SusanGrimshaw";
		case 1407740785:
			return "TavishGray";
		case 1231309423:
			return "TheodoreLevin";
		case 65010948:
			return "ThomasDown";
		case 1038525765:
			return "Tilly";
		case -969464097:
			return "Uncle";
		case 1057570823:
			return "G_M_M_UniCriminals_01";
		case 347599949:
			return "G_M_M_UNIDUSTER_01";
		case -1884146832:
			return "CS_VALSHERIFF";
		case 826385717:
			return "S_M_M_MARSHALLSRURAL_01";
		case -831368594:
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case -522739022:
			return "Sean";
		case -122790003:
			return "Lenny";
		case 1276534479:
			return "Hercule";
		case -781994133:
			return "CreoleCaptain";
		case -628794682:
			return "U_M_M_CREOLECAPTAIN_01";
		case 1999476738:
			return "RingMaster";
		case -1221341425:
			return "U_M_M_VALBARTENDER_01";
		case -439429058:
			return "A_M_M_EMRFARMHAND_01";
		case -1646366239:
			return "A_M_M_GriSurvivalist_01";
		case 1439158431:
			return "LillyMillet";
		case -1384606398:
			return "A_F_M_STRTOWNFOLK_01";
		case 1127589605:
			return "A_M_M_STRTOWNFOLK_01";
		case 413771941:
			return "S_M_M_STRLUMBERJACK_01";
		case -1990962020:
			return "G_M_M_UniCriminals_02";
		case -1818007055:
			return "G_M_M_UNICORNWALLGOONS_01";
		case 79156795:
			return "A_M_M_NBXUPPERCLASS_01";
		case -1039531072:
			return "A_F_M_NBXUPPERCLASS_01";
		case 525529657:
			return "A_M_M_VALFARMER_01";
		case -2087759666:
			return "A_M_M_VALTOWNFOLK_01";
		case -1789856687:
			return "A_M_M_VALTOWNFOLK_02";
		case -161027961:
			return "A_F_M_VALTOWNFOLK_01";
		case 518339740:
			return "U_M_M_NBXBARTENDER_01";
		case 2041494024:
			return "NBXExecuted";
		case -944019243:
			return "RHODEPUTY_01";
		case -949242502:
			return "RHDSHERIFF_01";
		case -1745321414:
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case 273671859:
			return "U_M_M_StrGenStoreOwner_01";
		case -1161832176:
			return "TomDickens";
		case -1632694866:
			return "DavidGeddes";
		case 1446935015:
			return "ANSEL_ATHERTON";
		case -1101883765:
			return "CS_Wrobel";
		case -50684386:
			return "COW";
		case 195700131:
			return "BULL";
		case 686051865:
			return "ALBERTCAKEESQUIRE";
		case 1767420034:
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case -1033903759:
			return "A_C_DOGCATAHOULACUR_01";
		case 1591685812:
			return "A_C_DOGRUFUS_01";
		case -896926592:
			return "A_C_DOGLION_01";
		case -695175124:
			return "Handler";
		case 1891548111:
			return "VALAUCTIONBOSS_01";
		case -1049237750:
			return "NbxReceptionist_01";
		case -1206299098:
			return "U_M_M_BiVForeman_01";
		case -532378284:
			return "U_M_M_RACFOREMAN_01";
		case -2075028835:
			return "CHAINPRISONER_01";
		case -211291960:
			return "CHAINPRISONER_02";
		case -692960126:
			return "U_M_M_ValPokerPlayer_01";
		case 60202542:
			return "U_M_M_ValPokerPlayer_02";
		case -1614719852:
			return "DUNCANGEDDES";
		case -167880668:
			return "ANGUSGEDDES";
		case 743219360:
			return "EvelynMiller";
		case -2086875988:
			return "SISTERCALDERON";
		case -46607261:
			return "EDGARROSS";
		case 54030454:
			return "U_M_M_GriSurvivalist_01";
		case -378814141:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case -140869950:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case 1726657594:
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case 1057932105:
			return "StationWorker";
		case 1294255258:
			return "LEVISIMON";
		case -384354290:
			return "S_M_M_GULFUSSARS_01";
		case 1772321403:
			return "A_C_DONKEY_01";
		case 223197487:
			return "S_M_M_ISPWORKER_01";
		case 355963118:
			return "S_M_M_ISPWORKER_02";
		case -1874017143:
			return "U_M_O_ValBartender_01";
		case 219322615:
			return "U_M_M_NBXBARTENDER_02";
		case -2014377075:
			return "CS_UNIDUSTERJAIL_01";
		case 977834008:
			return "A_M_M_RHDTOWNFOLK_01";
		case 2052768310:
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case -1332334928:
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case 482703333:
			return "BrotherDorkins";
		case 731029607:
			return "G_M_M_UniBraithwaites_01";
		case -1918128574:
			return "A_M_M_GAMHIGHSOCIETY_01";
		case 292812873:
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case -1772051411:
			return "EagleFlies";
		case -2046943672:
			return "CS_RAINSFALL";
		case 830712509:
			return "A_M_M_WapWarriors_01";
		case 264503396:
			return "A_M_Y_NBXSTREETKIDS_01";
		case -2044758506:
			return "U_M_M_BHT_SHACKESCAPE";
		case -1445135526:
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case 988668512:
			return "LemiuxAssistant";
		case -1608851079:
			return "p_keys01x";
		case 624882545:
			return "CS_BALLOONOPERATOR";
		case -1820002752:
			return "Worker1";
		case 1624257462:
			return "U_M_M_BHT_MINEFOREMAN";
		case 1453686794:
			return "A_M_M_NbxSlums_01";
		case -454661055:
			return "U_M_M_NBXPRIEST_01";
		case -1124266369:
			return "A_C_BEAR_01";
		case 960530301:
			return "MARSHALL_THURWELL";
		case 1347320453:
			return "CS_FAMOUSGUNSLINGER_02";
		case -290265603:
			return "cs_sd_streetkid_01";
		case 1861707396:
			return "cs_sd_streetkid_02";
		case 68512371:
			return "ObediahHinton";
		case 774211111:
			return "PoisonWellShaman";
		case 1923327795:
			return "A_M_M_EMRFARMHAND_01";
		case 722156226:
			return "u_m_m_bht_benedictallbright";
		case -1258801034:
			return "Jules";
		case -1466017978:
			return "MRDEVON";
		case 1101050871:
			return "MRWAYNE";
		case -1135378761:
			return "PAYTAH";
		case 1812458547:
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case -310853585:
			return "A_M_M_NBXDOCKWORKERS_01";
		case -1817144219:
			return "U_M_M_VALSHERIFF_01";
		case -363708904:
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_504(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_505(int iParam0)
{
	if (is_entity_a_ped(iParam0))
	{
		iVar0 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_a_player(iVar0))
		{
			return network_get_player_index_from_ped(iVar0);
		}
	}
	return 255;
}

void func_506(int iParam0, int iParam1)
{
	iVar5 = _get_metaped_type(iParam0);
	iVar6 = 2026485318;
	if (iVar5 == 1)
	{
		iVar6 = 24043185;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1794.f_1[iVar0] = { vVar2 };
		iVar0++;
	}
	if (!func_582(&(Global_1952637->f_1794), &uVar1, iParam1, -1, 0, 0, iVar6, 0, 8))
	{
		return;
	}
	func_583(iParam0, &(Global_1952637->f_1794));
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&Global_1952637->f_1794.f_1[iVar0] == &Global_1952637->f_83[iVar0] || &Global_1952637->f_1794.f_1[iVar0] == 0)
		{
		}
		else
		{
			func_584(&(Global_1952637->f_1794.f_1[iVar0]), iVar5);
		}
		iVar0++;
	}
}

int func_507(int iParam0, int iParam1)
{
	iVar1 = _get_metaped_type(iParam0);
	iVar2 = 2026485318;
	if (iVar1 == 1)
	{
		iVar2 = 24043185;
	}
	iVar3 = 0;
	while (iVar3 < 39)
	{
		*Global_1952637->f_2032.f_1[iVar3] = { vVar4 };
		iVar3++;
	}
	if (!func_582(&(Global_1952637->f_2032), &uVar0, iParam1, -1, 0, 0, iVar2, 0, 8))
	{
		return 0;
	}
	func_583(iParam0, &(Global_1952637->f_2032));
	iVar3 = 0;
	while (iVar3 < 39)
	{
		if (!func_585(iVar3, 8))
		{
		}
		else
		{
			func_586(iParam0, iVar3, 1);
		}
		iVar3++;
	}
	func_566(&(Global_1952637->f_2032), iParam0, 1, 8, 1, 0, 1, 0);
	return 1;
}

bool func_508()
{
	if (Global_1952637->f_2977 <= 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2977)
	{
		if (!_0xb0b2c6d170b0e8e5(Global_1952637->f_2977.f_1[iVar0]->f_1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_509(int iParam0)
{
	if (!func_587(32))
	{
		func_588(&(Global_1952637->f_2365));
		func_589(32);
	}
	if (iParam0->f_1 == 0)
	{
		if (!func_590(*iParam0))
		{
			if (func_587(32))
			{
				func_591(get_player_ped(player_id()), 1);
			}
			return 0;
		}
		func_592(&(Global_1952637->f_2365));
		if (!func_593(&(Global_1952637->f_1556), *iParam0, &uVar0, 0, 1, 0, 0, 0, 0, 8))
		{
			if (func_587(32))
			{
				func_591(get_player_ped(player_id()), 1);
			}
			return 0;
		}
		func_594(&(Global_1952637->f_1556));
	}
	func_564(33, Global_1139381->f_4779.f_4, 0, 0, 0);
	Global_1139381->f_4779.f_4 = *iParam0;
	Global_1139381->f_4779 = iParam0->f_1;
	func_564(30, 0, 0, 0, 0);
	func_564(27, 0, 0, 0, 0);
	func_564(32, Global_1139381->f_4779.f_4, 0, 0, 0);
	return 1;
}

int func_510(int* iParam0, char* sParam1)
{
	if (_0x375f5870a7b8bec1(sParam1))
	{
		return 2;
	}
	if (!_does_anim_scene_exist(iParam0->f_1483.f_208))
	{
		return 0;
	}
	if (!_is_anim_scene_metadata_loaded(iParam0->f_1483.f_208, false))
	{
		return 0;
	}
	if (!_0x6f1f0b17109309da(iParam0->f_1483.f_208, sParam1))
	{
		return 2;
	}
	return 1;
}

bool func_511(int* iParam0, int iParam1, bool bParam2, int iParam3, var uParam4)
{
	iVar0 = get_entity_type(iParam1);
	switch (iVar0)
	{
		case 1:
			iVar2 = get_ped_index_from_entity_index(iParam1);
			if (is_ped_a_player(iVar2))
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (bParam2)
					{
						iVar3 = iParam0->f_14[iVar1]->f_1.f_2;
					}
					else
					{
						iVar3 = iParam0->f_14[iVar1]->f_1.f_1;
					}
					if (iParam1 != iVar3)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 966820754;
						return true;
					}
					iVar1++;
				}
			}
			else if (_0x9a100f1cf4546629(iVar2))
			{
				iVar1 = 0;
				while (iVar1 < 20)
				{
					if (bParam2)
					{
						iVar4 = iParam0->f_500[iVar1]->f_2;
					}
					else
					{
						iVar4 = iParam0->f_500[iVar1]->f_1;
					}
					if (iParam1 != iVar4)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = -1821507459;
						return true;
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 20)
				{
					if (bParam2)
					{
						iVar5 = iParam0->f_99[iVar1]->f_2;
					}
					else
					{
						iVar5 = iParam0->f_99[iVar1]->f_1;
					}
					if (iParam1 != iVar5)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 1627542854;
						return true;
					}
					iVar1++;
				}
			}
			break;
		case 2:
			iVar6 = get_entity_model(iParam1);
			if (is_this_model_a_train(iVar6))
			{
				iVar1 = 0;
				while (iVar1 < 1)
				{
					if (bParam2)
					{
						iVar7 = iParam0->f_1089[iVar1]->f_2;
					}
					else
					{
						iVar7 = iParam0->f_1089[iVar1]->f_1;
					}
					if (iParam1 != iVar7)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 465509728;
						return true;
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 10)
				{
					if (bParam2)
					{
						iVar8 = iParam0->f_761[iVar1]->f_2;
					}
					else
					{
						iVar8 = iParam0->f_761[iVar1]->f_1;
					}
					if (iParam1 != iVar8)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 1135537454;
						return true;
					}
					iVar1++;
				}
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (bParam2)
		{
			iVar9 = iParam0->f_1104[iVar1]->f_2;
		}
		else
		{
			iVar9 = iParam0->f_1104[iVar1]->f_1;
		}
		if (iParam1 != iVar9)
		{
		}
		else
		{
			*iParam3 = iVar1;
			*uParam4 = 0;
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_512(int iParam0, int* iParam1, int iParam2, int iParam3)
{
	if (iParam1->f_1465 == -1)
	{
		return -1;
	}
	if (iParam1->f_1465 >= 24)
	{
		iParam1->f_1465 = -1;
	}
	iVar0 = iParam1->f_1465;
	iParam1->f_1465++;
	iVar1 = get_entity_type(iParam0);
	iParam1->f_1104[iVar0]->f_1 = iParam0;
	iParam1->f_1104[iVar0]->f_13 = iParam2;
	iParam1->f_1104[iVar0]->f_14 = iParam3;
	return iVar0;
}

Vector3 func_513(int iParam0)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	get_model_dimensions(get_entity_model(iParam0), &vVar3, &vVar6);
	fVar9 = absf(((vVar6.z - vVar3.z) * 0.5f));
	vVar0.f_2 = (vVar0.z - fVar9);
	return vVar0;
}

void func_514(int iParam0, int iParam1)
{
	func_595(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= (29 - 1))
	{
		iVar2 = ((29 - 1) - iVar1);
		if (get_current_ped_weapon(iParam0, &iVar0, false, iVar2, false))
		{
			if (iVar0 != -1569615261)
			{
				if (iVar2 == 1)
				{
					set_ped_combat_attributes(iParam1, 116, true);
				}
				set_current_ped_weapon(iParam1, iVar0, true, iVar2, false, false);
			}
		}
		iVar1++;
	}
}

bool func_515(int iParam0, int iParam1, int* iParam2)
{
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return false;
	}
	if (_0xa0bc8faed8cfeb3c(iParam1))
	{
		if (!func_86(*iParam2, 5))
		{
			_set_ped_component_disabled(iParam1, -1229581779, 1);
			bVar0 = true;
			func_26(iParam2, 5);
		}
		if (bVar0)
		{
			_update_ped_variation(iParam1, false, true, true, true, false);
			return false;
		}
		return true;
	}
	return false;
}

bool func_516(int iParam0)
{
	return ((is_ped_in_any_vehicle(iParam0, false) || is_ped_on_mount(iParam0)) || (!is_ped_ragdoll(iParam0) && is_ped_on_vehicle(iParam0, false)));
}

bool func_517(int* iParam0, int iParam1, int iParam2, var uParam3)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam2)
	{
		case 966820754:
			if (iParam1 >= 4)
			{
				return false;
			}
			*uParam3 = { iParam0->f_14[iParam1]->f_1 };
			return true;
		case 1627542854:
			if (iParam1 >= 20)
			{
				return false;
			}
			*uParam3 = { *iParam0->f_99[iParam1] };
			return true;
		case -1821507459:
			if (iParam1 >= 20)
			{
				return false;
			}
			*uParam3 = { *iParam0->f_500[iParam1] };
			return true;
		case 465509728:
			if (iParam1 >= 1)
			{
				return false;
			}
			*uParam3 = { *iParam0->f_1089[iParam1] };
			return true;
		case 1135537454:
			if (iParam1 >= 10)
			{
				return false;
			}
			*uParam3 = { *iParam0->f_761[iParam1] };
			return true;
		case 422112462:
			if (iParam1 >= 10)
			{
				return false;
			}
			*uParam3 = { *iParam0->f_892[iParam1] };
			return true;
		case -230450704:
			if (iParam1 >= 5)
			{
				return false;
			}
			*uParam3 = { *iParam0->f_1023[iParam1] };
			return true;
		case 0:
			if (iParam1 >= 24)
			{
				return false;
			}
			*uParam3 = { *iParam0->f_1104[iParam1] };
			return true;
		default:
			break;
	}
	return false;
}

bool func_518(int* iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam2)
	{
		case 0:
			if (iParam1 >= 24)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_1104[iParam1]->f_2;
			}
			else
			{
				*iParam4 = iParam0->f_1104[iParam1]->f_1;
			}
			break;
		case 966820754:
			if (iParam1 >= 4)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_14[iParam1]->f_1.f_2;
			}
			else
			{
				*iParam4 = iParam0->f_14[iParam1]->f_1.f_1;
			}
			break;
		case 1627542854:
			if (iParam1 >= 20)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_99[iParam1]->f_2;
			}
			else
			{
				*iParam4 = iParam0->f_99[iParam1]->f_1;
			}
			break;
		case -1821507459:
			if (iParam1 >= 20)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_500[iParam1]->f_2;
			}
			else
			{
				*iParam4 = iParam0->f_500[iParam1]->f_1;
			}
			break;
		case 1135537454:
			if (iParam1 >= 10)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_761[iParam1]->f_2;
			}
			else
			{
				*iParam4 = iParam0->f_761[iParam1]->f_1;
			}
			break;
		case 422112462:
			if (iParam1 >= 10)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_892[iParam1]->f_2;
			}
			else
			{
				*iParam4 = iParam0->f_892[iParam1]->f_1;
			}
			break;
		case -230450704:
			if (iParam1 >= 5)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_1023[iParam1]->f_2;
			}
			else
			{
				*iParam4 = iParam0->f_1023[iParam1]->f_1;
			}
			break;
		case 465509728:
			if (iParam1 >= 1)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_1089[iParam1]->f_2;
			}
			else
			{
				*iParam4 = iParam0->f_1089[iParam1]->f_1;
			}
			break;
	}
	return does_entity_exist(*iParam4);
}

int func_519(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

struct<4> func_520()
{
	return Var0;
}

bool func_521(int iParam0, var uParam1)
{
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return false;
	}
	if (_0xa0bc8faed8cfeb3c(iParam0))
	{
		_set_ped_component_disabled(iParam0, -1903910230, 0);
		_update_ped_variation(iParam0, false, true, true, true, false);
		if (_is_metaped_using_component(iParam0, 300733975))
		{
			_set_ped_component_disabled(iParam0, 300733975, 1);
			bVar0 = true;
		}
		if (_is_metaped_using_component(iParam0, 2112357414))
		{
			_set_ped_component_disabled(iParam0, 2112357414, 1);
			bVar0 = true;
		}
		if (func_86(uParam1->f_6, 2))
		{
			if (_is_metaped_using_component(iParam0, 1963323202))
			{
				_set_ped_component_disabled(iParam0, 1963323202, 1);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			_update_ped_variation(iParam0, false, true, true, true, false);
			return false;
		}
		return true;
	}
	return false;
}

void func_522(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		_set_entity_health(iParam0, iParam1, 0);
	}
}

int func_523(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = get_entity_model(uParam0->f_1);
	if (!is_this_model_a_train(iVar0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	iVar1 = get_vehicle_index_from_entity_index(uParam0->f_1);
	vVar2 = { get_entity_coords(iVar1, true, false) };
	if (!does_entity_exist(uParam0->f_2))
	{
		bVar5 = _0x3c9628a811cbd724(iVar1);
		iVar6 = _create_mission_train(iParam1, vVar2, bVar5, false, false, false);
		if (!does_entity_exist(iVar6))
		{
			return 1;
		}
		set_entity_invincible(iVar6, true);
		func_425(iVar6, 1);
		uParam0->f_2 = iVar6;
	}
	if (does_entity_exist(uParam0->f_2))
	{
		iVar7 = get_vehicle_index_from_entity_index(uParam0->f_2);
		iVar8 = _0x635423d55ca84fc8(iParam1);
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			iVar10 = get_train_carriage(iVar7, iVar9);
			if (!does_entity_exist(iVar10))
			{
			}
			else if (!is_entity_visible(iVar10))
			{
			}
			else
			{
				set_entity_invincible(iVar10, true);
				func_425(iVar10, 1);
			}
			iVar9++;
		}
		if (_0xbd3c4a2ed509205e(iVar7))
		{
			return 1;
		}
	}
	return 0;
}

int func_524(var uParam0, int iParam1)
{
	Var0.f_5 = -1082130432;
	if (!does_entity_exist(uParam0->f_1))
	{
		return 1;
	}
	iVar13 = get_vehicle_index_from_entity_index(uParam0->f_1);
	vVar14 = { get_entity_coords(iVar13, true, false) };
	vVar14.f_1 = (vVar14.y + 100f);
	fVar17 = get_entity_heading(iVar13);
	if (_is_draft_vehicle(iVar13) && !_0xa19447d83294e29f(iVar13, &iVar18, &iVar19))
	{
		return 0;
	}
	if (!does_entity_exist(uParam0->f_2))
	{
		iVar20 = get_entity_model(iVar13);
		iVar21 = create_vehicle(iVar20, vVar14, fVar17, false, false, false, false);
		if (!does_entity_exist(iVar21))
		{
			return 1;
		}
		set_entity_coords(iVar21, vVar14, true, false, true, true);
		set_entity_heading(iVar21, fVar17);
		set_entity_invincible(iVar21, true);
		_0x8268b098f6fca4e2(iVar21, _0xa44d65e6c624526f(iVar13));
		copy_vehicle_damages(iVar13, iVar21);
		func_204(iParam1, *uParam0, 1135537454, &uVar22, &uVar23, &iVar24);
		if (iVar24 != 0)
		{
			_0xd80faf919a2e56ea(iVar21, iVar24);
		}
		func_425(iVar21, 1);
		uParam0->f_2 = iVar21;
	}
	if (!_is_draft_vehicle(iVar13))
	{
		return 1;
	}
	else if (!func_86(uParam0->f_4, 2))
	{
		iVar25 = get_vehicle_index_from_entity_index(uParam0->f_2);
		bVar26 = true;
		if (!_0xa19447d83294e29f(iVar25, &iVar18, &iVar19))
		{
			bVar26 = false;
		}
		else if (iVar19 < iVar18)
		{
			bVar26 = false;
		}
		iVar27 = 0;
		while (iVar27 < 6)
		{
			iVar28 = _get_ped_in_draft_seat(iVar25, iVar27);
			if (!does_entity_exist(iVar28))
			{
			}
			else
			{
				if (is_entity_visible(iVar28))
				{
					func_425(iVar28, 1);
					set_entity_invincible(iVar28, true);
				}
				iVar29 = _get_ped_in_draft_seat(iVar13, iVar27);
				if (!does_entity_exist(iVar29) || is_ped_injured(iVar29))
				{
				}
				else if (!_0xa0bc8faed8cfeb3c(iVar29))
				{
					bVar26 = false;
				}
				else if (!_0xa0bc8faed8cfeb3c(iVar28))
				{
					bVar26 = false;
				}
				else
				{
					iVar30 = (18 + iVar27);
					if (!is_bit_set(uParam0->f_4, iVar30))
					{
						clone_ped_to_target(iVar29, iVar28);
						set_bit(&(uParam0->f_4), iVar30);
					}
					if (!func_521(iVar28, &Var0))
					{
						bVar26 = false;
					}
				}
			}
			iVar27++;
		}
		if (bVar26)
		{
			iVar27 = 0;
			while (iVar27 < 6)
			{
				iVar31 = _get_ped_in_draft_seat(iVar25, iVar27);
				if (!does_entity_exist(iVar31))
				{
				}
				else
				{
					iVar32 = _get_ped_in_draft_seat(iVar13, iVar27);
					if (!does_entity_exist(iVar32) || is_ped_injured(iVar32))
					{
						func_596(&iVar31);
					}
				}
				iVar27++;
			}
			func_26(&(uParam0->f_4), 2);
			return 1;
		}
	}
	return 0;
}

int func_525(var uParam0)
{
	if (!does_entity_exist(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = get_object_index_from_entity_index(uParam0->f_1);
	vVar1 = { get_entity_coords(iVar0, true, false) };
	vVar1.f_1 = (vVar1.y + 100f);
	fVar4 = get_entity_heading(iVar0);
	if (!does_entity_exist(uParam0->f_2))
	{
		iVar5 = get_entity_model(uParam0->f_1);
		iVar6 = create_object(iVar5, vVar1, false, false, true, false, false);
		if (!does_entity_exist(iVar6))
		{
			return 1;
		}
		set_entity_coords(iVar6, vVar1, true, false, true, true);
		set_entity_heading(iVar6, fVar4);
		set_entity_invincible(iVar6, true);
		func_425(iVar6, 1);
		uParam0->f_2 = iVar6;
	}
	return 1;
}

void func_526(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	bVar4 = is_entity_a_ped(iParam0);
	if (bVar4)
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		bVar3 = _get_ped_crouch_movement(iVar1);
		if (is_ped_ragdoll(iVar1))
		{
			_0x221f4d9912b7fe86(iVar1, 1);
		}
	}
	if (iParam0 == func_581(Global_34) && is_player_teleport_active())
	{
	}
	if (func_342(iParam0))
	{
		if (func_597(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_598(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_526(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_526(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_598(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_598(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_598(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_598(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_598(iParam5, 129))
	{
		if (func_598(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		_set_entity_coords_and_heading_no_offset(iParam0, vParam1, fParam4, func_598(iParam5, 32), true);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_598(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_598(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_342(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_598(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_34 && !func_598(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_527()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

char* func_528(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_599(iVar0);
}

char* func_529(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case 1468884243:
			return "CANOE";
		case -283162583:
			return "WAGON02X";
		case 1874711736:
			return "WAGON04X";
		case -1758092337:
			return "WAGON05X";
		case 1596452133:
			return "CHUCKWAGON000X";
		case -293448458:
			return "WAGONCIRCUS02X";
		case 1761016051:
			return "COACH2";
		case 1192745176:
			return "PRIVATECOALCAR01X";
		case 703203753:
			return "NORTHPASSENGER01X";
		case 89913743:
			return "PRIVATESTEAMER01X";
		case 572854005:
			return "PRIVATEDINING01X";
		case 822759307:
			return "UTILLIWAG";
		case -623113369:
			return "SKIFF";
		case 1493442814:
			return "HANDCART";
		case -397513868:
			return "ROWBOATSWAMP";
		case -258491284:
			return "ROWBOATSWAMP02";
	}
	return "";
}

bool func_530(int iParam0)
{
	return iParam0 != 0;
}

bool func_531(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

int func_532(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_531(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_600(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_533(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_493(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1951255)[iVar0]->f_3, iParam1);
}

float func_534(int iParam0, bool bParam1)
{
	if (bParam1 && !func_493(iParam0))
	{
		return 0f;
	}
	iVar0 = func_575(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1951255)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
}

bool func_535(int iParam0, bool bParam1)
{
	if (bParam1 && !func_493(iParam0))
	{
		return false;
	}
	iVar0 = func_575(iParam0);
	if (_uiprompt_has_hold_auto_fill_mode((*Global_1951255)[iVar0]->f_3))
	{
		if ((*Global_1951255)[iVar0]->f_20)
		{
			iVar1 = get_game_timer();
		}
		else
		{
			iVar1 = _get_system_time();
		}
		uVar2 = _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
		if (!_uiprompt_is_active((*Global_1951255)[iVar0]->f_3))
		{
			iVar3 = (iVar1 - (*Global_1951255)[iVar0]->f_21);
			iVar4 = floor((IntToFloat((*Global_1951255)[iVar0]->f_18) * (1f - (*Global_1951255)[iVar0]->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			(*Global_1951255)[iVar0]->f_21 = iVar1;
			(*Global_1951255)[iVar0]->f_22 = uVar2;
		}
	}
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1951255)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1951255)[iVar0]->f_3);
}

bool func_536(var uParam0)
{
	Var0 = { func_264(uParam0) };
	Var8 = { func_323(uParam0) };
	return are_strings_equal(&Var0, &Var8);
}

bool func_537(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1939493)[iVar0]->f_10)))
		{
			func_601(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_538(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	Var0 = { func_264(uParam0) };
	if ((!are_strings_equal(&Var0, sParam1) && _0xa9016536015de29d(uParam0->f_208, sParam1)) && _0x23e33cb9f4a3f547(uParam0->f_208, sParam1))
	{
		_0xae6ada8fe7e84acc(uParam0->f_208, sParam1);
	}
}

void func_539(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_540(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

bool func_541(int iParam0)
{
	if (-1829635046 == func_602(81053684))
	{
		if (func_603(iParam0))
		{
			return true;
		}
	}
	else if (func_604(-525676072, iParam0) || func_606(func_605(1742327865), -1303648999))
	{
		if (func_603(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_542(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_543(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_607(iParam0, iParam1, bParam2, bParam3);
}

void func_544(int iParam0)
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
	iVar1 = func_608(2);
	func_609(to_float((iParam0 * iVar1)), 0);
}

void func_545(int iParam0)
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
	iVar1 = func_610(2);
	func_611(to_float((iParam0 * iVar1)), 0);
}

void func_546(bool bParam0)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_34, &iVar3, false, iVar4, true))
		{
			if (func_561(iVar3) && _0x705be297eebdb95d(iVar3))
			{
				if (bParam0)
				{
					if (get_ammo_in_ped_weapon(Global_34, iVar3) < _get_weapon_clip_size(iVar3) * 4)
					{
						_add_ammo_to_ped_by_type(Global_34, _get_ammo_type_for_weapon(iVar3), (_get_weapon_clip_size(iVar3) * 4 - get_ped_ammo_by_type(Global_34, get_ped_ammo_type_from_weapon(Global_34, iVar3))), 752097756);
					}
				}
				iVar0 = get_ammo_in_ped_weapon(Global_34, iVar3);
				if (iVar0 > _get_weapon_clip_size(iVar3))
				{
					iVar1 = _get_weapon_clip_size(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					set_ammo_in_clip(Global_34, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
}

void func_547()
{
	iVar0 = func_560(Global_34, 9, 1, 0);
	if (func_561(iVar0))
	{
		return;
	}
	iVar0 = func_560(Global_34, 7, 1, 0);
	if (func_561(iVar0))
	{
		set_current_ped_weapon(Global_34, iVar0, true, 8, false, false);
	}
	iVar0 = func_560(Global_34, 0, 1, 0);
	if (func_561(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_34, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_560(Global_34, 1, 1, 0);
	if (func_561(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_34, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_560(Global_34, 18, 1, 0);
	if (func_561(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_34, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_612();
	if (func_561(iVar0))
	{
		if (has_ped_got_weapon(Global_34, iVar0, 0, true))
		{
			func_613(Global_34, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_34, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_614(3072, 0);
	if (func_561(iVar0))
	{
		if (!has_ped_got_weapon(Global_34, iVar0, 0, true))
		{
			func_613(Global_34, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_34, iVar0, true, 9, false, false);
		}
	}
}

int func_548()
{
	return Global_1903136->f_379;
}

int func_549(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_409(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	request_collision_at_coord(vVar4);
	while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			request_collision_at_coord(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		request_collision_at_coord(vVar4);
		while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				request_collision_at_coord(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_550(int iParam0)
{
	Global_39.f_281.f_3222.f_1 = iParam0;
}

void func_551(int iParam0)
{
	Global_39.f_281.f_3222 = iParam0;
}

void func_552(vector3 vParam0)
{
	Global_39.f_281.f_3222.f_19 = { vParam0 };
}

var func_553()
{
	return &Global_1902818;
}

void func_554(var uParam0)
{
	Global_39.f_281.f_3222.f_2 = uParam0;
}

bool func_555()
{
	return (func_615() || func_616());
}

void func_556(bool bParam0)
{
	if (bParam0)
	{
		Global_1940085->f_9 = 0f;
	}
	Global_1940085->f_8 = 0f;
	Global_1940085->f_15.f_1 = 0f;
	Global_1940085->f_15 = 0f;
	Global_1940085->f_15.f_9 = 0f;
	Global_1940085->f_15.f_8 = 0f;
	Global_1940085->f_15.f_10 = 0;
	if (does_entity_exist(Global_34))
	{
		_0x06d26a96ca1bca75(Global_34, 10, 0f, 0);
		set_ped_is_drunk(Global_34, false);
		_0x406ccf555b04fad3(Global_34, 0, 0f);
	}
	func_617(0f);
	if (does_entity_exist(Global_34))
	{
		set_ped_config_flag(Global_34, 26, false);
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_618();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_557(var uParam0)
{
	return uParam0->f_268;
}

float func_558(var uParam0)
{
	return uParam0->f_271;
}

float func_559(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_560(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_561(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_562(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (does_entity_exist(&(uParam0->f_17[iVar0])) && &uParam0->f_17[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_563(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_619(iParam1, 1, 0) };
		iParam3 = func_620(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_622(iParam1, iParam2, func_621(iParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_623(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_624(iParam1, 0))
		{
			func_625(&(Global_1952637->f_1675.f_1[func_621(iParam3, 1)]), 0, 0);
		}
		else
		{
			func_625(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1952637->f_83[func_621(iParam3, 1)])
			{
				func_564(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_587(32768))
			{
				func_626();
				func_564(21, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_627(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_628(&iVar5, 4);
	}
	if (is_ped_a_player(iParam0))
	{
		func_564(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_564(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_564(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_589(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_629(Var0);
}

bool func_565(bool bParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_630(iVar0, 1);
		if (func_631(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_632(iVar0) == -1)
			{
				func_633(iVar0, 0);
				func_634(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 2, 6);
			}
			func_635(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

void func_566(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	Global_1952637->f_925 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (bParam7)
		{
			func_636(iParam1, &(Global_1952637->f_4), Global_1952637->f_3481, Global_1956200->f_1431.f_106);
		}
	}
	else
	{
		bParam6 = false;
	}
	if ((func_587(32768) && func_631(1108822547, 8)) && func_585(10, iParam3))
	{
		func_637(iParam1, 0, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < Global_1952637->f_592)
	{
		iVar2 = &Global_1952637->f_552[iVar1];
		iVar0 = func_621(iVar2, 1);
		if (func_631(iVar2, 8))
		{
		}
		else if (Global_1952637->f_83[iVar0]->f_1 <= 0 || &Global_1952637->f_83[iVar0]->f_3[0] == -1802376732)
		{
		}
		else if (&uParam0->f_1[iVar0] == 0)
		{
		}
		else if (!func_585(iVar0, iParam3))
		{
		}
		else if ((func_631(iVar2, 6) || &uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0]) || uParam0->f_1[iVar0]->f_1 == 289238755)
		{
			if (!func_631(iVar2, 1) || bParam2)
			{
				Global_1952637->f_925++;
				if (!bParam6)
				{
					func_586(iParam1, iVar0, 1);
				}
				if (uParam0->f_1[iVar0]->f_1 == 289238755)
				{
					Global_1952637->f_2764[iVar0]->f_1 = 289238755;
				}
				func_635(iVar2, 1, 6);
			}
		}
		else
		{
			if (!bParam6)
			{
				if ((!bParam2 && &uParam0->f_1[iVar0] == &Global_1952637->f_2764[iVar0]) && uParam0->f_1[iVar0]->f_1 == Global_1952637->f_2764[iVar0]->f_1)
				{
				}
				else
				{
					func_586(iParam1, iVar0, 1);
					Global_1952637->f_2764[iVar0] = &uParam0->f_1[iVar0];
					Global_1952637->f_2764[iVar0]->f_1 = uParam0->f_1[iVar0]->f_1;
					if (func_631(iVar2, 1))
					{
						func_638(iVar2, 1, 6);
					}
					Global_1952637->f_925++;
					func_639(uParam0->f_1[iVar0], iParam1);
				}
				iVar1++;
				if (Global_1952637->f_925 <= 0)
				{
					return;
				}
				if (bParam4)
				{
					_0xaab86462966168ce(iParam1, 1);
					_update_ped_variation(iParam1, false, true, true, true, bParam5);
				}
			}
		}
	}
}

void func_567(var uParam0)
{
	uParam0->f_217 = { Var0 };
}

void func_568(var uParam0)
{
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	func_640(&(uParam0->f_263), 4194304);
}

void func_569(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_225[iVar0], "", 64);
		iVar0++;
	}
}

void func_570()
{
	Global_1913504 = 1;
}

void func_571(bool bParam0)
{
	Global_1940144->f_19 = !bParam0;
}

bool func_572(int iParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		Global_1952637->f_2843.f_2 = 0;
		Global_1952637->f_2843.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*Global_1952637->f_2843.f_43[iVar0] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1952637->f_2843.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = func_484(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 - (Global_1952637->f_2843.f_2 && Global_1952637->f_2843.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_641(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1))
		{
			func_642(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1952637->f_2843.f_1 = (Global_1952637->f_2843.f_1 - 1);
	*Global_1952637->f_2843.f_43[iVar0] = { *Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] };
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = 0;
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = 0;
	return true;
}

int func_573(int iParam0)
{
	Var1 = -961687407;
	if (func_30() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0xed4413cee1bf142c(&Var1))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return func_643(iVar0);
}

bool func_574(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_630(iVar0, 1);
		if (!func_631(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_633(iVar0, 0);
				func_634(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 1, 6);
			}
			func_638(iVar2, 3, 6);
			Global_1952637->f_2764[iVar0] = 0;
			Global_1952637->f_2764[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_575(int iParam0)
{
	return iParam0;
}

void func_576(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_577(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_531(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_578(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_579(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

void func_580(int iParam0)
{
	if (!func_644(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1951255)[iParam0]->f_3);
	}
	(*Global_1951255)[iParam0]->f_4 = 0;
	(*Global_1951255)[iParam0] = 1;
	(*Global_1951255)[iParam0]->f_16 = 0;
	(*Global_1951255)[iParam0]->f_1 = 0;
	(*Global_1951255)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_9 = 0f;
	(*Global_1951255)[iParam0]->f_10 = 0;
	(*Global_1951255)[iParam0]->f_11 = 0;
	(*Global_1951255)[iParam0]->f_2 = 1;
	(*Global_1951255)[iParam0]->f_15 = -1f;
}

int func_581(int iParam0)
{
	return iParam0;
}

bool func_582(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, int iParam8)
{
	if (iParam2 == 1378879298)
	{
		if (!func_645(uParam0, iParam2))
		{
			return false;
		}
	}
	else if (!func_646(uParam0, iParam3, iParam2) && !func_593(uParam0, iParam2, uParam1, 0, bParam4, 0, iParam6, bParam7, 0, iParam8))
	{
		return false;
	}
	iVar0 = 10;
	if (func_587(32768) && iParam6 == 0)
	{
		if (!*uParam1 || (*uParam1 && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]))
		{
			func_647(1108822547);
		}
		else
		{
			func_648(1108822547);
		}
	}
	if (bParam5)
	{
		func_649(2);
	}
	return true;
}

void func_583(int iParam0, var uParam1)
{
	iVar4 = _get_num_components_in_ped(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		iVar1 = _get_ped_component_at_index(iParam0, iVar0, true, &uVar3, &uVar2);
		switch (func_482(iVar1))
		{
			case -1961188419:
				uParam1->f_1[0] = iVar1;
				break;
			case 1033860813:
				uParam1->f_1[26] = iVar1;
				break;
			case 1589583617:
				uParam1->f_1[27] = iVar1;
				break;
			case 153430294:
				uParam1->f_1[28] = iVar1;
				break;
			case -130218241:
			case 629735563:
				uParam1->f_1[8] = iVar1;
				break;
			case -709696437:
			case -702721097:
				uParam1->f_1[9] = iVar1;
				break;
			case -1839668642:
			case -1415811768:
				uParam1->f_1[1] = iVar1;
				break;
			case -986397773:
				uParam1->f_1[2] = iVar1;
				break;
			case -1674363638:
				uParam1->f_1[3] = iVar1;
				break;
			case 231148558:
				uParam1->f_1[4] = iVar1;
				break;
			default:
				break;
				break;
		}
		iVar0++;
	}
}

void func_584(var uParam0, int iParam1)
{
	if (Global_1952637->f_2977 >= 156)
	{
		return;
	}
	Global_1952637->f_2977.f_1[Global_1952637->f_2977]->f_1 = _0xf6d9e1f3560cbf8e(iParam1, uParam0, 0, 1, 0);
	Global_1952637->f_2977.f_1[Global_1952637->f_2977] = 1;
	Global_1952637->f_2977++;
}

bool func_585(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

void func_586(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637->f_83[iParam1]->f_1)
		{
			_0xdf631e4bce1b1fc4(iParam0, &(Global_1952637->f_83[iParam1]->f_3[iVar0]), 0, 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637->f_83[iParam1]->f_1)
		{
			_set_ped_component_disabled(iParam0, &(Global_1952637->f_83[iParam1]->f_3[iVar0]), 0);
			iVar0++;
		}
	}
}

bool func_587(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_588(var uParam0)
{
	*uParam0 = Global_1952637->f_1675;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
}

void func_589(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

bool func_590(var uParam0)
{
	Var0 = func_650(0);
	Var0.f_1 = uParam0;
	Var0.f_3 = 0;
	_0x91ded5dd64bb2691(&Var0);
	return _0xed4413cee1bf142c(&Var0);
}

void func_591(int iParam0, bool bParam1)
{
	if (!func_587(32))
	{
		return;
	}
	func_564(33, Global_1139381->f_4779.f_4, 0, 0, 0);
	func_651(32);
	func_626();
	Global_1139381->f_4779.f_4 = 0;
	Global_1139381->f_4779 = 0;
	func_594(&(Global_1952637->f_2365));
	func_592(&(Global_1952637->f_2365));
	func_652(4);
	if (bParam1)
	{
		func_653(iParam0, 1, 1, 0);
	}
	func_564(27, 0, 131074, 0, 0);
	func_564(34, 0, 131072, 0, 0);
}

void func_592(var uParam0)
{
	Global_1952637->f_1556 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

bool func_593(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	iVar11 = 0;
	Var4 = func_650(iParam6);
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
		func_654(uParam0, func_643(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_655(-1);
		}
		if (_0x44b3a36933ac009c(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_643(iVar0);
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
			iVar1 = func_621(iVar3, 1);
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
					func_635(iVar3, 16, 6);
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
							if (func_656(iVar3) && func_657(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_659(uParam0, iVar11, func_658(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_660() == 24043185 && &uParam0->f_1[iVar1] == &Global_1952637->f_83[iVar1]) && func_658(&(uParam0->f_1[34])) == 0) && !func_587(32)) && !func_587(64))
					{
						uParam0->f_1[iVar1] = func_661(-1293064293, 0);
						uParam0->f_1[iVar1]->f_1 = 1155669136;
						func_662(uParam0, &(uParam0->f_1[iVar1]), iVar1, 0, iParam9);
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

void func_594(var uParam0)
{
	Global_1952637->f_1675 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1675.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

void func_595(int iParam0, int iParam1)
{
	iVar0 = _inventory_get_ped_inventory_id(iParam0);
	iVar1 = _inventory_get_ped_inventory_id(iParam1);
	if (!_0x886dfd3e185c8a89(iVar0, &uVar6, 923904168, -740156546, &uVar2))
	{
	}
	_0xc04f47d488ef9eba(iVar0, iVar1, &uVar2, 0);
}

void func_596(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_entity_dead(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
	}
	delete_ped(iParam0);
}

bool func_597(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, -1805387726))
	{
		return true;
	}
	return false;
}

bool func_598(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char* func_599(int iParam0)
{
	switch (iParam0)
	{
		case -1698780291:
			return "P_CS_LEDGER01X";
		case -2049014994:
			return "P_CS_ROPE01X";
		case -1005172683:
			return "P_DOOR01X";
		case 325782917:
			return "P_DOOR03X";
		case 430302479:
			return "p_door12x";
		case -1819321039:
			return "P_DOOR13X";
		case -1899748000:
			return "p_door45x";
		case -1734239985:
			return "p_chairvictorian01x";
		case 1561132816:
			return "p_crate03x";
		case -607235640:
			return "p_cs_jug01x";
		case -243150339:
			return "p_cs_wagon02x";
		case -1497029950:
			return "P_DOOR37X";
		case -1957055091:
			return "p_door_val_genstore";
		case -1676410507:
			return "p_doorstrawberry01x";
		case 913112519:
			return "p_doorfrench01l";
		case -1004594895:
			return "p_doorfrench01r";
		case -546124888:
			return "p_doormansiongate01x";
		case 367033685:
			return "p_doornbd39x";
		case -398894636:
			return "p_doorsaloon02x";
		case -882474373:
			return "P_DOORVH_SALOON_L";
		case 376903871:
			return "P_DOORVH_SALOON_R";
		case -447184114:
			return "p_cigarlit01x";
		case -502353725:
			return "p_pebble01x";
		case 1590781012:
			return "p_cs_rope03x";
		case 98154799:
			return "P_CARDS01X";
		case 1834866537:
			return "P_CS_POKERHAND01X";
		case 1770671818:
			return "P_CS_POKERHAND02X";
		case -827620392:
			return "P_CS_HOLDEMHAND01X";
		case 343238651:
			return "P_CS_HOLDEMHAND02X";
		case -197909103:
			return "P_CS_BUCKET01X";
		case 574905658:
			return "p_cs_syringe01x";
		case -1971689092:
			return "p_bottleJD01x";
		case 1085457901:
			return "p_rag02x";
		case 1826097446:
			return "p_magneto02x";
		case -789465252:
			return "p_magneto01x";
		case -238490359:
			return "p_cs_wantedalive01x";
		case -997503794:
			return "P_CS_RCRIDETHELIGHTNING";
		case -1473388640:
			return "p_pen01x";
		case -1135604739:
			return "p_cs_letter01a_x";
		case 201002005:
			return "p_cs_electricchair01x";
		case -451122991:
			return "p_cs_generator01x";
		case -580353882:
			return "p_cs_electricHelmet01x";
		case -330691926:
			return "p_cs_gag01x";
		case -832187622:
			return "p_door_sha_man01x";
		case -2104766853:
			return "p_stool01x";
		case -1937484496:
			return "p_stool02x";
		case -156777810:
			return "p_jugglingball01x";
		case -1025740342:
			return "p_chair02x";
		case 998759471:
			return "p_chair04x";
		case -182450036:
			return "p_crate15x";
		case 539662086:
			return "p_cleaver01x";
		case 401116463:
			return "p_bottle003x";
		case -940999254:
			return "p_cs_book02x";
		case -1502733730:
			return "p_stickydymt_single";
		case -776888393:
			return "p_cs_fusedynamite01x";
		case -1901975761:
			return "p_dynamite01x";
		case 1170245472:
			return "p_cs_fusespool01x";
		case 1996775400:
			return "p_cs_detonator01x";
		case -2058893965:
			return "p_cs_bedrollclsd01x";
		case -967333571:
			return "P_CIGARETTE_CS01X";
		case -1413776846:
			return "P_MATCHES01X";
		case 617552302:
			return "P_MATCHSTICK01X";
		case -1321878957:
			return "P_WOODENCHAIR01X";
		case 1230724566:
			return "P_CHAIR_CRATE02X";
		case 164271545:
			return "p_knittingneedle01x";
		case -458984299:
			return "p_knittingsquare01x";
		case -1055906010:
			return "p_cs_rabbitMeat01x";
		case 622322952:
			return "p_cs_rabbitMeat02x";
		case -890087611:
			return "p_bottle03x";
		case -1281909308:
			return "p_cs_billstack01x";
		case 1711925122:
			return "p_cs_billSingle01x";
		case 2514129:
			return "p_binoculars01x";
		case -1866470762:
			return "p_doorrhosheriff02x";
		case -2021274799:
			return "P_BARSTOOL01X";
		case -491019543:
			return "p_cs_shotglass01x";
		case 1698150819:
			return "p_lamp18x";
		case -1963197288:
			return "p_clock06x";
		case 1527379014:
			return "p_bottle02x";
		case 876316748:
			return "p_cs_lootSack01x";
		case 1767344357:
			return "p_wineBox01x";
		case 822933632:
			return "p_strongBox01x";
		case 1497470487:
			return "P_CLOCKTABLE02X";
		case -1149199295:
			return "p_gen_statue03b";
		case 1186910594:
			return "P_STOOLWINTER01X";
		case 1954479996:
			return "P_CS_BARRAG01X";
		case 2003418568:
			return "P_PLATE01X";
		case 624070311:
			return "P_KNIFE01X";
		case 1547859810:
			return "P_KNIFE02X";
		case -1710894930:
			return "P_CS_CATFISH_WHOLE01X";
		case 431926707:
			return "P_CS_CATFISH_WHOLE01BX";
		case -1419711042:
			return "P_WOODWHITTLE01X";
		case 1810315535:
			return "P_STICKFIREPOKER01X";
		case 266900228:
			return "P_CS_WOODPILE01X";
		case 382293518:
			return "P_FORK01X";
		case 389673974:
			return "P_KNIFE04X";
		case -1874205952:
			return "p_knife03x";
		case 1983379698:
			return "P_CS_BOTTLESLIM01X";
		case 1246822101:
			return "P_CS_BLANKET01X";
		case 1496261474:
			return "P_BEDROLLCLOSED01X";
		case -1342227326:
			return "P_CS_KINDLING01X";
		case -1402507254:
			return "P_CIGARTHIN01X";
		case 1081626861:
			return "p_door_wglass01x";
		case 663716280:
			return "p_broom02x";
		case -969349845:
			return "P_AMB_CLIPBOARD_01";
		case -384257010:
			return "P_CHAIR07X";
		case 628727561:
			return "p_cs_cratetnt01x";
		case -1809617345:
			return "p_cs_flourbag01x";
		case 1521462563:
			return "p_cs_supplies01x";
		case -589352772:
			return "p_cs_supplies02x";
		case 1376394832:
			return "p_cs_supplies03x";
		case -542955242:
			return "p_door04x";
		case -29643421:
			return "p_door11x";
		case -856676249:
			return "p_doorrhosaloon01_l";
		case -1333989503:
			return "p_doorrhosaloon01_r";
		case -1403420972:
			return "P_VAL_GATE2M02X";
		case -1205874435:
			return "P_CS_STMDNKY01X";
		case 2051399415:
			return "P_CS_HOOKPULLEY01X";
		case 1932781590:
			return "P_CHAIR_CS05X";
		case 1489783104:
			return "P_CHAIR_18X";
		case -1581225876:
			return "P_CHAIR19X";
		case -895862876:
			return "P_CHAIR20X";
		case -289651159:
			return "P_CHAIR05X";
		case 1407600554:
			return "p_chair22x";
		case 986312695:
			return "p_glass01x";
		case -93693274:
			return "P_DININGCHAIRS01X";
		case 325252933:
			return "P_WINDSORCHAIR03X";
		case 1328906077:
			return "P_WINDSORCHAIR02X";
		case 1045059103:
			return "p_door_val_jail02x";
		case -155999274:
			return "P_CRATETNT01X";
		case -1956230403:
			return "P_CRATETNT02X";
		case -62869733:
			return "P_MONEYSTACK01X";
		case -422220273:
			return "P_AXE01X";
		case 2065139134:
			return "P_HOE01X";
		case 1170674247:
			return "P_SHOVEL01X";
		case 49937914:
			return "P_SHOVEL04X";
		case -296963090:
			return "P_BROOM01X";
		case -811821899:
			return "P_PITCHFORK01X";
		case 1993810557:
			return "P_SCYTHE01X";
		case 1472170582:
			return "P_SKIFF02x";
		case 673153214:
			return "p_door_nbx_doc01x_l";
		case 132005948:
			return "p_door_nbx_doc01x_r";
		case 1661843942:
			return "p_cs_camera";
		case 1765047802:
			return "p_cs_cameratripod";
		case -1329546951:
			return "p_cs_camerabag01x";
		case -569131374:
			return "p_cameraflash01x";
		case -1509314938:
			return "p_cs_shutterrelease";
		case -397513868:
			return "rowboatswamp";
		case -1399874861:
			return "P_CHAIR25X";
		case 1064769829:
			return "P_DOORBRAIT01BX";
		case -50604564:
			return "P_CS_MAP01X";
		case 1058703817:
			return "p_hammer03x";
		case -238593141:
			return "p_cs_nailbarrel01x";
		case 1210783447:
			return "p_cs_book04x";
		case -2118240499:
			return "p_cs_Fan01x";
		case -862949069:
			return "p_cs_ledgerSmall01x";
		case -1311208351:
			return "p_cs_envelope01x";
		case 826392697:
			return "p_wrappedmeat01x";
		case 1455710720:
			return "P_CS_LETTER02X";
		case -2102031605:
			return "p_cs_book03x";
		case 1955831280:
			return "p_cs_giftBox01x";
		case 305182125:
			return "p_boiler01x";
		case 888504590:
			return "p_boiler02x";
		case -82199229:
			return "p_mugCoffee01x";
		case -1174489568:
			return "p_glasstallbeer01x";
		case 1022056778:
			return "p_pitcher02x";
		case 155128635:
			return "p_tray03x";
		case 1971611315:
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case -1700686082:
			return "P_LADLE02X";
		case -889047922:
			return "P_CS_POT01X";
		case 519549403:
			return "P_CHAIRDINING03X";
		case -755866836:
			return "P_SPOON01X";
		case 196631385:
			return "P_BOWL03X";
		case -569447711:
			return "P_CS_BRIDECATALOGUE01X";
		case -535756918:
			return "P_JEWELRYBOX02BX";
		case 2044431266:
			return "P_CS_LETTERFOLDED01X";
		case -583569159:
			return "P_CS_ARTHURHAT01X";
		case 578898429:
			return "P_OAR03X";
		case -765914358:
			return "P_DOOR_VAL_BANKVAULT";
		case -1190396102:
			return "P_DOOR_COMBANK01X";
		case -436606401:
			return "P_CS_DONATION01X";
		case 1592327736:
			return "p_door_nbx_bank03x_R";
		case -1006516120:
			return "p_door_nbx_bank03x_L";
		case -1078696833:
			return "p_camp_plate_02x";
		case -974192123:
			return "p_stewplate02x";
		case 120221819:
			return "p_cs_log01x";
		case -1814268450:
			return "p_ndb_hotelplank01x";
		case 314775562:
			return "p_glass06x";
		case -1594634038:
			return "p_cs_rag01x";
		case 819493639:
			return "p_inkwell01x";
		case -548150401:
			return "p_cigar02x";
		case 1843407141:
			return "p_bottleBeer01x";
		case -1883578190:
			return "p_beermugglass01x";
		case 851401507:
			return "p_nutBowl01x";
		case 1610236838:
			return "p_cs_sacklarge01x";
		case 633326690:
			return "p_cs_dressbox01x";
		case -300816757:
			return "p_bell05x";
		case 342335375:
			return "p_woodendeskchair01x";
		case -1443906703:
			return "p_chair06x";
		case -1031399461:
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case -2051048367:
			return "p_bottleslim01x";
		case 1267814678:
			return "p_cs_journal01x";
		case -503626004:
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case 604616887:
			return "p_cs_ropeLegSplit";
		case 2038507899:
			return "p_cs_ropeHandsSplit";
		case 388126459:
			return "p_fishingpole01x";
		case -1367341904:
			return "P_FISHINGPOLE02X";
		case -1629442620:
			return "p_cs_flowernecklace";
		case -475791515:
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case 1210527888:
			return "P_CS_FISHINGPOLEBAG01X";
		case 1785480577:
			return "P_STICK02X";
		case 1789147356:
			return "P_CS_SOCK01X";
		case 169503210:
			return "P_DOOR_VAL_BANK00_RX";
		case 160636303:
			return "P_DOOR_VAL_BANK00_RX";
		case -1456646750:
			return "p_can10x";
		case 1010765128:
			return "p_cs_rabbitgut";
		case -142576910:
			return "p_cs_rabbitheadless";
		case 2055623882:
			return "p_cs_rabbitfeetless";
		case -808559472:
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case 1833396091:
			return "s_lootablepoorcase";
		case -1494278633:
			return "P_CS_BOOKHARDCV01X";
		case -1643891339:
			return "P_LETTERBUNDLE_01X";
		case -459043872:
			return "P_LETTERENVELOPE_CS01X";
		case 1825744405:
			return "P_PACKAGE08X";
		case 1713200946:
			return "P_CIGARBOX02X";
		case 1663122464:
			return "p_crucifix02x";
		case 934706428:
			return "p_bottleCrate01x";
		case -554014433:
			return "p_can05x";
		case -1682372069:
			return "p_cs_suitcase04x";
		case 69604629:
			return "p_cs_bagstrauss01x";
		case 29998454:
			return "P_BOTTLE008X";
		case 161697289:
			return "P_BOTTLE009X";
		case 1045394246:
			return "P_BOTTLE010X";
		case 1623781586:
			return "p_pocketMirror01x";
		case -1671495534:
			return "P_CIGARETTE01X";
		case 1207272102:
			return "P_TRAVELTRUNK02X";
		case -294963065:
			return "P_CHAIRWHITE01X";
		case -1947027049:
			return "P_JOURNAL_OPEN01X";
		case -1945229292:
			return "p_table42_cs";
		case -1028267229:
			return "p_cs_newspaper_02x";
		case -1537933036:
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case -1216485179:
			return "p_spittoon01x";
		case 787211696:
			return "p_woodbowl01x";
		case -1167561544:
			return "p_pencil01x";
		case 1467658477:
			return "P_SPOONMID01X";
		case -624124479:
			return "P_PAN01X";
		case 1211525499:
			return "P_Pipe01x";
		case 666597548:
			return "p_cs_railroadbond01x";
		case -989609930:
			return "p_sharpeningstone01x";
		case 1540392720:
			return "p_treestump02x";
		case -1638036806:
			return "p_plate17x";
		case -1566727213:
			return "p_cs_newspaper_01x";
		case 1783964157:
			return "p_sadiehat01x";
		case -1093732866:
			return "p_door_bla_jail_l_01x";
		case 784094203:
			return "p_door_bla_jail_r_01x";
		case 441245663:
			return "p_mashedPotato02x";
	}
	return "";
}

void func_600(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1951255)[iParam0]->f_4 = iParam1;
	(*Global_1951255)[iParam0] = iParam4;
	(*Global_1951255)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1951255)[iParam0]->f_2 = iParam5;
	(*Global_1951255)[iParam0]->f_6 = { vParam6 };
	(*Global_1951255)[iParam0]->f_9 = fParam9;
	(*Global_1951255)[iParam0]->f_10 = iParam10;
	(*Global_1951255)[iParam0]->f_11 = iParam11;
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_5 = iParam12;
	(*Global_1951255)[iParam0]->f_1 = 2;
	(*Global_1951255)[iParam0]->f_17 = -1;
	(*Global_1951255)[iParam0]->f_18 = iParam16;
	(*Global_1951255)[iParam0]->f_19 = iParam15;
	(*Global_1951255)[iParam0]->f_20 = bParam25;
	(*Global_1951255)[iParam0]->f_22 = 0f;
	if (bParam25)
	{
		(*Global_1951255)[iParam0]->f_21 = get_game_timer();
	}
	else
	{
		(*Global_1951255)[iParam0]->f_21 = _get_system_time();
	}
	iVar0 = _uiprompt_register_begin();
	_uiprompt_set_control_action(iVar0, iParam1);
	if (iParam23 != 0)
	{
		_uiprompt_set_control_action(iVar0, iParam23);
	}
	_uiprompt_set_text(iVar0, sParam2);
	if (iParam3 == 4)
	{
		_uiprompt_context_set_point(iVar0, vParam6);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		_0x4d107406667423be(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		_0x4d107406667423be(iVar0, iParam11);
		_uiprompt_context_set_point(iVar0, 0f, 0f, 0f);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	_uiprompt_set_priority(iVar0, iParam4);
	_uiprompt_set_transport_mode(iVar0, iParam5);
	_uiprompt_set_attribute(iVar0, 18, 1);
	if (bParam22)
	{
		_0x53ce46c01a089da1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			_uiprompt_set_standard_mode(iVar0, 0);
			break;
		case 2:
			_uiprompt_set_standard_mode(iVar0, 1);
			break;
		case 1:
			_uiprompt_set_pressed_timed_mode(iVar0, iParam16);
			break;
		case 3:
			_uiprompt_set_hold_indefinitely_mode(iVar0);
			break;
		case 6:
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 7:
			_0xa3f2149aa24f3d8e(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 8:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 9:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 14:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 16:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 11:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1951255)[iParam0]->f_3 = iVar0;
	func_577(iParam0, 1);
	func_578(iParam0, 1);
	func_579(iParam0, 128);
}

void func_601(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (is_string_null_or_empty(&((*Global_1939493)[iParam0]->f_10)))
	{
		return;
	}
	*(*Global_1939493)[iParam0] = { Var0 };
	Global_1939493->f_161 = (Global_1939493->f_161 - 1);
	if (Global_1939493->f_161 < 0)
	{
		Global_1939493->f_161 = 0;
	}
}

int func_602(int iParam0)
{
	iVar0 = func_621(func_663(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637->f_1675.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_603(int iParam0)
{
	if (func_604(81053684, iParam0))
	{
		return true;
	}
	if (func_604(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_604(int iParam0, int iParam1)
{
	iVar1 = func_621(func_663(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1952637->f_1675.f_1[iVar1] != 0 && &Global_1952637->f_1675.f_1[iVar1] != &Global_1952637->f_83[iVar1])
	{
		iVar0 = &Global_1952637->f_1675.f_1[iVar1];
		if (func_482(iVar0) == iParam0 || (iParam0 == 81053684 && func_606(iVar0, 160827531)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_605(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_621(iParam0, 1)]);
}

bool func_606(int iParam0, int iParam1)
{
	if (!func_542(iParam0, 0))
	{
		return func_665(func_664(iParam0), iParam1);
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

int func_607(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (Global_1952637->f_2843.f_1 >= 5)
	{
		return 0;
	}
	if (!func_666(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_573(iParam0);
	return func_473(iParam1, iVar0, bParam2, 1);
}

int func_608(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_667(1);
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

void func_609(float fParam0, int iParam1)
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

int func_610(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_667(1);
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

void func_611(float fParam0, int iParam1)
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

int func_612()
{
	if (!func_561(Global_1940258->f_39))
	{
		return -1569615261;
	}
	return Global_1940258->f_39;
}

int func_613(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!bParam12 && is_entity_dead(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
			break;
		default:
			if (!is_weapon_valid(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((_0x705be297eebdb95d(iVar0) || _is_weapon_melee(iVar0)) && get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, _get_weapon_name(iVar0), 128);
				iVar2 = _0xd42514c182121c23(get_entity_model(iParam0));
				if (!Global_26640 && _does_string_exist_in_string(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, _0x806862e5d266cf38(&cVar5, 0, (get_length_of_literal_string(&cVar5) - get_length_of_literal_string("_DUALWIELD"))), 128);
					iVar3 = get_hash_key(&cVar5);
					if (func_561(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = get_weapontype_group(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = _0x9eefd670f10656d7(iVar2, iVar1);
						if (!Global_26640)
						{
							if (func_561(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_30() == -1 && !func_668(iVar0))
	{
		if (has_ped_got_weapon(iParam0, iVar0, 0, false) && iParam0 != Global_34)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_26640) && iParam0 != Global_34) && get_ped_relationship_group_hash(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
		}
	}
	if (iVar0 == -1569615261 && iParam1 == -1569615261)
	{
		return iVar0;
	}
	else if (iVar0 == -1569615261)
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				iVar0 = 379542007;
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_668(-183018591))
				{
					iVar0 = -183018591;
				}
				else
				{
					iVar0 = 379542007;
				}
				break;
			default:
				iVar0 = 379542007;
				break;
		}
	}
	else if (iVar0 == -164645981 && iParam0 == Global_34)
	{
		iVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_34 && func_561(iVar0))
		{
			get_max_ammo(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!_is_weapon_melee(iVar0) && iVar0 != -1569615261) && !_is_weapon_lantern(iVar0))
		{
			iVar23 = get_ped_ammo_by_type(iParam0, get_ped_ammo_type_from_weapon(iParam0, iVar0));
			iVar24 = _get_weapon_clip_size(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_34)
	{
		func_669(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_670(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_671(iVar0))
		{
			set_ped_infinite_ammo(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		_0xcffc3eccd7a5cceb(get_player_index(), iVar0, iParam4);
	}
	return iVar0;
}

int func_614(int iParam0, int iParam1)
{
	return func_672(&uVar0, iParam0, iParam1);
}

bool func_615()
{
	return &Global_1940085 == 1;
}

bool func_616()
{
	return &Global_1940085 == 2;
}

void func_617(float fParam0)
{
}

void func_618()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1940085->f_15 = 0f;
}

struct<5> func_619(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_673(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_674(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_675(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_676(bParam1) };
			if (bParam2 && func_677(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_678(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_678(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_679(iParam0, &Var6, 1728382685))
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
			Var0 = { func_680(bParam1) };
			switch (func_482(iParam0))
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
			if (func_681(iParam0, -1823706425))
			{
				Var0 = { func_675(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_681(iParam0, -1483207246))
			{
				Var0 = { func_675(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_675(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_681(iParam0, -1653629781))
			{
				Var0 = { func_675(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_682(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_681(iParam0, -1653629781))
			{
				Var0 = { func_675(1384535894, Var0, 1784584921, bParam1) };
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

int func_620(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == iParam0)
		{
			return func_630(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_621(int iParam0, int iParam1)
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

bool func_622(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_683();
	if (iParam2 == 39)
	{
		Var0 = { func_619(iParam0, 1, 0) };
		iParam2 = func_621(func_620(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_587(32768) && iParam2 == 10)
	{
		func_647(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_624(iParam0, 1))
	{
		func_684(&(Global_1952637->f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_655(iParam2);
	}
	func_633(iParam2, iVar5);
	func_685(Global_1952637->f_1556.f_1[iParam2], 4, 6);
	func_685(Global_1952637->f_1675.f_1[iParam2], 4, 6);
	func_662(&(Global_1952637->f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637->f_1556.f_1[iParam2]->f_1;
	}
	Global_1952637->f_1556.f_1[iParam2] = iParam0;
	Global_1952637->f_1556.f_1[iParam2]->f_1 = func_686(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637->f_2897)
		{
			if (&Global_1952637->f_2897.f_2[iVar6] >= 0 && &Global_1952637->f_2897.f_2[iVar6] < 39)
			{
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]] = 0;
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]]->f_1 = 0;
				func_638(func_630(&(Global_1952637->f_2897.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_623(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_687(&(Global_1952637->f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_624(int iParam0, bool bParam1)
{
	if (!func_542(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return false;
	}
	if (func_606(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_625(int iParam0, int iParam1, bool bParam2)
{
	Var4 = { func_619(iParam0, bParam2, 0) };
	if (func_624(iParam0, 0))
	{
		iVar9 = func_688(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_619(iVar9, bParam2, 0) };
			Var0 = { func_675(iVar9, Var4, Var4.f_4, bParam2) };
			return func_689(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_675(iParam0, Var4, Var4.f_4, bParam2) };
	return func_689(Var0, iParam1, bParam2);
}

void func_626()
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
	func_651(32768);
	func_638(1108822547, 8, 6);
}

int func_627(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_621(iParam0, 1);
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

void func_628(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_629(struct<4> Param0)
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
			if (func_690(Param0))
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
			func_691(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_589(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_690(Param0))
			{
				return;
			}
			func_691(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_589(8);
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
			if (func_690(Param0))
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
			func_691(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_589(8);
			break;
			break;
	}
}

int func_630(int iParam0, int iParam1)
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

bool func_631(int iParam0, int iParam1)
{
	return ((Global_1952637->f_83[func_621(iParam0, 1)])->f_11 && iParam1) != 0;
}

int func_632(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2897)
	{
		if (&Global_1952637->f_2897.f_2[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_633(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_692(&(Global_1952637->f_2897), iParam0, iParam1);
}

void func_634(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_635(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_621(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_621(iParam0, 1)])->f_11 || iParam1);
}

void func_636(int iParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		_set_ped_face_feature(iParam0, &(Global_1952637->f_4[iVar0]), (*uParam1)[iVar0]->f_1);
		iVar0++;
	}
	if (iParam2 != 0)
	{
		_set_ped_body_component(iParam0, iParam2);
	}
	if (iParam3 != 0)
	{
		_set_ped_body_component(iParam0, iParam3);
	}
}

void func_637(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 10;
	if (func_631(1108822547, 6) || bParam3)
	{
		if (bParam2 || bParam3)
		{
			func_586(iParam0, iVar0, 0);
			func_635(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1952637->f_3467.f_1, &(Global_1952637->f_3467.f_3[0]), &(Global_1952637->f_3467.f_3[1]), &(Global_1952637->f_3467.f_3[2]), Global_1952637->f_3467.f_8, Global_1952637->f_3467.f_9, Global_1952637->f_3467.f_10, Global_1952637->f_3467.f_11);
		func_638(1108822547, 1, 6);
	}
	Global_1952637->f_925++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_638(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_621(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_621(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_621(iParam0, 1)])->f_11 && iParam1));
}

void func_639(var uParam0, int iParam1)
{
	_set_ped_component_enabled(iParam1, *uParam0, false, true, false);
	if (uParam0->f_1 != 0)
	{
		_0x66b957aac2eaaeab(iParam1, *uParam0, uParam0->f_1, 0, 1, 1);
	}
}

void func_640(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_641(int iParam0, var uParam1)
{
	return (Global_1952637->f_2843.f_3[iParam0] && uParam1) != 0;
}

void func_642(int iParam0, var uParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (&Global_1952637->f_2843.f_3[iParam0] - (Global_1952637->f_2843.f_3[iParam0] && uParam1));
}

int func_643(int iParam0)
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

bool func_644(int iParam0)
{
	return func_531(iParam0, 2);
}

bool func_645(var uParam0, int iParam1)
{
	func_654(uParam0, -1, 1, 1, 0);
	iVar0 = 16;
	iVar1 = 34;
	iVar2 = func_661(Global_1952637->f_83[iVar1]->f_9, 0);
	iVar3 = func_661(Global_1952637->f_83[iVar0]->f_9, 0);
	if (iVar2 == 0)
	{
		return false;
	}
	else
	{
		uParam0->f_1[iVar1] = iVar2;
	}
	if (iVar3 == 0)
	{
		if (func_660() == 24043185)
		{
			return false;
		}
	}
	else
	{
		uParam0->f_1[iVar0] = iVar3;
	}
	*uParam0 = iParam1;
	return true;
}

bool func_646(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_693(iParam1) != iParam2)
	{
		return false;
	}
	if (func_694(2, iParam1))
	{
		func_695(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_647(int iParam0)
{
	func_638(iParam0, 8, 6);
}

void func_648(int iParam0)
{
	func_635(iParam0, 8, 6);
}

void func_649(int iParam0)
{
	Global_1952637->f_1057 = iParam0;
}

int func_650(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_660();
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

void func_651(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

void func_652(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_696(iVar0, iParam0))
		{
			func_697(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_653(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1952637->f_2843 != 0)
	{
		func_572(Global_1952637->f_2843);
		func_574(0);
		Global_1952637->f_2843 = 0;
	}
	else if (iParam3 != 0 && func_698(iParam3))
	{
		func_565(0);
	}
	if (func_587(32768))
	{
		func_648(1108822547);
	}
	if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
		func_699(&(Global_1952637->f_1675.f_1[1]), -1811760631, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_699(&(Global_1952637->f_1675.f_1[4]), -2118203104, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_564(2, 0, iVar0, 0, 0);
		func_564(4, 0, 0, 0, 0);
		func_564(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_564(2, 0, iVar0, iParam0, 0);
	}
	func_700();
}

void func_654(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_701(uParam0->f_1[iVar0], 2))
		{
			if (func_585(iVar0, iParam1))
			{
				vVar4 = { func_702(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1952637->f_83[iVar0]) && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_696(iVar0, 4))
				{
					func_697(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_703(iVar0, 4, 6);
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

void func_655(int iParam0)
{
	func_704(&(Global_1952637->f_2897), iParam0);
}

bool func_656(int iParam0)
{
	Global_1952637->f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_705(&(Global_1952637->f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_657(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

int func_658(int iParam0)
{
	if (!func_542(iParam0, 0))
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

void func_659(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_606(&(uParam0->f_1[34]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_696(iVar0, 16);
		if (bVar1)
		{
			func_697(iVar0, 16, 9);
		}
		if (&Global_1952637->f_83[iVar0]->f_3[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_633(iVar0, iParam3);
			}
			if (!bParam2 && func_658(&(uParam0->f_1[iVar0])) != 0)
			{
			}
			else if (func_585(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
				uParam0->f_1[iVar0]->f_1 = 0;
				func_662(uParam0, &(uParam0->f_1[iVar0]), iVar0, 1, iParam3);
				func_633(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_662(uParam0, &(uParam0->f_1[iVar0]), iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_660()
{
	return Global_1952637->f_1;
}

int func_661(int iParam0, int iParam1)
{
	iVar2 = 0;
	Var3 = { func_706(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_707(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_708(iVar0, iVar1, iParam1);
		}
		func_709(iVar0);
	}
	return iVar2;
}

void func_662(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = iParam1;
	bVar1 = func_624(iVar0, 1);
	if (bParam3 && func_606(&(uParam0->f_1[iParam2]), 343781202))
	{
		func_710(uParam0, &(uParam0->f_1[iParam2]));
	}
	switch (func_630(iParam2, 1))
	{
		case -1130352927:
			func_711(uParam0, iVar0, iParam2, iParam4);
			break;
		case 1367443060:
			func_712(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_713(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_714(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_715(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_716(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_717(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_718(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_719(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_720(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_721(uParam0, bVar1, iParam4);
			break;
		case -207860920:
			func_722(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_723(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_724(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_725(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_726(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_663(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_620(iVar0);
}

int func_664(int iParam0)
{
	return iParam0;
}

int func_665(int iParam0, int iParam1)
{
	if (!func_727(iParam0, 2))
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

bool func_666(int iParam0)
{
	Var2 = -961687407;
	if (func_30() == -1)
	{
		Var2 = 1444744190;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	_0x91ded5dd64bb2691(&Var2);
	if (!_0xed4413cee1bf142c(&Var2))
	{
		return false;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
	{
		return false;
	}
	iVar1 = func_728(iParam0);
	func_729(iVar0, iVar1);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
		{
		}
		else
		{
			func_729(iVar0, iVar1);
		}
	}
	return true;
}

int func_667(int iParam0)
{
	return func_731(func_730(iParam0));
}

bool func_668(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		return true;
	}
	return false;
}

int func_669(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		Var0 = { func_619(iParam0, 0, 1) };
		if (func_678(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_679(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_675(iParam0, Var0, Var0.f_4, 0) };
				func_732(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_733(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return 0;
		}
		func_734(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_735(iParam0, iParam1);
		return 1;
	}
	if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

void func_670(int iParam0, int iParam1, float fParam2)
{
	bVar0 = true;
	iVar1 = get_entity_model(iParam0);
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = get_random_float_in_range(0.125f, 0.375f);
			break;
		case 363815774:
			*fParam2 = get_random_float_in_range(0.7f, 0.875f);
			break;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = get_random_float_in_range(0.4f, 0.6f);
			break;
		case -1090280091:
		case -1076294934:
			*fParam2 = get_random_float_in_range(0.125f, 0.25f);
			break;
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = get_random_float_in_range(0.125f, 0.125f);
			break;
		default:
			*fParam2 = get_random_float_in_range(0.3f, 0.4f);
			if (get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		set_ped_config_flag(iParam0, 361, true);
	}
}

bool func_671(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_672(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_736(iParam1, 128);
	if (func_737("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_738(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_561(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4) && !_is_weapon_bow(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_34, Var4.f_4))
			{
				if (((_is_weapon_two_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_736(iParam1, 16))) && (!_is_weapon_sniper(Var4.f_4) || func_736(iParam1, 4))) && (!func_739(Var4.f_4) || func_736(iParam1, 8)))
				{
					if (iVar0 == 0 || _0xa2091482ed42ef85(Global_34, &Var4) > _0xa2091482ed42ef85(Global_34, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_709(iVar1);
	}
	if (is_weapon_valid(iVar0))
	{
	}
	return iVar0;
}

struct<4> func_673(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_740(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_675(1328661203, func_520(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_675(1328661203, func_520(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_675(1328661203, func_520(), -1591664384, bParam0);
}

int func_674(int iParam0)
{
	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_675(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_542(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_740(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_676(bool bParam0)
{
	iVar0 = func_740(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_675(923904168, func_673(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_675(923904168, func_673(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_675(923904168, func_673(bParam0), -740156546, 0);
}

bool func_677(int iParam0, bool bParam1)
{
	if (func_482(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_741();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_678(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_742(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_679(int iParam0, var uParam1, int iParam2)
{
	if (func_743(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_680(bool bParam0)
{
	iVar0 = func_740(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_675(271701509, func_673(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_675(271701509, func_673(bParam0), 12999093, 0);
}

bool func_681(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_482(iParam0);
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
			if (func_744(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_682(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_745(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_683()
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

void func_684(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if ((*iParam1 == 832230214 || *iParam1 == 30652334) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_482(&(uParam0->f_1[iVar0])) != 1882579758)
			{
				return;
			}
			iVar1 = func_746(&(uParam0->f_1[iVar0]));
			if (iVar1 != 0 && iVar1 != &Global_1952637->f_83[iParam2])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_747(*iParam1, iParam2))
		{
			*iParam1 = &Global_1952637->f_1675.f_1[iParam2];
			return;
		}
	}
	*iParam1 = &Global_1952637->f_83[iParam2];
}

void func_685(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_686(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (func_660() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_748(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_657(iParam0, func_630(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_687(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_587(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_749(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637->f_1675 != 491602716 || !func_694(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_606(Global_1952637->f_1675, -166674229) && (Global_1952637->f_1675 != 491602716 || !func_694(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637->f_1675 = 491602716;
			Global_1952637->f_1556 = 491602716;
			func_750(-1, 0, 6);
			func_564(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_751(0, 1);
	}
}

int func_688(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_752(&uParam0, iParam4, bParam5, iParam6);
}

bool func_689(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_733(0))
	{
		return func_753(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_682(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_740(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_690(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_691(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

void func_692(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_754(uParam0, 1))
	{
		func_755(uParam0, 1);
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

int func_693(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_756();
	}
	return Global_17411.f_55.f_644.f_33[iParam0]->f_1;
}

bool func_694(int iParam0, int iParam1)
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

void func_695(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	*uParam0 = Global_17411.f_55.f_644.f_33[iParam1]->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_17411.f_55.f_644.f_33[iParam1]->f_1.f_1[iVar0] };
		iVar0++;
	}
	if (119907797 == func_482(&(uParam0->f_1[10])) && func_606(&(uParam0->f_1[1]), 458991572))
	{
		uParam0->f_1[10] = &Global_1952637->f_83[10];
	}
}

bool func_696(int iParam0, int iParam1)
{
	return (Global_1952637->f_83[iParam0]->f_11 && iParam1) != 0;
}

void func_697(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 - (Global_1952637->f_83[iParam0]->f_11 && iParam1));
}

bool func_698(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = &Global_1952637->f_1675.f_1[34];
	if ((((func_658(iVar0) != 0 && iParam0 != -859971527) && iParam0 != -1406972469) && iParam0 != -38530791) && iParam0 != 1905845894)
	{
		return false;
	}
	if (func_606(iVar0, -166674229))
	{
		return false;
	}
	return func_666(iParam0);
}

int func_699(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	if (func_757(&(Global_1952637->f_1058), 2))
	{
		return 0;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_758(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_759(iParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_760(uParam3, iParam1);
	bVar2 = func_761(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_762(uParam2, uParam3, iParam1);
		}
		else
		{
			func_763(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_764(&Var3, iVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == (*uParam3)[iVar1]->f_3)
		{
			return 0;
		}
		func_765(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_766(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_764(&Var21, iVar0, 0, 1, 6))
		{
			return 0;
		}
		*(*uParam3)[iVar1] = { Var21 };
	}
	return 1;
}

void func_700()
{
	Global_1952637->f_1057 = 0;
}

bool func_701(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

Vector3 func_702(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return *Global_17411.f_55.f_644.f_33[iParam1]->f_1.f_1[iParam0];
}

void func_703(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 || iParam1);
}

void func_704(var uParam0, int iParam1)
{
	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		*Global_1952637->f_2897.f_35[iVar0] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_767(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_767(uParam0->f_2[iVar0], 1))
				{
					func_634(uParam0->f_2[iVar0], 2, 6);
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

void func_705(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

struct<14> func_706(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_707(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_740(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_708(int iParam0, int iParam1, int iParam2)
{
	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_660() == 24043185)
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_738(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (_get_ped_component_category(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != 1733464892 && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_658(Var1.f_4) != 0)
			{
			}
			else if (func_606(Var1.f_4, -166674229))
			{
			}
			else if (func_606(Var1.f_4, 525391395))
			{
			}
			else
			{
				iVar15 = func_482(Var1.f_4);
				if (func_769(iParam2, func_768(iVar15)))
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

int func_709(int iParam0)
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

void func_710(var uParam0, var uParam1)
{
	Var0 = func_650(0);
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
			iVar8 = func_621(iVar7, 1);
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
				func_633(iVar8, 0);
			}
		}
	}
}

void func_711(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_482(&(uParam0->f_1[iVar0]));
	if (iVar1 == 119907797)
	{
		if (func_606(iParam1, 458991572))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_633(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_606(iParam1, -93469181))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_633(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_606(&(uParam0->f_1[iVar0]), -1446529222) && func_606(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(iParam1, -93469181)) && func_606(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

void func_712(var uParam0, int iParam1, int iParam2)
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

void func_713(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (!func_624(iVar1, 0) && func_606(iVar1, -180472385))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = &uParam0->f_1[iVar0];
	if ((iVar1 != &Global_1952637->f_83[iVar0] && func_482(iVar1) == 2086043523) && func_606(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

void func_714(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_482(iParam2))
	{
		case -525676072:
			func_770(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_771(uParam0, bParam1, iParam3);
			break;
	}
}

void func_715(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_482(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_633(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_482(iParam2) == 81053684 || func_606(iParam2, 160827531))
	{
		func_772(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_606(iParam2, -180472385) && !func_624(&(uParam0->f_1[iVar0]), 0))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	if (func_606(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0]->f_1 == 1530758430)
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_633(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_633(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
	{
		uParam0->f_1[iVar0]->f_1 = -1539589426;
		func_633(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_633(iVar0, iParam3);
		}
	}
}

void func_716(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 12;
	iVar1 = 0;
	if (func_660() == 24043185)
	{
		iVar1 = 1;
	}
	if (2056714954 == _get_ped_component_category(&(uParam0->f_1[iVar0]), iVar1, true))
	{
		if ((bParam1 || func_606(iParam2, 1872585553)) || func_482(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_633(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_624(&(uParam0->f_1[iVar0]), 0) && func_606(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_624(&(uParam0->f_1[iVar0]), 0) && func_606(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = &uParam0->f_1[iVar0];
	if (func_482(iVar2) == 1759215194 && func_482(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0] = func_746(iParam2);
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam4);
	}
	else if (func_773(iVar2, bParam1, iVar1))
	{
		iVar2 = &uParam0->f_1[18];
		iVar3 = 0;
		if (func_482(iVar2) == 912453393 && func_774(32))
		{
			iVar3 |= 1;
		}
		if (func_606(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_661(Global_1952637->f_83[iVar0]->f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0] = iVar2;
			uParam0->f_1[iVar0]->f_1 = 0;
			func_633(iVar0, iParam4);
			func_724(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_624(&(uParam0->f_1[iVar0]), 0))
	{
		return;
	}
	func_633(iVar0, iParam4);
	if (uParam0->f_1[iParam3]->f_1 == -1539589426 || uParam0->f_1[iParam3]->f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3]->f_1 == 0 || uParam0->f_1[iParam3]->f_1 == 1155669136)
	{
		if (func_748(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3]->f_1 = -1539589426;
			return;
		}
	}
	if (func_748(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3]->f_1 = 1334603721;
	}
}

void func_717(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(iParam2, 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

void func_718(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_482(iParam2))
	{
		case 698653232:
			func_775(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_776(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_719(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_482(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_777(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_778(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_720(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_482(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_633(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_660() == 24043185)
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_633(iVar0, iParam3);
		if (uParam0->f_1[iVar0]->f_1 == -1539589426 || uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0]->f_1 == 0 || uParam0->f_1[iVar0]->f_1 == 1155669136)
		{
			if (func_748(&(uParam0->f_1[iVar0]), iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0]->f_1 = -1539589426;
				return;
			}
		}
		if (func_748(&(uParam0->f_1[iVar0]), iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0]->f_1 = 1334603721;
		}
	}
}

void func_721(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(&(uParam0->f_1[iVar0]), 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
}

void func_722(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_779(99217379) && func_606(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_624(&(uParam0->f_1[iVar0]), 0) && func_606(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

void func_723(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(&(uParam0->f_1[iVar0]), 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
}

void func_724(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_482(iParam2))
	{
		case 1759215194:
			func_780(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_781(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_782(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_783(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_784(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_785(uParam0, bParam1, iParam3);
			break;
	}
}

void func_725(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_482(iParam2))
	{
		case 1769055947:
			func_786(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_787(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_726(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		func_788(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = &uParam0->f_1[iVar0];
	if ((func_606(iParam2, 813132419) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_482(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	if ((func_606(iParam2, -1650340550) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_482(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_606(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

bool func_727(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

int func_728(int iParam0)
{
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = iParam0;
	iVar0 = Global_1952637->f_2843.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 || iVar0);
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = iVar0;
	Global_1952637->f_2843.f_1++;
	return iVar0;
}

void func_729(int iParam0, int iParam1)
{
	if (!func_789(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 == 20 && func_606(&(Global_1952637->f_1675.f_1[iVar0]), 343781202))
	{
		iVar1 = func_790(&(Global_1952637->f_1675.f_1[iVar0]), 1108822547);
		if (1388798186 == func_482(iVar1))
		{
			func_791(10, iParam1);
		}
	}
	func_791(iVar0, iParam1);
}

bool func_730(int iParam0)
{
	return func_108(&(Global_1956200->f_1565), iParam0, 1);
}

int func_731(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_732(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_792(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_682(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_733(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_30() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_793(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_794(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_740(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_733(bool bParam0)
{
	if (func_30() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_740(bParam0));
}

int func_734(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_795(iParam0))
	{
		return 0;
	}
	if (!func_733(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_735(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_796(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

bool func_736(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_737(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_740(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_738(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_739(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_740(bool bParam0)
{
	if (func_30() == -1)
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

bool func_741()
{
	return (func_797(-1185145312, 0, 0, 0) > 0 && func_688(func_675(889965687, func_673(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_742(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_798(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_675(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_740(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_740(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_743(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_740(0);
	*uParam1 = { func_675(iParam0, func_676(0), iParam3, 0) };
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

bool func_744(int iParam0, int iParam1, int iParam2)
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

bool func_745(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_740(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_746(int iParam0)
{
	func_705(&uVar1, 9044914, iParam0, 0, 0, 0);
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

bool func_747(int iParam0, int iParam1)
{
	iVar0 = func_482(&(Global_1952637->f_1675.f_1[iParam1]));
	if (func_482(iParam0) == iVar0)
	{
		return true;
	}
	else if (iParam0 == -992705550)
	{
		return func_606(&(Global_1952637->f_1675.f_1[iParam1]), 160827531);
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

int func_748(int iParam0, int iParam1, int iParam2)
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

void func_749(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1952637->f_1675.f_1[iParam0] = { *Global_1952637->f_1556.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	func_799(Global_1952637->f_1675.f_1[iParam0], iParam0, Global_17411.f_55.f_644.f_1777);
}

void func_750(int iParam0, bool bParam1, int iParam2)
{
	func_800(&(Global_1952637->f_1556), iParam0);
	func_801(2, iParam0, 6);
	if (bParam1)
	{
		func_751(0, 1);
	}
}

void func_751(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_700();
	}
	if (bParam0)
	{
		func_589(8);
		func_589(512);
	}
	else
	{
		func_589(8);
		func_589(16);
	}
}

int func_752(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_802(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_753(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_682(*uParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_674(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_803(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_804(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_805(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_806(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_807(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_808(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_809(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_793(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_754(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_755(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_756()
{
	return Global_17411.f_55.f_644.f_1777;
}

bool func_757(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_758(int iParam0)
{
	if (iParam0 == 1733464892)
	{
		return -236468550;
	}
	return -28107610;
}

int func_759(int iParam0)
{
	if (iParam0 == -1713496139)
	{
		return 1687431937;
	}
	else if (func_606(iParam0, -779797157))
	{
		return 129780002;
	}
	else if (func_606(iParam0, -1082418872))
	{
		return -25348444;
	}
	else if (func_606(iParam0, -724253702))
	{
		return -1551826771;
	}
	else
	{
		return 1661173679;
	}
	return 1687431937;
}

int func_760(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1 || (*uParam0)[iVar0]->f_17 == 0)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_761(int iParam0)
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

int func_762(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_760(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	_remove_ped_overlay(*uParam0, (*uParam1)[iVar0]->f_2);
	func_763(uParam0, uParam1, iVar0);
	return 1;
}

void func_763(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			*(*uParam1)[iVar0] = { *((*uParam1)[iVar0 + 1]) };
			(*uParam1)[iVar0]->f_2 = ((*uParam1)[iVar0]->f_2 - 1);
			iVar0++;
		}
	}
}

bool func_764(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = 459292749;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (!func_810(&Var0, uParam0, 0, iParam4))
	{
		return false;
	}
	*uParam0 = iParam1;
	if (bParam2)
	{
		func_811(uParam0, bParam3);
	}
	return true;
}

void func_765(var uParam0, var uParam1, var uParam2)
{
	if ((!func_757(uParam0, 1) || func_757(uParam0, 2)) || uParam0->f_6 < 0)
	{
		return;
	}
	if (uParam2->f_17 == -1177453988)
	{
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_812(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_760(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*(*uParam1)[uParam0->f_6] = { *uParam2 };
			uParam0->f_6++;
			func_813(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = (*uParam1)[iVar0]->f_2;
			*(*uParam1)[iVar0] = { *uParam2 };
			func_814(uParam0, (*uParam1)[iVar0], 1);
		}
	}
}

int func_766(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_764(&Var0, iParam2, bParam3, bParam4, 6))
	{
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		return 0;
	}
	*(*uParam1)[uParam0->f_6] = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1065353216;
	Var19.f_14 = 1065353216;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		if ((*uParam1)[iVar18]->f_1 < ((*uParam1)[(iVar18 - 1)])->f_1)
		{
			Var19 = { *(*uParam1)[iVar18] };
			*(*uParam1)[iVar18] = { *((*uParam1)[(iVar18 - 1)]) };
			*((*uParam1)[(iVar18 - 1)]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	return 1;
}

bool func_767(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_768(int iParam0)
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

bool func_769(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_770(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (func_606(iVar1, 160827531) || func_482(iVar1) == 81053684)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
}

void func_771(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(&(uParam0->f_1[iVar0]), -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
}

void func_772(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-525676072 == func_482(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
}

bool func_773(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_482(iParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 1759215194 || iVar0 == 344283346);
	}
	return (!bParam1 && (iVar0 == -1740828670 || iVar0 == 344283346));
}

bool func_774(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

void func_775(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(iParam2, -1527414429)) && !func_606(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0]->f_1 == 1530758430 || uParam0->f_1[iVar0]->f_1 == 1334603721) && func_606(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0]->f_1 == 1530758430)
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_633(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			uParam0->f_1[iVar0]->f_1 = -1539589426;
			func_633(iVar0, iParam3);
		}
	}
}

void func_776(var uParam0, bool bParam1, int iParam2, int iParam3)
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
		func_633(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2]->f_1 != -2081918609)
	{
		iVar0 = 34;
		iVar1 = &uParam0->f_1[iVar0];
		if (func_606(iVar1, 1583165364))
		{
			uParam0->f_1[iParam2]->f_1 = -2081918609;
			func_633(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			iVar1 = &uParam0->f_1[iVar0];
			if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_482(iVar1))
			{
				uParam0->f_1[iParam2]->f_1 = -2081918609;
				func_633(iParam2, iParam3);
			}
		}
	}
}

void func_777(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 16;
	func_633(iVar0, iParam3);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_633(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_633(iVar0, iParam3);
			func_720(uParam0, 0, &(uParam0->f_1[iVar0]), iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(iParam2, -985549034))
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
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(iParam2, -1527414429)) && !func_606(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

void func_778(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_633(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && !func_606(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 13;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 25;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(iParam2, 675650051))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

bool func_779(int iParam0)
{
	return &Global_1952637->f_1675.f_1[func_621(iParam0, 1)] != &Global_1952637->f_83[func_621(iParam0, 1)];
}

void func_780(var uParam0, int iParam1)
{
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam1);
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_633(iVar0, iParam1);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_633(iVar0, iParam1);
	}
}

void func_781(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_660() == 24043185)
	{
		iVar3 = 1;
	}
	if (func_660() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_482(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_661(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_633(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_633(iVar0, iParam3);
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(iParam2, -1473580422))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_606(iVar1, 1469783911))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
		}
		else if (func_748(&(uParam0->f_1[iVar0]), iVar3, -2081918609) != -1)
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
		if (func_482(iVar1) == 912453393)
		{
			bVar2 = true;
			if (func_606(iParam2, 1583165364))
			{
				uParam0->f_1[iVar0]->f_1 = -2081918609;
				func_633(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0])
	{
		if (func_482(iVar1) == 1868067663 && func_606(iParam2, -1016441646))
		{
			func_815(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_633(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (1759215194 == func_482(&(uParam0->f_1[iVar0])))
	{
		func_633(16, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(iParam2, -1650340550))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_482(iVar1) == 1769055947)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_633(iVar0, iParam3);
		}
	}
}

void func_782(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_660() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_482(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_661(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_633(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_606(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_788(uParam0, iParam3, 1, 0);
		}
		else if (func_606(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
	func_633(iVar0, iParam3);
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(iVar1, 1090938458)) && func_606(iParam2, 475297062))
	{
		func_815(uParam0, iVar0, iParam3);
	}
}

void func_783(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	func_633(36, iParam2);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
	if (func_660() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0] = func_661(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_633(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0] && func_606(iVar1, 353024991))
	{
		func_815(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_482(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
}

void func_784(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_482(iVar1) == 294388917)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 18;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_482(iVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0]->f_1 != 1155669136)
			{
				uParam0->f_1[iVar0]->f_1 = 1155669136;
				func_633(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_633(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_606(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_788(uParam0, iParam3, 1, 0);
		}
		else if (func_606(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
}

void func_785(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_815(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_606(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_788(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_633(iVar0, iParam2);
		}
	}
}

void func_786(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_633(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = -2081918609;
		func_633(iVar0, iParam3);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_606(iParam2, -1278198125))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (912453393 == func_482(iVar1) && uParam0->f_1[iVar0]->f_1 != -2081918609)
		{
			uParam0->f_1[iVar0]->f_1 = -2081918609;
			func_633(iVar0, iParam3);
		}
	}
}

void func_787(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_606(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

void func_788(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam1);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam1);
	}
	iVar0 = 38;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_482(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_633(iVar0, iParam1);
	}
}

bool func_789(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1912930450:
			iVar0 = 1742327865;
			if (func_482(func_605(iVar0)) != 81053684 && !func_606(func_605(iVar0), 160827531))
			{
				return false;
			}
			break;
		case -1745589872:
			iVar0 = 1742327865;
			if (!func_606(func_605(iVar0), -1303648999))
			{
				return false;
			}
			break;
		case -1549909015:
			iVar0 = 1108822547;
			iVar1 = func_482(func_605(iVar0));
			if (iVar1 != -525676072 && iVar1 != -2061583405)
			{
				return false;
			}
			break;
		case 357406204:
			iVar0 = -1197751823;
			iVar1 = func_482(func_605(iVar0));
			if (iVar1 != 294388917)
			{
				return false;
			}
			break;
		case -464635753:
			iVar0 = -450913544;
			iVar1 = func_482(func_605(iVar0));
			if (iVar1 != 698653232)
			{
				return false;
			}
			break;
		case 1742327865:
			iVar0 = 1742327865;
			if (func_606(func_605(iVar0), -1303648999))
			{
				return false;
			}
			break;
		default:
			iVar0 = iParam0;
			break;
	}
	*iParam1 = func_621(iVar0, 1);
	return true;
}

int func_790(int iParam0, int iParam1)
{
	iVar0 = func_650(0);
	func_705(&(Global_1952637->f_1043), iVar0, iParam0, 1409451727, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0xed4413cee1bf142c(&(Global_1952637->f_1043)))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1373051002))
	{
		return 0;
	}
	return uVar1;
}

void func_791(int iParam0, int iParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (Global_1952637->f_2843.f_3[iParam0] || iParam1);
}

bool func_792(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_793(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_816(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_818(func_817(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_819(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_794(int iParam0, struct<17> Param1)
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

bool func_795(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_796(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_797(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_795(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_740(bParam1), iParam0, iParam3);
}

int func_798(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

void func_799(var uParam0, int iParam1, int iParam2)
{
	*Global_17411.f_55.f_644.f_33[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
}

void func_800(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	Global_17411.f_55.f_644.f_33[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_799(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_801(int iParam0, int iParam1, int iParam2)
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

bool func_802(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_740(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_745(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

struct<28> func_803(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_740(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_809(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_804(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_816(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_818(func_820(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_819(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_805(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_740(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_809(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_806(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_818(func_821(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_819(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_807(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_740(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_809(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_808(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_816(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_818(func_822(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_819(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_809(var uParam0, bool bParam1)
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
		Var0.f_15 = func_798(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_520() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_810(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (_0x44b3a36933ac009c(&uVar2, uParam0, -480981886))
	{
		uParam1->f_17 = uVar2;
	}
	else if (!bParam2)
	{
		return false;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, -925732223))
	{
		uParam1->f_3 = iVar0;
	}
	else
	{
		uParam1->f_3 = 0;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 1330140418))
	{
		uParam1->f_4 = iVar0;
	}
	else
	{
		uParam1->f_4 = 0;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 2055530431))
	{
		uParam1->f_5 = iVar0;
	}
	else
	{
		uParam1->f_5 = 0;
	}
	if (_0xb2b42607f7867576(&uVar4, uParam0, 2018964076))
	{
		uParam1->f_13 = uVar4;
	}
	else
	{
		uParam1->f_13 = 0f;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 723829617))
	{
		uParam1->f_16 = func_823(iVar0);
	}
	if (_0xb2b42607f7867576(&uVar4, uParam0, 1802626656))
	{
		uParam1->f_15 = uVar4;
	}
	else
	{
		uParam1->f_15 = 0f;
	}
	if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 939944711))
	{
		uParam1->f_6 = uVar3;
	}
	else
	{
		uParam1->f_6 = 0;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 917806888))
	{
		uParam1->f_7 = iVar0;
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 1922465595))
		{
			uParam1->f_8 = uVar3;
		}
		else
		{
			uParam1->f_8 = 0;
		}
		if (_0xb2b42607f7867576(&uVar4, uParam0, -1979206779))
		{
			uParam1->f_14 = uVar4;
		}
		else
		{
			uParam1->f_14 = 0f;
		}
	}
	else
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_14 = 0f;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 333547134))
	{
		uParam1->f_9 = iVar0;
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 1223307134))
		{
			uParam1->f_10 = uVar3;
		}
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 915180227))
		{
			uParam1->f_11 = uVar3;
		}
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, -1231156504))
		{
			uParam1->f_12 = uVar3;
		}
	}
	else
	{
		uParam1->f_9 = 0;
		uParam1->f_10 = 0;
		uParam1->f_11 = 0;
		uParam1->f_12 = 0;
	}
	uParam0->f_1 = 1777366913;
	uParam0->f_2 = 459292749;
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	_0x91ded5dd64bb2691(uParam0);
	if (_0x52fc26d2d2fc2987(&uVar1, uParam0, -1118674339))
	{
		uParam1->f_1 = uVar1;
	}
	return true;
}

void func_811(var uParam0, bool bParam1)
{
	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	iVar0 = func_824(uParam0->f_17);
	if (iVar0 == 0)
	{
		return;
	}
	iVar18 = *uParam0;
	Var19 = { func_675(889965687, func_673(1), 1034665895, 1) };
	if (bParam1 && iVar18 != func_688(Var19, iVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_807(func_675(iVar18, Var19, iVar0, 1), 1, 0) };
	if (Var1.f_16 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_825(Var1.f_16);
}

void func_812(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	_set_ped_overlay_textures(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_813(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && ((*uParam1)[(iParam2 - 1)])->f_1 > (*uParam1)[iParam2]->f_1)
	{
		func_826(uParam0, uParam1);
	}
	else
	{
		func_827(uParam0, (*uParam1)[iParam2]);
	}
}

void func_814(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		_set_ped_overlay_textures(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		_set_ped_overlay_palette(*uParam0, uParam1->f_2, uParam1->f_9);
		_set_ped_overlay_colour(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		_0xf2ea041f1146d75b(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		_0x057c4f092e2298be(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	_sep_ped_overlay_variation(*uParam0, uParam1->f_2, uParam1->f_6);
	_set_ped_overlay_opacity(*uParam0, uParam1->f_2, uParam1->f_13);
}

void func_815(var uParam0, int iParam1, int iParam2)
{
	if (func_606(&(uParam0->f_1[iParam1]), 343781202))
	{
		func_710(uParam0, &(uParam0->f_1[iParam1]));
	}
	else
	{
		uParam0->f_1[iParam1] = &Global_1952637->f_83[iParam1];
		uParam0->f_1[iParam1]->f_1 = 0;
		func_633(iParam1, iParam2);
	}
}

bool func_816(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_828(uParam1->f_8, iParam0, iVar0, 2048) || func_828(uParam1->f_8, iParam0, iVar0, 32768)) || func_828(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_828(uParam1->f_8, iParam0, iVar0, 4) || func_828(uParam1->f_8, iParam0, iVar0, 256)) || func_828(uParam1->f_8, iParam0, iVar0, 65536)) || func_828(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_828(uParam1->f_8, iParam0, iVar0, 1) || func_828(uParam1->f_8, iParam0, iVar0, 8)) || func_828(uParam1->f_8, iParam0, iVar0, 65536)) || func_828(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_828(uParam1->f_8, iParam0, iVar0, 1) || func_828(uParam1->f_8, iParam0, iVar0, 16)) || func_828(uParam1->f_8, iParam0, iVar0, 2)) || func_828(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_828(uParam1->f_8, iParam0, iVar0, 8) || func_828(uParam1->f_8, iParam0, iVar0, 4096)) || func_828(uParam1->f_8, iParam0, iVar0, 256)) || func_828(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_817(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_818(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_829(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_829(iParam1, 2, 0, 0);
	return -1;
}

int func_819(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_829(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_820(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_821(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_822(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

int func_823(int iParam0)
{
	switch (iParam0)
	{
		case 377740851:
			return 0;
		case -897347426:
			return 1;
		case -409773112:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -1990383629;
		case 299749022:
			return -101524555;
		case -1180698265:
			return -1915385310;
		case -487028314:
			return 1315162488;
		case 241235545:
			return 727393558;
		case 1827902148:
			return -1228057307;
		case 1301555144:
			return 1712094016;
		case -2056583192:
			return -1248299493;
		case 1015239729:
			return -451359317;
		case -340627321:
			return -2041626192;
		case -875805376:
			return -1371514637;
		case -768760704:
			return 1547608292;
		case 1089431066:
			return -361152079;
		case -2118203104:
			return -1994943603;
		case 1285634184:
			return 1011151573;
		case -559080197:
			return 892816668;
		case -1811760631:
			return -246340825;
		case 1858448324:
			return -1839865333;
		default:
			break;
	}
	return 0;
}

float func_825(int iParam0)
{
	return (to_float(iParam0) / 10000f);
}

void func_826(var uParam0, var uParam1)
{
	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1065353216;
	Var2.f_14 = 1065353216;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		if ((*uParam1)[iVar0]->f_1 < ((*uParam1)[(iVar0 - 1)])->f_1)
		{
			_remove_ped_overlay(*uParam0, ((*uParam1)[(iVar0 - 1)])->f_2);
			Var2 = { *(*uParam1)[iVar0] };
			*(*uParam1)[iVar0] = { *((*uParam1)[(iVar0 - 1)]) };
			*((*uParam1)[(iVar0 - 1)]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_827(uParam0, (*uParam1)[iVar0]);
		iVar0++;
	}
}

void func_827(var uParam0, var uParam1)
{
	uParam1->f_2 = _add_ped_overlay(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_814(uParam0, uParam1, 0);
}

int func_828(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_598(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_829(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_830(iParam0, iParam1, iParam2, iParam3);
}

void func_830(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_831(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

void func_831(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_832(&(uParam0->f_4));
}

void func_832(var uParam0)
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

