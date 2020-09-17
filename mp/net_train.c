void __EntryFunction__()
{
	func_1(&uScriptParam_0);
	func_2(&uLocal_61, &uScriptParam_0);
	while (!func_3(&uLocal_61))
	{
		func_4(&uLocal_13, &uLocal_28, &uLocal_61);
		wait(0);
	}
	func_5(&uLocal_13, &uLocal_61);
}

void func_1(var uParam0)
{
	iVar0 = get_game_timer();
	func_6(32, *uParam0);
	func_7();
	if (func_8())
	{
		func_9();
	}
	network_register_host_broadcast_variables(&uLocal_13, 15, 7);
	func_10(_0xba24095ea96dfe17(&uLocal_13), 15, "m_hostData");
	network_register_player_broadcast_variables(&uLocal_28, 33, 8);
	func_11(_0x690806bc83bc8ca2(uLocal_28[0]), 33, "m_clientData");
	func_12(0);
	set_this_script_can_be_paused(false);
	reserve_network_mission_vehicles(1);
}

void func_2(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
}

bool func_3(var uParam0)
{
	if (func_13(0, 0))
	{
		return true;
	}
	else if (uParam0->f_2 == 5)
	{
		return true;
	}
	return false;
}

void func_4(var uParam0, var uParam1, var uParam2)
{
	if (network_is_host_of_this_script())
	{
		func_14(uParam0, uParam1, uParam2);
	}
	func_15(uParam0, uParam1, uParam2);
}

void func_5(var uParam0, var uParam1)
{
	if ((network_is_game_in_progress() && network_get_num_participants() <= 1) && network_is_host_of_this_script())
	{
		func_16(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (_0xa4a4359320345b34(&(uParam0->f_3[iVar0])))
			{
				uParam0->f_3[iVar0] = 0;
			}
			if (_0xf6a8a652a6b186cd(&(uParam0->f_8[iVar0])))
			{
				_0xfdfecc6ee4491e11(&(uParam0->f_8[iVar0]));
			}
			iVar0++;
		}
	}
	if (does_blip_exist(uParam1->f_3))
	{
		remove_blip(&(uParam1->f_3));
	}
	func_17(uParam1->f_1);
	func_9();
}

void func_6(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_9();
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
			func_9();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_9();
					break;
				case 2:
					func_9();
					break;
				case 4:
					func_9();
					break;
				case 3:
					func_9();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_9();
		}
		if (!network_is_game_in_progress())
		{
			func_9();
		}
		if (!network_is_signed_online())
		{
			func_9();
		}
		if (func_18() == 0)
		{
			if (func_19())
			{
				func_9();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_9();
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
	terminate_this_thread();
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
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
					func_9();
					break;
				case 2:
					func_9();
					break;
				case 4:
					func_9();
					break;
				case 3:
					func_9();
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
			func_9();
			return;
		}
		wait(0);
	}
}

bool func_13(bool bParam0, bool bParam1)
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

void func_14(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			func_20(uParam0, uParam2);
			break;
		case 1:
			func_21(uParam0, uParam2);
			break;
		case 2:
			func_22(uParam0, uParam2);
			break;
		case 3:
			func_23(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_24(uParam0, uParam2);
			break;
	}
}

void func_15(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 >= 4 && uParam2->f_2 < 4)
	{
		func_25(uParam2, 4);
	}
	switch (uParam2->f_2)
	{
		case 0:
			func_26(uParam0, uParam2);
			break;
		case 1:
			func_27(uParam0, uParam2);
			break;
		case 2:
			func_28(uParam0, uParam2);
			break;
		case 3:
			func_29(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_30(uParam0, uParam2);
			break;
	}
}

void func_16(var uParam0, var uParam1)
{
	func_31(uParam1);
	if (network_is_game_in_progress())
	{
		if (network_does_network_id_exist(uParam0->f_1) && network_has_control_of_network_id(uParam0->f_1))
		{
			iVar0 = net_to_veh(uParam0->f_1);
			delete_mission_train(&iVar0);
			func_32(*uParam1, 0);
		}
	}
	if (does_entity_exist(&(uParam1->f_4[0])) && network_has_control_of_entity(&(uParam1->f_4[0])))
	{
		delete_mission_train(uParam1->f_4[0]);
		func_32(*uParam1, 0);
	}
}

