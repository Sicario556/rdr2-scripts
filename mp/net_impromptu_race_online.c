void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(iVar1413);
	Local_166.f_2 = 0;
	Local_166 = iVar1413;
	Local_166.f_1180 = ScriptParam_0.f_9;
	Local_166.f_1 = iVar1413;
	func_2(6);
	Var0 = { ScriptParam_0.f_7 };
	func_3(Var0);
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		Local_74[participant_id_to_int()]->f_6 = { ScriptParam_0.f_1 };
	}
	while (!func_4())
	{
		func_5(&Local_16, &Local_74, &Local_166);
		wait(0);
	}
	func_6(Var0, Local_16.f_48 == player_id(), Local_16.f_48 == 255);
	if (network_is_host_of_this_script())
	{
		func_7(&Local_16);
	}
	func_8(&Local_16, &Local_166);
	func_9();
}

void func_1(int iParam0)
{
	func_10(7, iParam0);
	func_11();
	network_register_host_broadcast_variables(&Local_16, 58, 42);
	func_12(_0xba24095ea96dfe17(&Local_16), 58, "m_IRON_HostData");
	network_register_player_broadcast_variables(&Local_74, 92, 43);
	func_13(_0x690806bc83bc8ca2(Local_74[0]), 92, "m_IRON_PlayerData");
	func_14(0);
	set_this_script_can_be_paused(false);
	reserve_network_mission_objects(2);
	register_script_with_audio(1);
	if (network_is_host_of_this_script())
	{
	}
}

void func_2(int iParam0)
{
	if (Global_1108365->f_935.f_28 != iParam0)
	{
		Global_1108365->f_935.f_28 = iParam0;
	}
}

void func_3(struct<2> Param0)
{
	func_15(Param0, 1, 1, 1);
}

bool func_4()
{
	if (Local_166.f_2 >= 15)
	{
		return true;
	}
	if (func_16(0, 0))
	{
		return true;
	}
	if (func_17(Local_166.f_1228, 1, 0))
	{
		return true;
	}
	if (_0x54ae4fdeefeab77e() != 0)
	{
		return true;
	}
	if (!network_is_script_active(func_18(), -1, true, 0))
	{
		return true;
	}
	return false;
}

void func_5(var uParam0, var uParam1, int iParam2)
{
	if (network_is_host_of_this_script())
	{
		func_19(uParam0, uParam1, iParam2);
	}
	func_20(uParam0, uParam1, iParam2);
	func_21(uParam0, (*uParam1)[participant_id_to_int()], iParam2);
	func_22(uParam0, (*uParam1)[participant_id_to_int()], iParam2, 0);
	func_23(iParam2);
	func_24();
}

void func_6(struct<2> Param0, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		func_25(Param0, 0, 2, 0, 0);
	}
	else if (bParam2)
	{
		func_25(Param0, 0, 0, 0, 0);
	}
	else
	{
		func_25(Param0, 0, 1, 0, 0);
	}
	if (func_26(Param0))
	{
		func_27(Param0);
	}
}

void func_7(var uParam0)
{
	if (_0x65a8196b8d7f5e0b(uParam0->f_34))
	{
		_0x4907d0e4fb26ee65(uParam0->f_34);
	}
}

