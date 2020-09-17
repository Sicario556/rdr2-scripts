void __EntryFunction__()
{
	iLocal_13 = 675980447;
	fLocal_28 = 1f;
	fLocal_29 = 1f;
	if (bScriptParam_0)
	{
	}
	func_1();
	while (!func_2(1, 1))
	{
		func_3(1);
		_0x236905c700fdb54d();
		disable_control_action(0, 1287709438, true);
		disable_control_action(0, -484677055, true);
		func_4();
		func_5();
		switch (iLocal_30)
		{
			case 0:
				if (&Global_1051137)
				{
					if (((!func_6() || Global_1572887->f_360.f_26 != 0) || !bScriptParam_0) || Global_1572887->f_106.f_13 == 1)
					{
						if (!func_7())
						{
							animpostfx_stop_all();
						}
						_hide_hud_component(690901814);
						func_8(0);
						func_9(1);
					}
					else
					{
						if (func_6())
						{
						}
						if (bScriptParam_0)
						{
						}
						if (Global_1572887->f_106.f_13 == 1)
						{
						}
						if (Global_1572887->f_360.f_26 == 0)
						{
						}
						func_8(1);
					}
				}
				break;
			case 1:
				if (func_6())
				{
					func_9(2);
				}
				break;
			case 2:
				if (func_10() && !func_11())
				{
					if (func_12(Global_3407872->f_2499, 4))
					{
						func_9(3);
					}
				}
				else
				{
					func_13(1, 1);
					if (func_12(&Global_1051134, 64))
					{
						func_14(0);
					}
					else if (func_15(255) == 4)
					{
					}
					else
					{
						func_16(1, 1);
					}
					func_9(3);
				}
				break;
			case 3:
				if (func_15(255) != 1)
				{
				}
				else
				{
					func_9(4);
				}
				break;
			case 4:
				if (!func_7())
				{
					func_17(&(Global_3407872->f_2499), 1);
					func_9(5);
				}
				break;
			case 5:
				if (func_11() || func_12(Global_3407872->f_2499, 2))
				{
					reset_paused_renderphases();
					func_18();
					if (!is_screen_faded_in() && !is_screen_fading_in())
					{
						do_screen_fade_in(0);
					}
					animpostfx_play("RespawnMissionCheckpoint");
					_0x2e399eafbeea74d5();
					func_19(&uLocal_31, 1, 0);
					func_9(6);
				}
				break;
			case 6:
				if (func_20(&uLocal_31, 1, 0) > 1500)
				{
					func_9(7);
					_0xc5cb91d65852ed7e("RespawnMissionCheckpoint");
				}
				break;
			case 7:
				_0x2e399eafbeea74d5();
				if (!func_21())
				{
					func_22();
					func_23();
				}
				break;
		}
		wait(0);
	}
	func_22();
	func_23();
}

void func_1()
{
	network_set_script_is_safe_for_network_game();
	_0xb711eb4bc8d06013();
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

void func_3(bool bParam0)
{
	if (!bParam0)
	{
		func_24(21);
	}
	else
	{
		func_14(21);
	}
}

void func_4()
{
	if (_is_app_running(29649618) || _is_app_active(29649618))
	{
		_close_app_by_hash_immediate(29649618);
	}
	if (_is_app_running(-1641598689) || _is_app_active(-1641598689))
	{
		_close_app_by_hash_immediate(-1641598689);
	}
	if (func_25())
	{
		func_26();
	}
	if (func_27())
	{
		func_28();
	}
}

void func_5()
{
	if (iLocal_33 != 0)
	{
		return;
	}
	if (!func_10())
	{
		iLocal_33 = 2;
		return;
	}
	if (func_21())
	{
		iLocal_33 = 1;
		return;
	}
	func_29();
	if (iLocal_30 <= 1)
	{
		return;
	}
	iVar0 = func_30();
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 1)
	{
		uVar1 = -1;
		func_31(Global_3407872, &uVar1);
		iVar2 = start_new_script_with_name_hash_and_args(-1486408849, &uVar1, 1, 14335);
		if (_does_thread_exist(iVar2))
		{
			iLocal_33 = 1;
			if (func_32())
			{
				func_17(&(Global_3407872->f_2499), 8);
			}
			else
			{
				func_33(&(Global_3407872->f_2499), 8);
			}
		}
		else
		{
			iLocal_33 = 2;
		}
	}
}

bool func_6()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_5;
}

bool func_7()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

void func_8(bool bParam0)
{
	if (bParam0)
	{
		func_34(16384);
	}
	else
	{
		func_35(16384);
	}
}

void func_9(int iParam0)
{
	iLocal_30 = iParam0;
}

bool func_10()
{
	return Global_3407872->f_225 != 0;
}

bool func_11()
{
	if (iLocal_33 == 0)
	{
		return false;
	}
	return !func_21();
}