void func_17(int iParam0)
{
	iVar1 = _0x635423d55ca84fc8(iParam0);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		iVar0 = _0x8df5f6a19f99f0d5(iParam0, iVar2);
		if (iVar0 != 0)
		{
			set_model_as_no_longer_needed(iVar0);
		}
		iVar2++;
	}
}

int func_18()
{
	return Global_1572887->f_13;
}

bool func_19()
{
	return Global_1051252->f_8;
}

void func_20(var uParam0, var uParam1)
{
	func_33(uParam0, uParam1, 1);
}

void func_21(var uParam0, var uParam1)
{
	if (func_34(uParam1->f_1))
	{
		func_33(uParam0, uParam1, 2);
	}
}

void func_22(var uParam0, var uParam1)
{
	if (!network_does_network_id_exist(uParam0->f_1))
	{
		if (!can_register_mission_vehicles(1))
		{
			return;
		}
		vVar0 = { func_35(*uParam1) };
		uVar3 = func_36(*uParam1);
		iVar4 = func_37(uParam1->f_1);
		if (!func_38(&(uParam0->f_1), uParam1->f_1, vVar0, uVar3, iVar4, 0, 1, 1))
		{
			func_33(uParam0, uParam1, 4);
			return;
		}
		iVar5 = net_to_veh(uParam0->f_1);
		if (!is_entity_a_mission_entity(iVar5))
		{
			set_entity_as_mission_entity(iVar5, true, false);
		}
		fVar6 = func_39(uParam1->f_1);
		set_train_speed(iVar5, fVar6);
		set_train_cruise_speed(iVar5, fVar6);
		_0x160c1b5ab48ab87c(iVar5, func_40(uParam1->f_1));
		_0x4182c037aa1f0091(iVar5, func_41(uParam1->f_1));
		_0xe6bd7dd3fd474415(iVar5, func_42(uParam1->f_1));
		_0x06a09a6e0c6d2a84(iVar5, 0);
		if (!func_43(uParam1->f_1))
		{
			_0xa72b1bf3857b94d7(iVar5, 1);
		}
		if (func_44(uParam1->f_1))
		{
			_0x1bfbafcc6760ff02(iVar5, 0);
		}
	}
	else
	{
		iVar7 = net_to_veh(uParam0->f_1);
		if (!does_entity_exist(iVar7))
		{
			func_33(uParam0, uParam1, 4);
		}
		else if (is_entity_dead(iVar7))
		{
			func_33(uParam0, uParam1, 4);
		}
		else if (_0xbd3c4a2ed509205e(iVar7))
		{
			func_33(uParam0, uParam1, 3);
		}
	}
}

void func_23(var uParam0, var uParam1, var uParam2)
{
	if (func_45(uParam0, uParam2))
	{
		func_33(uParam0, uParam2, 4);
		return;
	}
	if (uParam0->f_14 == 0 && func_46(uParam1))
	{
		uParam0->f_14 = 1;
	}
	func_47(uParam0, uParam2);
	if (uParam0->f_2 == 255)
	{
		iVar0 = 255;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (func_48(uParam1, 1, iVar1))
			{
				iVar0 = int_to_participantindex(iVar1);
				if (network_is_participant_active(iVar0))
				{
					uParam0->f_2 = network_get_player_index(iVar0);
					return;
				}
			}
			iVar1++;
		}
	}
	else if (!network_is_player_active(uParam0->f_2) || !network_is_player_a_participant(uParam0->f_2))
	{
		uParam0->f_2 = 255;
	}
}

void func_24(var uParam0, var uParam1)
{
	if (!network_does_network_id_exist(uParam0->f_1))
	{
		func_33(uParam0, uParam1, 5);
	}
}

void func_25(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

void func_26(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_25(uParam1, 1);
	}
}

void func_27(var uParam0, var uParam1)
{
	if (func_34(uParam1->f_1) && *uParam0 > 1)
	{
		func_25(uParam1, 2);
	}
}

