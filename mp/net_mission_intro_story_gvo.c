void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (!func_1(&uLocal_212, &uLocal_247))
	{
		func_2(&uLocal_238, &uLocal_212, "MI_INITIALIZE - failed");
	}
	network_set_script_is_safe_for_network_game();
	while (!func_3(1, 1))
	{
		func_4(&uLocal_212, &uLocal_238);
		wait(0);
	}
	while (!_0x380ffa15b72408fb(1440))
	{
		wait(0);
	}
	func_2(&uLocal_238, &uLocal_212, "End reached");
}

bool func_1(var uParam0, var uParam1)
{
	uParam0->f_25 = *uParam1;
	return true;
}

void func_2(var uParam0, var uParam1, char* sParam2)
{
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_4);
	func_5(uParam1);
	func_6(uParam1);
	func_7(uParam1);
	enable_control_action(0, -668070958, true);
	enable_control_action(0, 1250966545, true);
	terminate_this_thread();
}

bool func_3(bool bParam0, bool bParam1)
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

void func_4(var uParam0, var uParam1)
{
	switch (func_8(uParam0))
	{
		case 0:
			func_9(uParam0, uParam1);
			if (!func_10(uParam1))
			{
				func_2(uParam1, uParam0, "MI_INITIALIZE - FALSE");
			}
			Stack.Push(uParam0);
			Call_Loc(*uParam1);
			if (!StackVal)
			{
				func_2(uParam1, uParam0, "fpInitialize - FALSE");
			}
			func_11(uParam0);
			func_12(uParam0, 1);
			break;
		case 1:
			Stack.Push(uParam0);
			Call_Loc(uParam1->f_1);
			if (StackVal)
			{
				func_12(uParam0, 2);
			}
			break;
		case 2:
			Stack.Push(uParam0);
			Call_Loc(uParam1->f_2);
			func_12(uParam0, 3);
			break;
		case 3:
			Stack.Push(uParam0);
			Stack.Push(&Var0);
			Call_Loc(uParam1->f_5);
			if (StackVal)
			{
				func_2(uParam1, uParam0, func_13(Var0));
			}
			func_14(uParam0);
			func_15(uParam0);
			func_16(uParam0);
			func_17(uParam0, uParam1);
			Stack.Push(uParam0);
			Call_Loc(uParam1->f_3);
			if (func_18(uParam0, 1))
			{
				_0x702b75dc9d3ede56(true);
			}
			if (func_18(uParam0, 2))
			{
				_0x236905c700fdb54d();
			}
			if (func_18(uParam0, 4))
			{
				if (func_19())
				{
					func_20();
				}
			}
			if (func_21(uParam0))
			{
				disable_control_action(0, -668070958, false);
				disable_control_action(0, 1250966545, false);
				if (func_22())
				{
					func_23();
				}
			}
			break;
	}
}

