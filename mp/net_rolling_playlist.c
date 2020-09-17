void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	func_2(&uLocal_16, &ScriptParam_0);
	func_3(&uLocal_16, ScriptParam_0.f_7);
	while (!func_4(&vLocal_301, &uLocal_398))
	{
		func_5(&uLocal_16, &vLocal_301, &uLocal_398);
		wait(0);
	}
	func_6(&uLocal_16, &uLocal_398);
	terminate_this_thread();
}

void func_1()
{
	func_7(32, -1);
	func_8();
	network_register_host_broadcast_variables(&uLocal_16, 285, 41);
	func_9(_0xba24095ea96dfe17(&uLocal_16), 285, "m_rollingHostData");
	network_register_player_broadcast_variables(&vLocal_301, 97, 42);
	func_10(_0x690806bc83bc8ca2(vLocal_301[0]), 97, "m_rollingPlayerData");
	func_11(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
	if (network_is_host_of_this_script())
	{
	}
	func_12(&uLocal_398, 0);
}

void func_2(var uParam0, var uParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	uParam0->f_2 = { *uParam1 };
	uParam0->f_281 = get_network_time_accurate();
}

void func_3(var uParam0, var uParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	uParam0->f_9 = uParam1;
}

bool func_4(var uParam0, var uParam1)
{
	if (func_13(0, 0))
	{
		func_14(uParam1, 1);
		return true;
	}
	if (func_15((*uParam0)[participant_id_to_int()]) == 10)
	{
		return true;
	}
	return false;
}

void func_5(var uParam0, var uParam1, var uParam2)
{
	func_16(uParam0, uParam1, uParam2);
	if (network_is_host_of_this_script())
	{
		func_17(uParam0, uParam1, uParam2);
	}
	func_18(uParam0, uParam1, uParam2);
}

void func_6(var uParam0, var uParam1)
{
	func_19();
	func_20();
	if ((func_21(uParam0, 2) || func_22(uParam1, 2)) || func_22(uParam1, 1))
	{
		func_23(2048);
		if (network_is_in_tutorial_session())
		{
			network_end_tutorial_session();
		}
	}
	if ((func_22(uParam1, 2) || func_22(uParam1, 1)) && !func_24(1073741824))
	{
		if (_0x424b17a7dc5c90bc(player_id()))
		{
			func_25(0, 3);
		}
	}
	if (func_26(uParam1))
	{
		func_27(0, 1, 0, 0, 0, 0, 0, 0, 0);
		func_28(0);
		func_29(0);
		func_30(0);
		func_31();
	}
	if (is_thread_active(Global_265377->f_124745, false))
	{
		_0x7de4643157ad646c(Global_265377->f_124745);
	}
	Global_265377->f_124745 = 0;
	if (func_32(32) && !func_33(255))
	{
		func_28(0);
		func_29(0);
		func_30(0);
		func_34(1, 1);
	}
	func_35(0);
	func_36(67108864);
	func_37(32);
}

void func_7(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_38();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
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
			func_38();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_38();
					break;
				case 2:
					func_38();
					break;
				case 4:
					func_38();
					break;
				case 3:
					func_38();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_38();
		}
		if (!network_is_game_in_progress())
		{
			func_38();
		}
		if (!network_is_signed_online())
		{
			func_38();
		}
		if (func_39() == 0)
		{
			if (func_40())
			{
				func_38();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_38();
	}
	return 1;
}

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_11(bool bParam0)
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
					func_38();
					break;
				case 2:
					func_38();
					break;
				case 4:
					func_38();
					break;
				case 3:
					func_38();
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
			func_38();
			return;
		}
		wait(0);
	}
}

void func_12(var uParam0, int iParam1)
{
	uParam0->f_65 = iParam1;
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

void func_14(var uParam0, int iParam1)
{
	func_41(uParam0, iParam1);
}

int func_15(var uParam0)
{
	return *uParam0;
}

void func_16(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_42(uParam0, uParam1, uParam2, iVar0);
				break;
		}
		iVar0++;
	}
}

void func_17(var uParam0, var uParam1, var uParam2)
{
	switch (func_43(uParam0))
	{
		case 0:
			if (func_44(uParam0))
			{
				func_45(uParam0, 1);
			}
			break;
		case 1:
			if (uParam0->f_283 >= 10 && uParam0->f_283 <= 13)
			{
				func_46(uParam0, uParam2);
			}
			func_45(uParam0, 2);
			break;
		case 2:
			iVar0 = func_47(uParam0, uParam2);
			if (iVar0 == 2)
			{
				func_45(uParam0, 3);
			}
			else if (iVar0 == 3)
			{
				if (!func_21(uParam0, 4))
				{
					func_48(uParam0, 2);
				}
				if (func_22(uParam2, 2) && !_0x424b17a7dc5c90bc(player_id()))
				{
					func_49(1);
				}
				func_45(uParam0, 5);
			}
			break;
		case 3:
			func_50(uParam0, uParam1);
			if (func_51(uParam1, 4))
			{
				func_52(uParam0, uParam1);
				func_53(uParam0, 1);
				func_45(uParam0, 4);
			}
			break;
		case 4:
			if (uParam0->f_283 >= 10 && uParam0->f_283 <= 13)
			{
				iVar1 = get_game_timer();
				if (uParam2->f_68 == 0)
				{
					uParam2->f_68 = iVar1;
				}
				else if (iVar1 > uParam2->f_68 + 1000)
				{
					func_46(uParam0, uParam2);
					uParam2->f_68 = iVar1;
				}
			}
			func_50(uParam0, uParam1);
			if (func_51(uParam1, 5) && !func_55(func_54(-1, 0), 16))
			{
				func_48(uParam0, 1);
				func_45(uParam0, 1);
			}
			break;
		case 5:
			break;
	}
}

void func_18(var uParam0, var uParam1, var uParam2)
{
	iVar0 = participant_id_to_int();
	iVar1 = network_player_id_to_int();
	if (func_21(uParam0, 8) && !func_56(_0x51f33dbc1a41cbfd(), 64))
	{
		_0xe546bda1b3e288ee(64);
	}
	switch (uParam1[iVar0])
	{
		case 0:
			disable_all_control_actions(0);
			_0x236905c700fdb54d();
			_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
			uParam2->f_66 = get_network_time_accurate();
			func_57(64);
			func_58(67108864);
			func_58(16777216);
			func_59(uParam2);
			func_60(uParam1);
			func_61(uParam1, 1);
			break;
		case 1:
			disable_all_control_actions(0);
			_0x236905c700fdb54d();
			_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
			if (Global_263042[iVar1] <= 0 || !func_62())
			{
				if (get_time_difference(uParam2->f_66, get_network_time_accurate()) > 30000)
				{
					func_49(1);
					func_14(uParam2, 2);
					func_61(uParam1, 8);
				}
				return;
			}
			uParam2->f_66 = get_network_time_accurate();
			func_61(uParam1, 2);
			break;
		case 2:
			disable_all_control_actions(0);
			_0x236905c700fdb54d();
			_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
			if (func_22(uParam2, 4))
			{
				_0xb3e8841f6bdaf83e();
			}
			if (func_43(uParam0) < 3 || func_63())
			{
				return;
			}
			if (func_43(uParam0) == 5)
			{
				func_23(16);
				func_64(64);
				func_61(uParam1, 8);
				return;
			}
			func_14(uParam2, 4);
			func_65();
			iVar2 = func_66(uParam0);
			iVar3 = func_67(uParam0);
			network_get_local_handle(&uVar6);
			bVar5 = network_are_handles_the_same(&uVar6, &(uParam0->f_2));
			if ((((((uParam0->f_9 == 0 && bVar5) && func_68(&(uParam2->f_1), iVar2, iVar3, iVar4, 2)) || ((uParam0->f_9 == 0 && bVar5) && func_69(&(uParam2->f_1), iVar2, iVar3, iVar4, 2))) || ((uParam0->f_9 == 1 && bVar5) && func_68(&(uParam2->f_1), iVar2, iVar3, iVar4, 2))) || ((uParam0->f_9 == 1 && bVar5) && func_69(&(uParam2->f_1), iVar2, iVar3, iVar4, 2))) || ((uParam0->f_9 == 2 && bVar5) && func_70(&(uParam2->f_1), iVar2, iVar3, iVar4)))
			{
				if (func_71() == 2)
				{
					func_72(&(uParam2->f_1), 1024);
					if (func_73(uParam2->f_1.f_53) && uParam2->f_1.f_53 == 2)
					{
						func_72(&(uParam2->f_1), 16384);
					}
				}
				else
				{
					func_72(&(uParam2->f_1), 4096);
				}
				func_72(&(uParam2->f_1), 8192);
				uParam2->f_1.f_18 = -1;
				func_74(8388608);
				if (uParam0->f_283 >= 10 && uParam0->f_283 <= 13)
				{
					func_77(func_76(uParam0, uParam2, func_75(uParam0->f_283)));
				}
				func_61(uParam1, 3);
			}
			else
			{
				iVar13 = 255;
				if (network_is_handle_valid(&(uParam0->f_2)) && network_is_gamer_in_my_session(&(uParam0->f_2)))
				{
					iVar13 = network_get_player_from_gamer_handle(&(uParam0->f_2));
				}
				iVar14 = iVar13;
				if (bVar5 || get_time_difference(uParam2->f_66, get_network_time_accurate()) > 30000)
				{
					if (!network_is_player_active(iVar13))
					{
						func_78(&(Global_265377->f_124517), 26);
					}
					func_79(6);
					func_49(1);
					func_14(uParam2, 2);
					func_61(uParam1, 8);
					return;
				}
				if (((iVar14 >= 0 && iVar14 < 32) && func_15((*uParam1)[iVar14]) > 3) && func_80(iVar13))
				{
					if (func_81(uParam2, iVar14) != 1)
					{
						func_61(uParam1, 3);
					}
				}
			}
			break;
		case 3:
			disable_all_control_actions(0);
			_0x236905c700fdb54d();
			_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
			_0xb3e8841f6bdaf83e();
			if (func_82(uParam2) == 1)
			{
				return;
			}
			bVar15 = func_55(func_54(uParam2->f_1.f_18, uParam2->f_1.f_17), 4096);
			bVar16 = func_83(uParam1, 7);
			if ((!func_84(player_id(), 1024) && !func_22(uParam2, 8)) && (bVar15 || bVar16))
			{
				func_61(uParam1, 5);
			}
			else if (func_85(&(uParam2->f_1), 255, 0, 0) || func_86(255))
			{
				func_87(&((*Global_263042)[&Global_1296859]->f_1), 64);
				func_37(32768);
				func_88(1);
				func_88(512);
				func_61(uParam1, 4);
			}
			else
			{
				func_79(7);
				func_49(1);
				func_14(uParam2, 2);
				func_61(uParam1, 8);
			}
			break;
		case 4:
			disable_all_control_actions(0);
			_0x236905c700fdb54d();
			_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
			_0xb3e8841f6bdaf83e();
			if (func_32(32))
			{
				func_61(uParam1, 8);
			}
			else if (func_89())
			{
				if (Global_265377->f_124517.f_152 == 0)
				{
					Global_3145858->f_224 = func_90(uParam0);
					func_91();
					func_61(uParam1, 5);
				}
				else
				{
					func_49(1);
					func_14(uParam2, 2);
					func_61(uParam1, 8);
				}
			}
			else
			{
				func_88(1);
				func_88(512);
			}
			break;
		case 5:
			if (func_84(player_id(), 1024) && !func_32(65536))
			{
				_0x236905c700fdb54d();
			}
			if (!&Global_1048579)
			{
				_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
			}
			if (uParam0->f_283 >= 10 && uParam0->f_283 <= 13)
			{
				func_77(func_76(uParam0, uParam2, func_75(uParam0->f_283)));
			}
			if (func_32(32))
			{
				func_61(uParam1, 8);
			}
			else if ((!func_55(func_92(uParam2->f_1.f_18, uParam2->f_1.f_17), 16) && !func_93()) && !is_thread_active(Global_265377->f_124745, false))
			{
				func_94();
				_0xb3e8841f6bdaf83e();
				if (func_95(uParam0, uParam2))
				{
					func_96();
					uParam2->f_67 = get_game_timer();
					func_61(uParam1, 6);
				}
				else
				{
					func_61(uParam1, 7);
				}
			}
			break;
		case 6:
			_0xb3e8841f6bdaf83e();
			if (((get_game_timer() - uParam2->f_67) > Global_1901947->f_1.f_30 || !func_32(8)) || func_97())
			{
				func_98();
				func_14(uParam2, 16);
				func_61(uParam1, 8);
			}
			break;
		case 7:
			_0xb3e8841f6bdaf83e();
			if (func_21(uParam0, 1))
			{
				func_14(uParam2, 8);
				uParam2->f_66 = get_network_time_accurate();
				func_61(uParam1, 2);
				func_12(uParam2, 0);
			}
			break;
		case 8:
			if (func_99(uParam0, uParam2))
			{
				func_61(uParam1, 9);
			}
			break;
		case 9:
			if (_0x3cf46f55c6585590())
			{
				return;
			}
			func_100(8388608);
			func_61(uParam1, 10);
			break;
		case 10:
			break;
	}
}