void func_8(var uParam0, int iParam1)
{
	func_28();
	func_29();
	func_30(iParam1);
	func_31(iParam1);
	clear_gps_custom_route();
	_0x455156f47dc6b78c(1);
	func_32(&(iParam1->f_167), 1);
	func_33(&(iParam1->f_182));
	func_34(&(iParam1->f_1141), 1, 1);
	clear_bit(&(iParam1->f_182.f_11.f_159), 13);
	func_35(0);
	func_36(1);
	if (func_37(3))
	{
		func_38(0);
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	_0xdd1232b332cbb9e7(1, 1, 0);
	set_ped_reset_flag(func_39(player_ped_id()), 105, false);
	clear_ped_tasks_immediately(func_39(player_ped_id()), false, true);
	func_40();
	func_41();
	if (_0x65a8196b8d7f5e0b(iParam1->f_1238))
	{
		_0x4907d0e4fb26ee65(iParam1->f_1238);
	}
	if (_does_volume_exist(iParam1->f_1181))
	{
		_delete_volume(iParam1->f_1181);
	}
	if (does_blip_exist(iParam1->f_1211))
	{
		remove_blip(&(iParam1->f_1211));
	}
	if (does_blip_exist(iParam1->f_1212))
	{
		remove_blip(&(iParam1->f_1212));
	}
	func_42(iParam1);
	func_43(0);
	Global_1108365->f_935.f_22 = 0;
	if (is_thread_active(Global_1108365->f_19, false))
	{
		_0x7de4643157ad646c(Global_1108365->f_19);
	}
	func_44();
	if (!func_45(uParam0, 64))
	{
		func_46(6);
	}
}

void func_9()
{
	terminate_this_thread();
}

void func_10(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_9();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_11()
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
		if (func_47() == 0)
		{
			if (func_48())
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

int func_12(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_13(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_14(bool bParam0)
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

void func_15(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_49(Param0))
	{
		return;
	}
	if (!func_26(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_50(Param0);
	}
	if (!func_49(func_51(0)))
	{
		func_52(Param0, 3);
		func_53(bParam3);
		func_54(!bParam4);
		func_55(Param0, -1);
		if (bParam2 && !func_56(2))
		{
			func_57(&Global_0, 1024);
		}
		func_58(1);
	}
	else
	{
		func_55(Param0, -1);
		func_52(Param0, 4);
		func_59(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_60(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_61(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
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

bool func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_49(*Global_1051213) && !func_62(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_63(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_64(iParam3, 255))
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
	if (func_65())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_49(*Global_1051213))
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

char* func_18()
{
	return "net_main_online";
}

void func_19(var uParam0, var uParam1, int iParam2)
{
	if (*uParam0 > 0)
	{
		if ((!_0x0f99f6436528a089(uParam0->f_37) || !_0xd6f6acf4392187fb(uParam0->f_37)) || func_66(uParam1, 4))
		{
			func_67(uParam0, 64);
			func_68(uParam0, 9);
		}
	}
	if ((*uParam0 > 3 && *uParam0 < 7) && network_get_num_participants() < 2)
	{
		func_67(uParam0, 64);
		func_68(uParam0, 9);
	}
	switch (*uParam0)
	{
		case 0:
			func_69(&(uParam0->f_45), 0);
			uParam0->f_37 = Global_1296859->f_15;
			func_68(uParam0, 2);
			break;
		case 2:
			if (!func_70(uParam0, uParam1))
			{
				if (func_71(&(uParam0->f_45)) > 15000)
				{
					func_67(uParam0, 64);
					func_67(uParam0, 128);
					func_68(uParam0, 9);
				}
				return;
			}
			if (!func_72(&(uParam0->f_45)))
			{
				func_69(&(uParam0->f_45), 0);
			}
			if (func_71(&(uParam0->f_45)) < 15000)
			{
				return;
			}
			if (func_73(uParam1))
			{
				return;
			}
			uParam0->f_43 = get_network_time_accurate();
			if (func_74(uParam0))
			{
				uParam0->f_33 = 0;
			}
			else
			{
				uParam0->f_33++;
				return;
			}
			func_68(uParam0, 3);
			break;
		case 3:
			if (func_71(&(uParam0->f_45)) < 15000)
			{
				return;
			}
			if (func_73(uParam1))
			{
				return;
			}
			uParam0->f_32 = func_75(uParam1, 4);
			if (uParam0->f_32 > 1)
			{
				if (!_0x65a8196b8d7f5e0b(uParam0->f_34))
				{
					func_76(uParam0, uParam1);
				}
				else
				{
					func_77(uParam0);
				}
				if (func_45(uParam0, 1))
				{
					func_68(uParam0, 5);
					uParam0->f_42 = get_network_time_accurate();
				}
			}
			else
			{
				func_67(uParam0, 64);
				func_68(uParam0, 9);
				func_67(uParam0, 512);
			}
			break;
		case 5:
			if (func_78(uParam0))
			{
				uParam0->f_35 = get_network_time_accurate();
				func_68(uParam0, 6);
			}
			break;
		case 6:
			func_79(uParam0, uParam1);
			if (func_80(uParam1, 16777216, 33554432))
			{
				func_68(uParam0, 7);
			}
			break;
		case 7:
			func_81(uParam0, uParam1);
			uParam0->f_40 = get_network_time_accurate();
			func_68(uParam0, 8);
			break;
		case 8:
			if (func_82(uParam0))
			{
				func_68(uParam0, 11);
			}
			break;
		case 9:
			func_67(uParam0, 64);
			break;
		case 11:
			break;
	}
}

void func_20(var uParam0, var uParam1, int iParam2)
{
	iVar0 = participant_id_to_int();
	iVar1 = player_id();
	if (*uParam0 > 0 && uParam0->f_37 != Global_1296859->f_15)
	{
		if (!func_83(iParam2))
		{
			return;
		}
		func_84(iParam2, 11);
	}
	if (func_45(uParam0, 64))
	{
		if (!func_83(iParam2))
		{
			return;
		}
		func_84(iParam2, 11);
	}
	switch (iParam2->f_2)
	{
		case 0:
			if (!func_85((*uParam1)[iVar0], iParam2))
			{
				return;
			}
			if (func_72(&(uParam0->f_45)) && func_71(&(uParam0->f_45)) > 15000)
			{
				func_84(iParam2, 12);
			}
			func_86();
			func_87(Global_34, 869278708, 1971704925);
			(*uParam1)[iVar0]->f_12 = _0x424b17a7dc5c90bc(iVar1);
			func_88((*uParam1)[iVar0], 4);
			if ((*uParam1)[iVar0]->f_12)
			{
				(*uParam1)[iVar0]->f_6 = { _get_waypoint_coords() };
				_0x455156f47dc6b78c(0);
				func_89();
			}
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				if (iParam2->f_182.f_211[iVar2]->f_14 == 255)
				{
					iParam2->f_182.f_211[iVar2]->f_1 = 9999999f;
					iParam2->f_182.f_211[iVar2]->f_2 = 9999999f;
					iParam2->f_182.f_211[iVar2]->f_5 = 9999999f;
				}
				iVar2++;
			}
			func_91(func_90(1511238709, -785841056), 1);
			func_92(8);
			func_84(iParam2, 5);
			break;
		case 5:
			if (*uParam0 >= 5)
			{
				func_84(iParam2, 6);
				func_93("MP_HORSE_RACE_START", 1, 0);
			}
			break;
		case 6:
			func_94(iParam2);
			if (*uParam0 > 5 || func_78(uParam0))
			{
				func_95();
				func_34(&(iParam2->f_1141), 1, 1);
				func_96(1, 2);
				iParam2->f_1183 = { Global_35 };
				(*uParam1)[iVar0]->f_10 = get_network_time_accurate();
				func_43(1);
				func_84(iParam2, 7);
			}
			break;
		case 7:
			func_97(uParam0, (*uParam1)[iVar0], iParam2);
			func_98(uParam0, iParam2);
			func_94(iParam2);
			func_99();
			func_100();
			func_101();
			func_102(uParam0, (*uParam1)[iVar0], iParam2);
			if (func_103((*uParam1)[iVar0], 16777216) || func_103((*uParam1)[iVar0], 33554432))
			{
				func_43(0);
				func_32(&(iParam2->f_167), 1);
				func_93("MP_HORSE_RACE_END", 1, 1);
				func_84(iParam2, 8);
			}
			break;
		case 8:
			if (!func_103((*uParam1)[iVar0], 1073741824))
			{
				func_104((*uParam1)[iVar0], 131072);
			}
			func_30(iParam2);
			if (*uParam0 > 7)
			{
				Global_1108365->f_935.f_22 = 1;
				func_32(&(iParam2->f_167), 1);
				func_105(uParam0, uParam1, iParam2);
				func_84(iParam2, 9);
			}
			break;
		case 9:
			if (!is_bit_set(iParam2->f_182.f_11.f_159, 13))
			{
				set_bit(&(iParam2->f_182.f_11.f_159), 13);
			}
			func_106(iParam2);
			if (!func_107(&(iParam2->f_1235)))
			{
				func_108(&(iParam2->f_1235), 0);
			}
			if (*uParam0 > 8 && func_109(&(iParam2->f_1235)) > 2000)
			{
				func_84(iParam2, 10);
			}
			break;
		case 10:
			if (func_103((*uParam1)[iVar0], 1))
			{
				func_84(iParam2, 14);
				return;
			}
			func_110(uParam0, iParam2);
			if (uParam0->f_48 == player_id())
			{
				func_91(func_90(-1892463704, -681494152), 1);
				func_91(func_90(-1892463704, -785841056), 1);
				func_91(func_111(1114562171), 1);
			}
			else
			{
				func_91(func_90(1374282888, -681494152), 1);
				func_91(func_90(1374282888, -785841056), 1);
			}
			func_84(iParam2, 14);
			break;
		case 12:
			if (iParam2->f_1240 != 0)
			{
				_0x2f901291ef177b02(iParam2->f_1240, 1);
				iParam2->f_1240 = 0;
			}
			if (!func_103((*uParam1)[iVar0], 1))
			{
				func_32(&(iParam2->f_167), 1);
				func_96(1, 2);
				set_ped_reset_flag(func_39(player_ped_id()), 105, false);
				clear_ped_tasks_immediately(func_39(player_ped_id()), false, true);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_88((*uParam1)[iVar0], 1);
			}
			if (Global_1296859->f_15 != uParam0->f_37)
			{
				func_84(iParam2, 11);
			}
			if (*uParam0 > 7)
			{
				func_105(uParam0, uParam1, iParam2);
				Global_1108365->f_935.f_22 = 1;
				func_84(iParam2, 9);
				func_32(&(iParam2->f_167), 1);
			}
			break;
		case 14:
			if (*uParam0 == 11)
			{
				func_84(iParam2, 15);
			}
			break;
		case 11:
			_0xdd1232b332cbb9e7(3, 1, 0);
			if (!func_112(iParam2, 64))
			{
				return;
			}
			func_93("MP_HORSE_RACE_FAIL", 1, 1);
			func_40();
			func_88((*uParam1)[iVar0], 1);
			func_84(iParam2, 15);
			break;
		case 15:
			break;
	}
}

void func_21(var uParam0, var uParam1, int iParam2)
{
	if (!func_83(iParam2))
	{
		return;
	}
	iVar0 = _0xc17f69e1418cd11f(3);
	iVar1 = 0;
	if ((((iVar0 == 0 || iVar0 != iParam2->f_1239) || iParam2->f_2 != iParam2->f_1241) || iParam2->f_3 != iParam2->f_1242) || iParam2->f_1244)
	{
		bVar2 = true;
		iParam2->f_1244 = 0;
	}
	switch (iParam2->f_2)
	{
		case 0:
			break;
		case 6:
			_0xdd1232b332cbb9e7(3, 1, 0);
			cVar3 = (6500 - get_time_difference(uParam0->f_42, get_network_time_accurate()));
			if (cVar3 < 6500)
			{
				func_32(&(iParam2->f_167), 1);
				if (cVar3 < 6000)
				{
					cVar3 = (cVar3 / 1000);
				}
				else
				{
					cVar3 = 5;
				}
				func_113(&(iParam2->f_1141), cVar3, 1, 0, 1);
			}
			break;
		case 7:
			if (func_45(uParam0, 16))
			{
				func_32(&(iParam2->f_167), 1);
			}
			else
			{
				func_114(&(iParam2->f_167), (uParam0->f_36 - get_time_difference(uParam0->f_35, get_network_time_accurate())) + 1, 0, 30000, 0);
			}
			if (bVar2)
			{
				if (func_112(iParam2, 65536))
				{
					iParam2->f_1239 = func_115("IRON_NEED_OWN_HORSE_OBJ", -1, 0, 0, 1);
				}
				else
				{
					iParam2->f_1239 = func_115("IRON_RACE_OBJ", -1, 0, 0, 1);
				}
			}
			break;
		case 8:
			_0xdd1232b332cbb9e7(3, 1, 1);
			break;
		case 9:
			_0xdd1232b332cbb9e7(3, 1, 0);
			break;
		case 10:
			_0xdd1232b332cbb9e7(3, 1, 0);
			break;
		case 12:
			func_32(&(iParam2->f_167), 1);
			if (!func_112(iParam2, 4) && !func_116(255))
			{
				if (func_118(func_117(), 10000, 0, 0, 0, 1) != 0)
				{
					func_119(iParam2, 4);
				}
			}
			if (func_103(uParam1, 65536) && !func_116(255))
			{
				func_120("IRON_DECLINE_ATTACK_TITLE", "IRON_DECLINE_ATTACK_BODY", -2, 0, 0, 0, 1, 1);
				func_104(uParam1, 65536);
			}
			if (bVar2)
			{
				iParam2->f_1239 = func_115("IRON_SPECTATE_OBJ", -1, 0, 0, 1);
			}
			break;
		case 11:
			func_32(&(iParam2->f_167), 1);
			if (!func_112(iParam2, 64))
			{
				if (func_45(uParam0, 1024))
				{
					iVar1 = func_120("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_LEADER_NO_MONEY", -2, 0, 0, 0, 1, 1);
				}
				else if (func_45(uParam0, 128))
				{
					iVar1 = func_120("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_NO_FINISH", -2, 0, 0, 0, 1, 1);
				}
				else if (func_45(uParam0, 256))
				{
					iVar1 = func_120("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_NO_BET", -2, 0, 0, 0, 1, 1);
				}
				else if (func_45(uParam0, 512))
				{
					iVar1 = func_120("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_NO_PLAYERS", -2, 0, 0, 0, 1, 1);
				}
				else
				{
					iVar1 = func_120("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_CANCELED", -2, 0, 0, 0, 1, 1);
				}
				if (iVar1 != 0)
				{
					func_119(iParam2, 64);
				}
			}
			break;
		case 13:
			_0xdd1232b332cbb9e7(3, 1, 0);
			break;
		case 14:
			_0xdd1232b332cbb9e7(3, 1, 0);
			break;
		case 15:
			func_32(&(iParam2->f_167), 1);
			_0xdd1232b332cbb9e7(3, 1, 0);
			break;
	}
	if (iParam2->f_1239 != 0)
	{
		iParam2->f_1241 = iParam2->f_2;
	}
}

void func_22(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_83(iParam2))
	{
		return;
	}
	if (iParam3 == 0 && func_121())
	{
		return;
	}
	if (iParam2->f_2 >= 0 && !func_112(iParam2, 128))
	{
		if (func_120("IRON_SHARD_INTRO_ONE", "IRON_SHARD_INTRO_TWO", -2, 0, 0, 0, 1, 1) != 0)
		{
			func_119(iParam2, 128);
		}
		return;
	}
	if (iParam2->f_2 >= 9 && !func_112(iParam2, 256))
	{
		if (!func_107(&(iParam2->f_1235)))
		{
			func_108(&(iParam2->f_1235), 0);
		}
		if (func_109(&(iParam2->f_1235)) > 2000)
		{
			_0xdd1232b332cbb9e7(11, 1, 0);
			if (!func_103(uParam1, 1))
			{
				if (func_45(uParam0, 2))
				{
					if (uParam0->f_48 == player_id())
					{
						if (func_122("IRON_SHARD_PASS_ONE", "GEIRON_SHOW_SCORES", "", (2 - iParam3)) != 0)
						{
							func_119(iParam2, 256);
						}
					}
					else if (!_network_is_player_index_valid(uParam0->f_48))
					{
						if (func_122("IRON_SHARD_FAIL_ONE", "GEIRON_SHOW_SCORES", "", (2 - iParam3)) != 0)
						{
							func_119(iParam2, 256);
						}
					}
					else if (func_122("IRON_SHARD_FAIL_ONE", _create_var_string(10, "IRON_SHARD_FAIL_TWO", func_124(get_player_name(uParam0->f_48), func_123(uParam0->f_48, 1, -1, 0))), "GEIRON_SHOW_SCORES", (3 - iParam3)) != 0)
					{
						func_119(iParam2, 256);
					}
				}
				else if (func_122("IRON_SHARD_OVER_ONE", "IRON_TIME_LIMIT_EXPIRED", "GEIRON_SHOW_SCORES", (3 - iParam3)) != 0)
				{
					func_119(iParam2, 256);
				}
			}
			else if (func_122("IRON_SHARD_OVER_ONE", "GEIRON_SHOW_SCORES", "GEIRON_SHOW_SCORES", (3 - iParam3)) != 0)
			{
				func_119(iParam2, 256);
			}
			return;
		}
	}
}

void func_23(int iParam0)
{
	if (func_125(0, 0, 0))
	{
		if (!func_107(&(iParam0->f_1230)))
		{
			func_108(&(iParam0->f_1230), 1);
			func_35(1);
		}
		else if (func_109(&(iParam0->f_1230)) <= 45000)
		{
			_0xbd944a3d36e992de();
			report_police_spotted_player(get_player_index());
		}
	}
	else if (func_107(&(iParam0->f_1230)))
	{
		func_126(&(iParam0->f_1230));
	}
}

void func_24()
{
	func_127();
}

void func_25(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_49(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_128(Param0) && !func_26(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_129(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_130(Param0) == 3)
		{
			func_131(1, -1706799532);
		}
		else if (func_130(Param0) == 4)
		{
			func_131(0, -1706799532);
		}
	}
	if ((func_130(Param0) == 3 || func_130(Param0) == 1) || ((bParam5 && func_130(Param0) == 4) && _0x01f4d242765c6b24(func_129(Param0))))
	{
		if (iParam3 != -1)
		{
			func_132(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_132(Param0, 2, iParam4, 255, 0);
		}
	}
	func_52(Param0, 0);
	if (func_62(func_51(0), Param0))
	{
		func_53(1);
		func_54(0);
		func_133(0);
		func_58(1);
	}
	func_134(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_60(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

bool func_26(struct<2> Param0)
{
	iVar0 = func_130(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_27(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return;
	}
	if (!func_49(Param0))
	{
		return;
	}
	if (func_26(Param0))
	{
		func_25(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_135(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900806 > 1)
	{
		*(*Global_1900807)[iVar1] = { *((*Global_1900807)[(&Global_1900806 - 1)]) };
		*(*Global_1900838)[iVar1] = { *((*Global_1900838)[(&Global_1900806 - 1)]) };
		func_136((*Global_1900807)[(&Global_1900806 - 1)]);
		*((*Global_1900838)[(&Global_1900806 - 1)]) = { Var2 };
	}
	else
	{
		func_136((*Global_1900807)[iVar1]);
		*(*Global_1900838)[iVar1] = { Var2 };
	}
	Global_1900806 = (&Global_1900806 - 1);
	if (&Global_1900806 < 0)
	{
		Global_1900806 = 0;
	}
}

void func_28()
{
	(*Global_1109340)[network_player_id_to_int()]->f_1 = -1;
	(*Global_1109340)[network_player_id_to_int()]->f_2 = 255;
	func_138((*Global_1109340)[func_137()], 4);
	func_139(Global_1108365, 8);
	func_139(Global_1108365, 4);
	func_140(Global_1108365, 16);
}

void func_29()
{
	func_139(Global_1108365, 32);
}

void func_30(int iParam0)
{
	if (does_blip_exist(iParam0->f_1211))
	{
		remove_blip(&(iParam0->f_1211));
	}
	if (does_blip_exist(iParam0->f_1212))
	{
		remove_blip(&(iParam0->f_1212));
	}
}

void func_31(int iParam0)
{
	if (does_particle_fx_looped_exist(iParam0->f_1246))
	{
		remove_particle_fx(iParam0->f_1246, true);
	}
	if (_does_propset_exist(iParam0->f_1247))
	{
		_delete_propset(iParam0->f_1247, true, true);
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (uParam0->f_2 > 0)
	{
		_0xdd1232b332cbb9e7(12, 1, 0);
		if (bParam1)
		{
			func_141(uParam0);
			func_142();
		}
		func_143(uParam0);
		_databinding_remove_data_entry(uParam0->f_6);
		_databinding_remove_data_entry(uParam0->f_5);
		_0xf1e6979c0b779985(&(uParam0->f_4));
		uParam0->f_9 = 0;
		func_144(0);
		func_145(0);
		_0xdd1232b332cbb9e7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		_copy_memory(uParam0, &Var0, 15);
	}
}

void func_33(var uParam0)
{
	if (uParam0->f_11.f_2 != 0)
	{
		func_146(&(uParam0->f_11));
		func_147(uParam0);
		func_148(&(uParam0->f_11), 1);
		Global_1940144->f_110 = 0;
		Var0.f_3 = 8;
		Var0.f_12 = 32;
		Var0.f_45 = 32;
		Var0.f_45.f_1 = 2;
		Var0.f_45.f_1.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_143 = 5;
		Var0.f_161 = -1;
		Var0.f_162 = 32;
		Var200.f_1 = -1082130432;
		Var200.f_2 = -1082130432;
		Var200.f_3 = -1082130432;
		Var200.f_4 = -1082130432;
		Var200.f_5 = -1082130432;
		Var200.f_14 = 255;
		uParam0->f_11 = { Var0 };
		iVar223 = 0;
		while (iVar223 <= 31)
		{
			_copy_memory(uParam0->f_211[iVar223], &Var200, 23);
			iVar223++;
		}
		uParam0->f_949 = 0;
	}
}

void func_34(var uParam0, bool bParam1, bool bParam2)
{
	if (_uiflowblock_is_loaded(*uParam0))
	{
		_uiflowblock_release(uParam0);
	}
	if (_uistatemachine_exists(190275865))
	{
		_uistatemachine_destroy(190275865);
	}
	if (_databinding_is_data_id_valid(uParam0->f_2))
	{
		_databinding_remove_data_entry(uParam0->f_2);
		uParam0->f_2 = 0;
	}
	if (_databinding_is_data_id_valid(uParam0->f_3))
	{
		_databinding_write_data_bool(uParam0->f_3, false);
		_databinding_remove_data_entry(uParam0->f_3);
		uParam0->f_3 = 0;
	}
	if (_databinding_is_data_id_valid(uParam0->f_1))
	{
		_databinding_remove_data_entry(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	if (bParam2)
	{
		if (uParam0->f_4 >= 0)
		{
			if (!_0x84848e1c0fc67dbb(uParam0->f_4))
			{
				_0x3210bcb36af7621b(uParam0->f_4);
			}
			release_sound_id(uParam0->f_4);
			uParam0->f_4 = -1;
		}
		if (uParam0->f_5 >= 0)
		{
			if (!_0x84848e1c0fc67dbb(uParam0->f_5))
			{
				_0x3210bcb36af7621b(uParam0->f_5);
			}
			release_sound_id(uParam0->f_5);
			uParam0->f_5 = -1;
		}
	}
	if (bParam1)
	{
		if (animpostfx_is_running(func_149()))
		{
			_0xc5cb91d65852ed7e(func_149());
			_display_hud_component(-2124237476);
			_0x981c7d863980fa51();
		}
	}
}

void func_35(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

void func_36(bool bParam0)
{
	func_150(58, !bParam0);
}

bool func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if ((Global_1900688->f_1 == 1 || Global_1900688->f_1 == 3) || Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
		case 2:
			if ((((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 1) || Global_1900688->f_1 == 3) || Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
		case 5:
			if (((Global_1900688->f_1 == 5 || Global_1900688->f_1 == 1) || Global_1900688->f_1 == 3) || Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
		case 3:
			if (Global_1900688->f_1 == 3 || Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
		case 4:
			if (Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_38(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_47() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_151(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_152();
		Global_1900688->f_9 = func_153(Global_1893587->f_2);
		Global_1900688->f_11 = func_154(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_155(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_155(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_155(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

int func_39(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

void func_40()
{
	if (!Global_1896738->f_383)
	{
	}
	Global_1896738->f_383 = 1;
}

void func_41()
{
	if (!Global_1071686->f_2)
	{
		func_156();
	}
}

void func_42(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (network_get_max_num_participants() - 1))
	{
		if (does_blip_exist(&(iParam0->f_1213[iVar0])))
		{
			remove_blip(iParam0->f_1213[iVar0]);
		}
		iVar0++;
	}
}

void func_43(bool bParam0)
{
	if (bParam0)
	{
		func_157(49);
	}
	else
	{
		func_158(49);
	}
}

void func_44()
{
	if (Global_1108365->f_935.f_28 != -1)
	{
		Global_1108365->f_935.f_28 = -1;
	}
}

bool func_45(var uParam0, int iParam1)
{
	return func_159(uParam0->f_1, iParam1);
}

void func_46(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 11)
	{
		Global_1108365->f_935.f_5[iParam0] = Global_1296859->f_21;
	}
}

int func_47()
{
	return Global_1572887->f_13;
}

bool func_48()
{
	return Global_1051252->f_8;
}

bool func_49(struct<2> Param0)
{
	if (!func_160(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_161(Param0))
	{
		return false;
	}
	return true;
}

void func_50(struct<2> Param0)
{
	if (func_129(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_129(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_129(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_61(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				_0xf21a5d66874fcedd(Var0.f_2, 0, -1423748980);
			}
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_29, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_30, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_31, 0);
		}
	}
}

struct<2> func_51(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

void func_52(struct<2> Param0, int iParam2)
{
	if (!func_49(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_162(Param0);
	}
	else
	{
		func_163(Param0, iParam2);
	}
	func_164();
}

void func_53(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_165(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_166(Global_1940258, 8388608);
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

void func_54(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_167(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_168(cVar2);
			}
			else
			{
				func_169();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_55(struct<2> Param0, int iParam2)
{
	iVar0 = func_170(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_171(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_172(iVar0, iParam2);
	return iParam2;
}

bool func_56(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_57(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_58(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_59(struct<2> Param0, int iParam2)
{
	if (!func_49(Param0))
	{
		return 0;
	}
	iVar0 = func_170(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_173(Param0, func_51(0), iParam2))
	{
		func_52(func_51(0), 3);
		func_52(func_51(iVar0), 4);
		return 0;
	}
	func_172(iVar0, 0);
	func_52(func_51(0), 3);
	func_52(func_51(1), 4);
	return 1;
}

int func_60(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_61(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_174(Param0, &vVar0);
	if (func_175(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_62(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_63(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_64(int iParam0, int iParam1)
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

bool func_65()
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
	if (!func_49(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_66(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!(*uParam0)[iVar0]->f_12)
		{
		}
		else if (func_159((*uParam0)[iVar0]->f_1, iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_67(var uParam0, int iParam1)
{
	func_176(&(uParam0->f_1), iParam1);
}

void func_68(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_69(var uParam0, bool bParam1)
{
	if (bParam1 || !func_72(uParam0))
	{
		func_177(uParam0);
	}
}

bool func_70(var uParam0, var uParam1)
{
	iVar0 = _0x4be6c13a45cca8ec(uParam0->f_37);
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_a_participant(iVar0))
	{
		return false;
	}
	iVar1 = network_get_participant_index(iVar0);
	iVar2 = network_get_participant_index(iVar0);
	if (!func_178(iVar1))
	{
		return false;
	}
	if (func_179((*uParam1)[iVar2]->f_6))
	{
		return false;
	}
	uParam0->f_50 = { func_180(iVar0) };
	uParam0->f_53 = { (*uParam1)[iVar2]->f_6 };
	uParam0->f_53.f_2 = _get_heightmap_bottom_z_for_position(uParam0->f_53, uParam0->f_53.f_1);
	request_collision_at_coord(uParam0->f_53);
	if (!_0x6bfbdc46139c45ab(uParam0->f_53))
	{
		return false;
	}
	if (!func_181(&(uParam0->f_53), 9999f))
	{
		return false;
	}
	return true;
}

int func_71(var uParam0)
{
	if (!func_72(uParam0))
	{
		return 0;
	}
	if (func_182(uParam0))
	{
		return uParam0->f_2;
	}
	return func_183(uParam0->f_1);
}

bool func_72(var uParam0)
{
	return func_184(*uParam0, 1);
}

bool func_73(var uParam0)
{
	if (func_75(uParam0, 64) > 0)
	{
		return true;
	}
	return false;
}

bool func_74(var uParam0)
{
	uParam0->f_56 = 2.147484E+09f;
	iVar0 = int_to_participantindex(uParam0->f_33);
	if (!func_178(iVar0))
	{
		return false;
	}
	if (!network_is_participant_active(iVar0))
	{
		return false;
	}
	iVar1 = network_get_player_index(iVar0);
	if (!_network_is_player_index_valid(iVar1) || !network_is_player_connected(iVar1))
	{
		return false;
	}
	fVar2 = func_185(func_180(iVar1), uParam0->f_53);
	if (fVar2 < uParam0->f_56)
	{
		uParam0->f_56 = fVar2;
	}
	return uParam0->f_33 >= (network_get_max_num_participants() - 1);
}

int func_75(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iVar2 = int_to_participantindex(iVar1);
		if (!func_178(iVar2))
		{
		}
		else if (!network_is_participant_active(iVar2))
		{
		}
		else if (func_103((*uParam0)[iVar1], iParam1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_76(var uParam0, var uParam1)
{
	fVar0 = 0f;
	iVar2 = 0;
	while (iVar2 <= (network_get_max_num_participants() - 1))
	{
		if (func_103((*uParam1)[iVar2], 1))
		{
		}
		else
		{
			iVar3 = int_to_participantindex(iVar2);
			if (!func_178(iVar3))
			{
			}
			else if (!network_is_participant_active(iVar3))
			{
			}
			else
			{
				iVar4 = network_get_player_index(iVar3);
				if (!_network_is_player_index_valid(iVar4) || !network_is_player_connected(iVar4))
				{
				}
				else
				{
					fVar1 = func_185(func_180(iVar4), uParam0->f_53);
					if (fVar1 > fVar0)
					{
						fVar0 = fVar1;
						uParam0->f_50 = { func_180(iVar4) };
					}
				}
			}
		}
		iVar2++;
	}
	uParam0->f_34 = _0xfd5bb35aab83fd48(uParam0->f_50, uParam0->f_53, 0);
}

void func_77(var uParam0)
{
	if (_0x65a8196b8d7f5e0b(uParam0->f_34))
	{
		if (simulated_route_is_loaded(uParam0->f_34))
		{
			simulated_route_travel_to_point(uParam0->f_34, 1f, 5f);
			uParam0->f_36 = ceil(((simulated_route_get_eta(uParam0->f_34) * 1000f) * 1.5f));
			fVar0 = func_185(uParam0->f_50, uParam0->f_53);
			fVar1 = 5f;
			iVar2 = ceil((fVar0 / fVar1)) * 1000;
			if (uParam0->f_36 < iVar2)
			{
				uParam0->f_36 = ceil(((fVar0 * 1.5f) / fVar1)) * 1000;
			}
			if ((uParam0->f_36 % 60000) > 0)
			{
				uParam0->f_36 = (uParam0->f_36 + (60000 - (uParam0->f_36 % 60000)));
			}
			Global_1108365->f_23 = uParam0->f_35;
			Global_1108365->f_24 = uParam0->f_36;
			func_67(uParam0, 1);
		}
	}
}

bool func_78(var uParam0)
{
	return get_time_difference(uParam0->f_42, get_network_time_accurate()) > 6500;
}

void func_79(var uParam0, var uParam1)
{
	iVar0 = 255;
	if (!func_45(uParam0, 2))
	{
		iVar0 = func_186(uParam1, 16777216);
		if (_network_is_player_index_valid(iVar0) && network_is_player_connected(iVar0))
		{
			func_187(uParam0);
			func_67(uParam0, 2);
			uParam0->f_49 = iVar0;
		}
	}
	if (func_45(uParam0, 2) && !func_45(uParam0, 16))
	{
		func_188(uParam0);
		func_189(uParam0, uParam1);
		func_67(uParam0, 16);
	}
	if (!func_45(uParam0, 16))
	{
		iVar1 = (uParam0->f_36 - get_time_difference(uParam0->f_35, get_network_time_accurate()));
	}
	else
	{
		iVar1 = (3000 - get_time_difference(uParam0->f_38, get_network_time_accurate()));
	}
	if (iVar1 <= 0)
	{
		func_67(uParam0, 32);
		if (!func_45(uParam0, 16))
		{
			func_189(uParam0, uParam1);
		}
	}
}

bool func_80(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (!func_103((*uParam0)[iVar0], 1))
			{
				if (!(func_103((*uParam0)[iVar0], iParam1) || func_103((*uParam0)[iVar0], iParam2)))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_81(var uParam0, var uParam1)
{
	bVar2 = false;
	iVar3 = 255;
	iVar1 = 0;
	while (iVar1 < network_get_max_num_participants())
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			if (func_103((*uParam1)[iVar1], 16777216))
			{
				iVar4 = get_time_difference((*uParam1)[iVar1]->f_10, (*uParam1)[iVar1]->f_9);
				if (!bVar2 || iVar4 < iVar0)
				{
					bVar2 = true;
					iVar0 = iVar4;
					iVar3 = network_get_player_index(int_to_participantindex(iVar1));
				}
			}
		}
		iVar1++;
	}
	uParam0->f_48 = iVar3;
}

bool func_82(var uParam0)
{
	return get_time_difference(uParam0->f_40, get_network_time_accurate()) > 20000;
}

bool func_83(int iParam0)
{
	if (iParam0->f_1245)
	{
		return true;
	}
	if (!func_112(iParam0, -2147483648))
	{
		_text_database_request("GEIRONMP");
		func_119(iParam0, -2147483648);
	}
	if (!_text_database_has_loaded("GEIRONMP"))
	{
		if (!_0x3cf96e16265b7dc8("GEIRONMP"))
		{
			_text_database_request("GEIRONMP");
		}
		return false;
	}
	iParam0->f_1245 = 1;
	return true;
}

void func_84(int iParam0, int iParam1)
{
	iParam0->f_2 = iParam1;
}

bool func_85(var uParam0, int iParam1)
{
	if (!func_112(iParam1, -2147483648))
	{
		_text_database_request("GEIRONMP");
		func_119(iParam1, -2147483648);
	}
	if (!_text_database_has_loaded("GEIRONMP"))
	{
		if (!_0x3cf96e16265b7dc8("GEIRONMP"))
		{
			_text_database_request("GEIRONMP");
		}
		return false;
	}
	if (!_has_propset_loaded_2(func_190()) || !_has_propset_loaded(func_190()))
	{
		func_191();
		return false;
	}
	request_ptfx_asset();
	if (!has_ptfx_asset_loaded())
	{
		return false;
	}
	if (func_192())
	{
		if (!func_193())
		{
			func_194(1);
		}
		func_88(uParam0, 64);
		return false;
	}
	func_104(uParam0, 64);
	uParam0->f_11 = 0;
	iParam1->f_1221 = _0x901e0dc25080c8b9(player_id());
	func_36(0);
	iParam1->f_1245 = 1;
	return true;
}

void func_86()
{
	func_195(3);
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	task_whistle_anim(uParam0, iParam1, iParam2);
}

void func_88(var uParam0, int iParam1)
{
	func_176(uParam0, iParam1);
}

void func_89()
{
	if (is_waypoint_active())
	{
		clear_gps_player_waypoint();
		set_waypoint_off();
	}
}

struct<2> func_90(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_91(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_92(int iParam0)
{
	if ((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_47() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_153(Global_1893587->f_2);
	Global_1900688->f_1 = 3;
	Global_1900688->f_2 = 0;
	Global_1900688->f_7 = iVar0;
	Global_1900688->f_8 = iParam0;
	Global_1900688->f_9 = iVar1;
	if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
	{
		func_155(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
	}
	else if (Global_1900688->f_11 != -1)
	{
		func_155(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
	}
}

int func_93(char* sParam0, int iParam1, bool bParam2)
{
	iVar0 = get_id_of_this_thread();
	if (((iVar0 == Global_1071686->f_22971.f_1 || Global_1071686->f_22971.f_1 == 0) || iParam1 > Global_1071686->f_22971) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			_copy_memory(&(Global_1071686->f_22971), &uVar1, 2);
		}
		else
		{
			Global_1071686->f_22971.f_1 = get_id_of_this_thread();
			Global_1071686->f_22971 = iParam1;
		}
		if (trigger_music_event(sParam0))
		{
		}
		return 1;
	}
	return 0;
}

void func_94(int iParam0)
{
	if (func_196())
	{
		iParam0->f_166 = 1;
	}
	else if (iParam0->f_166)
	{
		func_93("MP_HORSE_RACE_START", 1, 0);
		iParam0->f_166 = 0;
	}
}

void func_95()
{
	func_140(Global_1108365, 32);
}

void func_96(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_197(iParam1);
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
	func_198(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_97(var uParam0, var uParam1, int iParam2)
{
	if (func_103(uParam1, 131072))
	{
		return;
	}
	if (func_179(uParam0->f_53))
	{
		return;
	}
	if (func_185(Global_35, uParam0->f_53) > 400f)
	{
		return;
	}
	vVar0 = { uParam0->f_53 };
	request_collision_at_coord(vVar0);
	_0xcf213a5fc3abfc08(vVar0.x, vVar0.y, (50f * 2f));
	if (!_0x6bfbdc46139c45ab(vVar0))
	{
		is_navmesh_loaded_in_area(vVar0 + Vector(50f, 50f, 50f), vVar0 - Vector(50f, 50f, 50f));
		return;
	}
	if (!get_safe_coord_for_ped(vVar0, false, &vVar0, 2))
	{
		vVar0 = { uParam0->f_53 };
		if (!does_particle_fx_looped_exist(iParam2->f_1246))
		{
			iParam2->f_1246 = start_particle_fx_looped_at_coord(func_199(), uParam0->f_53, 0f, 0f, 0f, 1.5f, false, false, false, true);
		}
	}
	if (_has_propset_loaded_2(func_190()))
	{
		func_181(&vVar0, 9999f);
		if (does_particle_fx_looped_exist(iParam2->f_1246))
		{
			remove_particle_fx(iParam2->f_1246, true);
		}
		iParam2->f_1246 = start_particle_fx_looped_at_coord(func_199(), vVar0, 0f, 0f, 0f, 1.5f, false, false, false, true);
		iParam2->f_1247 = _create_propset(func_190(), vVar0, 0, 0f, 9999f, false, true);
		if (!func_103(uParam1, 131072))
		{
			func_88(uParam1, 131072);
		}
	}
	if (func_103(uParam1, 1073741824))
	{
		func_104(uParam1, 1073741824);
	}
}

void func_98(var uParam0, int iParam1)
{
	if (vdist(Global_35, uParam0->f_53) < 150f)
	{
		return;
	}
	if (!func_179(uParam0->f_53))
	{
		func_200(&(iParam1->f_1222), uParam0->f_53, 1, -1082130432);
	}
}

void func_99()
{
	if (!func_201(Global_34, 1))
	{
		if (_0x7a4e00364b5d727b(Global_34))
		{
			func_202(0);
		}
		return;
	}
	if (!func_203(255) || !func_204(255))
	{
		return;
	}
	_0x44d59ec597bbf348(9, 1);
	_0xeb6027fd1b4600d5(15, 0, 0.75f);
	_0xeb6027fd1b4600d5(19, 1, 0.05f);
	_0x44d59ec597bbf348(3, 0);
	func_205(func_180(player_id()), 2f, 7f, &Var0, &Var30);
	func_206(1, 0);
	func_207(Var0, Var30, 1, 1, 1);
}

void func_100()
{
	func_176(&(Global_1071686->f_22973.f_3), 4);
}

void func_101()
{
	func_176(&(Global_1071686->f_22973.f_3), 16);
}

void func_102(var uParam0, var uParam1, int iParam2)
{
	func_97(uParam0, uParam1, iParam2);
	func_208(iParam2);
	if ((!func_112(iParam2, 262144) && _network_is_player_index_valid(uParam0->f_49)) && network_is_player_connected(uParam0->f_49))
	{
		func_209("IRON_TICKER_WINNER_VALID", uParam0->f_49, -963477619);
		func_119(iParam2, 262144);
	}
	if (func_45(uParam0, 32) && !uParam1->f_11)
	{
		func_88(uParam1, 33554432);
		return;
	}
	fVar0 = func_210(player_ped_id(), uParam0->f_53, 0);
	if ((fVar0 <= 33f && !uParam1->f_11) && !func_112(iParam2, 65536))
	{
		uParam1->f_11 = 1;
		uParam1->f_9 = get_network_time_accurate();
		func_88(uParam1, 16777216);
	}
	if (fVar0 > 33f)
	{
		if (!func_103(uParam1, 134217728) && is_waypoint_active())
		{
			clear_gps_player_waypoint();
			set_waypoint_off();
			func_88(uParam1, 134217728);
		}
		if (!does_blip_exist(iParam2->f_1211))
		{
			iParam2->f_1211 = _blip_add_for_coord(-282719360, uParam0->f_53);
			_blip_set_modifier(iParam2->f_1211, -1878373110);
			set_blip_name_from_text_file(iParam2->f_1211, "IRON_WAYPOINT_NAME");
		}
		if (!does_blip_exist(iParam2->f_1212))
		{
			iParam2->f_1212 = _blip_add_for_area(1247852480, uParam0->f_53, 45f, 45f, 45f, 0);
			set_blip_name_from_text_file(iParam2->f_1211, "IRON_AREA_NAME");
		}
	}
}

bool func_103(var uParam0, int iParam1)
{
	return func_159(*uParam0, iParam1);
}

void func_104(var uParam0, int iParam1)
{
	func_211(uParam0, iParam1);
}

void func_105(var uParam0, var uParam1, int iParam2)
{
	iVar2 = 0;
	while (iVar2 <= (network_get_max_num_participants() - 1))
	{
		iVar0 = int_to_participantindex(iVar2);
		if (!network_is_participant_active(iVar0))
		{
		}
		else if (func_103((*uParam1)[iVar2], 1))
		{
		}
		else
		{
			iVar1 = network_get_player_index(iVar0);
			if ((*uParam1)[iVar2]->f_11)
			{
				iVar3 = get_time_difference((*uParam1)[iVar2]->f_10, (*uParam1)[iVar2]->f_9);
				fVar4 = 0f;
				func_212(&(iParam2->f_182), to_float(iVar3), iVar1, iParam2->f_1147[iVar2], 0, 0f, 0, 0, 0, 0);
			}
			else
			{
				iVar3 = uParam0->f_36 + 3000;
				fVar4 = func_213(uParam0, iVar1);
				func_212(&(iParam2->f_182), -1f, iVar1, iParam2->f_1147[iVar2], 0, fVar4, 0, 0, 0, 0);
			}
		}
		iVar2++;
	}
	func_214(&(iParam2->f_182));
}

void func_106(int iParam0)
{
	uVar0 = 1;
	func_215(&(iParam0->f_167), &(iParam0->f_182), &uVar0, 10241, 0);
}

bool func_107(var uParam0)
{
	return func_184(*uParam0, 1);
}

void func_108(var uParam0, bool bParam1)
{
	if (bParam1 || !func_107(uParam0))
	{
		func_216(uParam0);
	}
}

int func_109(var uParam0)
{
	if (!func_107(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_217(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_218() - round((uParam0->f_1 * 1000f)));
}

void func_110(var uParam0, int iParam1)
{
	fVar0 = vdist(iParam1->f_1183, uParam0->f_53);
	fVar1 = vdist(Global_35, uParam0->f_53);
	fVar2 = (fVar0 - fVar1);
	iVar3 = 1785817993;
	iVar4 = func_219(fVar2);
	Var5.f_1 = 11;
	func_220(&Var5, iVar4);
	if (uParam0->f_48 == player_id())
	{
		iVar3 = 1356271729;
	}
	func_221(fVar2);
	func_222(iVar3, &Var5, 0, 255, 0, 0);
}

struct<2> func_111(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

bool func_112(int iParam0, int iParam1)
{
	return func_159(iParam0->f_1243, iParam1);
}

int func_113(var uParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_223(uParam0, sParam1, &bVar0, 0, vVar2, 0, 0))
	{
		func_224(uParam0, sParam1, bParam2, bParam3, bParam4);
		iVar1 = 1;
	}
	else
	{
		iVar1 = 0;
	}
	if (bVar0)
	{
		func_34(uParam0, 1, 1);
	}
	return iVar1;
}

void func_114(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	if ((func_225(uParam0, &bVar0) && func_226(uParam0)) && func_227(uParam0, -1700692449, &bVar0))
	{
		func_228(uParam0, iParam1, bParam2, iParam3, sParam4);
	}
	if (bVar0)
	{
		func_32(uParam0, 1);
	}
}

var func_115(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	return func_229(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

bool func_116(int iParam0)
{
	return func_230(1, iParam0);
}

char* func_117()
{
	return "IRON_SPECTATE_HELP";
}

int func_118(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_119(int iParam0, int iParam1)
{
	func_176(&(iParam0->f_1243), iParam1);
}

int func_120(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar20 = _0xa6f4216ab10eb08e(&Var0, &vVar13, iParam6, iParam7);
	return uVar20;
}

bool func_121()
{
	if (func_192())
	{
		return true;
	}
	if (is_control_pressed(0, 255439828))
	{
		return true;
	}
	if (func_196())
	{
		return true;
	}
	return false;
}

int func_122(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	switch (iParam3)
	{
		case 3:
			iVar0 = func_231(sParam0, sParam1, sParam2, -2, 0, 0, 0, 1, 1, 1);
			break;
		case 2:
			iVar0 = func_120(sParam0, sParam1, -2, 0, 0, 0, 1, 1);
			break;
		case 1:
			iVar0 = func_232(sParam0, -2, 0, 0, 0, 1);
			break;
	}
	return iVar0;
}

int func_123(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		if (iParam2 == -1)
		{
			return 1475463663;
		}
		else
		{
			return 636925055;
		}
	}
	if (!network_is_game_in_progress())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_128(func_51(0)) && func_60(func_51(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = is_bit_set(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if (Global_1071686->f_21416.f_1[iVar2]->f_5 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_5;
	}
	if (bParam3 && Global_1071686->f_21416.f_1[iVar2]->f_6 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_6;
	}
	if (iParam0 == player_id())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_233(iParam0);
			if (iVar6 == -1031763995 && _network_is_player_in_spectator_mode(iParam0))
			{
				return 1105014447;
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_234(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_235(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_236(iParam0, 1);
	if (!bVar0)
	{
		if (func_237(iParam0, bParam1))
		{
			return func_234(iParam0);
		}
		else if (func_238(iParam0, bParam1))
		{
			if (func_239(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_233(iParam0);
	}
	else if (func_237(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_241(func_240(func_51(0)), 1) == 395262693)
		{
			return func_234(iParam0);
		}
		else
		{
			return func_234(iParam0);
		}
	}
	else if (func_238(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_124(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_242(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258->f_12)
	{
		if ((bParam2 || Global_1940258->f_13 > 0) || Global_1940258->f_11 > 0)
		{
			return true;
		}
	}
	else if (bParam1 && !Global_1940258->f_9 == 1370593166)
	{
		return false;
	}
	if (Global_1940258->f_14 > 0 || (bParam2 && Global_1940258->f_14 > -1))
	{
		return true;
	}
	if (bParam0)
	{
		if (Global_1940258->f_7)
		{
			if (bParam2 || Global_1940258->f_15 > 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_126(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_127()
{
	Global_1139381->f_5560.f_22 = get_frame_count();
}

bool func_128(struct<2> Param0)
{
	iVar0 = func_130(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_129(struct<2> Param0)
{
	return func_243(Param0);
}

int func_130(struct<2> Param0)
{
	if (!func_49(Param0))
	{
		return -1;
	}
	iVar0 = func_244(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

int func_131(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_245())
	{
		return 0;
	}
	if (!func_246())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_57(&Global_0, 8);
	}
	func_57(&Global_0, 1);
	return 1;
}

void func_132(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_247(func_60(Param0));
	iVar1 = func_129(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_47() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_248(Param0, &Var2);
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

int func_133(bool bParam0)
{
	if (!bParam0 && func_249(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_134(struct<2> Param0)
{
	return func_250(func_170(Param0));
}

int func_135(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_62(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_136(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_137()
{
	return Global_1102219->f_3672;
}

void func_138(var uParam0, int iParam1)
{
	func_176(uParam0, iParam1);
}

void func_139(var uParam0, int iParam1)
{
	func_211(&(uParam0->f_18), iParam1);
}

void func_140(var uParam0, int iParam1)
{
	func_176(&(uParam0->f_18), iParam1);
}

void func_141(var uParam0)
{
	if (uParam0->f_11 >= 0)
	{
		if (!_0x84848e1c0fc67dbb(uParam0->f_11))
		{
			_0x3210bcb36af7621b(uParam0->f_11);
		}
		release_sound_id(uParam0->f_11);
		uParam0->f_11 = -1;
	}
}

void func_142()
{
	_0x9d746964e0cf2c5f(func_251(), func_252());
	_0x9d746964e0cf2c5f(func_253(), func_252());
	_0x9d746964e0cf2c5f(func_254(), func_252());
	_0x9d746964e0cf2c5f(func_255(), func_252());
	_0x9d746964e0cf2c5f(func_256(), func_257());
	_0x9d746964e0cf2c5f(func_258(), func_259());
}

void func_143(var uParam0)
{
	if (_uiflowblock_is_loaded(uParam0->f_3))
	{
		_uiflowblock_release(&(uParam0->f_3));
	}
	if (_uistatemachine_exists(1546991729))
	{
		_uistatemachine_destroy(1546991729);
	}
}

void func_144(int iParam0)
{
	if (Global_1903133->f_1 != iParam0)
	{
		Global_1903133->f_1 = iParam0;
	}
}

void func_145(int iParam0)
{
	Global_1903133 = iParam0;
}

void func_146(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar0]), "Position", "");
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar0]), "Gamertag", "");
		_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
}

void func_147(var uParam0)
{
	if (uParam0[0] != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			_databinding_remove_data_entry(uParam0[iVar0]);
			_databinding_remove_data_entry((*uParam0)[iVar0]->f_1);
			iVar0++;
		}
		uVar1 = 2;
		_copy_memory(uParam0, &uVar1, 11);
	}
}

void func_148(var uParam0, bool bParam1)
{
	_close_app_by_hash(595204529);
	if (_databinding_is_data_id_valid(*uParam0))
	{
		_databinding_remove_data_entry(*uParam0);
	}
	if (_databinding_is_data_id_valid(uParam0->f_142))
	{
		_databinding_remove_data_entry(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_143[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_143[iVar0]));
		}
		iVar0++;
	}
	_0x531a78d6bf27014b("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_260(&(uParam0->f_162));
	}
	func_144(0);
}

char* func_149()
{
	return "MP_OutofAreaDirectional";
}

void func_150(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_195(iParam0);
	}
	else
	{
		func_261(iParam0);
	}
}

void func_151(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_152()
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

int func_153(int iParam0)
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

int func_154(int iParam0)
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

void func_155(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_156()
{
	if (Global_1572887->f_13 == -1)
	{
		return;
	}
	Global_1071686->f_2 = 0;
}

int func_157(int iParam0)
{
	if (func_262(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	if (func_263(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_159(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_160(int iParam0)
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

int func_161(int iParam0)
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

int func_162(struct<2> Param0)
{
	iVar0 = func_244(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_264(iVar0);
}

int func_163(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_174(Param0, &vVar0))
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
		func_174(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
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
			func_265(iVar9);
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

void func_164()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_174(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_165(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_166(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_167(int iParam0, int iParam1)
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

void func_168(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_169()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

int func_170(struct<2> Param0)
{
	if (!func_49(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_62(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_171(struct<2> Param0, int iParam2)
{
	if (!func_49(Param0))
	{
		func_136(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_266(Param0, 0, 1, -1);
}

void func_172(int iParam0, int iParam1)
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
			func_267((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_267(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_49(*Global_1900736->f_1[0]))
	{
		func_52(*Global_1900736->f_1[0], 3);
	}
}

bool func_173(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_49(Param0))
	{
		return false;
	}
	if (!func_49(Param2))
	{
		return true;
	}
	iVar0 = func_60(Param0);
	iVar1 = func_60(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_174(struct<2> Param0, var uParam2)
{
	if (!func_49(Param0))
	{
		return false;
	}
	func_268(uParam2);
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

bool func_175(int iParam0, var uParam1, var uParam2)
{
	if (!func_269(iParam0))
	{
		return false;
	}
	if (func_270(iParam0, uParam1, &uVar0))
	{
		func_271(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_177(var uParam0)
{
	func_272(uParam0, 0);
}

bool func_178(int iParam0)
{
	return func_273(iParam0);
}

bool func_179(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_180(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_181(var uParam0, float fParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return true;
	}
	return false;
}

bool func_182(var uParam0)
{
	return func_184(*uParam0, 2);
}

int func_183(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

bool func_184(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_185(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_186(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_103((*uParam0)[iVar0], iParam1))
			{
				return network_get_player_index(int_to_participantindex(iVar0));
			}
		}
		iVar0++;
	}
	return 255;
}

void func_187(var uParam0)
{
	uParam0->f_38 = get_network_time_accurate();
}

void func_188(var uParam0)
{
	uParam0->f_38 = get_network_time_accurate();
}

void func_189(var uParam0, var uParam1)
{
	iVar2 = 0;
	while (iVar2 <= (network_get_max_num_participants() - 1))
	{
		iVar0 = int_to_participantindex(iVar2);
		if (!network_is_participant_active(iVar0))
		{
		}
		else if (func_103((*uParam1)[iVar2], 1))
		{
		}
		else
		{
			iVar1 = network_get_player_index(iVar0);
			fVar3 = vdist(func_180(iVar1), uParam0->f_53);
			uParam0->f_3[iVar2] = iVar1;
			uParam0->f_3[iVar2]->f_3 = fVar3;
		}
		iVar2++;
	}
}

int func_190()
{
	return 8658837;
}

void func_191()
{
	_request_propset_2(func_190());
	_request_propset(func_190());
}

bool func_192()
{
	return (func_274() != 0 || func_275(1));
}

bool func_193()
{
	return func_276() != 0;
}

int func_194(int iParam0)
{
	if (func_193())
	{
		return 0;
	}
	if (!func_192())
	{
		return 0;
	}
	if (func_277())
	{
		func_278(2);
	}
	else
	{
		func_278(1);
	}
	func_279(iParam0);
	return 1;
}

void func_195(int iParam0)
{
	if (!func_280(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

bool func_196()
{
	return func_230(1, 255);
}

void func_197(int iParam0)
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
		func_281();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_198(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

char* func_199()
{
	return "scr_net_imp_race_smoke";
}

int func_200(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_159(uParam0->f_1, 1))
	{
		if (does_particle_fx_looped_exist(*uParam0))
		{
			if (func_159(uParam0->f_1, 16))
			{
				func_282(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				func_283(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	request_named_ptfx_asset(-458373790);
	if (has_named_ptfx_asset_loaded(-458373790))
	{
		if (!func_159(uParam0->f_1, 8))
		{
			if (!does_particle_fx_looped_exist(*uParam0))
			{
				use_particle_fx_asset("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_284(get_distance_between_coords(get_gameplay_cam_coord(), vParam1, true));
				uParam0->f_3 = func_286(func_285(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_287(iParam4);
				uParam0->f_5 = to_float(get_random_int_in_range(floor((uParam0->f_5 - 15f)), floor((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = start_particle_fx_looped_at_coord(sVar0, vParam1, 0f, 0f, 0f, func_288(iParam4), false, false, false, false);
				uParam0->f_4 = get_frame_count();
				if (func_289(vParam1, 1) > (get_gameplay_cam_fov() + 15f))
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
					set_particle_fx_looped_alpha(*uParam0, 1f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_176(&(uParam0->f_1), 16);
				}
				else
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_2);
					set_particle_fx_looped_alpha(*uParam0, 0f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_176(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

bool func_201(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

void func_202(bool bParam0)
{
	if (bParam0)
	{
		func_157(109);
		if (!Global_1296859->f_12)
		{
			func_290(16);
		}
	}
	else
	{
		func_158(109);
		if (!Global_1296859->f_12)
		{
			func_290(16);
		}
	}
}

bool func_203(int iParam0)
{
	return func_230(48, iParam0);
}

bool func_204(int iParam0)
{
	return func_230(49, iParam0);
}

void func_205(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6)
{
	uParam5->f_5 = 2;
	uParam5->f_1 = { vParam0 };
	uParam5->f_17.f_6 = { vParam0 };
	uParam5->f_17 = { fParam3, fParam3, fParam3 };
	if (fParam3 > 30f)
	{
		uParam5->f_17 = { fParam3, fParam3, 30f };
	}
	uParam5->f_17.f_9 = -432403087;
	uParam5->f_6.f_6 = { vParam0 };
	uParam5->f_6 = { fParam4, fParam4, 0f };
	uParam5->f_6.f_9 = -432403087;
	uParam5->f_16 = 1;
	uParam6->f_5 = 2;
	uParam6->f_1 = { vParam0 };
	uParam6->f_6 = { vParam0 };
}

void func_206(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_157(62);
		if (bParam1)
		{
			func_157(69);
		}
	}
	else
	{
		func_158(62);
		func_158(50);
		func_158(69);
	}
}

int func_207(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_203(255))
	{
		if ((Param0.f_17.f_9 != -1612834106 && Param0.f_17.f_9 != -432403087) && Param0.f_17.f_9 != 665633627)
		{
			Param0.f_17.f_9 = -432403087;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -1612834106 && Param0.f_6.f_9 != -432403087) && Param0.f_6.f_9 != 665633627)
			{
				Param0.f_6.f_9 = -432403087;
			}
		}
		func_291(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = { Param0 };
		func_292(&(Global_1102219->f_3888));
		Global_1102219->f_3888 = { Param30 };
		Global_1102219->f_3919 = iParam39;
		Global_1102219->f_3920 = iParam40;
		Global_1102219->f_3921 = iParam41;
		func_293(Global_1102219->f_3849, 36);
		func_294(Global_1102219->f_3888, 36);
		func_158(48);
		return 1;
	}
	return 0;
}

void func_208(int iParam0)
{
	iVar0 = func_39(Global_34);
	if ((func_295(iVar0) && does_entity_exist(iVar0)) && !func_112(iParam0, 65536))
	{
		func_86();
		func_119(iParam0, 65536);
		iParam0->f_1244 = 1;
	}
	else if ((!func_295(iVar0) || !does_entity_exist(iVar0)) && func_112(iParam0, 65536))
	{
		func_296(iParam0, 65536);
		iParam0->f_1244 = 1;
	}
}

int func_209(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 == 255)
	{
		return 0;
	}
	if (!network_is_player_active(iParam1))
	{
		return 0;
	}
	StringCopy(&cVar0, get_player_name(iParam1), 64);
	sVar8 = _create_var_string(10, sParam0, func_124(&cVar0, iParam2));
	uVar9 = func_297(sVar8, -2, 0, 0, 0, 1);
	return uVar9;
}

float func_210(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_212(var uParam0, float fParam1, int iParam2, var uParam3, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9)
{
	if ((*uParam3 >= 0 && *uParam3 < 32) && uParam0->f_211[*uParam3]->f_14 != 255)
	{
		if (!network_is_player_active(uParam0->f_211[*uParam3]->f_14) || !network_is_player_a_participant(uParam0->f_211[*uParam3]->f_14))
		{
			func_298(uParam0, *uParam3);
		}
	}
	if (iParam2 == 255)
	{
		return 0;
	}
	iVar0 = *uParam3;
	if (((iVar0 < 0 || uParam0->f_211[iVar0]->f_14 != iParam2) || !network_is_player_active(uParam0->f_211[iVar0]->f_14)) || !network_is_player_a_participant(uParam0->f_211[iVar0]->f_14))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (uParam0->f_211[iVar1]->f_14 != 255)
			{
				if (!network_is_player_active(uParam0->f_211[iVar1]->f_14) || !network_is_player_a_participant(uParam0->f_211[iVar1]->f_14))
				{
					func_299(uParam0);
					func_298(uParam0, iVar1);
				}
			}
			if (uParam0->f_211[iVar1]->f_14 == iParam2)
			{
				func_299(uParam0);
				iVar0 = iVar1;
				Jump @336; //curOff = 286
			}
			else if (uParam0->f_211[iVar1]->f_14 == 255 && iVar0 == -1)
			{
				func_299(uParam0);
				iVar0 = iVar1;
			}
			iVar1++;
		}
	}
	if (iVar0 >= 0)
	{
		if (bParam4)
		{
			func_299(uParam0);
			func_298(uParam0, iVar0);
			*uParam3 = 0;
		}
		else
		{
			if ((uParam0->f_211[iVar0]->f_5 != fParam1 || uParam0->f_211[iVar0]->f_1 != fParam5) || uParam0->f_211[iVar0]->f_2 != fParam6)
			{
				func_300(uParam0);
			}
			uParam0->f_211[iVar0]->f_14 = iParam2;
			uParam0->f_211[iVar0]->f_5 = fParam1;
			uParam0->f_211[iVar0]->f_1 = fParam5;
			uParam0->f_211[iVar0]->f_2 = fParam6;
			uParam0->f_211[iVar0]->f_3 = iParam8;
			uParam0->f_211[iVar0]->f_4 = iParam9;
			uParam0->f_211[iVar0] = iParam7;
			*uParam3 = iVar0;
		}
	}
	return 1;
}

float func_213(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (network_get_max_num_participants() - 1))
	{
		if (&uParam0->f_3[iVar0] == iParam1)
		{
			return uParam0->f_3[iVar0]->f_3;
		}
		iVar0++;
	}
	return vdist(func_180(iParam1), uParam0->f_53);
}

void func_214(var uParam0)
{
	_0x7e300b5b86ab1d1a(&(uParam0->f_211), uParam0->f_211, 23, 1, 2, 0, 5, 2, 0, 0, 0, 0, 0, 0, 0);
}

void func_215(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	iParam3 |= 8;
	if (func_225(uParam0, &bVar0) && func_301(uParam0, uParam1, iParam3, 551037070, 859817522, 1105014447, 1105014447, iParam4))
	{
		func_302(uParam1, uParam2, iParam3 | 8, 551037070, 859817522, 109029619, 109029619, iParam4);
	}
	if (bVar0)
	{
		func_33(uParam1);
		func_32(uParam0, 1);
	}
}

void func_216(var uParam0)
{
	func_303(uParam0, 0f);
}

bool func_217(var uParam0)
{
	return func_184(*uParam0, 2);
}

int func_218()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_219(float fParam0)
{
	if (fParam0 >= 9600f)
	{
		return 1345538268;
	}
	else if (fParam0 >= 8800f)
	{
		return 499324630;
	}
	else if (fParam0 >= 8000f)
	{
		return 616151496;
	}
	else if (fParam0 >= 7200f)
	{
		return 1472121948;
	}
	else if (fParam0 >= 6400f)
	{
		return -2145795486;
	}
	else if (fParam0 >= 5600f)
	{
		return -312702407;
	}
	else if (fParam0 >= 4800f)
	{
		return 276641649;
	}
	else if (fParam0 >= 4000f)
	{
		return -1886330704;
	}
	else if (fParam0 >= 3200f)
	{
		return 54118186;
	}
	else if (fParam0 >= 2400f)
	{
		return 487570185;
	}
	else if (fParam0 >= 1600f)
	{
		return -1699723306;
	}
	return 0;
}

void func_220(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_221(float fParam0)
{
	Var0 = { func_90(-406491492, 1380603511) };
	fVar2 = func_304(Var0);
	if (fParam0 > 0f && fParam0 > fVar2)
	{
		stat_id_set_float(&Var0, fParam0, true);
	}
}

int func_222(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Var4.f_1 = 10;
	return func_305(iParam0, &uVar0, iParam1, &Var4, iParam2, iParam3, iParam4, bParam5);
}

bool func_223(var uParam0, char* sParam1, bool bParam2, bool bParam3, vector3 vParam4, float fParam7, int iParam8)
{
	if (!func_306() || is_pause_menu_active())
	{
		*bParam2 = 1;
		return false;
	}
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = _databinding_add_data_container_from_path("", "MPCountdown");
		uParam0->f_2 = _databinding_add_data_string(uParam0->f_1, "Timer", _create_var_string(2, "FME_COUNTDOWN", sParam1));
		uParam0->f_3 = _databinding_add_data_bool(uParam0->f_1, "showTimer", true);
		if ((bParam3 && !func_179(vParam4)) && fParam7 > 0f)
		{
			animpostfx_play(func_149());
			_hide_hud_component(-2124237476);
			fParam7 = func_307(fParam7, 0f, 1000f);
			if (iParam8 == 0 || !_does_volume_exist(iParam8))
			{
				iVar0 = _create_volume_sphere(vParam4, 0f, 0f, 0f, fParam7, fParam7, fParam7);
				_0x735762e8d7573e42(1, iVar0, 5f);
				_delete_volume(iVar0);
			}
			else
			{
				_0x735762e8d7573e42(1, iParam8, 5f);
			}
		}
	}
	return true;
}

void func_224(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (_databinding_is_data_id_valid(uParam0->f_2))
	{
		if (bParam2 && iParam1 < 1)
		{
			_databinding_write_data_string(uParam0->f_2, _create_var_string(2, "GEIRON_RACE_GO"));
		}
		else
		{
			_databinding_write_data_string(uParam0->f_2, _create_var_string(2, "FME_COUNTDOWN", iParam1));
		}
		if (bParam3)
		{
			if (uParam0->f_5 < 0)
			{
				if (uParam0->f_4 >= 0)
				{
					if (!_0x84848e1c0fc67dbb(uParam0->f_4))
					{
						_0x3210bcb36af7621b(uParam0->f_4);
					}
					release_sound_id(uParam0->f_4);
					uParam0->f_4 = -1;
				}
				func_308(uParam0);
			}
		}
		else if (bParam4)
		{
			if (uParam0->f_4 < 0)
			{
				uParam0->f_4 = get_sound_id();
				_0xce5d0ffe83939af1(uParam0->f_4, func_255(), func_252(), 1);
				_0x503703ec1781b7d6(uParam0->f_4, "Time", to_float(iParam1));
			}
		}
	}
}

int func_225(var uParam0, bool bParam1)
{
	if (!func_306())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_309())
			{
				uParam0->f_3 = _uiflowblock_request(-119209833);
				func_145(1);
				func_310(uParam0, 1);
			}
			return 0;
		case 1:
			if (!func_311())
			{
				return 0;
			}
			func_310(uParam0, 2);
			break;
	}
	Global_1940144->f_110 = 1;
	return 1;
}

int func_226(var uParam0)
{
	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = _databinding_add_data_container_from_path("", "centralInfoDatastore");
		func_312(uParam0->f_5, &(uParam0->f_6), 0);
		func_312(uParam0->f_5, &(uParam0->f_7), 1);
		func_312(uParam0->f_5, &(uParam0->f_8), 37);
		func_313(uParam0->f_8, 1);
		return 0;
	}
	return 1;
}

int func_227(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (_uiflowblock_is_loaded(uParam0->f_3))
			{
				func_314(uParam0, 1);
			}
			break;
		case 1:
			*uParam0 = iParam1;
			if (*uParam0 != 0)
			{
				_uiflowblock_enter(uParam0->f_3, *uParam0);
				_uistatemachine_create(1546991729, uParam0->f_3);
			}
			func_314(uParam0, 2);
			break;
		case 2:
			if (iParam1 != *uParam0)
			{
				func_314(uParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (_uistatemachine_exists(1546991729) && _0xf7c180f57f85d0b8(1546991729))
			{
				_0x6b9fe4f0ba521a19(1546991729, 0);
				func_314(uParam0, 4);
			}
			else
			{
				func_314(uParam0, 0);
			}
			break;
		case 4:
			if (!_0x11e73195e735b25b(1546991729))
			{
				*bParam2 = 1;
				func_314(uParam0, 0);
			}
			break;
	}
	return 0;
}

void func_228(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	sVar0 = func_315(iParam1, bParam2, 3, 0, 0, 0);
	if (uParam0->f_13 != iParam1)
	{
		func_316(uParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (uParam0->f_14 != bVar1)
	{
		func_313(uParam0->f_7, bVar1);
		uParam0->f_14 = bVar1;
	}
	func_317(uParam0, iParam1, sParam4);
	func_318(uParam0, iParam1);
	uParam0->f_13 = iParam1;
}

var func_229(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_objective(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_230(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_319(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_137())
	{
		return func_319(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_319(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_231(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = iParam4;
	Var0.f_2 = iParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = sParam2;
	uVar20 = _0x02bcc0fe9eba3529(&Var0, &Var13, iParam7, iParam8, iParam9);
	return uVar20;
}

int func_232(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar20 = _0x860ddfe97cc94df0(&Var0, &Var13, iParam5);
	return uVar20;
}

int func_233(int iParam0)
{
	switch (get_player_team(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_234(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_65())
	{
		return 636925055;
	}
	return -963477619;
}

bool func_235(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_236(int iParam0, bool bParam1)
{
	iVar0 = floor(func_320(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = floor((*Global_1100469)[iVar3]->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901947->f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947->f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947->f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947->f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947->f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947->f_716.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_237(int iParam0, bool bParam1)
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

bool func_238(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_321(iParam0))
	{
		return true;
	}
	return !func_237(iParam0, 0);
}

bool func_239(int iParam0, bool bParam1)
{
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_322(iParam0))
	{
		return false;
	}
	if (func_321(iParam0))
	{
		return false;
	}
	if (func_323(iParam0))
	{
		return true;
	}
	return func_324(iParam0);
}

int func_240(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_174(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_241(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

char* func_242(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_243(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_174(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_244(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_174(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_174(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

bool func_245()
{
	return !Global_1572887->f_9;
}

bool func_246()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_247(int iParam0)
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

void func_248(struct<2> Param0, var uParam2)
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
	switch (func_60(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_325(func_240(Param0));
			iVar5 = func_326(iVar4);
			if (!func_327(iVar5, 0))
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

bool func_249(int iParam0)
{
	iVar0 = func_328(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_329(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_330(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_250(int iParam0)
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
		func_136(Global_1900736->f_1[0]);
		return 1;
	}
	func_136(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_172(iParam0, Global_1900736->f_66);
	return 1;
}

char* func_251()
{
	return "Match_End_Timer";
}

char* func_252()
{
	return "RDRO_Countdown_Sounds";
}

char* func_253()
{
	return "Round_End_Timer";
}

char* func_254()
{
	return "10S";
}

char* func_255()
{
	return "Out_Of_Bounds";
}

char* func_256()
{
	return "321_Countdown";
}

char* func_257()
{
	return "HUD_MP_FREE_MODE";
}

char* func_258()
{
	return "target_spawn";
}

char* func_259()
{
	return "MP005_OBHELT_sounds";
}

void func_260(var uParam0)
{
	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

void func_261(int iParam0)
{
	if (!func_280(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

bool func_262(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_263(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

int func_264(int iParam0)
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

int func_265(int iParam0)
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

int func_266(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_331(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_243(Param0);
	Var0.f_3 = iParam3;
	func_332(&Var0, bParam2, iParam4);
	return 1;
}

void func_267(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

void func_268(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_269(int iParam0)
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

bool func_270(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_333(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_271(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_334(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_335(iVar0);
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
			uParam2->f_5 = func_336(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_337(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_338(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_339(iVar0);
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

void func_272(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_340(uParam0, 1);
	func_341(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_273(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return 0;
	}
	return 1;
}

int func_274()
{
	return Global_1301323->f_150;
}

bool func_275(int iParam0)
{
	return (Global_1301323->f_288.f_2 && iParam0) != 0;
}

int func_276()
{
	return Global_1301323->f_288;
}

bool func_277()
{
	iVar0 = func_342();
	if (!_does_thread_exist(iVar0))
	{
		return false;
	}
	return is_thread_active(iVar0, false);
}

void func_278(int iParam0)
{
	Global_1301323->f_288 = iParam0;
}

void func_279(int iParam0)
{
	Global_1301323->f_288.f_1 = iParam0;
}

bool func_280(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_281()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

void func_282(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fParam5 = func_343(vParam1, fParam5);
	fVar0 = func_344(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
		set_particle_fx_looped_alpha(*uParam0, fVar0);
	}
}

void func_283(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fVar0 = (IntToFloat((get_frame_count() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		func_176(&(uParam0->f_1), 16);
		func_282(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_343(vParam1, fParam5);
		fVar1 = func_344(fParam5, iParam4);
		fVar3 = func_345(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_345(0f, fVar1, fVar0);
	}
	_0x9ddc222d85d5af2a(*uParam0, fVar3);
	set_particle_fx_looped_alpha(*uParam0, fVar2);
}

float func_284(float fParam0)
{
	fVar0 = func_346(fParam0);
	return fVar0;
}

float func_285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
			return 300f;
		case 2:
			return 1000f;
		default:
			break;
	}
	return 300f;
}

float func_286(float fParam0)
{
	fVar0 = func_346(fParam0);
	return fVar0;
}

float func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 25f;
		case 1:
			return 40f;
		case 3:
			return 200f;
		case 4:
			return 180f;
		case 2:
			return 150f;
		default:
			break;
	}
	return 128f;
}

float func_288(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1f;
		case 3:
			return 0.8f;
		case 4:
			return 0.5f;
		case 0:
			return 0.6f;
		case 2:
			return 0.9f;
		default:
			break;
	}
	return 1f;
}

float func_289(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_347(0) };
	vVar3 = { func_348(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

int func_290(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (_0x8f4f050054005c27(&(Global_1146212->f_2166), iParam0))
	{
		return 1;
	}
	if (Global_1146212->f_2165 >= 21)
	{
		return 0;
	}
	Global_1146212->f_2143[Global_1146212->f_2165] = iParam0;
	Global_1146212->f_2165++;
	return 1;
}

void func_291(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_292(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_293(struct<29> Param0, var uParam29, int iParam30)
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

void func_294(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_295(int iParam0)
{
	return _0xffec4b0a1a3ed515(iParam0, -1) != player_ped_id();
}

void func_296(int iParam0, int iParam1)
{
	func_211(&(iParam0->f_1243), iParam1);
}

var func_297(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_298(var uParam0, int iParam1)
{
	uParam0->f_211[iParam1]->f_14 = 255;
	uParam0->f_211[iParam1]->f_5 = -1f;
	uParam0->f_211[iParam1]->f_1 = -1f;
	uParam0->f_211[iParam1]->f_2 = -1f;
}

void func_299(var uParam0)
{
	uParam0->f_949 = 1;
}

void func_300(var uParam0)
{
	uParam0->f_948 = 1;
}

int func_301(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (uParam1->f_11.f_2 == 0)
	{
		uParam1->f_950 = _should_use_metric_weight();
		if (!func_159(iParam2, 8))
		{
			bVar0 = func_159(iParam2, 128);
			func_349(uParam0, uParam1, iParam2, bVar0, iParam3, iParam4, iParam5, iParam6);
		}
		if (!func_159(iParam2, 4))
		{
			func_350(uParam1, iParam2, iParam7);
		}
	}
	return 1;
}

void func_302(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = func_159(iParam2, 8);
	bVar1 = func_159(iParam2, 128);
	bVar2 = func_159(iParam2, 1024);
	bVar3 = func_159(iParam2, 4096);
	bVar4 = func_159(iParam2, 8192);
	bVar5 = func_159(iParam2, 256);
	bVar6 = iParam7 > 1;
	iVar21 = 0;
	while (iVar21 < 8)
	{
		iVar12[iVar21] = iVar21;
		iVar21++;
	}
	iVar22 = player_id();
	if (bVar3)
	{
		if (uParam0->f_950 != _should_use_metric_weight())
		{
			func_300(uParam0);
			func_299(uParam0);
			uParam0->f_950 = _should_use_metric_weight();
		}
	}
	else if (bVar4)
	{
		if (uParam0->f_950 != _should_use_metric_measurements_2())
		{
			func_300(uParam0);
			func_299(uParam0);
			uParam0->f_950 = _should_use_metric_measurements_2();
		}
	}
	if (uParam0->f_949 || uParam0->f_948)
	{
		iVar11 = 0;
		while (iVar11 <= 31)
		{
			if (uParam0->f_211[iVar11]->f_14 != 255 && network_is_player_active(uParam0->f_211[iVar11]->f_14))
			{
				if (bVar6)
				{
					iVar9 = &uParam0->f_211[iVar11];
					if (iVar9 == get_player_team(iVar22))
					{
						fVar7 = uParam1[iVar9];
					}
					else if (uParam1[iVar9] > fVar8)
					{
						fVar8 = uParam1[iVar9];
					}
				}
				else if (uParam0->f_211[iVar11]->f_14 == player_id())
				{
					fVar7 = uParam0->f_211[iVar11]->f_5;
				}
				else if (!bVar10)
				{
					fVar8 = uParam0->f_211[iVar11]->f_5;
					bVar10 = true;
				}
				StringCopy(&(uParam0->f_211[iVar11]->f_14.f_1), get_player_name(uParam0->f_211[iVar11]->f_14), 64);
			}
			iVar11++;
		}
		if (!bVar0)
		{
			func_351(uParam0, iParam2, fVar7, fVar8, bVar1, bVar2, bVar3, iParam3, iParam4, iParam5, iParam6, uParam0->f_949);
		}
		if (uParam0->f_948)
		{
			iVar24 = 0;
			while (iVar24 <= 31)
			{
				if (uParam0->f_211[iVar24]->f_14 == player_id())
				{
					iVar23 = iVar24;
				}
				else
				{
					iVar24++;
				}
			}
			func_352(&(uParam0->f_11), &(uParam0->f_211), get_player_team(iVar22), bVar6, &iVar12, 0, iVar23);
			uParam0->f_948 = 0;
		}
	}
	if (bVar5)
	{
		set_bit(&(uParam0->f_11.f_158), 18);
	}
	if (!func_159(iParam2, 4))
	{
		func_353(&(uParam0->f_11), &(uParam0->f_211), &iVar22, uParam0->f_949, &iVar12, bVar6, 0, 0);
		uParam0->f_949 = 0;
	}
}

void func_303(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_354() - fParam1);
	func_340(uParam0, 1);
	func_341(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_304(var uParam0, var uParam1)
{
	stat_id_get_float(&uParam0, &uVar0);
	return uVar0;
}

int func_305(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(player_id())) && _0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())));
		bParam7 = bVar0;
	}
	_0xc08aff658b2e51da(&iVar1);
	if (iVar1 != 0)
	{
		func_220(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!_0x64a36ba85ce01a81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!_0x7a8e8df782b47eb0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_355(uParam1, iParam0, Var3);
	return 1;
}

bool func_306()
{
	return true;
}

float func_307(float fParam0, float fParam1, float fParam2)
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

void func_308(var uParam0)
{
	if (uParam0->f_5 < 0)
	{
		uParam0->f_5 = get_sound_id();
		_0xce5d0ffe83939af1(uParam0->f_5, func_256(), func_257(), 1);
	}
}

bool func_309()
{
	return (!&Global_1903133 && absi((get_frame_count() - Global_1903133->f_2)) >= 5);
}

void func_310(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

bool func_311()
{
	iVar0 = 1;
	if ((((((!_0xe368e8422c860ba7(func_251(), func_252(), -2) || !_0xe368e8422c860ba7(func_253(), func_252(), -2)) || !_0xe368e8422c860ba7(func_254(), func_252(), -2)) || !_0xe368e8422c860ba7(func_356(), func_252(), -2)) || !_0xe368e8422c860ba7(func_255(), func_252(), -2)) || !_0xe368e8422c860ba7(func_256(), func_257(), -2)) || !_0xe368e8422c860ba7(func_258(), func_259(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_312(var uParam0, var uParam1, int iParam2)
{
	switch (func_357(iParam2))
	{
		case 0:
			func_358(uParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_359(uParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_360(uParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_361(uParam0, uParam1, iParam2, -1082130432);
			break;
		case 4:
			func_362(uParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_313(var uParam0, bool bParam1)
{
	_databinding_write_data_bool(uParam0, bParam1);
}

void func_314(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

char* func_315(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = ceil(fVar4);
	}
	else
	{
		iVar5 = floor(fVar4);
	}
	iVar6 = func_363((iVar5 / 60), 0, 180);
	iVar7 = func_363((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = get_length_of_literal_string(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, _0xd8402b858f4ddd88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return _0xd8402b858f4ddd88(&cVar0, get_length_of_literal_string(&cVar0));
}

void func_316(var uParam0, char[4] cParam1)
{
	_databinding_write_data_string(uParam0, cParam1);
}

void func_317(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 10000)
	{
		if ((uParam0->f_13 > iParam1 && uParam0->f_13 > 10000) && uParam0->f_11 < 0)
		{
			uParam0->f_11 = get_sound_id();
			if (is_string_null_or_empty(sParam2) || are_strings_equal(sParam2, func_254()))
			{
				_0xce5d0ffe83939af1(uParam0->f_11, func_254(), func_252(), 1);
			}
			else
			{
				_0xce5d0ffe83939af1(uParam0->f_11, sParam2, func_252(), 1);
				_0x9821b68cd3e05f2b("Time", 10f, sParam2, func_252());
			}
		}
	}
	else
	{
		func_141(uParam0);
	}
}

void func_318(var uParam0, int iParam1)
{
	if (iParam1 <= 0 && uParam0->f_12 < 0)
	{
		uParam0->f_12 = get_sound_id();
		_0xce5d0ffe83939af1(uParam0->f_12, func_356(), func_252(), 1);
	}
}

bool func_319(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

float func_320(int iParam0, bool bParam1)
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

bool func_321(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_322(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_323(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_324(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_364(iParam0);
		return false;
	}
	if (func_323(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_365(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

int func_325(int iParam0)
{
	iVar0 = -1;
	if (func_366(&Var1, iParam0))
	{
		iVar0 = ((func_367() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_326(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_327(int iParam0, int iParam1)
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

int func_328(int iParam0, int iParam1)
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

bool func_329(int iParam0)
{
	iVar0 = func_368(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_330(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

int func_331(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_62((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_332(var uParam0, bool bParam1, int iParam2)
{
	func_369(uParam0, iParam2);
	if (Global_1196205->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_370(func_331(uParam0->f_1));
	}
	else
	{
		func_371();
	}
}

int func_333(int iParam0)
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

int func_334(int iParam0, var uParam1)
{
	if (func_372(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_335(int iParam0)
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

int func_336(int iParam0)
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

int func_337(int iParam0)
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

int func_338(int iParam0)
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

int func_339(int iParam0)
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

void func_340(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_341(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_342()
{
	return Global_1301323->f_150.f_4;
}

float func_343(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return get_distance_between_coords(Global_35, vParam0, true);
}

float func_344(float fParam0, int iParam1)
{
	fVar0 = (2f * sin((180f * (fParam0 / func_285(iParam1)))));
	if (fVar0 < 0f)
	{
		return 0f;
	}
	else if (fVar0 > 1f)
	{
		return 1f;
	}
	return fVar0;
}

float func_345(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_346(float fParam0)
{
	if (fParam0 < 250f)
	{
		if (fParam0 < 50f)
		{
			fVar0 = 0.25f;
		}
		else if (fParam0 < 100f)
		{
			fVar0 = 0.5f;
		}
		else if (fParam0 < 150f)
		{
			fVar0 = 1f;
		}
		else if (fParam0 < 200f)
		{
			fVar0 = 1.5f;
		}
		else if (fParam0 < 250f)
		{
			fVar0 = 2f;
		}
	}
	else if (fParam0 < 500f)
	{
		if (fParam0 < 300f)
		{
			fVar0 = 2.5f;
		}
		else if (fParam0 < 350f)
		{
			fVar0 = 3f;
		}
		else if (fParam0 < 400f)
		{
			fVar0 = 3.5f;
		}
		else if (fParam0 < 450f)
		{
			fVar0 = 4f;
		}
		else if (fParam0 < 500f)
		{
			fVar0 = 4.5f;
		}
	}
	else if (fParam0 < 750f)
	{
		if (fParam0 < 550f)
		{
			fVar0 = 5f;
		}
		else if (fParam0 < 600f)
		{
			fVar0 = 5.5f;
		}
		else if (fParam0 < 650f)
		{
			fVar0 = 6f;
		}
		else if (fParam0 < 700f)
		{
			fVar0 = 6.5f;
		}
		else if (fParam0 < 750f)
		{
			fVar0 = 7f;
		}
	}
	else if (fParam0 < 1000f)
	{
		if (fParam0 < 800f)
		{
			fVar0 = 7.5f;
		}
		else if (fParam0 < 850f)
		{
			fVar0 = 8f;
		}
		else if (fParam0 < 900f)
		{
			fVar0 = 8.5f;
		}
		else if (fParam0 < 950f)
		{
			fVar0 = 9f;
		}
		else if (fParam0 < 1000f)
		{
			fVar0 = 9.5f;
		}
	}
	else
	{
		fVar0 = 10f;
	}
	return fVar0;
}

Vector3 func_347(int iParam0)
{
	if (!does_cam_exist(iParam0))
	{
		vVar0 = { get_gameplay_cam_rot(2) };
	}
	else
	{
		vVar0 = { get_cam_rot(iParam0, 2) };
	}
	fVar3 = sin(vVar0.z);
	fVar4 = cos(vVar0.z);
	fVar5 = sin(vVar0.x);
	fVar6 = cos(vVar0.x);
	return func_348((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_348(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

int func_349(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (uParam1[0] == 0)
	{
		uVar0 = _databinding_add_data_container(uParam0->f_5, "score");
		func_359(uVar0, (*uParam1)[0], 2, "0");
		func_359(uVar0, (*uParam1)[1], 8, "0");
		bVar1 = !func_159(iParam2, 16);
		bVar2 = !func_159(iParam2, 32);
		func_362(uVar0, &((*uParam1)[0]->f_3), 5, bVar1, 0);
		func_358(uVar0, &((*uParam1)[0]->f_1), 3, iParam4);
		func_358(uVar0, &((*uParam1)[0]->f_2), 4, iParam6);
		func_362(uVar0, &((*uParam1)[1]->f_3), 11, bVar2, 0);
		func_358(uVar0, &((*uParam1)[1]->f_1), 9, iParam5);
		func_358(uVar0, &((*uParam1)[1]->f_2), 10, iParam7);
	}
	return 1;
}

int func_350(var uParam0, int iParam1, int iParam2)
{
	if (func_159(iParam1, 262144))
	{
		set_bit(&(uParam0->f_11.f_160), 6);
	}
	else if (func_159(iParam1, 65536))
	{
		set_bit(&(uParam0->f_11.f_160), 3);
	}
	else if (func_159(iParam1, 131072))
	{
		set_bit(&(uParam0->f_11.f_160), 4);
		set_bit(&(uParam0->f_11.f_159), 18);
	}
	else if (func_159(iParam1, 1048576))
	{
		set_bit(&(uParam0->f_11.f_160), 8);
	}
	else
	{
		set_bit(&(uParam0->f_11.f_159), 6);
	}
	if (func_159(iParam1, 64))
	{
		set_bit(&(uParam0->f_11.f_159), 0);
	}
	if (func_159(iParam1, 2048))
	{
		set_bit(&(uParam0->f_11.f_159), 7);
	}
	if (func_159(iParam1, 1024))
	{
		uParam0->f_11.f_151 = 2;
		set_bit(&(uParam0->f_11.f_159), 31);
	}
	if (func_159(iParam1, 4096))
	{
		set_bit(&(uParam0->f_11.f_159), 9);
	}
	if (func_159(iParam1, 16384))
	{
		set_bit(&(uParam0->f_11.f_159), 17);
		set_bit(&(uParam0->f_11.f_159), 18);
	}
	if (func_159(iParam1, 4194304))
	{
		set_bit(&(uParam0->f_11.f_160), 11);
	}
	if (func_159(iParam1, 8388608))
	{
		set_bit(&(uParam0->f_11.f_160), 12);
	}
	if (func_159(iParam1, 8192))
	{
		set_bit(&(uParam0->f_11.f_159), 10);
		set_bit(&(uParam0->f_11.f_159), 17);
		set_bit(&(uParam0->f_11.f_159), 18);
	}
	if (func_159(iParam1, 32768))
	{
		set_bit(&(uParam0->f_11.f_159), 22);
		set_bit(&(uParam0->f_11.f_159), 23);
	}
	if (func_159(iParam1, 524288))
	{
		set_bit(&(uParam0->f_11.f_160), 7);
	}
	if (func_159(iParam1, 2097152))
	{
		set_bit(&(uParam0->f_11.f_159), 17);
		set_bit(&(uParam0->f_11.f_160), 9);
	}
	if (func_159(iParam1, 16777216))
	{
		set_bit(&(uParam0->f_11.f_159), 17);
		set_bit(&(uParam0->f_11.f_159), 0);
		set_bit(&(uParam0->f_11.f_160), 13);
	}
	func_373(&(uParam0->f_11));
	func_299(uParam0);
	if (iParam2 > 1)
	{
		uParam0->f_11.f_150 = iParam2;
	}
	if (!is_string_null_or_empty(&(uParam0->f_951)))
	{
		func_374(&(uParam0->f_11), &(uParam0->f_951));
	}
	return 1;
}

void func_351(var uParam0, int iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	if ((*uParam0)[0]->f_4 != fParam2 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar0, func_375(fParam2), 32);
			func_316(uParam0[0], &cVar0);
		}
		else if (bParam4)
		{
			StringCopy(&cVar4, func_376(fParam2), 32);
			func_316(uParam0[0], &cVar4);
		}
		else if (bParam5)
		{
			StringCopy(&cVar8, _0x2b6846401d68e563(fParam2, 2), 32);
			func_316(uParam0[0], &cVar8);
		}
		else
		{
			_int_to_string(floor(fParam2), "%i", &uVar12);
			func_316(uParam0[0], &uVar12);
		}
		(*uParam0)[0]->f_4 = fParam2;
	}
	if ((*uParam0)[1]->f_4 != fParam3 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar16, func_375(fParam3), 32);
			func_316(uParam0[1], &cVar16);
		}
		else if (bParam4)
		{
			StringCopy(&cVar20, func_376(fParam3), 32);
			func_316(uParam0[1], &cVar20);
		}
		else if (bParam5)
		{
			StringCopy(&cVar24, _0x2b6846401d68e563(fParam3, 2), 32);
			func_316(uParam0[1], &cVar24);
		}
		else
		{
			_int_to_string(floor(fParam3), "%i", &uVar28);
			func_316(uParam0[1], &uVar28);
		}
		(*uParam0)[1]->f_4 = fParam3;
	}
	bVar32 = !func_159(iParam1, 16);
	bVar33 = !func_159(iParam1, 32);
	func_377((*uParam0)[0]->f_1, iParam7);
	func_377((*uParam0)[0]->f_2, iParam9);
	func_313((*uParam0)[0]->f_3, bVar32);
	func_377((*uParam0)[1]->f_1, iParam8);
	func_377((*uParam0)[1]->f_2, iParam10);
	func_313((*uParam0)[1]->f_3, bVar33);
}

void func_352(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	func_378(uParam0, uParam1, iParam4, bParam3, 0, bParam5, 0, iParam6, iParam2);
	func_379(uParam0, uParam1, bParam3, iParam2, iParam4, is_bit_set(uParam0->f_159, 5), iParam6);
}

void func_353(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	iVar0 = -1;
	if (!is_bit_set(uParam0->f_159, 1))
	{
		iVar2 = get_player_team(*iParam2);
		iVar3 = func_380();
		bVar4 = func_381();
		bVar5 = func_382();
		bVar6 = is_bit_set(uParam0->f_158, 18);
		if (uParam0->f_152 != Global_1940144->f_111)
		{
			if (uParam0->f_152)
			{
				bVar1 = true;
			}
			uParam0->f_152 = Global_1940144->f_111;
			bParam3 = true;
		}
		func_383(uParam0, uParam1, iParam2, &iVar0, iVar2);
		if (!is_bit_set(uParam0->f_158, 1))
		{
			if (!bVar5 && !bParam7)
			{
				if ((iVar3 != -1 || bVar4) || bVar6)
				{
					if (!is_bit_set(uParam0->f_158, 0))
					{
						func_373(uParam0);
						func_384(uParam0, uParam1, iParam4, 0, 1, bParam5, iVar2, -1, bParam6, 0, iVar0);
						set_bit(&(uParam0->f_158), 0);
					}
					else
					{
						func_352(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
					}
					clear_bit(&(uParam0->f_158), 13);
					set_bit(&(uParam0->f_158), 1);
				}
			}
		}
		else if ((((iVar3 == -1 && !bVar4) && !bVar6) || bVar5) || bParam7)
		{
			if (!bVar1)
			{
				set_bit(&(uParam0->f_158), 13);
			}
			enable_control_action(0, -1450761377, true);
			enable_control_action(0, -771458680, true);
			enable_control_action(1, -1450761377, true);
			enable_control_action(1, -771458680, true);
			enable_control_action(0, 1033498310, true);
			enable_control_action(0, -1074497799, true);
			enable_control_action(1, 1033498310, true);
			enable_control_action(1, -1074497799, true);
			clear_bit(&(uParam0->f_158), 1);
			if (bVar5)
			{
				Global_1940144->f_5 = 0;
			}
		}
		else
		{
			if (!Global_1940144->f_111)
			{
				disable_control_action(0, -1450761377, false);
				disable_control_action(0, -771458680, false);
				disable_control_action(1, -1450761377, false);
				disable_control_action(1, -771458680, false);
				disable_control_action(0, 1033498310, false);
				disable_control_action(0, -1074497799, false);
				disable_control_action(1, 1033498310, false);
				disable_control_action(1, -1074497799, false);
			}
			if (bParam3)
			{
				func_352(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
			}
			else if (!Global_1940144->f_111)
			{
				func_385(uParam0, uParam1);
				func_386(uParam0, uParam1, 0);
			}
		}
		if (!Global_1940144->f_111)
		{
			if ((is_bit_set(uParam0->f_158, 1) || is_bit_set(uParam0->f_158, 13)) || uParam0->f_199 < 2)
			{
				func_387(uParam0, 1);
			}
			func_388(uParam0);
		}
	}
}

float func_354()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_355(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_389(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2011 < 20)
	{
		Global_1293346->f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2011.f_1[iVar0] = { *(Global_1293346->f_2011.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1293346->f_2011.f_1[(Global_1293346->f_2011 - 1)]) = { Var1 };
}

char* func_356()
{
	return "countdown_final_thud";
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 3;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 16:
			return 1;
		case 14:
			return 4;
		case 15:
			return 4;
		case 17:
			return 3;
		case 18:
			return 0;
		case 19:
			return 4;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 4;
		case 27:
			return 4;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 0;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 1;
		case 37:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_358(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_390(iParam2);
	}
	*uParam1 = _databinding_add_data_hash(uParam0, func_391(iParam2), iParam3);
}

void func_359(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (is_string_null(sParam3))
	{
		sParam3 = func_392(iParam2);
	}
	*uParam1 = _databinding_add_data_string(uParam0, func_391(iParam2), sParam3);
}

void func_360(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_393(iParam2);
	}
	*uParam1 = _databinding_add_data_int(uParam0, func_391(iParam2), iParam3);
}

void func_361(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_394(iParam2);
	}
	*uParam1 = _databinding_add_data_float(uParam0, func_391(iParam2), fParam3);
}

void func_362(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!bParam4)
	{
		bParam3 = func_395(iParam2);
	}
	*uParam1 = _databinding_add_data_bool(uParam0, func_391(iParam2), bParam3);
}

int func_363(int iParam0, int iParam1, int iParam2)
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

void func_364(int iParam0)
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
	func_396(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_365(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_397(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_364(iParam0);
			return;
		}
		_0x51951de06c0d1c40(iParam0, 2);
		Global_1071686->f_21416.f_1[iVar0] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = int_to_playerindex(iVar2);
			if (iVar2 != &Global_1296859 && network_is_player_active(iVar3))
			{
				if (_0x81fb74c83c2ed69f(iVar3))
				{
					if (bParam3)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_0x3f59fe6f37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_365(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_398(&Var6, uVar4);
		}
	}
}

bool func_366(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_367()
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

int func_368(int iParam0)
{
	return func_399(iParam0) + 30;
}

void func_369(var uParam0, int iParam1)
{
	if (Global_1196205->f_129 >= 32)
	{
		Global_1196205->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1196205->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*(*Global_1196205)[Global_1196205->f_129] = { *uParam0 };
		Global_1196205->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1196205->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *(*Global_1196205)[iVar1] };
		*(*Global_1196205)[iVar1] = { *((*Global_1196205)[iVar1 + 1]) };
		*((*Global_1196205)[iVar1 + 1]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*(*Global_1196205)[iParam1] = { *uParam0 };
	Global_1196205->f_129++;
}

void func_370(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205->f_129)
	{
		return;
	}
	Global_1196205->f_130 = iParam0;
	Global_1196205->f_131 = Global_1196205[iParam0];
}

void func_371()
{
	if (Global_1196205->f_131 == 0)
	{
		return;
	}
	Global_1196205->f_130 = func_400(Global_1196205->f_131);
	if (Global_1196205->f_130 < 0)
	{
		Global_1196205->f_131 = 0;
	}
}

bool func_372(int iParam0, var uParam1, var uParam2)
{
	if (func_401(iParam0, uParam1, &uVar0))
	{
		func_402(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_373(var uParam0)
{
	*uParam0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	uParam0->f_1 = _databinding_add_data_container(*uParam0, "Title");
	uParam0->f_2 = _databinding_add_ui_item_list(*uParam0, "LeaderboardList");
	uParam0->f_142 = _databinding_add_ui_item_list(*uParam0, "LeaderboardList");
}

void func_374(var uParam0, char* sParam1)
{
	if (!is_bit_set(uParam0->f_158, 7))
	{
		set_bit(&(uParam0->f_158), 7);
		_databinding_add_data_string(uParam0->f_1, "Heading", sParam1);
	}
}

char* func_375(char* sParam0)
{
	return _create_var_string(6, "FM_WEIGHT", sParam0);
}

char* func_376(float fParam0)
{
	return _create_var_string(2, "FM_PERCENT", floor((fParam0 * 100f)));
}

void func_377(var uParam0, int iParam1)
{
	_databinding_write_data_hash_string(uParam0, iParam1);
}

void func_378(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	if (Global_1940144->f_111)
	{
		func_403(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_385(uParam0, uParam1);
		iVar7 = player_id();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_404(&((*uParam1)[iVar0]->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_405(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", func_406(uParam1, iVar0));
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar8 = iVar7 == (*uParam1)[iVar0]->f_14;
				iVar9 = func_407(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_408(uParam0, uParam1, iVar0, bParam3, iVar9);
					}
				}
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Gamertag", &((*uParam1)[iVar0]->f_14.f_1));
				_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "GamertagColor", iVar9);
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "CrewTag", func_409());
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Rank", func_410((*uParam1)[iVar0]->f_14));
				if (!bParam4)
				{
					if (func_411())
					{
						if (func_412((*uParam1)[iVar0]->f_14))
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", true);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", func_413((*uParam1)[iVar0]->f_11));
				}
				else if (bParam5)
				{
					if (func_414(uParam0->f_159))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
					else if (func_415(uParam0->f_159))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
					else
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
				}
				if (is_bit_set(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar2 = round(func_416((*uParam1)[iVar0], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = round(func_417((*uParam1)[iVar0], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_418(iVar2))
					{
						iVar11 = uParam0->f_159;
						if ((*uParam1)[iVar0]->f_1 == 8.94E+07f)
						{
							clear_bit(&iVar11, 12);
						}
						sVar5 = func_419(iVar2, iVar11, 0);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar10, sVar5);
				}
				else if (!is_bit_set(uParam0->f_159, 0) && !is_bit_set(uParam0->f_159, 17))
				{
					if (!is_bit_set(uParam0->f_159, 18))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563(func_417((*uParam1)[iVar0], uParam0->f_159), func_420(uParam0, 1)));
					}
				}
				if (is_bit_set(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = round(func_421((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = round(func_416((*uParam1)[iVar0], uParam0->f_159));
					}
					if (func_418(iVar3))
					{
						sVar6 = func_315(iVar3, 1, 2, 0, 0, 0);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar12, sVar6);
				}
				else if (is_bit_set(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_421((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_416((*uParam1)[iVar0], uParam0->f_159);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar13, _0x2b6846401d68e563(fVar14, 0));
				}
				else if ((!is_bit_set(uParam0->f_159, 3) && !func_415(uParam0->f_159)) && !func_422(uParam0->f_159))
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563(func_416((*uParam1)[iVar0], uParam0->f_159), func_420(uParam0, 2)));
				}
				if (!is_bit_set(uParam0->f_159, 3))
				{
					if (is_bit_set(uParam0->f_160, 0))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", "-");
					}
					else if (is_bit_set(uParam0->f_159, 9))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", func_375(func_421((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160)));
					}
					else if (is_bit_set(uParam0->f_159, 10))
					{
						fVar4 = func_421((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", func_315(floor(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _create_var_string(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (is_bit_set(uParam0->f_159, 21))
					{
						iVar2 = round(func_421((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_419(iVar2, uParam0->f_159, 0);
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", sVar5);
					}
					else
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _0x2b6846401d68e563(func_421((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160), func_420(uParam0, 3)));
					}
				}
				_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && (*uParam1)[iVar0]->f_13)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", iVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_379(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	iVar13 = 0;
	iVar14 = 32;
	bVar16 = is_bit_set(uParam0->f_159, 6);
	if (Global_1940144->f_111)
	{
		iVar3 = _databinding_get_array_count(uParam0->f_142);
		if (is_bit_set(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			func_423(iParam4, &uVar4, uParam0->f_150, bVar16);
			func_424(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = &uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_425(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_426(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_404(&((*uParam1)[iVar2]->f_14)) && iVar0 < 5)
					{
						func_425(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (_databinding_get_array_count(uParam0->f_142) - 1);
		if (iVar0 <= iVar3)
		{
			iVar18 = iVar3;
			while (iVar18 >= iVar0)
			{
				_0x6318fb3be37e11b3(uParam0->f_142, iVar18);
				iVar18 = (iVar18 + -1);
			}
		}
		return;
	}
	iVar3 = _databinding_get_array_count(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		func_423(iParam4, &uVar4, uParam0->f_150, bVar16);
		func_427(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = &uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_425(uParam0->f_2, &(uParam0->f_3[iVar19]), "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == uParam1[iVar2] && func_404(&((*uParam1)[iVar2]->f_14)))
						{
							func_425(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
							iVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (func_404(&((*uParam1)[iVar2]->f_14)))
			{
				func_425(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || iVar0 > 0)
	{
		if (iVar0 < 3)
		{
			iVar20 = iVar0;
			while (iVar20 <= 3)
			{
				func_425(uParam0->f_2, &(uParam0->f_12[iVar20]), "LeaderboardListItemBlank", iVar3, iVar0);
				iVar0++;
				iVar20++;
			}
		}
	}
	iVar3 = (_databinding_get_array_count(uParam0->f_2) - 1);
	if (iVar0 <= iVar3)
	{
		iVar21 = iVar3;
		while (iVar21 >= iVar0)
		{
			_0x6318fb3be37e11b3(uParam0->f_2, iVar21);
			iVar21 = (iVar21 + -1);
		}
	}
}

int func_380()
{
	if (Global_1940144->f_20)
	{
		if (Global_1940144->f_5 == 1)
		{
			return 1;
		}
		if (Global_1940144->f_5 == 2)
		{
			return 2;
		}
	}
	return -1;
}

bool func_381()
{
	if (Global_1102219->f_26.f_3440.f_4 && !func_411())
	{
		Global_1102219->f_26.f_3440.f_4 = 0;
	}
	return Global_1102219->f_26.f_3440.f_4;
}

bool func_382()
{
	return (func_428(2) && func_429());
}

void func_383(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!is_bit_set(uParam0->f_158, 17))
	{
		if (is_bit_set(uParam0->f_159, 22))
		{
			Global_1940144->f_112 = 1;
		}
		else
		{
			Global_1940144->f_112 = 0;
		}
		set_bit(&(uParam0->f_158), 17);
	}
	if (Global_1940144->f_111)
	{
		if (is_bit_set(uParam0->f_159, 28))
		{
			iVar0 = 0;
			while (iVar0 <= (uParam0->f_150 - 1))
			{
				if (iVar0 == iParam4)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0]->f_14 == *iParam2)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_384(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_430(uParam0, uParam1, iParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_379(uParam0, uParam1, bParam5, iParam6, iParam2, is_bit_set(uParam0->f_159, 5), iParam10);
}

void func_385(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam1)[iVar0]->f_14 == 255)
		{
		}
		else if (func_404(&((*uParam1)[iVar0]->f_14)))
		{
			func_431(uParam0, &((*uParam1)[iVar0]->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_386(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam1)[iVar0]->f_14 == 255)
		{
		}
		else
		{
			func_405(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_387(var uParam0, bool bParam1)
{
	bVar0 = func_432(16);
	switch (uParam0->f_199)
	{
		case 0:
			func_144(1);
			func_433(&(uParam0->f_199), 1);
			break;
		case 1:
			_0xd9130842d7226045("MP_Leaderboard_Sounds", 1);
			func_433(&(uParam0->f_199), 2);
			break;
		case 2:
			iVar1 = _launch_app_by_hash_with_entry(595204529, func_434(bParam1));
			if (iVar1 == 0)
			{
				func_433(&(uParam0->f_199), 3);
			}
			else if (_is_app_running(595204529))
			{
				func_433(&(uParam0->f_199), 3);
			}
			break;
		case 3:
			if (_is_app_running(595204529))
			{
				if (!bVar0)
				{
					play_sound_frontend("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				_request_uiapp_transition_by_hash(595204529, func_435());
				func_433(&(uParam0->f_199), 4);
			}
			else if (func_436())
			{
				func_433(&(uParam0->f_199), 2);
			}
			break;
		case 4:
			if (is_bit_set(uParam0->f_158, 13))
			{
				if (_is_app_running(595204529))
				{
					if (!bVar0)
					{
						play_sound_frontend("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					_close_app_by_hash(595204529);
					func_433(&(uParam0->f_199), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				clear_bit(&(uParam0->f_158), 13);
				func_433(&(uParam0->f_199), 1);
			}
			else
			{
				func_433(&(uParam0->f_199), 6);
			}
			break;
		case 6:
			func_148(uParam0, bParam1);
			break;
	}
}

void func_388(var uParam0)
{
	func_437(&(uParam0->f_162));
	if ((is_bit_set(uParam0->f_158, 14) || is_bit_set(uParam0->f_158, 15)) || is_bit_set(uParam0->f_158, 16))
	{
		return;
	}
	func_438(&(uParam0->f_162), 0);
	set_bit(&(uParam0->f_158), 14);
}

bool func_389(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_439();
		case 4:
			return 109029619;
		case 9:
			return func_440();
		case 10:
			return 109029619;
		case 23:
			return 1672732465;
		case 22:
			return -1019997170;
		case 24:
			return -5208416;
		case 18:
			return 109029619;
		case 25:
			return func_440();
		case 30:
			return func_440();
		default:
			break;
	}
	return 0;
}

char* func_391(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "timerString";
		case 1:
			return "isTimerLow";
		case 2:
			return "leftScore";
		case 5:
			return "leftScoreVisible";
		case 3:
			return "leftScoreColor";
		case 4:
			return "leftScoreTextColor";
		case 8:
			return "rightScore";
		case 11:
			return "rightScoreVisible";
		case 9:
			return "rightScoreColor";
		case 10:
			return "rightScoreTextColor";
		case 14:
			return "visible";
		case 15:
			return "enabled";
		case 16:
			return "text";
		case 17:
			return "meterValue";
		case 18:
			return "meterColor";
		case 19:
			return "meterVisible";
		case 20:
			return "txn";
		case 21:
			return "txd";
		case 22:
			return "secondaryTxn";
		case 23:
			return "secondaryTxd";
			return "secondaryImgColor";
			return "imgColor";
			return "isIconBackgroundVisible";
			return "iconEnabled";
			return "overlayTxn";
			return "overlayTxd";
			return "overlayColor";
			return "overlayVisible";
			return "meterThirdsVisible";
			return "showAlternateIcons";
			return "showBlinkIcon";
			return "showPulse";
			return "countDownTimer";
			return "isVisible";
			return "";
		}

char* func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "00:00";
		case 2:
			return "0";
		case 8:
			return "0";
		case 16:
			return "";
		case 21:
			return "";
		case 20:
			return "";
		case 29:
			return "";
		case 28:
			return "";
		default:
			break;
	}
	return "";
}

int func_393(int iParam0)
{
	return 0;
}

float func_394(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0f;
		case 13:
			return 0f;
		case 17:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 19:
			return 0;
		case 26:
			return 0;
		case 27:
			return 1;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 37:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_396(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_397(int iParam0, int iParam1, int iParam2)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1071686->f_21416.f_1[iParam0]->f_2 = iParam2;
		}
		else
		{
			Global_1071686->f_21416.f_1[iParam0]->f_2 = Global_1296859->f_21;
		}
		Global_1071686->f_21416.f_1[iParam0]->f_1 = iParam1;
		return true;
	}
	else if (Global_1071686->f_21416.f_1[iParam0]->f_1 == iParam1)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = Global_1296859->f_21;
		return true;
	}
	return false;
}

void func_398(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_441(*uParam0);
}

int func_399(int iParam0)
{
	return iParam0 * 31;
}

int func_400(int iParam0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (Global_1196205[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_401(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_333(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_402(var uParam0, int iParam1, var uParam2)
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

void func_403(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	iVar5 = 0;
	iVar6 = 32;
	bVar7 = is_bit_set(uParam0->f_159, 3);
	bVar8 = is_bit_set(uParam0->f_159, 23);
	bVar9 = is_bit_set(uParam0->f_159, 24);
	bVar10 = is_bit_set(uParam0->f_159, 25);
	bVar11 = is_bit_set(uParam0->f_160, 10);
	bVar12 = is_bit_set(uParam0->f_159, 28);
	iVar13 = player_id();
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Position", "");
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Gamertag", "");
		_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar23 = is_bit_set(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = is_bit_set(uParam0->f_159, 5);
		if ((bVar10 || bVar8) && func_442() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = to_float(Global_1050975[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0] != -1 && uParam1[iVar0] < 8)
				{
					if (bVar9)
					{
						if ((*uParam1)[iVar0]->f_1 != -1f)
						{
							fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_1);
						}
					}
					else if (bVar8)
					{
						if ((*uParam1)[iVar0]->f_5 != -1f)
						{
							fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_5);
						}
					}
					else if (bVar11)
					{
						if ((*uParam1)[iVar0]->f_8 != -1f)
						{
							fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_8);
						}
					}
					else if ((*uParam1)[iVar0]->f_1 != -1f)
					{
						fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_423(iParam2, &uVar34, uParam0->f_150, bVar23);
		func_424(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = &uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						Var14 = { func_443(iVar43) };
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &Var14);
						iVar44 = func_444(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar44);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", _0x2b6846401d68e563(&(fVar25[iVar43]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_426(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_404(&((*uParam1)[iVar1]->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &((*uParam1)[iVar1]->f_14.f_1));
						bVar45 = iVar13 == (*uParam1)[iVar1]->f_14;
						iVar46 = func_407(uParam0, uParam1, iVar1, iVar13, bVar45);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (is_bit_set(uParam0->f_159, 26))
							{
								if (is_bit_set(uParam0->f_159, 0))
								{
									sVar47 = _0x2b6846401d68e563(func_421((*uParam1)[iVar1], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = _0x2b6846401d68e563(func_416((*uParam1)[iVar1], uParam0->f_159), 0);
								}
							}
							else if (is_bit_set(uParam0->f_159, 27))
							{
								iVar4 = round(func_417((*uParam1)[iVar1], uParam0->f_159));
								sVar47 = " ";
								if (func_418(iVar4))
								{
									iVar48 = uParam0->f_159;
									if ((*uParam1)[iVar1]->f_1 == 8.94E+07f)
									{
										clear_bit(&iVar48, 12);
									}
									sVar47 = func_419(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = _0x2b6846401d68e563(func_417((*uParam1)[iVar1], uParam0->f_159), func_420(uParam0, 1));
							}
						}
						else if (bVar9)
						{
							sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_1, 0);
						}
						else if (bVar8 || bVar10)
						{
							if (is_bit_set(uParam0->f_159, 9))
							{
								sVar47 = func_375((*uParam1)[iVar1]->f_5);
							}
							else
							{
								sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_5, 0);
							}
						}
						else if (bVar11)
						{
							sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_8, 0);
						}
						else
						{
							sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_1, 0);
						}
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", sVar47);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_404(var uParam0)
{
	if (*uParam0 != 255)
	{
		return true;
	}
	else if (Global_2883584 && !is_string_null_or_empty(&(uParam0->f_1)))
	{
		return true;
	}
	return false;
}

void func_405(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	iVar1 = player_id();
	bVar2 = iVar1 == (*uParam1)[iParam2]->f_14;
	iVar0 = func_407(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (network_is_player_active((*uParam1)[iParam2]->f_14) && _0x919af2d93e9aa89d((*uParam1)[iParam2]->f_14))
	{
		bVar3 = _0xef6f2a35faaf2ed7((*uParam1)[iParam2]->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
	}
	_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		_databinding_write_data_hash_string_from_parent(&(uParam0->f_12[iParam2]), "HeadsetIconColor", iVar0);
	}
	if (bVar3)
	{
		_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowBlip", false);
	}
	else
	{
		_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowBlip", true);
	}
}

int func_406(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam1 == iVar0)
		{
			return iVar1 + 1;
		}
		else if (uParam0[iParam1] == uParam0[iVar0] && func_404(&((*uParam0)[iVar0]->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

int func_407(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (is_bit_set(uParam0->f_159, 11))
	{
		iVar0 = func_445(uParam1[iParam2], get_player_team(iParam3), uParam0->f_150, is_bit_set(uParam0->f_159, 5), bParam4);
	}
	else if (is_bit_set(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			iVar0 = 109029619;
		}
		else
		{
			iVar0 = func_123((*uParam1)[iParam2]->f_14, 1, -1, 1);
		}
	}
	else
	{
		iVar0 = func_123((*uParam1)[iParam2]->f_14, 1, -1, 1);
	}
	return iVar0;
}

void func_408(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	switch ((*uParam1)[iParam2]->f_10)
	{
		case 1:
			_databinding_write_data_int_from_parent(&(uParam0->f_12[iParam2]), "SetOverlayImg", 1);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowOverlay", true);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowCross", false);
			break;
		case 2:
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowCross", true);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
		default:
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowCross", false);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		_databinding_write_data_hash_string_from_parent(&(uParam0->f_12[iParam2]), "CrossColor", iParam4);
	}
}

char* func_409()
{
	return "RSN";
}

char* func_410(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return _create_var_string(2, "NUMBER", Global_1145091[iParam0]);
}

bool func_411()
{
	if (Global_1102219->f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_446(2048))
	{
		return true;
	}
	if (func_447(1))
	{
		return true;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_412(int iParam0)
{
	iVar0 = network_get_player_index_from_ped(get_ped_index_from_entity_index(func_448()));
	return iParam0 == iVar0;
}

char* func_413(int iParam0)
{
	if (iParam0 != 0)
	{
		return _0xb112b9262ec29c20(1852874750, iParam0);
	}
	return "";
}

bool func_414(int iParam0)
{
	if ((func_415(iParam0) || func_422(iParam0)) || is_bit_set(iParam0, 18))
	{
		return false;
	}
	if (is_bit_set(iParam0, 0) || is_bit_set(iParam0, 17))
	{
		return true;
	}
	return false;
}

bool func_415(int iParam0)
{
	return (is_bit_set(iParam0, 0) && is_bit_set(iParam0, 17));
}

float func_416(var uParam0, int iParam1)
{
	if (func_449())
	{
		func_450(uParam0, 1);
	}
	else if (is_bit_set(iParam1, 3))
	{
		if (is_bit_set(iParam1, 0))
		{
			return uParam0->f_7;
		}
		else if (is_bit_set(iParam1, 4) || is_bit_set(iParam1, 15))
		{
			return uParam0->f_8;
		}
	}
	else if (func_414(iParam1) || is_bit_set(iParam1, 19))
	{
		return uParam0->f_1;
	}
	else if (is_bit_set(iParam1, 8))
	{
		return uParam0->f_6;
	}
	else if (is_bit_set(iParam1, 20))
	{
		return uParam0->f_6;
	}
	return uParam0->f_2;
}

float func_417(var uParam0, int iParam1)
{
	if (func_449())
	{
		return func_450(uParam0, 0);
	}
	else if (is_bit_set(iParam1, 3))
	{
		return uParam0->f_7;
	}
	else if (is_bit_set(iParam1, 19))
	{
		return uParam0->f_6;
	}
	return uParam0->f_1;
}

bool func_418(int iParam0)
{
	if ((iParam0 != 86400000 || iParam0 == 0) || iParam0 == round(-3f))
	{
		return true;
	}
	return false;
}

char* func_419(int iParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 1000000000 || iParam0 == 88400000) || iParam0 == 72800000) || iParam0 == 87400000) || iParam0 == round(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_315(iParam0, 1, 2, is_bit_set(iParam1, 12), 0, 0);
		}
	}
	else if ((is_bit_set(iParam1, 3) || is_bit_set(iParam1, 4)) || is_bit_set(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return _get_label_text("POS_LEAD");
		}
		else if (iParam0 == 88400000 || iParam0 == 72800000)
		{
			return _get_label_text("POS_DNF");
		}
		else if (iParam0 == 87400000)
		{
			return _get_label_text("POS_ELIM");
		}
		else if (iParam0 == round(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_315(iParam0, 1, 2, is_bit_set(iParam1, 12), 0, 0);
		}
	}
	if (is_bit_set(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 1000000000)
		{
			return "--:--:--";
		}
		else
		{
			return func_315(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_451(&cVar0);
}

int func_420(var uParam0, int iParam1)
{
	if (iParam1 == 1 && is_bit_set(uParam0->f_159, 29))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 2 && is_bit_set(uParam0->f_159, 30))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 3 && is_bit_set(uParam0->f_159, 31))
	{
		return uParam0->f_151;
	}
	return 0;
}

char* func_421(var uParam0, int iParam1, int iParam2)
{
	if (func_449())
	{
		func_450(uParam0, 2);
	}
	else if (is_bit_set(iParam1, 0) && !is_bit_set(iParam1, 17))
	{
		if (is_bit_set(iParam1, 3) && (is_bit_set(iParam1, 4) || is_bit_set(iParam1, 15)))
		{
			return uParam0->f_8;
		}
		return uParam0->f_2;
	}
	else if (is_bit_set(iParam1, 21))
	{
		return uParam0->f_7;
	}
	else if (func_415(iParam1))
	{
		return uParam0->f_1;
	}
	else if (is_bit_set(iParam1, 14))
	{
		return uParam0->f_8;
	}
	else if (is_bit_set(iParam2, 8))
	{
		return uParam0->f_3;
	}
	return uParam0->f_5;
}

bool func_422(int iParam0)
{
	return (is_bit_set(iParam0, 18) && is_bit_set(iParam0, 17));
}

void func_423(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = iParam0[iVar0];
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && uParam1[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = uParam1[7];
			(*uParam1)[7] = -1;
		}
	}
}

void func_424(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == uParam2[iVar0])
		{
			iParam1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	*iParam3 = (iParam1 - 1);
	*iParam4 = iParam1 + 2;
	if (*iParam4 >= uParam0->f_150)
	{
		*iParam4 = uParam0->f_150;
		*iParam3 = (uParam0->f_150 - 3);
	}
	if (*iParam3 < 0)
	{
		*iParam3 = 0;
	}
	if (*iParam4 < 5 && uParam0->f_150 > 5)
	{
		*iParam4 = 5;
	}
	if (*iParam4 < uParam0->f_150 && uParam0->f_150 < 5)
	{
		*iParam4 = uParam0->f_150;
	}
	if (*iParam4 > 8)
	{
		*iParam4 = 8;
	}
}

void func_425(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (iParam4 < iParam3)
	{
		if (iParam1 != _databinding_get_item_context_by_index(uParam0, iParam4))
		{
			_databinding_remove_binding_array_item_by_data_context_id(uParam0, iParam1);
			_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0, iParam4, sParam2, iParam1);
		}
	}
	else
	{
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0, iParam4, sParam2, iParam1);
	}
}

void func_426(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = -1;
	iVar4 = -1;
	iVar6 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_404(&((*uParam0)[iVar1]->f_14)))
		{
			if (iVar1 < iParam1)
			{
				iVar3 = iVar2;
				iVar2 = iVar1;
			}
			else if (iVar1 > iParam1)
			{
				iVar5++;
				if (iVar5 < 4)
				{
					iVar6 = iVar1;
				}
			}
			iVar0++;
			iVar4 = iVar1;
		}
		iVar1++;
	}
	*iParam2 = iVar2;
	if (iVar6 != -1)
	{
		*iParam3 = iVar6;
	}
	else
	{
		*iParam3 = iVar4;
	}
	if (*iParam3 >= iVar4 && iVar6 == -1)
	{
		*iParam3 = iVar4;
		if (iVar3 != -1)
		{
			*iParam2 = iVar3;
		}
		else
		{
			*iParam2 = iVar2;
		}
	}
	if (*iParam2 < 0)
	{
		*iParam2 = 0;
	}
}

void func_427(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_150 - 1))
	{
		StringCopy(&cVar5, "LeaderboardListHeader_", 64);
		if (iVar0 < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, iVar0, 64);
		uParam0->f_3[iVar0] = _databinding_add_data_container(*uParam0, &cVar5);
		cVar5 = { func_443(iVar0) };
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 == uParam1[iVar1] && func_404(&((*uParam1)[iVar1]->f_14)))
			{
				if (is_bit_set(uParam0->f_159, 19))
				{
					if ((*uParam1)[iVar1]->f_6 != -1f && fVar2 == 0f)
					{
						fVar2 = (fVar2 + (*uParam1)[iVar1]->f_6);
					}
					if ((*uParam1)[iVar1]->f_1 != -1f)
					{
						fVar3 = (fVar3 + (*uParam1)[iVar1]->f_1);
					}
					if ((*uParam1)[iVar1]->f_5 != -1f)
					{
						fVar4 = (fVar4 + (*uParam1)[iVar1]->f_5);
					}
				}
				else
				{
					if ((*uParam1)[iVar1]->f_1 != -1f)
					{
						fVar2 = (fVar2 + (*uParam1)[iVar1]->f_1);
					}
					if ((*uParam1)[iVar1]->f_2 != -1f)
					{
						fVar3 = (fVar3 + (*uParam1)[iVar1]->f_2);
					}
					if ((*uParam1)[iVar1]->f_5 != -1f)
					{
						fVar4 = (fVar4 + (*uParam1)[iVar1]->f_5);
					}
				}
			}
			iVar1++;
		}
		if (!is_bit_set(uParam0->f_159, 19))
		{
			if (is_bit_set(uParam0->f_159, 25) || is_bit_set(uParam0->f_159, 23))
			{
				if (func_442() == 0)
				{
					fVar4 = to_float(Global_1050975[iVar0]);
				}
			}
		}
		iVar13 = func_444(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0);
		_databinding_add_data_int(&(uParam0->f_3[iVar0]), "HeadingColor", iVar13);
		_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Heading", &cVar5);
		if (is_bit_set(uParam0->f_159, 6))
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar4, uParam0->f_151));
		}
		else if (func_414(uParam0->f_159))
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat2", _0x2b6846401d68e563(fVar2, uParam0->f_151));
			fVar14 = fVar3;
			if (is_bit_set(uParam0->f_159, 17))
			{
				fVar14 = fVar4;
			}
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar14, uParam0->f_151));
		}
		else if (func_415(uParam0->f_159))
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar4, uParam0->f_151));
		}
		else
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat1Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat1", _0x2b6846401d68e563(fVar2, uParam0->f_151));
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat2", _0x2b6846401d68e563(fVar3, uParam0->f_151));
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar4, uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_428(int iParam0)
{
	return (Global_1102219->f_3520 && iParam0) != 0;
}

bool func_429()
{
	return func_428(4);
}

void func_430(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	if (bParam4)
	{
		if (func_449())
		{
			func_452(uParam0);
		}
		else
		{
			func_453(uParam0, bParam5, bParam7);
		}
	}
	uParam0->f_149 = 0;
	if (iParam3 != -1)
	{
		uParam0->f_150 = iParam3;
	}
	if (is_bit_set(uParam0->f_159, 5))
	{
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "MiniListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_143[iVar0] = _databinding_add_data_container(*uParam0, &cVar1);
		_databinding_add_data_string(&(uParam0->f_143[iVar0]), "Position", "");
		_databinding_add_data_string(&(uParam0->f_143[iVar0]), "Gamertag", "");
		_databinding_add_data_int(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		_databinding_add_data_string(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		StringCopy(&cVar1, "LeaderboardListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_12[iVar0] = _databinding_add_data_container(*uParam0, &cVar1);
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "Position", 0);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowCross", false);
		_databinding_add_data_hash(&(uParam0->f_12[iVar0]), "CrossColor", 859817522);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Gamertag", "");
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "GamertagColor", 0);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowCrewTag", true);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "CrewTag", "");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowRank", true);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Rank", "0");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "Spectating", false);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat0", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat1", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat2", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat3", "");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowBlip", func_454());
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "BlipColor", 0);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "isHighlighted", false);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "HeadsetIconVisible", false);
		_databinding_add_data_hash(&(uParam0->f_12[iVar0]), "HeadsetIconColor", 109029619);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowBlip", true);
		_databinding_add_data_bool(*uParam0, "info_visible_06", false);
		_databinding_add_data_bool(*uParam0, "info_visible_07", false);
		_databinding_add_data_bool(*uParam0, "info_visible_08", false);
		_databinding_add_data_string(*uParam0, "info_value_06", "");
		_databinding_add_data_string(*uParam0, "info_value_07", "");
		_databinding_add_data_string(*uParam0, "info_value_08", "");
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "SetOverlayImg", 1);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowOverlay", false);
		func_431(uParam0, &((*uParam1)[iVar0]->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_449())
	{
		func_455(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_378(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_431(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_456() > 0)
	{
		return;
	}
	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_457(uParam0, *uParam1)}, 8);
	if (!is_string_null_or_empty(&Var16) && !are_strings_equal(&Var16, "Invalid Handle"))
	{
		cVar0 = { Var16 };
		cVar8 = { Var16 };
	}
	if (bParam3)
	{
		_databinding_write_data_string(uParam0->f_45[iParam2][0], &cVar0);
		_databinding_write_data_string(uParam0->f_45[iParam2][1], &cVar8);
	}
	else
	{
		(*uParam0->f_45[iParam2])[0] = _databinding_add_data_string(&(uParam0->f_12[iParam2]), "AvatarDictionary", &cVar0);
		(*uParam0->f_45[iParam2])[1] = _databinding_add_data_string(&(uParam0->f_12[iParam2]), "AvatarTexture", &cVar8);
	}
}

bool func_432(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_433(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_434(bool bParam0)
{
	if (bParam0)
	{
		return 1022890889;
	}
	return -987928333;
}

int func_435()
{
	return 205122612;
}

bool func_436()
{
	if (Global_1940144->f_20 && Global_1940144->f_5 == 1)
	{
		return true;
	}
	return false;
}

void func_437(var uParam0)
{
	if (uParam0->f_36 == 0 && uParam0->f_33 == uParam0->f_34)
	{
		return;
	}
	iVar0 = uParam0->f_35;
	uParam0->f_35++;
	if (uParam0->f_35 >= 32)
	{
		uParam0->f_35 = 0;
		if (uParam0->f_36 != 0)
		{
			func_458(uParam0, uParam0->f_36, 0);
			uParam0->f_36 = 0;
		}
	}
	if (!is_bit_set(uParam0->f_33, iVar0))
	{
		return;
	}
	iVar1 = int_to_playerindex(iVar0);
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	StringCopy(&cVar2, "", 128);
	switch (func_459(&cVar2, iVar0, 1))
	{
		case 4:
			(*uParam0)[iVar0] = iVar1;
			set_bit(&(uParam0->f_34), iVar0);
			break;
		case 3:
			break;
		case 1:
			func_460(iVar0, 1);
			set_bit(&(uParam0->f_36), iVar0);
			break;
		case 2:
			func_460(iVar0, 1);
			set_bit(&(uParam0->f_36), iVar0);
			break;
		case 0:
			break;
	}
}

void func_438(var uParam0, int iParam1)
{
	Var0.f_1 = 1;
	Var0 = 1;
	Var0.f_3 = iParam1;
	func_461(&Var0);
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = int_to_playerindex(iVar4);
		if (!network_is_player_active(iVar5))
		{
		}
		else
		{
			set_bit(&(uParam0->f_33), iVar4);
		}
		iVar4++;
	}
}

int func_439()
{
	return -1640778959;
}

int func_440()
{
	return 1937193856;
}

void func_441(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_442()
{
	if (func_432(16))
	{
		iVar0 = Global_1050050->f_12;
	}
	else
	{
		iVar0 = func_462();
	}
	return iVar0;
}

struct<8> func_443(int iParam0)
{
	if (is_string_null_or_empty((*Global_1050984)[iParam0]))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, _get_label_text(&cVar0), 64);
		return cVar0;
	}
	return *(*Global_1050984)[iParam0];
}

int func_444(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_445(iParam0, iParam1, iParam2, bParam3, bParam4);
}

int func_445(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 > 1)
	{
		if (bParam3)
		{
			switch (iParam0)
			{
				case 0:
					return -275684858;
				case 1:
					return -1561147190;
				case 2:
					return -736318691;
				case 3:
					return 158864851;
				case 4:
					return 923463928;
				case 5:
					return -317694716;
				case 6:
					return 461388259;
				case 7:
					return 1811916478;
				default:
					break;
			}
			return 1105014447;
		}
		if (iParam1 == iParam0)
		{
			return 1765299542;
		}
	}
	else if (bParam4)
	{
		if (iParam2 < 2)
		{
			return 1105014447;
		}
		else
		{
			return 1765299542;
		}
	}
	return -1031763995;
}

bool func_446(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_447(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

var func_448()
{
	return Global_1102219->f_26.f_3341;
}

bool func_449()
{
	return &Global_1048583;
}

float func_450(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_2;
		case 2:
			return uParam0->f_3;
		case 3:
			return uParam0->f_4;
		default:
			break;
	}
	return 0f;
}

char* func_451(char* sParam0)
{
	return _0xd8402b858f4ddd88(sParam0, get_length_of_literal_string(sParam0));
}

void func_452(var uParam0)
{
	sVar0 = func_463(uParam0->f_159, uParam0->f_160);
	sVar1 = func_464(uParam0->f_159, uParam0->f_160);
	sVar2 = func_465(uParam0->f_159, uParam0->f_160);
	sVar3 = func_466();
	if (!is_string_null_or_empty(sVar0))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat1", sVar0);
		_databinding_add_data_int(uParam0->f_1, "Stat1Color", 1105014447);
	}
	if (!is_string_null_or_empty(sVar1))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat2", sVar1);
		_databinding_add_data_int(uParam0->f_1, "Stat2Color", 1105014447);
	}
	if (!is_string_null_or_empty(sVar2))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat3", sVar2);
		_databinding_add_data_int(uParam0->f_1, "Stat3Color", 1105014447);
	}
	if (!is_string_null_or_empty(sVar3))
	{
		_databinding_add_data_string(uParam0->f_1, "StatRounds", sVar3);
		_databinding_add_data_int(uParam0->f_1, "StatRoundsColor", 1105014447);
	}
	_databinding_add_data_int(uParam0->f_1, "HeadingColor", 1105014447);
}

void func_453(var uParam0, bool bParam1, bool bParam2)
{
	if (func_422(uParam0->f_159) || func_415(uParam0->f_159))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat1", "");
		_databinding_add_data_string(uParam0->f_1, "Stat2", "");
	}
	if (!is_bit_set(uParam0->f_159, 0) && !is_bit_set(uParam0->f_159, 17))
	{
		if (!is_bit_set(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				_databinding_add_data_string(uParam0->f_1, "Stat0", _get_label_text("UIC_LDR_RNDW"));
				_databinding_add_data_int(uParam0->f_1, "Stat0Color", 1105014447);
			}
		}
		_databinding_add_data_string(uParam0->f_1, "Stat1", func_463(uParam0->f_159, uParam0->f_160));
		_databinding_add_data_int(uParam0->f_1, "Stat1Color", 1105014447);
	}
	else if (func_415(uParam0->f_159))
	{
		if (!is_bit_set(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				_databinding_add_data_string(uParam0->f_1, "Stat2", _get_label_text("UIC_LDR_RNDW"));
				_databinding_add_data_int(uParam0->f_1, "Stat2Color", 1105014447);
			}
		}
	}
	else if (!is_bit_set(uParam0->f_159, 3))
	{
		if (bParam2)
		{
			_databinding_add_data_string(uParam0->f_1, "Stat1", _get_label_text("UIC_LDR_RNDW"));
			_databinding_add_data_int(uParam0->f_1, "Stat1Color", 1105014447);
		}
	}
	if (!func_415(uParam0->f_159))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat2", func_464(uParam0->f_159, uParam0->f_160));
		_databinding_add_data_int(uParam0->f_1, "Stat2Color", 1105014447);
	}
	if (!is_bit_set(uParam0->f_159, 3) || is_bit_set(uParam0->f_159, 0))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat3", func_465(uParam0->f_159, uParam0->f_160));
		_databinding_add_data_int(uParam0->f_1, "Stat3Color", 1105014447);
	}
	_databinding_add_data_int(uParam0->f_1, "HeadingColor", 1105014447);
}

int func_454()
{
	return 1;
}

void func_455(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	if (Global_1940144->f_111)
	{
		func_467(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_385(uParam0, uParam1);
		iVar2 = player_id();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_404(&((*uParam1)[iVar0]->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_405(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", func_406(uParam1, iVar0));
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar3 = iVar2 == (*uParam1)[iVar0]->f_14;
				iVar4 = func_407(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_408(uParam0, uParam1, iVar0, bParam3, iVar4);
					}
				}
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Gamertag", &((*uParam1)[iVar0]->f_14.f_1));
				_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "GamertagColor", iVar4);
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "CrewTag", func_409());
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Rank", func_410((*uParam1)[iVar0]->f_14));
				if (!bParam4)
				{
					if (func_411())
					{
						if (func_412((*uParam1)[iVar0]->f_14))
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", true);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", func_413((*uParam1)[iVar0]->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_417((*uParam1)[iVar0], uParam0->f_159);
				fVar6 = func_416((*uParam1)[iVar0], uParam0->f_159);
				sVar7 = func_421((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
				fVar8 = func_468((*uParam1)[iVar0]);
				if ((*Global_1049283)[0]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563(fVar5, 0));
				}
				if ((*Global_1049283)[1]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563(fVar6, 0));
				}
				if ((*Global_1049283)[2]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _0x2b6846401d68e563(sVar7, 0));
				}
				if ((*Global_1049283)[3]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "StatRounds", _0x2b6846401d68e563(fVar8, 0));
				}
				_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && (*uParam1)[iVar0]->f_13)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", iVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

int func_456()
{
	return Global_1139381->f_5079.f_325;
}

struct<16> func_457(var uParam0, int iParam1)
{
	if (!network_is_player_active(iParam1))
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_459(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_460(iVar16, 1);
			break;
		case 2:
			func_460(iVar16, 1);
			func_469(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

void func_458(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = iParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_461(&Var0);
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

int func_459(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = int_to_playerindex(iParam1);
	if (!network_is_player_active(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_470(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			network_handle_from_player(int_to_playerindex(iParam1), &uVar3);
			if (!network_is_handle_valid(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, _0xb5c4b18b12a2af23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_471(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_472(iParam1, iParam2, 0);
						return 1;
					}
					func_473(iParam1, iParam2, iVar1);
					func_472(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_474(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_472(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_472(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_472(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_474(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_472(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_472(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_474(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_472(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_460(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = func_470(iParam0, iParam1);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_473(iParam0, iParam1, 0);
			func_472(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_474(iParam0, iParam1);
			if (iVar2 != 0)
			{
				texture_download_release(iVar2);
			}
			func_472(iParam0, iParam1, 0);
			break;
	}
}

void func_461(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_475(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_475(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
					{
					}
					else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
					{
					}
					else
					{
						_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
					}
					iVar3++;
				}
				func_476(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_475(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
						{
						}
						else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
						{
						}
						else
						{
							_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
						}
						iVar3++;
					}
					func_476(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

int func_462()
{
	if (_get_number_of_references_of_script_with_name_hash(1814880805) != 0)
	{
		return 0;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-701235215) != 0)
	{
		return 1;
	}
	return 2;
}

char* func_463(int iParam0, int iParam1)
{
	if (func_449())
	{
		return func_477(0);
	}
	else if ((is_bit_set(iParam0, 0) || is_bit_set(iParam0, 17)) || is_bit_set(iParam0, 18))
	{
		return "";
	}
	else if (is_bit_set(iParam1, 12))
	{
		return _create_var_string(2, "FM_WP_LEADERBOARD_PHOTOS_TAKEN");
	}
	else if (is_bit_set(iParam0, 6))
	{
		return _create_var_string(2, "FM_LEADERBOARD_KILLS");
	}
	else if (is_bit_set(iParam0, 3))
	{
		return _create_var_string(2, "UIC_LB_TIME");
	}
	else if (is_bit_set(iParam0, 19))
	{
		return _create_var_string(2, "UIC_LB_BOUT");
	}
	else if (is_bit_set(iParam1, 3))
	{
		return _create_var_string(2, "FM_FISHING_LEADERBOARD_HOOKED");
	}
	else if (is_bit_set(iParam1, 6))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	else if (is_bit_set(iParam1, 8))
	{
		return _create_var_string(2, "FM_ROUNDUP_LEADERBOARD_TOTAL");
	}
	return _create_var_string(2, "UIC_LB_KILLS");
}

char* func_464(int iParam0, int iParam1)
{
	if (func_449())
	{
		return func_477(1);
	}
	else if (func_415(iParam0) || func_422(iParam0))
	{
		return "";
	}
	else if (is_bit_set(iParam1, 9))
	{
		return _create_var_string(2, "FM_LEADERBOARD_KILLS");
	}
	else if (is_bit_set(iParam1, 1))
	{
		return _create_var_string(2, "UIC_LB_DEL");
	}
	else if (is_bit_set(iParam1, 12))
	{
		return _create_var_string(2, "FM_WP_LEADERBOARD_BEST_PHOTO");
	}
	else if (is_bit_set(iParam0, 6))
	{
		if (is_bit_set(iParam0, 0))
		{
			return _create_var_string(2, "FM_LEADERBOARD_KILLS");
		}
		else
		{
			return _create_var_string(2, "FM_LEADERBOARD_DEATHS");
		}
	}
	else if (is_bit_set(iParam0, 3))
	{
		if (is_bit_set(iParam0, 0))
		{
			return _get_label_text("UIC_LB_TIME");
		}
		else
		{
			return func_478(iParam0);
		}
	}
	else if (func_414(iParam0) || is_bit_set(iParam0, 19))
	{
		return _get_label_text("UIC_LB_KILLS");
	}
	else if (is_bit_set(iParam0, 8))
	{
		return _get_label_text("UIC_LB_VAL");
	}
	else if (is_bit_set(iParam0, 20))
	{
		return _get_label_text("UIC_LB_ACC");
	}
	else if (is_bit_set(iParam1, 3))
	{
		return _create_var_string(2, "FM_FISHING_LEADERBOARD_CAUGHT");
	}
	else if (is_bit_set(iParam1, 4))
	{
		return _create_var_string(2, "FM_HUNTING_LEADERBOARD_KILLS");
	}
	else if (is_bit_set(iParam1, 6))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	else if (is_bit_set(iParam1, 8))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	return _get_label_text("UIC_LB_DEATHS");
}

char* func_465(int iParam0, int iParam1)
{
	if (func_449())
	{
		return func_477(2);
	}
	else if (is_bit_set(iParam0, 13))
	{
		return _get_label_text("FM_POSSE_RACE_LEADERBOARD_SCORE");
	}
	else if (is_bit_set(iParam1, 9))
	{
		return _create_var_string(2, "FM_GOODS_TRAIN_LEADERBOARD_GOODS");
	}
	else if (is_bit_set(iParam1, 7))
	{
		return _create_var_string(2, "FM_WRECKAGE_LEADERBOARD_FOUND");
	}
	else if (is_bit_set(iParam1, 11))
	{
		return _create_var_string(2, "FME_AT_SCORE_TAG");
	}
	else if (is_bit_set(iParam1, 12))
	{
		return _create_var_string(2, "FM_WP_LEADERBOARD_POINTS");
	}
	else if (is_bit_set(iParam0, 6))
	{
		if (is_bit_set(iParam1, 13))
		{
			return _create_var_string(2, "FM_LEADERBOARD_KILLS");
		}
		if (is_bit_set(iParam0, 0))
		{
			return _create_var_string(2, "FM_LEADERBOARD_DEATHS");
		}
		else
		{
			return _create_var_string(2, "FM_LEADERBOARD_SCORE");
		}
	}
	else if (is_bit_set(iParam0, 3) && is_bit_set(iParam0, 0))
	{
		return func_478(iParam0);
	}
	else if ((is_bit_set(iParam0, 0) && !is_bit_set(iParam0, 17)) && !func_422(iParam0))
	{
		return _get_label_text("UIC_LB_DEATHS");
	}
	else if (func_415(iParam0) && !func_422(iParam0))
	{
		return _get_label_text("UIC_LB_KILLS");
	}
	else if (is_bit_set(iParam0, 2) || is_bit_set(iParam0, 19))
	{
		return _get_label_text("UIC_LB_CAPS");
	}
	else if (is_bit_set(iParam1, 2))
	{
		return _create_var_string(2, "UIC_LB_DEL");
	}
	else if (is_bit_set(iParam0, 14))
	{
		return _get_label_text("UIC_LB_BOUT");
	}
	else if (is_bit_set(iParam0, 21))
	{
		return _get_label_text("UIC_LB_TA");
	}
	else if (is_bit_set(iParam1, 3))
	{
		return _create_var_string(2, "FM_FISHING_LEADERBOARD_WEIGHT");
	}
	else if (is_bit_set(iParam1, 4))
	{
		return _create_var_string(2, "FM_LEADERBOARD_SCORE");
	}
	else if (is_bit_set(iParam1, 6))
	{
		return _create_var_string(2, "FM_LEADERBOARD_SCORE");
	}
	else if (is_bit_set(iParam1, 8))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	return _get_label_text("UIC_LB_SCORE");
}

char* func_466()
{
	if (func_449())
	{
		return func_477(3);
	}
	return "";
}

void func_467(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	iVar4 = 0;
	iVar5 = 32;
	iVar6 = player_id();
	bVar16 = (*Global_1049309)[0]->f_2 == -1128715836;
	bVar17 = (*Global_1049309)[0]->f_2 == 1691389412;
	bVar18 = (*Global_1049309)[0]->f_2 == 2105734739;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Position", "");
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Gamertag", "");
		_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar19 = is_bit_set(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = is_bit_set(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_442() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = to_float(Global_1050975[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0] != -1 && uParam1[iVar0] < 8)
				{
					if (func_479((*uParam1)[iVar0], 0) != -1f)
					{
						fVar21[uParam1[iVar0]] = (&fVar21[uParam1[iVar0]] + func_479((*uParam1)[iVar0], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_423(iParam2, &uVar30, uParam0->f_150, bVar19);
		func_424(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = &uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						Var7 = { func_443(iVar39) };
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &Var7);
						iVar40 = func_444(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar40);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", _0x2b6846401d68e563(&(fVar21[iVar39]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_426(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_404(&((*uParam1)[iVar1]->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &((*uParam1)[iVar1]->f_14.f_1));
						bVar41 = iVar6 == (*uParam1)[iVar1]->f_14;
						iVar42 = func_407(uParam0, uParam1, iVar1, iVar6, bVar41);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar42);
						sVar43 = "";
						sVar43 = _0x2b6846401d68e563(func_479((*uParam1)[iVar1], 0), 0);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

float func_468(var uParam0)
{
	if (func_449())
	{
		func_450(uParam0, 3);
	}
	return -1f;
}

void func_469(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam1;
	set_bit(&iVar1, iVar0);
	func_458(uParam0, iVar1, iParam2);
}

int func_470(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &(Global_1139381->f_5079[iParam0]->f_5[iParam1]);
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_472(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	Global_1139381->f_5079[iParam0]->f_5[iParam1] = iParam2;
}

void func_473(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	(*Global_1139381->f_5079[iParam0])[iParam1] = iParam2;
}

int func_474(int iParam0, int iParam1)
{
	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	return Global_1139381->f_5079[iParam0][iParam1];
}

void func_475(vector3 vParam0)
{
	if (Global_1139381->f_5079.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*Global_1139381->f_5079.f_326[Global_1139381->f_5079.f_324] = { vParam0 };
	Global_1139381->f_5079.f_324 = (Global_1139381->f_5079.f_324 + 1 % 50);
	Global_1139381->f_5079.f_325++;
}

void func_476(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 3, &uParam1);
}

char* func_477(int iParam0)
{
	if (Global_3145858->f_61343[iParam0]->f_1 > -1)
	{
		if (func_480(Global_3145858->f_61343[iParam0]->f_1))
		{
			return _create_var_string(2, Global_3145858->f_52528[Global_3145858->f_61343[iParam0]->f_1]);
		}
		return func_481(Global_3145858->f_52528[Global_3145858->f_61343[iParam0]->f_1]);
	}
	return "";
}

char* func_478(int iParam0)
{
	if (is_bit_set(iParam0, 4))
	{
		return _get_label_text("UIC_LB_BLAP");
	}
	if (is_bit_set(iParam0, 15))
	{
		return _get_label_text("UIC_LB_CPCO");
	}
	return "";
}

float func_479(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_9;
		default:
			break;
	}
	return 0f;
}

bool func_480(int iParam0)
{
	return func_482(Global_3145858->f_52528[iParam0]->f_17, 0);
}

var func_481(var uParam0)
{
	return uParam0;
}

bool func_482(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