void func_28(var uParam0, var uParam1)
{
	if (*uParam0 > 2 && network_does_network_id_exist(uParam0->f_1))
	{
		iVar0 = net_to_veh(uParam0->f_1);
		if (!does_entity_exist(iVar0))
		{
			func_25(uParam1, 4);
		}
		else if (_0xbd3c4a2ed509205e(iVar0))
		{
			func_49(*uParam1, iVar0);
			if (func_50(uParam1->f_1))
			{
				uParam1->f_3 = _blip_add_for_entity(-399496385, iVar0);
				set_blip_sprite(uParam1->f_3, -250506368, true);
				if (!func_51(*uParam1, 16))
				{
					_set_blip_flash_style(uParam1->f_3, -1186550032);
				}
				else
				{
					_blip_set_modifier(uParam1->f_3, -1186550032);
				}
				func_52(*uParam1, uParam1->f_3);
			}
			if (!func_53(uParam1->f_1))
			{
				set_vehicle_is_considered_by_player(iVar0, false);
				set_vehicle_doors_locked_for_player(iVar0, player_id(), true);
				_0x63dc1f22c903b709(iVar0, true);
			}
			iVar1 = _0x60b7d1dcc312697d(iVar0);
			func_54(*uParam1, iVar1);
			iVar12 = 0;
			iVar12 = 0;
			while (iVar12 <= (iVar1 - 1))
			{
				uParam1->f_4[iVar12] = get_train_carriage(iVar0, iVar12);
				if (does_entity_exist(&(uParam1->f_4[iVar12])) && !is_entity_dead(&(uParam1->f_4[iVar12])))
				{
					if (network_has_control_of_entity(&(uParam1->f_4[iVar12])))
					{
						if (func_55(uParam1->f_1))
						{
							set_entity_invincible(&(uParam1->f_4[iVar12]), true);
						}
						else
						{
							set_entity_invincible(&(uParam1->f_4[iVar12]), false);
						}
						_0xa91e6cf94404e8c9(&(uParam1->f_4[iVar12]));
					}
					get_model_dimensions(get_entity_model(&(uParam1->f_4[iVar12])), &vVar3, &vVar6);
					vVar9 = { vVar6 - vVar3 };
					vVar9.x = (vVar9.x * 0.9f);
					vVar9.f_2 = (vVar9.z * 1.25f);
					iVar2 = _create_volume_box(get_entity_coords(&(uParam1->f_4[iVar12]), false, false), 0f, 0f, get_entity_heading(&(uParam1->f_4[iVar12])), vVar9);
					_0x7c00cfc48a782dc0(iVar2, &(uParam1->f_4[iVar12]), 0f, 0f, (vVar9.z * 0.6f), 0f, 0f, 0f, 2, 1);
					func_56(*uParam1, iVar12, &(uParam1->f_4[iVar12]));
					func_57(*uParam1, iVar12, iVar2);
				}
				iVar12++;
			}
			func_58(*uParam1, 4);
			func_17(uParam1->f_1);
			func_25(uParam1, 3);
		}
	}
}

void func_29(var uParam0, var uParam1, var uParam2)
{
	if (func_45(uParam0, uParam2))
	{
		func_25(uParam2, 4);
		return;
	}
	func_31(uParam2);
	if (func_59(uParam0, uParam2))
	{
		if (!func_48(uParam1, 2, participant_id_to_int()))
		{
			func_60(uParam1, 2, participant_id_to_int());
			func_61();
		}
	}
	if (func_62(uParam2))
	{
		if (!func_48(uParam1, 1, participant_id_to_int()))
		{
			func_60(uParam1, 1, participant_id_to_int());
		}
		if (uParam0->f_2 == player_id())
		{
			func_25(uParam2, 5);
		}
	}
}

void func_30(var uParam0, var uParam1)
{
	func_16(uParam0, uParam1);
	if (*uParam0 > 4)
	{
		func_25(uParam1, 5);
	}
}

void func_31(var uParam0)
{
	iVar0 = &uParam0->f_4[0];
	if ((does_entity_exist(iVar0) && network_has_control_of_entity(iVar0)) && !is_entity_dead(iVar0))
	{
		vVar1 = { get_entity_coords(iVar0, true, false) };
		if (!func_63(vVar1))
		{
			vVar4 = { (*(*Global_1138411)[network_player_id_to_int()])[*uParam0]->f_1 };
			if (vdist(vVar4, vVar1) > 10f)
			{
				(*(*Global_1138411)[network_player_id_to_int()])[*uParam0]->f_1 = { vVar1 };
			}
		}
	}
	else if (!func_63((*(*Global_1138411)[network_player_id_to_int()])[*uParam0]->f_1))
	{
		(*(*Global_1138411)[network_player_id_to_int()])[*uParam0]->f_1 = { 0f, 0f, 0f };
	}
}