void func_5(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (_does_volume_exist(uParam0->f_12[iVar0]->f_1))
		{
			_delete_volume(uParam0->f_12[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_6(var uParam0)
{
	if (uParam0->f_10 == 0)
	{
		return;
	}
	_0x00a15b94cba4f76f(uParam0->f_10);
	uParam0->f_10 = 0;
}

void func_7(var uParam0)
{
	if (uParam0->f_11 == 0)
	{
		return;
	}
	_0x2f901291ef177b02(uParam0->f_11, 0);
	uParam0->f_11 = 0;
}

int func_8(var uParam0)
{
	return *uParam0;
}

void func_9(var uParam0, var uParam1)
{
	*uParam1 = 1646;
	uParam1->f_1 = 1655;
	uParam1->f_2 = 1664;
	uParam1->f_3 = 1672;
	uParam1->f_4 = 1680;
	uParam1->f_5 = 1688;
	uParam1->f_6 = 1697;
	uParam1->f_7 = 1705;
	uParam1->f_8 = 1713;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_12[iVar0]->f_2 = -1;
		uParam0->f_12[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_19 = 0;
	func_33(uParam0, 0, 2f);
	func_33(uParam0, 1, 0.25f);
}

bool func_10(var uParam0)
{
	*uParam0 = 1741;
	uParam0->f_1 = 1887;
	uParam0->f_2 = 1916;
	uParam0->f_3 = 2172;
	uParam0->f_4 = 3143;
	uParam0->f_5 = 3333;
	uParam0->f_6 = 3559;
	uParam0->f_8 = 3613;
	return true;
}

void func_11(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3[iVar0] = 1;
		iVar0++;
	}
}

void func_12(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

char* func_13(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_14(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_15(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3[iVar0]->f_2 = (uParam0->f_3[iVar0]->f_2 + get_frame_time());
		if (uParam0->f_3[iVar0]->f_2 >= uParam0->f_3[iVar0]->f_1)
		{
			uParam0->f_3[iVar0]->f_2 = 0f;
			uParam0->f_3[iVar0] = 1;
		}
		else
		{
			uParam0->f_3[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_16(var uParam0)
{
	if (!func_42(uParam0, 0))
	{
		return;
	}
	iVar0 = func_43(uParam0);
	if (_0xd6f6acf4392187fb(Global_1296859->f_15))
	{
		iVar1 = _0x149a2751ab66ac02(Global_1296859->f_15);
	}
	else
	{
		iVar1 = 1;
	}
	if (iVar0 != iVar1)
	{
		func_44(uParam0, iVar1);
		func_45(uParam0, 0, 1);
	}
}

void func_17(var uParam0, var uParam1)
{
	if (uParam0->f_19 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_19)
	{
		if (_does_volume_exist(uParam0->f_12[iVar1]->f_1))
		{
			if (func_42(uParam0, 1))
			{
				bVar0 = is_entity_in_volume(Global_1296859->f_8, uParam0->f_12[iVar1]->f_1, true, 0);
				if (bVar0 != &uParam0->f_12[iVar1])
				{
					if (bVar0)
					{
						Stack.Push(uParam0);
						Stack.Push(iVar1);
						Call_Loc(uParam1->f_6);
					}
					else
					{
						Stack.Push(uParam0);
						Stack.Push(iVar1);
						Call_Loc(uParam1->f_8);
					}
					uParam0->f_12[iVar1] = bVar0;
				}
			}
			if (&uParam0->f_12[iVar1])
			{
				Stack.Push(uParam0);
				Stack.Push(iVar1);
				Call_Loc(uParam1->f_7);
			}
		}
		iVar1++;
	}
}

bool func_18(var uParam0, int iParam1)
{
	return func_46(uParam0->f_1, iParam1);
}

bool func_19()
{
	return Global_1896738->f_382;
}

void func_20()
{
	func_47(0);
}

bool func_21(var uParam0)
{
	return func_18(uParam0, 3);
}

bool func_22()
{
	if (_is_app_active(29649618) || _is_app_running(29649618))
	{
		return true;
	}
	return false;
}

int func_23()
{
	if (!_is_app_active(29649618) && !_is_app_running(29649618))
	{
		return 0;
	}
	_close_app_by_hash(29649618);
	return 1;
}

int func_24(var uParam0)
{
	return 1;
}

int func_25(var uParam0)
{
	return 1;
}

void func_26(var uParam0)
{
}

void func_27(var uParam0)
{
}

void func_28(var uParam0)
{
}

int func_29(var uParam0, var uParam1)
{
	return 0;
}

void func_30(var uParam0, var uParam1)
{
}

void func_31(var uParam0, var uParam1)
{
}

void func_32(var uParam0, var uParam1)
{
}

void func_33(var uParam0, int iParam1, float fParam2)
{
	uParam0->f_3[iParam1]->f_1 = fParam2;
}

int func_34(var uParam0)
{
	iVar0 = func_48(uParam0);
	if (!func_49(iVar0))
	{
		return 0;
	}
	func_50(&Local_16);
	func_51(&Local_16, 0);
	func_52(&Local_16, iVar0);
	func_53(&Local_16, 0);
	func_55(&Local_16, func_54(iVar0));
	if (func_56(iVar0))
	{
		func_57(&Local_16, 0, 1);
	}
	if (!func_58(&Local_16, iVar0))
	{
		return 0;
	}
	func_59(&Local_16, &((*Global_1835011)[iVar0]->f_42));
	if (func_56(iVar0))
	{
		func_60(&Local_16, 0);
	}
	else
	{
		func_60(&Local_16, 1);
	}
	return 1;
}

int func_35(var uParam0)
{
	iVar0 = 1;
	if (!func_61(&Local_16))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_36(var uParam0)
{
	if (!func_63(func_62(&Local_16), &iVar0, 1065353216))
	{
	}
	if (!_does_volume_exist(iVar0))
	{
		iVar0 = _create_volume_sphere(func_64(func_62(&Local_16)), 0f, 0f, 0f, 10f, 10f, 10f);
	}
	if (!func_65(uParam0, &iVar0, 0))
	{
	}
	if (!func_63(func_62(&Local_16), &iVar1, 2f))
	{
	}
	if (!_does_volume_exist(iVar1))
	{
		iVar1 = _create_volume_sphere(func_64(func_62(&Local_16)), 0f, 0f, 0f, 15f, 15f, 15f);
	}
	if (!func_65(uParam0, &iVar1, 1))
	{
	}
	if (func_66(func_62(&Local_16), &vVar2, &fVar5))
	{
		func_67(&Local_16, fVar5, vVar2);
	}
	else if (_does_volume_exist(iVar1))
	{
		vVar6 = { _0x3e2a25b2416dd67e(iVar1) };
		fVar5 = vVar6.x;
		if (fVar5 < vVar6.y)
		{
			fVar5 = vVar6.y;
		}
		vVar2 = { _0xf70f00013a62f866(iVar1) };
		func_67(&Local_16, fVar5, vVar2);
	}
}

void func_37(var uParam0)
{
	iVar0 = func_62(&Local_16);
	func_68(&Local_16);
	if (func_69(&Local_16, 7))
	{
		func_70(&Local_16);
	}
	if (func_69(&Local_16, 3))
	{
		func_71();
	}
	if (func_69(&Local_16, 14))
	{
		if (func_72(&Local_16))
		{
			remove_particle_fx_in_range(func_73(&Local_16), func_74(&Local_16));
			clear_area(func_73(&Local_16), func_74(&Local_16), 65537);
		}
	}
	func_75(&Local_16);
	func_76(&Local_16);
	func_77(&Local_16);
	if (func_78(&Local_16))
	{
		func_80(func_79(func_62(&Local_16)));
	}
	if (func_69(&Local_16, 5))
	{
		if (func_49(iVar0))
		{
			_uiprompt_set_active_group_this_frame(-459030638, _create_var_string(34, "BLIP_ID_TEXT_KEY_PAIRING", (*Global_1835011)[iVar0]->f_28, &((*Global_1835011)[iVar0]->f_42)), 1, 0, 0, 0);
		}
	}
	switch (func_81(&Local_16))
	{
		case 0:
			if (func_69(&Local_16, 7))
			{
				func_82(&Local_16, 0);
			}
			if (func_83(uParam0))
			{
				func_84(uParam0, 0);
			}
			if (!func_69(&Local_16, 4))
			{
			}
			else if (func_85(uParam0, &Local_16))
			{
			}
			else
			{
				disable_control_action(0, 1287709438, false);
				func_53(&Local_16, 1);
				Jump @968; //curOff = 353
				if (func_86(uParam0, &Local_16))
				{
					if (_0x424b17a7dc5c90bc(player_id()))
					{
						func_53(&Local_16, 2);
					}
					else
					{
						func_87(1048576);
						func_53(&Local_16, 6);
					}
				}
				Jump @968; //curOff = 403
				if (func_88() || func_89())
				{
					func_90(7);
					func_91(&Local_16, 0);
					func_92(&Local_16);
					return;
				}
				if (func_93())
				{
					func_53(&Local_16, 8);
				}
				if (func_94(&Local_16, uParam0))
				{
					switch (func_95(&Local_16))
					{
						case 0:
							func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "start_matchmaking");
							func_97(&Local_16, 0);
							func_53(&Local_16, 3);
							break;
						case 1:
							func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "start_matchmaking");
							func_97(&Local_16, 0);
							func_53(&Local_16, 4);
							break;
						case 2:
							func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "exit");
							func_97(&Local_16, 0);
							func_53(&Local_16, 8);
							break;
					}
				}
				Jump @968; //curOff = 591
				if (func_98() || func_99())
				{
					if (func_69(&Local_16, 5))
					{
						func_92(&Local_16);
					}
					if (Local_16.f_99)
					{
						func_100(&Local_16);
					}
				}
				if (func_98() && !func_69(&Local_16, 13))
				{
					func_96(&Local_16, "rdro_gamemode_transition_sounds", "landscape_to_lobby");
					func_57(&Local_16, 13, 1);
				}
				if (func_101(1048576))
				{
					func_87(1048576);
					func_53(&Local_16, 8);
				}
				func_102(&Local_16, uParam0);
				Jump @968; //curOff = 719
				if (func_103(uParam0, &Local_16))
				{
					if (func_104(&Local_16, uParam0))
					{
						func_53(&Local_16, 5);
					}
					else
					{
						func_53(&Local_16, 0);
					}
				}
				Jump @968; //curOff = 761
				func_105(&Local_16, uParam0);
				Jump @968; //curOff = 773
				switch (func_106())
				{
					case 7:
						func_57(&Local_16, 6, 1);
						func_53(&Local_16, 0);
						break;
					case 2:
					case 4:
					case 5:
						func_90(6);
						break;
					case 3:
					case 8:
						func_53(&Local_16, 8);
						break;
				}
				Jump @968; //curOff = 859
				func_107(&Local_16, uParam0);
				Jump @968; //curOff = 870
				if (func_108(&Local_16, uParam0))
				{
					func_57(&Local_16, 6, 0);
					func_109(uParam0, 0);
					func_110(&Local_16, func_79(func_62(&Local_16)));
					func_51(&Local_16, 0);
					func_57(&Local_16, 3, 0);
					func_53(&Local_16, 0);
					func_57(&Local_16, 14, 0);
					func_111(uParam0, 0);
					enable_control_action(0, -867103143, true);
				}
			}
			default:
				break;
	}
}

void func_38(var uParam0)
{
	if (func_112() == func_62(&Local_16))
	{
		func_113(-1);
	}
	if (!func_69(&Local_16, 6))
	{
		func_114(&Local_16);
		clear_ped_tasks(Global_34, 1, 0);
		func_115(0);
	}
	else if (func_116(&Local_16) == 0)
	{
		func_115(0);
	}
	func_82(&Local_16, 0);
	func_117(&Local_16);
	func_118(&Local_16);
	func_119(&Local_16, 0);
	func_87(2048);
	func_120(uParam0, &Local_16);
	func_121(&Local_16);
	func_92(&Local_16);
	func_100(&Local_16);
	func_122(&Local_16);
	func_123(1);
	_0x4b05b97ba46f419d(1);
	func_7(uParam0);
	func_124(736);
	func_124(737);
	func_110(&Local_16, func_79(func_62(&Local_16)));
}

int func_39(var uParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	if (func_125(2))
	{
		StringCopy(sParam1, "INTRO_FLOW_REQUESTED", 32);
		return 1;
	}
	if (is_ped_dead_or_dying(player_ped_id(), true) || is_ped_injured(player_ped_id()))
	{
		StringCopy(sParam1, "IS_PED_DEAD_OR_DYING", 32);
		return 1;
	}
	iVar0 = func_62(&Local_16);
	if (func_49(iVar0))
	{
		fVar1 = func_126(func_64(iVar0), Global_35);
		if (fVar1 >= ((*Global_1835011)[iVar0]->f_61 * (*Global_1835011)[iVar0]->f_61) && !func_127(&((*Global_1835011)[iVar0]->f_30), 32768))
		{
			StringCopy(sParam1, "OVER_DISATNCE", 32);
			return 1;
		}
	}
	if (does_script_exist("net_mc_vs_mission_intro"))
	{
		if (network_is_script_active("net_mc_vs_mission_intro", -1, true, 0))
		{
			StringCopy(sParam1, "lobby is active", 32);
			return 1;
		}
	}
	if (func_128(&Local_16))
	{
		StringCopy(sParam1, "Request via gvo", 32);
		return 1;
	}
	return 0;
}

void func_40(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_57(&Local_16, 4, 1);
			break;
		case 1:
			func_129(uParam0);
			func_130(uParam0);
			break;
	}
}

void func_41(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_57(&Local_16, 4, 0);
			break;
	}
}

bool func_42(var uParam0, int iParam1)
{
	return &(uParam0->f_3[iParam1]);
}

int func_43(var uParam0)
{
	return uParam0->f_23;
}

void func_44(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

void func_45(var uParam0, int iParam1, bool bParam2)
{
	if (func_46(uParam0->f_2, iParam1) == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		func_131(&(uParam0->f_2), iParam1);
	}
	else
	{
		func_132(&(uParam0->f_2), iParam1);
	}
}

bool func_46(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

void func_47(bool bParam0)
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

var func_48(var uParam0)
{
	return uParam0->f_25;
}

bool func_49(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_50(int iParam0)
{
	iParam0->f_181.f_9 = 0;
	iParam0->f_181.f_8 = 0;
	StringCopy(&(iParam0->f_181), "", 32);
	StringCopy(&(iParam0->f_181.f_4), "", 32);
}

void func_51(int iParam0, int iParam1)
{
	if (iParam0->f_68 == iParam1)
	{
		return;
	}
	iParam0->f_68 = iParam1;
}

void func_52(var uParam0, int iParam1)
{
	uParam0->f_65 = iParam1;
}

void func_53(int iParam0, int iParam1)
{
	if (iParam0->f_66 == iParam1)
	{
		return;
	}
	iParam0->f_66 = iParam1;
}

char[] func_54(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "script@MPSTORY@MPCLAY2@INT_LOOPS@session_screen_rhodes";
		case 10:
			return "script@MPSTORY@MPCLAY2@INT_LOOPS@session_screen_valentine";
		case 11:
			return "script@MPSTORY@MPCLAY2@INT_LOOPS@session_screen_blackwater";
		case 12:
			return "script@MPSTORY@MPCLAY2@INT_LOOPS@session_screen_tumbleweed";
		case 13:
			return "script@MPSTORY@MPGVO1@INT_LOOPS@session_screen";
		case 14:
			return "script@MPSTORY@MPGVO2@INT_LOOPS@session_screen";
		case 15:
			return "script@MPSTORY@MPGVO3@INT_LOOPS@session_screen";
		case 16:
			return "script@MPSTORY@MPOUT1@INT@session_screen";
		case 17:
			return "script@MPSTORY@MPOUT2@INT@session_screen";
		case 21:
			return "script@MPSTORY@MPPOUT3@INT@session_screen";
		case 22:
			return "script@MPSTORY@MPPOUT4@INT@session_screen";
		case 18:
			return "script@MPSTORY@MPGUN1@INT_LOOPS@session_screen";
		case 19:
			return "script@MPSTORY@MPGUN2@INT_LOOPS@session_screen";
		case 23:
			return "script@MPSTORY@MPGUN3@INT@session_screen";
		case 24:
			return "script@MPSTORY@MPGUN4@INT@session_screen";
		case 20:
			return "script@MPSTORY@MPREV1@INT_LOOPS@session_screen";
		case 25:
			return "script@MPSTORY@MPREV2@INT_LEADIN@session_screen";
		default:
			break;
	}
	return "";
}

void func_55(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	uParam0->f_169.f_2 = sParam1;
	func_133(uParam0, 4, 1);
}

bool func_56(int iParam0)
{
	return (iParam0 >= 9 && iParam0 <= 12);
}

void func_57(int* iParam0, int iParam1, bool bParam2)
{
	if (func_46(*iParam0, iParam1) == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		func_131(iParam0, iParam1);
	}
	else
	{
		func_132(iParam0, iParam1);
	}
}

bool func_58(int iParam0, int iParam1)
{
	if (!func_49(iParam1))
	{
		return false;
	}
	if (!func_135(&(iParam0->f_1), func_134(iParam1), -1, -1, 3))
	{
		return false;
	}
	iParam0->f_1.f_53 = { func_136(iParam1) };
	return true;
}

void func_59(int iParam0, var uParam1)
{
	iParam0->f_81 = uParam1;
}

void func_60(int iParam0, int iParam1)
{
	iParam0->f_67 = iParam1;
}

bool func_61(int iParam0)
{
	return true;
}

int func_62(int iParam0)
{
	return iParam0->f_65;
}

bool func_63(int iParam0, int iParam1, float fParam2)
{
	if (_does_volume_exist(*iParam1))
	{
		_delete_volume(*iParam1);
	}
	iVar0 = 1;
	switch (iParam0)
	{
		case 13:
			iVar1[0] = _create_volume_box(-5534.267f, -2922.495f, -1.138973f, 0f, 0f, 25f, 11.5f, 8f, 4f);
			iVar1[1] = _create_volume_box(-5530.571f, -2925.733f, -1.100101f, -1E-06f, 0f, 25f, 7.5f, 17f, 4f);
			iVar0 = 2;
			break;
		case 14:
			iVar1[0] = _create_volume_box(-610.5784f, -28.02551f, 85.96289f, 0f, 0f, 20f, 11f, 10f, 7f);
			iVar1[1] = _create_volume_box(-604.8222f, -25.74674f, 86.09907f, 0f, 0f, 20.42736f, 8.209583f, 13.92787f, 4f);
			iVar0 = 2;
			break;
		case 15:
			iVar1[0] = _create_volume_sphere(-2689.728f, -2180.124f, 79.55766f, 0f, 0f, 0f, 11f, 11f, 11f);
			break;
		case 18:
			iVar1[0] = _create_volume_sphere(-1934.125f, -1415.843f, 106f, 0f, 0f, 0f, 20f, 20f, 20f);
			break;
		case 19:
			iVar1[0] = _create_volume_box(2946.162f, 781.5414f, 52.10509f, 0f, 0f, -51.24265f, 16f, 14f, 5f);
			break;
		case 23:
			iVar1[0] = _create_volume_sphere(134.4836f, 162.8693f, 111.2966f, 0f, 0f, 0f, 16f, 16f, 16f);
			break;
		case 24:
			iVar1[0] = _create_volume_box(-4785.134f, -2723.821f, -13.18157f, 0f, 0f, 0f, 22f, 10f, 13f);
			break;
		case 16:
			iVar1[0] = _create_volume_box(1179.889f, -182.5767f, 100f, 0f, 0f, 11.12833f, 15f, 19f, 7f);
			break;
		case 17:
			iVar1[0] = _create_volume_box(302.3684f, 1293.414f, 197.4161f, 0f, 0f, 0f, 25f, 19f, 7f);
			break;
		case 21:
			iVar1[0] = _create_volume_sphere(-1505.026f, -789.1925f, 102.3174f, 0f, 0f, 0f, 10f, 10f, 10f);
			break;
		case 22:
			iVar1[0] = _create_volume_box(2691.341f, -1117.55f, 52.21643f, 0f, 0f, 0f, 28f, 20f, 7f);
			break;
		case 20:
			iVar1[0] = _create_volume_sphere(-3849.203f, -3025.146f, -7.923075f, 0f, 0f, 20.68501f, 10.99867f, 7.910746f, 10f);
			break;
		case 25:
			iVar1[0] = _create_volume_box(-1203.146f, -1953.965f, 41.06992f, 0f, 0f, 62.99999f, 19f, 9f, 10f);
			break;
		case 9:
			iVar1[0] = _create_volume_sphere(1141.434f, -1384.818f, 64f, 0f, 0f, 0f, 10f, 10f, 10f);
			break;
		case 10:
			iVar1[0] = _create_volume_sphere(-443.1747f, 505.624f, 96.55238f, 0f, 0f, 48.08072f, 14.79244f, 13.19966f, 11f);
			break;
		case 11:
			iVar1[0] = _create_volume_sphere(-1990.893f, -1370.456f, 115.6611f, 0f, 0f, 0f, 11f, 11f, 11f);
			break;
		case 12:
			iVar1[0] = _create_volume_sphere(-5571.527f, -2577.124f, -8.26538f, 0f, 0f, 0f, 16f, 16f, 16f);
			break;
		default:
			return false;
	}
	iVar5 = 0;
	while (iVar5 < iVar1)
	{
		iVar4 = &iVar1[iVar5];
		if (_does_volume_exist(iVar4))
		{
			vVar6 = { _0x3e2a25b2416dd67e(iVar4) };
			vVar6 = { vVar6 * Vector(fParam2, fParam2, fParam2) };
			_0xa46e98bdc407e23d(iVar4, vVar6);
		}
		iVar5++;
	}
	if (iVar0 == 1)
	{
		*iParam1 = &iVar1[0];
	}
	else
	{
		*iParam1 = _create_volume_aggregate();
		if (_does_volume_exist(*iParam1))
		{
			iVar5 = 0;
			while (iVar5 < iVar0)
			{
				if (_does_volume_exist(&(iVar1[iVar5])))
				{
					_0x6e0d3c3f828da773(*iParam1, &(iVar1[iVar5]));
				}
				iVar5++;
			}
		}
	}
	return true;
}

Vector3 func_64(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

bool func_65(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_19 >= 2)
	{
		return false;
	}
	if (!_does_volume_exist(*iParam1))
	{
		return false;
	}
	uParam0->f_12[uParam0->f_19] = 0;
	uParam0->f_12[uParam0->f_19]->f_1 = *iParam1;
	uParam0->f_12[uParam0->f_19]->f_2 = iParam2;
	uParam0->f_19++;
	return true;
}

bool func_66(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 24:
			*uParam1 = { -4808.043f, -2710.505f, -13.56443f };
			*fParam2 = 31f;
			return true;
		case 19:
			*uParam1 = { 2945.94f, 777.777f, 52.595f };
			*fParam2 = 12f;
			return true;
		case 14:
			*uParam1 = { -605.29f, -26.549f, 83.642f };
			*fParam2 = 8f;
			return true;
		default:
			break;
	}
	return false;
}

void func_67(int iParam0, float fParam1, vector3 vParam2)
{
	iParam0->f_191 = 1;
	iParam0->f_192 = fParam1;
	iParam0->f_193 = { vParam2 };
}

void func_68(int iParam0)
{
	if (func_81(iParam0) != 0)
	{
		disable_control_action(0, -484677055, true);
	}
}

bool func_69(int iParam0, int iParam1)
{
	return func_46(*iParam0, iParam1);
}

void func_70(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar1))
		{
		}
		else
		{
			set_player_invisible_locally(iVar1, false);
			iVar2 = _0xf49f14462f0ae27c(iVar1);
			if (does_entity_exist(iVar2))
			{
				_0xff9965c47fa404da(iVar2, false);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_101.f_33)
	{
		if (!does_entity_exist(&(iParam0->f_101[iVar0])))
		{
		}
		else
		{
			_0xff9965c47fa404da(&(iParam0->f_101[iVar0]), false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_101.f_67)
	{
		if (!does_entity_exist(&(iParam0->f_101.f_34[iVar0])))
		{
		}
		else
		{
			_0xff9965c47fa404da(&(iParam0->f_101.f_34[iVar0]), false);
		}
		iVar0++;
	}
}

void func_71()
{
	if (_get_wanted_intensity_for_player(player_id()) > 0)
	{
		if (func_137())
		{
			func_138();
		}
		func_139();
	}
}

bool func_72(int iParam0)
{
	return iParam0->f_191;
}

Vector3 func_73(int iParam0)
{
	return iParam0->f_193;
}

var func_74(int iParam0)
{
	return iParam0->f_192;
}

void func_75(int iParam0)
{
	iVar0 = 0;
	if (iParam0->f_181.f_8 || iParam0->f_181.f_9)
	{
		if (_0xd9130842d7226045(&(iParam0->f_181), 0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 && iParam0->f_181.f_8)
	{
		play_sound_frontend(&(iParam0->f_181.f_4), &(iParam0->f_181), true, 0);
		iParam0->f_181.f_9 = 0;
		iParam0->f_181.f_8 = 0;
	}
}

void func_76(int iParam0)
{
	if (!func_69(iParam0, 10) && func_69(iParam0, 8))
	{
		iVar0 = func_62(iParam0);
		if (func_49(iVar0))
		{
			StringCopy(&cVar1, "", 64);
			if (func_140(iVar0, &cVar1))
			{
				StringCopy(&cVar9, "", 64);
				if (func_141(iVar0, &cVar9))
				{
					iVar17 = get_hash_key(&cVar9);
					if (_does_streamed_txd_exist(iVar17))
					{
						_request_streamed_txd(iVar17, false);
						if (_has_streamed_txd_loaded(iVar17))
						{
							if (_databinding_is_data_id_valid(iParam0->f_88.f_4))
							{
								_databinding_write_data_string(iParam0->f_88.f_4, &cVar1);
							}
							if (_databinding_is_data_id_valid(iParam0->f_88.f_5))
							{
								_databinding_write_data_string(iParam0->f_88.f_5, &cVar9);
							}
							func_57(iParam0, 10, 1);
						}
					}
					else
					{
						func_57(iParam0, 10, 1);
					}
				}
				else
				{
					func_57(iParam0, 10, 1);
				}
			}
			else
			{
				func_57(iParam0, 10, 1);
			}
		}
		else
		{
			func_57(iParam0, 10, 1);
		}
	}
	if (!func_69(iParam0, 9))
	{
		if (!func_69(iParam0, 8))
		{
		}
		else
		{
			sVar19 = func_142(iParam0->f_1.f_45, &iVar18);
			switch (iVar18)
			{
				case 1:
					break;
				case 0:
				case 3:
				case 4:
					func_143();
					break;
				case 5:
					if (iParam0->f_100 <= 0)
					{
						iParam0->f_100 = absi(get_cloud_time_as_int());
					}
					else if (absi((get_cloud_time_as_int() - iParam0->f_100)) >= 10)
					{
						func_143();
						iParam0->f_100 = 0;
					}
					break;
				case 2:
					if (_databinding_is_data_id_valid(iParam0->f_88.f_7))
					{
						_databinding_write_data_string(iParam0->f_88.f_7, sVar19);
					}
					func_57(iParam0, 9, 1);
					break;
			}
		}
	}
	switch (func_144(iParam0))
	{
		case 0:
			func_57(iParam0, 11, 0);
			if (!func_145(iParam0))
			{
				func_146(iParam0, 6);
				return;
			}
			func_146(iParam0, 1);
			break;
		case 1:
			iVar21 = func_62(iParam0);
			if (func_49(iVar21))
			{
				sVar20 = func_147(&((*Global_1835011)[iVar21]->f_42));
			}
			if (_databinding_is_data_id_valid(iParam0->f_88.f_2))
			{
				_databinding_write_data_string(iParam0->f_88.f_2, sVar20);
			}
			if (_databinding_is_data_id_valid(iParam0->f_88.f_3))
			{
				iVar22 = iParam0->f_1.f_26;
				if (iVar22 == -1759663922)
				{
					_databinding_write_data_string(iParam0->f_88.f_3, _create_var_string(2, "PM_SCR_MPPRG_COOP"));
				}
				else
				{
					_databinding_write_data_string(iParam0->f_88.f_3, _create_var_string(2, func_148(iVar22)));
				}
			}
			if (_databinding_is_data_id_valid(iParam0->f_88.f_8))
			{
				_databinding_write_data_string(iParam0->f_88.f_8, _create_var_string(2, "PLAYER_RANGE", iParam0->f_1.f_32, iParam0->f_1.f_33));
			}
			func_57(iParam0, 11, 1);
			func_146(iParam0, 2);
			break;
		case 2:
			if (func_81(&Local_16) == 0)
			{
				return;
			}
			if (func_149(iParam0))
			{
				if (func_150())
				{
					func_151(&(iParam0->f_75[3]), 0);
					func_146(iParam0, 3);
				}
				else
				{
					func_146(iParam0, 6);
				}
			}
			break;
		case 3:
			func_151(&(iParam0->f_75[3]), 1);
			func_146(iParam0, 4);
			break;
		case 4:
			if (!func_149(iParam0))
			{
				func_151(&(iParam0->f_75[3]), 0);
				func_146(iParam0, 5);
			}
			break;
		case 5:
			func_146(iParam0, 6);
			break;
		case 6:
			func_151(&(iParam0->f_75[3]), 1);
			func_97(iParam0, 0);
			func_100(iParam0);
			func_146(iParam0, 0);
			break;
	}
}

void func_77(int iParam0)
{
	if (_does_anim_scene_exist(iParam0->f_169.f_3))
	{
		func_133(iParam0, 1, _is_anim_scene_started(iParam0->f_169.f_3, false));
	}
	switch (func_152(iParam0))
	{
		case 0:
			if (!func_153(iParam0, 4))
			{
				return;
			}
			func_133(iParam0, 4, 0);
			func_133(iParam0, 2, 0);
			func_154(iParam0, 1);
			break;
		case 1:
			iParam0->f_169.f_3 = _create_anim_scene(iParam0->f_169.f_2, 1, 0, false, true);
			if (!_does_anim_scene_exist(iParam0->f_169.f_3))
			{
				func_154(iParam0, 9);
				return;
			}
			func_154(iParam0, 2);
			break;
		case 2:
			if (!_does_anim_scene_exist(iParam0->f_169.f_3))
			{
				func_154(iParam0, 9);
				return;
			}
			if (!_is_anim_scene_loaded(iParam0->f_169.f_3, true, false) || !_is_anim_scene_metadata_loaded(iParam0->f_169.f_3, false))
			{
				if (!_is_anim_scene_loading(iParam0->f_169.f_3, true))
				{
					reset_anim_scene(iParam0->f_169.f_3, 0);
					load_anim_scene(iParam0->f_169.f_3);
				}
				return;
			}
			func_133(iParam0, 2, 1);
			func_154(iParam0, 3);
			break;
		case 3:
			if (!func_153(iParam0, 0))
			{
				return;
			}
			func_133(iParam0, 0, 0);
			func_154(iParam0, 4);
			break;
		case 4:
			start_anim_scene(iParam0->f_169.f_3);
			func_154(iParam0, 5);
			break;
		case 5:
			if (func_153(iParam0, 3))
			{
				func_133(iParam0, 3, 0);
				func_154(iParam0, 6);
			}
			break;
		case 6:
			_delete_anim_scene(iParam0->f_169.f_3);
			func_154(iParam0, 7);
			break;
		case 7:
			if (!_does_anim_scene_exist(iParam0->f_169.f_3))
			{
				func_154(iParam0, 8);
				return;
			}
			if (!_is_anim_scene_started(iParam0->f_169.f_3, false))
			{
				func_154(iParam0, 8);
				return;
			}
			break;
		case 8:
			iParam0->f_169.f_3 = -1;
			func_133(iParam0, 4, 1);
			func_154(iParam0, 0);
			break;
		case 9:
			func_154(iParam0, 0);
			break;
	}
}

bool func_78(int iParam0)
{
	return func_69(iParam0, 12);
}

char* func_79(int iParam0)
{
	return "mp@freemode_cams@CoopMissionTriggers";
}

bool func_80(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (_0xaa235e2f2c09e952(sParam0))
	{
		return true;
	}
	if (!_0x595550376b7ea230(sParam0))
	{
		_0x1b3c2d961f5fc0e1(sParam0);
	}
	return false;
}

int func_81(int iParam0)
{
	return iParam0->f_66;
}

void func_82(int* iParam0, bool bParam1)
{
	func_57(iParam0, 7, bParam1);
	if (bParam1)
	{
		func_155(iParam0);
	}
	else
	{
		func_156(iParam0);
	}
}

bool func_83(var uParam0)
{
	return func_18(uParam0, 2);
}

void func_84(var uParam0, bool bParam1)
{
	func_157(uParam0, 2, bParam1);
}

bool func_85(var uParam0, int iParam1)
{
	if (func_158(255))
	{
		return true;
	}
	if (!_0xd6f6acf4392187fb(Global_1296859->f_15))
	{
		return true;
	}
	if (Global_1296859->f_16 < 0 || Global_1296859->f_16 >= 32)
	{
		return true;
	}
	if (!&Global_1296859->f_22[Global_1296859->f_16])
	{
		return true;
	}
	if (is_ped_injured(Global_1296859->f_8))
	{
		return true;
	}
	if (func_88() || func_89())
	{
		func_90(7);
		return true;
	}
	if (func_161(func_159(func_62(iParam1)), func_160(Global_1296859->f_16)) != 0)
	{
		func_90(3);
		return true;
	}
	if (func_162(func_62(iParam1)))
	{
		func_90(2);
		return true;
	}
	if (func_163(uParam0) > iParam1->f_1.f_33)
	{
		func_90(1);
		return true;
	}
	if (!func_164(func_62(iParam1)))
	{
		return true;
	}
	if (func_166(func_165()))
	{
		return true;
	}
	if (func_167())
	{
		return true;
	}
	if (func_168())
	{
		return true;
	}
	if (func_169())
	{
		return true;
	}
	if (_does_thread_exist(Global_265377->f_124745) && is_thread_active(Global_265377->f_124745, false))
	{
		return true;
	}
	if (_0x139efb0a71dd9011())
	{
		return true;
	}
	if (is_ped_dead_or_dying(player_ped_id(), true) || is_ped_injured(player_ped_id()))
	{
		return true;
	}
	if (is_ped_falling(player_ped_id()) || _0x3e592d0486dec0f6(player_ped_id()))
	{
		return true;
	}
	if (func_89() || func_88())
	{
		return true;
	}
	return false;
}

bool func_86(var uParam0, int iParam1)
{
	switch (func_170(iParam1))
	{
		case 0:
			func_171();
			func_111(uParam0, 1);
			func_109(uParam0, 1);
			func_84(uParam0, 1);
			if (!is_string_null_or_empty(func_79(func_62(iParam1))))
			{
				func_172(&Local_16);
			}
			func_123(0);
			task_stand_still(Global_34, -1);
			func_173(1);
			func_174();
			func_175(&Local_16, "RDRO_COOP_Matchmaking_Sounds");
			func_57(iParam1, 3, 1);
			func_57(&Local_16, 13, 0);
			func_176(iParam1, 1);
			break;
		case 1:
			if (get_entity_speed(player_ped_id()) < 0.5f)
			{
				func_176(iParam1, 2);
			}
			break;
		case 2:
			bVar0 = true;
			if (!func_177(&(iParam1->f_82)))
			{
				func_178(&(iParam1->f_82), 0);
			}
			if (!func_69(iParam1, 11))
			{
				bVar0 = false;
			}
			if (!func_179())
			{
				bVar0 = false;
			}
			if (func_180(&(iParam1->f_82)) >= 10f)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_181(&(iParam1->f_82));
				func_176(iParam1, 3);
			}
			break;
		case 3:
			func_176(iParam1, 0);
			return true;
	}
	return false;
}

void func_87(int iParam0)
{
	func_182(&(Global_1572887->f_106.f_15), iParam0);
}

bool func_88()
{
	return (Global_1296851->f_2.f_1 == 2 || Global_1296851->f_2.f_1 == 1);
}

bool func_89()
{
	if (!_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		return false;
	}
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return false;
	}
	iVar51 = _0xd1bf325c8252a982(_0x901e0dc25080c8b9(player_id()), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = network_get_player_from_gamer_handle(Var0[iVar50]);
		if (!network_is_player_active(iVar52) || is_player_dead(iVar52))
		{
		}
		else if (func_183(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

void func_90(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	func_53(&Local_16, 7);
	func_184(&Local_16, iParam0);
}

void func_91(int iParam0, int iParam1)
{
	if (iParam0->f_72 == iParam1)
	{
		return;
	}
	iParam0->f_72 = iParam1;
}

void func_92(int* iParam0)
{
	func_57(iParam0, 5, 0);
	func_185(&(iParam0->f_75));
	if (func_186(iParam0->f_69))
	{
		func_187(1);
	}
}

bool func_93()
{
	return Global_1572887->f_266.f_84 != 0;
}

bool func_94(int iParam0, var uParam1)
{
	switch (func_188(iParam0))
	{
		case 0:
			func_174();
			func_189();
			func_7(uParam1);
			if (!func_177(&(iParam0->f_175)))
			{
				func_178(&(iParam0->f_175), 0);
			}
			if (!func_190(iParam0))
			{
				if (func_69(iParam0, 2))
				{
					if (func_177(&(iParam0->f_175)) && func_180(&(iParam0->f_175)) >= 5f)
					{
					}
					else
					{
						return false;
					}
				}
				else if (func_191(iParam0))
				{
					func_57(iParam0, 2, 1);
					return false;
				}
				else
				{
					return false;
				}
			}
			func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "game_to_prematchmaking");
			func_192();
			func_181(&(iParam0->f_175));
			func_82(iParam0, 1);
			func_119(iParam0, 1);
			func_57(iParam0, 2, 0);
			func_193(&Local_16, -1);
			func_194(iParam0->f_65, 0);
			func_195(uParam1, iParam0, 0);
			func_57(&Local_16, 14, 1);
			iParam0->f_86 = func_163(uParam1);
			func_91(iParam0, 1);
			break;
		case 1:
			if (is_screen_faded_out() && !is_screen_fading_in())
			{
				do_screen_fade_in(0);
			}
			iVar0 = func_163(uParam1);
			if (iParam0->f_86 != iVar0)
			{
				iParam0->f_86 = iVar0;
				if (iVar0 <= Local_16.f_1.f_33 && iVar0 >= Local_16.f_1.f_32)
				{
					func_195(uParam1, iParam0, 0);
				}
				else
				{
					func_90(1);
					func_91(iParam0, 0);
					func_92(iParam0);
					return true;
				}
			}
			_0xb3e8841f6bdaf83e();
			iVar1 = func_196(iParam0);
			switch (iVar1)
			{
				case -1:
					return false;
				case 0:
				case 1:
					if (func_112() == func_62(iParam0))
					{
						func_197(11);
					}
					else
					{
						func_197(10);
					}
					break;
			}
			func_7(uParam1);
			func_124(736);
			func_124(737);
			if (iVar1 == 3)
			{
				func_97(&Local_16, !func_149(&Local_16));
				func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "show_info");
				return false;
			}
			func_193(iParam0, iVar1);
			func_91(iParam0, 2);
			break;
		case 2:
			func_91(iParam0, 0);
			func_92(iParam0);
			return true;
	}
	return false;
}

int func_95(var uParam0)
{
	return uParam0->f_73;
}

int func_96(int iParam0, char* sParam1, char* sParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return 0;
	}
	if (iParam0->f_181.f_8)
	{
	}
	if (!func_175(iParam0, sParam1))
	{
		return 0;
	}
	StringCopy(&(iParam0->f_181.f_4), sParam2, 32);
	iParam0->f_181.f_8 = 1;
	return 1;
}

void func_97(int iParam0, bool bParam1)
{
	iParam0->f_99 = bParam1;
	if (bParam1)
	{
		func_198(&(iParam0->f_75[3]), _create_var_string(2, "INTERACT_TARGET_HIDE_INFO"));
	}
	else
	{
		func_198(&(iParam0->f_75[3]), _create_var_string(2, "INTERACT_TARGET_SHOW_INFO"));
	}
}

bool func_98()
{
	return Global_1071686->f_28662.f_65.f_42 != 0;
}

bool func_99()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

void func_100(int iParam0)
{
	iParam0->f_99 = 0;
	iParam0->f_98 = 0;
	if (_is_app_running(-696756762))
	{
		_close_app_by_hash(-696756762);
	}
}

bool func_101(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

int func_102(int iParam0, var uParam1)
{
	switch (func_188(iParam0))
	{
		case 0:
			func_174();
			if (!func_177(&(iParam0->f_175)))
			{
				func_178(&(iParam0->f_175), 0);
			}
			if (!func_190(iParam0))
			{
				if (func_69(iParam0, 2))
				{
					if (func_177(&(iParam0->f_175)) && func_180(&(iParam0->f_175)) >= 5f)
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_191(iParam0))
				{
					func_57(iParam0, 2, 1);
					return 0;
				}
				else
				{
					return 0;
				}
			}
			func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "game_to_prematchmaking");
			func_181(&(iParam0->f_175));
			func_97(&Local_16, 1);
			func_82(iParam0, 1);
			func_119(iParam0, 1);
			func_57(iParam0, 2, 0);
			func_193(&Local_16, -1);
			func_195(uParam1, iParam0, 2);
			func_199(2048);
			func_91(iParam0, 1);
			break;
		case 1:
			if (func_158(255))
			{
				if (is_screen_faded_out())
				{
					func_200(iParam0);
					return 0;
				}
				else
				{
					return 0;
				}
			}
			if (is_screen_faded_out() && !is_screen_fading_in())
			{
				do_screen_fade_in(0);
			}
			_0xb3e8841f6bdaf83e();
			iVar0 = func_196(iParam0);
			if (iVar0 == -1)
			{
				return 0;
			}
			if (iVar0 == 3)
			{
				func_97(&Local_16, !func_149(&Local_16));
				func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "show_info");
				return 0;
			}
			if (iVar0 == 2)
			{
				func_53(iParam0, 8);
				func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "exit");
				func_91(iParam0, 0);
				func_92(iParam0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_103(var uParam0, int iParam1)
{
	func_201(iParam1);
	func_96(iParam1, "rdro_gamemode_transition_sounds", "landscape_to_lobby");
	return true;
}

bool func_104(int iParam0, var uParam1)
{
	if (&Global_1296859 != Global_1296859->f_16)
	{
		return false;
	}
	iVar0 = 805306375;
	if (func_202(iParam0))
	{
		iVar0 |= 1024;
	}
	func_203(iParam0->f_1, iParam0->f_1.f_53, iVar0, 1, 0);
	func_204(2);
	return true;
}

int func_105(int iParam0, var uParam1)
{
	switch (func_205(iParam0))
	{
		case 0:
			if (!func_177(&(iParam0->f_178)))
			{
				func_178(&(iParam0->f_178), 0);
			}
			if (func_78(iParam0) && func_80(func_79(func_62(&Local_16))))
			{
				func_206(uParam1);
				if (func_190(iParam0))
				{
					if (_0xa2b1c7ef759a63ce() < 1f)
					{
						return 0;
					}
					func_118(iParam0);
				}
			}
			else if (func_207(&(iParam0->f_178)) < 3f)
			{
				return 0;
			}
			func_181(&(iParam0->f_178));
			func_51(iParam0, 1);
			break;
		case 1:
			func_208(6);
			switch (func_116(&Local_16))
			{
				case 0:
					func_209(iParam0->f_1, iParam0->f_1.f_53);
					break;
				case 1:
					iVar0 = 2;
					func_203(iParam0->f_1, iParam0->f_1.f_53, iVar0, 1, 0);
					break;
			}
			func_57(&Local_16, 6, 1);
			func_92(iParam0);
			func_51(iParam0, 2);
			break;
		case 2:
			func_208(6);
			switch (func_106())
			{
				case 7:
					func_51(iParam0, 3);
					return 0;
				case 2:
				case 4:
				case 5:
					func_51(iParam0, 4);
					return 0;
				case 3:
				case 8:
					func_53(&Local_16, 8);
					break;
			}
			if (is_control_just_pressed(2, 992265328))
			{
				func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "exit");
				func_51(iParam0, 5);
				return 0;
			}
			break;
		case 3:
			if (func_103(uParam1, &Local_16))
			{
				func_92(iParam0);
				func_51(&Local_16, 1);
				func_53(&Local_16, 0);
				return 1;
			}
			break;
		case 4:
			func_92(iParam0);
			func_51(&Local_16, 1);
			func_53(&Local_16, 8);
			return 1;
		case 5:
			func_210(1);
			func_123(1);
			func_92(iParam0);
			func_51(&Local_16, 1);
			func_53(&Local_16, 8);
			return 1;
	}
	return 0;
}

int func_106()
{
	return Global_1572887->f_360.f_7;
}

void func_107(int iParam0, var uParam1)
{
	switch (func_211(iParam0))
	{
		case 0:
			if (func_112() == func_62(iParam0))
			{
				func_192();
			}
			if (func_212(iParam0) == 0)
			{
				func_53(&Local_16, 0);
				return;
			}
			switch (func_212(iParam0))
			{
				case 1:
					if (func_163(uParam1) < iParam0->f_1.f_32)
					{
						sVar20 = "MP_COOP_GIVER_ALERT_SUB_POSSE_SIZE_SMALL";
						Var0.f_3.f_3 = 1;
						Var0.f_3 = 1976695487;
					}
					else if (func_163(uParam1) > iParam0->f_1.f_33)
					{
						sVar20 = "MP_COOP_GIVER_ALERT_SUB_POSSE_SIZE_HIGH";
					}
					else
					{
						func_53(&Local_16, 0);
						return;
					}
					break;
				case 2:
					sVar20 = "MP_COOP_GIVER_ALERT_SUB_COOLDOWN";
					break;
				case 3:
					switch (func_161(func_159(func_62(iParam0)), func_160(Global_1296859->f_16)))
					{
						case 1:
							sVar20 = "MP_COOP_GIVER_ALERT_SUB_HONOR_LOW";
							break;
						case 2:
							sVar20 = "MP_COOP_GIVER_ALERT_SUB_HONOR_HIGH";
							break;
					}
					break;
				case 7:
					sVar20 = "MP_COOP_GIVER_ALERT_IN_JAIL";
					break;
				case 4:
					sVar20 = "MP_COOP_GIVER_ALERT_SUB_LEADER";
					break;
				case 5:
					sVar20 = "MP_COOP_GIVER_ALERT_SUB_WANTED";
					break;
				case 6:
					sVar20 = "MP_COOP_GIVER_ALERT_SUB_MISSION_START_FAILED";
					break;
			}
			sVar19 = "GLOBAL_ALERT_ALT";
			Var0.f_7.f_3 = 1;
			Var0.f_7 = -2122634935;
			Var0.f_2 = 0;
			func_84(uParam1, 1);
			func_213(uParam1, Var0, sVar19, sVar20);
			func_214(iParam0, 1);
			break;
		case 1:
			if (!func_215(uParam1))
			{
				return;
			}
			iVar21 = func_216();
			if (iVar21 == -1577439368)
			{
				return;
			}
			switch (func_212(iParam0))
			{
				case 1:
					switch (iVar21)
					{
						case 2074623703:
							func_53(&Local_16, 2);
							break;
						case 1400745903:
							func_53(&Local_16, 8);
							break;
					}
					break;
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					switch (iVar21)
					{
						case 1400745903:
							func_53(&Local_16, 8);
							break;
					}
					break;
			}
			if (func_81(&Local_16) == 7)
			{
				func_53(&Local_16, 0);
			}
			func_120(uParam1, iParam0);
			break;
	}
}

bool func_108(int* iParam0, var uParam1)
{
	switch (func_217(iParam0))
	{
		case 0:
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(150);
				}
				return false;
			}
			if (func_158(255))
			{
			}
			func_218(&Local_16);
			func_118(&Local_16);
			func_92(iParam0);
			func_100(&Local_16);
			func_120(uParam1, &Local_16);
			func_181(&(iParam0->f_175));
			func_219(uParam1);
			if (func_220(player_ped_id()))
			{
				if (_0x4e76cb57222a00e5(player_ped_id()) == -1)
				{
					iVar4 = get_mount(player_ped_id());
					if (does_entity_exist(iVar4))
					{
						func_221(1, 1);
					}
				}
			}
			func_222(1);
			if (func_112() == func_62(iParam0))
			{
				func_223(iParam0, 3);
			}
			else if (func_224(func_62(iParam0), &vVar0, &fVar3))
			{
				func_223(iParam0, 2);
			}
			else
			{
				func_223(iParam0, 1);
			}
			break;
		case 3:
			if (!func_225(&vVar0))
			{
				func_223(iParam0, 1);
				return false;
			}
			func_226(vVar0, fVar3, -1082130432, -1082130432, 1, 1, 1);
			func_113(-1);
			func_223(iParam0, 4);
			break;
		case 2:
			func_224(func_62(iParam0), &vVar0, &fVar3);
			func_227(vVar0, fVar3, 1);
			func_223(iParam0, 4);
			break;
		case 1:
			fVar8 = 1E+17f;
			bVar10 = true;
			iVar11 = 0;
			if (_does_volume_exist(uParam1->f_12[iVar11]->f_1))
			{
				vVar18 = { _0xf70f00013a62f866(uParam1->f_12[iVar11]->f_1) };
				_0x5737199af2dc609f(uParam1->f_12[iVar11]->f_1, &vVar12, &vVar15);
				vVar12 = { vVar12 - vVar18 };
				vVar15 = { vVar15 - vVar18 };
				if (absf(vVar15.x) < fVar8)
				{
					fVar8 = vVar15.x;
				}
				if (absf(vVar15.y) < fVar8)
				{
					fVar8 = vVar15.y;
				}
				if (absf(vVar12.x) < fVar8)
				{
					fVar8 = vVar12.x;
				}
				if (absf(vVar12.y) < fVar8)
				{
					fVar8 = vVar12.y;
				}
				fVar8 = absf(fVar8);
				fVar9 = (fVar8 + 20f);
				vVar5 = { vVar18 };
			}
			else
			{
				bVar10 = false;
			}
			if (bVar10)
			{
				func_226(vVar5, 0f, fVar8, fVar9, 1, 1, 1);
			}
			else
			{
				func_228(1, 1);
			}
			func_223(iParam0, 4);
			break;
		case 4:
			if ((is_screen_fading_in() || is_screen_faded_in()) || !func_158(255))
			{
				func_119(&Local_16, 0);
				func_82(&Local_16, 0);
			}
			if (func_158(255))
			{
				return false;
			}
			func_57(iParam0, 4, 0);
			func_223(iParam0, 0);
			return true;
	}
	return false;
}

void func_109(var uParam0, bool bParam1)
{
	func_157(uParam0, 4, bParam1);
}

int func_110(int* iParam0, char* sParam1)
{
	func_57(iParam0, 12, 0);
	if (!_0xaa235e2f2c09e952(sParam1))
	{
		return 0;
	}
	_0x2412216fcc7b4e3e(sParam1);
	return 1;
}

void func_111(var uParam0, bool bParam1)
{
	func_157(uParam0, 3, bParam1);
}

int func_112()
{
	return Global_1211315->f_2;
}

void func_113(int iParam0)
{
	if (iParam0 == -1 && Global_1211315->f_2 != -1)
	{
		iVar0 = func_229((*Global_1835011)[Global_1211315->f_2]->f_1);
		if (func_230(iVar0))
		{
			func_231(Global_1211315->f_2, 1);
			func_232(Global_1211315->f_2, -1, 0, 1, 1, 0, 0);
			func_233(Global_1211315->f_2);
			func_234(Global_1211315->f_2);
		}
		Global_1211315->f_4 = { 0f, 0f, 0f };
		Global_1211315->f_3 = 0;
		func_192();
	}
	Global_1211315->f_9 = get_cloud_time_as_int();
	Global_1211315->f_2 = iParam0;
}

void func_114(int iParam0)
{
}

int func_115(bool bParam0)
{
	if (bParam0)
	{
		if (!_network_is_player_index_valid(player_id()))
		{
			return 0;
		}
		iVar0 = -1;
		iVar1 = _0x901e0dc25080c8b9(player_id());
		if (!_0xd6f6acf4392187fb(iVar1))
		{
			return 0;
		}
		iVar2 = _0x4be6c13a45cca8ec(iVar1);
		if (!_network_is_player_index_valid(iVar2))
		{
			return 0;
		}
		iVar0 = get_unique_int_for_player(iVar2);
		_0x4b05b97ba46f419d(0);
		if (network_is_in_mp_cutscene())
		{
		}
		else
		{
			network_set_in_mp_cutscene(true, true, iVar0, false);
		}
	}
	else
	{
		_0x4b05b97ba46f419d(1);
		if (!network_is_in_mp_cutscene())
		{
			return 1;
		}
		network_set_in_mp_cutscene(false, true, 32, true);
	}
	return 1;
}

int func_116(int iParam0)
{
	return iParam0->f_67;
}

void func_117(int iParam0)
{
	if (!is_string_null_or_empty(&(iParam0->f_181)))
	{
		_0x531a78d6bf27014b(&(iParam0->f_181));
	}
	func_50(iParam0);
}

int func_118(int iParam0)
{
	func_235(0, -1, 0);
	return 1;
}

void func_119(int* iParam0, bool bParam1)
{
	func_57(iParam0, 7, bParam1);
	if (!func_169() || bParam1)
	{
		set_entity_completely_disable_collision(player_ped_id(), bParam1, false);
		func_236(!bParam1, 540);
	}
}

void func_120(var uParam0, int iParam1)
{
	func_214(iParam1, 0);
	func_184(iParam1, 0);
	func_6(uParam0);
}

void func_121(int iParam0)
{
	if (!_does_anim_scene_exist(iParam0->f_169.f_3))
	{
	}
	_delete_anim_scene(iParam0->f_169.f_3);
}

void func_122(int* iParam0)
{
	func_57(iParam0, 8, 0);
	if (_databinding_is_data_id_valid(iParam0->f_88.f_1))
	{
		_databinding_write_data_bool(iParam0->f_88.f_1, 1);
	}
	if (_databinding_is_data_id_valid(iParam0->f_88))
	{
		_databinding_remove_data_entry(iParam0->f_88);
	}
}

void func_123(int iParam0)
{
	if (_0xaaded99a6b268a27() != iParam0)
	{
		Var0 = 1;
		Var0.f_1.f_4 = 10;
		Var0[0] = 15;
		_0x63246a24f5747510(iParam0, &Var0);
	}
}

void func_124(int iParam0)
{
	if (!func_237(iParam0))
	{
		return;
	}
	func_187(1);
}

bool func_125(int iParam0)
{
	return (Global_262153 && iParam0) != 0;
}

float func_126(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_127(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_128(int iParam0)
{
	return func_69(iParam0, 15);
}

void func_129(var uParam0)
{
	bVar0 = false;
	if (does_entity_exist(Global_1296859->f_8) && _is_ped_carrying(Global_1296859->f_8))
	{
		bVar0 = true;
	}
	else
	{
		iVar1 = _0xf49f14462f0ae27c(Global_1296859->f_10);
		if (does_entity_exist(iVar1) && !is_entity_dead(iVar1))
		{
			if (_is_ped_carrying(iVar1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		func_238(uParam0, "MI_STOW_WARN", 1);
	}
}

void func_130(var uParam0)
{
	if (func_137())
	{
		iVar0 = func_62(&Local_16);
		func_238(uParam0, _create_var_string(2, "MI_WANTED_WARN", (*Global_1835011)[iVar0]->f_28, func_239()), 1);
	}
}

void func_131(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_132(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_133(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_131(&(iParam0->f_169.f_1), iParam1);
	}
	else
	{
		func_132(&(iParam0->f_169.f_1), iParam1);
	}
}

int func_134(int iParam0)
{
	if (!func_49(iParam0))
	{
		return 0;
	}
	if (func_240() == -1)
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_51;
}

bool func_135(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_241(uParam0, 4194304);
		return true;
	}
	iVar0 = func_242(iParam1);
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
	func_243(Global_265377->f_4[iVar0]);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_244(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_245(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_246(&(Global_265377->f_63755[iVar0]));
	vVar2 = { func_247(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_136(iVar1) };
	}
	else if (func_248(uParam0->f_17))
	{
		uParam0->f_53 = { func_250(func_249(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_251(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_252(uParam0->f_16) };
		if (!func_166(uParam0->f_53))
		{
			uParam0->f_53 = { func_254(func_253(uParam0->f_21.f_2)) };
		}
	}
	func_255(uParam0);
	func_241(uParam0, 4194304);
	return true;
}

struct<2> func_136(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_256();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_137()
{
	return (func_257(Global_1296859->f_10, 1, 0, 1) && func_239() > 0);
}

void func_138()
{
	if (!_0x424b17a7dc5c90bc(Global_1296859->f_10))
	{
		return;
	}
	iVar0 = func_239();
	if (iVar0 > 0)
	{
		func_258(iVar0, 0, -142743235, 0);
	}
}

void func_139()
{
	iVar0 = player_id();
	_0x062b4a4a3396351d(iVar0);
	func_259();
}

bool func_140(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
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
		case 24:
		case 25:
		default:
			break;
	}
	return false;
	StringCopy(sParam1, "image", 64);
	return true;
}

bool func_141(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 9:
		default:
			return false;
			StringCopy(sParam1, "map_card_story_clay2_rhodes", 64);
		case 11:
			StringCopy(sParam1, "map_card_story_clay2_blackwater", 64);
			break;
		case 12:
			StringCopy(sParam1, "map_card_story_clay2_tumbleweed", 64);
			break;
		case 10:
			StringCopy(sParam1, "map_card_story_clay2_valentine", 64);
			break;
		case 13:
			StringCopy(sParam1, "map_card_story_gunvout_1", 64);
			break;
		case 14:
			StringCopy(sParam1, "map_card_story_gunvout_2", 64);
			break;
		case 15:
			StringCopy(sParam1, "map_card_story_gunvout_3", 64);
			break;
		case 16:
			StringCopy(sParam1, "map_card_story_outlaw_1", 64);
			break;
		case 17:
			StringCopy(sParam1, "map_card_story_outlaw_2", 64);
			break;
		case 18:
			StringCopy(sParam1, "map_card_story_gunslinger_1", 64);
			break;
		case 19:
			StringCopy(sParam1, "map_card_story_gunslinger_2", 64);
			break;
		case 20:
			StringCopy(sParam1, "map_card_story_revenge_1", 64);
			break;
		case 21:
			StringCopy(sParam1, "map_card_story_outlaw_3", 64);
			break;
		case 22:
			StringCopy(sParam1, "map_card_story_outlaw_4", 64);
			break;
		case 23:
			StringCopy(sParam1, "map_card_story_gunslinger_3", 64);
			break;
		case 24:
			StringCopy(sParam1, "map_card_story_gunslinger_4", 64);
			break;
		case 25:
			StringCopy(sParam1, "map_card_story_revenge_2", 64);
			break;
	}
	return true;
}

char* func_142(int iParam0, int iParam1)
{
	if (Global_265377->f_124386.f_130 > 0 && Global_265377->f_124386.f_130 != iParam0)
	{
		*iParam1 = 5;
		return "";
	}
	switch (Global_265377->f_124386)
	{
		case 0:
			if (!_0x2d5dc831176d0114(iParam0))
			{
				func_260(1);
			}
			else
			{
				_0x68103e2247887242();
				func_260(1);
			}
			break;
		case 1:
			ugc_request_cached_description(iParam0);
			func_260(2);
			break;
		case 2:
			if (!_0xebfa8d50addc54c4(iParam0))
			{
				*iParam1 = 1;
				return "";
			}
			if (_0x162c23ca83ed0a62(iParam0))
			{
				func_260(3);
			}
			else
			{
				func_260(0);
				*iParam1 = 3;
				return "";
			}
			break;
		case 3:
			sVar0 = ugc_get_cached_description(iParam0, 512);
			_0x5a34cd9c3c5bec44(iParam0);
			func_260(0);
			*iParam1 = 2;
			return sVar0;
	}
	*iParam1 = 1;
	return "";
}

void func_143()
{
	func_260(0);
	Global_265377->f_124386.f_130 = 0;
}

int func_144(int iParam0)
{
	return iParam0->f_98;
}

bool func_145(int iParam0)
{
	if (func_69(iParam0, 8))
	{
		return true;
	}
	iParam0->f_88 = _databinding_add_data_container_from_path("", "lobby_data");
	if (!_databinding_is_data_id_valid(iParam0->f_88))
	{
		return false;
	}
	iParam0->f_88.f_1 = _databinding_add_data_bool(iParam0->f_88, "rm_host_visibility", 0);
	iParam0->f_88.f_2 = _databinding_add_data_string(iParam0->f_88, "main_title", "");
	iParam0->f_88.f_3 = _databinding_add_data_string(iParam0->f_88, "sub_title", "");
	iParam0->f_88.f_4 = _databinding_add_data_string(iParam0->f_88, "details_photo_image", "");
	iParam0->f_88.f_5 = _databinding_add_data_string(iParam0->f_88, "details_photo_dictionary", "");
	iParam0->f_88.f_9 = _databinding_add_data_string(iParam0->f_88, "dsFooter", "");
	iParam0->f_88 = _databinding_add_data_container_from_path("", "lobby_data");
	iParam0->f_88.f_6 = _databinding_add_data_container_from_path("", "lobby_details_data");
	if (_databinding_is_data_id_valid(iParam0->f_88.f_6))
	{
		iParam0->f_88.f_7 = _databinding_add_data_string(iParam0->f_88.f_6, "job_description", "");
		iParam0->f_88.f_8 = _databinding_add_data_string(iParam0->f_88.f_6, "playercount_requirement", "");
	}
	func_57(iParam0, 8, 1);
	return true;
}

void func_146(int iParam0, int iParam1)
{
	if (iParam0->f_98 == iParam1)
	{
		return;
	}
	iParam0->f_98 = iParam1;
}

char* func_147(var uParam0)
{
	return uParam0;
}

char* func_148(int iParam0)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
		case -318976023:
			return "UGC_MST_LGNDB";
		case 772881414:
			return "UGC_MST_MNSHN";
		case 603385332:
			return "UGC_MST_DEL";
		case 534981680:
			return "UGC_MST_ESCF";
		case -915869673:
			return "UGC_MST_TTYG";
		case -360644098:
			return "UGC_MST_TTYT";
		case 1520184724:
			return "UGC_MST_AFGPO";
		case -777132493:
			return "UGC_MST_PDR";
		case -163684180:
			return "UGC_MST_SOW";
		case -1649482077:
			return "UGC_MST_UIS";
		case -698288936:
			return "UGC_MST_PROT";
		case 909765192:
			return "UGC_MST_PDH";
		case 604251967:
			return "UGC_MST_FOU";
		case 1078150940:
			return "UGC_MST_AWIP";
		case 482206342:
			return "UGC_MST_LEG";
		default:
			break;
	}
	return "Invalid MISSION_SUB_TYPE";
}

bool func_149(int iParam0)
{
	return iParam0->f_99;
}

bool func_150()
{
	if (_launch_app_by_hash_with_entry(-696756762, 1392996949) == 0)
	{
		return true;
	}
	return false;
}

void func_151(int iParam0, bool bParam1)
{
	if (func_261(iParam0))
	{
		iVar0 = func_262(iParam0);
		if (_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
		{
			_uiprompt_set_enabled((*Global_1951255)[iVar0]->f_3, bParam1);
		}
	}
}

int func_152(int iParam0)
{
	return iParam0->f_169;
}

bool func_153(int iParam0, int iParam1)
{
	return func_46(iParam0->f_169.f_1, iParam1);
}

void func_154(int iParam0, int iParam1)
{
	iParam0->f_169 = iParam1;
}

void func_155(int* iParam0)
{
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar1 = int_to_playerindex(iVar4);
		if (!network_is_player_active(iVar1))
		{
		}
		else
		{
			iVar2 = get_player_ped(iVar1);
			if (!does_entity_exist(iVar2))
			{
			}
			else if (is_ped_injured(iVar2))
			{
			}
			else
			{
				if (func_220(iVar2))
				{
					iVar3 = func_263(iVar2);
					if (does_entity_exist(iVar3))
					{
						func_264(iParam0, &iVar3);
					}
				}
				if (is_ped_in_any_vehicle(iVar2, false))
				{
					iVar0 = get_vehicle_ped_is_in(iVar2, false);
					if (does_entity_exist(iVar0))
					{
						func_265(iParam0, &iVar0);
					}
				}
			}
		}
		iVar4++;
	}
}

void func_156(int* iParam0)
{
	iParam0->f_101.f_67 = 0;
	iParam0->f_101.f_33 = 0;
	iVar0 = func_266();
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (does_entity_exist(&(iParam0->f_101.f_34[iVar2])))
		{
			set_entity_visible(&(iParam0->f_101.f_34[iVar2]), true);
		}
		_copy_memory(iParam0->f_101.f_34[iVar2], &uVar1, 1);
		if (does_entity_exist(&(iParam0->f_101[iVar2])))
		{
			set_entity_visible(&(iParam0->f_101[iVar2]), true);
		}
		_copy_memory(iParam0->f_101[iVar2], &iVar0, 1);
		iVar2++;
	}
}

void func_157(var uParam0, int iParam1, bool bParam2)
{
	if (func_46(uParam0->f_1, iParam1) == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		func_131(&(uParam0->f_1), iParam1);
	}
	else
	{
		func_132(&(uParam0->f_1), iParam1);
	}
}

bool func_158(int iParam0)
{
	return func_267(1, iParam0);
}

int func_159(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_52;
}

int func_160(int iParam0)
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

int func_161(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 >= 8 && iParam0 < 8)
	{
		return 2;
	}
	else if (iParam1 <= 7 && iParam0 > 7)
	{
		return 1;
	}
	return 0;
}

bool func_162(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 13 && iParam0 <= 15)
	{
		return false;
	}
	if (func_268(iParam0))
	{
		if (!func_269(iParam0, &iVar0))
		{
			return false;
		}
	}
	else if (!func_270(iParam0, &iVar0))
	{
		return false;
	}
	iVar1 = _0x901e0dc25080c8b9(get_player_index());
	if (_0xd6f6acf4392187fb(iVar1))
	{
		if (_0x149a2751ab66ac02(iVar1) > 1)
		{
			iVar2 = _0x4be6c13a45cca8ec(iVar1);
			if (!_network_is_player_index_valid(iVar2))
			{
				return true;
			}
			iVar0 = (*Global_1056141)[iVar2]->f_15.f_23;
		}
	}
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar3 = absi((get_cloud_time_as_int() - iVar0));
	iVar4 = func_271(iParam0);
	if (func_268(iParam0))
	{
		iVar4 = func_272(iParam0);
	}
	return iVar3 < iVar4;
}

int func_163(var uParam0)
{
	if (_0xd6f6acf4392187fb(Global_1296859->f_15))
	{
		return _0x149a2751ab66ac02(Global_1296859->f_15);
	}
	return 1;
}

bool func_164(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_273((*Global_1835011)[iParam0]->f_1);
}

struct<2> func_165()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_274(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_274(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_166(struct<2> Param0)
{
	if (!func_275(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_276(Param0))
	{
		return false;
	}
	return true;
}

bool func_167()
{
	return func_277() >= 15;
}

bool func_168()
{
	return Global_1572887->f_106.f_75 != 1;
}

bool func_169()
{
	return Global_263042[&Global_1296859] > 2;
}

int func_170(var uParam0)
{
	return uParam0->f_85;
}

void func_171()
{
	func_278(128);
}

void func_172(int* iParam0)
{
	func_57(iParam0, 12, 1);
}

void func_173(bool bParam0)
{
	if (func_279())
	{
		Global_1958008 = 1;
	}
	if (func_280(-92416669))
	{
	}
	if (bParam0 && (Global_1940258->f_38 == -1016714371 || Global_1940258->f_38 == 332793555))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		Global_1940258->f_38 = -1569615261;
	}
}

void func_174()
{
	if (_get_number_of_references_of_script_with_name_hash(-4058091) > 0)
	{
		Global_1940311->f_12 = 1;
	}
}

bool func_175(int iParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (!is_string_null_or_empty(&(iParam0->f_181)) && !are_strings_equal(sParam1, &(iParam0->f_181)))
	{
		_0x531a78d6bf27014b(&(iParam0->f_181));
	}
	StringCopy(&(iParam0->f_181), sParam1, 32);
	iParam0->f_181.f_9 = 1;
	return true;
}

void func_176(int iParam0, int iParam1)
{
	if (iParam0->f_85 == iParam1)
	{
		return;
	}
	iParam0->f_85 = iParam1;
}

bool func_177(var uParam0)
{
	return func_281(*uParam0, 1);
}

void func_178(var uParam0, bool bParam1)
{
	if (bParam1 || !func_177(uParam0))
	{
		func_282(uParam0);
	}
}

bool func_179()
{
	if (_is_ped_carrying(Global_1296859->f_8))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_1296859->f_8);
		bVar0 = true;
	}
	else if (func_283(&iVar1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if ((does_entity_exist(iVar1) && is_entity_a_ped(iVar1)) && is_ped_a_player(get_ped_index_from_entity_index(iVar1)))
		{
			func_284(network_get_player_index_from_ped(get_ped_index_from_entity_index(iVar1)));
		}
		return false;
	}
	return true;
}

float func_180(var uParam0)
{
	if (!func_177(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_285(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_286() - uParam0->f_1);
}

void func_181(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_182(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_183(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

void func_184(int iParam0, int iParam1)
{
	if (iParam0->f_174 == iParam1)
	{
		return;
	}
	iParam0->f_174 = iParam1;
}

void func_185(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_287((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_186(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 == 0)
	{
		return false;
	}
	return (iVar0 == iParam0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

void func_187(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

int func_188(var uParam0)
{
	return uParam0->f_72;
}

void func_189()
{
	if (func_288())
	{
		Global_1915715->f_22504.f_1 = 0;
	}
}

bool func_190(int iParam0)
{
	if (!_does_anim_scene_exist(Global_1071686->f_28662.f_58.f_1) || !_is_anim_scene_started(Global_1071686->f_28662.f_58.f_1, false))
	{
		return false;
	}
	return true;
}

bool func_191(int iParam0)
{
	func_235(1, iParam0->f_65, 0);
	return true;
}

void func_192()
{
	Global_1211315->f_7 = 0;
}

void func_193(int iParam0, int iParam1)
{
	if (iParam0->f_73 == iParam1)
	{
		return;
	}
	iParam0->f_73 = iParam1;
}

void func_194(int iParam0, bool bParam1)
{
	if (!func_289(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 13:
			if (bParam1)
			{
				if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(682499315, 0, 0)))
				{
					_0x7c32191d9fb2bdea(_0x8e84119a23c16623(682499315, 0, 0));
				}
			}
			break;
		case 16:
			if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(-413671895, 0, 0)))
			{
				_0x7c32191d9fb2bdea(_0x8e84119a23c16623(-413671895, 0, 0));
			}
			break;
	}
}

void func_195(var uParam0, int iParam1, int iParam2)
{
	func_185(&(iParam1->f_75));
	switch (iParam2)
	{
		case 0:
			bVar0 = false;
			bVar1 = false;
			if (func_69(iParam1, 0))
			{
				bVar0 = true;
			}
			else
			{
				iVar2 = func_163(uParam0);
				if (iVar2 < iParam1->f_1.f_32)
				{
					bVar0 = true;
				}
				else if (iVar2 >= iParam1->f_1.f_32 && iVar2 < iParam1->f_1.f_33)
				{
					bVar0 = true;
					bVar1 = true;
				}
				else if (iVar2 == iParam1->f_1.f_33)
				{
					bVar1 = true;
				}
			}
			if (func_56(func_62(iParam1)))
			{
				func_238(uParam0, "MP_COOP_TUTORIAL_MATCHMAKING", 1);
			}
			else if (bVar0)
			{
				if (bVar1)
				{
					func_290(736, 0);
				}
				else
				{
					func_290(737, 0);
				}
			}
			if (bVar1)
			{
				iParam1->f_75[0] = func_292(func_291(0), 1138488863, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			if (bVar0)
			{
				iParam1->f_75[1] = func_292(func_291(1), -69749786, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			iParam1->f_75[2] = func_292(func_291(2), 814057702, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			iParam1->f_75[3] = func_292("INTERACT_TARGET_SHOW_INFO", -711536720, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			break;
		case 1:
			iParam1->f_75[2] = func_292("FLOW_CAMP_CANCEL_MATCHMAKE", 814057702, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			iParam1->f_69 = func_293(_create_var_string(2, "MP_COOP_CANCEL_MATCHMAKING"), 0, 0, 1);
			break;
		case 2:
			iParam1->f_75[2] = func_292("IB_CANCEL", 814057702, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			break;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (!func_261(&(iParam1->f_75[iVar3])))
		{
		}
		else
		{
			func_294(&(iParam1->f_75[iVar3]), 6, 1);
			func_295(&(iParam1->f_75[iVar3]), -459030638, 0, 1);
		}
		iVar3++;
	}
	func_57(iParam1, 5, 1);
}

int func_196(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_261(&(iParam0->f_75[iVar0])))
		{
		}
		else if (func_296(&(iParam0->f_75[iVar0]), 0) || func_297(&(iParam0->f_75[iVar0]), 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_197(int iParam0)
{
	Global_1572887->f_106.f_14 = iParam0;
}

void func_198(int iParam0, char* sParam1)
{
	if (func_261(iParam0))
	{
		iVar0 = func_262(iParam0);
		if (_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
		{
			_uiprompt_set_tag((*Global_1951255)[iVar0]->f_3, sParam1);
			_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
		}
	}
}

void func_199(int iParam0)
{
	func_298(&(Global_1572887->f_106.f_15), iParam0);
}

void func_200(int* iParam0)
{
	func_57(iParam0, 15, 1);
}

void func_201(var uParam0)
{
	func_299(1, 1, 0, 0, 0, 0, 0, 0, 0);
}

bool func_202(int iParam0)
{
	if (!_0xd6f6acf4392187fb(Global_1296859->f_15))
	{
		return false;
	}
	iVar0 = func_62(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar51 = _0xd1bf325c8252a982(Global_1296859->f_15, &Var1);
	vVar52 = { (*Global_1835011)[iVar0]->f_19 };
	fVar55 = ((*Global_1835011)[iVar0]->f_60 * (*Global_1835011)[iVar0]->f_60);
	iVar56 = 0;
	while (iVar56 < iVar51)
	{
		if (!network_is_handle_valid(Var1[iVar56]))
		{
		}
		else
		{
			iVar59 = network_get_player_from_gamer_handle(Var1[iVar56]);
			if (!_network_is_player_index_valid(iVar59))
			{
			}
			else
			{
				iVar57++;
				if (vdist2(vVar52, func_300(iVar59)) <= fVar55)
				{
					iVar58++;
				}
			}
		}
		iVar56++;
	}
	return iVar57 == iVar58;
}

void func_203(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, struct<2> Param64, int iParam66, int iParam67, int iParam68)
{
	func_301(iParam67, Param0.f_33, 2, Param0.f_17, Param64, iParam66, -1, 0, 0, iParam68);
}

void func_204(int iParam0)
{
	if (!func_302((*Global_1056141)[network_player_id_to_int()]->f_15.f_11, iParam0))
	{
	}
	func_298(&((*Global_1056141)[network_player_id_to_int()]->f_15.f_11), iParam0);
}

int func_205(int iParam0)
{
	return iParam0->f_68;
}

void func_206(var uParam0)
{
	func_157(uParam0, 1, 1);
}

float func_207(var uParam0)
{
	if (!func_177(uParam0))
	{
		return 0f;
	}
	if (func_285(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_286() - uParam0->f_1);
}

void func_208(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

void func_209(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, struct<2> Param64)
{
	func_301(1, Param0.f_33, 2, Param0.f_17, Param64, 2, -1, 0, 1, 0);
}

void func_210(bool bParam0)
{
	_0xc505036a35afd01b(false);
	iVar0 = player_id();
	iVar1 = _0x901e0dc25080c8b9(iVar0);
	if (_0x4be6c13a45cca8ec(iVar1) == iVar0)
	{
		uVar2 = func_303(iVar1);
		_0xd426e2e3288469d6(&uVar2, &Global_1296859);
		func_304(uVar2);
	}
	func_305(10, bParam0, 0, 0);
}

int func_211(var uParam0)
{
	return uParam0->f_173;
}

int func_212(int iParam0)
{
	return iParam0->f_174;
}

void func_213(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, char[4] cParam20, char* sParam21)
{
	func_6(uParam0);
	uParam0->f_10 = func_306(&uParam1, cParam20, sParam21, 0, 0, 1);
}

void func_214(int iParam0, int iParam1)
{
	if (iParam0->f_173 == iParam1)
	{
		return;
	}
	iParam0->f_173 = iParam1;
}

bool func_215(var uParam0)
{
	return uParam0->f_10 != 0;
}

int func_216()
{
	iVar0 = -1218098620;
	while (_event_manager_is_event_pending(iVar0))
	{
		if (_event_manager_peek_event(iVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					_event_manager_pop_event(iVar0);
					return vVar1.z;
				default:
					break;
			}
		}
		_event_manager_pop_event(iVar0);
	}
	return -1577439368;
}

int func_217(int* iParam0)
{
	return iParam0->f_74;
}

void func_218(int iParam0)
{
	func_299(0, 1, 0, 0, 1, 0, 0, 0, 0);
}

void func_219(var uParam0)
{
	func_157(uParam0, 1, 0);
}

bool func_220(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_221(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_307(66);
		if (bParam1)
		{
			func_307(69);
		}
	}
	else
	{
		func_308(66);
		func_308(69);
	}
}

void func_222(bool bParam0)
{
	if (!bParam0)
	{
		func_308(19);
	}
	else
	{
		func_307(19);
	}
}

void func_223(int* iParam0, int iParam1)
{
	if (iParam0->f_74 == iParam1)
	{
		return;
	}
	iParam0->f_74 = iParam1;
}

bool func_224(int iParam0, var uParam1, float fParam2)
{
	if (!func_49(iParam0))
	{
		return false;
	}
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 9:
			vVar0 = { 1151.934f, -1387.466f, 63.8776f };
			fVar3 = 241.341f;
			break;
		case 10:
			vVar0 = { -427.9599f, 517.3432f, 97.3329f };
			fVar3 = 309.9268f;
			break;
		case 11:
			vVar0 = { -1961.41f, -1371.143f, 111.9102f };
			fVar3 = 273.9211f;
			break;
		case 12:
			vVar0 = { -5553.804f, -2575.463f, -10.1006f };
			fVar3 = 256.4703f;
			break;
	}
	if (!func_309(vVar0))
	{
		*uParam1 = { vVar0 };
		*fParam2 = fVar3;
		return true;
	}
	return false;
}

bool func_225(var uParam0)
{
	if (func_309(Global_1211315->f_4))
	{
		return false;
	}
	*uParam0 = { Global_1211315->f_4 };
	return true;
}

void func_226(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	iVar3 = iParam3;
	if (!func_310(Global_1296859->f_17, &vVar0, &iVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		iVar3 = iParam3;
	}
	func_311(vParam0, iParam3, vVar0, iVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

void func_227(vector3 vParam0, float fParam3, bool bParam4)
{
	if (func_312(vParam0, fParam3))
	{
		func_228(1, bParam4);
	}
}

void func_228(bool bParam0, bool bParam1)
{
	if (func_313(255) == 4)
	{
		return;
	}
	if (func_309(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_308(0);
	}
	else
	{
		if (bParam1)
		{
			func_314(0, 0, 0, 1);
		}
		func_307(0);
		func_315(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_316(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_317(Global_1102219->f_3849, 36);
	func_318(Global_1102219->f_3888, 36);
}

int func_229(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_319(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_230(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_231(int iParam0, bool bParam1)
{
	iVar0 = func_229((*Global_1835011)[iParam0]->f_1);
	if (!func_230(iVar0))
	{
		return;
	}
	if (does_blip_exist(Global_1900838[iVar0]))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip((*Global_1900838)[iVar0]);
	}
	if (func_320(iVar0, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_13));
	}
	if (bParam1)
	{
		func_322(func_321(4, iParam0), 0);
		func_323((*Global_1835011)[iParam0]->f_1, 0, 2, 0, 0);
	}
	if ((*Global_1835011)[iParam0]->f_32 != -1)
	{
		(*Global_1835011)[iParam0]->f_32 = -1;
	}
	func_324(iParam0);
}

void func_232(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!func_230(iParam1))
	{
		iParam1 = func_229(func_325(iParam0));
		if (!func_230(iParam1))
		{
			return;
		}
	}
	if (does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1835011)[iParam0]->f_28));
		(*Global_1835011)[iParam0]->f_66 = 0;
	}
	else if (bParam2 && !Global_26640)
	{
		func_326(iParam0, iParam5, iParam1);
	}
	if (func_320(iParam1, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_13));
	}
	Var0 = { (*Global_1835011)[iParam0]->f_13 };
	if ((bParam3 && !is_string_null_or_empty(&Var0)) && is_thread_active((*Global_1835011)[iParam0]->f_17, false))
	{
		_0x7de4643157ad646c((*Global_1835011)[iParam0]->f_17);
	}
	if (bParam4)
	{
		func_327((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_328(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_71 = 0;
}

void func_233(int iParam0)
{
	MemCopy(&uVar0, {(*Global_1835011)[iParam0]->f_4}, 3);
	if ((func_240() != -1 && !is_string_null_or_empty(&uVar0)) && is_thread_active((*Global_1835011)[iParam0]->f_8, false))
	{
		_0x7de4643157ad646c((*Global_1835011)[iParam0]->f_8);
	}
}

void func_234(var uParam0)
{
	if (!func_329(uParam0))
	{
		return;
	}
	iVar0 = get_player_index();
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_connected(iVar0))
	{
		return;
	}
	if (!func_330(uParam0, iVar0))
	{
		return;
	}
	_0xb909149f2bb5f6da(&((*Global_1056141)[iVar0]->f_15.f_20), uParam0);
}

void func_235(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (iParam1 == -1)
		{
			return;
		}
		Global_1071686->f_28662.f_58.f_2 = 1;
		Global_1071686->f_28662.f_58 = iParam1;
	}
	else
	{
		Global_1071686->f_28662.f_58.f_3 = 1;
		Global_1071686->f_28662.f_58.f_4 = iParam2;
	}
}

void func_236(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_331(iParam1);
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
	func_332(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

bool func_237(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1904651->f_33[iParam0]->f_1;
	}
	return false;
}

int func_238(var uParam0, char* sParam1, bool bParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_333(uParam0->f_11))
		{
			return 0;
		}
	}
	uParam0->f_11 = func_334(sParam1, 10000, 0, 0, 0, 1);
	return 1;
}

int func_239()
{
	iVar0 = func_335(120839576, 59806960, 1, 0, 1, 0);
	if (!func_336(iVar0))
	{
		iVar0 = _network_get_cash_balance();
	}
	return iVar0;
}

int func_240()
{
	return Global_1572887->f_13;
}

void func_241(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

int func_242(int iParam0)
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

void func_243(char* sParam0)
{
	StringCopy(&(Global_1572887->f_106.f_91.f_6), sParam0, 32);
}

bool func_244(int iParam0)
{
	if (func_337(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_245(int iParam0)
{
	if (func_338(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_246(int iParam0)
{
	if (func_240() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_134(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_247(int iParam0)
{
	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_339(&Var0))
	{
		return vVar5;
	}
	if (!func_340(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_340(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_341(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_340(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_340(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_341(&Var0, 1);
			if (!func_340(&Var0, 22, iParam0, 0, 0))
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

bool func_248(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_249(iParam0) != -1;
}

int func_249(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_342(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_250(int iParam0)
{
	return func_343(iParam0);
}

struct<2> func_251(int iParam0)
{
	if (!func_339(&uVar0))
	{
		return func_256();
	}
	if (!func_340(&uVar0, 13, 0, 0, 1))
	{
		return func_256();
	}
	if (!func_340(&uVar0, 17, 0, 0, 1))
	{
		return func_256();
	}
	if (!func_340(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_256();
	}
	if (!func_340(&uVar0, 20, 0, 0, 1))
	{
		return func_256();
	}
	if (!func_340(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_256();
	}
	iVar5 = func_344(&uVar0);
	return func_254(iVar5);
}

struct<2> func_252(int iParam0)
{
	if (iParam0 == 0)
	{
		return func_256();
	}
	if (!func_345(&uVar0, 7, iParam0, 76966722))
	{
		return func_256();
	}
	func_346(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_256();
	}
	return func_347(Var5.f_3, Var5.f_4);
}

int func_253(int iParam0)
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

struct<2> func_254(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_347(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_347(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_347(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_347(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_347(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_347(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_347(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_256();
}

void func_255(var uParam0)
{
	uParam0->f_20 = 0;
}

struct<2> func_256()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_257(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_348(bParam1, bParam2, bParam3);
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

int func_258(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	iVar0 = -1;
	Var1 = { func_349(2084597891, 1, 0) };
	Var6 = { func_350(2084597891, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_351(1702063850, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_352(iVar0, Var22);
	}
	return iVar0;
}

void func_259()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_353(iVar0))
		{
			func_354(iVar0);
		}
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
}

void func_260(int iParam0)
{
	Global_265377->f_124386 = iParam0;
}

bool func_261(int iParam0)
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

int func_262(int iParam0)
{
	return iParam0;
}

int func_263(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

int func_264(int* iParam0, int iParam1)
{
	if (!does_entity_exist(*iParam1))
	{
		return 0;
	}
	if (iParam0->f_101.f_33 >= 32)
	{
		return 0;
	}
	iParam0->f_101[iParam0->f_101.f_33] = *iParam1;
	iParam0->f_101.f_33++;
	return 1;
}

int func_265(int* iParam0, int iParam1)
{
	if (!does_entity_exist(*iParam1))
	{
		return 0;
	}
	if (iParam0->f_101.f_67 >= 32)
	{
		return 0;
	}
	iParam0->f_101.f_34[iParam0->f_101.f_67] = *iParam1;
	iParam0->f_101.f_67++;
	return 1;
}

int func_266()
{
	return -1;
}

bool func_267(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_355(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_356())
	{
		return func_355(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_355(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_268(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	iVar0 = func_321(2, iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	return _0xfbe782b3165ac8ec(iVar0);
}

bool func_269(int iParam0, int* iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
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
		case 24:
		case 25:
			Var0 = { func_357(-697712761) };
			stat_id_get_int(&Var0, iParam1);
			return true;
		default:
			break;
	}
	return false;
}

bool func_270(int iParam0, int* iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			Var0 = { func_357(1270054266) };
			stat_id_get_int(&Var0, iParam1);
			return true;
		default:
			break;
	}
	return false;
}

int func_271(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 == 25)
	{
		return Global_1901947->f_50.f_26 * 2;
	}
	return Global_1901947->f_50.f_26;
}

int func_272(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1901947->f_50.f_27;
}

bool func_273(struct<2> Param0)
{
	iVar0 = func_358(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

struct<2> func_274(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_275(int iParam0)
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

int func_276(int iParam0)
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

int func_277()
{
	return Global_1572887->f_106.f_75;
}

void func_278(int iParam0)
{
	func_359(Global_1301321, iParam0);
}

bool func_279()
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

bool func_280(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1939493)[iVar0]->f_10)))
		{
			func_360(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_281(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_282(var uParam0)
{
	func_361(uParam0, 0f);
}

bool func_283(int iParam0)
{
	iVar0 = get_mount(Global_1296859->f_8);
	if (does_entity_exist(iVar0))
	{
		iVar1 = _get_first_entity_ped_is_carrying(iVar0);
		if ((does_entity_exist(iVar1) && is_entity_a_ped(iVar1)) && is_ped_a_player(get_ped_index_from_entity_index(iVar1)))
		{
			if (_is_ped_hogtied(get_ped_index_from_entity_index(iVar1)))
			{
				*iParam0 = iVar1;
				return true;
			}
		}
	}
	return false;
}

void func_284(int iParam0)
{
	vVar0.x = 196;
	vVar0.f_1 = player_id();
	vVar0.f_2 = get_network_time_accurate();
	_0x31010318ba9897ac(&uVar4, iParam0);
	trigger_script_event(1, &vVar0, 4, 16, &uVar4);
}

bool func_285(var uParam0)
{
	return func_281(*uParam0, 2);
}

float func_286()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_287(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_261(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_262(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_362(iVar0);
	*uParam0 = 0;
}

bool func_288()
{
	return Global_1915715->f_22504.f_1;
}

bool func_289(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			break;
		case 17:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(16))
			{
				return false;
			}
			break;
		case 18:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			break;
		case 19:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(18))
			{
				return false;
			}
			break;
		case 20:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(16) && !func_268(18))
			{
				return false;
			}
			if (!func_268(17) && !func_268(19))
			{
				return false;
			}
			break;
		case 21:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(16))
			{
				return false;
			}
			if (!func_268(17))
			{
				return false;
			}
			break;
		case 22:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(16))
			{
				return false;
			}
			if (!func_268(17))
			{
				return false;
			}
			if (!func_268(21))
			{
				return false;
			}
			break;
		case 23:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(18))
			{
				return false;
			}
			if (!func_268(19))
			{
				return false;
			}
			break;
		case 24:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(18))
			{
				return false;
			}
			if (!func_268(19))
			{
				return false;
			}
			if (!func_268(23))
			{
				return false;
			}
			break;
		case 25:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(16) && !func_268(18))
			{
				return false;
			}
			if (!func_268(17) && !func_268(19))
			{
				return false;
			}
			if (!func_268(21) && !func_268(24))
			{
				return false;
			}
			if (!func_268(22) && !func_268(24))
			{
				return false;
			}
			if (!func_268(20))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_290(int iParam0, bool bParam1)
{
	func_363(iParam0, &iVar0, &iVar1);
	if (!func_364(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_365(iVar0, iVar1);
}

char* func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FLOW_CAMP_O1";
		case 1:
			return "FLOW_CAMP_O2";
		case 2:
			return "FLOW_CAMP_O3";
		default:
			break;
	}
	return "";
}

int func_292(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_366(iVar0, 2))
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
		func_367(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

var func_293(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_334(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

void func_294(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_261(iParam0))
	{
		return;
	}
	iVar0 = func_262(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1951255)[iVar0]->f_3, iParam1);
}

void func_295(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_261(iParam0))
	{
		return;
	}
	iVar0 = func_262(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

bool func_296(int iParam0, bool bParam1)
{
	if (bParam1 && !func_261(iParam0))
	{
		return false;
	}
	iVar0 = func_262(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

bool func_297(int iParam0, bool bParam1)
{
	if (bParam1 && !func_261(iParam0))
	{
		return false;
	}
	iVar0 = func_262(iParam0);
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

void func_298(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_299(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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

Vector3 func_300(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

int func_301(int iParam0, var uParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	if (!func_368(iParam2, iParam3))
	{
		return 0;
	}
	if (func_168() && Global_1572887->f_106.f_75 != 9)
	{
		return 0;
	}
	if (!func_369(Global_1296859->f_10))
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
	func_370(&Var0);
	func_371(iParam2, iParam3, iParam7, 1);
	func_372(Param4, 1);
	func_373(iParam6);
	func_374(iParam9);
	func_375(iParam10, 1);
	if ((func_166(Param4) && !func_376()) && &Global_1211325 == -1)
	{
		func_377(Param4);
	}
	_0x0ae241a4a9adeeec(1);
	if (iParam2 != 2)
	{
		func_378();
	}
	if (func_376())
	{
		func_379(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_101(268435456))
		{
			if (!_is_app_active(1433015236))
			{
				func_380(1, 0);
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
			func_135(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, func_381(&(Var65.f_37), 109029619), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, _create_var_string(2, func_382(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, _create_var_string(2, func_384(func_383(), iParam3)), 64);
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
	if ((!_0x424b17a7dc5c90bc(player_id()) && func_385(255, 0)) && !bParam8)
	{
		func_386("NM_MATCHMAKING_WARNING");
	}
	func_387(10);
	return 1;
}

bool func_302(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_303(int iParam0)
{
	iVar51 = _0xd1bf325c8252a982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = network_get_player_from_gamer_handle(Var0[iVar52]);
		if (network_is_player_active(iVar53))
		{
			_0x31010318ba9897ac(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

void func_304(var uParam0)
{
	if (!_0x179a6f0ee2e79026(&uParam0))
	{
		return;
	}
	Var0.f_16.f_1 = -1;
	Var0.f_16.f_2 = -1;
	Var0.f_16.f_3 = -1;
	Var0.f_16.f_3.f_1 = -1;
	Var0 = 51;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = 3;
	trigger_script_event(1, &Var0, 27, 28, &uParam0);
}

int func_305(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_388() && !bParam3)
	{
		return 0;
	}
	if (!bParam2)
	{
		func_389(0);
	}
	func_390();
	if (func_385(255, 0))
	{
		if (_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())) != player_id())
		{
			if (!bParam2 && bParam1)
			{
				func_391(1);
			}
		}
	}
	if (network_is_session_active())
	{
		_0x0ae241a4a9adeeec(0);
	}
	func_392();
	func_387(21);
	Global_1572887->f_106.f_91.f_1 = Global_1572887->f_106.f_9;
	Global_1572887->f_106.f_91.f_2 = iParam0;
	Global_1572887->f_106.f_91.f_4 = (get_game_timer() - Global_1572887->f_106.f_76);
	func_393();
	return 1;
}

var func_306(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

int func_307(int iParam0)
{
	if (func_394(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_308(int iParam0)
{
	if (func_395(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_309(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_310(vector3 vParam0, var uParam3, int iParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_396(vParam0)];
	iVar1 = func_397(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_398(uVar0, iVar2, uParam3, iParam4))
		{
			return true;
		}
	}
	return false;
}

void func_311(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_313(255) == 4)
	{
		return;
	}
	if (func_309(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (bParam10)
	{
		func_314(0, 0, 0, 1);
	}
	func_307(0);
	func_307(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_315(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = iParam3;
	Global_1102219->f_3849.f_5 = 1;
	Global_1102219->f_3849.f_17.f_6 = { vParam0 };
	Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102219->f_3849.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102219->f_3849.f_17.f_9 = -432403087;
	if (fParam8 > 1f)
	{
		Global_1102219->f_3849.f_16 = 1;
		Global_1102219->f_3849.f_6.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3849.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102219->f_3849.f_6.f_9 = -432403087;
	}
	func_316(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = iParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_317(Global_1102219->f_3849, 36);
	func_318(Global_1102219->f_3888, 36);
}

bool func_312(vector3 vParam0, float fParam3)
{
	if (func_309(vParam0))
	{
		return false;
	}
	if (func_313(255) == 4)
	{
		return false;
	}
	if (func_267(4, 255))
	{
	}
	func_307(4);
	func_399(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = fParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_400(Global_1102219->f_3879, 36);
	return true;
}

int func_313(int iParam0)
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

void func_314(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_401(iParam0);
	if (!func_402(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_403(128) && !func_404(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_405() == 4)
	{
		func_308(18);
	}
	func_406(1024);
}

void func_315(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_316(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_317(struct<29> Param0, var uParam29, int iParam30)
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

void func_318(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_319(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_320(int iParam0, int iParam1)
{
	return (func_230(iParam0) && ((*Global_1900838)[iParam0]->f_1 && iParam1) != 0);
}

int func_321(int iParam0, int iParam1)
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

int func_322(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346->f_458.f_1546 >= 40)
	{
		func_407();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_408();
	Var0.f_3 = iParam1;
	func_409(Var0, 0);
	return Var0;
}

void func_323(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_166(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_410(Param0) && !func_273(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_411(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_358(Param0) == 3)
		{
			func_412(1, -1706799532);
		}
		else if (func_358(Param0) == 4)
		{
			func_412(0, -1706799532);
		}
	}
	if ((func_358(Param0) == 3 || func_358(Param0) == 1) || ((bParam5 && func_358(Param0) == 4) && _0x01f4d242765c6b24(func_411(Param0))))
	{
		if (iParam3 != -1)
		{
			func_413(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_413(Param0, 2, iParam4, 255, 0);
		}
	}
	func_414(Param0, 0);
	if (func_319(func_274(0), Param0))
	{
		func_415(1);
		func_416(0);
		func_417(0);
		func_418(1);
	}
	func_419(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_420(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_324(int iParam0)
{
	Global_1139381->f_4912[iParam0] = _unlock_is_new((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_2 = _unlock_is_visible((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_1 = _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3);
}

struct<2> func_325(int iParam0)
{
	if (!func_49(iParam0))
	{
		return func_256();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

int func_326(int iParam0, int iParam1, int iParam2)
{
	if (func_421(32768))
	{
		return 0;
	}
	iVar0 = func_240();
	if (func_127(&((*Global_1835011)[iParam0]->f_30), 512) && !func_127(&((*Global_1835011)[iParam0]->f_30), 1024))
	{
		if (func_422())
		{
			return 0;
		}
	}
	if ((*Global_1835011)[iParam0]->f_67)
	{
		return 0;
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_66;
		if (func_423(iParam0, iVar0))
		{
			vVar4 = { func_424(iParam0) };
			(*Global_1835011)[iParam0]->f_65 = _create_volume_sphere(vVar4, 0f, 0f, 0f, 19f, 19f, 19f);
			if (_does_volume_exist((*Global_1835011)[iParam0]->f_65))
			{
				(*Global_1835011)[iParam0]->f_28 = _0xa6ef0c54a3443e70(1673015813, (*Global_1835011)[iParam0]->f_65);
			}
		}
		else if (bVar3)
		{
			(*Global_1835011)[iParam0]->f_28 = _blip_add_for_coord(1673015813, func_425(iParam0));
		}
		else
		{
			(*Global_1835011)[iParam0]->f_28 = _blip_add_for_coord(1673015813, func_64(iParam0));
		}
		(*Global_1835011)[iParam0]->f_29 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2)
			{
				func_426(iParam2, 4194304);
			}
			else
			{
				func_328(iParam2, 4194304);
			}
		}
		set_blip_flash_timer((*Global_1835011)[iParam0]->f_28, 71, (*Global_1835011)[iParam0]->f_3);
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		return 0;
	}
	func_427(iParam0);
	if (bVar1)
	{
		set_blip_sprite((*Global_1835011)[iParam0]->f_28, (*Global_1835011)[iParam0]->f_27, true);
		if (iVar0 != -1)
		{
			_set_blip_name_from_player_string((*Global_1835011)[iParam0]->f_28, &((*Global_1835011)[iParam0]->f_42));
		}
		if (!func_127(&((*Global_1835011)[iParam0]->f_30), 1024))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 580546400);
			func_428(&((*Global_1835011)[iParam0]->f_30), 1024);
		}
		if (func_127(&((*Global_1835011)[iParam0]->f_30), 524288))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -401963276);
		}
		if (func_127(&((*Global_1835011)[iParam0]->f_30), 1048576))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -1878373110);
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 231194138);
		}
	}
	return 1;
}

void func_327(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return;
	}
	if (!func_166(Param0))
	{
		return;
	}
	if (func_273(Param0))
	{
		func_323(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_229(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900806 > 1)
	{
		*(*Global_1900807)[iVar1] = { *((*Global_1900807)[(&Global_1900806 - 1)]) };
		*(*Global_1900838)[iVar1] = { *((*Global_1900838)[(&Global_1900806 - 1)]) };
		func_429((*Global_1900807)[(&Global_1900806 - 1)]);
		*((*Global_1900838)[(&Global_1900806 - 1)]) = { Var2 };
	}
	else
	{
		func_429((*Global_1900807)[iVar1]);
		*(*Global_1900838)[iVar1] = { Var2 };
	}
	Global_1900806 = (&Global_1900806 - 1);
	if (&Global_1900806 < 0)
	{
		Global_1900806 = 0;
	}
}

void func_328(int iParam0, int iParam1)
{
	if (!func_230(iParam0))
	{
		return;
	}
	(*Global_1900838)[iParam0]->f_1 = ((*Global_1900838)[iParam0]->f_1 - ((*Global_1900838)[iParam0]->f_1 && iParam1));
}

bool func_329(var uParam0)
{
	iVar0 = uParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

bool func_330(var uParam0, int iParam1)
{
	if (!func_329(uParam0))
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam1) || !network_is_player_connected(iParam1))
	{
		return false;
	}
	return _0x8f4f050054005c27(&((*Global_1056141)[iParam1]->f_15.f_20), uParam0);
}

void func_331(int iParam0)
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
		func_430();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_332(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

bool func_333(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x59fa676177dbe4c9(iParam0) == 4;
}

var func_334(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_335(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_431(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_432(iParam0))
	{
		return func_434(func_433(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_435(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_336(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_240() == 0)
	{
		return func_436(iParam0);
	}
	return iParam0 <= func_437();
}

int func_337(int iParam0, int iParam1)
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

int func_338(int iParam0, int iParam1)
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

bool func_339(var uParam0)
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

bool func_340(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_341(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return _datafile_get_num_nodes(uParam0);
}

int func_342(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_9;
}

struct<2> func_343(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	_copy_memory(&Var0, &((*Global_1297047)[iParam0]->f_6), 2);
	return Var0;
}

var func_344(var uParam0)
{
	return func_438(uParam0, 60, 1);
}

bool func_345(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = Global_1139381->f_7;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = func_439(iParam1);
	uParam0->f_4 = iParam2;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

void func_346(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_440(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_441(iVar0);
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
			uParam2->f_5 = func_442(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_443(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_444(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_445(iVar0);
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

struct<2> func_347(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_446(iParam0, &(Global_1071686->f_636), func_276(iParam1));
			break;
		case 3:
			Var0.f_1 = func_446(iParam0, &(Global_1071686->f_636.f_602), func_276(iParam1));
			break;
		case 4:
			Var0.f_1 = func_446(iParam0, &(Global_1071686->f_636.f_2104), func_276(iParam1));
			break;
		case 5:
			Var0.f_1 = func_446(iParam0, &(Global_1071686->f_636.f_12606), func_276(iParam1));
			break;
		case 6:
			Var0.f_1 = func_446(iParam0, &(Global_1071686->f_636.f_12908), func_276(iParam1));
			break;
		case 7:
			Var0.f_1 = func_446(iParam0, &(Global_1071686->f_636.f_15910), func_276(iParam1));
			break;
		case 8:
			Var0.f_1 = func_446(iParam0, &(Global_1071686->f_636.f_16512), func_276(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_256();
	}
	return Var0;
}

int func_348(bool bParam0, bool bParam1, bool bParam2)
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

struct<5> func_349(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_447(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_448(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_449(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_450(bParam1) };
			if (bParam2 && func_451(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_452(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_452(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_453(iParam0, &Var6, 1728382685))
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
			Var0 = { func_454(bParam1) };
			switch (func_455(iParam0))
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
			if (func_456(iParam0, -1823706425))
			{
				Var0 = { func_449(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_456(iParam0, -1483207246))
			{
				Var0 = { func_449(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_449(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_456(iParam0, -1653629781))
			{
				Var0 = { func_449(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_457(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_456(iParam0, -1653629781))
			{
				Var0 = { func_449(1384535894, Var0, 1784584921, bParam1) };
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

struct<16> func_350(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_449(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_458(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_459() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_351(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_460(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_462(func_461(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_463(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_352(int iParam0, struct<17> Param1)
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

bool func_353(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_354(int iParam0)
{
	_0x748c5f51a18cb8f0(0);
	if (!func_353(iParam0))
	{
		return;
	}
	func_464(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_465(iVar0))
		{
			if (func_467(func_466(iVar0, 1, 1)) == iParam0)
			{
				func_468(iVar0, 0);
				func_469(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_470(iVar1))
		{
			if (func_471(iVar1) == iParam0)
			{
				func_472(iVar1, 0);
			}
		}
		iVar1++;
	}
	_0x748c5f51a18cb8f0(1);
}

bool func_355(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_356()
{
	return Global_1102219->f_3672;
}

struct<2> func_357(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_358(struct<2> Param0)
{
	if (!func_166(Param0))
	{
		return -1;
	}
	iVar0 = func_473(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

void func_359(var uParam0, int iParam1)
{
	func_474(uParam0, iParam1);
}

void func_360(int iParam0)
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

void func_361(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_286() - fParam1);
	func_475(uParam0, 1);
	func_476(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_362(int iParam0)
{
	if (!func_477(iParam0))
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

void func_363(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_364(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_478(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_479(iParam0))
	{
		return false;
	}
	if (func_480(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_481(iParam0, 1)) || func_421(32768))
	{
		if (!func_481(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_482())
	{
		return false;
	}
	return true;
}

void func_365(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_366(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_367(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_483(iParam0, 1);
	func_484(iParam0, 1);
	func_485(iParam0, 128);
}

bool func_368(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_369(int iParam0)
{
	iVar0 = _0x901e0dc25080c8b9(iParam0);
	if (_0x0f99f6436528a089(iVar0) && !_0x424b17a7dc5c90bc(iParam0))
	{
		return false;
	}
	return true;
}

void func_370(var uParam0)
{
	_copy_memory(&(Global_1572887->f_106.f_17), uParam0, 57);
}

void func_371(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887->f_106 = iParam0;
	Global_1572887->f_106.f_9 = iParam1;
	Global_1572887->f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_486();
	}
}

void func_372(struct<2> Param0, bool bParam2)
{
	Global_1572887->f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_486();
	}
}

void func_373(int iParam0)
{
	Global_1572887->f_106.f_15 = iParam0;
}

void func_374(int iParam0)
{
	Global_1572887->f_106.f_13 = iParam0;
}

void func_375(int iParam0, bool bParam1)
{
	Global_1572887->f_106.f_74 = iParam0;
	if (bParam1)
	{
		func_486();
	}
}

bool func_376()
{
	if (func_383() != 0)
	{
		return false;
	}
	if (Global_1572887->f_106.f_9 >= 5 && Global_1572887->f_106.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_377(struct<2> Param0)
{
	if (func_487())
	{
		return 0;
	}
	if (!func_166(Param0))
	{
		return 0;
	}
	*Global_1051213 = { Param0 };
	return 1;
}

void func_378()
{
	(*Global_1056141)[network_player_id_to_int()]->f_15.f_11 = 0;
}

void func_379(struct<2> Param0)
{
	_databinding_remove_data_entry(Global_1572887->f_106.f_153);
	_databinding_remove_data_entry(Global_1572887->f_106.f_154);
	_databinding_remove_data_entry(Global_1572887->f_106.f_155);
	_databinding_remove_data_entry(Global_1572887->f_106.f_156);
	_databinding_remove_data_entry(Global_1572887->f_106.f_157);
	_databinding_remove_data_entry(Global_1572887->f_106.f_158);
	_databinding_remove_data_entry(Global_1572887->f_106.f_159);
	iVar0 = func_488(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_489(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_490(iVar0);
	Var3 = { func_491(iVar1, uVar2) };
	_databinding_write_data_string(Global_1572887->f_106.f_151, _create_var_string(2, &Var3));
}

int func_380(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_492();
	}
	if (!func_493(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_494(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

char* func_381(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_495(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_382(int iParam0)
{
	iVar0 = func_496(iParam0);
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

int func_383()
{
	return Global_1572887->f_106;
}

char* func_384(int iParam0, int iParam1)
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

bool func_385(int iParam0, bool bParam1)
{
	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_356();
	}
	else if (iParam0 == func_356())
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

var func_386(char* sParam0)
{
	sVar0 = _create_var_string(2, sParam0);
	uVar1 = func_497(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_387(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

bool func_388()
{
	return func_277() > 11;
}

void func_389(bool bParam0)
{
	iVar0 = player_id();
	bVar1 = false;
	if (network_is_game_in_progress())
	{
		bVar1 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)) == iVar0;
	}
	if (_0x8fb7c254cfcbf78e(&(Global_1572887->f_360)) && (bParam0 || bVar1))
	{
		_0xe72e5c1289bd1f40(&(Global_1572887->f_360));
	}
	Var2.f_5 = 2;
	Var2.f_22 = -1;
	Var2.f_23 = -1;
	Var2.f_24 = -1;
	Var2.f_29 = -1;
	Global_1572887->f_360 = { Var2 };
}

void func_390()
{
	if (_is_app_active(1433015236))
	{
		_close_app_by_hash(1433015236);
	}
}

void func_391(int iParam0)
{
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		func_298(&(Global_1194053->f_3), 32);
		func_298(&(Global_1194053->f_4), 12);
		Global_1194053->f_498 = iVar0;
		if (network_is_player_active(player_id()) && _0x424b17a7dc5c90bc(player_id()))
		{
			func_298(&(Global_1194053->f_4), 2);
		}
		_0xc08bff658b2e51da(0);
		Global_1194053->f_5[5] = 0;
		func_298(Global_1194053->f_5[5], 1);
	}
	Global_1194053->f_5[3] = 0;
	func_298(Global_1194053->f_5[3], 1);
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		func_298(Global_1194053->f_5[3], 6);
		return;
	}
	if (!_0x0f99f6436528a089(iVar1))
	{
		func_298(Global_1194053->f_5[3], 6);
		return;
	}
	_0x0a04a07bc3074edb(iParam0);
}

void func_392()
{
	Global_1956200->f_1431.f_108 = 0;
	Global_1956200->f_1431.f_108.f_1 = 0f;
	Global_1956200->f_1431.f_108.f_3 = 0f;
	Global_1956200->f_1431.f_108.f_2 = 0f;
	Global_1956200->f_1431.f_108.f_4 = 0f;
	Global_1956200->f_1431.f_108.f_6 = 0f;
	Global_1956200->f_1431.f_108.f_5 = 0f;
}

void func_393()
{
	if (Global_1572887->f_106.f_91)
	{
		return;
	}
	Global_1572887->f_106.f_91 = 1;
	_0x4c08d2b6d8be17e4(Global_1572887->f_106.f_91.f_1, Global_1572887->f_106.f_91.f_2, Global_1572887->f_106.f_91.f_3, Global_1572887->f_106.f_91.f_4, Global_1572887->f_106.f_91.f_5, &(Global_1572887->f_106.f_91.f_6));
}

bool func_394(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_395(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

int func_396(vector3 vParam0)
{
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = vdist(vParam0, Global_1071686->f_23887.f_366[iVar0]->f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	return iVar1;
}

int func_397(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_398(var uParam0, int iParam1, var uParam2, int iParam3)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 160165798;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		_datafile_get_vector(uParam2, &Var0);
		Var0.f_2 = -55481687;
		_datafile_get_float(iParam3, &Var0);
		return true;
	}
	return false;
}

void func_399(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_400(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_401(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_402(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_403(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_404(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_405()
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

void func_406(int iParam0)
{
	if (func_498(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

void func_407()
{
}

var func_408()
{
	Global_1293346->f_458.f_1552++;
	if (Global_1293346->f_458.f_1552 >= 2147483646)
	{
		Global_1293346->f_458.f_1552 = 0;
	}
	return Global_1293346->f_458.f_1552;
}

void func_409(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*Global_1293346->f_458.f_44[func_499()] = { Param0 };
			func_500((func_499() + 1 % 40));
			Global_1293346->f_458.f_1546++;
			break;
		case 1:
			*Global_1293346->f_458.f_1245[func_501()] = { Param0 };
			func_502((func_501() + 1 % 10));
			Global_1293346->f_458.f_1547++;
			break;
	}
}

bool func_410(struct<2> Param0)
{
	iVar0 = func_358(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_411(struct<2> Param0)
{
	return func_503(Param0);
}

int func_412(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_504())
	{
		return 0;
	}
	if (!func_505())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_506(&Global_0, 8);
	}
	func_506(&Global_0, 1);
	return 1;
}

void func_413(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_507(func_420(Param0));
	iVar1 = func_411(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_240() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_508(Param0, &Var2);
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

void func_414(struct<2> Param0, int iParam2)
{
	if (!func_166(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_509(Param0);
	}
	else
	{
		func_510(Param0, iParam2);
	}
	func_511();
}

void func_415(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_512(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_513(Global_1940258, 8388608);
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

void func_416(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_514(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_515(cVar2);
			}
			else
			{
				func_516();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_417(bool bParam0)
{
	if (!bParam0 && func_517(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_418(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_419(struct<2> Param0)
{
	return func_519(func_518(Param0));
}

int func_420(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_421(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_422()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_423(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 >= 9 && iParam0 <= 25)
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_424(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

Vector3 func_425(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

void func_426(int iParam0, int iParam1)
{
	if (!func_230(iParam0))
	{
		return;
	}
	(*Global_1900838)[iParam0]->f_1 = ((*Global_1900838)[iParam0]->f_1 || iParam1);
}

void func_427(int iParam0)
{
	if (func_240() == -1)
	{
		return;
	}
	if ((*Global_1835011)[iParam0]->f_3 != 0 && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3))
	{
		_unlock_set_new((*Global_1835011)[iParam0]->f_3, false);
	}
	func_324(iParam0);
}

void func_428(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_429(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_430()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

bool func_431(int iParam0, int iParam1)
{
	if (!func_520(iParam0, 0))
	{
		return false;
	}
	if (func_432(iParam0))
	{
		return func_521(func_433(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_432(int iParam0)
{
	if (func_522(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_433(int iParam0, bool bParam1)
{
	if (!func_520(iParam0, 0))
	{
		return func_524(func_523(iParam0), bParam1);
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

int func_434(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_525(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_435(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_520(iParam0, 0))
	{
		return false;
	}
	*uParam3 = _0xdee7b3c76ed664be(iParam0, iParam1);
	if (*uParam3 == 0)
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
	while (iVar0 < *uParam3)
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
		func_526(iParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

bool func_436(int iParam0)
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

int func_437()
{
	if (func_240() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

var func_438(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_439(int iParam0)
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

int func_440(int iParam0, var uParam1)
{
	if (func_527(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_441(int iParam0)
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

int func_442(int iParam0)
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

int func_443(int iParam0)
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

int func_444(int iParam0)
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

int func_445(int iParam0)
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

int func_446(int iParam0, var uParam1, int iParam2)
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

struct<4> func_447(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_528(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_449(1328661203, func_459(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_449(1328661203, func_459(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_449(1328661203, func_459(), -1591664384, bParam0);
}

int func_448(int iParam0)
{
	if (!func_520(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_449(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_520(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_528(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_450(bool bParam0)
{
	iVar0 = func_528(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_449(923904168, func_447(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_449(923904168, func_447(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_449(923904168, func_447(bParam0), -740156546, 0);
}

bool func_451(int iParam0, bool bParam1)
{
	if (func_455(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_529();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_452(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_530(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_453(int iParam0, var uParam1, int iParam2)
{
	if (func_531(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_454(bool bParam0)
{
	iVar0 = func_528(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_449(271701509, func_447(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_449(271701509, func_447(bParam0), 12999093, 0);
}

int func_455(int iParam0)
{
	if (!func_520(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_456(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_455(iParam0);
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
			if (func_532(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_457(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_533(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_458(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_459()
{
	return Var0;
}

bool func_460(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_534(uParam1->f_8, iParam0, uVar0, 2048) || func_534(uParam1->f_8, iParam0, uVar0, 32768)) || func_534(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_534(uParam1->f_8, iParam0, uVar0, 4) || func_534(uParam1->f_8, iParam0, uVar0, 256)) || func_534(uParam1->f_8, iParam0, uVar0, 65536)) || func_534(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_534(uParam1->f_8, iParam0, uVar0, 1) || func_534(uParam1->f_8, iParam0, uVar0, 8)) || func_534(uParam1->f_8, iParam0, uVar0, 65536)) || func_534(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_534(uParam1->f_8, iParam0, uVar0, 1) || func_534(uParam1->f_8, iParam0, uVar0, 16)) || func_534(uParam1->f_8, iParam0, uVar0, 2)) || func_534(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_534(uParam1->f_8, iParam0, uVar0, 8) || func_534(uParam1->f_8, iParam0, uVar0, 4096)) || func_534(uParam1->f_8, iParam0, uVar0, 256)) || func_534(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_461(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_462(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_535(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_535(iParam1, 2, 0, 0);
	return -1;
}

int func_463(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_535(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_464(int iParam0, bool bParam1)
{
	if (!func_353(iParam0))
	{
		return;
	}
	if (func_536(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_537(iParam0, 1);
	}
	else
	{
		func_538(iParam0, 1);
	}
	func_539(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_471(iVar0) == iParam0)
		{
			func_472(iVar0, 0);
		}
		iVar0++;
	}
}

bool func_465(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_466(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 81:
			if (func_540(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 111:
			if (func_540(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			if (func_240() != -1 && func_541() == 1339372314)
			{
				return 1339372314;
			}
			else
			{
				return 1559741032;
			}
			break;
		case 66:
			return 60667583;
		case 83:
			return 1758133584;
		case 26:
			return -577559008;
		case 40:
			if (!bParam1 || func_240() != -1)
			{
				return 1624541293;
			}
			if (func_542(44))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 98:
			if (func_240() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 1637569166;
			}
			break;
		case 70:
			return -867798278;
		case 74:
			return 1543937523;
		case 99:
			return 1030875135;
		case 101:
			return -201437056;
		case 62:
			return 794246846;
		case 3:
			return -968357677;
		case 33:
			return 728480338;
		case 87:
			if (func_240() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 725489698;
			}
			break;
		case 37:
			return 183652754;
		case 60:
			if (func_240() != -1)
			{
				return -1147969487;
			}
			else
			{
				return 2056744450;
			}
			break;
		case 135:
			return 963280223;
		case 127:
			return -256309418;
		case 131:
			return 1666986024;
		case 121:
			return 251328732;
		case 136:
			if (func_240() != -1)
			{
				return -877373104;
			}
			if (!bParam1)
			{
				return 1024208566;
			}
			if (func_542(44))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			return 965626876;
		case 39:
			return -497792649;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -1990305778;
	}
	if (bParam2)
	{
		iVar0 = func_543(iParam0);
		if (iVar0 != -1)
		{
			return func_544(iVar0, bParam1);
		}
	}
	return 0;
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

void func_468(int iParam0, bool bParam1)
{
	if (!func_465(iParam0))
	{
		return;
	}
	bVar0 = func_545(iParam0, 67108864);
	if (bParam1)
	{
		if (!bVar0)
		{
			func_547(iParam0, func_546());
			func_548(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_549(iParam0, 67108864);
		func_547(iParam0, -15);
	}
	func_550(iParam0);
}

void func_469(int iParam0, bool bParam1, int iParam2)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (func_551(iParam0) && !bParam1)
	{
		return;
	}
	if (_does_volume_exist((*Global_1887339)[iParam0]->f_6))
	{
		iVar0 = (*Global_1887339)[iParam0]->f_6;
	}
	else
	{
		iVar0 = func_552(iParam0);
	}
	bVar1 = func_545(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_553(iParam0);
		if (iParam2 > iVar2)
		{
			func_554(iParam0, func_546());
			func_555(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_548(iParam0, 33554432);
			if (_does_volume_exist(iVar0))
			{
				if (iParam0 == 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				_0xf2a2177ac848b3a8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_549(iParam0, 33554432);
		func_554(iParam0, -15);
		if (_does_volume_exist(iVar0))
		{
			_0xf2a2177ac848b3a8(iVar0, 1, 1);
		}
	}
	func_556(iParam0);
}

bool func_470(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_472(int iParam0, bool bParam1)
{
	if (!func_470(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_557(iParam0, 1);
	}
	else
	{
		if (func_558(iParam0))
		{
			return;
		}
		func_559(iParam0, 1);
	}
	func_560(iParam0, bParam1);
}

int func_473(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_561(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_561(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

void func_474(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_475(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_476(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_477(int iParam0)
{
	return func_366(iParam0, 2);
}

bool func_478(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_479(int iParam0)
{
	if (func_481(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_480(int iParam0)
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

bool func_481(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_482()
{
	if (!func_505())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

void func_483(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_366(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_484(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_485(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

void func_486()
{
	if (func_240() == -1)
	{
		return;
	}
	iVar0 = &Global_1296859;
	if (func_302(Global_1572887->f_7, 1))
	{
		func_298(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	else
	{
		func_182(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	(*Global_1056141)[iVar0]->f_187 = Global_1572887->f_106;
	(*Global_1056141)[iVar0]->f_187.f_1 = Global_1572887->f_106.f_9;
	(*Global_1056141)[iVar0]->f_187.f_2 = Global_1572887->f_106.f_10;
	(*Global_1056141)[iVar0]->f_187.f_3 = { Global_1572887->f_106.f_11 };
	(*Global_1056141)[iVar0]->f_187.f_8 = Global_1572887->f_106.f_13;
	(*Global_1056141)[iVar0]->f_187.f_5 = { Global_1572887->f_360 };
	(*Global_1056141)[iVar0]->f_187.f_9 = Global_1572887->f_106.f_74;
	if (func_101(1024))
	{
		func_298(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
	else
	{
		func_182(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
}

bool func_487()
{
	return func_166(*Global_1051213);
}

int func_488(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_319(Global_1196898->f_78[iVar0]->f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_489(int iParam0)
{
	return Global_1196898->f_78[iParam0]->f_3;
}

var func_490(int iParam0)
{
	return Global_1196339->f_1[iParam0]->f_3;
}

struct<8> func_491(int iParam0, var uParam1)
{
	if (((func_562(&Var8, iParam0) && func_563(&Var8)) && func_564(&Var8, uParam1)) && func_565(&Var8))
	{
		func_566(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

void func_492()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_493(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_568(bParam2, func_567(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_494(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

char* func_495(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_496(int iParam0)
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

var func_497(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_498(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

int func_499()
{
	if (Global_1293346->f_458.f_1548 >= 40 || Global_1293346->f_458.f_1548 < 0)
	{
		Global_1293346->f_458.f_1548 = 0;
	}
	return Global_1293346->f_458.f_1548;
}

void func_500(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1548 = iParam0;
}

int func_501()
{
	if (Global_1293346->f_458.f_1549 >= 10 || Global_1293346->f_458.f_1549 < 0)
	{
		Global_1293346->f_458.f_1549 = 0;
	}
	return Global_1293346->f_458.f_1549;
}

void func_502(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1549 = iParam0;
}

int func_503(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_561(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_504()
{
	return !Global_1572887->f_9;
}

bool func_505()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_506(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_507(int iParam0)
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

void func_508(struct<2> Param0, var uParam2)
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
	switch (func_420(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_570(func_569(Param0));
			iVar5 = func_571(iVar4);
			if (!func_572(iVar5, 0))
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

int func_509(struct<2> Param0)
{
	iVar0 = func_473(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_573(iVar0);
}

int func_510(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_561(Param0, &vVar0))
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
		func_561(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
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
			func_574(iVar9);
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

void func_511()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_561(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_512(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_513(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_514(int iParam0, int iParam1)
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

void func_515(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_516()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

bool func_517(int iParam0)
{
	iVar0 = func_575(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_576(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_577(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_518(struct<2> Param0)
{
	if (!func_166(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_319(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_519(int iParam0)
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
		func_429(Global_1900736->f_1[0]);
		return 1;
	}
	func_429(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_578(iParam0, Global_1900736->f_66);
	return 1;
}

bool func_520(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_521(int iParam0, int iParam1, bool bParam2)
{
	if (!func_579(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_580(iParam0, iParam1);
	}
	return true;
}

int func_522(int iParam0, int iParam1)
{
	if (!func_520(iParam0, 0))
	{
		return func_581(func_523(iParam0), iParam1);
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

int func_523(int iParam0)
{
	return iParam0;
}

int func_524(int iParam0, bool bParam1)
{
	if (!func_582(iParam0, 2))
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

bool func_525(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_579(iParam0))
	{
		return false;
	}
	*uParam3 = _0xf540239f9937033b(iParam0, iParam1);
	if (*uParam3 == 0)
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
	while (iVar0 < *uParam3)
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
		func_583(iParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

void func_526(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_455(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_527(int iParam0, var uParam1, var uParam2)
{
	if (func_584(iParam0, uParam1, &uVar0))
	{
		func_585(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_528(bool bParam0)
{
	if (func_240() == -1)
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

bool func_529()
{
	return (func_586(-1185145312, 0, 0, 0) > 0 && func_587(func_449(889965687, func_447(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_530(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_520(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_458(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_449(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_528(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_528(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_531(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_528(0);
	*uParam1 = { func_449(iParam0, func_450(0), iParam3, 0) };
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

bool func_532(int iParam0, int iParam1, int iParam2)
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

bool func_533(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_528(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_534(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_588(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_535(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_589(iParam0, iParam1, iParam2, iParam3);
}

bool func_536(int iParam0, int iParam1)
{
	if (!func_353(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

void func_537(int iParam0, int iParam1)
{
	if (!func_353(iParam0))
	{
		return;
	}
	if (!func_536(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_190[iParam0]->f_5 = (Global_39.f_190[iParam0]->f_5 || iParam1);
		return;
	}
	Global_1071686->f_21325[iParam0]->f_5 = (Global_1071686->f_21325[iParam0]->f_5 || iParam1);
}

void func_538(int iParam0, int iParam1)
{
	if (!func_353(iParam0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_190[iParam0]->f_5 = (Global_39.f_190[iParam0]->f_5 - (Global_39.f_190[iParam0]->f_5 && iParam1));
		return;
	}
	Global_1071686->f_21325[iParam0]->f_5 = (Global_1071686->f_21325[iParam0]->f_5 - (Global_1071686->f_21325[iParam0]->f_5 && iParam1));
}

void func_539(int iParam0, bool bParam1)
{
	if (!func_353(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_591(func_590(iParam0));
	}
	else
	{
		func_592(func_590(iParam0));
	}
}

bool func_540(int iParam0)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	return func_545(iParam0, 33554432);
}

int func_541()
{
	return Global_1939161->f_26;
}

bool func_542(int iParam0)
{
	if (!func_593(iParam0))
	{
		return false;
	}
	return func_594(iParam0);
}

int func_543(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 121)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

int func_544(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_240() != -1)
			{
				return -1308265478;
			}
			if (func_542(44))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_240() != -1)
			{
				return -650528936;
			}
			if (func_542(44))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_240() != -1)
			{
				return -877373104;
			}
			if (func_542(44))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

bool func_545(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

int func_546()
{
	return &Global_1902818;
}

void func_547(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1071686->f_19674[iParam0]->f_2 = iParam1;
}

void func_548(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (Global_8123[iParam0] || iParam1);
	}
	else
	{
		Global_1071686->f_19674[iParam0] = (Global_1071686->f_19674[iParam0] || iParam1);
	}
}

void func_549(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (&Global_8123[iParam0] - (Global_8123[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_19674[iParam0] = (&Global_1071686->f_19674[iParam0] - (Global_1071686->f_19674[iParam0] && iParam1));
}

void func_550(int iParam0)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (func_595(iParam0))
	{
		func_596(iParam0);
	}
	else
	{
		func_597(iParam0);
	}
}

bool func_551(int iParam0)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	return func_545(iParam0, 16777216);
}

int func_552(int iParam0)
{
	if (!func_465(iParam0))
	{
		return 0;
	}
	return (*Global_1887339)[iParam0]->f_4;
}

int func_553(int iParam0)
{
	if (!func_465(iParam0))
	{
		return 0;
	}
	iVar0 = func_598(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_600(func_599(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_554(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0]->f_1 = iParam1;
		return;
	}
	Global_1071686->f_19674[iParam0]->f_1 = iParam1;
}

void func_555(int iParam0, int iParam1)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_8123[iParam0]->f_3 = iParam1;
}

void func_556(int iParam0)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (func_540(iParam0) && func_601(iParam0))
	{
		func_591(func_602(iParam0, 0));
	}
	else
	{
		func_592(func_602(iParam0, 0));
	}
}

void func_557(int iParam0, int iParam1)
{
	if (!func_470(iParam0))
	{
		return;
	}
	if (!func_603(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_263[iParam0] = (Global_39.f_263[iParam0] || iParam1);
		return;
	}
	Global_1071686->f_21398[iParam0] = (Global_1071686->f_21398[iParam0] || iParam1);
}

bool func_558(int iParam0)
{
	if (!func_470(iParam0))
	{
		return false;
	}
	return func_603(iParam0, 2);
}

void func_559(int iParam0, int iParam1)
{
	if (!func_470(iParam0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_263[iParam0] = (&Global_39.f_263[iParam0] - (Global_39.f_263[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_21398[iParam0] = (&Global_1071686->f_21398[iParam0] - (Global_1071686->f_21398[iParam0] && iParam1));
}

void func_560(int iParam0, bool bParam1)
{
	if (!func_470(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (bParam1)
	{
		func_591(iVar0);
	}
	else
	{
		func_592(iVar0);
	}
}

bool func_561(struct<2> Param0, var uParam2)
{
	if (!func_166(Param0))
	{
		return false;
	}
	func_605(uParam2);
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

bool func_562(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(Global_1196898->f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_606(iParam1);
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_563(var uParam0)
{
	uParam0->f_2 = -310067910;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_564(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_565(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_566(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

bool func_567()
{
	return Global_1915715->f_20643;
}

int func_568(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_607())
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

int func_569(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_561(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_570(int iParam0)
{
	iVar0 = -1;
	if (func_608(&Var1, iParam0))
	{
		iVar0 = ((func_609() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_571(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_572(int iParam0, int iParam1)
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

int func_573(int iParam0)
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

int func_574(int iParam0)
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

int func_575(int iParam0, int iParam1)
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

bool func_576(int iParam0)
{
	iVar0 = func_610(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_577(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_578(int iParam0, int iParam1)
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
			func_611((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_611(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_166(*Global_1900736->f_1[0]))
	{
		func_414(*Global_1900736->f_1[0], 3);
	}
}

bool func_579(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_580(int iParam0, int iParam1)
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
			while (iScriptParam_0 < iLocal_477)
			{
				uVar472 = &Var0[iLocal_478]->f_36[iScriptParam_0];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iScriptParam_0 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return false;
}

int func_581(int iParam0, int iParam1)
{
	if (!func_582(iParam0, 2))
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

bool func_582(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_583(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_455(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_584(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_439(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_585(var uParam0, int iParam1, var uParam2)
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

int func_586(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_612(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_528(bParam1), iParam0, iParam3);
}

int func_587(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_613(&uParam0, iParam4, bParam5, iParam6);
}

bool func_588(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_589(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_614(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1806461473;
		case 3:
			return -694461623;
		case 1:
			return 1093870742;
		case 0:
			return 999150106;
		case 4:
			return 1098225713;
		case 5:
			return -1828192959;
		default:
			break;
	}
	return 0;
}

void func_591(int iParam0)
{
	if (func_615(iParam0) == 62)
	{
		_0x563fcb6620523917(-1145496915, -1482012664);
		_0x563fcb6620523917(-1043953850, -1482012664);
		_0x563fcb6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_616(iParam0) == 4 || func_616(iParam0) == 12) || func_471(func_616(iParam0)) == 4) || (func_603(func_616(iParam0), 8) && ((func_616(iParam0) == 2 || func_616(iParam0) == 0) || func_616(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		_0x563fcb6620523917(iParam0, iVar0);
	}
}

void func_592(int iParam0)
{
	if (func_615(iParam0) == 62)
	{
		_0x6786d7afac3162b3(-1145496915);
		_0x6786d7afac3162b3(-1043953850);
		_0x6786d7afac3162b3(-1783502982);
	}
	else if (_0xe38450dbcbc70e3d(iParam0, -1305340593) || _0xe38450dbcbc70e3d(iParam0, -1482012664))
	{
		_0x6786d7afac3162b3(iParam0);
	}
}

bool func_593(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_594(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

bool func_595(int iParam0)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	return func_545(iParam0, 67108864);
}

void func_596(int iParam0)
{
	StringCopy(&cVar0, func_617(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_618(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_597(int iParam0)
{
	StringCopy(&cVar0, func_617(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_618(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

int func_598(int iParam0)
{
	if (!func_465(iParam0))
	{
		return 0;
	}
	if (func_551(iParam0))
	{
		return -1;
	}
	return Global_8123[iParam0]->f_3;
}

int func_599(int iParam0)
{
	if (!func_465(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_13 == -1)
	{
		return Global_8123[iParam0]->f_1;
	}
	return Global_1071686->f_19674[iParam0]->f_1;
}

int func_600(int iParam0)
{
	if (!func_619(iParam0))
	{
		return 0;
	}
	func_620(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((to_float(iVar0) / 60f) + to_float(iVar1)) + (to_float(iVar2) * 60f)) + ((to_float(iVar3) * 24f) * 60f)) + (((to_float(iVar4) * 30.4375f) * 24f) * 60f)) + (((to_float(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = round(fVar6);
	return iVar7;
}

bool func_601(int iParam0)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return true;
	}
	return false;
}

int func_602(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 30:
			return -170458336;
		case 29:
			return 2023240596;
		case 31:
			return 1285083821;
		case 32:
			return -1840907462;
		case 33:
			return 756710130;
		case 34:
			return 1634157321;
		case 35:
			return 388370024;
		case 36:
			return 1092296123;
		case 37:
			return 467491346;
		case 38:
			return -1391584612;
		case 39:
			return -152111346;
		case 40:
			return 1447551317;
		case 41:
			return 153136092;
		case 42:
			return 1304405732;
		case 43:
			return 1074984055;
		case 53:
			return 1087476368;
		case 54:
			return -1768057340;
		case 44:
			return 1218874593;
		case 55:
			return -1438443836;
		case 45:
			return -2036340415;
		case 56:
			return -597278150;
		case 46:
			return 803939643;
		case 57:
			return -632496195;
		case 47:
			return -965943619;
		case 48:
			return 283532073;
		case 49:
			return -462827524;
		case 50:
			return -69067491;
		case 51:
			return -1864895118;
		case 58:
			return -1929806571;
		case 59:
			return -698525417;
		case 60:
			return -1149739894;
		case 52:
			return 380507325;
		case 61:
			return -875142075;
		case 62:
			return 407796241;
		case 63:
			return -152267914;
		case 64:
			return -1675443320;
		case 65:
			return 1940341639;
		case 66:
			return 1846596114;
		case 67:
			return 907708501;
		case 69:
			return 1825644981;
		case 70:
			return 2065937607;
		case 71:
			return -211317417;
		case 72:
			return 1801307910;
		case 73:
			return -4118897;
		case 74:
			return 1853610692;
		case 75:
			return -1574644415;
		case 76:
			return 2133055515;
		case 77:
			return -1413401932;
		case 78:
			return 801090761;
		case 79:
			return 2131218644;
		case 80:
			return 1708823660;
		case 81:
			return 7976942;
		case 82:
			return 2111120505;
		case 83:
			return 176893118;
		case 84:
			return 1179148161;
		case 68:
			return 602306665;
		case 85:
			return 547412068;
		case 86:
			return -1539748801;
		case 87:
			return -1605119912;
		case 88:
			return -884464063;
		case 89:
			return -1420970720;
		case 90:
			return 1017024547;
		case 91:
			return -1204497306;
		case 92:
			return -1621069480;
		case 93:
			return -458604261;
		case 94:
			return -923391614;
		case 95:
			return -689247089;
		case 97:
			return 44049568;
		case 98:
			return 1350259552;
		case 96:
			return 620414938;
		case 99:
			return -61661574;
		case 100:
			return -725338054;
		case 101:
			return -770123507;
		case 102:
			return 1322486734;
		case 103:
			return -460939553;
		case 104:
			return -1451863552;
		case 105:
			return 173833068;
		case 106:
			return -1681004136;
		case 107:
			return 713715980;
		case 108:
			return -31204969;
		case 109:
			return -1720064790;
		case 110:
			return -532172775;
		case 111:
			return -739067737;
		case 112:
			return -1203133835;
		case 113:
			return -1947411598;
		case 115:
			return -1298718762;
		case 116:
			return -595083064;
		case 117:
			return 884833917;
		case 118:
			return 2141950651;
		case 114:
			return -1049753365;
		case 119:
			return -1437650729;
		case 135:
			return 672925454;
		case 136:
			return 846062774;
		case 137:
			return 1713550306;
		case 138:
			return -1573562784;
		case 127:
			return 1369756178;
		case 128:
			return -736172423;
		case 129:
			return 1597070291;
		case 131:
			return -159501564;
		case 130:
			return -1438809608;
		case 132:
			return -102682392;
		case 133:
			return 676673543;
		case 134:
			return 1869665995;
		case 120:
			return -81068979;
		case 121:
			return 227618407;
		case 122:
			return 2106043438;
		case 123:
			return -1380256064;
		case 124:
			return -2118469183;
		case 125:
			return -558997834;
		case 126:
			return 1563120499;
		case 139:
			return 658339366;
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778;
	}
	return 0;
}

bool func_603(int iParam0, int iParam1)
{
	if (!func_470(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_21398[iParam0] && iParam1) != 0;
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 675537701;
		case 1:
			return -1915988145;
		case 2:
			return 38535626;
		case 3:
			return 1904167574;
		case 4:
			return 244711249;
		case 5:
			return -1859792564;
		case 6:
			return -1808688941;
		case 7:
			return -736296038;
		case 8:
			return -909439131;
		case 9:
			return 1917744724;
		case 10:
			return 821748379;
		case 11:
			return 196685551;
		case 12:
			return 1983548039;
		case 15:
			return -1716084250;
		case 13:
			return 985737465;
		case 16:
			return 869827975;
		case 14:
			return -735550853;
		default:
			break;
	}
	return 1776960747;
}

void func_605(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_606(int iParam0)
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

bool func_607()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

bool func_608(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_609()
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

int func_610(int iParam0)
{
	return func_621(iParam0) + 30;
}

void func_611(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

bool func_612(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_613(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_622(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_614(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_623(&(uParam0->f_4));
}

int func_615(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case -4613767:
			return 0;
		case 1567162363:
			return 1;
		case 456471693:
			return 2;
		case -1772963474:
			return 3;
		case 1881496386:
			return 4;
		case 711768994:
			return 5;
		case -440834066:
			return 6;
		case -1363847832:
			return 7;
		case 967769300:
			return 8;
		case -1436873944:
			return 9;
		case -1585669139:
			return 10;
		case 16791368:
			return 11;
		case 1452922822:
			return 12;
		case 549538301:
			return 13;
		case 974698954:
			return 14;
		case 445881012:
			return 15;
		case -2043891857:
			return 16;
		case 419656993:
			return 17;
		case -1732457315:
			return 18;
		case 1794318026:
			return 19;
		case 2035159966:
			return 20;
		case 770832805:
			return 21;
		case -1109814766:
			return 22;
		case -1080317735:
			return 23;
		case -1075550363:
			return 24;
		case 2138576151:
			return 25;
		case 1180954297:
			return 26;
		case 783603394:
			return 27;
		case -170458336:
			return 30;
		case 2023240596:
			return 29;
		case 1285083821:
			return 31;
		case -1840907462:
			return 32;
		case 756710130:
			return 33;
		case 1634157321:
			return 34;
		case 388370024:
			return 35;
		case 1092296123:
			return 36;
		case 467491346:
			return 37;
		case -1391584612:
			return 38;
		case -152111346:
			return 39;
		case 1447551317:
			return 40;
		case 153136092:
			return 41;
		case 1304405732:
			return 42;
		case 1074984055:
			return 43;
		case 1087476368:
			return 53;
		case -1768057340:
			return 54;
		case 1218874593:
			return 44;
		case -1438443836:
			return 55;
		case -2036340415:
			return 45;
		case -597278150:
			return 56;
		case 803939643:
			return 46;
		case -632496195:
			return 57;
		case -965943619:
			return 47;
		case 283532073:
			return 48;
		case -462827524:
			return 49;
		case -69067491:
			return 50;
		case -1864895118:
			return 51;
		case -1929806571:
			return 58;
		case 1162337247:
			return 28;
		case -698525417:
			return 59;
		case -1149739894:
			return 60;
		case 380507325:
			return 52;
		case -875142075:
			return 61;
		case 407796241:
			return 62;
		case -152267914:
			return 63;
		case -1675443320:
			return 64;
		case 1940341639:
			return 65;
		case 1846596114:
			return 66;
		case 907708501:
			return 67;
		case 1825644981:
			return 69;
		case 2065937607:
			return 70;
		case -211317417:
			return 71;
		case 1801307910:
			return 72;
		case -4118897:
			return 73;
		case 1853610692:
			return 74;
		case -1574644415:
			return 75;
		case 2133055515:
			return 76;
		case -1413401932:
			return 77;
		case 801090761:
			return 78;
		case 2131218644:
			return 79;
		case 1708823660:
			return 80;
		case 7976942:
			return 81;
		case 2111120505:
			return 82;
		case 176893118:
			return 83;
		case 602306665:
			return 68;
		case 1179148161:
			return 84;
		case 547412068:
			return 85;
		case -1539748801:
			return 86;
		case -1605119912:
			return 87;
		case -884464063:
			return 88;
		case -1420970720:
			return 89;
		case 1017024547:
			return 90;
		case -1204497306:
			return 91;
		case -1621069480:
			return 92;
		case -458604261:
			return 93;
		case -923391614:
			return 94;
		case -689247089:
			return 95;
		case 44049568:
			return 97;
		case 1350259552:
			return 98;
		case 620414938:
			return 96;
		case -61661574:
			return 99;
		case -725338054:
			return 100;
		case -770123507:
			return 101;
		case 1322486734:
			return 102;
		case -460939553:
			return 103;
		case -1451863552:
			return 104;
		case 713715980:
			return 107;
		case -31204969:
			return 108;
		case -1720064790:
			return 109;
		case 173833068:
			return 105;
		case -1681004136:
			return 106;
		case -532172775:
			return 110;
		case -739067737:
			return 111;
		case -1203133835:
			return 112;
		case -1947411598:
			return 113;
		case -1049753365:
			return 114;
		case -1298718762:
			return 115;
		case -595083064:
			return 116;
		case 884833917:
			return 117;
		case 2141950651:
			return 118;
		case -1437650729:
			return 119;
		case 672925454:
			return 135;
		case 846062774:
			return 136;
		case 1713550306:
			return 137;
		case -1573562784:
			return 138;
		case 1369756178:
			return 127;
		case -736172423:
			return 128;
		case 1597070291:
			return 129;
		case -159501564:
			return 131;
		case -1438809608:
			return 130;
		case -102682392:
			return 132;
		case 676673543:
			return 133;
		case 1869665995:
			return 134;
		case -81068979:
			return 120;
		case 227618407:
			return 121;
		case 2106043438:
			return 122;
		case -1380256064:
			return 123;
		case -2118469183:
			return 124;
		case -558997834:
			return 125;
		case 1563120499:
			return 126;
		case 658339366:
			return 139;
		default:
			break;
	}
	return -1;
}

int func_616(int iParam0)
{
	switch (iParam0)
	{
		case 675537701:
			return 0;
		case -1915988145:
			return 1;
		case 38535626:
			return 2;
		case 1904167574:
			return 3;
		case 244711249:
			return 4;
		case -1859792564:
			return 5;
		case -1808688941:
			return 6;
		case -736296038:
			return 7;
		case -909439131:
			return 8;
		case 1917744724:
			return 9;
		case 821748379:
			return 10;
		case 196685551:
			return 11;
		case 1983548039:
			return 12;
		case 985737465:
			return 13;
		case -735550853:
			return 14;
		case -1716084250:
			return 15;
		case 869827975:
			return 16;
		default:
			break;
	}
	return -1;
}

char* func_617(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_TRAPPER";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 139:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

var func_618(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_619(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_624(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_625(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_626(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_627(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_628(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_629(iParam0);
	if (iVar5 < 1 || iVar5 > func_630(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_620(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_631(func_546(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

int func_621(int iParam0)
{
	return iParam0 * 31;
}

bool func_622(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_528(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_533(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_623(var uParam0)
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

int func_624(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_625(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_626(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_627(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_632(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_628(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_629(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_630(int iParam0, int iParam1)
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

void func_631(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_633(iParam0, iParam1, 1))
	{
		iVar0 = func_628(iParam1);
		iVar1 = func_627(iParam0);
		iVar2 = (func_627(iParam0) - func_627(iParam1));
		iVar3 = (func_628(iParam0) - func_628(iParam1));
		iVar4 = (func_629(iParam0) - func_629(iParam1));
		iVar5 = (func_626(iParam0) - func_626(iParam1));
		iVar6 = (func_625(iParam0) - func_625(iParam1));
		iVar7 = (func_624(iParam0) - func_624(iParam1));
	}
	else
	{
		iVar0 = func_628(iParam0);
		iVar1 = func_627(iParam1);
		iVar2 = (func_627(iParam1) - func_627(iParam0));
		iVar3 = (func_628(iParam1) - func_628(iParam0));
		iVar4 = (func_629(iParam1) - func_629(iParam0));
		iVar5 = (func_626(iParam1) - func_626(iParam0));
		iVar6 = (func_625(iParam1) - func_625(iParam0));
		iVar7 = (func_624(iParam1) - func_624(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_630(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_634(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

int func_632(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_633(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_619(iParam1) || !func_619(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_634(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

