void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1(&uScriptParam_0);
	while (!func_2(Local_557.f_2))
	{
		func_3();
		wait(0);
	}
	func_4(uVar1574);
	func_5();
}

void func_1(var uParam0)
{
	func_6(32, *uParam0);
	func_7();
	network_register_host_broadcast_variables(&Local_15, 285, 41);
	func_8(_0xba24095ea96dfe17(&Local_15), 285, "m_hostData");
	network_register_player_broadcast_variables(&Local_300, 257, 42);
	func_9(_0x690806bc83bc8ca2(Local_300[0]), 257, "m_clientData");
	func_10(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
	func_11(uParam0);
	if (network_is_host_of_this_script())
	{
		func_12(uParam0);
	}
}

bool func_2(struct<2> Param0)
{
	if (func_13(0, 0))
	{
		return true;
	}
	else if (func_14(Param0, 1, 0))
	{
		return true;
	}
	else if (!network_is_in_session())
	{
		return true;
	}
	else if (&Local_300[participant_id_to_int()] == 3)
	{
		return true;
	}
	return false;
}

void func_3()
{
	Local_557.f_1008 = participant_id_to_int();
	func_15();
	func_16();
	if (network_is_host_of_this_script())
	{
		func_17();
	}
}

void func_4(var uParam0)
{
	func_18(0);
	if (_0x603ac35fd4602c76(Local_557.f_577))
	{
		func_19();
		func_20();
		iVar0 = 0;
		while (iVar0 < Local_557.f_20.f_548)
		{
			func_22(func_21(iVar0));
			func_24(func_23(iVar0));
			func_22(func_25(iVar0));
			iVar0++;
		}
		iVar3 = 0;
		while (iVar3 < Local_557.f_20.f_555)
		{
			iVar1 = func_26(iVar3);
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				func_22(func_27(iVar3, iVar2));
				func_24(func_28(iVar3, iVar2));
				func_22(func_29(iVar3, iVar2));
				iVar2++;
			}
			iVar3++;
		}
		_datafile_unload(Local_557.f_577);
	}
	if (func_30(Local_557.f_957))
	{
		destroy_tracked_point(Local_557.f_957);
	}
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = int_to_playerindex(iVar4);
		if (_0x72b2e00c9bac6789(&(Local_557.f_960), iVar4))
		{
			func_31(iVar5);
		}
		iVar4++;
	}
	func_32(0);
	func_33(0);
	func_34();
	func_35();
	func_36();
	func_37();
	func_38();
	func_39();
	func_40();
	func_41();
	func_42();
	if (func_43(1048576))
	{
		_0xdfc85c5199045026(player_id(), 1f);
		func_44(1048576);
	}
	if (!network_is_in_session())
	{
		if (func_43(4) && func_45())
		{
			func_46(131072);
		}
		return;
	}
	if (func_47(Local_300[Local_557.f_1008], 8192) && !func_47(Local_300[Local_557.f_1008], 16384))
	{
		func_48();
		func_49(1);
	}
	iVar6 = 0;
	while (iVar6 < 18)
	{
		if (func_50(iVar6, 256))
		{
		}
		else if (func_50(iVar6, 2))
		{
		}
		else
		{
			func_22(&(Local_557.f_20.f_422[iVar6]));
		}
		iVar6++;
	}
	iVar8 = player_ped_id();
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_51(iVar0, 131072) && func_52(iVar0, &iVar7, 0, 1))
		{
			_0x3088634cf8c819cf(iVar7);
		}
		if (func_53(iVar0))
		{
			if (func_52(iVar0, &iVar7, 0, 1))
			{
				_0x5826efd6d73c4de5(iVar7);
			}
			if (func_51(iVar0, 65536) && func_54(iVar0, &iVar7, 0))
			{
				_0x5826efd6d73c4de5(iVar7);
			}
		}
		if (((func_55(Local_15.f_2[iVar0]->f_2) && func_51(iVar0, 32768)) && func_52(iVar0, &iVar7, 1, 0)) && get_relationship_between_peds(iVar7, iVar8) == 6)
		{
			func_56(iVar0, iVar7);
		}
		iVar0++;
	}
	if (!func_43(func_57(758533472)) && !func_43(func_57(-1416703903)))
	{
		func_58(758533472, 1);
	}
	if (func_59(8192) && func_43(4))
	{
		if (_0xa62bbaae67a05bb0(player_id()))
		{
			_0x330ca55a3647fa1c(player_id(), 0);
		}
		_0xe5d3eb37abc1eb03(player_id());
	}
	func_60();
	if (!network_is_host_of_this_script() || network_get_num_participants() > 1)
	{
		return;
	}
	func_61();
	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_62(iVar0, 1);
		iVar0++;
	}
	iVar9 = 0;
	while (iVar9 < 2)
	{
		func_63(iVar9);
		iVar9++;
	}
	iVar10 = 0;
	while (iVar10 < 5)
	{
		if (!does_group_exist(&(Local_15.f_192[iVar10])))
		{
		}
		else
		{
			remove_group(&(Local_15.f_192[iVar10]));
		}
		iVar10++;
	}
	iVar6 = 0;
	while (iVar6 < 18)
	{
		func_64(iVar6);
		iVar6++;
	}
}

void func_5()
{
	terminate_this_thread();
}

void func_6(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_5();
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
			func_5();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_5();
		}
		if (!network_is_game_in_progress())
		{
			func_5();
		}
		if (!network_is_signed_online())
		{
			func_5();
		}
		if (func_65() == 0)
		{
			if (func_66())
			{
				func_5();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_5();
	}
	return 1;
}

int func_8(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_10(bool bParam0)
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
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
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
			func_5();
			return;
		}
		wait(0);
	}
}

void func_11(var uParam0)
{
	Local_557 = *uParam0;
	Local_557.f_1 = uParam0->f_5;
	Local_557.f_2 = { uParam0->f_7 };
	Local_557.f_20.f_556 = func_67(Local_557.f_2);
	Local_557.f_20 = func_70(func_69(func_68(349772825), Local_557.f_20.f_556));
	Local_557.f_20.f_1 = func_68(Local_557.f_20);
	Local_557.f_20.f_16 = func_71(Local_557.f_20);
}

void func_12(var uParam0)
{
	Local_15.f_283 = uParam0->f_9;
	if (!network_is_player_active(Local_15.f_283))
	{
		func_72(6);
		return;
	}
	Local_15.f_282 = _0x901e0dc25080c8b9(Local_15.f_283);
	if (!_0xd6f6acf4392187fb(Local_15.f_282))
	{
		func_72(6);
		return;
	}
	Local_15.f_278 = _0x149a2751ab66ac02(Local_15.f_282);
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

bool func_14(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_73(*Global_1051213) && !func_74(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_75(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_76(iParam3, 255))
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
	if (func_77())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_73(*Global_1051213))
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

void func_15()
{
	if (!network_is_in_session())
	{
		return;
	}
	Local_557.f_1008 = participant_id_to_int();
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		switch (get_event_at_index(1, iVar0))
		{
			case -1315570756:
				func_78(iVar0);
				break;
			case -1065733433:
				func_79(iVar0);
				break;
			case -454144443:
				func_80(iVar0);
				break;
			case -507840394:
				func_81(iVar0);
				break;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar1))
		{
			case -140551285:
				func_82(iVar1);
				break;
		}
		iVar1++;
	}
}

void func_16()
{
	if (func_47(Local_300[Local_557.f_1008], 2))
	{
		func_83(Local_300[Local_557.f_1008], 3);
	}
	switch (func_84(Local_300[Local_557.f_1008]))
	{
		case 0:
			func_85();
			if (func_86() != 4)
			{
				return;
			}
			func_83(Local_300[Local_557.f_1008], 1);
			func_87();
			break;
		case 1:
			func_88();
			if (!func_47(Local_300[Local_557.f_1008], 1))
			{
				return;
			}
			func_83(Local_300[Local_557.f_1008], 2);
			break;
		case 2:
			func_89();
			if (func_90() != 6)
			{
				return;
			}
			if (!func_47(Local_300[Local_557.f_1008], 16) && func_43(4))
			{
				func_91();
			}
			func_92();
			if (!func_93())
			{
				return;
			}
			func_83(Local_300[Local_557.f_1008], 3);
			break;
	}
}

void func_17()
{
	if (func_86() != 4)
	{
		return;
	}
	if (func_59(4))
	{
		func_72(6);
		return;
	}
	switch (func_90())
	{
		case 0:
			func_94();
			func_72(1);
			break;
		case 1:
			if (!func_95())
			{
				return;
			}
			func_72(2);
			break;
		case 2:
			func_96();
			if (!func_59(1))
			{
				return;
			}
			func_72(3);
			break;
		case 3:
			func_97();
			if (!func_59(2))
			{
				return;
			}
			if (func_45())
			{
				func_72(4);
				return;
			}
			func_72(5);
			break;
		case 4:
			func_98();
			if (!func_59(262144))
			{
				return;
			}
			func_72(5);
			break;
		case 5:
			func_99();
			if (Local_15.f_275 <= 0)
			{
				if (func_45() && !func_59(4194304))
				{
					func_100(32);
				}
				else
				{
					func_100(64);
				}
			}
			else if (func_59(16))
			{
				if ((Local_557.f_20.f_16 == 1320143426 && Local_557.f_20.f_549 > 0) && Local_15.f_275 < Local_557.f_20.f_549)
				{
					func_100(64);
				}
				else
				{
					func_100(32);
				}
				func_100(131072);
			}
			else if (func_59(1048576))
			{
				func_100(32);
			}
			else if (func_59(8388608))
			{
				func_100(32);
			}
			if (!func_59(32) && !func_59(64))
			{
				return;
			}
			func_72(6);
			break;
		case 6:
			func_101();
			break;
	}
}

void func_18(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!_does_volume_exist(&(Local_557.f_978[iVar0])))
		{
		}
		else if (bParam0)
		{
			func_102(&(Local_557.f_978[iVar0]), 1);
		}
		else
		{
			func_103(&(Local_557.f_978[iVar0]));
		}
		iVar0++;
	}
}

void func_19()
{
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_553)
	{
		sVar1 = func_105(func_104(iVar0));
		if (is_string_null_or_empty(sVar1))
		{
		}
		else
		{
			if (!Local_557.f_20.f_495[iVar0]->f_1)
			{
				return;
			}
			remove_waypoint_recording(sVar1);
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 21)
	{
		func_106(iVar2);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if ((func_107(iVar3, 4) && func_108(iVar3, &Var12)) && func_109(Var12, -1111171646, &uVar4, 0))
		{
			remove_waypoint_recording(func_110(&uVar4));
			func_111(iVar3, 4);
			func_111(iVar3, 8);
		}
		iVar3++;
	}
}

void func_20()
{
	if (!func_43(4194304))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_113(iVar1, &iVar2))
		{
		}
		else
		{
			func_114(iVar2);
			func_115(iVar2, 0, 0);
		}
		iVar1++;
	}
	func_44(4194304);
}

int func_21(int iParam0)
{
	func_116(iParam0, &Var0);
	func_117(Var0, -486752250, &uVar5, 1);
	return uVar5;
}

void func_22(int iParam0)
{
	if (!is_model_valid(iParam0) || iParam0 == 0)
	{
		return;
	}
	set_model_as_no_longer_needed(iParam0);
}

int func_23(int iParam0)
{
	if (!func_116(iParam0, &Var0))
	{
		return 0;
	}
	func_117(Var0, 256341061, &uVar5, 0);
	return uVar5;
}

void func_24(int iParam0)
{
	if (!func_118(iParam0))
	{
		return;
	}
	_0xc3896d03e2852236(iParam0);
}

int func_25(int iParam0)
{
	if (func_116(iParam0, &Var0) && func_117(Var0, 1464077990, &uVar5, 0))
	{
		return uVar5;
	}
	return -1038436471;
}

int func_26(int iParam0)
{
	if (func_119(&Var0) && func_120(&Var0, 1823038874, iParam0, 0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	func_121(&Var0, iParam0, iParam1);
	func_117(Var0, -486752250, &uVar5, 1);
	return uVar5;
}

int func_28(int iParam0, int iParam1)
{
	func_121(&Var0, iParam0, iParam1);
	func_117(Var0, 256341061, &uVar5, 1);
	return uVar5;
}

int func_29(int iParam0, int iParam1)
{
	if (func_121(&Var0, iParam0, iParam1) && func_117(Var0, 1464077990, &uVar5, 0))
	{
		return uVar5;
	}
	return -1038436471;
}

bool func_30(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 0)
	{
		return true;
	}
	return false;
}

void func_31(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_28345), iParam0);
		if (func_122(iParam0))
		{
			func_123(iParam0);
		}
	}
}

void func_32(bool bParam0)
{
	if (func_43(262144) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_124(1);
		func_125(262144);
	}
	else
	{
		func_124(0);
		func_44(262144);
	}
}

void func_33(bool bParam0)
{
	if (func_43(524288) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		_0x009cf9a29972c298(454742288);
		func_125(524288);
	}
	else
	{
		_0x009cf9a29972c298(0);
		func_44(524288);
	}
}

void func_34()
{
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (!does_particle_fx_looped_exist(Local_557.f_20.f_422[iVar0]->f_3))
		{
		}
		else
		{
			stop_particle_fx_looped(Local_557.f_20.f_422[iVar0]->f_3, true);
			remove_named_ptfx_asset(get_hash_key(func_126()));
		}
		iVar0++;
	}
}

void func_35()
{
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_547)
	{
		delete_patrol_route(func_127(iVar0));
		iVar0++;
	}
}

void func_36()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (_does_anim_scene_exist(&(Local_557.f_950[iVar0])))
		{
			_delete_anim_scene(&(Local_557.f_950[iVar0]));
		}
		iVar0++;
	}
}

void func_37()
{
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (Local_557.f_20.f_422[iVar0]->f_2 == -1)
		{
		}
		else
		{
			_0x9cf1836c03fb67a2(&(Local_557.f_20.f_422[iVar0]->f_2), 1);
			Local_557.f_20.f_422[iVar0]->f_2 = -1;
		}
		iVar0++;
	}
}

void func_38()
{
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_550)
	{
		if (_does_volume_exist(&(Local_557.f_962[iVar0])))
		{
			_delete_volume(&(Local_557.f_962[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_552)
	{
		if (_does_volume_exist(&(Local_557.f_971[iVar0])))
		{
			_0x74c2b3dc0b294102(&(Local_557.f_971[iVar0]));
			_0xa1cfb35069d23c23(&(Local_557.f_971[iVar0]));
			_delete_volume(&(Local_557.f_971[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (_does_volume_exist(&(Local_557.f_975[iVar0])))
		{
			_delete_volume(&(Local_557.f_975[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (_does_volume_exist(&(Local_557.f_978[iVar0])))
		{
			_delete_volume(&(Local_557.f_978[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_551)
	{
		if (_does_volume_exist(&(Local_557.f_921[iVar0])))
		{
			_delete_volume(&(Local_557.f_921[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_128(&(Local_557.f_987[iVar0]));
		iVar0++;
	}
}

void func_39()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (!network_does_network_id_exist(&(Local_15.f_2[iVar0])) || !network_has_control_of_network_id(&(Local_15.f_2[iVar0])))
		{
		}
		else
		{
			iVar1 = net_to_ped(&(Local_15.f_2[iVar0]));
			if (get_ped_relationship_group_default_hash(iVar1) == 0)
			{
			}
			else
			{
				set_ped_relationship_group_hash(iVar1, get_ped_relationship_group_default_hash(iVar1));
			}
		}
		iVar0++;
	}
	func_129(Local_557.f_578.f_1);
	func_129(Local_557.f_578);
	func_129(Local_557.f_578.f_4);
	func_129(Local_557.f_578.f_5);
	func_129(Local_557.f_578.f_3);
	func_129(Local_557.f_578.f_2);
}

void func_40()
{
	func_130();
	func_131();
	func_132();
	func_133();
	func_134();
	func_135();
}

void func_41()
{
	if (!func_43(2))
	{
		return;
	}
	func_136(0);
	func_44(2);
}

void func_42()
{
	if (_text_database_has_loaded(func_137()))
	{
		_text_database_delete(func_137());
	}
}

bool func_43(int iParam0)
{
	return func_138(Local_557.f_5, iParam0);
}

void func_44(int iParam0)
{
	func_139(&(Local_557.f_5), iParam0);
}

bool func_45()
{
	switch (Local_557.f_20.f_16)
	{
		case 1047079933:
		case 1862763509:
			return true;
		default:
			break;
	}
	return false;
}

void func_46(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 - (Global_1102219->f_3 && iParam0));
}

bool func_47(var uParam0, int iParam1)
{
	return func_138(uParam0->f_1, iParam1);
}

void func_48()
{
	func_140(2);
}

void func_49(bool bParam0)
{
	if (bParam0)
	{
		func_141(109);
		if (!Global_1296859->f_12)
		{
			func_142(16);
		}
	}
	else
	{
		func_143(109);
		if (!Global_1296859->f_12)
		{
			func_142(16);
		}
	}
}

bool func_50(int iParam0, int iParam1)
{
	return func_138(Local_557.f_20.f_422[iParam0]->f_1, iParam1);
}

bool func_51(int iParam0, int iParam1)
{
	return func_138(Local_557.f_20.f_22[iParam0]->f_1, iParam1);
}

bool func_52(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!network_does_network_id_exist(&(Local_15.f_2[iParam0])))
	{
		return false;
	}
	*iParam1 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		return true;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		if (!bParam3 || !get_ped_config_flag(*iParam1, 11, false))
		{
			return false;
		}
	}
	return true;
}

bool func_53(int iParam0)
{
	if (!func_59(8192))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_553)
	{
		if (&Local_557.f_20.f_495[iVar0] != iParam0)
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

bool func_54(int iParam0, int iParam1, bool bParam2)
{
	if (!network_does_network_id_exist(Local_15.f_2[iParam0]->f_1))
	{
		return false;
	}
	*iParam1 = net_to_ped(Local_15.f_2[iParam0]->f_1);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		return true;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		return false;
	}
	return true;
}

bool func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 516423162:
		case 1583594396:
			return false;
		default:
			break;
	}
	return true;
}

void func_56(int iParam0, int iParam1)
{
	if (!does_blip_exist(&(Local_557.f_584[iParam0])))
	{
		return;
	}
	if (!_0xe9f676788f8d5e1e(&(Local_557.f_584[iParam0])))
	{
		return;
	}
	func_144(iParam0);
	_blip_set_modifier(&(Local_557.f_584[iParam0]), 2096805056);
	_0xdeede7c41742e011(&(Local_557.f_584[iParam0]));
	Local_557.f_584[iParam0] = 0;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 1231609204:
			return 8;
		case 1138140145:
			return 16;
		case -1416703903:
			return 32;
		case 758533472:
			return 64;
		case -2111154143:
			return 128;
		default:
			break;
	}
	return 0;
}

void func_58(int iParam0, bool bParam1)
{
	iVar0 = func_57(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (func_43(iVar0))
	{
		return;
	}
	if (func_145(iParam0, 1, bParam1))
	{
		func_125(iVar0);
	}
}

bool func_59(int iParam0)
{
	return func_138(Local_15.f_1, iParam0);
}

void func_60()
{
	if (func_43(4))
	{
		func_146(0);
		func_147(0);
		if (!func_43(1))
		{
			func_149(func_148(), 1);
		}
	}
	if (func_47(Local_300[Local_557.f_1008], 4))
	{
		if (func_45())
		{
			func_46(131072);
		}
		if (func_59(64))
		{
			func_150();
			return;
		}
		else if (func_59(32))
		{
			func_151();
			return;
		}
	}
	else if (func_47(Local_300[Local_557.f_1008], 64))
	{
		if (func_59(32))
		{
			func_150();
			return;
		}
		else if (func_59(64))
		{
			func_151();
			return;
		}
	}
	else if (func_47(Local_300[Local_557.f_1008], 8192))
	{
		func_46(131072);
		if (func_59(32))
		{
			func_150();
			return;
		}
		else if (func_59(64))
		{
			func_151();
			return;
		}
	}
	else if (func_47(Local_300[Local_557.f_1008], 131072))
	{
		if (func_59(32))
		{
			func_150();
			return;
		}
		else if (func_59(64))
		{
			func_151();
			return;
		}
	}
	func_152();
}

void func_61()
{
	iVar0 = 0;
	while (iVar0 < Local_15.f_263.f_6)
	{
		if (_0xf6a8a652a6b186cd(&(Local_15.f_263[iVar0])))
		{
			_0xfdfecc6ee4491e11(&(Local_15.f_263[iVar0]));
		}
		iVar0++;
	}
}

void func_62(int iParam0, bool bParam1)
{
	if (network_does_network_id_exist(&(Local_15.f_2[iParam0])))
	{
		iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
		if (!is_ped_dead_or_dying(iVar0, true) && !is_ped_injured(iVar0))
		{
			set_ped_keep_task(iVar0, bParam1);
			set_blocking_of_non_temporary_events(iVar0, false);
		}
		set_ped_as_no_longer_needed(&iVar0);
	}
	if (network_does_network_id_exist(Local_15.f_2[iParam0]->f_1))
	{
		iVar1 = net_to_ped(Local_15.f_2[iParam0]->f_1);
		set_ped_as_no_longer_needed(&iVar1);
	}
}

void func_63(int iParam0)
{
	if (func_153(iParam0, 1))
	{
		remove_pickup(&(Local_15.f_217[iParam0]));
	}
}

void func_64(int iParam0)
{
	if (network_does_network_id_exist(&(Local_15.f_198[iParam0])))
	{
		if (func_50(iParam0, 2))
		{
			iVar0 = _0xd08066e00d26c448(&(Local_15.f_198[iParam0]));
			_set_propset_as_no_longer_needed(iVar0);
		}
		else if (func_50(iParam0, 4))
		{
			iVar1 = net_to_veh(&(Local_15.f_198[iParam0]));
			if (is_vehicle_driveable(iVar1, false, false))
			{
				_0x8e5da070bad3279e(iVar1, 500f, 1, 0);
			}
			set_vehicle_as_no_longer_needed(&iVar1);
		}
		else if (func_50(iParam0, 128))
		{
			iVar2 = net_to_ped(&(Local_15.f_198[iParam0]));
			set_ped_as_no_longer_needed(&iVar2);
		}
		else
		{
			iVar3 = net_to_obj(&(Local_15.f_198[iParam0]));
			set_object_as_no_longer_needed(&iVar3);
		}
	}
}

int func_65()
{
	return Global_1572887->f_13;
}

bool func_66()
{
	return Global_1051252->f_8;
}

int func_67(struct<2> Param0)
{
	return func_154(Param0);
}

var func_68(int iParam0)
{
	iVar0 = func_156(0, (func_155() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_157(iVar0);
}

int func_69(int iParam0, var uParam1)
{
	if (!func_158(iParam0, &Var0))
	{
		return 0;
	}
	iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Var7 = { Var0 };
		Var7.f_2 = 1089670230;
		Var7.f_3 = iVar6;
		if (!_datafile_get_data_node_index(&(Var7.f_1), &Var7))
		{
		}
		else
		{
			Var7.f_2 = 1649401908;
			_datafile_get_hash(&uVar12, &Var7);
			Var7.f_2 = 1196324698;
			Var7.f_3 = uParam1;
			if (!_datafile_get_data_node_index(&(Var7.f_1), &Var7))
			{
			}
			else
			{
				return uVar12;
			}
		}
		iVar6++;
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 1779800513:
			return -590482787;
		case 1994622214:
			return -1711308722;
		case 1806659562:
			return 349772825;
		case -174676621:
			return 1657045547;
		default:
			break;
	}
	return iParam0;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case -590482787:
			return 1862763509;
		case -1711308722:
			return 1047079933;
		default:
			break;
	}
	return 1320143426;
}

void func_72(int iParam0)
{
	Local_15 = iParam0;
}

bool func_73(struct<2> Param0)
{
	if (!func_159(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_160(Param0))
	{
		return false;
	}
	return true;
}

bool func_74(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_75(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_76(int iParam0, int iParam1)
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

bool func_77()
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
	if (!func_73(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_78(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 32))
	{
		return;
	}
	if (!is_entity_a_ped(Var0))
	{
		return;
	}
	iVar33 = get_ped_index_from_entity_index(Var0);
	if (func_45())
	{
		if (!func_161(iVar33, &iVar35))
		{
			return;
		}
		if (!func_162(iVar35))
		{
			return;
		}
		if (func_163(iVar35))
		{
			return;
		}
		iVar34 = get_player_ped(&(Local_15.f_234[iVar35]));
		if (!does_entity_exist(iVar34))
		{
			return;
		}
		if (iVar34 != iVar33)
		{
			return;
		}
		if (!Var0.f_3)
		{
			if (!network_has_control_of_entity(iVar33))
			{
				return;
			}
			if (Var0 == Var0.f_1)
			{
				return;
			}
			if (!is_entity_a_ped(Var0.f_1))
			{
				return;
			}
			iVar36 = get_ped_index_from_entity_index(Var0.f_1);
			if (!is_ped_a_player(iVar36))
			{
				return;
			}
			func_164(iVar35, network_get_player_index_from_ped(iVar36));
			return;
		}
		if (!func_47(Local_300[Local_557.f_1008], 4))
		{
			return;
		}
		if (func_165(iVar35, Var0, iVar33))
		{
			func_166(iVar35);
		}
		return;
	}
	if (!func_167(iVar33, &iVar32, &bVar37))
	{
		return;
	}
	if (!bVar37)
	{
		if (Var0.f_3)
		{
			func_168(iVar32);
		}
		return;
	}
	if (get_entity_health(Var0) == 0)
	{
		if (!Var0.f_3 && !Var0.f_24)
		{
			Var0.f_3 = 1;
		}
	}
	if (!Var0.f_3 || Var0.f_24)
	{
		if (!bVar37 || !network_has_control_of_entity(iVar33))
		{
			return;
		}
		if (!is_entity_a_ped(Var0.f_1))
		{
			return;
		}
		iVar38 = get_ped_index_from_entity_index(Var0.f_1);
		if (!is_ped_a_player(iVar38))
		{
			return;
		}
		func_169(iVar32, network_get_player_index_from_ped(iVar38));
		return;
	}
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return;
	}
	if (func_170(Var0, iVar33, iVar32))
	{
		func_171(iVar32);
	}
}

void func_79(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 2))
	{
		return;
	}
	if ((!does_entity_exist(Var0) || !is_entity_a_ped(Var0)) || !network_has_control_of_entity(Var0))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1) || !is_entity_a_ped(Var0.f_1))
	{
		return;
	}
	iVar2 = get_ped_index_from_entity_index(Var0);
	iVar3 = get_ped_index_from_entity_index(Var0.f_1);
	if (!is_ped_a_player(iVar3))
	{
		return;
	}
	if (func_45())
	{
		if (!is_ped_a_player(iVar2))
		{
			return;
		}
		if (!func_161(iVar2, &iVar4))
		{
			return;
		}
		if (!func_162(iVar4))
		{
			return;
		}
		if (func_163(iVar4))
		{
			return;
		}
		func_164(iVar4, network_get_player_index_from_ped(iVar3));
	}
	else
	{
		if (!func_167(iVar2, &iVar5, &bVar6) || !bVar6)
		{
			return;
		}
		func_169(iVar5, network_get_player_index_from_ped(iVar3));
	}
}

void func_80(int iParam0)
{
	if (!get_event_data(1, iParam0, &iVar0, 8))
	{
		return;
	}
	if (!does_pickup_exist(iVar0))
	{
		return;
	}
	if (!network_has_control_of_pickup(iVar0))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 2)
	{
		if (!func_172(iVar8, 1))
		{
		}
		else if (&Local_15.f_217[iVar8] != iVar0)
		{
		}
		else
		{
			bVar9 = true;
		}
		else
		{
			iVar8++;
		}
	}
	if (!bVar9)
	{
		return;
	}
	remove_pickup(&(Local_15.f_217[iVar8]));
	func_174(11, iVar8, func_173(0, 8), -1);
}

void func_81(int iParam0)
{
	if (!get_event_data(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 53:
			func_175(iParam0);
			break;
	}
}

void func_82(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 6))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 21)
	{
		if ((Local_15.f_2[iVar8]->f_2 == 0 || Local_15.f_2[iVar8]->f_2 == 1824637041) || Local_15.f_2[iVar8]->f_2 == 516423162)
		{
		}
		else if (func_176(iVar8, 1))
		{
		}
		else if (func_51(iVar8, 67108864))
		{
		}
		else if (!network_does_network_id_exist(&(Local_15.f_2[iVar8])))
		{
		}
		else
		{
			iVar9 = net_to_ped(&(Local_15.f_2[iVar8]));
			if (is_ped_dead_or_dying(iVar9, true))
			{
			}
			else
			{
				vVar10 = { get_entity_coords(iVar9, false, false) };
				if (vdist(vVar10, Var0.f_3) > _0x2ba9d7bf629f920c(iVar9))
				{
				}
				else
				{
					func_177(iVar8, 67108864);
					if (!network_has_control_of_network_id(&(Local_15.f_2[iVar8])))
					{
					}
					else
					{
						if (is_ped_using_any_scenario(iVar9))
						{
							_0x62fdad5e01d2dd47(iVar9, Var0.f_3, 3, 0);
						}
						if (func_178(iVar9))
						{
							if (_0x0c9dbf48c6ba6e4c(iVar9, Var0.f_3, 17))
							{
								task_aim_at_coord(iVar9, Var0.f_3, 2000, 0, 0);
							}
							else
							{
								iVar6 = get_best_ped_weapon(iVar9, false, false);
								if (func_118(iVar6))
								{
									set_current_ped_weapon(iVar9, iVar6, false, 0, false, false);
								}
								open_sequence_task(&iVar7);
								task_react(iVar9, 0, Var0.f_3, "Default_Panic", 0.5f, 0, 4);
								task_swap_weapon(iVar9, 1, 1, 0, 0);
								task_investigate(iVar9, Var0.f_3, 4000, 0);
								func_179(iVar9, &iVar7, 0, 0, 1, 1);
							}
						}
						else
						{
							iVar6 = get_best_ped_weapon(iVar9, false, false);
							if (func_118(iVar6))
							{
								set_current_ped_weapon(iVar9, iVar6, false, 0, false, false);
								open_sequence_task(&iVar7);
								task_react(iVar9, 0, Var0.f_3, "Default_Panic", 0.5f, 0, 4);
								task_swap_weapon(iVar9, 1, 1, 0, 0);
								func_179(iVar9, &iVar7, 0, 0, 1, 1);
							}
							else
							{
								task_react(iVar9, 0, Var0.f_3, "Default_Panic", 2f, 0, 4);
							}
						}
						func_177(iVar8, 67108864);
					}
				}
			}
		}
		iVar8++;
	}
}

void func_83(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_84(var uParam0)
{
	return *uParam0;
}

void func_85()
{
	switch (func_86())
	{
		case 0:
			if (Local_15.f_278 == -1 && func_90() != 6)
			{
				return;
			}
			if (func_180(Local_15.f_282))
			{
				func_125(2097152);
				if (_0x901e0dc25080c8b9(player_id()) == Local_15.f_282)
				{
					func_181();
				}
			}
			func_182();
			iVar1 = 0;
			while (iVar1 < 7)
			{
				Local_557.f_584.f_31[iVar1] = 255;
				iVar1++;
			}
			func_183();
			if (func_184())
			{
				func_185(1);
			}
			func_186(1);
			break;
		case 1:
			if (!func_188(func_187(), &(Local_557.f_577), 600, uVar555, 0, 0))
			{
				func_189(Local_300[Local_557.f_1008], 2);
				return;
			}
			func_190();
			func_186(2);
			break;
		case 2:
			func_191();
			func_192();
			func_193();
			func_194();
			func_195();
			func_196();
			func_197();
			func_198();
			func_199();
			func_200();
			func_201();
			func_202();
			func_203();
			func_204();
			Local_557.f_20.f_555 = func_205();
			if (func_138(Local_557.f_20.f_15, 16384))
			{
				Local_557.f_20.f_549 = (Local_557.f_20.f_549 + Local_557.f_20.f_554);
			}
			if (!func_206())
			{
				func_125(4096);
			}
			func_186(3);
			break;
		case 3:
			bVar0 = true;
			if (!func_207())
			{
				bVar0 = false;
			}
			if (!func_208())
			{
				bVar0 = false;
			}
			if (!func_209())
			{
				bVar0 = false;
			}
			if (!bVar0)
			{
				return;
			}
			func_18(1);
			func_210();
			func_186(4);
			break;
	}
}

int func_86()
{
	return Local_557.f_4;
}

void func_87()
{
	if (!func_47(Local_300[Local_557.f_1008], 32))
	{
		Local_557.f_1005 = get_network_time_accurate();
		func_189(Local_300[Local_557.f_1008], 32);
	}
}

void func_88()
{
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_50(iVar0, 256))
		{
		}
		else if (func_50(iVar0, 2))
		{
			if (!func_211(&(Local_557.f_20.f_422[iVar0])))
			{
				return;
			}
		}
		else if (!func_212(&(Local_557.f_20.f_422[iVar0])))
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_557.f_20.f_548)
	{
		if (!func_212(func_21(iVar1)))
		{
			return;
		}
		if (!func_213(func_23(iVar1)))
		{
			return;
		}
		if ((func_214(iVar1) || func_51(iVar1, 65536)) && !func_212(func_25(iVar1)))
		{
			return;
		}
		iVar1++;
	}
	iVar4 = 0;
	while (iVar4 < Local_557.f_20.f_555)
	{
		iVar2 = func_26(iVar4);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_212(func_27(iVar4, iVar3)))
			{
				return;
			}
			if (!func_212(func_29(iVar4, iVar3)))
			{
				return;
			}
			if (!func_213(func_28(iVar4, iVar3)))
			{
				return;
			}
			iVar3++;
		}
		iVar4++;
	}
	if (!func_215(func_137(), 30, uVar555, 0, 0))
	{
		func_189(Local_300[Local_557.f_1008], 2);
		return;
	}
	if (!func_59(1))
	{
		return;
	}
	if (Local_15.f_280 > get_num_reserved_mission_peds(0))
	{
		reserve_network_mission_peds(Local_15.f_280);
	}
	if (Local_15.f_279 > get_num_reserved_mission_objects(0))
	{
		reserve_network_mission_objects(Local_15.f_279);
	}
	if (Local_15.f_281 > get_num_reserved_mission_vehicles(0))
	{
		reserve_network_mission_vehicles(Local_15.f_281);
	}
	func_216();
	func_217();
	func_189(Local_300[Local_557.f_1008], 1);
}

void func_89()
{
	func_218();
	func_219();
	func_220();
	func_221();
	func_222();
	func_223();
	func_224();
	func_225();
	func_226();
	func_227();
	func_228(Local_300[Local_557.f_1008]);
	func_229();
	func_230();
	func_231();
	func_232();
	func_233();
	func_234();
	func_235();
}

int func_90()
{
	return Local_15;
}

void func_91()
{
	uVar0 = func_236(func_45());
	func_237(uVar0);
}

void func_92()
{
	if (func_47(Local_300[Local_557.f_1008], 16))
	{
		return;
	}
	Local_557.f_1004 = get_network_time_accurate();
	func_189(Local_300[Local_557.f_1008], 16);
}

bool func_93()
{
	if (!func_47(Local_300[Local_557.f_1008], 16))
	{
		return false;
	}
	if (get_time_difference(Local_557.f_1004, get_network_time_accurate()) < 8000)
	{
		return false;
	}
	return true;
}

void func_94()
{
	Local_15.f_1 = Local_557.f_20.f_15;
	vVar0 = { func_238(vVar0, Local_557.f_20.f_20, 0f) };
	Local_15.f_270 = vVar0.x;
	Local_15.f_270 = vVar0.y;
}

bool func_95()
{
	iVar0 = func_239();
	iVar1 = func_240(iVar0);
	iVar2 = func_241(iVar0, Local_557.f_20.f_556);
	if (func_242(iVar1) == -860962681)
	{
		return true;
	}
	if (Local_15.f_263.f_6 >= iVar2 || Local_15.f_263.f_6 >= 4)
	{
		return true;
	}
	iVar7 = Local_15.f_263.f_6;
	vVar3 = { func_243(iVar0, Local_557.f_20.f_556, iVar7) };
	if (!func_244(iVar7, vVar3, 20f, -541064893, &bVar6))
	{
		if (bVar6)
		{
			func_100(4);
			if (!func_43(2097152))
			{
				func_245(Local_15.f_282, Local_557.f_2, 0);
			}
			return true;
		}
	}
	else
	{
		Local_15.f_263.f_6++;
		Local_15.f_263.f_5 = 0;
	}
	return false;
}

void func_96()
{
	if (func_59(1))
	{
		return;
	}
	func_246();
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 18)
	{
		if (&Local_557.f_20.f_422[iVar3] == 0)
		{
		}
		else if (((((func_247(iVar3, &iVar4) && iVar4 >= 0) && iVar4 < 21) && &Local_557.f_20.f_22[iVar4] == 391477998) && !func_248(iVar4)) && func_51(iVar4, 8))
		{
		}
		else
		{
			if (func_50(iVar3, 4))
			{
				iVar1++;
				Jump @202; //curOff = 154
			}
			else if (func_50(iVar3, 2))
			{
				Jump @202; //curOff = 170
			}
			else if (func_50(iVar3, 128))
			{
				iVar2++;
			}
			else
			{
				iVar0++;
			}
		}
		iVar3++;
	}
	reserve_network_mission_objects(iVar0);
	if (get_num_reserved_mission_objects(0) < iVar0)
	{
		func_100(4);
		if (!func_43(2097152))
		{
			func_245(Local_15.f_282, Local_557.f_2, 0);
		}
		return;
	}
	reserve_network_mission_vehicles(iVar1);
	if (get_num_reserved_mission_vehicles(0) < iVar1)
	{
		func_100(4);
		if (!func_43(2097152))
		{
			func_245(Local_15.f_282, Local_557.f_2, 0);
		}
		return;
	}
	iVar5 = (func_249() + iVar2);
	iVar6 = 0;
	while (iVar6 < 21)
	{
		if (&Local_557.f_20.f_22[iVar6] == 0)
		{
		}
		else if (func_51(iVar6, 8) && !func_248(iVar6))
		{
		}
		else if (((((((func_51(iVar6, 64) && func_250(iVar6, &iVar4)) && &Local_557.f_20.f_22[iVar6] != -1574827255) && iVar4 >= 0) && iVar4 < 21) && &Local_557.f_20.f_22[iVar4] == 391477998) && !func_248(iVar4)) && func_51(iVar4, 8))
		{
		}
		else
		{
			iVar5++;
		}
		iVar6++;
	}
	reserve_network_mission_peds(iVar5);
	if (get_num_reserved_mission_peds(0) < iVar5)
	{
		func_100(4);
		if (!func_43(2097152))
		{
			func_245(Local_15.f_282, Local_557.f_2, 0);
		}
		return;
	}
	func_251();
	func_100(1);
}

void func_97()
{
	if (!func_47(Local_300[Local_557.f_1008], 1))
	{
		return;
	}
	if (!func_252())
	{
		return;
	}
	if (!func_253())
	{
		return;
	}
	if (!func_254())
	{
		return;
	}
	if (!func_255())
	{
		return;
	}
	func_100(2);
}

void func_98()
{
	if (func_59(262144))
	{
		return;
	}
	if (func_256())
	{
		func_100(4);
		return;
	}
	if (!func_59(524288))
	{
		func_257();
	}
	iVar0 = func_258();
	if (iVar0 == 1862763509)
	{
		if (Local_557.f_946 < 32)
		{
			func_259();
			return;
		}
		if (!func_260())
		{
			Local_557.f_946 = 0;
			Local_557.f_946.f_1 = -1;
			Local_557.f_946.f_3 = 0;
			Local_557.f_946.f_2 = 0;
			return;
		}
		func_100(262144);
	}
	else if (iVar0 == 1047079933)
	{
		if (Local_557.f_946 < 32)
		{
			func_261();
			return;
		}
		if (!func_262())
		{
			Local_557.f_946 = 0;
			Local_557.f_946.f_1 = -1;
			Local_557.f_946.f_3 = 0;
			Local_557.f_946.f_2 = 0;
			return;
		}
		func_100(262144);
	}
}

void func_99()
{
	func_263();
	func_264();
	if (func_45())
	{
		func_265();
	}
	else
	{
		func_101();
	}
}

void func_100(int iParam0)
{
	func_266(&(Local_15.f_1), iParam0);
}

void func_101()
{
	iVar0 = Local_15.f_259;
	func_267(iVar0);
	func_268(&(Local_15.f_259), 21);
}

void func_102(int iParam0, int iParam1)
{
	if (func_269(iParam0))
	{
		return;
	}
	if (func_270(iParam0) == iParam1)
	{
		return;
	}
	if (Global_17374 >= 10)
	{
		Global_17374 = 0;
	}
	Global_17353[Global_17374]->f_1 = iParam1;
	Global_17353[Global_17374] = iParam0;
	Global_17374++;
}

void func_103(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17353[iVar0] == iParam0)
		{
			Global_17353[iVar0]->f_1 = 5;
		}
		iVar0++;
	}
}

struct<8> func_104(int iParam0)
{
	if (func_271(iParam0, &Var0))
	{
		func_109(Var0, -1111171646, &Var5, 1);
	}
	return Var5;
}

char* func_105(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_106(int iParam0)
{
	if (!func_272(iParam0, &Var0))
	{
		return;
	}
	sVar8 = func_105(Var0);
	if (is_string_null_or_empty(sVar8))
	{
		return;
	}
	remove_waypoint_recording(sVar8);
}

bool func_107(int iParam0, int iParam1)
{
	return func_138(&(Local_557.f_20.f_533[iParam0]), iParam1);
}

bool func_108(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 644584216;
		uParam1->f_3 = iParam0;
		return _datafile_get_data_node_index(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_109(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

char[] func_110(char[4] cParam0)
{
	return cParam0;
}

void func_111(int iParam0, int iParam1)
{
	func_139(Local_557.f_20.f_533[iParam0], iParam1);
}

int func_112()
{
	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1527836996, 0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_113(int iParam0, int iParam1)
{
	if ((!func_119(&Var0) || !func_120(&Var0, -49926176, iParam0, 0)) || !func_117(Var0, -1296487272, &uVar5, 1))
	{
		return false;
	}
	*iParam1 = uVar5;
	if (*iParam1 == -1)
	{
		return false;
	}
	return true;
}

void func_114(int iParam0)
{
	iVar0 = func_273(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_1939655->f_65[iVar1], iVar2);
}

void func_115(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_274(1497516462);
			func_275(2016141805);
			func_275(1010885152);
			func_275(-502324015);
			break;
		case 2016141805:
			func_275(1497516462);
			func_274(2016141805);
			func_275(1010885152);
			func_275(-502324015);
			break;
		case 1010885152:
			func_275(1497516462);
			func_275(2016141805);
			func_274(1010885152);
			func_275(-502324015);
			break;
		case -502324015:
			func_275(1497516462);
			func_275(2016141805);
			func_275(1010885152);
			func_274(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_275(-538889627);
			func_275(-538880323);
			func_275(-1056767524);
			func_274(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_276();
			func_274(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_277();
			func_274(iParam0);
			break;
		case 2019386373:
			func_275(-664252410);
			func_275(2109952320);
			func_274(2019386373);
			break;
		case -664252410:
			func_275(2019386373);
			func_275(2109952320);
			func_274(-664252410);
			break;
		case 2109952320:
			func_275(2019386373);
			func_275(-664252410);
			func_274(2109952320);
			break;
		case -1674179981:
			func_275(-1835851517);
			func_275(-1838352012);
			func_274(-1674179981);
			break;
		case -1835851517:
			func_275(-1674179981);
			func_275(-1838352012);
			func_274(-1835851517);
			break;
		case -1838352012:
			func_275(-1674179981);
			func_275(-1835851517);
			func_274(-1838352012);
			break;
		case -1717960576:
			func_275(210001842);
			func_274(-1717960576);
			break;
		case 210001842:
			func_275(-1717960576);
			func_274(210001842);
			break;
		case -150493654:
			func_275(-1271608261);
			func_275(1846061697);
			func_275(-1145519186);
			func_274(-150493654);
			break;
		case -1271608261:
			func_275(-150493654);
			func_275(1846061697);
			func_275(-1145519186);
			func_274(-1271608261);
			break;
		case 1846061697:
			func_275(-150493654);
			func_275(-1271608261);
			func_275(-1145519186);
			func_274(1846061697);
			break;
		case -1145519186:
			func_275(-150493654);
			func_275(-1271608261);
			func_275(1846061697);
			func_274(-1145519186);
			break;
		case 1766284049:
			func_275(280705402);
			func_275(1926308480);
			func_274(1766284049);
			break;
		case 280705402:
			func_275(1766284049);
			func_275(1926308480);
			func_274(280705402);
			break;
		case 1926308480:
			func_275(1766284049);
			func_275(280705402);
			func_274(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_275(439465264);
				func_274(1609506757);
			}
			else
			{
				func_275(1609506757);
				func_275(439465264);
			}
			break;
		case 439465264:
			if (func_278(1609506757))
			{
				if (bParam1)
				{
					func_274(439465264);
				}
				else
				{
					func_275(439465264);
				}
			}
			break;
		case 1822001510:
			func_275(-1612662716);
			func_274(1822001510);
			break;
		case -1612662716:
			func_275(1822001510);
			func_274(-1612662716);
			break;
		case 1306158345:
			func_275(1952610440);
			func_275(-223469678);
			func_275(-404698347);
			func_275(1517904467);
			func_274(1306158345);
			break;
		case 1952610440:
			func_275(1306158345);
			func_275(-223469678);
			func_275(-404698347);
			func_275(1517904467);
			func_274(1952610440);
			break;
		case -223469678:
			func_275(1306158345);
			func_275(1952610440);
			func_275(-404698347);
			func_275(1517904467);
			func_274(-223469678);
			break;
		case -404698347:
			func_275(1306158345);
			func_275(1952610440);
			func_275(-223469678);
			func_275(1517904467);
			func_274(-404698347);
			break;
		case 1517904467:
			func_275(1306158345);
			func_275(1952610440);
			func_275(-223469678);
			func_275(-404698347);
			func_274(1517904467);
			break;
		case 1376646519:
			func_275(931649776);
			func_275(-434590080);
			func_275(1743048395);
			func_275(449774763);
			func_274(1376646519);
			break;
		case 931649776:
			func_275(1376646519);
			func_275(-434590080);
			func_275(1743048395);
			func_275(449774763);
			func_274(931649776);
			break;
		case -434590080:
			func_275(1376646519);
			func_275(931649776);
			func_275(1743048395);
			func_275(449774763);
			func_274(-434590080);
			break;
		case 1743048395:
			func_275(1376646519);
			func_275(931649776);
			func_275(-434590080);
			func_275(449774763);
			func_274(1743048395);
			break;
		case 449774763:
			func_275(1376646519);
			func_275(931649776);
			func_275(-434590080);
			func_275(1743048395);
			func_274(449774763);
			break;
		case -1414537028:
			func_275(38162571);
			func_275(1350391819);
			func_275(54073871);
			func_274(-1414537028);
			break;
		case 38162571:
			func_275(-1414537028);
			func_275(1350391819);
			func_275(54073871);
			func_274(38162571);
			break;
		case 1350391819:
			func_275(-1414537028);
			func_275(38162571);
			func_275(54073871);
			func_274(1350391819);
			break;
		case 54073871:
			func_275(-1414537028);
			func_275(38162571);
			func_275(1350391819);
			func_274(54073871);
			break;
		case 198200492:
			func_274(198200492);
			func_275(-1124061431);
			func_275(52706132);
			func_275(-259123672);
			break;
		case -1124061431:
			func_275(198200492);
			func_274(-1124061431);
			func_275(52706132);
			func_275(-259123672);
			break;
		case 52706132:
			func_275(198200492);
			func_275(-1124061431);
			func_274(52706132);
			func_275(-259123672);
			break;
		case -259123672:
			func_275(198200492);
			func_275(-1124061431);
			func_275(52706132);
			func_274(-259123672);
			break;
		case -919512195:
			func_274(-919512195);
			func_275(-1925798111);
			func_275(420709909);
			func_275(1703426636);
			break;
		case -1925798111:
			func_274(-1925798111);
			func_275(-919512195);
			func_275(420709909);
			func_275(1703426636);
			break;
		case 420709909:
			func_274(420709909);
			func_275(-919512195);
			func_275(-1925798111);
			func_275(1703426636);
			break;
		case 1703426636:
			func_274(1703426636);
			func_275(-919512195);
			func_275(-1925798111);
			func_275(420709909);
			break;
		case -1223121209:
			func_274(-1223121209);
			func_275(630808005);
			break;
		case 630808005:
			func_274(630808005);
			func_275(-1223121209);
			break;
		case 1453909576:
			func_274(1453909576);
			func_275(1643531967);
			break;
		case 1643531967:
			func_274(1643531967);
			func_275(1453909576);
			break;
		case 0:
			func_274(0);
			func_275(473295046);
			func_275(-1738165526);
			break;
		case 473295046:
			func_274(473295046);
			func_275(0);
			func_275(-1738165526);
			break;
		case -1738165526:
			func_274(-1738165526);
			func_275(0);
			func_275(473295046);
			break;
		case 932909855:
			func_274(932909855);
			func_275(2051822093);
			break;
		case 2051822093:
			func_274(2051822093);
			func_275(932909855);
			break;
		case 405586984:
			func_274(405586984);
			func_275(1509509592);
			func_275(-959357075);
			func_275(-1311865656);
			break;
		case 1509509592:
			func_274(1509509592);
			func_275(405586984);
			func_275(-959357075);
			func_275(-1311865656);
			break;
		case -959357075:
			func_274(-959357075);
			func_275(1509509592);
			func_275(405586984);
			func_275(-1311865656);
			break;
		case -1311865656:
			func_274(-1311865656);
			func_275(1509509592);
			func_275(-959357075);
			func_275(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_274(-524145696);
			}
			else
			{
				func_275(-524145696);
			}
			func_275(1626481264);
			func_275(282809459);
			break;
		case 282809459:
			func_274(282809459);
			func_275(1626481264);
			func_275(-524145696);
			break;
		case 1626481264:
			func_274(1626481264);
			func_275(-524145696);
			func_275(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_274(885203519);
			}
			else
			{
				func_275(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_274(-1080627546);
			}
			else
			{
				func_275(-1080627546);
			}
			break;
		case -510945576:
			if (bParam1)
			{
				func_274(-510945576);
			}
			else
			{
				func_275(-510945576);
				func_279(385812466);
				func_279(-1201452352);
			}
			break;
		default:
			if (bParam1)
			{
				func_274(iParam0);
			}
			else
			{
				func_275(iParam0);
			}
			break;
	}
}

bool func_116(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 331094197;
		uParam1->f_3 = iParam0;
		return _datafile_get_data_node_index(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_117(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_118(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_119(var uParam0)
{
	*uParam0 = Local_557.f_577;
	uParam0->f_2 = -872351721;
	uParam0->f_3 = Local_557.f_20.f_556;
	return (_0x603ac35fd4602c76(Local_557.f_577) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_120(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_121(var uParam0, int iParam1, int iParam2)
{
	if ((func_119(uParam0) && func_120(uParam0, 1823038874, iParam1, 0)) && func_120(uParam0, -176401167, iParam2, 0))
	{
		return true;
	}
	return false;
}

bool func_122(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_123(iParam0);
		return false;
	}
	if (func_280(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_281(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

void func_123(int iParam0)
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
	func_282(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_124(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

void func_125(int iParam0)
{
	func_266(&(Local_557.f_5), iParam0);
}

char* func_126()
{
	return "scr_distance_smoke";
}

char[] func_127(int iParam0)
{
	StringCopy(&cVar0, "miss_FMAS_ROUTE", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringConCat(&cVar0, func_283(iVar554), 32);
	return func_110(&cVar0);
}

void func_128(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_129(int iParam0)
{
	if (iParam0 != 0)
	{
		remove_relationship_group(iParam0);
	}
}

void func_130()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_284(iVar0);
		iVar0++;
	}
}

void func_131()
{
	func_285(&(Local_557.f_584.f_22));
	func_285(&(Local_557.f_584.f_23));
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_551)
	{
		func_285(Local_557.f_584.f_24[iVar0]);
		iVar0++;
	}
}

void func_132()
{
	if (func_286(Local_557.f_584.f_331))
	{
		_0x2f901291ef177b02(Local_557.f_584.f_331, 0);
		Local_557.f_584.f_331 = 0;
	}
	func_287(&(Local_557.f_584.f_91), 0, 0);
	func_288(&(Local_557.f_584.f_76), 1);
}

void func_133()
{
	func_285(&(Local_557.f_584.f_332));
	if (!func_289(Local_557.f_584.f_333))
	{
		return;
	}
	_0x2f901291ef177b02(Local_557.f_584.f_333, 0);
}

void func_134()
{
	if (!func_286(Local_557.f_584.f_334))
	{
		return;
	}
	Local_557.f_584.f_336 = 0;
	_0x2f901291ef177b02(Local_557.f_584.f_334, 0);
	Local_557.f_584.f_334 = 0;
}

void func_135()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_290(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_291(iVar0);
		iVar0++;
	}
}

void func_136(bool bParam0)
{
	if (bParam0)
	{
		func_141(49);
	}
	else
	{
		func_143(49);
	}
}

char* func_137()
{
	return "NAS";
}

bool func_138(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_140(int iParam0)
{
	func_139(&(Global_1071686->f_23887.f_4), iParam0);
}

int func_141(int iParam0)
{
	if (func_292(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0)
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

int func_143(int iParam0)
{
	if (func_293(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_144(int iParam0)
{
	bVar0 = func_294(iParam0);
	bVar1 = func_176(iParam0, 128);
	bVar2 = (!func_176(iParam0, 8) && !func_176(iParam0, 1024));
	if (does_blip_exist(&(Local_557.f_584[iParam0])))
	{
		if (bVar0)
		{
			if (!func_51(iParam0, 256))
			{
				func_177(iParam0, 256);
				if (bVar1)
				{
					_set_blip_flash_style(&(Local_557.f_584[iParam0]), 942020339);
				}
				else
				{
					_set_blip_flash_style(&(Local_557.f_584[iParam0]), 2096805056);
				}
				_blip_set_modifier(&(Local_557.f_584[iParam0]), -662251075);
			}
		}
		else if (func_51(iParam0, 256))
		{
			func_295(iParam0, 256);
			_set_blip_flash_style(&(Local_557.f_584[iParam0]), -662251075);
			if (bVar1)
			{
				_blip_set_modifier(&(Local_557.f_584[iParam0]), 942020339);
			}
			else
			{
				_blip_set_modifier(&(Local_557.f_584[iParam0]), 2096805056);
			}
		}
		return;
	}
	if (bVar1)
	{
		Local_557.f_584[iParam0] = _blip_add_for_entity(-1595050198, net_to_ped(&(Local_15.f_2[iParam0])));
		set_blip_sprite(&(Local_557.f_584[iParam0]), -1596758107, false);
		if (bVar0)
		{
			if (bVar2)
			{
				_blip_set_modifier(&(Local_557.f_584[iParam0]), 1765354131);
			}
			else
			{
				_blip_set_modifier(&(Local_557.f_584[iParam0]), -662251075);
			}
			func_177(iParam0, 256);
		}
		else
		{
			func_295(iParam0, 256);
			_blip_set_modifier(&(Local_557.f_584[iParam0]), 942020339);
		}
	}
	else
	{
		Local_557.f_584[iParam0] = _blip_add_for_entity(831283580, net_to_ped(&(Local_15.f_2[iParam0])));
		if (bVar0)
		{
			if (bVar2)
			{
				_blip_set_modifier(&(Local_557.f_584[iParam0]), 1765354131);
			}
			else
			{
				_blip_set_modifier(&(Local_557.f_584[iParam0]), -662251075);
			}
			func_177(iParam0, 256);
		}
		else
		{
			_blip_set_modifier(&(Local_557.f_584[iParam0]), 942020339);
			func_295(iParam0, 256);
		}
	}
}

bool func_145(int iParam0, int iParam1, bool bParam2)
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
			Global_1071686->f_22971.f_1 = iVar0;
			Global_1071686->f_22971 = iParam1;
		}
		if (_0x05d6195fb4d428f4(iParam0))
		{
		}
		return true;
	}
	return false;
}

int func_146(bool bParam0)
{
	if (!func_296(-931834499, bParam0))
	{
		return 0;
	}
	return 1;
}

void func_147(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_65() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_297(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_298();
		Global_1900688->f_9 = func_299(Global_1893587->f_2);
		Global_1900688->f_11 = func_300(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_301(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_301(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_301(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

int func_148()
{
	if (func_47(Local_300[Local_557.f_1008], 4))
	{
		return 2;
	}
	else if (func_47(Local_300[Local_557.f_1008], 64))
	{
		return 3;
	}
	else if (func_47(Local_300[Local_557.f_1008], 8192))
	{
		return 1;
	}
	else if (func_47(Local_300[Local_557.f_1008], 131072))
	{
		return 4;
	}
	return 0;
}

void func_149(int iParam0, bool bParam1)
{
	iVar0 = player_id();
	Var1.f_1 = -1;
	if (!bParam1)
	{
		func_302(Local_557.f_2, iParam0 != 2, &Var1);
	}
	if (iParam0 == 2 && (func_303(iVar0, 1) || func_303(iVar0, 32)))
	{
		func_304(4);
		func_304(8);
	}
	if (!bParam1)
	{
		func_125(1);
	}
	if (Local_557.f_1008 >= 32 || Local_557.f_1008 < 0)
	{
		return;
	}
	func_189(Local_300[Local_557.f_1008], 2097152);
}

void func_150()
{
	if (!func_43(4))
	{
		func_305(Local_557.f_1, 0, 0);
		return;
	}
	bVar0 = false;
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		bVar0 = true;
	}
	func_306(bVar0, &bVar1, &bVar2);
	func_305(Local_557.f_1, bVar1 != bVar2, bVar0);
	Var3.f_1 = -1;
	if (func_43(1))
	{
		func_307(Local_557.f_2, bVar0, bVar1, bVar2, &Var3, 0, 255);
	}
}

void func_151()
{
	if (!func_43(4))
	{
		func_308(Local_557.f_1, 0);
		return;
	}
	bVar0 = false;
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		bVar0 = true;
	}
	func_306(bVar0, &bVar1, &bVar2);
	func_308(Local_557.f_1, bVar0);
	Var3.f_1 = -1;
	if (func_43(1))
	{
		func_307(Local_557.f_2, bVar0, bVar1, bVar2, &Var3, 0, 255);
	}
}

void func_152()
{
	if (!func_43(4))
	{
		func_309(Local_557.f_1, 0);
		return;
	}
	bVar0 = false;
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		bVar0 = true;
	}
	func_309(Local_557.f_1, bVar0);
	func_306(bVar0, &bVar1, &bVar2);
	Var3.f_1 = -1;
	if (func_43(1))
	{
		func_307(Local_557.f_2, bVar0, bVar1, bVar2, &Var3, 0, 255);
	}
}

bool func_153(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	if (!func_172(iParam0, 1))
	{
		return false;
	}
	if (bParam1 && !does_pickup_exist(&(Local_15.f_217[iParam0])))
	{
		return false;
	}
	return true;
}

int func_154(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_310(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_155()
{
	return Global_1109804->f_5737.f_632;
}

int func_156(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_156(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_156(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_157(int iParam0)
{
	return Global_1109804->f_5737.f_451[iParam0]->f_1;
}

bool func_158(int iParam0, var uParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (!func_311(iParam0))
	{
		return false;
	}
	uVar0 = func_312(iParam0);
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

bool func_159(int iParam0)
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

int func_160(int iParam0)
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

bool func_161(int iParam0, int iParam1)
{
	if (!is_ped_a_player(iParam0))
	{
		return false;
	}
	iVar0 = network_get_player_index_from_ped(iParam0);
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
	*iParam1 = 0;
	while (*iParam1 < 7)
	{
		if (&Local_15.f_234[*iParam1] != iVar0)
		{
		}
		else
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

bool func_162(int iParam0)
{
	if (!_network_is_player_index_valid(&(Local_15.f_234[iParam0])))
	{
		return false;
	}
	if (!network_is_player_active(&(Local_15.f_234[iParam0])))
	{
		return false;
	}
	return true;
}

bool func_163(int iParam0)
{
	func_313(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Local_15.f_249[iVar0]), iVar1);
}

void func_164(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1) || !network_is_player_active(iParam1))
	{
		return;
	}
	func_174(9, iParam0, func_173(0, 8), iParam1);
}

bool func_165(int iParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, int iParam33)
{
	if (func_314(Param1.f_1))
	{
		return true;
	}
	if (func_315(Param1.f_1))
	{
		return true;
	}
	if (Param1.f_5 == -842959696 && (_is_ped_lassoed(iParam33) && _0x0c31c51168e80365(iParam33) == player_ped_id()))
	{
		return true;
	}
	if (does_entity_exist(Param1.f_1) && is_entity_a_ped(Param1.f_1))
	{
		return false;
	}
	if (func_316(iParam0) == player_id())
	{
		return true;
	}
	return false;
}

void func_166(int iParam0)
{
	play_sound(func_317(), func_318(), false, 0, true, 0);
	func_174(1, iParam0, func_173(0, 8), player_id());
}

bool func_167(int iParam0, int iParam1, bool bParam2)
{
	if (is_ped_a_player(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	if (!_0xb07d3185e11657a5(iParam0))
	{
		return false;
	}
	iVar0 = ped_to_net(iParam0);
	iVar1 = 0;
	while (iVar1 < 21)
	{
		if (Local_15.f_2[iVar1]->f_2 == 0)
		{
		}
		else if (!network_does_network_id_exist(&(Local_15.f_2[iVar1])))
		{
		}
		else if (&Local_15.f_2[iVar1] != iVar0)
		{
		}
		else
		{
			*iParam1 = iVar1;
			if (Local_15.f_2[iVar1]->f_2 == -1574827255 || func_176(iVar1, 67108864))
			{
				*bParam2 = 1;
			}
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_168(int iParam0)
{
	if (func_176(iParam0, 4096) && func_319(iParam0) != 1824637041)
	{
		func_320(-514316475, 0, 0);
	}
}

void func_169(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1) || !network_is_player_active(iParam1))
	{
		return;
	}
	func_174(8, iParam0, func_173(0, 8), iParam1);
}

bool func_170(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, int iParam32, int iParam33)
{
	if (func_314(Param0.f_1))
	{
		return true;
	}
	if (func_315(Param0.f_1))
	{
		return true;
	}
	if (Param0.f_5 == -842959696 && (_is_ped_lassoed(iParam32) && _0x0c31c51168e80365(iParam32) == player_ped_id()))
	{
		return true;
	}
	if (does_entity_exist(Param0.f_1) && is_entity_a_ped(Param0.f_1))
	{
		return false;
	}
	if (Local_15.f_2[iParam33]->f_5 == player_id())
	{
		return true;
	}
	return false;
}

void func_171(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 21)
	{
		return;
	}
	if (&Local_557.f_20.f_22[iParam0] != -1574827255 && &Local_557.f_20.f_22[iParam0] != 391477998)
	{
		return;
	}
	func_313(iParam0, &iVar0, &iVar1);
	if (is_bit_set(&(Local_557.f_994[iVar0]), iVar1))
	{
		return;
	}
	play_sound(func_317(), func_318(), false, 0, true, 0);
	func_174(7, iParam0, func_173(0, 8), -1);
	if ((!is_bit_set(&(Local_557.f_996[iVar0]), iVar1) && Local_557.f_20 == 1657045547) && func_321(iParam0))
	{
		func_125(1024);
	}
	set_bit(Local_557.f_994[iVar0], iVar1);
	set_bit(Local_557.f_996[iVar0], iVar1);
}

bool func_172(int iParam0, int iParam1)
{
	return func_138(Local_15.f_217[iParam0]->f_1, iParam1);
}

var func_173(int iParam0, int iParam1)
{
	return func_322(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_174(int iParam0, int iParam1, var uParam2, int iParam3)
{
	Var0.f_4 = iParam0;
	Var0.f_6 = iParam1;
	Var0.f_7 = iParam3;
	func_323(&Var0, uParam2);
}

void func_175(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 8))
	{
		return;
	}
	if (Var0.f_5 != iVar554)
	{
		return;
	}
	func_324(&Var0);
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if ((((Var0.f_4 == 4 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 5) || Var0.f_4 == 7)
	{
		if (Var0.f_6 < 0)
		{
			return;
		}
		if (Var0.f_6 >= 21)
		{
			return;
		}
	}
	switch (Var0.f_4)
	{
		case 7:
			if (func_176(Var0.f_6, 134217728))
			{
				return;
			}
			if (!_network_is_player_index_valid(Var0.f_1) || !network_is_player_active(Var0.f_1))
			{
				return;
			}
			func_325(Var0.f_6, Var0.f_1);
			break;
		case 1:
			if (func_163(Var0.f_6))
			{
				return;
			}
			Local_15.f_234[Var0.f_6]->f_1 = int_to_playerindex(Var0.f_7);
			func_326(Var0.f_6);
			break;
		case 4:
			func_327(Var0.f_6, Var0.f_1);
			break;
		case 9:
			func_328(Var0.f_6, int_to_playerindex(Var0.f_7));
			break;
		case 8:
			func_329(Var0.f_6, int_to_playerindex(Var0.f_7));
			break;
		case 5:
			func_330(Var0.f_6, Var0.f_1);
			break;
		case 3:
			func_331(Var0.f_6, Var0.f_1);
			break;
		case 6:
			func_332(Var0.f_6, Var0.f_1);
			break;
		case 10:
			func_333(Var0.f_6, Var0.f_1);
			break;
		case 11:
			func_334(Var0.f_6);
			break;
	}
}

bool func_176(int iParam0, int iParam1)
{
	return func_138(Local_15.f_2[iParam0]->f_3, iParam1);
}

void func_177(int iParam0, int iParam1)
{
	func_266(&(Local_557.f_20.f_22[iParam0]->f_1), iParam1);
}

bool func_178(int iParam0)
{
	iVar0 = -1569615261;
	get_current_ped_weapon(iParam0, &iVar0, false, 0, false);
	if (func_118(iVar0))
	{
		if (_is_weapon_one_handed(iVar0))
		{
			return true;
		}
		if (_is_weapon_two_handed(iVar0))
		{
			return true;
		}
		if (_is_weapon_melee(iVar0))
		{
			return true;
		}
	}
	get_current_ped_weapon(iParam0, &iVar0, false, 1, false);
	if (func_118(iVar0))
	{
		if (_is_weapon_one_handed(iVar0))
		{
			return true;
		}
		if (_is_weapon_two_handed(iVar0))
		{
			return true;
		}
		if (_is_weapon_melee(iVar0))
		{
			return true;
		}
	}
	return false;
}

void func_179(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_180(int iParam0)
{
	iVar0 = func_335(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return func_336(iVar0, 2);
}

void func_181()
{
	func_337(512);
}

void func_182()
{
	func_338("NAS_NEUTRAL_", &(Local_557.f_578));
	func_338("NAS_HOSTILE_", &(Local_557.f_578.f_1));
	func_338("NAS_LAW_NEUTRAL_", &(Local_557.f_578.f_2));
	func_338("NAS_LAW_HOSTILE_", &(Local_557.f_578.f_3));
	func_338("NAS_BRAWLER_A_", &(Local_557.f_578.f_4));
	func_338("NAS_BRAWLER_B_", &(Local_557.f_578.f_5));
	func_339(Local_557.f_578);
	func_339(Local_557.f_578.f_1);
	func_339(Local_557.f_578.f_2);
	func_339(Local_557.f_578.f_4);
	func_339(Local_557.f_578.f_5);
	func_339(Local_557.f_578.f_3);
	func_340(1, Local_557.f_578, Local_557.f_578.f_1, 1);
	func_340(1, Local_557.f_578.f_4, Local_557.f_578.f_1, 1);
	func_340(1, Local_557.f_578.f_5, Local_557.f_578.f_1, 1);
	func_340(1, Local_557.f_578.f_2, Local_557.f_578.f_3, 1);
	func_340(1, Local_557.f_578.f_2, Local_557.f_578, 1);
	func_340(1, Local_557.f_578.f_2, Local_557.f_578.f_1, 1);
	func_340(1, Local_557.f_578.f_3, Local_557.f_578, 1);
	func_340(1, Local_557.f_578.f_3, Local_557.f_578.f_1, 1);
	func_340(1, Local_557.f_578.f_2, 707888648, 1);
	func_340(1, Local_557.f_578.f_3, 707888648, 1);
	func_340(6, Local_557.f_578.f_4, Local_557.f_578.f_5, 1);
}

void func_183()
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar2))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar2) != Local_15.f_282)
		{
		}
		else
		{
			_0x31010318ba9897ac(&uVar0, iVar1);
		}
		iVar1++;
	}
	Local_557.f_958 = uVar0;
}

bool func_184()
{
	iVar0 = func_341(func_239(), 0);
	if (iVar0 <= 3)
	{
		return true;
	}
	return false;
}

void func_185(int iParam0)
{
	func_266(&(Local_557.f_6), iParam0);
}

void func_186(int iParam0)
{
	Local_557.f_4 = iParam0;
}

int func_187()
{
	return 1926687966;
}

bool func_188(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = _0xd97d8d905f1562f2(iParam0);
	while ((!_0x603ac35fd4602c76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887->f_13 != -1)
		{
			bVar1 = func_13(bParam4, bParam5);
		}
		iVar0++;
		wait(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_13(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_189(var uParam0, int iParam1)
{
	func_266(&(uParam0->f_1), iParam1);
}

void func_190()
{
	iVar0 = 0;
	while (iVar0 < 206)
	{
		iVar1 = func_342(iVar0, 1);
		func_344(&(Local_557.f_577), iVar1, func_343(iVar1));
		iVar0++;
	}
}

void func_191()
{
	iVar5 = 600000;
	Local_557.f_20.f_17 = 105f;
	Local_557.f_20.f_18 = 85f;
	Local_557.f_20.f_19 = 160f;
	Local_557.f_20.f_20 = 120f;
	Local_557.f_20.f_21 = 100f;
	Local_557.f_20.f_14 = 100f;
	Local_557.f_20.f_13 = 18f;
	Local_557.f_20.f_4 = 300000;
	Local_557.f_20.f_6 = 6;
	if (func_119(&Var0))
	{
		func_345(Var0, 92190263, &iVar5, 1);
		func_345(Var0, -2129803861, &(Local_557.f_20.f_4), 0);
		func_345(Var0, 1628979087, &(Local_557.f_20.f_6), 0);
		func_346(Var0, -185755803, &bVar6, 0);
		func_346(Var0, 458129012, &bVar9, 0);
		func_346(Var0, 1787479687, &bVar7, 0);
		func_346(Var0, 1137547076, &bVar11, 0);
		func_346(Var0, 2066595802, &bVar8, 0);
		func_346(Var0, -1770081554, &bVar10, 0);
		func_346(Var0, 2053368303, &bVar13, 0);
		func_347(Var0, 582819194, &vVar16, 0);
		func_347(Var0, -1882633578, &(Local_557.f_20.f_10), 0);
		func_348(Var0, -1103749002, &uVar19, 0);
		func_348(Var0, 79787630, &(Local_557.f_20.f_17), 0);
		func_348(Var0, 465120035, &(Local_557.f_20.f_18), 0);
		func_348(Var0, 219784559, &(Local_557.f_20.f_19), 0);
		func_348(Var0, -485657984, &(Local_557.f_20.f_20), 0);
		func_348(Var0, -1925214904, &(Local_557.f_20.f_21), 0);
		func_348(Var0, 265695803, &(Local_557.f_20.f_13), 0);
		func_346(Var0, 1852727176, &bVar12, 0);
		func_346(Var0, 2092186359, &bVar14, 0);
		if (!func_346(Var0, 413379496, &bVar15, 0))
		{
			bVar15 = true;
		}
	}
	Local_557.f_20.f_554 = func_349(Local_15.f_278);
	Local_557.f_20.f_2 = iVar5;
	Local_557.f_20.f_7 = { vVar16 };
	Local_557.f_20.f_14 = uVar19;
	if (func_117(Var0, 1855722710, &uVar20, 0))
	{
		Local_557.f_20.f_3 = uVar20;
	}
	if (bVar6)
	{
		func_266(&(Local_557.f_20.f_15), 256);
	}
	if (bVar15)
	{
		func_266(&(Local_557.f_20.f_15), 65536);
	}
	if (bVar12)
	{
		func_266(&(Local_557.f_20.f_15), 33554432);
	}
	if (bVar7)
	{
		func_125(32768);
	}
	else if (bVar14)
	{
		func_125(65536);
	}
	if (bVar9)
	{
		func_266(&(Local_557.f_20.f_15), 4096);
	}
	if (bVar8)
	{
		func_266(&(Local_557.f_20.f_15), 8192);
	}
	if (bVar11)
	{
		func_266(&(Local_557.f_20.f_15), 16384);
	}
	if (bVar10)
	{
		func_266(&(Local_557.f_20.f_15), 32768);
	}
	if (bVar13)
	{
		func_266(&(Local_557.f_20.f_15), 67108864);
	}
}

void func_192()
{
	Local_557.f_20.f_547 = func_350();
}

void func_193()
{
	Local_557.f_20.f_548 = func_351();
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_548)
	{
		func_352(iVar0);
		if (&Local_557.f_20.f_22[iVar0] != -1574827255)
		{
		}
		else
		{
			Local_557.f_20.f_549++;
		}
		iVar0++;
	}
}

void func_194()
{
	Local_557.f_20.f_551 = func_353();
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_551)
	{
		func_354(iVar0);
		iVar0++;
	}
}

void func_195()
{
	iVar0 = func_355();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_356(iVar1);
		iVar1++;
	}
}

void func_196()
{
	iVar0 = func_357();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_358(iVar1);
		iVar1++;
	}
}

void func_197()
{
	Local_557.f_20.f_550 = func_359();
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_550)
	{
		func_360(iVar0);
		iVar0++;
	}
}

void func_198()
{
	Local_557.f_20.f_552 = func_361();
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_552)
	{
		func_362(iVar0);
		iVar0++;
	}
}

void func_199()
{
	iVar0 = func_363();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_364(iVar1);
		iVar1++;
	}
}

void func_200()
{
	Local_557.f_20.f_553 = func_365();
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_553)
	{
		func_366(iVar0);
		iVar0++;
	}
}

void func_201()
{
	Local_557.f_20.f_546 = func_367();
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_546)
	{
		func_368(iVar0);
		iVar0++;
	}
}

void func_202()
{
	iVar0 = func_369();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_370(iVar1);
		iVar1++;
	}
}

void func_203()
{
	iVar0 = func_371();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_372(iVar1);
		iVar1++;
	}
}

void func_204()
{
	iVar0 = func_374(1, func_373());
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_375(&Var2);
		if ((!func_119(&Var2) || !func_120(&Var2, 1525953930, iVar1, 0)) || !func_117(Var2, -1296487272, &iVar8, 1))
		{
		}
		else
		{
			iVar7 = func_376(iVar8);
			if (!func_377(iVar7))
			{
			}
			else
			{
				Local_557.f_952[iVar1] = iVar7;
				func_125(8192);
			}
		}
		iVar1++;
	}
}

int func_205()
{
	if (func_119(&Var0) && func_120(&Var0, -930766145, 0, 0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

bool func_206()
{
	if (func_119(&Var0) && func_346(Var0, 706368435, &bVar5, 0))
	{
		return !bVar5;
	}
	return false;
}

bool func_207()
{
	iVar0 = func_355();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_378(iVar1, &vVar2))
		{
		}
		else if (!func_379(iVar1, vVar2))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_208()
{
	iVar0 = func_380();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_381(iVar1, &vVar2, &vVar5, &Var9, &uVar8))
		{
		}
		else if (!func_382(iVar1, vVar2, vVar5, Var9, uVar8))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_209()
{
	if (func_43(4194304))
	{
		return true;
	}
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_113(iVar1, &iVar2))
		{
		}
		else
		{
			func_115(iVar2, 1, 0);
		}
		iVar1++;
	}
	func_125(4194304);
	return true;
}

void func_210()
{
	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if ((&Local_15.f_234[iVar0] != 255 && func_163(iVar0)) && !_0x8f4f050054005c27(&(Local_557.f_1000), iVar0))
			{
				_0xe84aac1b22a73e99(&(Local_557.f_1000), iVar0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (((Local_15.f_2[iVar0]->f_2 == 1583594396 && func_176(iVar0, 67108864)) && func_176(iVar0, 134217728)) && !_0x8f4f050054005c27(&(Local_557.f_998), iVar0))
			{
				_0xe84aac1b22a73e99(&(Local_557.f_998), iVar0);
			}
			iVar0++;
		}
	}
}

bool func_211(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	_request_propset_2(iParam0);
	_request_propset(iParam0);
	return (_has_propset_loaded_2(iParam0) && _has_propset_loaded(iParam0));
}

bool func_212(int iParam0)
{
	if (!is_model_valid(iParam0) || iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

bool func_213(int iParam0)
{
	if (!func_118(iParam0))
	{
		return true;
	}
	_0x72d4cb5db927009c(iParam0, -1, 0);
	return _0xff07cf465f48b830(iParam0);
}

bool func_214(int iParam0)
{
	func_116(iParam0, &Var0);
	func_346(Var0, 917283806, &uVar5, 0);
	return uVar5;
}

bool func_215(char* sParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (iParam1 < 1)
	{
		iParam1 = 10;
	}
	if (!_does_text_database_exist(sParam0))
	{
		iVar0 = 0;
		return false;
	}
	bVar1 = false;
	while ((_text_database_request(sParam0) == 0 && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_13(bParam3, bParam4);
		iVar0++;
		wait(0);
	}
	bVar1 = func_13(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	while ((!_text_database_has_loaded(sParam0) && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_13(bParam3, bParam4);
		iVar0++;
		wait(0);
	}
	bVar1 = func_13(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_216()
{
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_547)
	{
		func_383(iVar0);
		iVar0++;
	}
}

void func_217()
{
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_552)
	{
		if (_does_volume_exist(&(Local_557.f_971[iVar0])))
		{
			_0xb56d41a694e42e86(&(Local_557.f_971[iVar0]), 12289, 0, 0, -1, -1, 0);
			_0x18262cafebb5fbe1(&(Local_557.f_971[iVar0]), 12289, 0, 0, -1, -1, 0);
		}
		iVar0++;
	}
}

void func_218()
{
	func_268(&(Local_557.f_7.f_11), 100);
	if (Local_557.f_7.f_11 != 0)
	{
		return;
	}
	if (!network_is_player_active(player_id()))
	{
		return;
	}
	if (!func_43(4))
	{
		return;
	}
	iVar0 = player_id();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iVar1 == iVar0)
		{
		}
		else if (_0x72b2e00c9bac6789(&(Local_557.f_961), iVar1) && network_is_player_active(int_to_playerindex(iVar1)))
		{
			_0x5a91bcef74944e93(int_to_playerindex(iVar1), 30f);
		}
		iVar1++;
	}
}

void func_219()
{
	func_384();
	if (func_90() != 6)
	{
		return;
	}
	if (!func_43(4))
	{
		return;
	}
	if (func_47(Local_300[Local_557.f_1008], 8))
	{
		return;
	}
	if (func_385())
	{
		return;
	}
	iVar0 = func_148();
	switch (iVar0)
	{
		case 2:
			bVar1 = false;
			break;
		case 1:
		case 3:
		case 4:
			bVar1 = true;
			break;
	}
	func_306(bVar1, &iVar2, &iVar3);
	bVar4 = false;
	if (func_386())
	{
		iVar5 = 1891766540;
		if (func_387() == 1)
		{
			bVar4 = true;
		}
		else
		{
			bVar4 = false;
		}
	}
	else
	{
		iVar5 = -1516819610;
	}
	if (func_45())
	{
		iVar6 = -1442248781;
	}
	else
	{
		iVar6 = 1038512660;
	}
	Var15.f_1 = 11;
	Var28.f_1 = 11;
	Var41.f_1 = 11;
	if ((bVar4 && iVar0 == 1) || iVar0 == 4)
	{
		func_389(&Var15, 622225714, func_388(255), 0, _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())));
	}
	func_391(&uVar7, &uVar11, &Var28, &Var41, iVar5, iVar6, func_388(255), bVar4, !bVar1, _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())), iVar2, iVar3, func_390(), Local_557.f_2);
	func_189(Local_300[Local_557.f_1008], 8);
}

void func_220()
{
	iVar0 = Local_557.f_7;
	func_392(iVar0);
	func_268(&(Local_557.f_7), 21);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_393(iVar0);
		iVar0++;
	}
}

void func_221()
{
	func_394(Local_557.f_7.f_1);
	func_268(&(Local_557.f_7.f_1), 18);
}

void func_222()
{
	func_395(Local_557.f_7.f_2);
	func_268(&(Local_557.f_7.f_2), 3);
}

void func_223()
{
	iVar0 = Local_557.f_7.f_4;
	if (func_396(iVar0, 0, 1))
	{
		if (func_47(Local_300[iVar0], 4))
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			iVar2 = func_397(iVar1);
			if (get_relationship_between_groups(Local_557.f_578.f_1, iVar2) != 6)
			{
				func_340(6, iVar2, Local_557.f_578.f_1, 1);
			}
			if (get_relationship_between_groups(Local_557.f_578.f_3, iVar2) != 6)
			{
				func_340(6, iVar2, Local_557.f_578.f_3, 1);
			}
		}
		else if (func_59(256) && func_47(Local_300[iVar0], 64))
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			iVar2 = func_397(iVar1);
			if (get_relationship_between_groups(Local_557.f_578, iVar2) != 2)
			{
				func_340(2, iVar2, Local_557.f_578, 1);
			}
			if (get_relationship_between_groups(Local_557.f_578.f_1, iVar2) != 2)
			{
				func_340(2, iVar2, Local_557.f_578.f_1, 1);
			}
			if (get_relationship_between_groups(Local_557.f_578.f_3, iVar2) != 2)
			{
				func_340(2, iVar2, Local_557.f_578.f_3, 1);
			}
			if (get_relationship_between_groups(Local_557.f_578.f_2, iVar2) != 2)
			{
				func_340(2, iVar2, Local_557.f_578.f_2, 1);
			}
		}
	}
	func_268(&(Local_557.f_7.f_4), 32);
}

void func_224()
{
	iVar0 = func_148();
	iVar1 = player_id();
	iVar2 = player_ped_id();
	if ((!is_ped_dead_or_dying(iVar2, true) && get_current_ped_weapon(iVar2, &iVar3, true, 0, false)) && func_118(iVar3))
	{
		func_125(2048);
	}
	else
	{
		func_44(2048);
	}
	iVar4 = Local_557.f_7.f_9;
	func_268(&(Local_557.f_7.f_9), 32);
	iVar5 = int_to_playerindex(iVar4);
	if (func_398(iVar5))
	{
		_0x31010318ba9897ac(&(Local_557.f_961), iVar4);
	}
	else
	{
		_0xd426e2e3288469d6(&(Local_557.f_961), iVar4);
	}
	func_399();
	if (iVar0 != 0 && !func_43(1))
	{
		if (func_400())
		{
			func_189(Local_300[Local_557.f_1008], 1048576);
		}
		if (func_47(Local_300[Local_557.f_1008], 1048576) && func_401())
		{
			func_149(iVar0, 0);
		}
	}
	if ((func_43(4) && func_402()) && !func_403())
	{
		func_404(2);
	}
	if (iVar0 != 0 && func_406(func_405(), Local_557.f_20.f_2))
	{
		func_407(Local_557.f_2);
	}
	if (iVar0 != 0 && !func_45())
	{
		func_408();
	}
	if (iVar0 != 0 && func_45())
	{
		if (func_409(iVar5))
		{
			if (!_0x72b2e00c9bac6789(&(Local_557.f_960), iVar4))
			{
				func_410(iVar5);
				_0x31010318ba9897ac(&(Local_557.f_960), iVar4);
			}
		}
		else if (_0x72b2e00c9bac6789(&(Local_557.f_960), iVar4))
		{
			func_31(iVar5);
			_0xd426e2e3288469d6(&(Local_557.f_960), iVar4);
		}
	}
	if (func_43(65536) || func_43(32768))
	{
		if (iVar0 != 0)
		{
			fVar6 = func_411(Global_35, Local_557.f_20.f_7);
			if (func_47(Local_300[Local_557.f_1008], 256))
			{
				fVar7 = 65f;
			}
			else
			{
				fVar7 = 50f;
			}
			if (fVar6 < Local_557.f_20.f_19 || func_412(fVar7))
			{
				func_189(Local_300[Local_557.f_1008], 256);
				func_189(Local_300[Local_557.f_1008], 1024);
				func_189(Local_300[Local_557.f_1008], 512);
			}
			else if (fVar6 > (Local_557.f_20.f_19 + 15f))
			{
				func_413(Local_300[Local_557.f_1008], 256);
			}
		}
	}
	if (!func_43(1048576))
	{
		_0xdfc85c5199045026(player_id(), 0.2f);
		func_125(1048576);
	}
	if (func_47(Local_300[Local_557.f_1008], 128) && get_time_difference(Local_557.f_1003, get_network_time_accurate()) > 22000)
	{
		func_413(Local_300[Local_557.f_1008], 128);
	}
	if (!is_entity_dead(Global_34) && func_414(Global_34))
	{
		Local_557.f_1016 = get_network_time_accurate();
	}
	if (iVar0 == 1)
	{
		if (!func_47(Local_300[Local_557.f_1008], 16384) && func_163(Local_557.f_1006))
		{
			func_189(Local_300[Local_557.f_1008], 16384);
			func_49(1);
			func_48();
		}
		if (!func_47(Local_300[Local_557.f_1008], 16384))
		{
			func_415();
			func_416(250);
			if (func_417(109, 255))
			{
				func_49(0);
			}
		}
		if (_0x901e0dc25080c8b9(player_id()) == Local_15.f_282)
		{
			func_189(Local_300[Local_557.f_1008], 32768);
		}
		else
		{
			func_413(Local_300[Local_557.f_1008], 32768);
		}
	}
	else if (iVar0 == 2)
	{
		if (!_0xd6f6acf4392187fb(Local_15.f_282) || !_0x9be7dcb22d32ccbe(Local_15.f_282, player_id()))
		{
			if (func_47(Local_300[Local_557.f_1008], 1048576))
			{
				func_413(Local_300[Local_557.f_1008], 4);
				func_44(4);
				func_189(Local_300[Local_557.f_1008], 65536);
				func_125(16777216);
				if ((!_0xd6f6acf4392187fb(Local_15.f_282) || !_0x0f99f6436528a089(Local_15.f_282)) || (_0x149a2751ab66ac02(Local_15.f_282) <= 1 && !_0x9be7dcb22d32ccbe(Local_15.f_282, player_id())))
				{
					func_125(8388608);
				}
			}
		}
	}
	if (func_418(0))
	{
		func_125(16384);
	}
	else
	{
		func_44(16384);
	}
	if (iVar0 == 0)
	{
		if (func_45())
		{
			iVar8 = 0;
			while (iVar8 < 7)
			{
				if (&Local_15.f_234[iVar8] == 255)
				{
				}
				else if (&Local_15.f_234[iVar8] != iVar1)
				{
				}
				else
				{
					func_419(1, iVar8);
					return;
				}
				iVar8++;
			}
			iVar8 = 0;
			while (iVar8 < 7)
			{
				if (&Local_15.f_234[iVar8] == 255)
				{
				}
				else if (func_163(iVar8))
				{
				}
				else if (!_0x3f59fe6f37869576(iVar1, &(Local_15.f_234[iVar8])))
				{
				}
				else
				{
					func_419(4, -1);
					return;
				}
				iVar8++;
			}
		}
		if (_0x9be7dcb22d32ccbe(Local_15.f_282, player_id()))
		{
			func_419(2, -1);
			return;
		}
		if (func_59(256) && func_420(Local_557.f_7, 30f))
		{
			func_419(3, -1);
		}
	}
}

void func_225()
{
	if (func_45() && !func_59(16777216))
	{
		return;
	}
	func_421();
	func_422();
	func_423();
	func_424();
	func_425();
	func_426();
	func_427();
}

void func_226()
{
	if (Local_557.f_20.f_551 == 0)
	{
		return;
	}
	if (!func_59(2))
	{
		return;
	}
	func_428(Local_557.f_7.f_8);
	func_268(&(Local_557.f_7.f_8), Local_557.f_20.f_551);
}

void func_227()
{
	if (!func_43(4))
	{
		return;
	}
	if (func_59(33554432))
	{
		if (!func_43(131072))
		{
			iVar0 = 0;
			while (iVar0 < 21)
			{
				if (!func_429(iVar0))
				{
				}
				else
				{
					func_430(iVar0, Local_300[Local_557.f_1008]);
				}
				iVar0++;
			}
			func_125(131072);
		}
		return;
	}
	iVar1 = Local_557.f_7.f_5;
	if (func_47(Local_300[iVar1], 4) && func_396(iVar1, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (!func_429(iVar0))
			{
			}
			else if (func_431(iVar0, Local_300[Local_557.f_1008]))
			{
			}
			else if (!func_431(iVar0, Local_300[iVar1]))
			{
			}
			else
			{
				func_430(iVar0, Local_300[Local_557.f_1008]);
			}
			iVar0++;
		}
	}
	iVar2 = player_ped_id();
	iVar0 = Local_557.f_7.f_6;
	if (((!is_entity_dead(iVar2) && !func_431(iVar0, Local_300[Local_557.f_1008])) && func_429(iVar0)) && func_52(iVar0, &iVar3, 1, 1))
	{
		if (!func_51(iVar0, 131072))
		{
			func_177(iVar0, 131072);
			request_ped_visibility_tracking(iVar3);
		}
		if (is_ped_in_combat(iVar3, iVar2) || func_432(iVar3, 45f, -1082130432, -1082130432, -1082130432))
		{
			func_430(iVar0, Local_300[Local_557.f_1008]);
		}
	}
	if ((func_51(iVar0, 131072) && func_431(iVar0, Local_300[Local_557.f_1008])) && func_52(iVar0, &iVar3, 0, 1))
	{
		_0x3088634cf8c819cf(iVar3);
		func_295(iVar0, 131072);
	}
	func_268(&(Local_557.f_7.f_5), 32);
	func_268(&(Local_557.f_7.f_6), 21);
}

void func_228(var uParam0)
{
	iVar0 = player_id();
	if (func_433(uParam0))
	{
		if (is_player_dead(iVar0) && !func_434())
		{
			if (Local_557.f_1009 == 0)
			{
				Local_557.f_1009 = get_network_time_accurate();
			}
			else if (get_time_difference(Local_557.f_1009, get_network_time_accurate()) > 15000)
			{
				func_435(1, 1);
				Local_557.f_1009 = 0;
			}
		}
		else
		{
			Local_557.f_1009 = 0;
		}
	}
	if (func_436(uParam0, &uVar1))
	{
		func_437(1);
	}
	else
	{
		func_437(0);
	}
	if ((func_43(2) && func_438(255)) && func_439(255))
	{
		func_440(&Var2, &Var32);
		func_441(Var2, Var32, 1, 1, 1);
	}
}

void func_229()
{
	if (!func_59(8192))
	{
		return;
	}
	if (!func_59(2))
	{
		return;
	}
	if (func_43(4))
	{
		if (!func_43(67108864))
		{
			_0x330ca55a3647fa1c(player_id(), 1);
			func_125(67108864);
		}
	}
	else if (func_43(67108864))
	{
		_0x330ca55a3647fa1c(player_id(), 0);
		func_44(67108864);
	}
	if (func_47(Local_300[Local_557.f_1008], 2048))
	{
		return;
	}
	if (!func_47(Local_300[Local_557.f_1008], 4096))
	{
		iVar0 = 0;
		while (iVar0 < Local_557.f_20.f_548)
		{
			if (func_53(iVar0))
			{
				if (func_52(iVar0, &uVar1, 0, 0))
				{
					_0x1ad922ab5038def3(uVar1);
					_0x543dfe14be720027(player_id(), uVar1, 0);
				}
				if (func_51(iVar0, 65536) && func_54(iVar0, &uVar1, 1))
				{
					_0x1ad922ab5038def3(uVar1);
					_0x543dfe14be720027(player_id(), uVar1, 0);
				}
			}
			iVar0++;
		}
		func_189(Local_300[Local_557.f_1008], 4096);
	}
	if (Local_557.f_7.f_7 >= Local_557.f_20.f_553)
	{
		func_189(Local_300[Local_557.f_1008], 2048);
		return;
	}
	iVar2 = Local_557.f_7.f_7;
	iVar0 = &Local_557.f_20.f_495[iVar2];
	if (iVar0 > Local_557.f_20.f_548)
	{
		Local_557.f_7.f_7++;
		return;
	}
	if (iVar0 < 0)
	{
		Local_557.f_7.f_7++;
		return;
	}
	if (func_51(iVar0, 65536))
	{
		if (!func_54(iVar0, &uVar1, 1))
		{
			Local_557.f_7.f_7++;
			return;
		}
	}
	else if (!func_52(iVar0, &uVar1, 1, 0))
	{
		Local_557.f_7.f_7++;
		return;
	}
	if (Local_557.f_20.f_5 >= Local_557.f_20.f_6)
	{
		return;
	}
	sVar3 = func_105(func_104(iVar2));
	if (is_string_null_or_empty(sVar3))
	{
		Local_557.f_7.f_7++;
		return;
	}
	if (!Local_557.f_20.f_495[iVar2]->f_1)
	{
		request_waypoint_recording(sVar3);
		Local_557.f_20.f_495[iVar2]->f_1 = 1;
		return;
	}
	else if (!get_is_waypoint_recording_loaded(sVar3))
	{
		return;
	}
	if (func_442(uVar1, sVar3, 1, 1058642330, 1053609165, 0))
	{
	}
	func_177(iVar0, 524288);
	Local_557.f_20.f_5++;
	Local_557.f_7.f_7++;
}

void func_230()
{
	if (Local_557.f_20.f_555 == 0)
	{
		return;
	}
	if ((Local_15.f_222 == -1 || Local_15.f_222.f_1 == -1) || !func_59(268435456))
	{
		func_413(Local_300[Local_557.f_1008], 262144);
		func_413(Local_300[Local_557.f_1008], 524288);
		if (func_30(Local_557.f_957))
		{
			destroy_tracked_point(Local_557.f_957);
			Local_557.f_957 = 0;
		}
		return;
	}
	if (func_47(Local_300[Local_557.f_1008], 262144))
	{
		return;
	}
	if (!func_443(Local_15.f_222, Local_15.f_222.f_1, &bVar0))
	{
		return;
	}
	if (bVar0)
	{
		func_189(Local_300[Local_557.f_1008], 524288);
	}
	func_189(Local_300[Local_557.f_1008], 262144);
	if (func_30(Local_557.f_957))
	{
		destroy_tracked_point(Local_557.f_957);
		Local_557.f_957 = 0;
	}
}

void func_231()
{
	bVar0 = func_43(4);
	if ((bVar0 && func_43(4096)) && Local_557.f_20.f_16 == 1320143426)
	{
		if (func_444(0, 0, 0))
		{
			if (Local_557.f_1015 == 0)
			{
				Local_557.f_1015 = get_network_time_accurate();
			}
			if (Local_557.f_1015 != 0 && func_445(Local_557.f_1015) < 45000)
			{
				_0xbd944a3d36e992de();
				report_police_spotted_player(get_player_index());
			}
		}
		else
		{
			Local_557.f_1015 = 0;
		}
	}
	if (bVar0 && Local_557.f_20.f_16 == 1320143426)
	{
		func_32(1);
		func_33(1);
	}
	else
	{
		func_32(0);
		func_33(0);
	}
	if ((bVar0 && Local_557.f_20.f_3 != 0) && !func_45())
	{
		iVar1 = player_id();
		switch (Local_557.f_20.f_3)
		{
			case 1503734359:
				_0x785177e4d57d7389(iVar1, -683250308, 0, 0, -1);
				_0x785177e4d57d7389(iVar1, 481893872, 0, 0, -1);
				_0x785177e4d57d7389(iVar1, 2006449383, 0, 0, -1);
				_0x785177e4d57d7389(iVar1, 2140177766, 0, 0, -1);
				_0x785177e4d57d7389(iVar1, 2140177766, 0, 0, -1);
				break;
		}
	}
}

void func_232()
{
	if (!func_43(8192))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_446(iVar1);
		if (&Local_557.f_952[iVar1] == Global_1893587->f_2 && func_377(Global_1893587->f_2))
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		Local_557.f_952.f_4 = 0;
	}
}

void func_233()
{
	if (!func_43(4))
	{
		return;
	}
	if (func_47(Local_300[Local_557.f_1008], 4))
	{
		if (func_447())
		{
			if (func_43(33554432))
			{
				return;
			}
			func_125(33554432);
			if (func_43(func_57(1138140145)))
			{
				func_44(func_57(1138140145));
			}
			else if (func_43(func_57(1231609204)))
			{
				func_44(func_57(1231609204));
			}
			return;
		}
		else
		{
			func_44(33554432);
		}
		func_58(1231609204, 0);
		if (func_59(64))
		{
			func_58(-1416703903, 1);
			return;
		}
		else if (func_59(32))
		{
			func_58(758533472, 1);
			return;
		}
		if (func_43(func_57(1138140145)))
		{
			return;
		}
		if (func_43(65536) || func_43(32768))
		{
			if (func_411(Global_35, Local_557.f_20.f_7) < Local_557.f_20.f_19)
			{
				func_58(1138140145, 0);
			}
		}
	}
	else
	{
		func_58(-2111154143, 0);
		if (func_59(64))
		{
			func_58(758533472, 1);
			return;
		}
	}
}

void func_234()
{
	func_448(Local_557.f_7.f_10);
	func_268(&(Local_557.f_7.f_10), 6);
}

void func_235()
{
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return;
	}
	func_449(&uVar0, &bVar1, &bVar2, &bVar3);
	if (Local_557.f_1010 != -1)
	{
		iVar4 = get_time_difference(Local_557.f_1010, get_network_time_accurate());
		if (bVar1)
		{
			Local_557.f_1011 = (Local_557.f_1011 + iVar4);
		}
		else
		{
			Local_557.f_1011 = 0;
		}
		if (bVar2)
		{
			Local_557.f_1012 = (Local_557.f_1012 + iVar4);
		}
		else
		{
			Local_557.f_1012 = 0;
		}
		if (bVar3)
		{
			Local_557.f_1013 = (Local_557.f_1013 + iVar4);
		}
		else
		{
			Local_557.f_1013 = 0;
		}
	}
	if ((!bVar1 && !bVar2) && !bVar3)
	{
		Local_557.f_1010 = -1;
		Local_557.f_1013 = 0;
		Local_557.f_1012 = 0;
		Local_557.f_1011 = 0;
	}
	else
	{
		Local_557.f_1010 = get_network_time_accurate();
	}
}

var func_236(bool bParam0)
{
	if (func_45())
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!func_396(iVar1, 0, 1))
			{
			}
			else if ((!func_47(Local_300[iVar1], 4) && !func_47(Local_300[iVar1], 8192)) && !func_47(Local_300[iVar1], 131072))
			{
			}
			else
			{
				_0x31010318ba9897ac(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!func_396(iVar1, 0, 1))
			{
			}
			else if (!func_47(Local_300[iVar1], 4) && !func_47(Local_300[iVar1], 64))
			{
			}
			else
			{
				_0x31010318ba9897ac(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	if (bParam0)
	{
		_0xffddf802279be128(&(Local_557.f_958), &uVar0, &uVar2);
		uVar0 = uVar2;
	}
	return uVar0;
}

void func_237(var uParam0)
{
	iVar2 = player_id();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!_0x72b2e00c9bac6789(&uParam0, iVar0))
		{
		}
		else
		{
			iVar1 = int_to_playerindex(iVar0);
			if (iVar2 == iVar1)
			{
			}
			else
			{
				_0x157d8f3de12b307f(iVar1, 0);
			}
		}
		iVar0++;
	}
}

Vector3 func_238(vector3 vParam0, float fParam3, float fParam4)
{
	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { get_random_float_in_range(-fParam3, fParam3), get_random_float_in_range(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = get_random_float_in_range(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_450(vParam0, fParam3, fParam4);
}

int func_239()
{
	return Local_557.f_20.f_1;
}

int func_240(int iParam0)
{
	return &(Global_1109804->f_5737[iParam0]);
}

int func_241(int iParam0, var uParam1)
{
	if (func_452(func_451(iParam0, uParam1)))
	{
		return 0;
	}
	if (!func_453(iParam0, &vVar0, uParam1))
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

int func_242(int iParam0)
{
	return func_454(iParam0);
}

Vector3 func_243(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return func_451(iParam0, uParam1);
	}
	iParam2 = (iParam2 - 1);
	if (!func_453(iParam0, &Var3, uParam1))
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

bool func_244(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (_0xf6a8a652a6b186cd(&(Local_15.f_263[iParam0])))
	{
		return true;
	}
	if (func_452(vParam1))
	{
		return true;
	}
	if (!_0xa4a4359320345b34(Local_15.f_263.f_5))
	{
		if (_0x397769175a7dbb30(vParam1, fParam4, 0, 0, 575122756))
		{
			*bParam6 = 1;
			return false;
		}
		Var1 = { vParam1 };
		Var1.f_4 = fParam4;
		Var1.f_6 = iParam5;
		Var1.f_7 = Local_557.f_20.f_556;
		Local_15.f_263.f_5 = _0x183c0b6cfeffcae4(&Var1);
	}
	iVar0 = _0xb33a604345f58202(Local_15.f_263.f_5);
	switch (iVar0)
	{
		case 3:
			Local_15.f_263[iParam0] = _0x351d71b8b72b858b(Local_15.f_263.f_5);
			return true;
		case 4:
			Local_15.f_263.f_5 = 0;
			return true;
		default:
			break;
	}
	return false;
}

int func_245(int iParam0, struct<2> Param1, bool bParam3)
{
	if (!Global_1901947->f_308.f_23)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_0x93a91a351a07360e(iParam0))
	{
		return 0;
	}
	if (!func_73(Param1))
	{
		return 0;
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
	Var0.f_10 = player_id();
	Var0.f_11 = iParam0;
	Var0.f_4 = 12;
	Var0.f_7 = { Param1 };
	if (bParam3)
	{
		Var0.f_14 |= 2;
	}
	uVar31 = func_455(iParam0);
	if (count_player_bits(&uVar31) <= 0)
	{
		return 0;
	}
	func_456(&Var0, uVar31);
	Var0.f_4 = 13;
	func_457(&Var0);
	return 1;
}

void func_246()
{
	if (Local_557.f_20.f_548 <= 0)
	{
		return;
	}
	if (Local_557.f_20.f_554 <= 0)
	{
		return;
	}
	if (!func_59(16384))
	{
		return;
	}
	if (func_59(2097152))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_548)
	{
		fVar1[iVar0] = get_random_float_in_range(0f, 1f);
		iVar0++;
	}
	iVar25 = 0;
	while (iVar25 < Local_557.f_20.f_554)
	{
		fVar23 = 0f;
		iVar24 = -1;
		iVar0 = 0;
		while (iVar0 < Local_557.f_20.f_548)
		{
			if (&Local_557.f_20.f_22[iVar0] != 391477998)
			{
			}
			else if (func_248(iVar0))
			{
			}
			else if (&fVar1[iVar0] > fVar23)
			{
				fVar23 = &fVar1[iVar0];
				iVar24 = iVar0;
			}
			iVar0++;
		}
		if (iVar24 == -1)
		{
		}
		else
		{
			func_458(iVar24);
			iVar25++;
		}
	}
	func_100(2097152);
}

bool func_247(int iParam0, int iParam1)
{
	if (((func_459(iParam0, &Var0) && func_346(Var0, -223083781, &bVar5, 0)) && bVar5) && func_345(Var0, 1033186381, iParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_248(int iParam0)
{
	func_313(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Local_15.f_251[iVar0]), iVar1);
}

int func_249()
{
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_548)
	{
		if (!func_214(iVar0))
		{
		}
		else if (func_51(iVar0, 8) && !func_248(iVar0))
		{
		}
		else if (((((((func_51(iVar0, 64) && func_250(iVar0, &iVar1)) && &Local_557.f_20.f_22[iVar0] != -1574827255) && iVar1 >= 0) && iVar1 < 21) && &Local_557.f_20.f_22[iVar1] == 391477998) && !func_248(iVar1)) && func_51(iVar1, 8))
		{
		}
		else
		{
			iVar2++;
		}
		iVar0++;
	}
	return iVar2;
}

bool func_250(int iParam0, int iParam1)
{
	if (func_116(iParam0, &Var0) && func_345(Var0, 1033186381, iParam1, 0))
	{
		return true;
	}
	return false;
}

void func_251()
{
	if (Local_557.f_20.f_548 <= 0)
	{
		return;
	}
	if (!func_460(2, Local_557.f_20.f_556))
	{
		return;
	}
	fVar0 = 0f;
	iVar1 = -1;
	iVar4 = func_351();
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (&Local_557.f_20.f_22[iVar2] == 0)
		{
		}
		else
		{
			func_375(&Var5);
			if (!func_116(iVar2, &Var5))
			{
			}
			else if (!func_346(Var5, -155963228, &bVar10, 0) || !bVar10)
			{
			}
			else
			{
				fVar3 = get_random_float_in_range(0f, 1f);
				if (fVar3 > fVar0)
				{
					iVar1 = iVar2;
					fVar0 = fVar3;
				}
			}
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	func_461(iVar1, 33554432);
}

bool func_252()
{
	if (Local_15.f_255.f_2 >= 2)
	{
		return true;
	}
	iVar0 = func_462();
	if (Local_15.f_255.f_2 >= iVar0)
	{
		return true;
	}
	iVar1 = Local_15.f_255.f_2;
	if (!func_463(iVar1))
	{
		return false;
	}
	Local_15.f_255.f_2++;
	return false;
}

bool func_253()
{
	if (Local_15.f_255.f_1 >= 18)
	{
		return true;
	}
	iVar0 = Local_15.f_255.f_1;
	if (!func_464(iVar0))
	{
		return false;
	}
	Local_15.f_255.f_1++;
	return false;
}

bool func_254()
{
	if (Local_15.f_255 >= Local_557.f_20.f_548)
	{
		return true;
	}
	iVar0 = Local_15.f_255;
	if (!func_465(iVar0))
	{
		return false;
	}
	func_466();
	Local_15.f_255++;
	return false;
}

bool func_255()
{
	iVar0 = Local_15.f_255.f_3;
	iVar1 = func_467();
	if (iVar0 >= iVar1)
	{
		return true;
	}
	if (!func_468(iVar0))
	{
		return false;
	}
	func_268(&(Local_15.f_255.f_3), 5);
	return false;
}

bool func_256()
{
	if (!func_59(524288))
	{
		return false;
	}
	if (get_time_difference(Local_15.f_277, get_network_time_accurate()) < 10000)
	{
		return false;
	}
	return true;
}

void func_257()
{
	if (func_59(524288))
	{
		return;
	}
	Local_15.f_277 = get_network_time_accurate();
	func_100(524288);
}

int func_258()
{
	return Local_557.f_20.f_16;
}

void func_259()
{
	iVar0 = Local_557.f_946;
	func_469(iVar0, &iVar1, &iVar2);
	Local_557.f_946++;
	if (iVar2 < 0)
	{
		return;
	}
	iVar3 = get_random_int_in_range(0, iVar1);
	if (Local_557.f_946.f_1 > -1)
	{
		if (Local_557.f_946.f_3 > iVar2)
		{
			return;
		}
		if (iVar3 < Local_557.f_946.f_2 && Local_557.f_946.f_3 == iVar2)
		{
			return;
		}
	}
	Local_557.f_946.f_1 = iVar0;
	Local_557.f_946.f_3 = iVar2;
	Local_557.f_946.f_2 = iVar3;
}

bool func_260()
{
	if (Local_557.f_946.f_1 == -1)
	{
		return false;
	}
	iVar0 = int_to_playerindex(Local_557.f_946.f_1);
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	if (!network_is_player_active(iVar0))
	{
		return false;
	}
	if (!_network_is_player_index_valid(Local_15.f_283))
	{
		return false;
	}
	if (_0xd6f6acf4392187fb(Local_15.f_282) && _0x901e0dc25080c8b9(iVar0) == Local_15.f_282)
	{
		return false;
	}
	if (iVar0 == Local_15.f_283)
	{
		return false;
	}
	Local_15.f_234[0] = iVar0;
	Local_15.f_275++;
	Local_15.f_276 = Local_15.f_275;
	return true;
}

void func_261()
{
	iVar0 = Local_557.f_946;
	func_470(iVar0, &iVar1, &iVar2);
	Local_557.f_946++;
	if (iVar2 < 0)
	{
		return;
	}
	iVar3 = get_random_int_in_range(0, iVar1);
	if (Local_557.f_946.f_1 > -1)
	{
		if (Local_557.f_946.f_3 > iVar2)
		{
			return;
		}
		if (iVar3 < Local_557.f_946.f_2 && Local_557.f_946.f_3 == iVar2)
		{
			return;
		}
	}
	Local_557.f_946.f_1 = iVar0;
	Local_557.f_946.f_3 = iVar2;
	Local_557.f_946.f_2 = iVar3;
}

bool func_262()
{
	if (Local_557.f_946.f_1 == -1)
	{
		return false;
	}
	iVar0 = int_to_playerindex(Local_557.f_946.f_1);
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	if (!network_is_player_active(iVar0))
	{
		return false;
	}
	if (!_network_is_player_index_valid(Local_15.f_283))
	{
		return false;
	}
	iVar1 = _0x901e0dc25080c8b9(iVar0);
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		return false;
	}
	if (iVar1 == Local_15.f_282)
	{
		return false;
	}
	if (iVar0 == Local_15.f_283)
	{
		return false;
	}
	Local_15.f_284 = iVar1;
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		iVar4 = int_to_playerindex(iVar3);
		if (!network_is_player_active(iVar4))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar4) != iVar1)
		{
		}
		else
		{
			Local_15.f_234[iVar2] = iVar4;
			iVar2++;
			Local_15.f_275++;
		}
		iVar3++;
	}
	Local_15.f_276 = Local_15.f_275;
	return true;
}

void func_263()
{
	func_471();
	if (!func_59(16777216))
	{
		if (func_472(4))
		{
			if (func_59(8))
			{
				func_473(1);
			}
			func_100(16777216);
		}
	}
	else if (((!func_59(64) && !func_59(32)) && !func_59(8388608)) && !func_472(4))
	{
		func_100(8388608);
	}
	if (!func_59(2048) && (func_43(32768) || func_43(65536)))
	{
		if (func_472(1024))
		{
			func_100(2048);
		}
	}
}

void func_264()
{
	if (Local_557.f_20.f_555 == 0)
	{
		return;
	}
	func_474(Local_15.f_259.f_2, &bVar0);
	if (bVar0)
	{
		return;
	}
	func_268(&(Local_15.f_259.f_2), Local_557.f_20.f_555);
}

void func_265()
{
	iVar0 = Local_15.f_259;
	func_475(iVar0);
	func_268(&(Local_15.f_259), 7);
}

void func_266(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_267(int iParam0)
{
	if (Local_15.f_2[iParam0]->f_2 == 0)
	{
		return;
	}
	if (Local_15.f_2[iParam0]->f_2 == 1583594396)
	{
		func_476(iParam0);
	}
	func_477(iParam0);
	if (!func_479(iParam0, 1, func_478(Local_15.f_2[iParam0]->f_2)) && Local_15.f_2[iParam0]->f_2 != 1583594396)
	{
		func_480(iParam0);
		return;
	}
	func_481(iParam0);
	if (func_43(65536) || func_43(32768))
	{
		if (((!func_59(536870912) && Local_15.f_2[iParam0]->f_2 == -1574827255) && func_52(iParam0, &iVar0, 1, 1)) && func_411(get_entity_coords(iVar0, false, true), Local_557.f_20.f_7) > Local_557.f_20.f_19)
		{
			func_100(536870912);
		}
	}
	switch (Local_15.f_2[iParam0]->f_2)
	{
		case -1574827255:
			func_482(iParam0);
			break;
		case -1360694003:
			func_483(iParam0);
			break;
		case 1824637041:
			func_484(iParam0);
			break;
		case 516423162:
			func_485(iParam0);
			break;
		case 1583594396:
			if (func_486(iParam0))
			{
				func_62(iParam0, 0);
				func_487(iParam0);
			}
			break;
	}
}

void func_268(var uParam0, int iParam1)
{
	*uParam0++;
	if (*uParam0 >= iParam1)
	{
		*uParam0 = 0;
	}
}

bool func_269(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17353[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_270(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17353[iVar0] == iParam0)
		{
			return Global_17353[Global_17374]->f_1;
		}
		iVar0++;
	}
	return 5;
}

bool func_271(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 878483537;
		uParam1->f_3 = iParam0;
		return _datafile_get_data_node_index(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_272(int iParam0, var uParam1)
{
	if (func_116(iParam0, &Var0) && func_109(Var0, -1111171646, uParam1, 0))
	{
		return true;
	}
	return false;
}

int func_273(int iParam0, int iParam1)
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

void func_274(int iParam0)
{
	iVar0 = func_273(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_275(int iParam0)
{
	iVar0 = func_273(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_276()
{
	func_275(-939420910);
	func_275(-1187950766);
	func_275(356365161);
	func_275(753127042);
	func_275(-2038424081);
	func_275(1884271742);
	func_275(459290420);
}

void func_277()
{
	func_275(704802028);
	func_275(588987611);
	func_275(2008888900);
	func_275(1649996811);
	func_275(227918160);
	func_275(168171957);
	func_275(1193080109);
	func_275(-491981251);
	func_275(-639037538);
	func_275(-618620429);
}

bool func_278(int iParam0)
{
	iVar0 = func_273(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_488(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_489(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

void func_279(int iParam0)
{
	if (func_490(iParam0) && func_491())
	{
		remove_door_from_system(iParam0);
	}
}

bool func_280(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

void func_281(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_492(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_123(iParam0);
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
						func_281(iVar3, iParam1, 0, 1, 0, 0);
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
			func_493(&Var6, uVar4);
		}
	}
}

void func_282(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

char* func_283(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

void func_284(int iParam0)
{
	func_285(Local_557.f_584[iParam0]);
}

void func_285(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_286(int iParam0)
{
	return iParam0 != 0;
}

void func_287(var uParam0, bool bParam1, bool bParam2)
{
	if ((uParam0[0] != 0 || bParam2) || ((*uParam0)[0]->f_23 != -1 && bParam1))
	{
		Var0.f_27 = -1;
		Var0.f_28 = -1;
		Var0.f_29 = -1082130432;
		iVar40 = 0;
		while (iVar40 <= 6)
		{
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_1);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_2);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_3);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_4);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_5);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_6);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_10);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_11);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_12);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_13);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_14);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_15);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_20);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_21);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_22);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_16);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_17);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_18);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_19);
			_databinding_remove_data_entry(uParam0[iVar40]);
			if (!bParam1)
			{
				uVar34 = (*uParam0)[iVar40]->f_23;
				uVar35 = (*uParam0)[iVar40]->f_25;
				uVar36 = (*uParam0)[iVar40]->f_26;
				uVar37 = (*uParam0)[iVar40]->f_27;
				uVar38 = (*uParam0)[iVar40]->f_28;
				uVar39 = (*uParam0)[iVar40]->f_29;
			}
			_copy_memory((*uParam0)[iVar40], &Var0, 34);
			if (!bParam1)
			{
				(*uParam0)[iVar40]->f_23 = uVar34;
				(*uParam0)[iVar40]->f_25 = uVar35;
				(*uParam0)[iVar40]->f_26 = uVar36;
				(*uParam0)[iVar40]->f_27 = uVar37;
				(*uParam0)[iVar40]->f_28 = uVar38;
				(*uParam0)[iVar40]->f_29 = uVar39;
			}
			iVar40++;
		}
	}
}

void func_288(var uParam0, bool bParam1)
{
	if (uParam0->f_2 > 0)
	{
		_0xdd1232b332cbb9e7(12, 1, 0);
		if (bParam1)
		{
			func_494(uParam0);
			func_495();
		}
		func_496(uParam0);
		_databinding_remove_data_entry(uParam0->f_6);
		_databinding_remove_data_entry(uParam0->f_5);
		_0xf1e6979c0b779985(&(uParam0->f_4));
		uParam0->f_9 = 0;
		func_497(0);
		func_498(0);
		_0xdd1232b332cbb9e7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		_copy_memory(uParam0, &Var0, 15);
	}
}

bool func_289(int iParam0)
{
	iVar0 = 6;
	if (func_286(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

void func_290(int iParam0)
{
	if (&Local_557.f_584.f_31[iParam0] == 255)
	{
		return;
	}
	iVar0 = &Local_557.f_584.f_31[iParam0];
	func_499(iVar0);
	func_500(iVar0);
	func_501(iVar0);
	func_502(&(Local_15.f_234[iParam0]));
	func_503(iVar0);
	Local_557.f_584.f_31[iParam0] = 255;
}

void func_291(int iParam0)
{
	if (!_0x72b2e00c9bac6789(&(Local_557.f_959), iParam0))
	{
		return;
	}
	func_500(iParam0);
	func_503(iParam0);
	_0xd426e2e3288469d6(&(Local_557.f_959), iParam0);
}

bool func_292(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_293(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_294(int iParam0)
{
	if (func_176(iParam0, 1))
	{
		return false;
	}
	if (func_176(iParam0, 4096))
	{
		return false;
	}
	switch (Local_15.f_2[iParam0]->f_2)
	{
		case -1574827255:
		case 516423162:
		case 1824637041:
			return false;
		default:
			break;
	}
	return true;
}

void func_295(int iParam0, int iParam1)
{
	func_139(&(Local_557.f_20.f_22[iParam0]->f_1), iParam1);
}

bool func_296(int iParam0, bool bParam1)
{
	iVar4 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	if (Global_1139381->f_3876.f_711 == iParam0)
	{
		return true;
	}
	Global_1139381->f_3876.f_706.f_1 = 0;
	Global_1139381->f_3876.f_706.f_2 = 1613014828;
	Global_1139381->f_3876.f_706.f_3 = iParam0;
	Global_1139381->f_3876.f_706.f_4 = 0;
	if (!_0x603ac35fd4602c76(Global_1139381->f_3876.f_706))
	{
		Global_1139381->f_3876.f_706 = Global_1139381->f_2;
	}
	if (!_datafile_get_data_node_index(&uVar0, &(Global_1139381->f_3876.f_706)))
	{
		return false;
	}
	Global_1139381->f_3876.f_711 = iParam0;
	iVar4 = 0;
	while (iVar4 < 106)
	{
		iVar2 = func_504(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1139381->f_3876.f_706.f_4 = iVar1;
				Global_1139381->f_3876.f_706.f_2 = -239316549;
				if (_datafile_get_data_node_index(&uVar0, &(Global_1139381->f_3876.f_706)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_505(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1139381->f_3876.f_706.f_2 = 1242520881;
					if (_datafile_get_bool(&bVar3, &(Global_1139381->f_3876.f_706)))
					{
					}
					else
					{
						bVar3 = true;
					}
					(Global_1139381->f_3876.f_2[func_506(iVar2, 1)])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

void func_297(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_298()
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

int func_299(int iParam0)
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

int func_300(int iParam0)
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

void func_301(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_302(struct<2> Param0, bool bParam2, var uParam3)
{
	if (!func_73(Param0))
	{
		return;
	}
	iVar1 = func_507(Param0);
	if (!func_508(iVar1))
	{
		return;
	}
	iVar0 = func_509(iVar1);
	if (!func_510(iVar0))
	{
		return;
	}
	iVar2 = func_511(iVar1);
	if (!func_512(iVar2))
	{
		return;
	}
	iVar6 = func_513(iVar1);
	if (iVar6 == -1)
	{
		return;
	}
	iVar3 = func_514(iVar0);
	iVar4 = func_515(iVar0);
	iVar5 = func_240(iVar6);
	if (func_516())
	{
		if (bParam2 && _0x424b17a7dc5c90bc(player_id()))
		{
			func_517(iVar0, iVar2, Param0, iVar6);
		}
		if (func_242(iVar5) != -531996999)
		{
			switch (iVar4)
			{
				case 2132950130:
					break;
				case -408236271:
					func_519(iVar4, func_518());
					func_520(iVar4, 1);
					func_521(iVar0);
					func_522(iVar0);
					func_523(16777216);
					break;
				case 1766283257:
					func_519(iVar4, func_518());
					func_520(iVar4, 1);
					func_521(iVar0);
					func_522(iVar0);
					func_523(8388608);
					break;
				default:
					func_519(iVar4, func_518());
					func_520(iVar4, 1);
					func_521(iVar0);
					func_522(iVar0);
					break;
			}
		}
		func_524(iVar4, func_518());
		func_525(iVar4, bParam2);
		switch (func_526(iVar5))
		{
			case 7:
				func_527(uParam3);
				break;
		}
		func_528(iVar6, Param0, bParam2, *uParam3);
		func_530(func_529(iVar0), 1);
		func_531(1);
	}
	func_532(iVar3, bParam2);
	func_533();
}

bool func_303(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	return func_534(iParam0, iParam1);
}

void func_304(int iParam0)
{
	func_535(iParam0);
}

void func_305(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_536(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (func_537(Var0))
	{
		return;
	}
	if (!func_538(Var0))
	{
		return;
	}
	if (func_539(iParam0, player_id(), 5))
	{
		return;
	}
	if (bParam1)
	{
		bVar2 = 4;
	}
	else
	{
		bVar2 = false;
	}
	func_540(Var0, 0, bVar2, bParam2, 0);
	func_541(iParam0, 4);
}

void func_306(bool bParam0, bool bParam1, int iParam2)
{
	if (func_45())
	{
		*iParam2 = Local_15.f_276;
		if (bParam0)
		{
			*bParam1 = Local_15.f_275;
		}
		else
		{
			*bParam1 = (*iParam2 - Local_15.f_275);
		}
	}
	else
	{
		*iParam2 = Local_557.f_20.f_549;
		if (bParam0)
		{
			*bParam1 = Local_15.f_275;
		}
		else
		{
			*bParam1 = (*iParam2 - Local_15.f_275);
		}
	}
}

void func_307(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	if (!func_73(Param0))
	{
		return;
	}
	iVar1 = func_507(Param0);
	if (!func_508(iVar1))
	{
		return;
	}
	iVar0 = func_509(iVar1);
	if (!func_510(iVar0))
	{
		return;
	}
	iVar2 = func_511(iVar1);
	if (!func_512(iVar2))
	{
		return;
	}
	if (bParam4 <= 0)
	{
	}
	else if (bParam3 >= bParam4)
	{
		bVar6 = true;
		bVar4 = true;
		bVar5 = true;
	}
	else
	{
		bVar6 = false;
		bVar4 = bParam3 >= true;
		fVar3 = (to_float(bParam3) / to_float(bParam4));
		bVar5 = fVar3 >= 0.5f;
	}
	if (bVar5)
	{
		switch (iParam6)
		{
			case 0:
			case 2:
				iVar7 = 0;
				break;
			case 1:
				iVar7 = 1;
				break;
		}
	}
	else if (bVar4)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 2;
	}
	iVar10 = func_515(iVar0);
	iVar11 = func_154(Param0);
	iVar8 = func_513(iVar1);
	iVar9 = func_514(iVar0);
	if (func_516())
	{
		func_542(iVar10, iVar11);
		func_543(iVar10, iVar8);
		func_544(iVar10, iVar7);
		func_545(iVar10, bParam2, bVar4);
		func_546(iVar10, bParam2, bVar6);
		func_547(iVar8, bParam2, bVar4, Param0, iParam5, iParam6 == 3, bParam7);
		if (!bParam2)
		{
			if (bVar4)
			{
				func_548(iVar2, iVar0, 1545958071, Param0);
			}
			else
			{
				func_548(iVar2, iVar0, -448995989, Param0);
			}
		}
		func_549(bVar4);
	}
	func_550(iVar9, bParam2, bVar4);
	func_551(Param0, bVar4);
	func_552(1);
	func_552(0);
	func_553(0);
	func_554(0);
	func_555(4);
}

void func_308(int iParam0, bool bParam1)
{
	Var0 = { func_536(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (func_537(Var0))
	{
		return;
	}
	if (!func_538(Var0))
	{
		return;
	}
	if (func_539(iParam0, player_id(), 5))
	{
		return;
	}
	func_540(Var0, 0, 1, bParam1, 0);
	func_541(iParam0, 5);
}

void func_309(int iParam0, bool bParam1)
{
	Var0 = { func_536(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (!func_537(Var0) && !func_538(Var0))
	{
		return;
	}
	func_556(iParam0, 2);
	func_556(iParam0, 3);
	func_541(iParam0, 6);
	func_540(Var0, 0, 2, bParam1, 0);
}

bool func_310(struct<2> Param0, var uParam2)
{
	if (!func_73(Param0))
	{
		return false;
	}
	func_557(uParam2);
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

bool func_311(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_240(iParam0);
	if (iVar0 == -1)
	{
	}
	iVar1 = func_558(iVar0);
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

var func_312(int iParam0)
{
	if (!func_311(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_240(iParam0);
	iVar2 = func_558(iVar1);
	switch (iVar2)
	{
		case 2:
			return func_559(2);
		case 1:
			return func_559(3);
		default:
			break;
	}
	return uVar0;
}

void func_313(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = (iParam0 / 32);
	*iParam2 = (iParam0 % 32);
}

bool func_314(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (player_ped_id() != iVar0)
	{
		return false;
	}
	return true;
}

bool func_315(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (_get_last_mount(player_ped_id()) != iVar0)
	{
		return false;
	}
	return true;
}

int func_316(int iParam0)
{
	return Local_15.f_234[iParam0]->f_1;
}

char* func_317()
{
	return "supply_delivered";
}

char* func_318()
{
	return "HUD_MP_FREE_MODE";
}

int func_319(int iParam0)
{
	return Local_15.f_2[iParam0]->f_2;
}

void func_320(int iParam0, bool bParam1, bool bParam2)
{
	if (func_65() != 0)
	{
		return;
	}
	if (func_560())
	{
		return;
	}
	if (_0x0e2f43516f998269(player_ped_id()))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1139381->f_3876.f_2[func_506(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_506(iParam0, 1)])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1296859->f_16 != &Global_1296859)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!network_is_player_active(&(Global_1296859->f_154[iVar8])))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, &(Global_1296859->f_154[iVar8])))
		{
		}
		else if (&Global_1296859->f_154[iVar8] == Global_1296859->f_10)
		{
		}
		else
		{
			_0x31010318ba9897ac(&uVar7, &(Global_1296859->f_154[iVar8]));
		}
		iVar8++;
	}
	func_561(&Var0, uVar7);
}

bool func_321(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0]->f_2 != -1574827255)
		{
		}
		else if (iVar0 == iParam0)
		{
		}
		else
		{
			if (func_176(iVar0, 1) || func_431(iVar0, Local_300[Local_557.f_1008]))
			{
				bVar2 = true;
			}
			else
			{
				bVar1 = true;
				iVar0++;
			}
			if (bVar1 && !bVar2)
			{
				return true;
			}
			return false;
		}
	}
}

var func_322(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_562() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_563());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_563());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_563());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_564(get_player_team(iVar5)));
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
			if (func_565(iVar2))
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
				if (iVar9 & 8192 != 0 && func_566(iVar2) != 1)
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
					if (!func_567(iVar10))
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

void func_323(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 53;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	uParam0->f_5 = uVar553;
	trigger_script_event(1, uParam0, 8, 38, &uParam1);
}

void func_324(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 1:
			iVar0 = &Local_15.f_234[uParam0->f_6];
			if (iVar0 == player_id())
			{
				return;
			}
			if (!_network_is_player_index_valid(iVar0))
			{
				return;
			}
			if (!network_is_player_active(iVar0))
			{
				return;
			}
			if (!func_43(4))
			{
				return;
			}
			func_569(func_568(iVar0));
			break;
		case 2:
			if ((!func_47(Local_300[Local_557.f_1008], 4) && !func_47(Local_300[Local_557.f_1008], 8192)) && !func_47(Local_300[Local_557.f_1008], 131072))
			{
				return;
			}
			iVar0 = int_to_playerindex(uParam0->f_7);
			if (!_network_is_player_index_valid(iVar0))
			{
				return;
			}
			if (iVar0 == player_id())
			{
				return;
			}
			if (((func_47(Local_300[Local_557.f_1008], 4) && !func_59(64)) && !func_59(32)) && !func_163(uParam0->f_6))
			{
				func_569(func_570(uParam0->f_6));
			}
			func_499(uParam0->f_6);
			func_501(uParam0->f_6);
			break;
		case 7:
			if (!func_43(4))
			{
				return;
			}
			if (uParam0->f_6 < 0 || uParam0->f_6 >= 21)
			{
				return;
			}
			func_313(iVar1, &iVar3, &iVar4);
			if (is_bit_set(&(Local_557.f_996[iVar3]), iVar4))
			{
				return;
			}
			if (Local_557.f_20 == 1657045547)
			{
				if (uParam0->f_1 == player_id() || (func_52(uParam0->f_6, &iVar2, 0, 1) && vdist(get_entity_coords(iVar2, false, false), Global_35) < 30f))
				{
					if (func_321(uParam0->f_6))
					{
						func_125(1024);
					}
				}
			}
			set_bit(Local_557.f_996[iVar3], iVar4);
			break;
		case 11:
			func_571(uParam0->f_6);
			break;
	}
}

void func_325(int iParam0, int iParam1)
{
	if (func_176(iParam0, 134217728))
	{
		return;
	}
	if (&Local_557.f_20.f_22[iParam0] != -1574827255 && &Local_557.f_20.f_22[iParam0] != 391477998)
	{
		return;
	}
	if ((_network_is_player_index_valid(iParam1) && network_is_player_active(iParam1)) && network_is_player_a_participant(iParam1))
	{
		Local_15.f_2[iParam0]->f_5 = iParam1;
	}
	if (!func_59(16))
	{
		Local_15.f_275 = (Local_15.f_275 - 1);
	}
	func_461(iParam0, 134217728);
}

void func_326(int iParam0)
{
	func_313(iParam0, &iVar0, &iVar1);
	set_bit(Local_15.f_249[iVar0], iVar1);
	Local_15.f_275 = (Local_15.f_275 - 1);
	func_100(4194304);
}

void func_327(int iParam0, var uParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_572(iParam0, 3);
}

void func_328(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam1) || !network_is_player_active(iParam1))
	{
		return;
	}
	func_573(iParam0, iParam1);
}

void func_329(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 21)
	{
		return;
	}
	if (Local_15.f_2[iParam0]->f_2 != -1574827255 || func_176(iParam0, 134217728))
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam1) || !network_is_player_active(iParam1))
	{
		return;
	}
	Local_15.f_2[iParam0]->f_5 = iParam1;
}

void func_330(int iParam0, var uParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_572(iParam0, 3);
}

void func_331(int iParam0, var uParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_572(iParam0, 3);
}

void func_332(int iParam0, var uParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_572(iParam0, 3);
}

void func_333(int iParam0, var uParam1)
{
	if (iParam0 >= 6 || iParam0 < 0)
	{
		return;
	}
	if (func_574(iParam0))
	{
		return;
	}
	func_575(iParam0);
}

void func_334(int iParam0)
{
	if (!func_153(iParam0, 0))
	{
		return;
	}
	if (func_172(iParam0, 2))
	{
		return;
	}
	func_576(iParam0, 2);
}

int func_335(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_577(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_336(int iParam0, int iParam1)
{
	return (Global_1107216->f_33[iParam0]->f_3.f_8 && iParam1) != 0;
}

void func_337(int iParam0)
{
	(*Global_1128574)[player_id()]->f_54.f_1 = ((*Global_1128574)[player_id()]->f_54.f_1 || iParam0);
}

void func_338(char* sParam0, int* iParam1)
{
	StringCopy(&cVar0, sParam0, 64);
	StringIntConCat(&cVar0, iVar553, 64);
	add_relationship_group(&cVar0, iParam1);
}

void func_339(int iParam0)
{
	func_340(1, iParam0, -767591988, 1);
	func_340(1, iParam0, -989642646, 1);
	func_340(1, iParam0, -1683752762, 1);
	func_340(1, iParam0, 889541022, 1);
	func_340(1, iParam0, -319516747, 1);
	func_340(1, iParam0, 1986610512, 1);
	func_340(1, iParam0, -1329647920, 1);
}

void func_340(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	set_relationship_between_groups(iParam0, iParam1, iParam2);
	if (bParam3)
	{
		set_relationship_between_groups(iParam0, iParam2, iParam1);
	}
}

var func_341(int iParam0, bool bParam1)
{
	Var4.f_1 = -1;
	iVar3 = func_240(iParam0);
	if (bParam1)
	{
		iVar2 = 1822827642;
	}
	else
	{
		iVar2 = 1511238709;
	}
	if (!func_578(iVar3, iVar2, &Var4, &Var0))
	{
		return -1;
	}
	return func_579(Var0, -1);
}

int func_342(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -872351721;
		case 1:
			return -1192837347;
		case 2:
			return 1457454771;
		case 3:
			return -486752250;
		case 4:
			return -81907729;
		case 5:
			return 724299998;
		case 6:
			return 256341061;
		case 7:
			return 95942702;
		case 8:
			return 331094197;
		case 9:
			return -1251795501;
		case 10:
			return -67473273;
		case 11:
			return -422348800;
		case 12:
			return -235687863;
		case 13:
			return 917283806;
		case 14:
			return -1284309372;
		case 15:
			return 110383052;
		case 16:
			return 229174115;
		case 17:
			return 251189665;
		case 18:
			return 1468810894;
		case 19:
			return -1906113237;
		case 20:
			return 92190263;
		case 21:
			return 1352900226;
		case 22:
			return -1834576753;
		case 23:
			return -185755803;
		case 24:
			return 1852727176;
		case 25:
			return -1968510322;
		case 26:
			return 1970643719;
		case 27:
			return -30329033;
		case 28:
			return 644584216;
		case 29:
			return 1077944842;
		case 30:
			return -435940167;
		case 31:
			return 1200880489;
		case 32:
			return 1385823714;
		case 33:
			return -180479720;
		case 34:
			return 582819194;
		case 35:
			return -234450476;
		case 36:
			return -1261869617;
		case 37:
			return -1103749002;
		case 38:
			return -1807236653;
		case 39:
			return 1837403330;
		case 40:
			return -764544644;
		case 41:
			return 79787630;
		case 42:
			return 465120035;
		case 43:
			return 1787479687;
		case 44:
			return 2092186359;
		case 45:
			return 219784559;
		case 46:
			return -1893679960;
		case 47:
			return -485657984;
		case 48:
			return -827172890;
		case 49:
			return 458129012;
		case 50:
			return 1533007347;
		case 51:
			return 485523583;
		case 52:
			return -537276532;
		case 53:
			return 861602793;
		case 54:
			return 275738575;
		case 55:
			return 1520538369;
		case 56:
			return -480788145;
		case 57:
			return -1045199329;
		case 58:
			return -1746234201;
		case 59:
			return 878483537;
		case 60:
			return -1111171646;
		case 61:
			return 227384668;
		case 62:
			return 2066595802;
		case 63:
			return 1137547076;
		case 64:
			return -1786937793;
		case 65:
			return -492382713;
		case 66:
			return -223083781;
		case 67:
			return -1770081554;
		case 68:
			return -1925214904;
		case 69:
			return -1318044545;
		case 70:
			return 509508008;
		case 71:
			return -1584591647;
		case 72:
			return -865441380;
		case 73:
			return 566779387;
		case 74:
			return -209788964;
		case 75:
			return -807337682;
		case 76:
			return -874477517;
		case 77:
			return 2090933413;
		case 78:
			return -852511194;
		case 79:
			return 1159597515;
		case 80:
			return 460674190;
		case 81:
			return 2053368303;
		case 82:
			return -1882633578;
		case 83:
			return 265695803;
		case 84:
			return -2129803861;
		case 85:
			return 1628979087;
		case 86:
			return 413379496;
		case 87:
			return 1967834759;
		case 88:
			return -1878208438;
		case 89:
			return -385659440;
		case 90:
			return 2017657609;
		case 91:
			return 1719410419;
		case 92:
			return -1839625215;
		case 93:
			return 1160908162;
		case 94:
			return 1247393678;
		case 95:
			return 1446570234;
		case 96:
			return -261480992;
		case 97:
			return 1031590257;
		case 98:
			return 1322693839;
		case 99:
			return -1919876099;
		case 100:
			return 2069982589;
		case 101:
			return 625548052;
		case 102:
			return -2036553865;
		case 103:
			return -1249970703;
		case 104:
			return -454599147;
		case 105:
			return 1955180846;
		case 106:
			return -401087351;
		case 107:
			return 732905427;
		case 108:
			return -962528168;
		case 109:
			return -930766145;
		case 110:
			return 1823038874;
		case 111:
			return -176401167;
		case 112:
			return 635104585;
		case 113:
			return -1031804957;
		case 114:
			return -1272790307;
		case 115:
			return 735506410;
		case 116:
			return -1732010034;
		case 117:
			return -1711751769;
		case 118:
			return 2092691923;
		case 119:
			return 484707754;
		case 120:
			return -787028349;
		case 121:
			return -937849669;
		case 122:
			return -424701201;
		case 123:
			return -407841845;
		case 124:
			return 2071017826;
		case 125:
			return 1606032220;
		case 126:
			return 456924499;
		case 127:
			return 307635954;
		case 128:
			return -311657344;
		case 129:
			return -401112943;
		case 130:
			return 1059929194;
		case 131:
			return 871643656;
		case 132:
			return -412523681;
		case 133:
			return -155963228;
		case 134:
			return 597233769;
		case 135:
			return 706368435;
		case 136:
			return -1334467051;
		case 137:
			return -867387895;
		case 138:
			return -1652447499;
		case 139:
			return 1082010721;
		case 140:
			return -655039491;
		case 141:
			return -1296487272;
		case 142:
			return -429389572;
		case 143:
			return -1026827677;
		case 144:
			return 686916651;
		case 145:
			return -1765395338;
		case 146:
			return 1237093265;
		case 147:
			return 209905749;
		case 148:
			return 1078011673;
		case 149:
			return 561062234;
		case 150:
			return 1033186381;
		case 151:
			return 386308088;
		case 152:
			return -375509478;
		case 153:
			return -436871069;
		case 154:
			return 1464077990;
		case 155:
			return 723480330;
		case 156:
			return -1859092546;
		case 157:
			return -2109843125;
		case 158:
			return 749370907;
		case 159:
			return 1525953930;
		case 160:
			return -1839855939;
		case 161:
			return 1158526802;
		case 162:
			return 350192982;
		case 163:
			return 1475346163;
		case 164:
			return 1590382703;
		case 165:
			return 1741894372;
		case 166:
			return 1309785647;
		case 167:
			return -894890997;
		case 168:
			return -2067326263;
		case 169:
			return -1133284398;
		case 170:
			return 101317385;
		case 171:
			return -1463370342;
		case 172:
			return -513112783;
		case 173:
			return 2102445471;
		case 174:
			return 892963390;
		case 175:
			return 89352665;
		case 176:
			return -2076494195;
		case 177:
			return -1976409839;
		case 178:
			return 217995581;
		case 179:
			return -1269124321;
		case 180:
			return -1438322653;
		case 181:
			return 673047879;
		case 182:
			return -1918016700;
		case 183:
			return 258114362;
		case 184:
			return -619208322;
		case 185:
			return 796390761;
		case 186:
			return 912480409;
		case 187:
			return -728132736;
		case 188:
			return 1890996209;
		case 189:
			return -407275447;
		case 190:
			return -1443980387;
		case 191:
			return 2132698637;
		case 192:
			return -597454543;
		case 193:
			return -608357025;
		case 194:
			return 1793981541;
		case 195:
			return -966540255;
		case 196:
			return -1143761632;
		case 197:
			return 1326664274;
		case 198:
			return 691956863;
		case 199:
			return -566322512;
		case 200:
			return 1903857900;
		case 201:
			return 1518210740;
		case 202:
			return -1527836996;
		case 203:
			return -49926176;
		case 204:
			return 1855722710;
		case 205:
			return 764754194;
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

char* func_343(int iParam0)
{
	switch (iParam0)
	{
		case -872351721:
			return "activity/locations/location(id=%x)";
		case -1192837347:
			return "activity/locations/location(%i)";
		case 1457454771:
			return "activity/locations";
		case 331094197:
			return "peds/ped(%i)";
		case -1251795501:
			return "peds";
		case -67473273:
			return "props";
		case -422348800:
			return "props/prop(%i)";
		case -1746234201:
			return "tracking_paths";
		case 878483537:
			return "tracking_paths/path(%i)";
		case -1968510322:
			return "patrol_routes/patrol_route(%i)";
		case 1970643719:
			return "patrol_routes";
		case -30329033:
			return "patrol_node(%i)";
		case 485523583:
			return "defensive_areas";
		case -537276532:
			return "defensive_areas/defensive_volume(%i)";
		case 1520538369:
			return "ambient_restriction_areas";
		case -480788145:
			return "ambient_restriction_areas/ambient_restriction_volume(%i)";
		case -937849669:
			return "respawn_exclusion_areas";
		case -424701201:
			return "respawn_exclusion_areas/respawn_exclusion_volume(%i)";
		case -1318044545:
			return "los_blockers";
		case 509508008:
			return "los_blockers/blocker(%i)";
		case 625548052:
			return "ambient_chests";
		case -2036553865:
			return "ambient_chests/chest(%i)";
		case 732905427:
			return "aggregate_volumes";
		case -962528168:
			return "aggregate_volumes/aggregate_volume(%i)";
		case 1823038874:
			return "waves/wave(%i)";
		case -930766145:
			return "waves";
		case -176401167:
			return "wave_ped(%i)";
		case 484707754:
			return "respawn_points";
		case -787028349:
			return "respawn_points/respawn_point(%i)";
		case 2071017826:
			return "triggers";
		case 1606032220:
			return "triggers/trigger(%i)";
		case 386308088:
			return "herb_restriction_volumes";
		case -375509478:
			return "herb_restriction_volumes/herb_restriction_volume(%i)";
		case -1334467051:
			return "ped_groups";
		case -867387895:
			return "ped_groups/ped_group(%i)";
		case -429389572:
			return "ped_groups/ped_group(%i)/ped(%i)";
		case 723480330:
			return "lighting_rigs";
		case -1859092546:
			return "lighting_rigs/lighting_rig(%i)";
		case 749370907:
			return "region_trespass_volume_handlers";
		case 1525953930:
			return "region_trespass_volume_handlers/region(%i)";
		case -1839855939:
			return "trespass_volume_search(%i)";
		case -1976409839:
			return "pickups";
		case 217995581:
			return "pickups/pickup(%i)";
		case -407275447:
			return "target_zones";
		case -1443980387:
			return "target_zones/target_zone(%i)";
		case 644584216:
			return "decals/decal(%i)";
		case -1527836996:
			return "world_states";
		case -49926176:
			return "world_states/world_state(%i)";
		case 1077944842:
			return "decals";
		case 2132698637:
			return "ped(%i)";
		case -486752250:
			return ":model";
		case -81907729:
			return ":position";
		case 724299998:
			return ":heading";
		case 256341061:
			return ":weapon";
		case 95942702:
			return ":role";
		case 917283806:
			return ":mounted";
		case -1284309372:
			return ":weapon_out";
		case 110383052:
			return ":aggro_group_id";
		case 229174115:
			return ":scenario";
		case 251189665:
			return ":behavior";
		case 1468810894:
			return ":follow_offset";
		case -1906113237:
			return ":follow_target";
		case 92190263:
			return ":mission_time";
		case 1352900226:
			return ":is_sentry";
		case -1834576753:
			return ":use_proximity_alert";
		case -185755803:
			return ":pvp_mission";
		case 1852727176:
			return ":targets_start_visible";
		case -435940167:
			return ":look_at_position";
		case 1200880489:
			return ":duration";
		case 1385823714:
			return ":next_node";
		case -180479720:
			return ":patrol_route_id";
		case 582819194:
			return ":central_location";
		case -1103749002:
			return ":escape_dist";
		case -234450476:
			return ":is_potential_target";
		case -1261869617:
			return ":adds_extra_bounty";
		case -1807236653:
			return ":sentry_aim_dist";
		case 1837403330:
			return ":sentry_alert_dist";
		case -764544644:
			return ":proximity_alert_dist";
		case 79787630:
			return ":blip_search_radius";
		case 465120035:
			return ":blip_offset_radius";
		case -827172890:
			return ":is_law";
		case 219784559:
			return ":central_location_radius";
		case -1893679960:
			return ":central_location_name";
		case -485657984:
			return ":max_search_radius_offset";
		case 1787479687:
			return ":use_search_area";
		case 2092186359:
			return ":use_go_to_area";
		case 458129012:
			return ":locate_all_targets_together";
		case 1533007347:
			return ":defensive_area_id";
		case 861602793:
			return ":rotation";
		case 275738575:
			return ":scale";
		case -1045199329:
			return ":loop_back";
		case -1111171646:
			return ":waypoint_recording";
		case 227384668:
			return ":source_ped_id";
		case 2066595802:
			return ":enable_tracking_paths";
		case 1137547076:
			return ":randomly_select_targets";
		case -1786937793:
			return ":num_targets_to_pick";
		case -492382713:
			return ":dont_spawn_unless_target";
		case -223083781:
			return ":is_dependent";
		case -1770081554:
			return ":clear_hideouts_in_area";
		case -1925214904:
			return ":target_escape_dist";
		case -1584591647:
			return ":start";
		case -865441380:
			return ":end";
		case 566779387:
			return ":is_guard";
		case -235687863:
			return ":place_on_ground";
		case -209788964:
			return ":is_propset";
		case -807337682:
			return ":is_vehicle";
		case -874477517:
			return ":aggro_on_trespass";
		case 2090933413:
			return ":dont_aim_gun_on_disrupt";
		case -852511194:
			return ":has_saddle";
		case 1159597515:
			return ":use_veg_mod";
		case 460674190:
			return ":use_lantern_behavior";
		case 2053368303:
			return ":use_last_known_location";
		case -1882633578:
			return ":last_known_location";
		case 265695803:
			return ":lkl_radius";
		case -2129803861:
			return ":visible_mission_time";
		case 1628979087:
			return ":max_active_tracking_paths";
		case 413379496:
			return ":use_delayed_targeting";
		case 1967834759:
			return ":always_neutral";
		case -1878208438:
			return ":use_long_distance_smoke";
		case -385659440:
			return ":smoke_offset";
		case 2017657609:
			return ":veg_mod_type";
		case 1719410419:
			return ":veg_mod_offset";
		case -1839625215:
			return ":veg_mod_size";
		case -261480992:
			return ":scenario_pos";
		case 1031590257:
			return ":start_off_horse";
		case 1322693839:
			return ":horse_position";
		case -1919876099:
			return ":horse_heading";
		case 2069982589:
			return ":scenario_propset";
		case -1249970703:
			return ":chest_type";
		case -454599147:
			return ":weight";
		case 1955180846:
			return ":num_chests_to_create";
		case -401087351:
			return ":type";
		case 635104585:
			return ":on_peds_remaining";
		case -1031804957:
			return ":delay";
		case -1272790307:
			return ":min_required_players";
		case 735506410:
			return ":max_required_players";
		case -1732010034:
			return ":alerted_behavior";
		case -1711751769:
			return ":move_to_pos";
		case 2092691923:
			return ":alt_move_to_pos";
		case -407841845:
			return ":weapon_to_add_on_move_to_reached";
		case 456924499:
			return ":activator";
		case 307635954:
			return ":ambush_wait_pos";
		case -311657344:
			return ":ambush_wait_heading";
		case -401112943:
			return ":crouch_before_ambush";
		case 1059929194:
			return ":ambush_trigger";
		case 871643656:
			return ":cancel_ambush_trigger";
		case -412523681:
			return ":accuracy";
		case -155963228:
			return ":can_have_treasure_map_loot";
		case 597233769:
			return ":placement_type";
		case 706368435:
			return ":enable_law";
		case -1652447499:
			return ":default_task_allocator";
		case -1296487272:
			return ":id";
		case 1082010721:
			return ":formation";
		case -655039491:
			return ":formation_offset";
		case -1026827677:
			return ":targets_to_add_on_2_starting_players";
		case 686916651:
			return ":targets_to_add_on_3_starting_players";
		case -1765395338:
			return ":targets_to_add_on_4_starting_players";
		case 1237093265:
			return ":targets_to_add_on_5_starting_players";
		case 209905749:
			return ":targets_to_add_on_6_starting_players";
		case 1078011673:
			return ":targets_to_add_on_7_starting_players";
		case 561062234:
			return ":force_flee_on_remaining_targets";
		case 1033186381:
			return ":dependent_target_ped";
		case -436871069:
			return ":health";
		case 1464077990:
			return ":mount_model";
		case -2109843125:
			return ":scene_name";
		case 1158526802:
			return ":radius";
		case 350192982:
			return ":outfit";
		case 1475346163:
			return ":outfit_index";
		case 1590382703:
			return ":loco_motion_type";
		case 1741894372:
			return ":seeing_range";
		case 1309785647:
			return ":hearing_range";
		case -894890997:
			return ":no_draft_horses";
		case -2067326263:
			return ":not_usable_by_player";
		case -1133284398:
			return ":spawn_in_vehicle";
		case 101317385:
			return ":vehicle_to_use";
		case -1463370342:
			return ":vehicle_seat";
		case -513112783:
			return ":starts_anchored";
		case 2102445471:
			return ":use_mount_as_tracking_source_standin";
		case 892963390:
			return ":dont_flee_on_mission_end";
		case 89352665:
			return ":is_dead_ped";
		case -2076494195:
			return ":remove_default_weapons";
		case -1269124321:
			return ":can_be_picked_up_by_player";
		case -1438322653:
			return ":orient_to_ground";
		case 673047879:
			return ":on_object";
		case -1918016700:
			return ":fixed";
		case 258114362:
			return ":pickup_weapon_after_move_to";
		case -619208322:
			return ":pickup_index";
		case 796390761:
			return ":alt_pickup_index";
		case 912480409:
			return ":move_to_heading";
		case -728132736:
			return ":alt_move_to_heading";
		case 1890996209:
			return ":weapon_to_give_ped";
		case -597454543:
			return ":attach_ped";
		case -608357025:
			return ":path_foliage_cost";
		case 1793981541:
			return ":path_deep_snow_cost";
		case -966540255:
			return ":path_climb_cost";
		case -1143761632:
			return ":dismount_on_arrival";
		case 1326664274:
			return ":dismount_delay";
		case 691956863:
			return ":melee_target";
		case -566322512:
			return ":brawler_group";
		case 1903857900:
			return ":width";
		case 1518210740:
			return ":has_discoverable_name";
		case 1160908162:
			return ":use_veg_mod_volume";
		case 1247393678:
			return ":veg_mod_scale";
		case 1446570234:
			return ":veg_mod_rotation";
		case 1855722710:
			return ":crime_config";
		case 764754194:
			return ":set_mission_road_context";
		default:
			break;
	}
	return "";
}

int func_344(var uParam0, int iParam1, char* sParam2)
{
	if (!_datafile_register_query(*uParam0, iParam1, sParam2))
	{
		return 0;
	}
	return 1;
}

bool func_345(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_int(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_346(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_bool(bParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_347(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_vector(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_348(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_float(fParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_349(int iParam0)
{
	if (func_119(&Var2))
	{
		func_345(Var2, -1786937793, &iVar0, 0);
		if (iParam0 >= 2 && func_345(Var2, -1026827677, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 3 && func_345(Var2, 686916651, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 4 && func_345(Var2, -1765395338, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 5 && func_345(Var2, 1237093265, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 6 && func_345(Var2, 209905749, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 7 && func_345(Var2, 1078011673, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
	}
	return func_580(iVar0, 0, 21);
}

int func_350()
{
	iVar5 = 0;
	if (func_581(&Var0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 5)
	{
		return 5;
	}
	return iVar5;
}

int func_351()
{
	iVar5 = 0;
	if (func_582(&Var0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 21)
	{
		return 21;
	}
	return iVar5;
}

void func_352(int iParam0)
{
	iVar19 = -1;
	if (!func_116(iParam0, &Var0))
	{
		return;
	}
	if (!func_583(Var0))
	{
		return;
	}
	Local_557.f_20.f_22[iParam0]->f_16 = 30f;
	Local_557.f_20.f_22[iParam0]->f_17 = 12f;
	Local_557.f_20.f_22[iParam0]->f_18 = 30f;
	if (func_348(Var0, -1807236653, &(Local_557.f_20.f_22[iParam0]->f_16), 0))
	{
		func_177(iParam0, 1024);
	}
	if (func_348(Var0, 1837403330, &(Local_557.f_20.f_22[iParam0]->f_17), 0))
	{
		func_177(iParam0, 2048);
	}
	func_348(Var0, -764544644, &(Local_557.f_20.f_22[iParam0]->f_18), 0);
	func_345(Var0, -180479720, &(Local_557.f_20.f_22[iParam0]->f_13), 0);
	func_345(Var0, 1533007347, &(Local_557.f_20.f_22[iParam0]->f_14), 0);
	func_117(Var0, 95942702, &uVar5, 1);
	func_117(Var0, -486752250, &uVar6, 1);
	func_347(Var0, -81907729, &vVar8, 1);
	func_348(Var0, 724299998, &uVar11, 0);
	func_117(Var0, 256341061, &uVar12, 0);
	func_117(Var0, 251189665, &uVar13, 0);
	func_117(Var0, -1732010034, &uVar14, 0);
	func_117(Var0, 229174115, &uVar15, 0);
	func_347(Var0, 1468810894, &vVar16, 0);
	func_345(Var0, -1906113237, &iVar19, 0);
	if (!func_345(Var0, 110383052, &iVar7, 0))
	{
		iVar7 = -1;
	}
	if (iVar19 < -1 || iVar19 >= Local_557.f_20.f_548)
	{
		iVar19 = -1;
	}
	if (Local_557.f_20.f_22[iParam0]->f_13 < 0 || Local_557.f_20.f_22[iParam0]->f_13 >= 5)
	{
		Local_557.f_20.f_22[iParam0]->f_13 = 0;
	}
	Local_557.f_20.f_22[iParam0] = uVar5;
	Local_557.f_20.f_22[iParam0]->f_3 = { vVar8 };
	Local_557.f_20.f_22[iParam0]->f_9 = uVar11;
	Local_557.f_20.f_22[iParam0]->f_12 = iVar7;
	Local_557.f_20.f_22[iParam0]->f_10 = uVar13;
	Local_557.f_20.f_22[iParam0]->f_11 = uVar14;
	Local_557.f_20.f_22[iParam0]->f_6 = { vVar16 };
	Local_557.f_20.f_22[iParam0]->f_15 = iVar19;
	if ((Local_557.f_20.f_22[iParam0]->f_10 == 918683891 && Local_557.f_20.f_22[iParam0]->f_11 != 2116329739) && func_345(Var0, 691956863, &iVar19, 0))
	{
		Local_557.f_20.f_22[iParam0]->f_15 = iVar19;
	}
	if (Local_557.f_20.f_22[iParam0]->f_10 == 918683891)
	{
		if (!func_346(Var0, -566322512, &bVar20, 0) || bVar20)
		{
			func_177(iParam0, 2097152);
		}
		else
		{
			func_177(iParam0, 4194304);
		}
	}
	iVar21 = func_23(iParam0);
	func_584(iParam0, Var0, iVar21, uVar6, uVar5);
}

int func_353()
{
	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -407275447, 0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

void func_354(int iParam0)
{
	if (func_585(iParam0, &Var0))
	{
		func_347(Var0, -81907729, &vVar5, 1);
		func_348(Var0, 1158526802, &uVar8, 1);
		if (!func_586(Local_557.f_921[iParam0], vVar5, 0f, 0f, 0f, uVar8, uVar8, 50f, 883073064))
		{
			return;
		}
	}
	else
	{
		return;
	}
	iVar14 = func_587(iParam0);
	iVar15 = 0;
	while (iVar15 < iVar14)
	{
		Var9 = { Var0 };
		if (!func_120(&Var9, 2132698637, iVar15, 0))
		{
		}
		else if (!func_345(Var9, -1296487272, &iVar16, 1))
		{
		}
		else if (iVar16 < 0 || iVar16 >= 21)
		{
		}
		else if (func_51(iVar16, 262144))
		{
		}
		else if (&Local_557.f_20.f_22[iVar16] != -1574827255 && &Local_557.f_20.f_22[iVar16] != 391477998)
		{
		}
		else
		{
			func_177(iVar16, 262144);
			_0xe84aac1b22a73e99(&(Local_557.f_921[iParam0]->f_1), iVar16);
		}
		iVar15++;
	}
}

int func_355()
{
	iVar5 = 0;
	if (func_588(&Var0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 18)
	{
		return 18;
	}
	return iVar5;
}

void func_356(int iParam0)
{
	if (!func_459(iParam0, &Var0))
	{
		return;
	}
	if (!func_583(Var0))
	{
		return;
	}
	func_117(Var0, -486752250, Local_557.f_20.f_422[iParam0], 0);
	func_347(Var0, -81907729, &vVar5, 1);
	bVar8 = false;
	if (func_346(Var0, -235687863, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 1);
	}
	if (func_346(Var0, -209788964, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 2);
	}
	if (func_346(Var0, -807337682, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 4);
	}
	if (func_346(Var0, -894890997, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 8);
	}
	if (func_346(Var0, -2067326263, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 16);
	}
	if (func_346(Var0, -513112783, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 64);
	}
	if (func_346(Var0, 89352665, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 128);
	}
	if (func_346(Var0, 1159597515, &bVar8, 0) && bVar8)
	{
		func_117(Var0, 2017657609, &iVar14, 0);
		func_347(Var0, 1719410419, &vVar11, 0);
		if (&Local_557.f_20.f_422[iParam0] == 0)
		{
			func_589(iParam0, 256);
		}
		if (!func_348(Var0, -1839625215, &fVar10, 0))
		{
			fVar10 = 10f;
		}
		if (iVar14 == 0)
		{
			iVar9 = 2;
		}
		else
		{
			iVar9 = func_590(iVar14);
		}
		if (func_346(Var0, 1160908162, &bVar8, 0) && bVar8)
		{
			func_347(Var0, 1446570234, &vVar15, 0);
			func_347(Var0, 1247393678, &vVar18, 0);
			iVar21 = 0;
			while (iVar21 < 4)
			{
				if (_does_volume_exist(&(Local_557.f_987[iVar21])))
				{
				}
				else
				{
					bVar22 = true;
				}
				else
				{
					iVar21++;
				}
			}
			if (!bVar22)
			{
				return;
			}
			StringCopy(&cVar23, "VOL_VEG_MOD_PROP_", 64);
			StringIntConCat(&cVar23, iParam0, 64);
			Local_557.f_987[iVar21] = _create_volume_box_with_custom_name(vVar5 + vVar11, vVar15, vVar18, func_110(&cVar23));
			Local_557.f_20.f_422[iParam0]->f_2 = _0xbd3324281e8b9933(&(Local_557.f_987[iVar21]), iVar9, -1, 0);
		}
		else
		{
			Local_557.f_20.f_422[iParam0]->f_2 = _0xfa50f79257745e74(vVar5 + vVar11, fVar10, iVar9, -1, 0);
		}
	}
}

int func_357()
{
	iVar5 = 0;
	if (func_591(&Var0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

void func_358(int iParam0)
{
	if (!func_108(iParam0, &Var0))
	{
		return;
	}
	if (!func_117(Var0, -401087351, &iVar5, 1))
	{
		return;
	}
	iVar6 = iVar5;
	if (iVar6 == 0)
	{
		return;
	}
	if (iVar6 == 1974833915 && func_109(Var0, -1111171646, &uVar7, 0))
	{
		func_592(iParam0, 4);
		request_waypoint_recording(func_110(&uVar7));
	}
	func_347(Var0, -81907729, &(Local_557.f_20.f_533[iParam0]->f_1), 0);
	func_592(iParam0, 1);
}

int func_359()
{
	iVar5 = 0;
	if (func_593(&Var0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 8)
	{
		return 8;
	}
	return iVar5;
}

void func_360(int iParam0)
{
	iVar20 = func_594(iParam0);
	if (func_595(iParam0, &Var0))
	{
		func_347(Var0, -81907729, &vVar10, 1);
		func_347(Var0, 275738575, &vVar16, 1);
		func_347(Var0, 861602793, &vVar13, 0);
		func_117(Var0, -401087351, &iVar19, 0);
		if (iVar20 > 0)
		{
			Local_557.f_962[iParam0] = _create_volume_aggregate();
			func_596(Local_557.f_962[iParam0], vVar10, vVar13, vVar16, iVar19);
			iVar21 = 0;
			while (iVar21 < iVar20)
			{
				Var5 = { Var0 };
				if (!func_120(&Var5, -962528168, iVar21, 0))
				{
				}
				else
				{
					iVar19 = 0;
					vVar13 = { 0f, 0f, 0f };
					vVar10 = { 0f, 0f, 0f };
					vVar16 = { 0f, 0f, 0f };
					func_347(Var5, -81907729, &vVar10, 1);
					func_347(Var5, 275738575, &vVar16, 1);
					func_347(Var5, 861602793, &vVar13, 0);
					func_117(Var5, -401087351, &iVar19, 0);
					func_596(Local_557.f_962[iParam0], vVar10, vVar13, vVar16, iVar19);
				}
				iVar21++;
			}
		}
		else if (!func_586(Local_557.f_962[iParam0], vVar10, vVar13, vVar16, iVar19))
		{
			return;
		}
	}
}

int func_361()
{
	iVar5 = 0;
	if (func_597(&Var0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

void func_362(int iParam0)
{
	if (func_598(iParam0, &Var0))
	{
		func_347(Var0, -81907729, &vVar5, 1);
		func_347(Var0, 275738575, &vVar11, 1);
		func_347(Var0, 861602793, &vVar8, 0);
		func_346(Var0, 764754194, &bVar14, 0);
	}
	Local_557.f_971[iParam0] = _create_volume_box(vVar5, vVar8, vVar11);
	if (bVar14)
	{
		_0xb03944057fd735ba(&(Local_557.f_971[iParam0]), 4, 0);
	}
}

int func_363()
{
	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -937849669, 0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 2)
	{
		return 2;
	}
	return iVar5;
}

void func_364(int iParam0)
{
	iVar20 = func_599(iParam0);
	if (func_119(&Var0) && func_120(&Var0, -424701201, iParam0, 0))
	{
		func_347(Var0, -81907729, &vVar10, 1);
		func_347(Var0, 275738575, &vVar16, 1);
		func_347(Var0, 861602793, &vVar13, 0);
		func_117(Var0, -401087351, &iVar19, 0);
		if (iVar20 > 0)
		{
			Local_557.f_975[iParam0] = _create_volume_aggregate();
			func_596(Local_557.f_975[iParam0], vVar10, vVar13, vVar16, iVar19);
			iVar21 = 0;
			while (iVar21 < iVar20)
			{
				Var5 = { Var0 };
				if (!func_120(&Var5, -962528168, iVar21, 0))
				{
				}
				else
				{
					iVar19 = 0;
					vVar13 = { 0f, 0f, 0f };
					vVar10 = { 0f, 0f, 0f };
					vVar16 = { 0f, 0f, 0f };
					func_347(Var5, -81907729, &vVar10, 1);
					func_347(Var5, 275738575, &vVar16, 1);
					func_347(Var5, 861602793, &vVar13, 0);
					func_117(Var5, -401087351, &iVar19, 0);
					func_596(Local_557.f_975[iParam0], vVar10, vVar13, vVar16, iVar19);
				}
				iVar21++;
			}
		}
		else if (!func_586(Local_557.f_975[iParam0], vVar10, vVar13, vVar16, iVar19))
		{
			return;
		}
	}
}

int func_365()
{
	iVar5 = 0;
	if (func_600(&Var0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

void func_366(int iParam0)
{
	if (func_271(iParam0, &Var0))
	{
		func_345(Var0, 227384668, Local_557.f_20.f_495[iParam0], 1);
	}
}

int func_367()
{
	iVar5 = 0;
	if (func_601(&Var0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 4)
	{
		return 4;
	}
	return iVar5;
}

void func_368(int iParam0)
{
	*Local_557.f_20.f_508[iParam0] = { func_602(iParam0) };
	Local_557.f_20.f_508[iParam0]->f_3 = { func_603(iParam0) };
}

int func_369()
{
	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, 2071017826, 0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

void func_370(int iParam0)
{
	if (!func_119(&Var0) || !func_120(&Var0, 1606032220, iParam0, 0))
	{
		return;
	}
	func_347(Var0, -81907729, &vVar10, 1);
	func_347(Var0, 275738575, &vVar16, 1);
	func_347(Var0, 861602793, &vVar13, 0);
	func_117(Var0, -401087351, &iVar19, 0);
	iVar20 = func_604(iParam0);
	if (iVar20 > 0)
	{
		Local_557.f_980[iParam0] = _create_volume_aggregate();
		func_596(Local_557.f_980[iParam0], vVar10, vVar13, vVar16, iVar19);
		iVar21 = 0;
		while (iVar21 < iVar20)
		{
			Var5 = { Var0 };
			if (!func_120(&Var5, -962528168, iVar21, 0))
			{
			}
			else
			{
				iVar19 = 0;
				vVar13 = { 0f, 0f, 0f };
				vVar10 = { 0f, 0f, 0f };
				vVar16 = { 0f, 0f, 0f };
				func_347(Var5, -81907729, &vVar10, 1);
				func_347(Var5, 275738575, &vVar16, 1);
				func_347(Var5, 861602793, &vVar13, 0);
				func_117(Var5, -401087351, &iVar19, 0);
				func_596(Local_557.f_980[iParam0], vVar10, vVar13, vVar16, iVar19);
			}
			iVar21++;
		}
	}
	else if (!func_586(Local_557.f_980[iParam0], vVar10, vVar13, vVar16, iVar19))
	{
		return;
	}
}

int func_371()
{
	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, 386308088, 0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	return iVar5;
}

void func_372(int iParam0)
{
	if (!func_119(&Var0) || !func_120(&Var0, -375509478, iParam0, 0))
	{
		return;
	}
	func_347(Var0, -81907729, &vVar10, 1);
	func_347(Var0, 275738575, &vVar16, 1);
	func_347(Var0, 861602793, &vVar13, 0);
	func_117(Var0, -401087351, &iVar19, 0);
	iVar20 = func_605(iParam0);
	if (iVar20 > 0)
	{
		Local_557.f_978[iParam0] = _create_volume_aggregate();
		func_596(Local_557.f_978[iParam0], vVar10, vVar13, vVar16, iVar19);
		iVar21 = 0;
		while (iVar21 < iVar20)
		{
			Var5 = { Var0 };
			if (!func_120(&Var5, -962528168, iVar21, 0))
			{
			}
			else
			{
				iVar19 = 0;
				vVar13 = { 0f, 0f, 0f };
				vVar10 = { 0f, 0f, 0f };
				vVar16 = { 0f, 0f, 0f };
				func_347(Var5, -81907729, &vVar10, 1);
				func_347(Var5, 275738575, &vVar16, 1);
				func_347(Var5, 861602793, &vVar13, 0);
				func_117(Var5, -401087351, &iVar19, 0);
				func_596(Local_557.f_978[iParam0], vVar10, vVar13, vVar16, iVar19);
			}
			iVar21++;
		}
	}
	else if (!func_586(Local_557.f_978[iParam0], vVar10, vVar13, vVar16, iVar19))
	{
		return;
	}
}

int func_373()
{
	if (func_119(&Var0) && func_120(&Var0, 749370907, 0, 0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

int func_374(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_375(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_2 = 0;
	uParam0->f_1 = 0;
}

int func_376(int iParam0)
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

bool func_377(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_378(int iParam0, var uParam1)
{
	if (!func_459(iParam0, &Var0))
	{
		return false;
	}
	if (!func_347(Var0, -81907729, uParam1, 1))
	{
		return false;
	}
	func_346(Var0, -1878208438, &bVar5, 0);
	if (!bVar5)
	{
		return false;
	}
	func_347(Var0, -385659440, &vVar6, 0);
	*uParam1 = { *uParam1 + vVar6 };
	return true;
}

bool func_379(int iParam0, vector3 vParam1)
{
	if (does_particle_fx_looped_exist(Local_557.f_20.f_422[iParam0]->f_3))
	{
		return true;
	}
	request_named_ptfx_asset(get_hash_key(func_126()));
	if (!has_named_ptfx_asset_loaded(get_hash_key(func_126())))
	{
		return false;
	}
	use_particle_fx_asset(func_126());
	Local_557.f_20.f_422[iParam0]->f_3 = start_particle_fx_looped_at_coord(func_606(), vParam1, 0f, 0f, 0f, 1f, false, true, false, false);
	return true;
}

int func_380()
{
	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, 723480330, 0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 1)
	{
		return 1;
	}
	return iVar5;
}

bool func_381(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (!func_119(&Var0) || !func_120(&Var0, -1859092546, iParam0, 0))
	{
		return false;
	}
	if (!func_109(Var0, -2109843125, uParam3, 1))
	{
		return false;
	}
	if (func_347(Var0, -81907729, uParam1, 0))
	{
		*uParam4 = 1;
		func_347(Var0, 861602793, uParam2, 0);
	}
	return true;
}

bool func_382(int iParam0, vector3 vParam1, vector3 vParam4, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, bool bParam15)
{
	sVar0 = func_110(&uParam7);
	if (is_string_null_or_empty(sVar0))
	{
		return true;
	}
	if ((_does_anim_scene_exist(&(Local_557.f_950[iParam0])) && _is_anim_scene_loaded(&(Local_557.f_950[iParam0]), false, false)) && _is_anim_scene_started(&(Local_557.f_950[iParam0]), false))
	{
		return true;
	}
	if (!_does_anim_scene_exist(&(Local_557.f_950[iParam0])))
	{
		Local_557.f_950[iParam0] = _create_anim_scene(sVar0, 1, 0, false, false);
		if (bParam15)
		{
			set_anim_scene_origin(&(Local_557.f_950[iParam0]), vParam1, vParam4, 2);
		}
		return false;
	}
	if (_is_anim_scene_loaded(&(Local_557.f_950[iParam0]), false, false))
	{
		start_anim_scene(&(Local_557.f_950[iParam0]));
	}
	else if (_is_anim_scene_loading(&(Local_557.f_950[iParam0]), true))
	{
	}
	else
	{
		load_anim_scene(&(Local_557.f_950[iParam0]));
	}
	return false;
}

void func_383(int iParam0)
{
	StringCopy(&cVar1, func_127(iParam0), 32);
	iVar5 = func_607(iParam0);
	bVar6 = func_608(iParam0);
	open_patrol_route(&cVar1);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		func_609(iParam0, iVar0, &Var7);
		add_patrol_route_node(iVar0, func_610(Var7.f_3), Var7, Var7.f_4, Var7.f_7, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		if (bVar6 && iVar0 >= (iVar5 - 1))
		{
		}
		else
		{
			func_609(iParam0, iVar0, &Var7);
			add_patrol_route_link(iVar0, Var7.f_8);
		}
		iVar0++;
	}
	close_patrol_route();
	create_patrol_route();
}

void func_384()
{
	Var2.f_1 = 11;
	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = Local_557.f_7.f_12;
			if ((&Local_15.f_234[iVar1] != 255 && func_163(iVar1)) && !_0x8f4f050054005c27(&(Local_557.f_1000), iVar1))
			{
				if (((func_43(4) && _network_is_player_index_valid(Local_15.f_234[iVar1]->f_1)) && network_is_player_connected(Local_15.f_234[iVar1]->f_1)) && _0x3f59fe6f37869576(Local_15.f_234[iVar1]->f_1, player_id()))
				{
					func_389(&Var2, -1029285341, func_388(255), 1, _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())));
				}
				_0xe84aac1b22a73e99(&(Local_557.f_1000), iVar1);
			}
			func_268(&(Local_557.f_7.f_12), 7);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = Local_557.f_7.f_12;
			if (((Local_15.f_2[iVar1]->f_2 == 1583594396 && func_176(iVar1, 67108864)) && func_176(iVar1, 134217728)) && !_0x8f4f050054005c27(&(Local_557.f_998), iVar1))
			{
				if (((func_43(4) && _network_is_player_index_valid(Local_15.f_2[iVar1]->f_5)) && network_is_player_connected(Local_15.f_2[iVar1]->f_5)) && _0x3f59fe6f37869576(Local_15.f_2[iVar1]->f_5, player_id()))
				{
					func_389(&Var2, -1029285341, func_388(255), 1, _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())));
				}
				_0xe84aac1b22a73e99(&(Local_557.f_998), iVar1);
			}
			func_268(&(Local_557.f_7.f_12), 21);
			iVar0++;
		}
	}
}

bool func_385()
{
	if (func_59(131072))
	{
		return false;
	}
	if (func_59(8388608))
	{
		return false;
	}
	if (func_47(Local_300[Local_557.f_1008], 16))
	{
		if (func_93())
		{
			return false;
		}
		if (func_445(Local_557.f_1004) > 2000)
		{
			return false;
		}
	}
	return true;
}

bool func_386()
{
	return func_45();
}

int func_387()
{
	if (func_47(Local_300[Local_557.f_1008], 65536))
	{
		return 2;
	}
	switch (func_148())
	{
		case 2:
			if (!func_45())
			{
				if (Local_15.f_275 == 0)
				{
					return 1;
				}
				if (Local_15.f_275 == Local_557.f_20.f_549)
				{
					return 2;
				}
			}
			else
			{
				if (!func_59(4194304))
				{
					return 2;
				}
				if (Local_15.f_275 == Local_15.f_276)
				{
					return 2;
				}
				if (Local_15.f_275 == 0)
				{
					return 1;
				}
			}
			break;
		case 3:
			if (Local_15.f_275 == 0)
			{
				return 2;
			}
			if (Local_15.f_275 == Local_557.f_20.f_549)
			{
				return 1;
			}
			break;
		case 1:
		case 4:
			if (Local_15.f_275 > 0)
			{
				return 1;
			}
			return 2;
	}
	return 0;
}

int func_388(int iParam0)
{
	iVar0 = func_611(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_240(iVar0);
}

void func_389(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	func_612(iParam0, 0, iParam1);
	func_613(iParam0, &uVar0, 0, bParam3, iParam4);
	func_614(iParam0, 0, iParam2);
	func_615(532584148, iParam0, 0, 255, 0, 1);
}

int func_390()
{
	if (!func_59(8))
	{
		return 0;
	}
	return get_time_difference(Local_15.f_272, get_network_time_accurate());
}

void func_391(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, struct<2> Param13)
{
	if (iParam10 == 0)
	{
		return;
	}
	fVar0 = func_616(((to_float(iParam12) / 1000f) / 60f), 0.5f, 30f);
	func_617(iParam2, &iVar1, &bVar2, 0, fVar0);
	func_618(iParam2, &bVar2, 0, iParam4, iParam10, iParam11, bParam7);
	func_619(iParam2, 0, iParam5);
	func_613(iParam2, &bVar2, 0, bParam8, iParam9);
	func_620(iParam2, 0, Param13);
	func_614(iParam2, 0, iParam6);
	func_621(1149539403, uParam0, iParam2, 0, 255, 0, 1);
	func_617(iParam3, &iVar1, &bVar2, 1, fVar0);
	func_613(iParam3, &bVar2, 1, bParam8, iParam9);
	func_618(iParam3, &bVar2, 1, iParam4, iParam10, iParam11, bParam7);
	func_614(iParam3, 1, iParam6);
	if (!bVar2 && iVar1 != 0)
	{
		func_621(iVar1, uParam1, iParam3, 0, 255, 0, 0);
	}
}

void func_392(int iParam0)
{
	func_622(iParam0);
	if (Local_15.f_2[iParam0]->f_2 == 0)
	{
		return;
	}
	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		func_623(iParam0, 0);
		return;
	}
	func_624(iParam0, iVar0);
	func_625(iParam0, iVar0);
	func_626(iParam0, iVar0);
	func_627(iParam0);
	func_628(iParam0, iVar0);
	func_629(iParam0, iVar0);
	func_630(iParam0, iVar0);
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	func_631(iParam0, iVar0);
	switch (Local_15.f_2[iParam0]->f_2)
	{
		case -1574827255:
			func_632(iParam0);
			break;
		case -1360694003:
			func_633(iParam0);
			break;
		case 1824637041:
			func_634(iParam0);
			break;
		case 516423162:
			func_635(iParam0);
			break;
		default:
			return;
	}
	func_636(iParam0, iVar0);
}

void func_393(int iParam0)
{
	if (Local_15.f_2[iParam0]->f_2 == 0 || Local_15.f_2[iParam0]->f_2 == 1583594396)
	{
		return;
	}
	if (Local_15.f_2[iParam0]->f_4 != 16 && Local_15.f_2[iParam0]->f_4 != 17)
	{
		return;
	}
	if (!network_does_network_id_exist(&(Local_15.f_2[iParam0])) || !network_has_control_of_network_id(&(Local_15.f_2[iParam0])))
	{
		return;
	}
	if (!func_52(iParam0, &iVar2, 1, 0))
	{
		return;
	}
	bVar4 = func_637(iParam0, 60000);
	if (func_176(iParam0, 1048576))
	{
		fVar0 = 1.5f;
		if (bVar4)
		{
			fVar1 = 1.25f;
		}
		else
		{
			fVar1 = 1.5f;
		}
	}
	else if (func_176(iParam0, 2097152))
	{
		fVar0 = 2f;
		if (bVar4)
		{
			fVar1 = 1.501f;
		}
		else
		{
			fVar1 = 1.75f;
		}
	}
	else if (func_176(iParam0, 4194304))
	{
		fVar0 = 2f;
		if (bVar4)
		{
			fVar1 = 1.75f;
		}
		else
		{
			fVar1 = 2f;
		}
	}
	else
	{
		fVar0 = 3f;
		if (bVar4)
		{
			fVar1 = 2.5f;
		}
		else
		{
			fVar1 = 3f;
		}
	}
	if (func_176(iParam0, 8388608))
	{
		fVar1 = 1f;
	}
	set_ped_max_move_blend_ratio(iVar2, fVar0);
	if (is_ped_on_mount(iVar2))
	{
		iVar3 = get_mount(iVar2);
		if (!is_entity_dead(iVar3))
		{
			set_ped_max_move_blend_ratio(iVar3, fVar1);
		}
	}
}

void func_394(int iParam0)
{
	if (!network_does_network_id_exist(&(Local_15.f_198[iParam0])))
	{
		return;
	}
	if (func_50(iParam0, 4))
	{
		iVar0 = net_to_veh(&(Local_15.f_198[iParam0]));
		if (!does_entity_exist(iVar0))
		{
			return;
		}
		if (func_50(iParam0, 16) && !func_50(iParam0, 32))
		{
			set_vehicle_is_considered_by_player(iVar0, false);
			func_589(iParam0, 32);
		}
	}
}

void func_395(int iParam0)
{
	if (!func_107(iParam0, 1) || func_107(iParam0, 2))
	{
		return;
	}
	if (!func_452(Local_557.f_20.f_533[iParam0]->f_1) && vdist(Global_35, Local_557.f_20.f_533[iParam0]->f_1) > 150f)
	{
		return;
	}
	if (!func_108(iParam0, &Var0))
	{
		return;
	}
	if (!func_117(Var0, -401087351, &iVar5, 0))
	{
		return;
	}
	iVar6 = iVar5;
	if (iVar6 == -1993313767)
	{
		if (!func_348(Var0, 1903857900, &fVar7, 0))
		{
			fVar7 = 0.3f;
		}
		vVar8 = { Local_557.f_20.f_533[iParam0]->f_1 };
		vVar8.f_2 = (vVar8.z + 1f);
		get_ground_z_for_3d_coord(vVar8, &(vVar8.f_2), false);
		_add_blood_pool_2(vVar8, 0.5f, fVar7, get_random_float_in_range(0.1f, 0.6f), true, NaNf, false);
	}
	else if (iVar6 == 1974833915)
	{
		if (!func_107(iParam0, 4))
		{
			return;
		}
		if (!func_109(Var0, -1111171646, &uVar11, 0))
		{
			return;
		}
		if (!func_107(iParam0, 8))
		{
			if (!get_is_waypoint_recording_loaded(func_110(&uVar11)))
			{
				return;
			}
			func_592(iParam0, 8);
		}
		if (!func_348(Var0, 1903857900, &fVar7, 0))
		{
			fVar7 = 0.3f;
		}
		_0xb9c92616929cc25d(func_110(&uVar11), fVar7);
	}
	func_592(iParam0, 2);
}

bool func_396(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = int_to_participantindex(iParam0);
	if (!network_is_participant_active(iVar0))
	{
		return false;
	}
	iVar1 = network_get_player_index(iVar0);
	if (bParam2 && !network_is_player_active(iVar1))
	{
		return false;
	}
	if (bParam1 && is_player_dead(iVar1))
	{
		return false;
	}
	return true;
}

int func_397(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = func_638();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 623901053;
	}
	return func_639(get_unique_int_for_player(&(Global_1296859->f_154[iParam0])));
}

bool func_398(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (!network_is_player_a_participant(iParam0))
	{
		return false;
	}
	iVar0 = network_get_participant_index(iParam0);
	if (!func_396(iVar0, 0, 1))
	{
		return false;
	}
	if (func_45())
	{
		if ((!func_47(Local_300[iVar0], 4) && !func_47(Local_300[iVar0], 8192)) && !func_47(Local_300[iVar0], 131072))
		{
			return false;
		}
	}
	else if (!func_47(Local_300[iVar0], 4) && !func_47(Local_300[iVar0], 64))
	{
		return false;
	}
	return true;
}

void func_399()
{
	if (!func_43(4) || !func_418(1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!_0x72b2e00c9bac6789(&(Local_557.f_961), iVar0))
		{
		}
		else
		{
			iVar1 = int_to_playerindex(iVar0);
			if (!network_is_player_active(iVar1))
			{
			}
			else if (_0x81fb74c83c2ed69f(iVar1))
			{
			}
			else
			{
				func_640(iVar1);
			}
		}
		iVar0++;
	}
}

bool func_400()
{
	if (func_641(255) && !func_642(255))
	{
		return false;
	}
	return true;
}

bool func_401()
{
	iVar0 = player_id();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar3) || !_0x3f59fe6f37869576(iVar0, iVar3))
		{
		}
		else
		{
			if (!network_is_player_a_participant(iVar3))
			{
				return false;
			}
			iVar2 = network_get_participant_index(iVar3);
			if (!func_47(Local_300[iVar2], 1048576))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

bool func_402()
{
	return (func_643() != 0 || func_644(1));
}

bool func_403()
{
	return func_645() != 0;
}

int func_404(int iParam0)
{
	if (func_403())
	{
		return 0;
	}
	if (!func_402())
	{
		return 0;
	}
	if (func_646())
	{
		func_647(2);
	}
	else
	{
		func_647(1);
	}
	func_648(iParam0);
	return 1;
}

int func_405()
{
	if (!func_59(8))
	{
		return Local_557.f_20.f_2;
	}
	if (func_59(134217728))
	{
		iVar0 = Local_15.f_273;
	}
	else
	{
		iVar0 = Local_15.f_272;
	}
	if (func_59(134217728))
	{
		iVar1 = Local_557.f_20.f_4;
	}
	else
	{
		iVar1 = Local_557.f_20.f_2;
	}
	iVar1 = (iVar1 - get_time_difference(iVar0, get_network_time_accurate()));
	iVar1 = func_580(iVar1, 0, Local_557.f_20.f_2);
	return iVar1;
}

bool func_406(int iParam0, int iParam1)
{
	iVar0 = (iParam1 / 2);
	iVar1 = (iParam1 / 8);
	return (iParam0 <= iVar0 && iParam0 >= iVar1);
}

void func_407(struct<2> Param0)
{
	if (func_649())
	{
		if ((get_game_timer() - func_650()) < 75000)
		{
			return;
		}
	}
	if (!func_73(Param0))
	{
		return;
	}
	iVar1 = func_507(Param0);
	if (!func_508(iVar1))
	{
		return;
	}
	iVar0 = func_509(iVar1);
	if (!func_510(iVar0))
	{
		return;
	}
	iVar2 = func_511(iVar1);
	func_651(iVar2, iVar0, Param0);
	func_553(get_game_timer());
	func_554(1);
}

void func_408()
{
	Global_1139381->f_5560.f_22 = get_frame_count();
}

bool func_409(int iParam0)
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
	iVar0 = network_get_participant_index(iParam0);
	switch (func_148())
	{
		case 1:
		case 4:
			if (!func_47(Local_300[iVar0], 4))
			{
				return false;
			}
			return true;
		case 2:
			if (!func_47(Local_300[iVar0], 8192) && !func_47(Local_300[iVar0], 131072))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

void func_410(int iParam0)
{
	_0x31010318ba9897ac(&(Global_1071686->f_28345), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28347), iParam0);
	if (!func_122(iParam0))
	{
		func_281(iParam0, 5, 1, 1, 0, 0);
	}
}

float func_411(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_412(float fParam0)
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0]->f_2 != -1574827255)
		{
		}
		else if (!func_431(iVar0, Local_300[Local_557.f_1008]) && !func_176(iVar0, 1))
		{
		}
		else if (!func_52(iVar0, &iVar1, 1, 0))
		{
		}
		else if (vdist(Global_35, get_entity_coords(iVar1, false, false)) > fParam0)
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

void func_413(var uParam0, int iParam1)
{
	func_139(&(uParam0->f_1), iParam1);
}

bool func_414(int iParam0)
{
	return get_ped_config_flag(iParam0, 161, false);
}

void func_415()
{
	func_652(2);
}

void func_416(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

bool func_417(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_653(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_638())
	{
		return func_653(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_653(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_418(bool bParam0)
{
	if (bParam0)
	{
		return func_43(16384);
	}
	if (func_77())
	{
		return false;
	}
	Var0 = { func_654() };
	if (!func_73(Var0))
	{
		return false;
	}
	if (!func_74(Local_557.f_2, Var0))
	{
		return false;
	}
	return true;
}

void func_419(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			func_189(Local_300[Local_557.f_1008], 8192);
			func_655(131072);
			Local_557.f_1006 = iParam1;
			break;
		case 2:
			func_189(Local_300[Local_557.f_1008], 4);
			if (func_45())
			{
				func_655(131072);
			}
			else
			{
				func_408();
			}
			func_413(Local_300[Local_557.f_1008], 65536);
			func_656(16);
			break;
		case 3:
			func_189(Local_300[Local_557.f_1008], 64);
			break;
		case 4:
			func_189(Local_300[Local_557.f_1008], 131072);
			break;
	}
	bVar0 = func_206();
	func_657(Local_557.f_1);
	func_658(Local_557.f_1, 1, !bVar0, 0);
	func_659(6);
	func_125(4);
	func_296(-1256206172, 0);
	func_91();
}

bool func_420(int iParam0, float fParam1)
{
	if (Local_15.f_2[iParam0]->f_2 != -1574827255)
	{
		return false;
	}
	if (!func_52(iParam0, &iVar0, 1, 1))
	{
		return false;
	}
	if (func_447())
	{
		return false;
	}
	if (func_661(iVar0, func_660(player_id()), 1) > fParam1)
	{
		return false;
	}
	return true;
}

void func_421()
{
	if (!func_45())
	{
		return;
	}
	if (func_43(256))
	{
		return;
	}
	if (_0xd6f6acf4392187fb(Local_15.f_284) && _0x0f99f6436528a089(Local_15.f_284))
	{
		Local_557.f_584.f_68 = { func_663(func_662(Local_15.f_284, 0, 0)) };
	}
	iVar0 = Local_15.f_276;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (_network_is_player_index_valid(&(Local_15.f_234[iVar1])) && network_is_player_active(&(Local_15.f_234[iVar1])))
		{
			*Local_557.f_584.f_39[iVar1] = { func_664(get_player_name(&(Local_15.f_234[iVar1]))) };
		}
		iVar1++;
	}
	func_125(256);
}

void func_422()
{
	if (!func_43(4) || !func_418(1))
	{
		return;
	}
	iVar2 = func_665(&iVar0, &iVar1);
	func_666(iVar2, iVar0, iVar1);
}

void func_423()
{
	if (func_667(&bVar0))
	{
		if (bVar0)
		{
			func_668();
			func_669();
		}
		func_672(&(Local_557.f_584.f_76), &(Local_557.f_584.f_91), func_670(), 0, 30000, 0, func_671(), 0, 0, 0, 0);
	}
	else
	{
		func_132();
	}
}

void func_424()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_673(iVar0);
		iVar0++;
	}
	if (func_45())
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			func_674(iVar1);
			iVar1++;
		}
		if (func_47(Local_300[Local_557.f_1008], 8192))
		{
			func_675();
		}
	}
}

void func_425()
{
	if (func_676())
	{
		func_677();
	}
	else
	{
		func_285(&(Local_557.f_584.f_23));
	}
	if (func_678())
	{
		func_679();
	}
	else if (func_680())
	{
		func_681();
	}
	else
	{
		func_285(&(Local_557.f_584.f_22));
	}
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_551)
	{
		if (func_682(iVar0))
		{
			func_683(iVar0);
		}
		else
		{
			func_285(Local_557.f_584.f_24[iVar0]);
		}
		iVar0++;
	}
	func_684();
}

void func_426()
{
	if (!func_418(1) && !func_47(Local_300[Local_557.f_1008], 65536))
	{
		return;
	}
	bVar0 = Local_557.f_20.f_549 <= true;
	if (func_45())
	{
		bVar0 = Local_15.f_276 <= true;
	}
	if (func_685())
	{
		func_687(func_686(bVar0));
		func_185(32);
	}
	else if (func_688())
	{
		func_689(func_387());
		func_185(16);
	}
}

void func_427()
{
	if (((!func_418(1) || !func_690(32)) || func_690(16)) || !func_43(1))
	{
		func_134();
		return;
	}
	if (func_691())
	{
		func_692(14, -1);
	}
	else if (func_693())
	{
		if (func_45())
		{
			func_692(7, -1);
		}
		else if (Local_557.f_20 == 1657045547)
		{
			if (func_694())
			{
				func_692(7, -1);
			}
			else
			{
				func_692(8, -1);
			}
		}
		else if (Local_15.f_275 > 1)
		{
			func_692(7, -1);
		}
		else
		{
			func_692(8, -1);
		}
	}
	else if (func_695())
	{
		if (Local_15.f_275 > 1)
		{
			func_692(1, -1);
		}
		else
		{
			func_692(2, -1);
		}
	}
	else if (func_696())
	{
		func_692(5, -1);
	}
	else if (func_697())
	{
		func_692(11, -1);
	}
	else if (func_698())
	{
		if (func_258() == 1862763509 || Local_15.f_275 == 1)
		{
			func_692(13, -1);
		}
		else
		{
			func_692(12, -1);
		}
	}
	else
	{
		func_134();
	}
}

void func_428(int iParam0)
{
	if (!_0x80e9c316ef84dd81(&(Local_557.f_921[iParam0]->f_1)))
	{
		return;
	}
	if (!_does_volume_exist(&(Local_557.f_921[iParam0])))
	{
		func_699(iParam0);
		return;
	}
	if ((((((func_700(Local_557.f_921[iParam0]->f_3, 1) && !func_700(Local_557.f_921[iParam0]->f_3, 2)) && func_585(iParam0, &Var2)) && func_345(Var2, -597454543, &iVar1, 0)) && iVar1 >= 0) && iVar1 < 21) && func_52(iVar1, &uVar0, 1, 0))
	{
		_0x7c00cfc48a782dc0(&(Local_557.f_921[iParam0]), uVar0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 0);
		func_701(&(Local_557.f_921[iParam0]->f_3), 2);
		func_375(&Var2);
	}
	vVar7 = { _0xf70f00013a62f866(&(Local_557.f_921[iParam0])) };
	vVar13 = { _0x3e2a25b2416dd67e(&(Local_557.f_921[iParam0])) };
	fVar16 = vVar13.x;
	if (func_411(Global_35, vVar7) < fVar16)
	{
		func_699(iParam0);
		return;
	}
	iVar18 = 0;
	while (iVar18 < 21)
	{
		if (!_0x8f4f050054005c27(&(Local_557.f_921[iParam0]->f_1), iVar18))
		{
		}
		else if (func_52(iVar18, &iVar17, 1, 0))
		{
			vVar10 = { get_entity_coords(iVar17, false, false) };
			if ((((func_411(vVar10, vVar7) < fVar16 && !func_176(iVar18, 1)) && Local_15.f_2[iVar18]->f_2 != 1583594396) && Local_15.f_2[iVar18]->f_2 != 0) && !func_431(iVar18, Local_300[Local_557.f_1008]))
			{
			}
			else
			{
				if ((((func_700(Local_557.f_921[iParam0]->f_3, 2) && func_585(iParam0, &Var2)) && func_345(Var2, -597454543, &iVar1, 0)) && iVar1 == iVar18) && func_52(iVar1, &uVar0, 0, 1))
				{
					_0x19c975b81be53c28(&(Local_557.f_921[iParam0]), uVar0);
					func_702(&(Local_557.f_921[iParam0]->f_3), 2);
				}
				func_295(iVar18, 262144);
				_0xb909149f2bb5f6da(&(Local_557.f_921[iParam0]->f_1), iVar18);
			}
			iVar18++;
			if (!_0x80e9c316ef84dd81(&(Local_557.f_921[iParam0]->f_1)))
			{
				func_699(iParam0);
			}
		}
	}
}

bool func_429(int iParam0)
{
	if (Local_15.f_2[iParam0]->f_2 != -1574827255 && func_176(iParam0, 4096))
	{
		return false;
	}
	return true;
}

void func_430(int iParam0, var uParam1)
{
	func_313(iParam0, &iVar0, &iVar1);
	if (is_bit_set(&(uParam1->f_2[iVar0]), iVar1))
	{
		return;
	}
	set_bit(uParam1->f_2[iVar0], iVar1);
	func_285(Local_557.f_584[iParam0]);
}

bool func_431(int iParam0, var uParam1)
{
	func_313(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(uParam1->f_2[iVar0]), iVar1);
}

bool func_432(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_661(iParam0, Global_35, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0x5102307ce88798eb(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_433(var uParam0)
{
	if (!func_47(uParam0, 8192))
	{
		return false;
	}
	if (func_47(uParam0, 16384))
	{
		return false;
	}
	return true;
}

bool func_434()
{
	return func_703(&Global_1940258, 8192);
}

void func_435(bool bParam0, bool bParam1)
{
	if (func_566(255) == 4)
	{
		return;
	}
	if (func_452(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_143(0);
	}
	else
	{
		if (bParam1)
		{
			func_704(0, 0, 0, 1);
		}
		func_141(0);
		func_705(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_706(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_707(Global_1102219->f_3849, 36);
	func_708(Global_1102219->f_3888, 36);
}

bool func_436(var uParam0, var uParam1)
{
	if (!func_47(uParam0, 4))
	{
		return false;
	}
	if (func_45())
	{
		return false;
	}
	fVar1 = 150f;
	iVar2 = 0;
	while (iVar2 < 21)
	{
		if (Local_15.f_2[iVar2]->f_2 != -1574827255)
		{
		}
		else if (Local_557.f_20 == 1657045547 && !func_431(iVar2, Local_300[Local_557.f_1008]))
		{
		}
		else if (!network_does_network_id_exist(&(Local_15.f_2[iVar2])))
		{
		}
		else
		{
			iVar3 = net_to_ped(&(Local_15.f_2[iVar2]));
			fVar0 = vdist(Global_35, get_entity_coords(iVar3, false, false));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				*uParam1 = iVar3;
			}
		}
		iVar2++;
	}
	if (fVar1 == 150f)
	{
		return false;
	}
	return true;
}

void func_437(bool bParam0)
{
	if (bParam0)
	{
		if (func_43(2))
		{
			return;
		}
		if (func_438(255))
		{
			return;
		}
		func_136(1);
		func_125(2);
	}
	else
	{
		if (!func_43(2))
		{
			return;
		}
		func_136(0);
		func_44(2);
	}
}

bool func_438(int iParam0)
{
	return func_417(49, iParam0);
}

bool func_439(int iParam0)
{
	return func_417(48, iParam0);
}

void func_440(var uParam0, var uParam1)
{
	if (!func_43(2))
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	fVar2 = 150f;
	iVar3 = 0;
	while (iVar3 < 21)
	{
		if (Local_15.f_2[iVar3]->f_2 != -1574827255)
		{
		}
		else if (Local_557.f_20 == 1657045547 && !func_431(iVar3, Local_300[Local_557.f_1008]))
		{
		}
		else if (!network_does_network_id_exist(&(Local_15.f_2[iVar3])))
		{
		}
		else
		{
			iVar4 = net_to_ped(&(Local_15.f_2[iVar3]));
			fVar1 = vdist(Global_35, get_entity_coords(iVar4, false, false));
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar0 = iVar4;
			}
		}
		iVar3++;
	}
	if (fVar2 == 150f)
	{
		return;
	}
	fVar5 = 95f;
	fVar6 = 150f;
	vVar7 = { get_entity_coords(iVar0, false, false) };
	if (is_collision_marked_outside(vVar7))
	{
		func_709(&vVar7, 200f);
	}
	else
	{
		func_709(&vVar7, 1088421888);
	}
	uParam0->f_17.f_6 = { vVar7 };
	uParam0->f_17 = { fVar6, fVar6, 25f };
	uParam0->f_17.f_9 = -432403087;
	uParam0->f_6.f_6 = { vVar7 };
	uParam0->f_6 = { fVar5, fVar5, 25f };
	uParam0->f_6.f_9 = -432403087;
	uParam0->f_4 = func_710(iVar0);
	uParam0->f_5 = 3;
	uParam1->f_6 = { vVar7 };
	uParam1->f_5 = 1;
	*uParam1 = get_random_float_in_range(-180f, 180f);
	iVar10 = func_711();
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 < iVar10)
		{
			if (!func_712(iVar11, &vVar12))
			{
			}
			else if (func_452(vVar12))
			{
			}
			else
			{
				_0xfd1ac0b3858f224c(vVar12, func_713(vVar12, vVar7));
			}
			iVar11++;
		}
	}
	iVar15 = func_363();
	if (iVar15 > 0)
	{
		iVar16 = 0;
		while (iVar16 < iVar15)
		{
			if (!_does_volume_exist(&(Local_557.f_975[iVar16])))
			{
			}
			else
			{
				_0x405ddefb1f531b18(&(Local_557.f_975[iVar16]), 0, 0, 0);
			}
			iVar16++;
		}
	}
}

int func_441(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_439(255))
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
		func_705(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = { Param0 };
		func_706(&(Global_1102219->f_3888));
		Global_1102219->f_3888 = { Param30 };
		Global_1102219->f_3919 = iParam39;
		Global_1102219->f_3920 = iParam40;
		Global_1102219->f_3921 = iParam41;
		func_707(Global_1102219->f_3849, 36);
		func_708(Global_1102219->f_3888, 36);
		func_143(48);
		return 1;
	}
	return 0;
}

bool func_442(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!get_is_waypoint_recording_loaded(sParam1))
	{
		return true;
	}
	if (!waypoint_recording_get_num_points(sParam1, &iVar0))
	{
		return true;
	}
	if (iVar0 > 256)
	{
		return true;
	}
	if (_0x29ba9f78321e5a6c(uParam0, sParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0, 0, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_443(int iParam0, int iParam1, bool bParam2)
{
	if (!func_121(&Var0, iParam0, iParam1))
	{
		return true;
	}
	if (!func_347(Var0, -81907729, &vVar5, 1))
	{
		return true;
	}
	if (vdist(Global_35, vVar5) > 200f)
	{
		return true;
	}
	if (!is_sphere_visible_to_player(player_id(), vVar5, 1f, 1120403456))
	{
		return true;
	}
	if (!func_30(Local_557.f_957))
	{
		Local_557.f_957 = create_tracked_point();
		if (func_30(Local_557.f_957))
		{
			set_tracked_point_info(Local_557.f_957, vVar5 + Vector(0.5f, 0f, 0f), 0.5f);
		}
		return false;
	}
	iVar8 = _0xdfe332a5da6fe7c9(Local_557.f_957);
	if (iVar8 == -1)
	{
		return false;
	}
	*bParam2 = is_tracked_point_visible(Local_557.f_957);
	return true;
}

bool func_444(bool bParam0, bool bParam1, bool bParam2)
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

int func_445(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

void func_446(int iParam0)
{
	iVar0 = Global_1893587->f_2;
	iVar1 = &Local_557.f_952[iParam0];
	if (!func_377(iVar1))
	{
		return;
	}
	if (func_377(iVar0) && iVar1 == iVar0)
	{
		if (!_0x8f4f050054005c27(&(Local_557.f_952.f_2), iParam0))
		{
			if (!is_thread_active((*Global_1887339)[iVar1]->f_10, false))
			{
				return;
			}
			if (!func_714(iParam0, iVar1))
			{
				return;
			}
			_0xe84aac1b22a73e99(&(Local_557.f_952.f_2), iParam0);
			Local_557.f_952.f_4 = 0;
		}
	}
	else if (_0x8f4f050054005c27(&(Local_557.f_952.f_2), iParam0))
	{
		if (is_thread_active((*Global_1887339)[iVar1]->f_10, false))
		{
			return;
		}
		_0xb909149f2bb5f6da(&(Local_557.f_952.f_2), iParam0);
	}
}

bool func_447()
{
	return func_417(1, 255);
}

void func_448(int iParam0)
{
	if (!_does_volume_exist(&(Local_557.f_980[iParam0])))
	{
		return;
	}
	if (func_715(iParam0))
	{
		return;
	}
	if (func_574(iParam0))
	{
		return;
	}
	if (!func_716(iParam0))
	{
		return;
	}
	func_717(iParam0);
	func_174(10, iParam0, func_173(0, 8), -1);
}

void func_449(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	*bParam1 = 0;
	*bParam2 = 0;
	*bParam3 = 0;
	*uParam0 = 0;
	while (*uParam0 < 21)
	{
		if (Local_15.f_2[*uParam0]->f_2 == 1583594396)
		{
		}
		else if (!func_718(*uParam0, 255))
		{
		}
		else if (func_176(*uParam0, 8))
		{
			*bParam2 = 1;
		}
		else if (func_176(*uParam0, 1024))
		{
			*bParam3 = 1;
		}
		else
		{
			*bParam1 = 1;
		}
		*uParam0++;
	}
}

Vector3 func_450(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_719(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_451(int iParam0, var uParam1)
{
	if (!func_453(iParam0, &vVar3, uParam1))
	{
		return vVar0;
	}
	vVar3.f_2 = -134912699;
	_datafile_get_vector(&vVar0, &vVar3);
	return vVar0;
}

bool func_452(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_453(int iParam0, var uParam1, var uParam2)
{
	if (!func_158(iParam0, uParam1))
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
			Var2.f_3 = uParam2;
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

var func_454(int iParam0)
{
	return (*Global_1297717)[iParam0]->f_1;
}

var func_455(int iParam0)
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

void func_456(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 31, 26, &uParam1);
}

void func_457(var uParam0)
{
	if (&Global_1051252->f_16[0] == 0 || !_does_thread_exist(&(Global_1051252->f_16[0])))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 31, 26, &(Global_1051252->f_16[0]));
}

void func_458(int iParam0)
{
	func_313(iParam0, &iVar0, &iVar1);
	set_bit(Local_15.f_251[iVar0], iVar1);
}

bool func_459(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -422348800;
		uParam1->f_3 = iParam0;
		return _datafile_get_data_node_index(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_460(int iParam0, var uParam1)
{
	fVar1 = get_random_float_in_range(0f, 1f);
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.1f;
			break;
		case 1:
			fVar0 = 0.05f;
			break;
		case 2:
			fVar0 = 0.05f;
			break;
	}
	bVar2 = fVar1 < fVar0;
	return bVar2;
}

void func_461(int iParam0, int iParam1)
{
	func_266(&(Local_15.f_2[iParam0]->f_3), iParam1);
}

int func_462()
{
	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1976409839, 0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 2)
	{
		return 2;
	}
	return iVar5;
}

bool func_463(int iParam0)
{
	if (does_pickup_exist(&(Local_15.f_217[iParam0])))
	{
		return true;
	}
	if (!func_720(iParam0, &iVar0, &vVar1, &bVar7, &vVar4))
	{
		return false;
	}
	func_721(iParam0, &iVar8);
	if (bVar7)
	{
		Local_15.f_217[iParam0] = create_pickup_rotate(iVar0, vVar1, vVar4, iVar8, -1, 2, true, 0, 0, 0f, 0);
	}
	else
	{
		Local_15.f_217[iParam0] = create_pickup(iVar0, vVar1, iVar8, -1, true, 0, 0, 0f, 0);
	}
	if (!does_pickup_exist(&(Local_15.f_217[iParam0])))
	{
		return false;
	}
	func_576(iParam0, 1);
	return true;
}

bool func_464(int iParam0)
{
	if (&Local_557.f_20.f_422[iParam0] == 0)
	{
		return true;
	}
	if (!func_459(iParam0, &Var0))
	{
		return true;
	}
	if (!func_583(Var0))
	{
		return true;
	}
	if (((func_247(iParam0, &iVar5) && iVar5 >= 0) && iVar5 < 21) && !func_248(iVar5))
	{
		return true;
	}
	vVar6 = { func_722(iParam0) };
	fVar9 = func_723(iParam0);
	vVar10 = { func_724(iParam0) };
	if (func_452(vVar6))
	{
		return true;
	}
	if (func_50(iParam0, 2))
	{
		iVar13 = &Local_557.f_20.f_422[iParam0];
		if (_0x72068021f498e6e3(&(Local_557.f_20.f_422[iParam0]), vVar6))
		{
			clear_area(vVar6, 0.25f, 2097152);
			return false;
		}
		iVar14 = func_725(iParam0);
		iVar15 = _create_propset_2(iVar13, vVar6, iVar14, fVar9, 1200f, true, true);
		Local_15.f_198[iParam0] = _0x74f99ef7ef503398(iVar15);
	}
	else if (func_50(iParam0, 4))
	{
		iVar16 = &Local_557.f_20.f_422[iParam0];
		if (!is_model_valid(iVar16))
		{
			return true;
		}
		if (get_num_reserved_mission_vehicles(0) <= get_num_created_mission_vehicles(false))
		{
			return true;
		}
		if (!func_726(Local_15.f_198[iParam0], iVar16, vVar6, fVar9, 1, func_50(iParam0, 8), 0, 0))
		{
			return false;
		}
		iVar17 = net_to_veh(&(Local_15.f_198[iParam0]));
		if (!does_entity_exist(iVar17))
		{
			return false;
		}
		if (is_this_model_a_boat(iVar16))
		{
			if (func_50(iParam0, 64))
			{
				set_boat_anchor(iVar17, true);
			}
			else
			{
				_0x6b53f4b811e583d2(iVar17, 0);
				set_boat_anchor(iVar17, false);
			}
			_set_boat_anchor_buoyancy_coefficient(iVar17, 200f);
			set_vehicle_on_ground_properly(iVar17, 0f);
			_0x1098cda477890165(iVar17, 1);
			_set_boat_frozen_when_anchored(iVar17, 0, 1);
		}
	}
	else if (func_50(iParam0, 128))
	{
		iVar18 = &Local_557.f_20.f_422[iParam0];
		if (!is_model_valid(iVar18))
		{
			return true;
		}
		if (get_num_reserved_mission_peds(0) <= get_num_created_mission_peds(false))
		{
			return true;
		}
		if (!func_727(Local_15.f_198[iParam0], iVar18, vVar6, fVar9, 1, 0, 1, 1, 1))
		{
			return false;
		}
		iVar19 = net_to_ped(&(Local_15.f_198[iParam0]));
		if (!does_entity_exist(iVar19))
		{
			return false;
		}
		func_728(iVar19, 1, 1);
	}
	else
	{
		iVar20 = &Local_557.f_20.f_422[iParam0];
		if (!is_model_valid(iVar20))
		{
			return true;
		}
		if (get_num_reserved_mission_objects(0) <= get_num_created_mission_objects(false))
		{
			return true;
		}
		if (!func_729(Local_15.f_198[iParam0], iVar20, vVar6, 1, 0))
		{
			return false;
		}
		iVar21 = net_to_obj(&(Local_15.f_198[iParam0]));
		if (!does_entity_exist(iVar21))
		{
			return false;
		}
		if (!func_452(vVar10))
		{
			set_entity_rotation(iVar21, vVar10, 2, true);
		}
		else
		{
			set_entity_heading(iVar21, fVar9);
		}
		if (func_50(iParam0, 1))
		{
			place_object_on_ground_properly(iVar21, 0);
		}
	}
	return true;
}

bool func_465(int iParam0)
{
	if (&Local_557.f_20.f_22[iParam0] == 0)
	{
		return true;
	}
	if (func_730())
	{
		if (network_does_network_id_exist(&(Local_15.f_2[iParam0])))
		{
			iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
			delete_ped(&iVar0);
		}
		if (network_does_network_id_exist(Local_15.f_2[iParam0]->f_1))
		{
			iVar0 = net_to_ped(Local_15.f_2[iParam0]->f_1);
			delete_ped(&iVar0);
		}
		return true;
	}
	if ((&Local_557.f_20.f_22[iParam0] == 391477998 && !func_248(iParam0)) && func_51(iParam0, 8))
	{
		return true;
	}
	if (((((((func_51(iParam0, 64) && func_250(iParam0, &iVar1)) && &Local_557.f_20.f_22[iParam0] != -1574827255) && iVar1 >= 0) && iVar1 < 21) && &Local_557.f_20.f_22[iVar1] == 391477998) && !func_248(iVar1)) && func_51(iVar1, 8))
	{
		return true;
	}
	iVar2 = func_21(iParam0);
	if (!is_model_valid(iVar2))
	{
		return true;
	}
	if (func_452(Local_557.f_20.f_22[iParam0]->f_3))
	{
		return true;
	}
	bVar5 = func_731(iParam0, &iVar3, &iVar4);
	if (bVar5)
	{
		if (!func_50(iVar3, 4) || !network_does_network_id_exist(&(Local_15.f_198[iVar3])))
		{
			bVar5 = false;
		}
	}
	bVar6 = func_214(iParam0);
	bVar9 = (!func_732(iParam0, &uVar7) && !func_733(iParam0, &uVar8));
	bVar10 = !func_734(iParam0);
	if (func_51(iParam0, 65536))
	{
		if (!network_does_network_id_exist(Local_15.f_2[iParam0]->f_1))
		{
			if (!func_116(iParam0, &Var12) || !func_735(Var12, 1464077990, &iVar11))
			{
				iVar11 = iVar2;
			}
			if (func_727(&(Local_15.f_2[iParam0]->f_1), iVar11, func_736(iParam0), func_737(iParam0), 1, 0, 1, 1, 1))
			{
				iVar17 = net_to_ped(Local_15.f_2[iParam0]->f_1);
				freeze_entity_position(iVar17, true);
				set_entity_visible(iVar17, false);
				set_entity_invincible(iVar17, true);
				set_entity_collision(iVar17, false, false);
				set_blocking_of_non_temporary_events(iVar17, true);
				set_ped_config_flag(iVar17, 168, false);
			}
			return false;
		}
		bVar6 = false;
	}
	if (network_does_network_id_exist(Local_15.f_2[iParam0]->f_1))
	{
		_0x7182edda1ee7db5a(Local_15.f_2[iParam0]->f_1);
	}
	if (bVar5)
	{
		if (!network_does_network_id_exist(&(Local_15.f_2[iParam0])) && !func_738(Local_15.f_2[iParam0], &(Local_15.f_198[iVar3]), iVar2, iVar4, 1, bVar10, 1))
		{
			return false;
		}
	}
	else if (bVar6 && !func_51(iParam0, 16))
	{
		if (!network_does_network_id_exist(Local_15.f_2[iParam0]->f_1))
		{
			if (!func_727(&(Local_15.f_2[iParam0]->f_1), func_25(iParam0), Local_557.f_20.f_22[iParam0]->f_3, Local_557.f_20.f_22[iParam0]->f_9, 1, 0, 1, 1, 1))
			{
				return false;
			}
			_0x9587913b9e772d29(net_to_ped(Local_15.f_2[iParam0]->f_1), 0);
			_0x7182edda1ee7db5a(Local_15.f_2[iParam0]->f_1);
			return false;
		}
		if (!network_does_network_id_exist(&(Local_15.f_2[iParam0])) && !func_739(Local_15.f_2[iParam0], Local_15.f_2[iParam0]->f_1, iVar2, -1, 1, bVar10, 1, 0))
		{
			return false;
		}
	}
	else
	{
		if ((func_51(iParam0, 16) && bVar6) && !network_does_network_id_exist(Local_15.f_2[iParam0]->f_1))
		{
			if (!func_727(&(Local_15.f_2[iParam0]->f_1), func_25(iParam0), func_736(iParam0), func_737(iParam0), 1, 0, 1, 1, 1))
			{
				return false;
			}
			if (network_does_network_id_exist(Local_15.f_2[iParam0]->f_1))
			{
				_0x7182edda1ee7db5a(Local_15.f_2[iParam0]->f_1);
				set_blocking_of_non_temporary_events(net_to_ped(Local_15.f_2[iParam0]->f_1), true);
				set_ped_config_flag(net_to_ped(Local_15.f_2[iParam0]->f_1), 288, false);
				_0x9587913b9e772d29(net_to_ped(Local_15.f_2[iParam0]->f_1), 0);
			}
			return false;
		}
		if (!network_does_network_id_exist(&(Local_15.f_2[iParam0])) && !func_727(Local_15.f_2[iParam0], iVar2, Local_557.f_20.f_22[iParam0]->f_3, Local_557.f_20.f_22[iParam0]->f_9, 1, 0, bVar9, bVar10, 1))
		{
			return false;
		}
	}
	if (network_does_network_id_exist(&(Local_15.f_2[iParam0])))
	{
		_0x7182edda1ee7db5a(&(Local_15.f_2[iParam0]));
		if ((bVar6 && !bVar9) && !_0xa0bc8faed8cfeb3c(net_to_ped(&(Local_15.f_2[iParam0]))))
		{
			return false;
		}
		if ((bVar6 && network_does_network_id_exist(Local_15.f_2[iParam0]->f_1)) && !_0xa0bc8faed8cfeb3c(net_to_ped(Local_15.f_2[iParam0]->f_1)))
		{
			return false;
		}
	}
	func_740(iParam0);
	return true;
}

void func_466()
{
	Local_557.f_1014 = 0;
}

int func_467()
{
	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1334467051, 0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 5)
	{
		return 5;
	}
	return iVar5;
}

bool func_468(int iParam0)
{
	if (!func_119(&uVar0) || !func_120(&uVar0, -867387895, 0, 0))
	{
		return true;
	}
	iVar5 = func_741(iParam0);
	if (iVar5 == 0)
	{
		return true;
	}
	if (does_group_exist(&(Local_15.f_192[iParam0])))
	{
		return true;
	}
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		func_375(&Var9);
		if (!func_119(&Var9) || !func_120(&Var9, -429389572, iParam0, iVar6))
		{
		}
		else if (!func_345(Var9, -1296487272, &iVar7, 0))
		{
		}
		else if (iVar7 < 0 || iVar7 >= 21)
		{
		}
		else if (&Local_557.f_20.f_22[iVar7] == 0)
		{
		}
		else
		{
			bVar8 = true;
		}
		iVar6++;
	}
	if (!bVar8)
	{
		return true;
	}
	iVar14 = func_742(iParam0);
	iVar15 = func_743(iParam0);
	Local_15.f_192[iParam0] = create_group(iVar14);
	set_group_formation(&(Local_15.f_192[iParam0]), iVar15);
	if (iVar15 == 5)
	{
		_0x478f6b9920446ce2(&(Local_15.f_192[iParam0]), 0);
	}
	else
	{
		_0x478f6b9920446ce2(&(Local_15.f_192[iParam0]), 1);
	}
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		func_375(&Var9);
		if (!func_119(&Var9) || !func_120(&Var9, -429389572, iParam0, iVar6))
		{
		}
		else if (!func_345(Var9, -1296487272, &iVar7, 0))
		{
		}
		else if (iVar7 < 0 || iVar7 >= 21)
		{
		}
		else if (!func_52(iVar7, &iVar17, 1, 0))
		{
		}
		else
		{
			if (!bVar16)
			{
				set_ped_as_group_leader(iVar17, &(Local_15.f_192[iParam0]), false);
				bVar16 = true;
			}
			else
			{
				if (iVar15 == 5 && func_347(Var9, -655039491, &vVar19, 1))
				{
					add_custom_formation_location(&(Local_15.f_192[iParam0]), vVar19, (iVar18 - 1));
				}
				set_ped_as_group_member(iVar17, &(Local_15.f_192[iParam0]));
				_0x0e9e95fdedcc9d35(iVar17, (iVar18 - 1), 0);
			}
			iVar18++;
		}
		iVar6++;
	}
	return true;
}

void func_469(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = 0;
	*iParam2 = -1;
	iVar0 = int_to_playerindex(iParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	if (!_network_is_player_index_valid(Local_15.f_283))
	{
		return;
	}
	if (_0x901e0dc25080c8b9(iVar0) == Local_15.f_282)
	{
		return;
	}
	if (iVar0 == Local_15.f_283)
	{
		return;
	}
	if (func_744(iVar0))
	{
		return;
	}
	*iParam2 = 0;
	fVar1 = 1800f;
	iVar2 = 0;
	if (!network_is_player_active(Local_15.f_283))
	{
	}
	else
	{
		fVar1 = get_distance_between_coords(func_660(iVar0), func_660(Local_15.f_283), false);
		if (fVar1 < 1800f && fVar1 > 50f)
		{
			iVar2 = round(((500f / 1800f) * (1800f - fVar1)));
			if (iVar2 < 0)
			{
				iVar2 = 0;
			}
		}
	}
	*iParam1 = (*iParam1 + iVar2);
	if (fVar1 < 1800f && fVar1 > 50f)
	{
		*iParam2 += 4;
	}
	if (!func_745(65536, iParam0))
	{
		*iParam2 += 2;
	}
	if (func_746(iVar0, 0) >= 3)
	{
		*iParam2++;
	}
	if (_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(iVar0)) && _0x149a2751ab66ac02(_0x901e0dc25080c8b9(iVar0)) > 1)
	{
		*iParam1 += 150;
	}
	*iParam1 = (*iParam1 + (110 * func_747(iVar0)));
}

void func_470(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = 0;
	*iParam2 = -1;
	iVar0 = int_to_playerindex(iParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	if (!_network_is_player_index_valid(Local_15.f_283))
	{
		return;
	}
	if (_0xd6f6acf4392187fb(Local_15.f_282) && _0x901e0dc25080c8b9(iVar0) == Local_15.f_282)
	{
		return;
	}
	if (iVar0 == Local_15.f_283)
	{
		return;
	}
	if (!_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(iVar0)))
	{
		return;
	}
	if (!_0x424b17a7dc5c90bc(iVar0))
	{
		return;
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(iVar0)) < 2)
	{
		return;
	}
	if (func_748(iVar0, func_173(0, 8)))
	{
		return;
	}
	*iParam2 = 0;
	fVar1 = 1800f;
	iVar2 = 0;
	fVar6 = 50f;
	fVar7 = 1800f;
	if (!network_is_player_active(Local_15.f_283))
	{
	}
	else
	{
		iVar4 = 0;
		while (iVar4 < 32)
		{
			iVar3 = int_to_playerindex(iVar4);
			if (!network_is_player_active(iVar3))
			{
			}
			else if (iVar0 != iVar3 && !_0x3f59fe6f37869576(iVar0, iVar3))
			{
			}
			else
			{
				fVar5 = get_distance_between_coords(func_660(iVar0), func_660(Local_15.f_283), false);
				if (fVar5 > fVar6)
				{
					fVar6 = fVar5;
				}
				if (fVar5 < fVar7)
				{
					fVar7 = fVar5;
				}
			}
			iVar4++;
		}
		fVar1 = ((fVar7 + fVar6) / 2f);
		if (fVar6 < 1800f && fVar7 > 50f)
		{
			iVar2 = round(((500f / 1800f) * (1800f - fVar1)));
			if (iVar2 < 0)
			{
				iVar2 = 0;
			}
		}
	}
	*iParam1 = (*iParam1 + iVar2);
	if (fVar6 < 1800f && fVar7 > 50f)
	{
		*iParam2 += 4;
	}
	if (!func_745(65536, iParam0))
	{
		*iParam2 += 2;
	}
	if (func_749(_0x901e0dc25080c8b9(iVar0)) >= 3)
	{
		*iParam2++;
	}
	*iParam1 = (*iParam1 + (100 * _0x149a2751ab66ac02(_0x901e0dc25080c8b9(iVar0))));
	*iParam1 = (*iParam1 + (110 * func_750(_0x901e0dc25080c8b9(iVar0))));
}

void func_471()
{
	if (!func_59(8) && !func_472(2097152))
	{
		return;
	}
	func_473(0);
	if (func_751())
	{
		func_752();
	}
	if (!func_59(16) && func_753())
	{
		func_100(16);
	}
}

bool func_472(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_47(Local_300[iVar0], iParam0))
		{
		}
		else
		{
			iVar1 = int_to_participantindex(iVar0);
			if (!network_is_participant_active(iVar1))
			{
			}
			else if (!network_is_player_active(network_get_player_index(iVar1)))
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

void func_473(bool bParam0)
{
	if (func_59(8) && !bParam0)
	{
		return;
	}
	Local_15.f_272 = get_network_time_accurate();
	func_100(8);
}

void func_474(int iParam0, bool bParam1)
{
	if (_0x8f4f050054005c27(&(Local_15.f_222.f_10), iParam0))
	{
		return;
	}
	iVar0 = func_580(func_26(iParam0), 0, 10);
	if (iVar0 == 0)
	{
		return;
	}
	if (!func_754(&Var1, iParam0))
	{
		return;
	}
	if (!func_345(Var1, 110383052, &iVar6, 0))
	{
		iVar6 = -1;
	}
	if (!func_345(Var1, -1031804957, &iVar7, 0))
	{
		iVar7 = 0;
	}
	if (&Local_15.f_222.f_3[iParam0] == 0)
	{
		if (!func_755(iVar6))
		{
			return;
		}
		Local_15.f_222.f_3[iParam0] = get_network_time_accurate();
		return;
	}
	else if (Local_15.f_222 == -1 && Local_15.f_222.f_1 == -1)
	{
		if (get_time_difference(&(Local_15.f_222.f_3[iParam0]), get_network_time_accurate()) < iVar7)
		{
			return;
		}
		iVar8 = func_756();
		if (!func_345(Var1, 635104585, &iVar9, 0))
		{
			iVar9 = 20;
		}
		if (iVar8 > iVar9)
		{
			return;
		}
		Local_15.f_222 = iParam0;
		Local_15.f_222.f_1 = 0;
		*bParam1 = 1;
		return;
	}
	*bParam1 = 1;
	iVar8 = func_756();
	if (Local_15.f_222.f_1 >= iVar0)
	{
		func_757(268435456);
		Local_15.f_222 = -1;
		Local_15.f_222.f_1 = -1;
		_0xe84aac1b22a73e99(&(Local_15.f_222.f_10), iParam0);
		*bParam1 = 0;
	}
	else if (!func_59(268435456))
	{
		if (func_472(262144))
		{
			return;
		}
		func_100(268435456);
		return;
	}
	if (!func_758(262144))
	{
		return;
	}
	bVar10 = func_472(524288);
	if (!bVar10)
	{
		if (!func_759(Local_15.f_222, Local_15.f_222.f_1))
		{
			return;
		}
	}
	func_757(268435456);
	Local_15.f_222.f_1++;
	Local_15.f_222.f_2 = -1;
}

void func_475(int iParam0)
{
	if (&Local_15.f_234[iParam0] == 255)
	{
		return;
	}
	if (!func_163(iParam0) && !network_is_player_active(&(Local_15.f_234[iParam0])))
	{
		func_760(iParam0);
	}
}

void func_476(int iParam0)
{
	if (Local_15.f_2[iParam0]->f_2 != 1583594396)
	{
		return;
	}
	if (!func_176(iParam0, 67108864) || func_176(iParam0, 134217728))
	{
		return;
	}
	if (!func_52(iParam0, &iVar0, 0, 1))
	{
		return;
	}
	if (!is_entity_dead(iVar0))
	{
		return;
	}
	if (func_445(get_ped_time_of_death(iVar0)) < 1200)
	{
		return;
	}
	iVar3 = 255;
	if (func_52(iParam0, &iVar0, 0, 1))
	{
		iVar1 = get_ped_source_of_death(iVar0);
	}
	if (does_entity_exist(iVar1) && is_entity_a_ped(iVar1))
	{
		iVar2 = get_ped_index_from_entity_index(iVar1);
		if (is_ped_a_player(iVar2))
		{
			iVar3 = network_get_player_index_from_ped(iVar2);
		}
	}
	func_325(iParam0, iVar3);
}

void func_477(int iParam0)
{
	if (func_176(iParam0, 1))
	{
		if (((Local_15.f_2[iParam0]->f_2 != 1583594396 && !func_176(iParam0, 524288)) && func_479(iParam0, 1, 0)) && func_637(iParam0, 1200))
		{
			func_461(iParam0, 524288);
		}
		return;
	}
	if (!func_52(iParam0, &iVar0, 0, 0))
	{
		return;
	}
	if (is_ped_dead_or_dying(iVar0, true))
	{
		if ((get_ped_config_flag(iVar0, 9, false) || get_ped_config_flag(iVar0, 11, false)) || get_ped_config_flag(iVar0, 10, false))
		{
			return;
		}
		iVar1 = get_ped_cause_of_death(iVar0);
		if (is_weapon_valid(iVar1))
		{
			if (_0x5809dbca0a37c82b(iVar1) && _0xea522f991e120d45(iVar1))
			{
				return;
			}
			if (func_761(iVar1))
			{
				return;
			}
		}
		func_572(iParam0, 8);
		return;
	}
	if (Local_557.f_20.f_22[iParam0]->f_10 == 2116329739 || Local_557.f_20.f_22[iParam0]->f_10 == 918683891)
	{
		if (Local_557.f_20.f_22[iParam0]->f_10 == 918683891)
		{
			if (Local_557.f_20.f_22[iParam0]->f_11 != 2116329739)
			{
				iVar3 = Local_557.f_20.f_22[iParam0]->f_15;
			}
			else
			{
				func_762(iParam0, &iVar3);
			}
		}
		else
		{
			iVar3 = Local_557.f_20.f_22[iParam0]->f_15;
		}
		if (iVar3 >= 0 && iVar3 < 21)
		{
			if (!func_52(Local_557.f_20.f_22[iParam0]->f_15, &iVar2, 0, 0))
			{
				func_572(iParam0, 9);
			}
			else if (is_ped_being_stealth_killed(iVar2) || is_ped_dead_or_dying(iVar2, true))
			{
				func_572(iParam0, 10);
			}
		}
	}
	if (Local_557.f_20.f_22[iParam0]->f_12 != -1)
	{
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (Local_557.f_20.f_22[iVar4]->f_12 != Local_557.f_20.f_22[iParam0]->f_12)
			{
			}
			else if (&Local_557.f_20.f_22[iVar4] == 1824637041 && &Local_557.f_20.f_22[iParam0] != 1824637041)
			{
			}
			else if (!func_176(iVar4, 524288))
			{
			}
			else
			{
				func_572(iParam0, 5);
				return;
			}
			iVar4++;
		}
	}
	if (!func_51(iParam0, 65536) && func_54(iParam0, &iVar5, 0))
	{
		if (func_763(iVar5) || (!is_ped_on_mount(iVar0) && !func_51(iParam0, 16)))
		{
			func_572(iParam0, 11);
			return;
		}
	}
	if (func_176(iParam0, 8) && func_764(iParam0, iVar0, Local_557.f_20.f_22[iParam0]->f_17, &uVar6))
	{
		func_572(iParam0, 2);
		return;
	}
	if (func_176(iParam0, 16))
	{
		if (func_765(iVar0, Local_557.f_20.f_22[iParam0]->f_18))
		{
			func_572(iParam0, 7);
			return;
		}
	}
	if ((((func_55(Local_15.f_2[iParam0]->f_2) && func_766(iParam0, &iVar7, &uVar8)) && func_767(iVar7)) && func_574(iVar7)) && !func_176(iParam0, 4))
	{
		func_572(iParam0, 6);
		return;
	}
	if ((((!is_ped_being_stunned(iVar0, 0) && !is_ped_being_stealth_killed(iVar0)) && !_0x3bdfcf25b58b0415(iVar0)) && !is_ped_ragdoll(iVar0)) && func_768(iParam0))
	{
		func_461(iParam0, 64);
		func_572(iParam0, 4);
		return;
	}
	bVar10 = Local_557.f_20.f_22[iParam0]->f_10 == 918683891;
	if (func_769(iParam0, iVar0, is_ped_human(iVar0), bVar10, &bVar9))
	{
		if (bVar9)
		{
			func_572(iParam0, 4);
		}
		else
		{
			func_572(iParam0, 12);
		}
		return;
	}
}

bool func_478(int iParam0)
{
	return iParam0 == -1574827255;
}

bool func_479(int iParam0, bool bParam1, bool bParam2)
{
	if (!network_does_network_id_exist(&(Local_15.f_2[iParam0])))
	{
		return false;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!bParam1)
	{
		return true;
	}
	if (is_ped_dead_or_dying(iVar0, true))
	{
		if (!bParam2 || !get_ped_config_flag(iVar0, 11, false))
		{
			return false;
		}
	}
	return true;
}

void func_480(int iParam0)
{
	switch (Local_15.f_2[iParam0]->f_2)
	{
		case -1574827255:
			func_461(iParam0, 67108864);
			break;
		case 0:
			return;
	}
	if (!func_176(iParam0, 67108864))
	{
		func_62(iParam0, 1);
	}
	func_770(iParam0, 1583594396);
}

void func_481(int iParam0)
{
	if (!func_176(iParam0, 8) && !func_176(iParam0, 1024))
	{
		return;
	}
	if (!func_52(iParam0, &uVar0, 0, 0))
	{
		return;
	}
	if (Local_15.f_2[iParam0]->f_6 != 255)
	{
		if (func_771(iParam0, uVar0))
		{
			if (func_176(iParam0, 65536))
			{
				func_772(iParam0);
			}
			else if (func_176(iParam0, 32768))
			{
				func_461(iParam0, 65536);
			}
			else
			{
				func_461(iParam0, 32768);
				return;
			}
		}
		else
		{
			func_773(iParam0, 32768);
			func_773(iParam0, 65536);
			return;
		}
	}
	if (!func_774(iParam0, &uVar1))
	{
		return;
	}
	func_775(iParam0, uVar1);
}

void func_482(int iParam0)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if ((func_59(65536) && !func_176(iParam0, 262144)) && func_776(iParam0, iVar0))
	{
		func_461(iParam0, 262144);
	}
	if (func_777(iParam0) != 16)
	{
		if (!func_51(iParam0, 32768) && func_778())
		{
			func_779(iParam0, 16);
		}
		if (((func_51(iParam0, 4096) && func_176(iParam0, 1)) && func_780(iParam0, &iVar1)) && Local_15.f_275 <= iVar1)
		{
			func_779(iParam0, 16);
		}
	}
	if (func_176(iParam0, 1) && !func_781(Local_15.f_2[iParam0]->f_4))
	{
		switch (Local_557.f_20.f_22[iParam0]->f_11)
		{
			case 863436125:
				iVar2 = 15;
				break;
			case 1828125802:
				iVar2 = 16;
				break;
			case -1978665515:
				iVar2 = 17;
				break;
			case 2116329739:
				iVar2 = 18;
				break;
			case -503562496:
				iVar2 = 19;
				break;
			case 1300923248:
				iVar2 = 20;
				break;
			case 1467455271:
				iVar2 = 14;
				break;
			case -285368335:
				iVar2 = 21;
				break;
			default:
				iVar2 = 14;
				break;
		}
		if (func_176(iParam0, 4096))
		{
			if (iVar2 == 14 || iVar2 == 17)
			{
				iVar2 = 16;
			}
		}
		func_779(iParam0, iVar2);
	}
	switch (func_777(iParam0))
	{
		case 0:
			if (func_51(iParam0, 1) && !func_782(iVar0, func_23(iParam0)))
			{
				return;
			}
			switch (Local_557.f_20.f_22[iParam0]->f_10)
			{
				case -1959537321:
					iVar3 = 2;
					break;
				case 1288903733:
					iVar3 = 3;
					break;
				case 2116329739:
					iVar3 = 4;
					break;
				case -519360492:
					iVar3 = 12;
					break;
				case 917311522:
					iVar3 = 13;
					break;
				case -1837223991:
					iVar3 = 6;
					break;
				case -211984134:
					iVar3 = 8;
					break;
				case 1631123848:
					iVar3 = 9;
					break;
				case -74090560:
					iVar3 = 10;
					break;
				case 1300923248:
					iVar3 = 10;
					break;
				case 918683891:
					iVar3 = 5;
					break;
				default:
					iVar3 = 1;
					break;
			}
			func_779(iParam0, iVar3);
			break;
		case 7:
			func_783(iParam0, iVar0);
			break;
		case 5:
			if (!func_784(iParam0, iVar0))
			{
				return;
			}
			if (func_785(iParam0) != 0)
			{
				func_779(iParam0, 2);
			}
			else
			{
				func_779(iParam0, 1);
			}
			break;
		case 11:
			if (!func_786(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 4) && func_785(iParam0) != 0)
			{
				func_779(iParam0, 2);
			}
			else if (!func_452(func_787(iParam0)))
			{
				func_779(iParam0, 7);
			}
			else
			{
				func_779(iParam0, 1);
			}
			break;
		case 20:
			if (!func_786(iParam0, iVar0))
			{
				return;
			}
			if (!func_176(iParam0, 4) && !func_452(func_787(iParam0)))
			{
				func_779(iParam0, 19);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
		case 16:
		case 17:
			func_788(iParam0, iVar0);
			break;
		case 18:
			if (!func_789(iParam0, iVar0))
			{
				return;
			}
			func_779(iParam0, 14);
			break;
		case 19:
			if (!func_783(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 268435456))
			{
				func_779(iParam0, 21);
			}
			else if (func_176(iParam0, 4096))
			{
				func_779(iParam0, 16);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
		case 21:
			if (!func_790(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 4096) || get_best_ped_weapon(iVar0, false, false) == -1569615261)
			{
				func_779(iParam0, 16);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
	}
}

void func_483(int iParam0)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (func_777(iParam0) != 16)
	{
		if (!func_51(iParam0, 32768) && func_778())
		{
			func_779(iParam0, 16);
		}
		if (((func_51(iParam0, 4096) && func_176(iParam0, 1)) && func_780(iParam0, &iVar1)) && Local_15.f_275 <= iVar1)
		{
			func_779(iParam0, 16);
		}
	}
	if (func_176(iParam0, 1) && !func_781(Local_15.f_2[iParam0]->f_4))
	{
		switch (Local_557.f_20.f_22[iParam0]->f_11)
		{
			case 863436125:
				iVar2 = 15;
				break;
			case 1828125802:
				iVar2 = 16;
				break;
			case -1978665515:
				iVar2 = 17;
				break;
			case 2116329739:
				iVar2 = 18;
				break;
			case -503562496:
				iVar2 = 19;
				break;
			case 1300923248:
				iVar2 = 20;
				break;
			case 1467455271:
				iVar2 = 14;
				break;
			case -285368335:
				iVar2 = 21;
				break;
			default:
				iVar2 = 14;
				break;
		}
		if (func_176(iParam0, 4096))
		{
			if (iVar2 == 14 || iVar2 == 17)
			{
				iVar2 = 16;
			}
		}
		func_779(iParam0, iVar2);
	}
	switch (func_777(iParam0))
	{
		case 0:
			if (func_51(iParam0, 1) && !func_782(iVar0, func_23(iParam0)))
			{
				return;
			}
			switch (Local_557.f_20.f_22[iParam0]->f_10)
			{
				case -1959537321:
					iVar3 = 2;
					break;
				case 1288903733:
					iVar3 = 3;
					break;
				case 2116329739:
					iVar3 = 4;
					break;
				case -519360492:
					iVar3 = 12;
					break;
				case 917311522:
					iVar3 = 13;
					break;
				case -1837223991:
					iVar3 = 6;
					break;
				case -211984134:
					iVar3 = 8;
					break;
				case 1631123848:
					iVar3 = 9;
					break;
				case -74090560:
					iVar3 = 10;
					break;
				case 1300923248:
					iVar3 = 10;
					break;
				case 918683891:
					iVar3 = 5;
					break;
				default:
					iVar3 = 1;
					break;
			}
			func_779(iParam0, iVar3);
			break;
		case 7:
			func_783(iParam0, iVar0);
			break;
		case 5:
			if (!func_784(iParam0, iVar0))
			{
				return;
			}
			if (func_785(iParam0) != 0)
			{
				func_779(iParam0, 2);
			}
			else
			{
				func_779(iParam0, 1);
			}
			break;
		case 11:
			if (!func_786(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 4) && func_785(iParam0) != 0)
			{
				func_779(iParam0, 2);
			}
			else if (!func_452(func_787(iParam0)))
			{
				func_779(iParam0, 7);
			}
			else
			{
				func_779(iParam0, 1);
			}
			break;
		case 20:
			if (!func_786(iParam0, iVar0))
			{
				return;
			}
			if (!func_176(iParam0, 4) && !func_452(func_787(iParam0)))
			{
				func_779(iParam0, 19);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
		case 16:
		case 17:
			func_788(iParam0, iVar0);
			break;
		case 18:
			if (!func_789(iParam0, iVar0))
			{
				return;
			}
			func_779(iParam0, 14);
			break;
		case 19:
			if (!func_783(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 268435456))
			{
				func_779(iParam0, 21);
			}
			else if (func_176(iParam0, 4096))
			{
				func_779(iParam0, 16);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
		case 21:
			if (!func_790(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 4096) || get_best_ped_weapon(iVar0, false, false) == -1569615261)
			{
				func_779(iParam0, 16);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
	}
}

void func_484(int iParam0)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (func_777(iParam0) != 16)
	{
		if (!func_51(iParam0, 32768) && func_778())
		{
			func_779(iParam0, 16);
		}
		if (((func_51(iParam0, 4096) && func_176(iParam0, 1)) && func_780(iParam0, &iVar1)) && Local_15.f_275 <= iVar1)
		{
			func_779(iParam0, 16);
		}
	}
	if (func_176(iParam0, 1) && !func_781(Local_15.f_2[iParam0]->f_4))
	{
		switch (Local_557.f_20.f_22[iParam0]->f_11)
		{
			case 1828125802:
				iVar2 = 16;
				break;
			case 2116329739:
				iVar2 = 18;
				break;
			case -503562496:
				iVar2 = 19;
				break;
			case 1300923248:
				iVar2 = 20;
				break;
			case 1467455271:
				iVar2 = 14;
				break;
			default:
				iVar2 = 16;
				break;
		}
		if (func_176(iParam0, 4096))
		{
			if (iVar2 == 14)
			{
				iVar2 = 16;
			}
		}
		func_779(iParam0, iVar2);
	}
	switch (func_777(iParam0))
	{
		case 0:
			switch (Local_557.f_20.f_22[iParam0]->f_10)
			{
				case -1959537321:
					iVar3 = 2;
					break;
				case 1288903733:
					iVar3 = 3;
					break;
				case 2116329739:
					iVar3 = 4;
					break;
				case -519360492:
					iVar3 = 12;
					break;
				case -211984134:
					iVar3 = 8;
					break;
				case 1631123848:
					iVar3 = 9;
					break;
				case -74090560:
					iVar3 = 10;
					break;
				case 1300923248:
					iVar3 = 10;
					break;
				case 918683891:
					iVar3 = 5;
					break;
				default:
					iVar3 = 1;
					break;
			}
			func_779(iParam0, iVar3);
			break;
		case 7:
			func_783(iParam0, iVar0);
			break;
		case 5:
			if (!func_784(iParam0, iVar0))
			{
				return;
			}
			if (func_785(iParam0) != 0)
			{
				func_779(iParam0, 2);
			}
			else
			{
				func_779(iParam0, 1);
			}
			break;
		case 11:
			if (!func_786(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 4) && func_785(iParam0) != 0)
			{
				func_779(iParam0, 2);
			}
			else if (!func_452(func_787(iParam0)))
			{
				func_779(iParam0, 7);
			}
			else
			{
				func_779(iParam0, 1);
			}
			break;
		case 20:
			if (!func_786(iParam0, iVar0))
			{
				return;
			}
			if (!func_176(iParam0, 4) && !func_452(func_787(iParam0)))
			{
				func_779(iParam0, 19);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
		case 16:
		case 17:
			func_788(iParam0, iVar0);
			break;
		case 18:
			if (!func_789(iParam0, iVar0))
			{
				return;
			}
			func_779(iParam0, 14);
			break;
		case 19:
			if (!func_783(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 4096))
			{
				func_779(iParam0, 16);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
	}
}

void func_485(int iParam0)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (func_777(iParam0) != 24 && func_778())
	{
		func_779(iParam0, 24);
	}
	if (!func_791(iParam0, &iVar1, &iVar2))
	{
		return;
	}
	switch (func_777(iParam0))
	{
		case 0:
			if (func_792(iVar1, iVar2, &vVar3))
			{
				func_779(iParam0, 23);
				return;
			}
			func_779(iParam0, 22);
			break;
		case 23:
			if (!func_792(iVar1, iVar2, &vVar3) || vdist(get_entity_coords(iVar0, false, false), vVar3) < 4f)
			{
				func_461(iParam0, 2048);
			}
			if (!func_176(iParam0, 2048))
			{
				return;
			}
			func_779(iParam0, 22);
			break;
		case 22:
			if (Local_15.f_2[iParam0]->f_7 == 0)
			{
				Local_15.f_2[iParam0]->f_7 = get_network_time_accurate();
			}
			break;
	}
}

bool func_486(int iParam0)
{
	if (Local_15.f_2[iParam0]->f_2 != 1583594396)
	{
		return false;
	}
	if (func_176(iParam0, 67108864))
	{
		return false;
	}
	if ((func_176(iParam0, 1) && func_176(iParam0, 524288)) && func_55(Local_15.f_2[iParam0]->f_2))
	{
		if (Local_557.f_20.f_22[iParam0]->f_12 != -1)
		{
			iVar0 = 0;
			while (iVar0 < 21)
			{
				if (!func_55(Local_15.f_2[iVar0]->f_2))
				{
				}
				else if (Local_557.f_20.f_22[iVar0]->f_12 != Local_557.f_20.f_22[iParam0]->f_12)
				{
				}
				else if (func_176(iVar0, 1))
				{
				}
				else
				{
					return false;
				}
				iVar0++;
			}
		}
		iVar7 = func_205();
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (_0x8f4f050054005c27(&(Local_15.f_222.f_10), iVar6))
			{
			}
			else
			{
				func_375(&Var1);
				if (!func_754(&Var1, iVar6))
				{
				}
				else if (func_345(Var1, 110383052, &iVar8, 0) && Local_557.f_20.f_22[iParam0]->f_12 != iVar8)
				{
				}
				else if (&Local_15.f_222.f_3[iVar6] != 0)
				{
				}
				else
				{
					return false;
				}
			}
			iVar6++;
		}
	}
	return true;
}

void func_487(int iParam0)
{
	func_62(iParam0, 1);
	Local_15.f_2[iParam0]->f_5 = 255;
	Local_15.f_2[iParam0]->f_6 = 255;
	Local_15.f_2[iParam0]->f_7 = 0;
	Local_15.f_2[iParam0]->f_8 = -1;
	Local_15.f_2[iParam0]->f_4 = 0;
	Local_15.f_2[iParam0]->f_2 = 0;
	Local_15.f_2[iParam0]->f_3 = 0;
	Local_15.f_2[iParam0]->f_1 = 0;
	Local_15.f_2[iParam0] = 0;
}

bool func_488(int iParam0)
{
	iVar0 = func_793(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_489(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

bool func_490(int iParam0)
{
	if (func_794(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_491()
{
	return true;
}

bool func_492(int iParam0, int iParam1, int iParam2)
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

void func_493(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_795(*uParam0);
}

void func_494(var uParam0)
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

void func_495()
{
	_0x9d746964e0cf2c5f(func_796(), func_797());
	_0x9d746964e0cf2c5f(func_798(), func_797());
	_0x9d746964e0cf2c5f(func_799(), func_797());
	_0x9d746964e0cf2c5f(func_800(), func_797());
	_0x9d746964e0cf2c5f(func_801(), func_802());
	_0x9d746964e0cf2c5f(func_803(), func_804());
}

void func_496(var uParam0)
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

void func_497(int iParam0)
{
	if (Global_1903133->f_1 != iParam0)
	{
		Global_1903133->f_1 = iParam0;
	}
}

void func_498(int iParam0)
{
	Global_1903133 = iParam0;
}

void func_499(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_4 != 0)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_4);
		}
		Global_1071686->f_21689[iParam0]->f_4 = 0;
		func_805(iParam0);
	}
}

void func_500(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_5 != 0)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_5);
		}
		Global_1071686->f_21689[iParam0]->f_5 = 0;
		func_805(iParam0);
	}
}

void func_501(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21689[iParam0]->f_1 = 0;
		func_805(iParam0);
	}
}

void func_502(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28348), iParam0);
}

void func_503(int iParam0)
{
	if (Global_1071686->f_21952[iParam0]->f_4 != 0)
	{
		Global_1071686->f_21952[iParam0]->f_4 = 0;
		func_805(iParam0);
	}
}

int func_504(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -1494363065;
		case 2:
			return -514316475;
		case 3:
			return 1257949393;
		case 4:
			return -1967078622;
		case 5:
			return -1854780893;
		case 6:
			return 477974086;
		case 7:
			return 618068466;
		case 8:
			return 499656970;
		case 9:
			return 1791948823;
		case 10:
			return -1634863390;
		case 11:
			return -1296513906;
		case 12:
			return -1030655937;
		case 13:
			return -1783181138;
		case 14:
			return 1250422342;
		case 15:
			return -634665876;
		case 16:
			return -1679013564;
		case 17:
			return -706075066;
		case 18:
			return -1152882498;
		case 19:
			return 2108116481;
		case 20:
			return -86995487;
		case 21:
			return -1315007749;
		case 22:
			return 449057693;
		case 23:
			return 81846499;
		case 24:
			return 385589027;
		case 25:
			return 1951290581;
		case 26:
			return 1316486837;
		case 27:
			return 120448958;
		case 28:
			return 1345888212;
		case 29:
			return 396837320;
		case 30:
			return -1408563730;
		case 31:
			return -757633599;
		case 32:
			return -1034424695;
		case 33:
			return 1841970554;
		case 34:
			return -789758703;
		case 35:
			return -210274020;
		case 36:
			return 633501950;
		case 37:
			return -1215742816;
		case 38:
			return 1971904853;
		case 39:
			return -1935655667;
		case 40:
			return 1898201469;
		case 41:
			return 300196727;
		case 42:
			return 242857368;
		case 43:
			return -1648877470;
		case 44:
			return -545299531;
		case 45:
			return -1598949067;
		case 46:
			return 478308321;
		case 47:
			return 440583097;
		case 48:
			return -1258163578;
		case 49:
			return -1376314322;
		case 50:
			return -1898294040;
		case 51:
			return -114666387;
		case 52:
			return 334700325;
		case 53:
			return -1399051227;
		case 54:
			return 1571096148;
		case 55:
			return 457103096;
		case 56:
			return -1930919582;
		case 57:
			return -985005225;
		case 58:
			return 1723535349;
		case 59:
			return -1393798041;
		case 60:
			return 905156700;
		case 61:
			return 151445061;
		case 62:
			return -1983943039;
		case 63:
			return 2021695109;
		case 64:
			return -2086327823;
		case 65:
			return 1623086000;
		case 66:
			return 796310207;
		case 67:
			return -1575244427;
		case 68:
			return -1930399868;
		case 69:
			return 353568324;
		case 70:
			return -469672732;
		case 71:
			return 1717813521;
		case 72:
			return 941437279;
		case 73:
			return -162385832;
		case 74:
			return -892848695;
		case 75:
			return -355092128;
		case 76:
			return 946732137;
		case 77:
			return -79139194;
		case 78:
			return 1382158532;
		case 79:
			return -379874384;
		case 80:
			return 2018657739;
		case 81:
			return 1427070667;
		case 82:
			return -682435976;
		case 83:
			return 1232224440;
		case 84:
			return 1889309476;
		case 85:
			return 1918774327;
		case 86:
			return -32613857;
		case 87:
			return 5611246;
		case 88:
			return 2078792148;
		case 89:
			return 630308764;
		case 90:
			return 1398164246;
		case 91:
			return 2002140369;
		case 92:
			return -1777144780;
		case 93:
			return -1098645728;
		case 94:
			return 640330073;
		case 95:
			return -1330378740;
		case 96:
			return -71551190;
		case 97:
			return 1248971179;
		case 98:
			return -2076515520;
		case 99:
			return 1872332830;
		case 100:
			return -326224139;
		case 101:
			return -2062348046;
		case 102:
			return -1924130593;
		case 103:
			return -29468993;
		case 104:
			return 669386338;
		case 105:
			return -479797100;
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

void func_505(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1139381->f_3876.f_2[func_506(iParam0, 1)] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_806(iParam0);
	}
	Global_1139381->f_3876.f_2[func_506(iParam0, 1)] = bParam1;
}

int func_506(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case -2076515520:
			return 98;
		case -2062348046:
			return 101;
		case -1983943039:
			return 62;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 68;
		case -1924130593:
			return 102;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 92;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 67;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 59;
		case -1376314322:
			return 49;
		case -1330378740:
			return 95;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 93;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 74;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 82;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 105;
		case -469672732:
			return 70;
		case -379874384:
			return 79;
		case -355092128:
			return 75;
		case -326224139:
			return 100;
		case -210274020:
			return 35;
		case -162385832:
			return 73;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 77;
		case -71551190:
			return 96;
		case -32613857:
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case 5611246:
			return 87;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 61;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 69;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 89;
		case 633501950:
			return 36;
		case 640330073:
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case 905156700:
			return 60;
		case 941437279:
			return 72;
		case 946732137:
			return 76;
		case 1232224440:
			return 83;
		case 1248971179:
			return 97;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 78;
		case 1398164246:
			return 90;
		case 1427070667:
			return 81;
		case 1571096148:
			return 54;
		case 1623086000:
			return 65;
		case 1717813521:
			return 71;
		case 1723535349:
			return 58;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 99;
		case 1889309476:
			return 84;
		case 1898201469:
			return 40;
		case 1918774327:
			return 85;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 91;
		case 2018657739:
			return 80;
		case 2021695109:
			return 63;
		case 2078792148:
			return 88;
		case 2108116481:
			return 19;
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

int func_507(struct<2> Param0)
{
	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_74(Param0, func_807(iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_508(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= 32)
	{
		return false;
	}
	return true;
}

int func_509(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3;
}

bool func_510(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_511(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3.f_1;
}

bool func_512(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

int func_513(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3.f_3;
}

int func_514(int iParam0)
{
	return (*Global_1118808)[iParam0]->f_1;
}

int func_515(int iParam0)
{
	return Global_1118808[iParam0];
}

bool func_516()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_517(int iParam0, int iParam1, struct<2> Param2, int iParam4)
{
	if (!Global_1109804->f_18)
	{
		return;
	}
	if (!func_73(Param2))
	{
		return;
	}
	if (!func_510(iParam0))
	{
		return;
	}
	if (!func_512(iParam1))
	{
		return;
	}
	if (!func_808(iParam4))
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
	Var0.f_9 = iParam4;
	Var0.f_10 = player_id();
	Var0.f_4 = 1;
	func_457(&Var0);
}

int func_518()
{
	return &Global_1902818;
}

void func_519(int iParam0, int iParam1)
{
	Var0 = { func_810(-1919535953, func_809(iParam0)) };
	func_811(Var0, iParam1);
}

void func_520(int iParam0, int iParam1)
{
	Var0 = { func_810(817387112, func_809(iParam0)) };
	func_812(Var0, iParam1);
}

void func_521(int iParam0)
{
	if (func_292(&(Global_1109804->f_247.f_6), iParam0, 2))
	{
	}
}

void func_522(int iParam0)
{
	if (func_292((*Global_1130367)[player_id()], iParam0, 2))
	{
	}
}

void func_523(int iParam0)
{
	func_813(&(Global_1298378->f_156), iParam0);
}

void func_524(int iParam0, int iParam1)
{
	Var0 = { func_810(440364183, func_809(iParam0)) };
	func_811(Var0, iParam1);
}

void func_525(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 1822827642;
	}
	else
	{
		iVar0 = 1511238709;
	}
	Var1 = { func_810(iVar0, func_809(iParam0)) };
	func_814(Var1);
}

int func_526(int iParam0)
{
	return func_815(iParam0);
}

void func_527(var uParam0)
{
	if (!func_816(*uParam0))
	{
		return;
	}
	vVar3 = 10;
	vVar3.f_1.f_1 = -1;
	vVar3.f_1.f_2 = -1;
	vVar3.f_1.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar35.f_1 = -1;
	func_817(&vVar3);
	iVar0 = vVar3.f_31;
	while (iVar0 >= 0)
	{
		if (iVar0 == 0)
		{
		}
		else
		{
			if (iVar0 == 10)
			{
			}
			else
			{
				iVar1 = 0;
				if (!func_816(&(vVar3[(iVar0 - 1)])))
				{
				}
				else
				{
					vVar35.x = &vVar3[(iVar0 - 1)];
					vVar35.f_1 = (vVar3[(iVar0 - 1)])->f_2;
					vVar35.f_2 = func_818((vVar3[(iVar0 - 1)])->f_1);
					if (func_819(uParam0, &vVar35))
					{
						iVar2 = func_820((iVar0 - 1));
					}
					else
					{
						iVar1 = func_820((iVar0 - 1));
						func_821(iVar1, iVar0);
					}
				}
			}
			iVar0 = (iVar0 + -1);
		}
	}
	if (iVar2 == 0)
	{
		iVar2 = func_822(uParam0);
		if (iVar2 == 0)
		{
			return;
		}
	}
	func_821(iVar2, 0);
}

void func_528(int iParam0, struct<2> Param1, bool bParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	iVar0 = func_240(iParam0);
	iVar2 = func_823();
	iVar3 = func_154(Param1);
	iVar5 = func_526(iVar0);
	if (bParam3)
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = 1;
	}
	switch (iVar5)
	{
		case 15:
			if (func_824(iParam0, 4))
			{
				iVar4 = 1;
			}
			else
			{
				iVar4 = 0;
			}
			break;
		default:
			iVar4 = 0;
			break;
	}
	if (!func_824(iParam0, 8))
	{
		iVar2 = 0;
	}
	func_825(iVar0, iVar1, &uParam4, iVar3, iVar2, iVar4);
	if (func_824(iParam0, 8))
	{
		if (iVar2 != 0)
		{
			func_826(iParam0);
			func_827(iParam0);
		}
	}
}

int func_529(int iParam0)
{
	switch (func_514(iParam0))
	{
		case -323664079:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_530(int iParam0, int iParam1)
{
	Global_1109804->f_260.f_5[iParam0] = (&Global_1109804->f_260.f_5[iParam0] + iParam1);
}

void func_531(int iParam0)
{
	if (Global_1194053->f_440 != 2)
	{
		return;
	}
	if (Global_1194053->f_440.f_1 != 0)
	{
		return;
	}
	Global_1194053->f_440.f_1 = iParam0;
	_0xc584ff658b2e55da(iParam0);
}

void func_532(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 1822827642;
		iVar1 = func_828(iParam0);
	}
	else
	{
		iVar0 = 1511238709;
		iVar1 = func_829(iParam0);
	}
	Var2 = { func_810(iVar0, iVar1) };
	func_814(Var2);
}

void func_533()
{
	func_830(4);
	func_831(1);
}

bool func_534(int iParam0, int iParam1)
{
	return ((*Global_1128574)[iParam0]->f_34 && iParam1) != 0;
}

void func_535(int iParam0)
{
	iVar0 = player_id();
	(*Global_1128574)[iVar0]->f_34 = ((*Global_1128574)[iVar0]->f_34 || iParam0);
}

struct<2> func_536(int iParam0)
{
	return Global_1210161->f_1[iParam0]->f_4;
}

bool func_537(struct<2> Param0)
{
	iVar0 = func_832(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_538(struct<2> Param0)
{
	iVar0 = func_832(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_539(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

void func_540(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_73(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_538(Param0) && !func_537(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_67(Param0) == 0)
	{
	}
	if ((bParam3 == 0 || bParam3 == 1) || bParam3 == 4)
	{
		if (func_832(Param0) == 3)
		{
			func_833(1, -1706799532);
		}
		else if (func_832(Param0) == 4)
		{
			func_833(0, -1706799532);
		}
	}
	if ((func_832(Param0) == 3 || func_832(Param0) == 1) || ((bParam5 && func_832(Param0) == 4) && _0x01f4d242765c6b24(func_67(Param0))))
	{
		if (bParam3 != -1)
		{
			func_834(Param0, bParam3, bParam4, 255, 0);
		}
		else
		{
			func_834(Param0, 2, bParam4, 255, 0);
		}
	}
	func_835(Param0, 0);
	if (func_74(func_836(0), Param0))
	{
		func_837(1);
		func_838(0);
		func_839(0);
		func_840(1);
	}
	func_841(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_842(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_541(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_539(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_542(int iParam0, int iParam1)
{
	Var0 = { func_810(-1808811965, func_809(iParam0)) };
	func_843(Var0, iParam1);
}

void func_543(int iParam0, int iParam1)
{
	Var0 = { func_810(-746839750, func_809(iParam0)) };
	func_844(Var0, iParam1);
}

void func_544(int iParam0, int iParam1)
{
	Var0 = { func_810(829565093, func_809(iParam0)) };
	func_845(Var0, iParam1);
}

void func_545(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (bParam2)
		{
			iVar0 = 622623048;
		}
		else
		{
			iVar0 = 123615871;
		}
	}
	else if (bParam2)
	{
		iVar0 = -1892463704;
	}
	else
	{
		iVar0 = 1374282888;
	}
	Var1 = { func_810(iVar0, func_809(iParam0)) };
	func_814(Var1);
}

void func_546(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		return;
	}
	Var0 = { func_810(741274143, func_809(iParam0)) };
	if (bParam2)
	{
		func_814(Var0);
	}
	else
	{
		func_846(Var0, 0);
	}
}

void func_547(int iParam0, bool bParam1, bool bParam2, struct<2> Param3, bool bParam5, bool bParam6, bool bParam7)
{
	Var0 = -1;
	vVar2 = 493038497;
	vVar2.f_2 = 255;
	Var0 = func_240(iParam0);
	Var0.f_1 = func_154(Param3);
	vVar2.f_2 = bParam7;
	if (bParam1)
	{
		vVar2.f_1 = 2;
	}
	else
	{
		vVar2.f_1 = 1;
	}
	iVar8 = func_526(Var0);
	iVar6 = func_242(Var0);
	iVar5 = 0;
	switch (iVar8)
	{
		case 0:
			if (bParam2)
			{
				vVar2.x = -1365731393;
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
		case 11:
			if (bParam2)
			{
				switch (iVar6)
				{
					case -531996999:
						vVar2.x = -1365731393;
						func_847(256);
						break;
					case -1562099170:
						vVar2.x = -1365731393;
						func_847(256);
						break;
					case -1318406457:
						if (func_824(iParam0, 2))
						{
							vVar2.x = -406386912;
						}
						else
						{
							vVar2.x = -356110550;
						}
						break;
					default:
						vVar2.x = -1365731393;
						break;
				}
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
		case 7:
			if (bParam2)
			{
				iVar7 = bParam5->f_2;
				switch (iVar7)
				{
					case 0:
						vVar2.x = -508253498;
						break;
					case 1:
						vVar2.x = 566295171;
						break;
					case 2:
						vVar2.x = -1881397389;
						break;
					default:
						vVar2.x = -1365731393;
						break;
				}
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
		case 15:
			if (bParam2)
			{
				if (func_824(iParam0, 4))
				{
					vVar2.x = 1759419243;
				}
				else
				{
					vVar2.x = -1365731393;
				}
			}
			else if (func_824(iParam0, 4))
			{
				vVar2.x = 475709606;
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
		case 18:
			if (bParam2)
			{
				if (func_824(iParam0, 16))
				{
					if (bParam6)
					{
						vVar2.x = 1759419243;
					}
					else
					{
						vVar2.x = 2062237572;
					}
				}
				else
				{
					vVar2.x = -1365731393;
				}
			}
			else
			{
				vVar2.x = 1923632299;
			}
			iVar5 = func_823();
			break;
		default:
			if (bParam2)
			{
				vVar2.x = -1365731393;
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
	}
	func_848(&Var0, &vVar2, bParam5, iVar5);
}

void func_548(int iParam0, int iParam1, int iParam2, struct<2> Param3)
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
	_0x31010318ba9897ac(&uVar31, player_id());
	Var0.f_10 = player_id();
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = _0x901e0dc25080c8b9(player_id());
	Var0.f_4 = 7;
	Var0.f_16 = iParam2;
	Var0.f_7 = { Param3 };
	func_456(&Var0, uVar31);
}

void func_549(bool bParam0)
{
	if (Global_1194053->f_440 != 2)
	{
		return;
	}
	if (Global_1194053->f_440.f_1 == 0)
	{
		return;
	}
	Global_1194053->f_440.f_1 = 0;
	_0xc684ff658b2e55da(bParam0);
}

void func_550(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		iVar0 = -1892463704;
	}
	else
	{
		iVar0 = 1374282888;
	}
	if (bParam1)
	{
		iVar1 = func_828(iParam0);
	}
	else
	{
		iVar1 = func_829(iParam0);
	}
	Var2 = { func_810(iVar0, iVar1) };
	func_814(Var2);
}

void func_551(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && network_is_player_active(player_id()))
	{
		iVar0 = _0x901e0dc25080c8b9(player_id());
		if (_0x0f99f6436528a089(iVar0) && _0x149a2751ab66ac02(iVar0) >= 2)
		{
			func_849(17, 1);
		}
	}
	func_850(4);
	func_831(1);
	func_851(60);
	if (_0x3cf46f55c6585590())
	{
	}
	else if (_0x1840f3b30ed0105f(-1706799532))
	{
	}
	func_555(1);
	func_555(2);
}

void func_552(int iParam0)
{
	func_852(iParam0);
	func_853(iParam0, get_game_timer());
}

void func_553(int iParam0)
{
	Global_1109804->f_21.f_37.f_1 = iParam0;
}

void func_554(int iParam0)
{
	Global_1109804->f_21.f_37 = iParam0;
}

void func_555(int iParam0)
{
	(*Global_1128574)[player_id()]->f_48 = ((*Global_1128574)[player_id()]->f_48 - ((*Global_1128574)[player_id()]->f_48 && iParam0));
}

void func_556(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	clear_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_557(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_558(int iParam0)
{
	return func_854(iParam0);
}

var func_559(int iParam0)
{
	return &(Global_1109804->f_21.f_2.f_1[iParam0]);
}

bool func_560()
{
	if (func_65() != 0)
	{
		return true;
	}
	if (!_unlock_is_unlocked(-1461907237))
	{
		return true;
	}
	if (Global_1139381->f_3876.f_1 & 2 != 0)
	{
		return true;
	}
	if (Global_1139381->f_3876.f_1 & 4 != 0)
	{
		return true;
	}
	if (!has_network_time_started())
	{
		return true;
	}
	return false;
}

void func_561(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 7, 5, &uParam1);
}

int func_562()
{
	return Global_1051252->f_12;
}

char* func_563()
{
	return "unnamed";
}

int func_564(int iParam0)
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

bool func_565(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_417(36, iParam0);
}

int func_566(int iParam0)
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

bool func_567(int iParam0)
{
	if (func_855(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_856(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

char* func_568(int iParam0)
{
	if (func_47(Local_300[Local_557.f_1008], 4))
	{
		if (Local_557.f_20.f_16 == 1862763509)
		{
			return "";
		}
		return _create_var_string(10, "NET_AS_UPDATE_PLAYER_KILLED", func_857(get_player_name(iParam0), -5208416));
	}
	return _create_var_string(10, "NET_AS_UPDATE_PLAYER_KILLED", func_857(get_player_name(iParam0), -963477619));
}

void func_569(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	Local_557.f_584.f_331 = func_858(sParam0, 1105014447, -2, 0, 0, 0, 1);
}

char* func_570(int iParam0)
{
	if (!func_859(iParam0))
	{
		return "NET_AS_UPDATE_TARGET_PLAYER_DISCONNECTED_GEN";
	}
	if (func_47(Local_300[Local_557.f_1008], 4))
	{
		return _create_var_string(10, "NET_AS_UPDATE_TARGET_PLAYER_DISCONNECTED", func_857(func_860(iParam0), -5208416));
	}
	return _create_var_string(10, "NET_AS_UPDATE_TARGET_PLAYER_DISCONNECTED", func_857(func_860(iParam0), -963477619));
}

void func_571(int iParam0)
{
	if (does_pickup_exist(&(Local_15.f_217[iParam0])) && network_has_control_of_pickup(&(Local_15.f_217[iParam0])))
	{
		remove_pickup(&(Local_15.f_217[iParam0]));
	}
	if (!_0x7907969497ea92f5(Local_557.f_577) || !_0x603ac35fd4602c76(Local_557.f_577))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0]->f_4 != 21)
		{
		}
		else if (!network_has_control_of_network_id(&(Local_15.f_2[iVar0])))
		{
		}
		else if (!func_52(iVar0, &iVar3, 1, 0))
		{
		}
		else if (!func_861(iVar0, &iVar1, &iVar2) || !func_153(iVar1, 0))
		{
		}
		else
		{
			if ((func_176(iVar0, 268435456) && func_176(iVar0, 2)) && func_153(iVar2, 0))
			{
				iVar1 = iVar2;
			}
			if (iVar1 != iParam0)
			{
			}
			else if (!func_862(iParam0, &iVar4))
			{
			}
			else
			{
				func_863(iVar3, iVar4, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				if (!func_176(iVar0, 4096))
				{
					func_864(iVar0, 0);
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_572(int iParam0, int iParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_461(iParam0, 1);
	switch (iParam1)
	{
		case 2:
		case 3:
		case 6:
			func_461(iParam0, 16777216);
			break;
	}
	if (func_55(Local_15.f_2[iParam0]->f_2) && ((Local_557.f_20.f_22[iParam0]->f_11 == -503562496 || Local_557.f_20.f_22[iParam0]->f_11 == 1828125802) || Local_557.f_20.f_22[iParam0]->f_11 == -1978665515))
	{
		vVar0 = { func_787(iParam0) };
		vVar3 = { func_865(iParam0) };
		if (func_452(vVar0))
		{
			func_461(iParam0, 2048);
		}
		else if (((!func_452(vVar3) && !func_452(vVar0)) && func_866(vVar0, 120f, &uVar6, &uVar9, &fVar7)) && (!func_866(vVar3, 120f, &uVar6, &uVar9, &fVar8) || fVar8 > fVar7))
		{
			func_461(iParam0, 2);
		}
	}
	Local_15.f_2[iParam0]->f_7 = get_network_time_accurate();
	if (!func_59(1024) && &Local_557.f_20.f_22[iParam0] != 1824637041)
	{
		func_100(1024);
		func_867(iParam1);
	}
	if (func_52(iParam0, &iVar12, 1, 0) && is_ped_human(iVar12))
	{
		func_868(iParam0, iVar12, 4, 8, 1, 0, 0, iParam1);
	}
}

void func_573(int iParam0, int iParam1)
{
	Local_15.f_234[iParam0]->f_1 = iParam1;
}

bool func_574(int iParam0)
{
	return _0x8f4f050054005c27(&(Local_15.f_253), iParam0);
}

void func_575(int iParam0)
{
	_0xe84aac1b22a73e99(&(Local_15.f_253), iParam0);
}

void func_576(int iParam0, int iParam1)
{
	func_266(&(Local_15.f_217[iParam0]->f_1), iParam1);
}

int func_577(int iParam0)
{
	return &(Global_1107216->f_33[iParam0]);
}

bool func_578(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	Var0.f_1 = -1;
	_copy_memory(&Var0, bParam2, 4);
	return func_869(iParam0, iParam1, &Var0, uParam3);
}

int func_579(var uParam0, int iParam1, int iParam2)
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

int func_580(int iParam0, int iParam1, int iParam2)
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

bool func_581(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = 1970643719;
		return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_582(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = -1251795501;
		return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_583(struct<5> Param0)
{
	if (func_345(Param0, -1272790307, &iVar0, 0) && Local_15.f_278 < iVar0)
	{
		return false;
	}
	if (func_345(Param0, 735506410, &iVar1, 0) && Local_15.f_278 > iVar1)
	{
		return false;
	}
	return true;
}

void func_584(int iParam0, struct<5> Param1, int iParam6, int iParam7, int iParam8)
{
	if (func_118(iParam6))
	{
		func_870(&Param1, iParam0, -1284309372, 1, 1);
	}
	if (iParam8 == 1824637041 && _is_this_model_a_horse(iParam7))
	{
		func_870(&Param1, iParam0, -852511194, 32, 1);
	}
	if (func_345(Param1, 561062234, &uVar0, 0))
	{
		func_177(iParam0, 4096);
	}
	func_870(&Param1, iParam0, -492382713, 8, 0);
	func_870(&Param1, iParam0, -223083781, 64, 0);
	func_870(&Param1, iParam0, 1031590257, 16, 0);
	func_870(&Param1, iParam0, 2102445471, 65536, 0);
	func_870(&Param1, iParam0, 892963390, 32768, 0);
	func_870(&Param1, iParam0, 1518210740, 16777216, 0);
}

bool func_585(int iParam0, var uParam1)
{
	if (func_119(uParam1) && func_120(uParam1, -1443980387, iParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_586(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10)
{
	switch (iParam10)
	{
		case 953812642:
			*uParam0 = _create_volume_sphere(vParam1, vParam4, vParam7);
			break;
		case 883073064:
			*uParam0 = _create_volume_cylinder(vParam1, vParam4, vParam7);
			break;
		default:
			*uParam0 = _create_volume_box(vParam1, vParam4, vParam7);
			break;
	}
	if (!_does_volume_exist(*uParam0))
	{
		return false;
	}
	return true;
}

int func_587(int iParam0)
{
	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1443980387, iParam0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_588(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = -67473273;
		return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
	}
	return false;
}

void func_589(int iParam0, int iParam1)
{
	func_266(&(Local_557.f_20.f_422[iParam0]->f_1), iParam1);
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case -907098195:
			return 1;
		case -1453140709:
			return 2;
		case 331632914:
			return 4;
		case 1152024837:
			return 8;
		case 1960114521:
			return 16;
		case -259577388:
			return 32;
		default:
			break;
	}
	return 2;
}

bool func_591(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = 1077944842;
		return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
	}
	return false;
}

void func_592(int iParam0, int iParam1)
{
	func_266(Local_557.f_20.f_533[iParam0], iParam1);
}

bool func_593(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = 485523583;
		return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
	}
	return false;
}

int func_594(int iParam0)
{
	iVar5 = 0;
	if (func_595(iParam0, &Var0) && func_120(&Var0, 732905427, 0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_595(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -537276532;
		uParam1->f_3 = iParam0;
		return _datafile_get_data_node_index(&(uParam1->f_1), uParam1);
	}
	return false;
}

void func_596(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10)
{
	switch (iParam10)
	{
		case 953812642:
			_0x5b7d7bf36d2de18b(*uParam0, vParam1, vParam4, vParam7);
			break;
		case 883073064:
			_0xbce668aaf83608be(*uParam0, vParam1, vParam4, vParam7);
			break;
		default:
			_0x39816f6f94f385ad(*uParam0, vParam1, vParam4, vParam7);
			break;
	}
}

bool func_597(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = 1520538369;
		return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_598(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -480788145;
		uParam1->f_3 = iParam0;
		return _datafile_get_data_node_index(&(uParam1->f_1), uParam1);
	}
	return false;
}

int func_599(int iParam0)
{
	iVar5 = 0;
	if ((func_119(&Var0) && func_120(&Var0, -424701201, iParam0, 0)) && func_120(&Var0, 732905427, 0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_600(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = -1746234201;
		return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_601(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = -1318044545;
		return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
	}
	return false;
}

Vector3 func_602(int iParam0)
{
	if (func_871(iParam0, &Var0))
	{
		func_347(Var0, -1584591647, &vVar5, 0);
	}
	return vVar5;
}

Vector3 func_603(int iParam0)
{
	if (func_871(iParam0, &Var0))
	{
		func_347(Var0, -865441380, &vVar5, 0);
	}
	return vVar5;
}

int func_604(int iParam0)
{
	iVar5 = 0;
	if ((func_119(&Var0) && func_120(&Var0, 1606032220, iParam0, 0)) && func_120(&Var0, 732905427, 0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_605(int iParam0)
{
	iVar5 = 0;
	if ((func_119(&Var0) && func_120(&Var0, -375509478, iParam0, 0)) && func_120(&Var0, 732905427, 0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	return iVar5;
}

char* func_606()
{
	return "scr_campfire_distance_smoke_script";
}

int func_607(int iParam0)
{
	if (func_872(iParam0, &Var0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

bool func_608(int iParam0)
{
	if (func_872(iParam0, &Var0))
	{
		func_346(Var0, -1045199329, &uVar5, 0);
	}
	return uVar5;
}

void func_609(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = { 0f, 0f, 0f };
	uParam2->f_4 = { 0f, 0f, 0f };
	uParam2->f_3 = 0;
	uParam2->f_7 = 0;
	uParam2->f_8 = 0;
	if (func_873(iParam0, iParam1, &Var0))
	{
		func_347(Var0, -81907729, uParam2, 1);
		func_347(Var0, -435940167, &(uParam2->f_4), 0);
		func_117(Var0, 229174115, &uVar5, 0);
		func_345(Var0, 1200880489, &(uParam2->f_7), 0);
		func_345(Var0, 1385823714, &(uParam2->f_8), 0);
	}
	uParam2->f_3 = uVar5;
}

char* func_610(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1452745259:
			return "WORLD_HUMAN_GUARD_LEAN_WALL";
		case -258459266:
			return "WORLD_HUMAN_GUARD_SCOUT";
		case 1978275899:
			return "WORLD_HUMAN_GUARD_MILITARY";
		case -22664287:
			return "WORLD_HUMAN_SMOKE";
		case -1543059912:
			return "WORLD_HUMAN_SMOKE_CIGAR";
		case 1065660521:
			return "WORLD_HUMAN_SMOKE_INTERACTION";
		case -1032721003:
			return "WORLD_HUMAN_SMOKE_NERVOUS_STRESSED";
		case -1855605920:
			return "WORLD_HUMAN_LEAN_BACK_RAILING";
		case 65512451:
			return "WORLD_HUMAN_DRUNK_BRACE_WALL";
		case 421625586:
			return "WORLD_HUMAN_LEAN_BACK_WALL";
		case -359184052:
			return "WORLD_HUMAN_LEAN_BACK_WALL_DRINKING";
		case -251168298:
			return "WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS";
		case -1571924583:
			return "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING";
		case -781832595:
			return "WORLD_HUMAN_LEAN_RAILING";
		case -1978373710:
			return "WORLD_HUMAN_LEAN_RAILING_NO_PROPS";
		case -861851926:
			return "WORLD_HUMAN_LEAN_RAILING_SMOKING";
		case -178592996:
			return "WORLD_HUMAN_LEAN_FENCE_FWD_CHECK_OUT_LIVESTOCK";
		case 2087366558:
			return "WORLD_HUMAN_STAND_WAITING";
		case -1124614608:
			return "WORLD_HUMAN_WAITING_IMPATIENT";
		case 830847823:
			return "WORLD_HUMAN_STARE_STOIC";
		case 837932401:
			return "WORLD_HUMAN_BROOM_WORKING";
		case -1982207864:
			return "WORLD_HUMAN_SHOP_BROWSE";
		case -186608947:
			return "WORLD_HUMAN_BUCKET_POUR_LOW";
		case 1299323850:
			return "WORLD_HUMAN_FIRE_TEND_KNEEL";
		case 1455795772:
			return "WORLD_HUMAN_PEE";
		case 1546182539:
			return "WORLD_HUMAN_CROUCH_INSPECT";
		case 1904561997:
			return "WORLD_HUMAN_FEED_CHICKEN";
		case -439112356:
			return "WORLD_HUMAN_INSPECT";
		case -1043454001:
			return "WORLD_HUMAN_SIT_FALL_ASLEEP";
		case -1569277059:
			return "WORLD_HUMAN_DRINKING_DRUNK";
		case -1722639382:
			return "WORLD_HUMAN_PITCH_HAY_SCOOP";
		case -1426662425:
			return "PROP_HUMAN_SEAT_CHAIR";
		case 1191281243:
			return "WORLD_HUMAN_HAMMER_TABLE";
		case -472287783:
			return "PROP_HUMAN_REPAIR_WAGON_WHEEL_ON_LARGE";
		case 1802462470:
			return "WORLD_HUMAN_FARMER_RAKE";
		case 1984495656:
			return "WORLD_HUMAN_FARMER_WEEDING";
		case 1838920301:
			return "WORLD_HUMAN_KNOCK_DOOR";
		case 587350641:
			return "WORLD_HUMAN_BUTCHER_RABBIT";
		case -326901185:
			return "WORLD_HUMAN_STAND_FISHING";
		case -1122379099:
			return "WORLD_HUMAN_DRINKING";
		case 1661247565:
			return "WORLD_HUMAN_PICKAXE_WALL";
		case 1750783925:
			return "WORLD_HUMAN_CLIPBOARD";
		case -98992470:
			return "WORLD_HUMAN_POCKET_MIRROR";
		case -1273821262:
			return "WORLD_HUMAN_WRITE_NOTEBOOK";
		case 1904532698:
			return "WORLD_HUMAN_STERNGUY_IDLES";
		default:
			break;
	}
	return "";
}

int func_611(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = player_id();
	}
	iVar0 = func_874(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_513(iVar0);
}

void func_612(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case -1029285341:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -1102018457);
					break;
			}
			break;
		case 622225714:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 1428825552);
					break;
			}
			break;
		case 404851220:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 1968287849);
					break;
			}
			break;
		case -104583860:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 2039472637);
					break;
			}
			break;
	}
}

void func_613(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bVar0 = iParam4 <= true;
	if (bParam3)
	{
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_875(iParam0, -57805484);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_875(iParam0, 512977886);
					break;
			}
		}
	}
	else
	{
		*bParam1 = 1;
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_875(iParam0, -1570113901);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_875(iParam0, -1876025097);
					break;
			}
		}
	}
}

void func_614(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_875(iParam0, func_876(iParam2));
			break;
	}
}

int func_615(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Var4.f_1 = 10;
	return func_877(iParam0, &uVar0, iParam1, &Var4, iParam2, iParam3, iParam4, bParam5);
}

float func_616(float fParam0, float fParam1, float fParam2)
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

void func_617(int iParam0, int iParam1, bool bParam2, int iParam3, float fParam4)
{
	iVar0 = floor(fParam4);
	func_580(iVar0, 0, 30);
	if (iVar0 <= 0)
	{
		switch (iParam3)
		{
			case 0:
				func_875(iParam0, 1628925866);
				break;
			case 1:
				*bParam2 = 1;
				break;
		}
		return;
	}
	switch (iVar0)
	{
		case 1:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1295140836);
					break;
				case 1:
					*bParam2 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1526522745);
					break;
				case 1:
					*bParam2 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1901367336);
					break;
				case 1:
					*iParam1 = 1706540001;
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -2012562028);
					break;
				case 1:
					*iParam1 = 1706540001;
					break;
			}
			break;
		case 5:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1811294830);
					break;
				case 1:
					*iParam1 = 1706540001;
					break;
			}
			break;
		case 6:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1580699377);
					break;
				case 1:
					*iParam1 = -398376814;
					break;
			}
			break;
		case 7:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -529994165);
					break;
				case 1:
					*iParam1 = -398376814;
					break;
			}
			break;
		case 8:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1356198962);
					break;
				case 1:
					*iParam1 = -398376814;
					break;
			}
			break;
		case 9:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 592638986);
					break;
				case 1:
					*iParam1 = -1203216227;
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -71665830);
					break;
				case 1:
					*iParam1 = -1203216227;
					break;
			}
			break;
		case 11:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -369634347);
					break;
				case 1:
					*iParam1 = -1203216227;
					break;
			}
			break;
		case 12:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 523648593);
					break;
				case 1:
					*iParam1 = 329552932;
					break;
			}
			break;
		case 13:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 224041626);
					break;
				case 1:
					*iParam1 = 329552932;
					break;
			}
			break;
		case 14:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1119225168);
					break;
				case 1:
					*iParam1 = 329552932;
					break;
			}
			break;
		case 15:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 820076967);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 16:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1790072136);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 17:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1490530707);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 18:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1908007825);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 2085779592);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 20:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -169152669);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 21:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -544685409);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 22:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -649710054);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 23:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1023735420);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 24:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1126990539);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 25:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1501736823);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		case 26:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1614824464);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		case 27:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1845287019);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		case 28:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1073415046);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		case 29:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1906960099);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		default:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -2023453588);
					break;
				case 1:
					*iParam1 = -1520125470;
					break;
			}
			break;
	}
}

void func_618(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	fVar0 = ((to_float(iParam4) / to_float(iParam5)) * 100f);
	iVar1 = ceil((fVar0 / 5f)) * 5;
	switch (iParam3)
	{
		case -1516819610:
			switch (iParam2)
			{
				case 0:
					if (iVar1 <= 0)
					{
						func_875(iParam0, 102861655);
					}
					switch (iVar1)
					{
						case 5:
							func_875(iParam0, 1606837351);
							break;
						case 10:
							func_875(iParam0, 1993982606);
							break;
						case 15:
							func_875(iParam0, -1120317616);
							break;
						case 20:
							func_875(iParam0, 1497203110);
							break;
						case 25:
							func_875(iParam0, 1461747036);
							break;
						case 30:
							func_875(iParam0, 1705384279);
							break;
						case 35:
							func_875(iParam0, 587764757);
							break;
						case 40:
							func_875(iParam0, 496010113);
							break;
						case 45:
							func_875(iParam0, -8927412);
							break;
						case 50:
							func_875(iParam0, -1913265366);
							break;
						case 55:
							func_875(iParam0, -1185662490);
							break;
						case 60:
							func_875(iParam0, 1041027017);
							break;
						case 65:
							func_875(iParam0, -1593666129);
							break;
						case 70:
							func_875(iParam0, 1825778741);
							break;
						case 75:
							func_875(iParam0, -1544873376);
							break;
						case 80:
							func_875(iParam0, 1557926776);
							break;
						case 85:
							func_875(iParam0, 1088477734);
							break;
						case 90:
							func_875(iParam0, 1557926776);
							break;
						case 95:
							func_875(iParam0, 956550028);
							break;
						default:
							func_875(iParam0, -781986478);
							break;
					}
					break;
				case 1:
					if (iVar1 <= 0)
					{
						*bParam1 = 1;
					}
					break;
			}
			break;
		case 1891766540:
			if (bParam6)
			{
				switch (iParam2)
				{
					case 0:
						func_875(iParam0, 413085053);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_875(iParam0, 102861655);
						break;
					case 1:
						*bParam1 = 1;
						break;
				}
			}
			break;
	}
}

void func_619(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case -1442248781:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -73489229);
					break;
			}
			break;
		case 1038512660:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 1981105632);
					break;
			}
			break;
	}
}

void func_620(int iParam0, int iParam1, struct<2> Param2)
{
	iVar0 = func_507(Param2);
	if (!func_508(iVar0))
	{
		return;
	}
	iVar1 = func_509(iVar0);
	if (func_510(iVar1))
	{
		iVar2 = func_878(func_515(iVar1));
	}
	else
	{
		return;
	}
	if (iVar2 <= 0)
	{
		switch (iParam1)
		{
			case 0:
				func_875(iParam0, 1900669220);
				break;
		}
	}
	switch (iVar2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 402273926);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -1111096805);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -738447737);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 704666254);
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 963311971);
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -1751075375);
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -1527623564);
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -465252584);
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -225219659);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 2108535411);
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -1845896441);
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 1961468135);
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 1723008122);
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -648222260);
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -921745103);
					break;
			}
			break;
	}
}

int func_621(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	Var0.f_1 = 10;
	return func_877(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

void func_622(int iParam0)
{
	if ((Local_15.f_2[iParam0]->f_2 == 1583594396 || Local_15.f_2[iParam0]->f_2 == 0) || !func_479(iParam0, 1, func_478(Local_15.f_2[iParam0]->f_2)))
	{
		func_623(iParam0, 0);
		if (!func_176(iParam0, 67108864))
		{
			func_879(iParam0);
		}
	}
	if (Local_15.f_2[iParam0]->f_2 == 1583594396)
	{
		func_880(iParam0);
		if (((Local_15.f_2[iParam0]->f_2 == 1583594396 && Local_15.f_2[iParam0]->f_5 == player_id()) && func_176(iParam0, 67108864)) && func_176(iParam0, 134217728))
		{
			func_171(iParam0);
		}
	}
}

void func_623(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_718(iParam0, 255))
		{
			return;
		}
		func_881(iParam0);
	}
	else
	{
		if (!func_718(iParam0, 255))
		{
			return;
		}
		func_882(iParam0);
		func_883(iParam0, 2);
		if (func_176(iParam0, 1024))
		{
			func_883(iParam0, 1);
		}
	}
}

void func_624(int iParam0, int iParam1)
{
	if (!func_51(iParam0, 33554432))
	{
		if (func_55(Local_15.f_2[iParam0]->f_2) && func_51(iParam0, 16777216))
		{
			bVar0 = true;
		}
		if ((!bVar0 && is_ped_human(iParam1)) && !func_176(iParam0, 128))
		{
			_0xf63fa29d4a9aca86(iParam1, func_884(iParam1));
			_0xfca8fb9e15fa80d3(iParam1, get_hash_key(func_884(iParam1)));
		}
		func_177(iParam0, 33554432);
	}
	if (!func_51(iParam0, 8388608) && func_43(4))
	{
		if (func_55(Local_15.f_2[iParam0]->f_2) && func_51(iParam0, 16777216))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			iVar1 = func_885(iParam0, iParam1, 1);
			if (iVar1 != 0)
			{
				_0x7c32191d9fb2bdea(iVar1);
			}
		}
		if (Local_15.f_2[iParam0]->f_2 == -1574827255 && !bVar0)
		{
			_0xf63fa29d4a9aca86(iParam1, func_886());
			_0xfca8fb9e15fa80d3(iParam1, get_hash_key(func_886()));
		}
		else if (((!bVar0 && is_ped_human(iParam1)) && !func_176(iParam0, 4096)) && !func_176(iParam0, 128))
		{
			_0xf63fa29d4a9aca86(iParam1, func_887());
			_0xfca8fb9e15fa80d3(iParam1, get_hash_key(func_887()));
		}
		func_177(iParam0, 8388608);
	}
}

void func_625(int iParam0, int iParam1)
{
	if (!func_55(Local_15.f_2[iParam0]->f_2))
	{
		return;
	}
	if (!func_176(iParam0, 33554432) && Local_15.f_2[iParam0]->f_2 != -1574827255)
	{
		return;
	}
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return;
	}
	if (func_51(iParam0, 512) || func_51(iParam0, 1048576))
	{
		return;
	}
	if (func_176(iParam0, 33554432))
	{
		func_888(iParam1, 0);
		func_177(iParam0, 512);
	}
	else if (Local_15.f_2[iParam0]->f_2 == -1574827255)
	{
		func_889(iParam1);
		func_177(iParam0, 1048576);
	}
}

void func_626(int iParam0, int iParam1)
{
}

void func_627(int iParam0)
{
	if (func_51(iParam0, 16384))
	{
		return;
	}
	if (Local_557.f_20.f_22[iParam0]->f_10 != -519360492 && Local_557.f_20.f_22[iParam0]->f_10 != 917311522)
	{
		return;
	}
	if (!func_272(iParam0, &uVar0))
	{
		return;
	}
	request_waypoint_recording(func_110(&uVar0));
	if (!func_51(iParam0, 8192))
	{
		func_177(iParam0, 8192);
	}
	if (!get_is_waypoint_recording_loaded(func_110(&uVar0)))
	{
		return;
	}
	func_177(iParam0, 16384);
}

void func_628(int iParam0, int iParam1)
{
	if (func_176(iParam0, 1))
	{
		func_623(iParam0, 0);
		if (_0x2ba9d7bf629f920c(iParam1) != 80f && network_has_control_of_entity(iParam1))
		{
			set_ped_seeing_range(iParam1, 80f);
			set_ped_hearing_range(iParam1, 80f);
		}
		return;
	}
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return;
	}
	if (Local_15.f_2[iParam0]->f_2 == 1824637041)
	{
		return;
	}
	if (!func_43(2048))
	{
		if ((!func_176(iParam0, 8) && !func_176(iParam0, 1024)) && !func_176(iParam0, 8192))
		{
			func_623(iParam0, 0);
			return;
		}
	}
	if (!func_890(iParam0, iParam1, player_ped_id()))
	{
		func_623(iParam0, 0);
		return;
	}
	func_623(iParam0, 1);
}

void func_629(int iParam0, int iParam1)
{
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return;
	}
	if (func_176(iParam0, 1))
	{
		if (!func_891(iParam0, 16) && is_ped_fleeing(iParam1))
		{
			func_868(iParam0, iParam1, 5, 16, 1, 0, 0, 0);
		}
		if (Local_15.f_2[iParam0]->f_4 == 22)
		{
			func_868(iParam0, iParam1, 6, 32, 1, 0, 0, 0);
		}
		return;
	}
	if (!func_892(iParam0))
	{
		return;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (func_176(iParam0, 8))
	{
		if (Local_557.f_1012 > 25000)
		{
			func_868(iParam0, iParam1, 3, 8, 1, 0, 0, 0);
		}
		else if (Local_557.f_1012 > 15000)
		{
			func_868(iParam0, iParam1, 2, 4, 1, 0, 0, 0);
		}
		else if (Local_557.f_1012 > 9000)
		{
			func_868(iParam0, iParam1, 1, 2, 1, 0, 0, 0);
		}
		else if (Local_557.f_1012 > 0)
		{
			func_868(iParam0, iParam1, 0, 1, 1, bVar1, 0, 0);
		}
	}
	else if (func_176(iParam0, 1024))
	{
		iVar2 = 8000;
		if (func_43(2048))
		{
			iVar2 = 4000;
			bVar1 = true;
		}
		if (Local_557.f_1013 > iVar2)
		{
			func_868(iParam0, iParam1, 3, 8, 1, 0, 0, 0);
		}
		else if (Local_557.f_1013 > 0)
		{
			func_868(iParam0, iParam1, 0, 1, 1, bVar1, 0, 0);
		}
	}
	else
	{
		iVar2 = 30000;
		if (func_43(2048))
		{
			iVar2 = 20000;
			bVar1 = true;
		}
		if (Local_557.f_1011 > 15000)
		{
			func_868(iParam0, iParam1, 2, 4, 1, 0, 0, 0);
		}
		else if (Local_557.f_1011 > 9000)
		{
			func_868(iParam0, iParam1, 1, 2, 1, 0, 0, 0);
		}
		else if (Local_557.f_1011 > 0)
		{
			func_868(iParam0, iParam1, 0, 1, 1, bVar1, 0, 0);
		}
	}
}

void func_630(int iParam0, int iParam1)
{
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return;
	}
	if (!func_892(iParam0))
	{
		return;
	}
	if (func_176(iParam0, 1))
	{
		return;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (func_176(iParam0, 8192))
	{
		iVar1 = _0xef2e6f870783369b(iParam1, 0);
		if (_does_volume_exist(iVar1) && func_893(iVar1, get_entity_coords(iVar0, true, false)))
		{
			func_174(5, iParam0, func_173(0, 8), -1);
			return;
		}
	}
	bVar4 = func_43(2048);
	if (func_176(iParam0, 8))
	{
		if (bVar4)
		{
			iVar2 = 15000;
		}
		else
		{
			iVar2 = 25000;
		}
		iVar3 = 4;
		if (Local_557.f_1012 < iVar2)
		{
			return;
		}
	}
	else if (func_176(iParam0, 1024))
	{
		if (bVar4)
		{
			iVar2 = 4000;
		}
		else
		{
			iVar2 = 8000;
		}
		iVar3 = 3;
		if (Local_557.f_1013 < iVar2)
		{
			return;
		}
	}
	else
	{
		return;
	}
	func_174(iVar3, iParam0, func_173(0, 8), -1);
}

void func_631(int iParam0, int iParam1)
{
	if (func_59(65536) && Local_15.f_2[iParam0]->f_2 == -1574827255)
	{
		set_ped_config_flag(iParam1, 277, !func_894(iParam0));
	}
	if (func_176(iParam0, 1) && !func_176(iParam0, 4096))
	{
		if (Local_15.f_2[iParam0]->f_2 == 1824637041)
		{
			return;
		}
		if (func_176(iParam0, 128))
		{
			if (get_ped_relationship_group_hash(iParam1) != Local_557.f_578.f_3)
			{
				if (func_51(iParam0, 2097152) || func_51(iParam0, 4194304))
				{
					clear_ped_tasks(iParam1, 1, 0);
				}
				set_ped_relationship_group_hash(iParam1, Local_557.f_578.f_3);
			}
		}
		else if (get_ped_relationship_group_hash(iParam1) != Local_557.f_578.f_1)
		{
			if (func_51(iParam0, 2097152) || func_51(iParam0, 4194304))
			{
				clear_ped_tasks(iParam1, 1, 0);
			}
			set_ped_relationship_group_hash(iParam1, Local_557.f_578.f_1);
		}
	}
	else if (func_55(Local_15.f_2[iParam0]->f_2) && func_51(iParam0, 2097152))
	{
		if (get_ped_relationship_group_hash(iParam1) != Local_557.f_578.f_4)
		{
			set_ped_relationship_group_hash(iParam1, Local_557.f_578.f_4);
		}
	}
	else if (func_55(Local_15.f_2[iParam0]->f_2) && func_51(iParam0, 4194304))
	{
		if (get_ped_relationship_group_hash(iParam1) != Local_557.f_578.f_5)
		{
			set_ped_relationship_group_hash(iParam1, Local_557.f_578.f_5);
		}
	}
	else if (func_176(iParam0, 128))
	{
		if (get_ped_relationship_group_hash(iParam1) != Local_557.f_578.f_2)
		{
			set_ped_relationship_group_hash(iParam1, Local_557.f_578.f_2);
		}
	}
	else if (get_ped_relationship_group_hash(iParam1) != Local_557.f_578)
	{
		set_ped_relationship_group_hash(iParam1, Local_557.f_578);
	}
}

void func_632(int iParam0)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (func_176(iParam0, 1))
	{
		if (is_ped_using_any_scenario(iVar0))
		{
			_0xeeed8fafec331a70(iVar0, get_entity_coords(iVar0, true, false), 1);
		}
	}
	switch (func_777(iParam0))
	{
		case 0:
			if ((func_51(iParam0, 1) && !func_782(iVar0, func_23(iParam0))) && !func_895(iVar0, 716706914))
			{
				func_896(iParam0, func_23(iParam0), 1, 1, 0);
			}
			break;
		case 1:
			func_897(iParam0, iVar0);
			break;
		case 2:
			func_898(iParam0, iVar0);
			break;
		case 5:
			func_899(iParam0, iVar0);
			break;
		case 3:
			func_900(iParam0, iVar0);
			break;
		case 4:
			func_901(iParam0, iVar0);
			break;
		case 12:
			func_902(iParam0, iVar0, 0);
			break;
		case 13:
			func_902(iParam0, iVar0, 1);
			break;
		case 6:
			func_903(iParam0, iVar0);
			break;
		case 7:
			func_904(iParam0, iVar0);
			break;
		case 8:
			func_905(iParam0, iVar0);
			break;
		case 9:
			func_906(iParam0, iVar0);
			break;
		case 10:
			func_907(iParam0, iVar0);
			break;
		case 11:
			func_908(iParam0, iVar0);
			break;
		case 14:
			func_909(iParam0, iVar0);
			break;
		case 15:
			func_910(iParam0, iVar0);
			break;
		case 16:
			func_911(iParam0, iVar0, 0);
			break;
		case 17:
			func_911(iParam0, iVar0, 1);
			break;
		case 18:
			func_912(iParam0, iVar0);
			break;
		case 19:
			func_904(iParam0, iVar0);
			break;
		case 20:
			func_908(iParam0, iVar0);
			break;
		case 21:
			func_913(iParam0, iVar0);
			break;
	}
}

void func_633(int iParam0)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	switch (func_777(iParam0))
	{
		case 0:
			if ((func_51(iParam0, 1) && !func_782(iVar0, func_23(iParam0))) && !func_895(iVar0, 716706914))
			{
				func_896(iParam0, func_23(iParam0), 1, 1, 0);
			}
			break;
		case 1:
			func_897(iParam0, iVar0);
			break;
		case 2:
			func_898(iParam0, iVar0);
			break;
		case 5:
			func_899(iParam0, iVar0);
			break;
		case 3:
			func_900(iParam0, iVar0);
			break;
		case 4:
			func_901(iParam0, iVar0);
			break;
		case 12:
			func_902(iParam0, iVar0, 0);
			break;
		case 13:
			func_902(iParam0, iVar0, 1);
			break;
		case 6:
			func_903(iParam0, iVar0);
			break;
		case 7:
			func_904(iParam0, iVar0);
			break;
		case 8:
			func_905(iParam0, iVar0);
			break;
		case 9:
			func_906(iParam0, iVar0);
			break;
		case 10:
			func_907(iParam0, iVar0);
			break;
		case 11:
			func_908(iParam0, iVar0);
			break;
		case 14:
			func_909(iParam0, iVar0);
			break;
		case 15:
			func_910(iParam0, iVar0);
			break;
		case 16:
			func_911(iParam0, iVar0, 0);
			break;
		case 17:
			func_911(iParam0, iVar0, 1);
			break;
		case 18:
			func_912(iParam0, iVar0);
			break;
		case 19:
			func_904(iParam0, iVar0);
			break;
		case 20:
			func_908(iParam0, iVar0);
			break;
		case 21:
			func_913(iParam0, iVar0);
			break;
	}
}

void func_634(int iParam0)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	switch (func_777(iParam0))
	{
		case 2:
			func_898(iParam0, iVar0);
			break;
		case 3:
			func_900(iParam0, iVar0);
			break;
		case 5:
			func_899(iParam0, iVar0);
			break;
		case 4:
			func_901(iParam0, iVar0);
			break;
		case 12:
			func_902(iParam0, iVar0, 0);
			break;
		case 13:
			func_902(iParam0, iVar0, 1);
			break;
		case 7:
			func_904(iParam0, iVar0);
			break;
		case 8:
			func_905(iParam0, iVar0);
			break;
		case 9:
			func_906(iParam0, iVar0);
			break;
		case 10:
			func_907(iParam0, iVar0);
			break;
		case 11:
			func_908(iParam0, iVar0);
			break;
		case 14:
			func_909(iParam0, iVar0);
			break;
		case 16:
			func_911(iParam0, iVar0, 0);
			break;
		case 18:
			func_912(iParam0, iVar0);
			break;
		case 19:
			func_904(iParam0, iVar0);
			break;
		case 20:
			func_908(iParam0, iVar0);
			break;
	}
}

void func_635(int iParam0)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (!func_791(iParam0, &iVar7, &iVar8))
	{
		return;
	}
	switch (func_777(iParam0))
	{
		case 22:
			set_ped_config_flag(iVar0, 168, true);
			set_blocking_of_non_temporary_events(iVar0, false);
			if (((Local_15.f_2[iParam0]->f_7 != 0 && is_ped_on_mount(iVar0)) && func_914(iVar7, iVar8, &iVar9)) && func_445(Local_15.f_2[iParam0]->f_7) > iVar9)
			{
				func_915(iParam0);
				return;
			}
			func_916(iParam0);
			break;
		case 23:
			if (!func_792(iVar7, iVar8, &vVar4))
			{
				return;
			}
			if (is_ped_on_mount(iVar0))
			{
				fVar10 = 2.5f;
			}
			else
			{
				fVar10 = 3f;
			}
			if (!func_917(iVar7, iVar8, &fVar11))
			{
				fVar11 = 40000f;
			}
			func_918(iParam0, vVar4, fVar10, fVar11, 1048576000, 0);
			break;
		case 24:
			vVar1 = { get_entity_coords(iVar0, false, false) };
			func_919(iParam0, vVar1, 150f, 0);
			break;
	}
}

void func_636(int iParam0, int iParam1)
{
	if (!func_51(iParam0, 2))
	{
		_0xbb1e41dd3d3c6250(iParam1, func_920(0), 0);
		_0xbb1e41dd3d3c6250(iParam1, func_920(9), 1);
		func_177(iParam0, 2);
	}
	else
	{
		if (func_176(iParam0, 1))
		{
			return;
		}
		if (func_921(iParam0))
		{
			return;
		}
		if (!func_922(iParam0, iParam1, 0) && !func_922(iParam0, iParam1, 1))
		{
			return;
		}
		func_923(iParam0, Local_300[Local_557.f_1008]);
	}
}

bool func_637(int iParam0, int iParam1)
{
	return get_time_difference(Local_15.f_2[iParam0]->f_7, get_network_time_accurate()) > iParam1;
}

int func_638()
{
	return Global_1102219->f_3672;
}

int func_639(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1158905413;
		case 1:
			return 358397622;
		case 2:
			return 65999835;
		case 3:
			return 814443795;
		case 4:
			return 519621102;
		case 5:
			return -1628223003;
		case 6:
			return 1278256225;
		case 7:
			return 2038628101;
		case 8:
			return 1742494648;
		case 9:
			return -1010166918;
		case 10:
			return 660170868;
		case 11:
			return -1278312096;
		case 12:
			return -509158128;
		case 13:
			return -226656579;
		case 14:
			return 2115868159;
		case 15:
			return 1495813101;
		case 16:
			return 1197385818;
		case 17:
			return 1015780020;
		case 18:
			return -1286733825;
		case 19:
			return -1670393277;
		case 20:
			return -415733461;
		case 21:
			return -1207924036;
		case 22:
			return 497702414;
		case 23:
			return 719188085;
		case 24:
			return 43753457;
		case 25:
			return 771290791;
		case 26:
			return 20356387;
		case 27:
			return 309149584;
		case 28:
			return 1613781781;
		case 29:
			return 1693607065;
		case 30:
			return 1132176120;
		case 31:
			return 869270437;
		default:
			break;
	}
	return 623901053;
}

void func_640(int iParam0)
{
	set_ped_reset_flag(get_player_ped(iParam0), 354, true);
	Global_1071686->f_21416.f_1[iParam0]->f_4 = get_frame_count();
}

bool func_641(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = player_id();
	}
	return (func_303(iParam0, 1) && !func_303(iParam0, 2));
}

bool func_642(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = player_id();
	}
	return func_303(iParam0, 2);
}

int func_643()
{
	return Global_1301323->f_150;
}

bool func_644(int iParam0)
{
	return (Global_1301323->f_288.f_2 && iParam0) != 0;
}

int func_645()
{
	return Global_1301323->f_288;
}

bool func_646()
{
	iVar0 = func_924();
	if (!_does_thread_exist(iVar0))
	{
		return false;
	}
	return is_thread_active(iVar0, false);
}

void func_647(int iParam0)
{
	Global_1301323->f_288 = iParam0;
}

void func_648(int iParam0)
{
	Global_1301323->f_288.f_1 = iParam0;
}

bool func_649()
{
	return Global_1109804->f_21.f_37;
}

int func_650()
{
	return Global_1109804->f_21.f_37.f_1;
}

void func_651(int iParam0, int iParam1, struct<2> Param2)
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
	_0x31010318ba9897ac(&uVar31, player_id());
	Var0.f_10 = player_id();
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = _0x901e0dc25080c8b9(player_id());
	Var0.f_4 = 7;
	Var0.f_16 = 304038664;
	Var0.f_7 = { Param2 };
	func_456(&Var0, uVar31);
}

void func_652(int iParam0)
{
	func_266(&(Global_1071686->f_23887.f_4), iParam0);
}

bool func_653(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

struct<2> func_654()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_836(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_836(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

void func_655(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 || iParam0);
}

void func_656(int iParam0)
{
	func_139(&(Local_557.f_6), iParam0);
}

void func_657(int iParam0)
{
	Var0 = { func_536(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (func_537(Var0))
	{
		return;
	}
	if (func_538(Var0))
	{
		return;
	}
	func_541(iParam0, 2);
	func_556(iParam0, 3);
	func_556(iParam0, 6);
	func_925(Var0);
}

void func_658(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	Var0 = { func_536(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (!func_537(Var0))
	{
		return;
	}
	if (func_538(Var0))
	{
		return;
	}
	if (bParam1)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
	}
	if (bParam1)
	{
		set_this_script_can_remove_blips_created_by_any_script(false);
	}
	func_541(iParam0, 3);
	func_926(Var0, 1, bParam2, bParam3);
}

void func_659(int iParam0)
{
	if ((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_65() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_299(Global_1893587->f_2);
	Global_1900688->f_1 = 3;
	Global_1900688->f_2 = 0;
	Global_1900688->f_7 = iVar0;
	Global_1900688->f_8 = iParam0;
	Global_1900688->f_9 = iVar1;
	if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
	{
		func_301(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
	}
	else if (Global_1900688->f_11 != -1)
	{
		func_301(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
	}
}

Vector3 func_660(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

float func_661(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

char* func_662(int iParam0, bool bParam1, int iParam2)
{
	sVar0 = "Invalid Posse";
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return sVar0;
	}
	iVar1 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar1))
	{
		if (func_927(iParam0))
		{
			iVar2 = iVar1;
			if (iVar2 >= 0 && iVar2 < 32)
			{
				if (Global_1102219->f_17 != (*Global_1100469)[iVar2]->f_17)
				{
					sVar0 = func_928(iParam0, bParam1, iParam2);
					return sVar0;
				}
			}
			if (!_0x595f028698072dd9(-1) && is_orbis_version())
			{
				sVar0 = func_928(iParam0, bParam1, iParam2);
			}
			else
			{
				Var3 = { func_929(iVar1) };
				iVar21 = 0;
				while (iVar21 <= (_0xc084ff658b2e61da(&Var3) - 1))
				{
					if (_0xc084ff658b2e81da(&Var3, iVar21, &Var10) && Var10.f_9)
					{
						iVar20 = 1;
						if (iParam2 == 0)
						{
							sVar0 = func_931(func_930(Var10.f_1), 109029619);
						}
						else
						{
							sVar0 = func_931(func_930(Var10.f_1), iParam2);
						}
					}
					else
					{
						iVar21++;
					}
				}
				if (iVar20 == 0)
				{
					return func_928(iParam0, bParam1, iParam2);
				}
				if (func_932(func_930(Var10.f_1)))
				{
					if (bParam1 == 1 && func_933(iVar1, sVar0))
					{
						sVar0 = func_928(iParam0, bParam1, iParam2);
					}
				}
				else
				{
					func_928(iParam0, bParam1, iParam2);
				}
			}
		}
		else
		{
			sVar0 = func_928(iParam0, bParam1, iParam2);
		}
	}
	return sVar0;
}

struct<8> func_663(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

struct<4> func_664(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 32);
	return cVar0;
}

int func_665(int iParam0, int* iParam1)
{
	bVar0 = func_289(Local_557.f_584.f_333);
	bVar1 = func_934();
	iVar2 = func_148();
	iVar3 = 0;
	while (iVar3 < 9)
	{
		iVar4 = iVar3;
		if (iVar4 == 0)
		{
		}
		else if (func_935(iVar4, iVar2, bVar1, bVar0, iParam0, iParam1))
		{
			return iVar4;
		}
		iVar3++;
	}
	return 0;
}

void func_666(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = func_936(iParam0);
	iVar1 = func_937(iParam0);
	sVar2 = func_938(iParam0, iParam1, sParam2);
	func_939(sVar2, iVar1, bVar0);
	if (func_940(iParam0, &iVar3))
	{
		func_185(iVar3);
	}
}

bool func_667(bool bParam0)
{
	if (!func_43(4))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (!func_59(2))
	{
		return false;
	}
	if (func_45() && !func_59(262144))
	{
		return false;
	}
	if (!func_59(8))
	{
		return false;
	}
	if (func_90() < 5)
	{
		return false;
	}
	if (func_690(16))
	{
		return false;
	}
	if (!func_690(32) || func_289(Local_557.f_584.f_335))
	{
		return false;
	}
	switch (Local_557.f_20.f_16)
	{
		case 1320143426:
			if (!func_59(134217728))
			{
				return false;
			}
			if (Local_15.f_275 == Local_557.f_20.f_549 && !func_941())
			{
				*bParam0 = 0;
			}
			else
			{
				*bParam0 = 1;
			}
			if (func_43(65536) && func_47(Local_300[Local_557.f_1008], 1024))
			{
				*bParam0 = 1;
			}
			break;
		case 1862763509:
			*bParam0 = 0;
			break;
		case 1047079933:
			*bParam0 = 1;
			break;
	}
	return true;
}

void func_668()
{
	if (func_45())
	{
		iVar1 = Local_15.f_276;
		if (func_47(Local_300[Local_557.f_1008], 4))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!func_162(iVar0))
				{
					func_942(&(Local_557.f_584.f_91), 2, iVar0);
				}
				else if (func_163(iVar0))
				{
					func_942(&(Local_557.f_584.f_91), 7, iVar0);
				}
				else
				{
					func_942(&(Local_557.f_584.f_91), 1, iVar0);
				}
				iVar0++;
			}
		}
		else if (func_47(Local_300[Local_557.f_1008], 8192) || func_47(Local_300[Local_557.f_1008], 131072))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!func_162(iVar0))
				{
					func_942(&(Local_557.f_584.f_91), 2, iVar0);
				}
				else if (func_163(iVar0))
				{
					func_942(&(Local_557.f_584.f_91), 8, iVar0);
				}
				else
				{
					func_942(&(Local_557.f_584.f_91), 5, iVar0);
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar1 = Local_557.f_20.f_549;
		if (func_47(Local_300[Local_557.f_1008], 4))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (iVar0 >= Local_15.f_275)
				{
					func_942(&(Local_557.f_584.f_91), 7, iVar0);
				}
				else
				{
					func_942(&(Local_557.f_584.f_91), 1, iVar0);
				}
				iVar0++;
			}
		}
		else if (func_47(Local_300[Local_557.f_1008], 64))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (iVar0 >= Local_15.f_275)
				{
					func_942(&(Local_557.f_584.f_91), 2, iVar0);
				}
				else
				{
					func_942(&(Local_557.f_584.f_91), 1, iVar0);
				}
				iVar0++;
			}
		}
	}
}

void func_669()
{
	if (!func_690(64))
	{
		iVar1 = func_943();
		iVar2 = func_944(iVar1);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			func_945(&(Local_557.f_584.f_91), iVar2, iVar0);
			func_946(&(Local_557.f_584.f_91), iVar1, iVar0);
			iVar0++;
		}
		func_185(64);
	}
}

int func_670()
{
	if (func_59(134217728))
	{
		iVar0 = (Local_557.f_20.f_4 - get_time_difference(Local_15.f_273, get_network_time_accurate()));
	}
	else
	{
		iVar0 = (Local_557.f_20.f_2 - get_time_difference(Local_15.f_272, get_network_time_accurate()));
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	return iVar0;
}

int func_671()
{
	if (func_45())
	{
		if (func_47(Local_300[Local_557.f_1008], 131072) || func_47(Local_300[Local_557.f_1008], 8192))
		{
			return 622225714;
		}
		else
		{
			return -1029285341;
		}
	}
	if (func_47(Local_300[Local_557.f_1008], 64))
	{
		return 622225714;
	}
	return -1029285341;
}

void func_672(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	iVar1 = 0;
	if (iParam7 != 0)
	{
		iVar1 = -1;
	}
	if (((func_947(uParam0, &bVar0) && func_948(uParam0)) && func_949(uParam0, uParam1, iParam7, 0, 0, 0, 0)) && func_950(uParam0, -213385216, &bVar0))
	{
		func_951(uParam0, iParam2, bParam3, iParam4, sParam5);
		func_952(uParam1, iParam6, bParam8, bParam9, bParam10, iVar1, 0);
	}
	if (bVar0)
	{
		func_287(uParam1, 0, 0);
		func_288(uParam0, 1);
	}
}

void func_673(int iParam0)
{
	if ((Local_15.f_2[iParam0]->f_2 == 0 || func_778()) || !func_690(32))
	{
		func_284(iParam0);
		return;
	}
	if (func_953(iParam0))
	{
		func_954(iParam0);
	}
	else if (func_955(iParam0))
	{
		func_956(iParam0);
	}
	else if (func_957(iParam0))
	{
		func_144(iParam0);
	}
	else
	{
		func_284(iParam0);
	}
}

void func_674(int iParam0)
{
	if (!func_45())
	{
		return;
	}
	if (&Local_15.f_234[iParam0] == player_id())
	{
		return;
	}
	if (&Local_15.f_234[iParam0] == 255)
	{
		return;
	}
	if (func_958(iParam0))
	{
		if (&Local_557.f_584.f_31[iParam0] == &Local_15.f_234[iParam0])
		{
			return;
		}
		iVar0 = &Local_15.f_234[iParam0];
		func_959(iVar0, -2145527776);
		func_960(iVar0, -1103135225);
		Local_557.f_584.f_31[iParam0] = &Local_15.f_234[iParam0];
		func_961(&(Local_15.f_234[iParam0]));
		func_962(iVar0, -283351763);
	}
	else if (func_963(iParam0))
	{
		if (&Local_557.f_584.f_31[iParam0] == &Local_15.f_234[iParam0])
		{
			return;
		}
		iVar0 = &Local_15.f_234[iParam0];
		func_960(iVar0, 1293773224);
		func_959(iVar0, -1384718582);
		Local_557.f_584.f_31[iParam0] = &Local_15.f_234[iParam0];
		func_502(&(Local_15.f_234[iParam0]));
		func_962(iVar0, -283351763);
	}
	else
	{
		func_290(iParam0);
	}
}

void func_675()
{
	iVar0 = int_to_playerindex(Local_557.f_7.f_9);
	if (func_964(iVar0))
	{
		func_965(Local_557.f_7.f_9);
	}
	else
	{
		func_291(Local_557.f_7.f_9);
	}
}

bool func_676()
{
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (!func_59(67108864))
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (func_90() != 5)
	{
		return false;
	}
	if (func_84(Local_300[Local_557.f_1008]) != 2)
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	if (func_411(Global_35, Local_557.f_20.f_7) > Local_557.f_20.f_19)
	{
		return false;
	}
	return true;
}

void func_677()
{
	if (does_blip_exist(Local_557.f_584.f_23))
	{
		return;
	}
	iVar0 = 1;
	Local_557.f_584.f_23 = _blip_add_for_coord(func_966(iVar0), Local_557.f_20.f_10);
	if (func_967(iVar0, &iVar1))
	{
		set_blip_sprite(Local_557.f_584.f_23, iVar1, false);
	}
	set_blip_name_from_text_file(Local_557.f_584.f_23, func_968());
	if (func_690(131072))
	{
		_blip_set_modifier(Local_557.f_584.f_23, 231194138);
	}
	if (func_690(32768))
	{
		_blip_set_modifier(Local_557.f_584.f_23, -1878373110);
	}
}

bool func_678()
{
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (!func_43(32768))
	{
		return false;
	}
	if (func_90() != 5 || func_84(Local_300[Local_557.f_1008]) != 2)
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	if (!func_969())
	{
		return false;
	}
	return true;
}

void func_679()
{
	if (does_blip_exist(Local_557.f_584.f_22))
	{
		return;
	}
	vVar0 = { Local_557.f_20.f_7 + Vector(0f, Local_15.f_271, Local_15.f_270) };
	Local_557.f_584.f_22 = _blip_add_for_radius(-308585968, vVar0, Local_557.f_20.f_19);
	_blip_set_modifier(Local_557.f_584.f_22, -521680853);
	set_blip_name_from_text_file(Local_557.f_584.f_22, func_970());
	if (func_690(65536))
	{
		_blip_set_modifier(Local_557.f_584.f_22, 231194138);
	}
	if (func_690(16384))
	{
		_blip_set_modifier(Local_557.f_584.f_22, -1878373110);
	}
}

bool func_680()
{
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (func_90() != 5 || func_84(Local_300[Local_557.f_1008]) != 2)
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	if (!func_43(65536))
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (func_47(Local_300[Local_557.f_1008], 256))
	{
		return false;
	}
	if (func_47(Local_300[Local_557.f_1008], 1024))
	{
		return false;
	}
	return true;
}

void func_681()
{
	if (does_blip_exist(Local_557.f_584.f_22))
	{
		return;
	}
	Local_557.f_584.f_22 = _blip_add_for_radius(-308585968, Local_557.f_20.f_7, Local_557.f_20.f_19);
	_blip_set_modifier(Local_557.f_584.f_22, -521680853);
	set_blip_name_from_text_file(Local_557.f_584.f_22, func_971());
	_blip_set_modifier(Local_557.f_584.f_22, -1878373110);
}

bool func_682(int iParam0)
{
	if (!_0x80e9c316ef84dd81(&(Local_557.f_921[iParam0]->f_1)))
	{
		return false;
	}
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (func_90() != 5 || func_84(Local_300[Local_557.f_1008]) != 2)
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	if (!_does_volume_exist(&(Local_557.f_921[iParam0])))
	{
		return false;
	}
	if (func_43(65536) && !func_47(Local_300[Local_557.f_1008], 1024))
	{
		return false;
	}
	return true;
}

void func_683(int iParam0)
{
	if (does_blip_exist(&(Local_557.f_584.f_24[iParam0])))
	{
		return;
	}
	iVar0 = _0xa6ef0c54a3443e70(408396114, &(Local_557.f_921[iParam0]));
	_blip_set_modifier(iVar0, 1995761918);
	_blip_set_modifier(iVar0, 231194138);
	Local_557.f_584.f_24[iParam0] = iVar0;
}

void func_684()
{
	if (does_blip_exist(Local_557.f_584.f_23))
	{
		if (func_690(128))
		{
			func_972();
		}
		else
		{
			func_973();
		}
	}
	else
	{
		func_974();
	}
	if (func_975())
	{
		if (func_690(131072) || func_690(65536))
		{
			if (does_blip_exist(Local_557.f_584.f_23))
			{
				_set_blip_flash_style(Local_557.f_584.f_23, 231194138);
			}
			if (does_blip_exist(Local_557.f_584.f_22))
			{
				_set_blip_flash_style(Local_557.f_584.f_22, 231194138);
			}
			func_656(131072);
			func_656(65536);
		}
	}
	else if (does_blip_exist(Local_557.f_584.f_23) && !func_690(128))
	{
		if (!func_690(131072))
		{
			_blip_set_modifier(Local_557.f_584.f_23, 231194138);
			if (does_blip_exist(Local_557.f_584.f_22))
			{
				_set_blip_flash_style(Local_557.f_584.f_22, 231194138);
			}
			func_185(131072);
			func_656(65536);
		}
	}
	else if (does_blip_exist(Local_557.f_584.f_22))
	{
		if (!func_690(65536))
		{
			if (does_blip_exist(Local_557.f_584.f_23))
			{
				_set_blip_flash_style(Local_557.f_584.f_23, 231194138);
			}
			_blip_set_modifier(Local_557.f_584.f_22, 231194138);
			func_656(131072);
			func_185(65536);
		}
	}
}

bool func_685()
{
	if (!func_43(4))
	{
		return false;
	}
	if (func_690(32))
	{
		return false;
	}
	if (!func_43(1))
	{
		return false;
	}
	if (!func_59(2))
	{
		return false;
	}
	if (func_45() && !func_59(262144))
	{
		return false;
	}
	if (func_84(Local_300[Local_557.f_1008]) != 2)
	{
		return false;
	}
	if (_0xa2b1c7ef759a63ce() > 0f && !is_cinematic_cam_rendering())
	{
		return false;
	}
	return true;
}

char* func_686(bool bParam0)
{
	iVar0 = func_148();
	bVar1 = func_45();
	switch (iVar0)
	{
		case 2:
			if (bVar1)
			{
				if (Local_557.f_20.f_16 == 1047079933)
				{
					return _create_var_string(10, "NET_AS_SHARD_BODY_START_PVP", func_931(func_662(Local_15.f_284, 1, 0), 859817522));
				}
				else
				{
					return _create_var_string(10, "NET_AS_SHARD_BODY_START_PVP", func_931(get_player_name(&(Local_15.f_234[0])), 859817522));
				}
			}
			if (bParam0)
			{
				if (!func_138(Local_557.f_20.f_15, 33554432))
				{
					return "NET_AS_SHARD_BODY_START_ST_SEARCH";
				}
				return "NET_AS_SHARD_BODY_START_ST";
			}
			if (!func_138(Local_557.f_20.f_15, 33554432))
			{
				return "NET_AS_SHARD_BODY_START_SEARCH";
			}
			return "NET_AS_SHARD_BODY_START";
		case 3:
			if (bParam0)
			{
				return "NET_AS_SHARD_BODY_START_ST_C";
			}
			return "NET_AS_SHARD_BODY_START_C";
		case 1:
			if (Local_557.f_20.f_16 == 1047079933)
			{
				return "NET_AS_SHARD_BODY_START_POSSE";
			}
			return "NET_AS_SHARD_BODY_START_TARGET";
		case 4:
			return _create_var_string(10, "NET_AS_SHARD_BODY_START_ALLY", func_931(get_player_name(&(Local_15.f_234[0])), -963477619));
		default:
			break;
	}
	return "";
}

void func_687(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	Local_557.f_584.f_335 = func_977(func_976(), sParam0);
}

bool func_688()
{
	if (func_690(16))
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (func_47(Local_300[Local_557.f_1008], 65536))
	{
		return true;
	}
	if (!func_43(4))
	{
		return false;
	}
	if (!func_59(64) && !func_59(32))
	{
		return false;
	}
	if (func_385())
	{
		return false;
	}
	return true;
}

void func_689(int iParam0)
{
	bVar2 = (!func_47(Local_300[Local_557.f_1008], 4) && !func_43(16777216));
	func_306(bVar2, &iVar0, &iVar1);
	bVar3 = iVar1 == true;
	bVar4 = !bVar2;
	Local_557.f_584.f_335 = func_979(func_976(), func_978(iParam0, bVar3), iVar0, iVar1, bVar4);
}

bool func_690(int iParam0)
{
	return func_138(Local_557.f_6, iParam0);
}

bool func_691()
{
	if (!func_43(65536))
	{
		return false;
	}
	if (func_47(Local_300[Local_557.f_1008], 1024))
	{
		return false;
	}
	if (func_59(536870912) && func_47(Local_300[Local_557.f_1008], 1024))
	{
		return false;
	}
	return true;
}

void func_692(int iParam0, int iParam1)
{
	if (func_289(Local_557.f_584.f_334) && Local_557.f_584.f_336 == iParam0)
	{
		return;
	}
	func_134();
	Local_557.f_584.f_336 = iParam0;
	Local_557.f_584.f_334 = func_981(func_980(iParam0), iParam1, 0, 0, 0, 1);
}

bool func_693()
{
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return false;
	}
	if (func_90() != 5)
	{
		return false;
	}
	if (func_84(Local_300[Local_557.f_1008]) != 2)
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	if (Local_557.f_20 == 1657045547 && !func_941())
	{
		return false;
	}
	return true;
}

bool func_694()
{
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_548)
	{
		if (Local_15.f_2[iVar0]->f_2 != -1574827255)
		{
		}
		else if (!func_431(iVar0, Local_300[Local_557.f_1008]))
		{
		}
		else
		{
			iVar1++;
			if (iVar1 <= 1)
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

bool func_695()
{
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return false;
	}
	if (func_59(33554432))
	{
		return false;
	}
	if (func_941())
	{
		return false;
	}
	if (func_90() != 5)
	{
		return false;
	}
	if (func_84(Local_300[Local_557.f_1008]) != 2)
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	return true;
}

bool func_696()
{
	if (!func_47(Local_300[Local_557.f_1008], 64))
	{
		return false;
	}
	if (func_90() != 5)
	{
		return false;
	}
	if (func_84(Local_300[Local_557.f_1008]) != 2)
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	return true;
}

bool func_697()
{
	if (!func_47(Local_300[Local_557.f_1008], 8192))
	{
		return false;
	}
	if (func_47(Local_300[Local_557.f_1008], 16384))
	{
		return false;
	}
	if (func_90() != 5)
	{
		return false;
	}
	if (func_84(Local_300[Local_557.f_1008]) != 2)
	{
		return false;
	}
	return true;
}

bool func_698()
{
	if (!func_47(Local_300[Local_557.f_1008], 8192))
	{
		if (!func_47(Local_300[Local_557.f_1008], 131072))
		{
			return false;
		}
	}
	else if (!func_47(Local_300[Local_557.f_1008], 16384))
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	if (func_90() != 5)
	{
		return false;
	}
	if (func_84(Local_300[Local_557.f_1008]) != 2)
	{
		return false;
	}
	return true;
}

void func_699(int iParam0)
{
	func_285(Local_557.f_584.f_24[iParam0]);
	if (_does_volume_exist(&(Local_557.f_921[iParam0])))
	{
		_delete_volume(&(Local_557.f_921[iParam0]));
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (!_0x8f4f050054005c27(&(Local_557.f_921[iParam0]->f_1), iVar0))
		{
		}
		else
		{
			func_295(iVar0, 262144);
			_0xb909149f2bb5f6da(&(Local_557.f_921[iParam0]->f_1), iVar0);
		}
		iVar0++;
	}
	_0xd2d74f89df844a50(&(Local_557.f_921[iParam0]->f_1));
}

bool func_700(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

void func_701(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_702(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_703(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_704(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_982(iParam0);
	if (!func_983(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_984(128) && !func_985(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_986() == 4)
	{
		func_143(18);
	}
	func_987(1024);
}

void func_705(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_706(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_707(struct<29> Param0, var uParam29, int iParam30)
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

void func_708(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_709(var uParam0, float fParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

int func_710(int iParam0)
{
	return iParam0;
}

int func_711()
{
	if (func_119(&Var0) && func_120(&Var0, 484707754, 0, 0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

bool func_712(int iParam0, var uParam1)
{
	if ((func_119(&Var0) && func_120(&Var0, -787028349, iParam0, 0)) && func_347(Var0, -81907729, uParam1, 0))
	{
		return true;
	}
	return false;
}

float func_713(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { vParam3 - vParam0 };
	if (vVar0.y == 0f)
	{
		if (vVar0.x < 0f)
		{
			return -90f;
		}
		else
		{
			return 90f;
		}
	}
	return atan2(vVar0.x, vVar0.y);
}

bool func_714(int iParam0, int iParam1)
{
	if (Local_557.f_952.f_4 > 30)
	{
		return true;
	}
	if (!func_119(&Var0) || !func_120(&Var0, 1525953930, iParam0, 0))
	{
		return true;
	}
	iVar5 = func_988(iParam0);
	iVar15 = create_itemset(true);
	iVar20 = 0;
	while (iVar20 < iVar5)
	{
		Var6 = { Var0 };
		if ((!func_120(&Var6, -1839855939, iVar20, 0) || !func_347(Var6, -81907729, &vVar11, 1)) || !func_348(Var6, 1158526802, &uVar14, 1))
		{
		}
		else
		{
			iVar15 = create_itemset(true);
			if (!is_itemset_valid(iVar15))
			{
			}
			else
			{
				iVar17 = _0x2b32b11520626229(vVar11, uVar14, iVar15);
				iVar18 = 0;
				while (iVar18 < iVar17)
				{
					iVar16 = _0xf18af483df70bbde(get_indexed_item_in_itemset(iVar18, iVar15));
					if (!_does_volume_exist(iVar16))
					{
					}
					else if (!_0xca5c90d40665d5ce(iVar16, 2) && !_0xca5c90d40665d5ce(iVar16, 3))
					{
					}
					else
					{
						_0x3efabb21e14a6bd1(iVar16, 2, 0);
						_0x3efabb21e14a6bd1(iVar16, 3, 0);
						bVar19 = true;
					}
					iVar18++;
				}
				destroy_itemset(iVar15);
			}
		}
		iVar20++;
	}
	Local_557.f_952.f_4++;
	if (!bVar19)
	{
		return false;
	}
	return true;
}

bool func_715(int iParam0)
{
	return _0x8f4f050054005c27(&(Local_557.f_992), iParam0);
}

bool func_716(int iParam0)
{
	if (!_0xf256a75210c5c0eb(&(Local_557.f_980[iParam0]), Global_35))
	{
		return false;
	}
	switch (func_989(iParam0))
	{
		case 1823139082:
			if (!func_43(4))
			{
				return false;
			}
			break;
		case -1913113499:
		default:
			break;
	}
	if (func_447())
	{
		return false;
	}
	return true;
}

void func_717(int iParam0)
{
	_0xe84aac1b22a73e99(&(Local_557.f_992), iParam0);
}

bool func_718(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_557.f_1008;
	}
	return _0x8f4f050054005c27(&(Local_300[iParam1]->f_6), iParam0);
}

Vector3 func_719(vector3 vParam0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_720(int iParam0, int iParam1, var uParam2, bool bParam3, var uParam4)
{
	if (!func_990(iParam0, &Var0))
	{
		return false;
	}
	if (func_117(Var0, -401087351, &uVar5, 0))
	{
		*iParam1 = uVar5;
	}
	else
	{
		return false;
	}
	if (!func_347(Var0, -81907729, uParam2, 0))
	{
		return false;
	}
	*bParam3 = func_347(Var0, 861602793, uParam4, 0);
	return true;
}

int func_721(int iParam0, int iParam1)
{
	if (!func_990(iParam0, &Var0))
	{
		return 0;
	}
	*iParam1 = 0;
	if (func_346(Var0, -235687863, &bVar5, 0) && bVar5)
	{
		*iParam1 |= 8;
	}
	if (!func_346(Var0, -1269124321, &bVar5, 0) || !bVar5)
	{
		*iParam1 |= 32768;
	}
	if (func_346(Var0, -1438322653, &bVar5, 0) && bVar5)
	{
		*iParam1 |= 16;
	}
	if (func_346(Var0, 673047879, &bVar5, 0) && bVar5)
	{
		*iParam1 |= 8192;
	}
	if (func_346(Var0, -1918016700, &bVar5, 0) && bVar5)
	{
		*iParam1 |= 2;
	}
	return 1;
}

Vector3 func_722(int iParam0)
{
	if (func_459(iParam0, &Var0))
	{
		func_347(Var0, -81907729, &vVar5, 0);
	}
	return vVar5;
}

float func_723(int iParam0)
{
	if (func_459(iParam0, &Var0))
	{
		func_348(Var0, 724299998, &uVar5, 0);
	}
	return uVar5;
}

Vector3 func_724(int iParam0)
{
	if (func_459(iParam0, &Var0))
	{
		func_347(Var0, 861602793, &vVar5, 0);
	}
	return vVar5;
}

int func_725(int iParam0)
{
	if (!func_459(iParam0, &Var0) || !func_117(Var0, 597233769, &iVar5, 0))
	{
		return 1;
	}
	switch (iVar5)
	{
		case -198566504:
			return 0;
		case 1746896664:
			return 1;
		case 1390021295:
			return 4;
		case -656190934:
			return 5;
		case 520141149:
			return 7;
		default:
			break;
	}
	return 1;
}

bool func_726(var uParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!func_991(iParam1))
	{
		return false;
	}
	if (!can_register_mission_vehicles(1))
	{
		return false;
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (func_992(iParam1))
	{
		*uParam0 = veh_to_net(_create_mission_train(1054492269, vParam2, true, false, true, true));
	}
	else if (func_993(iParam1))
	{
		*uParam0 = veh_to_net(_create_mission_train(-950361972, vParam2, true, false, true, true));
	}
	else if (iParam8 != 0 && _0xb9d5bdda88e1bb66(iParam1))
	{
		*uParam0 = veh_to_net(_create_draft_vehicle(iParam1, vParam2, bParam5, true, bParam6, bParam7, iParam8, bParam9));
	}
	else
	{
		*uParam0 = veh_to_net(create_vehicle(iParam1, vParam2, bParam5, true, bParam6, bParam7, bParam9));
	}
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_727(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_991(iParam1))
	{
		return false;
	}
	iVar0 = func_994(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_728(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			disable_ped_pain_audio(iParam0, true);
		}
		if (bParam2)
		{
			set_ped_config_flag(iParam0, 243, true);
		}
		if (Global_34 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

bool func_729(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_991(iParam1))
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

bool func_730()
{
	if (Local_557.f_1014 != 0)
	{
		if (func_445(Local_557.f_1014) > 15000)
		{
			return true;
		}
		return false;
	}
	Local_557.f_1014 = get_network_time_accurate();
	return false;
}

int func_731(int iParam0, int iParam1, int iParam2)
{
	if (((((func_116(iParam0, &Var0) && func_346(Var0, -1133284398, &bVar5, 0)) && bVar5) && func_345(Var0, 101317385, iParam1, 0)) && *iParam1 >= 0) && *iParam1 < 18)
	{
		func_117(Var0, -1463370342, &iVar6, 0);
		*iParam2 = func_995(iVar6);
		return 1;
	}
	return 0;
}

bool func_732(int iParam0, int iParam1)
{
	if (func_116(iParam0, &Var0) && func_117(Var0, 350192982, &uVar5, 0))
	{
		*iParam1 = uVar5;
		return true;
	}
	return false;
}

bool func_733(int iParam0, int iParam1)
{
	if (func_116(iParam0, &Var0) && func_345(Var0, 1475346163, iParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_734(int iParam0)
{
	if ((func_116(iParam0, &Var0) && func_346(Var0, -2076494195, &bVar5, 0)) && bVar5)
	{
		return true;
	}
	return false;
}

bool func_735(struct<5> Param0, int iParam5, int iParam6)
{
	if (func_117(Param0, iParam5, &uVar0, 0))
	{
		*iParam6 = uVar0;
		return true;
	}
	return false;
}

Vector3 func_736(int iParam0)
{
	func_116(iParam0, &Var0);
	func_347(Var0, 1322693839, &vVar5, 0);
	return vVar5;
}

float func_737(int iParam0)
{
	func_116(iParam0, &Var0);
	func_348(Var0, -1919876099, &uVar5, 0);
	return uVar5;
}

bool func_738(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_991(iParam2))
	{
		return false;
	}
	if (network_does_network_id_exist(iParam1))
	{
		iVar0 = net_to_veh(iParam1);
		iVar1 = func_996(iVar0, iParam2, iParam3, 1, bParam4, !bParam5);
		*uParam0 = ped_to_net(iVar1);
		if (network_does_network_id_exist(*uParam0))
		{
			if (bParam5)
			{
				_0x899a04afcc725d04(iVar1, _0xd42514c182121c23(iParam2));
			}
			if (bParam6)
			{
				set_ped_relationship_group_hash(iVar1, _get_default_relationship_group_hash(iParam2));
			}
			set_ped_random_component_variation(iVar1, 0);
			if (bParam4)
			{
				set_network_id_exists_on_all_machines(*uParam0, true);
			}
			return true;
		}
	}
	return false;
}

bool func_739(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_991(iParam2))
	{
		return false;
	}
	if (network_does_network_id_exist(iParam1))
	{
		iVar0 = net_to_ped(iParam1);
		iVar1 = func_997(iVar0, iParam2, iParam3, 1, bParam4, !bParam5, bParam7);
		*uParam0 = ped_to_net(iVar1);
		if (network_does_network_id_exist(*uParam0))
		{
			if (bParam5)
			{
				_0x899a04afcc725d04(iVar1, _0xd42514c182121c23(iParam2));
			}
			if (bParam6)
			{
				set_ped_relationship_group_hash(iVar1, _get_default_relationship_group_hash(iParam2));
			}
			set_ped_random_component_variation(iVar1, 0);
			if (bParam4)
			{
				set_network_id_exists_on_all_machines(*uParam0, true);
			}
			return true;
		}
	}
	return false;
}

void func_740(int iParam0)
{
	if (&Local_557.f_20.f_22[iParam0] == 0)
	{
		return;
	}
	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		return;
	}
	if (!func_116(iParam0, &Var1))
	{
		return;
	}
	func_998(iParam0, Var1);
	Local_15.f_2[iParam0]->f_2 = &Local_557.f_20.f_22[iParam0];
	if (Local_15.f_2[iParam0]->f_2 == 391477998)
	{
		if (func_248(iParam0))
		{
			Local_15.f_2[iParam0]->f_2 = -1574827255;
		}
		else
		{
			Local_15.f_2[iParam0]->f_2 = -1360694003;
		}
	}
	if (func_732(iParam0, &iVar6) || func_733(iParam0, &iVar7))
	{
		if (iVar6 != 0)
		{
			_set_ped_body_component(iVar0, iVar6);
		}
		else
		{
			_set_ped_outfit_preset(iVar0, iVar7, 0);
		}
		_update_ped_variation(iVar0, false, true, true, true, false);
	}
	if (func_999(iParam0, &uVar8))
	{
		_0x89f5e7adecccb49c(iVar0, func_110(&uVar8));
	}
	if (func_51(iParam0, 32))
	{
		func_1000(iVar0);
	}
	if (!func_51(iParam0, 65536) && func_54(iParam0, &iVar16, 1))
	{
		func_1000(iVar16);
	}
	set_ped_drops_weapons_when_dead(iVar0, false);
	_0x431240a58484d5d0(iVar0, 0);
	_0x45e57fdd531c9477(iVar0, 0);
	iVar17 = func_23(iParam0);
	if (is_ped_human(iVar0))
	{
		if (((_is_weapon_melee(iVar17) || iVar17 == -1569615261) && iVar17 != -164645981) && !func_176(iParam0, 268435456))
		{
			set_ped_combat_attributes(iVar0, 93, true);
			set_ped_combat_attributes(iVar0, 50, true);
			_0x815c0074a1bc0d93(iVar0, 2);
		}
		if (func_734(iParam0))
		{
			remove_all_ped_weapons(iVar0, false, true);
		}
		if (func_118(iVar17))
		{
			if (iVar17 == -164645981 && func_176(iParam0, 131072))
			{
				func_863(iVar0, 379542007, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			}
			func_863(iVar0, iVar17, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		if ((!func_51(iParam0, 1) && !func_176(iParam0, 131072)) && Local_557.f_20.f_22[iParam0]->f_10 != 1300923248)
		{
			_hide_ped_weapons(iVar0, 2, true);
		}
		if (func_1001(iParam0, &iVar18))
		{
			set_ped_accuracy(iVar0, iVar18);
		}
		else
		{
			set_ped_accuracy(iVar0, 20);
		}
		set_ped_config_flag(iVar0, 130, true);
		set_ped_config_flag(iVar0, 108, false);
		_0xd77ae48611b7b10a(iVar0, 0.48f);
		if (!func_176(iParam0, 4096))
		{
			set_ped_config_flag(iVar0, 467, true);
		}
		if (func_176(iParam0, 8) || func_176(iParam0, 1024))
		{
			_0x85f500f4e24ca43e(iVar0, 0f);
		}
	}
	set_ped_config_flag(iVar0, 6, false);
	set_ped_seeing_range(iVar0, func_1002(iParam0));
	set_ped_hearing_range(iVar0, func_1003(iParam0));
	if (func_1004(iParam0, &iVar19))
	{
		set_entity_max_health(iVar0, iVar19);
		_set_entity_health(iVar0, iVar19, 0);
	}
	if (func_53(iParam0))
	{
		set_ped_reset_flag(iVar0, 170, true);
	}
	if (func_176(iParam0, 128))
	{
		set_ped_as_cop(iVar0, false);
		_0x819add5ef1742f47(iVar0, 7);
		set_ped_combat_attributes(iVar0, 39, true);
	}
	if (func_176(iParam0, 4096))
	{
		set_ped_flee_attributes(iVar0, 4, true);
		set_ped_combat_attributes(iVar0, 17, true);
		_0xb8de69d9473b7593(iVar0, 0);
		set_ped_config_flag(iVar0, 146, false);
	}
	else
	{
		set_ped_combat_attributes(iVar0, 5, true);
		set_ped_flee_attributes(iVar0, 512, true);
		set_ped_config_flag(iVar0, 146, true);
	}
	if (func_176(iParam0, 4096) || func_176(iParam0, 128))
	{
		set_ped_config_flag(iVar0, 148, false);
	}
	else
	{
		set_ped_config_flag(iVar0, 148, true);
	}
	if (Local_557.f_20.f_22[iParam0]->f_14 > -1 && Local_557.f_20.f_22[iParam0]->f_14 < Local_557.f_20.f_550)
	{
		_0xfc3db99c8144cd81(iVar0, &(Local_557.f_962[Local_557.f_20.f_22[iParam0]->f_14]), 0, 0, 0);
	}
	if (func_478(Local_15.f_2[iParam0]->f_2))
	{
		_0x2e5b5d1f1453e08e(iVar0, 3);
		_0x5bcf0b79d4f5dba3(iVar0, 15f);
		_0x29924eb8ee9db926(iVar0, 20f);
	}
	if (func_1005(iParam0, &fVar20, &uVar21, &fVar22))
	{
		_0x3ad8eff9703be657(iVar0, fVar20);
		_0xe8c296b75eacc357(iVar0, uVar21);
		_0x88e32db8c1a4aa4b(iVar0, fVar22);
	}
	if (Global_1901947->f_166.f_31)
	{
		if (func_176(iParam0, 128))
		{
			set_ped_config_flag(iVar0, 127, true);
			set_ped_config_flag(iVar0, 146, true);
		}
	}
	if (Local_15.f_2[iParam0]->f_2 == -1574827255)
	{
		Local_15.f_275++;
	}
}

int func_741(int iParam0)
{
	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -867387895, iParam0, 0))
	{
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_742(int iParam0)
{
	if (func_119(&Var0) && func_120(&Var0, -867387895, iParam0, 0))
	{
		func_117(Var0, -1652447499, &iVar5, 0);
	}
	switch (iVar5)
	{
		case 1944715782:
			return 1;
		case -505604945:
			return 2;
		case -1397909002:
			return 3;
		case 1711299255:
			return 4;
		case -337496728:
			return 5;
		default:
			break;
	}
	return 0;
}

int func_743(int iParam0)
{
	if (func_119(&Var0) && func_120(&Var0, -867387895, iParam0, 0))
	{
		func_117(Var0, 1082010721, &iVar5, 0);
	}
	switch (iVar5)
	{
		case 2020948356:
			return 0;
		case 1600602149:
			return 1;
		case 1427081770:
			return 2;
		case 1583307481:
			return 3;
		case -1912395912:
			return 4;
		case -148474395:
			return 6;
		case -2085386658:
			return 7;
		case -1989565558:
			return 8;
		case 1588459901:
			return 9;
		case 1097860881:
			return 10;
		default:
			break;
	}
	return 5;
}

bool func_744(int iParam0)
{
	if ((*Global_1056141)[iParam0]->f_2 != -1)
	{
		return true;
	}
	iVar0 = func_1006(iParam0);
	if (iVar0 == 2 || iVar0 == 1)
	{
		return true;
	}
	if (func_1007(iParam0, 1))
	{
		return true;
	}
	if (func_1008(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_745(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

int func_746(int iParam0, bool bParam1)
{
	iVar0 = floor(func_1009(iParam0, bParam1));
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

int func_747(int iParam0)
{
	return func_1010(func_746(iParam0, 0));
}

bool func_748(int iParam0, var uParam1)
{
	if (func_744(iParam0))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (iVar0 == iParam0)
		{
		}
		else if (!_0x72b2e00c9bac6789(&uParam1, iVar1))
		{
		}
		else if (!_0x3f59fe6f37869576(iParam0, iVar0))
		{
		}
		else if (!func_744(iVar0))
		{
		}
		else
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_749(int iParam0)
{
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar3 = int_to_playerindex(iVar2);
		if (!network_is_player_active(iVar3))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar3) != iParam0)
		{
		}
		else
		{
			iVar1 = func_746(iVar3, 0);
			if (iVar1 <= iVar0)
			{
			}
			else
			{
				iVar0 = iVar1;
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_750(int iParam0)
{
	return func_1010(func_749(iParam0));
}

bool func_751()
{
	if (func_59(134217728))
	{
		return false;
	}
	if (Local_557.f_20.f_16 != 1320143426)
	{
		return false;
	}
	if (((Local_557.f_20.f_549 == Local_15.f_275 && func_670() > Local_557.f_20.f_4) && !func_472(512)) && !func_59(1024))
	{
		return false;
	}
	return true;
}

void func_752()
{
	if (func_59(134217728))
	{
		return;
	}
	Local_15.f_273 = get_network_time_accurate();
	func_100(134217728);
}

bool func_753()
{
	if (!func_59(8))
	{
		return false;
	}
	if (func_59(16777216))
	{
		if (func_59(134217728))
		{
			return get_time_difference(Local_15.f_273, get_network_time_accurate()) > Local_557.f_20.f_4;
		}
		else
		{
			return get_time_difference(Local_15.f_272, get_network_time_accurate()) > Local_557.f_20.f_2;
		}
	}
	return get_time_difference(Local_15.f_272, get_network_time_accurate()) > 40000;
}

bool func_754(var uParam0, int iParam1)
{
	if (func_119(uParam0) && func_120(uParam0, 1823038874, iParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_755(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0]->f_2 == 516423162 || Local_15.f_2[iVar0]->f_2 == 0)
		{
		}
		else if (iParam0 != -1 && Local_557.f_20.f_22[iVar0]->f_12 != iParam0)
		{
		}
		else if (!func_176(iVar0, 1))
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

int func_756()
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		switch (Local_15.f_2[iVar0]->f_2)
		{
			case 0:
				break;
				break;
			default:
				iVar1++;
				break;
		}
		iVar0++;
	}
	return iVar1;
}

void func_757(int iParam0)
{
	func_139(&(Local_15.f_1), iParam0);
}

bool func_758(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_47(Local_300[iVar0], iParam0))
		{
		}
		else
		{
			iVar1 = int_to_participantindex(iVar0);
			if (!network_is_participant_active(iVar1))
			{
			}
			else if (!network_is_player_active(network_get_player_index(iVar1)))
			{
			}
			else
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_759(int iParam0, int iParam1)
{
	if (Local_15.f_222.f_2 == -1)
	{
		if (!func_1011(&iVar0))
		{
			return true;
		}
		Local_15.f_222.f_2 = iVar0;
	}
	iVar0 = Local_15.f_222.f_2;
	if (network_does_network_id_exist(&(Local_15.f_2[iVar0])))
	{
		return true;
	}
	if (!func_121(&Var1, iParam0, iParam1))
	{
		return true;
	}
	if (!func_583(Var1))
	{
		return true;
	}
	func_735(Var1, -486752250, &iVar6);
	func_347(Var1, -81907729, &vVar8, 0);
	func_348(Var1, 724299998, &fVar11, 0);
	func_346(Var1, 917283806, &bVar14, 0);
	iVar16 = 1;
	if (bVar14)
	{
		iVar16++;
	}
	iVar17 = get_num_reserved_mission_peds(0);
	iVar18 = (iVar17 - get_num_created_mission_peds(false));
	if (iVar18 < iVar16)
	{
		reserve_network_mission_peds((iVar17 + (iVar16 - iVar18)));
		if (get_num_reserved_mission_peds(0) < (iVar17 + (iVar16 - iVar18)))
		{
			return true;
		}
	}
	if (!is_model_valid(iVar6))
	{
		return true;
	}
	if (func_452(vVar8))
	{
		return true;
	}
	if (bVar14)
	{
		if (!network_does_network_id_exist(Local_15.f_2[iVar0]->f_1))
		{
			func_727(&(Local_15.f_2[iVar0]->f_1), func_29(iParam0, iParam1), vVar8, fVar11, 1, 0, 1, 1, 1);
			return false;
		}
		if (!func_739(Local_15.f_2[iVar0], Local_15.f_2[iVar0]->f_1, iVar6, -1, 1, 1, 1, 0))
		{
			return false;
		}
	}
	else if (!func_727(Local_15.f_2[iVar0], iVar6, vVar8, fVar11, 1, 0, 1, 1, 1))
	{
		return false;
	}
	func_117(Var1, 256341061, &iVar12, 0);
	iVar7 = iVar12;
	func_345(Var1, 1533007347, &iVar13, 0);
	func_346(Var1, -827172890, &bVar15, 0);
	iVar19 = -1;
	func_345(Var1, -412523681, &iVar19, 0);
	func_1012(iVar0, iVar7, bVar15, iVar13, iVar19);
	Local_15.f_2[iVar0]->f_8 = func_1013(iParam0, iParam1);
	return true;
}

void func_760(int iParam0)
{
	if (Local_15.f_275 > 1)
	{
		func_174(2, iParam0, func_173(0, 8), &(Local_15.f_234[iParam0]));
	}
	if (Local_15.f_275 > 0)
	{
		Local_15.f_275 = (Local_15.f_275 - 1);
	}
	if (Local_15.f_276 > 0)
	{
		Local_15.f_276 = (Local_15.f_276 - 1);
	}
	Local_15.f_234[iParam0] = 255;
}

bool func_761(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_762(int iParam0, int iParam1)
{
	if (((func_116(iParam0, &Var0) && func_345(Var0, 691956863, iParam1, 0)) && *iParam1 >= 0) && *iParam1 < 21)
	{
		return true;
	}
	return false;
}

bool func_763(int iParam0)
{
	if (is_ped_dead_or_dying(iParam0, true))
	{
		return true;
	}
	if (is_ped_responding_to_event(iParam0, -978548489))
	{
		return true;
	}
	if (_0xf330a5c062b29bed(iParam0))
	{
		return true;
	}
	iVar0 = _get_rider_of_mount(iParam0, false);
	if (!is_entity_dead(iVar0) && is_ped_a_player(iVar0))
	{
		return true;
	}
	return false;
}

bool func_764(int iParam0, int iParam1, float fParam2, var uParam3)
{
	fVar0 = fParam2;
	*uParam3 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!func_47(Local_300[iVar2], 4))
		{
		}
		else if (!func_718(iParam0, iVar2))
		{
		}
		else if (!func_396(iVar2, 1, 1))
		{
		}
		else
		{
			iVar3 = network_get_player_index(int_to_participantindex(iVar2));
			fVar1 = func_1014(iParam1, get_player_ped(iVar3), 1, 1);
			if (fVar1 > fVar0)
			{
			}
			else
			{
				fVar0 = fVar1;
				*uParam3 = iVar3;
			}
		}
		iVar2++;
	}
	if (*uParam3 == 255)
	{
		return false;
	}
	return true;
}

bool func_765(int iParam0, float fParam1)
{
	vVar2 = { get_entity_coords(iParam0, false, true) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_47(Local_300[iVar0], 4))
		{
		}
		else if (!func_396(iVar0, 1, 1))
		{
		}
		else
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			fVar5 = func_661(get_player_ped(iVar1), vVar2, 1);
			if (fVar5 > fParam1)
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

bool func_766(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = -1;
	*iParam2 = -1;
	if (!func_116(iParam0, &Var0))
	{
		return false;
	}
	if (!func_345(Var0, 1059929194, iParam1, 0))
	{
		return false;
	}
	func_345(Var0, 871643656, iParam2, 0);
	return true;
}

bool func_767(int iParam0)
{
	if (iParam0 >= 6 || iParam0 < 0)
	{
		return false;
	}
	return true;
}

bool func_768(int iParam0)
{
	if (!func_52(iParam0, &iVar1, 1, 0))
	{
		return false;
	}
	if (is_ped_being_stealth_killed(iVar1))
	{
		return false;
	}
	if (is_ped_being_stunned(iVar1, 0))
	{
		return false;
	}
	vVar2 = { get_entity_coords(iVar1, true, false) };
	iVar8 = 0;
	while (iVar8 < Local_557.f_20.f_548)
	{
		if (iVar8 == iParam0)
		{
		}
		else if (func_319(iVar8) != 1583594396)
		{
		}
		else if (!func_52(iVar8, &iVar0, 0, 0))
		{
		}
		else
		{
			vVar5 = { get_entity_coords(iVar0, true, false) };
			if (vdist(vVar5, vVar2) > 25f)
			{
			}
			else if ((vVar5.z - vVar2.z) > 4.5f)
			{
			}
			else if (is_entity_in_water(iVar0))
			{
			}
			else if (!func_1015(iVar1, iVar0, 100f))
			{
			}
			else if (!_0x0c9dbf48c6ba6e4c(iVar1, vVar5, 339))
			{
			}
			else if (func_1016(vVar2, vVar5))
			{
			}
			else
			{
				return true;
			}
		}
		iVar8++;
	}
	return false;
}

bool func_769(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (((is_ped_being_stealth_killed(iParam1) || is_ped_being_stunned(iParam1, 0)) || is_ped_fatally_injured(iParam1)) || get_ped_config_flag(iParam1, 11, false))
	{
		return false;
	}
	if (!bParam3 && _0xf330a5c062b29bed(iParam1))
	{
		return true;
	}
	if (_0xb655db7582aec805(iParam1))
	{
		return true;
	}
	if (!bParam3 && is_ped_in_combat(iParam1, 0))
	{
		return true;
	}
	if (bParam2)
	{
		if (_is_ped_lassoed(iParam1))
		{
			return true;
		}
		if (is_ped_fleeing(iParam1))
		{
			return true;
		}
		if (is_ped_being_jacked(iParam1))
		{
			return true;
		}
		if (_0xc8d523bf5bbd3808(iParam1, 1722245163))
		{
			return true;
		}
		if (bParam2 && _0xc8d523bf5bbd3808(iParam1, 869302489))
		{
			return true;
		}
		if (func_1017(iParam0))
		{
			return true;
		}
	}
	if (!bParam3 && _0x77525bbf433f2cd6(iParam1))
	{
		return true;
	}
	if (is_ped_responding_to_event(iParam1, -1507090758))
	{
		return true;
	}
	if (is_ped_responding_to_event(iParam1, -1102089407))
	{
		return true;
	}
	if (is_ped_responding_to_event(iParam1, -998673475))
	{
		return true;
	}
	if (is_ped_responding_to_event(iParam1, -587661767))
	{
		return true;
	}
	if (bParam2)
	{
		if (is_ped_responding_to_event(iParam1, 869302489))
		{
			*bParam4 = 1;
			return true;
		}
		if (is_ped_responding_to_event(iParam1, 1664579810))
		{
			return true;
		}
	}
	if (is_ped_responding_to_event(iParam1, 506397713))
	{
		return true;
	}
	return false;
}

void func_770(int iParam0, int iParam1)
{
	Local_15.f_2[iParam0]->f_2 = iParam1;
}

bool func_771(int iParam0, var uParam1)
{
	if (Local_15.f_2[iParam0]->f_6 == 255)
	{
		return false;
	}
	if (!network_is_player_active(Local_15.f_2[iParam0]->f_6))
	{
		return true;
	}
	if (!network_is_player_a_participant(Local_15.f_2[iParam0]->f_6))
	{
		return true;
	}
	iVar0 = network_get_participant_index(Local_15.f_2[iParam0]->f_6);
	if (!func_718(iParam0, iVar0))
	{
		return true;
	}
	return false;
}

void func_772(int iParam0)
{
	Local_15.f_2[iParam0]->f_6 = 255;
	func_773(iParam0, 32768);
	func_773(iParam0, 65536);
}

void func_773(int iParam0, int iParam1)
{
	func_139(&(Local_15.f_2[iParam0]->f_3), iParam1);
}

bool func_774(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!_0x8f4f050054005c27(&(Local_300[iVar0]->f_6), iParam0))
		{
		}
		else
		{
			iVar1 = iVar0;
			if (!network_is_participant_active(iVar1))
			{
			}
			else
			{
				*uParam1 = network_get_player_index(iVar1);
				if (!network_is_player_active(*uParam1))
				{
				}
				else
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_775(int iParam0, var uParam1)
{
	Local_15.f_2[iParam0]->f_6 = uParam1;
	func_773(iParam0, 32768);
	func_773(iParam0, 65536);
}

bool func_776(int iParam0, int iParam1)
{
	switch (Local_557.f_20)
	{
		case 1657045547:
			return true;
		default:
			break;
	}
	if (func_176(iParam0, 1) && func_637(iParam0, 4000))
	{
		return true;
	}
	if (func_765(iParam1, 7f))
	{
		return true;
	}
	return false;
	return true;
}

int func_777(int iParam0)
{
	return Local_15.f_2[iParam0]->f_4;
}

bool func_778()
{
	if (func_59(64))
	{
		return true;
	}
	if (func_59(32))
	{
		return true;
	}
	return false;
}

void func_779(int iParam0, int iParam1)
{
	Local_15.f_2[iParam0]->f_4 = iParam1;
}

bool func_780(int iParam0, int iParam1)
{
	if (func_116(iParam0, &Var0) && func_345(Var0, 561062234, iParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_781(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return false;
		default:
			break;
	}
	return !func_1018(iParam0);
}

bool func_782(int iParam0, int iParam1)
{
	iVar0 = -1569615261;
	get_current_ped_weapon(iParam0, &iVar0, false, 0, false);
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_783(int iParam0, int iParam1)
{
	if (!func_176(iParam0, 2048))
	{
		if (func_176(iParam0, 2))
		{
			vVar1 = { func_865(iParam0) };
		}
		else
		{
			vVar1 = { func_787(iParam0) };
		}
		if (func_452(vVar1) || vdist(get_entity_coords(iParam1, false, false), vVar1) < 4f)
		{
			func_461(iParam0, 2048);
		}
		else
		{
			return false;
		}
	}
	if (func_176(iParam0, 256) && !func_176(iParam0, 512))
	{
		iVar0 = func_1019(iParam0);
		if ((does_entity_exist(iParam1) && !is_ped_dead_or_dying(iParam1, true)) && has_ped_got_weapon(iParam1, iVar0, 0, true))
		{
			func_461(iParam0, 512);
		}
		return false;
	}
	return true;
}

bool func_784(int iParam0, int iParam1)
{
	if (Local_557.f_20.f_22[iParam0]->f_11 != 2116329739)
	{
		iVar0 = Local_557.f_20.f_22[iParam0]->f_15;
	}
	else if (!func_762(iParam0, &iVar0))
	{
		return true;
	}
	if (iVar0 < 0 || iVar0 >= 21)
	{
		return true;
	}
	if (!network_does_network_id_exist(&(Local_15.f_2[iVar0])))
	{
		return true;
	}
	iVar1 = net_to_ped(&(Local_15.f_2[iVar0]));
	if (is_ped_dead_or_dying(iVar1, true))
	{
		return true;
	}
	if (get_ped_config_flag(iVar1, 11, false))
	{
		return true;
	}
	return false;
}

int func_785(int iParam0)
{
	if (func_116(iParam0, &Var0))
	{
		func_117(Var0, 229174115, &uVar5, 0);
	}
	return uVar5;
}

bool func_786(int iParam0, int iParam1)
{
	if (func_176(iParam0, 4))
	{
		return true;
	}
	if ((func_766(iParam0, &iVar0, &iVar1) && func_767(iVar0)) && !func_574(iVar0))
	{
		if ((!func_176(iParam0, 4) && func_767(iVar1)) && func_574(iVar1))
		{
			func_461(iParam0, 4);
			return true;
		}
		if (func_1020(iParam0, iParam1))
		{
			func_461(iParam0, 4);
			return true;
		}
		return false;
	}
	return true;
}

Vector3 func_787(int iParam0)
{
	func_116(iParam0, &Var0);
	func_347(Var0, -1711751769, &vVar5, 0);
	return vVar5;
}

int func_788(int iParam0, int iParam1)
{
	if (!func_176(iParam0, 2048))
	{
		if (func_176(iParam0, 2))
		{
			vVar0 = { func_865(iParam0) };
		}
		else
		{
			vVar0 = { func_787(iParam0) };
		}
		if (func_452(vVar0) || vdist(get_entity_coords(iParam1, false, false), vVar0) < 4f)
		{
			func_461(iParam0, 2048);
		}
	}
	iVar10 = get_nearest_player_to_entity(iParam1, 0, 3);
	if ((iVar10 != -1 && iVar10 != 255) && network_is_player_active(int_to_playerindex(iVar10)))
	{
		iVar9 = get_player_ped(int_to_playerindex(iVar10));
		if (func_1014(iParam1, iVar9, 1, 0) < 30f)
		{
			bVar8 = true;
		}
	}
	if (!func_1021(iParam1, 200f, &uVar7, &uVar4, &fVar3))
	{
		func_461(iParam0, 1048576);
		func_773(iParam0, 2097152);
		if (bVar8)
		{
			func_773(iParam0, 8388608);
		}
		else
		{
			func_461(iParam0, 8388608);
		}
		return 0;
	}
	if (fVar3 < 20f)
	{
		func_773(iParam0, 4194304);
		func_773(iParam0, 2097152);
		func_773(iParam0, 1048576);
	}
	else if (fVar3 < 60f)
	{
		func_461(iParam0, 4194304);
		func_773(iParam0, 2097152);
		func_773(iParam0, 1048576);
	}
	else if (fVar3 < 150f || bVar8)
	{
		func_773(iParam0, 4194304);
		func_461(iParam0, 2097152);
		func_773(iParam0, 1048576);
	}
	else
	{
		func_773(iParam0, 4194304);
		func_773(iParam0, 2097152);
		func_461(iParam0, 1048576);
	}
	fVar11 = 175f;
	if (func_176(iParam0, 8388608))
	{
		fVar11 = (175f - 10f);
	}
	if (fVar3 > fVar11 && !bVar8)
	{
		func_461(iParam0, 8388608);
	}
	else
	{
		func_773(iParam0, 8388608);
	}
	return 0;
}

bool func_789(int iParam0, int iParam1)
{
	if (Local_557.f_20.f_22[iParam0]->f_15 < 0 || Local_557.f_20.f_22[iParam0]->f_15 >= 21)
	{
		return true;
	}
	if (!network_does_network_id_exist(&(Local_15.f_2[Local_557.f_20.f_22[iParam0]->f_15])))
	{
		return true;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[Local_557.f_20.f_22[iParam0]->f_15]));
	if (is_ped_dead_or_dying(iVar0, true))
	{
		return true;
	}
	if (!func_54(iParam0, &iVar1, 1) && is_ped_on_mount(iVar0))
	{
		return true;
	}
	if (!func_1022(iParam1, iVar1, 1))
	{
		return true;
	}
	return false;
}

bool func_790(int iParam0, int iParam1)
{
	if (!func_861(iParam0, &iVar0, &iVar1))
	{
		return true;
	}
	if (!func_153(iVar0, 0))
	{
		return true;
	}
	if ((func_176(iParam0, 268435456) && func_176(iParam0, 2)) && func_153(iVar1, 1))
	{
		if (func_1023(iVar1))
		{
			return true;
		}
	}
	else if (func_1023(iVar0))
	{
		return true;
	}
	return false;
}

int func_791(int iParam0, int iParam1, int iParam2)
{
	return func_1024(Local_15.f_2[iParam0]->f_8, iParam1, iParam2);
}

bool func_792(int iParam0, int iParam1, var uParam2)
{
	if (!func_121(&Var0, iParam0, iParam1) || !func_347(Var0, -1711751769, uParam2, 0))
	{
		return false;
	}
	return true;
}

int func_793(int iParam0)
{
	return func_1025(iParam0) + 30;
}

bool func_794(int iParam0)
{
	return iParam0 != 0;
}

void func_795(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

char* func_796()
{
	return "Match_End_Timer";
}

char* func_797()
{
	return "RDRO_Countdown_Sounds";
}

char* func_798()
{
	return "Round_End_Timer";
}

char* func_799()
{
	return "10S";
}

char* func_800()
{
	return "Out_Of_Bounds";
}

char* func_801()
{
	return "321_Countdown";
}

char* func_802()
{
	return "HUD_MP_FREE_MODE";
}

char* func_803()
{
	return "target_spawn";
}

char* func_804()
{
	return "MP005_OBHELT_sounds";
}

void func_805(int iParam0)
{
	if (!func_1026(iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21416.f_260), iParam0);
	}
}

void func_806(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1027(Global_1139381->f_3876.f_2[func_506(iParam0, 1)]);
}

struct<2> func_807(int iParam0)
{
	if (!func_508(iParam0))
	{
		return func_1028();
	}
	return Global_1107216->f_33[iParam0]->f_3.f_5;
}

bool func_808(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 90);
}

int func_809(int iParam0)
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

struct<2> func_810(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_811(struct<2> Param0, int iParam2)
{
	func_846(Param0, iParam2);
}

void func_812(struct<2> Param0, int iParam2)
{
	func_846(Param0, iParam2);
}

void func_813(var uParam0, int iParam1)
{
	func_1029(uParam0, iParam1);
}

void func_814(var uParam0, var uParam1)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, 1);
}

var func_815(int iParam0)
{
	return (*Global_1297717)[iParam0]->f_3;
}

bool func_816(int iParam0)
{
	return iParam0 != 0;
}

void func_817(var uParam0)
{
	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (!func_1030(iVar0, &vVar2))
		{
			_copy_memory((*uParam0)[iVar1], &vVar5, 3);
		}
		else if (vVar2.x == 0)
		{
			_copy_memory((*uParam0)[iVar1], &vVar5, 3);
		}
		else
		{
			_copy_memory((*uParam0)[iVar1], &vVar2, 3);
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_31 = iVar1;
}

int func_818(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2076061048;
		case 1:
			return 1960865708;
		case 2:
			return -717214561;
		default:
			break;
	}
	return 0;
}

bool func_819(var uParam0, var uParam1)
{
	return (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1);
}

int func_820(int iParam0)
{
	Var0 = { func_810(-1574827255, func_1031(iParam0)) };
	if (!_stat_id_is_valid(&Var0))
	{
		return 0;
	}
	if (!stat_id_get_int(&Var0, &uVar2))
	{
		return 0;
	}
	return uVar2;
}

void func_821(int iParam0, int iParam1)
{
	Var0 = { func_810(-1574827255, func_1031(iParam1)) };
	if (!_stat_id_is_valid(&Var0))
	{
		return;
	}
	if (!stat_id_set_int(&Var0, iParam0, true))
	{
		return;
	}
}

int func_822(var uParam0)
{
	iVar1 = func_1032(*uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	uVar0 = (uVar0 || shift_left(1, 31));
	uVar0 = (uVar0 || shift_left(iVar1, 20));
	uVar0 = (uVar0 || shift_left(uParam0->f_1, 10));
	return uVar0;
}

int func_823()
{
	return 362424745;
}

bool func_824(int iParam0, int iParam1)
{
	return func_1033(&(Global_1109804->f_5737[iParam0]->f_2), iParam1);
}

void func_825(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	Var2.f_1 = -1;
	if (!func_1034(iParam0))
	{
		return;
	}
	_copy_memory(&Var2, bParam2, 4);
	Var2.f_4 = iParam3;
	iVar1 |= 4;
	switch (iParam1)
	{
		case 1:
			iVar1 |= 1;
			break;
		case 2:
			iVar1 |= 2;
			break;
		default:
			break;
	}
	switch (iParam5)
	{
		case 0:
			iVar1 |= 4;
			break;
		case 1:
			iVar1 |= 2052;
			break;
		default:
			break;
	}
	if (_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())) == player_id())
	{
		iVar1 |= 16384;
	}
	if (func_1035(iParam0))
	{
		iVar1 |= 65536;
	}
	func_1036(iParam0, iVar1, iParam4, &Var2);
	func_1037(iParam0, iVar1);
	func_1038(iParam0, iVar1, &Var2);
	func_1039(iVar1, &Var2);
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = -1105088361;
			break;
		case 2:
			iVar0 = -1904461405;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1040(iParam0, iVar0, iParam3);
	}
}

void func_826(int iParam0)
{
	if (func_292(&(Global_1109804->f_247.f_9), iParam0, 3))
	{
	}
}

void func_827(int iParam0)
{
	if (func_292(&((*Global_1130367)[player_id()]->f_3), iParam0, 3))
	{
	}
}

int func_828(int iParam0)
{
	switch (iParam0)
	{
		case -1125105727:
			return 1963482335;
		case -1683328900:
			return 1963482335;
		case -800238780:
			return 1963482335;
		case 1015970717:
			return 1963482335;
		case 64621749:
			return 416516838;
		default:
			break;
	}
	return 0;
}

int func_829(int iParam0)
{
	switch (iParam0)
	{
		case -1125105727:
			return -1165569262;
		case -1683328900:
			return -1165569262;
		case -800238780:
			return -1165569262;
		case 1015970717:
			return -1165569262;
		case -323664079:
			return 1397040943;
		case 64621749:
			return 133648705;
		case 1766283257:
			return -741823262;
		case 1976336482:
			return -576897277;
		default:
			break;
	}
	return 0;
}

void func_830(int iParam0)
{
	func_1041(iParam0);
}

void func_831(int iParam0)
{
	func_1042(iParam0);
}

int func_832(struct<2> Param0)
{
	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = func_1043(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

int func_833(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_1044())
	{
		return 0;
	}
	if (!func_516())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_1045(&Global_0, 8);
	}
	func_1045(&Global_0, 1);
	return 1;
}

void func_834(struct<2> Param0, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	iVar0 = func_1046(func_842(Param0));
	iVar1 = func_67(Param0);
	Var2.f_1 = bParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_65() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_1047(Param0, &Var2);
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
	_0xd5910ecf81a2278c(iVar0, iVar1, bParam2, &Var2);
}

void func_835(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1048(Param0);
	}
	else
	{
		func_1049(Param0, iParam2);
	}
	func_1050();
}

struct<2> func_836(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

void func_837(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_1051(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_1052(Global_1940258, 8388608);
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

void func_838(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1053(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1054(cVar2);
			}
			else
			{
				func_1055();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_839(bool bParam0)
{
	if (!bParam0 && func_278(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_840(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_841(struct<2> Param0)
{
	return func_1057(func_1056(Param0));
}

int func_842(var uParam0, var uParam1)
{
	return uParam0;
}

void func_843(struct<2> Param0, int iParam2)
{
	func_846(Param0, iParam2);
}

void func_844(struct<2> Param0, int iParam2)
{
	func_846(Param0, func_1058(iParam2));
}

void func_845(struct<2> Param0, int iParam2)
{
	func_846(Param0, iParam2);
}

void func_846(var uParam0, int iParam1, int iParam2)
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

void func_847(int iParam0)
{
	if (!func_1059((*Global_1134390)[&Global_1296859]->f_74, iParam0))
	{
		func_1060(&((*Global_1134390)[&Global_1296859]->f_74), iParam0);
		Global_1134349->f_32 = (*Global_1134390)[&Global_1296859]->f_74;
	}
}

void func_848(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Var2.f_1 = -1;
	if (_network_is_player_index_valid(iParam1->f_2))
	{
	}
	if (!func_1034(*iParam0))
	{
		return;
	}
	_copy_memory(&Var2, bParam2, 4);
	Var2.f_4 = iParam0->f_1;
	iVar7 = player_id();
	iVar1 |= 8;
	switch (iParam1->f_1)
	{
		case 2:
			iVar1 |= 2;
			break;
		case 1:
			iVar1 |= 1;
			break;
		default:
			break;
	}
	switch (*iParam1)
	{
		case -1365731393:
		case 493038497:
			iVar1 |= 16;
			break;
		case -508253498:
			iVar1 |= 80;
			break;
		case 566295171:
			iVar1 |= 144;
			break;
		case -1881397389:
			iVar1 |= 272;
			break;
		case -356110550:
			iVar1 |= 528;
			break;
		case -406386912:
			iVar1 |= 1040;
			break;
		case 1759419243:
			iVar1 |= 2064;
			break;
		case 2062237572:
			iVar1 |= 4112;
			break;
		case 1923632299:
			iVar1 |= 32;
			break;
		case 475709606:
			iVar1 |= 2080;
			break;
		default:
			break;
	}
	if (_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar7)) == iVar7)
	{
		iVar1 |= 16384;
	}
	if (iVar7 == iParam1->f_2)
	{
		iVar1 |= 32768;
	}
	func_1036(*iParam0, iVar1, iParam3, &Var2);
	func_1037(*iParam0, iVar1);
	func_1038(*iParam0, iVar1, &Var2);
	switch (iParam1->f_1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1575427269;
			break;
		case 2:
			iVar0 = 824391763;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1040(*iParam0, iVar0, iParam0->f_1);
	}
}

int func_849(int iParam0, int iParam1)
{
	if (!func_1061(iParam0, &uVar0, &uVar1))
	{
		return 0;
	}
	chal_add_goal_progress_int(uVar0, uVar1, iParam1);
	return 1;
}

void func_850(int iParam0)
{
	func_1062(iParam0);
}

void func_851(int iParam0)
{
	if (func_1063(0, 0, 0, 0) || iParam0 > (Global_1296859->f_21 - Global_1109804->f_5729))
	{
		Global_1109804->f_5729 = Global_1296859->f_21;
		Global_1109804->f_5729.f_1 = iParam0;
	}
}

void func_852(int iParam0)
{
	if (func_292(Global_1130592, iParam0, 1))
	{
	}
}

void func_853(int iParam0, int iParam1)
{
	Global_1130592->f_2[iParam0] = iParam1;
}

var func_854(int iParam0)
{
	return (*Global_1297717)[iParam0]->f_2;
}

bool func_855(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_856(int iParam0)
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
		func_123(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_282(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

char* func_857(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1064(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_858(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = iParam1;
	uVar16 = _0x8d1249bd28791878(&Var0, &vVar13, iParam6);
	return uVar16;
}

bool func_859(int iParam0)
{
	return !is_string_null_or_empty(func_1065(*Local_557.f_584.f_39[iParam0]));
}

char* func_860(int iParam0)
{
	return func_110(Local_557.f_584.f_39[iParam0]);
}

bool func_861(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = -1;
	*iParam2 = -1;
	if (!func_116(iParam0, &Var0))
	{
		return false;
	}
	if (!func_345(Var0, -619208322, iParam1, 0))
	{
		return false;
	}
	func_345(Var0, 796390761, iParam2, 0);
	return true;
}

bool func_862(int iParam0, int iParam1)
{
	if (!func_990(iParam0, &Var0))
	{
		return false;
	}
	if (!func_1066(Var0, 1890996209, iParam1))
	{
		return false;
	}
	return true;
}

int func_863(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_118(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_118(iVar4) && iVar4 != iVar0)
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
	if (func_65() == -1 && !func_1067(iVar0))
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
				if (func_1067(-183018591))
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
		if (iParam0 != Global_34 && func_118(iVar0))
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
		func_1068(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1069(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_1070(iVar0))
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

void func_864(int iParam0, int iParam1)
{
	if (func_1071(Local_15.f_2[iParam0], 1120685857, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	task_combat_hated_targets_in_area(iVar0, get_entity_coords(iVar0, true, false), 100f, 0, iParam1);
}

Vector3 func_865(int iParam0)
{
	func_116(iParam0, &Var0);
	func_347(Var0, 2092691923, &vVar5, 0);
	return vVar5;
}

bool func_866(vector3 vParam0, float fParam3, float fParam4, var uParam5, float fParam6)
{
	*fParam6 = fParam3;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_300[iVar1]->f_1 & 4 == 0)
		{
		}
		else
		{
			iVar4 = int_to_participantindex(iVar1);
			if (!network_is_participant_active(iVar4))
			{
			}
			else
			{
				iVar0 = network_get_player_index(iVar4);
				if (!network_is_player_active(iVar0))
				{
				}
				else
				{
					iVar3 = get_player_ped(iVar0);
					fVar2 = vdist(get_entity_coords(iVar3, false, false), vParam0);
					if (fVar2 > *fParam6)
					{
					}
					else
					{
						*fParam6 = fVar2;
						*fParam4 = iVar3;
						*uParam5 = { get_entity_coords(iVar3, false, false) };
					}
				}
			}
		}
		iVar1++;
	}
	return *fParam6 < fParam3;
}

void func_867(int iParam0)
{
	if (Local_15.f_262 != 0)
	{
		return;
	}
	Local_15.f_262 = iParam0;
}

void func_868(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (func_891(iParam0, iParam3))
	{
		return;
	}
	if (is_any_speech_playing(iParam1))
	{
		return;
	}
	iVar0 = player_ped_id();
	StringCopy(&cVar1, func_1072(iParam0, iParam2, 0, bParam5, iParam7), 64);
	StringCopy(&cVar9, func_1072(iParam0, iParam2, 1, bParam5, iParam7), 64);
	iVar17 = func_1073(iParam0, iParam2);
	if (is_string_null_or_empty(func_110(&cVar1)))
	{
		func_1074(iParam0, iParam3);
		return;
	}
	if (iParam4 && func_1075(iParam1))
	{
		func_1074(iParam0, iParam3);
		return;
	}
	if (func_1076(iParam1, &cVar1, iVar17, iVar0, iParam6, 0, 0, 1))
	{
		func_1074(iParam0, iParam3);
		return;
	}
	else if (!are_strings_equal(&cVar1, &cVar9) && func_1076(iParam1, &cVar9, iVar17, iVar0, iParam6, 0, 0, 1))
	{
		func_1074(iParam0, iParam3);
		return;
	}
	func_1074(iParam0, iParam3);
}

bool func_869(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (!func_1034(iParam0))
	{
		return false;
	}
	if (!func_1077(&Var0))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 16, 0, 0, 0))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 18, iParam1, 0, 0))
	{
		return false;
	}
	func_1079(Var0, uParam2, &uVar6, &uVar5);
	Var0.f_1 = uVar6;
	return func_1080(Var0, iParam1, uParam3, &uVar7, &uVar8);
}

void func_870(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	bVar0 = iParam4;
	func_346(*uParam0, iParam2, &bVar0, 0);
	if (bVar0)
	{
		func_177(iParam1, iParam3);
	}
}

bool func_871(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 509508008;
		uParam1->f_3 = iParam0;
		return _datafile_get_data_node_index(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_872(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -1968510322;
		uParam1->f_3 = iParam0;
		return _datafile_get_data_node_index(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_873(int iParam0, int iParam1, var uParam2)
{
	if (func_872(iParam0, uParam2))
	{
		uParam2->f_2 = -30329033;
		uParam2->f_3 = iParam1;
		return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
	}
	return false;
}

int func_874(int iParam0)
{
	return Global_1128574[iParam0];
}

void func_875(int iParam0, int iParam1)
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

var func_876(int iParam0)
{
	return func_1081(iParam0, 887702464, 1);
}

int func_877(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
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
		func_875(iParam2, -372840566);
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
	Var3.f_13 = bParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_1082(uParam1, iParam0, Var3);
	return 1;
}

int func_878(int iParam0)
{
	Var0 = { func_810(741274143, func_809(iParam0)) };
	return func_579(Var0, -1);
}

void func_879(int iParam0)
{
	if (!func_51(iParam0, 33554432))
	{
		return;
	}
	func_295(iParam0, 33554432);
	func_295(iParam0, 8388608);
}

void func_880(int iParam0)
{
	if (!func_51(iParam0, 524288))
	{
		return;
	}
	if (!func_59(2))
	{
		return;
	}
	if (!func_51(iParam0, 524288))
	{
		return;
	}
	if (!func_52(iParam0, &iVar1, 0, 0))
	{
		return;
	}
	iVar0 = func_1083(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	_0x5826efd6d73c4de5(iVar1);
	_0x9dae1380cc5c6451(player_id(), iVar1);
	if (func_51(iParam0, 65536) && func_54(iParam0, &iVar1, 0))
	{
		_0x5826efd6d73c4de5(iVar1);
		_0x9dae1380cc5c6451(player_id(), iVar1);
	}
	sVar2 = func_105(func_104(iVar0));
	if (!is_string_null_or_empty(sVar2) && Local_557.f_20.f_495[iVar0]->f_1)
	{
		remove_waypoint_recording(sVar2);
	}
	func_295(iParam0, 524288);
	Local_557.f_20.f_5 = (Local_557.f_20.f_5 - 1);
}

void func_881(int iParam0)
{
	_0xe84aac1b22a73e99(&(Local_300[Local_557.f_1008]->f_6), iParam0);
}

void func_882(int iParam0)
{
	_0xb909149f2bb5f6da(&(Local_300[Local_557.f_1008]->f_6), iParam0);
}

void func_883(int iParam0, int iParam1)
{
	func_139(&(Local_557.f_20.f_22[iParam0]->f_2), iParam1);
}

char* func_884(int iParam0)
{
	if (is_ped_male(iParam0))
	{
		return "STRANGER_MALE";
	}
	return "STRANGER_FEMALE";
}

int func_885(int iParam0, int iParam1, bool bParam2)
{
	if (!func_55(Local_15.f_2[iParam0]->f_2))
	{
		return 0;
	}
	if (!_0x603ac35fd4602c76(Local_557.f_577))
	{
		return 0;
	}
	if (func_732(iParam0, &iVar1))
	{
		uVar0 = _0x8e84119a23c16623(get_entity_model(iParam1), iVar1, 0);
	}
	else if (func_733(iParam0, &uVar2))
	{
		uVar0 = _0x8e84119a23c16623(get_entity_model(iParam1), _0x62fdf4e678e40cc6(iParam1, uVar2), 0);
	}
	else if (!bParam2)
	{
		uVar0 = _0x8e84119a23c16623(get_entity_model(iParam1), 0, 0);
	}
	return uVar0;
}

char* func_886()
{
	return "NET_AS_ILO_TITLE_TARGET";
}

char* func_887()
{
	return "NET_AS_ILO_TITLE_ENEMY";
}

void func_888(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	vVar0 = { get_entity_coords(iParam0, false, false) };
	iVar3 = func_1084(vVar0, iParam1);
	if (iVar3 == 0)
	{
		return;
	}
	if (!_0x8c03cd6b5e0e85e8(iParam0, iVar3))
	{
	}
}

void func_889(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (func_1085())
	{
		iVar0 = -813230742;
	}
	else
	{
		iVar0 = 2102333076;
	}
	if (!_0x8c03cd6b5e0e85e8(iParam0, iVar0))
	{
	}
}

bool func_890(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	vVar3 = { get_entity_coords(iParam2, false, false) };
	if ((vVar3.z - 6f) > vVar0.z)
	{
		return false;
	}
	fVar6 = func_1086(iParam0);
	fVar7 = vdist(vVar0, vVar3);
	if (fVar7 > (fVar6 * 1.4f))
	{
		return false;
	}
	if (fVar7 > (fVar6 * func_1087(iParam2)))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if (is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_being_stunned(iParam1, 0))
	{
		return false;
	}
	fVar8 = func_1088(iParam0);
	if (!func_1015(iParam1, iParam2, fVar8))
	{
		if (is_ped_headtracking_ped(iParam1, iParam2) && func_1015(iParam1, iParam2, 1127481344))
		{
		}
		else if (func_1089(iParam2, iParam1, fVar7))
		{
		}
		else if (Local_557.f_20.f_22[iParam0]->f_12 != -1 && func_1090(Local_557.f_20.f_22[iParam0]->f_12, iParam0))
		{
		}
		else
		{
			return false;
		}
	}
	if (is_ped_on_mount(iParam2))
	{
		iVar9 = func_710(get_mount(iParam2));
	}
	else if (is_ped_in_any_vehicle(iParam2, false))
	{
		iVar9 = func_710(get_vehicle_ped_is_in(iParam2, false));
	}
	else
	{
		iVar9 = func_710(iParam2);
	}
	if (!has_entity_clear_los_to_entity(iParam1, iVar9, 339))
	{
		return false;
	}
	if (func_1016(vVar0, vVar3))
	{
		return false;
	}
	return true;
}

bool func_891(int iParam0, int iParam1)
{
	return func_138(Local_557.f_20.f_22[iParam0]->f_2, iParam1);
}

bool func_892(int iParam0)
{
	return func_718(iParam0, 255);
}

bool func_893(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

bool func_894(int iParam0)
{
	switch (Local_557.f_20)
	{
		case 1657045547:
			if (!func_431(iParam0, Local_300[Local_557.f_1008]))
			{
				return false;
			}
			break;
		default:
			if (!func_176(iParam0, 262144))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_895(int iParam0, int iParam1)
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

void func_896(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (func_118(iParam1) && !has_ped_got_weapon(iVar0, iParam1, 0, false))
	{
		if (bParam2)
		{
			func_863(iVar0, iParam1, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		return;
	}
	get_current_ped_weapon(iVar0, &iVar1, false, 0, false);
	if (iVar1 == iParam1)
	{
		return;
	}
	iVar2 = get_script_task_status(iVar0, 716706914, false);
	if (iVar2 == 1 || iVar2 == 0)
	{
		return;
	}
	if (func_1071(Local_15.f_2[iParam0], 716706914, 0) != 2)
	{
		return;
	}
	set_current_ped_weapon(iVar0, iParam1, false, 0, false, false);
	task_swap_weapon(iVar0, iParam3, iParam4, 0, 0);
}

bool func_897(int iParam0, int iParam1)
{
	if (func_55(Local_15.f_2[iParam0]->f_2) && Local_557.f_20.f_22[iParam0]->f_10 == 918683891)
	{
		bVar0 = true;
	}
	if (func_176(iParam0, 8) && Local_15.f_2[iParam0]->f_6 != 255)
	{
		bVar1 = true;
	}
	if (func_1091(iParam1, 0, bVar0, bVar1))
	{
		return false;
	}
	get_current_ped_weapon(iParam1, &iVar2, false, 0, false);
	iVar3 = get_best_ped_weapon(iParam1, false, false);
	if (func_1092(iParam0, iParam1, iVar2, iVar3))
	{
		set_blocking_of_non_temporary_events(iParam1, true);
		return false;
	}
	set_blocking_of_non_temporary_events(iParam1, false);
	if (func_1093(iParam0, iParam1, iVar2))
	{
		return false;
	}
	if (_0x7583a9d35248b83f(iParam1))
	{
		return false;
	}
	return true;
}

void func_898(int iParam0, int iParam1)
{
	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	if (is_ped_using_any_scenario(iParam1))
	{
		return;
	}
	iVar0 = func_785(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = !func_51(iParam0, 1);
	func_1094(iParam0, iVar0, Local_557.f_20.f_22[iParam0]->f_3, Local_557.f_20.f_22[iParam0]->f_9, bVar1);
}

void func_899(int iParam0, int iParam1)
{
	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	if (Local_557.f_20.f_22[iParam0]->f_11 != 2116329739)
	{
		iVar0 = Local_557.f_20.f_22[iParam0]->f_15;
	}
	else if (!func_762(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 < 0 || iVar0 >= 21)
	{
		return;
	}
	if (!func_52(iVar0, &iVar1, 1, 0))
	{
		return;
	}
	if (_0xf330a5c062b29bed(iParam1) || is_ped_ragdoll(iParam1))
	{
		return;
	}
	iVar2 = _0x08ff1099ed2e6e21(iParam1);
	if (!func_782(iParam1, iVar2))
	{
		func_896(iParam0, iVar2, 0, 1, 0);
		return;
	}
	if (_0x0d3b1568917ebda0(iParam1, 11))
	{
		_0x7c10221ce718aa72(iParam1, 11);
	}
	if (!_0xb346c85d49cc998e(iParam1, 17))
	{
		_0xb8de69d9473b7593(iParam1, 17);
	}
	if (get_ped_config_flag(iParam1, 168, true))
	{
		set_ped_config_flag(iParam1, 168, false);
	}
	set_entity_can_be_damaged_by_relationship_group(iParam1, false, get_ped_relationship_group_hash(iVar1));
	set_blocking_of_non_temporary_events(iParam1, true);
	func_1095(iParam0, iVar1);
}

void func_900(int iParam0, int iParam1)
{
	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	func_1096(iParam0, Local_557.f_20.f_22[iParam0]->f_3, 50f);
}

void func_901(int iParam0, int iParam1)
{
	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	if (Local_557.f_20.f_22[iParam0]->f_15 == -1)
	{
		return;
	}
	if (!network_does_network_id_exist(&(Local_15.f_2[Local_557.f_20.f_22[iParam0]->f_15])))
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[Local_557.f_20.f_22[iParam0]->f_15]));
	if (is_ped_dead_or_dying(iVar0, true))
	{
		return;
	}
	func_1097(iParam0, iVar0, Local_557.f_20.f_22[iParam0]->f_6, 1065353216);
}

void func_902(int iParam0, int iParam1, bool bParam2)
{
	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	if (!func_51(iParam0, 16384))
	{
		return;
	}
	if (func_895(iParam1, 658540077))
	{
		return;
	}
	if ((!func_51(iParam0, 1) && is_ped_human(iParam1)) && func_178(iParam1))
	{
		func_896(iParam0, -1569615261, 0, 1, 0);
		return;
	}
	if (bParam2 && !is_ped_in_any_vehicle(iParam1, false))
	{
		if (!func_1098(iParam0, &iVar0) || !network_does_network_id_exist(&(Local_15.f_198[iVar0])))
		{
			return;
		}
		iVar1 = net_to_veh(&(Local_15.f_198[iVar0]));
		if (!is_vehicle_driveable(iVar1, false, false))
		{
			return;
		}
		iVar2 = func_1099(iParam0);
		func_1100(iParam0, iVar1, iVar2, 1f);
		return;
	}
	if (!func_272(iParam0, &uVar3))
	{
		return;
	}
	iVar11 = 262144;
	if (bParam2)
	{
		iVar11 |= 8388608;
	}
	func_1101(iParam0, func_110(&uVar3), iVar11, 1);
}

void func_903(int iParam0, int iParam1)
{
	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	func_1102(iParam0, 1065353216);
}

void func_904(int iParam0, int iParam1)
{
	fVar3 = 40000f;
	if (_get_ped_crouch_movement(iParam1))
	{
		_set_ped_crouch_movement(iParam1, false, 0, false);
	}
	if (!func_176(iParam0, 2048))
	{
		set_blocking_of_non_temporary_events(iParam1, true);
		set_ped_config_flag(iParam1, 168, false);
		if (is_ped_on_mount(iParam1))
		{
			func_915(iParam0);
			return;
		}
		if (func_176(iParam0, 2))
		{
			vVar0 = { func_865(iParam0) };
			func_1103(iParam0, &fVar3);
		}
		else
		{
			vVar0 = { func_787(iParam0) };
			func_1104(iParam0, &fVar3);
		}
		if (func_452(vVar0))
		{
			return;
		}
		func_1105(iParam0, vVar0, 3f, fVar3, 1048576000, 0);
		return;
	}
	else if (!func_176(iParam0, 512) && func_176(iParam0, 256))
	{
		iVar4 = func_1019(iParam0);
		if ((!is_entity_dead(iParam1) && !is_ped_injured(iParam1)) && !has_ped_got_weapon(iParam1, iVar4, 0, true))
		{
			iVar4 = func_863(iParam1, iVar4, 1, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			func_896(iParam0, iVar4, 0, 0, 0);
			return;
		}
	}
}

void func_905(int iParam0, int iParam1)
{
	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	func_1106(iParam0, 0);
}

void func_906(int iParam0, int iParam1)
{
	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	if (is_ped_using_any_scenario(iParam1))
	{
		return;
	}
	iVar0 = func_785(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	func_1108(iParam0, iVar0, func_1107(iParam0));
}

void func_907(int iParam0, int iParam1)
{
	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	if (is_ped_using_any_scenario(iParam1))
	{
		return;
	}
	iVar0 = func_785(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	func_1110(iParam0, iVar0, func_1107(iParam0), func_1109(iParam0));
}

void func_908(int iParam0, int iParam1)
{
	if (!func_766(iParam0, &iVar0, &uVar1) || !func_767(iVar0))
	{
		return;
	}
	if (func_176(iParam0, 4) || func_574(iVar0))
	{
		if (_get_ped_crouch_movement(iParam1))
		{
			_set_ped_crouch_movement(iParam1, false, 0, false);
		}
		return;
	}
	set_blocking_of_non_temporary_events(iParam1, true);
	set_ped_config_flag(iParam1, 168, false);
	if (!_get_ped_crouch_movement(iParam1) && func_1111(iParam0))
	{
		_set_ped_crouch_movement(iParam1, true, 0, false);
	}
	if (!func_178(iParam1))
	{
		iVar2 = func_23(iParam0);
		if (func_118(iVar2))
		{
			func_896(iParam0, iVar2, 1, 1, 1);
		}
	}
	vVar3 = { func_1112(iParam0) };
	if (func_452(vVar3))
	{
		vVar3 = { Local_557.f_20.f_22[iParam0]->f_3 };
	}
	if (!func_1113(iParam0, &fVar6))
	{
		fVar6 = Local_557.f_20.f_22[iParam0]->f_9;
	}
	func_1105(iParam0, vVar3, 1f, fVar6, 1048576000, 0);
}

void func_909(int iParam0, int iParam1)
{
	if (is_ped_using_any_scenario(iParam1))
	{
		if (func_176(iParam0, 16777216))
		{
			iVar0 = get_nearest_player_to_entity(iParam1, 0, 3);
			iVar1 = int_to_playerindex(iVar0);
			vVar2 = { get_entity_coords(iParam1, true, false) + get_entity_forward_vector(iParam1) * Vector(3f, 3f, 3f) };
			if (((iVar0 != -1 && iVar0 != 255) && network_is_player_active(iVar1)) && !is_entity_dead(get_player_ped(iVar1)))
			{
				vVar2 = { get_entity_coords(get_player_ped(iVar1), true, false) };
			}
			_0x463803429297117c(iParam1, vVar2, 3, 1);
		}
		else
		{
			_0xf1c03a5352243a30(iParam1);
		}
	}
	if (((!is_ped_in_combat(iParam1, 0) && !func_637(iParam0, 5000)) && !func_176(iParam0, 16777216)) && func_51(iParam0, 67108864))
	{
		return;
	}
	if (_get_ped_crouch_movement(iParam1))
	{
		_set_ped_crouch_movement(iParam1, false, 0, false);
	}
	set_blocking_of_non_temporary_events(iParam1, false);
	set_ped_config_flag(iParam1, 168, false);
	iVar5 = 65;
	if (((!func_176(iParam0, 16777216) && func_55(Local_15.f_2[iParam0]->f_2)) && func_176(iParam0, 1)) && func_445(Local_15.f_2[iParam0]->f_7) < 1300)
	{
		func_1114(iParam0, iVar5);
	}
	else
	{
		func_864(iParam0, iVar5);
	}
}

void func_910(int iParam0, int iParam1)
{
	set_blocking_of_non_temporary_events(iParam1, true);
	iVar0 = 0;
	iVar1 = func_1115(iParam1, 20f);
	if (_network_is_player_index_valid(iVar1))
	{
		iVar0 = get_player_ped(iVar1);
	}
	if (!is_entity_dead(iVar0))
	{
		func_1116(iParam0, iVar0);
	}
	else
	{
		func_1116(iParam0, 0);
	}
}

void func_911(int iParam0, int iParam1, bool bParam2)
{
	set_blocking_of_non_temporary_events(iParam1, true);
	set_ped_config_flag(iParam1, 168, false);
	if (!func_51(iParam0, 65536))
	{
		func_54(iParam0, &iVar5, 1);
	}
	if (is_ped_using_any_scenario(iParam1) && !_0x0c3cb2e600c8977d(iParam1, 0))
	{
		if (!func_1021(iParam1, 200f, &iVar3, &vVar0, &fVar4))
		{
			vVar0 = { get_entity_coords(iParam1, false, false) };
		}
		_0xeeed8fafec331a70(iParam1, vVar0, 3);
	}
	if ((((!is_ped_on_mount(iParam1) && does_entity_exist(iVar5)) && !is_ped_dead_or_dying(iVar5, true)) && _is_mount_seat_free(iVar5, -1)) && vdist(get_entity_coords(iVar5, false, false), get_entity_coords(iParam1, false, false)) < 30f)
	{
		func_1117(iParam0, iVar5, 1077936128);
		return;
	}
	if (!func_1021(iParam1, 200f, &iVar3, &vVar0, &fVar4))
	{
		vVar0 = { Local_557.f_20.f_22[iParam0]->f_3 };
		fVar4 = 200f;
	}
	if ((bParam2 && fVar4 < 18f) && !is_ped_on_mount(iParam1))
	{
		func_864(iParam0, 0);
		return;
	}
	iVar6 = 10518560;
	if ((((func_176(iParam0, 8388608) && Local_15.f_2[iParam0]->f_2 != 1824637041) && is_ped_human(iParam1)) && !func_778()) && !is_ped_on_mount(iParam1))
	{
		func_1116(iParam0, iVar3);
		return;
	}
	if (is_ped_in_any_vehicle(iParam1, true) && !is_ped_on_mount(iParam1))
	{
		func_1118(iParam0, 64);
		return;
	}
	fVar10 = 40000f;
	if (_get_ped_crouch_movement(iParam1))
	{
		_set_ped_crouch_movement(iParam1, false, 0, false);
	}
	if (!func_176(iParam0, 2048))
	{
		if (func_176(iParam0, 2))
		{
			vVar7 = { func_865(iParam0) };
			func_1103(iParam0, &fVar10);
		}
		else
		{
			vVar7 = { func_787(iParam0) };
			func_1104(iParam0, &fVar10);
		}
		if (func_452(vVar7))
		{
			return;
		}
		if (bParam2)
		{
			func_918(iParam0, vVar7, 3f, fVar10, 1048576000, 0);
		}
		else
		{
			func_1105(iParam0, vVar7, 3f, fVar10, 1048576000, 0);
		}
		return;
	}
	if (bParam2)
	{
		if (!is_entity_dead(iVar3))
		{
			func_1119(iParam0, iVar3, -1f, iVar6);
		}
		else
		{
			func_1120(iParam0, vVar0, -1f, iVar6);
		}
		set_ped_flee_attributes(iParam1, 256, true);
		set_ped_flee_attributes(iParam1, 0, true);
		return;
	}
	else
	{
		if (!is_entity_dead(iVar3))
		{
			func_1121(iParam0, iVar3, -1f, iVar6);
		}
		else
		{
			func_919(iParam0, vVar0, -1f, iVar6);
		}
		set_ped_flee_attributes(iParam1, 256, true);
		set_ped_flee_attributes(iParam1, 4, true);
		return;
	}
}

void func_912(int iParam0, int iParam1)
{
	if (_get_ped_crouch_movement(iParam1))
	{
		_set_ped_crouch_movement(iParam1, false, 0, false);
	}
	if (!func_51(iParam0, 65536) && network_does_network_id_exist(Local_15.f_2[iParam0]->f_1))
	{
		iVar0 = net_to_ped(Local_15.f_2[iParam0]->f_1);
	}
	set_blocking_of_non_temporary_events(iParam1, true);
	set_ped_config_flag(iParam1, 168, false);
	if (func_1022(iParam1, iVar0, 0))
	{
		func_1117(iParam0, iVar0, 1077936128);
		return;
	}
	if ((((Local_557.f_20.f_22[iParam0]->f_15 >= 0 && Local_557.f_20.f_22[iParam0]->f_15 < 21) && network_does_network_id_exist(&(Local_15.f_2[Local_557.f_20.f_22[iParam0]->f_15]))) && !is_ped_dead_or_dying(net_to_ped(&(Local_15.f_2[Local_557.f_20.f_22[iParam0]->f_15])), true)) && is_ped_on_mount(iParam1))
	{
		iVar1 = net_to_ped(&(Local_15.f_2[Local_557.f_20.f_22[iParam0]->f_15]));
		set_entity_load_collision_flag(iParam1, 1);
		if (func_895(iParam1, 1056466932))
		{
			func_1122(iParam0);
			return;
		}
		func_1097(iParam0, iVar1, Local_557.f_20.f_22[iParam0]->f_6, 1065353216);
		return;
	}
	set_entity_load_collision_flag(iParam1, 0);
}

void func_913(int iParam0, int iParam1)
{
	if (func_895(iParam1, -1672646357))
	{
		return;
	}
	if (!func_861(iParam0, &iVar0, &iVar1) || !func_153(iVar0, 0))
	{
		set_blocking_of_non_temporary_events(iParam1, false);
		return;
	}
	iVar2 = &Local_15.f_217[iVar0];
	if ((func_176(iParam0, 268435456) && func_176(iParam0, 2)) && func_153(iVar1, 0))
	{
		iVar0 = iVar1;
		iVar2 = &Local_15.f_217[iVar1];
	}
	if (!func_153(iVar0, 1))
	{
		set_blocking_of_non_temporary_events(iParam1, false);
		return;
	}
	if ((has_pickup_been_collected(iVar2) || !does_pickup_object_exist(iVar2)) || func_1023(iVar0))
	{
		set_blocking_of_non_temporary_events(iParam1, false);
		return;
	}
	func_174(11, iVar0, func_173(0, 8), -1);
	return;
}

bool func_914(int iParam0, int iParam1, int iParam2)
{
	if ((!func_121(&Var0, iParam0, iParam1) || !func_346(Var0, -1143761632, &bVar5, 0)) || !bVar5)
	{
		return false;
	}
	if (!func_345(Var0, 1326664274, iParam2, 0))
	{
		*iParam2 = 0;
	}
	return true;
}

void func_915(int iParam0)
{
	if (func_1071(Local_15.f_2[iParam0], 501393341, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	task_dismount_animal(iVar0, 0, 0, 0, 0, 0);
}

void func_916(int iParam0)
{
	if (func_1071(Local_15.f_2[iParam0], 1345172471, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	task_combat_hated_targets_no_los_test(iVar0, 200f);
}

bool func_917(int iParam0, int iParam1, float fParam2)
{
	if (!func_121(&Var0, iParam0, iParam1) || !func_348(Var0, 912480409, fParam2, 0))
	{
		return false;
	}
	return true;
}

void func_918(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, float fParam7)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (!func_895(iVar0, 713668775))
	{
		func_1105(iParam0, vParam1, fParam4, fParam5, fParam6, fParam7);
		return;
	}
	iVar1 = get_best_ped_weapon(iVar0, false, false);
	if (!_0x705be297eebdb95d(iVar1))
	{
		return;
	}
	if (is_ped_on_mount(iVar0))
	{
		func_1122(iParam0);
	}
}

void func_919(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (func_1071(Local_15.f_2[iParam0], 518218985, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	iVar1 = 0;
	if (is_ped_on_mount(iVar0))
	{
		iVar1 = get_mount(iVar0);
	}
	_task_smart_flee_style_coord(iVar0, vParam1, 4, iParam5, fParam4, -1, iVar1);
}

char* func_920(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MpDefault";
		case 1:
			return "MpStealthHard";
		case 2:
			return "MpStealthHardDeaf";
		case 3:
			return "MpStealthEasy";
		case 4:
			return "MpAmbient";
		case 5:
			return "MpVehicleConvoy";
		case 6:
			return "MpDefaultNoShotFired";
		case 7:
			return "MpStealthHardNoShotFired";
		case 8:
			return "MpMissionGiver";
		case 9:
			return "MpHearingRangeReaction";
		default:
			break;
	}
	return "InvalidPreset";
}

bool func_921(int iParam0)
{
	func_313(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Local_300[Local_557.f_1008]->f_4[iVar0]), iVar1);
}

bool func_922(int iParam0, int iParam1, int iParam2)
{
	iVar0 = _0x796eecff0c6d39be(iParam1, 0, iParam2);
	switch (iVar0)
	{
		case -1507090758:
		case -1102089407:
		case -885872273:
		case -141209784:
			bVar3 = true;
			break;
		case 157877922:
		case 506397713:
			bVar3 = true;
			bVar5 = true;
			break;
		case -1604965832:
		case -587661767:
			bVar3 = true;
			bVar4 = true;
			break;
	}
	if (!bVar3)
	{
		return false;
	}
	if (iVar0 == -1604965832 && Local_15.f_2[iParam0]->f_4 == 5)
	{
		return false;
	}
	iVar1 = _0x822a001bcea5bd81(iParam1, iVar0, 0, iParam2);
	if (bVar4 || bVar5)
	{
		if (!does_entity_exist(iVar1))
		{
			return false;
		}
		if (bVar4)
		{
			fVar2 = _0x900ca00ce703e1e2(iParam1);
		}
		else if (bVar5)
		{
			fVar2 = _0x2ba9d7bf629f920c(iParam1);
		}
		if (func_1014(iParam1, iVar1, 1, 0) > fVar2)
		{
			_0x1a5c5d350068a673(iParam1, iParam2);
			return false;
		}
	}
	return true;
}

void func_923(int iParam0, var uParam1)
{
	func_313(iParam0, &iVar0, &iVar1);
	set_bit(uParam1->f_4[iVar0], iVar1);
}

int func_924()
{
	return Global_1301323->f_150.f_4;
}

int func_925(struct<2> Param0)
{
	if (&Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_1123(Param0))
	{
		return -1;
	}
	iVar1 = func_1124(Param0);
	if (iVar1 >= 0)
	{
		func_1125(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900806;
		*(*Global_1900807)[iVar0] = { Param0 };
		*(*Global_1900838)[iVar0] = { Var2 };
		func_1125(Param0, 1);
		Global_1900806 = &Global_1900806 + 1;
		if (&Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_926(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (!func_537(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1126(Param0);
	}
	if (!func_73(func_836(0)))
	{
		func_835(Param0, 3);
		func_837(bParam3);
		func_838(!bParam4);
		func_1127(Param0, -1);
		if (bParam2 && !func_1128(2))
		{
			func_1045(&Global_0, 1024);
		}
		func_840(1);
	}
	else
	{
		func_1127(Param0, -1);
		func_835(Param0, 4);
		func_1129(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_842(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1130(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

bool func_927(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar0))
	{
		if (iVar0 == player_id())
		{
			_0xc08aff658b2e51da(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_929(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (_0xc084ff658b2e61da(&Var2) - 1))
			{
				if ((_0xc084ff658b2e81da(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return true;
				}
				iVar19++;
			}
		}
	}
	return false;
}

char* func_928(int iParam0, bool bParam1, int iParam2)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return "";
	}
	if (!network_is_player_active(_0x4be6c13a45cca8ec(iParam0)))
	{
		return "";
	}
	if (bParam1)
	{
		if (iParam2 == 0)
		{
			return _create_var_string(10, "NM_POSSE_NAME_DEFAULT", func_857(get_player_name(_0x4be6c13a45cca8ec(iParam0)), 109029619));
		}
		else
		{
			sVar0 = _create_var_string(10, "NM_POSSE_NAME_DEFAULT", func_857(get_player_name(_0x4be6c13a45cca8ec(iParam0)), 109029619));
			return func_1064(sVar0, iParam2);
		}
	}
	if (iParam2 == 0)
	{
		return _create_var_string(10, "NM_POSSE_NAME_DEFAULT", get_player_name(_0x4be6c13a45cca8ec(iParam0)));
	}
	sVar0 = _create_var_string(10, "NM_POSSE_NAME_DEFAULT", get_player_name(_0x4be6c13a45cca8ec(iParam0)));
	return func_1064(sVar0, iParam2);
}

struct<7> func_929(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

char* func_930(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_931(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_1064(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_932(char* sParam0)
{
	return _0xd4022c7286b0dfa2(sParam0, 100, 22);
}

bool func_933(int iParam0, char* sParam1)
{
	sVar0 = get_player_name(iParam0);
	iVar1 = get_length_of_literal_string(sVar0);
	if (compare_strings(sVar0, sParam1, false, iVar1) == 0)
	{
		return true;
	}
	return false;
}

bool func_934()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_935(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int* iParam5)
{
	if (func_1131(iParam0) && !func_690(1))
	{
		return false;
	}
	if (!func_43(1))
	{
		return false;
	}
	if (bParam2)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			if (iParam1 != 2)
			{
				return false;
			}
			if (func_690(4096))
			{
				return false;
			}
			if (!func_690(32))
			{
				return false;
			}
			if (func_289(Local_557.f_584.f_335))
			{
				return false;
			}
			if (func_45())
			{
				if (!func_59(262144))
				{
					return false;
				}
				if (Local_557.f_20.f_16 == 1047079933)
				{
					iVar0 = 0;
					while (iVar0 < 32)
					{
						iVar2 = &Local_15.f_234[iVar0];
						if (iVar2 == 255)
						{
						}
						else if (!network_is_player_active(iVar2))
						{
						}
						else
						{
							*iParam4 = &Local_15.f_234[iVar0];
							return true;
						}
						iVar0++;
					}
					return false;
				}
				else
				{
					if (&Local_15.f_234[0] == 255)
					{
						return false;
					}
					if (!network_is_player_active(&(Local_15.f_234[0])))
					{
						return false;
					}
					*iParam4 = &Local_15.f_234[0];
					return true;
				}
			}
			func_1132(2, iParam5);
			return true;
		case 4:
			if (bParam2)
			{
				return false;
			}
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_557.f_20 != 1657045547)
			{
				return false;
			}
			if (!func_690(128))
			{
				return false;
			}
			if (vdist(Global_35, Local_557.f_20.f_10) > Local_557.f_20.f_13)
			{
				Local_557.f_1002 = 0;
				return false;
			}
			if (Local_557.f_1002 == 0)
			{
				Local_557.f_1002 = get_network_time_accurate();
				return false;
			}
			else if (func_445(Local_557.f_1002) < 30000)
			{
				return false;
			}
			Local_557.f_1002 = 0;
			return true;
		case 3:
			if (bParam2)
			{
				return false;
			}
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_557.f_20 != 1657045547)
			{
				return false;
			}
			if (func_690(128))
			{
				return false;
			}
			if (!does_blip_exist(Local_557.f_584.f_23))
			{
				return false;
			}
			if (vdist(Global_35, Local_557.f_20.f_10) > Local_557.f_20.f_13)
			{
				return false;
			}
			func_1132(1, iParam5);
			return true;
		case 2:
			if (Local_557.f_20.f_16 != 1862763509)
			{
				return false;
			}
			if (iParam1 != 4)
			{
				return false;
			}
			if (func_690(512))
			{
				return false;
			}
			if (func_47(Local_300[Local_557.f_1008], 65536))
			{
				return false;
			}
			if (func_84(Local_300[Local_557.f_1008]) != 2)
			{
				return false;
			}
			iVar1 = player_id();
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (&Local_15.f_234[iVar0] == 255)
				{
				}
				else if (&Local_15.f_234[iVar0] == iVar1)
				{
				}
				else if (!network_is_player_active(&(Local_15.f_234[iVar0])))
				{
				}
				else if (!_0x3f59fe6f37869576(iVar1, &(Local_15.f_234[iVar0])))
				{
				}
				else
				{
					*iParam4 = &Local_15.f_234[iVar0];
					if (is_string_null_or_empty(get_player_name(*iParam4)))
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
		case 5:
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_557.f_20 != 1657045547)
			{
				return false;
			}
			if (!func_690(128))
			{
				return false;
			}
			if (!func_43(1024))
			{
				return false;
			}
			if (!does_blip_exist(Local_557.f_584.f_23))
			{
				return false;
			}
			func_44(1024);
			func_1132(1, iParam5);
			return true;
		case 6:
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_557.f_20 != 1657045547)
			{
				return false;
			}
			if (func_690(128))
			{
				return false;
			}
			if (func_690(2048))
			{
				return false;
			}
			if (!does_blip_exist(Local_557.f_584.f_23))
			{
				return false;
			}
			func_1132(1, iParam5);
			return true;
		case 7:
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_557.f_20 != 1657045547)
			{
				return false;
			}
			if (!func_690(128))
			{
				return false;
			}
			if (func_690(8192))
			{
				return false;
			}
			if (!_0x45ab66d02b601fa7(player_id()))
			{
				return false;
			}
			return true;
		case 8:
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_557.f_20 != 349772825)
			{
				return false;
			}
			if (func_690(262144))
			{
				return false;
			}
			iVar3 = 0;
			while (iVar3 < 21)
			{
				if (Local_15.f_2[iVar3]->f_2 != -1360694003)
				{
				}
				else if (!func_176(iVar3, 8) || func_176(iVar3, 1))
				{
				}
				else if (!does_blip_exist(&(Local_557.f_584[iVar3])))
				{
				}
				else if (!func_52(iVar3, &iVar4, 1, 0))
				{
				}
				else if (func_411(get_entity_coords(iVar4, false, false), Global_35) > 50f)
				{
				}
				else
				{
					func_1132(3, iParam5);
					return true;
				}
				iVar3++;
			}
			return false;
		default:
			break;
	}
	return false;
}

int func_936(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_937(int iParam0)
{
	return 10000;
}

char* func_938(int iParam0, int iParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (Local_557.f_20)
			{
				case 349772825:
					return "NET_AS_HELP_INTRO_STANDARD";
				case 1657045547:
					return _create_var_string(2, "NET_AS_HELP_INTRO_TRACKING", sParam2);
				case -590482787:
					return _create_var_string(10, "NET_AS_HELP_INTRO_PVP_PLAYER", func_1133(iParam1, 109029619));
				case -1711308722:
					return _create_var_string(10, "NET_AS_HELP_INTRO_PVP_POSSE", func_1134(Local_15.f_284, 109029619));
				default:
					break;
			}
			return "";
		case 2:
			return _create_var_string(42, "NET_AS_HELP_ALLY_SELECTED", func_1133(iParam1, -963477619), func_1135(859817522));
		case 3:
			if (Local_557.f_20.f_549 > 1)
			{
				return _create_var_string(2, "NET_AS_HELP_LAST_KNOWN_LOCATION_FOUND_PLURAL", sParam2);
			}
			return _create_var_string(2, "NET_AS_HELP_LAST_KNOWN_LOCATION_FOUND", sParam2);
		case 4:
			return "NET_AS_HELP_TRACKING";
		case 5:
			if (Local_15.f_275 > 1)
			{
				return _create_var_string(2, "NET_AS_HELP_RETURN_TO_LAST_KNOWN_LOCATION_PLURAL", sParam2);
			}
			return _create_var_string(2, "NET_AS_HELP_RETURN_TO_LAST_KNOWN_LOCATION", sParam2);
		case 6:
			if (Local_15.f_275 > 1)
			{
				return _create_var_string(2, "NET_AS_HELP_GO_TO_LAST_KNOWN_LOCATION_PLURAL", sParam2);
			}
			return _create_var_string(2, "NET_AS_HELP_GO_TO_LAST_KNOWN_LOCATION", sParam2);
		case 7:
			return "NET_AS_HELP_FOCUS_ON_TRAIL";
		case 8:
			return _create_var_string(2, "NET_AS_HELP_STEALTH_AVOID_DETECTION", sParam2);
		default:
			break;
	}
	return "";
}

void func_939(char* sParam0, int iParam1, bool bParam2)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	if (bParam2)
	{
		func_1136(1);
	}
	Local_557.f_584.f_333 = func_1137(sParam0, iParam1, 0, 0, 0, 1);
}

bool func_940(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			*iParam1 = 512;
			return true;
		case 4:
			*iParam1 = 256;
			return true;
		case 3:
			*iParam1 = 128;
			return true;
		case 5:
			*iParam1 = 1024;
			return true;
		case 6:
			*iParam1 = 2048;
			return true;
		case 1:
			*iParam1 = 4096;
			return true;
		case 8:
			*iParam1 = 262144;
			return true;
		case 7:
			*iParam1 = 8192;
			return true;
		default:
			break;
	}
	return false;
}

bool func_941()
{
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_548)
	{
		if (Local_15.f_2[iVar0]->f_2 != -1574827255)
		{
		}
		else if (!func_431(iVar0, Local_300[Local_557.f_1008]))
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

void func_942(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((*uParam0)[iParam2]->f_23 != iParam1)
	{
		(*uParam0)[iParam2]->f_23 = iParam1;
	}
}

int func_943()
{
	if (func_45())
	{
		if (func_47(Local_300[Local_557.f_1008], 131072) || func_47(Local_300[Local_557.f_1008], 8192))
		{
			return 1293773224;
		}
	}
	return -1103135225;
}

int func_944(int iParam0)
{
	return func_1138(iParam0);
}

void func_945(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((*uParam0)[iParam2]->f_25 != iParam1)
	{
		(*uParam0)[iParam2]->f_25 = iParam1;
	}
}

void func_946(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((*uParam0)[iParam2]->f_26 != iParam1)
	{
		(*uParam0)[iParam2]->f_26 = iParam1;
	}
}

int func_947(var uParam0, bool bParam1)
{
	if (!func_1139())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_1140())
			{
				uParam0->f_3 = _uiflowblock_request(-119209833);
				func_498(1);
				func_1141(uParam0, 1);
			}
			return 0;
		case 1:
			if (!func_1142())
			{
				return 0;
			}
			func_1141(uParam0, 2);
			break;
	}
	Global_1940144->f_110 = 1;
	return 1;
}

int func_948(var uParam0)
{
	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = _databinding_add_data_container_from_path("", "centralInfoDatastore");
		func_1143(uParam0->f_5, &(uParam0->f_6), 0);
		func_1143(uParam0->f_5, &(uParam0->f_7), 1);
		func_1143(uParam0->f_5, &(uParam0->f_8), 37);
		func_1144(uParam0->f_8, 1);
		return 0;
	}
	return 1;
}

int func_949(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam2 != 0)
	{
		iParam3 = iParam2;
		iParam4 = iParam2;
	}
	if ((*uParam1)[0]->f_21 == 0)
	{
		func_1145(uParam0, uParam1, 0, "meter0", iParam3, iParam5);
		func_1145(uParam0, uParam1, 1, "meter1", iParam4, iParam6);
		func_1145(uParam0, uParam1, 2, "meter2", iParam2, 0);
		func_1145(uParam0, uParam1, 3, "meter3", iParam2, 0);
		func_1145(uParam0, uParam1, 4, "meter4", iParam2, 0);
		func_1145(uParam0, uParam1, 5, "meter5", iParam2, 0);
		func_1145(uParam0, uParam1, 6, "meter6", iParam2, 0);
		return 0;
	}
	return 1;
}

int func_950(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (_uiflowblock_is_loaded(uParam0->f_3))
			{
				func_1146(uParam0, 1);
			}
			break;
		case 1:
			*uParam0 = iParam1;
			if (*uParam0 != 0)
			{
				_uiflowblock_enter(uParam0->f_3, *uParam0);
				_uistatemachine_create(1546991729, uParam0->f_3);
			}
			func_1146(uParam0, 2);
			break;
		case 2:
			if (iParam1 != *uParam0)
			{
				func_1146(uParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (_uistatemachine_exists(1546991729) && _0xf7c180f57f85d0b8(1546991729))
			{
				_0x6b9fe4f0ba521a19(1546991729, 0);
				func_1146(uParam0, 4);
			}
			else
			{
				func_1146(uParam0, 0);
			}
			break;
		case 4:
			if (!_0x11e73195e735b25b(1546991729))
			{
				*bParam2 = 1;
				func_1146(uParam0, 0);
			}
			break;
	}
	return 0;
}

void func_951(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	sVar0 = func_1147(iParam1, bParam2, 3, 0, 0, 0);
	if (uParam0->f_13 != iParam1)
	{
		func_1148(uParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (uParam0->f_14 != bVar1)
	{
		func_1144(uParam0->f_7, bVar1);
		uParam0->f_14 = bVar1;
	}
	func_1149(uParam0, iParam1, sParam4);
	func_1150(uParam0, iParam1);
	uParam0->f_13 = iParam1;
}

void func_952(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_1151(iParam1, &iVar1, &uVar2, &iVar3, &uVar4, &uVar5, &uVar6, &uVar7);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		bVar8 = is_bit_set(iParam5, iVar0);
		bVar9 = is_bit_set(iParam6, iVar0);
		func_1152(uParam0, iVar0, iVar1, uVar2, iVar3, uVar4, uVar5, uVar6, uVar7, bVar8, bParam2, bParam3, bParam4, bVar9);
		iVar0++;
	}
}

bool func_953(int iParam0)
{
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return false;
	}
	else if (!func_418(1))
	{
		return false;
	}
	if (func_51(iParam0, 262144))
	{
		return false;
	}
	if (Local_15.f_2[iParam0]->f_2 != -1574827255)
	{
		return false;
	}
	if (func_90() > 5)
	{
		return false;
	}
	if (func_45())
	{
		return false;
	}
	if (!func_479(iParam0, 1, 1))
	{
		return false;
	}
	if (func_43(65536) && !func_47(Local_300[Local_557.f_1008], 1024))
	{
		return false;
	}
	if ((Local_557.f_20 == 1657045547 && func_429(iParam0)) && !func_431(iParam0, Local_300[Local_557.f_1008]))
	{
		return false;
	}
	return true;
}

void func_954(int iParam0)
{
	if (does_blip_exist(&(Local_557.f_584[iParam0])))
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	Local_557.f_584[iParam0] = _blip_add_for_entity(408396114, iVar0);
	set_blip_sprite(&(Local_557.f_584[iParam0]), -1103135225, true);
	_blip_set_modifier(&(Local_557.f_584[iParam0]), 942020339);
	_blip_set_modifier(&(Local_557.f_584[iParam0]), 580546400);
	_blip_set_modifier(&(Local_557.f_584[iParam0]), 231194138);
	if (func_51(iParam0, 16777216))
	{
		iVar1 = func_885(iParam0, iVar0, 1);
	}
	if (iVar1 != 0)
	{
		_set_blip_name_from_player_string(&(Local_557.f_584[iParam0]), _get_label_text_by_hash(iVar1));
		_blip_set_modifier(&(Local_557.f_584[iParam0]), 785247196);
	}
	else
	{
		set_blip_name_from_text_file(&(Local_557.f_584[iParam0]), func_1153());
	}
}

bool func_955(int iParam0)
{
	if (!func_418(1) || !func_43(4))
	{
		return false;
	}
	if (Local_557.f_20 != 1657045547)
	{
		return false;
	}
	if (!func_690(128))
	{
		return false;
	}
	if (func_45())
	{
		return false;
	}
	if (func_90() > 5)
	{
		return false;
	}
	if (Local_15.f_2[iParam0]->f_2 != -1574827255)
	{
		return false;
	}
	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		return false;
	}
	if (func_661(iVar0, Global_35, 1) > 55f)
	{
		return false;
	}
	return true;
}

void func_956(int iParam0)
{
	if (func_51(iParam0, 128))
	{
		func_1154(2001176446, net_to_ent(&(Local_15.f_2[iParam0])), 1);
		func_295(iParam0, 128);
	}
	else if (func_1155())
	{
		func_177(iParam0, 128);
	}
}

bool func_957(int iParam0)
{
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return false;
	}
	else if (!func_418(1))
	{
		return false;
	}
	if (func_176(iParam0, 4096))
	{
		return false;
	}
	if (Local_557.f_20 == 1657045547)
	{
		fVar1 = 90f;
	}
	else
	{
		fVar1 = 200f;
	}
	if (((func_55(Local_15.f_2[iParam0]->f_2) && func_294(iParam0)) && func_52(iParam0, &iVar0, 1, 0)) && vdist(Global_35, get_entity_coords(iVar0, false, false)) > fVar1)
	{
		return false;
	}
	if (Local_15.f_2[iParam0]->f_2 != -1360694003 && Local_15.f_2[iParam0]->f_2 != 516423162)
	{
		return false;
	}
	if ((!func_176(iParam0, 1) && !func_176(iParam0, 8)) && !func_176(iParam0, 1024))
	{
		return false;
	}
	if ((func_429(iParam0) && !func_431(iParam0, Local_300[Local_557.f_1008])) && !func_176(iParam0, 1))
	{
		return false;
	}
	if (!func_479(iParam0, 1, func_478(Local_15.f_2[iParam0]->f_2)))
	{
		return false;
	}
	return true;
}

bool func_958(int iParam0)
{
	if (!func_47(Local_300[Local_557.f_1008], 4))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (func_1156(iParam0))
	{
		return false;
	}
	if (func_163(iParam0))
	{
		return false;
	}
	if (func_84(Local_300[Local_557.f_1008]) != 2)
	{
		return false;
	}
	return true;
}

void func_959(int iParam0, int iParam1)
{
	if (Global_1071686->f_21689[iParam0]->f_4 != iParam1)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			if (Global_1071686->f_21689[iParam0]->f_4 != 0)
			{
				_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_4);
			}
		}
		Global_1071686->f_21689[iParam0]->f_4 = iParam1;
		func_805(iParam0);
	}
}

void func_960(int iParam0, int iParam1)
{
	if (Global_1071686->f_21689[iParam0]->f_1 != iParam1)
	{
		Global_1071686->f_21689[iParam0]->f_1 = iParam1;
		func_805(iParam0);
	}
}

void func_961(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28349), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
	_0x31010318ba9897ac(&(Global_1071686->f_28348), iParam0);
}

void func_962(int iParam0, int iParam1)
{
	if (Global_1071686->f_21952[iParam0]->f_4 != iParam1)
	{
		Global_1071686->f_21952[iParam0]->f_4 = iParam1;
		func_805(iParam0);
	}
}

bool func_963(int iParam0)
{
	if (!func_47(Local_300[Local_557.f_1008], 8192) && !func_47(Local_300[Local_557.f_1008], 131072))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (func_1156(iParam0))
	{
		return false;
	}
	if (func_163(iParam0))
	{
		return false;
	}
	if (func_84(Local_300[Local_557.f_1008]) != 2)
	{
		return false;
	}
	return true;
}

bool func_964(int iParam0)
{
	if (!func_47(Local_300[Local_557.f_1008], 8192))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (!func_690(32))
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
	if (!network_is_player_a_participant(iParam0))
	{
		return false;
	}
	iVar0 = network_get_participant_index(iParam0);
	if (!func_47(Local_300[iVar0], 4))
	{
		return false;
	}
	return true;
}

void func_965(int iParam0)
{
	iVar0 = int_to_playerindex(iParam0);
	if (_0x72b2e00c9bac6789(&(Local_557.f_959), iParam0))
	{
		return;
	}
	if (!network_is_player_connected(iVar0))
	{
		return;
	}
	func_1157(iParam0, 1454004076);
	func_962(iParam0, -333142948);
	_0x31010318ba9897ac(&(Local_557.f_959), iParam0);
}

int func_966(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 408396114;
		case 1:
			return 408396114;
		case 3:
			return 831283580;
		case 4:
			return 408396114;
		default:
			break;
	}
	return 0;
}

bool func_967(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 675509286;
			return true;
		case 4:
			*iParam1 = -1103135225;
			return true;
		default:
			break;
	}
	return false;
}

char* func_968()
{
	return "NET_AS_BLIP_LAST_KNOWN_LOCATION";
}

bool func_969()
{
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_548)
	{
		if (Local_15.f_2[iVar0]->f_2 != -1574827255)
		{
		}
		else if (func_431(iVar0, Local_300[Local_557.f_1008]))
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

char* func_970()
{
	return "NET_AS_BLIP_SEARCH";
}

char* func_971()
{
	return "NET_AS_BLIP_GO_TO_AREA";
}

void func_972()
{
	if (!func_690(16384) && !func_690(32768))
	{
		return;
	}
	if (does_blip_exist(Local_557.f_584.f_22))
	{
		_set_blip_flash_style(Local_557.f_584.f_22, -1878373110);
	}
	if (does_blip_exist(Local_557.f_584.f_23))
	{
		_set_blip_flash_style(Local_557.f_584.f_23, -1878373110);
	}
	func_656(32768);
	func_656(16384);
}

void func_973()
{
	if (func_690(32768))
	{
		return;
	}
	if (!does_blip_exist(Local_557.f_584.f_23))
	{
		return;
	}
	_blip_set_modifier(Local_557.f_584.f_23, -1878373110);
	if (does_blip_exist(Local_557.f_584.f_22))
	{
		_set_blip_flash_style(Local_557.f_584.f_22, -1878373110);
	}
	func_656(16384);
	func_185(32768);
}

void func_974()
{
	if (func_690(16384))
	{
		return;
	}
	if (!does_blip_exist(Local_557.f_584.f_22))
	{
		return;
	}
	_blip_set_modifier(Local_557.f_584.f_22, -1878373110);
	if (does_blip_exist(Local_557.f_584.f_23))
	{
		_set_blip_flash_style(Local_557.f_584.f_23, -1878373110);
	}
	func_656(32768);
	func_185(16384);
}

bool func_975()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0]->f_2 != -1574827255)
		{
		}
		else if (!does_blip_exist(&(Local_557.f_584[iVar0])))
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

char* func_976()
{
	switch (Local_557.f_20.f_16)
	{
		case 1862763509:
			return "NET_AS_SHARD_PLAYER";
		case 1047079933:
			return "NET_AS_SHARD_POSSE";
		default:
			break;
	}
	return "NET_AS_SHARD_STANDARD";
}

int func_977(char* sParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return 0;
	}
	uVar0 = func_1160(sParam0, sParam1, 7500, func_1158(), func_1159(), 0, 1, 1);
	return uVar0;
}

char* func_978(int iParam0, bool bParam1)
{
	iVar0 = func_148();
	bVar1 = func_45();
	func_306(iVar0 != 2, &sVar2, &sVar3);
	if (func_59(8388608))
	{
		return "NET_AS_SHARD_BODY_OVER_ABANDONED";
	}
	if (func_47(Local_300[Local_557.f_1008], 65536))
	{
		if (func_43(8388608))
		{
			return "NET_AS_SHARD_BODY_FAIL_ABANDON_DISBAND_POSSE";
		}
		return "NET_AS_SHARD_BODY_FAIL_SWITCH_POSSE";
	}
	switch (iVar0)
	{
		case 2:
			switch (iParam0)
			{
				case 1:
					if (bVar1)
					{
						if (bParam1)
						{
							return _create_var_string(10, "NET_AS_SHARD_BODY_PVP_WIN", func_857(func_860(0), -5208416));
						}
						return _create_var_string(10, "NET_AS_SHARD_BODY_PVP_WIN", func_857(func_1161(), -5208416));
					}
					if (bParam1)
					{
						return "NET_AS_SHARD_BODY_STD_WIN_SINGLE";
					}
					return "NET_AS_SHARD_BODY_STD_WIN";
				case 0:
					if (bVar1)
					{
						return _create_var_string(2, "NET_AS_SHARD_BODY_PVP_OVER", sVar2, sVar3);
					}
					return _create_var_string(2, "NET_AS_SHARD_BODY_STD_OVER", sVar2, sVar3);
				case 2:
					if (func_59(131072))
					{
						return "NET_AS_SHARD_BODY_EXPIRED";
					}
					else if (bVar1 && !func_59(4194304))
					{
						if (Local_557.f_20.f_16 == 1862763509)
						{
							if (func_859(0))
							{
								return _create_var_string(10, "NET_AS_SHARD_BODY_PVP_FAIL_DC_PLAYER", func_857(func_860(0), -5208416));
							}
							else
							{
								return "NET_AS_SHARD_BODY_PVP_FAIL_DC_PLAYER_GEN";
							}
						}
						else if (Local_557.f_20.f_16 == 1047079933)
						{
							if (func_1162())
							{
								return _create_var_string(10, "NET_AS_SHARD_BODY_PVP_FAIL_DC_POSSE", func_857(func_1161(), -5208416));
							}
							else
							{
								return "NET_AS_SHARD_BODY_PVP_FAIL_DC_POSSE_GEN";
							}
						}
					}
					else
					{
						if (bVar1)
						{
							return _create_var_string(2, "NET_AS_SHARD_BODY_PVP_OVER", sVar2, sVar3);
						}
						return _create_var_string(2, "NET_AS_SHARD_BODY_STD_OVER", sVar2, sVar3);
					}
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					if (bParam1)
					{
						return "NET_AS_SHARD_BODY_STD_SECONDARY_WIN_SINGLE";
					}
					return "NET_AS_SHARD_BODY_STD_SECONDARY_WIN";
				case 0:
					return _create_var_string(2, "NET_AS_SHARD_BODY_STD_SECONDARY_OVER", sVar2, sVar3);
				case 2:
					if (bParam1)
					{
						return "NET_AS_SHARD_BODY_STD_SECONDARY_FAIL_SINGLE";
					}
					return "NET_AS_SHARD_BODY_STD_SECONDARY_FAIL";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					if (Local_557.f_20.f_16 == 1047079933)
					{
						return "NET_AS_SHARD_BODY_PVP_TARGET_POSSE_WIN";
					}
					return "NET_AS_SHARD_BODY_PVP_TARGET_WIN";
				case 0:
					if (Local_557.f_20.f_16 == 1047079933)
					{
						return _create_var_string(2, "NET_AS_SHARD_BODY_PVP_POSSE_OVER", sVar2, sVar3);
					}
					return "NET_AS_SHARD_BODY_PVP_TARGET_WIN";
				case 2:
					if (Local_557.f_20.f_16 == 1047079933)
					{
						return "NET_AS_SHARD_BODY_PVP_POSSE_FAIL";
					}
					return "NET_AS_SHARD_BODY_PVP_TARGET_FAIL";
				default:
					break;
			}
			break;
		case 4:
			if ((!func_59(131072) && !func_59(4194304)) && iParam0 != 1)
			{
				if (Local_557.f_20.f_16 == 1862763509)
				{
					if (func_859(0))
					{
						return _create_var_string(10, "NET_AS_SHARD_BODY_PVP_FAIL_DC_PLAYER", func_857(func_860(0), -963477619));
					}
					else
					{
						return "NET_AS_SHARD_BODY_PVP_FAIL_DC_PLAYER_GEN";
					}
				}
				else if (Local_557.f_20.f_16 == 1047079933)
				{
					if (func_1162())
					{
						return _create_var_string(10, "NET_AS_SHARD_BODY_PVP_FAIL_DC_POSSE", func_857(func_1161(), -963477619));
					}
					else
					{
						return "NET_AS_SHARD_BODY_PVP_FAIL_DC_POSSE_GEN";
					}
				}
			}
			switch (iParam0)
			{
				case 1:
					return _create_var_string(10, "NET_AS_SHARD_BODY_PVP_ALLY_WIN", func_857(func_860(0), -963477619));
				case 0:
					return _create_var_string(2, "NET_AS_SHARD_BODY_PVP_POSSE_OVER", sVar2, sVar3);
				case 2:
					if (Local_557.f_20.f_16 == 1047079933)
					{
						return "NET_AS_SHARD_BODY_PVP_POSSE_FAIL";
					}
					return _create_var_string(10, "NET_AS_SHARD_BODY_PVP_ALLY_FAIL", func_857(func_860(0), -963477619));
				default:
					break;
			}
			break;
	}
	return "";
}

int func_979(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return 0;
	}
	_0xdd1232b332cbb9e7(11, 1, 0);
	if (iParam2 <= 0)
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_FAILED";
	}
	else if (iParam2 == iParam3)
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_PASSED";
	}
	else
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_OVER";
	}
	if (bParam4)
	{
		uVar0 = func_1165(sVar1, sParam0, sParam1, 7500, func_1163(), func_1164(), 0, 1, 1, 1);
	}
	else
	{
		uVar0 = func_1160(sVar1, sParam1, 7500, func_1163(), func_1164(), 0, 1, 1);
	}
	return uVar0;
}

char* func_980(int iParam0)
{
	if (func_258() == 1862763509)
	{
		bVar0 = true;
	}
	else if (func_258() == 1047079933)
	{
		bVar0 = false;
	}
	else
	{
		bVar0 = Local_557.f_20.f_549 <= true;
	}
	switch (iParam0)
	{
		case 14:
			return func_1166();
		case 1:
			return func_1167(0);
		case 2:
			return func_1167(1);
		case 5:
			return func_1168(bVar0);
		case 11:
			return func_1169();
		case 13:
			return func_1170();
		case 12:
			return func_1171();
		case 7:
			if (func_45())
			{
				return func_1172();
			}
			else if (Local_557.f_20 == 1657045547)
			{
				return func_1173(0);
			}
			else
			{
				return func_1173(0);
			}
			break;
		case 8:
			if (func_45())
			{
				return func_1172();
			}
			else if (Local_557.f_20 == 1657045547)
			{
				return func_1173(1);
			}
			else
			{
				return func_1173(1);
			}
			break;
	}
	return "";
}

var func_981(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_982(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_983(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_984(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_985(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_986()
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

void func_987(int iParam0)
{
	if (func_1174(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

int func_988(int iParam0)
{
	if (func_119(&Var0) && func_120(&Var0, 1525953930, iParam0, 0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

int func_989(int iParam0)
{
	iVar0 = 1823139082;
	if (!func_119(&Var1) || !func_120(&Var1, 1606032220, iParam0, 0))
	{
		return iVar0;
	}
	func_117(Var1, 456924499, &uVar6, 0);
	return iVar0;
}

bool func_990(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 217995581;
		uParam1->f_3 = iParam0;
		return _datafile_get_data_node_index(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_991(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

bool func_992(int iParam0)
{
	if ((iParam0 == 1493442814 || iParam0 == 1054492269) || iParam0 == -1772735705)
	{
		return true;
	}
	return false;
}

bool func_993(int iParam0)
{
	return iParam0 == -1005911451;
}

int func_994(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_995(int iParam0)
{
	switch (iParam0)
	{
		case 500518742:
			return -2;
		case -672771472:
			return -1;
		case -625377317:
			return 0;
		case -507863514:
			return 1;
		case -2129500879:
			return 2;
		case 1015571236:
			return 3;
		case 822436636:
			return 4;
		case 786089929:
			return 5;
		case 1129121707:
			return 6;
		case -534828465:
			return 7;
		case 510246373:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_996(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = create_ped_inside_vehicle(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5);
	return iVar0;
}

int func_997(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	iVar0 = create_ped_on_mount(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5, bParam6);
	return iVar0;
}

void func_998(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_1019(iParam0) != 0)
	{
		func_461(iParam0, 256);
	}
	func_1175(&uParam1, iParam0, 460674190, 131072, 0);
	func_1175(&uParam1, iParam0, 1352900226, 8, 0);
	func_1175(&uParam1, iParam0, 566779387, 1024, 0);
	func_1175(&uParam1, iParam0, -234450476, 32, 0);
	func_1175(&uParam1, iParam0, -827172890, 128, 0);
	func_1175(&uParam1, iParam0, 1967834759, 4096, 0);
	func_1175(&uParam1, iParam0, -1834576753, 16, 0);
	func_1175(&uParam1, iParam0, -874477517, 8192, 0);
	func_1175(&uParam1, iParam0, 2090933413, 16384, 0);
	func_1175(&uParam1, iParam0, 258114362, 268435456, 0);
}

bool func_999(int iParam0, var uParam1)
{
	if (func_116(iParam0, &Var0) && func_109(Var0, 1590382703, uParam1, 0))
	{
		return true;
	}
	return false;
}

void func_1000(int iParam0)
{
	func_1176(iParam0);
	_update_ped_variation(iParam0, false, true, true, true, false);
}

bool func_1001(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (!func_116(iParam0, &Var0) || !func_345(Var0, -412523681, iParam1, 0))
	{
		return false;
	}
	*iParam1 = func_580(*iParam1, 0, 100);
	return true;
}

float func_1002(int iParam0)
{
	if (func_116(iParam0, &Var0) && func_348(Var0, 1741894372, &uVar5, 0))
	{
		return uVar5;
	}
	return 60f;
}

float func_1003(int iParam0)
{
	if (func_116(iParam0, &Var0) && func_348(Var0, 1309785647, &uVar5, 0))
	{
		return uVar5;
	}
	return 50f;
}

bool func_1004(int iParam0, int iParam1)
{
	if (!func_116(iParam0, &Var0) || !func_345(Var0, -436871069, iParam1, 0))
	{
		return false;
	}
	*iParam1 = func_1177(*iParam1, 0);
	return true;
}

bool func_1005(int iParam0, float fParam1, float fParam2, float fParam3)
{
	if (!func_116(iParam0, &Var0))
	{
		return false;
	}
	*fParam1 = 1f;
	*fParam2 = 1f;
	*fParam3 = 1f;
	if (func_348(Var0, -608357025, fParam1, 0))
	{
		iVar5 = 1;
	}
	if (func_348(Var0, 1793981541, fParam2, 0))
	{
		iVar5 = 1;
	}
	if (func_348(Var0, -966540255, fParam3, 0))
	{
		iVar5 = 1;
	}
	return iVar5;
}

int func_1006(int iParam0)
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

bool func_1007(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_1059((*Global_1298536)[iVar0]->f_86, iParam1);
	}
	return false;
}

bool func_1008(int iParam0, int iParam1)
{
	if (iParam1 != 255)
	{
		return ((*Global_1145091)[iParam1]->f_23.f_10 && iParam0) != 0;
	}
	return (Global_1139381->f_4779.f_10 && iParam0) != 0;
}

float func_1009(int iParam0, bool bParam1)
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

int func_1010(int iParam0)
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
		case 5:
			return 5;
		case 6:
			return 6;
		default:
			break;
	}
	return 0;
}

bool func_1011(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0]->f_2 != 0)
		{
		}
		else
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1012(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		return;
	}
	Local_15.f_2[iParam0]->f_2 = 516423162;
	Local_15.f_2[iParam0]->f_4 = 0;
	func_461(iParam0, 1);
	if (func_54(iParam0, &iVar1, 1))
	{
		func_1000(iVar1);
	}
	if (func_118(iParam1))
	{
		func_863(iVar0, iParam1, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	}
	else if (iParam1 == -1569615261)
	{
		remove_all_ped_weapons(iVar0, false, true);
	}
	set_ped_drops_weapons_when_dead(iVar0, false);
	_0x431240a58484d5d0(iVar0, 0);
	_0x45e57fdd531c9477(iVar0, 0);
	set_ped_config_flag(iVar0, 130, true);
	set_ped_config_flag(iVar0, 6, false);
	_0xd77ae48611b7b10a(iVar0, 0.48f);
	if (iParam4 >= 0)
	{
		set_ped_accuracy(iVar0, func_580(iParam4, 0, 100));
	}
	else
	{
		set_ped_accuracy(iVar0, 20);
	}
	set_ped_config_flag(iVar0, 467, true);
	if (bParam2)
	{
		func_461(iParam0, 128);
		_0x819add5ef1742f47(iVar0, 7);
		set_ped_as_cop(iVar0, false);
		set_ped_config_flag(iVar0, 148, false);
		set_ped_combat_attributes(iVar0, 39, true);
		_0xf74e134f40192884(iVar0, 1);
		if (Global_1901947->f_166.f_31)
		{
			set_ped_config_flag(iVar0, 127, true);
			set_ped_config_flag(iVar0, 146, true);
		}
	}
	if (iParam3 > -1 && iParam3 < Local_557.f_20.f_550)
	{
		_0xfc3db99c8144cd81(iVar0, &(Local_557.f_962[iParam3]), 0, 0, 0);
	}
	func_1178(iVar0);
	if (is_ped_on_mount(iVar0))
	{
		_0x712b2c2b2471b493(iVar0, 554382346);
		_0x3ad8eff9703be657(iVar0, 0f);
	}
	set_ped_config_flag(iVar0, 146, true);
	set_ped_combat_attributes(iVar0, 5, true);
	set_ped_flee_attributes(iVar0, 512, true);
}

int func_1013(int iParam0, int iParam1)
{
	return (iParam0 * 10 + iParam1);
}

float func_1014(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1015(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam0, false, true) };
	vVar3 = { get_entity_coords(iParam1, false, true) };
	if (fParam2 == 180f)
	{
		return func_1179(get_entity_forward_vector(iParam0), vVar3 - vVar0) > 0f;
	}
	fVar6 = (fParam2 * 0.5f);
	fVar7 = func_1179(get_entity_forward_vector(iParam0), func_1180(vVar3 - vVar0));
	return acos(fVar7) < fVar6;
}

bool func_1016(vector3 vParam0, vector3 vParam3)
{
	iVar1 = Local_557.f_20.f_546;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!func_1181(*Local_557.f_20.f_508[iVar0]))
		{
		}
		else if (!func_1182(vParam0, vParam3, *Local_557.f_20.f_508[iVar0]))
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

bool func_1017(int iParam0)
{
	func_313(iParam0, &iVar0, &iVar1);
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!is_bit_set(&(Local_300[iVar2]->f_4[iVar0]), iVar1))
		{
		}
		else if (!func_396(iVar2, 0, 1))
		{
		}
		else
		{
			return true;
		}
		iVar2++;
	}
	return false;
}

bool func_1018(int iParam0)
{
	switch (iParam0)
	{
		case 0:
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
			return true;
		default:
			break;
	}
	return false;
}

int func_1019(int iParam0)
{
	if (!func_116(iParam0, &Var0))
	{
		return 0;
	}
	func_117(Var0, -407841845, &uVar5, 0);
	return uVar5;
}

bool func_1020(int iParam0, int iParam1)
{
	if (is_ped_ragdoll(iParam1))
	{
		return true;
	}
	if (is_ped_getting_up(iParam1))
	{
		return true;
	}
	if (is_ped_being_stunned(iParam1, 0))
	{
		return true;
	}
	if (_is_ped_hogtied(iParam1))
	{
		return true;
	}
	if (_0x3bdfcf25b58b0415(iParam1))
	{
		return true;
	}
	if (_is_ped_lassoed(iParam1))
	{
		return true;
	}
	if (is_ped_injured(iParam1))
	{
		return true;
	}
	return false;
}

bool func_1021(int iParam0, float fParam1, int iParam2, float fParam3, float fParam4)
{
	return func_866(get_entity_coords(iParam0, false, false), fParam1, iParam2, fParam3, fParam4);
}

bool func_1022(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1) || is_ped_injured(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		if (func_1183(iParam0, iParam1, 0))
		{
			return true;
		}
	}
	if ((!is_ped_on_mount(iParam0) && _is_mount_seat_free(iParam1, -1)) && vdist(get_entity_coords(iParam1, false, false), get_entity_coords(iParam0, false, false)) < 30f)
	{
		return true;
	}
	return false;
}

bool func_1023(int iParam0)
{
	if (!func_153(iParam0, 0))
	{
		return false;
	}
	if (func_172(iParam0, 2))
	{
		return true;
	}
	return false;
}

int func_1024(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = -1;
	*iParam2 = -1;
	if (iParam0 < 0 || iParam0 >= 60)
	{
		return 0;
	}
	*iParam1 = (iParam0 / 10);
	*iParam2 = (iParam0 - *iParam1 * 10);
	return 1;
}

int func_1025(int iParam0)
{
	return iParam0 * 31;
}

bool func_1026(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_260), iParam0);
}

void func_1027(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

struct<2> func_1028()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_1029(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1030(int iParam0, var uParam1)
{
	iVar0 = func_820(iParam0);
	if (!func_1184(iVar0))
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return true;
	}
	iVar1 = shift_right(iVar0, 20) & 1023;
	*uParam1 = func_1185(0, iVar1);
	uParam1->f_2 = shift_right(iVar0, 10) & 1023;
	if (*uParam1 == 0)
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return true;
	}
	if (uParam1->f_2 < 0 || uParam1->f_2 >= 512)
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return true;
	}
	return true;
}

int func_1031(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -59604987;
		case 1:
			return 942241650;
		case 2:
			return 702438108;
		case 3:
			return -1011806593;
		case 4:
			return 860384684;
		case 5:
			return -584990368;
		case 6:
			return -826989433;
		case 7:
			return -2005559287;
		case 8:
			return -60620830;
		case 9:
			return -1517268418;
		default:
			break;
	}
	return 0;
}

int func_1032(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar7 = func_1186(iParam0);
	if (iVar7 == -1)
	{
		return 0;
	}
	if (!func_1187(&uVar2))
	{
		return -1;
	}
	if (!func_1188(&uVar2, 4, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1188(&uVar2, 5, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1188(&uVar2, 7, func_1189(iVar7), 0, 1))
	{
		return -1;
	}
	if (!func_1188(&uVar2, 8, 0, 0, 1))
	{
		return -1;
	}
	iVar0 = func_1190(&uVar2, 0);
	if (!func_1188(&uVar2, 9, iParam0, 0, 1))
	{
		return -1;
	}
	iVar1 = func_1191(&uVar2);
	return ((iVar0 - iVar1) - 1);
}

bool func_1033(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_1034(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_1035(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return false;
	}
	if (!func_1077(&Var0))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	return func_1078(Var0, &(Var0.f_1), 48, 0, 0, 0);
}

void func_1036(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_1192(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1193(iParam0, iVar0, &Var2, uParam3);
		if (Var2.f_2 == 0)
		{
		}
		else if ((Var2.f_3 && iParam1) != Var2.f_3)
		{
		}
		else
		{
			switch (Var2.f_2)
			{
				case 817387112:
					break;
				case 1178968787:
					func_1194(iParam0, iParam2, uParam3, 0, 0);
					break;
				case -2104202019:
				case -2071026539:
				case -2001503642:
				case -1984963943:
				case -1892463704:
				case -1239636564:
				case -1130018939:
				case -358032694:
				case -22202911:
				case 123615871:
				case 446189390:
				case 622623048:
				case 1215693782:
				case 1374282888:
				case 1386878225:
				case 1511238709:
				case 1529339137:
				case 1822827642:
					_0x6a0184e904cdf25e(&Var2, 1);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

void func_1037(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_1195(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1196(iParam0, iVar0, &Var2);
		if ((Var2.f_4 && iParam1) != Var2.f_4)
		{
		}
		else if (!chal_is_goal_active(Var2, Var2.f_1))
		{
		}
		else
		{
			switch (Var2.f_2)
			{
				case 556453026:
					chal_add_goal_progress_int(Var2, Var2.f_1, Var2.f_3);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

void func_1038(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_1197(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_1198(iParam0, iVar0, uParam2, &Var2))
		{
		}
		else if ((Var2.f_2 && iParam1) != Var2.f_2)
		{
		}
		else if (!Var2.f_4)
		{
		}
		else
		{
			func_1199(Var2.f_1, &uVar7, Var2.f_3 & 1 == 1, 255, 0, 0);
		}
		iVar0++;
	}
}

void func_1039(int iParam0, var uParam1)
{
	func_1200(iParam0, uParam1);
}

void func_1040(int iParam0, int iParam1, int iParam2)
{
	if (!func_1201(iParam0, iParam2, iParam1, &iVar0, &uVar1))
	{
		return;
	}
	func_320(iVar0, 0, 0);
}

void func_1041(int iParam0)
{
	Global_1109804->f_260.f_4367 = (Global_1109804->f_260.f_4367 || iParam0);
}

void func_1042(int iParam0)
{
	Global_1109804->f_260.f_5462 = (Global_1109804->f_260.f_5462 || iParam0);
}

int func_1043(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_310(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_310(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

bool func_1044()
{
	return !Global_1572887->f_9;
}

void func_1045(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1046(int iParam0)
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

void func_1047(struct<2> Param0, var uParam2)
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
	switch (func_842(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1203(func_1202(Param0));
			iVar5 = func_1204(iVar4);
			if (!func_1205(iVar5, 0))
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

int func_1048(struct<2> Param0)
{
	iVar0 = func_1043(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1206(iVar0);
}

int func_1049(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_310(Param0, &vVar0))
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
		func_310(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
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
			func_1207(iVar9);
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

void func_1050()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_310(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_1051(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1052(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1053(int iParam0, int iParam1)
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

void func_1054(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_1055()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

int func_1056(struct<2> Param0)
{
	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_74(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1057(int iParam0)
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
		func_1208(Global_1900736->f_1[0]);
		return 1;
	}
	func_1208(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_1209(iParam0, Global_1900736->f_66);
	return 1;
}

int func_1058(int iParam0)
{
	return Global_1109804->f_5737[iParam0]->f_1;
}

bool func_1059(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1060(var uParam0, int iParam1)
{
	func_1210(uParam0, iParam1);
}

bool func_1061(int iParam0, var uParam1, var uParam2)
{
	if (!func_1211(iParam0))
	{
		return false;
	}
	if (!func_1212())
	{
		return false;
	}
	if (!func_1213(iParam0, uParam1, uParam2))
	{
		return false;
	}
	if (*uParam1 == 414878641 && Global_1572887->f_13 != 0)
	{
		return false;
	}
	else if (*uParam1 == -816321659 && Global_1572887->f_13 != -1)
	{
		return false;
	}
	return true;
}

void func_1062(int iParam0)
{
	Global_1109804->f_260.f_4367 = (Global_1109804->f_260.f_4367 - (Global_1109804->f_260.f_4367 && iParam0));
}

bool func_1063(float fParam0, bool bParam1, bool bParam2, float fParam3)
{
	if (fParam3 == 0f)
	{
		fParam3 = Global_1901947->f_308.f_164;
	}
	if (bParam1)
	{
		fParam3 = (Global_1901947->f_308.f_164 + 50f);
	}
	if (bParam1 && bParam2)
	{
		return true;
	}
	return (((Global_1109804->f_5729 == 0 || (Global_1296859->f_21 - Global_1109804->f_5729) > Global_1109804->f_5729.f_1) && fParam0 >= 0f) && fParam0 < fParam3);
}

char* func_1064(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

char* func_1065(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_1066(struct<5> Param0, int iParam5, int iParam6)
{
	if (func_117(Param0, iParam5, &uVar0, 0))
	{
		*iParam6 = uVar0;
		return true;
	}
	return false;
}

bool func_1067(int iParam0)
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

int func_1068(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_1214(iParam0, 0, 1) };
		if (func_1215(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_1216(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_1217(iParam0, Var0, Var0.f_4, 0) };
				func_1218(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_1219(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return 0;
		}
		func_1220(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_1221(iParam0, iParam1);
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

void func_1069(int iParam0, int iParam1, float fParam2)
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

bool func_1070(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1071(var uParam0, int iParam1, bool bParam2)
{
	if (!network_does_network_id_exist(*uParam0))
	{
		return 0;
	}
	iVar0 = network_get_entity_from_network_id(*uParam0);
	if (is_entity_a_vehicle(iVar0))
	{
		if (!is_vehicle_driveable(get_vehicle_index_from_entity_index(iVar0), false, false))
		{
			return 0;
		}
	}
	else if (is_entity_a_ped(iVar0))
	{
		if (is_ped_injured(get_ped_index_from_entity_index(iVar0)))
		{
			return 0;
		}
		if (is_ped_ragdoll(get_ped_index_from_entity_index(iVar0)))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	bVar1 = (network_has_control_of_network_id(*uParam0) || bParam2);
	if ((iParam1 == -2128726980 || is_entity_a_vehicle(iVar0)) && bVar1)
	{
		return 2;
	}
	iVar2 = get_ped_index_from_entity_index(iVar0);
	iVar3 = get_script_task_status(iVar2, iParam1, true);
	if (iVar3 == 1 || iVar3 == 0)
	{
		return 3;
	}
	if (!bVar1)
	{
		return 1;
	}
	return 2;
}

char* func_1072(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (iParam1 == 4)
	{
		if ((func_55(Local_15.f_2[iParam0]->f_2) && Local_557.f_20.f_22[iParam0]->f_12 != -1) && func_1222(Local_557.f_20.f_22[iParam0]->f_12, 0) > 1)
		{
			bVar0 = true;
		}
		return func_1223(iParam0, iParam4, bVar0, bParam2);
	}
	if (Local_15.f_2[iParam0]->f_2 == 516423162)
	{
		return func_1224(iParam1);
	}
	if (func_176(iParam0, 8))
	{
		return func_1225(iParam1, bParam2);
	}
	if (func_176(iParam0, 1024))
	{
		return func_1226(iParam1);
	}
	return func_1227(iParam1, Local_15.f_2[iParam0]->f_2 == -1574827255, bParam3, bParam2);
}

int func_1073(int iParam0, int iParam1)
{
	if (iParam1 == 4)
	{
		return -1646070270;
	}
	if (Local_15.f_2[iParam0]->f_2 == 516423162)
	{
		return func_1228(iParam1);
	}
	if (func_176(iParam0, 8))
	{
		return func_1229(iParam1);
	}
	if (func_176(iParam0, 1024))
	{
		return func_1230(iParam1);
	}
	return func_1231(iParam1);
}

void func_1074(int iParam0, int iParam1)
{
	func_266(&(Local_557.f_20.f_22[iParam0]->f_2), iParam1);
}

int func_1075(int iParam0)
{
	vVar1 = { get_entity_coords(iParam0, false, false) };
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0]->f_2 != -1360694003 && Local_15.f_2[iVar0]->f_2 != -1360694003)
		{
		}
		else if (!func_52(iVar0, &iVar4, 1, 0))
		{
		}
		else if (vdist(vVar1, get_entity_coords(iVar4, false, false)) > 20f)
		{
		}
		else if (!is_any_speech_playing(iVar4))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1076(int iParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = cParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_1232(iParam0, &Var0);
}

bool func_1077(var uParam0)
{
	uVar0 = func_1233();
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

bool func_1078(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

int func_1079(struct<5> Param0, var uParam5, var uParam6, var uParam7)
{
	*uParam7 = Param0.f_1;
	*uParam6 = 0;
	if (!func_1078(Param0, &(Param0.f_1), 30, 0, 0, 0))
	{
		*uParam6 = *uParam7;
		return 0;
	}
	iVar1 = func_1234(Param0);
	switch (iVar1)
	{
		case -1732594287:
			iVar0 = uParam5->f_4;
			break;
		case -1503324114:
			iVar0 = *uParam5;
			break;
		case -305921044:
			iVar0 = uParam5->f_2;
			break;
		default:
			break;
	}
	if (!func_1078(Param0, &(Param0.f_1), 31, iVar0, 0, 1))
	{
		*uParam6 = *uParam7;
		return 0;
	}
	*uParam6 = Param0.f_1;
	return 1;
}

bool func_1080(struct<5> Param0, int iParam5, var uParam6, var uParam7, var uParam8)
{
	_copy_memory(uParam6, &uVar0, 2);
	iVar2 = func_1235(Param0);
	if (iVar2 == 0)
	{
		return false;
	}
	iVar3 = func_1236(Param0);
	if (iVar3 == 0)
	{
		return false;
	}
	*uParam6 = { func_810(iVar3, iVar2) };
	if (!_stat_id_is_valid(uParam6))
	{
		return false;
	}
	*uParam7 = func_1237(Param0, iParam5 == 1178968787);
	*uParam8 = func_1238(Param0, iParam5 == 1178968787);
	return true;
}

var func_1081(int iParam0, int iParam1, int iParam2)
{
	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (!func_1077(&Var0))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 23, iParam1, 0, iParam2))
	{
		return 0;
	}
	return func_1239(Var0, 53, 1);
}

void func_1082(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_1240(uParam0))
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

int func_1083(int iParam0)
{
	if (!func_59(8192))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_553)
	{
		if (&Local_557.f_20.f_495[iVar0] != iParam0)
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

int func_1084(vector3 vParam0, int iParam3)
{
	iVar0 = func_1241(vParam0);
	switch (iVar0)
	{
		case 5:
		case 6:
		case 7:
			switch (iParam3)
			{
				case 0:
					return -2041536102;
				case 1:
					return -123942207;
				default:
					break;
			}
			break;
		case 3:
		case 9:
		case 10:
			switch (iParam3)
			{
				case 0:
					return -722984556;
				case 1:
					return -1663780084;
				default:
					break;
			}
			break;
		case 0:
		case 2:
		case 11:
			switch (iParam3)
			{
				case 0:
					return -324329373;
				case 1:
					return 459026541;
				default:
					break;
			}
			break;
		case 1:
		case 4:
		case 12:
			switch (iParam3)
			{
				case 0:
					return 1235390186;
				case 1:
					return 130796932;
				default:
					break;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			switch (iParam3)
			{
				case 0:
					return 163775;
				case 1:
					return 1617065976;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_1085()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

float func_1086(int iParam0)
{
	if (func_51(iParam0, 1024))
	{
		return Local_557.f_20.f_22[iParam0]->f_16;
	}
	if (func_176(iParam0, 8))
	{
		return 30f;
	}
	if (func_176(iParam0, 1024))
	{
		return 25f;
	}
	return 15f;
}

float func_1087(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_ped_dead_or_dying(iParam0, false))
	{
		if (is_ped_on_mount(iParam0))
		{
			return 1.25f;
		}
		else if (is_ped_in_any_vehicle(iParam0, false))
		{
			return 1.4f;
		}
		if (_get_ped_crouch_movement(iParam0))
		{
			if (is_ped_still(iParam0))
			{
				return 0.7f;
			}
			return 0.8f;
		}
	}
	return 1f;
}

float func_1088(int iParam0)
{
	if (func_176(iParam0, 8))
	{
		return 150f;
	}
	if (func_176(iParam0, 1024))
	{
		return 140f;
	}
	return 105f;
}

bool func_1089(int iParam0, int iParam1, float fParam2)
{
	if (fParam2 > _0x900ca00ce703e1e2(iParam1))
	{
		return false;
	}
	if (Local_557.f_1016 != 0 && func_445(Local_557.f_1016) < 1500)
	{
		return true;
	}
	if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
	{
		if (fParam2 > 8f)
		{
			return false;
		}
	}
	else if (fParam2 > (8f * 2f))
	{
		return false;
	}
	if ((_get_ped_crouch_movement(iParam0) || is_ped_in_cover(iParam0, 0, 0)) || is_ped_going_into_cover(iParam0))
	{
		return false;
	}
	if (get_entity_speed(iParam0) <= _0x46bf2a810679d6e6(iParam0, 1f))
	{
		return false;
	}
	return true;
}

bool func_1090(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_557.f_20.f_22[iVar0]->f_12 != iParam0)
		{
		}
		else if (!func_55(Local_15.f_2[iVar0]->f_2))
		{
		}
		else if (!func_718(iVar0, 255))
		{
		}
		else if (iParam1 != -1 && iParam1 == iVar0)
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

bool func_1091(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam2 && is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (is_ped_fleeing(iParam0))
	{
		return true;
	}
	if (is_ped_fatally_injured(iParam0))
	{
		return true;
	}
	if (!bParam2 && _0xf330a5c062b29bed(iParam0))
	{
		return true;
	}
	if (bParam1 && _0x7583a9d35248b83f(iParam0))
	{
		return true;
	}
	if ((!bParam2 && !bParam3) && _0x77525bbf433f2cd6(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (is_ped_responding_to_event(iParam0, 157877922))
		{
			return true;
		}
		if (is_ped_responding_to_event(iParam0, -1507090758))
		{
			return true;
		}
		if (is_ped_responding_to_event(iParam0, -1102089407))
		{
			return true;
		}
		if (is_ped_responding_to_event(iParam0, -998673475))
		{
			return true;
		}
		if (is_ped_responding_to_event(iParam0, -587661767))
		{
			return true;
		}
		if (is_ped_responding_to_event(iParam0, -978548489))
		{
			return true;
		}
		if (is_ped_responding_to_event(iParam0, 869302489))
		{
			return true;
		}
		if (is_ped_responding_to_event(iParam0, 1664579810))
		{
			return true;
		}
		if (is_ped_responding_to_event(iParam0, 506397713))
		{
			return true;
		}
	}
	return false;
}

bool func_1092(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_15.f_2[iParam0]->f_2 == 1824637041)
	{
		return false;
	}
	if (Local_15.f_2[iParam0]->f_6 == 255 || !network_is_player_active(Local_15.f_2[iParam0]->f_6))
	{
		return false;
	}
	iVar0 = get_player_ped(Local_15.f_2[iParam0]->f_6);
	if (is_ped_dead_or_dying(iVar0, true))
	{
		return false;
	}
	fVar1 = func_1086(iParam0);
	if (!func_176(iParam0, 8) && vdist(get_entity_coords(iVar0, true, false), get_entity_coords(iParam1, true, false)) > fVar1)
	{
		return false;
	}
	if (is_ped_using_any_scenario(iParam1) && !_0x0c3cb2e600c8977d(iParam1, 0))
	{
		_0x463803429297117c(iParam1, get_entity_coords(iVar0, true, false), 3, 1);
		func_1242(iParam0, iVar0);
		return true;
	}
	if (((func_176(iParam0, 8) && !func_176(iParam0, 16384)) && !(func_176(iParam0, 131072) && iParam2 == -164645981)) && func_1243(iParam3))
	{
		if (!func_1243(iParam2))
		{
			func_1242(iParam0, iVar0);
			func_896(iParam0, iParam3, 0, 1, 1);
			return true;
		}
		func_1244(iParam0, iVar0);
		return true;
	}
	func_1242(iParam0, iVar0);
	return true;
}

bool func_1093(int iParam0, int iParam1, int iParam2)
{
	if (Local_15.f_2[iParam0]->f_2 == 1824637041)
	{
		return false;
	}
	if (!func_176(iParam0, 131072))
	{
		return false;
	}
	if (func_176(iParam0, 1))
	{
		return false;
	}
	iVar0 = get_clock_hours();
	if (iVar0 >= 7 && iVar0 <= 19)
	{
		if (iParam2 == 379542007)
		{
			return false;
		}
		func_896(iParam0, 379542007, 1, 1, 0);
		return true;
	}
	if (iParam2 == -164645981)
	{
		return false;
	}
	func_896(iParam0, -164645981, 1, 1, 0);
	return true;
}

void func_1094(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (!_is_ped_using_scenario_hash(iVar0, iParam1) && func_411(get_entity_coords(iVar0, false, false), vParam2) > 0.8f)
	{
		if (func_1071(Local_15.f_2[iParam0], 713668775, 0) != 2)
		{
			return;
		}
		task_follow_nav_mesh_to_coord(iVar0, vParam2, 1f, -1, 0.25f, 0, 40000f);
		return;
	}
	if (func_1071(Local_15.f_2[iParam0], -1098463898, 0) != 2)
	{
		return;
	}
	if (_is_ped_using_scenario_hash(iVar0, iParam1))
	{
		return;
	}
	if (bParam6 && func_178(iVar0))
	{
		if (func_1071(Local_15.f_2[iParam0], 716706914, 0) != 2)
		{
			return;
		}
		set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
		task_swap_weapon(iVar0, 1, 1, 0, 0);
		return;
	}
	task_start_scenario_at_position(iVar0, iParam1, vParam2, fParam5, 0, true, false, 0, -1f, false);
}

void func_1095(int iParam0, int iParam1)
{
	if (func_1071(Local_15.f_2[iParam0], -2055662961, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	task_melee(iVar0, iParam1, 0, 1, 1, 1065353216, 1, -1082130432);
}

void func_1096(int iParam0, vector3 vParam1, float fParam4)
{
	if (func_1071(Local_15.f_2[iParam0], 923520851, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	task_wander_in_area(iVar0, vParam1, fParam4, 1077936128, 1086324736, 0);
}

void func_1097(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (func_1071(Local_15.f_2[iParam0], 1056466932, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	task_follow_to_offset_of_entity(iVar0, iParam1, vParam2, iParam5, -1, 1036831949, 1, 1, 0, 0, 1);
}

bool func_1098(int iParam0, int iParam1)
{
	if (((func_116(iParam0, &Var0) && func_345(Var0, 101317385, iParam1, 0)) && *iParam1 >= 0) && *iParam1 < 18)
	{
		return true;
	}
	return false;
}

int func_1099(int iParam0)
{
	if (func_116(iParam0, &Var0) && func_117(Var0, -1463370342, &iVar5, 0))
	{
		return func_995(iVar5);
	}
	return -1;
}

void func_1100(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (func_1071(Local_15.f_2[iParam0], -1794415470, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (_0x619e63980bfc0096(iVar0, iParam1, 0))
	{
		return;
	}
	task_enter_vehicle(iVar0, iParam1, -1, iParam2, fParam3, 1, 0);
}

void func_1101(int iParam0, char[4] cParam1, int iParam2, int iParam3)
{
	if (func_1071(Local_15.f_2[iParam0], 658540077, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	task_follow_waypoint_recording(iVar0, cParam1, 0, iParam2, -1, iParam3, 0, -1);
}

void func_1102(int iParam0, int iParam1)
{
	if (func_1071(Local_15.f_2[iParam0], -1665583462, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	_task_move_in_traffic(iVar0, iParam1, 0, 0);
}

int func_1103(int iParam0, float fParam1)
{
	if (func_116(iParam0, &Var0) && func_348(Var0, -728132736, fParam1, 0))
	{
		return 1;
	}
	return 0;
}

int func_1104(int iParam0, float fParam1)
{
	if (func_116(iParam0, &Var0) && func_348(Var0, 912480409, fParam1, 0))
	{
		return 1;
	}
	return 0;
}

void func_1105(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	if (func_1071(Local_15.f_2[iParam0], 713668775, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (!bParam7)
	{
		vVar1 = { get_entity_coords(iVar0, false, false) };
		if (absf((vVar1.z - vParam1.z)) < 2f && func_411(vVar1, vParam1) < 0.8f)
		{
			if ((fParam5 != 40000f && !func_1245(iVar0, fParam5, 1106247680)) && !func_895(iVar0, 1920390111))
			{
				task_achieve_heading(iVar0, fParam5, 0);
			}
			return;
		}
	}
	task_follow_nav_mesh_to_coord(iVar0, vParam1, fParam4, -1, fParam6, 0, fParam5);
}

void func_1106(int iParam0, int iParam1)
{
	if (func_1071(Local_15.f_2[iParam0], -1253019028, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	StringCopy(&cVar1, func_127(Local_557.f_20.f_22[iParam0]->f_13), 32);
	task_patrol(iVar0, &cVar1, iParam1, true, true);
}

Vector3 func_1107(int iParam0)
{
	func_116(iParam0, &Var0);
	func_347(Var0, -261480992, &vVar5, 1);
	return vVar5;
}

void func_1108(int iParam0, int iParam1, vector3 vParam2)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	iVar1 = iParam1;
	if (func_1246(iVar0, iVar1))
	{
		return;
	}
	if (is_entity_waiting_for_world_collision(iVar0))
	{
		return;
	}
	if (func_1071(Local_15.f_2[iParam0], -76381094, 0) != 2)
	{
		return;
	}
	if (func_452(vParam2))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!_0x6eead6af637da752(vParam2, iVar1, 1f, 0))
	{
		iVar5 = 1;
		_get_scenario_point_close_to_coords(vParam2, 1f, &uVar3, iVar5);
		if (!_does_scenario_point_exist(&(uVar3[0])) || _get_scenario_point_type(&(uVar3[0])) != iVar1)
		{
			return;
		}
		iVar2 = &uVar3[0];
	}
	else
	{
		iVar2 = _find_closest_active_scenario_point_of_type(vParam2, iVar1, 1f, 0, false);
		if (!_does_scenario_point_exist(iVar2))
		{
			return;
		}
	}
	_task_use_scenario_point(iVar0, iVar2, 0, 0, true, false, 0, false, -1f, false);
}

int func_1109(int iParam0)
{
	func_116(iParam0, &Var0);
	func_345(Var0, 2069982589, &uVar5, 1);
	return uVar5;
}

void func_1110(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	iVar1 = iParam1;
	if (func_1246(iVar0, iVar1))
	{
		return;
	}
	if (is_entity_waiting_for_world_collision(iVar0))
	{
		return;
	}
	if (func_1071(Local_15.f_2[iParam0], -76381094, 0) != 2)
	{
		return;
	}
	if (func_452(vParam2))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam5 < 0 || iParam5 >= 18)
	{
		return;
	}
	if (!network_does_network_id_exist(&(Local_15.f_198[iParam5])) || !func_50(iParam5, 2))
	{
		return;
	}
	iVar2 = _0xd08066e00d26c448(&(Local_15.f_198[iParam5]));
	if (!_does_propset_exist(iVar2))
	{
		return;
	}
	iVar3 = create_itemset(true);
	_0x0d322aef8878b8fe(iVar2, iVar3);
	iVar7 = get_itemset_size(iVar3);
	fVar9 = 1f;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		iVar4 = get_indexed_scenario_point_index_in_itemset(iVar6, iVar3);
		if (iParam1 != _get_scenario_point_type(iVar4))
		{
		}
		else
		{
			fVar8 = vdist(_get_scenario_point_coords(iVar4, true), vParam2);
			if (fVar8 > fVar9)
			{
			}
			else
			{
				fVar9 = fVar8;
				iVar5 = iVar4;
			}
		}
		iVar6++;
	}
	destroy_itemset(iVar3);
	if (!_does_scenario_point_exist(iVar5))
	{
		return;
	}
	_task_use_scenario_point(iVar0, iVar5, 0, 0, true, false, 0, false, -1f, false);
}

bool func_1111(int iParam0)
{
	func_116(iParam0, &Var0);
	func_346(Var0, -401112943, &uVar5, 0);
	return uVar5;
}

Vector3 func_1112(int iParam0)
{
	func_116(iParam0, &Var0);
	func_347(Var0, 307635954, &vVar5, 0);
	return vVar5;
}

bool func_1113(int iParam0, float fParam1)
{
	if (!func_116(iParam0, &Var0) || !func_348(Var0, -311657344, fParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1114(int iParam0, int iParam1)
{
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (func_1247(iVar0, 0))
	{
		return;
	}
	iVar1 = func_1115(iVar0, 100f);
	if (iVar1 == 255)
	{
		iVar1 = int_to_playerindex(get_nearest_player_to_entity(iVar0, 0, 3));
	}
	if (_network_is_player_index_valid(iVar1) && network_is_player_active(iVar1))
	{
		iVar2 = get_player_ped(iVar1);
		if (!is_entity_dead(iVar2) && func_1014(iVar0, iVar2, 1, 1) < 200f)
		{
			task_combat_ped(iVar0, iVar2, 16384, 524288);
			return;
		}
	}
	task_combat_hated_targets_in_area(iVar0, get_entity_coords(iVar0, true, false), 100f, 0, iParam1);
}

int func_1115(int iParam0, float fParam1)
{
	fVar0 = fParam1;
	iVar4 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!func_47(Local_300[iVar2], 4))
		{
		}
		else if (!func_396(iVar2, 1, 1))
		{
		}
		else
		{
			iVar3 = network_get_player_index(int_to_participantindex(iVar2));
			fVar1 = func_1014(iParam0, get_player_ped(iVar3), 1, 1);
			if (fVar1 > fVar0)
			{
			}
			else
			{
				fVar0 = fVar1;
				iVar4 = iVar3;
			}
		}
		iVar2++;
	}
	return iVar4;
}

void func_1116(int iParam0, int iParam1)
{
	if (func_1071(Local_15.f_2[iParam0], 474215631, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	task_cower(iVar0, -1, iParam1, 0);
}

void func_1117(int iParam0, int iParam1, int iParam2)
{
	if (func_1071(Local_15.f_2[iParam0], 1868526510, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	task_mount_animal(iVar0, iParam1, -1, -1, iParam2, 1, 0, 0);
}

void func_1118(int iParam0, int iParam1)
{
	if (func_1071(Local_15.f_2[iParam0], -828834893, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	if (!is_ped_in_any_vehicle(iVar0, true))
	{
		return;
	}
	iVar1 = get_vehicle_ped_is_in(iVar0, true);
	if (does_entity_exist(iVar1) && _0x660639bc60157048(iVar0, iVar1))
	{
		return;
	}
	task_leave_any_vehicle(iVar0, 0, iParam1);
}

void func_1119(int iParam0, int iParam1, float fParam2, int iParam3)
{
	func_1121(iParam0, iParam1, fParam2, iParam3 | 16777216 | 262144);
}

void func_1120(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	func_919(iParam0, vParam1, fParam4, iParam5 | 16777216 | 262144);
}

void func_1121(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (func_1071(Local_15.f_2[iParam0], 518218985, 0) != 2)
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = 0;
	if (!func_51(iParam0, 65536) && network_does_network_id_exist(Local_15.f_2[iParam0]->f_1))
	{
		iVar0 = net_to_ped(Local_15.f_2[iParam0]->f_1);
		if (is_ped_dead_or_dying(iVar0, true))
		{
			iVar0 = 0;
		}
	}
	iVar1 = net_to_ped(&(Local_15.f_2[iParam0]));
	iVar2 = 0;
	if (is_ped_on_mount(iVar1))
	{
		iVar2 = get_mount(iVar1);
	}
	_task_smart_flee_style_ped(iVar1, iParam1, 4, iParam3, fParam2, -1, iVar2);
}

void func_1122(int iParam0)
{
	if (func_1071(Local_15.f_2[iParam0], -2117564886, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	task_combat_hated_targets(iVar0, 3f);
}

bool func_1123(struct<2> Param0)
{
	return func_832(Param0) == 0;
}

int func_1124(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_74(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1125(struct<2> Param0, bool bParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (!func_1123(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1248(Param0);
	}
	func_835(Param0, 1);
	bParam2 = bParam2;
}

void func_1126(struct<2> Param0)
{
	if (func_67(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_67(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_67(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_1130(Param0, &Var0))
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

int func_1127(struct<2> Param0, int iParam2)
{
	iVar0 = func_1056(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_1249(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_1209(iVar0, iParam2);
	return iParam2;
}

bool func_1128(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_1129(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		return 0;
	}
	iVar0 = func_1056(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1250(Param0, func_836(0), iParam2))
	{
		func_835(func_836(0), 3);
		func_835(func_836(iVar0), 4);
		return 0;
	}
	func_1209(iVar0, 0);
	func_835(func_836(0), 3);
	func_835(func_836(1), 4);
	return 1;
}

bool func_1130(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_310(Param0, &vVar0);
	if (func_1251(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_1131(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

void func_1132(int iParam0, int* iParam1)
{
	if (does_blip_exist(*iParam1))
	{
		func_285(iParam1);
	}
	*iParam1 = _0x3e593df9c2962ec6(func_966(iParam0));
	if (func_967(iParam0, &iVar0))
	{
		set_blip_sprite(*iParam1, iVar0, false);
	}
	if (func_1252(iParam0, &iVar1))
	{
		_blip_set_modifier(*iParam1, iVar1);
	}
}

char* func_1133(int iParam0, int iParam1)
{
	return func_931(get_player_name(iParam0), iParam1);
}

char* func_1134(int iParam0, int iParam1)
{
	return func_931(func_662(iParam0, 1, 0), iParam1);
}

char* func_1135(int iParam0)
{
	iVar0 = Local_15.f_282;
	if (_0xd6f6acf4392187fb(iVar0) && _0x149a2751ab66ac02(iVar0) > 1)
	{
		return func_1134(iVar0, iParam0);
	}
	return func_1133(Local_15.f_283, iParam0);
}

void func_1136(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

var func_1137(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1138(int iParam0)
{
	switch (iParam0)
	{
		case -2121688190:
		case -2106580172:
		case -2048736478:
		case -2034972265:
		case -2030232380:
		case -2024635066:
		case -1998058959:
		case -1988105196:
		case -1906191545:
		case -1816664083:
		case -1747825963:
		case -1747775003:
		case -1741111493:
		case -1693203215:
		case -1688128310:
		case -1662942683:
		case -1633216922:
		case -1595467349:
		case -1567930587:
		case -1566323707:
		case -1559242154:
		case -1513632695:
		case -1478891674:
		case -1462274666:
		case -1456680863:
		case -1396905917:
		case -1395051846:
		case -1392193699:
		case -1389658546:
		case -1371003729:
		case -1357626643:
		case -1321714808:
		case -1263043163:
		case -1237816179:
		case -1210145388:
		case -1199313137:
		case -1134374451:
		case -1117222502:
		case -1103135225:
		case -1085232344:
		case -1081805875:
		case -1031152097:
		case -1025216818:
		case -1018697504:
		case -992598136:
		case -992156975:
		case -985996415:
		case -984192463:
		case -968848760:
		case -963916715:
		case -879802008:
		case -867923254:
		case -822028324:
		case -818533067:
		case -780469251:
		case -755765764:
		case -747104616:
		case -740629317:
		case -737237468:
		case -735182489:
		case -701364869:
		case -592068833:
		case -511566837:
		case -507621590:
		case -426139257:
		case -392465725:
		case -352964861:
		case -272216216:
		case -243818172:
		case -235048253:
		case -222767785:
		case -180188163:
		case -164117130:
		case -158269097:
		case -152950882:
		case -118871741:
		case -104543072:
		case -60720396:
		case -1770032:
		case 60954128:
		case 90287351:
		case 133359852:
		case 214435071:
		case 221316808:
		case 228563269:
		case 233295963:
		case 263099185:
		case 338003170:
		case 553094466:
		case 564457427:
		case 615597833:
		case 639638961:
		case 748106308:
		case 778811758:
		case 820034251:
		case 994636947:
		case 1001245999:
		case 1045919449:
		case 1055774449:
		case 1069847489:
		case 1095891419:
		case 1116438174:
		case 1118985838:
		case 1147888108:
		case 1151744703:
		case 1153710309:
		case 1181380553:
		case 1183081869:
		case 1202244626:
		case 1257411558:
		case 1258184551:
		case 1264416627:
		case 1293773224:
		case 1366733613:
		case 1368078158:
		case 1368652849:
		case 1391579593:
		case 1406173366:
		case 1433472988:
		case 1451797164:
		case 1454572348:
		case 1493420112:
		case 1508919320:
		case 1654787099:
		case 1664261990:
		case 1735233562:
		case 1763355466:
		case 1834871186:
		case 1862205446:
		case 1865251988:
		case 1875669968:
		case 1896900580:
		case 1961764827:
		case 1974270787:
		case 2005921736:
		case 2017085833:
		case 2107754879:
		case 2113496404:
		case 2121165562:
		case 2123729925:
			return 672378911;
	}
	return -437533031;
}

bool func_1139()
{
	return true;
}

bool func_1140()
{
	return (!&Global_1903133 && absi((get_frame_count() - Global_1903133->f_2)) >= 5);
}

void func_1141(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

bool func_1142()
{
	iVar0 = 1;
	if ((((((!_0xe368e8422c860ba7(func_796(), func_797(), -2) || !_0xe368e8422c860ba7(func_798(), func_797(), -2)) || !_0xe368e8422c860ba7(func_799(), func_797(), -2)) || !_0xe368e8422c860ba7(func_1253(), func_797(), -2)) || !_0xe368e8422c860ba7(func_800(), func_797(), -2)) || !_0xe368e8422c860ba7(func_801(), func_802(), -2)) || !_0xe368e8422c860ba7(func_803(), func_804(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1143(var uParam0, var uParam1, int iParam2)
{
	switch (func_1254(iParam2))
	{
		case 0:
			func_1255(uParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_1256(uParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_1257(uParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_1258(uParam0, uParam1, iParam2, -1082130432);
			break;
		case 4:
			func_1259(uParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_1144(var uParam0, bool bParam1)
{
	_databinding_write_data_bool(uParam0, bParam1);
}

void func_1145(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (iParam4 == 0)
	{
		iParam4 = 109029619;
	}
	(*uParam1)[iParam2] = _databinding_add_data_container(uParam0->f_5, sParam3);
	func_1255(uParam1[iParam2], &((*uParam1)[iParam2]->f_4), 21, 0);
	func_1255(uParam1[iParam2], &((*uParam1)[iParam2]->f_5), 20, 0);
	func_1255(uParam1[iParam2], &((*uParam1)[iParam2]->f_7), 23, 0);
	func_1255(uParam1[iParam2], &((*uParam1)[iParam2]->f_8), 22, 0);
	func_1255(uParam1[iParam2], &((*uParam1)[iParam2]->f_9), 24, 0);
	func_1255(uParam1[iParam2], &((*uParam1)[iParam2]->f_2), 18, iParam4);
	if (iParam5 == 0)
	{
		func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_6), 25);
	}
	else
	{
		func_1255(uParam1[iParam2], &((*uParam1)[iParam2]->f_6), 25, iParam5);
	}
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_1), 17);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_3), 19);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_10), 26);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_11), 27);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_20), 16);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_21), 14);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_22), 15);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_12), 29);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_13), 28);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_14), 30);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_15), 31);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_16), 32);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_17), 33);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_18), 34);
	func_1143(uParam1[iParam2], &((*uParam1)[iParam2]->f_19), 35);
}

void func_1146(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

char* func_1147(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	iVar6 = func_580((iVar5 / 60), 0, 180);
	iVar7 = func_580((iVar5 % 60), 0, 60);
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

void func_1148(var uParam0, char* sParam1)
{
	_databinding_write_data_string(uParam0, sParam1);
}

void func_1149(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 10000)
	{
		if ((uParam0->f_13 > iParam1 && uParam0->f_13 > 10000) && uParam0->f_11 < 0)
		{
			uParam0->f_11 = get_sound_id();
			if (is_string_null_or_empty(sParam2) || are_strings_equal(sParam2, func_799()))
			{
				_0xce5d0ffe83939af1(uParam0->f_11, func_799(), func_797(), 1);
			}
			else
			{
				_0xce5d0ffe83939af1(uParam0->f_11, sParam2, func_797(), 1);
				_0x9821b68cd3e05f2b("Time", 10f, sParam2, func_797());
			}
		}
	}
	else
	{
		func_494(uParam0);
	}
}

void func_1150(var uParam0, int iParam1)
{
	if (iParam1 <= 0 && uParam0->f_12 < 0)
	{
		uParam0->f_12 = get_sound_id();
		_0xce5d0ffe83939af1(uParam0->f_12, func_1253(), func_797(), 1);
	}
}

void func_1151(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case -1029285341:
			*iParam1 = func_1260();
			*uParam2 = func_1260();
			*iParam3 = func_1260();
			*uParam4 = func_1260();
			*uParam5 = func_1261();
			*uParam6 = func_1260();
			*uParam7 = func_1260();
			break;
		case 404851220:
			*iParam1 = func_1262();
			*uParam2 = func_1262();
			*iParam3 = func_1260();
			*uParam4 = func_1261();
			*uParam5 = func_1261();
			*uParam6 = func_1260();
			*uParam7 = func_1260();
			break;
		case 622225714:
			*iParam1 = func_1261();
			*uParam2 = func_1262();
			*iParam3 = func_1260();
			*uParam4 = func_1261();
			*uParam5 = func_1261();
			*uParam6 = func_1260();
			*uParam7 = func_1260();
			break;
		case -104583860:
			*iParam1 = func_1260();
			*uParam2 = func_1260();
			*iParam3 = func_1261();
			*uParam4 = func_1260();
			*uParam5 = func_1261();
			*uParam6 = func_1260();
			*uParam7 = func_1260();
			break;
	}
}

void func_1152(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bVar3 = true;
	bVar4 = true;
	iVar5 = (*uParam0)[iParam1]->f_25;
	iVar6 = (*uParam0)[iParam1]->f_26;
	iVar9 = (*uParam0)[iParam1]->f_23;
	if (bParam10)
	{
		iVar9 = 0;
	}
	switch (iVar9)
	{
		case -1:
		case 0:
			bVar3 = false;
			break;
		case 5:
			iVar0 = iParam5;
			iVar2 = iParam5;
			break;
		case 6:
			iVar0 = iParam7;
			iVar2 = iParam7;
			break;
		case 7:
			bVar4 = false;
			iVar0 = func_1262();
			iVar2 = iParam6;
			iVar1 = iParam6;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 8:
			bVar4 = false;
			iVar0 = func_1262();
			iVar2 = iParam8;
			iVar1 = iParam8;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 2:
			bVar4 = false;
			iVar0 = func_1262();
			iVar2 = func_1262();
			iVar1 = iParam3;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_CROSS";
			break;
		case 3:
			bVar4 = false;
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
		case 9:
			iVar0 = func_1260();
			iVar2 = func_1260();
			break;
		case 4:
			iVar0 = iParam4;
			break;
		default:
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
	}
	func_1144((*uParam0)[iParam1]->f_21, bVar3);
	if (bVar3)
	{
		func_1263(uParam0, iParam1);
		func_1144((*uParam0)[iParam1]->f_11, bVar4);
		fVar10 = (*uParam0)[iParam1]->f_29;
		if ((*uParam0)[iParam1]->f_28 > 1)
		{
			fVar10 = (to_float((*uParam0)[iParam1]->f_27) / to_float((*uParam0)[iParam1]->f_28));
			if (bParam11 && !func_1264((*uParam0)[iParam1]->f_23))
			{
				iVar5 = 0;
				iVar6 = 0;
				StringIntConCat(&cVar11, (*uParam0)[iParam1]->f_27, 8);
				if (bParam12)
				{
					StringConCat(&cVar11, "/", 8);
					StringIntConCat(&cVar11, (*uParam0)[iParam1]->f_28, 8);
				}
			}
			func_1148((*uParam0)[iParam1]->f_20, &cVar11);
		}
		else
		{
			func_1148((*uParam0)[iParam1]->f_20, "");
		}
		if (fVar10 >= 0f)
		{
			if (!bParam9)
			{
				func_1265((*uParam0)[iParam1]->f_2, iVar2);
			}
			func_1266((*uParam0)[iParam1]->f_1, fVar10);
			func_1144((*uParam0)[iParam1]->f_10, 0);
			func_1144((*uParam0)[iParam1]->f_3, 1);
		}
		else
		{
			func_1144((*uParam0)[iParam1]->f_10, 1);
			func_1144((*uParam0)[iParam1]->f_3, 0);
		}
		if (iVar6 != 0)
		{
			if (!bParam13)
			{
				func_1265((*uParam0)[iParam1]->f_6, iVar0);
			}
			func_1265((*uParam0)[iParam1]->f_4, iVar5);
			func_1265((*uParam0)[iParam1]->f_5, iVar6);
		}
		if (!is_string_null(sVar8))
		{
			func_1265((*uParam0)[iParam1]->f_14, iVar1);
			func_1148((*uParam0)[iParam1]->f_12, sVar7);
			func_1148((*uParam0)[iParam1]->f_13, sVar8);
			func_1144((*uParam0)[iParam1]->f_15, 1);
		}
		else
		{
			func_1144((*uParam0)[iParam1]->f_15, 0);
		}
		func_1144((*uParam0)[iParam1]->f_16, (*uParam0)[iParam1]->f_30);
	}
}

char* func_1153()
{
	return "NET_AS_BLIP_TARGET";
}

void func_1154(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

bool func_1155()
{
	if ((func_1267() % 9) != 0)
	{
		return false;
	}
	return true;
}

bool func_1156(int iParam0)
{
	if (!_network_is_player_index_valid(&(Local_15.f_234[iParam0])))
	{
		return true;
	}
	if (!network_is_player_active(&(Local_15.f_234[iParam0])))
	{
		return true;
	}
	iVar0 = get_player_ped(&(Local_15.f_234[iParam0]));
	if (is_entity_dead(iVar0))
	{
		return true;
	}
	return false;
}

void func_1157(int iParam0, int iParam1)
{
	if (Global_1071686->f_21689[iParam0]->f_5 != iParam1)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			if (Global_1071686->f_21689[iParam0]->f_5 != 0)
			{
				_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_5);
			}
		}
		Global_1071686->f_21689[iParam0]->f_5 = iParam1;
		func_805(iParam0);
	}
}

char* func_1158()
{
	return "RDRO_GFH_Sounds";
}

char* func_1159()
{
	return "match_start";
}

var func_1160(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = sParam3;
	Var0.f_2 = sParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar20 = _0xa6f4216ab10eb08e(&Var0, &vVar13, iParam6, iParam7);
	return uVar20;
}

char[] func_1161()
{
	return func_110(&(Local_557.f_584.f_68));
}

bool func_1162()
{
	return !is_string_null_or_empty(func_105(Local_557.f_584.f_68));
}

char* func_1163()
{
	return "RDRO_GFH_Sounds";
}

char* func_1164()
{
	return "match_end";
}

var func_1165(char* sParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = sParam4;
	Var0.f_2 = sParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = sParam2;
	uVar20 = _0x02bcc0fe9eba3529(&Var0, &Var13, iParam7, iParam8, iParam9);
	return uVar20;
}

char* func_1166()
{
	if (func_1268(&uVar0))
	{
		return _create_var_string(10, "NET_AS_OBJ_GO_TO_AREA_SPECIFIC", func_110(&uVar0));
	}
	return "NET_AS_OBJ_GO_TO_AREA";
}

char* func_1167(bool bParam0)
{
	if (bParam0)
	{
		return "NET_AS_OBJ_FIND_TARGETS_ST";
	}
	return "NET_AS_OBJ_FIND_TARGETS";
}

char* func_1168(bool bParam0)
{
	if (bParam0)
	{
		return "NET_AS_OBJ_PROTECT_TARGETS_ST";
	}
	return "NET_AS_OBJ_PROTECT_TARGETS";
}

char* func_1169()
{
	bVar0 = true;
	if (_0xd6f6acf4392187fb(Local_15.f_282) && _0x149a2751ab66ac02(Local_15.f_282) > 1)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		return _create_var_string(10, "NET_AS_OBJ_PLAYER_TARGET_SURVIVE", func_931(get_player_name(Local_15.f_283), 859817522));
	}
	return _create_var_string(10, "NET_AS_OBJ_PLAYER_TARGET_SURVIVE", func_931(func_662(Local_15.f_282, 1, 0), 859817522));
}

char* func_1170()
{
	iVar0 = 255;
	if (Local_557.f_20.f_16 == 1047079933)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (&Local_15.f_234[iVar1] == 255)
			{
			}
			else if (func_163(iVar1))
			{
			}
			else
			{
				iVar0 = &Local_15.f_234[iVar1];
			}
			else
			{
				iVar1++;
			}
		}
	}
	else
	{
		iVar0 = &Local_15.f_234[0];
	}
	if (_network_is_player_index_valid(iVar0) && network_is_player_active(iVar0))
	{
		return _create_var_string(10, "NET_AS_OBJ_PLAYER_TARGET_HELP_SPECIFIC", func_931(get_player_name(iVar0), -963477619));
	}
	return "NET_AS_OBJ_PLAYER_TARGET_HELP";
}

char* func_1171()
{
	bVar0 = true;
	if (_0xd6f6acf4392187fb(Local_15.f_282) && _0x149a2751ab66ac02(Local_15.f_282) > 1)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		return _create_var_string(10, "NET_AS_OBJ_POSSE_TARGET_HELP", func_931(get_player_name(Local_15.f_283), 859817522));
	}
	return _create_var_string(10, "NET_AS_OBJ_POSSE_TARGET_HELP", func_931(func_662(Local_15.f_282, 1, 0), 859817522));
}

char* func_1172()
{
	if (Local_557.f_20.f_16 == 1862763509)
	{
		if (network_is_player_active(&(Local_15.f_234[0])))
		{
			return _create_var_string(10, "NET_AS_OBJ_ASSASSINATE_PVP", func_931(get_player_name(&(Local_15.f_234[0])), -5208416));
		}
	}
	else if (Local_557.f_20.f_16 == 1047079933)
	{
		if (Local_15.f_284 != 0 && _0x0f99f6436528a089(Local_15.f_284))
		{
			return _create_var_string(10, "NET_AS_OBJ_ASSASSINATE_PVP", func_931(func_662(Local_15.f_284, 1, 0), -5208416));
		}
	}
	return "";
}

char* func_1173(bool bParam0)
{
	if (bParam0)
	{
		return "NET_AS_OBJ_KILL_NONSTEALTH_TARGET_ST";
	}
	return "NET_AS_OBJ_KILL_NONSTEALTH_TARGET";
}

bool func_1174(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

void func_1175(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	bVar0 = iParam4;
	func_346(*uParam0, iParam2, &bVar0, 0);
	if (bVar0)
	{
		func_461(iParam1, iParam3);
	}
}

void func_1176(int iParam0)
{
	func_1269(iParam0);
	_0xc9151483cc06a414(iParam0);
	switch (get_random_int_in_range(0, 2))
	{
		case 0:
			func_1270(iParam0, -2014043657);
			break;
		case 1:
			func_1270(iParam0, -829673694);
			break;
	}
	switch (get_random_int_in_range(0, 4))
	{
		case 0:
			_0xdf631e4bce1b1fc4(iParam0, -273475295, 0, 0);
			break;
		case 1:
			func_1270(iParam0, 414935856);
			break;
		case 2:
			func_1270(iParam0, 317775775);
			break;
		case 3:
			func_1270(iParam0, 457437253);
			break;
	}
	switch (get_random_int_in_range(0, 2))
	{
		case 0:
			func_1271(iParam0, 1);
			break;
		case 1:
			func_1271(iParam0, 2);
			break;
	}
	switch (get_random_int_in_range(0, 3))
	{
		case 0:
			func_1270(iParam0, 1351319737);
			break;
		case 1:
			func_1270(iParam0, 1741336375);
			break;
		case 2:
			func_1270(iParam0, -340478195);
			break;
	}
	switch (get_random_int_in_range(0, 4))
	{
		case 0:
			_0xdf631e4bce1b1fc4(iParam0, -2142954459, 0, 0);
			break;
		case 1:
			func_1270(iParam0, -288915854);
			break;
		case 2:
			func_1270(iParam0, 720369354);
			break;
		case 3:
			func_1270(iParam0, 491707272);
			break;
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

int func_1177(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_1178(int iParam0)
{
	if (!is_ped_on_mount(iParam0))
	{
		return;
	}
	if ((_0x95ca12e2c68043e5(iParam0, 0) || _0x80bb243789008a82(iParam0, 0)) || _0x495a04caec263af8(iParam0, 0))
	{
		_0x8b1e8e35a6e814ea(iParam0, -289314967, -1082130432);
		set_ped_combat_attributes(iParam0, 128, true);
	}
	else if (_0xabc18a28bad4b46f(iParam0, 0))
	{
		_0x8b1e8e35a6e814ea(iParam0, 1164657302, -1082130432);
		set_ped_combat_attributes(iParam0, 128, true);
	}
	else if (_0x5b235f24472f2c3b(iParam0, 0) || _0xbfca7afabf9d7967(iParam0, 0))
	{
		_0x8b1e8e35a6e814ea(iParam0, -68970303, -1082130432);
		set_ped_combat_attributes(iParam0, 128, true);
	}
}

float func_1179(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_1180(vector3 vParam0)
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

bool func_1181(struct<4> Param0, var uParam4, var uParam5)
{
	if ((Param0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return false;
	}
	if ((Param0.f_3 == 0f && Param0.f_3.f_1 == 0f) && Param0.f_3.f_2 == 0f)
	{
		return false;
	}
	return true;
}

int func_1182(vector3 vParam0, vector3 vParam3, struct<4> Param6, var uParam10, var uParam11)
{
	if (vParam0.z > Param6.f_2 && vParam0.z > Param6.f_3.f_2)
	{
		return 0;
	}
	if (vParam0.z < Param6.f_2 && vParam0.z < Param6.f_3.f_2)
	{
		return 0;
	}
	if (vParam3.z > Param6.f_2 && vParam3.z > Param6.f_3.f_2)
	{
		return 0;
	}
	if (vParam3.z < Param6.f_2 && vParam3.z < Param6.f_3.f_2)
	{
		return 0;
	}
	return func_1272(vParam0, vParam3, Param6, Param6.f_3);
}

bool func_1183(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(iParam0, true) && get_mount(iParam0) == iParam1);
			}
			else
			{
				return (is_ped_on_mount(iParam0) && get_mount(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_1184(int iParam0)
{
	return shift_right(iParam0, 31) & 1 != 0;
}

var func_1185(int iParam0, int iParam1)
{
	if (!func_1187(&uVar0))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 7, func_1189(iParam0), 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 10, iParam1, 0, 1))
	{
		return 0;
	}
	return func_1273(&uVar0);
}

int func_1186(int iParam0)
{
	if (!func_1187(&uVar0))
	{
		return -1;
	}
	if (!func_1188(&uVar0, 4, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1188(&uVar0, 6, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1188(&uVar0, 8, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1188(&uVar0, 9, iParam0, 0, 1))
	{
		return -1;
	}
	return func_1274(&uVar0);
}

bool func_1187(var uParam0)
{
	uVar5 = Global_1071686->f_28448[31]->f_3;
	if (!_0x7907969497ea92f5(uVar5))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(uVar5))
	{
		return false;
	}
	_copy_memory(uParam0, &uVar0, 5);
	*uParam0 = uVar5;
	return true;
}

bool func_1188(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	uVar0 = uParam0->f_1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_1189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -323664079;
		case 1:
			return 304473406;
		case 2:
			return 1428568385;
		case 3:
			return -710377432;
		default:
			break;
	}
	return 0;
}

int func_1190(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	uVar0 = _datafile_get_num_nodes(uParam0);
	return uVar0;
}

int func_1191(var uParam0)
{
	iVar0 = _0xe13634bb6baf0734(*uParam0, uParam0->f_1);
	return iVar0;
}

int func_1192(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (!func_1077(&Var0))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 16, 0, 0, 0))
	{
		return 0;
	}
	return func_1275(Var0, 1);
}

int func_1193(int iParam0, int iParam1, var uParam2, var uParam3)
{
	_copy_memory(uParam2, &uVar0, 4);
	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (!func_1077(&Var6))
	{
		return 0;
	}
	if (!func_1078(Var6, &(Var6.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var6, &(Var6.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var6, &(Var6.f_1), 16, 0, 0, 0))
	{
		return 0;
	}
	if (!func_1078(Var6, &(Var6.f_1), 17, iParam1, 0, 0))
	{
		return 0;
	}
	iVar13 = func_1276(Var6);
	func_1079(Var6, uParam3, &uVar5, &uVar4);
	Var6.f_1 = uVar5;
	if (!func_1080(Var6, iVar13, uParam2, &uVar11, &uVar12))
	{
		return 0;
	}
	Var6.f_1 = uVar4;
	uParam2->f_2 = iVar13;
	switch (iVar13)
	{
		case 817387112:
			uParam2->f_3 = -2147483648;
			break;
		default:
			if (func_1275(Var6, 5) != 0)
			{
				uParam2->f_3 = func_1277(Var6, -1011888031);
			}
			break;
	}
	return 1;
}

void func_1194(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	vVar2.f_2 = 4;
	Var0 = { func_1278(iParam3) };
	if (!func_1279(&Var0))
	{
		return;
	}
	if (!func_869(iParam0, Var0, uParam2, &uVar9))
	{
		return;
	}
	if (!func_869(iParam0, Var0.f_1, uParam2, &uVar11))
	{
		return;
	}
	if (!func_1280(iParam0, iParam1, Var0, uParam2, &vVar2))
	{
		return;
	}
	bVar17 = func_1281(iParam0, uParam2, &iVar14, &uVar16, 0, iParam3);
	iVar13 = func_1282(&vVar2, -15, 0, 0, 0);
	iVar15 = func_1282(&vVar2, iVar13, 1, iVar13, -1329297961);
	if (bVar17 && !bParam4)
	{
		if (iVar14 > iVar15)
		{
			return;
		}
	}
	stat_id_set_int(&uVar9, iVar13, true);
	stat_id_set_int(&uVar11, iParam1, true);
}

int func_1195(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (!func_1077(&Var0))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 37, 0, 0, 0))
	{
		return 0;
	}
	return func_1275(Var0, 7);
}

int func_1196(int iParam0, int iParam1, var uParam2)
{
	_copy_memory(uParam2, &uVar5, 5);
	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (!func_1077(&Var0))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 37, 0, 0, 0))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 38, iParam1, 0, 1))
	{
		return 0;
	}
	uParam2->f_1 = func_1283(Var0);
	*uParam2 = func_1284(Var0);
	uParam2->f_2 = func_1238(Var0, 1);
	uParam2->f_4 = func_1277(Var0, -1011888031);
	switch (uParam2->f_2)
	{
		case 556453026:
			uParam2->f_3 = func_1285(Var0);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1197(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (!func_1077(&Var0))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 42, 0, 0, 0))
	{
		return 0;
	}
	return func_1275(Var0, 10);
}

bool func_1198(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (!func_1034(iParam0))
	{
		return false;
	}
	if (!func_1077(&Var0))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 42, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 43, iParam1, 0, 1))
	{
		return false;
	}
	func_1079(Var0, uParam2, &uVar6, &uVar5);
	Var0.f_1 = uVar6;
	uParam3->f_1 = func_1286(Var0);
	uParam3->f_4 = func_1287(Var0);
	Var0.f_1 = uVar5;
	*uParam3 = func_1288(Var0);
	uParam3->f_2 = func_1277(Var0, -1011888031);
	uParam3->f_3 = func_1277(Var0, -964015882);
	return true;
}

int func_1199(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_877(iParam0, uParam1, &Var12, &Var0, bParam2, iParam3, iParam4, bParam5);
}

void func_1200(int iParam0, var uParam1)
{
	if (iParam0 & 81920 != 81920)
	{
		return;
	}
	if (*uParam1 == 0)
	{
		return;
	}
	iVar9 = func_1289(*uParam1);
	if (iVar9 == 0)
	{
		return;
	}
	iVar10 = func_1290(*uParam1);
	if (iVar10 == 0)
	{
		return;
	}
	func_1291(iVar10, &Var1);
	iVar11 = 0;
	while (iVar11 <= 5)
	{
		iVar0 = func_1292(iVar11);
		if (iVar9 != func_1293(Var1, iVar0, 0, 0))
		{
			iVar0 = 0;
		}
	else
	{
		}
		else
		{
			iVar11++;
		}
	}
	if (iVar0 == 0)
	{
		return;
	}
	Var5 = { func_1217(iVar9, Var1, iVar0, 0) };
	if (func_1294(&Var5))
	{
		return;
	}
	func_1295(&Var5, 1, 1);
}

bool func_1201(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (!func_1034(iParam0))
	{
		*iParam3 = -1;
		*uParam4 = 493038497;
		return false;
	}
	if (!func_1077(&Var0))
	{
		*iParam3 = -1;
		*uParam4 = 493038497;
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		*iParam3 = -1;
		*uParam4 = 493038497;
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		*iParam3 = -1;
		*uParam4 = 493038497;
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 28, 0, 0, 0))
	{
		*iParam3 = -1;
		*uParam4 = 493038497;
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 29, iParam2, 0, 0))
	{
		*iParam3 = -1;
		*uParam4 = 493038497;
		return false;
	}
	*iParam3 = func_1296(Var0);
	*uParam4 = func_1297(Var0);
	if (iParam1 != 0)
	{
		if (func_1078(Var0, &(Var0.f_1), 30, 0, 0, 0))
		{
			if (func_1078(Var0, &(Var0.f_1), 31, iParam1, 0, 0))
			{
				*iParam3 = func_1296(Var0);
				*uParam4 = func_1297(Var0);
			}
		}
	}
	if (*iParam3 == 0)
	{
		*iParam3 = -1;
		*uParam4 = 493038497;
		return false;
	}
	return true;
}

int func_1202(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_310(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_1203(int iParam0)
{
	iVar0 = -1;
	if (func_1298(&Var1, iParam0))
	{
		iVar0 = ((func_1299() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1204(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_1205(int iParam0, int iParam1)
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

int func_1206(int iParam0)
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

int func_1207(int iParam0)
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

void func_1208(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_1209(int iParam0, int iParam1)
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
			func_1300((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1300(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_73(*Global_1900736->f_1[0]))
	{
		func_835(*Global_1900736->f_1[0], 3);
	}
}

void func_1210(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1211(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 33)
	{
		return false;
	}
	return true;
}

bool func_1212()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

bool func_1213(int iParam0, var uParam1, var uParam2)
{
	if (!func_1211(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			if (Global_1572887->f_13 != 0)
			{
				*uParam1 = -816321659;
			}
			else
			{
				*uParam1 = 414878641;
			}
			*uParam2 = -1825640214;
			break;
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		case 17:
			*uParam1 = 414878641;
			*uParam2 = -86751100;
			break;
		case 18:
			*uParam1 = 414878641;
			*uParam2 = -291172486;
			break;
		case 19:
			*uParam1 = 414878641;
			*uParam2 = -1798248949;
			break;
		case 20:
			*uParam1 = 414878641;
			*uParam2 = 1774145653;
			break;
		case 21:
			*uParam1 = 414878641;
			*uParam2 = -1655602026;
			break;
		case 22:
			*uParam1 = 414878641;
			*uParam2 = 1198571251;
			break;
		case 23:
			*uParam1 = 414878641;
			*uParam2 = -922560112;
			break;
		case 24:
			*uParam1 = 414878641;
			*uParam2 = -1772642867;
			break;
		case 25:
			*uParam1 = 414878641;
			*uParam2 = -301889617;
			break;
		case 26:
			*uParam1 = 414878641;
			*uParam2 = -208754119;
			break;
		case 27:
			*uParam1 = 414878641;
			*uParam2 = -2020396827;
			break;
		case 29:
			*uParam1 = 414878641;
			*uParam2 = 1094779500;
			break;
		case 28:
			*uParam1 = 414878641;
			*uParam2 = 332706138;
			break;
		case 30:
			*uParam1 = 414878641;
			*uParam2 = 1757851809;
			break;
		case 31:
			*uParam1 = 414878641;
			*uParam2 = -140696447;
			break;
		case 32:
			if (Global_1572887->f_13 != 0)
			{
				*uParam1 = -816321659;
			}
			else
			{
				*uParam1 = 414878641;
			}
			*uParam2 = 937267231;
			break;
		default:
			return false;
	}
	return true;
}

struct<5> func_1214(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1301(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_1302(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_1217(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_1303(bParam1) };
			if (bParam2 && func_1304(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_1215(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1215(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1216(iParam0, &Var6, 1728382685))
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
			Var0 = { func_1305(bParam1) };
			switch (func_1306(iParam0))
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
			if (func_1307(iParam0, -1823706425))
			{
				Var0 = { func_1217(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1307(iParam0, -1483207246))
			{
				Var0 = { func_1217(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_1217(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_1307(iParam0, -1653629781))
			{
				Var0 = { func_1217(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_1308(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_1307(iParam0, -1653629781))
			{
				Var0 = { func_1217(1384535894, Var0, 1784584921, bParam1) };
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

bool func_1215(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_1309(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_1216(int iParam0, var uParam1, int iParam2)
{
	if (func_1310(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1217(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_1311(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1312(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1218(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1313(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1308(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_1219(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_65() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1314(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_1315(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1312(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1219(bool bParam0)
{
	if (func_65() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1312(bParam0));
}

int func_1220(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1316(iParam0))
	{
		return 0;
	}
	if (!func_1219(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_1221(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_374(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

int func_1222(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0]->f_2 == 0 || Local_15.f_2[iVar0]->f_2 == 1583594396)
		{
		}
		else if (!func_55(Local_15.f_2[iVar0]->f_2))
		{
		}
		else if (Local_557.f_20.f_22[iVar0]->f_12 != iParam0)
		{
		}
		else if (bParam1 && func_176(iVar0, 1))
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

char* func_1223(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam1)
	{
		case 12:
			if (func_51(iParam0, 67108864))
			{
				return "GENERIC_SHOCKED_HIGH";
			}
			if (bParam2)
			{
				if (bParam3)
				{
					return "PANIC_COMMUNICATE";
				}
				return "CALL_FOR_SUPPORT";
			}
		case 3:
		case 9:
		case 10:
		case 11:
			if (func_176(iParam0, 4096))
			{
				return "PANIC_HELP";
			}
			return "OPENS_FIRE";
		case 2:
			if (bParam3 || func_176(iParam0, 4096))
			{
				return "GENERIC_SHOCKED_HIGH";
			}
			return "OPENS_FIRE";
		case 4:
			if (bParam3 || func_176(iParam0, 4096))
			{
				return "GENERIC_SHOCKED_HIGH";
			}
			return "FOUND_BODY";
		case 6:
			return "ARRIVAL_COMBAT_NEUTRAL";
		case 7:
			return "CALLOUT_PROTECT_BOSS";
		case 5:
			if (bParam3 || func_176(iParam0, 4096))
			{
				return "GENERIC_CURSE_HIGH";
			}
			return "CALL_FOR_SUPPORT_RESPONSE";
		default:
			break;
	}
	return "";
}

char* func_1224(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return "GROUP_UP";
		case 5:
			return "COMBAT_FLEE";
		default:
			break;
	}
	return "";
}

char* func_1225(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "TIME_TO_GO";
			}
			return "WHO_GOES_THERE";
		case 1:
			if (bParam1)
			{
				return "GET_LOST";
			}
			return "LEAVE_NOW";
		case 2:
			return "FINAL_WARNING";
		case 3:
			return "OPENS_FIRE";
		case 5:
			if (bParam1)
			{
				return "PANIC_HELP";
			}
			return "COMBAT_FLEE";
		default:
			break;
	}
	return "";
}

char* func_1226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEAVE_NOW";
		case 3:
			return "OPENS_FIRE";
		case 5:
			return "COMBAT_FLEE";
		default:
			break;
	}
	return "";
}

char* func_1227(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				if (bParam3)
				{
					return "GUN_AVOID";
				}
				return "PLAYER_WEAPON_EQUIPPED";
			}
			return "GET_OUT";
		case 1:
			if (bParam3)
			{
				return "DONT_BE_STUPID";
			}
			return "TIME_TO_GO";
		case 2:
			if (bParam3)
			{
				return "WHATS_YOUR_PROBLEM";
			}
			return "PLAYER_STARING";
		case 3:
			if (bParam1)
			{
				return "GET_AWAY_FROM_ME";
			}
			return "GENERIC_FRIGHTENED_HIGH";
		case 5:
			if (bParam3)
			{
				return "PANIC_HELP";
			}
			return "COMBAT_FLEE";
		default:
			break;
	}
	return "";
}

int func_1228(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1646070270;
		default:
			break;
	}
	return -1478066105;
}

int func_1229(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return -1646070270;
		default:
			break;
	}
	return -1478066105;
}

int func_1230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return -1646070270;
		default:
			break;
	}
	return -1478066105;
}

int func_1231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return -1478066105;
		case 3:
			return -1646070270;
		default:
			break;
	}
	return -1478066105;
}

bool func_1232(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

var func_1233()
{
	return Global_1071686->f_28448[32]->f_3;
}

var func_1234(struct<5> Param0)
{
	return func_1239(Param0, 49, 1);
}

var func_1235(struct<5> Param0)
{
	return func_1239(Param0, 51, 1);
}

var func_1236(struct<5> Param0)
{
	return func_1239(Param0, 50, 1);
}

var func_1237(struct<5> Param0, bool bParam5)
{
	return func_1239(Param0, 61, bParam5);
}

var func_1238(struct<5> Param0, bool bParam5)
{
	return func_1239(Param0, 59, bParam5);
}

var func_1239(vector3 vParam0, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

bool func_1240(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1241(vector3 vParam0)
{
	return func_1317(_get_map_zone_at_coords(vParam0, 10));
}

void func_1242(int iParam0, int iParam1)
{
	if (func_1071(Local_15.f_2[iParam0], -875674219, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	task_turn_ped_to_face_entity(iVar0, iParam1, -1, -1082130432, -1082130432, -1082130432);
}

bool func_1243(int iParam0)
{
	if (!func_118(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0))
	{
		return false;
	}
	if (iParam0 == -164645981)
	{
		return false;
	}
	return true;
}

void func_1244(int iParam0, int iParam1)
{
	if (func_1071(Local_15.f_2[iParam0], 1630799643, 0) != 2)
	{
		return;
	}
	iVar0 = net_to_ped(&(Local_15.f_2[iParam0]));
	iVar1 = get_script_task_status(iVar0, 716706914, false);
	if (iVar1 == 1 || iVar1 == 0)
	{
		return;
	}
	task_aim_gun_at_entity(iVar0, iParam1, 30000, 0, 1);
}

bool func_1245(int iParam0, float fParam1, float fParam2)
{
	fVar2 = get_entity_heading(iParam0);
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fVar2 < fVar0 && fVar2 > fVar1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (fVar2 < fVar0 || fVar2 > fVar1)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_1246(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

bool func_1247(int iParam0, bool bParam1)
{
	if (((((func_895(iParam0, 780511057) || func_895(iParam0, -219932022)) || func_895(iParam0, 1120685857)) || func_895(iParam0, -2117564886)) || func_895(iParam0, 655999185)) || func_895(iParam0, 1345172471))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_895(iParam0, -653332088) || func_895(iParam0, 167901368))
		{
			return true;
		}
		if (is_ped_shooting(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1248(struct<2> Param0)
{
	if (func_67(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_67(Param0)))
	{
		_0x99230691875fc218(func_842(Param0), func_67(Param0), Global_35);
	}
}

void func_1249(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		func_1208(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_1318(Param0, 0, 1, -1);
}

bool func_1250(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_73(Param0))
	{
		return false;
	}
	if (!func_73(Param2))
	{
		return true;
	}
	iVar0 = func_842(Param0);
	iVar1 = func_842(Param2);
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

bool func_1251(int iParam0, var uParam1, var uParam2)
{
	if (!func_1319(iParam0))
	{
		return false;
	}
	if (func_1320(iParam0, uParam1, &uVar0))
	{
		func_1321(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1252(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			*iParam1 = -662251075;
			return true;
		case 4:
			*iParam1 = 942020339;
			return true;
		default:
			break;
	}
	return false;
}

char* func_1253()
{
	return "countdown_final_thud";
}

int func_1254(int iParam0)
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

void func_1255(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_1322(iParam2);
	}
	*uParam1 = _databinding_add_data_hash(uParam0, func_1323(iParam2), iParam3);
}

void func_1256(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (is_string_null(sParam3))
	{
		sParam3 = func_1324(iParam2);
	}
	*uParam1 = _databinding_add_data_string(uParam0, func_1323(iParam2), sParam3);
}

void func_1257(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_1325(iParam2);
	}
	*uParam1 = _databinding_add_data_int(uParam0, func_1323(iParam2), iParam3);
}

void func_1258(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_1326(iParam2);
	}
	*uParam1 = _databinding_add_data_float(uParam0, func_1323(iParam2), fParam3);
}

void func_1259(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!bParam4)
	{
		iParam3 = func_1327(iParam2);
	}
	*uParam1 = _databinding_add_data_bool(uParam0, func_1323(iParam2), iParam3);
}

int func_1260()
{
	return 1937193856;
}

int func_1261()
{
	return -1640778959;
}

int func_1262()
{
	return -1428663542;
}

void func_1263(var uParam0, int iParam1)
{
	bVar0 = func_1328(&((*uParam0)[iParam1]->f_31));
	iVar1 = (*uParam0)[iParam1]->f_24;
	if (iVar1 != 0)
	{
		if (!bVar0)
		{
			func_1329(&((*uParam0)[iParam1]->f_31), 0);
		}
	}
	else if (bVar0)
	{
		if (func_1330(&((*uParam0)[iParam1]->f_31)) < 1500)
		{
			return;
		}
		func_1331(&((*uParam0)[iParam1]->f_31));
	}
	func_1144((*uParam0)[iParam1]->f_17, iVar1 == 1);
	func_1144((*uParam0)[iParam1]->f_18, iVar1 == 2);
	func_1144((*uParam0)[iParam1]->f_19, iVar1 == 3);
}

bool func_1264(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 7:
		case 8:
			return true;
	}
	return false;
}

void func_1265(var uParam0, int iParam1)
{
	_databinding_write_data_hash_string(uParam0, iParam1);
}

void func_1266(var uParam0, float fParam1)
{
	_databinding_write_data_float(uParam0, fParam1);
}

int func_1267()
{
	iVar0 = absi(get_time_difference(Local_557.f_1005, get_network_time_accurate()));
	return (iVar0 / 1000);
}

bool func_1268(var uParam0)
{
	if (!func_119(&Var0) || !func_109(Var0, -1893679960, uParam0, 0))
	{
		return false;
	}
	return true;
}

void func_1269(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, 399422490, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -1163401704, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, 88372018, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -630346294, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -273475295, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -2142954459, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, 355515932, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -749728163, 0, 0);
}

void func_1270(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	_set_ped_component_enabled(iParam0, iVar0, false, func_65() == 0, false);
}

void func_1271(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

int func_1272(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	iVar0 = func_1332(vParam0, vParam3, vParam6);
	iVar1 = func_1332(vParam0, vParam3, vParam9);
	iVar2 = func_1332(vParam6, vParam9, vParam0);
	iVar3 = func_1332(vParam6, vParam9, vParam3);
	if (iVar0 != iVar1 && iVar2 != iVar3)
	{
		return 1;
	}
	return 0;
}

int func_1273(var uParam0)
{
	return func_1333(uParam0, 25, 1);
}

int func_1274(var uParam0)
{
	return func_1334(func_1333(uParam0, 34, 1));
}

int func_1275(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return _datafile_get_num_nodes(&vParam0);
}

var func_1276(struct<5> Param0)
{
	return func_1239(Param0, 49, 1);
}

int func_1277(struct<5> Param0, int iParam5)
{
	if (!func_1078(Param0, &(Param0.f_1), 40, iParam5, 0, 1))
	{
		return 0;
	}
	uVar5 = Param0.f_1;
	iVar1 = func_1275(Param0, 6);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar5;
		iVar4 = 0;
		if (!func_1078(Param0, &(Param0.f_1), 41, iVar0, 0, 1))
		{
		}
		else
		{
			iVar2 = func_1335(Param0);
			switch (iParam5)
			{
				case -1011888031:
					iVar4 = func_1336(iVar2);
					break;
				case -964015882:
					iVar4 = func_1337(iVar2);
					break;
			}
			uVar3 = (uVar3 || iVar4);
		}
		iVar0++;
	}
	return uVar3;
}

struct<2> func_1278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = 1178968787;
			Var0.f_1 = 817387112;
			break;
		default:
			Var0 = 0;
			Var0.f_1 = 0;
			break;
	}
	return Var0;
}

bool func_1279(var uParam0)
{
	return (*uParam0 != 0 && uParam0->f_1 != 0);
}

bool func_1280(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_1034(iParam0))
	{
		return false;
	}
	if (!func_1077(&Var7))
	{
		return false;
	}
	if (!func_1078(Var7, &(Var7.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var7, &(Var7.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	uVar3 = Var7.f_1;
	if (!func_1078(Var7, &(Var7.f_1), 16, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var7, &(Var7.f_1), 18, iParam2, 0, 1))
	{
		return false;
	}
	func_1079(Var7, uParam3, &uVar6, &uVar5);
	Var7.f_1 = uVar6;
	*uParam4 = func_1237(Var7, 1);
	uParam4->f_1 = func_1238(Var7, 1);
	Var7.f_1 = uVar3;
	if (!func_1078(Var7, &(Var7.f_1), 24, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var7, &(Var7.f_1), 25, iParam1, 0, 1))
	{
		return false;
	}
	uVar4 = Var7.f_1;
	iVar1 = func_1275(Var7, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var7.f_1 = uVar4;
		if (!func_1078(Var7, &(Var7.f_1), 27, iVar0, 0, 1))
		{
			return false;
		}
		iVar12 = func_1338(Var7);
		iVar2 = func_1339(iVar12, 1);
		if (iVar2 == -1)
		{
			return false;
		}
		uParam4->f_2[iVar2] = func_1340(Var7, 55, 1);
		if (&uParam4->f_2[iVar2] < 0)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_1281(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	vVar2.f_2 = 4;
	Var14 = { func_1278(iParam5) };
	if (!func_1279(&Var14))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!func_869(iParam0, Var14, uParam1, &uVar11))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!func_869(iParam0, Var14.f_1, uParam1, &uVar9))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (iParam4 == 0)
	{
		if (!stat_id_get_int(&uVar9, &iVar1))
		{
			*iParam2 = 0;
			*uParam3 = 0;
			return 0;
		}
		iVar13 = iVar1;
	}
	else
	{
		iVar13 = iParam4;
	}
	if (iVar13 == 0)
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!stat_id_get_int(&uVar11, &iVar0))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!func_1280(iParam0, iVar13, Var14, uParam1, &vVar2))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	switch (vVar2.x)
	{
		case -2065946849:
			*iParam2 = func_1282(&vVar2, iVar0, 1, iVar0, -1329297961);
			break;
		case -1329297961:
			if (iVar13 == 0)
			{
				*iParam2 = iVar0;
			}
			else
			{
				iVar0 = func_1341(&vVar2, iVar0);
				*iParam2 = func_1282(&vVar2, iVar0, 1, iVar0, 0);
			}
			break;
		default:
			*iParam2 = 0;
			*uParam3 = 0;
			return 0;
	}
	*uParam3 = vVar2.y;
	return 1;
}

int func_1282(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (iParam4 == 0)
	{
		iVar2 = *iParam0;
	}
	else
	{
		iVar2 = iParam4;
	}
	switch (iParam0->f_1)
	{
		case -212921506:
			if (bParam2)
			{
				iVar0 = iParam3;
			}
			else
			{
				iVar0 = Global_1296859->f_21;
			}
			switch (iVar2)
			{
				case -2065946849:
					break;
				case -1329297961:
					iVar0 = (&iParam0->f_2[3] + iVar0);
					iVar0 = (iVar0 + &iParam0->f_2[2] * 60);
					iVar0 = (iVar0 + &iParam0->f_2[1] * 3600);
					iVar0 = (iVar0 + (&iParam0->f_2[0] * 86400));
					break;
				default:
					break;
			}
			break;
		case 1778950238:
			if (func_1342(iParam1))
			{
				iVar1 = iParam1;
			}
			else
			{
				iVar1 = func_518();
			}
			switch (iVar2)
			{
				case -2065946849:
					iVar0 = iVar1;
					break;
				case -1329297961:
					func_1343(&iVar1, &(iParam0->f_2[3]), &(iParam0->f_2[2]), &(iParam0->f_2[1]), &(iParam0->f_2[0]), 0, 0, 0);
					iVar0 = iVar1;
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

var func_1283(struct<5> Param0)
{
	return func_1239(Param0, 58, 1);
}

var func_1284(struct<5> Param0)
{
	return func_1239(Param0, 57, 1);
}

var func_1285(struct<5> Param0)
{
	return func_1340(Param0, 60, 1);
}

var func_1286(struct<5> Param0)
{
	return func_1239(Param0, 62, 1);
}

int func_1287(struct<5> Param0)
{
	if (!func_1078(Param0, &(Param0.f_1), 45, 0, 0, 0))
	{
		return 1;
	}
	uVar11 = Param0.f_1;
	iVar1 = func_1275(Param0, 11);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar11;
		bVar10 = false;
		if (!func_1078(Param0, &(Param0.f_1), 46, iVar0, 0, 1))
		{
			return 0;
		}
		iVar8 = func_1344(Param0);
		iVar3 = func_1275(Param0, 12);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			if (!func_1345(Param0, iVar2, &Var4))
			{
				return 0;
			}
			switch (Var4)
			{
				case 914197110:
					switch (Var4.f_1)
					{
						case 1858947262:
							bVar9 = Var4.f_3 == _0xfbe782b3165ac8ec(Var4.f_2);
							break;
						default:
							bVar9 = false;
							break;
					}
					break;
				case -1945136514:
					switch (Var4.f_1)
					{
						case 643071038:
							bVar9 = false;
							break;
						default:
							bVar9 = false;
							break;
					}
					break;
				default:
					bVar9 = false;
					break;
			}
			switch (iVar8)
			{
				case 1810735390:
					if (bVar9)
					{
					}
					else
					{
						bVar10 = true;
					}
					else
					{
						Jump @318; //curOff = 283
						if (bVar9)
						{
							Jump @327; //curOff = 291
						}
						else if (iVar2 == (iVar3 - 1))
						{
							bVar10 = true;
						}
						else
						{
							iVar2++;
						}
					}
					if (bVar10)
					{
						return 0;
					}
					iVar0++;
					return 1;
					default:
						break;
			}
		}
	}
}

var func_1288(struct<5> Param0)
{
	return func_1239(Param0, 49, 1);
}

int func_1289(int iParam0)
{
	iVar5 = func_1186(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1187(&uVar0))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 7, func_1189(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 9, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 15, 0, 0, 1))
	{
		return 0;
	}
	return func_1346(&uVar0);
}

int func_1290(int iParam0)
{
	iVar5 = func_1186(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1187(&uVar0))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 7, func_1189(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 9, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 15, 0, 0, 1))
	{
		return 0;
	}
	return func_1347(&uVar0);
}

void func_1291(int iParam0, var uParam1)
{
	Var0 = { func_1301(1) };
	*uParam1 = { func_1217(iParam0, Var0, -1591664384, 1) };
}

int func_1292(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1132377945;
		case 1:
			return 739936401;
		case 2:
			return 1201880974;
		case 3:
			return 819728896;
		case 4:
			return 1746010219;
		case 5:
			return 1433393959;
		default:
			break;
	}
	return 0;
}

int func_1293(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	Var0.f_9 = -1591664384;
	if (func_1348(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1294(var uParam0)
{
	if (!func_1349(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_1295(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1308(*uParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_1302(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1350(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_1351(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_1352(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_1353(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_1354(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_1355(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_1356(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_1314(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

var func_1296(struct<5> Param0)
{
	return func_1239(Param0, 54, 1);
}

var func_1297(struct<5> Param0)
{
	return func_1239(Param0, 56, 1);
}

bool func_1298(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_1299()
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

void func_1300(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

struct<4> func_1301(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_1312(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_1217(1328661203, func_1357(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_1217(1328661203, func_1357(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_1217(1328661203, func_1357(), -1591664384, bParam0);
}

int func_1302(int iParam0)
{
	if (!func_1311(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_1303(bool bParam0)
{
	iVar0 = func_1312(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_1217(923904168, func_1301(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_1217(923904168, func_1301(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_1217(923904168, func_1301(bParam0), -740156546, 0);
}

bool func_1304(int iParam0, bool bParam1)
{
	if (func_1306(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_1358();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1305(bool bParam0)
{
	iVar0 = func_1312(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_1217(271701509, func_1301(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_1217(271701509, func_1301(bParam0), 12999093, 0);
}

int func_1306(int iParam0)
{
	if (!func_1311(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_1307(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_1306(iParam0);
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
			if (func_1359(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1308(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1360(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_1309(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_1311(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_1361(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_1217(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_1312(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_1312(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_1310(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_1312(0);
	*uParam1 = { func_1217(iParam0, func_1303(0), iParam3, 0) };
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

bool func_1311(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_1312(bool bParam0)
{
	if (func_65() == -1)
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

bool func_1313(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1314(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1362(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1364(func_1363(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1365(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_1315(int iParam0, struct<17> Param1)
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

bool func_1316(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_1317(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_1318(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_1366(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_154(Param0);
	Var0.f_3 = iParam3;
	func_1367(&Var0, bParam2, iParam4);
	return 1;
}

bool func_1319(int iParam0)
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

bool func_1320(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1368(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_1321(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1369(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1370(iVar0);
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
			uParam2->f_5 = func_1371(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1372(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1373(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_1374(iVar0);
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

int func_1322(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_1261();
		case 4:
			return 109029619;
		case 9:
			return func_1260();
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
			return func_1260();
		case 30:
			return func_1260();
		default:
			break;
	}
	return 0;
}

char* func_1323(int iParam0)
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
		case 24:
			return "secondaryImgColor";
		case 25:
			return "imgColor";
		case 26:
			return "isIconBackgroundVisible";
		case 27:
			return "iconEnabled";
		case 28:
			return "overlayTxn";
		case 29:
			return "overlayTxd";
		case 30:
			return "overlayColor";
		case 31:
			return "overlayVisible";
		case 32:
			return "meterThirdsVisible";
		case 33:
			return "showAlternateIcons";
		case 34:
			return "showBlinkIcon";
		case 35:
			return "showPulse";
		case 36:
			return "countDownTimer";
		case 37:
			return "isVisible";
		default:
			break;
	}
	return "";
}

char* func_1324(int iParam0)
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

int func_1325(int iParam0)
{
	return 0;
}

float func_1326(int iParam0)
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

int func_1327(int iParam0)
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

bool func_1328(var uParam0)
{
	return func_1375(*uParam0, 1);
}

void func_1329(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1328(uParam0))
	{
		func_1376(uParam0);
	}
}

int func_1330(var uParam0)
{
	if (!func_1328(uParam0))
	{
		return 0;
	}
	if (func_1377(uParam0))
	{
		return uParam0->f_2;
	}
	return func_1378(uParam0->f_1);
}

void func_1331(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

int func_1332(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	fVar0 = (((Param3.f_1 - Param0.f_1) * (Param6 - Param3)) - ((Param3 - Param0) * (Param6.f_1 - Param3.f_1)));
	if (fVar0 == 0f)
	{
		return 0;
	}
	if (fVar0 > 0f)
	{
		return 1;
	}
	return 2;
}

int func_1333(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_1334(int iParam0)
{
	switch (iParam0)
	{
		case -323664079:
			return 0;
		case 304473406:
			return 1;
		case 1428568385:
			return 2;
		case -710377432:
			return 3;
		default:
			break;
	}
	return -1;
}

var func_1335(struct<5> Param0)
{
	return func_1239(Param0, 49, 1);
}

int func_1336(int iParam0)
{
	switch (iParam0)
	{
		case -2065946849:
			return 4;
		case 1130877567:
			return 8;
		case 303108068:
			return 1;
		case -862695229:
			return 2;
		case -562306862:
			return 16;
		case 42942348:
			return 32;
		case 2076061048:
			return 64;
		case 1960865708:
			return 128;
		case -717214561:
			return 256;
		case 1090282455:
			return 512;
		case 699460870:
			return 1024;
		case -467684650:
			return 2048;
		case 1946702493:
			return 4096;
		case 1283453238:
			return 16384;
		case 1689792654:
			return 32768;
		case 1670758327:
			return 8192;
		default:
			break;
	}
	return 0;
}

int func_1337(int iParam0)
{
	switch (iParam0)
	{
		case -1180895447:
			return 1;
		default:
			break;
	}
	return 0;
}

var func_1338(struct<5> Param0)
{
	return func_1239(Param0, 49, 1);
}

int func_1339(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1760251247:
			return 1;
		case -270184684:
			return 2;
		case 517374376:
			return 3;
		case 1688268471:
			return 0;
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

var func_1340(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	vParam0.f_2 = iParam5;
	if (!_datafile_get_int(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_1341(int iParam0, int iParam1)
{
	switch (iParam0->f_1)
	{
		case -212921506:
			switch (*iParam0)
			{
				case -2065946849:
					break;
				case -1329297961:
					iVar0 = iParam1;
					iVar0 = (&iParam0->f_2[3] - iVar0);
					iVar0 = (iVar0 - &iParam0->f_2[2] * 60);
					iVar0 = (iVar0 - &iParam0->f_2[1] * 3600);
					iVar0 = (iVar0 - (&iParam0->f_2[0] * 86400));
					break;
				default:
					break;
			}
			break;
		case 1778950238:
			switch (*iParam0)
			{
				case -2065946849:
					break;
				case -1329297961:
					iVar1 = iParam1;
					func_1379(&iVar1, &(iParam0->f_2[3]), &(iParam0->f_2[2]), &(iParam0->f_2[1]), &(iParam0->f_2[0]), 0, 0);
					iVar0 = iVar1;
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_1342(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1380(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1381(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1382(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1383(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1384(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1385(iParam0);
	if (iVar5 < 1 || iVar5 > func_1386(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_1343(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1383(*iParam0);
	iVar1 = func_1384(*iParam0);
	iVar2 = func_1385(*iParam0);
	iVar3 = func_1382(*iParam0);
	iVar4 = func_1381(*iParam0);
	iVar5 = func_1380(*iParam0);
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
	iVar6 = func_1386(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1386(iVar1, iVar0);
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
	func_1387(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

var func_1344(struct<5> Param0)
{
	return func_1239(Param0, 61, 1);
}

bool func_1345(struct<5> Param0, int iParam5, var uParam6)
{
	if (!func_1078(Param0, &(Param0.f_1), 47, iParam5, 0, 1))
	{
		return false;
	}
	*uParam6 = func_1388(Param0);
	uParam6->f_1 = func_1389(Param0);
	uParam6->f_2 = func_1390(Param0);
	uParam6->f_3 = func_1391(Param0);
	return true;
}

int func_1346(var uParam0)
{
	return func_1333(uParam0, 36, 1);
}

int func_1347(var uParam0)
{
	return func_1333(uParam0, 37, 1);
}

bool func_1348(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1312(bParam7);
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

bool func_1349(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

struct<28> func_1350(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_1312(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1356(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1351(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1362(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1364(func_1392(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1365(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_1352(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_1312(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_1356(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_1353(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1364(func_1393(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1365(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_1354(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_1312(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1356(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1355(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1362(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1364(func_1394(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1365(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_1356(var uParam0, bool bParam1)
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
		Var0.f_15 = func_1361(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_1357() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

struct<4> func_1357()
{
	return Var0;
}

bool func_1358()
{
	return (func_1395(-1185145312, 0, 0, 0) > 0 && func_1396(func_1217(889965687, func_1301(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_1359(int iParam0, int iParam1, int iParam2)
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

bool func_1360(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_1312(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_1361(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_1362(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_1397(uParam1->f_8, iParam0, uVar0, 2048) || func_1397(uParam1->f_8, iParam0, uVar0, 32768)) || func_1397(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_1397(uParam1->f_8, iParam0, uVar0, 4) || func_1397(uParam1->f_8, iParam0, uVar0, 256)) || func_1397(uParam1->f_8, iParam0, uVar0, 65536)) || func_1397(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_1397(uParam1->f_8, iParam0, uVar0, 1) || func_1397(uParam1->f_8, iParam0, uVar0, 8)) || func_1397(uParam1->f_8, iParam0, uVar0, 65536)) || func_1397(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_1397(uParam1->f_8, iParam0, uVar0, 1) || func_1397(uParam1->f_8, iParam0, uVar0, 16)) || func_1397(uParam1->f_8, iParam0, uVar0, 2)) || func_1397(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_1397(uParam1->f_8, iParam0, uVar0, 8) || func_1397(uParam1->f_8, iParam0, uVar0, 4096)) || func_1397(uParam1->f_8, iParam0, uVar0, 256)) || func_1397(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_1363(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_1364(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_1398(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_1398(iParam1, 2, 0, 0);
	return -1;
}

int func_1365(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_1398(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_1366(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_74((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1367(var uParam0, bool bParam1, int iParam2)
{
	func_1399(uParam0, iParam2);
	if (Global_1196205->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1400(func_1366(uParam0->f_1));
	}
	else
	{
		func_1401();
	}
}

int func_1368(int iParam0)
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

int func_1369(int iParam0, var uParam1)
{
	if (func_1402(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1370(int iParam0)
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

int func_1371(int iParam0)
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

int func_1372(int iParam0)
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

int func_1373(int iParam0)
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

int func_1374(int iParam0)
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

bool func_1375(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1376(var uParam0)
{
	func_1403(uParam0, 0);
}

bool func_1377(var uParam0)
{
	return func_1375(*uParam0, 2);
}

int func_1378(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

void func_1379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_1383(*iParam0);
	iVar1 = func_1384(*iParam0);
	iVar2 = func_1385(*iParam0);
	iVar3 = func_1382(*iParam0);
	iVar4 = func_1381(*iParam0);
	iVar5 = func_1380(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_1386(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_1387(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1380(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_1381(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_1382(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_1383(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1404(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_1384(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_1385(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_1386(int iParam0, int iParam1)
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

void func_1387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1405(iParam0, iParam6);
	func_1406(iParam0, iParam5);
	func_1407(iParam0, iParam4);
	func_1408(iParam0, iParam3);
	func_1409(iParam0, iParam2);
	func_1410(iParam0, iParam1);
}

var func_1388(struct<5> Param0)
{
	return func_1239(Param0, 61, 1);
}

var func_1389(struct<5> Param0)
{
	return func_1239(Param0, 64, 1);
}

var func_1390(struct<5> Param0)
{
	return func_1239(Param0, 63, 1);
}

var func_1391(struct<5> Param0)
{
	return func_1411(Param0, 65, 1);
}

bool func_1392(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_1393(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_1394(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

int func_1395(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_1316(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_1312(bParam1), iParam0, iParam3);
}

int func_1396(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1412(&uParam0, iParam4, bParam5, iParam6);
}

int func_1397(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_1059(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_1398(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1413(iParam0, iParam1, iParam2, iParam3);
}

void func_1399(var uParam0, int iParam1)
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

void func_1400(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205->f_129)
	{
		return;
	}
	Global_1196205->f_130 = iParam0;
	Global_1196205->f_131 = Global_1196205[iParam0];
}

void func_1401()
{
	if (Global_1196205->f_131 == 0)
	{
		return;
	}
	Global_1196205->f_130 = func_1414(Global_1196205->f_131);
	if (Global_1196205->f_130 < 0)
	{
		Global_1196205->f_131 = 0;
	}
}

bool func_1402(int iParam0, var uParam1, var uParam2)
{
	if (func_1415(iParam0, uParam1, &uVar0))
	{
		func_1416(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_1403(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_1417(uParam0, 1);
	func_1418(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_1404(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1405(int iParam0, int iParam1)
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

void func_1406(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1407(int iParam0, int iParam1)
{
	iVar0 = func_1384(*iParam0);
	iVar1 = func_1383(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1386(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1408(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1409(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1410(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

var func_1411(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	vParam0.f_2 = iParam5;
	if (!_datafile_get_bool(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_1412(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_1419(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_1413(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1420(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_1414(int iParam0)
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

bool func_1415(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1368(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_1416(var uParam0, int iParam1, var uParam2)
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

void func_1417(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1418(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1419(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_1312(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_1360(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_1420(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1421(&(uParam0->f_4));
}

void func_1421(var uParam0)
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