int func_19()
{
	return func_101(&((*Global_263042)[network_player_id_to_int()]->f_1));
}

void func_20()
{
	(*Global_1056141)[network_player_id_to_int()]->f_15.f_11 = 0;
}

bool func_21(var uParam0, int iParam1)
{
	return func_56(uParam0->f_1, iParam1);
}

bool func_22(var uParam0, int iParam1)
{
	return func_56(*uParam0, iParam1);
}

void func_23(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 || iParam0);
}

bool func_24(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

void func_25(int iParam0, int iParam1)
{
	if (&Global_1051139)
	{
		return;
	}
	if (!func_102(&iVar0))
	{
		func_103(iParam0, iParam1, 0);
		return;
	}
	func_104(0, iParam0, 1, iParam1, -1, 1, iVar0);
}

bool func_26(var uParam0)
{
	if (func_22(uParam0, 16))
	{
		return false;
	}
	if (func_105() != 2)
	{
		return false;
	}
	if (!func_22(uParam0, 4))
	{
		return true;
	}
	if (Global_265377->f_124745 == 0 && Global_265377->f_124675 == 0)
	{
		return true;
	}
	return false;
}

void func_27(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1071686->f_28662.f_65.f_28 = 1;
		Global_1071686->f_28662.f_65.f_29 = iParam3;
		Global_1071686->f_28662.f_65.f_26 = iParam6;
		Global_1071686->f_28662.f_65.f_27 = iParam8;
		if (bParam7)
		{
			set_bit(&(Global_1071686->f_28662.f_65.f_8), 18);
		}
	}
	else
	{
		Global_1071686->f_28662.f_65.f_30 = 1;
		Global_1071686->f_28662.f_65.f_33 = !bParam1;
		Global_1071686->f_28662.f_65.f_31 = iParam2;
		Global_1071686->f_28662.f_65.f_32 = iParam4;
		Global_1071686->f_28662.f_65.f_35 = iParam5;
		if (is_bit_set(Global_1071686->f_28662.f_65.f_8, 18))
		{
			clear_bit(&(Global_1071686->f_28662.f_65.f_8), 18);
		}
	}
}

void func_28(bool bParam0)
{
	if (!bParam0)
	{
		func_106(18);
	}
	else
	{
		func_107(18);
	}
}

void func_29(bool bParam0)
{
	if (!bParam0)
	{
		func_106(19);
	}
	else
	{
		func_107(19);
	}
}

void func_30(bool bParam0)
{
	if (!bParam0)
	{
		func_106(25);
	}
	else
	{
		func_107(25);
	}
}

void func_31()
{
	func_108(1);
	func_34(1, 1);
}

bool func_32(int iParam0)
{
	return (Global_265377->f_124517.f_135 && iParam0) != 0;
}

bool func_33(int iParam0)
{
	return func_109(1, iParam0);
}