bool func_12(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_13(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (iParam1 != -1)
		{
			Global_1102219->f_3809 = 0;
		}
		else
		{
			Global_1102219->f_3809 = 1;
		}
		func_14(58);
		Global_1102219->f_3808 = iParam1;
	}
	else
	{
		func_24(58);
	}
}

int func_14(int iParam0)
{
	if (func_36(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
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

void func_16(bool bParam0, bool bParam1)
{
	if (func_15(255) == 4)
	{
		return;
	}
	if (func_37(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_24(0);
	}
	else
	{
		if (bParam1)
		{
			func_38(0, 0, 0, 1);
		}
		func_14(0);
		func_39(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_40(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_41(Global_1102219->f_3849, 36);
	func_42(Global_1102219->f_3888, 36);
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_18()
{
	Global_1940144->f_105 = -1;
	Global_1940144->f_105.f_1 = 0;
}

void func_19(var uParam0, bool bParam1, bool bParam2)
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

int func_20(var uParam0, bool bParam1, bool bParam2)
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

bool func_21()
{
	return _get_number_of_references_of_script_with_name_hash(-1486408849) > 0;
}

void func_22()
{
	func_43();
	Global_1051138 = 0;
	func_3(0);
	func_44(0);
	func_45(0);
	_0x2e399eafbeea74d5();
	func_46();
}

void func_23()
{
	terminate_this_thread();
}

int func_24(int iParam0)
{
	if (func_47(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_25()
{
	return Global_1896738->f_382;
}

void func_26()
{
	func_48(0);
}

bool func_27()
{
	return Global_1940311->f_1;
}

void func_28()
{
	if (_get_number_of_references_of_script_with_name_hash(-4058091) > 0)
	{
		Global_1940311->f_12 = 1;
	}
}

void func_29()
{
	request_script_with_name_hash(-1486408849);
}

int func_30()
{
	if (!has_script_with_name_hash_loaded(-1486408849))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!network_is_handle_valid((*Global_3407872)[iVar2]))
		{
		}
		else
		{
			iVar1++;
			if (!network_is_gamer_in_my_session((*Global_3407872)[iVar2]))
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
					iVar0++;
				}
			}
		}
		iVar2++;
	}
	if (iVar0 >= iVar1)
	{
		return 1;
	}
	if (!func_49(&uLocal_34))
	{
		func_19(&uLocal_34, 1, 0);
	}
	if (!func_32())
	{
		return 0;
	}
	return 1;
}

void func_31(var uParam0, var uParam1)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!network_is_handle_valid((*uParam0)[iVar0]))
		{
		}
		else if (!network_is_gamer_in_my_session((*uParam0)[iVar0]))
		{
		}
		else
		{
			iVar2 = network_get_player_from_gamer_handle((*uParam0)[iVar0]);
			if (!_network_is_player_index_valid(iVar2))
			{
			}
			else
			{
				iVar3 = get_unique_int_for_player(iVar2);
				if (iVar1 == -1 || iVar3 < iVar1)
				{
					iVar1 = iVar3;
				}
			}
		}
		iVar0++;
	}
	*uParam1 = iVar1;
}

bool func_32()
{
	if (!func_49(&uLocal_34))
	{
		return false;
	}
	if (func_20(&uLocal_34, 1, 0) <= 20000)
	{
		return false;
	}
	return true;
}

void func_33(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_34(int iParam0)
{
	func_50(&(Global_1071686->f_28662.f_22.f_1), iParam0);
}

void func_35(int iParam0)
{
	if (func_51(iParam0))
	{
		func_52(&(Global_1071686->f_28662.f_22.f_1), iParam0);
	}
}

bool func_36(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_37(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_38(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_53(iParam0);
	if (!func_54(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_55(128) && !func_56(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_57() == 4)
	{
		func_24(18);
	}
	func_58(1024);
}

void func_39(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_40(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_41(struct<29> Param0, var uParam29, int iParam30)
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

void func_42(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_43()
{
	Global_1051134 = 0;
}

void func_44(bool bParam0)
{
	if (!bParam0)
	{
		func_24(19);
	}
	else
	{
		func_14(19);
	}
}

void func_45(bool bParam0)
{
	if (!bParam0)
	{
		func_24(18);
	}
	else
	{
		func_14(18);
	}
}

void func_46()
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

bool func_47(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_48(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896738->f_382)
		{
			Global_1896738->f_382 = bParam0;
		}
	}
	else if (Global_1896738->f_382)
	{
		Global_1896738->f_382 = bParam0;
	}
}

bool func_49(var uParam0)
{
	return uParam0->f_1;
}

void func_50(var uParam0, int iParam1)
{
	func_59(uParam0, iParam1);
}

bool func_51(int iParam0)
{
	return func_60(Global_1071686->f_28662.f_22.f_1, iParam0);
}

void func_52(var uParam0, int iParam1)
{
	func_61(uParam0, iParam1);
}

void func_53(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_54(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_55(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_56(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_57()
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

void func_58(int iParam0)
{
	if (func_62(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_60(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_61(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_62(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

