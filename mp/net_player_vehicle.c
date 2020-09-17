void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	Var0.f_2 = 255;
	Var0.f_4 = 6;
	Var0.f_31 = -1;
	if (!func_1(&Var0, &Local_24))
	{
		func_2(&Var0, "failed to launch the script.");
	}
	if (Local_24.f_20)
	{
		func_3();
	}
	if (func_4(&(Global_1291734->f_581.f_72)))
	{
		func_5(&(Global_1291734->f_581.f_72));
	}
	while (true)
	{
		func_6(&Var0, &Local_24);
		if (func_7(&Var0, &Local_24))
		{
			func_2(&Var0, "script should terminate.");
		}
		if (!func_8(Var0, 2048))
		{
			if (func_9(&Var0, &Local_24))
			{
				func_10(&Var0, "script should terminate due to async update.");
			}
			else if (!func_11(&Var0))
			{
			}
			else
			{
				if (!func_8(Var0, 8))
				{
					if (func_12(&Var0))
					{
						func_13(&Var0, 8);
					}
				}
				if (func_8(Var0, 8))
				{
					if (func_14(&Var0))
					{
						if (Var0.f_31 != -1)
						{
							if (!func_15(Var0.f_31))
							{
								if (func_16())
								{
									func_17(Var0.f_31, 1);
								}
							}
						}
					}
				}
				if (func_18(&Var0))
				{
					func_10(&Var0, "update requested thread termination.");
				}
			}
		}
		else if (get_time_difference(Var0.f_30, get_network_time_accurate()) > 1000)
		{
			if (func_14(&Var0))
			{
				Var0.f_30 = get_network_time_accurate();
				if (func_8(Var0, 2))
				{
					func_19();
				}
				else
				{
					func_20();
				}
			}
		}
		if (func_21(&Var0, &Local_24) || func_8(Var0, 2048))
		{
			func_2(&Var0, "event requested thread termination.");
		}
		wait(0);
	}
	func_2(&Var0, "end of thread.");
}

bool func_1(var uParam0, var uParam1)
{
	iVar0 = _0x6818d1a194e29983();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!is_entity_a_vehicle(iVar0))
	{
		return false;
	}
	uParam0->f_3 = get_vehicle_index_from_entity_index(iVar0);
	if (!does_entity_exist(uParam0->f_3))
	{
		return false;
	}
	uParam0->f_2 = network_get_player_from_gamer_handle(uParam1);
	_copy_memory(&(uParam0->f_11), uParam1, 7);
	if (!_network_is_player_index_valid(uParam0->f_2))
	{
		return false;
	}
	if (uParam0->f_2 == player_id())
	{
		func_13(uParam0, 1);
		iVar1 = veh_to_net(uParam0->f_3);
		if (!network_does_network_id_exist(iVar1))
		{
		}
		else
		{
			_set_network_id_sync_to_player(iVar1, player_id(), true);
		}
	}
	if (!func_22(uParam0, uParam1))
	{
		return false;
	}
	network_set_script_is_safe_for_network_game();
	register_script_with_audio(1);
	set_this_script_can_be_paused(false);
	_0xa6ac35db4a7957a8(250);
	return true;
}

void func_2(var uParam0, char* sParam1)
{
	if (_0x375f5870a7b8bec1(sParam1))
	{
	}
	clear_last_driven_vehicle();
	func_23(uParam0);
	func_24(uParam0);
	if (func_4(&(uParam0->f_18)))
	{
		func_5(&(uParam0->f_18));
	}
	if (func_4(&(uParam0->f_21)))
	{
		func_5(&(uParam0->f_21));
	}
	if (func_4(&(uParam0->f_24)))
	{
		func_5(&(uParam0->f_24));
	}
	if (func_4(&(Global_1291734->f_581.f_72)))
	{
		func_5(&(Global_1291734->f_581.f_72));
	}
	if (does_entity_exist(uParam0->f_3))
	{
		if (!_0x5136b284b67b35c7(uParam0->f_3))
		{
			bVar0 = func_8(*uParam0, 2);
			if (!network_has_control_of_entity(uParam0->f_3))
			{
				if (!func_25(uParam0->f_3, 2, !bVar0))
				{
				}
			}
			else
			{
				_0xba8818212633500a(uParam0->f_3, 17, 1);
				if (bVar0)
				{
					func_26(uParam0->f_3, 0);
				}
				else
				{
					func_26(uParam0->f_3, 1);
					task_everyone_leave_vehicle_in_order(uParam0->f_3, 0);
				}
			}
			if (!bVar0)
			{
				if (func_8(*uParam0, 4096))
				{
					if (get_vehicle_ped_is_in(player_ped_id(), true) == uParam0->f_3)
					{
						task_leave_any_vehicle(player_ped_id(), 0, 0);
					}
				}
				if (!network_has_control_of_entity(uParam0->f_3))
				{
				}
				else
				{
					if (func_8(*uParam0, 4096))
					{
						_0x55cd5fddd4335c1e(uParam0->f_3, 0f, 0f, 0f, 8f, 1148979587);
					}
					set_vehicle_as_no_longer_needed(&(uParam0->f_3));
				}
			}
			else if (does_entity_exist(uParam0->f_3))
			{
				if (!network_has_control_of_entity(uParam0->f_3))
				{
				}
				else
				{
					_0x35dc1877312fba0f(&(uParam0->f_3));
				}
			}
		}
	}
	if (func_14(uParam0))
	{
		_0xd0e02aa618020d17(player_id(), 0);
		func_27(4);
		func_27(2);
		func_28();
	}
	else if (func_29())
	{
		func_30(11, uParam0->f_2, &(Global_1296859->f_154[&Global_1296859]), 0);
		func_31(1649473200, 31, "NSTM_STABLE_DESTROYED_VEHICLE");
		func_32();
	}
	terminate_this_thread();
}

void func_3()
{
	if (func_33(8, 255))
	{
		return;
	}
	func_34(100);
	func_35(6, 3);
}

