void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	Var0.f_2 = 255;
	Var0.f_4 = 6;
	Var0.f_31 = -1;
	if (!func_1(&Var0, &Local_32))
	{
		func_2(&Var0, "failed to launch the script.");
	}
	if (Local_32.f_20)
	{
		func_3();
	}
	if (func_4(&(Global_1291734->f_581.f_72)))
	{
		func_5(&(Global_1291734->f_581.f_72));
	}
	while (true)
	{
		func_6(&Var0, &Local_32);
		if (func_7(&Var0, &Local_32))
		{
			func_2(&Var0, "script should terminate.");
		}
		if (!func_8(Var0, 2048))
		{
			if (func_9(&Var0, &Local_32))
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
		if (func_21(&Var0, &Local_32) || func_8(Var0, 2048))
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

bool func_15(int iParam0)
{
	iVar0 = iParam0;
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
	uParam0->f_31 = 851;
	return true;
}

void func_23(var uParam0)
{
	if (func_4(&(Local_19.f_3)))
	{
		func_5(&(Local_19.f_3));
	}
	func_65(Local_19.f_2);
	func_66(&(Local_19.f_7), 1, 1);
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
	if (func_67(iParam0))
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
	func_68(97);
	func_68(98);
	func_68(99);
	func_68(100);
	Global_1291734->f_581.f_77 = { func_69() };
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
	if (func_70(iParam1, bVar0))
	{
		return;
	}
	if (Global_1901947->f_716.f_41 < 1)
	{
		if (func_71(&(Global_1296859->f_154[&Global_1296859]), iParam1))
		{
			if (2 == iParam0 || 3 == iParam0)
			{
				func_17(767, 0);
			}
			return;
		}
	}
	if (!func_72(iParam0) && Global_1139381->f_5560.f_2 == iParam0)
	{
		if (Global_17411.f_2621.f_1 >= (Global_1296859->f_21 - func_73(iParam0)))
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
		func_74(&Var3, uVar2);
	}
	if (iParam1 != 255)
	{
		Global_1139381->f_5560.f_3 = func_75(iParam1, 1);
		Global_1139381->f_5560.f_4 = func_76(iParam1, 0, 1);
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
	iVar0 = func_77(iParam0, 1, 59806960);
	if (iVar0 <= 0)
	{
		return;
	}
	if (!_network_is_money_balance_not_less_than(iVar0, 0))
	{
		return;
	}
	if (!func_78(iParam0, 1, 59806960))
	{
		return;
	}
	iVar1 = func_79(iParam0, sParam2, 1, 1, 0, 59806960);
	if (iVar1 == -1)
	{
		return;
	}
	func_80(iParam1, iVar0, 0);
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
	if (!func_81(iParam0))
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
	if (func_82(255) == 1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_83(uParam0->f_2))
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
				if (!func_84(player_ped_id(), 451360105))
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
	func_85(uParam0);
	return false;
}

bool func_42(var uParam0, var uParam1)
{
	if (!func_8(*uParam0, 128))
	{
		if (!func_86(uParam0))
		{
			return false;
		}
		if (func_87(uParam0->f_3))
		{
			return false;
		}
		func_88(&(uParam0->f_24), 0);
		func_13(uParam0, 128);
		func_89(uParam0, uParam1);
		func_57(uParam0);
		func_90(uParam0);
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
	func_91(uParam0, 0f);
}

bool func_45(var uParam0, float fParam1)
{
	if (!func_4(uParam0))
	{
		return false;
	}
	if (func_92(uParam0) > fParam1)
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
	if (!func_86(uParam0))
	{
		if (_0xa19447d83294e29f(uParam0->f_3, &iVar0, &uVar1))
		{
			iVar3 = 0;
			iVar2 = 0;
			while (iVar2 < 6)
			{
				if (!does_entity_exist(&(uParam0->f_4[iVar2])))
				{
					uParam0->f_4[iVar2] = func_93(uParam0->f_3, iVar2);
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
	bVar0 = true;
	if (func_14(uParam0))
	{
		if (!_does_volume_exist(Local_19.f_2))
		{
			Local_19.f_2 = _create_volume_box(get_entity_coords(uParam0->f_3, true, false), 0f, 0f, -7.0567f, 4.75f, 3.25f, 1.85f);
			if (_does_volume_exist(Local_19.f_2))
			{
				_0x7c00cfc48a782dc0(Local_19.f_2, uParam0->f_3, 0f, 0f, 0f, 0f, 0f, 90f, 2, 1);
			}
		}
		if (!network_has_control_of_entity(uParam0->f_3))
		{
			network_request_control_of_entity(uParam0->f_3);
			return false;
		}
	}
	if (func_14(uParam0))
	{
		if (!func_8(Local_19.f_1, 1))
		{
			_0x75f90e4051cc084c(uParam0->f_3, 295596934);
			func_13(&(Local_19.f_1), 1);
			bVar0 = false;
		}
		else if (!_0x7264f9ca87a9830b(uParam0->f_3) || !_0xd798df5db67b1659(uParam0->f_3))
		{
			bVar0 = false;
		}
		if (!func_8(Local_19.f_1, 2))
		{
			_0xc0f0417a90402742(uParam0->f_3, 696075367);
			func_13(&(Local_19.f_1), 2);
			bVar0 = false;
		}
		if (bVar0)
		{
			if (!func_94())
			{
				return false;
			}
			func_95(uParam0->f_3, 1, 1);
		}
	}
	if (bVar0)
	{
		set_can_climb_on_entity(uParam0->f_3, false);
	}
	return bVar0;
}

bool func_50()
{
	if (func_96())
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
	if (func_97())
	{
		return false;
	}
	if ((!is_screen_faded_in() || is_screen_fading_in()) || is_screen_fading_out())
	{
		return false;
	}
	if (func_98(&(Global_1102219->f_4), 1, 5))
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
	if ((Global_13 || Global_1048584) // PointerArith || func_99())
	{
		return false;
	}
	if (!func_100())
	{
		return false;
	}
	if (func_101())
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
	if (func_102())
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
	if (func_103(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_104(iParam0))
	{
		return false;
	}
	if (func_105(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_106(iParam0, 1)) || func_107(32768))
	{
		if (!func_106(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_100())
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
	if (func_14(uParam0))
	{
		switch (Local_19.f_6)
		{
			case 0:
				if (func_108(Local_19.f_7))
				{
					func_66(&(Local_19.f_7), 1, 1);
				}
				if (func_4(&(Local_19.f_3)))
				{
					func_5(&(Local_19.f_3));
				}
				if (func_109(uParam0))
				{
					if (func_110())
					{
						Local_19.f_7 = func_111("HWAGON_TITLE", 1499911466, Local_19.f_2, 2, 1, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
						Local_19.f_6 = 1;
					}
				}
				else if (func_112() && !func_113(0))
				{
					if (!is_entity_in_volume(player_ped_id(), Local_19.f_2, true, 0))
					{
						if (func_114(-889932290))
						{
							if (func_115(-889932290))
							{
								func_116();
								func_117(0);
							}
						}
					}
				}
				break;
			case 1:
				if (!func_109(uParam0))
				{
					Local_19.f_6 = 0;
				}
				else
				{
					enable_control_action(0, 1499911466, true);
					if (func_118(Local_19.f_7, 1))
					{
						func_119(1);
						func_117(-889932290);
						func_44(&(Local_19.f_3));
						func_66(&(Local_19.f_7), 1, 1);
						Local_19.f_6 = 2;
					}
				}
				break;
			case 2:
				if (func_120())
				{
					Local_19.f_6 = 0;
				}
				else if (func_45(&(Local_19.f_3), 3f))
				{
					Local_19.f_6 = 0;
				}
				break;
		}
		if (!func_15(856))
		{
			if (_is_ped_carrying(player_ped_id()))
			{
				iVar0 = _get_first_entity_ped_is_carrying(player_ped_id());
				if (does_entity_exist(iVar0))
				{
					iVar1 = func_121(iVar0);
					if (Global_1901947->f_681.f_32)
					{
					}
					else if (func_122())
					{
					}
					else if (is_entity_a_mission_entity(iVar0))
					{
					}
					else if (!func_123(get_entity_model(iVar0)))
					{
					}
					else if (!func_124(iVar1))
					{
					}
					else if (func_16())
					{
						func_17(856, 0);
					}
				}
			}
		}
	}
	return false;
}

void func_56(var uParam0)
{
	if (!func_125(uParam0->f_2))
	{
		return;
	}
	switch (func_126(uParam0))
	{
		case 0:
			break;
		case 1:
			if (func_14(uParam0))
			{
				func_127(uParam0);
				func_27(4);
				func_27(2);
			}
			break;
		case 2:
			if (func_14(uParam0))
			{
				func_127(uParam0);
				func_17(79, 1);
				func_27(4);
				func_27(2);
			}
			break;
	}
}

void func_57(var uParam0)
{
	func_128(uParam0);
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
		if (!func_129(uVar2, 1))
		{
			iVar3 = 1;
		}
		if (Global_1291106[iVar1] & 32 != 0)
		{
			if (!func_129(uVar2, 32))
			{
				iVar3 |= 32;
			}
		}
	}
	else
	{
		if (Global_1291106[iVar1] & 2 != 0)
		{
			if (!func_129(uVar2, 2))
			{
				iVar3 |= 2;
			}
		}
		if (Global_1291106[iVar1] & 4 != 0)
		{
			if (!func_129(uVar2, 4))
			{
				iVar3 |= 4;
			}
		}
		if (Global_1291106[iVar1] & 8 != 0)
		{
			if (!func_129(uVar2, 8))
			{
				iVar3 |= 8;
			}
		}
		if (Global_1291106[iVar1] & 64 != 0)
		{
			if (!func_129(uVar2, 64))
			{
				iVar3 |= 64;
			}
		}
		if (Global_1291106[iVar1] & 128 != 0)
		{
			if (!func_129(uVar2, 128))
			{
				iVar3 |= 128;
			}
		}
		if (Global_1291106[iVar1] & 256 != 0)
		{
			if (!func_129(uVar2, 256))
			{
				iVar3 |= 256;
			}
		}
		if (Global_1291106[iVar1] & 16 != 0)
		{
			if (!func_129(uVar2, 16))
			{
				iVar3 = 16;
			}
		}
		if (Global_1291106[iVar1] & 512 != 0)
		{
			if (!func_129(uVar2, 512))
			{
				iVar3 |= 512;
			}
		}
		if (func_129(uVar2, 1024))
		{
			if (!func_129(uVar2, 1024))
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
	if (!func_130(uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_3;
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = player_ped_id();
	if (!func_131(iVar0, iVar1, &uVar2))
	{
		return;
	}
	func_132(iVar0);
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
			func_133(iVar3, iVar5);
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
			if (func_134(uParam0, iParam2))
			{
				func_135(uParam0);
				return 1;
			}
			break;
		case 16:
			if (func_134(uParam0, iParam2))
			{
				func_13(uParam0, 4096);
				func_135(uParam0);
				return 1;
			}
			break;
		case 1:
		case 2:
			if (func_134(uParam0, iParam2))
			{
				func_136(uParam0);
				return 1;
			}
			break;
		case 6:
			if (func_134(uParam0, iParam2))
			{
				func_137(uParam0, uParam1);
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 12:
			func_138(uParam0, iParam2, 0);
			break;
		case 13:
			func_138(uParam0, iParam2, 1);
			break;
		case 14:
			func_139(uParam0, iParam2);
			break;
		case 15:
			if (func_134(uParam0, iParam2))
			{
				if (network_has_control_of_entity(uParam0->f_3))
				{
					if (!func_67(uParam0->f_3))
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

void func_65(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_66(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_108(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_140(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_141(iVar0);
	*uParam0 = 0;
}

bool func_67(int iParam0)
{
	iVar0 = get_vehicle_number_of_passengers(iParam0);
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

void func_68(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

struct<4> func_69()
{
	return Var0;
}

bool func_70(int iParam0, bool bParam1)
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
	if (!func_142(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	if (func_142(func_143()))
	{
		if (!func_76(&(Global_1296859->f_154[&Global_1296859]), 0, 1) && func_144(iParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_71(int iParam0, int iParam1)
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

bool func_72(int iParam0)
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

int func_73(int iParam0)
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

void func_74(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_145(*uParam0);
}

float func_75(int iParam0, bool bParam1)
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

bool func_76(int iParam0, bool bParam1, bool bParam2)
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

int func_77(int iParam0, bool bParam1, int iParam2)
{
	if (!func_146(iParam0, 0))
	{
		return 0;
	}
	return func_147(iParam0, iParam2, 1, bParam1, 1, 0);
}

bool func_78(int iParam0, int iParam1, int iParam2)
{
	iVar0 = (func_77(iParam0, 0, iParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_148(iVar0);
	}
	return bVar1;
}

int func_79(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!func_146(iParam0, 0))
	{
		return -1;
	}
	if (func_149(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_150())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_147(iParam0, iParam5, 1, 0, 1, 2084597891) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_147(iParam0, iParam5, 1, 0, 1, 773203532) * iParam2);
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
	else if (func_151(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35]->f_1 * iParam2);
			if (!func_152(&(Var2[iVar35]), 0, bParam3, 0) >= iVar34)
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
	if (!bParam3 && func_153(0))
	{
		if (iVar0 > 0)
		{
			func_154(2084597891, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_154(773203532, iVar1, -142743235, 0, 0);
		}
		else if (func_155(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35]->f_1 * iParam2);
				func_154(&(Var2[iVar35]), iVar34, -142743235, 0, 0);
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
	iVar52 = func_156(-1406934746, &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_157(iVar52, Var53);
	}
	return iVar52;
}

void func_80(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_158(iParam0);
	if (func_159(iParam0) && !bParam2)
	{
		return;
	}
	Global_1291734->f_11.f_523[iParam0] = func_160(_create_var_string(2, sVar0, sParam1), 10000, 0, 0, 0, 1);
}

bool func_81(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

int func_82(int iParam0)
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

bool func_83(int iParam0)
{
	if (func_33(32, iParam0))
	{
		return true;
	}
	return false;
}

bool func_84(int iParam0, int iParam1)
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

void func_85(var uParam0)
{
	if (!func_14(uParam0))
	{
		return;
	}
	if (func_8(Local_19.f_1, 16))
	{
		return;
	}
	iVar0 = _0xa079300af757fb1a(uParam0->f_3);
	if (!_does_propset_exist(iVar0))
	{
	}
	else if (!_0xf42db680a8b2a4d9(iVar0))
	{
	}
	else
	{
		iVar1 = create_itemset(false);
		iVar2 = 0;
		iVar3 = _get_entities_from_propset(iVar0, iVar1, -2101616621, false, false);
		if (iVar3 == 0)
		{
		}
		else
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar5 = _get_entity_from_item(get_indexed_item_in_itemset(iVar4, iVar1));
				if (does_entity_exist(iVar5))
				{
					if (!network_has_control_of_entity(iVar5))
					{
						network_request_control_of_entity(iVar5);
					}
					else
					{
						set_entity_invincible(iVar5, true);
						iVar2++;
					}
				}
				iVar4++;
			}
			if (iVar2 == iVar3)
			{
				func_13(&(Local_19.f_1), 16);
			}
			_0x20a4bf0e09bee146(iVar1);
		}
		destroy_itemset(iVar1);
	}
}

bool func_86(var uParam0)
{
	return func_8(*uParam0, 64);
}

bool func_87(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	else if (!is_vehicle_driveable(iParam0, false, false))
	{
		return false;
	}
	if (func_161(iParam0, 0) && func_161(iParam0, 1))
	{
		return false;
	}
	return true;
}

void func_88(var uParam0, bool bParam1)
{
	if (bParam1 || !func_4(uParam0))
	{
		func_44(uParam0);
	}
}

void func_89(var uParam0, var uParam1)
{
}

void func_90(var uParam0)
{
	if (func_14(uParam0))
	{
		func_17(70, 1);
	}
}

void func_91(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_162() - fParam1);
	func_163(uParam0, 1);
	func_164(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_92(var uParam0)
{
	if (!func_4(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_165(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_162() - uParam0->f_1);
}

int func_93(int iParam0, int iParam1)
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

bool func_94()
{
	if (!_network_is_player_index_valid(player_id()))
	{
		return false;
	}
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!func_166(iVar0))
	{
		return false;
	}
	return true;
}

void func_95(int iParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_167(1);
	}
	func_170(iParam0, func_168(), func_169(player_id(), 1), iParam2);
}

bool func_96()
{
	return Global_1904651->f_8683 != -1;
}

bool func_97()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_98(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_99()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

bool func_100()
{
	if (!func_171())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_101()
{
	return Global_1896738->f_382;
}

bool func_102()
{
	if (!func_171())
	{
		return false;
	}
	uVar0 = Global_1904651->f_8685;
	Global_1904651->f_8685 = 0;
	return uVar0;
}

bool func_103(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_104(int iParam0)
{
	if (func_106(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_105(int iParam0)
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

bool func_106(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_107(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_108(int iParam0)
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

bool func_109(var uParam0)
{
	if (!func_14(uParam0))
	{
		return false;
	}
	if (_0x81dcfd13cf39920e())
	{
		return false;
	}
	if (func_112())
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_ped_ragdoll(iVar0))
	{
		return false;
	}
	if (does_entity_exist(_get_first_entity_ped_is_carrying(iVar0)))
	{
		return false;
	}
	if (!func_172(get_entity_coords(uParam0->f_3, true, false), 1050253722, 1060320051, 0, 1061158912))
	{
		return false;
	}
	return true;
}

bool func_110()
{
	_text_database_request("SATCH");
	if (!_text_database_has_loaded("SATCH"))
	{
		return false;
	}
	return true;
}

int func_111(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_173(iVar0, 2))
		{
			if (iParam2 == (*Global_1951255)[iVar0]->f_10 && iParam1 == (*Global_1951255)[iVar0]->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_174(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

bool func_112()
{
	return (Global_1940311->f_1 || &Global_1940311 == 1);
}

bool func_113(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_114(int iParam0)
{
	if (iParam0 == Global_1940311->f_37)
	{
		return true;
	}
	return false;
}

bool func_115(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (&Global_1940311->f_10869[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_116()
{
	if (_get_number_of_references_of_script_with_name_hash(-4058091) > 0)
	{
		Global_1940311->f_12 = 1;
	}
}

void func_117(int iParam0)
{
	Global_1940311->f_37 = iParam0;
}

bool func_118(int iParam0, bool bParam1)
{
	if (bParam1 && !func_108(iParam0))
	{
		return false;
	}
	iVar0 = func_140(iParam0);
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

void func_119(bool bParam0)
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

bool func_120()
{
	return Global_1940311->f_1;
}

int func_121(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0))
	{
		iVar0 = func_175(&iParam0);
		if (!func_146(iVar0, 0))
		{
			iVar0 = func_176(iParam0);
		}
	}
	else
	{
		iVar0 = func_176(iParam0);
	}
	return iVar0;
}

bool func_122()
{
	return (func_177() || func_178());
}

bool func_123(int iParam0)
{
	switch (iParam0)
	{
		case -1379917677:
		case -1262877910:
			return false;
		default:
			break;
	}
	return true;
}

bool func_124(int iParam0)
{
	if (!func_180(func_179(iParam0)))
	{
		return false;
	}
	return func_181(iParam0) > 0;
}

bool func_125(int iParam0)
{
	if (func_33(4, iParam0))
	{
		return true;
	}
	return false;
}

int func_126(var uParam0)
{
	return func_182(uParam0, 1086324736, 1094713344, 1077936128, 1090519040);
}

void func_127(var uParam0)
{
	if (func_14(uParam0))
	{
		func_35(15, 3);
	}
}

void func_128(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_183(uParam0);
		return;
	}
	iVar0 = _0xffec4b0a1a3ed515(uParam0->f_3, -1);
	if (does_entity_exist(iVar0))
	{
		if (iVar0 == player_ped_id())
		{
			func_183(uParam0);
			return;
		}
	}
	if (does_blip_exist(uParam0->f_1))
	{
		if (func_125(uParam0->f_2))
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
		if (func_184(iVar1, 0))
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
		iVar3 = func_185(iVar2);
		if (func_146(iVar3, 0))
		{
			_set_blip_name_from_player_string(uParam0->f_1, _create_var_string(0, func_186(iVar3)));
		}
		else
		{
			set_blip_name_from_text_file(uParam0->f_1, func_187(2));
		}
	}
	else
	{
		set_blip_name_from_text_file(uParam0->f_1, func_187(2));
	}
	_blip_set_modifier(uParam0->f_1, 580546400);
}

bool func_129(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_130(var uParam0)
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
	if (!func_131(iVar0, iVar1, &uVar2))
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
	iVar13 = func_188(iVar12);
	if (func_189(iVar12))
	{
		iVar14 = func_190(iVar13);
		if (iVar14 == 15 || iVar14 == 10)
		{
			if (func_191(iVar13, iVar0))
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
	Var15 = { func_192(iVar10) };
	if (Global_1291106[iVar12] & 4 != 0 || Global_1291105 & 8 != 0)
	{
		if (func_193(Var15, Var3))
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

bool func_131(int iParam0, int iParam1, var uParam2)
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

void func_132(int iParam0)
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
	if (!func_131(iParam0, iVar0, &uVar1))
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

void func_133(int iParam0, int iParam1)
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

bool func_134(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1->f_1)
	{
		return false;
	}
	return true;
}

void func_135(var uParam0)
{
	if (!func_8(*uParam0, 4))
	{
		func_13(uParam0, 4);
	}
}

void func_136(var uParam0)
{
	if (!func_8(*uParam0, 4))
	{
		func_13(uParam0, 2);
	}
}

void func_137(var uParam0, var uParam1)
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
		func_194(uParam0, 0f, 0f, 0f);
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
	func_68(100);
	func_195(4);
}

void func_138(var uParam0, int iParam1, bool bParam2)
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
	if (!func_131(iVar0, iVar2, &uVar6))
	{
		return;
	}
	func_196(iVar0);
	if (!bVar5)
	{
		if (func_16())
		{
			func_17(80, 1);
		}
	}
}

void func_139(var uParam0, int iParam1)
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
	if (!func_131(iVar2, iVar1, &uVar4))
	{
		return;
	}
	func_196(iVar2);
}

int func_140(int iParam0)
{
	return iParam0;
}

void func_141(int iParam0)
{
	if (!func_197(iParam0))
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

bool func_142(struct<2> Param0)
{
	if (!func_198(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_199(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_143()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_200(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_200(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_144(int iParam0, bool bParam1)
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
	if (func_129((*Global_1100469)[iVar0]->f_50, 2))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_201())
		{
			return true;
		}
	}
	if (func_202((*Global_1056141)[iVar0]->f_2))
	{
		return true;
	}
	return false;
}

void func_145(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

bool func_146(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_147(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_203(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_204(iParam0))
	{
		return func_206(func_205(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_151(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_148(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_207() == 0)
	{
		return func_208(iParam0);
	}
	return iParam0 <= func_209();
}

int func_149(int iParam0)
{
	if (!func_146(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_150()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

bool func_151(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_146(iParam0, 0))
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
		func_210(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_152(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_146(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_149(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_211(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_212(iParam0, 0);
	}
	if (func_213(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_214(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_215(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_214(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_153(bool bParam0)
{
	if (func_207() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_214(bParam0));
}

bool func_154(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_146(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_213(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_216(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_217(iParam0, bParam4, 0) };
	Var6 = { func_218(iParam0, Var1, Var1.f_4, bParam4) };
	return func_219(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_155(int iParam0)
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

int func_156(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_220(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_222(func_221(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_223(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_157(int iParam0, struct<17> Param1)
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

char* func_158(int iParam0)
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

bool func_159(int iParam0)
{
	return func_224(&(Global_1291734->f_11.f_523[iParam0]));
}

var func_160(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_161(int iParam0, int iParam1)
{
	iVar0 = _get_ped_in_draft_seat(iParam0, iParam1);
	if (is_entity_dead(iVar0))
	{
		return 1;
	}
	return 0;
}

float func_162()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_163(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_164(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_165(var uParam0)
{
	return func_36(*uParam0, 2);
}

bool func_166(int iParam0)
{
	switch (get_entity_model(iParam0))
	{
		case -1698498246:
			return true;
		default:
			break;
	}
	return false;
}

void func_167(bool bParam0)
{
	Global_1291734->f_581.f_280 = 0;
	if (bParam0)
	{
		func_225(1);
	}
	if (func_226("ALL SATCHEL EXCLUDING CLOTHING", &iVar0, &iVar1, -2015960939, 1))
	{
		if (iVar1 > 0)
		{
			Var4.f_9 = -1591664384;
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				if (func_227(&Var4, iVar2, iVar0, iVar1))
				{
					if (func_228(Var4.f_4))
					{
						if (bParam0)
						{
							func_229(Var4.f_11, 1);
						}
					}
					else
					{
						iVar3 = func_230(Var4.f_4);
						if (iVar3 > 0)
						{
							Global_1291734->f_581.f_280 = (Global_1291734->f_581.f_280 + (iVar3 * Var4.f_11));
						}
					}
				}
				iVar2++;
			}
		}
		func_231(iVar0);
	}
}

int func_168()
{
	return Global_1291734->f_581.f_280;
}

int func_169(int iParam0, bool bParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return func_232(0);
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return func_232(0);
	}
	return func_233(iVar0, bParam1);
}

void func_170(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	fVar0 = (to_float(iParam1) * func_234(0, 1048576000));
	fVar1 = (to_float(iParam2) * func_234(1, 1048576000));
	if (Global_1901947->f_681.f_32)
	{
		fVar0 = 0f;
		fVar1 = 0f;
	}
	_0x31f343383f19c987(iParam0, (fVar0 + fVar1), iParam3);
}

bool func_171()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_172(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	bVar2 = get_hud_screen_position_from_world_position(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_173(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_174(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_235(iParam0, 1);
	func_236(iParam0, 1);
	func_237(iParam0, 128);
}

int func_175(int iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(*iParam0);
	return func_238(iVar0);
}

int func_176(int iParam0)
{
	iVar0 = 0;
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = func_238(get_ped_index_from_entity_index(iParam0));
		}
	}
	return iVar0;
}

bool func_177()
{
	return Global_1291734->f_581.f_284;
}

bool func_178()
{
	return Global_1291734->f_581.f_283 != -1;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case -802026654:
			return -1670497261;
		case 1806153689:
			return -280711232;
		case -1625078531:
			return 596590814;
		case -2102079544:
			return 1665117534;
		case -1243878166:
			return -978241196;
		case -1475338121:
			return -752126075;
		case 143941906:
			return 1824983669;
		case 957520252:
			return 928262209;
		case 1292673537:
			return 541735817;
		case -2059726619:
			return 478256501;
		case -1569450319:
			return -232007656;
		case 854596618:
			return 19595959;
		case 1490032862:
			return -101065075;
		case 1083865179:
			return 2105875134;
		case 663376218:
			return 294194582;
		case 2116849039:
			return 837315235;
		case 1248540072:
			return -1818319295;
		case -1858513856:
			return -1597636811;
		case -868657362:
			return -1985596288;
		case 1603936352:
			return -440737957;
		case -702790226:
			return -1886002303;
		case -591117838:
			return -901855085;
		case -1730060063:
			return 891487295;
		case -237756948:
			return -1647829735;
		case -336086818:
			return 1698233050;
		case 9293261:
			return -1939379896;
		case -53270317:
			return -1903865243;
		case 459744337:
			return 2116155169;
		case 1914602340:
			return -1373796272;
		case -1791452194:
			return 834120727;
		case 1150594075:
			return -976686879;
		case 334093551:
			return 622542686;
		case -845037222:
			return -96726590;
		case 1150939141:
			return 493864472;
		case -1558096473:
			return -1364685383;
		case -794277189:
			return 501072671;
		case -1827027577:
			return -1832121185;
		case -662178186:
			return 332878276;
		case -1035515486:
			return 226674781;
		case 1181652728:
			return 945521246;
		case 2053771712:
			return 1013673835;
		case -1332163079:
			return 1080677561;
		case 238733925:
			return 441281843;
		case 1647012424:
			return 2100972340;
		case 500722008:
			return 731989586;
		case 1710714415:
			return -312223536;
		case 699990316:
			return 919524407;
		case -1648383828:
			return 45874041;
		case -1379330323:
			return -1135509110;
		case -99092070:
			return -1991809269;
		case 1963510418:
			return -882315424;
		case 1636891382:
			return -1198430015;
		case 1868576868:
			return 610503310;
		case -217731719:
			return -2104728156;
		case 1208128650:
			return -1848951328;
		case 462348928:
			return -1522563214;
		case 659601266:
			return 701524769;
		case -395646254:
			return -1125735460;
		case 1584468323:
			return -912340422;
		case 1969175294:
			return -339216640;
		case -57190831:
			return -850815155;
		case -308965548:
			return 980503581;
		case -1102272634:
			return 222730798;
		case 554578289:
			return -615127816;
		case -983605026:
			return -588738567;
		case -1544126829:
			return -1194176543;
		case -476045512:
			return -963727698;
		case 1796037447:
			return -553292391;
		case 1795984405:
			return 1964559810;
		case -1317365569:
			return -30369031;
		case 1729948479:
			return 1200593517;
		case 1466150167:
			return 1386213093;
		case 1145777975:
			return -1853692477;
		case 85441452:
			return -265369183;
		case 653400939:
			return 1490994314;
		case 915880986:
			return -560512119;
		case -1424697962:
			return -372283616;
		case -1643384846:
			return 643029198;
		case -847420802:
			return -507336551;
		case -662726703:
			return -1633300610;
		case 1760886130:
			return 312232747;
		case -1243653490:
			return -369028960;
		case 1988467099:
			return 56997271;
		case -674590015:
			return -562880581;
		case -1480423460:
			return 1914482046;
		case 924882045:
			return -398123506;
		case 1415608202:
			return -154193613;
		case -593311590:
			return 253511830;
		case 765085831:
			return 25196805;
		case 2094730711:
			return -585570711;
		case -1310590179:
			return 738250137;
		case 992366796:
			return -255175472;
		case -244657613:
			return 2029824605;
		case -2026210939:
			return 637459650;
		case -1252472243:
			return -1763677083;
		case -980016656:
			return 105057785;
		case -758005668:
			return 2109109029;
		case -2139551030:
			return 590763523;
		case 1607144310:
			return -1415366968;
		case 80093385:
			return 1525242558;
		case -867655342:
			return -1053027662;
		case 991092621:
			return 170878033;
		case 871746664:
			return 1176700965;
		case 1626949878:
			return 956769558;
		case -1722483116:
			return -92340513;
		case -1739474417:
			return -1628899142;
		case -161524199:
			return -1009793706;
		case 156979555:
			return 69303734;
		case 322141256:
			return 1934146069;
		case 1310120320:
			return 1251861193;
		case -1228376431:
			return -1201528492;
		case 472142656:
			return -584564578;
		case -1837840093:
			return 1257170615;
		case 58634176:
			return -443353688;
		case 1023080408:
			return -726514003;
		case 1001171791:
			return -1178975683;
		case 1210345318:
			return -1735020859;
		case 399553313:
			return 1066403056;
		case -1422869557:
			return 379141135;
		case -1378812236:
			return 178588058;
		case 1011003885:
			return 250119098;
		case 651035143:
			return 1462096210;
		case 2013022756:
			return 125705494;
		case -1186289527:
			return 1955497943;
		case 877935135:
			return -239746263;
		case -39646495:
			return 483041697;
		case 1582593525:
			return 2115836262;
		case -246542229:
			return 127221449;
		case -529454751:
			return 1281075400;
		case -46978629:
			return -187017787;
		case -1347000030:
			return 2084769890;
		case -505583391:
			return -1860395611;
		case 1645887374:
			return -925132283;
		case -1559227925:
			return 1221255602;
		case 1562528937:
			return -1971512016;
		case -1471526136:
			return 1915869310;
		case -1440794801:
			return -291878865;
		case 2144711797:
			return 628765193;
		case 718825539:
			return 73897638;
		case 2105263879:
			return -520524691;
		case -905842006:
			return -677211393;
		case 1191274340:
			return 607200259;
		case 1613453781:
			return -422975251;
		case -1030182399:
			return -162653027;
		case 987967309:
			return -1918690839;
		case -1060737769:
			return 885447719;
		case 553310445:
			return 1359956914;
		case -1838865945:
			return -509393273;
		case 1418092959:
			return 1728485205;
		case -1315697778:
			return 179793498;
		case -1772126340:
			return -1846596769;
		case -935543049:
			return 1833664130;
		case 1772544356:
			return 485995198;
		case -266273535:
			return 2094969043;
		case -1670544626:
			return -1582650542;
		case 1290960696:
			return 1799724359;
		case 1913571052:
			return 1598789118;
		case 1717601520:
			return 1824349223;
		case 430397370:
			return 696418077;
		case 16287711:
			return 1106697533;
		case -1356230367:
			return -1454259523;
		case 1417331079:
			return -1896235488;
		case -884124246:
			return 276180683;
		case 1884610748:
			return -747881514;
		case 746558492:
			return 1262126135;
		case -892811627:
			return 2265787;
		case -2040522845:
			return -2129601667;
		case -1224510844:
			return 75684692;
		case 1334837390:
			return 1900817837;
		case 339620522:
			return -1956299475;
		case 1770451033:
			return 694522728;
		case 756657535:
			return 765710924;
		case 862898895:
			return 893337488;
		case 1997845858:
			return 154935767;
		case -1930144509:
			return -568415076;
		case 1846915545:
			return 1274028936;
		case -1816929509:
			return -1140231877;
		case 1197831625:
			return -27138549;
		case -1866642239:
			return 659005977;
		case -1508120809:
			return -771957300;
		case -1007681885:
			return 29804808;
		case 434924608:
			return 1551511426;
		case 1666393029:
			return 800713897;
		case -1814593136:
			return 1612873893;
		case -1188120304:
			return 1434794005;
		case 1978734761:
			return -1919690611;
		case -824902132:
			return 1742727635;
		case -1015531226:
			return 539212240;
		case -581619522:
			return -1730963015;
		case -861854914:
			return 392259955;
		case -545447034:
			return 1775800065;
		case -1824684934:
			return 1100310307;
		case 980653387:
			return 844987909;
		case -1011598664:
			return -278500197;
		case -177476569:
			return 887422410;
		case 416630124:
			return -1794448450;
		case 1925728375:
			return 2054761774;
		case -1080457688:
			return -1608758596;
		case 1742676369:
			return 1688649464;
		case -899751553:
			return -2008306533;
		case 431501574:
			return 1100437577;
		case 2126795269:
			return 1726381584;
		case 1489051752:
			return 1400293322;
		case -1705499323:
			return 995534052;
		case -2013445740:
			return 1922992885;
		case 102446365:
			return 81605402;
		case -1927342740:
			return -286651444;
		case -410900360:
			return -2064547947;
		case -1073614594:
			return -176022019;
		case 2060013792:
			return 1232227412;
		case 581032175:
			return -893789138;
		case -581931638:
			return 2050798648;
		case -1528265128:
			return -798568163;
		case -142632645:
			return 230404077;
		case -2048519180:
			return -1383606050;
		case 1442025993:
			return 1090514323;
		case 441195430:
			return 1374677981;
		case 748665395:
			return -636161424;
		case 351048413:
			return -1083700033;
		case -914779013:
			return 63328590;
		case 1323485831:
			return -676594955;
		case -365111821:
			return -654290128;
		case 101495387:
			return -66423751;
		case 157917500:
			return -237024085;
		case -936537044:
			return 431553826;
		case -1610329427:
			return -979079160;
		case -1836227998:
			return 1045329345;
		case 619479575:
			return 908385665;
		case -1444929945:
			return 1675254736;
		case -929322235:
			return 564968345;
		case -548076717:
			return 1401257519;
		case -281211381:
			return 1935981234;
		case 493457089:
			return 1930921435;
		case -479485786:
			return 4633231;
		case 27838955:
			return -588047787;
		case 1641833719:
			return -1503391831;
		case -314933180:
			return -1409703989;
		case 1917027383:
			return 1754322973;
		case 803930024:
			return -479401797;
		case -855052577:
			return -1108373076;
		case 1111663869:
			return -255978368;
		case 1338219162:
			return 1771244699;
		case 1297433586:
			return 1837733705;
		case -1538397860:
			return -755340618;
		case -293259613:
			return -274405663;
		case 193037129:
			return 1107308482;
		case 588902637:
			return -2034280224;
		case 1908704263:
			return 1147674954;
		case -2112217546:
			return 285459296;
		case -1745255175:
			return -1085630227;
		case -237368063:
			return -977624126;
		case 1598967299:
			return -1327298596;
		case -1809464109:
			return -1809370620;
		case -165201917:
			return -925376594;
		case 815147738:
			return 571888586;
		case 1287583539:
			return 1427039907;
		case -2126985311:
			return 1870052953;
		case -1268352491:
			return 1293957931;
		case -1940225526:
			return -1604751590;
		case -212307068:
			return 1619108346;
		case 355421032:
			return 954753324;
		case 1657729714:
			return -530719231;
		case 1350692346:
			return 1790841517;
		case -257850294:
			return 1709510426;
		case -918541014:
			return 1406497512;
		case -947573795:
			return -397897626;
		case -2068302756:
			return -2079304485;
		case 1650829985:
			return -1919132092;
		case -1808044035:
			return 1146883867;
		case -1952647655:
			return 213675443;
		case 1293221440:
			return -2050528754;
		case -642946194:
			return 953077128;
		case 819214075:
			return -1141453785;
		case -858652427:
			return 1397626289;
		case 395625948:
			return 1133589554;
		case -2063800922:
			return 1666627023;
		case -2117103642:
			return -1809574093;
		case -1583694057:
			return -1782999617;
		case -1550918713:
			return -508623201;
		case 836539658:
			return -1594035895;
		case 773062352:
			return 696987226;
		case 1306100270:
			return 1080524287;
		case -1063194668:
			return 1671304715;
		case 337839068:
			return 1998585657;
		case -1426520714:
			return 1020167279;
		case -1456429189:
			return 623984063;
		case -2032809253:
			return 2094082294;
		case 781728005:
			return -1960159253;
		case 1202409779:
			return -1365028169;
		case 1520877300:
			return -1221735631;
		case -1736624361:
			return -112981243;
		case 719465997:
			return -2139087610;
		case -361486526:
			return -1602510454;
		case -765274711:
			return -1297983889;
		case -887205673:
			return 2092698587;
		case -784020903:
			return -996945065;
		case -886117938:
			return 2084956560;
		case -1416771220:
			return 702905543;
		case 1648676911:
			return -1581520016;
		case 2103833563:
			return 1086407100;
		case -831636369:
			return 511869570;
		case -852290935:
			return -880049552;
		case -1870415962:
			return -1117023247;
		case -788684109:
			return -734978095;
		case 1416435145:
			return -1006346516;
		case -1483088274:
			return -1801089352;
		case -791867098:
			return -1884753879;
		case -1689552552:
			return 1991763855;
		case -1850779170:
			return -1306257518;
		case -121487803:
			return -1020683612;
		case -1280499288:
			return 926836797;
		case 820245961:
			return -1232342767;
		case -889526774:
			return -309925418;
		case -521025998:
			return -123071275;
		case 1583031244:
			return -1558938686;
		case -2115599211:
			return 1091662795;
		case -767176802:
			return -788362738;
		case -750945821:
			return 1328165841;
		case -2135749211:
			return -800990234;
		case 2063108046:
			return -1483684624;
		case 1299111759:
			return 905262788;
		case 1595322723:
			return 150247607;
		case 784918835:
			return -1233359941;
		case -676310905:
			return -313281876;
		case -1719545959:
			return -4490683;
		case -2142423934:
			return 772815941;
		case 747751566:
			return 829687693;
		case -1942682403:
			return -989662224;
		case 1018433784:
			return 2085868277;
		case -796185392:
			return 54441032;
		case -49549406:
			return 173369425;
		case 857788498:
			return 1040980289;
		case 1223148871:
			return 914451661;
		case 939407236:
			return -1351971822;
		case 1608778431:
			return 1314774140;
		case -2033821082:
			return -1359600522;
		case -993340234:
			return 766332028;
		case -1861062075:
			return 1221975438;
		case 1645001514:
			return -1326003094;
		case 782371031:
			return 1184491654;
		case 1255529169:
			return 750218917;
		case 70898308:
			return -1353658464;
		case -1050350982:
			return 851638420;
		case 581781784:
			return 722571285;
		case -1363330863:
			return 934062207;
		case -1780911288:
			return -1585718810;
		case 1018306802:
			return -1082360340;
		case 1615521415:
			return 2061367228;
		case -1499066338:
			return -1962565360;
		case 1711081908:
			return 262789343;
		case -164705:
			return -633571126;
		case -2044044647:
			return 786387404;
		case -859583379:
			return -379489403;
		case -759504052:
			return -764672668;
		case 700225820:
			return -282159777;
		case 136458586:
			return 468012182;
		case 799105420:
			return -617672215;
		case -481655757:
			return -562468122;
		case 484160931:
			return 1913327664;
		case 1010699907:
			return -993590812;
		case 1550264248:
			return -2137670338;
		case -371992731:
			return 726300604;
		case 1090294483:
			return 415226344;
		case -274175035:
			return -299634134;
		case -1064414912:
			return 1087304069;
		case -2091620305:
			return -9870681;
		case -468684824:
			return 1792621383;
		case 1668870118:
			return -199598455;
		case -534004020:
			return -1941388598;
		case -2126925270:
			return 157600273;
		case 2008380517:
			return 167746130;
		case -510697884:
			return 2004430445;
		case -955209948:
			return 1574944766;
		case 1459836898:
			return 1307900476;
		case 303969766:
			return 1042168876;
		case -1707588662:
			return 425489026;
		case -1224075784:
			return 1517438769;
		case -1806671048:
			return -875336946;
		case 749765420:
			return -586130620;
		case 462936163:
			return -586318490;
		case -8888941:
			return 208002432;
		case 1640227110:
			return -1210524242;
		case -1241188722:
			return 245773581;
		case -1030962659:
			return -2046702261;
		case 112552982:
			return 44564804;
		case -1599578931:
			return 100739460;
		case 1296331626:
			return -2092384992;
		case -1256398198:
			return 494095577;
		case 1297800973:
			return -384312098;
		case 1772582754:
			return 1560218503;
		case -1459876379:
			return -1430069792;
		case 1127406863:
			return 1131911627;
		case 1779996957:
			return -64072061;
		case 1885306923:
			return -202115307;
		case 1244107697:
			return -1102234278;
		case -1201555940:
			return 224070180;
		case -668487833:
			return 545086564;
		case -1178150148:
			return -1483573607;
		case 1171158615:
			return -1100372216;
		case -2123554124:
			return 622704213;
		case 1806705761:
			return 1251284632;
		case 404581836:
			return 1760006100;
		case 987197489:
			return 1196392781;
		case -1259715647:
			return 1740443788;
		case -1716717840:
			return 2126822237;
		case -196277007:
			return -78084331;
		case -2064457926:
			return 327705288;
		case 561267454:
			return 1627515010;
		case 686253083:
			return -1199577085;
		case -827518870:
			return -383061723;
		case 1367447057:
			return -85420896;
		case -2092697195:
			return 195048975;
		case -2043601589:
			return -104850773;
		case 1758585485:
			return 299748074;
		case 1527400190:
			return 66596639;
		case 1493601140:
			return 1475285432;
		case -885592109:
			return 1212248669;
		case -1282621313:
			return 975820334;
		case -70954328:
			return -1551048953;
		case -1378208045:
			return -1849017470;
		case 1450608653:
			return 1176216618;
		case 1543592331:
			return 1205723119;
		case 1842740532:
			return 286421589;
		case 2004357248:
			return 593368816;
		case -229670230:
			return -1720266128;
		case 546758456:
			return -757807829;
		case 1888419655:
			return -1112368409;
		case -2040849706:
			return -2121345370;
		case 2014346813:
			return -1797718726;
		case -1638839614:
			return -1393971825;
		case 1705186999:
			return 1725396367;
		case -1821314478:
			return -130246565;
		case -1434083213:
			return 175848664;
		case -2115566177:
			return -812348041;
		case -1886936864:
			return -1078006288;
		case 777641606:
			return -1384822435;
		case 1815502722:
			return 917639971;
		case 1518910503:
			return 1095182413;
		case 1020297399:
			return 1519573732;
		case -438328437:
			return -426122094;
		case -132069363:
			return -731955171;
		case 1718756614:
			return -884658711;
		case 616254818:
			return -143066399;
		case 1586020612:
			return -533378050;
		case 1892902297:
			return -228233122;
		case 1920759986:
			return -1686723157;
		case 1683741809:
			return -1437580450;
		case 403588059:
			return -1074041164;
		case -352805801:
			return -523105155;
		case 1491466288:
			return 1150407679;
		case -1066678466:
			return -984787596;
		case -375348364:
			return -2003656613;
		case -101301217:
			return -1022716598;
		case 213936563:
			return -1244890418;
		case 897866285:
			return -581023245;
		case 1135507073:
			return -820204176;
		case -1671125008:
			return -660029308;
		case -1924159110:
			return 2019212836;
		case -1621144167:
			return 1185012403;
		case -1061253029:
			return -1795655841;
		case 1181154860:
			return 998851714;
		case 1418435161:
			return 770910550;
		case 1511236969:
			return 540315097;
		case 121494806:
			return -571452361;
		case -251416414:
			return -929748607;
		case -1787430524:
			return 1226615434;
		case -260181673:
			return -299916907;
		case -1087205695:
			return 207478289;
		case -857265622:
			return 449542892;
		case -1572330336:
			return 927409174;
		case -1249752300:
			return 636584299;
		case -940052481:
			return 1538321641;
		case -308200059:
			return 258890562;
		case -1218522879:
			return -451410282;
		case 923422806:
			return 1771900830;
		case 832214437:
			return -859294463;
		case 397926876:
			return -1153003010;
		case 219794592:
			return -259720070;
		case -1061362634:
			return 701417305;
		case 1728819413:
			return 939811780;
		case 1009802015:
			return -2107574148;
		case -420237085:
			return 1333821068;
		case -1195518864:
			return 975852512;
		case -159428614:
			return 806010785;
		case 1276143905:
			return 1999736087;
		case -1262044528:
			return 1319943174;
		case -963027403:
			return 1559976099;
		case 739090883:
			return -1633116519;
		case 1043121665:
			return 1444384112;
		case -634716689:
			return 1683892733;
		case 2088901891:
			return -1855844933;
		case 836208559:
			return 1519362071;
		case 1600479946:
			return -1396390784;
		case -675142890:
			return -998699255;
		case -906131571:
			return -750277466;
		case -591844128:
			return -537016814;
		case -1946740647:
			return -2090366073;
		case -1548204069:
			return 1271176258;
		case -907373381:
			return 1468707790;
		default:
			break;
	}
	return 0;
}

bool func_180(int iParam0)
{
	return iParam0 != 0;
}

int func_181(int iParam0)
{
	if (func_228(iParam0))
	{
		return 1;
	}
	return func_230(iParam0);
}

int func_182(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	vVar4 = { func_239(uParam0) };
	if (!func_240(uParam0))
	{
		return 2;
	}
	if (func_14(uParam0))
	{
		if (func_241(uParam0, &uVar0, fParam2) || vdist(vVar4, get_entity_coords(uParam0->f_3, true, false)) <= fParam3)
		{
			return 1;
		}
		if (func_242(uParam0, 1092616192))
		{
			return 2;
		}
	}
	if (network_has_control_of_entity(uParam0->f_3))
	{
		if (func_243(uParam0, vVar4, &vVar1))
		{
			if (!func_194(uParam0, vVar1))
			{
			}
			else
			{
				vVar4 = { vVar1 };
			}
		}
		if (func_244(vVar4))
		{
			if (func_245(uParam0, 1092616192) == 2)
			{
				return 2;
			}
		}
		else if (!_0x583ae9af9cee0958(uParam0->f_3, vVar4))
		{
			_task_vehicle_drive_to_destination_2(uParam0->f_3, vVar4, iParam1, 1147928963, 2, iParam4, fParam3);
		}
		else if (func_245(uParam0, 1092616192) == 2)
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
				if (func_245(uParam0, 1092616192) == 2)
				{
					return 2;
				}
			}
		}
	}
	return 0;
}

void func_183(var uParam0)
{
	if (does_blip_exist(uParam0->f_1))
	{
		remove_blip(&(uParam0->f_1));
	}
}

bool func_184(int iParam0, bool bParam1)
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

int func_185(int iParam0)
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

int func_186(int iParam0)
{
	if (!func_146(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

var func_187(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	func_247();
	Global_1904087->f_106.f_2 = 1292413058;
	Global_1904087->f_106.f_3 = func_248(iParam0);
	if (!_datafile_get_string(&Var0, &(Global_1904087->f_106)))
	{
		return "";
	}
	return func_249(Var0);
}

int func_188(int iParam0)
{
	return Global_1285193[iParam0];
}

bool func_189(int iParam0)
{
	return (*Global_1285193)[iParam0]->f_1;
}

int func_190(int iParam0)
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

bool func_191(int iParam0, int iParam1)
{
	iVar0 = func_190(iParam0);
	vVar1 = { Global_1051439->f_72[iVar0]->f_3 };
	if (iParam0 == 154)
	{
		vVar1 = { func_250(get_player_index()) };
	}
	if (func_244(vVar1))
	{
		return false;
	}
	fVar4 = func_251(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_252(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_252(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

struct<7> func_192(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

bool func_193(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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

bool func_194(var uParam0, vector3 vParam1)
{
	if (!network_has_control_of_entity(uParam0->f_3))
	{
		return false;
	}
	if (!decor_set_int(uParam0->f_3, "SummonPosXY", func_253(vParam1)))
	{
		return false;
	}
	if (!decor_set_float(uParam0->f_3, "SummonPosZ", vParam1.z))
	{
		return false;
	}
	return true;
}

void func_195(int iParam0)
{
	iVar0 = network_player_id_to_int();
	(*Global_1291106)[iVar0]->f_2 = ((*Global_1291106)[iVar0]->f_2 || iParam0);
}

void func_196(int iParam0)
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
	if (!func_131(iParam0, iVar0, &uVar1))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar0;
	Var2.f_4 = iParam0;
	task_exit_transport(&Var2);
}

bool func_197(int iParam0)
{
	return func_173(iParam0, 2);
}

bool func_198(int iParam0)
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

int func_199(int iParam0)
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

struct<2> func_200(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_201()
{
	if (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318)
	{
		return true;
	}
	return false;
}

bool func_202(int iParam0)
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
				if (func_254(Global_1108365->f_935.f_28))
				{
					if (!Global_1108365->f_935.f_19)
					{
						return false;
					}
				}
				if (!func_255())
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
				if (func_98(&(Global_1102219->f_4), 1, 5))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_203(int iParam0, int iParam1)
{
	if (!func_146(iParam0, 0))
	{
		return false;
	}
	if (func_204(iParam0))
	{
		return func_256(func_205(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_204(int iParam0)
{
	if (func_257(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_205(int iParam0, bool bParam1)
{
	if (!func_146(iParam0, 0))
	{
		return func_259(func_258(iParam0), bParam1);
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

int func_206(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_260(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_207()
{
	return Global_1572887->f_13;
}

bool func_208(int iParam0)
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

int func_209()
{
	if (func_207() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

void func_210(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_261(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_211(int iParam0, int iParam1)
{
	if (!func_146(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_257(iParam0, 1399091007))
	{
		func_262(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_212(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_263(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_265(&Var0, func_264(0));
	}
	if (!func_266(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_231(iVar14);
	return uVar15;
}

int func_213(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_214(bool bParam0)
{
	if (func_207() == -1)
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

struct<4> func_215(int iParam0, bool bParam1)
{
	Var0 = { func_217(iParam0, bParam1, 0) };
	return func_218(iParam0, Var0, Var0.f_4, bParam1);
}

int func_216(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_267(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_213(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_153(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_268(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_269(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_156(1702063850, &Var65, 1);
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
			func_157(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_214(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_217(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_270(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_149(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_218(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_264(bParam1) };
			if (bParam2 && func_271(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_272(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_272(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_273(iParam0, &Var6, 1728382685))
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
			Var0 = { func_274(bParam1) };
			switch (func_261(iParam0))
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
			if (func_275(iParam0, -1823706425))
			{
				Var0 = { func_218(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_275(iParam0, -1483207246))
			{
				Var0 = { func_218(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_218(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_275(iParam0, -1653629781))
			{
				Var0 = { func_218(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_276(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_275(iParam0, -1653629781))
			{
				Var0 = { func_218(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_218(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_146(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_214(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_219(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_267(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_276(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_153(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_207() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_156(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_157(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_214(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_220(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_277(uParam1->f_8, iParam0, uVar0, 2048) || func_277(uParam1->f_8, iParam0, uVar0, 32768)) || func_277(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_277(uParam1->f_8, iParam0, uVar0, 4) || func_277(uParam1->f_8, iParam0, uVar0, 256)) || func_277(uParam1->f_8, iParam0, uVar0, 65536)) || func_277(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_277(uParam1->f_8, iParam0, uVar0, 1) || func_277(uParam1->f_8, iParam0, uVar0, 8)) || func_277(uParam1->f_8, iParam0, uVar0, 65536)) || func_277(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_277(uParam1->f_8, iParam0, uVar0, 1) || func_277(uParam1->f_8, iParam0, uVar0, 16)) || func_277(uParam1->f_8, iParam0, uVar0, 2)) || func_277(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_277(uParam1->f_8, iParam0, uVar0, 8) || func_277(uParam1->f_8, iParam0, uVar0, 4096)) || func_277(uParam1->f_8, iParam0, uVar0, 256)) || func_277(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_221(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_222(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_278(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_278(iParam1, 2, 0, 0);
	return -1;
}

int func_223(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_278(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_224(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x59fa676177dbe4c9(iParam0) == 4;
}

void func_225(bool bParam0)
{
	if (!_network_is_player_index_valid(player_id()))
	{
		return;
	}
	iVar0 = player_id();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!bParam0)
	{
		(*Global_1291106)[iVar0]->f_7 = 0;
	}
	else
	{
		(*Global_1291106)[iVar0]->f_8 = 0;
	}
}

bool func_226(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_214(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_227(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_228(int iParam0)
{
	if (!func_279(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_280(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_229(int iParam0, bool bParam1)
{
	iVar0 = player_id();
	if (!_network_is_player_index_valid(iVar0))
	{
		return 0;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	if (func_233(iVar1, bParam1) >= func_232(bParam1))
	{
		return 0;
	}
	iVar2 = iParam0;
	iVar3 = (iVar2 + func_233(iVar1, bParam1));
	if (iVar3 > func_232(bParam1))
	{
		iVar2 = (func_232(bParam1) - func_233(iVar1, bParam1));
	}
	if (iVar2 < 1)
	{
		return 0;
	}
	if (!bParam1)
	{
		(*Global_1291106)[iVar1]->f_7 = ((*Global_1291106)[iVar1]->f_7 + iVar2);
	}
	else
	{
		(*Global_1291106)[iVar1]->f_8 = ((*Global_1291106)[iVar1]->f_8 + iVar2);
	}
	return 1;
}

int func_230(int iParam0)
{
	if (func_281(iParam0, &iVar1))
	{
		iParam0 = iVar1;
	}
	if (!_item_database_fillout_satchel_data(iParam0, &iVar0))
	{
		return -1;
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 4;
		case 4:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_231(int iParam0)
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

var func_232(bool bParam0)
{
	return func_282(bParam0, Global_1901947->f_681.f_30, Global_1901947->f_681.f_29);
}

var func_233(int iParam0, bool bParam1)
{
	return func_282(bParam1, (*Global_1291106)[iParam0]->f_8, (*Global_1291106)[iParam0]->f_7);
}

float func_234(bool bParam0, float fParam1)
{
	fParam1 = func_283(fParam1, 0f, 1f);
	fVar0 = ((1f / to_float(Global_1901947->f_681.f_28)) * func_284(bParam0, fParam1, (1f - fParam1)));
	if (bParam0)
	{
		return ((to_float(Global_1901947->f_681.f_28) / to_float(Global_1901947->f_681.f_29)) * fVar0);
	}
	return fVar0;
}

void func_235(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_173(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_236(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_237(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

int func_238(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = _get_ped_damage(iVar0);
	iVar2 = func_285(iVar0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!_0x9e7738b291706746(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (_is_metaped_using_component(iVar0, 43391475) || _0x8de41e9902e85756(iVar0))
		{
			iVar6 = func_286(iVar5);
			return iVar6;
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return -776155824;
		case 1:
			return 1715058708;
		case 0:
			return -45650221;
		default:
			break;
	}
	return -45650221;
}

Vector3 func_239(var uParam0)
{
	iVar0 = decor_get_int(uParam0->f_3, "SummonPosXY");
	if (iVar0 == 0)
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { func_287(iVar0) };
	vVar1.f_2 = decor_get_float(uParam0->f_3, "SummonPosZ");
	return vVar1;
}

bool func_240(var uParam0)
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

bool func_241(var uParam0, var uParam1, float fParam2)
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
	if (func_67(uParam0->f_3))
	{
		return true;
	}
	return false;
}

bool func_242(var uParam0, float fParam1)
{
	iVar0 = get_player_ped(uParam0->f_2);
	if (does_entity_exist(iVar0))
	{
		iVar1 = func_288(uParam0->f_3, iVar0, 1060437492);
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

bool func_243(var uParam0, vector3 vParam1, Vector3* vParam4)
{
	if (!func_289(uParam0->f_2, uParam0->f_3, vParam4, &fVar0))
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

bool func_244(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_245(var uParam0, float fParam1)
{
	if (get_entity_speed(uParam0->f_3) == 0f)
	{
		if (!func_4(&(uParam0->f_18)))
		{
			func_44(&(uParam0->f_18));
		}
		else if (func_290(&(uParam0->f_18), fParam1))
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

int func_246(int iParam0)
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

void func_247()
{
	Global_1904087->f_106 = Global_1071686->f_28448[49]->f_3;
	Global_1904087->f_106.f_1 = 0;
	Global_1904087->f_106.f_2 = 0;
	Global_1904087->f_106.f_3 = 0;
	Global_1904087->f_106.f_4 = 0;
}

int func_248(int iParam0)
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

var func_249(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

Vector3 func_250(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

float func_251(int iParam0)
{
	iVar0 = func_190(iParam0);
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

float func_252(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_253(struct<2> Param0, var uParam2)
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

bool func_254(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_255()
{
	if (Global_1572887->f_106.f_75 >= 10 && Global_1572887->f_106.f_75 <= 14)
	{
		return true;
	}
	return false;
}

bool func_256(int iParam0, int iParam1, bool bParam2)
{
	if (!func_291(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_292(iParam0, iParam1);
	}
	return true;
}

bool func_257(int iParam0, int iParam1)
{
	if (!func_146(iParam0, 0))
	{
		return func_293(func_258(iParam0), iParam1);
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

int func_258(int iParam0)
{
	return iParam0;
}

int func_259(int iParam0, bool bParam1)
{
	if (!func_294(iParam0, 2))
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

bool func_260(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_291(iParam0))
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
		func_295(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_261(int iParam0)
{
	if (!func_146(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_262(int iParam0, var uParam1, var uParam2)
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

struct<14> func_263(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_264(bool bParam0)
{
	iVar0 = func_214(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_218(923904168, func_270(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_218(923904168, func_270(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_218(923904168, func_270(bParam0), -740156546, 0);
}

void func_265(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_266(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_214(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_267(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_268(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_213(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_296(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_269(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_218(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_270(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_214(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_218(1328661203, func_69(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_218(1328661203, func_69(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_218(1328661203, func_69(), -1591664384, bParam0);
}

bool func_271(int iParam0, bool bParam1)
{
	if (func_261(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_297();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_272(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_298(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_273(int iParam0, var uParam1, int iParam2)
{
	if (func_299(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_274(bool bParam0)
{
	iVar0 = func_214(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_218(271701509, func_270(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_218(271701509, func_270(bParam0), 12999093, 0);
}

bool func_275(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_261(iParam0);
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
			if (func_300(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_276(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_301(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_277(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_129(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_278(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_302(iParam0, iParam1, iParam2, iParam3);
}

bool func_279(int iParam0)
{
	if (!func_146(iParam0, 0))
	{
		return false;
	}
	return (func_257(iParam0, 1686880204) || _0x4aef1fb5b9011d75(iParam0));
}

int func_280(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -802026654;
		case 1:
			return 1806153689;
		case 2:
			return -1625078531;
		case 3:
			return -2059726619;
		case 4:
			return -1569450319;
		case 5:
			return 854596618;
		case 6:
			return 2116849039;
		case 7:
			return 1248540072;
		case 8:
			return -1858513856;
		case 9:
			return -868657362;
		case 10:
			return 1603936352;
		case 11:
			return -702790226;
		case 12:
			return 459744337;
		case 13:
			return 1914602340;
		case 14:
			return -1791452194;
		case 15:
			return 1150939141;
		case 16:
			return -1558096473;
		case 17:
			return -794277189;
		case 18:
			return -1827027577;
		case 19:
			return -662178186;
		case 20:
			return -1035515486;
		case 21:
			return 238733925;
		case 22:
			return 1647012424;
		case 23:
			return 500722008;
		case 24:
			return 1710714415;
		case 25:
			return 699990316;
		case 26:
			return -1648383828;
		case 27:
			return -1379330323;
		case 28:
			return -99092070;
		case 29:
			return 1963510418;
		case 30:
			return 2047376405;
		case 31:
			return -395646254;
		case 32:
			return 1584468323;
		case 33:
			return 1969175294;
		case 34:
			return -57190831;
		case 35:
			return -308965548;
		case 36:
			return -1102272634;
		case 37:
			return 554578289;
		case 38:
			return -983605026;
		case 39:
			return -1544126829;
		case 40:
			return -476045512;
		case 41:
			return 1796037447;
		case 42:
			return 1795984405;
		case 43:
			return -1317365569;
		case 44:
			return 1729948479;
		case 45:
			return 1466150167;
		case 46:
			return 1145777975;
		case 47:
			return 85441452;
		case 48:
			return 653400939;
		case 49:
			return 121494806;
		case 50:
			return -251416414;
		case 51:
			return -1787430524;
		case 52:
			return -1572330336;
		case 53:
			return -1249752300;
		case 54:
			return -940052481;
		case 55:
			return -308200059;
		case 56:
			return -1218522879;
		case 57:
			return 923422806;
		case 58:
			return 832214437;
		case 59:
			return 397926876;
		case 60:
			return 219794592;
		case 61:
			return -1061362634;
		case 62:
			return 1728819413;
		case 63:
			return 1009802015;
		case 64:
			return 1276143905;
		case 65:
			return -1262044528;
		case 66:
			return -963027403;
		case 67:
			return 2088901891;
		case 68:
			return 836208559;
		case 69:
			return 1600479946;
		case 70:
			return -675142890;
		case 71:
			return -906131571;
		case 72:
			return -591844128;
		case 73:
			return -1946740647;
		case 74:
			return -1548204069;
		case 75:
			return -907373381;
		case 76:
			return 0;
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

bool func_281(int iParam0, int iParam1)
{
	*iParam1 = func_303(iParam0);
	return *iParam1 != 0;
}

var func_282(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

float func_283(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_284(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_285(int iParam0)
{
	iVar0 = 2;
	if (!does_entity_exist(iParam0))
	{
		return iVar0;
	}
	iVar1 = _get_ped_quality(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 915880986:
			return 1908704263;
		case -1424697962:
			return -2112217546;
		case -1643384846:
			return -1745255175;
		case -847420802:
			return -237368063;
		case -662726703:
			return 1598967299;
		case 1760886130:
			return -1809464109;
		case -1243653490:
			return -165201917;
		case 1988467099:
			return 815147738;
		case -674590015:
			return 1287583539;
		case -1480423460:
			return -2126985311;
		case 924882045:
			return -1268352491;
		case 1415608202:
			return -1940225526;
		case -593311590:
			return -212307068;
		case 765085831:
			return 355421032;
		case 2094730711:
			return 1657729714;
		case -1310590179:
			return 1350692346;
		case 992366796:
			return -257850294;
		case -244657613:
			return -918541014;
		case -2026210939:
			return -947573795;
		case -1252472243:
			return -2068302756;
		case -980016656:
			return 1650829985;
		case -758005668:
			return -1808044035;
		case -2139551030:
			return -1952647655;
		case 1607144310:
			return 1293221440;
		case 80093385:
			return -642946194;
		case -867655342:
			return 819214075;
		case 991092621:
			return -858652427;
		case 871746664:
			return 395625948;
		case 1626949878:
			return -2063800922;
		case -1722483116:
			return -2117103642;
		case -1739474417:
			return -1583694057;
		case -161524199:
			return -1550918713;
		case 156979555:
			return 836539658;
		case 322141256:
			return 773062352;
		case 1310120320:
			return 1306100270;
		case -1228376431:
			return -1063194668;
		case 472142656:
			return 337839068;
		case -1837840093:
			return -1426520714;
		case 58634176:
			return -1456429189;
		case 1023080408:
			return -2032809253;
		case 1001171791:
			return 781728005;
		case 1210345318:
			return 1202409779;
		case 399553313:
			return 1520877300;
		case -1422869557:
			return -1736624361;
		case -1378812236:
			return 719465997;
		case 1011003885:
			return -361486526;
		case 651035143:
			return -765274711;
		case 2013022756:
			return -887205673;
		case -1186289527:
			return -784020903;
		case 877935135:
			return -886117938;
		case -39646495:
			return -1416771220;
		case 1582593525:
			return 1648676911;
		case -246542229:
			return 2103833563;
		case -529454751:
			return -831636369;
		case -46978629:
			return -852290935;
		case -1347000030:
			return -1870415962;
		case -505583391:
			return -788684109;
		case 1645887374:
			return 1416435145;
		case -1559227925:
			return -1483088274;
		case 1562528937:
			return -791867098;
		case -1471526136:
			return -1689552552;
		case -1440794801:
			return -1850779170;
		case 2144711797:
			return -121487803;
		case 718825539:
			return -1280499288;
		case 2105263879:
			return 820245961;
		case -905842006:
			return -889526774;
		case 1191274340:
			return -521025998;
		case 1613453781:
			return 1583031244;
		case -1030182399:
			return -2115599211;
		case 987967309:
			return -767176802;
		case -1060737769:
			return -750945821;
		case 553310445:
			return -2135749211;
		case -1838865945:
			return 2063108046;
		case 1418092959:
			return 1299111759;
		case -1315697778:
			return 1595322723;
		case -1772126340:
			return 784918835;
		case -935543049:
			return -676310905;
		case 1772544356:
			return -1719545959;
		case -266273535:
			return -2142423934;
		case -1670544626:
			return 747751566;
		case 1290960696:
			return -1942682403;
		case 1913571052:
			return 1018433784;
		case 1717601520:
			return -796185392;
		case 430397370:
			return -49549406;
		case 16287711:
			return 857788498;
		case -1356230367:
			return 1223148871;
		case 1417331079:
			return 939407236;
		case -884124246:
			return 1608778431;
		case 1884610748:
			return -2033821082;
		case 746558492:
			return -993340234;
		case -892811627:
			return -1861062075;
		case -2040522845:
			return 1645001514;
		case -1224510844:
			return 782371031;
		case 1334837390:
			return 1255529169;
		case 339620522:
			return 70898308;
		case 1770451033:
			return -1050350982;
		case 756657535:
			return 581781784;
		case 862898895:
			return -1363330863;
		case 1997845858:
			return -1780911288;
		case -1930144509:
			return 1018306802;
		case 1846915545:
			return 1615521415;
		case -1816929509:
			return -1499066338;
		case 1197831625:
			return 1711081908;
		case -1866642239:
			return -164705;
		case -1508120809:
			return -2044044647;
		case -1007681885:
			return -859583379;
		case 434924608:
			return -759504052;
		case 1666393029:
			return 700225820;
		case -1814593136:
			return 136458586;
		case -1188120304:
			return 799105420;
		case 1978734761:
			return -481655757;
		case -824902132:
			return 484160931;
		case -1015531226:
			return 1010699907;
		case -581619522:
			return 1550264248;
		case -861854914:
			return -371992731;
		case -545447034:
			return 1090294483;
		case -1824684934:
			return -274175035;
		case 980653387:
			return -1064414912;
		case -1011598664:
			return -2091620305;
		case -177476569:
			return -468684824;
		case 416630124:
			return 1668870118;
		case 1925728375:
			return -534004020;
		case -1080457688:
			return -2126925270;
		case 1742676369:
			return 2008380517;
		case -899751553:
			return -510697884;
		case 431501574:
			return -955209948;
		case 2126795269:
			return 1459836898;
		case 1489051752:
			return 303969766;
		case -1705499323:
			return -1707588662;
		case -2013445740:
			return -1224075784;
		case 102446365:
			return -1806671048;
		case -1927342740:
			return 749765420;
		case -410900360:
			return 462936163;
		case -1073614594:
			return -8888941;
		case 2060013792:
			return 1640227110;
		case 581032175:
			return -1241188722;
		case -581931638:
			return -1030962659;
		case -1528265128:
			return 112552982;
		case -142632645:
			return -1599578931;
		case -2048519180:
			return 1296331626;
		case 1442025993:
			return -1256398198;
		case 441195430:
			return 1297800973;
		case 748665395:
			return 1772582754;
		case 351048413:
			return -1459876379;
		case -914779013:
			return 1127406863;
		case 1323485831:
			return 1779996957;
		case -365111821:
			return 1885306923;
		case 101495387:
			return 1244107697;
		case 157917500:
			return -1201555940;
		case -936537044:
			return -668487833;
		case -1610329427:
			return -1178150148;
		case -1836227998:
			return 1171158615;
		case 619479575:
			return -2123554124;
		case -1444929945:
			return 1806705761;
		case -929322235:
			return 404581836;
		case -548076717:
			return 987197489;
		case -281211381:
			return -1259715647;
		case 493457089:
			return -1716717840;
		case -479485786:
			return -196277007;
		case 27838955:
			return -2064457926;
		case 1641833719:
			return 561267454;
		case -314933180:
			return 686253083;
		case -827518870:
			return -2115566177;
		case 1367447057:
			return -1886936864;
		case -2092697195:
			return 777641606;
		case -2043601589:
			return 1815502722;
		case 1758585485:
			return 1518910503;
		case 1527400190:
			return 1020297399;
		case 1493601140:
			return -438328437;
		case -885592109:
			return -132069363;
		case -1282621313:
			return 1718756614;
		case -70954328:
			return 616254818;
		case -1378208045:
			return 1586020612;
		case 1450608653:
			return 1892902297;
		case 1543592331:
			return 1920759986;
		case 1842740532:
			return 1683741809;
		case 2004357248:
			return 403588059;
		case -229670230:
			return -352805801;
		case 546758456:
			return 1491466288;
		case 1888419655:
			return -1066678466;
		case -2040849706:
			return -375348364;
		case 2014346813:
			return -101301217;
		case -1638839614:
			return 213936563;
		case 1705186999:
			return 897866285;
		case -1821314478:
			return 1135507073;
		case -1434083213:
			return -1671125008;
		default:
			break;
	}
	return 0;
}

Vector3 func_287(int iParam0)
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

int func_288(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_304(iParam0, vVar0, iParam2);
}

bool func_289(int iParam0, int iParam1, Vector3* vParam2, float* fParam3)
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
	if (!func_305(vVar1, vVar4, vParam2, fParam3))
	{
		return true;
	}
	return false;
}

bool func_290(var uParam0, float fParam1)
{
	if (func_45(uParam0, fParam1))
	{
		func_5(uParam0);
		return true;
	}
	return false;
}

bool func_291(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_292(int iParam0, int iParam1)
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

int func_293(int iParam0, int iParam1)
{
	if (!func_294(iParam0, 2))
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

bool func_294(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_295(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_261(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_296(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_306((*uParam0)[iVar0]))
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
				*(*uParam0)[iVar0] = { func_69() };
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

bool func_297()
{
	return (func_307(-1185145312, 0, 0, 0) > 0 && func_308(func_218(889965687, func_270(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_298(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_146(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_213(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_218(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_214(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_214(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_299(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_214(0);
	*uParam1 = { func_218(iParam0, func_264(0), iParam3, 0) };
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

bool func_300(int iParam0, int iParam1, int iParam2)
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

bool func_301(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_214(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

void func_302(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_309(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 1908704263:
			return 915880986;
		case -2112217546:
			return -1424697962;
		case -1745255175:
			return -1643384846;
		case -237368063:
			return -847420802;
		case 1598967299:
			return -662726703;
		case -1809464109:
			return 1760886130;
		case -165201917:
			return -1243653490;
		case 815147738:
			return 1988467099;
		case 1287583539:
			return -674590015;
		case -2126985311:
			return -1480423460;
		case -1268352491:
			return 924882045;
		case -1940225526:
			return 1415608202;
		case -212307068:
			return -593311590;
		case 355421032:
			return 765085831;
		case 1657729714:
			return 2094730711;
		case 1350692346:
			return -1310590179;
		case -257850294:
			return 992366796;
		case -918541014:
			return -244657613;
		case -947573795:
			return -2026210939;
		case -2068302756:
			return -1252472243;
		case 1650829985:
			return -980016656;
		case -1808044035:
			return -758005668;
		case -1952647655:
			return -2139551030;
		case 1293221440:
			return 1607144310;
		case -642946194:
			return 80093385;
		case 819214075:
			return -867655342;
		case -858652427:
			return 991092621;
		case 395625948:
			return 871746664;
		case -2063800922:
			return 1626949878;
		case -2117103642:
			return -1722483116;
		case -1583694057:
			return -1739474417;
		case -1550918713:
			return -161524199;
		case 836539658:
			return 156979555;
		case 773062352:
			return 322141256;
		case 1306100270:
			return 1310120320;
		case -1063194668:
			return -1228376431;
		case 337839068:
			return 472142656;
		case -1426520714:
			return -1837840093;
		case -1456429189:
			return 58634176;
		case -2032809253:
			return 1023080408;
		case 781728005:
			return 1001171791;
		case 1202409779:
			return 1210345318;
		case 1520877300:
			return 399553313;
		case -1736624361:
			return -1422869557;
		case 719465997:
			return -1378812236;
		case -361486526:
			return 1011003885;
		case -765274711:
			return 651035143;
		case -887205673:
			return 2013022756;
		case -784020903:
			return -1186289527;
		case -886117938:
			return 877935135;
		case -1416771220:
			return -39646495;
		case 1648676911:
			return 1582593525;
		case 2103833563:
			return -246542229;
		case -831636369:
			return -529454751;
		case -852290935:
			return -46978629;
		case -1870415962:
			return -1347000030;
		case -788684109:
			return -505583391;
		case 1416435145:
			return 1645887374;
		case -1483088274:
			return -1559227925;
		case -791867098:
			return 1562528937;
		case -1689552552:
			return -1471526136;
		case -1850779170:
			return -1440794801;
		case -121487803:
			return 2144711797;
		case -1280499288:
			return 718825539;
		case 820245961:
			return 2105263879;
		case -889526774:
			return -905842006;
		case -521025998:
			return 1191274340;
		case 1583031244:
			return 1613453781;
		case -2115599211:
			return -1030182399;
		case -767176802:
			return 987967309;
		case -750945821:
			return -1060737769;
		case -2135749211:
			return 553310445;
		case 2063108046:
			return -1838865945;
		case 1299111759:
			return 1418092959;
		case 1595322723:
			return -1315697778;
		case 784918835:
			return -1772126340;
		case -676310905:
			return -935543049;
		case -1719545959:
			return 1772544356;
		case -2142423934:
			return -266273535;
		case 747751566:
			return -1670544626;
		case -1942682403:
			return 1290960696;
		case 1018433784:
			return 1913571052;
		case -796185392:
			return 1717601520;
		case -49549406:
			return 430397370;
		case 857788498:
			return 16287711;
		case 1223148871:
			return -1356230367;
		case 939407236:
			return 1417331079;
		case 1608778431:
			return -884124246;
		case -2033821082:
			return 1884610748;
		case -993340234:
			return 746558492;
		case -1861062075:
			return -892811627;
		case 1645001514:
			return -2040522845;
		case 782371031:
			return -1224510844;
		case 1255529169:
			return 1334837390;
		case 70898308:
			return 339620522;
		case -1050350982:
			return 1770451033;
		case 581781784:
			return 756657535;
		case -1363330863:
			return 862898895;
		case -1780911288:
			return 1997845858;
		case 1018306802:
			return -1930144509;
		case 1615521415:
			return 1846915545;
		case -1499066338:
			return -1816929509;
		case 1711081908:
			return 1197831625;
		case -164705:
			return -1866642239;
		case -2044044647:
			return -1508120809;
		case -859583379:
			return -1007681885;
		case -759504052:
			return 434924608;
		case 700225820:
			return 1666393029;
		case 136458586:
			return -1814593136;
		case 799105420:
			return -1188120304;
		case -481655757:
			return 1978734761;
		case 484160931:
			return -824902132;
		case 1010699907:
			return -1015531226;
		case 1550264248:
			return -581619522;
		case -371992731:
			return -861854914;
		case 1090294483:
			return -545447034;
		case -274175035:
			return -1824684934;
		case -1064414912:
			return 980653387;
		case -2091620305:
			return -1011598664;
		case -468684824:
			return -177476569;
		case 1668870118:
			return 416630124;
		case -534004020:
			return 1925728375;
		case -2126925270:
			return -1080457688;
		case 2008380517:
			return 1742676369;
		case -510697884:
			return -899751553;
		case -955209948:
			return 431501574;
		case 1459836898:
			return 2126795269;
		case 303969766:
			return 1489051752;
		case -1707588662:
			return -1705499323;
		case -1224075784:
			return -2013445740;
		case -1806671048:
			return 102446365;
		case 749765420:
			return -1927342740;
		case 462936163:
			return -410900360;
		case -8888941:
			return -1073614594;
		case 1640227110:
			return 2060013792;
		case -1241188722:
			return 581032175;
		case -1030962659:
			return -581931638;
		case 112552982:
			return -1528265128;
		case -1599578931:
			return -142632645;
		case 1296331626:
			return -2048519180;
		case -1256398198:
			return 1442025993;
		case 1297800973:
			return 441195430;
		case 1772582754:
			return 748665395;
		case -1459876379:
			return 351048413;
		case 1127406863:
			return -914779013;
		case 1779996957:
			return 1323485831;
		case 1885306923:
			return -365111821;
		case 1244107697:
			return 101495387;
		case -1201555940:
			return 157917500;
		case -668487833:
			return -936537044;
		case -1178150148:
			return -1610329427;
		case 1171158615:
			return -1836227998;
		case -2123554124:
			return 619479575;
		case 1806705761:
			return -1444929945;
		case 404581836:
			return -929322235;
		case 987197489:
			return -548076717;
		case -1259715647:
			return -281211381;
		case -1716717840:
			return 493457089;
		case -196277007:
			return -479485786;
		case -2064457926:
			return 27838955;
		case 561267454:
			return 1641833719;
		case 686253083:
			return -314933180;
		case -2115566177:
			return -827518870;
		case -1886936864:
			return 1367447057;
		case 777641606:
			return -2092697195;
		case 1815502722:
			return -2043601589;
		case 1518910503:
			return 1758585485;
		case 1020297399:
			return 1527400190;
		case -438328437:
			return 1493601140;
		case -132069363:
			return -885592109;
		case 1718756614:
			return -1282621313;
		case 616254818:
			return -70954328;
		case 1586020612:
			return -1378208045;
		case 1892902297:
			return 1450608653;
		case 1920759986:
			return 1543592331;
		case 1683741809:
			return 1842740532;
		case 403588059:
			return 2004357248;
		case -352805801:
			return -229670230;
		case 1491466288:
			return 546758456;
		case -1066678466:
			return 1888419655;
		case -375348364:
			return -2040849706;
		case -101301217:
			return 2014346813;
		case 213936563:
			return -1638839614;
		case 897866285:
			return 1705186999;
		case 1135507073:
			return -1821314478;
		case -1671125008:
			return -1434083213;
		default:
			break;
	}
	return 0;
}

int func_304(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_310(vVar3, vVar6);
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
	if (func_311(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_305(vector3 vParam0, vector3 vParam3, Vector3* vParam6, float* fParam7)
{
	if (func_244(vParam0))
	{
		return false;
	}
	if (get_closest_road(vParam0, 2f, 1, &vVar0, &vVar3, &uVar6, &uVar7, &uVar8, true))
	{
		*vParam6 = { Vector(0.5f, 0.5f, 0.5f) * vVar0 + vVar3 };
		if (vdist(vParam3, vVar0) < vdist(vParam3, vVar3))
		{
			*fParam7 = func_312(vVar3, vVar0, 1);
		}
		else
		{
			*fParam7 = func_312(vVar0, vVar3, 1);
		}
		return true;
	}
	return false;
}

bool func_306(var uParam0)
{
	if (!func_313(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_307(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_314(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_214(bParam1), iParam0, iParam3);
}

int func_308(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_315(&uParam0, iParam4, bParam5, iParam6);
}

void func_309(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_316(&(uParam0->f_4));
}

float func_310(vector3 vParam0, vector3 vParam3)
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

bool func_311(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_312(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_313(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_314(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_315(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_317(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_316(var uParam0)
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

bool func_317(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_214(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_301(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

