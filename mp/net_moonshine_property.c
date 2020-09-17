void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1(&ScriptParam_0);
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	bVar4 = false;
	if (!func_2(ScriptParam_0.f_1))
	{
		func_3(&ScriptParam_0);
	}
	if (func_4(1024))
	{
		do_screen_fade_out(500);
	}
	func_5(50);
	while (!func_6(0, 0))
	{
		if (&Global_1298378 != 1)
		{
			wait(0);
		}
		else
		{
			Local_1110 = network_get_player_from_gamer_handle(&(ScriptParam_0.f_3));
			if (network_is_player_active(iVar1108))
			{
				Local_1110.f_7 = Global_1298536[iVar1108];
			}
			func_7(&Local_1110, &Local_245);
			func_8();
			func_9(ScriptParam_0.f_2, &uLocal_19, &Local_1110);
			_0x632be8d84846fa56();
			func_10();
			func_11(2048);
			bVar3 = false;
			func_12(&uLocal_19, &Local_245, &Local_1110);
			if (func_13(&uLocal_19, &Local_245, &Local_1110, &bVar4))
			{
				if (bVar4)
				{
				}
				else
				{
					Jump @330; //curOff = 218
					if (Local_1110.f_1 != 4)
					{
					}
					else if (!(func_14(&ScriptParam_0, &Local_1110) || func_15(&ScriptParam_0, &uLocal_19, &Local_1110, &Local_245)) || (Local_1110.f_2 >= 4 || Local_1110.f_3 >= 4))
					{
						bVar3 = true;
					}
					if (bVar3 && Local_1110.f_1 > 0)
					{
						func_16(&ScriptParam_0, &uLocal_2798, &uLocal_19, &Local_1110, &Local_245);
					}
					switch (Local_1110.f_1)
					{
						case 0:
							if (func_17(&ScriptParam_0))
							{
								func_18(&Local_1110, 1);
							}
							break;
						case 1:
							bVar0 = true;
							if (!func_19(&ScriptParam_0))
							{
								bVar0 = false;
							}
							if (bVar0)
							{
								func_18(&Local_1110, 2);
							}
							break;
						case 2:
							if (network_is_host_of_this_script())
							{
								if (!func_20(&uLocal_19, 4))
								{
									if (!bVar1)
									{
										if (can_register_mission_peds(30))
										{
											bVar1 = true;
										}
									}
									if (!bVar2)
									{
										if (can_register_mission_objects(27))
										{
											bVar2 = true;
										}
									}
									if (bVar1 && bVar2)
									{
										func_21(&uLocal_19, 4);
									}
								}
							}
							if (func_20(&uLocal_19, 4))
							{
								func_18(&Local_1110, 3);
							}
							break;
						case 3:
							bVar0 = true;
							if (!func_22(&ScriptParam_0))
							{
								bVar0 = false;
							}
							if (bVar0)
							{
								func_23(&(Local_1110.f_1680));
								func_18(&Local_1110, 4);
								if (func_4(1024))
								{
									func_24();
									func_11(1024);
								}
							}
							break;
						case 4:
							bVar0 = true;
							func_25();
							if (bVar3)
							{
								if (func_26(&ScriptParam_0))
								{
								}
								else
								{
									wait(0);
								}
								func_3(&ScriptParam_0);
							}
							default:
								break;
					}
				}
			}
		}
	}
}

void func_1(var uParam0)
{
	func_27(32, uParam0->f_1);
	func_28();
	network_register_host_broadcast_variables(&uLocal_19, 226, 48);
	if (!func_29(_0xba24095ea96dfe17(&uLocal_19), 226, "m_sPropertyHostData"))
	{
	}
	network_register_player_broadcast_variables(&Local_245, 865, 49);
	if (!func_30(_0x690806bc83bc8ca2(Local_245[0]), 865, "m_sPropertyClientData"))
	{
	}
	func_31(0);
	if (does_entity_exist(player_ped_id()))
	{
		set_ped_config_flag(player_ped_id(), 459, true);
	}
	_0x6378a235374b852f("Blocked_Contexts_Bump", 1);
	_0xd42c543f73233041(1);
	register_script_with_audio(1);
	set_this_script_can_be_paused(false);
}

bool func_2(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 32);
}

void func_3(var uParam0)
{
	bVar0 = false;
	if (network_is_host_of_this_script() && network_get_num_script_participants("net_moonshine_property", uParam0->f_1, 0) <= 1)
	{
		bVar0 = true;
	}
	if (does_blip_exist(Local_1110.f_1250))
	{
		remove_blip(&(Local_1110.f_1250));
	}
	if (does_blip_exist(Local_1110.f_1251))
	{
		remove_blip(&(Local_1110.f_1251));
	}
	if (_text_database_has_loaded("MSMP"))
	{
		_text_database_delete("MSMP");
	}
	if (func_32(&Local_1110, 4) && does_entity_exist(player_ped_id()))
	{
		set_player_control(get_player_index(), true, 0, false);
		func_33(&Local_1110, 4);
	}
	if (func_32(&Local_1110, 1))
	{
		do_screen_fade_in(0);
	}
	func_34(uParam0, &uLocal_2798, &uLocal_19, &Local_1110, &Local_245, bVar0, 1);
	func_23(&(Local_1110.f_1680));
	func_35(&Local_1110);
	func_36();
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		clear_ped_secondary_task(Global_34);
	}
	_0xfdecca06e8b81346(Global_34);
	func_37(0);
	func_38(0);
	func_39(&(Global_1071686->f_28357.f_1), 4096);
	func_40(128);
	_0xf9e951a1e5517c06();
	if (does_entity_exist(Global_34))
	{
		set_ped_config_flag(Global_34, 459, false);
		_0x9d8dfe2de9cb4dfc(Global_34);
		_0x4a056257802dd3e5(player_id(), false);
		iVar1 = participant_id_to_int();
		if (iVar1 > -1 && iVar1 < 255)
		{
			Local_245[iVar1]->f_12.f_8 = 0;
		}
	}
	if (func_4(1024) || func_4(33554432))
	{
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			if (!is_screen_fading_in())
			{
				do_screen_fade_in(250);
			}
		}
		func_11(1024);
	}
	_0x87e6302fc61208cc("Blocked_Contexts_Bump");
	Global_1298000->f_43 = 0;
	Global_1298000->f_41 = 0;
	func_41(0);
	func_11(33554432);
	func_42();
}

bool func_4(int iParam0)
{
	return func_43(Global_1298378->f_156, iParam0);
}

void func_5(int iParam0)
{
	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1939655->f_302 - 150))
	{
	}
	if (func_44(&iVar0))
	{
		if (Global_1939655->f_291[iVar0]->f_1 != iParam0)
		{
			Global_1939655->f_302 = (Global_1939655->f_302 + Global_1939655->f_291[iVar0]->f_1);
			Global_1939655->f_291[iVar0]->f_1 = iParam0;
			Global_1939655->f_302 = (Global_1939655->f_302 - iParam0);
			_0x2f9ac754fe179d58(func_45());
		}
		return;
	}
	iVar0 = func_46();
	if (iVar0 == -1)
	{
		return;
	}
	Global_1939655->f_291[iVar0]->f_1 = iParam0;
	Global_1939655->f_291[iVar0] = get_id_of_this_thread();
	Global_1939655->f_302 = (Global_1939655->f_302 - iParam0);
	_0x2f9ac754fe179d58(func_45());
}

bool func_6(bool bParam0, bool bParam1)
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

void func_7(int iParam0, var uParam1)
{
	iParam0->f_4 = 0;
	iParam0->f_5 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (func_47(iVar1))
		{
			if (network_is_participant_active(iVar1))
			{
				iParam0->f_4 = (iParam0->f_4 || (*uParam1)[iVar0]->f_25);
				iParam0->f_5 = (iParam0->f_5 && (*uParam1)[iVar0]->f_25);
			}
		}
		iVar0++;
	}
}

void func_8()
{
	if (func_48(Global_34, 1, 0, 1) != -1569615261 || func_48(Global_34, 1, 1, 1) != -1569615261)
	{
		if (func_48(Global_34, 1, 0, 1) != -1016714371 && func_48(Global_34, 1, 0, 1) != 332793555)
		{
			_hide_ped_weapons(Global_34, 2, false);
		}
	}
	if (!_0x3d10d7179d7034af(func_49(0), -1415022764, 0))
	{
		_0x766315a564594401(func_49(0), -1415022764, 0);
		func_50(1);
	}
	if (is_scenario_type_enabled("RANSACK_ATTACHED_P_CABINET08X"))
	{
		_set_scenario_type_enabled_hash(1254411186, false);
	}
	func_51(32768);
	func_52();
}

void func_9(int iParam0, var uParam1, int iParam2)
{
	if (func_53(player_id(), 1))
	{
		if (Global_1298378->f_157 == -1)
		{
			func_54(iParam0);
		}
		if (func_55(iParam0, &uVar0, &fVar3, &uVar4))
		{
			if (iParam2->f_1658)
			{
				if (Global_35.f_2 > (fVar3 + 0.25f))
				{
					func_56(Global_1298378->f_157);
					_0x1392105da88bbffb(-347798845, &(uVar0[0]), &(uVar0[1]), uVar4, 0);
					Global_1298378->f_157 = 0;
					iParam2->f_1658 = 0;
				}
			}
			else if (Global_35.f_2 < (fVar3 - 0.25f))
			{
				func_56(Global_1298378->f_157);
				if (&uParam1->f_46.f_1[1] > 0)
				{
					Global_1298378->f_157 = 4;
					_0x1392105da88bbffb(-1846003417, &(uVar0[0]), &(uVar0[1]), uVar4, -1);
				}
				else if (&uParam1->f_46.f_1[3] > 0)
				{
					Global_1298378->f_157 = 3;
					_0x1392105da88bbffb(2142311577, &(uVar0[0]), &(uVar0[1]), uVar4, -1);
				}
				else if (&uParam1->f_46.f_1[5] > 0)
				{
					Global_1298378->f_157 = 2;
					_0x1392105da88bbffb(518116088, &(uVar0[0]), &(uVar0[1]), uVar4, -1);
				}
				else
				{
					Global_1298378->f_157 = 1;
					_0x1392105da88bbffb(-1136456260, &(uVar0[0]), &(uVar0[1]), uVar4, -1);
				}
				iParam2->f_1658 = 1;
			}
		}
	}
	else if (Global_1298378->f_157 > -1)
	{
		func_56(Global_1298378->f_157);
		Global_1298378->f_157 = -1;
	}
}

void func_10()
{
	if (func_57())
	{
		func_58(0);
	}
}

void func_11(int iParam0)
{
	func_59(&(Global_1298378->f_156), iParam0);
}

void func_12(var uParam0, var uParam1, int iParam2)
{
	if (network_is_host_of_this_script())
	{
		if (network_is_player_active(uParam0->f_223) && network_is_player_a_participant(uParam0->f_223))
		{
		}
		else if (func_60(iParam2, -2147483648))
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = int_to_participantindex(iVar0);
				if (network_is_participant_active(iVar1))
				{
					if (func_61(uParam1, -2147483648, iVar0))
					{
						uParam0->f_223 = network_get_player_index(iVar1);
						if (network_is_player_active(uParam0->f_223))
						{
							return;
						}
					}
				}
				iVar0++;
			}
		}
		else
		{
			uParam0->f_223 = 255;
		}
	}
}

bool func_13(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	*bParam3 = 0;
	if (!func_61(uParam1, -2147483648, -1))
	{
		if (func_4(8192))
		{
			func_62(uParam1, -2147483648);
			func_63(&(iParam2->f_1634));
		}
		else
		{
			return false;
		}
	}
	if (uParam0->f_223 == player_id())
	{
		*bParam3 = 1;
	}
	if (func_64(&(iParam2->f_1634)) && func_65(&(iParam2->f_1634), 5f))
	{
		*bParam3 = 1;
	}
	return true;
}

bool func_14(var uParam0, int iParam1)
{
	return false;
}

bool func_15(var uParam0, var uParam1, int iParam2, var uParam3)
{
	iVar0 = player_ped_id();
	switch (iParam2->f_2)
	{
		case 0:
			if (!func_66(iParam2))
			{
				if (Global_1298378->f_44)
				{
					if (*iParam2 == player_id())
					{
						func_67(uParam3);
					}
					Global_1298378->f_44 = 0;
				}
			}
			else
			{
				do_screen_fade_out(500);
				iParam2->f_1248 = uParam1->f_46;
				iParam2->f_1249 = &uParam1->f_46.f_1[3];
				iParam2->f_2 = 1;
				if (does_entity_exist(iVar0))
				{
					set_player_control(get_player_index(), false, 0, false);
					func_68(iParam2, 4);
				}
				func_69(&(Local_1110.f_235));
				func_70(33554432);
				func_68(&Local_1110, 1);
			}
			break;
		case 1:
			if (is_screen_faded_out())
			{
				if (!func_61(uParam3, 4, -1))
				{
					if (((!does_entity_exist(iVar0) || !is_ped_using_any_scenario(iVar0)) || func_71(iVar0)) || _0x3ab6c7b0bb0df4b1(iVar0, -1))
					{
						func_62(uParam3, 4);
					}
					else if (does_entity_exist(iVar0))
					{
						if (!_0x0c3cb2e600c8977d(iVar0, 0))
						{
							_0xf1c03a5352243a30(iVar0);
							clear_ped_tasks(iVar0, 1, 0);
						}
					}
				}
				else if (func_72(iParam2, 4))
				{
					if (func_34(uParam0, &uLocal_2798, &uLocal_19, &Local_1110, &Local_245, 1, 0))
					{
						if (network_is_host_of_this_script())
						{
							func_73(&uLocal_19, 8);
						}
						iParam2->f_2 = 2;
					}
				}
			}
			else if (!is_screen_fading_in() && !is_screen_fading_out())
			{
				do_screen_fade_out(250);
			}
			break;
		case 2:
			if (!func_61(uParam3, 8, -1))
			{
				if (!func_20(uParam1, 8))
				{
					func_62(uParam3, 8);
				}
			}
			else if (func_72(iParam2, 8))
			{
				iParam2->f_2 = 3;
			}
			break;
		case 3:
			if (func_74(uParam0, uParam1, iParam2))
			{
				if (&uParam1->f_46.f_1[1] > 0)
				{
					func_70(16384);
				}
				iParam2->f_2 = 4;
			}
			break;
		case 4:
			if (func_75(&uLocal_2798, 0, 4))
			{
				func_62(uParam3, 2);
				iParam2->f_2 = 5;
			}
			break;
		case 5:
			if (*iParam2 == player_id() && func_61(uParam3, 1, -1))
			{
				if (func_76(iParam2))
				{
					func_77(uParam3, 1);
				}
			}
			if (!func_66(iParam2))
			{
				if (func_77(uParam3, 2))
				{
					iParam2->f_2 = 6;
					func_63(&(iParam2->f_1628));
				}
			}
			break;
		case 6:
			if (func_78(&(Local_1110.f_235)))
			{
				if (func_65(&(iParam2->f_1628), 3f))
				{
					do_screen_fade_in(500);
					if (iParam2->f_1248 != uParam1->f_46)
					{
						iVar1 = _0x901e0dc25080c8b9(player_id());
						if (_0xd6f6acf4392187fb(iVar1) && !_0x424b17a7dc5c90bc(player_id()))
						{
							Global_1904651->f_8689 = _0x4be6c13a45cca8ec(iVar1);
							func_79(889, 1);
						}
					}
					if (iParam2->f_1249 != &uParam1->f_46.f_1[3])
					{
						func_79(890, 1);
					}
					iParam2->f_2 = 0;
					func_77(uParam3, 8);
					func_77(uParam3, 1);
					func_77(uParam3, 2);
					func_77(uParam3, 4);
					func_33(&Local_1110, 1);
					func_11(33554432);
					if (does_entity_exist(iVar0))
					{
						if (!func_71(iVar0) && !_0x3ab6c7b0bb0df4b1(iVar0, -1))
						{
							clear_ped_tasks(iVar0, 1, 0);
						}
						set_player_control(get_player_index(), true, 0, false);
						func_33(iParam2, 4);
					}
				}
			}
			break;
	}
	return iParam2->f_2 > 0;
}

void func_16(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_80(uParam0, uParam1->f_1[iVar0], iVar0, uParam1, uParam2, iParam3, uParam4);
		iVar0++;
	}
}

bool func_17(var uParam0)
{
	_text_database_request("MSMP");
	reserve_network_mission_peds(30);
	reserve_network_mission_objects(27);
	func_81(&uLocal_2798);
	return true;
}

void func_18(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

bool func_19(var uParam0)
{
	if (!_text_database_has_loaded("MSMP"))
	{
		return false;
	}
	return true;
}

bool func_20(var uParam0, int iParam1)
{
	return func_82(uParam0->f_196, iParam1);
}

void func_21(var uParam0, int iParam1)
{
	if (network_is_host_of_this_script())
	{
		func_83(&(uParam0->f_196), iParam1);
	}
}

bool func_22(var uParam0)
{
	func_84(uParam0, &Local_1110);
	return true;
}

void func_23(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_85(513))
	{
		func_87(uParam0, func_86(iVar0), 0);
		iVar0++;
	}
}

void func_24()
{
	if (!func_88(1))
	{
		return;
	}
	Global_1298378->f_44 = 1;
}

void func_25()
{
	if (!Local_1110.f_1657)
	{
		if (func_57())
		{
			iVar0 = func_89(1532822440, player_id(), 1, 0);
			iVar1 = func_89(-232478158, player_id(), 1, 0);
			if (iVar0 == -1 && iVar1 == -1)
			{
				bVar2 = true;
				iVar3 = _0x901e0dc25080c8b9(player_id());
				if (_0xd6f6acf4392187fb(iVar3))
				{
					bVar2 = player_id() == _0x4be6c13a45cca8ec(iVar3);
				}
				if (bVar2)
				{
					bVar4 = _unlock_is_unlocked(1212196772);
					bVar5 = _unlock_is_unlocked(-400403560);
					if (bVar4 && bVar5)
					{
						func_79(876, 0);
						func_79(906, 0);
					}
					else if (bVar4 || bVar5)
					{
						func_79(875, 0);
					}
					else
					{
						func_79(874, 0);
					}
				}
				else
				{
					iVar6 = func_90(player_id(), 1);
					if (-1 == iVar6)
					{
						func_79(878, 0);
					}
				}
				Local_1110.f_1657 = 1;
			}
		}
	}
}

bool func_26(var uParam0)
{
	func_91();
	func_92(&Local_245, &Local_1110);
	func_93(&Local_1110);
	func_94(uParam0, &Local_1110);
	func_95(&(Local_1110.f_1680), network_get_player_from_gamer_handle(&(uParam0->f_3)));
	func_96(&(Local_1110.f_1680), &Local_1110);
	iVar0 = player_ped_id();
	if (does_entity_exist(iVar0))
	{
		set_ped_reset_flag(iVar0, 25, true);
		set_ped_reset_flag(iVar0, 134, true);
	}
	return false;
}

void func_27(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_42();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_28()
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
			func_42();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_42();
					break;
				case 2:
					func_42();
					break;
				case 4:
					func_42();
					break;
				case 3:
					func_42();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_42();
		}
		if (!network_is_game_in_progress())
		{
			func_42();
		}
		if (!network_is_signed_online())
		{
			func_42();
		}
		if (func_97() == 0)
		{
			if (func_98())
			{
				func_42();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_42();
	}
	return 1;
}

bool func_29(var uParam0, int iParam1, char* sParam2)
{
	return true;
}

bool func_30(var uParam0, int iParam1, char* sParam2)
{
	return true;
}

void func_31(bool bParam0)
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
					func_42();
					break;
				case 2:
					func_42();
					break;
				case 4:
					func_42();
					break;
				case 3:
					func_42();
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
			func_42();
			return;
		}
		wait(0);
	}
}

bool func_32(int iParam0, int iParam1)
{
	return func_82(iParam0->f_6, iParam1);
}

void func_33(int iParam0, int iParam1)
{
	func_99(&(iParam0->f_6), iParam1);
}

bool func_34(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	bVar1 = true;
	iVar0 = 13;
	while (iVar0 >= 0)
	{
		if (iVar0 == 0)
		{
			if ((!bVar1 && !bParam5) && !bParam6)
			{
			}
			else
			{
				if (uParam1->f_1[iVar0]->f_2 > 0)
				{
					if (!func_100(uParam1->f_1[iVar0], uParam0, uParam2, iParam3, uParam4, bParam5, bParam6))
					{
						bVar1 = false;
					}
					else
					{
						uParam1->f_1[iVar0]->f_2 = 0;
					}
				}
				iVar0 = (iVar0 + -1);
			}
			return bVar1;
		}
	}
}

void func_35(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (_does_volume_exist(&(iParam0->f_1672[iVar0])))
		{
			_delete_volume(&(iParam0->f_1672[iVar0]));
		}
		iVar0++;
	}
}

void func_36()
{
	set_ped_config_flag(Global_34, 334, false);
	set_ped_config_flag(Global_34, 335, false);
	set_ped_config_flag(Global_34, 574, false);
	_0x6a564540fac12211(func_49(0), -1415022764);
	func_50(0);
	reset_scenario_types_enabled();
	_0x93624b36e8851b42(get_player_index());
}

void func_37(int iParam0)
{
	Global_1940085->f_14 = iParam0;
}

void func_38(int iParam0)
{
	if (iParam0 >= &Global_1940085)
	{
		return;
	}
	Global_1940085->f_1 = iParam0;
}

int func_39(var uParam0, int iParam1)
{
	if (func_82(*uParam0, iParam1))
	{
		func_99(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_40(int iParam0)
{
	func_59(&((*Global_1298536)[network_player_id_to_int()]->f_86), iParam0);
}

void func_41(bool bParam0)
{
	func_101(37, 0);
	func_101(33, 0);
	if (bParam0)
	{
		if (_does_volume_exist(Global_1298378->f_44.f_2))
		{
			_delete_volume(Global_1298378->f_44.f_2);
		}
		if (_does_volume_exist(Global_1298378->f_44.f_3))
		{
			_delete_volume(Global_1298378->f_44.f_3);
		}
	}
}

void func_42()
{
	terminate_this_thread();
}

bool func_43(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_44(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (is_thread_active(&(Global_1939655->f_291[iVar0]), false) && &Global_1939655->f_291[iVar0] == get_id_of_this_thread())
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_45()
{
	return (func_102(150f, to_float(Global_1939655->f_302)) / to_float(300));
}

int func_46()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!is_thread_active(&(Global_1939655->f_291[iVar0]), false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_47(int iParam0)
{
	return func_103(iParam0);
}

int func_48(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_49(bool bParam0)
{
	if (func_97() == -1)
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

void func_50(int iParam0)
{
	if (!has_ped_got_weapon(Global_34, -1415022764, 0, false))
	{
		return;
	}
	Global_1903071->f_4 = iParam0;
}

void func_51(int iParam0)
{
	Global_1940144->f_39 = (Global_1940144->f_39 || iParam0);
}

void func_52()
{
	if (_0xec6b59be445fec51(Global_34) != 1752953247)
	{
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
		disable_control_action(0, -1292666904, false);
	}
	disable_control_action(0, 278816850, false);
	disable_control_action(0, -762150781, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -620139643, false);
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -349518703, false);
	disable_control_action(0, -1098542161, false);
	disable_control_action(0, -824104112, false);
	disable_control_action(0, 1663574939, false);
	disable_control_action(0, -2128655846, false);
	disable_control_action(0, 516589524, false);
	_0xc9caeaeec1256e54(-1618603322);
	if (_0x6614f9039bd31931(get_player_index(), 8, 0) == 0)
	{
		_0x0751d461f06e41ce(get_player_index(), 8, 0, 1);
	}
	if (!does_entity_exist(Global_34) || is_entity_dead(Global_34))
	{
		return;
	}
	set_ped_max_move_blend_ratio(Global_34, 1.5f);
	set_ped_reset_flag(Global_34, 21, true);
	set_ped_reset_flag(Global_34, 168, true);
	set_ped_reset_flag(Global_34, 6, true);
	if (get_ped_config_flag(Global_34, 334, true) == 0)
	{
		set_ped_config_flag(Global_34, 334, true);
	}
	if (get_ped_config_flag(Global_34, 335, true) == 0)
	{
		set_ped_config_flag(Global_34, 335, true);
	}
	if (get_ped_config_flag(Global_34, 574, true) == 0)
	{
		set_ped_config_flag(Global_34, 574, true);
	}
	if (_get_ped_crouch_movement(Global_34) == 1)
	{
		_set_ped_crouch_movement(Global_34, false, 0, false);
	}
}

bool func_53(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_43((*Global_1298536)[iVar0]->f_86, iParam1);
	}
	return false;
}

void func_54(int iParam0)
{
	if (func_55(iParam0, &uVar0, &uVar3, &uVar4))
	{
		_0x1392105da88bbffb(-347798845, &(uVar0[0]), &(uVar0[1]), uVar4, 0);
		Global_1298378->f_157 = 0;
	}
}

bool func_55(int iParam0, var uParam1, float fParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = 1789.173f;
			(*uParam1)[1] = -817.298f;
			*fParam2 = 190.8f;
			*uParam3 = -140;
			return true;
		case 1:
			(*uParam1)[0] = -1090.785f;
			(*uParam1)[1] = 711.736f;
			*fParam2 = 82.4f;
			*uParam3 = 24;
			return true;
		case 2:
			(*uParam1)[0] = -2774.656f;
			(*uParam1)[1] = -3046.275f;
			*fParam2 = -10.5f;
			*uParam3 = -28;
			return true;
		case 3:
			(*uParam1)[0] = 1629.734f;
			(*uParam1)[1] = 828.163f;
			*fParam2 = 123.1f;
			*uParam3 = -113;
			return true;
		case 4:
			(*uParam1)[0] = -1864.542f;
			(*uParam1)[1] = -1727.507f;
			*fParam2 = 87.5f;
			*uParam3 = 60;
			return true;
	}
	return false;
}

void func_56(int iParam0)
{
	if (iParam0 == 0)
	{
		_0xe057fea9a22eb3ee(-347798845);
	}
	else if (iParam0 == 1)
	{
		_0xe057fea9a22eb3ee(-1136456260);
	}
	else if (iParam0 == 2)
	{
		_0xe057fea9a22eb3ee(518116088);
	}
	else if (iParam0 == 3)
	{
		_0xe057fea9a22eb3ee(2142311577);
	}
	else if (iParam0 == 4)
	{
		_0xe057fea9a22eb3ee(-1846003417);
	}
}

bool func_57()
{
	if (!_does_volume_exist(Global_1298378->f_29.f_10))
	{
		return false;
	}
	if (!does_entity_exist(player_ped_id()))
	{
		return false;
	}
	return is_entity_in_volume(player_ped_id(), Global_1298378->f_29.f_10, false, 0);
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
		func_104(1);
	}
	func_104(0);
	set_bit(&(Global_1957959->f_1), 0);
}

void func_59(var uParam0, int iParam1)
{
	func_105(uParam0, iParam1);
}

bool func_60(int iParam0, int iParam1)
{
	return func_82(iParam0->f_4, iParam1);
}

bool func_61(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0)
	{
		if (!func_47(participant_id()))
		{
			return false;
		}
		iParam2 = participant_id_to_int();
	}
	return func_82((*uParam0)[iParam2]->f_25, iParam1);
}

bool func_62(var uParam0, int iParam1)
{
	if (!func_47(participant_id()))
	{
		return false;
	}
	func_83(&((*uParam0)[participant_id_to_int()]->f_25), iParam1);
	return true;
}

void func_63(var uParam0)
{
	func_106(uParam0, 0f);
}

bool func_64(var uParam0)
{
	return func_107(*uParam0, 1);
}

bool func_65(var uParam0, float fParam1)
{
	if (!func_64(uParam0))
	{
		return false;
	}
	if (func_108(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_66(int iParam0)
{
	return func_60(iParam0, 1);
}

void func_67(var uParam0)
{
	if (!func_62(uParam0, 1))
	{
	}
}

void func_68(int iParam0, int iParam1)
{
	func_83(&(iParam0->f_6), iParam1);
}

void func_69(var uParam0)
{
	iVar0 = player_ped_id();
	*uParam0 = 0;
	uParam0->f_1 = { 0f, 0f, 0f };
	if (func_64(&(uParam0->f_4)))
	{
		func_109(&(uParam0->f_4));
	}
	if (!does_entity_exist(iVar0))
	{
	}
	else if (is_ped_using_any_scenario(iVar0))
	{
		iVar1 = _get_scenario_point_ped_is_using(iVar0, false);
		if (_does_scenario_point_exist(iVar1))
		{
			*uParam0 = 1;
			uParam0->f_1 = { _get_scenario_point_coords(iVar1, true) };
		}
	}
}

void func_70(int iParam0)
{
	func_110(&(Global_1298378->f_156), iParam0);
}

bool func_71(int iParam0)
{
	if (!ped_has_use_scenario_task(iParam0))
	{
		return false;
	}
	if (!is_ped_active_in_scenario(iParam0, 0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	iVar1 = iVar0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar1 == func_111(iVar2, 1))
		{
			return true;
		}
		iVar2++;
	}
	return false;
}

bool func_72(int iParam0, int iParam1)
{
	return func_82(iParam0->f_5, iParam1);
}

void func_73(var uParam0, int iParam1)
{
	if (network_is_host_of_this_script())
	{
		func_99(&(uParam0->f_196), iParam1);
	}
}

bool func_74(var uParam0, var uParam1, int iParam2)
{
	iParam2->f_242.f_1 = 0;
	if (!network_is_host_of_this_script())
	{
		if (!func_20(uParam1, 8))
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	if (!_network_is_player_index_valid(*iParam2) || !network_is_player_active(*iParam2))
	{
		return false;
	}
	if (!func_20(uParam1, 8))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam1->f_46.f_1[iVar0] = func_112(*iParam2, iVar0, 1);
			iVar0++;
		}
		uParam1->f_46 = func_113(*iParam2, 1);
		func_21(uParam1, 8);
	}
	return true;
}

bool func_75(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (iParam1 == iVar0 || is_bit_set(&(uParam0->f_1[iVar0]), iVar0))
		{
			if (func_114(uParam0, iVar0) != iParam2)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_76(int iParam0)
{
	return func_72(iParam0, 2);
}

bool func_77(var uParam0, int iParam1)
{
	if (!func_47(participant_id()))
	{
		return false;
	}
	func_99(&((*uParam0)[participant_id_to_int()]->f_25), iParam1);
	return true;
}

bool func_78(var uParam0)
{
	iVar0 = player_ped_id();
	if ((!does_entity_exist(iVar0) || func_115(iVar0)) || _0x3ab6c7b0bb0df4b1(iVar0, -1))
	{
		return true;
	}
	else if (*uParam0)
	{
		if (!func_116(uParam0->f_1))
		{
			iVar3 = _get_scenario_point_close_to_coords(uParam0->f_1, 0.1f, &uVar1, 1);
			if (iVar3 > 0 && func_117(&(uVar1[0])))
			{
				if (!is_ped_using_any_scenario(iVar0))
				{
					_task_use_scenario_point(iVar0, &(uVar1[0]), 0, 0, false, true, 0, false, -1f, false);
					*uParam0 = 0;
				}
			}
			else if (!func_64(&(uParam0->f_4)))
			{
				func_63(&(uParam0->f_4));
				return false;
			}
			else
			{
				return func_65(&(uParam0->f_4), 3f);
			}
		}
	}
	return true;
}

void func_79(int iParam0, bool bParam1)
{
	func_118(iParam0, &iVar0, &iVar1);
	if (!func_119(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_120(iVar0, iVar1);
}

void func_80(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, var uParam6)
{
	switch (uParam1->f_2)
	{
		case 0:
			if (func_121(uParam1, uParam0, uParam4, iParam5, uParam6))
			{
				uParam1->f_2 = 1;
			}
			break;
		case 1:
			if (func_122(uParam1, uParam0, uParam4, iParam5, uParam6))
			{
				uParam1->f_2 = 2;
			}
			break;
		case 2:
			if (*uParam1 == 0)
			{
				uParam1->f_2 = 3;
			}
			else if (func_123(uParam1, iParam2, uParam3))
			{
				uParam1->f_2 = 3;
			}
			break;
		case 3:
			if (func_124(uParam1, uParam0, uParam4, iParam5, uParam6))
			{
				uParam1->f_2 = 4;
			}
			break;
		case 4:
			if (func_125(uParam1, uParam0, uParam4, iParam5, uParam6))
			{
				uParam1->f_2 = 5;
			}
			break;
		case 5:
			if (func_100(uParam1, uParam0, uParam4, iParam5, uParam6, 0, 0))
			{
				uParam1->f_2 = 6;
			}
			break;
		case 6:
			func_126(uParam1, uParam0, uParam4, iParam5, uParam6);
			break;
	}
}

void func_81(var uParam0)
{
	func_133(uParam0->f_1[0], 12569, 12654, 12687, 12722, 12751, 12830, 0);
	func_133(uParam0->f_1[1], 12941, 12972, 13027, 13389, 13454, 13515, func_140(0));
	func_133(uParam0->f_1[2], 13537, 13596, 13641, 13693, 13717, 13747, func_140(0));
	func_133(uParam0->f_1[3], 13755, 13764, 13773, 14071, 14093, 14143, func_140(1));
	func_133(uParam0->f_1[4], 14151, 14160, 14169, 14178, 14202, 14226, func_140(0));
	func_133(uParam0->f_1[5], 14234, 14313, 14392, 14401, 14420, 14475, func_140(0));
	func_133(uParam0->f_1[7], 14483, 14492, 14501, 14510, 14531, 14546, func_140(0));
	func_133(uParam0->f_1[6], 14554, 14574, 14597, 14606, 14626, 14644, func_140(0));
	func_133(uParam0->f_1[8], 14652, 14661, 14670, 14679, 14688, 14697, func_140(3));
	func_133(uParam0->f_1[9], 14705, 14725, 14751, 14760, 14830, 14848, func_140(1));
	func_133(uParam0->f_1[10], 14856, 14865, 14874, 14883, 14905, 14930, func_140(0));
	func_133(uParam0->f_1[11], 14938, 14947, 14956, 14965, 14989, 14998, func_140(0));
	func_133(uParam0->f_1[12], 15006, 15036, 15059, 15068, 15219, 15228, (func_140(10) || func_140(11)));
	func_133(uParam0->f_1[13], 15236, 15381, 15468, 15681, 16020, 16131, func_140(0));
}

bool func_82(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_83(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_84(var uParam0, int iParam1)
{
	Var6 = Global_1071686->f_28448[50]->f_3;
	Var6.f_2 = -2002424295;
	Var6.f_3 = func_213(uParam0->f_2);
	if (!_datafile_get_data_node_index(&(Var6.f_1), &Var6))
	{
		return;
	}
	uVar11 = Var6.f_1;
	Var6.f_2 = -1467009352;
	iVar2 = _datafile_get_num_nodes(&Var6);
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		Var6.f_1 = uVar11;
		Var6.f_2 = 1083769795;
		Var6.f_3 = iVar0;
		if (!_datafile_get_data_node_index(&(Var6.f_1), &Var6))
		{
		}
		else
		{
			uVar12 = Var6.f_1;
			Var6.f_2 = 528171638;
			if (!_datafile_get_hash(&iVar4, &Var6))
			{
			}
			else
			{
				iVar13 = iVar4;
				iVar5 = func_214(iVar13, 1);
				if (iVar5 == -1)
				{
				}
				else
				{
					StringCopy(&cVar24, func_215(iVar13), 64);
					if (_does_volume_exist(&(iParam1->f_1672[iVar5])))
					{
					}
					else
					{
						iParam1->f_1672[iVar5] = _create_volume_aggregate_with_custom_name(&cVar24);
						Var6.f_2 = -85904298;
						iVar3 = _datafile_get_num_nodes(&Var6);
						iVar1 = 0;
						while (iVar1 <= (iVar3 - 1))
						{
							Var6.f_1 = uVar12;
							Var6.f_2 = -204010186;
							Var6.f_3 = iVar1;
							if (!_datafile_get_data_node_index(&(Var6.f_1), &Var6))
							{
							}
							else
							{
								Var6.f_2 = 701345319;
								if (!_datafile_get_hash(&iVar4, &Var6))
								{
								}
								else
								{
									iVar23 = iVar4;
									Var6.f_2 = -1084365561;
									if (!_datafile_get_vector(&vVar14, &Var6))
									{
									}
									else
									{
										Var6.f_2 = 2021743591;
										if (!_datafile_get_vector(&vVar17, &Var6))
										{
										}
										else
										{
											Var6.f_2 = -600021699;
											if (!_datafile_get_vector(&vVar20, &Var6))
											{
											}
											else
											{
												_0x12fcaa23f2320422(&(iParam1->f_1672[iVar5]), iVar23, vVar14, vVar17, vVar20);
											}
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_85(int iParam0)
{
	iVar0 = 0;
	iVar1 = iParam0;
	if (is_bit_set(iParam0, 31))
	{
		iVar0++;
		iParam0 ^= -1;
	}
	while (iParam0 > 1)
	{
		iParam0 = shift_right(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_86(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_87(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_110(uParam0, iParam1);
	}
	else
	{
		func_59(uParam0, iParam1);
	}
	switch (iParam1)
	{
		case 16:
			_0x3e93dddcbb6111e4("RDRO.MoonshineBar.BandStartsSong", to_float(func_216(bParam2)));
			break;
		case 32:
			_0x3e93dddcbb6111e4("RDRO.MoonshineBar.AfterSong", to_float(func_216(bParam2)));
			break;
		case 64:
			_0x3e93dddcbb6111e4("RDRO.MoonshineBar.PlayerJoinsBand", to_float(func_216(bParam2)));
			break;
		case 256:
			_0x3e93dddcbb6111e4("RDRO.MoonshineBar.HeckleBand", to_float(func_216(bParam2)));
			break;
		case 512:
			_0x3e93dddcbb6111e4("RDRO.MoonshineBar.HeckleBandDrunk", to_float(func_216(bParam2)));
			break;
		case 128:
			_0x3e93dddcbb6111e4("RDRO.MoonshineBar.EnjoyBand", to_float(func_216(bParam2)));
			break;
		case 2:
			_0x3e93dddcbb6111e4("RDRO.MoonshineBar.StrongMoonshine", to_float(func_216(bParam2)));
			break;
		case 1:
			_0x3e93dddcbb6111e4("RDRO.MoonshineBar.TastyMoonshine", to_float(func_216(bParam2)));
			break;
		case 8:
			_0x3e93dddcbb6111e4("RDRO.MoonshineBar.PoorDecor", to_float(func_216(bParam2)));
			break;
		case 4:
			_0x3e93dddcbb6111e4("RDRO.MoonshineBar.FancyDecor", to_float(func_216(bParam2)));
			break;
	}
}

bool func_88(int iParam0)
{
	if (func_217(iParam0))
	{
		return is_bit_set(Global_1298166->f_201, iParam0);
	}
	return false;
}

int func_89(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((*Global_1248240)[iVar0]->f_559 != iParam0)
		{
		}
		else if (bParam2 && !func_218(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && (*Global_1237665)[iVar0]->f_15 != iParam1)
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

int func_90(int iParam0, bool bParam1)
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

void func_91()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_219(iVar0, &Local_245, &Local_1110);
				break;
			default:
				break;
		}
		iVar0++;
	}
}

void func_92(var uParam0, int iParam1)
{
	iVar1 = iParam1->f_1679;
	iVar0 = participant_id_to_int();
	iVar2 = get_player_ped(player_id());
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_220(iVar2, &(iParam1->f_1672[iVar1]), 1, 0))
	{
		set_bit(&((*uParam0)[iVar0]->f_26), iVar1);
	}
	else
	{
		clear_bit(&((*uParam0)[iVar0]->f_26), iVar1);
	}
	iParam1->f_1679 = (iParam1->f_1679 + 1 % 6);
}

void func_93(int iParam0)
{
	if (!is_bit_set(iParam0->f_1247, participant_id_to_int()))
	{
		func_221(iParam0, 0);
	}
	else
	{
		func_221(iParam0, 1);
	}
}

void func_94(var uParam0, int iParam1)
{
	if (func_53(get_player_index(), 1))
	{
		if (!does_blip_exist(iParam1->f_1250))
		{
			iParam1->f_1250 = _blip_add_for_coord(168093330, func_222(uParam0->f_2, 0));
			set_blip_sprite(iParam1->f_1250, -2029148647, true);
			_blip_set_modifier(iParam1->f_1250, 847579139);
			set_blip_flash_timer(iParam1->f_1250, 37, -1058262858);
		}
		if (func_112(*iParam1, 0, 1) > 0)
		{
			if (!does_blip_exist(iParam1->f_1251))
			{
				iParam1->f_1251 = _blip_add_for_coord(168093330, _0xf70f00013a62f866(func_223(uParam0->f_2)));
				set_blip_sprite(iParam1->f_1251, 553094466, true);
				_blip_set_modifier(iParam1->f_1251, 847579139);
				set_blip_flash_timer(iParam1->f_1251, 33, 1025033373);
			}
		}
	}
}

void func_95(var uParam0, int iParam1)
{
	if (func_224(iParam1) == 0)
	{
		if (func_43(*uParam0, 4))
		{
			func_87(uParam0, 4, 0);
		}
		if (!func_43(*uParam0, 8))
		{
			func_87(uParam0, 8, 1);
		}
	}
	else
	{
		if (func_43(*uParam0, 8))
		{
			func_87(uParam0, 8, 0);
		}
		if (!func_43(*uParam0, 4))
		{
			func_87(uParam0, 4, 1);
		}
	}
}

void func_96(var uParam0, int iParam1)
{
	if (!func_43(*uParam0, 1))
	{
		if (func_225(iParam1) != 0)
		{
			func_87(uParam0, 1, 1);
		}
	}
	else if (func_225(iParam1) == 0)
	{
		func_87(uParam0, 1, 0);
	}
	if (!func_43(*uParam0, 2))
	{
		if (func_226(iParam1) == 1847740267)
		{
			func_87(uParam0, 2, 1);
		}
	}
	else if (func_226(iParam1) != 1847740267)
	{
		func_87(uParam0, 2, 0);
	}
}

int func_97()
{
	return Global_1572887->f_13;
}

bool func_98()
{
	return Global_1051252->f_8;
}

void func_99(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_100(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (is_bit_set(uParam0->f_1, 4))
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(iParam3);
		Stack.Push(uParam4);
		Stack.Push(bParam5);
		Stack.Push(bParam6);
		Call_Loc(uParam0->f_7);
		return StackVal;
	}
	return func_227(uParam1, uParam2, iParam3, uParam4, bParam5, bParam6);
}

void func_101(int iParam0, bool bParam1)
{
	bVar0 = (func_228(iParam0) && !bParam1);
	if (!bVar0 && !func_229(iParam0, 65536))
	{
		if (does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
		{
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_72[iParam0]->f_21))
			{
				set_entity_as_mission_entity(Global_1051439->f_72[iParam0]->f_21, true, true);
			}
			delete_entity(&(Global_1051439->f_72[iParam0]->f_21));
			Global_1051439->f_72[iParam0]->f_21 = 0;
		}
		if (is_model_valid(Global_1051439->f_72[iParam0]->f_19))
		{
			set_model_as_no_longer_needed(Global_1051439->f_72[iParam0]->f_19);
		}
		Global_1051439->f_72[iParam0]->f_19 = 0;
	}
	else if (func_230(iParam0, 67108864) && does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
	{
		_0xe98d55c5983f2509(Global_1051439->f_72[iParam0]->f_21);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24))
	{
		_0xa35e7bf20fa269e0(Global_1051439->f_72[iParam0]->f_24);
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_24);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_24);
		if (func_229(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_24);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_25))
	{
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_25);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_25);
		if (func_229(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_25);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_27))
	{
		if (func_229(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_27);
		}
	}
	if (func_230(iParam0, 16384) && !bVar0)
	{
		if (_does_scenario_point_exist(Global_1051439->f_72[iParam0]->f_6))
		{
			iVar1 = _get_scenario_point_entity(Global_1051439->f_72[iParam0]->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			if (does_entity_exist(iVar1))
			{
				set_entity_as_no_longer_needed(&iVar1);
			}
			_delete_scenario_point(Global_1051439->f_72[iParam0]->f_6);
		}
		Global_1051439->f_72[iParam0]->f_6 = 0;
		func_231(iParam0, 16384);
	}
	Global_1051439->f_72[iParam0] = -1;
	Global_1051439->f_72[iParam0]->f_3 = { 0f, 0f, 0f };
	Global_1051439->f_72[iParam0]->f_48 = 0;
	Global_1051439->f_72[iParam0]->f_73 = 1;
	Global_1915715->f_3[iParam0]->f_16 = 0;
	iVar3 = func_232(iParam0);
	if (iVar3 >= 15)
	{
		Global_1915715->f_3[iParam0]->f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_233(&(Global_1051439->f_72[iParam0]->f_31[iVar2]));
			Global_1051439->f_72[iParam0]->f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051439->f_72[iParam0]->f_47 = 0;
	}
	func_234(iParam0);
	if (func_229(iParam0, 262144))
	{
		Global_1051439->f_72[iParam0]->f_49 = 262144;
	}
	else
	{
		func_235(iParam0);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24) && func_236(iParam0, 2))
	{
		_0xfd010a2154b40676(Global_1051439->f_72[iParam0]->f_24, 623901053);
		_0x2c87c3e1c7b96ee2(Global_1051439->f_72[iParam0]->f_24);
	}
	func_237(iParam0);
	Global_1051439->f_72[iParam0]->f_1 &= 2113536;
	func_238(iParam0);
	Global_1051439->f_72[iParam0]->f_18 = -1;
	Global_1051439->f_72[iParam0]->f_2 = -1;
}

float func_102(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_103(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return 0;
	}
	return 1;
}

void func_104(int iParam0)
{
	if (!func_239(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_105(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_106(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_240() - fParam1);
	func_241(uParam0, 1);
	func_242(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_107(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_108(var uParam0)
{
	if (!func_64(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_243(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_240() - uParam0->f_1);
}

void func_109(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_110(var uParam0, int iParam1)
{
	func_244(uParam0, iParam1);
}

int func_111(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 0:
					iVar0 = -557333917;
					break;
				case 1:
					iVar0 = 376983677;
					break;
				case 2:
					iVar0 = 1336579020;
					break;
				case 3:
					iVar0 = 658733129;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					iVar0 = 91471551;
					break;
				case 1:
					iVar0 = 1504407535;
					break;
				case 2:
					iVar0 = -2027299560;
					break;
				case 3:
					iVar0 = 1307314385;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1515427200;
					break;
				case 1:
					iVar0 = -248120522;
					break;
				case 2:
					iVar0 = 492744485;
					break;
				case 3:
					iVar0 = -1631851776;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = -584876158;
					break;
				case 1:
					iVar0 = -768776184;
					break;
				case 2:
					iVar0 = 697996287;
					break;
				case 3:
					iVar0 = -1955581039;
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1444088734;
					break;
				case 1:
					iVar0 = 1545086067;
					break;
				case 2:
					iVar0 = 1841334253;
					break;
				case 3:
				case 4:
					iVar0 = 2012697591;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = 696436162;
					break;
				case 1:
					iVar0 = -1903889587;
					break;
				case 2:
					iVar0 = 750229998;
					break;
				case 3:
					iVar0 = -20233099;
					break;
			}
			break;
	}
	return iVar0;
}

int func_112(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!network_is_player_active(iParam0))
		{
			return 0;
		}
	}
	return &((*Global_1298536)[iParam0]->f_5[iParam1]);
}

int func_113(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!network_is_player_active(iParam0))
		{
			return 0;
		}
	}
	return (*Global_1298536)[iParam0]->f_5.f_11;
}

int func_114(var uParam0, int iParam1)
{
	if (func_245(iParam1))
	{
		return uParam0->f_1[iParam1]->f_2;
	}
	return 6;
}

bool func_115(int iParam0)
{
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	iVar1 = iVar0;
	if (((((iVar1 == 376983677 || iVar1 == 1504407535) || iVar1 == -248120522) || iVar1 == -768776184) || iVar1 == 1545086067) || iVar1 == -1903889587)
	{
		return true;
	}
	return false;
}

bool func_116(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_117(int iParam0)
{
	if (!_does_scenario_point_exist(iParam0))
	{
		return false;
	}
	iVar0 = _get_ped_using_scenario_point(iParam0);
	if (does_entity_exist(iVar0))
	{
		return false;
	}
	return true;
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_119(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_246(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_247(iParam0))
	{
		return false;
	}
	if (func_248(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_249(iParam0, 1)) || func_250(32768))
	{
		if (!func_249(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_251())
	{
		return false;
	}
	return true;
}

void func_120(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

int func_121(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	if (is_bit_set(uParam0->f_1, 0))
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(iParam3);
		Stack.Push(uParam4);
		Call_Loc(uParam0->f_3);
		return StackVal;
	}
	return func_252(uParam1, uParam2, iParam3, uParam4);
}

int func_122(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	if (is_bit_set(uParam0->f_1, 1))
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(iParam3);
		Stack.Push(uParam4);
		Call_Loc(uParam0->f_4);
		return StackVal;
	}
	return func_253(uParam1, uParam2, iParam3, uParam4);
}

bool func_123(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (iVar0 != iParam1)
		{
			if (is_bit_set(*uParam0, iVar0))
			{
				if (func_114(uParam2, iVar0) != 4)
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

int func_124(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	if (is_bit_set(uParam0->f_1, 2))
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(iParam3);
		Stack.Push(uParam4);
		Call_Loc(uParam0->f_5);
		return StackVal;
	}
	return func_254(uParam1, uParam2, iParam3, uParam4);
}

int func_125(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	if (is_bit_set(uParam0->f_1, 3))
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(iParam3);
		Stack.Push(uParam4);
		Call_Loc(uParam0->f_6);
		return StackVal;
	}
	return func_255(uParam1, uParam2, iParam3, uParam4);
}

void func_126(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	if (is_bit_set(uParam0->f_1, 4))
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(iParam3);
		Stack.Push(uParam4);
		Call_Loc(uParam0->f_8);
		return;
	}
	func_256(uParam1, uParam2, iParam3, uParam4);
}

int func_127(var uParam0, var uParam1, int iParam2, var uParam3)
{
	if (!func_74(uParam0, uParam1, iParam2))
	{
		return 0;
	}
	if (&uParam1->f_46.f_1[1] > 0)
	{
		func_70(16384);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_257(iVar0, Global_1298378->f_29.f_11);
		iVar0++;
	}
	func_258(iParam2);
	return 1;
}

int func_128(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_259(uParam0, uParam1, uParam2))
	{
		return 0;
	}
	func_260(128);
	return 1;
}

int func_129(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_261(uParam0->f_2, &(uParam2->f_1637)))
	{
	}
	func_262(uParam0->f_2, 1);
	return 1;
}

int func_130(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_263(uParam0, uParam2);
	func_264(uParam0->f_2, uParam3, uParam2);
	return 0;
}

int func_131(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	func_265(uParam0, uParam2);
	func_266(uParam0, uParam1, uParam2, uParam4, uParam5);
	func_267(uParam0->f_2, &(uParam2->f_1637));
	func_262(uParam0->f_2, 0);
	if (uParam4 && uParam5)
	{
		func_268(uParam2);
	}
	uParam2->f_1618.f_9 = 0;
	return 1;
}

void func_132(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

void func_133(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_3 = iParam1;
	set_bit(&(uParam0->f_1), 0);
	uParam0->f_4 = iParam2;
	set_bit(&(uParam0->f_1), 1);
	uParam0->f_5 = iParam3;
	set_bit(&(uParam0->f_1), 2);
	uParam0->f_6 = iParam4;
	set_bit(&(uParam0->f_1), 3);
	uParam0->f_7 = iParam5;
	set_bit(&(uParam0->f_1), 4);
	uParam0->f_8 = iParam6;
	set_bit(&(uParam0->f_1), 5);
	*uParam0 = iParam7;
}

int func_134(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_269(uParam0);
	func_270(uParam0->f_2);
	func_271(uParam0->f_2);
	return 1;
}

int func_135(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_272(uParam0))
	{
		return 0;
	}
	if (!func_273(uParam0->f_2))
	{
		return 0;
	}
	if (!func_274(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_136(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_275(uParam0, uParam1, uParam2))
	{
		return 0;
	}
	if (!func_276())
	{
		return 0;
	}
	if (!_does_volume_exist(uParam2->f_1252.f_159))
	{
		uParam2->f_1252.f_159 = func_277(uParam0->f_2);
	}
	if (!_does_volume_exist(uParam2->f_1252.f_160))
	{
		uParam2->f_1252.f_160 = func_223(uParam0->f_2);
	}
	if (!_does_volume_exist(uParam2->f_1252.f_161))
	{
		uParam2->f_1252.f_161 = func_278(uParam0->f_2);
	}
	if (!func_279(uParam0->f_2, uParam2))
	{
		return 0;
	}
	if (!func_280(uParam0->f_2, uParam2))
	{
		return 0;
	}
	if (&uParam1->f_46.f_1[0] > 0)
	{
		if (network_get_player_from_gamer_handle(&(uParam0->f_3)) == player_id())
		{
			if (!_does_volume_exist(uParam2->f_1252.f_159))
			{
				uParam2->f_1252.f_159 = func_277(uParam0->f_2);
			}
			if (!_does_volume_exist(uParam2->f_1252.f_160))
			{
				uParam2->f_1252.f_160 = func_223(uParam0->f_2);
			}
			func_281(33, uParam2->f_1252.f_159, -1, uParam2->f_1252.f_160, 0, 14, 0, 0, -1082130432, 0);
			func_282(33, 16384);
			func_282(33, 32768);
			func_283(33, 4096);
		}
		func_284(&(uParam2->f_1236[0]), 134, 2);
	}
	if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(-254133531, 0, 0)))
	{
		_0x7c32191d9fb2bdea(_0x8e84119a23c16623(-254133531, 0, 0));
	}
	return 1;
}

int func_137(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (Global_1048584 || (Global_1298166->f_1 == 4 && !func_53(player_id(), 64)))
	{
		func_70(131072);
	}
	else
	{
		func_11(131072);
	}
	return 0;
}

int func_138(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5)
{
	func_285(uParam2);
	func_286(uParam2);
	func_287((*Global_1298536)[&Global_1296859]->f_19.f_22);
	if (!func_288(uParam0, uParam1, uParam2, bParam4, uParam5))
	{
		return 0;
	}
	return 1;
}

void func_139(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_140(int iParam0)
{
	return func_86(iParam0);
}

int func_141(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (&uParam1->f_46.f_1[3] > 0)
	{
		if (!func_289(uParam1, &(uParam2->f_519), *uParam2, uParam0->f_2, uParam1->f_46, &(uParam1->f_46.f_1), 1))
		{
			return 0;
		}
	}
	return 1;
}

int func_142(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (&uParam1->f_46.f_1[3] > 0)
	{
		if (!func_290(&(uParam2->f_519), &(uParam1->f_46.f_1)))
		{
			return 0;
		}
	}
	return 1;
}

int func_143(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (&uParam1->f_46.f_1[3] > 0)
	{
		if (!func_291(uParam0->f_2, uParam1, &(uParam2->f_519), *uParam2, uParam0->f_1))
		{
			return 0;
		}
	}
	return 1;
}

int func_144(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_292(uParam1, &(uParam2->f_519), uParam0->f_1);
	return 0;
}

int func_145(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5)
{
	if (!func_293(uParam1, &(uParam2->f_519), bParam4))
	{
		return 0;
	}
	return 1;
}

void func_146(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_147(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_148(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_149(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (&uParam1->f_46.f_1[0] > 0)
	{
		if (!does_entity_exist(uParam2->f_1252.f_96))
		{
			uParam2->f_1252.f_122 = &uParam2->f_1236[1];
			uParam2->f_1252.f_96 = func_294(&(uParam2->f_1236[1]));
			return 0;
		}
		if (!_does_scenario_point_exist(uParam2->f_1252.f_128))
		{
			uParam2->f_1252.f_128 = &uParam2->f_1241[0];
			return 0;
		}
		if (!_does_scenario_point_exist(uParam2->f_1252.f_130))
		{
			uParam2->f_1252.f_130 = &uParam2->f_1241[1];
			return 0;
		}
		if (!_does_scenario_point_exist(uParam2->f_1252.f_131))
		{
			uParam2->f_1252.f_131 = &uParam2->f_1241[2];
			return 0;
		}
		if (!_does_scenario_point_exist(uParam2->f_1252.f_132))
		{
			uParam2->f_1252.f_132 = &uParam2->f_1241[3];
			return 0;
		}
	}
	if (!does_entity_exist(uParam2->f_1252.f_97))
	{
		uParam2->f_1252.f_123 = &uParam2->f_1236[0];
		uParam2->f_1252.f_97 = func_294(&(uParam2->f_1236[0]));
		return 0;
	}
	if (!_does_scenario_point_exist(uParam2->f_1252.f_133))
	{
		uParam2->f_1252.f_133 = &uParam2->f_1241[4];
		return 0;
	}
	return 1;
}

int func_150(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_295(uParam1, uParam3, uParam2, uParam0);
	return 0;
}

int func_151(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5)
{
	if (network_is_host_of_this_script())
	{
		func_296(&(uParam1->f_166), uParam3, uParam2);
	}
	if (!func_297(&(uParam1->f_166), uParam3, uParam2, bParam4))
	{
		return 0;
	}
	return 1;
}

void func_152(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_153(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_154(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_155(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_156(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_298(uParam0, &(uParam1->f_224), &(uParam2->f_1618));
	return 0;
}

int func_157(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5)
{
	func_299(&(uParam1->f_224), &(uParam2->f_1618), bParam4);
	return 1;
}

void func_158(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_159(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!_request_scenario_type(-2114469108, 15, 0, 0))
	{
		return 0;
	}
	if (!_request_scenario_type(-2007463055, 15, 0, 0))
	{
		return 0;
	}
	func_300(uParam1, uParam2);
	request_model(-1891242011, false);
	request_model(1627871020, false);
	return 1;
}

int func_160(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (has_model_loaded(-1891242011) == 0)
	{
		return 0;
	}
	if (has_model_loaded(1627871020) == 0)
	{
		return 0;
	}
	if (_has_scenario_type_loaded(-2114469108, false) == 0)
	{
		return 0;
	}
	if (_has_scenario_type_loaded(-2007463055, false) == 0)
	{
		return 0;
	}
	return 1;
}

int func_161(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_162(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_301(uParam1, uParam2, uParam3);
	return 0;
}

int func_163(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	set_model_as_no_longer_needed(1627871020);
	set_model_as_no_longer_needed(-1891242011);
	_0x4eddd9e9ca5af985(-2114469108);
	_0x4eddd9e9ca5af985(-2007463055);
	func_302(uParam1, uParam2);
	return 1;
}

void func_164(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_165(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_166(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_167(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_168(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_303(uParam1, uParam3, uParam2, uParam0);
	return 0;
}

int func_169(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	func_304(uParam2);
	return 1;
}

void func_170(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_171(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_305(uParam0, &(uParam2->f_308));
	return 1;
}

int func_172(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_306(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_173(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_174(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_307(&(uParam2->f_308), uParam3);
	return 0;
}

int func_175(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	func_308(&(uParam2->f_308));
	return 1;
}

void func_176(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_177(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_178(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_179(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_180(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 0;
}

int func_181(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	return 1;
}

void func_182(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_183(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_309(uParam3, &(uParam2->f_385));
	return 1;
}

int func_184(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_310(&(uParam2->f_385)))
	{
		return 0;
	}
	return 1;
}

int func_185(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_186(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_311(uParam2);
	func_312(uParam3, &(uParam2->f_385), uParam0);
	func_313(uParam3, uParam2);
	func_314(uParam3, uParam2);
	func_315(uParam3, &(uParam2->f_385), uParam0);
	func_316(uParam3, &(uParam2->f_385), uParam0);
	return 0;
}

int func_187(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	func_317(&(uParam2->f_385));
	return 1;
}

void func_188(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_189(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_190(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_191(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_192(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_318(uParam1, uParam3, uParam2, uParam0);
	return 0;
}

int func_193(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5)
{
	func_319(&(uParam1->f_58), uParam3, uParam2, bParam4, uParam5);
	return 1;
}

void func_194(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_195(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_196(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_197(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_198(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_320(&(uParam2->f_1146), uParam0, &(uParam1->f_58));
	return 0;
}

int func_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	return 1;
}

void func_200(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_201(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_321(uParam2, 1);
	func_322(uParam2, 1, 1);
	func_323(uParam2);
	return 1;
}

int func_202(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_324(uParam2))
	{
		return 0;
	}
	return 1;
}

int func_203(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

int func_204(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_325(&(uParam1->f_58), 0) || func_326(&(uParam1->f_58)) != 2)
	{
		func_327(uParam2);
		func_328();
		return 0;
	}
	bVar0 = func_71(get_player_ped(get_player_index()));
	bVar1 = func_329(&(uParam2->f_1146));
	if (bVar0 || bVar1)
	{
		func_332(uParam2, func_330(uParam0->f_2), func_331(uParam0->f_2));
		if (!func_333(905))
		{
			if (func_334())
			{
				func_79(905, 0);
			}
		}
	}
	else
	{
		func_327(uParam2);
		func_328();
	}
	return 0;
}

int func_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	return 1;
}

void func_206(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_207(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (uParam1->f_46 == 3)
	{
		if (!func_335(-987167647, &(uParam2->f_1649), func_213(uParam0->f_2), 0, 0))
		{
		}
	}
	else if (uParam1->f_46 == 5)
	{
		if (!func_335(440093147, &(uParam2->f_1649), func_213(uParam0->f_2), 0, 0))
		{
		}
	}
	else if (!func_335(714595051, &(uParam2->f_1649), func_213(uParam0->f_2), 0, 0))
	{
	}
	if (!func_336(589313231, &(uParam2->f_1649.f_3), func_213(uParam0->f_2), 0, 0))
	{
	}
	return 1;
}

int func_208(var uParam0, var uParam1, var uParam2, var uParam3)
{
	request_model(-425139137, false);
	if (!has_model_loaded(-425139137))
	{
		return 0;
	}
	if (!func_116(uParam2->f_1649))
	{
		uParam2->f_1649.f_4 = _create_volume_cylinder(uParam2->f_1649, 0f, 0f, 0f, 1.5f, 1.5f, 1.5f);
	}
	return 1;
}

int func_209(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!does_entity_exist(uParam2->f_1649.f_6))
	{
		uParam2->f_1649.f_6 = create_object(-425139137, uParam2->f_1649, false, true, false, false, false);
		return 0;
	}
	freeze_entity_position(uParam2->f_1649.f_6, true);
	set_entity_collision(uParam2->f_1649.f_6, false, false);
	set_entity_proofs(uParam2->f_1649.f_6, 8, false);
	set_entity_coords(uParam2->f_1649.f_6, uParam2->f_1649, true, false, true, true);
	set_entity_heading(uParam2->f_1649.f_6, uParam2->f_1649.f_3);
	uParam2->f_1649.f_7 = func_337("MS_GUEST_LIST", -473983589, uParam2->f_1649.f_4, 3, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	func_338(uParam2->f_1649.f_7, 0, 0, 1);
	func_339(uParam2->f_1649.f_7, 0, 0);
	return 1;
}

int func_210(var uParam0, var uParam1, var uParam2, var uParam3)
{
	bVar0 = ((((((does_entity_exist(Global_34) && !is_entity_dead(Global_34)) && *uParam2 == player_id()) && !func_340()) && func_112(*uParam2, 3, 1) > 0) && uParam2->f_1658) && !_0xec7e480ff8bd0bed(Global_34));
	bVar1 = (func_341(uParam2->f_1649.f_7) && func_342(uParam2->f_1649.f_7, 0));
	if (bVar1)
	{
		if (!does_blip_exist(uParam2->f_1649.f_5))
		{
			uParam2->f_1649.f_5 = _blip_add_for_coord(422991367, uParam2->f_1649);
			_blip_set_modifier(uParam2->f_1649.f_5, -211388321);
			set_blip_name_from_text_file(uParam2->f_1649.f_5, "MS_GUEST_LIST");
		}
	}
	else if (does_blip_exist(uParam2->f_1649.f_5))
	{
		remove_blip(&(uParam2->f_1649.f_5));
	}
	if (bVar1)
	{
		if (!bVar0)
		{
			func_338(uParam2->f_1649.f_7, 0, 0, 1);
			func_339(uParam2->f_1649.f_7, 0, 0);
			return 0;
		}
	}
	else if (bVar0)
	{
		func_338(uParam2->f_1649.f_7, 1, 0, 1);
		func_339(uParam2->f_1649.f_7, 1, 0);
	}
	else
	{
		return 0;
	}
	if (bVar0 && func_343(uParam2->f_1649.f_7, 1))
	{
		func_344(4, 0);
	}
	return 0;
}

int func_211(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (does_blip_exist(uParam2->f_1649.f_5))
	{
		remove_blip(&(uParam2->f_1649.f_5));
	}
	if (func_341(uParam2->f_1649.f_7))
	{
		func_345(&(uParam2->f_1649.f_7), 1, 1);
	}
	if (_does_volume_exist(uParam2->f_1649.f_4))
	{
		_delete_volume(uParam2->f_1649.f_4);
	}
	if (does_entity_exist(uParam2->f_1649.f_6))
	{
		delete_entity(&(uParam2->f_1649.f_6));
	}
	return 1;
}

void func_212(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 680390016;
		case 1:
			return -2070886255;
		case 2:
			return 1821948827;
		case 3:
			return -1823593561;
		case 4:
			return -1930045261;
		default:
			break;
	}
	return -1588462292;
}

int func_214(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -530470250:
			return 0;
		case 532942402:
			return 4;
		case 1130400244:
			return 3;
		case 1661805647:
			return 5;
		case 1664448590:
			return 1;
		case 2074903374:
			return 2;
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

char* func_215(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

int func_216(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_217(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 2);
}

bool func_218(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = network_player_id_to_int();
	}
	return (func_346(iParam0) && func_82((*(*Global_1238240)[iParam2])[iParam0]->f_19, iParam1));
}

void func_219(int iParam0, var uParam1, int iParam2)
{
	get_event_data(1, iParam0, &iVar9, 4);
	switch (iVar9)
	{
		case 13:
			if (func_347(&iVar0, iParam0))
			{
				func_348(&iVar0, uParam1, iParam2);
			}
			break;
		default:
			break;
	}
}

bool func_220(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, bParam2, iParam3);
}

void func_221(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		iVar1 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar1))
		{
			iVar2 = network_get_player_index(iVar1);
			if (network_is_player_a_participant(iVar2))
			{
				if (!is_bit_set(iParam0->f_1247, iVar0))
				{
					if (iParam1 == 1)
					{
						func_350("PVP_ENTER_BAR", iVar2, func_349(iVar2, 1, -1, 0));
					}
					set_bit(&(iParam0->f_1247), iVar0);
				}
			}
			else if (is_bit_set(iParam0->f_1247, iVar0))
			{
				clear_bit(&(iParam0->f_1247), iVar0);
			}
		}
		else if (is_bit_set(iParam0->f_1247, iVar0))
		{
			clear_bit(&(iParam0->f_1247), iVar0);
		}
		iVar0++;
	}
}

Vector3 func_222(int iParam0, int iParam1)
{
	func_352(-2142057862, func_213(iParam0), func_351(iParam1), 0);
	if (!_datafile_get_vector(&vVar0, &(Global_1298378->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

int func_223(int iParam0)
{
	return func_353(-1272267439, 1680544093, 314336617, 432615923, 1221402645, 2020052655, func_213(iParam0), 0, 0);
}

int func_224(int iParam0)
{
	return func_113(iParam0, 1);
}

int func_225(int iParam0)
{
	if (!_network_is_player_index_valid(*iParam0) || !network_is_player_active(*iParam0))
	{
		return 0;
	}
	iVar0 = *iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	return (*Global_1298536)[iVar0]->f_19.f_20;
}

int func_226(int iParam0)
{
	if (!_network_is_player_index_valid(*iParam0) || !network_is_player_active(*iParam0))
	{
		return 0;
	}
	iVar0 = *iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	iVar1 = -545779394;
	if ((*Global_1298536)[iVar0]->f_19.f_19 == 1269193435)
	{
		iVar1 = 1847740267;
	}
	else if ((*Global_1298536)[iVar0]->f_19.f_19 == -822124724)
	{
		iVar1 = 1532695640;
	}
	return iVar1;
}

int func_227(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	return 1;
}

bool func_228(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_229(iParam0, 65536))
	{
		return true;
	}
	return false;
}

bool func_229(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_49 && iParam1) != 0;
}

bool func_230(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
}

void func_231(int iParam0, int iParam1)
{
	if (func_230(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
}

int func_232(int iParam0)
{
	return Global_1051439->f_72[iParam0]->f_47;
}

void func_233(int iParam0)
{
	if (func_354(iParam0) && func_355())
	{
		remove_door_from_system(iParam0);
	}
}

void func_234(int iParam0)
{
}

void func_235(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_49 = 0;
}

bool func_236(int iParam0, int iParam1)
{
	return func_82(Global_1051439->f_72[iParam0]->f_50, iParam1);
}

void func_237(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_50 = 0;
}

void func_238(int iParam0)
{
	if (Global_1051439->f_41 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051439->f_41)
	{
		if (iParam0 == Global_1051439[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051439->f_41 = (Global_1051439->f_41 - 1);
	if (Global_1051439->f_41 < 0)
	{
		Global_1051439->f_41 = 0;
	}
	(*Global_1051439)[iVar1] = Global_1051439[Global_1051439->f_41];
}

bool func_239(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

float func_240()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_242(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_243(var uParam0)
{
	return func_107(*uParam0, 2);
}

void func_244(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_245(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 14);
}

bool func_246(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_247(int iParam0)
{
	if (func_249(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_248(int iParam0)
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

bool func_249(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_250(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_251()
{
	if (!func_356())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

int func_252(var uParam0, var uParam1, int iParam2, var uParam3)
{
	return 1;
}

int func_253(var uParam0, var uParam1, int iParam2, var uParam3)
{
	return 1;
}

int func_254(var uParam0, var uParam1, int iParam2, var uParam3)
{
	return 1;
}

int func_255(var uParam0, var uParam1, int iParam2, var uParam3)
{
	return 1;
}

void func_256(var uParam0, var uParam1, int iParam2, var uParam3)
{
}

void func_257(int iParam0, int iParam1)
{
	if (!is_valid_interior(iParam1))
	{
		return;
	}
	if (!is_interior_ready(iParam1))
	{
		return;
	}
	sVar0 = func_357(iParam0);
	if (compare_strings(sVar0, "Invalid", false, -1) == 0)
	{
		return;
	}
	if (!_is_interior_entity_set_valid(iParam1, sVar0))
	{
		return;
	}
	deactivate_interior_entity_set(iParam1, sVar0, true);
}

void func_258(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iParam0->f_242.f_33[iVar0] = 0;
		iVar0++;
	}
}

bool func_259(var uParam0, var uParam1, var uParam2)
{
	if (!is_valid_interior(Global_1298378->f_29.f_11))
	{
		if (!func_358(uParam0->f_2, &(Global_1298378->f_29.f_11)))
		{
			return false;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_257(iVar0, Global_1298378->f_29.f_11);
				iVar0++;
			}
		}
	}
	else if (!uParam2->f_242)
	{
		if (uParam1->f_46 == 0 || func_359(uParam1->f_46, Global_1298378->f_29.f_11))
		{
			if (func_360())
			{
				if (!func_359(4, Global_1298378->f_29.f_11))
				{
				}
			}
			if (is_valid_interior(Global_1298378->f_29.f_11))
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					iVar1 = 0;
					while (iVar1 < func_361(iVar2))
					{
						func_362(Global_1298378->f_29.f_11, iVar2, iVar1, uParam0->f_2);
						iVar1++;
					}
					iVar2++;
				}
			}
			uParam2->f_242 = 1;
		}
	}
	else
	{
		bVar3 = false;
		iVar4 = 0;
		while (iVar4 <= 9)
		{
			if (!is_bit_set(uParam2->f_242.f_1, iVar4))
			{
				if (func_363(Global_1298378->f_29.f_11, iVar4, &(uParam1->f_46.f_1[iVar4]), uParam0->f_2, uParam1->f_46))
				{
					set_bit(&(uParam2->f_242.f_1), iVar4);
				}
				else
				{
					bVar3 = true;
				}
			}
			iVar4++;
		}
		return !bVar3;
	}
	return false;
}

void func_260(int iParam0)
{
	func_110(&((*Global_1298536)[network_player_id_to_int()]->f_86), iParam0);
}

bool func_261(int iParam0, var uParam1)
{
	iVar18 = func_213(iParam0);
	*uParam1 = func_364(-1973132446, iVar18, 0, 0);
	if (*uParam1 >= 8)
	{
		*uParam1 = 7;
	}
	if (*uParam1 > 0)
	{
		iVar19 = 0;
		while (iVar19 < *uParam1)
		{
			if (func_365(iParam0, uParam1, iVar19, &Var0))
			{
				uParam1->f_3[iVar19] = get_hash_key(&Var0);
				if (Var0.f_14)
				{
					set_bit(&(uParam1->f_2), iVar19);
					set_bit(&(uParam1->f_1), iVar19);
					_play_sound_from_position(&(Var0.f_2), Var0.f_15, &(Var0.f_6), false, 0, false, 0);
				}
				else
				{
					clear_bit(&(uParam1->f_2), iVar19);
					clear_bit(&(uParam1->f_1), iVar19);
					_0x531a78d6bf27014b(&(Var0.f_6));
				}
			}
			iVar19++;
		}
		return true;
	}
	return false;
}

void func_262(int iParam0, bool bParam1)
{
	sVar0 = func_366(iParam0);
	if (_0x375f5870a7b8bec1(sVar0))
	{
		return;
	}
	set_ambient_zone_list_state_persistent(sVar0, bParam1, true);
}

void func_263(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_367(uParam0, uParam1, uParam1->f_242.f_2[iVar0], iVar0);
		iVar0++;
	}
}

void func_264(int iParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&uParam2->f_242.f_33[iVar1] != 0)
		{
			if (!is_door_registered_with_system(&(uParam2->f_242.f_33[iVar1])))
			{
				uParam2->f_242.f_33[iVar1] = 0;
				uParam2->f_242.f_37[iVar1]->f_6 = 0;
				uParam2->f_242.f_37[iVar1]->f_8 = 0f;
				uParam2->f_242.f_37[iVar1]->f_7 = 0f;
				uParam2->f_242.f_37[iVar1] = 0;
				clear_bit(&(uParam2->f_242.f_65), iVar1);
			}
			else
			{
				func_368(iVar1, uParam1, uParam2);
			}
		}
		else
		{
			iVar0 = func_370(iParam0, func_369(iVar1));
			if (iVar0 != 0)
			{
				uParam2->f_242.f_33[iVar1] = func_371(iVar0, 1, 1);
				if (&uParam2->f_242.f_33[iVar1] == 0)
				{
				}
			}
		}
		iVar1++;
	}
}

void func_265(var uParam0, var uParam1)
{
	iVar8 = 0;
	while (iVar8 < 10)
	{
		if (uParam1->f_242.f_2[iVar8]->f_2 == 4)
		{
			if (func_372(uParam0->f_2, iVar8, &uVar0))
			{
				_0x9428447ded71fc7e(&uVar0);
			}
		}
		func_287(&(uParam1->f_242.f_2[iVar8]));
		uParam1->f_242.f_2[iVar8]->f_2 = 0;
		iVar8++;
	}
}

void func_266(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	bVar1 = is_valid_interior(Global_1298378->f_29.f_11);
	if (bVar1)
	{
		iVar2 = 0;
		while (iVar2 < 10)
		{
			if (bVar1)
			{
				iVar0 = 0;
				while (iVar0 < func_361(iVar2))
				{
					func_362(Global_1298378->f_29.f_11, iVar2, iVar0, uParam0->f_2);
					iVar0++;
				}
			}
			iVar2++;
		}
		uParam2->f_242.f_1 = 0;
	}
	if (uParam2->f_242)
	{
		if (bVar1)
		{
			iVar3 = 0;
			while (iVar3 < 6)
			{
				func_257(iVar3, Global_1298378->f_29.f_11);
				iVar3++;
			}
		}
		uParam2->f_242 = 0;
	}
	func_40(128);
}

void func_267(int iParam0, var uParam1)
{
	if (*uParam1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			func_373(iParam0, uParam1, iVar0, 0);
			uParam1->f_3[iVar0] = 2;
			iVar0++;
		}
	}
	*uParam1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_1 = 0;
}

void func_268(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(uParam0->f_242.f_37[iVar0]->f_6))
		{
			_0x0db41d59e0f1502b(uParam0->f_242.f_37[iVar0]->f_6);
		}
		iVar0++;
	}
}

void func_269(var uParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_374(uParam0->f_2, iVar0);
		if (iVar1 != 0)
		{
			request_model(iVar1, false);
		}
		iVar0++;
	}
}

void func_270(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_375(iParam0, iVar0);
		if (iVar1 != 0)
		{
			_request_scenario_type(iVar1, 15, 0, 0);
		}
		iVar0++;
	}
}

void func_271(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = func_376(iParam0, iVar0);
		if (iVar1 != 0)
		{
			request_model(iVar1, false);
		}
		iVar0++;
	}
}

bool func_272(var uParam0)
{
	iVar0 = 0;
	if (!func_377(uParam0->f_2, iVar0))
	{
		return false;
	}
	return true;
}

bool func_273(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = func_376(iParam0, iVar0);
		if (iVar1 != 0)
		{
			if (!has_model_loaded(iVar1))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_274(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_375(iParam0, iVar0);
		if (iVar1 != 0)
		{
			if (_request_scenario_type(iVar1, 15, 0, 0))
			{
				if (!_has_scenario_type_loaded(iVar1, false))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_275(var uParam0, var uParam1, var uParam2)
{
	bVar0 = false;
	if (!func_20(uParam1, 1))
	{
		bVar2 = !func_378();
		if (network_is_host_of_this_script())
		{
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (iVar1 == 1)
				{
					if (&uParam1->f_46.f_1[0] == 0)
					{
					}
					else if (!func_379(uParam0->f_2, iVar1))
					{
						if (!network_does_network_id_exist(&(uParam1->f_197[iVar1])))
						{
							if (bVar2)
							{
								return false;
							}
							else if (func_380(uParam0, uParam1, uParam2, iVar1, 0))
							{
								func_381();
								return false;
							}
						}
					}
					iVar1++;
					func_21(uParam1, 1);
					return false;
					Jump @459; //curOff = 150
					bVar3 = !func_378();
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (iVar1 == 1)
						{
							if (&uParam1->f_46.f_1[0] == 0)
							{
							}
							else
							{
								if (!func_379(uParam0->f_2, iVar1))
								{
									if (!does_entity_exist(&(uParam2->f_1236[iVar1])))
									{
										if (!network_does_network_id_exist(&(uParam1->f_197[iVar1])))
										{
											return false;
										}
										uParam2->f_1236[iVar1] = net_to_ped(&(uParam1->f_197[iVar1]));
									}
								}
								else
								{
									if (does_entity_exist(&(uParam2->f_1236[iVar1])))
									{
									}
									else
									{
										if (bVar3)
										{
											return false;
										}
										if (func_380(uParam0, uParam1, uParam2, iVar1, 1))
										{
											func_381();
											bVar0 = true;
										}
										if (!does_entity_exist(&(uParam2->f_1236[iVar1])))
										{
											return false;
										}
										if (func_382(uParam0->f_2, iVar1))
										{
											if (uParam2->f_1236[iVar1]->f_1 & 1 != 0)
											{
											}
											else
											{
												_0x870708a6e147a9ad(&(uParam2->f_1236[iVar1]), "", 5f, 5f, 0, 0, 0, 0, 0, -1);
												uParam2->f_1236[iVar1]->f_1 |= 1;
											}
										}
										func_383(&(uParam2->f_385), iVar1, &(uParam2->f_1236[iVar1]));
										if (bVar0)
										{
											return false;
										}
									}
									iVar1++;
									return true;
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_276()
{
	iVar0 = func_90(get_player_index(), 1);
	if (!_does_volume_exist(Global_1298378->f_44.f_2))
	{
		Global_1298378->f_44.f_2 = func_384(iVar0);
	}
	if (!_does_volume_exist(Global_1298378->f_44.f_3))
	{
		Global_1298378->f_44.f_3 = func_385(iVar0);
	}
	if (_does_volume_exist(Global_1298378->f_44.f_2) && _does_volume_exist(Global_1298378->f_44.f_3))
	{
		func_281(37, Global_1298378->f_44.f_2, -1, Global_1298378->f_44.f_3, 0, 2, 0, 0, -1082130432, 0);
		func_387(37, func_386(iVar0, 4));
		func_282(37, 32768);
		func_282(37, 8388608);
		func_282(37, 65536);
		func_283(37, 4096);
		return true;
	}
	return false;
}

int func_277(int iParam0)
{
	return func_353(-1272267439, 1150045643, 1599320606, 1336171756, -867644014, -459963775, func_213(iParam0), 0, 0);
}

int func_278(int iParam0)
{
	return func_353(-1272267439, 2113428842, -1558670652, 416407972, 934493702, -919610406, func_213(iParam0), 0, 0);
}

bool func_279(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_375(iParam0, iVar0);
		if (iVar1 != 0)
		{
			fVar2 = func_388(iParam0, iVar0);
			vVar4 = { func_386(iParam0, iVar0) };
			fVar3 = func_389(iParam0, iVar0);
			if (!_does_scenario_point_exist(&(uParam1->f_1241[iVar0])))
			{
				uParam1->f_1241[iVar0] = create_scenario_point(iVar1, vVar4, fVar3, fVar2, 0, 1);
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_280(int iParam0, var uParam1)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = func_376(iParam0, iVar0);
		if (iVar1 != 0)
		{
			vVar2 = { func_390(iParam0, iVar0) };
			if (iVar1 == -296963090 && !does_entity_exist(uParam1->f_1252.f_6.f_27.f_3))
			{
				uParam1->f_1252.f_6.f_27.f_3 = create_object(iVar1, vVar2, false, true, false, false, false);
				set_entity_visible(uParam1->f_1252.f_6.f_27.f_3, false);
				set_entity_collision(uParam1->f_1252.f_6.f_27.f_3, false, false);
				if (network_get_entity_is_networked(uParam1->f_1252.f_6.f_27.f_3))
				{
					set_entity_visible_in_cutscene(uParam1->f_1252.f_6.f_27.f_3, 1, 0, uParam1->f_7);
				}
				return false;
			}
			else if (iVar1 == -969349845 && !does_entity_exist(uParam1->f_1252.f_6.f_27.f_5))
			{
				uParam1->f_1252.f_6.f_27.f_5 = create_object(iVar1, vVar2, false, false, false, false, false);
				set_entity_visible(uParam1->f_1252.f_6.f_27.f_5, false);
				set_entity_collision(uParam1->f_1252.f_6.f_27.f_5, false, false);
				if (network_get_entity_is_networked(uParam1->f_1252.f_6.f_27.f_5))
				{
					set_entity_visible_in_cutscene(uParam1->f_1252.f_6.f_27.f_5, 1, 0, uParam1->f_7);
				}
				return false;
			}
			else if (iVar1 == 1561132816 && !does_entity_exist(uParam1->f_1252.f_6.f_27.f_9))
			{
				uParam1->f_1252.f_6.f_27.f_9 = create_object(iVar1, vVar2, false, false, false, false, false);
				set_entity_visible(uParam1->f_1252.f_6.f_27.f_9, false);
				set_entity_collision(uParam1->f_1252.f_6.f_27.f_9, false, false);
				if (network_get_entity_is_networked(uParam1->f_1252.f_6.f_27.f_9))
				{
					set_entity_visible_in_cutscene(uParam1->f_1252.f_6.f_27.f_9, 1, 0, uParam1->f_7);
				}
				return false;
			}
			else if (iVar1 == 882909226 && !does_entity_exist(uParam1->f_1252.f_6.f_27.f_11))
			{
				uParam1->f_1252.f_6.f_27.f_11 = create_object(iVar1, vVar2, false, true, true, false, true);
				set_entity_visible(uParam1->f_1252.f_6.f_27.f_11, false);
				set_entity_collision(uParam1->f_1252.f_6.f_27.f_11, false, false);
				if (network_get_entity_is_networked(uParam1->f_1252.f_6.f_27.f_11))
				{
					set_entity_visible_in_cutscene(uParam1->f_1252.f_6.f_27.f_11, 1, 0, uParam1->f_7);
				}
				return false;
			}
			else if (iVar1 == 1511337995 && !does_entity_exist(uParam1->f_1252.f_6.f_27.f_7))
			{
				uParam1->f_1252.f_6.f_27.f_7 = create_object(iVar1, vVar2, false, false, false, false, false);
				set_entity_visible(uParam1->f_1252.f_6.f_27.f_7, false);
				set_entity_collision(uParam1->f_1252.f_6.f_27.f_7, false, false);
				if (network_get_entity_is_networked(uParam1->f_1252.f_6.f_27.f_7))
				{
					set_entity_visible_in_cutscene(uParam1->f_1252.f_6.f_27.f_7, 1, 0, uParam1->f_7);
				}
				return false;
			}
			else if (iVar1 == -1320825813 && !does_entity_exist(uParam1->f_1252.f_6.f_27))
			{
				uParam1->f_1252.f_6.f_27 = create_object(iVar1, vVar2, false, false, false, false, false);
				set_entity_visible(uParam1->f_1252.f_6.f_27, true);
				set_entity_collision(uParam1->f_1252.f_6.f_27, true, false);
				if (network_get_entity_is_networked(uParam1->f_1252.f_6.f_27))
				{
					set_entity_visible_in_cutscene(uParam1->f_1252.f_6.f_27, 1, 0, uParam1->f_7);
				}
				return false;
			}
			else if (iVar1 == -1473388640 && !does_entity_exist(uParam1->f_1252.f_6.f_27.f_12))
			{
				uParam1->f_1252.f_6.f_27.f_12 = create_object(iVar1, vVar2, false, false, false, false, false);
				set_entity_visible(uParam1->f_1252.f_6.f_27.f_12, false);
				set_entity_collision(uParam1->f_1252.f_6.f_27.f_12, false, false);
				if (network_get_entity_is_networked(uParam1->f_1252.f_6.f_27.f_12))
				{
					set_entity_visible_in_cutscene(uParam1->f_1252.f_6.f_27.f_12, 1, 0, uParam1->f_7);
				}
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_281(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, int iParam9)
{
	if (iParam0 == 9 && !(!func_356() && func_391()))
	{
		if (func_392(255))
		{
			if (_0xf256a75210c5c0eb(iParam1, get_entity_coords(get_player_ped(player_id()), false, false)))
			{
				func_393(1, 1);
			}
		}
	}
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_101(iParam0, 1);
	Global_1051439->f_72[iParam0] = 0;
	Global_1051439->f_72[iParam0]->f_18 = func_394(iParam2, iParam0);
	Global_1051439->f_72[iParam0]->f_24 = iParam1;
	Global_1051439->f_72[iParam0]->f_3 = { _0xf70f00013a62f866(iParam1) };
	Global_1051439->f_72[iParam0]->f_25 = uParam3;
	Global_1051439->f_72[iParam0]->f_27 = iParam4;
	Global_1051439->f_72[iParam0]->f_2 = iParam2;
	Global_1051439->f_72[iParam0]->f_63 = func_395(Global_1051439->f_72[iParam0]->f_18);
	Global_1051439->f_72[iParam0]->f_72 = iParam9;
	Global_1051439->f_72[iParam0]->f_73 = 0;
	Global_1051439->f_72[iParam0]->f_48 = 0;
	if (fParam8 <= 0f)
	{
		fParam8 = func_396(iParam0);
	}
	Global_1051439->f_72[iParam0]->f_10 = fParam8;
	Global_1051439->f_72[iParam0]->f_14 = iParam5;
	if (bParam6)
	{
		_0x18262cafebb5fbe1(Global_1051439->f_72[iParam0]->f_24, 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(Global_1051439->f_72[iParam0]->f_24, 0, 0, 0, -1, -1, 0);
	}
	if (bParam7)
	{
		_0x18262cafebb5fbe1(Global_1051439->f_72[iParam0]->f_25, 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(Global_1051439->f_72[iParam0]->f_25, 0, 0, 0, -1, -1, 0);
	}
	_0xeeb7818b1d307212(Global_1051439->f_72[iParam0]->f_24);
	func_397(iParam0, 4);
	func_398(iParam0);
}

void func_282(int iParam0, int iParam1)
{
	func_83(&(Global_1051439->f_72[iParam0]->f_49), iParam1);
}

void func_283(int iParam0, int iParam1)
{
	if (!func_399(iParam0))
	{
		return;
	}
	func_83(&(Global_1915715->f_3[iParam0]->f_7), iParam1);
}

void func_284(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!func_400(iParam1))
	{
		return;
	}
	if (iParam2 == -1)
	{
		return;
	}
	Global_1051439->f_3266[iParam1] = iParam0;
	Global_1051439->f_3266[iParam1]->f_1 = iParam2;
}

void func_285(var uParam0)
{
	if (does_entity_exist(uParam0->f_1252.f_6.f_27))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_1))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_1));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_6))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_6));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_7))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_7));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_10))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_10));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_11))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_11));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_8))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_8));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_9))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_9));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_4))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_4));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_5))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_5));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_2))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_2));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_3))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_3));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_12))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_12));
	}
	if (does_entity_exist(uParam0->f_1252.f_6.f_27.f_13))
	{
		delete_object(&(uParam0->f_1252.f_6.f_27.f_13));
	}
}

void func_286(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (_does_scenario_point_exist(&(uParam0->f_1241[iVar0])))
		{
			_delete_scenario_point(&(uParam0->f_1241[iVar0]));
		}
		iVar0++;
	}
}

void func_287(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_288(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4)
{
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_379(uParam0->f_2, iVar0))
		{
			if (bParam3 && network_does_network_id_exist(&(uParam1->f_197[iVar0])))
			{
				if (network_has_control_of_network_id(&(uParam1->f_197[iVar0])))
				{
					func_401(uParam1->f_197[iVar0], 0);
				}
				else if (!network_is_player_active(_0xa6c0787443c9583e(&(uParam1->f_197[iVar0]))))
				{
					if (network_is_host_of_this_script())
					{
						if (network_request_control_of_entity(&(uParam2->f_1236[iVar0])))
						{
							func_401(uParam1->f_197[iVar0], 0);
						}
					}
				}
				bVar3 = true;
			}
			else
			{
				_copy_memory(uParam2->f_1236[iVar0], &uVar1, 2);
			}
		}
		else if (does_entity_exist(&(uParam2->f_1236[iVar0])))
		{
			delete_ped(uParam2->f_1236[iVar0]);
			_copy_memory(uParam2->f_1236[iVar0], &uVar1, 2);
			bVar3 = true;
		}
		iVar0++;
	}
	if (func_20(uParam1, 1))
	{
		if (bParam3 && network_is_host_of_this_script())
		{
			if (!bVar3)
			{
				func_73(uParam1, 1);
				iVar0 = 0;
				while (iVar0 < 2)
				{
					uParam1->f_197[iVar0] = 0;
					iVar0++;
				}
			}
		}
		if (bParam3)
		{
			return false;
		}
	}
	if (!bParam3)
	{
		return true;
	}
	return !func_20(uParam1, 1);
}

bool func_289(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (uParam1->f_357)
	{
		return true;
	}
	if (!func_402(iParam3))
	{
		return false;
	}
	if (!func_403(iParam2, bParam6))
	{
		return false;
	}
	bVar13 = false;
	bVar14 = network_is_host_of_this_script();
	if (!func_404(799444573, &iVar15, func_213(iParam3), 0, 0))
	{
		return false;
	}
	if (!uParam1->f_356)
	{
		Var20 = 2;
		if (!func_404(-1871428712, &iVar19, func_213(iParam3), 0, 0))
		{
			return false;
		}
		iVar6 = func_405(-585691327, 0, 0, iVar19);
		if (iVar6 < 1)
		{
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (!func_406(-2091297948, &iVar5, iVar0, 0, iVar19))
				{
				}
				else if (!func_408(1816942468, &(Var20.f_1), iVar5, func_407(iParam4), iVar19))
				{
				}
				else if (!func_335(-761908433, &(Var20.f_2), iVar5, func_407(iParam4), iVar19))
				{
				}
				else
				{
					Var20 = iVar5;
					*uParam1->f_358[iVar11] = { Var20 };
					iVar11++;
				}
				iVar0++;
			}
		}
		uParam1->f_356 = 1;
	}
	if (!bVar14)
	{
		if (!*uParam0)
		{
			return false;
		}
	}
	else if (!*uParam0)
	{
		uParam0->f_2 = 0;
	}
	Var27.f_4 = -1;
	Var27.f_6 = 2;
	Var27.f_10 = -1;
	Var27.f_12 = 2;
	Var27.f_13 = -1;
	Var27.f_14 = 1;
	iVar43 = 0;
	while (iVar43 < 3)
	{
		if (*uParam0)
		{
			if (!is_bit_set(uParam0->f_2, iVar43))
			{
			}
			else
			{
				iVar7 = uParam5[iVar43];
				if (iVar7 < 0)
				{
				}
				else
				{
					iVar0 = 0;
					while (iVar0 < func_361(iVar43))
					{
						if (iVar0 >= 5)
						{
						}
						else
						{
							if (!func_404(-1955083908, &iVar16, func_409(iVar43), iVar0, iVar15))
							{
							}
							else
							{
								iVar8 = func_405(240086818, 0, 0, iVar16);
								if (iVar8 < 1)
								{
								}
								else
								{
									if (!*uParam0)
									{
										iVar1 = get_random_int_in_range(0, iVar8);
									}
									else
									{
										iVar1 = uParam0->f_3[iVar43][iVar0];
										if (iVar1 < 0)
										{
										}
										else
										{
											iVar9 = func_405(-849080781, iVar1, 0, iVar16);
											if (iVar9 < 1)
											{
											}
											else
											{
												iVar2 = 0;
												while (iVar2 < iVar9)
												{
													bVar13 = false;
													if (!func_406(252470000, &iVar12, iVar1, iVar2, iVar16))
													{
													}
													else if (!func_404(903375114, &iVar17, func_409(iVar43), iVar0, iVar15))
													{
													}
													else if (!func_404(-97479043, &iVar18, iVar12, 0, iVar17))
													{
													}
													else
													{
														iVar10 = func_405(2043577501, 0, 0, iVar18);
														if (iVar10 < 1)
														{
															if (!*uParam0)
															{
																(*uParam0->f_3[iVar43])[iVar0] = -1;
															}
														}
														else if (!*uParam0)
														{
															(*uParam0->f_3[iVar43])[iVar0] = iVar1;
															set_bit(&(uParam0->f_2), iVar43);
															Jump @1035; //curOff = 708
														}
														else
														{
															iVar3 = 0;
															while (iVar3 < iVar10)
															{
																if (!func_408(-815157487, &(Var27.f_7), iVar3, 0, iVar18))
																{
																}
																else if (!func_410(681301829, &(Var27.f_5), iVar3, 0, iVar18))
																{
																}
																else if (!func_335(-809283813, &Var27, iVar3, 0, iVar18))
																{
																}
																else if (!func_336(1639179708, &(Var27.f_3), iVar3, 0, iVar18))
																{
																}
																else if (!func_411(436248169, &(Var27.f_14), iVar3, 0, iVar18))
																{
																}
																else
																{
																	if (func_406(1022527201, &(Var27.f_6), iVar3, 0, iVar18))
																	{
																	}
																	if (Var27.f_6 != 2)
																	{
																	}
																	if (func_406(-904102397, &(Var27.f_4), iVar3, 0, iVar18))
																	{
																		iVar11 = 0;
																		while (iVar11 < 25)
																		{
																			if (&uParam1->f_358[iVar11] == Var27.f_4)
																			{
																				Var27.f_4 = iVar11;
																				bVar13 = true;
																			}
																			else
																			{
																				iVar11++;
																			}
																		}
																		if (!bVar13)
																		{
																			Var27.f_4 = -1;
																		}
																	}
																	else
																	{
																		Var27.f_4 = -1;
																		bVar13 = true;
																	}
																	if (bVar13)
																	{
																		Var27.f_10 = iVar43;
																		Var27.f_11 = iVar0;
																		Var27.f_12 = iVar12;
																		Var27.f_13 = iVar3;
																		*uParam1->f_1[iVar4] = { Var27 };
																		iVar4++;
																	}
																}
																iVar3++;
															}
														}
													}
													iVar2++;
												}
											}
										}
										iVar0++;
										if (*uParam0)
										{
											uParam1->f_357 = 1;
										}
										iVar43++;
										if (bVar14 && !*uParam0)
										{
											*uParam0 = 1;
										}
										return false;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_290(int* iParam0, var uParam1)
{
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (iParam0->f_1[iVar0]->f_7 != 0 && iParam0->f_1[iVar0]->f_5 != 0)
		{
			if (iParam0->f_1[iVar0]->f_11 <= uParam1[iParam0->f_1[iVar0]->f_10])
			{
				iVar1 = iParam0->f_1[iVar0]->f_4;
				if (!is_bit_set(*iParam0, iVar0))
				{
					bVar2 = true;
					request_model(iParam0->f_1[iVar0]->f_7, false);
					_request_scenario_type(iParam0->f_1[iVar0]->f_5, 15, iParam0->f_1[iVar0]->f_7, iParam0->f_1[iVar0]->f_6);
					if (iVar1 > -1 && iVar1 < 25)
					{
						if (iParam0->f_358[iVar1]->f_1 != 0)
						{
							request_model(iParam0->f_358[iVar1]->f_1, false);
						}
					}
					set_bit(iParam0, iVar0);
				}
				else
				{
					if (!has_model_loaded(iParam0->f_1[iVar0]->f_7))
					{
						bVar2 = true;
					}
					if (!_request_scenario_type(iParam0->f_1[iVar0]->f_5, 15, iParam0->f_1[iVar0]->f_7, iParam0->f_1[iVar0]->f_6) || !_has_scenario_type_loaded(iParam0->f_1[iVar0]->f_5, false))
					{
						bVar2 = true;
					}
				}
			}
		}
		iVar0++;
	}
	return !bVar2;
}

bool func_291(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	bVar3 = false;
	iVar9 = 0;
	while (iVar9 < 3)
	{
		iVar5[iVar9] = func_112(iParam3, iVar9, 1);
		iVar9++;
	}
	bVar10 = false;
	if (!func_378())
	{
		bVar10 = true;
	}
	if (network_is_host_of_this_script() && !uParam1->f_1)
	{
		iVar0 = 0;
		while (iVar0 < 22)
		{
			if (uParam2->f_1[iVar0]->f_7 != 0)
			{
				if (uParam2->f_1[iVar0]->f_11 <= &iVar5[uParam2->f_1[iVar0]->f_10])
				{
					if (!network_does_network_id_exist(&(uParam1->f_22[iVar0])))
					{
						iVar2 = uParam2->f_1[iVar0]->f_4;
						if ((iVar2 > -1 && iVar2 < 25) && uParam2->f_358[iVar2]->f_1 != 0)
						{
							bVar3 = true;
							if (!_0x1ff441d7954f8709(uParam2->f_358[iVar2]->f_6))
							{
								if (uParam2->f_358[iVar2]->f_6 == 0)
								{
									if (iVar1 < 4)
									{
										uParam2->f_358[iVar2]->f_6 = _0x6f3068258a499e52(uParam2->f_358[iVar2]->f_1, uParam2->f_358[iVar2]->f_2, 5);
										iVar1++;
									}
								}
							}
							else if (!does_entity_exist(uParam2->f_358[iVar2]->f_5))
							{
								iVar4 = _0x4735e2a4bb83d9da(uParam2->f_358[iVar2]->f_6);
								if (does_entity_exist(iVar4))
								{
									uParam2->f_358[iVar2]->f_5 = get_object_index_from_entity_index(iVar4);
								}
							}
							else if (!_does_scenario_point_exist(uParam2->f_1[iVar0]->f_9))
							{
								bVar3 = true;
								if (_has_scenario_type_loaded(uParam2->f_1[iVar0]->f_5, false))
								{
									uParam2->f_1[iVar0]->f_9 = create_scenario_point_attached_to_entity(uParam2->f_358[iVar2]->f_5, uParam2->f_1[iVar0]->f_5, *uParam2->f_1[iVar0], uParam2->f_1[iVar0]->f_3, 0, 0, 1);
								}
								else
								{
									_request_scenario_type(uParam2->f_1[iVar0]->f_5, 15, uParam2->f_1[iVar0]->f_7, 0);
								}
							}
							else if (!network_does_network_id_exist(&(uParam1->f_22[iVar0])))
							{
								bVar3 = true;
								if (!bVar10)
								{
									if (!func_412(uParam1->f_22[iVar0], uParam2->f_1[iVar0]->f_7, _get_scenario_point_coords(uParam2->f_1[iVar0]->f_9, true), _get_scenario_point_heading(uParam2->f_1[iVar0]->f_9, true), 1, 0, 1, 1, 1))
									{
									}
									else
									{
										func_413(iParam0, uParam1, uParam2, iVar0, uParam4, &bVar3);
										func_381();
										return false;
									}
								}
							}
							else
							{
								func_413(iParam0, uParam1, uParam2, iVar0, uParam4, &bVar3);
							}
						}
						else if (!network_does_network_id_exist(&(uParam1->f_22[iVar0])))
						{
							if (!bVar10)
							{
								if (!func_412(uParam1->f_22[iVar0], uParam2->f_1[iVar0]->f_7, *uParam2->f_1[iVar0], uParam2->f_1[iVar0]->f_3, 1, 0, 1, 1, 1))
								{
								}
								else
								{
									func_413(iParam0, uParam1, uParam2, iVar0, uParam4, &bVar3);
									func_381();
									return false;
								}
							}
						}
						else
						{
							func_413(iParam0, uParam1, uParam2, iVar0, uParam4, &bVar3);
						}
					}
				}
			}
			iVar0++;
		}
		if (!uParam1->f_1)
		{
			if (!bVar3)
			{
				uParam1->f_1 = 1;
				uParam2->f_355 = 1;
			}
		}
		return false;
	}
	else
	{
		if (!uParam2->f_355)
		{
			iVar0 = 0;
			while (iVar0 < 22)
			{
				if (uParam2->f_1[iVar0]->f_7 != 0)
				{
					if (uParam2->f_1[iVar0]->f_11 <= &iVar5[uParam2->f_1[iVar0]->f_10])
					{
						iVar2 = uParam2->f_1[iVar0]->f_4;
						if ((iVar2 > -1 && iVar2 < 25) && uParam2->f_358[iVar2]->f_1 != 0)
						{
							if (!_0x1ff441d7954f8709(uParam2->f_358[iVar2]->f_6))
							{
								bVar3 = true;
								if (iVar1 < 4)
								{
									if (uParam2->f_358[iVar2]->f_6 == 0)
									{
										uParam2->f_358[iVar2]->f_6 = _0x6f3068258a499e52(uParam2->f_358[iVar2]->f_1, uParam2->f_358[iVar2]->f_2, 5);
										iVar1++;
									}
								}
							}
							else if (!does_entity_exist(uParam2->f_358[iVar2]->f_5))
							{
								bVar3 = true;
								iVar4 = _0x4735e2a4bb83d9da(uParam2->f_358[iVar2]->f_6);
								if (does_entity_exist(iVar4))
								{
									uParam2->f_358[iVar2]->f_5 = get_object_index_from_entity_index(iVar4);
								}
							}
							else if (!_does_scenario_point_exist(uParam2->f_1[iVar0]->f_9))
							{
								if (uParam2->f_1[iVar0]->f_5 != 0)
								{
									bVar3 = true;
									if (_has_scenario_type_loaded(uParam2->f_1[iVar0]->f_5, false))
									{
										uParam2->f_1[iVar0]->f_9 = create_scenario_point_attached_to_entity(uParam2->f_358[iVar2]->f_5, uParam2->f_1[iVar0]->f_5, *uParam2->f_1[iVar0], uParam2->f_1[iVar0]->f_3, 0, 0, 1);
									}
									else
									{
										_request_scenario_type(uParam2->f_1[iVar0]->f_5, 15, uParam2->f_1[iVar0]->f_7, 0);
									}
								}
							}
						}
						else if (uParam2->f_1[iVar0]->f_5 != 0)
						{
							if (!_has_scenario_type_loaded(uParam2->f_1[iVar0]->f_5, false))
							{
								bVar3 = true;
								_request_scenario_type(uParam2->f_1[iVar0]->f_5, 15, uParam2->f_1[iVar0]->f_7, 0);
							}
						}
					}
				}
				iVar0++;
			}
			if (!bVar3)
			{
				uParam2->f_355 = 1;
			}
			return false;
		}
		else if (uParam1->f_1 && !uParam2->f_354)
		{
			iVar0 = 0;
			while (iVar0 < 22)
			{
				if (uParam2->f_1[iVar0]->f_7 != 0 && uParam2->f_1[iVar0]->f_5 != 0)
				{
					if (network_does_network_id_exist(&(uParam1->f_22[iVar0])))
					{
						if (!does_entity_exist(uParam2->f_1[iVar0]->f_8))
						{
							bVar3 = true;
							uParam2->f_1[iVar0]->f_8 = net_to_ped(&(uParam1->f_22[iVar0]));
						}
						if (!is_ped_using_any_scenario(uParam2->f_1[iVar0]->f_8))
						{
							bVar3 = true;
							if (network_has_control_of_entity(uParam2->f_1[iVar0]->f_8))
							{
								iVar2 = uParam2->f_1[iVar0]->f_4;
								if ((iVar2 > -1 && iVar2 < 25) && uParam2->f_358[iVar2]->f_1 != 0)
								{
									if (_does_scenario_point_exist(uParam2->f_1[iVar0]->f_9))
									{
										_task_use_scenario_point(uParam2->f_1[iVar0]->f_8, uParam2->f_1[iVar0]->f_9, func_414(iParam0, uParam2, iVar0), -1, false, true, 0, false, -1f, false);
									}
									else
									{
										task_start_scenario_at_position(uParam2->f_1[iVar0]->f_8, uParam2->f_1[iVar0]->f_5, *uParam2->f_1[iVar0], uParam2->f_1[iVar0]->f_3, -1, false, true, func_414(iParam0, uParam2, iVar0), -1f, true);
									}
								}
								else
								{
									_task_start_scenario_in_place(uParam2->f_1[iVar0]->f_8, uParam2->f_1[iVar0]->f_5, -1, false, uParam2->f_1[iVar0]->f_6, -1f, true);
								}
							}
						}
					}
				}
				iVar0++;
			}
			if (!bVar3)
			{
				uParam2->f_354 = 1;
			}
		}
		return uParam2->f_354;
	}
	return true;
}

void func_292(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (does_entity_exist(uParam1->f_1[iVar0]->f_8))
		{
			if (network_has_control_of_entity(uParam1->f_1[iVar0]->f_8))
			{
				set_ped_reset_flag(uParam1->f_1[iVar0]->f_8, 116, true);
			}
			if (!uParam1->f_1[iVar0]->f_15)
			{
				set_entity_visible_in_cutscene(net_to_ped(&(uParam0->f_22[iVar0])), 1, 0, uParam2);
				uParam1->f_1[iVar0]->f_15 = 1;
			}
		}
		iVar0++;
	}
}

bool func_293(var uParam0, var uParam1, bool bParam2)
{
	bVar2 = false;
	Var3.f_4 = -1;
	Var3.f_6 = 2;
	Var3.f_10 = -1;
	Var3.f_12 = 2;
	Var3.f_13 = -1;
	Var3.f_14 = 1;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (does_entity_exist(uParam1->f_1[iVar0]->f_8))
		{
			bVar2 = bParam2;
			if (bParam2)
			{
				if (network_has_control_of_entity(uParam1->f_1[iVar0]->f_8))
				{
					delete_ped(&(uParam1->f_1[iVar0]->f_8));
					bVar2 = false;
				}
				else if (network_is_host_of_this_script())
				{
					if (!network_is_player_active(_0xa6c0787443c9583e(&(uParam0->f_22[iVar0]))))
					{
						if (network_request_control_of_entity(uParam1->f_1[iVar0]->f_8))
						{
							delete_ped(&(uParam1->f_1[iVar0]->f_8));
							bVar2 = false;
						}
					}
				}
			}
			if (!bVar2)
			{
				_copy_memory(uParam1->f_1[iVar0], &Var3, 16);
			}
		}
		else if (network_does_network_id_exist(&(uParam0->f_22[iVar0])))
		{
			bVar2 = bParam2;
			if (bParam2)
			{
				if (network_has_control_of_network_id(&(uParam0->f_22[iVar0])))
				{
					func_401(uParam0->f_22[iVar0], 0);
					bVar2 = false;
				}
				else if (!network_is_player_active(_0xa6c0787443c9583e(&(uParam0->f_22[iVar0]))))
				{
					if (network_request_control_of_network_id(&(uParam0->f_22[iVar0])))
					{
						func_401(uParam0->f_22[iVar0], 0);
						bVar2 = false;
					}
				}
			}
			else
			{
				_copy_memory(uParam1->f_1[iVar0], &Var3, 16);
			}
		}
		else
		{
			_copy_memory(uParam1->f_1[iVar0], &Var3, 16);
		}
		if (_does_scenario_point_exist(uParam1->f_1[iVar0]->f_9))
		{
			_delete_scenario_point(uParam1->f_1[iVar0]->f_9);
		}
		if (uParam1->f_1[iVar0]->f_5 != 0)
		{
			if (_has_scenario_type_loaded(uParam1->f_1[iVar0]->f_5, false))
			{
				_0x4eddd9e9ca5af985(uParam1->f_1[iVar0]->f_5);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (uParam1->f_358[iVar0]->f_6 != 0)
		{
			if (_0x1ff441d7954f8709(uParam1->f_358[iVar0]->f_6))
			{
				_0xd2b9c78537ed5759(uParam1->f_358[iVar0]->f_6);
			}
		}
		iVar0++;
	}
	if (!bVar2)
	{
		if (network_is_host_of_this_script())
		{
			if (bParam2)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 0;
				*uParam0 = 0;
				iVar0 = 0;
				while (iVar0 < 22)
				{
					uParam0->f_22[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					iVar1 = 0;
					while (iVar1 < 5)
					{
						(*uParam0->f_3[iVar0])[iVar1] = -1;
						iVar1++;
					}
					iVar0++;
				}
			}
		}
		*uParam1 = 0;
		uParam1->f_354 = 0;
		uParam1->f_357 = 0;
		uParam1->f_355 = 0;
		uParam1->f_356 = 0;
		return true;
	}
	return false;
}

var func_294(var uParam0)
{
	return uParam0;
}

int func_295(var uParam0, var uParam1, var uParam2, var uParam3)
{
	bVar0 = network_is_host_of_this_script();
	if (bVar0)
	{
		if (!func_415(&(uParam0->f_166), uParam0, uParam1, uParam2, uParam3))
		{
			return 0;
		}
	}
	if (!func_416(&(uParam0->f_166), uParam0, uParam1, uParam2, uParam3))
	{
		return 0;
	}
	return 1;
}

void func_296(var uParam0, var uParam1, var uParam2)
{
	func_417(&(uParam0->f_15), 0);
	func_418(&(uParam0->f_9), 0);
	func_419(uParam0, 0);
	if (func_64(&(uParam2->f_1252.f_70.f_17)))
	{
		func_109(&(uParam2->f_1252.f_70.f_17));
	}
	uParam0->f_4 = 0;
	uParam0->f_2 = 0;
	uParam0->f_7 = 0;
}

bool func_297(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!bParam3 && uParam0->f_7 != 0)
	{
		return false;
	}
	iVar0 = 1;
	iVar1 = participant_id_to_int();
	bVar2 = (iVar1 > -1 && iVar1 < 32);
	if (func_420(&(uParam2->f_1252.f_51.f_1)))
	{
		if (bVar2)
		{
			func_421(&((*uParam1)[iVar1]->f_12), 0);
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (func_420(&(uParam2->f_1252.f_70)))
	{
		if (bVar2)
		{
			func_422(&((*uParam1)[iVar1]->f_12), 0);
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (func_420(&(uParam2->f_1252.f_51)))
	{
		if (bVar2)
		{
			func_423(&((*uParam1)[iVar1]->f_12), 0);
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (bVar2)
	{
		if (func_424(&((*uParam1)[iVar1]->f_12)) != 2)
		{
			func_425(&((*uParam1)[iVar1]->f_12), 2);
		}
		if (func_426(&((*uParam1)[iVar1]->f_12)) != 0)
		{
			func_427(&((*uParam1)[iVar1]->f_12), 0);
		}
		(*uParam1)[iVar1]->f_12.f_6 = 0;
	}
	if (!func_428(&(uParam2->f_1252)))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_298(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_9)
	{
		case 0:
			if (func_429(uParam0, uParam2))
			{
				uParam2->f_9 = 1;
			}
			else
			{
				uParam2->f_9 = 4;
			}
			break;
		case 1:
			if (func_430(uParam2))
			{
				uParam2->f_9 = 2;
			}
			break;
		case 2:
			if (func_431(uParam1, uParam2, uParam0->f_1))
			{
				create_model_hide_excluding_script_objects(uParam2->f_3, 1f, 1304104843, true);
				func_432(32768);
				uParam2->f_9 = 3;
			}
			break;
		case 3:
			func_433(uParam2);
			break;
		case 4:
			break;
	}
}

void func_299(var uParam0, int* iParam1, bool bParam2)
{
	if (func_434(iParam1))
	{
		set_model_as_no_longer_needed(iParam1->f_8);
		set_model_as_no_longer_needed(iParam1->f_7);
	}
	if (bParam2)
	{
		if (!does_entity_exist(*iParam1))
		{
			*iParam1 = net_to_obj(*uParam0);
		}
		if (does_entity_exist(*iParam1))
		{
			if (network_has_control_of_entity(*iParam1))
			{
				delete_object(iParam1);
			}
		}
		if (!does_entity_exist(iParam1->f_1))
		{
			iParam1->f_1 = net_to_obj(uParam0->f_1);
		}
		if (does_entity_exist(iParam1->f_1))
		{
			if (network_has_control_of_entity(iParam1->f_1))
			{
				delete_object(&(iParam1->f_1));
			}
		}
	}
}

void func_300(var uParam0, var uParam1)
{
	*uParam1->f_1053[0] = { 1787.631f, -811.5975f, 188.4016f };
	*uParam1->f_1053[1] = { -1091.577f, 705.8172f, 80.0364f };
	*uParam1->f_1053[2] = { -2779.419f, -3049.09f, -12.8981f };
	*uParam1->f_1053[3] = { 1625.941f, 832.8169f, 120.7443f };
	*uParam1->f_1053[4] = { -1861.505f, -1732.349f, 85.0576f };
	uParam1->f_1053.f_76 = 0;
}

void func_301(var uParam0, var uParam1, var uParam2)
{
	func_435(uParam0, uParam1);
	func_436(uParam0, uParam1, uParam2);
	func_437(uParam0, uParam1, 1);
	switch (uParam1->f_1053.f_76)
	{
		case 0:
			if (func_438(uParam0, uParam1))
			{
				StringCopy(&(uParam1->f_1053.f_81), func_439(10), 32);
				func_440(uParam1, 2);
			}
			break;
		case 2:
			func_441(uParam0, uParam1);
			break;
		case 1:
			func_442(uParam0, uParam1);
			if (func_443(uParam0, uParam1, uParam2))
			{
				func_444(&(uParam1->f_1053.f_70), 0);
				set_player_control(get_player_index(), false, 256, false);
				_display_hud_component(724769646);
				func_445(uParam1, 0);
				func_440(uParam1, 5);
			}
			if (func_446(uParam1, uParam2))
			{
				func_447(uParam1, 1);
				func_440(uParam1, 3);
			}
			if (func_448(uParam0, uParam1, uParam2))
			{
				func_449(uParam1, 1);
				task_look_at_entity(Global_34, net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36])), 3000, 131072, 51, 0);
				func_440(uParam1, 4);
			}
			break;
		case 4:
			if (func_450(uParam0, uParam1, uParam2))
			{
				func_451(uParam0, uParam1);
				func_440(uParam1, 1);
			}
			break;
		case 3:
			if (func_452(uParam0, uParam1, uParam2))
			{
				func_453(uParam2);
				func_451(uParam0, uParam1);
				func_440(uParam1, 1);
			}
			break;
		case 5:
			if (func_454(uParam0, uParam1, uParam2))
			{
				(*uParam2)[participant_id_to_int()]->f_10.f_1 = 0;
				func_453(uParam2);
				func_451(uParam0, uParam1);
				func_440(uParam1, 1);
			}
			break;
		case 6:
			break;
	}
	func_455(uParam0, uParam1);
	func_456(uParam1);
	func_457(uParam1);
	func_458();
	func_459(uParam0, uParam1, uParam2);
	func_460(uParam2);
	vVar0 = { get_entity_coords(player_ped_id(), true, false) };
	if ((get_distance_between_coords(func_461(uParam0, uParam1), vVar0, false) <= 0.71f || get_distance_between_coords(func_462(uParam0, uParam1), vVar0, false) <= 0.71f) && is_ped_using_any_scenario(player_ped_id()))
	{
		_uiprompt_set_ambient_group_this_frame(player_ped_id(), 0.71f, 1, 1, -1253195061, &(uParam1->f_1053.f_81), 0);
	}
	else if (get_distance_between_coords(func_461(uParam0, uParam1), vVar0, false) <= 0.71f)
	{
		_uiprompt_set_ambient_group_this_frame(player_ped_id(), 0.71f, 1, 1, -2122747604, &(uParam1->f_1053.f_81), 0);
	}
	else if (get_distance_between_coords(func_462(uParam0, uParam1), vVar0, false) <= 0.71f)
	{
		_uiprompt_set_ambient_group_this_frame(player_ped_id(), 0.71f, 1, 1, -196782394, &(uParam1->f_1053.f_81), 0);
	}
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (get_distance_between_coords(func_463(uParam0, uParam1, iVar3, 0), vVar0, false) <= 0.71f)
		{
			if (is_ped_using_any_scenario(player_ped_id()))
			{
				_uiprompt_set_ambient_group_this_frame(player_ped_id(), 0.71f, 1, 1, -157697315, &(uParam1->f_1053.f_81), 0);
			}
			else
			{
				_uiprompt_set_ambient_group_this_frame(player_ped_id(), 0.71f, 1, 1, func_464(iVar3), &(uParam1->f_1053.f_81), 0);
			}
		}
		iVar3++;
	}
}

void func_302(var uParam0, var uParam1)
{
	func_345(&(uParam1->f_1053.f_17), 1, 1);
	func_345(&(uParam1->f_1053.f_18), 1, 1);
	func_345(&(uParam1->f_1053.f_32), 1, 1);
	func_345(&(uParam1->f_1053.f_31), 1, 1);
	func_345(&(uParam1->f_1053.f_33), 1, 1);
	func_345(&(uParam1->f_1053.f_34), 1, 1);
	func_345(&(uParam1->f_1053.f_69), 1, 1);
	func_345(&(uParam1->f_1053.f_68), 1, 1);
	if (network_is_host_of_this_script())
	{
		if (network_does_network_id_exist(uParam0->f_156.f_7))
		{
			iVar0 = net_to_obj(uParam0->f_156.f_7);
			if (does_entity_exist(iVar0))
			{
				delete_object(&iVar0);
			}
		}
		if (network_does_network_id_exist(uParam0->f_156.f_8))
		{
			iVar0 = net_to_obj(uParam0->f_156.f_8);
			if (does_entity_exist(iVar0))
			{
				delete_object(&iVar0);
			}
		}
	}
	if (func_465(&(uParam1->f_1053.f_70)))
	{
		func_466(&(uParam1->f_1053.f_70));
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (network_does_network_id_exist(&(uParam0->f_156[iVar1])))
		{
			iVar2 = net_to_obj(&(uParam0->f_156[iVar1]));
			if (is_entity_attached_to_entity(Global_34, iVar2))
			{
				detach_entity(iVar2, true, true);
			}
			if (network_has_control_of_network_id(&(uParam0->f_156[iVar1])))
			{
				_0xcaaf2bccfef37f77(iVar2, 80);
				if (does_entity_exist(iVar2))
				{
					delete_object(&iVar2);
				}
			}
		}
		if (_does_scenario_point_exist(&(uParam1->f_1053.f_40[iVar1])))
		{
			_delete_scenario_point(&(uParam1->f_1053.f_40[iVar1]));
		}
		if (_does_scenario_point_exist(&(uParam1->f_1053.f_54[iVar1])))
		{
			_delete_scenario_point(&(uParam1->f_1053.f_54[iVar1]));
		}
		func_345(uParam1->f_1053.f_61[iVar1], 1, 1);
		func_345(uParam1->f_1053.f_47[iVar1], 1, 1);
		iVar1++;
	}
	func_467(uParam0, uParam1);
	remove_ptfx_asset();
	if (_does_scenario_point_exist(uParam1->f_1053.f_38))
	{
		_delete_scenario_point(uParam1->f_1053.f_38);
	}
	if (_does_scenario_point_exist(uParam1->f_1053.f_39))
	{
		_delete_scenario_point(uParam1->f_1053.f_39);
	}
	if (is_player_control_on(get_player_index()) == 0)
	{
		set_player_control(get_player_index(), true, 0, false);
	}
}

void func_303(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_53(player_id(), 1024))
	{
		return;
	}
	if (network_is_host_of_this_script())
	{
		func_468(uParam0, uParam1, uParam2, uParam3);
	}
	func_469(uParam0, (*uParam1)[participant_id_to_int()], uParam2, uParam3);
}

void func_304(var uParam0)
{
	func_40(1024);
	StringCopy(&(Global_1298378->f_140), "", 128);
	if (func_470(uParam0, 2))
	{
		do_screen_fade_in(500);
	}
	if (does_entity_exist(uParam0->f_1199))
	{
		set_object_as_no_longer_needed(&(uParam0->f_1199));
	}
}

void func_305(var uParam0, var uParam1)
{
	request_model(1077976463, false);
	uParam1->f_76 = uParam0->f_2;
	request_model(-82199229, false);
	_request_scenario_type(1154717469, 3, 0, 0);
	_request_scenario_type(276768972, 3, 0, 0);
	_request_scenario_type(-1370915905, 3, 0, 0);
	_request_scenario_type(-1235467171, 3, 0, 0);
}

bool func_306(var uParam0)
{
	if (!has_model_loaded(1077976463))
	{
		return false;
	}
	if (!_0xf97f462779b31786(func_471(uParam0->f_2)))
	{
		return false;
	}
	return true;
}

void func_307(var uParam0, var uParam1)
{
	bVar0 = _0xec7e480ff8bd0bed(player_ped_id());
	if (!func_57())
	{
	}
	if (_0x1a51bfe60708e482(get_player_index()))
	{
		_0x3ee1f7a8c32f24e1(get_player_index(), &iVar1, 0, 0);
		if (!func_43(uParam0->f_71, 256))
		{
			_0x0faf95d71ed67ade(player_id(), func_472());
			func_473(uParam0, 256);
		}
		iVar2 = get_ped_index_from_entity_index(iVar1);
		if (is_ped_a_player(iVar2) && (_0x99df2639da76c1dc(player_ped_id(), iVar2, 9) || _0x99df2639da76c1dc(player_ped_id(), get_ped_index_from_entity_index(iVar1), 10)))
		{
			if (!func_341(uParam0->f_33))
			{
				uParam0->f_33 = func_475(func_474(), 578288361, 3, 0, 1, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_476(uParam0->f_33, _uiprompt_get_group_id_for_target_entity(iVar1), 0, 1);
				func_477(uParam0->f_33, 578288361);
				func_477(uParam0->f_32, -1292666904);
				func_477(uParam0->f_33, -719620017);
			}
		}
		else
		{
			if (func_341(uParam0->f_32))
			{
				func_345(&(uParam0->f_32), 1, 1);
			}
			if (func_341(uParam0->f_33))
			{
				func_345(&(uParam0->f_33), 1, 1);
			}
		}
	}
	else
	{
		if (func_43(uParam0->f_71, 256))
		{
			func_478(uParam0, 256);
		}
		if (func_341(uParam0->f_32))
		{
			func_345(&(uParam0->f_32), 1, 1);
		}
		if (func_341(uParam0->f_33))
		{
			func_345(&(uParam0->f_33), 1, 1);
		}
	}
	func_479(uParam0);
	if (ped_has_use_scenario_task(Global_34) || _0x3ab6c7b0bb0df4b1(Global_34, -1))
	{
		if (!get_ped_config_flag(Global_34, 1, true))
		{
			set_ped_config_flag(Global_34, 1, true);
			set_ped_can_be_targetted(Global_34, false);
		}
	}
	else if (get_ped_config_flag(Global_34, 1, true))
	{
		set_ped_config_flag(Global_34, 1, false);
		set_ped_can_be_targetted(Global_34, true);
	}
	if (is_ped_performing_melee_action(Global_34, 32768, 0))
	{
		if (has_anim_event_fired(Global_34, -1790079639))
		{
			func_480(-0.05f, 0);
		}
		if (!func_465(&(uParam0->f_73)))
		{
			func_444(&(uParam0->f_73), 1);
			func_482(func_481(1362081221), 1);
		}
	}
	if (!bVar0)
	{
		_0xcd7ca3013fd12749(get_player_index(), 0);
	}
	func_483(uParam0, uParam1);
	if (func_465(&(uParam0->f_73)) && func_484(&(uParam0->f_73)) > 600f)
	{
		func_466(&(uParam0->f_73));
	}
	if (_0xec6b59be445fec51(Global_34) != 1752953247)
	{
		_0x8ba83cc4288cd56d(player_ped_id(), 1752953247);
		_0x4a056257802dd3e5(player_id(), true);
	}
	if (!Global_1940085->f_14)
	{
		func_37(1);
	}
	switch (*uParam0)
	{
		case 0:
			if (func_485(uParam0))
			{
				func_37(1);
				func_486(uParam0, 1);
			}
			break;
		case 1:
			func_487(uParam0);
			if (&Global_1940085 == 1)
			{
				if (!func_333(883))
				{
					func_79(883, 0);
				}
				func_486(uParam0, 2);
			}
			else if (&Global_1940085 == 2)
			{
				if (!func_333(883))
				{
					func_79(883, 0);
				}
				func_486(uParam0, 3);
			}
			break;
		case 2:
			func_487(uParam0);
			if (&Global_1940085 == 2)
			{
				if (!func_333(883))
				{
					func_79(883, 0);
				}
				func_486(uParam0, 3);
			}
			else if (&Global_1940085 == 0)
			{
				func_486(uParam0, 1);
			}
			break;
		case 3:
			func_487(uParam0);
			if (&Global_1940085 == 1)
			{
				if (!func_333(883))
				{
					func_79(883, 0);
				}
				func_486(uParam0, 2);
			}
			else if (&Global_1940085 == 0)
			{
				func_486(uParam0, 1);
			}
			break;
		case 4:
			func_308(uParam0);
			break;
	}
}

void func_308(var uParam0)
{
	func_37(0);
	func_488(uParam0);
	func_489();
	_0x06c3db00b69d5435(player_id(), "LEAVE");
	_0x988c9045531b9fce(player_id(), "PLAYER_SIT");
	_0x0faf95d71ed67ade(player_id(), "INTERACT_MELEE");
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(&(uParam0->f_20[iVar0])))
		{
			delete_object(uParam0->f_20[iVar0]);
		}
		iVar0++;
	}
	*uParam0 = 0;
}

void func_309(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar2 = iVar0;
		iVar4 = _0xd97d8d905f1562f2(func_490(iVar2));
		func_491(uParam1, iVar2, iVar4);
		func_493(uParam1, func_492(iVar2));
		iVar0++;
	}
	_text_database_request(func_494());
	func_493(uParam1, 16);
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		iVar5 = iVar0;
		func_497(uParam1, iVar5, func_496(func_495(iVar5)));
		iVar0++;
	}
	iVar3 = func_498(-1103026985);
	func_499(uParam1, iVar3);
	func_501(uParam1, func_500(iVar3));
	func_503(uParam0, func_502(uParam1));
	if (func_502(uParam1) != 15)
	{
		iVar1 = func_504(iVar3, func_502(uParam1));
	}
	func_506(uParam1, func_505(iVar1));
	func_508(uParam1, func_507(iVar3));
	func_510(uParam1, func_509(iVar3, -1919535953));
}

bool func_310(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar1 = iVar0;
		uVar2 = func_511(uParam0, iVar1);
		if (!func_512(uParam0, func_492(iVar1)))
		{
		}
		else if (!_0x603ac35fd4602c76(uVar2))
		{
		}
		else
		{
			func_513(uParam0, iVar1);
			func_514(uParam0, func_492(iVar1));
		}
		iVar0++;
	}
	if (func_512(uParam0, 16))
	{
		if (_text_database_has_loaded(func_494()))
		{
			func_514(uParam0, 16);
		}
	}
	return !func_515(uParam0);
}

void func_311(var uParam0)
{
	func_516(uParam0);
}

void func_312(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 <= (get_number_of_events(1) - 1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_517(uParam0, uParam1, uParam2, iVar0);
				break;
		}
		iVar0++;
	}
}

void func_313(var uParam0, var uParam1)
{
	func_518(uParam0, uParam1);
	func_519(uParam1);
	func_520(uParam1);
}

void func_314(var uParam0, var uParam1)
{
	iVar6 = get_game_timer();
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar7 = int_to_participantindex(iVar1);
		if (!network_is_participant_active(iVar7))
		{
		}
		else
		{
			iVar8 = network_get_player_index(iVar7);
			if (!_network_is_player_index_valid(iVar8))
			{
			}
			else if (!network_is_player_active(iVar8))
			{
			}
			else
			{
				iVar0 = (iVar0 || (*uParam0)[iVar1]->f_26);
			}
		}
		iVar1++;
	}
	if (is_bit_set(iVar0, 0))
	{
		return;
	}
	iVar2 = participant_id_to_int();
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return;
	}
	if (!func_61(uParam0, 4096, participant_id_to_int()))
	{
		return;
	}
	if (!is_bit_set((*uParam0)[iVar2]->f_26, 2))
	{
		return;
	}
	if (func_521(&(uParam1->f_385)))
	{
		return;
	}
	if (func_522(&(uParam1->f_385), 2))
	{
		if ((func_523(&(uParam1->f_385), 2) + 120000) >= iVar6)
		{
			return;
		}
		else
		{
			return;
		}
	}
	if (func_524(&(uParam1->f_385), 2) != 0)
	{
		if (func_524(&(uParam1->f_385), 2) + 5000 >= iVar6)
		{
			return;
		}
	}
	iVar5 = func_525(&(uParam1->f_385), 2);
	iVar3 = func_526(iVar5);
	iVar4 = get_random_int_in_range(0, iVar3);
	iVar9 = func_527(iVar5, iVar4);
	func_528(2, iVar9, 0, 0, 0, 0, 0);
	func_529(&(uParam1->f_385), 2, iVar6);
}

void func_315(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_530(uParam1);
	if (Global_1298000->f_43 && iVar0 != 3)
	{
		Global_1298000->f_43 = 0;
	}
	if (func_521(uParam1))
	{
		func_531(uParam0, uParam1, uParam2);
	}
	else
	{
		iVar1 = func_532(uParam1, iVar0);
		iVar2 = -1;
		if (func_533(uParam0, uParam1, iVar0))
		{
			switch (iVar1)
			{
				case 0:
				case 1:
				case 13:
					break;
				default:
					func_534(uParam1, iVar0, 13);
					iVar1 = func_532(uParam1, iVar0);
					break;
			}
		}
		switch (iVar1)
		{
			case 0:
				iVar2 = func_535(uParam0, uParam1, uParam2, iVar0);
				break;
			case 1:
				iVar2 = func_536(uParam0, uParam1, uParam2, iVar0);
				break;
			case 2:
				iVar2 = func_537(uParam1, iVar0);
				break;
			case 3:
				iVar2 = func_538(uParam1, uParam2, iVar0);
				break;
			case 4:
				iVar2 = func_539(uParam1, iVar0);
				break;
			case 12:
				break;
			case 13:
				iVar2 = func_540(uParam1, iVar0);
				break;
			default:
				break;
		}
		if (iVar2 != -1)
		{
			func_534(uParam1, iVar0, iVar2);
		}
		func_541(uParam1);
	}
}

void func_316(var uParam0, var uParam1, var uParam2)
{
	switch (func_542(uParam1))
	{
		case 0:
			func_543(uParam1);
			break;
		case 1:
			func_544(uParam1, uParam2);
			break;
		case 2:
			break;
		case 3:
			func_545(uParam1, uParam2);
			break;
		case 4:
			func_546(uParam1);
			break;
		case 5:
			func_547(uParam1);
			break;
		default:
			break;
	}
}

void func_317(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar1 = iVar0;
		uVar2 = func_511(uParam0, iVar1);
		if (!_0x7907969497ea92f5(uVar2))
		{
		}
		else if (!_0x603ac35fd4602c76(uVar2))
		{
		}
		else
		{
			_datafile_unload(uVar2);
			func_491(uParam0, iVar1, 0);
		}
		iVar0++;
	}
	func_548(uParam0);
	_text_database_delete(func_494());
	func_549(0);
}

int func_318(var uParam0, var uParam1, var uParam2, var uParam3)
{
	bVar0 = network_is_host_of_this_script();
	func_550(uParam0, uParam1, &(uParam2->f_8), bVar0);
	if (bVar0)
	{
		if (!func_551(&(uParam0->f_58), uParam1, &(uParam2->f_8), uParam3))
		{
			return 0;
		}
	}
	if (!func_552(uParam0, uParam1, uParam2, uParam3))
	{
		return 0;
	}
	return 1;
}

void func_319(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4)
{
	if (func_32(iParam2, 1) || func_32(iParam2, 2))
	{
		return;
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (network_does_network_id_exist(uParam0->f_3[iVar0]->f_1))
			{
				if (network_has_control_of_network_id(uParam0->f_3[iVar0]->f_1))
				{
					func_401(&(uParam0->f_3[iVar0]->f_1), 0);
				}
			}
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (network_does_network_id_exist(&(uParam0->f_3[iVar0]->f_4[iVar1])))
				{
					if (network_has_control_of_network_id(&(uParam0->f_3[iVar0]->f_4[iVar1])))
					{
						func_401(uParam0->f_3[iVar0]->f_4[iVar1], 0);
					}
				}
				iVar1++;
			}
			iVar0++;
		}
		*uParam0 = 0;
	}
	if (does_entity_exist(iParam2->f_8.f_100))
	{
		delete_object(&(iParam2->f_8.f_100));
	}
	if (does_entity_exist(iParam2->f_8.f_101))
	{
		delete_object(&(iParam2->f_8.f_101));
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (_does_volume_exist(iParam2->f_8[iVar2]->f_15))
		{
			_delete_volume(iParam2->f_8[iVar2]->f_15);
		}
		func_345(&(iParam2->f_8[iVar2]->f_9), 1, 1);
		func_345(&(iParam2->f_8[iVar2]->f_10), 1, 1);
		func_345(&(iParam2->f_8[iVar2]->f_12), 1, 1);
		func_345(&(iParam2->f_8[iVar2]->f_8), 1, 1);
		func_345(&(iParam2->f_8[iVar2]->f_11), 1, 1);
		func_345(&(iParam2->f_8[iVar2]->f_13), 1, 1);
		func_345(&(iParam2->f_8[iVar2]->f_14), 1, 1);
		iVar2++;
	}
	iVar0 = 0;
	while (iVar0 < iParam2->f_8.f_115)
	{
		if (_does_volume_exist(&(iParam2->f_8.f_115[iVar0])))
		{
			_delete_volume(&(iParam2->f_8.f_115[iVar0]));
		}
		iVar0++;
	}
	func_553(&(uParam0->f_81), &(iParam2->f_8.f_118));
	_0x531a78d6bf27014b("Moonshine_Band_Sounds");
	_0x6ab944df68b512d3(-711824048);
	_0x6ab944df68b512d3(-11740743);
	if (_0x7409669c5ed50144(-1424050856))
	{
		_0x50b72a754ee64a71(-1424050856);
	}
	_0xd42c543f73233041(0);
	func_554(0);
}

void func_320(var uParam0, var uParam1, var uParam2)
{
	if (!func_555(uParam1, uParam2) || uParam0->f_14 == 3)
	{
		return;
	}
	func_556(uParam0);
	switch (uParam0->f_14)
	{
		case 0:
			if (!_does_volume_exist(uParam0->f_52))
			{
				uParam0->f_52 = _create_volume_box_with_custom_name(func_557(uParam1), func_558(uParam1), func_559(), "DANCE_AREA");
			}
			else
			{
				func_560(uParam0, 1);
			}
			break;
		case 1:
			func_561(uParam0);
			if (func_562(uParam0, uParam2))
			{
				if (!func_341(uParam0->f_42))
				{
					uParam0->f_42 = func_337(func_563(), *uParam0, uParam0->f_52, 3, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_564(uParam0);
				}
				if (func_341(uParam0->f_42))
				{
					_0x8b55b324a9123f6b(&(uParam0->f_7[0]), uParam0->f_52, "MSHINE_DANCE_FLOOR", 2, 1, 0);
					_uiprompt_set_group(func_565(uParam0->f_42), &(uParam0->f_7[0]), 0);
					func_477(uParam0->f_42, 578288361);
					if (func_343(uParam0->f_42, 1))
					{
						if (!is_bit_set(uParam0->f_5, 2))
						{
							set_bit(&(uParam0->f_5), 2);
						}
						func_566(uParam0);
						set_bit(&(uParam0->f_5), 0);
						uParam0->f_6 = 0;
						func_560(uParam0, 2);
					}
				}
			}
			else if (func_341(uParam0->f_42))
			{
				func_345(&(uParam0->f_42), 1, 1);
			}
			break;
		case 2:
			func_567();
			func_561(uParam0);
			if (func_562(uParam0, uParam2))
			{
				if (is_bit_set(uParam0->f_5, 0))
				{
					func_568(&(Global_1071686->f_28357.f_1), 4096);
					_0x2804658eb7d8a50b(5, -1840051808);
					if (func_569(uParam0))
					{
						if (func_570())
						{
							_0x50b72a754ee64a71(108694200);
							clear_bit(&(uParam0->f_5), 1);
							func_571(uParam0->f_45, 0);
							func_571(uParam0->f_44, 0);
						}
					}
					if (!func_341(uParam0->f_45))
					{
						uParam0->f_45 = func_337(func_572(), uParam0->f_1, uParam0->f_52, 3, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
						func_476(uParam0->f_45, &(uParam0->f_7[1]), 0, 1);
					}
					else if (is_bit_set(uParam0->f_5, 1))
					{
						func_571(uParam0->f_45, 1);
					}
					else if (func_343(uParam0->f_45, 0))
					{
						func_573(uParam0);
						clear_bit(&(uParam0->f_5), 0);
						func_560(uParam0, 1);
						func_39(&(Global_1071686->f_28357.f_1), 4096);
						return;
					}
					if (!func_341(uParam0->f_44))
					{
						uParam0->f_44 = func_575(func_574(), uParam0->f_2, uParam0->f_3, 17);
						func_476(uParam0->f_44, &(uParam0->f_7[1]), 0, 1);
						if (uParam0->f_4 == 1)
						{
							func_571(uParam0->f_44, 1);
						}
					}
					else if (is_bit_set(uParam0->f_5, 1) || uParam0->f_4 == 1)
					{
						func_571(uParam0->f_44, 1);
					}
					else if (func_576(uParam0))
					{
						uParam0->f_6 = (uParam0->f_6 - 1);
						if (uParam0->f_6 < 0)
						{
							uParam0->f_6 = (uParam0->f_4 - 1);
						}
					}
					else if (func_577(uParam0))
					{
						uParam0->f_6++;
						if (uParam0->f_6 >= uParam0->f_4)
						{
							uParam0->f_6 = 0;
						}
					}
					_0x929ddd5538f3df1f(&(uParam0->f_21[uParam0->f_6]), &(uParam0->f_7[1]));
					_0x8b55b324a9123f6b(&(uParam0->f_7[1]), uParam0->f_52, "MSHINE_DANCE_FLOOR", 2, 1, 0);
					_uiprompt_set_group(func_565(uParam0->f_42), &(uParam0->f_7[1]), 0);
				}
				else
				{
					func_578(uParam0);
					func_579(uParam0);
					func_39(&(Global_1071686->f_28357.f_1), 4096);
					func_560(uParam0, 1);
				}
			}
			else
			{
				func_573(uParam0);
				func_39(&(Global_1071686->f_28357.f_1), 4096);
				func_560(uParam0, 1);
			}
			break;
		case 3:
			break;
	}
}

void func_321(var uParam0, int iParam1)
{
	uParam0->f_1668 = iParam1;
}

void func_322(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1670 = iParam2;
	uParam0->f_1669 = iParam1;
	uParam0->f_1671 = 0;
}

void func_323(var uParam0)
{
	if (!is_string_null_or_empty(func_580(uParam0->f_1668)))
	{
		_0x1b3c2d961f5fc0e1(func_580(uParam0->f_1668));
	}
}

bool func_324(var uParam0)
{
	if (!is_string_null_or_empty(func_580(uParam0->f_1668)))
	{
		if (!_0xdd0b7c5ae58f721d(func_580(uParam0->f_1668)))
		{
			return false;
		}
	}
	return true;
}

bool func_325(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_581(uParam0, iVar0) == 6)
		{
			iVar1 = net_to_ped(uParam0->f_3[iVar0]->f_1);
		}
		else if (func_582(uParam0->f_3[iVar0]->f_3))
		{
			iVar1 = get_player_ped(uParam0->f_3[iVar0]->f_3);
		}
	else
	{
		}
		else if (_0xbe28db99556ff8d9(iVar1) == 978192019 && _0x886657c5b3d8ede3(iVar1) > 0)
		{
			if (iParam1 != 0)
			{
				iVar2 = _0xc68c02de259c927c(iVar1);
				if ((iVar2 - _0x886657c5b3d8ede3(iVar1)) < iParam1)
				{
					return false;
				}
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_326(var uParam0)
{
	return uParam0->f_2;
}

void func_327(var uParam0)
{
	if (uParam0->f_1671 == 0)
	{
		return;
	}
	func_583(uParam0);
	uParam0->f_1671 = 0;
}

void func_328()
{
	disable_control_action(0, 1644850270, false);
}

bool func_329(var uParam0)
{
	return is_bit_set(uParam0->f_5, 7);
}

Vector3 func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { 1772.206f, -813.9369f, 187.9601f };
			break;
		case 1:
			vVar0 = { -1075.974f, 702.8006f, 79.5949f };
			break;
		case 2:
			vVar0 = { -2772.34f, -3063.416f, -13.3396f };
			break;
		case 3:
			vVar0 = { 1612.828f, 824.5082f, 120.3028f };
			break;
		case 4:
			vVar0 = { -1847.322f, -1725.88f, 84.616f };
			break;
	}
	return vVar0;
}

float func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = 133.4f;
			break;
		case 1:
			fVar0 = -66.5f;
			break;
		case 2:
			fVar0 = -117.7f;
			break;
		case 3:
			fVar0 = 156.8f;
			break;
		case 4:
			fVar0 = -30f;
			break;
	}
	return fVar0;
}

void func_332(var uParam0, vector3 vParam1, float fParam4)
{
	if (uParam0->f_1671 == 1)
	{
		return;
	}
	sVar0 = func_580(uParam0->f_1668);
	_0x0e94c95ec3185fa9(sVar0, vParam1, 0f, 0f, fParam4);
	func_584(uParam0);
	uParam0->f_1671 = 1;
}

bool func_333(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17411.f_2565[iVar1]), iVar2);
}

bool func_334()
{
	if (!func_585() && func_586(1))
	{
		return true;
	}
	return false;
}

bool func_335(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	func_352(iParam0, iParam2, iParam3, iParam4);
	if (!_datafile_get_vector(uParam1, &(Global_1298378->f_1)))
	{
		return false;
	}
	return true;
}

bool func_336(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	func_352(iParam0, iParam2, iParam3, iParam4);
	if (!_datafile_get_float(uParam1, &(Global_1298378->f_1)))
	{
		return false;
	}
	return true;
}

int func_337(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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
		if (func_587(iVar0, 2))
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
		func_588(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, bParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_338(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_341(iParam0))
	{
		return;
	}
	iVar0 = func_589(iParam0);
	if (bParam1)
	{
		func_590(iParam0, 4);
		if (bParam3)
		{
			func_591(iVar0, 1);
		}
		func_592(iVar0, 1);
	}
	else
	{
		func_593(iParam0, 4);
		func_592(iVar0, 0);
	}
}

void func_339(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_341(iParam0))
	{
		return;
	}
	iVar0 = func_589(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_visible((*Global_1951255)[iVar0]->f_3, bParam1);
}

bool func_340()
{
	return Global_1896738->f_382;
}

bool func_341(int iParam0)
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

bool func_342(int iParam0, bool bParam1)
{
	if (bParam1 && !func_341(iParam0))
	{
		return false;
	}
	return !func_587(iParam0, 4);
}

bool func_343(int iParam0, bool bParam1)
{
	if (bParam1 && !func_341(iParam0))
	{
		return false;
	}
	iVar0 = func_589(iParam0);
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

int func_344(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_594();
	}
	if (!func_595(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_596(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

void func_345(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_341(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_589(*iParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_597(iVar0);
	*iParam0 = 0;
}

bool func_346(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_347(int* iParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, iParam0, 9))
	{
		return false;
	}
	return true;
}

void func_348(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0->f_4)
	{
		case 377515857:
			func_598(iParam0->f_5, &vVar0);
			if (is_ped_using_any_scenario(iParam2->f_1252.f_122) && iParam0->f_6 != 1)
			{
				_0xe7fa07624574b79a(iParam2->f_1252.f_122, get_player_ped(player_id()), 1, 1, 2.5f, 1, 0, 0, 0);
			}
			else
			{
				task_look_at_entity(iParam2->f_1252.f_122, get_player_ped(player_id()), 1500, 0, 51, 0);
			}
			func_599(iParam2->f_1252.f_162, vVar0);
			(*uParam1)[participant_id_to_int()]->f_12.f_7 = 0;
			break;
		case 1942026666:
			func_600(iParam0->f_5, &vVar0);
			if (func_601(iParam2->f_1252.f_261, vVar0))
			{
			}
			(*uParam1)[participant_id_to_int()]->f_12.f_8 = 0;
			break;
		case -174148999:
			func_602(&(iParam2->f_8.f_118));
			break;
	}
}

int func_349(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_604(func_603(0)) && func_605(func_603(0)) == 7)
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
			iVar6 = func_606(iParam0);
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
			return func_607(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_43(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_608(iParam0, 1);
	if (!bVar0)
	{
		if (func_609(iParam0, bParam1))
		{
			return func_607(iParam0);
		}
		else if (func_610(iParam0, bParam1))
		{
			if (func_611(iParam0, bParam1))
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
		return func_606(iParam0);
	}
	else if (func_609(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_613(func_612(func_603(0)), 1) == 395262693)
		{
			return func_607(iParam0);
		}
		else
		{
			return func_607(iParam0);
		}
	}
	else if (func_610(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

int func_350(char* sParam0, int iParam1, int iParam2)
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
	sVar8 = _create_var_string(10, sParam0, func_614(&cVar0, iParam2));
	uVar9 = func_615(sVar8, -2, 0, 0, 0, 1);
	return uVar9;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -703939862;
		case 1:
			return -408236271;
		default:
			break;
	}
	return -2075002545;
}

void func_352(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_616();
	Global_1298378->f_1.f_2 = iParam0;
	Global_1298378->f_1.f_3 = iParam1;
	Global_1298378->f_1.f_4 = iParam2;
	Global_1298378->f_1.f_1 = iParam3;
}

int func_353(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!func_404(iParam0, &iVar0, iParam6, iParam7, iParam8))
	{
		return 0;
	}
	iVar1 = func_405(iParam2, 0, 0, iVar0);
	if (iVar1 < 1)
	{
		return 0;
	}
	iVar14 = _create_volume_aggregate();
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		func_352(iParam3, iVar2, 0, iVar0);
		if (!_datafile_get_vector(&vVar8, &(Global_1298378->f_1)))
		{
		}
		else
		{
			func_352(iParam4, iVar2, 0, iVar0);
			if (!_datafile_get_vector(&vVar11, &(Global_1298378->f_1)))
			{
			}
			else
			{
				func_352(iParam5, iVar2, 0, iVar0);
				if (!_datafile_get_vector(&vVar5, &(Global_1298378->f_1)))
				{
					Jump @338; //curOff = 152
				}
				else if ((vVar5.x == 0f || vVar5.y == 0f) || vVar5.z == 0f)
				{
				}
				else
				{
					func_352(iParam1, iVar2, 0, iVar0);
					if (!_datafile_get_hash(&iVar4, &(Global_1298378->f_1)))
					{
					}
					else
					{
						switch (iVar4)
						{
							case 391302943:
								_0x12fcaa23f2320422(iVar14, -1612834106, vVar8, vVar11, vVar5);
								break;
							case 953812642:
								_0x12fcaa23f2320422(iVar14, -432403087, vVar8, vVar11, vVar5);
								break;
							case 883073064:
								_0x12fcaa23f2320422(iVar14, 665633627, vVar8, vVar11, vVar5);
								break;
							default:
								Jump @338; //curOff = 326
								iVar3++;
							}
						}
					}
				}
				iVar2++;
			}
			if (iVar3 < 1)
			{
				_delete_volume(iVar14);
				return 0;
			}
			return iVar14;
		}

bool func_354(int iParam0)
{
	if (func_617(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_355()
{
	return true;
}

bool func_356()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

char* func_357(int iParam0)
{
	func_352(-1618722936, func_407(iParam0), 0, 0);
	if (!_datafile_get_string(&Var0, &(Global_1298378->f_1)))
	{
		return "Invalid";
	}
	return func_618(Var0);
}

bool func_358(int iParam0, var uParam1)
{
	if (!func_402(iParam0))
	{
		return false;
	}
	vVar0 = { func_619(iParam0) };
	iVar3 = get_interior_at_coords(vVar0);
	if (!is_valid_interior(iVar3))
	{
		return false;
	}
	pin_interior_in_memory(iVar3);
	if (is_interior_ready(iVar3))
	{
		*uParam1 = iVar3;
		return true;
	}
	return false;
}

bool func_359(int iParam0, int iParam1)
{
	if (!is_valid_interior(iParam1))
	{
		return false;
	}
	if (!is_interior_ready(iParam1))
	{
		return false;
	}
	sVar0 = func_357(iParam0);
	if (compare_strings(sVar0, "Invalid", false, -1) == 0)
	{
		return false;
	}
	if (!_is_interior_entity_set_valid(iParam1, sVar0))
	{
		return false;
	}
	activate_interior_entity_set(iParam1, sVar0, 0);
	return true;
}

bool func_360()
{
	if (!func_620())
	{
		return false;
	}
	return func_43(Global_1901947->f_44.f_5, 8);
}

int func_361(int iParam0)
{
	func_352(2013824449, func_409(iParam0), 0, 0);
	if (!_datafile_get_int(&uVar0, &(Global_1298378->f_1)))
	{
		return 0;
	}
	return uVar0;
}

void func_362(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!is_valid_interior(iParam0))
	{
		return;
	}
	if (!is_interior_ready(iParam0))
	{
		return;
	}
	sVar0 = "";
	if (func_621(iParam1, iParam2))
	{
		sVar0 = func_622(iParam1, iParam2, iParam3);
	}
	else
	{
		sVar0 = func_623(iParam1, iParam2);
	}
	if (_0x375f5870a7b8bec1(sVar0) || compare_strings(sVar0, "Invalid", false, -1) == 0)
	{
		return;
	}
	if (!_is_interior_entity_set_valid(iParam0, sVar0))
	{
		return;
	}
	deactivate_interior_entity_set(iParam0, sVar0, true);
	sVar0 = "";
	if (func_621(iParam1, iParam2))
	{
		sVar0 = func_624(iParam1, iParam2, iParam3);
	}
	else
	{
		sVar0 = func_625(iParam1, iParam2);
	}
	if (_0x375f5870a7b8bec1(sVar0) || compare_strings(sVar0, "Invalid", false, -1) == 0)
	{
		return;
	}
	if (!_is_interior_entity_set_valid(iParam0, sVar0))
	{
		return;
	}
	if (is_interior_entity_set_active(iParam0, sVar0))
	{
		deactivate_interior_entity_set(iParam0, sVar0, true);
	}
}

bool func_363(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!is_valid_interior(iParam0))
	{
		return true;
	}
	if (!is_interior_ready(iParam0))
	{
		return false;
	}
	if (func_626(iParam1, iParam2, iParam4))
	{
		return true;
	}
	sVar0 = "";
	if (func_621(iParam1, iParam2))
	{
		sVar0 = func_622(iParam1, iParam2, iParam3);
	}
	else
	{
		sVar0 = func_623(iParam1, iParam2);
	}
	if (_0x375f5870a7b8bec1(sVar0) || compare_strings(sVar0, "Invalid", false, -1) == 0)
	{
		return true;
	}
	if (!_is_interior_entity_set_valid(iParam0, sVar0))
	{
		return true;
	}
	activate_interior_entity_set(iParam0, sVar0, 0);
	sVar0 = "";
	iVar1 = 0;
	if (func_621(iParam1, iParam2))
	{
		sVar0 = func_624(iParam1, iParam2, iParam3);
		iVar1 = func_627(iParam1, iParam2, iParam3);
	}
	else
	{
		sVar0 = func_625(iParam1, iParam2);
		iVar1 = func_628(iParam1, iParam2);
	}
	if (_0x375f5870a7b8bec1(sVar0) || compare_strings(sVar0, "Invalid", false, -1) == 0)
	{
	}
	else if (func_629(iVar1, iParam4))
	{
		activate_interior_entity_set(iParam0, sVar0, 0);
	}
	else
	{
		deactivate_interior_entity_set(iParam0, sVar0, true);
	}
	return true;
}

int func_364(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_352(iParam0, iParam1, iParam2, iParam3);
	return _datafile_get_num_nodes(&(Global_1298378->f_1));
}

bool func_365(int iParam0, var uParam1, int iParam2, char* sParam3)
{
	if ((iParam2 < 0 || iParam2 >= *uParam1) || iParam2 >= 8)
	{
		return false;
	}
	iVar8 = func_213(iParam0);
	if (!func_630(1997721625, &Var0, iVar8, iParam2, 0))
	{
		return false;
	}
	MemCopy(sParam3, {Var0}, 2);
	if (_0x375f5870a7b8bec1(sParam3))
	{
		return false;
	}
	if (!func_630(192356085, &Var0, iVar8, iParam2, 0))
	{
		return false;
	}
	MemCopy(&(sParam3->f_2), {Var0}, 4);
	if (_0x375f5870a7b8bec1(&(sParam3->f_2)))
	{
		return false;
	}
	if (!func_630(-758300899, &Var0, iVar8, iParam2, 0))
	{
		return false;
	}
	sParam3->f_6 = { Var0 };
	if (_0x375f5870a7b8bec1(&(sParam3->f_6)))
	{
		return false;
	}
	if (!func_335(-2059428283, &(sParam3->f_15), iVar8, iParam2, 0))
	{
		return false;
	}
	sParam3->f_14 = func_631(1869099762, func_213(iParam0), iParam2, 0, 1);
	return true;
}

char* func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AZL_MP_Bayou_Nwa_Moonshine_Bar_Exterior_Ambience";
		case 1:
			return "AZL_MP_Grizzlies_Moonshine_Bar_Exterior_Ambience";
		case 3:
			return "AZL_MP_Heartlands_Moonshine_Bar_Exterior_Ambience";
		case 4:
			return "AZL_MP_Tall_Trees_Moonshine_Bar_Exterior_Ambience";
		case 2:
			return "AZL_MP_Hennigans_Stead_Moonshine_Bar_Exterior_Ambience";
		default:
			break;
	}
	return "";
}

void func_367(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (uParam2->f_2)
	{
		case 0:
			if (!func_372(uParam0->f_2, iParam3, &uVar0) || !func_632(uParam0->f_2, iParam3, &uVar8))
			{
				uParam2->f_2 = 1;
			}
			else
			{
				*uParam2 = func_633(uParam0->f_2, iParam3);
				if (!_does_volume_exist(*uParam2))
				{
					uParam2->f_2 = 1;
				}
				else
				{
					uParam2->f_2 = 2;
				}
			}
			break;
		case 1:
			break;
		case 2:
			if (func_220(player_ped_id(), *uParam2, 1, 0))
			{
				uParam2->f_2 = 3;
			}
			break;
		case 3:
			if (!func_220(player_ped_id(), *uParam2, 1, 0))
			{
				uParam2->f_2 = 2;
			}
			else
			{
				func_372(uParam0->f_2, iParam3, &uVar0);
				func_632(uParam0->f_2, iParam3, &uVar8);
				if (_0x6339c1ea3979b5f7(&uVar8, &uVar0))
				{
					uParam2->f_2 = 4;
				}
			}
			break;
		case 4:
			if (!func_220(player_ped_id(), *uParam2, 1, 0))
			{
				if (func_372(uParam0->f_2, iParam3, &uVar0))
				{
					_0x9428447ded71fc7e(&uVar0);
				}
				uParam2->f_2 = 2;
			}
			break;
	}
}

void func_368(int iParam0, var uParam1, int iParam2)
{
	bVar2 = func_634(iParam0, &iVar0, &iVar1, iParam2);
	if (!bVar2 && func_61(uParam1, iVar1, -1))
	{
		func_77(uParam1, iVar1);
	}
	else if (bVar2 && !func_61(uParam1, iVar1, -1))
	{
		func_62(uParam1, iVar1);
	}
	if (func_72(iParam2, iVar1))
	{
		if (bVar2)
		{
			if (network_is_host_of_this_script())
			{
				if (!is_door_closed(iVar0))
				{
					_0x985767f5fa45bc44(iVar0);
					_0x5230bf34eb0ec645(iVar0);
					_0x3a77dae8b4fd7586(iVar0, 1);
					door_system_set_open_ratio(iVar0, 0f, 1);
					door_system_set_automatic_distance(iVar0, 35f);
				}
			}
		}
	}
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 848730153;
		case 1:
			return -1489442354;
		case 2:
			return -798508013;
		default:
			break;
	}
	return 0;
}

int func_370(int iParam0, int iParam1)
{
	if (!func_406(117141762, &uVar0, func_213(iParam0), iParam1, 0))
	{
		return 0;
	}
	return uVar0;
}

int func_371(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_372(int iParam0, int iParam1, var uParam2)
{
	if (func_630(-310041764, uParam2, func_213(iParam0), func_409(iParam1), 0))
	{
		return true;
	}
	return false;
}

void func_373(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if ((iParam2 < 0 || iParam2 >= *uParam1) || iParam2 >= 8)
	{
		return;
	}
	if (bParam3)
	{
		if (!func_635(uParam1, iParam2))
		{
			set_bit(&(uParam1->f_2), iParam2);
		}
	}
	else if (func_635(uParam1, iParam2))
	{
		clear_bit(&(uParam1->f_2), iParam2);
		func_636(iParam0, uParam1, iParam2, 0);
	}
}

int func_374(int iParam0, int iParam1)
{
	func_352(-2114138162, func_213(iParam0), func_351(iParam1), 0);
	if (!_datafile_get_hash(&uVar0, &(Global_1298378->f_1)))
	{
		return 0;
	}
	return uVar0;
}

int func_375(int iParam0, int iParam1)
{
	func_352(-1044597192, func_213(iParam0), func_637(iParam1), 0);
	if (!_datafile_get_hash(&uVar0, &(Global_1298378->f_1)))
	{
		return 0;
	}
	return uVar0;
}

int func_376(int iParam0, int iParam1)
{
	func_352(1561818473, func_213(iParam0), func_638(iParam1), 0);
	if (!_datafile_get_hash(&uVar0, &(Global_1298378->f_1)))
	{
		return 0;
	}
	return uVar0;
}

bool func_377(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam1 = func_374(iParam0, iVar0);
		if (iParam1 != 0)
		{
			if (!has_model_loaded(iParam1))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_378()
{
	return !func_4(2048);
}

bool func_379(int iParam0, int iParam1)
{
	func_352(-1239119638, func_213(iParam0), func_351(iParam1), 0);
	if (!_datafile_get_bool(&uVar0, &(Global_1298378->f_1)))
	{
		return false;
	}
	return uVar0;
}

bool func_380(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	iVar4 = 0;
	iVar5 = 0;
	iVar4 = func_374(uParam0->f_2, iParam3);
	if (iVar4 != 0)
	{
		iVar5 = func_639(uParam0->f_2, iParam3);
		fVar0 = func_640(uParam0->f_2, iParam3);
		vVar1 = { func_222(uParam0->f_2, iParam3) };
		if (!bParam4)
		{
			if (!func_412(uParam1->f_197[iParam3], iVar4, vVar1, fVar0, 1, 0, iVar5 == 0, 1, 1))
			{
				return false;
			}
			else
			{
				uParam2->f_1236[iParam3] = net_to_ped(&(uParam1->f_197[iParam3]));
			}
		}
		else
		{
			uParam2->f_1236[iParam3] = create_ped(iVar4, vVar1, fVar0, false, true, false, false);
		}
		if (!does_entity_exist(&(uParam2->f_1236[iParam3])))
		{
			return false;
		}
		if (iVar5 != 0)
		{
			_set_ped_body_component(&(uParam2->f_1236[iParam3]), iVar5);
			_update_ped_variation(&(uParam2->f_1236[iParam3]), true, true, true, true, false);
		}
		set_ped_config_flag(&(uParam2->f_1236[iParam3]), 130, true);
		set_ped_config_flag(&(uParam2->f_1236[iParam3]), 315, true);
		set_ped_config_flag(&(uParam2->f_1236[iParam3]), 422, true);
		set_ped_config_flag(&(uParam2->f_1236[iParam3]), 26, true);
		if (network_get_entity_is_networked(&(uParam2->f_1236[iParam3])))
		{
			set_entity_visible_in_cutscene(&(uParam2->f_1236[iParam3]), 1, 0, uParam0->f_1);
			_network_set_entity_invisible_to_network(&(uParam2->f_1236[iParam3]), true);
		}
		if (iParam3 == 0)
		{
			_0x24c82ef607105faa(&(uParam2->f_1236[iParam3]), -703939862);
			_0x4b436bac8cbe9b07(&(uParam2->f_1236[iParam3]), 2, 0);
			set_ped_config_flag(&(uParam2->f_1236[iParam3]), 301, false);
		}
		else if (iParam3 == 1)
		{
			_0x24c82ef607105faa(&(uParam2->f_1236[iParam3]), -408236271);
			set_ped_config_flag(&(uParam2->f_1236[iParam3]), 301, true);
		}
		return true;
	}
	return false;
}

void func_381()
{
	func_70(2048);
}

bool func_382(int iParam0, int iParam1)
{
	func_352(1079198206, func_213(iParam0), func_351(iParam1), 0);
	_datafile_get_bool(&uVar0, &(Global_1298378->f_1));
	return uVar0;
}

void func_383(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	uParam0->f_11[iParam1] = uParam2;
}

int func_384(int iParam0)
{
	if (_does_volume_exist(Global_1298378->f_44.f_2))
	{
		return Global_1298378->f_44.f_2;
	}
	return func_353(187670217, -807402952, -1518164864, -721454775, -1966295520, 1181526356, func_213(iParam0), 0, 0);
}

int func_385(int iParam0)
{
	if (_does_volume_exist(Global_1298378->f_44.f_3))
	{
		return Global_1298378->f_44.f_3;
	}
	return func_353(187670217, -1659727752, -2124312922, 1218425034, 630831286, -649516596, func_213(iParam0), 0, 0);
}

Vector3 func_386(int iParam0, int iParam1)
{
	func_352(-1048579552, func_213(iParam0), func_637(iParam1), 0);
	if (!_datafile_get_vector(&vVar0, &(Global_1298378->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

void func_387(int iParam0, vector3 vParam1)
{
	if (func_116(vParam1))
	{
		return;
	}
	if (!func_399(iParam0))
	{
		return;
	}
	Global_1051439->f_72[iParam0]->f_3 = { vParam1 };
}

float func_388(int iParam0, int iParam1)
{
	func_352(-485277669, func_213(iParam0), func_637(iParam1), 0);
	if (!_datafile_get_float(&uVar0, &(Global_1298378->f_1)))
	{
		return 0f;
	}
	return uVar0;
}

float func_389(int iParam0, int iParam1)
{
	func_352(1163221628, func_213(iParam0), func_637(iParam1), 0);
	if (!_datafile_get_float(&uVar0, &(Global_1298378->f_1)))
	{
		return 0f;
	}
	return uVar0;
}

Vector3 func_390(int iParam0, int iParam1)
{
	func_352(-661540078, func_213(iParam0), func_638(iParam1), 0);
	if (!_datafile_get_vector(&vVar0, &(Global_1298378->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

bool func_391()
{
	return func_641(func_603(0));
}

bool func_392(int iParam0)
{
	return !func_642(iParam0);
}

void func_393(bool bParam0, bool bParam1)
{
	if (func_643(255) == 4)
	{
		return;
	}
	if (func_116(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_644(0);
	}
	else
	{
		if (bParam1)
		{
			func_645(0, 0, 0, 1);
		}
		func_646(0);
		func_647(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_648(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_649(Global_1102219->f_3849, 36);
	func_650(Global_1102219->f_3888, 36);
}

int func_394(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 152;
	}
	else if (iParam1 == 28)
	{
		return 153;
	}
	else if (iParam1 == 29)
	{
		return 154;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 159;
				case 6:
					return 161;
				case 23:
					return 162;
				case 22:
					return 160;
				case 16:
					return 65;
				default:
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168;
				case 6:
					return 170;
				case 23:
					return 171;
				case 22:
					return 169;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
				case 39:
					return 151;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 172;
				case 22:
					return 173;
				case 6:
					return 174;
				case 23:
					return 175;
				case 16:
					return 66;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 95:
		case 139:
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 137:
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 39:
					return 149;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 39:
					return 150;
				default:
					break;
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 15:
					return 148;
				default:
					break;
			}
			break;
	}
	if (iParam1 == 38)
	{
		return 147;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	if (iParam1 == 37)
	{
		return 134;
	}
	return -1;
}

int func_395(int iParam0)
{
	if (!func_400(iParam0))
	{
		return 0;
	}
	if (&Global_1051439->f_4472[iParam0] == 0)
	{
		Global_1051439->f_4472[iParam0] = func_651(iParam0);
	}
	return &(Global_1051439->f_4472[iParam0]);
}

float func_396(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 50f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 29:
			return 25f;
		case 38:
			return 70f;
		case 37:
			return 30f;
		case 15:
			return 25f;
		case 39:
			return 100f;
	}
	return 12.5f;
}

void func_397(int iParam0, int iParam1)
{
	if (!func_230(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
}

void func_398(int iParam0)
{
	(*Global_1051439)[Global_1051439->f_41] = iParam0;
	Global_1051439->f_41++;
	if (Global_1051439->f_41 >= 40)
	{
		Global_1051439->f_41 = (40 - 1);
	}
}

bool func_399(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_400(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

void func_401(var uParam0, bool bParam1)
{
	if (network_does_network_id_exist(*uParam0))
	{
		if (!network_has_control_of_network_id(*uParam0))
		{
			if (bParam1)
			{
				return;
			}
		}
	}
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		if (decor_exist_on(iVar0, "MC_EntityID"))
		{
			_decor_remove_all(iVar0);
		}
		delete_entity(&iVar0);
	}
}

bool func_402(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 5);
}

bool func_403(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0) || !network_is_player_active(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (!func_2(Global_1298536[iVar0]))
	{
		return false;
	}
	if ((*Global_1298536)[iVar0]->f_5.f_12 == -1)
	{
		return false;
	}
	return true;
}

bool func_404(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_352(iParam0, iParam2, iParam3, iParam4);
	return _datafile_get_data_node_index(iParam1, &(Global_1298378->f_1));
}

int func_405(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_616();
	Global_1298378->f_1.f_2 = iParam0;
	Global_1298378->f_1.f_3 = iParam1;
	Global_1298378->f_1.f_4 = iParam2;
	Global_1298378->f_1.f_1 = iParam3;
	return _datafile_get_num_nodes(&(Global_1298378->f_1));
}

bool func_406(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_352(iParam0, iParam2, iParam3, iParam4);
	if (!_datafile_get_hash(iParam1, &(Global_1298378->f_1)))
	{
		return false;
	}
	return true;
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -455129387;
		case 1:
			return -42959138;
		case 2:
			return -1426481784;
		case 4:
			return 1612771159;
		case 3:
			return -173991956;
		case 5:
			return -823788167;
		default:
			break;
	}
	return 2114176;
}

bool func_408(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	func_352(iParam0, iParam2, iParam3, iParam4);
	if (!_datafile_get_hash(&uVar0, &(Global_1298378->f_1)))
	{
		*uParam1 = 0;
		return false;
	}
	*uParam1 = uVar0;
	return true;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1089828659;
		case 3:
			return -2143252215;
		case 1:
			return 1405062883;
		case 2:
			return 751455437;
		case 4:
			return 732534179;
		case 5:
			return -1541436751;
		case 6:
			return 1441682081;
		case 7:
			return 1212031090;
		case 8:
			return 2128907710;
		case 9:
			return 667371050;
		default:
			break;
	}
	return -2075002545;
}

bool func_410(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	func_352(iParam0, iParam2, iParam3, iParam4);
	if (!_datafile_get_hash(&uVar0, &(Global_1298378->f_1)))
	{
		*uParam1 = 0;
		return false;
	}
	*uParam1 = uVar0;
	return true;
}

bool func_411(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	func_352(iParam0, iParam2, iParam3, iParam4);
	if (!_datafile_get_int(uParam1, &(Global_1298378->f_1)))
	{
		*uParam1 = -1;
		return false;
	}
	return true;
}

bool func_412(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_652(iParam1))
	{
		return false;
	}
	iVar0 = func_653(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam9)
		{
			_0x899a04afcc725d04(iVar0, _0xd42514c182121c23(iParam1));
		}
		if (bParam10)
		{
			set_ped_relationship_group_hash(iVar0, _get_default_relationship_group_hash(iParam1));
		}
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_413(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	if (does_entity_exist(uParam2->f_1[iParam3]->f_8))
	{
		return;
	}
	uParam2->f_1[iParam3]->f_8 = net_to_ped(&(uParam1->f_22[iParam3]));
	if (does_entity_exist(uParam2->f_1[iParam3]->f_8))
	{
		if (network_request_control_of_entity(uParam2->f_1[iParam3]->f_8))
		{
			set_ped_config_flag(uParam2->f_1[iParam3]->f_8, 168, true);
			set_decision_maker(uParam2->f_1[iParam3]->f_8, -370696379);
			_0x24c82ef607105faa(uParam2->f_1[iParam3]->f_8, -1531409982);
			set_ped_can_be_targetted(uParam2->f_1[iParam3]->f_8, false);
			set_ragdoll_blocking_flags(uParam2->f_1[iParam3]->f_8, 512);
			set_entity_invincible(uParam2->f_1[iParam3]->f_8, true);
			_network_set_entity_invisible_to_network(uParam2->f_1[iParam3]->f_8, true);
			set_entity_visible_in_cutscene(uParam2->f_1[iParam3]->f_8, 1, 0, uParam4);
			if (_does_scenario_point_exist(uParam2->f_1[iParam3]->f_9))
			{
				_task_use_scenario_point(uParam2->f_1[iParam3]->f_8, uParam2->f_1[iParam3]->f_9, func_414(iParam0, uParam2, iParam3), -1, false, true, 0, false, -1f, false);
			}
			else if (uParam2->f_1[iParam3]->f_5 != 0)
			{
				iVar0 = uParam2->f_1[iParam3]->f_4;
				if ((iVar0 > -1 && iVar0 < 25) && uParam2->f_358[iVar0]->f_1 != 0)
				{
					task_start_scenario_at_position(uParam2->f_1[iParam3]->f_8, uParam2->f_1[iParam3]->f_5, *uParam2->f_1[iParam3], uParam2->f_1[iParam3]->f_3, -1, false, true, func_414(iParam0, uParam2, iParam3), -1f, true);
				}
				else
				{
					_task_start_scenario_in_place(uParam2->f_1[iParam3]->f_8, uParam2->f_1[iParam3]->f_5, -1, false, uParam2->f_1[iParam3]->f_6, -1f, true);
				}
			}
			else
			{
				_task_start_scenario_in_place(uParam2->f_1[iParam3]->f_8, -862067678, -1, false, uParam2->f_1[iParam3]->f_6, -1f, true);
			}
		}
		else
		{
			*bParam5 = 1;
		}
	}
	else
	{
		*bParam5 = 1;
	}
}

var func_414(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_1[iParam2]->f_12 == 2)
	{
		return "";
	}
	if (uParam1->f_1[iParam2]->f_13 < 0)
	{
		return "";
	}
	if (!func_404(1128248853, &iVar8, func_213(iParam0), func_409(uParam1->f_1[iParam2]->f_10), 0))
	{
		return "";
	}
	if (!func_404(-848928450, &iVar9, uParam1->f_1[iParam2]->f_11, uParam1->f_1[iParam2]->f_12, iVar8))
	{
		return "";
	}
	if (!func_630(302120682, &Var0, uParam1->f_1[iParam2]->f_13, 0, iVar9))
	{
		return "";
	}
	return func_654(Var0);
}

bool func_415(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	switch (uParam0->f_7)
	{
		case 0:
			func_655(uParam0, uParam2, uParam3);
			break;
		case 1:
			func_656(uParam0, uParam2, uParam3);
			break;
		case 2:
			func_657(uParam0, uParam1, uParam2, uParam3);
			break;
		case 3:
			func_296(uParam0, uParam2, uParam3);
			break;
	}
	return true;
}

bool func_416(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	iVar0 = participant_id_to_int();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	switch (func_658(&((*uParam2)[iVar0]->f_12)))
	{
		case 0:
			func_659(uParam0, uParam2, uParam3);
			break;
		case 1:
			func_660(uParam0, uParam2, uParam3);
			break;
		case 2:
			func_661(uParam0, uParam1, uParam2, uParam3);
			break;
		case 3:
			func_297(uParam0, uParam2, uParam3, 0);
			break;
	}
	return true;
}

void func_417(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_418(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_419(var uParam0, int iParam1)
{
	uParam0->f_8 = iParam1;
}

bool func_420(var uParam0)
{
	if (_does_anim_scene_exist(*uParam0))
	{
		_delete_anim_scene(*uParam0);
		return false;
	}
	return true;
}

void func_421(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_422(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_423(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_424(var uParam0)
{
	return uParam0->f_4;
}

void func_425(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

int func_426(var uParam0)
{
	return uParam0->f_3;
}

void func_427(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

bool func_428(var uParam0)
{
	if (!func_420(&(uParam0->f_6)))
	{
		return false;
	}
	func_662(&(uParam0->f_6.f_26), 0);
	func_663(&(uParam0->f_6.f_25), 0);
	func_664(&(uParam0->f_6.f_24), 0);
	return true;
}

bool func_429(var uParam0, int* iParam1)
{
	iParam1->f_3 = { func_665(uParam0->f_2) };
	iParam1->f_2 = func_666(uParam0->f_2);
	iParam1->f_8 = func_667(uParam0->f_2);
	iParam1->f_7 = func_668(uParam0->f_2);
	if (func_434(iParam1))
	{
		request_model(iParam1->f_8, false);
		request_model(iParam1->f_7, false);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_430(int* iParam0)
{
	if (!func_434(iParam0))
	{
		return true;
	}
	if (!has_model_loaded(iParam0->f_8) || !has_model_loaded(iParam0->f_7))
	{
		return false;
	}
	return true;
}

bool func_431(var uParam0, var uParam1, var uParam2)
{
	if (network_is_host_of_this_script())
	{
		if (!network_does_network_id_exist(*uParam0))
		{
			if (func_669(uParam0, uParam1->f_8, uParam1->f_3, 1, 0))
			{
				*uParam1 = net_to_obj(*uParam0);
				if (does_entity_exist(*uParam1))
				{
					set_entity_visible_in_cutscene(*uParam1, 1, 0, uParam2);
					set_entity_heading(*uParam1, uParam1->f_2);
				}
			}
		}
		if (!network_does_network_id_exist(uParam0->f_1))
		{
			if (func_669(&(uParam0->f_1), uParam1->f_7, uParam1->f_3, 1, 0))
			{
				uParam1->f_1 = net_to_obj(uParam0->f_1);
				if (does_entity_exist(uParam1->f_1))
				{
					set_entity_visible_in_cutscene(uParam1->f_1, 1, 0, uParam2);
					set_entity_heading(uParam1->f_1, uParam1->f_2);
				}
			}
		}
	}
	bVar0 = false;
	if (network_does_network_id_exist(*uParam0))
	{
		if (!does_entity_exist(*uParam1))
		{
			*uParam1 = net_to_obj(*uParam0);
			set_entity_visible_in_cutscene(*uParam1, 1, 0, uParam2);
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (network_does_network_id_exist(uParam0->f_1))
	{
		if (!does_entity_exist(uParam1->f_1))
		{
			uParam1->f_1 = net_to_obj(uParam0->f_1);
			set_entity_visible_in_cutscene(uParam1->f_1, 1, 0, uParam2);
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_432(int iParam0)
{
	if (!func_43((*Global_1298536)[&Global_1296859]->f_19, iParam0))
	{
		func_110(&((*Global_1298536)[&Global_1296859]->f_19), iParam0);
	}
}

void func_433(var uParam0)
{
	iVar0 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	if (uParam0->f_6 != (*Global_1298536)[iVar1]->f_19.f_16 || func_670(&Global_1296859, 32768))
	{
		if (does_entity_exist(uParam0->f_1) && does_entity_exist(*uParam0))
		{
			if ((*Global_1298536)[iVar1]->f_19.f_16 == 0)
			{
				iVar2 = 1;
				while (iVar2 <= 20)
				{
					sVar3 = func_671(iVar2);
					sVar4 = func_672(iVar2);
					_0x669655ffb29ef1a9(uParam0->f_1, 2, sVar3, 0f);
					_0x669655ffb29ef1a9(*uParam0, 2, sVar4, 1f);
					iVar2++;
				}
			}
			else
			{
				iVar2 = 1;
				while (iVar2 <= (*Global_1298536)[iVar1]->f_19.f_16)
				{
					sVar3 = func_671(iVar2);
					sVar4 = func_672(iVar2);
					_0x669655ffb29ef1a9(uParam0->f_1, 2, sVar3, 1f);
					_0x669655ffb29ef1a9(*uParam0, 2, sVar4, 0f);
					iVar2++;
				}
			}
			uParam0->f_6 = (*Global_1298536)[iVar1]->f_19.f_16;
			func_673(32768);
		}
	}
}

bool func_434(int* iParam0)
{
	if (((iParam0->f_8 == 0 || iParam0->f_7 == 0) || !is_model_valid(iParam0->f_8)) || !is_model_valid(iParam0->f_7))
	{
		return false;
	}
	if (func_116(iParam0->f_3))
	{
		return false;
	}
	return true;
}

void func_435(var uParam0, var uParam1)
{
	if (network_is_host_of_this_script())
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (network_does_network_id_exist(&(uParam0->f_156[iVar1])))
			{
				iVar0 = net_to_obj(&(uParam0->f_156[iVar1]));
				vVar2 = { func_463(uParam0, uParam1, iVar1, 1) };
				if (_0x083d497d57b7400f(iVar0) && get_distance_between_coords(get_entity_coords(iVar0, true, false), vVar2, true) < 0.25f)
				{
					if (func_43(uParam0->f_156.f_9, func_674(iVar1)) == 0)
					{
						func_83(&(uParam0->f_156.f_9), func_674(iVar1));
					}
				}
				else if (func_43(uParam0->f_156.f_9, func_674(iVar1)))
				{
					func_99(&(uParam0->f_156.f_9), func_674(iVar1));
				}
			}
			else
			{
				if (func_43(uParam0->f_156.f_9, func_674(iVar1)))
				{
					func_99(&(uParam0->f_156.f_9), func_674(iVar1));
				}
				func_675(uParam0, uParam0->f_156[iVar1], func_463(uParam0, uParam1, iVar1, 0), uParam1->f_7);
			}
			iVar1++;
		}
		if (network_does_network_id_exist(uParam0->f_156.f_7) == 0)
		{
			func_675(uParam0, &(uParam0->f_156.f_7), func_461(uParam0, uParam1), uParam1->f_7);
		}
		if (network_does_network_id_exist(uParam0->f_156.f_8) == 0)
		{
			func_675(uParam0, &(uParam0->f_156.f_8), func_462(uParam0, uParam1), uParam1->f_7);
		}
	}
	uParam1->f_1053.f_26++;
	if (uParam1->f_1053.f_26 > 15)
	{
		uParam1->f_1053.f_26 = 0;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (network_does_network_id_exist(&(uParam0->f_156[iVar1])))
			{
				iVar0 = net_to_obj(&(uParam0->f_156[iVar1]));
				set_entity_visible_in_cutscene(iVar0, 1, 0, uParam1->f_7);
				if (func_676(uParam0, uParam1, &(uParam0->f_156[iVar1])))
				{
					_0x669655ffb29ef1a9(iVar0, 0, "tumbler_fill", 1f);
				}
			}
			iVar1++;
		}
		if (network_does_network_id_exist(uParam0->f_156.f_7))
		{
			iVar0 = net_to_obj(uParam0->f_156.f_7);
			set_entity_visible_in_cutscene(iVar0, 1, 0, uParam1->f_7);
		}
		if (network_does_network_id_exist(uParam0->f_156.f_8))
		{
			iVar0 = net_to_obj(uParam0->f_156.f_8);
			set_entity_visible_in_cutscene(iVar0, 1, 0, uParam1->f_7);
		}
	}
}

void func_436(var uParam0, var uParam1, var uParam2)
{
	if (func_677())
	{
		if ((get_frame_count() % 30) == 0)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (network_is_participant_active(int_to_participantindex(iVar0)))
				{
					if (network_is_player_active(network_get_player_index(int_to_participantindex(iVar0))))
					{
						iVar1 = get_player_ped(network_get_player_index(int_to_participantindex(iVar0)));
						func_678(uParam1, &iVar1, (*uParam2)[iVar0]->f_10);
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_437(var uParam0, var uParam1, bool bParam2)
{
	bVar0 = true;
	if (func_341(uParam1->f_1053.f_33))
	{
		if (bParam2)
		{
			if (func_342(uParam1->f_1053.f_33, 0) == 0)
			{
				uParam1->f_1053.f_85 = 0;
				bVar0 = false;
			}
		}
	}
	iVar1 = net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36]));
	vVar2 = { func_463(uParam0, uParam1, uParam1->f_1053.f_36, 1) };
	if (_0x083d497d57b7400f(iVar1) && get_distance_between_coords(get_entity_coords(iVar1, true, false), vVar2, true) < 0.25f)
	{
		uParam1->f_1053.f_85 = 4;
		bVar0 = false;
	}
	if (func_679(uParam0, uParam1))
	{
		uParam1->f_1053.f_27 = 1;
		uParam1->f_1053.f_85 = 1;
		bVar0 = false;
		if (uParam1->f_1053.f_28)
		{
			uParam1->f_1053.f_28 = 0;
		}
	}
	if (func_676(uParam0, uParam1, &(uParam0->f_156[uParam1->f_1053.f_36])))
	{
		uParam1->f_1053.f_85 = 2;
		bVar0 = false;
	}
	else if (is_entity_attached(net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36]))))
	{
		uParam1->f_1053.f_85 = 3;
		bVar0 = false;
	}
	if (uParam1->f_1053.f_24)
	{
		switch (uParam1->f_1053.f_36)
		{
			case 3:
			case 4:
			case 5:
				if (_does_scenario_point_exist(uParam1->f_1053.f_39))
				{
					if (_get_ped_using_scenario_point(uParam1->f_1053.f_39) != 0 && func_680() == 0)
					{
						uParam1->f_1053.f_85 = 5;
						bVar0 = false;
					}
				}
				break;
		}
	}
	else
	{
		switch (uParam1->f_1053.f_36)
		{
			case 0:
			case 1:
			case 2:
				if (_does_scenario_point_exist(uParam1->f_1053.f_38))
				{
					if (_get_ped_using_scenario_point(uParam1->f_1053.f_38) != 0 && func_680() == 0)
					{
						uParam1->f_1053.f_85 = 5;
						bVar0 = false;
					}
				}
				break;
		}
	}
	if (network_does_network_id_exist(&(uParam0->f_156[uParam1->f_1053.f_36])) == 0)
	{
		if (uParam1->f_1053.f_28)
		{
			uParam1->f_1053.f_28 = 0;
		}
		uParam1->f_1053.f_85 = 6;
		bVar0 = false;
	}
	if (uParam1->f_1053.f_28)
	{
		uParam1->f_1053.f_85 = 7;
		bVar0 = false;
	}
	if (bVar0 == 1)
	{
		uParam1->f_1053.f_85 = 8;
	}
	func_681(uParam0, uParam1);
	if (func_341(uParam1->f_1053.f_31))
	{
		if (func_342(uParam1->f_1053.f_31, 0) != bVar0)
		{
			func_338(uParam1->f_1053.f_31, bVar0, 1, 1);
		}
	}
	return bVar0;
}

bool func_438(var uParam0, var uParam1)
{
	uParam1->f_1053.f_25 = 0;
	request_ptfx_asset();
	func_451(uParam0, uParam1);
	func_682(uParam0, uParam1);
	return true;
}

char* func_439(int iParam0)
{
	iVar0 = get_random_int_in_range(0, 3);
	switch (iParam0)
	{
		case 0:
			iVar0 = get_random_int_in_range(0, 6);
			switch (&Global_1940085)
			{
				case 0:
					return "MS_LEAN_ON_BAR";
				case 1:
					StringCopy(&cVar1, "MS_LEAN_ON_BAR_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "MS_LEAN_ON_BAR_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 1:
			iVar0 = get_random_int_in_range(0, 4);
			switch (&Global_1940085)
			{
				case 0:
					return "MS_GRAB_DRINKS";
				case 1:
					StringCopy(&cVar1, "MS_GRAB_DRINKS_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "MS_GRAB_DRINKS_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 3:
			switch (&Global_1940085)
			{
				case 0:
					return "MS_TAKE_GLASS";
				case 1:
					StringCopy(&cVar1, "MS_TAKE_GLASS_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "MS_TAKE_GLASS_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 4:
			switch (&Global_1940085)
			{
				case 0:
					return "MS_SERVE_DRINKS";
				case 1:
					StringCopy(&cVar1, "MS_SERVE_DRINKS_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "MS_SERVE_DRINKS_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 5:
			switch (&Global_1940085)
			{
				case 0:
					return "MS_SERVE_CUSTOMER";
				case 1:
					StringCopy(&cVar1, "MS_SERVE_CUSTOMER_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "MS_SERVE_CUSTOMER_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 6:
			switch (&Global_1940085)
			{
				case 0:
					return "MS_SERVE_EMPTY_BARSEAT";
				case 1:
					StringCopy(&cVar1, "MS_SERVE_DRINKS_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "MS_SERVE_DRINKS_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 2:
			switch (&Global_1940085)
			{
				case 0:
					return "MS_REQUEST_DRINKS";
				case 1:
					StringCopy(&cVar1, "MS_REQUEST_DRINKS_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "MS_REQUEST_DRINKS_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 7:
			switch (&Global_1940085)
			{
				case 0:
					return "MS_SERVE_SELF";
				case 1:
					StringCopy(&cVar1, "MS_SERVE_SELF_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "MS_SERVE_SELF_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 8:
			switch (&Global_1940085)
			{
				case 0:
					return "MS_SWITCH_POSITION";
				case 1:
					StringCopy(&cVar1, "MS_SWITCH_POSITION_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "MS_SWITCH_POSITION_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 9:
			switch (&Global_1940085)
			{
				case 0:
					return "MS_BARTENDER_EXIT";
				case 1:
					StringCopy(&cVar1, "MS_BARTENDER_EXIT_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "MS_BARTENDER_EXIT_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 10:
			switch (&Global_1940085)
			{
				case 0:
					return "MS_BARTENDER_GROUP";
				case 1:
					StringCopy(&cVar1, "MS_BARTENDER_GROUP_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "MS_BARTENDER_GROUP_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
	}
	return "";
}

void func_440(var uParam0, int iParam1)
{
	if (uParam0->f_1053.f_76 != iParam1)
	{
		uParam0->f_1053.f_76 = iParam1;
	}
}

int func_441(var uParam0, var uParam1)
{
	switch (Global_1298166->f_2)
	{
		case 1:
			return func_683(uParam0, uParam1, 0);
		case 2:
			return func_683(uParam0, uParam1, 1);
		case 3:
			return func_684(uParam0, uParam1, 0);
		case 4:
			return func_684(uParam0, uParam1, 1);
		case 5:
			return func_684(uParam0, uParam1, 2);
		case 6:
			return func_684(uParam0, uParam1, 3);
		case 7:
			return func_684(uParam0, uParam1, 4);
		case 8:
			return func_684(uParam0, uParam1, 5);
	}
	func_440(uParam1, 1);
	return 1;
}

void func_442(var uParam0, var uParam1)
{
	if (func_677())
	{
		if (func_341(uParam1->f_1053.f_17) == 0)
		{
			uParam1->f_1053.f_17 = func_685(func_439(4), -719620017, func_461(uParam0, uParam1), 0.71f, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		}
		if (func_341(uParam1->f_1053.f_18) == 0)
		{
			uParam1->f_1053.f_18 = func_685(func_439(4), -719620017, func_462(uParam0, uParam1), 0.71f, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		}
	}
	else
	{
		if (func_341(uParam1->f_1053.f_17))
		{
			func_345(&(uParam1->f_1053.f_17), 1, 1);
		}
		if (func_341(uParam1->f_1053.f_18))
		{
			func_345(&(uParam1->f_1053.f_18), 1, 1);
		}
	}
}

bool func_443(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_343(&(uParam1->f_1053.f_47[iVar0]), 1))
		{
			uParam1->f_1053.f_36 = iVar0;
			_task_use_scenario_point(Global_34, &(uParam1->f_1053.f_40[iVar0]), func_686(uParam1, uParam2), 0, true, false, 0, false, -1f, true);
			(*uParam2)[participant_id_to_int()]->f_10 = func_687(uParam1->f_1053.f_36);
			func_688(uParam0, uParam1);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_444(var uParam0, bool bParam1)
{
	if (bParam1 || !func_465(uParam0))
	{
		func_689(uParam0);
	}
}

void func_445(var uParam0, int iParam1)
{
	if (uParam0->f_1053.f_78 != iParam1)
	{
		uParam0->f_1053.f_78 = iParam1;
	}
}

bool func_446(var uParam0, var uParam1)
{
	if (func_343(uParam0->f_1053.f_17, 1))
	{
		uParam0->f_1053.f_24 = 1;
		(*uParam1)[participant_id_to_int()]->f_10 = 7;
		func_690(uParam0);
		return true;
	}
	if (func_343(uParam0->f_1053.f_18, 1))
	{
		uParam0->f_1053.f_24 = 0;
		(*uParam1)[participant_id_to_int()]->f_10 = 8;
		func_690(uParam0);
		return true;
	}
	return false;
}

void func_447(var uParam0, int iParam1)
{
	if (uParam0->f_1053.f_77 != iParam1)
	{
		uParam0->f_1053.f_77 = iParam1;
	}
}

bool func_448(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_343(&(uParam1->f_1053.f_61[iVar0]), 1))
		{
			uParam1->f_1053.f_36 = iVar0;
			func_688(uParam0, uParam1);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_449(var uParam0, int iParam1)
{
	uParam0->f_1053.f_79 = iParam1;
}

bool func_450(var uParam0, var uParam1, var uParam2)
{
	switch (uParam1->f_1053.f_79)
	{
		case 1:
			if (network_does_network_id_exist(&(uParam0->f_156[uParam1->f_1053.f_36])))
			{
				if (network_has_control_of_network_id(&(uParam0->f_156[uParam1->f_1053.f_36])))
				{
					_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
					func_449(uParam1, 2);
				}
				else
				{
					network_request_control_of_network_id(&(uParam0->f_156[uParam1->f_1053.f_36]));
				}
			}
			if (func_691(uParam0, uParam1))
			{
				func_466(&(uParam1->f_1053.f_70));
				return true;
			}
			break;
		case 2:
			func_466(&(uParam1->f_1053.f_70));
			_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
			if (get_script_task_status(Global_34, -76381094, true) == 1)
			{
				func_449(uParam1, 3);
			}
			else
			{
				_task_use_scenario_point(Global_34, &(uParam1->f_1053.f_54[uParam1->f_1053.f_36]), func_692(uParam1), 0, true, false, 0, false, -1f, true);
			}
			break;
		case 3:
			_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
			if (has_anim_event_fired(player_ped_id(), 234333678))
			{
				func_449(uParam1, 4);
			}
			if (has_anim_event_fired(player_ped_id(), -399639735))
			{
				func_693(uParam0, uParam0->f_156[uParam1->f_1053.f_36]);
			}
			if (_get_ped_using_scenario_point(&(uParam1->f_1053.f_54[uParam1->f_1053.f_36])) != Global_34)
			{
				return true;
			}
			break;
		case 4:
			_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
			if (func_694(uParam1, uParam0->f_156[uParam1->f_1053.f_36], 0, 0))
			{
				func_449(uParam1, 0);
				return true;
			}
			break;
		case 0:
			break;
	}
	return false;
}

void func_451(var uParam0, var uParam1)
{
	if (func_677())
	{
		uParam1->f_1053.f_17 = func_685(func_439(4), -719620017, func_461(uParam0, uParam1), 0.71f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		uParam1->f_1053.f_18 = func_685(func_439(4), -719620017, func_462(uParam0, uParam1), 0.71f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	}
	func_476(uParam1->f_1053.f_17, -2122747604, 0, 1);
	func_476(uParam1->f_1053.f_18, -196782394, 0, 1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam1->f_1053.f_47[iVar0] = func_685(func_439(0), -719620017, func_463(uParam0, uParam1, iVar0, 0), 0.71f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		func_476(&(uParam1->f_1053.f_47[iVar0]), func_464(iVar0), 0, 1);
		uParam1->f_1053.f_61[iVar0] = func_685(func_439(1), -473983589, func_463(uParam0, uParam1, iVar0, 0), 0.71f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		func_476(&(uParam1->f_1053.f_61[iVar0]), func_464(iVar0), 0, 1);
		iVar0++;
	}
}

bool func_452(var uParam0, var uParam1, var uParam2)
{
	if (_0xec7e480ff8bd0bed(Global_34) == 0)
	{
		disable_control_action(0, 130948705, false);
	}
	switch (uParam1->f_1053.f_77)
	{
		case 1:
			if (has_anim_event_fired(Global_34, 1944546609) || is_ped_active_in_scenario(player_ped_id(), 0))
			{
				_0x6d07b371e9439019(player_ped_id());
				func_695(uParam0, uParam1, 1);
				func_696(uParam1);
				func_447(uParam1, 2);
			}
			break;
		case 2:
			if (func_697(uParam1->f_1053.f_31, 1))
			{
				uParam1->f_1053.f_20 = 100f;
				func_444(&(uParam1->f_1053.f_21), 0);
				set_player_control(get_player_index(), false, 256, false);
				_display_hud_component(724769646);
				func_698(uParam1, uParam2);
				func_699(uParam0, uParam1, 0);
				func_447(uParam1, 3);
			}
			else if (func_697(uParam1->f_1053.f_33, 1))
			{
				set_player_control(get_player_index(), false, 256, false);
				_display_hud_component(724769646);
				func_345(&(uParam1->f_1053.f_31), 1, 1);
				func_345(&(uParam1->f_1053.f_32), 1, 1);
				func_345(&(uParam1->f_1053.f_33), 1, 1);
				func_345(&(uParam1->f_1053.f_34), 1, 1);
				func_467(uParam0, uParam1);
				func_447(uParam1, 7);
			}
			else if (func_343(uParam1->f_1053.f_34, 1))
			{
				func_345(&(uParam1->f_1053.f_31), 1, 1);
				func_345(&(uParam1->f_1053.f_32), 1, 1);
				func_345(&(uParam1->f_1053.f_33), 1, 1);
				func_345(&(uParam1->f_1053.f_34), 1, 1);
				func_467(uParam0, uParam1);
				clear_ped_tasks(player_ped_id(), 1, 0);
			}
			else
			{
				func_700(uParam0, uParam1);
			}
			break;
		case 3:
			if (func_701(uParam0, uParam1, uParam2))
			{
				func_447(uParam1, 4);
			}
			else
			{
				func_447(uParam1, 17);
			}
			break;
		case 4:
			if (func_702(uParam1, uParam2))
			{
				func_447(uParam1, 5);
			}
			else
			{
				func_447(uParam1, 15);
			}
			break;
		case 5:
			if (func_703() == 0)
			{
				func_447(uParam1, 6);
			}
			break;
		case 6:
			if (func_703())
			{
				func_447(uParam1, 15);
			}
			break;
		case 15:
			if (network_has_control_of_network_id(&(uParam0->f_156[uParam1->f_1053.f_36])) == 0)
			{
				network_request_control_of_network_id(&(uParam0->f_156[uParam1->f_1053.f_36]));
			}
			else
			{
				_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
				func_447(uParam1, 9);
			}
			if (func_704(uParam0, uParam1))
			{
				uParam1->f_1053.f_28 = 1;
				func_447(uParam1, 17);
			}
			break;
		case 7:
			if (uParam1->f_1053.f_24)
			{
				if (network_has_control_of_network_id(uParam0->f_156.f_7))
				{
					func_705(1230445975, 2.2f);
					func_447(uParam1, 8);
				}
				else
				{
					network_request_control_of_network_id(uParam0->f_156.f_7);
				}
			}
			else if (network_has_control_of_network_id(uParam0->f_156.f_8))
			{
				func_705(1230445975, 2.2f);
				func_447(uParam1, 8);
			}
			else
			{
				network_request_control_of_network_id(uParam0->f_156.f_8);
			}
			break;
		case 8:
			if (uParam1->f_1053.f_24)
			{
				_0x7182edda1ee7db5a(uParam0->f_156.f_7);
			}
			else
			{
				_0x7182edda1ee7db5a(uParam0->f_156.f_8);
			}
			if (has_anim_event_fired(player_ped_id(), -375557136))
			{
				if (uParam1->f_1053.f_24)
				{
					func_693(uParam0, &(uParam0->f_156.f_7));
				}
				else
				{
					func_693(uParam0, &(uParam0->f_156.f_8));
				}
				func_444(&(uParam1->f_1053.f_73), 0);
			}
			if (uParam1->f_1053.f_24)
			{
				if (network_does_network_id_exist(uParam0->f_156.f_7))
				{
					iVar0 = net_to_obj(uParam0->f_156.f_7);
				}
			}
			else if (network_does_network_id_exist(uParam0->f_156.f_8))
			{
				iVar0 = net_to_obj(uParam0->f_156.f_8);
			}
			if (func_465(&(uParam1->f_1053.f_73)))
			{
				if (func_484(&(uParam1->f_1053.f_73)) < 0.5f)
				{
					if (does_entity_exist(iVar0))
					{
						func_706(uParam0, uParam1);
						_0x669655ffb29ef1a9(iVar0, 0, "tumbler_fill", ((func_484(&(uParam1->f_1053.f_73)) / 0.5f) * 1f));
					}
				}
				else
				{
					func_707(uParam0, uParam1);
					func_466(&(uParam1->f_1053.f_73));
				}
			}
			if (has_anim_event_fired(player_ped_id(), 234333678))
			{
				if (func_465(&(uParam1->f_1053.f_73)))
				{
					func_466(&(uParam1->f_1053.f_73));
				}
				func_447(uParam1, 13);
			}
			break;
		case 13:
			if (uParam1->f_1053.f_24)
			{
				_0x7182edda1ee7db5a(uParam0->f_156.f_7);
				if (func_694(uParam1, &(uParam0->f_156.f_7), 0, 1))
				{
					func_447(uParam1, 14);
				}
			}
			else
			{
				_0x7182edda1ee7db5a(uParam0->f_156.f_8);
				if (func_694(uParam1, &(uParam0->f_156.f_8), 0, 1))
				{
					func_447(uParam1, 14);
				}
			}
			break;
		case 14:
			_0x1cfb749ad4317bde();
			_0x71d71e08a7ed5bd7(0);
			if (has_anim_event_fired(Global_34, 1944546609))
			{
				set_player_control(get_player_index(), true, 0, false);
			}
			if (_0xec7e480ff8bd0bed(Global_34) == 0)
			{
				func_696(uParam1);
				func_695(uParam0, uParam1, 0);
				func_447(uParam1, 2);
			}
			break;
		case 9:
			_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
			if (func_708(uParam1))
			{
				func_447(uParam1, 11);
			}
			break;
		case 11:
			_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
			if (has_anim_event_fired(player_ped_id(), -375557136))
			{
				func_447(uParam1, 12);
			}
			break;
		case 12:
			_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
			if (is_entity_attached(net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36]))))
			{
				func_444(&(uParam1->f_1053.f_73), 0);
				uParam1->f_1053.f_28 = 1;
				func_447(uParam1, 10);
			}
			else
			{
				func_693(uParam0, uParam0->f_156[uParam1->f_1053.f_36]);
			}
			break;
		case 10:
			_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
			if (network_does_network_id_exist(&(uParam0->f_156[uParam1->f_1053.f_36])))
			{
				iVar0 = net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36]));
			}
			if (func_465(&(uParam1->f_1053.f_73)))
			{
				if (func_484(&(uParam1->f_1053.f_73)) < 0.5f)
				{
					if (does_entity_exist(iVar0))
					{
						func_706(uParam0, uParam1);
						_0x669655ffb29ef1a9(iVar0, 0, "tumbler_fill", ((func_484(&(uParam1->f_1053.f_73)) / 0.5f) * 1f));
					}
				}
				else
				{
					func_707(uParam0, uParam1);
					func_466(&(uParam1->f_1053.f_73));
				}
			}
			if (has_anim_event_fired(player_ped_id(), 663471240))
			{
				if (func_465(&(uParam1->f_1053.f_73)))
				{
					func_466(&(uParam1->f_1053.f_73));
				}
				detach_entity(net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36])), false, true);
				freeze_entity_position(net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36])), true);
				func_709(uParam0, uParam1);
				func_710(uParam0, uParam1);
				func_447(uParam1, 16);
			}
			if (has_anim_event_fired(player_ped_id(), 1480191636))
			{
				if (does_entity_exist(iVar0))
				{
					detach_entity(iVar0, true, true);
					set_object_as_no_longer_needed(&iVar0);
					uParam1->f_1053.f_28 = 0;
				}
				func_447(uParam1, 17);
			}
			break;
		case 16:
			_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
			if (_0x083d497d57b7400f(net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36]))))
			{
				func_447(uParam1, 17);
			}
			else
			{
				freeze_entity_position(net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36])), true);
			}
			break;
		case 17:
			if (func_703())
			{
				func_699(uParam0, uParam1, 1);
				set_player_control(get_player_index(), true, 0, false);
				func_447(uParam1, 2);
			}
			break;
	}
	if (is_ped_using_any_scenario(player_ped_id()) == 0 || _0x0c3cb2e600c8977d(player_ped_id(), 0))
	{
		func_345(&(uParam1->f_1053.f_31), 1, 1);
		func_345(&(uParam1->f_1053.f_32), 1, 1);
		func_345(&(uParam1->f_1053.f_33), 1, 1);
		func_345(&(uParam1->f_1053.f_34), 1, 1);
		func_467(uParam0, uParam1);
		if (is_player_control_on(get_player_index()) == 0)
		{
			set_player_control(get_player_index(), true, 0, false);
		}
		if (network_does_network_id_exist(uParam0->f_156.f_7))
		{
			iVar1 = net_to_obj(uParam0->f_156.f_7);
			if (is_entity_attached_to_entity(get_player_ped(get_player_index()), iVar1))
			{
				detach_entity(iVar1, true, true);
				set_object_as_no_longer_needed(&iVar1);
			}
		}
		if (network_does_network_id_exist(uParam0->f_156.f_8))
		{
			iVar2 = net_to_obj(uParam0->f_156.f_8);
			if (is_entity_attached_to_entity(get_player_ped(get_player_index()), iVar2))
			{
				detach_entity(iVar2, true, true);
				set_object_as_no_longer_needed(&iVar2);
			}
		}
		iVar3 = 0;
		while (iVar3 < 6)
		{
			if (network_does_network_id_exist(&(uParam0->f_156[iVar3])))
			{
				iVar4 = net_to_obj(&(uParam0->f_156[iVar3]));
				if (is_entity_attached_to_entity(get_player_ped(get_player_index()), iVar4))
				{
					detach_entity(iVar4, true, true);
					set_object_as_no_longer_needed(&iVar4);
				}
			}
			iVar3++;
		}
		func_447(uParam1, 0);
		return true;
	}
	func_711(uParam1);
	return false;
}

void func_453(var uParam0)
{
	(*uParam0)[participant_id_to_int()]->f_10 = 0;
}

bool func_454(var uParam0, var uParam1, var uParam2)
{
	if (_0xec7e480ff8bd0bed(Global_34) == 0)
	{
		disable_control_action(0, 130948705, false);
	}
	switch (uParam1->f_1053.f_78)
	{
		case 0:
			if (func_484(&(uParam1->f_1053.f_70)) > 6f)
			{
				clear_ped_tasks(player_ped_id(), 1, 0);
				set_player_control(get_player_index(), true, 0, false);
				func_466(&(uParam1->f_1053.f_70));
				return true;
			}
			if (has_anim_event_fired(Global_34, 1944546609) || is_ped_active_in_scenario(player_ped_id(), 0))
			{
				_0x6d07b371e9439019(player_ped_id());
				func_712(uParam0, uParam1);
				set_player_control(get_player_index(), true, 0, false);
				func_466(&(uParam1->f_1053.f_70));
				func_445(uParam1, 1);
			}
			break;
		case 1:
			func_713(uParam0, uParam1);
			if (func_697(uParam1->f_1053.f_68, 1))
			{
				func_714(uParam1, 0);
				func_444(&(uParam1->f_1053.f_70), 0);
				func_445(uParam1, 2);
			}
			if (func_343(uParam1->f_1053.f_69, 1))
			{
				set_player_control(get_player_index(), false, 256, false);
				_display_hud_component(724769646);
				func_714(uParam1, 0);
				func_715(uParam0, uParam1);
				func_445(uParam1, 5);
			}
			if (func_343(uParam1->f_1053.f_34, 1))
			{
				func_345(&(uParam1->f_1053.f_34), 1, 1);
				func_345(&(uParam1->f_1053.f_68), 1, 1);
				func_345(&(uParam1->f_1053.f_69), 1, 1);
				clear_ped_tasks(player_ped_id(), 1, 0);
				return true;
			}
			break;
		case 5:
			if (network_has_control_of_network_id(&(uParam0->f_156[uParam1->f_1053.f_36])))
			{
				func_445(uParam1, 6);
			}
			else
			{
				network_request_control_of_network_id(&(uParam0->f_156[uParam1->f_1053.f_36]));
			}
			break;
		case 2:
			if (is_ped_active_in_scenario(player_ped_id(), 0) || func_484(&(uParam1->f_1053.f_70)) > 6f)
			{
				func_445(uParam1, 3);
				func_712(uParam0, uParam1);
				func_705(-716319063, 1.25f);
			}
			break;
		case 3:
			if (func_703() == 0 || func_484(&(uParam1->f_1053.f_70)) > 6f)
			{
				func_445(uParam1, 4);
			}
			break;
		case 4:
			if (func_703() || func_484(&(uParam1->f_1053.f_70)) > 6f)
			{
				func_466(&(uParam1->f_1053.f_70));
				func_714(uParam1, 1);
				func_445(uParam1, 1);
			}
			break;
		case 6:
			_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
			if (_0x68821369a2ceadd5(Global_34, 1556451059))
			{
				func_345(&(uParam1->f_1053.f_34), 1, 1);
				func_345(&(uParam1->f_1053.f_68), 1, 1);
				func_345(&(uParam1->f_1053.f_69), 1, 1);
				func_445(uParam1, 7);
			}
			else
			{
				func_705(1556451059, 1f);
			}
			break;
		case 7:
			_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
			if (has_anim_event_fired(player_ped_id(), -399639735))
			{
				func_693(uParam0, uParam0->f_156[uParam1->f_1053.f_36]);
			}
			if (has_anim_event_fired(player_ped_id(), 234333678))
			{
				func_445(uParam1, 8);
			}
			break;
		case 8:
			_0x7182edda1ee7db5a(&(uParam0->f_156[uParam1->f_1053.f_36]));
			if (func_694(uParam1, uParam0->f_156[uParam1->f_1053.f_36], 0, 1))
			{
				func_445(uParam1, 9);
			}
			break;
		case 9:
			if (has_anim_event_fired(player_ped_id(), 1944546609))
			{
				if (is_player_control_on(get_player_index()) == 0)
				{
					set_player_control(get_player_index(), true, 0, false);
				}
				func_445(uParam1, 1);
			}
			break;
		case 10:
			if (is_ped_using_any_scenario(Global_34) == 0)
			{
				func_345(&(uParam1->f_1053.f_34), 1, 1);
				func_345(&(uParam1->f_1053.f_68), 1, 1);
				func_345(&(uParam1->f_1053.f_69), 1, 1);
				func_445(uParam1, 11);
				return true;
			}
			break;
		case 11:
			break;
	}
	func_716(uParam0, uParam1);
	func_711(uParam1);
	return false;
}

void func_455(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		if (_does_scenario_point_exist(&(uParam1->f_1053.f_40[iVar0])))
		{
			if (_get_ped_using_scenario_point(&(uParam1->f_1053.f_40[iVar0])) != 0)
			{
				iVar1 = 1;
			}
		}
		if (_does_scenario_point_exist(&(uParam1->f_1053.f_54[iVar0])))
		{
			if (_get_ped_using_scenario_point(&(uParam1->f_1053.f_40[iVar0])) != 0)
			{
				iVar1 = 1;
			}
		}
		if ((((is_ped_in_combat(Global_34, 0) || is_ped_in_melee_combat(Global_34)) || func_717()) || func_718(-92416669)) || _0xec7e480ff8bd0bed(player_ped_id()))
		{
			iVar1 = 1;
		}
		if (iVar1 == 0)
		{
			if (func_342(&(uParam1->f_1053.f_47[iVar0]), 0) == 0)
			{
				func_338(&(uParam1->f_1053.f_47[iVar0]), 1, 1, 1);
			}
		}
		else if (func_342(&(uParam1->f_1053.f_47[iVar0]), 0))
		{
			func_338(&(uParam1->f_1053.f_47[iVar0]), 0, 1, 1);
		}
		if (func_719(uParam0, uParam1, iVar0, 1) && iVar1 == 0)
		{
			if (func_341(&(uParam1->f_1053.f_61[iVar0])))
			{
				if (func_342(&(uParam1->f_1053.f_61[iVar0]), 0) == 0)
				{
					func_338(&(uParam1->f_1053.f_61[iVar0]), 1, 1, 1);
					func_339(&(uParam1->f_1053.f_61[iVar0]), 1, 1);
				}
			}
		}
		else if (func_341(&(uParam1->f_1053.f_61[iVar0])))
		{
			if (func_342(&(uParam1->f_1053.f_61[iVar0]), 0))
			{
				func_338(&(uParam1->f_1053.f_61[iVar0]), 0, 1, 1);
				func_339(&(uParam1->f_1053.f_61[iVar0]), 0, 1);
			}
		}
		iVar0++;
	}
	bVar2 = true;
	bVar3 = true;
	if (func_341(&(uParam1->f_308.f_1[5])))
	{
		if (func_720(&(uParam1->f_308.f_1[5]), 1) > 0f)
		{
			func_721("\n [rw][script][moonshine][bartend][prompt] POUR prompt pressed Left \n");
			bVar2 = false;
		}
	}
	if (_does_scenario_point_exist(&(uParam1->f_308.f_11[6])))
	{
		if (_get_ped_using_scenario_point(&(uParam1->f_308.f_11[6])) != 0)
		{
			func_721("\n [rw][script][moonshine][bartend][prompt] Scenario in use POUR PROMPT \n");
			bVar2 = false;
		}
	}
	if (_does_scenario_point_exist(uParam1->f_1053.f_38))
	{
		if (_get_ped_using_scenario_point(uParam1->f_1053.f_38) != 0)
		{
			func_721("\n [rw][script][moonshine][bartend][prompt] Scenario in use TEND BAR \n");
			bVar2 = false;
		}
	}
	else
	{
		func_721("\n [rw][script][moonshine][bartend][prompt] Left bar scenario does not exist \n");
		bVar3 = false;
	}
	if (func_341(&(uParam1->f_308.f_1[6])))
	{
		if (func_720(&(uParam1->f_308.f_1[6]), 1) > 0f)
		{
			func_721("\n [rw][script][moonshine][bartend][prompt] POUR prompt pressed right \n");
			bVar3 = false;
		}
	}
	if (_does_scenario_point_exist(&(uParam1->f_308.f_11[7])))
	{
		if (_get_ped_using_scenario_point(&(uParam1->f_308.f_11[7])) != 0)
		{
			func_721("\n [rw][script][moonshine][bartend][prompt] Scenario in use POUR PROMPT \n");
			bVar3 = false;
		}
	}
	if (_does_scenario_point_exist(uParam1->f_1053.f_39))
	{
		if (_get_ped_using_scenario_point(uParam1->f_1053.f_39) != 0)
		{
			func_721("\n [rw][script][moonshine][bartend][prompt] Scenario in use TEND BAR \n");
			bVar3 = false;
		}
	}
	else
	{
		func_721("\n [rw][script][moonshine][bartend][prompt] Right bar scenario does not exist \n");
		bVar3 = false;
	}
	if ((((is_ped_in_combat(Global_34, 0) || is_ped_in_melee_combat(Global_34)) || func_717()) || func_718(-92416669)) || _0xec7e480ff8bd0bed(player_ped_id()))
	{
		func_721("\n [rw][script][moonshine][bartend][prompt] Combat disabled \n");
		bVar3 = false;
		bVar2 = false;
	}
	if (func_341(uParam1->f_1053.f_18))
	{
		if (func_342(uParam1->f_1053.f_18, 0) != bVar3)
		{
			func_338(uParam1->f_1053.f_18, bVar3, 1, 1);
		}
	}
	if (func_341(uParam1->f_1053.f_17))
	{
		if (func_342(uParam1->f_1053.f_17, 0) != bVar2)
		{
			func_338(uParam1->f_1053.f_17, bVar2, 1, 1);
		}
	}
}

void func_456(var uParam0)
{
	if (uParam0->f_1053.f_80 != &Global_1940085)
	{
		if (func_341(uParam0->f_1053.f_17))
		{
			func_722(uParam0->f_1053.f_17, func_439(4), 0);
		}
		if (func_341(uParam0->f_1053.f_18))
		{
			func_722(uParam0->f_1053.f_18, func_439(4), 0);
		}
		if (func_341(uParam0->f_1053.f_35))
		{
			func_722(uParam0->f_1053.f_35, func_439(9), 0);
		}
		if (func_341(uParam0->f_1053.f_68))
		{
			func_722(uParam0->f_1053.f_68, func_439(2), 0);
		}
		if (func_341(uParam0->f_1053.f_31))
		{
			if (does_entity_exist(&(uParam0->f_1053.f_86[uParam0->f_1053.f_36])))
			{
				func_722(uParam0->f_1053.f_31, func_439(5), 0);
			}
			else
			{
				func_722(uParam0->f_1053.f_31, func_439(6), 0);
			}
		}
		if (func_341(uParam0->f_1053.f_34))
		{
			func_722(uParam0->f_1053.f_34, func_439(9), 0);
		}
		if (func_341(uParam0->f_1053.f_33))
		{
			func_722(uParam0->f_1053.f_33, func_439(7), 0);
		}
		if (func_341(uParam0->f_1053.f_32))
		{
			func_722(uParam0->f_1053.f_32, func_439(8), 0);
		}
		if (func_341(uParam0->f_1053.f_69))
		{
			func_722(uParam0->f_1053.f_69, func_439(3), 0);
		}
		if (func_341(uParam0->f_1053.f_31))
		{
			if (does_entity_exist(&(uParam0->f_1053.f_86[uParam0->f_1053.f_36])))
			{
				func_722(uParam0->f_1053.f_31, func_439(5), 0);
			}
			else
			{
				func_722(uParam0->f_1053.f_31, func_439(6), 0);
			}
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_341(&(uParam0->f_1053.f_47[iVar0])))
			{
				func_722(&(uParam0->f_1053.f_47[iVar0]), func_439(0), 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_341(&(uParam0->f_1053.f_61[iVar0])))
			{
				func_722(&(uParam0->f_1053.f_61[iVar0]), func_439(1), 0);
			}
			iVar0++;
		}
		uParam0->f_1053.f_80 = &Global_1940085;
		StringCopy(&(uParam0->f_1053.f_81), func_439(10), 32);
	}
}

void func_457(var uParam0)
{
	if (!func_64(&(uParam0->f_1659.f_6)))
	{
		func_723(&(uParam0->f_1659.f_6), 0);
		return;
	}
	if (func_108(&(uParam0->f_1659.f_6)) < 1f)
	{
		return;
	}
	func_63(&(uParam0->f_1659.f_6));
	iVar0 = 0;
	while (iVar0 < uParam0->f_1659)
	{
		uParam0->f_1659[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_1659.f_5 = 0;
}

void func_458()
{
	if (func_333(891))
	{
		return;
	}
	if (!func_334())
	{
		return;
	}
	iVar0 = func_724();
	bVar1 = func_725(player_ped_id(), iVar0);
	if (!bVar1)
	{
		return;
	}
	func_79(891, 0);
}

void func_459(var uParam0, var uParam1, var uParam2)
{
	if (func_333(892))
	{
		return;
	}
	if (!func_334())
	{
		return;
	}
	iVar0 = participant_id_to_int();
	iVar1 = (*uParam2)[iVar0]->f_10;
	if (iVar1 == 7 || iVar1 == 8)
	{
		return;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		if (iVar4 == iVar0)
		{
		}
		else
		{
			iVar5 = int_to_participantindex(iVar4);
			if (!network_is_participant_active(iVar5))
			{
			}
			else
			{
				iVar6 = network_get_player_index(iVar5);
				if (!network_is_player_active(iVar6))
				{
				}
				else
				{
					iVar1 = (*uParam2)[iVar4]->f_10;
					if (iVar1 == 7)
					{
						iVar2 = 1;
					}
					if (iVar1 == 8)
					{
						iVar3 = 1;
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar2 && iVar3)
	{
		return;
	}
	vVar7 = { get_entity_coords(player_ped_id(), true, false) };
	if (get_distance_between_coords(func_461(uParam0, uParam1), vVar7, false) > 3f && get_distance_between_coords(func_462(uParam0, uParam1), vVar7, false) > 3f)
	{
		return;
	}
	func_79(892, 0);
}

void func_460(var uParam0)
{
	if (func_333(893))
	{
		return;
	}
	if (!func_334())
	{
		return;
	}
	iVar0 = participant_id_to_int();
	iVar1 = (*uParam0)[iVar0]->f_10;
	if (iVar1 == 7 || iVar1 == 8)
	{
		return;
	}
	iVar2 = 255;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (iVar3 == iVar0)
		{
		}
		else
		{
			iVar4 = int_to_participantindex(iVar3);
			if (!network_is_participant_active(iVar4))
			{
			}
			else
			{
				iVar5 = network_get_player_index(iVar4);
				if (!network_is_player_active(iVar5))
				{
				}
				else
				{
					iVar1 = (*uParam0)[iVar3]->f_10;
					if (iVar1 == 7 || iVar1 == 8)
					{
						iVar2 = iVar5;
					}
					else
					{
						iVar3++;
					}
					if (iVar2 == 255)
					{
						return;
					}
					Global_1904651->f_8689 = iVar2;
					func_79(893, 0);
				}
			}
		}
	}
}

Vector3 func_461(var uParam0, var uParam1)
{
	vVar0 = { _get_object_offset_from_coords(func_726(uParam1), func_727(uParam0, uParam1), -0.736f, 1.063f, 0f) };
	vVar0.f_2 = func_728(uParam1);
	return vVar0;
}

Vector3 func_462(var uParam0, var uParam1)
{
	vVar0 = { _get_object_offset_from_coords(func_726(uParam1), func_727(uParam0, uParam1), -0.736f, -1.122f, 0f) };
	return vVar0;
}

Vector3 func_463(var uParam0, var uParam1, int iParam2, int iParam3)
{
	func_726(uParam1);
	vVar0 = { 0f, 0f, 0f };
	fVar3 = 0.72f;
	if (iParam3 == 1)
	{
		fVar4 = 0.065f;
		switch (iParam2)
		{
			case 0:
				vVar0 = { _get_object_offset_from_coords(func_726(uParam1), (func_727(uParam0, uParam1) - 180f), -0.08f, (-1.85f + fVar4), 1.05f) };
				break;
			case 1:
				vVar0 = { _get_object_offset_from_coords(func_726(uParam1), (func_727(uParam0, uParam1) - 180f), -0.08f, (-1.13f + fVar4), 1.05f) };
				break;
			case 2:
				vVar0 = { _get_object_offset_from_coords(func_726(uParam1), (func_727(uParam0, uParam1) - 180f), -0.08f, (-0.39f + fVar4), 1.05f) };
				break;
			case 3:
				vVar0 = { _get_object_offset_from_coords(func_726(uParam1), (func_727(uParam0, uParam1) - 180f), -0.08f, (0.33f + fVar4), 1.05f) };
				break;
			case 4:
				vVar0 = { _get_object_offset_from_coords(func_726(uParam1), (func_727(uParam0, uParam1) - 180f), -0.08f, (1.05f + fVar4), 1.05f) };
				break;
			case 5:
				vVar0 = { _get_object_offset_from_coords(func_726(uParam1), (func_727(uParam0, uParam1) - 180f), -0.08f, (1.79f + fVar4), 1.05f) };
				break;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				vVar0 = { _get_object_offset_from_coords(func_726(uParam1), func_727(uParam0, uParam1), (fVar3 + 0f), 1.759f, 0f) };
				break;
			case 1:
				vVar0 = { _get_object_offset_from_coords(func_726(uParam1), func_727(uParam0, uParam1), (fVar3 + 0f), 1.02f, 0f) };
				break;
			case 2:
				vVar0 = { _get_object_offset_from_coords(func_726(uParam1), func_727(uParam0, uParam1), (fVar3 + 0f), 0.298f, 0f) };
				break;
			case 3:
				vVar0 = { _get_object_offset_from_coords(func_726(uParam1), func_727(uParam0, uParam1), (fVar3 + 0f), -0.425f, 0f) };
				break;
			case 4:
				vVar0 = { _get_object_offset_from_coords(func_726(uParam1), func_727(uParam0, uParam1), (fVar3 + 0f), -1.165f, 0f) };
				break;
			case 5:
				vVar0 = { _get_object_offset_from_coords(func_726(uParam1), func_727(uParam0, uParam1), (fVar3 + 0f), -1.887f, 0f) };
				break;
		}
		vVar0.f_2 = func_728(uParam1);
	}
	return vVar0;
}

int func_464(int iParam0)
{
	iVar0 = 507859633;
	switch (iParam0)
	{
		case 0:
			iVar0 = 507859633;
			break;
		case 1:
			iVar0 = -1430313562;
			break;
		case 2:
			iVar0 = -330928231;
			break;
		case 3:
			iVar0 = -556021422;
			break;
		case 4:
			iVar0 = -1921891854;
			break;
		case 5:
			iVar0 = -775915901;
			break;
	}
	return iVar0;
}

bool func_465(var uParam0)
{
	return func_107(*uParam0, 1);
}

void func_466(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_467(var uParam0, var uParam1)
{
	uParam1->f_1053.f_30 = 0;
	if (does_entity_exist(uParam1->f_1053.f_19))
	{
		delete_object(&(uParam1->f_1053.f_19));
	}
	if (func_465(&(uParam1->f_1053.f_21)))
	{
		func_466(&(uParam1->f_1053.f_21));
	}
	_0xc67a4910425f11f1(get_player_index(), 0);
}

void func_468(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (uParam0->f_190)
	{
		case 0:
			func_729(uParam0, uParam1, uParam2, uParam3);
			func_730(&(uParam0->f_190), 1);
			break;
		case 1:
			if (func_53(player_id(), 1024))
			{
				func_730(&(uParam0->f_190), 2);
			}
			break;
		case 2:
			if (func_731(uParam1))
			{
				func_730(&(uParam0->f_190), 3);
			}
			break;
	}
}

void func_469(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (uParam1->f_21)
	{
		case 0:
			if (uParam0->f_190 > 0)
			{
				func_732(&(uParam1->f_21), 1);
			}
			break;
		case 1:
			if (uParam0->f_190 > 1)
			{
				if (func_53(player_id(), 64))
				{
					if (!is_screen_faded_out())
					{
						do_screen_fade_out(0);
					}
					if (is_screen_faded_out())
					{
						func_732(&(uParam1->f_21), 2);
					}
				}
			}
			break;
		case 2:
			if (uParam0->f_190 > 1)
			{
				if (!func_470(uParam2, 4))
				{
					if (!_0x375f5870a7b8bec1(&(Global_1298378->f_140)))
					{
						func_733(uParam0, uParam2, uParam3->f_2);
						func_734(uParam2, 4);
					}
				}
				if (func_470(uParam2, 4))
				{
					if (func_470(uParam2, 1) && func_470(uParam2, 8))
					{
						func_732(&(uParam1->f_21), 4);
					}
					else
					{
						func_732(&(uParam1->f_21), 5);
					}
				}
			}
			break;
		case 4:
			if (func_735(uParam2, uParam3->f_2))
			{
				if ((func_470(uParam2, 16) && _0xec7e480ff8bd0bed(player_ped_id())) && _get_number_of_references_of_script_with_name_hash(-770520551) > 0)
				{
					func_732(&(uParam1->f_21), 5);
					return;
				}
				if (!func_470(uParam2, 16) || _get_number_of_references_of_script_with_name_hash(-770520551) == 0)
				{
					func_736(uParam2);
				}
			}
			break;
		case 5:
			if (uParam0->f_190 > 2 || func_737(uParam2, 15000))
			{
				func_732(&(uParam1->f_21), 6);
			}
			break;
		case 6:
			if (!func_737(uParam2, 4000))
			{
				return;
			}
			func_738(uParam2, uParam3->f_2);
			if (is_screen_faded_out())
			{
				do_screen_fade_in(1000);
				func_739(uParam2, 2);
			}
			func_732(&(uParam1->f_21), 7);
			break;
		case 7:
			if (is_screen_faded_in() || func_737(uParam2, 15000))
			{
				if (does_cam_exist(uParam2->f_1199.f_2.f_6))
				{
					_render_first_person_cam(0, 0, 3, 0, 0, 1);
				}
				func_304(uParam2);
				func_732(&(uParam1->f_21), 8);
			}
			break;
	}
}

bool func_470(var uParam0, int iParam1)
{
	return func_82(uParam0->f_1199.f_1, iParam1);
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1747122041;
		case 1:
			return -2048623716;
		case 2:
			return 1889025440;
		case 3:
			return -1324808428;
		case 4:
			return 877303455;
		default:
			break;
	}
	return -1;
}

char* func_472()
{
	iVar0 = get_random_int_in_range(0, 5);
	switch (&Global_1940085)
	{
		case 0:
			return "MOONSHINE_ANTAGONIZE";
		case 1:
			StringCopy(&cVar1, "MOONSHINE_ANTAGONIZE_DRUNK_", 64);
			StringConCat(&cVar1, func_215(iVar0), 64);
			return func_618(cVar1);
		case 2:
			StringCopy(&cVar1, "MOONSHINE_ANTAGONIZE_WASTED_", 64);
			StringConCat(&cVar1, func_215(iVar0), 64);
			return func_618(cVar1);
	}
	return "";
}

void func_473(var uParam0, int iParam1)
{
	func_110(&(uParam0->f_71), iParam1);
}

char* func_474()
{
	iVar0 = get_random_int_in_range(0, 5);
	switch (&Global_1940085)
	{
		case 0:
			return "MOONSHINE_GREET";
		case 1:
			StringCopy(&cVar1, "MOONSHINE_GREET_DRUNK_", 64);
			StringConCat(&cVar1, func_215(iVar0), 64);
			return func_618(cVar1);
		case 2:
			StringCopy(&cVar1, "MOONSHINE_GREET_WASTED_", 64);
			StringConCat(&cVar1, func_215(iVar0), 64);
			return func_618(cVar1);
	}
	return "";
}

int func_475(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_587(iVar0, 2))
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
		func_588(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_476(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_341(iParam0))
	{
		return;
	}
	iVar0 = func_589(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_477(int iParam0, int iParam1)
{
	if (!func_341(iParam0))
	{
		return;
	}
	iVar0 = func_589(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1951255)[iVar0]->f_3, iParam1);
}

void func_478(var uParam0, int iParam1)
{
	func_59(&(uParam0->f_71), iParam1);
}

void func_479(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_740(uParam0, iVar0);
				break;
		}
		iVar0++;
	}
}

void func_480(float fParam0, bool bParam1)
{
	func_741((Global_1940085->f_9 + fParam0), bParam1);
}

struct<2> func_481(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_482(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_483(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((*uParam1)[iVar0]->f_10 == 7)
		{
			bVar1 = true;
		}
		if ((*uParam1)[iVar0]->f_10 == 8)
		{
			bVar2 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (func_341(&(uParam0->f_1[5])))
		{
			if (!func_742(&(uParam0->f_1[5]), 0))
			{
				func_338(&(uParam0->f_1[5]), 0, 0, 1);
			}
		}
	}
	else if (((func_341(&(uParam0->f_1[5])) && !func_43(uParam0->f_71, 2)) && !func_43(uParam0->f_71, 64)) && !func_43(uParam0->f_71, 32))
	{
		if (func_742(&(uParam0->f_1[5]), 0))
		{
			func_338(&(uParam0->f_1[5]), 1, 0, 1);
		}
	}
	if (bVar2)
	{
		if (func_341(&(uParam0->f_1[6])))
		{
			if (!func_742(&(uParam0->f_1[6]), 0))
			{
				func_338(&(uParam0->f_1[6]), 0, 0, 1);
			}
		}
	}
	else if (((func_341(&(uParam0->f_1[6])) && !func_43(uParam0->f_71, 2)) && !func_43(uParam0->f_71, 128)) && !func_43(uParam0->f_71, 32))
	{
		if (func_742(&(uParam0->f_1[6]), 0))
		{
			func_338(&(uParam0->f_1[6]), 1, 0, 1);
		}
	}
}

float func_484(var uParam0)
{
	return (to_float(func_743(uParam0)) * 0.001f);
}

bool func_485(var uParam0)
{
	if (!func_744(uParam0))
	{
		return false;
	}
	func_745(uParam0);
	*uParam0 = 1;
	return true;
}

void func_486(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_745(uParam0);
}

void func_487(var uParam0)
{
	bVar1 = ped_has_use_scenario_task(Global_34);
	if (!bVar1 && uParam0->f_31 != -1)
	{
		func_746(uParam0->f_31);
		uParam0->f_31 = -1;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = iVar0;
		if (!func_43(uParam0->f_71, 2))
		{
			func_747(uParam0, iVar2);
		}
		if (func_343(&(uParam0->f_1[iVar0]), 1))
		{
			func_748(uParam0, iVar2);
		}
		iVar0++;
	}
	if (!func_43(uParam0->f_71, 2) && (((bVar1 || _0xec7e480ff8bd0bed(player_ped_id())) || func_717()) || func_718(-92416669)))
	{
		func_473(uParam0, 2);
		func_749(uParam0, 0);
	}
	else if ((((func_43(uParam0->f_71, 2) && !_0xec7e480ff8bd0bed(player_ped_id())) && !bVar1) && !func_717()) && !func_718(-92416669))
	{
		func_478(uParam0, 2);
		func_749(uParam0, 1);
	}
	if (!func_43(uParam0->f_71, 32) && is_ped_in_melee_combat(player_ped_id()))
	{
		func_473(uParam0, 32);
		func_749(uParam0, 0);
	}
	else if (func_43(uParam0->f_71, 32) && !is_ped_in_melee_combat(player_ped_id()))
	{
		func_478(uParam0, 32);
		func_749(uParam0, 1);
	}
}

void func_488(var uParam0)
{
	func_750(&(uParam0->f_1));
}

void func_489()
{
	if (Global_1940085->f_14)
	{
		Global_1940085->f_4 = (get_game_timer() + 180000);
	}
	else
	{
		Global_1940085->f_4 = (get_game_timer() + 90000);
	}
}

int func_490(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -911959609;
		case 1:
			return -245132713;
		case 2:
			return -972240077;
		case 3:
			return -954913418;
		default:
			break;
	}
	return 0;
}

void func_491(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_5[iParam1] = iParam2;
}

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 0;
}

void func_493(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

char* func_494()
{
	return "MAGGAUD";
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1766283257;
		case 1:
			return -408236271;
		default:
			break;
	}
	return 0;
}

int func_496(int iParam0)
{
	return func_751(13, iParam0);
}

void func_497(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_11[iParam1]->f_1 = iParam2;
}

int func_498(int iParam0)
{
	if (!func_752(&Var0))
	{
		return -1;
	}
	if (!func_753(&Var0, 13, 0, 0, 1))
	{
		return -1;
	}
	if (!func_753(&Var0, 17, 0, 0, 1))
	{
		return -1;
	}
	iVar5 = func_754(&Var0, 0);
	if (!func_753(&Var0, 18, iParam0, 0, 1))
	{
		return -1;
	}
	iVar6 = _0xe13634bb6baf0734(Var0, Var0.f_1);
	return ((iVar5 - iVar6) - 1);
}

void func_499(var uParam0, int iParam1)
{
	uParam0->f_69 = iParam1;
}

int func_500(int iParam0)
{
	return &(Global_1297470->f_76[iParam0]);
}

void func_501(var uParam0, int iParam1)
{
	uParam0->f_69.f_1 = iParam1;
}

int func_502(var uParam0)
{
	return uParam0->f_69.f_1;
}

void func_503(var uParam0, int iParam1)
{
	(*uParam0)[participant_id_to_int()]->f_22 = iParam1;
}

int func_504(int iParam0, int iParam1)
{
	if (!func_752(&uVar0))
	{
		return 0;
	}
	if (!func_753(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_755(&uVar0);
}

int func_505(int iParam0)
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

void func_506(var uParam0, int iParam1)
{
	uParam0->f_69.f_2 = iParam1;
}

int func_507(int iParam0)
{
	if (!func_756(&uVar0, iParam0, -337291755))
	{
		return 0;
	}
	return func_757(&uVar0);
}

void func_508(var uParam0, int iParam1)
{
	uVar0 = iParam1 * 60;
	uParam0->f_69.f_3 = uVar0;
}

struct<2> func_509(int iParam0, int iParam1)
{
	if (!func_752(&uVar0))
	{
		return Var5;
	}
	if (!func_753(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_753(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_753(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_753(&uVar0, 34, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_753(&uVar0, 35, iParam1, 0, 0))
	{
		return Var5;
	}
	iVar7 = func_758(&uVar0);
	iVar8 = func_759(&uVar0);
	return func_760(iVar7, iVar8);
}

void func_510(var uParam0, var uParam1, var uParam2)
{
	_copy_memory(&(uParam0->f_69.f_4), &uParam1, 2);
}

var func_511(var uParam0, int iParam1)
{
	return &(uParam0->f_5[iParam1]);
}

bool func_512(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_513(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_761(func_511(uParam0, iParam1));
			break;
		case 1:
			func_762(func_511(uParam0, iParam1));
			break;
		case 2:
			func_763(func_511(uParam0, iParam1));
			break;
		case 3:
			func_764(func_511(uParam0, iParam1));
			break;
		default:
			break;
	}
}

void func_514(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

bool func_515(var uParam0)
{
	return uParam0->f_2 != 0;
}

void func_516(var uParam0)
{
	iVar0 = func_765(&(uParam0->f_385));
	iVar1 = func_532(&(uParam0->f_385), iVar0);
	bVar2 = iVar1 <= 7;
	if (iVar0 == -1)
	{
		func_766(uParam0, 0, 0, 0);
	}
	else
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
				if (func_767(uParam0, 0, bVar2))
				{
					func_766(uParam0, 0, 1, 1);
				}
				else
				{
					func_766(uParam0, 0, 0, 0);
				}
				break;
			default:
				func_766(uParam0, 0, 0, 0);
				break;
		}
	}
}

void func_517(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!get_event_data(1, iParam3, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 13:
			func_768(uParam0, uParam1, uParam2, iParam3);
			break;
	}
}

void func_518(var uParam0, var uParam1)
{
	bVar0 = true;
	iVar1 = 0;
	while (bVar0)
	{
		bVar0 = false;
		switch (func_769(&(uParam1->f_385), iVar1))
		{
			case 0:
				if (!func_770(&(uParam1->f_385), iVar1))
				{
				}
				else
				{
					bVar0 = true;
					func_771(&(uParam1->f_385), iVar1, 1);
					Jump @284; //curOff = 93
					func_772(&(uParam1->f_385), iVar1, 0);
					func_772(&(uParam1->f_385), iVar1, 1);
					bVar0 = true;
					func_771(&(uParam1->f_385), iVar1, 2);
					Jump @284; //curOff = 135
					if (!func_770(&(uParam1->f_385), iVar1))
					{
						func_771(&(uParam1->f_385), iVar1, 3);
					}
					else
					{
						if (func_773())
						{
							func_774(uParam1);
							func_775(uParam0, uParam1);
						}
						else
						{
							func_776(uParam1);
							func_777(uParam1);
						}
						Jump @284; //curOff = 204
						func_778(&(uParam1->f_385));
						func_779(&(uParam1->f_385), iVar1, 0);
						func_779(&(uParam1->f_385), iVar1, 1);
						func_780(&(uParam1->f_385), iVar1, 0, 3);
						func_780(&(uParam1->f_385), iVar1, 1, 3);
						func_771(&(uParam1->f_385), iVar1, 0);
					}
				}
				default:
					break;
		}
	}
}

void func_519(var uParam0)
{
	switch (func_781(&(uParam0->f_385)))
	{
		case 0:
			if (Global_1298000->f_45 & 1 != 0)
			{
				func_782(&(uParam0->f_385), 1);
				_launch_app_with_entry("progress_menu", "progress_mp_moonshine");
			}
			break;
		case 1:
			if (_0xde4a9b35d028979f("progress_menu"))
			{
				func_782(&(uParam0->f_385), 2);
			}
			break;
		case 2:
			if (!_0xde4a9b35d028979f("progress_menu"))
			{
				func_782(&(uParam0->f_385), 0);
				Global_1298000->f_45 = (Global_1298000->f_45 - Global_1298000->f_45 & 1);
			}
			break;
		default:
			break;
	}
}

void func_520(var uParam0)
{
	if (func_783(&(uParam0->f_385)) == 0)
	{
		iVar1 = func_784(&(uParam0->f_385));
		if (iVar1 == 0)
		{
			return;
		}
		if (!func_785())
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!is_bit_set(iVar1, iVar0))
			{
			}
			else
			{
				iVar2 = floor(pow(2f, to_float(iVar0)));
				func_786(uParam0, iVar2);
			}
			iVar0++;
		}
	}
	else if (func_787(uParam0))
	{
		return;
	}
	else
	{
		func_789(&(uParam0->f_385), func_788(&(uParam0->f_385)));
		func_790(&(uParam0->f_385), 0);
		func_791(&(uParam0->f_385), 0);
	}
}

bool func_521(var uParam0)
{
	return func_765(uParam0) != -1;
}

bool func_522(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return uParam0->f_81.f_34.f_6;
		default:
			break;
	}
	return false;
}

int func_523(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return uParam0->f_81.f_34.f_4;
		default:
			break;
	}
	return 0;
}

int func_524(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return uParam0->f_81.f_34.f_4;
		default:
			break;
	}
	return 0;
}

int func_525(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_81.f_21.f_4;
		case 1:
			return uParam0->f_81.f_26.f_3;
		case 2:
			return uParam0->f_81.f_34.f_3;
		case 3:
			return uParam0->f_81.f_30.f_3;
		default:
			break;
	}
	return 0;
}

var func_526(int iParam0)
{
	if (!func_792(&uVar0))
	{
		return 0;
	}
	if (!func_793(&uVar0, -999926214, 0, 0, 1))
	{
		return 0;
	}
	if (!func_793(&uVar0, -789055036, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_793(&uVar0, -1959657965, 0, 0, 1))
	{
		return 0;
	}
	return func_794(&uVar0, 677682370);
}

var func_527(int iParam0, int iParam1)
{
	if (!func_795(&uVar0, iParam0))
	{
		return 0;
	}
	if (!func_793(&uVar0, -1959657965, 0, 0, 1))
	{
		return 0;
	}
	if (!func_793(&uVar0, 1787076303, iParam1, 0, 1))
	{
		return 0;
	}
	return func_796(&uVar0);
}

void func_528(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Var0 = { func_797() };
	func_798(iParam0, iParam1, Var0, iParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_529(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			func_799(&(uParam0->f_81.f_34.f_5), iParam2, iParam1);
			break;
		default:
			break;
	}
}

int func_530(var uParam0)
{
	return uParam0->f_81.f_41;
}

void func_531(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_765(uParam1);
	iVar1 = func_532(uParam1, iVar0);
	iVar2 = -1;
	bVar3 = true;
	while (bVar3)
	{
		bVar3 = false;
		iVar1 = func_532(uParam1, iVar0);
		iVar2 = -1;
		switch (iVar1)
		{
			case 0:
				iVar2 = func_535(uParam0, uParam1, uParam2, iVar0);
				break;
			case 1:
				iVar2 = func_536(uParam0, uParam1, uParam2, iVar0);
				break;
			case 2:
				iVar2 = func_537(uParam1, iVar0);
				break;
			case 3:
				iVar2 = func_538(uParam1, uParam2, iVar0);
				break;
			case 4:
				iVar2 = func_800(uParam0, iVar0);
				break;
			case 5:
				iVar2 = func_801(uParam1, uParam2, iVar0);
				break;
			case 6:
				iVar2 = func_802(uParam1, uParam2, iVar0);
				break;
			case 7:
				iVar2 = func_803(uParam1, uParam2, iVar0);
				break;
			case 8:
				iVar2 = func_804(uParam0, uParam1, uParam2, iVar0);
				break;
			case 9:
				iVar2 = func_805(uParam0, uParam1, iVar0);
				break;
			case 10:
				iVar2 = func_806(uParam0, uParam1, iVar0);
				break;
			case 11:
				iVar2 = func_807(uParam1);
				break;
			case 13:
				iVar2 = func_540(uParam1, iVar0);
				break;
			default:
				break;
		}
		func_534(uParam1, iVar0, iVar2);
		bVar3 = func_808(uParam1, iVar0);
	}
}

int func_532(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_81.f_21;
		case 1:
			return uParam0->f_81.f_26;
		case 2:
			return uParam0->f_81.f_34;
		case 3:
			return uParam0->f_81.f_30;
		default:
			break;
	}
	return -1;
}

bool func_533(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			iVar0 = func_809(uParam1, iParam2);
			if (func_810(uParam0, _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))) != iVar0)
			{
				return true;
			}
			break;
		case 1:
		case 2:
		case 3:
			break;
		default:
			break;
	}
	return false;
}

void func_534(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_811(&(uParam0->f_81.f_21), iParam2, iParam1);
			break;
		case 1:
			func_811(&(uParam0->f_81.f_26), iParam2, iParam1);
			break;
		case 2:
			func_811(&(uParam0->f_81.f_34), iParam2, iParam1);
			break;
		case 3:
			func_811(&(uParam0->f_81.f_30), iParam2, iParam1);
			break;
		default:
			break;
	}
}

int func_535(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (iParam3)
	{
		case 0:
			iVar1 = func_812(uParam1);
			iVar0 = func_810(uParam0, _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
			if (iVar0 == -1)
			{
				return 0;
			}
			else if (iVar0 == 15)
			{
				return 12;
			}
			iVar2 = iVar0;
			iVar3 = func_813(iVar1, iVar2, 1571806322);
			break;
		case 1:
			iVar4 = func_495(0);
			iVar5 = func_814(uParam2->f_2);
			iVar3 = func_815(iVar4, iVar5, 1, func_511(uParam1, 2));
			break;
		case 3:
			iVar4 = func_495(1);
			iVar5 = func_814(uParam2->f_2);
			iVar3 = func_815(iVar4, iVar5, 1, func_511(uParam1, 2));
			break;
		case 2:
			iVar3 = func_816(iParam3);
			break;
		default:
			break;
	}
	if (iVar3 == 0)
	{
		return 12;
	}
	return 1;
}

int func_536(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (Global_1298378->f_29.f_3 != 2)
	{
		return 1;
	}
	iVar0 = func_817(uParam1, iParam3);
	if (_does_anim_scene_exist(iVar0))
	{
		_delete_anim_scene(iVar0);
	}
	switch (iParam3)
	{
		case 0:
			iVar20 = func_812(uParam1);
			iVar19 = func_810(uParam0, _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
			if (iVar19 == -1)
			{
				return 0;
			}
			iVar21 = iVar19;
			iVar1 = func_813(iVar20, iVar21, 1571806322);
			iVar2 = iVar19;
			func_818(uParam1, iParam3, iVar2);
			break;
		case 1:
			iVar24 = func_495(0);
			iVar25 = func_814(uParam2->f_2);
			iVar1 = func_815(iVar24, iVar25, 1, func_511(uParam1, 2));
			break;
		case 3:
			iVar24 = func_495(1);
			iVar1 = func_815(iVar24, iVar25, 1, func_511(uParam1, 2));
			func_819(uParam1, iParam3, iVar1);
			return 2;
		case 2:
			iVar1 = func_816(iParam3);
			break;
		default:
			return 12;
	}
	Var3 = { func_820(iVar1) };
	Var11 = { func_821(iVar1, 0) };
	iVar23 = func_527(iVar1, 0);
	iVar22 = func_822(iVar1);
	iVar0 = _create_anim_scene(&Var3, iVar22, &Var11, false, false);
	if (iVar0 == -1)
	{
		return 12;
	}
	load_anim_scene(iVar0);
	func_823(uParam1, iParam3, iVar0);
	func_819(uParam1, iParam3, iVar1);
	func_824(uParam1, iParam3, iVar23);
	return 2;
}

int func_537(var uParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (Global_1298000->f_44 == -1)
		{
			return 2;
		}
		else
		{
			func_823(uParam0, iParam1, Global_1298000->f_44);
			return 4;
		}
	}
	iVar0 = func_817(uParam0, iParam1);
	if (!_does_anim_scene_exist(iVar0))
	{
		return 12;
	}
	if (!_is_anim_scene_loaded(iVar0, true, false))
	{
		return 2;
	}
	if (!_is_anim_scene_metadata_loaded(iVar0, false))
	{
		return 2;
	}
	return 3;
}

int func_538(var uParam0, var uParam1, int iParam2)
{
	iVar1 = func_817(uParam0, iParam2);
	iVar0 = func_525(uParam0, iParam2);
	vVar2 = { func_825(iVar0, uParam1->f_2) };
	vVar5 = { func_826(iVar0, uParam1->f_2) };
	set_anim_scene_origin(iVar1, vVar2, vVar5, 2);
	return 4;
}

int func_539(var uParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (Global_1298000->f_44 == -1)
		{
			func_823(uParam0, iParam1, -1);
			return 2;
		}
		else
		{
			return 4;
		}
	}
	return 4;
}

int func_540(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = func_827(uParam0, iVar0);
		if (does_entity_exist(iVar2))
		{
		}
		else
		{
			delete_ped(&iVar2);
		}
		iVar0++;
	}
	if (iParam1 != 3)
	{
		iVar1 = func_817(uParam0, iParam1);
		if (_does_anim_scene_exist(iVar1))
		{
			_delete_anim_scene(iVar1);
		}
	}
	func_828(uParam0);
	return 0;
}

void func_541(var uParam0)
{
	uParam0->f_81.f_41 = (func_530(uParam0) + 1 % 4);
}

int func_542(var uParam0)
{
	return *uParam0;
}

void func_543(var uParam0)
{
	Var0 = 5;
	Var0.f_1 = -1;
	Var2.f_1 = -1;
	func_829(&Var0);
	func_830(&Var2);
	if (func_831(&Var0))
	{
		func_832(uParam0, &Var0, &Var2);
		func_833();
	}
	func_834(uParam0, &Var0, &Var2);
	if (func_831(&Var0))
	{
		func_835(uParam0, 1);
		Global_1298000->f_41 = 1;
	}
}

void func_544(var uParam0, var uParam1)
{
	Var3 = 5;
	Var3.f_1 = -1;
	Var10.f_1 = -1;
	func_834(uParam0, &Var3, &Var10);
	switch (Var3)
	{
		case 3:
			iVar0 = func_502(uParam0);
			iVar1 = func_812(uParam0);
			iVar2 = iVar0;
			iVar7 = func_813(iVar1, iVar2, 1571806322);
			if (iVar7 == 0)
			{
				func_835(uParam0, 3);
			}
			else
			{
				iVar5 = func_836(iVar1, iVar2, 1571806322);
				if (iVar5 == 0)
				{
					func_528(0, -1718522759, 0, 0, 0, 0, 0);
				}
				else
				{
					iVar6 = func_837(func_511(uParam0, 3), -703939862, iVar5);
					iVar8 = func_838(iVar1, iVar2, 1571806322);
					iVar9 = func_839(iVar7, iVar8);
					func_528(0, iVar9, -79578972, 1766283257, func_814(uParam1->f_2), 0, iVar6);
				}
				func_835(uParam0, 2);
			}
			break;
		default:
			func_835(uParam0, 3);
			break;
	}
}

void func_545(var uParam0, var uParam1)
{
	Var0 = 5;
	Var0.f_1 = -1;
	Var2.f_1 = -1;
	func_834(uParam0, &Var0, &Var2);
	switch (Var0)
	{
		case 3:
			func_840(uParam0, uParam1);
			break;
		default:
			func_841(uParam0, uParam1);
			break;
	}
}

void func_546(var uParam0)
{
	Var0 = { func_842() };
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_4 = 10;
	Var2.f_15 = 4;
	Var2.f_15.f_5 = 4;
	Var2.f_25 = 1;
	Var2.f_28 = 2;
	Var2.f_28.f_1 = -1;
	Var2.f_28.f_1.f_1 = -1;
	Var2.f_31 = 493038497;
	Var2.f_31.f_1 = 493038497;
	if (!func_843(Var0))
	{
		return;
	}
	func_844(uParam0, &Var2);
	if (!func_845(Var0, Var2))
	{
		return;
	}
	Global_1298000->f_41 = 0;
	func_835(uParam0, 5);
}

void func_547(var uParam0)
{
	func_846(uParam0);
	func_847(uParam0);
	func_835(uParam0, 0);
}

void func_548(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		iVar2 = iVar0;
		iVar1 = 0;
		while (iVar1 <= (2 - 1))
		{
			iVar3 = iVar1;
			func_779(uParam0, iVar2, iVar3);
			iVar1++;
		}
		iVar0++;
	}
}

void func_549(int iParam0)
{
	Global_1298000->f_42 = iParam0;
}

void func_550(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_848(uParam0, uParam1, uParam2, iVar0, bParam3);
				break;
		}
		iVar0++;
	}
}

bool func_551(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (func_849(uParam0))
	{
		case 0:
			func_850(uParam0, uParam1, uParam2);
			break;
		case 1:
			func_851(uParam0, uParam1, uParam2);
			break;
		case 2:
			func_852(uParam0, uParam1, uParam2, uParam3);
			break;
		case 3:
			func_853(uParam0, uParam1, uParam2, uParam3);
			break;
		case 4:
			func_854(uParam0, uParam1, uParam2, uParam3);
			break;
	}
	return true;
}

bool func_552(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (func_855((*uParam1)[participant_id_to_int()]))
	{
		case 0:
			func_856(&(uParam0->f_58), uParam1, &(uParam2->f_8));
			break;
		case 1:
			func_857(&(uParam0->f_58), uParam1, &(uParam2->f_8));
			break;
		case 2:
			func_858(&(uParam0->f_58), uParam1, &(uParam2->f_8), uParam3);
			break;
		case 3:
			func_859(&(uParam0->f_58), uParam1, &(uParam2->f_8), uParam3);
			break;
		case 4:
			func_860(uParam0, uParam1, uParam2, uParam3->f_2, uParam3->f_1);
			break;
	}
	return true;
}

void func_553(var uParam0, var uParam1)
{
	func_287(uParam0->f_10);
	func_466(uParam0);
	func_466(&(uParam0->f_3));
	func_466(&(uParam0->f_6));
}

void func_554(int iParam0)
{
	Global_1940085->f_13 = iParam0;
}

bool func_555(var uParam0, var uParam1)
{
	if (func_861(uParam0))
	{
		if (func_862(uParam1))
		{
			return true;
		}
	}
	return false;
}

void func_556(var uParam0)
{
	if (!is_bit_set(uParam0->f_5, 7))
	{
		if (is_bit_set(uParam0->f_5, 0) && is_bit_set(uParam0->f_5, 6))
		{
			set_bit(&(uParam0->f_5), 7);
		}
	}
	else if (!is_bit_set(uParam0->f_5, 0) || !is_bit_set(uParam0->f_5, 6))
	{
		clear_bit(&(uParam0->f_5), 7);
	}
}

Vector3 func_557(var uParam0)
{
	vVar0 = { func_330(uParam0->f_2) };
	fVar3 = func_331(uParam0->f_2);
	return _get_object_offset_from_coords(vVar0, fVar3, 0f, -2f, 0f);
}

Vector3 func_558(var uParam0)
{
	switch (uParam0->f_2)
	{
		case 0:
			return 0f, 0f, 44f;
		case 1:
			return 0f, 0f, 23f;
		case 2:
			return 0f, 0f, -27.5f;
		case 3:
			return 0f, 0f, 67f;
		case 4:
			return 0f, 0f, 60f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_559()
{
	return 7.5f, 10f, 5f;
}

void func_560(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

void func_561(var uParam0)
{
	if (!is_bit_set(uParam0->f_5, 3))
	{
		if (!is_bit_set(uParam0->f_5, 2))
		{
			if (!func_333(886))
			{
				if (func_334())
				{
					func_79(886, 0);
					set_bit(&(uParam0->f_5), 3);
				}
			}
			else
			{
				set_bit(&(uParam0->f_5), 3);
			}
		}
	}
	if (!is_bit_set(uParam0->f_5, 4))
	{
		if (!func_333(887))
		{
			if (is_bit_set(uParam0->f_5, 0) && func_334())
			{
				func_79(887, 0);
				set_bit(&(uParam0->f_5), 4);
			}
		}
		else
		{
			set_bit(&(uParam0->f_5), 4);
		}
	}
}

bool func_562(var uParam0, var uParam1)
{
	if (((((((((ped_has_use_scenario_task(Global_34) || _0x3ab6c7b0bb0df4b1(Global_34, -1)) || _0xec7e480ff8bd0bed(Global_34)) || is_ped_in_combat(Global_34, 0)) || func_717()) || func_718(-92416669)) || is_ped_in_melee_combat(Global_34)) || !_does_volume_exist(uParam0->f_52)) || !is_entity_in_volume(Global_34, uParam0->f_52, true, 0)) || func_863(uParam1))
	{
		func_573(uParam0);
		if (is_bit_set(uParam0->f_5, 6))
		{
			clear_bit(&(uParam0->f_5), 6);
		}
		return false;
	}
	if (!is_bit_set(uParam0->f_5, 6))
	{
		set_bit(&(uParam0->f_5), 6);
	}
	return true;
}

var func_563()
{
	iVar0 = get_random_int_in_range(0, 3);
	switch (&Global_1940085)
	{
		case 0:
			StringCopy(&cVar1, "MSHINE_DANCE_CTX_LBL", 64);
			break;
		case 1:
			StringCopy(&cVar1, "MS_START_DANCING_DRUNK_", 64);
			StringConCat(&cVar1, func_215(iVar0), 64);
			break;
		case 2:
			StringCopy(&cVar1, "MS_START_DANCING_WASTED_", 64);
			StringConCat(&cVar1, func_215(iVar0), 64);
			break;
	}
	return func_618(cVar1);
}

void func_564(var uParam0)
{
	func_864(uParam0, 1);
	uParam0->f_7[0] = -1263577976;
	uParam0->f_7[1] = 1727969580;
	if (uParam0->f_4 == 0)
	{
		func_560(uParam0, 3);
		return;
	}
}

int func_565(int iParam0)
{
	iVar0 = func_589(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return (*Global_1951255)[iVar0]->f_3;
}

void func_566(var uParam0)
{
	if (func_341(uParam0->f_42))
	{
		func_345(&(uParam0->f_42), 1, 1);
	}
}

void func_567()
{
	Global_1051439->f_3259 = get_frame_count();
}

int func_568(var uParam0, int iParam1)
{
	if (!func_82(*uParam0, iParam1))
	{
		func_83(uParam0, iParam1);
		return 1;
	}
	return 0;
}

bool func_569(var uParam0)
{
	if (is_bit_set(uParam0->f_5, 1))
	{
		return true;
	}
	if (get_ped_config_flag(Global_34, 573, true))
	{
		if (!is_bit_set(uParam0->f_5, 1))
		{
			set_bit(&(uParam0->f_5), 1);
		}
		_0x7d654266025e921b(108694200);
		return true;
	}
	return false;
}

bool func_570()
{
	if (get_ped_config_flag(Global_34, 573, true))
	{
		return false;
	}
	return true;
}

void func_571(int iParam0, bool bParam1)
{
	if (!func_341(iParam0))
	{
		return;
	}
	iVar0 = func_589(iParam0);
	_uiprompt_set_enabled((*Global_1951255)[iVar0]->f_3, !bParam1);
}

char* func_572()
{
	return "MSHINE_DANCE_QUIT";
}

void func_573(var uParam0)
{
	func_579(uParam0);
	func_566(uParam0);
	func_578(uParam0);
	func_865();
}

char* func_574()
{
	return "MSHINE_DANCE_SWITCH";
}

int func_575(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_587(iVar0, 2))
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
		func_588(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

bool func_576(var uParam0)
{
	if (is_control_pressed(0, uParam0->f_2) && !is_control_pressed(0, uParam0->f_3))
	{
		if (!func_64(&(uParam0->f_15)))
		{
			uParam0->f_12++;
			func_866(uParam0);
			func_63(&(uParam0->f_15));
			return true;
		}
		else if (func_867(&(uParam0->f_15)) > uParam0->f_10)
		{
			uParam0->f_12++;
			func_866(uParam0);
			func_63(&(uParam0->f_15));
			return true;
		}
	}
	else if (uParam0->f_12 > 0)
	{
		uParam0->f_10 = 1000;
		uParam0->f_12 = 0;
		func_109(&(uParam0->f_15));
	}
	return false;
}

bool func_577(var uParam0)
{
	if (is_control_pressed(0, uParam0->f_3) && !is_control_pressed(0, uParam0->f_2))
	{
		if (!func_64(&(uParam0->f_18)))
		{
			uParam0->f_13++;
			func_868(uParam0);
			func_63(&(uParam0->f_18));
			return true;
		}
		else if (func_867(&(uParam0->f_18)) > uParam0->f_11)
		{
			uParam0->f_13++;
			func_868(uParam0);
			func_63(&(uParam0->f_18));
			return true;
		}
	}
	else if (uParam0->f_13 > 0)
	{
		uParam0->f_11 = 1000;
		uParam0->f_13 = 0;
		func_109(&(uParam0->f_18));
	}
	return false;
}

void func_578(var uParam0)
{
	if (func_341(uParam0->f_45))
	{
		func_345(&(uParam0->f_45), 1, 1);
	}
}

void func_579(var uParam0)
{
	if (func_341(uParam0->f_44))
	{
		func_345(&(uParam0->f_44), 1, 1);
	}
}

char* func_580(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			sVar0 = "mp@moonshine_bar@bayou";
			break;
	}
	return sVar0;
}

int func_581(var uParam0, int iParam1)
{
	return &(uParam0->f_3[iParam1]);
}

bool func_582(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (!network_is_player_a_participant(iParam0))
	{
		return false;
	}
	return true;
}

void func_583(var uParam0)
{
	if (uParam0->f_1671 == 0)
	{
		return;
	}
	set_cinematic_mode_active(false);
	uParam0->f_1671 = 0;
}

void func_584(var uParam0)
{
	if (uParam0->f_1671 == 1)
	{
		return;
	}
	uParam0->f_1671 = 1;
}

bool func_585()
{
	if (func_869())
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

bool func_586(bool bParam0)
{
	if (func_870())
	{
		return false;
	}
	if ((!is_screen_faded_in() || is_screen_fading_in()) || is_screen_fading_out())
	{
		return false;
	}
	if (func_871(&(Global_1102219->f_4), 1, 5))
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_585())
		{
			return false;
		}
	}
	if ((Global_13 || Global_1048584) // PointerArith || func_872())
	{
		return false;
	}
	if (!func_251())
	{
		return false;
	}
	if (func_340())
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
	if (func_873())
	{
		return false;
	}
	return true;
}

bool func_587(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_588(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			_uiprompt_set_standardized_hold_mode(iVar0, bParam24);
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
	func_591(iParam0, 1);
	func_592(iParam0, 1);
	func_593(iParam0, 128);
}

int func_589(int iParam0)
{
	return iParam0;
}

void func_590(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_591(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_587(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_592(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_593(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

void func_594()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_595(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_875(bParam2, func_874(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_596(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

void func_597(int iParam0)
{
	if (!func_876(iParam0))
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

void func_598(int iParam0, char* sParam1)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 1:
			StringCopy(sParam1, "COOK_GREET", 24);
			break;
		case 2:
			StringCopy(sParam1, "COOK_GREET_FT", 24);
			break;
		case 3:
			StringCopy(sParam1, "COOK_GREET_RESC", 24);
			break;
		case 4:
			StringCopy(sParam1, "COOK_BYE", 24);
			break;
		case 5:
			StringCopy(sParam1, "COOK_GREET_BAR", 24);
			break;
		case 6:
			StringCopy(sParam1, "COOK_GREET_PASS", 24);
			break;
		case 7:
			StringCopy(sParam1, "COOK_RAMBLE", 24);
			break;
		case 8:
			*sParam1 = { func_877() };
			break;
		case 9:
			StringCopy(sParam1, "COOK_STORYCOMP", 24);
			break;
		case 10:
			StringCopy(sParam1, "COOK_SL_APPR", 24);
			break;
		case 11:
			StringCopy(sParam1, "COOK_SL_APPRDRK", 24);
			break;
		case 12:
			StringCopy(sParam1, "COOK_SL_IDLEPR", 24);
			break;
		case 13:
			StringCopy(sParam1, "COOK_SL_IDLENPR", 24);
			break;
		case 14:
			StringCopy(sParam1, "COOK_GN_IDLE", 24);
			break;
		case 15:
			StringCopy(sParam1, "COOK_GN_IDLETME", 24);
			break;
		case 16:
			StringCopy(sParam1, "COOK_GN_PASS", 24);
			break;
		case 17:
			StringCopy(sParam1, "COOK_GN_FAIL", 24);
			break;
		case 18:
			StringCopy(sParam1, "COOK_GN_PASSLM", 24);
			break;
		case 19:
			StringCopy(sParam1, "COOK_GN_PPASSLM", 24);
			break;
		case 20:
			StringCopy(sParam1, "COOK_GN_FAILLM", 24);
			break;
		case 21:
			StringCopy(sParam1, "COOK_GN_NOTGL", 24);
			break;
		case 22:
			StringCopy(sParam1, "COOK_GN_WANTED", 24);
			break;
		case 23:
			StringCopy(sParam1, "COOK_GN_BOUNTY", 24);
			break;
		case 24:
			StringCopy(sParam1, "COOK_GN_STREAK", 24);
			break;
		case 25:
			StringCopy(sParam1, "COOK_ML_NSETUP", 24);
			break;
		case 26:
			StringCopy(sParam1, "COOK_BA_GOOD", 24);
			break;
		case 27:
			StringCopy(sParam1, "COOK_BA_AVERAGE", 24);
			break;
		case 28:
			StringCopy(sParam1, "COOK_BA_POOR", 24);
			break;
		case 29:
			StringCopy(sParam1, "COOK_BA_NEWREC", 24);
			break;
		case 30:
			StringCopy(sParam1, "COOK_BA_NEWBUY", 24);
			break;
		case 31:
			StringCopy(sParam1, "COOK_BA_BUYREFA", 24);
			break;
		case 32:
			StringCopy(sParam1, "COOK_BA_BUYREFB", 24);
			break;
		case 33:
			StringCopy(sParam1, "COOK_BA_NRFULL", 24);
			break;
		case 34:
			StringCopy(sParam1, "COOK_BA_UPT2", 24);
			break;
		case 35:
			StringCopy(sParam1, "COOK_BA_UPT3", 24);
			break;
		case 36:
			StringCopy(sParam1, "COOK_BA_FULLUN", 24);
			break;
		case 37:
			StringCopy(sParam1, "COOK_BA_SENT", 24);
			break;
	}
}

int func_599(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, vector3 vParam98)
{
	if (is_string_null_or_empty(func_878(vParam98)))
	{
		return 0;
	}
	if (_0xd89504d9d7d5057d(func_878(vParam98)))
	{
		return 1;
	}
	else if (func_879(&uParam0, vParam98, 0, -1, 0, 1))
	{
		return 1;
	}
	return 0;
}

void func_600(int iParam0, char* sParam1)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 1:
			StringCopy(sParam1, "MAGG_GF_FTPROD", 24);
			break;
		case 2:
			StringCopy(sParam1, "MAGG_GF_GEN", 24);
			break;
		case 3:
			StringCopy(sParam1, "MAGG_GF_DRUNK", 24);
			break;
		case 4:
			StringCopy(sParam1, "MAGG_GF_FTFIN", 24);
			break;
		case 5:
			StringCopy(sParam1, "MAGG_GF_STRANGE", 24);
			break;
		case 6:
			StringCopy(sParam1, "MAGG_GF_MULTIP", 24);
			break;
		case 7:
			StringCopy(sParam1, "MAGG_GF_RETURND", 24);
			break;
		case 8:
			StringCopy(sParam1, "MAGG_GF_PASSOUT", 24);
			break;
		case 9:
			StringCopy(sParam1, "MAGG_GF_GENPOSS", 24);
			break;
		case 10:
			StringCopy(sParam1, "MAGG_GF_BYE", 24);
			break;
		case 11:
			StringCopy(sParam1, "MAGG_GF_DOWN", 24);
			break;
		case 12:
			StringCopy(sParam1, "MAGG_GF_FTGREET", 24);
			break;
		case 13:
			StringCopy(sParam1, "MAGG_GF_HHON", 24);
			break;
		case 14:
			StringCopy(sParam1, "MAGG_GF_LHON", 24);
			break;
		case 15:
			StringCopy(sParam1, "MAGG_GF_RAMBLE", 24);
			break;
		case 16:
			StringCopy(sParam1, "MAGG_GF_SUPART1", 24);
			break;
		case 17:
			StringCopy(sParam1, "MAGG_GF_SUPART2", 24);
			break;
		case 18:
			StringCopy(sParam1, "MAGG_GF_SUFIN", 24);
			break;
		case 19:
			StringCopy(sParam1, "MAGG_PA_STEAL", 24);
			break;
		case 20:
			StringCopy(sParam1, "MAGG_PA_NEWBUY", 24);
			break;
		case 21:
			StringCopy(sParam1, "MAGG_PA_MPRELO", 24);
			break;
		case 23:
			StringCopy(sParam1, "MAGG_PA_IDLE", 24);
			break;
		case 22:
			StringCopy(sParam1, "MAGG_PA_DOG", 24);
			break;
		case 24:
			StringCopy(sParam1, "MAGG_PA_EMOTE", 24);
			break;
		case 27:
			StringCopy(sParam1, "MAGG_PA_PASS", 24);
			break;
		case 28:
			StringCopy(sParam1, "MAGG_PA_FAIL", 24);
			break;
		case 29:
			StringCopy(sParam1, "MAGG_PA_PASS_MM", 24);
			break;
		case 30:
			StringCopy(sParam1, "MAGG_PA_PASS_KB", 24);
			break;
		case 31:
			StringCopy(sParam1, "MAGG_PA_PPS_MM", 24);
			break;
		case 32:
			StringCopy(sParam1, "MAGG_PA_FAIL_M", 24);
			break;
		case 33:
			StringCopy(sParam1, "MAGG_PA_NOTGL", 24);
			break;
		case 34:
			StringCopy(sParam1, "MAGG_PA_WANTED", 24);
			break;
		case 35:
			StringCopy(sParam1, "MAGG_PA_BOUNTY", 24);
			break;
		case 36:
			StringCopy(sParam1, "MAGG_PA_STREAK", 24);
			break;
		case 37:
			StringCopy(sParam1, "MAGG_PA_NOTAV", 24);
			break;
		case 38:
			StringCopy(sParam1, "MAGG_PA_MAX", 24);
			break;
		case 39:
			StringCopy(sParam1, "MAGG_ST_M1PRE", 24);
			break;
		case 40:
			StringCopy(sParam1, "MAGG_ST_M1REACT", 24);
			break;
		case 41:
			StringCopy(sParam1, "MAGG_ST_M2REACT", 24);
			break;
		case 42:
			StringCopy(sParam1, "MAGG_ST_M3REACT", 24);
			break;
		case 43:
			StringCopy(sParam1, "MAGG_ST_M4PREAC", 24);
			break;
		case 44:
			StringCopy(sParam1, "MAGG_ST_M4NREAC", 24);
			break;
		case 45:
			StringCopy(sParam1, "MAGG_ST_M5REACT", 24);
			break;
		case 46:
			StringCopy(sParam1, "MAGG_ST_NEWMISS", 24);
			break;
	}
}

bool func_601(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, vector3 vParam98)
{
	if (is_string_null_or_empty(func_878(vParam98)))
	{
		return false;
	}
	if (_0xd89504d9d7d5057d(func_878(vParam98)))
	{
		return true;
	}
	else if (func_879(&uParam0, vParam98, 0, -1, 0, 1))
	{
		return true;
	}
	return false;
}

void func_602(var uParam0)
{
	func_880(uParam0, 4);
}

struct<2> func_603(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_604(struct<2> Param0)
{
	iVar0 = func_881(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_605(var uParam0, var uParam1)
{
	return uParam0;
}

int func_606(int iParam0)
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

int func_607(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_882())
	{
		return 636925055;
	}
	return -963477619;
}

int func_608(int iParam0, bool bParam1)
{
	iVar0 = floor(func_883(iParam0, bParam1));
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

bool func_609(int iParam0, bool bParam1)
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

bool func_610(int iParam0, bool bParam1)
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
	if (func_884(iParam0))
	{
		return true;
	}
	return !func_609(iParam0, 0);
}

bool func_611(int iParam0, bool bParam1)
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
	if (func_885(iParam0))
	{
		return false;
	}
	if (func_884(iParam0))
	{
		return false;
	}
	if (func_886(iParam0))
	{
		return true;
	}
	return func_887(iParam0);
}

int func_612(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_888(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_613(int iParam0, int iParam1)
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

char* func_614(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_889(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_615(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_616()
{
	Global_1298378->f_1 = Global_1071686->f_28448[50]->f_3;
	Global_1298378->f_1.f_1 = 0;
	Global_1298378->f_1.f_2 = 0;
	Global_1298378->f_1.f_3 = 0;
	Global_1298378->f_1.f_4 = 0;
}

bool func_617(int iParam0)
{
	return iParam0 != 0;
}

int func_618(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

Vector3 func_619(int iParam0)
{
	func_352(1754025912, func_213(iParam0), 0, 0);
	if (!_datafile_get_vector(&vVar0, &(Global_1298378->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

bool func_620()
{
	if (Global_1901947->f_44.f_2 == 1788394582)
	{
		iVar0 = Global_1296859->f_21;
		if (iVar0 > Global_1901947->f_44.f_3 && iVar0 < Global_1901947->f_44.f_4)
		{
			return true;
		}
	}
	return false;
}

bool func_621(int iParam0, int iParam1)
{
	func_352(-1265603269, func_409(iParam0), iParam1, 0);
	if (!_datafile_get_bool(&uVar0, &(Global_1298378->f_1)))
	{
		return false;
	}
	return uVar0;
}

var func_622(int iParam0, int iParam1, int iParam2)
{
	if (!func_404(-700888093, &iVar0, func_409(iParam0), iParam1, 0))
	{
		return "";
	}
	if (!func_630(-29381488, &Var1, func_213(iParam2), 0, iVar0))
	{
		return "";
	}
	return func_618(Var1);
}

var func_623(int iParam0, int iParam1)
{
	func_352(-303134866, func_409(iParam0), iParam1, 0);
	if (!_datafile_get_string(&Var0, &(Global_1298378->f_1)))
	{
		return "Invalid";
	}
	return func_618(Var0);
}

var func_624(int iParam0, int iParam1, int iParam2)
{
	if (!func_404(-700888093, &iVar0, func_409(iParam0), iParam1, 0))
	{
		return "";
	}
	if (!func_630(1503858582, &Var1, func_213(iParam2), 0, iVar0))
	{
		return "";
	}
	return func_618(Var1);
}

var func_625(int iParam0, int iParam1)
{
	func_352(-1586322073, func_409(iParam0), iParam1, 0);
	if (!_datafile_get_string(&Var0, &(Global_1298378->f_1)))
	{
		return "Invalid";
	}
	return func_618(Var0);
}

bool func_626(int iParam0, int iParam1, int iParam2)
{
	if (!func_404(-700888093, &iVar0, func_409(iParam0), iParam1, 0))
	{
		return false;
	}
	if (!func_404(1027470681, &uVar1, func_407(iParam2), 0, iVar0))
	{
		return false;
	}
	return true;
}

int func_627(int iParam0, int iParam1, int iParam2)
{
	if (!func_404(-700888093, &iVar0, func_409(iParam0), iParam1, 0))
	{
		return 7;
	}
	if (!func_406(50744365, &iVar1, func_213(iParam2), 0, iVar0))
	{
		return 7;
	}
	return func_890(iVar1);
}

int func_628(int iParam0, int iParam1)
{
	if (!func_406(-563290338, &iVar0, func_409(iParam0), iParam1, 0))
	{
		return 7;
	}
	return func_890(iVar0);
}

bool func_629(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 7:
			return true;
		case 8:
			switch (iParam1)
			{
				case 0:
				case 4:
					return true;
				default:
					break;
			}
			break;
	}
	return iParam0 == iParam1;
}

bool func_630(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	func_352(iParam0, iParam2, iParam3, iParam4);
	if (!_datafile_get_string(uParam1, &(Global_1298378->f_1)))
	{
		return false;
	}
	return true;
}

int func_631(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_352(iParam0, iParam1, iParam2, iParam3);
	if (!_datafile_get_bool(&uVar0, &(Global_1298378->f_1)))
	{
		return iParam4;
	}
	return uVar0;
}

bool func_632(int iParam0, int iParam1, var uParam2)
{
	if (func_630(2059110052, uParam2, func_213(iParam0), func_409(iParam1), 0))
	{
		return true;
	}
	return false;
}

int func_633(int iParam0, int iParam1)
{
	return func_353(2127670663, 1919192021, -1170054259, 1434566313, -952199418, -878740884, func_213(iParam0), func_409(iParam1), 0);
}

int func_634(int iParam0, int iParam1, int iParam2, var uParam3)
{
	*iParam1 = 0;
	*iParam2 = 0;
	iVar1 = func_369(iParam0);
	if (iVar1 == 0)
	{
		return 0;
	}
	*iParam2 = func_891(iParam0);
	if (*iParam2 == 0)
	{
		return 0;
	}
	*iParam1 = &uParam3->f_242.f_33[iParam0];
	if (!func_617(*iParam1))
	{
		return 0;
	}
	iVar0 = func_892(*iParam1, 0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_screen_faded_out())
	{
		return 1;
	}
	vVar2 = { get_entity_coords(iVar0, true, false) };
	vVar5 = { get_entity_coords(player_ped_id(), true, false) };
	fVar8 = func_893(vVar2, vVar5);
	fVar9 = absf((vVar2.z - vVar5.z));
	if (fVar9 <= 2f && fVar8 <= 1.5f)
	{
		return 0;
	}
	if (!is_bit_set(uParam3->f_242.f_65, iParam0))
	{
		func_894(iVar0, uParam3->f_242.f_37[iParam0]);
		set_bit(&(uParam3->f_242.f_65), iParam0);
		return 0;
	}
	else if (uParam3->f_242.f_37[iParam0]->f_6 != iVar0)
	{
		uParam3->f_242.f_37[iParam0]->f_6 = 0;
		uParam3->f_242.f_37[iParam0]->f_8 = 0f;
		uParam3->f_242.f_37[iParam0]->f_7 = 0f;
		uParam3->f_242.f_37[iParam0] = 0;
		clear_bit(&(uParam3->f_242.f_65), iParam0);
	}
	else
	{
		if (fVar9 > 2f)
		{
			return 1;
		}
		if (!func_895(uParam3->f_242.f_37[iParam0], 35f, 0f, 0, 0, 1, fVar8, 0))
		{
			return 0;
		}
		if (func_896(uParam3->f_242.f_37[iParam0], 0f, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_635(var uParam0, int iParam1)
{
	if ((iParam1 < 0 || iParam1 >= *uParam0) || iParam1 >= 8)
	{
		return false;
	}
	return is_bit_set(uParam0->f_1, iParam1);
}

void func_636(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if ((iParam2 < 0 || iParam2 >= *uParam1) || iParam2 >= 8)
	{
		return;
	}
	if (bParam3)
	{
		if (!func_897(uParam1, iParam2))
		{
			return;
		}
		if (!func_635(uParam1, iParam2))
		{
			if (func_365(iParam0, uParam1, iParam2, &Var0))
			{
				set_bit(&(uParam1->f_1), iParam2);
				_play_sound_from_position(&(Var0.f_2), Var0.f_15, &(Var0.f_6), false, 0, false, 0);
			}
		}
	}
	else if (func_635(uParam1, iParam2))
	{
		if (func_365(iParam0, uParam1, iParam2, &Var18))
		{
			clear_bit(&(uParam1->f_1), iParam2);
			_0x531a78d6bf27014b(&(Var18.f_6));
		}
	}
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1816286105;
		case 1:
			return 2047625315;
		case 2:
			return -538969275;
		case 3:
			return -894250773;
		case 4:
			return -703939862;
		default:
			break;
	}
	return -2075002545;
}

int func_638(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1223642497;
		case 1:
			return 1717039746;
		case 2:
			return -2140911207;
		case 3:
			return -1097631823;
		case 4:
			return 884695750;
		case 5:
			return 1865518044;
		case 7:
			return -87300544;
		case 8:
			return -830382453;
		case 9:
			return -1126581444;
		case 10:
			return -539433819;
		case 11:
			return -236120335;
		case 12:
			return 739767572;
		case 13:
			return 811331161;
		case 6:
			return -440997610;
		default:
			break;
	}
	return -2075002545;
}

int func_639(int iParam0, int iParam1)
{
	func_352(-163017820, func_213(iParam0), func_351(iParam1), 0);
	if (!_datafile_get_hash(&uVar0, &(Global_1298378->f_1)))
	{
		return 0;
	}
	return uVar0;
}

float func_640(int iParam0, int iParam1)
{
	func_352(-1129282016, func_213(iParam0), func_351(iParam1), 0);
	if (!_datafile_get_float(&uVar0, &(Global_1298378->f_1)))
	{
		return 0f;
	}
	return uVar0;
}

bool func_641(struct<2> Param0)
{
	return func_898(Param0, 5, 8);
}

bool func_642(int iParam0)
{
	return func_899(1, iParam0);
}

int func_643(int iParam0)
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

int func_644(int iParam0)
{
	if (func_900(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_645(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_901(iParam0);
	if (!func_902(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_903(128) && !func_904(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_905() == 4)
	{
		func_644(18);
	}
	func_906(1024);
}

int func_646(int iParam0)
{
	if (func_907(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_647(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_648(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_649(struct<29> Param0, var uParam29, int iParam30)
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

void func_650(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_651(int iParam0)
{
	if (_0x603ac35fd4602c76(Global_1139381->f_7) && !func_909(12, func_908(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_652(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_653(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

var func_654(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_655(var uParam0, var uParam1, var uParam2)
{
	func_910(&(uParam0->f_7), 1);
}

void func_656(var uParam0, var uParam1, var uParam2)
{
	func_910(&(uParam0->f_7), 2);
}

void func_657(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_911(uParam0, uParam2, uParam3);
	bVar0 = false;
	if (&uParam1->f_46.f_1[0] > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_912(uParam0, uParam2, uParam3);
		func_913(uParam0, uParam2, uParam3);
	}
}

int func_658(var uParam0)
{
	return uParam0->f_6;
}

void func_659(var uParam0, var uParam1, var uParam2)
{
	if (func_914(uParam0) > 0)
	{
		func_915(&((*uParam1)[participant_id_to_int()]->f_12), 1);
	}
}

void func_660(var uParam0, var uParam1, var uParam2)
{
	if (func_914(uParam0) > 1)
	{
		func_915(&((*uParam1)[participant_id_to_int()]->f_12), 2);
	}
}

void func_661(var uParam0, var uParam1, var uParam2, var uParam3)
{
	bVar0 = false;
	if (does_entity_exist(uParam3->f_1252.f_122) && &uParam1->f_46.f_1[0] > 0)
	{
		bVar0 = true;
	}
	if (func_4(512) || func_4(131072))
	{
		if (bVar0)
		{
			if (does_entity_exist(uParam3->f_1252.f_122))
			{
				if (is_entity_visible(uParam3->f_1252.f_122))
				{
					set_entity_visible(uParam3->f_1252.f_122, false);
				}
			}
		}
		if (does_entity_exist(uParam3->f_1252.f_123))
		{
			if (is_entity_visible(func_294(uParam3->f_1252.f_123)))
			{
				set_entity_visible(uParam3->f_1252.f_123, false);
			}
		}
	}
	else
	{
		if (bVar0)
		{
			if (does_entity_exist(uParam3->f_1252.f_122))
			{
				if (!is_entity_visible(uParam3->f_1252.f_122))
				{
					set_entity_visible(uParam3->f_1252.f_122, true);
				}
			}
		}
		if (does_entity_exist(uParam3->f_1252.f_123))
		{
			if (!is_entity_visible(uParam3->f_1252.f_123))
			{
				set_entity_visible(uParam3->f_1252.f_123, true);
			}
		}
	}
	if (func_4(512))
	{
		if (does_entity_exist(uParam3->f_1252.f_6.f_27))
		{
			if (is_entity_visible(uParam3->f_1252.f_6.f_27))
			{
				set_entity_visible(uParam3->f_1252.f_6.f_27, false);
			}
		}
	}
	else if (does_entity_exist(uParam3->f_1252.f_6.f_27))
	{
		if (!is_entity_visible(uParam3->f_1252.f_6.f_27))
		{
			set_entity_visible(uParam3->f_1252.f_6.f_27, true);
		}
	}
	if (bVar0)
	{
		func_916(uParam0, uParam3, uParam2);
	}
	func_917(uParam3, uParam2);
	func_918(uParam0, uParam2, uParam3);
	if (bVar0)
	{
		func_919(uParam0, uParam2, uParam3);
		func_920(uParam0, uParam2, uParam3);
	}
}

void func_662(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_663(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_664(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

Vector3 func_665(int iParam0)
{
	if (func_335(1682364847, &vVar0, func_213(iParam0), 0, 0))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

float func_666(int iParam0)
{
	if (func_336(-658248538, &uVar0, func_213(iParam0), 0, 0))
	{
		return uVar0;
	}
	return 0f;
}

int func_667(int iParam0)
{
	if (func_408(2056519365, &uVar0, func_213(iParam0), 0, 0))
	{
		return uVar0;
	}
	return 0;
}

int func_668(int iParam0)
{
	if (func_408(-31533829, &uVar0, func_213(iParam0), 0, 0))
	{
		return uVar0;
	}
	return 0;
}

bool func_669(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_652(iParam1))
	{
		return false;
	}
	*uParam0 = obj_to_net(create_object(iParam1, vParam2, true, bParam5, false, false, true));
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam5)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_670(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_43((*Global_1298536)[iParam0]->f_19, iParam1);
}

char* func_671(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "empty_jug01_Ctrl";
		case 2:
			return "empty_jug02_Ctrl";
		case 3:
			return "empty_jug03_Ctrl";
		case 4:
			return "empty_jug04_Ctrl";
		case 5:
			return "empty_jug05_Ctrl";
		case 6:
			return "empty_jug06_Ctrl";
		case 7:
			return "empty_jug07_Ctrl";
		case 8:
			return "empty_jug08_Ctrl";
		case 9:
			return "empty_jug09_Ctrl";
		case 10:
			return "empty_jug10_Ctrl";
		case 11:
			return "empty_jug11_Ctrl";
		case 12:
			return "empty_jug12_Ctrl";
		case 13:
			return "empty_jug13_Ctrl";
		case 14:
			return "empty_jug14_Ctrl";
		case 15:
			return "empty_jug15_Ctrl";
		case 16:
			return "empty_jug16_Ctrl";
		case 17:
			return "empty_jug17_Ctrl";
		case 18:
			return "empty_jug18_Ctrl";
		case 19:
			return "empty_jug19_Ctrl";
		case 20:
			return "empty_jug20_Ctrl";
	}
	return "";
}

char* func_672(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "full_jug01_Ctrl";
		case 2:
			return "full_jug02_Ctrl";
		case 3:
			return "full_jug03_Ctrl";
		case 4:
			return "full_jug04_Ctrl";
		case 5:
			return "full_jug05_Ctrl";
		case 6:
			return "full_jug06_Ctrl";
		case 7:
			return "full_jug07_Ctrl";
		case 8:
			return "full_jug08_Ctrl";
		case 9:
			return "full_jug09_Ctrl";
		case 10:
			return "full_jug10_Ctrl";
		case 11:
			return "full_jug11_Ctrl";
		case 12:
			return "full_jug12_Ctrl";
		case 13:
			return "full_jug13_Ctrl";
		case 14:
			return "full_jug14_Ctrl";
		case 15:
			return "full_jug15_Ctrl";
		case 16:
			return "full_jug16_Ctrl";
		case 17:
			return "full_jug17_Ctrl";
		case 18:
			return "full_jug18_Ctrl";
		case 19:
			return "full_jug19_Ctrl";
		case 20:
			return "full_jug20_Ctrl";
	}
	return "";
}

void func_673(int iParam0)
{
	if (func_43((*Global_1298536)[&Global_1296859]->f_19, iParam0))
	{
		func_59(&((*Global_1298536)[&Global_1296859]->f_19), iParam0);
	}
}

int func_674(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
	}
	return 2049;
}

void func_675(var uParam0, var uParam1, vector3 vParam2, var uParam5)
{
	vParam2.f_2 = (vParam2.z + 10f);
	iVar0 = -1891242011;
	func_669(uParam1, iVar0, vParam2, 1, 0);
	iVar1 = net_to_obj(*uParam1);
	freeze_entity_position(iVar1, true);
	_network_set_entity_invisible_to_network(iVar1, true);
	set_entity_visible_in_cutscene(iVar1, 1, 1, uParam5);
}

bool func_676(var uParam0, var uParam1, int iParam2)
{
	if (network_does_network_id_exist(iParam2) == 0)
	{
		return false;
	}
	iVar0 = net_to_obj(iParam2);
	if (_does_scenario_point_exist(uParam1->f_1053.f_38))
	{
		iVar1 = _get_ped_using_scenario_point(uParam1->f_1053.f_38);
		if (does_entity_exist(iVar1))
		{
			if (is_entity_attached_to_entity(iVar0, iVar1))
			{
				return true;
			}
		}
	}
	if (_does_scenario_point_exist(uParam1->f_1053.f_39))
	{
		iVar2 = _get_ped_using_scenario_point(uParam1->f_1053.f_39);
		if (does_entity_exist(iVar2))
		{
			if (is_entity_attached_to_entity(iVar0, iVar2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_677()
{
	return true;
}

void func_678(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (&uParam0->f_1053.f_86[iVar0] == *iParam1)
			{
				uParam0->f_1053.f_86[iVar0] = 0;
			}
			iVar0++;
		}
	}
	switch (iParam2)
	{
		case 1:
			uParam0->f_1053.f_86[0] = *iParam1;
			break;
		case 2:
			uParam0->f_1053.f_86[1] = *iParam1;
			break;
		case 3:
			uParam0->f_1053.f_86[2] = *iParam1;
			break;
		case 4:
			uParam0->f_1053.f_86[3] = *iParam1;
			break;
		case 5:
			uParam0->f_1053.f_86[4] = *iParam1;
			break;
		case 6:
			uParam0->f_1053.f_86[5] = *iParam1;
			break;
	}
}

bool func_679(var uParam0, var uParam1)
{
	if (func_719(uParam0, uParam1, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_680()
{
	return true;
}

void func_681(var uParam0, var uParam1)
{
	if (does_entity_exist(uParam1->f_1053.f_19))
	{
		iVar0 = 900;
		fVar1 = ((to_float((get_game_timer() % iVar0)) / IntToFloat(iVar0)) * 360f);
		if (func_465(&(uParam1->f_1053.f_21)) && uParam1->f_1053.f_27 == 0)
		{
			fVar2 = 1f;
			if (func_484(&(uParam1->f_1053.f_21)) > fVar2)
			{
				uParam1->f_1053.f_20 = 0f;
				func_466(&(uParam1->f_1053.f_21));
			}
			else
			{
				uParam1->f_1053.f_20 = (100f * (fVar2 - (func_484(&(uParam1->f_1053.f_21)) / fVar2)));
			}
		}
		else if (func_342(uParam1->f_1053.f_31, 0) && uParam1->f_1053.f_27 == 0)
		{
			uParam1->f_1053.f_20 = (90f + (sin(fVar1) * 65f));
		}
		else
		{
			uParam1->f_1053.f_20 = 0f;
		}
		set_entity_alpha(uParam1->f_1053.f_19, floor(uParam1->f_1053.f_20), true);
	}
}

void func_682(var uParam0, var uParam1)
{
	if (!_does_scenario_point_exist(uParam1->f_1053.f_38))
	{
		uParam1->f_1053.f_38 = create_scenario_point(-2114469108, func_461(uParam0, uParam1), (func_727(uParam0, uParam1) - 90f), 0f, 0, 0);
	}
	if (!_does_scenario_point_exist(uParam1->f_1053.f_39))
	{
		uParam1->f_1053.f_39 = create_scenario_point(-2114469108, func_462(uParam0, uParam1), (func_727(uParam0, uParam1) - 90f), 0f, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!_does_scenario_point_exist(&(uParam1->f_1053.f_40[iVar0])))
		{
			uParam1->f_1053.f_40[iVar0] = create_scenario_point(-2007463055, func_463(uParam0, uParam1, iVar0, 0), (func_727(uParam0, uParam1) + 90f), 0f, 0, 0);
		}
		if (!_does_scenario_point_exist(&(uParam1->f_1053.f_54[iVar0])))
		{
			uParam1->f_1053.f_54[iVar0] = create_scenario_point(1274239098, func_463(uParam0, uParam1, iVar0, 0), (func_727(uParam0, uParam1) + 90f), 0f, 0, 0);
		}
		iVar0++;
	}
}

int func_683(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		iVar0 = uParam1->f_1053.f_39;
	}
	else
	{
		iVar0 = uParam1->f_1053.f_38;
	}
	if (_does_scenario_point_exist(iVar0) == 0)
	{
		return 0;
	}
	if (_get_ped_using_scenario_point(iVar0) != player_ped_id())
	{
		_task_use_scenario_point(player_ped_id(), iVar0, "", 0, false, true, 0, false, -1f, false);
		return 0;
	}
	if (bParam2)
	{
		uParam1->f_1053.f_36 = 4;
		uParam1->f_1053.f_24 = 0;
	}
	else
	{
		uParam1->f_1053.f_36 = 1;
		uParam1->f_1053.f_24 = 1;
	}
	uParam1->f_1053.f_77 = 1;
	uParam1->f_1053.f_76 = 3;
	Global_1298166->f_2 = 0;
	return 1;
}

int func_684(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 > 5)
	{
		return 0;
	}
	if (_does_scenario_point_exist(&(uParam1->f_1053.f_40[iParam2])) == 0)
	{
		return 0;
	}
	if (_get_ped_using_scenario_point(&(uParam1->f_1053.f_40[iParam2])) != player_ped_id())
	{
		_task_use_scenario_point(player_ped_id(), &(uParam1->f_1053.f_40[iParam2]), "", 0, false, true, 0, false, -1f, false);
		return 0;
	}
	func_444(&(uParam1->f_1053.f_70), 0);
	uParam1->f_1053.f_78 = 1;
	uParam1->f_1053.f_76 = 5;
	switch (iParam2)
	{
		case 0:
			uParam1->f_1053.f_36 = 0;
			break;
		case 1:
			uParam1->f_1053.f_36 = 1;
			break;
		case 2:
			uParam1->f_1053.f_36 = 2;
			break;
		case 3:
			uParam1->f_1053.f_36 = 3;
			break;
		case 4:
			uParam1->f_1053.f_36 = 4;
			break;
		case 5:
			uParam1->f_1053.f_36 = 5;
			break;
	}
	Global_1298166->f_2 = 0;
	return 1;
}

int func_685(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_116(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_587(iVar0, 2))
		{
			if (func_921(vParam2, (*Global_1951255)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1951255)[iVar0]->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
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
		func_588(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

char* func_686(var uParam0, var uParam1)
{
	switch (&Global_1940085)
	{
		case 0:
			uParam0->f_1053.f_29 = 0;
			if (is_ped_male(get_player_ped(get_player_index())))
			{
				return func_922(uParam0, uParam1, 0, 0);
			}
			else
			{
				return func_923(uParam0, uParam1, 0, 0);
			}
			break;
		case 1:
		case 2:
			uParam0->f_1053.f_29 = 1;
			if (is_ped_male(get_player_ped(get_player_index())))
			{
				return func_924(uParam0, uParam1, 0, 0);
			}
			else
			{
				return func_925(uParam0, uParam1, 0, 0);
			}
			break;
	}
	return "";
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 5;
		case 5:
			return 6;
		default:
			break;
	}
	return 0;
}

void func_688(var uParam0, var uParam1)
{
	func_345(&(uParam1->f_1053.f_17), 1, 1);
	func_345(&(uParam1->f_1053.f_18), 1, 1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_345(uParam1->f_1053.f_47[iVar0], 1, 1);
		func_345(uParam1->f_1053.f_61[iVar0], 1, 1);
		iVar0++;
	}
}

void func_689(var uParam0)
{
	func_926(uParam0, 0);
}

void func_690(var uParam0)
{
	func_345(&(uParam0->f_1053.f_17), 1, 1);
	func_345(&(uParam0->f_1053.f_18), 1, 1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_345(uParam0->f_1053.f_47[iVar0], 1, 1);
		iVar0++;
	}
	if (uParam0->f_1053.f_24 == 1)
	{
		uParam0->f_1053.f_36 = 1;
		_task_use_scenario_point(Global_34, uParam0->f_1053.f_38, func_927(uParam0), 0, true, false, 0, false, -1f, true);
	}
	else
	{
		uParam0->f_1053.f_36 = 4;
		_task_use_scenario_point(Global_34, uParam0->f_1053.f_39, func_927(uParam0), 0, true, false, 0, false, -1f, true);
	}
}

bool func_691(var uParam0, var uParam1)
{
	if (network_does_network_id_exist(&(uParam0->f_156[uParam1->f_1053.f_36])) == 0)
	{
		return true;
	}
	iVar0 = net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36]));
	if (func_928(player_ped_id(), iVar0, 1) > 4f)
	{
		return true;
	}
	if (is_entity_attached(iVar0))
	{
		return true;
	}
	if (!func_465(&(uParam1->f_1053.f_70)))
	{
		func_444(&(uParam1->f_1053.f_70), 0);
	}
	else if (func_484(&(uParam1->f_1053.f_70)) > 6f)
	{
		func_466(&(uParam1->f_1053.f_70));
		return true;
	}
	return false;
}

char* func_692(var uParam0)
{
	sVar0 = "";
	if (is_ped_male(get_player_ped(get_player_index())))
	{
		switch (&Global_1940085)
		{
			case 0:
				sVar0 = "WORLD_PLAYER_MOONSHINE_GRAB_DRINK_FROM_BAR_SOBER_MALE_A";
				break;
			case 1:
				sVar0 = "WORLD_PLAYER_MOONSHINE_GRAB_DRINK_FROM_BAR_DRUNK_MALE_A";
				break;
			case 2:
				sVar0 = "WORLD_PLAYER_MOONSHINE_GRAB_DRINK_FROM_BAR_WASTED_MALE_A";
				break;
		}
	}
	else
	{
		switch (&Global_1940085)
		{
			case 0:
				sVar0 = "WORLD_PLAYER_MOONSHINE_GRAB_DRINK_FROM_BAR_SOBER_FEMALE_A";
				break;
			case 1:
				sVar0 = "WORLD_PLAYER_MOONSHINE_GRAB_DRINK_FROM_BAR_DRUNK_FEMALE_A";
				break;
			case 2:
				sVar0 = "WORLD_PLAYER_MOONSHINE_GRAB_DRINK_FROM_BAR_WASTED_FEMALE_A";
				break;
		}
	}
	return sVar0;
}

void func_693(var uParam0, var uParam1)
{
	iVar0 = net_to_obj(*uParam1);
	if (does_entity_exist(iVar0))
	{
		if (_0x083d497d57b7400f(iVar0))
		{
			freeze_entity_position(iVar0, false);
		}
		attach_entity_to_entity(iVar0, Global_34, get_ped_bone_index(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		return;
	}
}

bool func_694(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (network_does_network_id_exist(*uParam1) == 0)
	{
		return true;
	}
	if (network_has_control_of_network_id(*uParam1) == 0)
	{
	}
	iVar0 = net_to_obj(*uParam1);
	if (does_entity_exist(iVar0) == 0)
	{
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		return true;
	}
	if (iParam2 == 1)
	{
		clear_ped_tasks(player_ped_id(), 1, 0);
		if (is_player_control_on(get_player_index()) == 0)
		{
			set_player_control(get_player_index(), true, 0, false);
		}
	}
	detach_entity(iVar0, true, true);
	iVar1 = func_929();
	if (iVar1 != 0)
	{
		_task_item_interaction_2(player_ped_id(), iVar1, iVar0, 347994579, func_930(bParam3), 3, 0, -1f);
		if ((chal_is_goal_active(-600094696, -1310410590) && _0xd6f6acf4392187fb(Global_1296859->f_15)) && _0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
		{
			chal_add_goal_progress_float_by_score_id(iVar1, 1f);
		}
	}
	else
	{
		iVar1 = func_931();
		_task_item_interaction_2(player_ped_id(), iVar1, iVar0, 347994579, func_930(bParam3), 3, 0, -1f);
	}
	return false;
}

bool func_695(var uParam0, var uParam1, int iParam2)
{
	vVar0 = { func_463(uParam0, uParam1, uParam1->f_1053.f_36, 0) };
	if (does_entity_exist(&(uParam1->f_1053.f_86[uParam1->f_1053.f_36])))
	{
		vVar0.f_2 = (vVar0.z + 1.25f);
	}
	else
	{
		vVar0.f_2 = (vVar0.z + 0.6f);
	}
	if (iParam2 == 0)
	{
		if (does_entity_exist(uParam1->f_1053.f_19))
		{
			set_entity_alpha(uParam1->f_1053.f_19, 0, false);
			set_entity_coords(uParam1->f_1053.f_19, func_463(uParam0, uParam1, uParam1->f_1053.f_36, 1), true, false, true, true);
		}
		else
		{
			uParam1->f_1053.f_19 = create_object(-1891242011, func_463(uParam0, uParam1, uParam1->f_1053.f_36, 1), false, false, false, false, true);
		}
	}
	func_932(uParam0, uParam1, vVar0);
	return true;
}

void func_696(var uParam0)
{
	uParam0->f_1053.f_28 = 0;
	uParam0->f_1053.f_32 = func_575(func_439(8), -875187602, 285921746, 0);
	func_477(uParam0->f_1053.f_32, -875187602);
	func_477(uParam0->f_1053.f_32, 285921746);
	if (does_entity_exist(&(uParam0->f_1053.f_86[uParam0->f_1053.f_36])))
	{
		uParam0->f_1053.f_31 = func_933(func_439(5), 2080465600, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
	}
	else
	{
		uParam0->f_1053.f_31 = func_933(func_439(6), 2080465600, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
	}
	uParam0->f_1053.f_33 = func_933(func_439(7), 1840825903, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
	uParam0->f_1053.f_34 = func_933(func_439(9), 359624985, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
	func_476(uParam0->f_1053.f_32, -1253195061, 0, 1);
	func_476(uParam0->f_1053.f_31, -1253195061, 0, 1);
	func_476(uParam0->f_1053.f_33, -1253195061, 0, 1);
	func_476(uParam0->f_1053.f_34, -1253195061, 0, 1);
}

bool func_697(int iParam0, bool bParam1)
{
	if (bParam1 && !func_341(iParam0))
	{
		return false;
	}
	iVar0 = func_589(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_698(var uParam0, var uParam1)
{
	iVar0 = func_934(uParam0, uParam1);
	if (iVar0 == 255)
	{
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	func_482(func_760(-645211208, 1862763509), 1);
	if (!func_935(uParam0, iVar0))
	{
		func_482(func_760(-645211208, 1767527735), 1);
		func_936(uParam0, iVar0);
	}
}

void func_699(var uParam0, var uParam1, bool bParam2)
{
	if (func_341(uParam1->f_1053.f_31) == 0 && bParam2)
	{
		if (does_entity_exist(&(uParam1->f_1053.f_86[uParam1->f_1053.f_36])))
		{
			uParam1->f_1053.f_31 = func_933(func_439(5), 2080465600, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		}
		else
		{
			uParam1->f_1053.f_31 = func_933(func_439(6), 2080465600, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		}
	}
	func_338(uParam1->f_1053.f_32, bParam2, 1, 1);
	func_338(uParam1->f_1053.f_33, bParam2, 1, 1);
	func_338(uParam1->f_1053.f_34, bParam2, 1, 1);
}

void func_700(var uParam0, var uParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (func_937(uParam1->f_1053.f_32, 0, 1) || iVar0 == 1)
	{
		func_938(uParam1);
		while (!func_695(uParam0, uParam1, 0) && iVar1 < 6)
		{
			iVar1++;
			func_938(uParam1);
		}
		bVar2 = true;
	}
	else if (func_937(uParam1->f_1053.f_32, 1, 1) || iVar0 == 2)
	{
		func_939(uParam1);
		while (!func_695(uParam0, uParam1, 0) && iVar1 < 6)
		{
			iVar1++;
			func_939(uParam1);
		}
		bVar2 = true;
	}
	if (bVar2)
	{
		if (func_341(uParam1->f_1053.f_31))
		{
			if (does_entity_exist(&(uParam1->f_1053.f_86[uParam1->f_1053.f_36])))
			{
				func_722(uParam1->f_1053.f_31, func_439(5), 0);
			}
			else
			{
				func_722(uParam1->f_1053.f_31, func_439(6), 0);
			}
		}
		uParam1->f_1053.f_28 = 0;
		uParam1->f_1053.f_27 = 0;
		func_699(uParam0, uParam1, 1);
	}
}

bool func_701(var uParam0, var uParam1, var uParam2)
{
	return func_437(uParam0, uParam1, 0);
}

bool func_702(var uParam0, var uParam1)
{
	if (func_680())
	{
		return false;
	}
	switch (uParam0->f_1053.f_36)
	{
		case 0:
		case 1:
		case 2:
			if (uParam0->f_1053.f_24 == 0)
			{
				uParam0->f_1053.f_24 = 1;
				(*uParam1)[participant_id_to_int()]->f_10 = 7;
				func_941(player_ped_id(), uParam0->f_1053.f_38, func_940(uParam0), "BASE_TRANS_LEFT_BASE");
				return true;
			}
			break;
		case 3:
		case 4:
		case 5:
			if (uParam0->f_1053.f_24)
			{
				uParam0->f_1053.f_24 = 0;
				(*uParam1)[participant_id_to_int()]->f_10 = 8;
				func_941(player_ped_id(), uParam0->f_1053.f_39, func_942(uParam0), "BASE_TRANS_RIGHT_BASE");
				return true;
			}
			break;
	}
	return false;
}

bool func_703()
{
	uVar0 = _0xc488b8c0e52560d8(Global_34);
	uVar1 = _0x2dc0e8dcbd3546e9(Global_34);
	if ((uVar0 || uVar1) && !has_anim_event_fired(Global_34, 1944546609))
	{
		return false;
	}
	return true;
}

bool func_704(var uParam0, var uParam1)
{
	if (func_676(uParam0, uParam1, &(uParam0->f_156[uParam1->f_1053.f_36])))
	{
		return true;
	}
	if (func_679(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

int func_705(int iParam0, float fParam1)
{
	if (!_0x68821369a2ceadd5(Global_34, iParam0))
	{
		_0xd65fdc686a031c83(Global_34, iParam0, fParam1);
		_0x6d07b371e9439019(Global_34);
		return 0;
	}
	return 1;
}

void func_706(var uParam0, var uParam1)
{
	if (uParam1->f_1053.f_24)
	{
		vVar0 = { func_943(uParam0, uParam1) };
	}
	else
	{
		vVar0 = { func_944(uParam0, uParam1) };
	}
	if (has_ptfx_asset_loaded())
	{
		if (does_particle_fx_looped_exist(uParam1->f_1053.f_37) == 0)
		{
			uParam1->f_1053.f_37 = start_particle_fx_looped_at_coord("scr_net_moonshine_pour_bar", vVar0, 0f, 0f, 0f, 1f, false, false, false, false);
		}
		else
		{
			set_particle_fx_looped_alpha(uParam1->f_1053.f_37, 1f);
		}
	}
}

void func_707(var uParam0, var uParam1)
{
	if (does_particle_fx_looped_exist(uParam1->f_1053.f_37))
	{
		stop_particle_fx_looped(uParam1->f_1053.f_37, false);
		remove_particle_fx(uParam1->f_1053.f_37, false);
	}
}

int func_708(var uParam0)
{
	if (func_680())
	{
		return func_945(uParam0);
	}
	return func_946(uParam0);
}

void func_709(var uParam0, var uParam1)
{
	if (network_is_host_of_this_script())
	{
		switch (uParam1->f_1053.f_36)
		{
			case 0:
				func_83(&(uParam0->f_156.f_9), 1);
				break;
			case 1:
				func_83(&(uParam0->f_156.f_9), 2);
				break;
			case 2:
				func_83(&(uParam0->f_156.f_9), 4);
				break;
			case 3:
				func_83(&(uParam0->f_156.f_9), 8);
				break;
			case 4:
				func_83(&(uParam0->f_156.f_9), 16);
				break;
			case 5:
				func_83(&(uParam0->f_156.f_9), 32);
				break;
		}
	}
}

void func_710(var uParam0, var uParam1)
{
}

void func_711(var uParam0)
{
	if (uParam0->f_1053.f_29 != &Global_1940085)
	{
		switch (uParam0->f_1053.f_29)
		{
			case 0:
				if (&Global_1940085 == 1 || &Global_1940085 == 2)
				{
					uParam0->f_1053.f_29 = &Global_1940085;
					_0xd65fdc686a031c83(Global_34, 602028845, 6f);
				}
				break;
			case 1:
				if (&Global_1940085 == 0)
				{
					uParam0->f_1053.f_29 = &Global_1940085;
					_0xd65fdc686a031c83(Global_34, 1880308722, 6f);
				}
				else if (&Global_1940085 == 2)
				{
					uParam0->f_1053.f_29 = &Global_1940085;
				}
				break;
			case 2:
				if (&Global_1940085 == 0)
				{
					uParam0->f_1053.f_29 = &Global_1940085;
					_0xd65fdc686a031c83(Global_34, 1880308722, 6f);
				}
				else if (&Global_1940085 == 1)
				{
					uParam0->f_1053.f_29 = &Global_1940085;
				}
				break;
		}
	}
}

void func_712(var uParam0, var uParam1)
{
	iVar0 = 5500;
	switch (uParam1->f_1053.f_36)
	{
		case 0:
		case 1:
		case 2:
			if (_does_scenario_point_exist(uParam1->f_1053.f_38))
			{
				iVar1 = _get_ped_using_scenario_point(uParam1->f_1053.f_38);
				if (does_entity_exist(iVar1))
				{
					task_look_at_entity(Global_34, iVar1, iVar0, 131072, 51, 0);
					return;
				}
			}
			if (_does_scenario_point_exist(uParam1->f_1053.f_39))
			{
				iVar1 = _get_ped_using_scenario_point(uParam1->f_1053.f_39);
				if (does_entity_exist(iVar1))
				{
					task_look_at_entity(Global_34, iVar1, iVar0, 131072, 51, 0);
					return;
				}
			}
			break;
		case 3:
		case 4:
		case 5:
			if (_does_scenario_point_exist(uParam1->f_1053.f_39))
			{
				iVar1 = _get_ped_using_scenario_point(uParam1->f_1053.f_39);
				if (does_entity_exist(iVar1))
				{
					task_look_at_entity(Global_34, iVar1, iVar0, 131072, 51, 0);
					return;
				}
			}
			if (_does_scenario_point_exist(uParam1->f_1053.f_38))
			{
				iVar1 = _get_ped_using_scenario_point(uParam1->f_1053.f_38);
				if (does_entity_exist(iVar1))
				{
					task_look_at_entity(Global_34, iVar1, iVar0, 131072, 51, 0);
					return;
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (does_entity_exist(&(uParam1->f_1053.f_86[iVar2])) && &uParam1->f_1053.f_86[iVar2] != player_ped_id())
		{
			task_look_at_entity(Global_34, &(uParam1->f_1053.f_86[iVar2]), iVar0, 131072, 51, 0);
			return;
		}
		iVar2++;
	}
}

void func_713(var uParam0, var uParam1)
{
	if (func_341(uParam1->f_1053.f_69))
	{
		bVar0 = _0x083d497d57b7400f(net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36])));
		if (func_342(uParam1->f_1053.f_69, 0) != bVar0)
		{
			func_338(uParam1->f_1053.f_69, bVar0, 1, 1);
		}
	}
	bVar1 = false;
	vVar2 = { func_463(uParam0, uParam1, uParam1->f_1053.f_36, 0) };
	iVar5 = net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36]));
	vVar2.f_2 = (vVar2.z + 10f);
	if (get_distance_between_coords(get_entity_coords(iVar5, true, false), vVar2, true) > 0.25f)
	{
		bVar1 = true;
	}
	if (func_679(uParam0, uParam1) || bVar1)
	{
		if (func_341(uParam1->f_1053.f_68))
		{
			func_345(&(uParam1->f_1053.f_68), 1, 1);
		}
		if (func_341(uParam1->f_1053.f_69) == 0)
		{
			uParam1->f_1053.f_69 = func_933(func_439(3), 1840825903, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_338(uParam1->f_1053.f_69, 0, 1, 1);
			func_476(uParam1->f_1053.f_69, -157697315, 0, 1);
		}
	}
	else
	{
		if (func_341(uParam1->f_1053.f_69))
		{
			func_345(&(uParam1->f_1053.f_69), 1, 1);
		}
		if (func_341(uParam1->f_1053.f_68) == 0)
		{
			uParam1->f_1053.f_68 = func_933(func_439(2), 1840825903, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_476(uParam1->f_1053.f_68, -157697315, 0, 1);
		}
	}
	if (func_341(uParam1->f_1053.f_34) == 0)
	{
		uParam1->f_1053.f_34 = func_933(func_439(9), 359624985, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_476(uParam1->f_1053.f_34, -157697315, 0, 1);
	}
}

void func_714(var uParam0, bool bParam1)
{
	if (func_341(uParam0->f_1053.f_68))
	{
		func_338(uParam0->f_1053.f_68, bParam1, 1, 1);
	}
	if (func_341(uParam0->f_1053.f_69))
	{
		func_338(uParam0->f_1053.f_69, bParam1, 1, 1);
	}
	if (func_341(uParam0->f_1053.f_34))
	{
		func_338(uParam0->f_1053.f_34, bParam1, 1, 1);
	}
}

void func_715(var uParam0, var uParam1)
{
	if (network_is_host_of_this_script())
	{
		switch (uParam1->f_1053.f_36)
		{
			case 0:
				func_99(&(uParam0->f_156.f_9), 1);
				break;
			case 1:
				func_99(&(uParam0->f_156.f_9), 2);
				break;
			case 2:
				func_99(&(uParam0->f_156.f_9), 4);
				break;
			case 3:
				func_99(&(uParam0->f_156.f_9), 8);
				break;
			case 4:
				func_99(&(uParam0->f_156.f_9), 16);
				break;
			case 5:
				func_99(&(uParam0->f_156.f_9), 32);
				break;
		}
	}
}

void func_716(var uParam0, var uParam1)
{
	switch (uParam1->f_1053.f_78)
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
			if (is_ped_using_any_scenario(player_ped_id()) == 0)
			{
				func_338(uParam1->f_1053.f_34, 0, 1, 1);
				func_338(uParam1->f_1053.f_68, 0, 1, 1);
				func_338(uParam1->f_1053.f_69, 0, 1, 1);
				if (network_does_network_id_exist(&(uParam0->f_156[uParam1->f_1053.f_36])))
				{
					if (network_has_control_of_network_id(&(uParam0->f_156[uParam1->f_1053.f_36])))
					{
						iVar0 = net_to_obj(&(uParam0->f_156[uParam1->f_1053.f_36]));
						if (is_entity_attached_to_entity(get_player_ped(get_player_index()), iVar0))
						{
							detach_entity(iVar0, true, true);
							set_object_as_no_longer_needed(&iVar0);
						}
					}
				}
				if (is_player_control_on(get_player_index()) == 0)
				{
					set_player_control(get_player_index(), true, 0, false);
				}
				func_445(uParam1, 10);
			}
			break;
	}
}

bool func_717()
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

bool func_718(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1939493)[iVar0]->f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_719(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = uParam1->f_1053.f_36;
	if (bParam3)
	{
		iVar0 = iParam2;
	}
	switch (iVar0)
	{
		case 0:
			return func_43(uParam0->f_156.f_9, 1);
		case 1:
			return func_43(uParam0->f_156.f_9, 2);
		case 2:
			return func_43(uParam0->f_156.f_9, 4);
		case 3:
			return func_43(uParam0->f_156.f_9, 8);
		case 4:
			return func_43(uParam0->f_156.f_9, 16);
		case 5:
			return func_43(uParam0->f_156.f_9, 32);
	}
	return false;
}

float func_720(int iParam0, bool bParam1)
{
	if (bParam1 && !func_341(iParam0))
	{
		return 0f;
	}
	iVar0 = func_589(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1951255)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
}

void func_721(char* sParam0)
{
	if ((get_frame_count() % 60) == 0)
	{
	}
}

void func_722(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_341(iParam0))
	{
		return;
	}
	iVar0 = func_589(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

void func_723(var uParam0, bool bParam1)
{
	if (bParam1 || !func_64(uParam0))
	{
		func_63(uParam0);
	}
}

int func_724()
{
	return func_90(func_947(), 1);
}

int func_725(int iParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 5)
	{
		return 0;
	}
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	is_entity_dead(iParam0);
	iVar0 = &Global_1298378->f_78.f_44[iParam1];
	if (!_does_volume_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_in_volume(iParam0, iVar0, true, 0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_726(var uParam0)
{
	vVar0 = { 0f, 0f, 0f };
	switch (func_724())
	{
		case 0:
			vVar0 = { 1779.365f, -802.881f, 187.9654f };
			break;
		case 1:
			vVar0 = { -1086.47f, 694.842f, 79.6002f };
			break;
		case 2:
			vVar0 = { -2785.119f, -3060.224f, -13.3343f };
			break;
		case 3:
			vVar0 = { 1615.008f, 837.4983f, 120.3081f };
			break;
		case 4:
			vVar0 = { -1851.025f, -1738.521f, 84.6213f };
			break;
	}
	return vVar0;
}

float func_727(var uParam0, var uParam1)
{
	switch (func_724())
	{
		case 0:
			fVar0 = -136.6f;
			break;
		case 1:
			fVar0 = 23.5f;
			break;
		case 2:
			fVar0 = -27.7f;
			break;
		case 3:
			fVar0 = -113.2f;
			break;
		case 4:
			fVar0 = 60f;
			break;
	}
	return (fVar0 + 90f);
}

float func_728(var uParam0)
{
	switch (func_724())
	{
		case 0:
			fVar0 = 187.96f;
			break;
		case 1:
			fVar0 = 79.595f;
			break;
		case 2:
			fVar0 = -12.919f;
			break;
		case 3:
			fVar0 = 120.3f;
			break;
		case 4:
			fVar0 = 84.616f;
			break;
	}
	return fVar0;
}

void func_729(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_190.f_1[iVar0] = -30;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar2))
		{
			iVar3 = network_get_player_index(iVar2);
			if (network_is_player_active(iVar3) && iVar1 < 4)
			{
				uParam0->f_190.f_1[iVar1] = get_unique_int_for_player(iVar3);
				iVar1++;
			}
		}
		iVar0++;
	}
	if (_network_is_player_index_valid(*uParam2) && network_is_player_active(*uParam2))
	{
		iVar4 = get_unique_int_for_player(*uParam2);
		if (iVar4 != &uParam0->f_190.f_1[0])
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (&uParam0->f_190.f_1[iVar0] == iVar4)
				{
					iVar5 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
			uVar6 = &uParam0->f_190.f_1[0];
			uParam0->f_190.f_1[0] = &uParam0->f_190.f_1[iVar5];
			uParam0->f_190.f_1[iVar5] = uVar6;
		}
	}
}

void func_730(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_731(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if ((*uParam0)[iVar0]->f_21 < 5)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_732(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_733(var uParam0, var uParam1, int iParam2)
{
	if (!func_948())
	{
		Var0 = { 0f, 0f, 0f };
		Var0.f_3 = 0f;
		iVar4 = player_ped_id();
		if (!does_entity_exist(iVar4))
		{
			return;
		}
		iVar5 = get_unique_int_for_player(player_id());
		iVar6 = 0;
		while (iVar6 < 4)
		{
			if (iVar5 == &uParam0->f_190.f_1[iVar6])
			{
				uParam1->f_1199.f_13 = iVar6;
			}
			else
			{
				iVar6++;
			}
		}
		func_949(uParam0, uParam1, uParam1->f_1199.f_13, &Var0, iParam2);
		if (!func_116(Var0))
		{
			_set_entity_coords_and_heading(iVar4, Var0, Var0.f_3, true, false, true);
			func_734(uParam1, 8);
			func_734(uParam1, 1);
		}
	}
}

void func_734(var uParam0, int iParam1)
{
	func_83(&(uParam0->f_1199.f_1), iParam1);
}

bool func_735(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_1199))
	{
		uParam0->f_1199 = create_object(1627871020, func_330(iParam1), false, false, false, false, false);
		return false;
	}
	return true;
}

void func_736(var uParam0)
{
	if (does_entity_exist(uParam0->f_1199))
	{
		iVar0 = func_929();
		if (iVar0 == 0)
		{
			iVar0 = func_931();
		}
		_task_item_interaction_2(player_ped_id(), iVar0, uParam0->f_1199, 347994579, func_930(0), 3, 0, -1f);
		func_734(uParam0, 16);
	}
}

bool func_737(var uParam0, int iParam1)
{
	if (!func_64(&(uParam0->f_1199.f_10)))
	{
		func_63(&(uParam0->f_1199.f_10));
		return false;
	}
	if (func_950(&(uParam0->f_1199.f_10)) > iParam1)
	{
		func_109(&(uParam0->f_1199.f_10));
		return true;
	}
	return false;
}

void func_738(var uParam0, int iParam1)
{
	if (!does_cam_exist(uParam0->f_1199.f_2.f_6))
	{
		uParam0->f_1199.f_2.f_6 = create_camera(26379945, false);
		uParam0->f_1199.f_2 = { func_951(uParam0, iParam1) };
		uParam0->f_1199.f_2.f_3 = { func_952(uParam0, iParam1) };
		set_cam_coord(uParam0->f_1199.f_2.f_6, uParam0->f_1199.f_2);
		point_cam_at_coord(uParam0->f_1199.f_2.f_6, uParam0->f_1199.f_2.f_3);
		set_cam_fov(uParam0->f_1199.f_2.f_6, 52.3f);
		set_cam_active(uParam0->f_1199.f_2.f_6, true);
		render_script_cams(true, false, 3000, true, false, 0);
	}
}

void func_739(var uParam0, int iParam1)
{
	func_99(&(uParam0->f_1199.f_1), iParam1);
}

void func_740(var uParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, &Var0, 4))
	{
		return;
	}
	if (Var0.f_1 == player_id())
	{
		return;
	}
	switch (Var0)
	{
		case 16:
		case 17:
			func_953(uParam0, iParam1, Var0);
			break;
	}
}

void func_741(float fParam0, bool bParam1)
{
	if (is_ped_on_mount(Global_34) || is_ped_in_any_vehicle(Global_34, false))
	{
		if (fParam0 >= func_954())
		{
			Global_1940085->f_9 = (func_954() - 0.01f);
			return;
		}
	}
	if (fParam0 < 0f)
	{
		Global_1940085->f_9 = 0f;
		_0x06d26a96ca1bca75(Global_34, 10, Global_1940085->f_9, 0);
	}
	else if (fParam0 >= 1f && Global_1940085->f_14)
	{
		Global_1940085->f_9 = 0.99f;
	}
	else if (fParam0 > 1f)
	{
		Global_1940085->f_9 = 1f;
	}
	else
	{
		Global_1940085->f_9 = fParam0;
	}
	if (bParam1)
	{
		Global_1940085->f_12 = 1;
	}
}

bool func_742(int iParam0, bool bParam1)
{
	if (bParam1 && !func_341(iParam0))
	{
		return true;
	}
	return func_587(iParam0, 4);
}

int func_743(var uParam0)
{
	if (!func_465(uParam0))
	{
		return 0;
	}
	if (func_955(uParam0))
	{
		return uParam0->f_2;
	}
	return func_956(uParam0->f_1);
}

bool func_744(var uParam0)
{
	iVar0 = uParam0->f_72;
	while (iVar0 <= 8)
	{
		iVar2 = iVar0;
		if (func_957(iVar2) != 0)
		{
			iVar1 = _find_closest_active_scenario_point_of_type(func_958(iVar2, uParam0->f_76), func_957(iVar2), 0.25f, 0, false);
			if (_does_scenario_point_exist(iVar1))
			{
				if (_get_scenario_point_type(iVar1) == func_957(iVar2))
				{
					uParam0->f_11[iVar0] = iVar1;
				}
				else
				{
					uParam0->f_72 = iVar0;
					return false;
				}
			}
			else
			{
				uParam0->f_72 = iVar0;
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_745(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = iVar0;
		iVar2 = func_959(iVar1);
		if (iVar1 != 8)
		{
			if (iVar2 == -1)
			{
			}
			else if (!_does_scenario_point_exist(&(uParam0->f_11[iVar2])))
			{
			}
			else
			{
				if (func_341(&(uParam0->f_1[iVar0])))
				{
					func_722(&(uParam0->f_1[iVar0]), func_960(*uParam0, iVar1), 0);
				}
				else
				{
					fVar3 = 0.25f;
					if (iVar1 == 5 || iVar1 == 6)
					{
						fVar3 = 0.71f;
					}
					uParam0->f_1[iVar0] = func_685(func_960(*uParam0, iVar1), func_961(iVar1), func_962(iVar1, uParam0->f_76), fVar3, 2, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					uParam0->f_20[iVar0] = create_object_no_offset(1077976463, func_962(iVar1, uParam0->f_76), false, false, false, true);
					freeze_entity_position(&(uParam0->f_20[iVar0]), true);
					set_entity_visible(&(uParam0->f_20[iVar0]), false);
					if (iVar1 == 5 || iVar1 == 6)
					{
						func_963(&(uParam0->f_1[iVar0]), 17, 1, 0);
					}
					else
					{
						func_476(&(uParam0->f_1[iVar0]), _uiprompt_get_group_id_for_target_entity(&(uParam0->f_20[iVar0])), 0, 1);
					}
				}
				StringCopy(uParam0->f_34[iVar0], "", 32);
			}
			iVar0++;
			_0x06c3db00b69d5435(player_id(), func_439(9));
			_0x988c9045531b9fce(player_id(), func_964());
			return 1;
		}
	}
}

void func_746(var uParam0)
{
	Var0 = 17;
	Var0.f_4 = uParam0;
	uVar5 = func_965(4, 8);
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	trigger_script_event(1, &Var0, 5, 46, &uVar5);
}

void func_747(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(uParam0->f_20[iParam1])))
	{
		return;
	}
	if (iParam1 != 5 && iParam1 != 6)
	{
		_uiprompt_set_ambient_group_this_frame(&(uParam0->f_20[iParam1]), 0.75f, 2, 1, 0, func_966(*uParam0, iParam1, uParam0->f_34[iParam1]), 0);
	}
}

void func_748(var uParam0, int iParam1)
{
	iVar0 = func_959(iParam1);
	StringCopy(&cVar1, "", 64);
	if (ped_has_use_scenario_task(Global_34))
	{
		return;
	}
	if (iVar0 != -1)
	{
	}
	switch (iParam1)
	{
		case 0:
		case 1:
			switch (*uParam0)
			{
				case 1:
					StringCopy(&cVar1, "PROP_PLAYER_EAT_ALMONDS_COUNTER_NO_DOF", 64);
					break;
				case 2:
					StringCopy(&cVar1, "PROP_PLAYER_EAT_ALMONDS_COUNTER_NO_DOF_DRUNK", 64);
					break;
				case 3:
					StringCopy(&cVar1, "PROP_PLAYER_EAT_ALMONDS_COUNTER_NO_DOF_WASTED", 64);
					break;
			}
			if (is_ped_male(player_ped_id()))
			{
				StringConCat(&cVar1, "_MALE_A", 64);
			}
			else
			{
				StringConCat(&cVar1, "_FEMALE_A", 64);
			}
			_task_use_scenario_point(player_ped_id(), &(uParam0->f_11[iVar0]), func_618(cVar1), 0, true, false, 0, false, 0.5f, true);
			uParam0->f_30 = iVar0;
			func_473(uParam0, 8);
			break;
		case 7:
			_task_use_scenario_point(player_ped_id(), &(uParam0->f_11[5]), 0, 0, true, false, 0, false, 0.5f, true);
			uParam0->f_30 = 5;
			func_473(uParam0, 8);
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (*uParam0)
			{
				case 1:
					StringCopy(&cVar1, "WORLD_PLAYER_MOONSHINE_SELF_SERVE_CASK_SOBER", 64);
					break;
				case 2:
					StringCopy(&cVar1, "WORLD_PLAYER_MOONSHINE_SELF_SERVE_CASK_DRUNK", 64);
					break;
				case 3:
					StringCopy(&cVar1, "WORLD_PLAYER_MOONSHINE_SELF_SERVE_CASK_WASTED", 64);
					break;
			}
			if (is_ped_male(player_ped_id()))
			{
				StringConCat(&cVar1, "_MALE_A", 64);
			}
			else
			{
				StringConCat(&cVar1, "_FEMALE_A", 64);
			}
			_task_use_scenario_point(player_ped_id(), &(uParam0->f_11[iVar0]), func_618(cVar1), 0, true, false, 0, false, 0.5f, true);
			uParam0->f_30 = iVar0;
			func_473(uParam0, 8);
			break;
		case 8:
			if (_0xec7e480ff8bd0bed(player_ped_id()))
			{
				return;
			}
			iVar9 = create_object(-82199229, Global_35, false, false, false, false, true);
			_0x669655ffb29ef1a9(iVar9, 0, "CTRL_cupFill", 1f);
			_task_item_interaction_2(Global_34, -1199896558, iVar9, 347994579, -1200848232, 1, 0, -1f);
			break;
	}
	if (uParam0->f_31 == -1 && iParam1 != 8)
	{
		uParam0->f_31 = iParam1;
		func_967(iParam1);
	}
}

void func_749(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_341(&(uParam0->f_1[iVar0])))
		{
			func_338(&(uParam0->f_1[iVar0]), bParam1, 0, 1);
			if (!bParam1)
			{
				func_968(&(uParam0->f_1[iVar0]), 0, 0);
			}
		}
		iVar0++;
	}
}

void func_750(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_345((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

int func_751(int iParam0, int iParam1)
{
	if (func_969(iParam0, iParam1, &Var0))
	{
		return Var0.f_1;
	}
	return -1;
}

bool func_752(int iParam0)
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
	_copy_memory(iParam0, &uVar1, 5);
	*iParam0 = uVar0;
	return true;
}

bool func_753(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_754(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return _datafile_get_num_nodes(uParam0);
}

int func_755(var uParam0)
{
	return func_970(uParam0, 68, 1);
}

bool func_756(var uParam0, int iParam1, int iParam2)
{
	if (!func_752(uParam0))
	{
		return false;
	}
	if (!func_753(uParam0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_753(uParam0, 17, 0, 0, 1))
	{
		return false;
	}
	if (!func_753(uParam0, 19, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_753(uParam0, 13, 0, 0, 0))
	{
		return false;
	}
	if (!func_753(uParam0, 45, iParam2, 0, 1))
	{
		return false;
	}
	return true;
}

var func_757(var uParam0)
{
	return func_971(uParam0, 77, 1);
}

int func_758(var uParam0)
{
	return func_970(uParam0, 70, 1);
}

int func_759(var uParam0)
{
	return func_970(uParam0, 71, 1);
}

struct<2> func_760(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_761(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 241)
	{
		iVar1 = func_972(iVar0, 1);
		_datafile_register_query(uParam0, iVar1, func_973(iVar1));
		iVar0++;
	}
}

void func_762(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		iVar1 = func_974(iVar0, 1);
		_datafile_register_query(uParam0, iVar1, func_975(iVar1));
		iVar0++;
	}
}

void func_763(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		iVar1 = func_976(iVar0, 1);
		_datafile_register_query(uParam0, iVar1, func_977(iVar1));
		iVar0++;
	}
}

void func_764(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		iVar1 = func_978(iVar0, 1);
		_datafile_register_query(uParam0, iVar1, func_979(iVar1));
		iVar0++;
	}
}

int func_765(var uParam0)
{
	return uParam0->f_81;
}

void func_766(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = func_980(&(uParam0->f_385), iParam1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (!bParam3)
	{
		if (_0x3ab6c7b0bb0df4b1(iVar0, -1))
		{
			return;
		}
	}
	iVar2 = get_script_task_status(iVar0, -76381094, false);
	if (iVar2 == 1 || iVar2 == 0)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			iVar1 = 4;
			break;
	}
	iVar3 = &uParam0->f_1241[iVar1];
	if (!_does_scenario_point_exist(iVar3))
	{
		return;
	}
	if (_0x9c54041bb66bcf9e(iVar0, iVar3))
	{
		return;
	}
	_task_use_scenario_point(iVar0, iVar3, 0, 0, false, true, 0, false, -1f, false);
	if (bParam2)
	{
		_0x2208438012482a1a(iVar0, false, false);
	}
}

bool func_767(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = func_765(&(uParam0->f_385));
	iVar1 = func_817(&(uParam0->f_385), iVar0);
	iVar2 = func_525(&(uParam0->f_385), iVar0);
	iVar3 = func_980(&(uParam0->f_385), iParam1);
	if (!does_entity_exist(iVar3))
	{
		return false;
	}
	if (is_entity_dead(iVar3))
	{
		return false;
	}
	iVar12 = get_entity_model(iVar3);
	if (!_is_anim_scene_started(iVar1, false))
	{
		return !bParam2;
	}
	if (!_0x3ab6c7b0bb0df4b1(iVar3, iVar1))
	{
		return false;
	}
	Var4 = { func_981(iVar2, iVar12) };
	if (!_0x005e6f28dd7ed58d(iVar1, &Var4))
	{
		return false;
	}
	if (!_0x73616e64696c616e(iVar1, &Var4, 1, 0))
	{
		return false;
	}
	return true;
}

void func_768(var uParam0, var uParam1, var uParam2, int iParam3)
{
	Var0.f_5 = 255;
	Var0.f_7 = -1;
	Var0.f_9 = 7;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	if (!get_event_data(1, iParam3, &Var0, 26))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 4:
			func_982(uParam0, uParam1, uParam2, &Var0);
			break;
	}
}

int func_769(var uParam0, int iParam1)
{
	return uParam0->f_11[iParam1]->f_2;
}

bool func_770(var uParam0, int iParam1)
{
	iVar0 = func_980(uParam0, iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	return is_player_targetting_entity(player_id(), iVar0, false);
}

void func_771(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_11[iParam1]->f_2 = iParam2;
}

void func_772(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_980(uParam0, iParam1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (func_341(func_983(uParam0, iParam1, iParam2)))
	{
		return;
	}
	iVar2 = _uiprompt_get_group_id_for_target_entity(iVar0);
	iVar1 = func_985("MOONSHINE_ACCEPT", func_984(iParam2), iVar0, 3, 0, 0, 0, 0, 5f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	_uiprompt_set_group(func_565(iVar1), iVar2, 0);
	func_986(uParam0, iParam1, iParam2, iVar1);
	func_338(iVar1, 0, 1, 0);
	func_968(iVar1, 0, 0);
}

bool func_773()
{
	return (_unlock_is_unlocked(func_987(0)) && _unlock_is_unlocked(func_987(1)));
}

void func_774(var uParam0)
{
	bVar0 = true;
	Var1 = 5;
	Var1.f_1 = -1;
	iVar4 = 0;
	iVar5 = 0;
	Var6.f_1 = -1;
	while (bVar0)
	{
		bVar0 = false;
		switch (func_988(&(uParam0->f_385), iVar4, iVar5))
		{
			case 0:
				Var1.f_1 = 2;
				Var1 = 1;
				func_989(&(uParam0->f_385), iVar4, iVar5, &Var1);
				func_990(&(uParam0->f_385), iVar4, iVar5);
				iVar3 = func_991(uParam0);
				func_992(&(uParam0->f_385), iVar4, iVar5, iVar3);
				func_780(&(uParam0->f_385), iVar4, iVar5, 1);
				break;
			case 1:
				func_993(&(uParam0->f_385), iVar4, iVar5, &Var1);
				if (Var1 != 1)
				{
					func_780(&(uParam0->f_385), iVar4, iVar5, 3);
					func_992(&(uParam0->f_385), iVar4, iVar5, 23);
				}
				else
				{
					iVar3 = func_994(uParam0, iVar4, 112);
					func_992(&(uParam0->f_385), iVar4, iVar5, iVar3);
					if (func_995(&(uParam0->f_385), iVar4, iVar5))
					{
						func_780(&(uParam0->f_385), iVar4, iVar5, 2);
					}
					Jump @377; //curOff = 273
					func_993(&(uParam0->f_385), iVar4, iVar5, &Var1);
					func_832(&(uParam0->f_385), &Var1, &Var6);
					func_996(&(uParam0->f_385), 3);
					func_997(&(uParam0->f_385), iVar4, iVar5);
					func_780(&(uParam0->f_385), iVar4, iVar5, 1);
					Jump @377; //curOff = 341
					func_998(&(uParam0->f_385), iVar4, iVar5);
					func_780(&(uParam0->f_385), iVar4, iVar5, 0);
				}
				bVar0 = func_999(func_988(&(uParam0->f_385), iVar4, iVar5));
				default:
					break;
		}
	}
}

void func_775(var uParam0, var uParam1)
{
	bVar0 = true;
	Var1 = 5;
	Var1.f_1 = -1;
	iVar4 = 0;
	iVar5 = 1;
	Var6.f_1 = -1;
	while (bVar0)
	{
		bVar0 = false;
		switch (func_988(&(uParam1->f_385), iVar4, iVar5))
		{
			case 0:
				Var1.f_1 = 5;
				Var1 = 3;
				func_989(&(uParam1->f_385), iVar4, iVar5, &Var1);
				if (func_500(func_812(&(uParam1->f_385))) != func_502(&(uParam1->f_385)))
				{
					func_501(&(uParam1->f_385), func_500(func_812(&(uParam1->f_385))));
					func_503(uParam0, func_500(func_812(&(uParam1->f_385))));
					if (func_502(&(uParam1->f_385)) != 15)
					{
						func_506(&(uParam1->f_385), func_505(func_504(func_812(&(uParam1->f_385)), func_502(&(uParam1->f_385)))));
					}
				}
				func_990(&(uParam1->f_385), iVar4, iVar5);
				iVar3 = func_991(uParam1);
				func_992(&(uParam1->f_385), iVar4, iVar5, iVar3);
				func_780(&(uParam1->f_385), iVar4, iVar5, 1);
				break;
			case 1:
				func_993(&(uParam1->f_385), iVar4, iVar5, &Var1);
				if (Var1 != 3)
				{
					func_780(&(uParam1->f_385), iVar4, iVar5, 3);
					func_992(&(uParam1->f_385), iVar4, iVar5, 23);
				}
				else if (func_500(func_812(&(uParam1->f_385))) != func_502(&(uParam1->f_385)))
				{
					func_780(&(uParam1->f_385), iVar4, iVar5, 3);
					func_992(&(uParam1->f_385), iVar4, iVar5, 24);
				}
				else
				{
					iVar3 = func_994(uParam1, iVar4, 37);
					func_992(&(uParam1->f_385), iVar4, iVar5, iVar3);
					if (func_995(&(uParam1->f_385), iVar4, iVar5))
					{
						func_780(&(uParam1->f_385), iVar4, iVar5, 2);
					}
					Jump @580; //curOff = 445
					func_993(&(uParam1->f_385), iVar4, iVar5, &Var1);
					if (func_502(&(uParam1->f_385)) == 15)
					{
						Global_1298000->f_45 |= 1;
					}
					else
					{
						func_832(&(uParam1->f_385), &Var1, &Var6);
					}
					func_996(&(uParam1->f_385), 3);
					func_997(&(uParam1->f_385), iVar4, iVar5);
					func_780(&(uParam1->f_385), iVar4, iVar5, 1);
					Jump @580; //curOff = 544
					func_998(&(uParam1->f_385), iVar4, iVar5);
					func_780(&(uParam1->f_385), iVar4, iVar5, 0);
				}
				bVar0 = func_999(func_988(&(uParam1->f_385), iVar4, iVar5));
				default:
					break;
		}
	}
}

void func_776(var uParam0)
{
	bVar0 = true;
	Var1 = 5;
	Var1.f_1 = -1;
	iVar4 = 0;
	iVar5 = 0;
	Var7.f_1 = -1;
	while (bVar0)
	{
		bVar0 = false;
		switch (func_988(&(uParam0->f_385), iVar4, iVar5))
		{
			case 0:
				if (func_1000(0))
				{
					Var1.f_1 = 1;
					Var1 = 0;
				}
				else
				{
					Var1.f_1 = 0;
					Var1 = 0;
				}
				func_989(&(uParam0->f_385), iVar4, iVar5, &Var1);
				func_990(&(uParam0->f_385), iVar4, iVar5);
				iVar3 = func_991(uParam0);
				func_992(&(uParam0->f_385), iVar4, iVar5, iVar3);
				func_780(&(uParam0->f_385), iVar4, iVar5, 1);
				break;
			case 1:
				func_993(&(uParam0->f_385), iVar4, iVar5, &Var1);
				if (func_1000(0) && Var1.f_1 != 1)
				{
					func_780(&(uParam0->f_385), iVar4, iVar5, 3);
					func_992(&(uParam0->f_385), iVar4, iVar5, 24);
				}
				else
				{
					if (func_1000(0))
					{
						iVar6 = 117;
					}
					else
					{
						iVar6 = 117;
					}
					iVar3 = func_994(uParam0, iVar4, iVar6);
					func_992(&(uParam0->f_385), iVar4, iVar5, iVar3);
					if (func_995(&(uParam0->f_385), iVar4, iVar5))
					{
						func_780(&(uParam0->f_385), iVar4, iVar5, 2);
					}
					Jump @428; //curOff = 324
					func_993(&(uParam0->f_385), iVar4, iVar5, &Var1);
					func_832(&(uParam0->f_385), &Var1, &Var7);
					func_996(&(uParam0->f_385), 3);
					func_997(&(uParam0->f_385), iVar4, iVar5);
					func_780(&(uParam0->f_385), iVar4, iVar5, 1);
					Jump @428; //curOff = 392
					func_998(&(uParam0->f_385), iVar4, iVar5);
					func_780(&(uParam0->f_385), iVar4, iVar5, 0);
				}
				bVar0 = func_999(func_988(&(uParam0->f_385), iVar4, iVar5));
				default:
					break;
		}
	}
}

void func_777(var uParam0)
{
	bVar0 = true;
	Var1 = 5;
	Var1.f_1 = -1;
	iVar4 = 0;
	iVar5 = 1;
	Var6.f_1 = -1;
	while (bVar0)
	{
		bVar0 = false;
		switch (func_988(&(uParam0->f_385), iVar4, iVar5))
		{
			case 0:
				if (func_1000(0))
				{
					Var1.f_1 = 1;
					Var1 = 0;
				}
				else
				{
					Var1.f_1 = 1;
					Var1 = 0;
				}
				func_989(&(uParam0->f_385), iVar4, iVar5, &Var1);
				func_990(&(uParam0->f_385), iVar4, iVar5);
				iVar3 = func_991(uParam0);
				func_992(&(uParam0->f_385), iVar4, iVar5, iVar3);
				func_780(&(uParam0->f_385), iVar4, iVar5, 1);
				break;
			case 1:
				func_993(&(uParam0->f_385), iVar4, iVar5, &Var1);
				iVar3 = func_994(uParam0, iVar4, 117);
				if (func_1000(0))
				{
					iVar3 = 21;
				}
				if (func_1000(1))
				{
					iVar3 = 22;
				}
				func_992(&(uParam0->f_385), iVar4, iVar5, iVar3);
				if (func_1000(0))
				{
				}
				else
				{
					if (func_995(&(uParam0->f_385), iVar4, iVar5))
					{
						func_780(&(uParam0->f_385), iVar4, iVar5, 2);
					}
					Jump @393; //curOff = 289
					func_993(&(uParam0->f_385), iVar4, iVar5, &Var1);
					func_832(&(uParam0->f_385), &Var1, &Var6);
					func_996(&(uParam0->f_385), 3);
					func_997(&(uParam0->f_385), iVar4, iVar5);
					func_780(&(uParam0->f_385), iVar4, iVar5, 1);
					Jump @393; //curOff = 357
					func_998(&(uParam0->f_385), iVar4, iVar5);
					func_780(&(uParam0->f_385), iVar4, iVar5, 0);
				}
				bVar0 = func_999(func_988(&(uParam0->f_385), iVar4, iVar5));
				default:
					break;
		}
	}
}

void func_778(var uParam0)
{
	uParam0->f_3 = 0;
}

void func_779(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_983(uParam0, iParam1, iParam2);
	Var1 = 5;
	Var1.f_1 = -1;
	if (!func_341(iVar0))
	{
		return;
	}
	func_345(&iVar0, 1, 1);
	func_986(uParam0, iParam1, iParam2, 0);
	func_989(uParam0, iParam1, iParam2, &Var1);
}

void func_780(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_11[iParam1]->f_3[iParam2] = iParam3;
}

int func_781(var uParam0)
{
	return uParam0->f_1;
}

void func_782(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_783(var uParam0)
{
	return uParam0->f_132;
}

int func_784(var uParam0)
{
	return (uParam0->f_3 && uParam0->f_3 ^ uParam0->f_4);
}

bool func_785()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return false;
	}
	if (is_screen_faded_out())
	{
		return false;
	}
	if (is_screen_fading_out())
	{
		return false;
	}
	return true;
}

void func_786(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			StringCopy(&cVar0, "GFH_HELP_HAVE_BOUNTY_MOONSHINER", 64);
			break;
		default:
			return;
	}
	iVar8 = func_1001(_create_var_string(2, &cVar0), 10000, 0, 0, 0, 1);
	func_790(&(uParam0->f_385), iParam1);
	func_791(&(uParam0->f_385), iVar8);
}

bool func_787(var uParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return iVar0 == func_783(&(uParam0->f_385));
}

var func_788(var uParam0)
{
	return uParam0->f_132.f_1;
}

void func_789(var uParam0, var uParam1)
{
	uParam0->f_4 = (uParam0->f_4 || uParam1);
}

void func_790(var uParam0, int iParam1)
{
	uParam0->f_132.f_1 = iParam1;
}

void func_791(var uParam0, int iParam1)
{
	uParam0->f_132 = iParam1;
}

bool func_792(int iParam0)
{
	_copy_memory(iParam0, &uVar0, 5);
	*iParam0 = Global_1071686->f_28448[50]->f_3;
	return true;
}

bool func_793(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_794(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return _datafile_get_num_nodes(uParam0);
}

bool func_795(var uParam0, int iParam1)
{
	if (!func_792(uParam0))
	{
		return false;
	}
	if (!func_793(uParam0, -999926214, 0, 0, 1))
	{
		return false;
	}
	if (!func_793(uParam0, -789055036, iParam1, 0, 1))
	{
		return false;
	}
	return true;
}

int func_796(var uParam0)
{
	return func_1002(uParam0, 613568612, 1);
}

struct<2> func_797()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_798(int iParam0, int iParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	switch (iParam0)
	{
		case 2:
			func_1003(iParam0, iParam1);
			break;
		case 3:
			func_1004(iParam0, iParam1, Param2, iParam4, iParam5, iParam6, iParam7, iParam8);
			break;
		default:
			func_1005(iParam0, iParam1, Param2, iParam4, iParam5, iParam6, iParam7, iParam8);
			break;
	}
}

void func_799(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

int func_800(var uParam0, int iParam1)
{
	func_1006(uParam0, 1);
	switch (iParam1)
	{
		case 1:
		case 3:
			func_1007(16);
			func_1007(1);
			break;
	}
	return 5;
}

int func_801(var uParam0, var uParam1, int iParam2)
{
	iVar4 = get_game_timer();
	if (iParam2 != 2)
	{
		_0xe296208c273bd7f0(2000, -1, 0, 17, 1, 0);
		if (_0xa2b1c7ef759a63ce() < 1f)
		{
			bVar14 = true;
		}
	}
	iVar0 = func_1008(uParam0);
	iVar1 = func_1009(uParam0, iParam2);
	iVar2 = func_525(uParam0, iParam2);
	if (iVar0 != iVar1)
	{
		iVar3 = func_817(uParam0, iParam2);
		Var5 = { func_1010(iVar2, iVar0) };
		if (_0x23e33cb9f4a3f547(iVar3, &Var5))
		{
			func_824(uParam0, iParam2, iVar0);
			_set_anim_scene_playback_list_bool(iVar3, &Var5, true);
		}
		else
		{
			if (_0x0df57f86fe71dbe5(iVar3, &Var5))
			{
			}
			else
			{
				_0xdf7b5144e25cd3fe(iVar3, &Var5);
			}
			bVar14 = true;
		}
	}
	if (func_1011(uParam0) != 0)
	{
		if (!func_1012(uParam0, 128))
		{
			if (func_1012(uParam0, 64) && func_1012(uParam0, 256))
			{
				if (func_1012(uParam0, 512))
				{
					if (!is_scripted_conversation_loaded(func_878(func_1013(uParam0))))
					{
						if (iVar4 >= func_1014(uParam0) + 7000)
						{
						}
						else
						{
							bVar14 = true;
						}
					}
				}
				else if (_0xd89504d9d7d5057d(func_878(func_1013(uParam0))))
				{
					if (is_ped_in_current_conversation(func_878(func_1013(uParam0)), func_1015(uParam0), 0))
					{
					}
					else
					{
						add_ped_to_conversation(func_878(func_1013(uParam0)), func_1015(uParam0), func_1017(func_1016(uParam0)));
					}
					preload_script_conversation(func_878(func_1013(uParam0)), true, true, false);
					func_1018(uParam0, iVar4);
					func_1019(uParam0, 512);
					bVar14 = true;
				}
				else if (create_new_scripted_conversation(func_878(func_1013(uParam0))))
				{
					if (is_ped_in_current_conversation(func_878(func_1013(uParam0)), func_1015(uParam0), 0))
					{
					}
					else
					{
						add_ped_to_conversation(func_878(func_1013(uParam0)), func_1015(uParam0), func_1017(func_1016(uParam0)));
					}
					preload_script_conversation(func_878(func_1013(uParam0)), true, true, false);
					func_1018(uParam0, iVar4);
					func_1019(uParam0, 512);
					bVar14 = true;
				}
			}
			else
			{
				if (!func_1012(uParam0, 64))
				{
					vVar15 = { func_1022(func_511(uParam0, 3), func_1011(uParam0), func_1020(func_1016(uParam0)), func_1021(uParam0), &bVar13, -1, 1) };
					if (bVar13)
					{
						func_1019(uParam0, 128);
					}
					else
					{
						func_1023(uParam0, vVar15);
						func_1019(uParam0, 64);
					}
				}
				if (!func_1012(uParam0, 256))
				{
					switch (iParam2)
					{
						case 0:
						case 1:
							Var21 = { func_1024(iVar2, -1918820073, 0, uParam1->f_2, 0) };
							iVar18 = func_1025(&(Var21.f_9), -1918820073, 0, 1);
							if (does_entity_exist(iVar18))
							{
								func_1026(uParam0, get_ped_index_from_entity_index(iVar18));
								func_1019(uParam0, 256);
							}
							else
							{
								bVar14 = true;
							}
							break;
						case 3:
							iVar18 = _get_anim_scene_ped(func_817(uParam0, iParam2), "Cook", false);
							if (does_entity_exist(iVar18))
							{
								func_1026(uParam0, get_ped_index_from_entity_index(iVar18));
								func_1019(uParam0, 256);
							}
							else
							{
								bVar14 = true;
							}
							break;
					}
				}
				if (func_1012(uParam0, 256))
				{
					if (_0xd89504d9d7d5057d(&vVar15))
					{
						func_1019(uParam0, 512);
						preload_script_conversation(&vVar15, true, true, false);
						func_1018(uParam0, iVar4);
						func_1019(uParam0, 512);
						if (is_ped_in_current_conversation(func_878(vVar15), get_ped_index_from_entity_index(iVar18), 0))
						{
						}
						else
						{
							add_ped_to_conversation(func_878(vVar15), get_ped_index_from_entity_index(iVar18), func_1017(func_1016(uParam0)));
						}
						bVar14 = true;
					}
					else if (create_new_scripted_conversation(&vVar15))
					{
						preload_script_conversation(&vVar15, true, true, false);
						func_1018(uParam0, iVar4);
						func_1019(uParam0, 512);
						if (is_ped_in_current_conversation(func_878(vVar15), get_ped_index_from_entity_index(iVar18), 0))
						{
						}
						else
						{
							add_ped_to_conversation(func_878(vVar15), get_ped_index_from_entity_index(iVar18), func_1017(func_1016(uParam0)));
						}
						bVar14 = true;
					}
				}
			}
		}
	}
	if (func_1012(uParam0, 256))
	{
		iVar19 = func_1015(uParam0);
		if (is_any_speech_playing(iVar19))
		{
			stop_current_playing_speech(iVar19, 1500);
		}
	}
	if (func_1012(uParam0, 256))
	{
		switch (iParam2)
		{
			case 0:
			case 1:
				iVar19 = func_1015(uParam0);
				if (_0x916b8e075abc8b4e(iVar19, 1))
				{
				}
				else
				{
					iVar20 = get_player_ped(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
					_0xe7fa07624574b79a(iVar19, iVar20, 2, 1, -1f, 1, 0, 1, 1);
					func_1027(uParam0, iVar4);
				}
				if (!_0x916b8e075abc8b4e(iVar19, 0))
				{
					if (iVar4 >= func_1028(uParam0) + 5000)
					{
					}
					else
					{
						bVar14 = true;
					}
				}
				break;
		}
	}
	if (bVar14)
	{
		return 5;
	}
	if (iParam2 == 3)
	{
		return 7;
	}
	return 6;
}

int func_802(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 != 2)
	{
		_0xe296208c273bd7f0(2000, -1, 0, 17, 1, 0);
	}
	if (!func_1029(uParam0, uParam1, iParam2))
	{
		return 6;
	}
	if (!func_1030(uParam0, uParam1, iParam2))
	{
		return 6;
	}
	if (!func_1031(uParam0, uParam1, iParam2))
	{
		return 6;
	}
	return 7;
}

int func_803(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 2:
			break;
		default:
			func_1032();
			_0xe296208c273bd7f0(2000, -1, 0, 17, 1, 0);
			break;
	}
	iVar0 = func_817(uParam0, iParam2);
	iVar2 = func_525(uParam0, iParam2);
	start_anim_scene(iVar0);
	switch (iParam2)
	{
		case 0:
			if (!func_1012(uParam0, 512))
			{
				if (!func_1012(uParam0, 4))
				{
					set_player_control(player_id(), false, 0, false);
					func_1019(uParam0, 4);
				}
			}
			if (!func_1012(uParam0, 16))
			{
				_cascadeshadows_set_type("CSM_ST_SOFT16");
				func_1019(uParam0, 16);
			}
			break;
	}
	if (!func_1012(uParam0, 8) && iParam2 != 2)
	{
		_0x6339c1ea3979b5f7("default", "RDRO_Scripted_Cutscene_Scenes");
		iVar1 = 0;
		while (iVar1 <= (func_1033(iVar2, -1918820073) - 1))
		{
			Var4 = { func_1034(iVar2, -1918820073, iVar1) };
			iVar12 = _get_anim_scene_ped(iVar0, &Var4, false);
			if (!does_entity_exist(iVar12))
			{
			}
			else
			{
				add_entity_to_audio_mix_group(iVar12, "RDRO_Scripted_Cutscene_Scenes", 0f);
			}
			iVar1++;
		}
		func_1019(uParam0, 8);
	}
	if (!func_1012(uParam0, 32))
	{
		iVar3 = func_1035(iVar2);
		if (iVar3 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= (iVar3 - 1))
			{
				Var14 = { func_1036(iVar2, iVar1, uParam1->f_2) };
				iVar13 = func_1025(&Var14, -2007566758, 0, 1);
				set_entity_visible(iVar13, false);
				iVar1++;
			}
			func_1019(uParam0, 32);
		}
	}
	if (func_1012(uParam0, 512))
	{
		start_preloaded_conversation(func_878(func_1013(uParam0)));
	}
	switch (iParam2)
	{
		case 1:
		case 3:
			func_1037(1);
			break;
	}
	return 8;
}

int func_804(var uParam0, var uParam1, var uParam2, int iParam3)
{
	Var29.f_4 = -1;
	Var29.f_8 = 2;
	Var29.f_9 = 1;
	Var29.f_10 = 1;
	Var29.f_11 = 1;
	Var29.f_13 = 1;
	Var29.f_14 = 2;
	Var29.f_15 = 2;
	Var29.f_16 = 3;
	Var29.f_19 = 3;
	Var29.f_20 = 1;
	Var29.f_21 = 3;
	Var29.f_22 = 3;
	iVar1 = func_525(uParam1, iParam3);
	iVar0 = func_817(uParam1, iParam3);
	fVar4 = _get_anim_scene_time(iVar0);
	fVar5 = _get_anim_scene_duration(iVar0);
	fVar6 = (fVar5 - fVar4);
	iVar28 = func_1038();
	switch (iParam3)
	{
		case 2:
			break;
		case 1:
		case 3:
			if (func_1012(uParam1, 1024) && iVar28 & 2 == 0)
			{
			}
			else if (is_screen_faded_out())
			{
			}
			else
			{
				func_1032();
				_0xe296208c273bd7f0(2000, -1, 0, 17, 1, 0);
			}
			break;
		default:
			func_1032();
			_0xe296208c273bd7f0(2000, -1, 0, 17, 1, 0);
			break;
	}
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar11 = int_to_playerindex(iVar2);
		iVar10 = func_1039(uParam0, iVar11);
		switch (iVar10)
		{
			case 1:
			case 3:
				func_1040(uParam1, iVar11);
				break;
			default:
				func_1041(uParam1, iVar11);
				break;
		}
		switch (iParam3)
		{
			case 0:
				if (!func_1012(uParam1, 512))
				{
					if (_network_is_player_index_valid(iVar11))
					{
						set_player_invisible_locally(iVar11, false);
					}
				}
				break;
		}
		iVar2++;
	}
	if (func_1012(uParam1, 512))
	{
		if (!func_1012(uParam1, 1024))
		{
			if (!func_1042(func_878(func_1013(uParam1))))
			{
				func_1043(uParam1);
				func_1019(uParam1, 1024);
				stop_scripted_conversation(func_878(func_1013(uParam1)), true, false);
				if (func_1044(player_id(), 1))
				{
					func_1037(2);
				}
			}
		}
	}
	if (!func_1012(uParam1, 2))
	{
		switch (iParam3)
		{
			case 1:
			case 3:
				if (func_1012(uParam1, 512))
				{
					if (func_1012(uParam1, 1024))
					{
						if (iVar28 & 2 != 0)
						{
							do_screen_fade_out(1000);
							func_1045(uParam1, get_game_timer());
							func_1019(uParam1, 2);
						}
					}
				}
				break;
			case 0:
				if (func_1012(uParam1, 512))
				{
					if (func_1012(uParam1, 1024))
					{
						do_screen_fade_out(1000);
						func_1045(uParam1, get_game_timer());
						func_1019(uParam1, 2);
					}
				}
				else
				{
					iVar3 = ceil((fVar6 * 1000f));
					if (iVar3 <= 1000)
					{
						do_screen_fade_out(1000);
						func_1045(uParam1, get_game_timer());
						func_1019(uParam1, 2);
					}
				}
				break;
		}
	}
	if (func_1044(player_id(), 1))
	{
		if (func_1012(uParam1, 1024))
		{
			if (iVar28 & 2 != 0)
			{
				if (is_screen_faded_out())
				{
					func_549(0);
					func_1037(4);
					func_1006(uParam0, 3);
					func_1007(2);
				}
			}
			else
			{
				func_549(0);
				func_1037(4);
				func_1006(uParam0, 3);
				func_1007(2);
			}
		}
	}
	if (func_1012(uParam1, 512) && !func_1012(uParam1, 1024))
	{
		iVar12 = func_1015(uParam1);
		iVar13 = get_player_ped(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
		Var29.f_4 = 21030;
		Var29.f_3 = iVar13;
		Var29.f_19 = 4;
		Var29.f_20 = 3;
		Var29.f_21 = 4;
		Var29.f_22 = 3;
		Var29.f_8 = 4;
		Var29.f_7 = 500;
		func_110(&(Var29.f_5), 1);
		_0x66f9eb44342bb4c5(iVar12, &Var29);
	}
	bVar7 = _is_anim_scene_finished(iVar0, false);
	bVar8 = _is_anim_scene_active(iVar0);
	bVar9 = _is_anim_scene_started(iVar0, false);
	if (((bVar7 || bVar8) || !bVar9) || (Global_1298000->f_43 && iParam3 == 3))
	{
		if (Global_1298000->f_43 && iParam3 == 3)
		{
			Global_1298000->f_43 = 0;
		}
		func_549(0);
		func_1046(uParam1, iParam3, 1);
		func_1047(uParam1, iParam3, get_game_timer());
		if (func_1012(uParam1, 512))
		{
			if (func_1012(uParam1, 1024))
			{
				if (func_1044(player_id(), 1))
				{
					func_1007(2);
					func_1037(4);
				}
				func_1006(uParam0, 3);
			}
			else
			{
				if (func_1044(player_id(), 1))
				{
					func_1037(3);
				}
				func_1006(uParam0, 2);
			}
		}
		else
		{
			if (func_1044(player_id(), 1))
			{
				func_1007(2);
				func_1037(4);
			}
			func_1006(uParam0, 3);
		}
		if (func_1012(uParam1, 8))
		{
			iVar2 = 0;
			while (iVar2 <= (func_1033(iVar1, -1918820073) - 1))
			{
				Var15 = { func_1034(iVar1, -1918820073, iVar2) };
				iVar12 = _get_anim_scene_ped(iVar0, &Var15, false);
				if (!does_entity_exist(iVar12))
				{
				}
				else
				{
					remove_entity_from_audio_mix_group(iVar12, 0f);
				}
				iVar2++;
			}
			_0x9428447ded71fc7e("RDRO_Scripted_Cutscene_Scenes");
			func_1048(uParam1, 8);
		}
		if (func_1012(uParam1, 4))
		{
			set_player_control(player_id(), true, 0, false);
			func_1048(uParam1, 4);
		}
		if (func_1012(uParam1, 16))
		{
			_cascadeshadows_reset_type();
			func_1048(uParam1, 16);
		}
		if (func_1012(uParam1, 32))
		{
			iVar2 = 0;
			while (iVar2 <= (func_1035(iVar1) - 1))
			{
				Var23 = { func_1036(iVar1, iVar2, uParam2->f_2) };
				iVar14 = func_1025(&Var23, -2007566758, 1, 0);
				set_entity_visible(iVar14, true);
				iVar2++;
			}
			func_1048(uParam1, 32);
		}
		if (func_1012(uParam1, 512) && !func_1012(uParam1, 1024))
		{
			return 9;
		}
		else
		{
			return 10;
		}
	}
	return 8;
}

int func_805(var uParam0, var uParam1, int iParam2)
{
	Var3.f_4 = -1;
	Var3.f_8 = 2;
	Var3.f_9 = 1;
	Var3.f_10 = 1;
	Var3.f_11 = 1;
	Var3.f_13 = 1;
	Var3.f_14 = 2;
	Var3.f_15 = 2;
	Var3.f_16 = 3;
	Var3.f_19 = 3;
	Var3.f_20 = 1;
	Var3.f_21 = 3;
	Var3.f_22 = 3;
	iVar0 = func_1038();
	if (func_1042(func_878(func_1013(uParam1))))
	{
		_0xe296208c273bd7f0(2000, -1, 0, 17, 1, 0);
		if (func_1012(uParam1, 512) && !func_1012(uParam1, 1024))
		{
			iVar1 = func_1015(uParam1);
			iVar2 = get_player_ped(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
			Var3.f_4 = 21030;
			Var3.f_3 = iVar2;
			Var3.f_19 = 4;
			Var3.f_20 = 3;
			Var3.f_21 = 4;
			Var3.f_22 = 3;
			Var3.f_8 = 4;
			Var3.f_7 = 500;
			func_110(&(Var3.f_5), 1);
			_0x66f9eb44342bb4c5(iVar1, &Var3);
		}
		return 9;
	}
	if (!func_1012(uParam1, 1024))
	{
		func_1043(uParam1);
		func_1019(uParam1, 1024);
		func_1006(uParam0, 3);
		stop_scripted_conversation(func_878(func_1013(uParam1)), true, false);
		if (func_1044(player_id(), 1) && iVar0 & 2 == 0)
		{
			func_549(0);
			func_1037(4);
			func_1007(2);
		}
	}
	if (!func_1012(uParam1, 2))
	{
		switch (iParam2)
		{
			case 1:
			case 3:
				if (func_1012(uParam1, 512))
				{
					if (func_1012(uParam1, 1024))
					{
						if (iVar0 & 2 != 0)
						{
							do_screen_fade_out(1000);
							func_1045(uParam1, get_game_timer());
							func_1019(uParam1, 2);
						}
					}
				}
				break;
			case 0:
				if (func_1012(uParam1, 512))
				{
					if (func_1012(uParam1, 1024))
					{
						do_screen_fade_out(1000);
						func_1045(uParam1, get_game_timer());
						func_1019(uParam1, 2);
					}
				}
				break;
		}
	}
	if (func_1012(uParam1, 1024))
	{
		if (iVar0 & 2 != 0)
		{
			if (is_screen_faded_out())
			{
				if (func_1044(player_id(), 1))
				{
					func_549(0);
					func_1037(4);
					func_1007(2);
				}
				return 10;
			}
			else
			{
				return 9;
			}
		}
		else
		{
			return 10;
		}
	}
	return 9;
}

int func_806(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		return 13;
	}
	iVar2 = func_1049(uParam1);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar1))
		{
		}
		else if (!network_is_player_active(iVar1))
		{
		}
		else
		{
			iVar3 = _0x901e0dc25080c8b9(iVar1);
			if (iVar2 != iVar3)
			{
			}
			else
			{
				iVar4 = func_1039(uParam0, iVar1);
				switch (iVar4)
				{
					case 1:
					case 2:
						return 10;
					default:
						break;
				}
			}
		}
		iVar0++;
	}
	switch (iParam2)
	{
		case 0:
			return 11;
		default:
			break;
	}
	return 13;
}

int func_807(var uParam0)
{
	iVar0 = player_id();
	iVar2 = _0x901e0dc25080c8b9(iVar0);
	iVar3 = func_1049(uParam0);
	iVar1 = _0x4be6c13a45cca8ec(iVar3);
	if (iVar2 != iVar3)
	{
		return 13;
	}
	if (iVar0 != iVar1)
	{
		return 13;
	}
	func_835(uParam0, 3);
	return 13;
}

int func_808(var uParam0, int iParam1)
{
	switch (func_532(uParam0, iParam1))
	{
		case 7:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_809(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_81.f_21.f_3;
		default:
			break;
	}
	return -1;
}

int func_810(var uParam0, int iParam1)
{
	if (!func_1050(iParam1))
	{
		return -1;
	}
	return (*uParam0)[network_get_participant_index(iParam1)]->f_22;
}

void func_811(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

int func_812(var uParam0)
{
	return uParam0->f_69;
}

var func_813(int iParam0, int iParam1, int iParam2)
{
	if (!func_1051(&uVar0, iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return func_1052(&uVar0);
}

int func_814(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1169093054;
		case 1:
			return 1412696035;
		case 2:
			return 506243516;
		case 3:
			return -934171630;
		case 4:
			return -1292622054;
		default:
			break;
	}
	return 0;
}

var func_815(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_1053(&Var0, iParam0, iParam1, iParam2, uParam3))
	{
		return 0;
	}
	return func_1054(Var0);
}

int func_816(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1012951449;
		default:
			break;
	}
	return 0;
}

int func_817(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_81.f_21.f_2;
		case 1:
			return uParam0->f_81.f_26.f_2;
		case 2:
			return uParam0->f_81.f_34.f_2;
		case 3:
			return uParam0->f_81.f_30.f_2;
		default:
			break;
	}
	return -1;
}

void func_818(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_1055(&(uParam0->f_81.f_21.f_3), iParam2, iParam1);
			break;
		default:
			break;
	}
}

void func_819(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_1056(&(uParam0->f_81.f_21.f_4), iParam2, iParam1);
			break;
		case 1:
			func_1056(&(uParam0->f_81.f_26.f_3), iParam2, iParam1);
			break;
		case 2:
			func_1056(&(uParam0->f_81.f_34.f_3), iParam2, iParam1);
			break;
		case 3:
			func_1056(&(uParam0->f_81.f_30.f_3), iParam2, iParam1);
			break;
		default:
			break;
	}
}

struct<8> func_820(int iParam0)
{
	if (!func_795(&uVar0, iParam0))
	{
		return func_1057("");
	}
	return func_1058(&uVar0);
}

struct<8> func_821(int iParam0, int iParam1)
{
	if (!func_795(&uVar0, iParam0))
	{
		return func_1057("");
	}
	if (!func_793(&uVar0, -1959657965, 0, 0, 1))
	{
		return func_1057("");
	}
	if (!func_793(&uVar0, 1787076303, iParam1, 0, 1))
	{
		return func_1057("");
	}
	return func_1059(&uVar0);
}

int func_822(int iParam0)
{
	if (!func_795(&Var0, iParam0))
	{
		return 0;
	}
	if (!func_793(&Var0, -246323496, 0, 0, 0))
	{
		return 0;
	}
	uVar8 = Var0.f_1;
	iVar6 = func_794(&Var0, -867045637);
	iVar5 = 0;
	while (iVar5 <= (iVar6 - 1))
	{
		Var0.f_1 = uVar8;
		if (!func_793(&Var0, 1278501955, iVar5, 0, 1))
		{
		}
		else
		{
			uVar7 = (uVar7 || func_1060(&Var0));
		}
		iVar5++;
	}
	return uVar7;
}

void func_823(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_1061(&(uParam0->f_81.f_21.f_2), iParam2, iParam1);
			break;
		case 1:
			func_1061(&(uParam0->f_81.f_26.f_2), iParam2, iParam1);
			break;
		case 2:
			func_1061(&(uParam0->f_81.f_34.f_2), iParam2, iParam1);
			break;
		case 3:
			func_1061(&(uParam0->f_81.f_30.f_2), iParam2, iParam1);
			break;
		default:
			break;
	}
}

void func_824(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_1062(&(uParam0->f_81.f_21.f_1), iParam2, iParam1);
			break;
		case 1:
			func_1062(&(uParam0->f_81.f_26.f_1), iParam2, iParam1);
			break;
		case 2:
			func_1062(&(uParam0->f_81.f_34.f_1), iParam2, iParam1);
			break;
		case 3:
			func_1062(&(uParam0->f_81.f_30.f_1), iParam2, iParam1);
			break;
		default:
			break;
	}
}

Vector3 func_825(int iParam0, int iParam1)
{
	if (!func_1063(&uVar0, iParam0, iParam1))
	{
		return 0f, 0f, 0f;
	}
	return func_1064(&uVar0);
}

Vector3 func_826(int iParam0, int iParam1)
{
	if (!func_1063(&uVar0, iParam0, iParam1))
	{
		return 0f, 0f, 0f;
	}
	return func_1065(&uVar0);
}

int func_827(var uParam0, int iParam1)
{
	return &(uParam0->f_81.f_3[iParam1]);
}

void func_828(var uParam0)
{
	Var0 = -1;
	Var0.f_3 = 4;
	Var0.f_11 = 7;
	_copy_memory(&(uParam0->f_81), &Var0, 21);
}

void func_829(int iParam0)
{
	_copy_memory(iParam0, &(Global_1298000->f_34), 2);
}

void func_830(int iParam0)
{
	_copy_memory(iParam0, &(Global_1298000->f_36), 4);
}

bool func_831(var uParam0)
{
	return (*uParam0 != 5 && uParam0->f_1 != -1);
}

void func_832(var uParam0, int iParam1, var uParam2)
{
	if (_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())) != player_id())
	{
		return;
	}
	if (func_542(uParam0) != 0)
	{
		return;
	}
	func_1066(uParam0, iParam1, uParam2);
}

void func_833()
{
	Var0 = 5;
	Var0.f_1 = -1;
	Var2.f_1 = -1;
	_copy_memory(&(Global_1298000->f_34), &Var0, 2);
	_copy_memory(&(Global_1298000->f_36), &Var2, 4);
}

void func_834(var uParam0, int iParam1, int iParam2)
{
	_copy_memory(iParam1, &(uParam0->f_75), 2);
	_copy_memory(iParam2, &(uParam0->f_77), 4);
}

void func_835(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

var func_836(int iParam0, int iParam1, int iParam2)
{
	if (!func_1051(&uVar0, iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return func_1067(&uVar0);
}

int func_837(var uParam0, int iParam1, int iParam2)
{
	if (!func_1068(&Var0, uParam0, iParam1, 1))
	{
		return 0;
	}
	uVar5 = Var0.f_1;
	Var0.f_2 = -735674404;
	iVar8 = _datafile_get_num_nodes(&Var0);
	iVar7 = 0;
	while (iVar7 <= (iVar8 - 1))
	{
		Var0.f_1 = uVar5;
		Var0.f_2 = -510412804;
		Var0.f_3 = iVar7;
		if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
		}
		else
		{
			uVar6 = Var0.f_1;
			Var0.f_2 = -1083105766;
			Var0.f_3 = iParam2;
			if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
			{
			}
			else
			{
				Var0.f_1 = uVar6;
				Var0.f_2 = 1796435875;
				if (!_datafile_get_hash(&uVar9, &Var0))
				{
					return 0;
				}
				return uVar9;
			}
		}
		iVar7++;
	}
	return 0;
}

var func_838(int iParam0, int iParam1, int iParam2)
{
	if (!func_1051(&uVar0, iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return func_1069(&uVar0);
}

int func_839(int iParam0, int iParam1)
{
	if (!func_795(&Var0, iParam0))
	{
		return 0;
	}
	if (!func_793(&Var0, -1959657965, 0, 0, 1))
	{
		return 0;
	}
	uVar5 = Var0.f_1;
	iVar7 = func_794(&Var0, 677682370);
	iVar6 = 0;
	while (iVar6 <= (iVar7 - 1))
	{
		Var0.f_1 = uVar5;
		if (!func_793(&Var0, 1787076303, iVar6, 0, 1))
		{
		}
		else
		{
			iVar8 = func_1002(&Var0, -27879544, 1);
			if (iVar8 != iParam1)
			{
			}
			else
			{
				return func_796(&Var0);
			}
		}
		iVar6++;
	}
	return 0;
}

void func_840(var uParam0, var uParam1)
{
	if (func_502(uParam0) == 15)
	{
		func_835(uParam0, 5);
	}
	else
	{
		iVar0 = func_812(uParam0);
		iVar1 = func_502(uParam0);
		iVar2 = func_213(uParam1->f_2);
		iVar3 = iVar2;
		iVar4 = func_1070(iVar0, iVar1);
		if ((iVar0 == -1 || iVar1 == -1) || iVar4 == 0)
		{
			func_835(uParam0, 5);
			return;
		}
		func_1071(iVar4, iVar3, 0, 0);
		func_835(uParam0, 4);
	}
}

void func_841(var uParam0, var uParam1)
{
	Var79 = -1;
	uVar81 = -1;
	Var83 = -1;
	Var83.f_1 = -1;
	Var83.f_2 = -1;
	Var83.f_4 = 10;
	Var83.f_15 = 4;
	Var83.f_15.f_5 = 4;
	Var83.f_25 = 1;
	Var83.f_28 = 2;
	Var83.f_28.f_1 = -1;
	Var83.f_28.f_1.f_1 = -1;
	Var83.f_31 = 493038497;
	Var83.f_31.f_1 = 493038497;
	Var116 = -1;
	Var116.f_1 = -1;
	Var116.f_2 = -1;
	Var116.f_4 = 10;
	Var116.f_15 = 4;
	Var116.f_15.f_5 = 4;
	Var116.f_25 = 1;
	Var116.f_28 = 2;
	Var116.f_28.f_1 = -1;
	Var116.f_28.f_1.f_1 = -1;
	Var116.f_31 = 493038497;
	Var116.f_31.f_1 = 493038497;
	Var149 = -1;
	Var149.f_1 = -1;
	Var149.f_2 = -1;
	Var149.f_4 = 10;
	Var149.f_15 = 4;
	Var149.f_15.f_5 = 4;
	Var149.f_25 = 1;
	Var149.f_28 = 2;
	Var149.f_28.f_1 = -1;
	Var149.f_28.f_1.f_1 = -1;
	Var149.f_31 = 493038497;
	Var149.f_31.f_1 = 493038497;
	Var182 = -1;
	Var182.f_1 = -1;
	Var182.f_2 = -1;
	Var182.f_4 = 10;
	Var182.f_15 = 4;
	Var182.f_15.f_5 = 4;
	Var182.f_25 = 1;
	Var182.f_28 = 2;
	Var182.f_28.f_1 = -1;
	Var182.f_28.f_1.f_1 = -1;
	Var182.f_31 = 493038497;
	Var182.f_31.f_1 = 493038497;
	Var215 = -1;
	Var215.f_1 = -1;
	Var215.f_2 = -1;
	Var215.f_4 = 10;
	Var215.f_15 = 4;
	Var215.f_15.f_5 = 4;
	Var215.f_25 = 1;
	Var215.f_28 = 2;
	Var215.f_28.f_1 = -1;
	Var215.f_28.f_1.f_1 = -1;
	Var215.f_31 = 493038497;
	Var215.f_31.f_1 = 493038497;
	Var249 = 5;
	Var249.f_1 = -1;
	uVar253 = 3;
	Var259.f_1 = -1;
	func_834(uParam0, &Var249, &Var259);
	iVar265 = func_1072(Var249);
	iVar76 = func_495(iLocal_269);
	iVar4 = func_1073(uParam0, iLocal_269);
	iVar75 = func_814(uParam1->f_2);
	iVar3 = func_1074(iVar75);
	if (!func_1075(iVar4))
	{
		return;
	}
	if (!func_1076(iVar3))
	{
		return;
	}
	func_844(uParam0, &Var182);
	if (Var182.f_2 == -1)
	{
		iVar248 = func_1077(iVar76);
		iVar77 = func_1078(iVar76);
		iVar252 = _0x901e0dc25080c8b9(player_id());
		iVar5 = func_1079(iLocal_256);
		if (iVar5 == -1)
		{
			return;
		}
		if (!func_1080(&Var70, func_511(uParam0, 0)))
		{
			return;
		}
		if (!func_1081(Var70, &(Var70.f_1), -1782208300, 0, 0, 1))
		{
			return;
		}
		if (!func_1081(Var70, &(Var70.f_1), 466723622, 0, 0, 1))
		{
			return;
		}
		if (!func_1081(Var70, &(Var70.f_1), 1635370648, iVar75, 0, 1))
		{
			return;
		}
		if (!func_1081(Var70, &(Var70.f_1), 56746299, 0, 0, 1))
		{
			return;
		}
		if (!func_1081(Var70, &(Var70.f_1), 1915534289, 0, 0, 1))
		{
			return;
		}
		uVar78 = Var70.f_1;
		iVar2 = func_1082(Var70, 1141833051);
		func_1083(&uVar7, 62, 1);
		iVar0 = 0;
		while (iVar0 <= 61)
		{
			_copy_memory(&Var79, &uVar81, 2);
			_copy_memory(&Var83, &Var215, 33);
			Var70.f_1 = uVar78;
			iVar1 = &uVar7[iVar0];
			iVar251 = -1;
			iVar257 = 0;
			if (iVar1 < 0 || iVar1 >= iVar2)
			{
			}
			else if (!func_1084(&Var70, iVar1, &Var79))
			{
			}
			else
			{
				iVar251 = func_1085(Var79);
				if (func_1086(iVar251) != func_1087(Var249))
				{
				}
				else
				{
					if (Var249 == 2)
					{
						switch (Var249.f_1)
						{
							case 3:
								if (func_1088(Var79, 4))
								{
								}
								else
								{
									Jump @1095; //curOff = 1072
									if (!func_1088(Var79, 4))
									{
									}
									else
									{
										if (iVar248 == -1)
										{
										}
										else if (Var79 == iVar248)
										{
											switch (Var249)
											{
												case 0:
												case 2:
													break;
												default:
													Jump @1420; //curOff = 1134
												}
												if (iVar77 == 0)
												{
												}
												else if (Var79.f_1 == iVar77)
												{
													switch (Var249)
													{
														case 0:
															break;
														default:
															Jump @1420; //curOff = 1175
														}
														if (!func_1089(func_511(uParam0, 1), &Var79, &Var83, 1))
														{
														}
														else if (Var249 == 0)
														{
															if (!func_1091(&(Var83.f_25), func_1090(Var249.f_1)))
															{
															}
															else
															{
																iVar258 = func_1092(Var249, 0);
																if (func_1091(&(Var83.f_25), 518798111))
																{
																	iVar258 = iLocal_262 | 536877072;
																}
																if (func_1093(&Var83, iVar1, &uVar253, iLocal_256, iVar5, iVar3, &iVar257, iLocal_262, iVar4))
																{
																	if (Var116.f_2 == -1)
																	{
																		iVar258 = func_1092(Var249, 1);
																		if (func_1091(&(Var83.f_25), 518798111))
																		{
																			iVar258 = iLocal_262 | 536877072;
																		}
																		if (func_1093(&Var83, iVar1, &uVar253, iLocal_256, iVar5, iVar3, &iVar257, iLocal_262, iVar4))
																		{
																			Jump @1420; //curOff = 1375
																		}
																		else
																		{
																			func_1094(&(Var83.f_25), 518798111);
																			_copy_memory(&Var116, &Var83, 33);
																		}
																	}
																}
																else
																{
																	_copy_memory(&Var149, &Var83, 33);
																}
																else
																{
																	iVar0++;
																}
																if (Var149.f_2 == -1)
																{
																	if (Var116.f_2 == -1)
																	{
																		return;
																	}
																	else
																	{
																		func_1095(uParam0, &Var116);
																	}
																}
																else
																{
																	func_1095(uParam0, &Var149);
																}
																func_844(uParam0, &Var182);
																uVar6 = func_1096(uParam0);
																iVar266 = func_1097(iVar76, iVar75, 1, uVar6, func_511(uParam0, 2));
																if (func_1091(&(Var182.f_25), 1859868723))
																{
																	iVar267 = iLocal_271 | 2;
																}
																if (iLocal_269 == 0)
																{
																	iVar269 = 1;
																	iVar268 = -79578972;
																}
																else
																{
																	iVar269 = 3;
																	if (func_1098())
																	{
																		iVar268 = 245923248;
																	}
																	else
																	{
																		switch (Var259.f_2)
																		{
																			case -455129387:
																				iVar268 = -79578972;
																				break;
																			case -1240530384:
																				iVar268 = 965231938;
																				break;
																			case 1606989084:
																				iVar268 = 2048409479;
																				break;
																			case -640645303:
																				iVar268 = 385429466;
																				break;
																			case 1103416334:
																				iVar268 = 385429466;
																				break;
																			default:
																				iVar268 = -248576962;
																				break;
																		}
																	}
																}
																if (func_1091(&(Var182.f_25), 1859868723))
																{
																	iVar264 = iLocal_268 | 2;
																}
																if (func_1091(&(Var182.f_25), 518798111))
																{
																	func_1099(iVar3, iVar4, iLocal_268, Var182.f_2, Var182, Var259, 0);
																	iVar263 = 1;
																}
																else
																{
																	iVar263 = func_1100(&Var182, iVar4, iVar3, &Var259);
																}
																if (bLocal_267)
																{
																	func_835(uParam0, 4);
																	func_798(iLocal_273, iLocal_270, Var182, iLocal_272, func_495(iLocal_269), func_814(uParam1->f_2), iLocal_271, &(Var182.f_4[6]));
																}
															}
														}
													}
												}
												default:
													break;
										}
									}
								}
							}
						}
					}
				}

struct<2> func_842()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_603(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_603(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_843(struct<2> Param0)
{
	if (!func_1101(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_1102(Param0))
	{
		return false;
	}
	return true;
}

void func_844(var uParam0, int iParam1)
{
	_copy_memory(iParam1, &(uParam0->f_36), 33);
}

bool func_845(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_846(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = 493038497;
	Var0.f_31.f_1 = 493038497;
	func_1095(uParam0, &Var0);
}

void func_847(var uParam0)
{
	Var0 = 5;
	Var0.f_1 = -1;
	Var2.f_1 = -1;
	func_1066(uParam0, &Var0, &Var2);
}

void func_848(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!get_event_data(1, iParam3, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 14:
			func_1103(uParam0, uParam1, uParam2, iParam3, bParam4);
			break;
	}
}

int func_849(var uParam0)
{
	return *uParam0;
}

void func_850(var uParam0, var uParam1, var uParam2)
{
	func_1104();
	func_1105(uParam0, 1);
}

void func_851(var uParam0, var uParam1, var uParam2)
{
	if (func_1106(uParam0))
	{
		func_1105(uParam0, 2);
	}
}

void func_852(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_112(network_get_player_from_gamer_handle(&(uParam3->f_3)), 1, 1) < 1)
	{
		return;
	}
	if (func_1107(uParam0, uParam3) && func_1108(uParam0))
	{
		func_1105(uParam0, 3);
	}
}

void func_853(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_1109(uParam0, uParam2, uParam3))
	{
		func_1105(uParam0, 4);
	}
}

void func_854(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_1110(uParam0, uParam1, uParam2);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1111(uParam0, uParam1, uParam2, iVar0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (func_1112(iVar0, iVar1) != 0)
			{
				if (!network_does_network_id_exist(&(uParam0->f_3[iVar0]->f_4[iVar1])))
				{
					func_1113(uParam0, iVar0, uParam3, uParam2, iVar1, 0);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	func_1114(uParam0, uParam2, uParam3, uParam1);
}

int func_855(var uParam0)
{
	return *uParam0;
}

void func_856(var uParam0, var uParam1, var uParam2)
{
	if (func_849(uParam0) > 0)
	{
		func_1104();
		func_1115(uParam2);
		func_1116((*uParam1)[participant_id_to_int()], 1);
	}
}

void func_857(var uParam0, var uParam1, var uParam2)
{
	if (func_849(uParam0) > 1 && func_1117(uParam1, uParam2))
	{
		func_1116((*uParam1)[participant_id_to_int()], 2);
	}
}

void func_858(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if ((func_849(uParam0) > 2 && func_1118(uParam0, uParam2, uParam3)) && func_1119(uParam2, uParam3->f_2))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			sVar1 = func_1120(iVar0);
			_0xfca8fb9e15fa80d3(net_to_ped(uParam0->f_3[iVar0]->f_1), get_hash_key(sVar1));
			set_entity_visible_in_cutscene(net_to_ped(uParam0->f_3[iVar0]->f_1), 1, 0, uParam3->f_1);
			iVar0++;
		}
		func_1116((*uParam1)[participant_id_to_int()], 3);
	}
}

void func_859(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_849(uParam0) > 3 && func_1121(uParam0, uParam2, uParam3))
	{
		_0xdc2f83a0612ca34d(-711824048);
		func_1116((*uParam1)[participant_id_to_int()], 4);
	}
}

void func_860(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	func_1122(uParam0, uParam2);
	func_1123(&(uParam0->f_58), uParam1, &(uParam2->f_8));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1124(&(uParam0->f_58), uParam1, &(uParam2->f_8), iVar0, iParam3, uParam4);
		iVar0++;
	}
	func_1125(&(uParam0->f_58), uParam1, &(uParam2->f_1680));
	if (func_325(&(uParam0->f_58), 0))
	{
		if (!func_1126((*uParam1)[participant_id_to_int()], 128))
		{
			_0xdc2f83a0612ca34d(-11740743);
			func_1127((*uParam1)[participant_id_to_int()], 128);
		}
	}
	else if (func_1126((*uParam1)[participant_id_to_int()], 128))
	{
		_0x6ab944df68b512d3(-11740743);
		func_1128((*uParam1)[participant_id_to_int()], 128);
	}
	if (_0x0c3cb2e600c8977d(Global_34, 1))
	{
		_0x018abe833ca64d2a(Global_34, 978192019);
		_0xbc07ca8fd710e7fd(Global_34, 978192019);
	}
	else if (func_1129(&(uParam0->f_58), player_id()))
	{
		(*uParam1)[participant_id_to_int()]->f_9 = _0x569f1e1237508deb(Global_34);
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 613911080, false);
		func_1130(1);
		func_58(1);
		if (chal_is_goal_active(-600094696, 9262582))
		{
			if (func_1131(&(uParam0->f_58), uParam1, 1) == 6 && func_1126((*uParam1)[participant_id_to_int()], 128))
			{
				if (!func_64(&(uParam2->f_8.f_109)))
				{
					func_63(&(uParam2->f_8.f_109));
				}
				if (func_1132(&(uParam2->f_8.f_109), 30f))
				{
					chal_add_goal_progress_int(-600094696, 9262582, 1);
				}
			}
			else if (func_64(&(uParam2->f_8.f_109)))
			{
				func_109(&(uParam2->f_8.f_109));
			}
		}
		if (!func_1133())
		{
			func_554(1);
		}
	}
	else
	{
		if (func_1133())
		{
			func_554(0);
		}
		if (func_1126((*uParam1)[participant_id_to_int()], 32))
		{
			func_1128((*uParam1)[participant_id_to_int()], 32);
			_0x50b72a754ee64a71(-1424050856);
		}
		if (func_64(&(uParam2->f_8.f_109)))
		{
			func_109(&(uParam2->f_8.f_109));
		}
	}
	if (!func_333(894))
	{
		if (func_928(Global_34, net_to_ped(uParam0->f_58.f_3[0]->f_1), 1) < 9f && func_326(&(uParam0->f_58)) == 0)
		{
			func_79(894, 0);
		}
	}
	if (uParam2->f_8.f_97 != &Global_1940085)
	{
		uParam2->f_8.f_97 = &Global_1940085;
	}
}

bool func_861(var uParam0)
{
	if (func_112(network_get_player_from_gamer_handle(&(uParam0->f_3)), 1, 1) > 0)
	{
		return true;
	}
	return false;
}

bool func_862(var uParam0)
{
	if (func_325(uParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_863(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = net_to_ped(uParam0->f_3[iVar0]->f_1);
		if (func_1134(iVar1, 0, 0, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_864(var uParam0, bool bParam1)
{
	iVar0 = func_364(1428526346, 0, 0, 0);
	if (iVar0 > 20)
	{
		iVar0 = 20;
	}
	uParam0->f_4 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_406(-141423389, &iVar1, iVar2, 0, 0))
		{
			iVar3 = iVar1;
			if (bParam1)
			{
				if (func_1136(iVar3, func_1135(1), -1756997214, 0, 0, 0) < 1)
				{
				}
				else
				{
					uParam0->f_21[uParam0->f_4] = iVar3;
					uParam0->f_4++;
				}
				iVar2++;
			}
		}
	}
}

void func_865()
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		_0x929ddd5538f3df1f(0, 0);
		iVar0++;
	}
}

void func_866(var uParam0)
{
	if (uParam0->f_12 < 2)
	{
		uParam0->f_10 = 1000;
	}
	else if (uParam0->f_12 < 3)
	{
		uParam0->f_10 = 750;
	}
	else if (uParam0->f_12 < 4)
	{
		uParam0->f_10 = 550;
	}
	else if (uParam0->f_12 < 5)
	{
		uParam0->f_10 = 350;
	}
	else
	{
		uParam0->f_10 = 200;
	}
}

int func_867(var uParam0)
{
	if (!func_64(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_243(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_1137() - round((uParam0->f_1 * 1000f)));
}

void func_868(var uParam0)
{
	if (uParam0->f_13 < 2)
	{
		uParam0->f_11 = 1000;
	}
	else if (uParam0->f_13 < 3)
	{
		uParam0->f_11 = 750;
	}
	else if (uParam0->f_13 < 4)
	{
		uParam0->f_11 = 550;
	}
	else if (uParam0->f_13 < 5)
	{
		uParam0->f_11 = 350;
	}
	else
	{
		uParam0->f_11 = 200;
	}
}

bool func_869()
{
	return Global_1904651->f_8683 != -1;
}

bool func_870()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_871(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_872()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

bool func_873()
{
	if (!func_356())
	{
		return false;
	}
	uVar0 = Global_1904651->f_8685;
	Global_1904651->f_8685 = 0;
	return uVar0;
}

bool func_874()
{
	return Global_1915715->f_20643;
}

int func_875(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_1138())
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

bool func_876(int iParam0)
{
	return func_587(iParam0, 2);
}

Vector3 func_877()
{
	StringCopy(&cVar0, "", 24);
	switch (func_1139())
	{
		case 0:
		case 2:
			StringCopy(&cVar0, "COOK_LOCATION", 24);
			break;
		case 3:
		case 5:
		case 6:
		case 7:
			StringCopy(&cVar0, "COOK_LOCATION2", 24);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			StringCopy(&cVar0, "COOK_LOCATION3", 24);
			break;
		case 9:
		case 10:
		case 11:
			StringCopy(&cVar0, "COOK_LOCATION4", 24);
			break;
		case 4:
		case 12:
			StringCopy(&cVar0, "COOK_LOCATION5", 24);
			break;
	}
	return cVar0;
}

char* func_878(var uParam0, var uParam1, var uParam2)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_879(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&vParam1))
	{
		bVar0 = create_new_scripted_conversation(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1140(vParam1, uParam0);
		if (bParam6)
		{
			preload_script_conversation(&vParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

void func_880(var uParam0, int iParam1)
{
	if (!func_1141(uParam0, iParam1))
	{
		func_83(&(uParam0->f_108), iParam1);
	}
}

int func_881(struct<2> Param0)
{
	if (!func_843(Param0))
	{
		return -1;
	}
	iVar0 = func_1142(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

bool func_882()
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
	if (!func_843(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_883(int iParam0, bool bParam1)
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

bool func_884(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_885(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_886(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_887(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_1143(iParam0);
		return false;
	}
	if (func_886(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_1144(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

bool func_888(struct<2> Param0, int iParam2)
{
	if (!func_843(Param0))
	{
		return false;
	}
	func_1145(iParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(iParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(iParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(iParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(iParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(iParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(iParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(iParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

char* func_889(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_890(int iParam0)
{
	switch (iParam0)
	{
		case -455129387:
			return 0;
		case -42959138:
			return 1;
		case -1426481784:
			return 2;
		case 1612771159:
			return 4;
		case -173991956:
			return 3;
		case 635155087:
			return 8;
		case -823788167:
			return 5;
		default:
			break;
	}
	return 0;
}

int func_891(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 268435456;
		case 1:
			return 536870912;
		case 2:
			return 1073741824;
		default:
			break;
	}
	return 0;
}

int func_892(int iParam0, int iParam1)
{
	func_371(iParam0, 0, 0);
	if (func_354(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

float func_893(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_894(int iParam0, var uParam1)
{
	uParam1->f_6 = iParam0;
}

bool func_895(var uParam0, float fParam1, float fParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	fParam2 = fParam2;
	if (!does_entity_exist(uParam0->f_6) || (bParam7 && is_entity_dead(uParam0->f_6)))
	{
		return false;
	}
	if (bParam5)
	{
		fVar0 = (fParam6 * fParam6);
	}
	else
	{
		fVar0 = vdist2(Global_35, get_entity_coords(uParam0->f_6, false, false));
	}
	switch (*uParam0)
	{
		case 0:
			if (is_entity_a_ped(uParam0->f_6) && !_0x5102307ce88798eb(get_ped_index_from_entity_index(uParam0->f_6)))
			{
				request_ped_visibility_tracking(get_ped_index_from_entity_index(uParam0->f_6));
			}
			else if (func_1146(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (is_entity_occluded(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (is_entity_a_ped(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = _0x164cecc59e70df86(get_ped_index_from_entity_index(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = is_tracked_ped_visible(get_ped_index_from_entity_index(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = _0xc8ccdb712fbcba92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (is_entity_occluded(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !is_entity_a_ped(uParam0->f_6))
					{
						fVar0 = vdist2(Global_35, get_entity_coords(uParam0->f_6, false, false));
					}
					if (func_1147(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_240() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return true;
}

bool func_896(var uParam0, float fParam1, bool bParam2)
{
	if ((does_entity_exist(uParam0->f_6) && uParam0->f_7 > 0f) && is_entity_on_screen(uParam0->f_6))
	{
		if (uParam0->f_7 < fParam1)
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	if (bParam2)
	{
		uParam0->f_7 = 0f;
		uParam0->f_8 = 0f;
	}
	return true;
}

bool func_897(var uParam0, int iParam1)
{
	if ((iParam1 < 0 || iParam1 >= *uParam0) || iParam1 >= 8)
	{
		return false;
	}
	return is_bit_set(uParam0->f_2, iParam1);
}

bool func_898(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_843(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_1148(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_899(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_871(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_1149())
	{
		return func_871(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_871(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_900(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_901(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_902(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_903(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_904(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_905()
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

void func_906(int iParam0)
{
	if (func_1150(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_907(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_908(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return 1948709075;
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330;
		case 133:
			return -1079912632;
		case 152:
			return -1624899219;
		case 176:
			return 1712034773;
		case 177:
			return 1084233913;
		case 178:
			return -1628307596;
		case 153:
			return 1109728466;
		case 154:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 179:
			return 1244193358;
		case 155:
			return -268420964;
		case 156:
			return -283845926;
		case 157:
			return 76731659;
		case 158:
			return 2141489518;
		case 67:
			return 1529797091;
		case 159:
			return 1120323763;
		case 160:
			return -1951530479;
		case 161:
			return 2034257465;
		case 162:
			return 278587369;
		case 65:
			return 1388932648;
		case 164:
			return 1467401843;
		case 165:
			return -1049737591;
		case 166:
			return 1175719437;
		case 167:
			return 2115547696;
		case 64:
			return 878376253;
		case 168:
			return -508879537;
		case 169:
			return -654369397;
		case 170:
			return 1573058547;
		case 171:
			return 1753151614;
		case 172:
			return -2113647360;
		case 173:
			return 1337275619;
		case 174:
			return -237650722;
		case 175:
			return 283754781;
		case 66:
			return -2076086367;
		case 163:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

bool func_909(int iParam0, int iParam1, var uParam2)
{
	if (func_1151(iParam0, iParam1, &uVar0))
	{
		func_1152(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_910(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_911(var uParam0, var uParam1, var uParam2)
{
	if (!func_1153(uParam2->f_1252.f_123, 0) && ((_0x3ab6c7b0bb0df4b1(uParam2->f_1252.f_123, -1) || func_4(131072)) || func_1154() == 0))
	{
		return;
	}
	if (is_screen_faded_in() && (uParam0->f_21.f_1 == 0 || get_time_difference(uParam0->f_21.f_1, get_network_time_accurate()) >= 6000))
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			if ((*uParam1)[iVar1]->f_12.f_8 != 0)
			{
				if (func_1155((*uParam1)[iVar1]->f_12.f_8) > func_1155(iVar0))
				{
					iVar0 = (*uParam1)[iVar1]->f_12.f_8;
				}
			}
			iVar1++;
		}
		if (iVar0 != 0)
		{
			Var2 = { func_1156(1942026666) };
			Var2.f_5 = iVar0;
			func_1157(&Var2);
			uParam0->f_21.f_1 = get_network_time_accurate();
		}
	}
}

void func_912(var uParam0, var uParam1, int iParam2)
{
	bVar0 = true;
	bVar1 = func_1158(uParam0, uParam1, &bVar0);
	if (!uParam0->f_5)
	{
		if (func_60(iParam2, 32))
		{
			if (uParam0->f_8 == 0)
			{
				func_419(uParam0, 1);
				uParam0->f_4 = 1;
			}
			func_417(&(uParam0->f_15), 3);
			uParam0->f_5 = 1;
		}
	}
	switch (uParam0->f_15)
	{
		case 0:
			func_417(&(uParam0->f_15), 1);
			uParam0->f_4 = 0;
			break;
		case 1:
			if (!uParam0->f_4)
			{
				uParam0->f_8 = func_1159();
				uParam0->f_4 = 1;
			}
			if (uParam0->f_4 && func_1160(iParam2->f_1252.f_122))
			{
				func_417(&(uParam0->f_15), 2);
			}
			break;
		case 2:
			if (!func_1160(iParam2->f_1252.f_122))
			{
				func_417(&(uParam0->f_15), 0);
			}
			break;
		case 3:
			if (bVar1)
			{
				if (func_1161(uParam0, iParam2, uParam1, bVar0))
				{
					func_417(&(uParam0->f_15), 2);
				}
			}
			break;
	}
}

void func_913(var uParam0, var uParam1, var uParam2)
{
	if (!func_1153(uParam2->f_1252.f_122, 0) && _0x3ab6c7b0bb0df4b1(uParam2->f_1252.f_122, -1))
	{
		return;
	}
	if (uParam0->f_17.f_1 == 0 || get_time_difference(uParam0->f_17.f_1, get_network_time_accurate()) >= 8000)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			if ((*uParam1)[iVar1]->f_12.f_7 != 0)
			{
				if (func_1162((*uParam1)[iVar1]->f_12.f_7) > func_1162(iVar0))
				{
					iVar0 = (*uParam1)[iVar1]->f_12.f_7;
				}
			}
			iVar1++;
		}
		if (iVar0 != 0)
		{
			Var2 = { func_1156(377515857) };
			Var2.f_5 = iVar0;
			if (iVar0 == 1)
			{
				Var2.f_6 = 1;
			}
			func_1157(&Var2);
			uParam0->f_17.f_1 = get_network_time_accurate();
		}
	}
}

int func_914(var uParam0)
{
	return uParam0->f_7;
}

void func_915(var uParam0, int iParam1)
{
	uParam0->f_6 = iParam1;
}

void func_916(var uParam0, int iParam1, var uParam2)
{
	fVar1 = 20f;
	if (uParam0->f_8 == 4)
	{
		fVar0 = 15f;
	}
	else
	{
		fVar0 = 7f;
	}
	if ((!func_60(iParam1, 128) && !func_60(iParam1, 8192)) && func_1163(&(iParam1->f_1252.f_96), fVar1))
	{
		func_1164(uParam2, iParam1);
	}
	if (func_1163(&(iParam1->f_1252.f_96), fVar0))
	{
		if ((((!func_61(uParam2, 32, participant_id_to_int()) && !func_61(uParam2, 128, participant_id_to_int())) && !func_60(iParam1, 4096)) && func_61(uParam2, 8192, participant_id_to_int())) && !&Global_1048584)
		{
			func_62(uParam2, 32);
		}
	}
}

void func_917(int iParam0, var uParam1)
{
	if (((((func_1163(&(iParam0->f_1252.f_97), 3f) && network_is_player_active(player_id())) && _0x424b17a7dc5c90bc(player_id())) && func_60(iParam0, 512)) && !func_60(iParam0, 256)) && !func_60(iParam0, 1024))
	{
		if (!func_61(uParam1, 1024, participant_id_to_int()))
		{
			func_62(uParam1, 1024);
		}
	}
	if ((func_1165(&(iParam0->f_1252.f_97), 8f) && network_is_player_active(player_id())) && _0x424b17a7dc5c90bc(player_id()))
	{
		if (func_61(uParam1, 1024, participant_id_to_int()))
		{
			func_77(uParam1, 1024);
		}
	}
}

void func_918(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam1)[participant_id_to_int()]->f_12.f_8 != 0)
	{
		return;
	}
	if (!is_screen_faded_in())
	{
		return;
	}
	if (!func_1153(uParam2->f_1252.f_123, 0) && ((_0x3ab6c7b0bb0df4b1(uParam2->f_1252.f_123, -1) || func_4(131072)) || func_1154() == 0))
	{
		return;
	}
	if (!func_1166(uParam2->f_1252.f_123))
	{
		if (is_ped_using_any_scenario(uParam2->f_1252.f_123))
		{
			if (func_220(get_player_ped(player_id()), Global_1051439->f_72[37]->f_24, 1, 0))
			{
				iVar0 = func_1167(uParam2);
				if (iVar0 != 0)
				{
					(*uParam1)[participant_id_to_int()]->f_12.f_8 = iVar0;
				}
			}
			else
			{
				if (!func_1168(&(uParam2->f_1252.f_359), 2))
				{
					if (func_1168(&(uParam2->f_1252.f_359), 1) || func_1168(&(uParam2->f_1252.f_359), 8))
					{
						func_1169(&(uParam2->f_1252.f_359), 2);
						(*uParam1)[participant_id_to_int()]->f_12.f_8 = 10;
					}
				}
				if (func_465(&(uParam2->f_1252.f_362)))
				{
					func_466(&(uParam2->f_1252.f_362));
				}
			}
		}
	}
}

void func_919(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_15)
	{
		case 3:
			if (func_426(&((*uParam1)[participant_id_to_int()]->f_12)) != 3)
			{
				func_427(&((*uParam1)[participant_id_to_int()]->f_12), 3);
			}
			break;
	}
	bVar0 = false;
	func_1170(uParam1, uParam2);
	func_1171(uParam0, &((*uParam1)[participant_id_to_int()]->f_12), &(uParam2->f_1252.f_6.f_27));
	switch (func_426(&((*uParam1)[participant_id_to_int()]->f_12)))
	{
		case 0:
			if (uParam0->f_15 != 0)
			{
				func_427(&((*uParam1)[participant_id_to_int()]->f_12), 1);
			}
			break;
		case 1:
			if (uParam0->f_4)
			{
				switch (uParam0->f_8)
				{
					case 1:
						if (_0x8360c47380b6f351(uParam2->f_1252.f_128, uParam2->f_1252.f_6.f_27.f_11, "mp005_p_mp_stirStick01x_PH_R_HAND", 0))
						{
							set_entity_visible(uParam2->f_1252.f_6.f_27.f_11, true);
							set_entity_collision(uParam2->f_1252.f_6.f_27.f_11, true, false);
							bVar0 = func_1172(uParam2->f_1252.f_128, uParam2->f_1252.f_122);
						}
						break;
					case 2:
						bVar0 = func_1172(uParam2->f_1252.f_131, uParam2->f_1252.f_122);
						break;
					case 3:
						bVar0 = func_1172(uParam2->f_1252.f_132, uParam2->f_1252.f_122);
						break;
					case 4:
						bVar0 = func_1172(uParam2->f_1252.f_130, uParam2->f_1252.f_122);
						break;
				}
				if (bVar0)
				{
					func_427(&((*uParam1)[participant_id_to_int()]->f_12), 2);
				}
			}
			break;
		case 2:
			if (func_1173(uParam0) == 0)
			{
				func_423(&((*uParam1)[participant_id_to_int()]->f_12), 0);
			}
			break;
		case 3:
			if (func_1174(*uParam0, uParam2, uParam1))
			{
				if (uParam0->f_15 != 3)
				{
					func_427(&((*uParam1)[participant_id_to_int()]->f_12), 2);
				}
			}
			break;
	}
}

void func_920(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam1)[participant_id_to_int()]->f_12.f_7 != 0)
	{
		return;
	}
	if (func_4(512))
	{
		return;
	}
	if (!func_1153(uParam2->f_1252.f_122, 0) && _0x3ab6c7b0bb0df4b1(uParam2->f_1252.f_122, -1))
	{
		return;
	}
	if (!func_1166(uParam2->f_1252.f_122))
	{
		if (func_426(&((*uParam1)[participant_id_to_int()]->f_12)) == 2)
		{
			if (func_220(get_player_ped(player_id()), &(uParam2->f_1672[3]), 1, 0))
			{
				iVar0 = func_1175(uParam0, &(uParam2->f_1252));
				if (iVar0 != 0)
				{
					(*uParam1)[participant_id_to_int()]->f_12.f_7 = iVar0;
				}
			}
			else if (!func_1176(&(uParam2->f_1252.f_260), 2))
			{
				if (func_1176(&(uParam2->f_1252.f_260), 1))
				{
					func_1177(&(uParam2->f_1252.f_260), 2);
					(*uParam1)[participant_id_to_int()]->f_12.f_7 = 4;
				}
			}
		}
	}
}

bool func_921(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

char* func_922(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_A";
	if (bParam3)
	{
		iVar1 = iParam2;
	}
	else
	{
		iVar1 = uParam0->f_1053.f_36;
	}
	iVar2 = func_1178(uParam0, uParam1);
	switch (iVar2)
	{
		case 1:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_A";
			break;
		case 2:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_B";
			break;
		case 3:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_C";
			break;
		case 4:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_D";
			break;
		case 6:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_F";
			break;
		case 7:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_G";
			break;
	}
	return sVar0;
}

char* func_923(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_A";
	if (bParam3)
	{
		iVar1 = iParam2;
	}
	else
	{
		iVar1 = uParam0->f_1053.f_36;
	}
	iVar2 = func_1178(uParam0, uParam1);
	switch (iVar2)
	{
		case 1:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_A";
			break;
		case 2:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_B";
			break;
		case 3:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_C";
			break;
		case 4:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_D";
			break;
		case 6:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_F";
			break;
		case 7:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_G";
			break;
	}
	return sVar0;
}

char* func_924(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_A";
	if (bParam3)
	{
		iVar1 = iParam2;
	}
	else
	{
		iVar1 = uParam0->f_1053.f_36;
	}
	iVar2 = func_1178(uParam0, uParam1);
	switch (iVar2)
	{
		case 1:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_A";
			break;
		case 2:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_B";
			break;
		case 3:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_C";
			break;
		case 4:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_D";
			break;
		case 6:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_F";
			break;
		case 7:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_G";
			break;
	}
	return sVar0;
}

char* func_925(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_A";
	if (bParam3)
	{
		iVar1 = iParam2;
	}
	else
	{
		iVar1 = uParam0->f_1053.f_36;
	}
	iVar2 = func_1178(uParam0, uParam1);
	switch (iVar2)
	{
		case 1:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_A";
			break;
		case 2:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_B";
			break;
		case 3:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_C";
			break;
		case 4:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_D";
			break;
		case 6:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_F";
			break;
		case 7:
			sVar0 = "WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_G";
			break;
	}
	return sVar0;
}

void func_926(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_241(uParam0, 1);
	func_242(uParam0, 2);
	uParam0->f_2 = 0;
}

char* func_927(var uParam0)
{
	switch (&Global_1940085)
	{
		case 0:
			uParam0->f_1053.f_29 = 0;
			if (is_ped_male(get_player_ped(get_player_index())))
			{
				return "WORLD_PLAYER_MOONSHINE_SERVING_SOBER_MALE_A";
			}
			else
			{
				return "WORLD_PLAYER_MOONSHINE_SERVING_SOBER_FEMALE_A";
			}
			break;
		case 1:
		case 2:
			uParam0->f_1053.f_29 = 1;
			if (is_ped_male(get_player_ped(get_player_index())))
			{
				return "WORLD_PLAYER_MOONSHINE_SERVING_DRUNK_MALE_A";
			}
			else
			{
				return "WORLD_PLAYER_MOONSHINE_SERVING_DRUNK_FEMALE_A";
			}
			break;
	}
	return "";
}

float func_928(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_1179(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_929()
{
	iVar0 = 0;
	iVar1 = func_947();
	if ((*Global_1298536)[iVar1]->f_19.f_20 != 0)
	{
		iVar0 = (*Global_1298536)[iVar1]->f_19.f_20;
	}
	return iVar0;
}

int func_930(bool bParam0)
{
	switch (&Global_1940085)
	{
		case 0:
			if (bParam0)
			{
				switch (_0x569f1e1237508deb(Global_34))
				{
					case -2017611976:
					case 1822674155:
					case 1933923503:
					case 2138559483:
						return 10479869;
					case -2082265241:
					case -1863878910:
					case -1419326836:
					case 173081288:
					case 306255907:
					case 661220981:
					case 1146879064:
					case 1209531989:
					case 1259156924:
					case 1441110512:
					case 1643780352:
					case 1951972797:
						return -1842130926;
					default:
						break;
				}
				return -468547873;
			}
			else
			{
				return 2099039304;
			}
			break;
		case 1:
			if (bParam0)
			{
				switch (_0x569f1e1237508deb(Global_34))
				{
					case -2017611976:
					case 1822674155:
					case 1933923503:
					case 2138559483:
						return -948634471;
					case -2082265241:
					case -1863878910:
					case -1419326836:
					case 173081288:
					case 306255907:
					case 661220981:
					case 1146879064:
					case 1209531989:
					case 1259156924:
					case 1441110512:
					case 1643780352:
					case 1951972797:
						return -214160871;
					default:
						break;
				}
				return -638132672;
			}
			else
			{
				return -207806059;
			}
			break;
		case 2:
			if (bParam0)
			{
				switch (_0x569f1e1237508deb(Global_34))
				{
					case -2017611976:
					case 1822674155:
					case 1933923503:
					case 2138559483:
						return -948634471;
					case -2082265241:
					case -1863878910:
					case -1419326836:
					case 173081288:
					case 306255907:
					case 661220981:
					case 1146879064:
					case 1209531989:
					case 1259156924:
					case 1441110512:
					case 1643780352:
					case 1951972797:
						return -214160871;
					default:
						break;
				}
				return -638132672;
			}
			else
			{
				return 1306789391;
			}
			break;
	}
	return 0;
}

int func_931()
{
	iVar0 = -545779394;
	iVar1 = func_947();
	if ((*Global_1298536)[iVar1]->f_19.f_19 == 1269193435 || (*Global_1298536)[iVar1]->f_19.f_19 == 1847740267)
	{
		iVar0 = 1847740267;
	}
	else if ((*Global_1298536)[iVar1]->f_19.f_19 == -822124724 || (*Global_1298536)[iVar1]->f_19.f_19 == 1532695640)
	{
		iVar0 = 1532695640;
	}
	return iVar0;
}

void func_932(var uParam0, var uParam1, vector3 vParam2)
{
	sVar0 = "MoonshineBartender_CamRight";
	if (uParam1->f_1053.f_24)
	{
		sVar0 = "MoonshineBartender_CamLeft";
	}
	if (uParam1->f_1053.f_30 == 0)
	{
		uParam1->f_1053.f_30 = 1;
		_0xd48227263e3d06ae(get_player_index(), vParam2, sVar0, 0f, 0f, 0f, 0, 0);
	}
	else
	{
		_0xa28056cd1b04b250(get_player_index(), 0, vParam2, sVar0, 0f, 0f, 0f, 0, 0);
	}
}

int func_933(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
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
		if (func_587(iVar0, 2))
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
		func_588(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, bParam11, bParam12);
		return iVar1;
	}
	return 0;
}

int func_934(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar1))
		{
		}
		else
		{
			iVar2 = network_get_player_index(iVar1);
			if (!network_is_player_active(iVar2))
			{
			}
			else if (*uParam1)[iVar0]->f_10 == func_687(uParam0->f_1053.f_36)
			{
				return iVar2;
			}
		}
		iVar0++;
	}
	return 255;
}

bool func_935(var uParam0, int iParam1)
{
	if (!network_is_player_active(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1659)
	{
		if (&uParam0->f_1659[iVar0] == 0)
		{
		}
		else
		{
			iVar1 = get_hash_key(get_player_name(iParam1));
			if (&uParam0->f_1659[iVar0] == iVar1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_936(var uParam0, int iParam1)
{
	if (!network_is_player_active(iParam1))
	{
		return;
	}
	iVar0 = get_hash_key(get_player_name(iParam1));
	uParam0->f_1659[uParam0->f_1659.f_5] = iVar0;
	uParam0->f_1659.f_5++;
	if (uParam0->f_1659.f_5 >= 4)
	{
		uParam0->f_1659.f_5 = 0;
	}
}

bool func_937(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_341(iParam0))
	{
		return false;
	}
	iVar0 = func_589(iParam0);
	return _uiprompt_has_standard_mode_completed((*Global_1951255)[iVar0]->f_3, iParam1);
}

void func_938(var uParam0)
{
	switch (uParam0->f_1053.f_36)
	{
		case 0:
			uParam0->f_1053.f_36 = 5;
			break;
		case 1:
			uParam0->f_1053.f_36 = 0;
			break;
		case 2:
			uParam0->f_1053.f_36 = 1;
			break;
		case 3:
			uParam0->f_1053.f_36 = 2;
			break;
		case 4:
			uParam0->f_1053.f_36 = 3;
			break;
		case 5:
			uParam0->f_1053.f_36 = 4;
			break;
	}
}

void func_939(var uParam0)
{
	switch (uParam0->f_1053.f_36)
	{
		case 0:
			uParam0->f_1053.f_36 = 1;
			break;
		case 1:
			uParam0->f_1053.f_36 = 2;
			break;
		case 2:
			uParam0->f_1053.f_36 = 3;
			break;
		case 3:
			uParam0->f_1053.f_36 = 4;
			break;
		case 4:
			uParam0->f_1053.f_36 = 5;
			break;
		case 5:
			uParam0->f_1053.f_36 = 0;
			break;
	}
}

char* func_940(var uParam0)
{
	sVar0 = "";
	if (is_ped_male(get_player_ped(get_player_index())))
	{
		switch (uParam0->f_1053.f_29)
		{
			case 0:
				sVar0 = "MP_AMB_PLAYER@PLAYER_MOONSHINE_SERVING@SOBER@MALE_A@TRANS@BASE_TRANS_LEFT_BASE";
				break;
			case 1:
			case 2:
				sVar0 = "MP_AMB_PLAYER@PLAYER_MOONSHINE_SERVING@DRUNK@MALE_A@TRANS@BASE_TRANS_LEFT_BASE";
				break;
		}
	}
	else
	{
		switch (uParam0->f_1053.f_29)
		{
			case 0:
				sVar0 = "MP_AMB_PLAYER@PLAYER_MOONSHINE_SERVING@SOBER@FEMALE_A@TRANS@BASE_TRANS_LEFT_BASE";
				break;
			case 1:
			case 2:
				sVar0 = "MP_AMB_PLAYER@PLAYER_MOONSHINE_SERVING@DRUNK@FEMALE_A@TRANS@BASE_TRANS_LEFT_BASE";
				break;
		}
	}
	return sVar0;
}

int func_941(int iParam0, var uParam1, char* sParam2, char* sParam3)
{
	if (func_703())
	{
		_0x6d07b371e9439019(iParam0);
		return _0x79197f7d2bb5e73a(iParam0, uParam1, sParam2, sParam3, 0, 0);
	}
	return 0;
}

char* func_942(var uParam0)
{
	sVar0 = "";
	if (is_ped_male(get_player_ped(get_player_index())))
	{
		switch (uParam0->f_1053.f_29)
		{
			case 0:
				sVar0 = "MP_AMB_PLAYER@PLAYER_MOONSHINE_SERVING@SOBER@MALE_A@TRANS@BASE_TRANS_RIGHT_BASE";
				break;
			case 1:
			case 2:
				sVar0 = "MP_AMB_PLAYER@PLAYER_MOONSHINE_SERVING@DRUNK@MALE_A@TRANS@BASE_TRANS_RIGHT_BASE";
				break;
		}
	}
	else
	{
		switch (uParam0->f_1053.f_29)
		{
			case 0:
				sVar0 = "MP_AMB_PLAYER@PLAYER_MOONSHINE_SERVING@SOBER@FEMALE_A@TRANS@BASE_TRANS_RIGHT_BASE";
				break;
			case 1:
			case 2:
				sVar0 = "MP_AMB_PLAYER@PLAYER_MOONSHINE_SERVING@DRUNK@FEMALE_A@TRANS@BASE_TRANS_RIGHT_BASE";
				break;
		}
	}
	return sVar0;
}

Vector3 func_943(var uParam0, var uParam1)
{
	vVar0 = { _get_object_offset_from_coords(func_726(uParam1), func_727(uParam0, uParam1), (-0.736f + 0.29f), (1.063f + 0.03f), (1f + 0.0225f)) };
	return vVar0;
}

Vector3 func_944(var uParam0, var uParam1)
{
	vVar0 = { _get_object_offset_from_coords(func_726(uParam1), func_727(uParam0, uParam1), (-0.736f + 0.29f), (-1.122f + 0.03f), (1f + 0.0225f)) };
	return vVar0;
}

int func_945(var uParam0)
{
	switch (uParam0->f_1053.f_36)
	{
		case 0:
			if (uParam0->f_1053.f_24)
			{
				return func_705(-893706753, 2.2f);
			}
			else if ((uParam0->f_1053.f_29 == 2 && get_random_int_in_range(0, 3) == 0) && uParam0->f_1053.f_25 == 0)
			{
				uParam0->f_1053.f_25 = 1;
				return func_705(801627203, 2.2f);
			}
			else
			{
				uParam0->f_1053.f_25 = 0;
				return func_705(-735231615, 2.2f);
			}
			break;
		case 1:
			if (uParam0->f_1053.f_24)
			{
				return func_705(-1811554957, 2.2f);
			}
			else
			{
				return func_705(-1986679725, 2.2f);
			}
			break;
		case 2:
			if (uParam0->f_1053.f_24)
			{
				return func_705(2077883834, 2.2f);
			}
			else
			{
				return func_705(2011367662, 2.2f);
			}
			break;
		case 3:
			if (uParam0->f_1053.f_24 == 0)
			{
				return func_705(-893706753, 2.2f);
			}
			else
			{
				return func_705(-1932350145, 2.2f);
			}
			break;
		case 4:
			if (uParam0->f_1053.f_24 == 0)
			{
				return func_705(-1811554957, 2.2f);
			}
			else
			{
				return func_705(1103370023, 2.2f);
			}
			break;
		case 5:
			if (uParam0->f_1053.f_24 == 0)
			{
				return func_705(2077883834, 2.2f);
			}
			else if ((uParam0->f_1053.f_29 == 2 && get_random_int_in_range(0, 3) == 0) && uParam0->f_1053.f_25 == 0)
			{
				uParam0->f_1053.f_25 = 1;
				return func_705(-186946623, 2.2f);
			}
			else
			{
				uParam0->f_1053.f_25 = 0;
				return func_705(1804167857, 2.2f);
			}
			break;
	}
	return 0;
}

int func_946(var uParam0)
{
	switch (uParam0->f_1053.f_36)
	{
		case 0:
		case 3:
			return func_705(-893706753, 2.2f);
		case 1:
		case 4:
			return func_705(-1811554957, 2.2f);
		case 2:
		case 5:
			return func_705(2077883834, 2.2f);
	}
	return 0;
}

int func_947()
{
	return Global_1298166->f_200;
}

bool func_948()
{
	return func_899(1, 255);
}

void func_949(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4)
{
	bVar0 = are_strings_equal(&(Global_1298378->f_140), "cutscene@moon1_ext");
	bVar1 = are_strings_equal(&(Global_1298378->f_140), "cutscene@moon2_ext");
	bVar2 = are_strings_equal(&(Global_1298378->f_140), "cutscene@moon5_ext");
	if ((bVar0 || bVar1) || bVar2)
	{
		bVar7 = &uParam0->f_46.f_1[3] > 0;
		bVar8 = &uParam0->f_46.f_1[0] > 0;
		if (bVar0)
		{
			if (bVar7)
			{
				func_1180(iParam2, &Var3);
				uParam1->f_1199.f_9 = 3;
			}
			else if (bVar8)
			{
				func_1181(iParam2, &Var3);
				uParam1->f_1199.f_9 = 2;
			}
			else
			{
				func_1182(iParam2, &Var3);
				uParam1->f_1199.f_9 = 1;
			}
		}
		else if (bVar1)
		{
			if (bVar7)
			{
				func_1180(iParam2, &Var3);
				uParam1->f_1199.f_9 = 3;
			}
			else
			{
				func_1183(iParam2, &Var3);
				uParam1->f_1199.f_9 = 0;
			}
		}
		else if (bVar2)
		{
			if (bVar7)
			{
				func_1180(iParam2, &Var3);
				uParam1->f_1199.f_9 = 3;
			}
			else
			{
				func_1183(iParam2, &Var3);
				uParam1->f_1199.f_9 = 0;
			}
		}
		vVar9 = { func_330(iParam4) };
		fVar12 = func_331(iParam4);
		*uParam3 = { _get_object_offset_from_coords(vVar9, fVar12, Var3) };
		uParam3->f_3 = (fVar12 + Var3.f_3);
		if (get_ground_z_for_3d_coord(*uParam3, &uVar13, false))
		{
			*uParam3 = { *uParam3, uParam3->f_1, uVar13 };
		}
	}
}

int func_950(var uParam0)
{
	if (!func_64(uParam0))
	{
		return 0;
	}
	if (func_243(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_1137() - round((uParam0->f_1 * 1000f)));
}

Vector3 func_951(var uParam0, int iParam1)
{
	vVar0 = { func_330(iParam1) };
	fVar3 = func_331(iParam1);
	vVar4 = { func_1184(uParam0->f_1199.f_9) };
	return _get_object_offset_from_coords(vVar0, fVar3, vVar4);
}

Vector3 func_952(var uParam0, int iParam1)
{
	vVar0 = { func_330(iParam1) };
	fVar3 = func_331(iParam1);
	vVar4 = { func_1185(uParam0->f_1199.f_9) };
	return _get_object_offset_from_coords(vVar0, fVar3, vVar4);
}

void func_953(var uParam0, int iParam1, int iParam2)
{
	if (!get_event_data(1, iParam1, &Var0, 5))
	{
		return;
	}
	switch (iParam2)
	{
		case 16:
			func_338(&(uParam0->f_1[Var0.f_4]), 0, 1, 1);
			if (Var0.f_4 == 5)
			{
				func_473(uParam0, 64);
			}
			if (Var0.f_4 == 6)
			{
				func_473(uParam0, 128);
			}
			break;
		case 17:
			func_338(&(uParam0->f_1[Var0.f_4]), 1, 1, 1);
			if (Var0.f_4 == 5)
			{
				func_478(uParam0, 64);
			}
			if (Var0.f_4 == 6)
			{
				func_478(uParam0, 128);
			}
			break;
	}
}

float func_954()
{
	return 0.75f;
}

bool func_955(var uParam0)
{
	return func_107(*uParam0, 2);
}

int func_956(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

int func_957(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1154717469;
		case 2:
		case 3:
		case 4:
			return 276768972;
		case 6:
		case 7:
			return -1370915905;
		case 5:
			return -1235467171;
		default:
			break;
	}
	return 0;
}

Vector3 func_958(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1777.32f, -804.6f, 187.97f;
				case 1:
					return 1781.09f, -800.84f, 187.96f;
				case 2:
					return 1781.06f, -798.69f, 188.95f;
				case 3:
					return 1781.87f, -797.94f, 188.96f;
				case 4:
					return 1782.65f, -797.21f, 188.96f;
				case 5:
					return 1785.93f, -806.31f, 188.97f;
				case 6:
					return 1779.63f, -801.62f, 188.96f;
				case 7:
					return 1778.06f, -803.11f, 188.96f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1088.86f, 693.77f, 79.6f;
				case 1:
					return -1083.98f, 695.76f, 79.59f;
				case 2:
					return -1089.49f, 691.49f, 80.58f;
				case 3:
					return -1090.5f, 691.04f, 80.58f;
				case 4:
					return -1091.49f, 690.62f, 80.58f;
				case 5:
					return -1091.47f, 700.3f, 80.6f;
				case 6:
					return -1087.13f, 693.76f, 80.58f;
				case 7:
					return -1085.11f, 694.62f, 80.61f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -2782.8f, -3061.5f, -13.34f;
				case 1:
					return -2787.55f, -3059.06f, -13.34f;
				case 2:
					return -2789.63f, -3059.98f, -12.36f;
				case 3:
					return -2790.61f, -3059.48f, -12.36f;
				case 4:
					return -2791.56f, -3058.97f, -12.36f;
				case 5:
					return -2784f, -3052.9f, -12.33f;
				case 6:
					return -2786.41f, -3060.38f, -12.32f;
				case 7:
					return -2784.47f, -3061.4f, -12.34f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1613.87f, 835.08f, 120.31f;
				case 1:
					return 1615.97f, 840.01f, 120.3f;
				case 2:
					return 1614.9f, 842.02f, 121.29f;
				case 3:
					return 1615.34f, 843.03f, 121.29f;
				case 4:
					return 1615.77f, 844.02f, 121.29f;
				case 5:
					return 1622.39f, 836.95f, 121.31f;
				case 6:
					return 1614.74f, 838.78f, 121.3f;
				case 7:
					return 1613.88f, 836.78f, 121.31f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -1852.25f, -1740.94f, 84.63f;
				case 1:
					return -1849.54f, -1736.29f, 84.62f;
				case 2:
					return -1851.46f, -1743.02f, 85.6f;
				case 3:
					return -1852.02f, -1743.97f, 85.6f;
				case 4:
					return -1852.54f, -1744.9f, 85.6f;
				case 5:
					return -1858.29f, -1737.11f, 85.62f;
				case 6:
					return -1850.92f, -1739.83f, 85.62f;
				case 7:
					return -1849.85f, -1737.95f, 85.61f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_959(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 7:
			return 5;
		case 5:
			return 6;
		case 6:
			return 7;
		default:
			break;
	}
	return -1;
}

char* func_960(int iParam0, int iParam1)
{
	iVar0 = get_random_int_in_range(0, 4);
	switch (iParam1)
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
				case 1:
					return "MOONSHINE_EAT";
				case 2:
					StringCopy(&cVar1, "MOONSHINE_EAT_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 3:
					StringCopy(&cVar1, "MOONSHINE_EAT_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
				case 1:
					return "MOONSHINE_WASH_FACE";
				case 2:
					StringCopy(&cVar1, "MOONSHINE_WASH_FACE_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 3:
					StringCopy(&cVar1, "MOONSHINE_WASH_FACE_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
				case 1:
					return "MOONSHINE_POUR";
				case 2:
					StringCopy(&cVar1, "MOONSHINE_POUR_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 3:
					StringCopy(&cVar1, "MOONSHINE_POUR_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
				case 1:
					return "MOONSHINE_GET";
				case 2:
					StringCopy(&cVar1, "MOONSHINE_GET_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 3:
					StringCopy(&cVar1, "MOONSHINE_GET_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
	}
	return "";
}

int func_961(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 782960533;
		default:
			break;
	}
	return -473983589;
}

Vector3 func_962(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1777.32f, -804.6f, 187.97f;
				case 1:
					return 1781.09f, -800.84f, 187.96f;
				case 2:
					return 1781.1f, -798.79f, 188.96f;
				case 3:
					return 1781.89f, -798.03f, 188.96f;
				case 4:
					return 1782.68f, -797.29f, 188.96f;
				case 7:
					return 1785.93f, -806.31f, 188.97f;
				case 8:
					return 1776.51f, -804.5f, 187.96f;
				case 5:
					vVar0 = { _get_object_offset_from_coords(1779.365f, -802.881f, 187.9654f, (-136.6f + 90f), -0.736f, 1.063f, 0f) };
					vVar0.f_2 = 187.96f;
					return vVar0;
				case 6:
					vVar0 = { _get_object_offset_from_coords(1779.365f, -802.881f, 187.9654f, (-136.6f + 90f), -0.736f, -1.122f, 0f) };
					vVar0.f_2 = 187.96f;
					return vVar0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1088.86f, 693.77f, 79.6f;
				case 1:
					return -1083.98f, 695.76f, 79.59f;
				case 2:
					return -1089.5f, 691.6f, 80.58f;
				case 3:
					return -1090.5f, 691.16f, 80.58f;
				case 4:
					return -1091.5f, 690.73f, 80.58f;
				case 7:
					return -1091.47f, 700.3f, 80.6f;
				case 8:
					return -1083.36f, 695.46f, 79.56f;
				case 5:
					vVar0 = { _get_object_offset_from_coords(-1086.47f, 694.842f, 79.6002f, (23.5f + 90f), -0.736f, 1.063f, 0f) };
					vVar0.f_2 = 79.595f;
					return vVar0;
				case 6:
					vVar0 = { _get_object_offset_from_coords(-1086.47f, 694.842f, 79.6002f, (23.5f + 90f), -0.736f, -1.122f, 0f) };
					vVar0.f_2 = 79.595f;
					return vVar0;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -2782.8f, -3061.5f, -13.34f;
				case 1:
					return -2787.55f, -3059.06f, -13.34f;
				case 2:
					return -2789.54f, -3059.9f, -12.36f;
				case 3:
					return -2790.51f, -3059.39f, -12.36f;
				case 4:
					return -2791.47f, -3058.88f, -12.36f;
				case 7:
					return -2784f, -3052.9f, -12.33f;
				case 8:
					return -2782.6f, -3062.32f, -13.37f;
				case 5:
					vVar0 = { _get_object_offset_from_coords(-2785.119f, -3060.224f, -13.3343f, (-27.7f + 90f), -0.736f, 1.063f, 0f) };
					vVar0.f_2 = -12.919f;
					return vVar0;
				case 6:
					vVar0 = { _get_object_offset_from_coords(-2785.119f, -3060.224f, -13.3343f, (-27.7f + 90f), -0.736f, -1.122f, 0f) };
					vVar0.f_2 = -12.919f;
					return vVar0;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1613.87f, 835.08f, 120.31f;
				case 1:
					return 1615.97f, 840.01f, 120.3f;
				case 2:
					return 1614.99f, 841.93f, 121.29f;
				case 3:
					return 1615.42f, 842.94f, 121.29f;
				case 4:
					return 1615.84f, 843.94f, 121.29f;
				case 7:
					return 1622.39f, 836.95f, 121.31f;
				case 8:
					return 1613.07f, 834.89f, 120.27f;
				case 5:
					vVar0 = { _get_object_offset_from_coords(1615.008f, 837.4983f, 120.3081f, (-113.2f + 90f), -0.736f, 1.063f, 0f) };
					vVar0.f_2 = 120.3f;
					return vVar0;
				case 6:
					vVar0 = { _get_object_offset_from_coords(1615.008f, 837.4983f, 120.3081f, (-113.2f + 90f), -0.736f, -1.122f, 0f) };
					vVar0.f_2 = 120.3f;
					return vVar0;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -1852.25f, -1740.94f, 84.63f;
				case 1:
					return -1849.54f, -1736.29f, 84.62f;
				case 2:
					return -1851.53f, -1742.93f, 85.6f;
				case 3:
					return -1852.08f, -1743.88f, 85.6f;
				case 4:
					return -1852.62f, -1744.81f, 85.6f;
				case 7:
					return -1858.29f, -1737.11f, 85.62f;
				case 8:
					return -1848.78f, -1736.15f, 84.59f;
				case 5:
					vVar0 = { _get_object_offset_from_coords(-1851.025f, -1738.521f, 84.6213f, (60f + 90f), -0.736f, 1.063f, 0f) };
					vVar0.f_2 = 84.616f;
					return vVar0;
				case 6:
					vVar0 = { _get_object_offset_from_coords(-1851.025f, -1738.521f, 84.6213f, (60f + 90f), -0.736f, -1.122f, 0f) };
					vVar0.f_2 = 84.616f;
					return vVar0;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_963(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_341(iParam0))
	{
		return;
	}
	iVar0 = func_589(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

char* func_964()
{
	iVar0 = get_random_int_in_range(0, 2);
	switch (&Global_1940085)
	{
		case 0:
			return "MOONSHINE_SIT";
		case 1:
			StringCopy(&cVar1, "MOONSHINE_SIT_DRUNK_", 64);
			StringConCat(&cVar1, func_215(iVar0), 64);
			return func_618(cVar1);
		case 2:
			StringCopy(&cVar1, "MOONSHINE_SIT_WASTED_", 64);
			StringConCat(&cVar1, func_215(iVar0), 64);
			return func_618(cVar1);
	}
	return "";
}

var func_965(int iParam0, int iParam1)
{
	return func_1186(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

var func_966(int iParam0, int iParam1, var uParam2)
{
	iVar0 = get_random_int_in_range(0, 2);
	if (!is_string_null_or_empty(func_1187(*uParam2)))
	{
		return func_1187(*uParam2);
	}
	switch (iParam1)
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
				case 1:
					return "MOONSHINE_ALMONDS";
				case 2:
					StringCopy(&cVar1, "MOONSHINE_ALMONDS_DRUNK_", 64);
					break;
				case 3:
					StringCopy(&cVar1, "MOONSHINE_ALMONDS_WASTED_", 64);
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
				case 1:
					return "MOONSHINE_BARREL";
				case 2:
					StringCopy(&cVar1, "MOONSHINE_BARREL_DRUNK_", 64);
					break;
				case 3:
					StringCopy(&cVar1, "MOONSHINE_BARREL_WASTED_", 64);
					break;
			}
			break;
		case 2:
		case 3:
		case 4:
			return "MOONSHINE_WEAK_GROUP_LABEL";
		case 8:
			switch (iParam0)
			{
				case 0:
				case 1:
					return "MOONSHINE_COFFEE_POT";
				case 2:
					StringCopy(&cVar1, "MOONSHINE_COFFEE_POT_DRUNK_", 64);
					break;
				case 3:
					StringCopy(&cVar1, "MOONSHINE_COFFEE_POT_WASTED_", 64);
					break;
			}
			break;
	}
	StringConCat(&cVar1, func_215(iVar0), 64);
	MemCopy(uParam2, {cVar1}, 4);
	return func_618(cVar1);
}

void func_967(int iParam0)
{
	Var0 = 16;
	Var0.f_4 = iParam0;
	uVar5 = func_965(4, 8);
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	trigger_script_event(1, &Var0, 5, 46, &uVar5);
}

void func_968(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_341(iParam0))
	{
		return;
	}
	iVar0 = func_589(iParam0);
	func_591(iVar0, bParam1);
}

bool func_969(int iParam0, int iParam1, var uParam2)
{
	if (func_1188(iParam0, iParam1, &uVar0))
	{
		func_1152(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_970(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

var func_971(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_int(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_972(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1008523256;
		case 1:
			return 1141833051;
		case 2:
			return 830686115;
		case 3:
			return 1371816784;
		case 4:
			return -279039872;
		case 5:
			return -347364204;
		case 6:
			return -1591356522;
		case 7:
			return -1481147674;
		case 8:
			return 1071445036;
		case 9:
			return 1393764479;
		case 10:
			return 416600242;
		case 11:
			return 1774314862;
		case 12:
			return 1624339917;
		case 13:
			return -702452069;
		case 14:
			return -1697453237;
		case 15:
			return 935565856;
		case 16:
			return 164389658;
		case 17:
			return -3633128;
		case 18:
			return 568979268;
		case 19:
			return -742165699;
		case 20:
			return 1241889488;
		case 21:
			return -1450969535;
		case 22:
			return 135103436;
		case 23:
			return -1562463744;
		case 24:
			return -569428078;
		case 25:
			return 1034986020;
		case 26:
			return 1282514153;
		case 27:
			return 699547230;
		case 28:
			return -1188075274;
		case 29:
			return -307865396;
		case 30:
			return -340432202;
		case 31:
			return 891000470;
		case 32:
			return -1785915344;
		case 33:
			return 95610146;
		case 34:
			return -175154863;
		case 35:
			return -779715008;
		case 36:
			return 966721050;
		case 37:
			return 1773322216;
		case 38:
			return 965995012;
		case 39:
			return -2106942431;
		case 40:
			return 1772846069;
		case 41:
			return -1782208300;
		case 42:
			return 466723622;
		case 43:
			return -155807419;
		case 44:
			return 369580868;
		case 45:
			return 1862983441;
		case 46:
			return -1462149998;
		case 47:
			return 1097539553;
		case 48:
			return -1479366685;
		case 49:
			return 1475807964;
		case 50:
			return 504293064;
		case 51:
			return -678729477;
		case 52:
			return 1635370648;
		case 53:
			return 741518720;
		case 54:
			return -1021330426;
		case 55:
			return -879824208;
		case 56:
			return 56746299;
		case 57:
			return 1915534289;
		case 58:
			return 1089670230;
		case 59:
			return 1179867258;
		case 60:
			return -328876172;
		case 61:
			return 824485797;
		case 62:
			return -146546566;
		case 63:
			return -733684727;
		case 64:
			return 2080739522;
		case 65:
			return 1250184037;
		case 66:
			return 1142477451;
		case 67:
			return -750441052;
		case 68:
			return -467924289;
		case 69:
			return 1034671917;
		case 70:
			return -1442893430;
		case 71:
			return 957547265;
		case 72:
			return 1781322358;
		case 73:
			return 1219330971;
		case 74:
			return -2110119917;
		case 75:
			return 709191463;
		case 76:
			return 2038044382;
		case 77:
			return 1062084355;
		case 78:
			return -690423049;
		case 79:
			return 202835363;
		case 80:
			return -293519133;
		case 81:
			return 592206679;
		case 82:
			return -816725755;
		case 83:
			return -255537257;
		case 84:
			return -770038426;
		case 85:
			return -1940881994;
		case 86:
			return -1099377300;
		case 87:
			return -1298580726;
		case 88:
			return -1838764391;
		case 89:
			return 1537295589;
		case 90:
			return -26782235;
		case 91:
			return 1465961145;
		case 92:
			return -150140702;
		case 93:
			return 925148616;
		case 94:
			return -586196356;
		case 95:
			return -989277348;
		case 96:
			return -1045571630;
		case 97:
			return -1028785813;
		case 98:
			return -944306928;
		case 99:
			return -1799624227;
		case 100:
			return -1413825410;
		case 101:
			return -1083767826;
		case 102:
			return 1392091586;
		case 103:
			return 1269397350;
		case 104:
			return -1808878008;
		case 105:
			return 696574474;
		case 106:
			return 1280983896;
		case 107:
			return -473520653;
		case 108:
			return -1142735215;
		case 109:
			return -662059387;
		case 110:
			return 1196324698;
		case 111:
			return 1781673553;
		case 112:
			return 1091365066;
		case 113:
			return -346602855;
		case 114:
			return -642855470;
		case 115:
			return -1294273068;
		case 116:
			return -1181812906;
		case 117:
			return 2016458991;
		case 118:
			return 200716381;
		case 119:
			return -1845137425;
		case 120:
			return 787092883;
		case 121:
			return 888483612;
		case 122:
			return 2063500509;
		case 123:
			return -1570130076;
		case 124:
			return 262797908;
		case 125:
			return 2012255077;
		case 126:
			return 1499632451;
		case 127:
			return -236880317;
		case 128:
			return 1211454712;
		case 129:
			return -626189620;
		case 130:
			return -1438489730;
		case 131:
			return -479537578;
		case 132:
			return -1463903719;
		case 133:
			return 1203863120;
		case 134:
			return -351785645;
		case 135:
			return -895584822;
		case 136:
			return -1723095449;
		case 137:
			return 1915528396;
		case 138:
			return -1266254117;
		case 139:
			return -1614496179;
		case 140:
			return -1490596352;
		case 141:
			return -1047907201;
		case 142:
			return -1202322374;
		case 143:
			return 157340468;
		case 144:
			return 2064288322;
		case 145:
			return -2116748653;
		case 146:
			return 155183949;
		case 147:
			return 825663396;
		case 148:
			return 976967808;
		case 149:
			return 590738432;
		case 150:
			return 1708896805;
		case 151:
			return 2035135006;
		case 152:
			return 334691246;
		case 153:
			return -835870147;
		case 154:
			return -1267680873;
		case 155:
			return 1153433438;
		case 156:
			return 1489424180;
		case 157:
			return -904522836;
		case 158:
			return 1611867516;
		case 159:
			return -1119986744;
		case 160:
			return -941621037;
		case 161:
			return 101270175;
		case 162:
			return -875013288;
		case 163:
			return -1541719198;
		case 164:
			return 842085562;
		case 165:
			return 1887179278;
		case 166:
			return 1468744908;
		case 167:
			return -1248823782;
		case 168:
			return 1154537543;
		case 169:
			return -1244566857;
		case 170:
			return -1255654531;
		case 171:
			return -2137705453;
		case 172:
			return -1924253471;
		case 173:
			return 1990527907;
		case 174:
			return -1963575852;
		case 175:
			return -2051828336;
		case 176:
			return 1798123698;
		case 177:
			return 495975404;
		case 178:
			return -665208900;
		case 179:
			return -2090796305;
		case 180:
			return 1649401908;
		case 181:
			return -2103309026;
		case 182:
			return 1582509135;
		case 183:
			return -1471337442;
		case 184:
			return -1207177750;
		case 185:
			return 1269504651;
		case 186:
			return 1519769314;
		case 187:
			return 644398018;
		case 188:
			return 107613027;
		case 189:
			return 93270913;
		case 190:
			return -2118935736;
		case 191:
			return -536214615;
		case 192:
			return 1772867250;
		case 193:
			return 766204040;
		case 194:
			return 564321544;
		case 195:
			return -434046439;
		case 196:
			return 728527958;
		case 197:
			return -1923952042;
		case 198:
			return -749877125;
		case 199:
			return 1857771831;
		case 200:
			return 273544526;
		case 201:
			return 1068458324;
		case 202:
			return 600894625;
		case 203:
			return -1463447134;
		case 204:
			return -1161401818;
		case 205:
			return 1888618008;
		case 206:
			return 1225419284;
		case 207:
			return 1127626385;
		case 208:
			return -1211596176;
		case 209:
			return 1811646877;
		case 210:
			return 1651578691;
		case 211:
			return 1382238315;
		case 212:
			return -2099616401;
		case 213:
			return 946618725;
		case 214:
			return -862103290;
		case 215:
			return -578476660;
		case 216:
			return 333834761;
		case 217:
			return -1530925183;
		case 218:
			return -809702995;
		case 219:
			return -267638862;
		case 220:
			return 1323614307;
		case 221:
			return -2094518374;
		case 222:
			return -209614658;
		case 223:
			return -2011961582;
		case 224:
			return 1656869860;
		case 225:
			return -969870146;
		case 226:
			return 1319079466;
		case 227:
			return -1688741952;
		case 228:
			return -1537888061;
		case 229:
			return 1417063580;
		case 230:
			return 992974374;
		case 231:
			return -1714801835;
		case 232:
			return -134912699;
		case 233:
			return 41531735;
		case 234:
			return -1175686941;
		case 235:
			return -1834878085;
		case 236:
			return 1672605872;
		case 237:
			return 1083028949;
		case 238:
			return 890539395;
		case 239:
			return -1603547373;
		case 240:
			return -748173978;
		case 241:
			return 1949355378;
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

char* func_973(int iParam0)
{
	switch (iParam0)
	{
		case 1008523256:
			return "time_block";
		case 1141833051:
			return "mission";
		case 830686115:
			return "mission_type(type=%x)/mission";
		case 1371816784:
			return "volume";
		case -279039872:
			return "volume_component";
		case -347364204:
			return "nav_block_volume";
		case -1591356522:
			return "blocking_object_flag";
		case -1481147674:
			return "location_flag";
		case 1071445036:
			return "setting";
		case 1393764479:
			return "scenario";
		case 416600242:
			return "door";
		case 1774314862:
			return "force_volume";
		case 1624339917:
			return "ped";
		case -702452069:
			return "prop";
		case -1697453237:
			return "ipl";
		case 935565856:
			return "lantern";
		case 164389658:
			return "prop_set";
		case -3633128:
			return "veg_mod";
		case 568979268:
			return "invalid_scenario";
		case -742165699:
			return "scenario_flag";
		case 1241889488:
			return "veg_flag";
		case -1450969535:
			return "anim";
		case 135103436:
			return "name";
		case -1562463744:
			return "turn_in_type";
		case -569428078:
			return "item";
		case 1034986020:
			return "interior";
		case 1282514153:
			return "transition";
		case 699547230:
			return "Location";
		case -1188075274:
			return "Mission_Giver";
		case -307865396:
			return "location";
		case -340432202:
			return "required_volume";
		case 891000470:
			return "mission_type";
		case -1785915344:
			return "unlock";
		case 95610146:
			return "state";
		case -175154863:
			return "string";
		case -779715008:
			return "flag";
		case 966721050:
			return "attribute";
		case 1773322216:
			return "weapon";
		case 965995012:
			return "warp_location";
		case -2106942431:
			return "flags";
		case 1772846069:
			return "giver";
		case -1782208300:
			return "Gun_for_Hire";
		case 466723622:
			return "Locations";
		case -155807419:
			return "Mission_Givers";
		case 369580868:
			return "Player_Bounties";
		case 1862983441:
			return "Use_Contexts";
		case -1462149998:
			return "location_flags";
		case 1097539553:
			return "location_flag(%i)";
		case -1479366685:
			return "settings";
		case 1475807964:
			return "setting(%i)";
		case 504293064:
			return "Dialogue";
		case -678729477:
			return "Missions";
		case 1635370648:
			return "Location(location=%x)";
		case 741518720:
			return "Mission_Giver(giver=%x)";
		case -1021330426:
			return "interaction_lockon";
		case -879824208:
			return "mission_giver_creation_data";
		case 56746299:
			return "schedule";
		case 1915534289:
			return "time_block(%i)";
		case 1089670230:
			return "mission(%i)";
		case 1179867258:
			return "volumes";
		case -328876172:
			return "volume(%i)";
		case 824485797:
			return "volume_component(%i)";
		case -146546566:
			return "volume_locks";
		case -733684727:
			return "volume_lock(%i)";
		case -750441052:
			return "scenarios";
		case 2080739522:
			return "nav_block_volume(%i)";
		case 1250184037:
			return "blocking_object_flags";
		case 1142477451:
			return "volume";
		case -1202322374:
			return "anti_grief_volumes";
		case -467924289:
			return "prop_sets";
		case 1034671917:
			return "props";
		case -1442893430:
			return "peds";
		case 957547265:
			return "script_created_scenarios";
		case 1781322358:
			return "veg_mods";
		case 1219330971:
			return "conditional_anims";
		case -2110119917:
			return "transitions";
		case 709191463:
			return "transition(%i)";
		case 2038044382:
			return "anim(%i)";
		case 1062084355:
			return "force_volumes";
		case -690423049:
			return "doors";
		case 202835363:
			return "scenario(%i)";
		case -293519133:
			return "prop_set(%i)";
		case 592206679:
			return "prop(%i)";
		case -816725755:
			return "ipl(%i)";
		case -255537257:
			return "lantern(%i)";
		case -770038426:
			return "ped(%i)";
		case -1940881994:
			return "unreachable_scearios";
		case -1099377300:
			return "invalid_scenario(%i)";
		case -1298580726:
			return "scenario_flags";
		case -1838764391:
			return "scenario_flag(%i)";
		case 1537295589:
			return "veg_flag(%i)";
		case -26782235:
			return "force_volume(%i)";
		case 1465961145:
			return "door(%i)";
		case -150140702:
			return "mission_giver_data";
		case 925148616:
			return "mission_giver_names";
		case -586196356:
			return "name(%i)";
		case -989277348:
			return "blip_data";
		case -1045571630:
			return "dialogue_type(type=%x)";
		case -1028785813:
			return "conversation(script_dialogue_handle=%x)";
		case -944306928:
			return "mission(unlock=%x)";
		case -1799624227:
			return "mission(type=%x)";
		case -1413825410:
			return "mission_data";
		case -1083767826:
			return "interiors";
		case 1392091586:
			return "interior(%i)";
		case 1269397350:
			return "name(name_type=%x)";
		case -1808878008:
			return "required_volume(%i)";
		case 696574474:
			return "required_volume_type(type=%x)";
		case 1280983896:
			return "required_volumes_types";
		case -473520653:
			return "mission_giver_type(type=%x)";
		case -1142735215:
			return "attachment";
		case -662059387:
			return "Location(%i)";
		case 1196324698:
			return "Location(id=%x)";
		case 1781673553:
			return "Mission_Giver(%i)";
		case 1091365066:
			return "mission_giver_name(type=%x)";
		case -346602855:
			return "locations";
		case -642855470:
			return "location(%i)";
		case -1294273068:
			return "Location(%i)";
		case -1181812906:
			return "veg_mod(%i)";
		case 2016458991:
			return "veg_mod_data(type=%x)";
		case 200716381:
			return "mission_flags";
		case -1845137425:
			return "mission_flag(%i)";
		case 787092883:
			return "door_config(config=%x)";
		case 888483612:
			return "mission_type(type=%x)";
		case 2063500509:
			return "mission_type(%i)";
		case -1570130076:
			return "mission_types";
		case 262797908:
			return "unlock(%i)";
		case 2012255077:
			return "state(%i)";
		case 1499632451:
			return "strings";
		case -236880317:
			return "string(%i)";
		case 1211454712:
			return "scenario";
		case -626189620:
			return "time_block(%i)/mission(unlock=%x)";
		case -1438489730:
			return "town(id=%x)";
		case -479537578:
			return "volume(script_volume_type=%x)";
		case -1463903719:
			return "town_volumes";
		case 1203863120:
			return "map_props";
		case -351785645:
			return "ipls";
		case -895584822:
			return "lanterns";
		case -1723095449:
			return "flags(type=%x)";
		case 157340468:
			return "nav_block_volumes";
		case 2064288322:
			return "volume";
		case -2116748653:
			return "blocking_object_flags";
		case 155183949:
			return "blocking_object_flag(%i)";
		case 825663396:
			return "ped(role=%x)";
		case 1915528396:
			return "flag(%i)";
		case -1266254117:
			return "attributes";
		case -1614496179:
			return "attribute(%i)";
		case -1490596352:
			return "weapons";
		case -1047907201:
			return "weapon(%i)";
		case 976967808:
			return "warp_locations";
		case 590738432:
			return "warp_location(%i)";
		case 1708896805:
			return "scene";
		case 2035135006:
			return "giver_schedule";
		case 334691246:
			return "hour(%i)";
		case -835870147:
			return "flags(%i)";
		case -1267680873:
			return "giver(%i)";
		case 1153433438:
			return "dialogue";
		case 1489424180:
			return ":dialogue_star_handle";
		case -904522836:
			return ":name";
		case 1611867516:
			return ":volume_name";
		case -1119986744:
			return ":conditional";
		case -941621037:
			return ":attach_bone";
		case 101270175:
			return ":anim_scene_name";
		case -875013288:
			return ":playlist_name";
		case -1541719198:
			return ":prop_name";
		case 842085562:
			return ":unlock";
		case 1887179278:
			return ":unlock_group";
		case 1468744908:
			return "mission(%i):unlock";
		case -1248823782:
			return ":mission_type";
		case 1154537543:
			return ":mission_name";
		case -1244566857:
			return ":dialogue_id";
		case -1255654531:
			return ":model";
		case -2137705453:
			return ":name";
		case -1924253471:
			return ":name_type";
		case 1990527907:
			return ":blip_style_close";
		case -1963575852:
			return ":blip_modifier_close";
		case -2051828336:
			return ":blip_sprite_close";
		case 1798123698:
			return ":flag";
		case 495975404:
			return ":script_volume_type";
		case -665208900:
			return ":type";
		case -2090796305:
			return ":required_volume_config";
		case 1649401908:
			return ":type";
		case -2103309026:
			return ":attach_to_model";
		case 1582509135:
			return ":scenario_author_type";
		case -1471337442:
			return ":blip_sprite";
		case -1207177750:
			return ":blip_style";
		case 1269504651:
			return ":blip_region";
		case 1519769314:
			return ":valid_location";
		case 644398018:
			return ":location";
		case 107613027:
			return ":giver";
		case 93270913:
			return ":blip";
		case -2118935736:
			return ":blip_modifier";
		case -536214615:
			return ":prop_set_name";
		case 564321544:
			return ":prop_set_placement_type";
		case -434046439:
			return ":door_id";
		case 728527958:
			return ":outfit";
		case -1923952042:
			return ":command_hash";
		case -749877125:
			return ":honor_requirement";
		case 1857771831:
			return ":loadout";
		case 273544526:
			return ":ipl_group";
		case 1068458324:
			return ":ipl_veg_mod";
		case 600894625:
			return ":ipl_nav_mesh";
		case -1463447134:
			return ":id";
		case -1161401818:
			return ":location_type";
		case 1888618008:
			return ":inventory_item";
		case 1225419284:
			return ":weapon";
		case 1127626385:
			return ":attach_point";
		case -1211596176:
			return ":use";
		case 1772867250:
			return ":scenario_prop";
		case 766204040:
			return ":scenario_mapping";
		case 1811646877:
			return ":texture";
		case 1651578691:
			return ":document";
		case 1382238315:
			return ":gender";
		case -2099616401:
			return ":handle";
		case 946618725:
			return ":value";
		case -862103290:
			return ":use_veg_mod";
		case -578476660:
			return ":force_to_be_object";
		case 333834761:
			return ":disable_scenario";
		case -1530925183:
			return ":clear_space";
		case -809702995:
			return ":should_be_locked";
		case -267638862:
			return ":is_breakable";
		case 1323614307:
			return ":snap_to";
		case -2094518374:
			return ":radius";
		case -209614658:
			return ":model_search_radius";
		case -2011961582:
			return ":heading";
		case 1656869860:
			return ":float";
		case -969870146:
			return ":launch_radius_offline";
		case 1319079466:
			return ":launch_radius_online";
		case -1688741952:
			return ":z_probe";
		case -1537888061:
			return ":open_ratio";
		case 1417063580:
			return ":auto_close_rate";
		case 992974374:
			return ":spawn_heading";
		case -1714801835:
			return ":interior_coords";
		case -134912699:
			return ":position";
		case 41531735:
			return ":orientation";
		case -1175686941:
			return ":scale";
		case -1834878085:
			return ":model_search_position";
		case 1672605872:
			return ":launch_coords";
		case 1083028949:
			return ":rotation";
		case 890539395:
			return ":spawn_position";
		case -1603547373:
			return ":destination_position";
		case -748173978:
			return ":destination_orientation";
		case 1949355378:
			return ":origin";
		default:
			break;
	}
	return "";
}

int func_974(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -792947925;
		case 1:
			return -1427946892;
		case 2:
			return 408367626;
		case 3:
			return -1622280771;
		case 4:
			return 1394196983;
		case 5:
			return 135054243;
		case 6:
			return -276973166;
		case 7:
			return 218782838;
		case 8:
			return 1811778263;
		case 9:
			return -1182771454;
		case 10:
			return 33417155;
		case 11:
			return 12932893;
		case 12:
			return 767213493;
		case 13:
			return -2017210649;
		case 14:
			return 581202040;
		case 15:
			return 2062917018;
		case 16:
			return -620047125;
		case 17:
			return -1250873360;
		case 18:
			return 154896618;
		case 19:
			return -371275865;
		case 20:
			return 1005476533;
		case 21:
			return 1957572717;
		case 22:
			return 2125319032;
		case 23:
			return -1581105240;
		case 24:
			return -667693420;
		case 25:
			return -1523280739;
		case 26:
			return 1937201256;
		case 27:
			return 2002802057;
		case 28:
			return 938696127;
		case 29:
			return 924791973;
		case 30:
			return -1029131400;
		case 31:
			return -118633223;
		case 32:
			return 1217673812;
		case 33:
			return 499583568;
		case 34:
			return -1969117434;
		case 35:
			return -151415096;
		case 36:
			return 1570262717;
		case 37:
			return -419812745;
		case 38:
			return 1134292740;
		case 39:
			return -1445468930;
		case 40:
			return 327661882;
		case 41:
			return 314220799;
		case 42:
			return 402983180;
		case 43:
			return -1287008399;
		case 44:
			return 460561235;
		case 45:
			return -377576419;
		case 46:
			return -1418408851;
		case 47:
			return -1592717000;
		case 48:
			return -1108141625;
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

char* func_975(int iParam0)
{
	switch (iParam0)
	{
		case -792947925:
			return "mission_type";
		case -1427946892:
			return "mission";
		case 408367626:
			return "mission_flag";
		case -1622280771:
			return "string";
		case 1394196983:
			return "mission_flags";
		case 135054243:
			return "map";
		case -276973166:
			return "mission_type_flags";
		case 218782838:
			return "mission_type_flag";
		case 1811778263:
			return "stat";
		case -1182771454:
			return "hour";
		case 33417155:
			return "Net_Gun_For_Hire_Missions";
		case 12932893:
			return "mission_type(type=%x)";
		case 767213493:
			return "mission_type(%i)";
		case -2017210649:
			return "mission(unlock=%x)";
		case 581202040:
			return "mission(%i)";
		case 2062917018:
			return "mission_data";
		case -620047125:
			return "strings";
		case -1250873360:
			return "string(%i)";
		case 154896618:
			return "mission_flags(type=%x)";
		case -371275865:
			return "mission_flags(%i)";
		case 1005476533:
			return "mission_flag(%i)";
		case 1957572717:
			return "string(type=%x)";
		case 2125319032:
			return "mappings";
		case -1581105240:
			return "map(%i)";
		case -667693420:
			return "map(type=%x)";
		case -1523280739:
			return "mission_type_flags(type=%x)";
		case 1937201256:
			return "mission_type_flags(%i)";
		case 2002802057:
			return "mission_type_flag(%i)";
		case 938696127:
			return "stats";
		case 924791973:
			return "stat(%i)";
		case -1029131400:
			return "unavailable_hours";
		case -118633223:
			return "hour(%i)";
		case 1217673812:
			return ":unlock_group";
		case 499583568:
			return ":unlock";
		case -1969117434:
			return ":mission_name";
		case -151415096:
			return ":dialogue_id";
		case 1570262717:
			return ":flag";
		case -419812745:
			return ":type";
		case 1134292740:
			return ":name";
		case -1445468930:
			return ":honor_requirement";
		case 327661882:
			return ":anim_scene_id";
		case 314220799:
			return ":hash";
		case 402983180:
			return ":id";
		case -1287008399:
			return ":base_id";
		case 460561235:
			return ":item";
		case -377576419:
			return ":region_id";
		case -1418408851:
			return ":region_name";
		case -1592717000:
			return ":min_posse_members";
		case -1108141625:
			return ":hour";
		default:
			break;
	}
	return "";
}

int func_976(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 497608077;
		case 1:
			return 1549541;
		case 2:
			return -1544070393;
		case 3:
			return 601477620;
		case 4:
			return 1333416092;
		case 5:
			return -1217753077;
		case 6:
			return 187579888;
		case 7:
			return -100724832;
		case 8:
			return 630918774;
		case 9:
			return 1372075093;
		case 10:
			return -1854922634;
		case 11:
			return -1519814088;
		case 12:
			return 472287195;
		case 13:
			return 1969053457;
		case 14:
			return -245080631;
		case 15:
			return 1758962534;
		case 16:
			return -607359033;
		case 17:
			return -1237276897;
		case 18:
			return 635413302;
		case 19:
			return -22626725;
		case 20:
			return 1401821022;
		case 21:
			return -789427168;
		case 22:
			return -1426815576;
		case 23:
			return 899166212;
		case 24:
			return -786270192;
		case 25:
			return 608242665;
		case 26:
			return 843787590;
		case 27:
			return 650443163;
		case 28:
			return -59088530;
		case 29:
			return -666456239;
		case 30:
			return 1591836767;
		case 31:
			return -606642812;
		case 32:
			return -34107655;
		case 33:
			return 1808784790;
		case 34:
			return -696517180;
		case 35:
			return -1363671161;
		case 36:
			return 1676892178;
		case 37:
			return -804733785;
		case 38:
			return 271069761;
		case 39:
			return 1407961884;
		case 40:
			return 773420852;
		case 41:
			return 1690645077;
		case 42:
			return 1002916547;
		case 43:
			return -1277273758;
		case 44:
			return -2079257644;
		case 45:
			return -277313798;
		case 46:
			return 223434839;
		case 47:
			return 108319586;
		case 48:
			return -339551293;
		case 49:
			return 459624884;
		case 50:
			return 830448359;
		case 51:
			return 1958896072;
		case 52:
			return 1493566732;
		case 53:
			return 409963779;
		case 54:
			return -260632549;
		case 55:
			return -986334861;
		case 56:
			return -1995351236;
		case 57:
			return -1572019582;
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

char* func_977(int iParam0)
{
	switch (iParam0)
	{
		case 497608077:
			return "entities";
		case 1549541:
			return "entity";
		case -1544070393:
			return "flags";
		case 601477620:
			return "flag";
		case 1333416092:
			return "scene";
		case -1217753077:
			return "player";
		case 187579888:
			return "playlist";
		case -100724832:
			return "volume";
		case 630918774:
			return "component";
		case 1372075093:
			return "Gun_for_Hire_Cutscene";
		case -1854922634:
			return "Givers";
		case -1519814088:
			return "giver(unlock=%x)";
		case 472287195:
			return "scene(type=%x)";
		case 1969053457:
			return "scene(%i)";
		case -245080631:
			return "entities(%i)";
		case 1758962534:
			return "entity(%i)";
		case -607359033:
			return "flags(%i)";
		case -1237276897:
			return "flags(type=%x)";
		case 635413302:
			return "flag(%i)";
		case -22626725:
			return "location_data";
		case 1401821022:
			return "origins";
		case -789427168:
			return "location(unlock=%x)";
		case -1426815576:
			return "end";
		case 899166212:
			return "positions";
		case -786270192:
			return "players";
		case 608242665:
			return "player(%i)";
		case 843787590:
			return "exceptions";
		case 650443163:
			return "playlists";
		case -59088530:
			return "playlist(%i)";
		case -666456239:
			return "volumes";
		case 1591836767:
			return "volume(%i)";
		case -606642812:
			return "component(%i)";
		case -34107655:
			return "playlist_mappings";
		case 1808784790:
			return "map(mission_playlist=%x)";
		case -696517180:
			return "scenario_mappings";
		case -1363671161:
			return "scene_type(type=%x)";
		case 1676892178:
			return "scenario_data";
		case -804733785:
			return "scenario";
		case 271069761:
			return ":type";
		case 1407961884:
			return ":model";
		case 773420852:
			return ":trigger";
		case 1690645077:
			return ":scenario_type";
		case 1002916547:
			return ":ped_id";
		case -1277273758:
			return ":handle";
		case -2079257644:
			return ":bone";
		case -277313798:
			return ":name";
		case 223434839:
			return ":section";
		case 108319586:
			return ":position";
		case -339551293:
			return ":origin";
		case 459624884:
			return ":orientation";
		case 830448359:
			return ":scale";
		case 1958896072:
			return ":radius";
		case 1493566732:
			return ":heading";
		case 409963779:
			return ":load_distance";
		case -260632549:
			return ":gameplay_cam";
		case -1572019582:
			return ":max_players";
		case -986334861:
			return ":can_reset";
		case -1995351236:
			return ":reset_props_on_end";
		default:
			break;
	}
	return "";
}

int func_978(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -735674404;
		case 1:
			return -232245152;
		case 2:
			return -1871400260;
		case 3:
			return 856637467;
		case 4:
			return -510412804;
		case 5:
			return 1200720527;
		case 6:
			return -1083105766;
		case 7:
			return -1918309560;
		case 8:
			return -1486539200;
		case 9:
			return -514504777;
		case 10:
			return 2019543834;
		case 11:
			return 1796435875;
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

char* func_979(int iParam0)
{
	switch (iParam0)
	{
		case -735674404:
			return "type";
		case -232245152:
			return "gfh_dialogue";
		case -1871400260:
			return "giver(giver=%x)";
		case 856637467:
			return "type(id=%x)";
		case -510412804:
			return "type(%i)";
		case 1200720527:
			return "line(id=%x)";
		case -1083105766:
			return "line(root=%x)";
		case -1918309560:
			return "location(id=%x)";
		case -1486539200:
			return "context(id=%x)";
		case -514504777:
			return ":subtitle_group_id";
		case 2019543834:
			return ":root";
		case 1796435875:
			return ":id";
		default:
			break;
	}
	return "";
}

int func_980(var uParam0, int iParam1)
{
	return &(uParam0->f_11[iParam1]);
}

struct<8> func_981(int iParam0, int iParam1)
{
	if (!func_795(&Var0, iParam0))
	{
		return func_1057("");
	}
	uVar5 = Var0.f_1;
	iVar9 = func_794(&Var0, 755405972);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar5;
		if (!func_793(&Var0, 764757300, iVar8, 0, 1))
		{
		}
		else
		{
			uVar6 = Var0.f_1;
			iVar11 = func_794(&Var0, -2098686824);
			iVar10 = 0;
			while (iVar10 <= (iVar11 - 1))
			{
				Var0.f_1 = uVar6;
				if (!func_793(&Var0, -516034592, iVar10, 0, 1))
				{
				}
				else
				{
					uVar7 = Var0.f_1;
					if (!func_793(&Var0, -1288148227, 0, 0, 0))
					{
					}
					else if (!func_793(&Var0, -1407177680, 0, 0, 1))
					{
					}
					else
					{
						iVar12 = func_1189(&Var0);
						if (iVar12 != iParam1)
						{
						}
						else
						{
							Var0.f_1 = uVar7;
							return func_1190(&Var0, 0);
						}
					}
				}
				iVar10++;
			}
		}
		iVar8++;
	}
	return func_1057("");
}

void func_982(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_521(uParam1))
	{
		return;
	}
	switch (uParam3->f_7)
	{
		case 2:
			func_1191(uParam0, uParam1, uParam2, uParam3);
			break;
		default:
			func_1192(uParam1, uParam2, uParam3);
			break;
	}
}

int func_983(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_11[iParam1]->f_3[iParam2]->f_1;
}

int func_984(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -473983589;
		case 1:
			return 1367437629;
		default:
			break;
	}
	return 0;
}

int func_985(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_587(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1951255)[iVar0]->f_11 && iParam1 == (*Global_1951255)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1951255[iVar0])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_588(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_986(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_11[iParam1]->f_3[iParam2]->f_1 = iParam3;
}

int func_987(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1212196772;
		case 1:
			return -400403560;
		default:
			break;
	}
	return 0;
}

int func_988(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_11[iParam1]->f_3[iParam2]);
}

void func_989(var uParam0, int iParam1, int iParam2, int iParam3)
{
	_copy_memory(&(uParam0->f_11[iParam1]->f_3[iParam2]->f_2), iParam3, 2);
}

void func_990(var uParam0, int iParam1, int iParam2)
{
	Var0 = 5;
	Var0.f_1 = -1;
	func_993(uParam0, iParam1, iParam2, &Var0);
	iVar2 = func_983(uParam0, iParam1, iParam2);
	iVar3 = func_565(iVar2);
	switch (Var0)
	{
		case 1:
			_uiprompt_set_text(iVar3, _create_var_string(2, "MOONSHINE_ACCEPT_MARKETING"));
			break;
		case 2:
			switch (Var0.f_1)
			{
				case 3:
					_uiprompt_set_text(iVar3, _create_var_string(2, "MOONSHINE_ACCEPT_SELL"));
					break;
				case 4:
					_uiprompt_set_text(iVar3, _create_var_string(2, "MOONSHINE_ACCEPT_SELL_PREFERED"));
					break;
			}
			break;
		case 0:
			switch (Var0.f_1)
			{
				case 0:
					_uiprompt_set_text(iVar3, _create_var_string(2, "MOONSHINE_ACCEPT_SETUP_RESCUE_COOK"));
					break;
				case 1:
					_uiprompt_set_text(iVar3, _create_var_string(2, "MOONSHINE_ACCEPT_SETUP_GET_SUPPLIES"));
					break;
			}
			break;
		case 3:
			_uiprompt_set_text(iVar3, func_1193(uParam0));
			break;
		default:
			break;
	}
}

int func_991(var uParam0)
{
	if (*uParam0 != player_id())
	{
		return 1;
	}
	return 0;
}

void func_992(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_983(uParam0, iParam1, iParam2);
	func_338(iVar0, !func_1194(iParam3), 1, 0);
	func_968(iVar0, !func_1195(iParam3), 0);
}

void func_993(var uParam0, int iParam1, int iParam2, int iParam3)
{
	_copy_memory(iParam3, &(uParam0->f_11[iParam1]->f_3[iParam2]->f_2), 2);
}

int func_994(var uParam0, int iParam1, int iParam2)
{
	iVar1 = player_id();
	if (*uParam0 != iVar1)
	{
		return 1;
	}
	if (func_542(&(uParam0->f_385)) != 0)
	{
		return 3;
	}
	iVar2 = func_980(&(uParam0->f_385), iParam1);
	if (_0x3ab6c7b0bb0df4b1(iVar2, -1))
	{
		return 26;
	}
	iVar0 = func_1196(func_1073(&(uParam0->f_385), iParam1), iParam2);
	if (iVar0 != 0)
	{
		if (iParam1 == 0)
		{
			switch (iVar0)
			{
				case 5:
					if (func_1197(&(uParam0->f_385)))
					{
						func_79(903, 0);
					}
					else
					{
						func_79(902, 0);
					}
					break;
				case 20:
					func_1198(-551064688);
					break;
			}
		}
		switch (iVar0)
		{
			case 8:
				func_1199(&(uParam0->f_385), 1);
				break;
		}
		return iVar0;
	}
	if (iParam2 & 2 == 0)
	{
		iVar3 = func_980(&(uParam0->f_385), iParam1);
		if (is_any_speech_playing(iVar3))
		{
			return 16;
		}
	}
	if (iParam2 & 64 == 0)
	{
		if (func_1197(&(uParam0->f_385)))
		{
			if (iParam1 == 0)
			{
				func_79(901, 0);
			}
			return 6;
		}
	}
	if (Global_1298000->f_40)
	{
		return 28;
	}
	return 0;
}

bool func_995(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_983(uParam0, iParam1, iParam2);
	return func_1200(iVar0, 1);
}

void func_996(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		iVar2 = iVar0;
		iVar1 = 0;
		while (iVar1 <= (2 - 1))
		{
			iVar3 = iVar1;
			if (func_341(iVar4))
			{
				iVar4 = func_983(uParam0, iVar2, iVar3);
				func_338(iVar4, !func_1195(iParam1), 1, 0);
				func_968(iVar4, !func_1194(iParam1), 0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_997(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_983(uParam0, iParam1, iParam2);
	func_1201(iVar0, 1);
}

void func_998(var uParam0, int iParam1, int iParam2)
{
	Var0 = 5;
	Var0.f_1 = -1;
	func_989(uParam0, iParam1, iParam2, &Var0);
}

int func_999(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1000(int iParam0)
{
	return _unlock_is_unlocked(func_987(iParam0));
}

var func_1001(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1002(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

void func_1003(int iParam0, int iParam1)
{
	Var3.f_5 = 255;
	Var3.f_7 = -1;
	Var3.f_9 = 7;
	Var3.f_19 = -1;
	Var3.f_19.f_1 = -1;
	Var3.f_4 = 4;
	Var3.f_7 = iParam0;
	Var3.f_8 = iParam1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!_network_is_player_index_valid(iVar0))
		{
		}
		else if (!network_is_player_active(iVar0))
		{
		}
		else if (network_is_player_a_participant(iVar0))
		{
		}
		else
		{
			_0x31010318ba9897ac(&uVar2, iVar0);
		}
		iVar1++;
	}
	func_1202(&Var3, uVar2);
}

void func_1004(int iParam0, int iParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	iVar0 = player_id();
	if (!_0x424b17a7dc5c90bc(iVar0))
	{
		return;
	}
	iVar1 = _0x901e0dc25080c8b9(iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	Var4.f_5 = 255;
	Var4.f_7 = -1;
	Var4.f_9 = 7;
	Var4.f_19 = -1;
	Var4.f_19.f_1 = -1;
	Var4.f_4 = 4;
	Var4.f_6 = iVar1;
	Var4.f_7 = iParam0;
	Var4.f_8 = iParam1;
	Var4.f_19 = { Param2 };
	Var4.f_23 = iParam4;
	Var4.f_24 = iParam5;
	Var4.f_21 = iParam6;
	Var4.f_22 = iParam7;
	Var4.f_25 = iParam8;
	Var4.f_9[0] = iVar0;
	_0x31010318ba9897ac(&(Var4.f_9.f_8), iVar0);
	_0x31010318ba9897ac(&uVar3, iVar0);
	iVar2++;
	Var4.f_9.f_9 = iVar2;
	func_1202(&Var4, uVar3);
}

void func_1005(int iParam0, int iParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	iVar0 = player_id();
	if (!_0x424b17a7dc5c90bc(iVar0))
	{
		return;
	}
	iVar2 = _0x901e0dc25080c8b9(iVar0);
	if (iVar2 == 0)
	{
		return;
	}
	Var7.f_5 = 255;
	Var7.f_7 = -1;
	Var7.f_9 = 7;
	Var7.f_19 = -1;
	Var7.f_19.f_1 = -1;
	Var7.f_4 = 4;
	Var7.f_6 = iVar2;
	Var7.f_7 = iParam0;
	Var7.f_8 = iParam1;
	Var7.f_19 = { Param2 };
	Var7.f_23 = iParam4;
	Var7.f_24 = iParam5;
	Var7.f_21 = iParam6;
	Var7.f_22 = iParam7;
	Var7.f_25 = iParam8;
	Var7.f_9[0] = iVar0;
	_0x31010318ba9897ac(&(Var7.f_9.f_8), iVar0);
	_0x31010318ba9897ac(&uVar6, iVar0);
	iVar5++;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		if (iVar5 >= 7)
		{
		}
		else
		{
			iVar1 = int_to_playerindex(iVar4);
			if (!_network_is_player_index_valid(iVar1))
			{
			}
			else if (!network_is_player_active(iVar1))
			{
			}
			else if (iVar1 == iVar0)
			{
			}
			else
			{
				iVar3 = _0x901e0dc25080c8b9(iVar1);
				if (iVar2 != iVar3)
				{
				}
				else
				{
					Var7.f_9[iVar5] = iVar1;
					_0x31010318ba9897ac(&uVar6, iVar1);
					if (network_is_player_a_participant(iVar1))
					{
						_0x31010318ba9897ac(&(Var7.f_9.f_8), iVar1);
					}
					iVar5++;
				}
			}
			iVar4++;
		}
	}
	Var7.f_9.f_9 = iVar5;
	func_1202(&Var7, uVar6);
}

void func_1006(var uParam0, int iParam1)
{
	(*uParam0)[participant_id_to_int()]->f_22.f_1 = iParam1;
}

void func_1007(int iParam0)
{
	iVar0 = player_id();
	(*Global_1128574)[iVar0]->f_34 = ((*Global_1128574)[iVar0]->f_34 || iParam0);
}

int func_1008(var uParam0)
{
	return uParam0->f_81.f_1;
}

int func_1009(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_81.f_21.f_1;
		case 1:
			return uParam0->f_81.f_26.f_1;
		case 2:
			return uParam0->f_81.f_34.f_1;
		case 3:
			return uParam0->f_81.f_30.f_1;
		default:
			break;
	}
	return 0;
}

struct<8> func_1010(int iParam0, int iParam1)
{
	if (!func_795(&uVar0, iParam0))
	{
		return func_1057("");
	}
	if (!func_793(&uVar0, -1959657965, 0, 0, 1))
	{
		return func_1057("");
	}
	if (!func_793(&uVar0, -2076458458, iParam1, 0, 1))
	{
		return func_1057("");
	}
	return func_1059(&uVar0);
}

int func_1011(var uParam0)
{
	return uParam0->f_81.f_42;
}

bool func_1012(var uParam0, int iParam1)
{
	return (uParam0->f_81.f_2 && iParam1) != 0;
}

Vector3 func_1013(var uParam0)
{
	return uParam0->f_81.f_42.f_3;
}

int func_1014(var uParam0)
{
	return uParam0->f_81.f_42.f_7;
}

int func_1015(var uParam0)
{
	return uParam0->f_81.f_42.f_6;
}

int func_1016(var uParam0)
{
	return uParam0->f_81.f_42.f_1;
}

char* func_1017(int iParam0)
{
	switch (iParam0)
	{
		case 1766283257:
			return "MAGGIE";
		case -408236271:
			return "MARCEL";
		default:
			break;
	}
	return "";
}

void func_1018(var uParam0, int iParam1)
{
	uParam0->f_81.f_42.f_7 = iParam1;
}

void func_1019(var uParam0, int iParam1)
{
	uParam0->f_81.f_2 = (uParam0->f_81.f_2 || iParam1);
}

int func_1020(int iParam0)
{
	switch (iParam0)
	{
		case 1766283257:
			return -703939862;
		case -408236271:
			return -408236271;
		default:
			break;
	}
	return 0;
}

int func_1021(var uParam0)
{
	return uParam0->f_81.f_42.f_2;
}

Vector3 func_1022(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	if (iParam3 == 0)
	{
		*bParam4 = 1;
		return vVar2;
	}
	if (!func_1203(&vVar21, uParam0, iParam2, iParam3, iParam1))
	{
		*bParam4 = 1;
		return vVar2;
	}
	vVar21.f_2 = 2019543834;
	_datafile_get_hash(&iVar0, &vVar21);
	_datafile_get_string(&uVar13, &vVar21);
	if (func_1076(iParam5) && func_1205(&vVar21, func_1204(iParam5)))
	{
		vVar21.f_2 = 2019543834;
		_datafile_get_hash(&iVar1, &vVar21);
		_datafile_get_string(&uVar5, &vVar21);
	}
	if (iVar0 == 0 && iVar1 == 0)
	{
		*bParam4 = 1;
		return vVar2;
	}
	*bParam4 = 0;
	return func_1207(func_1206(iVar1 != 0, &uVar5, &uVar13));
}

void func_1023(var uParam0, vector3 vParam1)
{
	uParam0->f_81.f_42.f_3 = { vParam1 };
}

struct<14> func_1024(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if (!func_1208(&Var0, iParam0, iParam1, iParam2))
	{
		return Var5;
	}
	Var5 = { func_1190(&Var0, iParam4) };
	Var5.f_8 = func_1209(Var0);
	Var5.f_9 = { func_1210(Var0, uParam3) };
	return Var5;
}

int func_1025(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar2 = create_itemset(true);
	switch (iParam1)
	{
		case -1918820073:
			iVar4 = 1;
			break;
		case -2007566758:
			iVar4 = 3;
			break;
	}
	iVar1 = _0x59b57c4b06531e1e(uParam0->f_1, uParam0->f_4, iVar2, iVar4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar3 = get_indexed_item_in_itemset(iVar0, iVar2);
		iVar6 = _get_entity_from_item(iVar3);
		if (!does_entity_exist(iVar6))
		{
		}
		else
		{
			iVar7 = get_entity_model(iVar6);
			if (iVar7 != *uParam0)
			{
			}
			else
			{
				if (is_entity_visible(iVar6))
				{
					if (bParam2)
					{
					}
					else
					{
						Jump @154; //curOff = 143
						if (bParam3)
						{
						}
						else
						{
							iVar5 = iVar6;
						}
						else
						{
							iVar0++;
						}
						destroy_itemset(iVar2);
						return iVar5;
					}
				}
			}
		}
	}
}

void func_1026(var uParam0, int iParam1)
{
	uParam0->f_81.f_42.f_6 = iParam1;
}

void func_1027(var uParam0, int iParam1)
{
	uParam0->f_81.f_42.f_8 = iParam1;
}

int func_1028(var uParam0)
{
	return uParam0->f_81.f_42.f_8;
}

bool func_1029(var uParam0, var uParam1, int iParam2)
{
	iVar2 = func_817(uParam0, iParam2);
	iVar3 = func_525(uParam0, iParam2);
	iVar1 = func_1033(iVar3, -2007566758);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var5 = { func_1024(iVar3, -2007566758, iVar0, uParam1->f_2, 0) };
		iVar4 = func_1025(&(Var5.f_9), -2007566758, 0, 1);
		if (!does_entity_exist(iVar4))
		{
		}
		else
		{
			set_anim_scene_entity(iVar2, &Var5, iVar4, Var5.f_8);
		}
		iVar0++;
	}
	return true;
}

bool func_1030(var uParam0, var uParam1, int iParam2)
{
	iVar2 = func_817(uParam0, iParam2);
	iVar3 = func_525(uParam0, iParam2);
	iVar1 = func_1033(iVar3, -1918820073);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var5 = { func_1024(iVar3, -1918820073, iVar0, uParam1->f_2, 0) };
		iVar4 = func_1025(&(Var5.f_9), -1918820073, 0, 1);
		if (!does_entity_exist(iVar4))
		{
		}
		else
		{
			set_anim_scene_entity(iVar2, &Var5, iVar4, Var5.f_8);
		}
		iVar0++;
	}
	return true;
}

bool func_1031(var uParam0, var uParam1, int iParam2)
{
	iVar1 = func_1033(func_525(uParam0, iParam2), 591508004);
	if (iVar1 <= 0)
	{
		return true;
	}
	iVar2 = func_1212(func_1211(uParam0), 0, iVar1);
	iVar4 = func_817(uParam0, iParam2);
	iVar3 = func_525(uParam0, iParam2);
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (func_1213(iVar3, iVar0))
		{
			if (!func_1214(uParam0, iVar0))
			{
			}
			else
			{
				iVar20 = func_827(uParam0, iVar0);
				if (!does_entity_exist(iVar20))
				{
				}
				else
				{
					Jump @199; //curOff = 130
					iVar21 = func_1215(uParam0, iVar0);
					if (iVar21 == 255)
					{
					}
					else if (!_network_is_player_index_valid(iVar21))
					{
					}
					else if (!network_is_player_active(iVar21))
					{
					}
					else if (is_player_dead(iVar21))
					{
					}
					else
					{
						iVar20 = get_player_ped(iVar21);
						if (is_ped_male(iVar20))
						{
							iVar19 = 1;
						}
						else
						{
							iVar19 = 2;
						}
						Var5 = { func_1024(iVar3, 591508004, iVar0, uParam1->f_2, iVar19) };
						set_anim_scene_entity(iVar4, &Var5, iVar20, Var5.f_8);
					}
				}
			}
			iVar0++;
			return true;
		}
	}
}

void func_1032()
{
	func_38(0);
	_close_all_apps();
	func_1216(0, 0, 1);
	func_1217();
	_0xc9caeaeec1256e54(-1679307491);
	_uiprompt_enable_prompt_type_this_frame(6);
}

int func_1033(int iParam0, int iParam1)
{
	if (!func_792(&uVar0))
	{
		return 0;
	}
	if (!func_793(&uVar0, -999926214, 0, 0, 1))
	{
		return 0;
	}
	if (!func_793(&uVar0, -789055036, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_793(&uVar0, -6195722, iParam1, 0, 0))
	{
		return 0;
	}
	return func_794(&uVar0, -2098686824);
}

struct<8> func_1034(int iParam0, int iParam1, int iParam2)
{
	if (!func_1208(&uVar0, iParam0, iParam1, iParam2))
	{
		return func_1057("");
	}
	return func_1190(&uVar0, 0);
}

int func_1035(int iParam0)
{
	if (!func_792(&uVar0))
	{
		return 0;
	}
	if (!func_793(&uVar0, -999926214, 0, 0, 1))
	{
		return 0;
	}
	if (!func_793(&uVar0, -789055036, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_793(&uVar0, -68812221, 0, 0, 0))
	{
		return 0;
	}
	return func_794(&uVar0, -1708292956);
}

struct<5> func_1036(int iParam0, int iParam1, var uParam2)
{
	if (!func_795(&Var0, iParam0))
	{
		return Var5;
	}
	if (!func_793(&Var0, -68812221, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_793(&Var0, -1398443291, iParam1, 0, 1))
	{
		return Var5;
	}
	return func_1210(Var0, uParam2);
}

void func_1037(int iParam0)
{
	Global_1109804->f_21.f_12.f_2 = iParam0;
}

int func_1038()
{
	return Global_1109804->f_21.f_12.f_4;
}

int func_1039(var uParam0, int iParam1)
{
	if (!func_1050(iParam1))
	{
		return -1;
	}
	return (*uParam0)[network_get_participant_index(iParam1)]->f_22.f_1;
}

void func_1040(var uParam0, int iParam1)
{
	_0x31010318ba9897ac(&(uParam0->f_81.f_9), iParam1);
}

void func_1041(var uParam0, int iParam1)
{
	_0xd426e2e3288469d6(&(uParam0->f_81.f_9), iParam1);
}

bool func_1042(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

void func_1043(var uParam0)
{
	_copy_memory(&(uParam0->f_81.f_42), &uVar0, 9);
}

bool func_1044(int iParam0, int iParam1)
{
	return ((*Global_1128574)[iParam0]->f_34 && iParam1) != 0;
}

void func_1045(var uParam0, int iParam1)
{
	uParam0->f_81.f_8 = iParam1;
}

void func_1046(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			func_1218(&(uParam0->f_81.f_34.f_6), iParam2, iParam1);
			break;
		default:
			break;
	}
}

void func_1047(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			func_1219(&(uParam0->f_81.f_34.f_4), iParam2, iParam1);
			break;
		default:
			break;
	}
}

void func_1048(var uParam0, int iParam1)
{
	uParam0->f_81.f_2 = (uParam0->f_81.f_2 - (uParam0->f_81.f_2 && iParam1));
}

int func_1049(var uParam0)
{
	return uParam0->f_81.f_10;
}

bool func_1050(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (!network_is_player_a_participant(iParam0))
	{
		return false;
	}
	return true;
}

bool func_1051(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_752(uParam0))
	{
		return false;
	}
	if (!func_753(uParam0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_753(uParam0, 17, 0, 0, 1))
	{
		return false;
	}
	if (!func_753(uParam0, 19, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_753(uParam0, 20, 0, 0, 1))
	{
		return false;
	}
	if (!func_753(uParam0, 23, iParam2, 0, 1))
	{
		return false;
	}
	if (!func_753(uParam0, 52, 0, 0, 0))
	{
		return false;
	}
	if (!func_753(uParam0, 53, iParam3, 0, 0))
	{
		return false;
	}
	return true;
}

int func_1052(var uParam0)
{
	return func_970(uParam0, 84, 1);
}

bool func_1053(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (!func_1220(uParam0, uParam4, iParam1))
	{
		return false;
	}
	iVar1 = func_1221(*uParam0, 1333416092);
	uVar3 = uParam0->f_1;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		uParam0->f_1 = uVar3;
		if (!func_1222(uParam0, iVar0))
		{
		}
		else
		{
			iVar2 = func_1223(*uParam0);
			if (iParam3 != func_1224(iVar2))
			{
			}
			else if (func_1225(*uParam0, iParam2))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

var func_1054(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = -1277273758;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

void func_1055(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

void func_1056(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

struct<8> func_1057(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

struct<8> func_1058(var uParam0)
{
	return func_1226(uParam0, 613568612, 1);
}

struct<8> func_1059(var uParam0)
{
	return func_1226(uParam0, -27879544, 1);
}

int func_1060(var uParam0)
{
	return func_1227(func_1002(uParam0, 613568612, 1));
}

void func_1061(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

void func_1062(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

bool func_1063(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_213(iParam2);
	if (!func_795(uParam0, iParam1))
	{
		return false;
	}
	if (!func_793(uParam0, -828826821, 0, 0, 1))
	{
		return false;
	}
	if (!func_793(uParam0, -1188309159, iVar0, 0, 1))
	{
		return false;
	}
	return true;
}

Vector3 func_1064(var uParam0)
{
	return func_1228(uParam0, -1599170465, 1);
}

Vector3 func_1065(var uParam0)
{
	return func_1228(uParam0, 701782291, 1);
}

void func_1066(var uParam0, int iParam1, int iParam2)
{
	_copy_memory(&(uParam0->f_75), iParam1, 2);
	_copy_memory(&(uParam0->f_77), iParam2, 4);
}

int func_1067(var uParam0)
{
	return func_970(uParam0, 85, 1);
}

bool func_1068(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1229(uParam0, uParam1))
	{
		return false;
	}
	if (!func_1230(uParam0, iParam2, iParam3))
	{
		return false;
	}
	return true;
}

int func_1069(var uParam0)
{
	return func_970(uParam0, 86, 1);
}

var func_1070(int iParam0, int iParam1)
{
	if (!func_752(&uVar0))
	{
		return 0;
	}
	if (!func_753(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_1231(&uVar0);
}

int func_1071(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var12 = 255;
	Var12.f_18 = 2147483647;
	Var12.f_21.f_2 = -504335712;
	Var12.f_21.f_4 = 3;
	Var12.f_26 = -1;
	Var12.f_30 = 1;
	Var12.f_31 = 1;
	Var12.f_32 = 1;
	Var12.f_33 = 32;
	Var12.f_34 = 1;
	Var12.f_35 = -2;
	Var12.f_47.f_5 = -1;
	Var12.f_53 = -1;
	Var12.f_53.f_1 = -1;
	Var12.f_55.f_3 = -1;
	Var0 = { func_1232(iParam0, 7) };
	iVar9 = func_1233(iParam0);
	iVar10 = func_498(iVar9);
	iVar11 = func_1234(iVar9, iParam0);
	iVar79 = func_504(iVar10, iVar11);
	if (iVar79 == 0)
	{
		return 0;
	}
	if (!func_1235(&Var12, iVar79, -1, -1, 3))
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iVar8 = func_1236(iVar9, iParam0);
	}
	else
	{
		iVar8 = iParam3;
	}
	Var0.f_3 = iVar10;
	Var0.f_3.f_1 = iVar11;
	Var0.f_3.f_2 = iVar8;
	Var0.f_3.f_3 = func_1237(iVar9, iParam1);
	Var0.f_3.f_4 = iParam2;
	iVar76 = func_1238(iVar9, iParam0, iParam2);
	iVar78 = func_1239(iVar9, iParam0, iParam2);
	iVar77 = func_1240(iVar9, iParam0, iParam2);
	Var12.f_53 = { Var0 };
	iVar80 = func_1241(&(Var0.f_3));
	func_1242(iVar78);
	func_1243(Var12, Var12.f_53, iVar76, iVar77, iVar80);
	return 1;
}

int func_1072(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 0:
			return 0;
		case 3:
			return 0;
		default:
			break;
	}
	return -1;
}

int func_1073(var uParam0, int iParam1)
{
	return uParam0->f_11[iParam1]->f_1;
}

int func_1074(int iParam0)
{
	return func_751(14, iParam0);
}

bool func_1075(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

bool func_1076(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

int func_1077(int iParam0)
{
	Var0 = { func_760(-746839750, func_1244(iParam0)) };
	return func_1245(Var0);
}

int func_1078(int iParam0)
{
	Var0 = { func_760(-1808811965, func_1244(iParam0)) };
	return func_1246(Var0);
}

int func_1079(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_1247(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1080(int iParam0, var uParam1)
{
	if (!_0x7907969497ea92f5(uParam1))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(uParam1))
	{
		return false;
	}
	_copy_memory(iParam0, &uVar0, 5);
	*iParam0 = uParam1;
	return true;
}

bool func_1081(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!_datafile_get_data_node_index(iParam5, &Param0))
	{
		return false;
	}
	return true;
}

int func_1082(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return _datafile_get_num_nodes(&vParam0);
}

void func_1083(var uParam0, int iParam1, bool bParam2)
{
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = get_random_int_in_range(0, iVar2);
		uVar0 = uParam0[iVar2];
		(*uParam0)[iVar2] = uParam0[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

bool func_1084(var uParam0, int iParam1, var uParam2)
{
	if (!func_1248(uParam0, iParam1))
	{
		return false;
	}
	if (!func_1249(uParam0, uParam2))
	{
		return false;
	}
	return true;
}

int func_1085(int iParam0)
{
	return &(Global_1109804->f_5737[iParam0]);
}

int func_1086(int iParam0)
{
	return func_1250(iParam0);
}

int func_1087(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -531996999;
		case 1:
			return 456791065;
		case 2:
			return -1318406457;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_1088(int iParam0, int iParam1)
{
	return func_1251(&(Global_1109804->f_5737[iParam0]->f_2), iParam1);
}

bool func_1089(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_1252(&uVar0, uParam0))
	{
		return false;
	}
	return func_1253(&uVar0, uParam1, uParam2, iParam3);
}

int func_1090(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -761617270;
		case 1:
			return -1067974651;
		default:
			break;
	}
	return 0;
}

bool func_1091(var uParam0, int iParam1)
{
	return func_871(uParam0, func_1254(iParam1, 1), 1);
}

int func_1092(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1255(iParam0);
	}
	return func_1256(iParam0);
}

bool func_1093(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	iVar0 = func_1085(uParam0->f_2);
	iVar1 = func_1257(iVar0);
	if (iParam8 == -1)
	{
		iVar2 = func_1258(iParam5);
	}
	else
	{
		iVar2 = iParam8;
	}
	*iParam6 = 0;
	*iParam6 = func_1259(uParam0);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1260(iVar2, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1261(uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1262(uParam0, iParam1, uParam2, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1263(uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1264(iVar2, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1265(uParam0, iVar2, iParam3, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1266(uParam0, iParam3, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1267(iParam3, iParam4, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1268(iParam3);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1269(iParam3, uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1270(uParam0, iParam3, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1271(uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1272(uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_1273(iParam3, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	switch (iVar1)
	{
		case 2:
			*iParam6 = func_1274(uParam0, iParam7, iParam3, iVar2, iParam5);
			break;
		case 1:
			*iParam6 = func_1275(uParam0, iParam7);
			break;
		case 0:
			*iParam6 = func_1276(uParam0, iParam7, iParam3);
			break;
		default:
			*iParam6 = 45;
			break;
	}
	return *iParam6 != 0;
}

void func_1094(var uParam0, int iParam1)
{
	if (func_907(uParam0, func_1254(iParam1, 1), 1))
	{
	}
}

void func_1095(var uParam0, int iParam1)
{
	_copy_memory(&(uParam0->f_36), iParam1, 33);
}

var func_1096(var uParam0)
{
	return &(uParam0->f_36.f_4[7]);
}

int func_1097(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_1053(&Var0, iParam0, iParam1, iParam2, uParam4))
	{
		return 0;
	}
	if (!func_1277(&Var0))
	{
		return 0;
	}
	if (!func_1278(&Var0, uParam3, 0))
	{
		return 0;
	}
	return func_1279(Var0);
}

bool func_1098()
{
	return (func_1280() || func_1281());
}

void func_1099(int iParam0, int iParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	uVar31 = func_965(0, 8);
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = _0x901e0dc25080c8b9(player_id());
	Var0.f_4 = 3;
	Var0.f_9 = uParam3;
	Var0.f_14 = iParam2;
	Var0.f_7 = { Param4 };
	Var0.f_13 = iParam10;
	_copy_memory(&(Var0.f_27), &iParam6, 4);
	vVar32 = { func_1282(iParam0) };
	uVar35 = func_1283(iParam0);
	func_1284(&(Var0.f_19), Var0.f_11, vVar32, uVar35);
	func_1285(&Var0, uVar31);
}

int func_1100(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_1286(uParam0, &uVar0, iParam2, 0, 0, *uParam3))
	{
		return 0;
	}
	func_1287(iParam1, iParam2, *uParam0, uParam0->f_2, *uParam3, player_id(), 0, 0);
	return 1;
}

bool func_1101(int iParam0)
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

int func_1102(int iParam0)
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

void func_1103(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!get_event_data(1, iParam3, &Var0, 7))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 0:
			if (!bParam4)
			{
				return;
			}
			if (func_326(&(uParam0->f_58)) == 0)
			{
				if (Var0.f_6 != -1)
				{
					func_689(&(uParam0->f_58.f_76));
				}
				func_1288(&(uParam0->f_58), 2);
				func_1289(&(uParam0->f_58), 1);
			}
			break;
		case 2:
			if (!bParam4)
			{
				return;
			}
			if (func_326(&(uParam0->f_58)) == 2 && !func_1290(&(uParam0->f_58), 4))
			{
				func_1288(&(uParam0->f_58), 4);
			}
			break;
		case 6:
			if (!bParam4)
			{
				return;
			}
			iVar7 = Var0.f_5;
			if ((!func_582(uParam0->f_58.f_3[iVar7]->f_3) && func_582(Var0.f_1)) && !func_1129(&(uParam0->f_58), Var0.f_1))
			{
				uParam0->f_58.f_3[iVar7]->f_3 = Var0.f_1;
				if (Var0.f_6 == 1)
				{
					uParam0->f_58.f_3[iVar7]->f_8 = 1;
				}
				else
				{
					uParam0->f_58.f_3[iVar7]->f_8 = 0;
				}
				func_1291(&(uParam0->f_58), iVar7, "GENERIC_YES", 0);
				func_1292(&(uParam0->f_58.f_81), 1);
			}
			break;
		case 7:
			if (!bParam4)
			{
				return;
			}
			iVar7 = Var0.f_5;
			if ((!func_582(uParam0->f_58.f_3[iVar7]->f_3) && func_582(Var0.f_1)) && !func_1129(&(uParam0->f_58), Var0.f_1))
			{
				if (func_581(&(uParam0->f_58), iVar7) != 2 && func_581(&(uParam0->f_58), iVar7) != 1)
				{
					return;
				}
				if (func_581(&(uParam0->f_58), iVar7) == 2)
				{
					func_1293(&(uParam0->f_58), iVar7, 1);
					if (func_465(&(uParam0->f_58.f_3[iVar7]->f_9)))
					{
						func_466(&(uParam0->f_58.f_3[iVar7]->f_9));
					}
				}
				func_1292(&(uParam0->f_58.f_81), 1);
				uParam0->f_58.f_3[iVar7]->f_3 = Var0.f_1;
			}
			break;
		case 8:
			if (!bParam4)
			{
				return;
			}
			iVar7 = Var0.f_5;
			if (func_582(uParam0->f_58.f_3[iVar7]->f_3) && func_582(Var0.f_1))
			{
				if (Var0.f_1 == uParam0->f_58.f_3[iVar7]->f_3)
				{
					uParam0->f_58.f_3[iVar7]->f_3 = 255;
					func_1291(&(uParam0->f_58), iVar7, "GENERIC_THANKS", 1);
					func_1292(&(uParam0->f_58.f_81), 2);
				}
			}
			break;
		case 5:
			if (!bParam4)
			{
				return;
			}
			if ((func_326(&(uParam0->f_58)) == 3 || func_326(&(uParam0->f_58)) == 1) || func_326(&(uParam0->f_58)) == 4)
			{
				func_1289(&(uParam0->f_58), 0);
			}
			break;
		case 1:
			if (!bParam4)
			{
				return;
			}
			if (func_326(&(uParam0->f_58)) == 2)
			{
				func_1289(&(uParam0->f_58), 4);
			}
			break;
		case 4:
			if (!bParam4)
			{
				return;
			}
			if (func_326(&(uParam0->f_58)) == 2)
			{
				func_1289(&(uParam0->f_58), 3);
			}
			break;
		case 3:
			if (!bParam4)
			{
				return;
			}
			if (func_326(&(uParam0->f_58)) == 1 || func_326(&(uParam0->f_58)) == 3)
			{
				func_1289(&(uParam0->f_58), 2);
			}
			break;
	}
}

void func_1104()
{
	request_model(-1157809126, false);
	request_model(997972179, false);
	request_model(-2073417944, false);
	request_model(-1694359093, false);
	request_model(-794964047, false);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			iVar2 = func_1112(iVar0, iVar1);
			if (iVar2 != 0)
			{
				request_model(iVar2, false);
			}
			iVar1++;
		}
		iVar3 = func_111(iVar0, 0);
		_request_scenario_type(iVar3, 1, 0, 0);
		iVar3 = func_111(iVar0, 1);
		_request_scenario_type(iVar3, 3, 0, 0);
		iVar3 = func_111(iVar0, 2);
		_request_scenario_type(iVar3, 1, 0, 0);
		iVar0++;
	}
	_0xd9130842d7226045("Moonshine_Band_sounds", 0);
}

void func_1105(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_1106(var uParam0)
{
	if (!func_1294(1))
	{
		return false;
	}
	return true;
}

int func_1107(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_1295(uParam0, iVar0, uParam1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_1108(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		func_1296(uParam0, iVar0);
		iVar0++;
	}
	return 1;
}

bool func_1109(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (func_1113(uParam0, iVar0, uParam2, uParam1, iVar1, 1))
			{
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	return true;
}

void func_1110(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_582(uParam0->f_3[iVar0]->f_3))
		{
			iVar1 = get_player_ped(uParam0->f_3[iVar0]->f_3);
		}
		else
		{
			iVar1 = net_to_ped(uParam0->f_3[iVar0]->f_1);
		}
		if (_0xbe28db99556ff8d9(iVar1) == 978192019)
		{
			if (_0xd05a460328560477(iVar1) != 0)
			{
				uParam0->f_80 = _0x886657c5b3d8ede3(iVar1);
				uParam0->f_79 = _0x2dbbf0c5e19383ee(iVar1);
				if (uParam2->f_102 != uParam0->f_79)
				{
				}
				uParam2->f_102 = uParam0->f_79;
			}
			else
			{
				iVar0++;
			}
			switch (func_326(uParam0))
			{
				case 0:
					break;
				case 1:
					if (!func_465(&(uParam0->f_76)))
					{
						return;
					}
					if (func_484(&(uParam0->f_76)) >= 12f)
					{
						func_466(&(uParam0->f_76));
						func_1289(uParam0, 2);
					}
					break;
				case 2:
					if (func_1290(uParam0, 4))
					{
						if (!func_325(uParam0, 0))
						{
							func_1297(uParam0, 4);
							func_444(&(uParam0->f_76), 0);
							func_1289(uParam0, 4);
						}
					}
					break;
				case 3:
					break;
				case 4:
					if (func_484(&(uParam0->f_76)) >= 12f)
					{
						func_1297(uParam0, 2);
						func_466(&(uParam0->f_76));
						func_1289(uParam0, 0);
					}
					break;
			}
		}
	}
}

int func_1111(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = net_to_ped(uParam0->f_3[iParam3]->f_1);
	iVar3 = _0xa6c0787443c9583e(uParam0->f_3[iParam3]->f_1);
	if (network_is_player_active(iVar3))
	{
		iVar4 = network_get_participant_index(iVar3);
		if (func_47(iVar4) && network_is_participant_active(iVar4))
		{
			iVar2 = &(*uParam1)[iVar4]->f_2[iParam3];
		}
	}
	if (uParam0->f_3[iParam3]->f_3 != 255 && !func_582(uParam0->f_3[iParam3]->f_3))
	{
		uParam0->f_3[iParam3]->f_3 = 255;
		if (func_581(uParam0, iParam3) == 2)
		{
			func_689(&(uParam0->f_3[iParam3]->f_9));
		}
	}
	bVar5 = true;
	switch (func_581(uParam0, iParam3))
	{
		case 0:
			func_1293(uParam0, iParam3, 1);
			break;
		case 1:
			if (!_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_3[iParam3]->f_2)))
			{
				func_1296(uParam0, iParam3);
			}
			if (func_582(uParam0->f_3[iParam3]->f_3))
			{
				iVar1 = get_player_ped(uParam0->f_3[iParam3]->f_3);
				if (_get_scenario_point_type_ped_is_using(iVar1) == func_111(iParam3, 1))
				{
					func_1293(uParam0, iParam3, 2);
				}
			}
			else if (func_326(uParam0) == 1)
			{
				func_1293(uParam0, iParam3, 3);
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_3[iParam3]->f_2)))
			{
				func_1296(uParam0, iParam3);
			}
			iVar1 = get_player_ped(uParam0->f_3[iParam3]->f_3);
			if (!func_582(uParam0->f_3[iParam3]->f_3) || _get_scenario_point_type_ped_is_using(iVar1) != func_111(iParam3, 1))
			{
				uParam0->f_3[iParam3]->f_3 = 255;
				iVar6 = _get_ped_using_scenario_point((*uParam2)[iParam3][1]);
				if (!is_entity_dead(iVar6) && iVar6 != iVar0)
				{
					return 0;
				}
				if (func_1298(uParam2, iParam3, 0, 0))
				{
					if (func_465(&(uParam0->f_3[iParam3]->f_9)))
					{
						func_466(&(uParam0->f_3[iParam3]->f_9));
					}
					return 0;
				}
				if (!func_465(&(uParam0->f_3[iParam3]->f_9)))
				{
					func_689(&(uParam0->f_3[iParam3]->f_9));
				}
				if (func_484(&(uParam0->f_3[iParam3]->f_9)) > 3f)
				{
					iVar7 = func_326(uParam0);
					func_466(&(uParam0->f_3[iParam3]->f_9));
					if (iVar7 == 2)
					{
						func_1293(uParam0, iParam3, 6);
					}
					else if (iVar7 == 1)
					{
						func_1293(uParam0, iParam3, 3);
					}
					else if (iVar7 == 3)
					{
						func_1293(uParam0, iParam3, 4);
					}
					else if (iVar7 == 0 || iVar7 == 4)
					{
						func_1293(uParam0, iParam3, 1);
					}
				}
			}
			else if (func_465(&(uParam0->f_3[iParam3]->f_9)))
			{
				func_466(&(uParam0->f_3[iParam3]->f_9));
			}
			break;
		case 3:
		case 4:
		case 5:
			if (!_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_3[iParam3]->f_2)))
			{
				func_1296(uParam0, iParam3);
			}
			if (_get_scenario_point_type_ped_is_using(iVar0) == func_111(iParam3, 1) && is_ped_active_in_scenario(iVar0, 0))
			{
				if (iVar2 == func_1300(iParam3, func_581(uParam0, iParam3), bVar5, func_1299(iParam3)))
				{
					if (func_326(uParam0) == 2)
					{
						func_1293(uParam0, iParam3, 6);
					}
					else if (func_326(uParam0) == 0)
					{
						func_1293(uParam0, iParam3, 1);
					}
					else if (func_582(uParam0->f_3[iParam3]->f_3))
					{
						func_689(&(uParam0->f_3[iParam3]->f_9));
						func_1293(uParam0, iParam3, 8);
					}
				}
			}
			break;
		case 6:
			if (!_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_3[iParam3]->f_2)))
			{
				func_1296(uParam0, iParam3);
			}
			if (_get_scenario_point_type_ped_is_using(iVar0) == func_111(iParam3, 1))
			{
				if (!is_ped_active_in_scenario(iVar0, 0))
				{
					return 0;
				}
				if (iVar2 == func_1300(iParam3, 6, bVar5, func_1299(iParam3)))
				{
					if (func_326(uParam0) == 3)
					{
						func_1293(uParam0, iParam3, 4);
					}
					else if (func_326(uParam0) == 4)
					{
						func_1293(uParam0, iParam3, 5);
					}
					else if (func_582(uParam0->f_3[iParam3]->f_3))
					{
						func_689(&(uParam0->f_3[iParam3]->f_9));
						func_1293(uParam0, iParam3, 7);
					}
				}
			}
			break;
		case 8:
			iVar1 = get_player_ped(uParam0->f_3[iParam3]->f_3);
			if ((is_entity_dead(iVar1) || _get_scenario_point_type_ped_is_using(iVar1) == func_111(iParam3, 1)) && _get_scenario_point_type_ped_is_using(iVar0) == func_111(iParam3, 0))
			{
				func_1293(uParam0, iParam3, 2);
			}
			break;
		case 7:
			iVar1 = get_player_ped(uParam0->f_3[iParam3]->f_3);
			if ((is_entity_dead(iVar1) || _get_scenario_point_type_ped_is_using(iVar1) == func_111(iParam3, 1)) && _get_scenario_point_type_ped_is_using(iVar0) == func_111(iParam3, 0))
			{
				func_1293(uParam0, iParam3, 2);
			}
			break;
	}
	return 0;
}

int func_1112(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			iVar0 = func_1301(iParam0);
			break;
		case 1:
			iVar0 = func_1302(iParam0);
			break;
		case 2:
			iVar0 = func_1303(iParam0);
			break;
	}
	return iVar0;
}

bool func_1113(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5)
{
	if (!network_does_network_id_exist(&(uParam0->f_3[iParam1]->f_4[iParam4])))
	{
		iVar0 = func_1112(iParam1, iParam4);
		iVar1 = uParam2->f_2;
		if (iVar0 != 0)
		{
			if (!_does_scenario_point_exist((*uParam3)[iParam1][1]))
			{
				return true;
			}
			vVar2 = { func_1304(iParam1, iVar1, iParam4) };
			vVar5 = { func_1305(iParam1, iVar1, iParam4) };
			if (func_669(uParam0->f_3[iParam1]->f_4[iParam4], iVar0, vVar2, 1, 0))
			{
				if (iParam4 == 0 || iParam4 == 1)
				{
					iVar8 = net_to_obj(&(uParam0->f_3[iParam1]->f_4[iParam4]));
					set_entity_rotation(iVar8, vVar5, 0, true);
					if (bParam5)
					{
						freeze_entity_position(iVar8, true);
					}
					if (iParam1 == 4)
					{
						set_entity_collision(iVar8, false, false);
					}
				}
				set_disable_frag_damage(net_to_obj(&(uParam0->f_3[iParam1]->f_4[iParam4])), true);
				set_disable_breaking(net_to_obj(&(uParam0->f_3[iParam1]->f_4[iParam4])), true);
				_network_set_entity_invisible_to_network(net_to_obj(&(uParam0->f_3[iParam1]->f_4[iParam4])), true);
				set_entity_visible_in_cutscene(net_to_obj(&(uParam0->f_3[iParam1]->f_4[iParam4])), 1, 0, uParam2->f_1);
				return true;
			}
		}
	}
	return false;
}

void func_1114(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!network_does_network_id_exist(uParam0->f_3[0]->f_1))
	{
		return;
	}
	if (!func_1306(&(uParam0->f_81), 2))
	{
		func_1307(&(uParam0->f_81), uParam0->f_3[0]->f_1, func_330(uParam2->f_2));
	}
	if (!network_does_network_id_exist(uParam0->f_81.f_9))
	{
		uParam0->f_81.f_9 = uParam0->f_3[0]->f_1;
	}
	if (uParam1->f_118.f_8)
	{
		iVar0 = func_1131(uParam0, uParam3, 1);
		if (iVar0 >= 2)
		{
			func_1308(&(uParam0->f_81), 4194304);
		}
		else
		{
			func_1309(&(uParam0->f_81), 4194304);
		}
		if (uParam0->f_81.f_11 != iVar0)
		{
			if (uParam0->f_81.f_11 < iVar0)
			{
				func_1308(&(uParam0->f_81), 256);
			}
			else
			{
				func_1308(&(uParam0->f_81), 8388608);
			}
			uParam0->f_81.f_11 = iVar0;
			if (uParam0->f_81.f_11 <= 0)
			{
				func_1309(&(uParam0->f_81), 256);
				uParam0->f_81.f_11 = 0;
			}
		}
	}
	if (!func_1310(uParam0, uParam1))
	{
		switch (func_326(uParam0))
		{
			case 0:
				if (func_1311(&(uParam0->f_81)) != 2)
				{
					func_1312(&(uParam0->f_81), 2);
				}
				break;
			case 1:
				if (func_1311(&(uParam0->f_81)) != 3)
				{
					func_1313(&(uParam0->f_81), &(uParam1->f_118), 3, 0);
					func_1308(&(uParam0->f_81), 128);
				}
				break;
			case 2:
				if (func_1311(&(uParam0->f_81)) != 7)
				{
					if (!func_1306(&(uParam0->f_81), 128) && !func_325(uParam0, 2500))
					{
						func_1313(&(uParam0->f_81), &(uParam1->f_118), 7, 0);
						func_1308(&(uParam0->f_81), 128);
					}
				}
				if (func_1311(&(uParam0->f_81)) != 4 && func_325(uParam0, 0))
				{
					if (!func_1306(&(uParam0->f_81), 16))
					{
						func_1313(&(uParam0->f_81), &(uParam1->f_118), 4, 0);
					}
					else
					{
						func_1312(&(uParam0->f_81), 4);
						if (uParam1->f_118.f_107 != 3)
						{
							func_1314(&(uParam1->f_118), 2);
						}
					}
					func_1309(&(uParam0->f_81), 128);
				}
				break;
			case 4:
				if (func_1311(&(uParam0->f_81)) != 8 && !func_325(uParam0, 2500))
				{
					func_1313(&(uParam0->f_81), &(uParam1->f_118), 8, 1);
				}
				break;
		}
	}
	func_1315(uParam0, &(uParam1->f_118));
}

void func_1115(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		(*uParam0)[iVar0]->f_9 = -1;
		(*uParam0)[iVar0]->f_10 = -1;
		(*uParam0)[iVar0]->f_12 = -1;
		(*uParam0)[iVar0]->f_8 = -1;
		(*uParam0)[iVar0]->f_11 = -1;
		(*uParam0)[iVar0]->f_13 = -1;
		(*uParam0)[iVar0]->f_14 = -1;
		iVar0++;
	}
}

void func_1116(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_1117(var uParam0, var uParam1)
{
	if (!func_64(&(uParam1->f_106)))
	{
		func_63(&(uParam1->f_106));
	}
	if (!func_1294(!func_65(&(uParam1->f_106), 10f)))
	{
		return false;
	}
	return true;
}

bool func_1118(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (iVar1 == 4 && iVar0 != 0)
			{
			}
			else if (!_does_scenario_point_exist((*uParam1)[iVar0][iVar1]))
			{
				(*(*uParam1)[iVar0])[iVar1] = func_1316(iVar0, uParam2->f_2, iVar1);
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	return true;
}

bool func_1119(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!_does_volume_exist((*uParam0)[iVar0]->f_15))
		{
			vVar7 = { func_1317(iVar0) };
			vVar10 = { 0f, 0f, (func_1318(iVar0) + func_331(iParam1)) };
			vVar4 = { func_1319(iVar0) };
			vVar1 = { _get_object_offset_from_coords(func_330(iParam1), func_331(iParam1), vVar4) };
			(*uParam0)[iVar0]->f_15 = _create_volume_box(vVar1, vVar10, vVar7);
			return false;
		}
		iVar0++;
	}
	if (!_does_volume_exist(&(uParam0->f_115[0])))
	{
		vVar19 = { 2.636113f, 1.457563f, 1.34835f };
		vVar22 = { 0f, 0f, (66.5f + func_331(iParam1)) };
		vVar16 = { -4.184566f, -0.491428f, 0.563896f };
		vVar13 = { _get_object_offset_from_coords(func_330(iParam1), func_331(iParam1), vVar16) };
		uParam0->f_115[0] = _0x0eb78c2b156635b1(-1612834106, vVar13, vVar22, vVar19);
	}
	if (!_does_volume_exist(&(uParam0->f_115[1])))
	{
		vVar31 = { 1.589164f, 1.317819f, 1.133595f };
		vVar34 = { 0f, 0f, (-0.862314f + func_331(iParam1)) };
		vVar28 = { 2.299275f, -0.105734f, 0.54216f };
		vVar25 = { _get_object_offset_from_coords(func_330(iParam1), func_331(iParam1), vVar28) };
		uParam0->f_115[1] = _0x0eb78c2b156635b1(-1612834106, vVar25, vVar34, vVar31);
	}
	return true;
}

char* func_1120(int iParam0)
{
	iVar0 = get_random_int_in_range(0, 3);
	switch (iParam0)
	{
		case 4:
			switch (&Global_1940085)
			{
				case 0:
					return "NMB_PERFORMER_BANJO";
				case 1:
					StringCopy(&cVar1, "NMB_PERFORMER_BANJO_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "NMB_PERFORMER_BANJO_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 3:
			switch (&Global_1940085)
			{
				case 0:
					return "NMB_PERFORMER_BASS";
				case 1:
					StringCopy(&cVar1, "NMB_PERFORMER_BASS_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "NMB_PERFORMER_BASS_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 1:
			switch (&Global_1940085)
			{
				case 0:
					return "NMB_PERFORMER_FIDDLE";
				case 1:
					StringCopy(&cVar1, "NMB_PERFORMER_FIDDLE_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "NMB_PERFORMER_FIDDLE_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 5:
			switch (&Global_1940085)
			{
				case 0:
					return "NMB_PERFORMER_GUITAR";
				case 1:
					StringCopy(&cVar1, "NMB_PERFORMER_GUITAR_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "NMB_PERFORMER_GUITAR_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 0:
			switch (&Global_1940085)
			{
				case 0:
					return "NMB_PERFORMER_PIANO";
				case 1:
					StringCopy(&cVar1, "NMB_PERFORMER_PIANO_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "NMB_PERFORMER_PIANO_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 2:
			switch (&Global_1940085)
			{
				case 0:
					return "NMB_PERFORMER_WASHBOARD";
				case 1:
					StringCopy(&cVar1, "NMB_PERFORMER_WASHBOARD_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "NMB_PERFORMER_WASHBOARD_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
	}
	return "";
}

bool func_1121(var uParam0, var uParam1, var uParam2)
{
	vVar6 = { func_330(uParam2->f_2) };
	fVar9 = func_331(uParam2->f_2);
	if (!does_entity_exist(uParam1->f_100))
	{
		vVar0 = { 0.88f, 0.11f, 1.5f };
		vVar3 = { _get_object_offset_from_coords(vVar6, fVar9, vVar0) };
		uParam1->f_100 = create_object(-1694359093, vVar3, false, false, false, false, true);
		set_entity_rotation(uParam1->f_100, 0f, 0f, fVar9, 2, true);
		freeze_entity_position(uParam1->f_100, true);
		return false;
	}
	if (!does_entity_exist(uParam1->f_101))
	{
		vVar0 = { func_1320(3, 0) + Vector(0f, 0.22f, 0f) };
		vVar3 = { _get_object_offset_from_coords(vVar6, fVar9, vVar0) };
		vVar0 = { func_1321(3, 0) };
		uParam1->f_101 = create_object(-794964047, vVar3, false, false, false, false, true);
		set_entity_rotation(uParam1->f_101, 0f, 0f, (fVar9 + vVar0.z), 2, true);
		set_entity_collision(uParam1->f_101, false, false);
		freeze_entity_position(uParam1->f_101, true);
		return false;
	}
	return true;
}

void func_1122(var uParam0, var uParam1)
{
	if (func_325(&(uParam0->f_58), 7000))
	{
		iVar0 = 0;
		while (iVar0 < 22)
		{
			if (is_bit_set(uParam1->f_8.f_98, iVar0))
			{
			}
			else if (network_does_network_id_exist(&(uParam0->f_22[iVar0])))
			{
				if (!network_has_control_of_network_id(&(uParam0->f_22[iVar0])))
				{
					set_bit(&(uParam1->f_8.f_98), iVar0);
				}
				else
				{
					iVar1 = net_to_ped(&(uParam0->f_22[iVar0]));
					set_bit(&(uParam1->f_8.f_98), iVar0);
					if (uParam1->f_519.f_1[iVar0]->f_14 == -1)
					{
					}
					else
					{
						if (uParam1->f_519.f_1[iVar0]->f_14 > 3 || uParam1->f_519.f_1[iVar0]->f_14 <= -1)
						{
							uParam1->f_519.f_1[iVar0]->f_14 = 1;
						}
						_0xf47d54b986f0a346(iVar1, uParam1->f_519.f_1[iVar0]->f_14);
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < 22)
		{
			if (!network_has_control_of_network_id(&(uParam0->f_22[iVar2])))
			{
				clear_bit(&(uParam1->f_8.f_98), iVar2);
			}
			else if (!is_bit_set(uParam1->f_8.f_98, iVar2))
			{
			}
			else if (network_does_network_id_exist(&(uParam0->f_22[iVar2])))
			{
				iVar3 = net_to_ped(&(uParam0->f_22[iVar2]));
				_0x3efed081b4834ba1(iVar3);
				clear_bit(&(uParam1->f_8.f_98), iVar2);
			}
			iVar2++;
		}
	}
}

void func_1123(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_582(uParam0->f_3[iVar0]->f_3))
		{
			iVar1 = get_player_ped(uParam0->f_3[iVar0]->f_3);
		}
		else
		{
			iVar1 = net_to_ped(uParam0->f_3[iVar0]->f_1);
		}
		if (_0xbe28db99556ff8d9(iVar1) == 978192019)
		{
			if (func_1322())
			{
				iVar2 = 1260094407;
				_0x8e901b65206c2d3e(iVar1);
				_0xb93a769b8b726950(iVar1, iVar2);
				_0xc4cfce4c656ef480(iVar1);
			}
			if (uParam0->f_79 != -1 && uParam2->f_102 != uParam0->f_79)
			{
				_0xe9694b2d6cb87b06(iVar1, uParam0->f_79);
				if (uParam0->f_80 > 1000)
				{
					_0x139a4b9df2d26cbf(iVar1, uParam0->f_80);
				}
				uParam2->f_102 = _0x2dbbf0c5e19383ee(iVar1);
			}
		}
		iVar0++;
	}
}

int func_1124(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5)
{
	if (!network_does_network_id_exist(uParam0->f_3[iParam3]->f_1))
	{
		return 0;
	}
	bVar0 = network_has_control_of_network_id(uParam0->f_3[iParam3]->f_1);
	iVar1 = net_to_ped(uParam0->f_3[iParam3]->f_1);
	bVar3 = true;
	iVar2 = func_1323(uParam0, uParam1, &iVar1, iParam3, bVar0, 1);
	func_1324(uParam0, iParam3, func_581(uParam0, iParam3), iVar1, uParam2, iVar2, bVar3, 0, 0);
	iVar4 = func_581(uParam0, iParam3);
	func_1325(uParam0, uParam2, uParam1, iParam3, func_581(uParam0, iParam3));
	func_1326(uParam0, uParam1, uParam2, iParam3, iVar4, &iVar1);
	func_1327(uParam0, uParam2, iParam3, iVar1);
	func_1328(uParam0, uParam1, uParam2, iParam3);
	func_1329(uParam0, uParam2, iParam3, uParam5);
	if (iParam3 == 0)
	{
		func_1330(uParam0, uParam1, uParam2, iParam3, iVar4, &iVar1);
	}
	bVar5 = uParam0->f_3[iParam3]->f_8;
	if (((!func_582(uParam0->f_3[iParam3]->f_3) || uParam0->f_3[iParam3]->f_3 != player_id()) && _get_scenario_point_type_ped_is_using(Global_34) == func_111(iParam3, 3)) && !_0x0c3cb2e600c8977d(Global_34, 0))
	{
		clear_ped_tasks(Global_34, 1, 0);
	}
	switch (iVar4)
	{
		case 0:
			break;
		case 2:
			if (network_does_network_id_exist(uParam0->f_3[iParam3]->f_2))
			{
				if (_network_has_control_of_anim_scene(_net_to_anim_scene(uParam0->f_3[iParam3]->f_2)))
				{
					if (_0xf94692eb9dc15d74(_net_to_anim_scene(uParam0->f_3[iParam3]->f_2), 0))
					{
						reset_anim_scene(_net_to_anim_scene(uParam0->f_3[iParam3]->f_2), 0);
					}
				}
			}
			if (!bVar0)
			{
				return 0;
			}
			if (!_does_scenario_point_exist((*uParam2)[iParam3][0]))
			{
				return 0;
			}
			if ((!ped_has_use_scenario_task(iVar1) && !_0x3ab6c7b0bb0df4b1(iVar1, -1)) && func_1331(iVar1, 0))
			{
				func_1332(uParam0, uParam2, iVar1, iParam3, bVar3);
			}
			break;
		case 1:
			func_1333(uParam0, uParam2, iParam3, iVar1, bVar0, 1, iParam4);
			break;
		case 3:
		case 4:
			if ((!ped_has_use_scenario_task(iVar1) && !_0x3ab6c7b0bb0df4b1(iVar1, -1)) && !_0x0c3cb2e600c8977d(iVar1, 0))
			{
				if (!bVar0)
				{
					return 0;
				}
				func_1334(uParam0, uParam2, iVar1, iVar4, iParam3, bVar3);
			}
			else if (_get_scenario_point_type_ped_is_using(iVar1) == func_111(iParam3, 0))
			{
				if (!bVar0)
				{
					return 0;
				}
				if (!_does_scenario_point_exist((*uParam2)[iParam3][1]))
				{
					return 0;
				}
				if (func_1331(iVar1, 0) && !func_1298(uParam2, iParam3, 0, 0))
				{
					func_1335(iVar1, (*uParam2)[iParam3][1], iParam3, 3, 0, 1, bVar3);
				}
			}
			else if (_get_scenario_point_type_ped_is_using(iVar1) == func_111(iParam3, 2))
			{
				if (!bVar0)
				{
					return 0;
				}
				if (!_does_scenario_point_exist((*uParam2)[iParam3][1]))
				{
					return 0;
				}
				if (func_1331(iVar1, 0))
				{
					func_1335(iVar1, (*uParam2)[iParam3][1], iParam3, 3, 1, bVar5, bVar3);
				}
			}
			else
			{
				if (!bVar0)
				{
					return 0;
				}
				if (iVar2 == func_1300(iParam3, 6, bVar3, func_1299(iParam3)) && is_ped_active_in_scenario(iVar1, 0))
				{
					if (func_1331(iVar1, 0))
					{
						func_1336(iVar1, 621732002, 0, 1073741824);
						func_1336(iVar1, 1802434640, 0, 1073741824);
					}
				}
				func_1337(uParam0, uParam2, iParam3, 2, iParam4);
			}
			break;
		case 5:
			if (!bVar0)
			{
				return 0;
			}
			if (!_does_scenario_point_exist((*uParam2)[iParam3][1]))
			{
				return 0;
			}
			if (func_1331(iVar1, 0))
			{
				func_1336(iVar1, -671760632, 0, 1073741824);
				func_1336(iVar1, 1802434640, 0, 1073741824);
			}
			func_1337(uParam0, uParam2, iParam3, 2, iParam4);
			break;
		case 6:
			if ((!ped_has_use_scenario_task(iVar1) && !_0x3ab6c7b0bb0df4b1(iVar1, -1)) && !_0x0c3cb2e600c8977d(iVar1, 0))
			{
				if (!bVar0)
				{
					return 0;
				}
				func_1334(uParam0, uParam2, iVar1, iVar4, iParam3, bVar3);
			}
			else if (_get_scenario_point_type_ped_is_using(iVar1) == func_111(iParam3, 0))
			{
				func_1337(uParam0, uParam2, iParam3, 0, iParam4);
				func_1337(uParam0, uParam2, iParam3, 1, iParam4);
				if (!bVar0)
				{
					return 0;
				}
				if (func_1331(iVar1, 0) && !func_1298(uParam2, iParam3, 0, 0))
				{
					func_1335(iVar1, (*uParam2)[iParam3][1], iParam3, 6, 0, 1, bVar3);
				}
			}
			else if (_get_scenario_point_type_ped_is_using(iVar1) == func_111(iParam3, 2))
			{
				if (!bVar0)
				{
					return 0;
				}
				if (func_1331(iVar1, 0))
				{
					func_1335(iVar1, (*uParam2)[iParam3][1], iParam3, 6, 1, bVar5, bVar3);
				}
			}
			else if (iVar2 == func_1300(iParam3, 3, bVar3, func_1299(iParam3)))
			{
				if (is_ped_active_in_scenario(iVar1, 0))
				{
					if (!bVar0)
					{
						return 0;
					}
					func_1336(iVar1, 1116205397, 0, 1073741824);
				}
			}
			else
			{
				if (iParam3 == 1)
				{
					if (is_entity_in_volume(Global_34, (*uParam2)[iParam3]->f_15, true, 0))
					{
						set_entity_no_collision_entity(Global_34, net_to_ped(uParam0->f_3[iParam3]->f_1), true);
					}
				}
				func_1337(uParam0, uParam2, iParam3, 2, iParam4);
			}
			break;
		case 8:
			_0x7edb3c766b0d073f(iVar1);
			if ((*uParam2)[iParam3]->f_7 == 0)
			{
				func_1338(uParam0, uParam1, uParam2, iParam3, &iVar1, bVar0, 0);
				func_1337(uParam0, uParam2, iParam3, 2, iParam4);
			}
			else if ((*uParam2)[iParam3]->f_7 == 1)
			{
				func_1339(uParam0, uParam1, uParam2, iParam3, &iVar1, bVar0, 0, iParam4);
			}
			else if ((*uParam2)[iParam3]->f_7 == 2)
			{
				func_1340(uParam0, uParam1, uParam2, iParam3, &iVar1, bVar0, 0, iParam4);
			}
			break;
		case 7:
			_0x7edb3c766b0d073f(iVar1);
			if ((*uParam2)[iParam3]->f_7 == 0)
			{
				func_1338(uParam0, uParam1, uParam2, iParam3, &iVar1, bVar0, 1);
				func_1337(uParam0, uParam2, iParam3, 2, iParam4);
			}
			else if ((*uParam2)[iParam3]->f_7 == 1)
			{
				func_1339(uParam0, uParam1, uParam2, iParam3, &iVar1, bVar0, 1, iParam4);
			}
			else if ((*uParam2)[iParam3]->f_7 == 2)
			{
				func_1340(uParam0, uParam1, uParam2, iParam3, &iVar1, bVar0, 1, iParam4);
			}
			break;
	}
	return 0;
}

void func_1125(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	func_1341(uParam0, uParam1, &iVar0, &iVar1, &iVar2, &iVar3);
	iVar4 = func_1342(uParam0, iVar1, iVar2, iVar3);
	func_1343(uParam2, iVar4);
	if (!func_1344(uParam2, 16))
	{
		if (iVar1 > 0 && iVar1 < 10000)
		{
			func_87(uParam2, 16, 1);
		}
	}
	else if (iVar1 >= 10000 || iVar1 == 0)
	{
		func_87(uParam2, 16, 0);
	}
	if (func_1344(uParam2, 32))
	{
		if (!func_64(&(uParam2->f_1)))
		{
			func_63(&(uParam2->f_1));
		}
		else if (func_867(&(uParam2->f_1)) >= 5000)
		{
			func_109(&(uParam2->f_1));
			func_87(uParam2, 32, 0);
		}
	}
	if (!func_1344(uParam2, 64))
	{
		if (func_1345(uParam0))
		{
			func_63(&(uParam2->f_4));
			func_87(uParam2, 64, 1);
		}
	}
	else if (func_867(&(uParam2->f_4)) >= 7000)
	{
		func_109(&(uParam2->f_4));
		func_87(uParam2, 64, 0);
	}
}

bool func_1126(var uParam0, int iParam1)
{
	return func_82(uParam0->f_1, iParam1);
}

void func_1127(var uParam0, int iParam1)
{
	func_83(&(uParam0->f_1), iParam1);
}

void func_1128(var uParam0, int iParam1)
{
	func_99(&(uParam0->f_1), iParam1);
}

bool func_1129(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_582(uParam0->f_3[iVar0]->f_3) && uParam0->f_3[iVar0]->f_3 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1130(bool bParam0)
{
	if (bParam0)
	{
		func_1346(4);
	}
	func_1346(2);
	set_bit(&(Global_1957959->f_1), 0);
}

int func_1131(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_582(uParam0->f_3[iVar1]->f_3))
		{
			if (!bParam2)
			{
				iVar0++;
			}
			else
			{
				iVar2 = network_get_participant_index(uParam0->f_3[iVar1]->f_3);
				if (func_1126((*uParam1)[iVar2], 4))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1132(var uParam0, float fParam1)
{
	if (func_65(uParam0, fParam1))
	{
		func_109(uParam0);
		return true;
	}
	return false;
}

bool func_1133()
{
	return Global_1940085->f_13;
}

bool func_1134(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (func_1347(16))
	{
		return Global_1940258->f_51 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, iParam2, iParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_1348(16);
					Global_1940258->f_51 = get_ped_index_from_entity_index(iVar0);
					if (Global_1940258->f_51 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

struct<4> func_1135(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_49(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_1350(1328661203, func_1349(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_1350(1328661203, func_1349(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_1350(1328661203, func_1349(), -1591664384, bParam0);
}

int func_1136(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_1351(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_1352(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_1350(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_49(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_49(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_1137()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_1138()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

int func_1139()
{
	return Global_1896622->f_41;
}

void func_1140(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				if (!is_ped_in_current_conversation(&uParam0, uParam3[iVar0], 0))
				{
					add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
				}
			}
		}
		iVar0++;
	}
}

bool func_1141(var uParam0, int iParam1)
{
	return func_82(uParam0->f_108, iParam1);
}

int func_1142(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_888(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_888(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

void func_1143(int iParam0)
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
	func_1353(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_1144(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_1354(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_1143(iParam0);
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
						func_1144(iVar3, iParam1, 0, 1, 0, 0);
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
			func_1355(&Var6, uVar4);
		}
	}
}

void func_1145(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_1146(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!is_entity_on_screen(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_1147(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_1146(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_240() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_1148(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_612(Param0);
	}
	return -1;
}

int func_1149()
{
	return Global_1102219->f_3672;
}

bool func_1150(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

bool func_1151(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1356(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_1152(var uParam0, int iParam1, var uParam2)
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

bool func_1153(int iParam0, bool bParam1)
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

int func_1154()
{
	return Global_1109804->f_21.f_12.f_2;
}

int func_1155(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 15:
		case 23:
		case 36:
			return 0;
		case 2:
		case 3:
		case 9:
		case 46:
			return 1;
		case 16:
		case 17:
		case 18:
		case 24:
		case 27:
		case 29:
		case 30:
		case 31:
		case 32:
			return 2;
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			return 3;
		default:
			break;
	}
	return 0;
}

struct<9> func_1156(int iParam0)
{
	Var0.f_4 = iParam0;
	Var0 = 13;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	return Var0;
}

void func_1157(var uParam0)
{
	func_1357(uParam0, func_965(4, 117));
}

int func_1158(var uParam0, var uParam1, bool bParam2)
{
	iVar2 = 1;
	*bParam2 = 1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar1))
		{
			if (uParam0->f_15 != func_426(&((*uParam1)[iVar0]->f_12)))
			{
				iVar2 = 0;
			}
			if (uParam0->f_9 != func_1358(&((*uParam1)[iVar0]->f_12)))
			{
				*bParam2 = 0;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1159()
{
	iVar0 = get_random_int_in_range(1, 5);
	iVar1 = iVar0;
	return iVar1;
}

bool func_1160(int iParam0)
{
	if (func_1359(iParam0, -76381094) && func_1360(iParam0, -76381094))
	{
		return true;
	}
	return false;
}

bool func_1161(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (uParam0->f_12 == 0)
			{
				uParam0->f_12 = func_1361(uParam0->f_8);
			}
			if (uParam0->f_12 != 0)
			{
				func_418(&(uParam0->f_9), 1);
			}
			break;
		case 1:
			func_418(&(uParam0->f_9), 2);
			break;
		case 2:
			func_418(&(uParam0->f_9), 3);
			break;
		case 3:
			func_418(&(uParam0->f_9), 4);
			break;
		case 4:
			if (func_1160(iParam1->f_1252.f_122))
			{
				func_418(&(uParam0->f_9), 5);
			}
			break;
		case 5:
			if (bParam3)
			{
				uParam0->f_6 = 1;
				return true;
			}
			break;
	}
	return false;
}

int func_1162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 7:
		case 8:
		case 9:
		case 12:
		case 13:
		case 24:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
			return 0;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return 1;
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return 2;
		case 10:
		case 11:
		case 21:
		case 25:
			return 3;
		default:
			break;
	}
	return 0;
}

bool func_1163(var uParam0, float fParam1)
{
	vVar0 = { func_1362(player_id()) };
	vVar3 = { get_entity_coords(*uParam0, true, false) };
	fVar7 = vVar0.z;
	fVar8 = vVar3.z;
	fVar6 = get_distance_between_coords(vVar3, vVar0, true);
	if ((((fVar7 - fVar8) < 0.5f && (fVar7 - fVar8) > -0.5f) && fParam1 > fVar6) && fVar6 > 6f)
	{
		return true;
	}
	return false;
}

void func_1164(var uParam0, int iParam1)
{
	fVar0 = 0.75f;
	fVar1 = 0f;
	fVar2 = 1f;
	if ((!func_60(iParam1, 4096) && !func_60(iParam1, 64)) && !func_60(iParam1, 32))
	{
		fVar3 = get_random_float_in_range(fVar1, fVar2);
		if (fVar3 < fVar0)
		{
			if (!func_61(uParam0, 128, participant_id_to_int()))
			{
				func_62(uParam0, 128);
			}
		}
		else if (!func_61(uParam0, 8192, participant_id_to_int()))
		{
			func_62(uParam0, 8192);
		}
	}
}

bool func_1165(var uParam0, float fParam1)
{
	vVar0 = { func_1362(player_id()) };
	vVar3 = { get_entity_coords(*uParam0, true, false) };
	fVar7 = vVar0.z;
	fVar8 = vVar3.z;
	fVar6 = get_distance_between_coords(vVar3, vVar0, true);
	if (((fVar7 - fVar8) < 0.5f && (fVar7 - fVar8) > -0.5f) && fParam1 < fVar6)
	{
		return true;
	}
	return false;
}

bool func_1166(int iParam0)
{
	if (((_0xa2cac9def0195e6f(0) || _0x2b101ad9f651243a()) || is_scripted_speech_playing(iParam0)) || is_any_speech_playing(iParam0))
	{
		return true;
	}
	return false;
}

int func_1167(var uParam0)
{
	iVar0 = 0;
	bVar3 = func_1363(&bVar2);
	if (func_1364(&(uParam0->f_1252), &bVar1, bVar3))
	{
		iVar0 = func_1365(&(uParam0->f_1252), bVar1);
		return iVar0;
	}
	if (func_1366(uParam0, &iVar0))
	{
		return iVar0;
	}
	if (func_1367(&(uParam0->f_1252)))
	{
		iVar0 = func_1368(&(uParam0->f_1252), bVar3, bVar2);
	}
	else if (func_1369(&(uParam0->f_1252)))
	{
		iVar0 = func_1370(&(uParam0->f_1252));
	}
	func_1372(1766283257, func_1371());
	return iVar0;
}

bool func_1168(var uParam0, int iParam1)
{
	return func_43(*uParam0, iParam1);
}

void func_1169(var uParam0, int iParam1)
{
	if (!func_1168(uParam0, iParam1))
	{
		func_110(uParam0, iParam1);
	}
}

void func_1170(var uParam0, var uParam1)
{
	if (func_220(get_player_ped(player_id()), &(uParam1->f_1672[3]), 1, 0))
	{
		if (!func_61(uParam0, 4096, participant_id_to_int()))
		{
			func_62(uParam0, 4096);
		}
	}
	else if (func_61(uParam0, 4096, participant_id_to_int()) && func_220(get_player_ped(player_id()), &(uParam1->f_1672[0]), 1, 0))
	{
		if (func_61(uParam0, 128, participant_id_to_int()))
		{
			func_77(uParam0, 128);
		}
		func_77(uParam0, 4096);
	}
}

void func_1171(var uParam0, var uParam1, var uParam2)
{
	if (func_4(131072))
	{
		if (does_entity_exist(uParam2->f_11) && is_entity_visible(uParam2->f_11))
		{
			set_entity_visible(uParam2->f_11, false);
			set_entity_collision(uParam2->f_11, false, false);
		}
	}
	else if ((((does_entity_exist(uParam2->f_11) && !is_entity_visible(uParam2->f_11)) && uParam0->f_8 == 1) && uParam1->f_3 == 2) && !func_4(512))
	{
		set_entity_visible(uParam2->f_11, true);
		set_entity_collision(uParam2->f_11, true, false);
	}
}

bool func_1172(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return true;
	}
	if (!_does_scenario_point_exist(iParam0))
	{
		return true;
	}
	if (!_0x9c54041bb66bcf9e(iParam1, iParam0))
	{
		if (!func_1359(iParam1, -76381094) && !func_1360(iParam1, -76381094))
		{
			_task_use_scenario_point(iParam1, iParam0, 0, -1, false, true, 0, false, 0.5f, false);
		}
	}
	return true;
}

int func_1173(var uParam0)
{
	return uParam0->f_9;
}

bool func_1174(struct<13> Param0, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25)
{
	switch (func_1358(&((*uParam25)[participant_id_to_int()]->f_12)))
	{
		case 0:
			func_1373(&(uParam24->f_1252));
			if (uParam24->f_1252.f_51.f_17 == 0)
			{
				uParam24->f_1252.f_51.f_17 = Param0.f_12;
			}
			else if (func_1173(&Param0) > 0)
			{
				func_423(&((*uParam25)[participant_id_to_int()]->f_12), 1);
			}
			break;
		case 1:
			if (func_1173(&Param0) > 1)
			{
				func_423(&((*uParam25)[participant_id_to_int()]->f_12), 2);
			}
			break;
		case 2:
			if (!func_1376(&(uParam24->f_1252.f_51), func_1374(4), func_1375(uParam24->f_1252.f_51.f_17)))
			{
				return false;
			}
			func_1378(uParam24->f_1252.f_51, &(uParam24->f_1252.f_6.f_27), uParam24->f_1252.f_51.f_17, func_1377(&Param0, &(uParam24->f_1252)));
			if (!func_1380(uParam24->f_1252.f_51, uParam24->f_1252.f_146, uParam24->f_1252.f_149, func_1379(), uParam24->f_1252.f_96))
			{
				return false;
			}
			func_423(&((*uParam25)[participant_id_to_int()]->f_12), 3);
			break;
		case 3:
			if ((((!_does_anim_scene_exist(uParam24->f_1252.f_51) || !_is_anim_scene_started(uParam24->f_1252.f_51, false)) || !_0x3ab6c7b0bb0df4b1(uParam24->f_1252.f_96, uParam24->f_1252.f_51)) || _0x005e6f28dd7ed58d(uParam24->f_1252.f_51, func_1379())) || _get_anim_scene_progress(uParam24->f_1252.f_51) >= 0.99f)
			{
				if (func_1172(func_1377(&Param0, &(uParam24->f_1252)), uParam24->f_1252.f_122))
				{
					func_423(&((*uParam25)[participant_id_to_int()]->f_12), 4);
				}
			}
			break;
		case 4:
			if (func_1381(uParam24->f_1252.f_51.f_17, uParam24->f_1252.f_51, &(uParam24->f_1252.f_6.f_27), func_1377(&Param0, &(uParam24->f_1252))) && func_420(&(uParam24->f_1252.f_51)))
			{
				if (func_61(uParam25, 16, participant_id_to_int()))
				{
					func_77(uParam25, 16);
				}
				if (func_61(uParam25, 32, participant_id_to_int()))
				{
					func_77(uParam25, 32);
				}
				if (func_61(uParam25, 128, participant_id_to_int()))
				{
					func_77(uParam25, 128);
				}
				if (func_61(uParam25, 8192, participant_id_to_int()))
				{
					func_77(uParam25, 8192);
				}
				if (!func_61(uParam25, 64, participant_id_to_int()))
				{
					func_62(uParam25, 64);
				}
				func_423(&((*uParam25)[participant_id_to_int()]->f_12), 5);
			}
			break;
		case 5:
			if (Param0.f_6 == 1)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_1175(var uParam0, var uParam1)
{
	iVar0 = 0;
	if (func_1382(-408236271) != -1)
	{
		func_1177(&(uParam1->f_260), 32768);
	}
	if (func_1383(uParam1))
	{
		iVar0 = func_1384();
	}
	else if (func_1385(uParam1))
	{
		iVar0 = func_1386(uParam1);
	}
	else if ((!func_1176(&(uParam1->f_260), 256) && !func_1000(1)) && func_1387() == player_id())
	{
		func_1177(&(uParam1->f_260), 256);
		iVar0 = 25;
	}
	else if (func_1388(uParam0, uParam1))
	{
		iVar0 = func_1389(uParam1);
	}
	func_1372(-408236271, func_1371());
	return iVar0;
}

bool func_1176(var uParam0, int iParam1)
{
	return func_43(*uParam0, iParam1);
}

void func_1177(var uParam0, int iParam1)
{
	if (!func_1176(uParam0, iParam1))
	{
		func_110(uParam0, iParam1);
	}
}

int func_1178(var uParam0, var uParam1)
{
	iVar0 = 0;
	iVar1[0] = 1;
	iVar1[1] = 2;
	iVar1[2] = 3;
	iVar1[3] = 4;
	iVar1[4] = 6;
	iVar1[5] = 7;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar8)))
		{
			if (network_is_player_active(network_get_player_index(int_to_participantindex(iVar8))))
			{
				bVar10 = true;
				iVar9 = 0;
				while (iVar9 < 6)
				{
					if ((*uParam1)[iVar8]->f_10.f_1 == &iVar1[iVar9])
					{
						bVar10 = false;
					}
					if (bVar10)
					{
						if (iVar0 == 0)
						{
							iVar0 = &iVar1[iVar9];
						}
						else if (get_random_int_in_range(0, 5) == 0)
						{
							iVar0 = &iVar1[iVar9];
						}
					}
					iVar9++;
				}
			}
		}
		iVar8++;
	}
	(*uParam1)[participant_id_to_int()]->f_10.f_1 = iVar0;
	return iVar0;
}

float func_1179(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1180(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 2.18377f, -12.3381f, 1.00063f };
			uParam1->f_3 = -241.158f;
			break;
		case 1:
			*uParam1 = { 2.07133f, -13.5169f, 1.0007f };
			uParam1->f_3 = -301.404f;
			break;
		case 2:
			*uParam1 = { 1.5089f, -11.8108f, 1.0006f };
			uParam1->f_3 = -193.818f;
			break;
		case 3:
			*uParam1 = { 1.3898f, -14.0457f, 1.0007f };
			uParam1->f_3 = 27.3919f;
			break;
	}
}

void func_1181(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -10.5822f, -10.1701f, 1.44145f };
			uParam1->f_3 = -226.073f;
			break;
		case 1:
			*uParam1 = { -10.6333f, -11.8408f, 1.44145f };
			uParam1->f_3 = -302.7069f;
			break;
		case 2:
			*uParam1 = { -11.3429f, -9.30833f, 1.44145f };
			uParam1->f_3 = -193.994f;
			break;
		case 3:
			*uParam1 = { -11.287f, -13.069f, 1.44145f };
			uParam1->f_3 = 18.08501f;
			break;
	}
}

void func_1182(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -11.0879f, -6.22994f, 1.44417f };
			uParam1->f_3 = -229.638f;
			break;
		case 1:
			*uParam1 = { -10.8921f, -7.28309f, 1.44417f };
			uParam1->f_3 = -290.232f;
			break;
		case 2:
			*uParam1 = { -12.4119f, -5.74468f, 1.44417f };
			uParam1->f_3 = -138.7469f;
			break;
		case 3:
			*uParam1 = { -11.6888f, -7.81494f, 1.44417f };
			uParam1->f_3 = -6.865005f;
			break;
	}
}

void func_1183(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -18.3643f, -11.2366f, 4.63618f };
			uParam1->f_3 = -67.459f;
			break;
		case 1:
			*uParam1 = { -17.9332f, -10.1117f, 4.63637f };
			uParam1->f_3 = -140.529f;
			break;
		case 2:
			*uParam1 = { -17.7372f, -11.9776f, 4.636f };
			uParam1->f_3 = -26.469f;
			break;
		case 3:
			*uParam1 = { -17.2881f, -9.47077f, 4.63658f };
			uParam1->f_3 = -156.568f;
			break;
	}
}

Vector3 func_1184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { -14.5941f, -11.6742f, 4.83705f };
			break;
		case 1:
			vVar0 = { -15.3548f, -7.60704f, 1.723f };
			break;
		case 2:
			vVar0 = { -15.3904f, -11.6731f, 1.97209f };
			break;
		case 3:
			vVar0 = { -1.93f, -12.881f, 1.148f };
			break;
	}
	return vVar0;
}

Vector3 func_1185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { -18.5434f, -10.974f, 5.0399f };
			break;
		case 1:
			vVar0 = { -9.31468f, -5.88518f, 1.92561f };
			break;
		case 2:
			vVar0 = { -9.17895f, -10.7799f, 1.76863f };
			break;
		case 3:
			vVar0 = { 18.614f, -11.683f, 0f };
			break;
	}
	return vVar0;
}

var func_1186(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_1390() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_1391());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_1391());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_1391());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1392(get_player_team(iVar5)));
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
			if (func_1393(iVar2))
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
				if (iVar9 & 8192 != 0 && func_643(iVar2) != 1)
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
					if (!func_1394(iVar10))
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

var func_1187(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_1188(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1356(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

int func_1189(var uParam0)
{
	return func_1002(uParam0, -1320599513, 1);
}

struct<8> func_1190(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			iVar0 = 613568612;
			break;
		case 1:
			iVar0 = 1060517781;
			break;
		case 2:
			iVar0 = 1158067669;
			break;
	}
	return func_1226(uParam0, iVar0, 1);
}

void func_1191(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!_network_is_player_index_valid(uParam3->f_1))
	{
		return;
	}
	if (!network_is_player_active(uParam3->f_1))
	{
		return;
	}
	if (_0x3ab6c7b0bb0df4b1(func_980(uParam1, 0), -1))
	{
		return;
	}
	if (func_1395(0))
	{
		return;
	}
	if ((Global_1048577 || Global_1048584) // PointerArith)
	{
		return;
	}
	iVar0 = participant_id_to_int();
	if (iVar0 >= 0 || iVar0 < 32)
	{
		if (is_bit_set((*uParam0)[iVar0]->f_26, 0))
		{
			return;
		}
	}
	func_1396(uParam1, uParam3->f_7);
	func_1397(uParam1, uParam3->f_8);
}

void func_1192(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_6 == 0)
	{
		return;
	}
	if (!_0x93a91a351a07360e(uParam2->f_6))
	{
		return;
	}
	if (uParam2->f_6 != _0x901e0dc25080c8b9(player_id()))
	{
		return;
	}
	if (!_network_is_player_index_valid(uParam2->f_1))
	{
		return;
	}
	if (!network_is_player_active(uParam2->f_1))
	{
		return;
	}
	Var0 = { func_1398(uParam2->f_1) };
	if (!func_1399(&(uParam1->f_3), &Var0))
	{
		return;
	}
	if (func_1395(0) && uParam2->f_7 != 3)
	{
		return;
	}
	if (func_53(player_id(), 2048))
	{
		return;
	}
	func_549(1);
	func_1400(uParam0, uParam2->f_6);
	func_1396(uParam0, uParam2->f_7);
	func_1397(uParam0, uParam2->f_8);
	func_1401(uParam0, &(uParam2->f_9));
	switch (uParam2->f_7)
	{
		case 1:
		case 3:
			func_1402(5);
			func_1403(1);
			func_1037(0);
			func_1404(uParam2->f_6);
			func_1405(uParam2->f_21);
			func_1406(uParam2->f_19);
			func_1407(uParam2->f_22);
			break;
	}
	if (uParam2->f_23 != 0)
	{
		func_1408(uParam0, uParam2->f_23);
		func_1409(uParam0, uParam2->f_24);
		func_1410(uParam0, uParam2->f_25);
	}
}

char* func_1193(var uParam0)
{
	if (func_1411(uParam0))
	{
		return _create_var_string(2, "MOONSHINE_COOP_MISSION_FLOW_COMPLETE");
	}
	iVar0 = func_1412(uParam0);
	if (iVar0 < 0)
	{
		return _create_var_string(2, "MOONSHINE_COOP_MISSION_FLOW_COMPLETE");
	}
	return func_1413(&(Global_265377->f_4[iVar0]->f_7), 109029619);
}

bool func_1194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		default:
			break;
	}
	return true;
}

bool func_1195(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 21:
		case 22:
			return true;
		default:
			break;
	}
	return false;
}

int func_1196(int iParam0, int iParam1)
{
	iVar0 = player_id();
	iVar1 = _0x901e0dc25080c8b9(iVar0);
	if (_0x4be6c13a45cca8ec(iVar1) != iVar0)
	{
		return 2;
	}
	if (func_843(func_842()))
	{
		return 4;
	}
	if (iParam1 & 4 == 0)
	{
		if (func_1415(func_1414(iParam0)) == 5)
		{
			return 19;
		}
	}
	if (iParam1 & 1 == 0)
	{
		if (func_1416(iParam0))
		{
			return 5;
		}
	}
	if (func_1417(iVar0, 1, 0, 1))
	{
		return 7;
	}
	Var2 = { func_1398(iVar0) };
	_0x4ef23e04a0c8ff51(&Var2, &iVar9);
	if (iVar9 >= Global_1901947->f_166.f_2)
	{
		return 8;
	}
	iVar11 = func_1079(iVar1);
	if (iVar11 == -1)
	{
		return 9;
	}
	if (func_1418(iVar11) != 0)
	{
		return 25;
	}
	iVar12 = get_player_ped(iVar0);
	if (_0xec7e480ff8bd0bed(iVar12))
	{
		return 10;
	}
	if (func_1419())
	{
		return 11;
	}
	if (func_717())
	{
		return 12;
	}
	if (func_1420())
	{
		return 13;
	}
	if (func_1421())
	{
		return 14;
	}
	if (func_1422(iVar0))
	{
		return 15;
	}
	if (iParam1 & 16 == 0)
	{
		if (_0x149a2751ab66ac02(iVar1) > 4)
		{
			return 20;
		}
	}
	if (iParam1 & 32 == 0)
	{
		if (func_89(-1784925006, player_id(), 0, 1) != -1)
		{
			return 18;
		}
	}
	if (Global_1298000->f_45 & 1 != 0)
	{
		return 27;
	}
	return 0;
}

bool func_1197(var uParam0)
{
	Var1 = { func_1423(uParam0) };
	if (!_stat_id_is_valid(&Var1))
	{
		return true;
	}
	stat_id_get_int(&Var1, &iVar0);
	if (iVar0 == 0)
	{
		return false;
	}
	return (iVar0 + func_1424(uParam0)) >= Global_1296859->f_21;
}

void func_1198(int iParam0)
{
	func_907(&(Global_1297470->f_50.f_3), func_1425(iParam0, 1), 1);
}

void func_1199(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

bool func_1200(int iParam0, bool bParam1)
{
	if (bParam1 && !func_341(iParam0))
	{
		return false;
	}
	iVar0 = func_589(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_1201(int iParam0, bool bParam1)
{
	if (bParam1 && !func_341(iParam0))
	{
		return;
	}
	iVar0 = func_589(iParam0);
	_uiprompt_restart_modes((*Global_1951255)[iVar0]->f_3);
}

void func_1202(var uParam0, var uParam1)
{
	*uParam0 = 13;
	uParam0->f_1 = get_player_index();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 26, 5, &uParam1);
}

bool func_1203(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1426(uParam0, uParam1, iParam2, iParam3))
	{
		return false;
	}
	uParam0->f_2 = 1200720527;
	uParam0->f_3 = iParam4;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

var func_1204(int iParam0)
{
	return Global_1116202[iParam0];
}

bool func_1205(var uParam0, var uParam1)
{
	uParam0->f_2 = -1918309560;
	uParam0->f_3 = uParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

char* func_1206(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

Vector3 func_1207(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_1208(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_795(uParam0, iParam1))
	{
		return false;
	}
	if (!func_793(uParam0, -6195722, iParam2, 0, 0))
	{
		return false;
	}
	if (!func_793(uParam0, -516034592, iParam3, 0, 1))
	{
		return false;
	}
	return true;
}

int func_1209(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	if (!func_793(&Param0, -246323496, 0, 0, 0))
	{
		return 0;
	}
	uVar2 = Param0.f_1;
	iVar1 = func_794(&Param0, -867045637);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar2;
		if (!func_793(&Param0, 1278501955, iVar0, 0, 1))
		{
		}
		else
		{
			uVar3 = (uVar3 || func_1427(&Param0));
		}
		iVar0++;
	}
	return uVar3;
}

struct<5> func_1210(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	iVar5 = func_213(iParam5);
	if (!func_793(&uParam0, -1288148227, 0, 0, 1))
	{
		return Var0;
	}
	if (!func_793(&uParam0, -1188309159, iVar5, 0, 1))
	{
		return Var0;
	}
	Var0 = func_1189(&uParam0);
	Var0.f_1 = { func_1064(&uParam0) };
	Var0.f_4 = func_1428(&uParam0);
	return Var0;
}

int func_1211(var uParam0)
{
	return count_player_bits(&(uParam0->f_81.f_11.f_8));
}

int func_1212(int iParam0, int iParam1, int iParam2)
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

bool func_1213(int iParam0, int iParam1)
{
	if (!func_1208(&Var0, iParam0, 591508004, iParam1))
	{
		return false;
	}
	iVar5 = func_1209(Var0);
	return iVar5 & 1 != 0;
}

bool func_1214(var uParam0, int iParam1)
{
	if (does_entity_exist(func_827(uParam0, iParam1)))
	{
		return false;
	}
	iVar0 = func_1215(uParam0, iParam1);
	if (iVar0 == 255)
	{
		return false;
	}
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	if (!network_is_player_active(iVar0))
	{
		return false;
	}
	if (is_player_dead(iVar0))
	{
		return false;
	}
	iVar2 = get_player_ped(iVar0);
	iVar1 = clone_ped(iVar2, 0f, false, false);
	set_entity_coords(iVar1, get_entity_coords(iVar2, true, false) + Vector(-30f, 0f, 0f), true, false, true, true);
	iVar3 = _inventory_get_ped_inventory_id(iVar2);
	iVar4 = _inventory_get_ped_inventory_id(iVar1);
	if (_0x886dfd3e185c8a89(iVar3, &uVar9, 923904168, -740156546, &uVar5))
	{
		_0xc04f47d488ef9eba(iVar3, iVar4, &uVar5, 0);
		get_current_ped_weapon(iVar2, &iVar13, false, 0, false);
		if (iVar13 != 0 && iVar13 != -1569615261)
		{
			iVar14 = _0xcad4fe9398820d24(iVar2, 0);
			bVar17 = true;
			switch (iVar14)
			{
				case 3:
					bVar17 = !bVar15;
					break;
				case 2:
					bVar17 = !bVar16;
					break;
				default:
					bVar17 = false;
					break;
			}
			if (bVar17)
			{
				_give_weapon_to_ped_2(iVar1, iVar13, 0, false, true, iVar14, false, 0.5f, 1f, 752097756, false, 0f, false);
				switch (iVar14)
				{
					case 3:
						bVar15 = true;
						break;
					case 2:
						bVar16 = true;
						break;
				}
			}
		}
		get_current_ped_weapon(iVar2, &iVar13, false, 1, false);
		if (iVar13 != 0 && iVar13 != -1569615261)
		{
			iVar14 = _0xcad4fe9398820d24(iVar2, 1);
			bVar17 = true;
			switch (iVar14)
			{
				case 3:
					bVar17 = !bVar15;
					break;
				case 2:
					bVar17 = !bVar16;
					break;
				default:
					bVar17 = false;
					break;
			}
			if (bVar17)
			{
				_give_weapon_to_ped_2(iVar1, iVar13, 0, false, true, iVar14, false, 0.5f, 1f, 752097756, false, 0f, false);
				switch (iVar14)
				{
					case 3:
						bVar15 = true;
						break;
					case 2:
						bVar16 = true;
						break;
				}
			}
		}
		get_current_ped_weapon(iVar2, &iVar13, false, 2, false);
		if (iVar13 != 0 && iVar13 != -1569615261)
		{
			iVar14 = _0xcad4fe9398820d24(iVar2, 2);
			bVar17 = true;
			switch (iVar14)
			{
				case 3:
					bVar17 = !bVar15;
					break;
				case 2:
					bVar17 = !bVar16;
					break;
				default:
					bVar17 = false;
					break;
			}
			if (bVar17)
			{
				_give_weapon_to_ped_2(iVar1, iVar13, 0, false, true, iVar14, false, 0.5f, 1f, 752097756, false, 0f, false);
				switch (iVar14)
				{
					case 3:
						bVar15 = true;
						break;
					case 2:
						bVar16 = true;
						break;
				}
			}
		}
		get_current_ped_weapon(iVar2, &iVar13, false, 3, false);
		if (iVar13 != 0 && iVar13 != -1569615261)
		{
			iVar14 = _0xcad4fe9398820d24(iVar2, 3);
			bVar17 = true;
			switch (iVar14)
			{
				case 3:
					bVar17 = !bVar15;
					break;
				case 2:
					bVar17 = !bVar16;
					break;
				default:
					bVar17 = false;
					break;
			}
			if (bVar17)
			{
				_give_weapon_to_ped_2(iVar1, iVar13, 0, false, true, iVar14, false, 0.5f, 1f, 752097756, false, 0f, false);
				switch (iVar14)
				{
					case 3:
						bVar15 = true;
						break;
					case 2:
						bVar16 = true;
						break;
				}
			}
		}
		get_current_ped_weapon(iVar2, &iVar13, false, 4, false);
		if (iVar13 != 0 && iVar13 != -1569615261)
		{
			iVar14 = _0xcad4fe9398820d24(iVar2, 4);
			bVar17 = true;
			if (bVar17)
			{
				_give_weapon_to_ped_2(iVar1, iVar13, 0, false, true, iVar14, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
	}
	freeze_entity_position(iVar1, true);
	set_entity_invincible(iVar1, true);
	set_entity_proofs(iVar1, 127, false);
	_0xae6004120c18df97(iVar1, 0, 0);
	set_ped_can_ragdoll(iVar1, false);
	func_1429(uParam0, iParam1, iVar1);
	return true;
}

int func_1215(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (func_1430(uParam0) - 1))
	{
		iVar2 = func_1431(uParam0, iVar0);
		if (!func_1432(uParam0, iVar2))
		{
		}
		else
		{
			if (iParam1 == iVar1)
			{
				return iVar2;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 255;
}

void func_1216(bool bParam0, bool bParam1, bool bParam2)
{
	Global_1071686->f_7 = 1;
	if ((Global_1296859->f_21 - Global_1071686->f_9) > 2)
	{
		if (bParam2)
		{
			func_1433(20f);
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
	if (func_356())
	{
		_0x236905c700fdb54d();
	}
	set_ped_reset_flag(player_ped_id(), 25, true);
	_0x3c8f74e8fe751614();
	_0x634f4a0562cf19b8();
	func_1434(250);
	if (bParam1)
	{
		_0x5651516d947abc53();
	}
}

void func_1217()
{
	func_1435(0);
}

void func_1218(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

void func_1219(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

bool func_1220(var uParam0, var uParam1, int iParam2)
{
	if (!func_1436(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -1519814088;
	uParam0->f_3 = iParam2;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1221(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return _datafile_get_num_nodes(&vParam0);
}

bool func_1222(var uParam0, int iParam1)
{
	uParam0->f_2 = 1969053457;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1223(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_1224(int iParam0)
{
	switch (iParam0)
	{
		case -628138157:
			return 0;
		case -360659748:
			return 1;
		case 1604231229:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_1225(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (!func_1437(&uParam0))
	{
		return false;
	}
	if (!func_1438(&uParam0, iParam5))
	{
		return false;
	}
	return true;
}

struct<8> func_1226(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_string(&Var0, uParam0))
	{
	}
	return Var0;
}

int func_1227(int iParam0)
{
	switch (iParam0)
	{
		case -1813649426:
			return 1;
		case -1728078503:
			return 2;
		case 664704845:
			return 4;
		case -656485570:
			return 8;
		case 856889675:
			return 16;
		case -40729341:
			return 32;
		case 513761045:
			return 64;
		case -608370326:
			return 128;
		case -1443098918:
			return 256;
		case -1138842803:
			return 512;
		case 1959327570:
			return 1024;
		case -1584776041:
			return 2048;
		case -1303182884:
			return 4096;
		case 1317645850:
			return 8192;
		case 2020911072:
			return 16384;
		case 1930555512:
			return 32768;
		default:
			break;
	}
	return 0;
}

Vector3 func_1228(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_vector(&vVar0, uParam0))
	{
	}
	return vVar0;
}

bool func_1229(var uParam0, var uParam1)
{
	if (!func_1439(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -232245152;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_1230(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = -1871400260;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1231(var uParam0)
{
	return func_970(uParam0, 60, 1);
}

struct<2> func_1232(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_1440(iParam0, &(Global_1071686->f_636), func_1102(iParam1));
			break;
		case 3:
			Var0.f_1 = func_1440(iParam0, &(Global_1071686->f_636.f_602), func_1102(iParam1));
			break;
		case 4:
			Var0.f_1 = func_1440(iParam0, &(Global_1071686->f_636.f_2104), func_1102(iParam1));
			break;
		case 5:
			Var0.f_1 = func_1440(iParam0, &(Global_1071686->f_636.f_12606), func_1102(iParam1));
			break;
		case 6:
			Var0.f_1 = func_1440(iParam0, &(Global_1071686->f_636.f_12908), func_1102(iParam1));
			break;
		case 7:
			Var0.f_1 = func_1440(iParam0, &(Global_1071686->f_636.f_15910), func_1102(iParam1));
			break;
		case 8:
			Var0.f_1 = func_1440(iParam0, &(Global_1071686->f_636.f_16512), func_1102(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_797();
	}
	return Var0;
}

int func_1233(int iParam0)
{
	return func_1441(iParam0);
}

int func_1234(int iParam0, int iParam1)
{
	if (!func_752(&Var0))
	{
		return -1;
	}
	if (!func_753(&Var0, 13, 0, 0, 1))
	{
		return -1;
	}
	if (!func_753(&Var0, 17, 0, 0, 1))
	{
		return -1;
	}
	if (!func_753(&Var0, 18, iParam0, 0, 1))
	{
		return -1;
	}
	if (!func_753(&Var0, 20, 0, 0, 1))
	{
		return -1;
	}
	iVar5 = func_754(&Var0, 1);
	if (!func_753(&Var0, 21, iParam1, 0, 1))
	{
		return -1;
	}
	iVar6 = _0xe13634bb6baf0734(Var0, Var0.f_1);
	return ((iVar5 - iVar6) - 1);
}

bool func_1235(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_1442(uParam0, 4194304);
		return true;
	}
	iVar0 = func_505(iParam1);
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
	func_1443(Global_265377->f_4[iVar0]);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_1444(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_1445(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_1446(&(Global_265377->f_63755[iVar0]));
	vVar2 = { func_1447(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_1448(iVar1) };
	}
	else if (func_1449(uParam0->f_17))
	{
		uParam0->f_53 = { func_1451(func_1450(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_1452(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_1453(uParam0->f_16) };
		if (!func_843(uParam0->f_53))
		{
			uParam0->f_53 = { func_1455(func_1454(uParam0->f_21.f_2)) };
		}
	}
	func_1456(uParam0);
	func_1442(uParam0, 4194304);
	return true;
}

int func_1236(int iParam0, int iParam1)
{
	if (!func_752(&Var0))
	{
		return -1;
	}
	if (!func_753(&Var0, 13, 0, 0, 1))
	{
		return -1;
	}
	if (!func_753(&Var0, 17, 0, 0, 1))
	{
		return -1;
	}
	if (!func_753(&Var0, 18, iParam0, 0, 1))
	{
		return -1;
	}
	if (!func_753(&Var0, 20, 0, 0, 1))
	{
		return -1;
	}
	if (!func_753(&Var0, 21, iParam1, 0, 1))
	{
		return -1;
	}
	if (!func_753(&Var0, 24, 0, 0, 0))
	{
		return -1;
	}
	iVar6 = func_754(&Var0, 2);
	uVar7 = Var0.f_1;
	iVar5 = (iVar6 - 1);
	while (iVar5 >= 0)
	{
		Var0.f_1 = uVar7;
		if (!func_753(&Var0, 25, iVar5, 0, 1))
		{
		}
		else
		{
			Var8 = { func_1457(Var0) };
			if (!func_1458(&Var8, 1))
			{
			}
			else
			{
				return iVar5;
			}
		}
		iVar5 = (iVar5 + -1);
	}
	return -1;
}

int func_1237(int iParam0, int iParam1)
{
	if (!func_752(&Var0))
	{
		return -1;
	}
	if (!func_753(&Var0, 13, 0, 0, 1))
	{
		return -1;
	}
	if (!func_753(&Var0, 17, 0, 0, 1))
	{
		return -1;
	}
	if (!func_753(&Var0, 18, iParam0, 0, 1))
	{
		return -1;
	}
	if (!func_753(&Var0, 26, 0, 0, 1))
	{
		return -1;
	}
	iVar5 = func_754(&Var0, 3);
	if (!func_753(&Var0, 28, iParam1, 0, 1))
	{
		return -1;
	}
	iVar6 = _0xe13634bb6baf0734(Var0, Var0.f_1);
	return ((iVar5 - iVar6) - 1);
}

int func_1238(int iParam0, int iParam1, int iParam2)
{
	if (!func_752(&Var0))
	{
		return 0;
	}
	if (!func_753(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&Var0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&Var0, 18, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&Var0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&Var0, 21, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_753(&Var0, 29, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&Var0, 30, func_1459(iParam2), 0, 1))
	{
		return 0;
	}
	func_1460(Var0, &uVar5);
	return uVar5;
}

int func_1239(int iParam0, int iParam1, int iParam2)
{
	if (!func_752(&uVar0))
	{
		return 0;
	}
	if (!func_753(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 18, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 21, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 29, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 30, func_1459(iParam2), 0, 1))
	{
		return 0;
	}
	return func_1461(&uVar0);
}

int func_1240(int iParam0, int iParam1, int iParam2)
{
	if (!func_752(&uVar0))
	{
		return 0;
	}
	if (!func_753(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 18, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 21, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 29, 0, 0, 1))
	{
		return 0;
	}
	if (!func_753(&uVar0, 30, func_1459(iParam2), 0, 1))
	{
		return 0;
	}
	return func_1462(&uVar0);
}

int func_1241(var uParam0)
{
	iVar0 = (5 - 1);
	while (iVar0 >= 0)
	{
		iVar3 = iVar0;
		iVar2 = func_1463(iVar3, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			if (iVar0 != (5 - 1))
			{
				iVar1 = shift_left(iVar1, iVar2);
			}
			iVar1 = (iVar1 || func_1464(iVar3, uParam0));
		}
		iVar0 = (iVar0 + -1);
	}
	return iVar1;
}

void func_1242(int iParam0)
{
	Global_1572887->f_106.f_14 = iParam0;
}

void func_1243(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, struct<2> Param64, int iParam66, int iParam67, int iParam68)
{
	func_1465(iParam67, Param0.f_33, 2, Param0.f_17, Param64, iParam66, -1, 0, 0, iParam68);
}

int func_1244(int iParam0)
{
	switch (iParam0)
	{
		case 1100375982:
			return 1637396385;
		case 734354744:
			return -750821175;
		case -8716208:
			return 863859481;
		case 130824026:
			return -1564456688;
		case -705903163:
			return -43444905;
		case -190306145:
			return 878149797;
		case -1211851008:
			return -1972063755;
		case 842749101:
			return 1140320446;
		case -384872762:
			return -928778254;
		case 220113328:
			return -291799454;
		case -920491224:
			return 575720194;
		case 539824333:
			return 1886703229;
		case 1309348282:
			return -1891887312;
		case -701311458:
			return -1521318110;
		case 2048329431:
			return 1231714993;
		case -1601260627:
			return -197170169;
		case -1239926065:
			return -1157925372;
		case -604384854:
			return -853455962;
		case -399874304:
			return -1060127263;
		case -743855838:
			return -1490734701;
		case 1782409743:
			return 1685495859;
		case -1801643148:
			return -583455445;
		case -936554981:
			return -567552001;
		case 1693634754:
			return -950321673;
		case 1445116843:
			return 664333876;
		case -1616419296:
			return 515385649;
		case -587679385:
			return 391853669;
		case 279467723:
			return -1520322625;
		case 1301079447:
			return 464168739;
		case 314334361:
			return 1683882639;
		case 92524177:
			return -95879657;
		case 1346815252:
			return 1757204629;
		case -667711246:
			return 2060758004;
		case 2132950130:
			return -177810373;
		case 1766283257:
			return 1442898590;
		case -408236271:
			return 1174971643;
		case -465704507:
			return -1719093715;
		default:
			break;
	}
	return 0;
}

var func_1245(struct<2> Param0)
{
	iVar0 = func_1466(Param0, -1);
	return func_1467(iVar0);
}

var func_1246(struct<2> Param0)
{
	uVar0 = func_1466(Param0, 0);
	return uVar0;
}

int func_1247(int iParam0)
{
	return &(Global_1107216->f_33[iParam0]);
}

bool func_1248(var uParam0, int iParam1)
{
	uParam0->f_2 = 1089670230;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_1249(var uParam0, var uParam1)
{
	uParam0->f_2 = -1248823782;
	if (!_datafile_get_hash(&iVar0, uParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	*uParam1 = func_1467(iVar0);
	uParam0->f_2 = 842085562;
	if (!_datafile_get_hash(&iVar0, uParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	uParam1->f_1 = iVar0;
	return true;
}

int func_1250(int iParam0)
{
	return (*Global_1297717)[iParam0]->f_1;
}

bool func_1251(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_1252(int iParam0, var uParam1)
{
	if (!_0x7907969497ea92f5(uParam1))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(uParam1))
	{
		return false;
	}
	_copy_memory(iParam0, &uVar0, 5);
	*iParam0 = uParam1;
	return true;
}

int func_1253(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (!func_1468(*uParam0, &(uParam0->f_1), 33417155, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1468(*uParam0, &(uParam0->f_1), 12932893, func_1469(*iParam1), 0, 1))
	{
		return 0;
	}
	if (!func_1468(*uParam0, &(uParam0->f_1), -2017210649, iParam1->f_1, 0, 1))
	{
		return 0;
	}
	_copy_memory(&(uParam2->f_2), iParam1, 2);
	return func_1470(*uParam0, uParam2, iParam3);
}

int func_1254(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2010581984:
			return 9;
		case -2001405328:
			return 5;
		case -1824322988:
			return 10;
		case -1518489911:
			return 11;
		case -1348549877:
			return 12;
		case -1211373264:
			return 16;
		case -1067974651:
			return 18;
		case -1040947274:
			return 13;
		case -890716772:
			return 7;
		case -775927147:
			return 4;
		case -761617270:
			return 17;
		case 518798111:
			return 1;
		case 522505504:
			return 3;
		case 1042373141:
			return 6;
		case 1803795142:
			return 14;
		case 1806630731:
			return 0;
		case 1859868723:
			return 2;
		case 1992773981:
			return 8;
		case 2015728894:
			return 15;
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

int func_1255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 536877168;
		case 1:
			return 536877072;
		case 2:
			return 536877168;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_1256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 112;
		case 1:
			return 16;
		case 2:
			return 112;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_1257(int iParam0)
{
	return func_1471(iParam0);
}

int func_1258(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_1;
}

int func_1259(var uParam0)
{
	if (func_843(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_1260(int iParam0, int iParam1)
{
	if (!func_356())
	{
		return 0;
	}
	if (!func_1075(iParam0))
	{
		return 15;
	}
	iVar0 = func_1414(iParam0);
	if (iVar0 == 0)
	{
		return 19;
	}
	if (!func_1472(iParam1, 2))
	{
		if (!_unlock_is_visible(iVar0))
		{
			return 18;
		}
	}
	if (!func_1472(iParam1, 1))
	{
		if (!_unlock_is_unlocked(iVar0))
		{
			return 17;
		}
	}
	return 0;
}

int func_1261(var uParam0, int iParam1)
{
	if (uParam0->f_2.f_1 == 0)
	{
		return 2;
	}
	if (!func_1472(iParam1, 4))
	{
		if (!_unlock_is_unlocked(uParam0->f_2.f_1))
		{
			return 4;
		}
	}
	if (!func_1472(iParam1, 8))
	{
		if (!_unlock_is_visible(uParam0->f_2.f_1))
		{
			return 3;
		}
	}
	return 0;
}

int func_1262(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_1472(iParam3, 16))
	{
		return 0;
	}
	if (!func_356())
	{
		return 0;
	}
	if (func_1088(uParam0->f_2, 1))
	{
		return 0;
	}
	if (func_1473(uParam2, iParam1))
	{
		return 0;
	}
	return 5;
}

int func_1263(var uParam0, int iParam1)
{
	if (func_1472(iParam1, 16384))
	{
		return 0;
	}
	iVar0 = func_1474(func_1371());
	if (is_bit_set(uParam0->f_25.f_2, iVar0))
	{
		return 14;
	}
	return 0;
}

int func_1264(int iParam0, int iParam1)
{
	if (func_1472(iParam1, 1024))
	{
		return 0;
	}
	if (!func_1075(iParam0))
	{
		return 15;
	}
	if (!func_1476(func_1475(iParam0)))
	{
		return 0;
	}
	iVar1 = player_id();
	iVar0 = _0x901e0dc25080c8b9(iVar1);
	if (_0x4be6c13a45cca8ec(iVar0) != iVar1)
	{
		return 28;
	}
	return 0;
}

int func_1265(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_1075(iParam1))
	{
		return 15;
	}
	if (!func_356())
	{
		return 0;
	}
	if (func_1472(iParam3, 32))
	{
		return 0;
	}
	if (func_1088(uParam0->f_2, 1))
	{
		return 0;
	}
	if (!_0xd6f6acf4392187fb(iParam2))
	{
		return 23;
	}
	if (!_0x93a91a351a07360e(iParam2))
	{
		return 24;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam2);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 29;
	}
	if (!network_is_player_active(iVar0))
	{
		return 30;
	}
	if (func_1477(iVar0, iParam1))
	{
		return 16;
	}
	return 0;
}

int func_1266(var uParam0, int iParam1, int iParam2)
{
	if (!func_1478(uParam0->f_2))
	{
		return 21;
	}
	if (!func_356())
	{
		return 0;
	}
	if (func_1472(iParam2, 64))
	{
		return 0;
	}
	if (func_1088(uParam0->f_2, 1))
	{
		return 0;
	}
	if (!_0xd6f6acf4392187fb(iParam1))
	{
		return 23;
	}
	if (!_0x93a91a351a07360e(iParam1))
	{
		return 24;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam1);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 29;
	}
	if (!network_is_player_active(iVar0))
	{
		return 30;
	}
	if (func_1479(iVar0, uParam0->f_2))
	{
		return 22;
	}
	return 0;
}

int func_1267(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_1480(iParam0);
		if (iParam1 == -1)
		{
			return 26;
		}
	}
	if (func_1418(iParam1) != 0)
	{
		if (func_1472(iParam2, 2048))
		{
			return 0;
		}
		return 25;
	}
	return 0;
}

int func_1268(int iParam0)
{
	if (!func_356())
	{
		return 0;
	}
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return 23;
	}
	if (!_0x93a91a351a07360e(iParam0))
	{
		return 24;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 29;
	}
	if (!network_is_player_active(iVar0))
	{
		return 30;
	}
	if (func_843((*Global_1056141)[iVar0]->f_2))
	{
		return 6;
	}
	return 0;
}

int func_1269(int iParam0, var uParam1, int iParam2)
{
	if (func_1472(iParam2, 256))
	{
		return 0;
	}
	if (uParam1->f_31.f_1 == 493038497)
	{
		return 0;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (_network_is_player_index_valid(iVar0))
	{
		if (network_is_player_active(iVar0))
		{
			iVar1 = func_1481(iVar0);
		}
		else
		{
			return 30;
		}
	}
	else
	{
		return 29;
	}
	if (iVar1 == 0)
	{
		return 31;
	}
	switch (uParam1->f_31.f_1)
	{
		case -1563022819:
			if (iVar1 != 1)
			{
				return 7;
			}
			break;
		case -858967395:
			if (iVar1 != 2)
			{
				return 8;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_1270(var uParam0, int iParam1, int iParam2)
{
	if (func_1472(iParam2, 512))
	{
		return 0;
	}
	if (_0x149a2751ab66ac02(iParam1) < &uParam0->f_4[0])
	{
		return 27;
	}
	return 0;
}

int func_1271(var uParam0, int iParam1)
{
	if (func_1472(iParam1, 128))
	{
		return 0;
	}
	if (func_1088(uParam0->f_2, 1))
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = 493038497;
	Var0.f_31.f_1 = 493038497;
	func_1482(&Var0);
	if (!func_843(Var0))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 <= 3)
	{
		iVar34 = (Var0.f_15[iVar33] || Var0.f_15.f_5[iVar33]) // PointerArith;
		if (iVar34 == 0)
		{
		}
		else
		{
			iVar35 = (uParam0->f_15.f_5[iVar33] && iVar34);
			if (iVar35 != 0)
			{
				return 9;
			}
		}
		iVar33++;
	}
	return 0;
}

int func_1272(var uParam0, int iParam1)
{
	if (func_1472(iParam1, 4096))
	{
		return 0;
	}
	if (&uParam0->f_4[1] > 0)
	{
		iVar1 = get_max_num_network_peds();
		iVar0 = get_num_reserved_mission_peds(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[1])
		{
			return 10;
		}
	}
	if (&uParam0->f_4[2] > 0)
	{
		iVar1 = get_max_num_network_objects();
		iVar0 = get_num_reserved_mission_objects(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[2])
		{
			return 11;
		}
	}
	if (&uParam0->f_4[3] > 0)
	{
		iVar1 = get_max_num_network_vehicles();
		iVar0 = get_num_reserved_mission_vehicles(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[3])
		{
			return 12;
		}
	}
	if (&uParam0->f_4[4] > 0)
	{
		iVar1 = get_max_num_network_pickups();
		iVar0 = _0x62be3ecc79fbd004(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[4])
		{
			return 13;
		}
	}
	return 0;
}

int func_1273(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 23;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 29;
	}
	if (!network_is_player_active(iVar0))
	{
		return 30;
	}
	if (func_1422(iVar0))
	{
		return 44;
	}
	return 0;
}

int func_1274(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1075(iParam3))
	{
		return 15;
	}
	if (!func_1076(iParam4))
	{
		return 20;
	}
	vVar0 = { func_1282(iParam4) };
	bVar4 = func_82(iParam1, 536870912);
	if (func_1091(&(uParam0->f_25), 2015728894) || func_1091(&(uParam0->f_25), -1211373264))
	{
		if (!func_1483(iParam2, vVar0, uVar3))
		{
			return 33;
		}
	}
	iVar5 = func_1484(*uParam0);
	iVar6 = func_1485(uParam0->f_2, iVar5);
	if (!bVar4)
	{
		iVar7 = 0;
		while (iVar7 < iVar6)
		{
			vVar8 = { func_1486(uParam0->f_2, iVar5, iVar7) };
			if (func_116(vVar8))
			{
			}
			else if (_0x397769175a7dbb30(vVar8, 20f, 0, 0, 575122756))
			{
				return 34;
			}
			iVar7++;
		}
	}
	return 0;
}

int func_1275(var uParam0, int iParam1)
{
	iVar0 = func_1484(*uParam0);
	iVar1 = func_1485(uParam0->f_2, iVar0);
	bVar2 = func_82(iParam1, 536870912);
	if (!bVar2)
	{
		iVar3 = 0;
		while (iVar3 < iVar1)
		{
			vVar4 = { func_1486(uParam0->f_2, iVar0, iVar3) };
			if (func_116(vVar4))
			{
			}
			else if (_0x397769175a7dbb30(vVar4, 20f, 0, 0, 575122756))
			{
				return 34;
			}
			iVar3++;
		}
	}
	return 0;
}

int func_1276(var uParam0, int iParam1, int iParam2)
{
	bVar3 = func_1472(iParam1, 1073741824);
	bVar4 = func_1472(iParam1, 536870912);
	if (func_1472(iParam1, 8192))
	{
		vVar5 = { 0f, 0f, 0f };
	}
	else
	{
		vVar5 = { func_1362(_0x4be6c13a45cca8ec(iParam2)) };
	}
	func_1487(*uParam0, &iVar1, &uVar2);
	iVar8 = func_1489(iVar1, uVar2, func_1488(iVar1), vVar5, !bVar3, bVar4, 1, -1082130432);
	if (iVar8 != 0)
	{
		switch (iVar8)
		{
			case 7:
				iVar0 = 39;
				break;
			case 8:
				iVar0 = 40;
				break;
			case 3:
				iVar0 = 43;
				break;
			case 6:
				iVar0 = 42;
				break;
			case 5:
				iVar0 = 38;
				break;
			case 4:
				iVar0 = 34;
				break;
			case 1:
				iVar0 = 35;
				break;
			case 11:
				iVar0 = 32;
				break;
			case 2:
				iVar0 = 37;
				break;
			case 12:
				iVar0 = 36;
				break;
			case 15:
				iVar0 = 44;
				break;
			default:
				iVar0 = 41;
				break;
		}
		return iVar0;
	}
	return 0;
}

bool func_1277(var uParam0)
{
	uParam0->f_2 = -34107655;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_1278(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_2 = 1808784790;
	uParam0->f_3 = uParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1279(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

bool func_1280()
{
	return &Global_1940085 == 1;
}

bool func_1281()
{
	return &Global_1940085 == 2;
}

Vector3 func_1282(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_7.f_1;
}

var func_1283(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_7;
}

void func_1284(var uParam0, var uParam1, vector3 vParam2, var uParam5)
{
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar12 = int_to_playerindex(iVar2);
		if (!_network_is_player_index_valid(iVar12))
		{
		}
		else if (!network_is_player_active(iVar12))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(uParam1, iVar12))
		{
		}
		else if (_0x424b17a7dc5c90bc(iVar12))
		{
			(*uParam0)[0] = iVar12;
			Jump @159; //curOff = 85
		}
		else if (func_1490(iVar12, vParam2, uParam5))
		{
			if (iVar0 + 1 < 7)
			{
				(*uParam0)[(1 + iVar0)] = iVar12;
				iVar0++;
			}
		}
		else if (iVar1 < 7)
		{
			iVar4[iVar1] = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		iVar3 = &iVar4[iVar2];
		iVar12 = int_to_playerindex(iVar3);
		if (iVar0 + 1 < 7)
		{
			(*uParam0)[(1 + iVar0)] = iVar12;
			iVar0++;
		}
		iVar2++;
	}
}

void func_1285(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 31, 33, &uParam1);
}

bool func_1286(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	iVar0 = func_1085(uParam0->f_2);
	iVar1 = func_1257(iVar0);
	*uParam1 = 0;
	switch (iVar1)
	{
		case 2:
			*uParam1 = func_1491();
			break;
		case 1:
			*uParam1 = func_1492();
			break;
		case 0:
			*uParam1 = func_1493(uParam0, bParam3, bParam4, &uParam5, iParam2);
			break;
		default:
			*uParam1 = 1;
			break;
	}
	return *uParam1 == 0;
}

void func_1287(int iParam0, int iParam1, struct<2> Param2, var uParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam9 == 255)
	{
		iParam9 = player_id();
	}
	if (!func_843(Param2))
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam9))
	{
		return;
	}
	if (!network_is_player_active(iParam9))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_5 = iParam0;
	Var0.f_6 = iParam1;
	Var0.f_7 = { Param2 };
	Var0.f_9 = uParam4;
	Var0.f_10 = iParam9;
	Var0.f_12 = iParam10;
	Var0.f_13 = iParam11;
	Var0.f_4 = 0;
	_copy_memory(&(Var0.f_27), &iParam5, 4);
	func_1494(&Var0);
}

void func_1288(var uParam0, int iParam1)
{
	func_83(&(uParam0->f_1), iParam1);
}

void func_1289(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_1290(var uParam0, int iParam1)
{
	return func_82(uParam0->f_1, iParam1);
}

void func_1291(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_1306(&(uParam0->f_81), 262144))
	{
		return;
	}
	Var0 = uParam0->f_3[iParam1]->f_1;
	Var0.f_1 = { func_1207(sParam2) };
	StringCopy(&(Var0.f_4), "", 64);
	if (func_1495(Var0))
	{
	}
}

void func_1292(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
}

void func_1293(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_3[iParam1] = iParam2;
}

bool func_1294(bool bParam0)
{
	bVar0 = true;
	bVar1 = false;
	if ((((!func_1496(-1157809126) || !func_1496(997972179)) || !func_1496(-2073417944)) || !func_1496(-1694359093)) || !func_1496(-794964047))
	{
		bVar0 = false;
		bVar1 = true;
	}
	if (!_0xd9130842d7226045("Moonshine_Band_sounds", 0))
	{
		bVar0 = false;
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = func_1112(iVar2, iVar3);
			if (iVar4 != 0)
			{
				if (!func_1496(iVar4))
				{
					bVar0 = false;
					bVar1 = true;
				}
			}
			iVar5 = func_111(iVar2, 0);
			if (!_has_scenario_type_loaded(iVar5, false))
			{
				bVar0 = false;
			}
			iVar5 = func_111(iVar2, 1);
			if (!_has_scenario_type_loaded(iVar5, false))
			{
				bVar0 = false;
			}
			iVar5 = func_111(iVar2, 2);
			if (!_has_scenario_type_loaded(iVar5, false))
			{
				bVar0 = false;
			}
			iVar3++;
		}
		iVar2++;
	}
	if (bVar0)
	{
		return true;
	}
	if (bVar1 || bParam0)
	{
		return false;
	}
	return true;
}

bool func_1295(var uParam0, int iParam1, var uParam2)
{
	if (!network_does_network_id_exist(uParam0->f_3[iParam1]->f_1))
	{
		if (!func_378())
		{
			return true;
		}
		iVar0 = func_1497(iParam1);
		iVar1 = uParam2->f_2;
		vVar2 = { func_1498(iParam1, iVar1, 0) };
		if (func_412(&(uParam0->f_3[iParam1]->f_1), iVar0, vVar2, 0f, 1, 0, 0, 1, 1))
		{
			func_381();
			_set_ped_body_component(net_to_ped(uParam0->f_3[iParam1]->f_1), func_1499(iParam1, iVar1));
			_update_ped_variation(net_to_ped(uParam0->f_3[iParam1]->f_1), false, true, true, true, false);
			set_blocking_of_non_temporary_events(net_to_ped(uParam0->f_3[iParam1]->f_1), true);
			_network_set_entity_invisible_to_network(net_to_ped(uParam0->f_3[iParam1]->f_1), true);
			set_entity_visible_in_cutscene(net_to_ped(uParam0->f_3[iParam1]->f_1), 1, 0, uParam2->f_1);
			func_1500(net_to_ped(uParam0->f_3[iParam1]->f_1), 1);
			set_ped_config_flag(net_to_ped(uParam0->f_3[iParam1]->f_1), 297, true);
			set_ped_config_flag(net_to_ped(uParam0->f_3[iParam1]->f_1), 26, true);
			set_ped_can_ragdoll(net_to_ped(uParam0->f_3[iParam1]->f_1), false);
			set_ped_can_ragdoll_from_player_impact(net_to_ped(uParam0->f_3[iParam1]->f_1), false);
			set_entity_invincible(net_to_ped(uParam0->f_3[iParam1]->f_1), true);
			return true;
		}
	}
	return false;
}

int func_1296(var uParam0, int iParam1)
{
	sVar0 = func_1501(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		iVar1 = _create_anim_scene(sVar0, 32776, 0, true, true);
		uParam0->f_3[iParam1]->f_2 = _anim_scene_to_net(iVar1);
		load_anim_scene(iVar1);
		return 1;
	}
	return 0;
}

void func_1297(var uParam0, int iParam1)
{
	func_99(&(uParam0->f_1), iParam1);
}

bool func_1298(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = int_to_participantindex(iVar1);
		if (network_is_participant_active(iVar2))
		{
			iVar3 = network_get_player_index(iVar2);
			if (bParam3 && player_id() == iVar3)
			{
			}
			else if (network_is_player_active(iVar3))
			{
				iVar4 = get_player_ped(iVar3);
				if (is_entity_in_volume(iVar4, (*uParam0)[iParam1]->f_15, true, 0))
				{
					iVar0++;
					if (iVar0 > iParam2)
					{
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	return false;
}

bool func_1299(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			iVar0 = 1;
			break;
		case 3:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 0;
			break;
		case 5:
			iVar0 = 1;
			break;
		case 0:
			iVar0 = 0;
			break;
		case 2:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_1300(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return get_hash_key(func_1502(iParam0, iParam1, bParam2, bParam3, 1));
}

int func_1301(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			iVar0 = 1894223465;
			break;
		case 3:
			iVar0 = 2108565031;
			break;
		case 1:
			iVar0 = 1510720917;
			break;
		case 5:
			iVar0 = -381992152;
			break;
		case 2:
			iVar0 = 662206420;
			break;
	}
	return iVar0;
}

int func_1302(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = -63142583;
			break;
	}
	return iVar0;
}

int func_1303(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = -967333571;
			break;
		case 2:
			iVar0 = -82199229;
			break;
	}
	return iVar0;
}

Vector3 func_1304(int iParam0, int iParam1, int iParam2)
{
	vVar6 = { func_330(iParam1) };
	fVar9 = func_331(iParam1);
	vVar0 = { func_1320(iParam0, iParam2) };
	vVar3 = { _get_object_offset_from_coords(vVar6, fVar9, vVar0) };
	return vVar3;
}

Vector3 func_1305(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { func_1321(iParam0, iParam2) };
	fVar3 = func_331(iParam1);
	vVar0.f_2 = (vVar0.z + fVar3);
	return vVar0;
}

bool func_1306(var uParam0, int iParam1)
{
	return func_82(uParam0->f_15, iParam1);
}

void func_1307(var uParam0, int iParam1, vector3 vParam2)
{
	if (!func_1306(uParam0, 8))
	{
	}
	if (network_does_network_id_exist(iParam1))
	{
		uParam0->f_9 = iParam1;
	}
	if (!func_116(vParam2))
	{
		uParam0->f_10 = _create_volume_sphere(vParam2, 0f, 0f, 0f, 4f, 4f, 4f);
	}
	_text_database_request("PIANOAU");
	func_1308(uParam0, 2);
}

void func_1308(var uParam0, int iParam1)
{
	if (!func_1306(uParam0, iParam1))
	{
		func_83(&(uParam0->f_15), iParam1);
	}
}

void func_1309(var uParam0, int iParam1)
{
	if (func_1306(uParam0, iParam1))
	{
		func_99(&(uParam0->f_15), iParam1);
	}
}

bool func_1310(var uParam0, var uParam1)
{
	if (func_1503(&(uParam0->f_81)) == 1)
	{
		func_1313(&(uParam0->f_81), &(uParam1->f_118), 5, 1);
		func_1292(&(uParam0->f_81), 0);
		return true;
	}
	if (func_1503(&(uParam0->f_81)) == 2)
	{
		func_1313(&(uParam0->f_81), &(uParam1->f_118), 6, 1);
		func_1292(&(uParam0->f_81), 0);
		return true;
	}
	return false;
}

int func_1311(var uParam0)
{
	return uParam0->f_14;
}

void func_1312(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

void func_1313(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	func_1312(uParam0, iParam2);
	uParam1->f_7 = 1;
	uParam1->f_1 = { func_1207("PIANO_PLAYER") };
	func_1504(uParam0, uParam1);
	if (bParam3)
	{
		func_444(uParam0, 1);
		func_1314(uParam1, 3);
	}
	else
	{
		func_1314(uParam1, 4);
	}
}

void func_1314(var uParam0, int iParam1)
{
	uParam0->f_107 = iParam1;
}

void func_1315(var uParam0, var uParam1)
{
	if (!network_does_network_id_exist(uParam0->f_81.f_9))
	{
		return;
	}
	if (!_text_database_has_loaded("PIANOAU"))
	{
		_text_database_request("PIANOAU");
		return;
	}
	uParam1->f_8 = func_1505(&(uParam0->f_81)) >= 0;
	func_1506(&(uParam0->f_81));
	switch (uParam1->f_107)
	{
		case 0:
			if (!func_465(&(uParam0->f_81.f_3)))
			{
				func_444(&(uParam0->f_81.f_3), 1);
			}
			if (func_1141(uParam1, 4))
			{
				func_1308(&(uParam0->f_81), 8);
			}
			func_1314(uParam1, 1);
			break;
		case 1:
			if (!func_1507(&(uParam0->f_81)))
			{
				if (!func_1306(&(uParam0->f_81), 4) && uParam1->f_8)
				{
					func_1313(&(uParam0->f_81), uParam1, 0, 0);
					func_1308(&(uParam0->f_81), 4);
				}
				else
				{
					if (func_1508(&(uParam0->f_81.f_3)) > 120f)
					{
						if (uParam1->f_8)
						{
							func_1308(&(uParam0->f_81), 512);
						}
						else if (func_1306(&(uParam0->f_81), 512))
						{
							func_1309(&(uParam0->f_81), 512);
						}
						func_1313(&(uParam0->f_81), uParam1, 2, 0);
					}
					Jump @362; //curOff = 310
					if (!func_1306(&(uParam0->f_81), 65536) && uParam1->f_8)
					{
						func_1313(&(uParam0->f_81), uParam1, 1, 0);
						func_1308(&(uParam0->f_81), 65536);
					}
					Jump @756; //curOff = 362
					if (!func_465(&(uParam0->f_81.f_3)))
					{
						func_444(&(uParam0->f_81.f_3), 1);
					}
					switch (func_1311(&(uParam0->f_81)))
					{
						case 4:
							if ((!func_1306(&(uParam0->f_81), 256) && uParam1->f_8) && func_1508(&(uParam0->f_81.f_3)) > 120f)
							{
								func_1313(&(uParam0->f_81), uParam1, 4, 0);
							}
							break;
					}
					if (func_1306(&(uParam0->f_81), 256))
					{
						if (!func_1306(&(uParam0->f_81), 262144) && func_1508(&(uParam0->f_81.f_3)) > 120f)
						{
							func_1308(&(uParam0->f_81), 262144);
						}
					}
					Jump @756; //curOff = 533
					if (!func_465(&(uParam0->f_81)))
					{
						func_444(&(uParam0->f_81), 1);
					}
					if (func_1508(&(uParam0->f_81)) > 5f)
					{
						func_466(&(uParam0->f_81));
						func_1314(uParam1, 4);
					}
					Jump @756; //curOff = 585
					if (!func_1166(net_to_ped(uParam0->f_81.f_9)))
					{
						*uParam1 = uParam0->f_81.f_9;
						func_1509(uParam1);
						func_1314(uParam1, 5);
					}
					Jump @756; //curOff = 629
					if (!func_1166(net_to_ped(uParam0->f_81.f_9)))
					{
						if (((func_1311(&(uParam0->f_81)) == 4 || func_1311(&(uParam0->f_81)) == 3) || func_1311(&(uParam0->f_81)) == 7) || func_1306(&(uParam0->f_81), 256))
						{
							func_466(&(uParam0->f_81.f_3));
							func_1314(uParam1, 2);
						}
						else
						{
							func_444(&(uParam0->f_81.f_3), 1);
							func_1314(uParam1, 1);
						}
					}
				}
			}
			default:
				break;
	}
}

int func_1316(int iParam0, int iParam1, int iParam2)
{
	vVar1 = { func_1498(iParam0, iParam1, iParam2) };
	iVar4 = func_111(iParam0, iParam2);
	fVar5 = func_1510(iParam0, iParam1, iParam2);
	iVar0 = create_scenario_point(iVar4, vVar1, fVar5, 0f, 0, 0);
	_set_scenario_point_flag(iVar0, 25, true);
	_set_scenario_point_flag(iVar0, 23, true);
	_set_scenario_point_flag(iVar0, 22, true);
	_set_scenario_point_flag(iVar0, 51, true);
	return iVar0;
}

Vector3 func_1317(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			vVar0 = { 1.417272f, 2.047718f, 2f };
			break;
		case 3:
			vVar0 = { 1.458491f, 2.389655f, 2f };
			break;
		case 1:
			vVar0 = { 1.205018f, 2.511029f, 2f };
			break;
		case 5:
			vVar0 = { 3.036424f, 1.601478f, 2f };
			break;
		case 2:
			vVar0 = { 1.445574f, 1.933199f, 2f };
			break;
		case 0:
			vVar0 = { 1.958524f, 1.741617f, 2f };
			break;
	}
	return vVar0;
}

float func_1318(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			fVar0 = -108.9085f;
			break;
		case 3:
			fVar0 = -147.867f;
			break;
		case 1:
			fVar0 = 169.0042f;
			break;
		case 5:
			fVar0 = -151.553f;
			break;
		case 2:
			fVar0 = -91.32124f;
			break;
		case 0:
			fVar0 = -179.9735f;
			break;
	}
	return fVar0;
}

Vector3 func_1319(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			vVar0 = { -3.188033f, -2.631638f, 1f };
			break;
		case 3:
			vVar0 = { -2.342259f, -0.710895f, 1f };
			break;
		case 1:
			vVar0 = { 1.854904f, -0.316329f, 1f };
			break;
		case 5:
			vVar0 = { 3.666471f, -1.12333f, 1f };
			break;
		case 2:
			vVar0 = { 3.861257f, -2.966609f, 1f };
			break;
		case 0:
			vVar0 = { -0.749714f, -0.357881f, 1f };
			break;
	}
	vVar0 = { vVar0 + func_1511(iParam0) };
	return vVar0;
}

Vector3 func_1320(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			vVar0 = { func_1512(iParam0) };
			break;
		case 1:
			vVar0 = { func_1513(iParam0) };
			break;
		case 2:
			vVar0 = { func_1514(iParam0) };
			break;
	}
	return vVar0;
}

Vector3 func_1321(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			vVar0 = { func_1515(iParam0) };
			break;
		case 1:
			vVar0 = { func_1516(iParam0) };
			break;
	}
	return vVar0;
}

bool func_1322()
{
	if (!func_620())
	{
		return false;
	}
	return func_43(Global_1901947->f_44.f_5, 256);
}

int func_1323(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam4)
	{
		(*uParam1)[participant_id_to_int()]->f_2[iParam3] = _0x569f1e1237508deb(*iParam2);
		uVar0 = &(*uParam1)[participant_id_to_int()]->f_2[iParam3];
	}
	else
	{
		iVar1 = _0xa6c0787443c9583e(uParam0->f_3[iParam3]->f_1);
		iVar2 = network_get_participant_index(iVar1);
		if (func_47(iVar2) && network_is_participant_active(iVar2))
		{
			uVar0 = &(*uParam1)[iVar2]->f_2[iParam3];
			if (bParam5)
			{
				(*uParam1)[participant_id_to_int()]->f_2[iParam3] = 0;
			}
		}
	}
	return uVar0;
}

void func_1324(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!network_does_network_id_exist(uParam0->f_3[iParam1]->f_1))
	{
		return;
	}
	if ((((((iParam2 == 6 && is_ped_active_in_scenario(iParam3, 0)) && func_1331(iParam3, 0)) && iParam5 == func_1300(iParam1, 6, bParam6, is_ped_male(iParam3))) && (func_326(uParam0) == 2 || bParam7)) && uParam0->f_79 != -1) && uParam0->f_79 == uParam4->f_102)
	{
		iVar1 = -1;
		switch (iParam1)
		{
			case 0:
				if (bParam6)
				{
					iVar0 = 12;
				}
				else
				{
					iVar0 = 5;
				}
				break;
			case 1:
				if (bParam6)
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = 2;
				}
				break;
			case 3:
				if (bParam6)
				{
					iVar0 = 8;
				}
				else
				{
					iVar0 = 1;
				}
				break;
			case 2:
				if (bParam6)
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 4;
				}
				if (bParam8)
				{
					if (bParam6)
					{
						iVar1 = 13;
					}
					else
					{
						iVar1 = 6;
					}
				}
				break;
			case 4:
				if (bParam6)
				{
					iVar0 = 7;
				}
				else
				{
					iVar0 = 0;
				}
				break;
			case 5:
				if (bParam6)
				{
					iVar0 = 10;
				}
				else
				{
					iVar0 = 3;
				}
				break;
		}
		iVar2 = 0;
		if (iParam1 == 2)
		{
			if (iVar1 != -1)
			{
				if (!uParam4->f_99)
				{
					uParam4->f_99 = 1;
				}
				_0x8d29fdf565ded9ae(iParam3, 978192019, iVar1);
				_0x448f2647dd6f2e27(iParam3, 978192019, iVar1, func_1517(iParam1, bParam6, is_ped_male(iParam3)), 2);
				iVar2 = 1;
			}
			else if (uParam4->f_99)
			{
				if (!func_325(uParam0, 0))
				{
					_0x018abe833ca64d2a(iParam3, 978192019);
					_0xbc07ca8fd710e7fd(iParam3, 978192019);
					uParam4->f_99 = 0;
				}
			}
		}
		_0x8d29fdf565ded9ae(iParam3, 978192019, iVar0);
		_0x448f2647dd6f2e27(iParam3, 978192019, iVar0, func_1517(iParam1, bParam6, is_ped_male(iParam3)), iVar2);
	}
	else
	{
		_0x018abe833ca64d2a(iParam3, 978192019);
		_0xbc07ca8fd710e7fd(iParam3, 978192019);
		if ((func_71(iParam3) || !func_1331(iParam3, 0)) || _0x3ab6c7b0bb0df4b1(iParam3, -1))
		{
			set_ped_can_play_gesture_anims(iParam3, 0, 4);
			_0x7edb3c766b0d073f(iParam3);
		}
	}
}

void func_1325(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_582(uParam0->f_3[iParam3]->f_3))
	{
		if (uParam0->f_3[iParam3]->f_3 != player_id())
		{
			func_1518(uParam1, &((*uParam1)[iParam3]->f_10), 512, iParam3);
			func_1518(uParam1, &((*uParam1)[iParam3]->f_11), 1024, iParam3);
			func_1518(uParam1, &((*uParam1)[iParam3]->f_12), 2048, iParam3);
			func_1518(uParam1, &((*uParam1)[iParam3]->f_13), 4096, iParam3);
			return;
		}
	}
	else if (func_1129(uParam0, player_id()))
	{
		func_1518(uParam1, &((*uParam1)[iParam3]->f_10), 512, iParam3);
		func_1518(uParam1, &((*uParam1)[iParam3]->f_11), 1024, iParam3);
		func_1518(uParam1, &((*uParam1)[iParam3]->f_12), 2048, iParam3);
		func_1518(uParam1, &((*uParam1)[iParam3]->f_13), 4096, iParam3);
		return;
	}
	if (&Global_1940085 != uParam1->f_97)
	{
		func_1518(uParam1, &((*uParam1)[iParam3]->f_10), 512, iParam3);
		func_1518(uParam1, &((*uParam1)[iParam3]->f_12), 2048, iParam3);
		func_1518(uParam1, &((*uParam1)[iParam3]->f_11), 1024, iParam3);
		func_1518(uParam1, &((*uParam1)[iParam3]->f_13), 4096, iParam3);
	}
	if ((((((((((!ped_has_use_scenario_task(Global_34) && !_0xec7e480ff8bd0bed(Global_34)) && !is_ped_in_combat(Global_34, 0)) && !func_717()) && !func_718(-92416669)) && !func_718(872480335)) && !is_ped_in_melee_combat(Global_34)) && (iParam4 == 1 || iParam4 == 2)) && !does_entity_exist(_get_ped_using_scenario_point((*uParam1)[iParam3][1]))) && !func_1298(uParam1, iParam3, 0, 1)) && func_1519(iParam3, (*uParam1)[iParam3][1]))
	{
		func_1518(uParam1, &((*uParam1)[iParam3]->f_12), 2048, iParam3);
		func_1518(uParam1, &((*uParam1)[iParam3]->f_11), 1024, iParam3);
		func_1518(uParam1, &((*uParam1)[iParam3]->f_13), 4096, iParam3);
		if (!func_341((*uParam1)[iParam3]->f_10))
		{
			(*uParam1)[iParam3]->f_10 = func_685(func_1520(0, iParam3), -719620017, _get_scenario_point_coords((*uParam1)[iParam3][1], true), 1f, 3, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
			func_1521(uParam1, 512, iParam3);
		}
		else
		{
			if (uParam0->f_3[iParam3]->f_3 == player_id())
			{
				func_1518(uParam1, &((*uParam1)[iParam3]->f_10), 512, iParam3);
				if (iParam4 == 2)
				{
					func_1127((*uParam2)[participant_id_to_int()], 4);
					iVar0 = 6;
				}
				else
				{
					func_1128((*uParam2)[participant_id_to_int()], 4);
					iVar0 = 3;
				}
				_task_use_scenario_point(Global_34, (*uParam1)[iParam3][1], func_1502(iParam3, iVar0, !func_1126((*uParam2)[participant_id_to_int()], 2), is_ped_male(Global_34), 1), 0, true, false, 0, false, -1f, false);
				return;
			}
			if (func_343((*uParam1)[iParam3]->f_10, 1) && func_1522(uParam1))
			{
				func_1523(7, iParam3, 0);
				(*uParam1)[iParam3]->f_7 = 0;
				if (func_1098())
				{
					func_1127((*uParam2)[participant_id_to_int()], 2);
				}
				else
				{
					func_1128((*uParam2)[participant_id_to_int()], 2);
				}
			}
		}
	}
	else
	{
		func_1518(uParam1, &((*uParam1)[iParam3]->f_10), 512, iParam3);
		if (((is_ped_active_in_scenario(Global_34, 0) && _get_scenario_point_type_ped_is_using(Global_34) == func_111(iParam3, 1)) && !_is_app_active(1433015236)) && !_is_app_running(1433015236))
		{
			if (is_any_speech_playing(Global_34))
			{
				func_63(&(uParam1->f_103));
			}
			bVar1 = (((is_any_speech_playing(Global_34) || !func_1331(Global_34, 0)) || (func_64(&(uParam1->f_103)) && func_1524(&(uParam1->f_103)) < 2f)) || uParam0->f_3[iParam3]->f_3 != player_id());
			if (!func_341((*uParam1)[iParam3]->f_11))
			{
				(*uParam1)[iParam3]->f_11 = func_685(func_1520(1, iParam3), 992265328, _get_scenario_point_coords((*uParam1)[iParam3][1], true), 1070386381, 1, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				func_1521(uParam1, 1024, iParam3);
			}
			if (uParam0->f_3[iParam3]->f_3 != player_id())
			{
				_0x018abe833ca64d2a(Global_34, 978192019);
				_0xbc07ca8fd710e7fd(Global_34, 978192019);
				clear_ped_tasks(Global_34, 1, 0);
			}
			if (bVar1)
			{
				if (func_342((*uParam1)[iParam3]->f_11, 0))
				{
					func_338((*uParam1)[iParam3]->f_11, 0, 1, 1);
				}
			}
			else if (!func_342((*uParam1)[iParam3]->f_11, 0))
			{
				func_338((*uParam1)[iParam3]->f_11, 1, 1, 1);
			}
			if (func_343((*uParam1)[iParam3]->f_11, 1) && func_1522(uParam1))
			{
				func_1523(8, iParam3, 0);
			}
			if (!func_341((*uParam1)[iParam3]->f_12))
			{
				(*uParam1)[iParam3]->f_12 = func_475(func_1520(5, iParam3), 129547951, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_1521(uParam1, 2048, iParam3);
			}
			if (((bVar1 || _0x569f1e1237508deb(Global_34) != func_1300(iParam3, 6, !func_1126((*uParam2)[participant_id_to_int()], 2), is_ped_male(Global_34))) || !func_325(uParam0, 7000)) || func_1525((*uParam1)[iParam3]->f_11, 1))
			{
				if (func_342((*uParam1)[iParam3]->f_12, 0))
				{
					func_338((*uParam1)[iParam3]->f_12, 0, 1, 1);
				}
			}
			else if (!func_342((*uParam1)[iParam3]->f_12, 0))
			{
				func_338((*uParam1)[iParam3]->f_12, 1, 1, 1);
			}
			if (func_697((*uParam1)[iParam3]->f_12, 1))
			{
				func_1526(iParam3, player_ped_id(), func_1126((*uParam2)[participant_id_to_int()], 2));
			}
			if (func_1126((*uParam2)[participant_id_to_int()], 4) == func_1126((*uParam2)[participant_id_to_int()], 8))
			{
				func_1518(uParam1, &((*uParam1)[iParam3]->f_13), 4096, iParam3);
			}
			if (!func_341((*uParam1)[iParam3]->f_13))
			{
				if (func_1126((*uParam2)[participant_id_to_int()], 4))
				{
					sVar2 = func_1520(7, iParam3);
					func_1128((*uParam2)[participant_id_to_int()], 8);
				}
				else
				{
					sVar2 = func_1520(6, iParam3);
					func_1127((*uParam2)[participant_id_to_int()], 8);
				}
				(*uParam1)[iParam3]->f_13 = func_475(sVar2, -473983589, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_1521(uParam1, 4096, iParam3);
			}
			if ((bVar1 || func_326(uParam0) == 4) || func_1525((*uParam1)[iParam3]->f_11, 1))
			{
				if (func_342((*uParam1)[iParam3]->f_13, 0))
				{
					func_338((*uParam1)[iParam3]->f_13, 0, 1, 1);
				}
			}
			else if (!func_342((*uParam1)[iParam3]->f_13, 0))
			{
				func_338((*uParam1)[iParam3]->f_13, 1, 1, 1);
			}
			if (func_697((*uParam1)[iParam3]->f_13, 1))
			{
				if (func_1126((*uParam2)[participant_id_to_int()], 4))
				{
					func_1128((*uParam2)[participant_id_to_int()], 4);
				}
				else
				{
					func_1127((*uParam2)[participant_id_to_int()], 4);
				}
			}
			if (func_1126((*uParam2)[participant_id_to_int()], 64) == func_326(uParam0) > 0)
			{
				func_1518(uParam1, &((*uParam1)[iParam3]->f_14), 8192, iParam3);
			}
			if (!func_341((*uParam1)[iParam3]->f_14))
			{
				if (func_326(uParam0) > 0)
				{
					sVar3 = func_1520(8, iParam3);
					func_1128((*uParam2)[participant_id_to_int()], 64);
				}
				else
				{
					sVar3 = func_1520(9, iParam3);
					func_1127((*uParam2)[participant_id_to_int()], 64);
				}
				(*uParam1)[iParam3]->f_14 = func_475(sVar3, -719620017, 1, 0, 0, 5, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_1521(uParam1, 8192, iParam3);
				if ((func_1290(uParam0, 4) || func_326(uParam0) == 4) || func_326(uParam0) == 1)
				{
					func_338((*uParam1)[iParam3]->f_14, 0, 1, 1);
				}
			}
			else
			{
				if ((func_1290(uParam0, 4) || func_326(uParam0) == 1) || func_326(uParam0) == 4)
				{
					func_338((*uParam1)[iParam3]->f_14, 0, 1, 1);
				}
				else
				{
					func_338((*uParam1)[iParam3]->f_14, 1, 1, 1);
				}
				if (func_343((*uParam1)[iParam3]->f_14, 1) && func_1522(uParam1))
				{
					if (func_1126((*uParam2)[participant_id_to_int()], 64))
					{
						func_1523(0, -1, 0);
					}
					else
					{
						func_1523(2, -1, 0);
					}
				}
			}
		}
		else
		{
			func_1518(uParam1, &((*uParam1)[iParam3]->f_11), 1024, iParam3);
			func_1518(uParam1, &((*uParam1)[iParam3]->f_12), 2048, iParam3);
			func_1518(uParam1, &((*uParam1)[iParam3]->f_13), 4096, iParam3);
			func_1518(uParam1, &((*uParam1)[iParam3]->f_14), 8192, iParam3);
		}
	}
}

void func_1326(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	if (((((((((iParam4 != 3 && iParam4 != 4) && iParam4 != 5) && iParam4 != 6) && ((iParam4 != 2 || iParam3 != 0) || func_326(uParam0) != 2)) || ped_has_use_scenario_task(Global_34)) || _0x3ab6c7b0bb0df4b1(Global_34, -1)) || is_ped_in_combat(Global_34, 0)) || is_ped_in_melee_combat(Global_34)) || (_get_scenario_point_type_ped_is_using(*iParam5) != func_111(iParam3, 1) && iParam3 != 0))
	{
		if (func_1527(uParam2, 1, iParam3))
		{
			func_1528(*iParam5, iParam3, 0, 1070386381);
			func_1529(uParam2, 1, iParam3);
		}
	}
	else
	{
		if (&Global_1940085 != uParam2->f_97 || func_1527(uParam2, 2, iParam3))
		{
			func_1528(*iParam5, iParam3, 0, 1070386381);
			func_1518(uParam2, &((*uParam2)[iParam3]->f_8), 128, iParam3);
			func_1518(uParam2, &((*uParam2)[iParam3]->f_9), 256, iParam3);
			func_1529(uParam2, 2, iParam3);
			func_1529(uParam2, 1, iParam3);
		}
		if (!func_1527(uParam2, 1, iParam3))
		{
			if (func_1528(*iParam5, iParam3, 1, 1070386381))
			{
				func_1521(uParam2, 1, iParam3);
			}
		}
	}
	if (func_1527(uParam2, 2, iParam3) || func_1527(uParam2, 1, iParam3))
	{
		if (_0x4b101dbcc9482f2d(*iParam5))
		{
			Var0.f_4 = -1;
			Var0.f_8 = 2;
			Var0.f_9 = 1;
			Var0.f_10 = 1;
			Var0.f_11 = 1;
			Var0.f_13 = 1;
			Var0.f_14 = 2;
			Var0.f_15 = 2;
			Var0.f_16 = 3;
			Var0.f_19 = 3;
			Var0.f_20 = 1;
			Var0.f_21 = 3;
			Var0.f_22 = 3;
			Var0.f_8 = 0;
			Var0.f_14 = 0;
			Var0.f_3 = Global_34;
			Var0.f_4 = 21030;
			set_ped_config_flag(*iParam5, 259, true);
			_0x66f9eb44342bb4c5(*iParam5, &Var0);
		}
	}
	if (!func_1527(uParam2, 1, iParam3) || !func_1530(player_id(), *iParam5))
	{
		if (!func_1527(uParam2, 2, iParam3))
		{
			func_1518(uParam2, &((*uParam2)[iParam3]->f_8), 128, iParam3);
			func_1518(uParam2, &((*uParam2)[iParam3]->f_9), 256, iParam3);
		}
		return;
	}
	if (!func_341((*uParam2)[iParam3]->f_8))
	{
		sVar25 = func_1520(4, iParam3);
		(*uParam2)[iParam3]->f_8 = func_985(sVar25, -163964935, *iParam5, 1, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_1521(uParam2, 128, iParam3);
		func_476((*uParam2)[iParam3]->f_8, _uiprompt_get_group_id_for_target_entity(*iParam5), 0, 1);
	}
	if (iParam3 == 0 && !func_341((*uParam2)[iParam3]->f_9))
	{
		sVar26 = func_1520(3, iParam3);
		(*uParam2)[iParam3]->f_9 = func_985(sVar26, 648122183, *iParam5, 1, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_1521(uParam2, 256, iParam3);
		func_476((*uParam2)[iParam3]->f_9, _uiprompt_get_group_id_for_target_entity(*iParam5), 0, 1);
	}
	bVar27 = (_0xec7e480ff8bd0bed(Global_34) || !func_1331(*iParam5, 0));
	if ((bVar27 || _get_scenario_point_type_ped_is_using(*iParam5) != func_111(iParam3, 1)) || (iParam3 != 0 && func_1531(*iParam5, Global_34, 0.5f) != 0))
	{
		func_338((*uParam2)[iParam3]->f_8, 0, 1, 1);
	}
	else
	{
		func_338((*uParam2)[iParam3]->f_8, 1, 1, 1);
	}
	if (func_341((*uParam2)[iParam3]->f_9))
	{
		if ((bVar27 || (iParam4 != 6 && iParam4 != 2)) || func_1290(uParam0, 4))
		{
			if (func_1290(uParam0, 4) && !func_333(895))
			{
				func_79(895, 0);
			}
			func_338((*uParam2)[iParam3]->f_9, 0, 1, 1);
		}
		else
		{
			func_338((*uParam2)[iParam3]->f_9, 1, 1, 1);
		}
		if (func_343((*uParam2)[iParam3]->f_9, 1) && func_1522(uParam2))
		{
			func_1523(2, -1, 0);
		}
	}
	if (func_343((*uParam2)[iParam3]->f_8, 1) && func_1522(uParam2))
	{
		if (iParam3 == 0)
		{
			if (func_1532(*iParam5, Global_34))
			{
				iVar28 = 1;
			}
			else
			{
				iVar28 = 0;
			}
		}
		func_1523(6, iParam3, iVar28);
		(*uParam2)[iParam3]->f_7 = 0;
		if (iParam4 == 6)
		{
			func_1127((*uParam1)[participant_id_to_int()], 4);
		}
		else
		{
			func_1128((*uParam1)[participant_id_to_int()], 4);
		}
		if (func_1098())
		{
			func_1127((*uParam1)[participant_id_to_int()], 2);
		}
		else
		{
			func_1128((*uParam1)[participant_id_to_int()], 2);
		}
	}
}

void func_1327(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1527(uParam1, 4, iParam2))
	{
		if ((_get_scenario_point_type_ped_is_using(iParam3) == func_111(iParam2, 0) && is_ped_active_in_scenario(iParam3, 0)) && func_325(uParam0, 7000))
		{
			if (!network_has_control_of_entity(iParam3))
			{
				func_1521(uParam1, 4, iParam2);
				return;
			}
			_0xf47d54b986f0a346(iParam3, 2);
			func_1521(uParam1, 4, iParam2);
		}
	}
	else if ((_get_scenario_point_type_ped_is_using(iParam3) != func_111(iParam2, 0) || !is_ped_active_in_scenario(iParam3, 0)) || !func_325(uParam0, 7000))
	{
		if (!network_has_control_of_entity(iParam3))
		{
			func_1529(uParam1, 4, iParam2);
			return;
		}
		_0x3efed081b4834ba1(iParam3);
		func_1529(uParam1, 4, iParam2);
	}
	else if (iParam2 != 2 && func_582(uParam0->f_3[iParam2]->f_3))
	{
		iVar0 = get_player_ped(uParam0->f_3[iParam2]->f_3);
		Var1.f_4 = -1;
		Var1.f_8 = 2;
		Var1.f_9 = 1;
		Var1.f_10 = 1;
		Var1.f_11 = 1;
		Var1.f_13 = 1;
		Var1.f_14 = 2;
		Var1.f_15 = 2;
		Var1.f_16 = 3;
		Var1.f_19 = 3;
		Var1.f_20 = 1;
		Var1.f_21 = 3;
		Var1.f_22 = 3;
		Var1.f_8 = 0;
		Var1.f_14 = 0;
		Var1.f_3 = iVar0;
		Var1.f_4 = 21030;
		set_ped_config_flag(iParam3, 259, true);
		_0x66f9eb44342bb4c5(iParam3, &Var1);
	}
}

void func_1328(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_582(uParam0->f_3[iParam3]->f_3))
	{
		return;
	}
	iVar0 = get_player_ped(uParam0->f_3[iParam3]->f_3);
	iVar1 = network_get_participant_index(uParam0->f_3[iParam3]->f_3);
	iVar2 = (*uParam1)[iVar1]->f_9;
	func_1324(uParam0, iParam3, 6, iVar0, uParam2, iVar2, !func_1126((*uParam1)[iVar1], 2), func_1126((*uParam1)[iVar1], 4), func_1533(uParam0, uParam1));
	if (uParam0->f_3[iParam3]->f_3 != player_id())
	{
		return;
	}
	if (!is_ped_active_in_scenario(Global_34, 0))
	{
		if (func_1126((*uParam1)[iVar1], 32))
		{
			func_1128((*uParam1)[iVar1], 32);
			_0x50b72a754ee64a71(-1424050856);
		}
		return;
	}
	disable_control_action(0, -124244224, false);
	if (iVar2 == func_1300(iParam3, 3, !func_1126((*uParam1)[iVar1], 2), is_ped_male(Global_34)))
	{
		if (func_1126((*uParam1)[iVar1], 32))
		{
			func_1128((*uParam1)[iVar1], 32);
			_0x50b72a754ee64a71(-1424050856);
		}
		if (func_1126((*uParam1)[iVar1], 4) && func_1331(Global_34, 0))
		{
			func_1128((*uParam1)[iVar1], 16);
			func_1336(Global_34, 1116205397, 0, 1073741824);
		}
	}
	else if (iVar2 == func_1300(iParam3, 6, !func_1126((*uParam1)[iVar1], 2), is_ped_male(Global_34)))
	{
		if (!func_1126((*uParam1)[iVar1], 32))
		{
			func_1127((*uParam1)[iVar1], 32);
			_0x7d654266025e921b(-1424050856);
		}
		if (!func_1126((*uParam1)[iVar1], 4))
		{
			if (func_1331(Global_34, 0))
			{
				func_1336(Global_34, 1802434640, 0, 1073741824);
				func_1336(Global_34, 621732002, 0, 1073741824);
				func_1128((*uParam1)[iVar1], 16);
			}
		}
		else
		{
			bVar3 = func_325(uParam0, 0);
			if (bVar3 && !func_1126((*uParam1)[iVar1], 16))
			{
				func_1127((*uParam1)[iVar1], 16);
			}
			if (((func_326(uParam0) == 0 || func_326(uParam0) == 4) && !bVar3) && func_1126((*uParam1)[iVar1], 16))
			{
				func_1128((*uParam1)[iVar1], 4);
				func_1128((*uParam1)[iVar1], 16);
			}
		}
	}
}

void func_1329(var uParam0, var uParam1, int iParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_1112(iParam2, iVar0) != 0)
		{
			if (iVar0 == 2)
			{
				iVar1 = 16384;
			}
			else if (iVar0 == 0)
			{
				iVar1 = 32768;
			}
			else if (iVar0 == 1)
			{
				iVar1 = 65536;
			}
			if (network_does_network_id_exist(&(uParam0->f_3[iParam2]->f_4[iVar0])))
			{
				if (!func_1527(uParam1, iVar1, iParam2))
				{
					set_network_id_visible_in_cutscene(&(uParam0->f_3[iParam2]->f_4[iVar0]), 1, 0, uParam3);
					func_1521(uParam1, iVar1, iParam2);
				}
			}
			else if (func_1527(uParam1, iVar1, iParam2))
			{
				func_1529(uParam1, iVar1, iParam2);
			}
		}
		iVar0++;
	}
}

void func_1330(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	fVar0 = 3.5f;
	if ((((((iParam4 != 1 && iParam4 != 2) || ped_has_use_scenario_task(Global_34)) || _0x3ab6c7b0bb0df4b1(Global_34, -1)) || is_ped_in_combat(Global_34, 0)) || is_ped_in_melee_combat(Global_34)) || func_326(uParam0) != 0)
	{
		if (func_1527(uParam2, 2, iParam3))
		{
			func_1528(*iParam5, iParam3, 0, 1070386381);
			func_1529(uParam2, 2, iParam3);
		}
	}
	else
	{
		if (&Global_1940085 != uParam2->f_97 || func_1527(uParam2, 1, iParam3))
		{
			func_1528(*iParam5, iParam3, 0, 1070386381);
			func_1518(uParam2, &((*uParam2)[iParam3]->f_8), 128, iParam3);
			func_1529(uParam2, 2, iParam3);
			func_1529(uParam2, 1, iParam3);
		}
		if (!func_1527(uParam2, 2, iParam3))
		{
			if (func_1528(*iParam5, iParam3, 1, fVar0))
			{
				func_1521(uParam2, 2, iParam3);
			}
		}
	}
	if (!func_1527(uParam2, 2, iParam3) || !func_1530(player_id(), *iParam5))
	{
		if (!func_1527(uParam2, 1, iParam3))
		{
			func_1518(uParam2, &((*uParam2)[iParam3]->f_8), 128, iParam3);
		}
		return;
	}
	if (!func_341((*uParam2)[iParam3]->f_8))
	{
		sVar1 = func_1520(2, iParam3);
		(*uParam2)[iParam3]->f_8 = func_985(sVar1, -163964935, *iParam5, 1, 0, 0, 0, 5, fVar0, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_1521(uParam2, 128, iParam3);
		func_476((*uParam2)[iParam3]->f_8, _uiprompt_get_group_id_for_target_entity(*iParam5), 0, 1);
	}
	bVar2 = func_1534(uParam0);
	if (bVar2)
	{
		func_338((*uParam2)[iParam3]->f_8, 0, 1, 1);
	}
	else
	{
		func_338((*uParam2)[iParam3]->f_8, 1, 1, 1);
	}
	if (func_343((*uParam2)[iParam3]->f_8, 1) && func_1522(uParam2))
	{
		func_1523(0, iParam3, 0);
	}
}

bool func_1331(int iParam0, bool bParam1)
{
	uVar0 = _0xc488b8c0e52560d8(iParam0);
	uVar1 = _0x2dc0e8dcbd3546e9(iParam0);
	if ((uVar0 || uVar1) && !has_anim_event_fired(iParam0, 1944546609))
	{
		return false;
	}
	if (bParam1 && !_0x02ebbb3989b7e695(iParam0))
	{
		return false;
	}
	return true;
}

void func_1332(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = &uParam0->f_3[iParam3]->f_4[2];
	if (network_does_network_id_exist(iVar0))
	{
		if (!network_has_control_of_network_id(iVar0))
		{
			network_request_control_of_network_id(iVar0);
			_0x7182edda1ee7db5a(uParam0->f_3[iParam3]->f_1);
			return;
		}
		if (_0x2b02db082258625f(iParam2, net_to_obj(iVar0), func_1535(iParam3), func_111(iParam3, 0), 0, 0))
		{
			if (!network_does_network_id_exist(iVar0))
			{
			}
		}
	}
	_task_use_scenario_point(iParam2, (*uParam1)[iParam3][0], func_1502(iParam3, 1, bParam4, func_1299(iParam3), 1), 0, false, true, 0, false, -1f, false);
}

void func_1333(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	if (_get_scenario_point_type_ped_is_using(iParam3) != func_111(iParam2, 0))
	{
		if (!bParam4)
		{
			return;
		}
		if (!_does_scenario_point_exist((*uParam1)[iParam2][0]))
		{
			return;
		}
		if ((!ped_has_use_scenario_task(iParam3) && !_0x3ab6c7b0bb0df4b1(iParam3, -1)) && func_1331(iParam3, 0))
		{
			func_1332(uParam0, uParam1, iParam3, iParam2, bParam5);
		}
		else if (func_1331(iParam3, 0))
		{
			func_1335(iParam3, (*uParam1)[iParam2][0], iParam2, 1, 0, 1, bParam5);
		}
	}
	else
	{
		func_1337(uParam0, uParam1, iParam2, 0, iParam6);
		func_1337(uParam0, uParam1, iParam2, 1, iParam6);
	}
}

void func_1334(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	_0x7182edda1ee7db5a(uParam0->f_3[iParam4]->f_1);
	if (network_does_network_id_exist(&(uParam0->f_3[iParam4]->f_4[0])))
	{
		if (!network_has_control_of_network_id(&(uParam0->f_3[iParam4]->f_4[0])))
		{
			network_request_control_of_network_id(&(uParam0->f_3[iParam4]->f_4[0]));
			return;
		}
		else
		{
			_0x7182edda1ee7db5a(&(uParam0->f_3[iParam4]->f_4[0]));
		}
	}
	if (network_does_network_id_exist(&(uParam0->f_3[iParam4]->f_4[1])))
	{
		if (!network_has_control_of_network_id(&(uParam0->f_3[iParam4]->f_4[1])))
		{
			network_request_control_of_network_id(&(uParam0->f_3[iParam4]->f_4[1]));
			return;
		}
		else
		{
			_0x7182edda1ee7db5a(&(uParam0->f_3[iParam4]->f_4[1]));
		}
	}
	if (network_does_network_id_exist(&(uParam0->f_3[iParam4]->f_4[0])))
	{
		if (_0x2b02db082258625f(iParam2, net_to_obj(&(uParam0->f_3[iParam4]->f_4[0])), func_1536(iParam4), func_111(iParam4, 1), func_1502(iParam4, iParam3, bParam5, func_1299(iParam4), 1), 0))
		{
		}
	}
	if (network_does_network_id_exist(&(uParam0->f_3[iParam4]->f_4[1])))
	{
		if (_0x2b02db082258625f(iParam2, net_to_obj(&(uParam0->f_3[iParam4]->f_4[1])), func_1537(iParam4), func_111(iParam4, 1), func_1502(iParam4, iParam3, bParam5, func_1299(iParam4), 1), 0))
		{
		}
	}
	_task_use_scenario_point(iParam2, (*uParam1)[iParam4][1], func_1502(iParam4, iParam3, bParam5, func_1299(iParam4), 1), 0, false, true, 0, false, -1f, false);
}

int func_1335(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	StringCopy(&cVar2, func_1502(iParam2, iParam3, bParam6, func_1299(iParam2), bParam5), 128);
	sVar1 = func_1538(iParam3, bParam4, iParam2 == 0, bParam5);
	sVar0 = func_1539(iParam2, iParam3, bParam4, bParam5);
	if (func_1540(iParam0, uParam1, sVar0, sVar1, &cVar2, 0))
	{
		return 1;
	}
	return 0;
}

int func_1336(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (bParam2)
	{
		_0x6d07b371e9439019(iParam0);
	}
	_0xd65fdc686a031c83(iParam0, iParam1, fParam3);
	return 1;
}

void func_1337(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam3 == 0)
	{
		iVar0 = 8;
	}
	else if (iParam3 == 1)
	{
		iVar0 = 16;
	}
	else if (iParam3 == 2)
	{
		iVar0 = 32;
	}
	if (!func_1527(uParam1, iVar0, iParam2))
	{
		if (func_1112(iParam2, iParam3) != 0)
		{
			if (network_does_network_id_exist(&(uParam0->f_3[iParam2]->f_4[iParam3])))
			{
				if (iParam3 == 2)
				{
					iVar1 = (*uParam1)[iParam2][0];
				}
				else
				{
					iVar1 = (*uParam1)[iParam2][1];
				}
				if (iParam3 != 2)
				{
					if (network_has_control_of_network_id(&(uParam0->f_3[iParam2]->f_4[iParam3])))
					{
						vVar2 = { func_1304(iParam2, iParam4, iParam3) };
						vVar5 = { func_1305(iParam2, iParam4, iParam3) };
						if (func_1541(net_to_obj(&(uParam0->f_3[iParam2]->f_4[iParam3])), vVar2, 1) > 0.5f || vmag(get_entity_rotation(net_to_obj(&(uParam0->f_3[iParam2]->f_4[iParam3])), 2) - vVar5) > 10f)
						{
							set_entity_coords(net_to_obj(&(uParam0->f_3[iParam2]->f_4[iParam3])), vVar2, true, false, true, true);
							set_entity_rotation(net_to_obj(&(uParam0->f_3[iParam2]->f_4[iParam3])), vVar5, 0, true);
						}
					}
				}
				if (_0xea31f199a73801d3(iVar1) && does_entity_exist(_get_scenario_point_entity(iVar1, func_1542(iParam2, iParam3))))
				{
					func_1521(uParam1, iVar0, iParam2);
				}
				else if (_0x8360c47380b6f351(iVar1, net_to_obj(&(uParam0->f_3[iParam2]->f_4[iParam3])), func_1542(iParam2, iParam3), 0))
				{
					func_1521(uParam1, iVar0, iParam2);
				}
			}
		}
		else
		{
			func_1521(uParam1, iVar0, iParam2);
		}
	}
	else if (func_1112(iParam2, iParam3) != 0)
	{
		if (network_does_network_id_exist(&(uParam0->f_3[iParam2]->f_4[iParam3])))
		{
			if (iParam3 == 2)
			{
				iVar8 = (*uParam1)[iParam2][0];
			}
			else
			{
				iVar8 = (*uParam1)[iParam2][1];
			}
			if (!_0xea31f199a73801d3(iVar8) || !does_entity_exist(_get_scenario_point_entity(iVar8, func_1542(iParam2, iParam3))))
			{
				func_1529(uParam1, iVar0, iParam2);
			}
		}
		else if (iParam3 != 2)
		{
			if (!does_entity_exist(_get_ped_using_scenario_point((*uParam1)[iParam2][1])))
			{
				func_1529(uParam1, iVar0, iParam2);
			}
		}
	}
}

void func_1338(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (player_id() != uParam0->f_3[iParam3]->f_3)
	{
		return;
	}
	iVar0 = get_player_ped(uParam0->f_3[iParam3]->f_3);
	bVar1 = uParam0->f_3[iParam3]->f_8;
	if (network_does_network_id_exist(uParam0->f_3[iParam3]->f_2))
	{
		iVar2 = _net_to_anim_scene(uParam0->f_3[iParam3]->f_2);
		if (player_id() == uParam0->f_3[iParam3]->f_3)
		{
			func_1543(uParam0, &iVar2, bParam5, iParam3);
		}
		if (_does_anim_scene_exist(iVar2) && _network_has_control_of_anim_scene(iVar2))
		{
			if (func_582(uParam0->f_3[iParam3]->f_3))
			{
				StringCopy(&cVar3, "handoff_", 64);
				iVar11 = network_get_participant_index(uParam0->f_3[iParam3]->f_3);
				if (func_1126((*uParam1)[iVar11], 2))
				{
					StringConCat(&cVar3, "drunk_", 64);
				}
				else
				{
					StringConCat(&cVar3, "sober_", 64);
				}
				if (bParam6)
				{
					StringConCat(&cVar3, "playing_", 64);
				}
				else
				{
					StringConCat(&cVar3, "notplaying_", 64);
				}
				if (is_ped_male(iVar0))
				{
					StringConCat(&cVar3, "male", 64);
				}
				else
				{
					StringConCat(&cVar3, "female", 64);
				}
				if (iParam3 == 0)
				{
					if (bVar1)
					{
						StringConCat(&cVar3, "_left", 64);
					}
					else
					{
						StringConCat(&cVar3, "_right", 64);
					}
				}
				if (!_0x23e33cb9f4a3f547(iVar2, &cVar3))
				{
					if (!_0x0df57f86fe71dbe5(iVar2, &cVar3))
					{
						_0xdf7b5144e25cd3fe(iVar2, &cVar3);
					}
					return;
				}
			}
		}
	}
	if (_get_scenario_point_type_ped_is_using(*iParam4) != func_111(iParam3, 2))
	{
		if (!ped_has_use_scenario_task(*iParam4) && !_0x3ab6c7b0bb0df4b1(*iParam4, -1))
		{
			if (bParam5)
			{
				if (bParam6)
				{
					iVar12 = 6;
				}
				else
				{
					iVar12 = 3;
				}
				func_1334(uParam0, uParam2, *iParam4, iVar12, iParam3, 1);
			}
		}
		else if (func_1331(*iParam4, 0))
		{
			if (bParam5)
			{
				if (bParam6)
				{
					func_1335(*iParam4, (*uParam2)[iParam3][2], iParam3, 7, 0, bVar1, 1);
				}
				else
				{
					func_1335(*iParam4, (*uParam2)[iParam3][2], iParam3, 8, 0, bVar1, 1);
				}
			}
		}
	}
	iVar0 = get_player_ped(uParam0->f_3[iParam3]->f_3);
	if (((Global_34 == iVar0 && _get_scenario_point_type_ped_is_using(iVar0) != func_111(iParam3, 3)) && !ped_has_use_scenario_task(Global_34)) && !_0x3ab6c7b0bb0df4b1(Global_34, -1))
	{
		sVar13 = func_1544(iParam3, !func_1098(), is_ped_male(Global_34), 1);
		iVar14 = (*uParam2)[iParam3][3];
		if (iParam3 == 0)
		{
			if (!bVar1)
			{
				iVar14 = (*uParam2)[iParam3][4];
			}
		}
		_task_use_scenario_point(iVar0, iVar14, sVar13, 0, true, false, 0, false, -1f, false);
	}
	bVar15 = _get_scenario_point_type_ped_is_using(iVar0) == func_111(iParam3, 3);
	bVar16 = is_ped_active_in_scenario(iVar0, 0);
	bVar17 = _get_scenario_point_type_ped_is_using(*iParam4) == func_111(iParam3, 2);
	bVar18 = is_ped_active_in_scenario(*iParam4, 0);
	bVar19 = _0x02ebbb3989b7e695(iVar0);
	bVar20 = has_anim_event_fired(iVar0, 1944546609);
	bVar21 = has_anim_event_fired(*iParam4, 1944546609);
	if ((((bVar15 || bVar20) && ((bVar16 || bVar19) || bVar20)) && (bVar17 || bVar21)) && (bVar18 || bVar21))
	{
		(*uParam2)[iParam3]->f_7 = 1;
	}
}

void func_1339(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	iVar0 = _net_to_anim_scene(uParam0->f_3[iParam3]->f_2);
	bVar1 = uParam0->f_3[iParam3]->f_8;
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	if (!func_582(uParam0->f_3[iParam3]->f_3))
	{
		return;
	}
	if (player_id() == uParam0->f_3[iParam3]->f_3)
	{
		if (!func_1543(uParam0, &iVar0, bParam5, iParam3))
		{
			return;
		}
	}
	else
	{
		return;
	}
	if (_network_has_control_of_anim_scene(iVar0))
	{
		bVar2 = true;
	}
	iVar3 = get_player_ped(uParam0->f_3[iParam3]->f_3);
	if (!does_entity_exist(iVar3))
	{
		return;
	}
	if (!_is_anim_scene_started(iVar0, false))
	{
		if (_get_scenario_point_type_ped_is_using(iVar3) == func_111(iParam3, 1) || _get_scenario_point_type_ped_is_using(*iParam4) == func_111(iParam3, 0))
		{
			return;
		}
		if (!bVar2)
		{
			return;
		}
		set_anim_scene_entity(iVar0, "Performer", *iParam4, 0);
		StringCopy(&cVar5, "handoff_", 64);
		iVar13 = network_get_participant_index(uParam0->f_3[iParam3]->f_3);
		if (func_1126((*uParam1)[iVar13], 2))
		{
			StringConCat(&cVar5, "drunk_", 64);
		}
		else
		{
			StringConCat(&cVar5, "sober_", 64);
		}
		if (bParam6)
		{
			StringConCat(&cVar5, "playing_", 64);
		}
		else
		{
			StringConCat(&cVar5, "notplaying_", 64);
		}
		if (is_ped_male(iVar3))
		{
			StringConCat(&cVar5, "male", 64);
			sVar4 = "Player_M";
		}
		else
		{
			StringConCat(&cVar5, "female", 64);
			sVar4 = "Player_F";
		}
		if (iParam3 == 0)
		{
			if (bVar1)
			{
				StringConCat(&cVar5, "_left", 64);
			}
			else
			{
				StringConCat(&cVar5, "_right", 64);
			}
		}
		if (!_0x23e33cb9f4a3f547(iVar0, &cVar5))
		{
			if (!_0x0df57f86fe71dbe5(iVar0, &cVar5))
			{
				_0xdf7b5144e25cd3fe(iVar0, &cVar5);
			}
			return;
		}
		else
		{
			_set_anim_scene_playback_list_bool(iVar0, &cVar5, true);
		}
		if (!_is_anim_scene_loaded(iVar0, func_1508(&(uParam0->f_3[iParam3]->f_9)) < 15f, false))
		{
			return;
		}
		set_anim_scene_entity(iVar0, sVar4, iVar3, 0);
		if (func_1301(iParam3) != 0)
		{
			if (network_does_network_id_exist(&(uParam0->f_3[iParam3]->f_4[0])))
			{
				_0x4d0d2e3d8bc000eb(*iParam4, func_1536(iParam3), 1);
				set_anim_scene_entity(iVar0, "Instrument", net_to_obj(&(uParam0->f_3[iParam3]->f_4[0])), 0);
			}
		}
		if (func_1112(iParam3, 1) != 0)
		{
			if (network_does_network_id_exist(&(uParam0->f_3[iParam3]->f_4[1])))
			{
				_0x4d0d2e3d8bc000eb(*iParam4, func_1537(iParam3), 1);
				set_anim_scene_entity(iVar0, "Instrument_B", net_to_obj(&(uParam0->f_3[iParam3]->f_4[1])), 0);
			}
		}
		if (func_1303(iParam3) != 0)
		{
			if (network_does_network_id_exist(&(uParam0->f_3[iParam3]->f_4[2])))
			{
				_0x6ef4e31b4d5d2da0((*uParam2)[iParam3][0], func_1535(iParam3));
				set_anim_scene_entity(iVar0, "RestProp", net_to_obj(&(uParam0->f_3[iParam3]->f_4[2])), 0);
			}
		}
		vVar17 = { func_1511(iParam3) };
		if (!func_116(vVar17))
		{
			vVar14 = { _get_object_offset_from_coords(func_330(iParam7), func_331(iParam7), vVar17) };
		}
		else
		{
			vVar14 = { func_330(iParam7) };
		}
		set_anim_scene_origin(iVar0, vVar14, 0f, 0f, func_331(iParam7), 2);
		start_anim_scene(iVar0);
		(*uParam2)[iParam3]->f_7 = 2;
	}
}

void func_1340(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	iVar0 = _net_to_anim_scene(uParam0->f_3[iParam3]->f_2);
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	if (!func_582(uParam0->f_3[iParam3]->f_3))
	{
		return;
	}
	iVar1 = get_player_ped(uParam0->f_3[iParam3]->f_3);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (player_id() == uParam0->f_3[iParam3]->f_3)
	{
		func_1543(uParam0, &iVar0, bParam5, iParam3);
	}
	else
	{
		return;
	}
	if (_is_anim_scene_started(iVar0, false) || _0xf94692eb9dc15d74(iVar0, 0))
	{
		if (iVar1 == Global_34)
		{
			disable_control_action(0, 992265328, false);
			if ((has_anim_event_fired(iVar1, -840378404) || _get_anim_scene_progress(iVar0) >= 0.99f) && !ped_has_use_scenario_task(iVar1))
			{
				if (bParam6)
				{
					StringCopy(&cVar2, func_1502(iParam3, 6, !func_1098(), is_ped_male(iVar1), 1), 128);
				}
				else
				{
					StringCopy(&cVar2, func_1502(iParam3, 3, !func_1098(), is_ped_male(iVar1), 1), 128);
				}
				if (network_does_network_id_exist(&(uParam0->f_3[iParam3]->f_4[0])))
				{
					if (is_entity_attached(net_to_obj(&(uParam0->f_3[iParam3]->f_4[0]))))
					{
						detach_entity(net_to_obj(&(uParam0->f_3[iParam3]->f_4[0])), true, true);
					}
					_0x2b02db082258625f(iVar1, net_to_obj(&(uParam0->f_3[iParam3]->f_4[0])), func_1536(iParam3), func_111(iParam3, 1), 0, 0);
				}
				if (func_1112(iParam3, 1) != 0)
				{
					if (network_does_network_id_exist(&(uParam0->f_3[iParam3]->f_4[1])))
					{
						if (is_entity_attached(net_to_obj(&(uParam0->f_3[iParam3]->f_4[1]))))
						{
							detach_entity(net_to_obj(&(uParam0->f_3[iParam3]->f_4[1])), true, true);
						}
						_0x2b02db082258625f(iVar1, net_to_obj(&(uParam0->f_3[iParam3]->f_4[1])), func_1537(iParam3), func_111(iParam3, 1), 0, 0);
					}
				}
				_task_use_scenario_point(iVar1, (*uParam2)[iParam3][1], &cVar2, 0, false, true, 0, false, 0.4f, false);
				_0x2208438012482a1a(iVar1, false, false);
			}
		}
		if (_get_anim_scene_progress(iVar0) >= 0.99f || has_anim_event_fired(*iParam4, 1640537894))
		{
			if (!ped_has_use_scenario_task(*iParam4))
			{
				if (bParam5)
				{
					if (network_does_network_id_exist(&(uParam0->f_3[iParam3]->f_4[2])))
					{
						if (is_entity_attached(net_to_obj(&(uParam0->f_3[iParam3]->f_4[2]))))
						{
							detach_entity(net_to_obj(&(uParam0->f_3[iParam3]->f_4[2])), true, true);
						}
						if (_0x2b02db082258625f(*iParam4, net_to_obj(&(uParam0->f_3[iParam3]->f_4[2])), func_1535(iParam3), func_111(iParam3, 0), 0, 0))
						{
						}
					}
					_task_use_scenario_point(*iParam4, (*uParam2)[iParam3][0], 0, 0, false, true, 0, false, 0.4f, false);
					_0x2208438012482a1a(*iParam4, false, false);
					set_anim_scene_bool(iVar0, "bBreakout", true, false);
				}
			}
		}
		if (ped_has_use_scenario_task(*iParam4) && ped_has_use_scenario_task(iVar1))
		{
			(*uParam2)[iParam3]->f_7 = 3;
		}
	}
}

void func_1341(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_326(uParam0) != 2 && func_1290(uParam0, 2))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		if (func_581(uParam0, iVar4) == 6)
		{
			iVar5 = net_to_ped(uParam0->f_3[iVar4]->f_1);
		}
		else if (func_582(uParam0->f_3[iVar4]->f_3))
		{
			iVar5 = get_player_ped(uParam0->f_3[iVar4]->f_3);
		}
	else
	{
		}
		else if (_0xbe28db99556ff8d9(iVar5) == 978192019)
		{
			iVar3 = _0x886657c5b3d8ede3(iVar5);
			if (iVar3 > 0)
			{
				if (*iParam3 == 0)
				{
					*iParam3 = iVar3;
					iVar2 = _0xc68c02de259c927c(iVar5);
					*iParam2 = (iVar2 - *iParam3);
				}
				*iParam4++;
				iVar1 = uParam0->f_3[iVar4]->f_3;
				if (iVar1 != 255)
				{
					iVar0 = network_get_participant_index(iVar1);
					if (func_47(iVar0))
					{
						if (func_1126((*uParam1)[iVar0], 2))
						{
							*iParam5++;
						}
					}
				}
			}
		}
		iVar4++;
	}
}

int func_1342(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	else if (iParam1 < 10000)
	{
		return 1;
	}
	if (func_1545(iParam2, iParam3))
	{
		return 2;
	}
	else if (func_1546(iParam3))
	{
		return 3;
	}
	else if (func_1547(uParam0, iParam2))
	{
		return 4;
	}
	return 5;
}

void func_1343(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_7)
	{
		switch (iParam1)
		{
			case 1:
				break;
			case 5:
				func_1548(uParam0);
				break;
			case 4:
				func_1549(uParam0);
				break;
			case 2:
				func_1550(uParam0);
				break;
			case 3:
				func_1551(uParam0);
				break;
			case 0:
				func_1552(uParam0);
				break;
		}
		uParam0->f_7 = iParam1;
	}
}

bool func_1344(var uParam0, int iParam1)
{
	return func_43(*uParam0, iParam1);
}

bool func_1345(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = func_581(uParam0, iVar1);
		if (iVar0 == 7 || iVar0 == 8)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_1346(int iParam0)
{
	Global_1903136->f_302 = (Global_1903136->f_302 || iParam0);
}

bool func_1347(int iParam0)
{
	return (Global_19 && iParam0) != 0;
}

void func_1348(int iParam0)
{
	Global_19 = (Global_19 || iParam0);
}

struct<4> func_1349()
{
	return Var0;
}

struct<4> func_1350(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_1351(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_49(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1351(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_1352(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

void func_1353(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_1354(int iParam0, int iParam1, int iParam2)
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

void func_1355(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_1553(*uParam0);
}

int func_1356(int iParam0)
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

void func_1357(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	trigger_script_event(1, uParam0, 9, 45, &uParam1);
}

int func_1358(var uParam0)
{
	return uParam0->f_1;
}

bool func_1359(int iParam0, int iParam1)
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

bool func_1360(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_1361(int iParam0)
{
	iVar0 = get_random_int_in_range(1, 10);
	iVar1 = iVar0;
	iVar2 = func_1554(&iVar1);
	if (iVar2 == iParam0)
	{
		return iVar1;
	}
	return 0;
}

Vector3 func_1362(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

int func_1363(bool bParam0)
{
	if (func_4(2097152) || func_4(4194304))
	{
		return 1;
	}
	if (func_4(8388608))
	{
		return 0;
	}
	iVar0 = func_1415(1766283257);
	switch (iVar0)
	{
		case 0:
			return 0;
		default:
			break;
	}
	*bParam0 = 1;
	return 1;
}

bool func_1364(var uParam0, bool bParam1, bool bParam2)
{
	if (func_1168(&(uParam0->f_359), 8) || func_1168(&(uParam0->f_359), 1))
	{
		return false;
	}
	if (func_1387() != player_id())
	{
		return false;
	}
	if (!_0xfbe782b3165ac8ec(-371070031))
	{
		return false;
	}
	Var0 = { func_760(-1892463704, -688840329) };
	iVar2 = func_1555(Var0);
	if (iVar2 > func_1555(func_1556(921948254)))
	{
		func_1557(func_1556(921948254), iVar2);
		return true;
	}
	if (bParam2)
	{
		return false;
	}
	if (!_0xfbe782b3165ac8ec(-1429796736) && !func_1558())
	{
		if (func_4(524288))
		{
			if (get_random_float_in_range(0f, 1f) <= 0.3f)
			{
				*bParam1 = 1;
			}
		}
		else
		{
			*bParam1 = 1;
		}
		return *bParam1;
	}
	return false;
}

int func_1365(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1169(&(uParam0->f_359), 8);
		func_70(524288);
		if (!_0xfbe782b3165ac8ec(170916789))
		{
			return 39;
		}
		else
		{
			return 46;
		}
	}
	else if (_0xfbe782b3165ac8ec(-1429796736))
	{
		if (!_0xfbe782b3165ac8ec(1037795866) && !_0xfbe782b3165ac8ec(991261689))
		{
			func_1169(&(uParam0->f_359), 8);
			return 45;
		}
	}
	else if (_0xfbe782b3165ac8ec(-210793264))
	{
		if (!_0xfbe782b3165ac8ec(1267794070) && !_0xfbe782b3165ac8ec(-1637558568))
		{
			func_1169(&(uParam0->f_359), 8);
			return 43;
		}
	}
	else if (_0xfbe782b3165ac8ec(-835853883))
	{
		if (!_0xfbe782b3165ac8ec(180085605) && !_0xfbe782b3165ac8ec(793142495))
		{
			func_1169(&(uParam0->f_359), 8);
			return 42;
		}
	}
	else if (_0xfbe782b3165ac8ec(1778654004))
	{
		if (!_0xfbe782b3165ac8ec(-1543659210) && !_0xfbe782b3165ac8ec(-392376375))
		{
			func_1169(&(uParam0->f_359), 8);
			return 41;
		}
	}
	else if (_0xfbe782b3165ac8ec(170916789))
	{
		if (!_0xfbe782b3165ac8ec(2004618592) && !_0xfbe782b3165ac8ec(-1902982014))
		{
			func_1169(&(uParam0->f_359), 8);
			return 40;
		}
	}
	else
	{
		func_70(524288);
		func_1169(&(uParam0->f_359), 8);
		return 39;
	}
	func_1169(&(uParam0->f_359), 1);
	return 2;
}

bool func_1366(var uParam0, int iParam1)
{
	if (!func_1153(Global_34, 0) && get_ped_config_flag(Global_34, 408, true))
	{
		if (!func_1168(&(uParam0->f_1252.f_359), 32) && is_ped_facing_ped(Global_34, uParam0->f_1252.f_123, 90f))
		{
			uParam0->f_1252.f_360++;
			if (uParam0->f_1252.f_360 > uParam0->f_1252.f_361)
			{
				uParam0->f_1252.f_361 = get_random_int_in_range(2, 5);
				uParam0->f_1252.f_360 = 0;
				*iParam1 = 24;
				func_1169(&(uParam0->f_1252.f_359), 32);
				return true;
			}
		}
	}
	else
	{
		func_1559(&(uParam0->f_1252.f_359), 32);
	}
	return false;
}

bool func_1367(var uParam0)
{
	if (!func_1168(&(uParam0->f_359), 1) && !func_1168(&(uParam0->f_359), 8))
	{
		return true;
	}
	return false;
}

int func_1368(var uParam0, bool bParam1, bool bParam2)
{
	if (func_1560(uParam0, bParam1))
	{
		return func_1561(uParam0, bParam2);
	}
	else if (func_1098())
	{
		func_1169(&(uParam0->f_359), 1);
		return 3;
	}
	else if (func_1387() != player_id())
	{
		func_1169(&(uParam0->f_359), 1);
		return 9;
	}
	func_1169(&(uParam0->f_359), 1);
	return 2;
}

bool func_1369(var uParam0)
{
	if (!func_465(&(uParam0->f_362)))
	{
		func_444(&(uParam0->f_362), 1);
		uParam0->f_365 = get_random_int_in_range(30, 60);
		return false;
	}
	if (func_1508(&(uParam0->f_362)) < to_float(uParam0->f_365))
	{
		return false;
	}
	func_466(&(uParam0->f_362));
	return true;
}

int func_1370(var uParam0)
{
	bVar0 = func_1000(0);
	if (func_4(4096))
	{
		if (func_4(1048576))
		{
			func_11(1048576);
			return 18;
		}
	}
	else if (!func_1168(&(uParam0->f_359), 16))
	{
		if (bVar0)
		{
			if (!func_1000(1))
			{
				func_1169(&(uParam0->f_359), 16);
				return 17;
			}
		}
		else if (func_1000(1))
		{
			func_1169(&(uParam0->f_359), 16);
			return 16;
		}
	}
	if (get_random_float_in_range(0f, 1f) <= 0.3f)
	{
		return 23;
	}
	else if (func_1562(uParam0))
	{
		func_1169(&(uParam0->f_359), 4);
		return 36;
	}
	if (bVar0)
	{
		return 15;
	}
	return 0;
}

int func_1371()
{
	return &Global_1902818;
}

void func_1372(int iParam0, int iParam1)
{
	Var0 = { func_760(440364183, func_1244(iParam0)) };
	func_1563(Var0, iParam1);
}

void func_1373(var uParam0)
{
	uParam0->f_93 = func_90(func_947(), 1);
	switch (uParam0->f_93)
	{
		case 0:
			uParam0->f_146 = { 1789.989f, -818.1904f, 188.401f };
			uParam0->f_149 = { 0f, 0f, 28.4f };
			break;
		case 1:
			uParam0->f_146 = { -1091.248f, 712.8531f, 80.0358f };
			uParam0->f_149 = { 0f, 0f, -171.5f };
			break;
		case 2:
			uParam0->f_146 = { -2774.076f, -3045.214f, -12.8987f };
			uParam0->f_149 = { 0f, 0f, 137.3f };
			break;
		case 3:
			uParam0->f_146 = { 1630.838f, 827.6671f, 120.7437f };
			uParam0->f_149 = { 0f, 0f, 51.8f };
			break;
		case 4:
			uParam0->f_146 = { -1865.579f, -1726.884f, 85.0569f };
			uParam0->f_149 = { 0f, 0f, -135f };
			break;
	}
}

char* func_1374(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "script@mp@cook@ig1_ig4_table_shop";
		case 2:
			return "script@mp@maggie@ig_1_shop@maggie_shop";
		case 3:
			return "script@mp@maggie@ig_4_briefs@maggie_briefs";
		case 4:
			return "script@mp@cook@ig2_cook_idle_intros";
		case 5:
			return "script@mp@maggie@ig_2_intro@maggie_intro";
		default:
			break;
	}
	return "FAIL";
}

char* func_1375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FAIL";
		case 1:
			return "pl_intro_line01";
		case 2:
			return "pl_intro_line02";
		case 3:
			return "pl_intro_line03";
		case 4:
			return "pl_intro_line04";
		case 5:
			return "pl_intro_line05";
		case 6:
			return "pl_intro_line06";
		case 7:
			return "pl_intro_line07";
		case 8:
			return "pl_intro_line08";
		case 9:
			return "pl_intro_line09";
		default:
			break;
	}
	return "FAIL";
}

bool func_1376(var uParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		*uParam0 = _create_anim_scene(sParam1, 0, sParam2, false, true);
		return false;
	}
	if (!_is_anim_scene_loaded(*uParam0, true, false) && !_is_anim_scene_loading(*uParam0, true))
	{
		load_anim_scene(*uParam0);
	}
	return (_is_anim_scene_loaded(*uParam0, true, false) && _is_anim_scene_metadata_loaded(*uParam0, false));
}

int func_1377(var uParam0, var uParam1)
{
	switch (uParam0->f_8)
	{
		case 1:
			return uParam1->f_128;
		case 2:
			return uParam1->f_131;
		case 3:
			return uParam1->f_132;
		case 4:
			return uParam1->f_130;
	}
	return uParam1->f_128;
}

void func_1378(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (_does_anim_scene_exist(iParam0))
	{
		func_1564(iParam0, uParam1->f_6, uParam1->f_7, "p_jug01bx", iParam2, 1511337995, iParam3, 1);
		func_1564(iParam0, uParam1->f_4, uParam1->f_5, "p_clipboard02x", iParam2, -701419751, iParam3, 0);
		func_1564(iParam0, uParam1->f_12, uParam1->f_13, "p_pen_01x", iParam2, -1929763065, iParam3, 0);
		func_1564(iParam0, uParam1->f_2, uParam1->f_3, "p_broom01x", iParam2, -296963090, iParam3, 0);
		func_1564(iParam0, uParam1->f_8, uParam1->f_9, "p_crate03x", iParam2, 1561132816, iParam3, 0);
		func_1564(iParam0, *uParam1, uParam1->f_1, "Cane_Gun", iParam2, -1820985524, iParam3, 1);
		func_1564(iParam0, uParam1->f_10, uParam1->f_11, "mp005_p_mp_stirStick01x", iParam2, 882909226, iParam3, 1);
	}
}

char* func_1379()
{
	return "COOK";
}

bool func_1380(int iParam0, vector3 vParam1, vector3 vParam4, char* sParam7, int iParam8)
{
	if (!_is_anim_scene_started(iParam0, false))
	{
		set_anim_scene_origin(iParam0, vParam1, vParam4, 2);
		set_anim_scene_entity(iParam0, sParam7, iParam8, 0);
		start_anim_scene(iParam0);
		return false;
	}
	return true;
}

bool func_1381(int iParam0, int iParam1, var uParam2, int iParam3)
{
	bVar0 = true;
	bVar0 = (func_1565(iParam0, iParam1, *uParam2, uParam2->f_1, "Cane_Gun", -1820985524, iParam3, 0) && bVar0);
	bVar0 = (func_1565(iParam0, iParam1, uParam2->f_4, uParam2->f_5, "p_clipboard02x", -701419751, iParam3, 1) && bVar0);
	bVar0 = (func_1565(iParam0, iParam1, uParam2->f_10, uParam2->f_11, "mp005_p_mp_stirStick01x", 882909226, iParam3, 1) && bVar0);
	bVar0 = (func_1565(iParam0, iParam1, uParam2->f_2, uParam2->f_3, "p_broom01x", -296963090, iParam3, 0) && bVar0);
	bVar0 = (func_1565(iParam0, iParam1, uParam2->f_6, uParam2->f_7, "p_jug01bx", 1511337995, iParam3, 1) && bVar0);
	bVar0 = (func_1565(iParam0, iParam1, uParam2->f_8, uParam2->f_9, "p_crate03x", 1561132816, iParam3, 0) && bVar0);
	bVar0 = (func_1565(iParam0, iParam1, *uParam2, uParam2->f_13, "p_pen_01x", -1929763065, iParam3, 0) && bVar0);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

int func_1382(int iParam0)
{
	Var0 = { func_760(829565093, func_1244(iParam0)) };
	return func_1566(Var0);
}

bool func_1383(var uParam0)
{
	if (!func_670(func_1387(), 128))
	{
		return false;
	}
	if (func_1176(&(uParam0->f_260), 1) && func_1176(&(uParam0->f_260), 1024))
	{
		return false;
	}
	func_1177(&(uParam0->f_260), 1);
	func_1177(&(uParam0->f_260), 1024);
	return true;
}

int func_1384()
{
	if (func_1387() != player_id())
	{
		return 21;
	}
	if (func_1098())
	{
		return 11;
	}
	return 10;
}

bool func_1385(var uParam0)
{
	if (!func_1176(&(uParam0->f_260), 1))
	{
		func_1177(&(uParam0->f_260), 1);
		return true;
	}
	return false;
}

int func_1386(var uParam0)
{
	if (!func_1567(-408236271) && func_1387() == player_id())
	{
		func_1568(-408236271, 1);
		return 3;
	}
	if (func_1569(uParam0))
	{
		func_70(16777216);
		return func_1570();
	}
	if (func_1571(-408236271))
	{
		return 2;
	}
	return 1;
}

int func_1387()
{
	iVar0 = func_947();
	if (!_network_is_player_index_valid(iVar0))
	{
		iVar0 = player_id();
	}
	return iVar0;
}

bool func_1388(var uParam0, var uParam1)
{
	if (!func_465(&(uParam0->f_17)))
	{
		if (!func_1166(uParam1->f_122))
		{
			func_689(&(uParam0->f_17));
			uParam0->f_20 = get_random_int_in_range(30, 60);
		}
		return false;
	}
	if (func_484(&(uParam0->f_17)) < to_float(uParam0->f_20))
	{
		return false;
	}
	return true;
}

int func_1389(var uParam0)
{
	if (func_1572(uParam0))
	{
		func_1177(&(uParam0->f_260), 1024);
		return func_1384();
	}
	if (func_1573(uParam0))
	{
		return 30;
	}
	if (func_1574())
	{
		return 9;
	}
	if (func_1575(uParam0))
	{
		func_1177(&(uParam0->f_260), 512);
		return func_1576();
	}
	if (func_1577(uParam0))
	{
		func_1177(&(uParam0->f_260), 16);
		return func_1578();
	}
	if (func_1579(uParam0))
	{
		func_1177(&(uParam0->f_260), 64);
		return func_1580();
	}
	if (func_1581())
	{
		return 29;
	}
	if (func_1582(uParam0))
	{
		return func_1583();
	}
	if (func_1584(uParam0))
	{
		func_1177(&(uParam0->f_260), 4);
		return 8;
	}
	if (func_1585(uParam0))
	{
		func_1177(&(uParam0->f_260), 128);
		return 37;
	}
	if (func_1586(uParam0))
	{
		func_1177(&(uParam0->f_260), 32);
		return 24;
	}
	return 7;
}

int func_1390()
{
	return Global_1051252->f_12;
}

char* func_1391()
{
	return "unnamed";
}

int func_1392(int iParam0)
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

bool func_1393(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_899(36, iParam0);
}

bool func_1394(int iParam0)
{
	if (func_885(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_1587(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_1395(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

void func_1396(var uParam0, var uParam1)
{
	uParam0->f_81 = uParam1;
}

void func_1397(var uParam0, var uParam1)
{
	uParam0->f_81.f_1 = uParam1;
}

struct<7> func_1398(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

bool func_1399(var uParam0, var uParam1)
{
	if ((((((*uParam0 != *uParam1 || uParam0->f_1 != uParam1->f_1) || uParam0->f_2 != uParam1->f_2) || uParam0->f_3 != uParam1->f_3) || uParam0->f_4 != uParam1->f_4) || uParam0->f_5 != uParam1->f_5) || uParam0->f_6 != uParam1->f_6)
	{
		return false;
	}
	return true;
}

void func_1400(var uParam0, var uParam1)
{
	uParam0->f_81.f_10 = uParam1;
}

void func_1401(var uParam0, int iParam1)
{
	_copy_memory(&(uParam0->f_81.f_11), iParam1, 10);
}

void func_1402(int iParam0)
{
	Global_1109804->f_21.f_12 = iParam0;
}

void func_1403(int iParam0)
{
	Global_1109804->f_21.f_12.f_1 = iParam0;
}

void func_1404(var uParam0)
{
	Global_1109804->f_21.f_12.f_20 = uParam0;
}

void func_1405(var uParam0)
{
	Global_1109804->f_21.f_12.f_22 = uParam0;
}

void func_1406(struct<2> Param0)
{
	Global_1109804->f_21.f_12.f_23 = { Param0 };
}

void func_1407(var uParam0)
{
	Global_1109804->f_21.f_12.f_4 = uParam0;
}

void func_1408(var uParam0, var uParam1)
{
	uParam0->f_81.f_42 = uParam1;
}

void func_1409(var uParam0, var uParam1)
{
	uParam0->f_81.f_42.f_1 = uParam1;
}

void func_1410(var uParam0, var uParam1)
{
	uParam0->f_81.f_42.f_2 = uParam1;
}

bool func_1411(var uParam0)
{
	return func_500(uParam0->f_69) == 15;
}

int func_1412(var uParam0)
{
	return uParam0->f_69.f_2;
}

char* func_1413(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_889(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_1414(int iParam0)
{
	return Global_1118808[iParam0];
}

int func_1415(int iParam0)
{
	Var0 = { func_760(817387112, func_1244(iParam0)) };
	return func_1588(Var0);
}

bool func_1416(int iParam0)
{
	return func_871(&(Global_1109804->f_247.f_6), iParam0, 2);
}

int func_1417(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1589(bParam1, bParam2, bParam3);
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

int func_1418(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_2;
}

bool func_1419()
{
	if (decor_exist_on(player_ped_id(), "player_crafting_active"))
	{
		return decor_get_bool(player_ped_id(), "player_crafting_active");
	}
	return false;
}

bool func_1420()
{
	if (Global_1071686->f_28662.f_65.f_42 >= 9)
	{
		return true;
	}
	return false;
}

bool func_1421()
{
	return Global_1071686->f_28662.f_65.f_42 != 0;
}

bool func_1422(int iParam0)
{
	if (!_0x0f99f6436528a089(_0x901e0dc25080c8b9(iParam0)))
	{
		return false;
	}
	if (!_0x424b17a7dc5c90bc(iParam0))
	{
		return false;
	}
	iVar51 = _0xd1bf325c8252a982(_0x901e0dc25080c8b9(iParam0), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = network_get_player_from_gamer_handle(Var0[iVar50]);
		if (!network_is_player_active(iVar52) || is_player_dead(iVar52))
		{
		}
		else if (func_1590(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

struct<2> func_1423(var uParam0)
{
	return uParam0->f_69.f_4;
}

int func_1424(var uParam0)
{
	return uParam0->f_69.f_3;
}

int func_1425(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1813872822:
			return 1;
		case -1221663008:
			return 3;
		case -1208093116:
			return 4;
		case -887362116:
			return 2;
		case -667134878:
			return 0;
		case -551064688:
			return 5;
		case -373925780:
			return 6;
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

bool func_1426(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1068(uParam0, uParam1, iParam2, 1))
	{
		return false;
	}
	uParam0->f_2 = 856637467;
	uParam0->f_3 = iParam3;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1427(var uParam0)
{
	return func_1591(func_1002(uParam0, 613568612, 1));
}

var func_1428(var uParam0)
{
	return func_1592(uParam0, -635633622, 1);
}

void func_1429(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_81.f_3[iParam1] = iParam2;
}

int func_1430(var uParam0)
{
	return uParam0->f_81.f_11.f_9;
}

int func_1431(var uParam0, int iParam1)
{
	if (iParam1 >= func_1430(uParam0))
	{
		return 255;
	}
	return &(uParam0->f_81.f_11[iParam1]);
}

bool func_1432(var uParam0, int iParam1)
{
	return _0x72b2e00c9bac6789(&(uParam0->f_81.f_11.f_8), iParam1);
}

void func_1433(float fParam0)
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

void func_1434(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

void func_1435(int iParam0)
{
	Global_1956200->f_1431.f_2 = 0f;
	Global_1956200->f_1431.f_1 = iParam0;
}

bool func_1436(var uParam0, var uParam1)
{
	if (!func_1593(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -1854922634;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_1437(var uParam0)
{
	uParam0->f_2 = 843787590;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_1438(var uParam0, int iParam1)
{
	uParam0->f_2 = -789427168;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_1439(var uParam0, var uParam1)
{
	if (!_0x603ac35fd4602c76(uParam1))
	{
		return false;
	}
	*uParam0 = uParam1;
	uParam0->f_1 = uVar0;
	return true;
}

int func_1440(int iParam0, var uParam1, int iParam2)
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

int func_1441(int iParam0)
{
	if (!func_1151(7, iParam0, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1636457257;
	if (!_datafile_get_hash(&uVar5, &vVar0))
	{
		return 0;
	}
	return uVar5;
}

void func_1442(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

void func_1443(char* sParam0)
{
	StringCopy(&(Global_1572887->f_106.f_91.f_6), sParam0, 32);
}

bool func_1444(int iParam0)
{
	if (func_1594(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_1445(int iParam0)
{
	if (func_1595(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_1446(int iParam0)
{
	if (func_97() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_1596(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_1447(int iParam0)
{
	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_752(&Var0))
	{
		return vVar5;
	}
	if (!func_753(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_753(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_754(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_753(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_753(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_754(&Var0, 1);
			if (!func_753(&Var0, 22, iParam0, 0, 0))
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

struct<2> func_1448(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_797();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_1449(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_1450(iParam0) != -1;
}

int func_1450(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_1597(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_1451(int iParam0)
{
	return func_1598(iParam0);
}

struct<2> func_1452(int iParam0)
{
	if (!func_752(&uVar0))
	{
		return func_797();
	}
	if (!func_753(&uVar0, 13, 0, 0, 1))
	{
		return func_797();
	}
	if (!func_753(&uVar0, 17, 0, 0, 1))
	{
		return func_797();
	}
	if (!func_753(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_797();
	}
	if (!func_753(&uVar0, 20, 0, 0, 1))
	{
		return func_797();
	}
	if (!func_753(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_797();
	}
	iVar5 = func_1231(&uVar0);
	return func_1455(iVar5);
}

struct<2> func_1453(int iParam0)
{
	if (iParam0 == 0)
	{
		return func_797();
	}
	if (!func_1599(&uVar0, 7, iParam0, 76966722))
	{
		return func_797();
	}
	func_1600(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_797();
	}
	return func_1232(Var5.f_3, Var5.f_4);
}

int func_1454(int iParam0)
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

struct<2> func_1455(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_1232(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1232(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1232(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1232(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1232(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1232(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1232(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_797();
}

void func_1456(var uParam0)
{
	uParam0->f_20 = 0;
}

struct<4> func_1457(struct<5> Param0)
{
	Var0 = func_1601(&Param0);
	Var0.f_1 = func_1602(&Param0);
	switch (Var0)
	{
		case 581657549:
			Var0.f_2 = func_1603(&Param0);
			break;
		case -1732594287:
			Var0.f_2 = func_1604(&Param0);
			break;
		case 914197110:
			Var0.f_2 = func_1604(&Param0);
			break;
		default:
			break;
	}
	func_1605(Param0, &Var0);
	return Var0;
}

bool func_1458(var uParam0, int iParam1)
{
	if (!func_1606(iParam1, uParam0->f_3))
	{
		return true;
	}
	switch (*uParam0)
	{
		case -1732594287:
			iVar0 = uParam0->f_1;
			return func_1607(iVar0, uParam0->f_2);
		case 581657549:
			if (!_0x85e4d7b225a30ed1(uParam0->f_1, &Var2))
			{
				return false;
			}
			return Var2.f_1 >= uParam0->f_2;
		case 914197110:
			iVar1 = uParam0->f_1;
			return func_1608(iVar1, uParam0->f_2);
		default:
			break;
	}
	return false;
}

int func_1459(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1928985868;
		case 1:
			return -1444170561;
		default:
			break;
	}
	return 0;
}

void func_1460(struct<5> Param0, var uParam5)
{
	uVar4 = Param0.f_1;
	iVar1 = func_754(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_753(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1609(Param0, &iVar3);
		switch (iVar3)
		{
			case 356437857:
				*uParam5 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

int func_1461(var uParam0)
{
	return func_1610(func_970(uParam0, 66, 1));
}

int func_1462(var uParam0)
{
	return func_1611(func_970(uParam0, 67, 1));
}

int func_1463(int iParam0, bool bParam1)
{
	iVar0 = func_1612(bParam1, 1, 0);
	iVar1 = func_1613(iParam0);
	return (floor(func_1614(2f, to_float((iVar1 - 1)))) + iVar0) + 1;
}

var func_1464(int iParam0, var uParam1)
{
	iVar0 = (func_1463(iParam0, 1) - 1);
	iVar3 = func_1615(iParam0);
	iVar1 = func_1616(iParam0, uParam1);
	if (iVar1 == -1 || iVar1 > iVar3)
	{
		iVar1 = 0;
		iVar2 = 0;
	}
	else
	{
		iVar2 = floor(pow(2f, to_float(iVar0)));
	}
	return (iVar1 || iVar2);
}

int func_1465(int iParam0, var uParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	if (!func_1617(iParam2, iParam3))
	{
		return 0;
	}
	if (func_1618() && Global_1572887->f_106.f_75 != 9)
	{
		return 0;
	}
	if (!func_1619(Global_1296859->f_10))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_1620(&Var0);
	func_1621(iParam2, iParam3, iParam7, 1);
	func_1622(Param4, 1);
	func_1623(iParam6);
	func_1624(iParam9);
	func_1625(iParam10, 1);
	if ((func_843(Param4) && !func_1626()) && &Global_1211325 == -1)
	{
		func_1627(Param4);
	}
	_0x0ae241a4a9adeeec(1);
	if (iParam2 != 2)
	{
		func_1628();
	}
	if (func_1626())
	{
		func_1629(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_1630(268435456))
		{
			if (!_is_app_active(1433015236))
			{
				func_344(1, 0);
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
			func_1235(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, func_1413(&(Var65.f_37), 109029619), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, _create_var_string(2, func_1631(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, _create_var_string(2, func_1633(func_1632(), iParam3)), 64);
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
	if ((!_0x424b17a7dc5c90bc(player_id()) && func_1634(255, 0)) && !bParam8)
	{
		func_1635("NM_MATCHMAKING_WARNING");
	}
	func_1636(10);
	return 1;
}

int func_1466(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return iParam2;
	}
	if (!stat_id_get_int(&uParam0, &uVar0))
	{
		return iParam2;
	}
	return uVar0;
}

var func_1467(int iParam0)
{
	iVar0 = func_1638(0, (func_1637() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_1639(iVar0);
}

bool func_1468(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!_datafile_get_data_node_index(iParam5, &Param0))
	{
		return false;
	}
	return true;
}

int func_1469(int iParam0)
{
	return Global_1109804->f_5737[iParam0]->f_1;
}

int func_1470(struct<5> Param0, var uParam5, int iParam6)
{
	uVar0 = Param0.f_1;
	iVar1 = func_1085(uParam5->f_2);
	if (!func_1468(Param0, &(Param0.f_1), 2062917018, 0, 0, 1))
	{
		return 0;
	}
	uParam5->f_4[0] = func_1640(Param0, -1592717000, 0, 0, -1);
	uParam5->f_4[7] = func_1641(Param0, 327661882, iParam6);
	uParam5->f_4[6] = func_1641(Param0, -151415096, iParam6);
	uParam5->f_4[5] = func_1641(Param0, -1969117434, iParam6);
	uParam5->f_4[8] = func_1641(Param0, -377576419, 0);
	uParam5->f_4[9] = func_1641(Param0, -1418408851, 0);
	Param0.f_1 = uVar0;
	func_1642(Param0, uParam5);
	Param0.f_1 = uVar0;
	func_1643(Param0, uParam5);
	*uParam5 = { func_1232(uParam5->f_2.f_1, func_1644(iVar1)) };
	uParam5->f_31.f_1 = func_1645(iVar1, uParam5->f_2.f_1);
	uParam5->f_31 = func_1646(iVar1, uParam5->f_2.f_1);
	func_1647(func_1644(iVar1), uParam5->f_2.f_1, &Var2);
	uParam5->f_4[1] = Var2;
	uParam5->f_4[2] = Var2.f_2;
	uParam5->f_4[3] = Var2.f_1;
	uParam5->f_4[4] = Var2.f_3;
	return 1;
}

var func_1471(int iParam0)
{
	return (*Global_1297717)[iParam0]->f_2;
}

bool func_1472(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1473(var uParam0, int iParam1)
{
	return func_871(uParam0, iParam1, 3);
}

int func_1474(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

var func_1475(int iParam0)
{
	return (*Global_1118808)[iParam0]->f_1;
}

bool func_1476(var uParam0)
{
	return true;
}

bool func_1477(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 36)
	{
		return false;
	}
	return func_1648(iParam0, iParam1);
}

bool func_1478(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 90);
}

bool func_1479(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (!func_1478(iParam1))
	{
		return false;
	}
	return func_1649(iParam0, iParam1);
}

int func_1480(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_1247(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1481(int iParam0)
{
	return (*Global_1128574)[iParam0]->f_47;
}

void func_1482(int iParam0)
{
	_copy_memory(iParam0, &(Global_1109804->f_21.f_40.f_1), 33);
}

bool func_1483(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar1))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar1) == iParam0)
		{
		}
		else if (func_1650(iVar1))
		{
		}
		else if (!bParam4 && !func_1651(iVar1, vParam1))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1484(struct<2> Param0)
{
	return func_1652(Param0);
}

int func_1485(int iParam0, int iParam1)
{
	if (func_116(func_1653(iParam0, iParam1)))
	{
		return 0;
	}
	if (!func_1654(iParam0, &vVar0, iParam1))
	{
		return 1;
	}
	vVar0.f_2 = -146546566;
	if (!_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return 1;
	}
	return _datafile_get_num_children(vVar0.x, vVar0.y) + 1;
}

Vector3 func_1486(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return func_1653(iParam0, iParam1);
	}
	iParam2 = (iParam2 - 1);
	if (!func_1654(iParam0, &Var3, iParam1))
	{
		return vVar0;
	}
	Var3.f_2 = -146546566;
	if (!_datafile_get_data_node_index(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -733684727;
	Var3.f_3 = iParam2;
	if (!_datafile_get_data_node_index(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -134912699;
	_datafile_get_vector(&vVar0, &Var3);
	return vVar0;
}

void func_1487(struct<2> Param0, int iParam2, var uParam3)
{
	*iParam2 = func_1655(func_612(Param0));
	*uParam3 = func_1484(Param0);
}

int func_1488(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

int func_1489(int iParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, float fParam9)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 89)
	{
		return 11;
	}
	if (!func_1656())
	{
		return 2;
	}
	iVar1 = func_1657(iParam0);
	iVar2 = func_1658(iVar1, uParam1);
	if (iVar2 < 0 || iVar2 >= 55)
	{
		return 11;
	}
	if (!bParam7 && func_1659(iParam0, iVar2, bParam8, &bVar3))
	{
		if (bVar3)
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	if (func_1660(iVar1, uParam1))
	{
		vVar4 = { func_1661(iVar1, uParam1) };
		iVar7 = func_1662(iVar1, iVar2);
		if (!func_1663(iVar7, vVar4))
		{
			return 5;
		}
	}
	if (func_1664(iParam2) == -1)
	{
		return 6;
	}
	if (fParam9 >= 0f && !func_116(vParam3))
	{
		vVar8 = { func_1665(iParam0, iVar2) };
		if (vdist(vParam3, vVar8) > fParam9)
		{
			return 12;
		}
	}
	if (func_1666(iParam2))
	{
		iVar11 = func_1667(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
		if (!func_1668(iVar11))
		{
			return 13;
		}
		if (func_1669(iVar11))
		{
			return 14;
		}
	}
	if (func_1422(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
	{
		return 15;
	}
	if (bParam6)
	{
		if (iParam2 != 1717788883 && func_1670(func_797(), func_797(), 0, bParam7))
		{
			return 3;
		}
		bVar12 = false;
		if (!bVar12)
		{
			iVar13 = func_1671(iParam0, iVar2);
			if (!_unlock_is_unlocked(iVar13))
			{
				return 8;
			}
			if (!_unlock_is_visible(iVar13))
			{
				return 7;
			}
			iVar14 = func_1672(iParam0, iVar2);
			if (iVar14 != 0)
			{
				if (!_unlock_is_unlocked(iVar14))
				{
					return 10;
				}
				if (!_unlock_is_visible(iVar14))
				{
					return 9;
				}
			}
		}
	}
	return 0;
}

bool func_1490(int iParam0, vector3 vParam1, float fParam4)
{
	return vdist(func_1362(iParam0), vParam1) <= fParam4;
}

int func_1491()
{
	return 0;
}

int func_1492()
{
	return 0;
}

int func_1493(var uParam0, bool bParam1, bool bParam2, var uParam3, int iParam4)
{
	if (bParam1)
	{
		iVar2 |= 8;
	}
	if (bParam2)
	{
		iVar2 |= 16;
	}
	func_1487(*uParam0, &iVar0, &uVar1);
	func_1673(iVar0, &uVar3, uParam3);
	func_1674(uParam3, iVar0, &uVar3, uVar1, iVar2, iParam4);
	return 0;
}

void func_1494(var uParam0)
{
	if (&Global_1051252->f_16[0] == 0 || !_does_thread_exist(&(Global_1051252->f_16[0])))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 31, 33, &(Global_1051252->f_16[0]));
}

bool func_1495(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (!network_does_network_id_exist(Param0))
	{
		return false;
	}
	iVar0 = net_to_ped(Param0);
	if (!is_string_null_or_empty(func_618(Param0.f_4)))
	{
		set_ambient_voice_name(iVar0, func_618(Param0.f_4));
		return func_1675(iVar0, func_878(Param0.f_1), -1478066105, 0, 1, func_618(Param0.f_4), 0, 1);
	}
	return func_1675(iVar0, func_878(Param0.f_1), -1478066105, 0, 1, 0, 0, 1);
}

bool func_1496(int iParam0)
{
	if (!has_model_loaded(iParam0))
	{
		return false;
	}
	return true;
}

int func_1497(int iParam0)
{
	iVar0 = -1157809126;
	switch (iParam0)
	{
		case 4:
			iVar0 = -1157809126;
			break;
		case 3:
			iVar0 = -1157809126;
			break;
		case 5:
			iVar0 = -1157809126;
			break;
		case 2:
			iVar0 = -1157809126;
			break;
		case 0:
			iVar0 = -2073417944;
			break;
		case 1:
			iVar0 = 997972179;
			break;
	}
	return iVar0;
}

Vector3 func_1498(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { func_330(iParam1) };
	fVar9 = func_331(iParam1);
	switch (iParam2)
	{
		case 0:
			vVar6 = { func_1514(iParam0) };
			break;
		case 1:
			vVar6 = { func_1676(iParam0) };
			break;
		case 2:
			vVar6 = { func_1677(iParam0) };
			break;
		case 3:
			vVar6 = { func_1678(iParam0, 1) };
			break;
		case 4:
			vVar6 = { func_1678(iParam0, 0) };
			break;
	}
	vVar3 = { _get_object_offset_from_coords(vVar0, fVar9, vVar6) };
	return vVar3;
}

int func_1499(int iParam0, int iParam1)
{
	iVar0 = -1806530874;
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1806530874;
					break;
				case 1:
					iVar0 = 1354834467;
					break;
				case 2:
					iVar0 = -62258445;
					break;
				case 3:
					iVar0 = -80601477;
					break;
				case 4:
					iVar0 = -561467984;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					iVar0 = 2117888714;
					break;
				case 1:
					iVar0 = -1686701703;
					break;
				case 2:
					iVar0 = 1340234857;
					break;
				case 3:
					iVar0 = -1997216685;
					break;
				case 4:
					iVar0 = -818126608;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1534820907;
					break;
				case 1:
					iVar0 = -1277631096;
					break;
				case 2:
					iVar0 = -2002695350;
					break;
				case 3:
					iVar0 = 447821519;
					break;
				case 4:
					iVar0 = 337267220;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1636637447;
					break;
				case 1:
					iVar0 = -1786951222;
					break;
				case 2:
					iVar0 = -370731449;
					break;
				case 3:
					iVar0 = -54540155;
					break;
				case 4:
					iVar0 = -1417062269;
					break;
			}
			break;
		case 0:
			iVar0 = 41788943;
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1627162408;
					break;
				case 1:
					iVar0 = 421528261;
					break;
				case 2:
					iVar0 = 1606221641;
					break;
				case 3:
					iVar0 = 1510095095;
					break;
				case 4:
					iVar0 = -1815684694;
					break;
			}
			break;
	}
	return iVar0;
}

void func_1500(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (iParam1 == 1)
		{
			set_ped_config_flag(iParam0, 130, false);
			set_ped_config_flag(iParam0, 315, false);
			set_ped_config_flag(iParam0, 301, false);
		}
		else
		{
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 301, true);
		}
	}
}

char* func_1501(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			sVar0 = "script@mp@moonshiner@moonshine_band@handoff_banjo";
			break;
		case 3:
			sVar0 = "script@mp@moonshiner@moonshine_band@handoff_bass";
			break;
		case 1:
			sVar0 = "script@mp@moonshiner@moonshine_band@handoff_fiddle";
			break;
		case 5:
			sVar0 = "script@mp@moonshiner@moonshine_band@handoff_guitar";
			break;
		case 0:
			sVar0 = "script@mp@moonshiner@moonshine_band@handoff_piano";
			break;
		case 2:
			sVar0 = "script@mp@moonshiner@moonshine_band@handoff_washboard";
			break;
	}
	return sVar0;
}

var func_1502(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 4:
				StringCopy(&cVar0, "PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_B_MOONSHINE_BAND", 128);
				break;
			case 3:
				StringCopy(&cVar0, "PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_A_MOONSHINE_BAND", 128);
				break;
			case 1:
				StringCopy(&cVar0, "PROP_HUMAN_SEAT_CHAIR_SMOKING_FEMALE_A_MOONSHINE_BAND", 128);
				break;
			case 5:
				StringCopy(&cVar0, "PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_D_MOONSHINE_BAND", 128);
				break;
			case 0:
				StringCopy(&cVar0, "WORLD_HUMAN_LEAN_BACK_WALL_FEMALE_A_MOONSHINE_BAND", 128);
				break;
			case 2:
				StringCopy(&cVar0, "WORLD_HUMAN_LEAN_WALL_DRINKING_MALE_B_MOONSHINE_BAND", 128);
				break;
		}
		return func_1679(cVar0);
	}
	else if (iParam1 == 8 || iParam1 == 7)
	{
		switch (iParam0)
		{
			case 3:
				StringCopy(&cVar0, "MP_MOONSHINE_BAND_WORLD_HUMAN_DOUBLEBASS_HANDOFF_PERFORMER_MALE_A", 128);
				break;
			case 2:
				StringCopy(&cVar0, "MP_MOONSHINE_BAND_PROP_HUMAN_SEAT_CHAIR_WASHBOARD_HANDOFF_PERFORMER_MALE_A", 128);
				break;
			case 5:
				StringCopy(&cVar0, "MP_MOONSHINE_BAND_WORLD_HUMAN_GUITAR_HANDOFF_PERFORMER_MALE_A", 128);
				break;
			case 1:
				StringCopy(&cVar0, "MP_MOONSHINE_BAND_WORLD_HUMAN_FIDDLE_HANDOFF_PERFORMER_FEMALE_A", 128);
				break;
			case 0:
				if (bParam4)
				{
					StringCopy(&cVar0, "MP_MOONSHINE_BAND_WORLD_HUMAN_PIANO_HANDOFF_PERFORMER_LEFT_FEMALE_A", 128);
				}
				else
				{
					StringCopy(&cVar0, "MP_MOONSHINE_BAND_WORLD_HUMAN_PIANO_HANDOFF_PERFORMER_RIGHT_FEMALE_A", 128);
				}
				break;
		}
		return func_1679(cVar0);
	}
	StringCopy(&cVar0, "MP_MOONSHINE_BAND_", 128);
	switch (iParam0)
	{
		case 4:
			StringConCat(&cVar0, "PROP_HUMAN_SEAT_CHAIR_BANJO_", 128);
			break;
		case 3:
			StringConCat(&cVar0, "WORLD_HUMAN_DOUBLEBASS_", 128);
			break;
		case 1:
			StringConCat(&cVar0, "WORLD_HUMAN_FIDDLE_", 128);
			break;
		case 5:
			StringConCat(&cVar0, "WORLD_HUMAN_GUITAR_", 128);
			break;
		case 0:
			StringConCat(&cVar0, "WORLD_HUMAN_PIANO_", 128);
			break;
		case 2:
			StringConCat(&cVar0, "PROP_HUMAN_SEAT_CHAIR_WASHBOARD_", 128);
			break;
	}
	if (bParam2)
	{
		StringConCat(&cVar0, "SOBER_", 128);
	}
	else
	{
		StringConCat(&cVar0, "DRUNK_", 128);
	}
	if (iParam1 == 6)
	{
		StringConCat(&cVar0, "PLAYING_", 128);
	}
	else
	{
		StringConCat(&cVar0, "NOTPLAYING_", 128);
	}
	if (bParam3)
	{
		StringConCat(&cVar0, "MALE_", 128);
	}
	else
	{
		StringConCat(&cVar0, "FEMALE_", 128);
	}
	if (iParam0 == 4 && bParam3)
	{
		StringConCat(&cVar0, "B", 128);
	}
	else
	{
		StringConCat(&cVar0, "A", 128);
	}
	return func_1679(cVar0);
}

int func_1503(var uParam0)
{
	return uParam0->f_13;
}

void func_1504(var uParam0, var uParam1)
{
	switch (func_1311(uParam0))
	{
		case 0:
			if (func_1306(uParam0, 8))
			{
				func_1309(uParam0, 8);
				uParam1->f_4 = { func_1207("PIANO_BANDUP") };
			}
			else if (func_1680(uParam0, uParam1))
			{
				func_1681(uParam0);
			}
			else if (func_1682(uParam0, uParam1))
			{
				func_1681(uParam0);
			}
			else if (func_1306(uParam0, 8))
			{
				uParam1->f_4 = { func_1207("PIANO_BANDUP") };
			}
			else
			{
				uParam1->f_4 = { func_1207("PIANO_GREET") };
				func_1308(uParam0, 131072);
				func_1308(uParam0, 65536);
				func_1681(uParam0);
				Jump @1168; //curOff = 215
				if (!func_1306(uParam0, 131072))
				{
					uParam1->f_4 = { func_1207("PIANO_GREET") };
					func_1308(uParam0, 131072);
				}
				else
				{
					uParam1->f_4 = { func_1207("PIANO_IDLEPIANO") };
				}
				func_1681(uParam0);
				Jump @1168; //curOff = 279
				if (func_1306(uParam0, 256))
				{
				}
				else
				{
					if (func_1306(uParam0, 512))
					{
						if (!func_1306(uParam0, 1024))
						{
							uParam1->f_4 = { func_1207("PIANO_IDLENP") };
							func_1681(uParam0);
							func_1308(uParam0, 1024);
						}
						func_1680(uParam0, uParam1);
						func_1682(uParam0, uParam1);
						func_1683(uParam0, uParam1);
						func_1309(uParam0, 512);
						Jump @1168; //curOff = 387
					}
					else if (!func_1306(uParam0, 16384))
					{
						if (func_1306(uParam0, 32768))
						{
							if (!func_1683(uParam0, uParam1))
							{
								uParam1->f_4 = { func_1207("PIANO_BETWEEN") };
							}
							func_1309(uParam0, 32768);
						}
						else
						{
							uParam1->f_4 = { func_1207("PIANO_RAMBLE") };
							func_1308(uParam0, 32768);
						}
						if (func_1306(uParam0, 4))
						{
							func_1309(uParam0, 4);
						}
						func_1308(uParam0, 16384);
						func_1681(uParam0);
					}
					Jump @1168; //curOff = 514
					if (func_1306(uParam0, 32))
					{
						uParam1->f_4 = { func_1207("PIANO_REQUEST") };
					}
					else
					{
						uParam1->f_4 = { func_1207("PIANO_PAYBAND") };
						func_1308(uParam0, 32);
					}
					Jump @1168; //curOff = 567
					if (func_1306(uParam0, 256) && func_1306(uParam0, 16))
					{
					}
					else
					{
						if (func_1306(uParam0, 16))
						{
							if (!func_1684(uParam0, 4))
							{
								uParam1->f_4 = { func_1207("PIANO_IDLEP") };
								func_1685(uParam0, 4);
								func_1681(uParam0);
							}
						}
						else
						{
							uParam1->f_4 = { func_1207("PIANO_INTRO") };
							func_1308(uParam0, 16);
						}
						Jump @1168; //curOff = 672
						if (func_1686(uParam0))
						{
							StringCopy(&(uParam1->f_4), "", 24);
						}
						else
						{
							if (!func_1306(uParam0, 524288))
							{
								uParam1->f_4 = { func_1207("PIANO_INSTRUMNT") };
								func_1308(uParam0, 524288);
								func_1681(uParam0);
							}
							Jump @1168; //curOff = 741
							if (func_1686(uParam0))
							{
								StringCopy(&(uParam1->f_4), "", 24);
							}
							else
							{
								if (!func_1306(uParam0, 1048576))
								{
									if (func_1306(uParam0, 262144))
									{
										uParam1->f_4 = { func_1207("PIANO_INSTFINS") };
										func_1309(uParam0, 262144);
									}
									else if (func_1306(uParam0, 8388608))
									{
										uParam1->f_4 = { func_1207("PIANO_INSTSWAP") };
										func_1309(uParam0, 8388608);
									}
									func_1308(uParam0, 1048576);
									func_1681(uParam0);
								}
								Jump @1168; //curOff = 873
								if (func_1306(uParam0, 256))
								{
									if (!func_1684(uParam0, 2))
									{
										if (func_1306(uParam0, 4194304))
										{
											uParam1->f_4 = { func_1207("PIANO_INSTFINM") };
										}
										else
										{
											uParam1->f_4 = { func_1207("PIANO_INSTFINS") };
										}
										func_1685(uParam0, 2);
									}
									else if (!func_1684(uParam0, 4))
									{
										uParam1->f_4 = { func_1207("PIANO_IDLEP") };
										func_1685(uParam0, 4);
									}
									else if (!func_1684(uParam0, 8))
									{
										uParam1->f_4 = { func_1207("PIANO_INTRO") };
										func_1685(uParam0, 8);
									}
									else if (func_1680(uParam0, uParam1))
									{
									}
									else if (func_1683(uParam0, uParam1))
									{
									}
									else if (!func_1684(uParam0, 16))
									{
										uParam1->f_4 = { func_1207("PIANO_OUTRO") };
										func_1687(uParam0, 4);
										func_1687(uParam0, 8);
									}
									else
									{
										Jump @1168; //curOff = 1097
										if (!func_1684(uParam0, 32))
										{
											uParam1->f_4 = { func_1207("PIANO_OUTROSET") };
											func_1685(uParam0, 32);
										}
										else
										{
											uParam1->f_4 = { func_1207("PIANO_OUTRO") };
											func_1687(uParam0, 32);
										}
										func_1681(uParam0);
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

int func_1505(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_10))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (network_is_player_active(network_get_player_index(int_to_participantindex(iVar0))))
			{
				iVar1 = get_player_ped(network_get_player_index(int_to_participantindex(iVar0)));
				if (does_entity_exist(iVar1) && is_entity_in_volume(iVar1, uParam0->f_10, true, 0))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_1506(var uParam0)
{
	if (func_1306(uParam0, 2097152) && func_1508(&(uParam0->f_6)) > 120f)
	{
		func_1309(uParam0, 2097152);
	}
	if (func_1306(uParam0, 131072) && func_1508(&(uParam0->f_6)) > 60f)
	{
		func_1309(uParam0, 65536);
	}
	if (func_1508(&(uParam0->f_6)) > 300f)
	{
		func_1309(uParam0, 16384);
		func_1309(uParam0, 1024);
		func_1309(uParam0, 524288);
		func_1309(uParam0, 1048576);
		func_1309(uParam0, 65536);
		func_1687(uParam0, 2);
		func_466(&(uParam0->f_6));
	}
}

bool func_1507(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (network_is_player_active(network_get_player_index(int_to_participantindex(iVar0))))
			{
				iVar1 = get_player_ped(network_get_player_index(int_to_participantindex(iVar0)));
				if ((does_entity_exist(iVar1) && func_1688(net_to_ped(uParam0->f_9), iVar1, 1, 1) < 1f) && !_0x1a51bfe60708e482(network_get_player_index(int_to_participantindex(iVar0))))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

float func_1508(var uParam0)
{
	if (!func_465(uParam0))
	{
		return 0f;
	}
	return (to_float(func_743(uParam0)) * 0.001f);
}

int func_1509(var uParam0)
{
	if (is_string_null_or_empty(func_878(uParam0->f_4)))
	{
		return 0;
	}
	if (!network_does_network_id_exist(*uParam0))
	{
		return 0;
	}
	if (!does_entity_exist(net_to_ped(*uParam0)))
	{
		return 0;
	}
	if (is_string_null_or_empty(func_878(uParam0->f_1)))
	{
		return 0;
	}
	func_1689(&(uParam0->f_9), net_to_ped(*uParam0), func_878(uParam0->f_1), 0);
	if (func_1690(uParam0))
	{
		func_1691(uParam0);
		return 1;
	}
	return 0;
}

float func_1510(int iParam0, int iParam1, int iParam2)
{
	fVar0 = func_331(iParam1);
	switch (iParam2)
	{
		case 0:
			fVar1 = func_1692(iParam0);
			break;
		case 1:
			fVar1 = func_1693(iParam0);
			break;
		case 2:
			fVar1 = func_1694(iParam0);
			break;
		case 3:
			fVar1 = func_1695(iParam0, 1);
			break;
		case 4:
			fVar1 = func_1695(iParam0, 0);
			break;
	}
	fVar1 = (fVar0 + fVar1);
	return fVar1;
}

Vector3 func_1511(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			vVar0 = { -0.1f, -0.1f, 0f };
			break;
		case 2:
			vVar0 = { 0f, -0.04f, 0f };
			break;
	}
	return vVar0;
}

Vector3 func_1512(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			vVar0 = { -2.5593f, -2.88368f, 0.0127811f };
			break;
		case 3:
			vVar0 = { -1.76295f, -1.04203f, 0.00038147f };
			break;
		case 1:
			vVar0 = { 2.47f, -0.4f, 0.82f };
			break;
		case 5:
			vVar0 = { 3.64136f, -1.6898f, 0.0207825f };
			break;
		case 2:
			vVar0 = { 3.37568f, -3.18029f, 0.00306702f };
			break;
	}
	vVar0 = { vVar0 + func_1511(iParam0) };
	return vVar0;
}

Vector3 func_1513(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			vVar0 = { 2.27f, -0.95f, 0.82f };
			break;
	}
	vVar0 = { vVar0 + func_1511(iParam0) };
	return vVar0;
}

Vector3 func_1514(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			vVar0 = { -4.13f, -2.29f, 0.5f };
			break;
		case 3:
			vVar0 = { -2.71f, -0.19f, 0.5f };
			break;
		case 1:
			vVar0 = { 1.53f, -0.19f, 0.5f };
			break;
		case 5:
			vVar0 = { 4.15f, -0.83f, 0.5f };
			break;
		case 2:
			vVar0 = { 4.47f, -2.93f, 0f };
			break;
		case 0:
			vVar0 = { -1.589658f, 0.033002f, 0f };
			break;
	}
	vVar0 = { vVar0 + func_1511(iParam0) };
	return vVar0;
}

Vector3 func_1515(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			vVar0 = { -22.6139f, 0.548064f, 68.8768f };
			break;
		case 3:
			vVar0 = { -20.6038f, 0.628311f, 0.320831f };
			break;
		case 1:
			vVar0 = { -87.3f, -0.57f, 146.02f };
			break;
		case 5:
			vVar0 = { -15.8566f, -0.754336f, -91.9927f };
			break;
		case 2:
			vVar0 = { -13.273f, 0.0989955f, -5.37552f };
			break;
	}
	return vVar0;
}

Vector3 func_1516(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			vVar0 = { -87.65f, -32.92f, -40.97f };
			break;
	}
	return vVar0;
}

char* func_1517(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (bParam2)
		{
			switch (iParam0)
			{
				case 4:
					sVar0 = "AI_GESTURES@INSTRUMENTS@BANJO@SEATED@MALE@NORMAL";
					break;
				case 3:
					sVar0 = "AI_GESTURES@INSTRUMENTS@DOUBLE_BASS@STANDING@MALE@NORMAL";
					break;
				case 1:
					sVar0 = "AI_GESTURES@INSTRUMENTS@FIDDLE@STANDING@MALE@NORMAL";
					break;
				case 5:
					sVar0 = "AI_GESTURES@INSTRUMENTS@GUITAR@STANDING@MALE@NORMAL";
					break;
				case 0:
					sVar0 = "AI_GESTURES@INSTRUMENTS@PIANO@MALE@NORMAL";
					break;
				case 2:
					sVar0 = "AI_GESTURES@INSTRUMENTS@WASHBOARD@SEATED@MALE@NORMAL";
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 4:
					sVar0 = "AI_GESTURES@INSTRUMENTS@BANJO@SEATED@FEMALE@NORMAL";
					break;
				case 3:
					sVar0 = "AI_GESTURES@INSTRUMENTS@DOUBLE_BASS@STANDING@FEMALE@NORMAL";
					break;
				case 1:
					sVar0 = "AI_GESTURES@INSTRUMENTS@FIDDLE@STANDING@FEMALE@NORMAL";
					break;
				case 5:
					sVar0 = "AI_GESTURES@INSTRUMENTS@GUITAR@STANDING@FEMALE@NORMAL";
					break;
				case 0:
					sVar0 = "AI_GESTURES@INSTRUMENTS@PIANO@FEMALE@NORMAL";
					break;
				case 2:
					sVar0 = "AI_GESTURES@INSTRUMENTS@WASHBOARD@SEATED@FEMALE@NORMAL";
					break;
			}
		}
	}
	else if (bParam2)
	{
		switch (iParam0)
		{
			case 4:
				sVar0 = "AI_GESTURES@INSTRUMENTS@BANJO@SEATED@MALE@DRUNK";
				break;
			case 3:
				sVar0 = "AI_GESTURES@INSTRUMENTS@DOUBLE_BASS@STANDING@MALE@DRUNK";
				break;
			case 1:
				sVar0 = "AI_GESTURES@INSTRUMENTS@FIDDLE@STANDING@MALE@DRUNK";
				break;
			case 5:
				sVar0 = "AI_GESTURES@INSTRUMENTS@GUITAR@STANDING@MALE@DRUNK";
				break;
			case 0:
				sVar0 = "AI_GESTURES@INSTRUMENTS@PIANO@MALE@DRUNK";
				break;
			case 2:
				sVar0 = "AI_GESTURES@INSTRUMENTS@WASHBOARD@SEATED@MALE@DRUNK";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 4:
				sVar0 = "AI_GESTURES@INSTRUMENTS@BANJO@SEATED@FEMALE@DRUNK";
				break;
			case 3:
				sVar0 = "AI_GESTURES@INSTRUMENTS@DOUBLE_BASS@STANDING@FEMALE@DRUNK";
				break;
			case 1:
				sVar0 = "AI_GESTURES@INSTRUMENTS@FIDDLE@STANDING@FEMALE@DRUNK";
				break;
			case 5:
				sVar0 = "AI_GESTURES@INSTRUMENTS@GUITAR@STANDING@FEMALE@DRUNK";
				break;
			case 0:
				sVar0 = "AI_GESTURES@INSTRUMENTS@PIANO@FEMALE@DRUNK";
				break;
			case 2:
				sVar0 = "AI_GESTURES@INSTRUMENTS@WASHBOARD@SEATED@FEMALE@DRUNK";
				break;
		}
	}
	return sVar0;
}

void func_1518(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_1527(uParam0, iParam2, iParam3))
	{
		func_345(iParam1, 1, 1);
		func_1529(uParam0, iParam2, iParam3);
		*iParam1 = -1;
	}
}

bool func_1519(int iParam0, int iParam1)
{
	vVar0 = { _get_scenario_point_coords(iParam1, true) };
	if (func_1179(get_entity_coords(Global_34, true, false), vVar0) > 4f)
	{
		return false;
	}
	if (is_scenario_occupied(vVar0, 0.1f, false))
	{
		return false;
	}
	if ((iParam0 == 0 || iParam0 == 5) || iParam0 == 1)
	{
		return true;
	}
	fVar3 = _get_scenario_point_heading(iParam1, true);
	if (!func_1696(vVar0, fVar3, get_entity_coords(Global_34, true, false), 0))
	{
		return false;
	}
	return true;
}

char* func_1520(int iParam0, int iParam1)
{
	iVar0 = get_random_int_in_range(0, 3);
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (&Global_1940085)
					{
						case 0:
							return "NMB_PLAY_PIANO";
						case 1:
							StringCopy(&cVar1, "NMB_PLAY_PIANO_DRUNK_", 64);
							StringConCat(&cVar1, func_215(iVar0), 64);
							return func_618(cVar1);
						case 2:
							StringCopy(&cVar1, "NMB_PLAY_PIANO_WASTED_", 64);
							StringConCat(&cVar1, func_215(iVar0), 64);
							return func_618(cVar1);
					}
					break;
				case 4:
					switch (&Global_1940085)
					{
						case 0:
							return "NMB_PLAY_BANJO";
						case 1:
							StringCopy(&cVar1, "NMB_PLAY_BANJO_DRUNK_", 64);
							StringConCat(&cVar1, func_215(iVar0), 64);
							return func_618(cVar1);
						case 2:
							StringCopy(&cVar1, "NMB_PLAY_BANJO_WASTED_", 64);
							StringConCat(&cVar1, func_215(iVar0), 64);
							return func_618(cVar1);
					}
					break;
				case 3:
					switch (&Global_1940085)
					{
						case 0:
							return "NMB_PLAY_BASS";
						case 1:
							StringCopy(&cVar1, "NMB_PLAY_BASS_DRUNK_", 64);
							StringConCat(&cVar1, func_215(iVar0), 64);
							return func_618(cVar1);
						case 2:
							StringCopy(&cVar1, "NMB_PLAY_BASS_WASTED_", 64);
							StringConCat(&cVar1, func_215(iVar0), 64);
							return func_618(cVar1);
					}
					break;
				case 1:
					switch (&Global_1940085)
					{
						case 0:
							return "NMB_PLAY_FIDDLE";
						case 1:
							StringCopy(&cVar1, "NMB_PLAY_FIDDLE_DRUNK_", 64);
							StringConCat(&cVar1, func_215(iVar0), 64);
							return func_618(cVar1);
						case 2:
							StringCopy(&cVar1, "NMB_PLAY_FIDDLE_WASTED_", 64);
							StringConCat(&cVar1, func_215(iVar0), 64);
							return func_618(cVar1);
					}
					break;
				case 5:
					switch (&Global_1940085)
					{
						case 0:
							return "NMB_PLAY_GUITAR";
						case 1:
							StringCopy(&cVar1, "NMB_PLAY_GUITAR_DRUNK_", 64);
							StringConCat(&cVar1, func_215(iVar0), 64);
							return func_618(cVar1);
						case 2:
							StringCopy(&cVar1, "NMB_PLAY_GUITAR_WASTED_", 64);
							StringConCat(&cVar1, func_215(iVar0), 64);
							return func_618(cVar1);
					}
					break;
				case 2:
					switch (&Global_1940085)
					{
						case 0:
							return "NMB_PLAY_WASHBOARD";
						case 1:
							StringCopy(&cVar1, "NMB_PLAY_WASHBOARD_DRUNK_", 64);
							StringConCat(&cVar1, func_215(iVar0), 64);
							return func_618(cVar1);
						case 2:
							StringCopy(&cVar1, "NMB_PLAY_WASHBOARD_WASTED_", 64);
							StringConCat(&cVar1, func_215(iVar0), 64);
							return func_618(cVar1);
					}
					break;
			}
			break;
		case 1:
			switch (&Global_1940085)
			{
				case 0:
					return "LEAVE";
				case 1:
					StringCopy(&cVar1, "NMB_LEAVE_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "NMB_LEAVE_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 2:
			switch (&Global_1940085)
			{
				case 0:
					return "PLAY_MUSIC";
				case 1:
					StringCopy(&cVar1, "PLAY_MUSIC_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "PLAY_MUSIC_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 3:
			switch (&Global_1940085)
			{
				case 0:
					return "FINISH_SET";
				case 1:
					StringCopy(&cVar1, "FINISH_SET_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "FINISH_SET_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 4:
			switch (&Global_1940085)
			{
				case 0:
					return "TAKE_INSTRUMENT";
				case 1:
					StringCopy(&cVar1, "TAKE_INSTRUMENT_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "TAKE_INSTRUMENT_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 5:
			switch (&Global_1940085)
			{
				case 0:
					return "NMB_FLOURISH";
				case 1:
					StringCopy(&cVar1, "NMB_FLOURISH_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "NMB_FLOURISH_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 6:
			switch (&Global_1940085)
			{
				case 0:
					return "NMB_START_PLAYING";
				case 1:
					StringCopy(&cVar1, "NMB_START_PLAYING_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "NMB_START_PLAYING_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 7:
			switch (&Global_1940085)
			{
				case 0:
					return "NMB_STOP_PLAYING";
				case 1:
					StringCopy(&cVar1, "NMB_STOP_PLAYING_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "NMB_STOP_PLAYING_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 9:
			switch (&Global_1940085)
			{
				case 0:
					return "NMB_PLAY_WITH_BAND";
				case 1:
					StringCopy(&cVar1, "NMB_PLAY_WITH_BAND_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "NMB_PLAY_WITH_BAND_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
		case 8:
			switch (&Global_1940085)
			{
				case 0:
					return "NMB_FINISH_BAND_SET";
				case 1:
					StringCopy(&cVar1, "NMB_FINISH_BAND_SET_DRUNK_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
				case 2:
					StringCopy(&cVar1, "NMB_FINISH_BAND_SET_WASTED_", 64);
					StringConCat(&cVar1, func_215(iVar0), 64);
					return func_618(cVar1);
			}
			break;
	}
	return "";
}

void func_1521(var uParam0, int iParam1, int iParam2)
{
	func_83(&((*uParam0)[iParam2]->f_6), iParam1);
}

bool func_1522(var uParam0)
{
	if (!func_64(&(uParam0->f_112)) || func_65(&(uParam0->f_112), 0.5f))
	{
		func_63(&(uParam0->f_112));
		return true;
	}
	return false;
}

void func_1523(int iParam0, int iParam1, int iParam2)
{
	Var0 = 14;
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_6 = iParam2;
	iVar7 = network_get_host_of_this_script();
	uVar8 = func_1697(network_get_player_index(iVar7));
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	trigger_script_event(1, &Var0, 7, 47, &uVar8);
}

float func_1524(var uParam0)
{
	if (!func_64(uParam0))
	{
		return 0f;
	}
	if (func_243(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_240() - uParam0->f_1);
}

bool func_1525(int iParam0, bool bParam1)
{
	if (bParam1 && !func_341(iParam0))
	{
		return false;
	}
	iVar0 = func_589(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1951255)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1951255)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1951255)[iVar0]->f_3);
}

void func_1526(int iParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "Silent_Flourish_", 128);
	if (bParam2)
	{
		StringConCat(&cVar0, "Drunk_", 128);
	}
	else
	{
		StringConCat(&cVar0, "Normal_", 128);
	}
	switch (iParam0)
	{
		case 4:
			StringConCat(&cVar0, "Banjo", 128);
			break;
		case 3:
			StringConCat(&cVar0, "Double_Bass", 128);
			break;
		case 1:
			StringConCat(&cVar0, "Fiddle", 128);
			break;
		case 5:
			StringConCat(&cVar0, "Guitar", 128);
			break;
		case 0:
			StringConCat(&cVar0, "Piano", 128);
			break;
		case 2:
			StringConCat(&cVar0, "Washboard", 128);
			break;
	}
	if (!func_1675(iParam1, func_1679(cVar0), -128067431, 0, 1, 0, 0, 1))
	{
	}
}

bool func_1527(var uParam0, int iParam1, int iParam2)
{
	return func_82((*uParam0)[iParam2]->f_6, iParam1);
}

bool func_1528(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (bParam2)
	{
		sVar0 = func_1120(iParam1);
		if (_0x870708a6e147a9ad(iParam0, sVar0, fParam3, fParam3, 4, 0, 0, 0, 0, 3))
		{
			_0xfca8fb9e15fa80d3(iParam0, get_hash_key(sVar0));
		}
		else
		{
			return false;
		}
	}
	else
	{
		_0xe98d55c5983f2509(iParam0);
	}
	return true;
}

void func_1529(var uParam0, int iParam1, int iParam2)
{
	func_99(&((*uParam0)[iParam2]->f_6), iParam1);
}

bool func_1530(int iParam0, int iParam1)
{
	if ((is_player_playing(iParam0) && does_entity_exist(iParam1)) && !is_entity_dead(iParam1))
	{
		if (((_0x3ee1f7a8c32f24e1(iParam0, &iVar0, 0, 0) && does_entity_exist(iVar0)) && iVar0 == iParam1) || ((_0xbea3a6e5f5f79a6f(iParam0, &iVar0) && does_entity_exist(iVar0)) && iVar0 == iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_1531(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_1698(iParam0, vVar0, fParam2);
}

bool func_1532(int iParam0, int iParam1)
{
	return func_1699(iParam0, get_entity_coords(iParam1, true, false));
}

bool func_1533(var uParam0, var uParam1)
{
	if (func_326(uParam0) != 0)
	{
		return false;
	}
	if (func_582(uParam0->f_3[1]->f_3))
	{
		iVar0 = network_get_participant_index(uParam0->f_3[1]->f_3);
		if (func_1126((*uParam1)[iVar0], 4))
		{
			return false;
		}
	}
	return true;
}

int func_1534(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_582(uParam0->f_3[iVar0]->f_3))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

char* func_1535(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			sVar0 = "p_cigarette_cs01x_PH_R_HAND";
			break;
		case 2:
			sVar0 = "p_mugCoffee01x_ph_r_hand";
			break;
	}
	return sVar0;
}

char* func_1536(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			sVar0 = "p_banjo01x_XH_R_HAND00";
			break;
		case 3:
			sVar0 = "mp006_p_dblcello01x_XH_R_HAND00";
			break;
		case 1:
			sVar0 = "p_fiddle01x_PH_L_HAND";
			break;
		case 5:
			sVar0 = "p_guitar01x_XH_R_HAND00";
			break;
		case 2:
			sVar0 = "mp006_p_mnshn_washboard01x_XH_R_HAND00";
			break;
	}
	return sVar0;
}

char* func_1537(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			sVar0 = "p_bow01x_PH_R_HAND";
			break;
	}
	return sVar0;
}

char* func_1538(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 5:
			if (bParam1)
			{
				sVar0 = "performer_trans_notplaying";
			}
			else
			{
				sVar0 = "resting_trans_notplaying";
			}
			break;
		case 1:
			sVar0 = "notplaying_trans_rest";
			break;
		case 6:
			if (bParam1)
			{
				sVar0 = "performer_trans_playing";
			}
			else
			{
				sVar0 = "resting_trans_playing";
			}
			break;
		case 7:
			if (bParam2)
			{
				if (bParam3)
				{
					sVar0 = "playing_trans_handoff_left";
				}
				else
				{
					sVar0 = "playing_trans_handoff_right";
				}
			}
			else
			{
				sVar0 = "playing_trans_handoff";
			}
			break;
		case 8:
			if (bParam2)
			{
				if (bParam3)
				{
					sVar0 = "notplaying_trans_handoff_left";
				}
				else
				{
					sVar0 = "notplaying_trans_handoff_right";
				}
			}
			else
			{
				sVar0 = "notplaying_trans_handoff";
			}
			break;
	}
	return sVar0;
}

char* func_1539(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 5:
					if (bParam2)
					{
						sVar0 = "amb_misc@prop_human_seat_chair_banjo_handoff@sober@performer@male_b@trans@performer_trans_notplaying";
					}
					else
					{
						sVar0 = "amb_misc@prop_human_seat_chair_banjo_resting@male_b@trans@resting_trans_notplaying";
					}
					break;
				case 1:
					sVar0 = "amb_misc@prop_human_seat_chair_banjo@sober@notplaying@male_b@trans@notplaying_trans_rest";
					break;
				case 6:
					if (bParam2)
					{
						sVar0 = "amb_misc@prop_human_seat_chair_banjo_handoff@sober@performer@male_b@trans@performer_trans_playing";
					}
					else
					{
						sVar0 = "amb_misc@prop_human_seat_chair_banjo_resting@male_b@trans@resting_trans_playing";
					}
					break;
				case 7:
					sVar0 = "amb_misc@prop_human_seat_chair_banjo@sober@playing@male_b@trans@playing_trans_handoff";
					break;
				case 8:
					sVar0 = "amb_misc@prop_human_seat_chair_banjo@sober@notplaying@male_b@trans@notplaying_trans_handoff";
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 5:
					if (bParam2)
					{
						sVar0 = "amb_misc@world_human_doublebass_handoff@sober@performer@male_a@trans@performer_trans_notplaying";
					}
					else
					{
						sVar0 = "amb_misc@world_human_doublebass_resting@male_a@trans@resting_trans_notplaying";
					}
					break;
				case 1:
					sVar0 = "amb_misc@world_human_doublebass@sober@notplaying@male_a@trans@notplaying_trans_rest";
					break;
				case 6:
					if (bParam2)
					{
						sVar0 = "amb_misc@world_human_doublebass_handoff@sober@performer@male_a@trans@performer_trans_playing";
					}
					else
					{
						sVar0 = "amb_misc@world_human_doublebass_resting@male_a@trans@resting_trans_playing";
					}
					break;
				case 7:
					sVar0 = "amb_misc@world_human_doublebass@sober@playing@male_a@trans@playing_trans_handoff";
					break;
				case 8:
					sVar0 = "amb_misc@world_human_doublebass@sober@notplaying@male_a@trans@notplaying_trans_handoff";
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 5:
					if (bParam2)
					{
						sVar0 = "amb_misc@world_human_fiddle_handoff@sober@performer@female_a@trans@performer_trans_notplaying";
					}
					else
					{
						sVar0 = "amb_misc@world_human_fiddle_resting@female_a@trans@resting_trans_notplaying";
					}
					break;
				case 1:
					sVar0 = "amb_misc@world_human_fiddle@sober@notplaying@female_a@trans@notplaying_trans_rest";
					break;
				case 6:
					if (bParam2)
					{
						sVar0 = "amb_misc@world_human_fiddle_handoff@sober@performer@female_a@trans@performer_trans_playing";
					}
					else
					{
						sVar0 = "amb_misc@world_human_fiddle_resting@female_a@trans@resting_trans_playing";
					}
					break;
				case 7:
					sVar0 = "amb_misc@world_human_fiddle@sober@playing@female_a@trans@playing_trans_handoff";
					break;
				case 8:
					sVar0 = "amb_misc@world_human_fiddle@sober@notplaying@female_a@trans@notplaying_trans_handoff";
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 5:
					if (bParam2)
					{
						sVar0 = "amb_misc@world_human_guitar_handoff@sober@performer@male_a@trans@performer_trans_notplaying";
					}
					else
					{
						sVar0 = "amb_misc@world_human_guitar_resting@male_a@trans@resting_trans_notplaying";
					}
					break;
				case 1:
					sVar0 = "amb_misc@world_human_guitar@sober@notplaying@male_a@trans@notplaying_trans_rest";
					break;
				case 6:
					if (bParam2)
					{
						sVar0 = "amb_misc@world_human_guitar_handoff@sober@performer@male_a@trans@performer_trans_playing";
					}
					else
					{
						sVar0 = "amb_misc@world_human_guitar_resting@male_a@trans@resting_trans_playing";
					}
					break;
				case 7:
					sVar0 = "amb_misc@world_human_guitar@sober@playing@male_a@trans@playing_trans_handoff";
					break;
				case 8:
					sVar0 = "amb_misc@world_human_guitar@sober@notplaying@male_a@trans@notplaying_trans_handoff";
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 5:
					if (bParam2)
					{
						if (bParam3)
						{
							sVar0 = "amb_misc@WORLD_HUMAN_PIANO_handoff@sober@performer_left@female_a@trans@performer_trans_notplaying";
						}
						else
						{
							sVar0 = "amb_misc@WORLD_HUMAN_PIANO_handoff@sober@performer_right@female_a@trans@performer_trans_notplaying";
						}
					}
					else
					{
						sVar0 = "amb_misc@world_human_piano_resting@female_a@trans@resting_trans_notplaying";
					}
					break;
				case 1:
					sVar0 = "amb_misc@world_human_piano@sober@notplaying@female_a@trans@notplaying_trans_rest";
					break;
				case 6:
					if (bParam2)
					{
						if (bParam3)
						{
							sVar0 = "amb_misc@WORLD_HUMAN_PIANO_handoff@sober@performer_left@female_a@trans@performer_trans_playing";
						}
						else
						{
							sVar0 = "amb_misc@WORLD_HUMAN_PIANO_handoff@sober@performer_right@female_a@trans@performer_trans_playing";
						}
					}
					else
					{
						sVar0 = "amb_misc@world_human_piano_resting@female_a@trans@resting_trans_playing";
					}
					break;
				case 7:
					if (bParam3)
					{
						sVar0 = "amb_misc@world_human_piano@sober@playing@female_a@trans@playing_trans_handoff_left";
					}
					else
					{
						sVar0 = "amb_misc@world_human_piano@sober@playing@female_a@trans@playing_trans_handoff_right";
					}
					break;
				case 8:
					if (bParam3)
					{
						sVar0 = "amb_misc@world_human_piano@sober@notplaying@female_a@trans@notplaying_trans_handoff_left";
					}
					else
					{
						sVar0 = "amb_misc@world_human_piano@sober@notplaying@female_a@trans@notplaying_trans_handoff_right";
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 5:
					if (bParam2)
					{
						sVar0 = "amb_misc@prop_human_seat_chair_washboard_handoff@sober@performer@male_a@trans@performer_trans_notplaying";
					}
					else
					{
						sVar0 = "amb_misc@prop_human_seat_chair_washboard_resting@male_a@trans@resting_trans_notplaying";
					}
					break;
				case 1:
					sVar0 = "amb_misc@prop_human_seat_chair_washboard@sober@notplaying@male_a@trans@notplaying_trans_rest";
					break;
				case 6:
					if (bParam2)
					{
						sVar0 = "amb_misc@prop_human_seat_chair_washboard_handoff@sober@performer@male_a@trans@performer_trans_playing";
					}
					else
					{
						sVar0 = "amb_misc@prop_human_seat_chair_washboard_resting@male_a@trans@resting_trans_playing";
					}
					break;
				case 7:
					sVar0 = "amb_misc@prop_human_seat_chair_washboard@sober@playing@male_a@trans@playing_trans_handoff";
					break;
				case 8:
					sVar0 = "amb_misc@prop_human_seat_chair_washboard@sober@notplaying@male_a@trans@notplaying_trans_handoff";
					break;
			}
			break;
	}
	return sVar0;
}

bool func_1540(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, bool bParam5)
{
	if (bParam5)
	{
		_0x6d07b371e9439019(iParam0);
	}
	return _0x79197f7d2bb5e73a(iParam0, uParam1, sParam2, sParam3, iParam4, 0);
}

float func_1541(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_1179(vVar0, vParam1);
}

char* func_1542(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			sVar0 = func_1536(iParam0);
			break;
		case 1:
			sVar0 = func_1537(iParam0);
			break;
		case 2:
			sVar0 = func_1535(iParam0);
			break;
	}
	return sVar0;
}

bool func_1543(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = 1;
	if (!_network_has_control_of_anim_scene(*iParam1))
	{
		_network_request_control_of_anim_scene(*iParam1);
		iVar0 = 0;
	}
	else
	{
		_0x7182edda1ee7db5a(uParam0->f_3[iParam3]->f_2);
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (network_does_network_id_exist(&(uParam0->f_3[iParam3]->f_4[iVar1])))
		{
			if (!network_has_control_of_network_id(&(uParam0->f_3[iParam3]->f_4[iVar1])))
			{
				network_request_control_of_network_id(&(uParam0->f_3[iParam3]->f_4[iVar1]));
				iVar0 = 0;
			}
			else
			{
				_0x7182edda1ee7db5a(&(uParam0->f_3[iParam3]->f_4[iVar1]));
			}
		}
		iVar1++;
	}
	if (!bParam2)
	{
		network_request_control_of_network_id(uParam0->f_3[iParam3]->f_1);
		iVar0 = 0;
	}
	else
	{
		_0x7182edda1ee7db5a(uParam0->f_3[iParam3]->f_1);
	}
	return iVar0;
}

char* func_1544(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	StringCopy(&cVar0, "MP_MOONSHINE_BAND_", 128);
	switch (iParam0)
	{
		case 4:
			StringConCat(&cVar0, "PROP_HUMAN_SEAT_CHAIR_BANJO_", 128);
			break;
		case 3:
			StringConCat(&cVar0, "WORLD_HUMAN_DOUBLEBASS_", 128);
			break;
		case 1:
			StringConCat(&cVar0, "WORLD_HUMAN_FIDDLE_", 128);
			break;
		case 5:
			StringConCat(&cVar0, "WORLD_HUMAN_GUITAR_", 128);
			break;
		case 0:
			StringConCat(&cVar0, "WORLD_HUMAN_PIANO_", 128);
			break;
		case 2:
			StringConCat(&cVar0, "PROP_HUMAN_SEAT_CHAIR_WASHBOARD_", 128);
			break;
	}
	StringConCat(&cVar0, "HANDOFF_", 128);
	if (iParam0 == 0)
	{
		if (bParam3)
		{
			StringConCat(&cVar0, "LEFT_", 128);
		}
		else
		{
			StringConCat(&cVar0, "RIGHT_", 128);
		}
	}
	if (bParam1)
	{
		StringConCat(&cVar0, "SOBER_", 128);
	}
	else
	{
		StringConCat(&cVar0, "DRUNK_", 128);
	}
	StringConCat(&cVar0, "PLAYER_", 128);
	if (bParam2)
	{
		StringConCat(&cVar0, "MALE_", 128);
	}
	else
	{
		StringConCat(&cVar0, "FEMALE_", 128);
	}
	if (iParam0 == 4 && bParam2)
	{
		StringConCat(&cVar0, "B", 128);
	}
	else
	{
		StringConCat(&cVar0, "A", 128);
	}
	return func_1679(cVar0);
}

bool func_1545(int iParam0, int iParam1)
{
	if (iParam1 * 2 >= iParam0)
	{
		return true;
	}
	return false;
}

bool func_1546(int iParam0)
{
	if (iParam0 > 0)
	{
		return true;
	}
	return false;
}

bool func_1547(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (func_581(uParam0, 2) == 6 || func_581(uParam0, 2) == 2)
		{
			return true;
		}
	}
	return false;
}

void func_1548(var uParam0)
{
	func_87(uParam0, 256, 0);
	func_87(uParam0, 512, 0);
	func_87(uParam0, 128, 1);
}

void func_1549(var uParam0)
{
	func_87(uParam0, 512, 0);
	func_87(uParam0, 256, 1);
	func_87(uParam0, 128, 1);
}

void func_1550(var uParam0)
{
	func_87(uParam0, 128, 0);
	func_87(uParam0, 256, 1);
	func_87(uParam0, 512, 1);
}

void func_1551(var uParam0)
{
	func_87(uParam0, 256, 0);
	func_87(uParam0, 128, 1);
	func_87(uParam0, 512, 1);
}

void func_1552(var uParam0)
{
	func_87(uParam0, 128, 0);
	func_87(uParam0, 256, 0);
	func_87(uParam0, 512, 0);
	func_87(uParam0, 32, 1);
}

void func_1553(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_1554(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 4;
		case 3:
			return 2;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 4;
		case 9:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1555(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

struct<2> func_1556(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_1557(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	stat_id_set_int(&uParam0, iParam2, true);
}

bool func_1558()
{
	Var2 = { func_509(func_498(-1103026985), -1919535953) };
	if (!_stat_id_is_valid(&Var2))
	{
		return true;
	}
	stat_id_get_int(&Var2, &iVar0);
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = func_507(func_498(-1103026985)) * 60;
	return (iVar0 + iVar1) >= Global_1296859->f_21;
}

void func_1559(var uParam0, int iParam1)
{
	if (func_1168(uParam0, iParam1))
	{
		func_59(uParam0, iParam1);
	}
}

bool func_1560(var uParam0, bool bParam1)
{
	if (func_1168(&(uParam0->f_359), 1) || func_1168(&(uParam0->f_359), 8))
	{
		return false;
	}
	if (func_1387() != player_id())
	{
		return false;
	}
	return bParam1;
}

int func_1561(var uParam0, bool bParam1)
{
	fVar0 = get_random_float_in_range(0f, 1f);
	iVar1 = func_1077(1766283257);
	if (func_4(2097152))
	{
		func_1169(&(uParam0->f_359), 1);
		func_11(2097152);
		if (fVar0 < 0.7f)
		{
			return 30;
		}
		else
		{
			return 27;
		}
	}
	else if (func_4(4194304))
	{
		func_1169(&(uParam0->f_359), 1);
		func_11(4194304);
		if (fVar0 < 0.7f)
		{
			return 32;
		}
		else
		{
			return 28;
		}
	}
	if (iVar1 != -1)
	{
		func_1169(&(uParam0->f_359), 1);
		iVar2 = func_1085(iVar1);
		iVar3 = func_1250(iVar2);
		if (iVar3 == 456791065)
		{
			if (bParam1)
			{
				if (!func_4(8388608))
				{
					func_70(8388608);
				}
			}
			if (func_1700(1766283257))
			{
				switch (func_1382(1766283257))
				{
					case 0:
						if (fVar0 < 0.7f)
						{
							return 29;
						}
						else
						{
							return 27;
						}
						break;
					case 1:
						return 31;
					case 2:
						if (fVar0 < 0.7f)
						{
							return 32;
						}
						else
						{
							return 28;
						}
						break;
				}
			}
			else if (fVar0 < 0.7f)
			{
				return 32;
			}
			else
			{
				return 28;
			}
		}
	}
	return 0;
}

bool func_1562(var uParam0)
{
	if (func_1168(&(uParam0->f_359), 4))
	{
		return false;
	}
	if (func_1701(1766283257) < 3)
	{
		return false;
	}
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 > 0.3f)
	{
		return false;
	}
	return true;
}

void func_1563(struct<2> Param0, int iParam2)
{
	func_1702(Param0, iParam2);
}

void func_1564(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (_0x6f1f0b17109309da(iParam0, sParam3))
	{
		if (does_entity_exist(iParam1))
		{
			set_entity_visible(iParam1, false);
			if (bParam7)
			{
				set_entity_collision(iParam1, false, false);
			}
		}
		if (does_entity_exist(iParam2))
		{
			sVar0 = func_1703(iParam4, iParam5);
			if (!_0x3ab6c7b0bb0df4b1(iParam2, iParam0))
			{
				if (_does_scenario_point_exist(iParam6))
				{
					if (!_0x375f5870a7b8bec1(sVar0))
					{
						_0x6ef4e31b4d5d2da0(iParam6, sVar0);
					}
				}
				set_anim_scene_entity(iParam0, sParam3, iParam2, 0);
			}
			set_entity_visible(iParam2, true);
			set_entity_collision(iParam2, true, false);
		}
	}
	else
	{
		if (does_entity_exist(iParam1))
		{
			set_entity_visible(iParam1, true);
			if (bParam7)
			{
				set_entity_collision(iParam1, true, false);
			}
		}
		if (does_entity_exist(iParam2))
		{
			set_entity_visible(iParam2, false);
			set_entity_collision(iParam2, false, false);
		}
	}
}

bool func_1565(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_1704(iParam0, iParam5);
	sVar1 = func_1703(iParam0, iParam5);
	if (does_entity_exist(iParam3))
	{
		if (_0x6f1f0b17109309da(iParam1, sParam4))
		{
			if (_0x3ab6c7b0bb0df4b1(iParam3, iParam1))
			{
				remove_anim_scene_entity(iParam1, sParam4, iParam3);
			}
		}
		if (_does_scenario_point_exist(iParam6))
		{
			if (!_0x375f5870a7b8bec1(sVar1))
			{
				if (!_0x8360c47380b6f351(iParam6, iParam3, sVar1, 0))
				{
					return false;
				}
			}
		}
		if (bVar0)
		{
			set_entity_visible(iParam3, false);
			set_entity_collision(iParam3, false, false);
		}
	}
	if (does_entity_exist(iParam2))
	{
		set_entity_visible(iParam2, bVar0);
		if (bParam7)
		{
			set_entity_collision(iParam2, bVar0, false);
		}
	}
	return true;
}

int func_1566(struct<2> Param0)
{
	iVar0 = func_1466(Param0, -1);
	return iVar0;
}

int func_1567(int iParam0)
{
	Var0 = { func_760(-1684144076, func_1244(iParam0)) };
	return func_1705(Var0);
}

void func_1568(int iParam0, int iParam1)
{
	Var0 = { func_760(-1684144076, func_1244(iParam0)) };
	func_1706(Var0, iParam1);
}

bool func_1569(var uParam0)
{
	if ((func_1176(&(uParam0->f_260), 1) && !func_1176(&(uParam0->f_260), 32768)) || func_4(16777216))
	{
		return false;
	}
	iVar0 = func_1415(-408236271);
	switch (iVar0)
	{
		case 0:
			return false;
		default:
			break;
	}
	return true;
}

int func_1570()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (func_1700(-408236271))
	{
		switch (func_1382(-408236271))
		{
			case 0:
				if (fVar0 < 0.5f)
				{
					return 16;
				}
				else
				{
					return 18;
				}
				break;
			case 1:
				return 19;
			case 2:
				if (fVar0 < 0.5f)
				{
					return 17;
				}
				else
				{
					return 20;
				}
				break;
		}
	}
	else if (fVar0 < 0.5f)
	{
		return 17;
	}
	else
	{
		return 20;
	}
	return 0;
}

bool func_1571(int iParam0)
{
	iVar0 = func_1707(iParam0);
	func_1708(&iVar0, 0, 0, 0, 5, 0, 0, 0);
	return func_1709(iVar0, 1);
}

bool func_1572(var uParam0)
{
	if (!func_670(func_1387(), 128))
	{
		return false;
	}
	if (func_1176(&(uParam0->f_260), 1024))
	{
		return false;
	}
	return true;
}

bool func_1573(var uParam0)
{
	iVar0 = func_1710();
	switch (iVar0)
	{
		case 1:
			if (!func_1176(&(uParam0->f_260), 2048))
			{
				func_1177(&(uParam0->f_260), 2048);
				return true;
			}
			break;
		case 2:
			if (!func_1176(&(uParam0->f_260), 4096))
			{
				func_1177(&(uParam0->f_260), 4096);
				return true;
			}
			break;
		case 3:
			if (!func_1176(&(uParam0->f_260), 8192))
			{
				func_1177(&(uParam0->f_260), 8192);
				return true;
			}
			break;
	}
	return false;
}

bool func_1574()
{
	if (func_1555(func_1556(-1473368735)) == 1)
	{
		return false;
	}
	if (!_0xfbe782b3165ac8ec(-1429796736))
	{
		return false;
	}
	func_1557(func_1556(-1473368735), 1);
	return true;
}

bool func_1575(var uParam0)
{
	if (func_1176(&(uParam0->f_260), 512))
	{
		return false;
	}
	if (_unlock_is_unlocked(-1197876003) && !_unlock_is_new(-1197876003))
	{
		_unlock_set_new(-1197876003, true);
		iVar0 = 1;
	}
	if (_unlock_is_unlocked(1660694951) && !_unlock_is_new(1660694951))
	{
		_unlock_set_new(1660694951, true);
		iVar0 = 1;
	}
	return iVar0;
}

int func_1576()
{
	if (_unlock_is_unlocked(1660694951))
	{
		return 35;
	}
	if (_unlock_is_unlocked(-1197876003))
	{
		return 34;
	}
	return 0;
}

bool func_1577(var uParam0)
{
	if (func_670(func_1387(), 128))
	{
		return false;
	}
	bVar0 = func_1711();
	if (!func_1176(&(uParam0->f_260), 16384) && bVar0)
	{
		func_1177(&(uParam0->f_260), 16384);
		func_1712(&(uParam0->f_260), 16);
	}
	if (func_1176(&(uParam0->f_260), 16))
	{
		return false;
	}
	fVar1 = 0.5f;
	if (bVar0)
	{
		fVar1 = 1f;
	}
	return get_random_float_in_range(0f, 1f) <= fVar1;
}

int func_1578()
{
	iVar0 = 12;
	if (func_670(func_1387(), 256))
	{
		iVar0 = 13;
	}
	else if (func_1711())
	{
		if (func_670(func_1387(), 32))
		{
			iVar0 = 33;
		}
		else
		{
			iVar0 = 36;
		}
	}
	return iVar0;
}

bool func_1579(var uParam0)
{
	if (func_1176(&(uParam0->f_260), 64))
	{
		return false;
	}
	fVar1 = get_random_float_in_range(0f, 1f);
	iVar2 = func_1580();
	switch (iVar2)
	{
		case 26:
			fVar0 = 0.3f;
			break;
		case 27:
			fVar0 = 0.6f;
			break;
		case 28:
			fVar0 = 0.8f;
			break;
		default:
			fVar0 = 0.6f;
			break;
	}
	if (fVar1 < fVar0)
	{
		return true;
	}
	return false;
}

int func_1580()
{
	switch (func_1713(0))
	{
		case 0:
			return 26;
		case 1:
			return 27;
		case 2:
			return 28;
		default:
			break;
	}
	return 27;
}

bool func_1581()
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1714(iVar0);
		if (_unlock_is_unlocked(iVar1) && !_unlock_is_new(iVar1))
		{
			_unlock_set_new(iVar1, true);
			iVar2 = 1;
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1582(var uParam0)
{
	iVar0 = uParam0->f_136;
	uParam0->f_136 = func_1715();
	if (iVar0 < 0)
	{
		return false;
	}
	if (uParam0->f_136 < iVar0)
	{
		return true;
	}
	return false;
}

int func_1583()
{
	if (func_670(func_1387(), 128) || func_670(func_1387(), 4))
	{
		return 32;
	}
	return 31;
}

bool func_1584(var uParam0)
{
	if (func_1176(&(uParam0->f_260), 4))
	{
		return false;
	}
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 > 0.3f)
	{
		return false;
	}
	return true;
}

bool func_1585(var uParam0)
{
	if (func_1176(&(uParam0->f_260), 128))
	{
		if (!func_670(func_1387(), 1048576))
		{
			func_1712(&(uParam0->f_260), 128);
		}
		return false;
	}
	if (func_670(func_1387(), 1048576))
	{
		if (func_1387() == player_id())
		{
			func_673(1048576);
		}
		return true;
	}
	return false;
}

bool func_1586(var uParam0)
{
	if (func_1176(&(uParam0->f_260), 32))
	{
		return false;
	}
	if (func_1701(-408236271) < 3)
	{
		return false;
	}
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 > 0.3f)
	{
		return false;
	}
	return true;
}

void func_1587(int iParam0)
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
		func_1143(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_1353(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

int func_1588(struct<2> Param0)
{
	iVar0 = func_1466(Param0, 0);
	return iVar0;
}

int func_1589(bool bParam0, bool bParam1, bool bParam2)
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

bool func_1590(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

int func_1591(int iParam0)
{
	switch (iParam0)
	{
		case 1934013388:
			return 1;
		default:
			break;
	}
	return 0;
}

var func_1592(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_float(&uVar0, uParam0))
	{
	}
	return uVar0;
}

bool func_1593(var uParam0, var uParam1)
{
	uParam0->f_1 = uVar0;
	*uParam0 = uParam1;
	uParam0->f_2 = 1372075093;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

int func_1594(int iParam0, int iParam1)
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

int func_1595(int iParam0, int iParam1)
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

int func_1596(int iParam0)
{
	if (!func_1716(iParam0))
	{
		return 0;
	}
	if (func_97() == -1)
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_51;
}

int func_1597(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_9;
}

struct<2> func_1598(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	_copy_memory(&Var0, &((*Global_1297047)[iParam0]->f_6), 2);
	return Var0;
}

bool func_1599(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = Global_1139381->f_7;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = func_1356(iParam1);
	uParam0->f_4 = iParam2;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

void func_1600(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1717(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1718(iVar0);
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
			uParam2->f_5 = func_1719(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1720(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1721(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_1722(iVar0);
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

int func_1601(var uParam0)
{
	return func_970(uParam0, 63, 1);
}

int func_1602(var uParam0)
{
	return func_970(uParam0, 64, 1);
}

var func_1603(var uParam0)
{
	return func_971(uParam0, 62, 1);
}

int func_1604(var uParam0)
{
	return func_970(uParam0, 62, 1);
}

void func_1605(struct<5> Param0, var uParam5)
{
	uVar4 = Param0.f_1;
	iVar1 = func_754(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_753(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1609(Param0, &iVar3);
		switch (iVar3)
		{
			case -646838152:
				uParam5->f_3 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

bool func_1606(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return iParam1 & 2 == 0;
		case 3:
			return iParam1 & 1 == 0;
		default:
			break;
	}
	return true;
}

bool func_1607(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 127786994:
			return (!_unlock_is_unlocked(iParam0) && !_unlock_is_visible(iParam0));
		case 105823627:
			return (_unlock_is_unlocked(iParam0) && !_unlock_is_visible(iParam0));
		case 848504716:
			return (!_unlock_is_unlocked(iParam0) && _unlock_is_visible(iParam0));
		case 2078976555:
			return (_unlock_is_unlocked(iParam0) && _unlock_is_visible(iParam0));
		case 1605840866:
			return (!_unlock_is_unlocked(iParam0) || !_unlock_is_visible(iParam0));
		case -1989751792:
			return (_unlock_is_unlocked(iParam0) || !_unlock_is_visible(iParam0));
		case 1699110072:
			return (!_unlock_is_unlocked(iParam0) || _unlock_is_visible(iParam0));
		case 1916788071:
			return (_unlock_is_unlocked(iParam0) || _unlock_is_visible(iParam0));
		case 427136516:
			return _unlock_is_unlocked(iParam0);
		case -1765302991:
			return _unlock_is_visible(iParam0);
		case -1846747855:
			return !_unlock_is_unlocked(iParam0);
		case 1280145277:
			return !_unlock_is_visible(iParam0);
		default:
			break;
	}
	return false;
}

bool func_1608(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1656249757:
			return _0xfbe782b3165ac8ec(iParam0);
		case -1895052883:
			return !_0xfbe782b3165ac8ec(iParam0);
		default:
			break;
	}
	return false;
}

int func_1609(struct<2> Param0, var uParam2, var uParam3, var uParam4, int iParam5)
{
	uVar5 = Param0.f_1;
	*iParam5 = func_1723(&Param0);
	iVar1 = func_754(&Param0, 5);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar5;
		if (!func_753(&Param0, 33, iVar0, 0, 1))
		{
		}
		else
		{
			iVar4 = func_970(&Param0, 60, 1);
			switch (*iParam5)
			{
				case 914197110:
					iVar2 = func_1724(iVar4);
					break;
				case 253781561:
					iVar2 = func_1725(iVar4);
					break;
				case -646838152:
					iVar2 = func_1726(iVar4);
					break;
				case 356437857:
					iVar2 = func_1727(iVar4);
					break;
				case -1649591222:
					iVar2 = func_1728(iVar4);
					break;
				case -1444170561:
					iVar2 = func_1729(iVar4);
					break;
				default:
					break;
			}
			uVar3 = (uVar3 || iVar2);
		}
		iVar0++;
	}
	return uVar3;
}

int func_1610(int iParam0)
{
	switch (iParam0)
	{
		case 1435056310:
			return 14;
		case -2031657153:
			return 15;
		case 1298976737:
			return 16;
		case 2019303599:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_1611(int iParam0)
{
	switch (iParam0)
	{
		case 772646387:
			return 1;
		case 1495295997:
			return 2;
		case -1666944573:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1612(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_1613(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 13;
		case 2:
			return 2;
		case 3:
			return 15;
		case 4:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_1614(float fParam0, float fParam1)
{
	return (_log10(fParam1) / _log10(fParam0));
}

int func_1615(int iParam0)
{
	iVar0 = func_1463(iParam0, 0);
	return (floor(pow(2f, to_float(iVar0))) - 1);
}

int func_1616(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return uParam1->f_2;
		case 1:
			return uParam1->f_3;
		case 2:
			return uParam1->f_4;
		case 3:
			return uParam1->f_1;
		case 4:
			return *uParam1;
		default:
			break;
	}
	return -1;
}

bool func_1617(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_1618()
{
	return Global_1572887->f_106.f_75 != 1;
}

bool func_1619(int iParam0)
{
	iVar0 = _0x901e0dc25080c8b9(iParam0);
	if (_0x0f99f6436528a089(iVar0) && !_0x424b17a7dc5c90bc(iParam0))
	{
		return false;
	}
	return true;
}

void func_1620(int iParam0)
{
	_copy_memory(&(Global_1572887->f_106.f_17), iParam0, 57);
}

void func_1621(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887->f_106 = iParam0;
	Global_1572887->f_106.f_9 = iParam1;
	Global_1572887->f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_1730();
	}
}

void func_1622(struct<2> Param0, bool bParam2)
{
	Global_1572887->f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_1730();
	}
}

void func_1623(int iParam0)
{
	Global_1572887->f_106.f_15 = iParam0;
}

void func_1624(int iParam0)
{
	Global_1572887->f_106.f_13 = iParam0;
}

void func_1625(int iParam0, bool bParam1)
{
	Global_1572887->f_106.f_74 = iParam0;
	if (bParam1)
	{
		func_1730();
	}
}

bool func_1626()
{
	if (func_1632() != 0)
	{
		return false;
	}
	if (Global_1572887->f_106.f_9 >= 5 && Global_1572887->f_106.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_1627(struct<2> Param0)
{
	if (func_1731())
	{
		return 0;
	}
	if (!func_843(Param0))
	{
		return 0;
	}
	*Global_1051213 = { Param0 };
	return 1;
}

void func_1628()
{
	(*Global_1056141)[network_player_id_to_int()]->f_15.f_11 = 0;
}

void func_1629(struct<2> Param0)
{
	_databinding_remove_data_entry(Global_1572887->f_106.f_153);
	_databinding_remove_data_entry(Global_1572887->f_106.f_154);
	_databinding_remove_data_entry(Global_1572887->f_106.f_155);
	_databinding_remove_data_entry(Global_1572887->f_106.f_156);
	_databinding_remove_data_entry(Global_1572887->f_106.f_157);
	_databinding_remove_data_entry(Global_1572887->f_106.f_158);
	_databinding_remove_data_entry(Global_1572887->f_106.f_159);
	iVar0 = func_1732(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_1733(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_1734(iVar0);
	Var3 = { func_1735(iVar1, uVar2) };
	_databinding_write_data_string(Global_1572887->f_106.f_151, _create_var_string(2, &Var3));
}

bool func_1630(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

char* func_1631(int iParam0)
{
	iVar0 = func_1736(iParam0);
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

int func_1632()
{
	return Global_1572887->f_106;
}

char* func_1633(int iParam0, int iParam1)
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

bool func_1634(int iParam0, bool bParam1)
{
	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_1149();
	}
	else if (iParam0 == func_1149())
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

var func_1635(char* sParam0)
{
	sVar0 = _create_var_string(2, sParam0);
	uVar1 = func_615(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_1636(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

int func_1637()
{
	return Global_1109804->f_5737.f_632;
}

int func_1638(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_1638(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_1638(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_1639(int iParam0)
{
	return Global_1109804->f_5737.f_451[iParam0]->f_1;
}

int func_1640(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	vParam0.f_2 = iParam5;
	if (!_datafile_get_int(&uVar0, &vParam0))
	{
		if (bParam7)
		{
			return iParam8;
		}
	}
	return uVar0;
}

int func_1641(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	vParam0.f_2 = iParam5;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

void func_1642(struct<5> Param0, var uParam5)
{
	iVar1 = func_1737(1394196983, Param0);
	uVar6 = Param0.f_1;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar6;
		if (!func_1468(Param0, &(Param0.f_1), -371275865, iVar0, 0, 1))
		{
		}
		else
		{
			uVar7 = Param0.f_1;
			iVar8 = func_1738(Param0);
			iVar3 = func_1737(408367626, Param0);
			iVar2 = 0;
			while (iVar2 <= (iVar3 - 1))
			{
				Param0.f_1 = uVar7;
				if (!func_1468(Param0, &(Param0.f_1), 1005476533, iVar2, 0, 1))
				{
				}
				else
				{
					iVar4 = func_1641(Param0, 1570262717, 1);
					switch (iVar8)
					{
						case 1741842546:
							iVar5 = func_1254(iVar4, 1);
							break;
						case -146456760:
							iVar5 = func_1739(iVar4);
							break;
						case -1108952690:
							iVar5 = func_1739(iVar4);
							break;
						default:
							break;
					}
					if (iVar5 == -1)
					{
					}
					else
					{
						switch (iVar8)
						{
							case 1741842546:
								func_1094(&(uParam5->f_25), func_1740(iVar5, 1));
								break;
							case -146456760:
								func_1741(&(uParam5->f_15), iVar5);
								break;
							case -1108952690:
								func_1741(&(uParam5->f_15.f_5), iVar5);
								break;
							default:
								break;
						}
					}
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

void func_1643(struct<5> Param0, var uParam5)
{
	if (!func_1468(Param0, &(Param0.f_1), -1029131400, 0, 0, 0))
	{
		return;
	}
	uVar3 = Param0.f_1;
	iVar1 = func_1737(-1182771454, Param0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar3;
		iVar2 = -1;
		if (!func_1468(Param0, &(Param0.f_1), -118633223, iVar0, 0, 1))
		{
		}
		else
		{
			iVar2 = func_1640(Param0, -1108141625, 1, 1, -1);
			if (iVar2 < 0 || iVar2 > 23)
			{
			}
			else
			{
				set_bit(&(uParam5->f_25.f_2), iVar2);
			}
		}
		iVar0++;
	}
}

int func_1644(int iParam0)
{
	return func_1743(func_1742(iParam0, 1731290783, 1));
}

int func_1645(int iParam0, int iParam1)
{
	return func_1744(iParam0, iParam1);
}

var func_1646(int iParam0, int iParam1)
{
	func_1745(iParam0, iParam1, -1105088361, &uVar0, &uVar1);
	return uVar1;
}

void func_1647(int iParam0, int iParam1, var uParam2)
{
	if (!func_1746(iParam0))
	{
		return;
	}
	if (func_1188(iParam0, iParam1, &vVar0))
	{
		vVar0.f_2 = -733480474;
		if (!_datafile_get_int(uParam2, &vVar0))
		{
		}
		vVar0.f_2 = 492825771;
		if (!_datafile_get_int(&(uParam2->f_1), &vVar0))
		{
		}
		vVar0.f_2 = -839279581;
		if (!_datafile_get_int(&(uParam2->f_2), &vVar0))
		{
		}
		vVar0.f_2 = -640941103;
		if (!_datafile_get_int(&(uParam2->f_3), &vVar0))
		{
		}
	}
}

bool func_1648(int iParam0, int iParam1)
{
	return func_871((*Global_1130367)[iParam0], iParam1, 2);
}

bool func_1649(int iParam0, int iParam1)
{
	return func_871(&((*Global_1130367)[iParam0]->f_3), iParam1, 3);
}

bool func_1650(int iParam0)
{
	if ((*Global_1056141)[iParam0]->f_2 != -1)
	{
		return true;
	}
	iVar0 = func_1747(iParam0);
	if (iVar0 == 2 || iVar0 == 1)
	{
		return true;
	}
	if (func_53(iParam0, 1))
	{
		return true;
	}
	if (func_1748(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1651(int iParam0, vector3 vParam1)
{
	vVar0 = { func_1362(iParam0) };
	if (!func_116(vParam1))
	{
		if (func_116(vVar0))
		{
			return false;
		}
		fVar3 = vdist(vVar0, vParam1);
		fVar4 = 1500f;
		fVar5 = 125f;
		if (fVar3 < fVar5)
		{
			return false;
		}
		if (fVar3 > fVar4)
		{
			return false;
		}
	}
	return true;
}

int func_1652(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_888(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

Vector3 func_1653(int iParam0, int iParam1)
{
	if (!func_1654(iParam0, &vVar3, iParam1))
	{
		return vVar0;
	}
	vVar3.f_2 = -134912699;
	_datafile_get_vector(&vVar0, &vVar3);
	return vVar0;
}

bool func_1654(int iParam0, var uParam1, int iParam2)
{
	if (!func_1749(iParam0, uParam1))
	{
		return false;
	}
	iVar0 = _datafile_get_num_children(*uParam1, uParam1->f_1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		Var2 = { *uParam1 };
		Var2.f_2 = 1089670230;
		Var2.f_3 = iVar1;
		if (!_datafile_get_data_node_index(&(Var2.f_1), &Var2))
		{
		}
		else
		{
			Var2.f_2 = 1196324698;
			Var2.f_3 = iParam2;
			if (!_datafile_get_data_node_index(&(Var2.f_1), &Var2))
			{
			}
			else
			{
				*uParam1 = { Var2 };
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

int func_1655(int iParam0)
{
	iVar0 = -1;
	if (func_1750(&Var1, iParam0))
	{
		iVar0 = ((func_1751() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

bool func_1656()
{
	if (func_882())
	{
		return false;
	}
	return true;
}

int func_1657(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

int func_1658(int iParam0, var uParam1)
{
	iVar0 = -1;
	if (func_1750(&Var1, iParam0) && func_1752(&Var1, uParam1))
	{
		iVar0 = ((func_1753(iParam0) - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

bool func_1659(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bVar0 = func_1754(iParam0, iParam1, 2);
	if (func_1755(iParam0, iParam1, bVar0))
	{
		return true;
	}
	vVar1 = { func_1665(iParam0, iParam1) };
	if (func_116(vVar1))
	{
		return false;
	}
	uVar4 = func_1756(func_1657(iParam0), iParam1);
	if ((bParam2 && func_1754(iParam0, iParam1, 1)) && func_1757(vVar1, uVar4))
	{
		*bParam3 = 1;
		return true;
	}
	return func_1758(vVar1, uVar4, bVar0);
}

bool func_1660(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (func_1750(&Var1, iParam0) && func_1752(&Var1, uParam1))
	{
		func_1759(Var1, -528314399, &iVar0, 0);
	}
	return iVar0;
}

Vector3 func_1661(int iParam0, var uParam1)
{
	if (func_1750(&Var3, iParam0) && func_1752(&Var3, uParam1))
	{
		func_1760(Var3, -370006557, &vVar0, 1);
	}
	return vVar0;
}

int func_1662(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_1750(&Var1, iParam0))
	{
		if (func_1761(&Var1, iParam1))
		{
			func_1762(Var1, 1342438652, &iVar0, 0);
		}
	}
	iVar6 = 0;
	if (iVar0 != 0)
	{
		iVar6 = func_1763(iVar0);
	}
	return iVar6;
}

bool func_1663(int iParam0, vector3 vParam1)
{
	if (func_116(vParam1))
	{
		return false;
	}
	if (func_1764(iParam0))
	{
		return false;
	}
	fVar0 = 5f;
	fVar1 = func_1765(iParam0);
	if (fVar1 > 300f)
	{
		fVar1 = 300f;
	}
	if (is_sphere_visible_to_player(player_id(), vParam1, fVar0, fVar1))
	{
		return false;
	}
	if (is_sphere_visible_to_another_machine(vParam1, fVar0, fVar1))
	{
		return false;
	}
	fVar1 = (fVar1 * 0.75f);
	if (fVar1 < 150f)
	{
		fVar1 = 150f;
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar2 = int_to_playerindex(iVar5);
		if (network_is_player_active(iVar2))
		{
			iVar3 = get_player_ped(iVar2);
			if (does_entity_exist(iVar3))
			{
				fVar4 = vdist(get_entity_coords(iVar3, false, false), vParam1);
				if (fVar4 < fVar1 && !func_1766(iParam0))
				{
					return false;
				}
			}
		}
		iVar5++;
	}
	return true;
}

int func_1664(int iParam0)
{
	if (!func_1767(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (func_1768(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_1665(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_1769(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

bool func_1666(int iParam0)
{
	switch (iParam0)
	{
		case -260420884:
		case 850213441:
		case 1884341302:
		case 1918154385:
			return true;
		default:
			break;
	}
	return false;
}

int func_1667(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

bool func_1668(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_1669(int iParam0)
{
	if (!func_1668(iParam0))
	{
		return false;
	}
	return (func_1770(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

bool func_1670(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5)
{
	if (!bParam4)
	{
		if (func_882())
		{
			return true;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_843(Param2))
	{
		Var0 = { func_1771() };
	}
	else
	{
		Var0 = { Param2 };
	}
	if ((!bParam5 && func_843(Var0)) && !func_845(Var0, Param0))
	{
		return true;
	}
	Var2 = { func_842() };
	if (func_843(Var2) && (!func_843(Var2) || !func_845(Param0, Var2)))
	{
		return true;
	}
	return false;
}

int func_1671(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_1769(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

int func_1672(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_1769(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_1;
}

void func_1673(int iParam0, var uParam1, var uParam2)
{
	iVar0 = func_1488(iParam0);
	switch (iVar0)
	{
		case 1918154385:
			func_1772(uParam1);
			break;
		case 974227447:
			func_1773(uParam1, uParam2);
			break;
	}
}

void func_1674(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	func_1774(&Var0, iParam1, func_1658(func_1657(iParam1), uParam3), iParam4, iParam5);
	_copy_memory(&(Var0.f_14), iParam0, 4);
	_copy_memory(&(Var0.f_8), iParam2, 2);
	func_1775(&Var0);
}

bool func_1675(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_1776(iParam0, &Var0);
}

Vector3 func_1676(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			vVar0 = { -2.89f, -2.71f, 0.5f };
			break;
		case 3:
			vVar0 = { -2.06f, -1.11f, 0f };
			break;
		case 1:
			vVar0 = { 1.41f, -1.32f, 0f };
			break;
		case 5:
			vVar0 = { 2.49f, -1.73f, 0f };
			break;
		case 2:
			vVar0 = { 3.36f, -2.86f, 0.5f };
			break;
		case 0:
			vVar0 = { 0f, -0.832f, 0.5f };
			break;
	}
	vVar0 = { vVar0 + func_1511(iParam0) };
	return vVar0;
}

Vector3 func_1677(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			vVar0 = { -2.67f, -2.86f, 0f };
			break;
		case 3:
			vVar0 = { -2.06f, -1.11f, 0f };
			break;
		case 1:
			vVar0 = { 1.41f, -1.32f, 0f };
			break;
		case 5:
			vVar0 = { 2.49f, -1.73f, 0f };
			break;
		case 2:
			vVar0 = { 3.1f, -3.07f, 0f };
			break;
		case 0:
			vVar0 = { -0.002412f, -0.830772f, 0.491175f };
			break;
	}
	vVar0 = { vVar0 + func_1511(iParam0) };
	return vVar0;
}

Vector3 func_1678(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 4:
			vVar0 = { -2.17f, -3.26f, 0f };
			break;
		case 3:
			vVar0 = { -1.71f, -1.98f, 0f };
			break;
		case 1:
			vVar0 = { 1.26f, -2.2f, 0f };
			break;
		case 5:
			vVar0 = { 2.15f, -2.29f, 0f };
			break;
		case 2:
			vVar0 = { 2.64f, -3.62f, 0f };
			break;
		case 0:
			if (bParam1)
			{
				vVar0 = { -0.685887f, -1.060687f, 0f };
			}
			else
			{
				vVar0 = { 0.762771f, -1.162127f, 0f };
			}
			break;
	}
	vVar0 = { vVar0 + func_1511(iParam0) };
	return vVar0;
}

char* func_1679(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_1680(var uParam0, var uParam1)
{
	if (!func_1306(uParam0, 2048))
	{
		if (does_entity_exist(Global_34) && is_entity_in_volume(Global_34, uParam0->f_10, true, 0))
		{
			switch (&Global_1940085)
			{
				case 1:
					uParam1->f_4 = { func_1207("PIANO_DRUNK") };
					func_1308(uParam0, 2048);
					return true;
				case 2:
					if (get_random_int_in_range(0, 100) > 50)
					{
						uParam1->f_4 = { func_1207("PIANO_WASTED") };
					}
					else
					{
						uParam1->f_4 = { func_1207("PIANO_PLYWASTED") };
					}
					func_1308(uParam0, 2048);
					return true;
			}
		}
	}
	return false;
}

void func_1681(var uParam0)
{
	if (!func_465(&(uParam0->f_6)))
	{
		func_444(&(uParam0->f_6), 1);
	}
	else
	{
		func_689(&(uParam0->f_6));
	}
	func_1308(uParam0, 2097152);
	func_1308(uParam0, 16384);
	func_1308(uParam0, 1024);
}

bool func_1682(var uParam0, var uParam1)
{
	if (func_1306(uParam0, 4096))
	{
		return false;
	}
	iVar0 = func_1777(uParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	iVar1 = func_1778(iVar0);
	if (iVar1 < 0)
	{
		return false;
	}
	if (iVar1 > 4)
	{
		uParam1->f_4 = { func_1207("PIANO_HIGHHON") };
	}
	else
	{
		uParam1->f_4 = { func_1207("PIANO_LOWHON") };
	}
	func_1308(uParam0, 4096);
	return true;
}

bool func_1683(var uParam0, var uParam1)
{
	if (!func_1306(uParam0, 8192))
	{
		iVar0 = func_1779();
		if (uParam0->f_12 != iVar0)
		{
			if (iVar0 >= 2 && iVar0 <= 5)
			{
				uParam1->f_4 = { func_1207("PIANO_LOWNUM") };
				return true;
			}
			else if (iVar0 > 5 && iVar0 <= 10)
			{
				uParam1->f_4 = { func_1207("PIANO_MEDNUM") };
				return true;
			}
			else if (iVar0 > 10)
			{
				uParam1->f_4 = { func_1207("PIANO_HIGHNUM") };
				return true;
			}
		}
		uParam0->f_12 = iVar0;
		func_1308(uParam0, 8192);
	}
	return false;
}

bool func_1684(var uParam0, int iParam1)
{
	return func_82(uParam0->f_16, iParam1);
}

void func_1685(var uParam0, int iParam1)
{
	if (!func_1684(uParam0, iParam1))
	{
		func_83(&(uParam0->f_16), iParam1);
	}
}

bool func_1686(var uParam0)
{
	return func_1306(uParam0, 2097152);
}

void func_1687(var uParam0, int iParam1)
{
	if (func_1684(uParam0, iParam1))
	{
		func_99(&(uParam0->f_16), iParam1);
	}
}

float func_1688(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false), bParam2);
}

void func_1689(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_1780(uParam0, iParam1, sParam2))
	{
		if (!is_ped_injured(iParam1))
		{
			if (!network_is_game_in_progress() || (network_is_game_in_progress() && network_has_control_of_entity(iParam1)))
			{
				set_ped_can_play_ambient_anims(iParam1, bParam3);
			}
		}
	}
}

bool func_1690(var uParam0)
{
	if (is_string_null_or_empty(func_878(uParam0->f_4)))
	{
		return false;
	}
	if (_0xd89504d9d7d5057d(func_878(uParam0->f_4)))
	{
		return true;
	}
	else if (func_879(&(uParam0->f_9), func_1207(&(uParam0->f_4)), 0, -1, 0, 1))
	{
		return true;
	}
	return false;
}

void func_1691(var uParam0)
{
	StringCopy(&(uParam0->f_1), "", 24);
	StringCopy(&(uParam0->f_4), "", 24);
}

float func_1692(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			fVar0 = -115.7f;
			break;
		case 3:
			fVar0 = -148.54f;
			break;
		case 1:
			fVar0 = 179.15f;
			break;
		case 5:
			fVar0 = 126.69f;
			break;
		case 2:
			fVar0 = 90f;
			break;
		case 0:
			fVar0 = 180f;
			break;
	}
	return fVar0;
}

float func_1693(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			fVar0 = -129f;
			break;
		case 3:
			fVar0 = -143.44f;
			break;
		case 1:
			fVar0 = 179.15f;
			break;
		case 5:
			fVar0 = 140.69f;
			break;
		case 2:
			fVar0 = 128.89f;
			break;
		case 0:
			fVar0 = -0.8475266f;
			break;
	}
	return fVar0;
}

float func_1694(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			fVar0 = -115.84f;
			break;
		case 3:
			fVar0 = -143.44f;
			break;
		case 1:
			fVar0 = 179.15f;
			break;
		case 5:
			fVar0 = 140.69f;
			break;
		case 2:
			fVar0 = 142.61f;
			break;
		case 0:
			fVar0 = -0.8475266f;
			break;
	}
	return fVar0;
}

float func_1695(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 4:
			fVar0 = 64.34f;
			break;
		case 3:
			fVar0 = 16.2f;
			break;
		case 1:
			fVar0 = -0.85f;
			break;
		case 5:
			fVar0 = -25.38f;
			break;
		case 2:
			fVar0 = -40.63f;
			break;
		case 0:
			if (bParam1)
			{
				fVar0 = -35.3675f;
			}
			else
			{
				fVar0 = 35.44245f;
			}
			break;
	}
	return fVar0;
}

bool func_1696(vector3 vParam0, int iParam3, vector3 vParam4, float fParam7)
{
	vVar0 = { func_1781(0f, 0f, iParam3) };
	vVar3 = { vParam4 - vParam0 };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam7;
}

var func_1697(int iParam0)
{
	_0x31010318ba9897ac(&uVar0, iParam0);
	return uVar0;
}

int func_1698(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_1782(vVar3, vVar6);
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
	if (func_1783(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_1699(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_1783(vVar0, vVar3, vParam1);
}

bool func_1700(int iParam0)
{
	iVar0 = func_1382(iParam0);
	return (iVar0 != 2 && iVar0 != -1);
}

int func_1701(int iParam0)
{
	Var0 = { func_760(741274143, func_1244(iParam0)) };
	return func_1466(Var0, -1);
}

void func_1702(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	if (!stat_id_set_int(&uParam0, iParam2, true))
	{
		return;
	}
}

char* func_1703(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			switch (iParam1)
			{
				case 882909226:
					return "mp005_p_mp_stirStick01x_PH_R_HAND";
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 882909226:
					return "mp005_p_mp_stirStick01x_PH_R_HAND";
			}
			break;
		case 6:
			break;
		case 7:
			switch (iParam1)
			{
				case 882909226:
					return "mp005_p_mp_stirStick01x_PH_R_HAND";
			}
			break;
		case 8:
			break;
		case 9:
			break;
	}
	return "";
}

int func_1704(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			switch (iParam1)
			{
				case 1561132816:
					return 0;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 882909226:
				case 1511337995:
					return 0;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 882909226:
				case 1511337995:
					return 0;
			}
			break;
		case 6:
			break;
		case 7:
			switch (iParam1)
			{
				case 882909226:
					return 0;
			}
			break;
		case 8:
			break;
		case 9:
			break;
	}
	return 1;
}

int func_1705(var uParam0, var uParam1)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return 0;
	}
	if (!stat_id_get_bool(&uParam0, &uVar0))
	{
		return 0;
	}
	return uVar0;
}

void func_1706(var uParam0, int iParam1, bool bParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	if (!stat_id_set_bool(&uParam0, bParam2, true))
	{
		return;
	}
}

var func_1707(int iParam0)
{
	Var0 = { func_760(440364183, func_1244(iParam0)) };
	return func_1784(Var0);
}

void func_1708(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1785(*iParam0);
	iVar1 = func_1786(*iParam0);
	iVar2 = func_1787(*iParam0);
	iVar3 = func_1474(*iParam0);
	iVar4 = func_1788(*iParam0);
	iVar5 = func_1789(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_1790(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1790(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_1791(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_1709(int iParam0, bool bParam1)
{
	return func_1792(func_1371(), iParam0, bParam1);
}

int func_1710()
{
	iVar0 = func_1793(15);
	if (iVar0 >= 15)
	{
		return 3;
	}
	if (iVar0 >= 10)
	{
		return 2;
	}
	if (iVar0 >= 5)
	{
		return 1;
	}
	return 0;
}

bool func_1711()
{
	if (func_1387() != player_id())
	{
		return false;
	}
	if (!func_1794(0.65f))
	{
		return false;
	}
	return true;
}

void func_1712(var uParam0, int iParam1)
{
	if (func_1176(uParam0, iParam1))
	{
		func_59(uParam0, iParam1);
	}
}

int func_1713(bool bParam0)
{
	if (!bParam0)
	{
		iVar0 = func_1795(827714260, 0);
	}
	else
	{
		iVar0 = Global_1298000->f_19;
	}
	iVar1 = func_1796(827714260, -915411861, 1, 0, 1, 0);
	if (IntToFloat(iVar0) < (IntToFloat(iVar1) * 0.3f))
	{
		return 0;
	}
	if (IntToFloat(iVar0) > (IntToFloat(iVar1) * 0.7f))
	{
		return 2;
	}
	return 1;
}

int func_1714(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1958345007;
		case 1:
			return 348064119;
		case 2:
			return -818346432;
		case 3:
			return -610395813;
		case 4:
			return 2103594888;
		case 5:
			return -624685730;
		case 6:
			return 1739830455;
		case 7:
			return -1498871949;
		case 8:
			return 447784640;
		case 9:
			return -1283370018;
		case 10:
			return -776910859;
		default:
			break;
	}
	return 0;
}

int func_1715()
{
	iVar0 = func_1797() + 1;
	iVar1 = (iVar0 * Global_1901947->f_308.f_147);
	iVar2 = (iVar1 - get_cloud_time_as_int());
	return func_1212(iVar2, 0, iVar2);
}

bool func_1716(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_1717(int iParam0, var uParam1)
{
	if (func_1798(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1718(int iParam0)
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

int func_1719(int iParam0)
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

int func_1720(int iParam0)
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

int func_1721(int iParam0)
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

int func_1722(int iParam0)
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

int func_1723(var uParam0)
{
	return func_970(uParam0, 60, 1);
}

int func_1724(int iParam0)
{
	switch (iParam0)
	{
		case 1932616531:
			return 1;
		case 724666844:
			return 2;
		case 1943935584:
			return 4;
		case 1807760880:
			return 8;
		default:
			break;
	}
	return 0;
}

int func_1725(int iParam0)
{
	switch (iParam0)
	{
		case -243414166:
			return 2;
		case -369122880:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1726(int iParam0)
{
	switch (iParam0)
	{
		case -752379276:
			return 1;
		case -1151403749:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1727(int iParam0)
{
	switch (iParam0)
	{
		case 1586601790:
			return 1;
		case 236229850:
			return 2;
		case 880275082:
			return 4;
		case -389588894:
			return 1024;
		case 1355384174:
			return 268435456;
		case 1398901851:
			return 536870912;
		default:
			break;
	}
	return 0;
}

int func_1728(int iParam0)
{
	switch (iParam0)
	{
		case 1943935584:
			return 1;
		case 1807760880:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1729(int iParam0)
{
	switch (iParam0)
	{
		case 1943935584:
			return 1;
		case -1368721330:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_1730()
{
	if (func_97() == -1)
	{
		return;
	}
	iVar0 = &Global_1296859;
	if (func_82(Global_1572887->f_7, 1))
	{
		func_83(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	else
	{
		func_99(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	(*Global_1056141)[iVar0]->f_187 = Global_1572887->f_106;
	(*Global_1056141)[iVar0]->f_187.f_1 = Global_1572887->f_106.f_9;
	(*Global_1056141)[iVar0]->f_187.f_2 = Global_1572887->f_106.f_10;
	(*Global_1056141)[iVar0]->f_187.f_3 = { Global_1572887->f_106.f_11 };
	(*Global_1056141)[iVar0]->f_187.f_8 = Global_1572887->f_106.f_13;
	(*Global_1056141)[iVar0]->f_187.f_5 = { Global_1572887->f_360 };
	(*Global_1056141)[iVar0]->f_187.f_9 = Global_1572887->f_106.f_74;
	if (func_1630(1024))
	{
		func_83(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
	else
	{
		func_99(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
}

bool func_1731()
{
	return func_843(*Global_1051213);
}

int func_1732(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_845(Global_1196898->f_78[iVar0]->f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1733(int iParam0)
{
	return Global_1196898->f_78[iParam0]->f_3;
}

var func_1734(int iParam0)
{
	return Global_1196339->f_1[iParam0]->f_3;
}

struct<8> func_1735(int iParam0, var uParam1)
{
	if (((func_1799(&Var8, iParam0) && func_1800(&Var8)) && func_1801(&Var8, uParam1)) && func_1802(&Var8))
	{
		func_1803(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

int func_1736(int iParam0)
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

int func_1737(int iParam0, vector3 vParam1, var uParam4, var uParam5)
{
	vParam1.f_2 = iParam0;
	return _datafile_get_num_nodes(&vParam1);
}

int func_1738(struct<5> Param0)
{
	return func_1641(Param0, -419812745, 1);
}

int func_1739(int iParam0)
{
	Var0 = Global_1071686->f_28448[30]->f_3;
	Var0.f_2 = 0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	iVar5 = _datafile_get_num_nodes(&Var0);
	Var0.f_2 = 2;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	iVar6 = _0xe13634bb6baf0734(Var0, Var0.f_1);
	return ((iVar5 - iVar6) - 1);
}

int func_1740(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1806630731;
		case 1:
			return 518798111;
		case 2:
			return 1859868723;
		case 3:
			return 522505504;
		case 4:
			return -775927147;
		case 5:
			return -2001405328;
		case 6:
			return 1042373141;
		case 7:
			return -890716772;
		case 8:
			return 1992773981;
		case 9:
			return -2010581984;
		case 10:
			return -1824322988;
		case 11:
			return -1518489911;
		case 12:
			return -1348549877;
		case 13:
			return -1040947274;
		case 14:
			return 1803795142;
		case 15:
			return 2015728894;
		case 16:
			return -1211373264;
		case 17:
			return -761617270;
		case 18:
			return -1067974651;
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

void func_1741(var uParam0, int iParam1)
{
	if (func_907(uParam0, iParam1, 4))
	{
	}
}

var func_1742(int iParam0, int iParam1, int iParam2)
{
	if (!func_1804(iParam0))
	{
		return 0;
	}
	if (!func_1805(&Var0))
	{
		return 0;
	}
	if (!func_1806(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1806(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1806(Var0, &(Var0.f_1), 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1806(Var0, &(Var0.f_1), 23, iParam1, 0, iParam2))
	{
		return 0;
	}
	return func_1807(Var0, 53, 1);
}

int func_1743(int iParam0)
{
	switch (iParam0)
	{
		case -1690863991:
			return 2;
		case 1286170048:
			return 3;
		case -342492333:
			return 4;
		case 1140089012:
			return 5;
		case 634321112:
			return 8;
		case -2079273178:
			return 7;
		case -147846054:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_1744(int iParam0, int iParam1)
{
	if (!func_1804(iParam0))
	{
		return 493038497;
	}
	if (!func_1805(&Var1))
	{
		return 493038497;
	}
	if (!func_1806(Var1, &(Var1.f_1), 13, 0, 0, 1))
	{
		return 493038497;
	}
	if (!func_1806(Var1, &(Var1.f_1), 14, iParam0, 0, 1))
	{
		return 493038497;
	}
	if (!func_1806(Var1, &(Var1.f_1), 33, 0, 0, 0))
	{
		return 493038497;
	}
	if (!func_1806(Var1, &(Var1.f_1), 34, -1395074057, 0, 0))
	{
		return 493038497;
	}
	iVar0 = func_1808(Var1, 4);
	if (iVar0 != 1)
	{
		return 493038497;
	}
	if (!func_1806(Var1, &(Var1.f_1), 35, 0, 0, 1))
	{
		return 493038497;
	}
	uVar6 = func_1809(Var1);
	if (iParam1 == 0)
	{
	}
	else if (func_1806(Var1, &(Var1.f_1), 30, 0, 0, 0))
	{
		if (func_1806(Var1, &(Var1.f_1), 31, iParam1, 0, 0))
		{
			uVar6 = func_1809(Var1);
		}
	}
	return uVar6;
}

int func_1745(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_1804(iParam0))
	{
		*uParam3 = -1;
		*uParam4 = 493038497;
		return 0;
	}
	if (!func_1805(&Var0))
	{
		*uParam3 = -1;
		*uParam4 = 493038497;
		return 0;
	}
	if (!func_1806(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		*uParam3 = -1;
		*uParam4 = 493038497;
		return 0;
	}
	if (!func_1806(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		*uParam3 = -1;
		*uParam4 = 493038497;
		return 0;
	}
	if (!func_1806(Var0, &(Var0.f_1), 28, 0, 0, 0))
	{
		*uParam3 = -1;
		*uParam4 = 493038497;
		return 0;
	}
	if (!func_1806(Var0, &(Var0.f_1), 29, iParam2, 0, 0))
	{
		*uParam3 = -1;
		*uParam4 = 493038497;
		return 0;
	}
	*uParam3 = func_1810(Var0);
	*uParam4 = func_1809(Var0);
	if (iParam1 != 0)
	{
		if (func_1806(Var0, &(Var0.f_1), 30, 0, 0, 0))
		{
			if (func_1806(Var0, &(Var0.f_1), 31, iParam1, 0, 0))
			{
				*uParam3 = func_1810(Var0);
				*uParam4 = func_1809(Var0);
			}
		}
	}
	if (*uParam3 == 0)
	{
		*uParam3 = -1;
		*uParam4 = 493038497;
		return 0;
	}
	return 1;
}

bool func_1746(int iParam0)
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

int func_1747(int iParam0)
{
	if (!Global_1139381->f_5560)
	{
		return 0;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return Global_17411.f_2621.f_2;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	return (*Global_1100469)[iVar0]->f_48;
}

bool func_1748(int iParam0, int iParam1)
{
	if (iParam1 != 255)
	{
		return ((*Global_1145091)[iParam1]->f_23.f_10 && iParam0) != 0;
	}
	return (Global_1139381->f_4779.f_10 && iParam0) != 0;
}

bool func_1749(int iParam0, var uParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (!func_1811(iParam0))
	{
		return false;
	}
	uVar0 = func_1812(iParam0);
	if (!_0x603ac35fd4602c76(uVar0))
	{
		return false;
	}
	*uParam1 = uVar0;
	uParam1->f_2 = -678729477;
	if (!_datafile_get_data_node_index(&(uParam1->f_1), uParam1))
	{
		return false;
	}
	return true;
}

bool func_1750(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_1751()
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

bool func_1752(var uParam0, var uParam1)
{
	uParam0->f_2 = 775488648;
	uParam0->f_3 = uParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_1753(int iParam0)
{
	iVar0 = 0;
	if (func_1750(&vVar1, iParam0))
	{
		vVar1.f_2 = 866900867;
		if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
		{
			iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

bool func_1754(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_1769(iParam0, iParam1);
	return func_43(Global_1257541->f_451[iVar0]->f_2, iParam2);
}

bool func_1755(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 <= (func_1813(iParam0, iParam1) - 1))
	{
		vVar1 = { func_1814(func_1657(iParam0), iParam1, iVar0) };
		uVar4 = func_1815(func_1657(iParam0), iParam1, iVar0);
		if (func_116(vVar1))
		{
		}
		else
		{
			if (func_1758(vVar1, uVar4, bParam2))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

var func_1756(int iParam0, int iParam1)
{
	uVar0 = Global_1901947->f_166.f_34;
	if (func_1750(&Var1, iParam0) && func_1761(&Var1, iParam1))
	{
		func_1816(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

bool func_1757(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1) && vdist(get_entity_coords(get_player_ped(iVar1), false, false), vParam0) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1758(vector3 vParam0, float fParam3, bool bParam4)
{
	if (!bParam4)
	{
		iVar0 = 575122756;
	}
	return _0x397769175a7dbb30(vParam0, fParam3, 0, 0, iVar0);
}

int func_1759(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_bool(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1760(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

bool func_1761(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_1762(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1763(int iParam0)
{
	switch (iParam0)
	{
		case 303108068:
			return 0;
		case -910931556:
			return 1;
		case -177397452:
			return 2;
	}
	return 0;
}

int func_1764(int iParam0)
{
	return func_1817(iParam0, 4);
}

float func_1765(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 450f;
		case 1:
			return 450f;
		case 2:
			return 250f;
		default:
			break;
	}
	return 450f;
}

bool func_1766(int iParam0)
{
	iVar0 = get_frame_count();
	if (Global_1138828->f_2[iParam0]->f_9 == iVar0 || Global_1138828->f_2[iParam0]->f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_1767(int iParam0)
{
	iVar0 = func_1818(iParam0);
	if (iVar0 != 0 && func_1819(iVar0))
	{
		return false;
	}
	if (iParam0 == 1717788883)
	{
		return func_1820();
	}
	return true;
}

bool func_1768(int iParam0)
{
	return Global_1237665[iParam0] == -1;
}

int func_1769(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

bool func_1770(int iParam0)
{
	if (!func_1668(iParam0))
	{
		return false;
	}
	iVar0 = func_1821(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

struct<2> func_1771()
{
	return *Global_1051213;
}

void func_1772(var uParam0)
{
	iVar0 = 2;
	if (func_1822())
	{
		iVar0 = 8;
	}
	else if (func_1823())
	{
		iVar0 = 4;
	}
	iVar1 = func_1824();
	if (iVar1 <= 10)
	{
		func_1825(uParam0, 1);
	}
	else if (iVar1 <= 25 || iVar0 == 2)
	{
		func_1825(uParam0, 2);
		if (iVar1 > 25)
		{
			iVar1 = 25;
		}
	}
	else if (iVar1 <= 50 || iVar0 == 4)
	{
		func_1825(uParam0, 4);
		if (iVar1 > 50)
		{
			iVar1 = 50;
		}
	}
	else
	{
		func_1825(uParam0, 8);
	}
	func_1826(uParam0, iVar1);
}

void func_1773(var uParam0, var uParam1)
{
	if (func_670(&Global_1296859, 4096))
	{
		func_1825(uParam0, 64);
	}
	else if (func_670(&Global_1296859, 2048))
	{
		func_1825(uParam0, 32);
	}
	else
	{
		func_1825(uParam0, 16);
	}
	iVar0 = uParam1->f_2;
	iVar1 = func_1827();
	switch (iVar0)
	{
		case -1240530384:
			func_1825(uParam0, 512);
			break;
		case 1606989084:
			func_1825(uParam0, 1024);
			break;
		case -640645303:
			func_1825(uParam0, 2048);
			break;
		case 1103416334:
			func_1825(uParam0, 2048);
			break;
		default:
			if (iVar1 == 0)
			{
				func_1825(uParam0, 256);
			}
			else
			{
				func_1825(uParam0, 128);
			}
			break;
	}
	if (_unlock_is_unlocked(703286980) && !_unlock_is_visible(703286980))
	{
		func_1825(uParam0, 4096);
	}
}

void func_1774(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = 1;
	uParam0->f_6 = iParam1;
	uParam0->f_10 = iParam2;
	uParam0->f_11 = iParam4;
	uParam0->f_13 = _0x901e0dc25080c8b9(player_id());
	*uParam0->f_21[0] = { Global_35 };
	uParam0->f_7 = iParam3;
}

void func_1775(var uParam0)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (&Global_1051252->f_16[13] == 0 || !_does_thread_exist(&(Global_1051252->f_16[13])))
	{
		return;
	}
	*uParam0 = 175;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 40, 19, &(Global_1051252->f_16[13]));
	func_1828(uParam0, uParam0->f_1);
}

bool func_1776(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

int func_1777(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_10))
	{
		return 0;
	}
	iVar0 = func_1505(uParam0);
	if (network_is_participant_active(int_to_participantindex(iVar0)))
	{
		if (network_is_player_active(network_get_player_index(int_to_participantindex(iVar0))))
		{
			return network_get_player_index(int_to_participantindex(iVar0));
		}
	}
	return 0;
}

int func_1778(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return (*Global_1145091)[iParam0]->f_8.f_1;
}

int func_1779()
{
	uVar0 = func_965(4, 8);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (_0x72b2e00c9bac6789(&uVar0, iVar1))
		{
			iVar2++;
		}
		iVar1++;
	}
	return iVar2;
}

bool func_1780(var uParam0, int iParam1, char* sParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (are_strings_equal(sParam2, &((*uParam0)[iVar1]->f_1)))
		{
			(*uParam0)[iVar1] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97] = iParam1;
			StringCopy(&((*uParam0)[uParam0->f_97]->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

Vector3 func_1781(vector3 vParam0)
{
	fVar0 = sin(vParam0.z);
	fVar1 = cos(vParam0.z);
	fVar2 = sin(vParam0.x);
	fVar3 = cos(vParam0.x);
	return func_1829((-fVar3 * fVar0), (fVar3 * fVar1), fVar2);
}

float func_1782(vector3 vParam0, vector3 vParam3)
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

bool func_1783(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_1784(struct<2> Param0)
{
	iVar0 = func_1466(Param0, -15);
	return iVar0;
}

int func_1785(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1612(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_1786(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_1787(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_1788(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_1789(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_1790(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_1791(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1830(iParam0, iParam6);
	func_1831(iParam0, iParam5);
	func_1832(iParam0, iParam4);
	func_1833(iParam0, iParam3);
	func_1834(iParam0, iParam2);
	func_1835(iParam0, iParam1);
}

bool func_1792(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1836(iParam1) || !func_1836(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_1793(int iParam0)
{
	if (!func_1837(iParam0))
	{
		return 0;
	}
	iVar0 = func_1838(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_1839(iParam0, 1);
	}
	return 0;
}

bool func_1794(float fParam0)
{
	Var0.f_9 = -1591664384;
	if (func_1840(Global_1298378->f_62, 1111816631, &Var0, 0, 1))
	{
		if (IntToFloat(Var0.f_11) >= (fParam0 * to_float(_0xe80e50bee276a54a(Var0.f_4, 1111816631))))
		{
			return true;
		}
	}
	return false;
}

int func_1795(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1841();
	}
	if (!func_1351(iParam0, 0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = func_1842(iParam0, 0, 1, -1, 1);
	iVar2 = func_1796(iParam0, iVar1, 1, 0, 1, 0);
	if (func_1843(iParam0, &iVar0, &iVar1, bParam1))
	{
		iVar3 = func_1844(iVar0, iVar1, 0, 1);
		if (iVar3 < iVar2)
		{
			return iVar3;
		}
	}
	return iVar2;
}

int func_1796(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_1845(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_1846(iParam0))
	{
		return func_1844(func_1847(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_1848(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_1797()
{
	return Global_1298000->f_46.f_108.f_1;
}

bool func_1798(int iParam0, var uParam1, var uParam2)
{
	if (func_1849(iParam0, uParam1, &uVar0))
	{
		func_1152(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1799(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(Global_1196898->f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_1850(iParam1);
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1800(var uParam0)
{
	uParam0->f_2 = -310067910;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1801(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1802(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_1803(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

bool func_1804(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_1805(int iParam0)
{
	uVar0 = func_1851();
	if (!_0x7907969497ea92f5(uVar0))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(uVar0))
	{
		return false;
	}
	_copy_memory(iParam0, &uVar1, 5);
	*iParam0 = uVar0;
	return true;
}

bool func_1806(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!_datafile_get_data_node_index(iParam5, &Param0))
	{
		return false;
	}
	return true;
}

var func_1807(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_1808(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return _datafile_get_num_nodes(&vParam0);
}

var func_1809(struct<5> Param0)
{
	return func_1807(Param0, 56, 1);
}

var func_1810(struct<5> Param0)
{
	return func_1807(Param0, 54, 1);
}

bool func_1811(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_1085(iParam0);
	if (iVar0 == -1)
	{
	}
	iVar1 = func_1257(iVar0);
	switch (iVar1)
	{
		case 2:
			return true;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

var func_1812(int iParam0)
{
	if (!func_1811(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_1085(iParam0);
	iVar2 = func_1257(iVar1);
	switch (iVar2)
	{
		case 2:
			return func_1852(2);
		case 1:
			return func_1852(3);
		default:
			break;
	}
	return uVar0;
}

int func_1813(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_1769(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_6;
}

Vector3 func_1814(int iParam0, int iParam1, int iParam2)
{
	if ((func_1750(&Var3, iParam0) && func_1761(&Var3, iParam1)) && func_1853(&Var3, iParam2))
	{
		func_1760(Var3, 1702777600, &vVar0, 0);
	}
	return vVar0;
}

var func_1815(int iParam0, int iParam1, int iParam2)
{
	uVar0 = Global_1901947->f_166.f_35;
	if ((func_1750(&Var1, iParam0) && func_1761(&Var1, iParam1)) && func_1853(&Var1, iParam2))
	{
		func_1816(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

int func_1816(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_float(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1817(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && func_43((*Global_1138411)[iVar0][iParam0], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1818(int iParam0)
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
		case 1427578635:
		case 1532822440:
		case 1539023636:
		case 1884341302:
		case 1918154385:
			return 1;
		case -1261475678:
		case -1086711901:
		case -669677371:
		case -468635158:
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_1819(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_1820()
{
	return func_1854(func_603(0));
}

int func_1821(int iParam0)
{
	if (!func_1668(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

bool func_1822()
{
	return func_1855(-1490861779, 1);
}

bool func_1823()
{
	return func_1855(1476279059, 1);
}

int func_1824()
{
	return func_1136(-735397297, func_1135(1), 1784584921, 1, 0, 0);
}

void func_1825(var uParam0, int iParam1)
{
	func_83(uParam0, iParam1);
}

void func_1826(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_1827()
{
	if (!func_1856(&(Global_1298378->f_62)))
	{
		return 0;
	}
	iVar0 = func_1857(Global_1298378->f_62, -268973591, 0, 1);
	return iVar0;
}

void func_1828(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_86(iVar0);
		if (func_82(uParam0->f_7, iVar1))
		{
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 5)
	{
		iVar2++;
	}
}

Vector3 func_1829(vector3 vParam0)
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

void func_1830(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || shift_left((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || shift_left((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_1831(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1832(int iParam0, int iParam1)
{
	iVar0 = func_1786(*iParam0);
	iVar1 = func_1785(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1790(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1833(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1834(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1835(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_1836(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1789(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1788(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1474(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1785(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1786(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1787(iParam0);
	if (iVar5 < 1 || iVar5 > func_1790(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1837(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_1838(int iParam0)
{
	if (!func_1837(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_3009[iParam0]);
}

int func_1839(int iParam0, bool bParam1)
{
	if (!func_1837(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_1858(iParam0);
		if (func_1351(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_1859(255);
			}
			else
			{
				iVar1 = func_1136(iVar0, func_1135(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_3009[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar0 = func_1860(iParam0);
		if (func_1351(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = _0xdb438cc9bc6f4022();
			}
			else
			{
				iVar1 = func_1136(iVar0, func_1135(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_2985[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_1840(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_49(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_1841()
{
	if (func_670(&Global_1296859, 1024))
	{
		return 827714260;
	}
	else if (func_670(&Global_1296859, 2048))
	{
		return -822124724;
	}
	else if (func_670(&Global_1296859, 4096))
	{
		return 1269193435;
	}
	return 0;
}

int func_1842(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1351(iParam0, 0))
	{
		return 0;
	}
	if (func_1846(iParam0))
	{
		return func_1862(func_1847(iParam0, 0), iParam1, bParam2, iParam3, func_1861(iParam0));
	}
	if (func_1863(iParam0, bParam4) || func_1864(iParam0))
	{
		iParam1 = 997808187;
	}
	else if (func_1861(iParam0) && (func_1865(iParam0, &iVar0) || func_1866(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else
	{
		bVar1 = func_1845(iParam0, -570078785);
		bVar2 = func_1845(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			iParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_1867())
			{
				iParam1 = -570078785;
			}
			else
			{
				iParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			iParam1 = -915411861;
		}
		else if (func_1868(15) && func_1845(iParam0, 369710026))
		{
			iParam1 = 369710026;
		}
		else
		{
			iParam1 = 0;
		}
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

bool func_1843(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_1351(iParam0, 0))
	{
		return false;
	}
	*iParam2 = 0;
	*iParam1 = 0;
	iVar0 = func_1869(831658232, 1, 0, 1);
	iVar1 = func_1869(1964703625, 1, 0, 1);
	bVar2 = _unlock_is_unlocked(-577406511);
	if (bParam3)
	{
		iVar0 = 4;
		iVar1 = 0;
	}
	if (iVar1 == 0)
	{
		if (bVar2)
		{
			if (iParam0 == 1269193435)
			{
				*iParam1 = 1770635244;
			}
			else if (iParam0 == -822124724)
			{
				*iParam1 = 1694260085;
			}
			else
			{
				*iParam1 = -2006381587;
			}
		}
		else if (iParam0 == 1269193435)
		{
			*iParam1 = -1964533269;
		}
		else if (iParam0 == -822124724)
		{
			*iParam1 = 100166317;
		}
		else
		{
			*iParam1 = 1038106552;
		}
		switch (iVar0)
		{
			case 1:
				*iParam2 = 600942249;
				break;
			case 2:
				*iParam2 = 747826962;
				break;
			case 3:
				*iParam2 = 502256076;
				break;
			case 4:
				*iParam2 = -834227589;
				break;
		}
	}
	else if (iVar0 == 0)
	{
		if (bVar2)
		{
			if (iParam0 == 1269193435)
			{
				*iParam1 = 1455881441;
			}
			else if (iParam0 == -822124724)
			{
				*iParam1 = -98408876;
			}
			else
			{
				*iParam1 = 136850391;
			}
		}
		else if (iParam0 == 1269193435)
		{
			*iParam1 = 535276374;
		}
		else if (iParam0 == -822124724)
		{
			*iParam1 = 1279048583;
		}
		else
		{
			*iParam1 = 1003713621;
		}
		switch (iVar1)
		{
			case 1:
				*iParam2 = 600942249;
				break;
			case 2:
				*iParam2 = 747826962;
				break;
			case 3:
				*iParam2 = 502256076;
				break;
			case 4:
				*iParam2 = -834227589;
				break;
		}
	}
	else
	{
		if (bVar2)
		{
			if (iParam0 == 1269193435)
			{
				*iParam1 = 683835946;
			}
			else if (iParam0 == -822124724)
			{
				*iParam1 = 129815171;
			}
			else
			{
				*iParam1 = -280792819;
			}
		}
		else if (iParam0 == 1269193435)
		{
			*iParam1 = -61838317;
		}
		else if (iParam0 == -822124724)
		{
			*iParam1 = 185950306;
		}
		else
		{
			*iParam1 = -2110360382;
		}
		if (iVar0 == 1)
		{
			switch (iVar1)
			{
				case 1:
					*iParam2 = 600942249;
					break;
				case 2:
					*iParam2 = 747826962;
					break;
				case 3:
					*iParam2 = 502256076;
					break;
			}
		}
		else if (iVar0 == 2)
		{
			if (iVar1 == 1)
			{
				*iParam2 = -834227589;
			}
			else
			{
				*iParam2 = 1472825031;
			}
		}
		else
		{
			*iParam2 = -489628648;
		}
	}
	if ((iVar0 == 0 && iVar1 == 0) && bVar2)
	{
		if (iParam0 == 1269193435)
		{
			*iParam1 = 683835946;
		}
		else if (iParam0 == -822124724)
		{
			*iParam1 = 129815171;
		}
		else
		{
			*iParam1 = -280792819;
		}
		*iParam2 = -915411861;
	}
	if (!func_1870(*iParam1) || *iParam2 == 0)
	{
		return false;
	}
	return true;
}

int func_1844(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_1871(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1845(int iParam0, int iParam1)
{
	if (!func_1351(iParam0, 0))
	{
		return false;
	}
	if (func_1846(iParam0))
	{
		return func_1872(func_1847(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_1846(int iParam0)
{
	if (func_1873(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_1847(int iParam0, bool bParam1)
{
	if (!func_1351(iParam0, 0))
	{
		return func_1875(func_1874(iParam0), bParam1);
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

bool func_1848(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_1351(iParam0, 0))
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
		func_1876(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_1849(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1356(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

int func_1850(int iParam0)
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

var func_1851()
{
	return Global_1071686->f_28448[32]->f_3;
}

var func_1852(int iParam0)
{
	return &(Global_1109804->f_21.f_2.f_1[iParam0]);
}

bool func_1853(var uParam0, int iParam1)
{
	uParam0->f_2 = 1700129460;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1854(struct<2> Param0)
{
	return func_898(Param0, 1, 4);
}

bool func_1855(int iParam0, int iParam1)
{
	if (!func_1351(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1877(iParam0);
	switch (iVar0)
	{
		case -427144552:
			if (has_ped_got_weapon(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 307971639:
			if (!func_1878(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_1879(iParam0))
			{
				return true;
			}
			break;
	}
	return func_1880(iParam0, 0, 0, 0) >= iParam1;
}

bool func_1856(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1857(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	Var0.f_9 = -1591664384;
	if (func_1840(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1858(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -697100746;
		case 7:
			return -999519443;
		case 12:
			return 128291088;
		case 11:
			return -1399517481;
		case 13:
			return 705255263;
		case 14:
			return -471215553;
		case 15:
			return 1371028520;
		case 16:
			return 1479488426;
		case 17:
			return -170363364;
		case 18:
			return -296143963;
		case 19:
			return -575193412;
		case 20:
			return 1364208910;
		case 21:
			return 1936286816;
		case 22:
			return -361115047;
		default:
			break;
	}
	return 0;
}

int func_1859(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

int func_1860(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1152215114;
		case 7:
			return -390042476;
		case 12:
			return -1108993414;
		case 11:
			return -657484822;
		case 13:
			return -138573168;
		case 14:
			return -1834731109;
		case 15:
			return -2024553896;
		case 16:
			return 712011765;
		case 17:
			return -494315136;
		case 18:
			return -399749454;
		case 19:
			return 1428145499;
		case 20:
			return -1318783204;
		case 21:
			return 893948884;
		case 22:
			return -187008013;
		default:
			break;
	}
	return 0;
}

bool func_1861(int iParam0)
{
	if (!func_356() && func_391())
	{
		return true;
	}
	return func_1873(iParam0, 1435272033);
}

int func_1862(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1870(iParam0))
	{
		return 0;
	}
	bVar1 = func_82(iParam3, 2);
	bVar2 = func_1872(iParam0, -570078785, bVar1);
	bVar3 = func_1872(iParam0, -915411861, bVar1);
	if (func_1872(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_1881(iParam0, &iVar0) || func_1882(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_1867())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_1868(15) && func_1872(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

bool func_1863(int iParam0, bool bParam1)
{
	return (func_1845(iParam0, 997808187) && !func_1883(iParam0, 997808187, bParam1));
}

bool func_1864(int iParam0)
{
	iVar0 = func_1847(iParam0, 1);
	if (iVar0 != 0 && func_1872(iVar0, 997808187, 0))
	{
		if (_unlock_is_unlocked(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_1865(int iParam0, int iParam1)
{
	*iParam1 = func_1884(iParam0, 1);
	return *iParam1 != 0;
}

bool func_1866(int iParam0, int iParam1)
{
	*iParam1 = func_1885(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_1867()
{
	return Global_1915715->f_22477;
}

bool func_1868(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_1395(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_1869(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_1886(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_49(bParam1), iParam0, iParam3);
}

bool func_1870(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_1871(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_1870(iParam0))
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
		func_1887(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_1872(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1870(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_1888(iParam0, iParam1);
	}
	return true;
}

bool func_1873(int iParam0, int iParam1)
{
	if (!func_1351(iParam0, 0))
	{
		return func_1889(func_1874(iParam0), iParam1);
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

int func_1874(int iParam0)
{
	return iParam0;
}

int func_1875(int iParam0, bool bParam1)
{
	if (!func_1890(iParam0, 2))
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

void func_1876(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_1891(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_1877(int iParam0)
{
	if (!func_1351(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_1878(int iParam0, int iParam1)
{
	if (!func_1351(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_1892(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1893("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1894(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1895(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1896(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1896(iVar1);
	}
	return false;
}

bool func_1879(int iParam0)
{
	if (!func_1351(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1891(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_1897(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_1898(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_1899(iParam0);
	iVar2 = func_1898(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_1880(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_1351(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_1877(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_1892(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_1900(iParam0, 0);
	}
	if (func_1352(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_49(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_1901(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_49(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_1881(int iParam0, int iParam1)
{
	*iParam1 = func_1902(iParam0, 1);
	return *iParam1 != 0;
}

bool func_1882(int iParam0, int iParam1)
{
	*iParam1 = func_1903(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_1883(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1351(iParam0, 0))
	{
		return func_1904(func_1874(iParam0), iParam1, bParam2);
	}
	if (func_1846(iParam0))
	{
		return func_1888(func_1847(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_97() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_1905(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_1884(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_1906(iVar0, 1, 0);
		if (!func_1848(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_1907(&(Var2[iVar34])))
				{
					if (!bParam1 || func_1880(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1885(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_1906(iVar0, 0, 1);
		if (!func_1848(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_1908(&(Var9[iVar41])))
				{
					if (!bParam1 || func_1880(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_1886(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

void func_1887(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_1891(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_1888(int iParam0, int iParam1)
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
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iLocal_475 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iLocal_478 < iLocal_475)
	{
		if (&Var0[iLocal_478] == iParam1)
		{
			iVar473 = Var0[iLocal_478]->f_35;
			iVar475 = 0;
			while (iLocal_479 < iLocal_477)
			{
				uVar472 = &Var0[iLocal_478]->f_36[iLocal_479];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iLocal_479 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return false;
}

int func_1889(int iParam0, int iParam1)
{
	if (!func_1890(iParam0, 2))
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

bool func_1890(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

int func_1891(int iParam0)
{
	if (!func_1351(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_1892(int iParam0, int iParam1)
{
	if (!func_1351(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1877(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_1873(iParam0, 1399091007))
	{
		func_1909(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_1893(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_49(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1894(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_1895(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_1896(int iParam0)
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

int func_1897(int iParam0)
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

int func_1898(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1899(int iParam0)
{
	iVar0 = func_1891(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_1900(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1910(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_1912(&Var0, func_1911(0));
	}
	if (!func_1913(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1896(iVar14);
	return uVar15;
}

struct<4> func_1901(int iParam0, bool bParam1)
{
	Var0 = { func_1914(iParam0, bParam1, 0) };
	return func_1350(iParam0, Var0, Var0.f_4, bParam1);
}

int func_1902(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_1906(iVar0, 1, 0);
		if (!func_1871(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_1907(&(Var2[iVar34])))
				{
					if (!bParam1 || func_1880(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1903(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_1906(iVar0, 0, 1);
		if (!func_1871(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_1908(&(Var9[iVar41])))
				{
					if (!bParam1 || func_1880(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_1904(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1890(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_97() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_1915(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_1905(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_1351(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_1906(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_1907(int iParam0)
{
	return func_1891(iParam0) == 1946043663;
}

bool func_1908(int iParam0)
{
	return func_1891(iParam0) == -126813555;
}

void func_1909(int iParam0, var uParam1, var uParam2)
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

struct<14> func_1910(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_1911(bool bParam0)
{
	iVar0 = func_49(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_1350(923904168, func_1135(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_1350(923904168, func_1135(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_1350(923904168, func_1135(bParam0), -740156546, 0);
}

void func_1912(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1913(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_49(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_1914(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1135(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_1877(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_1350(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_1911(bParam1) };
			if (bParam2 && func_1916(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_1917(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1917(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1918(iParam0, &Var6, 1728382685))
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
			Var0 = { func_1919(bParam1) };
			switch (func_1891(iParam0))
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
			if (func_1920(iParam0, -1823706425))
			{
				Var0 = { func_1350(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1920(iParam0, -1483207246))
			{
				Var0 = { func_1350(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_1350(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_1920(iParam0, -1653629781))
			{
				Var0 = { func_1350(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_1921(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_1920(iParam0, -1653629781))
			{
				Var0 = { func_1350(1384535894, Var0, 1784584921, bParam1) };
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

bool func_1915(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_1890(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_1922(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_1916(int iParam0, bool bParam1)
{
	if (func_1891(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_1923();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_1917(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_1136(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_1918(int iParam0, var uParam1, int iParam2)
{
	if (func_1924(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1919(bool bParam0)
{
	iVar0 = func_49(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_1350(271701509, func_1135(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_1350(271701509, func_1135(bParam0), 12999093, 0);
}

bool func_1920(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_1891(iParam0);
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
			if (func_1925(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1921(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1926(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_1922(int iParam0, int iParam1, var uParam2)
{
	iVar1 = _0x7a35a72a692be9db(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x3a0b667abff87f6e(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1923()
{
	return (func_1869(-1185145312, 0, 0, 0) > 0 && func_1927(func_1350(889965687, func_1135(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_1924(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_49(0);
	*uParam1 = { func_1350(iParam0, func_1911(0), iParam3, 0) };
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

bool func_1925(int iParam0, int iParam1, int iParam2)
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

bool func_1926(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_49(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_1927(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1928(&uParam0, iParam4, bParam5, iParam6);
}

int func_1928(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_1929(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1929(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_49(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_1926(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

