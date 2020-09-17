void __EntryFunction__()
{
	if (has_force_cleanup_occurred(523))
	{
		func_1(&(Local_3.f_99), 10);
	}
	while (true)
	{
		func_2();
		if (Local_3.f_99 < 10)
		{
			if (func_3())
			{
				func_1(&(Local_3.f_99), 10);
			}
		}
		switch (Local_3.f_99)
		{
			case 0:
				if (func_4(&ScriptParam_0))
				{
					func_1(&(Local_3.f_99), 1);
				}
				break;
			case 1:
				if (func_5())
				{
					func_1(&(Local_3.f_99), 2);
				}
				break;
			case 2:
				if (func_6())
				{
					func_1(&(Local_3.f_99), 3);
				}
				break;
			case 3:
				if (func_7())
				{
					func_1(&(Local_3.f_99), 5);
				}
				break;
			case 5:
				if (!func_8(&(Local_3.f_102), 8))
				{
					func_9(&Local_3);
				}
				func_1(&(Local_3.f_99), 6);
				break;
			case 6:
				if (Local_3.f_129)
				{
					if (!func_8(&(Local_3.f_102), 8))
					{
						func_9(&Local_3);
					}
					if (func_10(Local_3.f_106, 0, 0, 0))
					{
						if (!func_11(Local_3.f_106.f_3))
						{
							_0xa3db37edf9a74635(player_id(), Local_3.f_106, 7, 2, 0);
							Local_3.f_106.f_3 = func_13(func_12(12), -1616532217, &(Local_3.f_110[0]), 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
							func_14(Local_3.f_106.f_3, Local_3.f_106, 0, 1, -1);
							_0xa3db37edf9a74635(player_id(), Local_3.f_106, 7, 2, 0);
						}
						else
						{
							func_15(Local_3.f_106.f_3, 1, 1);
						}
					}
					else if (func_11(Local_3.f_106.f_3))
					{
						func_16(&(Local_3.f_106.f_3), 0, 1);
					}
					func_1(&(Local_3.f_99), 7);
				}
				else if (func_17(player_id(), 0, 1, 0))
				{
					if (!func_8(&(Local_3.f_102), 8))
					{
						func_9(&Local_3);
					}
					func_1(&(Local_3.f_99), 10);
				}
				break;
			case 7:
				if (func_17(player_id(), 1, 0, 1))
				{
					func_1(&(Local_3.f_99), 10);
				}
				else if (func_18(&Local_3))
				{
					func_19();
					func_1(&(Local_3.f_99), 8);
				}
				else if (!Local_3.f_129)
				{
					func_16(&(Local_3.f_106.f_3), 1, 1);
					func_1(&(Local_3.f_99), 6);
				}
				break;
			case 8:
				if (func_20())
				{
					func_1(&(Local_3.f_99), 9);
				}
				break;
			case 9:
				break;
			case 10:
				func_21(&Local_3, ScriptParam_0);
				break;
		}
		wait(0);
	}
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_2()
{
	switch (Local_3.f_126)
	{
		case 1:
			Local_3.f_129 = func_22(&Local_3, 0);
			break;
		case 0:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	Local_3.f_126++;
	if (Local_3.f_126 >= 4)
	{
		Local_3.f_126 = 0;
	}
}

bool func_3()
{
	switch (Local_3.f_126)
	{
		case 0:
			if (func_23(16, 0, 1) || func_24(2))
			{
				return true;
			}
			break;
		case 1:
			if (!func_17(player_id(), 1, 0, 1))
			{
				if (func_25())
				{
					return true;
				}
			}
			else if (func_26())
			{
				if (func_25())
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case 3:
			if (Local_3.f_99 > 1)
			{
				if (!Local_3.f_129)
				{
					if (!func_27())
					{
						return true;
					}
				}
			}
			break;
	}
	return false;
}

bool func_4(var uParam0)
{
	if (!func_28(uParam0->f_2))
	{
		return false;
	}
	if (!func_29(Local_3.f_106, 0, 1))
	{
		Local_3.f_106 = func_30(uParam0->f_2);
		Local_3.f_106.f_1 = uParam0->f_2;
		if (!func_29(Local_3.f_106, 0, 1))
		{
			return false;
		}
		set_ped_can_be_targetted(Local_3.f_106, true);
		set_blocking_of_non_temporary_events(Local_3.f_106, true);
		set_ped_config_flag(Local_3.f_106, 178, true);
		set_ped_config_flag(Local_3.f_106, 130, false);
		set_ped_config_flag(Local_3.f_106, 297, true);
		set_ped_config_flag(Local_3.f_106, 234, true);
		set_ped_config_flag(Local_3.f_106, 235, true);
		Local_3.f_98 = uParam0->f_3;
		Local_3.f_103 = { func_31(Local_3.f_98) };
		return true;
	}
	return false;
}

bool func_5()
{
	func_32(&Local_3);
	return true;
}

bool func_6()
{
	request_anim_dict(func_33(0));
	_0xed9582b3da8f02b4(1);
	return true;
}

bool func_7()
{
	if (!has_anim_dict_loaded(func_33(0)))
	{
		return false;
	}
	if (!_0x5e420ff293ee5472())
	{
		return false;
	}
	return true;
}

bool func_8(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_9(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 3:
			func_34(uParam0, 1, 0);
			break;
		case 1:
			func_34(uParam0, 2, 0);
			func_34(uParam0, 3, 0);
			break;
		case 2:
			func_34(uParam0, 2, 0);
			func_35(uParam0, 3);
			break;
		case 0:
			func_34(uParam0, 0, 0);
			func_34(uParam0, 1, 0);
			func_34(uParam0, 2, 0);
			func_34(uParam0, 3, 0);
			break;
	}
}

bool func_10(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (func_36(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, iParam2, iParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_37(16);
					Global_1935630->f_58 = get_ped_index_from_entity_index(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_11(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((*Global_1945938)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1945938)[iParam0]->f_3);
}

char* func_12(int iParam0)
{
	if (func_38(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

int func_13(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
	while (iVar0 < 48)
	{
		if (func_39(iVar0, 2))
		{
			if (iParam2 == (*Global_1945938)[iVar0]->f_10 && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_40(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_11(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	func_42(iParam0, 18, 0, 1);
	func_42(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

void func_15(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_11(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	if (bParam1)
	{
		func_43(iParam0, 4);
		func_44(iVar0, 1);
		func_45(iVar0, 1);
	}
	else
	{
		func_46(iParam0, 4);
		func_45(iVar0, 0);
	}
}

void func_16(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_11(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_41(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_47(iVar0);
	*uParam0 = 0;
}

int func_17(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_48(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
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

bool func_18(var uParam0)
{
	if (func_49(uParam0->f_106.f_3, 1))
	{
		_0x7c511e91738a0828(uParam0->f_106, Global_35, 41, 0);
		func_15(uParam0->f_106.f_3, 0, 1);
	}
	if (uParam0->f_129)
	{
		if ((func_50() || is_ped_shooting(Global_35)) || _get_lassoed_entity(Global_35) != 0)
		{
			return true;
		}
	}
	return false;
}

void func_19()
{
	func_51(&(Local_3.f_102), 1);
	func_53(func_52(-1292532933), 1);
	func_54(1);
	func_55(&Local_3);
	func_56(&Local_3, 30f, 30f);
	Local_3.f_106 = func_57(Local_3.f_106.f_1, 0, 0, 0, 1, 1);
	set_entity_as_mission_entity(Local_3.f_106, true, true);
	func_59(Global_35, Local_3.f_106, func_58(&Local_3), "", -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
}

bool func_20()
{
	if (!func_8(&(Local_3.f_102), 2))
	{
		if (_0x285d36c5c72b0569(Global_35) < 0.5f)
		{
			func_56(&Local_3, 60f, 60f);
		}
	}
	switch (Local_3.f_100)
	{
		case 0:
			if (func_29(Local_3.f_106, 0, 1))
			{
				func_60(Local_3.f_106, Global_36, 1, 0, 3);
				open_sequence_task(&iVar0);
				task_play_anim(0, func_33(0), "enter_hands_up", 2f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				task_play_anim(0, func_33(0), "hands_up_loop", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				func_61(Local_3.f_106, &iVar0, 0, 0, 1, 1);
			}
			func_62(&(Local_3.f_100), 1);
			break;
		case 1:
			if (func_29(Local_3.f_106, 0, 0))
			{
				if (!func_63(&(Local_3.f_106.f_2), 1))
				{
					if (is_entity_playing_anim(0, func_33(0), "hands_up_loop", 1) || get_sequence_progress(Local_3.f_106) > 0)
					{
						func_64(&(Local_3.f_106.f_2), 1);
					}
				}
				if (func_65(&Local_3))
				{
					func_66(&Local_3);
					vVar1 = { func_67(&Local_3) };
					fVar4 = func_68(&Local_3);
					func_70(0, &Local_3, Local_3.f_106, Global_35, func_69(&Local_3), 0, 1116471296, 0, 0, 0, 1);
					task_follow_nav_mesh_to_coord(Local_3.f_106, vVar1, 2f, 20000, 0.25f, 0, fVar4);
					func_56(&Local_3, 30f, 30f);
					func_62(&(Local_3.f_100), 2);
				}
			}
			break;
		case 2:
			if (func_29(Local_3.f_106, 0, 0))
			{
				vVar1 = { func_67(&Local_3) };
				fVar4 = func_68(&Local_3);
				if (is_entity_at_coord(Local_3.f_106, vVar1, 0.25f, 0.25f, 2f, false, true, 0))
				{
					task_cower(Local_3.f_106, -1, 0, 0);
					func_62(&(Local_3.f_100), 3);
				}
				else if (!func_71(Local_3.f_106, 713668775))
				{
					task_follow_nav_mesh_to_coord(Local_3.f_106, vVar1, 2f, 20000, 0.25f, 0, fVar4);
				}
			}
			break;
		case 3:
			break;
		case 4:
			return true;
	}
	return false;
}

void func_21(var uParam0, vector3 vParam1, var uParam4)
{
	switch (uParam0->f_127)
	{
		case 0:
			uParam0->f_127++;
			break;
		case 1:
			iVar0 = uParam0->f_128;
			if (_does_volume_exist(&(uParam0->f_110[iVar0])))
			{
				_0x74c2b3dc0b294102(&(uParam0->f_110[iVar0]));
				_0xa1cfb35069d23c23(&(uParam0->f_110[iVar0]));
				func_72(&(uParam0->f_110[iVar0]));
			}
			if (iVar0 >= 5)
			{
				uParam0->f_128 = 0;
				uParam0->f_127++;
			}
			else
			{
				uParam0->f_128++;
			}
			break;
		case 2:
			uParam0->f_127++;
			break;
		case 3:
			if (func_73(vParam1.z, 1))
			{
				func_74(vParam1.z, 0, 1, 0, 0);
			}
			terminate_this_thread();
			break;
	}
}

int func_22(var uParam0, int iParam1)
{
	return func_75(uParam0, Global_35, iParam1);
}

bool func_23(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_76())
		{
			return true;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if ((*Global_1055058)[network_player_id_to_int()]->f_114 && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if (Global_1898164->f_1[0]->f_2 == 8)
	{
		iVar0 = func_77(&(Global_1898164->f_1[0]));
		if (func_78(iVar0) && func_79((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_80(&(Global_1898164->f_1[0])))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164->f_1[0]->f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_24(int iParam0)
{
	return (Global_1934182->f_74 && iParam0) != 0;
}

bool func_25()
{
	if (Local_3.f_98 != -1)
	{
		if (get_distance_between_coords(Global_36, func_31(Local_3.f_98), false) >= 60f)
		{
			return true;
		}
	}
	return false;
}

bool func_26()
{
	return (Global_1894899 & 1 != 0 && func_81() != -1);
}

bool func_27()
{
	iVar0 = func_82();
	iVar1 = func_83(iVar0);
	if (iVar1 >= 7)
	{
		return true;
	}
	return false;
}

bool func_28(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_29(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_84(iParam0, iParam1);
}

int func_30(int iParam0)
{
	if (!func_28(iParam0))
	{
		return 0;
	}
	if (!func_85(iParam0, 2))
	{
		return 0;
	}
	if (func_87(func_86(iParam0)))
	{
		return func_88(iParam0);
	}
	return _0xe76687023d8c8505(func_89(iParam0), 0);
}

Vector3 func_31(int iParam0)
{
	return (*Global_1934182)[iParam0]->f_1;
}

void func_32(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 3:
			uParam0->f_110[0] = _create_volume_box_with_custom_name(-815.997f, -1276.168f, 44.322f, 0f, 0f, 0f, 12.8f, 6.8f, 4f, "volBankMain");
			uParam0->f_110[1] = _create_volume_box_with_custom_name(-815.998f, -1277.961f, 44.178f, 0f, 0f, 0f, 12.558f, 2.939f, 2.934f, "volClientArea");
			uParam0->f_110[2] = _create_volume_box_with_custom_name(-813.739f, -1274.487f, 44.022f, 0f, 0f, 0f, 8.027f, 2.914f, 2.477f, "volClerkArea");
			break;
		case 0:
			uParam0->f_110[0] = _create_volume_aggregate_with_custom_name("volBankMain");
			_0x39816f6f94f385ad(&(uParam0->f_110[0]), 2645.768f, -1295.391f, 53.303f, 0f, 0f, -64.957f, 20.566f, 16.072f, 4.062f);
			_0xbce668aaf83608be(&(uParam0->f_110[0]), 2649.724f, -1304.401f, 52.738f, 0f, 0f, -19.794f, 3f, 3f, 3f);
			uParam0->f_110[1] = _create_volume_aggregate_with_custom_name("volClientArea");
			_0xbce668aaf83608be(&(uParam0->f_110[1]), 2645.607f, -1295.471f, 52.738f, 0f, 0f, -19.794f, 5.5f, 5.5f, 1.5f);
			_0x39816f6f94f385ad(&(uParam0->f_110[1]), 2643.956f, -1291.68f, 52.76f, 0f, 0f, 24.969f, 15.917f, 12.455f, 3f);
			uParam0->f_110[2] = _create_volume_aggregate_with_custom_name("volClerkArea");
			_0xbce668aaf83608be(&(uParam0->f_110[2]), 2645.607f, -1295.471f, 51.633f, 0f, 0f, -19.794f, 2.5f, 2.5f, 1.5f);
			_0x39816f6f94f385ad(&(uParam0->f_110[2]), 2648.707f, -1302.078f, 53.433f, 0f, 0f, 24.969f, 2.237f, 10.885f, 4.307f);
			_0x39816f6f94f385ad(&(uParam0->f_110[2]), 2649.545f, -1303.876f, 53.459f, 0f, 0f, 24.969f, 3.444f, 6.203f, 4.35f);
			_0x39816f6f94f385ad(&(uParam0->f_110[2]), 2649.368f, -1303.494f, 53.459f, 0f, 0f, 24.969f, 6.123f, 4.182f, 4.35f);
			break;
		case 1:
			uParam0->f_110[0] = _create_volume_box_with_custom_name(1288.882f, -1306.037f, 78.31914f, 0f, 0f, -39.72215f, 11.436f, 19.382f, 3.901308f, "volBankMain");
			uParam0->f_110[1] = _create_volume_aggregate_with_custom_name("volClientArea");
			_0x39816f6f94f385ad(&(uParam0->f_110[1]), 1293.686f, -1300.426f, 77.73367f, 0f, 0f, -39.72215f, 11.48132f, 4.806484f, 4.341565f);
			_0x39816f6f94f385ad(&(uParam0->f_110[1]), 1288.775f, -1299.621f, 77.73367f, 0f, 0f, -129.722f, 9.757624f, 3.109288f, 4.341565f);
			_0x39816f6f94f385ad(&(uParam0->f_110[1]), 1289.892f, -1300.947f, 77.73367f, 0f, 0f, 5.277998f, 3.825557f, 1.742847f, 4.341565f);
			uParam0->f_110[2] = _create_volume_aggregate_with_custom_name("volClerkArea");
			_0x39816f6f94f385ad(&(uParam0->f_110[2]), 1282.856f, -1307.465f, 77.799f, 0f, 0f, -39.72215f, 3.978764f, 8.991151f, 3.25f);
			_0x39816f6f94f385ad(&(uParam0->f_110[2]), 1290.426f, -1307.595f, 77.734f, 0f, 0f, -39.72215f, 7.086f, 9.381f, 4.342f);
			_0x39816f6f94f385ad(&(uParam0->f_110[2]), 1287.06f, -1305.533f, 77.734f, 0f, 0f, -39.72215f, 1.132267f, 8.370426f, 4.342f);
			break;
		case 2:
			uParam0->f_110[0] = _create_volume_box_with_custom_name(-306.46f, 770.943f, 119.808f, 0f, 0f, 9.999998f, 10f, 17.8f, 4.8f, "volBankMain");
			uParam0->f_110[1] = _create_volume_aggregate_with_custom_name("volClientArea");
			_0x39816f6f94f385ad(&(uParam0->f_110[1]), -307.351f, 776.514f, 119.808f, 0f, 0f, 9.999998f, 9.616f, 5f, 4.8f);
			_0x39816f6f94f385ad(&(uParam0->f_110[1]), -303.311f, 775.092f, 119.808f, 0f, 0f, 9.999998f, 1.862f, 9.193705f, 4.8f);
			_0x39816f6f94f385ad(&(uParam0->f_110[1]), -304.055f, 774.803f, 119.544f, 0f, 0f, 55.55931f, 2.170487f, 2.343747f, 3.762657f);
			uParam0->f_110[2] = _create_volume_aggregate_with_custom_name("volClerkArea");
			_0x39816f6f94f385ad(&(uParam0->f_110[2]), -308.974f, 772.681f, 119.808f, 0f, 0f, 10.57594f, 5.140851f, 4.527046f, 4.8f);
			_0x39816f6f94f385ad(&(uParam0->f_110[2]), -305.889f, 772.404f, 119.808f, 0f, 0f, 10.57594f, 3.724f, 2.34508f, 4.8f);
			_0x39816f6f94f385ad(&(uParam0->f_110[2]), -306.25f, 767.973f, 119.808f, 0f, 0f, -34.63f, 3.298415f, 2.904014f, 4.8f);
			_0x39816f6f94f385ad(&(uParam0->f_110[2]), -302.045f, 764.4305f, 119.808f, 0f, 0f, 9.999998f, 2.035f, 8.676f, 4.8f);
			uParam0->f_110[4] = _create_volume_cylinder_with_custom_name(-302.2949f, 769.3945f, 117.7031f, 0f, 0f, 0f, 1f, 1f, 2f, "lawRestriction");
			_0xb56d41a694e42e86(&(uParam0->f_110[4]), 0, 0, 0, -1, -1, 0);
			_0x18262cafebb5fbe1(&(uParam0->f_110[4]), 0, 0, 0, -1, -1, 0);
			break;
	}
}

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_proc@robberies@bank@valbankig1_2_teller";
		default:
			break;
	}
	return "Missing anim dict";
}

void func_34(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = func_90(uParam0, iParam1);
	if (!func_91(iVar0))
	{
	}
	if (bParam2)
	{
		func_92(iVar0, 1);
	}
	else
	{
		func_93(iVar0, 1);
	}
}

void func_35(var uParam0, int iParam1)
{
	iVar0 = func_90(uParam0, iParam1);
	if (!func_91(iVar0))
	{
	}
	func_94(iVar0, 1);
}

bool func_36(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_37(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_38(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

bool func_39(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_40(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = iParam5;
	(*Global_1945938)[iParam0]->f_6 = { vParam6 };
	(*Global_1945938)[iParam0]->f_9 = fParam9;
	(*Global_1945938)[iParam0]->f_10 = iParam10;
	(*Global_1945938)[iParam0]->f_11 = iParam11;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = iParam12;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
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
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 8:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 13:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 15:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_44(iParam0, 1);
	func_45(iParam0, 1);
	func_46(iParam0, 128);
}

int func_41(int iParam0)
{
	return iParam0;
}

void func_42(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_11(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_43(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_44(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_39(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_46(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_47(int iParam0)
{
	if (!func_95(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1945938)[iParam0]->f_3);
	}
	(*Global_1945938)[iParam0]->f_4 = 0;
	(*Global_1945938)[iParam0] = 1;
	(*Global_1945938)[iParam0]->f_16 = 0;
	(*Global_1945938)[iParam0]->f_1 = 0;
	(*Global_1945938)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_9 = 0f;
	(*Global_1945938)[iParam0]->f_10 = 0;
	(*Global_1945938)[iParam0]->f_11 = 0;
	(*Global_1945938)[iParam0]->f_2 = 1;
	(*Global_1945938)[iParam0]->f_15 = -1f;
}

int func_48(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_49(int iParam0, bool bParam1)
{
	if (bParam1 && !func_11(iParam0))
	{
		return false;
	}
	iVar0 = func_41(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_50()
{
	if (is_player_free_aiming(player_id()) || is_control_pressed(0, -128997553))
	{
		if (_0xcb690f680a3ea971(Global_35, 6))
		{
			return true;
		}
	}
	return false;
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_52(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_53(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_54(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_55(var uParam0)
{
	uParam0->f_117[0] = add_shocking_event_for_entity(-1215290486, Global_35, -1f, 15f, 25f, -1f, -1f, 180f, false, false, -1, -1);
}

void func_56(var uParam0, float fParam1, float fParam2)
{
	if (!func_8(&(uParam0->f_102), 2))
	{
		func_96(1);
		_0xedfc6c1fd1c964f5(player_id(), 1780145725, 0, fParam2, fParam2, 0, fParam1, fParam1, 0);
		func_51(&(uParam0->f_102), 2);
	}
}

int func_57(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_97(iParam0, 1))
	{
		return 0;
	}
	if (func_87(func_86(iParam0)))
	{
		iVar1 = func_98(iParam0);
		if (!_0x800df3fc913355f3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_0xeb98b38ca60742d7(iVar1))
			{
				_0x49a8c2cd97815215(iVar1);
			}
		}
		_0x6759bee6762e140b(iVar1);
		iVar0 = _0x0cadc3a977997472(iVar1, 0);
		if (!does_entity_exist(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_99(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_100(iParam0, 1);
	func_101(iParam0);
	if (bParam3)
	{
		func_100(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

char* func_58(var uParam0)
{
	if (func_102())
	{
		return "ROB_MALE";
	}
	return "ROB_GENERAL";
}

bool func_59(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_103(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_60(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_84(iParam0, 0))
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
	if (func_104(vParam1))
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

void func_61(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	close_sequence_task(*iParam1);
	if (!bParam5 || !is_entity_dead(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			_task_perform_sequence_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			task_perform_sequence(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		clear_sequence_task(iParam1);
	}
}

void func_62(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_63(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_64(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_65(var uParam0)
{
	if (!func_63(&(uParam0->f_106.f_2), 1))
	{
		return false;
	}
	if (uParam0->f_129)
	{
		if (func_105(uParam0->f_106, 1090519040, 1103626240, 1097859072, 0))
		{
			if (func_106(&(uParam0->f_119)))
			{
				func_107(&(uParam0->f_119));
			}
			return false;
		}
	}
	func_108(&(uParam0->f_119), 0);
	if (func_109(&(uParam0->f_119), 1f))
	{
		return true;
	}
	return false;
}

void func_66(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 2:
			func_35(uParam0, 3);
			break;
	}
}

Vector3 func_67(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 3:
			return -811.6213f, -1274.449f, 42.7727f;
		case 0:
			return 2650.946f, -1301.704f, 51.2461f;
		case 1:
			return 1284.215f, -1304.791f, 76.03969f;
		case 2:
			return -307.9412f, 768.012f, 117.7031f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_68(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 3:
			return 269.5828f;
		case 0:
			return 268.1955f;
		case 1:
			return 25.4947f;
		case 2:
			return 211f;
		default:
			break;
	}
	return 0f;
}

char* func_69(var uParam0)
{
	iVar0 = get_random_int_in_range(0, 3);
	switch (iVar0)
	{
		case 0:
			return "BRS_CLERK_FLEE_1";
		case 1:
			return "BRS_CLERK_FLEE_2";
		case 2:
			return "BRS_CLERK_FLEE_3";
		default:
			break;
	}
	return "BRS_CLERK_FLEE_1";
}

bool func_70(bool bParam0, var uParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam0)
	{
		return func_110(uParam1, sParam4, iParam2, iParam3, iParam7, bParam9, 1, 1);
	}
	return func_59(iParam2, iParam3, sParam4, sParam5, fParam6, iParam7, bParam8, bParam9, iParam10, 0, 1, 1744022339, 1, 0, 0);
}

bool func_71(int iParam0, int iParam1)
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

void func_72(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_73(int iParam0, bool bParam1)
{
	if (func_111() != -1)
	{
		return false;
	}
	if (!func_28(iParam0))
	{
		return false;
	}
	if (!func_99(iParam0) && bParam1)
	{
		return false;
	}
	return func_85(iParam0, 1);
}

void func_74(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_28(iParam0))
	{
		return;
	}
	if (!func_85(iParam0, 1))
	{
		return;
	}
	if (!func_85(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_99(iParam0)) && func_112(iParam0))
	{
		return;
	}
	func_113(iParam0, 1);
	func_114(iParam0);
	if (func_87(func_86(iParam0)))
	{
		iVar0 = func_98(iParam0);
		if (!_0x800df3fc913355f3(iVar0))
		{
			return;
		}
		_0xbb68908cd11aebdc(iVar0);
		_0xb65e7f733956cf25(iVar0);
		if (bParam2 && !_0xeb98b38ca60742d7(iVar0))
		{
			_0x631cd2d77fdc0316(iVar0);
		}
		iVar1 = _0x31c70a716cae1fee(iVar0);
		if (!is_ped_injured(iVar1))
		{
			set_ped_config_flag(iVar1, 171, false);
		}
		if (bParam1)
		{
			_0x7b204f88f6c3d287(iVar0);
		}
		func_113(iParam0, 16);
	}
	if (func_85(iParam0, 128) && !bParam3)
	{
		func_115(iParam0, 0);
	}
}

int func_75(var uParam0, int iParam1, int iParam2)
{
	if (func_116(iParam1, &(uParam0->f_110[iParam2]), 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_76()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_524298)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_77(int iParam0)
{
	if (!func_80(iParam0))
	{
		return -1;
	}
	return func_118(func_117(iParam0));
}

bool func_78(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_79(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_80(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_81()
{
	return Global_1894899->f_2;
}

var func_82()
{
	return &Global_1899515;
}

int func_83(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_84(int iParam0, int iParam1)
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
	if (func_119(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_119(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_119(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_85(int iParam0, int iParam1)
{
	if (func_111() != -1)
	{
		return false;
	}
	if (!func_28(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_86(int iParam0)
{
	if (!func_28(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_87(int iParam0)
{
	return iParam0 != 0;
}

int func_88(int iParam0)
{
	iVar0 = func_98(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_0x800df3fc913355f3(iVar0))
	{
		return 0;
	}
	return _0x31c70a716cae1fee(iVar0);
}

int func_89(int iParam0)
{
	if (!func_28(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

int func_90(var uParam0, int iParam1)
{
	switch (uParam0->f_98)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return 531022111;
				case 1:
					return 2117902999;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -977211145;
				case 1:
					return -1206757990;
				case 2:
					return 1634148892;
				case 3:
					return 2058564250;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -408139633;
				case 1:
					return -1652509687;
				case 2:
					return 1340831050;
				case 3:
					return -576346876;
				default:
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1830999060;
				case 1:
					return 965922748;
				case 2:
					return 1634115439;
				case 3:
					return 1751238140;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_91(int iParam0)
{
	return iParam0 != 0;
}

void func_92(int iParam0, int iParam1)
{
	func_120(iParam0, 1, 0, 0, 1, 0, 0, 0);
}

void func_93(int iParam0, int iParam1)
{
	func_120(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_94(int iParam0, int iParam1)
{
	func_120(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_95(int iParam0)
{
	return func_39(iParam0, 2);
}

void func_96(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_121(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_122(Global_1935630, 4194304);
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

bool func_97(int iParam0, bool bParam1)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	if ((func_85(iParam0, 1) && !func_99(iParam0)) && func_112(iParam0))
	{
		return false;
	}
	if (!func_85(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_123(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_98(int iParam0)
{
	if (!func_28(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_99(int iParam0)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_100(int iParam0, int iParam1)
{
	if (func_111() != -1)
	{
		return;
	}
	if (!func_28(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_101(int iParam0)
{
	if (!func_28(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_102()
{
	if (func_111() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_103(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (is_string_null_or_empty(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
		{
			if (!has_entity_clear_los_to_entity_in_front(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_26())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!is_entity_dead(iParam0))
			{
				if (func_124(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!is_entity_dead(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_125(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_126(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_127(iParam0, iParam1, fVar1, bParam13))
				{
					task_look_at_entity(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = network_is_game_in_progress();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					set_bit(&(Var3.f_7), 3);
					set_bit(&(Var3.f_7), 2);
				}
				iVar2 = _0x72e4d1c4639bc465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					_0xb18fec133c7c6c69(iVar2);
				}
			}
			else
			{
				iVar2 = func_129(func_128(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_104(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_105(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	if (!Global_1935630->f_27 && !bParam4)
	{
		return false;
	}
	if (is_control_pressed(0, -128997553))
	{
		fVar0 = func_125(iParam0, player_ped_id(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (is_player_free_aiming(player_id()) || is_player_targetting_entity(player_id(), iParam0, false))
			{
				if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, 0, 0))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return false;
					}
				}
				iVar3 = func_130(player_ped_id(), 0);
				if (func_131(iVar3) && !is_control_pressed(0, 130948705))
				{
					return false;
				}
				if (is_ped_in_any_vehicle(iParam0, false) && was_ped_skeleton_updated(iParam0))
				{
					vVar4 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
				}
				else
				{
					vVar4 = { get_entity_coords(iParam0, false, false) };
				}
				vVar7 = { func_132(0) };
				vVar10 = { func_133(vVar4 - get_gameplay_cam_coord()) };
				fVar13 = absf(get_angle_between_2d_vectors(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = absf(get_angle_between_2d_vectors(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_106(var uParam0)
{
	return func_134(*uParam0, 1);
}

void func_107(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_108(var uParam0, bool bParam1)
{
	if (bParam1 || !func_106(uParam0))
	{
		func_126(uParam0);
	}
}

bool func_109(var uParam0, float fParam1)
{
	if (!func_106(uParam0))
	{
		return false;
	}
	if (func_135(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_110(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_125(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_125(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_126(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_136(sParam1))
			{
				return 1;
			}
		}
		else if (func_137(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_111()
{
	return Global_1572887->f_12;
}

bool func_112(int iParam0)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_113(int iParam0, int iParam1)
{
	if (func_111() != -1)
	{
		return;
	}
	if (!func_28(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_114(int iParam0)
{
	if (!func_28(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_115(int iParam0, bool bParam1)
{
	if (!func_28(iParam0))
	{
		return 0;
	}
	if (!func_85(iParam0, 2))
	{
		return 0;
	}
	if (func_86(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_98(iParam0)))
	{
		return 1;
	}
	if (func_85(iParam0, 1) && !bParam1)
	{
		func_100(iParam0, 128);
		return 1;
	}
	func_113(iParam0, 129);
	func_114(iParam0);
	_0xfc77c5b44d5ff7c0(func_98(iParam0));
	func_138(iParam0, 0);
	return 1;
}

bool func_116(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_117(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12106[iParam0]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0]);
}

int func_118(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_119(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_120(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_139(iParam0, 0, 0);
	if (func_140(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_141(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_142(iParam0, 1);
			}
			else
			{
				func_143(iParam0, 1);
			}
		}
		else
		{
			func_144(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_145())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_121(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_123(int iParam0, bool bParam1)
{
	if (func_111() != -1)
	{
		return false;
	}
	if (!func_28(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_98(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_88(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_98(iParam0));
}

float func_124(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_125(Global_35, iParam0, bParam1, bParam2);
}

float func_125(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_126(var uParam0)
{
	func_146(uParam0, 0f);
}

bool func_127(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (is_ped_in_combat(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_128(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_147(iParam0, &Var0);
}

int func_129(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

var func_130(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_131(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

Vector3 func_132(int iParam0)
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
	return func_133((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_133(vector3 vParam0)
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

bool func_134(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_135(var uParam0)
{
	if (!func_106(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_148(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_149() - uParam0->f_1);
}

bool func_136(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_137(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&cParam1))
	{
		bVar0 = create_new_scripted_conversation(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_150(cParam1, cParam0);
		if (bParam6)
		{
			preload_script_conversation(&cParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_138(int iParam0, int iParam1)
{
	if (!func_28(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

int func_139(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_140(int iParam0)
{
	if (func_91(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_141(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_140(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_142(int iParam0, bool bParam1)
{
	if (func_140(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_143(int iParam0, bool bParam1)
{
	if (func_140(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_144(int iParam0, bool bParam1)
{
	if (func_140(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_145()
{
	return true;
}

void func_146(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_149() - fParam1);
	func_151(uParam0, 1);
	func_152(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_147(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_148(var uParam0)
{
	return func_134(*uParam0, 2);
}

float func_149()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_150(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

void func_151(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