int func_32(int iParam0, bool bParam1)
{
	if (!func_64(iParam0, bParam1))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 2;
		Var0.f_5 = iParam0;
		if (bParam1)
		{
			func_65(iParam0);
		}
		return func_67(&Var0, func_66(0, 8));
	}
	return 1;
}

void func_33(var uParam0, var uParam1, int iParam2)
{
	if (*uParam0 != iParam2)
	{
		*uParam0 = iParam2;
	}
}

bool func_34(int iParam0)
{
	iVar0 = 1;
	iVar2 = _0x635423d55ca84fc8(iParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= (iVar2 - 1))
	{
		iVar1 = _0x8df5f6a19f99f0d5(iParam0, iVar3);
		if (iVar1 != 0)
		{
			request_model(iVar1, false);
			if (!has_model_loaded(iVar1))
			{
				iVar0 = 0;
			}
		}
		iVar3++;
	}
	return iVar0;
}

Vector3 func_35(int iParam0)
{
	return Global_1138305->f_2[iParam0]->f_2;
}

var func_36(int iParam0)
{
	return Global_1138305->f_2[iParam0]->f_5;
}

int func_37(int iParam0)
{
	if (func_68(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!can_register_mission_vehicles(_0x635423d55ca84fc8(iParam1)))
	{
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (bParam7)
	{
		iVar1 = _0x635423d55ca84fc8(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			if (!func_69(_0x8df5f6a19f99f0d5(iParam1, iVar0)))
			{
				bVar2 = true;
			}
			iVar0++;
		}
		if (bVar2)
		{
			return false;
		}
	}
	iVar3 = _create_mission_train(iParam1, vParam2, bParam5, bParam6, true, bParam8);
	if (!does_entity_exist(iVar3))
	{
		return false;
	}
	_0x06a09a6e0c6d2a84(iVar3, 0);
	*uParam0 = veh_to_net(iVar3);
	if (!network_does_network_id_exist(*uParam0))
	{
		return false;
	}
	if (bParam9)
	{
		_network_set_entity_invisible_to_network(iVar3, true);
	}
	else
	{
		set_network_id_exists_on_all_machines(*uParam0, true);
	}
	return true;
}

float func_39(int iParam0)
{
	if (func_68(iParam0))
	{
		return 4.5f;
	}
	switch (iParam0)
	{
		case 155299255:
			return 0f;
		case 1981604013:
			return 0f;
		case -768364147:
			return 0f;
		case -735194130:
			return 0f;
		case -1547760661:
			return 0f;
		default:
			break;
	}
	return 8f;
}

float func_40(int iParam0)
{
	if (func_68(iParam0))
	{
		return 5f;
	}
	return 30f;
}

int func_41(int iParam0)
{
	if (func_68(iParam0))
	{
		return 1;
	}
	return 1;
}

int func_42(int iParam0)
{
	if (func_68(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_43(int iParam0)
{
	switch (iParam0)
	{
		case -343202759:
			return false;
		case -735194130:
			return false;
		default:
			break;
	}
	return true;
}

bool func_44(int iParam0)
{
	switch (iParam0)
	{
		case -343202759:
			return true;
		default:
			break;
	}
	return false;
}

bool func_45(var uParam0, var uParam1)
{
	if (func_70(1))
	{
		return true;
	}
	else if (Global_1138828->f_2[*uParam1]->f_3 == 0f)
	{
		return true;
	}
	else if (func_71(*uParam1) != uParam1->f_1)
	{
		return true;
	}
	else if (&Global_1138828->f_2[*uParam1] != 3)
	{
		return true;
	}
	else if (!network_does_network_id_exist(uParam0->f_1))
	{
		return true;
	}
	else if (!does_entity_exist(&(uParam1->f_4[0])))
	{
		return true;
	}
	return false;
}

bool func_46(var uParam0)
{
	iVar0 = 0;
	iVar1 = 2;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && func_72(uParam0[iVar0], iVar1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_47(var uParam0, var uParam1)
{
	uParam1->f_21++;
	if (uParam1->f_21 < 15)
	{
		return;
	}
	uParam1->f_21 = 0;
	if (!network_does_network_id_exist(uParam0->f_1))
	{
		return;
	}
	iVar0 = net_to_veh(uParam0->f_1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	iVar1 = _0x60b7d1dcc312697d(iVar0);
	iVar2 = uParam0->f_13;
	iVar3 = uParam0->f_13 * 4;
	if (iVar3 < iVar1)
	{
		if (does_entity_exist(&(uParam1->f_4[iVar3])))
		{
			func_73(uParam0, uParam1, iVar2, &(uParam1->f_4[iVar3]));
		}
		iVar2++;
	}
	else
	{
		iVar2 = 0;
	}
	if (iVar2 >= 4)
	{
		iVar2 = 0;
	}
	uParam0->f_13 = iVar2;
}

bool func_48(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return false;
	}
	return func_72(uParam0[iParam2], iParam1);
}

void func_49(int iParam0, int iParam1)
{
	Global_1138828->f_2[iParam0]->f_2 = iParam1;
}

bool func_50(int iParam0)
{
	if (func_68(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case -343202759:
			return false;
		case -735194130:
			return false;
		default:
			break;
	}
	return true;
}

bool func_51(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && func_72((*Global_1138411)[iVar0][iParam0], iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_52(int iParam0, var uParam1)
{
	Global_1138828->f_2[iParam0]->f_6 = uParam1;
}

bool func_53(int iParam0)
{
	switch (iParam0)
	{
		case -343202759:
			return false;
		case -735194130:
			return false;
		default:
			break;
	}
	return true;
}

void func_54(int iParam0, int iParam1)
{
	Global_1138828->f_2[iParam0]->f_5 = iParam1;
}

bool func_55(var uParam0)
{
	return true;
}

void func_56(int iParam0, int iParam1, var uParam2)
{
	Global_1138828->f_2[iParam0]->f_11[iParam1] = uParam2;
}

void func_57(int iParam0, int iParam1, int iParam2)
{
	Global_1138828->f_2[iParam0]->f_11[iParam1]->f_1 = iParam2;
}

void func_58(int iParam0, int iParam1)
{
	if (!func_72((*Global_1138411)[network_player_id_to_int()][iParam0], iParam1))
	{
		func_74((*(*Global_1138411)[network_player_id_to_int()])[iParam0], iParam1);
	}
}

bool func_59(var uParam0, var uParam1)
{
	iVar0 = &uParam1->f_4[0];
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (uParam0->f_14 == 1)
	{
		return false;
	}
	iVar1 = _0x2963b5c1637e8a27(iVar0);
	if (iVar1 == Global_34)
	{
		return true;
	}
	return false;
}

void func_60(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return;
	}
	if (!func_72(uParam0[iParam2], iParam1))
	{
		func_74((*uParam0)[iParam2], iParam1);
	}
}

void func_61()
{
	fVar2 = 25f;
	uVar7 = 1;
	iVar0 = func_75(&uVar3, &uVar7, 3, Global_35, fVar2, 0, 0, 0, -1, 1, 1, -1082130432, 0, 1);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((does_entity_exist(&(uVar3[iVar1])) && !is_entity_dead(&(uVar3[iVar1]))) && !_0x40851bcc33acd9ab(&(uVar3[iVar1])))
		{
			Var9 = Global_34;
			Var9.f_3 = { Global_35 };
			Var9.f_6 = func_76();
			Var9.f_9 = 1;
			Var9.f_2 = 1685924442;
			Var9.f_8 = 1;
			_0x018f30d762e62df8(&(uVar3[iVar1]), &Var9);
			func_77(&(uVar3[iVar1]), Global_35, 2, 1, 1);
			_task_smart_flee_style_ped(&(uVar3[iVar1]), Global_34, 3, 0, -1082130432, -1, 0);
		}
		iVar1++;
	}
}

bool func_62(var uParam0)
{
	if (func_78(uParam0, 1))
	{
		return true;
	}
	iVar0 = &uParam0->f_4[0];
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	vVar1 = { get_entity_coords(iVar0, false, false) };
	if (func_63(vVar1))
	{
		func_79(uParam0, 1);
		return true;
	}
	fVar4 = Global_1138828->f_2[*uParam0]->f_3;
	if (fVar4 > 0f)
	{
		fVar5 = (fVar4 + 50f);
		fVar6 = vdist(Global_35, vVar1);
		if (fVar6 > fVar5 && !func_80(*uParam0))
		{
			func_79(uParam0, 1);
			return true;
		}
	}
	return false;
}

bool func_63(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_64(int iParam0, bool bParam1)
{
	if (!func_81())
	{
		return false;
	}
	if (Global_1138305->f_2[iParam0]->f_1 == 0)
	{
		return false;
	}
	if (bParam1)
	{
		func_65(iParam0);
	}
	func_82(iParam0, 4);
	return true;
}

void func_65(int iParam0)
{
	Global_1138828->f_2[iParam0]->f_10 = Global_1296859->f_21 + 60;
}

var func_66(int iParam0, int iParam1)
{
	return func_83(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

int func_67(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return 0;
	}
	*uParam0 = 20;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 23, 0, &uParam1);
	return 1;
}

bool func_68(int iParam0)
{
	switch (iParam0)
	{
		case -1865722934:
		case -1643549114:
		case -1083616881:
		case -272646696:
		case 1936859429:
			return true;
		default:
			break;
	}
	return false;
}

bool func_69(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

bool func_70(int iParam0)
{
	return func_72(Global_1138828->f_1, iParam0);
}

int func_71(int iParam0)
{
	return Global_1138305->f_2[iParam0]->f_1;
}

bool func_72(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_73(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return;
	}
	vVar0 = { get_entity_coords(iParam3, true, false) };
	if (func_63(vVar0))
	{
		return;
	}
	fVar3 = 40f;
	if (!_0xa4a4359320345b34(&(uParam0->f_3[iParam2])))
	{
		iVar4 = get_hash_key("NET_TRAIN");
		if (_0x397769175a7dbb30(vVar0, fVar3, 1, 0, iVar4))
		{
			return;
		}
		Var5 = { vVar0 };
		Var5.f_4 = 40f;
		Var5.f_6 = get_hash_key("NET_TRAIN");
		Var5.f_7 = *uParam1;
		Var5.f_5 = 48;
		uParam0->f_3[iParam2] = _0x183c0b6cfeffcae4(&Var5);
	}
	else if (!_0xf6a8a652a6b186cd(&(uParam0->f_8[iParam2])))
	{
		switch (_0xb33a604345f58202(&(uParam0->f_3[iParam2])))
		{
			case 3:
				uParam0->f_8[iParam2] = _0x351d71b8b72b858b(&(uParam0->f_3[iParam2]));
				break;
			case 4:
				uParam0->f_3[iParam2] = 0;
				break;
			default:
				break;
		}
	}
	else
	{
		vVar14 = { _0xc4019cf9ae8e931a(&(uParam0->f_8[iParam2])) };
		if (vdist(vVar14, vVar0) > fVar3)
		{
			_0xec43c2ffb70e3f30(&(uParam0->f_8[iParam2]), vVar0);
		}
	}
}

void func_74(var uParam0, int iParam1)
{
	func_84(uParam0, iParam1);
}

int func_75(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	if (fParam13 <= 0f)
	{
		iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_85(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_86(iVar0);
	return iVar1;
}

var func_76()
{
	return Global_1939161->f_26;
}

void func_77(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_87(iParam0, 0))
	{
		return;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return;
	}
	if (iParam5 && _0xf9331b3a314eb49d(iParam0))
	{
		_0xf1c03a5352243a30(iParam0);
		return;
	}
	if (func_63(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			_0x802092b07e3b1eea(iParam0, vParam1, iParam6);
			break;
		case 5:
			_0x463803429297117c(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			_0x62fdad5e01d2dd47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			_0xec6935ebe0847b90(iParam0, vParam1);
			break;
		case 2:
			_0xeeed8fafec331a70(iParam0, vParam1, iParam6);
			break;
		case 1:
			_0xf1c03a5352243a30(iParam0);
			break;
		case 7:
			_0xa3a9299c4f2adb98(iParam0);
			break;
		default:
			_0xa3a9299c4f2adb98(iParam0);
			break;
	}
}

bool func_78(var uParam0, int iParam1)
{
	return func_72(uParam0->f_20, iParam1);
}

void func_79(var uParam0, int iParam1)
{
	if (!func_72(uParam0->f_20, iParam1))
	{
		func_74(&(uParam0->f_20), iParam1);
	}
}

bool func_80(int iParam0)
{
	iVar0 = get_frame_count();
	if (Global_1138828->f_2[iParam0]->f_9 == iVar0 || Global_1138828->f_2[iParam0]->f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_81()
{
	return (((_does_thread_exist(&(Global_1051252->f_16[3])) && is_thread_active(&(Global_1051252->f_16[3]), false)) && _0x31dad2cd6d49546e(&(Global_1051252->f_16[3]))) && _0xb4a25351d79b444c(&(Global_1051252->f_16[3])) == player_id());
}

void func_82(int iParam0, int iParam1)
{
	if (&Global_1138305->f_2[iParam0] != iParam1)
	{
		Global_1138305->f_2[iParam0] = iParam1;
	}
}

var func_83(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_88() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_89());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_89());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_89());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_90(get_player_team(iVar5)));
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
			if (func_91(iVar2))
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
				if (iVar9 & 8192 != 0 && func_92(iVar2) != 1)
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
					if (!func_93(iVar10))
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

void func_84(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_85(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = get_indexed_item_in_itemset(iVar5, iVar0);
			iVar2 = iVar1;
			if ((does_entity_exist(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_94(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !decor_exist_on(iVar2, "bIgnoreThisPed"))
				{
					if (!func_95(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < get_num_models_in_population_set(iParam7))
							{
								if (is_ped_model(iVar2, get_ped_model_name_in_population_set(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!is_entity_dead(iVar2))
								{
									set_blocking_of_non_temporary_events(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	destroy_itemset(iVar0);
	return iVar4;
}

void func_86(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_87(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_72(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_72(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_72(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_72(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_72(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_72(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_72(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_72(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_88()
{
	return Global_1051252->f_12;
}

char* func_89()
{
	return "unnamed";
}

int func_90(int iParam0)
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

bool func_91(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_96(36, iParam0);
}

int func_92(int iParam0)
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

bool func_93(int iParam0)
{
	if (func_97(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_98(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_94(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!bParam5 && !is_ped_human(iParam0))
	{
		return false;
	}
	if (is_ped_a_player(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (is_entity_a_mission_entity(iParam0))
		{
			return false;
		}
	}
	if (bParam4)
	{
		if (is_ped_on_mount(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_99(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_95(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_96(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_100(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_101())
	{
		return func_100(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_100(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_97(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_98(int iParam0)
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
		func_102(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_103(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

int func_99(int iParam0, bool bParam1)
{
	return func_104(iParam0, Global_1893587->f_2, bParam1);
}

bool func_100(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_101()
{
	return Global_1102219->f_3672;
}

void func_102(int iParam0)
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
	func_103(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_103(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

int func_104(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_105(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_106(iParam0, iVar0, iVar1, bParam2);
}

bool func_105(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_18() != -1;
	switch (iParam0)
	{
		case 81:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 111:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*uParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*uParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*uParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*uParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*uParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*uParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*uParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*uParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*uParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*uParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*uParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*uParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*uParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*uParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 709;
			}
			else
			{
				*uParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*uParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*uParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*uParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*uParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*uParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*uParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*uParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*uParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*uParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 135:
			*uParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*uParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*uParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*uParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*uParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*uParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*uParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*uParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*uParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 139:
			*uParam1 = 828;
			*iParam2 = 851;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_106(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (is_entity_dead(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _0x32a1e3b83d501096(iParam0);
	if (!_0x800df3fc913355f3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_107(iVar2) != 0 && _0x800df3fc913355f3(func_108(iVar2)))
		{
			if (func_108(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_107(int iParam0)
{
	if (!func_109(iParam0))
	{
		return 0;
	}
	return Global_1893775[iParam0];
}

int func_108(int iParam0)
{
	if (!func_109(iParam0))
	{
		return 0;
	}
	return (*Global_1893775)[iParam0]->f_1;
}

bool func_109(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