bool func_4(var uParam0)
{
	return func_36(*uParam0, 1);
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_6(var uParam0, var uParam1)
{
	uParam0->f_2 = network_get_player_from_gamer_handle(uParam1);
	if (!func_14(uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_3;
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = player_id();
	if (!_network_is_player_index_valid(iVar1))
	{
		return;
	}
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	if (_0xb9050a97594c8832(iVar1) != iVar0)
	{
		_0xd0e02aa618020d17(iVar1, iVar0);
	}
	iVar2 = _0xb729679356a889ae(iVar0);
	if (is_entity_a_ped(iVar2))
	{
		iVar3 = get_ped_index_from_entity_index(iVar2);
	}
	iVar4 = player_ped_id();
	if (iVar3 != iVar4)
	{
		_0x838c216c2b05a009(iVar4, iVar0);
	}
}

bool func_7(var uParam0, var uParam1)
{
	if (func_37(1, 1))
	{
		return true;
	}
	if (!does_entity_exist(uParam0->f_3))
	{
		return true;
	}
	if (!func_14(uParam0))
	{
		if (!network_is_handle_valid(&(uParam0->f_11)) || !network_is_gamer_in_my_session(&(uParam0->f_11)))
		{
			func_13(uParam0, 2);
			return true;
		}
	}
	if (func_38(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_9(var uParam0, var uParam1)
{
	func_39(uParam0);
	func_40(uParam0);
	if (func_41(uParam0, uParam1))
	{
		return true;
	}
	if (func_42(uParam0, uParam1))
	{
		return true;
	}
	if (func_14(uParam0))
	{
		if (func_43())
		{
			func_13(uParam0, 2);
			return true;
		}
		if (!func_8(*uParam0, 8192))
		{
			if (vdist(get_entity_coords(player_ped_id(), true, false), get_entity_coords(uParam0->f_3, true, false)) > 250f)
			{
				func_13(uParam0, 8192);
				func_13(uParam0, 2);
				return true;
			}
			else
			{
				bVar0 = vdist(get_entity_coords(player_ped_id(), true, false), get_entity_coords(uParam0->f_3, true, false)) >= 188f;
				if (!func_8(*uParam0, 16384))
				{
					if (bVar0)
					{
						func_17(933, 1);
						func_44(&(uParam0->f_27));
						func_13(uParam0, 16384);
					}
				}
				else if (!bVar0 && func_45(&(uParam0->f_27), 3f))
				{
					func_5(&(uParam0->f_27));
					func_46(uParam0, 16384);
				}
			}
		}
	}
	return false;
}

void func_10(var uParam0, char* sParam1)
{
	if (_0x375f5870a7b8bec1(sParam1))
	{
	}
	if (!func_14(uParam0))
	{
		return;
	}
	func_13(uParam0, 2048);
	uParam0->f_30 = get_network_time_accurate();
	if (func_8(*uParam0, 2))
	{
		func_19();
	}
	else
	{
		func_20();
	}
}

bool func_11(var uParam0)
{
	if (!func_8(*uParam0, 16))
	{
		if (func_14(uParam0))
		{
			if (!network_has_control_of_entity(uParam0->f_3))
			{
				network_request_control_of_entity(uParam0->f_3);
			}
			else
			{
				_0xd0e02aa618020d17(player_id(), uParam0->f_3);
				_0x838c216c2b05a009(player_ped_id(), uParam0->f_3);
				func_13(uParam0, 16);
			}
		}
		else
		{
			func_13(uParam0, 16);
		}
	}
	if (!func_8(*uParam0, 32))
	{
		if (func_47(uParam0))
		{
			func_13(uParam0, 32);
		}
	}
	if (func_8(*uParam0, 16))
	{
		if (func_8(*uParam0, 32))
		{
			return true;
		}
	}
	return false;
}

bool func_12(var uParam0)
{
	iVar0 = 1;
	if (!func_48(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_49(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_14(var uParam0)
{
	return func_8(*uParam0, 1);
}

bool func_15(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17411.f_2565[iVar1]), iVar2);
}

bool func_16()
{
	if (!func_50() && func_51(1))
	{
		return true;
	}
	return false;
}

void func_17(int iParam0, bool bParam1)
{
	func_52(iParam0, &iVar0, &iVar1);
	if (!func_53(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_54(iVar0, iVar1);
}

bool func_18(var uParam0)
{
	if (func_55(uParam0))
	{
		return true;
	}
	func_56(uParam0);
	func_57(uParam0);
	func_58(uParam0);
	func_59(uParam0);
	if (func_14(uParam0))
	{
		func_60(uParam0);
	}
	return false;
}

void func_19()
{
	if (func_33(8, 255))
	{
		return;
	}
	func_61(3);
}

void func_20()
{
	if (func_33(8, 255))
	{
		return;
	}
	func_62(3);
}

bool func_21(var uParam0, var uParam1)
{
	iVar0 = get_number_of_events(1);
	bVar1 = false;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	iVar9 = 0;
	iVar9 = 0;
	while (iVar9 < iVar0)
	{
		iVar8 = get_event_at_index(1, iVar9);
		switch (iVar8)
		{
			case -507840394:
				if (!get_event_data(1, iVar9, &Var2, 6))
				{
				}
				else if (Var2 != 47)
				{
				}
				else
				{
					bVar1 = func_63(uParam0, uParam1, &Var2);
					if (bVar1)
					{
						return true;
					}
					bVar1 = func_64(uParam0, uParam1, &Var2);
					if (bVar1)
					{
						return true;
					}
				}
		}
		iVar9++;
	}
	return false;
}

bool func_22(var uParam0, var uParam1)
{
	return true;
}

void func_23(var uParam0)
{
}

void func_24(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (does_entity_exist(&(uParam0->f_4[iVar0])))
		{
			if (network_has_control_of_entity(&(uParam0->f_4[iVar0])))
			{
				set_ped_config_flag(&(uParam0->f_4[iVar0]), 467, false);
				set_ped_config_flag(&(uParam0->f_4[iVar0]), 277, false);
				set_ped_config_flag(&(uParam0->f_4[iVar0]), 209, false);
				set_ped_config_flag(&(uParam0->f_4[iVar0]), 208, false);
				set_ped_as_no_longer_needed(uParam0->f_4[iVar0]);
			}
		}
		iVar0++;
	}
}

bool func_25(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = _0xf260af6f43953316(iParam0);
	if (!network_does_network_id_exist(iVar0))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!is_bit_set(Global_1291734->f_11.f_320, iVar1))
		{
			Global_1291734->f_11.f_322[iVar1]->f_1 = iParam0;
			Global_1291734->f_11.f_322[iVar1]->f_2 = iParam1;
			Global_1291734->f_11.f_322[iVar1] = bParam2;
			func_44(&(Global_1291734->f_11.f_322[iVar1]->f_3));
			set_bit(&(Global_1291734->f_11.f_320), iVar1);
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_26(int iParam0, bool bParam1)
{
	if (func_65(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 9)
		{
			iVar0 = get_ped_in_vehicle_seat(iParam0, iVar1);
			if (does_entity_exist(iVar0))
			{
				if (network_has_control_of_entity(iVar0))
				{
					if (!bParam1 || is_entity_dead(iVar0))
					{
						_0xe0b61ed8bb37712f(iVar0);
					}
				}
			}
			iVar1++;
		}
	}
}

void func_27(int iParam0)
{
	iVar0 = network_player_id_to_int();
	(*Global_1291106)[iVar0]->f_2 = ((*Global_1291106)[iVar0]->f_2 - ((*Global_1291106)[iVar0]->f_2 && iParam0));
}

void func_28()
{
	func_66(97);
	func_66(98);
	func_66(99);
	func_66(100);
	Global_1291734->f_581.f_77 = { func_67() };
	Global_1291734->f_581.f_81 = -1;
	Global_1904087->f_536 = 0;
	Global_1904087->f_537 = get_game_timer();
}

bool func_29()
{
	return Global_1139381->f_5560.f_132;
}

void func_30(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	bVar0 = true;
	if (bParam3)
	{
		bVar0 = false;
	}
	if (func_68(iParam1, bVar0))
	{
		return;
	}
	if (Global_1901947->f_716.f_41 < 1)
	{
		if (func_69(&(Global_1296859->f_154[&Global_1296859]), iParam1))
		{
			if (2 == iParam0 || 3 == iParam0)
			{
				func_17(767, 0);
			}
			return;
		}
	}
	if (!func_70(iParam0) && Global_1139381->f_5560.f_2 == iParam0)
	{
		if (Global_17411.f_2621.f_1 >= (Global_1296859->f_21 - func_71(iParam0)))
		{
			return;
		}
	}
	if (((iParam0 == 1 && Global_1139381->f_5560.f_1 != 1) && Global_1139381->f_5560.f_1 != 0) && Global_1139381->f_5560.f_9 == Global_1296859->f_21)
	{
		return;
	}
	if (iParam0 == 1 || iParam0 == 9)
	{
		iVar1 = iParam1;
		_0x31010318ba9897ac(&uVar2, iVar1);
		Var3.f_6 = 255;
		Var3.f_4 = 4;
		Var3.f_6 = iParam1;
		Var3.f_7 = 3;
		func_72(&Var3, uVar2);
	}
	if (iParam1 != 255)
	{
		Global_1139381->f_5560.f_3 = func_73(iParam1, 1);
		Global_1139381->f_5560.f_4 = func_74(iParam1, 0, 1);
		Global_1139381->f_5560.f_5 = iParam1;
	}
	else
	{
		Global_1139381->f_5560.f_3 = 0f;
		Global_1139381->f_5560.f_4 = 0;
		Global_1139381->f_5560.f_5 = 255;
	}
	Global_1139381->f_5560.f_1 = iParam0;
	Global_1139381->f_5560.f_9 = Global_1296859->f_21;
}

void func_31(int iParam0, int iParam1, char* sParam2)
{
	iVar0 = func_75(iParam0, 1, 59806960);
	if (iVar0 <= 0)
	{
		return;
	}
	if (!_network_is_money_balance_not_less_than(iVar0, 0))
	{
		return;
	}
	if (!func_76(iParam0, 1, 59806960))
	{
		return;
	}
	iVar1 = func_77(iParam0, sParam2, 1, 1, 0, 59806960);
	if (iVar1 == -1)
	{
		return;
	}
	func_78(iParam1, iVar0, 0);
}

void func_32()
{
	Global_1139381->f_5560.f_132 = 0;
}

bool func_33(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return ((*Global_1291106)[iParam1]->f_2 && iParam0) != 0;
}

void func_34(int iParam0)
{
	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_35(int iParam0, int iParam1)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!_network_is_player_index_valid(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = int_to_playerindex(iVar8);
			if (!network_is_player_active(iVar7))
			{
			}
			else
			{
				_0x31010318ba9897ac(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		_0x31010318ba9897ac(&uVar6, network_player_id_to_int());
	}
	trigger_script_event(1, &Var0, 6, 0, &uVar6);
}

bool func_36(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_37(bool bParam0, bool bParam1)
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

bool func_38(var uParam0, var uParam1)
{
	return false;
}

void func_39(var uParam0)
{
	bVar0 = false;
	if (func_80(255) == 1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_81(uParam0->f_2))
		{
			if (!func_8(*uParam0, 256))
			{
				_0xe1bc73d6815ba361(_0xf260af6f43953316(uParam0->f_3), 1, 256);
				func_13(uParam0, 256);
			}
			_0x7182edda1ee7db5a(_0xf260af6f43953316(uParam0->f_3));
		}
		else if (func_8(*uParam0, 256))
		{
			_0xe1bc73d6815ba361(_0xf260af6f43953316(uParam0->f_3), 0, 256);
			func_46(uParam0, 256);
		}
	}
	else if (func_8(*uParam0, 256))
	{
		func_46(uParam0, 256);
	}
}

void func_40(var uParam0)
{
	if (!_network_is_player_index_valid(uParam0->f_2))
	{
		func_46(uParam0, 512);
		return;
	}
	if (!network_is_player_active(uParam0->f_2))
	{
		func_46(uParam0, 512);
		return;
	}
	if (func_14(uParam0))
	{
		func_46(uParam0, 512);
		return;
	}
	iVar0 = player_id();
	if (!_network_is_player_index_valid(uParam0->f_2) || !network_is_player_active(uParam0->f_2))
	{
		func_46(uParam0, 512);
		return;
	}
	iVar1 = _0x901e0dc25080c8b9(uParam0->f_2);
	iVar2 = _0x901e0dc25080c8b9(iVar0);
	if (iVar1 == iVar2)
	{
		if (!func_8(*uParam0, 512))
		{
			func_13(uParam0, 512);
			func_46(uParam0, 1024);
		}
	}
	else
	{
		if (func_8(*uParam0, 512))
		{
			func_46(uParam0, 512);
			if (is_ped_in_vehicle(player_ped_id(), uParam0->f_3, true))
			{
				func_13(uParam0, 1024);
			}
		}
		if (func_8(*uParam0, 1024))
		{
			if (is_ped_in_vehicle(player_ped_id(), uParam0->f_3, false))
			{
				if (!func_82(player_ped_id(), 451360105))
				{
					task_leave_vehicle(player_ped_id(), uParam0->f_3, 64, 0);
				}
			}
			else if (is_ped_in_vehicle(player_ped_id(), uParam0->f_3, true))
			{
			}
			else
			{
				func_46(uParam0, 1024);
			}
		}
	}
}

bool func_41(var uParam0, var uParam1)
{
	return false;
}

bool func_42(var uParam0, var uParam1)
{
	if (!func_8(*uParam0, 128))
	{
		if (!func_83(uParam0))
		{
			return false;
		}
		if (func_84(uParam0->f_3))
		{
			return false;
		}
		func_85(&(uParam0->f_24), 0);
		func_13(uParam0, 128);
		func_86(uParam0, uParam1);
		func_57(uParam0);
		func_87(uParam0);
	}
	if (!func_14(uParam0))
	{
		return false;
	}
	if (!func_45(&(uParam0->f_24), 5f))
	{
		return false;
	}
	return true;
}

bool func_43()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

void func_44(var uParam0)
{
	func_88(uParam0, 0f);
}

bool func_45(var uParam0, float fParam1)
{
	if (!func_4(uParam0))
	{
		return false;
	}
	if (func_89(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_46(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_47(var uParam0)
{
	return true;
}

bool func_48(var uParam0)
{
	if (!func_83(uParam0))
	{
		if (_0xa19447d83294e29f(uParam0->f_3, &iVar0, &uVar1))
		{
			iVar3 = 0;
			iVar2 = 0;
			while (iVar2 < 6)
			{
				if (!does_entity_exist(&(uParam0->f_4[iVar2])))
				{
					uParam0->f_4[iVar2] = func_90(uParam0->f_3, iVar2);
					if (does_entity_exist(&(uParam0->f_4[iVar2])))
					{
						iVar3++;
						_0x931b241409216c1f(get_player_ped(uParam0->f_2), &(uParam0->f_4[iVar2]), 0);
						if (network_has_control_of_entity(&(uParam0->f_4[iVar2])))
						{
							set_entity_as_mission_entity(&(uParam0->f_4[iVar2]), true, false);
							set_ped_config_flag(&(uParam0->f_4[iVar2]), 467, true);
							set_ped_config_flag(&(uParam0->f_4[iVar2]), 277, true);
							set_ped_config_flag(&(uParam0->f_4[iVar2]), 209, true);
							set_ped_config_flag(&(uParam0->f_4[iVar2]), 208, true);
						}
					}
				}
				iVar2++;
			}
			if (iVar3 < iVar0)
			{
			}
			else if (iVar3 == iVar0)
			{
				func_13(uParam0, 64);
				return true;
			}
			else if (iVar3 > iVar0)
			{
				func_13(uParam0, 64);
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_49(var uParam0)
{
	return true;
}

bool func_50()
{
	if (func_91())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1904651[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_51(bool bParam0)
{
	if (func_92())
	{
		return false;
	}
	if ((!is_screen_faded_in() || is_screen_fading_in()) || is_screen_fading_out())
	{
		return false;
	}
	if (func_93(&(Global_1102219->f_4), 1, 5))
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_50())
		{
			return false;
		}
	}
	if ((Global_13 || Global_1048584) // PointerArith || func_94())
	{
		return false;
	}
	if (!func_95())
	{
		return false;
	}
	if (func_96())
	{
		return false;
	}
	if (_0xf236c84c6adfcb2f())
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if ((Global_1915715->f_20638 && Global_1915715->f_20241.f_43 == 2) && Global_1940311->f_1)
	{
		return false;
	}
	if (func_97())
	{
		return false;
	}
	return true;
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_53(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_98(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_99(iParam0))
	{
		return false;
	}
	if (func_100(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_101(iParam0, 1)) || func_102(32768))
	{
		if (!func_101(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_95())
	{
		return false;
	}
	return true;
}

void func_54(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_55(var uParam0)
{
	return false;
}

void func_56(var uParam0)
{
	if (!func_103(uParam0->f_2))
	{
		return;
	}
	switch (func_104(uParam0))
	{
		case 0:
			break;
		case 1:
			if (func_14(uParam0))
			{
				func_105(uParam0);
				func_27(4);
				func_27(2);
			}
			break;
		case 2:
			if (func_14(uParam0))
			{
				func_105(uParam0);
				func_17(79, 1);
				func_27(4);
				func_27(2);
			}
			break;
	}
}

void func_57(var uParam0)
{
	func_106(uParam0);
}

void func_58(var uParam0)
{
	iVar0 = uParam0->f_3;
	iVar1 = uParam0->f_2;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return;
	}
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	if (!is_vehicle_driveable(iVar0, false, false))
	{
		return;
	}
	iVar3 = 0;
	_0xe195c5a82156321d(iVar0, &uVar2);
	if (Global_1291106[iVar1] & 1 != 0)
	{
		if (!func_107(uVar2, 1))
		{
			iVar3 = 1;
		}
		if (Global_1291106[iVar1] & 32 != 0)
		{
			if (!func_107(uVar2, 32))
			{
				iVar3 |= 32;
			}
		}
	}
	else
	{
		if (Global_1291106[iVar1] & 2 != 0)
		{
			if (!func_107(uVar2, 2))
			{
				iVar3 |= 2;
			}
		}
		if (Global_1291106[iVar1] & 4 != 0)
		{
			if (!func_107(uVar2, 4))
			{
				iVar3 |= 4;
			}
		}
		if (Global_1291106[iVar1] & 8 != 0)
		{
			if (!func_107(uVar2, 8))
			{
				iVar3 |= 8;
			}
		}
		if (Global_1291106[iVar1] & 64 != 0)
		{
			if (!func_107(uVar2, 64))
			{
				iVar3 |= 64;
			}
		}
		if (Global_1291106[iVar1] & 128 != 0)
		{
			if (!func_107(uVar2, 128))
			{
				iVar3 |= 128;
			}
		}
		if (Global_1291106[iVar1] & 256 != 0)
		{
			if (!func_107(uVar2, 256))
			{
				iVar3 |= 256;
			}
		}
		if (Global_1291106[iVar1] & 16 != 0)
		{
			if (!func_107(uVar2, 16))
			{
				iVar3 = 16;
			}
		}
		if (Global_1291106[iVar1] & 512 != 0)
		{
			if (!func_107(uVar2, 512))
			{
				iVar3 |= 512;
			}
		}
		if (func_107(uVar2, 1024))
		{
			if (!func_107(uVar2, 1024))
			{
				iVar3 |= 1024;
			}
		}
	}
	if (iVar3 != 0)
	{
		_0xe2487779957fe897(iVar0, iVar3);
	}
}

void func_59(var uParam0)
{
	if (!func_108(uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_3;
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = player_ped_id();
	if (!func_109(iVar0, iVar1, &uVar2))
	{
		return;
	}
	func_110(iVar0);
	iVar3 = uParam0->f_2;
	if (Global_1291106[iVar3] & 16 != 0 || Global_1291105 & 32 != 0)
	{
		if (func_16())
		{
			func_17(80, 1);
		}
	}
	else if (func_16())
	{
		func_17(81, 1);
	}
}

void func_60(var uParam0)
{
	iVar0 = uParam0->f_3;
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	iVar2 = _0x7c803bdc8343228d(iVar0);
	if (!_network_is_player_index_valid(iVar2))
	{
		return;
	}
	iVar3 = get_player_ped(iVar2);
	if (!does_entity_exist(iVar3))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		iVar5 = &uParam0->f_4[iVar4];
		if (does_entity_exist(iVar5))
		{
			func_111(iVar3, iVar5);
		}
		iVar4++;
	}
	iVar6 = _0xb729679356a889ae(iVar0);
	if (is_entity_a_ped(iVar6))
	{
		iVar7 = get_ped_index_from_entity_index(iVar6);
		if (iVar7 == iVar3)
		{
			return;
		}
	}
	if (!network_has_control_of_entity(iVar0))
	{
		network_request_control_of_entity(iVar0);
		return;
	}
	_0x838c216c2b05a009(iVar3, iVar0);
}

void func_61(int iParam0)
{
	func_35(2, iParam0);
}

void func_62(int iParam0)
{
	func_35(3, iParam0);
}

int func_63(var uParam0, var uParam1, int iParam2)
{
	return 0;
}

int func_64(var uParam0, var uParam1, int iParam2)
{
	iVar0 = iParam2->f_4;
	switch (iParam2->f_5)
	{
		case -1:
		case 0:
		case 2:
		case 4:
			return 0;
	}
	switch (iVar0)
	{
		case 0:
		case 3:
			if (func_112(uParam0, iParam2))
			{
				func_113(uParam0);
				return 1;
			}
			break;
		case 16:
			if (func_112(uParam0, iParam2))
			{
				func_13(uParam0, 4096);
				func_113(uParam0);
				return 1;
			}
			break;
		case 1:
		case 2:
			if (func_112(uParam0, iParam2))
			{
				func_114(uParam0);
				return 1;
			}
			break;
		case 6:
			if (func_112(uParam0, iParam2))
			{
				func_115(uParam0, uParam1);
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 12:
			func_116(uParam0, iParam2, 0);
			break;
		case 13:
			func_116(uParam0, iParam2, 1);
			break;
		case 14:
			func_117(uParam0, iParam2);
			break;
		case 15:
			if (func_112(uParam0, iParam2))
			{
				if (network_has_control_of_entity(uParam0->f_3))
				{
					if (!func_65(uParam0->f_3))
					{
						_0x141bc64c8d7c5529(uParam0->f_3);
						_0xeba2081e0a5f4d17(uParam0->f_3);
					}
				}
			}
			break;
	}
	return 0;
}

bool func_65(int iParam0)
{
	iVar0 = get_vehicle_number_of_passengers(iParam0);
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

void func_66(int iParam0)
{
	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

struct<4> func_67()
{
	return Var0;
}

bool func_68(int iParam0, bool bParam1)
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (Global_1572887->f_106.f_75 > 10)
	{
		return true;
	}
	if (!func_118(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	if (func_118(func_119()))
	{
		if (!func_74(&(Global_1296859->f_154[&Global_1296859]), 0, 1) && func_120(iParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_69(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iVar0))
	{
		return false;
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0))
	{
		return false;
	}
	if (_0xfe53b1f8d43f19bf(iParam0, iParam1) == 2 || Global_1108365->f_34[iVar0]->f_10)
	{
		return true;
	}
	return false;
}

bool func_70(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return false;
		case 12:
			return false;
		case 10:
			return false;
		case 11:
			return false;
		case 9:
			return false;
		default:
			break;
	}
	return true;
	return true;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 5;
		case 12:
			return 5;
		case 10:
			return 5;
		case 11:
			return 10;
		case 9:
			return 10;
		default:
			break;
	}
	return 0;
	return 0;
}

void func_72(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_121(*uParam0);
}

float func_73(int iParam0, bool bParam1)
{
	if (!Global_1139381->f_5560)
	{
		return 0f;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return Global_17411.f_2621;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_0x149a2751ab66ac02(_0x901e0dc25080c8b9(iParam0)) > 1 && bParam1) && (*Global_1100469)[iVar0]->f_18 >= (*Global_1100469)[iVar0]->f_45)
	{
		return (*Global_1100469)[iVar0]->f_18;
	}
	return (*Global_1100469)[iVar0]->f_45;
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
{
	if (!Global_1139381->f_5560)
	{
		return false;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return ((Global_17411.f_2621.f_2 == 2 || (bParam1 && Global_17411.f_2621.f_2 == 1)) || (bParam2 && Global_17411.f_2621.f_2 == 3));
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return (((*Global_1100469)[iVar0]->f_48 == 2 || (bParam1 && (*Global_1100469)[iVar0]->f_48 == 1)) || (bParam2 && (*Global_1100469)[iVar0]->f_48 == 3));
}

int func_75(int iParam0, bool bParam1, int iParam2)
{
	if (!func_122(iParam0, 0))
	{
		return 0;
	}
	return func_123(iParam0, iParam2, 1, bParam1, 1, 0);
}

bool func_76(int iParam0, int iParam1, int iParam2)
{
	iVar0 = (func_75(iParam0, 0, iParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_124(iVar0);
	}
	return bVar1;
}

int func_77(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!func_122(iParam0, 0))
	{
		return -1;
	}
	if (func_125(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_126())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_123(iParam0, iParam5, 1, 0, 1, 2084597891) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_123(iParam0, iParam5, 1, 0, 1, 773203532) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!_network_is_money_balance_not_less_than(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_127(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35]->f_1 * iParam2);
			if (!func_128(&(Var2[iVar35]), 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_129(0))
	{
		if (iVar0 > 0)
		{
			func_130(2084597891, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_130(773203532, iVar1, -142743235, 0, 0);
		}
		else if (func_131(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35]->f_1 * iParam2);
				func_130(&(Var2[iVar35]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_132(-1406934746, &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_133(iVar52, Var53);
	}
	return iVar52;
}

void func_78(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_134(iParam0);
	if (func_135(iParam0) && !bParam2)
	{
		return;
	}
	Global_1291734->f_11.f_523[iParam0] = func_136(_create_var_string(2, sVar0, sParam1), 10000, 0, 0, 0, 1);
}

bool func_79(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

int func_80(int iParam0)
{
	if (iParam0 == 255)
	{
		return &Global_1102219;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return Global_1100469[iParam0];
	}
	return 26;
}

bool func_81(int iParam0)
{
	if (func_33(32, iParam0))
	{
		return true;
	}
	return false;
}

bool func_82(int iParam0, int iParam1)
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

bool func_83(var uParam0)
{
	return func_8(*uParam0, 64);
}

bool func_84(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	else if (!is_vehicle_driveable(iParam0, false, false))
	{
		return false;
	}
	if (func_137(iParam0, 0) && func_137(iParam0, 1))
	{
		return false;
	}
	return true;
}

void func_85(var uParam0, bool bParam1)
{
	if (bParam1 || !func_4(uParam0))
	{
		func_44(uParam0);
	}
}

void func_86(var uParam0, var uParam1)
{
}

void func_87(var uParam0)
{
	if (func_14(uParam0))
	{
		func_17(70, 1);
	}
}

void func_88(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_138() - fParam1);
	func_139(uParam0, 1);
	func_140(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_89(var uParam0)
{
	if (!func_4(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_141(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_138() - uParam0->f_1);
}

int func_90(int iParam0, int iParam1)
{
	iVar0 = _get_ped_in_draft_seat(iParam0, iParam1);
	if (!does_entity_exist(iVar0))
	{
	}
	if (is_entity_dead(iVar0))
	{
	}
	return iVar0;
}

bool func_91()
{
	return Global_1904651->f_8683 != -1;
}

bool func_92()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_93(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_94()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

bool func_95()
{
	if (!func_142())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_96()
{
	return Global_1896738->f_382;
}

bool func_97()
{
	if (!func_142())
	{
		return false;
	}
	uVar0 = Global_1904651->f_8685;
	Global_1904651->f_8685 = 0;
	return uVar0;
}

bool func_98(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_99(int iParam0)
{
	if (func_101(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_100(int iParam0)
{
	if (Global_1904651->f_33[iParam0]->f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651->f_33[iParam0]->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651->f_33[iParam0]->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3534[iVar0] - iVar1);
			if (Global_39.f_3534[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651->f_33[iParam0]->f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_101(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_102(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_103(int iParam0)
{
	if (func_33(4, iParam0))
	{
		return true;
	}
	return false;
}

int func_104(var uParam0)
{
	return func_143(uParam0, 1086324736, 1094713344, 1077936128, 1090519040);
}

void func_105(var uParam0)
{
	if (func_14(uParam0))
	{
		func_35(15, 3);
	}
}

void func_106(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_144(uParam0);
		return;
	}
	iVar0 = _0xffec4b0a1a3ed515(uParam0->f_3, -1);
	if (does_entity_exist(iVar0))
	{
		if (iVar0 == player_ped_id())
		{
			func_144(uParam0);
			return;
		}
	}
	if (does_blip_exist(uParam0->f_1))
	{
		if (func_103(uParam0->f_2))
		{
			_blip_set_modifier(uParam0->f_1, -272772079);
		}
		else
		{
			_set_blip_flash_style(uParam0->f_1, -272772079);
		}
		if (!does_entity_exist(iVar0))
		{
			_set_blip_flash_style(uParam0->f_1, -1380599892);
			_set_blip_flash_style(uParam0->f_1, 453356795);
			return;
		}
		if (!is_ped_a_player(iVar0))
		{
			_set_blip_flash_style(uParam0->f_1, -1380599892);
			_set_blip_flash_style(uParam0->f_1, 453356795);
			return;
		}
		iVar1 = network_get_player_index_from_ped(iVar0);
		if (!_network_is_player_index_valid(iVar1))
		{
			_set_blip_flash_style(uParam0->f_1, 453356795);
			return;
		}
		if (func_145(iVar1, 0))
		{
			_set_blip_flash_style(uParam0->f_1, -1380599892);
			_blip_set_modifier(uParam0->f_1, 453356795);
		}
		return;
	}
	if (_0x9fa00e2fc134a9d0(uParam0->f_3))
	{
		return;
	}
	uParam0->f_1 = _blip_add_for_entity(768962966, uParam0->f_3);
	iVar2 = get_entity_model(uParam0->f_3);
	if (is_model_valid(iVar2))
	{
		iVar3 = func_146(iVar2);
		if (func_122(iVar3, 0))
		{
			_set_blip_name_from_player_string(uParam0->f_1, _create_var_string(0, func_147(iVar3)));
		}
		else
		{
			set_blip_name_from_text_file(uParam0->f_1, func_148(2));
		}
	}
	else
	{
		set_blip_name_from_text_file(uParam0->f_1, func_148(2));
	}
	_blip_set_modifier(uParam0->f_1, 580546400);
}

bool func_107(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_108(var uParam0)
{
	iVar0 = uParam0->f_3;
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	if (is_entity_dead(iVar1))
	{
		return false;
	}
	if (!func_109(iVar0, iVar1, &uVar2))
	{
		return false;
	}
	Var3 = { uParam0->f_11 };
	iVar10 = uParam0->f_2;
	iVar11 = player_id();
	if (iVar10 == iVar11)
	{
		return false;
	}
	iVar12 = iVar10;
	iVar13 = func_149(iVar12);
	if (func_150(iVar12))
	{
		iVar14 = func_151(iVar13);
		if (iVar14 == 15 || iVar14 == 10)
		{
			if (func_152(iVar13, iVar0))
			{
				return true;
			}
		}
	}
	if (Global_1291106[iVar12] & 16 != 0 || Global_1291105 & 32 != 0)
	{
		return false;
	}
	if (Global_1291106[iVar12] & 2 != 0 || Global_1291105 & 4 != 0)
	{
		if (_0x901e0dc25080c8b9(iVar11) == _0x901e0dc25080c8b9(iVar10))
		{
			return false;
		}
	}
	Var15 = { func_153(iVar10) };
	if (Global_1291106[iVar12] & 4 != 0 || Global_1291105 & 8 != 0)
	{
		if (func_154(Var15, Var3))
		{
			return false;
		}
	}
	if (Global_1291106[iVar12] & 8 != 0 || Global_1291105 & 16 != 0)
	{
		if (network_is_friend(&Var3))
		{
			return false;
		}
	}
	return true;
}

bool func_109(int iParam0, int iParam1, var uParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar3 = -1;
	iVar4 = (get_vehicle_max_number_of_passengers(iParam0) - 1);
	iVar2 = iVar3;
	while (iVar2 <= iVar4)
	{
		iVar1 = iVar2;
		iVar0 = _0xffec4b0a1a3ed515(iParam0, iVar1);
		if (!does_entity_exist(iVar0))
		{
		}
		else if (iVar0 == iParam1)
		{
			*uParam2 = iVar1;
			return true;
		}
		iVar2++;
	}
	return false;
}

void func_110(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_vehicle_driveable(iParam0, false, false))
	{
		return;
	}
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_109(iParam0, iVar0, &uVar1))
	{
		return;
	}
	if (_0x660639bc60157048(iVar0, iParam0))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar0;
	Var2.f_4 = iParam0;
	task_exit_transport(&Var2);
}

void func_111(int iParam0, int iParam1)
{
	iVar0 = _0xf103823ffe72bb49(iParam1);
	if (is_entity_a_ped(iVar0))
	{
		iVar1 = get_ped_index_from_entity_index(iVar0);
		if (iVar1 == iParam0)
		{
			return;
		}
	}
	if (!network_has_control_of_entity(iParam1))
	{
		network_request_control_of_entity(iParam1);
		return;
	}
	_0x931b241409216c1f(iParam0, iParam1, 0);
}

bool func_112(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1->f_1)
	{
		return false;
	}
	return true;
}

void func_113(var uParam0)
{
	if (!func_8(*uParam0, 4))
	{
		func_13(uParam0, 4);
	}
}

void func_114(var uParam0)
{
	if (!func_8(*uParam0, 4))
	{
		func_13(uParam0, 2);
	}
}

void func_115(var uParam0, var uParam1)
{
	if (func_4(&(uParam0->f_18)))
	{
		func_5(&(uParam0->f_18));
	}
	if (func_4(&(uParam0->f_21)))
	{
		func_5(&(uParam0->f_21));
	}
	if (network_has_control_of_entity(uParam0->f_3))
	{
		func_155(uParam0, 0f, 0f, 0f);
	}
	if (!func_14(uParam0))
	{
		return;
	}
	if (func_33(4, uParam0->f_2))
	{
		return;
	}
	_0xe67af24c5a3b6058(1651757805, &(uParam1->f_7), 0);
	func_66(100);
	func_156(4);
}

void func_116(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = uParam0->f_3;
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	iVar1 = player_id();
	iVar2 = player_ped_id();
	iVar3 = uParam0->f_2;
	if (!_network_is_player_index_valid(iVar3))
	{
		return;
	}
	iVar4 = iParam1->f_1;
	if (!_network_is_player_index_valid(iVar4))
	{
		return;
	}
	if (iVar3 != iVar4)
	{
		return;
	}
	bVar5 = false;
	if (iVar1 == iVar3)
	{
		bVar5 = true;
	}
	if (bVar5 && !bParam2)
	{
		return;
	}
	if (!func_109(iVar0, iVar2, &uVar6))
	{
		return;
	}
	func_157(iVar0);
	if (!bVar5)
	{
		if (func_16())
		{
			func_17(80, 1);
		}
	}
}

void func_117(var uParam0, int iParam1)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	iVar2 = uParam0->f_3;
	if (!does_entity_exist(iVar2))
	{
		return;
	}
	iVar3 = iParam1->f_1;
	if (!_network_is_player_index_valid(iVar3))
	{
		return;
	}
	if (iVar0 == iVar3)
	{
		return;
	}
	if (iVar2 != _0xb9050a97594c8832(iVar3))
	{
		return;
	}
	if (!func_109(iVar2, iVar1, &uVar4))
	{
		return;
	}
	func_157(iVar2);
}

bool func_118(struct<2> Param0)
{
	if (!func_158(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_159(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_119()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_160(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_160(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_120(int iParam0, bool bParam1)
{
	if (!Global_1139381->f_5560)
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	if (func_107((*Global_1100469)[iVar0]->f_50, 2))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_161())
		{
			return true;
		}
	}
	if (func_162((*Global_1056141)[iVar0]->f_2))
	{
		return true;
	}
	return false;
}

void func_121(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

bool func_122(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_123(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_163(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_164(iParam0))
	{
		return func_166(func_165(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_127(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_124(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_167() == 0)
	{
		return func_168(iParam0);
	}
	return iParam0 <= func_169();
}

int func_125(int iParam0)
{
	if (!func_122(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_126()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

bool func_127(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_122(iParam0, 0))
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
		func_170(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_128(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_122(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_125(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_171(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_172(iParam0, 0);
	}
	if (func_173(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_174(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_175(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_174(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_129(bool bParam0)
{
	if (func_167() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_174(bParam0));
}

bool func_130(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_122(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_173(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_176(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_177(iParam0, bParam4, 0) };
	Var6 = { func_178(iParam0, Var1, Var1.f_4, bParam4) };
	return func_179(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_131(int iParam0)
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

int func_132(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_180(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_182(func_181(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_183(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_133(int iParam0, struct<17> Param1)
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

char* func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 1:
			return "NSHM_HORSE_MOUNT_RESPAWNING";
		case 3:
			return "NSHM_HORSE_MOUNT_SWAPPED_RECENTLY";
		case 2:
			return "NSHM_HORSE_MOUNT_DISMISSED_RECENTLY";
		case 4:
			return "NSHM_HORSE_NO_HORSES_AVAILABLE";
		case 5:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 6:
			return "NSHM_HORSE_CALL_HORSE_DISABLED";
		case 7:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD";
		case 8:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_ALT";
		case 9:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_VET_FEES";
		case 10:
			return "NSHM_HORSE_PLAYER_VEHICLE_NOT_DISMISSED";
		case 11:
			return "NSHM_HORSE_CALL_HORSE_VEHICLE";
		case 13:
			return "NSHM_VEHICLE_CANNOT_CONTACT_STABLE";
		case 28:
			return "NSHM_HORSE_CANT_MOUNT_PLAYER_HORSE";
		case 15:
			return "NSHM_HORSE_PARLEYED_WITH_OWNER";
		case 14:
			return "NSHM_HORSE_YOU_DO_NOT_OWN_HORSE";
		case 16:
			return "NSHM_HORSE_OWNER_KICKED_YOU";
		case 17:
			return "NSHM_HORSE_DIED";
		case 18:
			return "NSHM_HORSE_DIED_INSURANCE";
		case 19:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION_INSURANCE";
		case 20:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION";
		case 22:
			return "NSHM_HORSE_PENALTY_COOLDOWN";
		case 23:
			return "NSHM_HORSE_PENALTY_COOLDOWN_INSURANCE";
		case 24:
			return "NSHM_HORSE_PENALTY_COOLDOWN_COMPLETE";
		case 21:
			return "NSHM_HORSE_REVIVE_COOLDOWN_COMPLETE";
		case 25:
			return "NSHM_HORSE_INSURANCE_EXPIRED";
		case 26:
			return "NSHM_HORSE_CANNOT_DISMISS_CARRYING_OBJECT";
		case 27:
			return "NSHM_HORSE_MOUNTED_POSSE_MEMBER";
		case 29:
			return "NSHM_HORSE_BAD_SPORT_KILLED_ENEMY_HORSE";
		case 31:
			return "NSHM_VEHICLE_BAD_SPORT_DESTROYED_ENEMY_VEHICLE";
		case 30:
			return "NSHM_VEHICLE_MOUNTED_POSSE_MEMBER";
		default:
			break;
	}
	return "";
}

bool func_135(int iParam0)
{
	return func_184(&(Global_1291734->f_11.f_523[iParam0]));
}

var func_136(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_137(int iParam0, int iParam1)
{
	iVar0 = _get_ped_in_draft_seat(iParam0, iParam1);
	if (is_entity_dead(iVar0))
	{
		return 1;
	}
	return 0;
}

float func_138()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_141(var uParam0)
{
	return func_36(*uParam0, 2);
}

bool func_142()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_143(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	vVar4 = { func_185(uParam0) };
	if (!func_186(uParam0))
	{
		return 2;
	}
	if (func_14(uParam0))
	{
		if (func_187(uParam0, &uVar0, fParam2) || vdist(vVar4, get_entity_coords(uParam0->f_3, true, false)) <= fParam3)
		{
			return 1;
		}
		if (func_188(uParam0, 1092616192))
		{
			return 2;
		}
	}
	if (network_has_control_of_entity(uParam0->f_3))
	{
		if (func_189(uParam0, vVar4, &vVar1))
		{
			if (!func_155(uParam0, vVar1))
			{
			}
			else
			{
				vVar4 = { vVar1 };
			}
		}
		if (func_190(vVar4))
		{
			if (func_191(uParam0, 1092616192) == 2)
			{
				return 2;
			}
		}
		else if (!_0x583ae9af9cee0958(uParam0->f_3, vVar4))
		{
			_task_vehicle_drive_to_destination_2(uParam0->f_3, vVar4, iParam1, 1147928963, 2, iParam4, fParam3);
		}
		else if (func_191(uParam0, 1092616192) == 2)
		{
			return 2;
		}
	}
	else
	{
		iVar7 = veh_to_net(uParam0->f_3);
		if (!network_does_network_id_exist(iVar7))
		{
		}
		else
		{
			iVar8 = _0xa6c0787443c9583e(iVar7);
			if (!network_is_player_active(iVar8))
			{
				if (func_191(uParam0, 1092616192) == 2)
				{
					return 2;
				}
			}
		}
	}
	return 0;
}

void func_144(var uParam0)
{
	if (does_blip_exist(uParam0->f_1))
	{
		remove_blip(&(uParam0->f_1));
	}
}

bool func_145(int iParam0, bool bParam1)
{
	if (iParam0 == 255)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (iParam0 == Global_1296859->f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!&Global_1296859->f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return true;
		}
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iVar0))
	{
		return true;
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28347), iVar0))
	{
		return false;
	}
	iVar1 = get_player_team(Global_1296859->f_10);
	iVar2 = get_player_team(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (_0x81fb74c83c2ed69f(iParam0))
	{
		return true;
	}
	return false;
}

int func_146(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1698498246:
			return -553831738;
		case -1772561076:
			return 1437065740;
		default:
			break;
	}
	return 0;
}

int func_147(int iParam0)
{
	if (!func_122(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_192(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

var func_148(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	func_193();
	Global_1904087->f_106.f_2 = 1292413058;
	Global_1904087->f_106.f_3 = func_194(iParam0);
	if (!_datafile_get_string(&Var0, &(Global_1904087->f_106)))
	{
		return "";
	}
	return func_195(Var0);
}

int func_149(int iParam0)
{
	return Global_1285193[iParam0];
}

bool func_150(int iParam0)
{
	return (*Global_1285193)[iParam0]->f_1;
}

int func_151(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

bool func_152(int iParam0, int iParam1)
{
	iVar0 = func_151(iParam0);
	vVar1 = { Global_1051439->f_72[iVar0]->f_3 };
	if (iParam0 == 154)
	{
		vVar1 = { func_196(get_player_index()) };
	}
	if (func_190(vVar1))
	{
		return false;
	}
	fVar4 = func_197(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_198(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_198(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

struct<7> func_153(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

bool func_154(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (network_clan_service_is_valid() && network_clan_player_is_active(&uParam0))
	{
		network_clan_player_get_desc(&iVar0, 22, &uParam0);
	}
	else
	{
		return false;
	}
	if (network_clan_service_is_valid() && network_clan_player_is_active(&uParam7))
	{
		network_clan_player_get_desc(&iVar22, 22, &uParam7);
	}
	else
	{
		return false;
	}
	if (iVar0 != iVar22)
	{
		return false;
	}
	return true;
}

bool func_155(var uParam0, vector3 vParam1)
{
	if (!network_has_control_of_entity(uParam0->f_3))
	{
		return false;
	}
	if (!decor_set_int(uParam0->f_3, "SummonPosXY", func_199(vParam1)))
	{
		return false;
	}
	if (!decor_set_float(uParam0->f_3, "SummonPosZ", vParam1.z))
	{
		return false;
	}
	return true;
}

void func_156(int iParam0)
{
	iVar0 = network_player_id_to_int();
	(*Global_1291106)[iVar0]->f_2 = ((*Global_1291106)[iVar0]->f_2 || iParam0);
}

void func_157(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!is_vehicle_driveable(iParam0, false, false))
	{
		return;
	}
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_109(iParam0, iVar0, &uVar1))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar0;
	Var2.f_4 = iParam0;
	task_exit_transport(&Var2);
}

bool func_158(int iParam0)
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

int func_159(int iParam0)
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

struct<2> func_160(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_161()
{
	if (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318)
	{
		return true;
	}
	return false;
}

bool func_162(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Global_1196898->f_78[iVar0]->f_2 && Global_1196898->f_78[iVar0]->f_1 == 2)
				{
					return true;
				}
				iVar0++;
			}
			break;
		case 2:
		case 3:
		case 4:
		case 7:
			if (Global_1572887->f_6)
			{
				if (func_200(Global_1108365->f_935.f_28))
				{
					if (!Global_1108365->f_935.f_19)
					{
						return false;
					}
				}
				if (!func_201())
				{
					return true;
				}
			}
			else if (Global_1048579 && !Global_1572887->f_9)
			{
				if (is_player_control_on(&(Global_1296859->f_154[&Global_1296859])))
				{
					return true;
				}
				if (func_93(&(Global_1102219->f_4), 1, 5))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_163(int iParam0, int iParam1)
{
	if (!func_122(iParam0, 0))
	{
		return false;
	}
	if (func_164(iParam0))
	{
		return func_202(func_165(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_164(int iParam0)
{
	if (func_203(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_165(int iParam0, bool bParam1)
{
	if (!func_122(iParam0, 0))
	{
		return func_205(func_204(iParam0), bParam1);
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

int func_166(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_206(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_167()
{
	return Global_1572887->f_13;
}

bool func_168(int iParam0)
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

int func_169()
{
	if (func_167() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

void func_170(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_207(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_171(int iParam0, int iParam1)
{
	if (!func_122(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_125(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_203(iParam0, 1399091007))
	{
		func_208(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_172(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_209(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_211(&Var0, func_210(0));
	}
	if (!func_212(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_213(iVar14);
	return uVar15;
}

int func_173(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_174(bool bParam0)
{
	if (func_167() == -1)
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

struct<4> func_175(int iParam0, bool bParam1)
{
	Var0 = { func_177(iParam0, bParam1, 0) };
	return func_178(iParam0, Var0, Var0.f_4, bParam1);
}

int func_176(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_214(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_173(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_129(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_215(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_216(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_132(1702063850, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = iParam3;
			Var81.f_7 = iParam2;
			func_133(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_174(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_177(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_217(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_125(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_178(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_210(bParam1) };
			if (bParam2 && func_218(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_219(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_219(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_220(iParam0, &Var6, 1728382685))
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
			Var0 = { func_221(bParam1) };
			switch (func_207(iParam0))
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
			if (func_222(iParam0, -1823706425))
			{
				Var0 = { func_178(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_222(iParam0, -1483207246))
			{
				Var0 = { func_178(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_178(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_222(iParam0, -1653629781))
			{
				Var0 = { func_178(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_223(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_222(iParam0, -1653629781))
			{
				Var0 = { func_178(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_178(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_122(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_174(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_179(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_214(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_223(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_129(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_167() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_132(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_133(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_174(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_180(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_224(uParam1->f_8, iParam0, uVar0, 2048) || func_224(uParam1->f_8, iParam0, uVar0, 32768)) || func_224(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_224(uParam1->f_8, iParam0, uVar0, 4) || func_224(uParam1->f_8, iParam0, uVar0, 256)) || func_224(uParam1->f_8, iParam0, uVar0, 65536)) || func_224(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_224(uParam1->f_8, iParam0, uVar0, 1) || func_224(uParam1->f_8, iParam0, uVar0, 8)) || func_224(uParam1->f_8, iParam0, uVar0, 65536)) || func_224(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_224(uParam1->f_8, iParam0, uVar0, 1) || func_224(uParam1->f_8, iParam0, uVar0, 16)) || func_224(uParam1->f_8, iParam0, uVar0, 2)) || func_224(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_224(uParam1->f_8, iParam0, uVar0, 8) || func_224(uParam1->f_8, iParam0, uVar0, 4096)) || func_224(uParam1->f_8, iParam0, uVar0, 256)) || func_224(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_181(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_182(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_225(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_225(iParam1, 2, 0, 0);
	return -1;
}

int func_183(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_225(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_184(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x59fa676177dbe4c9(iParam0) == 4;
}

Vector3 func_185(var uParam0)
{
	iVar0 = decor_get_int(uParam0->f_3, "SummonPosXY");
	if (iVar0 == 0)
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { func_226(iVar0) };
	vVar1.f_2 = decor_get_float(uParam0->f_3, "SummonPosZ");
	return vVar1;
}

bool func_186(var uParam0)
{
	if (!does_entity_exist(uParam0->f_3))
	{
		return false;
	}
	if (is_entity_dead(uParam0->f_3))
	{
		return false;
	}
	if (!network_is_player_active(uParam0->f_2))
	{
		return false;
	}
	if (!does_entity_exist(get_player_ped(uParam0->f_2)))
	{
		return false;
	}
	return true;
}

bool func_187(var uParam0, var uParam1, float fParam2)
{
	*uParam1 = 0;
	if (!network_is_player_active(uParam0->f_2))
	{
		return true;
	}
	iVar0 = get_player_ped(uParam0->f_2);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return true;
	}
	if (vdist(get_entity_coords(iVar0, true, false), get_entity_coords(uParam0->f_3, true, false)) < fParam2)
	{
		return true;
	}
	if (func_65(uParam0->f_3))
	{
		return true;
	}
	return false;
}

bool func_188(var uParam0, float fParam1)
{
	iVar0 = get_player_ped(uParam0->f_2);
	if (does_entity_exist(iVar0))
	{
		iVar1 = func_227(uParam0->f_3, iVar0, 1060437492);
		if (iVar1 == 1 && get_entity_speed(uParam0->f_3) > 0f)
		{
			if (!func_4(&(uParam0->f_21)))
			{
				func_44(&(uParam0->f_21));
			}
		}
		else if (func_4(&(uParam0->f_21)))
		{
			func_5(&(uParam0->f_21));
		}
	}
	if (!func_4(&(uParam0->f_21)))
	{
		return false;
	}
	if (!func_45(&(uParam0->f_21), fParam1))
	{
		return false;
	}
	return true;
}

bool func_189(var uParam0, vector3 vParam1, Vector3* vParam4)
{
	if (!func_228(uParam0->f_2, uParam0->f_3, vParam4, &fVar0))
	{
		return false;
	}
	if (vdist(*vParam4, vParam1) >= 10f)
	{
		return true;
	}
	if (!_0x583ae9af9cee0958(uParam0->f_3, vParam1))
	{
		if (vdist(get_entity_coords(uParam0->f_3, true, false), vParam1) > 5f)
		{
			return true;
		}
	}
	return false;
}

bool func_190(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_191(var uParam0, float fParam1)
{
	if (get_entity_speed(uParam0->f_3) == 0f)
	{
		if (!func_4(&(uParam0->f_18)))
		{
			func_44(&(uParam0->f_18));
		}
		else if (func_229(&(uParam0->f_18), fParam1))
		{
			return 2;
		}
	}
	else if (func_4(&(uParam0->f_18)))
	{
		func_5(&(uParam0->f_18));
	}
	return 0;
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case -59585102:
			return get_hash_key("KIT_POUCH_REMEDIES_MP");
		case 1018123892:
			return get_hash_key("KIT_POUCH_INGREDIENTS_MP");
		case 982182330:
			return get_hash_key("KIT_POUCH_MATERIALS_MP");
		case -1406390556:
			return get_hash_key("KIT_POUCH_VALUABLES_MP");
		case -1455768246:
			return get_hash_key("KIT_POUCH_KIT_MP");
		case -921879912:
			return get_hash_key("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

void func_193()
{
	Global_1904087->f_106 = Global_1071686->f_28448[49]->f_3;
	Global_1904087->f_106.f_1 = 0;
	Global_1904087->f_106.f_2 = 0;
	Global_1904087->f_106.f_3 = 0;
	Global_1904087->f_106.f_4 = 0;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
		case 0:
			return 1653124001;
		case 1:
			return -430733995;
		case 2:
			return 1501387297;
		case 3:
			return -1143491563;
		case 4:
			return -1460176899;
		case 5:
			return 1003181529;
		default:
			break;
	}
	return 0;
}

var func_195(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

Vector3 func_196(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

float func_197(int iParam0)
{
	iVar0 = func_151(iParam0);
	switch (iVar0)
	{
		case 10:
			return 10f;
		case 29:
			return 70f;
		case 2:
			return 75f;
		case 15:
			if (iParam0 == 63)
			{
				return 40f;
			}
			else
			{
				return 25f;
			}
			break;
	}
	return 10f;
}

float func_198(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_199(struct<2> Param0, var uParam2)
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

bool func_200(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_201()
{
	if (Global_1572887->f_106.f_75 >= 10 && Global_1572887->f_106.f_75 <= 14)
	{
		return true;
	}
	return false;
}

bool func_202(int iParam0, int iParam1, bool bParam2)
{
	if (!func_230(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_231(iParam0, iParam1);
	}
	return true;
}

int func_203(int iParam0, int iParam1)
{
	if (!func_122(iParam0, 0))
	{
		return func_232(func_204(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	return iParam0;
}

int func_205(int iParam0, bool bParam1)
{
	if (!func_233(iParam0, 2))
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

bool func_206(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_230(iParam0))
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
		func_234(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_207(int iParam0)
{
	if (!func_122(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_208(int iParam0, var uParam1, var uParam2)
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

struct<14> func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_210(bool bParam0)
{
	iVar0 = func_174(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_178(923904168, func_217(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_178(923904168, func_217(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_178(923904168, func_217(bParam0), -740156546, 0);
}

void func_211(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_212(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_174(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_213(int iParam0)
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

bool func_214(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_173(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_235(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_216(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_178(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_217(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_174(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_178(1328661203, func_67(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_178(1328661203, func_67(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_178(1328661203, func_67(), -1591664384, bParam0);
}

bool func_218(int iParam0, bool bParam1)
{
	if (func_207(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_236();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_219(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_237(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_220(int iParam0, var uParam1, int iParam2)
{
	if (func_238(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_221(bool bParam0)
{
	iVar0 = func_174(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_178(271701509, func_217(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_178(271701509, func_217(bParam0), 12999093, 0);
}

bool func_222(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_207(iParam0);
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
			if (func_239(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_223(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_240(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_224(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_107(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_225(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_241(iParam0, iParam1, iParam2, iParam3);
}

Vector3 func_226(int iParam0)
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

int func_227(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_242(iParam0, vVar0, iParam2);
}

bool func_228(int iParam0, int iParam1, Vector3* vParam2, float* fParam3)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = get_player_ped(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	vVar1 = { get_entity_coords(iVar0, true, false) };
	vVar4 = { get_entity_coords(iParam1, true, false) };
	if (get_nth_closest_vehicle_node_favour_direction(vVar1, vVar4, 1, vParam2, fParam3, 1, 1077936128, 0))
	{
		return true;
	}
	if (get_nth_closest_vehicle_node_favour_direction(vVar1, vVar4, 0, vParam2, fParam3, 1, 1077936128, 0))
	{
		return true;
	}
	if (get_closest_vehicle_node_with_heading(vVar1, vParam2, fParam3, 1, 3f, 0))
	{
		return true;
	}
	if (!func_243(vVar1, vVar4, vParam2, fParam3))
	{
		return true;
	}
	return false;
}

bool func_229(var uParam0, float fParam1)
{
	if (func_45(uParam0, fParam1))
	{
		func_5(uParam0);
		return true;
	}
	return false;
}

bool func_230(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_231(int iParam0, int iParam1)
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
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iScriptParam_16 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iScriptParam_19 < iScriptParam_16)
	{
		if (&Var0[iScriptParam_19] == iParam1)
		{
			iVar473 = Var0[iScriptParam_19]->f_35;
			iVar475 = 0;
			while (iScriptParam_20 < iScriptParam_18)
			{
				uVar472 = &Var0[iScriptParam_19]->f_36[iScriptParam_20];
				if (iScriptParam_17 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iScriptParam_17))
				{
					return true;
				}
				iVar475 = iScriptParam_20 + 1;
			}
		}
		iVar474 = iScriptParam_19 + 1;
	}
	return false;
}

int func_232(int iParam0, int iParam1)
{
	if (!func_233(iParam0, 2))
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

bool func_233(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_234(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_207(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_235(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((*uParam0)[iVar0]->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((*uParam0)[iVar0]->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_244((*uParam0)[iVar0]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(*uParam0)[*iParam1] = { *(*uParam0)[iVar0] };
				(*uParam0)[*iParam1]->f_4 = (*uParam0)[iVar0]->f_4;
			}
			if ((*uParam0)[iVar0]->f_5 > iParam2)
			{
				(*uParam0)[*iParam1]->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(*uParam0)[*iParam1]->f_5 = (*uParam0)[iVar0]->f_5;
				iParam2 = (iParam2 - (*uParam0)[*iParam1]->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(*uParam0)[iVar0] = { func_67() };
				(*uParam0)[iVar0]->f_4 = 0;
				(*uParam0)[iVar0]->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

bool func_236()
{
	return (func_245(-1185145312, 0, 0, 0) > 0 && func_246(func_178(889965687, func_217(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_237(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_122(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_173(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_178(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_174(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_174(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_238(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_174(0);
	*uParam1 = { func_178(iParam0, func_210(0), iParam3, 0) };
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

bool func_239(int iParam0, int iParam1, int iParam2)
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

bool func_240(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_174(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

void func_241(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_247(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_242(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_248(vVar3, vVar6);
	if (absf(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_249(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_243(vector3 vParam0, vector3 vParam3, Vector3* vParam6, float* fParam7)
{
	if (func_190(vParam0))
	{
		return false;
	}
	if (get_closest_road(vParam0, 2f, 1, &vVar0, &vVar3, &uVar6, &uVar7, &uVar8, true))
	{
		*vParam6 = { Vector(0.5f, 0.5f, 0.5f) * vVar0 + vVar3 };
		if (vdist(vParam3, vVar0) < vdist(vParam3, vVar3))
		{
			*fParam7 = func_250(vVar3, vVar0, 1);
		}
		else
		{
			*fParam7 = func_250(vVar0, vVar3, 1);
		}
		return true;
	}
	return false;
}

bool func_244(var uParam0)
{
	if (!func_251(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_245(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_252(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_174(bParam1), iParam0, iParam3);
}

int func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_253(&uParam0, iParam4, bParam5, iParam6);
}

void func_247(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_254(&(uParam0->f_4));
}

float func_248(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = vmag(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_249(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_250(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_251(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_252(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_253(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_255(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_254(var uParam0)
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

bool func_255(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_174(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_240(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