void func_34(bool bParam0, bool bParam1)
{
	if (func_110(255) == 4)
	{
		return;
	}
	if (func_111(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_106(0);
	}
	else
	{
		if (bParam1)
		{
			func_112(0, 0, 0, 1);
		}
		func_107(0);
		func_113(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_114(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_115(Global_1102219->f_3849, 36);
	func_116(Global_1102219->f_3888, 36);
}

void func_35(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_39() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_117(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_118();
		Global_1900688->f_9 = func_119(Global_1893587->f_2);
		Global_1900688->f_11 = func_120(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_121(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_121(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_121(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

void func_36(int iParam0)
{
	func_122(&(Global_1572887->f_106.f_15), iParam0);
}

void func_37(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 - (Global_265377->f_124517.f_135 && iParam0));
}

void func_38()
{
	terminate_this_thread();
}

int func_39()
{
	return Global_1572887->f_13;
}

bool func_40()
{
	return Global_1051252->f_8;
}

void func_41(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_42(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!get_event_data(1, iParam3, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 48:
			func_123(uParam0, uParam1, uParam2, iParam3);
			break;
	}
}

int func_43(var uParam0)
{
	return *uParam0;
}

bool func_44(var uParam0)
{
	iVar0 = func_124();
	uParam0->f_283 = func_125(func_124());
	if (uParam0->f_9 == 2)
	{
		if (func_71() == 2)
		{
			if (!func_126(uParam0))
			{
				return false;
			}
		}
		else if (func_71() == 1)
		{
			func_127(uParam0);
		}
	}
	else if (uParam0->f_9 == 1)
	{
		if (!func_126(uParam0))
		{
			return false;
		}
	}
	else if (uParam0->f_283 >= 10 && uParam0->f_283 <= 13)
	{
		func_128(uParam0);
	}
	else if (func_71() == 2)
	{
		if (Global_1572887->f_106.f_13 == 3)
		{
			if (Global_1572887->f_106.f_9 <= 0)
			{
				func_129(Global_1572887->f_106, _0x1413b6bf27ab7a95(), Global_1572887->f_106.f_10, 1);
			}
		}
		func_130(uParam0);
	}
	else
	{
		if (Global_1572887->f_106.f_13 == 3)
		{
			if (Global_1572887->f_106.f_9 <= 0)
			{
				func_129(Global_1572887->f_106, _0x1413b6bf27ab7a95(), Global_1572887->f_106.f_10, 1);
			}
		}
		iVar1 = func_131(func_124());
		uParam0->f_17 = func_132(iVar1, uParam0);
	}
	uParam0->f_18 = uParam0->f_17;
	iVar2 = get_random_int_in_range(0, 65536);
	_0xf1b84178f8674195(iVar2);
	return true;
}

void func_45(var uParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	*uParam0 = iParam1;
}

void func_46(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&(uParam0->f_282)) && uParam0->f_18 == 0)
	{
		uParam0->f_18 = 0;
		uParam0->f_17 = 0;
	}
	iVar5 = func_75(uParam0->f_283);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar4 = int_to_playerindex(iVar0);
		bVar8 = false;
		if (!network_is_player_active(iVar4))
		{
			if (_0x72b2e00c9bac6789(&(uParam0->f_282), iVar0))
			{
				func_133(uParam0, iVar4);
				_0xd426e2e3288469d6(&(uParam0->f_282), iVar0);
			}
		}
		else if (!network_is_player_a_participant(iVar4))
		{
			if (_0x72b2e00c9bac6789(&(uParam0->f_282), iVar0))
			{
				func_133(uParam0, iVar4);
				_0xd426e2e3288469d6(&(uParam0->f_282), iVar0);
			}
		}
		else if (_0x72b2e00c9bac6789(&(uParam0->f_282), iVar0))
		{
		}
		else if (&(*Global_1056141)[iVar0]->f_187.f_11[iVar5] == 0)
		{
		}
		else if (uParam0->f_17 > 0)
		{
			bVar9 = false;
			iVar1 = 0;
			while (iVar1 < uParam0->f_17)
			{
				if (uParam0->f_23[iVar1]->f_1 == &(*Global_1056141)[iVar0]->f_187.f_11[iVar5])
				{
					if (uParam0->f_23[iVar1]->f_7)
					{
						uParam0->f_23[iVar1] = iVar4;
						uParam0->f_23[iVar1]->f_7 = 0;
					}
					bVar9 = true;
				}
				else
				{
					if (uParam0->f_23[iVar1]->f_7)
					{
						bVar7 = true;
						if (uParam0->f_23[iVar1]->f_1 == uParam1->f_1.f_17)
						{
							bVar6 = true;
							iVar2 = iVar1;
						}
						else if (bVar6)
						{
							iVar3++;
						}
					}
					iVar1++;
				}
			}
			if (bVar7)
			{
				iVar10 = (iVar2 + iVar3);
				uParam0->f_23[iVar10]->f_1 = &(*Global_1056141)[iVar0]->f_187.f_11[iVar5];
				uParam0->f_23[iVar10]->f_2 = (*Global_1056141)[iVar0]->f_187.f_11[iVar5]->f_1;
				uParam0->f_23[iVar10]->f_3 = (*Global_1056141)[iVar0]->f_187.f_11[iVar5]->f_2;
				uParam0->f_23[iVar10]->f_4 = (*Global_1056141)[iVar0]->f_187.f_11[iVar5]->f_3;
				uParam0->f_23[iVar10]->f_5 = (*Global_1056141)[iVar0]->f_187.f_11[iVar5]->f_4;
				uParam0->f_23[iVar10]->f_6 = (*Global_1056141)[iVar0]->f_187.f_11[iVar5]->f_5;
				uParam0->f_23[iVar10] = iVar4;
				uParam0->f_23[iVar10]->f_7 = 0;
				bVar8 = true;
			}
			if (bVar9)
			{
			}
			else
			{
				_0x31010318ba9897ac(&(uParam0->f_282), iVar0);
				if (!bVar8)
				{
					uParam0->f_23[uParam0->f_18]->f_1 = &(*Global_1056141)[iVar0]->f_187.f_11[iVar5];
					uParam0->f_23[uParam0->f_18]->f_2 = (*Global_1056141)[iVar0]->f_187.f_11[iVar5]->f_1;
					uParam0->f_23[uParam0->f_18]->f_3 = (*Global_1056141)[iVar0]->f_187.f_11[iVar5]->f_2;
					uParam0->f_23[uParam0->f_18]->f_4 = (*Global_1056141)[iVar0]->f_187.f_11[iVar5]->f_3;
					uParam0->f_23[uParam0->f_18]->f_5 = (*Global_1056141)[iVar0]->f_187.f_11[iVar5]->f_4;
					uParam0->f_23[uParam0->f_18]->f_6 = (*Global_1056141)[iVar0]->f_187.f_11[iVar5]->f_5;
					uParam0->f_23[uParam0->f_18] = iVar4;
					uParam0->f_18++;
					uParam0->f_17++;
				}
			}
			iVar0++;
			if (uParam0->f_18 <= 1)
			{
				uParam0->f_19 = 0;
			}
		}
	}
}

int func_47(var uParam0, var uParam1)
{
	if (func_21(uParam0, 4))
	{
		uParam0->f_280 = get_network_time_accurate();
		return 3;
	}
	if (uParam0->f_17 <= 0)
	{
		return 3;
	}
	if (func_71() == 2)
	{
		func_48(uParam0, 4);
	}
	bVar8 = false;
	if (_network_is_player_index_valid(&(uParam0->f_23[uParam0->f_16])) && network_is_player_active(&(uParam0->f_23[uParam0->f_16])))
	{
		network_handle_from_player(&(uParam0->f_23[uParam0->f_16]), &uVar0);
	}
	else
	{
		bVar7 = true;
		network_handle_from_player(player_id(), &uVar0);
	}
	if (uParam0->f_283 >= 10 && uParam0->f_283 <= 13)
	{
		bVar8 = true;
	}
	if (bVar8)
	{
		func_134(uParam0, uParam0->f_23[uParam0->f_16]->f_1);
		func_135(uParam0, uParam0->f_23[uParam0->f_16]->f_2);
		func_2(uParam0, &uVar0);
		uParam0->f_16++;
		if (uParam0->f_16 >= uParam0->f_17)
		{
			uParam0->f_16 = 0;
		}
		return 2;
	}
	if (uParam0->f_19 <= (uParam0->f_18 - 1))
	{
		uParam0->f_16 = network_get_random_int_ranged((0 + uParam0->f_19), (uParam0->f_18 - 1));
	}
	else
	{
		uParam0->f_16 = 0;
	}
	if (((bVar7 && func_136(uParam0->f_23[uParam0->f_16]->f_1) == -1) && func_137(uParam0->f_23[uParam0->f_16]->f_1) == -1) && func_138(uParam0->f_23[uParam0->f_16]->f_1) == -1)
	{
		bVar9 = true;
	}
	if (!bVar9)
	{
		if (bVar7)
		{
			uParam0->f_23[uParam0->f_16] = player_id();
		}
		func_134(uParam0, uParam0->f_23[uParam0->f_16]->f_1);
		func_135(uParam0, uParam0->f_23[uParam0->f_16]->f_2);
		func_2(uParam0, &uVar0);
	}
	uVar10 = uParam0->f_23[uParam0->f_16]->f_1;
	uParam0->f_23[uParam0->f_16]->f_1 = (uParam0->f_23[(uParam0->f_18 - 1)])->f_1;
	(uParam0->f_23[(uParam0->f_18 - 1)])->f_1 = uVar10;
	uVar11 = uParam0->f_23[uParam0->f_16]->f_2;
	uParam0->f_23[uParam0->f_16]->f_2 = (uParam0->f_23[(uParam0->f_18 - 1)])->f_2;
	(uParam0->f_23[(uParam0->f_18 - 1)])->f_2 = uVar11;
	uVar12 = &uParam0->f_23[uParam0->f_16];
	uParam0->f_23[uParam0->f_16] = &uParam0->f_23[(uParam0->f_18 - 1)];
	uParam0->f_23[(uParam0->f_18 - 1)] = uVar12;
	uParam0->f_18 = (uParam0->f_18 - 1);
	uParam0->f_19 = 0;
	if (uParam0->f_18 <= 0)
	{
		uParam0->f_18 = uParam0->f_17;
		_0xde544b7ec0c187cc(&(uParam0->f_282));
		if (uParam0->f_18 > 1)
		{
			uParam0->f_19 = 1;
		}
	}
	if (bVar9)
	{
		if (uParam0->f_20 > 32)
		{
			return 3;
		}
		if (func_71() == 2)
		{
			func_14(uParam1, 2);
			return 3;
		}
		uParam0->f_20++;
		return 1;
	}
	uParam0->f_20 = 0;
	return 2;
}

void func_48(var uParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	func_41(&(uParam0->f_1), iParam1);
}

void func_49(int iParam0)
{
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		func_41(&(Global_1194053->f_3), 32);
		func_41(&(Global_1194053->f_4), 12);
		Global_1194053->f_498 = iVar0;
		if (network_is_player_active(player_id()) && _0x424b17a7dc5c90bc(player_id()))
		{
			func_41(&(Global_1194053->f_4), 2);
		}
		_0xc08bff658b2e51da(0);
		Global_1194053->f_5[5] = 0;
		func_41(Global_1194053->f_5[5], 1);
	}
	Global_1194053->f_5[3] = 0;
	func_41(Global_1194053->f_5[3], 1);
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		func_41(Global_1194053->f_5[3], 6);
		return;
	}
	if (!_0x0f99f6436528a089(iVar1))
	{
		func_41(Global_1194053->f_5[3], 6);
		return;
	}
	_0x0a04a07bc3074edb(iParam0);
}

void func_50(var uParam0, var uParam1)
{
	iVar0 = network_get_player_from_gamer_handle(&(uParam0->f_2));
	if (_network_is_player_index_valid(iVar0) && network_is_player_active(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar2))
		{
		}
		else if (!network_is_player_a_participant(iVar2))
		{
		}
		else if (uParam1[iVar1] < 3)
		{
		}
		else
		{
			network_handle_from_player(iVar2, &uVar3);
			func_2(uParam0, &uVar3);
			return;
		}
		iVar1++;
	}
	network_get_local_handle(&uVar3);
	func_2(uParam0, &uVar3);
}

bool func_51(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (!network_is_participant_active(int_to_participantindex(iVar0)))
		{
		}
		else if (func_15((*uParam0)[iVar0]) <= iParam1)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_52(var uParam0, var uParam1)
{
	if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar1))
		{
		}
		else if ((*uParam1)[iVar0]->f_1 == -1 || (*uParam1)[iVar0]->f_2 == -1)
		{
		}
		else if (uParam0->f_21 < (*uParam1)[iVar0]->f_1 || uParam0->f_22 < (*uParam1)[iVar0]->f_2)
		{
			func_48(uParam0, 8);
			return;
		}
		iVar0++;
	}
}

void func_53(var uParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	func_122(&(uParam0->f_1), iParam1);
}

var func_54(int iParam0, int iParam1)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (iParam0 == 2147483647)
	{
		return uVar0;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (&Global_262155->f_1[iVar1] == iParam0 && (iParam1 == 0 || Global_262155->f_1[iVar1]->f_1 == iParam1))
		{
			return Global_262155->f_1[iVar1]->f_2;
		}
		iVar1++;
	}
	return uVar0;
}

bool func_55(var uParam0, int iParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
		}
		else if (!_0x72b2e00c9bac6789(&uParam0, iVar0))
		{
		}
		else if (((*Global_263042)[iVar0]->f_68 && iParam1) != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_56(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_57(int iParam0)
{
	Global_262151 = (&Global_262151 - (Global_262151 && iParam0));
}

void func_58(int iParam0)
{
	func_41(&(Global_1572887->f_106.f_15), iParam0);
}

void func_59(var uParam0)
{
	if (func_71() != 1)
	{
		return;
	}
	func_139(1024);
	iVar0 = 3;
	iVar1 = func_125(func_124());
	switch (iVar1)
	{
		case 0:
			iVar0 = 4;
			break;
		case 1:
			iVar0 = 19;
			break;
		case 5:
			iVar0 = 10;
			break;
		case 6:
			iVar0 = 11;
			break;
		case 8:
			iVar0 = 20;
			break;
		case 9:
			iVar0 = 21;
			break;
		case 2:
			iVar0 = 12;
			break;
		case 3:
			iVar0 = 13;
			break;
		case 4:
			iVar0 = 14;
			break;
		case 10:
			iVar0 = 7;
			break;
		case 11:
			iVar0 = 6;
			break;
		case 12:
			iVar0 = 8;
			break;
		case 13:
			iVar0 = 9;
			break;
		case 14:
			iVar0 = 18;
			break;
	}
	if (is_orbis_version())
	{
		switch (iVar1)
		{
			case 15:
				iVar0 = 15;
				break;
			case 16:
				iVar0 = 16;
				break;
			case 17:
				iVar0 = 17;
				break;
		}
	}
	func_140(iVar0);
}

void func_60(var uParam0)
{
	iVar2 = participant_id_to_int();
	iVar3 = func_131(func_124());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = get_hash_key(Global_265377->f_117359[iVar0]);
		if (iVar1 == iVar3)
		{
			(*uParam0)[iVar2]->f_1 = &Global_265377->f_117359.f_6923[iVar0];
			(*uParam0)[iVar2]->f_2 = &Global_265377->f_117359.f_6956[iVar0];
			return;
		}
		iVar0++;
	}
}

void func_61(var uParam0, int iParam1)
{
	(*uParam0)[participant_id_to_int()] = iParam1;
}

bool func_62()
{
	if (!is_thread_active(&(Global_1051252->f_16[5]), false))
	{
		return false;
	}
	if (!network_is_script_active("net_ugc_global_loader", -1, true, 0))
	{
		return false;
	}
	return true;
}

bool func_63()
{
	return Global_1572887->f_266 > 0;
}

void func_64(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
}

void func_65()
{
	iVar0 = network_player_id_to_int();
	if (iVar0 == 255)
	{
		return;
	}
	if (Global_1102219->f_3672 != iVar0)
	{
		Global_1102219->f_3672 = iVar0;
	}
}

int func_66(var uParam0)
{
	return uParam0->f_10;
}

int func_67(var uParam0)
{
	return uParam0->f_11;
}

bool func_68(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_72(uParam0, 4194304);
		return true;
	}
	iVar0 = func_137(iParam1);
	if (iVar0 == -1)
	{
		return false;
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
	func_141(Global_265377->f_4[iVar0]);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_142(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_143(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_144(&(Global_265377->f_63755[iVar0]));
	vVar2 = { func_145(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_146(iVar1) };
	}
	else if (func_147(uParam0->f_17))
	{
		uParam0->f_53 = { func_149(func_148(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_150(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_151(uParam0->f_16) };
		if (!func_73(uParam0->f_53))
		{
			uParam0->f_53 = { func_153(func_152(uParam0->f_21.f_2)) };
		}
	}
	func_154(uParam0);
	func_72(uParam0, 4194304);
	return true;
}

bool func_69(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_72(uParam0, 4194304);
		return true;
	}
	iVar0 = func_138(iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	MemCopy(&(uParam0->f_27), {*Global_265377->f_73818.f_4[iVar0]}, 3);
	uParam0->f_37 = { Global_265377->f_73818.f_4[iVar0]->f_7 };
	uParam0->f_45 = Global_265377->f_73818.f_4[iVar0]->f_22;
	uParam0->f_46 = Global_265377->f_73818.f_4[iVar0]->f_30;
	uParam0->f_16 = Global_265377->f_73818.f_4[iVar0]->f_28;
	uParam0->f_17 = &Global_265377->f_73818.f_20405[iVar0];
	uParam0->f_61 = { Global_265377->f_73818.f_4[iVar0]->f_24 };
	uParam0->f_30 = Global_265377->f_73818.f_4[iVar0]->f_34;
	uParam0->f_32 = Global_265377->f_73818.f_4[iVar0]->f_32;
	uParam0->f_33 = Global_265377->f_73818.f_4[iVar0]->f_33;
	uParam0->f_21 = 2;
	uParam0->f_21.f_1 = 0;
	uParam0->f_21.f_4 = iParam4;
	uParam0->f_21.f_2 = Global_265377->f_73818.f_4[iVar0]->f_29;
	uParam0->f_26 = Global_265377->f_73818.f_4[iVar0]->f_31;
	uParam0->f_34 = Global_265377->f_73818.f_4[iVar0]->f_40;
	uParam0->f_1 = { Global_265377->f_73818.f_4[iVar0]->f_15 };
	MemCopy(&(uParam0->f_8), {Global_265377->f_73818.f_4[iVar0]->f_4}, 8);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_142(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_143(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_144(&(Global_265377->f_73818.f_20405[iVar0]));
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_146(iVar1) };
	}
	else if (func_147(uParam0->f_17))
	{
		uParam0->f_53 = { func_149(func_148(uParam0->f_17)) };
	}
	else
	{
		uParam0->f_53 = { func_151(uParam0->f_16) };
		if (!func_73(uParam0->f_53))
		{
			uParam0->f_53 = { func_153(func_152(uParam0->f_21.f_2)) };
		}
	}
	func_154(uParam0);
	func_72(uParam0, 4194304);
	return true;
}

bool func_70(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		return false;
	}
	iVar0 = func_136(iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	MemCopy(&(uParam0->f_27), {*Global_265377->f_97486.f_4[iVar0]}, 3);
	uParam0->f_37 = { Global_265377->f_97486.f_4[iVar0]->f_7 };
	uParam0->f_45 = Global_265377->f_97486.f_4[iVar0]->f_22;
	uParam0->f_46 = Global_265377->f_97486.f_4[iVar0]->f_30;
	uParam0->f_16 = iParam1;
	uParam0->f_17 = iParam1;
	uParam0->f_61 = { Global_265377->f_97486.f_4[iVar0]->f_24 };
	uParam0->f_30 = Global_265377->f_97486.f_4[iVar0]->f_34;
	uParam0->f_32 = Global_265377->f_97486.f_4[iVar0]->f_32;
	uParam0->f_33 = Global_265377->f_97486.f_4[iVar0]->f_33;
	uParam0->f_21 = 0;
	uParam0->f_21.f_1 = 0;
	uParam0->f_21.f_4 = 2;
	uParam0->f_21.f_2 = Global_265377->f_97486.f_4[iVar0]->f_29;
	uParam0->f_21.f_3 = Global_265377->f_97486.f_4[iVar0]->f_31;
	uParam0->f_26 = Global_265377->f_97486.f_4[iVar0]->f_31;
	uParam0->f_34 = Global_265377->f_97486.f_4[iVar0]->f_40;
	uParam0->f_1 = { Global_265377->f_97486.f_4[iVar0]->f_15 };
	MemCopy(&(uParam0->f_8), {Global_265377->f_97486.f_4[iVar0]->f_4}, 8);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_142(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_143(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	uParam0->f_53 = { func_153(func_152(uParam0->f_21.f_2)) };
	func_72(uParam0, 4194304);
	return true;
}

int func_71()
{
	return Global_1572887->f_106;
}

void func_72(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

bool func_73(struct<2> Param0)
{
	if (!func_155(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_156(Param0))
	{
		return false;
	}
	return true;
}

void func_74(int iParam0)
{
	if (!func_157(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_158(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 0;
		case 11:
			return 1;
		case 12:
			return 2;
		case 13:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_76(var uParam0, var uParam1, int iParam2)
{
	iVar0 = network_player_id_to_int();
	iVar1 = 0;
	iVar2 = 0;
	if (&(*Global_1056141)[iVar0]->f_187.f_11[iParam2] == 0)
	{
		return -1;
	}
	iVar1 = 0;
	while (iVar1 <= (uParam0->f_17 - 1))
	{
		if (uParam0->f_23[iVar1]->f_1 == &(*Global_1056141)[iVar0]->f_187.f_11[iParam2])
		{
		}
		else
		{
			iVar1++;
		}
	}
	bVar3 = true;
	iVar2 = 0;
	while (iVar2 <= (uParam0->f_17 - 1))
	{
		if (uParam0->f_23[iVar2]->f_1 == uParam1->f_1.f_17)
		{
			bVar3 = false;
		}
		else
		{
			iVar2++;
		}
	}
	iVar4 = (uParam0->f_16 - 1);
	iVar5 = (iVar1 - iVar4);
	if (iVar5 < 0)
	{
		iVar5 = (iVar5 + uParam0->f_17);
	}
	if (bVar3)
	{
		if (iVar4 == iVar1)
		{
			iVar5 = uParam0->f_17;
		}
		else
		{
			iVar5++;
		}
	}
	return iVar5;
}

void func_77(int iParam0)
{
	Global_1572887->f_106.f_90 = iParam0;
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_156 = iParam1;
}

void func_79(int iParam0)
{
	Global_265377->f_124517.f_153 = iParam0;
}

bool func_80(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (!func_159(&((*Global_263042)[iVar0]->f_1), 4194304))
	{
		return false;
	}
	if (func_159(&((*Global_263042)[iVar0]->f_1), 64))
	{
		return false;
	}
	if (!func_160((*Global_263042)[iVar0]->f_1.f_53, func_159(&((*Global_263042)[iVar0]->f_1), 32768), 1))
	{
		return false;
	}
	if (func_161(&((*Global_263042)[iVar0]->f_1)))
	{
		return false;
	}
	if ((*Global_263042)[iVar0]->f_1.f_18 == 2147483647)
	{
		return false;
	}
	if ((*Global_263042)[iVar0]->f_1.f_16 == 0)
	{
		return false;
	}
	iVar1 = network_player_id_to_int();
	(*Global_263042)[iVar1]->f_1 = iParam0;
	(*Global_263042)[iVar1]->f_1.f_19 = get_network_time_accurate();
	_0x5a91bcef74944e93(iParam0, 30f);
	func_141(&((*Global_263042)[iVar0]->f_1.f_27));
	if (func_159(&((*Global_263042)[&Global_1296859]->f_1), 64) && (*Global_263042)[&Global_1296859]->f_1.f_17 == (*Global_263042)[iVar0]->f_1.f_17)
	{
		func_23(2097152);
	}
	return true;
}

int func_81(var uParam0, int iParam1)
{
	if ((*Global_263042)[iParam1]->f_1.f_17 == 0)
	{
		return 1;
	}
	_copy_memory(&(uParam0->f_1), &((*Global_263042)[iParam1]->f_1), 64);
	return 2;
}

int func_82(var uParam0)
{
	iVar0 = func_162(uParam0->f_1.f_18, uParam0->f_1.f_17);
	if (iVar0 == 2)
	{
		if (!func_84(player_id(), 1024))
		{
			func_88(1024);
			if (!Global_1572887->f_266.f_92)
			{
				func_27(1, 1, 0, 0, 0, 0, 0, 0, 0);
			}
			if (func_55(func_54(uParam0->f_1.f_18, uParam0->f_1.f_17), 8192))
			{
				func_72(&(uParam0->f_1), 16);
			}
		}
	}
	else if (iVar0 == 3)
	{
		func_139(1024);
	}
	return iVar0;
}

int func_83(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (!network_is_participant_active(int_to_participantindex(iVar0)))
		{
		}
		else if (func_15((*uParam0)[iVar0]) == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_84(int iParam0, int iParam1)
{
	return ((*Global_263042)[iParam0]->f_68 && iParam1) != 0;
}

bool func_85(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_32(2097152))
	{
		return true;
	}
	if (func_159(&((*Global_263042)[&Global_1296859]->f_1), 2097152) && func_159(&((*Global_263042)[&Global_1296859]->f_1), 64))
	{
		if ((*Global_263042)[&Global_1296859]->f_1.f_16 == uParam0->f_16)
		{
			(*Global_263042)[&Global_1296859]->f_1.f_20 = ((*Global_263042)[&Global_1296859]->f_1.f_20 || uParam0->f_20);
			if (iParam1 != 255)
			{
				(*Global_263042)[&Global_1296859]->f_1 = iParam1;
			}
			(*Global_263042)[&Global_1296859]->f_1.f_18 = uParam0->f_18;
			func_87(&((*Global_263042)[&Global_1296859]->f_1), 64);
			func_37(32768);
			if (bParam2)
			{
				func_72(&((*Global_263042)[&Global_1296859]->f_1), 64);
			}
			if (bParam3)
			{
				func_23(32768);
			}
			func_78(&(Global_265377->f_124517), 0);
			return true;
		}
		else
		{
			func_163();
			func_164(2);
		}
	}
	if (func_165(uParam0, 0) && !func_166(255))
	{
		func_78(&(Global_265377->f_124517), 0);
		return true;
	}
	if (!func_160(uParam0->f_53, func_159(uParam0, 32768), 1))
	{
		return false;
	}
	if (!func_167(*uParam0))
	{
		func_78(&(Global_265377->f_124517), 18);
		return false;
	}
	if (func_161(uParam0))
	{
		func_78(&(Global_265377->f_124517), 19);
		return false;
	}
	if (func_168(uParam0->f_53))
	{
		func_78(&(Global_265377->f_124517), 20);
		return false;
	}
	if (uParam0->f_18 == 2147483647)
	{
		if (iParam1 == 255)
		{
			func_78(&(Global_265377->f_124517), 21);
			return false;
		}
		uParam0->f_18 = func_169(iParam1);
	}
	if (!func_170(uParam0->f_53))
	{
		func_171(uParam0->f_53);
	}
	if (iParam1 != 255)
	{
		*uParam0 = iParam1;
	}
	func_87(&((*Global_263042)[&Global_1296859]->f_1), 64);
	func_37(32768);
	if (bParam2)
	{
		func_72(uParam0, 64);
	}
	if (bParam3)
	{
		func_23(32768);
	}
	iVar0 = network_player_id_to_int();
	(*Global_263042)[iVar0]->f_1 = { *uParam0 };
	(*Global_263042)[iVar0]->f_1.f_19 = get_network_time_accurate();
	func_172(uParam0);
	func_87(&((*Global_263042)[iVar0]->f_1), 2097152);
	func_164(1);
	func_78(&(Global_265377->f_124517), 0);
	return true;
}

bool func_86(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		iParam0 = player_id();
	}
	iVar0 = iParam0;
	if (func_173(iParam0) > 2)
	{
		return true;
	}
	if ((*Global_263042)[iVar0]->f_1.f_16 != 0)
	{
		return true;
	}
	if ((*Global_263042)[iVar0]->f_1 != 255)
	{
		return true;
	}
	if ((*Global_263042)[iVar0]->f_1.f_18 != 2147483647)
	{
		return true;
	}
	return false;
}

void func_87(var uParam0, int iParam1)
{
	if (!(uParam0->f_20 && iParam1) != 0)
	{
		return;
	}
	uParam0->f_20 = (uParam0->f_20 - (uParam0->f_20 && iParam1));
}

void func_88(int iParam0)
{
	(*Global_263042)[&Global_1296859]->f_68 = ((*Global_263042)[&Global_1296859]->f_68 || iParam0);
}

bool func_89()
{
	return Global_263042[&Global_1296859] >= 9;
}

var func_90(var uParam0)
{
	return uParam0->f_284;
}

void func_91()
{
	iVar0 = func_125(Global_1572887->f_106.f_9);
	if ((iVar0 == -1 || iVar0 == 5) || iVar0 == 6)
	{
		return;
	}
	func_175(func_174(1511238709, 1994758582), 1);
	iVar1 = func_176(&iVar0, &iVar1);
	if ((iVar1 == 1412564789 || iVar1 == 2090637823) || iVar1 == -1740003396)
	{
		func_175(func_174(1511238709, 862894291), 1);
	}
	func_175(func_174(1511238709, iVar1), 1);
}

var func_92(int iParam0, int iParam1)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (iParam0 == 2147483647)
	{
		return uVar0;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar1 = int_to_playerindex(iVar2);
		if (!network_is_player_active(iVar1))
		{
		}
		else if (!network_is_player_a_participant_on_script(iVar1, "net_ugc_global_loader", -1))
		{
		}
		else if ((*Global_263042)[iVar2]->f_1.f_18 == 2147483647)
		{
		}
		else if ((*Global_263042)[iVar2]->f_1.f_18 != iParam0)
		{
		}
		else if (iParam1 != 0)
		{
			if ((*Global_263042)[iVar2]->f_1.f_16 != iParam1 && (*Global_263042)[iVar2]->f_1.f_17 != iParam1)
			{
			}
			else
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
			iVar2++;
			return uVar0;
		}
	}
}

bool func_93()
{
	return &Global_1048577;
}

void func_94()
{
	iVar0 = func_125(Global_1572887->f_106.f_9);
	if ((iVar0 == -1 || iVar0 == 5) || iVar0 == 6)
	{
		return;
	}
	bVar1 = is_bit_set(&Global_1048626, 0);
	bVar2 = is_bit_set(&Global_1048626, 1);
	iVar3 = func_176(&iVar0, &iVar3);
	if ((iVar3 == 1412564789 || iVar3 == 2090637823) || iVar3 == -1740003396)
	{
		if (bVar1)
		{
			func_175(func_174(-1892463704, 862894291), 1);
		}
		else if (bVar2)
		{
			func_175(func_174(1374282888, 862894291), 1);
		}
	}
	if (bVar1)
	{
		func_175(func_174(-1892463704, 1994758582), 1);
		func_175(func_174(-1892463704, iVar3), 1);
	}
	else if (bVar2)
	{
		func_175(func_174(1374282888, 1994758582), 1);
		func_175(func_174(1374282888, iVar3), 1);
	}
}

bool func_95(var uParam0, var uParam1)
{
	if (Global_1572887->f_360.f_4 != 0)
	{
		return false;
	}
	if (func_105() != 2)
	{
		return false;
	}
	if (func_21(uParam0, 8))
	{
		return true;
	}
	if (!Global_1901947->f_1.f_28)
	{
		return false;
	}
	if ((((Global_1901947->f_1.f_29 && uParam0->f_283 != 6) && uParam0->f_283 != 5) && uParam0->f_283 != 8) && uParam0->f_283 != 9)
	{
		return false;
	}
	if (func_21(uParam0, 4))
	{
		return false;
	}
	fVar0 = to_float(network_get_num_participants());
	fVar1 = to_float(uParam1->f_1.f_33);
	fVar2 = (fVar0 / fVar1);
	fVar3 = func_177(uParam0->f_283);
	if (fVar2 >= fVar3)
	{
		return false;
	}
	return true;
}

void func_96()
{
	func_178(1);
	func_58(32768);
	func_64(1024);
}

bool func_97()
{
	if (Global_1572887->f_360.f_8 == 2)
	{
		return true;
	}
	return false;
}

void func_98()
{
	do_screen_fade_out(0);
	func_179(10);
	Global_1572887->f_106.f_77 = get_game_timer();
	func_58(1073741824);
	func_58(131072);
	func_58(8);
	func_178(5);
}

bool func_99(var uParam0, var uParam1)
{
	if (uParam0->f_280 != 0 && get_time_difference(uParam0->f_280, get_network_time_accurate()) > Global_1901947->f_1.f_15)
	{
		func_23(2048);
		return true;
	}
	if (Global_265377->f_124517.f_152 != 0)
	{
		return false;
	}
	if ((Global_1048581 && !func_22(uParam1, 2)) && !func_22(uParam1, 16))
	{
		return false;
	}
	if (func_33(255))
	{
		if (!func_22(uParam1, 4) || Global_265377->f_124745 == 0)
		{
			return false;
		}
	}
	return true;
}

void func_100(int iParam0)
{
	if (func_157(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_180(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

int func_101(var uParam0)
{
	if (!func_165(uParam0, 0))
	{
		return 0;
	}
	if (func_166(255) && !func_84(player_id(), 8192))
	{
		_0x7de4643157ad646c(Global_265377->f_124675);
	}
	func_163();
	return 1;
}

bool func_102(int iParam0)
{
	if (_get_number_of_references_of_script_with_name_hash(1814880805) > 0)
	{
		*iParam0 = 1814880805;
		return true;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-814065802) > 0)
	{
		*iParam0 = -814065802;
		return true;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-701235215) > 0)
	{
		*iParam0 = -701235215;
		return true;
	}
	return false;
}

int func_103(int iParam0, int iParam1, int iParam2)
{
	if (Global_1572887->f_360.f_4 != 0)
	{
		return 0;
	}
	if (Global_1572887->f_266 >= 6 && Global_1572887->f_266 < 23)
	{
		return 0;
	}
	Global_1572887->f_360.f_4 = 2;
	Global_1572887->f_360.f_5 = (Global_1572887->f_360.f_5 || iParam1);
	Global_1572887->f_360.f_6 = iParam0;
	Global_1572887->f_360.f_25 = iParam2;
	Global_1572887->f_360.f_26 = 0;
	if (func_56(iParam1, 128))
	{
		func_122(&(Global_1572887->f_360.f_5), 2);
	}
	return 1;
}

void func_104(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (&Global_1051139)
	{
		return;
	}
	Global_1051139->f_2 = iParam0;
	Global_1051139->f_3 = iParam1;
	Global_1051139->f_4 = iParam2;
	Global_1051139->f_6 = iParam3;
	Global_1051139->f_5 = iParam4;
	if (!bParam5)
	{
		iVar0 = get_hash_of_this_script_name();
	}
	else
	{
		iVar0 = iParam6;
	}
	Global_1051139->f_1 = iVar0;
	Global_1051139 = 1;
}

int func_105()
{
	if (!func_56(Global_1572887->f_266.f_63, 8))
	{
		return 2;
	}
	if (Global_1572887->f_266.f_2 != 4)
	{
		return 1;
	}
	if (Global_1572887->f_266 > 7 && Global_1572887->f_266 < 23)
	{
		return 0;
	}
	return 2;
}

int func_106(int iParam0)
{
	if (func_181(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0)
{
	if (func_182(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_108(bool bParam0)
{
	if (!bParam0)
	{
		func_106(5);
	}
	else
	{
		if (func_110(255) == 4)
		{
			return;
		}
		func_107(5);
	}
}

bool func_109(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_183(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_184())
	{
		return func_183(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_183(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_110(int iParam0)
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

bool func_111(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_112(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_185(iParam0);
	if (!func_186(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_187(128) && !func_188(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_189() == 4)
	{
		func_106(18);
	}
	func_190(1024);
}

void func_113(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_114(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_115(struct<29> Param0, var uParam29, int iParam30)
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

void func_116(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_117(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_118()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_121(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_123(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!get_event_data(1, iParam3, &Var0, 6))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 0:
			func_19();
			if (_does_thread_exist(Global_265377->f_124745))
			{
				_0x7de4643157ad646c(Global_265377->f_124745);
			}
			if (_does_thread_exist(Global_265377->f_124675))
			{
				_0x7de4643157ad646c(Global_265377->f_124675);
			}
			break;
		case 1:
			break;
		default:
			break;
	}
}

int func_124()
{
	if (!func_191())
	{
		return -1;
	}
	return Global_1572887->f_106.f_9;
}

int func_125(int iParam0)
{
	if (6 == iParam0)
	{
		return 10;
	}
	if (5 == iParam0)
	{
		return 11;
	}
	if (7 == iParam0)
	{
		return 12;
	}
	if (8 == iParam0)
	{
		return 13;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iParam0 != &Global_265377->f_117359.f_6758[iVar0])
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (&Global_265377->f_117359.f_6725[iVar0] != &Global_265354->f_1[iVar1])
				{
				}
				else
				{
					return iVar1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_126(var uParam0)
{
	if (get_time_difference(uParam0->f_281, get_network_time_accurate()) > 30000)
	{
		return true;
	}
	if (!func_192(uParam0->f_2))
	{
		return false;
	}
	if (!network_is_gamer_in_my_session(&(uParam0->f_2)))
	{
		return false;
	}
	iVar0 = network_get_player_from_gamer_handle(&(uParam0->f_2));
	if (!network_is_player_active(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if ((*Global_1056141)[iVar1]->f_187.f_230 == 0)
	{
		return false;
	}
	uParam0->f_23[0]->f_1 = (*Global_1056141)[iVar1]->f_187.f_230;
	uParam0->f_23[0] = iVar0;
	uParam0->f_17 = 1;
	uParam0->f_281 = get_network_time_accurate();
	return true;
}

int func_127(var uParam0)
{
	if (!func_192(uParam0->f_2))
	{
		return 0;
	}
	if (!network_is_gamer_in_my_session(&(uParam0->f_2)))
	{
		return 0;
	}
	iVar0 = network_get_player_from_gamer_handle(&(uParam0->f_2));
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	iVar1 = iVar0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		uParam0->f_23[iVar2]->f_1 = &(*Global_1056141)[iVar1]->f_187.f_36[iVar2];
		uParam0->f_23[iVar2]->f_2 = (*Global_1056141)[iVar1]->f_187.f_36[iVar2]->f_1;
		uParam0->f_23[iVar2]->f_3 = (*Global_1056141)[iVar1]->f_187.f_36[iVar2]->f_2;
		uParam0->f_23[iVar2]->f_4 = (*Global_1056141)[iVar1]->f_187.f_36[iVar2]->f_3;
		uParam0->f_23[iVar2]->f_5 = (*Global_1056141)[iVar1]->f_187.f_36[iVar2]->f_4;
		uParam0->f_23[iVar2]->f_6 = (*Global_1056141)[iVar1]->f_187.f_36[iVar2]->f_5;
		if (uParam0->f_23[iVar2]->f_1 != 0)
		{
			uParam0->f_17++;
		}
		iVar2++;
	}
	return 1;
}

void func_128(var uParam0)
{
	iVar2 = 0;
	iVar4 = func_75(uParam0->f_283);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar3))
		{
			_0xd426e2e3288469d6(&(uParam0->f_282), iVar0);
		}
		else if (!network_is_player_a_participant(iVar3))
		{
			_0xd426e2e3288469d6(&(uParam0->f_282), iVar0);
		}
		else if (&(*Global_1056141)[iVar0]->f_187.f_11[iVar4] == 0)
		{
		}
		else if (iVar2 > 0)
		{
			bVar5 = false;
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (uParam0->f_23[iVar1]->f_1 == &(*Global_1056141)[iVar0]->f_187.f_11[iVar4])
				{
					bVar5 = true;
				}
				else
				{
					iVar1++;
				}
			}
			if (bVar5)
			{
			}
			else
			{
				_0x31010318ba9897ac(&(uParam0->f_282), iVar0);
				uParam0->f_23[iVar2]->f_1 = &(*Global_1056141)[iVar0]->f_187.f_11[iVar4];
				uParam0->f_23[iVar2]->f_2 = (*Global_1056141)[iVar0]->f_187.f_11[iVar4]->f_1;
				uParam0->f_23[iVar2]->f_3 = (*Global_1056141)[iVar0]->f_187.f_11[iVar4]->f_2;
				uParam0->f_23[iVar2]->f_4 = (*Global_1056141)[iVar0]->f_187.f_11[iVar4]->f_3;
				uParam0->f_23[iVar2]->f_5 = (*Global_1056141)[iVar0]->f_187.f_11[iVar4]->f_4;
				uParam0->f_23[iVar2]->f_6 = (*Global_1056141)[iVar0]->f_187.f_11[iVar4]->f_5;
				uParam0->f_23[iVar2] = iVar3;
				iVar2++;
			}
			iVar0++;
			iVar6 = 0;
			while (iVar2 < 2 && iVar2 < 32)
			{
				iVar7 = func_193(iVar4);
				iVar6++;
				if (iVar2 > 0 && iVar6 < 100)
				{
					bVar8 = false;
					iVar1 = 0;
					while (iVar1 < iVar2)
					{
						if (uParam0->f_23[iVar1]->f_1 == &Global_265377->f_63755[iVar7])
						{
							bVar8 = true;
						}
						else
						{
							iVar1++;
						}
					}
					if (bVar8)
					{
					}
					else
					{
						uParam0->f_23[iVar2]->f_1 = &Global_265377->f_63755[iVar7];
						uParam0->f_23[iVar2]->f_2 = Global_265377->f_4[iVar7]->f_31;
						uParam0->f_23[iVar2]->f_3 = Global_265377->f_4[iVar7]->f_34;
						uParam0->f_23[iVar2]->f_4 = Global_265377->f_4[iVar7]->f_40;
						uParam0->f_23[iVar2]->f_5 = Global_265377->f_4[iVar7]->f_36;
						uParam0->f_23[iVar2]->f_6 = Global_265377->f_4[iVar7]->f_35;
						uParam0->f_23[iVar2] = player_id();
						uParam0->f_23[iVar2]->f_7 = 1;
						iVar2++;
					}
					uParam0->f_18 = iVar2;
					uParam0->f_17 = iVar2;
				}
			}
		}
	}
}

void func_129(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	Global_1572887->f_106 = uParam0;
	Global_1572887->f_106.f_9 = uParam1;
	Global_1572887->f_106.f_10 = uParam2;
	if (bParam3)
	{
		func_194();
	}
}

void func_130(var uParam0)
{
	uParam0->f_17 = 0;
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	iVar11 = func_124();
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if ((*Global_1835011)[iVar0]->f_51 == iVar11)
		{
			bVar2 = true;
			Var3 = { (*Global_1835011)[iVar0]->f_42 };
		}
		else
		{
			iVar0++;
		}
	}
	uParam0->f_23[0]->f_1 = iVar11;
	uParam0->f_17++;
	if (!bVar2)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (iVar1 + 1 > 32)
		{
		}
		else
		{
			if ((*(*Global_1842212)[iVar0])[iVar1]->f_51 == 0)
			{
			}
			else
			{
				(uParam0->f_23[iVar1 + 1])->f_1 = (*(*Global_1842212)[iVar0])[iVar1]->f_51;
				uParam0->f_17++;
			}
			iVar1++;
		}
	}
}

int func_131(int iParam0)
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

int func_132(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = get_hash_key(Global_265377->f_117359[iVar0]);
		if (iVar1 == iParam0)
		{
			uParam1->f_21 = &Global_265377->f_117359.f_6923[iVar0];
			uParam1->f_22 = &Global_265377->f_117359.f_6956[iVar0];
			uParam1->f_284 = &Global_265377->f_117359.f_6692[iVar0];
			iVar2 = 0;
			while (iVar2 < 32)
			{
				uParam1->f_23[iVar2]->f_1 = Global_265377->f_117359.f_483[iVar0][iVar2];
				uParam1->f_23[iVar2]->f_2 = (*Global_265377->f_117359.f_483[iVar0])[iVar2]->f_1;
				uParam1->f_23[iVar2]->f_3 = (*Global_265377->f_117359.f_483[iVar0])[iVar2]->f_2;
				uParam1->f_23[iVar2]->f_4 = (*Global_265377->f_117359.f_483[iVar0])[iVar2]->f_3;
				uParam1->f_23[iVar2]->f_5 = (*Global_265377->f_117359.f_483[iVar0])[iVar2]->f_4;
				uParam1->f_23[iVar2]->f_6 = (*Global_265377->f_117359.f_483[iVar0])[iVar2]->f_5;
				iVar2++;
			}
			return &(Global_265377->f_117359.f_6791[iVar0]);
		}
		iVar0++;
	}
	return -1;
}

void func_133(var uParam0, int iParam1)
{
	iVar4 = func_75(uParam0->f_283);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&uParam0->f_23[iVar0] != iParam1)
		{
		}
		else
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar3 = int_to_playerindex(iVar2);
				if (!network_is_player_active(iVar3))
				{
				}
				else if (uParam0->f_23[iVar0]->f_1 == &(*Global_1056141)[iVar2]->f_187.f_11[iVar4] && !_0x72b2e00c9bac6789(&(uParam0->f_282), iVar2))
				{
					_0x31010318ba9897ac(&(uParam0->f_282), iVar2);
					uParam0->f_23[iVar0] = iVar3;
					return;
				}
				iVar2++;
			}
			iVar1 = iVar0;
			while (iVar1 <= 30)
			{
				*uParam0->f_23[iVar1] = { *(uParam0->f_23[iVar1 + 1]) };
				iVar1++;
			}
			uParam0->f_23[31]->f_1 = 0;
			uParam0->f_23[31]->f_3 = -1;
			uParam0->f_23[31]->f_2 = -1;
			uParam0->f_23[31]->f_4 = 1;
			uParam0->f_23[31]->f_5 = 0;
			uParam0->f_23[31]->f_6 = 0;
			uParam0->f_23[31] = 255;
			uParam0->f_18 = (uParam0->f_18 - 1);
			uParam0->f_17 = (uParam0->f_17 - 1);
			if (uParam0->f_16 >= uParam0->f_18)
			{
				uParam0->f_16 = (uParam0->f_18 - 1);
			}
		}
		iVar0++;
	}
}

void func_134(var uParam0, var uParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	uParam0->f_10 = uParam1;
}

void func_135(var uParam0, var uParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	uParam0->f_11 = uParam1;
}

int func_136(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265377->f_97486)
	{
		if (Global_265377->f_97486.f_4[iVar0]->f_28 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_137(int iParam0)
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

int func_138(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265377->f_73818.f_2)
	{
		if (&Global_265377->f_73818.f_20405[iVar0] == iParam0)
		{
			return iVar0;
		}
		if (Global_265377->f_73818.f_4[iVar0]->f_28 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_139(int iParam0)
{
	(*Global_263042)[&Global_1296859]->f_68 = ((*Global_263042)[&Global_1296859]->f_68 - ((*Global_263042)[&Global_1296859]->f_68 && iParam0));
}

void func_140(int iParam0)
{
	if (Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5)
	{
		return;
	}
	Global_1900688->f_1 = 1;
	Global_1900688->f_2 = 0;
	Global_1900688->f_6 = iParam0;
	func_195(Global_1900688->f_6);
}

void func_141(char* sParam0)
{
	StringCopy(&(Global_1572887->f_106.f_91.f_6), sParam0, 32);
}

bool func_142(int iParam0)
{
	if (func_196(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_143(int iParam0)
{
	if (func_197(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_144(int iParam0)
{
	if (func_39() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_198(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_145(int iParam0)
{
	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_199(&Var0))
	{
		return vVar5;
	}
	if (!func_200(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_200(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_201(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_200(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_200(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_201(&Var0, 1);
			if (!func_200(&Var0, 22, iParam0, 0, 0))
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

struct<2> func_146(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_202();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_147(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_148(iParam0) != -1;
}

int func_148(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_203(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_149(int iParam0)
{
	return func_204(iParam0);
}

struct<2> func_150(int iParam0)
{
	if (!func_199(&uVar0))
	{
		return func_202();
	}
	if (!func_200(&uVar0, 13, 0, 0, 1))
	{
		return func_202();
	}
	if (!func_200(&uVar0, 17, 0, 0, 1))
	{
		return func_202();
	}
	if (!func_200(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_202();
	}
	if (!func_200(&uVar0, 20, 0, 0, 1))
	{
		return func_202();
	}
	if (!func_200(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_202();
	}
	iVar5 = func_205(&uVar0);
	return func_153(iVar5);
}

struct<2> func_151(int iParam0)
{
	if (iParam0 == 0)
	{
		return func_202();
	}
	if (!func_206(&uVar0, 7, iParam0, 76966722))
	{
		return func_202();
	}
	func_207(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_202();
	}
	return func_208(Var5.f_3, Var5.f_4);
}

int func_152(int iParam0)
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

struct<2> func_153(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_208(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_208(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_208(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_208(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_208(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_208(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_208(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_202();
}

void func_154(var uParam0)
{
	uParam0->f_20 = 0;
}

bool func_155(int iParam0)
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

int func_156(int iParam0)
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

bool func_157(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_158(var uParam0, int iParam1)
{
	func_209(uParam0, iParam1);
}

bool func_159(var uParam0, int iParam1)
{
	return (uParam0->f_20 && iParam1) != 0;
}

bool func_160(struct<2> Param0, bool bParam2, bool bParam3)
{
	iVar0 = network_player_id_to_int();
	if (Global_263042[iVar0] <= 0)
	{
		if (bParam3)
		{
			func_78(&(Global_265377->f_124517), 10);
		}
		return false;
	}
	if (Global_263042[iVar0] > 2)
	{
		if (bParam3)
		{
			func_78(&(Global_265377->f_124517), 11);
		}
		return false;
	}
	if (func_73(*Global_1051213))
	{
		if (!func_210(Param0, *Global_1051213))
		{
			if (bParam3)
			{
				func_78(&(Global_265377->f_124517), 12);
			}
			return false;
		}
	}
	if (!bParam2 && func_212(func_211(0)) == 2)
	{
		if (bParam3)
		{
			func_78(&(Global_265377->f_124517), 13);
		}
		return false;
	}
	if (func_86(255) && !func_159(&((*Global_263042)[&Global_1296859]->f_1), 64))
	{
		if (bParam3)
		{
			func_78(&(Global_265377->f_124517), 14);
		}
		return false;
	}
	if (_network_is_player_index_valid((*Global_263042)[iVar0]->f_1) && network_is_player_active((*Global_263042)[iVar0]->f_1))
	{
		if (bParam3)
		{
			func_78(&(Global_265377->f_124517), 15);
		}
		return false;
	}
	if ((*Global_263042)[iVar0]->f_1.f_16 == 0 || func_159(&((*Global_263042)[&Global_1296859]->f_1), 64))
	{
		if (bParam3)
		{
			func_78(&(Global_265377->f_124517), 0);
		}
		return true;
	}
	if (bParam3)
	{
		func_78(&(Global_265377->f_124517), 16);
	}
	return false;
}

bool func_161(var uParam0)
{
	uVar0 = func_54(uParam0->f_18, uParam0->f_17);
	iVar1 = count_player_bits(&uVar0);
	iVar4 = network_player_id_to_int();
	iVar2 = 0;
	while (iVar2 < func_213())
	{
		iVar3 = func_214(iVar2);
		if (_0x72b2e00c9bac6789(&uVar0, iVar3))
		{
		}
		else if (iVar4 == iVar3)
		{
		}
		else
		{
			iVar1++;
		}
		iVar2++;
	}
	if (!_0x72b2e00c9bac6789(&uVar0, iVar4))
	{
		iVar1++;
	}
	return iVar1 > uParam0->f_33;
}

int func_162(int iParam0, int iParam1)
{
	uVar0 = func_54(iParam0, iParam1);
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!_0x72b2e00c9bac6789(&uVar0, iVar2))
		{
		}
		else
		{
			iVar1 = int_to_playerindex(iVar2);
			if (func_173(iVar1) == 0)
			{
				return 1;
			}
		}
		iVar2++;
	}
	bVar3 = func_55(uVar0, 8192);
	bVar4 = func_55(uVar0, 4096);
	if (bVar3 && !bVar4)
	{
		return 2;
	}
	return 3;
}

void func_163()
{
	func_215();
	func_216(&(Global_265377->f_124517));
	func_217(&(Global_265377->f_124517));
	func_218((*Global_263042)[Global_1296859->f_10]);
	_0xd39a72ae5ebd57e5();
}

void func_164(int iParam0)
{
	(*Global_263042)[&Global_1296859] = iParam0;
	func_219();
}

bool func_165(var uParam0, bool bParam1)
{
	if (((bParam1 && _network_is_player_index_valid(*uParam0)) && network_is_player_active(*uParam0)) && (*Global_263042)[&Global_1296859]->f_1 == *uParam0)
	{
		return true;
	}
	if ((*Global_263042)[&Global_1296859]->f_1.f_17 != uParam0->f_17)
	{
		return false;
	}
	if ((*Global_263042)[&Global_1296859]->f_1.f_18 != uParam0->f_18)
	{
		return false;
	}
	return true;
}

bool func_166(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_263042[&Global_1296859] > 2;
	}
	return Global_263042[iParam0] > 2;
}

bool func_167(struct<28> Param0, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63)
{
	if (is_string_null_or_empty(&(Param0.f_27)))
	{
		return false;
	}
	return true;
}

bool func_168(struct<2> Param0)
{
	iVar0 = func_220(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_169(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return -1;
	}
	iVar0 = iParam0;
	iVar1 = (*Global_263042)[iVar0]->f_65;
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

bool func_170(struct<2> Param0)
{
	return func_220(Param0) == 0;
}

int func_171(struct<2> Param0)
{
	if (!func_73(Param0))
	{
		return 0;
	}
	func_221(Param0, 0);
	return 1;
}

void func_172(var uParam0)
{
	Global_265377->f_124517.f_3 = { uParam0->f_21 };
}

int func_173(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return Global_263042[iParam0];
}

struct<2> func_174(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_175(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_176(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			*iParam1 = -1369928329;
			break;
		case 4:
			*iParam1 = -1740003396;
			break;
		case 3:
			*iParam1 = 2090637823;
			break;
		case 2:
			*iParam1 = 1412564789;
			break;
		case 6:
			*iParam1 = -141490041;
			break;
		case 5:
			*iParam1 = -2140118397;
			break;
		case 1:
			*iParam1 = -61552911;
			break;
		case 9:
			*iParam1 = 81153145;
			break;
		case 8:
			*iParam1 = -1767965617;
			break;
		case 7:
			*iParam1 = 112216621;
			break;
		case 19:
			*iParam1 = 928731509;
			break;
		default:
			break;
	}
	return *iParam1;
}

float func_177(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901947->f_1.f_32;
		case 1:
			return Global_1901947->f_1.f_33;
		case 18:
			return Global_1901947->f_1.f_34;
		case 2:
			return Global_1901947->f_1.f_34;
		case 3:
			return Global_1901947->f_1.f_34;
		case 4:
			return Global_1901947->f_1.f_34;
		case 5:
			return Global_1901947->f_1.f_37;
		case 6:
			return Global_1901947->f_1.f_37;
		case 7:
			return Global_1901947->f_1.f_37;
		case 8:
			return Global_1901947->f_1.f_37;
		case 9:
			return Global_1901947->f_1.f_37;
		case 15:
			return Global_1901947->f_1.f_36;
		case 16:
			return Global_1901947->f_1.f_36;
		case 17:
			return Global_1901947->f_1.f_36;
		case 19:
			return Global_1901947->f_1.f_35;
		case 10:
			return Global_1901947->f_1.f_38;
		case 13:
			return Global_1901947->f_1.f_38;
		case 12:
			return Global_1901947->f_1.f_38;
		case 11:
			return Global_1901947->f_1.f_38;
		default:
			break;
	}
	return Global_1901947->f_1.f_31;
}

void func_178(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

void func_179(int iParam0)
{
	iVar0 = get_id_of_this_thread();
	if (_does_thread_exist(Global_1940144->f_105.f_1) && Global_1940144->f_105.f_1 != iVar0)
	{
		return;
	}
	Global_1940144->f_105.f_1 = iVar0;
	Global_1940144->f_105 = iParam0;
}

void func_180(var uParam0, int iParam1)
{
	func_222(uParam0, iParam1);
}

bool func_181(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_182(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_183(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_184()
{
	return Global_1102219->f_3672;
}

void func_185(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_186(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_187(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_188(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_189()
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

void func_190(int iParam0)
{
	if (func_223(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_191()
{
	return func_56(Global_1572887->f_7, 1);
}

bool func_192(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return network_is_handle_valid(&uParam0);
}

int func_193(int iParam0)
{
	iVar0 = 0;
	iVar43 = func_225(func_224(iParam0));
	iVar42 = 0;
	while (iVar42 < 1250)
	{
		if (Global_265377->f_4[iVar42]->f_33 == iVar43 && Global_265377->f_4[iVar42]->f_43 == -1)
		{
			iVar1[iVar0] = iVar42;
			iVar0++;
			if (iVar0 >= 40)
			{
			}
			else
			{
				iVar42++;
			}
			iVar44 = get_random_int_in_range(0, iVar0);
			uVar45 = &iVar1[iVar44];
			return uVar45;
		}
	}
}

void func_194()
{
	if (func_39() == -1)
	{
		return;
	}
	iVar0 = &Global_1296859;
	if (func_56(Global_1572887->f_7, 1))
	{
		func_41(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	else
	{
		func_122(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	(*Global_1056141)[iVar0]->f_187 = Global_1572887->f_106;
	(*Global_1056141)[iVar0]->f_187.f_1 = Global_1572887->f_106.f_9;
	(*Global_1056141)[iVar0]->f_187.f_2 = Global_1572887->f_106.f_10;
	(*Global_1056141)[iVar0]->f_187.f_3 = { Global_1572887->f_106.f_11 };
	(*Global_1056141)[iVar0]->f_187.f_8 = Global_1572887->f_106.f_13;
	(*Global_1056141)[iVar0]->f_187.f_5 = { Global_1572887->f_360 };
	(*Global_1056141)[iVar0]->f_187.f_9 = Global_1572887->f_106.f_74;
	if (func_24(1024))
	{
		func_41(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
	else
	{
		func_122(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
}

void func_195(var uParam0)
{
	uVar0 = uParam0;
	network_set_rich_presence(1, &uVar0, 1, 1);
}

int func_196(int iParam0, int iParam1)
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

int func_197(int iParam0, int iParam1)
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

int func_198(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	if (func_39() == -1)
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_51;
}

bool func_199(var uParam0)
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

bool func_200(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_201(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return _datafile_get_num_nodes(uParam0);
}

struct<2> func_202()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_203(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_9;
}

struct<2> func_204(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	_copy_memory(&Var0, &((*Global_1297047)[iParam0]->f_6), 2);
	return Var0;
}

var func_205(var uParam0)
{
	return func_227(uParam0, 60, 1);
}

bool func_206(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = Global_1139381->f_7;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = func_228(iParam1);
	uParam0->f_4 = iParam2;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

void func_207(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_229(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_230(iVar0);
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
			uParam2->f_5 = func_231(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_232(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_233(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_234(iVar0);
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

struct<2> func_208(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_235(iParam0, &(Global_1071686->f_636), func_156(iParam1));
			break;
		case 3:
			Var0.f_1 = func_235(iParam0, &(Global_1071686->f_636.f_602), func_156(iParam1));
			break;
		case 4:
			Var0.f_1 = func_235(iParam0, &(Global_1071686->f_636.f_2104), func_156(iParam1));
			break;
		case 5:
			Var0.f_1 = func_235(iParam0, &(Global_1071686->f_636.f_12606), func_156(iParam1));
			break;
		case 6:
			Var0.f_1 = func_235(iParam0, &(Global_1071686->f_636.f_12908), func_156(iParam1));
			break;
		case 7:
			Var0.f_1 = func_235(iParam0, &(Global_1071686->f_636.f_15910), func_156(iParam1));
			break;
		case 8:
			Var0.f_1 = func_235(iParam0, &(Global_1071686->f_636.f_16512), func_156(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_202();
	}
	return Var0;
}

void func_209(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_210(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

struct<2> func_211(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_212(var uParam0, var uParam1)
{
	return uParam0;
}

int func_213()
{
	return Global_1102219->f_3673;
}

int func_214(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1102219->f_3675[iParam0]);
}

void func_215()
{
	Var0 = { func_236() };
	if (!func_73(Var0))
	{
		return;
	}
	if (Var0 == 2)
	{
		func_238(func_237(Var0), 0);
		return;
	}
	if (Var0 != 7)
	{
		return;
	}
	if (!func_239(Var0) && !func_168(Var0))
	{
		return;
	}
	func_240(Var0, 0, 2, 0, 0);
	if (func_239(Var0))
	{
		func_241(Var0);
	}
}

void func_216(var uParam0)
{
	func_242(&(uParam0->f_63), 1, 1);
	func_243(&(uParam0->f_35), 1);
}

void func_217(var uParam0)
{
	func_244(uParam0);
	uParam0->f_69 = -1;
	uParam0->f_69.f_1 = 0;
	func_245(&(uParam0->f_71));
	uParam0->f_135 = 0;
	StringCopy(&(uParam0->f_136), "", 24);
	func_246(&(uParam0->f_139), 0);
	uParam0->f_139.f_1 = 0;
	uParam0->f_139.f_2 = 0;
	uParam0->f_142 = -2;
	_0xde544b7ec0c187cc(&(uParam0->f_142.f_1));
	uParam0->f_142.f_2 = 0;
	uParam0->f_142.f_3 = 0;
	uParam0->f_142.f_4 = -1;
	func_246(&(uParam0->f_147), 0);
	uParam0->f_147.f_1 = 0;
	uParam0->f_147.f_2 = 0;
	uParam0->f_150 = 0;
	uParam0->f_151 = 0;
}

void func_218(var uParam0)
{
	*uParam0 = 0;
	func_245(&(uParam0->f_1));
	uParam0->f_65 = -1;
	uParam0->f_68 = 0;
	uParam0->f_69 = -1;
}

void func_219()
{
	func_247(&(Global_265377->f_124517.f_147));
}

int func_220(struct<2> Param0)
{
	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = func_248(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

void func_221(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_249(Param0);
	}
	else
	{
		func_250(Param0, iParam2);
	}
	func_251();
}

void func_222(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_223(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 11;
		case 2:
			return 12;
		case 3:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_225(int iParam0)
{
	if (iParam0 == 10)
	{
		return 8;
	}
	if (iParam0 == 11)
	{
		return 4;
	}
	if (iParam0 == 12)
	{
		return 16;
	}
	if (iParam0 == 13)
	{
		return 32;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265377->f_117359.f_6725[iVar0] == &Global_265354->f_1[iParam0])
		{
			return Global_265377->f_117359.f_483[iVar0]->f_193;
		}
		iVar0++;
	}
	return -1;
}

bool func_226(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

var func_227(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_228(int iParam0)
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

int func_229(int iParam0, var uParam1)
{
	if (func_252(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_230(int iParam0)
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

int func_231(int iParam0)
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

int func_232(int iParam0)
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

int func_233(int iParam0)
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

int func_234(int iParam0)
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

int func_235(int iParam0, var uParam1, int iParam2)
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

struct<2> func_236()
{
	return Global_265377->f_124517.f_71.f_53;
}

int func_237(struct<2> Param0)
{
	if (!func_73(Param0))
	{
		return -1;
	}
	if (Param0 != 2)
	{
		return -1;
	}
	return func_253(Param0);
}

void func_238(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	Var0 = { func_146(iParam0) };
	if (!func_168(Var0))
	{
		return;
	}
	func_254(0);
	func_255();
	func_240(Var0, 0, 2, 0, 0);
	Global_1900736->f_69 = 0;
	if (bParam1)
	{
		func_257(func_256(4, iParam0), 0);
	}
	func_258(iParam0);
	func_259(0);
}

bool func_239(struct<2> Param0)
{
	iVar0 = func_220(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_240(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_73(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_168(Param0) && !func_239(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_260(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_220(Param0) == 3)
		{
			func_261(1, -1706799532);
		}
		else if (func_220(Param0) == 4)
		{
			func_261(0, -1706799532);
		}
	}
	if ((func_220(Param0) == 3 || func_220(Param0) == 1) || ((bParam5 && func_220(Param0) == 4) && _0x01f4d242765c6b24(func_260(Param0))))
	{
		if (iParam3 != -1)
		{
			func_262(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_262(Param0, 2, iParam4, 255, 0);
		}
	}
	func_221(Param0, 0);
	if (func_210(func_211(0), Param0))
	{
		func_263(1);
		func_264(0);
		func_265(0);
		func_266(1);
	}
	func_267(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_212(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_241(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return;
	}
	if (!func_73(Param0))
	{
		return;
	}
	if (func_239(Param0))
	{
		func_240(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_268(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900806 > 1)
	{
		*(*Global_1900807)[iVar1] = { *((*Global_1900807)[(&Global_1900806 - 1)]) };
		*(*Global_1900838)[iVar1] = { *((*Global_1900838)[(&Global_1900806 - 1)]) };
		func_269((*Global_1900807)[(&Global_1900806 - 1)]);
		*((*Global_1900838)[(&Global_1900806 - 1)]) = { Var2 };
	}
	else
	{
		func_269((*Global_1900807)[iVar1]);
		*(*Global_1900838)[iVar1] = { Var2 };
	}
	Global_1900806 = (&Global_1900806 - 1);
	if (&Global_1900806 < 0)
	{
		Global_1900806 = 0;
	}
}

void func_242(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 != 0)
	{
		if (bParam2)
		{
			texture_download_release(*uParam0);
		}
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	if (bParam1)
	{
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = 0;
}

void func_243(var uParam0, bool bParam1)
{
	if (*uParam0 != 0)
	{
		texture_download_release(*uParam0);
		*uParam0 = 0;
	}
	*uParam0 = uVar0;
	uParam0->f_1 = uVar1;
	uParam0->f_2 = uVar2;
	uParam0->f_3 = uVar3;
	MemCopy(&(uParam0->f_4), {vVar4}, 8);
	if (bParam1)
	{
		MemCopy(&(uParam0->f_12), {Var7}, 8);
		uParam0->f_20 = { Var11 };
	}
}

void func_244(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 5;
	uParam0->f_2 = -1;
	func_270(&(uParam0->f_3));
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	StringCopy(&(uParam0->f_22), "", 24);
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	func_271(&(uParam0->f_29));
	func_272(&(uParam0->f_30));
	func_273(&(uParam0->f_32));
	func_274(&(uParam0->f_33));
	func_275(&(uParam0->f_35));
	func_276(&(uParam0->f_63));
}

void func_245(var uParam0)
{
	*uParam0 = 255;
	uParam0->f_1 = { Var0 };
	StringCopy(&(uParam0->f_8), "", 64);
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 2147483647;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	func_270(&(uParam0->f_21));
	uParam0->f_26 = -1;
	StringCopy(&(uParam0->f_27), "", 24);
	uParam0->f_30 = 1;
	uParam0->f_31 = 1;
	uParam0->f_32 = 1;
	uParam0->f_33 = 32;
	uParam0->f_34 = 1;
	uParam0->f_35 = -2;
	uParam0->f_36 = 0;
	StringCopy(&(uParam0->f_37), "", 64);
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	func_276(&(uParam0->f_47));
	func_269(&(uParam0->f_53));
	func_277(&(uParam0->f_55));
	uParam0->f_60 = 0;
	uParam0->f_61 = { 0f, 0f, 0f };
}

void func_246(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_247(var uParam0)
{
	func_278(uParam0, 0);
}

int func_248(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_279(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_279(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

int func_249(struct<2> Param0)
{
	iVar0 = func_248(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_280(iVar0);
}

int func_250(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_279(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686->f_19550 == 0)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar6 };
		Global_1071686->f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686->f_19550)
	{
		func_279(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_281(iVar9);
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686->f_19550 < 31)
	{
		iVar9 = Global_1071686->f_19550;
		*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
		Global_1071686->f_19550++;
		if (Global_1071686->f_19550 > 32)
		{
			Global_1071686->f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_251()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_279(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

bool func_252(int iParam0, var uParam1, var uParam2)
{
	if (func_282(iParam0, uParam1, &uVar0))
	{
		func_283(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_253(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_279(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_254(bool bParam0)
{
	if (!bParam0)
	{
		func_106(14);
	}
	else
	{
		func_107(14);
	}
}

void func_255()
{
	func_284(1);
	func_284(2);
	func_284(4);
	func_284(8);
	func_284(16);
	func_284(32);
	func_284(64);
	func_284(128);
	func_284(256);
	func_284(512);
	func_284(1024);
	func_284(2048);
	func_284(4096);
	func_284(8192);
	func_285();
	func_286();
}

int func_256(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
				case 2:
					return 239417318;
				case 3:
					return 239417318;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
				case 2:
					return -1124047374;
				case 3:
					return -311950714;
				case 4:
					return -1877729336;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
				case 2:
					return -1291660805;
				case 3:
					return 53620250;
				case 4:
					return -967242671;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
				case 2:
					return -1002933146;
				case 3:
					return 300796817;
				case 4:
					return -1332027179;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
				case 2:
					return -1340126692;
				case 3:
					return -1177458231;
				case 4:
					return 1413260826;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
				case 2:
					return -1612797541;
				case 3:
					return -1876683153;
				case 4:
					return 1251939043;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
				case 2:
					return 1855246300;
				case 3:
					return 763461736;
				case 4:
					return -92262210;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
				case 2:
					return 2084465459;
				case 3:
					return 1616668189;
				case 4:
					return -1758631398;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
				case 2:
					return 941214835;
				case 3:
					return 68299210;
				case 4:
					return 1699902717;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
				case 2:
					return 1265238199;
				case 3:
					return -1638616368;
				case 4:
					return 1550104174;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
				case 2:
					return -1099733308;
				case 3:
					return -697261301;
				case 4:
					return 1865014264;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
				case 2:
					return 1853607854;
				case 3:
					return 1511414161;
				case 4:
					return -2030843481;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
				case 2:
					return 885906515;
				case 3:
					return -674835160;
				case 4:
					return 867181329;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
				case 2:
					return -645886158;
				case 3:
					return 825197572;
				case 4:
					return 1390137360;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_257(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346->f_458.f_1546 >= 40)
	{
		func_287();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_288();
	Var0.f_3 = iParam1;
	func_289(Var0, 0);
	return Var0;
}

void func_258(int iParam0)
{
	Global_1139381->f_4912[iParam0] = _unlock_is_new((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_2 = _unlock_is_visible((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_1 = _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3);
}

void func_259(int iParam0)
{
	if (&Global_1211315 == iParam0)
	{
		return;
	}
	Global_1211315 = iParam0;
}

int func_260(struct<2> Param0)
{
	return func_290(Param0);
}

int func_261(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_291())
	{
		return 0;
	}
	if (!func_292())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_293(&Global_0, 8);
	}
	func_293(&Global_0, 1);
	return 1;
}

void func_262(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_294(func_212(Param0));
	iVar1 = func_260(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_39() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_295(Param0, &Var2);
	}
	if (network_is_player_active(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	_0xd5910ecf81a2278c(iVar0, iVar1, iParam2, &Var2);
}

void func_263(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_296(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_297(Global_1940258, 8388608);
	}
	enable_dispatch_service(15, bParam0);
	enable_dispatch_service(6, bParam0);
	enable_dispatch_service(1, bParam0);
	enable_dispatch_service(16, bParam0);
	enable_dispatch_service(2, bParam0);
	enable_dispatch_service(3, bParam0);
	enable_dispatch_service(4, bParam0);
	enable_dispatch_service(5, bParam0);
	enable_dispatch_service(7, bParam0);
	enable_dispatch_service(9, bParam0);
	enable_dispatch_service(10, bParam0);
	enable_dispatch_service(11, bParam0);
	enable_dispatch_service(12, bParam0);
	enable_dispatch_service(13, bParam0);
	enable_dispatch_service(14, bParam0);
}

void func_264(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_298(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_299(cVar2);
			}
			else
			{
				func_300();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_265(bool bParam0)
{
	if (!bParam0 && func_301(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_266(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_267(struct<2> Param0)
{
	return func_303(func_302(Param0));
}

int func_268(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_210(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_269(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_270(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -504335712;
	uParam0->f_3 = 0;
	uParam0->f_4 = 3;
}

void func_271(var uParam0)
{
	iVar1 = 1;
	_copy_memory(uParam0, &uVar0, iVar1);
}

void func_272(var uParam0)
{
	iVar1 = 1;
	_copy_memory(uParam0, &uVar0, iVar1);
}

void func_273(var uParam0)
{
	iVar1 = 1;
	_copy_memory(uParam0, &uVar0, iVar1);
}

void func_274(var uParam0)
{
	iVar1 = 1;
	_copy_memory(uParam0, &uVar0, iVar1);
}

void func_275(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 64);
	StringCopy(&(uParam0->f_12), "", 64);
	StringCopy(&(uParam0->f_20), "", 64);
}

void func_276(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_277(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
}

void func_278(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_304() - iParam1);
	func_246(uParam0, 1);
	func_305(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_279(struct<2> Param0, var uParam2)
{
	if (!func_73(Param0))
	{
		return false;
	}
	func_306(uParam2);
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

int func_280(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1071686->f_19550.f_1[iVar0] = { *(Global_1071686->f_19550.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686->f_19550 < 32)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar1 };
	}
	Global_1071686->f_19550 = (Global_1071686->f_19550 - 1);
	if (Global_1071686->f_19550 < 0)
	{
		Global_1071686->f_19550 = 0;
	}
	return 1;
}

int func_281(int iParam0)
{
	iVar0 = (Global_1071686->f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1071686->f_19550.f_1[iVar0 + 1]) = { *Global_1071686->f_19550.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1071686->f_19550.f_1[iParam0] = { vVar1 };
	Global_1071686->f_19550++;
	if (Global_1071686->f_19550 > 32)
	{
		Global_1071686->f_19550 = 32;
	}
	return 1;
}

bool func_282(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_228(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_283(var uParam0, int iParam1, var uParam2)
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

void func_284(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (func_56(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_122((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

void func_285()
{
	enable_script_brain_set(4);
}

void func_286()
{
	enable_script_brain_set(1);
}

void func_287()
{
}

var func_288()
{
	Global_1293346->f_458.f_1552++;
	if (Global_1293346->f_458.f_1552 >= 2147483646)
	{
		Global_1293346->f_458.f_1552 = 0;
	}
	return Global_1293346->f_458.f_1552;
}

void func_289(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*Global_1293346->f_458.f_44[func_307()] = { Param0 };
			func_308((func_307() + 1 % 40));
			Global_1293346->f_458.f_1546++;
			break;
		case 1:
			*Global_1293346->f_458.f_1245[func_309()] = { Param0 };
			func_310((func_309() + 1 % 10));
			Global_1293346->f_458.f_1547++;
			break;
	}
}

int func_290(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_279(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_291()
{
	return !Global_1572887->f_9;
}

bool func_292()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_293(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

void func_295(struct<2> Param0, var uParam2)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _0x901e0dc25080c8b9(player_id());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_212(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_311(func_253(Param0));
			iVar5 = func_312(iVar4);
			if (!func_313(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1107216->f_33[iVar1] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107216->f_33[iVar2]->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0];
}

void func_296(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_298(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559;
		case 1:
			return 195938434;
		case 2:
			return 416962030;
		case 3:
			return 1314857970;
		case 4:
			return -999071359;
		case 5:
			return -683250308;
		case 6:
			return -857617219;
		case 7:
			return 1780145725;
		case 8:
			return -1521715232;
		case 9:
			return -1560342203;
		case 10:
			return 1343354387;
		case 11:
			return 1052408375;
		case 12:
			return -1759599185;
		case 13:
			return 1481148278;
		case 14:
			return -16106300;
		case 15:
			return 105387183;
		case 16:
			return -2095449173;
		case 17:
			return -2097683294;
		case 18:
			return 1805131596;
		case 19:
			return 314693001;
		case 20:
			return -1728509733;
		case 21:
			return -42817558;
		case 22:
			return 1458462042;
		case 23:
			return 481893872;
		case 24:
			return 1714017012;
		case 25:
			return 1437412331;
		case 26:
			return -493957506;
		case 27:
			return 1224055398;
		case 28:
			return -953803399;
		case 29:
			return 2006449383;
		case 30:
			return -1788230330;
		case 31:
			return 1396375613;
		case 32:
			return -547914843;
		case 33:
			return -1547772340;
		case 34:
			return -59535775;
		case 35:
			return -1701536647;
		case 36:
			return 1923998736;
		case 37:
			return -1103472584;
		case 38:
			return -2051405571;
		case 39:
			return 1135209633;
		case 40:
			return -1810065318;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442;
		case 43:
			return 1171995096;
		case 44:
			return -267442581;
		case 45:
			return -1361146315;
		case 46:
			return 1352191066;
		case 47:
			return -2130852007;
		case 48:
			return -102241052;
		case 49:
			return 1420320220;
		case 50:
			return -1715130379;
		case 51:
			return -661550833;
		case 52:
			return -1358475411;
		case 53:
			return -1848598303;
		case 54:
			return -173287735;
		case 55:
			return -715363719;
		case 56:
			return -1117123933;
		case 57:
			return 1972833301;
		case 58:
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

void func_299(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_300()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

bool func_301(int iParam0)
{
	iVar0 = func_314(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_315(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_316(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_302(struct<2> Param0)
{
	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_210(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_303(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 1)
	{
		Global_1900736->f_66 = 0;
		func_269(Global_1900736->f_1[0]);
		return 1;
	}
	func_269(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_317(iParam0, Global_1900736->f_66);
	return 1;
}

int func_304()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_305(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_306(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_307()
{
	if (Global_1293346->f_458.f_1548 >= 40 || Global_1293346->f_458.f_1548 < 0)
	{
		Global_1293346->f_458.f_1548 = 0;
	}
	return Global_1293346->f_458.f_1548;
}

void func_308(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1548 = iParam0;
}

int func_309()
{
	if (Global_1293346->f_458.f_1549 >= 10 || Global_1293346->f_458.f_1549 < 0)
	{
		Global_1293346->f_458.f_1549 = 0;
	}
	return Global_1293346->f_458.f_1549;
}

void func_310(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1549 = iParam0;
}

int func_311(int iParam0)
{
	iVar0 = -1;
	if (func_318(&Var1, iParam0))
	{
		iVar0 = ((func_319() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_312(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_313(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -697789102:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return true;
		case 1539023636:
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_314(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 394;
		case -2058120606:
			return 194;
		case -2056579774:
			return 464;
		case -2043909922:
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 387;
		case -1939389836:
			return 416;
		case -1932919229:
			return 428;
		case -1925798111:
			return 41;
		case -1914141706:
			return 439;
		case -1906892166:
			return 403;
		case -1882707460:
			return 463;
		case -1861414976:
			return 380;
		case -1852605133:
			return 10;
		case -1848799275:
			return 409;
		case -1847672446:
			return 312;
		case -1842033327:
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case -1749433374:
			return 479;
		case -1749043433:
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 421;
		case -1700452710:
			return 317;
		case -1684974589:
			return 466;
		case -1674179981:
			return 53;
		case -1673998598:
			return 527;
		case -1666278201:
			return 33;
		case -1664435783:
			return 486;
		case -1624627591:
			return 438;
		case -1612662716:
			return 198;
		case -1610966108:
			return 354;
		case -1608141409:
			return 538;
		case -1585840296:
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 434;
		case -1573753524:
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case -1547280108:
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 523;
		case -1462313959:
			return 462;
		case -1455998786:
			return 370;
		case -1447311849:
			return 321;
		case -1445041595:
			return 528;
		case -1442844448:
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 478;
		case -1387772214:
			return 407;
		case -1378911044:
			return 475;
		case -1369678628:
			return 487;
		case -1344601768:
			return 347;
		case -1341750998:
			return 476;
		case -1340339190:
			return 362;
		case -1339871203:
			return 532;
		case -1329135070:
			return 138;
		case -1319875891:
			return 437;
		case -1311865656:
			return 37;
		case -1296807958:
			return 352;
		case -1290997627:
			return 461;
		case -1287894233:
			return 426;
		case -1283202000:
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 382;
		case -1029225159:
			return 104;
		case -1023919011:
			return 431;
		case -1014145132:
			return 273;
		case -1004266677:
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case -941648233:
			return 511;
		case -939420910:
			return 44;
		case -931337253:
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case -911126844:
			return 368;
		case -897750037:
			return 366;
		case -895307590:
			return 500;
		case -895073533:
			return 393;
		case -889906510:
			return 389;
		case -888632790:
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 432;
		case -851626677:
			return 371;
		case -839820438:
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case -800891377:
			return 493;
		case -797689456:
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 372;
		case -729679654:
			return 530;
		case -699277634:
			return 4;
		case -693828600:
			return 355;
		case -683458244:
			return 78;
		case -677920206:
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 512;
		case -632127260:
			return 342;
		case -630295963:
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 471;
		case -591815673:
			return 383;
		case -583127403:
			return 506;
		case -574190021:
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 337;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 515;
		case -492731190:
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case -448554447:
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case -414883443:
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case -381925743:
			return 507;
		case -371827125:
			return 388;
		case -364475655:
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 433;
		case -279765076:
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 516;
		case -209894800:
			return 344;
		case -207792846:
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 430;
		case -108780030:
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case -101740709:
			return 498;
		case -99303535:
			return 165;
		case -90486812:
			return 490;
		case -89829333:
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 508;
		case -75024673:
			return 244;
		case -74031276:
			return 440;
		case -70727482:
			return 452;
		case -63926460:
			return 87;
		case -61411516:
			return 357;
		case -38135693:
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case 64896505:
			return 390;
		case 74872959:
			return 331;
		case 84709454:
			return 453;
		case 93964309:
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 455;
		case 565812320:
			return 447;
		case 582380806:
			return 358;
		case 588987611:
			return 177;
		case 589380360:
			return 340;
		case 618699440:
			return 75;
		case 619839857:
			return 375;
		case 630808005:
			return 126;
		case 640520536:
			return 469;
		case 642824856:
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 483;
		case 723021499:
			return 250;
		case 730069127:
			return 474;
		case 747514327:
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 361;
		case 791041526:
			return 18;
		case 799106423:
			return 454;
		case 803929300:
			return 468;
		case 804063423:
			return 502;
		case 817925178:
			return 227;
		case 826868753:
			return 473;
		case 831940854:
			return 406;
		case 846837291:
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case 883901517:
			return 384;
		case 885203519:
			return 315;
		case 885378256:
			return 378;
		case 885777893:
			return 374;
		case 896725436:
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case 965467037:
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 445;
		case 1032791043:
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case 1126565489:
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 451;
		case 1157309080:
			return 513;
		case 1159471771:
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 480;
		case 1238086793:
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case 1279586666:
			return 448;
		case 1280406542:
			return 441;
		case 1287917122:
			return 386;
		case 1302228510:
			return 348;
		case 1306158345:
			return 199;
		case 1321892118:
			return 356;
		case 1325325699:
			return 420;
		case 1341699707:
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 435;
		case 1521272922:
			return 457;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case 1703398561:
			return 364;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case 1788424349:
			return 444;
		case 1812677765:
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case 1891256113:
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 497;
		case 2051822093:
			return 284;
		case 2068208444:
			return 427;
		case 2068253437:
			return 477;
		case 2077022393:
			return 291;
		case 2079292950:
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 396;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

bool func_315(int iParam0)
{
	iVar0 = func_320(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_316(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_317(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_321((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_321(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_73(*Global_1900736->f_1[0]))
	{
		func_221(*Global_1900736->f_1[0], 3);
	}
}

bool func_318(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_319()
{
	iVar0 = 0;
	vVar1.x = Global_1257541->f_8863;
	vVar1.f_2 = -1041770777;
	if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
	{
		iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_320(int iParam0)
{
	return func_322(iParam0) + 30;
}

void func_321(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

int func_322(int iParam0)
{
	return iParam0 * 31;
}

