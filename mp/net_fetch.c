void __EntryFunction__()
{
	fLocal_8237 = 1f;
	fLocal_8238 = 1f;
	func_1(iVar8241);
	func_2(ScriptParam_0);
	while (!func_3() && func_4())
	{
		wait(0);
	}
	if ((network_is_game_in_progress() && network_is_host_of_this_script()) && network_get_num_participants() <= 1)
	{
		func_5();
	}
	func_6();
	func_7();
}

void func_1(int iParam0)
{
	Local_4089.f_3973 = iParam0;
	func_8(32, iParam0);
	func_9();
	network_register_host_broadcast_variables(&Local_13, 396, 58);
	func_10(_0xba24095ea96dfe17(&Local_13), 396, "m_hostData");
	network_register_host_broadcast_variables(&Local_409, 511, 59);
	func_10(_0xba24095ea96dfe17(&Local_409), 511, "m_hostEntityData");
	network_register_player_broadcast_variables(&Local_920, 3169, 60);
	func_11(_0x690806bc83bc8ca2(Local_920[0]), 3169, "m_clientData");
	func_12(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
}

void func_2(struct<7> Param0, var uParam7, var uParam8, var uParam9)
{
	Local_4089.f_3391 = Param0.f_6;
	Local_4089.f_3392 = Global_1237665[Local_4089.f_3391];
	Local_4089.f_3972 = (*Global_1237665)[Local_4089.f_3391]->f_6;
	Local_4089.f_3393 = (*Global_1248240)[Local_4089.f_3391]->f_559;
	Local_4089.f_4129 = _0x4be6c13a45cca8ec((*Global_1248240)[Local_4089.f_3391]->f_595);
	set_this_script_can_remove_blips_created_by_any_script(true);
	switch (Local_4089.f_3393)
	{
		case 1427578635:
			Var2 = { func_13((*Global_1237665)[Local_4089.f_3391]->f_16) };
			_0x4ef23e04a0c8ff51(&Var2, &uVar0);
			Local_4089.f_3897.f_57 = uVar0;
			if ((func_14(network_player_id_to_int()) == (*Global_1237665)[Local_4089.f_3391]->f_16 && func_15(1437065740)) && !func_16(&uVar9))
			{
				func_17(853, 0);
			}
			if (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id()
			{
				func_18(0);
				_0xd05ad61f242c626b(Global_34, 12f);
				func_19(668358831);
				Global_1248240->f_8903.f_116 = 255;
				if (Local_4089.f_3897.f_57 == 0)
				{
					func_20(8, 1, 0);
				}
			}
			break;
		case 195932838:
			set_audio_flag("EnableCutsceneMusic", true);
			break;
	}
	if ((*Global_1237665)[Local_4089.f_3391]->f_16 != 255 && network_is_player_active((*Global_1237665)[Local_4089.f_3391]->f_16))
	{
		StringCopy(&(Local_4089.f_2890.f_60), get_player_name((*Global_1237665)[Local_4089.f_3391]->f_16), 64);
	}
}

bool func_3()
{
	Var0 = { (*Global_1248240)[Local_4089.f_3391]->f_584 };
	if (Local_4089.f_3392 == -1)
	{
		return true;
	}
	if (func_21(0, 0))
	{
		return true;
	}
	if (Local_4089.f_3393 != 1717788883)
	{
		if (func_22(Var0, 1, 0))
		{
			return true;
		}
	}
	iVar2 = (*Global_1248240)[Local_4089.f_3391]->f_590;
	if (iVar2 == -1)
	{
		return true;
	}
	else if (&Global_1248240->f_8880[iVar2] != Local_4089.f_3391)
	{
		return true;
	}
	else if (Global_1248240->f_8880[iVar2]->f_2 == 0)
	{
		return true;
	}
	else if ((((*Global_1237665)[Local_4089.f_3391]->f_2 >= 3 && iVar4087 == 2) && Local_13 >= 4) && Local_13.f_1 == 6)
	{
		return true;
	}
	return false;
}

bool func_4()
{
	func_23();
	if (network_is_host_of_this_script())
	{
		func_24();
	}
	func_25();
	return iVar4087 != 5;
}

void func_5()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (does_pickup_exist(&(Local_13.f_75[iVar0])))
		{
			remove_pickup(&(Local_13.f_75[iVar0]));
		}
		iVar0++;
	}
	if (_0xf6a8a652a6b186cd(Local_13.f_323.f_1))
	{
		_0xfdfecc6ee4491e11(Local_13.f_323.f_1);
	}
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		if (_0xf6a8a652a6b186cd(Local_13.f_323.f_2[iVar1]->f_1))
		{
			_0xfdfecc6ee4491e11(Local_13.f_323.f_2[iVar1]->f_1);
		}
		iVar1++;
	}
}

void func_6()
{
	func_26((*Global_1248240)[Local_4089.f_3391]->f_590, Local_4089.f_3391, 0, 1);
	func_27(Local_4089.f_3391, 1048576);
	if (Local_4089.f_2.f_1 == 0 && func_28(126))
	{
		if (func_29(Local_4089.f_3391, 16) || func_30() == 2)
		{
			func_31(1);
		}
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_32(iVar0, 1);
		iVar0++;
	}
	func_33(1, 1, 1, Local_4089.f_1 != 6, 1, 1, 0, 1);
	MemCopy(&uVar1, {func_35(func_34(Local_4089.f_3392))}, 2);
	if (!is_string_null_or_empty(&uVar1) && _text_database_has_loaded(&uVar1))
	{
		_text_database_delete(&uVar1);
	}
	if (func_28(73))
	{
		func_36();
	}
	if (func_37(&(Local_4089.f_3355)))
	{
		_0x28508173c6a7cc18(1);
	}
	if (func_28(3))
	{
		func_38(0);
		if (Local_4089.f_3395.f_279 != 0)
		{
			MemCopy(&uVar1, {func_39(&(Local_4089.f_3355), Local_4089.f_3395.f_279)}, 2);
			if (!is_string_null_or_empty(&uVar1) && _text_database_has_loaded(&uVar1))
			{
				_text_database_delete(&uVar1);
			}
		}
	}
	_datafile_unload(Local_4089.f_3355.f_1);
	_datafile_unload(Local_4089.f_3355.f_2);
	_datafile_unload(Local_4089.f_3355.f_3);
	_datafile_unload(Local_4089.f_3355.f_4);
	func_40();
	func_41(Local_4089.f_3391);
	if (func_28(69))
	{
		func_42(0);
	}
	func_43(0);
	func_44(0);
	_0x4f57397388e1dff8();
	_0xfc6ecb9170145ece();
	if (Local_4089.f_3211 != -1)
	{
		func_45(46999421);
	}
	if (Local_4089.f_3393 == 1427578635)
	{
		if ((*Global_1237665)[Local_4089.f_3391]->f_16 != 255)
		{
			iVar3 = get_player_ped((*Global_1237665)[Local_4089.f_3391]->f_16);
			if (_0x0e6846476906c9dd(player_id(), iVar3))
			{
				_0x9dae1380cc5c6451(player_id(), iVar3);
				_0xbc02b3d151d3859f(iVar3, 0);
				_0x62ed71e133b6c9f1(iVar3, 0, 0, 0);
			}
		}
		if (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id()
		{
			func_18(1);
			_0xd05ad61f242c626b(Global_34, 1f);
			func_46(1);
			func_46(4);
		}
		else
		{
			func_47();
		}
	}
	else if (Local_4089.f_3393 == 195932838)
	{
		set_audio_flag("EnableCutsceneMusic", false);
	}
	func_27(Local_4089.f_3391, 512);
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		iVar5 = int_to_playerindex(iVar4);
		func_48(iVar4, 0);
		func_49(iVar4, 0);
		if (_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_73), iVar4))
		{
			_0xd426e2e3288469d6(&(Local_4089.f_2890.f_73), iVar4);
			func_50(iVar5);
			func_51(iVar4, 0);
		}
		func_52(iVar5, 0);
		iVar4++;
	}
	if ((Local_13 == 5 || Local_13.f_1 == 6) || (network_is_game_in_progress() && network_get_num_participants() <= 1))
	{
		if (func_53(Local_4089.f_3391, 16384, 255))
		{
			iVar6 = 1;
		}
		iVar7 = 0;
		while (iVar7 <= 14)
		{
			if (!func_54(iVar7))
			{
				func_55(Local_409.f_1[iVar7]->f_14, iVar6);
			}
			if (func_56(Local_4089.f_6[iVar7]->f_68))
			{
				func_57(&(Local_4089.f_6[iVar7]->f_68), 1, 1);
			}
			if (func_56(Local_4089.f_6[iVar7]->f_69))
			{
				func_57(&(Local_4089.f_6[iVar7]->f_69), 1, 1);
			}
			if (func_58(18, iVar7))
			{
				set_ped_config_flag(Global_34, 360, false);
			}
			if (!func_58(55, iVar7))
			{
				Var8 = { func_59(iVar7) };
				if (!is_string_null_or_empty(&Var8) && get_is_waypoint_recording_loaded(&Var8))
				{
					remove_waypoint_recording(&Var8);
				}
			}
			func_60(iVar7, 886638433, Local_4089.f_6[iVar7]->f_60, 1);
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			func_55(Local_409.f_317[iVar7]->f_5, iVar6);
			if (func_56(Local_4089.f_1087[iVar7]->f_12))
			{
				func_57(&(Local_4089.f_1087[iVar7]->f_12), 1, 1);
			}
			if (func_61(8192, iVar7))
			{
				set_ped_config_flag(Global_34, 360, false);
			}
			func_60(iVar7, -1918493640, Local_4089.f_1087[iVar7]->f_11, 1);
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 <= 5)
		{
			func_62(iVar7);
			func_55(Local_409.f_381[iVar7]->f_10, iVar6);
			func_63(Local_409.f_381[iVar7]->f_11, iVar6);
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 <= 4)
		{
			if (Local_4089.f_1508[iVar7]->f_1 != 0)
			{
				func_64(iVar7);
			}
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 <= 13)
		{
			func_55(&(Local_13.f_60[iVar7]), iVar6);
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 <= 9)
		{
			func_63(&(Local_13.f_49[iVar7]), iVar6);
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 <= 3)
		{
			func_65(iVar7);
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 <= 14)
		{
			if (network_does_network_id_exist(&(Local_13.f_3[iVar7])))
			{
				func_55(&(Local_13.f_3[iVar7]), 0);
			}
			else if (does_entity_exist(&(Local_4089.f_1554[iVar7])) && is_entity_a_mission_entity(&(Local_4089.f_1554[iVar7])))
			{
				func_66(&(Local_4089.f_1554[iVar7]), 0);
			}
			iVar7++;
		}
		if (!func_67(Local_4089.f_3201.f_6))
		{
			func_68(&(Local_4089.f_3201), 70);
		}
		iVar7 = 0;
		while (iVar7 <= 4)
		{
			if (&Local_4089.f_3171[iVar7] == 1974833915)
			{
				Var8 = { func_69(&(Local_4089.f_3355), iVar7) };
				if (!is_string_null_or_empty(&Var8))
				{
					remove_waypoint_recording(&Var8);
				}
			}
			iVar7++;
		}
		func_70();
	}
	iVar16 = 0;
	while (iVar16 <= 32)
	{
		if (is_valid_interior(Local_4089.f_2190[iVar16]->f_20))
		{
			unpin_interior(Local_4089.f_2190[iVar16]->f_20);
			Local_4089.f_2190[iVar16]->f_20 = 0;
		}
		iVar17 = Local_4089.f_2190[iVar16]->f_9;
		switch (iVar17)
		{
			case -2099316354:
			case -766197312:
			case -56142594:
			case 1742456873:
			case 1749191359:
			case 1840419224:
			case 1983681793:
				_0x2c87c3e1c7b96ee2(&(Local_4089.f_2190[iVar16]));
				break;
			case -659803429:
				remove_all_cover_blocking_areas();
				break;
			case -1729589314:
			case -1310642109:
			case -372365539:
				_0xbe551c2cc421185d(&(Local_4089.f_2190[iVar16]), 0);
				_0x5b23dff8e0948bb2(&(Local_4089.f_2190[iVar16]), 0);
				break;
		}
		remove_shocking_event(Local_4089.f_2190[iVar16]->f_12);
		func_71(&(Local_4089.f_2190[iVar16]));
		iVar16++;
	}
	iVar18 = 0;
	while (iVar18 <= 5)
	{
		remove_shocking_event(Local_4089.f_1622[iVar18]->f_47);
		iVar18++;
	}
	iVar19 = 0;
	while (iVar19 <= 14)
	{
		func_72(Local_4089.f_1585[iVar19], 1);
		iVar19++;
	}
	iVar21 = func_73(&(Local_4089.f_3355));
	iVar20 = 0;
	while (iVar20 <= (iVar21 - 1))
	{
		iVar20++;
	}
	func_74(0);
	func_75(0);
	func_76();
	if (func_28(44))
	{
		func_77(0);
	}
	if (func_28(74))
	{
		Var22 = { func_78(&(Local_4089.f_3355)) };
		if (!is_string_null_or_empty(&Var22))
		{
			_0x9428447ded71fc7e(&Var22);
			func_79(74, 1, 0);
		}
	}
	if (func_28(67))
	{
		_0x7146cf430965927c(15, true);
	}
	if (func_28(35))
	{
		set_ped_config_flag(Global_34, 417, false);
		set_ped_config_flag(Global_34, 155, false);
		set_ped_config_flag(Global_34, 538, false);
	}
	if (func_28(101))
	{
		_0x330ca55a3647fa1c(player_id(), 0);
	}
	if (func_28(76))
	{
		iVar38 = _get_entity_proofs(player_ped_id());
		if (func_80(iVar38, 4))
		{
			iVar38 = (iVar38 - 4);
		}
		set_entity_proofs(player_ped_id(), iVar38, false);
		set_player_invincible(player_id(), false);
		func_81(0);
	}
	if (_0x927b810e43e99932(&(Local_4089.f_2968.f_7)))
	{
		_0x0a5a4f1979abb40e(&(Local_4089.f_2968.f_7));
	}
	func_82();
	func_83(get_id_of_this_thread(), 1);
	if (Local_13.f_395 != -1 && func_84() == Local_13.f_395)
	{
		func_85();
	}
	if (Local_4089.f_3393 == 974227447)
	{
		iVar39 = 1776413432;
	}
	else if (Local_4089.f_3393 == 1918154385)
	{
		iVar39 = -2876735;
	}
	if (iVar39 != 0 && func_28(63))
	{
		if (_0x7409669c5ed50144(iVar39))
		{
			_0x50b72a754ee64a71(iVar39);
		}
		func_79(63, 1, 0);
	}
	if (func_28(66))
	{
		func_86();
	}
	func_87(1);
}

void func_7()
{
	terminate_this_thread();
}

void func_8(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_7();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_9()
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
			func_7();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_7();
					break;
				case 2:
					func_7();
					break;
				case 4:
					func_7();
					break;
				case 3:
					func_7();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_7();
		}
		if (!network_is_game_in_progress())
		{
			func_7();
		}
		if (!network_is_signed_online())
		{
			func_7();
		}
		if (func_88() == 0)
		{
			if (func_89())
			{
				func_7();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_7();
	}
	return 1;
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
					func_7();
					break;
				case 2:
					func_7();
					break;
				case 4:
					func_7();
					break;
				case 3:
					func_7();
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
			func_7();
			return;
		}
		wait(0);
	}
}

struct<7> func_13(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

int func_14(int iParam0)
{
	return (*Global_1238240)[iParam0]->f_300.f_1;
}

bool func_15(int iParam0)
{
	Var2 = { func_90(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (!func_91(&Var2, &iVar0, &iVar1, 0))
	{
		return false;
	}
	Var16.f_10 = -1;
	iVar41 = 0;
	while (iVar41 < iVar1)
	{
		func_92(&Var16);
		if (!func_93(iVar41, iVar0, iVar1, 2, &Var16, 0))
		{
		}
		else if (iParam0 == Var16.f_4)
		{
			iVar40 = 1;
		}
		else
		{
			iVar41++;
		}
	}
	func_94(iVar0);
	return iVar40;
}

bool func_16(var uParam0)
{
	if (!_network_is_player_index_valid(player_id()))
	{
		return false;
	}
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	*uParam0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(*uParam0))
	{
		*uParam0 = 0;
		return false;
	}
	if (!func_95(*uParam0))
	{
		*uParam0 = 0;
		return false;
	}
	return true;
}

void func_17(int iParam0, bool bParam1)
{
	func_96(iParam0, &iVar0, &iVar1);
	if (!func_97(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_98(iVar0, iVar1);
}

void func_18(bool bParam0)
{
	if (bParam0)
	{
		func_99(109);
		if (!Global_1296859->f_12)
		{
			func_100(16);
		}
	}
	else
	{
		func_101(109);
		if (!Global_1296859->f_12)
		{
			func_100(16);
		}
	}
}

void func_19(int iParam0)
{
	func_103(func_102(iParam0), iParam0);
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	if (!func_104(iParam0, 255))
	{
		func_105(&(Local_920[participant_id_to_int()]->f_92), iParam0);
	}
}

bool func_21(bool bParam0, bool bParam1)
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

bool func_22(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_106(*Global_1051213) && !func_107(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_108(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_109(iParam3, 255))
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
	if (func_110())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_106(*Global_1051213))
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

void func_23()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		switch (get_event_at_index(1, iVar0))
		{
			case -1315570756:
				func_111(iVar0);
				break;
			case 1832265142:
				func_112(iVar0);
				break;
			case 1694142010:
				func_113(iVar0);
				break;
			case 1741908893:
				func_114(iVar0);
				break;
			case -507840394:
				func_115(iVar0);
				break;
		}
		iVar0++;
	}
	if ((func_28(99) || func_116()) || func_28(113))
	{
		iVar1 = 0;
		while (iVar1 < get_number_of_events(0))
		{
			switch (get_event_at_index(0, iVar1))
			{
				case -313265754:
				case 2145012826:
					func_117(iVar1);
					break;
				case -140551285:
					func_118(iVar1);
					break;
				case -1730772208:
					func_119(iVar1);
					break;
			}
			iVar1++;
		}
	}
}

void func_24()
{
	if (func_120(8) || (func_121(8, -1, 0) && Local_13 != 5))
	{
		func_122(5, 1);
	}
	if (Local_13 > 0 && Local_13 != 5)
	{
		if (!func_104(1, 255))
		{
			return;
		}
		else if (!func_123(1))
		{
			_0x2302c0264ea58d31();
		}
	}
	if (Local_13 < 4 && ((*Global_1237665)[Local_4089.f_3391]->f_2 == 3 || (*Global_1237665)[Local_4089.f_3391]->f_2 == -1))
	{
		func_122(5, 0);
		return;
	}
	switch (Local_13)
	{
		case 0:
			func_124();
			break;
		case 1:
			func_125();
			break;
		case 2:
			func_126();
			break;
		case 3:
			func_127();
			break;
		case 4:
			func_128();
			break;
	}
}

void func_25()
{
	if (Local_13 == 5)
	{
		func_129(Local_13);
	}
	func_130();
	func_131();
	func_132();
	func_133();
	func_134();
	switch (iVar4087)
	{
		case 0:
			func_135();
			break;
		case 1:
			func_136();
			break;
		case 2:
			func_137();
			break;
		case 3:
			func_138();
			break;
		case 4:
			func_139();
			break;
	}
}

void func_26(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_140(iParam0))
	{
		return;
	}
	if (!func_141(iParam0, iParam1))
	{
		(*Global_1248240)[iParam1]->f_590 = -1;
		return;
	}
	if (&Global_1248240->f_8880[iParam0] != -1)
	{
		(*Global_1248240)[&Global_1248240->f_8880[iParam0]]->f_590 = -1;
		if (bParam3 && network_is_session_active())
		{
			func_142(&(Global_1248240->f_8880[iParam0]), 2);
		}
	}
	if (bParam2)
	{
		Global_1248240->f_8880[iParam0]->f_1 = -1;
	}
	Global_1248240->f_8880[iParam0] = -1;
	Global_1248240->f_8880[iParam0]->f_2 = 0;
}

void func_27(int iParam0, int iParam1)
{
	if (!func_143(iParam0))
	{
		return;
	}
	if (func_29(iParam0, iParam1))
	{
		func_144(&((*Global_1248240)[iParam0]->f_556), iParam1);
	}
}

bool func_28(int iParam0)
{
	return func_145(&(Local_4089.f_4022), iParam0, 6);
}

bool func_29(int iParam0, int iParam1)
{
	return (func_143(iParam0) && func_146((*Global_1248240)[iParam0]->f_556, iParam1));
}

int func_30()
{
	iVar0 = func_147();
	switch (iVar0)
	{
		case 0:
		case 1:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return 0;
		case 2:
		case 3:
		case 4:
		case 5:
		case 12:
		case 13:
			return 4;
		case 23:
			return 2;
		case 24:
			return -1;
		default:
			break;
	}
	return 1;
}

void func_31(int iParam0)
{
	if (iParam0 == 0)
	{
		if (!func_148(64, -1))
		{
			func_149(12);
			return;
		}
	}
	switch (Local_4089.f_3393)
	{
		case 1918154385:
			func_150();
			break;
		case -260420884:
		case 850213441:
			func_151();
			break;
		case 1884341302:
			func_152();
			break;
		case -1777724963:
			func_153();
			break;
		case 1427578635:
			func_154();
			break;
		case -1784925006:
		case -669677371:
		case -232478158:
		case 78055447:
		case 974227447:
		case 1532822440:
			func_155();
			break;
		case -1086711901:
		case -697789102:
		case 195932838:
			func_156();
			break;
	}
	if (func_28(160))
	{
		func_149(10);
	}
	else
	{
		func_149(12);
	}
}

void func_32(bool bParam0, bool bParam1)
{
	bVar0 = func_157(bParam0);
	if (func_158(4096, bParam0, -1))
	{
		if (bParam1)
		{
		}
		else
		{
			return;
		}
	}
	if (func_159(16, bParam0) && !bParam1)
	{
		return;
	}
	bVar1 = participant_id_to_int() != 255;
	if (func_158(2048, bParam0, -1))
	{
		func_160(bParam0);
	}
	func_161(bParam0);
	if (func_158(8, bParam0, -1) || func_158(1048576, bParam0, -1))
	{
		func_162(1);
		func_163(&(Local_4089.f_3779.f_4));
		Local_4089.f_3779.f_7 = -1;
		if (bVar1)
		{
			func_164();
		}
		func_165(Local_4089.f_3391);
		if (func_159(128, bParam0))
		{
			if (func_166(player_id(), 4))
			{
				func_167(8);
			}
			if (is_screen_faded_out() && !func_168())
			{
				do_screen_fade_in(1000);
			}
		}
		if (func_169(bParam0))
		{
			clear_ped_tasks(Global_34, 1, 0);
		}
		_0x9428447ded71fc7e("RDRO_Scripted_Cutscene_Scenes");
		if (((!is_screen_faded_in() && !is_screen_fading_in()) && !func_170(255)) && !func_168())
		{
			do_screen_fade_in(1000);
		}
		func_171(1);
		func_172(0, 1);
		set_ped_config_flag(Global_34, 277, false);
		set_ped_config_flag(Global_34, 65, false);
		set_ped_config_flag(Global_34, 184, false);
		task_clear_look_at(Global_34);
		if (!_0x75df9e73f2f005fd(Global_34))
		{
			set_ped_can_ragdoll_from_player_impact(Global_34, true);
			set_entity_can_be_damaged(Global_34, true);
		}
		func_173(0);
		if (is_cinematic_cam_rendering())
		{
			_0x702b75dc9d3ede56(false);
		}
		if (func_28(150))
		{
			func_79(150, 1, 0);
		}
		_0x4b05b97ba46f419d(1);
		func_174(1);
		if (Local_4089.f_3286 != -1)
		{
			func_175(&(Local_4089.f_3286), 1);
		}
		func_176(bParam0);
		func_177(bParam0);
	}
	if (func_178(33554432, bParam0))
	{
		func_179(bParam0);
	}
	func_180(bParam0);
	if (func_178(128, bParam0))
	{
		if (func_181(bParam0) == func_182(255))
		{
			func_183(2, 1);
		}
		if (bVar1)
		{
			func_20(536870912, 1, 0);
		}
		simulate_player_input_gait(network_get_player_index_from_ped(Global_34), 1f, 2000, 0f, true, false);
	}
	if (func_178(256, bParam0))
	{
		func_184(256, bParam0);
		if (!func_185(256))
		{
			func_79(13, 1, 0);
		}
	}
	func_186(bParam0);
	func_187(bParam0);
	func_188();
	if (!bParam1)
	{
		if (bVar0)
		{
			func_189(bParam0);
			if (Local_13.f_2 != 0)
			{
				func_190(4096, bParam0, 1);
			}
		}
		else
		{
			func_190(4096, bParam0, 1);
		}
	}
}

void func_33(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (func_28(148))
	{
		func_191(1);
		func_79(148, 1, 0);
	}
	if ((Local_4089.f_2890.f_31 != 23 && Local_4089.f_2890.f_31 != 25) && bParam7)
	{
		func_192(24, 1, 1);
	}
	if (func_193(Local_4089.f_2890.f_52))
	{
		_0x2f901291ef177b02(Local_4089.f_2890.f_52, iParam6);
	}
	if (Local_4089.f_2890.f_55 > 0)
	{
		func_194();
	}
	if (bParam2 && func_193(Local_4089.f_2890.f_33))
	{
		if ((Local_4089.f_2890.f_35 != 0 && func_195(Local_4089.f_2890.f_33)) && _0x59fa676177dbe4c9(Local_4089.f_2890.f_33) < 4)
		{
			func_196(Local_4089.f_2890.f_35, 1);
		}
		Local_4089.f_2890.f_34 = 0;
		Local_4089.f_2890.f_35 = 0;
		_0x2f901291ef177b02(Local_4089.f_2890.f_33, iParam6);
	}
	if (bParam3 && func_193(Local_4089.f_2890.f_32))
	{
		_0x2f901291ef177b02(Local_4089.f_2890.f_32, iParam6);
	}
	if (bParam1)
	{
		func_197(Local_4089.f_3391, 1, bParam4);
		func_79(140, 1, 0);
	}
	func_198(Local_4089.f_3391);
	func_199(-1);
	func_200(0);
	func_201(Local_4089.f_3391);
	if (!func_202())
	{
		func_172(0, 1);
		func_203(0);
		func_173(0);
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_204(iVar0);
		iVar0++;
	}
	if (bParam0)
	{
		if (Local_4089.f_3393 == 1427578635 && &Local_4089.f_3008[1] != 493038497)
		{
			func_205();
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			func_206(&(Local_4089.f_6[iVar0]->f_26), Local_4089.f_6[iVar0]->f_23, 0);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			func_206(&(Local_4089.f_1087[iVar0]->f_13), Local_4089.f_1087[iVar0]->f_3, 0);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			func_206(&(Local_4089.f_1367[iVar0]->f_3), Local_4089.f_1367[iVar0]->f_13, 0);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_207(&(Local_4089.f_1508[iVar0]->f_3));
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			func_208(iVar0);
			iVar0++;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 32)
	{
		func_209(iVar1);
		iVar1++;
	}
	if (bParam5)
	{
		func_210(0);
		func_211();
		func_212();
		func_213();
		func_214();
	}
	func_215(0);
}

int func_34(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

struct<8> func_35(int iParam0)
{
	if (func_216(&Var8, iParam0))
	{
		func_217(Var8, -1561751183, &Var0, 1);
	}
	return Var0;
}

void func_36()
{
	if (!func_28(73))
	{
		return;
	}
	_0x5a8b01199c3e79c3();
	func_79(73, 1, 0);
}

bool func_37(var uParam0)
{
	return func_218(uParam0, 146418101, 0, -801742902, 0, 0, 0, 0, 0);
}

bool func_38(bool bParam0)
{
	iVar1 = 0;
	iVar2 = func_219(&(Local_4089.f_3355));
	if (iVar2 <= 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		Var3 = { func_220(&(Local_4089.f_3355), iVar0) };
		if (is_string_null_or_empty(&Var3))
		{
			iVar1++;
		}
		else if (!_does_text_database_exist(&Var3))
		{
			iVar1++;
		}
		else if (bParam0)
		{
			if (!_0x3cf96e16265b7dc8(&Var3))
			{
				_text_database_request(&Var3);
			}
			if (_text_database_has_loaded(&Var3))
			{
				iVar1++;
			}
		}
		else if (_text_database_has_loaded(&Var3))
		{
			_text_database_delete(&Var3);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar2 == iVar1)
	{
		return true;
	}
	return false;
}

struct<8> func_39(var uParam0, int iParam1)
{
	return func_221(uParam0, 1267832066, "", -1699342830, iParam1, 0, 0, 0, 0);
}

void func_40()
{
	if (!does_entity_exist(Local_4089.f_4131))
	{
		return;
	}
	if (get_ped_config_flag(Local_4089.f_4131, 565, true))
	{
		set_ped_config_flag(Local_4089.f_4131, 565, false);
	}
}

void func_41(int iParam0)
{
	if (!func_143(iParam0))
	{
		return;
	}
	if ((*Global_1248240)[iParam0]->f_559 == 1717788883)
	{
		return;
	}
	if (func_29(iParam0, 128))
	{
		func_222(0);
		func_27(iParam0, 128);
	}
	if (func_53(iParam0, 64, 255))
	{
		return;
	}
	Var0 = { (*Global_1248240)[iParam0]->f_584 };
	bVar2 = func_29(iParam0, 33554432);
	func_27(iParam0, 33554432);
	func_223(iParam0);
	func_224(iParam0);
	if (!func_225(Var0) && !func_226(Var0))
	{
		return;
	}
	iVar3 = func_227((*Global_1248240)[iParam0]->f_559);
	if (iVar3 != 0 && iVar3 != 6)
	{
		func_228(0);
	}
	func_27(iParam0, 16);
	func_142(iParam0, 32);
	func_142(iParam0, 16);
	if ((!bVar2 && !_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), &Global_1296859)) && !func_29(iParam0, 65536))
	{
		bVar4 = true;
	}
	func_229(Var0, 0, 2, bVar4, 0);
	Var5.f_1 = -1;
	Var5.f_1.f_1 = -1;
	func_230((*Global_1248240)[iParam0]->f_584, &Var5);
	if ((*Global_1248240)[iParam0]->f_559 == -468635158)
	{
		func_231(0);
	}
	if ((*Global_1248240)[iParam0]->f_559 == 1427578635)
	{
		if (*Global_1237665)[iParam0]->f_16 == player_id()
		{
			func_46(4);
		}
		func_232(1, 0, 0);
	}
	if (func_233((*Global_1248240)[iParam0]->f_559))
	{
		func_234(1, 0, 0);
	}
	func_235((*Global_1248240)[iParam0]->f_559);
}

void func_42(bool bParam0)
{
	if (bParam0)
	{
		func_99(49);
	}
	else
	{
		func_101(49);
	}
}

void func_43(bool bParam0)
{
	if (bParam0)
	{
		set_ped_config_flag(Global_34, 562, true);
		func_236(50, 1, 0);
	}
	else if (func_28(50))
	{
		set_ped_config_flag(Global_34, 562, false);
		func_79(50, 1, 0);
	}
}

void func_44(bool bParam0)
{
	if (bParam0)
	{
		if (!func_28(64))
		{
			_hide_hud_component(-1249243147);
			set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
			set_current_ped_weapon(Global_34, -1569615261, false, 1, false, false);
			set_ped_config_flag(Global_34, 334, true);
			set_ped_config_flag(Global_34, 328, true);
			set_bit(&(Global_1957959->f_1), 1);
			_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
			func_236(64, 1, 0);
		}
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
		disable_control_action(0, -1304887797, false);
	}
	else if (func_28(64))
	{
		_display_hud_component(-1249243147);
		set_ped_config_flag(Global_34, 334, false);
		set_ped_config_flag(Global_34, 328, false);
		clear_bit(&(Global_1957959->f_1), 1);
		func_79(64, 1, 0);
	}
}

void func_45(int iParam0)
{
	if (Local_4089.f_3211 == iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 46999421:
			_0x406ccf555b04fad3(Global_34, 0, 0f);
			if (is_gameplay_cam_shaking())
			{
				_0x4285804fd65d8066("DRUNK_SHAKE", 0);
			}
			if (animpostfx_is_running("PlayerDrunk01"))
			{
				animpostfx_stop("PlayerDrunk01");
			}
			_0x37d7bdba89f13959("PlayerDrunk01");
			_0x58f7db5bd8fa2288(Global_34);
			break;
		case 313639473:
			_0x406ccf555b04fad3(Global_34, 1, 0.25f);
			if (!is_gameplay_cam_shaking())
			{
				shake_gameplay_cam("DRUNK_SHAKE", 1f);
			}
			_0x5199405eabfbd7f0("PlayerDrunk01");
			if (!animpostfx_is_running("PlayerDrunk01"))
			{
				animpostfx_play("PlayerDrunk01");
			}
			_0x58f7db5bd8fa2288(Global_34);
			set_gameplay_cam_shake_amplitude(0.4f);
			_0xcab4dd2d5b2b7246("PlayerDrunk01", 0.4f);
			break;
		case -431929910:
			_0x406ccf555b04fad3(Global_34, 1, 0.5f);
			if (!is_gameplay_cam_shaking())
			{
				shake_gameplay_cam("DRUNK_SHAKE", 1f);
			}
			_0x5199405eabfbd7f0("PlayerDrunk01");
			if (!animpostfx_is_running("PlayerDrunk01"))
			{
				animpostfx_play("PlayerDrunk01");
			}
			_0x89f5e7adecccb49c(Global_34, "very_drunk");
			set_gameplay_cam_shake_amplitude(0.6f);
			_0xcab4dd2d5b2b7246("PlayerDrunk01", 0.6f);
			break;
		case 1345212537:
			_0x406ccf555b04fad3(Global_34, 1, 1f);
			if (!is_gameplay_cam_shaking())
			{
				shake_gameplay_cam("DRUNK_SHAKE", 1f);
			}
			_0x5199405eabfbd7f0("PlayerDrunk01");
			if (!animpostfx_is_running("PlayerDrunk01"))
			{
				animpostfx_play("PlayerDrunk01");
			}
			_0x89f5e7adecccb49c(Global_34, "very_drunk");
			set_gameplay_cam_shake_amplitude(0.8f);
			_0xcab4dd2d5b2b7246("PlayerDrunk01", 0.8f);
			break;
	}
	Local_4089.f_3211 = iParam0;
}

void func_46(int iParam0)
{
	(*Global_1238240)[network_player_id_to_int()]->f_300 = ((*Global_1238240)[network_player_id_to_int()]->f_300 - ((*Global_1238240)[network_player_id_to_int()]->f_300 && iParam0));
}

void func_47()
{
	(*Global_1238240)[network_player_id_to_int()]->f_300.f_1 = 255;
	Global_1257541->f_8852.f_5 = -1;
}

void func_48(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_74), iParam0))
		{
			func_237(iParam0, 1);
			_0x31010318ba9897ac(&(Local_4089.f_2890.f_74), iParam0);
		}
	}
	else if (_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_74), iParam0))
	{
		func_237(iParam0, 0);
		_0xd426e2e3288469d6(&(Local_4089.f_2890.f_74), iParam0);
	}
}

void func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_75), iParam0))
		{
			_0x31010318ba9897ac(&(Local_4089.f_2890.f_75), iParam0);
		}
	}
	else if (_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_75), iParam0))
	{
		_0xd426e2e3288469d6(&(Local_4089.f_2890.f_75), iParam0);
	}
}

void func_50(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_28345), iParam0);
		if (func_238(iParam0))
		{
			func_239(iParam0);
		}
	}
}

void func_51(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_259), iParam0))
		{
			_0x31010318ba9897ac(&(Global_1071686->f_21689.f_259), iParam0);
		}
	}
	else if (_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_259), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_21689.f_259), iParam0);
		func_240(iParam0);
	}
}

void func_52(int iParam0, bool bParam1)
{
	if (iParam0 == 255)
	{
		return;
	}
	iVar0 = iParam0;
	if (!network_is_player_active(iParam0))
	{
		if (_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_77), iVar0))
		{
			_0xd426e2e3288469d6(&(Local_4089.f_2890.f_77), iVar0);
		}
		return;
	}
	iVar1 = get_player_ped(iParam0);
	if (!does_entity_exist(iVar1))
	{
		if (_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_77), iVar0))
		{
			_0xd426e2e3288469d6(&(Local_4089.f_2890.f_77), iVar0);
		}
		return;
	}
	if (is_entity_dead(iVar1))
	{
		if (_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_77), iVar0))
		{
			_0xd426e2e3288469d6(&(Local_4089.f_2890.f_77), iVar0);
		}
		return;
	}
	if (bParam1)
	{
		if (!_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_77), iVar0))
		{
			if (_0x870708a6e147a9ad(get_player_ped(iParam0), "", 20f, 0f, 33028, 0, 0, 0, 0, -1))
			{
				_0x31010318ba9897ac(&(Local_4089.f_2890.f_77), iVar0);
			}
		}
	}
	else if (_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_77), iVar0))
	{
		if (_0xe98d55c5983f2509(get_player_ped(iParam0)))
		{
			_0xd426e2e3288469d6(&(Local_4089.f_2890.f_77), iVar0);
		}
	}
}

bool func_53(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = network_player_id_to_int();
	}
	return (func_143(iParam0) && func_146((*(*Global_1238240)[iParam2])[iParam0]->f_19, iParam1));
}

bool func_54(int iParam0)
{
	if (Local_409.f_1[iParam0]->f_1 == 1448834071)
	{
		return true;
	}
	else if (Local_409.f_1[iParam0]->f_1 == 1525844114)
	{
		return true;
	}
	return false;
}

void func_55(int iParam0, int iParam1)
{
	if (!network_does_network_id_exist(iParam0))
	{
		return;
	}
	func_241(iParam0, 0);
	if (!func_242(iParam0))
	{
		return;
	}
	iVar0 = net_to_ent(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	remove_all_shocking_events(false);
	if (func_120(8))
	{
		iVar1 = 1;
	}
	if (iParam1 || iVar1)
	{
		delete_entity(&iVar0);
	}
	else
	{
		set_entity_as_no_longer_needed(&iVar0);
	}
}

bool func_56(int iParam0)
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

void func_57(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_56(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_243(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_244(iVar0);
	*uParam0 = 0;
}

bool func_58(int iParam0, int iParam1)
{
	return func_145(&(Local_4089.f_6[iParam1]->f_39), iParam0, 3);
}

struct<8> func_59(int iParam0)
{
	if (Local_13.f_381 != -1 && func_58(57, iParam0))
	{
		return func_245(iParam0, 886638433, -2061423469, 128586538, Local_13.f_381, 0);
	}
	return func_245(iParam0, 886638433, -2061423469, 0, 0, 0);
}

void func_60(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if ((does_entity_exist(iParam2) && _0x0e6846476906c9dd(player_id(), iParam2)) && bParam3)
	{
		_0x7f20092547b4ddea(iParam2);
		_0x9dae1380cc5c6451(player_id(), iParam2);
	}
	iVar8 = 0;
	while (iVar8 <= 4)
	{
		Var0 = { func_246(iParam0, iParam1, iVar8) };
		if (!is_string_null_or_empty(&Var0))
		{
			remove_waypoint_recording(&Var0);
		}
		iVar8++;
	}
}

bool func_61(int iParam0, int iParam1)
{
	return func_80(Local_4089.f_1087[iParam1]->f_6, iParam0);
}

void func_62(int iParam0)
{
	Var0 = { func_245(iParam0, -584819812, -1211149168, 0, 0, 0) };
	if (!is_string_null_or_empty(&Var0) && Local_4089.f_1367[iParam0]->f_20 != -1)
	{
		Var8 = { func_245(iParam0, -584819812, 17048854, 0, 0, 0) };
		_0x3210bcb36af7621b(Local_4089.f_1367[iParam0]->f_20);
		_0x531a78d6bf27014b(&Var0);
	}
}

void func_63(int iParam0, int iParam1)
{
	if (!network_does_network_id_exist(iParam0))
	{
		return;
	}
	if (!network_has_control_of_network_id(iParam0))
	{
		return;
	}
	iVar0 = _0xd08066e00d26c448(iParam0);
	if (!_does_propset_exist(iVar0))
	{
		return;
	}
	if (func_120(8))
	{
		iVar1 = 1;
	}
	if (iParam1 || iVar1)
	{
		_delete_propset(iVar0, true, true);
	}
	else
	{
		_set_propset_as_no_longer_needed(iVar0);
	}
}

void func_64(int iParam0)
{
	iVar0 = func_247(&(Local_4089.f_3355), iParam0);
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			func_249(func_248(&(Local_4089.f_3355), iParam0, iVar1));
			iVar1++;
		}
	}
	else
	{
		func_250(Local_4089.f_1508[iParam0]->f_1);
	}
}

void func_65(int iParam0)
{
	if (network_does_network_id_exist(Local_409.f_494[iParam0]->f_1) && network_has_control_of_network_id(Local_409.f_494[iParam0]->f_1))
	{
		iVar0 = _net_to_anim_scene(Local_409.f_494[iParam0]->f_1);
		_delete_anim_scene(iVar0);
	}
}

void func_66(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	remove_all_shocking_events(false);
	if (func_120(8))
	{
		iVar0 = 1;
	}
	if (iParam1 || iVar0)
	{
		delete_entity(&iParam0);
	}
	else
	{
		set_entity_as_no_longer_needed(&iParam0);
	}
}

bool func_67(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_68(var uParam0, int iParam1)
{
	if (does_particle_fx_looped_exist(*uParam0))
	{
		stop_particle_fx_looped(*uParam0, false);
		remove_named_ptfx_asset(-458373790);
		func_251(&(uParam0->f_1), 4);
	}
}

struct<8> func_69(var uParam0, int iParam1)
{
	return func_252(uParam0, -2061423469, "", 622194862, iParam1, 0, 0, 0, 0);
}

void func_70()
{
	iVar1 = func_73(&(Local_4089.f_3355));
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_253(iVar0, 0);
		iVar0++;
	}
}

void func_71(int iParam0)
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

void func_72(var uParam0, int iParam1)
{
	if (func_254(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

int func_73(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = -93768076;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

void func_74(bool bParam0)
{
	iVar1 = func_256(&(Local_4089.f_3355));
	if (bParam0)
	{
		if (func_28(65))
		{
			return;
		}
	}
	else if (!func_28(65))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (bParam0)
		{
			if (is_bit_set(Local_4089.f_4098, iVar0))
			{
			}
			else
			{
				Jump @107; //curOff = 85
				if (!is_bit_set(Local_4089.f_4098, iVar0))
				{
				}
				else
				{
					Var2 = { func_257(&(Local_4089.f_3355), iVar0) };
					if (!is_string_null_or_empty(&Var2))
					{
						if (bParam0)
						{
							if (func_258(&(Local_4089.f_3355), iVar0))
							{
								func_259(&vVar10, &fVar13);
								if (!func_67(vVar10))
								{
									_0x3743ce6948194349(&Var2, vVar10, fVar13);
								}
							else
							{
								}
								else
								{
									Jump @234; //curOff = 192
									vVar10 = { func_260(&(Local_4089.f_3355), iVar0) };
									if (!func_67(vVar10))
									{
										_0x3743ce6948194349(&Var2, vVar10, 0f);
									}
									if (func_261(&(Local_4089.f_3355), iVar0))
									{
										set_ambient_zone_state(&Var2, bParam0, true);
									}
									else
									{
										set_ambient_zone_list_state(&Var2, bParam0, true);
									}
									if (bParam0)
									{
										set_bit(&(Local_4089.f_4098), iVar0);
									}
									else
									{
										clear_bit(&(Local_4089.f_4098), iVar0);
									}
									if (bParam0)
									{
										if (iVar1 == func_262(Local_4089.f_4098))
										{
											func_236(65, 1, 0);
										}
									}
									else if (func_262(Local_4089.f_4098) == 0)
									{
										func_79(65, 1, 0);
									}
								}
								iVar0++;
							}
						}
					}
				}
			}
		}
	}
}

void func_75(bool bParam0)
{
	iVar1 = func_263(&(Local_4089.f_3355));
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar6 = func_264(&(Local_4089.f_3355), iVar0);
		if (iVar6 == 0)
		{
		}
		else
		{
			vVar2 = { func_265(&(Local_4089.f_3355), iVar0) };
			if (func_67(vVar2))
			{
			}
			else
			{
				fVar5 = func_266(&(Local_4089.f_3355), iVar0);
				if (bParam0)
				{
					create_model_hide(vVar2, fVar5, iVar6, false);
				}
				else
				{
					remove_model_hide(vVar2, fVar5, iVar6, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_76()
{
	if (Local_4089.f_4130 != 255)
	{
		_0x8f2a81c09da9124a(player_id());
		Local_4089.f_4130 = 255;
	}
}

void func_77(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		task_look_at_entity(Global_34, iParam0, -1, 0, 51, 0);
		network_set_local_player_sync_look_at(true);
		func_236(44, 1, 0);
	}
	else if (func_28(44))
	{
		func_267(Global_34);
		network_set_local_player_sync_look_at(false);
		func_79(44, 1, 0);
	}
}

struct<16> func_78(var uParam0)
{
	return func_268(uParam0, 701027391, "", -801742902, 0, 0, 0, 0, 0);
}

void func_79(int iParam0, int iParam1, int iParam2)
{
	if (func_28(iParam0))
	{
		func_269(&(Local_4089.f_4022), iParam0, 6);
	}
}

bool func_80(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_81(bool bParam0)
{
	if (bParam0)
	{
		func_270(0, 6);
	}
	else
	{
		func_271(0, 6, 0);
	}
}

void func_82()
{
	if (_0xdd0b7c5ae58f721d(&(Local_4089.f_2968.f_7)))
	{
		_0x798be43c9393632b(&(Local_4089.f_2968.f_7));
	}
}

void func_83(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1146212->f_47689.f_44[iVar0]->f_1 == iParam0)
		{
			func_272(&(Global_1146212->f_47689.f_44[iVar0]), bParam1);
		}
		iVar0++;
	}
}

int func_84()
{
	return (*Global_1134390)[&Global_1296859]->f_38.f_25;
}

void func_85()
{
	if ((*Global_1134390)[&Global_1296859]->f_38.f_25 != -1)
	{
		(*Global_1134390)[&Global_1296859]->f_38.f_25 = -1;
	}
}

void func_86()
{
	if (!func_28(66))
	{
		return;
	}
	network_clear_clock_time_override();
	_0xce7690c0a0d1c36d(0);
	func_79(66, 1, 0);
}

void func_87(bool bParam0)
{
	if (bParam0)
	{
		func_273(4);
	}
	else
	{
		func_274(4);
	}
}

int func_88()
{
	return Global_1572887->f_13;
}

bool func_89()
{
	return Global_1051252->f_8;
}

struct<14> func_90(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_91(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_275(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_92(var uParam0)
{
	func_276(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_277() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_93(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
{
	if (iParam3 == -1)
	{
		return false;
	}
	func_92(uParam4);
	switch (iParam3)
	{
		case 0:
		case 1:
			if (!func_278(iParam0, iParam1, iParam2, uParam4, bParam5))
			{
				return false;
			}
			break;
		case 2:
			if (!func_279(iParam0, iParam1, iParam2, uParam4, bParam5))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_94(int iParam0)
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

bool func_95(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	return (iVar0 == -1772561076 || iVar0 == -2044900246);
}

void func_96(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_97(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_280(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_281(iParam0))
	{
		return false;
	}
	if (func_282(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_283(iParam0, 1)) || func_284(32768))
	{
		if (!func_283(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_285())
	{
		return false;
	}
	return true;
}

void func_98(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

int func_99(int iParam0)
{
	if (func_286(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_100(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (_0x8f4f050054005c27(&(Global_1146212->f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212->f_2165 >= 21)
	{
		return false;
	}
	Global_1146212->f_2143[Global_1146212->f_2165] = iParam0;
	Global_1146212->f_2165++;
	return true;
}

int func_101(int iParam0)
{
	if (func_269(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 1543468593:
			return -1084890102;
		case 668358831:
			return -1857550353;
		default:
			break;
	}
	return -2006026692;
}

int func_103(int iParam0, int iParam1)
{
	if (!func_287(iParam1))
	{
		return 0;
	}
	if (!func_288(iParam1))
	{
		return 0;
	}
	if (!func_289(iParam0))
	{
		return 0;
	}
	if (!func_290(iParam0))
	{
		return 0;
	}
	if (!func_291(iParam0))
	{
		func_292(iParam0);
	}
	iVar0 = get_id_of_this_thread();
	if (!func_293(iParam0, iVar0))
	{
		return 0;
	}
	if (func_294(iParam0, iParam1))
	{
		func_295(iParam0, iVar0);
		return 1;
	}
	return 0;
}

bool func_104(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = participant_id_to_int();
	}
	return func_80(Local_920[iParam1]->f_92, iParam0);
}

void func_105(int iParam0, int iParam1)
{
	func_296(iParam0, iParam1);
}

bool func_106(struct<2> Param0)
{
	if (!func_297(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_298(Param0))
	{
		return false;
	}
	return true;
}

bool func_107(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_108(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_109(int iParam0, int iParam1)
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

bool func_110()
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
	if (!func_106(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_111(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 32))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	Var32.f_3 = 255;
	Var32.f_4 = -1;
	Var32.f_5 = 623901053;
	if (!func_299(Var0.f_1, &Var32))
	{
		return;
	}
	if (Var32 == 1 || ((Var32 == 3 && does_entity_exist(_0xffec4b0a1a3ed515(Var32.f_1, -1))) && is_ped_a_player(_0xffec4b0a1a3ed515(Var32.f_1, -1))))
	{
		bVar38 = true;
	}
	if (Var32 == 3)
	{
		iVar39 = _get_rider_of_mount(get_ped_index_from_entity_index(Var0.f_1), false);
		if (does_entity_exist(iVar39) && is_ped_a_player(iVar39))
		{
			Var32.f_3 = network_get_player_index_from_ped(iVar39);
		}
	}
	if (bVar38 && ((Var32.f_3 == 255 || !network_is_player_active(Var32.f_3)) || !network_is_player_a_participant(Var32.f_3)))
	{
		iVar40 = func_300(Var0, 0);
		if (is_entity_a_ped(Var0) && iVar40 != -1)
		{
			func_301(32, iVar40);
			if (network_is_host_of_this_script())
			{
				func_302(-1);
			}
		}
		return;
	}
	if (is_entity_a_ped(Var0))
	{
		func_303(&Var0, &Var32, bVar38);
	}
	else if (is_entity_an_object(Var0))
	{
		func_304(&Var0, &Var32, bVar38);
	}
	else if (is_entity_a_vehicle(Var0))
	{
		func_305(&Var0, &Var32, bVar38);
	}
}

void func_112(int iParam0)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (!get_event_data(1, iParam0, &Var0, 3))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	Var3.f_3 = 255;
	Var3.f_4 = -1;
	Var3.f_5 = 623901053;
	if (!func_299(Var0.f_1, &Var3))
	{
		if (Var3.f_3 == 255)
		{
			iVar9 = func_306(Var0, -1);
			iVar10 = func_306(Var0, 0);
			if (does_entity_exist(iVar9) && is_ped_a_player(iVar9))
			{
				Var3.f_3 = network_get_player_index_from_ped(iVar9);
			}
			else if (does_entity_exist(iVar10) && is_ped_a_player(iVar10))
			{
				Var3.f_3 = network_get_player_index_from_ped(iVar10);
			}
		}
	}
	else if ((Var3 == 4 && Var3.f_3 == 255) && does_entity_exist(Var0.f_1))
	{
		iVar11 = func_306(get_vehicle_index_from_entity_index(Var0.f_1), -1);
		if (get_vehicle_model_number_of_seats(get_entity_model(Var0.f_1)) > 1)
		{
			iVar12 = func_306(get_vehicle_index_from_entity_index(Var0.f_1), 0);
		}
		if (does_entity_exist(iVar11) && is_ped_a_player(iVar11))
		{
			Var3.f_3 = network_get_player_index_from_ped(iVar11);
		}
		else if (does_entity_exist(iVar12) && is_ped_a_player(iVar12))
		{
			Var3.f_3 = network_get_player_index_from_ped(iVar12);
		}
	}
	if (!network_is_player_active(Var3.f_3) || !network_is_player_a_participant(Var3.f_3))
	{
		return;
	}
	iVar14 = -1;
	if (func_307(network_get_participant_index(Var3.f_3)) != -1029285341)
	{
		return;
	}
	iVar13 = 0;
	while (iVar13 <= 5)
	{
		if (Local_13.f_82[iVar13]->f_1 == -584819812)
		{
			iVar15 = func_308(iVar13);
			if (does_entity_exist(iVar15))
			{
				if (get_vehicle_index_from_entity_index(iVar15) == Var0)
				{
					iVar14 = iVar13;
				}
				else
				{
					Jump @627; //curOff = 438
					if ((((Local_13.f_82[iVar13]->f_1 == -1918493640 && func_309(Local_13.f_82[iVar13]->f_5, 0)) && Local_4089.f_1087[Local_13.f_82[iVar13]->f_5]->f_1 == 1321175366) && Local_4089.f_1087[Local_13.f_82[iVar13]->f_5]->f_27 == -584819812) && Local_4089.f_1087[Local_13.f_82[iVar13]->f_5]->f_28 != -1)
					{
						iVar15 = func_310(-584819812, Local_4089.f_1087[Local_13.f_82[iVar13]->f_5]->f_28);
						if (does_entity_exist(iVar15))
						{
							if (get_vehicle_index_from_entity_index(iVar15) == Var0)
							{
								iVar14 = iVar13;
							}
							else
							{
								iVar13++;
							}
							if (!func_311(iVar14))
							{
								return;
							}
							func_312(iVar14, Var3.f_3, 0);
						}
					}
				}
			}
		}
	}
}

void func_113(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 7))
	{
		return;
	}
	if (!func_313(&Var0))
	{
		return;
	}
	if (Var0.f_5 == Local_4089.f_3897.f_57)
	{
		Local_4089.f_3897.f_57 = 0;
	}
	else if (Var0.f_4 != 0 && Var0.f_5 == 0)
	{
		Local_4089.f_3897.f_57 = 0;
	}
	else
	{
		Local_4089.f_3897.f_57 = (Local_4089.f_3897.f_57 - Var0.f_5);
	}
	func_314(&Var0);
}

void func_114(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 12))
	{
		return;
	}
	if (!func_313(&Var0))
	{
		return;
	}
	if (Var0.f_4 == -1)
	{
		func_314(&Var0);
		return;
	}
	switch (Local_4089.f_3393)
	{
		case -260420884:
		case 850213441:
		case 1884341302:
		case 1918154385:
			iVar12 = func_315(&Var0, -657484822);
			Local_4089.f_3897.f_58 = (Local_4089.f_3897.f_58 + iVar12);
			iVar12 = func_315(&Var0, 770694722);
			Local_4089.f_3897.f_59 = (Local_4089.f_3897.f_59 + iVar12);
			if (iVar12 > 0)
			{
				Local_4089.f_3897.f_57 = (Local_4089.f_3897.f_57 + (iVar12 / 100));
			}
			iVar12 = func_315(&Var0, 914410532);
			Local_4089.f_3897.f_60 = (Local_4089.f_3897.f_60 + iVar12);
			iVar12 = func_315(&Var0, -735397297);
			Local_4089.f_3897.f_61 = (Local_4089.f_3897.f_61 + iVar12);
			iVar12 = Var0.f_8;
			if (iVar12 > 0)
			{
				func_317(func_316(-1869856272), iVar12);
			}
			break;
		case -1777724963:
		case 1427578635:
			iVar12 = Var0.f_8;
			if (iVar12 > 0)
			{
				func_317(func_316(1091355431), iVar12);
			}
			iVar12 = func_315(&Var0, -390042476);
			Local_4089.f_3897.f_58 = (Local_4089.f_3897.f_58 + iVar12);
			break;
		case -1784925006:
		case -669677371:
		case -232478158:
		case 78055447:
		case 974227447:
		case 1532822440:
			iVar12 = func_315(&Var0, -2024553896);
			Local_4089.f_3897.f_58 = (Local_4089.f_3897.f_58 + iVar12);
			iVar12 = func_315(&Var0, 831658232);
			Local_4089.f_3897.f_59 = (Local_4089.f_3897.f_59 + iVar12);
			switch (func_319(831658232, func_318(1), -833319691, 1, 0, 0))
			{
				case 1:
					Local_4089.f_3897.f_57 = func_320(827714260, 600942249, 1, 0, 1, 0);
					break;
				case 2:
					Local_4089.f_3897.f_57 = func_320(827714260, 747826962, 1, 0, 1, 0);
					break;
				case 3:
					Local_4089.f_3897.f_57 = func_320(827714260, 502256076, 1, 0, 1, 0);
					break;
				case 4:
					Local_4089.f_3897.f_57 = func_320(827714260, -834227589, 1, 0, 1, 0);
					break;
			}
			iVar12 = Var0.f_8;
			if (iVar12 > 0)
			{
				func_317(func_316(-112439854), iVar12);
			}
			break;
		case -1086711901:
		case -697789102:
		case 195932838:
			iVar12 = func_315(&Var0, -399749454);
			Local_4089.f_3897.f_58 = (Local_4089.f_3897.f_58 + iVar12);
			break;
	}
	func_314(&Var0);
}

void func_115(int iParam0)
{
	if (!get_event_data(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 176:
			func_321(iParam0);
			break;
		case 177:
			func_322(iParam0);
			break;
		case 178:
			func_323(iParam0);
			break;
		case 179:
			func_324(iParam0);
			break;
		case 194:
			func_325(iParam0);
			break;
	}
}

bool func_116()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if ((Local_4089.f_1983[iVar0]->f_1 == -1767305912 || Local_4089.f_1983[iVar0]->f_1 == -1229553512) && &Local_409.f_478[iVar0] == 6)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_117(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 9))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (!is_entity_a_ped(Var0.f_1))
	{
		return;
	}
	if (is_entity_an_object(Var0) && get_ped_index_from_entity_index(Var0.f_1) == Global_34)
	{
		func_326(12, 1, Var0.f_6);
	}
}

void func_118(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 6))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!is_entity_a_ped(Var0))
	{
		return;
	}
	if (get_ped_index_from_entity_index(Var0) == Global_34)
	{
		func_326(10, 1, Var0.f_3);
	}
	else
	{
		func_327(Var0);
	}
}

void func_119(int iParam0)
{
	if (get_event_data(0, iParam0, &Var0, 10))
	{
		if (Var0.f_5 == 1)
		{
			iVar10 = 0;
			while (iVar10 <= 8)
			{
				if ((Local_4089.f_1087[iVar10]->f_1 == -1703696123 && network_does_network_id_exist(Local_409.f_317[iVar10]->f_5)) && Var0.f_1 == Local_4089.f_1087[iVar10]->f_11)
				{
					func_328(64, iVar10);
					return;
				}
				iVar10++;
			}
		}
	}
}

bool func_120(int iParam0)
{
	return func_80(Local_13.f_348, iParam0);
}

bool func_121(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_80(Local_4089.f_3978, iParam0);
	}
	switch (iParam1)
	{
		case 0:
			return func_80(Local_4089.f_3976, iParam0);
		case 1:
			return func_80(Local_4089.f_3977, iParam0);
		default:
			break;
	}
	return func_80(Local_4089.f_3975, iParam0);
}

void func_122(int iParam0, bool bParam1)
{
	if (Local_13 != iParam0)
	{
		if (iParam0 == 5 && bParam1)
		{
		}
		Local_13 = iParam0;
		Local_409 = iParam0;
		if (bParam1 && iParam0 == 5)
		{
			func_329(8, 1);
			if (func_330(Local_4089.f_3393, 0) && !func_331(Local_4089.f_3391, 524288))
			{
				func_332((*Global_1237665)[Local_4089.f_3391]->f_13, (*Global_1248240)[Local_4089.f_3391]->f_584, func_29(Local_4089.f_3391, 67108864));
			}
		}
	}
}

bool func_123(int iParam0)
{
	if (iVar4086 >= 4)
	{
		return func_80(Local_4089.f_3974, iParam0);
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && !func_80(Local_920[iVar0]->f_92, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_124()
{
	if (func_104(1, 255))
	{
		if (!func_333())
		{
			return;
		}
		func_334();
		func_335();
		func_336(Local_4089.f_3391, (*Global_1248240)[Local_4089.f_3391]->f_591);
		func_122(1, 0);
	}
}

void func_125()
{
	if (func_337(&bVar0))
	{
		if (bVar0)
		{
			func_122(5, 1);
		}
		else
		{
			func_122(2, 0);
		}
	}
}

void func_126()
{
	if (func_28(4))
	{
		if (!func_338(&bVar0) || !func_339(&bVar0))
		{
			if (bVar0)
			{
				func_122(5, 1);
			}
			return;
		}
		if ((((!func_340() || !func_341()) || !func_342()) || !func_343()) || ((Local_4089.f_3393 == 1539023636 || Local_4089.f_3393 == -1261475678) && !func_344()))
		{
			func_122(5, 1);
			return;
		}
		func_345();
		func_346();
		func_347();
		func_122(3, 0);
	}
}

void func_127()
{
	if (func_104(2, 255))
	{
		func_348();
		func_122(4, 0);
	}
}

void func_128()
{
	func_349();
	func_350();
	func_351();
	func_352();
	func_353();
	func_354();
	func_355();
	func_356();
	func_357();
	func_358();
	func_359();
	func_360();
	func_361();
	switch (Local_13.f_1)
	{
		case 0:
			func_362();
			break;
		case 1:
			func_363();
			break;
		case 2:
			func_364();
			break;
		case 3:
			func_365();
			break;
		case 4:
			func_366();
			break;
		case 6:
			func_367();
			break;
	}
}

void func_129(int iParam0)
{
	if (iVar4086 != iParam0)
	{
		if (Local_13 == 5)
		{
			func_368(Local_4089.f_3391, 8388608);
		}
		Local_4089 = iParam0;
	}
}

void func_130()
{
	iVar0 = Local_13.f_351 + 1;
	if (iVar0 > get_num_reserved_mission_peds(0))
	{
		reserve_network_mission_peds(iVar0);
	}
}

void func_131()
{
	if (Local_13.f_352 > get_num_reserved_mission_objects(0))
	{
		reserve_network_mission_objects(Local_13.f_352);
	}
}

void func_132()
{
	if (Local_13.f_353 > get_num_reserved_mission_vehicles(0))
	{
		reserve_network_mission_vehicles(Local_13.f_353);
	}
}

void func_133()
{
	if (!func_369(0))
	{
		return;
	}
	if (!network_is_player_active(player_id()))
	{
		return;
	}
	if (func_370(255, 1, 1, 0, 0) != -1)
	{
		return;
	}
	if (func_371(player_id(), &uVar0))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (_0x72b2e00c9bac6789(&uVar0, iVar1))
			{
				_0x5a91bcef74944e93(int_to_playerindex(iVar1), 30f);
			}
			iVar1++;
		}
	}
}

void func_134()
{
	iVar0 = participant_id_to_int();
	if (!func_372(iVar0))
	{
		return;
	}
	iVar1 = player_id();
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	bVar2 = false;
	if (func_373(1, iVar1))
	{
		bVar2 = true;
	}
	if (bVar2 != func_148(32768, iVar0))
	{
		if (bVar2)
		{
			func_374(32768);
		}
		else
		{
			func_375(32768);
		}
	}
}

void func_135()
{
	if (!func_104(1, 255))
	{
		if (func_376())
		{
			func_20(1, 1, 0);
		}
	}
	else if (Local_13 > 0)
	{
		func_377();
		func_378();
		func_129(1);
	}
}

void func_136()
{
	if (Local_13 > 1 && iVar407 > 1)
	{
		if (func_37(&(Local_4089.f_3355)))
		{
			_0x28508173c6a7cc18(0);
		}
		func_129(2);
	}
}

void func_137()
{
	if ((*Global_1237665)[Local_4089.f_3391]->f_2 < 2 || (*Global_1237665)[Local_4089.f_3391]->f_2 >= 3)
	{
		return;
	}
	if (!func_28(4))
	{
		if (Local_4089.f_3355.f_11 > 0)
		{
			func_236(82, 1, 0);
		}
		func_379();
		func_380();
		func_381();
		func_382();
		func_75(1);
		func_383();
		func_384();
		func_385();
		if (func_386())
		{
			func_387();
		}
		func_236(4, 1, 0);
	}
	else if (Local_13 > 2 && iVar407 > 2)
	{
		func_388();
		func_129(3);
	}
}

void func_138()
{
	if (!func_104(2, 255))
	{
		if (!func_389())
		{
			return;
		}
		if (!func_390())
		{
			return;
		}
		if (!func_391())
		{
			return;
		}
		func_392(Local_13.f_369);
		func_393();
		func_394();
		func_395();
		func_396();
		func_397();
		func_398();
		func_399();
		func_20(2, 1, 0);
	}
	else if (Local_13 > 3 && iVar407 > 3)
	{
		func_129(Local_13);
	}
}

void func_139()
{
	if (Local_4089.f_1 != Local_13.f_1 && Local_4089.f_1 != 6)
	{
		if (Local_13.f_1 > 0)
		{
			func_368(Local_4089.f_3391, 4096);
		}
		iVar0 = Local_4089.f_1;
		if (Local_13.f_1 != 6 && func_400(Local_13.f_1))
		{
			switch (iVar0)
			{
				case 0:
					func_401();
					break;
			}
		}
	}
	func_402();
	func_403();
	func_404();
	func_405();
	func_406();
	func_407();
	func_408();
	func_409(&bVar1);
	func_410();
	func_411();
	func_412();
	func_413();
	func_414();
	func_415();
	func_416();
	func_417();
	func_418();
	func_419();
	func_420();
	func_421();
	func_422();
	func_423();
	func_424();
	func_425();
	func_426();
	func_427();
	func_428();
	func_429();
	func_430();
	func_431();
	func_432();
	func_433();
	func_434();
	func_435();
	func_436();
	if (func_28(126) || func_437(Local_4089.f_3391))
	{
		func_438();
		func_439();
		func_440();
		func_203(1);
		if ((Local_4089.f_3393 == 1427578635 && Local_4089.f_1 > 0) && Local_4089.f_1 < 6)
		{
			func_441(250);
		}
	}
	else if (Local_4089.f_3393 == -1261475678)
	{
		if (!func_53(Local_4089.f_3391, 16, 255) && func_120(16))
		{
			func_368(Local_4089.f_3391, 16);
		}
	}
	if (!func_28(141))
	{
		func_442();
	}
	func_443();
	func_444(bVar1);
	func_445();
	func_446();
	switch (Local_4089.f_1)
	{
		case 2:
			func_447();
			break;
		case 6:
			func_448();
			break;
	}
}

bool func_140(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 4);
}

bool func_141(int iParam0, int iParam1)
{
	return (func_140(iParam0) && (&Global_1248240->f_8880[iParam0] == -1 || &Global_1248240->f_8880[iParam0] == iParam1));
}

void func_142(int iParam0, int iParam1)
{
	if (!func_143(iParam0))
	{
		return;
	}
	if (func_53(iParam0, iParam1, 255))
	{
		func_144(&((*(*Global_1238240)[network_player_id_to_int()])[iParam0]->f_19), iParam1);
	}
}

bool func_143(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

void func_144(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_145(int iParam0, int iParam1, int iParam2)
{
	return is_bit_set(iParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(iParam0[iVar0], iVar1);
}

bool func_146(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_147()
{
	iVar0 = Local_4089.f_2.f_1;
	iVar1 = Local_4089.f_2.f_2;
	if ((func_449(Local_4089.f_3393) && func_28(19)) && !func_331(Local_4089.f_3391, 16))
	{
		return 24;
	}
	switch (iVar0)
	{
		case 1:
		case 2:
		case 15:
		case 16:
			iVar2 = func_450();
			if (func_148(2, -1))
			{
				return 0;
			}
			else if (Local_13.f_357 == 0)
			{
				if (iVar0 == 1)
				{
					return 22;
				}
				else
				{
					return 0;
				}
			}
			else if (func_218(&(Local_4089.f_3355), 473631220, 0, -801742902, 0, 0, 0, 0, 0) && iVar0 == 1)
			{
				return 22;
			}
			else if (iVar2 != -1)
			{
				if (iVar2 == iVar1)
				{
					if (Local_4089.f_3393 == 1427578635)
					{
						if (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id()
						{
							return 0;
						}
						else if (_0x9be7dcb22d32ccbe(_0x901e0dc25080c8b9((*Global_1237665)[Local_4089.f_3391]->f_16), player_id()))
						{
							return 6;
						}
						else if (func_451(65536, 1))
						{
							return 7;
						}
						else
						{
							return 8;
						}
					}
					else if (func_28(172))
					{
						if (Local_4089.f_4122 > 1)
						{
							if (Local_4089.f_4121 != Local_4089.f_4122)
							{
								return 12;
							}
							else if (func_148(4096, -1))
							{
								return 13;
							}
							else
							{
								return 11;
							}
						}
						else if (func_148(4096, -1))
						{
							return 3;
						}
						else if (Local_4089.f_4120 > 0)
						{
							return 9;
						}
						else
						{
							return 10;
						}
					}
					else if (Local_4089.f_4122 > 1)
					{
						if (Local_4089.f_4121 != Local_4089.f_4122)
						{
							return 2;
						}
						else if (func_148(4096, -1))
						{
							return 4;
						}
						else
						{
							return 1;
						}
					}
					else if (func_28(94) && func_452() > 0)
					{
						return 5;
					}
					else if (func_148(4096, -1))
					{
						return 3;
					}
					else if (Local_4089.f_3393 == 195932838)
					{
						if (func_453(65536, 0))
						{
							return 0;
						}
						else if (!func_453(512, 0))
						{
							return 2;
						}
					}
					else
					{
						return 0;
					}
				}
				else if (Local_4089.f_4122 > 1)
				{
					return 15;
				}
				else if (Local_4089.f_3393 == 1427578635)
				{
					if (func_451(65536, 1))
					{
						return 19;
					}
					else
					{
						return 20;
					}
				}
				else
				{
					return 14;
				}
			}
			else if (Local_4089.f_3393 == 1427578635)
			{
				if (Local_4089.f_4121 == 0)
				{
					if (func_454(4, 255) || (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id())
					{
						return 17;
					}
					else if (func_451(-2147483648, 1))
					{
						return 19;
					}
					else
					{
						return 20;
					}
				}
			}
			break;
		case 14:
			return 21;
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 13:
			return 23;
	}
	return 22;
}

bool func_148(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = participant_id_to_int();
	}
	if (!func_372(iParam1))
	{
		return false;
	}
	return func_80(Local_920[iParam1]->f_91, iParam0);
}

void func_149(int iParam0)
{
	if (Local_4089.f_2 != iParam0)
	{
		Local_4089.f_2 = iParam0;
	}
}

void func_150()
{
	iVar20 = Local_4089.f_2.f_2;
	Var0 = func_455((*Global_1248240)[Local_4089.f_3391]->f_584);
	Var0.f_1 = func_30();
	Var0.f_2 = func_456(Local_4089.f_3391);
	Var0.f_3 = Local_4089.f_3897.f_58;
	Var0.f_8 = Local_4089.f_3897.f_59;
	Var0.f_6 = Local_4089.f_3897.f_60;
	Var0.f_7 = Local_4089.f_3897.f_61;
	Var0.f_4 = func_457(Local_4089.f_3391);
	Var0.f_5 = func_458(Local_4089.f_3391);
	Var0.f_10 = func_459(Local_4089.f_3391);
	Var0.f_11 = iVar20 == 1;
	_0x80a02d9f948a8bca(&(Local_4089.f_3897.f_53), &uVar16);
	_0x476038b5a0734c10(&Var0, &uVar16);
}

void func_151()
{
	Var0 = func_455((*Global_1248240)[Local_4089.f_3391]->f_584);
	Var0.f_1 = func_30();
	Var0.f_3 = Local_4089.f_3897.f_58;
	Var0.f_8 = Local_4089.f_3897.f_59;
	Var0.f_6 = Local_4089.f_3897.f_60;
	Var0.f_7 = Local_4089.f_3897.f_61;
	Var0.f_12 = 1;
	_0x80a02d9f948a8bca(&(Local_4089.f_3897.f_53), &uVar16);
	_0x476038b5a0734c10(&Var0, &uVar16);
}

void func_152()
{
	Var0 = func_455((*Global_1248240)[Local_4089.f_3391]->f_584);
	Var0.f_1 = func_30();
	Var0.f_3 = Local_4089.f_3897.f_58;
	Var0.f_8 = Local_4089.f_3897.f_59;
	Var0.f_6 = Local_4089.f_3897.f_60;
	Var0.f_7 = Local_4089.f_3897.f_61;
	Var0.f_14 = 1;
	Var0.f_15 = func_28(57);
	Var0.f_9 = func_460();
	_0x80a02d9f948a8bca(&(Local_4089.f_3897.f_53), &uVar16);
	_0x476038b5a0734c10(&Var0, &uVar16);
}

void func_153()
{
	iVar0 = Local_4089.f_2.f_2;
	bVar1 = ((Local_4089.f_3393 == 1427578635 && iVar0 == 0) && &Local_4089.f_3008[1] != 493038497);
	bVar2 = (((Local_4089.f_3393 == 1427578635 && iVar0 == 1) && &Local_4089.f_3008[1] != 493038497) || (Local_4089.f_3393 == -1777724963 && iVar0 == 0));
	if (bVar2)
	{
		Var3.f_7 = func_461(Local_4089.f_3393);
		Var3.f_6 = func_462();
		Var3.f_21 = func_463();
		Var3.f_22 = func_451(-2147483648, 1);
		Var3.f_18 = Local_4089.f_2968.f_3;
		Var3.f_9 = func_464((*Global_1248240)[Local_4089.f_3391]->f_584);
		Var3.f_15 = Local_4089.f_3897.f_58;
		Var3.f_19 = (Local_4089.f_3393 == 1427578635 && iVar0 == 1);
		Var3.f_8 = func_34(Local_4089.f_3392);
		Var3.f_12 = func_465(iVar0);
		if ((*Global_1237665)[Local_4089.f_3391]->f_7 != -1)
		{
			Var3.f_10 = func_466((*Global_1237665)[Local_4089.f_3391]->f_7);
		}
		Var3.f_17 = func_467(255);
		Var3.f_14 = func_468();
		Var3.f_16 = func_469();
		Var3.f_11 = func_470();
		Var3.f_4 = Local_4089.f_4128;
		Var3.f_5 = func_471();
		Var3.f_13 = func_472();
		Var3.f_20 = (func_473(1073741824, 255) || func_451(1073741824, 0));
		if (Local_4089.f_4127 != -1)
		{
			Var3 = { func_474(Local_4089.f_4127) };
		}
		_0xab43d1c80b5e9500(&Var3);
	}
	else if (bVar1)
	{
		Var26.f_4 = func_475();
		Var26.f_10 = func_476();
		Var26.f_5 = func_464((*Global_1248240)[Local_4089.f_3391]->f_584);
		Var26.f_13 = func_477();
		Var26.f_12 = (!Var26.f_13 && Local_13.f_82[0]->f_2 == 1);
		iVar41 = func_479(func_478(2072822050));
		if (iVar41 != 0)
		{
			Var26.f_8 = ((Global_1296859->f_21 - iVar41) - (Var26.f_10 / 1000));
		}
		else
		{
			Var26.f_8 = 0;
		}
		Var42 = { func_478(2072822050) };
		stat_id_set_int(&Var42, Global_1296859->f_21, true);
		Var26.f_9 = Local_4089.f_4125;
		Var26.f_7 = func_465(iVar0);
		Var26.f_11 = func_468();
		Var26.f_14 = func_451(-2147483648, 1);
		Var26.f_6 = func_472();
		if (Local_4089.f_4127 != -1)
		{
			Var26 = { func_474(Local_4089.f_4127) };
		}
		_telemetry_bounty_target(&Var26);
	}
}

void func_154()
{
	if (&Local_4089.f_3008[1] == 493038497)
	{
		return;
	}
	func_153();
}

void func_155()
{
	iVar12 = Local_4089.f_2.f_2;
	Var0 = func_455((*Global_1248240)[Local_4089.f_3391]->f_584);
	Var0.f_1 = func_30();
	Var0.f_2 = 0;
	Var0.f_3 = Local_4089.f_3897.f_58;
	Var0.f_4 = (*Global_1248240)[Local_4089.f_3391]->f_643[0]->f_5;
	Var0.f_5 = func_480();
	Var0.f_6 = func_452();
	Var0.f_7 = iVar12 == 1;
	_0x80a02d9f948a8bca(&(Local_4089.f_3897.f_53), &uVar8);
	_0x99d40c5d74bc88e9(&Var0, &uVar8);
}

void func_156()
{
	_0x80a02d9f948a8bca(&(Local_4089.f_3897.f_53), &uVar11);
	if (!func_481(&uVar11))
	{
	}
	else
	{
		Var0 = _0xac9ff854bd4ba9b5(&uVar11);
	}
	if ((*Global_1237665)[Local_4089.f_3391]->f_7 != -1)
	{
		Var0.f_5 = func_466((*Global_1237665)[Local_4089.f_3391]->f_7);
	}
	Var0.f_1 = Local_13.f_354;
	Var0.f_1.f_1 = get_hash_key(get_player_name(_0x4be6c13a45cca8ec((*Global_1237665)[Local_4089.f_3391]->f_13)));
	Var0.f_3 = func_455((*Global_1248240)[Local_4089.f_3391]->f_584);
	Var0.f_4 = func_30();
	Var0.f_6 = func_34(Local_4089.f_3392);
	Var0.f_7 = Local_4089.f_3897.f_58;
	Var0.f_8 = func_482(18);
	Var0.f_9 = func_483();
	Var0.f_10 = Local_4089.f_2968.f_3;
	_0x6fb9ea308f302922(&uVar11, &(Var0.f_1), Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, Var0.f_8, Var0.f_9, Var0.f_10);
}

bool func_157(bool bParam0)
{
	return func_485(func_484(bParam0));
}

bool func_158(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = network_player_id_to_int();
	}
	return func_80((*(*(*Global_1238240)[iParam2])[Local_4089.f_3391])[bParam1]->f_1, iParam0);
}

bool func_159(int iParam0, bool bParam1)
{
	return func_80(Local_13.f_226[bParam1]->f_4, iParam0);
}

void func_160(bool bParam0)
{
	if (!func_158(2048, bParam0, -1))
	{
		return;
	}
	_0x4b05b97ba46f419d(0);
	_0x89d803cd48622150(0);
	func_486(2, bParam0);
	if (network_is_player_in_mp_cutscene(player_id()))
	{
		network_set_in_mp_cutscene(false, false, func_487(bParam0), false);
	}
	func_488(2048, bParam0, 1);
	func_488(33554432, bParam0, 1);
}

void func_161(bool bParam0)
{
	iVar0 = func_484(bParam0);
	if (iVar0 == -470336421)
	{
		if ((!func_158(8, bParam0, -1) && func_166(player_id(), 1)) && (*Global_1237665)[Local_4089.f_3391]->f_13 == _0x901e0dc25080c8b9(player_id()))
		{
			if (is_screen_faded_out() && !is_screen_fading_in())
			{
				do_screen_fade_in(1000);
			}
			func_167(4);
			func_167(8);
		}
	}
	else if (iVar0 == 1968681380)
	{
		if (func_158(8, bParam0, -1))
		{
			iVar1 = func_489(player_id(), 1);
			if (iVar1 != 2)
			{
				remove_model_hide(func_490(iVar1, 8), 1f, func_491(iVar1, 8), 0);
				remove_model_hide(func_490(iVar1, 9), 1f, func_491(iVar1, 9), 0);
				remove_model_hide(func_490(iVar1, 7), 1f, func_491(iVar1, 7), 0);
				remove_model_hide(func_490(iVar1, 10), 1f, func_491(iVar1, 10), 0);
				remove_model_hide(func_490(iVar1, 11), 1f, func_491(iVar1, 11), 0);
				remove_model_hide(func_490(iVar1, 12), 1f, func_491(iVar1, 12), 0);
				remove_model_hide(func_490(iVar1, 13), 1f, func_491(iVar1, 13), 0);
			}
		}
	}
}

void func_162(bool bParam0)
{
	Local_4089.f_3779 = 0;
	Local_4089.f_3779.f_1 = -2;
	if (bParam0)
	{
		Local_4089.f_3779.f_2 = 0;
	}
}

void func_163(var uParam0)
{
	*uParam0 = 0;
}

void func_164()
{
	Local_920[participant_id_to_int()]->f_95 = -1;
}

void func_165(int iParam0)
{
	if (iParam0 != -1 && iParam0 == Global_1248240->f_9297)
	{
		Global_1248240->f_9297 = -1;
		Global_1248240->f_9298 = -1;
	}
}

bool func_166(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	return func_492(iParam0, iParam1);
}

void func_167(int iParam0)
{
	func_493(iParam0);
}

bool func_168()
{
	return Global_1071686->f_28662.f_65.f_42 != 0;
}

bool func_169(bool bParam0)
{
	if (((((((func_158(1048576, bParam0, -1) || func_494(Global_34, 993674639)) || func_494(Global_34, -1098463898)) || func_494(Global_34, 1647992574)) || func_494(Global_34, 713668775)) || func_494(Global_34, 1870523043)) || func_494(Global_34, -1794415470)) || func_494(Global_34, 1868526510))
	{
		return false;
	}
	return true;
}

bool func_170(int iParam0)
{
	return func_495(1, iParam0);
}

void func_171(bool bParam0)
{
	if (bParam0)
	{
		Global_1951255->f_1381 = (Global_1951255->f_1381 - Global_1951255->f_1381 & 2);
	}
	else
	{
		Global_1951255->f_1381 |= 2;
	}
	func_496(bParam0);
}

void func_172(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_28(68) || is_player_control_on(player_id()))
		{
			if (bParam1)
			{
				iVar0 = 256;
			}
			set_player_control(player_id(), false, iVar0, false);
			func_236(68, 1, 0);
		}
	}
	else if (func_28(68))
	{
		set_player_control(player_id(), true, 0, false);
		func_79(68, 1, 0);
	}
}

void func_173(bool bParam0)
{
	if (bParam0)
	{
		if (!func_28(40))
		{
			func_270(1, 1);
			func_236(40, 1, 0);
		}
	}
	else if (func_28(40))
	{
		func_271(1, 1, 0);
		func_79(40, 1, 0);
	}
}

void func_174(bool bParam0)
{
	if (!bParam0)
	{
		func_497(0);
	}
	Global_1940311->f_2 = bParam0;
}

void func_175(var uParam0, int iParam1)
{
	func_498(*uParam0, 1);
	if (iParam1 == 1)
	{
		func_499(*uParam0, 1);
		func_499(*uParam0, 2);
	}
}

void func_176(bool bParam0)
{
	func_500(bParam0);
	func_501(bParam0);
	func_502(bParam0);
	if (func_178(8388608, bParam0))
	{
		func_504(bParam0, func_503(bParam0, -1));
	}
	func_505(bParam0);
	func_506(bParam0);
	func_507(bParam0);
	if (_does_volume_exist(Local_4089.f_3779.f_25))
	{
		_delete_volume(Local_4089.f_3779.f_25);
	}
}

void func_177(bool bParam0)
{
	if (!func_178(-2147483648, bParam0))
	{
		return;
	}
	func_36();
	func_184(-2147483648, bParam0);
}

bool func_178(int iParam0, bool bParam1)
{
	return func_80((*Global_1248240)[Local_4089.f_3391]->f_19[bParam1]->f_83, iParam0);
}

void func_179(bool bParam0)
{
	if (func_178(33554432, bParam0))
	{
		_0x007ff852dcf49da4(256);
		func_184(33554432, bParam0);
	}
}

void func_180(bool bParam0)
{
	if (!func_178(2097152, bParam0))
	{
		return;
	}
	if (does_cam_exist(func_508(bParam0)))
	{
		destroy_cam(func_508(bParam0), false);
	}
	if (does_cam_exist(func_509(bParam0)))
	{
		destroy_cam(func_509(bParam0), false);
	}
	func_184(2097152, bParam0);
}

int func_181(bool bParam0)
{
	return (*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_70;
}

int func_182(int iParam0)
{
	if (iParam0 == 255)
	{
		iVar0 = network_player_id_to_int();
	}
	else
	{
		iVar0 = network_get_player_index(int_to_participantindex(iParam0));
	}
	return (*(*Global_1238240)[iVar0])[Local_4089.f_3391]->f_21;
}

void func_183(int iParam0, bool bParam1)
{
	if (func_510(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_144(&((*Global_1238240)[network_player_id_to_int()]->f_302), iParam0);
	}
}

void func_184(int iParam0, bool bParam1)
{
	if (func_178(iParam0, bParam1))
	{
		func_511(&((*Global_1248240)[Local_4089.f_3391]->f_19[bParam1]->f_83), iParam0);
	}
}

bool func_185(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_178(iParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_186(bool bParam0)
{
	Var0 = -1;
	Var0.f_5 = 16;
	Var0.f_77 = -1;
	Var0.f_82 = -1;
	*(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0] = { Var0 };
}

void func_187(bool bParam0)
{
	*(*(*(*Global_1238240)[network_player_id_to_int()])[Local_4089.f_3391])[bParam0] = { vVar0 };
}

void func_188()
{
	if (func_370(255, 1, 1, 0, 0) == -1)
	{
		func_236(126, 1, 0);
	}
	else
	{
		func_79(126, 1, 0);
	}
}

bool func_189(bool bParam0)
{
	if (((!func_512(bParam0) || !func_513(bParam0)) || !func_514(bParam0)) || !func_515(bParam0))
	{
		return false;
	}
	return true;
}

void func_190(int iParam0, bool bParam1, int iParam2)
{
	if (!func_158(iParam0, bParam1, -1))
	{
		func_105(&((*(*(*Global_1238240)[network_player_id_to_int()])[Local_4089.f_3391])[bParam1]->f_1), iParam0);
	}
}

void func_191(bool bParam0)
{
	func_516(60, !bParam0);
}

void func_192(int iParam0, bool bParam1, int iParam2)
{
	if (Local_4089.f_2890.f_31 != iParam0 && func_517(iParam0))
	{
		if (func_518(&(Local_4089.f_2890.f_3[iParam0]), iParam2, bParam1))
		{
			Local_4089.f_2890.f_31 = iParam0;
		}
	}
}

bool func_193(int iParam0)
{
	iVar0 = 6;
	if (func_195(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

void func_194()
{
	_databinding_write_data_bool(Global_1913373->f_3, false);
	iVar0 = 0;
	while (iVar0 < &Global_1913373)
	{
		_databinding_remove_data_entry(&(Global_1913373->f_5[iVar0]));
		iVar0++;
	}
	_databinding_clear_binding_array(Global_1913373->f_4);
	Global_1913373 = 0;
	Global_1913373->f_1 = 0;
}

bool func_195(int iParam0)
{
	return iParam0 != 0;
}

void func_196(int iParam0, int iParam1)
{
	if (func_519(iParam0))
	{
		func_269(&(Local_4089.f_2890.f_37), iParam0, 3);
	}
}

void func_197(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1248240->f_9294 == iParam0)
	{
		func_520(&(Global_1248240->f_9049), bParam1, bParam2);
		func_521(&(Global_1248240->f_9034), 1);
		Global_1248240->f_9294 = -1;
	}
}

void func_198(int iParam0)
{
	if (Global_1248240->f_9295 == iParam0)
	{
		func_522(&(Global_1248240->f_9288), 1, 1);
		Global_1248240->f_9295 = -1;
	}
}

void func_199(int iParam0)
{
	if ((Local_4089.f_2890.f_68 != iParam0 && Local_4089.f_2890.f_68 != -1) && iParam0 != -1)
	{
		return;
	}
	if (func_28(132))
	{
		clear_gps_flags();
		func_79(132, 1, 0);
	}
	if (func_28(130))
	{
		clear_gps_multi_route();
		func_79(130, 1, 0);
	}
	if (func_28(131))
	{
		func_523(&(Local_4089.f_3355), &Var1);
		func_524(&Var1, 0, -584819812);
		iVar0 = 0;
		while (iVar0 <= 32)
		{
			Var1 = { Var6 };
			func_525(&(Local_4089.f_3355), &Var1, Local_4089.f_2190[iVar0]->f_13);
			func_524(&Var1, 0, -584819812);
			iVar0++;
		}
	}
	Local_4089.f_2890.f_68 = -1;
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		if (!func_28(69) && !func_526(255))
		{
			if (func_527(&(Local_4089.f_3355)))
			{
				func_528(1);
			}
			func_42(1);
			func_236(69, 1, 0);
		}
	}
	else if (func_28(69))
	{
		if (func_527(&(Local_4089.f_3355)))
		{
			func_528(0);
		}
		func_42(0);
		func_79(69, 1, 0);
		func_79(72, 1, 0);
	}
}

void func_201(int iParam0)
{
	if (!func_53(iParam0, 8192, 255))
	{
		return;
	}
	func_142(iParam0, 8192);
}

bool func_202()
{
	if (Global_1248240->f_9297 != -1)
	{
		return true;
	}
	return false;
}

void func_203(bool bParam0)
{
	if (!func_529())
	{
		return;
	}
	if (bParam0)
	{
		if (!func_530(&(Local_4089.f_3286)))
		{
			Local_4089.f_3286 = func_532((*Global_1248240)[Local_4089.f_3391]->f_584, func_531(), get_id_of_this_thread(), 0, 0);
		}
	}
	else if (func_530(&(Local_4089.f_3286)))
	{
		func_533(&(Local_4089.f_3286), -1);
	}
}

void func_204(int iParam0)
{
	if (func_56(Local_4089.f_1983[iParam0]->f_16))
	{
		func_57(&(Local_4089.f_1983[iParam0]->f_16), 1, 1);
	}
}

void func_205()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_534(iVar0);
		iVar0++;
	}
}

void func_206(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Var0.f_4 = 255;
		*uParam0 = { Var0 };
	}
	else if (does_blip_exist(iParam1))
	{
		Var6.f_4 = 255;
		*uParam0 = { Var6 };
		remove_blip(&iParam1);
	}
}

void func_207(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_208(int iParam0)
{
	if (!is_mp_gamer_tag_active(&(Local_4089.f_1622[iParam0])))
	{
		return;
	}
	remove_mp_gamer_tag(Local_4089.f_1622[iParam0]);
}

void func_209(int iParam0)
{
	if (!func_535(131072, iParam0))
	{
		return;
	}
	func_536(131072, iParam0);
	func_536(65536, iParam0);
	if (func_537(Local_4089.f_2190[iParam0]->f_7) && !func_538())
	{
		func_79(29, 1, 0);
	}
	else if (func_539(Local_4089.f_2190[iParam0]->f_7))
	{
		if (!func_540())
		{
			func_79(31, 1, 0);
		}
		if (!func_541())
		{
			func_79(32, 1, 0);
		}
	}
	else if (Local_4089.f_2190[iParam0]->f_7 == -1141244111 || Local_4089.f_2190[iParam0]->f_7 == 1539711579)
	{
		if (Local_4089.f_2190.f_698 == iParam0)
		{
			Local_4089.f_2190.f_698 = -1;
		}
	}
	else if (Local_4089.f_2190[iParam0]->f_7 == 1597320317)
	{
		func_79(30, 1, 0);
	}
	if (func_542((*Global_1237665)[Local_4089.f_3391]->f_5) && func_535(33554432, iParam0))
	{
		func_543((*Global_1237665)[Local_4089.f_3391]->f_5);
		func_536(33554432, iParam0);
	}
	func_207(&(Local_4089.f_2190[iParam0]->f_3));
}

void func_210(bool bParam0)
{
	if (bParam0)
	{
		if (!func_544(&Global_1296859, 10))
		{
			func_545(10);
		}
	}
	else if (func_544(&Global_1296859, 10))
	{
		func_546(10);
	}
}

void func_211()
{
	if (func_28(163))
	{
		func_547();
		func_79(163, 1, 0);
	}
}

void func_212()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_207(Local_4089.f_3774[iVar0]);
		iVar0++;
	}
}

void func_213()
{
	if (!func_517(25))
	{
		return;
	}
	if (!func_28(61))
	{
		return;
	}
	if (func_28(62))
	{
		return;
	}
	cancel_music_event(func_548());
	func_79(61, 1, 0);
}

void func_214()
{
	iVar0 = 0;
	while (iVar0 <= (Global_1940311->f_242.f_1186 - 1))
	{
		iVar1 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_26);
		if (iVar1 == 23)
		{
			Var2 = { *Global_1940311->f_242.f_14[iVar0] };
			func_549(Var2);
			return;
		}
		iVar0++;
	}
	if (_databinding_is_data_id_valid(Local_4089.f_4146))
	{
		func_549(Local_4089.f_4146);
	}
}

void func_215(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

bool func_216(int iParam0, int iParam1)
{
	*iParam0 = Global_1257541->f_8863;
	iParam0->f_2 = 423895568;
	iParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*iParam0) && _datafile_get_data_node_index(&(iParam0->f_1), iParam0));
}

int func_217(vector3 vParam0, int iParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(cParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_218(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	return func_550(uParam0, uParam0->f_4, iParam1, iParam2, iParam3, bParam4, iParam5, iParam6, bParam7, iParam8);
}

int func_219(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = -1098240903;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

struct<8> func_220(var uParam0, int iParam1)
{
	return func_252(uParam0, -433267846, "", 1063878068, iParam1, 0, 0, 0, 0);
}

struct<8> func_221(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	return func_551(uParam0, uParam0->f_2, iParam1, sParam2, iParam3, bParam4, iParam5, iParam6, iParam7, iParam8);
}

int func_222(bool bParam0)
{
	if (!func_552(-931834499, bParam0))
	{
		return 0;
	}
	return 1;
}

void func_223(int iParam0)
{
	if (!func_29(iParam0, 134217728))
	{
		return;
	}
	iVar0 = (*Global_1237665)[iParam0]->f_5;
	if (!func_542(iVar0))
	{
		return;
	}
	func_553(iVar0);
	func_27(iParam0, 134217728);
}

void func_224(int iParam0)
{
	if ((*Global_1248240)[iParam0]->f_559 != -1777724963)
	{
		return;
	}
	if (!func_29(iParam0, 268435456))
	{
		return;
	}
	if (func_29(iParam0, 536870912))
	{
		return;
	}
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return;
	}
	func_554(607258092, 0, 0);
}

bool func_225(struct<2> Param0)
{
	iVar0 = func_555(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_226(struct<2> Param0)
{
	iVar0 = func_555(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case -1165569262:
		case -260420884:
		case 850213441:
		case 1539023636:
			return 6;
		case -468635158:
			return 5;
	}
	return 0;
}

void func_228(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_88() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_556(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_557();
		Global_1900688->f_9 = func_558(Global_1893587->f_2);
		Global_1900688->f_11 = func_559(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_560(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_560(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_560(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

void func_229(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_106(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_225(Param0) && !func_226(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_455(Param0) == 0)
	{
	}
	if ((bParam3 == 0 || bParam3 == 1) || bParam3 == 4)
	{
		if (func_555(Param0) == 3)
		{
			func_561(1, -1706799532);
		}
		else if (func_555(Param0) == 4)
		{
			func_561(0, -1706799532);
		}
	}
	if ((func_555(Param0) == 3 || func_555(Param0) == 1) || ((bParam5 && func_555(Param0) == 4) && _0x01f4d242765c6b24(func_455(Param0))))
	{
		if (bParam3 != -1)
		{
			func_562(Param0, bParam3, bParam4, 255, 0);
		}
		else
		{
			func_562(Param0, 2, bParam4, 255, 0);
		}
	}
	func_563(Param0, 0);
	if (func_107(func_564(0), Param0))
	{
		func_565(1);
		func_566(0);
		func_567(0);
		func_568(1);
	}
	func_569(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_570(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

int func_230(struct<2> Param0, var uParam2)
{
	iVar0 = func_571(Param0);
	if (func_571(Param0) < 0)
	{
		return 0;
	}
	func_572(iVar0, uParam2);
	return 1;
}

void func_231(bool bParam0)
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

void func_232(bool bParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_573(0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = func_574(bParam2);
	if (bParam2)
	{
		iVar3 = (Global_1901947->f_166.f_18 / 1000);
		bVar2 = true;
	}
	else if (bVar1)
	{
		iVar3 = (func_575(iVar0) / 1000);
	}
	else if (bParam1)
	{
		iVar3 = (func_576(iVar0) / 1000);
	}
	else
	{
		iVar3 = (func_577(iVar0) / 1000);
	}
	if (bParam0 || bParam2)
	{
		Global_1257541->f_8852.f_1 = (Global_1296859->f_21 + iVar3);
		func_578(2, 1);
	}
	else
	{
		Global_1257541->f_8852.f_1 = 0;
		func_579(2, 1);
	}
	if (bVar2 && Global_1257541->f_8852 > Global_1296859->f_21)
	{
		Global_1257541->f_8852 = (Global_1257541->f_8852 + iVar3);
	}
	else
	{
		Global_1257541->f_8852 = (Global_1296859->f_21 + iVar3);
	}
}

bool func_233(int iParam0)
{
	switch (iParam0)
	{
		case -1784925006:
		case 1884341302:
			return true;
		default:
			break;
	}
	return false;
}

void func_234(int iParam0, bool bParam1, int iParam2)
{
	Var0 = { func_478(538649369) };
	stat_id_set_int(&Var0, 0, true);
}

void func_235(int iParam0)
{
	if (func_580(iParam0))
	{
		func_581(1);
	}
	if (func_582(iParam0))
	{
		func_581(2);
	}
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	if (!func_28(iParam0))
	{
		func_286(&(Local_4089.f_4022), iParam0, 6);
	}
}

void func_237(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_260), iParam0))
		{
			_0x31010318ba9897ac(&(Global_1071686->f_21689.f_260), iParam0);
		}
	}
	else if (_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_260), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_21689.f_260), iParam0);
		func_240(iParam0);
	}
}

bool func_238(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_239(iParam0);
		return false;
	}
	if (func_583(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_584(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

void func_239(int iParam0)
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
	func_585(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_240(int iParam0)
{
	if (!func_586(iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21416.f_260), iParam0);
	}
}

void func_241(int iParam0, bool bParam1)
{
	if (!network_does_network_id_exist(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!_0x21d04d7bc538c146(net_to_ent(iParam0)))
		{
			_0xee5ae9956743ba20(net_to_ent(iParam0), 1);
		}
	}
	else if (_0x21d04d7bc538c146(net_to_ent(iParam0)))
	{
		_0xee5ae9956743ba20(net_to_ent(iParam0), 0);
	}
}

bool func_242(int iParam0)
{
	return (network_has_control_of_network_id(iParam0) || func_587(iParam0));
}

int func_243(int iParam0)
{
	return iParam0;
}

void func_244(int iParam0)
{
	if (!func_588(iParam0))
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

struct<8> func_245(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	bVar2 = func_589(iParam0, iParam1, &iVar0, &iVar1);
	if (bVar2 == -1)
	{
		return func_590("");
	}
	return func_252(&(Local_4089.f_3355), iParam2, "", iVar0, bVar2, iVar1, iParam3, iParam4, iParam5);
}

struct<8> func_246(int iParam0, int iParam1, int iParam2)
{
	return func_245(iParam0, iParam1, -433267846, -1301209143, iParam2, 0);
}

int func_247(var uParam0, int iParam1)
{
	Var0 = uParam0->f_4;
	Var0.f_2 = -1398398107;
	Var0.f_1 = func_255(uParam0, Var0, Var0.f_2);
	Var0.f_3 = iParam1;
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

int func_248(var uParam0, int iParam1, int iParam2)
{
	return func_591(uParam0, -433267846, -1, -645993013, iParam1, iParam2, 0, 0, 0, 0);
}

void func_249(int iParam0)
{
	iVar0 = func_592(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_250(int iParam0)
{
	if (func_593(iParam0) && func_594())
	{
		remove_door_from_system(iParam0);
	}
}

void func_251(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<8> func_252(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	return func_551(uParam0, uParam0->f_4, iParam1, sParam2, iParam3, bParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_253(int iParam0, bool bParam1)
{
	iVar0 = func_595(&(Local_4089.f_3355), iParam0);
	iVar1 = func_596(&(Local_4089.f_3355), iParam0);
	Var2 = { func_597(&(Local_4089.f_3355), iParam0) };
	Var10 = { func_598(&(Local_4089.f_3355), iParam0) };
	if (bParam1)
	{
		if (iVar0 != -1)
		{
			func_599(iVar0, 1, 0);
			func_600(iVar0);
		}
		if (iVar1 != 0)
		{
			_set_scenario_group_enabled_hash(iVar1, true);
		}
		if (!is_string_null_or_empty(&Var2) && !is_string_null_or_empty(&Var10))
		{
			_0x6339c1ea3979b5f7(&Var10, &Var2);
		}
	}
	else
	{
		if (iVar0 != -1)
		{
			func_601(iVar0);
			func_599(iVar0, 0, 0);
		}
		if (iVar1 != 0)
		{
			_set_scenario_group_enabled_hash(iVar1, false);
		}
		if (!is_string_null_or_empty(&Var2))
		{
			_0x9428447ded71fc7e(&Var2);
		}
	}
}

bool func_254(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_255(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == uParam0->f_4)
	{
		if (bParam2 == -1816532073)
		{
			return uParam0->f_6;
		}
		else
		{
			return uParam0->f_5;
		}
	}
	return uVar0;
}

int func_256(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = -829870693;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

struct<8> func_257(var uParam0, int iParam1)
{
	return func_252(uParam0, -433267846, "", 542308674, iParam1, 0, 0, 0, 0);
}

bool func_258(var uParam0, int iParam1)
{
	return func_218(uParam0, -1309126434, 0, 542308674, iParam1, 0, 0, 0, 0);
}

void func_259(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (func_602(Local_409.f_1[iVar0]->f_1))
		{
			if (does_entity_exist(Local_4089.f_6[iVar0]->f_60))
			{
				*uParam0 = { get_entity_coords(Local_4089.f_6[iVar0]->f_60, true, false) };
				*uParam1 = get_entity_heading(Local_4089.f_6[iVar0]->f_60);
			}
		}
		iVar0++;
	}
}

Vector3 func_260(var uParam0, float fParam1)
{
	return func_604(uParam0, -1637900047, func_603(), 542308674, fParam1, 0, 0, 0, 0);
}

bool func_261(var uParam0, int iParam1)
{
	return func_218(uParam0, 846698286, 0, 542308674, iParam1, 0, 0, 0, 0);
}

int func_262(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_263(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = 1870657425;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

int func_264(var uParam0, int iParam1)
{
	return func_591(uParam0, -1497594598, 0, -1749416493, iParam1, 0, 0, 0, 0, 0);
}

Vector3 func_265(var uParam0, int iParam1)
{
	return func_604(uParam0, -1637900047, 0f, 0f, 0f, -1749416493, iParam1, 0, 0, 0, 0);
}

float func_266(var uParam0, int iParam1)
{
	return func_605(uParam0, 92277827, 0f, -1749416493, iParam1, 0, 0, 0, 0);
}

void func_267(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		task_clear_look_at(iParam0);
	}
}

struct<16> func_268(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	return func_606(uParam0, uParam0->f_4, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

bool func_269(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_270(int iParam0, int iParam1)
{
	if (!func_607(iParam0, iParam1))
	{
		set_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = get_id_of_this_thread();
		func_608();
	}
}

void func_271(int iParam0, int iParam1, bool bParam2)
{
	if (func_607(iParam0, iParam1) && (!bParam2 || &Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] == get_id_of_this_thread()))
	{
		clear_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = 0;
		func_608();
	}
}

int func_272(int iParam0, bool bParam1)
{
	if (!func_290(iParam0))
	{
		return 0;
	}
	if (!func_289(iParam0))
	{
		return 0;
	}
	iVar0 = get_id_of_this_thread();
	if (!func_293(iParam0, iVar0))
	{
		return 0;
	}
	if (bParam1)
	{
		func_609(iParam0);
	}
	func_292(iParam0);
	return 1;
}

void func_273(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (func_146(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_144((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

void func_274(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (!func_146(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_251((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

int func_275(bool bParam0)
{
	if (func_88() == -1)
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

void func_276(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

struct<4> func_277()
{
	return Var0;
}

bool func_278(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	func_610(&(Global_1904087->f_24));
	if (!func_611(iParam0, iParam1, iParam2, uParam3, &(Global_1904087->f_24), bParam4))
	{
		return false;
	}
	return true;
}

bool func_279(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = -1591664384;
	if (!func_612(iParam0, iParam1, iParam2, uParam3, &Var0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_280(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_281(int iParam0)
{
	if (func_283(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_282(int iParam0)
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

bool func_283(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_284(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_285()
{
	if (!func_613())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_286(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_287(int iParam0)
{
	iVar0 = func_614(iParam0, 1);
	if (iVar0 >= 128 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_288(int iParam0)
{
	iVar0 = func_614(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

bool func_289(int iParam0)
{
	iVar0 = func_615(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_290(int iParam0)
{
	iVar0 = func_615(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_291(int iParam0)
{
	if (!func_290(iParam0))
	{
		return false;
	}
	return &Global_1146212->f_35859.f_919[func_615(iParam0, 1)] == -1;
}

int func_292(int iParam0)
{
	if (!func_290(iParam0))
	{
		return 0;
	}
	iVar0 = func_615(iParam0, 1);
	if (!func_288(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_614(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_616(iParam0, iVar1))
		{
			case 0:
				func_617(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212->f_35859.f_11700)
				{
					if (&Global_1146212->f_35859.f_9503[iVar5] != iVar1 || Global_1146212->f_35859.f_9503[iVar5]->f_1 != iParam0)
					{
					}
					else
					{
						func_617(iVar1, iParam0, iVar4);
						func_618(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_618(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_619(iVar1, 1);
				func_620(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_621(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212->f_35859.f_9502)
					{
						if (&Global_1146212->f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212->f_35859.f_9302[iVar6] = -1;
							Global_1146212->f_35859.f_9502 = (Global_1146212->f_35859.f_9502 - 1);
							Global_1146212->f_35859.f_9302[iVar6] = &Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502];
							Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212->f_35859.f_919[iVar0] = -1;
			func_622(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

bool func_293(int iParam0, int iParam1)
{
	iVar0 = func_623(iParam0);
	if (Global_1146212->f_47689.f_44[iVar0]->f_1 == 0)
	{
		return true;
	}
	else if (Global_1146212->f_47689.f_44[iVar0]->f_1 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_294(int iParam0, int iParam1)
{
	if (!func_290(iParam0))
	{
		return false;
	}
	iVar0 = func_615(iParam0, 1);
	if (!func_288(iParam1))
	{
		return false;
	}
	iVar1 = func_614(iParam1, 1);
	if (&Global_1146212->f_35859.f_919[iVar0] == iParam1)
	{
		return true;
	}
	if (func_288(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		func_292(iParam0);
	}
	Global_1146212->f_35859.f_919[iVar0] = iParam1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar1]->f_5)
	{
		iVar2 = Global_1146212->f_35859[iVar1][iVar4];
		iVar3 = func_619(iVar2, 1);
		switch (func_624(iParam0, iVar2))
		{
			case 0:
				func_625(iVar2, iParam0, iVar4);
				break;
			case 1:
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] = iVar2;
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]->f_1 = iParam0;
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]->f_2 = iVar4;
				Global_1146212->f_35859.f_11700++;
				break;
			case 2:
				Jump @427; //curOff = 338
				if (Global_1146212->f_35859.f_3116[iVar3]->f_29 <= 0)
				{
					Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = iVar2;
					Global_1146212->f_35859.f_9502++;
				}
				func_620(iVar3, 1);
				iVar4++;
			}
			return true;
		}

void func_295(int iParam0, int iParam1)
{
	iVar0 = func_623(iParam0);
	Global_1146212->f_47689.f_44[iVar0]->f_1 = iParam1;
	Global_1146212->f_47689.f_44[iVar0] = iParam0;
}

void func_296(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_297(int iParam0)
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

int func_298(int iParam0)
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

bool func_299(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		*uParam1 = 6;
		uParam1->f_1 = iParam0;
		uParam1->f_2 = 0;
		uParam1->f_3 = 255;
		uParam1->f_4 = -1;
		uParam1->f_5 = 623901053;
		return false;
	}
	if (is_entity_a_ped(iParam0))
	{
		iVar0 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_a_player(iVar0))
		{
			*uParam1 = 1;
		}
		else if (_is_this_model_a_horse(get_entity_model(iParam0)))
		{
			*uParam1 = 3;
		}
		else if (is_ped_human(iVar0))
		{
			*uParam1 = 2;
		}
		else
		{
			*uParam1 = 5;
		}
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		*uParam1 = 4;
	}
	else if (is_entity_an_object(iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		return false;
	}
	switch (*uParam1)
	{
		case 1:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = network_get_player_index_from_ped(uParam1->f_2);
			uParam1->f_4 = get_player_team(uParam1->f_3);
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 5:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 2:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 3:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 4:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
		case 6:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
	}
	return true;
}

int func_300(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar1 = Local_409.f_1[iVar0]->f_14;
		if (network_does_network_id_exist(iVar1))
		{
			if (net_to_ent(iVar1) == iParam0)
			{
				return iVar0;
			}
			if (bParam1 && _0x849bd6c6314793d0(net_to_ped(iVar1)) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_301(int iParam0, int iParam1)
{
	if (!func_626(iParam0, iParam1, -1))
	{
		func_105((*Local_920[participant_id_to_int()])[iParam1], iParam0);
	}
}

void func_302(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 32)
	{
		if (!is_bit_set(Local_13.f_365, iParam0))
		{
			set_bit(&(Local_13.f_365), iParam0);
		}
	}
	if (!func_120(16))
	{
		if (func_28(175) && Local_13.f_365 == 0)
		{
			return;
		}
		func_627(Local_4089.f_3391);
		if (func_449(Local_4089.f_3393))
		{
			func_628(Local_4089.f_3391);
		}
		func_329(16, 1);
	}
}

void func_303(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = get_ped_index_from_entity_index(*iParam0);
	bVar1 = iParam0->f_24;
	if ((bParam2 && func_629(*iParam0)) && get_ped_config_flag(iVar0, 140, false))
	{
		func_630(iParam0, uParam1, bParam2, iVar0, bVar1);
		return;
	}
	if (is_ped_a_player(iVar0))
	{
		if (network_get_player_index_from_ped(iVar0) == player_id())
		{
			func_631(iParam0, uParam1, bParam2);
		}
		if (bParam2 && network_is_host_of_this_script())
		{
			func_632(iParam0, uParam1);
			func_633(iParam0, uParam1);
		}
		iVar2 = network_get_player_index_from_ped(iVar0);
		if (((((((Local_4089.f_3393 == 1427578635 && uParam1->f_3 == player_id()) && iParam0->f_3) && iVar2 != 255) && network_is_player_active(iVar2)) && network_is_player_a_participant(iVar2)) && func_182(network_get_participant_index(iVar2)) == 1) && func_182(255) == 0)
		{
			Local_4089.f_4125++;
		}
		return;
	}
	iVar3 = func_300(*iParam0, 0);
	if (iVar3 != -1)
	{
		if (((func_28(175) && iParam0->f_3) && _0x705be297eebdb95d(iParam0->f_5)) && !_0x5809dbca0a37c82b(iParam0->f_5))
		{
			if (func_634(iVar0, &uVar4, 15f, -1, 0, 0, 1) != -1)
			{
				func_302(Local_4089.f_6[iVar3]->f_50);
			}
		}
		func_635(iParam0, uParam1, bVar1, bParam2, iVar3);
		return;
	}
	func_636(iParam0, uParam1, bParam2);
	func_637(iParam0, iVar3);
}

void func_304(int iParam0, var uParam1, bool bParam2)
{
	if (!bParam2)
	{
		return;
	}
	iVar0 = func_638(*iParam0);
	if (uParam1->f_3 == player_id())
	{
		if (iVar0 != -1)
		{
			if (iParam0->f_3 || (Local_4089.f_1087[iVar0]->f_5 > 0f && get_object_fragment_damage_health(get_object_index_from_entity_index(*iParam0), true) < Local_4089.f_1087[iVar0]->f_5))
			{
				func_326(11, 1, get_entity_coords(*iParam0, true, false));
			}
		}
		else if (iParam0->f_3)
		{
			if (_0xb07d3185e11657a5(*iParam0))
			{
				func_326(11, 1, get_entity_coords(*iParam0, true, false));
			}
			else
			{
				func_326(12, 1, get_entity_coords(*iParam0, true, false));
			}
		}
	}
	if (iVar0 != -1)
	{
		if (func_307(network_get_participant_index(uParam1->f_3)) != -1029285341)
		{
			return;
		}
		if (func_639(iVar0) != 448485414)
		{
			return;
		}
		if (&Local_13.f_82[func_640(iVar0)] == 5)
		{
			return;
		}
		if (!network_is_host_of_this_script())
		{
			if (iParam0->f_2 == 0f)
			{
				func_641(func_640(iVar0), uParam1->f_3);
			}
			return;
		}
		if (iParam0->f_3 || Local_4089.f_1087[iVar0]->f_5 > 0f)
		{
			func_312(func_640(iVar0), uParam1->f_3, 0);
		}
	}
	else
	{
		if (!network_is_host_of_this_script())
		{
			return;
		}
		if (func_28(94) && func_642(*iParam0))
		{
			if (func_307(network_get_participant_index(uParam1->f_3)) != -1029285341)
			{
				return;
			}
			Local_13.f_224 = (Local_13.f_224 - 0.02f);
		}
		else
		{
			iVar1 = func_643(iParam0);
			if (iVar1 > -1)
			{
				Local_13.f_82[iVar1]->f_13 = uParam1->f_3;
			}
		}
	}
}

void func_305(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	iVar0 = func_644(*iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (network_is_host_of_this_script())
	{
		if (func_645(Local_4089.f_1367[iVar0]->f_1) && !func_646(8192, iVar0))
		{
			if (!func_28(116))
			{
				fVar1 = (iParam0->f_2 / IntToFloat(get_entity_max_health(*iParam0, false)));
				Local_13.f_224 = (Local_13.f_224 - fVar1);
				if (!is_vehicle_driveable(get_vehicle_index_from_entity_index(*iParam0), false, false))
				{
					Local_13.f_224 = -1f;
				}
			}
			if ((func_647(iVar0) == 448485414 && Local_13.f_224 <= 0f) && func_307(network_get_participant_index(uParam1->f_3)) == -1029285341)
			{
				func_312(func_648(iVar0), uParam1->f_3, 0);
			}
		}
		if ((func_647(iVar0) == 448485414 && iParam0->f_3) && bParam2)
		{
			func_312(func_648(iVar0), uParam1->f_3, 0);
		}
	}
	if (((uParam1->f_3 == player_id() && func_182(255) == 0) && func_649(iVar0) == -25013953) && !func_650(Local_4089.f_4086))
	{
		func_20(2097152, 1, 0);
	}
}

int func_306(int iParam0, int iParam1)
{
	iVar0 = get_ped_in_vehicle_seat(iParam0, iParam1);
	if (!does_entity_exist(iVar0))
	{
		iVar0 = get_last_ped_in_vehicle_seat(iParam0, iParam1);
	}
	return iVar0;
}

int func_307(int iParam0)
{
	iVar0 = func_182(iParam0);
	if (iVar0 < 0 || iVar0 > 1)
	{
		return 493038497;
	}
	return &(Local_4089.f_3008[iVar0]);
}

int func_308(int iParam0)
{
	if (!func_311(iParam0))
	{
		return uVar0;
	}
	if (&Local_13.f_82[iParam0] == 0)
	{
		return uVar0;
	}
	if (Local_13.f_82[iParam0]->f_1 == -916820003)
	{
		return func_651(Local_13.f_82[iParam0]->f_5);
	}
	return &(Local_4089.f_3229.f_2[iParam0]);
}

bool func_309(int iParam0, bool bParam1)
{
	if (iParam0 == -1 || iParam0 > 8)
	{
		return false;
	}
	if (bParam1 && &Local_409.f_317[iParam0] == 12)
	{
		return false;
	}
	return &Local_409.f_317[iParam0] != 0;
}

int func_310(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		switch (iParam0)
		{
			case 886638433:
				iVar0 = Local_409.f_1[iParam1]->f_14;
				break;
			case -1918493640:
				if (func_652(262144, iParam1) && func_653(524288, iParam1, -1))
				{
					iVar1 = _0x4735e2a4bb83d9da(Local_4089.f_1087[iParam1]->f_4);
				}
				else
				{
					iVar0 = Local_409.f_317[iParam1]->f_5;
					iVar1 = Local_4089.f_1087[iParam1]->f_11;
				}
				break;
			case -584819812:
				iVar0 = Local_409.f_381[iParam1]->f_10;
				break;
			case 1015970717:
				iVar1 = func_654(Local_4089.f_1500.f_3);
				break;
			case -916820003:
				iVar1 = func_651(iParam1);
				break;
			case -1091027173:
				iVar1 = func_655(iParam1);
				break;
			case 281414479:
				iVar0 = &Local_13.f_3[iParam1];
				break;
			case 898608023:
				iVar1 = &Local_4089.f_1554[iParam1];
				break;
		}
	}
	if (network_does_network_id_exist(iVar0))
	{
		return net_to_ent(iVar0);
	}
	return iVar1;
}

bool func_311(bool bParam0)
{
	return (bParam0 > -1 && bParam0 < 6);
}

void func_312(int iParam0, int iParam1, bool bParam2)
{
	if (!func_311(iParam0))
	{
		return;
	}
	if (iParam1 == 255)
	{
		return;
	}
	if (!network_is_player_active(iParam1))
	{
		return;
	}
	Local_13.f_82[iParam0]->f_14 = iParam1;
	if (bParam2)
	{
		func_656(&(Local_13.f_82[iParam0]->f_15));
	}
	else
	{
		func_163(&(Local_13.f_82[iParam0]->f_15));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_657(iParam0, iVar0, &uVar1))
		{
			func_658(iParam0, iVar0, 1, 0, 255, 1, 0);
		}
		iVar0++;
	}
}

bool func_313(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (!func_481(Local_4089.f_3897[iVar0]))
		{
		}
		else if (func_659(Local_4089.f_3897[iVar0], uParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_314(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (!func_481(Local_4089.f_3897[iVar0]))
		{
		}
		else if (!func_659(Local_4089.f_3897[iVar0], uParam0))
		{
		}
		else
		{
			func_660(Local_4089.f_3897[iVar0]);
		}
		iVar0++;
	}
}

int func_315(var uParam0, int iParam1)
{
	iVar11 = 0;
	while (iVar11 < uParam0->f_9)
	{
		if (!_0xac8fab22a914ae34(uParam0, uParam0->f_5, iVar11, &Var0))
		{
		}
		else if (Var0.f_8 == iParam1)
		{
			return Var0.f_10;
		}
		iVar11++;
	}
	return 0;
}

struct<2> func_316(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_317(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<4> func_318(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_275(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_661(1328661203, func_277(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_661(1328661203, func_277(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_661(1328661203, func_277(), -1591664384, bParam0);
}

int func_319(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_662(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_663(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_661(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_275(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_275(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_320(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_664(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_665(iParam0))
	{
		return func_667(func_666(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_668(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

void func_321(int iParam0)
{
	Var0.f_10 = 255;
	if (!get_event_data(1, iParam0, &Var0, 19))
	{
		return;
	}
	if (Var0.f_5 != Local_4089.f_3391)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 17:
			func_669(&Var0);
			break;
		case 18:
			func_670(&Var0);
			break;
		case 13:
			func_671(&Var0);
			break;
		case 1:
			func_672(&Var0);
			break;
		case 2:
			func_673(&Var0);
			break;
		case 3:
			func_674(&Var0);
			break;
		case 4:
			func_675(&Var0);
			break;
		case 5:
			func_676(&Var0);
			break;
		case 6:
			func_677(&Var0);
			break;
		case 7:
			func_678(&Var0);
			break;
		case 8:
			func_679(&Var0);
			break;
		case 10:
			func_680(&Var0);
			break;
		case 11:
			func_681(&Var0);
			break;
		case 19:
			func_682(&Var0);
			break;
		case 20:
			func_683(&Var0);
			break;
		case 21:
			func_684(&Var0);
			break;
		case 22:
			func_685(&Var0);
			break;
		case 14:
			func_686();
			break;
		case 15:
			func_687(&Var0);
			break;
		case 16:
			func_688(&Var0);
			break;
		case 23:
			func_689(&Var0);
			break;
		case 35:
			func_690(&Var0);
			break;
		case 24:
			func_691(&Var0);
			break;
		case 25:
			func_692(&Var0);
			break;
		case 26:
			func_693(&Var0);
			break;
		case 28:
			func_694(&Var0);
			break;
		case 29:
			func_695();
			break;
		case 30:
			func_696(&Var0);
			break;
		case 31:
			func_697(&Var0);
			break;
		case 32:
			func_698(&Var0);
			break;
		case 33:
			func_699(&Var0);
			break;
		case 34:
			func_700(&Var0);
			break;
	}
}

void func_322(int iParam0)
{
	Var0.f_6 = 32;
	if (!get_event_data(1, iParam0, &Var0, 41))
	{
		return;
	}
	if (Var0.f_5 != Local_4089.f_3391)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 0:
			func_701(&Var0);
			break;
		case 1:
			func_702(&Var0);
			break;
		case 2:
			func_703(&Var0);
			break;
		case 3:
			func_704(&Var0);
			break;
	}
}

void func_323(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 13))
	{
		return;
	}
	if (Var0.f_5 != Local_4089.f_3391)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 4:
			func_705(&Var0);
			break;
		case 5:
			func_706(&Var0);
			break;
		case 0:
			func_707(&Var0);
			break;
		case 1:
			func_708(&Var0);
			break;
		case 2:
			func_709(&Var0);
			break;
		case 3:
			func_710(&Var0);
			break;
		case 6:
			func_711(&Var0);
			break;
	}
}

void func_324(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 8))
	{
		return;
	}
	if (Var0.f_5 != Local_4089.f_3391)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 36:
			func_712(&Var0);
			break;
	}
}

void func_325(int iParam0)
{
	if (!get_event_data(1, iParam0, &uVar0, 6))
	{
		return;
	}
	func_713(&uVar0, &(Local_4089.f_3961));
}

void func_326(int iParam0, bool bParam1, vector3 vParam2)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = Local_13.f_82[iVar0]->f_5;
		if ((((Local_13.f_82[iVar0]->f_1 == -916820003 && iVar1 > -1) && iVar1 < 3) && (Local_4089.f_1983[iVar1]->f_1 == -1767305912 || Local_4089.f_1983[iVar1]->f_1 == -1229553512)) && &Local_409.f_478[iVar1] == 6)
		{
			if (!bParam1 || func_714(16384, iVar1, -1))
			{
				iVar2 = Local_4089.f_1983[iVar1]->f_10;
				if (iVar2 == -1 || func_715(&(Local_4089.f_2190[iVar2]), vParam2))
				{
					Local_4089.f_1983[iVar1]->f_13 = (Local_4089.f_1983[iVar1]->f_13 + func_716(iParam0));
				}
			}
		}
		iVar0++;
	}
}

void func_327(int iParam0)
{
	if (!func_717(iParam0))
	{
		return;
	}
	iVar0 = func_300(iParam0, 0);
	if (!func_650(Local_4089.f_6[iVar0]->f_52))
	{
		func_656(&(Local_4089.f_6[iVar0]->f_52));
	}
	if (func_718(Global_34, 0))
	{
		return;
	}
	if (!is_ped_on_mount(Global_34))
	{
		return;
	}
	iVar1 = get_mount(Global_34);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (!func_719(iVar1))
	{
		return;
	}
	if (is_explosion_in_sphere(25, get_entity_coords(iVar1, true, false), 30f) || is_explosion_in_sphere(2, get_entity_coords(iVar1, true, false), 30f))
	{
		if (func_720() == 1)
		{
			if (!func_494(iVar1, 1041577989))
			{
				task_horse_action(iVar1, 2, 0, 0);
			}
		}
	}
}

void func_328(int iParam0, int iParam1)
{
	if (!func_653(iParam0, iParam1, -1))
	{
		func_105(Local_920[participant_id_to_int()]->f_31[iParam1], iParam0);
	}
}

void func_329(int iParam0, int iParam1)
{
	if (!func_120(iParam0))
	{
		func_105(&(Local_13.f_348), iParam0);
	}
}

bool func_330(int iParam0, int iParam1)
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

bool func_331(int iParam0, int iParam1)
{
	return (func_143(iParam0) && func_146((*Global_1237665)[iParam0]->f_3, iParam1));
}

int func_332(int iParam0, struct<2> Param1, bool bParam3)
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
	if (!func_106(Param1))
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
	uVar31 = func_721(iParam0);
	if (count_player_bits(&uVar31) <= 0)
	{
		return 0;
	}
	func_722(&Var0, uVar31);
	Var0.f_4 = 13;
	func_723(&Var0);
	return 1;
}

bool func_333()
{
	iVar1 = func_724(&(Local_4089.f_3355));
	if (iVar1 <= 0)
	{
		return true;
	}
	if (!func_650(Local_4089.f_4109))
	{
		func_656(&(Local_4089.f_4109));
	}
	if (func_725(Local_4089.f_4109) > Global_1901947->f_166.f_67)
	{
		return true;
	}
	if (!func_120(1))
	{
		vVar3 = { func_726(&(Local_4089.f_3355), &(Local_4089.f_4031[33])) };
		uVar2 = func_728(&(Local_4089.f_3355), func_727(&(Local_4089.f_3355), &(Local_4089.f_4031[33])));
		func_729(vVar3, 0.5f, 0, 0, 0, 1, 0);
		Local_4089.f_4031[33] = &Local_4089.f_4031[33] + 1;
		if (&Local_4089.f_4031[33] >= iVar1)
		{
			func_329(1, 1);
		}
		return false;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			vVar3 = { func_726(&(Local_4089.f_3355), iVar0) };
			uVar2 = func_728(&(Local_4089.f_3355), func_727(&(Local_4089.f_3355), iVar0));
			if (_0x72068021f498e6e3(uVar2, vVar3))
			{
				return false;
			}
			iVar0++;
		}
	}
	return true;
}

int func_334()
{
	iVar0 = func_730(&(Local_4089.f_3355));
	iVar2 = 0;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar3 = func_731(&(Local_4089.f_3355), iVar2);
		if (func_732(&(Local_4089.f_3355), iVar3))
		{
		}
		else if (!func_733(-970979849, iVar2, 0, -1))
		{
		}
		else
		{
			if (iVar1 >= 15)
			{
				return 0;
			}
			Local_13.f_3[iVar1]->f_1 = iVar2;
			Local_13.f_352++;
			iVar1++;
		}
		iVar2++;
	}
	return 1;
}

void func_335()
{
	Local_13.f_382 = get_random_int_in_range(0, 100);
}

void func_336(var uParam0, var uParam1)
{
	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	Var0.f_4 = 9;
	Var0.f_5 = uParam0;
	Var0.f_10 = uParam1;
	func_734(&Var0);
}

bool func_337(bool bParam0)
{
	iVar0 = 1;
	iVar1 = func_735(func_34(Local_4089.f_3392), Local_4089.f_3972);
	vVar3 = { func_736(Local_4089.f_3392, Local_4089.f_3972) };
	uVar6 = func_737(func_34(Local_4089.f_3392), Local_4089.f_3972);
	if (!func_738(bParam0, &(Local_13.f_323), &bVar7, vVar3, 0, uVar6))
	{
		iVar0 = 0;
	}
	if (iVar1 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			vVar3 = { func_739(func_34(Local_4089.f_3392), Local_4089.f_3972, iVar2) };
			uVar6 = func_740(func_34(Local_4089.f_3392), Local_4089.f_3972, iVar2);
			if (!func_738(bParam0, Local_13.f_323.f_2[iVar2], &bVar7, vVar3, 1, uVar6))
			{
				iVar0 = 0;
			}
			iVar2++;
		}
	}
	if (bVar7)
	{
		if (Local_4089.f_2889 == 0)
		{
			Local_4089.f_2889 = get_frame_count();
		}
		if ((get_frame_count() - Local_4089.f_2889) > 150)
		{
			*bParam0 = 1;
		}
	}
	return iVar0;
}

bool func_338(bool bParam0)
{
	iVar3 = func_724(&(Local_4089.f_3355));
	iVar0 = 0;
	while (iVar0 <= (iVar3 - 1))
	{
		if (iVar0 >= 10)
		{
			*bParam0 = 1;
		}
		else
		{
			iVar1 = func_727(&(Local_4089.f_3355), iVar0);
			iVar2 = func_728(&(Local_4089.f_3355), iVar1);
			if (iVar2 != 0)
			{
				if (!network_does_network_id_exist(&(Local_13.f_49[iVar0])))
				{
					_request_propset(iVar2);
					if (!_has_propset_loaded(iVar2))
					{
						bVar9 = true;
					}
					else
					{
						vVar4 = { func_726(&(Local_4089.f_3355), iVar0) };
						fVar7 = func_741(&(Local_4089.f_3355), iVar0);
						fVar8 = func_742(&(Local_4089.f_3355), iVar0);
						bVar12 = func_743(&(Local_4089.f_3355), iVar0);
						iVar13 = func_744(&(Local_4089.f_3355), iVar0);
						func_745(vVar4);
						Local_13.f_49[iVar0] = _0x74f99ef7ef503398(_create_propset_2(iVar2, vVar4, iVar13, fVar7, fVar8, true, bVar12));
						_0xc1ab7eefd3e6ee49(_0xd08066e00d26c448(&(Local_13.f_49[iVar0])), 24);
						if (func_746(&(Local_4089.f_3355), iVar0))
						{
							iVar10 = 0;
							bVar11 = true;
							if (!func_747(&(Local_13.f_49[iVar0]), bVar11, &iVar10, bParam0))
							{
								return false;
							}
						}
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	return !bVar9;
}

bool func_339(bool bParam0)
{
	iVar0 = Local_4089.f_3967;
	while (iVar0 <= 14)
	{
		if (Local_13.f_3[iVar0]->f_1 == -1)
		{
			Local_4089.f_3967++;
		}
		else
		{
			iVar2 = Local_13.f_3[iVar0]->f_1;
			iVar3 = func_731(&(Local_4089.f_3355), iVar2);
			if (network_does_network_id_exist(&(Local_13.f_3[iVar0])))
			{
				Local_4089.f_3967++;
			}
			else
			{
				iVar1 = func_748(&(Local_4089.f_3355), iVar3);
				if (iVar1 == 0)
				{
					Local_4089.f_3967++;
				}
				else
				{
					if (!func_749(bParam0))
					{
						return false;
					}
					vVar4 = { func_750(&(Local_4089.f_3355), iVar2) };
					vVar7 = { func_751(&(Local_4089.f_3355), iVar2) };
					func_745(vVar4);
					iVar10 = create_object(iVar1, vVar4, true, true, false, false, true);
					if (func_752(&(Local_4089.f_3355), iVar3))
					{
						_0xebdc12861d079aba(iVar10, 1);
					}
					Local_13.f_3[iVar0] = obj_to_net(iVar10);
					set_entity_rotation(iVar10, vVar7, 2, true);
					if (!func_753(&(Local_4089.f_3355), iVar3))
					{
						func_754(iVar0);
					}
					if (func_755(&(Local_4089.f_3355), iVar3))
					{
						func_756(4, iVar0);
					}
					if (func_757(&(Local_4089.f_3355), iVar2))
					{
						func_758(iVar10, 1, 1, 0);
						set_entity_can_be_damaged(iVar10, false);
						set_entity_invincible(iVar10, true);
						set_entity_proofs(iVar10, 159, false);
					}
					iVar11 = func_759(&(Local_4089.f_3355), iVar3, get_entity_max_health(iVar10, false));
					if (get_entity_max_health(iVar10, false) != iVar11)
					{
						set_entity_max_health(iVar10, iVar11);
						_set_entity_health(iVar10, iVar11, 0);
					}
					set_network_id_visible_in_cutscene(&(Local_13.f_3[iVar0]), 1, 1, 256);
					func_760(iVar10);
					Local_4089.f_3967++;
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_340()
{
	if (func_761(Local_4089.f_3391, 32768, 0))
	{
		return true;
	}
	iVar0 = func_762(&(Local_4089.f_3355));
	if (iVar0 > 0)
	{
		iVar6 = -1;
		iVar3 = 0;
		while (iVar3 <= (iVar0 - 1))
		{
			if (iVar3 >= 6)
			{
			}
			else
			{
				if (func_763(&(Local_4089.f_3355), iVar3) != -1)
				{
				}
				else if (!func_733(448485414, iVar3, 1, -1))
				{
				}
				else if (!func_764(iVar3))
				{
				}
				else
				{
					iVar4 = func_765(&(Local_4089.f_3355), iVar3);
					iVar10 = func_766(&(Local_4089.f_3355), iVar3);
					if (!func_218(&(Local_4089.f_3355), -678689745, 0, -801742902, 0, 0, 0, 0, 0))
					{
						iVar6 = -1;
					}
					iVar6 = func_767(Local_4089.f_3355, 448485414, iVar3, &vVar7, &fVar2, -1, iVar6);
					if (iVar10 == 886638433)
					{
						bVar1 = !func_768(iVar4, &iVar5, vVar7, fVar2, 448485414, iVar3, -1, -1, 0);
					}
					else if (iVar10 == -1918493640)
					{
						bVar1 = !func_769(iVar4, &iVar5, iVar6, 448485414, iVar3);
					}
					else if (iVar10 == -584819812)
					{
						bVar1 = !func_770(iVar4, &iVar5, vVar7, fVar2, 448485414, iVar3, -1);
					}
					else if (iVar10 == 1015970717)
					{
						bVar1 = !func_771(448485414, iVar3);
					}
					else if (iVar10 == -916820003)
					{
						bVar1 = !func_772(&iVar5, 448485414, iVar3);
					}
					else
					{
						return false;
					}
					if (bVar1)
					{
						return false;
					}
					else if (!func_773(4096, iVar3))
					{
						func_774(iVar3, iVar10, iVar5);
					}
				}
				iVar3++;
			}
		}
	}
	else if (!func_775())
	{
		return false;
	}
	return true;
}

bool func_341()
{
	iVar0 = func_776(&(Local_4089.f_3355));
	if (iVar0 > 0)
	{
		iVar3 = 0;
		while (iVar3 <= (iVar0 - 1))
		{
			iVar12 = func_777(&(Local_4089.f_3355), iVar3);
			if (iVar12 == 886638433)
			{
				iVar4++;
			}
			else if (iVar12 == -584819812)
			{
				iVar5++;
			}
			if (iVar4 > 15)
			{
				return false;
			}
			else if (iVar5 > 6)
			{
				return false;
			}
			if (func_733(-428150648, iVar3, 1, -1))
			{
				iVar6 = func_778(&(Local_4089.f_3355), iVar3);
				iVar8 = func_767(Local_4089.f_3355, -428150648, iVar3, &vVar9, &fVar2, -1, -1);
				if (iVar12 == 886638433)
				{
					if (func_761(Local_4089.f_3391, 32768, 0))
					{
					}
					else
					{
						bVar1 = !func_768(iVar6, &uVar7, vVar9, fVar2, -428150648, iVar3, -1, -1, 0);
						Jump @329; //curOff = 224
						if (iVar12 == -1918493640)
						{
							bVar1 = !func_769(iVar6, &uVar7, iVar8, -428150648, iVar3);
						}
						else if (iVar12 == -584819812)
						{
							bVar1 = !func_770(iVar6, &uVar7, vVar9, fVar2, -428150648, iVar3, -1);
						}
						else if (iVar12 == 1015970717)
						{
							bVar1 = !func_771(-428150648, iVar3);
						}
						else
						{
							return false;
						}
						if (bVar1)
						{
							return false;
						}
					}
					iVar3++;
					return true;
				}
			}
		}
	}
}

bool func_342()
{
	iVar0 = func_779(&(Local_4089.f_3355));
	if (iVar0 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iVar0 - 1))
		{
			if (iVar2 >= 5)
			{
			}
			else
			{
				bVar1 = !func_780(&uVar3);
				if (bVar1)
				{
					return false;
				}
				iVar2++;
			}
		}
	}
	return true;
}

bool func_343()
{
	iVar0 = func_781(&(Local_4089.f_3355));
	if (iVar0 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iVar0 - 1))
		{
			if (iVar2 >= 4)
			{
			}
			else
			{
				if (func_733(-783556459, iVar2, 1, -1))
				{
					bVar1 = !func_782(&uVar3);
					if (bVar1)
					{
						return false;
					}
				}
				iVar2++;
			}
		}
	}
	return true;
}

bool func_344()
{
	if (func_761(Local_4089.f_3391, 32768, 0))
	{
		return true;
	}
	iVar0 = func_783(&(Local_4089.f_3355));
	if (iVar0 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iVar0 - 1))
		{
			if (iVar2 >= 6)
			{
			}
			else
			{
				if (func_733(661336845, iVar2, 1, -1))
				{
					iVar3 = func_784(&(Local_4089.f_3355), iVar2);
					func_767(Local_4089.f_3355, 661336845, iVar2, &vVar5, &fVar1, -1, -1);
					if (!func_768(iVar3, &uVar4, vVar5, fVar1, 661336845, iVar2, -1, -1, 0))
					{
						return false;
					}
				}
				iVar2++;
			}
		}
	}
	return true;
}

void func_345()
{
	iVar0 = 0;
	while (iVar0 <= (func_785(&(Local_4089.f_3355)) - 1))
	{
		if (iVar0 >= 6)
		{
		}
		else
		{
			iVar2 = func_786(&(Local_4089.f_3355), iVar0);
			vVar3 = { func_787(&(Local_4089.f_3355), iVar0) };
			vVar6 = { func_788(&(Local_4089.f_3355), iVar0) };
			if (func_789(&(Local_4089.f_3355), iVar0))
			{
				func_105(&iVar1, 16);
				func_105(&iVar1, 8);
				func_105(&iVar1, 8192);
			}
			Local_13.f_75[iVar0] = create_pickup_rotate(iVar2, vVar3, vVar6, iVar1, -1, 2, true, 0, 0, 0f, 0);
			iVar0++;
		}
	}
}

void func_346()
{
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (!func_790(iVar0))
		{
		}
		else if (!func_791(&(Local_4089.f_3355), iVar0))
		{
		}
		else
		{
			func_793(iVar0, func_792(Local_4089.f_3391), 0);
		}
		iVar0++;
	}
}

void func_347()
{
	if (Local_13.f_351 <= 0)
	{
		return;
	}
	switch (Local_4089.f_3393)
	{
		case -468635158:
			iVar4 = 0;
			break;
		case -1261475678:
			iVar4 = 1;
			break;
		default:
			iVar4 = 2;
			break;
	}
	if (!func_794(iVar4, (*Global_1248240)[Local_4089.f_3391]->f_598))
	{
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			func_795(1048576, iVar0);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (func_796(1048576, iVar0))
		{
			set_bit(&iVar2, iVar0);
			bVar3 = true;
		}
		iVar0++;
	}
	if (!bVar3)
	{
		return;
	}
	iVar1 = func_797(iVar2, 15, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (iVar0 != iVar1)
		{
			func_795(1048576, iVar0);
		}
		iVar0++;
	}
}

void func_348()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!func_798(iVar0))
		{
			func_799(-1, iVar0);
		}
		if (func_449(Local_4089.f_3393))
		{
			switch (func_484(iVar0))
			{
				case -1935695367:
				case 456446907:
				case 1045271718:
				case 1920334242:
					func_799(-1, iVar0);
					break;
			}
		}
		iVar0++;
	}
}

void func_349()
{
	if (func_650(Local_13.f_354))
	{
		return;
	}
	if (!func_121(536870912, 0, 0))
	{
		return;
	}
	if (func_449(Local_4089.f_3393) && !func_120(8192))
	{
		return;
	}
	if (func_28(120) && !func_800(2))
	{
		return;
	}
	func_656(&(Local_13.f_354));
	func_656(&(Local_13.f_355));
}

void func_350()
{
	if (func_449(Local_4089.f_3393))
	{
		if (!func_120(8192))
		{
			if (func_121(8192, -1, 0))
			{
				if (Local_4089.f_3008[0]->f_1 > 1)
				{
					iVar0 = func_801(8192, -1);
					func_802(Local_4089.f_3391, _0x901e0dc25080c8b9(func_801(8192, -1)), iVar0);
				}
				func_803();
				func_329(8192, 1);
				func_628(Local_4089.f_3391);
			}
		}
		else if (func_331(Local_4089.f_3391, 262144))
		{
			func_804(7);
		}
	}
	else if (!func_120(8192) && func_121(32, -1, 0))
	{
		func_803();
		func_329(8192, 1);
	}
}

void func_351()
{
	if (!func_805())
	{
		return;
	}
	if (!func_121(8192, 1, 0))
	{
		if (Local_13.f_391 != 0)
		{
			Local_13.f_391 = 0;
		}
		return;
	}
	if (Local_13.f_391 != 0)
	{
		return;
	}
	iVar0 = func_801(8192, 1);
	if (iVar0 == 255 || !network_is_player_active(iVar0))
	{
		return;
	}
	iVar1 = _0x901e0dc25080c8b9(iVar0);
	Local_13.f_391 = iVar1;
}

void func_352()
{
	if (&Local_4089.f_3008[1] == 493038497)
	{
		return;
	}
	if (func_120(67108864))
	{
		return;
	}
	if (!func_806())
	{
		return;
	}
	if (!func_650(Local_13.f_383))
	{
		func_656(&(Local_13.f_383));
	}
	else if (func_725(Local_13.f_383) >= Local_4089.f_3008[1]->f_4 && func_120(16777216))
	{
		func_807(Local_4089.f_3391);
		func_808();
		func_329(67108864, 1);
	}
}

void func_353()
{
	if (Local_4089.f_3355.f_14 <= 0)
	{
		return;
	}
	func_809(&(Local_4089.f_4031[17]));
	Local_4089.f_4031[17] = &Local_4089.f_4031[17] + 1;
	if (&Local_4089.f_4031[17] >= 10)
	{
		Local_4089.f_4031[17] = 0;
	}
}

void func_354()
{
	if (Local_13.f_392.f_2 != -10000f)
	{
		return;
	}
	if (!network_is_player_active((*Global_1237665)[Local_4089.f_3391]->f_16))
	{
		return;
	}
	if (func_170((*Global_1237665)[Local_4089.f_3391]->f_16))
	{
		return;
	}
	iVar0 = get_player_ped((*Global_1237665)[Local_4089.f_3391]->f_16);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	Local_13.f_392 = { get_entity_coords(iVar0, false, false) };
}

void func_355()
{
	iVar1 = &Local_4089.f_4031[11] + 2;
	iVar2 = &Local_4089.f_4031[13] + 2;
	iVar3 = &Local_4089.f_4031[12] + 2;
	iVar4 = &Local_4089.f_4031[14] + 2;
	iVar5 = &Local_4089.f_4031[15] + 2;
	iVar6 = &Local_4089.f_4031[21] + 2;
	iVar7 = &Local_4089.f_4031[23] + 2;
	iVar8 = &Local_4089.f_4031[25] + 2;
	iVar9 = &Local_4089.f_4031[40] + 2;
	if (iVar1 >= 15)
	{
		iVar1 = (iVar1 - 15);
		bVar10 = true;
	}
	if (iVar2 >= 9)
	{
		iVar2 = (iVar2 - 9);
		bVar11 = true;
	}
	if (iVar3 >= 6)
	{
		iVar3 = (iVar3 - 6);
		bVar12 = true;
	}
	if (iVar4 >= 5)
	{
		iVar4 = (iVar4 - 5);
		bVar13 = true;
	}
	if (iVar5 >= 6)
	{
		iVar5 = (iVar5 - 6);
		bVar14 = true;
		Local_13.f_371++;
	}
	if (iVar6 >= 3)
	{
		iVar6 = (iVar6 - 3);
		bVar15 = true;
	}
	if (iVar7 >= 15)
	{
		iVar7 = (iVar7 - 15);
		bVar16 = true;
	}
	if (iVar8 >= 6)
	{
		iVar8 = (iVar8 - 6);
		bVar17 = true;
	}
	if (iVar9 >= 4)
	{
		iVar9 = (iVar9 - 4);
		bVar18 = true;
	}
	func_810();
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (iVar0 < 15)
		{
			func_811(iVar0);
			if (func_812(iVar0, &(Local_409.f_1[iVar0]), &(Local_4089.f_4031[11]), iVar1, bVar10, 0))
			{
				func_813(iVar0);
			}
		}
		if (iVar0 < 9)
		{
			func_814(iVar0);
			if (func_815(iVar0, &(Local_409.f_317[iVar0]), &(Local_4089.f_4031[13]), iVar2, bVar11))
			{
				func_816(iVar0);
			}
		}
		if (iVar0 < 6)
		{
			func_817(iVar0);
			if (func_818(iVar0, &(Local_409.f_381[iVar0]), &(Local_4089.f_4031[12]), iVar3, bVar12))
			{
				func_819(iVar0);
			}
		}
		if (iVar0 < 6)
		{
			if (func_820(iVar0, &(Local_4089.f_4031[15]), iVar5, bVar14))
			{
				func_821(iVar0);
			}
		}
		if (iVar0 < 5)
		{
			if (func_822(iVar0, &(Local_409.f_467[iVar0]), &(Local_4089.f_4031[14]), iVar4, bVar13, 0))
			{
				func_823(iVar0);
			}
		}
		if (iVar0 < 3)
		{
			if (func_820(iVar0, &(Local_4089.f_4031[21]), iVar6, bVar15))
			{
				func_824(iVar0);
			}
		}
		if (iVar0 < 15)
		{
			if (func_820(iVar0, &(Local_4089.f_4031[23]), iVar7, bVar16))
			{
				func_825(iVar0);
			}
		}
		if (iVar0 < 6)
		{
			if (func_826(iVar0, &(Local_13.f_226[iVar0]), &(Local_4089.f_4031[25]), iVar8, bVar17))
			{
				func_827(iVar0);
			}
		}
		if (iVar0 < 4)
		{
			if (func_826(iVar0, &(Local_13.f_226[iVar0]), &(Local_4089.f_4031[40]), iVar9, bVar18))
			{
				func_828(iVar0);
			}
		}
		iVar0++;
	}
	Local_4089.f_4031[11] = iVar1;
	Local_4089.f_4031[13] = iVar2;
	Local_4089.f_4031[12] = iVar3;
	Local_4089.f_4031[14] = iVar4;
	Local_4089.f_4031[15] = iVar5;
	Local_4089.f_4031[21] = iVar6;
	Local_4089.f_4031[23] = iVar7;
	Local_4089.f_4031[25] = iVar8;
	Local_4089.f_4031[40] = iVar9;
}

void func_356()
{
	if (!func_650(Local_4089.f_4103))
	{
		func_656(&(Local_4089.f_4103));
		bVar0 = true;
	}
	else if (func_725(Local_4089.f_4103) >= 4000)
	{
		func_656(&(Local_4089.f_4103));
		bVar0 = true;
	}
	if (!func_369(2) && !bVar0)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar4 = int_to_participantindex(iVar3);
		if (network_is_participant_active(iVar4) && network_is_player_active(network_get_player_index(iVar4)))
		{
			if ((func_104(64, iVar3) && func_311(Local_920[iVar3]->f_93)) && &Local_13.f_82[Local_920[iVar3]->f_93] < 5)
			{
				iVar2 = Local_920[iVar3]->f_93;
				iVar5 = func_829(iVar3);
				iVar7 = func_182(iVar3);
				bVar8 = false;
				if (Local_13.f_82[iVar2]->f_11 != 255)
				{
					if (Local_13.f_82[iVar2]->f_11 != iVar5)
					{
						iVar9 = network_get_participant_index(Local_13.f_82[iVar2]->f_11);
						if (!func_104(64, iVar9))
						{
							bVar8 = true;
						}
					}
				}
				if (((Local_13.f_82[iVar2]->f_11 == 255 || Local_13.f_82[iVar2]->f_11 == iVar5) || bVar8) || Local_13.f_82[iVar2]->f_3 != iVar7)
				{
					func_830(iVar2, iVar5, iVar7, 0);
					set_bit(&iVar1, iVar2);
				}
			}
			if (func_104(32768, iVar3))
			{
				bVar6 = true;
			}
		}
		iVar3++;
	}
	if (bVar6)
	{
		func_329(32768, 1);
	}
	else
	{
		func_831(32768, 1);
	}
	iVar2 = 0;
	while (iVar2 <= 5)
	{
		if (&Local_13.f_82[iVar2] == 0)
		{
		}
		else
		{
			if (func_453(32, iVar2))
			{
				Local_13.f_82[iVar2]->f_3 = 0;
			}
			if (func_832(4194304, iVar2))
			{
				func_833(4194304, iVar2);
			}
			else
			{
				func_834(4194304, iVar2);
			}
			if (func_835(134217728, iVar2, -1))
			{
				func_833(134217728, iVar2);
			}
			else
			{
				func_834(134217728, iVar2);
			}
			if (func_832(8388608, iVar2))
			{
				func_833(8388608, iVar2);
			}
			else
			{
				func_834(8388608, iVar2);
			}
			if (func_832(33554432, iVar2))
			{
				func_833(33554432, iVar2);
			}
			else
			{
				func_834(33554432, iVar2);
			}
			iVar10 = func_308(iVar2);
			if (bVar0 && does_entity_exist(iVar10))
			{
				*vVar15[iVar2] = { get_entity_coords(iVar10, false, false) };
			}
			switch (Local_13.f_82[iVar2]->f_1)
			{
				case 886638433:
					if (!func_449(Local_4089.f_3393) || func_331(Local_4089.f_3391, 131072))
					{
						iVar11 = Local_13.f_82[iVar2]->f_5;
						if (((&Local_13.f_82[iVar2] < 5 && Local_409.f_1[iVar11]->f_15 != 255) && !is_entity_dead(get_player_ped(Local_409.f_1[iVar11]->f_15))) && !func_836(Local_409.f_1[iVar11]->f_1))
						{
							func_830(iVar2, Local_409.f_1[iVar11]->f_15, func_182(network_get_participant_index(Local_409.f_1[iVar11]->f_15)), 0);
							set_bit(&iVar1, iVar2);
						}
						else if (func_453(32, iVar2))
						{
							set_bit(&iVar1, iVar2);
						}
					}
				case -584819812:
					if ((!is_entity_dead(iVar10) && Local_13.f_1 >= 2) && Local_13.f_1 < 6)
					{
						if ((func_453(134217728, iVar2) && func_453(2097152, iVar2)) && Local_409.f_1[iVar11]->f_15 == 255)
						{
							func_837(32, iVar2);
							bVar12 = true;
						}
						else
						{
							func_838(32, iVar2);
						}
					}
					else
					{
						func_838(32, iVar2);
					}
					break;
			}
			if (Local_13.f_82[iVar2]->f_1 == -584819812)
			{
				if (func_453(32, iVar2) && !func_453(2097152, iVar2))
				{
					func_839(iVar2, 0);
				}
			}
			if (Local_13.f_1 >= 1)
			{
				if ((!func_120(16777216) && &Local_13.f_82[iVar2] < 5) && does_entity_exist(iVar10))
				{
					if (func_28(24))
					{
						bVar14 = true;
						if (!func_840(iVar10))
						{
							bVar13 = true;
						}
					}
				}
			}
			func_841(iVar10, iVar2);
			if (!is_bit_set(iVar1, iVar2))
			{
				func_842(iVar2);
			}
		}
		iVar2++;
	}
	if (bVar12)
	{
		func_236(9, 1, 0);
	}
	else
	{
		func_79(9, 1, 0);
	}
	if (Local_13.f_1 >= 1 && (bVar13 || !bVar14))
	{
		func_329(16777216, 1);
	}
	if (bVar0)
	{
		if (Local_4089.f_4094 != -1 && does_entity_exist(Local_4089.f_6[Local_4089.f_4094]->f_60))
		{
			vVar34 = { get_entity_coords(Local_4089.f_6[Local_4089.f_4094]->f_60, false, false) };
		}
		func_843(Local_4089.f_3391, vVar34, &vVar15);
	}
}

void func_357()
{
	if (!func_369(3))
	{
		return;
	}
	if (!func_120(65536) && func_121(65536, -1, 0))
	{
		func_329(65536, 1);
	}
	if (!func_120(32) && func_121(32, -1, 0))
	{
		func_329(32, 1);
		func_844();
	}
	if (func_121(2097152, 0, 0))
	{
		func_329(2097152, 1);
	}
	else
	{
		func_831(2097152, 1);
	}
	bVar0 = func_451(16777216, 1);
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (func_453(16777216, iVar1))
		{
		}
		else if (bVar0 || func_832(16777216, iVar1))
		{
			func_833(16777216, iVar1);
		}
		iVar1++;
	}
}

void func_358()
{
	if (!func_120(16))
	{
		if (((func_451(4194304, 1) && func_28(177)) || func_121(16, -1, 0)) || (func_28(176) && func_120(8192)))
		{
			func_302(-1);
		}
	}
}

void func_359()
{
	if (!func_120(4194304))
	{
		return;
	}
	if (func_28(111))
	{
		return;
	}
	if (!func_120(16))
	{
		return;
	}
	if (!func_845(22, 1, -1))
	{
		return;
	}
	if (!func_846(&(Local_13.f_388), 10000, 0, 0))
	{
		return;
	}
	func_847();
}

void func_360()
{
	func_848();
	if (Local_13.f_257.f_29 == 0)
	{
		return;
	}
	if (Local_13.f_1 <= 0)
	{
		return;
	}
	iVar0 = &Local_4089.f_4031[29];
	iVar1 = Local_13.f_257[iVar0]->f_3;
	if (iVar1 != -1 && func_849(iVar0) != 6)
	{
		if (func_849(iVar0) >= 4 && !func_850(1, iVar0))
		{
			func_851(iVar0, iVar1);
		}
		if (func_849(iVar0) == 4 && !func_850(8192, iVar0))
		{
			func_852(iVar0, iVar1);
			func_853(iVar0, iVar1);
			func_854(iVar0, iVar1);
		}
		else if (func_849(iVar0) == 5)
		{
			func_853(iVar0, iVar1);
		}
	}
	Local_4089.f_4031[29] = &Local_4089.f_4031[29] + 1;
	if (&Local_4089.f_4031[29] > (Local_13.f_257.f_29 - 1))
	{
		Local_4089.f_4031[29] = 0;
	}
}

void func_361()
{
	if ((*Global_1237665)[Local_4089.f_3391]->f_2 == 3 || (*Global_1237665)[Local_4089.f_3391]->f_2 == -1)
	{
		if (func_331(Local_4089.f_3391, 33554432))
		{
			func_804(3);
		}
		else
		{
			func_804(12);
		}
		return;
	}
	if (func_761(Local_4089.f_3391, 32768, 0))
	{
		return;
	}
	bVar1 = func_121(262144, 0, 0);
	bVar2 = func_855(0, 0);
	if ((func_650(Local_13.f_354) && Local_4089.f_3355.f_21 > 0) && func_856() <= 0)
	{
		bVar3 = true;
	}
	if (func_120(32768) && !func_120(8192))
	{
		bVar0 = true;
	}
	if ((((bVar3 && !func_451(1048576, 1)) && !bVar0) && !func_121(131072, -1, 0)) && ((Local_13.f_359 > 0 || !bVar2) || !bVar1))
	{
		func_804(1);
	}
	else if ((((func_28(80) && func_449(Local_4089.f_3393)) && Local_13.f_1 > 0) && Local_13.f_370 <= 0) && !func_120(8192))
	{
		func_804(8);
	}
	else if (func_857())
	{
		func_804(6);
	}
	else if ((((Local_4089.f_3393 != -1261475678 && Local_4089.f_4081 > 1000) && func_120(32)) && Local_4089.f_3008[0]->f_7 == 0) && (Local_4089.f_3008[1]->f_7 == 0 || &Local_4089.f_3008[1] == 622225714))
	{
		func_804(3);
	}
	else if (func_121(2048, -1, 0) || func_120(2048))
	{
		func_804(9);
	}
	else if (func_28(86) && func_121(524288, -1, 0))
	{
		func_804(10);
	}
	else if (Local_13.f_359 <= 0 && bVar2)
	{
		if (!bVar1 || bVar3)
		{
			func_804(2);
		}
	}
}

void func_362()
{
	if ((((!func_80(func_858(0), 1) && !func_80(func_859(0), 1)) && !func_80(func_860(0), 1)) && !func_80(func_861(0), 1)) && func_862())
	{
		if (Local_4089.f_3393 == -260420884 || Local_4089.f_3393 == 850213441)
		{
			Local_13.f_395 = func_863();
		}
		func_864(1);
	}
}

void func_363()
{
	func_865();
	func_866();
	func_867();
	func_868();
	func_869();
	if (func_870())
	{
		if (func_28(179))
		{
			func_302(-1);
		}
		func_864(2);
	}
	else if (Local_13.f_372 != 0)
	{
		func_864(3);
	}
	else if (func_871())
	{
		func_864(5);
	}
	else if (func_872())
	{
		func_864(4);
	}
}

void func_364()
{
	func_865();
	func_866();
	func_867();
	func_868();
	func_869();
	if (Local_13.f_372 != 0)
	{
		func_864(3);
	}
}

void func_365()
{
	func_865();
	func_866();
	func_867();
	func_868();
	func_869();
	if (Local_13.f_372 == 0)
	{
		if (!func_855(0, 0) && Local_4089.f_3393 == -468635158)
		{
			func_864(5);
		}
		else if (func_870())
		{
			func_302(-1);
			func_864(2);
		}
		else
		{
			func_864(1);
		}
	}
}

void func_366()
{
	func_865();
	func_866();
	func_867();
	func_868();
	func_869();
}

void func_367()
{
	if (((func_28(13) && Local_13.f_2 != 12) && Local_13.f_2 != 15) && Local_13.f_2 != 16)
	{
		return;
	}
	if (func_761(Local_4089.f_3391, 4194304, 0))
	{
		return;
	}
	if (func_873())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (&Local_13.f_226[iVar0] == 0)
			{
				func_874(iVar0);
			}
			iVar0++;
		}
		return;
	}
	if (((((func_858(1) == 0 && func_859(1) == 0) && func_860(1) == 0) && func_861(1) == 0) && func_875(1) == 0) && func_123(4))
	{
		func_876();
		func_122(5, 0);
	}
}

void func_368(int iParam0, int iParam1)
{
	if (!func_143(iParam0))
	{
		return;
	}
	if (!func_53(iParam0, iParam1, 255))
	{
		func_251(&((*(*Global_1238240)[network_player_id_to_int()])[iParam0]->f_19), iParam1);
	}
}

bool func_369(int iParam0)
{
	if (&Local_4089.f_4031[iParam0] < func_877(iParam0))
	{
		Local_4089.f_4031[iParam0] = &Local_4089.f_4031[iParam0] + 1;
		return false;
	}
	Local_4089.f_4031[iParam0] = 0;
	return true;
}

int func_370(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (func_53(Local_4089.f_3391, 32768, iParam0))
	{
		return 0;
	}
	if (func_53(Local_4089.f_3391, 65536, iParam0))
	{
		return 1;
	}
	if (bParam3 && func_28(141))
	{
		return 2;
	}
	if (bParam4 && func_28(144))
	{
		return 3;
	}
	if (func_449(Local_4089.f_3393) && !func_331(Local_4089.f_3391, 131072))
	{
		bVar0 = true;
		if (bParam2)
		{
			return 4;
		}
	}
	iVar1 = network_get_participant_index(int_to_playerindex(iParam0));
	iVar2 = func_182(iVar1);
	if (iVar2 == 1)
	{
		if (((func_805() && Local_13.f_391 != 0) && Local_13.f_391 != _0x901e0dc25080c8b9(int_to_playerindex(iParam0))) && Local_4089.f_3393 != 1427578635)
		{
			return 5;
		}
	}
	if (bParam1)
	{
		if (func_878(iVar1, 1) == 0)
		{
			if (bParam2 || !bVar0)
			{
				return 6;
			}
		}
	}
	if (!func_879(Local_4089.f_3391, iParam0, 0, !bParam2))
	{
		return 7;
	}
	return -1;
}

bool func_371(int iParam0, var uParam1)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	*uParam1 = func_880(0, 8);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (_0x72b2e00c9bac6789(uParam1, iVar0))
		{
			if (iParam0 == int_to_playerindex(iVar0))
			{
				_0xd426e2e3288469d6(uParam1, iVar0);
			}
			else if (!func_879(Local_4089.f_3391, iVar0, 0, 0))
			{
				_0xd426e2e3288469d6(uParam1, iVar0);
			}
		}
		iVar0++;
	}
	return true;
}

bool func_372(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return false;
	}
	return true;
}

bool func_373(int iParam0, int iParam1)
{
	if (iParam1 != 255)
	{
		return ((*Global_1145091)[iParam1]->f_23.f_10 && iParam0) != 0;
	}
	return (Global_1139381->f_4779.f_10 && iParam0) != 0;
}

void func_374(int iParam0)
{
	if (!func_148(iParam0, -1))
	{
		func_105(&(Local_920[participant_id_to_int()]->f_91), iParam0);
	}
}

void func_375(int iParam0)
{
	if (func_148(iParam0, -1))
	{
		func_511(&(Local_920[participant_id_to_int()]->f_91), iParam0);
	}
}

bool func_376()
{
	if (!func_28(0))
	{
		MemCopy(&uVar1, {func_35(func_34(Local_4089.f_3392))}, 1);
		if (is_string_null_or_empty(&uVar1))
		{
			func_236(0, 1, 0);
		}
		else if (_does_text_database_exist(&uVar1))
		{
			_text_database_request(&uVar1);
			if (!_text_database_has_loaded(&uVar1))
			{
				return false;
			}
			func_236(0, 1, 0);
		}
		else
		{
			func_129(5);
			return false;
		}
	}
	if (!func_881())
	{
		return false;
	}
	if (!func_882())
	{
		bVar0 = true;
	}
	if (!func_38(1))
	{
		bVar0 = true;
	}
	if (!func_883())
	{
		bVar0 = true;
	}
	if (!func_884())
	{
		bVar0 = true;
	}
	if (!func_885())
	{
		bVar0 = true;
	}
	return !bVar0;
}

int func_377()
{
	iVar0 = func_730(&(Local_4089.f_3355));
	iVar2 = 0;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar3 = func_731(&(Local_4089.f_3355), iVar2);
		if (!func_732(&(Local_4089.f_3355), iVar3))
		{
		}
		else if (!func_733(-970979849, iVar2, 0, -1))
		{
		}
		else
		{
			if (iVar1 >= 15)
			{
				return 0;
			}
			Local_4089.f_1554[iVar1]->f_1 = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	return 1;
}

void func_378()
{
	iVar0 = func_886(&(Local_4089.f_3355), -1292944427, -1, -801742902, 0, 0, 0, 0, 0);
	iVar1 = func_886(&(Local_4089.f_3355), 843728831, -1, -801742902, 0, 0, 0, 0, 0);
	if (iVar0 < 0 && iVar1 < 0)
	{
		func_887(&(Local_4089.f_4112), 15000);
	}
	else
	{
		if (iVar0 > iVar1)
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
			else
			{
				iVar0 = iVar1;
			}
		}
		if (iVar0 == iVar1)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar2 = get_random_int_in_range(iVar0, iVar1);
		}
		func_887(&(Local_4089.f_4112), iVar2);
	}
}

void func_379()
{
	iVar7 = func_888(&(Local_4089.f_3355));
	iVar2 = 0;
	while (iVar2 <= (iVar7 - 1))
	{
		if (iVar2 >= 33)
		{
			return;
		}
		iVar0 = iVar2;
		iVar6 = func_889(&(Local_4089.f_3355), iVar0);
		iVar1 = func_890(iVar0);
		iVar5 = func_891(&(Local_4089.f_3355), iVar6, iVar1);
		iVar4 = 1;
		if (!func_791(&(Local_4089.f_3355), iVar0))
		{
		}
		else
		{
			if (func_892(&(Local_4089.f_3355), iVar5) > 0 && func_591(&(Local_4089.f_3355), 1203692200, 0, 637011744, iVar6, 0, 0, 0, 0, 0) == -1141244111)
			{
				iVar4 = 6;
			}
			while (iVar4 > 0)
			{
				Local_4089.f_2190[iVar3]->f_13 = iVar6;
				Local_4089.f_2190[iVar3]->f_14 = iVar5;
				if (func_893(&(Local_4089.f_3355), iVar3) != 0)
				{
					func_894(268435456, iVar3);
				}
				iVar4 = (iVar4 - 1);
				iVar3++;
			}
		}
		iVar2++;
	}
	Local_4089.f_3008[0]->f_2 = func_896(func_895(&(Local_4089.f_3355)), -1);
	Local_4089.f_3008[1]->f_2 = func_896(func_897(&(Local_4089.f_3355)), -1);
}

void func_380()
{
	iVar1 = func_898(&(Local_4089.f_3355));
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar0 >= 5)
		{
			return;
		}
		Local_4089.f_1601[iVar0] = 1;
		iVar0++;
	}
}

void func_381()
{
	iVar2 = -1;
	Local_4089.f_3355.f_14 = func_899(&(Local_4089.f_3355));
	if (iVar0 > 10)
	{
		Local_4089.f_3355.f_14 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_14 - 1))
	{
		Local_4089.f_3027[iVar0]->f_5 = func_900(&(Local_4089.f_3355), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_14 - 1))
	{
		Local_4089.f_3027[iVar0]->f_9 = func_901(&(Local_4089.f_3355), iVar0);
		Local_4089.f_3027[iVar0]->f_10 = func_902(&(Local_4089.f_3355), iVar0);
		Local_4089.f_3027[iVar0]->f_8 = func_903(&(Local_4089.f_3355), iVar0);
		Local_4089.f_3027[iVar0]->f_7 = func_904(&(Local_4089.f_3355), iVar0);
		iVar3 = 0;
		while (iVar3 <= (Local_4089.f_3027[iVar0]->f_7 - 1))
		{
			iVar4 = func_905(&(Local_4089.f_3355), iVar0, iVar3);
			switch (iVar4)
			{
				case 1439972775:
					func_236(152, 1, 0);
					break;
				case 1765390339:
					func_236(153, 1, 0);
					break;
				case -4678805:
					func_236(111, 1, 0);
					break;
				case -1900160848:
					iVar2 = func_896(func_906(&(Local_4089.f_3355), iVar0, iVar3), -1);
					if (iVar2 != -1)
					{
						func_894(4, iVar2);
					}
					break;
				case 645962659:
					bVar5 = true;
					break;
				case -999267128:
				case 689944810:
					func_236(114, 1, 0);
					break;
				case -303524234:
					func_907(iVar0, iVar3);
					break;
			}
			iVar3++;
		}
		if (func_908(&(Local_4089.f_3355), iVar0))
		{
			func_909(16, iVar0);
		}
		if (func_910(&(Local_4089.f_3355), iVar0))
		{
			func_909(32, iVar0);
		}
		if (func_911(&(Local_4089.f_3355), iVar0))
		{
			func_909(64, iVar0);
		}
		if (func_912(&(Local_4089.f_3355), iVar0))
		{
			func_909(128, iVar0);
		}
		if (func_913(&(Local_4089.f_3355), iVar0))
		{
			func_909(256, iVar0);
		}
		if (func_914(&(Local_4089.f_3355), iVar0))
		{
			func_909(512, iVar0);
		}
		if (func_915(&(Local_4089.f_3355), iVar0))
		{
			func_909(131072, iVar0);
		}
		if (func_916(&(Local_4089.f_3355), iVar0))
		{
			if (Local_4089.f_3027[iVar0]->f_3 == -1)
			{
				Local_4089.f_3027[iVar0]->f_3 = func_917(&(Local_4089.f_3355), iVar0);
				func_909(1024, iVar0);
			}
		}
		iVar1 = func_918(&(Local_4089.f_3355), iVar0);
		if (iVar1 != 0)
		{
			iVar1 = func_919(iVar1);
			if (iVar1 != -1)
			{
				Local_4089.f_3027[iVar0]->f_6 = iVar1;
			}
		}
		iVar0++;
	}
	if (!bVar5 && func_920(&(Local_4089.f_3355)))
	{
		func_236(83, 1, 0);
	}
}

void func_382()
{
	iVar1 = func_73(&(Local_4089.f_3355));
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_921(&(Local_4089.f_3355), iVar0))
		{
		}
		else
		{
			func_253(iVar0, 1);
		}
		iVar0++;
	}
}

void func_383()
{
	iVar1 = func_922(&(Local_4089.f_3355));
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar0 >= 15)
		{
		}
		else
		{
			vVar2 = { func_923(&(Local_4089.f_3355), iVar0) };
			fVar5 = func_924(&(Local_4089.f_3355), iVar0);
			iVar6 = func_925(&(Local_4089.f_3355), iVar0);
			iVar7 = func_926(&(Local_4089.f_3355), iVar0);
			if (iVar7 == 0)
			{
				iVar7 = 318;
			}
			func_928(Local_4089.f_1585[iVar0], vVar2, fVar5, func_927(iVar6), iVar7, 0);
			iVar0++;
		}
	}
}

void func_384()
{
	if (func_929(&(Local_4089.f_3355)))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		func_930(iVar0);
		iVar0++;
	}
}

void func_385()
{
	if (!func_28(74))
	{
		Var0 = { func_931(&(Local_4089.f_3355)) };
		Var16 = { func_78(&(Local_4089.f_3355)) };
		if (!is_string_null_or_empty(&Var0) && !is_string_null_or_empty(&Var16))
		{
			_0x6339c1ea3979b5f7(&Var0, &Var16);
			func_236(74, 1, 0);
		}
	}
}

bool func_386()
{
	if (Local_4089.f_3393 == 195932838)
	{
		return true;
	}
	return false;
}

void func_387()
{
	_0xe1f389f03dc83673();
}

void func_388()
{
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (!func_790(iVar0))
		{
		}
		else
		{
			func_932(iVar0);
			if (func_933(Local_4089.f_2190[iVar0]->f_7))
			{
				bVar1 = true;
			}
			if (func_934(Local_4089.f_2190[iVar0]->f_7))
			{
				bVar2 = true;
			}
		}
		iVar0++;
	}
	if (!bVar1)
	{
		func_935(-1, 1, 0);
	}
	if (!bVar2)
	{
		func_236(19, 1, 0);
	}
}

bool func_389()
{
	iVar0 = Local_4089.f_3968;
	while (iVar0 <= 14)
	{
		if (Local_4089.f_1554[iVar0]->f_1 == -1)
		{
			Local_4089.f_3968++;
		}
		else
		{
			iVar2 = Local_4089.f_1554[iVar0]->f_1;
			iVar3 = func_731(&(Local_4089.f_3355), iVar2);
			if (does_entity_exist(&(Local_4089.f_1554[iVar0])))
			{
				Local_4089.f_3968++;
			}
			else
			{
				iVar1 = func_748(&(Local_4089.f_3355), iVar3);
				if (iVar1 == 0)
				{
					Local_4089.f_3967++;
				}
				else
				{
					vVar4 = { func_750(&(Local_4089.f_3355), iVar2) };
					vVar7 = { func_751(&(Local_4089.f_3355), iVar2) };
					func_745(vVar4);
					Local_4089.f_1554[iVar0] = create_object(iVar1, vVar4, false, false, false, false, true);
					iVar10 = &Local_4089.f_1554[iVar0];
					if (func_752(&(Local_4089.f_3355), iVar3))
					{
						_0xebdc12861d079aba(iVar10, 1);
					}
					set_entity_rotation(iVar10, vVar7, 2, true);
					if (!func_753(&(Local_4089.f_3355), iVar3))
					{
						func_936(iVar0);
					}
					if (func_757(&(Local_4089.f_3355), iVar2))
					{
						func_758(iVar10, 1, 1, 0);
						set_entity_can_be_damaged(iVar10, false);
						set_entity_invincible(iVar10, true);
						set_entity_proofs(iVar10, 159, false);
					}
					func_760(iVar10);
					Local_4089.f_3968++;
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_390()
{
	iVar14 = -1;
	iVar18 = -1;
	Local_4089.f_3355.f_14 = func_899(&(Local_4089.f_3355));
	if (iVar0 > 10)
	{
		Local_4089.f_3355.f_14 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_14 - 1))
	{
		if (func_937(1, iVar0, 255))
		{
		}
		else if (!func_938(iVar0))
		{
		}
		else
		{
			switch (Local_4089.f_3027[iVar0]->f_9)
			{
				case -344612993:
				case -287666159:
					Local_4089.f_3027[iVar0] = floor(func_939(&(Local_4089.f_3355), iVar0));
					Local_4089.f_3027[iVar0]->f_1 = floor(func_940(&(Local_4089.f_3355), iVar0));
					if (IntToFloat(Local_4089.f_3027[iVar0]->f_1) == 0f)
					{
						Local_4089.f_3027[iVar0]->f_1 = &Local_4089.f_3027[iVar0];
					}
					break;
				case -61562429:
				case 45664693:
					Local_4089.f_3027[iVar0] = floor(func_939(&(Local_4089.f_3355), iVar0));
					Local_4089.f_3027[iVar0]->f_1 = floor(func_940(&(Local_4089.f_3355), iVar0));
					Local_4089.f_3027[iVar0]->f_2 = func_941(&(Local_4089.f_3355), iVar0);
					if (IntToFloat(Local_4089.f_3027[iVar0]->f_1) == 0f)
					{
						Local_4089.f_3027[iVar0]->f_1 = &Local_4089.f_3027[iVar0];
					}
					break;
				case -2143433429:
				case -1571690055:
				case -1397109086:
				case 570415588:
				case 1299977808:
					iVar12 = func_942(&(Local_4089.f_3355), iVar0);
					iVar1 = func_941(&(Local_4089.f_3355), iVar0);
					if (!func_943(iVar12))
					{
						return true;
					}
					func_944(iVar12, iVar1, -1, &iVar13, &uVar2);
					Local_4089.f_3027[iVar0] = uVar2;
					Local_4089.f_3027[iVar0]->f_1 = floor(func_939(&(Local_4089.f_3355), iVar0));
					Local_4089.f_3027[iVar0]->f_2 = floor(func_940(&(Local_4089.f_3355), iVar0));
					if (IntToFloat(Local_4089.f_3027[iVar0]->f_2) == 0f)
					{
						Local_4089.f_3027[iVar0]->f_2 = Local_4089.f_3027[iVar0]->f_1;
					}
					break;
				case -1015271255:
				case -314855965:
				case 612320729:
					iVar12 = func_942(&(Local_4089.f_3355), iVar0);
					iVar1 = func_941(&(Local_4089.f_3355), iVar0);
					if (!func_943(iVar12))
					{
						return true;
					}
					func_944(iVar12, iVar1, -1, &iVar13, &uVar2);
					Local_4089.f_3027[iVar0] = iVar13;
					Local_4089.f_3027[iVar0]->f_1 = uVar2;
					break;
				case -2036738250:
				case -1712243753:
				case -1709885497:
				case -1390639620:
				case -1054519634:
				case -606421668:
				case -590799843:
				case -512395122:
				case 339660027:
				case 357203046:
				case 431667847:
				case 965721201:
				case 1584822246:
					iVar14 = func_896(func_945(&(Local_4089.f_3355), iVar0), -1);
					Local_4089.f_3027[iVar0] = iVar14;
					if ((Local_4089.f_3027[iVar0]->f_9 == 357203046 || Local_4089.f_3027[iVar0]->f_9 == -1712243753) || Local_4089.f_3027[iVar0]->f_9 == 339660027)
					{
						Local_4089.f_3027[iVar0]->f_1 = func_946(&(Local_4089.f_3355), iVar0);
					}
					else if (Local_4089.f_3027[iVar0]->f_9 == -1054519634)
					{
						Local_4089.f_3027[iVar0]->f_1 = func_947(&(Local_4089.f_3355), iVar0);
					}
					break;
				case -1976438468:
				case 859023517:
					iVar14 = func_896(func_945(&(Local_4089.f_3355), iVar0), -1);
					iVar6 = func_948(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0] = iVar14;
					Local_4089.f_3027[iVar0]->f_1 = iVar6;
					Local_4089.f_3027[iVar0]->f_2 = 0;
					break;
				case -126785758:
					Local_4089.f_3027[iVar0] = floor(func_939(&(Local_4089.f_3355), iVar0));
					break;
				case -1938866227:
				case -959668501:
				case -797396414:
					iVar6 = func_948(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0] = iVar6;
					Local_4089.f_3027[iVar0]->f_1 = 0;
					break;
				case -1888471931:
					Local_4089.f_3027[iVar0] = func_949(&(Local_4089.f_3355), iVar0);
					if (!func_950(&(Local_4089.f_3027[iVar0])))
					{
						return true;
					}
					break;
				case 915513039:
					iVar6 = func_948(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0] = func_949(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0]->f_1 = iVar6;
					Local_4089.f_3027[iVar0]->f_2 = 0;
					if (!func_950(&(Local_4089.f_3027[iVar0])))
					{
						return true;
					}
					break;
				case -1873875307:
				case -901007369:
				case 106427530:
				case 999882571:
					iVar14 = func_896(func_945(&(Local_4089.f_3355), iVar0), -1);
					iVar1 = func_941(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0] = iVar14;
					Local_4089.f_3027[iVar0]->f_1 = iVar1;
					break;
				case 289442064:
				case 1582517393:
					iVar1 = func_941(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0] = iVar1;
					break;
				case -451064484:
				case 312514335:
					Local_4089.f_3027[iVar0] = func_941(&(Local_4089.f_3355), iVar0);
					iVar14 = func_896(func_945(&(Local_4089.f_3355), iVar0), -1);
					Local_4089.f_3027[iVar0]->f_1 = iVar14;
					if (_does_volume_exist(&(Local_4089.f_2190[iVar14])))
					{
						fVar10 = func_939(&(Local_4089.f_3355), iVar0);
						fVar11 = func_940(&(Local_4089.f_3355), iVar0);
						iVar19 = get_random_int_in_range(ceil(fVar10), ceil(fVar11));
						Local_4089.f_3027[iVar0]->f_2 = ceil(func_951(func_792(Local_4089.f_3391), _0xf70f00013a62f866(&(Local_4089.f_2190[iVar14])), iVar19));
					}
					break;
				case -1698888011:
				case -251942868:
				case 103534249:
				case 1044601310:
				case 1374828611:
					iVar1 = func_941(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0] = iVar1;
					break;
				case 24879117:
					iVar13 = func_952(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0] = iVar13;
					break;
				case 1017500156:
					iVar1 = func_941(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0] = iVar1;
					iVar6 = func_948(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0]->f_1 = iVar6;
					Local_4089.f_3027[iVar0]->f_2 = 0;
					break;
				case -1227483490:
				case -837962322:
				case -702707738:
				case 56899179:
				case 919564924:
				case 1028905573:
				case 1375770998:
					Local_4089.f_3027[iVar0] = func_946(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0]->f_1 = 0;
					Local_4089.f_3027[iVar0]->f_2 = -1;
					iVar3 = 0;
					while (iVar3 <= (Local_4089.f_3355.f_10 - 1))
					{
						iVar4 = func_953(&(Local_4089.f_3355), iVar3);
						iVar1 = 0;
						while (iVar1 <= (iVar4 - 1))
						{
							if (func_954(Local_4089.f_3355, 477970332, iVar1, iVar3, 1936493609, Local_4089.f_3027[iVar0]->f_5, 0))
							{
								set_bit(&(Local_4089.f_3027[iVar0]->f_1), iVar3);
							}
							else
							{
								iVar1++;
							}
						}
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 <= (Local_4089.f_3355.f_12 - 1))
					{
						iVar4 = func_955(&(Local_4089.f_3355), iVar3);
						iVar1 = 0;
						while (iVar1 <= (iVar4 - 1))
						{
							if (func_954(Local_4089.f_3355, -2067454306, iVar1, iVar3, 1936493609, Local_4089.f_3027[iVar0]->f_5, 0))
							{
								set_bit(&(Local_4089.f_3027[iVar0]->f_1), iVar3);
							}
							else
							{
								iVar1++;
							}
						}
						iVar3++;
					}
					Local_4089.f_3027[iVar0]->f_2 = iVar18;
					if (Local_4089.f_3027[iVar0]->f_9 == 1028905573)
					{
						iVar14 = func_896(func_945(&(Local_4089.f_3355), iVar0), -1);
						Local_4089.f_3027[iVar0]->f_3 = iVar14;
						Local_4089.f_3027[iVar0]->f_4 = 0;
					}
					break;
				case -204602974:
				case 867166707:
					Local_4089.f_3027[iVar0] = 0;
					iVar1 = 0;
					while (iVar1 <= (Local_4089.f_3355.f_9 - 1))
					{
						if (func_954(Local_4089.f_3355, -428150648, iVar1, -1, 1936493609, Local_4089.f_3027[iVar0]->f_5, 0))
						{
							set_bit(Local_4089.f_3027[iVar0], iVar1);
							iVar9++;
						}
						iVar1++;
					}
					if (Local_4089.f_3027[iVar0]->f_9 == -204602974)
					{
						Local_4089.f_3027[iVar0]->f_1 = func_946(&(Local_4089.f_3355), iVar0);
						iVar7 = func_956(0, 1);
						iVar8 = func_886(&(Local_4089.f_3355), -385743254, Local_4089.f_2968.f_4, -2021955256, iVar0, 0, 0, 0, 0);
						Local_4089.f_3027[iVar0]->f_1 = (Local_4089.f_3027[iVar0]->f_1 + ((iVar7 - 1) * iVar8));
						if (Local_4089.f_3027[iVar0]->f_1 > iVar9)
						{
							Local_4089.f_3027[iVar0]->f_1 = iVar9;
						}
					}
					break;
				case 1207551915:
				case 1999154129:
					Local_4089.f_3027[iVar0] = func_942(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0]->f_1 = func_941(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0]->f_2 = func_957(&(Local_4089.f_3355), iVar0);
					break;
				case -1326123272:
				case -331761791:
					Local_4089.f_3027[iVar0] = func_946(&(Local_4089.f_3355), iVar0);
					break;
				case 1455569141:
					Local_4089.f_3027[iVar0] = func_946(&(Local_4089.f_3355), iVar0);
					break;
				case -485511564:
				case 976292483:
					iVar14 = func_896(func_945(&(Local_4089.f_3355), iVar0), -1);
					iVar1 = func_941(&(Local_4089.f_3355), iVar0);
					func_944(-428150648, iVar1, -1, &iVar13, &uVar2);
					Local_4089.f_3027[iVar0] = iVar14;
					Local_4089.f_3027[iVar0]->f_1 = uVar2;
					break;
				case 970315276:
					Local_4089.f_3027[iVar0] = func_941(&(Local_4089.f_3355), iVar0);
					Local_4089.f_3027[iVar0]->f_1 = func_958(&(Local_4089.f_3355), iVar0);
					break;
				case 549139256:
				case 1189116603:
					Local_4089.f_3027[iVar0] = func_946(&(Local_4089.f_3355), iVar0);
					break;
				case 1284358400:
					Local_4089.f_3027[iVar0] = func_947(&(Local_4089.f_3355), iVar0);
					break;
				case -407206400:
					Local_4089.f_3027[iVar0] = func_947(&(Local_4089.f_3355), iVar0);
					break;
				case -1986914328:
				case -1866153163:
				case 1099625289:
					iVar12 = func_942(&(Local_4089.f_3355), iVar0);
					iVar1 = func_941(&(Local_4089.f_3355), iVar0);
					iVar3 = func_957(&(Local_4089.f_3355), iVar0);
					if (iVar12 == 0 || iVar1 == -1)
					{
					}
					else
					{
						Local_4089.f_3027[iVar0] = iVar12;
						Local_4089.f_3027[iVar0]->f_1 = iVar1;
						Local_4089.f_3027[iVar0]->f_2 = iVar3;
						Jump @3580; //curOff = 3030
						Local_4089.f_3027[iVar0] = func_942(&(Local_4089.f_3355), iVar0);
						Local_4089.f_3027[iVar0]->f_1 = func_941(&(Local_4089.f_3355), iVar0);
						Jump @3580; //curOff = 3079
						Local_4089.f_3027[iVar0] = func_942(&(Local_4089.f_3355), iVar0);
						Local_4089.f_3027[iVar0]->f_1 = func_941(&(Local_4089.f_3355), iVar0);
						Local_4089.f_3027[iVar0]->f_2 = func_957(&(Local_4089.f_3355), iVar0);
						Jump @3580; //curOff = 3154
						iVar1 = func_941(&(Local_4089.f_3355), iVar0);
						fVar10 = func_939(&(Local_4089.f_3355), iVar0);
						vVar15 = { func_959(&(Local_4089.f_3355), iVar0) };
						if (iVar1 < 0)
						{
						}
						else if (fVar10 <= 0f)
						{
						}
						else if (func_67(vVar15))
						{
						}
						else
						{
							Local_4089.f_3027[iVar0] = iVar1;
							Local_4089.f_3027[iVar0]->f_1 = floor(fVar10);
							Local_4089.f_3027[iVar0]->f_2 = func_960(vVar15);
							Jump @3580; //curOff = 3284
							Local_4089.f_3027[iVar0] = func_946(&(Local_4089.f_3355), iVar0);
							iVar7 = func_956(0, 1);
							iVar8 = func_886(&(Local_4089.f_3355), -385743254, Local_4089.f_2968.f_4, -2021955256, iVar0, 0, 0, 0, 0);
							Local_4089.f_3027[iVar0] = (&Local_4089.f_3027[iVar0] + ((iVar7 - 1) * iVar8));
							Jump @3580; //curOff = 3381
							iVar14 = func_896(func_945(&(Local_4089.f_3355), iVar0), -1);
							Local_4089.f_3027[iVar0] = iVar14;
							Jump @3580; //curOff = 3415
							Local_4089.f_3027[iVar0] = func_961(&(Local_4089.f_3355), iVar0);
							Jump @3580; //curOff = 3440
							Local_4089.f_3027[iVar0] = 0;
							Jump @3580; //curOff = 3454
							Local_4089.f_3027[iVar0] = func_947(&(Local_4089.f_3355), iVar0);
							Jump @3580; //curOff = 3479
							Local_4089.f_3027[iVar0] = func_941(&(Local_4089.f_3355), iVar0);
							Local_4089.f_3027[iVar0]->f_1 = func_962(&(Local_4089.f_3355), iVar0);
							Jump @3580; //curOff = 3528
							Local_4089.f_3027[iVar0] = func_941(&(Local_4089.f_3355), iVar0);
							Local_4089.f_3027[iVar0]->f_1 = func_962(&(Local_4089.f_3355), iVar0);
							func_909(1, iVar0);
						}
					}
					iVar0++;
					iVar3 = 0;
					while (iVar3 <= (Local_4089.f_3355.f_10 - 1))
					{
						iVar5 = func_963(&(Local_4089.f_3355), iVar3);
						if (iVar5 != 0)
						{
							iVar5 = func_919(iVar5);
							if (iVar5 != -1)
							{
								Local_4089.f_2105[iVar3]->f_1 = iVar5;
							}
						}
						iVar3++;
					}
					return true;
					default:
						break;
			}
		}
	}
}

bool func_391()
{
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_14 - 1))
	{
		if (func_937(262144, iVar0, 255))
		{
			iVar1 = 0;
			while (iVar1 <= (Local_4089.f_3027[iVar0]->f_7 - 1))
			{
				iVar2 = func_905(&(Local_4089.f_3355), iVar0, iVar1);
				switch (iVar2)
				{
					case -303524234:
						if (!func_907(iVar0, iVar1))
						{
							iVar3 = 0;
						}
						break;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_392(bool bParam0)
{
	Var0.f_3 = -1;
	Var0.f_5 = -1;
	_copy_memory(&(Local_4089.f_2148), &Var0, 8);
	Local_4089.f_2148.f_1 = func_964(&(Local_4089.f_3355), bParam0);
	Local_4089.f_2148.f_3 = func_965(&(Local_4089.f_3355), bParam0);
	Local_4089.f_2148.f_4 = func_966(&(Local_4089.f_3355), bParam0);
	Local_4089.f_2148.f_6 = func_967(&(Local_4089.f_3355), bParam0);
	func_968(bParam0);
	if (func_969(&(Local_4089.f_3355), bParam0))
	{
		func_970(1);
	}
	if (func_971(&(Local_4089.f_3355), bParam0))
	{
		func_970(2);
	}
	if (func_972(&(Local_4089.f_3355), bParam0))
	{
		func_970(32);
	}
	if ((&Local_4089.f_3008[1] == 493038497 || func_973(&(Local_4089.f_3355), bParam0)) || func_974(bParam0))
	{
		func_970(4);
	}
	if (func_975(&(Local_4089.f_3355), bParam0))
	{
		func_970(64);
	}
	if (func_976(&(Local_4089.f_3355), bParam0))
	{
		func_970(128);
	}
	iVar8 = func_977(&(Local_4089.f_3355), bParam0);
	if (iVar8 != 0)
	{
		iVar8 = func_919(iVar8);
		if (iVar8 != -1)
		{
			Local_4089.f_2148.f_5 = iVar8;
		}
	}
	Local_4089.f_2148.f_7 = bParam0;
	func_970(512);
}

void func_393()
{
	Local_4089.f_3355.f_15 = func_978(&(Local_4089.f_3355));
	if (Local_4089.f_3355.f_15 > 4)
	{
		Local_4089.f_3355.f_15 = 4;
	}
	Local_4089.f_3966 = Local_4089.f_3355.f_15;
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_15 - 1))
	{
		Local_4089.f_3138[iVar0]->f_2 = func_979(&(Local_4089.f_3355), iVar0);
		Local_4089.f_3138[iVar0] = func_980(&(Local_4089.f_3355), iVar0);
		Local_4089.f_3138[iVar0]->f_6 = func_981(&(Local_4089.f_3355), iVar0);
		Local_4089.f_3138[iVar0]->f_7 = func_982(&(Local_4089.f_3355), iVar0);
		Local_4089.f_3138[iVar0]->f_5 = func_983(&(Local_4089.f_3355), iVar0);
		iVar1 = func_984(&(Local_4089.f_3355), iVar0);
		iVar2 = func_985(&(Local_4089.f_3355), iVar0);
		if (func_986(&(Local_4089.f_3355), iVar0) > 0)
		{
			func_987(4, iVar0);
			if (func_988(&(Local_4089.f_3355), iVar0, 1018445913))
			{
				func_987(8, iVar0);
			}
		}
		if (func_989(&(Local_4089.f_3355), iVar0))
		{
			func_987(16, iVar0);
		}
		iVar3 = 0;
		while (iVar3 <= (Local_4089.f_3355.f_14 - 1))
		{
			if (Local_4089.f_3027[iVar3]->f_5 == iVar1)
			{
				Local_4089.f_3138[iVar0]->f_3 = iVar3;
			}
			if (Local_4089.f_3027[iVar3]->f_5 == iVar2)
			{
				if (iVar3 != Local_4089.f_3138[iVar0]->f_3)
				{
					Local_4089.f_3138[iVar0]->f_4 = iVar3;
				}
			}
			iVar3++;
		}
		iVar0++;
	}
}

void func_394()
{
	if (func_761(Local_4089.f_3391, 32768, 0))
	{
		return;
	}
	iVar0 = func_762(&(Local_4089.f_3355));
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			iVar2 = 0;
			while (iVar2 <= 1)
			{
				Local_4089.f_1622[iVar1]->f_2[iVar2]->f_12 = -1;
				iVar2++;
			}
			if (iVar1 >= iVar0)
			{
			}
			else if (&Local_13.f_82[iVar1] == 0)
			{
			}
			else
			{
				func_990(1, iVar1);
				if (func_991(&(Local_4089.f_3355), iVar1))
				{
					Local_4089.f_1622[iVar1]->f_53 = func_992(&(Local_4089.f_3355), iVar1);
					Local_4089.f_1622[iVar1]->f_54 = func_993(Local_4089.f_1622[iVar1]->f_53);
					func_837(8192, iVar1);
				}
				func_994(iVar1);
				if (!func_995(iVar1, 0))
				{
					Local_4089.f_4124++;
				}
			}
			iVar1++;
		}
	}
}

void func_395()
{
	if (Local_4089.f_3355.f_9 <= 0)
	{
		return;
	}
	if (func_28(97))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_9 - 1))
	{
		if (func_218(&(Local_4089.f_3355), 491333121, 0, -1417610999, iVar0, 0, 0, 0, 0))
		{
			func_236(97, 1, 0);
		}
		iVar0++;
	}
}

void func_396()
{
	if (Local_4089.f_3355.f_13 <= 0)
	{
		return;
	}
	if (func_28(97))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_13 - 1))
	{
		if (func_218(&(Local_4089.f_3355), 491333121, 0, 717522528, iVar0, 0, 0, 0, 0))
		{
			func_236(97, 1, 0);
		}
		iVar0++;
	}
}

void func_397()
{
	iVar0 = func_783(&(Local_4089.f_3355));
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (func_218(&(Local_4089.f_3355), 491333121, 0, -622270828, iVar1, 0, 0, 0, 0))
			{
				func_236(97, 1, 0);
			}
			iVar1++;
		}
	}
}

void func_398()
{
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_25 - 1))
	{
		if (!func_189(iVar0))
		{
			(*Global_1248240)[Local_4089.f_3391]->f_19[iVar0] = -1;
			func_186(iVar0);
			func_187(iVar0);
		}
		else
		{
			if (func_178(128, iVar0))
			{
				func_236(105, 1, 0);
			}
			func_996(1, iVar0, 1);
		}
		iVar0++;
	}
	func_20(8388608, 1, 0);
}

void func_399()
{
	if (func_28(123))
	{
		func_997();
	}
}

bool func_400(int iParam0)
{
	if (Local_4089.f_1 != iParam0)
	{
		Local_4089.f_1 = iParam0;
		return true;
	}
	return false;
}

void func_401()
{
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		if (network_does_network_id_exist(&(Local_13.f_60[iVar1])))
		{
			func_998(&(Local_13.f_60[iVar1]));
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
	}
}

void func_402()
{
	if (!func_999(512) || Local_4089.f_2148.f_7 != Local_13.f_369)
	{
		func_392(Local_13.f_369);
	}
}

void func_403()
{
	iVar0 = func_1000(Local_4089.f_4112);
	if (iVar0 < 0)
	{
		func_378();
		func_79(71, 1, 0);
		iVar1 = 0;
		while (iVar1 <= 32)
		{
			func_536(1073741824, iVar1);
			iVar1++;
		}
	}
}

void func_404()
{
	if (func_182(255) == 0)
	{
		return;
	}
	if (func_369(18))
	{
		Local_4089.f_3229 = uVar0;
		fVar3 = 9999.9f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (network_is_participant_active(int_to_participantindex(iVar1)))
			{
				iVar2 = func_829(iVar1);
				if (func_182(iVar1) == 0 || func_104(64, iVar1))
				{
					_0x31010318ba9897ac(&(Local_4089.f_3229), iVar2);
				}
				if (func_104(32, iVar1))
				{
					_0x31010318ba9897ac(&(Local_4089.f_3229.f_1), iVar2);
				}
				if (_0x81fb74c83c2ed69f(int_to_playerindex(iVar2)))
				{
					if (Local_920[iVar1]->f_98 < fVar3)
					{
						fVar3 = Local_920[iVar1]->f_98;
					}
					bVar4 = true;
				}
			}
			iVar1++;
		}
		if (!bVar4)
		{
			fVar3 = -1f;
		}
		(*Global_1248240)[Local_4089.f_3391]->f_587 = fVar3;
	}
}

void func_405()
{
	if (Local_4089.f_1 < 1 || Local_4089.f_1 >= 6)
	{
		return;
	}
	if (func_53(Local_4089.f_3391, 16, 255))
	{
		return;
	}
	if (Local_4089.f_3008[0]->f_1 <= 1 && !func_1001(Local_4089.f_3391, 255))
	{
		return;
	}
	if (func_1002(Local_4089.f_3391, 255) == 3)
	{
		return;
	}
	iVar1 = func_182(255);
	if (((iVar1 == 0 && !func_104(8192, 255)) && func_330(Local_4089.f_3393, 0)) && func_120(8192))
	{
		func_1003();
	}
	if (!func_53(Local_4089.f_3391, 16, 255) && func_104(8192, 255))
	{
		iVar2 = 2;
	}
	if (func_53(Local_4089.f_3391, 32, 255))
	{
		iVar2 = 1;
	}
	if (iVar1 == 0)
	{
		iVar2 = 3;
		if (func_1004() && !func_53(Local_4089.f_3391, 32, 255))
		{
			if (!func_1005())
			{
				return;
			}
			else
			{
				iVar3 = 2;
				func_1003();
			}
		}
		if (func_451(32, 1))
		{
			iVar3 = 8;
		}
		else if (&Local_4089.f_3008[0] == -1029285341 || &Local_4089.f_3008[0] == 622225714)
		{
			iVar3 = 10;
		}
	}
	if (func_104(64, 255))
	{
		iVar2 = 5;
		iVar3 = 5;
		if (func_28(78))
		{
			func_1003();
		}
	}
	if (iVar1 != 0 && !func_53(Local_4089.f_3391, 32, 255))
	{
		if ((&Local_4089.f_3008[0] != -1029285341 && func_331(Local_4089.f_3391, 32)) && iVar1 == -1)
		{
			Local_4089.f_3229.f_54 = -1029285341;
			bVar5 = true;
		}
		else
		{
			Local_4089.f_3229.f_54 = &Local_4089.f_3008[1];
		}
		if ((&Local_4089.f_3008[0] == 404851220 && Local_13.f_1 != 2) || bVar5)
		{
			bVar4 = true;
		}
		if ((bVar5 || func_28(126)) && func_1006(&(Local_4089.f_3229), &bVar0, &iVar6, bVar4))
		{
			if (bVar5)
			{
				if (!func_28(37))
				{
					func_236(37, 1, 0);
					func_1007(449057693, 0, 0);
					if (does_entity_exist(iVar6))
					{
						func_1008(iVar6);
					}
				}
				func_1009(1, (*Global_1237665)[Local_4089.f_3391]->f_15, player_id(), 0);
			}
			iVar2 = 4;
		}
		if (Local_4089.f_3008[1]->f_1 > 3)
		{
			iVar2 = 11;
		}
	}
	if (func_370(255, 0, 0, 0, 0) == -1)
	{
		if (func_28(77) && func_28(38))
		{
			func_1003();
			iVar2 = 6;
			iVar3 = 6;
		}
	}
	if ((&Local_4089.f_3008[1] == 622225714 && iVar1 == 1) && func_1010(Local_4089.f_2968.f_6, 1))
	{
		iVar2 = 7;
	}
	if (func_104(8192, 255) && (func_1011(&(Local_4089.f_3287.f_2)) != 42 || func_1011(&(Local_4089.f_3287.f_35)) != 42))
	{
		func_1012(&(Local_4089.f_3287.f_2), 42);
		func_1012(&(Local_4089.f_3287.f_35), 42);
	}
	if ((!func_28(126) && !func_437(Local_4089.f_3391)) && !func_1001(Local_4089.f_3391, 255))
	{
		return;
	}
	if (iVar2 != 0)
	{
		if (iVar1 == 1)
		{
			if (Local_13.f_391 == 0 || Local_13.f_391 == _0x901e0dc25080c8b9(player_id()))
			{
				func_1003();
				if (Local_13.f_391 == 0 && func_805())
				{
					return;
				}
			}
			else if (func_805())
			{
				func_1013(8192, 1, 0);
				return;
			}
		}
		if (!func_104(32, 255))
		{
			func_1003();
			if (Local_4089.f_3393 == -468635158 || Local_4089.f_3393 == 195932838)
			{
				iVar3 = 9;
			}
			bVar7 = func_182(255) != false;
			iVar8 = func_1014(Local_4089.f_3392);
			iVar9 = func_1015(iVar1);
			if (func_330(Local_4089.f_3393, 0) || Local_4089.f_3393 == 1717788883)
			{
				if (func_1016(bVar7))
				{
					func_167(4);
					func_167(8);
				}
				func_1017((*Global_1248240)[Local_4089.f_3391]->f_584, bVar7, &((*Global_1237665)[Local_4089.f_3391]->f_21));
			}
			else
			{
				func_1018();
				func_1019(iVar8, iVar9, &((*Global_1237665)[Local_4089.f_3391]->f_21), (*Global_1248240)[Local_4089.f_3391]->f_598, 0, 0);
			}
			func_1020();
			func_656(&(Local_920[participant_id_to_int()]->f_96));
			func_20(32, 1, 0);
			func_236(35, 1, 0);
			if (!func_53(Local_4089.f_3391, 16777216, 255) && !_0x72b2e00c9bac6789(&((*Global_1237665)[Local_4089.f_3391]->f_14), player_id()))
			{
				func_1021(func_182(255), _0x901e0dc25080c8b9(player_id()));
			}
			if (bVar0)
			{
				func_368(Local_4089.f_3391, 16777216);
			}
			func_1022(get_id_of_this_thread());
			set_ped_config_flag(Global_34, 538, true);
			set_ped_config_flag(Global_34, 417, true);
			_0x009cf9a29972c298(454742288);
			func_1023(0);
		}
		func_1024(Local_4089.f_3391, (*Global_1248240)[Local_4089.f_3391]->f_597);
		if (iVar3 != 0)
		{
			func_1025(Local_4089.f_3391);
		}
	}
}

void func_406()
{
	switch (Local_4089.f_3393)
	{
		case 1884341302:
			if ((!func_519(49) && func_856() < 600000) && !func_104(8192, 255))
			{
				func_1026(49, 1, 0, 0);
			}
			break;
		case -1784925006:
			if (!func_519(51))
			{
				func_1026(51, 1, 0, 0);
			}
			break;
	}
}

void func_407()
{
	switch (Local_4089.f_3393)
	{
		case 1884341302:
			func_1027();
			if (func_28(54) && !func_28(55))
			{
				func_1028();
			}
			break;
		case -1784925006:
			func_1027();
			if (func_28(54) && !func_28(55))
			{
				func_1029();
			}
			break;
	}
}

void func_408()
{
	iVar0 = -1;
	if (Local_13.f_1 == 6)
	{
		return;
	}
	if (func_29(Local_4089.f_3391, 8388608) && Local_4089.f_1 != 6)
	{
		return;
	}
	if ((((func_182(255) == 0 || func_182(255) == -1) && func_29(Local_4089.f_3391, 65536)) && func_331(Local_4089.f_3391, 1073741824)) && func_120(-2147483648))
	{
		func_1030(2, 1, 1, 1, 0, 1, 0);
	}
	if (func_370(255, 0, 1, 0, 0) != -1)
	{
		iVar0 = -1;
	}
	else if (_0x72b2e00c9bac6789(&((*Global_1237665)[Local_4089.f_3391]->f_14), &Global_1296859))
	{
		iVar0 = 0;
	}
	else if (func_29(Local_4089.f_3391, 65536))
	{
		iVar0 = -1;
	}
	else if (Local_4089.f_3008[0]->f_7 > 0 || Local_4089.f_3008[1]->f_7 > 0)
	{
		iVar0 = 1;
	}
	func_1031(iVar0);
	if (iVar0 == -1)
	{
		Local_4089.f_3229.f_54 = &Local_4089.f_3008[1];
	}
	if ((iVar0 == 1 && func_878(255, 1) == 3) && func_53(Local_4089.f_3391, 32, 255))
	{
		Local_4089.f_3008[1]->f_1 = Local_4089.f_3008[0]->f_1;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_4089.f_3008[iVar0]->f_6 = &Local_13.f_198[iVar0];
		iVar0++;
	}
	Local_4089.f_2890 = func_878(255, 0);
}

void func_409(bool bParam0)
{
	if (func_1032())
	{
		func_236(141, 1, 0);
	}
	else
	{
		func_79(141, 1, 0);
	}
	bVar0 = Local_4089.f_1 == 6;
	iVar1 = func_370(255, 1, 1, 1, 1);
	if (iVar1 == -1)
	{
		func_236(126, 1, 0);
	}
	else if (func_28(126))
	{
		bVar2 = !bVar0;
		bVar3 = iVar1 != 2;
		if (func_1002(Local_4089.f_3391, 255) == 16)
		{
			bVar2 = false;
		}
		func_33(0, !bVar0, !bVar0, bVar2, 0, 0, 0, bVar3);
		func_79(126, 1, 0);
		func_1013(8192, 1, 0);
	}
	if (!bVar0)
	{
		if (func_1033(bParam0))
		{
			func_236(140, 1, 0);
		}
		else
		{
			func_79(140, 1, 0);
		}
	}
}

void func_410()
{
	if (Local_4089.f_3355.f_14 <= 0)
	{
		return;
	}
	func_1034(&(Local_4089.f_4031[16]));
	Local_4089.f_4031[16] = &Local_4089.f_4031[16] + 1;
	if (&Local_4089.f_4031[16] >= 10)
	{
		Local_4089.f_4031[16] = 0;
	}
	func_1035();
}

void func_411()
{
	if (Local_4089.f_3355.f_15 <= 0)
	{
		func_1036();
		return;
	}
	func_1037(&(Local_4089.f_4031[28]));
	Local_4089.f_4031[28] = &Local_4089.f_4031[28] + 1;
	if (&Local_4089.f_4031[28] >= 4)
	{
		Local_4089.f_4031[28] = 0;
	}
}

void func_412()
{
	uVar0 = -1;
	iVar4 = func_182(255);
	_copy_memory(&(Local_4089.f_2190.f_694), &uVar0, 4);
	if (func_28(30))
	{
		return;
	}
	if (func_307(255) != 404851220)
	{
		return;
	}
	if (func_1038(16, 1) && !func_451(524288, 1))
	{
		if (!func_451(262144, 1))
		{
			bVar5 = true;
		}
		else
		{
			return;
		}
	}
	if (func_28(29))
	{
		return;
	}
	if (func_28(145))
	{
		return;
	}
	switch (Local_4089.f_2890.f_53)
	{
		case -2052523324:
		case -1978425965:
		case -812658880:
		case -242617845:
		case -35141072:
		case 185852499:
		case 1561228116:
			return;
	}
	if (func_1039(Local_920[participant_id_to_int()]->f_93, 255, 1) && !func_773(512, Local_920[participant_id_to_int()]->f_93))
	{
		Local_4089.f_2190.f_694.f_1 = Local_13.f_82[Local_920[participant_id_to_int()]->f_93]->f_1;
		Local_4089.f_2190.f_694.f_2 = Local_13.f_82[Local_920[participant_id_to_int()]->f_93]->f_5;
		if (!func_1040(Local_920[participant_id_to_int()]->f_93))
		{
			Local_4089.f_2190.f_694 = -1;
		}
		else if (bVar5)
		{
			Local_4089.f_2190.f_694 = Local_4089.f_1622[Local_920[participant_id_to_int()]->f_93]->f_33;
		}
		else
		{
			Local_4089.f_2190.f_694 = func_1041(iVar4, Local_920[participant_id_to_int()]->f_93);
		}
	}
	else if (func_1042(Local_920[participant_id_to_int()]->f_94, 255) && !func_773(512, Local_920[participant_id_to_int()]->f_94))
	{
		Local_4089.f_2190.f_694.f_3 = 1;
		Local_4089.f_2190.f_694.f_1 = Local_13.f_82[Local_920[participant_id_to_int()]->f_94]->f_1;
		Local_4089.f_2190.f_694.f_2 = Local_13.f_82[Local_920[participant_id_to_int()]->f_94]->f_5;
		if (!func_1040(Local_920[participant_id_to_int()]->f_94))
		{
			Local_4089.f_2190.f_694 = -1;
		}
		else if (bVar5)
		{
			Local_4089.f_2190.f_694 = Local_4089.f_1622[Local_920[participant_id_to_int()]->f_94]->f_33;
		}
		else if (func_1043() && Local_4089.f_3008[iVar4]->f_2 != -1)
		{
			Local_4089.f_2190.f_694 = Local_4089.f_3008[iVar4]->f_2;
		}
		else
		{
			Local_4089.f_2190.f_694 = func_1041(iVar4, Local_920[participant_id_to_int()]->f_94);
		}
	}
}

void func_413()
{
	fVar14 = func_1044();
	bVar15 = func_28(79);
	iVar16 = func_1045();
	iVar17 = &Local_4089.f_4031[5] + 2;
	iVar18 = &Local_4089.f_4031[7] + 2;
	iVar19 = &Local_4089.f_4031[6] + 2;
	iVar20 = &Local_4089.f_4031[8] + 2;
	iVar21 = &Local_4089.f_4031[9] + 2;
	iVar22 = &Local_4089.f_4031[20] + 2;
	iVar23 = &Local_4089.f_4031[24] + 2;
	iVar24 = &Local_4089.f_4031[10] + 2;
	iVar25 = &Local_4089.f_4031[26] + 2;
	iVar26 = &Local_4089.f_4031[38] + 2;
	iVar27 = &Local_4089.f_4031[39] + 2;
	if (iVar17 >= 15)
	{
		iVar17 = (iVar17 - 15);
		bVar28 = true;
		func_79(151, 1, 0);
	}
	if (iVar18 >= 9)
	{
		iVar18 = (iVar18 - 9);
		bVar29 = true;
		func_79(151, 1, 0);
	}
	if (iVar19 >= 6)
	{
		iVar19 = (iVar19 - 6);
		bVar30 = true;
	}
	if (iVar20 >= 5)
	{
		iVar20 = (iVar20 - 5);
		bVar31 = true;
	}
	if (iVar21 >= 6)
	{
		iVar21 = (iVar21 - 6);
		bVar32 = true;
	}
	if (iVar22 >= 3)
	{
		iVar22 = (iVar22 - 3);
		bVar33 = true;
	}
	if (iVar23 >= 15)
	{
		iVar23 = (iVar23 - 15);
		bVar34 = true;
	}
	if (iVar24 >= 33)
	{
		iVar24 = (iVar24 - 33);
		bVar35 = true;
	}
	if (iVar25 >= 6)
	{
		iVar25 = (iVar25 - 6);
		bVar36 = true;
	}
	if (iVar26 >= 5)
	{
		iVar26 = (iVar26 - 5);
		bVar37 = true;
	}
	if (iVar27 >= 4)
	{
		iVar27 = (iVar27 - 4);
		bVar38 = true;
	}
	func_1046();
	func_1047();
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (iVar0 < 15)
		{
			func_1048(iVar0, iVar1, fVar14);
			if (func_812(iVar0, &(Local_4089.f_6[iVar0]), &(Local_4089.f_4031[5]), iVar17, bVar28, 1))
			{
				func_1049(iVar0);
			}
		}
		if (iVar0 < 9)
		{
			func_1050(iVar0);
			if (func_815(iVar0, &(Local_4089.f_1087[iVar0]), &(Local_4089.f_4031[7]), iVar18, bVar29))
			{
				func_1051(iVar0);
			}
		}
		if (iVar0 < 6)
		{
			func_1052(iVar0);
			if (func_818(iVar0, &(Local_4089.f_1367[iVar0]), &(Local_4089.f_4031[6]), iVar19, bVar30))
			{
				func_1053(iVar0);
			}
		}
		if (iVar0 < 5)
		{
			if (func_820(iVar0, &(Local_4089.f_4031[8]), iVar20, bVar31))
			{
				func_1054(iVar0);
			}
		}
		if (iVar0 < 6)
		{
			func_1055(iVar0, bVar15, &uVar2, &uVar3, &uVar4, &iVar5, &iVar6, &uVar7, &bVar13, &uVar8, &uVar9, &uVar10, &uVar11, &uVar12);
			if (func_820(iVar0, &(Local_4089.f_4031[9]), iVar21, bVar32))
			{
				func_994(iVar0);
			}
		}
		if (iVar0 < 3)
		{
			func_1056(iVar0);
			if (func_820(iVar0, &(Local_4089.f_4031[20]), iVar22, bVar33))
			{
				func_1057(iVar0);
			}
		}
		if (iVar0 < 15)
		{
			if (func_820(iVar0, &(Local_4089.f_4031[24]), iVar23, bVar34))
			{
				func_1058(iVar0);
			}
		}
		if (iVar0 < 6)
		{
			if (iVar16 == iVar0)
			{
				func_1059(iVar16);
			}
			if (func_826(iVar0, &(Local_13.f_226[iVar0]), &(Local_4089.f_4031[26]), iVar25, bVar36))
			{
				func_1060(iVar0);
			}
		}
		if (iVar0 < 5)
		{
			func_1061(iVar0);
			if (func_820(iVar0, &(Local_4089.f_4031[38]), iVar26, bVar37))
			{
				func_1062(iVar0);
			}
		}
		if (iVar0 < 4)
		{
			func_1063(iVar0);
			if (func_820(iVar0, &(Local_4089.f_4031[39]), iVar27, bVar38))
			{
				func_1064(iVar0);
			}
		}
		iVar0++;
	}
	iVar39 = 0;
	while (iVar39 <= 32)
	{
		func_1065(iVar39);
		if (func_1066(iVar39, &(Local_4089.f_4031[10]), iVar24, bVar35))
		{
			func_932(iVar39);
		}
		iVar39++;
	}
	Local_4089.f_4073 = uVar2;
	Local_4089.f_4076 = uVar3;
	Local_4089.f_4077 = uVar4;
	Local_4089.f_4089 = uVar7;
	Local_4089.f_4078 = uVar8;
	Local_4089.f_4079 = uVar9;
	Local_4089.f_4090 = uVar10;
	Local_4089.f_3979 = uVar11;
	Local_4089.f_3980 = uVar12;
	if (func_28(109))
	{
		Local_4089.f_4088 = iVar5;
	}
	else if ((iVar5 > iVar6 && iVar6 > 0) || iVar5 == 0)
	{
		Local_4089.f_4088 = iVar5;
	}
	else
	{
		Local_4089.f_4088 = iVar6;
	}
	if (bVar13)
	{
		_0xc310239acccf5579();
	}
	if (Local_4089.f_3393 == 195932838)
	{
		func_1067();
	}
	if (bVar15)
	{
		func_1068(Local_920[participant_id_to_int()]->f_94, 0, 1);
	}
	Local_4089.f_4031[5] = iVar17;
	Local_4089.f_4031[7] = iVar18;
	Local_4089.f_4031[6] = iVar19;
	Local_4089.f_4031[8] = iVar20;
	Local_4089.f_4031[9] = iVar21;
	Local_4089.f_4031[20] = iVar22;
	Local_4089.f_4031[24] = iVar23;
	Local_4089.f_4031[10] = iVar24;
	Local_4089.f_4031[26] = iVar25;
	Local_4089.f_4031[38] = iVar26;
	Local_4089.f_4031[39] = iVar27;
}

void func_414()
{
	if (Local_13.f_1 < 1)
	{
		return;
	}
	if (Local_13.f_1 >= 6)
	{
		func_1069(Local_4089.f_3391, 1048576);
		return;
	}
	if (!func_29(Local_4089.f_3391, 524288))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (&Local_13.f_82[iVar0] < 1 || &Local_13.f_82[iVar0] > 5)
		{
		}
		else
		{
			iVar1 = func_308(iVar0);
			if (!does_entity_exist(iVar1))
			{
			}
			else if (func_1070(Global_35, get_entity_coords(iVar1, false, false)) < (*Global_1248240)[Local_4089.f_3391]->f_586)
			{
				bVar2 = true;
			}
			else
			{
				iVar0++;
			}
			if (bVar2)
			{
				func_1069(Local_4089.f_3391, 1048576);
			}
			else
			{
				func_27(Local_4089.f_3391, 1048576);
			}
		}
	}
}

void func_415()
{
	if (&Local_4089.f_4031[27] < 0 || &Local_4089.f_4031[27] >= 6)
	{
		Local_4089.f_4031[27] = 0;
		func_173(Local_4089.f_4132 != -1);
	}
	iVar0 = &Local_4089.f_4031[27];
	iVar1 = func_182(255);
	if (&Local_13.f_82[iVar0] > 0)
	{
		if ((iVar1 != -1 && &Local_4089.f_3008[iVar1] == 404851220) && (func_1071(iVar0, iVar1) || func_1072(iVar0, iVar1)))
		{
			if (Local_4089.f_4132 == -1)
			{
				Local_4089.f_4132 = iVar0;
			}
		}
		else if (Local_4089.f_4132 == iVar0 && Local_4089.f_4132 != -1)
		{
			Local_4089.f_4132 = -1;
		}
	}
	Local_4089.f_4031[27] = &Local_4089.f_4031[27] + 1;
}

void func_416()
{
	if (func_28(135))
	{
		disable_control_action(0, 992265328, false);
	}
}

void func_417()
{
	if (func_718(Global_34, 0))
	{
		return;
	}
	if (!is_ped_on_mount(Global_34))
	{
		return;
	}
	iVar0 = get_mount(Global_34);
	if (!does_entity_exist(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	if (_0x4e76cb57222a00e5(Global_34) != -1)
	{
		return;
	}
	if (!func_719(iVar0))
	{
		return;
	}
	if (does_entity_exist(Local_4089.f_3964) && !func_719(Local_4089.f_3964))
	{
		return;
	}
	if (iVar0 != Local_4089.f_3964 || (func_369(22) && !_0x77525bbf433f2cd6(iVar0)))
	{
		if (does_entity_exist(Local_4089.f_3964) && !is_entity_dead(Local_4089.f_3964))
		{
			_0x2d976dbdc731df80(Local_4089.f_3964);
			if (func_104(32, 255))
			{
				set_ped_config_flag(Local_4089.f_3964, 417, false);
			}
		}
		Local_4089.f_3964 = iVar0;
		iVar6 = 0;
		while (iVar6 <= 14)
		{
			if (func_1073(Local_409.f_1[iVar6]->f_1) && &Local_409.f_1[iVar6] == 22)
			{
				iVar5 = Local_4089.f_6[iVar6]->f_60;
				if (vdist(get_entity_coords(iVar5, true, false), get_entity_coords(Local_4089.f_3964, true, false)) < 15f)
				{
					iVar1[iVar7] = iVar5;
					iVar7++;
				}
				if (iVar7 >= 3)
				{
				}
				else
				{
					iVar6++;
				}
				if (iVar7 > 0)
				{
					_0x34eddd59364ad74a(Local_4089.f_3964, &iVar1);
				}
				if (func_104(32, 255))
				{
					set_ped_config_flag(Local_4089.f_3964, 417, true);
				}
			}
		}
	}
}

void func_418()
{
	iVar4 = -1;
	if (is_ped_in_any_vehicle(Global_34, false))
	{
		iVar2 = get_vehicle_ped_is_in(Global_34, false);
		bVar1 = true;
		bVar0 = true;
	}
	if (!bVar1 && is_ped_on_mount(Global_34))
	{
		iVar3 = get_mount(Global_34);
		bVar0 = true;
	}
	if ((!bVar0 && !func_28(41)) && !func_28(42))
	{
		return;
	}
	if (bVar1)
	{
		iVar4 = func_644(iVar2);
		if (iVar4 != -1)
		{
			return;
		}
	}
	else if (func_300(iVar3, 0) != -1)
	{
		return;
	}
	if (func_1074(-1, iVar2, iVar3, bVar1) && func_1075(-1, bVar1, iVar2, 0))
	{
		func_1076(bVar1, iVar2, 0);
	}
}

void func_419()
{
	if (Local_4089.f_1 == 6)
	{
		return;
	}
	iVar0 = func_182(255);
	if (Local_13.f_1 == 6)
	{
		func_1030(Local_13.f_2, 0, 0, 0, 0, 0, -1);
	}
	else if (func_1077())
	{
		func_1030(2, 1, 0, 0, 0, 0, -1);
	}
	else if (func_29(Local_4089.f_3391, 8388608))
	{
		iVar1 = Local_4089.f_3394;
		bVar2 = true;
		switch (iVar1)
		{
			case 7:
			case 8:
				bVar2 = false;
				break;
		}
		if (Local_4089.f_3393 == 1427578635)
		{
			bVar3 = network_is_player_active((*Global_1237665)[Local_4089.f_3391]->f_16);
			if (!bVar3 || Local_4089.f_4129 == (*Global_1237665)[Local_4089.f_3391]->f_16)
			{
				func_1030(6, 1, bVar2, bVar2, 0, 1, -1);
			}
			else if (bVar3 && (*Global_1237665)[Local_4089.f_3391]->f_16 != player_id())
			{
				func_1030(4, 1, bVar2, bVar2, 0, 1, -1);
			}
		}
		else if (func_29(Local_4089.f_3391, 16777216))
		{
			func_1030(5, 1, bVar2, bVar2, 0, 1, -1);
		}
		else
		{
			func_1030(4, 1, bVar2, bVar2, 0, 1, -1);
		}
	}
	else if (iVar0 == 1)
	{
		if ((func_104(32, 255) && Local_13.f_2 == 0) && func_1078(&(Local_4089.f_3229), (*Global_1248240)[Local_4089.f_3391]->f_587))
		{
			func_1030(4, 1, 1, 0, 0, 1, -1);
		}
		else if (func_1079(iVar0))
		{
			func_1030(14, 1, 1, 0, 0, 1, -1);
		}
		else if (Local_13.f_359 == 0 && func_775())
		{
			func_1030(2, 1, 1, 0, 0, 1, -1);
		}
	}
}

void func_420()
{
	if ((!Global_1940085->f_12 || !func_28(112)) || Local_4089.f_3211 == 46999421)
	{
		return;
	}
	if (Local_4089.f_3211.f_14 == 0f)
	{
		if (Global_1940085->f_9 > Local_4089.f_3211.f_14)
		{
			Local_4089.f_3211.f_14 = Global_1940085->f_9;
		}
		if (Local_4089.f_3211.f_14 > 0.74f)
		{
			Local_4089.f_3211.f_14 = 0.74f;
		}
		func_1080();
	}
	if (Local_4089.f_3211.f_14 > 0f)
	{
		func_1081();
		if (Global_1940085->f_9 != Local_4089.f_3211.f_14)
		{
			func_1080();
		}
	}
	else
	{
		return;
	}
	func_1082();
	if (is_ped_in_any_vehicle(Global_34, false) && _0x4e76cb57222a00e5(Global_34) == -1)
	{
		iVar0 = get_vehicle_ped_is_using(Global_34);
		bVar3 = true;
	}
	else if (is_ped_on_mount(Global_34))
	{
		iVar1 = get_mount(Global_34);
		bVar2 = true;
	}
	if (bVar3)
	{
		func_1083(iVar0);
	}
	else if (bVar2)
	{
		func_1084(iVar1);
	}
	else if (is_ped_on_foot(Global_34))
	{
		func_1085();
	}
}

void func_421()
{
	if (Local_4089.f_3355.f_16 == 0)
	{
		return;
	}
	if (&Local_4089.f_4031[32] >= 5)
	{
		Local_4089.f_4031[32] = 0;
	}
	iVar0 = &Local_4089.f_4031[32];
	if (func_1086(2, iVar0) && !func_1086(4, iVar0))
	{
		iVar1 = &Local_4089.f_3171[iVar0];
		if (iVar1 == -1993313767)
		{
			vVar2 = { Local_4089.f_3171[iVar0]->f_1 };
			if (vdist(get_entity_coords(Global_34, true, false), vVar2) < 45f)
			{
				fVar5 = func_1087(&(Local_4089.f_3355), iVar0);
				vVar2.f_2 = (vVar2.z + 1f);
				get_ground_z_for_3d_coord(vVar2, &(vVar2.f_2), false);
				_add_blood_pool_2(vVar2, 0.5f, fVar5, get_random_float_in_range(0.1f, 0.6f), true, NaNf, false);
				func_1088(4, iVar0);
			}
		}
		else if (iVar1 == 1974833915)
		{
			Var6 = { func_69(&(Local_4089.f_3355), iVar0) };
			_0xb9c92616929cc25d(&Var6, 0.3f);
			func_1088(4, iVar0);
		}
	}
	Local_4089.f_4031[32] = &Local_4089.f_4031[32] + 1;
}

void func_422()
{
	if (Local_4089.f_3197.f_3 <= 0f)
	{
		return;
	}
	_0xcf213a5fc3abfc08(Local_4089.f_3197, Local_4089.f_3197.f_1, Local_4089.f_3197.f_3);
}

void func_423()
{
	if (!Local_4089.f_3201.f_9)
	{
		return;
	}
	func_1089(&(Local_4089.f_3201), Local_4089.f_3201.f_6, 1, -1082130432);
}

void func_424()
{
	if (Local_13.f_257.f_29 == 0)
	{
		return;
	}
	if (Local_13.f_1 <= 0)
	{
		return;
	}
	func_1090();
	iVar0 = &Local_4089.f_4031[30];
	if (func_849(iVar0) == 4 && !func_850(8192, iVar0))
	{
		func_1091(iVar0);
	}
	Local_4089.f_4031[30] = &Local_4089.f_4031[30] + 1;
	if (&Local_4089.f_4031[30] > (Local_13.f_257.f_29 - 1))
	{
		Local_4089.f_4031[30] = 0;
	}
}

void func_425()
{
	if (func_53(Local_4089.f_3391, 32, 255) && is_ped_in_any_vehicle(Global_34, true))
	{
		func_1092(4);
	}
}

void func_426()
{
	iVar0 = Local_4089.f_3960;
	if (iVar0 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 1819579172:
			_0x785177e4d57d7389(player_id(), -683250308, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 481893872, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 2006449383, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 2140177766, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 2140177766, 0, 0, -1);
			break;
		case -1317088206:
			_0x785177e4d57d7389(player_id(), 1052408375, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 1746095559, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), -2130852007, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), -102241052, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 1420320220, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 1343354387, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 1052408375, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 195938434, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), -493957506, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), -1810065318, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), -953803399, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), -2095449173, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 1396375613, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), -2095449173, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), -999071359, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 1458462042, 0, 0, -1);
			break;
		case -2037662282:
			_0x785177e4d57d7389(player_id(), 195938434, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), -999071359, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 1343354387, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), -2130852007, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), -1810065318, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), -2095449173, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 1396375613, 0, 0, -1);
			_0x785177e4d57d7389(player_id(), 1458462042, 0, 0, -1);
			break;
		default:
			break;
	}
}

void func_427()
{
	if (!func_104(32, 255))
	{
		return;
	}
	iVar1 = func_182(255);
	if (Local_4089.f_3393 == 1427578635 && (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id())
	{
		func_43(1);
	}
	if (iVar1 != -1)
	{
		bVar0 = func_1093(64, iVar1);
		if (func_1093(64, iVar1))
		{
			bVar0 = true;
			if (!func_28(49))
			{
				_0x2728c77fbc4b9796(player_id());
				func_236(49, 1, 0);
			}
		}
		if (func_1093(16, iVar1) && func_120(16))
		{
			_0xc310239acccf5579();
			if (!func_28(48))
			{
				func_1094(1343354387, 1);
				func_236(48, 1, 0);
			}
		}
	}
	if (func_1095(0, 0, 0))
	{
		if (!func_650(Local_4089.f_4106))
		{
			func_656(&(Local_4089.f_4106));
			if (!func_1096())
			{
				func_215(1);
			}
			_0x987be590fb9d41e5(1);
			_0xdcf12b89624aac96(1);
		}
		else if (func_725(Local_4089.f_4106) < 45000)
		{
			bVar0 = true;
		}
	}
	else if (func_650(Local_4089.f_4106))
	{
		_0x009cf9a29972c298(454742288);
		func_163(&(Local_4089.f_4106));
	}
	if (bVar0)
	{
		_0xbd944a3d36e992de();
		report_police_spotted_player(player_id());
	}
}

void func_428()
{
	if (!func_28(76) && Local_4089.f_3393 == 195932838)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (((func_453(8, iVar0) && Local_13.f_82[iVar0]->f_1 == 886638433) && func_1097(Local_13.f_82[iVar0]->f_5, 0)) && func_836(Local_409.f_1[Local_13.f_82[iVar0]->f_5]->f_1))
			{
				if (_network_is_player_index_valid(Local_13.f_82[iVar0]->f_14) && Local_13.f_82[iVar0]->f_14 == player_id())
				{
					iVar1 = _get_entity_proofs(player_ped_id());
					if (!func_80(iVar1, 4))
					{
						iVar1 |= 4;
					}
					set_entity_proofs(player_ped_id(), iVar1, false);
					set_player_invincible(player_id(), true);
					func_81(1);
					func_236(76, 1, 0);
				}
			}
			iVar0++;
		}
	}
}

void func_429()
{
	if (!func_369(34))
	{
		return;
	}
	vVar0 = { func_1098(player_id()) };
	if (func_67(vVar0))
	{
		return;
	}
	iVar4 = func_1099(vVar0, &fVar3, 0);
	if (iVar4 != -1 && fVar3 <= 30f)
	{
		func_1100((*Global_1248240)[Local_4089.f_3391]->f_584);
	}
	else
	{
		func_1101((*Global_1248240)[Local_4089.f_3391]->f_584, 0);
	}
}

void func_430()
{
	if (!func_104(32, 255))
	{
		return;
	}
	if (Local_13.f_1 == 6)
	{
		return;
	}
	if ((func_104(64, 255) || func_29(Local_4089.f_3391, 8192)) || (func_29(Local_4089.f_3391, 16384) && (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id()))
	{
		func_1102();
		if (Local_4089.f_3393 == 1427578635 && (*Global_1237665)[Local_4089.f_3391]->f_16 != player_id())
		{
			func_1103();
		}
	}
	if (Local_4089.f_3393 == 1884341302 && func_1105(func_1104(_0x4be6c13a45cca8ec(Global_1296859->f_15))))
	{
		func_1102();
	}
	if ((Local_4089.f_3393 == 1427578635 && (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id()) && is_entity_attached_to_any_ped(player_ped_id()))
	{
		func_1103();
	}
	if (func_29(Local_4089.f_3391, 32768))
	{
		func_1106();
	}
}

void func_431()
{
	if (func_104(1073741824, 255))
	{
		return;
	}
	if (!func_330(Local_4089.f_3393, 0))
	{
		func_20(1073741824, 1, 0);
		return;
	}
	if (_0x901e0dc25080c8b9(player_id()) != (*Global_1237665)[Local_4089.f_3391]->f_13)
	{
		func_20(1073741824, 1, 0);
		return;
	}
	if (!func_1107((*Global_1237665)[Local_4089.f_3391]->f_13))
	{
		func_20(1073741824, 1, 0);
		return;
	}
	if (func_1108((*Global_1237665)[Local_4089.f_3391]->f_13))
	{
		if (!func_185(128))
		{
			do_screen_fade_in(2000);
		}
		func_1109();
		func_20(1073741824, 1, 0);
	}
}

void func_432()
{
	if (!func_650(Local_4089.f_4107))
	{
		return;
	}
	iVar0 = func_1110();
	if (func_725(Local_4089.f_4107) >= iVar0)
	{
		if (Local_4089.f_4108 == -1)
		{
			Local_4089.f_4108 = (&Local_4089.f_4031[5] - 2);
			if (Local_4089.f_4108 < 0)
			{
				Local_4089.f_4108 += 15;
			}
		}
		else
		{
			iVar1 = &Local_4089.f_4031[5] + 2;
			if (iVar1 >= 15)
			{
				iVar1 = (iVar1 - 15);
			}
			if (func_1111(Local_4089.f_4108, &(Local_4089.f_4031[5]), iVar1, 15))
			{
				Local_4089.f_4108 = -1;
				func_656(&(Local_4089.f_4107));
			}
		}
	}
}

void func_433()
{
	if (Local_4089.f_3393 != -260420884 && Local_4089.f_3393 != 850213441)
	{
		return;
	}
	if (Local_4089.f_4129 != player_id())
	{
		return;
	}
	if (Local_13.f_395 == -1)
	{
		return;
	}
	if (func_84() == Local_13.f_395)
	{
		return;
	}
	func_1112(Local_13.f_395);
}

void func_434()
{
	if (!func_28(65) && !func_120(16))
	{
		func_74(1);
	}
	else if (func_28(65) && func_120(16))
	{
		func_74(0);
	}
}

void func_435()
{
	if (!func_650(Local_4089.f_4111))
	{
		return;
	}
	if (func_725(Local_4089.f_4111) > 2000)
	{
		func_163(&(Local_4089.f_4111));
		return;
	}
	set_ped_max_move_blend_ratio(Global_34, 1f);
}

void func_436()
{
	if (func_28(125))
	{
		func_1113(0);
	}
}

bool func_437(int iParam0)
{
	if (Global_1248240->f_9297 == iParam0)
	{
		return true;
	}
	return false;
}

void func_438()
{
	if (func_28(127))
	{
		return;
	}
	if (Local_4089.f_1 < 1 || Local_4089.f_1 >= 6)
	{
		return;
	}
	if (func_28(141))
	{
		return;
	}
	iVar0 = func_878(255, 1);
	iVar1 = func_182(255);
	if (iVar0 != 8 && iVar0 != 6)
	{
		if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 7)
		{
			func_236(127, 1, 0);
		}
		return;
	}
	if (iVar1 == 1 && !func_1114())
	{
		func_236(127, 1, 0);
		return;
	}
	if (_0xa2b1c7ef759a63ce() > 0f && !is_cinematic_cam_rendering())
	{
		return;
	}
	if (_is_loading_screen_active())
	{
		return;
	}
	sVar2 = func_1115(Local_4089.f_3393, iVar1, Local_4089.f_3391);
	Var3 = { func_1116(Local_4089.f_3393, Local_4089.f_3392, Local_4089.f_3972) };
	switch (iVar1)
	{
		case 0:
			if (Local_4089.f_3393 == 1427578635)
			{
				if (*Global_1237665)[Local_4089.f_3391]->f_16 != player_id()
				{
					sVar19 = func_1117(get_player_name((*Global_1237665)[Local_4089.f_3391]->f_16), 109029619);
					Var11 = { func_1118(-1697577804, -1) };
					cVar20 = _create_var_string(10, &Var11, sVar19);
				}
				else
				{
					Var11 = { func_1118(-1754761246, -1) };
					cVar20 = _create_var_string(2, &Var11, Local_4089.f_3897.f_57);
				}
			}
			else if (Local_4089.f_3393 == -1777724963)
			{
				if (Local_4089.f_4122 > 1)
				{
					Var11 = { func_1118(445761201, -1) };
				}
				else
				{
					Var11 = { func_1118(-1754761246, -1) };
				}
				sVar19 = func_1120(_get_label_text_by_hash(func_1119()), 109029619);
				cVar20 = _create_var_string(10, &Var11, sVar19);
			}
			else if (Local_4089.f_4122 > 1)
			{
				Var11 = { func_1118(445761201, -1) };
				cVar20 = _create_var_string(2, &Var11);
			}
			else
			{
				Var11 = { func_1118(-1754761246, -1) };
				cVar20 = _create_var_string(2, &Var11);
			}
			break;
		case 1:
			if (Local_4089.f_3393 == 1427578635)
			{
				sVar19 = func_1117(get_player_name((*Global_1237665)[Local_4089.f_3391]->f_16), 109029619);
				Var11 = { func_1118(-1696816890, -1) };
				cVar20 = _create_var_string(10, &Var11, sVar19, Local_4089.f_3897.f_57);
			}
			else if (Local_4089.f_4122 > 1)
			{
				Var11 = { func_1118(-1244714654, -1) };
				cVar20 = _create_var_string(2, &Var11);
			}
			else
			{
				Var11 = { func_1118(-1696816890, -1) };
				cVar20 = _create_var_string(2, &Var11);
			}
			break;
	}
	if (is_string_null_or_empty(sVar2))
	{
		Local_4089.f_2890.f_32 = func_1123(&Var3, cVar20, 7500, func_1121(), func_1122(), 0, 1, 1);
	}
	else if (is_string_null_or_empty(&Var3))
	{
		Local_4089.f_2890.f_32 = func_1123(sVar2, cVar20, 7500, func_1121(), func_1122(), 0, 1, 1);
	}
	else
	{
		Local_4089.f_2890.f_32 = func_1124(sVar2, &Var3, cVar20, 7500, func_1121(), func_1122(), 0, 1, 1, 1);
	}
	func_236(127, 1, 0);
}

void func_439()
{
	if ((((Local_4089.f_1 < 1 || Local_4089.f_1 >= 6) || func_878(255, 1) <= 3) || func_28(68)) || func_28(141))
	{
		if (func_193(Local_4089.f_2890.f_52))
		{
			_0x2f901291ef177b02(Local_4089.f_2890.f_52, 0);
		}
		return;
	}
	bVar0 = func_28(29);
	if (!func_775())
	{
		if (Local_13.f_359 == 0 && !bVar0)
		{
			if (func_193(Local_4089.f_2890.f_52))
			{
				_0x2f901291ef177b02(Local_4089.f_2890.f_52, 0);
			}
			return;
		}
	}
	bVar1 = Local_4089.f_4073 > 1;
	switch (Local_4089.f_2890.f_1)
	{
		case -1217230960:
			func_1125();
			break;
		case 1597320317:
			func_1126();
			break;
		default:
			if (Local_4089.f_4082 == Local_13.f_371)
			{
				return;
			}
			if (func_1038(1048576, 1))
			{
				return;
			}
			Local_4089.f_4082 = Local_13.f_371;
			switch (func_307(255))
			{
				case 404851220:
					func_1127(bVar1, bVar0);
					break;
				case -1029285341:
					func_1128(bVar1, bVar0);
					break;
				case 622225714:
					func_1129(bVar1);
					break;
			}
			break;
	}
}

void func_440()
{
	if (Local_4089.f_1 >= 6)
	{
		func_200(0);
		return;
	}
	bVar10 = true;
	if ((func_331(Local_4089.f_3391, 16) || func_120(16)) && func_53(Local_4089.f_3391, 32, 255))
	{
		if (func_28(72) || Local_4089.f_4114 != 0)
		{
			if (func_28(118))
			{
				func_79(72, 1, 0);
			}
			else
			{
				bVar4 = true;
				bVar0 = true;
			}
		}
		if (Local_13.f_357 > 0)
		{
			iVar9 = func_1130(get_entity_coords(player_ped_id(), false, false), 0, 1176255488, func_28(124));
			if (func_1131(iVar9))
			{
				vVar6 = { *Local_4089.f_3229.f_15[iVar9] };
			}
			else
			{
				iVar5 = func_308(iVar9);
				vVar6 = { get_entity_coords(iVar5, false, false) };
			}
			if (does_entity_exist(iVar5) || !func_67(vVar6))
			{
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			if (Local_4089.f_3393 == 1427578635 && func_182(255) == 1)
			{
				bVar2 = true;
			}
			else
			{
				bVar2 = vdist(Global_35, vVar6) < 150f;
			}
		}
		else if (func_28(119))
		{
			bVar2 = vdist(Global_35, func_792(Local_4089.f_3391)) < 150f;
		}
		else
		{
			bVar2 = true;
		}
		if ((Local_4089.f_3393 == 1427578635 && &Local_4089.f_3008[1] != 493038497) && (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id())
		{
			bVar0 = true;
			bVar3 = true;
			bVar10 = false;
		}
		if (bVar2)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_200(1);
	}
	else
	{
		func_200(0);
	}
	if ((func_28(69) && func_1132(255)) && func_526(255))
	{
		iVar11 = func_1133();
		if (iVar11 != -1)
		{
			vVar12 = { func_1134(&(Local_4089.f_3355), iVar11) };
			fVar15 = func_1135(&(Local_4089.f_3355), iVar11);
			func_1136(vVar12, fVar15, 0f, 0f, 0f, 0);
		}
		else
		{
			func_1137(&(Local_4089.f_3355), Local_4089.f_3391, func_182(255), &uVar55, &uVar56);
			iVar63 = func_1138();
			if (bVar3)
			{
				iVar65 = 0;
				while (iVar65 < 17)
				{
					if (iVar65 == func_1139())
					{
					}
					else
					{
						iVar66[iVar64] = iVar65;
						iVar64++;
					}
					iVar65++;
				}
				iVar84 = func_1140(iVar64);
				iVar85 = func_1141(&(iVar66[iVar84]));
				func_1142(iVar85, &Var16);
				vVar57 = { Var16.f_17.f_6 };
			}
			else if (bVar1)
			{
				if (does_entity_exist(iVar5))
				{
					Var16.f_4 = iVar5;
					Var16.f_5 = 3;
					vVar57 = { get_entity_coords(iVar5, false, false) };
				}
				else
				{
					Var16.f_1 = { vVar6 };
					Var16.f_5 = 2;
					vVar57 = { vVar6 };
				}
				func_1143(&vVar57, &uVar60, vVar57, uVar56, iVar9);
			}
			else if (func_28(119))
			{
				Var16.f_1 = { func_792(Local_4089.f_3391) };
				Var16.f_5 = 2;
				vVar57 = { func_792(Local_4089.f_3391) };
			}
			else
			{
				Var16.f_1 = { Global_35 };
				Var16.f_5 = 2;
				vVar57 = { Global_35 };
			}
			if (bVar10)
			{
				Var16.f_17.f_6 = { vVar57 };
				Var16.f_17 = { uVar56, uVar56, 35f };
				Var16.f_17.f_9 = 665633627;
				Var16.f_16 = 1;
				Var16.f_6.f_6 = { vVar57 };
				Var16.f_6 = { uVar55, uVar55, 50f };
				Var16.f_6.f_9 = 665633627;
			}
			if ((bVar4 || !func_1144(vVar57)) && iVar63 != -1)
			{
				vVar86 = { _0xf70f00013a62f866(&(Local_4089.f_2190[iVar63])) };
				vVar86.f_2 = Global_35.f_2;
				vVar89 = { _0x3e2a25b2416dd67e(&(Local_4089.f_2190[iVar63])) };
				fVar92 = vVar89.x;
				fVar93 = vdist(vVar86, Global_35);
				if (fVar92 < 75f)
				{
					fVar92 = 75f;
				}
				if (fVar93 <= fVar92)
				{
					fVar93 = fVar92;
				}
				vVar57 = { func_1145(vVar86, Global_35, ((fVar92 - 75f) / fVar93)) };
				if (get_ground_z_for_3d_coord(vVar57, &uVar94, false))
				{
					vVar57.f_2 = uVar94;
				}
				Var16.f_1 = { vVar86 };
				Var16.f_5 = 2;
				Var16.f_17.f_6 = { vVar57 };
				Var16.f_17 = { 75f, 75f, 35f };
				Var16.f_17.f_9 = 665633627;
				Var16.f_16 = 1;
				Var16.f_6.f_6 = { vVar57 };
				Var16.f_6 = { 30f, 30f, 50f };
				Var16.f_6.f_9 = 665633627;
			}
			Var46.f_6 = { func_1146(vVar57, &Var46) };
			Var46.f_5 = 1;
			if ((iVar63 != -1 && func_28(72)) && !func_1144(Var46.f_6))
			{
				Var46.f_6 = { Var16.f_6.f_6 };
			}
			_0xeb6027fd1b4600d5(9, 1, 1f);
			_0xeb6027fd1b4600d5(7, 1, 1f);
			_0xeb6027fd1b4600d5(15, 0, 0.75f);
			_0xeb6027fd1b4600d5(13, 0, 0.75f);
			_0xeb6027fd1b4600d5(19, 1, 0.05f);
			_0x44d59ec597bbf348(3, 0);
			if (func_1147(iVar9))
			{
				func_1148(1, 0);
			}
			if (func_218(&(Local_4089.f_3355), 586899025, 0, -801742902, 0, 0, 0, 0, 0))
			{
				func_1149();
			}
			func_79(72, 1, 0);
			func_1150(Var16, Var46, 1, 1, 1);
		}
	}
}

void func_441(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

void func_442()
{
	if (Local_4089.f_3393 == 1717788883)
	{
		return;
	}
	func_1151();
	func_1152();
	if (Local_4089.f_1 < 1 || (Local_4089.f_1 >= 6 && !func_1153(Local_4089.f_2890.f_34)))
	{
		if (Local_4089.f_2890.f_34 != 0)
		{
			Local_4089.f_2890.f_34 = 0;
		}
		return;
	}
	if (Local_4089.f_2890.f_34 == 0)
	{
		return;
	}
	func_1154(Local_4089.f_2890.f_34);
}

void func_443()
{
	if ((func_878(255, 1) <= 3 || Local_4089.f_1 < 1) || Local_4089.f_1 >= 6)
	{
		func_1155();
		return;
	}
	if (func_28(141))
	{
		return;
	}
	if (func_1156())
	{
		Local_4089.f_2890.f_31 = 0;
		return;
	}
	switch (func_307(255))
	{
		case -1029285341:
			func_1157();
			break;
		case 622225714:
			func_1158();
			break;
		case 404851220:
			func_1159();
			break;
	}
}

void func_444(bool bParam0)
{
	if (!func_28(140))
	{
		if (bParam0 && Local_4089.f_1 < 6)
		{
			func_197(Local_4089.f_3391, 0, 0);
		}
		return;
	}
	iVar0 = func_307(255);
	bVar1 = false;
	bVar2 = func_1160();
	bVar3 = func_1161();
	iVar4 = func_1162();
	if (func_28(168))
	{
		iVar0 = 404851220;
	}
	func_1163(Local_4089.f_3391, iVar4, iVar0, bVar2, bVar1, bVar3);
	bVar5 = (func_28(139) && !bVar2);
	if ((func_1164(&(Global_1248240->f_9034)) && func_28(138)) && !bVar5)
	{
		cVar6 = { func_1165(&(Local_4089.f_3355), Local_4089.f_2890.f_71) };
		Var14 = { func_1166(&(Local_4089.f_3355), Local_4089.f_2890.f_71) };
		iVar22 = 1757024873;
		bVar28 = func_28(56);
		if (Local_4089.f_4073 > 1 && func_1167(&(Local_4089.f_3355), &uVar23, 1992892729, -1, bVar28, Local_4089.f_3391))
		{
			iVar22 = 1992892729;
		}
		if (func_1168(iVar22, Local_4089.f_2890.f_70, 0, 0, 0, 0, 0, 0, 1, 0, &Var14, &cVar6) != 0)
		{
			func_79(138, 1, 0);
			func_79(139, 1, 0);
		}
	}
}

void func_445()
{
	bVar0 = func_369(4);
	bVar1 = true;
	bVar2 = func_28(126);
	iVar12 = -1;
	fVar56 = 9999f;
	iVar59 = func_182(255);
	bVar61 = func_104(32, 255);
	bVar62 = func_120(67108864);
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar3)))
		{
			iVar57 = network_get_player_index(int_to_participantindex(iVar3));
			if (bVar0 && _0x424b17a7dc5c90bc(iVar57))
			{
				func_1169(iVar3);
				if (_0x81fb74c83c2ed69f(iVar57))
				{
					bVar60 = true;
				}
			}
			iVar9 = 0;
			iVar12 = (iVar12 && Local_920[iVar3]->f_92);
			uVar4 = (uVar4 || Local_920[iVar3]->f_92);
			switch (func_182(iVar3))
			{
				case 0:
					uVar5 = (uVar5 || Local_920[iVar3]->f_92);
					break;
				case 1:
					uVar6 = (uVar6 || Local_920[iVar3]->f_92);
					if (Local_4089.f_3393 == 1427578635 && (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id())
					{
						_0x31010318ba9897ac(&(Global_1248240->f_8903.f_118), iVar57);
					}
					break;
			}
			if (_0x81fb74c83c2ed69f(iVar57))
			{
				uVar7 = (uVar7 || Local_920[iVar3]->f_92);
				if (func_1170(iVar57))
				{
					bVar1 = false;
				}
			}
			if (func_1171(iVar3, 1))
			{
				iVar10++;
			}
			iVar8 = 0;
			while (iVar8 <= 5)
			{
				uVar13[iVar8] = (uVar13[iVar8] || Local_920[iVar3]->f_55[iVar8]) // PointerArith;
				iVar9 = (iVar9 || Local_920[iVar3]->f_55[iVar8]) // PointerArith;
				iVar8++;
			}
			iVar11 = 0;
			while (iVar11 <= 14)
			{
				uVar20[iVar11] = (uVar20[iVar11] || Local_920[iVar3][iVar11]);
				uVar36[iVar11] = (uVar36[iVar11] || (*Local_920[iVar3])[iVar11]->f_1);
				iVar11++;
			}
			Local_4089.f_3982[iVar3] = iVar9;
			iVar58 = func_182(iVar3);
			if (iVar58 != -1)
			{
				uVar52[iVar58] = &uVar52[iVar58] + 1;
			}
			if (func_28(126) && (func_1172(iVar3, 1) || _0x72b2e00c9bac6789(&(Local_4089.f_2890.f_75), iVar57)))
			{
				func_48(iVar57, 1);
			}
			else
			{
				func_48(iVar57, 0);
			}
			func_1173(iVar3, iVar57, iVar59, bVar61, bVar2, bVar62);
		}
		iVar3++;
	}
	if ((Local_4089.f_3393 == 1427578635 && (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id()) && _0x179a6f0ee2e79026(&(Global_1248240->f_8903.f_118)))
	{
		func_554(1393257577, 0, 0);
	}
	if (bVar0 && !bVar60)
	{
		func_1169(participant_id_to_int());
	}
	if (!func_28(105) && bVar1)
	{
		func_20(536870912, 1, 0);
	}
	if (&uVar52[0] > 0)
	{
		Local_4089.f_4084 = iVar10;
	}
	Local_4089.f_3974 = iVar12;
	Local_4089.f_3975 = uVar4;
	Local_4089.f_3976 = uVar5;
	Local_4089.f_3977 = uVar6;
	Local_4089.f_3978 = uVar7;
	Local_4089.f_3008[0]->f_7 = &uVar52[0];
	Local_4089.f_3008[1]->f_7 = &uVar52[1];
	iVar8 = 0;
	while (iVar8 <= 5)
	{
		uVar64 = (uVar64 || Local_13.f_82[iVar8]->f_6);
		Local_4089.f_4015[iVar8] = &uVar13[iVar8];
		if ((!func_29(Local_4089.f_3391, 512) || !func_104(32, 255)) && does_entity_exist(&(Local_4089.f_3229.f_2[iVar8])))
		{
			bVar63 = true;
			if (Local_920[participant_id_to_int()]->f_93 == iVar8)
			{
				fVar56 = 0f;
			}
			else
			{
				fVar55 = vdist(Global_35, *Local_4089.f_3229.f_15[iVar8]);
				if (fVar55 < fVar56)
				{
					fVar56 = fVar55;
				}
			}
		}
		iVar8++;
	}
	iVar11 = 0;
	while (iVar11 <= 14)
	{
		Local_4089.f_6[iVar11]->f_46 = &uVar20[iVar11];
		Local_4089.f_6[iVar11]->f_47 = &uVar36[iVar11];
		iVar11++;
	}
	Local_4089.f_3981 = uVar64;
	if (!bVar63)
	{
		if (func_104(32, 255))
		{
			fVar56 = 1f;
		}
		else
		{
			fVar56 = 0f;
		}
	}
	Local_920[participant_id_to_int()]->f_98 = fVar56;
	if (bVar0)
	{
		func_1174();
	}
}

void func_446()
{
	if (!func_369(1))
	{
		return;
	}
	iVar3 = func_182(255);
	bVar6 = func_28(126);
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = int_to_playerindex(iVar2);
		if ((iVar2 != player_id() && network_is_player_active(iVar0)) && network_is_player_a_participant(iVar0))
		{
			bVar4 = _0x3f59fe6f37869576(player_id(), iVar0);
			iVar1 = network_get_participant_index(iVar0);
			bVar5 = (network_is_participant_active(iVar1) && func_104(32, iVar1));
			if (((bVar6 && bVar5) && !func_1175(iVar0, 1, 1)) && (!bVar4 || func_182(iVar1) != iVar3))
			{
				if (!_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_73), iVar0))
				{
					_0x31010318ba9897ac(&(Local_4089.f_2890.f_73), iVar0);
					func_1176(iVar0);
					func_51(iVar2, 1);
				}
				if (((Local_4089.f_3393 == 1427578635 && &Local_4089.f_3008[1] != 493038497) && iVar3 == 0) && func_182(iVar1) == 1)
				{
					func_1177(iVar2, -861219276);
				}
				if (func_28(167))
				{
					func_52(iVar0, 1);
				}
			}
			else
			{
				if (_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_73), iVar0))
				{
					_0xd426e2e3288469d6(&(Local_4089.f_2890.f_73), iVar0);
					func_50(iVar0);
					func_51(iVar2, 0);
				}
				else
				{
					func_534(iVar2);
				}
				func_52(iVar0, 0);
			}
			if (Local_4089.f_3393 == 1427578635)
			{
				if (func_28(167) && !func_519(70))
				{
					if (_0x4b101dbcc9482f2d(get_player_ped(iVar0)))
					{
						func_1026(70, 0, 0, 0);
					}
				}
			}
		}
		else
		{
			if (_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_73), iVar0))
			{
				_0xd426e2e3288469d6(&(Local_4089.f_2890.f_73), iVar0);
				func_50(iVar0);
				func_51(iVar2, 0);
			}
			else
			{
				func_534(iVar2);
			}
			func_52(iVar0, 0);
		}
		iVar2++;
	}
}

void func_447()
{
}

void func_448()
{
	func_1178();
}

bool func_449(int iParam0)
{
	switch (iParam0)
	{
		case -1261475678:
		case -1086711901:
		case -669677371:
		case -468635158:
		case 1539023636:
			return true;
	}
	return false;
}

int func_450()
{
	iVar1 = -1;
	iVar2 = Local_4089.f_2.f_2;
	if (Local_13.f_357 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == iVar2 && func_148(2048, -1))
		{
			iVar1 = iVar0;
			Jump @95; //curOff = 64
		}
		else if (&Local_13.f_198[iVar0] > 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_451(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_80(Local_4089.f_3981, iParam0);
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_80(Local_13.f_82[iVar0]->f_6, iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_452()
{
	if (func_1179() <= 0)
	{
		return 0;
	}
	return floor(((1f - Local_13.f_224) * IntToFloat(func_1179())));
}

bool func_453(int iParam0, bool bParam1)
{
	if (!func_311(bParam1))
	{
		return false;
	}
	return func_80(Local_13.f_82[bParam1]->f_6, iParam0);
}

bool func_454(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (network_is_player_active(int_to_playerindex(iParam1)) && ((*Global_1238240)[iParam1]->f_300 && iParam0) != 0);
}

int func_455(struct<2> Param0)
{
	return func_464(Param0);
}

int func_456(int iParam0)
{
	if ((*Global_1248240)[iParam0]->f_559 != 1918154385)
	{
		return 0;
	}
	if (func_459(iParam0))
	{
		return 699460870;
	}
	return 1090282455;
}

int func_457(int iParam0)
{
	if (func_1180(iParam0, 3))
	{
		return -1208984288;
	}
	else if (func_1180(iParam0, 4))
	{
		return 1960865708;
	}
	else if (func_1180(iParam0, 8))
	{
		return -988146248;
	}
	return 0;
}

int func_458(int iParam0)
{
	if (func_1180(iParam0, 3))
	{
		return -377157708;
	}
	else if (func_1180(iParam0, 4))
	{
		return 219205323;
	}
	else if (func_1180(iParam0, 8))
	{
		return 87577242;
	}
	return -377157708;
}

bool func_459(int iParam0)
{
	if ((*Global_1248240)[iParam0]->f_559 != 1918154385)
	{
		return false;
	}
	return func_1181(Global_1237665[iParam0], (*Global_1237665)[iParam0]->f_6, (*Global_1237665)[iParam0]->f_18);
}

int func_460()
{
	if (func_1182(network_player_id_to_int()))
	{
		return -1962314949;
	}
	return 1198351664;
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case -1777724963:
			return func_1184(func_1183());
		case 1427578635:
			return 948632731;
		default:
			break;
	}
	return 0;
}

int func_462()
{
	if (Local_4089.f_3393 == -1777724963)
	{
		return 1085715736;
	}
	else if (Local_4089.f_3393 == 1427578635)
	{
		return -1442248781;
	}
	return 0;
}

int func_463()
{
	if (Local_4089.f_3393 != 1427578635)
	{
		return 0;
	}
	if (&Local_4089.f_3008[1] == 493038497)
	{
		return 0;
	}
	if (func_451(-2147483648, 1))
	{
		return 1;
	}
	if (func_451(8, 1) && !func_451(65536, 1))
	{
		return 1;
	}
	if (!is_ped_a_player(Local_4089.f_4128))
	{
		return 1;
	}
	if (Local_13.f_1 == 6)
	{
		return 0;
	}
	return 1;
}

int func_464(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1185(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_465(int iParam0)
{
	iVar1 = Local_13.f_357;
	iVar2 = func_1186(512);
	if (Local_4089.f_3393 == 1427578635)
	{
		iVar0 = 1;
		if (iParam0 == 1)
		{
			if (func_148(2048, -1))
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = Local_13.f_357;
			}
		}
		else if (func_148(2048, -1))
		{
			iVar2 = Local_13.f_357;
		}
		else
		{
			iVar2 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	if (Local_4089.f_2.f_1 == 1)
	{
		return -579915774;
	}
	if (iVar2 == iVar1)
	{
		return -1405108230;
	}
	if (func_1187(iVar0) == -1)
	{
		if (iParam0 == iVar0)
		{
			return 587140672;
		}
		else if (func_451(-2147483648, 1))
		{
			return -427383235;
		}
		else
		{
			return -298874420;
		}
	}
	iVar3 = func_1187(iVar0);
	iVar4 = func_1188();
	if (iVar4 == -1)
	{
		return 0;
	}
	if (func_1189(iVar4))
	{
		if (func_453(65536, iVar3))
		{
			return 817635301;
		}
		else
		{
			return -2072315053;
		}
	}
	if (func_453(65536, iVar3))
	{
		return 1831943097;
	}
	return -1191311076;
}

int func_466(int iParam0)
{
	return Global_1116202[iParam0];
}

int func_467(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

int func_468()
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if ((_0xd6f6acf4392187fb(iVar0) && _0x93a91a351a07360e(iVar0)) && _0x0f99f6436528a089(iVar0))
	{
		if (_0x424b17a7dc5c90bc(player_id()))
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	return 0;
}

int func_469()
{
	return func_482(7);
}

int func_470()
{
	return func_30();
}

int func_471()
{
	if (Local_4089.f_3393 == 1427578635)
	{
		return 0;
	}
	return func_1190(0);
}

int func_472()
{
	if (Local_4089.f_3393 != 1427578635)
	{
		return 0;
	}
	if (&Local_4089.f_3008[1] == 493038497)
	{
		iVar0 = Local_4089.f_4128;
		if (does_entity_exist(iVar0) && is_ped_a_player(iVar0))
		{
			return _get_bounty_for_player(network_get_player_index_from_ped(iVar0));
		}
	}
	else
	{
		return Local_4089.f_3897.f_57;
	}
	return 0;
}

bool func_473(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = participant_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return func_80(&(Local_4089.f_3982[iParam1]), iParam0);
}

struct<4> func_474(int iParam0)
{
	return Global_1248240->f_8903.f_16[iParam0]->f_1;
}

int func_475()
{
	if (Local_4089.f_4127 != -1 && func_1191(Local_4089.f_4127) == -896348601)
	{
		iVar0 = Local_13.f_82[0]->f_14;
	}
	else
	{
		iVar0 = Local_13.f_82[0]->f_13;
	}
	if (iVar0 == 255)
	{
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			iVar2 = int_to_playerindex(iVar1);
			if (network_is_player_active(iVar2) && network_is_player_a_participant(iVar2))
			{
				iVar3 = network_get_participant_index(iVar2);
				if (iVar3 != 255 && func_182(iVar3) == 1)
				{
					iVar0 = iVar2;
				}
				else
				{
					iVar1++;
				}
				if (iVar0 != 255 && network_is_player_active(iVar0))
				{
					return get_player_ped(iVar0);
				}
				return 0;
			}
		}
	}
}

int func_476()
{
	if (func_29(Local_4089.f_3391, 65536) && Local_13.f_356 > 0)
	{
		return Local_13.f_356;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			iVar1 = int_to_playerindex(iVar0);
			if (network_is_player_active(iVar1) && iVar1 == _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())))
			{
				if (network_is_player_a_participant(iVar1) && Local_920[network_get_participant_index(iVar1)]->f_96 != 0)
				{
					return func_725(Local_920[network_get_participant_index(iVar1)]->f_96);
				}
			}
			iVar0++;
		}
	}
	return func_725(Local_920[participant_id_to_int()]->f_96);
}

int func_477()
{
	if (Local_4089.f_4121 != 0)
	{
		return 0;
	}
	if (Local_13.f_82[0]->f_2 != 1)
	{
		return 0;
	}
	iVar0 = func_1188();
	if (func_1189(iVar0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_478(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_479(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

int func_480()
{
	if (func_1180(Local_4089.f_3391, 32))
	{
		return -1103972294;
	}
	else if (func_1180(Local_4089.f_3391, 64))
	{
		return 353052819;
	}
	else if (func_1180(Local_4089.f_3391, 16))
	{
		return -778415215;
	}
	return 0;
}

bool func_481(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_482(int iParam0)
{
	if (!func_1192(iParam0))
	{
		return 0;
	}
	iVar0 = func_1193(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_1194(iParam0, 1);
	}
	return 0;
}

int func_483()
{
	if (is_bit_set(Local_4089.f_4030, network_get_participant_index(player_id())))
	{
		return 1;
	}
	return 0;
}

int func_484(bool bParam0)
{
	return (*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_71;
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case -574721081:
			return 1;
	}
	return 0;
}

void func_486(int iParam0, bool bParam1)
{
	if (func_1195(iParam0, bParam1))
	{
		func_511(&((*Global_1248240)[Local_4089.f_3391]->f_19[bParam1]->f_84), iParam0);
	}
}

int func_487(bool bParam0)
{
	if (func_157(bParam0))
	{
		return 32;
	}
	return Local_4089.f_3391;
}

void func_488(int iParam0, bool bParam1, int iParam2)
{
	if (func_158(iParam0, bParam1, -1))
	{
		func_511(&((*(*(*Global_1238240)[network_player_id_to_int()])[Local_4089.f_3391])[bParam1]->f_1), iParam0);
	}
}

int func_489(int iParam0, bool bParam1)
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

Vector3 func_490(int iParam0, int iParam1)
{
	func_1198(-661540078, func_1196(iParam0), func_1197(iParam1), 0);
	if (!_datafile_get_vector(&vVar0, &(Global_1298378->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

int func_491(int iParam0, int iParam1)
{
	func_1198(1561818473, func_1196(iParam0), func_1197(iParam1), 0);
	if (!_datafile_get_hash(&uVar0, &(Global_1298378->f_1)))
	{
		return 0;
	}
	return uVar0;
}

bool func_492(int iParam0, int iParam1)
{
	return ((*Global_1128574)[iParam0]->f_34 && iParam1) != 0;
}

void func_493(int iParam0)
{
	iVar0 = player_id();
	(*Global_1128574)[iVar0]->f_34 = ((*Global_1128574)[iVar0]->f_34 || iParam0);
}

bool func_494(int iParam0, int iParam1)
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

bool func_495(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_145(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_1199())
	{
		return func_145(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_145(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_496(bool bParam0)
{
	Global_1940144->f_19 = !bParam0;
}

void func_497(bool bParam0)
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

void func_498(int iParam0, int iParam1)
{
	(*Global_1131045)[iParam0]->f_9 = ((*Global_1131045)[iParam0]->f_9 - ((*Global_1131045)[iParam0]->f_9 && iParam1));
}

void func_499(int iParam0, int iParam1)
{
	(*Global_1131045)[iParam0]->f_10 = ((*Global_1131045)[iParam0]->f_10 || iParam1);
}

void func_500(bool bParam0)
{
	if (func_178(128, bParam0))
	{
		return;
	}
	iVar0 = func_1200();
	if (!_0x854bc9b1a1ccd034(iVar0, Global_34))
	{
		return;
	}
	_0xde7b2b4144906cdf(iVar0, Global_34);
}

void func_501(bool bParam0)
{
	if (!is_string_null_or_empty(&(Local_4089.f_3779.f_26)))
	{
		func_1201();
		_delete_anim_scene(Local_4089.f_3779.f_34);
		if (!is_entity_visible(Global_34))
		{
			set_entity_visible(Global_34, true);
		}
		Local_4089.f_3779.f_34 = 0;
		StringCopy(&(Local_4089.f_3779.f_26), func_1202(), 64);
		Local_4089.f_3779.f_38 = 0;
		Local_4089.f_3779.f_37 = 0;
		Local_4089.f_3779.f_36 = 0;
		Local_4089.f_3779.f_39 = -1;
		Local_4089.f_3779.f_35 = -1;
		func_184(134217728, bParam0);
		func_184(67108864, bParam0);
	}
}

void func_502(bool bParam0)
{
	StringCopy(&cVar0, func_1203(bParam0), 64);
	if (is_string_null_or_empty(&cVar0))
	{
		return;
	}
	if (!_does_text_database_exist(&cVar0))
	{
		return;
	}
	if (!_text_database_has_loaded(&cVar0) && !_0x3cf96e16265b7dc8(&cVar0))
	{
		return;
	}
	_text_database_delete(&cVar0);
}

int func_503(bool bParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = network_player_id_to_int();
	}
	return (*(*Global_1238240)[iParam1])[Local_4089.f_3391][bParam0];
}

void func_504(bool bParam0, int iParam1)
{
	if (!func_178(8388608, bParam0))
	{
		return;
	}
	if (!func_1204(bParam0, iParam1, &uVar0, &uVar8, &uVar16))
	{
		func_184(8388608, bParam0);
		return;
	}
	func_1205(&uVar0, &uVar8, &uVar16);
	func_1206(&uVar0, &uVar8, &uVar16);
	func_184(8388608, bParam0);
}

void func_505(bool bParam0)
{
	if (!is_valid_interior(Local_4089.f_3779.f_24))
	{
		return;
	}
	unpin_interior(Local_4089.f_3779.f_24);
	Local_4089.f_3779.f_24 = 0;
}

void func_506(bool bParam0)
{
	if (!func_178(1073741824, bParam0))
	{
		return;
	}
	end_srl();
	func_184(1073741824, bParam0);
	func_79(70, 1, 0);
}

void func_507(bool bParam0)
{
	if (!func_158(8, bParam0, -1))
	{
		return;
	}
	if (is_string_null_or_empty(&(Local_4089.f_3779.f_8)))
	{
		return;
	}
	_0x798be43c9393632b(&(Local_4089.f_3779.f_8));
	if (_0x927b810e43e99932(&(Local_4089.f_3779.f_8)))
	{
		_0x0a5a4f1979abb40e(&(Local_4089.f_3779.f_8));
	}
	StringCopy(&(Local_4089.f_3779.f_8), "", 64);
	StringCopy(&(Local_4089.f_3779.f_8.f_8), "", 64);
}

int func_508(bool bParam0)
{
	return (*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_1;
}

int func_509(bool bParam0)
{
	return (*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_1.f_1;
}

bool func_510(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return func_146((*Global_1238240)[iParam1]->f_302, iParam0);
}

void func_511(int iParam0, int iParam1)
{
	func_1207(iParam0, iParam1);
}

bool func_512(bool bParam0)
{
	Var0 = -1;
	Var0.f_5 = 16;
	Var0.f_77 = -1;
	Var0.f_82 = -1;
	*(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0] = { Var0 };
	(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0] = func_1208(&(Local_4089.f_3355), bParam0);
	if (&(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0] == -1)
	{
		return false;
	}
	iVar87 = func_1209(&(Local_4089.f_3355), bParam0);
	(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_71 = iVar87;
	(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_74 = func_1210(bParam0);
	if ((*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_74 == -1)
	{
		return false;
	}
	if (func_1211(iVar87) || func_1212(&(Local_4089.f_3355), bParam0))
	{
		func_996(128, bParam0, 1);
	}
	else
	{
		(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_78 = func_1213(&(Local_4089.f_3355), bParam0);
	}
	if (func_1214(iVar87) || func_1215(&(Local_4089.f_3355), bParam0))
	{
		func_996(256, bParam0, 1);
		func_236(13, 1, 0);
		func_190(32768, bParam0, 1);
	}
	if (func_1216(&(Local_4089.f_3355), bParam0))
	{
		func_996(2048, bParam0, 1);
	}
	if (func_157(bParam0))
	{
		func_190(32768, bParam0, 1);
	}
	if (func_1217(bParam0))
	{
		func_190(33554432, bParam0, 1);
	}
	if (func_1218(&(Local_4089.f_3355), bParam0))
	{
		func_996(536870912, bParam0, 1);
	}
	if ((&Local_4089.f_3008[0] != 404851220 || &Local_4089.f_3008[1] != 404851220) || Local_13.f_357 == 1)
	{
		func_996(4096, bParam0, 1);
	}
	return true;
}

bool func_513(bool bParam0)
{
	if (!func_1219(bParam0))
	{
		return true;
	}
	iVar0 = func_919(func_1220(&(Local_4089.f_3355), bParam0));
	if (iVar0 != -1)
	{
		(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_77 = iVar0;
		iVar1 = Local_4089.f_3027[iVar0]->f_8;
		if (iVar1 == -1)
		{
			iVar1 = 0;
		}
		(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_70 = iVar1;
		return true;
	}
	return false;
}

bool func_514(bool bParam0)
{
	func_1222(bParam0, func_1221(&(Local_4089.f_3355), bParam0));
	iVar0 = 0;
	while (iVar0 <= (func_1223(bParam0) - 1))
	{
		(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_5[iVar0] = func_1224(&(Local_4089.f_3355), bParam0, iVar0);
		(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_5[iVar0]->f_3 = func_1225(&(Local_4089.f_3355), bParam0, iVar0);
		(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_5[iVar0]->f_1 = func_1226(&(Local_4089.f_3355), bParam0, iVar0);
		(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_5[iVar0]->f_2 = func_1227(&(Local_4089.f_3355), bParam0, iVar0);
		if (func_1228(&((*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_5[iVar0])))
		{
			return false;
		}
		if (func_1229(&(Local_4089.f_3355), bParam0, iVar0))
		{
			(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_5[iVar0]->f_3 = func_1230((*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_5[iVar0]->f_3);
		}
		if ((&(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_5[iVar0] == 0 || (*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_5[iVar0]->f_3 == 0) || (*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_5[iVar0]->f_1 == -1)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_515(bool bParam0)
{
	switch (func_484(bParam0))
	{
		case 1968681380:
			if ((*Global_1237665)[Local_4089.f_3391]->f_15 == player_id() && !func_1231())
			{
				func_190(268435456, bParam0, 1);
			}
			break;
	}
	return true;
}

void func_516(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1232(iParam0);
	}
	else
	{
		func_1233(iParam0);
	}
}

bool func_517(int iParam0)
{
	return &Local_4089.f_2890.f_3[iParam0] != 0;
}

bool func_518(var uParam0, int iParam1, bool bParam2)
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
		if (_0x05d6195fb4d428f4(uParam0))
		{
		}
		return true;
	}
	return false;
}

bool func_519(int iParam0)
{
	return func_145(&(Local_4089.f_2890.f_37), iParam0, 3);
}

void func_520(var uParam0, bool bParam1, bool bParam2)
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

void func_521(bool bParam0, bool bParam1)
{
	if (bParam0->f_2 > 0)
	{
		_0xdd1232b332cbb9e7(12, 1, 0);
		if (bParam1)
		{
			func_1234(bParam0);
			func_1235();
		}
		func_1236(bParam0);
		_databinding_remove_data_entry(bParam0->f_6);
		_databinding_remove_data_entry(bParam0->f_5);
		_0xf1e6979c0b779985(&(bParam0->f_4));
		bParam0->f_9 = 0;
		func_1237(0);
		func_1238(0);
		_0xdd1232b332cbb9e7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		_copy_memory(bParam0, &Var0, 15);
	}
}

void func_522(var uParam0, bool bParam1, bool bParam2)
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
		if (animpostfx_is_running(func_1239()))
		{
			_0xc5cb91d65852ed7e(func_1239());
			_display_hud_component(-2124237476);
			_0x981c7d863980fa51();
		}
	}
}

bool func_523(var uParam0, int iParam1)
{
	*iParam1 = uParam0->f_4;
	iParam1->f_2 = -2115023634;
	iParam1->f_1 = func_255(uParam0, *iParam1, iParam1->f_2);
	return (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(iParam1->f_1), iParam1));
}

void func_524(var uParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1240(&(Local_4089.f_3355), *uParam0);
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			vVar2 = { func_1241(&(Local_4089.f_3355), *uParam0, iVar1) };
			fVar5 = func_1242(&(Local_4089.f_3355), *uParam0, iVar1);
			_0x4bdebea5702b97a9(vVar2, fVar5, !bParam1, 1);
			iVar1++;
		}
	}
	if (iParam2 == -584819812 && bParam1)
	{
		bVar6 = true;
	}
	_0x4bdebea5702b97a9(348.1417f, 1595.944f, 119.7695f, 10f, !bVar6, 1);
	_0x4bdebea5702b97a9(-337.9259f, 1148.451f, 142.5506f, 10f, !bVar6, 1);
	if (bParam1)
	{
		func_236(131, 1, 0);
	}
	else
	{
		func_79(131, 1, 0);
	}
}

bool func_525(var uParam0, int iParam1, var uParam2)
{
	*iParam1 = uParam0->f_4;
	iParam1->f_2 = -1608503687;
	iParam1->f_1 = func_255(uParam0, *iParam1, iParam1->f_2);
	iParam1->f_3 = uParam2;
	iParam1->f_4 = 0;
	return (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(iParam1->f_1), iParam1));
}

bool func_526(int iParam0)
{
	return func_495(49, iParam0);
}

bool func_527(var uParam0)
{
	return func_218(uParam0, -1422675184, 0, -62642921, 0, 0, 0, 0, 0);
}

void func_528(bool bParam0)
{
	if (bParam0)
	{
		func_99(98);
	}
	else
	{
		func_101(98);
	}
}

bool func_529()
{
	switch (Local_4089.f_3393)
	{
		case -1777724963:
			return true;
		case 1427578635:
			return &Local_4089.f_3008[1] != 493038497;
	}
	return false;
}

bool func_530(int iParam0)
{
	return *iParam0 != -1;
}

struct<2> func_531()
{
	Var0 = 1;
	iVar2 = 0;
	while (iVar2 <= 7)
	{
		func_286(&Var0, iVar2, 1);
		iVar2++;
	}
	return Var0;
}

int func_532(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = -1;
	if (func_1243(&iParam2))
	{
		return iVar0;
	}
	iVar0 = func_1244();
	if (!func_530(&iVar0))
	{
		return iVar0;
	}
	if (iParam4 == 0)
	{
		iVar1 = get_id_of_this_thread();
	}
	else if (_does_thread_exist(iParam4))
	{
		if (is_thread_active(iParam4, false))
		{
			iVar1 = iParam4;
		}
		else
		{
			iVar1 = get_id_of_this_thread();
		}
	}
	else
	{
		iVar1 = get_id_of_this_thread();
	}
	func_1245(iVar0, 1);
	func_1246(iVar0, iVar1);
	func_1247(iVar0, Param0);
	func_1248(iVar0, iParam5);
	func_1249(iVar0, iParam6);
	func_1250(iVar0, &iParam2);
	func_1252(func_1251() + 1);
	return iVar0;
}

void func_533(bool bParam0, int iParam1)
{
	if (!func_530(bParam0))
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_1249(*bParam0, iParam1);
	}
	func_1245(*bParam0, 2);
	uVar0 = -1;
	_copy_memory(bParam0, &uVar0, 1);
}

void func_534(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_76), iParam0))
	{
		func_1253(iParam0);
		_0xd426e2e3288469d6(&(Local_4089.f_2890.f_76), iParam0);
	}
}

bool func_535(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	return func_80(Local_4089.f_2190[iParam1]->f_11, iParam0);
}

void func_536(int iParam0, int iParam1)
{
	if (func_535(iParam0, iParam1))
	{
		if (iParam1 < 0 || iParam1 > 32)
		{
			return;
		}
		func_511(&(Local_4089.f_2190[iParam1]->f_11), iParam0);
	}
}

bool func_537(int iParam0)
{
	switch (iParam0)
	{
		case -1267301591:
		case -629714380:
		case 1855808851:
		case 2124478841:
			return true;
	}
	return false;
}

bool func_538()
{
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (func_537(Local_4089.f_2190[iVar0]->f_7) && func_535(131072, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_539(int iParam0)
{
	switch (iParam0)
	{
		case -2084089361:
		case -1929190101:
		case -1691081444:
		case -617762131:
		case -128962623:
		case 133721279:
		case 194047318:
		case 357085972:
		case 1105460229:
		case 1667145759:
			return true;
	}
	return false;
}

bool func_540()
{
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (func_539(Local_4089.f_2190[iVar0]->f_7) && func_535(131072, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_541()
{
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (!_does_volume_exist(&(Local_4089.f_2190[iVar0])))
		{
		}
		else if (!func_539(Local_4089.f_2190[iVar0]->f_7))
		{
		}
		else if (func_535(131072, iVar0))
		{
			iVar1++;
			if (iVar1 > 1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_542(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_543(int iParam0)
{
	if (!func_542(iParam0))
	{
		return;
	}
	if (func_1254(iParam0, 8))
	{
		func_1255(iParam0, 8);
	}
}

bool func_544(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = iParam1;
	iVar1 = (iVar0 / 31);
	iVar2 = func_1256((iVar0 % 31));
	return ((*Global_1056141)[iParam0]->f_11[iVar1] && iVar2) != 0;
}

void func_545(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return;
	}
	iVar0 = network_player_id_to_int();
	iVar1 = iParam0;
	iVar2 = (iVar1 / 31);
	iVar3 = func_1256((iVar1 % 31));
	(*Global_1056141)[iVar0]->f_11[iVar2] = ((*Global_1056141)[iVar0]->f_11[iVar2] || iVar3);
}

void func_546(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return;
	}
	iVar0 = network_player_id_to_int();
	iVar1 = iParam0;
	iVar2 = (iVar1 / 31);
	iVar3 = func_1256((iVar1 % 31));
	(*Global_1056141)[iVar0]->f_11[iVar2] = (&(*Global_1056141)[iVar0]->f_11[iVar2] - ((*Global_1056141)[iVar0]->f_11[iVar2] && iVar3));
}

void func_547()
{
	func_1257();
}

char* func_548()
{
	switch (Local_4089.f_3393)
	{
		case -1777724963:
			return "MP_BH_MISSION_COMPLETE_MUSIC";
		case -260420884:
		case 850213441:
		case 1918154385:
			return "MP_TR_MISSION_COMPLETE_MUSIC";
		case -1784925006:
		case -669677371:
		case -232478158:
		case 78055447:
		case 974227447:
		case 1532822440:
			return "MP_MN_MISSION_COMPLETE_MUSIC";
	}
	return "";
}

void func_549(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1940311->f_242.f_5, uParam0);
	func_1258(uParam0);
	_databinding_remove_data_entry(uParam0);
	func_1259((Global_1940311->f_242.f_1186 - 1));
}

int func_550(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)
{
	iVar5 = iParam3;
	iVar6 = iParam4;
	iVar7 = iParam7;
	if (func_1260(uParam0, iParam1, &Var0, iVar6, bParam5, bParam6, iVar7, bParam8, iParam9))
	{
		func_1261(Var0, iParam2, &iVar5, 0);
	}
	return iVar5;
}

struct<8> func_551(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9)
{
	StringCopy(&cVar5, sParam3, 64);
	iVar13 = iParam4;
	iVar14 = iParam7;
	if (func_1260(uParam0, iParam1, &Var0, iVar13, bParam5, iParam6, iVar14, bParam8, iParam9))
	{
		func_217(Var0, iParam2, &cVar5, 0);
	}
	return cVar5;
}

bool func_552(int iParam0, bool bParam1)
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
		iVar2 = func_1262(iVar4, 1);
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
				func_1263(iVar2, bVar3, bParam1);
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
					(Global_1139381->f_3876.f_2[func_1264(iVar2, 1)])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

void func_553(int iParam0)
{
	if (!func_542(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

int func_554(int iParam0, int iParam1, int iParam2)
{
	return func_1265(iParam0, iParam1, iParam2);
}

int func_555(struct<2> Param0)
{
	if (!func_106(Param0))
	{
		return -1;
	}
	iVar0 = func_1266(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

void func_556(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_557()
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

int func_558(int iParam0)
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

int func_559(int iParam0)
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

void func_560(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

int func_561(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_1267())
	{
		return 0;
	}
	if (!func_613())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_1268(&Global_0, 8);
	}
	func_1268(&Global_0, 1);
	return 1;
}

void func_562(struct<2> Param0, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	iVar0 = func_1269(func_570(Param0));
	iVar1 = func_455(Param0);
	Var2.f_1 = bParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_88() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_1270(Param0, &Var2);
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

void func_563(struct<2> Param0, int iParam2)
{
	if (!func_106(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1271(Param0);
	}
	else
	{
		func_1272(Param0, iParam2);
	}
	func_1273();
}

struct<2> func_564(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

void func_565(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_1274(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_1275(Global_1940258, 8388608);
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

void func_566(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1276(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1277(cVar2);
			}
			else
			{
				func_1278();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_567(bool bParam0)
{
	if (!bParam0 && func_1279(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_568(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_569(struct<2> Param0)
{
	return func_1281(func_1280(Param0));
}

int func_570(var uParam0, var uParam1)
{
	return uParam0;
}

int func_571(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_107((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_572(int iParam0, var uParam1)
{
	func_1282(uParam1, iParam0);
	if (Global_1196205->f_129 > 0)
	{
		if (Global_1196205->f_130 == iParam0)
		{
			func_1283(0);
		}
	}
	func_1284();
}

int func_573(bool bParam0)
{
	Var0 = { func_13(player_id()) };
	_0x4ef23e04a0c8ff51(&Var0, &iVar7);
	iVar9 = iVar7;
	if (bParam0)
	{
		if (iVar9 >= _0xf8bcc5eca33ac9c1())
		{
			return 948632731;
		}
		return 0;
	}
	if (iVar9 >= Global_1901947->f_166.f_4)
	{
		return 977420264;
	}
	else if (iVar9 >= Global_1901947->f_166.f_3)
	{
		return 1960865708;
	}
	else if (iVar9 >= Global_1901947->f_166.f_2)
	{
		return 209722732;
	}
	return 0;
}

bool func_574(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	Var0 = { func_13(player_id()) };
	_0x4ef23e04a0c8ff51(&Var0, &iVar7);
	if (iVar7 < Global_1901947->f_166.f_2)
	{
		return false;
	}
	iVar9 = 0;
	while (iVar9 <= 32)
	{
		iVar11 = int_to_playerindex(iVar9);
		if (network_is_player_active(iVar11) && _0x81fb74c83c2ed69f(iVar11))
		{
			if (iVar11 == player_id())
			{
				iVar10++;
			}
			else
			{
				Var0 = { func_13(iVar11) };
				_0x4ef23e04a0c8ff51(&Var0, &iVar7);
				if (iVar7 >= Global_1901947->f_166.f_2)
				{
					iVar10++;
				}
			}
		}
		iVar9++;
	}
	return iVar10 > 1;
}

int func_575(int iParam0)
{
	switch (iParam0)
	{
		case 209722732:
			return Global_1901947->f_166.f_14;
		case 1960865708:
			return Global_1901947->f_166.f_15;
		case 977420264:
			return Global_1901947->f_166.f_16;
		case 948632731:
			return Global_1901947->f_166.f_17;
		default:
			break;
	}
	return 0;
}

int func_576(int iParam0)
{
	switch (iParam0)
	{
		case 209722732:
			return Global_1901947->f_166.f_10;
		case 1960865708:
			return Global_1901947->f_166.f_11;
		case 977420264:
			return Global_1901947->f_166.f_12;
		case 948632731:
			return Global_1901947->f_166.f_13;
		default:
			break;
	}
	return 0;
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 209722732:
			return Global_1901947->f_166.f_6;
		case 1960865708:
			return Global_1901947->f_166.f_7;
		case 977420264:
			return Global_1901947->f_166.f_8;
		case 948632731:
			return Global_1901947->f_166.f_9;
		default:
			break;
	}
	return 0;
}

void func_578(int iParam0, bool bParam1)
{
	if (!func_1285(iParam0))
	{
		if (bParam1)
		{
		}
		func_251(&(Global_1257541->f_8862), iParam0);
	}
}

void func_579(int iParam0, bool bParam1)
{
	if (func_1285(iParam0))
	{
		if (bParam1)
		{
		}
		func_144(&(Global_1257541->f_8862), iParam0);
	}
}

bool func_580(int iParam0)
{
	switch (iParam0)
	{
		case -1784925006:
		case -669677371:
		case -232478158:
		case 78055447:
		case 974227447:
		case 1532822440:
			return true;
		default:
			break;
	}
	return false;
}

void func_581(int iParam0)
{
	if (!func_613())
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	Var0 = { func_1286(iParam0) };
	if (!_stat_id_is_valid(&Var0))
	{
		return;
	}
	iVar2 = Global_1296859->f_21;
	if (!stat_id_set_int(&Var0, iVar2, true))
	{
	}
}

bool func_582(int iParam0)
{
	switch (iParam0)
	{
		case -1086711901:
		case -697789102:
		case 195932838:
			return true;
	}
	return false;
}

bool func_583(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

void func_584(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_1287(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_239(iParam0);
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
						func_584(iVar3, iParam1, 0, 1, 0, 0);
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
			func_1288(&Var6, uVar4);
		}
	}
}

void func_585(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_586(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_260), iParam0);
}

bool func_587(int iParam0)
{
	if (!network_does_network_id_exist(iParam0))
	{
		return false;
	}
	iVar0 = net_to_ent(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_network_id_owned_by_participant(iParam0))
	{
		return false;
	}
	if (!network_is_host_of_this_script())
	{
		return false;
	}
	return func_1289(iParam0);
}

bool func_588(int iParam0)
{
	return func_1290(iParam0, 2);
}

int func_589(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam1)
	{
		case 886638433:
			iVar0 = func_1291(iParam0, iParam2, iParam3);
			break;
		case -584819812:
			iVar0 = func_1292(iParam0, iParam2, iParam3);
			break;
		case -1918493640:
			iVar0 = func_1293(iParam0, iParam2);
			break;
		case 1015970717:
			iVar0 = func_1294(iParam2);
			break;
		case -916820003:
			iVar0 = func_1295(iParam0, iParam2);
			break;
		case -1091027173:
			iVar0 = func_1296(iParam0, iParam2);
			break;
		case 860364721:
			iVar0 = func_1297(iParam0, iParam2);
			break;
		case -783556459:
			iVar0 = func_1298(iParam0, iParam2);
			break;
	}
	return iVar0;
}

struct<8> func_590(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

int func_591(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	return func_1299(uParam0, uParam0->f_4, iParam1, iParam2, iParam3, bParam4, bParam5, iParam6, bParam7, iParam8, iParam9);
}

int func_592(int iParam0, int iParam1)
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

bool func_593(int iParam0)
{
	if (func_1300(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_594()
{
	return true;
}

var func_595(var uParam0, int iParam1)
{
	return func_591(uParam0, -433267846, -1, -449359893, iParam1, 0, 0, 0, 0, 0);
}

var func_596(var uParam0, int iParam1)
{
	return func_591(uParam0, -450880383, 0, -449359893, iParam1, 0, 0, 0, 0, 0);
}

struct<8> func_597(var uParam0, int iParam1)
{
	return func_252(uParam0, 217166701, "", -449359893, iParam1, 0, 0, 0, 0);
}

struct<8> func_598(var uParam0, int iParam1)
{
	return func_252(uParam0, 1933752918, "", -449359893, iParam1, 0, 0, 0, 0);
}

void func_599(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1301(1497516462);
			func_249(2016141805);
			func_249(1010885152);
			func_249(-502324015);
			break;
		case 2016141805:
			func_249(1497516462);
			func_1301(2016141805);
			func_249(1010885152);
			func_249(-502324015);
			break;
		case 1010885152:
			func_249(1497516462);
			func_249(2016141805);
			func_1301(1010885152);
			func_249(-502324015);
			break;
		case -502324015:
			func_249(1497516462);
			func_249(2016141805);
			func_249(1010885152);
			func_1301(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_249(-538889627);
			func_249(-538880323);
			func_249(-1056767524);
			func_1301(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1302();
			func_1301(iParam0);
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
			func_1303();
			func_1301(iParam0);
			break;
		case 2019386373:
			func_249(-664252410);
			func_249(2109952320);
			func_1301(2019386373);
			break;
		case -664252410:
			func_249(2019386373);
			func_249(2109952320);
			func_1301(-664252410);
			break;
		case 2109952320:
			func_249(2019386373);
			func_249(-664252410);
			func_1301(2109952320);
			break;
		case -1674179981:
			func_249(-1835851517);
			func_249(-1838352012);
			func_1301(-1674179981);
			break;
		case -1835851517:
			func_249(-1674179981);
			func_249(-1838352012);
			func_1301(-1835851517);
			break;
		case -1838352012:
			func_249(-1674179981);
			func_249(-1835851517);
			func_1301(-1838352012);
			break;
		case -1717960576:
			func_249(210001842);
			func_1301(-1717960576);
			break;
		case 210001842:
			func_249(-1717960576);
			func_1301(210001842);
			break;
		case -150493654:
			func_249(-1271608261);
			func_249(1846061697);
			func_249(-1145519186);
			func_1301(-150493654);
			break;
		case -1271608261:
			func_249(-150493654);
			func_249(1846061697);
			func_249(-1145519186);
			func_1301(-1271608261);
			break;
		case 1846061697:
			func_249(-150493654);
			func_249(-1271608261);
			func_249(-1145519186);
			func_1301(1846061697);
			break;
		case -1145519186:
			func_249(-150493654);
			func_249(-1271608261);
			func_249(1846061697);
			func_1301(-1145519186);
			break;
		case 1766284049:
			func_249(280705402);
			func_249(1926308480);
			func_1301(1766284049);
			break;
		case 280705402:
			func_249(1766284049);
			func_249(1926308480);
			func_1301(280705402);
			break;
		case 1926308480:
			func_249(1766284049);
			func_249(280705402);
			func_1301(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_249(439465264);
				func_1301(1609506757);
			}
			else
			{
				func_249(1609506757);
				func_249(439465264);
			}
			break;
		case 439465264:
			if (func_1279(1609506757))
			{
				if (bParam1)
				{
					func_1301(439465264);
				}
				else
				{
					func_249(439465264);
				}
			}
			break;
		case 1822001510:
			func_249(-1612662716);
			func_1301(1822001510);
			break;
		case -1612662716:
			func_249(1822001510);
			func_1301(-1612662716);
			break;
		case 1306158345:
			func_249(1952610440);
			func_249(-223469678);
			func_249(-404698347);
			func_249(1517904467);
			func_1301(1306158345);
			break;
		case 1952610440:
			func_249(1306158345);
			func_249(-223469678);
			func_249(-404698347);
			func_249(1517904467);
			func_1301(1952610440);
			break;
		case -223469678:
			func_249(1306158345);
			func_249(1952610440);
			func_249(-404698347);
			func_249(1517904467);
			func_1301(-223469678);
			break;
		case -404698347:
			func_249(1306158345);
			func_249(1952610440);
			func_249(-223469678);
			func_249(1517904467);
			func_1301(-404698347);
			break;
		case 1517904467:
			func_249(1306158345);
			func_249(1952610440);
			func_249(-223469678);
			func_249(-404698347);
			func_1301(1517904467);
			break;
		case 1376646519:
			func_249(931649776);
			func_249(-434590080);
			func_249(1743048395);
			func_249(449774763);
			func_1301(1376646519);
			break;
		case 931649776:
			func_249(1376646519);
			func_249(-434590080);
			func_249(1743048395);
			func_249(449774763);
			func_1301(931649776);
			break;
		case -434590080:
			func_249(1376646519);
			func_249(931649776);
			func_249(1743048395);
			func_249(449774763);
			func_1301(-434590080);
			break;
		case 1743048395:
			func_249(1376646519);
			func_249(931649776);
			func_249(-434590080);
			func_249(449774763);
			func_1301(1743048395);
			break;
		case 449774763:
			func_249(1376646519);
			func_249(931649776);
			func_249(-434590080);
			func_249(1743048395);
			func_1301(449774763);
			break;
		case -1414537028:
			func_249(38162571);
			func_249(1350391819);
			func_249(54073871);
			func_1301(-1414537028);
			break;
		case 38162571:
			func_249(-1414537028);
			func_249(1350391819);
			func_249(54073871);
			func_1301(38162571);
			break;
		case 1350391819:
			func_249(-1414537028);
			func_249(38162571);
			func_249(54073871);
			func_1301(1350391819);
			break;
		case 54073871:
			func_249(-1414537028);
			func_249(38162571);
			func_249(1350391819);
			func_1301(54073871);
			break;
		case 198200492:
			func_1301(198200492);
			func_249(-1124061431);
			func_249(52706132);
			func_249(-259123672);
			break;
		case -1124061431:
			func_249(198200492);
			func_1301(-1124061431);
			func_249(52706132);
			func_249(-259123672);
			break;
		case 52706132:
			func_249(198200492);
			func_249(-1124061431);
			func_1301(52706132);
			func_249(-259123672);
			break;
		case -259123672:
			func_249(198200492);
			func_249(-1124061431);
			func_249(52706132);
			func_1301(-259123672);
			break;
		case -919512195:
			func_1301(-919512195);
			func_249(-1925798111);
			func_249(420709909);
			func_249(1703426636);
			break;
		case -1925798111:
			func_1301(-1925798111);
			func_249(-919512195);
			func_249(420709909);
			func_249(1703426636);
			break;
		case 420709909:
			func_1301(420709909);
			func_249(-919512195);
			func_249(-1925798111);
			func_249(1703426636);
			break;
		case 1703426636:
			func_1301(1703426636);
			func_249(-919512195);
			func_249(-1925798111);
			func_249(420709909);
			break;
		case -1223121209:
			func_1301(-1223121209);
			func_249(630808005);
			break;
		case 630808005:
			func_1301(630808005);
			func_249(-1223121209);
			break;
		case 1453909576:
			func_1301(1453909576);
			func_249(1643531967);
			break;
		case 1643531967:
			func_1301(1643531967);
			func_249(1453909576);
			break;
		case 0:
			func_1301(0);
			func_249(473295046);
			func_249(-1738165526);
			break;
		case 473295046:
			func_1301(473295046);
			func_249(0);
			func_249(-1738165526);
			break;
		case -1738165526:
			func_1301(-1738165526);
			func_249(0);
			func_249(473295046);
			break;
		case 932909855:
			func_1301(932909855);
			func_249(2051822093);
			break;
		case 2051822093:
			func_1301(2051822093);
			func_249(932909855);
			break;
		case 405586984:
			func_1301(405586984);
			func_249(1509509592);
			func_249(-959357075);
			func_249(-1311865656);
			break;
		case 1509509592:
			func_1301(1509509592);
			func_249(405586984);
			func_249(-959357075);
			func_249(-1311865656);
			break;
		case -959357075:
			func_1301(-959357075);
			func_249(1509509592);
			func_249(405586984);
			func_249(-1311865656);
			break;
		case -1311865656:
			func_1301(-1311865656);
			func_249(1509509592);
			func_249(-959357075);
			func_249(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1301(-524145696);
			}
			else
			{
				func_249(-524145696);
			}
			func_249(1626481264);
			func_249(282809459);
			break;
		case 282809459:
			func_1301(282809459);
			func_249(1626481264);
			func_249(-524145696);
			break;
		case 1626481264:
			func_1301(1626481264);
			func_249(-524145696);
			func_249(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1301(885203519);
			}
			else
			{
				func_249(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1301(-1080627546);
			}
			else
			{
				func_249(-1080627546);
			}
			break;
		case -510945576:
			if (bParam1)
			{
				func_1301(-510945576);
			}
			else
			{
				func_249(-510945576);
				func_250(385812466);
				func_250(-1201452352);
			}
			break;
		default:
			if (bParam1)
			{
				func_1301(iParam0);
			}
			else
			{
				func_249(iParam0);
			}
			break;
	}
}

void func_600(int iParam0)
{
	switch (iParam0)
	{
		case -2043909922:
		case -1145153057:
			if (!func_110())
			{
				if (func_1279(-2043909922))
				{
					func_1304(-2127191462, 1, 0);
					func_1305(-2127191462, 0, 0);
					door_system_set_automatic_rate(-2127191462, 2f);
					door_system_set_open_ratio(-2127191462, 1f, 0);
				}
				else if (func_1279(-1145153057))
				{
					func_1304(-2127191462, 1, 0);
					func_1305(-2127191462, 1, 0);
					door_system_set_open_ratio(-2127191462, 0f, 1);
					_0x7f458b543006c8fe(-2127191462, 16);
				}
				else
				{
					func_250(-2127191462);
				}
			}
			break;
		case 468797819:
		case 589380360:
			if (!func_110())
			{
				if (func_1279(589380360))
				{
					func_1304(-2127191462, 1, 0);
					func_1305(-929446589, 0, 0);
					door_system_set_automatic_rate(-929446589, 2f);
					door_system_set_open_ratio(-929446589, 1f, 0);
				}
				else if (func_1279(468797819))
				{
					func_1304(-2127191462, 1, 0);
					func_1305(-929446589, 1, 0);
					door_system_set_open_ratio(-929446589, 0f, 1);
					_0x7f458b543006c8fe(-929446589, 16);
				}
				else
				{
					func_250(-929446589);
				}
			}
			break;
		case -632127260:
		case 965467037:
			if (!func_110())
			{
				if (func_1279(-632127260))
				{
					func_1304(-2127191462, 1, 0);
					func_1305(1207903970, 0, 0);
					door_system_set_automatic_rate(1207903970, 2f);
					door_system_set_open_ratio(1207903970, 1f, 0);
				}
				else if (func_1279(965467037))
				{
					func_1304(-2127191462, 1, 0);
					func_1305(1207903970, 1, 0);
					door_system_set_open_ratio(1207903970, 0f, 1);
					_0x7f458b543006c8fe(1207903970, 16);
				}
				else
				{
					func_250(1207903970);
				}
			}
			break;
		case -279765076:
		case -209894800:
			if (!func_110())
			{
				if (func_1279(-209894800))
				{
					func_1304(-2127191462, 1, 0);
					func_1305(193903155, 0, 0);
					door_system_set_automatic_rate(193903155, 2f);
					door_system_set_open_ratio(193903155, 1f, 0);
				}
				else if (func_1279(-279765076))
				{
					func_1304(-2127191462, 1, 0);
					func_1305(193903155, 1, 0);
					door_system_set_open_ratio(193903155, 0f, 1);
					_0x7f458b543006c8fe(193903155, 16);
				}
				else
				{
					func_250(193903155);
				}
			}
			break;
		case -1585840296:
		case -510945576:
			if (!func_110())
			{
				if (func_1279(-510945576))
				{
					func_1305(385812466, 0, 0);
					func_1305(-1201452352, 0, 0);
					door_system_set_open_ratio(385812466, 1f, 1);
					door_system_set_open_ratio(-1201452352, -1f, 1);
				}
				else if (func_1279(-1585840296))
				{
					func_1305(385812466, 0, 0);
					func_1305(-1201452352, 0, 0);
				}
				else
				{
					func_1305(385812466, 1, 0);
					func_1305(-1201452352, 1, 0);
				}
			}
			break;
		case 1238086793:
			if (func_1279(1238086793))
			{
				func_1306(-414301703);
				func_1306(1423912753);
				func_1307("nav_lakay_mp");
				func_1308("MS_HIDOUT_LAKAY");
				func_1309(-414301703);
			}
			else
			{
				func_1310(-414301703);
				func_1306(1423912753);
				func_1307("MS_HIDOUT_LAKAY");
				func_1308("nav_lakay_mp");
				func_1311(-414301703);
			}
			break;
		case 1302228510:
			if (func_1279(1302228510))
			{
				func_1306(-1809365172);
				func_1308("MS_HIDOUT_BEAVERHOLLOW");
				func_1309(-1809365172);
			}
			else
			{
				func_1310(-1809365172);
				func_1307("MS_HIDOUT_BEAVERHOLLOW");
				func_1311(-1809365172);
			}
			break;
		case -460024530:
			if (func_1279(-460024530))
			{
				func_1306(1092530042);
				func_1308("MS_HIDOUT_MILLESANICLAIM");
			}
			else
			{
				func_1310(1092530042);
				func_1307("MS_HIDOUT_MILLESANICLAIM");
			}
			break;
		case -108780030:
			if (func_1279(-108780030))
			{
				func_1306(-2051059045);
				func_1308("MS_HIDOUT_FARMHOUSE");
				func_1309(-2051059045);
			}
			else
			{
				func_1310(-2051059045);
				func_1307("MS_HIDOUT_FARMHOUSE");
				func_1311(-2051059045);
			}
			break;
		case -1340339190:
			if (func_1279(-1340339190))
			{
				func_1306(-612173099);
				func_1308("MS_HIDOUT_ROCKYSEVEN");
				func_1309(-612173099);
				if (!does_navmesh_blocking_object_exist(Global_1939655->f_21))
				{
					Global_1939655->f_21 = add_navmesh_blocking_object(2986.267f, 2204.891f, 165.9559f, 2.793124f, 2.804754f, 2.088651f, 120f, false, 7);
				}
			}
			else
			{
				func_1310(-612173099);
				func_1307("MS_HIDOUT_ROCKYSEVEN");
				func_1311(-612173099);
				if (does_navmesh_blocking_object_exist(Global_1939655->f_21))
				{
					remove_navmesh_blocking_object(&(Global_1939655->f_21));
				}
			}
			break;
		case 1698972798:
			if (func_1279(1698972798))
			{
				func_1306(-1408478050);
				func_1308("MS_HIDOUT_MOSSYFLATS");
				func_1309(-1408478050);
			}
			else
			{
				func_1310(-1408478050);
				func_1307("MS_HIDOUT_MOSSYFLATS");
				func_1311(-1408478050);
			}
			break;
		case -1296807958:
			if (func_1279(-1296807958))
			{
				func_1306(-1974746920);
				func_1308("MS_HIDOUT_QUAKERSCOVE");
				func_1309(1392405485);
			}
			else
			{
				func_1310(-1974746920);
				func_1307("MS_HIDOUT_QUAKERSCOVE");
				func_1311(1392405485);
			}
			break;
		case -1283202000:
			if (func_1279(-1283202000))
			{
				func_1306(1171226610);
				func_1308("MS_HIDOUT_THELOFT");
				func_1309(-1563742078);
			}
			else
			{
				func_1310(1171226610);
				func_1307("MS_HIDOUT_THELOFT");
				func_1311(-1563742078);
			}
			break;
		case -1610966108:
			if (func_1279(-1610966108))
			{
				func_1306(406701199);
				func_1308("MS_HIDOUT_CUMBERLANDFALLS");
				func_1309(1518168193);
			}
			else
			{
				func_1310(406701199);
				func_1307("MS_HIDOUT_CUMBERLANDFALLS");
				func_1311(1518168193);
			}
			break;
		case 1321892118:
			if (func_1279(1321892118))
			{
				func_1306(-1151968796);
				func_1308("MS_HIDOUT_STILLWATERSTRANDS");
				func_1309(-604101326);
			}
			else
			{
				func_1310(-1151968796);
				func_1307("MS_HIDOUT_STILLWATERSTRANDS");
				func_1311(-604101326);
			}
			break;
		case -61411516:
			if (func_1279(-61411516))
			{
				func_1306(1975720265);
				func_1308("MS_HIDOUT_COLTER");
			}
			else
			{
				func_1310(1975720265);
				func_1307("MS_HIDOUT_COLTER");
			}
			break;
		case 582380806:
			if (func_1279(582380806))
			{
				func_1306(508578717);
				func_1308("MS_HIDOUT_ABANDONED_MINING_STATION");
			}
			else
			{
				func_1310(508578717);
				func_1307("MS_HIDOUT_ABANDONED_MINING_STATION");
			}
			break;
		case 1932172605:
			if (func_1279(1932172605))
			{
				func_1306(-848533860);
				func_1308("MS_HIDOUT_CLEMENSCOVE");
			}
			else
			{
				if (_is_imap_active(-848533860))
				{
					func_729(791.0508f, -1244.354f, 41.5894f, 25f, 0, 0, 0, 0, 0);
				}
				func_1310(-848533860);
				func_1307("MS_HIDOUT_CLEMENSCOVE");
			}
			break;
		case 1159471771:
			if (func_1279(1159471771))
			{
				func_1306(830856441);
				func_1308("MS_HIDOUT_TALLTREES");
				func_1309(830856441);
			}
			else
			{
				func_1310(830856441);
				func_1307("MS_HIDOUT_TALLTREES");
				func_1311(830856441);
			}
			break;
		case 784360470:
			if (func_1279(784360470))
			{
				func_1306(-522767301);
				func_1308("MS_HIDOUT_SHIPROCK");
				func_1309(1057818333);
			}
			else
			{
				func_1310(-522767301);
				func_1307("MS_HIDOUT_SHIPROCK");
				func_1311(1057818333);
			}
			break;
		case 1881028477:
			if (func_1279(1881028477))
			{
				func_1306(-2103414139);
				func_1308("MS_HIDOUT_CAMP_BACCHUS");
			}
			else
			{
				func_1310(-2103414139);
				func_1307("MS_HIDOUT_CAMP_BACCHUS");
			}
			break;
		case 1703398561:
			if (func_1279(1703398561))
			{
				func_1306(771896020);
				func_1308("MS_HIDOUT_SOLOMONSFOLLY");
				func_1309(2122765318);
			}
			else
			{
				func_1310(771896020);
				func_1307("MS_HIDOUT_SOLOMONSFOLLY");
				func_1311(2122765318);
			}
			break;
		case -1209597203:
			if (func_1279(-1209597203))
			{
				func_1306(895825612);
				func_1308("MS_HIDOUT_TWINROCKS");
				func_1309(453488895);
			}
			else
			{
				func_1310(895825612);
				func_1307("MS_HIDOUT_TWINROCKS");
				func_1311(453488895);
			}
			break;
		case -897750037:
			if (func_1279(-897750037))
			{
				func_1306(1256749990);
				func_1308("MS_HIDOUT_CUERASECO");
				func_1309(621230359);
			}
			else
			{
				func_1310(1256749990);
				func_1307("MS_HIDOUT_CUERASECO");
				func_1311(621230359);
			}
			break;
		case 929582877:
			if (func_1279(929582877))
			{
				func_1306(-1934886317);
				func_1308("MS_HIDOUT_MANTECAFALLS");
				func_1309(-1934886317);
			}
			else
			{
				func_1310(-1934886317);
				func_1307("MS_HIDOUT_MANTECAFALLS");
				func_1311(-1934886317);
			}
			break;
		case -911126844:
			if (func_1279(-911126844))
			{
				func_1306(993438435);
				func_1308("MS_HIDOUT_RATTLESNAKEHOLLOW");
				func_1309(993438435);
			}
			else
			{
				func_1310(993438435);
				func_1307("MS_HIDOUT_RATTLESNAKEHOLLOW");
				func_1311(993438435);
			}
			break;
		case -355531636:
			if (func_1279(-355531636))
			{
				func_1306(1495728629);
				func_1308("MS_HIDOUT_REPENTANCE");
				func_1309(1495728629);
			}
			else
			{
				func_1310(1495728629);
				func_1307("MS_HIDOUT_REPENTANCE");
				func_1311(1495728629);
			}
			break;
		case -1455998786:
			if (func_1279(-1455998786))
			{
				func_1306(967935536);
				func_1308("MS_HIDOUT_SEAOFCORONADO");
				func_1309(245110571);
			}
			else
			{
				func_1310(967935536);
				func_1307("MS_HIDOUT_SEAOFCORONADO");
				func_1311(245110571);
			}
			break;
		case -851626677:
			if (func_1279(-851626677))
			{
				func_1306(-773956478);
				func_1308("MS_HIDOUT_CHOLLASPRINGS");
			}
			else
			{
				func_1310(-773956478);
				func_1307("MS_HIDOUT_CHOLLASPRINGS");
			}
			break;
		case -734416508:
			if (func_1279(-734416508))
			{
				func_1306(-1615749463);
				func_1308("MS_HIDOUT_OLDBACCHUSPLACE");
			}
			else
			{
				func_1310(-1615749463);
				func_1307("MS_HIDOUT_OLDBACCHUSPLACE");
			}
			break;
		case -396624371:
			if (func_1279(-396624371))
			{
				func_1306(-361709910);
				func_1308("MS_HIDOUT_CAMP_CHOLLA");
				func_1309(2123181135);
			}
			else
			{
				func_1310(-361709910);
				func_1307("MS_HIDOUT_CAMP_CHOLLA");
				func_1311(2123181135);
			}
			break;
		case 885777893:
			if (func_1279(885777893))
			{
				func_1306(-1323334072);
				func_1308("MS_HIDOUT_CAMP_PIKES");
				func_1309(968587226);
			}
			else
			{
				func_1310(-1323334072);
				func_1307("MS_HIDOUT_CAMP_PIKES");
				func_1311(968587226);
			}
			break;
		case 619839857:
			if (func_1279(619839857))
			{
				func_1306(-1521897637);
				func_1308("MS_HIDOUT_GAPTOOTH");
				func_1309(-1521897637);
			}
			else
			{
				func_1310(-1521897637);
				func_1307("MS_HIDOUT_GAPTOOTH");
				func_1311(-1521897637);
			}
			break;
		case 2113625508:
			if (func_1279(2113625508))
			{
				func_1306(-716370751);
				func_1308("mp_intro_jessica_camp_rhodes");
				func_1309(-716370751);
			}
			else
			{
				func_1310(-716370751);
				func_1307("mp_intro_jessica_camp_rhodes");
				func_1311(-716370751);
			}
			break;
		case 1549124796:
			if (func_1279(1549124796))
			{
				func_1306(-2053832767);
				func_1308("mp_intro_jessica_camp_valentine");
				func_1309(-2053832767);
			}
			else
			{
				func_1310(-2053832767);
				func_1307("mp_intro_jessica_camp_valentine");
				func_1311(-2053832767);
			}
			break;
		case -502473159:
			if (func_1279(-502473159))
			{
				func_1306(372806894);
				func_1308("mp_intro_jessica_camp_blackwater");
				func_1309(372806894);
			}
			else
			{
				func_1310(372806894);
				func_1307("mp_intro_jessica_camp_blackwater");
				func_1311(372806894);
			}
			break;
		case 229371495:
			if (func_1279(229371495))
			{
				func_1306(-1534577778);
				func_1308("mp_intro_jessica_camp_tumbleweed");
				func_1309(-1534577778);
			}
			else
			{
				func_1310(-1534577778);
				func_1307("mp_intro_jessica_camp_tumbleweed");
				func_1311(-1534577778);
			}
			break;
		case -781631220:
			if (func_1279(-781631220))
			{
				func_1306(-2024941402);
				func_1308("mp_intro_hideout_rhodes");
				func_1309(-2024941402);
			}
			else
			{
				func_1310(-2024941402);
				func_1307("mp_intro_hideout_rhodes");
				func_1311(-2024941402);
			}
			break;
		case 1708045337:
			if (func_1279(1708045337))
			{
				func_1306(-50297425);
				func_1308("mp_intro_hideout_valentine");
				func_1309(-50297425);
			}
			else
			{
				func_1310(-50297425);
				func_1307("mp_intro_hideout_valentine");
				func_1311(-50297425);
			}
			break;
		case 1166612791:
			if (func_1279(1166612791))
			{
				func_1306(536714458);
				func_1308("mp_intro_hideout_blackwater");
				func_1309(536714458);
			}
			else
			{
				func_1310(536714458);
				func_1307("mp_intro_hideout_blackwater");
				func_1311(536714458);
			}
			break;
		case 74872959:
			if (func_1279(74872959))
			{
				func_1306(2068117822);
				func_1308("mp_intro_hideout_tumbleweed");
				func_1309(2068117822);
			}
			else
			{
				func_1310(2068117822);
				func_1307("mp_intro_hideout_tumbleweed");
				func_1311(2068117822);
			}
			break;
		case 1744443559:
			if (func_1279(1744443559))
			{
				func_1306(-576687258);
				func_1308("MP_CAMP_DEFEND_HEARTLANDS_HILLTOP");
				func_1309(-576687258);
			}
			else
			{
				func_1310(-576687258);
				func_1307("MP_CAMP_DEFEND_HEARTLANDS_HILLTOP");
				func_1311(-576687258);
			}
			break;
		case 509781469:
			if (func_1279(509781469))
			{
				func_1306(226557169);
				func_1308("MP_CAMP_DEFEND_HEARTLANDS_CIRCLE");
				func_1309(226557169);
			}
			else
			{
				func_1310(226557169);
				func_1307("MP_CAMP_DEFEND_HEARTLANDS_CIRCLE");
				func_1311(226557169);
			}
			break;
		case 885378256:
			if (func_1279(885378256))
			{
				func_1306(476687617);
				func_1308("MP_CAMP_DEFEND_GRIZZLIES_CIRCLE");
				func_1309(476687617);
			}
			else
			{
				func_1310(476687617);
				func_1307("MP_CAMP_DEFEND_GRIZZLIES_CIRCLE");
				func_1311(476687617);
			}
			break;
		case -524787708:
			if (func_1279(-524787708))
			{
				func_1306(1856368424);
				func_1308("MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE");
				func_1309(1856368424);
			}
			else
			{
				func_1310(1856368424);
				func_1307("MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE");
				func_1311(1856368424);
			}
			break;
		case -1861414976:
			if (func_1279(-1861414976))
			{
				func_1306(568096966);
				func_1308("MP_CAMP_DEFEND_ROANOKE_CIRCLE");
				func_1309(568096966);
			}
			else
			{
				func_1310(568096966);
				func_1307("MP_CAMP_DEFEND_ROANOKE_CIRCLE");
				func_1311(568096966);
			}
			break;
		case 747514327:
			if (func_1279(747514327))
			{
				func_1306(1104817207);
				func_1308("WS_MP_CAMP_DEFEND_TWO_ROCKS");
				func_1309(1104817207);
			}
			else
			{
				func_1310(1104817207);
				func_1307("WS_MP_CAMP_DEFEND_TWO_ROCKS");
				func_1311(1104817207);
			}
			break;
		case -1042021329:
			if (func_1279(-1042021329))
			{
				func_1306(478888800);
				func_1308("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE");
				func_1309(478888800);
			}
			else
			{
				func_1310(478888800);
				func_1307("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE");
				func_1311(478888800);
			}
			break;
		case -591815673:
			if (func_1279(-591815673))
			{
				func_1306(1955414013);
				func_1308("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH");
				func_1309(1955414013);
			}
			else
			{
				func_1310(1955414013);
				func_1307("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH");
				func_1311(1955414013);
			}
			break;
		case 883901517:
			if (func_1279(883901517))
			{
				func_1306(-1207218596);
				func_1308("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS");
				func_1309(-1207218596);
			}
			else
			{
				func_1310(-1207218596);
				func_1307("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS");
				func_1311(-1207218596);
			}
			break;
		case 1561093093:
			if (func_1279(1561093093))
			{
				func_1306(-116967529);
				func_1308("WS_MP_CAMP_DEFEND_RIO_BRAVO");
				func_1309(-116967529);
			}
			else
			{
				func_1310(-116967529);
				func_1307("WS_MP_CAMP_DEFEND_RIO_BRAVO");
				func_1311(-116967529);
			}
			break;
		case 1287917122:
			if (func_1279(1287917122))
			{
				func_1307("pro_empty_nav_tu003");
				func_1306(-605808708);
				func_1308("WS_MP_CAMP_DEFEND_LITTLE_CREEK_AND_PRONGHORN");
				func_1309(-605808708);
			}
			else
			{
				func_1310(-605808708);
				func_1307("WS_MP_CAMP_DEFEND_LITTLE_CREEK");
				func_1308("pro_empty_nav_tu003");
				func_1311(-605808708);
			}
			break;
		case -1943367752:
			if (func_1279(-1943367752))
			{
				func_1306(-100150000);
				func_1308("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE");
				func_1309(-100150000);
			}
			else
			{
				func_1310(-100150000);
				func_1307("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE");
				func_1311(-100150000);
			}
			break;
		case -371827125:
			if (func_1279(-371827125))
			{
				func_1306(-320403109);
				func_1308("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD");
				func_1309(-320403109);
			}
			else
			{
				func_1310(-320403109);
				func_1307("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD");
				func_1311(-320403109);
			}
			break;
		case -889906510:
			if (func_1279(-889906510))
			{
				func_1306(18369533);
				func_1308("WS_MP_CAMP_DEFEND_TALL_TREES");
				func_1309(18369533);
			}
			else
			{
				func_1310(18369533);
				func_1307("WS_MP_CAMP_DEFEND_TALL_TREES");
				func_1311(18369533);
			}
			break;
		case 64896505:
			if (func_1279(64896505))
			{
				func_1306(-331965904);
				func_1308("WS_MP_CAMP_DEFEND_NEW_HANOVER");
				func_1309(-331965904);
			}
			else
			{
				func_1310(-331965904);
				func_1307("WS_MP_CAMP_DEFEND_NEW_HANOVER");
				func_1311(-331965904);
			}
			break;
		case -1161687045:
			if (func_1279(-1161687045))
			{
				func_1306(127191252);
				func_1308("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH");
				func_1309(127191252);
			}
			else
			{
				func_1310(127191252);
				func_1307("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH");
				func_1311(127191252);
			}
			break;
		case 526003171:
			if (func_1279(526003171))
			{
				func_1306(-2074957003);
				func_1308("MS_OTH_MAC");
			}
			else
			{
				func_1310(-2074957003);
				func_1307("MS_OTH_MAC");
			}
			break;
		case -895073533:
			if (func_1279(-895073533))
			{
				func_1306(-1226747327);
				func_1306(-141795616);
				func_1308("MS_OTH_SHEPHERDS_RISE");
			}
			else
			{
				func_1310(-1226747327);
				func_1310(-141795616);
				func_1307("MS_OTH_SHEPHERDS_RISE");
			}
			break;
		case -2066272360:
			if (func_1279(-2066272360))
			{
				func_1306(-1973910443);
				func_1308("MS_OTH_TALL_TREES");
			}
			else
			{
				func_1310(-1973910443);
				func_1307("MS_OTH_TALL_TREES");
			}
			break;
		case 93964309:
			if (func_1279(93964309))
			{
				func_1306(1707200698);
				func_1308("MS_OTH_CASTORS");
			}
			else
			{
				func_1310(1707200698);
				func_1307("MS_OTH_CASTORS");
			}
			break;
		case 2103908624:
			if (func_1279(2103908624))
			{
				func_1306(1883767827);
				func_1308("MS_AS_TRK_LAKE_ISABELLA");
			}
			else
			{
				func_1310(1883767827);
				func_1307("MS_AS_TRK_LAKE_ISABELLA");
			}
			break;
		case -812641169:
			if (func_1279(-812641169))
			{
				func_1306(104287396);
				func_1308("gcexc_nav_scm_003");
				func_1309(-1585767499);
			}
			else
			{
				func_1310(104287396);
				func_1307("gcexc_nav_scm_003");
				func_1311(-1585767499);
			}
			break;
		case -554519756:
			if (func_1279(-554519756))
			{
				func_1306(715920781);
				func_1308("gcexc_nav_scm_005");
				func_1309(-1089087766);
			}
			else
			{
				func_1310(715920781);
				func_1307("gcexc_nav_scm_005");
				func_1311(-1089087766);
			}
			break;
		case 865557632:
			if (func_1279(865557632))
			{
				func_1306(-900541220);
				func_1308("gcexc_nav_scm_006");
				func_1309(-1305559780);
			}
			else
			{
				func_1310(-900541220);
				func_1307("gcexc_nav_scm_006");
				func_1311(-1305559780);
			}
			break;
		case 1112996351:
			if (func_1279(1112996351))
			{
				func_1306(-1199296193);
				func_1308("gcexc_nav_scm_007");
				func_1309(1751361927);
			}
			else
			{
				func_1310(-1199296193);
				func_1307("gcexc_nav_scm_007");
				func_1311(1751361927);
			}
			break;
		case -1608141409:
			if (func_1279(-1608141409))
			{
				func_1306(546408124);
				func_1308("gcexc_nav_scm_010");
				func_1309(-198328307);
			}
			else
			{
				func_1310(546408124);
				func_1307("gcexc_nav_scm_010");
				func_1311(-198328307);
			}
			break;
		case -311373772:
			if (func_1279(-311373772))
			{
				func_1306(-1232784731);
				func_1308("gcexc_nav_scm_013");
				func_1309(1092704755);
			}
			else
			{
				func_1310(-1232784731);
				func_1307("gcexc_nav_scm_013");
				func_1311(1092704755);
			}
			break;
		case 61537448:
			if (func_1279(61537448))
			{
				func_1306(301558156);
				func_1308("gcexc_nav_scm_015");
				func_1309(473665576);
			}
			else
			{
				func_1310(301558156);
				func_1307("gcexc_nav_scm_015");
				func_1311(473665576);
			}
			break;
		case -925071604:
			if (func_1279(-925071604))
			{
				func_1306(1683033662);
				func_1308("gcexc_nav_scm_017");
				func_1309(2037697181);
			}
			else
			{
				func_1310(1683033662);
				func_1307("gcexc_nav_scm_017");
				func_1311(2037697181);
			}
			break;
		case 1195508693:
			if (func_1279(1195508693))
			{
				func_1306(-643041038);
				func_1308("gcexc_nav_scm_019");
				func_1309(1415118950);
			}
			else
			{
				func_1310(-643041038);
				func_1307("gcexc_nav_scm_019");
				func_1311(1415118950);
			}
			break;
	}
}

void func_601(int iParam0)
{
	iVar0 = func_592(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_1939655->f_65[iVar1], iVar2);
}

bool func_602(int iParam0)
{
	switch (iParam0)
	{
		case -2003068922:
		case -707029077:
		case -391787427:
		case -207712283:
		case 836347960:
		case 1665936245:
			return true;
	}
	return false;
}

Vector3 func_603()
{
	return 0f, 0f, 0f;
}

Vector3 func_604(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	return func_1312(uParam0, uParam0->f_4, iParam1, vParam2, iParam5, bParam6, iParam7, bParam8, iParam9, iParam10);
}

float func_605(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	return func_1313(uParam0, uParam0->f_4, iParam1, fParam2, iParam3, bParam4, iParam5, iParam6, bParam7, iParam8);
}

struct<16> func_606(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	StringCopy(&cVar5, sParam3, 128);
	iVar21 = iParam4;
	iVar22 = iParam7;
	if (func_1260(uParam0, iParam1, &Var0, iVar21, iParam5, iParam6, iVar22, iParam8, iParam9))
	{
		func_1314(Var0, iParam2, &cVar5, 0);
	}
	return cVar5;
}

bool func_607(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_1071686->f_22538.f_385[iParam0]), iParam1);
}

void func_608()
{
	_0x20f4cb76689acdbc(&(Global_1071686->f_21416.f_260));
}

void func_609(int iParam0)
{
	Global_1146212->f_47689.f_44[func_623(iParam0)]->f_1 = 0;
}

void func_610(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_5.f_1 = 0;
	uParam0->f_5.f_2 = 0;
	uParam0->f_5.f_3 = 0;
	uParam0->f_9 = -1591664384;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	StringCopy(&(uParam0->f_16), "", 64);
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
}

bool func_611(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	if (!func_1315(uParam4, iParam0, iParam1, iParam2, bParam5))
	{
		return false;
	}
	if (!func_1316(uParam3, uParam4))
	{
		return false;
	}
	return true;
}

bool func_612(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	if (!func_1317(uParam4, iParam0, iParam1, iParam2, bParam5))
	{
		return false;
	}
	if (!func_1318(uParam3, uParam4))
	{
		return false;
	}
	return true;
}

bool func_613()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_614(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 136;
		case -2130179962:
			return 63;
		case -2082434331:
			return 152;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -2038430863:
			return 151;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 139;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 148;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 137;
		case -1246069683:
			return 124;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 131;
		case -1140308479:
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -980934770:
			return 125;
		case -974857798:
			return 140;
		case -914097888:
			return 132;
		case -900341092:
			return 142;
		case -859661758:
			return 60;
		case -821191074:
			return 115;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 121;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 128;
		case -336340230:
			return 119;
		case -309456186:
			return 10;
		case -300915357:
			return 146;
		case -252777454:
			return 135;
		case -193167881:
			return 127;
		case -190717545:
			return 30;
		case -179898515:
			return 122;
		case -179343615:
			return 150;
		case -132268497:
			return 141;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 130533095:
			return 126;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 158579484:
			return 117;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 133;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 134;
		case 548902645:
			return 109;
		case 549687162:
			return 145;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 149;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 144;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 808176588:
			return 116;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1130659268:
			return 123;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 129;
		case 1493749872:
			return 112;
		case 1500545235:
			return 138;
		case 1507470319:
			return 83;
		case 1543468593:
			return 147;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 130;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 120;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_615(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_616(int iParam0, int iParam1)
{
	iVar0 = func_1319(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_619(iParam1, 1);
	switch (Global_1146212->f_35859.f_3116[iVar2]->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -619998507:
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_617(int iParam0, int iParam1, int iParam2)
{
	if (!func_290(iParam1))
	{
		return 0;
	}
	if (!func_1320(iParam0))
	{
		return 0;
	}
	iVar0 = func_619(iParam0, 1);
	func_1321(iParam0, iParam1, iParam2);
	if (func_1322(*Global_1146212->f_35859.f_3116[iVar0]) && func_1323(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_1324(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_1325(vVar1))
		{
			if (func_1326(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1327(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1328(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_1328(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_618(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_619(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2019073637:
			return 198;
		case -2008161946:
			return 26;
		case -2006179687:
			return 180;
		case -1961023994:
			return 92;
		case -1958950493:
			return 194;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 188;
		case -1498884346:
			return 156;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 182;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 173;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 184;
		case -749371485:
			return 164;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 193;
		case -562496675:
			return 57;
		case -562150430:
			return 181;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 185;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 160;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 172;
		case -269291543:
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case -91604267:
			return 169;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 177;
		case 200623432:
			return 64;
		case 221495846:
			return 175;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 275909046:
			return 151;
		case 279713143:
			return 171;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 558636891:
			return 187;
		case 570385280:
			return 196;
		case 593083875:
			return 80;
		case 634217179:
			return 150;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 195;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 178;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 170;
		case 794883372:
			return 186;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 192;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 183;
		case 997052462:
			return 157;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 176;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1256374770:
			return 165;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 190;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1305406380:
			return 162;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 168;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1462245043:
			return 154;
		case 1480202237:
			return 189;
		case 1482822775:
			return 146;
		case 1514854451:
			return 191;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 158;
		case 1687654048:
			return 71;
		case 1704907062:
			return 179;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 167;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 161;
		case 2028487040:
			return 52;
		case 2051020894:
			return 174;
		case 2081856931:
			return 120;
		case 2113464199:
			return 159;
		case 2126590447:
			return 14;
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

void func_620(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_621(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_622(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

int func_623(int iParam0)
{
	iVar0 = func_615(iParam0, 1);
	if (func_1329(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1330(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1331(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_1332(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_289(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_1333(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_1334(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_624(int iParam0, int iParam1)
{
	iVar0 = func_1319(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_619(iParam1, 1);
	switch (&Global_1146212->f_35859.f_3116[iVar2])
	{
		case 979390476:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -2139108927:
		case -2129621195:
		case -1503245593:
		case 190804938:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_625(int iParam0, int iParam1, int iParam2)
{
	if (!func_290(iParam1))
	{
		return 0;
	}
	if (!func_1320(iParam0))
	{
		return 0;
	}
	iVar0 = func_619(iParam0, 1);
	if (!func_1335(iParam2))
	{
		return 0;
	}
	bVar1 = func_1322(*Global_1146212->f_35859.f_3116[iVar0]);
	if (bVar1 && func_1336(Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar2 = { func_1337(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (!func_1321(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_1326(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_1327(Global_1146212->f_35859.f_3116[iVar0]->f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

bool func_626(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = participant_id_to_int();
	}
	return func_80(Local_920[iParam2][iParam1], iParam0);
}

void func_627(var uParam0)
{
	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	Var0.f_4 = 11;
	Var0.f_5 = uParam0;
	func_734(&Var0);
}

void func_628(int iParam0)
{
	iVar0 = func_1338(Global_1237665[iParam0], (*Global_1237665)[iParam0]->f_6);
	if (iVar0 == -1)
	{
		return;
	}
	func_1339(iVar0);
}

bool func_629(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	return _is_this_model_a_horse(iVar0);
}

void func_630(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4)
{
	iVar0 = _0xe4770da1b8ff4fd1(get_ped_index_from_entity_index(*iParam0));
	iVar1 = func_644(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	if (!bParam2)
	{
		return;
	}
	if (network_is_host_of_this_script() && Local_409.f_381[iVar1]->f_1 == 448485414)
	{
		iVar2 = Local_409.f_381[iVar1]->f_2;
		if (!iParam0->f_3 && !bParam4)
		{
			bVar3 = true;
		}
		if ((Local_13.f_82[iVar2]->f_1 == -584819812 && _0xe4770da1b8ff4fd1(iParam3) == get_vehicle_index_from_entity_index(&(Local_4089.f_3229.f_2[iVar2]))) && func_307(network_get_participant_index(uParam1->f_3)) == -1029285341)
		{
			func_312(iVar2, uParam1->f_3, bVar3);
		}
	}
	if (uParam1->f_3 != player_id())
	{
		return;
	}
	if (func_182(255) != 0)
	{
		return;
	}
	if (func_649(iVar1) == -25013953 && !func_650(Local_4089.f_4086))
	{
		func_20(2097152, 1, 0);
	}
}

void func_631(int iParam0, var uParam1, bool bParam2)
{
	if ((!iParam0->f_4 && !iParam0->f_3) && !iParam0->f_14)
	{
		return;
	}
	if (((bParam2 && network_is_player_a_participant(uParam1->f_3)) && func_182(network_get_participant_index(uParam1->f_3)) != func_182(255)) && func_104(32, 255))
	{
		bVar2 = true;
		func_1340();
	}
	iVar4 = 0;
	while (iVar4 <= 9)
	{
		if (Local_4089.f_3027[iVar4]->f_9 == 687335742)
		{
			if (!bVar0)
			{
				bVar0 = true;
				iVar3 = func_300(uParam1->f_1, 1);
				if (iVar3 != -1 && func_1341(Local_4089.f_6[iVar3]->f_2, 1))
				{
					bVar1 = true;
				}
			}
			func_1342(iParam0, bVar1, iVar4);
		}
		else if (Local_4089.f_3027[iVar4]->f_9 == 1130553971)
		{
			func_1342(iParam0, bVar2, iVar4);
		}
		iVar4++;
	}
}

void func_632(int iParam0, var uParam1)
{
	iVar3 = func_182(network_get_participant_index(uParam1->f_3));
	if (iVar3 == -1)
	{
		return;
	}
	iVar4 = func_1343(iVar3);
	if (iVar4 <= 0)
	{
		return;
	}
	if (!iParam0->f_3)
	{
		return;
	}
	if (func_1093(32, iVar3) && uParam1->f_3 != (*Global_1237665)[Local_4089.f_3391]->f_16)
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(*iParam0);
	if (!is_ped_a_player(iVar0))
	{
		return;
	}
	iVar1 = network_get_player_index_from_ped(iVar0);
	iVar2 = func_182(network_get_participant_index(iVar1));
	if (iVar2 == -1 || iVar3 == -1)
	{
		return;
	}
	if (iVar2 == iVar3)
	{
		return;
	}
	iVar5 = func_1344(iVar2, iVar3);
	if (iVar5 > 0)
	{
		iVar4 = (iVar4 + floor(((to_float(iVar4) * 0.2f) * to_float(iVar5))));
	}
	Local_13.f_354 = func_1345((func_856() - iVar4));
	func_1346();
}

void func_633(int iParam0, var uParam1)
{
	iVar3 = func_182(network_get_participant_index(uParam1->f_3));
	if (Local_4089.f_3393 != 1427578635)
	{
		return;
	}
	if (iVar3 == -1)
	{
		return;
	}
	if (!iParam0->f_3)
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(*iParam0);
	if (!is_ped_a_player(iVar0))
	{
		return;
	}
	iVar1 = network_get_player_index_from_ped(iVar0);
	if (iVar1 != (*Global_1237665)[Local_4089.f_3391]->f_16)
	{
		return;
	}
	iVar2 = func_182(network_get_participant_index(iVar1));
	if (iVar2 == -1 || iVar3 == -1)
	{
		return;
	}
	iVar5 = -1;
	iVar4 = 0;
	while (iVar4 < 6)
	{
		if (Local_13.f_82[iVar4]->f_1 != -916820003)
		{
		}
		else if (Local_13.f_82[iVar4]->f_5 == -1)
		{
		}
		else
		{
			iVar6 = Local_13.f_82[iVar4]->f_5;
			iVar7 = func_1347(iVar6);
			if ((does_entity_exist(iVar7) && is_entity_a_ped(iVar7)) && network_get_player_index_from_ped(get_ped_index_from_entity_index(iVar7)) == iVar1)
			{
				iVar5 = iVar4;
			}
			else
			{
				iVar4++;
			}
			if (iVar5 != -1)
			{
				func_641(iVar5, uParam1->f_3);
			}
		}
	}
}

int func_634(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	iVar1 = -1;
	fVar2 = fParam2;
	vVar3 = { get_entity_coords(iParam0, false, false) };
	*uParam1 = fParam2;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		func_1348(iParam0, iVar0, vVar3, &iVar1, uParam1, &fVar2, iParam3, iParam4, iParam5, bParam6);
		iVar0++;
	}
	return iVar1;
}

void func_635(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (bParam3 && uParam1->f_3 == player_id())
	{
		if (((func_1349(iParam0->f_5) && iParam0->f_6 == 1657716792) && Local_409.f_1[iParam4]->f_4 == 448485414) && Local_409.f_1[iParam4]->f_5 != -1)
		{
			if (Local_409.f_1[iParam4]->f_1 == -126469426 || func_836(Local_409.f_1[iParam4]->f_1))
			{
				func_1350(Local_409.f_1[iParam4]->f_5);
			}
		}
		if (iParam0->f_3)
		{
			switch (func_1351(iParam4))
			{
				case -1066665813:
				case 478642682:
					func_1352(8, 1);
					break;
				case -227517162:
					func_1352(9, 1);
					break;
				default:
					func_1352(6, 1);
					break;
			}
		}
		else if (func_1353(iParam0->f_5) && _0x705be297eebdb95d(iParam0->f_5))
		{
			func_1352(2, 1);
		}
		else if ((((Local_409.f_1[iParam4]->f_1 == 1484665408 && does_entity_exist(Local_4089.f_6[iParam4]->f_60)) && !is_ped_dead_or_dying(Local_4089.f_6[iParam4]->f_60, true)) && !get_ped_config_flag(Local_4089.f_6[iParam4]->f_60, 11, false)) && _0x57779b55b83e2bea(Local_4089.f_6[iParam4]->f_60))
		{
			func_1352(13, 1);
		}
		else
		{
			func_1352(4, 1);
		}
		if ((func_182(255) == 0 && func_1351(iParam4) == -1729245824) && !func_650(Local_4089.f_4086))
		{
			func_20(2097152, 1, 0);
		}
		if ((!func_330(Local_4089.f_3393, 0) && func_28(77)) && func_1354(iParam4, 0))
		{
			func_1355(1, 0);
		}
	}
	iVar0 = Local_4089.f_6[iParam4]->f_60;
	if (((bParam3 && !iParam0->f_3) && _is_ped_hogtied(iVar0)) && !is_ped_dead_or_dying(iVar0, true))
	{
		func_1356(iVar0, iParam4);
	}
	if (iParam0->f_3 || bParam2)
	{
		if (((bParam3 && network_is_host_of_this_script()) && func_1357(iParam4) == 448485414) && func_307(network_get_participant_index(uParam1->f_3)) == -1029285341)
		{
			func_312(func_1358(iParam4), uParam1->f_3, 0);
		}
		if (((func_1359(Local_409.f_1[iParam4]->f_1, 1, 1, 0) && Local_409.f_1[iParam4]->f_12 != 0) && func_182(255) == 0) && func_307(255) == 404851220)
		{
			func_1026(34, 0, 0, 0);
		}
	}
	else if (((bParam3 && network_is_host_of_this_script()) && func_1357(iParam4) == 448485414) && func_836(Local_409.f_1[iParam4]->f_1))
	{
		if (iParam0->f_5 == -570967010 && iParam0->f_6 == -1903059161)
		{
			if (!is_bit_set(Local_4089.f_4030, network_get_participant_index(uParam1->f_3)))
			{
				set_bit(&(Local_4089.f_4030), network_get_participant_index(uParam1->f_3));
			}
		}
	}
	if (iParam0->f_3 || (((iParam0->f_2 == 0f && !iParam0->f_3) && !iParam0->f_24) && get_entity_health(*iParam0) == 0))
	{
		if (func_1351(iParam4) == -126469426 && !iParam0->f_24)
		{
			func_1168(-852530423, 255, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);
		}
	}
	if (!iParam0->f_3)
	{
		return;
	}
	if (uParam1->f_3 == player_id() && func_1341(Local_4089.f_6[iParam4]->f_2, 1))
	{
		if (iParam0->f_24)
		{
			Local_4089.f_4075++;
		}
		else
		{
			Local_4089.f_4074++;
		}
		if (Local_4089.f_3393 == -1261475678 && !func_29(Local_4089.f_3391, 33554432))
		{
			func_1360((*Global_1248240)[Local_4089.f_3391]->f_584);
			func_1069(Local_4089.f_3391, 33554432);
		}
	}
	if (func_796(32, iParam4))
	{
		if (func_28(81) && bParam2)
		{
			bVar1 = true;
		}
		if (((uParam1->f_3 == player_id() && func_182(255) == 0) || !bParam3) && (bVar1 || !bParam2))
		{
			func_20(2048, 1, 0);
		}
	}
	if ((bParam3 && func_796(16384, iParam4)) && !func_1361(32768, iParam4, -1))
	{
		if (func_28(81) && bParam2)
		{
			bVar2 = true;
		}
		if (bVar2 || !bParam2)
		{
			func_1362(32768, iParam4);
			if (network_is_host_of_this_script())
			{
				func_329(268435456, 1);
				Local_13.f_380++;
				iVar3 = func_1363(&(Local_4089.f_3355));
				if (iVar3 >= 0 && Local_13.f_380 > iVar3)
				{
					func_804(9);
				}
			}
			if (func_182(255) == 0 && func_182(network_get_participant_index(uParam1->f_3)) == 0)
			{
				Local_4089.f_4095++;
				if (Local_409.f_1[iParam4]->f_1 == 1787431880)
				{
					func_1364(uParam1->f_3, bParam2, bParam2);
				}
				else if (Local_4089.f_4095 > func_1365(&(Local_4089.f_3355)))
				{
					iVar4 = get_ped_index_from_entity_index(*iParam0);
					if (!func_28(36))
					{
						if (_0x3f59fe6f37869576(player_id(), uParam1->f_3))
						{
							if (is_ped_human(iVar4))
							{
								func_1007(477974086, 1, 0);
							}
							else if (func_1366(iVar4))
							{
								func_1007(-1030655937, 1, 0);
							}
							else
							{
								func_1007(-1783181138, 1, 0);
							}
							if (func_28(121))
							{
								func_1026(12, 0, 0, 0);
								func_236(36, 1, 0);
							}
						}
					}
					else if (uParam1->f_3 == player_id())
					{
						if (is_ped_human(iVar4))
						{
							func_1007(477974086, 1, 0);
						}
						else if (func_1366(iVar4))
						{
							func_1007(-1030655937, 1, 0);
						}
						else
						{
							func_1007(-1783181138, 1, 0);
						}
						if (func_28(121))
						{
							func_1026(12, 0, 0, 0);
						}
					}
				}
			}
		}
	}
}

void func_636(int iParam0, var uParam1, bool bParam2)
{
	if (!bParam2)
	{
		return;
	}
	if (uParam1->f_3 == player_id())
	{
		if (iParam0->f_3)
		{
			func_1352(7, 1);
			func_1367(*iParam0);
		}
		else if (func_1353(iParam0->f_5) && _0x705be297eebdb95d(iParam0->f_5))
		{
			func_1352(3, 1);
		}
		else
		{
			func_1352(5, 1);
		}
	}
}

void func_637(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return;
	}
	if (!iParam0->f_3)
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(*iParam0);
	iVar1 = get_ped_index_from_entity_index(iParam0->f_1);
	if (iVar1 != Global_34)
	{
		return;
	}
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_ped_human(iVar0))
	{
		func_1368(1, 1637490745, Global_35, 20f);
	}
	else if (func_1369(iVar0, 0))
	{
		func_1368(1, 1118105692, Global_35, 20f);
	}
	else
	{
		func_1368(1, 1203614512, Global_35, 20f);
	}
}

int func_638(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Local_409.f_317[iVar0]->f_5;
		if (network_does_network_id_exist(iVar1))
		{
			if (net_to_ent(iVar1) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_639(int iParam0)
{
	return Local_409.f_317[iParam0]->f_1;
}

int func_640(int iParam0)
{
	return Local_409.f_317[iParam0]->f_2;
}

void func_641(int iParam0, var uParam1)
{
	Var0.f_10 = 255;
	Var0.f_4 = 4;
	Var0.f_5 = Local_4089.f_3391;
	Var0.f_13 = iParam0;
	Var0.f_10 = uParam1;
	func_1370(&Var0);
}

bool func_642(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		iVar1 = &Local_13.f_60[iVar0];
		if (network_does_network_id_exist(iVar1))
		{
			if (net_to_ent(iVar1) == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_643(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Local_13.f_82[iVar0]->f_1 == 886638433)
		{
			iVar3 = func_591(&(Local_4089.f_3355), 250627920, 0, 24357435, Local_13.f_82[iVar0]->f_5, 0, 0, 0, 0, 0);
			iVar1 = func_886(&(Local_4089.f_3355), -2137902654, -1, 24357435, Local_13.f_82[iVar0]->f_5, 0, 0, 0, 0);
			iVar2 = func_886(&(Local_4089.f_3355), 1035844439, 0, 24357435, Local_13.f_82[iVar0]->f_5, 0, 0, 0, 0);
			if (iVar3 != 0 && iVar1 > -1)
			{
				iVar2 = 0;
				iVar5 = func_1371(iVar3, &uVar4);
				iVar3 = func_591(&(Local_4089.f_3355), 250627920, 0, iVar5, iVar1, iVar2, 0, 0, 0, 0);
				iVar1 = func_886(&(Local_4089.f_3355), -2137902654, -1, iVar5, iVar1, iVar2, 0, 0, 0);
				iVar2 = func_886(&(Local_4089.f_3355), 1035844439, 0, iVar5, iVar1, iVar2, 0, 0, 0);
				if (iVar3 == -970979849)
				{
					if (!network_does_network_id_exist(&(Local_13.f_3[iVar1])))
					{
					}
					else
					{
						iVar6 = net_to_obj(&(Local_13.f_3[iVar1]));
						if (!does_entity_exist(iVar6))
						{
						}
						else if (iVar6 == get_object_index_from_entity_index(*iParam0))
						{
							return iVar0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_644(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = Local_409.f_381[iVar0]->f_10;
		if (network_does_network_id_exist(iVar1))
		{
			if (net_to_ent(iVar1) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_645(int iParam0)
{
	switch (iParam0)
	{
		case 1776489902:
			return true;
		default:
			break;
	}
	return false;
}

bool func_646(int iParam0, int iParam1)
{
	return func_80(Local_409.f_381[iParam1]->f_4, iParam0);
}

int func_647(int iParam0)
{
	return Local_409.f_381[iParam0]->f_1;
}

int func_648(int iParam0)
{
	return Local_409.f_381[iParam0]->f_2;
}

int func_649(int iParam0)
{
	return Local_4089.f_1367[iParam0]->f_1;
}

bool func_650(int iParam0)
{
	return iParam0 != 0;
}

int func_651(int iParam0)
{
	if (!func_1372(iParam0, 0))
	{
		return uVar0;
	}
	if (func_1373(Local_4089.f_1983[iParam0]->f_1))
	{
		return func_1347(iParam0);
	}
	else if (network_does_network_id_exist(Local_409.f_478[iParam0]->f_1))
	{
		return net_to_ent(Local_409.f_478[iParam0]->f_1);
	}
	else if (does_entity_exist(Local_4089.f_1983[iParam0]->f_15))
	{
		return Local_4089.f_1983[iParam0]->f_15;
	}
	else
	{
		return uVar0;
	}
	return uVar0;
}

bool func_652(int iParam0, int iParam1)
{
	return func_80(Local_409.f_317[iParam1]->f_4, iParam0);
}

bool func_653(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = participant_id_to_int();
	}
	return func_80(&(Local_920[iParam2]->f_31[iParam1]), iParam0);
}

int func_654(int iParam0)
{
	return Global_1138828->f_2[iParam0]->f_2;
}

int func_655(int iParam0)
{
	if (&Local_409.f_467[iParam0] <= 2)
	{
		return uVar0;
	}
	return func_1374(Local_4089.f_1508[iParam0]->f_1, 0);
}

void func_656(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

bool func_657(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_308(iParam0);
	if (Local_13.f_82[iParam0]->f_1 == -916820003 && func_1372(Local_13.f_82[iParam0]->f_5, 0))
	{
		iVar1 = Local_13.f_82[iParam0]->f_5;
		if (Local_4089.f_1983[iVar1]->f_1 == -1767305912 || Local_4089.f_1983[iVar1]->f_1 == -1229553512)
		{
			return (func_1375(512, iVar1) && iParam1 == 0);
		}
		if (Local_4089.f_1983[iVar1]->f_1 == -1600622414)
		{
			return (func_1375(131072, iVar1) && iParam1 == 0);
		}
		if (Local_4089.f_1983[iVar1]->f_1 == 392881261)
		{
			return ((func_1375(262144, iVar1) && iParam1 == 0) && !func_1376(1048576, iVar1));
		}
	}
	if (Local_4089.f_1622[iParam0]->f_2[iParam1]->f_11 != -1)
	{
		return func_1377(2, Local_4089.f_1622[iParam0]->f_2[iParam1]->f_11);
	}
	if (!does_entity_exist(iVar0) && &Local_4089.f_3008[iParam1] != 622225714)
	{
		return false;
	}
	if ((Local_4089.f_1622[iParam0]->f_2[iParam1]->f_12 >= 0 && is_bit_set(Local_13.f_366, Local_4089.f_1622[iParam0]->f_2[iParam1]->f_12)) && Local_4089.f_1622[iParam0]->f_35 == -922798066)
	{
		return true;
	}
	switch (&Local_4089.f_3008[iParam1])
	{
		case 404851220:
			return func_1378(iParam0, iVar0, iParam1, bParam2);
		case -1029285341:
			return func_1379(iParam0, iVar0);
		case 622225714:
			return func_1380(iParam0);
		default:
			break;
	}
	return false;
}

void func_658(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!func_453(8, iParam0) || Local_13.f_82[iParam0]->f_2 != iParam1)
	{
		if (((iParam1 != -1 && Local_13.f_82[iParam0]->f_2 != -1) && Local_13.f_82[iParam0]->f_2 != iParam1) && Local_4089.f_1622[iParam0]->f_55 <= 0)
		{
			func_1381(iParam0, 0, 0);
		}
		Local_13.f_82[iParam0]->f_2 = iParam1;
		Local_13.f_82[iParam0]->f_9++;
		if (Local_13.f_82[iParam0]->f_2 != -1)
		{
			func_1382(iParam0, iParam1);
			func_1381(iParam0, 1, bVar0);
		}
	}
	else if (bParam2 && Local_13.f_82[iParam0]->f_2 == iParam1)
	{
		func_1382(iParam0, iParam1);
	}
	func_833(8, iParam0);
	func_834(8192, iParam0);
	func_1383(1);
	if (Local_13.f_82[iParam0]->f_1 == 886638433 && func_58(3, Local_13.f_82[iParam0]->f_5))
	{
		func_1384(524288, Local_13.f_82[iParam0]->f_5);
	}
	iVar2 = func_308(iParam0);
	if (iParam1 != -1)
	{
		switch (&Local_4089.f_3008[iParam1])
		{
			case 404851220:
				if (does_entity_exist(iVar2) && is_entity_a_ped(iVar2))
				{
					if (Local_13.f_82[iParam0]->f_1 == 886638433 && func_836(Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1))
					{
						iVar3 = _0xef2d9ed7ce684f08(iVar2);
						if (((does_entity_exist(iVar3) && is_ped_a_player(iVar3)) && _0xc737697c41628340(iVar3) == 2) || _0x7cb99fadde73cd1b(get_ped_index_from_entity_index(iVar2)))
						{
							func_833(65536, iParam0);
						}
						else
						{
							func_834(65536, iParam0);
						}
					}
					else if (!is_entity_dead(iVar2) || (is_entity_dead(iVar2) && get_ped_config_flag(get_ped_index_from_entity_index(iVar2), 11, true)))
					{
						func_833(65536, iParam0);
					}
					else
					{
						func_834(65536, iParam0);
					}
				}
				break;
			case -1029285341:
				if ((Local_13.f_82[iParam0]->f_1 == -1918493640 && Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_1 == 1740160671) && func_652(64, Local_13.f_82[iParam0]->f_5))
				{
					func_833(65536, iParam0);
				}
				break;
		}
		if (func_1386(func_1385(Local_13.f_82[iParam0]->f_5, Local_13.f_82[iParam0]->f_1, 2094903125, 0, 0, 0, 0)) == iParam1 && !func_453(65536, iParam0))
		{
			func_1387(iParam0);
		}
	}
	if (Local_13.f_82[iParam0]->f_2 == -1)
	{
	}
	else
	{
		switch (&Local_4089.f_3008[Local_13.f_82[iParam0]->f_2])
		{
			case -1029285341:
				if (Local_13.f_82[iParam0]->f_14 != 255 && (Local_13.f_82[iParam0]->f_15 == 0 || func_725(Local_13.f_82[iParam0]->f_15) < 7000))
				{
					Local_13.f_82[iParam0]->f_13 = Local_13.f_82[iParam0]->f_14;
				}
				else if (Local_13.f_82[iParam0]->f_2 == 0 && &Local_4089.f_3008[1] != -1029285341)
				{
					Local_13.f_82[iParam0]->f_13 = _0x4be6c13a45cca8ec((*Global_1237665)[Local_4089.f_3391]->f_13);
					bVar1 = true;
				}
				else
				{
					func_1388(iParam0, 0, bParam5);
					return;
				}
				break;
			case 622225714:
				if (iParam1 == 0)
				{
					iVar9 = (*Global_1237665)[Local_4089.f_3391]->f_13;
				}
				else
				{
					iVar9 = Local_13.f_391;
				}
				if (_0x149a2751ab66ac02(iVar9) > 0)
				{
					Local_13.f_82[iParam0]->f_13 = _0x4be6c13a45cca8ec(iVar9);
				}
				break;
			case 404851220:
				if (_network_is_player_index_valid(iParam4))
				{
					Local_13.f_82[iParam0]->f_13 = iParam4;
				}
				else if (_network_is_player_index_valid(Local_13.f_82[iParam0]->f_11))
				{
					Local_13.f_82[iParam0]->f_13 = Local_13.f_82[iParam0]->f_11;
				}
				else
				{
					switch (Local_13.f_82[iParam0]->f_1)
					{
						case 886638433:
							if (func_1389(Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1) && network_does_network_id_exist(Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_14))
							{
								iVar7 = Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_60;
								Local_13.f_82[iParam0]->f_13 = func_1390(get_entity_coords(iVar7, true, false), &uVar6, 75f, 2, iVar7, 493038497, 0, 0, 0, 1);
							}
							else if (Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1 == -391787427)
							{
								if (Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_18 != -1 && Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_17 == -1918493640)
								{
									if (does_entity_exist(get_player_ped(Local_13.f_82[iParam0]->f_13)))
									{
									}
									else
									{
										Local_13.f_82[iParam0]->f_13 = func_1391(64, Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_18);
									}
								}
							}
							else if (func_836(Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1) && _network_is_player_index_valid(Local_13.f_82[iParam0]->f_14))
							{
								Local_13.f_82[iParam0]->f_13 = Local_13.f_82[iParam0]->f_14;
							}
							break;
					}
				}
				if (((!bParam6 && Local_13.f_82[iParam0]->f_1 == 886638433) && (func_1389(Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1) || Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1 == -126469426)) && network_does_network_id_exist(Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_14))
				{
					iVar7 = Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_60;
					if (is_ped_in_any_vehicle(iVar7, false))
					{
						iVar8 = get_vehicle_ped_is_in(iVar7, false);
						iVar5 = 0;
						while (iVar5 <= 5)
						{
							if (iVar5 == iParam0)
							{
							}
							else if ((!func_453(8, iVar5) && &Local_13.f_82[iVar5] != 5) || &Local_13.f_82[iVar5] == 3)
							{
								if (((Local_13.f_82[iVar5]->f_1 == 886638433 && network_does_network_id_exist(Local_409.f_1[Local_13.f_82[iVar5]->f_5]->f_14)) && get_vehicle_ped_is_in(Local_4089.f_6[Local_13.f_82[iVar5]->f_5]->f_60, false) == iVar8) && func_657(iVar5, iParam1, &uVar4))
								{
									func_658(iVar5, iParam1, 1, 0, 255, 0, 1);
								}
							}
							iVar5++;
						}
					}
				}
				else if (Local_13.f_82[iParam0]->f_1 == -584819812)
				{
					if (!bParam3)
					{
						iVar11 = 0;
						while (iVar11 <= 5)
						{
							if (Local_13.f_82[iVar11]->f_1 == -1918493640)
							{
								iVar10 = Local_13.f_82[iVar11]->f_5;
								if (func_653(32768, iVar10, -1))
								{
									if (Local_4089.f_1087[iVar10]->f_27 == -584819812 && Local_4089.f_1087[iVar10]->f_28 == Local_13.f_82[iParam0]->f_5)
									{
										func_658(iVar11, iParam1, 1, 0, Local_13.f_82[iParam0]->f_13, 0, 0);
									}
								}
							}
							iVar11++;
						}
					}
				}
				break;
		}
		if (Local_13.f_82[iParam0]->f_13 == 255 && func_1392(iParam0))
		{
			Local_13.f_82[iParam0]->f_13 = func_1393(8, iParam0);
		}
		if (_network_is_player_index_valid(Local_13.f_82[iParam0]->f_13) && network_is_player_active(Local_13.f_82[iParam0]->f_13))
		{
			Local_13.f_82[iParam0]->f_10 = _0x901e0dc25080c8b9(Local_13.f_82[iParam0]->f_13);
		}
		else if (func_453(32, iParam0) && &Local_4089.f_3008[Local_13.f_82[iParam0]->f_2] == 404851220)
		{
			Local_13.f_82[iParam0]->f_10 = (*Global_1237665)[Local_4089.f_3391]->f_13;
		}
		else if (Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1 == -391787427)
		{
			if (Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_18 != -1 && Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_17 == -1918493640)
			{
				if (does_entity_exist(get_player_ped(Local_13.f_82[iParam0]->f_13)))
				{
					Local_13.f_82[iParam0]->f_10 = (*Global_1237665)[Local_4089.f_3391]->f_13;
				}
			}
		}
		if ((Local_4089.f_1622[iParam0]->f_2[iParam1]->f_12 >= 0 && !is_bit_set(Local_13.f_366, Local_4089.f_1622[iParam0]->f_2[iParam1]->f_12)) && func_1394(&(Local_4089.f_3355), iParam0, Local_13.f_82[iParam0]->f_2))
		{
			set_bit(&(Local_13.f_366), Local_4089.f_1622[iParam0]->f_2[iParam1]->f_12);
			iVar12 = 0;
			while (iVar12 <= 5)
			{
				if (iVar12 != iParam0 && Local_4089.f_1622[iVar12]->f_2[iParam1]->f_12 == Local_4089.f_1622[iParam0]->f_2[iParam1]->f_12)
				{
					func_658(iVar12, iParam1, bParam2, bParam3, Local_13.f_82[iParam0]->f_13, 1, 0);
				}
				iVar12++;
			}
			if (Local_4089.f_1622[iParam0]->f_55 > 0)
			{
				bVar0 = true;
				if (!bParam3)
				{
					bParam2 = true;
				}
			}
		}
	}
	if ((Local_13.f_82[iParam0]->f_9 < Local_4089.f_1622[iParam0]->f_55 && Local_4089.f_1622[iParam0]->f_35 == -922798066) && !bVar0)
	{
		if (Local_13.f_82[iParam0]->f_2 != -1)
		{
			Local_13.f_198[Local_13.f_82[iParam0]->f_2] = &Local_13.f_198[Local_13.f_82[iParam0]->f_2] + 1;
		}
		func_1395(iParam0, bParam3, bVar1, bParam6);
		func_1396(4, iParam0);
	}
	else if (bParam2)
	{
		func_1388(iParam0, 1, bParam5);
		func_1395(iParam0, bParam3, bVar1, bParam6);
		func_1397(iParam0, iParam1);
	}
	else if (bParam3)
	{
		func_1396(3, iParam0);
	}
}

bool func_659(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

void func_660(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

struct<4> func_661(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_662(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_275(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_662(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_663(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_664(int iParam0, int iParam1)
{
	if (!func_662(iParam0, 0))
	{
		return false;
	}
	if (func_665(iParam0))
	{
		return func_1398(func_666(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_665(int iParam0)
{
	if (func_1399(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_666(int iParam0, bool bParam1)
{
	if (!func_662(iParam0, 0))
	{
		return func_1401(func_1400(iParam0), bParam1);
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

int func_667(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_1402(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_668(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_662(iParam0, 0))
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
		func_1403(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_669(var uParam0)
{
	if (uParam0->f_10 == 255)
	{
		return;
	}
	if (uParam0->f_6 != -1 && uParam0->f_6 != func_182(255))
	{
		return;
	}
	Local_4089.f_2890.f_70 = uParam0->f_10;
	Local_4089.f_2890.f_71 = uParam0->f_13;
	if (func_1404(&(Local_4089.f_3355), uParam0->f_13, uParam0->f_12))
	{
		func_236(139, 1, 0);
	}
	func_236(138, 1, 0);
}

void func_670(var uParam0)
{
	if (uParam0->f_6 != -1 && uParam0->f_6 != func_182(255))
	{
		return;
	}
	Local_4089.f_2890.f_70 = 255;
	Local_4089.f_2890.f_71 = uParam0->f_13;
	if (func_1404(&(Local_4089.f_3355), uParam0->f_13, uParam0->f_12))
	{
		func_236(139, 1, 0);
	}
	func_236(138, 1, 0);
}

void func_671(var uParam0)
{
	if (!func_28(126))
	{
		return;
	}
	if (_0x9be7dcb22d32ccbe(uParam0->f_8, player_id()))
	{
		return;
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (Local_4089.f_4073 > 1)
			{
				func_1168(1043715612, 255, uParam0->f_8, 0, 1, 0, 0, 0, 1, 0, 0, 0);
			}
			else
			{
				func_1168(-606460858, 255, uParam0->f_8, 0, 1, 0, 0, 0, 1, 0, 0, 0);
			}
			break;
		case 1:
			if (Local_4089.f_4073 > 1)
			{
				func_1168(246104759, 255, uParam0->f_8, 1891514641, 1, 0, 0, 0, 1, 0, 0, 0);
			}
			else
			{
				func_1168(984558942, 255, uParam0->f_8, 1891514641, 1, 0, 0, 0, 1, 0, 0, 0);
			}
			break;
	}
}

void func_672(var uParam0)
{
	if (!func_28(126))
	{
		return;
	}
	if (!func_311(uParam0->f_13))
	{
		return;
	}
	if (func_1405(uParam0, 1))
	{
		return;
	}
	if (Local_13.f_82[uParam0->f_13]->f_1 != 886638433)
	{
		return;
	}
	if (!func_1389(Local_409.f_1[Local_13.f_82[uParam0->f_13]->f_5]->f_1))
	{
		return;
	}
	if (func_182(255) != uParam0->f_6)
	{
		return;
	}
	if (func_307(255) != 404851220)
	{
		return;
	}
	if (func_773(512, uParam0->f_13))
	{
		return;
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (uParam0->f_10 == player_id())
			{
				func_1168(-2119544143, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_1168(133284906, uParam0->f_10, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 1:
			if (uParam0->f_10 == player_id())
			{
				func_1168(745628106, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_1168(-712917438, uParam0->f_10, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
	}
	func_838(131072, uParam0->f_13);
}

void func_673(var uParam0)
{
	if (!func_311(uParam0->f_13))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 14)
	{
		if (Local_409.f_1[iVar1]->f_1 == -726384468 && Local_4089.f_6[iVar1]->f_8 == 2032048458)
		{
			iVar0 = func_1386(func_1385(iVar1, 886638433, -158647914, 0, 0, 0, 0));
			if (iVar0 == -1 || iVar0 == uParam0->f_6)
			{
				func_1406(iVar1, 0, 1, 0, -1254440351);
			}
		}
		iVar1++;
	}
	if (!func_28(126))
	{
		return;
	}
	if (Local_4089.f_3393 == 1717788883)
	{
		return;
	}
	if (func_1405(uParam0, 2) && _0x9be7dcb22d32ccbe(uParam0->f_8, player_id()))
	{
		return;
	}
	if (!func_1405(uParam0, 32))
	{
		if (uParam0->f_14 >= 1)
		{
			func_1407(uParam0->f_13, uParam0->f_10);
		}
		else
		{
			func_1408();
		}
	}
	if (Local_4089.f_4124 <= 1)
	{
		return;
	}
	if (func_1405(uParam0, 8))
	{
		uParam0->f_10 = 255;
		uParam0->f_8 = 0;
	}
	iVar2 = func_182(255);
	if (_0x901e0dc25080c8b9(player_id()) == uParam0->f_8 || (iVar2 == 0 && uParam0->f_6 == 0))
	{
		if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) == 1 && !func_1410(&(Local_4089.f_3355), func_1409(), iVar2))
		{
			return;
		}
	}
	if (func_1405(uParam0, 4) && func_28(172))
	{
		switch (uParam0->f_6)
		{
			case 0:
				if (iVar2 == 0)
				{
					func_1168(1990107177, uParam0->f_10, uParam0->f_8, 0, 1, 1274606071, -1329849370, -499641722, 1, 0, 0, 0);
				}
				else
				{
					func_1168(1952834410, uParam0->f_10, uParam0->f_8, 0, 1, -141424860, -171864616, -640887204, 1, 0, 0, 0);
				}
				break;
			case 1:
				if (iVar2 == 0)
				{
					func_1168(-813332757, uParam0->f_10, uParam0->f_8, 0, 1, 1409645427, 158882371, 1585081938, 1, 0, 0, 0);
				}
				else
				{
					func_1168(1756049229, uParam0->f_10, uParam0->f_8, 0, 1, -1937592753, 1862357247, 988474740, 1, 0, 0, 0);
				}
				break;
		}
	}
	else
	{
		switch (uParam0->f_6)
		{
			case 0:
				if (iVar2 == 0)
				{
					func_1168(-1583299573, uParam0->f_10, uParam0->f_8, 0, 1, 1227592593, 665213324, 186691189, 1, 0, 0, 0);
				}
				else
				{
					func_1168(-610101816, uParam0->f_10, uParam0->f_8, 0, 1, -1765202018, 506103293, 866970108, 1, 0, 0, 0);
				}
				break;
			case 1:
				if (iVar2 == 0)
				{
					func_1168(968728494, uParam0->f_10, uParam0->f_8, 0, 1, 1416307057, 725185359, -1698197613, 1, 0, 0, 0);
				}
				else
				{
					func_1168(-989613861, uParam0->f_10, uParam0->f_8, 0, 1, 1726118920, 1122073425, -718912310, 1, 0, 0, 0);
				}
				break;
		}
	}
}

void func_674(var uParam0)
{
	if (!func_311(uParam0->f_13))
	{
		return;
	}
	if (!func_28(126))
	{
		return;
	}
	if (Local_4089.f_4124 <= 1)
	{
		return;
	}
	if (Local_13.f_82[uParam0->f_13]->f_1 == -1918493640)
	{
		return;
	}
	if (func_995(uParam0->f_13, 1))
	{
		return;
	}
	if (Local_13.f_82[uParam0->f_13]->f_1 == -916820003 && Local_4089.f_1983[Local_13.f_82[uParam0->f_13]->f_5]->f_1 == 0)
	{
		return;
	}
	if (uParam0->f_10 == player_id())
	{
		if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) == 1)
		{
			return;
		}
		func_1168(1279275803, 255, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_1168(511362322, 255, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	}
}

void func_675(var uParam0)
{
	if (!func_311(uParam0->f_13))
	{
		return;
	}
	func_312(uParam0->f_13, uParam0->f_10, 0);
}

void func_676(var uParam0)
{
	if (!func_311(uParam0->f_13))
	{
		return;
	}
	if (!func_28(126))
	{
		return;
	}
	if (Local_4089.f_4124 <= 1)
	{
		return;
	}
	if (func_182(255) != 0)
	{
		return;
	}
	func_1168(2113476584, 255, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);
}

void func_677(var uParam0)
{
	if (!func_311(uParam0->f_13))
	{
		return;
	}
	if (!func_28(126))
	{
		return;
	}
	if (func_182(255) != 0)
	{
		return;
	}
	func_1168(1248924495, 255, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);
}

void func_678(var uParam0)
{
	if (!func_311(uParam0->f_13))
	{
		return;
	}
	if (Local_4089.f_4124 <= 1)
	{
		return;
	}
	if (!func_28(126))
	{
		return;
	}
	if (func_182(255) != 0)
	{
		return;
	}
	func_1168(1984260050, 255, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);
}

void func_679(var uParam0)
{
	if (!func_311(uParam0->f_13))
	{
		return;
	}
	if (!network_is_host_of_this_script())
	{
		func_1350(uParam0->f_13);
		return;
	}
	func_833(536870912, uParam0->f_13);
}

void func_680(var uParam0)
{
	if (!func_28(126))
	{
		return;
	}
	if (uParam0->f_10 == 255 || !network_is_player_active(uParam0->f_10))
	{
		return;
	}
	func_1168(133284906, uParam0->f_10, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);
}

void func_681(var uParam0)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (!func_1411(2, uParam0->f_12))
	{
		Local_409.f_1[uParam0->f_12]->f_14 = uParam0->f_9;
	}
}

void func_682(var uParam0)
{
	if (network_is_host_of_this_script())
	{
		func_1412(16, iVar0);
		Local_13.f_378++;
		iVar1 = func_1413(&(Local_4089.f_3355), Local_4089.f_3287);
		if (iVar1 != -1 && Local_13.f_378 >= iVar1)
		{
			func_302(Local_4089.f_6[uParam0->f_12]->f_50);
		}
		else if (&Local_409.f_1[iVar0] != 16 && &Local_409.f_1[iVar0] != 29)
		{
			func_1414(18, uParam0->f_12);
		}
	}
}

void func_683(var uParam0)
{
	if (!_network_is_player_index_valid(uParam0->f_10))
	{
		return;
	}
	if (!network_is_player_active(uParam0->f_10))
	{
		return;
	}
	iVar0 = get_player_ped(uParam0->f_10);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	vVar1 = { get_entity_coords(iVar0, true, false) };
	Local_4089.f_6[uParam0->f_12]->f_64 = { vVar1 };
}

void func_684(var uParam0)
{
	func_1415(-2147483648, uParam0->f_12);
	Local_4089.f_6[uParam0->f_12]->f_64 = { 0f, 0f, 0f };
	func_163(&(Local_4089.f_6[uParam0->f_12]->f_53));
	_0x58f7db5bd8fa2288(Local_4089.f_6[uParam0->f_12]->f_60);
}

void func_685(var uParam0)
{
	func_1416(uParam0->f_12, uParam0->f_1, uParam0->f_7, uParam0->f_18);
}

void func_686()
{
	if (func_182(255) != 0)
	{
		return;
	}
	if (&Local_4089.f_3008[1] == 493038497)
	{
		return;
	}
	if (Local_13.f_359 > 1)
	{
		func_1168(-2043204477, 255, 0, 0, 0, 0, 0, 0, 1, 0, func_1417(), func_1418());
	}
	else
	{
		func_1168(1712844771, 255, 0, 0, 0, 0, 0, 0, 1, 0, func_1417(), func_1418());
	}
}

void func_687(var uParam0)
{
	if (!func_311(uParam0->f_13))
	{
		return;
	}
	if (Local_13.f_82[uParam0->f_13]->f_1 != -1918493640)
	{
		return;
	}
	if (!network_does_network_id_exist(Local_409.f_317[Local_13.f_82[uParam0->f_13]->f_5]->f_5))
	{
		return;
	}
	_get_scenario_point_close_to_coords(func_1419(&(Local_4089.f_3355), uParam0->f_13), 3f, &iVar0, iVar0);
	iVar4 = 0;
	while (iVar4 <= (iVar0 - 1))
	{
		if (_does_scenario_point_exist(&(iVar0[iVar4])))
		{
			_0x2e20878fd208a68e(&(iVar0[iVar4]), Local_4089.f_1087[Local_13.f_82[uParam0->f_13]->f_5]->f_11);
		}
		iVar4++;
	}
}

void func_688(var uParam0)
{
	switch (uParam0->f_13)
	{
		case -79139194:
		case 385589027:
		case 1951290581:
			func_1364(uParam0->f_10, 1, 0);
			break;
		default:
			if (_0x424b17a7dc5c90bc(player_id()))
			{
				func_1007(uParam0->f_13, 1, 1);
			}
			break;
	}
}

void func_689(var uParam0)
{
	if (uParam0->f_10 != player_id())
	{
		func_1420(uParam0->f_13, uParam0->f_12, 0, is_bit_set(uParam0->f_11, 1), 0, is_bit_set(uParam0->f_11, 2));
	}
}

void func_690(var uParam0)
{
	if (uParam0->f_10 != player_id())
	{
		func_1421(uParam0->f_13, uParam0->f_12, is_bit_set(uParam0->f_11, 1), 0);
	}
}

void func_691(var uParam0)
{
	if (uParam0->f_10 != player_id())
	{
		func_1422(uParam0->f_13, 0, 1, is_bit_set(uParam0->f_11, 1));
	}
}

void func_692(var uParam0)
{
	iVar0 = uParam0->f_13;
	uVar22 = 19;
	if (iVar0 < 0 || iVar0 >= 9)
	{
		return;
	}
	iVar42 = Local_4089.f_1087[iVar0]->f_11;
	if (!does_entity_exist(iVar42) || !network_has_control_of_entity(iVar42))
	{
		return;
	}
	if (func_1423(Local_4089.f_1087[iVar0]->f_7, &uVar2, &uVar22, 1))
	{
		iVar1 = 0;
		while (iVar1 <= 18)
		{
			if (&uVar2[iVar1] > 0)
			{
				_0xe4efb315bcd2a838(iVar42, &(uVar2[iVar1]));
			}
			iVar1++;
		}
	}
}

void func_693(var uParam0)
{
	iVar0 = uParam0->f_13;
	uVar22 = 19;
	if (iVar0 < 0 || iVar0 >= 6)
	{
		return;
	}
	iVar42 = func_1424(_0xd08066e00d26c448(Local_409.f_381[iVar0]->f_11));
	if (!does_entity_exist(iVar42) || !network_has_control_of_entity(iVar42))
	{
		return;
	}
	iVar43 = get_object_index_from_entity_index(iVar42);
	if (func_1423(Local_4089.f_1367[iVar0]->f_19, &uVar2, &uVar22, 1))
	{
		iVar1 = 0;
		while (iVar1 <= 18)
		{
			if (&uVar2[iVar1] > 0)
			{
				_0xe4efb315bcd2a838(iVar43, &(uVar2[iVar1]));
			}
			iVar1++;
		}
	}
}

void func_694(var uParam0)
{
	vVar0 = { uParam0->f_15 };
	fVar3 = 1f;
	if (!func_67(vVar0))
	{
		func_1425(1677566356, &fVar4, &fVar5, &fVar6);
		set_particle_fx_non_looped_colour(fVar4, fVar5, fVar6);
		use_particle_fx_asset("scr_fme_spawn_effects");
		if (start_particle_fx_non_looped_at_coord("scr_net_fetch_smoke_puff", vVar0, 0f, 0f, 0f, fVar3, false, false, false))
		{
		}
	}
}

void func_695()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_302(iVar0);
		iVar0++;
	}
}

void func_696(var uParam0)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (uParam0->f_13 == -1 || Local_13.f_82[uParam0->f_13]->f_5 == -1)
	{
		return;
	}
	switch (Local_13.f_82[uParam0->f_13]->f_1)
	{
		case 886638433:
			func_1414(34, Local_13.f_82[uParam0->f_13]->f_5);
			break;
		case -1918493640:
			func_1426(12, Local_13.f_82[uParam0->f_13]->f_5);
			break;
		case -916820003:
			func_1427(9, Local_13.f_82[uParam0->f_13]->f_5);
			break;
		case -584819812:
			func_1428(8, Local_13.f_82[uParam0->f_13]->f_5);
			break;
		case -1091027173:
			func_1429(7, Local_13.f_82[uParam0->f_13]->f_5);
			break;
	}
}

void func_697(var uParam0)
{
	switch (Local_4089.f_3393)
	{
		case 1427578635:
			if (uParam0->f_5 != -1)
			{
				if (*Global_1237665)[uParam0->f_5]->f_16 == player_id()
				{
					func_1026(66, 0, 0, 0);
				}
			}
			break;
	}
}

void func_698(var uParam0)
{
	iVar0 = func_308(uParam0->f_13);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	remove_particle_fx_from_entity(iVar0);
	clear_area(get_entity_coords(iVar0, false, false), 2f, 65536);
	if (network_is_host_of_this_script())
	{
		Var1 = { func_1430(Local_4089.f_3355, 448485414, uParam0->f_13, -1, -1626301748, 0, 0, 0) };
		func_1431(25, get_entity_coords(iVar0, false, false), &Var1);
	}
}

void func_699(var uParam0)
{
	if (!network_is_player_active(get_player_index()))
	{
		return;
	}
	if (!does_entity_exist(Global_34) || is_ped_dead_or_dying(Global_34, true))
	{
		return;
	}
	iVar0 = network_get_entity_from_network_id(uParam0->f_9);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return;
	}
	if (!network_does_network_id_exist(uParam0->f_9))
	{
		return;
	}
	if (!network_has_control_of_network_id(uParam0->f_9))
	{
		network_request_control_of_network_id(uParam0->f_9);
	}
}

void func_700(var uParam0)
{
	if (!network_is_player_active(get_player_index()))
	{
		return;
	}
	if (uParam0->f_5 != Local_4089.f_3391)
	{
		return;
	}
	switch (Local_4089.f_3393)
	{
		case -1784925006:
		case 1884341302:
			func_236(54, 1, 0);
			break;
	}
}

void func_701(var uParam0)
{
	if (!func_798(uParam0->f_39))
	{
		return;
	}
	func_190(1024, uParam0->f_39, 1);
	iVar0 = get_unique_int_for_player(player_id());
	if (&uParam0->f_6[iVar0] == -1)
	{
		return;
	}
	func_1432(&(uParam0->f_6[iVar0]));
}

void func_702(var uParam0)
{
	if (!func_798(uParam0->f_39))
	{
		return;
	}
	func_996(512, uParam0->f_39, 1);
	if (func_1045() == uParam0->f_39)
	{
		func_1433(&(uParam0->f_6[get_unique_int_for_player(player_id())]));
	}
}

void func_703(var uParam0)
{
	if (!func_798(uParam0->f_39))
	{
		return;
	}
	func_996(1024, uParam0->f_39, 1);
	func_1434(uParam0->f_39, &(uParam0->f_6));
}

void func_704(var uParam0)
{
	if (!func_798(uParam0->f_39))
	{
		return;
	}
	func_996(65536, uParam0->f_39, 1);
	(*Global_1248240)[Local_4089.f_3391]->f_19[uParam0->f_39]->f_86 = uParam0->f_40;
}

void func_705(var uParam0)
{
	func_1435(uParam0->f_8, uParam0->f_12);
}

void func_706(var uParam0)
{
	func_1436(uParam0->f_8, uParam0->f_7, uParam0->f_10);
}

void func_707(var uParam0)
{
	func_1437(uParam0);
}

void func_708(var uParam0)
{
	func_1438(uParam0->f_8, uParam0->f_9, uParam0->f_11);
}

void func_709(var uParam0)
{
	func_1439(uParam0->f_8, uParam0->f_9);
}

void func_710(var uParam0)
{
	if (is_scripted_speech_playing(Local_4089.f_6[uParam0->f_8]->f_60))
	{
		if (uParam0->f_6 != -1 && _0x4a98e228a936dbcc(Local_4089.f_6[uParam0->f_8]->f_60) == get_hash_key(func_1440(uParam0->f_6)))
		{
			return;
		}
		stop_current_playing_speech(Local_4089.f_6[uParam0->f_8]->f_60, 0);
	}
}

void func_711(var uParam0)
{
	func_1441(uParam0->f_12, uParam0->f_11, uParam0->f_9);
}

void func_712(var uParam0)
{
	if (Local_4089.f_2190[uParam0->f_6]->f_7 == -1812123900 && uParam0->f_7 == 7)
	{
		func_935(uParam0->f_6, 0, 1);
		return;
	}
	func_1442(uParam0->f_7, uParam0->f_6, 0);
}

void func_713(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 1:
			func_1443(uParam0, uParam1);
			break;
		case 2:
			func_1444(uParam0, uParam1);
			break;
	}
}

bool func_714(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = participant_id_to_int();
	}
	return func_80(&(Local_920[iParam2]->f_68[iParam1]), iParam0);
}

bool func_715(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

int func_716(int iParam0)
{
	if (Local_4089.f_3393 == 78055447)
	{
		switch (iParam0)
		{
			case 1:
				return 10;
			case 2:
				return 8;
			case 3:
				return 4;
			case 4:
				return 4;
			case 5:
				return 2;
			case 6:
				return 20;
			case 7:
				return 10;
			case 8:
				return 20;
			case 9:
				return 15;
			case 11:
				return 100;
			case 12:
				return 75;
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 1:
			return 8;
		case 2:
			return 25;
		case 3:
			return 15;
		case 4:
			return 20;
		case 5:
			return 10;
		case 6:
			return 120;
		case 7:
			return 100;
		case 8:
			return 280;
		case 9:
			return 220;
		case 10:
			return 80;
		case 11:
			return 40;
		case 12:
			return 25;
		case 13:
			return 150;
		case 14:
			return 10;
		default:
			break;
	}
	return 0;
}

bool func_717(int iParam0)
{
	iVar0 = func_300(iParam0, 0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (Local_409.f_1[iVar0]->f_1 == 468586057)
	{
		return true;
	}
	return false;
}

bool func_718(int iParam0, bool bParam1)
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

bool func_719(int iParam0)
{
	return (network_has_control_of_entity(iParam0) || func_587(network_get_network_id_from_entity(iParam0)));
}

bool func_720()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

var func_721(int iParam0)
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

void func_722(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 31, 24, &uParam1);
}

void func_723(var uParam0)
{
	if (&Global_1051252->f_16[0] == 0 || !_does_thread_exist(&(Global_1051252->f_16[0])))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 31, 24, &(Global_1051252->f_16[0]));
}

int func_724(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = 264020902;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

int func_725(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

Vector3 func_726(var uParam0, int iParam1)
{
	return func_604(uParam0, 1125306326, 0f, 0f, 0f, -597379794, iParam1, 0, 0, 0, 0);
}

int func_727(var uParam0, int iParam1)
{
	return func_591(uParam0, 1731164987, 0, -597379794, iParam1, 0, 0, 0, 0, 0);
}

int func_728(var uParam0, int iParam1)
{
	return func_1445(uParam0, -628539032, 0, -70973813, iParam1, 0, 0, 0, 0, 0);
}

void func_729(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_730(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = 1763396569;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

bool func_731(var uParam0, bool bParam1)
{
	return func_591(uParam0, 1731164987, 0, 1710752225, bParam1, 0, 0, 0, 0, 0);
}

bool func_732(var uParam0, bool bParam1)
{
	return func_1446(uParam0, 575574976, 0, -384272353, bParam1, 0, 0, 0, 0);
}

bool func_733(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bVar3 = false;
	func_1447(Local_4089.f_3355, iParam0, iParam1, iParam3, &iVar0, &iVar1, &iVar4, &iVar5, &bVar3, &iVar2);
	iVar6 = func_956(bParam2, 1);
	if (bVar3)
	{
		iVar9 = func_1448();
		iVar7 = 0;
		while (iVar7 <= 5)
		{
			if (iVar7 != iParam1)
			{
				if (&Local_13.f_82[iVar7] >= 1)
				{
					if (func_1449(Local_4089.f_3355, 448485414, iVar7, -1, 701375535, 0, 0, 0, 0))
					{
						iVar8++;
					}
				}
			}
			iVar7++;
		}
		if (iVar8 >= iVar9)
		{
			return false;
		}
	}
	if (iVar1 < iVar0 && iVar1 != 0)
	{
		return true;
	}
	if (iVar0 > 1 && iVar6 < iVar0)
	{
		return false;
	}
	if (iVar1 != 0 && iVar6 > iVar1)
	{
		return false;
	}
	iVar10 = func_1450((*Global_1237665)[Local_4089.f_3391]->f_21.f_2);
	if (iVar10 != -1)
	{
		if (iVar4 != -1 && iVar10 < iVar4)
		{
			return false;
		}
		if (iVar5 != -1 && iVar10 > iVar5)
		{
			return false;
		}
	}
	if (iVar2 != -1 && &Local_13.f_82[iVar2] != 0)
	{
		return false;
	}
	return true;
}

void func_734(var uParam0)
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
	_trigger_script_event_2(uParam0, 40, 5, &(Global_1051252->f_16[13]));
	func_1451(uParam0, uParam0->f_1);
}

int func_735(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_216(&vVar1, iParam0) && func_1452(&vVar1, iParam1))
	{
		vVar1.f_2 = 1874570609;
		if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
		{
			iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

Vector3 func_736(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_1453(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

var func_737(int iParam0, var uParam1)
{
	uVar0 = Global_1901947->f_166.f_34;
	if (func_216(&Var1, iParam0) && func_1452(&Var1, uParam1))
	{
		func_1454(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

bool func_738(bool bParam0, var uParam1, bool bParam2, vector3 vParam3, bool bParam6, var uParam7)
{
	if (_0xf6a8a652a6b186cd(uParam1->f_1))
	{
		return true;
	}
	if (!bParam6 && func_1455(func_34(Local_4089.f_3392)))
	{
		return true;
	}
	if (func_67(vParam3))
	{
		return true;
	}
	bVar1 = func_1456(Local_4089.f_3392, Local_4089.f_3972, 2);
	if (!_0xa4a4359320345b34(*uParam1))
	{
		if (func_331(Local_4089.f_3391, 268435456))
		{
			uVar2 = func_1457(vParam3, uParam7, bVar1);
			if (_0xf6a8a652a6b186cd(uVar2))
			{
				_0xfdfecc6ee4491e11(uVar2);
				return false;
			}
		}
		if (func_1458(vParam3, uParam7, bVar1))
		{
			_0xfa15c9a320e707b0();
			*bParam0 = 1;
			return true;
		}
		func_1459(Local_4089.f_3391, &uVar3, vParam3, uParam7, bVar1);
		*uParam1 = _0x183c0b6cfeffcae4(&uVar3);
		func_236(58, 1, 0);
	}
	else if (!func_28(58))
	{
		*bParam2 = 1;
		uParam1->f_1 = func_1457(vParam3, uParam7, bVar1);
		if (_0xf6a8a652a6b186cd(uParam1->f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = _0xb33a604345f58202(*uParam1);
	switch (iVar0)
	{
		case 3:
			uParam1->f_1 = _0x351d71b8b72b858b(*uParam1);
			return true;
		case 4:
			*uParam1 = 0;
			*bParam0 = 1;
			return true;
		case 0:
			func_1459(Local_4089.f_3391, &uVar12, vParam3, uParam7, bVar1);
			*uParam1 = _0x183c0b6cfeffcae4(&uVar12);
			return false;
		default:
			break;
	}
	return false;
}

Vector3 func_739(int iParam0, var uParam1, int iParam2)
{
	if ((func_216(&Var3, iParam0) && func_1452(&Var3, uParam1)) && func_1460(&Var3, iParam2))
	{
		func_1461(Var3, 1702777600, &vVar0, 0);
	}
	return vVar0;
}

var func_740(int iParam0, var uParam1, int iParam2)
{
	uVar0 = Global_1901947->f_166.f_35;
	if ((func_216(&Var1, iParam0) && func_1452(&Var1, uParam1)) && func_1460(&Var1, iParam2))
	{
		func_1454(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

var func_741(var uParam0, int iParam1)
{
	return func_605(uParam0, 1822601469, 0f, -597379794, iParam1, 0, 0, 0, 0);
}

var func_742(var uParam0, int iParam1)
{
	return func_605(uParam0, -852415772, 120f, -597379794, iParam1, 0, 0, 0, 0);
}

bool func_743(var uParam0, int iParam1)
{
	return func_218(uParam0, -373586132, 1, -597379794, iParam1, 0, 0, 0, 0);
}

int func_744(var uParam0, int iParam1)
{
	return func_1462(func_591(uParam0, 884606880, -993181231, -597379794, iParam1, 0, 0, 0, 0, 0));
}

void func_745(vector3 vParam0)
{
	clear_area(vParam0, 5f, 1589816);
}

bool func_746(var uParam0, int iParam1)
{
	return func_218(uParam0, 993964679, 0, -597379794, iParam1, 0, 0, 0, 0);
}

bool func_747(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = _0xd08066e00d26c448(iParam0);
	if (!_does_propset_exist(iVar0))
	{
		*bParam3 = 1;
		return false;
	}
	if (_0xf42db680a8b2a4d9(iVar0))
	{
		iVar1 = create_itemset(true);
		iVar2 = _get_entities_from_propset(iVar0, iVar1, 0, false, false);
		iVar3 = -1;
		if (iVar2 > 14)
		{
			*bParam3 = 1;
			destroy_itemset(iVar1);
			return false;
		}
		iVar4 = 0;
		while (iVar4 <= 13)
		{
			if (!network_does_network_id_exist(&(Local_13.f_60[iVar4])))
			{
				iVar3 = iVar4;
			}
			else
			{
				iVar4++;
			}
		}
		if (iVar3 == -1 || iVar2 > (14 - iVar3))
		{
			*bParam3 = 1;
			destroy_itemset(iVar1);
			return false;
		}
		if (!*bParam2)
		{
			Local_13.f_352 = (Local_13.f_352 + iVar2);
			func_131();
			*bParam2 = 1;
		}
		if (!bParam1)
		{
			destroy_itemset(iVar1);
			return false;
		}
		if (!func_749(bParam3))
		{
			destroy_itemset(iVar1);
			return false;
		}
		iVar4 = iVar3;
		while (iVar4 <= ((iVar3 + iVar2) - 1))
		{
			iVar5 = _get_entity_from_item(get_indexed_item_in_itemset((iVar4 - iVar3), iVar1));
			_0xe9e7a0bac7f57746(iVar5, 1);
			network_register_entity_as_networked(iVar5);
			set_entity_as_mission_entity(iVar5, true, false);
			if (_0xb07d3185e11657a5(iVar5))
			{
				Local_13.f_60[iVar4] = network_get_network_id_from_entity(iVar5);
			}
			iVar4++;
		}
		destroy_itemset(iVar1);
		return true;
	}
	return false;
}

int func_748(var uParam0, int iParam1)
{
	return func_1445(uParam0, -588596439, -2040421904, -384272353, iParam1, 0, 0, 0, 0, 0);
}

bool func_749(bool bParam0)
{
	if (can_register_mission_objects(1))
	{
		return true;
	}
	Local_13.f_379++;
	if (Local_13.f_379 > 200)
	{
		*bParam0 = 1;
	}
	return false;
}

Vector3 func_750(var uParam0, int iParam1)
{
	return func_604(uParam0, 1125306326, 0f, 0f, 0f, 1710752225, iParam1, 0, 0, 0, 0);
}

Vector3 func_751(var uParam0, int iParam1)
{
	return func_604(uParam0, 1798497919, 0f, 0f, 0f, 1710752225, iParam1, 0, 0, 0, 0);
}

bool func_752(var uParam0, int iParam1)
{
	return func_1446(uParam0, 1045063194, 0, -384272353, iParam1, 0, 0, 0, 0);
}

bool func_753(var uParam0, int iParam1)
{
	return func_1446(uParam0, 723480996, 0, -384272353, iParam1, 0, 0, 0, 0);
}

void func_754(int iParam0)
{
	if (!func_1463(iParam0))
	{
		set_bit(&(Local_13.f_350), iParam0);
	}
}

bool func_755(var uParam0, int iParam1)
{
	return func_1446(uParam0, -1706879507, 0, -384272353, iParam1, 0, 0, 0, 0);
}

void func_756(int iParam0, int iParam1)
{
	if (!func_1464(iParam0, iParam1))
	{
		Local_13.f_3[iParam1]->f_2 = (Local_13.f_3[iParam1]->f_2 || iParam0);
	}
}

bool func_757(var uParam0, int iParam1)
{
	return func_218(uParam0, 1486205897, 0, 1710752225, iParam1, 0, 0, 0, 0);
}

void func_758(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (is_entity_a_ped(iParam0))
	{
		iVar0 = get_ped_index_from_entity_index(iParam0);
		set_ped_can_ragdoll(iVar0, false);
		if (bParam1)
		{
			stop_ped_speaking(iVar0, true);
		}
	}
	if (!is_entity_attached(iParam0))
	{
		freeze_entity_position(iParam0, true);
	}
	set_entity_collision(iParam0, bParam2, false);
	set_entity_completely_disable_collision(iParam0, bParam2, false);
	if (bParam3)
	{
		set_entity_visible(iParam0, false);
	}
	func_1465(iParam0, 8);
}

int func_759(var uParam0, int iParam1, int iParam2)
{
	return func_1466(uParam0, -786352731, iParam2, -384272353, iParam1, 0, 0, 0, 0);
}

void func_760(int iParam0)
{
	switch (Local_4089.f_3393)
	{
		case 1884341302:
			_0xcaaf2bccfef37f77(iParam0, 17);
			break;
		default:
			_0xcaaf2bccfef37f77(iParam0, 24);
			break;
	}
}

bool func_761(int iParam0, int iParam1, bool bParam2)
{
	if (!func_143(iParam0))
	{
		return false;
	}
	if (bParam2)
	{
		return func_146((*Global_1248240)[iParam0]->f_558, iParam1);
	}
	return func_146((*Global_1248240)[iParam0]->f_557, iParam1);
}

int func_762(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = -1611275802;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

int func_763(var uParam0, int iParam1)
{
	return func_886(uParam0, 1910469199, -1, 24357435, iParam1, 0, 0, 0, 0);
}

bool func_764(int iParam0)
{
	iVar0 = func_1467();
	if (func_1468())
	{
		iVar1 = func_1469(Local_4089.f_3355, 448485414, iParam0, -1, 86422132, -1, 0, 0, 0);
		if (!func_1470(iVar1))
		{
			return true;
		}
		if (iVar1 > (iVar0 - 1))
		{
			return false;
		}
	}
	return true;
}

bool func_765(var uParam0, bool bParam1)
{
	return func_591(uParam0, 1731164987, 363724928, 24357435, bParam1, 0, 0, 0, 0, 0);
}

int func_766(var uParam0, bool bParam1)
{
	return func_591(uParam0, 764457433, 363724928, 24357435, bParam1, 0, 0, 0, 0, 0);
}

int func_767(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, int iParam36, int iParam37, var uParam38, float fParam39, int iParam40, int iParam41)
{
	iVar1 = func_1371(iParam36, &uVar0);
	iVar2 = func_1471(iParam37, iVar1, -618338527, iParam40);
	if (func_886(&(Local_4089.f_3355), -1532785326, -1, iVar1, iParam37, iParam40, 0, 0, 0) != -1 && iVar2 > 0)
	{
		iVar2 = 0;
	}
	if (iVar2 > 0)
	{
		if (iParam41 != -1 && iParam41 < iVar2)
		{
			iVar3 = iParam41;
		}
		else
		{
			iVar3 = func_1472(iVar2, &uParam0, iVar1, iParam37, iParam40);
			if (iVar3 == -1)
			{
				iVar3 = func_1473(iVar2, &uParam0, iVar1, iParam36, iParam37, iParam40);
			}
		}
		*uParam38 = { func_604(&uParam0, 1125306326, 0f, 0f, 0f, iVar1, iParam37, iParam40, 1727197243, iVar3, 0) };
		*fParam39 = func_605(&uParam0, 1822601469, 0f, iVar1, iParam37, iParam40, 1727197243, iVar3, 0);
		return iVar3;
	}
	else
	{
		*uParam38 = { func_604(&uParam0, 1125306326, 0f, 0f, 0f, iVar1, iParam37, iParam40, 0, 0, 0) };
		*fParam39 = func_605(&uParam0, 1822601469, 0f, iVar1, iParam37, iParam40, 0, 0, 0);
	}
	return -1;
}

bool func_768(int iParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var3.f_2 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_11 = -1;
	Var3.f_15 = 255;
	Var3.f_16 = 255;
	iVar24 = 1;
	if (func_1474(&(Local_4089.f_3355), iParam0) != 0)
	{
		iVar24++;
	}
	iVar25 = func_1475();
	if (iVar25 < iVar24)
	{
		return false;
	}
	*iParam1 = func_1476();
	if (*iParam1 == -1)
	{
		bVar1 = true;
		return false;
	}
	Var26 = { func_1477(&(Local_4089.f_3355), iParam0, Local_4089.f_3391) };
	bVar2 = func_1341(Var26.f_5, 1);
	if (bVar2 && !func_1478(iParam6, iParam7, iParam9))
	{
		bVar1 = true;
		return false;
	}
	*Local_409.f_1[*iParam1] = { Var3 };
	Local_409.f_1[*iParam1]->f_4 = iParam6;
	Local_409.f_1[*iParam1]->f_5 = iParam7;
	Local_409.f_1[*iParam1]->f_6 = iParam9;
	Local_409.f_1[*iParam1]->f_1 = Var26.f_3;
	if (!func_1479(iParam6))
	{
		Local_409.f_1[*iParam1]->f_18 = { vParam2 };
		Local_409.f_1[*iParam1]->f_17 = iParam5;
		if (iParam8 != -1)
		{
			Local_409.f_1[*iParam1]->f_11 = iParam8;
			func_1384(2, *iParam1);
		}
		func_1414(1, *iParam1);
		if (!func_54(*iParam1))
		{
			func_1412(1, *iParam1);
		}
		iVar32 = func_1474(&(Local_4089.f_3355), iParam0);
		if (iVar32 != 0 && func_1480(*iParam1, 886638433, 1873548616, -1, 0, 0, 0) == -1)
		{
			iVar33 = func_1230(iParam6);
			if (func_768(iVar32, &uVar0, 0f, 0f, 0f, 0f, iVar33, *iParam1, -1, -1, 0))
			{
				Local_409.f_1[*iParam1]->f_11 = uVar0;
				func_1384(1, *iParam1);
			}
			else
			{
				*Local_409.f_1[*iParam1] = { Var3 };
				bVar1 = true;
			}
		}
		if (bVar2)
		{
			Local_13.f_370++;
		}
		if (func_1481(*iParam1, 886638433, 1411300059, 0, 0, 0, 0))
		{
			func_1384(32, *iParam1);
		}
		if (func_1481(*iParam1, 886638433, -1495273953, 0, 0, 0, 0))
		{
			func_1384(128, *iParam1);
		}
		if (func_1481(*iParam1, 886638433, 240115369, 0, 0, 0, 0))
		{
			func_236(82, 1, 0);
		}
		if (func_1481(*iParam1, 886638433, 1987443020, 0, 0, 0, 0))
		{
			func_1384(8192, *iParam1);
		}
		if (func_1481(*iParam1, 886638433, -2046316518, 0, 0, 0, 0))
		{
			func_1384(16384, *iParam1);
		}
		if (func_1481(*iParam1, 886638433, -2049126442, 0, 0, 0, 0))
		{
			func_1384(1073741824, *iParam1);
		}
		if (func_1481(*iParam1, 886638433, 1327740478, 0, 0, 0, 0))
		{
			func_1384(268435456, *iParam1);
		}
		switch (iParam6)
		{
			case -428150648:
			case 448485414:
			case 477970332:
			case 661336845:
				if (func_1481(*iParam1, 886638433, 913442791, 0, 0, 0, 0))
				{
					func_1384(1048576, *iParam1);
				}
				break;
		}
	}
	if (func_1479(iParam6))
	{
		func_1414(1, *iParam1);
	}
	else
	{
		switch (iParam6)
		{
			case 448485414:
				if (func_1482(&(Local_4089.f_3355), iParam7))
				{
					func_1384(64, *iParam1);
				}
				if (iParam8 != -1)
				{
					if (func_1483(&(Local_4089.f_3355), iParam7))
					{
						if (func_1484(&(Local_4089.f_3355), iParam7))
						{
							func_1384(8, *iParam1);
							Local_409.f_381[iParam8]->f_5++;
						}
						Local_13.f_360++;
						func_1384(4, *iParam1);
					}
				}
				break;
			case 661336845:
				func_1384(64, *iParam1);
				if (func_1485(&(Local_4089.f_3355), iParam7))
				{
					func_1384(16, *iParam1);
				}
				break;
			case 477970332:
				if (func_1486(&(Local_4089.f_3355), iParam9, iParam7))
				{
					func_1384(16, *iParam1);
				}
				if (!func_1487(1024, Local_409.f_1[*iParam1]->f_6) && bVar2)
				{
					Local_13.f_377++;
					func_1488(1024, Local_409.f_1[*iParam1]->f_6);
				}
				break;
			case -428150648:
				if (func_1489(&(Local_4089.f_3355), iParam7))
				{
					func_1384(16, *iParam1);
				}
				break;
			case 401658241:
				func_1384(16, *iParam1);
				Local_13.f_363++;
				break;
			case -1426507703:
				func_1384(16, *iParam1);
				Local_13.f_364++;
				break;
			case -2067454306:
				if (func_1490(&(Local_4089.f_3355), iParam9, iParam7))
				{
					func_1384(16, *iParam1);
				}
				Local_13.f_192[iParam9] = &Local_13.f_192[iParam9] + 1;
				break;
			case -1276434456:
				if (iParam10 == -2067454306)
				{
					Local_13.f_192[iParam9] = &Local_13.f_192[iParam9] + 1;
				}
				break;
		}
	}
	Local_13.f_351++;
	return !bVar1;
}

bool func_769(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam1 = func_1491();
	if (*iParam1 == -1)
	{
		return false;
	}
	Local_409.f_317[*iParam1]->f_1 = iParam3;
	Local_409.f_317[*iParam1]->f_2 = iParam4;
	Local_409.f_317[*iParam1]->f_3 = iParam2;
	func_1426(1, *iParam1);
	func_1492(1, *iParam1);
	if (!func_1494(func_1493(&(Local_4089.f_3355), iParam0)) && !func_732(&(Local_4089.f_3355), iParam0))
	{
		Local_13.f_352++;
	}
	return true;
}

bool func_770(int iParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*iParam1 = func_1495();
	if (*iParam1 == -1)
	{
		return false;
	}
	iVar0 = func_1475();
	iVar2 = func_1496(iParam6, iParam7, iParam8);
	if (iVar0 < iVar2)
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		iVar5 = -1;
		if ((iParam6 == -428150648 && func_766(&(Local_4089.f_3355), iVar1) == 886638433) && func_763(&(Local_4089.f_3355), iVar1) == iParam7)
		{
			if (!func_733(448485414, iVar1, 0, -1))
			{
			}
			else if (!func_764(iVar1))
			{
			}
			else
			{
				iVar4 = func_765(&(Local_4089.f_3355), iVar1);
				if (!func_768(iVar4, &iVar5, vParam2, iParam5, 448485414, iVar1, *iParam1, -1, 0) || iVar5 == -1)
				{
					return false;
				}
				else
				{
					func_774(iVar1, 886638433, iVar5);
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Local_4089.f_3355.f_13 - 1))
	{
		if (!func_733(-1276434456, iVar1, 0, -1))
		{
		}
		else
		{
			iVar5 = -1;
			iVar3 = func_1497(&(Local_4089.f_3355), iVar1);
			if ((iVar3 == -2067454306 || iVar3 == 477970332) || iVar3 == 401658241)
			{
				if ((iParam6 == iVar3 && func_1498(&(Local_4089.f_3355), iVar1) == iParam8) && func_1499(&(Local_4089.f_3355), iVar1) == iParam7)
				{
					if (!func_1500(&iVar4, vParam2, iParam5, iVar1, *iParam1, iParam8, iVar3))
					{
						return false;
					}
				}
			}
			else if (iVar3 == iParam6 && func_1499(&(Local_4089.f_3355), iVar1) == iParam7)
			{
				if (!func_1500(&iVar4, vParam2, iParam5, iVar1, *iParam1, iParam8, iVar3))
				{
					return false;
				}
			}
		}
		iVar1++;
	}
	Local_409.f_381[*iParam1]->f_1 = iParam6;
	Local_409.f_381[*iParam1]->f_2 = iParam7;
	Local_409.f_381[*iParam1]->f_3 = iParam8;
	Local_409.f_381[*iParam1]->f_4 = 0;
	Local_409.f_381[*iParam1]->f_7 = { vParam2 };
	Local_409.f_381[*iParam1]->f_6 = iParam5;
	func_1428(1, *iParam1);
	func_1501(1, *iParam1);
	if (func_1481(*iParam1, -584819812, 804035078, 0, 0, 0, 0))
	{
		func_1501(4194304, *iParam1);
	}
	if (func_1481(*iParam1, -584819812, -1959548791, 0, 0, 0, 0))
	{
		func_1501(8388608, *iParam1);
	}
	switch (iParam6)
	{
		case 477970332:
			if (func_1486(&(Local_4089.f_3355), iParam8, iParam7))
			{
				func_1501(256, *iParam1);
			}
			break;
		case -428150648:
			if (func_1489(&(Local_4089.f_3355), iParam7))
			{
				func_1501(256, *iParam1);
			}
			break;
		case 401658241:
			func_1501(256, *iParam1);
			break;
		case -2067454306:
			if (func_1490(&(Local_4089.f_3355), iParam8, iParam7))
			{
				func_1501(256, *iParam1);
			}
			break;
	}
	Local_13.f_353++;
	return true;
}

bool func_771(int iParam0, int iParam1)
{
	if (func_1502(0))
	{
		return false;
	}
	Local_409.f_460.f_1 = iParam0;
	Local_409.f_460.f_2 = iParam1;
	Local_409.f_460.f_3 = 0;
	func_1503(1);
	func_1504(1);
	return true;
}

bool func_772(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != 448485414)
	{
		return false;
	}
	*iParam0 = func_1505();
	if (*iParam0 == -1)
	{
		return false;
	}
	Local_409.f_478[*iParam0]->f_2 = iParam2;
	Local_409.f_478[*iParam0]->f_3 = 0;
	func_1427(1, *iParam0);
	return true;
}

bool func_773(int iParam0, bool bParam1)
{
	if (!func_311(bParam1))
	{
		return false;
	}
	return func_80(Local_4089.f_1622[bParam1]->f_41, iParam0);
}

void func_774(int iParam0, int iParam1, int iParam2)
{
	Local_13.f_82[iParam0]->f_5 = iParam2;
	Local_13.f_82[iParam0]->f_1 = iParam1;
	Local_13.f_82[iParam0] = 1;
	func_839(iParam0, 1);
	if (!func_995(iParam0, 0))
	{
		iVar0 = func_1506(&(Local_4089.f_3355), iParam0);
		if (iVar0 > 1)
		{
			Local_13.f_358 = (Local_13.f_358 + iVar0);
		}
		else
		{
			Local_13.f_358++;
		}
		Local_13.f_357++;
	}
	if (Local_13.f_82[iParam0]->f_1 != -1918493640 || !func_1449(Local_4089.f_3355, 448485414, iParam0, -1, -451432169, 0, 0, 0, 0))
	{
		func_1507();
	}
}

bool func_775()
{
	if (!func_28(83))
	{
		return false;
	}
	if (func_28(84))
	{
		if (func_28(29))
		{
			return false;
		}
	}
	if (Local_13.f_359 == 0)
	{
		if (func_311(Local_13.f_375) && Local_13.f_82[Local_13.f_375]->f_2 == 1)
		{
			return false;
		}
	}
	return true;
}

int func_776(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = -1840465248;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

int func_777(var uParam0, bool bParam1)
{
	return func_591(uParam0, 764457433, 363724928, -1417610999, bParam1, 0, 0, 0, 0, 0);
}

int func_778(var uParam0, int iParam1)
{
	return func_591(uParam0, 1731164987, -1886386550, -1417610999, iParam1, 0, 0, 0, 0, 0);
}

int func_779(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = -688784416;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

bool func_780(var uParam0)
{
	*uParam0 = func_1508();
	if (*uParam0 == -1)
	{
		return false;
	}
	Local_409.f_467[*uParam0]->f_1 = 0;
	func_1429(1, *uParam0);
	return true;
}

int func_781(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = -254831041;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

bool func_782(var uParam0)
{
	*uParam0 = func_1509();
	if (*uParam0 == -1)
	{
		return false;
	}
	Local_409.f_494[*uParam0]->f_3 = 0;
	func_1510(1, *uParam0);
	return true;
}

int func_783(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = -1390603394;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

int func_784(var uParam0, bool bParam1)
{
	return func_591(uParam0, 1731164987, 1861571830, -622270828, bParam1, 0, 0, 0, 0, 0);
}

int func_785(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = 1500955631;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

int func_786(var uParam0, int iParam1)
{
	return func_591(uParam0, 1587093128, 0, 2005001311, iParam1, 0, 0, 0, 0, 0);
}

Vector3 func_787(var uParam0, int iParam1)
{
	return func_604(uParam0, 1125306326, 0f, 0f, 0f, 2005001311, iParam1, 0, 0, 0, 0);
}

Vector3 func_788(var uParam0, int iParam1)
{
	return func_604(uParam0, 1798497919, 0f, 0f, 0f, 2005001311, iParam1, 0, 0, 0, 0);
}

bool func_789(var uParam0, int iParam1)
{
	return func_218(uParam0, 912817889, 1, 2005001311, iParam1, 0, 0, 0, 0);
}

bool func_790(int iParam0)
{
	return (Local_4089.f_2190[iParam0]->f_13 != 0 || Local_4089.f_2190[iParam0]->f_14 != 0);
}

bool func_791(var uParam0, int iParam1)
{
	iVar0 = func_956(0, 1);
	iVar1 = func_886(uParam0, -163729336, 0, 637011744, Local_4089.f_2190[iParam1]->f_13, 0, 0, 0, 0);
	iVar2 = func_886(uParam0, 1905522923, 0, 637011744, Local_4089.f_2190[iParam1]->f_13, 0, 0, 0, 0);
	iVar3 = func_591(&(Local_4089.f_3355), -646164348, 0, 637011744, Local_4089.f_2190[iParam1]->f_13, 0, 0, 0, 0, 0);
	if (iVar2 < iVar1 && iVar2 != 0)
	{
		return true;
	}
	if (iVar1 != 0 && iVar0 < iVar1)
	{
		return false;
	}
	if (iVar2 != 0 && iVar0 > iVar2)
	{
		return false;
	}
	if (iVar3 != 0 && iVar3 != Local_4089.f_3393)
	{
		return false;
	}
	return true;
}

Vector3 func_792(int iParam0)
{
	return (*Global_1248240)[iParam0]->f_600;
}

void func_793(int iParam0, vector3 vParam1, int iParam4)
{
	Local_13.f_289[iParam0] = func_1511(iParam0, vParam1, iParam4, &(Local_13.f_289[iParam0]));
}

bool func_794(int iParam0, var uParam1)
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

void func_795(int iParam0, int iParam1)
{
	if (func_796(iParam0, iParam1))
	{
		func_511(&(Local_409.f_1[iParam1]->f_10), iParam0);
	}
}

bool func_796(int iParam0, int iParam1)
{
	return func_80(Local_409.f_1[iParam1]->f_10, iParam0);
}

int func_797(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 > 32)
	{
	}
	iVar1 = func_1512(iParam3);
	if (iParam2 == 0)
	{
		iVar0 = get_random_int_in_range(iVar1, iParam1);
		return iVar0;
	}
	iVar2 = iVar1;
	while (iVar2 <= ((iVar1 + iParam1) - 1))
	{
		if ((iParam2 == 1 && is_bit_set(iParam0, iVar2)) || (iParam2 == 2 && !is_bit_set(iParam0, iVar2)))
		{
			iVar4[iVar3] = iVar2;
			iVar3++;
		}
		iVar2++;
	}
	if (iVar3 == 0)
	{
		return -1;
	}
	iVar0 = get_random_int_in_range(0, iVar3);
	return &(iVar4[iVar0]);
}

bool func_798(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 5)
	{
		return false;
	}
	if (&(*Global_1248240)[Local_4089.f_3391]->f_19[iParam0] == -1)
	{
		return false;
	}
	return true;
}

void func_799(int iParam0, int iParam1)
{
	if (&Local_13.f_226[iParam1] != iParam0)
	{
		Local_13.f_226[iParam1] = iParam0;
	}
}

bool func_800(int iParam0)
{
	return func_80(Local_13.f_349, iParam0);
}

int func_801(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && func_104(iParam0, iVar0))
		{
			if (iParam1 == -1 || iParam1 == func_182(iVar0))
			{
				return func_829(iVar0);
			}
		}
		iVar0++;
	}
	return 255;
}

void func_802(int iParam0, int iParam1, int iParam2)
{
	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	Var0.f_4 = 5;
	Var0.f_5 = iParam0;
	Var0.f_13 = iParam1;
	Var0.f_12 = iParam2;
	func_734(&Var0);
}

int func_803()
{
	iVar0 = func_1513(&(Local_4089.f_3355));
	if (iVar0 > 0)
	{
		iVar3 = 0;
		while (iVar3 <= (iVar0 - 1))
		{
			iVar10 = func_1514(&(Local_4089.f_3355), iVar3);
			if (func_733(1373849220, iVar3, 1, -1))
			{
				iVar4 = func_1515(&(Local_4089.f_3355), iVar3);
				iVar6 = func_767(Local_4089.f_3355, 1373849220, iVar3, &vVar7, &fVar2, iVar3, -1);
				if (iVar10 == 886638433)
				{
					fVar2 = func_1516(&(Local_4089.f_3355), iVar3);
					bVar1 = !func_768(iVar4, &uVar5, vVar7, fVar2, 1373849220, iVar3, -1, -1, 0);
				}
				else if (iVar10 == -1918493640)
				{
					bVar1 = !func_769(iVar4, &uVar5, iVar6, 1373849220, iVar3);
				}
				else if (iVar10 == -584819812)
				{
					fVar2 = func_1516(&(Local_4089.f_3355), iVar3);
					bVar1 = !func_770(iVar4, &uVar5, vVar7, fVar2, 1373849220, iVar3, -1);
				}
				else if (iVar10 == 1015970717)
				{
					bVar1 = !func_771(1373849220, iVar3);
				}
				else
				{
					return 0;
				}
				if (bVar1)
				{
					return 0;
				}
			}
			iVar3++;
		}
	}
	return 1;
}

void func_804(int iParam0)
{
	if (Local_13.f_1 != 6)
	{
		if (Local_4089.f_3393 == 1717788883)
		{
			switch (iParam0)
			{
				case 2:
					func_1517();
					break;
				case 1:
					func_1518();
					break;
			}
		}
		func_1383(0);
		Local_13.f_2 = iParam0;
		func_864(6);
	}
}

bool func_805()
{
	return &Local_4089.f_3008[1] == 622225714;
}

bool func_806()
{
	if (Local_4089.f_3008[1]->f_1 < 0)
	{
		return false;
	}
	if (!func_331(Local_4089.f_3391, 16))
	{
		return false;
	}
	if (func_28(100))
	{
		return true;
	}
	if (&Local_4089.f_3008[0] == 404851220 && Local_13.f_1 < 2)
	{
		return false;
	}
	if (Local_4089.f_3008[0]->f_6 < Local_4089.f_3008[1]->f_5)
	{
		return false;
	}
	return true;
}

void func_807(var uParam0)
{
	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	Var0.f_4 = 7;
	Var0.f_5 = uParam0;
	func_734(&Var0);
}

void func_808()
{
	Var0.f_10 = 255;
	Var0.f_4 = 14;
	Var0.f_5 = Local_4089.f_3391;
	func_1519(&Var0, func_880(0, 8));
}

void func_809(int iParam0)
{
	func_1520(iParam0, &iVar0, &iVar1);
	if (iVar1 != 255)
	{
		func_1521(iParam0, iVar1);
	}
	switch (Local_4089.f_3027[iParam0]->f_10)
	{
		case 1642086148:
			if (!func_1377(2, iParam0) && !func_1377(8, iParam0))
			{
				if (iVar0 != 255)
				{
					func_1522(iParam0, iVar0);
				}
			}
			break;
		case -703699781:
			if (iVar0 != 255)
			{
				if (!func_1377(2, iParam0))
				{
					func_1522(iParam0, iVar0);
				}
			}
			else
			{
				func_1523(iParam0, iVar0);
			}
			break;
	}
	func_1524(iParam0);
}

void func_810()
{
	if (Local_409.f_460 == 0)
	{
		return;
	}
	if ((Local_4089.f_1500 < 5 && Local_4089.f_1500 < Local_409.f_460) && Local_409.f_460 != 10)
	{
		return;
	}
	switch (Local_409.f_460)
	{
		case 1:
			func_1525();
			break;
		case 3:
			func_1526();
			break;
		case 4:
			func_1527();
			break;
		case 5:
			func_1528();
			break;
		case 6:
			func_1528();
			break;
		case 7:
			func_1528();
			break;
		case 8:
			func_1528();
			break;
		case 9:
			func_1529();
			break;
		case 10:
			func_1530();
			break;
	}
	if ((Local_13.f_1 == 6 && Local_409.f_460 != 9) && func_1502(1))
	{
		func_1503(9);
	}
}

void func_811(int iParam0)
{
	func_1531(iParam0);
	func_1532(iParam0);
}

bool func_812(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam1 > 1 && iParam1 < 5)
	{
		return true;
	}
	else if (bParam5)
	{
		if (func_58(10, iParam0))
		{
			func_1533(10, iParam0);
			return true;
		}
		else if (func_58(11, iParam0))
		{
			return true;
		}
	}
	return func_820(iParam0, iParam2, iParam3, bParam4);
}

void func_813(int iParam0)
{
	if (&Local_409.f_1[iParam0] == 0)
	{
		return;
	}
	if ((&Local_4089.f_6[iParam0] < 5 && &Local_4089.f_6[iParam0] < &Local_409.f_1[iParam0]) && &Local_409.f_1[iParam0] != 34)
	{
		return;
	}
	switch (&Local_409.f_1[iParam0])
	{
		case 1:
			func_1534(iParam0);
			break;
		case 2:
			func_1535(iParam0);
			break;
		case 3:
			func_1536(iParam0);
			break;
		case 4:
			func_1537(iParam0);
			break;
		case 5:
			func_1538(iParam0);
			break;
		case 6:
			func_1538(iParam0);
			break;
		case 7:
			func_1538(iParam0);
			break;
		case 8:
			func_1538(iParam0);
			break;
		case 9:
			func_1538(iParam0);
			break;
		case 10:
			func_1538(iParam0);
			break;
		case 11:
			func_1538(iParam0);
			break;
		case 12:
			func_1538(iParam0);
			break;
		case 13:
			func_1538(iParam0);
			break;
		case 14:
			func_1538(iParam0);
			break;
		case 15:
			func_1538(iParam0);
			break;
		case 16:
			func_1539(iParam0);
			break;
		case 22:
			func_1538(iParam0);
			break;
		case 23:
			func_1538(iParam0);
			break;
		case 26:
			func_1538(iParam0);
			break;
		case 25:
			func_1538(iParam0);
			break;
		case 24:
			func_1538(iParam0);
			break;
		case 27:
			func_1538(iParam0);
			break;
		case 28:
			func_1538(iParam0);
			break;
		case 17:
			func_1538(iParam0);
			break;
		case 18:
			func_1538(iParam0);
			break;
		case 19:
			func_1538(iParam0);
			break;
		case 30:
			func_1538(iParam0);
			break;
		case 31:
			func_1538(iParam0);
			break;
		case 32:
			func_1538(iParam0);
			break;
		case 29:
			func_1540(iParam0);
			break;
		case 33:
			func_1541(iParam0);
			break;
		case 34:
			func_1542(iParam0);
			break;
	}
	if ((Local_13.f_1 == 6 && &Local_409.f_1[iParam0] != 33) && func_1097(iParam0, 1))
	{
		func_1414(34, iParam0);
	}
}

void func_814(int iParam0)
{
	switch (Local_4089.f_1087[iParam0]->f_1)
	{
		case 1328791445:
			func_1543(iParam0);
			break;
	}
}

bool func_815(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam1 > 1 && iParam1 < 5)
	{
		return true;
	}
	return func_820(iParam0, iParam2, iParam3, bParam4);
}

void func_816(int iParam0)
{
	if (&Local_409.f_317[iParam0] == 0)
	{
		return;
	}
	if ((&Local_4089.f_1087[iParam0] < 5 && &Local_4089.f_1087[iParam0] < &Local_409.f_317[iParam0]) && &Local_409.f_317[iParam0] != 12)
	{
		return;
	}
	if (func_652(4096, iParam0))
	{
		if (func_61(1024, iParam0))
		{
			if (func_1544(8192, iParam0))
			{
				func_1492(8192, iParam0);
			}
		}
		else if (func_1545(8192, iParam0, -1))
		{
			func_1492(8192, iParam0);
		}
	}
	switch (&Local_409.f_317[iParam0])
	{
		case 1:
			func_1546(iParam0);
			break;
		case 2:
			func_1547(iParam0);
			break;
		case 4:
			func_1548(iParam0);
			break;
		case 5:
			func_1549(iParam0);
			break;
		case 6:
			func_1549(iParam0);
			break;
		case 7:
			func_1549(iParam0);
			break;
		case 8:
			func_1550(iParam0);
			break;
		case 11:
			func_1551(iParam0);
			break;
		case 12:
			func_1552(iParam0);
			break;
	}
	if ((Local_13.f_1 == 6 && &Local_409.f_317[iParam0] != 11) && func_309(iParam0, 1))
	{
		if (func_652(262144, iParam0))
		{
			func_1426(12, iParam0);
		}
		else
		{
			func_1426(11, iParam0);
		}
	}
}

void func_817(int iParam0)
{
	if (!network_does_network_id_exist(Local_409.f_381[iParam0]->f_10))
	{
		return;
	}
	iVar0 = Local_4089.f_1367[iParam0]->f_14;
	if (func_645(Local_4089.f_1367[iParam0]->f_1) && func_1553(iParam0))
	{
		if (is_entity_on_fire(iVar0))
		{
			iVar1 = func_1554();
			if (iVar1 > 0)
			{
				Local_4089.f_2173.f_15 = func_725(Local_4089.f_2173.f_16);
				Local_13.f_224 = (Local_13.f_224 - (1E-06f * to_float(iVar1)));
			}
		}
		else
		{
			Local_4089.f_2173.f_15 = -1;
			func_163(&(Local_4089.f_2173.f_16));
		}
		iVar2 = _0x2963b5c1637e8a27(iVar0);
		iVar7 = 0;
		while (iVar7 <= 13)
		{
			if (!network_does_network_id_exist(&(Local_13.f_60[iVar7])))
			{
			}
			else
			{
				iVar6 = net_to_ent(&(Local_13.f_60[iVar7]));
				if (_0x7a76104cc2cc69e8(iVar6, 0, 1))
				{
					bVar5 = false;
					iVar3 = _0xaf72ec7e1b54539b(iVar6);
					if (is_entity_a_ped(iVar3))
					{
						iVar4 = get_ped_index_from_entity_index(iVar3);
						if (!_0xd97bc27ac039f681(iVar4, iVar2, 1, 1))
						{
							bVar5 = true;
						}
					}
					else
					{
						bVar5 = true;
					}
					if (bVar5)
					{
						Local_13.f_224 = (Local_13.f_224 - 0.02f);
					}
					else
					{
						iVar7++;
					}
				}
			}
		}
	}
}

bool func_818(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam1 > 1 && iParam1 < 5)
	{
		return true;
	}
	return func_820(iParam0, iParam2, iParam3, bParam4);
}

void func_819(int iParam0)
{
	if (&Local_409.f_381[iParam0] == 0)
	{
		return;
	}
	if ((&Local_4089.f_1367[iParam0] < 5 && &Local_4089.f_1367[iParam0] < &Local_409.f_381[iParam0]) && &Local_409.f_381[iParam0] != 8)
	{
		return;
	}
	switch (&Local_409.f_381[iParam0])
	{
		case 1:
			func_1555(iParam0);
			break;
		case 2:
			func_1556(iParam0);
			break;
		case 3:
			func_1557(iParam0);
			break;
		case 4:
			func_1558(iParam0);
			break;
		case 5:
			func_1559(iParam0);
			break;
		case 6:
			func_1559(iParam0);
			break;
		case 7:
			func_1560(iParam0);
			break;
		case 8:
			func_1561(iParam0);
			break;
	}
	if ((Local_13.f_1 == 6 && &Local_409.f_381[iParam0] != 7) && func_1562(iParam0, 1))
	{
		func_1428(7, iParam0);
	}
}

bool func_820(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		return (iParam0 >= iParam1 || iParam0 < iParam2);
	}
	return (iParam0 >= iParam1 && iParam0 < iParam2);
}

void func_821(int iParam0)
{
	if (&Local_13.f_82[iParam0] == 0)
	{
		return;
	}
	switch (&Local_13.f_82[iParam0])
	{
		case 1:
			func_1563(iParam0);
			break;
		case 2:
			func_1564(iParam0);
			break;
		case 3:
			func_1565(iParam0);
			break;
		case 4:
			func_1566(iParam0);
			break;
		case 5:
			func_1567(iParam0);
			break;
	}
}

bool func_822(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam5 && iParam1 == 5)
	{
		return true;
	}
	return func_820(iParam0, iParam2, iParam3, bParam4);
}

void func_823(int iParam0)
{
	if (&Local_409.f_467[iParam0] == 0)
	{
		return;
	}
	switch (&Local_409.f_467[iParam0])
	{
		case 1:
			func_1568(iParam0);
			break;
		case 2:
			func_1569(iParam0);
			break;
		case 3:
			func_1570(iParam0);
			break;
		case 5:
			func_1571(iParam0);
			break;
		case 4:
			func_1572(iParam0);
			break;
		case 7:
			func_1573(iParam0);
			break;
	}
	if ((Local_13.f_1 == 6 && &Local_409.f_467[iParam0] != 7) && func_1574(iParam0, 1))
	{
		func_1429(7, iParam0);
	}
}

void func_824(int iParam0)
{
	if (&Local_409.f_478[iParam0] == 0)
	{
		return;
	}
	if ((&Local_4089.f_1983[iParam0] < 5 && &Local_4089.f_1983[iParam0] < &Local_409.f_478[iParam0]) && &Local_409.f_478[iParam0] != 9)
	{
		return;
	}
	switch (&Local_409.f_478[iParam0])
	{
		case 1:
			func_1575(iParam0);
			break;
		case 2:
			func_1576(iParam0);
			break;
		case 4:
			func_1577(iParam0);
			break;
		case 5:
			func_1578(iParam0);
			break;
		case 6:
			func_1578(iParam0);
			break;
		case 7:
			func_1578(iParam0);
			break;
		case 8:
			func_1579(iParam0);
			break;
		case 9:
			func_1580(iParam0);
			break;
	}
	if ((Local_13.f_1 == 6 && &Local_409.f_478[iParam0] != 8) && func_1372(iParam0, 1))
	{
		func_1427(9, iParam0);
	}
}

void func_825(int iParam0)
{
	if (!network_does_network_id_exist(&(Local_13.f_3[iParam0])))
	{
		return;
	}
	if (func_1463(iParam0))
	{
		return;
	}
	if (!func_1581(net_to_ent(&(Local_13.f_3[iParam0])), 4))
	{
		return;
	}
	func_754(iParam0);
}

bool func_826(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam1 > 0)
	{
		return true;
	}
	return func_820(iParam0, iParam2, iParam3, bParam4);
}

void func_827(int iParam0)
{
	if (func_157(iParam0) && &Local_13.f_226[iParam0] != 4)
	{
		return;
	}
	if (&Local_13.f_226[iParam0] == -1)
	{
		return;
	}
	if (Local_13.f_1 <= 0)
	{
		return;
	}
	if (func_1582(iParam0))
	{
		func_874(iParam0);
	}
	if ((func_178(256, iParam0) && !func_159(64, iParam0)) && func_1583(iParam0))
	{
		func_1584(64, iParam0, 1);
	}
	switch (&Local_13.f_226[iParam0])
	{
		case 0:
			func_1585(iParam0);
			return;
		case 1:
			func_1586(iParam0);
			return;
		case 2:
			func_1587(iParam0);
			return;
		case 3:
			func_1588(iParam0);
			return;
		case 4:
			func_1589(iParam0);
			return;
		default:
			break;
	}
}

void func_828(int iParam0)
{
	if (&Local_409.f_494[iParam0] == 0)
	{
		return;
	}
	if ((Local_4089.f_2156[iParam0]->f_1 < 6 && Local_4089.f_2156[iParam0]->f_1 < &Local_409.f_494[iParam0]) && &Local_409.f_494[iParam0] != 9)
	{
		return;
	}
	switch (&Local_409.f_494[iParam0])
	{
		case 1:
			func_1590(iParam0);
			break;
		case 2:
			func_1591(iParam0);
			break;
		case 3:
			func_1592(iParam0);
			break;
		case 4:
			func_1593(iParam0);
			break;
		case 5:
			func_1594(iParam0);
			break;
		case 6:
			func_1595(iParam0);
			break;
		case 7:
			func_1596(iParam0);
			break;
		case 8:
			func_1597(iParam0);
			break;
		case 9:
			func_1598(iParam0);
			break;
	}
	if ((Local_13.f_1 == 6 && &Local_409.f_494[iParam0] != 9) && func_1599(iParam0, 1))
	{
		func_1510(9, iParam0);
	}
}

int func_829(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = participant_id_to_int();
	}
	iVar0 = int_to_participantindex(iParam0);
	if (network_is_participant_active(iVar0))
	{
		return network_get_player_index(iVar0);
	}
	return 255;
}

void func_830(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_13.f_82[iParam0]->f_11 != iParam1 || Local_13.f_82[iParam0]->f_3 != iParam2)
	{
		if (func_1392(iParam0))
		{
			return;
		}
		Local_13.f_82[iParam0]->f_11 = iParam1;
		Local_13.f_82[iParam0]->f_12 = iParam1;
		Local_13.f_82[iParam0]->f_3 = iParam2;
		if (Local_4089.f_3393 == 1427578635 && iParam2 == 1)
		{
			Local_13.f_391 = _0x901e0dc25080c8b9(iParam1);
		}
		func_839(iParam0, 0);
		func_833(4, iParam0);
		func_1600(iParam0, 0);
		func_1601(iParam0, iParam2, 0, Local_13.f_82[iParam0]->f_11, _0x901e0dc25080c8b9(iParam1));
	}
}

void func_831(int iParam0, int iParam1)
{
	if (func_120(iParam0))
	{
		func_511(&(Local_13.f_348), iParam0);
	}
}

bool func_832(int iParam0, int iParam1)
{
	return func_80(&(Local_4089.f_4015[iParam1]), iParam0);
}

void func_833(int iParam0, int iParam1)
{
	if (!func_311(iParam1))
	{
		return;
	}
	if (!func_453(iParam0, iParam1))
	{
		func_105(&(Local_13.f_82[iParam1]->f_6), iParam0);
	}
}

void func_834(int iParam0, int iParam1)
{
	if (!func_311(iParam1))
	{
		return;
	}
	if (func_453(iParam0, iParam1))
	{
		func_511(&(Local_13.f_82[iParam1]->f_6), iParam0);
	}
}

bool func_835(int iParam0, int iParam1, int iParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			if (func_182(iVar1) == iParam2)
			{
				bVar0 = true;
			}
			if (!func_80(&(Local_920[iVar1]->f_55[iParam1]), iParam0))
			{
				if (iParam2 == -1 || func_182(iVar1) == iParam2)
				{
					return false;
				}
			}
		}
		iVar1++;
	}
	if (iParam2 != -1 && !bVar0)
	{
		return false;
	}
	return true;
}

bool func_836(int iParam0)
{
	switch (iParam0)
	{
		case -2097642849:
		case -2011805335:
		case -2003068922:
		case -887274986:
		case -207712283:
		case 291675087:
		case 836347960:
		case 1665936245:
		case 1958222724:
		case 2083566000:
			return true;
		default:
			break;
	}
	return false;
}

void func_837(int iParam0, int iParam1)
{
	if (!func_311(iParam1))
	{
		return;
	}
	if (!func_773(iParam0, iParam1))
	{
		func_105(&(Local_4089.f_1622[iParam1]->f_41), iParam0);
	}
}

void func_838(int iParam0, int iParam1)
{
	if (!func_311(iParam1))
	{
		return;
	}
	if (func_773(iParam0, iParam1))
	{
		func_511(&(Local_4089.f_1622[iParam1]->f_41), iParam0);
	}
}

void func_839(int iParam0, bool bParam1)
{
	if (!func_991(&(Local_4089.f_3355), iParam0))
	{
		return;
	}
	if (func_28(169))
	{
		return;
	}
	if (func_28(157))
	{
		func_833(2097152, iParam0);
		return;
	}
	if (bParam1 && Local_13.f_82[iParam0]->f_7 == -1)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if ((iVar0 != iParam0 && &Local_13.f_82[iVar0] > 0) && func_991(&(Local_4089.f_3355), iVar0))
			{
				iVar1++;
			}
			iVar0++;
		}
		Local_13.f_82[iParam0]->f_7 = iVar1;
	}
	else if (!func_453(2097152, iParam0))
	{
		uVar2 = Local_13.f_82[iParam0]->f_7;
		iVar3 = Local_13.f_361;
		Local_13.f_82[iParam0]->f_7 = iVar3;
		Local_13.f_361++;
		func_833(2097152, iParam0);
		iVar4 = 0;
		while (iVar4 <= 5)
		{
			if (iVar4 != iParam0 && Local_13.f_82[iVar4]->f_7 == iVar3)
			{
				Local_13.f_82[iVar4]->f_7 = uVar2;
			}
			else
			{
				iVar4++;
			}
		}
	}
}

bool func_840(int iParam0)
{
	if (!func_28(24))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_a_ped(iParam0) && is_ped_a_player(get_ped_index_from_entity_index(iParam0)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (Local_4089.f_2190[iVar0]->f_7 == 2029887164)
		{
			if ((_does_volume_exist(&(Local_4089.f_2190[iVar0])) && !is_entity_dead(iParam0)) && is_entity_in_volume(iParam0, &(Local_4089.f_2190[iVar0]), true, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_841(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (func_773(512, iParam1))
	{
		func_834(2, iParam1);
		func_834(268435456, iParam1);
		return;
	}
	if (!func_453(2, iParam1) && !func_453(268435456, iParam1))
	{
		Local_4089.f_1622[iParam1]->f_52 = func_1602(0, 32, Local_4089.f_1622[iParam1]->f_52);
		Local_4089.f_1622[iParam1]->f_50 = func_1602(0, 8, Local_4089.f_1622[iParam1]->f_50);
	}
	iVar0 = Local_4089.f_1622[iParam1]->f_52;
	if (func_535(16384, iVar0) && func_535(8388608, iVar0))
	{
		if ((Local_4089.f_2190[iVar0]->f_7 == -1141244111 && _does_volume_exist(Local_4089.f_2190[iVar0]->f_2)) && is_entity_in_volume(iParam0, Local_4089.f_2190[iVar0]->f_2, true, 0))
		{
			if (func_1603(iParam0, Local_4089.f_2190[iVar0]->f_2))
			{
				func_833(2, iParam1);
			}
			else
			{
				func_833(268435456, iParam1);
			}
			return;
		}
	}
	if (_does_volume_exist(&(Local_4089.f_4134[Local_4089.f_1622[iParam1]->f_50])) && is_entity_in_volume(iParam0, &(Local_4089.f_4134[Local_4089.f_1622[iParam1]->f_50]), true, 0))
	{
		if (func_1603(iParam0, &(Local_4089.f_4134[Local_4089.f_1622[iParam1]->f_50])))
		{
			func_833(2, iParam1);
		}
		else
		{
			func_833(268435456, iParam1);
		}
		return;
	}
	func_834(2, iParam1);
	func_834(268435456, iParam1);
}

void func_842(int iParam0)
{
	if (func_453(8192, iParam0))
	{
		return;
	}
	if (Local_13.f_82[iParam0]->f_11 != 255)
	{
		if (func_1392(iParam0))
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (Local_4089.f_1622[iParam0]->f_2[iVar0]->f_9 != -1 && Local_4089.f_1622[iParam0]->f_2[iVar0]->f_10 == 886638433)
			{
				clear_bit(&(Local_409.f_1[Local_4089.f_1622[iParam0]->f_2[iVar0]->f_9]->f_12), iParam0);
			}
			iVar0++;
		}
		if (func_995(iParam0, 0))
		{
			func_1604(iParam0);
		}
		func_1600(iParam0, 0);
		Local_13.f_82[iParam0]->f_11 = 255;
		func_834(4, iParam0);
	}
}

void func_843(var uParam0, vector3 vParam1, var uParam4)
{
	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	Var0.f_4 = 6;
	Var0.f_5 = uParam0;
	iVar40 = 0;
	while (iVar40 <= 5)
	{
		Var0.f_18 = { vParam1 };
		*Var0.f_21[iVar40] = { *(*uParam4)[iVar40] };
		iVar40++;
	}
	func_1605(&Var0, func_880(0, 8));
}

void func_844()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar0)))
		{
		}
		else
		{
			iVar4 = func_182(iVar0);
			if (iVar4 != -1)
			{
				uVar1[iVar4] = &uVar1[iVar4] + 1;
			}
		}
		iVar0++;
	}
	Local_4089.f_3008[0]->f_7 = &uVar1[0];
	Local_4089.f_3008[1]->f_7 = &uVar1[1];
}

bool func_845(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if ((!bParam1 && iParam2 != -1) && Local_409.f_1[iVar0]->f_14 == Local_409.f_1[iParam2]->f_14)
		{
		}
		else if (&Local_409.f_1[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_846(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		return true;
	}
	if (!func_650(*uParam0))
	{
		func_656(uParam0);
		if (bParam3)
		{
			return true;
		}
	}
	else if (func_725(*uParam0) >= iParam1)
	{
		if (bParam2)
		{
			func_656(uParam0);
		}
		return true;
	}
	return false;
}

void func_847()
{
	if (!func_120(4194304))
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 <= 14)
	{
		iVar3 = Local_4089.f_6[iVar2]->f_60;
		if (!does_entity_exist(iVar3))
		{
		}
		else if (!func_1481(iVar2, 886638433, 1216124350, 0, 0, 0, 0))
		{
		}
		else if (!is_ped_human(iVar3))
		{
		}
		else
		{
			fVar4 = to_float((get_entity_health(iVar3) / get_entity_max_health(iVar3, false)));
			if (fVar4 >= fVar1)
			{
				if (fVar4 > fVar1)
				{
					iVar0 = 0;
					fVar1 = fVar4;
				}
				set_bit(&iVar0, iVar2);
			}
		}
		iVar2++;
	}
	iVar5 = func_797(iVar0, 15, 1, 0);
	if (iVar5 == -1)
	{
		return;
	}
	func_1414(28, iVar5);
	func_831(4194304, 1);
}

void func_848()
{
	if (Local_4089.f_3395.f_279 == 0)
	{
		return;
	}
	if (Local_13.f_257.f_21 == -1 || (Local_4089.f_3395.f_279.f_1 != -1 && Local_13.f_257.f_21 >= Local_4089.f_3395.f_279.f_1))
	{
		return;
	}
	iVar0 = Local_4089.f_3395.f_279;
	if ((Local_13.f_257.f_21.f_6 == 0 && Local_13.f_257.f_21.f_1 == -1) && Local_13.f_257.f_21 == 0)
	{
		func_1606(iVar0);
	}
	if (func_1607(iVar0))
	{
		if (func_1608(iVar0))
		{
			if (func_1609())
			{
				func_1610(Local_4089.f_3395.f_279, Local_13.f_257.f_21.f_4, Local_13.f_257.f_21.f_1);
				func_1606(iVar0);
			}
			else
			{
				Local_13.f_257.f_21.f_5 += 10000;
			}
		}
		else
		{
			Local_13.f_257.f_21.f_5 += 10000;
		}
	}
}

int func_849(int iParam0)
{
	return Local_4089.f_3395[iParam0]->f_8;
}

bool func_850(int iParam0, int iParam1)
{
	return func_80(Local_13.f_257[iParam1]->f_1, iParam0);
}

void func_851(int iParam0, int iParam1)
{
	if (func_1612(iParam1, func_1611(iParam1), Local_13.f_257[iParam0]->f_2))
	{
		func_1613(4096, iParam0);
	}
	if (func_1614(iParam1, func_1611(iParam1), Local_13.f_257[iParam0]->f_2))
	{
		func_1613(32768, iParam0);
	}
	iVar0 = Local_4089.f_3395[iParam0]->f_3;
	while (iVar0 <= Local_4089.f_3395[iParam0]->f_4)
	{
		if (func_1615(512, iVar0))
		{
			func_1613(256, iParam0);
		}
		if (func_1615(16384, iVar0))
		{
			func_1613(1024, iParam0);
		}
		if (func_1615(32768, iVar0))
		{
			func_1613(2048, iParam0);
		}
		iVar0++;
	}
	func_1613(1, iParam0);
}

void func_852(int iParam0, int iParam1)
{
	if (!func_449(Local_4089.f_3393))
	{
		return;
	}
	if (func_120(8192))
	{
		return;
	}
	if (!func_1616(iParam0))
	{
		return;
	}
	iVar0 = &Local_4089.f_4031[36];
	if (func_1617(iVar0, iParam1, 1))
	{
		Local_4089.f_4031[36] = 0;
	}
	else
	{
		Local_4089.f_4031[36] = &Local_4089.f_4031[36] + 1;
		if (&Local_4089.f_4031[36] == 32)
		{
			func_1618(iParam0);
			func_1619(iParam0, iParam1);
			Local_4089.f_4031[36] = 0;
		}
	}
}

void func_853(int iParam0, int iParam1)
{
	if ((!func_1097(iParam1, 0) || !does_entity_exist(Local_4089.f_6[iParam1]->f_60)) || is_ped_injured(Local_4089.f_6[iParam1]->f_60))
	{
		return;
	}
	if (!func_850(32768, iParam0))
	{
		return;
	}
	if (func_1620(iParam0, iParam1))
	{
		func_1613(65536, iParam0);
	}
	else
	{
		func_1621(65536, iParam0);
	}
}

void func_854(int iParam0, int iParam1)
{
	iVar0 = Local_4089.f_6[iParam1]->f_60;
	if ((!network_does_network_id_exist(Local_409.f_1[iParam1]->f_14) || !does_entity_exist(iVar0)) || is_entity_dead(iVar0))
	{
		return;
	}
	iVar9 = &Local_4089.f_3395[iParam0];
	iVar10 = Local_4089.f_3395.f_46[iVar9]->f_1;
	func_1622(iParam0);
	if (func_1623(iVar9))
	{
		func_1624(iParam0, iVar9);
		return;
	}
	if (Local_4089.f_3395[iParam0]->f_1)
	{
		switch (&Local_4089.f_3395.f_46[iVar9])
		{
			case -1608511599:
				func_1625(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_4);
				break;
			case -1818237281:
				func_1626(iParam1, iParam0, iVar9);
				break;
			case 712634743:
				if (func_1627(8192, iParam1))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				else if (func_120(8192))
				{
					func_1628(iVar9);
				}
				break;
			case 1772675840:
				if (Local_13.f_2 == 2)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case 1206039257:
				if (Local_13.f_1 == 2)
				{
					if (is_ped_in_any_vehicle(iVar0, false) && !func_1629(iVar0))
					{
						func_1626(iParam1, iParam0, iVar9);
					}
				}
				break;
			case -3821058:
				if (vdist(get_entity_coords(iVar0, true, false), _0xf70f00013a62f866(&(Local_4089.f_2190[iVar10]))) <= IntToFloat(Local_4089.f_3395.f_46[iVar9]->f_4))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case -292037080:
				func_1630(iParam1, iParam0, iVar9, 1);
				break;
			case 191746790:
				func_1630(iParam1, iParam0, iVar9, 2);
				break;
			case 967278693:
				func_1630(iParam1, iParam0, iVar9, 3);
				break;
			case -30100924:
				if (!func_850(64, iParam0))
				{
					return;
				}
				func_1625(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_4);
				break;
			case 358014617:
				if (_0x5203038ff8bae577(iVar0, 26, 5000) || _0x5203038ff8bae577(iVar0, 50, 5000))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case -145935571:
			case 252632827:
			case 1493440267:
				if (&Local_4089.f_3395.f_46[iVar9] == 1493440267 && !func_850(16, iParam0))
				{
					return;
				}
				bVar11 = &Local_4089.f_3395.f_46[iVar9] == -145935571;
				if ((func_850(4, iParam0) && !bVar11) || (func_850(8, iParam0) && bVar11))
				{
					if (!func_850(64, iParam0) && !func_850(128, iParam0))
					{
						if (func_1626(iParam1, iParam0, iVar9))
						{
							func_1621(4, iParam0);
							func_1621(8, iParam0);
							func_1621(16, iParam0);
						}
					}
				}
				break;
			case -1543011357:
				if (func_1487(2, Local_4089.f_3395.f_46[iVar9]->f_4))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case 948816602:
				if (func_1487(4, Local_4089.f_3395.f_46[iVar9]->f_4) || ((func_1487(2, Local_4089.f_3395.f_46[iVar9]->f_4) && func_1487(32, Local_4089.f_3395.f_46[iVar9]->f_4)) && !func_850(64, iParam0)))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case -139145689:
				if (!func_120(16))
				{
					return;
				}
				iVar4 = 0;
				while (iVar4 <= 14)
				{
					if (!func_1097(iVar4, 1))
					{
					}
					else if (Local_409.f_1[iVar4]->f_1 == -1081499674)
					{
					}
					else if (!func_1341(Local_4089.f_6[iVar4]->f_2, 1))
					{
					}
					else if (!does_entity_exist(Local_4089.f_6[iVar4]->f_60))
					{
					}
					else if (vdist(get_entity_coords(Local_4089.f_6[iVar4]->f_60, true, false), get_entity_coords(Local_4089.f_6[iParam1]->f_60, true, false)) <= 20f)
					{
						func_1626(iParam1, iParam0, iVar9);
					}
					iVar4++;
				}
				break;
			case -1509206169:
				func_1626(iParam1, iParam0, iVar9);
				break;
			case -723499446:
			case 1620789208:
				if (vdist(get_entity_coords(iVar0, true, false), _0xf70f00013a62f866(&(Local_4089.f_2190[Local_4089.f_3395.f_46[iVar9]->f_1]))) < IntToFloat(Local_4089.f_3395.f_46[iVar9]->f_4))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case 1736338776:
				if (func_856() < Local_4089.f_3395.f_46[iVar9]->f_4)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case -950416207:
				if (Local_13.f_1 != 6)
				{
					return;
				}
				if ((Local_13.f_2 == 9 || Local_13.f_2 == 1) || func_1631(8192))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case -1392336236:
			case 1867945388:
			case 1978081652:
				if (Local_13.f_1 != 2)
				{
					return;
				}
				if (_0x54b187f111d9c6f8(iVar0, 1))
				{
					func_163(&(Local_4089.f_3395.f_46[iVar9]->f_6));
					return;
				}
				if (Local_409.f_1[iParam1]->f_15 == 255)
				{
					if (_is_ped_hogtied(iVar0) || get_ped_config_flag(iVar0, 11, false))
					{
						iVar2 = func_1390(get_entity_coords(iVar0, true, false), &fVar5, 20f, 2, iVar0, 404851220, 0, 0, 1, 1);
						if (!_network_is_player_index_valid(iVar2))
						{
							func_163(&(Local_4089.f_3395.f_46[iVar9]->f_6));
							return;
						}
					}
					else
					{
						func_163(&(Local_4089.f_3395.f_46[iVar9]->f_6));
						return;
					}
				}
				if ((get_entity_speed(iVar0) < 1f && (&Local_4089.f_3395.f_46[iVar9] != -1392336236 || is_ped_on_mount(iVar0))) && (&Local_4089.f_3395.f_46[iVar9] != 1978081652 || is_ped_in_any_vehicle(iVar0, false)))
				{
					func_1625(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_4);
				}
				else
				{
					func_163(&(Local_4089.f_3395.f_46[iVar9]->f_6));
				}
				break;
			case 398001725:
				if (Local_13.f_1 != 2)
				{
					return;
				}
				if (Local_409.f_1[iParam1]->f_15 == 255)
				{
					return;
				}
				vVar6 = { get_entity_coords(iVar0, true, false) };
				iVar12 = get_player_ped(Local_409.f_1[iParam1]->f_15);
				if (!does_entity_exist(iVar12) || is_entity_dead(iVar12))
				{
					return;
				}
				if (!does_entity_exist(func_1632(iVar12)))
				{
					return;
				}
				if (vdist(get_entity_coords(iVar12, true, false), vVar6) > 20f)
				{
					return;
				}
				func_1626(iParam1, iParam0, iVar9);
				break;
			case 796244138:
				if (Local_13.f_1 != 2)
				{
					return;
				}
				if (_0x54b187f111d9c6f8(iVar0, 1))
				{
					func_163(&(Local_4089.f_3395.f_46[iVar9]->f_6));
					return;
				}
				if (Local_409.f_1[iParam1]->f_15 == 255)
				{
					func_163(&(Local_4089.f_3395.f_46[iVar9]->f_6));
					return;
				}
				if (func_850(32, iParam0))
				{
					func_1625(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_4);
				}
				else
				{
					func_163(&(Local_4089.f_3395.f_46[iVar9]->f_6));
				}
				break;
			case 362052132:
				if (round((Local_13.f_224 * 100f)) < Local_4089.f_3395.f_46[iVar9]->f_4)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case -564832708:
				if (&Local_409.f_1[iParam1] == 22 && func_1411(67108864, iParam1))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case 953044885:
				if (Local_13.f_370 <= Local_4089.f_3395.f_46[iVar9]->f_4)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case -1703250887:
				if (&Local_409.f_1[iParam1] != 24)
				{
					return;
				}
				if (func_1633(iParam1, to_float(Local_4089.f_3395.f_46[iVar9]->f_4)) != 255)
				{
					func_1625(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_5);
				}
				else if (func_650(Local_4089.f_3395.f_46[iVar9]->f_6))
				{
					func_163(&(Local_4089.f_3395.f_46[iVar9]->f_6));
				}
				break;
			case 1159721472:
				if (&Local_409.f_1[iParam1] != 24)
				{
					return;
				}
				if (func_1634(Local_4089.f_6[iParam1]->f_60, to_float(Local_4089.f_3395.f_46[iVar9]->f_5)))
				{
					func_1625(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_4);
				}
				else if (func_650(Local_4089.f_3395.f_46[iVar9]->f_6))
				{
					func_163(&(Local_4089.f_3395.f_46[iVar9]->f_6));
				}
				break;
			case 664041482:
				if (&Local_409.f_1[iParam1] < 24)
				{
					return;
				}
				if (func_1411(8192, iParam1))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case -1156797251:
				if (Local_409.f_1[iParam1]->f_15 != 255)
				{
					iVar13 = _0x901e0dc25080c8b9(Local_409.f_1[iParam1]->f_15);
					vVar6 = { get_entity_coords(iVar0, true, false) };
					if (func_1635(iVar13, vVar6.x, vVar6.y, vVar6.z, 60f))
					{
						func_1626(iParam1, iParam0, iVar9);
					}
				}
				else if (Local_4089.f_3395.f_46[iVar9]->f_4 != 255)
				{
					iVar14 = int_to_playerindex(Local_4089.f_3395.f_46[iVar9]->f_4);
					if (is_player_dead(iVar14))
					{
						func_1626(iParam1, iParam0, iVar9);
					}
				}
				break;
			case -796786597:
				if (Local_409.f_1[iParam1]->f_15 != 255)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case 474746674:
				if (func_1636(Local_409.f_1[Local_13.f_257[iParam0]->f_3]->f_1) && Local_13.f_1 >= 2)
				{
					return;
				}
				if (Local_409.f_1[iParam1]->f_15 == 255 && Local_4089.f_3395.f_46[iVar9]->f_4 != 255)
				{
					iVar15 = int_to_playerindex(Local_4089.f_3395.f_46[iVar9]->f_4);
					if (!is_player_dead(iVar15))
					{
						func_1626(iParam1, iParam0, iVar9);
					}
				}
				break;
			case 489869217:
				if (func_1637(iVar9) == 3)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case 696123198:
				if (func_1637(iVar9) == 3)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				else if (((func_1637(iVar9) == 1 && Local_409.f_1[iParam1]->f_15 != 255) && Local_4089.f_3395.f_46[iVar9]->f_5 != 255) && Local_409.f_1[iParam1]->f_15 != Local_4089.f_3395.f_46[iVar9]->f_5)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case -704432739:
				func_1625(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_4);
				break;
			case -1921857660:
				func_1625(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_4);
				break;
			case -1309732256:
				if (Local_13.f_1 != 2)
				{
					return;
				}
				if (_0x1d46b417f926d34d(iVar0) && _0x4e76cb57222a00e5(iVar0) >= 0)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				break;
			case -531337577:
				if (Local_13.f_1 != 2)
				{
					return;
				}
				if (Local_409.f_1[iParam1]->f_15 != 255)
				{
					iVar1 = _0x849bd6c6314793d0(iVar0);
					if (does_entity_exist(iVar1))
					{
						return;
					}
					iVar1 = _0x849bd6c6314793d0(get_player_ped(Local_409.f_1[iParam1]->f_15));
					if (!does_entity_exist(iVar1))
					{
						return;
					}
					if (!func_1638(iVar1))
					{
						func_1626(iParam1, iParam0, iVar9);
					}
				}
				break;
			case 243206086:
				if (Local_13.f_1 != 2)
				{
					return;
				}
				if (Local_409.f_1[iParam1]->f_15 != 255)
				{
					iVar1 = _0x849bd6c6314793d0(get_player_ped(Local_409.f_1[iParam1]->f_15));
					if (!does_entity_exist(iVar1))
					{
						func_1626(iParam1, iParam0, iVar9);
					}
				}
				break;
			case -160110394:
				if (Local_13.f_1 != 2)
				{
					return;
				}
				if (does_entity_exist(_0x849bd6c6314793d0(iVar0)))
				{
					func_1628(iVar9);
					return;
				}
				func_1639(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_4);
				Jump @4649; //curOff = 3334
				if (Local_13.f_1 != 2)
				{
					return;
				}
				if (Local_409.f_1[iParam1]->f_15 != 255)
				{
					iVar0 = get_player_ped(Local_409.f_1[iParam1]->f_15);
					if (does_entity_exist(iVar0) && func_1640(iVar0))
					{
						func_1626(iParam1, iParam0, iVar9);
					}
				}
				Jump @4649; //curOff = 3412
				if (Local_409.f_1[iParam1]->f_15 != 255)
				{
					iVar1 = _0x849bd6c6314793d0(get_player_ped(Local_409.f_1[iParam1]->f_15));
					if (does_entity_exist(iVar1))
					{
						func_1626(iParam1, iParam0, iVar9);
					}
				}
				Jump @4649; //curOff = 3472
				func_1639(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_4);
				Jump @4649; //curOff = 3500
				func_1639(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_5);
				Jump @4649; //curOff = 3528
				if (func_1630(iParam1, iParam0, iVar9, 1))
				{
					return;
				}
				func_1639(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_4);
				Jump @4649; //curOff = 3573
				if (func_1641())
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				Jump @4649; //curOff = 3594
				if (Local_409.f_1[iParam1]->f_15 != 255)
				{
					if (vdist(get_entity_coords(iVar0, true, false), get_entity_coords(get_player_ped(Local_409.f_1[iParam1]->f_15), true, false)) > IntToFloat(Local_4089.f_3395.f_46[iVar9]->f_4))
					{
						func_1626(iParam1, iParam0, iVar9);
					}
				}
				Jump @4649; //curOff = 3676
				iVar3 = _0x61914209c36efddb(Local_4089.f_6[iParam1]->f_60);
				if ((iVar3 == 8 || iVar3 == 11) || iVar3 == 6)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				Jump @4649; //curOff = 3736
				iVar3 = _0x61914209c36efddb(Local_4089.f_6[iParam1]->f_60);
				if (iVar3 == 4 || iVar3 == 9)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				Jump @4649; //curOff = 3785
				iVar3 = _0x61914209c36efddb(Local_4089.f_6[iParam1]->f_60);
				if (iVar3 == 3)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				Jump @4649; //curOff = 3822
				if (((_0x5203038ff8bae577(Local_4089.f_6[iParam1]->f_60, 14, 1000) || _0x5203038ff8bae577(Local_4089.f_6[iParam1]->f_60, 25, 1000)) || _0x5203038ff8bae577(Local_4089.f_6[iParam1]->f_60, 26, 1000)) || _0x5203038ff8bae577(Local_4089.f_6[iParam1]->f_60, 38, 1000))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				Jump @4649; //curOff = 3937
				if (((((_0x5203038ff8bae577(Local_4089.f_6[iParam1]->f_60, 11, 1000) || _0x5203038ff8bae577(Local_4089.f_6[iParam1]->f_60, 15, 1000)) || _0x5203038ff8bae577(Local_4089.f_6[iParam1]->f_60, 27, 1000)) || _0x5203038ff8bae577(Local_4089.f_6[iParam1]->f_60, 28, 1000)) || _0x5203038ff8bae577(Local_4089.f_6[iParam1]->f_60, 32, 1000)) || _0x5203038ff8bae577(Local_4089.f_6[iParam1]->f_60, 35, 1000))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				Jump @4649; //curOff = 4104
				iVar4 = Local_4089.f_3395.f_46[iVar9]->f_4;
				if (Local_409.f_1[iVar4]->f_4 != -428150648)
				{
					return;
				}
				if (&Local_409.f_1[iVar4] == 24)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				Jump @4649; //curOff = 4170
				iVar4 = Local_4089.f_3395.f_46[iVar9]->f_4;
				if (!func_1097(iVar4, 1) || Local_409.f_1[iVar4]->f_4 != -428150648)
				{
					func_1626(iParam1, iParam0, iVar9);
					return;
				}
				if (func_1642(iVar4))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				Jump @4649; //curOff = 4257
				iVar4 = Local_4089.f_3395.f_46[iVar9]->f_4;
				if (!func_1097(iVar4, 1) || Local_409.f_1[iVar4]->f_4 != -428150648)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				Jump @4649; //curOff = 4321
				iVar4 = Local_4089.f_3395.f_46[iVar9]->f_4;
				if (&Local_13.f_82[iVar4] != 2 && &Local_13.f_82[iVar4] != 3)
				{
					return;
				}
				iVar1 = func_308(iVar4);
				if (!does_entity_exist(iVar1))
				{
					return;
				}
				if (!_does_volume_exist(&(Local_4089.f_2190[Local_4089.f_3395.f_46[iVar9]->f_1])))
				{
					return;
				}
				fVar5 = vdist(get_entity_coords(iVar1, true, false), _0xf70f00013a62f866(&(Local_4089.f_2190[Local_4089.f_3395.f_46[iVar9]->f_1])));
				if (fVar5 <= IntToFloat(Local_4089.f_3395.f_46[iVar9]->f_5))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				Jump @4649; //curOff = 4497
				if (func_1643(Local_4089.f_3395.f_46[iVar9]->f_1, 1, 1))
				{
					func_1625(iParam1, iParam0, iVar9, Local_4089.f_3395.f_46[iVar9]->f_4);
				}
				else
				{
					func_163(&(Local_4089.f_3395.f_46[iVar9]->f_6));
				}
				Jump @4649; //curOff = 4569
				if (Local_13.f_2 != 2)
				{
					return;
				}
				if (&Local_13.f_198[0] > 0)
				{
					func_1626(iParam1, iParam0, iVar9);
				}
				Jump @4649; //curOff = 4605
				if (func_1644(get_entity_coords(iVar0, true, false), 20f, 3f, 1, 0.5f))
				{
					func_1626(iParam1, iParam0, iVar9);
				}
			}
		}

bool func_855(bool bParam0, bool bParam1)
{
	if (!func_775())
	{
		return true;
	}
	if ((Local_13.f_357 > 0 && Local_13.f_359 <= 0) && !func_451(8, 0))
	{
		return true;
	}
	if (func_28(96) && !func_120(256))
	{
		return false;
	}
	if (func_28(98) && !func_1645())
	{
		return false;
	}
	if ((func_28(97) && !func_120(512)) && !bParam0)
	{
		return false;
	}
	if (!bParam1 && !func_1646())
	{
		return false;
	}
	return true;
}

int func_856()
{
	switch (Local_4089.f_3393)
	{
		case -1261475678:
		case 1539023636:
			if (!func_120(8192))
			{
				return 1;
			}
			break;
		case -669677371:
		case -468635158:
			if (!func_120(8192))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
	}
	return (Local_4089.f_4081 - func_725(Local_13.f_354));
}

bool func_857()
{
	if (Local_4089.f_3393 != 1427578635)
	{
		return false;
	}
	if (!_network_is_player_index_valid((*Global_1237665)[Local_4089.f_3391]->f_16))
	{
		if (func_1647(func_34(Local_4089.f_3392), (*Global_1248240)[Local_4089.f_3391]->f_589) != 948632731)
		{
			return true;
		}
	}
	else if (!network_is_player_active((*Global_1237665)[Local_4089.f_3391]->f_16))
	{
		if (func_1647(func_34(Local_4089.f_3392), (*Global_1248240)[Local_4089.f_3391]->f_589) != 948632731)
		{
			return true;
		}
	}
	else if (func_373(1, (*Global_1237665)[Local_4089.f_3391]->f_16))
	{
		return true;
	}
	return false;
}

int func_858(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!bParam0 || &Local_409.f_381[iVar0] >= 4)
		{
			uVar1 = (uVar1 || Local_409.f_381[iVar0]->f_4);
		}
		iVar0++;
	}
	return uVar1;
}

int func_859(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (!bParam0 || &Local_409.f_317[iVar0] >= 4)
		{
			uVar1 = (uVar1 || Local_409.f_317[iVar0]->f_4);
		}
		iVar0++;
	}
	return uVar1;
}

int func_860(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (!bParam0 || &Local_409.f_1[iVar0] >= 4)
		{
			uVar1 = (uVar1 || Local_409.f_1[iVar0]->f_9);
		}
		iVar0++;
	}
	return uVar1;
}

int func_861(bool bParam0)
{
	if (!bParam0 || Local_409.f_460 >= 4)
	{
		uVar0 = (uVar0 || Local_409.f_460.f_3);
	}
	return uVar0;
}

bool func_862()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (&Local_13.f_82[iVar0] != 0 && &Local_13.f_82[iVar0] < 2)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_863()
{
	if (func_1648(Local_4089.f_4129) == 0)
	{
		return 2;
	}
	iVar0 = get_random_int_in_range(0, 4);
	switch (iVar0)
	{
		case 0:
			return 2;
		case 1:
			return 7;
		case 2:
			return 4;
		default:
			break;
	}
	return 3;
}

void func_864(int iParam0)
{
	if (Local_13.f_1 != iParam0)
	{
		Local_13.f_1 = iParam0;
	}
}

void func_865()
{
	if (Local_4089.f_3355.f_8 <= 0)
	{
		return;
	}
	if (func_1649())
	{
		func_236(43, 1, 0);
	}
	else
	{
		func_79(43, 1, 0);
	}
	if (((func_28(43) || !func_331(Local_4089.f_3391, 16)) || Local_4089.f_4084 >= 1) || (Local_4089.f_3355.f_19 > 0 && Local_13.f_359 > Local_4089.f_3355.f_19))
	{
		return;
	}
	bVar5 = func_1650();
	if (!func_650(Local_13.f_387))
	{
		func_656(&(Local_13.f_387));
	}
	if (Local_13.f_367 != 15000 && func_120(128))
	{
		Local_13.f_367 = 15000;
	}
	else if (Local_13.f_367 == 0)
	{
		Local_13.f_367 = get_random_int_in_range(Local_4089.f_3355.f_17, Local_4089.f_3355.f_18);
	}
	if (!func_311(Local_4089.f_4087))
	{
		Local_4089.f_4087 = 0;
	}
	iVar0 = Local_4089.f_4087;
	iVar1 = func_308(iVar0);
	if (((does_entity_exist(iVar1) && (func_1651(iVar0, 0, 0, 0, 0) || func_28(88))) && !func_453(2, iVar0)) && !func_453(268435456, iVar0))
	{
		if ((Local_13.f_363 < 6 && !bVar5) && !func_1652(iVar1))
		{
			vVar2 = { get_entity_coords(iVar1, false, false) };
			fVar6 = vdist(vVar2, func_792(Local_4089.f_3391));
			fVar7 = 99999f;
			iVar8 = func_1041(Local_13.f_82[iVar0]->f_3, iVar0);
			if (iVar8 != -1)
			{
				fVar7 = vdist(vVar2, _0xf70f00013a62f866(&(Local_4089.f_2190[iVar8])));
			}
			if (func_846(&(Local_13.f_82[iVar0]->f_8), Local_13.f_367, 1, 0))
			{
				func_1653(vVar2, fVar6, fVar7, 0, -1, 0);
				Local_4089.f_4087++;
			}
		}
		else
		{
			Local_4089.f_4087++;
			if (func_650(Local_13.f_82[iVar0]->f_8))
			{
				func_163(&(Local_13.f_82[iVar0]->f_8));
			}
		}
	}
	else
	{
		Local_4089.f_4087++;
	}
}

void func_866()
{
	if (Local_4089.f_3355.f_10 <= 0)
	{
		func_329(256, 1);
		return;
	}
	if (&Local_4089.f_4031[19] >= Local_4089.f_3355.f_10)
	{
		Local_4089.f_4031[19] = 0;
	}
	func_1654(&(Local_4089.f_4031[19]));
	func_1655(&(Local_4089.f_4031[19]));
	Local_4089.f_4031[19] = &Local_4089.f_4031[19] + 1;
}

void func_867()
{
	if (Local_4089.f_3355.f_12 <= 0)
	{
		func_1656();
		return;
	}
	if (func_1645())
	{
		return;
	}
	if (!func_999(512) || Local_4089.f_2148.f_7 != Local_13.f_369)
	{
		func_392(Local_13.f_369);
	}
	if (func_1657(Local_13.f_369))
	{
		if (Local_13.f_369 == (Local_4089.f_3355.f_12 - 1))
		{
			if (func_1658())
			{
				func_1656();
				return;
			}
		}
		else
		{
			func_163(&(Local_13.f_385));
			Local_13.f_369++;
			func_392(Local_13.f_369);
		}
	}
	if (func_1659(Local_13.f_369))
	{
		iVar5 = -1;
		if (Local_4089.f_2148.f_6 > func_1475())
		{
			if (!func_999(256))
			{
				if (func_999(128))
				{
					func_1660(Local_4089.f_2148.f_6, 1);
					func_970(256);
				}
				else if (func_999(64))
				{
					func_1660(Local_4089.f_2148.f_6, 0);
					func_970(256);
				}
			}
			return;
		}
		iVar4 = func_955(&(Local_4089.f_3355), Local_13.f_369);
		iVar2 = 0;
		while (iVar2 <= (iVar4 - 1))
		{
			if (func_733(-2067454306, iVar2, 0, Local_13.f_369))
			{
				func_1661(Local_13.f_369);
				iVar5 = func_767(Local_4089.f_3355, -2067454306, Local_13.f_369, &vVar6, &fVar9, iVar2, iVar5);
				iVar0 = func_1662(&(Local_4089.f_3355), Local_13.f_369, iVar2);
				iVar10 = func_1663(&(Local_4089.f_3355), Local_13.f_369, iVar2);
				switch (iVar10)
				{
					case 886638433:
						func_768(iVar0, &uVar1, vVar6, fVar9, -2067454306, iVar2, -1, Local_13.f_369, 0);
						break;
					case -584819812:
						func_770(iVar0, &uVar1, vVar6, fVar9, -2067454306, iVar2, Local_13.f_369);
						break;
					default:
						break;
				}
			}
			else
			{
				iVar3++;
			}
			iVar2++;
		}
		if (iVar3 == iVar4)
		{
			func_1661(Local_13.f_369);
		}
	}
}

void func_868()
{
	if (!func_28(82) || Local_13.f_364 > 0)
	{
		return;
	}
	if (func_28(9) || func_28(8))
	{
		if (!func_650(Local_13.f_386))
		{
			func_656(&(Local_13.f_386));
		}
		iVar0 = func_1664();
		if (iVar0 > -1)
		{
			if (func_28(9))
			{
				iVar1 = func_1665(32);
			}
			else
			{
				bVar8 = false;
				iVar1 = 0;
				while (iVar1 <= 6)
				{
					if (func_311(iVar1) && &Local_13.f_82[iVar1] == 2)
					{
						bVar8 = true;
					}
					else
					{
						iVar1++;
					}
				}
				if (!bVar8)
				{
					return;
				}
			}
			iVar4 = func_308(iVar1);
			vVar5 = { get_entity_coords(iVar4, true, false) };
			iVar3 = func_1666(&(Local_4089.f_3355), iVar0);
			iVar9 = func_1667(&(Local_4089.f_3355), iVar0);
			if (iVar9 == 886638433)
			{
				func_768(iVar3, &uVar2, vVar5, 0f, -1426507703, iVar0, -1, -1, 0);
				func_656(&(Local_13.f_386));
			}
		}
	}
	else
	{
		func_656(&(Local_13.f_386));
	}
}

void func_869()
{
	if (!func_28(95))
	{
		return;
	}
	if (!func_120(4096))
	{
		return;
	}
	if (!func_1502(0) || !func_1668(1015970717, 0, 0))
	{
		return;
	}
	if (func_28(43))
	{
		return;
	}
	if (!func_650(Local_13.f_387))
	{
		func_656(&(Local_13.f_387));
	}
	if (Local_13.f_367 != 15000 && func_120(128))
	{
		Local_13.f_367 = 15000;
	}
	else if (Local_13.f_367 == 0)
	{
		Local_13.f_367 = get_random_int_in_range(Local_4089.f_3355.f_17, Local_4089.f_3355.f_18);
	}
	iVar0 = func_654(Local_4089.f_1500.f_3);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	vVar1 = { get_entity_coords(iVar0, false, false) };
	if (Local_13.f_363 < 6)
	{
		if (func_846(&(Local_4089.f_4101), Local_13.f_367, 1, 0))
		{
			func_1653(vVar1, 0, 0, 0, -1, 1);
		}
	}
	else if (func_650(Local_4089.f_4101))
	{
		func_163(&(Local_4089.f_4101));
	}
}

bool func_870()
{
	return ((func_121(64, -1, 0) || func_451(32, 1)) || func_451(64, 1));
}

bool func_871()
{
	if (Local_4089.f_3393 != 1427578635)
	{
		return false;
	}
	if (!func_855(1, 1))
	{
		return false;
	}
	if (func_1646())
	{
		return false;
	}
	if (func_121(262144, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_872()
{
	if (Local_4089.f_3393 != 195932838)
	{
		return false;
	}
	if (!func_451(4096, 1))
	{
		return false;
	}
	return true;
}

bool func_873()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (&Local_13.f_226[iVar0] > 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_874(int iParam0)
{
	if (&Local_13.f_226[iParam0] != 4)
	{
		func_799(4, iParam0);
	}
}

int func_875(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!bParam0 || &Local_409.f_467[iVar0] >= 3)
		{
			uVar1 = (uVar1 || Local_409.f_467[iVar0]->f_1);
		}
		iVar0++;
	}
	return uVar1;
}

void func_876()
{
	if (Local_13.f_2 != 2)
	{
		return;
	}
	if (!func_449(Local_4089.f_3393))
	{
		return;
	}
	func_1669(Local_4089.f_3391);
}

int func_877(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 300;
		case 1:
			return 30;
		case 2:
			return 11;
		case 3:
			return 17;
		case 4:
			return 17;
		case 18:
			return 23;
		case 22:
			return 50;
		case 34:
			return 10;
		case 35:
			return 20;
		default:
			break;
	}
	return 0;
}

int func_878(int iParam0, bool bParam1)
{
	if (iParam0 == 255)
	{
		if (bParam1)
		{
			return Local_4089.f_2890;
		}
		iParam0 = participant_id_to_int();
	}
	iVar0 = func_182(iParam0);
	if (iVar0 < 0 || iVar0 > 1)
	{
		return 0;
	}
	if (func_1001(Local_4089.f_3391, 255))
	{
		return 0;
	}
	switch ((*(*Global_1238240)[func_829(iParam0)])[Local_4089.f_3391]->f_20)
	{
		case 3:
			return 2;
		default:
			break;
	}
	return Local_4089.f_3008[iVar0]->f_1;
}

bool func_879(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	iVar0 = func_1002(iParam0, iParam1);
	if (bParam2 && iVar0 == 0)
	{
		return true;
	}
	if (bParam3 && iVar0 == 21)
	{
		return true;
	}
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
		case 21:
			return true;
		default:
			break;
	}
	return false;
}

var func_880(int iParam0, int iParam1)
{
	return func_1670(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

bool func_881()
{
	switch (Local_4089.f_3355)
	{
		case 0:
			if (!_0x7907969497ea92f5(Local_4089.f_3355.f_1))
			{
				Local_4089.f_3355.f_1 = _0xd97d8d905f1562f2(func_1671());
			}
			if (!_0x4f9e3ed7617123ac(func_1671()))
			{
				func_129(5);
				return false;
			}
			else if (!_0x603ac35fd4602c76(Local_4089.f_3355.f_1))
			{
				bVar1 = true;
			}
			if (!_0x7907969497ea92f5(Local_4089.f_3355.f_2))
			{
				Local_4089.f_3355.f_2 = _0xd97d8d905f1562f2(func_1672());
			}
			if (!_0x4f9e3ed7617123ac(func_1672()))
			{
				func_129(5);
				return false;
			}
			else if (!_0x603ac35fd4602c76(Local_4089.f_3355.f_2))
			{
				bVar1 = true;
			}
			if (!_0x7907969497ea92f5(Local_4089.f_3355.f_3))
			{
				Local_4089.f_3355.f_3 = _0xd97d8d905f1562f2(func_1673());
			}
			if (!_0x4f9e3ed7617123ac(func_1673()))
			{
				func_129(5);
				return false;
			}
			else if (!_0x603ac35fd4602c76(Local_4089.f_3355.f_3))
			{
				bVar1 = true;
			}
			iVar0 = func_1674(func_34(Local_4089.f_3392));
			if (!_0x7907969497ea92f5(Local_4089.f_3355.f_4))
			{
				Local_4089.f_3355.f_4 = _0xd97d8d905f1562f2(iVar0);
			}
			if (!_0x4f9e3ed7617123ac(iVar0))
			{
				func_129(5);
				return false;
			}
			else if (!_0x603ac35fd4602c76(Local_4089.f_3355.f_4))
			{
				bVar1 = true;
			}
			if (func_1675(&(Local_4089.f_3355)))
			{
				func_1676(&(Local_4089.f_3355), 2);
			}
			else if (!bVar1)
			{
				func_1676(&(Local_4089.f_3355), 1);
			}
			break;
		case 1:
			if (!func_1675(&(Local_4089.f_3355)))
			{
				return false;
			}
			func_1676(&(Local_4089.f_3355), 2);
			break;
		case 2:
			func_1677();
			func_1676(&(Local_4089.f_3355), 3);
			break;
		case 3:
			func_1678();
			func_1679();
			func_1680();
			func_1681();
			func_1682();
			func_1683();
			func_1684();
			func_1685();
			func_1686();
			func_1676(&(Local_4089.f_3355), 4);
			break;
		case 4:
			func_1687();
			func_1676(&(Local_4089.f_3355), 5);
			break;
		case 5:
			func_1688();
			func_1689();
			func_1690();
			func_1691();
			func_1692();
			func_1676(&(Local_4089.f_3355), 7);
			break;
		case 7:
			func_1693();
			func_1676(&(Local_4089.f_3355), 8);
			break;
		case 8:
			func_1694(Local_4089.f_3391);
			func_1676(&(Local_4089.f_3355), 9);
			break;
	}
	return Local_4089.f_3355 == 9;
}

bool func_882()
{
	if (Local_4089.f_3395.f_279 == 0)
	{
		return true;
	}
	Var0 = { func_39(&(Local_4089.f_3355), Local_4089.f_3395.f_279) };
	if (is_string_null_or_empty(&Var0))
	{
		return true;
	}
	if (_does_text_database_exist(&Var0))
	{
		_text_database_request(&Var0);
		if (!_text_database_has_loaded(&Var0))
		{
			return false;
		}
		return true;
	}
	return true;
}

bool func_883()
{
	iVar1 = func_730(&(Local_4089.f_3355));
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar0 >= 15)
		{
		}
		else
		{
			iVar2 = func_731(&(Local_4089.f_3355), iVar0);
			iVar3 = func_748(&(Local_4089.f_3355), iVar2);
			func_1695(iVar3);
			if (!has_model_loaded(iVar3))
			{
				bVar4 = true;
			}
			iVar0++;
		}
	}
	return !bVar4;
}

bool func_884()
{
	Local_4089.f_3355.f_16 = func_1696(&(Local_4089.f_3355));
	if (Local_4089.f_3355.f_16 == 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_16 - 1))
	{
		if (iVar0 >= 5)
		{
		}
		else
		{
			iVar10 = &Local_4089.f_3171[iVar0];
			if (iVar10 == 0)
			{
			}
			else if (iVar10 == 1974833915)
			{
				Var2 = { func_69(&(Local_4089.f_3355), iVar0) };
				if (is_string_null_or_empty(&Var2))
				{
				}
				else
				{
					request_waypoint_recording(&Var2);
					if (!get_is_waypoint_recording_loaded(&Var2))
					{
						bVar1 = true;
					}
					else
					{
						func_1088(2, iVar0);
					}
					Jump @165; //curOff = 155
					func_1088(2, iVar0);
					iVar0++;
				}
				return !bVar1;
			}
		}
	}
}

bool func_885()
{
	if (func_218(&(Local_4089.f_3355), 199667715, 0, -801742902, 0, 0, 0, 0, 0))
	{
		request_named_ptfx_asset(142977234);
		if (!has_named_ptfx_asset_loaded(142977234))
		{
			return false;
		}
	}
	return true;
}

int func_886(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	return func_1697(uParam0, uParam0->f_4, iParam1, iParam2, iParam3, bParam4, iParam5, iParam6, bParam7, iParam8);
}

void func_887(var uParam0, int iParam1)
{
	*uParam0 = (Global_1296859->f_21 + (iParam1 / 1000));
}

int func_888(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = -470772179;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

int func_889(var uParam0, int iParam1)
{
	return func_591(uParam0, -433267846, 0, 344756216, iParam1, 0, 0, 0, 0, 0);
}

int func_890(int iParam0)
{
	iVar0 = func_1698(&(Local_4089.f_3355), iParam0);
	return func_1699(iVar0);
}

int func_891(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 != 0)
	{
		return func_591(uParam0, -433267846, 0, -1373886950, iParam1, iParam2, 0, 0, 0, 0);
	}
	return func_591(uParam0, -433267846, 0, -1608503687, iParam1, 0, 0, 0, 0, 0);
}

int func_892(var uParam0, int iParam1)
{
	Var0 = uParam0->f_3;
	Var0.f_2 = -1032971034;
	Var0.f_1 = func_255(uParam0, Var0, Var0.f_2);
	Var0.f_3 = iParam1;
	if (_0x603ac35fd4602c76(uParam0->f_2) && _datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

int func_893(var uParam0, int iParam1)
{
	return func_591(uParam0, 1311454478, 0, 344756216, iParam1, 0, 0, 0, 0, 0);
}

void func_894(int iParam0, int iParam1)
{
	if (!func_535(iParam0, iParam1))
	{
		if (iParam1 < 0 || iParam1 > 32)
		{
			return;
		}
		func_105(&(Local_4089.f_2190[iParam1]->f_11), iParam0);
	}
}

int func_895(var uParam0)
{
	return func_591(uParam0, 1118246878, 0, -801742902, 0, 0, 0, 0, 0, 0);
}

int func_896(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (Local_4089.f_2190[iVar0]->f_13 == iParam0)
		{
			if (iParam1 == -1 || iParam1 == iVar1)
			{
				return iVar0;
			}
			if (iVar2 == -1)
			{
				iVar2 = iVar0;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 != -1)
	{
		return iVar2;
	}
	return -1;
}

int func_897(var uParam0)
{
	return func_591(uParam0, -503474496, 0, -801742902, 0, 0, 0, 0, 0, 0);
}

int func_898(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = 1468788518;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

int func_899(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = 1004704444;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

int func_900(var uParam0, int iParam1)
{
	return func_591(uParam0, -433267846, 0, -2021955256, iParam1, 0, 0, 0, 0, 0);
}

int func_901(var uParam0, int iParam1)
{
	return func_591(uParam0, 1203692200, 0, -2021955256, iParam1, 0, 0, 0, 0, 0);
}

int func_902(var uParam0, int iParam1)
{
	return func_591(uParam0, 4333720, 1642086148, -2021955256, iParam1, 0, 0, 0, 0, 0);
}

int func_903(var uParam0, int iParam1)
{
	return func_1386(func_591(uParam0, -158647914, func_1700(-1), -2021955256, iParam1, 0, 0, 0, 0, 0));
}

int func_904(var uParam0, int iParam1)
{
	if (func_1701(uParam0, uParam0->f_4, &Var0, -2021955256, iParam1, 0, 1))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

int func_905(var uParam0, int iParam1, int iParam2)
{
	return func_591(uParam0, -1866594077, 0, 1403632554, iParam1, iParam2, 0, 0, 0, 0);
}

int func_906(var uParam0, int iParam1, int iParam2)
{
	return func_591(uParam0, -1131741768, -1, 1403632554, iParam1, iParam2, 0, 0, 0, 0);
}

bool func_907(int iParam0, int iParam1)
{
	Var0 = { func_1702(&(Local_4089.f_3355), iParam0, iParam1) };
	if (!is_string_null_or_empty(&Var0))
	{
		func_909(262144, iParam0);
		return _0xd9130842d7226045(&Var0, 0);
	}
	return true;
}

bool func_908(var uParam0, int iParam1)
{
	return func_218(uParam0, -1528802462, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

void func_909(int iParam0, int iParam1)
{
	if (!func_937(iParam0, iParam1, 255))
	{
		func_105(Local_920[participant_id_to_int()]->f_80[iParam1], iParam0);
	}
}

bool func_910(var uParam0, int iParam1)
{
	return func_218(uParam0, -224969725, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

bool func_911(var uParam0, int iParam1)
{
	return func_218(uParam0, -870902297, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

bool func_912(var uParam0, int iParam1)
{
	return func_218(uParam0, 339173561, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

bool func_913(var uParam0, int iParam1)
{
	return func_218(uParam0, 306788730, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

bool func_914(var uParam0, int iParam1)
{
	return func_218(uParam0, -1474551538, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

bool func_915(var uParam0, int iParam1)
{
	return func_218(uParam0, -276378602, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

bool func_916(var uParam0, int iParam1)
{
	return func_218(uParam0, -1533149743, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

var func_917(var uParam0, int iParam1)
{
	return func_886(uParam0, -571977951, -1, -2021955256, iParam1, 0, 0, 0, 0);
}

int func_918(var uParam0, int iParam1)
{
	return func_591(uParam0, -415325782, 0, -2021955256, iParam1, 0, 0, 0, 0, 0);
}

int func_919(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_14 - 1))
	{
		if (Local_4089.f_3027[iVar0]->f_5 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_920(var uParam0)
{
	return func_218(uParam0, 1776359967, 0, -801742902, 0, 0, 0, 0, 0);
}

bool func_921(var uParam0, int iParam1)
{
	return func_218(uParam0, -1017327741, 1, -449359893, iParam1, 0, 0, 0, 0);
}

int func_922(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = 297335018;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

Vector3 func_923(var uParam0, int iParam1)
{
	return func_604(uParam0, 1125306326, 0f, 0f, 0f, -1063880151, iParam1, 0, 0, 0, 0);
}

var func_924(var uParam0, int iParam1)
{
	return func_605(uParam0, 1180424860, 0f, -1063880151, iParam1, 0, 0, 0, 0);
}

int func_925(var uParam0, int iParam1)
{
	return func_591(uParam0, 1587093128, 0, -1063880151, iParam1, 0, 0, 0, 0, 0);
}

var func_926(var uParam0, int iParam1)
{
	return func_886(uParam0, -1929030738, 0, -1063880151, iParam1, 0, 0, 0, 0);
}

int func_927(int iParam0)
{
	switch (iParam0)
	{
		case -907098195:
			return 1;
		case -1453140709:
			return 2;
		case 331632914:
			return 4;
		default:
			break;
	}
	return 2;
}

void func_928(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_254(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_254(uParam0))
		{
		}
	}
}

bool func_929(var uParam0)
{
	return func_218(uParam0, -1373557638, 0, -801742902, 0, 0, 0, 0, 0);
}

void func_930(int iParam0)
{
	sVar1 = func_1703(iParam0);
	switch (iParam0)
	{
		case 0:
			func_1704(&uVar0, -5493.364f, -2926.168f, -2.882f, 0f, 0f, 0f, Vector(20f, 90f, 90f) + Vector(80f, 80f, 80f), sVar1);
			break;
		case 1:
			func_1704(&uVar0, -2375.546f, -2403.018f, 60.828f, 0f, 0f, 0f, Vector(20f, 100f, 100f) + Vector(80f, 80f, 80f), sVar1);
			break;
		case 2:
			func_1704(&uVar0, -866.41f, -1312.526f, 41.915f, 0f, 0f, 0f, Vector(30f, 175f, 175f) + Vector(80f, 80f, 80f), sVar1);
			break;
		case 3:
			func_1704(&uVar0, -1785.989f, -377.123f, 169.109f, 0f, 0f, 0f, Vector(30f, 100f, 100f) + Vector(80f, 80f, 80f), sVar1);
			break;
		case 4:
			func_1704(&uVar0, -276.087f, 732.181f, 108.714f, 0f, 0f, 7.577f, Vector(40f, 170f, 170f) + Vector(80f, 80f, 80f), sVar1);
			break;
		case 5:
			func_1704(&uVar0, 1413.867f, 323.816f, 87.601f, 0f, 0f, 0f, Vector(30f, 125f, 125f) + Vector(80f, 80f, 80f), sVar1);
			break;
		case 6:
			func_1704(&uVar0, 1337.862f, -1317.991f, 76.183f, 0f, 0f, 0f, Vector(30f, 160f, 160f) + Vector(80f, 80f, 80f), sVar1);
			break;
		case 7:
			func_1704(&uVar0, 2655.426f, -1306.581f, 78.841f, 0f, 0f, 10.448f, Vector(40f, 400f, 400f) + Vector(80f, 80f, 80f), sVar1);
			break;
		case 8:
			func_1704(&uVar0, 2907.853f, 1353.699f, 75.434f, 0f, 0f, 0f, Vector(40f, 150f, 150f) + Vector(80f, 80f, 80f), sVar1);
			break;
	}
	Local_4089.f_4134[iParam0] = uVar0;
}

struct<16> func_931(var uParam0)
{
	return func_268(uParam0, -1402124671, "", -801742902, 0, 0, 0, 0, 0);
}

void func_932(int iParam0)
{
	if (!func_1705(iParam0))
	{
		return;
	}
	if (Local_4089.f_2190[iParam0]->f_15 != &Local_13.f_289[iParam0])
	{
		func_1706(iParam0);
		Local_4089.f_2190[iParam0]->f_15 = &Local_13.f_289[iParam0];
		iVar0 = func_890(iParam0);
		Local_4089.f_2190[iParam0]->f_16 = func_1707(&(Local_4089.f_3355), Local_4089.f_2190[iParam0]->f_13, Local_4089.f_2190[iParam0]->f_14, Local_4089.f_2190[iParam0]->f_15, iVar0);
	}
	switch (Local_4089.f_2190[iParam0]->f_7)
	{
		case -1735851763:
			func_1708(iParam0);
			break;
		case 640963317:
			func_1708(iParam0);
			break;
		case 156160941:
			func_1708(iParam0);
			break;
		case -1812123900:
			func_1708(iParam0);
			break;
		case -1267301591:
			func_1709(iParam0, 0, 0, 0);
			break;
		case 2124478841:
			func_1709(iParam0, 1, 0, 0);
			break;
		case -629714380:
			func_1709(iParam0, 1, 1, 0);
			break;
		case 1855808851:
			func_1709(iParam0, 1, 1, 1);
			break;
		case -1929366157:
			func_1710(iParam0);
			break;
		case -2141167981:
			func_1711(iParam0);
			break;
		case 1101711773:
			func_1712(iParam0);
			break;
		case 1527811344:
			func_1713(iParam0);
			break;
		case 754222312:
			func_1714(iParam0);
			break;
		case 1314846526:
			func_1715(iParam0, 0, 0);
			break;
		case -412649253:
			func_1715(iParam0, 1, 0);
			break;
		case 1400691872:
			func_1715(iParam0, 1, 0);
			break;
		case 1866218074:
			func_1715(iParam0, 0, 1);
			break;
		case 107906204:
			func_1716(iParam0);
			break;
		case -310274713:
			func_1717(iParam0);
			break;
		case 1735328737:
			func_1718(iParam0);
			break;
		case 2029887164:
			func_1719(iParam0);
			break;
		case -1452367284:
			func_1720(iParam0);
			break;
		case -263313453:
			func_1721(iParam0);
			break;
		case -344345634:
			func_1722(iParam0, 0);
			break;
		case -2128586587:
			func_1722(iParam0, 1);
			break;
		case -1056584934:
			func_1722(iParam0, 1);
			break;
		case -1850305231:
			func_1722(iParam0, 0);
			break;
		case -187918586:
			func_1723(iParam0);
			break;
		case -257413874:
			func_1724(iParam0);
			break;
		case -988672514:
			func_1724(iParam0);
			break;
		case -1432856592:
			func_1725(iParam0);
			break;
		case -128962623:
			func_1726(iParam0);
			break;
		case 357085972:
			func_1726(iParam0);
			break;
		case -1929190101:
			func_1726(iParam0);
			break;
		case 1667145759:
			func_1726(iParam0);
			break;
		case 133721279:
			func_1726(iParam0);
			break;
		case -617762131:
			func_1726(iParam0);
			break;
		case -1691081444:
			func_1726(iParam0);
			break;
		case 194047318:
			func_1726(iParam0);
			break;
		case -2084089361:
			func_1727(iParam0);
			break;
		case 1105460229:
			func_1727(iParam0);
			break;
		case -1911478165:
			func_1728(iParam0);
			break;
		case 1741188187:
			func_1729(iParam0);
			break;
		case -1310271043:
			func_1730(iParam0, 0);
			break;
		case 1461244692:
			func_1730(iParam0, 1);
			break;
		case 1729832790:
			func_1731(iParam0);
			break;
	}
	func_1732(iParam0);
	func_1733(iParam0, 0);
	func_1734(iParam0);
}

bool func_933(int iParam0)
{
	switch (iParam0)
	{
		case -1812123900:
		case -1735851763:
		case 156160941:
		case 640963317:
			return true;
	}
	return false;
}

bool func_934(int iParam0)
{
	switch (iParam0)
	{
		case -2128586587:
		case -1850305231:
		case -1056584934:
		case -344345634:
			return true;
	}
	return false;
}

void func_935(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		iVar1 = 0;
		while (iVar1 <= 32)
		{
			if ((iVar1 != iParam0 && func_933(Local_4089.f_2190[iVar1]->f_7)) && Local_4089.f_2190[iVar1]->f_8 <= 4)
			{
				func_536(524288, iVar1);
				bVar0 = true;
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (!bVar0)
	{
		func_236(33, 1, 0);
		func_236(34, 1, 0);
	}
	if (func_28(159) && !func_120(16))
	{
		func_1026(27, 0, 0, 0);
	}
	if (iParam0 != -1)
	{
		if (iParam2 == 0 && Local_4089.f_2190[iParam0]->f_7 == -1812123900)
		{
			func_1442(7, iParam0, 1);
		}
		else
		{
			func_1442(7, iParam0, 0);
		}
	}
}

void func_936(int iParam0)
{
	if (!func_1735(iParam0))
	{
		set_bit(&(Local_4089.f_4093), iParam0);
	}
}

bool func_937(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = participant_id_to_int();
	}
	return func_80(&(Local_920[iParam2]->f_80[iParam1]), iParam0);
}

bool func_938(int iParam0)
{
	iVar0 = func_956(0, 1);
	iVar1 = func_1736(&(Local_4089.f_3355), iParam0);
	iVar2 = func_1737(&(Local_4089.f_3355), iParam0);
	if (iVar2 < iVar1 && iVar2 != 0)
	{
		return true;
	}
	if (iVar1 != 0 && iVar0 < iVar1)
	{
		return false;
	}
	if (iVar2 != 0 && iVar0 > iVar2)
	{
		return false;
	}
	return true;
}

var func_939(var uParam0, int iParam1)
{
	return func_605(uParam0, 852132667, 0f, -2021955256, iParam1, 0, 0, 0, 0);
}

var func_940(var uParam0, int iParam1)
{
	return func_605(uParam0, -773173253, 0f, -2021955256, iParam1, 0, 0, 0, 0);
}

var func_941(var uParam0, int iParam1)
{
	return func_886(uParam0, -50013691, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

int func_942(var uParam0, int iParam1)
{
	return func_591(uParam0, -1507251761, 0, -2021955256, iParam1, 0, 0, 0, 0, 0);
}

bool func_943(int iParam0)
{
	switch (iParam0)
	{
		case -2067454306:
		case -2047561093:
		case -1426507703:
		case -150015663:
		case 0:
		case 401658241:
		case 477970332:
		case 1324229833:
		case 1373849220:
		case 1776830298:
			return false;
		case -2091093137:
		case -1387380597:
		case -1276434456:
		case -1091027173:
		case -970979849:
		case -783556459:
		case -428150648:
		case 448485414:
		case 506419716:
		case 661336845:
		case 860364721:
			return true;
		default:
			break;
	}
	return false;
}

void func_944(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	*iParam3 = func_1738(iParam0, bParam1, bParam2);
	iVar0 = func_1739(*iParam3, iParam0, bParam1, bParam2);
	*iParam4 = iVar0;
}

int func_945(var uParam0, int iParam1)
{
	return func_591(uParam0, -88913264, 0, -2021955256, iParam1, 0, 0, 0, 0, 0);
}

var func_946(var uParam0, int iParam1)
{
	return func_886(uParam0, -89457645, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

int func_947(var uParam0, int iParam1)
{
	return func_886(uParam0, -571977951, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

int func_948(var uParam0, int iParam1)
{
	return func_886(uParam0, -2028642469, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

var func_949(var uParam0, int iParam1)
{
	return func_886(uParam0, 634595644, -1, -2021955256, iParam1, 0, 0, 0, 0);
}

bool func_950(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 4);
}

float func_951(vector3 vParam0, vector3 vParam3, int iParam6)
{
	fVar0 = vdist(vParam0, vParam3);
	return (fVar0 - (fVar0 * (to_float(iParam6) / 100f)));
}

int func_952(var uParam0, int iParam1)
{
	return func_591(uParam0, 764457433, 0, -2021955256, iParam1, 0, 0, 0, 0, 0);
}

int func_953(var uParam0, int iParam1)
{
	Var0 = uParam0->f_4;
	Var0.f_2 = -1809046506;
	Var0.f_1 = func_255(uParam0, Var0, Var0.f_2);
	Var0.f_3 = iParam1;
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

bool func_954(struct<5> Param0, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41)
{
	iVar1 = func_1371(iParam36, &bVar0);
	if (bVar0)
	{
		iVar2 = iParam38;
		iVar3 = iParam37;
	}
	else
	{
		iVar2 = iParam37;
		iVar3 = -1;
	}
	if (iParam37 == -1)
	{
		return false;
	}
	return func_1260(&Param0, Param0.f_4, &uVar4, iVar1, iVar2, iVar3, iParam39, iParam40, iParam41);
}

int func_955(var uParam0, bool bParam1)
{
	Var0 = uParam0->f_4;
	Var0.f_2 = -886659247;
	Var0.f_1 = func_255(uParam0, Var0, Var0.f_2);
	Var0.f_3 = bParam1;
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

int func_956(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		iVar0 = (*Global_1237665)[Local_4089.f_3391]->f_11;
	}
	else if ((*Global_1248240)[Local_4089.f_3391]->f_559 == -1261475678)
	{
		iVar1 = (*Global_1237665)[Local_4089.f_3391]->f_8;
		iVar0 = (*Global_1266405)[iVar1]->f_1;
	}
	else
	{
		iVar0 = count_player_bits(&((*Global_1237665)[Local_4089.f_3391]->f_14));
	}
	if (bParam1)
	{
		func_1740(&iVar0);
	}
	return iVar0;
}

var func_957(var uParam0, int iParam1)
{
	return func_886(uParam0, -2134658868, -1, -2021955256, iParam1, 0, 0, 0, 0);
}

var func_958(var uParam0, int iParam1)
{
	return func_886(uParam0, -1642303795, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

Vector3 func_959(var uParam0, int iParam1)
{
	return func_604(uParam0, 895667230, 0f, 0f, 0f, -2021955256, iParam1, 0, 0, 0, 0);
}

int func_960(struct<2> Param0, var uParam2)
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

var func_961(var uParam0, int iParam1)
{
	return func_886(uParam0, 933040723, -1, -2021955256, iParam1, 0, 0, 0, 0);
}

var func_962(var uParam0, int iParam1)
{
	return func_886(uParam0, -1055909144, -1, -2021955256, iParam1, 0, 0, 0, 0);
}

int func_963(var uParam0, int iParam1)
{
	return func_591(uParam0, -1086885652, 0, -1809046506, iParam1, 0, 0, 0, 0, 0);
}

int func_964(var uParam0, bool bParam1)
{
	return func_886(uParam0, 698519886, 0, -886659247, bParam1, 0, 0, 0, 0);
}

int func_965(var uParam0, bool bParam1)
{
	return func_886(uParam0, 823390322, -1, -886659247, bParam1, 0, 0, 0, 0);
}

int func_966(var uParam0, bool bParam1)
{
	return func_886(uParam0, 339869802, -1, -886659247, bParam1, 0, 0, 0, 0);
}

int func_967(var uParam0, bool bParam1)
{
	iVar1 = func_955(uParam0, bParam1);
	bVar2 = false;
	while (bVar2 <= (iVar1 - 1))
	{
		iVar0 = func_1663(uParam0, bParam1, bVar2);
		if (iVar0 != 886638433)
		{
		}
		else
		{
			bVar3 = func_1662(uParam0, bParam1, bVar2);
			if (func_1474(uParam0, bVar3) != 0)
			{
				iVar4++;
			}
			iVar4++;
		}
		bVar2++;
	}
	return iVar4;
}

void func_968(bool bParam0)
{
	Local_4089.f_2148.f_2 = func_1741(&(Local_4089.f_3355), bParam0);
	if (Local_4089.f_2148.f_2 != -1)
	{
		func_970(8);
		return;
	}
	Local_4089.f_2148.f_2 = func_1742(&(Local_4089.f_3355), bParam0);
	if (Local_4089.f_2148.f_2 != -1)
	{
		func_970(16);
		return;
	}
}

int func_969(var uParam0, bool bParam1)
{
	return func_218(uParam0, 1452990914, 0, -886659247, bParam1, 0, 0, 0, 0);
}

void func_970(int iParam0)
{
	if (!func_999(iParam0))
	{
		func_105(&(Local_4089.f_2148), iParam0);
	}
}

int func_971(var uParam0, bool bParam1)
{
	return func_218(uParam0, 1824373239, 0, -886659247, bParam1, 0, 0, 0, 0);
}

int func_972(var uParam0, bool bParam1)
{
	return func_218(uParam0, 2060345377, 0, -886659247, bParam1, 0, 0, 0, 0);
}

int func_973(var uParam0, bool bParam1)
{
	return func_218(uParam0, -1103587969, 0, -886659247, bParam1, 0, 0, 0, 0);
}

bool func_974(bool bParam0)
{
	iVar0 = func_955(&(Local_4089.f_3355), bParam0);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (func_1743(&(Local_4089.f_3355), bParam0, iVar1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_975(var uParam0, bool bParam1)
{
	return func_218(uParam0, -1170791312, 0, -886659247, bParam1, 0, 0, 0, 0);
}

int func_976(var uParam0, bool bParam1)
{
	return func_218(uParam0, -1480829290, 0, -886659247, bParam1, 0, 0, 0, 0);
}

int func_977(var uParam0, bool bParam1)
{
	return func_591(uParam0, 456348180, 0, -886659247, bParam1, 0, 0, 0, 0, 0);
}

int func_978(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = 19492454;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

int func_979(var uParam0, int iParam1)
{
	return func_591(uParam0, -433267846, 0, 122916566, iParam1, 0, 0, 0, 0, 0);
}

int func_980(var uParam0, int iParam1)
{
	return func_1386(func_591(uParam0, -158647914, func_1700(-1), 122916566, iParam1, 0, 0, 0, 0, 0));
}

var func_981(var uParam0, int iParam1)
{
	return func_886(uParam0, -2137902654, -1, 122916566, iParam1, 0, 0, 0, 0);
}

var func_982(var uParam0, int iParam1)
{
	return func_886(uParam0, 1035844439, -1, 122916566, iParam1, 0, 0, 0, 0);
}

int func_983(var uParam0, int iParam1)
{
	return func_591(uParam0, 250627920, 0, 122916566, iParam1, 0, 0, 0, 0, 0);
}

int func_984(var uParam0, int iParam1)
{
	return func_591(uParam0, 1178298484, 0, 122916566, iParam1, 0, 0, 0, 0, 0);
}

int func_985(var uParam0, int iParam1)
{
	return func_591(uParam0, 1642065079, 0, 122916566, iParam1, 0, 0, 0, 0, 0);
}

int func_986(var uParam0, int iParam1)
{
	if (func_1701(uParam0, uParam0->f_4, &Var0, 122916566, iParam1, 0, 1) && func_1701(uParam0, uParam0->f_4, &Var0, 798528762, 0, 0, 0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

void func_987(int iParam0, int iParam1)
{
	if (!func_1744(iParam0, iParam1))
	{
		func_105(&(Local_4089.f_3138[iParam1]->f_1), iParam0);
	}
}

bool func_988(var uParam0, int iParam1, int iParam2)
{
	if (func_1701(uParam0, uParam0->f_4, &uVar0, 122916566, iParam1, 0, 1) && func_1701(uParam0, uParam0->f_4, &uVar0, 1994289620, iParam2, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_989(var uParam0, int iParam1)
{
	return func_218(uParam0, -1657888138, 1, 122916566, iParam1, 0, 0, 0, 0);
}

void func_990(int iParam0, int iParam1)
{
	if (Local_4089.f_1622[iParam1]->f_31 != iParam0)
	{
		Local_4089.f_1622[iParam1]->f_31 = iParam0;
	}
}

bool func_991(var uParam0, int iParam1)
{
	return func_218(uParam0, 640030672, 1, 24357435, iParam1, 0, 0, 0, 0);
}

int func_992(var uParam0, int iParam1)
{
	iVar0 = func_766(uParam0, iParam1);
	iVar1 = func_765(uParam0, iParam1);
	switch (iVar0)
	{
		case 886638433:
			iVar2 = func_1745(uParam0, iVar1);
			break;
		case -1918493640:
			iVar2 = func_1746(uParam0, iVar1);
			break;
		case -584819812:
			iVar2 = func_1747(uParam0, iVar1);
			break;
		case 1015970717:
			iVar2 = func_1748(uParam0, iVar1);
			break;
		case -916820003:
			iVar2 = func_1749(uParam0, iVar1);
			break;
	}
	return iVar2;
}

int func_993(int iParam0)
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

void func_994(int iParam0)
{
	if (&Local_13.f_82[iParam0] == 5)
	{
		if ((Local_4089.f_1622[iParam0]->f_31 != 5 && Local_4089.f_1622[iParam0]->f_31 != 0) && !func_1750(1, iParam0, 255))
		{
			if (!func_773(1, iParam0))
			{
				func_990(1, iParam0);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 <= 5)
				{
					if (Local_4089.f_1622[iVar0]->f_42 == iParam0)
					{
						func_1751(iVar0);
					}
					iVar0++;
				}
				func_990(5, iParam0);
			}
		}
	}
	if (Local_4089.f_1622[iParam0]->f_31 == 0)
	{
		return;
	}
	if (Local_4089.f_1622[iParam0]->f_31 > 1 && &Local_13.f_82[iParam0] != 5)
	{
		if ((Local_4089.f_1622[iParam0]->f_31 != 3 && &Local_13.f_82[iParam0] == 3) && &Local_4089.f_3008[1] != 493038497)
		{
			if (Local_13.f_82[iParam0]->f_2 != func_182(255))
			{
				if (Local_4089.f_4073 > 1)
				{
					func_1026(40, 0, 0, 0);
				}
			}
			else if (Local_13.f_82[iParam0]->f_11 == player_id())
			{
				func_1026(38, 0, 0, 0);
			}
			else
			{
				iVar1 = func_308(iParam0);
				if (does_entity_exist(iVar1) && vdist(Global_35, get_entity_coords(iVar1, false, false)) <= 10f)
				{
					func_1026(39, 0, 0, 0);
				}
			}
		}
		func_990(&(Local_13.f_82[iParam0]), iParam0);
	}
	func_1752(iParam0);
	switch (Local_4089.f_1622[iParam0]->f_31)
	{
		case 1:
			func_1753(iParam0);
			break;
		case 2:
			func_1754(iParam0);
			break;
		case 3:
			func_1755(iParam0);
			break;
		case 4:
			func_1756(iParam0);
			break;
		case 5:
			func_1757(iParam0);
			break;
	}
}

bool func_995(bool bParam0, bool bParam1)
{
	if (!func_311(bParam0))
	{
		return false;
	}
	if (func_773(1073741824, bParam0) && !bParam1)
	{
		return true;
	}
	if (Local_13.f_82[bParam0]->f_1 == -1918493640)
	{
		if (Local_4089.f_1087[Local_13.f_82[bParam0]->f_5]->f_1 == 0)
		{
			iVar0 = func_1493(&(Local_4089.f_3355), func_765(&(Local_4089.f_3355), bParam0));
		}
		else
		{
			iVar0 = Local_4089.f_1087[Local_13.f_82[bParam0]->f_5]->f_1;
		}
		return iVar0 == -1703696123;
	}
	else if (Local_13.f_82[bParam0]->f_1 == -916820003)
	{
		if (Local_4089.f_1983[Local_13.f_82[bParam0]->f_5]->f_1 == 0)
		{
			iVar1 = func_1758(&(Local_4089.f_3355), func_765(&(Local_4089.f_3355), bParam0));
		}
		else
		{
			iVar1 = Local_4089.f_1983[Local_13.f_82[bParam0]->f_5]->f_1;
		}
		if (iVar1 == -1767305912 || iVar1 == 392881261)
		{
			return true;
		}
	}
	return false;
}

void func_996(int iParam0, bool bParam1, int iParam2)
{
	if (!func_178(iParam0, bParam1))
	{
		func_105(&((*Global_1248240)[Local_4089.f_3391]->f_19[bParam1]->f_83), iParam0);
	}
}

void func_997()
{
	if (!func_1759(2))
	{
		func_1760(2);
	}
}

void func_998(int iParam0)
{
	iVar0 = (Local_4089.f_4083 + Local_13.f_357);
	if (iVar0 >= 12)
	{
		return;
	}
	Local_4089.f_3229.f_2[iVar0] = net_to_ent(iParam0);
	Local_4089.f_4083++;
}

bool func_999(int iParam0)
{
	return func_80(Local_4089.f_2148, iParam0);
}

int func_1000(int iParam0)
{
	return (iParam0 - Global_1296859->f_21) * 1000;
}

bool func_1001(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	iVar0 = func_1002(iParam0, iParam1);
	switch (iVar0)
	{
		case 21:
			return true;
		default:
			break;
	}
	return false;
}

int func_1002(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (*(*Global_1238240)[iParam1])[iParam0]->f_20;
}

void func_1003()
{
	if (func_104(8192, 255))
	{
		return;
	}
	if (func_370(255, 0, 0, 0, 0) != -1)
	{
		return;
	}
	func_20(8192, 1, 1);
}

bool func_1004()
{
	switch (Local_4089.f_3393)
	{
		case 1884341302:
			return true;
		case -1784925006:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1005()
{
	fVar0 = func_1761();
	switch (Local_4089.f_3393)
	{
		case 1884341302:
			if (func_1762(Local_4089.f_3391, fVar0, 1, 0, 0, 0, 0))
			{
				return true;
			}
			break;
		case -1784925006:
			if (func_1762(Local_4089.f_3391, fVar0, 0, 1, 0, 0, 0))
			{
				return true;
			}
			iVar1 = func_1763();
			if ((iVar1 != -1 && vdist(Global_35, func_1764(iVar1)) < fVar0) || func_1765(player_id(), 1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1006(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_54 == 493038497)
	{
		return false;
	}
	if (_0x72b2e00c9bac6789(&(uParam0->f_1), &Global_1296859))
	{
		return false;
	}
	bVar0 = false;
	Var1 = -1;
	Var1.f_1 = -1;
	fVar3 = 100f;
	if ((func_106(Var1) && !func_107(Var1, uParam0->f_52)) && func_225(Var1))
	{
		return false;
	}
	switch (uParam0->f_54)
	{
		case -1029285341:
		case 404851220:
			if (!bParam3)
			{
				bVar0 = true;
			}
			if ((does_entity_exist(&(uParam0->f_2[uParam0->f_55])) && is_entity_a_ped(&(uParam0->f_2[uParam0->f_55]))) && _0x3d9f958834ab9c30(get_ped_index_from_entity_index(&(uParam0->f_2[uParam0->f_55]))) == Global_34)
			{
				return true;
			}
			if (func_1766(uParam0, bVar0, 1, 0, fVar3, iParam2) && func_1767(uParam0, player_ped_id(), 800f))
			{
				return true;
			}
			break;
		case 622225714:
			bVar0 = true;
			if (func_1766(uParam0, bVar0, 0, 1, fVar3, iParam2) && func_1767(uParam0, player_ped_id(), 800f))
			{
				return true;
			}
			break;
	}
	if (uParam0->f_55 == 11)
	{
		uParam0->f_55 = 0;
	}
	else
	{
		uParam0->f_55++;
	}
	if (_0x72b2e00c9bac6789(&(uParam0->f_1), uParam0->f_56))
	{
		iVar4 = int_to_playerindex(uParam0->f_56);
		if (network_is_player_active(iVar4))
		{
			if (_0x3f59fe6f37869576(player_id(), iVar4))
			{
				*bParam1 = 1;
				return true;
			}
			else if (bVar0)
			{
				if (get_jack_target(Global_34) == get_player_ped(iVar4))
				{
					bVar5 = true;
				}
				else if (_0xd0b7aeb56229d317(Global_34) == get_player_ped(iVar4))
				{
					bVar5 = true;
				}
				if (bVar5 && func_1767(uParam0, player_ped_id(), 800f))
				{
					return true;
				}
			}
		}
	}
	if (uParam0->f_56 == 31)
	{
		uParam0->f_56 = 0;
	}
	else
	{
		uParam0->f_56++;
	}
	return false;
}

void func_1007(int iParam0, bool bParam1, bool bParam2)
{
	if (func_88() != 0)
	{
		return;
	}
	if (func_1768())
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
		if (!&Global_1139381->f_3876.f_2[func_1264(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_1264(iParam0, 1)])->f_2++;
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
	func_1769(&Var0, uVar7);
}

void func_1008(int iParam0)
{
	iVar0 = func_1770(iParam0, 1);
	if (!func_311(iVar0))
	{
		return;
	}
	if (!func_331(Local_4089.f_3391, 32))
	{
		return;
	}
	if (Local_13.f_82[iVar0]->f_1 == -1918493640 && Local_4089.f_1087[Local_13.f_82[iVar0]->f_5]->f_27 != -584819812)
	{
		return;
	}
	func_1009(9, (*Global_1237665)[Local_4089.f_3391]->f_15, player_id(), 0);
}

void func_1009(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = true;
	if (bParam3)
	{
		bVar0 = false;
	}
	if (func_1771(iParam1, bVar0))
	{
		return;
	}
	if (Global_1901947->f_716.f_41 < 1)
	{
		if (func_1772(&(Global_1296859->f_154[&Global_1296859]), iParam1))
		{
			if (2 == iParam0 || 3 == iParam0)
			{
				func_17(767, 0);
			}
			return;
		}
	}
	if (!func_1773(iParam0) && Global_1139381->f_5560.f_2 == iParam0)
	{
		if (Global_17411.f_2621.f_1 >= (Global_1296859->f_21 - func_1774(iParam0)))
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
		func_1288(&Var3, uVar2);
	}
	if (iParam1 != 255)
	{
		Global_1139381->f_5560.f_3 = func_1775(iParam1, 1);
		Global_1139381->f_5560.f_4 = func_1175(iParam1, 0, 1);
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

bool func_1010(int iParam0, bool bParam1)
{
	if (bParam1 && !func_56(iParam0))
	{
		return false;
	}
	iVar0 = func_243(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

int func_1011(var uParam0)
{
	return uParam0->f_23;
}

void func_1012(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

void func_1013(int iParam0, int iParam1, int iParam2)
{
	if (func_104(iParam0, 255))
	{
		func_511(&(Local_920[participant_id_to_int()]->f_92), iParam0);
	}
}

int func_1014(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_1;
}

int func_1015(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		default:
			break;
	}
	return 0;
}

bool func_1016(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if ((!func_166(player_id(), 16) && func_28(105)) && func_1776(255))
	{
		return true;
	}
	if (func_28(105))
	{
		return false;
	}
	if (func_166(player_id(), 32))
	{
		return true;
	}
	if (func_1776(255))
	{
		return true;
	}
	return false;
}

void func_1017(struct<2> Param0, bool bParam2, var uParam3)
{
	if (!func_106(Param0))
	{
		return;
	}
	iVar1 = func_1777(Param0);
	if (!func_1778(iVar1))
	{
		return;
	}
	iVar0 = func_1779(iVar1);
	if (!func_1780(iVar0))
	{
		return;
	}
	iVar2 = func_1781(iVar1);
	if (!func_1782(iVar2))
	{
		return;
	}
	iVar6 = func_1783(iVar1);
	if (iVar6 == -1)
	{
		return;
	}
	iVar3 = func_1784(iVar0);
	iVar4 = func_1785(iVar0);
	iVar5 = func_1786(iVar6);
	if (func_613())
	{
		if (bParam2 && _0x424b17a7dc5c90bc(player_id()))
		{
			func_1787(iVar0, iVar2, Param0, iVar6);
		}
		if (func_1788(iVar5) != -531996999)
		{
			switch (iVar4)
			{
				case 2132950130:
					break;
				case -408236271:
					func_1790(iVar4, func_1789());
					func_1791(iVar4, 1);
					func_1792(iVar0);
					func_1793(iVar0);
					func_1794(16777216);
					break;
				case 1766283257:
					func_1790(iVar4, func_1789());
					func_1791(iVar4, 1);
					func_1792(iVar0);
					func_1793(iVar0);
					func_1794(8388608);
					break;
				default:
					func_1790(iVar4, func_1789());
					func_1791(iVar4, 1);
					func_1792(iVar0);
					func_1793(iVar0);
					break;
			}
		}
		func_1795(iVar4, func_1789());
		func_1796(iVar4, bParam2);
		switch (func_1797(iVar5))
		{
			case 7:
				func_1798(uParam3);
				break;
		}
		func_1799(iVar6, Param0, bParam2, *uParam3);
		func_1801(func_1800(iVar0), 1);
		func_1802(1);
	}
	func_1803(iVar3, bParam2);
	func_1018();
}

void func_1018()
{
	func_1804(4);
	func_1805(1);
}

void func_1019(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	Var2.f_1 = -1;
	if (!func_1806(iParam0))
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
	if (func_1807(iParam0))
	{
		iVar1 |= 65536;
	}
	func_1808(iParam0, iVar1, iParam4, &Var2);
	func_1809(iParam0, iVar1);
	func_1810(iParam0, iVar1, &Var2);
	func_1811(iVar1, &Var2);
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
		func_1812(iParam0, iVar0, iParam3);
	}
}

void func_1020()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && func_104(32, iVar0))
		{
			_0x1bdb5a07307f6929(&uVar1, iVar0);
		}
		iVar0++;
	}
	func_1813(uVar1);
}

void func_1021(int iParam0, int iParam1)
{
	Var0.f_10 = 255;
	Var0.f_4 = 13;
	Var0.f_5 = Local_4089.f_3391;
	Var0.f_6 = iParam0;
	Var0.f_8 = iParam1;
	Var0.f_10 = player_id();
	func_1519(&Var0, func_880(0, 8));
}

int func_1022(int iParam0)
{
	iVar0 = 172;
	while (iVar0 <= 176)
	{
		iVar1 = func_1814(iVar0, 1);
		if (!func_293(iVar1, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 172;
	while (iVar0 <= 176)
	{
		iVar1 = func_1814(iVar0, 1);
		func_295(iVar1, iParam0);
		iVar0++;
	}
	return 1;
}

void func_1023(bool bParam0)
{
	if (Local_4089.f_4122 == -1 || bParam0)
	{
		Local_4089.f_4122 = 0;
		Local_4089.f_4123 = 0;
		iVar0 = func_182(255);
		switch (iVar0)
		{
			case 0:
				func_1815(iVar0, &(Local_4089.f_4122), &(Local_4089.f_4123));
				if (!bParam0)
				{
					Local_4089.f_4122 = Local_4089.f_4123;
				}
				break;
			default:
				func_1815(iVar0, &(Local_4089.f_4122), &(Local_4089.f_4123));
				break;
		}
	}
}

void func_1024(int iParam0, int iParam1)
{
	if (!func_143(iParam0))
	{
		return;
	}
	if (iParam1 != 0 && !func_29(iParam0, 128))
	{
		func_552(iParam1, 0);
		func_1069(iParam0, 128);
	}
	if (func_53(iParam0, 32, 255))
	{
		return;
	}
	if (func_53(iParam0, 64, 255))
	{
		return;
	}
	func_1816(iParam0, &uVar0);
	func_1817(iParam0);
	bVar1 = (*Global_1248240)[iParam0]->f_559 != 1717788883;
	Var2 = { (*Global_1248240)[iParam0]->f_584 };
	if (bVar1)
	{
		if (!func_226(Var2) && !func_225(Var2))
		{
			func_1818(iParam0);
		}
	}
	func_368(iParam0, 32);
	func_1069(iParam0, 16);
	iVar4 = func_227((*Global_1248240)[iParam0]->f_559);
	if (iVar4 != 0)
	{
		func_1819(iVar4);
	}
	if (func_1820((*Global_1248240)[iParam0]->f_559) && _0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), player_id()))
	{
		func_1821(iParam0);
	}
	if ((*Global_1248240)[iParam0]->f_559 == 1918154385 && !_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), player_id()))
	{
		func_1822();
	}
	if ((((*Global_1248240)[iParam0]->f_559 == 78055447 || (*Global_1248240)[iParam0]->f_559 == 974227447) || (*Global_1248240)[iParam0]->f_559 == -232478158) || (*Global_1248240)[iParam0]->f_559 == 1532822440)
	{
		func_1823(2, 1);
	}
	if (bVar1)
	{
		if (func_225(Var2))
		{
			return;
		}
		bVar5 = !func_1824(func_34(Global_1237665[iParam0]), (*Global_1237665)[iParam0]->f_6);
		func_1825(Var2, 1, bVar5, 0);
		func_1826((*Global_1248240)[iParam0]->f_584, 1, 0, -1);
		if ((*Global_1248240)[iParam0]->f_559 == -468635158)
		{
			func_1802(4);
		}
	}
}

void func_1025(int iParam0)
{
	if (!func_143(iParam0))
	{
		return;
	}
	if (func_53(iParam0, 16, 255))
	{
		return;
	}
	if (func_53(iParam0, 64, 255))
	{
		return;
	}
	if (!_0xd6f6acf4392187fb((*Global_1237665)[iParam0]->f_13))
	{
		func_802(iParam0, _0x901e0dc25080c8b9(player_id()), player_id());
	}
	func_1024(iParam0, (*Global_1248240)[iParam0]->f_597);
	func_368(iParam0, 16);
	if ((*Global_1248240)[iParam0]->f_559 == 195932838)
	{
		iVar0 = func_464((*Global_1248240)[iParam0]->f_584);
		_0xcd0d69c65bb0e8b9(iVar0);
	}
}

bool func_1026(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1827(iParam0) && !func_519(iParam0))
	{
		if (bParam1)
		{
			if (!bParam2 || func_1002(Local_4089.f_3391, 255) != 11)
			{
				if (func_370(255, 0, 0, 0, 0) != -1)
				{
					return false;
				}
			}
		}
		else
		{
			if (!func_28(127) || (func_1828(Local_4089.f_2890.f_32) && !func_1153(iParam0)))
			{
				return false;
			}
			if (!func_28(126))
			{
				return false;
			}
			if (func_182(255) == -1 || func_878(255, 1) < 2)
			{
				return false;
			}
		}
		if (Local_4089.f_2890.f_34 != 0 && Local_4089.f_2890.f_34 != iParam0)
		{
			return false;
		}
		if ((!bParam3 && Local_4089.f_2890.f_33 != 0) && _0x59fa676177dbe4c9(Local_4089.f_2890.f_33) <= 4)
		{
			return false;
		}
		Local_4089.f_2890.f_34 = iParam0;
		func_1829();
		return true;
	}
	return false;
}

void func_1027()
{
	if (!Local_4089.f_4147)
	{
		switch (Local_4089.f_3393)
		{
			case 1884341302:
				if (!func_1830())
				{
					return;
				}
				break;
			case -1784925006:
				if (!func_1831())
				{
					return;
				}
				break;
		}
		func_1832();
		if (_databinding_is_data_id_valid(Local_4089.f_4146))
		{
			Local_4089.f_4147 = 1;
		}
		return;
	}
	if (!_databinding_is_data_id_valid(Local_4089.f_4146))
	{
		return;
	}
	if (func_1833())
	{
		func_214();
	}
}

void func_1028()
{
	if (func_1156())
	{
		return;
	}
	_0xeb6027fd1b4600d5(11, 1, 0.75f);
	vVar39 = { (*Global_1237665)[Local_4089.f_3391]->f_18 };
	fVar42 = ((300f + 100f) / func_1834());
	fVar43 = ((300f + 300f) / func_1834());
	Var0.f_5 = 2;
	Var0.f_1 = { vVar39 };
	Var0.f_17.f_6 = { vVar39 };
	Var0.f_17 = { fVar42, fVar42, 100f };
	Var0.f_17.f_9 = -432403087;
	Var0.f_6.f_6 = { vVar39 };
	Var0.f_6 = { fVar43, fVar43, 100f };
	Var0.f_6.f_9 = -432403087;
	Var0.f_16 = 1;
	Var30.f_5 = 2;
	vVar44 = { Vector(0f, get_random_float_in_range((-fVar42 / 2f), (fVar42 / 2f)), get_random_float_in_range((-fVar42 / 2f), (fVar42 / 2f))) + vVar39 };
	vVar44.f_2 = _get_heightmap_bottom_z_for_position(vVar44.x, vVar44.y);
	func_1835(&vVar44, 9999f);
	if (!get_safe_coord_for_ped(vVar44, false, &(Var30.f_6), 0))
	{
		Var30.f_6 = { vVar39 };
	}
	Var30.f_1 = { vVar39 };
	func_1836(&Var0, &Var30, 1, 1, 1);
	func_236(55, 1, 0);
}

void func_1029()
{
	if (func_1156())
	{
		return;
	}
	_0xeb6027fd1b4600d5(11, 1, 0.75f);
	vVar39 = { func_1764(func_1763()) };
	fVar42 = (800f + 300f);
	fVar43 = (800f + 100f);
	Var0.f_5 = 2;
	Var0.f_1 = { vVar39 };
	Var0.f_17.f_6 = { vVar39 };
	Var0.f_17 = { fVar42, fVar42, 100f };
	Var0.f_17.f_9 = -432403087;
	Var0.f_6.f_6 = { vVar39 };
	Var0.f_6 = { fVar43, fVar43, 100f };
	Var0.f_6.f_9 = -432403087;
	Var0.f_16 = 1;
	Var30.f_5 = 2;
	vVar44 = { Vector(0f, get_random_float_in_range((-fVar42 / 2f), (fVar42 / 2f)), get_random_float_in_range((-fVar42 / 2f), (fVar42 / 2f))) + vVar39 };
	vVar44.f_2 = _get_heightmap_bottom_z_for_position(vVar44.x, vVar44.y);
	func_1835(&vVar44, 9999f);
	if (!get_safe_coord_for_ped(vVar44, false, &(Var30.f_6), 0))
	{
		Var30.f_6 = { vVar39 };
	}
	Var30.f_1 = { vVar39 };
	func_1836(&Var0, &Var30, 1, 1, 1);
	func_236(55, 1, 0);
}

void func_1030(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	if (Local_4089.f_1 != 6)
	{
		Local_4089.f_2.f_1 = iParam0;
		if (iParam6 == -1)
		{
			Local_4089.f_2.f_2 = func_182(255);
		}
		else
		{
			Local_4089.f_2.f_2 = iParam6;
		}
		if (bParam1)
		{
			func_374(1);
		}
		if (bParam2)
		{
			func_374(4);
		}
		if (bParam3)
		{
			func_374(16);
		}
		if (bParam4)
		{
			func_374(2);
		}
		if (bParam5)
		{
			func_374(8);
		}
		if ((!func_855(0, 0) && Local_4089.f_2.f_2 == 0) && !bParam4)
		{
			func_374(4096);
		}
		if (func_1837())
		{
			func_374(1024);
		}
		if (_0x424b17a7dc5c90bc(player_id()))
		{
			func_374(16384);
		}
		Local_4089.f_2.f_3 = _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id()));
		func_400(6);
	}
}

void func_1031(int iParam0)
{
	iVar0 = func_182(255);
	if (iVar0 != iParam0)
	{
		if (iVar0 != -1 && (*Global_1248240)[Local_4089.f_3391]->f_559 != 1427578635)
		{
			func_41(Local_4089.f_3391);
			func_1013(8192, 1, 0);
			Local_4089.f_3394 = (*(*Global_1238240)[network_player_id_to_int()])[Local_4089.f_3391]->f_20;
		}
		(*(*Global_1238240)[network_player_id_to_int()])[Local_4089.f_3391]->f_21 = iParam0;
		if (iParam0 != -1)
		{
			iVar1 = func_1409();
			if (iParam0 == 0)
			{
				if (func_1838(&(Local_4089.f_3355)))
				{
					_0x330ca55a3647fa1c(player_id(), 1);
					func_236(101, 1, 0);
				}
				func_1069(Local_4089.f_3391, 65536);
			}
			(*Global_1248240)[Local_4089.f_3391]->f_597 = func_1839(&(Local_4089.f_3355), iVar1, iParam0);
		}
	}
}

bool func_1032()
{
	if (!func_104(536870912, 255))
	{
		return true;
	}
	if (func_1170(255))
	{
		return true;
	}
	if (func_1840(255))
	{
		return true;
	}
	if (func_437(Local_4089.f_3391))
	{
		return true;
	}
	return false;
}

bool func_1033(bool bParam0)
{
	if (Local_4089.f_1 < 1)
	{
		return false;
	}
	if (func_202())
	{
		*bParam0 = 1;
		return false;
	}
	if (!func_28(127) || func_1828(Local_4089.f_2890.f_32))
	{
		*bParam0 = 1;
		return false;
	}
	if (!func_28(126))
	{
		return false;
	}
	if (func_650(Local_13.f_354))
	{
		iVar0 = func_856();
	}
	else
	{
		*bParam0 = 1;
		return false;
	}
	if (func_878(255, 1) <= 6)
	{
		*bParam0 = 1;
		return false;
	}
	if (Local_4089.f_3355.f_22 > 0 && iVar0 <= Local_4089.f_3355.f_22)
	{
		func_79(152, 1, 0);
	}
	if (func_28(152))
	{
		*bParam0 = 1;
		return false;
	}
	return true;
}

void func_1034(int iParam0)
{
	if (func_1841(iParam0))
	{
		func_1842(iParam0);
	}
	else
	{
		switch (Local_4089.f_3027[iParam0]->f_10)
		{
			case 1642086148:
				if (!func_937(2, iParam0, 255) && func_1843(iParam0, 0))
				{
					func_1844(iParam0);
				}
				break;
			case -703699781:
				if (func_1843(iParam0, 1))
				{
					func_1844(iParam0);
				}
				else
				{
					func_1845(iParam0);
				}
				break;
		}
	}
	func_1846(iParam0);
	func_1847(65536, iParam0);
}

void func_1035()
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (func_937(65536, iVar0, 255))
		{
			func_1034(iVar0);
		}
		iVar0++;
	}
}

void func_1036()
{
	if (Local_4089.f_3965 != -1)
	{
		if (func_1744(4, Local_4089.f_3965))
		{
			Local_4089.f_2890.f_53 = 0;
		}
		func_1848(-1217230960, -1);
		func_987(2, Local_4089.f_3965);
		Local_4089.f_3965 = -1;
	}
}

void func_1037(int iParam0)
{
	if (func_1849(iParam0, 1))
	{
		if (!func_1744(2, iParam0))
		{
			func_987(2, iParam0);
			if (Local_4089.f_3965 == iParam0)
			{
				func_1036();
			}
			Local_4089.f_3966 = (Local_4089.f_3966 - 1);
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (Local_4089.f_3138[iVar0]->f_3 == Local_4089.f_3138[iParam0]->f_4)
				{
					func_1037(iVar0);
				}
				iVar0++;
			}
		}
	}
	else if (func_1850(iParam0))
	{
		func_987(1, iParam0);
	}
	if (((&Local_4089.f_3138[iParam0] == -1 || func_182(255) == &Local_4089.f_3138[iParam0]) && func_1744(1, iParam0)) && !func_1744(2, iParam0))
	{
		if (Local_4089.f_3965 == -1)
		{
			func_1851(iParam0);
		}
	}
	else if (Local_4089.f_3965 == iParam0)
	{
		func_1036();
	}
}

bool func_1038(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_80(Local_4089.f_3980, iParam0);
	}
	return func_80(Local_4089.f_3979, iParam0);
}

bool func_1039(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_311(bParam0))
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = participant_id_to_int();
	}
	if (bParam2)
	{
		if (func_1651(bParam0, 0, 0, 0, 0) && (func_1852(bParam0, iParam1) || func_1853(bParam0, iParam1)))
		{
			return true;
		}
	}
	if (func_104(64, iParam1) && Local_920[iParam1]->f_93 == bParam0)
	{
		return true;
	}
	return false;
}

bool func_1040(bool bParam0)
{
	return !func_995(bParam0, 1);
}

int func_1041(int iParam0, int iParam1)
{
	func_1854(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

bool func_1042(bool bParam0, int iParam1)
{
	if (!func_311(bParam0))
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = participant_id_to_int();
	}
	return Local_920[iParam1]->f_94 == bParam0;
}

bool func_1043()
{
	iVar0 = func_182(255);
	return (((iVar0 != -1 && func_28(79)) && func_1093(1, iVar0)) && Local_4089.f_4076 == 0);
}

float func_1044()
{
	fVar0 = 1f;
	if (!is_entity_dead(Global_34))
	{
		if (is_ped_on_foot(Global_34))
		{
			if (_get_ped_crouch_movement(Global_34))
			{
				fVar0 = 0.8f;
			}
		}
		else if (is_ped_on_mount(Global_34))
		{
			fVar0 = 1.2f;
		}
		else if (is_ped_in_any_vehicle(Global_34, false))
		{
			fVar0 = 1.3f;
		}
	}
	return fVar0;
}

int func_1045()
{
	return Global_1248240->f_9298;
}

void func_1046()
{
	if (Local_409.f_460 == 10)
	{
		if (!func_1855(128, -1))
		{
			if (!func_1855(2, -1))
			{
				func_1856(1);
			}
			else
			{
				func_1856(10);
			}
		}
	}
	if (Local_4089.f_1500 == 0)
	{
		if (func_1502(1))
		{
			func_1856(1);
		}
		return;
	}
	if (Local_4089.f_1500 > 4 && Local_4089.f_1500 != 10)
	{
		func_1856(Local_409.f_460);
	}
	if (Local_4089.f_1500 > 1)
	{
		func_1857(Local_4089.f_1500.f_3);
	}
	switch (Local_4089.f_1500)
	{
		case 1:
			func_1858();
			break;
		case 3:
			func_1859();
			break;
		case 4:
			func_1860();
			break;
		case 5:
			func_1861();
			break;
		case 6:
			func_1861();
			break;
		case 7:
			func_1861();
			break;
		case 8:
			func_1861();
			break;
		case 9:
			func_1862();
			break;
		case 10:
			func_1863();
			break;
	}
}

void func_1047()
{
	if (func_28(149))
	{
		if (!func_1864())
		{
			Local_4089.f_2968.f_5 = 50f;
			func_1865(50f);
			func_79(149, 1, 0);
		}
	}
	else if (func_1864())
	{
		Local_4089.f_2968.f_5 = 100f;
		func_1865(100f);
		func_236(149, 1, 0);
	}
}

void func_1048(int iParam0, int iParam1, float fParam2)
{
	if (!func_1668(886638433, iParam0, 0))
	{
		return;
	}
	if (!network_does_network_id_exist(Local_409.f_1[iParam0]->f_14))
	{
		return;
	}
	if (!does_entity_exist(Local_4089.f_6[iParam0]->f_60))
	{
		return;
	}
	if (Local_409.f_1[iParam0]->f_1 == -126469426)
	{
		set_ped_reset_flag(Local_4089.f_6[iParam0]->f_60, 53, true);
	}
	if (func_1866(Local_409.f_1[iParam0]->f_1))
	{
		set_ped_reset_flag(Local_4089.f_6[iParam0]->f_60, 365, true);
	}
	if (func_1867(iParam0))
	{
		_0x6569f31a01b4c097(Local_4089.f_6[iParam0]->f_60, 20, 0);
	}
	if (func_836(Local_409.f_1[iParam0]->f_1))
	{
		func_1868(&(Local_4089.f_3961));
	}
	func_1869(iParam0);
	func_1870(iParam0);
	func_1871(iParam0, iParam1, fParam2);
	func_1872(iParam0);
	func_1873(iParam0);
	func_1874();
	func_1875(iParam0, 886638433);
}

void func_1049(int iParam0)
{
	if (&Local_409.f_1[iParam0] == 34)
	{
		if (!func_626(4, iParam0, -1))
		{
			if (!func_58(0, iParam0))
			{
				func_1876(1, iParam0);
			}
			else
			{
				func_1876(34, iParam0);
			}
		}
	}
	if (&Local_4089.f_6[iParam0] == 0)
	{
		if (func_1097(iParam0, 1))
		{
			func_1876(1, iParam0);
		}
		return;
	}
	if ((&Local_4089.f_6[iParam0] > 4 && &Local_4089.f_6[iParam0] != 34) && &Local_4089.f_6[iParam0] != &Local_409.f_1[iParam0])
	{
		if (&Local_409.f_1[iParam0] == 22)
		{
			func_1877(886638433, iParam0);
		}
		func_1876(&(Local_409.f_1[iParam0]), iParam0);
	}
	switch (&Local_4089.f_6[iParam0])
	{
		case 1:
			func_1878(iParam0);
			break;
		case 2:
			func_1879(iParam0);
			break;
		case 3:
			func_1880(iParam0);
			break;
		case 4:
			func_1881(iParam0);
			break;
		case 5:
			func_1882(iParam0);
			break;
		case 6:
			func_1882(iParam0);
			break;
		case 7:
			func_1882(iParam0);
			break;
		case 8:
			func_1882(iParam0);
			break;
		case 9:
			func_1882(iParam0);
			break;
		case 10:
			func_1882(iParam0);
			break;
		case 11:
			func_1882(iParam0);
			break;
		case 12:
			func_1882(iParam0);
			break;
		case 13:
			func_1882(iParam0);
			break;
		case 14:
			func_1882(iParam0);
			break;
		case 15:
			func_1882(iParam0);
			break;
		case 16:
			func_1882(iParam0);
			break;
		case 22:
			func_1882(iParam0);
			break;
		case 23:
			func_1882(iParam0);
			break;
		case 26:
			func_1882(iParam0);
			break;
		case 25:
			func_1882(iParam0);
			break;
		case 24:
			func_1882(iParam0);
			break;
		case 27:
			func_1882(iParam0);
			break;
		case 28:
			func_1882(iParam0);
			break;
		case 17:
			func_1882(iParam0);
			break;
		case 18:
			func_1882(iParam0);
			break;
		case 19:
			func_1882(iParam0);
			break;
		case 30:
			func_1882(iParam0);
			break;
		case 31:
			func_1882(iParam0);
			break;
		case 32:
			func_1882(iParam0);
			break;
		case 29:
			func_1883(iParam0);
			break;
		case 33:
			func_1884(iParam0);
			break;
		case 34:
			func_1885(iParam0);
			break;
	}
}

void func_1050(int iParam0)
{
	iVar0 = Local_4089.f_1087[iParam0]->f_11;
	func_1875(iParam0, -1918493640);
	switch (Local_4089.f_1087[iParam0]->f_1)
	{
		case 218600141:
			if (func_56(Local_4089.f_1087[iParam0]->f_12) && func_1886(Local_4089.f_1087[iParam0]->f_12, 0))
			{
				func_328(64, iParam0);
			}
			func_1887();
			break;
		case -1542718054:
		case 294392114:
		case 1740160671:
			if (func_56(Local_4089.f_1087[iParam0]->f_12) && func_1888(Local_4089.f_1087[iParam0]->f_12, 0))
			{
				func_328(64, iParam0);
			}
			break;
		case -298209514:
		case 1903241516:
			if (&Local_4089.f_1087[iParam0] > 10)
			{
				return;
			}
			if ((does_entity_exist(iVar0) && func_56(Local_4089.f_1087[iParam0]->f_12)) && vdist(get_entity_coords(iVar0, false, false), Global_35) < 1.6f)
			{
				if (Local_4089.f_1087[iParam0]->f_1 == 1903241516)
				{
					_uiprompt_set_active_group_this_frame(1903241516, "FETCH_AMMO_BOX_FOOTER_FIRE_BOTTLES", 1, 0, 0, 0);
				}
				else if (Local_4089.f_1087[iParam0]->f_1 == -298209514)
				{
					_uiprompt_set_active_group_this_frame(-298209514, "FETCH_AMMO_BOX_FOOTER_SEDATIVE_ROUNDS", 1, 0, 0, 0);
				}
			}
			if (func_56(Local_4089.f_1087[iParam0]->f_12) && func_1886(Local_4089.f_1087[iParam0]->f_12, 0))
			{
				func_1889(iParam0);
			}
			func_1890(iParam0);
			break;
		case -1687054743:
			if (func_56(Local_4089.f_1087[iParam0]->f_12) && func_1886(Local_4089.f_1087[iParam0]->f_12, 1))
			{
				func_328(64, iParam0);
				func_1891(&(Local_4089.f_1087[iParam0]->f_12));
			}
			break;
	}
}

void func_1051(int iParam0)
{
	if (&Local_409.f_317[iParam0] == 12)
	{
		if (!func_653(16, iParam0, -1))
		{
			if (!func_653(2, iParam0, -1))
			{
				func_1892(1, iParam0);
			}
			else
			{
				func_1892(12, iParam0);
			}
		}
	}
	if (&Local_4089.f_1087[iParam0] == 0)
	{
		if (func_309(iParam0, 1))
		{
			func_1892(1, iParam0);
		}
		return;
	}
	func_1893(iParam0);
	if ((&Local_4089.f_1087[iParam0] > 4 && &Local_4089.f_1087[iParam0] != 12) && func_1894(&(Local_409.f_317[iParam0]), iParam0))
	{
		func_1892(&(Local_409.f_317[iParam0]), iParam0);
	}
	switch (&Local_4089.f_1087[iParam0])
	{
		case 1:
			func_1895(iParam0);
			break;
		case 2:
			func_1896(iParam0);
			break;
		case 4:
			func_1897(iParam0);
			break;
		case 5:
			func_1898(iParam0);
			break;
		case 6:
			func_1898(iParam0);
			break;
		case 7:
			func_1898(iParam0);
			break;
		case 8:
			func_1899(iParam0);
			break;
		case 9:
			func_1898(iParam0);
			break;
		case 10:
			func_1898(iParam0);
			break;
		case 11:
			func_1900(iParam0);
			break;
		case 12:
			func_1901(iParam0);
			break;
	}
}

void func_1052(int iParam0)
{
	if (!does_entity_exist(Local_4089.f_1367[iParam0]->f_14))
	{
		return;
	}
	if (!func_719(Local_4089.f_1367[iParam0]->f_14))
	{
		return;
	}
	if (Local_4089.f_1367[iParam0]->f_15 != 0f)
	{
		_0x56cb3b4305a4f7ce(Local_4089.f_1367[iParam0]->f_14, -1, (Local_4089.f_1367[iParam0]->f_15 * -1f), Local_4089.f_1367[iParam0]->f_15);
	}
	func_1875(iParam0, -584819812);
}

void func_1053(int iParam0)
{
	if (&Local_409.f_381[iParam0] == 8)
	{
		if (!func_1902(32, iParam0, -1))
		{
			if (!func_1902(2, iParam0, -1))
			{
				func_1903(1, iParam0);
			}
			else
			{
				func_1903(8, iParam0);
			}
		}
	}
	if (&Local_4089.f_1367[iParam0] == 0)
	{
		if (func_1562(iParam0, 1))
		{
			func_1903(1, iParam0);
		}
		return;
	}
	if (((func_646(2097152, iParam0) && network_does_network_id_exist(Local_409.f_381[iParam0]->f_10)) && func_242(Local_409.f_381[iParam0]->f_10)) && !_0x404527bc03da0e6c(Local_4089.f_1367[iParam0]->f_14))
	{
		bring_vehicle_to_halt(Local_4089.f_1367[iParam0]->f_14, 7f, 3, false);
	}
	func_1904(iParam0);
	if (&Local_4089.f_1367[iParam0] > 4 && &Local_4089.f_1367[iParam0] != 8)
	{
		func_1903(&(Local_409.f_381[iParam0]), iParam0);
	}
	switch (&Local_4089.f_1367[iParam0])
	{
		case 1:
			func_1905(iParam0);
			break;
		case 2:
			func_1906(iParam0);
			break;
		case 3:
			func_1907(iParam0);
			break;
		case 4:
			func_1908(iParam0);
			break;
		case 5:
			func_1909(iParam0);
			break;
		case 6:
			func_1909(iParam0);
			break;
		case 7:
			func_1910(iParam0);
			break;
		case 8:
			func_1911(iParam0);
			break;
	}
}

void func_1054(int iParam0)
{
	if (&Local_409.f_467[iParam0] == 7)
	{
		if ((&Local_4089.f_1508[iParam0] != 7 && &Local_4089.f_1508[iParam0] != 0) && !func_1912(8, iParam0, -1))
		{
			if (!func_1912(1, iParam0, -1))
			{
				func_1913(1, iParam0);
			}
			else
			{
				func_1913(7, iParam0);
			}
		}
	}
	if (&Local_4089.f_1508[iParam0] == 0)
	{
		if (func_1574(iParam0, 1))
		{
			func_1913(1, iParam0);
		}
		return;
	}
	switch (&Local_4089.f_1508[iParam0])
	{
		case 1:
			func_1914(iParam0);
			break;
		case 2:
			func_1915(iParam0);
			break;
		case 3:
			func_1916(iParam0);
			break;
		case 4:
			func_1917(iParam0);
			break;
		case 5:
			func_1917(iParam0);
			break;
		case 7:
			func_1918(iParam0);
			break;
	}
	if (&Local_4089.f_1508[iParam0] > 3 && &Local_4089.f_1508[iParam0] != 7)
	{
		func_1913(&(Local_409.f_467[iParam0]), iParam0);
	}
}

void func_1055(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, var uParam7, bool bParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (Local_13.f_1 < 1)
	{
		*uParam2 = -1;
		return;
	}
	if (Local_4089.f_1622[iParam0]->f_31 == 0)
	{
		return;
	}
	bVar4 = !func_773(256, iParam0);
	*uParam12 = (*uParam12 || Local_4089.f_1622[iParam0]->f_41);
	if (bVar4 && &Local_13.f_82[iParam0] < 5)
	{
		*uParam13 = (*uParam13 || Local_4089.f_1622[iParam0]->f_41);
	}
	func_1919(iParam0, bVar4);
	if (&Local_13.f_82[iParam0] < 5)
	{
		if (func_773(1024, iParam0))
		{
			*uParam9++;
		}
		else if (func_1920(iParam0))
		{
			*uParam10++;
		}
		if (bVar4)
		{
			*uParam2++;
			if (func_1921(iParam0))
			{
				bVar5 = func_1651(iParam0, 0, 0, 0, 0);
				iVar6 = func_182(255);
				func_1922(iParam0);
				if (bParam1)
				{
					func_1068(iParam0, 0, 1);
				}
				if (func_773(262144, iParam0))
				{
					*uParam11++;
				}
				bVar7 = func_453(32, iParam0);
				if ((!bVar5 || Local_13.f_82[iParam0]->f_3 != iVar6) || ((Local_13.f_82[iParam0]->f_11 != 255 && !_0x81fb74c83c2ed69f(Local_13.f_82[iParam0]->f_11)) && !bVar7))
				{
					*uParam3++;
					if ((Local_13.f_82[iParam0]->f_11 != 255 && !_0x81fb74c83c2ed69f(Local_13.f_82[iParam0]->f_11)) && !bVar7)
					{
						*uParam4++;
					}
				}
				if (func_1750(256, iParam0, 255))
				{
					*bParam8 = 1;
				}
				switch (Local_13.f_82[iParam0]->f_1)
				{
					case 886638433:
						if (does_entity_exist(Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_60) && is_ped_human(Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_60))
						{
							if (iVar6 != -1)
							{
								bVar1 = func_1923(iParam0, iVar6, 1);
								bVar2 = (func_1750(4194304, iParam0, 255) || func_28(166));
								iVar3 = Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_60;
								if (_is_ped_hogtied(iVar3))
								{
									bVar0 = true;
								}
								if (bVar1)
								{
									if ((((!bVar0 && (!is_ped_in_any_vehicle(iVar3, true) || _0x660639bc60157048(iVar3, get_vehicle_ped_is_in(iVar3, true)))) && !is_ped_dead_or_dying(iVar3, true)) && !is_ped_injured(iVar3)) && !get_ped_config_flag(iVar3, 11, true))
									{
										*iParam5++;
										if (bVar2)
										{
											*iParam6++;
										}
									}
									else if ((((bVar0 || is_ped_dead_or_dying(iVar3, true)) || is_ped_injured(iVar3)) || get_ped_config_flag(iVar3, 11, true)) && !func_1651(iParam0, 0, 0, 0, 0))
									{
										*uParam7++;
									}
								}
								else if (!bVar1)
								{
									if (bVar0 && (bVar2 || !func_28(156)))
									{
										func_837(524288, iParam0);
									}
									else
									{
										func_838(524288, iParam0);
									}
								}
							}
							else
							{
								func_838(524288, iParam0);
							}
						}
						else if (does_entity_exist(Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_60) && func_1924(Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1))
						{
							if (iVar6 != -1)
							{
								bVar2 = func_1750(4194304, iParam0, 255);
								iVar3 = Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_60;
								if (func_1925(Local_13.f_82[iParam0]->f_5))
								{
									bVar0 = true;
								}
								if (bVar0 && bVar2)
								{
									func_837(524288, iParam0);
								}
								else
								{
									func_838(524288, iParam0);
								}
							}
							else
							{
								func_838(524288, iParam0);
							}
						}
						else
						{
							func_838(524288, iParam0);
						}
						break;
					case -1918493640:
						if (func_61(4, Local_13.f_82[iParam0]->f_5) && Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_26 != -1)
						{
							if (func_56(Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_12) && func_1888(Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_12, 1))
							{
								func_1926(512, Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_26);
							}
						}
						else if ((!func_653(64, Local_13.f_82[iParam0]->f_5, -1) && !func_311(Local_920[participant_id_to_int()]->f_93)) && !func_1651(iParam0, 0, 0, 0, 0))
						{
							if (func_56(Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_12) && func_1888(Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_12, 1))
							{
								func_328(64, Local_13.f_82[iParam0]->f_5);
							}
						}
						break;
					case -916820003:
						if (Local_13.f_82[iParam0]->f_5 <= -1)
						{
						}
						else
						{
							switch (Local_4089.f_1983[Local_13.f_82[iParam0]->f_5]->f_1)
							{
								case 1115966845:
									bVar1 = func_1923(iParam0, iVar6, 1);
									bVar2 = (func_1750(4194304, iParam0, 255) || func_28(166));
									iVar3 = get_ped_index_from_entity_index(func_1347(Local_13.f_82[iParam0]->f_5));
									bVar0 = _is_ped_hogtied(iVar3);
									if (bVar1)
									{
										if (((!bVar0 && (!is_ped_in_any_vehicle(iVar3, true) || _0x660639bc60157048(iVar3, get_vehicle_ped_is_in(iVar3, true)))) && !is_ped_dead_or_dying(iVar3, true)) && !get_ped_config_flag(iVar3, 11, true))
										{
											*iParam5++;
											if (bVar2)
											{
												*iParam6++;
											}
										}
										else if (((bVar0 || is_ped_dead_or_dying(iVar3, true)) || get_ped_config_flag(iVar3, 11, true)) && !func_1651(iParam0, 0, 0, 0, 0))
										{
											*uParam7++;
										}
									}
									break;
							}
						}
				}
			}
		}
	}
}

void func_1056(int iParam0)
{
	func_1927(iParam0);
	if ((Local_4089.f_1983[iParam0]->f_1 == -1767305912 || Local_4089.f_1983[iParam0]->f_1 == -1229553512) && &Local_409.f_478[iParam0] == 6)
	{
		func_1928(iParam0);
	}
	if (!network_does_network_id_exist(Local_409.f_478[iParam0]->f_1))
	{
		return;
	}
	iVar0 = _0x31fef6a20f00b963(net_to_ent(Local_409.f_478[iParam0]->f_1));
	if (iVar0 != 0)
	{
		func_1929(iVar0);
	}
}

void func_1057(int iParam0)
{
	if (&Local_409.f_478[iParam0] == 9)
	{
		if (!func_714(8, iParam0, -1))
		{
			if (!func_714(1, iParam0, -1))
			{
				func_1930(1, iParam0);
			}
			else
			{
				func_1930(9, iParam0);
			}
		}
	}
	if (&Local_4089.f_1983[iParam0] == 0)
	{
		if (func_1372(iParam0, 1))
		{
			func_1930(1, iParam0);
		}
		return;
	}
	if (&Local_4089.f_1983[iParam0] > 4 && &Local_4089.f_1983[iParam0] != 9)
	{
		func_1930(&(Local_409.f_478[iParam0]), iParam0);
	}
	switch (&Local_4089.f_1983[iParam0])
	{
		case 1:
			func_1931(iParam0);
			break;
		case 2:
			func_1932(iParam0);
			break;
		case 4:
			func_1933(iParam0);
			break;
		case 5:
			func_1934(iParam0);
			break;
		case 6:
			func_1934(iParam0);
			break;
		case 7:
			func_1934(iParam0);
			break;
		case 8:
			func_1935(iParam0);
			break;
		case 9:
			func_1936(iParam0);
			break;
	}
}

void func_1058(int iParam0)
{
	if (network_does_network_id_exist(&(Local_13.f_3[iParam0])))
	{
		if (func_1463(iParam0))
		{
			return;
		}
		if (!func_242(&(Local_13.f_3[iParam0])))
		{
			return;
		}
		iVar0 = net_to_ent(&(Local_13.f_3[iParam0]));
	}
	else if (does_entity_exist(&(Local_4089.f_1554[iParam0])))
	{
		if (func_1735(iParam0))
		{
			return;
		}
		iVar0 = &Local_4089.f_1554[iParam0];
	}
	else
	{
		return;
	}
	if (func_1581(iVar0, 4))
	{
		return;
	}
	if (!has_collision_loaded_around_entity(iVar0))
	{
		return;
	}
	_0x9587913b9e772d29(iVar0, 1);
	func_1465(iVar0, 4);
	func_936(iParam0);
}

void func_1059(int iParam0)
{
	if (func_158(1048576, iParam0, -1) || is_entity_dead(Global_34))
	{
		func_1937(iParam0);
		return;
	}
	func_1938(1);
	func_1939();
	func_1940();
	if (func_1941())
	{
		func_1942();
	}
	func_1943(iParam0);
	if (func_1944(iParam0))
	{
		_0xe296208c273bd7f0(-1, 1000, 0, 17, 1, 0);
		disable_control_action(0, -824104112, false);
		disable_control_action(0, 1663574939, false);
		disable_control_action(0, -2128655846, false);
		disable_control_action(0, 516589524, false);
		set_ped_reset_flag(Global_34, 29, true);
		set_ped_reset_flag(Global_34, 25, true);
		set_ped_reset_flag(Global_34, 134, true);
		_0x236905c700fdb54d();
		func_1945();
		func_1946();
		_0xc9caeaeec1256e54(-1679307491);
		func_1947();
	}
}

void func_1060(int iParam0)
{
	if (&Local_13.f_226[iParam0] == -1)
	{
		if (func_178(1, iParam0))
		{
			func_32(iParam0, 0);
		}
		return;
	}
	if (Local_13.f_1 <= 0)
	{
		return;
	}
	if (func_158(32768, iParam0, -1) && func_159(16384, iParam0))
	{
		func_488(32768, iParam0, 1);
	}
	if (func_1948(iParam0))
	{
		if (func_1949(iParam0) <= func_503(iParam0, -1))
		{
			func_32(iParam0, 0);
		}
		else if (!func_158(1, iParam0, -1))
		{
			func_1950(iParam0);
		}
		else
		{
			func_1951(iParam0);
		}
	}
	else
	{
		if (func_1952(iParam0))
		{
			func_1950(iParam0);
			return;
		}
		switch (&Local_13.f_226[iParam0])
		{
			case 0:
				func_1953(iParam0);
				return;
			case 1:
				func_1950(iParam0);
				return;
			case 2:
				func_1954(iParam0);
				return;
			case 3:
				func_1951(iParam0);
				return;
			case 4:
				func_32(iParam0, 0);
				return;
			default:
				break;
		}
	}
}

void func_1061(int iParam0)
{
	if (&Local_4089.f_1601[iParam0] == 0)
	{
		return;
	}
}

void func_1062(int iParam0)
{
	if (&Local_4089.f_1601[iParam0] == 0)
	{
		return;
	}
	switch (&Local_4089.f_1601[iParam0])
	{
		case 1:
			func_1955(iParam0);
			break;
		case 2:
			func_1956(iParam0);
			break;
		case 3:
			func_1957(iParam0);
			break;
		case 4:
			func_1958(iParam0);
			break;
		case 5:
			func_1959(iParam0);
			break;
	}
	if ((Local_13.f_1 == 6 && &Local_4089.f_1601[iParam0] != 5) && func_1960(iParam0, 1))
	{
		func_1961(5, iParam0);
	}
}

void func_1063(int iParam0)
{
	func_1962(iParam0);
	if (((((func_1963(32, iParam0, -1) && !func_1963(64, iParam0, -1)) && func_1963(32768, iParam0, -1)) && !func_1963(2097152, iParam0, -1)) && network_does_network_id_exist(Local_409.f_494[iParam0]->f_1)) && does_entity_exist(Global_34))
	{
		_0x632be8d84846fa56();
		iVar0 = &Local_4089.f_2156[iParam0];
		iVar1 = func_1964(iParam0);
		iVar2 = _net_to_anim_scene(Local_409.f_494[iParam0]->f_1);
		iVar3 = func_1965(&(Local_4089.f_3355), iVar0, iVar1);
		iVar4 = 0;
		while (iVar4 <= (iVar3 - 1))
		{
			Var6 = { func_1966(&(Local_4089.f_3355), iVar0, iVar1, iVar4) };
			if (is_string_null_or_empty(&Var6))
			{
			}
			else
			{
				iVar5 = func_1967(&(Local_4089.f_3355), iVar0, iVar1, iVar4);
				if ((iVar5 != 0 && _get_anim_scene_ped(iVar2, &Var6, false) == Global_34) && has_anim_event_fired(Global_34, iVar5))
				{
					func_1968(2097152, iParam0);
				}
			}
			iVar4++;
		}
	}
}

void func_1064(int iParam0)
{
	if (Local_4089.f_2156[iParam0]->f_1 == 0)
	{
		if (func_1599(iParam0, 1))
		{
			func_1969(1, iParam0);
		}
		return;
	}
	if ((&Local_409.f_494[iParam0] > 5 && Local_4089.f_2156[iParam0]->f_1 != 9) && Local_4089.f_2156[iParam0]->f_1 > 5)
	{
		func_1969(&(Local_409.f_494[iParam0]), iParam0);
	}
	else if (Local_4089.f_2156[iParam0]->f_1 > 4 && (&Local_409.f_494[iParam0] == 3 || &Local_409.f_494[iParam0] == 4))
	{
		func_1969(3, iParam0);
	}
	switch (Local_4089.f_2156[iParam0]->f_1)
	{
		case 1:
			func_1970(iParam0);
			break;
		case 2:
			func_1971(iParam0);
			break;
		case 3:
			func_1972(iParam0);
			break;
		case 4:
			func_1973(iParam0);
			break;
		case 5:
			func_1974(iParam0);
			break;
		case 6:
			func_1975(iParam0);
			break;
		case 7:
			func_1976(iParam0);
			break;
		case 8:
			func_1977(iParam0);
			break;
		case 9:
			func_1978(iParam0);
			break;
	}
}

void func_1065(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_7)
	{
		case -1871983137:
			func_1979(iParam0);
			break;
		case 1741188187:
			func_1980(iParam0);
			break;
		case 1729832790:
			func_1981(iParam0);
			break;
	}
}

bool func_1066(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (&Local_4089.f_4031[37] == get_frame_count())
	{
		return true;
	}
	return func_820(iParam0, iParam1, iParam2, bParam3);
}

void func_1067()
{
	Global_1896738->f_371.f_5 = 1;
}

void func_1068(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_311(iParam0))
	{
		return;
	}
	iVar0 = func_307(255);
	bVar1 = Local_13.f_82[iParam0]->f_1 != -584819812;
	if (Local_13.f_82[iParam0]->f_1 == -1918493640 && Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_27 == -584819812)
	{
		bVar1 = true;
	}
	if (iVar0 != 404851220)
	{
		if (func_1042(iParam0, 255))
		{
			func_1982();
		}
		return;
	}
	if (&Local_13.f_82[iParam0] < 2 || &Local_13.f_82[iParam0] >= 5)
	{
		if (func_1042(iParam0, 255))
		{
			func_1982();
		}
		return;
	}
	if (Local_13.f_1 < 2)
	{
		if (func_1042(iParam0, 255))
		{
			func_1982();
		}
		return;
	}
	if (func_104(64, 255) && !bVar1)
	{
		if (func_1042(iParam0, 255))
		{
			func_1982();
		}
		return;
	}
	if (func_453(32, iParam0) && func_182(255) == 0)
	{
		bVar2 = true;
	}
	if ((Local_13.f_82[iParam0]->f_11 == 255 && !bVar1) && !bVar2)
	{
		if (func_1042(iParam0, 255))
		{
			func_1982();
		}
		return;
	}
	if (Local_13.f_82[iParam0]->f_3 != func_182(255) && !bVar2)
	{
		if (func_1042(iParam0, 255))
		{
			func_1982();
		}
		return;
	}
	if (bParam1)
	{
		if (!func_1983(255))
		{
			func_1984(iParam0);
		}
		func_79(7, 1, 0);
	}
	else if (func_1985())
	{
		if (!func_1983(255))
		{
			func_1984(iParam0);
		}
		func_236(7, 1, 0);
	}
	else if (func_1043())
	{
		if (!func_1983(255))
		{
			func_1984(iParam0);
		}
		func_236(7, 1, 1);
	}
	else if (func_1042(iParam0, 255))
	{
		if (!bParam2 || func_28(7))
		{
			func_1982();
			func_79(7, 1, 1);
		}
	}
}

void func_1069(int iParam0, int iParam1)
{
	if (!func_143(iParam0))
	{
		return;
	}
	if (!func_29(iParam0, iParam1))
	{
		func_251(&((*Global_1248240)[iParam0]->f_556), iParam1);
	}
}

float func_1070(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_1071(int iParam0, int iParam1)
{
	if (&Local_13.f_82[iParam0] != 3)
	{
		return false;
	}
	if (!_0x9be7dcb22d32ccbe(Local_13.f_82[iParam0]->f_10, player_id()))
	{
		return false;
	}
	iVar0 = func_1041(iParam1, iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!_does_volume_exist(Local_4089.f_2190[iVar0]->f_1))
	{
		return false;
	}
	if (!func_1986(iVar0, 255, 1))
	{
		return false;
	}
	if (!func_1987(Global_34, Local_4089.f_2190[iVar0]->f_1, 1, 0))
	{
		return false;
	}
	return true;
}

bool func_1072(int iParam0, int iParam1)
{
	iVar0 = Local_4089.f_1622[iParam0]->f_2[iParam1]->f_10;
	iVar1 = Local_4089.f_1622[iParam0]->f_2[iParam1]->f_9;
	if (iVar0 != 886638433)
	{
		return false;
	}
	if (!func_1097(iVar1, 1))
	{
		return false;
	}
	if (!func_1039(iParam0, 255, 0))
	{
		return false;
	}
	iVar2 = func_310(iVar0, iVar1);
	if (!does_entity_exist(iVar2))
	{
		return false;
	}
	return vdist(Global_35, get_entity_coords(iVar2, false, false)) < 5f;
}

bool func_1073(int iParam0)
{
	switch (iParam0)
	{
		case -2097642849:
		case -2003068922:
		case -1305506499:
		case -1155134795:
		case -887274986:
		case -207712283:
		case 291675087:
		case 367410298:
		case 534304827:
		case 1665936245:
		case 1915478987:
		case 1958222724:
		case 2006171510:
			return true;
	}
	return false;
}

bool func_1074(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_28(41) || func_28(42))
	{
		return true;
	}
	if (func_307(255) != 404851220)
	{
		return false;
	}
	if (iParam0 != -1 && func_1988(4096, iParam0))
	{
		return true;
	}
	if (bParam3)
	{
		if (_0x2963b5c1637e8a27(iParam1) != Global_34)
		{
			return false;
		}
	}
	if (func_104(64, 255))
	{
		iVar0 = func_182(255);
		iVar1 = Local_920[participant_id_to_int()]->f_93;
		iVar2 = func_1041(iVar0, iVar1);
		if (iVar2 != -1 && func_535(4096, iVar2))
		{
			return false;
		}
		iVar4 = func_308(iVar1);
		if ((does_entity_exist(iVar4) && func_1378(iVar1, iVar4, iVar0, &uVar3)) || (func_28(94) && func_1631(8192)))
		{
			if (!bParam3)
			{
				if (!func_1989(iVar1, iVar4, iParam2))
				{
					return false;
				}
			}
			return true;
		}
	}
	if (func_1990(iParam1, 5))
	{
		return true;
	}
	if (!func_1991(iParam0))
	{
		return false;
	}
	iVar5 = -1;
	if (Local_409.f_381[iParam0]->f_1 == 448485414)
	{
		iVar5 = Local_409.f_381[iParam0]->f_2;
	}
	else
	{
		iVar5 = func_1992(iParam0);
	}
	if (iVar5 == -1)
	{
		return false;
	}
	if ((func_453(8, iVar5) && &Local_13.f_82[iVar5] == 5) && !func_646(2097152, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1075(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (bParam1)
		{
			bVar0 = is_vehicle_stopped(iParam2);
			if (!func_28(41) && !bVar0)
			{
				bring_vehicle_to_halt(iParam2, 7f, 3, false);
				func_236(41, 1, 0);
			}
			if ((func_28(42) && !func_1993(1)) && !func_494(Global_34, 451360105))
			{
				task_leave_vehicle(Global_34, iParam2, 0, 0);
			}
			return bVar0;
		}
		else
		{
			if (!func_28(41))
			{
				func_236(41, 1, 0);
			}
			return func_1994();
		}
	}
	else
	{
		if (func_1991(iParam0) && func_1988(4096, iParam0))
		{
			if (!_0x404527bc03da0e6c(iParam2))
			{
				bring_vehicle_to_halt(iParam2, 7f, -1, false);
			}
			return false;
		}
		return true;
	}
	return false;
}

void func_1076(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (_0x404527bc03da0e6c(iParam1))
		{
			_0x7c06330bfdda182e(iParam1);
		}
	}
	else
	{
		if (bParam0)
		{
			_0x7c06330bfdda182e(iParam1);
		}
		else if (Local_4089.f_4029 != 0)
		{
			Local_4089.f_4029 = 0;
		}
		if (func_28(42))
		{
			func_1995();
			func_79(42, 1, 0);
		}
		func_79(41, 1, 0);
	}
}

bool func_1077()
{
	return ((Local_13.f_357 > 0 && Local_4089.f_4078 > 0) && Local_4089.f_4078 == Local_13.f_359);
}

bool func_1078(var uParam0, float fParam1)
{
	if (!_0x72b2e00c9bac6789(&(uParam0->f_1), &Global_1296859))
	{
		return false;
	}
	if (fParam1 > 800f)
	{
		return true;
	}
	return false;
}

bool func_1079(int iParam0)
{
	if (iParam0 != 1)
	{
		return false;
	}
	return (_0xd6f6acf4392187fb(Local_13.f_391) && _0x901e0dc25080c8b9(player_id()) != Local_13.f_391);
}

void func_1080()
{
	if (Local_4089.f_3211.f_14 < 0.25f)
	{
		Local_4089.f_3211.f_12 = 0f;
		Local_4089.f_3211.f_13 = 0f;
		Local_4089.f_3211 = 46999421;
	}
	else if (Local_4089.f_3211.f_14 < 0.5f)
	{
		Local_4089.f_3211.f_12 = Global_1901947->f_166.f_60;
		Local_4089.f_3211.f_13 = Global_1901947->f_166.f_63;
		Local_4089.f_3211 = 313639473;
	}
	else if (Local_4089.f_3211.f_14 < 0.65f)
	{
		Local_4089.f_3211.f_12 = Global_1901947->f_166.f_61;
		Local_4089.f_3211.f_13 = Global_1901947->f_166.f_64;
		Local_4089.f_3211 = -431929910;
	}
	else
	{
		Local_4089.f_3211.f_12 = Global_1901947->f_166.f_62;
		Local_4089.f_3211.f_13 = Global_1901947->f_166.f_65;
		Local_4089.f_3211 = 1345212537;
	}
	Local_4089.f_3211.f_11 = Global_1901947->f_166.f_66;
	func_1996(Local_4089.f_3211.f_14, 0);
}

void func_1081()
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

void func_1082()
{
	if (Local_4089.f_3211 == 46999421)
	{
		return;
	}
	if (!func_1997(&(Local_4089.f_3211.f_15)))
	{
		func_1998(&(Local_4089.f_3211.f_15), 0);
		return;
	}
	else
	{
		iVar0 = func_1999(&(Local_4089.f_3211.f_15));
		if (iVar0 >= Local_4089.f_3211.f_11)
		{
			func_2000();
			func_2001(&(Local_4089.f_3211.f_15));
		}
	}
}

void func_1083(int iParam0)
{
	if (!func_1997(&(Local_4089.f_3211.f_2)))
	{
		func_1998(&(Local_4089.f_3211.f_2), 0);
		return;
	}
	fVar0 = to_float((func_1999(&(Local_4089.f_3211.f_2)) - Local_4089.f_3211.f_1));
	Local_4089.f_3211.f_1 = func_1999(&(Local_4089.f_3211.f_2));
	if (func_650(Local_4089.f_4102))
	{
		func_2002(iParam0, Local_4089.f_3211.f_12);
		if (func_725(Local_4089.f_4102) >= 1500)
		{
			func_163(&(Local_4089.f_4102));
		}
		return;
	}
	fVar1 = (0.00033f * fVar0);
	if (fVar1 > 1f)
	{
		fVar1 = 1f;
	}
	if (is_control_pressed(0, 428538980))
	{
		if (Local_4089.f_3211.f_12 > 0.4f)
		{
			return;
		}
		func_2003(iParam0, fVar1);
	}
	else if (is_control_pressed(0, 1580670631))
	{
		if (Local_4089.f_3211.f_12 < -0.4f)
		{
			return;
		}
		func_2003(iParam0, -fVar1);
	}
	else if (get_random_int_in_range(0, 100) < 2)
	{
		fVar2 = func_2004();
		func_2002(iParam0, fVar2);
		func_846(&(Local_4089.f_4102), 2000, 0, 0);
	}
	else
	{
		fVar1 = (fVar1 / 2f);
		if (Local_4089.f_3211.f_12 > 0f)
		{
			if ((Local_4089.f_3211.f_12 - fVar1) < 0f)
			{
				fVar1 = Local_4089.f_3211.f_12;
			}
			func_2003(iParam0, -fVar1);
		}
		else if (Local_4089.f_3211.f_12 < 0f)
		{
			if ((Local_4089.f_3211.f_12 + fVar1) > 0f)
			{
				fVar1 = Local_4089.f_3211.f_12;
			}
			func_2003(iParam0, fVar1);
		}
	}
}

void func_1084(int iParam0)
{
	if (!_0x33fa048675821da7(iParam0, 3))
	{
		_0x2eb75fb86c41f026(iParam0, 3, 1);
	}
	else if (!_0x33fa048675821da7(iParam0, 1))
	{
		_0x2eb75fb86c41f026(iParam0, 1, 1);
	}
	else if (!_0x33fa048675821da7(iParam0, 2))
	{
		_0x2eb75fb86c41f026(iParam0, 2, 1);
	}
	else
	{
		_0x06d26a96ca1bca75(iParam0, 3, 1f, 0);
		_0x06d26a96ca1bca75(iParam0, 1, 1f, 0);
		_0x06d26a96ca1bca75(iParam0, 2, 1f, 0);
	}
}

void func_1085()
{
	if (!is_ped_running_ragdoll_task(Global_34))
	{
		if (get_entity_speed(Global_34) > 6.2f)
		{
			set_ped_can_ragdoll(Global_34, true);
			set_ped_to_ragdoll(Global_34, 1, 5000, 1, false, false, false);
		}
		if (!func_1997(&(Local_4089.f_3211.f_8)))
		{
			if (is_ped_jumping(Global_34) || _0x77243ed4f7caaa55(Global_34))
			{
				func_1998(&(Local_4089.f_3211.f_8), 0);
			}
		}
		else if (func_1999(&(Local_4089.f_3211.f_8)) > 1000)
		{
			set_ped_can_ragdoll(Global_34, true);
			set_ped_to_ragdoll(Global_34, 1, 5000, 1, false, false, false);
			func_2001(&(Local_4089.f_3211.f_8));
		}
	}
}

bool func_1086(int iParam0, int iParam1)
{
	return func_80(Local_4089.f_3171[iParam1]->f_4, iParam0);
}

var func_1087(var uParam0, int iParam1)
{
	return func_605(uParam0, 797160517, 0f, 622194862, iParam1, 0, 0, 0, 0);
}

void func_1088(int iParam0, int iParam1)
{
	if (!func_1086(iParam0, iParam1))
	{
		func_105(&(Local_4089.f_3171[iParam1]->f_4), iParam0);
	}
}

int func_1089(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_146(uParam0->f_1, 1))
	{
		if (does_particle_fx_looped_exist(*uParam0))
		{
			if (func_146(uParam0->f_1, 16))
			{
				func_2005(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				func_2006(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	request_named_ptfx_asset(-458373790);
	if (has_named_ptfx_asset_loaded(-458373790))
	{
		if (!func_146(uParam0->f_1, 8))
		{
			if (!does_particle_fx_looped_exist(*uParam0))
			{
				use_particle_fx_asset("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_2007(get_distance_between_coords(get_gameplay_cam_coord(), vParam1, true));
				uParam0->f_3 = func_2009(func_2008(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_2010(iParam4);
				uParam0->f_5 = to_float(get_random_int_in_range(floor((uParam0->f_5 - 15f)), floor((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = start_particle_fx_looped_at_coord(sVar0, vParam1, 0f, 0f, 0f, func_2011(iParam4), false, false, false, false);
				uParam0->f_4 = get_frame_count();
				if (func_2012(vParam1, 1) > (get_gameplay_cam_fov() + 15f))
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
					set_particle_fx_looped_alpha(*uParam0, 1f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_251(&(uParam0->f_1), 16);
				}
				else
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_2);
					set_particle_fx_looped_alpha(*uParam0, 0f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_251(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

void func_1090()
{
	iVar6 = 0;
	while (iVar6 <= (Local_13.f_257.f_29 - 1))
	{
		iVar1 = Local_13.f_257[iVar6]->f_3;
		if (func_850(16384, iVar6) && func_849(iVar6) != 5)
		{
			iVar2 = func_1611(iVar1);
			iVar3 = Local_13.f_257[iVar6]->f_2;
			if (iVar2 == 0)
			{
			}
			else if (iVar3 == -1)
			{
			}
			else if (!func_2013(iVar1, iVar6, &uVar4, iVar2, iVar3))
			{
			}
			else if (func_849(iVar6) != 4 && func_849(iVar6) != 5)
			{
			}
			else if (!func_1097(iVar1, 0))
			{
			}
			else
			{
				iVar0 = Local_4089.f_6[iVar1]->f_60;
				if (!does_entity_exist(iVar0))
				{
				}
				else
				{
					if (!func_850(4096, iVar6) && func_850(32768, iVar6))
					{
						bVar5 = func_850(65536, iVar6);
						if (bVar5 == get_ped_config_flag(iVar0, 448, false))
						{
							set_ped_config_flag(iVar0, 448, !bVar5);
						}
					}
					func_2014(iVar6, iVar1, iVar0);
				}
			}
			iVar6++;
		}
	}
}

void func_1091(int iParam0)
{
	iVar0 = Local_13.f_257[iParam0]->f_3;
	if (iVar0 == -1)
	{
		return;
	}
	if (&Local_409.f_1[iVar0] == 27)
	{
		func_2015(1, 0, 0);
		func_2016(iVar0);
		return;
	}
	Local_4089.f_3395[iParam0] = &Local_4089.f_3395[iParam0] + 1;
	if (&Local_4089.f_3395[iParam0] > Local_4089.f_3395[iParam0]->f_4 || &Local_4089.f_3395.f_46[&Local_4089.f_3395[iParam0]] == 0)
	{
		Local_4089.f_3395[iParam0] = Local_4089.f_3395[iParam0]->f_3;
	}
	func_2017(iParam0);
	func_2018(iParam0, &(Local_4089.f_3395[iParam0]), iVar0);
}

void func_1092(int iParam0)
{
	Global_1071686->f_22973.f_3 = (Global_1071686->f_22973.f_3 || iParam0);
}

bool func_1093(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	return func_80(Local_4089.f_3008[iParam1]->f_3, iParam0);
}

void func_1094(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		_report_crime(player_id(), iParam0, 0, 0, true);
	}
	else
	{
		func_2019(player_id(), iParam0, 0);
	}
}

bool func_1095(bool bParam0, bool bParam1, bool bParam2)
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

bool func_1096()
{
	bVar0 = Local_4089.f_4084 > 0;
	if (!bVar0 && func_28(106))
	{
		return true;
	}
	if (bVar0 && func_2020(&(Local_4089.f_3355)))
	{
		return true;
	}
	return false;
}

bool func_1097(int iParam0, bool bParam1)
{
	if (iParam0 == -1 || iParam0 > 14)
	{
		return false;
	}
	if (bParam1 && &Local_409.f_1[iParam0] == 34)
	{
		return false;
	}
	return &Local_409.f_1[iParam0] != 0;
}

Vector3 func_1098(int iParam0)
{
	iVar0 = func_2021(iParam0);
	if (!func_2022(iVar0))
	{
		return 0f, 0f, 0f;
	}
	iVar1 = func_1781(iVar0);
	if (!func_1782(iVar1))
	{
		return 0f, 0f, 0f;
	}
	if (!func_2023(iVar1, &uVar2))
	{
		return 0f, 0f, 0f;
	}
	return func_2024(iVar1);
}

int func_1099(vector3 vParam0, float fParam3, int iParam4)
{
	*fParam3 = 9999f;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (iParam4 != 0 && Local_13.f_82[iVar0]->f_1 != iParam4)
		{
		}
		else
		{
			iVar3 = func_308(iVar0);
			if (does_entity_exist(iVar3))
			{
				fVar2 = vdist(get_entity_coords(iVar3, false, false), vParam0);
				if (fVar2 < *fParam3)
				{
					iVar1 = iVar0;
					*fParam3 = fVar2;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1100(var uParam0, var uParam1)
{
	iVar0 = player_id();
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	if (func_2025(iVar0, 2))
	{
		return;
	}
	if (!func_2026(iVar0))
	{
		return;
	}
	func_2027(2);
}

void func_1101(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = player_id();
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	if (!func_2025(iVar0, 2))
	{
		return;
	}
	if (!bParam2 && !func_2026(iVar0))
	{
		return;
	}
	func_2028(2);
}

void func_1102()
{
	if (func_28(18))
	{
		return;
	}
	func_2029();
}

void func_1103()
{
	if (func_28(18))
	{
		return;
	}
	func_2030();
}

int func_1104(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

bool func_1105(int iParam0)
{
	return func_2031(iParam0, 1);
}

void func_1106()
{
	Global_1051439->f_3260 = get_frame_count();
}

bool func_1107(int iParam0)
{
	iVar0 = func_2032(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return func_2033(iVar0, 2);
}

bool func_1108(int iParam0)
{
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_active(iVar0))
	{
		return true;
	}
	return func_2034(iVar0, 64);
}

void func_1109()
{
	func_2035(512);
}

int func_1110()
{
	if (Local_4089.f_3393 == 195932838)
	{
		return 14000;
	}
	return 8000;
}

bool func_1111(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = iParam1 > iParam2;
	if (bVar0)
	{
		if (iParam0 >= iParam1 && iParam0 < iParam3)
		{
			return true;
		}
		else if (iParam0 < iParam2)
		{
			return true;
		}
	}
	else if (iParam0 >= iParam1 && iParam0 < iParam2)
	{
		return true;
	}
	return false;
}

void func_1112(int iParam0)
{
	if ((*Global_1134390)[&Global_1296859]->f_38.f_25 != iParam0)
	{
		(*Global_1134390)[&Global_1296859]->f_38.f_25 = iParam0;
	}
}

void func_1113(int iParam0)
{
	if (!func_2036(iParam0))
	{
		return;
	}
	Global_1139381->f_5693.f_10[iParam0] = get_frame_count();
}

bool func_1114()
{
	switch (Local_4089.f_3393)
	{
		case 1427578635:
			return true;
		default:
			break;
	}
	return false;
}

char* func_1115(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -1165569262:
		case 1539023636:
			return "";
		case 850213441:
			return "FETCH_CAMP_SETUP";
		case -260420884:
			return "FETCH_CAMP_RESUPPLY";
		case 1918154385:
			return "FETCH_CAMP_SELL";
		case 1884341302:
			return "FETCH_CAMP_RAID";
		case -468635158:
			return "FETCH_HIDEOUT";
		case 1717788883:
			return "FETCH_HIDEOUT";
		case -1777724963:
			return "FETCH_BOUNTY_BOARD";
		case 1427578635:
			if (iParam1 == 0)
			{
				if (func_2037(iParam2))
				{
					return "FETCH_PLAYER_BOUNTY_SHARD_START_MALE";
				}
				else
				{
					return "FETCH_PLAYER_BOUNTY_SHARD_START_FEMALE";
				}
			}
			else
			{
				return "FETCH_BOUNTY_BOARD";
			}
			break;
		case -1784925006:
		case -669677371:
		case -232478158:
		case 78055447:
		case 1532822440:
			return "FETCH_MOONSHINE";
		case 974227447:
			return "FETCH_MOONSHINE_SELL";
		case -1086711901:
		case -697789102:
			return "FETCH_NATURALIST_HIDEOUT";
		case 195932838:
			return "FETCH_NATURALIST_SIGHTING";
	}
	return "Invalid Type";
}

struct<8> func_1116(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case -468635158:
		case 1717788883:
			return func_2038(func_34(iParam1), uParam2);
		case -1784925006:
		case -1777724963:
		case -1086711901:
		case -697789102:
		case -669677371:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1427578635:
		case 1532822440:
		case 1884341302:
		case 1918154385:
			return func_590("");
	}
	return func_2039(func_34(iParam1));
}

char* func_1117(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_2040(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

struct<8> func_1118(int iParam0, int iParam1)
{
	bVar0 = func_28(56);
	return func_2042(&(Local_4089.f_3355), iParam0, iParam1, func_2041(), bVar0, Local_4089.f_3391);
}

var func_1119()
{
	return (*Global_1248240)[Local_4089.f_3391]->f_643.f_39;
}

char* func_1120(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_2040(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_1121()
{
	return "RDRO_GFH_Sounds";
}

char* func_1122()
{
	return "match_start";
}

var func_1123(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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

var func_1124(char* sParam0, char* sParam1, char[4] cParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = sParam4;
	Var0.f_2 = sParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = cParam2;
	uVar20 = _0x02bcc0fe9eba3529(&Var0, &Var13, iParam7, iParam8, iParam9);
	return uVar20;
}

void func_1125()
{
	func_2043(1018445913, 0, 0, -1, 255, 0, 0, -1);
}

void func_1126()
{
	func_1026(74, 0, 0, 0);
	if (func_2044(255, 0))
	{
		if (func_2045(Global_34, 1597320317))
		{
			func_2043(771452100, 0, 0, -1, 255, 0, 0, -1);
		}
		else
		{
			func_2043(-202408459, 0, 0, -1, 255, 0, 0, -1);
		}
		return;
	}
	iVar0 = func_2046();
	if (iVar0 != -1 && func_2047(8, iVar0) == player_id())
	{
		func_2043(-1045189398, 0, 0, -1, 255, 0, 0, -1);
	}
	else
	{
		func_2043(150102867, 0, 0, -1, 255, 0, 0, -1);
	}
}

void func_1127(bool bParam0, bool bParam1)
{
	bVar0 = !func_2048();
	bVar1 = func_2044(255, 0);
	bVar2 = func_1038(16, 1);
	bVar3 = func_451(262144, 1);
	bVar4 = func_451(524288, 1);
	iVar9 = Local_920[participant_id_to_int()]->f_93;
	iVar10 = Local_4089.f_3970;
	iVar11 = 0;
	iVar12 = 0;
	iVar13 = iVar9;
	iVar14 = func_182(255);
	func_2049(&iVar11, &iVar12);
	if (bVar1)
	{
		iVar8 = func_308(iVar9);
	}
	else if (func_311(iVar10))
	{
		iVar8 = func_308(iVar10);
		iVar13 = iVar10;
	}
	if (func_311(iVar13))
	{
		if (bVar1 && func_2050(iVar14, iVar13, iVar8, 1, 0))
		{
			if (func_773(8388608, iVar13))
			{
				bVar7 = true;
			}
			else if (func_2051(iVar13, iVar8))
			{
				bVar5 = true;
			}
			else if (func_773(32768, iVar13))
			{
				bVar6 = true;
			}
		}
	}
	if (bVar0)
	{
		func_2043(-1914129018, 0, 0, -1, 255, 0, 0, -1);
	}
	else if (!func_28(33))
	{
		func_2052();
	}
	else if (func_451(2048, 1) && func_1038(8, 0))
	{
		if (func_2053(player_id(), 1, 0, 1))
		{
			func_2043(185852499, 0, 0, -1, 255, 0, 0, -1);
		}
		else
		{
			func_2043(-1978425965, 0, 0, -1, 255, 0, 0, -1);
		}
	}
	else if (bVar6)
	{
		func_2043(-1495784316, 0, 0, -1, 255, 0, 0, -1);
	}
	else if (bVar7)
	{
		if (is_ped_on_mount(Global_34))
		{
			func_2043(-911442366, 0, 0, -1, 255, 0, 0, -1);
		}
		else
		{
			func_2043(1048484899, 0, 0, -1, 255, 0, 0, -1);
		}
	}
	else if (Local_13.f_1 == 4)
	{
		func_2054();
	}
	else if (bVar1)
	{
		if (bParam1 && func_104(262144, 255))
		{
			func_2043(-35141072, 0, 0, -1, 255, 0, 0, -1);
		}
		else if (bVar5)
		{
			func_2043(-1998108305, 0, 0, -1, 255, Local_4089.f_3393 == 1427578635, 0, -1);
		}
		else if (iVar11 > 0 && (((func_28(156) && func_473(4194304, 255)) && !func_2055(iVar8, 1)) || (Local_13.f_360 <= 0 && !func_28(156))))
		{
			func_2056(-523260675, -1214408885, iVar11 > 1, 0, 0, -1, 0);
		}
		else if (func_1650())
		{
			func_2043(-833400133, 0, 0, -1, 255, 0, 0, -1);
		}
		else if (bVar2 && !bVar4)
		{
			if (!bVar3)
			{
				func_2043(-1935496963, 0, 0, -1, 255, 0, 0, -1);
			}
			else
			{
				func_2043(-1823193900, 0, 0, -1, 255, 0, 0, -1);
			}
		}
		else
		{
			func_2059(iVar10, 0, func_2057(255), func_2058(iVar9, iVar14), 1219999181, -1666017451, 1133501446, 626132907, -417684936, -2145075786, 1240435393, -1655936607, 554860715, 1893496989, 554860715, 1893496989, 0);
		}
	}
	else if (func_451(64, 1))
	{
		func_2043(-2070033489, 0, 0, -1, 255, 0, 0, -1);
	}
	else if (Local_13.f_1 == 3)
	{
		func_2056(1780728993, 1652999486, Local_13.f_373 > 1, 0, 0, -1, 0);
	}
	else if ((Local_4089.f_4076 > 0 && !func_1983(255)) || Local_13.f_1 < 2)
	{
		if (func_28(17) && !func_855(0, 0))
		{
			func_2043(-1973718998, 0, 0, -1, 255, 0, 0, -1);
			return;
		}
		if (func_451(16384, 1))
		{
			if (!func_104(4096, 255) && !func_1855(2097152, -1))
			{
				func_2043(-283415090, 0, 0, -1, 255, 0, 0, -1);
				return;
			}
			else if (func_2060(8192))
			{
				func_2043(-923393831, 0, 0, -1, 255, 0, 0, -1);
				return;
			}
		}
		if (iVar11 > 0)
		{
			if ((func_28(156) && func_473(4194304, 255)) || (Local_13.f_360 <= 0 && !func_28(156)))
			{
				func_2056(-523260675, -1214408885, iVar11 > 1, 0, 0, -1, 0);
				return;
			}
		}
		else if (iVar12 > 0)
		{
			if ((func_28(156) && func_473(4194304, 255)) || (Local_13.f_360 <= 0 && !func_28(156)))
			{
				func_2043(947388015, 0, 0, -1, 255, 0, 0, -1);
				return;
			}
		}
		else if (bVar5)
		{
			func_2043(-1998108305, 0, 0, -1, 255, Local_4089.f_3393 == 1427578635, 0, -1);
			return;
		}
		if (!bVar1)
		{
			if (func_473(131072, 255))
			{
				func_2043(589899555, 0, 0, -1, 255, 0, 0, -1);
				return;
			}
			if (func_2061(1073741824) || func_473(1073741824, 255))
			{
				func_2043(-1728663715, 0, 0, -1, 255, 0, 0, -1);
				return;
			}
			if (func_451(32768, 1))
			{
				if (func_451(131072, 1))
				{
					func_2043(589899555, 0, 0, -1, 255, 0, 0, -1);
				}
				else
				{
					func_2043(-833400133, 0, 0, -1, 255, 0, 0, -1);
				}
				return;
			}
		}
		if (Local_13.f_1 < 2 && iVar14 == 0)
		{
			if (func_28(5))
			{
				func_2056(474018211, 1067832696, bParam0, 0, 0, -1, 0);
				return;
			}
			else if (func_28(6))
			{
				func_2043(-572457989, 0, 0, -1, 255, 0, 0, -1);
				return;
			}
			else if (func_1038(128, 0))
			{
				func_2043(-1973718998, 0, 0, -1, 255, 0, 0, -1);
				return;
			}
			else if (func_2062())
			{
				func_2063(&bVar16, &bVar5, &bParam1, &bVar15);
				if (bVar5)
				{
					func_2043(-1998108305, 0, 0, -1, 255, 0, 0, -1);
				}
				else if (bParam1)
				{
					func_2043(-35141072, 0, 0, -1, 255, 0, 0, -1);
				}
				else if (bVar15)
				{
					func_2043(1540251369, 0, 0, -1, 255, 0, 0, -1);
				}
				else if (!bVar16)
				{
					func_2043(-244139976, 0, 0, -1, 255, 0, 0, -1);
				}
				else
				{
					func_2043(1219999181, 0, 0, -1, 255, 0, 0, -1);
				}
				return;
			}
			else if (!func_451(4096, 1))
			{
				if (bParam0 || func_28(32))
				{
					bVar17 = true;
				}
				if (func_28(174) && func_28(31))
				{
					func_2056(859394273, -529956989, bVar17, 0, 1, -2, 0);
				}
				else
				{
					func_2056(1282475583, -584380614, bVar17, 0, 1, -2, 0);
				}
				return;
			}
		}
		if (Local_4089.f_4088 > 0)
		{
			func_2056(-181815262, 546249257, Local_4089.f_4088 > 1, 0, 0, -1, Local_4089.f_3393 == 1427578635);
		}
		else if (Local_4089.f_4089 > 0)
		{
			func_2056(-1064014193, -1204715008, Local_4089.f_4089 > 1, 0, 0, -1, Local_4089.f_3393 == 1427578635);
		}
		else if (Local_4089.f_4077 > 0)
		{
			if (iVar14 == 0)
			{
				func_2056(-116156475, 324698261, Local_4089.f_4077 > 1, 1, 0, -1, Local_4089.f_3393 == 1427578635);
			}
			else
			{
				func_2056(-1824126838, 804077079, Local_4089.f_4077 > 1, 1, 0, -1, Local_4089.f_3393 == 1427578635);
			}
		}
		else if (func_451(33554432, 1) || func_473(33554432, 255))
		{
			func_2043(1495404842, 0, 0, -1, 255, 0, 0, -1);
		}
		else if (Local_13.f_360 > 0)
		{
			if (iVar14 == 0)
			{
				func_2056(-1103220429, 904036698, bParam0, 0, 0, -1, 0);
			}
			else
			{
				func_2056(738484860, -1956505598, bParam0, 0, 0, -1, 0);
			}
		}
		else
		{
			if ((Local_4089.f_3971 != -1 && Local_13.f_82[Local_4089.f_3971]->f_1 == -584819812) && &Local_13.f_82[Local_4089.f_3971] != 5)
			{
				if (((is_ped_in_any_vehicle(Global_34, false) && get_vehicle_ped_is_in(Global_34, false) == get_vehicle_index_from_entity_index(func_308(Local_4089.f_3971))) && _0x4e76cb57222a00e5(Global_34) != -1) && !_0x660639bc60157048(Global_34, get_vehicle_ped_is_in(Global_34, false)))
				{
					func_2043(-1045189398, 0, 0, -1, 255, 0, 0, -1);
					return;
				}
			}
			if (func_29(Local_4089.f_3391, 8) && !func_28(5))
			{
				func_2056(1945207012, -514511256, Local_4089.f_4076 > 1, 0, 0, -1, 0);
			}
			else
			{
				func_2056(474018211, 1067832696, Local_4089.f_4076 > 1, 0, 0, -1, Local_4089.f_3393 == 1427578635);
			}
		}
	}
	else if (bParam1)
	{
		if (func_104(262144, 255))
		{
			func_2043(-35141072, 0, 0, -1, 255, 0, 0, -1);
		}
		else
		{
			func_2043(1540251369, 0, 0, -1, 255, 0, 0, -1);
		}
	}
	else
	{
		if (func_451(16384, 1))
		{
			if (!func_104(4096, 255) && !func_1855(2097152, -1))
			{
				func_2043(-283415090, 0, 0, -1, 255, 0, 0, -1);
				return;
			}
			else if (func_2060(8192))
			{
				func_2043(-923393831, 0, 0, -1, 255, 0, 0, -1);
				return;
			}
		}
		if (iVar11 > 0)
		{
			func_2056(-523260675, -1214408885, iVar11 > 1, 0, 0, -1, 0);
			return;
		}
		if (func_1650())
		{
			func_2043(-833400133, 0, 0, -1, 255, 0, 0, -1);
			return;
		}
		if (func_451(32, 1) && !func_473(4194304, 255))
		{
			if (Local_13.f_360 > 0)
			{
				func_2056(1561228116, -242617845, bParam0, 0, 0, -1, 0);
			}
			else
			{
				func_2056(-2052523324, -812658880, bParam0, 0, 0, -1, 0);
			}
		}
		else if ((!func_855(0, 0) && (func_28(17) || Local_13.f_359 <= 0)) && iVar14 == 0)
		{
			func_2043(-1973718998, 0, 0, -1, 255, 0, 0, -1);
		}
		else
		{
			if (func_1985() && Local_920[participant_id_to_int()]->f_94 == -1)
			{
				return;
			}
			if (func_2058(Local_920[participant_id_to_int()]->f_94, iVar14))
			{
				bVar18 = true;
			}
			func_2059(Local_920[participant_id_to_int()]->f_94, bVar3, bParam0, bVar18, -1449737909, -819090400, -825411241, -1724353130, -907804880, -1647080559, -502317261, 1914424626, 94591750, -1875182554, 94591750, -1875182554, -1823193900);
		}
	}
}

void func_1128(bool bParam0, bool bParam1)
{
	if (!func_2048())
	{
		func_2043(-1914129018, 0, 0, -1, 255, 0, 0, -1);
	}
	else if (!func_28(33))
	{
		func_2052();
	}
	else if ((func_1038(64, 0) && !func_2061(4096)) && Local_13.f_359 > 0)
	{
		func_2056(1282475583, -584380614, bParam0, 0, 0, -1, 0);
	}
	else if (bParam1 || ((Local_4089.f_3393 == 1427578635 && Local_13.f_1 != 5) && func_855(0, 0)))
	{
		if (Local_4089.f_3393 == 1427578635)
		{
			if (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id()
			{
				func_2043(-35141072, 0, 0, -1, 255, 0, 0, -1);
			}
			else
			{
				func_2043(-188404098, 0, 0, -1, (*Global_1237665)[Local_4089.f_3391]->f_16, 0, 0, -1);
			}
		}
		else if (func_104(262144, 255))
		{
			func_2043(-35141072, 0, 0, -1, 255, 0, 0, -1);
		}
		else
		{
			func_2043(1540251369, 0, 0, -1, 255, 0, 0, -1);
		}
	}
	else if (Local_13.f_1 == 3)
	{
		func_2056(1780728993, 1652999486, Local_13.f_373 > 1, 0, 0, -1, 0);
	}
	else if (func_28(161) && func_2064(22))
	{
		func_2043(-332681557, 0, 0, -1, 255, 0, 0, -1);
	}
	else if (((Local_13.f_357 > 0 && !func_855(0, 0)) && !func_1038(16777216, 1)) || Local_13.f_1 == 5)
	{
		if (Local_4089.f_3393 == 1427578635)
		{
			if (Local_13.f_1 == 5)
			{
				if (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id()
				{
					func_2043(-1482659930, 0, 0, -1, 255, 0, 0, -1);
				}
				else
				{
					func_2043(-1631076322, 0, 0, -1, (*Global_1237665)[Local_4089.f_3391]->f_16, 0, 0, -1);
				}
			}
			else if (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id()
			{
				func_2043(-1973718998, 0, 0, -1, 255, 0, 0, -1);
			}
			else
			{
				func_2043(300382116, 0, 0, -1, (*Global_1237665)[Local_4089.f_3391]->f_16, 0, 0, -1);
			}
		}
		else if (func_28(164))
		{
			if (Local_13.f_359 > 0)
			{
				if (func_2065())
				{
					func_2056(473219352, 1680709906, bParam0, 0, 0, -1, 0);
				}
				else
				{
					func_2056(-152130529, -1415388098, bParam0, 0, 0, -1, 0);
				}
			}
			else
			{
				func_2043(-1482659930, 0, 0, -1, 255, 0, 0, -1);
			}
		}
		else if (Local_13.f_359 > 0)
		{
			func_2043(-1973718998, 0, 0, -1, 255, 0, 0, -1);
		}
		else
		{
			if (Local_4089.f_3393 != -468635158)
			{
				func_1026(42, 0, 0, 0);
			}
			func_2043(-1482659930, 0, 0, -1, 255, 0, 0, -1);
		}
	}
	else if (func_2065())
	{
		func_2056(473219352, 1680709906, bParam0, 0, 0, -1, 0);
	}
	else
	{
		func_2056(-152130529, -1415388098, bParam0, 0, 0, -1, 0);
	}
}

void func_1129(bool bParam0)
{
	if (Local_4089.f_3393 == 1427578635)
	{
		if (player_id() == (*Global_1237665)[Local_4089.f_3391]->f_16)
		{
			func_2043(1957247807, 0, 0, -1, 255, 0, 0, -1);
		}
		else
		{
			func_2043(-757689562, 0, 0, -1, (*Global_1237665)[Local_4089.f_3391]->f_16, 0, 0, -1);
		}
		return;
	}
	if (func_2044(255, 0))
	{
		if (func_2066(Global_34))
		{
			func_2043(-1998108305, 0, 0, -1, 255, 0, 0, -1);
		}
		else
		{
			func_2043(-2052523324, 0, 0, -1, 255, 0, 0, -1);
		}
	}
	else if (Local_4089.f_4077 > 0)
	{
		func_2056(-757689562, 142469746, Local_4089.f_4077 > 1, 1, 0, -1, 0);
	}
	else if (func_451(64, 1))
	{
		func_2043(-116156475, 0, 0, -1, 255, 0, 0, -1);
	}
	else if (func_2067())
	{
		bParam0 = func_2068(268435456) > 1;
		func_2056(-244139976, -1172652235, bParam0, 0, 0, -1, 0);
	}
	else
	{
		func_2056(1957247807, 1729710179, bParam0, 0, 0, -1, 0);
	}
}

int func_1130(vector3 vParam0, bool bParam3, float fParam4, bool bParam5)
{
	iVar1 = -1;
	fVar3 = 9999f;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (bParam3 != 0 && Local_13.f_82[iVar0]->f_1 != bParam3)
		{
		}
		else if (&Local_13.f_82[iVar0] == 0)
		{
		}
		else if (bParam5 && !func_453(4096, iVar0))
		{
		}
		else
		{
			if (func_1131(iVar0))
			{
				vVar5 = { *Local_4089.f_3229.f_15[iVar0] };
			}
			else
			{
				iVar4 = func_308(iVar0);
				if (!does_entity_exist(iVar4))
				{
				}
				else if (func_1581(iVar4, 8))
				{
				}
				else
				{
					vVar5 = { get_entity_coords(iVar4, false, false) };
					if (func_67(vVar5))
					{
					}
					else
					{
						fVar2 = vdist(vVar5, vParam0);
						if (fVar2 > fParam4)
						{
						}
						else if (fVar2 < fVar3)
						{
							iVar1 = iVar0;
							fVar3 = fVar2;
						}
					}
				}
				iVar0++;
				return iVar1;
			}
		}
	}
}

bool func_1131(int iParam0)
{
	if (!func_311(iParam0))
	{
		return false;
	}
	if (Local_13.f_82[iParam0]->f_1 == -916820003 && func_1372(Local_13.f_82[iParam0]->f_5, 0))
	{
		iVar0 = Local_13.f_82[iParam0]->f_5;
		if ((((Local_4089.f_1983[iVar0]->f_1 == -1600622414 || Local_4089.f_1983[iVar0]->f_1 == -1767305912) || Local_4089.f_1983[iVar0]->f_1 == -1229553512) || Local_4089.f_1983[iVar0]->f_1 == -897439479) || Local_4089.f_1983[iVar0]->f_1 == 392881261)
		{
			return true;
		}
	}
	return false;
}

bool func_1132(int iParam0)
{
	return func_495(48, iParam0);
}

int func_1133()
{
	if (Local_4089.f_3355.f_23 <= 0)
	{
		return -1;
	}
	iVar3 = 5;
	uVar8 = 5;
	uVar14 = 1;
	iVar16 = -1;
	iVar17 = func_182(255);
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_23 - 1))
	{
		vVar4 = { func_1134(&(Local_4089.f_3355), iVar0) };
		iVar16 = func_2069(&(Local_4089.f_3355), iVar0);
		if (!func_67(vVar4) && (iVar16 == -1 || iVar16 == iVar17))
		{
			fVar7 = vdist(Global_35, vVar4);
			if (fVar7 < 200f)
			{
				iVar2 = func_2070(&uVar8, &uVar14, 5, vVar4, 20f, 0, 1, 1, -1, 1, 0, -1082130432, 0, 0);
				if (iVar2 <= iVar3)
				{
					if (iVar2 < iVar3)
					{
						iVar1 = 0;
						iVar3 = iVar2;
					}
					set_bit(&iVar1, iVar0);
				}
			}
		}
		iVar0++;
	}
	return func_797(iVar1, 32, 1, 0);
}

Vector3 func_1134(var uParam0, int iParam1)
{
	return func_604(uParam0, 1125306326, 0f, 0f, 0f, 1219097091, iParam1, 0, 0, 0, 0);
}

var func_1135(var uParam0, int iParam1)
{
	return func_605(uParam0, 1822601469, 0f, 1219097091, iParam1, 0, 0, 0, 0);
}

int func_1136(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7)
{
	if (func_1132(255))
	{
		func_2071(&(Global_1102219->f_3879));
		Global_1102219->f_3879.f_6 = { vParam0 };
		if (does_entity_exist(iParam7))
		{
			Global_1102219->f_3879.f_4 = iParam7;
			Global_1102219->f_3879.f_5 = 3;
		}
		else if (!func_67(vParam4))
		{
			Global_1102219->f_3879.f_1 = { vParam4 };
			Global_1102219->f_3879.f_5 = 2;
		}
		else
		{
			Global_1102219->f_3879 = fParam3;
			Global_1102219->f_3879.f_5 = 1;
		}
		func_2072(Global_1102219->f_3879, 36);
		func_99(4);
		func_101(48);
		return 1;
	}
	return 0;
}

void func_1137(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	Var0 = uParam0->f_4;
	Var0.f_2 = -62642921;
	Var0.f_1 = func_255(uParam0, Var0, Var0.f_2);
	switch (iParam2)
	{
		case 0:
			*uParam3 = 30f;
			*uParam4 = 75f;
			break;
		case 1:
			*uParam3 = 115f;
			*uParam4 = 170f;
			break;
	}
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		switch (iParam2)
		{
			case 0:
				func_1454(Var0, 556201401, uParam3, 0);
				func_1454(Var0, -177967, uParam4, 0);
				break;
			case 1:
				func_1454(Var0, 335386415, uParam3, 0);
				func_1454(Var0, -1166392453, uParam4, 0);
				break;
		}
		if (*uParam4 <= *uParam3)
		{
			*uParam4 = (*uParam3 + 1f);
		}
	}
}

int func_1138()
{
	if (func_28(118))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (Local_4089.f_2190[iVar0]->f_7 == 1729832790 && _does_volume_exist(&(Local_4089.f_2190[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1139()
{
	return Global_1896622->f_41;
}

int func_1140(int iParam0)
{
	if (iParam0 <= 0)
	{
		return 0;
	}
	get_posix_time(&iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar0 = ((((((iVar1 + iVar2) + iVar3) + iVar4) + iVar5) + iVar6) + get_random_int_in_range(0, 60000));
	iVar0 = (iVar0 % iParam0);
	return iVar0;
}

int func_1141(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		iParam0 = get_random_int_in_range(0, 17);
	}
	if (iParam0 == 8)
	{
		iParam0 = 9;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = get_random_int_in_range(0, 10 + 1);
			break;
		case 1:
			iVar0 = get_random_int_in_range(11, 30 + 1);
			break;
		case 2:
			iVar0 = get_random_int_in_range(31, 34 + 1);
			break;
		case 3:
			iVar0 = get_random_int_in_range(35, 38 + 1);
			break;
		case 4:
			iVar0 = get_random_int_in_range(39, 41 + 1);
			break;
		case 5:
			iVar0 = get_random_int_in_range(42, 61 + 1);
			break;
		case 6:
			iVar0 = get_random_int_in_range(53, 61 + 1);
			break;
		case 7:
			iVar0 = get_random_int_in_range(42, 52 + 1);
			break;
		case 8:
			iVar0 = get_random_int_in_range(62, 66 + 1);
			break;
		case 9:
			iVar0 = get_random_int_in_range(67, 81 + 1);
			break;
		case 10:
			iVar0 = get_random_int_in_range(82, 98 + 1);
			break;
		case 11:
			iVar0 = get_random_int_in_range(99, 112 + 1);
			break;
		case 12:
			iVar0 = get_random_int_in_range(113, 119 + 1);
			break;
		case 13:
			iVar0 = get_random_int_in_range(120, 122 + 1);
			break;
		case 14:
			iVar0 = get_random_int_in_range(123, 126 + 1);
			break;
		case 15:
			iVar0 = get_random_int_in_range(127, 134 + 1);
			break;
		case 16:
			iVar0 = get_random_int_in_range(135, 138 + 1);
			break;
	}
	iVar1 = iVar0;
	if (iVar1 == 8)
	{
		iVar1 = 5;
	}
	if (iVar1 == 55)
	{
		iVar1 = 45;
	}
	return iVar1;
}

int func_1142(int iParam0, var uParam1)
{
	if (!func_2073(iParam0))
	{
		return 0;
	}
	if (!_does_volume_exist((*Global_1887339)[iParam0]->f_4))
	{
		return 0;
	}
	uParam1->f_17.f_6 = { _0xf70f00013a62f866((*Global_1887339)[iParam0]->f_4) };
	if (get_ground_z_for_3d_coord(uParam1->f_17.f_6, &uVar0, false))
	{
		uParam1->f_17.f_6.f_2 = uVar0;
	}
	uParam1->f_17 = Global_1901947->f_50.f_1;
	uParam1->f_17.f_1 = Global_1901947->f_50.f_1;
	uParam1->f_17.f_2 = Global_1901947->f_50.f_1;
	vVar1 = { _0x3e2a25b2416dd67e((*Global_1887339)[iParam0]->f_4) };
	fVar4 = (((vVar1.x + vVar1.y) + vVar1.z) * 0.3333f);
	if (fVar4 < Global_1901947->f_50)
	{
		fVar4 = Global_1901947->f_50;
	}
	if (fVar4 > Global_1901947->f_50.f_1)
	{
		fVar4 = Global_1901947->f_50.f_1;
	}
	uParam1->f_17.f_3 = { 0f, 0f, 0f };
	uParam1->f_17 = fVar4;
	uParam1->f_17.f_1 = fVar4;
	uParam1->f_17.f_2 = fVar4;
	uParam1->f_17.f_9 = -432403087;
	return 1;
}

void func_1143(var uParam0, var uParam1, vector3 vParam2, float fParam5, int iParam6)
{
	iVar1 = func_182(255);
	iVar2 = Local_4089.f_1622[iParam6]->f_2[iVar0]->f_9;
	*uParam0 = { vParam2 };
	*uParam1 = { vParam2 };
	switch (iVar1)
	{
		case 0:
			iVar0 = 1;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (&Local_4089.f_3008[iVar0] != 404851220)
	{
		return;
	}
	if (iParam6 == -1)
	{
		return;
	}
	if (func_2058(iParam6, iVar0))
	{
		iVar6 = func_1041(iVar0, iParam6);
		if (!_does_volume_exist(&(Local_4089.f_2190[iVar6])))
		{
			return;
		}
		vVar3 = { _0xf70f00013a62f866(&(Local_4089.f_2190[iVar6])) };
	}
	else if (iVar2 != -1)
	{
		if (Local_4089.f_1622[iParam6]->f_2[iVar0]->f_10 == 886638433 && Local_409.f_1[iVar2]->f_1 == 294392114)
		{
			iVar7 = Local_4089.f_6[iVar2]->f_60;
			vVar3 = { get_entity_coords(iVar7, true, false) };
		}
	}
	else
	{
		return;
	}
	vVar8 = { func_2074(vParam2 - vVar3) };
	fVar11 = func_2075(iParam6);
	*uParam0 = { vParam2 + vVar8 * Vector(fVar11, fVar11, fVar11) };
	if (func_1070(*uParam0, *uParam1) > fParam5)
	{
		*uParam1 = { *uParam0 - vVar8 * Vector(fParam5, fParam5, fParam5) };
	}
}

bool func_1144(vector3 vParam0)
{
	if (func_28(118))
	{
		return true;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 <= 32)
	{
		if (Local_4089.f_2190[iVar1]->f_7 == 1729832790)
		{
			bVar0 = true;
			if (func_715(&(Local_4089.f_2190[iVar1]), vParam0))
			{
				return true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

Vector3 func_1145(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

Vector3 func_1146(vector3 vParam0, var uParam3)
{
	func_2076(Global_1296859->f_17, &vVar1, &uVar10);
	iVar0 = func_2077(vParam0);
	vVar4 = { func_2078(iVar0, &uVar11) };
	fVar12 = vdist(vParam0, vVar1);
	fVar13 = vdist(vParam0, vVar4);
	if (fVar12 < fVar13)
	{
		*uParam3 = uVar10;
		vVar7 = { vVar1 };
	}
	else
	{
		*uParam3 = uVar11;
		vVar7 = { vVar4 };
	}
	if (get_ground_z_for_3d_coord(vVar7, &uVar14, false))
	{
		vVar7.f_2 = uVar14;
	}
	return vVar7;
}

bool func_1147(int iParam0)
{
	if ((func_28(72) && does_entity_exist(Global_34)) && func_2079(Global_34))
	{
		return true;
	}
	if (!Global_1102219->f_3599.f_30.f_18 && !Global_1102219->f_3599.f_30.f_19)
	{
		return false;
	}
	if (iParam0 != -1)
	{
		iVar0 = func_308(iParam0);
		if (Local_13.f_82[iParam0]->f_1 == -584819812 && does_entity_exist(_0x2963b5c1637e8a27(get_vehicle_index_from_entity_index(iVar0))))
		{
			iVar1 = get_vehicle_index_from_entity_index(iVar0);
		}
		if (Local_13.f_82[iParam0]->f_1 == -1918493640 && Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_27 == -584819812)
		{
			iVar2 = func_310(Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_27, Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_28);
			if (does_entity_exist(iVar2) && does_entity_exist(_0x2963b5c1637e8a27(get_vehicle_index_from_entity_index(iVar2))))
			{
				iVar1 = get_vehicle_index_from_entity_index(iVar2);
			}
		}
		if (Local_13.f_82[iParam0]->f_1 == 886638433 && is_ped_in_any_vehicle(get_ped_index_from_entity_index(iVar0), false))
		{
			iVar1 = get_vehicle_ped_is_in(get_ped_index_from_entity_index(iVar0), false);
		}
		if (does_entity_exist(iVar1) && !is_this_model_a_boat(get_entity_model(iVar1)))
		{
			return true;
		}
	}
	if (func_29(Local_4089.f_3391, 8))
	{
		return true;
	}
	if (func_218(&(Local_4089.f_3355), 660835757, 0, -801742902, 0, 0, 0, 0, 0))
	{
		return true;
	}
	return false;
}

void func_1148(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_99(66);
		if (bParam1)
		{
			func_99(69);
		}
	}
	else
	{
		func_101(66);
		func_101(69);
	}
}

void func_1149()
{
	func_99(103);
}

int func_1150(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_1132(255))
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
		func_2080(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = { Param0 };
		func_2081(&(Global_1102219->f_3888));
		Global_1102219->f_3888 = { Param30 };
		Global_1102219->f_3919 = iParam39;
		Global_1102219->f_3920 = iParam40;
		Global_1102219->f_3921 = iParam41;
		func_2082(Global_1102219->f_3849, 36);
		func_2083(Global_1102219->f_3888, 36);
		func_101(48);
		return 1;
	}
	return 0;
}

void func_1151()
{
	if (!func_331(Local_4089.f_3391, 131072) && Local_4089.f_3393 == 1539023636)
	{
		return;
	}
	switch (func_182(255))
	{
		case 0:
			func_1026(1, 0, 0, 0);
			break;
		case 1:
			func_1026(2, 0, 0, 0);
			break;
	}
}

void func_1152()
{
	if (!func_104(32, 255) && func_120(67108864))
	{
		bVar0 = true;
	}
	if (bVar0 && func_1002(Local_4089.f_3391, 255) == 11)
	{
		func_1026(4, 1, 1, 0);
	}
	if (func_370(255, 0, 0, 0, 0) != -1)
	{
		return;
	}
	if (func_1827(7))
	{
		func_1026(7, 1, 0, 0);
	}
	if (func_1827(5))
	{
		func_1026(5, 1, 0, 0);
	}
	if (((bVar0 && func_182(255) == 1) && func_878(255, 1) >= 3) && Local_4089.f_3393 != 1427578635)
	{
		func_1026(3, 1, 0, 0);
	}
	if ((func_449(Local_4089.f_3393) && !func_519(9)) && !func_120(8192))
	{
		switch (Local_4089.f_3393)
		{
			case -1086711901:
			case -669677371:
			case -468635158:
				if (vdist(Global_35, func_792(Local_4089.f_3391)) < Local_4089.f_3355.f_31)
				{
					func_1026(9, 1, 0, 0);
				}
				break;
		}
	}
	if (((func_519(9) && !func_519(10)) && Local_4089.f_3393 == -669677371) && func_2084())
	{
		func_1026(10, 1, 0, 0);
	}
	if ((func_449(Local_4089.f_3393) && _0x72b2e00c9bac6789(&((*Global_1237665)[Local_4089.f_3391]->f_14), player_id())) && func_1002(Local_4089.f_3391, 255) == 3)
	{
		func_1026(6, 1, 0, 0);
	}
}

bool func_1153(int iParam0)
{
	if (iParam0 == 56 || iParam0 == 67)
	{
		return true;
	}
	return false;
}

void func_1154(int iParam0)
{
	if (!func_519(iParam0))
	{
		if (!func_2085(iParam0))
		{
			func_2086(iParam0, 1);
			return;
		}
		if (func_1828(Local_4089.f_2890.f_33))
		{
			return;
		}
		if (!func_2087(iParam0))
		{
			return;
		}
		func_2088(iParam0, &iVar0, &iVar1);
		if (func_2089(128) && func_330(Local_4089.f_3393, 1))
		{
			Local_4089.f_2890.f_33 = func_2090(func_307(255), &(Local_4089.f_3774[0]));
			func_2086(iParam0, 1);
			return;
		}
		bVar2 = func_2089(1);
		bVar3 = func_2089(2);
		bVar4 = func_2089(4);
		bVar5 = func_2089(8);
		bVar6 = func_2089(64);
		bVar7 = func_2089(4096);
		if (bVar3 || bVar4)
		{
			iVar9 = func_2091(func_2089(16));
			if (iVar9 == 255)
			{
				func_2086(iParam0, 1);
				return;
			}
			if (iVar9 == player_id())
			{
				if (func_2089(32))
				{
					func_2086(iParam0, 1);
					return;
				}
				iVar0 = iVar1;
				bVar8 = true;
			}
		}
		if (!func_2092(iVar0))
		{
			return;
		}
		if (Local_4089.f_2890.f_36 == iParam0 && !is_string_null_or_empty(&(Local_4089.f_2890.f_44)))
		{
			Var10 = { Local_4089.f_2890.f_44 };
			func_2093();
		}
		else
		{
			Var10 = { func_1118(iVar0, Local_4089.f_2890.f_41) };
		}
		if (bVar3 || bVar4)
		{
			if (bVar3)
			{
				sVar20 = func_2040(func_2094((*Global_1237665)[Local_4089.f_3391]->f_13), 1891514641);
			}
			iVar21 = -963477619;
			if (func_2089(2048))
			{
				iVar21 = -5208416;
			}
			if (func_2089(16))
			{
				sVar19 = func_1117(func_2095(), iVar21);
			}
			else
			{
				sVar19 = func_1117(get_player_name(iVar9), iVar21);
			}
		}
		if (bVar8 && bVar2)
		{
			if (bVar6)
			{
				sVar18 = _create_var_string(10, &Var10, sVar20, &(Local_4089.f_3774[0]), &(Local_4089.f_3774[1]));
			}
			else
			{
				sVar18 = _create_var_string(2, &Var10, &(Local_4089.f_3774[0]), &(Local_4089.f_3774[1]));
			}
		}
		else if (bVar4 && bVar2)
		{
			sVar18 = _create_var_string(10, &Var10, sVar19, &(Local_4089.f_3774[0]), &(Local_4089.f_3774[1]));
		}
		else if (bVar3 && bVar2)
		{
			sVar18 = _create_var_string(42, &Var10, sVar19, sVar20, &(Local_4089.f_3774[0]), &(Local_4089.f_3774[1]));
		}
		else if (bVar3)
		{
			sVar18 = _create_var_string(10, &Var10, sVar20);
		}
		else if (bVar4)
		{
			sVar18 = _create_var_string(10, &Var10, sVar19);
		}
		else if (bVar2)
		{
			sVar18 = _create_var_string(2, &Var10, &(Local_4089.f_3774[0]), &(Local_4089.f_3774[1]));
		}
		else if (bVar5)
		{
			sVar18 = _create_var_string(2, &Var10, Local_4089.f_3774.f_4);
		}
		else if (bVar7)
		{
			iVar23 = func_2096();
			Var24 = { func_2097(Local_13.f_82[iVar23]->f_1, Local_13.f_82[iVar23]->f_5, &uVar22) };
			if (iVar23 != -1)
			{
				sVar18 = _create_var_string(10, &Var10, &Var24);
			}
		}
		else
		{
			sVar18 = func_2098(&Var10);
		}
		Local_4089.f_2890.f_33 = func_2099(sVar18, 10000, 0, 0, 0, 1);
		if (func_2089(256))
		{
			iVar32 = 0;
			while (iVar32 <= 32)
			{
				if (Local_4089.f_2190[iVar32]->f_7 == -1141244111 && does_blip_exist(Local_4089.f_2190[iVar32]->f_3))
				{
					_blip_set_modifier(Local_4089.f_2190[iVar32]->f_3, 580546400);
				}
				iVar32++;
			}
		}
		iVar33 = func_2100(iParam0);
		if (iVar33 != 0)
		{
			func_317(func_478(iVar33), 1);
		}
		Local_4089.f_2890.f_41++;
		if (Local_4089.f_2890.f_41 < func_2101(iVar0))
		{
			func_1829();
			return;
		}
		Local_4089.f_2890.f_41 = 0;
		if (func_2089(512))
		{
			func_2102(iParam0, 1);
		}
		else
		{
			func_2086(iParam0, 1);
		}
	}
}

void func_1155()
{
	if ((func_879(Local_4089.f_3391, 255, 0, 0) && func_517(2)) && func_28(16))
	{
		func_192(2, 0, 0);
		return;
	}
	else if (Local_4089.f_2890.f_31 == 2)
	{
		func_192(23, 1, 0);
	}
}

bool func_1156()
{
	return func_495(1, 255);
}

void func_1157()
{
	if (func_517(21) && func_437(Local_4089.f_3391))
	{
		func_192(21, 0, 1);
		return;
	}
	else if ((func_517(22) && !func_437(Local_4089.f_3391)) && (Local_4089.f_2890.f_31 == 21 || Local_4089.f_2890.f_31 == 22))
	{
		func_192(22, 0, 1);
		return;
	}
	else if (func_517(10) && Local_13.f_1 == 3)
	{
		func_192(10, 0, 1);
		return;
	}
	else if (func_517(11) && Local_13.f_1 == 5)
	{
		func_192(11, 0, 1);
		return;
	}
	else if ((func_517(18) && (Local_13.f_359 <= 0 || func_28(29))) && func_121(262144, 0, 0))
	{
		func_192(18, 0, 1);
		return;
	}
	else if (func_517(15) && (func_120(16) || func_182(255) == 1))
	{
		func_192(15, 0, 1);
		return;
	}
	else if (func_517(7) && func_28(33))
	{
		func_192(7, 0, 1);
		return;
	}
	else if (func_2103())
	{
		func_192(8, 0, 1);
		return;
	}
	func_192(1, 0, 1);
	func_236(142, 1, 0);
}

void func_1158()
{
	func_192(1, 0, 1);
	if (func_517(21) && func_437(Local_4089.f_3391))
	{
		func_192(21, 0, 1);
		return;
	}
	else if ((func_517(22) && !func_437(Local_4089.f_3391)) && (Local_4089.f_2890.f_31 == 21 || Local_4089.f_2890.f_31 == 22))
	{
		func_192(22, 0, 1);
		return;
	}
}

void func_1159()
{
	if (func_28(142) && (audio_is_scripted_music_playing() || !func_517(1)))
	{
		if (func_517(21) && func_437(Local_4089.f_3391))
		{
			func_192(21, 0, 1);
			return;
		}
		else if ((func_517(22) && !func_437(Local_4089.f_3391)) && (Local_4089.f_2890.f_31 == 21 || Local_4089.f_2890.f_31 == 22))
		{
			func_192(22, 0, 1);
			return;
		}
		else if ((func_517(14) && func_451(262144, 1)) && !func_451(524288, 1))
		{
			func_192(14, 0, 1);
			return;
		}
		else if ((func_517(12) && func_2104(Local_4089.f_4091)) && func_1377(2, Local_4089.f_3138[Local_4089.f_4091]->f_4))
		{
			func_192(12, 0, 1);
			return;
		}
		else if ((func_517(9) && func_2104(Local_4089.f_4091)) && func_1377(2, Local_4089.f_3138[Local_4089.f_4091]->f_3))
		{
			func_192(9, 0, 1);
			return;
		}
		else if (func_2105())
		{
			func_192(20, 0, 1);
			return;
		}
		else if (func_2106())
		{
			func_192(19, 0, 1);
			func_236(75, 1, 0);
			func_2107(23);
			return;
		}
		else if (func_2108())
		{
			func_192(17, 0, 1);
			return;
		}
		else if (func_2109())
		{
			func_192(16, 0, 1);
			return;
		}
		else if (func_517(5) && Local_13.f_1 >= 2)
		{
			func_192(5, 0, 1);
			return;
		}
		else if (func_2110())
		{
			func_192(13, 0, 1);
			return;
		}
		else if ((func_517(6) && Local_13.f_1 >= 2) && func_120(16))
		{
			func_192(6, 0, 1);
			return;
		}
		else if (func_517(4) && Local_13.f_1 >= 2)
		{
			func_192(4, 0, 1);
			return;
		}
		else if (func_517(3) && func_120(65536))
		{
			func_192(3, 0, 1);
			return;
		}
		else if (func_517(7) && func_28(33))
		{
			func_192(7, 0, 1);
			func_2107(19);
			return;
		}
		else if (func_2103())
		{
			func_192(8, 0, 1);
			func_2107(19);
			return;
		}
	}
	func_192(1, 0, 1);
	func_236(142, 1, 0);
}

int func_1160()
{
	iVar1 = func_182(255);
	if (iVar1 != -1)
	{
		bVar0 = func_1093(8, iVar1);
	}
	if ((func_28(94) || bVar0) && !func_28(153))
	{
		if (func_28(34))
		{
			return 1;
		}
	}
	return 0;
}

int func_1161()
{
	if (!func_28(169))
	{
		return 0;
	}
	if (Local_13.f_357 <= 1)
	{
		return 0;
	}
	iVar0 = 1;
	if (Local_4089.f_1 >= 6)
	{
		if (Local_4089.f_4121 == Local_13.f_357)
		{
			iVar0 = 7;
		}
		else
		{
			iVar0 = 2;
		}
	}
	func_2111(Local_4089.f_3391, iVar0, 0, 0, 0, Local_4089.f_4121, Local_13.f_357, 1, 0, 1);
	return 1;
}

int func_1162()
{
	iVar0 = Local_4089.f_4105;
	if (Local_4089.f_1 < 6)
	{
		if (func_650(Local_13.f_354))
		{
			iVar0 = func_856();
			if (func_330(Local_4089.f_3393, 0) && func_2112(iVar0, Local_4089.f_4081))
			{
				func_2113((*Global_1248240)[Local_4089.f_3391]->f_584);
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (Local_13.f_2 == 1)
	{
		iVar0 = 0;
	}
	if (Local_4089.f_4105 != iVar0)
	{
		Local_4089.f_4105 = iVar0;
	}
	return iVar0;
}

void func_1163(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_2114(iParam0);
	if (Global_1248240->f_9294 == iParam0)
	{
		iVar0 = 0;
		if (bParam4)
		{
			iVar0 = -5208416;
		}
		func_2115(&(Global_1248240->f_9034), &(Global_1248240->f_9049), iParam1, 0, 30000, 0, iParam2, iVar0, !bParam3, bParam5, bParam5);
	}
}

bool func_1164(var uParam0)
{
	return uParam0->f_1 == 2;
}

struct<8> func_1165(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return func_590("");
	}
	iVar0 = func_904(uParam0, iParam1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_905(uParam0, iParam1, iVar2);
		if (iVar1 != 1862527378 && iVar1 != 1755233584)
		{
		}
		else
		{
			return func_2116(uParam0, iParam1, iVar2);
		}
		iVar2++;
	}
	return func_590("");
}

struct<8> func_1166(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return func_590("");
	}
	iVar0 = func_904(uParam0, iParam1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_905(uParam0, iParam1, iVar2);
		if (iVar1 != 1862527378 && iVar1 != 1755233584)
		{
		}
		else
		{
			return func_1702(uParam0, iParam1, iVar2);
		}
		iVar2++;
	}
	return func_590("");
}

bool func_1167(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (iParam3 != -1 && !bParam4)
	{
		if (func_1701(uParam0, uParam0->f_4, iParam1, 122916566, iParam3, 0, 1) && func_1701(uParam0, uParam0->f_4, iParam1, 1994289620, iParam2, 0, 0))
		{
			func_2117(uParam0, iParam1, iParam5);
			return true;
		}
	}
	if (uParam0->f_24 > 0 && !bParam4)
	{
		if (func_1701(uParam0, uParam0->f_4, iParam1, 1994289620, iParam2, 0, 1))
		{
			func_2117(uParam0, iParam1, iParam5);
			return true;
		}
	}
	if (func_1701(uParam0, uParam0->f_4, iParam1, -1816532073, 0, 0, 1) && func_1701(uParam0, uParam0->f_4, iParam1, 559082023, iParam2, 0, 0))
	{
		func_2117(uParam0, iParam1, iParam5);
		return true;
	}
	return false;
}

var func_1168(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, char* sParam11)
{
	if (!bParam8 && _0xc17f69e1418cd11f(12) != 0)
	{
		return 0;
	}
	bVar0 = iParam1 != 255;
	bVar1 = iParam2 != false;
	Var2 = { func_1118(iParam0, -1) };
	if (is_string_null_or_empty(sParam10))
	{
		sParam10 = 0;
	}
	if (is_string_null_or_empty(sParam11))
	{
		sParam11 = 0;
	}
	if (bVar0 && (!bVar1 || network_is_player_active(iParam1)))
	{
		if (!network_is_player_active(iParam1))
		{
			if (iParam5 != 0)
			{
				Var2 = { func_1118(iParam5, -1) };
				if (bParam9)
				{
					return func_2118(_create_var_string(2, &Var2), -2, sParam10, sParam11, 0, 1);
				}
				else
				{
					return func_2119(_create_var_string(2, &Var2), 1105014447, -2, sParam10, sParam11, 0, 1);
				}
			}
			return 0;
		}
		if (iParam1 == player_id())
		{
			if (iParam6 == 0)
			{
				return 0;
			}
			Var2 = { func_1118(iParam6, -1) };
			sVar10 = _create_var_string(2, &Var2);
		}
		else
		{
			if (iParam3 == 0)
			{
				iParam3 = func_2120(iParam1, 1, -1, 0);
			}
			sVar10 = _create_var_string(10, &Var2, func_1117(get_player_name(iParam1), iParam3));
		}
	}
	else if (bVar1)
	{
		if (iParam2 == 0 || _0x149a2751ab66ac02(iParam2) <= 0)
		{
			if (iParam5 != 0)
			{
				Var2 = { func_1118(iParam5, -1) };
				if (bParam9)
				{
					return func_2118(_create_var_string(2, &Var2), -2, sParam10, sParam11, 0, 1);
				}
				else
				{
					return func_2119(_create_var_string(2, &Var2), 1105014447, -2, sParam10, sParam11, 0, 1);
				}
			}
			return 0;
		}
		if (iParam2 == _0x901e0dc25080c8b9(player_id()))
		{
			if (iParam7 == 0)
			{
				return 0;
			}
			Var2 = { func_1118(iParam7, -1) };
			sVar10 = _create_var_string(2, &Var2);
		}
		else
		{
			if (iParam3 == 0)
			{
				iParam3 = func_2120(_0x4be6c13a45cca8ec(iParam2), 1, -1, 0);
			}
			sVar10 = _create_var_string(10, &Var2, func_2040(func_2094(iParam2), iParam3));
		}
	}
	else if (bParam4)
	{
		if (iParam5 != 0)
		{
			Var2 = { func_1118(iParam5, -1) };
			if (bParam9)
			{
				return func_2118(_create_var_string(2, &Var2), -2, sParam10, sParam11, 0, 1);
			}
			else
			{
				return func_2119(_create_var_string(2, &Var2), 1105014447, -2, sParam10, sParam11, 0, 1);
			}
		}
		return 0;
	}
	else if (bParam9)
	{
		return func_2118(_create_var_string(2, &Var2), -2, sParam10, sParam11, 0, 1);
	}
	else
	{
		return func_2119(_create_var_string(2, &Var2), 1105014447, -2, sParam10, sParam11, 0, 1);
	}
	if (bParam9)
	{
		return func_2118(sVar10, -2, sParam10, sParam11, 0, 1);
	}
	return func_2119(sVar10, 1105014447, -2, sParam10, sParam11, 0, 1);
}

void func_1169(int iParam0)
{
	iVar0 = network_get_player_index(int_to_participantindex(iParam0));
	iVar1 = iVar0;
	iVar2 = get_ped_relationship_group_hash(get_player_ped(iVar0));
	if (iVar2 != func_2121(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0))))
	{
		return;
	}
	iVar3 = func_182(iParam0);
	iVar4 = func_2122(iParam0, iVar3);
	if (Local_4089.f_3832[iVar1]->f_1 != iVar2 || &Local_4089.f_3832[iVar1] != iVar4)
	{
		bVar5 = true;
	}
	Local_4089.f_3832[iVar1]->f_1 = iVar2;
	Local_4089.f_3832[iVar1] = iVar4;
	if (!bVar5)
	{
		return;
	}
	if (func_2123(iVar1, 1))
	{
		func_2124(Local_4089.f_3391, 2, iVar2, 3);
		func_2124(Local_4089.f_3391, 2, iVar2, 4);
		func_2124(Local_4089.f_3391, 2, iVar2, 13);
		func_2124(Local_4089.f_3391, 2, iVar2, 7);
		func_2124(Local_4089.f_3391, 6, iVar2, 5);
		func_2124(Local_4089.f_3391, 6, iVar2, 6);
		func_2124(Local_4089.f_3391, 6, iVar2, 8);
		func_2124(Local_4089.f_3391, 6, iVar2, 9);
		func_2124(Local_4089.f_3391, 6, iVar2, 10);
		func_2124(Local_4089.f_3391, 2, iVar2, 18);
		func_2124(Local_4089.f_3391, 2, iVar2, 19);
	}
	else if (func_2123(iVar1, 8))
	{
		func_2124(Local_4089.f_3391, 0, iVar2, 3);
		func_2124(Local_4089.f_3391, 0, iVar2, 4);
		func_2124(Local_4089.f_3391, 0, iVar2, 13);
		func_2124(Local_4089.f_3391, 0, iVar2, 7);
		func_2124(Local_4089.f_3391, 2, iVar2, 8);
		func_2124(Local_4089.f_3391, 0, iVar2, 9);
		func_2124(Local_4089.f_3391, 0, iVar2, 10);
		func_2124(Local_4089.f_3391, 0, iVar2, 5);
		func_2124(Local_4089.f_3391, 2, iVar2, 6);
		func_2124(Local_4089.f_3391, 0, iVar2, 18);
		func_2124(Local_4089.f_3391, 4, iVar2, 19);
	}
	else if (func_2123(iVar1, 4))
	{
		func_2124(Local_4089.f_3391, 6, iVar2, 3);
		func_2124(Local_4089.f_3391, 6, iVar2, 4);
		func_2124(Local_4089.f_3391, 2, iVar2, 5);
		func_2124(Local_4089.f_3391, 2, iVar2, 6);
		func_2124(Local_4089.f_3391, 6, iVar2, 13);
		func_2124(Local_4089.f_3391, 6, iVar2, 7);
		func_2124(Local_4089.f_3391, 2, iVar2, 8);
		func_2124(Local_4089.f_3391, 2, iVar2, 9);
		func_2124(Local_4089.f_3391, 6, iVar2, 10);
		func_2124(Local_4089.f_3391, 2, iVar2, 14);
	}
	else if (func_2123(iVar1, 2))
	{
		func_2124(Local_4089.f_3391, 4, iVar2, 3);
		func_2124(Local_4089.f_3391, 4, iVar2, 4);
		func_2124(Local_4089.f_3391, 2, iVar2, 5);
		func_2124(Local_4089.f_3391, 2, iVar2, 6);
		func_2124(Local_4089.f_3391, 4, iVar2, 13);
		func_2124(Local_4089.f_3391, 4, iVar2, 7);
		func_2124(Local_4089.f_3391, 2, iVar2, 8);
		func_2124(Local_4089.f_3391, 2, iVar2, 9);
	}
	if (func_2123(iVar1, 32))
	{
		func_2124(Local_4089.f_3391, 2, iVar2, 18);
		func_2124(Local_4089.f_3391, 4, iVar2, 19);
		func_2124(Local_4089.f_3391, 4, iVar2, 10);
	}
	else if (func_2123(iVar1, 64))
	{
		func_2124(Local_4089.f_3391, 6, iVar2, 18);
		func_2124(Local_4089.f_3391, 6, iVar2, 19);
		func_2124(Local_4089.f_3391, 6, iVar2, 10);
	}
	else if (func_2123(iVar1, 128))
	{
		func_2126(2, func_2125(Local_4089.f_3391, 18), iVar2, 1);
		func_2126(6, iVar2, func_2125(Local_4089.f_3391, 18), 1);
		func_2126(0, func_2125(Local_4089.f_3391, 10), iVar2, 1);
		func_2126(6, iVar2, func_2125(Local_4089.f_3391, 10), 1);
		func_2126(0, func_2125(Local_4089.f_3391, 19), iVar2, 1);
		func_2126(6, iVar2, func_2125(Local_4089.f_3391, 19), 1);
	}
	if (func_2123(iVar1, 256))
	{
		func_2124(Local_4089.f_3391, 6, iVar2, 16);
		func_2124(Local_4089.f_3391, 6, iVar2, 17);
	}
	else if (func_2123(iVar1, 1024))
	{
		func_2124(Local_4089.f_3391, 0, iVar2, 16);
		func_2124(Local_4089.f_3391, 2, iVar2, 17);
	}
	else if (func_2123(iVar1, 512))
	{
		func_2124(Local_4089.f_3391, 2, iVar2, 16);
		func_2124(Local_4089.f_3391, 2, iVar2, 17);
	}
	if (func_2123(iVar1, 16))
	{
		func_2124(Local_4089.f_3391, 6, iVar2, 2);
	}
	if (func_2123(iVar1, 2048))
	{
		func_2124(Local_4089.f_3391, 4, iVar2, 21);
	}
	else
	{
		func_2124(Local_4089.f_3391, 2, iVar2, 21);
	}
}

bool func_1170(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = player_id();
	}
	return (func_166(iParam0, 1) && !func_166(iParam0, 2));
}

bool func_1171(int iParam0, bool bParam1)
{
	if (!func_372(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_148(32768, iParam0))
		{
			return false;
		}
	}
	if (func_182(iParam0) == 0)
	{
		return false;
	}
	fVar0 = Local_920[iParam0]->f_98;
	if (func_104(32, iParam0) && func_182(iParam0) == 1)
	{
		if (fVar0 < 200f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_1172(int iParam0, bool bParam1)
{
	if (Local_13.f_1 < 2)
	{
		return false;
	}
	if (func_307(iParam0) != 404851220)
	{
		return false;
	}
	if (bParam1)
	{
		if (func_148(32768, iParam0))
		{
			return false;
		}
	}
	iVar0 = Local_920[iParam0]->f_93;
	iVar1 = Local_920[iParam0]->f_93;
	if (func_311(iVar0))
	{
		iVar4 = iVar0;
		bVar2 = true;
	}
	else if (func_311(iVar1))
	{
		iVar4 = iVar1;
		bVar3 = true;
	}
	if (!bVar2 && !bVar3)
	{
		return false;
	}
	iVar5 = func_308(iVar4);
	if (!does_entity_exist(iVar5))
	{
		return false;
	}
	if (!does_blip_exist(get_blip_from_entity(iVar5)))
	{
		return false;
	}
	iVar6 = get_player_ped(network_get_player_index(int_to_participantindex(iParam0)));
	iVar7 = Local_13.f_82[iVar4]->f_1;
	if (iVar7 == 886638433)
	{
		if (Local_409.f_1[Local_13.f_82[iVar4]->f_5]->f_1 == 1461000558)
		{
			iVar8 = get_ped_index_from_entity_index(func_308(iVar4));
			if (func_2127(iVar6, iVar8, 0))
			{
				return true;
			}
		}
		return false;
	}
	else if (iVar7 == -584819812)
	{
		if (bVar2)
		{
			return true;
		}
		else
		{
			iVar9 = get_vehicle_index_from_entity_index(func_308(iVar4));
			if (func_2128(iVar6, iVar9, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	else if (iVar7 == -1918493640)
	{
		if (bVar2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar7 == -916820003)
	{
		switch (Local_4089.f_1983[Local_13.f_82[iVar4]->f_5]->f_1)
		{
			case -948149899:
			case -463039475:
			case 102628183:
				if (bVar2)
				{
					return true;
				}
				else
				{
					return false;
				}
				break;
		}
	}
	return false;
}

void func_1173(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Local_4089.f_3008[1]->f_1 == 0)
	{
		return;
	}
	if (_0x81fb74c83c2ed69f(iParam1))
	{
		return;
	}
	if (!bParam4)
	{
		return;
	}
	if (!bParam5)
	{
		return;
	}
	if ((iParam2 == 1 && !bParam3) && !func_104(32, iParam0))
	{
		return;
	}
	func_2129(iParam1);
}

void func_1174()
{
	if (!func_28(47) && func_2130())
	{
		func_2131(Local_4089.f_3391, 6, 3, 11);
		func_2131(Local_4089.f_3391, 6, 3, 12);
		func_2131(Local_4089.f_3391, 6, 4, 11);
		func_2131(Local_4089.f_3391, 6, 4, 12);
		func_2131(Local_4089.f_3391, 6, 13, 11);
		func_2131(Local_4089.f_3391, 6, 13, 12);
		func_2131(Local_4089.f_3391, 6, 13, 8);
		func_2131(Local_4089.f_3391, 6, 13, 9);
		func_2131(Local_4089.f_3391, 6, 13, 10);
		func_2132(6, func_2125(Local_4089.f_3391, 13));
		func_236(47, 1, 0);
	}
}

bool func_1175(int iParam0, bool bParam1, bool bParam2)
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

void func_1176(int iParam0)
{
	_0x31010318ba9897ac(&(Global_1071686->f_28345), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28347), iParam0);
	if (!func_238(iParam0))
	{
		func_584(iParam0, 5, 1, 1, 0, 0);
	}
}

void func_1177(int iParam0, int iParam1)
{
	if (!_0x72b2e00c9bac6789(&(Local_4089.f_2890.f_76), iParam0))
	{
		func_2133(iParam0, iParam1);
		_0x31010318ba9897ac(&(Local_4089.f_2890.f_76), iParam0);
	}
}

void func_1178()
{
	if (func_104(4, 255))
	{
		return;
	}
	switch (Local_4089.f_2)
	{
		case 0:
			func_2134();
			break;
		case 1:
			func_2135();
			break;
		case 2:
			func_2136();
			break;
		case 3:
			func_2137();
			break;
		case 4:
			func_2138();
			break;
		case 5:
			func_2139();
			break;
		case 6:
			func_2140();
			break;
		case 7:
			func_2141();
			break;
		case 8:
			func_2142();
			break;
		case 9:
			func_31(0);
			break;
		case 10:
			func_2143();
			break;
		case 11:
			func_2144();
			break;
		case 12:
			func_2145();
			break;
	}
}

int func_1179()
{
	return Local_4089.f_3355.f_26;
}

bool func_1180(int iParam0, int iParam1)
{
	return func_146((*Global_1237665)[iParam0]->f_25, iParam1);
}

bool func_1181(int iParam0, int iParam1, vector3 vParam2)
{
	vVar0 = { func_736(iParam0, iParam1) };
	fVar3 = vdist(vVar0, vParam2);
	return fVar3 > 2500f;
}

bool func_1182(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (func_2146((*Global_1137457)[iParam0], 3))
	{
		return true;
	}
	return false;
}

int func_1183()
{
	return func_1450((*Global_1237665)[Local_4089.f_3391]->f_21.f_2);
}

int func_1184(int iParam0)
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

bool func_1185(struct<2> Param0, bool bParam2)
{
	if (!func_106(Param0))
	{
		return false;
	}
	func_2147(bParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(bParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(bParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(bParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(bParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(bParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(bParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(bParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

int func_1186(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_80(Local_13.f_82[iVar0]->f_6, iParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1187(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_13.f_375;
	}
	return Local_13.f_198[iParam0]->f_1;
}

int func_1188()
{
	iVar0 = func_2148(0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_1041(Local_13.f_82[iVar0]->f_3, iVar0);
	if (iVar1 < 0)
	{
		return -1;
	}
	return Local_4089.f_2190[iVar1]->f_16;
}

bool func_1189(int iParam0)
{
	if ((func_2149(iParam0) || func_2150(iParam0)) || func_2151(iParam0))
	{
		return true;
	}
	return false;
}

int func_1190(int iParam0)
{
	iVar0 = func_2152(iParam0);
	if (!func_1470(iVar0))
	{
		return 0;
	}
	return (*Global_1248240)[Local_4089.f_3391]->f_643[iVar0]->f_3;
}

int func_1191(int iParam0)
{
	return &(Global_1248240->f_8903.f_16[iParam0]);
}

bool func_1192(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_1193(int iParam0)
{
	if (!func_1192(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_3009[iParam0]);
}

int func_1194(int iParam0, bool bParam1)
{
	if (!func_1192(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_2153(iParam0);
		if (func_662(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_467(255);
			}
			else
			{
				iVar1 = func_319(iVar0, func_318(1), -1990194462, 1, 0, 0);
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
		iVar0 = func_2154(iParam0);
		if (func_662(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = _0xdb438cc9bc6f4022();
			}
			else
			{
				iVar1 = func_319(iVar0, func_318(1), -1990194462, 1, 0, 0);
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

bool func_1195(int iParam0, bool bParam1)
{
	return func_80((*Global_1248240)[Local_4089.f_3391]->f_19[bParam1]->f_84, iParam0);
}

int func_1196(int iParam0)
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

int func_1197(int iParam0)
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

void func_1198(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_2155();
	Global_1298378->f_1.f_2 = iParam0;
	Global_1298378->f_1.f_3 = iParam1;
	Global_1298378->f_1.f_4 = iParam2;
	Global_1298378->f_1.f_1 = iParam3;
}

int func_1199()
{
	return Global_1102219->f_3672;
}

int func_1200()
{
	return -1429099402;
}

void func_1201()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (does_entity_exist(&(Local_4089.f_3779.f_40[iVar0])) && does_entity_belong_to_this_script(&(Local_4089.f_3779.f_40[iVar0]), true))
		{
			delete_entity(Local_4089.f_3779.f_40[iVar0]);
		}
		Local_4089.f_3779.f_40[iVar0] = 0;
		Local_4089.f_3779.f_40[iVar0]->f_1 = 0;
		iVar0++;
	}
}

char* func_1202()
{
	return uVar0;
}

char* func_1203(bool bParam0)
{
	iVar0 = func_484(bParam0);
	switch (iVar0)
	{
		case 1333555484:
			return "TRADAUD";
	}
	return "";
}

bool func_1204(bool bParam0, int iParam1, char* sParam2, var uParam3, char[4] cParam4)
{
	iVar1 = func_2156(bParam0, iParam1, &bVar0);
	if (iVar1 != -1 && !bVar0)
	{
		return false;
	}
	if (iVar1 == -1)
	{
		if (!func_2157(bParam0))
		{
			return false;
		}
		*sParam2 = { func_2158() };
		*uParam3 = { func_2159() };
		*cParam4 = { func_2160(&(Local_4089.f_3355), bParam0, iParam1, 0, 0) };
	}
	else
	{
		*sParam2 = { func_2161(&(Local_4089.f_3355), bParam0, iParam1, 1, iVar1) };
		*uParam3 = { func_2162(&(Local_4089.f_3355), bParam0, iParam1, 1, iVar1) };
		*cParam4 = { func_2160(&(Local_4089.f_3355), bParam0, iParam1, 1, iVar1) };
	}
	return !is_string_null_or_empty(sParam2);
}

void func_1205(var uParam0, var uParam1, var uParam2)
{
	_0x6d4d25c2137ff511(uParam0, uParam1, uParam2);
}

void func_1206(var uParam0, var uParam1, var uParam2)
{
	_0x2412216fcc7b4e3e(uParam0);
}

void func_1207(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_1208(var uParam0, bool bParam1)
{
	return func_591(uParam0, -433267846, -1, 1582293998, bParam1, 0, 0, 0, 0, 0);
}

int func_1209(var uParam0, bool bParam1)
{
	return func_591(uParam0, 1587093128, -455129387, 1582293998, bParam1, 0, 0, 0, 0, 0);
}

int func_1210(bool bParam0)
{
	iVar0 = func_484(bParam0);
	switch (iVar0)
	{
		case -1480923443:
		case -848225752:
		case -574721081:
		case 166345036:
		case 1333555484:
			return 2;
		case -470336421:
			return 3;
		case 1045271718:
			return 3;
		case 1920334242:
			return 3;
		case -252256799:
			return 3;
		case -1935695367:
			return 3;
	}
	return func_2163(&(Local_4089.f_3355), bParam0);
}

bool func_1211(int iParam0)
{
	switch (iParam0)
	{
		case -1935695367:
		case 456446907:
		case 1045271718:
		case 1920334242:
			return true;
	}
	return false;
}

int func_1212(var uParam0, bool bParam1)
{
	return func_218(uParam0, -1140750090, 0, 1582293998, bParam1, 0, 0, 0, 0);
}

int func_1213(var uParam0, bool bParam1)
{
	return func_886(uParam0, -603364858, 0, 1582293998, bParam1, 0, 0, 0, 0);
}

bool func_1214(int iParam0)
{
	switch (iParam0)
	{
		case -252256799:
			return true;
	}
	return false;
}

int func_1215(var uParam0, bool bParam1)
{
	return func_218(uParam0, 1641248783, 0, 1582293998, bParam1, 0, 0, 0, 0);
}

int func_1216(var uParam0, bool bParam1)
{
	return func_218(uParam0, 2075484095, 0, 1582293998, bParam1, 0, 0, 0, 0);
}

bool func_1217(bool bParam0)
{
	switch (func_484(bParam0))
	{
		case 456446907:
		case 1045271718:
		case 1920334242:
			return false;
	}
	return func_2164(&(Local_4089.f_3355), bParam0);
}

int func_1218(var uParam0, bool bParam1)
{
	return func_218(uParam0, 495694713, 1, 1582293998, bParam1, 0, 0, 0, 0);
}

bool func_1219(bool bParam0)
{
	if (func_157(bParam0))
	{
		return false;
	}
	iVar0 = func_484(bParam0);
	switch (iVar0)
	{
		case -1935695367:
		case -252256799:
		case 456446907:
		case 1045271718:
		case 1920334242:
			return false;
	}
	return true;
}

int func_1220(var uParam0, bool bParam1)
{
	return func_591(uParam0, 1799118079, -1, 1582293998, bParam1, 0, 0, 0, 0, 0);
}

int func_1221(var uParam0, bool bParam1)
{
	Var0 = uParam0->f_4;
	Var0.f_2 = -1666684152;
	Var0.f_1 = func_255(uParam0, Var0, Var0.f_2);
	Var0.f_3 = bParam1;
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

void func_1222(bool bParam0, int iParam1)
{
	(*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_75 = iParam1;
}

int func_1223(bool bParam0)
{
	return (*Global_1248240)[Local_4089.f_3391]->f_19[bParam0]->f_75;
}

int func_1224(var uParam0, bool bParam1, int iParam2)
{
	return func_591(uParam0, -433267846, 0, 1582293998, bParam1, 0, -813720022, iParam2, 0, 0);
}

int func_1225(var uParam0, bool bParam1, int iParam2)
{
	return func_591(uParam0, -1901782497, 0, 1582293998, bParam1, 0, -813720022, iParam2, 0, 0);
}

int func_1226(var uParam0, bool bParam1, int iParam2)
{
	return func_886(uParam0, 1921937857, -1, 1582293998, bParam1, 0, -813720022, iParam2, 0);
}

int func_1227(var uParam0, bool bParam1, int iParam2)
{
	return func_886(uParam0, -596181622, -1, 1582293998, bParam1, 0, -813720022, iParam2, 0);
}

bool func_1228(int iParam0)
{
	return (func_2165(iParam0) || func_2166(iParam0));
}

int func_1229(var uParam0, bool bParam1, int iParam2)
{
	return func_218(uParam0, 1688133165, 0, 1582293998, bParam1, 0, -813720022, iParam2, 0);
}

int func_1230(int iParam0)
{
	switch (iParam0)
	{
		case 477970332:
			return 1324229833;
		case 401658241:
			return 1776830298;
		case -428150648:
			return 506419716;
		case 661336845:
			return -2091093137;
		case 448485414:
			return -1387380597;
		case -1426507703:
			return -150015663;
		case -2067454306:
			return -2047561093;
		default:
			break;
	}
	return 0;
}

bool func_1231()
{
	bVar0 = _unlock_is_unlocked(1212196772);
	bVar1 = _unlock_is_unlocked(-400403560);
	if (bVar0 && bVar1)
	{
		return false;
	}
	if (bVar0 && Local_4089.f_3393 == -232478158)
	{
		return true;
	}
	if (bVar1 && Local_4089.f_3393 == 1532822440)
	{
		return true;
	}
	return false;
}

void func_1232(int iParam0)
{
	if (!func_2167(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_1233(int iParam0)
{
	if (!func_2167(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_1234(int iParam0)
{
	if (iParam0->f_11 >= 0)
	{
		if (!_0x84848e1c0fc67dbb(iParam0->f_11))
		{
			_0x3210bcb36af7621b(iParam0->f_11);
		}
		release_sound_id(iParam0->f_11);
		iParam0->f_11 = -1;
	}
}

void func_1235()
{
	_0x9d746964e0cf2c5f(func_2168(), func_2169());
	_0x9d746964e0cf2c5f(func_2170(), func_2169());
	_0x9d746964e0cf2c5f(func_2171(), func_2169());
	_0x9d746964e0cf2c5f(func_2172(), func_2169());
	_0x9d746964e0cf2c5f(func_2173(), func_2174());
	_0x9d746964e0cf2c5f(func_2175(), func_2176());
}

void func_1236(int iParam0)
{
	if (_uiflowblock_is_loaded(iParam0->f_3))
	{
		_uiflowblock_release(&(iParam0->f_3));
	}
	if (_uistatemachine_exists(1546991729))
	{
		_uistatemachine_destroy(1546991729);
	}
}

void func_1237(int iParam0)
{
	if (Global_1903133->f_1 != iParam0)
	{
		Global_1903133->f_1 = iParam0;
	}
}

void func_1238(int iParam0)
{
	Global_1903133 = iParam0;
}

char* func_1239()
{
	return "MP_OutofAreaDirectional";
}

int func_1240(var uParam0, vector3 vParam1, var uParam4, var uParam5)
{
	vParam1.f_2 = 1929549431;
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vParam1.f_1), &vParam1))
	{
		return _datafile_get_num_children(vParam1.x, vParam1.y);
	}
	return 0;
}

Vector3 func_1241(var uParam0, struct<5> Param1, int iParam6)
{
	if (func_1701(uParam0, Param1, &Param1, 1259580149, iParam6, 0, 0))
	{
		func_1461(Param1, -1637900047, &vVar0, 0);
	}
	return vVar0;
}

var func_1242(var uParam0, struct<5> Param1, int iParam6)
{
	if (func_1701(uParam0, Param1, &Param1, 1259580149, iParam6, 0, 0))
	{
		func_1454(Param1, 92277827, &uVar0, 0);
	}
	return uVar0;
}

bool func_1243(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= (func_2177(iVar0) - 1))
		{
			if (func_145(iParam0, func_2178(iVar0, iVar1), 1))
			{
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

int func_1244()
{
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		iVar1 = iVar0;
		if (func_2179(iVar1) == 0)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar0++;
		}
	}
	return iVar2;
}

void func_1245(int iParam0, int iParam1)
{
	(*Global_1131045)[iParam0]->f_2 = iParam1;
}

void func_1246(int iParam0, int iParam1)
{
	(*Global_1131045)[iParam0]->f_1 = iParam1;
}

void func_1247(int iParam0, struct<2> Param1)
{
	(*Global_1131045)[iParam0]->f_7 = { Param1 };
}

void func_1248(int iParam0, int iParam1)
{
	(*Global_1131045)[iParam0]->f_3 = iParam1;
}

void func_1249(int iParam0, int iParam1)
{
	(*Global_1131045)[iParam0]->f_4 = iParam1;
}

void func_1250(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (iParam1[iVar0] == 0)
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 <= 31)
			{
				if (!is_bit_set(iParam1[iVar0], iVar1))
				{
				}
				else
				{
					if (iVar2 >= 8)
					{
					}
					else
					{
						iVar3 = (iVar1 + iVar0 * 32);
						iVar4 = iVar2;
						func_2180(iParam0, iVar4, iVar3);
						func_2181(iParam0, iVar3, iVar4);
						clear_bit((*iParam1)[iVar0], iVar1);
						iVar2++;
						if (iParam1[iVar0] == 0)
						{
						}
						else
						{
							iVar1++;
						}
					}
					iVar0++;
					func_2182(iParam0, iVar2);
				}
			}
		}
	}
}

int func_1251()
{
	return Global_1131045->f_145;
}

void func_1252(int iParam0)
{
	Global_1131045->f_145 = (Global_1131045->f_145 + iParam0);
}

void func_1253(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21689[iParam0]->f_1 = 0;
		func_240(iParam0);
	}
}

bool func_1254(int iParam0, int iParam1)
{
	if (!func_542(iParam0))
	{
		return false;
	}
	return func_80((*Global_1134390)[network_player_id_to_int()][iParam0], iParam1);
}

void func_1255(int iParam0, int iParam1)
{
	if (!func_542(iParam0))
	{
		return;
	}
	if (func_1254(iParam0, iParam1))
	{
		func_511((*(*Global_1134390)[network_player_id_to_int()])[iParam0], iParam1);
	}
}

int func_1256(int iParam0)
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
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 524288;
		case 20:
			return 1048576;
		case 21:
			return 2097152;
		case 22:
			return 4194304;
		case 23:
			return 8388608;
		case 24:
			return 16777216;
		case 25:
			return 33554432;
		case 26:
			return 67108864;
		case 27:
			return 134217728;
		case 28:
			return 268435456;
		case 29:
			return 536870912;
		case 30:
			return 1073741824;
		default:
			break;
	}
	return -1;
}

void func_1257()
{
	StringCopy(&(Global_1102219->f_3520.f_2), "", 64);
}

void func_1258(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_2183(91));
	if (func_195(iVar0))
	{
		_0x2f901291ef177b02(iVar0, 1);
	}
}

void func_1259(int iParam0)
{
	Global_1940311->f_242.f_1186 = iParam0;
	_databinding_write_data_string(Global_1940311->f_242.f_6, _0x2b6846401d68e563(to_float(Global_1940311->f_242.f_1186), 0));
}

bool func_1260(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (func_1701(uParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1))
	{
		if (bParam6 != 0 && !func_1701(uParam0, iParam1, iParam2, bParam6, bParam7, bParam8, 0))
		{
			return false;
		}
		return true;
	}
	return false;
}

int func_1261(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1262(int iParam0, int iParam1)
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

void func_1263(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1139381->f_3876.f_2[func_1264(iParam0, 1)] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_2184(iParam0);
	}
	Global_1139381->f_3876.f_2[func_1264(iParam0, 1)] = bParam1;
}

int func_1264(int iParam0, int iParam1)
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

int func_1265(int iParam0, int iParam1, int iParam2)
{
	if (Global_1248240->f_8903.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 1393257577)
	{
		iVar0 = Global_1248240->f_8903.f_99;
		iVar1 = Global_1248240->f_8903.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (&Global_1248240->f_8903.f_16[iVar0] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1248240->f_8903.f_99;
	Global_1248240->f_8903.f_16[iVar2] = iParam0;
	Global_1248240->f_8903.f_16[iVar2]->f_5 = iParam2;
	Global_1248240->f_8903.f_16[iVar2]->f_6 = iParam1;
	Global_1248240->f_8903.f_97++;
	Global_1248240->f_8903.f_99 = (Global_1248240->f_8903.f_99 + 1 % 10);
	return iVar2;
}

int func_1266(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_1185(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_1185(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

bool func_1267()
{
	return !Global_1572887->f_9;
}

void func_1268(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1269(int iParam0)
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

void func_1270(struct<2> Param0, var uParam2)
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
	switch (func_570(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_2186(func_2185(Param0));
			iVar5 = func_2187(iVar4);
			if (!func_330(iVar5, 0))
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

int func_1271(struct<2> Param0)
{
	iVar0 = func_1266(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_2188(iVar0);
}

int func_1272(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_1185(Param0, &vVar0))
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
		func_1185(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
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
			func_2189(iVar9);
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

void func_1273()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_1185(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_1274(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1275(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1276(int iParam0, int iParam1)
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

void func_1277(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_1278()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

bool func_1279(int iParam0)
{
	iVar0 = func_592(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_2190(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_2191(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_1280(struct<2> Param0)
{
	if (!func_106(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_107(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1281(int iParam0)
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
		func_2192(Global_1900736->f_1[0]);
		return 1;
	}
	func_2192(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_2193(iParam0, Global_1900736->f_66);
	return 1;
}

void func_1282(var uParam0, int iParam1)
{
	if (Global_1196205->f_129 <= 0)
	{
		Global_1196205->f_129 = 0;
		return;
	}
	if (iParam1 >= Global_1196205->f_129)
	{
		iParam1 = 0;
	}
	if (iParam1 >= 32)
	{
		iParam1 = (Global_1196205->f_129 - 1);
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	if (Global_1196205->f_129 == 1)
	{
		*uParam0 = { *(*Global_1196205)[0] };
		*(*Global_1196205)[0] = { Var0 };
		Global_1196205->f_129 = 0;
		return;
	}
	*uParam0 = { *(*Global_1196205)[iParam1] };
	Global_1196205->f_129 = (Global_1196205->f_129 - 1);
	iVar4 = (Global_1196205->f_129 - 1);
	iVar5 = iParam1;
	while (iVar5 <= iVar4)
	{
		*(*Global_1196205)[iVar5] = { *((*Global_1196205)[iVar5 + 1]) };
		*((*Global_1196205)[iVar5 + 1]) = { Var0 };
		iVar5++;
	}
}

void func_1283(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205->f_129)
	{
		return;
	}
	Global_1196205->f_130 = iParam0;
	Global_1196205->f_131 = Global_1196205[iParam0];
}

void func_1284()
{
	if (Global_1196205->f_131 == 0)
	{
		return;
	}
	Global_1196205->f_130 = func_2194(Global_1196205->f_131);
	if (Global_1196205->f_130 < 0)
	{
		Global_1196205->f_131 = 0;
	}
}

bool func_1285(int iParam0)
{
	return func_146(Global_1257541->f_8862, iParam0);
}

struct<2> func_1286(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return func_478(-495896359);
		case 2:
			return func_478(-1122351331);
	}
	return Var0;
}

bool func_1287(int iParam0, int iParam1, int iParam2)
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

void func_1288(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_2195(*uParam0);
}

bool func_1289(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		network_request_control_of_network_id(iParam0);
		return network_has_control_of_network_id(iParam0);
	}
	return false;
}

bool func_1290(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

int func_1291(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	switch (func_1357(iParam0))
	{
		case 448485414:
			*iParam1 = 24357435;
			iVar0 = Local_409.f_1[iParam0]->f_5;
			break;
		case 661336845:
			*iParam1 = -622270828;
			iVar0 = Local_409.f_1[iParam0]->f_5;
			break;
		case -428150648:
			*iParam1 = -1417610999;
			iVar0 = Local_409.f_1[iParam0]->f_5;
			break;
		case -1276434456:
			*iParam1 = 717522528;
			iVar0 = Local_409.f_1[iParam0]->f_5;
			break;
		case 401658241:
			*iParam1 = 186050533;
			iVar0 = Local_409.f_1[iParam0]->f_6;
			*iParam2 = Local_409.f_1[iParam0]->f_5;
			break;
		case 477970332:
			*iParam1 = 1440683355;
			iVar0 = Local_409.f_1[iParam0]->f_6;
			*iParam2 = Local_409.f_1[iParam0]->f_5;
			break;
		case -2067454306:
			*iParam1 = 344425994;
			iVar0 = Local_409.f_1[iParam0]->f_6;
			*iParam2 = Local_409.f_1[iParam0]->f_5;
			break;
		case -1426507703:
			*iParam1 = 2005568385;
			iVar0 = Local_409.f_1[iParam0]->f_5;
			break;
		case 1373849220:
			*iParam1 = -933304340;
			iVar0 = Local_409.f_1[iParam0]->f_5;
			break;
	}
	return iVar0;
}

int func_1292(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	switch (func_647(iParam0))
	{
		case 448485414:
			*iParam1 = 24357435;
			iVar0 = Local_409.f_381[iParam0]->f_2;
			break;
		case -428150648:
			*iParam1 = -1417610999;
			iVar0 = Local_409.f_381[iParam0]->f_2;
			break;
		case 401658241:
			*iParam1 = 186050533;
			iVar0 = Local_409.f_381[iParam0]->f_3;
			*iParam2 = Local_409.f_381[iParam0]->f_2;
			break;
		case 477970332:
			*iParam1 = 1440683355;
			iVar0 = Local_409.f_381[iParam0]->f_3;
			*iParam2 = Local_409.f_381[iParam0]->f_2;
			break;
		case -2067454306:
			*iParam1 = 344425994;
			iVar0 = Local_409.f_381[iParam0]->f_3;
			*iParam2 = Local_409.f_381[iParam0]->f_2;
			break;
		case 1373849220:
			*iParam1 = -933304340;
			iVar0 = Local_409.f_381[iParam0]->f_2;
			break;
	}
	return iVar0;
}

int func_1293(int iParam0, int iParam1)
{
	iVar0 = -1;
	switch (func_639(iParam0))
	{
		case 448485414:
			*iParam1 = 24357435;
			iVar0 = Local_409.f_317[iParam0]->f_2;
			break;
		case -428150648:
			*iParam1 = -1417610999;
			iVar0 = Local_409.f_317[iParam0]->f_2;
			break;
		case 661336845:
			*iParam1 = -622270828;
			iVar0 = Local_409.f_317[iParam0]->f_2;
			break;
		case 1373849220:
			*iParam1 = -933304340;
			iVar0 = Local_409.f_317[iParam0]->f_2;
			break;
	}
	return iVar0;
}

int func_1294(int iParam0)
{
	iVar0 = -1;
	switch (func_2196())
	{
		case 448485414:
			*iParam0 = 24357435;
			break;
		case -428150648:
			*iParam0 = -1417610999;
			break;
		case 1373849220:
			*iParam0 = -933304340;
			break;
	}
	iVar0 = Local_409.f_460.f_2;
	return iVar0;
}

int func_1295(int iParam0, int iParam1)
{
	iVar0 = -1;
	*iParam1 = 24357435;
	iVar0 = Local_409.f_478[iParam0]->f_2;
	return iVar0;
}

int func_1296(int iParam0, int iParam1)
{
	iVar0 = -1;
	*iParam1 = -873590906;
	iVar0 = iParam0;
	return iVar0;
}

int func_1297(int iParam0, int iParam1)
{
	iVar0 = -1;
	*iParam1 = 2043864919;
	iVar0 = iParam0;
	return iVar0;
}

int func_1298(int iParam0, int iParam1)
{
	iVar0 = -1;
	*iParam1 = 31234018;
	iVar0 = iParam0;
	return iVar0;
}

int func_1299(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	iVar5 = iParam3;
	iVar6 = iParam4;
	iVar7 = iParam7;
	if (func_1260(uParam0, iParam1, &Var0, iVar6, bParam5, bParam6, iVar7, bParam8, bParam9))
	{
		func_2197(Var0, iParam2, &iVar5, iParam10);
	}
	return iVar5;
}

bool func_1300(int iParam0)
{
	return iParam0 != 0;
}

void func_1301(int iParam0)
{
	iVar0 = func_592(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_1302()
{
	func_249(-939420910);
	func_249(-1187950766);
	func_249(356365161);
	func_249(753127042);
	func_249(-2038424081);
	func_249(1884271742);
	func_249(459290420);
}

void func_1303()
{
	func_249(704802028);
	func_249(588987611);
	func_249(2008888900);
	func_249(1649996811);
	func_249(227918160);
	func_249(168171957);
	func_249(1193080109);
	func_249(-491981251);
	func_249(-639037538);
	func_249(-618620429);
}

int func_1304(int iParam0, bool bParam1, bool bParam2)
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

void func_1305(int iParam0, int iParam1, bool bParam2)
{
	func_1304(iParam0, 0, 0);
	if (func_593(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_1306(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		func_2198(iParam0);
	}
}

void func_1307(char* sParam0)
{
	if (_0x5ac0944c156e5f44(sParam0))
	{
		_0x527b97c203bb8606(sParam0);
	}
}

void func_1308(char* sParam0)
{
	if (!_0x5ac0944c156e5f44(sParam0))
	{
		_0x7c334ff4d9215912(sParam0);
	}
}

void func_1309(int iParam0)
{
	if (!_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdfea23ec90113657(iParam0);
	}
}

void func_1310(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		func_2199(iParam0);
	}
}

void func_1311(int iParam0)
{
	if (_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdd0bc0edcb2162f6(iParam0);
	}
}

Vector3 func_1312(var uParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	vVar5 = { vParam3 };
	iVar8 = iParam6;
	bVar9 = bParam9;
	if (func_1260(uParam0, iParam1, &Var0, iVar8, bParam7, bParam8, bVar9, bParam10, bParam11))
	{
		func_1461(Var0, iParam2, &vVar5, 0);
	}
	return vVar5;
}

float func_1313(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)
{
	fVar5 = fParam3;
	iVar6 = iParam4;
	iVar7 = iParam7;
	if (func_1260(uParam0, iParam1, &Var0, iVar6, bParam5, bParam6, iVar7, bParam8, iParam9))
	{
		func_1454(Var0, iParam2, &fVar5, 0);
	}
	return fVar5;
}

int func_1314(vector3 vParam0, int iParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_0x951327435dc5164b(cParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_1315(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!func_2200(uParam0, iParam1, iParam2, iParam3))
	{
		return false;
	}
	if (uParam0->f_9 == 1782082944)
	{
		return false;
	}
	if (func_2201(uParam0, uParam0, bParam4))
	{
		return true;
	}
	return false;
}

bool func_1316(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = func_2202(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_23 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_1317(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
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
	if (!func_2203(uParam0, uParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_1318(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

int func_1319(int iParam0)
{
	if (func_1329(iParam0))
	{
		return (func_623(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_1320(int iParam0)
{
	iVar0 = func_619(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_1321(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_615(iParam1, 1);
	iVar1 = func_619(iParam0, 1);
	iVar2 = func_614(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	if (!&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_2204(iVar3, 1);
		if (!func_2205(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_2206(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_2207(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_2208(iVar6))
		{
		}
		else
		{
			iVar8 = func_2209(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_2210(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_1322(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1323(int iParam0, int iParam1)
{
	if (!func_1320(iParam0))
	{
		return false;
	}
	if (!func_2211(iParam1))
	{
		return false;
	}
	iVar0 = func_2212(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_1324(int iParam0)
{
	iVar0 = func_2213(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_1325(vector3 vParam0)
{
	if (!func_1320(vParam0.x))
	{
		return false;
	}
	if (!func_290(vParam0.y))
	{
		return false;
	}
	if (!func_1335(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1326(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_615(iParam1, 1);
	iVar1 = func_619(iParam0, 1);
	iVar2 = func_614(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2]->f_1 = Global_1296859->f_21;
	if (&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_2204(iVar3, 1);
		if (!func_2205(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_2206(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_2214(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_2208(iVar6))
		{
		}
		else if (!func_2215(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_2209(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_2216(iVar6);
			}
		}
		iVar7++;
	}
	func_2217(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_1327(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_2211(iParam0))
	{
		return;
	}
	iVar0 = func_2212(iParam0, 1);
	if (!func_1320(iParam1))
	{
		return;
	}
	if (!func_290(iParam2))
	{
		return;
	}
	if (!func_1335(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_1328(int iParam0)
{
	if (!func_2211(iParam0))
	{
		return;
	}
	iVar0 = func_2212(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

bool func_1329(int iParam0)
{
	iVar0 = func_615(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

bool func_1330(int iParam0)
{
	iVar0 = func_615(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_1331(int iParam0)
{
	iVar0 = func_615(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_1332(int iParam0)
{
	iVar0 = func_615(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_1333(int iParam0)
{
	iVar0 = func_615(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_1334(int iParam0)
{
	iVar0 = func_615(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

bool func_1335(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

bool func_1336(int iParam0)
{
	if (!func_2211(iParam0))
	{
		return false;
	}
	iVar0 = func_2218(iParam0);
	if (!func_1320(iVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_1337(int iParam0)
{
	if (!func_2211(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_2212(iParam0, 1);
	return *Global_1146212->f_35859.f_9286[iVar3];
}

int func_1338(int iParam0, int iParam1)
{
	iVar0 = func_2219(iParam0);
	if (iVar0 == 0)
	{
		return -1;
	}
	if (iParam1 == -1)
	{
		return -1;
	}
	return func_2220(iVar0, iParam1);
}

void func_1339(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_2221(&Var0);
}

void func_1340()
{
	Local_4089.f_4096++;
	func_656(&(Local_4089.f_4097));
}

bool func_1341(int iParam0, bool bParam1)
{
	if (func_2222(iParam0, bParam1) || func_2223(iParam0))
	{
		return true;
	}
	return false;
}

void func_1342(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1 && !iParam0->f_14)
	{
		return;
	}
	if (func_937(16384, iParam2, 255) && iParam0->f_14)
	{
		func_909(32768, iParam2);
	}
	else if (iParam0->f_3)
	{
		func_909(32768, iParam2);
	}
	else if (iParam0->f_4)
	{
		func_909(16384, iParam2);
	}
}

int func_1343(int iParam0)
{
	return Local_4089.f_3008[iParam0]->f_8;
}

int func_1344(int iParam0, int iParam1)
{
	return (Local_4089.f_3008[iParam0]->f_7 - Local_4089.f_3008[iParam1]->f_7);
}

int func_1345(int iParam0)
{
	iVar0 = (Global_1296859->f_21 + (iParam0 / 1000));
	iVar1 = (iVar0 - (Local_4089.f_4081 / 1000));
	return iVar1;
}

void func_1346()
{
	Var0.f_10 = 255;
	Var0.f_4 = 31;
	Var0.f_5 = Local_4089.f_3391;
	func_1519(&Var0, func_880(0, 8));
}

int func_1347(int iParam0)
{
	if (!func_1373(Local_4089.f_1983[iParam0]->f_1))
	{
		return 0;
	}
	if (network_does_network_id_exist(Local_409.f_478[iParam0]->f_1))
	{
		iVar0 = net_to_ent(Local_409.f_478[iParam0]->f_1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	else if (does_entity_exist(Local_4089.f_1983[iParam0]->f_15))
	{
		return Local_4089.f_1983[iParam0]->f_15;
	}
	iVar1 = (*Global_1237665)[Local_4089.f_3391]->f_16;
	if (!network_is_participant_active(network_get_participant_index(iVar1)))
	{
		return 0;
	}
	if (!_network_is_player_index_valid(iVar1) || !network_is_player_active(iVar1))
	{
		return 0;
	}
	iVar2 = get_player_ped(iVar1);
	if (!does_entity_exist(iVar2))
	{
		return 0;
	}
	return func_2224(iVar2);
}

int func_1348(int iParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, bool bParam11)
{
	if (func_1097(iParam1, 1) && network_does_network_id_exist(Local_409.f_1[iParam1]->f_14))
	{
		iVar0 = Local_4089.f_6[iParam1]->f_60;
		if (iVar0 == iParam0)
		{
			return 0;
		}
		else if (!is_entity_dead(iVar0))
		{
			*iParam6 = vdist(get_entity_coords(iVar0, false, false), vParam2);
			if (bParam11)
			{
				if (func_1341(Local_4089.f_6[iParam1]->f_2, 1))
				{
					if (*iParam6 < *iParam7)
					{
						*iParam5 = iParam1;
						*iParam7 = *iParam6;
						return 1;
					}
				}
			}
			else if (bParam9)
			{
				iVar1 = get_relationship_between_peds(iVar0, iParam0);
				if (iVar1 == iParam10)
				{
					if (*iParam6 < *iParam7)
					{
						*iParam5 = iParam1;
						*iParam7 = *iParam6;
						return 1;
					}
				}
			}
			else if (Local_4089.f_6[iParam1]->f_2 == iParam8 || iParam8 == -1)
			{
				if (*iParam6 < *iParam7)
				{
					*iParam5 = iParam1;
					*iParam7 = *iParam6;
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_1349(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

void func_1350(var uParam0)
{
	Var0.f_10 = 255;
	Var0.f_4 = 8;
	Var0.f_5 = Local_4089.f_3391;
	Var0.f_13 = uParam0;
	func_1370(&Var0);
}

int func_1351(int iParam0)
{
	return Local_409.f_1[iParam0]->f_1;
}

void func_1352(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = Local_13.f_82[iVar0]->f_5;
		if ((((Local_13.f_82[iVar0]->f_1 == -916820003 && iVar1 > -1) && iVar1 < 3) && (Local_4089.f_1983[iVar1]->f_1 == -1767305912 || Local_4089.f_1983[iVar1]->f_1 == -1229553512)) && &Local_409.f_478[iVar1] == 6)
		{
			if (!bParam1 || func_714(16384, iVar1, -1))
			{
				Local_4089.f_1983[iVar1]->f_13 = (Local_4089.f_1983[iVar1]->f_13 + func_716(iParam0));
			}
		}
		iVar0++;
	}
}

bool func_1353(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_1354(int iParam0, bool bParam1)
{
	iVar0 = Local_4089.f_6[iParam0]->f_60;
	if (func_1581(iVar0, 8))
	{
		return false;
	}
	if (func_1925(iParam0))
	{
		return false;
	}
	if (((((Local_409.f_1[iParam0]->f_1 == -1066665813 && !is_ped_human(iVar0)) || Local_409.f_1[iParam0]->f_1 == -1322096809) || func_2225(Local_409.f_1[iParam0]->f_1)) || Local_409.f_1[iParam0]->f_1 == -663493799) || Local_409.f_1[iParam0]->f_1 == 227388558)
	{
		return false;
	}
	if (bParam1 && func_1479(Local_409.f_1[iParam0]->f_4))
	{
		return false;
	}
	if (func_1389(Local_409.f_1[iParam0]->f_1))
	{
		return false;
	}
	if (Local_4089.f_6[iParam0]->f_67 == 2)
	{
		return false;
	}
	if (func_1411(33554432, iParam0))
	{
		return false;
	}
	return true;
}

void func_1355(bool bParam0, bool bParam1)
{
	if ((bParam0 && !func_28(38)) && func_370(255, 0, 0, 0, 0) == -1)
	{
		func_236(38, 1, 1);
	}
	if (bParam1)
	{
		func_2226();
	}
	func_20(16, 1, 1);
}

void func_1356(int iParam0, int iParam1)
{
	if (!_is_ped_hogtied(iParam0))
	{
		return;
	}
	if (!func_719(iParam0))
	{
		return;
	}
	if (Local_409.f_1[iParam1]->f_1 != -126469426)
	{
		return;
	}
	if (Local_409.f_1[iParam1]->f_4 != 448485414 || !func_311(Local_409.f_1[iParam1]->f_5))
	{
		return;
	}
	iVar0 = Local_409.f_1[iParam1]->f_5;
	if (func_2227(0, iVar0, iParam0, 1, 0))
	{
		return;
	}
	func_2228(func_1183(), &fVar1, &fVar2);
	fVar3 = get_random_float_in_range(fVar1, fVar2);
	if (_0x90eb1cb189923587(iParam0) == -680302000)
	{
		fVar3 = (fVar3 * 2.5f);
	}
	_0xab591ae6b48b913e(iParam0, fVar3);
	func_301(128, iParam1);
}

int func_1357(int iParam0)
{
	return Local_409.f_1[iParam0]->f_4;
}

int func_1358(int iParam0)
{
	return Local_409.f_1[iParam0]->f_5;
}

bool func_1359(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case -180256388:
		case 406316137:
		case 926531522:
		case 1511910102:
		case 2096477759:
			return true;
		case -2103191760:
		case -1023903568:
			return iParam2;
		case -1857350969:
		case -33963982:
		case 183014823:
		case 1118817659:
		case 1364359119:
		case 1637668086:
			return iParam1;
		case -2064282978:
			return iParam3;
		default:
			break;
	}
	return false;
}

void func_1360(struct<2> Param0)
{
	if (func_455(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_455(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_455(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_2229(Param0, &Var0))
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

bool func_1361(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = participant_id_to_int();
	}
	return func_80((*Local_920[iParam2])[iParam1]->f_1, iParam0);
}

void func_1362(int iParam0, int iParam1)
{
	if (!func_1361(iParam0, iParam1, -1))
	{
		func_105(&((*Local_920[participant_id_to_int()])[iParam1]->f_1), iParam0);
	}
}

var func_1363(var uParam0)
{
	return func_886(uParam0, -852636611, -1, -801742902, 0, 0, 0, 0, 0);
}

void func_1364(int iParam0, bool bParam1, bool bParam2)
{
	bVar1 = func_28(126);
	if (Local_13.f_1 == 3 && _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iParam0)) == player_id())
	{
		bVar0 = true;
	}
	if (bParam1)
	{
		if (bVar1)
		{
			if (bParam2)
			{
				func_1168(-74023072, iParam0, 0, 0, 1, -1934125239, -1455486347, 0, 1, 1, 0, 0);
			}
			else
			{
				func_1168(2113946653, iParam0, 0, 0, 1, -1438029338, -715817356, 0, 1, 1, 0, 0);
			}
		}
		if (bVar0)
		{
			func_1007(-79139194, 1, 1);
		}
	}
	else
	{
		if (bVar1)
		{
			func_1168(-115234556, iParam0, 0, 0, 1, 321927859, -361023754, 0, 1, 1, 0, 0);
		}
		if (bVar0)
		{
			func_1007(385589027, 1, 1);
		}
	}
}

var func_1365(var uParam0)
{
	return func_886(uParam0, -1494166688, 0, -801742902, 0, 0, 0, 0, 0);
}

bool func_1366(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

void func_1367(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (((does_entity_exist(iParam0) && is_model_a_ped(Local_4089.f_1983[iVar0]->f_12)) && Local_4089.f_1983[iVar0]->f_1 == -948149899) && &Local_409.f_478[iVar0] == 6)
		{
			iVar1 = Local_4089.f_1983[iVar0]->f_12;
			iVar2 = func_2230(iVar1);
			if (get_entity_model(iParam0) == iVar1 || get_entity_model(iParam0) == iVar2)
			{
				func_1026(54, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_1368(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	iVar2 = -1;
	fVar4 = 9999f;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iVar1 = Local_13.f_257[iVar0]->f_3;
		if (iVar1 == -1)
		{
		}
		else if (func_2231(iVar1) != iParam0)
		{
		}
		else if (!does_entity_exist(Local_4089.f_6[iVar1]->f_60) || is_entity_dead(Local_4089.f_6[iVar1]->f_60))
		{
		}
		else
		{
			fVar3 = vdist(vParam2, get_entity_coords(Local_4089.f_6[iVar1]->f_60, false, false));
			if (fVar3 > fParam5 || fVar3 > fVar4)
			{
			}
			else
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
		}
		iVar0++;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (func_2232(iVar2, iParam0, iParam1, 1))
	{
		return;
	}
	func_2233(iVar2, iParam0, iParam1, 0, 0);
}

bool func_1369(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (get_animal_tuning_bool_param(iParam0, 58))
	{
		if (bParam1)
		{
			return is_entity_in_air(iParam0, 1);
		}
		return true;
	}
	return false;
}

void func_1370(var uParam0)
{
	*uParam0 = 176;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 19, 9, get_id_of_this_thread());
	func_2234(uParam0);
}

int func_1371(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1373849220:
			return -933304340;
		case 477970332:
			*bParam1 = 1;
			return 1440683355;
		case 401658241:
			*bParam1 = 1;
			return 186050533;
		case -1091027173:
			return -873590906;
		case 860364721:
			return 2043864919;
		case -783556459:
			return 31234018;
		case -428150648:
			return -1417610999;
		case 661336845:
			return -622270828;
		case 448485414:
			return 24357435;
		case -1276434456:
			return 717522528;
		case -970979849:
			return 1710752225;
		case -1426507703:
			return 2005568385;
		case -2067454306:
			*bParam1 = 1;
			return 344425994;
	}
	return 0;
}

bool func_1372(int iParam0, bool bParam1)
{
	if (iParam0 == -1 || iParam0 > 2)
	{
		return false;
	}
	if (bParam1 && &Local_409.f_478[iParam0] == 9)
	{
		return false;
	}
	return &Local_409.f_478[iParam0] != 0;
}

bool func_1373(int iParam0)
{
	switch (iParam0)
	{
		case -1829453767:
			return true;
		case 1115966845:
			return true;
		default:
			break;
	}
	return false;
}

int func_1374(int iParam0, int iParam1)
{
	func_1304(iParam0, 0, 0);
	if (func_593(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

bool func_1375(int iParam0, int iParam1)
{
	return func_80(Local_409.f_478[iParam1]->f_3, iParam0);
}

bool func_1376(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && func_80(&(Local_920[iVar0]->f_68[iParam1]), iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1377(int iParam0, int iParam1)
{
	return func_80(&(Local_13.f_203[iParam1]), iParam0);
}

bool func_1378(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar4 = Local_13.f_82[iParam0]->f_5;
	iVar5 = Local_13.f_82[iParam0]->f_3;
	switch (Local_13.f_82[iParam0]->f_1)
	{
		case 886638433:
			switch (Local_409.f_1[iVar4]->f_1)
			{
				case -2104935250:
				case -184918272:
				case -126469426:
				case -69017634:
				case 227388558:
				case 763672902:
					bVar1 = true;
					break;
			}
			break;
		case -916820003:
			switch (Local_4089.f_1983[iVar4]->f_1)
			{
				case -948149899:
				case -463039475:
				case 102628183:
				case 1115966845:
					bVar1 = true;
					break;
			}
			break;
	}
	if (((!bVar1 && Local_13.f_82[iParam0]->f_1 != -1918493640) && Local_4089.f_3393 != 195932838) && is_entity_dead(iParam1))
	{
		return false;
	}
	if (func_2235(iParam1))
	{
		return false;
	}
	bVar2 = func_1392(iParam0);
	bVar0 = func_2050(iParam2, iParam0, iParam1, 1, 1);
	bVar3 = func_1923(iParam0, iParam2, 0);
	switch (Local_13.f_82[iParam0]->f_1)
	{
		case 886638433:
			if (bVar0)
			{
				if (Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_15 != 255 && func_182(network_get_participant_index(Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_15)) != iParam2)
				{
					return false;
				}
			}
			switch (Local_409.f_1[iVar4]->f_1)
			{
				case 805150603:
					if (!bVar0)
					{
						return func_835(512, iParam0, 0);
					}
					break;
				case -1729245824:
				case -1266062299:
				case -608069142:
				case -490885662:
				case 727593135:
				case 1448834071:
				case 2021684520:
					if ((!bVar3 && func_1562(Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_11, 0)) && func_646(1024, Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_11))
					{
						iVar6 = Local_409.f_381[Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_11]->f_10;
						if (network_does_network_id_exist(iVar6) && is_ped_in_vehicle(get_ped_index_from_entity_index(iParam1), net_to_veh(iVar6), true))
						{
							if (bVar0)
							{
								*bParam3 = 1;
							}
							return false;
						}
					}
					if (_is_ped_hogtied(get_ped_index_from_entity_index(iParam1)))
					{
						if (iVar5 != -1 && bVar3)
						{
							if (bVar0)
							{
								if (func_2051(iParam0, iParam1))
								{
									*bParam3 = 1;
									return false;
								}
								return true;
							}
						}
						else
						{
							if (bVar0)
							{
								*bParam3 = 1;
							}
							return false;
						}
					}
					if (bVar0)
					{
						if (func_2051(iParam0, iParam1))
						{
							*bParam3 = 1;
							return false;
						}
						return true;
					}
					if (func_773(16, iParam0) && !func_453(524288, iParam0))
					{
						return false;
					}
					break;
				case -2104935250:
				case -184918272:
				case -69017634:
				case 177965392:
				case 763672902:
					if (bVar0)
					{
						if (func_2051(iParam0, iParam1))
						{
							*bParam3 = 1;
							return false;
						}
					}
					break;
				case -126469426:
				case 227388558:
					if (bVar0)
					{
						if (func_2051(iParam0, iParam1))
						{
							*bParam3 = 1;
							return false;
						}
						return true;
					}
					break;
				case -2097642849:
				case -2011805335:
				case -2003068922:
				case -887274986:
				case -207712283:
				case 291675087:
				case 836347960:
				case 1665936245:
				case 1958222724:
				case 2083566000:
					iVar7 = _0xef2d9ed7ce684f08(iParam1);
					if (is_ped_a_player(iVar7))
					{
						Local_13.f_82[iParam0]->f_14 = network_get_player_index_from_ped(iVar7);
						if (_0xc737697c41628340(iVar7) == 2 || _0xc737697c41628340(iVar7) == 3)
						{
							return true;
						}
					}
					if (_0x7cb99fadde73cd1b(get_ped_index_from_entity_index(iParam1)) || func_2236(iParam1))
					{
						return true;
					}
					break;
				case 1461000558:
					if (func_773(32768, iParam0))
					{
						if (func_832(8192, iParam0))
						{
							*bParam3 = 1;
						}
						else
						{
							return false;
						}
						if (get_ped_reset_flag(get_player_ped(Local_13.f_82[iParam0]->f_11), 236))
						{
							return false;
						}
					}
					break;
				case -391787427:
					return (Local_13.f_2 == 0 && !func_1925(Local_13.f_82[iParam0]->f_5));
			}
			break;
		case -1918493640:
			switch (Local_4089.f_1087[iVar4]->f_1)
			{
				case 1475547288:
					if (!func_2058(iParam0, iParam2))
					{
						if (iParam2 != 1 || &Local_4089.f_1622[iParam0]->f_2[1]->f_1[0] == -1)
						{
							return func_2237(iParam0, iParam2);
						}
					}
					break;
				case -1064014193:
					if (bVar0)
					{
						if (func_2051(iParam0, iParam1))
						{
							*bParam3 = 1;
							return false;
						}
						return true;
					}
					break;
				case -1703696123:
					return ((Local_4089.f_1087[iVar4]->f_25 == -1091027173 && &Local_409.f_467[Local_4089.f_1087[iVar4]->f_26] >= 4) && (!func_2238(128, Local_4089.f_1087[iVar4]->f_26) || func_2239(512, Local_4089.f_1087[iVar4]->f_26, -1)));
				case 110988383:
					if ((_network_is_player_index_valid(Local_13.f_82[iParam0]->f_11) && network_is_player_active(Local_13.f_82[iParam0]->f_11)) && network_is_player_a_participant(Local_13.f_82[iParam0]->f_11))
					{
						if (Local_13.f_82[iParam0]->f_3 == -1)
						{
							return false;
						}
						else if (&Local_4089.f_1622[iParam0]->f_2[Local_13.f_82[iParam0]->f_3] != -1)
						{
							return func_2240(iParam0, iParam2, network_get_participant_index(Local_13.f_82[iParam0]->f_11));
						}
						else
						{
							return (func_653(4194304, iVar4, network_get_participant_index(Local_13.f_82[iParam0]->f_11)) && func_2240(iParam0, iParam2, network_get_participant_index(Local_13.f_82[iParam0]->f_11)));
						}
					}
					break;
			}
			break;
		case -584819812:
			switch (Local_4089.f_1367[iVar4]->f_1)
			{
				case -25013953:
					if (func_646(1024, iVar4))
					{
						return false;
					}
					break;
				case -704434053:
					if (func_331(Local_4089.f_3391, 16))
					{
						iVar8 = _0x2963b5c1637e8a27(Local_4089.f_1367[iVar4]->f_14);
						if (!does_entity_exist(iVar8) || is_ped_a_player(iVar8))
						{
							return false;
						}
					}
					break;
				default:
					if (func_1650())
					{
						return false;
					}
					if (!func_1651(iParam0, 0, 0, 0, 0))
					{
						return false;
					}
					break;
			}
			break;
		case -916820003:
			switch (Local_4089.f_1983[iVar4]->f_1)
			{
				case -463039475:
				case 102628183:
					if (bVar0)
					{
						if (func_2051(iParam0, iParam1))
						{
							return false;
						}
					}
					break;
				case -948149899:
					if (bVar0)
					{
						if (func_2051(iParam0, iParam1) || (is_entity_a_ped(iParam1) && _0x8de41e9902e85756(iParam1)))
						{
							return false;
						}
					}
					break;
				case 206508773:
					if (iParam2 != -1 && &Local_4089.f_1622[iParam0]->f_2[iParam2] != -1)
					{
						return (func_2241(128, &(Local_4089.f_1622[iParam0]->f_2[iParam2])) || func_2242(2097152, &(Local_4089.f_1622[iParam0]->f_2[iParam2])));
					}
					else
					{
						return false;
					}
					break;
			}
			break;
	}
	return (bVar0 && (bVar2 || iVar5 == iParam2));
}

bool func_1379(int iParam0, int iParam1)
{
	switch (Local_13.f_82[iParam0]->f_1)
	{
		case 886638433:
			switch (Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1)
			{
				case -2104935250:
				case -184918272:
				case -69017634:
				case 763672902:
					return get_ped_config_flag(get_ped_index_from_entity_index(iParam1), 11, false);
				case 805150603:
					if (func_1991(Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_11) && func_646(32768, Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_11))
					{
						func_329(2048, 1);
						return false;
					}
					break;
				case 1582696781:
					if (Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_3 != -1 && !func_2243(iParam1, &(Local_4089.f_2190[Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_3]), 0, 1))
					{
						return true;
					}
					break;
			}
			if (is_ped_fatally_injured(get_ped_index_from_entity_index(iParam1)))
			{
				return true;
			}
			break;
		case -584819812:
			if (func_645(Local_4089.f_1367[Local_13.f_82[iParam0]->f_5]->f_1) && func_646(8192, Local_13.f_82[iParam0]->f_5))
			{
				return true;
			}
			switch (Local_4089.f_1367[Local_13.f_82[iParam0]->f_5]->f_1)
			{
				case 1986585783:
					if (_0xddbea5506c848227(get_vehicle_index_from_entity_index(iParam1)))
					{
						return true;
					}
					break;
				default:
					if (!is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam1), false, false))
					{
						return true;
					}
					break;
			}
			break;
		case -1918493640:
			if (Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_1 == 1740160671)
			{
				if (func_1545(64, Local_13.f_82[iParam0]->f_5, -1))
				{
					return true;
				}
				else if (is_entity_dead(Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_11) && func_120(16))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (func_1545(8388608, Local_13.f_82[iParam0]->f_5, -1))
			{
				return true;
			}
			if (is_entity_on_fire(iParam1))
			{
				return true;
			}
			if (Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_27 == -584819812 && func_1562(Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_28, 0))
			{
				iVar3 = func_310(-584819812, Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_28);
				if (does_entity_exist(iVar3))
				{
					if (is_entity_on_fire(iVar3))
					{
						return true;
					}
					if (Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_1 == 1321175366 && !is_vehicle_driveable(get_vehicle_index_from_entity_index(iVar3), false, false))
					{
						return true;
					}
				}
			}
			if (Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_5 > 0f)
			{
				return func_2244(iParam0, iParam1);
			}
			break;
		case -916820003:
			if (Local_4089.f_1983[Local_13.f_82[iParam0]->f_5]->f_1 == -1829453767)
			{
				if (Local_13.f_1 < 0 || Local_13.f_1 >= 6)
				{
					return false;
				}
				iVar2 = (*Global_1237665)[Local_4089.f_3391]->f_16;
				iVar0 = network_get_participant_index(iVar2);
				iVar1 = get_player_ped(iVar2);
				if (!does_entity_exist(iVar1))
				{
					return false;
				}
				if (!func_104(262144, iVar0) && func_855(0, 0))
				{
					return true;
				}
				if (is_ped_dead_or_dying(iVar1, true) || func_170(iVar0))
				{
					return false;
				}
			}
			break;
	}
	return is_entity_dead(iParam1);
}

int func_1380(int iParam0)
{
	if (func_28(27) && func_773(268435456, iParam0))
	{
		return 0;
	}
	if (Local_13.f_82[iParam0]->f_1 != -916820003 || (Local_13.f_82[iParam0]->f_1 == -916820003 && Local_4089.f_1983[Local_13.f_82[iParam0]->f_5]->f_1 != 1115966845))
	{
		if (func_1651(iParam0, 0, 0, 1, 0))
		{
			return 0;
		}
	}
	if (Local_13.f_2 == 1)
	{
		if (Local_4089.f_3393 == 1427578635 && (*Global_1237665)[Local_4089.f_3391]->f_16 == 255)
		{
			return 0;
		}
		if (func_233(Local_4089.f_3393) && !func_104(8192, 255))
		{
			return 0;
		}
		return 1;
	}
	if (func_28(85) && func_855(0, 0))
	{
		return 1;
	}
	bVar6 = false;
	switch (Local_13.f_82[iParam0]->f_1)
	{
		case -584819812:
			if (func_646(32768, Local_13.f_82[iParam0]->f_5))
			{
				return 1;
			}
			break;
		case -1918493640:
			if (Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_27 == -584819812 && func_646(32768, Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_28))
			{
				return 1;
			}
			break;
		case -916820003:
			if (Local_4089.f_1983[Local_13.f_82[iParam0]->f_5]->f_1 == 1115966845)
			{
				if (Local_13.f_1 < 0 || Local_13.f_1 >= 6)
				{
					return 0;
				}
				iVar4 = (*Global_1237665)[Local_4089.f_3391]->f_16;
				if (network_is_participant_active(network_get_participant_index(iVar4)))
				{
					iVar0 = network_get_participant_index(iVar4);
					iVar2 = get_player_ped(iVar4);
					if (func_170(iVar0))
					{
						return 0;
					}
				}
				else
				{
					iVar2 = get_ped_index_from_entity_index(func_1347(Local_13.f_82[iParam0]->f_5));
				}
				if (!does_entity_exist(iVar2))
				{
					return 0;
				}
				if (is_ped_dead_or_dying(iVar2, true))
				{
					return 0;
				}
				iVar1 = 0;
				while (iVar1 < network_get_max_num_participants())
				{
					iVar5 = int_to_participantindex(iVar1);
					if (!network_is_participant_active(iVar5))
					{
					}
					else if (func_182(iVar1) != 1)
					{
					}
					else
					{
						iVar3 = get_player_ped(network_get_player_index(iVar5));
						if (is_ped_dead_or_dying(iVar3, true))
						{
						}
						else
						{
							bVar6 = true;
							if (vdist(get_entity_coords(iVar3, true, false), get_entity_coords(iVar2, true, false)) < (Global_1901947->f_166.f_26 * (*Global_1145091)[network_get_player_index(iVar5)]->f_34))
							{
								return 0;
							}
						}
					}
					iVar1++;
				}
				if (bVar6)
				{
					return 1;
				}
				else if ((*Global_1237665)[Local_4089.f_3391]->f_16 != 255 && !func_2245(iVar4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_1381(int iParam0, bool bParam1, bool bParam2)
{
	if (Local_13.f_82[iParam0]->f_2 == -1)
	{
		return;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			Local_13.f_198[Local_13.f_82[iParam0]->f_2] = (&Local_13.f_198[Local_13.f_82[iParam0]->f_2] + Local_4089.f_1622[iParam0]->f_55);
		}
		else
		{
			Local_13.f_198[Local_13.f_82[iParam0]->f_2] = (&Local_13.f_198[Local_13.f_82[iParam0]->f_2] - Local_4089.f_1622[iParam0]->f_55);
		}
	}
	else if (!func_995(iParam0, 0))
	{
		if (bParam1)
		{
			Local_13.f_198[Local_13.f_82[iParam0]->f_2] = &Local_13.f_198[Local_13.f_82[iParam0]->f_2] + 1;
		}
		else
		{
			Local_13.f_198[Local_13.f_82[iParam0]->f_2] = (&Local_13.f_198[Local_13.f_82[iParam0]->f_2] - 1);
		}
	}
}

void func_1382(int iParam0, int iParam1)
{
	Local_13.f_375 = iParam0;
	if (iParam1 != -1)
	{
		Local_13.f_198[iParam1]->f_1 = iParam0;
	}
}

void func_1383(int iParam0)
{
	Local_13.f_356 = func_725(Local_13.f_355);
}

void func_1384(int iParam0, int iParam1)
{
	if (!func_796(iParam0, iParam1))
	{
		func_105(&(Local_409.f_1[iParam1]->f_10), iParam0);
	}
}

int func_1385(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	bVar2 = func_589(iParam0, iParam1, &iVar0, &bVar1);
	if (bVar2 == -1)
	{
		return iParam3;
	}
	return func_591(&(Local_4089.f_3355), iParam2, iParam3, iVar0, bVar2, bVar1, iParam4, bParam5, iParam6, 0);
}

int func_1386(int iParam0)
{
	switch (iParam0)
	{
		case 303108068:
			return 0;
		case -910931556:
			return 1;
		default:
			break;
	}
	return -1;
}

void func_1387(int iParam0)
{
	Var0.f_10 = 255;
	Var0.f_4 = 32;
	Var0.f_13 = iParam0;
	Var0.f_5 = Local_4089.f_3391;
	func_1519(&Var0, func_880(0, 8));
}

void func_1388(int iParam0, bool bParam1, bool bParam2)
{
	if (&Local_13.f_82[iParam0] == 5)
	{
		return;
	}
	func_1396(5, iParam0);
	func_839(iParam0, 0);
	func_2246(iParam0);
	Local_13.f_82[iParam0]->f_11 = 255;
	func_2247();
	if ((!func_453(8, iParam0) && func_2248(&(Local_4089.f_3355), iParam0)) && !func_995(iParam0, 0))
	{
		Local_13.f_357 = (Local_13.f_357 - 1);
	}
	if (((Local_13.f_82[iParam0]->f_1 == -1918493640 && Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_1 == -1703696123) && Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_25 == -1091027173) && Local_13.f_1 != 6)
	{
		func_2249(256, Local_4089.f_1087[Local_13.f_82[iParam0]->f_5]->f_26);
	}
	if (!bParam1)
	{
		func_1381(iParam0, 0, 0);
		Local_13.f_82[iParam0]->f_2 = -1;
		Local_13.f_82[iParam0]->f_13 = 255;
		Local_13.f_82[iParam0]->f_10 = 0;
		if (Local_13.f_2 == 0 && bParam2)
		{
			if (func_453(16, iParam0))
			{
				if (Local_13.f_82[iParam0]->f_1 != 886638433)
				{
					func_2250(iParam0);
				}
			}
			else if (func_453(512, iParam0))
			{
				func_2251(iParam0);
			}
			else
			{
				func_2252(iParam0, Local_13.f_82[iParam0]->f_14);
			}
		}
	}
	func_2253(iParam0);
}

bool func_1389(int iParam0)
{
	switch (iParam0)
	{
		case -1729245824:
		case -1266062299:
		case -608069142:
		case -490885662:
		case 2021684520:
			return true;
		default:
			break;
	}
	return false;
}

int func_1390(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	fVar1 = iParam4;
	iVar3 = 255;
	*iParam3 = iParam4;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar2))
		{
		}
		else if (!network_is_player_a_participant(iVar2))
		{
		}
		else
		{
			iVar5 = network_get_participant_index(iVar2);
			if (bParam9 && !func_2254(iVar5, 1, 1))
			{
			}
			else if (bParam11)
			{
				if (func_148(32768, iVar5))
				{
				}
				else if (bParam10 && func_182(iVar5) == -1)
				{
				}
				else
				{
					iVar4 = get_player_ped(iVar2);
					if ((iParam5 == 0 || iParam6 == 0) || get_relationship_between_peds(iParam6, iVar4) == iParam5)
					{
						if (bParam8)
						{
							if (func_104(16384, iVar0))
							{
							}
							else if (iParam7 == 493038497 || func_307(iVar5) == iParam7)
							{
								fVar1 = vdist(get_entity_coords(iVar4, false, false), vParam0);
								if (fVar1 < *iParam3)
								{
									iVar3 = iVar2;
									*iParam3 = fVar1;
								}
							}
							iVar0++;
							return iVar3;
						}
					}
				}
			}
		}
	}
}

int func_1391(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar0)))
		{
		}
		else if (func_653(iParam0, iParam1, iVar0))
		{
			return network_get_player_index(int_to_participantindex(iVar0));
		}
		iVar0++;
	}
	return 255;
}

bool func_1392(int iParam0)
{
	return (Local_13.f_82[iParam0]->f_1 == -916820003 && Local_4089.f_1983[Local_13.f_82[iParam0]->f_5]->f_1 == -948149899);
}

int func_1393(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar0)))
		{
		}
		else if (func_1750(iParam0, iParam1, iVar0))
		{
			return network_get_player_index(int_to_participantindex(iVar0));
		}
		iVar0++;
	}
	return 255;
}

bool func_1394(var uParam0, int iParam1, int iParam2)
{
	return func_218(uParam0, 201229603, 1, 24357435, iParam1, 0, 509106599, func_1700(iParam2), 0);
}

void func_1395(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = Local_13.f_82[iParam0]->f_2;
	if (iVar0 == -1)
	{
		return;
	}
	if (func_995(iParam0, 0))
	{
		return;
	}
	if (func_453(32, iParam0) && &Local_4089.f_3008[iVar0] == 404851220)
	{
		if (&Local_4089.f_3008[iVar0] != 622225714)
		{
			func_2255(iParam0, iVar0, 1, bParam1, bParam2, bParam3, func_453(65536, iParam0), Local_13.f_359, 255, Local_13.f_82[iParam0]->f_10);
		}
	}
	else if (&Local_4089.f_3008[iVar0] != 622225714 || Local_13.f_2 != 1)
	{
		func_2255(iParam0, iVar0, 0, bParam1, bParam2, bParam3, func_453(65536, iParam0), Local_13.f_359, Local_13.f_82[iParam0]->f_13, Local_13.f_82[iParam0]->f_10);
	}
}

void func_1396(int iParam0, int iParam1)
{
	if (&Local_13.f_82[iParam1] != iParam0)
	{
		Local_13.f_82[iParam1] = iParam0;
	}
}

void func_1397(int iParam0, int iParam1)
{
	if ((iParam1 != -1 && Local_4089.f_1622[iParam0]->f_2[iParam1]->f_9 != -1) && Local_4089.f_1622[iParam0]->f_2[iParam1]->f_10 == 886638433)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (((iVar0 != iParam0 && Local_4089.f_1622[iVar0]->f_2[iParam1]->f_9 == Local_4089.f_1622[iParam0]->f_2[iParam1]->f_9) && Local_4089.f_1622[iVar0]->f_2[iParam1]->f_10 == 886638433) && !func_453(8, iVar0))
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			func_1414(34, Local_4089.f_1622[iParam0]->f_2[iParam1]->f_9);
		}
	}
}

bool func_1398(int iParam0, int iParam1, bool bParam2)
{
	if (!func_2256(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_2257(iParam0, iParam1);
	}
	return true;
}

int func_1399(int iParam0, int iParam1)
{
	if (!func_662(iParam0, 0))
	{
		return func_2258(func_1400(iParam0), iParam1);
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

int func_1400(int iParam0)
{
	return iParam0;
}

int func_1401(int iParam0, bool bParam1)
{
	if (!func_2259(iParam0, 2))
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

bool func_1402(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_2256(iParam0))
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
		func_2260(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_1403(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_2261(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_1404(var uParam0, int iParam1, int iParam2)
{
	return func_218(uParam0, -2041374464, 0, 1403632554, iParam1, iParam2, 0, 0, 0);
}

bool func_1405(var uParam0, int iParam1)
{
	return func_80(uParam0->f_11, iParam1);
}

void func_1406(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	func_2262(iParam0, func_1440(iParam1), bParam2, iParam3, iParam4);
}

void func_1407(int iParam0, int iParam1)
{
	iVar4 = player_id();
	if (iParam1 != iVar4)
	{
		if (!func_2263(iParam1, iVar4))
		{
			return;
		}
		if (!func_2264(iParam1, iVar4))
		{
			return;
		}
	}
	switch (Local_4089.f_3393)
	{
		case -1777724963:
			func_1854(func_182(255), iParam0, &uVar2, &iVar3);
			iVar5 = func_1188();
			if (iVar3 == 2 && func_1189(iVar5))
			{
				return;
			}
			iVar1 = -574721081;
			break;
	}
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_25 - 1))
	{
		if (func_484(iVar0) == iVar1)
		{
			func_2265(iVar0, iParam0);
		}
		else
		{
			iVar0++;
		}
	}
}

void func_1408()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!func_178(256, iVar0))
		{
		}
		else
		{
			iVar1 = (*Global_1248240)[Local_4089.f_3391]->f_19[iVar0]->f_77;
			if (iVar1 == -1)
			{
			}
			else
			{
				func_909(65536, iVar1);
			}
		}
		iVar0++;
	}
}

int func_1409()
{
	iVar0 = func_2266(&(Local_4089.f_3355), Local_4089.f_3393);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_2267(&(Local_4089.f_3355), 0);
	return iVar0;
}

bool func_1410(var uParam0, int iParam1, int iParam2)
{
	return func_1446(uParam0, -693369840, 0, -108566596, iParam1, func_1700(iParam2), 0, 0, 0);
}

bool func_1411(int iParam0, int iParam1)
{
	return func_80(Local_409.f_1[iParam1]->f_9, iParam0);
}

void func_1412(int iParam0, int iParam1)
{
	if (!func_1411(iParam0, iParam1))
	{
		func_105(&(Local_409.f_1[iParam1]->f_9), iParam0);
	}
}

int func_1413(var uParam0, int iParam1)
{
	return func_1466(uParam0, 1784012094, -1, -1776558943, iParam1, 0, 0, 0, 0);
}

void func_1414(int iParam0, int iParam1)
{
	if (&Local_409.f_1[iParam1] != iParam0)
	{
		func_2268(128, iParam1);
		Local_409.f_1[iParam1] = iParam0;
	}
}

void func_1415(int iParam0, int iParam1)
{
	if (func_626(iParam0, iParam1, -1))
	{
		func_511((*Local_920[participant_id_to_int()])[iParam1], iParam0);
	}
}

void func_1416(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (&Local_409.f_1[iParam0] >= 22 && &Local_409.f_1[iParam0] != 16)
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam1))
	{
		return;
	}
	iVar0 = func_2269(iParam0);
	switch (iVar0)
	{
		case 1:
			func_2270(iParam0);
			break;
		case 2:
			func_1414(8, iParam0);
			if (!func_650(Local_409.f_1[iParam0]->f_13))
			{
				func_656(&(Local_409.f_1[iParam0]->f_13));
			}
			break;
		case 4:
			if (func_2271(iParam0, iParam1, iParam3))
			{
				func_2272(iParam0, iParam1);
			}
			else
			{
				func_2270(iParam0);
			}
			break;
		case 3:
			if (func_2271(iParam0, iParam1, iParam3))
			{
				func_2272(iParam0, iParam1);
			}
			else if (&Local_409.f_1[iParam0] != 8 && !func_2273(iParam1, iParam0))
			{
				func_2274(iParam0);
			}
			break;
		case 5:
			if (!func_845(8, 1, -1))
			{
				func_2274(iParam0);
			}
			break;
	}
}

char* func_1417()
{
	return "RDRO_GFH_Sounds";
}

char* func_1418()
{
	return "match_end";
}

Vector3 func_1419(var uParam0, int iParam1)
{
	return func_604(uParam0, 1125306326, 0f, 0f, 0f, 24357435, iParam1, 0, 0, 0, 0);
}

void func_1420(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_28(122) && !func_1481(iParam0, iParam1, 1064154799, 0, 0, 0, 0))
	{
		bVar1 = true;
	}
	iVar3 = func_310(iParam1, iParam0);
	switch (iParam1)
	{
		case 886638433:
			if (bParam2)
			{
				func_301(8192, iParam0);
				iVar0 = player_id();
			}
			else
			{
				iVar0 = func_2275(8192, iParam0);
			}
			func_301(4194304, iParam0);
			func_2276(iVar3, &(Local_4089.f_6[iParam0]->f_68), &(Local_4089.f_2968.f_6), 0, 0);
			if (bVar1 && (iVar0 != 255 || bParam5))
			{
				func_1362(512, iParam0);
				bVar2 = true;
			}
			break;
		case -1918493640:
			if (bParam2)
			{
				func_328(64, iParam0);
				iVar0 = player_id();
			}
			else
			{
				iVar0 = func_1391(64, iParam0);
			}
			func_328(131072, iParam0);
			func_2276(iVar3, &(Local_4089.f_1087[iParam0]->f_12), &(Local_4089.f_2968.f_6), 0, 0);
			if (bVar1 && (iVar0 != 255 || bParam5))
			{
				func_328(67108864, iParam0);
				bVar2 = true;
			}
			break;
		default:
			break;
	}
	if (iParam1 == 886638433)
	{
		iVar6 = func_1358(iParam0);
	}
	else if (iParam1 == -1918493640)
	{
		iVar6 = func_640(iParam0);
	}
	iVar5 = func_896(func_2277(&(Local_4089.f_3355), iVar6), -1);
	if (does_entity_exist(iVar3))
	{
		iVar4 = 0;
		while (iVar4 <= 32)
		{
			if (_does_volume_exist(&(Local_4089.f_2190[iVar4])) && is_entity_in_volume(iVar3, &(Local_4089.f_2190[iVar4]), true, 0))
			{
				switch (Local_4089.f_2190[iVar4]->f_8)
				{
					case 1:
						if (!func_2278(iVar4))
						{
							func_1442(5, iVar4, 0);
						}
						else
						{
							func_1442(4, iVar4, 0);
						}
						break;
					case 5:
						if (iVar5 == iVar4)
						{
							func_2279(iVar4);
							func_2280(iVar4);
						}
						else if (func_2281(iVar4))
						{
							func_2279(iVar4);
							func_2280(iVar4);
						}
						break;
				}
			}
			iVar4++;
		}
	}
	func_2282(iParam0, iParam1);
	if (iVar0 != 255)
	{
		Local_4089.f_2968.f_3++;
		Local_4089.f_2968.f_2 = iVar0;
	}
	func_2283();
	func_2284(bParam3);
	if (bParam2)
	{
		play_sound_frontend("SECRET_FOUND", "TOWN_SECRET_SOUNDS", true, 0);
		func_2285(iVar0, iParam0, iParam1, bParam3, bVar2);
	}
	if (!bParam4)
	{
		func_2286(iVar0, iParam0, iParam1, bParam2);
	}
}

void func_1421(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		set_bit(&(Local_4089.f_6[iParam0]->f_48), iParam1);
	}
	else
	{
		clear_bit(&(Local_4089.f_6[iParam0]->f_48), iParam1);
	}
	if (bParam3)
	{
		func_2287(get_player_index(), iParam0, iParam1, bParam2);
	}
}

void func_1422(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_894(67108864, iParam0);
	func_1442(7, iParam0, 0);
	iVar0 = player_id();
	if (func_28(107))
	{
		iVar1 = -428150648;
		iVar2 = -1;
		func_2288(iParam0, &iVar1, &iVar2);
		func_944(iVar1, iVar2, -1, &iVar3, &iVar4);
		if (func_2289(iVar4, iVar3))
		{
			iVar5 = iVar4;
			func_2290(&iVar4, &iVar3, 1);
			if (iVar3 != 0 && iVar4 != iVar5)
			{
				func_2291(iVar4, iVar3);
			}
		}
	}
	if (bParam2)
	{
		func_2292(iVar0, iParam0, bParam1);
	}
	func_2284(bParam3);
	if (bParam1)
	{
		play_sound_frontend("SECRET_FOUND", "TOWN_SECRET_SOUNDS", true, 0);
		func_2293(iVar0, iParam0, 0);
	}
}

bool func_1423(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	iVar0 = iParam0;
	iVar1 = iParam0;
	switch (iVar0)
	{
		case -413197834:
			if (bParam3)
			{
				(*uParam1)[0] = 45043;
				(*uParam1)[1] = 45106;
				(*uParam1)[2] = 19200;
				(*uParam1)[3] = 49204;
				(*uParam1)[4] = 37280;
				(*uParam1)[5] = 37283;
				(*uParam1)[6] = 15806;
				(*uParam1)[7] = 19910;
				(*uParam1)[8] = 19949;
				(*uParam1)[9] = 32104;
				(*uParam1)[10] = 32143;
				return true;
			}
			else
			{
				return false;
			}
			break;
		case -310794485:
			if (bParam3)
			{
				(*uParam1)[0] = 32060;
				(*uParam1)[1] = 32061;
				(*uParam1)[2] = 2921;
				(*uParam1)[3] = 2922;
				(*uParam1)[4] = 47952;
				(*uParam1)[5] = 57953;
				(*uParam1)[6] = 17347;
				(*uParam1)[7] = 17352;
				return true;
			}
			else
			{
				return false;
			}
			break;
		case -1958054382:
			if (bParam3)
			{
				(*uParam1)[0] = 22188;
				(*uParam1)[1] = 63092;
				(*uParam1)[2] = 63095;
				(*uParam1)[3] = 30011;
				(*uParam1)[4] = 30012;
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1783151449:
			if (bParam3)
			{
				(*uParam1)[0] = 56923;
				(*uParam1)[1] = 56919;
				(*uParam1)[2] = 56920;
				(*uParam1)[3] = 56924;
				(*uParam1)[4] = 56925;
				(*uParam1)[5] = 49490;
				(*uParam1)[6] = 56922;
				(*uParam1)[7] = 56921;
				(*uParam1)[8] = 56970;
				(*uParam1)[9] = 56965;
				(*uParam1)[10] = 56967;
				(*uParam1)[11] = 56966;
				(*uParam1)[12] = 56969;
				(*uParam1)[13] = 56964;
				(*uParam1)[14] = 56968;
				return true;
			}
			else
			{
				return false;
			}
			break;
	}
	switch (iVar1)
	{
		case -747233157:
			if (bParam3)
			{
				return false;
			}
			else
			{
				(*uParam1)[0] = 25538;
				(*uParam2)[0] = 0.91f;
				(*uParam1)[1] = 25539;
				(*uParam2)[1] = 0.91f;
				(*uParam1)[2] = 25540;
				(*uParam2)[2] = 0.91f;
				(*uParam1)[3] = 25541;
				(*uParam2)[3] = 0.91f;
				(*uParam1)[4] = 25542;
				(*uParam2)[4] = 0.91f;
				(*uParam1)[5] = 25543;
				(*uParam2)[5] = 0.91f;
				(*uParam1)[6] = 25544;
				(*uParam2)[6] = 0.91f;
				(*uParam1)[7] = 25545;
				(*uParam2)[7] = 0.91f;
				(*uParam1)[9] = 25457;
				(*uParam2)[9] = 0.91f;
				(*uParam1)[10] = 25458;
				(*uParam2)[10] = 0.91f;
				return true;
			}
			break;
		case 2061610725:
			if (bParam3)
			{
				return false;
			}
			else
			{
				(*uParam1)[0] = 18997;
				(*uParam2)[0] = 0.91f;
				(*uParam1)[1] = 18998;
				(*uParam2)[1] = 0.91f;
				(*uParam1)[2] = 19000;
				(*uParam2)[2] = 0.91f;
				(*uParam1)[3] = 19002;
				(*uParam2)[3] = 0.91f;
				(*uParam1)[4] = 19003;
				(*uParam2)[4] = 0.91f;
				return true;
			}
			break;
		case -1614880863:
			if (bParam3)
			{
				return false;
			}
			else
			{
				(*uParam1)[0] = 48633;
				(*uParam2)[0] = 0.91f;
				(*uParam1)[1] = 48634;
				(*uParam2)[1] = 0.91f;
				(*uParam1)[2] = 48635;
				(*uParam2)[2] = 0.91f;
				(*uParam1)[3] = 48637;
				(*uParam2)[3] = 0.91f;
				(*uParam1)[4] = 48638;
				(*uParam2)[4] = 0.91f;
				(*uParam1)[5] = 48639;
				(*uParam2)[5] = 0.91f;
				return true;
			}
			break;
		case -1327323859:
			if (bParam3)
			{
				return false;
			}
			else
			{
				(*uParam1)[0] = 39204;
				(*uParam2)[0] = 0.91f;
				(*uParam1)[1] = 39205;
				(*uParam2)[1] = 0.91f;
				(*uParam1)[2] = 39206;
				(*uParam2)[2] = 0.91f;
				(*uParam1)[3] = 39207;
				(*uParam2)[3] = 0.91f;
				(*uParam1)[4] = 39208;
				(*uParam2)[4] = 0.91f;
				(*uParam1)[5] = 39209;
				(*uParam2)[5] = 0.91f;
				(*uParam1)[6] = 39210;
				(*uParam2)[6] = 0.91f;
				(*uParam1)[7] = 39211;
				(*uParam2)[7] = 0.91f;
				(*uParam1)[8] = 39212;
				(*uParam2)[8] = 0.91f;
				(*uParam1)[9] = 39155;
				(*uParam2)[9] = 0.91f;
				(*uParam1)[10] = 39156;
				(*uParam2)[10] = 0.91f;
				return true;
			}
			break;
		case 1726931358:
			if (bParam3)
			{
				return false;
			}
			else
			{
				(*uParam1)[0] = 52898;
				(*uParam2)[0] = 0.85f;
				(*uParam1)[1] = 52899;
				(*uParam2)[1] = 0.85f;
				(*uParam1)[2] = 52900;
				(*uParam2)[2] = 0.85f;
				(*uParam1)[3] = 52901;
				(*uParam2)[3] = 0.85f;
				(*uParam1)[4] = 52902;
				(*uParam2)[4] = 0.85f;
				(*uParam1)[5] = 52903;
				(*uParam2)[5] = 0.85f;
				return true;
			}
			break;
		case -1587663805:
			if (bParam3)
			{
				return false;
			}
			else
			{
				(*uParam1)[0] = 23361;
				(*uParam2)[0] = 0.85f;
				(*uParam1)[1] = 23362;
				(*uParam2)[1] = 0.85f;
				(*uParam1)[2] = 23363;
				(*uParam2)[2] = 0.85f;
				(*uParam1)[3] = 23364;
				(*uParam2)[3] = 0.85f;
				(*uParam1)[4] = 23365;
				(*uParam2)[4] = 0.85f;
				(*uParam1)[5] = 23366;
				(*uParam2)[5] = 0.85f;
				(*uParam1)[6] = 23367;
				(*uParam2)[6] = 0.85f;
				(*uParam1)[7] = 23368;
				(*uParam2)[7] = 0.85f;
				(*uParam1)[8] = 23369;
				(*uParam2)[8] = 0.85f;
				(*uParam1)[9] = 23344;
				(*uParam2)[9] = 0.85f;
				(*uParam1)[10] = 23345;
				(*uParam2)[10] = 0.85f;
				(*uParam1)[11] = 23346;
				(*uParam2)[11] = 0.85f;
				(*uParam1)[12] = 23347;
				(*uParam2)[12] = 0.85f;
				(*uParam1)[13] = 23348;
				(*uParam2)[13] = 0.85f;
				(*uParam1)[14] = 23349;
				(*uParam2)[14] = 0.85f;
				(*uParam1)[15] = 23350;
				(*uParam2)[15] = 0.85f;
				(*uParam1)[16] = 23351;
				(*uParam2)[16] = 0.85f;
				(*uParam1)[17] = 23352;
				(*uParam2)[17] = 0.85f;
				(*uParam1)[18] = 23329;
				(*uParam2)[18] = 0.85f;
				return true;
			}
			break;
		case -732626304:
			if (bParam3)
			{
				return false;
			}
			else
			{
				(*uParam1)[0] = 6545;
				(*uParam2)[0] = 0.91f;
				return true;
			}
			break;
	}
	return false;
}

int func_1424(int iParam0)
{
	if (_does_propset_exist(iParam0))
	{
		iVar1 = create_itemset(true);
		iVar2 = _get_entities_from_propset(iParam0, iVar1, 0, false, false);
		if (iVar2 <= 0)
		{
			destroy_itemset(iVar1);
			return iVar0;
		}
		iVar0 = _get_entity_from_item(get_indexed_item_in_itemset(0, iVar1));
		destroy_itemset(iVar1);
		return iVar0;
	}
	return iVar0;
}

void func_1425(int iParam0, float fParam1, float fParam2, float fParam3)
{
	_get_color_from_name(iParam0, &iVar0, &iVar1, &iVar2, &uVar3);
	fVar4 = 255f;
	*fParam1 = (to_float(iVar0) / fVar4);
	*fParam2 = (to_float(iVar1) / fVar4);
	*fParam3 = (to_float(iVar2) / fVar4);
}

void func_1426(int iParam0, int iParam1)
{
	if (&Local_409.f_317[iParam1] != iParam0)
	{
		Local_409.f_317[iParam1] = iParam0;
	}
}

void func_1427(int iParam0, int iParam1)
{
	if (&Local_409.f_478[iParam1] != iParam0)
	{
		Local_409.f_478[iParam1] = iParam0;
	}
}

void func_1428(int iParam0, int iParam1)
{
	if (&Local_409.f_381[iParam1] != iParam0)
	{
		Local_409.f_381[iParam1] = iParam0;
	}
}

void func_1429(int iParam0, int iParam1)
{
	if (&Local_409.f_467[iParam1] != iParam0)
	{
		Local_409.f_467[iParam1] = iParam0;
	}
}

struct<8> func_1430(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42)
{
	iVar1 = func_1371(iParam36, &bVar0);
	if (bVar0)
	{
		iVar2 = iParam38;
		iVar3 = iParam37;
	}
	else
	{
		iVar2 = iParam37;
		iVar3 = -1;
	}
	if (iParam37 == -1)
	{
		return func_590("");
	}
	return func_252(&uParam0, iParam39, "", iVar1, iVar2, iVar3, iParam40, iParam41, iParam42);
}

void func_1431(int iParam0, vector3 vParam1, char* sParam4)
{
	bVar0 = !is_string_null_or_empty(sParam4);
	add_explosion(vParam1, iParam0, 0.5f, !bVar0, false, 1f);
	if (bVar0)
	{
		_0x374f0e716bfcde82(sParam4, vParam1);
	}
}

void func_1432(int iParam0)
{
	Local_920[participant_id_to_int()]->f_95 = iParam0;
}

void func_1433(var uParam0)
{
	Local_4089.f_4144 = uParam0;
}

void func_1434(int iParam0, var uParam1)
{
	iVar3 = 0;
	while (iVar3 <= 15)
	{
		iVar0 = uParam1[iVar3];
		if (iVar0 == -2)
		{
		}
		else
		{
			func_2294(iVar3, iParam0, &iVar1, &iVar2);
			if (iVar1 != 886638433 || iVar2 == -1)
			{
			}
			else
			{
				Local_4089.f_6[iVar2]->f_21 = iVar0;
			}
		}
		iVar3++;
	}
}

void func_1435(int iParam0, int iParam1)
{
	if (!func_1097(iParam0, 1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (func_2295(iParam0) != -1)
	{
		return;
	}
	iVar0 = func_2296(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_2297();
	if (iVar1 == -1)
	{
		return;
	}
	Local_13.f_257[iVar1]->f_3 = iParam0;
	Local_13.f_257[iVar1]->f_2 = iVar0;
	func_1613(16384, iVar1);
}

void func_1436(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2295(iParam0);
	iVar1 = func_2298(iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	clear_bit(Local_13.f_257[iVar0], iVar1);
}

void func_1437(var uParam0)
{
	iVar0 = uParam0->f_8;
	iVar1 = uParam0->f_7;
	iVar2 = uParam0->f_10;
	bVar3 = network_is_host_of_this_script();
	bVar4 = func_2299(iVar1, iVar2);
	iVar5 = func_2295(iVar0);
	if (iVar5 == -1)
	{
		return;
	}
	if (bVar4)
	{
		cVar6 = func_2300(iVar1, iVar2);
	}
	else
	{
		cVar6 = func_2301(iVar5, iVar2);
	}
	if (is_string_null_or_empty(cVar6))
	{
		if (bVar3)
		{
			func_2302(iVar0, iVar1, iVar2);
		}
		return;
	}
	func_2303(iVar5, iVar0, 4);
	if (bVar4)
	{
		func_2305(Local_4089.f_6[iVar0]->f_60, cVar6, func_2304(iVar1, iVar2), 0, 0, 0, 0, 1);
	}
	else
	{
		func_2307(&(Local_4089.f_3395.f_281), func_2306(cVar6), 0, -1, 0, 0);
	}
	func_2308(iVar5, 2);
	Local_4089.f_3395[iVar5]->f_5 = iVar2;
	if (bVar3)
	{
		func_2302(iVar0, iVar1, iVar2);
	}
}

void func_1438(int iParam0, int iParam1, int iParam2)
{
	if (func_1615(256, iParam2))
	{
		iVar0 = func_2309(&(Local_4089.f_3395.f_46[iParam2]));
		func_2303(iParam1, iParam0, iVar0);
	}
	cVar1 = func_2310(iParam0, iParam1, iParam2);
	if (!is_string_null_or_empty(cVar1))
	{
		if (Local_4089.f_3395[iParam1]->f_6 == iParam2)
		{
			func_2311(cVar1, iParam0, iParam1, iParam2);
		}
		else
		{
			func_2307(&(Local_4089.f_3395.f_281), func_2306(cVar1), 0, -1, 0, 0);
		}
	}
	else
	{
		cVar1 = func_2312(iParam0, iParam1, iParam2);
		if (!is_string_null_or_empty(cVar1))
		{
			iVar2 = func_2313(iParam0, iParam1, iParam2);
			func_2305(Local_4089.f_6[iParam0]->f_60, cVar1, iVar2, 0, 0, 0, 0, 1);
		}
	}
	func_2314(iParam0, iParam1, iParam2);
	func_163(&(Local_4089.f_3395.f_46[iParam2]->f_6));
	func_2315(iParam0, iParam2);
	Local_4089.f_3395[iParam1]->f_5 = iParam2;
	if (Local_4089.f_3395[iParam1]->f_6 != -1 && Local_4089.f_3395[iParam1]->f_6 != iParam2)
	{
		func_163(&(Local_4089.f_3395.f_46[Local_4089.f_3395[iParam1]->f_6]->f_6));
	}
	if (func_2316(iParam1) == 0 || func_2316(iParam1) == 8)
	{
		func_2308(iParam1, 1);
	}
}

void func_1439(int iParam0, int iParam1)
{
	iVar1 = Local_4089.f_3395[iParam1]->f_3;
	while (iVar1 <= Local_4089.f_3395[iParam1]->f_4)
	{
		sVar0 = func_2310(iParam0, iParam1, iVar1);
		if (is_string_null_or_empty(sVar0))
		{
		}
		else
		{
			_0xef51242e35242b47(sVar0);
		}
		iVar1++;
	}
}

char* func_1440(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GENERIC_THANKS";
		case 1:
			return "GET_OUT";
		case 2:
			return "LEAVE_NOW";
		case 3:
			return "NICE_WAGON";
		case 4:
			return "NICE_HORSE";
		case 5:
			return "CHALLENGE_THREATEN";
		case 6:
			return "CHALLENGE_THREATEN_ARMED";
		case 7:
			return "ARRIVAL_ENTER_TRAP";
		case 8:
			return "GREET_GENERAL_STRANGER";
		case 80:
			return "GENERIC_FRIGHTENED_HIGH";
		case 81:
			return "GENERIC_FRIGHTENED_MED";
		case 82:
			return "PANIC_HELP";
		case 83:
			return "SCARED_HELP";
		case 84:
			return "COMBAT_FLEE";
		case 85:
			return "COMBAT_FLEE_CALL_OUT";
		case 86:
			return "CALL_FOR_SUPPORT";
		case 87:
			return "GENERIC_FRIGHTENED_MED";
		case 88:
			return "GENERIC_FRIGHTENED_HIGH";
		case 89:
			return "GET_AWAY_FROM_ME";
		case 90:
			return "IM_OUTTA_HERE";
		case 91:
			return "GANG_INTERACT_ESCAPE_PLAYER";
		case 9:
			return "DONT_BE_STUPID";
		case 10:
			return "LAW_LETS_GET_OUT_OF_HERE";
		case 11:
			return "SUPPORT_POSITIVE_RESPONSE";
		case 99:
			return "COMMENT_IDLING";
		case 17:
			return "CHAT_STORY";
		case 15:
			return "WORKING_HARD";
		case 16:
			return "WHATS_THE_LATEST";
		case 100:
			return "HELPED_RECENTLY";
		case 101:
			return "GOING_WELL";
		case 102:
			return "GOING_BADLY";
		case 103:
			return "GREET_BLOODY";
		case 104:
			return "HOWS_IT_GOING";
		case 105:
			return "PLAYER_LOITERING";
		case 12:
			return "ARRIVAL_SURRENDER_ROB_NEUTRAL";
		case 13:
			return "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
		case 14:
			return "CALLOUT_JUST_KILL_EM_NEUTRAL";
		case 73:
			return "RE_PW_PLN_V3_LAW_STOP";
		case 74:
			return "RE_PW_PLN_V2_LAW_BACK";
		case 75:
			return "RE_PW_PLN_V3_LAW_KILL";
		case 76:
			return "RE_PW_LWL_V5_CALLOUT";
		case 77:
			return "RE_PW_LWL_V5_IN_WAGON_B";
		case 78:
			return "RE_PW_LWL_V5_STUCK_HERE";
		case 79:
			return "RE_PW_LWL_V5_CELEBRATE";
		case 18:
			return "LAW_MOVE_INTERACT_ALONG";
		case 19:
			return "GREET_GENERAL_FAMILIAR";
		case 20:
			return "JAIL_LOITER";
		case 21:
			return "PLAYER_ACTING_WEIRD";
		case 22:
			return "GENERIC_ANGRY_REACTION";
		case 23:
			return "CUT_THAT_OUT";
		case 24:
			return "PLAYER_WEAPON_EQUIPPED";
		case 26:
			return "CHAT_RESPONSE_B";
		case 27:
			return "CHAT_RESPONSE_C";
		case 28:
			return "CHAT_RESPONSE_D";
		case 29:
			return "PLAYER_HELPED_TOWN";
		case 30:
			return "PLAYER_LOOKING_WEIRD";
		case 31:
			return "TEASE";
		case 32:
			return "WRONGED_RECENTLY";
		case 106:
			return "GANG_INTERACT_GET_ME_OUT_OF_HERE";
		case 107:
			return "SHOOT_THE_LOCK";
		case 108:
			return "GANG_INTERACT_LETS_GO_URGENT";
		case 109:
			return "CHAT_RESCUED_GANG";
		case 110:
			return "GANG_INTERACT_DONT_LET_THEM_KILL_ME";
		case 111:
			return "GANG_INTERACT_ALLY_ARRIVAL_TAUNT";
		case 112:
			return "GANG_INTERACT_FREE_PRISONER";
		case 113:
			return "GANG_INTERACT_HIDING";
		case 114:
			return "COMMENT_WIN";
		case 115:
			return "GANG_INTERACT_MIND_THE_DRIVING";
		case 116:
			return "GET_RIDERS";
		case 117:
			return "PRISONER_CHATTER";
		case 118:
			return "RELIEVED_REACT";
		case 119:
			return "THEYLL_REGRET_THAT";
		case 120:
			return "GANG_INTERACT_COMPLY";
		case 121:
			return "CHAT_FLATTER";
		case 122:
			return "CHAT_GANG_JAIL_LAWMAN";
		case 123:
			return "FINAL_WARNING";
		case 124:
			return "CAUGHT_OUT_CONFRONT";
		case 125:
			return "GANG_INTERACT_WATCH_YOURSELF";
		case 33:
			return "GENERIC_YES";
		case 54:
			return "GENERIC_SHOCKED_MED";
		case 55:
			return "DISMISSIVE_REACT";
		case 56:
			return "GENERIC_CURSE_MED";
		case 57:
			return "GENERIC_CURSE_HIGH";
		case 58:
			return "RT_INTIMIDATED_ROB_THREATEN";
		case 59:
			return "OPENS_FIRE";
		case 60:
			return "TAUNT_GEN_NEUTRAL";
		case 61:
			return "GENERIC_INSULT_MED_NEUTRAL";
		case 62:
			return "GENERIC_INSULT_MED_MALE";
		case 63:
			return "GENERIC_INSULT_HIGH_NEUTRAL";
		case 64:
			return "GENERIC_INSULT_HIGH_MALE";
		case 65:
			return "DISMISSIVE_REACT";
		case 66:
			return "RT_WON_FIGHT";
		case 67:
			return "VICTIMIZED_REACT";
		case 68:
			return "CHAT_PEDTYPE_DIALOG";
		case 69:
			return "CHAT_PEDTYPE_DIALOG_LOCATION";
		case 70:
			return "GOING_PEDTYPE";
		case 71:
			return "PLAYER_INTERACT_CHAT";
		case 72:
			return "WHATS_YOUR_PROBLEM";
		case 42:
			return "WHAT_IS_THAT";
		case 43:
			return "WHAT_WAS_THAT";
		case 44:
			return "WHO_GOES_THERE";
		case 47:
			return "SEARCHING_NEAR";
		case 48:
			return "SEARCHING_FRUSTRATED";
		case 49:
			return "SPOTTED_NEUTRAL";
		case 45:
			return "THREATEN_UNSEEN";
		case 46:
			return "CONFRONT_UNSEEN";
		case 34:
			return "GANG_SEARCH_DEAD_BODY";
		case 35:
			return "FOUND_BODY";
		case 36:
			return "HUNKER_DOWN";
		case 50:
			return "SHERIFF_WITNESS_THEFT_JAIL";
		case 37:
			return "TIME_TO_GO";
		case 25:
			return "WHATS_GOING_ON";
		case 38:
			return "GUN";
		case 39:
			return "PLEAD";
		case 40:
			return "GENERIC_INSULT_HIGH_FEMALE";
		case 41:
			return "CAMPFIRE_IDLE_CHATTER";
		case 51:
			return "JAIL_QUIET_PRISONER";
		case 52:
			return "GET_SUSPECT_NEUTRAL";
		case 53:
			return "COMBAT_GANG_UP_ON_EM";
		case 96:
			return "FIGHT";
		case 95:
			return "CALLOUT_GETTING_TORN_APART";
		case 92:
			return "CALLOUT_LETS_GET_OUTTA_HERE_NEUTRAL";
		case 97:
			return "GENERIC_ANGRY_SHOUT";
		case 98:
			return "FIGHT_RESPONSE";
		case 94:
			return "NOT_AGAIN";
		case 93:
			return "PLEAD_HOGTIED";
		case 126:
			return "HAND_OVER_MONEY";
		case 127:
			return "GUN_AIMED_AT_LINGERING";
		case 128:
			return "INTIMIDATED_GEN";
		default:
			break;
	}
	return "GENERIC_THANKS";
}

void func_1441(int iParam0, int iParam1, int iParam2)
{
	cVar0 = { func_2317(&(Local_4089.f_3355), iParam0, iParam1) };
	if (is_string_null_or_empty(&cVar0))
	{
		return;
	}
	iVar17 = 0;
	iVar8 = 0;
	while (iVar8 <= 14)
	{
		if (!is_bit_set(iParam2, iVar8))
		{
		}
		else
		{
			Var9 = { func_2318(&(Local_4089.f_3355), iParam0, iParam1, iVar17) };
			iVar17++;
			if (is_string_null_or_empty(&Var9))
			{
				return;
			}
			if ((!func_1097(iVar8, 0) || !does_entity_exist(Local_4089.f_6[iVar8]->f_60)) || is_ped_dead_or_dying(Local_4089.f_6[iVar8]->f_60, true))
			{
				return;
			}
			if (vdist(get_entity_coords(Local_4089.f_6[iVar8]->f_60, false, false), Global_35) > 250f)
			{
				return;
			}
			func_2319(&(Local_4089.f_3395.f_281), Local_4089.f_6[iVar8]->f_60);
			func_2320(&(Local_4089.f_3395.f_281), Local_4089.f_6[iVar8]->f_60, &Var9, 1);
		}
		iVar8++;
	}
	if (!func_2307(&(Local_4089.f_3395.f_281), func_2306(&cVar0), 0, -1, 0, 0))
	{
		return;
	}
}

void func_1442(int iParam0, int iParam1, int iParam2)
{
	if (Local_4089.f_2190[iParam1]->f_8 != iParam0)
	{
		Local_4089.f_2190[iParam1]->f_8 = iParam0;
		if (iParam2 == 1)
		{
			func_2321(iParam1, iParam0);
		}
		if (iParam0 == 7)
		{
			iVar0 = 0;
			while (iVar0 <= 32)
			{
				if (!func_535(268435456, iVar0))
				{
				}
				else if (func_893(&(Local_4089.f_3355), iVar0) != Local_4089.f_2190[iParam1]->f_13)
				{
				}
				else
				{
					func_536(268435456, iVar0);
				}
				iVar0++;
			}
		}
	}
}

void func_1443(var uParam0, var uParam1)
{
	if (uParam0->f_1 == 255 || !network_is_player_active(uParam0->f_1))
	{
		return;
	}
	bVar0 = false;
	if (does_entity_exist(*uParam1) && func_2322(*uParam1, Global_35, 1) < 300f)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (uParam0->f_1 == player_id())
	{
		if (bVar1)
		{
			Global_1198045 = 1;
		}
		else if (bVar0)
		{
			Global_1198045 = 1;
			if ((is_ped_dead_or_dying(*uParam1, true) || is_ped_injured(*uParam1)) || get_ped_config_flag(*uParam1, 580, true))
			{
				func_2323(*uParam1);
			}
		}
	}
	if (!bVar1)
	{
		if (((!does_entity_exist(*uParam1) || is_ped_dead_or_dying(*uParam1, true)) || is_ped_injured(*uParam1)) || get_ped_config_flag(*uParam1, 580, true))
		{
			return;
		}
	}
	if (!network_is_player_active(uParam0->f_1))
	{
		return;
	}
	iVar2 = get_player_ped(uParam0->f_1);
	if (!does_entity_exist(iVar2))
	{
		return;
	}
	if (!bVar1)
	{
		if (func_2324(iVar2, *uParam1, 1, 1) > 300f)
		{
			return;
		}
	}
	if ((func_80(uParam1->f_2, 1) || func_80(uParam1->f_2, 2)) && uParam1->f_1 != 0)
	{
		return;
	}
	uParam1->f_1 = Global_1296859->f_21;
	if (uParam0->f_1 == player_id())
	{
		func_105(&(uParam1->f_2), 1);
	}
	else if (_0x3f59fe6f37869576(player_id(), uParam0->f_1))
	{
		func_105(&(uParam1->f_2), 2);
	}
}

void func_1444(var uParam0, var uParam1)
{
	if (network_does_network_id_exist(uParam0->f_5))
	{
		iVar0 = net_to_ped(uParam0->f_5);
		if (!does_entity_exist(net_to_ped(uParam0->f_5)))
		{
			return;
		}
		if (iVar0 != *uParam1)
		{
			return;
		}
		if (_0x083d497d57b7400f(iVar0) && !is_entity_visible(iVar0))
		{
			func_17(947, 1);
			func_2325(*uParam1);
		}
		else if (network_has_control_of_network_id(uParam0->f_5))
		{
			if (((is_ped_dead_or_dying(iVar0, true) || is_ped_injured(iVar0)) || get_ped_config_flag(iVar0, 580, true)) || (_0x083d497d57b7400f(iVar0) && !is_entity_visible(iVar0)))
			{
				return;
			}
			func_2326(*uParam1);
		}
	}
}

int func_1445(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	return func_1299(uParam0, uParam0->f_2, iParam1, iParam2, iParam3, bParam4, bParam5, iParam6, bParam7, bParam8, iParam9);
}

int func_1446(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	return func_550(uParam0, uParam0->f_2, iParam1, iParam2, iParam3, bParam4, iParam5, iParam6, bParam7, iParam8);
}

void func_1447(struct<36> Param0, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, bool bParam43, int iParam44)
{
	*iParam39 = func_1469(Param0, iParam36, iParam37, iParam38, -163729336, 0, 0, 0, 0);
	*iParam40 = func_1469(Param0, iParam36, iParam37, iParam38, 1905522923, 0, 0, 0, 0);
	*iParam41 = func_1450(func_2327(Param0, iParam36, iParam37, iParam38, -1881775121, 0, 0, 0, 0));
	*iParam42 = func_1450(func_2327(Param0, iParam36, iParam37, iParam38, -86041494, 0, 0, 0, 0));
	*bParam43 = func_1449(Param0, iParam36, iParam37, iParam38, 701375535, 0, 0, 0, 0);
	*iParam44 = func_1469(Param0, iParam36, iParam37, iParam38, -202559547, -1, 0, 0, 0);
}

int func_1448()
{
	if (func_1180(Local_4089.f_3391, 3))
	{
		return 1;
	}
	else if (func_1180(Local_4089.f_3391, 4))
	{
		return 2;
	}
	else if (func_1180(Local_4089.f_3391, 8))
	{
		return 4;
	}
	return 0;
}

bool func_1449(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43)
{
	iVar1 = func_1371(iParam36, &bVar0);
	if (bVar0)
	{
		iVar2 = iParam38;
		iVar3 = iParam37;
	}
	else
	{
		iVar2 = iParam37;
		iVar3 = -1;
	}
	if (iParam37 == -1)
	{
		return iParam40;
	}
	return func_218(&uParam0, iParam39, iParam40, iVar1, iVar2, iVar3, iParam41, iParam42, iParam43);
}

int func_1450(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2076061048:
			return 0;
		case 1960865708:
			return 1;
		case -717214561:
			return 2;
		default:
			break;
	}
	return -1;
}

void func_1451(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_2328(iVar0);
		if (func_146(uParam0->f_7, iVar1))
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

bool func_1452(int iParam0, int iParam1)
{
	iParam0->f_2 = 333456427;
	iParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(iParam0->f_1), iParam0);
}

int func_1453(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

int func_1454(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_float(fParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_1455(int iParam0)
{
	iVar0 = 0;
	if (func_216(&Var1, iParam0))
	{
		func_1261(Var1, 1882878023, &iVar0, 0);
	}
	return iVar0;
}

bool func_1456(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_1453(iParam0, iParam1);
	return func_80(Global_1257541->f_451[iVar0]->f_2, iParam2);
}

var func_1457(vector3 vParam0, var uParam3, bool bParam4)
{
	func_1459(Local_4089.f_3391, &uVar1, vParam0, uParam3, bParam4);
	uVar0 = _0x77a6e4ad0c496f81(&uVar1);
	return uVar0;
}

bool func_1458(vector3 vParam0, var uParam3, bool bParam4)
{
	if (!bParam4)
	{
		iVar0 = 575122756;
	}
	return _0x397769175a7dbb30(vParam0, uParam3, 0, 0, iVar0);
}

void func_1459(int iParam0, var uParam1, vector3 vParam2, var uParam5, bool bParam6)
{
	iVar0 = func_2329(Global_1237665[iParam0], (*Global_1237665)[iParam0]->f_6);
	*uParam1 = { vParam2 };
	uParam1->f_4 = uParam5;
	uParam1->f_6 = -1880617032;
	uParam1->f_7 = iVar0;
	uParam1->f_5 = 160;
	if (!bParam6)
	{
		uParam1->f_8 = 575122756;
	}
}

bool func_1460(int iParam0, int iParam1)
{
	iParam0->f_2 = 1700129460;
	iParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(iParam0->f_1), iParam0);
}

int func_1461(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

int func_1462(int iParam0)
{
	switch (iParam0)
	{
		case -421497631:
			return 0;
		case -993181231:
			return 1;
		case -1957166961:
			return 4;
		case 1615533950:
			return 5;
		case 520141149:
			return 7;
		default:
			break;
	}
	return 1;
}

bool func_1463(int iParam0)
{
	return is_bit_set(Local_13.f_350, iParam0);
}

bool func_1464(int iParam0, int iParam1)
{
	return (Local_13.f_3[iParam1]->f_2 && iParam0) != 0;
}

void func_1465(int iParam0, int iParam1)
{
	if (!network_has_control_of_entity(iParam0))
	{
		return;
	}
	if (func_1581(iParam0, iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (decor_exist_on(iParam0, func_2330()))
	{
		iVar0 = decor_get_int(iParam0, func_2330());
	}
	func_105(&iVar0, iParam1);
	decor_set_int(iParam0, func_2330(), iVar0);
}

int func_1466(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	return func_1697(uParam0, uParam0->f_2, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

int func_1467()
{
	return (*Global_1248240)[Local_4089.f_3391]->f_643.f_37;
}

bool func_1468()
{
	return func_1467() > 0;
}

var func_1469(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43)
{
	iVar1 = func_1371(iParam36, &bVar0);
	if (bVar0)
	{
		iVar2 = iParam38;
		iVar3 = iParam37;
	}
	else
	{
		iVar2 = iParam37;
		iVar3 = -1;
	}
	if (iParam37 == -1)
	{
		return iParam40;
	}
	return func_886(&uParam0, iParam39, iParam40, iVar1, iVar2, iVar3, iParam41, iParam42, iParam43);
}

bool func_1470(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

int func_1471(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	Var0 = Local_4089.f_3355.f_4;
	Var0.f_1 = func_255(&(Local_4089.f_3355), Var0, 0);
	if (func_1701(&(Local_4089.f_3355), Var0, &Var0, iParam1, bParam0, iParam3, 1) && func_1701(&(Local_4089.f_3355), Var0, &Var0, iParam2, 0, 0, 0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

int func_1472(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	fVar0 = 200f;
	iVar10 = -1;
	iVar7 = 0;
	while (iVar7 <= (iParam0 - 1))
	{
		iVar5 = 0;
		fVar6 = 0f;
		if (!func_2331(uParam1, iParam2, iParam3, iParam4, iVar7))
		{
		}
		else
		{
			vVar11 = { func_604(uParam1, 1125306326, 0f, 0f, 0f, iParam2, iParam3, iParam4, 1727197243, iVar7, 0) };
			if (func_67(vVar11))
			{
			}
			else
			{
				fVar14 = fVar0;
				bVar15 = false;
				iVar3 = 0;
				while (iVar3 <= 31)
				{
					iVar1 = int_to_playerindex(iVar3);
					if (!network_is_player_active(iVar1))
					{
					}
					else if (!network_is_player_a_participant(iVar1))
					{
					}
					else
					{
						iVar2 = get_player_ped(iVar1);
						if (!does_entity_exist(iVar2))
						{
						}
						else
						{
							fVar4 = vdist(get_entity_coords(iVar2, false, false), vVar11);
							if (fVar4 < fVar14)
							{
								fVar14 = fVar4;
							}
							if (is_sphere_visible_to_player(iVar1, vVar11, 1.5f, 85f))
							{
								bVar15 = true;
							}
						}
					}
					iVar3++;
				}
				if (fVar14 > 30f)
				{
					iVar5 += 2;
				}
				if (!bVar15)
				{
					iVar5++;
				}
				if (iVar5 == 0)
				{
				}
				else
				{
					fVar6 = get_random_float_in_range(0f, (fVar14 * fVar14));
					if (iVar5 > iVar8 || (iVar5 == iVar8 && fVar6 > fVar9))
					{
						iVar8 = iVar5;
						fVar9 = fVar6;
						iVar10 = iVar7;
					}
				}
			}
		}
		iVar7++;
	}
	if (iVar10 == -1)
	{
		return -1;
	}
	return iVar10;
}

int func_1473(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_2332(0, iParam0, &uVar0);
	iVar11 = 0;
	while (iVar11 <= (iParam0 - 1))
	{
		iVar12 = &uVar0[iVar11];
		if (func_2331(uParam1, iParam2, iParam4, iParam5, iVar12))
		{
			return iVar12;
		}
		iVar11++;
	}
	return 0;
}

int func_1474(var uParam0, bool bParam1)
{
	return func_1445(uParam0, 708690423, 0, -1509591557, bParam1, 0, 0, 0, 0, 0);
}

int func_1475()
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (!func_1097(iVar0, 0) && !network_does_network_id_exist(Local_409.f_1[iVar0]->f_14))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1476()
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (!func_1097(iVar0, 0) && !network_does_network_id_exist(Local_409.f_1[iVar0]->f_14))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_1477(var uParam0, int iParam1, var uParam2)
{
	Var0.f_5 = -1;
	iVar6 = func_1445(uParam0, -764529328, 363724928, -1509591557, iParam1, 0, 0, 0, 0, 0);
	Var0 = func_2333(uParam0, iVar6, uParam2);
	Var0.f_3 = func_1445(uParam0, 1637642963, 1785547855, -1509591557, iParam1, 0, 0, 0, 0, 0);
	Var0.f_4 = func_1445(uParam0, 459583506, -1902000894, -1509591557, iParam1, 0, 0, 0, 0, 0);
	Var0.f_5 = func_2334(func_1445(uParam0, 1458979925, 0, -1509591557, iParam1, 0, 0, 0, 0, 0));
	Var0.f_1 = func_1445(uParam0, -385619080, 0, -1509591557, iParam1, 0, 0, 0, 0, 0);
	Var0.f_2 = func_1445(uParam0, -1336211009, 0, -1509591557, iParam1, 0, 0, 0, 0, 0);
	return Var0;
}

bool func_1478(int iParam0, int iParam1, int iParam2)
{
	if (Local_13.f_370 < 10)
	{
		return true;
	}
	switch (iParam0)
	{
		case -1426507703:
		case 401658241:
			return false;
	}
	return true;
}

bool func_1479(int iParam0)
{
	switch (iParam0)
	{
		case -2091093137:
		case -2047561093:
		case -1387380597:
		case -150015663:
		case 506419716:
		case 1324229833:
		case 1776830298:
			return true;
	}
	return false;
}

int func_1480(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	bVar2 = func_589(iParam0, iParam1, &iVar0, &iVar1);
	if (bVar2 == -1)
	{
		return iParam3;
	}
	return func_886(&(Local_4089.f_3355), iParam2, iParam3, iVar0, bVar2, iVar1, iParam4, bParam5, iParam6);
}

int func_1481(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	bVar2 = func_589(iParam0, iParam1, &iVar0, &iVar1);
	if (bVar2 == -1)
	{
		return iParam3;
	}
	return func_218(&(Local_4089.f_3355), iParam2, iParam3, iVar0, bVar2, iVar1, iParam4, iParam5, iParam6);
}

bool func_1482(var uParam0, int iParam1)
{
	return func_218(uParam0, 463617487, 0, 24357435, iParam1, 0, 0, 0, 0);
}

bool func_1483(var uParam0, int iParam1)
{
	return func_218(uParam0, -1891783953, 0, 24357435, iParam1, 0, 0, 0, 0);
}

bool func_1484(var uParam0, int iParam1)
{
	return func_218(uParam0, -1894202761, 1, 24357435, iParam1, 0, 0, 0, 0);
}

bool func_1485(var uParam0, int iParam1)
{
	return func_218(uParam0, -517359744, 0, -622270828, iParam1, 0, 0, 0, 0);
}

bool func_1486(var uParam0, int iParam1, int iParam2)
{
	return func_218(uParam0, -517359744, 0, 1440683355, iParam1, iParam2, 0, 0, 0);
}

bool func_1487(int iParam0, int iParam1)
{
	return func_80(&(Local_13.f_179[iParam1]), iParam0);
}

void func_1488(int iParam0, int iParam1)
{
	if (!func_1487(iParam0, iParam1))
	{
		func_105(Local_13.f_179[iParam1], iParam0);
	}
}

bool func_1489(var uParam0, int iParam1)
{
	return func_218(uParam0, -517359744, 0, -1417610999, iParam1, 0, 0, 0, 0);
}

bool func_1490(var uParam0, int iParam1, int iParam2)
{
	return func_218(uParam0, -517359744, 0, 344425994, iParam1, iParam2, 0, 0, 0);
}

int func_1491()
{
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (!func_309(iVar0, 0) && !network_does_network_id_exist(Local_409.f_317[iVar0]->f_5))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1492(int iParam0, int iParam1)
{
	if (!func_652(iParam0, iParam1))
	{
		func_105(&(Local_409.f_317[iParam1]->f_4), iParam0);
	}
}

int func_1493(var uParam0, bool bParam1)
{
	return func_1445(uParam0, 1637642963, 1786891627, -384272353, bParam1, 0, 0, 0, 0, 0);
}

bool func_1494(int iParam0)
{
	switch (iParam0)
	{
		case -714084323:
			return true;
	}
	return false;
}

int func_1495()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!func_1562(iVar0, 0) && !network_does_network_id_exist(Local_409.f_381[iVar0]->f_10))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1496(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_13 - 1))
	{
		iVar2 = func_1497(&(Local_4089.f_3355), iVar0);
		if ((iParam0 == -2067454306 || iParam0 == 477970332) || iParam0 == 401658241)
		{
			if ((iVar2 == -2067454306 && func_1498(&(Local_4089.f_3355), iVar0) == iParam2) && func_1499(&(Local_4089.f_3355), iVar0) == iParam1)
			{
				iVar1++;
			}
		}
		else if (iVar2 == iParam0 && func_1499(&(Local_4089.f_3355), iVar0) == iParam1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1497(var uParam0, bool bParam1)
{
	return func_591(uParam0, -1507251761, 0, 717522528, bParam1, 0, 0, 0, 0, 0);
}

int func_1498(var uParam0, bool bParam1)
{
	return func_886(uParam0, 125307073, -1, 717522528, bParam1, 0, 0, 0, 0);
}

int func_1499(var uParam0, bool bParam1)
{
	return func_886(uParam0, -50013691, -1, 717522528, bParam1, 0, 0, 0, 0);
}

bool func_1500(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	iVar0 = func_2335(&(Local_4089.f_3355), iParam5);
	if (!func_768(iVar0, iParam0, vParam1, iParam4, -1276434456, iParam5, iParam6, iParam7, iParam8) || *iParam0 == -1)
	{
		return false;
	}
	return true;
}

void func_1501(int iParam0, int iParam1)
{
	if (!func_646(iParam0, iParam1))
	{
		func_105(&(Local_409.f_381[iParam1]->f_4), iParam0);
	}
}

bool func_1502(bool bParam0)
{
	if (bParam0 && Local_409.f_460 == 10)
	{
		return false;
	}
	return Local_409.f_460 != 0;
}

void func_1503(int iParam0)
{
	if (Local_409.f_460 != iParam0)
	{
		Local_409.f_460 = iParam0;
	}
}

void func_1504(int iParam0)
{
	if (!func_2060(iParam0))
	{
		func_105(&(Local_409.f_460.f_3), iParam0);
	}
}

int func_1505()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_1372(iVar0, 0) && !func_1375(4, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1506(var uParam0, int iParam1)
{
	Var0 = uParam0->f_4;
	Var0.f_2 = -1214233391;
	Var0.f_1 = func_255(uParam0, Var0, Var0.f_2);
	Var0.f_3 = iParam1;
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

void func_1507()
{
	Local_13.f_359++;
}

int func_1508()
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!func_1574(iVar0, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1509()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_1599(iVar0, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1510(int iParam0, int iParam1)
{
	if (&Local_409.f_494[iParam1] != iParam0)
	{
		Local_409.f_494[iParam1] = iParam0;
	}
}

int func_1511(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	iVar0 = Local_4089.f_2190[iParam0]->f_13;
	iVar1 = Local_4089.f_2190[iParam0]->f_14;
	if (iVar1 == 0)
	{
		return -1;
	}
	iVar2 = func_892(&(Local_4089.f_3355), iVar1);
	if (iVar2 <= 0)
	{
		return -1;
	}
	fVar10 = 99999f;
	if (iParam5 >= 0)
	{
		vVar5 = { func_2336(&(Local_4089.f_3355), iVar0, iVar1, iParam5, 0) };
		fVar9 = vdist(vVar5, vParam1);
	}
	iVar3 = 0;
	while (iVar3 <= (iVar2 - 1))
	{
		vVar5 = { func_2336(&(Local_4089.f_3355), iVar0, iVar1, iVar3, 0) };
		if (func_67(vParam1))
		{
		}
		else
		{
			fVar8 = vdist(vVar5, vParam1);
			if (fVar8 < fVar10)
			{
				if ((((iVar3 != iParam5 && iParam5 >= 0) && fParam4 > 0f) && fVar9 > 0f) && (fVar8 / fVar9) >= fParam4)
				{
				}
				else
				{
					iVar4 = iVar3;
					fVar10 = fVar8;
				}
			}
		}
		iVar3++;
	}
	return iVar4;
}

int func_1512(int iParam0)
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

int func_1513(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = 1815398824;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

int func_1514(var uParam0, bool bParam1)
{
	return func_591(uParam0, 764457433, 363724928, -933304340, bParam1, 0, 0, 0, 0, 0);
}

int func_1515(var uParam0, int iParam1)
{
	return func_591(uParam0, 1731164987, 363724928, -933304340, iParam1, 0, 0, 0, 0, 0);
}

var func_1516(var uParam0, int iParam1)
{
	return func_605(uParam0, 1822601469, 0f, -933304340, iParam1, 0, 0, 0, 0);
}

void func_1517()
{
	Var0.f_10 = 255;
	Var0.f_4 = 9;
	Var0.f_5 = Local_4089.f_3391;
	func_1519(&Var0, func_880(0, 8));
}

void func_1518()
{
	Var0.f_10 = 255;
	Var0.f_4 = 12;
	Var0.f_5 = Local_4089.f_3391;
	func_1519(&Var0, func_880(0, 8));
}

void func_1519(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 19, 9, &uParam1);
	func_2234(uParam0);
}

void func_1520(int iParam0, int iParam1, int iParam2)
{
	bVar2 = func_937(131072, iParam0, 255);
	*iParam1 = 255;
	*iParam2 = 255;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar1))
		{
			if (func_80(&(Local_920[iVar0]->f_80[iParam0]), 2))
			{
				*iParam1 = network_get_player_index(iVar1);
				if (!bVar2)
				{
					return;
				}
			}
			else if (func_80(&(Local_920[iVar0]->f_80[iParam0]), 8))
			{
				*iParam2 = network_get_player_index(iVar1);
				return;
			}
			else if (bVar2)
			{
				if (Local_4089.f_3027[iParam0]->f_8 != -1 && func_182(iVar0) != Local_4089.f_3027[iParam0]->f_8)
				{
				}
				else
				{
					*iParam1 = 255;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_1521(int iParam0, int iParam1)
{
	if (!func_1377(8, iParam0))
	{
		func_2337(8, iParam0);
	}
}

void func_1522(int iParam0, int iParam1)
{
	fVar0 = func_2338(&(Local_4089.f_3355), iParam0, func_1183());
	fVar1 = get_random_float_in_range(0f, 1f);
	if (fVar1 > fVar0)
	{
		func_2337(8, iParam0);
	}
	else
	{
		if (iParam1 != 255 && network_is_player_active(iParam1))
		{
			iVar5 = get_player_ped(iParam1);
			if (does_entity_exist(iVar5))
			{
				vVar2 = { get_entity_coords(iVar5, false, false) };
			}
		}
		func_1653(vVar2, 0, 0, Local_4089.f_3027[iParam0]->f_5, -1, 0);
		iVar6 = func_2339(iParam0);
		if (iVar6 != 255)
		{
			Local_13.f_203[iParam0]->f_1 = iVar6;
		}
		else
		{
			Local_13.f_203[iParam0]->f_1 = iParam1;
		}
		func_2337(2, iParam0);
		func_2340(iParam0);
	}
}

void func_1523(int iParam0, int iParam1)
{
	Local_13.f_203[iParam0]->f_1 = iParam1;
	func_2341(2, iParam0);
}

void func_1524(int iParam0)
{
	bVar0 = func_1377(2, iParam0);
	if (bVar0)
	{
		if (func_1377(4, iParam0))
		{
			return;
		}
	}
	else if (!func_1377(4, iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 14)
	{
		if (!func_2342(iVar1, iParam0, bVar0))
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		if (bVar0)
		{
			func_2337(4, iParam0);
		}
		else
		{
			func_2341(4, iParam0);
		}
	}
}

void func_1525()
{
	if (func_1855(2, -1))
	{
		func_1503(3);
	}
}

void func_1526()
{
	if (Local_4089.f_1500.f_7 == -1066665813)
	{
		if (func_2343(Local_4089.f_1500.f_3))
		{
			func_1503(4);
		}
		else
		{
			func_1503(10);
		}
	}
	else
	{
		func_2344(Local_4089.f_1500.f_3, 1);
		func_1503(4);
	}
}

void func_1527()
{
	if (Local_4089.f_3969 == get_frame_count())
	{
		return;
	}
	if (func_2345(&bVar0))
	{
		func_1504(64);
		func_2346(1);
		func_1503(5);
	}
	else if (bVar0)
	{
		func_1503(10);
	}
}

void func_1528()
{
	if (func_2347())
	{
		func_1503(9);
		return;
	}
	if (func_2196() == 448485414 && func_2348(Local_409.f_460.f_2))
	{
		func_1503(9);
		return;
	}
	if (func_2349(16384))
	{
		func_1504(16384);
	}
	else
	{
		func_2346(16384);
	}
	if (func_121(4096, -1, 0))
	{
		func_329(4096, 1);
	}
	else
	{
		func_831(4096, 1);
	}
	switch (Local_4089.f_1500.f_4)
	{
		case -726090311:
			func_2350(0);
			break;
		case 964169170:
			func_2350(0);
			break;
		case 699984925:
			func_2350(1);
			break;
	}
}

void func_1529()
{
	if (func_2351(256))
	{
		func_1503(10);
	}
}

void func_1530()
{
	if (func_2351(128))
	{
		if (!func_2060(64))
		{
			func_329(8, 1);
		}
		func_2352(1);
		func_1503(0);
		Var0.f_2 = -1;
		Local_409.f_460 = { Var0 };
	}
}

void func_1531(int iParam0)
{
	iVar0 = &Local_409.f_1[iParam0];
	if (iVar0 <= 5 || iVar0 == 22)
	{
		return;
	}
	if (func_796(2048, iParam0))
	{
		return;
	}
	bVar1 = func_58(61, iParam0);
	switch (Local_409.f_1[iParam0]->f_1)
	{
		case -2104935250:
		case -2064282978:
		case -1511661506:
		case -1305506499:
		case -1155134795:
		case -428150648:
		case 367410298:
		case 468586057:
		case 477970332:
		case 534304827:
		case 763672902:
		case 817157923:
		case 1484665408:
		case 1765845133:
		case 1882441528:
		case 1915478987:
		case 2006171510:
			if ((iVar0 == 6 || func_2353(iVar0)) || (iVar0 == 16 && bVar1))
			{
				func_2354(iParam0);
			}
			break;
		case -1992872838:
		case -1837229711:
		case -1614462519:
		case -1111360041:
		case -1081499674:
		case -728144790:
		case -643146460:
		case -184918272:
		case -69017634:
		case 18568229:
		case 1123706370:
		case 1236670171:
		case 1582696781:
		case 1787431880:
		case 1922896124:
			if (((iVar0 == 8 || iVar0 == 6) || func_2353(iVar0)) || (iVar0 == 16 && bVar1))
			{
				func_2354(iParam0);
			}
			break;
		case -2103191760:
		case -1857350969:
		case -1023903568:
		case -786415871:
		case -180256388:
		case -33963982:
		case 183014823:
		case 406316137:
		case 926531522:
		case 1118817659:
		case 1364359119:
		case 1511910102:
		case 1637668086:
		case 2096477759:
			if (((&Local_409.f_1[iParam0] == 12 || &Local_409.f_1[iParam0] == 14) || &Local_409.f_1[iParam0] == 8) || (iVar0 == 16 && bVar1))
			{
				func_2354(iParam0);
			}
			break;
		case -1066665813:
		case 478642682:
			if (iVar0 == 6 && is_ped_human(Local_4089.f_6[iParam0]->f_60))
			{
				func_2354(iParam0);
			}
			break;
		case -227517162:
			if (iVar0 == 6)
			{
				func_2354(iParam0);
			}
			break;
		case -126469426:
			if ((iVar0 == 6 || iVar0 == 8) || func_2353(iVar0))
			{
				func_2354(iParam0);
				if (&Local_409.f_1[iParam0] == 22)
				{
					func_2355(iParam0);
				}
			}
			break;
		case -2097642849:
		case -2011805335:
		case -887274986:
		case 291675087:
		case 1958222724:
		case 2083566000:
			if (iVar0 == 8 || iVar0 == 6)
			{
				func_2354(iParam0);
			}
			else if (((Local_409.f_1[iParam0]->f_1 == 1958222724 || Local_409.f_1[iParam0]->f_1 == -887274986) || Local_409.f_1[iParam0]->f_1 == 291675087) || Local_409.f_1[iParam0]->f_1 == -2097642849)
			{
				if ((iVar0 == 6 || func_2353(iVar0)) || (iVar0 == 16 && bVar1))
				{
					func_2354(iParam0);
				}
			}
			break;
		case 893394466:
			if (iVar0 == 8)
			{
				func_2354(iParam0);
			}
			break;
		case 1240942142:
			if ((((((iVar0 == 6 || iVar0 == 8) || iVar0 == 9) || iVar0 == 10) || iVar0 == 11) || func_2353(iVar0)) || (iVar0 == 16 && bVar1))
			{
				func_2354(iParam0);
			}
			break;
		default:
			break;
	}
}

void func_1532(int iParam0)
{
	if ((func_1389(Local_409.f_1[iParam0]->f_1) && &Local_409.f_1[iParam0] != 8) && !func_2356(iParam0))
	{
		return;
	}
	switch (Local_409.f_1[iParam0]->f_3)
	{
		case 0:
			func_2357(iParam0);
			break;
		case 1:
			func_2358(iParam0);
			break;
		case 2:
			func_2359(iParam0);
			break;
	}
}

void func_1533(int iParam0, int iParam1)
{
	if (func_58(iParam0, iParam1))
	{
		func_269(&(Local_4089.f_6[iParam1]->f_39), iParam0, 3);
	}
}

void func_1534(int iParam0)
{
	if (func_58(0, iParam0))
	{
		if (func_1627(4096, iParam0))
		{
			func_1412(4096, iParam0);
		}
		if (func_2360(1024, iParam0))
		{
			func_1384(1024, iParam0);
		}
		if (func_2360(4194304, iParam0))
		{
			func_1384(4194304, iParam0);
		}
		if (func_2360(2048, iParam0))
		{
			func_1384(2048, iParam0);
		}
		if (func_2360(4096, iParam0))
		{
			func_1384(4096, iParam0);
		}
		if (func_1481(iParam0, 886638433, -1540218250, 0, 0, 0, 0) || (func_58(55, iParam0) && func_1481(iParam0, 886638433, -1540218250, 1, 0, 0, 0)))
		{
			func_1384(65536, iParam0);
		}
		if (!func_120(4194304) && func_1481(iParam0, 886638433, 1216124350, 0, 0, 0, 0))
		{
			func_329(4194304, 1);
		}
		if (func_1341(Local_4089.f_6[iParam0]->f_2, 1) && (Local_409.f_1[iParam0]->f_4 == 401658241 || Local_409.f_1[iParam0]->f_4 == 477970332))
		{
			func_1412(32768, iParam0);
			if (func_2361(iParam0))
			{
				func_1414(34, iParam0);
			}
		}
		if (Local_13.f_381 == -1)
		{
			iVar0 = func_2362(iParam0, 886638433, -1027663921);
			if (iVar0 > 0)
			{
				Local_13.f_381 = get_random_int_in_range(0, iVar0);
			}
		}
		func_2363(iParam0);
		func_1414(2, iParam0);
	}
}

void func_1535(int iParam0)
{
	if (func_58(1, iParam0))
	{
		if (func_1357(iParam0) == 401658241)
		{
			iVar0 = func_308(func_1130(Local_409.f_1[iParam0]->f_18, 0, 1176255488, 0));
			if (does_entity_exist(iVar0))
			{
				Local_409.f_1[iParam0]->f_18 = { get_entity_coords(iVar0, false, false) };
			}
		}
		if (((Local_409.f_1[iParam0]->f_4 != 477970332 && Local_409.f_1[iParam0]->f_4 != -2067454306) && ((Local_4089.f_6[iParam0]->f_1 == -1902000894 && !func_796(16, iParam0)) || func_2364(iParam0))) || func_1481(iParam0, 886638433, 1616912592, 0, 0, 0, 0))
		{
			func_1414(4, iParam0);
		}
		else if (func_1479(Local_409.f_1[iParam0]->f_4))
		{
			func_1414(4, iParam0);
		}
		else
		{
			func_1414(3, iParam0);
		}
	}
}

void func_1536(int iParam0)
{
	Var0.f_3 = -1;
	uVar4 = -1;
	func_2365(iParam0, &uVar4);
	Var14 = { func_2366(iParam0, 886638433) };
	iVar22 = func_2367(Var14, &uVar4, &Var0);
	switch (iVar22)
	{
		case 0:
			break;
		case 2:
			func_2368(iParam0, &uVar4, &Var0);
			break;
		case 1:
			func_2369(iParam0, &uVar4, &Var0);
			break;
	}
}

void func_1537(int iParam0)
{
	if (!func_1411(2, iParam0))
	{
		if (Local_4089.f_3969 == get_frame_count())
		{
			return;
		}
		bVar0 = false;
		if (func_1479(func_1357(iParam0)))
		{
			if (!func_1097(Local_409.f_1[iParam0]->f_5, 1))
			{
				func_1414(34, iParam0);
			}
			else if (&Local_409.f_1[Local_409.f_1[iParam0]->f_5] > 4)
			{
				func_1412(2, iParam0);
			}
		}
		else if (func_796(2, iParam0))
		{
			if (!func_1562(Local_409.f_1[iParam0]->f_11, 1))
			{
				func_1414(34, iParam0);
			}
			else if (&Local_409.f_381[Local_409.f_1[iParam0]->f_11] > 4)
			{
				if (!func_242(Local_409.f_381[Local_409.f_1[iParam0]->f_11]->f_10))
				{
					network_request_control_of_network_id(Local_409.f_381[Local_409.f_1[iParam0]->f_11]->f_10);
				}
				else if (func_2370(iParam0, &bVar0))
				{
					func_1412(2, iParam0);
				}
			}
		}
		else if (func_54(iParam0))
		{
			if (network_does_network_id_exist(Local_409.f_1[iParam0]->f_14))
			{
				func_1412(2, iParam0);
			}
		}
		else if (func_2370(iParam0, &bVar0))
		{
			func_1412(2, iParam0);
		}
		else if (bVar0)
		{
			func_1414(34, iParam0);
		}
		if (func_1411(2, iParam0))
		{
			func_2371(iParam0);
		}
	}
	else if (func_626(2, iParam0, -1))
	{
		func_2268(1, iParam0);
		func_1414(5, iParam0);
	}
}

void func_1538(int iParam0)
{
	if (func_2372(iParam0))
	{
		func_1414(34, iParam0);
		return;
	}
	if (!func_1479(func_1357(iParam0)))
	{
		if (func_1357(iParam0) == 448485414)
		{
			if (func_2348(Local_409.f_1[iParam0]->f_5))
			{
				func_1414(33, iParam0);
				return;
			}
			func_2373(iParam0, 0);
		}
		func_2374(iParam0);
		func_2375(iParam0);
		func_2376(iParam0);
		func_2377(iParam0);
		func_2378(iParam0);
	}
	if (func_2379(&(Local_409.f_1[iParam0])) || func_2353(&(Local_409.f_1[iParam0])))
	{
		func_2380(iParam0);
	}
	switch (Local_409.f_1[iParam0]->f_1)
	{
		case 478642682:
			func_2381(iParam0);
			break;
		case -227517162:
			func_2381(iParam0);
			break;
		case -1066665813:
			func_2381(iParam0);
			break;
		case 1785014074:
			func_2382(iParam0);
			break;
		case -707029077:
			func_2383(iParam0);
			break;
		case 294392114:
			func_2384(iParam0);
			break;
		case -428150648:
			func_2385(iParam0, 0);
			break;
		case 1882441528:
			func_2385(iParam0, 0);
			break;
		case -1511661506:
			func_2385(iParam0, 1);
			break;
		case 1922896124:
			func_2386(iParam0);
			break;
		case -1837229711:
			func_2386(iParam0);
			break;
		case 1123706370:
			func_2386(iParam0);
			break;
		case 18568229:
			func_2386(iParam0);
			break;
		case -1992872838:
			func_2386(iParam0);
			break;
		case -728144790:
			func_2386(iParam0);
			break;
		case -1111360041:
			func_2387(iParam0);
			break;
		case -1614462519:
			func_2388(iParam0);
			break;
		case -643146460:
			func_2388(iParam0);
			break;
		case 1236670171:
			func_2388(iParam0);
			break;
		case 1765845133:
			func_2389(iParam0);
			break;
		case 817157923:
			func_2385(iParam0, 0);
			break;
		case 1958222724:
			func_2390(iParam0, 0, 0);
			break;
		case -887274986:
			func_2390(iParam0, 0, 1);
			break;
		case 291675087:
			func_2390(iParam0, 0, 0);
			break;
		case -2003068922:
			func_2383(iParam0);
			break;
		case 1665936245:
			func_2383(iParam0);
			break;
		case -2011805335:
			func_2391(iParam0);
			break;
		case 836347960:
			func_2383(iParam0);
			break;
		case -2097642849:
			func_2390(iParam0, 0, 0);
			break;
		case -207712283:
			func_2383(iParam0);
			break;
		case 2083566000:
			func_2392(iParam0);
			break;
		case -391787427:
			func_2383(iParam0);
			break;
		case -1155134795:
			func_2390(iParam0, 0, 0);
			break;
		case 1915478987:
			func_2390(iParam0, 1, 0);
			break;
		case 534304827:
			func_2390(iParam0, 0, 1);
			break;
		case -1305506499:
			func_2390(iParam0, 1, 1);
			break;
		case 2006171510:
			func_2390(iParam0, 0, 0);
			break;
		case 367410298:
			func_2390(iParam0, 0, 1);
			break;
		case 157175079:
			func_2393(iParam0);
			break;
		case -688110236:
			func_2394(iParam0);
			break;
		case 1582696781:
			func_2395(iParam0);
			break;
		case -1266062299:
			func_2396(iParam0);
			break;
		case -490885662:
			func_2396(iParam0);
			break;
		case 2021684520:
			func_2396(iParam0);
			break;
		case -1729245824:
			func_2396(iParam0);
			break;
		case -608069142:
			func_2396(iParam0);
			break;
		case 1461000558:
			func_2397(iParam0);
			break;
		case 893394466:
			func_2398(iParam0);
			break;
		case 805150603:
			func_2399(iParam0);
			break;
		case 177965392:
			func_2400(iParam0);
			break;
		case 227388558:
			func_2401(iParam0);
			break;
		case 727593135:
			func_2401(iParam0);
			break;
		case -126469426:
			func_2402(iParam0);
			break;
		case -2104935250:
			func_2403(iParam0);
			break;
		case 763672902:
			func_2403(iParam0);
			break;
		case -184918272:
			func_2403(iParam0);
			break;
		case -69017634:
			func_2403(iParam0);
			break;
		case 468586057:
			func_2404(iParam0);
			break;
		case -965822591:
			func_2405(iParam0);
			break;
		case 477970332:
			func_2406(iParam0);
			break;
		case -2064282978:
			func_2407(iParam0);
			break;
		case 2096477759:
			func_2408(iParam0, 0, 0);
			break;
		case 406316137:
			func_2408(iParam0, 0, 0);
			break;
		case 1637668086:
			func_2408(iParam0, 0, 1);
			break;
		case -33963982:
			func_2408(iParam0, 0, 1);
			break;
		case 926531522:
			func_2408(iParam0, 0, 0);
			break;
		case 1511910102:
			func_2408(iParam0, 0, 0);
			break;
		case -2103191760:
			func_2408(iParam0, 1, 0);
			break;
		case -1023903568:
			func_2408(iParam0, 1, 0);
			break;
		case -180256388:
			func_2408(iParam0, 0, 0);
			break;
		case -1857350969:
			func_2408(iParam0, 0, 1);
			break;
		case 183014823:
			func_2408(iParam0, 0, 1);
			break;
		case 1118817659:
			func_2408(iParam0, 0, 1);
			break;
		case 1364359119:
			func_2408(iParam0, 0, 1);
			break;
		case -786415871:
			func_2408(iParam0, 0, 0);
			break;
		case 1787431880:
			func_2409(iParam0);
			break;
		case -1081499674:
			func_2410(iParam0);
			break;
		case 559398942:
			func_2411(iParam0);
			break;
		case 1448834071:
			func_2412(iParam0);
			break;
		case 1525844114:
			func_2413(iParam0);
			break;
		case 260262302:
			func_2412(iParam0);
			break;
		case -746291497:
			func_2412(iParam0);
			break;
		case -1120922371:
			func_2412(iParam0);
			break;
		case 449550821:
			func_2412(iParam0);
			break;
		case 1834398740:
			func_2412(iParam0);
			break;
		case -773638411:
			func_2412(iParam0);
			break;
		case 566981038:
			func_2412(iParam0);
			break;
		case -1754017856:
			func_2412(iParam0);
			break;
		case 810164089:
			func_2412(iParam0);
			break;
		case -726384468:
			func_2414(iParam0);
			break;
		case 9071781:
			func_2415(iParam0);
			break;
		case 1981738329:
			func_2416(iParam0);
			break;
		case 218600141:
			func_2417(iParam0);
			break;
		case -1599770769:
			func_2417(iParam0);
			break;
		case -1322096809:
			func_2418(iParam0);
			break;
		case -1987434232:
			func_2419(iParam0);
			break;
		case 2020674482:
			func_2420(iParam0);
			break;
		case 575586550:
			func_2421(iParam0);
			break;
		case 1984370607:
			func_2422(iParam0);
			break;
		case 2072388311:
			func_2422(iParam0);
			break;
		case 1484665408:
			func_2423(iParam0);
			break;
		case 1240942142:
			func_2424(iParam0);
			break;
		case -1660921765:
			func_2425(iParam0);
			break;
		case 900908444:
			func_2426(iParam0);
			break;
	}
}

void func_1539(int iParam0)
{
	func_1538(iParam0);
	if (&Local_409.f_1[iParam0] == 16 && func_2427(iParam0))
	{
		iVar0 = func_2275(8, iParam0);
		if (iVar0 != 255)
		{
			func_1416(iParam0, iVar0, 0, 0);
		}
		else
		{
			iVar1 = func_2428(iParam0);
			func_1414(iVar1, iParam0);
		}
	}
}

void func_1540(int iParam0)
{
	if (func_2372(iParam0))
	{
		func_1414(34, iParam0);
		return;
	}
	if (!network_does_network_id_exist(Local_409.f_1[iParam0]->f_14))
	{
		return;
	}
	iVar0 = Local_4089.f_6[iParam0]->f_60;
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (func_1581(iVar0, 8) || _0x083d497d57b7400f(iVar0))
	{
		return;
	}
	if (func_2079(iVar0) && (func_1581(get_mount(iVar0), 8) || _0x083d497d57b7400f(get_mount(iVar0))))
	{
		return;
	}
	func_1414(5, iParam0);
}

void func_1541(int iParam0)
{
	if (func_2429(64, iParam0) || !network_does_network_id_exist(Local_409.f_1[iParam0]->f_14))
	{
		func_1412(64, iParam0);
		func_1414(34, iParam0);
	}
}

void func_1542(int iParam0)
{
	if ((func_28(90) && (func_796(8192, iParam0) || func_1357(iParam0) == 448485414)) && !func_331(Local_4089.f_3391, 131072))
	{
		func_804(11);
	}
	if (!func_1411(4, iParam0))
	{
		func_1412(4, iParam0);
		switch (func_1357(iParam0))
		{
			case 448485414:
				func_2373(iParam0, 1);
				break;
			case 401658241:
				Local_13.f_363 = (Local_13.f_363 - 1);
				break;
			case -1426507703:
				Local_13.f_364 = (Local_13.f_364 - 1);
				break;
			case 477970332:
				if (func_2430(iParam0))
				{
					if (func_1487(1024, Local_409.f_1[iParam0]->f_6))
					{
						Local_13.f_377 = (Local_13.f_377 - 1);
						func_2431(1024, Local_409.f_1[iParam0]->f_6);
					}
					func_2432(Local_409.f_1[iParam0]->f_6);
				}
				break;
			case -2067454306:
				Local_13.f_192[Local_409.f_1[iParam0]->f_6] = (&Local_13.f_192[Local_409.f_1[iParam0]->f_6] - 1);
				break;
			case -1276434456:
				if (Local_409.f_1[iParam0]->f_6 != -1 && func_1497(&(Local_4089.f_3355), func_1358(iParam0)) == -2067454306)
				{
					Local_13.f_192[Local_409.f_1[iParam0]->f_6] = (&Local_13.f_192[Local_409.f_1[iParam0]->f_6] - 1);
				}
				break;
		}
		if (func_1341(Local_4089.f_6[iParam0]->f_2, 1))
		{
			Local_13.f_370 = (Local_13.f_370 - 1);
		}
		if (func_2433(iParam0))
		{
			func_795(131072, iParam0);
		}
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (is_bit_set(Local_409.f_1[iParam0]->f_12, iVar0))
			{
				func_834(32, iVar0);
				func_834(64, iVar0);
			}
			iVar0++;
		}
		if (!func_1411(2, iParam0))
		{
			if (func_1351(iParam0) == 1525844114)
			{
			}
			else if ((func_1357(iParam0) == 448485414 || func_1357(iParam0) == -428150648) || func_1357(iParam0) == 661336845)
			{
				func_329(8, 1);
			}
		}
		if (func_1481(iParam0, 886638433, 240115369, 0, 0, 0, 0))
		{
			func_236(8, 1, 0);
		}
		if (is_bit_set(Local_13.f_372, iParam0))
		{
			clear_bit(&(Local_13.f_372), iParam0);
			Local_13.f_373 = (Local_13.f_373 - 1);
		}
		if ((Local_409.f_1[iParam0]->f_4 == -428150648 || Local_409.f_1[iParam0]->f_4 == -1276434456) || Local_409.f_1[iParam0]->f_4 == 661336845)
		{
			func_2434();
		}
	}
	if (func_2429(4, iParam0))
	{
		if (func_54(iParam0))
		{
			func_2435((*Global_1237665)[Local_4089.f_3391]->f_5);
		}
		func_2436(iParam0);
		if (func_2437(iParam0, 886638433))
		{
			func_2438();
		}
		Local_13.f_351 = (Local_13.f_351 - 1);
		func_1414(0, iParam0);
		Var1.f_2 = -1;
		Var1.f_5 = -1;
		Var1.f_6 = -1;
		Var1.f_11 = -1;
		Var1.f_15 = 255;
		Var1.f_16 = 255;
		*Local_409.f_1[iParam0] = { Var1 };
	}
}

void func_1543(int iParam0)
{
	if (&Local_409.f_317[iParam0] <= 5)
	{
		return;
	}
	iVar0 = Local_4089.f_1087[iParam0]->f_10;
	iVar3 = 0;
	while (iVar3 < iVar0)
	{
		iVar4 = iVar3;
		iVar1 = func_2439(iParam0, iVar4);
		if (!does_entity_exist(iVar1))
		{
			return;
		}
		iVar2 = (Local_4089.f_1087[iParam0]->f_26 + iVar4);
		if (!func_1464(2, iVar2))
		{
			if (has_object_been_broken(iVar1))
			{
				func_756(2, iVar2);
				if (func_1464(4, iVar2))
				{
					func_756(8, iVar2);
				}
			}
		}
		else if (func_1464(8, iVar2))
		{
			if (_0xd9130842d7226045("RDRO_Caged_Animals_Lock_Break_sounds", 0))
			{
				_play_sound_from_position("padlock_break", get_entity_coords(iVar1, false, false), "RDRO_Caged_Animals_Lock_Break_sounds", true, 0, true, 0);
				func_2440(8, iVar2);
			}
		}
		iVar3++;
	}
}

bool func_1544(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && !func_80(&(Local_920[iVar0]->f_31[iParam1]), iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1545(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && func_80(&(Local_920[iVar0]->f_31[iParam1]), iParam0))
		{
			if (iParam2 == -1 || func_182(iVar0) == iParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1546(int iParam0)
{
	if (func_653(2, iParam0, -1))
	{
		if (func_753(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_9))
		{
			func_1492(4096, iParam0);
		}
		if (func_1481(iParam0, -1918493640, 240115369, 0, 0, 0, 0))
		{
			func_1492(1024, iParam0);
			func_236(82, 1, 0);
		}
		if (func_1481(iParam0, -1918493640, 1987443020, 0, 0, 0, 0))
		{
			func_1492(2048, iParam0);
		}
		if (func_1481(iParam0, -1918493640, 1950438345, 0, 0, 0, 0) || func_1494(Local_4089.f_1087[iParam0]->f_1))
		{
			func_2441(1, iParam0);
			func_1492(262144, iParam0);
		}
		func_1426(2, iParam0);
	}
}

void func_1547(int iParam0)
{
	if (func_653(4, iParam0, -1))
	{
		func_1426(4, iParam0);
	}
}

void func_1548(int iParam0)
{
	if (Local_4089.f_3969 == get_frame_count())
	{
		return;
	}
	if (Local_4089.f_1087[iParam0]->f_29 == 886638433 && !func_1668(886638433, Local_4089.f_1087[iParam0]->f_30, 0))
	{
		return;
	}
	if (func_2442(iParam0, &bVar0))
	{
		func_1492(8, iParam0);
		func_2441(1, iParam0);
		func_1426(5, iParam0);
	}
	else if (bVar0)
	{
		func_1426(12, iParam0);
	}
}

void func_1549(int iParam0)
{
	if (func_2443(iParam0))
	{
		if (func_652(262144, iParam0))
		{
			func_1426(12, iParam0);
		}
		else
		{
			func_1426(11, iParam0);
		}
		return;
	}
	if (func_639(iParam0) == 448485414 && func_2348(Local_409.f_317[iParam0]->f_2))
	{
		func_1426(11, iParam0);
		return;
	}
	switch (Local_4089.f_1087[iParam0]->f_1)
	{
		case -1064014193:
			func_2444(iParam0);
			break;
		case 1475547288:
			func_2444(iParam0);
			break;
		case 1968800194:
			func_2445(iParam0);
			break;
		case -1703696123:
			func_2446(iParam0);
			break;
		case 110988383:
			func_2444(iParam0);
			break;
		case -1541730777:
			func_2447(iParam0);
			break;
		case 218600141:
			func_2448(iParam0);
			break;
		case 294392114:
			func_2449(iParam0);
			break;
		case -152130529:
			func_2450(iParam0);
			break;
		case 1321175366:
			func_2450(iParam0);
			break;
		case -1542718054:
			func_2451(iParam0);
			break;
		case -714084323:
			func_2452(iParam0);
			break;
		case -1856641468:
			func_2453(iParam0);
			break;
		case 1740160671:
			func_2454(iParam0);
			break;
		case 1903241516:
			func_2455(iParam0);
			break;
		case -298209514:
			func_2455(iParam0);
			break;
		case -1687054743:
			func_2456(iParam0);
			break;
		case 1328791445:
			func_2457(iParam0);
			break;
	}
}

void func_1550(int iParam0)
{
	if (func_2443(iParam0))
	{
		func_1426(12, iParam0);
		return;
	}
	if (!network_does_network_id_exist(Local_409.f_317[iParam0]->f_5))
	{
		return;
	}
	iVar0 = net_to_ent(Local_409.f_317[iParam0]->f_5);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (func_1581(iVar0, 16))
	{
		return;
	}
	func_1426(5, iParam0);
}

void func_1551(int iParam0)
{
	if (func_1544(32, iParam0))
	{
		func_1426(12, iParam0);
	}
}

void func_1552(int iParam0)
{
	if ((func_28(90) && (func_652(2048, iParam0) || func_639(iParam0) == 448485414)) && !func_331(Local_4089.f_3391, 131072))
	{
		func_804(11);
	}
	if (func_1544(16, iParam0))
	{
		if (!func_652(8, iParam0))
		{
			if (func_639(iParam0) == 448485414)
			{
				func_329(8, 1);
			}
		}
		if (func_652(1024, iParam0))
		{
			func_236(8, 1, 0);
		}
		if (func_2437(iParam0, -1918493640))
		{
			func_2438();
		}
		Local_13.f_352 = (Local_13.f_352 - 1);
		func_1426(0, iParam0);
		Var0.f_2 = -1;
		*Local_409.f_317[iParam0] = { Var0 };
	}
}

bool func_1553(int iParam0)
{
	if (Local_13.f_1 != 2)
	{
		return false;
	}
	if (func_646(131072, iParam0))
	{
		return false;
	}
	return true;
}

int func_1554()
{
	if (Local_4089.f_2173.f_15 == -1)
	{
		func_656(&(Local_4089.f_2173.f_16));
		Local_4089.f_2173.f_15 = 0;
		return -1;
	}
	return (func_725(Local_4089.f_2173.f_16) - Local_4089.f_2173.f_15);
}

void func_1555(int iParam0)
{
	if (func_1902(2, iParam0, -1))
	{
		if (!func_1988(8192, iParam0))
		{
			func_1501(33554432, iParam0);
		}
		func_1428(2, iParam0);
	}
}

void func_1556(int iParam0)
{
	if (func_1902(4, iParam0, -1))
	{
		if (((Local_4089.f_1367[iParam0]->f_9 == -1902000894 && !func_646(256, iParam0)) || func_647(iParam0) == 448485414) || func_1481(iParam0, -584819812, 1616912592, 0, 0, 0, 0))
		{
			func_1428(4, iParam0);
		}
		else
		{
			func_1428(3, iParam0);
		}
	}
}

void func_1557(int iParam0)
{
	vVar0.f_3 = -1;
	uVar4 = -1;
	func_2458(iParam0, &uVar4);
	Var14 = { func_2366(iParam0, -584819812) };
	iVar22 = func_2367(Var14, &uVar4, &vVar0);
	switch (iVar22)
	{
		case 0:
			break;
		case 2:
			if (func_647(iParam0) == 401658241)
			{
				func_329(128, 1);
			}
			func_1428(8, iParam0);
			break;
		case 1:
			Local_409.f_381[iParam0]->f_7 = { vVar0 };
			Local_409.f_381[iParam0]->f_6 = func_2459(vVar0);
			func_1428(4, iParam0);
			break;
	}
}

void func_1558(int iParam0)
{
	if (Local_4089.f_3969 == get_frame_count())
	{
		return;
	}
	if (func_2460(iParam0, &bVar0))
	{
		func_2461(iParam0);
	}
	else if (bVar0)
	{
		func_1428(8, iParam0);
	}
}

void func_1559(int iParam0)
{
	func_2462(iParam0);
	func_2463(iParam0);
	func_2464(iParam0, 0);
	func_2465(iParam0);
	if (func_2466(iParam0, &bVar0))
	{
		if (func_2467(iParam0, bVar0))
		{
			func_329(2048, 1);
		}
		func_1428(7, iParam0);
		return;
	}
	if (func_647(iParam0) == 448485414 && func_2348(Local_409.f_381[iParam0]->f_2))
	{
		func_1428(7, iParam0);
		return;
	}
	if (Local_4089.f_1367[iParam0]->f_1 == 648180545)
	{
		return;
	}
	if (Local_4089.f_1367[iParam0]->f_1 == -25013953)
	{
		func_2468(iParam0);
	}
	if (!func_646(65536, iParam0) && func_2469(65536, iParam0, -1))
	{
		func_1501(65536, iParam0);
	}
	switch (Local_4089.f_1367[iParam0]->f_1)
	{
		case 1941856241:
			func_2470(iParam0, 0);
			break;
		case -25013953:
			func_2470(iParam0, 0);
			break;
		case -704434053:
			func_2470(iParam0, 0);
			break;
		case 1776489902:
			func_2470(iParam0, 1);
			break;
		case 448088250:
			func_2471(iParam0);
			break;
		case 1310737556:
			func_2472(iParam0);
			break;
		case -1325813532:
			func_2472(iParam0);
			break;
		case 1916690818:
			func_2473(iParam0);
			break;
		case 716572229:
			func_2473(iParam0);
			break;
	}
}

void func_1560(int iParam0)
{
	if (func_2474(64, iParam0))
	{
		func_2464(iParam0, 0);
		func_2465(iParam0);
		if (!func_2475(iParam0))
		{
			return;
		}
		func_1428(8, iParam0);
	}
	if (func_2469(64, iParam0, -1))
	{
		func_1501(64, iParam0);
	}
}

void func_1561(int iParam0)
{
	if (Local_4089.f_1367[iParam0]->f_1 == -25013953)
	{
		func_2468(iParam0);
	}
	func_2464(iParam0, func_1988(1, iParam0));
	if ((func_28(90) && (func_1988(4, iParam0) || func_647(iParam0) == 448485414)) && !func_331(Local_4089.f_3391, 131072))
	{
		func_804(11);
	}
	if (func_1988(128, iParam0))
	{
		func_236(8, 1, 0);
	}
	if (func_2476(iParam0))
	{
		func_2477(262144, iParam0);
	}
	if ((func_2478(Local_4089.f_1367[iParam0]->f_1) && !func_646(67108864, iParam0)) && func_2469(67108864, iParam0, -1))
	{
		func_1501(67108864, iParam0);
	}
	if (func_2474(32, iParam0))
	{
		if (!func_646(16, iParam0))
		{
			if (func_647(iParam0) == 448485414 && !func_773(4096, func_648(iParam0)))
			{
				func_329(8, 1);
			}
		}
		Local_13.f_353 = (Local_13.f_353 - 1);
		func_1428(0, iParam0);
		Var0.f_2 = -1;
		Var0.f_3 = -1;
		Var0.f_12 = 255;
		*Local_409.f_381[iParam0] = { Var0 };
	}
}

bool func_1562(int iParam0, bool bParam1)
{
	if (iParam0 == -1 || iParam0 > 5)
	{
		return false;
	}
	if (bParam1 && &Local_409.f_381[iParam0] == 8)
	{
		return false;
	}
	return &Local_409.f_381[iParam0] != 0;
}

void func_1563(int iParam0)
{
	if (func_773(1, iParam0))
	{
		func_1396(2, iParam0);
	}
}

void func_1564(int iParam0)
{
	func_2479(iParam0, &bVar0, 0);
	if (func_2480(iParam0, bVar0) && !func_2481(iParam0, -1029285341, -1))
	{
		func_1388(iParam0, 0, 1);
		return;
	}
	func_834(1048576, iParam0);
	func_2482(iParam0);
	func_2483(iParam0);
	func_2484(iParam0);
	func_2485(iParam0);
	func_2486(iParam0);
	func_2487(iParam0);
	func_2488(iParam0);
}

void func_1565(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		bVar1 = false;
		bVar2 = false;
		if (func_657(iParam0, iVar0, &bVar2))
		{
			func_658(iParam0, iVar0, 1, 0, 255, 1, 0);
			return;
		}
		else if (bVar2)
		{
			func_833(8192, iParam0);
		}
		else if (Local_13.f_82[iParam0]->f_3 == iVar0 || Local_13.f_82[iParam0]->f_11 == 255)
		{
			func_834(8192, iParam0);
		}
		if (!func_2489(iParam0, iVar0))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	func_2479(iParam0, &bVar1, 1);
	if (func_2480(iParam0, bVar1))
	{
		func_1388(iParam0, 0, 1);
		return;
	}
	func_834(1048576, iParam0);
	func_2482(iParam0);
	func_2485(iParam0);
	func_2486(iParam0);
	func_2487(iParam0);
	func_2488(iParam0);
}

void func_1566(int iParam0)
{
	func_834(1048576, iParam0);
	func_2482(iParam0);
	func_2485(iParam0);
	func_2486(iParam0);
	func_2487(iParam0);
	func_2488(iParam0);
	if (func_835(67108864, iParam0, -1))
	{
		func_834(8, iParam0);
		Local_13.f_82[iParam0]->f_2 = -1;
		Local_13.f_82[iParam0]->f_10 = 0;
		Local_13.f_82[iParam0]->f_13 = 255;
		func_1396(2, iParam0);
	}
}

void func_1567(int iParam0)
{
	if (!func_453(1, iParam0) && func_835(1, iParam0, -1))
	{
		func_834(1048576, iParam0);
		if (Local_13.f_82[iParam0]->f_2 != 0 && Local_4089.f_1622[iParam0]->f_44 != -1)
		{
			func_804(2);
		}
		func_833(1, iParam0);
	}
}

void func_1568(int iParam0)
{
	if (func_2490(1, iParam0))
	{
		if (func_2491(&(Local_4089.f_3355), iParam0))
		{
			func_2249(128, iParam0);
		}
		if (func_2492(&(Local_4089.f_3355), iParam0))
		{
			func_2249(64, iParam0);
		}
		if (func_2493(&(Local_4089.f_3355), iParam0))
		{
			func_2249(2048, iParam0);
		}
		func_1429(2, iParam0);
	}
}

void func_1569(int iParam0)
{
	if (func_2490(2, iParam0))
	{
		func_1429(3, iParam0);
	}
}

void func_1570(int iParam0)
{
	if (func_2490(4, iParam0))
	{
		if (func_2238(128, iParam0))
		{
			func_1429(5, iParam0);
		}
		else
		{
			func_1429(4, iParam0);
		}
	}
}

void func_1571(int iParam0)
{
	if (func_2238(128, iParam0) && func_2494(Local_4089.f_1508[iParam0]->f_1))
	{
		func_2495(128, iParam0);
		func_1429(4, iParam0);
	}
}

void func_1572(int iParam0)
{
	if (func_2238(8192, iParam0))
	{
		return;
	}
	iVar0 = Local_4089.f_1508[iParam0]->f_7;
	if (iVar0 != -1)
	{
		if (Local_13.f_82[iVar0]->f_1 == 886638433 && Local_409.f_1[Local_13.f_82[iVar0]->f_5]->f_15 != 255)
		{
			func_2249(8192, iParam0);
		}
	}
}

void func_1573(int iParam0)
{
	if (func_2490(8, iParam0))
	{
		Local_409.f_467[iParam0]->f_1 = 0;
		Local_4089.f_1508[iParam0]->f_1 = 0;
		func_1429(0, iParam0);
	}
}

bool func_1574(int iParam0, bool bParam1)
{
	if (iParam0 == -1 || iParam0 > 4)
	{
		return false;
	}
	if (bParam1 && &Local_409.f_467[iParam0] == 7)
	{
		return false;
	}
	return &Local_409.f_467[iParam0] != 0;
}

void func_1575(int iParam0)
{
	if (func_714(1, iParam0, -1))
	{
		func_1427(2, iParam0);
	}
}

void func_1576(int iParam0)
{
	if (func_714(2, iParam0, -1))
	{
		func_1427(4, iParam0);
	}
}

void func_1577(int iParam0)
{
	if (func_714(4, iParam0, -1))
	{
		func_2496(4, iParam0);
		func_1427(5, iParam0);
	}
}

void func_1578(int iParam0)
{
	if (func_2497(iParam0))
	{
		func_1427(9, iParam0);
	}
	if (func_2348(Local_409.f_478[iParam0]->f_2))
	{
		func_1427(8, iParam0);
		return;
	}
	switch (Local_4089.f_1983[iParam0]->f_1)
	{
		case 102628183:
			func_2498(iParam0);
			break;
		case -948149899:
			func_2498(iParam0);
			break;
		case -463039475:
			func_2499(iParam0);
			break;
		case 206508773:
			func_2500(iParam0);
			break;
		case -1767305912:
			func_2501(iParam0);
			break;
		case -1229553512:
			func_2501(iParam0);
			break;
		case 392881261:
			func_2502(iParam0);
			break;
		case -1600622414:
			func_2503(iParam0);
			break;
		case 1115966845:
			func_2504(iParam0);
			break;
	}
}

void func_1579(int iParam0)
{
	if (func_2505(16, iParam0))
	{
		func_1427(9, iParam0);
	}
}

void func_1580(int iParam0)
{
	if (func_2505(8, iParam0))
	{
		if (!func_1375(4, iParam0))
		{
			func_329(8, 1);
		}
		if (network_does_network_id_exist(Local_409.f_478[iParam0]->f_1))
		{
			func_55(Local_409.f_478[iParam0]->f_1, 0);
		}
		func_1427(0, iParam0);
		Var0.f_2 = -1;
		*Local_409.f_478[iParam0] = { Var0 };
	}
}

bool func_1581(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, func_2330()))
	{
		return false;
	}
	return func_80(decor_get_int(iParam0, func_2330()), iParam1);
}

bool func_1582(int iParam0)
{
	if (func_120(8))
	{
		return true;
	}
	if (!func_178(256, iParam0) && Local_13.f_2 != 0)
	{
		return true;
	}
	return false;
}

bool func_1583(int iParam0)
{
	if (!func_178(256, iParam0))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 <= (func_1223(iParam0) - 1))
	{
		func_944(func_2506(iParam0, iVar1), func_2507(iParam0, iVar1), func_2508(iParam0, iVar1), &iVar0, &iVar2);
		switch (iVar0)
		{
			case 886638433:
				if (!func_1097(iVar2, 0))
				{
				}
				else if (func_796(131072, iVar2))
				{
				}
				else
				{
					if (&Local_409.f_1[iVar2] < 5)
					{
						return false;
					}
					func_1384(131072, iVar2);
					Jump @276; //curOff = 153
					if (!func_1562(iVar2, 0))
					{
					}
					else if (func_646(262144, iVar2))
					{
					}
					else
					{
						if (&Local_409.f_381[iVar2] < 5)
						{
							return false;
						}
						func_1501(262144, iVar2);
						Jump @276; //curOff = 214
						if (!func_309(iVar2, 0))
						{
						}
						else if (func_652(16384, iVar2))
						{
						}
						else
						{
							if (&Local_409.f_317[iVar2] < 1)
							{
								return false;
							}
							func_1492(16384, iVar2);
						}
					}
				}
				iVar1++;
				return true;
				default:
					break;
		}
	}
}

void func_1584(int iParam0, int iParam1, int iParam2)
{
	if (!func_159(iParam0, iParam1))
	{
		func_105(&(Local_13.f_226[iParam1]->f_4), iParam0);
	}
}

void func_1585(int iParam0)
{
	if (!func_104(8388608, 255))
	{
		return;
	}
	if (func_2509(iParam0, &uVar0))
	{
		if (!func_2510(iParam0))
		{
			return;
		}
		func_2511(uVar0, iParam0);
	}
}

void func_1586(int iParam0)
{
	func_2512(iParam0);
	if (!func_159(16, iParam0))
	{
		func_2513(iParam0, 1);
		func_1584(16, iParam0, 1);
	}
	if (!func_159(4, iParam0))
	{
		func_2514(iParam0);
	}
	if (!func_2515(iParam0))
	{
		return;
	}
	if (func_159(32768, iParam0))
	{
		if ((*(*Global_1238240)[network_player_id_to_int()])[Local_4089.f_3391][iParam0] > Local_13.f_226[iParam0]->f_2)
		{
			Local_13.f_226[iParam0]->f_2 = (*(*Global_1238240)[network_player_id_to_int()])[Local_4089.f_3391][iParam0];
		}
		if (func_2516(32768, iParam0))
		{
			return;
		}
		else
		{
			func_2517(32768, iParam0);
		}
	}
	if (Local_13.f_226[iParam0]->f_2 > (func_1949(iParam0) - 1))
	{
		func_799(4, iParam0);
		return;
	}
	if (!func_2518(iParam0))
	{
		return;
	}
	func_2519(iParam0, Local_13.f_226[iParam0]->f_2);
	if (!func_2520(iParam0))
	{
		if (!func_650((*Global_1248240)[Local_4089.f_3391]->f_19[iParam0]->f_80))
		{
			func_656(&((*Global_1248240)[Local_4089.f_3391]->f_19[iParam0]->f_80));
		}
		iVar0 = func_2521(iParam0);
		if (func_725((*Global_1248240)[Local_4089.f_3391]->f_19[iParam0]->f_80) < iVar0)
		{
			return;
		}
	}
	func_163(&(Local_13.f_226[iParam0]->f_3));
	func_163(&((*Global_1248240)[Local_4089.f_3391]->f_19[iParam0]->f_80));
	func_799(2, iParam0);
}

void func_1587(int iParam0)
{
	if (!func_159(256, iParam0))
	{
		if (!func_2522(iParam0, Local_13.f_226[iParam0]->f_2) && !func_2523(iParam0))
		{
			func_1584(256, iParam0, 1);
			(*Global_1248240)[Local_4089.f_3391]->f_19[iParam0]->f_81++;
			if ((*Global_1248240)[Local_4089.f_3391]->f_19[iParam0]->f_81 <= 3)
			{
				return;
			}
		}
		func_799(3, iParam0);
	}
	else if (func_2524(256, iParam0, 0, 1))
	{
		func_2517(2, iParam0);
		func_2517(256, iParam0);
		func_1584(65536, iParam0, 1);
		func_799(1, iParam0);
	}
}

void func_1588(int iParam0)
{
	func_2512(iParam0);
	if (!func_2525(iParam0) && !func_159(16384, iParam0))
	{
		return;
	}
	if (!func_650(Local_13.f_226[iParam0]->f_3))
	{
		func_656(&(Local_13.f_226[iParam0]->f_3));
	}
	iVar0 = Global_1901947->f_166.f_69;
	if (func_2522(iParam0, Local_13.f_226[iParam0]->f_2))
	{
		iVar0 *= 5;
	}
	if (!func_2526(iParam0))
	{
		if (func_725(Local_13.f_226[iParam0]->f_3) < iVar0)
		{
			return;
		}
	}
	Local_13.f_226[iParam0]->f_2++;
	if (Local_13.f_226[iParam0]->f_2 >= (*Global_1248240)[Local_4089.f_3391]->f_19[iParam0]->f_74)
	{
		func_874(iParam0);
		return;
	}
	func_2517(2, iParam0);
	func_799(1, iParam0);
}

void func_1589(int iParam0)
{
	if (func_159(16, iParam0))
	{
		func_2513(iParam0, 0);
		func_2517(16, iParam0);
	}
	if (!func_2524(4096, iParam0, 0, 0))
	{
		return;
	}
	func_799(-1, iParam0);
}

void func_1590(int iParam0)
{
	if (func_1963(1, iParam0, -1))
	{
		iVar0 = func_1964(iParam0);
		iVar1 = func_2527(iParam0);
		if (iVar0 == 0 || iVar1 == 0)
		{
			if (func_2528(iParam0, Local_4089.f_2156[iParam0]->f_2, &iVar0, &iVar1))
			{
				iVar2 = func_2529(&(Local_4089.f_3355), iParam0, iVar1);
				if (!func_2530(&(Local_4089.f_3355), iVar2, iVar0))
				{
					iVar0 = -1125105727;
				}
				func_2531(iParam0, iVar0);
				func_2532(iParam0, iVar1);
			}
			else if (func_2533(iParam0))
			{
				func_1510(9, iParam0);
				return;
			}
		}
		else
		{
			iVar3 = 0;
			while (iVar3 <= 5)
			{
				iVar4 = Local_4089.f_1622[iVar3]->f_55;
				iVar5 = 0;
				while (iVar5 <= (iVar4 - 1))
				{
					iVar7 = func_2534(&(Local_4089.f_3355), iVar3, iVar5);
					iVar6 = 0;
					while (iVar6 <= (iVar7 - 1))
					{
						if (func_2535(&(Local_4089.f_3355), iVar3, iVar5, iVar6) == iParam0)
						{
							func_2536(8192, iParam0);
						}
						iVar6++;
					}
					iVar5++;
				}
				if (func_2537(&(Local_4089.f_3355), iVar3) == iParam0)
				{
					func_2536(8192, iParam0);
				}
				iVar3++;
			}
			iVar8 = 0;
			while (iVar8 <= 9)
			{
				if (Local_4089.f_3027[iVar8]->f_7 == 0)
				{
				}
				else
				{
					iVar9 = 0;
					while (iVar9 <= (Local_4089.f_3027[iVar8]->f_7 - 1))
					{
						if (func_905(&(Local_4089.f_3355), iVar8, iVar9) == 2007814225 && func_2538(&(Local_4089.f_3355), iVar8, iVar9) == iParam0)
						{
							func_2536(8192, iParam0);
						}
						else
						{
							iVar9++;
						}
					}
				}
				iVar8++;
			}
			func_2536(1, iParam0);
			func_1510(2, iParam0);
		}
	}
}

void func_1591(int iParam0)
{
	if (func_2539(iParam0))
	{
		func_1510(4, iParam0);
		return;
	}
}

void func_1592(int iParam0)
{
	if (!network_does_network_id_exist(Local_409.f_494[iParam0]->f_1))
	{
		bVar0 = func_2241(8192, iParam0);
		Local_409.f_494[iParam0]->f_3 = 0;
		if (bVar0)
		{
			func_2536(8192, iParam0);
		}
		func_2536(1, iParam0);
		func_1510(4, iParam0);
	}
}

void func_1593(int iParam0)
{
	if (Local_4089.f_3969 == get_frame_count())
	{
		return;
	}
	if (func_2242(2, iParam0))
	{
		return;
	}
	if (func_2540(iParam0, &bVar0))
	{
		func_2536(2, iParam0);
		func_1510(5, iParam0);
	}
	else if (bVar0)
	{
		func_1510(9, iParam0);
	}
}

void func_1594(int iParam0)
{
	if (func_1963(8, iParam0, -1))
	{
		func_1510(6, iParam0);
	}
}

void func_1595(int iParam0)
{
	if (func_2541(iParam0))
	{
		func_1510(9, iParam0);
		return;
	}
	func_2542(iParam0);
	if (func_2241(4096, iParam0))
	{
		if (func_2242(1048576, iParam0))
		{
			return;
		}
		else
		{
			func_2543(iParam0);
		}
	}
	if (func_2528(iParam0, Local_4089.f_2156[iParam0]->f_2, &iVar0, &iVar1))
	{
		iVar2 = func_2529(&(Local_4089.f_3355), iParam0, iVar1);
		if (!func_2530(&(Local_4089.f_3355), iVar2, iVar0))
		{
			iVar0 = -1125105727;
		}
		if (iVar0 != func_1964(iParam0) || iVar1 != func_2527(iParam0))
		{
			func_2531(iParam0, iVar0);
			func_2532(iParam0, iVar1);
			func_1510(3, iParam0);
			return;
		}
	}
	else
	{
		return;
	}
	if (func_2544(iParam0))
	{
		if (func_2545(iParam0) || func_2546(iParam0))
		{
			func_1510(7, iParam0);
		}
		else
		{
			func_1510(8, iParam0);
		}
		return;
	}
}

void func_1596(int iParam0)
{
	if (func_2541(iParam0))
	{
		func_1510(9, iParam0);
		return;
	}
	if (func_2242(1048576, iParam0))
	{
		func_2536(4096, iParam0);
		func_2547(16, iParam0);
		func_2547(16384, iParam0);
		func_2547(67108864, iParam0);
		func_1510(6, iParam0);
		return;
	}
	func_2542(iParam0);
	iVar0 = _net_to_anim_scene(Local_409.f_494[iParam0]->f_1);
	if (func_2242(2048, iParam0))
	{
		func_1510(8, iParam0);
		return;
	}
	else if ((_is_anim_scene_started(iVar0, false) || _is_anim_scene_finished(iVar0, false)) || _0x34a0671be613d3d0(iVar0))
	{
		func_1510(8, iParam0);
		return;
	}
	if (func_2242(16, iParam0))
	{
		func_2536(16, iParam0);
	}
}

void func_1597(int iParam0)
{
	if (func_2541(iParam0))
	{
		func_1510(9, iParam0);
		return;
	}
	if (func_2242(16, iParam0))
	{
		func_2536(16, iParam0);
	}
	if (func_2242(32, iParam0))
	{
		func_2536(32, iParam0);
	}
	func_2542(iParam0);
	iVar0 = _net_to_anim_scene(Local_409.f_494[iParam0]->f_1);
	if (_0xf94692eb9dc15d74(iVar0, 1) || func_2242(64, iParam0))
	{
		func_2536(64, iParam0);
		if (!func_2241(256, iParam0))
		{
			func_2548(iParam0);
		}
		if (_0x34a0671be613d3d0(iVar0))
		{
			func_2536(128, iParam0);
		}
		else if (func_2549(iVar0, 1))
		{
			func_2536(256, iParam0);
		}
		else if (func_2242(64, iParam0))
		{
			func_2536(128, iParam0);
		}
		func_1510(9, iParam0);
		return;
	}
	else if ((func_2241(4194304, iParam0) && !func_2241(256, iParam0)) && func_2549(iVar0, 1))
	{
		func_2548(iParam0);
		func_2536(256, iParam0);
	}
}

void func_1598(int iParam0)
{
	if (func_2550(4, iParam0))
	{
		Local_409.f_494[iParam0]->f_2 = 0;
		func_1510(0, iParam0);
	}
}

bool func_1599(int iParam0, bool bParam1)
{
	if (iParam0 == -1 || iParam0 > 3)
	{
		return false;
	}
	if (bParam1 && &Local_409.f_494[iParam0] == 9)
	{
		return false;
	}
	return &Local_409.f_494[iParam0] != 0;
}

void func_1600(int iParam0, int iParam1)
{
	iVar0 = func_308(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar2 = func_1506(&(Local_4089.f_3355), iParam0);
	iVar3 = 0;
	while (iVar3 <= (iVar2 - 1))
	{
		iVar5 = func_2534(&(Local_4089.f_3355), iParam0, iVar3);
		iVar4 = 0;
		while (iVar4 <= (iVar5 - 1))
		{
			iVar1 = func_896(func_2551(&(Local_4089.f_3355), iParam0, iVar3, iVar4), iParam0);
			if (iVar1 == -1)
			{
			}
			else
			{
				func_793(iVar1, get_entity_coords(iVar0, true, false), iParam1);
			}
			iVar4++;
		}
		iVar3++;
	}
	if (func_2552(&(Local_4089.f_3355), iParam0) == -905628830)
	{
		iVar7 = func_2553(iParam0, get_entity_coords(iVar0, true, false), &uVar6);
		if (Local_13.f_82[iParam0]->f_9 != iVar7)
		{
			Local_13.f_82[iParam0]->f_9 = iVar7;
		}
	}
}

void func_1601(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	Var0.f_10 = 255;
	Var0.f_4 = 1;
	Var0.f_5 = Local_4089.f_3391;
	Var0.f_8 = iParam4;
	Var0.f_10 = iParam3;
	Var0.f_13 = iParam0;
	Var0.f_6 = iParam1;
	if (bParam2)
	{
		func_2554(&Var0, 1);
	}
	func_1519(&Var0, func_880(0, 8));
}

int func_1602(int iParam0, int iParam1, int iParam2)
{
	iParam2++;
	if (iParam2 < iParam0 || iParam2 > iParam1)
	{
		iParam2 = iParam0;
	}
	return iParam2;
}

bool func_1603(int iParam0, int iParam1)
{
	if (func_28(28) && func_2045(iParam0, -1432856592))
	{
		return false;
	}
	fVar0 = vdist(get_entity_coords(iParam0, true, false), _0xf70f00013a62f866(iParam1));
	vVar1 = { _0x3e2a25b2416dd67e(iParam1) };
	fVar4 = vVar1.x;
	fVar5 = (fVar4 - 80f);
	if (fVar0 <= fVar5)
	{
		return true;
	}
	return false;
}

void func_1604(int iParam0)
{
	Var0.f_10 = 255;
	Var0.f_4 = 15;
	Var0.f_5 = Local_4089.f_3391;
	Var0.f_13 = iParam0;
	func_1519(&Var0, func_880(0, 8));
}

void func_1605(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 175;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 40, 5, &uParam1);
	func_1451(uParam0, uParam0->f_1);
}

void func_1606(int iParam0)
{
	if (Local_13.f_257.f_21.f_1 != -1)
	{
		func_2555();
	}
	if (Local_13.f_257.f_21 == -1 || (Local_4089.f_3395.f_279.f_1 != -1 && Local_13.f_257.f_21 >= Local_4089.f_3395.f_279.f_1))
	{
		return;
	}
	iVar0 = func_2556(&(Local_4089.f_3355), iParam0);
	func_2557(&(Local_4089.f_3355), &iVar1, &iVar2);
	func_656(&(Local_13.f_257.f_21.f_6));
	Local_13.f_257.f_21.f_5 = get_random_int_in_range(iVar1, iVar2);
	Local_13.f_257.f_21.f_4 = 0;
	Local_13.f_257.f_21.f_1 = func_2558(iParam0, iVar0);
	if (Local_13.f_257.f_21.f_1 == -1)
	{
		func_2559();
		Local_13.f_257.f_21.f_1 = func_2558(iParam0, iVar0);
		if (Local_13.f_257.f_21.f_1 == -1)
		{
			Local_13.f_257.f_21 = -1;
			return;
		}
	}
}

bool func_1607(int iParam0)
{
	if (Local_13.f_257.f_21.f_1 == -1)
	{
		return false;
	}
	if (func_120(16))
	{
		return false;
	}
	if (!func_650(Local_13.f_257.f_21.f_6) || func_725(Local_13.f_257.f_21.f_6) < Local_13.f_257.f_21.f_5)
	{
		return false;
	}
	if (_0xa2cac9def0195e6f(1))
	{
		return false;
	}
	return true;
}

bool func_1608(int iParam0)
{
	if (Local_13.f_257.f_21.f_4 != 0)
	{
		return true;
	}
	iVar0 = func_2560(&(Local_4089.f_3355), iParam0, Local_13.f_257.f_21.f_1);
	if (!func_2561(iVar0, &iVar1))
	{
		return false;
	}
	Local_13.f_257.f_21.f_4 = iVar1;
	return true;
}

bool func_1609()
{
	if (Local_13.f_257.f_21.f_4 == 0)
	{
		return false;
	}
	fVar4 = 120f;
	iVar5 = 0;
	while (iVar5 <= 14)
	{
		if (!is_bit_set(Local_13.f_257.f_21.f_4, iVar5))
		{
		}
		else if (!func_1097(iVar5, 0) || !does_entity_exist(Local_4089.f_6[iVar5]->f_60))
		{
		}
		else
		{
			iVar3 = get_nearest_player_to_entity(Local_4089.f_6[iVar5]->f_60, 0, 1);
			if (!_network_is_player_index_valid(iVar3) || !network_is_player_active(iVar3))
			{
				return false;
			}
			vVar0 = { get_entity_coords(Local_4089.f_6[iVar5]->f_60, false, false) };
			if (vdist(func_2562(iVar3), vVar0) > fVar4)
			{
				return false;
			}
			return true;
		}
		iVar5++;
	}
	return false;
}

void func_1610(var uParam0, var uParam1, var uParam2)
{
	Var0.f_4 = 6;
	Var0.f_5 = Local_4089.f_3391;
	Var0.f_9 = uParam1;
	Var0.f_11 = uParam2;
	Var0.f_12 = uParam0;
	func_2563(&Var0, func_880(0, 8));
}

int func_1611(int iParam0)
{
	return func_1385(iParam0, 886638433, -1550035531, 0, 0, 0, 0);
}

int func_1612(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 == 0)
	{
		return func_1481(iParam0, 886638433, -153528487, 0, 1060522912, 0, 0);
	}
	return func_1446(&(Local_4089.f_3355), -1275896778, 0, -1745481166, bParam1, iParam2, 0, 0, 0);
}

void func_1613(int iParam0, int iParam1)
{
	if (!func_850(iParam0, iParam1))
	{
		func_105(&(Local_13.f_257[iParam1]->f_1), iParam0);
	}
}

int func_1614(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return func_1481(iParam0, 886638433, 344937883, 0, 1060522912, 0, 0);
	}
	return func_1446(&(Local_4089.f_3355), 344937883, 0, -1745481166, iParam1, iParam2, 0, 0, 0);
}

bool func_1615(int iParam0, int iParam1)
{
	return func_80(Local_4089.f_3395.f_46[iParam1]->f_7, iParam0);
}

bool func_1616(int iParam0)
{
	iVar0 = Local_4089.f_3395[iParam0]->f_3;
	while (iVar0 <= Local_4089.f_3395[iParam0]->f_4)
	{
		if (is_bit_set(Local_13.f_257.f_28, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	if (&Local_13.f_257[iParam0] != 0)
	{
		return true;
	}
	return false;
}

bool func_1617(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = int_to_participantindex(iParam0);
	if (!network_is_participant_active(iVar1))
	{
		return false;
	}
	iVar2 = network_get_player_index(iVar1);
	if (bParam2)
	{
		if (func_148(32768, iParam0))
		{
			return false;
		}
	}
	if (func_370(iVar2, 0, 0, 0, 0) != -1)
	{
		return false;
	}
	iVar0 = Local_4089.f_6[iParam1]->f_60;
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (vdist(get_entity_coords(get_player_ped(iVar2), false, false), get_entity_coords(iVar0, true, false)) > 70f)
	{
		return false;
	}
	return true;
}

void func_1618(int iParam0)
{
	iVar0 = Local_4089.f_3395[iParam0]->f_3;
	while (iVar0 <= Local_4089.f_3395[iParam0]->f_4)
	{
		clear_bit(&(Local_13.f_257.f_28), iVar0);
		iVar0++;
	}
	Local_13.f_257[iParam0] = 0;
}

void func_1619(int iParam0, int iParam1)
{
	Var0.f_4 = 2;
	Var0.f_5 = Local_4089.f_3391;
	Var0.f_9 = iParam0;
	Var0.f_8 = iParam1;
	func_2563(&Var0, func_880(0, 8));
}

bool func_1620(int iParam0, int iParam1)
{
	if (!func_850(32768, iParam0))
	{
		return false;
	}
	if (func_2564(Local_409.f_1[iParam1]->f_1))
	{
		if (func_1627(8, iParam1))
		{
			return true;
		}
		if ((does_entity_exist(Local_4089.f_6[iParam1]->f_60) && !is_ped_injured(Local_4089.f_6[iParam1]->f_60)) && is_ambient_speech_playing(Local_4089.f_6[iParam1]->f_60))
		{
			return true;
		}
	}
	return false;
}

void func_1621(int iParam0, int iParam1)
{
	if (func_850(iParam0, iParam1))
	{
		func_511(&(Local_13.f_257[iParam1]->f_1), iParam0);
	}
}

void func_1622(int iParam0)
{
	if (func_2565(iParam0))
	{
		func_1613(8, iParam0);
		func_1613(32, iParam0);
		func_1613(128, iParam0);
	}
	else if (func_2566(iParam0))
	{
		func_1613(4, iParam0);
		func_1613(32, iParam0);
		func_1613(64, iParam0);
	}
	else
	{
		func_1621(64, iParam0);
		func_1621(128, iParam0);
		if ((func_850(32, iParam0) && func_650(Local_4089.f_3395[iParam0]->f_2)) && func_725(Local_4089.f_3395[iParam0]->f_2) > 6500)
		{
			func_1621(32, iParam0);
		}
	}
}

bool func_1623(int iParam0)
{
	return is_bit_set(Local_13.f_257.f_28, iParam0);
}

void func_1624(int iParam0, int iParam1)
{
	if (!func_1615(128, iParam1) && Local_4089.f_3395[iParam0]->f_6 != iParam1)
	{
		return;
	}
	if (func_650(Local_4089.f_3395.f_46[iParam1]->f_6) && func_725(Local_4089.f_3395.f_46[iParam1]->f_6) >= func_2567(iParam1, iParam0))
	{
		func_163(&(Local_4089.f_3395.f_46[iParam1]->f_6));
		func_2568(iParam1);
	}
}

int func_1625(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_650(Local_4089.f_3395.f_46[iParam2]->f_6))
	{
		func_656(&(Local_4089.f_3395.f_46[iParam2]->f_6));
	}
	else if (func_725(Local_4089.f_3395.f_46[iParam2]->f_6) >= iParam3)
	{
		if (func_1626(iParam0, iParam1, iParam2))
		{
			func_163(&(Local_4089.f_3395.f_46[iParam2]->f_6));
			return 1;
		}
	}
	return 0;
}

bool func_1626(int iParam0, int iParam1, int iParam2)
{
	if (!func_1615(256, iParam2) && (func_2569(1) || is_any_speech_playing(Local_4089.f_6[iParam0]->f_60)))
	{
		return false;
	}
	iVar0 = func_2570(iParam0, iParam1, iParam2);
	if (iVar0 != -1)
	{
		iVar1 = func_2571(iVar0);
		if (func_2572(iParam1, iVar1))
		{
			func_1628(iVar1);
		}
	}
	if (func_1615(512, iParam2))
	{
		func_1621(256, iParam1);
	}
	if (func_1615(8, iParam2))
	{
		func_1613(512, iParam1);
	}
	func_1628(iParam2);
	func_2573(iParam0, iParam1, iParam2);
	return true;
}

bool func_1627(int iParam0, int iParam1)
{
	return func_80(Local_4089.f_6[iParam1]->f_46, iParam0);
}

void func_1628(int iParam0)
{
	set_bit(&(Local_13.f_257.f_28), iParam0);
}

bool func_1629(int iParam0)
{
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (!func_2254(iVar2, 1, 1))
		{
		}
		else
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar2));
			if (!_network_is_player_index_valid(iVar1))
			{
			}
			else
			{
				iVar0 = get_player_ped(iVar1);
				if (!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true))
				{
				}
				else if (func_2574(iParam0, iVar0))
				{
					return true;
				}
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1630(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_850(2, iParam1))
	{
		if (!func_850(64, iParam1) && !func_850(128, iParam1))
		{
			func_1621(2, iParam1);
			return false;
		}
	}
	else if (func_2575(iParam3, iParam1))
	{
		if (func_1626(iParam0, iParam1, iParam2))
		{
			func_1613(2, iParam1);
			func_1613(16, iParam1);
			return true;
		}
	}
	return false;
}

bool func_1631(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_646(iParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1632(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_1633(int iParam0, float fParam1)
{
	iVar0 = Local_4089.f_6[iParam0]->f_60;
	return func_1390(get_entity_coords(iVar0, true, false), &uVar1, fParam1, 6, iVar0, 493038497, 0, 0, 0, 1);
}

bool func_1634(int iParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar1))
		{
		}
		else if (!network_is_player_a_participant(iVar1))
		{
		}
		else
		{
			iVar2 = get_player_ped(iVar1);
			if (get_ped_reset_flag(iVar2, 311))
			{
				if (is_player_targetting_entity(iVar1, iParam0, true) || is_player_free_aiming_at_entity(iVar1, iParam0))
				{
					if (vdist(get_entity_coords(iParam0, true, false), get_entity_coords(iVar2, true, false)) <= fParam1)
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1635(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	vVar53 = { uParam1, uParam2, uParam3 };
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0xd1bf325c8252a982(iParam0, &Var2);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		iVar52 = network_get_player_from_gamer_handle(Var2[iVar1]);
		if (!_network_is_player_index_valid(iVar52))
		{
		}
		else if (!is_player_dead(iVar52))
		{
		}
		else if ((func_67(vVar53) || fParam4 == -1f) || vdist(vVar53, func_2562(iVar52)) <= fParam4)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_1636(int iParam0)
{
	switch (iParam0)
	{
		case -1754017856:
		case -1120922371:
		case -773638411:
		case -746291497:
		case 260262302:
		case 449550821:
		case 566981038:
		case 810164089:
		case 1834398740:
			return true;
		default:
			break;
	}
	return false;
}

int func_1637(int iParam0)
{
	if (Local_4089.f_3395.f_46[iParam0]->f_4 < 0 || Local_4089.f_3395.f_46[iParam0]->f_4 > 3)
	{
		return 0;
	}
	return Local_4089.f_3395.f_46[iParam0]->f_4;
}

bool func_1638(int iParam0)
{
	if (is_entity_a_vehicle(iParam0))
	{
		iVar1 = 2;
	}
	else if (func_629(iParam0))
	{
		if (does_entity_exist(func_2576(get_ped_index_from_entity_index(iParam0), 0)))
		{
			return false;
		}
		iVar1 = 0;
	}
	else
	{
		return false;
	}
	iVar0 = -1;
	while (iVar0 <= iVar1)
	{
		if (!does_entity_exist(_0xffec4b0a1a3ed515(iParam0, iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1639(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_650(Local_4089.f_3395.f_46[iParam2]->f_6))
	{
		return 0;
	}
	if (func_725(Local_4089.f_3395.f_46[iParam2]->f_6) >= iParam3)
	{
		func_1626(iParam0, iParam1, iParam2);
		return 1;
	}
	return 0;
}

bool func_1640(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = _0x849bd6c6314793d0(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (get_is_task_active(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1641()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((func_178(256, iVar0) && &Local_13.f_226[iVar0] > 0) && &Local_13.f_226[iVar0] < 4)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1642(int iParam0)
{
	if ((is_ped_dead_or_dying(Local_4089.f_6[iParam0]->f_60, true) || &Local_409.f_1[iParam0] == 22) || &Local_409.f_1[iParam0] == 24)
	{
		return true;
	}
	return false;
}

bool func_1643(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!func_2254(iVar0, 1, 1))
		{
		}
		else
		{
			iVar1 = get_player_ped(network_get_player_index(int_to_participantindex(iVar0)));
			if (bParam1 && func_370(iVar0, 1, 1, 0, 0) != -1)
			{
			}
			else if (bParam2)
			{
				if (func_148(32768, iVar0))
				{
				}
				else if (func_1987(iVar1, &(Local_4089.f_2190[iParam0]), 1, 0))
				{
					return true;
				}
				iVar0++;
				return false;
			}
		}
	}
}

bool func_1644(vector3 vParam0, float fParam3, float fParam4, var uParam5, float fParam6)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar1))
		{
		}
		else
		{
			iVar2 = get_player_ped(iVar1);
			if (!does_entity_exist(iVar2))
			{
			}
			else if (uParam5 && _0xc3995d396f1d97b6(iVar2, 25, floor(((fParam4 + 2f) * 1000f))))
			{
			}
			else
			{
				fVar3 = _0x285d36c5c72b0569(iVar2);
				if (fParam6 > 0f && fVar3 < fParam6)
				{
				}
				else if (fVar3 > fParam4)
				{
				}
				else if (vdist(vParam0, get_entity_coords(iVar2, true, false)) <= fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1645()
{
	return Local_13.f_369 == -1;
}

bool func_1646()
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (((func_1097(iVar0, 1) && &Local_409.f_1[iVar0] > 4) && func_1357(iVar0) == 401658241) && func_58(28, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_1647(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (func_216(&Var1, iParam0) && func_2577(&Var1, uParam1))
	{
		func_2197(Var1, -2045057259, &iVar0, 0);
	}
	return iVar0;
}

int func_1648(int iParam0)
{
	if (!func_2578(iParam0))
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_12;
}

bool func_1649()
{
	if (func_28(52))
	{
		return true;
	}
	if (Local_13.f_359 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (func_453(2, iVar0) && &Local_13.f_82[iVar0] != 5)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 >= Local_13.f_359)
		{
			return true;
		}
	}
	if (Local_4089.f_4084 >= 1)
	{
		return true;
	}
	return false;
}

bool func_1650()
{
	if (Local_13.f_362 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (&Local_409.f_1[iVar0] == 15)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1651(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_311(bParam0))
	{
		return false;
	}
	if (!bParam3)
	{
		if (func_453(32, bParam0))
		{
			return true;
		}
	}
	if (!bParam1)
	{
		if (((Local_4089.f_3970 == bParam0 && Local_920[participant_id_to_int()]->f_93 == -1) && Local_13.f_82[bParam0]->f_11 == player_id()) && (!bParam4 || !func_453(8192, bParam0)))
		{
			return false;
		}
		if (Local_13.f_82[bParam0]->f_11 != 255 && network_is_player_active(Local_13.f_82[bParam0]->f_11))
		{
			return true;
		}
	}
	if (!bParam2)
	{
		if ((Local_13.f_82[bParam0]->f_1 == 886638433 && Local_409.f_1[Local_13.f_82[bParam0]->f_5]->f_15 != 255) && network_is_player_active(Local_409.f_1[Local_13.f_82[bParam0]->f_5]->f_15))
		{
			return true;
		}
	}
	return false;
}

bool func_1652(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 <= 14)
	{
		if ((&Local_409.f_1[iVar1] < 5 && &Local_409.f_1[iVar1] != 0) && func_1411(32768, iVar1))
		{
			return true;
		}
		if (!func_2579(886638433, iVar1, 0, 1) || !network_does_network_id_exist(Local_409.f_1[iVar1]->f_14))
		{
		}
		else if (!func_1411(32768, iVar1))
		{
		}
		else
		{
			iVar0 = Local_4089.f_6[iVar1]->f_60;
			if (vdist(get_entity_coords(iParam0, true, false), get_entity_coords(iVar0, true, false)) < 150f)
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

void func_1653(vector3 vParam0, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar1 = func_2580(fParam3, fParam4, iParam5, iParam6, bParam7);
	if (iVar1 > -1)
	{
		iVar5 = func_2581(&(Local_4089.f_3355), iVar1);
		fVar6 = func_2582(&(Local_4089.f_3355), iVar1, func_1183());
		fVar7 = get_random_float_in_range(0f, 1f);
		if (fVar7 > fVar6)
		{
			Local_13.f_367 = 0;
			func_831(128, 1);
			set_bit(&(Local_13.f_368), iVar1);
			return;
		}
		iVar4 = 0;
		while (iVar4 <= (iVar5 - 1))
		{
			if (func_733(401658241, iVar4, 0, iVar1))
			{
				iVar0 = func_2583(&(Local_4089.f_3355), iVar1, iVar4);
				iVar3 = func_2584(&(Local_4089.f_3355), iVar1, iVar4);
				if (iVar3 == 886638433)
				{
					func_768(iVar0, &uVar2, vParam0, 0f, 401658241, iVar4, -1, iVar1, 0);
				}
				else if (iVar3 == -584819812)
				{
					func_770(iVar0, &uVar2, vParam0, 0f, 401658241, iVar4, iVar1);
				}
				else if (iVar3 == -1918493640)
				{
				}
				else if (iVar3 == 1015970717)
				{
				}
			}
			iVar4++;
		}
		Local_13.f_367 = 0;
		func_831(128, 1);
	}
	else
	{
		func_329(128, 1);
	}
}

void func_1654(int iParam0)
{
	if (func_1487(4, iParam0))
	{
		return;
	}
	if (func_1487(512, iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (Local_409.f_1[iVar0]->f_4 == 401658241 && Local_4089.f_2044[Local_409.f_1[iVar0]->f_6]->f_4 == iParam0)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			func_656(&(Local_13.f_179[iParam0]->f_1));
			func_2431(512, iParam0);
		}
	}
	bVar2 = func_2585(iParam0);
	if (func_2586(8, iParam0) && func_2587(iParam0))
	{
		func_2432(iParam0);
	}
	if (func_2588(iParam0, bVar2))
	{
		if (!func_733(477970332, iParam0, 0, -1))
		{
			func_2432(iParam0);
			return;
		}
		if (bVar2)
		{
			func_1653(Local_4089.f_2105[iParam0]->f_4, 0, 0, 0, iParam0, 0);
			func_1488(512, iParam0);
		}
		else
		{
			func_2589(iParam0);
		}
	}
}

void func_1655(int iParam0)
{
	if ((!func_1487(2, iParam0) || func_1487(4, iParam0)) || func_1487(32, iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (Local_409.f_1[iVar0]->f_4 != 477970332)
		{
		}
		else if (Local_409.f_1[iVar0]->f_6 != iParam0)
		{
		}
		else if (&Local_409.f_1[iVar0] <= 4)
		{
			return;
		}
		iVar0++;
	}
	func_1488(32, iParam0);
}

void func_1656()
{
	if (!func_1645())
	{
		Local_13.f_369 = -1;
	}
}

bool func_1657(int iParam0)
{
	if (!func_2590(iParam0))
	{
		return false;
	}
	if (&Local_13.f_192[iParam0] > Local_4089.f_2148.f_1)
	{
		return false;
	}
	return true;
}

bool func_1658()
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Local_13.f_192[iVar0] != 0 && func_2590(iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1659(int iParam0)
{
	if (func_2590(iParam0))
	{
		return false;
	}
	if (func_999(2))
	{
		if (!func_120(16))
		{
			return false;
		}
	}
	else if (Local_4089.f_2148.f_5 != -1)
	{
		if (!func_1377(2, Local_4089.f_2148.f_5) && (Local_4089.f_2148.f_4 < 0 || Local_13.f_370 > Local_4089.f_2148.f_4))
		{
			return false;
		}
	}
	else if (!func_331(Local_4089.f_3391, 16) && Local_4089.f_3393 != -1261475678)
	{
		return false;
	}
	if (func_999(1) && !func_451(262144, 1))
	{
		return false;
	}
	if (!func_999(4) && Local_4089.f_4084 >= 1)
	{
		return false;
	}
	if (func_999(32) && func_2281(-1))
	{
		return true;
	}
	if (Local_4089.f_2148.f_3 != -1 && Local_13.f_370 > Local_4089.f_2148.f_3)
	{
		return false;
	}
	if (func_999(16))
	{
		iVar0 = func_896(Local_4089.f_2148.f_2, -1);
		if (func_535(268435456, iVar0) || !func_1643(iVar0, 1, 1))
		{
			return false;
		}
	}
	if (func_999(8))
	{
		if (Local_13.f_385 == 0)
		{
			Local_13.f_385 = Local_4089.f_2148.f_2;
		}
		if (func_856() > Local_13.f_385)
		{
			return false;
		}
	}
	return true;
}

void func_1660(int iParam0, bool bParam1)
{
	iVar2 = (iParam0 - func_1475());
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (func_1411(2097152, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 < iVar2)
	{
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (Local_409.f_1[iVar0]->f_4 == 448485414)
			{
			}
			else if (func_796(1073741824, iVar0))
			{
			}
			else if (!func_1097(iVar0, 0))
			{
			}
			else
			{
				if (bParam1)
				{
					if (func_1479(Local_409.f_1[iVar0]->f_4))
					{
						func_1412(2097152, iVar0);
						iVar1++;
					}
				}
				else if (((((func_1341(Local_4089.f_6[iVar0]->f_2, 1) || Local_409.f_1[iVar0]->f_1 == -1066665813) || Local_409.f_1[iVar0]->f_1 == 478642682) || Local_409.f_1[iVar0]->f_1 == -227517162) || func_2225(Local_409.f_1[iVar0]->f_1)) || Local_409.f_1[iVar0]->f_1 == -1322096809)
				{
					func_1412(2097152, iVar0);
					iVar1++;
				}
				if (iVar1 >= iVar2)
				{
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_1661(int iParam0)
{
	if (!func_2590(iParam0))
	{
		Local_13.f_192[iParam0] = 0;
	}
}

int func_1662(var uParam0, bool bParam1, bool bParam2)
{
	return func_591(uParam0, 1731164987, -1886386550, 344425994, bParam1, bParam2, 0, 0, 0, 0);
}

int func_1663(var uParam0, bool bParam1, bool bParam2)
{
	return func_591(uParam0, 764457433, 363724928, 344425994, bParam1, bParam2, 0, 0, 0, 0);
}

int func_1664()
{
	iVar4 = func_2591(Local_4089.f_3355.f_11, 0, 31);
	iVar0 = 0;
	while (iVar0 <= (iVar4 - 1))
	{
		if (func_733(-1426507703, iVar0, 0, -1))
		{
			iVar2 = func_2592(&(Local_4089.f_3355), iVar0);
			iVar3 = func_725(Local_13.f_386);
			if (iVar3 >= iVar2)
			{
				set_bit(&iVar1, iVar0);
			}
		}
		iVar0++;
	}
	return func_797(iVar1, 32, 1, 0);
}

int func_1665(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (func_773(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1666(var uParam0, bool bParam1)
{
	return func_591(uParam0, 1731164987, 363724928, 2005568385, bParam1, 0, 0, 0, 0, 0);
}

int func_1667(var uParam0, int iParam1)
{
	return func_591(uParam0, 764457433, 363724928, 2005568385, iParam1, 0, 0, 0, 0, 0);
}

bool func_1668(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != -1)
	{
		switch (iParam0)
		{
			case 886638433:
				if (bParam2 && &Local_409.f_1[iParam1] == 0)
				{
					return true;
				}
				return (&Local_409.f_1[iParam1] >= 5 && &Local_409.f_1[iParam1] <= 32);
			case -1918493640:
				if (bParam2 && &Local_409.f_317[iParam1] == 0)
				{
					return true;
				}
				return (&Local_409.f_317[iParam1] >= 5 && &Local_409.f_317[iParam1] <= 10);
			case -584819812:
				if (bParam2 && &Local_409.f_381[iParam1] == 0)
				{
					return true;
				}
				return (&Local_409.f_381[iParam1] >= 5 && &Local_409.f_381[iParam1] <= 6);
			case 1015970717:
				if (bParam2 && Local_409.f_460 == 0)
				{
					return true;
				}
				return (Local_409.f_460 >= 5 && Local_409.f_460 <= 8);
			case -1091027173:
				if (bParam2 && &Local_409.f_467[iParam1] == 0)
				{
					return true;
				}
				return &Local_409.f_467[iParam1] == 4;
			case -916820003:
				if (bParam2 && &Local_409.f_478[iParam1] == 0)
				{
					return true;
				}
				return (&Local_409.f_478[iParam1] >= 5 && &Local_409.f_478[iParam1] <= 7);
			default:
				break;
		}
	}
	return false;
}

void func_1669(int iParam0)
{
	iVar0 = func_1338(Global_1237665[iParam0], (*Global_1237665)[iParam0]->f_6);
	if (iVar0 == -1)
	{
		return;
	}
	func_2593(iVar0);
}

var func_1670(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_2594() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_2595());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_2595());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_2595());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_2596(get_player_team(iVar5)));
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
			if (func_2597(iVar2))
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
				if (iVar9 & 8192 != 0 && func_2598(iVar2) != 1)
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
					if (!func_2599(iVar10))
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

int func_1671()
{
	return 1324115414;
}

int func_1672()
{
	return -1840179197;
}

int func_1673()
{
	return -1559871373;
}

int func_1674(int iParam0)
{
	if (func_216(&Var1, iParam0))
	{
		func_2197(Var1, -1495131459, &uVar0, 1);
	}
	return uVar0;
}

bool func_1675(var uParam0)
{
	if (!func_28(1))
	{
		if (!_0x603ac35fd4602c76(uParam0->f_2))
		{
			return false;
		}
		if (&Local_4089.f_4031[31] == 0)
		{
			Local_4089.f_4031[31] = 1;
		}
		while (iVar0 < 80)
		{
			iVar3 = func_2600(&(Local_4089.f_4031[31]), 1);
			_datafile_register_query(uParam0->f_2, iVar3, func_2601(iVar3));
			Local_4089.f_4031[31] = &Local_4089.f_4031[31] + 1;
			iVar0++;
			if (&Local_4089.f_4031[31] >= 263)
			{
				Local_4089.f_4031[31] = 0;
				func_236(1, 1, 0);
				bVar1 = true;
			}
		else
		{
			}
		}
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (!func_28(2))
		{
			if (!_0x603ac35fd4602c76(uParam0->f_3))
			{
				return false;
			}
			if (&Local_4089.f_4031[31] == 0)
			{
				Local_4089.f_4031[31] = 1;
			}
			while (iVar0 < 80)
			{
				iVar4 = func_2602(&(Local_4089.f_4031[31]), 1);
				_datafile_register_query(uParam0->f_3, iVar4, func_2603(iVar4));
				Local_4089.f_4031[31] = &Local_4089.f_4031[31] + 1;
				iVar0++;
				if (&Local_4089.f_4031[31] >= 14)
				{
					Local_4089.f_4031[31] = 0;
					func_236(2, 1, 0);
					bVar2 = true;
				}
			else
			{
				}
			}
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		if (!_0x603ac35fd4602c76(uParam0->f_4))
		{
			return false;
		}
		if (&Local_4089.f_4031[31] == 0)
		{
			Local_4089.f_4031[31] = 1;
		}
		while (iVar0 < 80)
		{
			iVar5 = func_2604(&(Local_4089.f_4031[31]), 1);
			_datafile_register_query(uParam0->f_4, iVar5, func_2605(iVar5));
			Local_4089.f_4031[31] = &Local_4089.f_4031[31] + 1;
			if (&Local_4089.f_4031[31] >= 758)
			{
				Local_4089.f_4031[31] = 0;
				func_236(3, 1, 0);
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_1676(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_1677()
{
	Local_4089.f_3355.f_5 = func_2606(&(Local_4089.f_3355), (*Global_1248240)[Local_4089.f_3391]->f_588);
	Local_4089.f_3355.f_6 = func_2607(&(Local_4089.f_3355), func_591(&(Local_4089.f_3355), 1731164987, 0, 798528762, 0, 0, 0, 0, 0, 0));
	Local_4089.f_3355.f_24 = func_2608(&(Local_4089.f_3355));
	Local_4089.f_3355.f_21 = func_2609(&(Local_4089.f_3355), Local_4089.f_3391);
	Local_4089.f_3355.f_17 = func_2610(&(Local_4089.f_3355));
	Local_4089.f_3355.f_18 = func_2611(&(Local_4089.f_3355));
	Local_4089.f_3355.f_19 = func_2612(&(Local_4089.f_3355));
	Local_4089.f_3355.f_20 = func_2613(&(Local_4089.f_3355));
	Local_4089.f_3355.f_27 = func_2614(&(Local_4089.f_3355));
	Local_4089.f_3355.f_28 = func_2615(&(Local_4089.f_3355));
	Local_4089.f_3355.f_29 = func_2616(&(Local_4089.f_3355));
	Local_4089.f_3355.f_33 = { func_2617(&(Local_4089.f_3355)) };
	Local_4089.f_3355.f_30 = func_2618(&(Local_4089.f_3355));
	Local_4089.f_3355.f_32 = func_2619(&(Local_4089.f_3355));
	Local_4089.f_3355.f_26 = func_2620(&(Local_4089.f_3355));
	Local_4089.f_4091 = func_2621(&(Local_4089.f_3355));
	Local_4089.f_4081 = Local_4089.f_3355.f_21;
	Local_4089.f_3355.f_22 = func_2622(&(Local_4089.f_3355));
	if (Local_4089.f_3355.f_22 > 0)
	{
		func_236(152, 1, 0);
	}
	if (func_2623(&(Local_4089.f_3355)))
	{
		Local_4089.f_4081 = func_2624(&(Local_4089.f_3355), Local_4089.f_3391, Local_4089.f_3355.f_21);
	}
}

void func_1678()
{
	if (func_2625(&(Local_4089.f_3355)))
	{
		func_236(120, 1, 0);
	}
	if (func_2626(&(Local_4089.f_3355)))
	{
		func_236(121, 1, 0);
	}
	if (func_2627(&(Local_4089.f_3355)))
	{
		func_236(154, 1, 0);
	}
	if (func_2628(&(Local_4089.f_3355)))
	{
		func_236(80, 1, 0);
	}
	if (func_2629(&(Local_4089.f_3355)))
	{
		func_236(155, 1, 0);
	}
	if (func_2630(&(Local_4089.f_3355)))
	{
		func_236(81, 1, 0);
	}
	if (func_2631(&(Local_4089.f_3355)))
	{
		func_236(84, 1, 0);
	}
	if (func_2632(&(Local_4089.f_3355)))
	{
		func_236(164, 1, 0);
	}
	if (func_2633(&(Local_4089.f_3355)))
	{
		func_236(165, 1, 0);
	}
	if (func_2634(&(Local_4089.f_3355)))
	{
		func_236(123, 1, 0);
	}
	if (func_2635(&(Local_4089.f_3355)))
	{
		func_236(86, 1, 0);
	}
	if (func_2636(&(Local_4089.f_3355)))
	{
		func_236(156, 1, 0);
	}
	if (func_2637(&(Local_4089.f_3355)))
	{
		func_236(87, 1, 0);
	}
	if (func_2638(&(Local_4089.f_3355)))
	{
		func_236(88, 1, 0);
	}
	if (func_2639(&(Local_4089.f_3355)))
	{
		func_236(89, 1, 0);
	}
	if (func_2640(&(Local_4089.f_3355)))
	{
		func_236(90, 1, 0);
	}
	if (func_2641(&(Local_4089.f_3355)))
	{
		func_236(93, 1, 0);
	}
	if (func_2642(&(Local_4089.f_3355)))
	{
		func_236(158, 1, 0);
	}
	if (func_2643(&(Local_4089.f_3355)))
	{
		func_236(161, 1, 0);
	}
	if (func_2644(&(Local_4089.f_3355)))
	{
		func_236(103, 1, 0);
	}
	if (func_2645(&(Local_4089.f_3355)))
	{
		func_236(102, 1, 0);
	}
	if (func_2646(&(Local_4089.f_3355)))
	{
		func_236(104, 1, 0);
	}
	if (func_2647(&(Local_4089.f_3355)))
	{
		func_236(106, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), -1616653841, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(124, 1, 0);
	}
	if (func_2648(&(Local_4089.f_3355)))
	{
		func_236(166, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), 539505940, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(107, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), 1638497946, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(122, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), 1692405690, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(108, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), 364131749, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(109, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), 780313883, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(110, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), -348046704, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(116, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), -1345535599, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(117, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), -1061016576, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(112, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), 98100854, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(160, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), 1576781514, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(168, 1, 0);
	}
	if (func_2649(&(Local_4089.f_3355)))
	{
		func_236(169, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), -1509852509, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(170, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), 1783358162, 1, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(171, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), 578039638, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(172, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), -274523986, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(173, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), 908673925, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(174, 1, 0);
	}
	if (func_218(&(Local_4089.f_3355), 2136786732, 0, -801742902, 0, 0, 0, 0, 0))
	{
		func_236(125, 1, 0);
	}
}

void func_1679()
{
	Local_4089.f_3355.f_9 = func_776(&(Local_4089.f_3355));
	Local_4089.f_3355.f_8 = func_2650(&(Local_4089.f_3355));
	Local_4089.f_3355.f_10 = func_2651(&(Local_4089.f_3355));
	Local_4089.f_3355.f_13 = func_2652(&(Local_4089.f_3355));
	Local_4089.f_3355.f_12 = func_2653(&(Local_4089.f_3355));
	Local_4089.f_3355.f_11 = func_2654(&(Local_4089.f_3355));
	Local_4089.f_3355.f_23 = func_2655(&(Local_4089.f_3355));
	Local_4089.f_3355.f_25 = func_2656(&(Local_4089.f_3355));
	if (Local_4089.f_3355.f_8 > 6)
	{
		Local_4089.f_3355.f_8 = 6;
	}
	if (Local_4089.f_3355.f_10 > 6)
	{
		Local_4089.f_3355.f_10 = 6;
	}
	if (Local_4089.f_3355.f_12 > 5)
	{
		Local_4089.f_3355.f_12 = 5;
	}
	if (Local_4089.f_3355.f_23 > 32)
	{
		Local_4089.f_3355.f_23 = 32;
	}
}

void func_1680()
{
	iVar1 = func_2657(&(Local_4089.f_3355));
	iVar0 = 1;
	while (iVar0 <= 25)
	{
		Local_4089.f_2890.f_3[iVar0] = func_2659(&(Local_4089.f_3355), iVar1, func_2658(iVar0));
		iVar0++;
	}
	if (&Local_4089.f_2890.f_3[25] == 0)
	{
		Local_4089.f_2890.f_3[25] = func_2660();
	}
	if (iVar1 != 0 && !func_517(1))
	{
		func_236(142, 1, 0);
	}
}

void func_1681()
{
	Local_4089.f_3287 = func_2661(&(Local_4089.f_3355));
	fVar0 = func_2662(&(Local_4089.f_3355), Local_4089.f_3287);
	fVar1 = func_2663(&(Local_4089.f_3355), Local_4089.f_3287);
	Local_4089.f_3287.f_1 = fVar0;
	func_2664(&(Local_4089.f_3287.f_35), fVar0);
	func_2665(&(Local_4089.f_3287.f_35), 1);
	func_2664(&(Local_4089.f_3287.f_2), fVar0);
	func_2666(&(Local_4089.f_3287.f_2), fVar1);
	func_2667(&(Local_4089.f_3287.f_2));
	func_2668(&(Local_4089.f_3287.f_2));
	func_2669(&(Local_4089.f_3287.f_2), 0);
	func_2670(&(Local_4089.f_3287.f_2), 0);
	func_2671(&(Local_4089.f_3287.f_2), 1);
	func_2672(&(Local_4089.f_3287.f_2), 0);
	bVar2 = func_2673(&(Local_4089.f_3355), Local_4089.f_3287);
	if (bVar2)
	{
		func_236(175, 1, 0);
		bVar2 = true;
	}
	if (bVar2 || !func_2674(&(Local_4089.f_3355), Local_4089.f_3287))
	{
		func_1012(&(Local_4089.f_3287.f_2), 32);
		func_1012(&(Local_4089.f_3287.f_35), 32);
		func_2675(&(Local_4089.f_3287.f_2), 1);
		func_2675(&(Local_4089.f_3287.f_35), 1);
		func_2676(&(Local_4089.f_3287.f_2), 1);
		func_2677(&(Local_4089.f_3287.f_2), 1);
	}
	if (func_2678(&(Local_4089.f_3355), Local_4089.f_3287))
	{
		func_236(176, 1, 0);
	}
	if (func_2679(&(Local_4089.f_3355), Local_4089.f_3287))
	{
		func_236(177, 1, 0);
	}
	if (func_2680(&(Local_4089.f_3355), Local_4089.f_3287))
	{
		func_236(178, 1, 0);
	}
	if (func_2681(&(Local_4089.f_3355), Local_4089.f_3287))
	{
		func_236(179, 1, 0);
	}
}

void func_1682()
{
	iVar0 = func_1696(&(Local_4089.f_3355));
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		Local_4089.f_3171[iVar1] = func_2682(&(Local_4089.f_3355), iVar1);
		Local_4089.f_3171[iVar1]->f_1 = { func_2683(&(Local_4089.f_3355), iVar1) };
		iVar1++;
	}
}

void func_1683()
{
	Local_4089.f_3197 = { func_2684(&(Local_4089.f_3355)) };
	Local_4089.f_3197.f_3 = func_2685(&(Local_4089.f_3355));
}

void func_1684()
{
	if (func_218(&(Local_4089.f_3355), 1001410867, 0, -668414060, 0, 0, 0, 0, 0))
	{
		Local_4089.f_3201.f_6 = { func_2686(Local_4089.f_3391) };
	}
	else
	{
		Local_4089.f_3201.f_6 = { func_2687(&(Local_4089.f_3355)) };
	}
	if (!func_67(Local_4089.f_3201.f_6))
	{
		Local_4089.f_3201.f_9 = 1;
	}
}

void func_1685()
{
	Local_4089.f_3960 = func_2688(&(Local_4089.f_3355));
}

void func_1686()
{
	Local_4089.f_2968.f_5 = func_2689(&(Local_4089.f_3355));
}

void func_1687()
{
	iVar1 = func_1409();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if ((iVar0 == 1 && Local_4089.f_3393 == 1918154385) && !func_459(Local_4089.f_3391))
		{
		}
		else
		{
			Local_4089.f_3008[iVar0]->f_1 = func_2690(&(Local_4089.f_3355), iVar1, iVar0);
			Local_4089.f_3008[iVar0]->f_4 = get_random_int_in_range(func_2691(&(Local_4089.f_3355), iVar1, iVar0), func_2692(&(Local_4089.f_3355), iVar1, iVar0));
			Local_4089.f_3008[iVar0] = func_2693(&(Local_4089.f_3355), iVar1, iVar0);
			Local_4089.f_3008[iVar0]->f_5 = func_2694(&(Local_4089.f_3355), iVar1, iVar0, Local_4089.f_3391);
			Local_4089.f_3008[iVar0]->f_8 = func_2695(&(Local_4089.f_3355), iVar1, iVar0);
			if (func_2696(&(Local_4089.f_3355), iVar1, iVar0))
			{
				func_2697(2, iVar0);
			}
			if (func_2698(&(Local_4089.f_3355), iVar1, iVar0))
			{
				func_2697(4, iVar0);
			}
			if (func_2699(&(Local_4089.f_3355), iVar1, iVar0))
			{
				func_2697(8, iVar0);
			}
			if (func_2700(&(Local_4089.f_3355), iVar1, iVar0))
			{
				func_2697(16, iVar0);
			}
			if (func_2701(&(Local_4089.f_3355), iVar1, iVar0))
			{
				func_2697(32, iVar0);
			}
			if (func_2702(&(Local_4089.f_3355), iVar1, iVar0))
			{
				func_2697(64, iVar0);
			}
			if (iVar0 != 0 && &Local_4089.f_3008[iVar0] != 493038497)
			{
				func_1069(Local_4089.f_3391, 4194304);
			}
		}
		iVar0++;
	}
	if (func_2703(&(Local_4089.f_3355), iVar1))
	{
		func_236(100, 1, 0);
	}
	if (func_2704(&(Local_4089.f_3355), iVar1))
	{
		func_236(77, 1, 0);
	}
	if (func_2705(&(Local_4089.f_3355)))
	{
		func_236(119, 1, 0);
	}
	if (func_2706(&(Local_4089.f_3355), iVar1))
	{
		func_236(78, 1, 0);
	}
	if (func_2707(&(Local_4089.f_3355), iVar1))
	{
		func_236(79, 1, 0);
	}
	if (func_2708(&(Local_4089.f_3355), iVar1))
	{
		func_236(85, 1, 0);
	}
	if (func_2709(&(Local_4089.f_3355), iVar1))
	{
		func_236(92, 1, 0);
	}
}

void func_1688()
{
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_8 - 1))
	{
		iVar1 = func_2581(&(Local_4089.f_3355), iVar0);
		if (iVar1 > 0)
		{
			Local_4089.f_2044[iVar0] = func_2710(&(Local_4089.f_3355), iVar0);
			Local_4089.f_2044[iVar0]->f_1 = func_2711(&(Local_4089.f_3355), iVar0);
			Local_4089.f_2044[iVar0]->f_2 = func_2712(&(Local_4089.f_3355), iVar0);
			Local_4089.f_2044[iVar0]->f_4 = func_2713(&(Local_4089.f_3355), iVar0);
			Local_4089.f_2044[iVar0]->f_5 = func_2714(&(Local_4089.f_3355), iVar0);
			Local_4089.f_2044[iVar0]->f_6 = func_2715(&(Local_4089.f_3355), iVar0);
			Local_4089.f_2044[iVar0]->f_7 = func_2716(&(Local_4089.f_3355), iVar0);
			Local_4089.f_2044[iVar0]->f_8 = func_2717(&(Local_4089.f_3355), iVar0);
			Local_4089.f_2044[iVar0]->f_3 = func_2718(&(Local_4089.f_3355), iVar0);
			if (Local_4089.f_2044[iVar0]->f_4 != -1 && Local_4089.f_2044[iVar0]->f_4 < 6)
			{
				func_2719(256, Local_4089.f_2044[iVar0]->f_4);
			}
			if (&Local_4089.f_2044[iVar0] != 0f && Local_4089.f_2044[iVar0]->f_1 != 0f)
			{
				Local_4089.f_2044[iVar0] = 0f;
			}
			if (func_2720(&(Local_4089.f_3355), iVar0))
			{
				func_2721(2, iVar0);
			}
			if (func_2722(&(Local_4089.f_3355), iVar0))
			{
				func_2721(1, iVar0);
			}
			if (func_2723(&(Local_4089.f_3355), iVar0))
			{
				func_2721(4, iVar0);
			}
			if (func_2724(&(Local_4089.f_3355), iVar0))
			{
				func_2721(8, iVar0);
			}
			if (func_2725(&(Local_4089.f_3355), iVar0))
			{
				func_2721(16, iVar0);
				func_236(95, 1, 0);
			}
		}
	else
	{
		}
		iVar0++;
	}
}

void func_1689()
{
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_10 - 1))
	{
		iVar2 = func_953(&(Local_4089.f_3355), iVar0);
		if (iVar2 > 0)
		{
			Local_4089.f_2105[iVar0]->f_4 = { func_2726(&(Local_4089.f_3355), iVar0) };
			Local_4089.f_2105[iVar0]->f_3 = func_2727(&(Local_4089.f_3355), iVar0);
			Local_4089.f_2105[iVar0]->f_2 = func_2728(&(Local_4089.f_3355), iVar0);
			if (func_2729(&(Local_4089.f_3355), iVar0))
			{
				func_2719(16, iVar0);
			}
			if (func_2730(&(Local_4089.f_3355), iVar0))
			{
				func_2719(64, iVar0);
			}
			if (func_2731(&(Local_4089.f_3355), iVar0))
			{
				func_2719(2048, iVar0);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar2 - 1))
			{
				if (func_2732(&(Local_4089.f_3355), iVar0, iVar1))
				{
					func_236(96, 1, 0);
					func_2719(8, iVar0);
				}
				else
				{
					iVar1++;
				}
			}
		}
	else
	{
		}
		iVar0++;
	}
}

void func_1690()
{
	iVar0 = 0;
	while (iVar0 <= (Local_4089.f_3355.f_12 - 1))
	{
		if (func_974(iVar0))
		{
			func_236(98, 1, 0);
		}
		else
		{
			iVar0++;
		}
	}
}

void func_1691()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_2733(&(Local_4089.f_3355), iVar0))
		{
			func_837(4096, iVar0);
		}
		iVar0++;
	}
}

void func_1692()
{
	Local_4089.f_3395.f_279 = func_2734(&(Local_4089.f_3355));
	Local_4089.f_3395.f_279.f_1 = func_2735(&(Local_4089.f_3355));
}

void func_1693()
{
	iVar1 = func_762(&(Local_4089.f_3355));
	bVar0 = false;
	while (bVar0 <= (iVar1 - 1))
	{
		iVar5 = func_766(&(Local_4089.f_3355), bVar0);
		if (iVar5 == 886638433)
		{
			iVar4 = func_765(&(Local_4089.f_3355), bVar0);
			func_2736(Local_4089.f_3355, iVar4);
		}
		else if (iVar5 == -584819812)
		{
			func_2737();
		}
		bVar0++;
	}
	iVar1 = Local_4089.f_3355.f_9;
	bVar0 = false;
	while (bVar0 <= (iVar1 - 1))
	{
		iVar5 = func_777(&(Local_4089.f_3355), bVar0);
		if (iVar5 == 886638433)
		{
			iVar4 = func_778(&(Local_4089.f_3355), bVar0);
			func_2736(Local_4089.f_3355, iVar4);
		}
		else if (iVar5 == -584819812)
		{
			func_2737();
		}
		bVar0++;
	}
	iVar1 = Local_4089.f_3355.f_8;
	bVar0 = false;
	while (bVar0 <= (iVar1 - 1))
	{
		iVar3 = func_2581(&(Local_4089.f_3355), bVar0);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar5 = func_2584(&(Local_4089.f_3355), bVar0, iVar2);
			if (iVar5 == 886638433)
			{
				iVar4 = func_2583(&(Local_4089.f_3355), bVar0, iVar2);
				func_2736(Local_4089.f_3355, iVar4);
			}
			else if (iVar5 == -584819812)
			{
				func_2737();
			}
			iVar2++;
		}
		bVar0++;
	}
	iVar1 = Local_4089.f_3355.f_10;
	bVar0 = false;
	while (bVar0 <= (iVar1 - 1))
	{
		iVar3 = func_953(&(Local_4089.f_3355), bVar0);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar5 = func_2738(&(Local_4089.f_3355), bVar0, iVar2);
			if (iVar5 == 886638433)
			{
				iVar4 = func_2739(&(Local_4089.f_3355), bVar0, iVar2);
				func_2736(Local_4089.f_3355, iVar4);
			}
			else if (iVar5 == -584819812)
			{
				func_2737();
			}
			iVar2++;
		}
		bVar0++;
	}
	iVar1 = Local_4089.f_3355.f_12;
	bVar0 = false;
	while (bVar0 <= (iVar1 - 1))
	{
		iVar3 = func_967(&(Local_4089.f_3355), bVar0);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar5 = func_1663(&(Local_4089.f_3355), bVar0, iVar2);
			if (iVar5 == 886638433)
			{
				iVar4 = func_1662(&(Local_4089.f_3355), bVar0, iVar2);
				func_2736(Local_4089.f_3355, iVar4);
			}
			else if (iVar5 == -584819812)
			{
				func_2737();
			}
			iVar2++;
		}
		bVar0++;
	}
	iVar1 = func_783(&(Local_4089.f_3355));
	bVar0 = false;
	while (bVar0 <= (iVar1 - 1))
	{
		iVar4 = func_784(&(Local_4089.f_3355), bVar0);
		func_2736(Local_4089.f_3355, iVar4);
		bVar0++;
	}
	iVar1 = Local_4089.f_3355.f_13;
	bVar0 = false;
	while (bVar0 <= (iVar1 - 1))
	{
		iVar4 = func_2335(&(Local_4089.f_3355), bVar0);
		func_2736(Local_4089.f_3355, iVar4);
		bVar0++;
	}
	iVar1 = Local_4089.f_3355.f_11;
	bVar0 = false;
	while (bVar0 <= (iVar1 - 1))
	{
		iVar4 = func_1666(&(Local_4089.f_3355), bVar0);
		func_2736(Local_4089.f_3355, iVar4);
		bVar0++;
	}
	iVar1 = func_1513(&(Local_4089.f_3355));
	bVar0 = false;
	while (bVar0 <= (iVar1 - 1))
	{
		iVar5 = func_1514(&(Local_4089.f_3355), bVar0);
		if (iVar5 == 886638433)
		{
			iVar4 = func_1666(&(Local_4089.f_3355), bVar0);
			func_2736(Local_4089.f_3355, iVar4);
		}
		else if (iVar5 == -584819812)
		{
			func_2737();
		}
		bVar0++;
	}
}

void func_1694(int iParam0)
{
	if ((*Global_1237665)[iParam0]->f_2 == 3 || (*Global_1248240)[iParam0]->f_555 == 3)
	{
		return;
	}
	if ((*Global_1237665)[iParam0]->f_12 != 0 && (*Global_1237665)[iParam0]->f_12 != (*Global_1248240)[iParam0]->f_591)
	{
		(*Global_1248240)[iParam0]->f_591 = (*Global_1237665)[iParam0]->f_12;
	}
	if ((*Global_1248240)[iParam0]->f_591 == (*Global_1248240)[iParam0]->f_592)
	{
		return;
	}
	(*Global_1248240)[iParam0]->f_592 = (*Global_1248240)[iParam0]->f_591;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		if (!is_bit_set((*Global_1248240)[iParam0]->f_591, iVar0))
		{
		}
		else
		{
			iVar1 = iVar2;
			Var3 = { func_2740(iParam0, iVar0) };
			if (add_relationship_group(&Var3, &iVar1))
			{
				func_2741(iParam0, iVar0, iVar1);
				func_2742(iParam0, iVar0, iVar1);
			}
		}
		iVar0++;
	}
}

bool func_1695(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1696(var uParam0)
{
	vVar0.x = uParam0->f_4;
	vVar0.f_2 = -439912251;
	vVar0.f_1 = func_255(uParam0, vVar0.x, vVar0.z);
	if (_0x603ac35fd4602c76(uParam0->f_4) && _datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return _datafile_get_num_children(vVar0.x, vVar0.y);
	}
	return 0;
}

int func_1697(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	iVar5 = iParam3;
	iVar6 = iParam4;
	bVar7 = iParam7;
	if (func_1260(uParam0, iParam1, &Var0, iVar6, bParam5, bParam6, bVar7, bParam8, bParam9))
	{
		func_2743(Var0, iParam2, &iVar5, 0);
	}
	return iVar5;
}

int func_1698(var uParam0, int iParam1)
{
	return func_591(uParam0, 1823278198, 0, 344756216, iParam1, 0, 0, 0, 0, 0);
}

int func_1699(int iParam0)
{
	switch (iParam0)
	{
		case -505697436:
			if (func_2744())
			{
				return 1935991112;
			}
			else
			{
				return 635628379;
			}
			break;
	}
	return 0;
}

int func_1700(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 303108068;
		case 1:
			return -910931556;
		default:
			break;
	}
	return 0;
}

bool func_1701(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	*iParam2 = iParam1;
	if (bParam6)
	{
		iParam2->f_1 = func_255(uParam0, iParam1, bParam3);
	}
	if (*iParam2 == uParam0->f_4)
	{
		if (bParam3 == -801742902 || bParam3 == -1816532073)
		{
			return true;
		}
	}
	iParam2->f_3 = bParam4;
	iParam2->f_4 = bParam5;
	iParam2->f_2 = bParam3;
	return (_0x603ac35fd4602c76(iParam1) && _datafile_get_data_node_index(&(iParam2->f_1), iParam2));
}

struct<8> func_1702(var uParam0, int iParam1, int iParam2)
{
	return func_252(uParam0, 917448107, "", 1403632554, iParam1, iParam2, 0, 0, 0);
}

char* func_1703(int iParam0)
{
	return "";
}

void func_1704(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

bool func_1705(int iParam0)
{
	if (!func_790(iParam0))
	{
		return false;
	}
	if (func_535(4, iParam0))
	{
		return false;
	}
	if (func_535(268435456, iParam0))
	{
		return false;
	}
	return true;
}

void func_1706(int iParam0)
{
	if (!func_790(iParam0))
	{
		return;
	}
	if (!func_791(&(Local_4089.f_3355), iParam0))
	{
		return;
	}
	func_2745();
	if (_does_volume_exist(&(Local_4089.f_2190[iParam0])))
	{
		_delete_volume(&(Local_4089.f_2190[iParam0]));
		_delete_volume(Local_4089.f_2190[iParam0]->f_2);
		_delete_volume(Local_4089.f_2190[iParam0]->f_1);
		func_209(iParam0);
		if (Local_4089.f_2190[iParam0]->f_9 == -68194969)
		{
			_remove_speed_zone(Local_4089.f_2190[iParam0]->f_12);
		}
		if (Local_4089.f_2890.f_58 == iParam0)
		{
			Local_4089.f_2890.f_58 = -1;
		}
	}
	iVar16 = func_890(iParam0);
	iVar17 = func_2746(&(Local_4089.f_3355), Local_4089.f_2190[iParam0]->f_13, Local_4089.f_2190[iParam0]->f_14, &(Local_13.f_289[iParam0]), iVar16);
	vVar18 = { func_2336(&(Local_4089.f_3355), Local_4089.f_2190[iParam0]->f_13, Local_4089.f_2190[iParam0]->f_14, &(Local_13.f_289[iParam0]), iVar16) };
	vVar21 = { func_2747(&(Local_4089.f_3355), Local_4089.f_2190[iParam0]->f_13, Local_4089.f_2190[iParam0]->f_14, &(Local_13.f_289[iParam0]), iVar16) };
	vVar24 = { func_2748(&(Local_4089.f_3355), Local_4089.f_2190[iParam0]->f_13, Local_4089.f_2190[iParam0]->f_14, &(Local_13.f_289[iParam0]), iVar16) };
	if (func_2749(&(Local_4089.f_3355), Local_4089.f_2190[iParam0]->f_13, Local_4089.f_2190[iParam0]->f_14, &(Local_13.f_289[iParam0]), iVar16))
	{
		func_2750(Local_4089.f_3391, &vVar18, &uVar27);
		func_894(512, iParam0);
	}
	if (func_2751(&(Local_4089.f_3355), Local_4089.f_2190[iParam0]->f_13, Local_4089.f_2190[iParam0]->f_14, &(Local_13.f_289[iParam0]), iVar16))
	{
		func_2752(Local_4089.f_3391, &vVar18, &uVar27);
		func_894(512, iParam0);
	}
	if (func_218(&(Local_4089.f_3355), -1400234297, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
	{
		func_894(1024, iParam0);
		func_894(2048, iParam0);
	}
	if (func_218(&(Local_4089.f_3355), 1408300580, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
	{
		vVar18 = { func_792(Local_4089.f_3391) };
	}
	if (func_218(&(Local_4089.f_3355), 1001410867, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
	{
		vVar18 = { func_2686(Local_4089.f_3391) };
	}
	if (func_218(&(Local_4089.f_3355), -1474551538, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
	{
		func_894(2097152, iParam0);
	}
	if (func_218(&(Local_4089.f_3355), 1447281085, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
	{
		func_894(4096, iParam0);
	}
	if (func_218(&(Local_4089.f_3355), 1434887695, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
	{
		func_894(1, iParam0);
	}
	if (func_218(&(Local_4089.f_3355), 399116044, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
	{
		func_894(32768, iParam0);
	}
	if (func_218(&(Local_4089.f_3355), -1497116657, 1, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
	{
		func_894(4194304, iParam0);
	}
	if (func_218(&(Local_4089.f_3355), -1382311120, 1, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
	{
		func_894(8388608, iParam0);
	}
	Local_4089.f_2190[iParam0]->f_7 = func_591(&(Local_4089.f_3355), 1203692200, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0, 0);
	if (func_892(&(Local_4089.f_3355), Local_4089.f_2190[iParam0]->f_14) <= 0 && !func_2753(Local_4089.f_2190[iParam0]->f_7))
	{
		iVar30 = 0;
		while (iVar30 <= 32)
		{
			if ((iVar30 != iParam0 && _does_volume_exist(&(Local_4089.f_2190[iVar30]))) && func_2754(iParam0, iVar30, vVar18, vVar21, vVar24))
			{
				Local_4089.f_2190[iParam0] = &Local_4089.f_2190[iVar30];
				if (_does_volume_exist(Local_4089.f_2190[iVar30]->f_2))
				{
					Local_4089.f_2190[iParam0]->f_2 = Local_4089.f_2190[iVar30]->f_2;
					Local_4089.f_2190[iParam0]->f_1 = Local_4089.f_2190[iVar30]->f_1;
					bVar29 = true;
				}
				bVar28 = true;
				if (bVar28 && bVar29)
				{
				}
				else
				{
					iVar30++;
				}
				if (func_934(Local_4089.f_2190[iParam0]->f_7))
				{
					func_2755(&(Local_4089.f_2190[iParam0]->f_2), iVar17, vVar18, vVar21, vVar24 + Vector(50f, 50f, 50f), Var8);
				}
				else if (Local_4089.f_2190[iParam0]->f_7 == -1141244111)
				{
					if (!bVar29)
					{
						bVar31 = func_218(&(Local_4089.f_3355), -440841356, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0);
						fVar32 = 20f;
						if (bVar31)
						{
							func_2755(&(Local_4089.f_2190[iParam0]->f_1), iVar17, vVar18, vVar21, vVar24 + Vector(fVar32, fVar32, fVar32), Var8);
						}
						func_2756(iParam0, vVar18, vVar21, vVar24, Var0);
					}
				}
				else if (func_933(Local_4089.f_2190[iParam0]->f_7))
				{
					bVar33 = func_218(&(Local_4089.f_3355), -1979653588, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0);
					if (bVar33)
					{
						func_236(159, 1, 0);
					}
				}
				if (func_218(&(Local_4089.f_3355), 788862604, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
				{
					func_894(128, iParam0);
				}
				if (func_218(&(Local_4089.f_3355), -679781919, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
				{
					func_894(256, iParam0);
				}
				Local_4089.f_2190[iParam0]->f_9 = func_591(&(Local_4089.f_3355), -102423974, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0, 0);
				Local_4089.f_2190[iParam0]->f_10 = func_1386(func_591(&(Local_4089.f_3355), -84009671, func_1700(-1), 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0, 0));
				Local_4089.f_2190[iParam0]->f_17 = func_591(&(Local_4089.f_3355), 880636905, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0, 0);
				Local_4089.f_2190[iParam0]->f_18 = func_886(&(Local_4089.f_3355), -1532785326, -1, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0);
				Local_4089.f_2190[iParam0]->f_19 = func_886(&(Local_4089.f_3355), -1514094258, -1, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0);
				if (!bVar28)
				{
					if ((Local_4089.f_2190[iParam0]->f_9 == -372365539 || Local_4089.f_2190[iParam0]->f_9 == -1310642109) || Local_4089.f_2190[iParam0]->f_9 == -1729589314)
					{
						func_2757(Local_4089.f_2190[iParam0], iVar17, vVar18, vVar21, vVar24);
					}
					else
					{
						func_2755(Local_4089.f_2190[iParam0], iVar17, vVar18, vVar21, vVar24, Var0);
					}
				}
				switch (Local_4089.f_2190[iParam0]->f_9)
				{
					case -1018040276:
						func_2758(iParam0);
						break;
					case -68194969:
						if (!func_535(262144, iParam0))
						{
							_0xb03944057fd735ba(&(Local_4089.f_2190[iParam0]), 6, 0);
							Local_4089.f_2190[iParam0]->f_12 = _add_speed_zone_for_coord(_0xf70f00013a62f866(&(Local_4089.f_2190[iParam0])), 23f, 0f, 0f, 0, 0f, 0f, 0f, 0f);
							func_894(262144, iParam0);
						}
						break;
					case -1829745822:
					case 237647415:
						if (!func_535(262144, iParam0))
						{
							_0xb03944057fd735ba(&(Local_4089.f_2190[iParam0]), 4, 0);
							func_894(262144, iParam0);
						}
						if (!func_535(128, iParam0))
						{
							func_2759(iParam0);
						}
						break;
					case 1303440444:
						func_2760(iParam0);
						break;
					case -95182063:
						func_2761(iParam0);
						break;
					case -2113903938:
						func_2762(iParam0);
						break;
					case 1500523685:
						func_2763(iParam0);
						break;
					case 109950889:
					case 309427229:
						func_2764(iParam0);
						break;
					case 310009782:
						func_2765(&(Local_4089.f_2190[iParam0]), 1);
						break;
					case -2099316354:
					case -766197312:
					case -56142594:
					case 1742456873:
					case 1749191359:
					case 1840419224:
					case 1983681793:
						func_2766(iParam0);
						break;
					case -659803429:
						func_2767(iParam0);
						break;
					case -372365539:
						func_2768(iParam0);
						break;
					case -1310642109:
						func_2769(iParam0);
						break;
					case -1729589314:
						func_2770(iParam0);
						break;
				}
				if (func_218(&(Local_4089.f_3355), 1791610838, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
				{
					func_2771(iParam0);
				}
				if (iVar17 == 391302943 && func_218(&(Local_4089.f_3355), 799937103, 0, 637011744, Local_4089.f_2190[iParam0]->f_13, 0, 0, 0, 0))
				{
					_0x2a10538d0a005e81(&(Local_4089.f_2190[iParam0]), 2);
				}
			}
		}
	}
}

var func_1707(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = -1032971034;
	if (iParam4 != 0)
	{
		return func_591(uParam0, -433267846, 0, -1373886950, iParam1, iParam4, 0, 0, 0, 0);
	}
	else if (iParam2 == 0)
	{
		return func_591(uParam0, -433267846, 0, -1608503687, iParam1, 0, 0, 0, 0, 0);
	}
	else if (iParam3 >= 0)
	{
		iVar0 = 1992569451;
	}
	return func_2772(uParam0, 2037218357, 0, iVar0, iParam2, iParam3, 0, 0, 0, 0);
}

void func_1708(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2773(iParam0);
			break;
		case 4:
			func_2774(iParam0);
			break;
	}
}

void func_1709(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2775(iParam0, bParam1);
			break;
		case 4:
			func_2776(iParam0, bParam2, bParam3);
			break;
	}
}

void func_1710(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2777(iParam0);
			break;
		case 4:
			func_2778(iParam0);
			break;
	}
}

void func_1711(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2779(iParam0);
			break;
		case 4:
			func_2780(iParam0);
			break;
	}
}

void func_1712(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2781(iParam0);
			break;
		case 4:
			func_2782(iParam0);
			break;
	}
}

void func_1713(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2783(iParam0);
			break;
		case 4:
			func_2784(iParam0);
			break;
	}
}

void func_1714(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2785(iParam0);
			break;
		case 4:
			func_2786(iParam0);
			break;
	}
}

void func_1715(int iParam0, bool bParam1, bool bParam2)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2787(iParam0, bParam1);
			break;
		case 4:
			func_2788(iParam0, bParam2);
			break;
	}
}

void func_1716(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2789(iParam0);
			break;
	}
}

void func_1717(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2790(iParam0);
			break;
		case 4:
			func_2791(iParam0);
			break;
	}
}

void func_1718(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2792(iParam0);
			break;
		case 4:
			func_2793(iParam0);
			break;
	}
}

void func_1719(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2794(iParam0);
			break;
	}
}

void func_1720(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2795(iParam0);
			break;
	}
}

void func_1721(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2796(iParam0);
			break;
	}
}

void func_1722(int iParam0, bool bParam1)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2797(iParam0);
			break;
		case 4:
			func_2798(iParam0, bParam1);
			break;
		case 7:
			func_2799(iParam0, bParam1);
			break;
	}
}

void func_1723(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2800(iParam0);
			break;
		case 4:
			func_2801(iParam0);
			break;
		case 7:
			func_2802(iParam0);
			break;
	}
}

void func_1724(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2803(iParam0);
			break;
		case 4:
			func_2804(iParam0);
			break;
		case 2:
			func_2805(iParam0);
			break;
		case 6:
			func_2806(iParam0);
			break;
	}
}

void func_1725(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2807(iParam0);
			break;
	}
}

void func_1726(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2808(iParam0);
			break;
		case 2:
			func_2809(iParam0);
			break;
		case 1:
			func_2810(iParam0);
			break;
		case 3:
			func_2811(iParam0);
			break;
		case 4:
			func_2812(iParam0);
			break;
		case 5:
			func_2812(iParam0);
			break;
		case 7:
			func_2813(iParam0);
			break;
	}
}

void func_1727(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2814(iParam0);
			break;
		case 4:
			func_2815(iParam0);
			break;
	}
}

void func_1728(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2816(iParam0);
			break;
		case 4:
			func_2817(iParam0);
			break;
	}
}

void func_1729(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2818(iParam0);
			break;
		case 4:
			func_2819(iParam0);
			break;
	}
}

void func_1730(int iParam0, int iParam1)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2820(iParam0);
			break;
		case 4:
			func_2821(iParam0, iParam1);
			break;
	}
}

void func_1731(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_8)
	{
		case 0:
			func_2822(iParam0);
			break;
		case 4:
			func_2823(iParam0);
			break;
	}
}

void func_1732(int iParam0)
{
	if (!func_2824(iParam0))
	{
		func_209(iParam0);
		return;
	}
	Var0 = { func_2825(iParam0) };
	if (func_2826(iParam0, &Var0, &(Local_4089.f_2190[iParam0]->f_3)))
	{
		func_2827(iParam0);
	}
	else
	{
		func_209(iParam0);
	}
}

void func_1733(int iParam0, bool bParam1)
{
	if (!func_535(2048, iParam0) || bParam1)
	{
		return;
	}
	if (func_67(Local_13.f_392))
	{
		return;
	}
	if (Local_13.f_392.f_2 == -10000f)
	{
		return;
	}
	_0x541b8576615c33de(&(Local_4089.f_2190[iParam0]), Local_13.f_392);
	func_536(2048, iParam0);
}

void func_1734(int iParam0)
{
	switch (Local_4089.f_2190[iParam0]->f_9)
	{
		case 237647415:
			if (Local_13.f_1 >= 2 && func_120(16))
			{
				if (Local_4089.f_2190[iParam0]->f_12 == -1)
				{
					Local_4089.f_2190[iParam0]->f_12 = add_shocking_event_at_position(495656844, _0xf70f00013a62f866(&(Local_4089.f_2190[iParam0])), -1f, -1f, -1f, -1f, -1f, -1, -1);
				}
			}
			if (!func_535(8192, iParam0) && (!func_535(128, iParam0) || func_120(16)))
			{
				func_2759(iParam0);
			}
			break;
		case -68194969:
			if (func_120(16))
			{
				_remove_speed_zone(Local_4089.f_2190[iParam0]->f_12);
				if (Local_13.f_1 >= 2)
				{
					Local_4089.f_2190[iParam0]->f_12 = add_shocking_event_at_position(495656844, _0xf70f00013a62f866(&(Local_4089.f_2190[iParam0])), -1f, -1f, -1f, -1f, -1f, -1, -1);
				}
			}
			if (!func_535(8192, iParam0) && (!func_535(128, iParam0) || func_120(16)))
			{
				func_2759(iParam0);
			}
			break;
		case -1829745822:
			if (!func_535(8192, iParam0) && (!func_535(128, iParam0) || func_120(16)))
			{
				func_2759(iParam0);
			}
			break;
		case 109950889:
			if (func_535(8192, iParam0) && func_120(16))
			{
				func_2828(iParam0);
			}
			break;
	}
}

bool func_1735(int iParam0)
{
	return is_bit_set(Local_4089.f_4093, iParam0);
}

var func_1736(var uParam0, int iParam1)
{
	return func_886(uParam0, -163729336, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

var func_1737(var uParam0, int iParam1)
{
	return func_886(uParam0, 1905522923, 0, -2021955256, iParam1, 0, 0, 0, 0);
}

int func_1738(int iParam0, bool bParam1, bool bParam2)
{
	if (func_1479(iParam0))
	{
		return 886638433;
	}
	switch (iParam0)
	{
		case -428150648:
			return func_777(&(Local_4089.f_3355), bParam1);
		case 448485414:
			return func_766(&(Local_4089.f_3355), bParam1);
		case -1276434456:
		case 661336845:
			return 886638433;
		case 1373849220:
			return func_1514(&(Local_4089.f_3355), bParam1);
		case -1091027173:
			return -1091027173;
		case 860364721:
			return 860364721;
		case -783556459:
			return -783556459;
		case -2067454306:
			return func_1663(&(Local_4089.f_3355), bParam2, bParam1);
		case 401658241:
			return func_2584(&(Local_4089.f_3355), bParam2, bParam1);
		case 477970332:
			return func_2738(&(Local_4089.f_3355), bParam2, bParam1);
		case -970979849:
			if (func_732(&(Local_4089.f_3355), func_731(&(Local_4089.f_3355), bParam1)))
			{
				return 898608023;
			}
			else
			{
				return 281414479;
			}
			break;
		default:
			if (iParam0 != 0)
			{
				return 0;
			}
			break;
	}
	return 0;
}

bool func_1739(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case -1918493640:
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (Local_409.f_317[iVar0]->f_1 == iParam1 && Local_409.f_317[iVar0]->f_2 == bParam2)
				{
					return iVar0;
				}
				iVar0++;
			}
			break;
		case 886638433:
			iVar0 = 0;
			while (iVar0 <= 14)
			{
				if (func_1479(iParam1))
				{
					if ((Local_409.f_1[iVar0]->f_5 == bParam2 && func_1230(Local_409.f_1[iVar0]->f_4) == iParam1) && Local_409.f_1[iVar0]->f_6 == bParam3)
					{
						return Local_409.f_1[iVar0]->f_11;
					}
				}
				else if ((Local_409.f_1[iVar0]->f_4 == iParam1 && Local_409.f_1[iVar0]->f_5 == bParam2) && Local_409.f_1[iVar0]->f_6 == bParam3)
				{
					return iVar0;
				}
				iVar0++;
			}
			break;
		case -584819812:
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if ((Local_409.f_381[iVar0]->f_1 == iParam1 && Local_409.f_381[iVar0]->f_2 == bParam2) && Local_409.f_381[iVar0]->f_3 == bParam3)
				{
					return iVar0;
				}
				iVar0++;
			}
			break;
		case -1091027173:
			return bParam2;
		case -916820003:
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (Local_409.f_478[iVar0]->f_2 == bParam2)
				{
					return iVar0;
				}
				iVar0++;
			}
			break;
		case 281414479:
			iVar0 = 0;
			while (iVar0 <= 14)
			{
				if (Local_13.f_3[iVar0]->f_1 == bParam2)
				{
					return iVar0;
				}
				iVar0++;
			}
			break;
		case 898608023:
			iVar0 = 0;
			while (iVar0 <= 14)
			{
				if (Local_4089.f_1554[iVar0]->f_1 == bParam2)
				{
					return iVar0;
				}
				iVar0++;
			}
			break;
		case 1015970717:
			return false;
	}
	return -1;
}

void func_1740(int iParam0)
{
}

int func_1741(var uParam0, bool bParam1)
{
	return func_886(uParam0, -903668001, -1, -886659247, bParam1, 0, 0, 0, 0);
}

int func_1742(var uParam0, bool bParam1)
{
	return func_591(uParam0, -1960229673, -1, -886659247, bParam1, 0, 0, 0, 0, 0);
}

int func_1743(var uParam0, bool bParam1, int iParam2)
{
	return func_218(uParam0, 491333121, 0, 344425994, bParam1, iParam2, 0, 0, 0);
}

bool func_1744(int iParam0, int iParam1)
{
	return func_80(Local_4089.f_3138[iParam1]->f_1, iParam0);
}

int func_1745(var uParam0, int iParam1)
{
	return func_1445(uParam0, -385619080, -570710357, -1509591557, iParam1, 0, 0, 0, 0, 0);
}

int func_1746(var uParam0, int iParam1)
{
	return func_1445(uParam0, -385619080, -570710357, -384272353, iParam1, 0, 0, 0, 0, 0);
}

int func_1747(var uParam0, int iParam1)
{
	return func_1445(uParam0, -385619080, -570710357, 889008486, iParam1, 0, 0, 0, 0, 0);
}

int func_1748(var uParam0, int iParam1)
{
	return func_1445(uParam0, -385619080, -570710357, 692620517, iParam1, 0, 0, 0, 0, 0);
}

int func_1749(var uParam0, int iParam1)
{
	return func_1445(uParam0, -385619080, -570710357, -1272157467, iParam1, 0, 0, 0, 0, 0);
}

bool func_1750(int iParam0, int iParam1, int iParam2)
{
	if (!func_311(iParam1))
	{
		return false;
	}
	if (iParam2 == 255)
	{
		iParam2 = participant_id_to_int();
	}
	return func_80(&(Local_920[iParam2]->f_55[iParam1]), iParam0);
}

void func_1751(int iParam0)
{
	func_2829(iParam0, &bVar0, &bVar1, &bVar2);
	if (bVar1)
	{
		func_837(512, iParam0);
	}
	else
	{
		func_838(512, iParam0);
	}
	if (bVar2)
	{
		func_837(256, iParam0);
	}
	else
	{
		func_838(256, iParam0);
	}
	if (bVar0)
	{
		func_837(1024, iParam0);
	}
	else
	{
		func_838(1024, iParam0);
	}
}

void func_1752(int iParam0)
{
	iVar0 = func_2830(iParam0);
	if (iVar0 != -1)
	{
		if (_does_volume_exist(&(Local_4089.f_2190[iVar0])))
		{
			*Local_4089.f_3229.f_15[iParam0] = { _0xf70f00013a62f866(&(Local_4089.f_2190[iVar0])) };
		}
	}
	else if (!does_entity_exist(&(Local_4089.f_3229.f_2[iParam0])))
	{
		iVar1 = func_310(Local_13.f_82[iParam0]->f_1, Local_13.f_82[iParam0]->f_5);
		if (does_entity_exist(iVar1))
		{
			Local_4089.f_3229.f_2[iParam0] = iVar1;
			*Local_4089.f_3229.f_15[iParam0] = { get_entity_coords(&(Local_4089.f_3229.f_2[iParam0]), false, true) };
		}
	}
	else
	{
		*Local_4089.f_3229.f_15[iParam0] = { get_entity_coords(&(Local_4089.f_3229.f_2[iParam0]), false, true) };
	}
}

void func_1753(int iParam0)
{
	if (!func_773(1, iParam0))
	{
		Local_4089.f_1622[iParam0]->f_42 = func_2831(&(Local_4089.f_3355), iParam0);
		Local_4089.f_1622[iParam0]->f_43 = func_919(func_2832(&(Local_4089.f_3355), iParam0));
		Local_4089.f_1622[iParam0]->f_44 = func_2833(&(Local_4089.f_3355), iParam0);
		Local_4089.f_1622[iParam0]->f_45 = func_2834(&(Local_4089.f_3355), iParam0);
		Local_4089.f_1622[iParam0]->f_46 = func_2835(&(Local_4089.f_3355), iParam0);
		Local_4089.f_1622[iParam0]->f_36 = func_2836(&(Local_4089.f_3355), iParam0);
		Local_4089.f_1622[iParam0]->f_37 = func_2837(&(Local_4089.f_3355), iParam0);
		Local_4089.f_1622[iParam0]->f_38 = func_2838(&(Local_4089.f_3355), iParam0);
		Local_4089.f_1622[iParam0]->f_39 = func_2839(&(Local_4089.f_3355), iParam0);
		Local_4089.f_1622[iParam0]->f_40 = func_2840(&(Local_4089.f_3355), iParam0);
		Local_4089.f_1622[iParam0]->f_32 = func_896(func_2841(&(Local_4089.f_3355), iParam0), -1);
		Local_4089.f_1622[iParam0]->f_33 = func_896(func_2842(&(Local_4089.f_3355), iParam0), -1);
		Local_4089.f_1622[iParam0]->f_34 = func_2843(&(Local_4089.f_3355), iParam0);
		Local_4089.f_1622[iParam0]->f_55 = func_1506(&(Local_4089.f_3355), iParam0);
		Local_4089.f_1622[iParam0]->f_35 = func_2552(&(Local_4089.f_3355), iParam0);
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			Local_4089.f_1622[iParam0]->f_2[iVar0]->f_12 = func_2844(&(Local_4089.f_3355), iParam0, iVar0);
			if (Local_4089.f_1622[iParam0]->f_2[iVar0]->f_12 > 31)
			{
				Local_4089.f_1622[iParam0]->f_2[iVar0]->f_12 = -1;
			}
			iVar0++;
		}
		if (func_2845(&(Local_4089.f_3355), iParam0))
		{
			func_837(4, iParam0);
		}
		if (func_2846(&(Local_4089.f_3355), iParam0))
		{
			func_837(8, iParam0);
		}
		if (Local_4089.f_1622[iParam0]->f_33 != -1 && !func_67(func_2847(&(Local_4089.f_3355), iParam0)))
		{
			func_837(16, iParam0);
		}
		if (func_2848(&(Local_4089.f_3355), iParam0))
		{
			func_837(2048, iParam0);
		}
		if (func_2849(&(Local_4089.f_3355), iParam0))
		{
			func_837(32768, iParam0);
		}
		if (func_2850(&(Local_4089.f_3355), iParam0))
		{
			func_2027(4);
			func_837(65536, iParam0);
		}
		if (func_2851(&(Local_4089.f_3355), iParam0))
		{
			func_837(67108864, iParam0);
		}
		if (func_2852(&(Local_4089.f_3355), iParam0))
		{
			func_837(536870912, iParam0);
		}
		if (Local_4089.f_1622[iParam0]->f_32 != -1)
		{
			func_837(64, iParam0);
		}
		if (func_2853(&(Local_4089.f_3355), iParam0))
		{
			func_837(1073741824, iParam0);
		}
		if (func_2854(&(Local_4089.f_3355), iParam0))
		{
			func_837(-2147483648, iParam0);
		}
		if (Local_13.f_82[iParam0]->f_1 == 886638433 && Local_13.f_82[iParam0]->f_5 != -1)
		{
			if (Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1 == -126469426)
			{
				Local_4089.f_1622[iParam0]->f_39 = func_2855(func_1183());
				Local_4089.f_1622[iParam0]->f_36 = 30f;
			}
			else if (func_836(Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1))
			{
				Local_4089.f_1622[iParam0]->f_39 = 225f;
				Local_4089.f_1622[iParam0]->f_36 = 50f;
			}
		}
		func_2856(iParam0);
		func_1751(iParam0);
		func_837(1, iParam0);
	}
	else if (&Local_13.f_82[iParam0] > 1)
	{
		func_990(2, iParam0);
	}
}

void func_1754(int iParam0)
{
	if (func_773(16384, iParam0))
	{
		func_172(0, 1);
		func_838(16384, iParam0);
	}
	if (func_1750(67108864, iParam0, 255))
	{
		func_2857(67108864, iParam0);
	}
	func_2856(iParam0);
	func_1751(iParam0);
	if ((Local_4089.f_3393 == 1539023636 && !func_104(8192, 255)) && Local_13.f_82[iParam0]->f_1 == 886638433)
	{
		func_2858(iParam0);
	}
	func_2859(iParam0);
	func_2860(iParam0);
	func_2861(iParam0);
	func_2862(iParam0);
	func_2863(iParam0);
	func_2864(iParam0);
	func_2865(iParam0);
	func_2866(iParam0, 0);
	func_2867(iParam0);
}

void func_1755(int iParam0)
{
	func_2856(iParam0);
	func_1751(iParam0);
	if ((Local_4089.f_3393 == 1539023636 && !func_104(8192, 255)) && Local_13.f_82[iParam0]->f_1 == 886638433)
	{
		func_2858(iParam0);
	}
	func_2861(iParam0);
	func_2862(iParam0);
	func_2863(iParam0);
	func_2865(iParam0);
	iVar0 = func_2868(Local_13.f_82[iParam0]->f_1, Local_13.f_82[iParam0]->f_5);
	iVar1 = Local_13.f_82[iParam0]->f_2;
	if (func_2227(iVar1, iParam0, net_to_ent(iVar0), 1, 0) && !_0x9be7dcb22d32ccbe(Local_13.f_82[iParam0]->f_10, player_id()))
	{
		func_241(iVar0, 1);
	}
	else
	{
		func_241(iVar0, 0);
	}
}

void func_1756(int iParam0)
{
	if (!func_1750(67108864, iParam0, 255))
	{
		iVar0 = Local_4089.f_1622[iParam0]->f_2[Local_13.f_82[iParam0]->f_2]->f_9;
		if (iVar0 != -1)
		{
			func_2869(iVar0, 0, 1, 0, 1017772929);
		}
		if (Local_13.f_82[iParam0]->f_2 == func_182(255) && func_104(32, 255))
		{
			if ((Local_13.f_82[iParam0]->f_10 == 0 && func_307(255) == 622225714) || _0x901e0dc25080c8b9(player_id()) == Local_13.f_82[iParam0]->f_10)
			{
				Local_4089.f_4121++;
				if (func_453(65536, iParam0))
				{
					Local_4089.f_4120++;
				}
				func_2870(iParam0, 1);
			}
		}
		func_2871(67108864, iParam0);
	}
	if (func_773(16384, iParam0))
	{
		func_172(0, 1);
		func_838(16384, iParam0);
	}
	func_2856(iParam0);
	func_1751(iParam0);
	func_2861(iParam0);
	func_2862(iParam0);
	func_2863(iParam0);
	func_2865(iParam0);
}

void func_1757(int iParam0)
{
	if (!func_1750(1, iParam0, 255))
	{
		if (Local_13.f_82[iParam0]->f_9 == Local_4089.f_1622[iParam0]->f_55)
		{
			func_2872(iParam0);
		}
		if (func_1039(iParam0, 255, 0))
		{
			func_2873();
		}
		if (func_1042(iParam0, 255))
		{
			func_1982();
		}
		iVar0 = func_182(255);
		if ((((!func_453(1, iParam0) && func_453(8, iParam0)) && Local_13.f_82[iParam0]->f_2 == iVar0) && func_104(32, 255)) && !func_995(iParam0, 0))
		{
			if ((Local_13.f_82[iParam0]->f_10 == 0 && func_307(255) == 622225714) || _0x901e0dc25080c8b9(player_id()) == Local_13.f_82[iParam0]->f_10)
			{
				if (Local_13.f_359 > 0)
				{
					func_2870(iParam0, 0);
				}
				else
				{
					func_837(33554432, iParam0);
				}
				Local_4089.f_4121++;
				if (func_453(65536, iParam0))
				{
					Local_4089.f_4120++;
				}
				if (func_1093(4, iVar0) && Local_13.f_82[iParam0]->f_13 == player_id())
				{
					func_1030(2, 1, 1, 1, 1, 0, -1);
				}
			}
		}
		if (!func_453(1, iParam0) && func_104(32, 255))
		{
			switch (Local_13.f_82[iParam0]->f_1)
			{
				case 886638433:
					if (Local_13.f_82[iParam0]->f_5 != -1 && Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1 == -126469426)
					{
						func_2874(iParam0, iVar0, Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_60);
					}
					break;
				case -916820003:
					if (Local_13.f_82[iParam0]->f_5 != -1 && (Local_4089.f_1983[Local_13.f_82[iParam0]->f_5]->f_1 == 1115966845 || Local_4089.f_1983[Local_13.f_82[iParam0]->f_5]->f_1 == -1829453767))
					{
						func_2874(iParam0, iVar0, get_ped_index_from_entity_index(func_308(iParam0)));
					}
					break;
			}
		}
		func_2875(iParam0);
		func_2876();
		func_2866(iParam0, 1);
		func_208(iParam0);
		if (func_773(16384, iParam0))
		{
			func_172(0, 1);
			func_838(16384, iParam0);
		}
		if (Local_13.f_359 > 0)
		{
			iVar1 = func_2877(&(Local_4089.f_3355), iParam0);
			if (iVar1 != 0)
			{
				Local_4089.f_3355.f_6 = func_2607(&(Local_4089.f_3355), iVar1);
				if (func_2878(&(Local_4089.f_3355)))
				{
					func_236(56, 1, 0);
				}
			}
		}
		func_838(1048576, iParam0);
		func_2857(256, iParam0);
		func_838(524288, iParam0);
		if (Local_13.f_82[iParam0]->f_1 == -584819812)
		{
			if (func_646(536870912, Local_13.f_82[iParam0]->f_5))
			{
				func_1023(1);
			}
		}
		func_2871(1, iParam0);
	}
}

int func_1758(var uParam0, bool bParam1)
{
	return func_1445(uParam0, -1160945462, 0, -1272157467, bParam1, 0, 0, 0, 0, 0);
}

bool func_1759(int iParam0)
{
	return func_80((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

void func_1760(int iParam0)
{
	if (!func_1759(iParam0))
	{
		func_105(&((*Global_1134390)[network_player_id_to_int()]->f_73), iParam0);
	}
}

float func_1761()
{
	switch (Local_4089.f_3393)
	{
		case 1884341302:
			return 300f;
		case -1784925006:
			return 800f;
		default:
			break;
	}
	return 100f;
}

bool func_1762(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (iParam2 && func_2879(iParam0, fParam1, bParam5))
	{
		return true;
	}
	if (iParam3 && func_2880(iParam0, fParam1))
	{
		return true;
	}
	if (iParam4 && func_2881(iParam0, fParam1))
	{
		return true;
	}
	if (iParam6 && func_2882(iParam0, fParam1))
	{
		return true;
	}
	return false;
}

int func_1763()
{
	iVar0 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
	if (iVar0 >= 0 && iVar0 <= 32)
	{
		return (*Global_1298536)[iVar0]->f_5.f_12;
	}
	return -1;
}

Vector3 func_1764(int iParam0)
{
	return *Global_1298378->f_6.f_1[iParam0];
}

bool func_1765(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_80((*Global_1298536)[iVar0]->f_86, iParam1);
	}
	return false;
}

bool func_1766(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, int iParam5)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		switch (get_event_at_index(1, iVar0))
		{
			case -1315570756:
				if (func_2883(uParam0, bParam1, bParam2, bParam3, fParam4, iParam5, iVar0))
				{
					return true;
				}
				break;
		}
		iVar0++;
	}
	return false;
}

bool func_1767(var uParam0, int iParam1, float fParam2)
{
	vVar1 = { get_entity_coords(iParam1, false, false) };
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (does_entity_exist(&(uParam0->f_2[iVar0])) && vdist(vVar1, get_entity_coords(&(uParam0->f_2[iVar0]), false, false)) < fParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1768()
{
	if (func_88() != 0)
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

void func_1769(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 7, 14, &uParam1);
}

int func_1770(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (&Local_13.f_82[iVar0] > 0 && &Local_4089.f_3229.f_2[iVar0] == iParam0)
		{
			return iVar0;
		}
		else if (((bParam1 && is_entity_a_vehicle(iParam0)) && Local_13.f_82[iVar0]->f_1 == -1918493640) && Local_4089.f_1087[Local_13.f_82[iVar0]->f_5]->f_27 == -584819812)
		{
			iVar1 = Local_4089.f_1087[Local_13.f_82[iVar0]->f_5]->f_28;
			if (Local_4089.f_1367[iVar1]->f_14 == get_vehicle_index_from_entity_index(iParam0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_1771(int iParam0, bool bParam1)
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
	if (!func_106(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	if (func_106(func_2884()))
	{
		if (!func_1175(&(Global_1296859->f_154[&Global_1296859]), 0, 1) && func_2885(iParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_1772(int iParam0, int iParam1)
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

bool func_1773(int iParam0)
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

int func_1774(int iParam0)
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

float func_1775(int iParam0, bool bParam1)
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

bool func_1776(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = player_id();
	}
	return (func_166(iParam0, 1) || func_166(iParam0, 64));
}

int func_1777(struct<2> Param0)
{
	if (!func_106(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_107(Param0, func_2886(iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1778(int iParam0)
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

int func_1779(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3;
}

bool func_1780(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_1781(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3.f_1;
}

bool func_1782(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

int func_1783(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3.f_3;
}

int func_1784(int iParam0)
{
	return (*Global_1118808)[iParam0]->f_1;
}

int func_1785(int iParam0)
{
	return Global_1118808[iParam0];
}

int func_1786(int iParam0)
{
	return &(Global_1109804->f_5737[iParam0]);
}

void func_1787(int iParam0, int iParam1, struct<2> Param2, int iParam4)
{
	if (!Global_1109804->f_18)
	{
		return;
	}
	if (!func_106(Param2))
	{
		return;
	}
	if (!func_1780(iParam0))
	{
		return;
	}
	if (!func_1782(iParam1))
	{
		return;
	}
	if (!func_2887(iParam4))
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
	func_723(&Var0);
}

int func_1788(int iParam0)
{
	return func_2888(iParam0);
}

int func_1789()
{
	return &Global_1902818;
}

void func_1790(int iParam0, int iParam1)
{
	Var0 = { func_2890(-1919535953, func_2889(iParam0)) };
	func_2891(Var0, iParam1);
}

void func_1791(int iParam0, int iParam1)
{
	Var0 = { func_2890(817387112, func_2889(iParam0)) };
	func_2892(Var0, iParam1);
}

void func_1792(int iParam0)
{
	if (func_286(&(Global_1109804->f_247.f_6), iParam0, 2))
	{
	}
}

void func_1793(int iParam0)
{
	if (func_286((*Global_1130367)[player_id()], iParam0, 2))
	{
	}
}

void func_1794(int iParam0)
{
	func_511(&(Global_1298378->f_156), iParam0);
}

void func_1795(int iParam0, int iParam1)
{
	Var0 = { func_2890(440364183, func_2889(iParam0)) };
	func_2891(Var0, iParam1);
}

void func_1796(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 1822827642;
	}
	else
	{
		iVar0 = 1511238709;
	}
	Var1 = { func_2890(iVar0, func_2889(iParam0)) };
	func_2893(Var1);
}

int func_1797(int iParam0)
{
	return func_2894(iParam0);
}

void func_1798(var uParam0)
{
	if (!func_2895(*uParam0))
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
	func_2896(&vVar3);
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
				if (!func_2895(&(vVar3[(iVar0 - 1)])))
				{
				}
				else
				{
					vVar35.x = &vVar3[(iVar0 - 1)];
					vVar35.f_1 = (vVar3[(iVar0 - 1)])->f_2;
					vVar35.f_2 = func_1184((vVar3[(iVar0 - 1)])->f_1);
					if (func_2897(uParam0, &vVar35))
					{
						iVar2 = func_2898((iVar0 - 1));
					}
					else
					{
						iVar1 = func_2898((iVar0 - 1));
						func_2899(iVar1, iVar0);
					}
				}
			}
			iVar0 = (iVar0 + -1);
		}
	}
	if (iVar2 == 0)
	{
		iVar2 = func_2900(uParam0);
		if (iVar2 == 0)
		{
			return;
		}
	}
	func_2899(iVar2, 0);
}

void func_1799(int iParam0, struct<2> Param1, bool bParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	iVar0 = func_1786(iParam0);
	iVar2 = func_2901();
	iVar3 = func_464(Param1);
	iVar5 = func_1797(iVar0);
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
			if (func_2902(iParam0, 4))
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
	if (!func_2902(iParam0, 8))
	{
		iVar2 = 0;
	}
	func_1019(iVar0, iVar1, &uParam4, iVar3, iVar2, iVar4);
	if (func_2902(iParam0, 8))
	{
		if (iVar2 != 0)
		{
			func_2903(iParam0);
			func_2904(iParam0);
		}
	}
}

int func_1800(int iParam0)
{
	switch (func_1784(iParam0))
	{
		case -323664079:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1801(int iParam0, int iParam1)
{
	Global_1109804->f_260.f_5[iParam0] = (&Global_1109804->f_260.f_5[iParam0] + iParam1);
}

void func_1802(int iParam0)
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

void func_1803(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 1822827642;
		iVar1 = func_2905(iParam0);
	}
	else
	{
		iVar0 = 1511238709;
		iVar1 = func_2906(iParam0);
	}
	Var2 = { func_2890(iVar0, iVar1) };
	func_2893(Var2);
}

void func_1804(int iParam0)
{
	func_2907(iParam0);
}

void func_1805(int iParam0)
{
	func_2908(iParam0);
}

bool func_1806(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_1807(int iParam0)
{
	if (!func_1806(iParam0))
	{
		return false;
	}
	if (!func_2909(&Var0))
	{
		return false;
	}
	if (!func_2910(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_2910(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	return func_2910(Var0, &(Var0.f_1), 48, 0, 0, 0);
}

void func_1808(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_2911(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_2912(iParam0, iVar0, &Var2, uParam3);
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
					func_2913(iParam0, iParam2, uParam3, 0, 0);
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

void func_1809(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_2914(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_2915(iParam0, iVar0, &Var2);
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

void func_1810(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_2916(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_2917(iParam0, iVar0, uParam2, &Var2))
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
			func_2918(Var2.f_1, &uVar7, Var2.f_3 & 1 == 1, 255, 0, 0);
		}
		iVar0++;
	}
}

void func_1811(int iParam0, var uParam1)
{
	func_2919(iParam0, uParam1);
}

void func_1812(int iParam0, int iParam1, int iParam2)
{
	if (!func_2920(iParam0, iParam2, iParam1, &iVar0, &uVar1))
	{
		return;
	}
	func_1007(iVar0, 0, 0);
}

void func_1813(var uParam0)
{
	iVar2 = player_id();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!_0x0a79c81c418f5d38(&uParam0, iVar0))
		{
		}
		else
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
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

int func_1814(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -126580932;
		case 1:
			return 0;
		case 2:
			return 698214003;
		case 3:
			return 780689752;
		case 4:
			return 1698995037;
		case 5:
			return 408582472;
		case 6:
			return -1100659165;
		case 7:
			return -1248720641;
		case 8:
			return -286632741;
		case 9:
			return 956867472;
		case 10:
			return 1036630721;
		case 11:
			return 1138017610;
		case 12:
			return -33431232;
		case 13:
			return -2101912686;
		case 14:
			return 846387993;
		case 15:
			return -1840995238;
		case 16:
			return 1585362808;
		case 17:
			return -425216802;
		case 18:
			return -1722264360;
		case 19:
			return -1288042557;
		case 20:
			return 1828803907;
		case 21:
			return -343572565;
		case 22:
			return 1095779900;
		case 23:
			return 1444077748;
		case 24:
			return 952755846;
		case 25:
			return 420477860;
		case 26:
			return 2132307595;
		case 27:
			return -1919393558;
		case 28:
			return 1374979106;
		case 29:
			return 114587291;
		case 30:
			return -900877140;
		case 31:
			return -660114191;
		case 32:
			return -1767662471;
		case 33:
			return 878491929;
		case 34:
			return 398279342;
		case 35:
			return 550487527;
		case 36:
			return 713106899;
		case 37:
			return -1719665775;
		case 38:
			return -1170784825;
		case 39:
			return -1010031245;
		case 40:
			return -29822088;
		case 41:
			return 1323028278;
		case 42:
			return 797908556;
		case 43:
			return 1907663129;
		case 44:
			return -60432888;
		case 45:
			return -1209874968;
		case 46:
			return 1078589127;
		case 47:
			return -1525233154;
		case 48:
			return 1278022357;
		case 49:
			return -1729554078;
		case 50:
			return -1480068681;
		case 51:
			return 926420921;
		case 52:
			return 1195903441;
		case 53:
			return -649929946;
		case 54:
			return 1829805500;
		case 55:
			return -1855662261;
		case 56:
			return 111084081;
		case 57:
			return 149216078;
		case 58:
			return -1920464018;
		case 59:
			return 659100749;
		case 60:
			return -1378468884;
		case 61:
			return -1575244501;
		case 62:
			return -1786033368;
		case 63:
			return 1899963938;
		case 64:
			return -1525401254;
		case 65:
			return 666050502;
		case 66:
			return 887717126;
		case 67:
			return -885646667;
		case 68:
			return 946848176;
		case 69:
			return 2110112797;
		case 70:
			return -1543433893;
		case 71:
			return -587737142;
		case 72:
			return -1697567574;
		case 73:
			return 1554410187;
		case 74:
			return -1551628748;
		case 75:
			return 1801131110;
		case 76:
			return -1431848307;
		case 77:
			return -979738281;
		case 78:
			return -837774766;
		case 79:
			return -1223791123;
		case 80:
			return -1181880939;
		case 81:
			return 180714777;
		case 82:
			return -521477124;
		case 83:
			return 1156950836;
		case 84:
			return 1498983922;
		case 85:
			return -1089821002;
		case 86:
			return -1767968552;
		case 87:
			return 1052684812;
		case 88:
			return -1835722213;
		case 89:
			return -1229834518;
		case 90:
			return -392183396;
		case 91:
			return 839199173;
		case 92:
			return -1080696981;
		case 93:
			return 509781427;
		case 94:
			return -1491472827;
		case 95:
			return 1075856357;
		case 96:
			return 1806354060;
		case 97:
			return 268103762;
		case 98:
			return 54499763;
		case 99:
			return -47513954;
		case 100:
			return 173401469;
		case 101:
			return 1830494920;
		case 102:
			return -56802666;
		case 103:
			return -415437740;
		case 104:
			return -1465202595;
		case 105:
			return -233204301;
		case 106:
			return -1790318144;
		case 107:
			return -1716981503;
		case 108:
			return -1729980669;
		case 109:
			return -1727526861;
		case 110:
			return -920221586;
		case 111:
			return -931294997;
		case 112:
			return -1486927560;
		case 113:
			return 852774198;
		case 114:
			return -885737328;
		case 115:
			return 1769731136;
		case 116:
			return -1459368569;
		case 117:
			return -1291022662;
		case 118:
			return 638586808;
		case 119:
			return 2096770678;
		case 120:
			return -1605880447;
		case 121:
			return -1539337723;
		case 122:
			return -117284255;
		case 123:
			return -636552746;
		case 124:
			return -1993903481;
		case 125:
			return 791791441;
		case 126:
			return 1903067887;
		case 127:
			return -1927422497;
		case 128:
			return 2040423027;
		case 129:
			return 1838787462;
		case 130:
			return 2050123975;
		case 131:
			return 1811663962;
		case 132:
			return -711254121;
		case 133:
			return -35033037;
		case 134:
			return 955999834;
		case 135:
			return -481051896;
		case 136:
			return -1935700575;
		case 137:
			return -1125028284;
		case 138:
			return -267135864;
		case 139:
			return -751329575;
		case 140:
			return 1037792287;
		case 141:
			return 798283666;
		case 142:
			return -1970041458;
		case 143:
			return -203268054;
		case 144:
			return -415250715;
		case 145:
			return -799500009;
		case 146:
			return 1405624312;
		case 147:
			return -1123356036;
		case 148:
			return -1478178768;
		case 149:
			return 168336706;
		case 150:
			return 807983049;
		case 151:
			return 1636352616;
		case 152:
			return 1110815339;
		case 153:
			return -1197630873;
		case 154:
			return 1213703;
		case 155:
			return -1418298797;
		case 156:
			return 1900141702;
		case 157:
			return -992423055;
		case 158:
			return 320758674;
		case 159:
			return -546870456;
		case 160:
			return 2119170919;
		case 161:
			return 1547488310;
		case 162:
			return 1449867002;
		case 163:
			return -46116991;
		case 164:
			return 1281707602;
		case 165:
			return 1865781806;
		case 166:
			return -1631930150;
		case 167:
			return -2059285007;
		case 168:
			return 456199285;
		case 169:
			return -340578116;
		case 170:
			return 362862598;
		case 171:
			return -1391865428;
		case 172:
			return -1084890102;
		case 173:
			return -1857550353;
		case 174:
			return -1629969648;
		case 175:
			return 576694808;
		case 176:
			return -2006026692;
		case 177:
			return -161625840;
		case 178:
			return 1662680949;
		case 179:
			return 352539363;
		case 180:
			return -1196069774;
		case 181:
			return -1685270562;
		case 182:
			return -813902658;
		case 183:
			return 282858309;
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

void func_1815(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (&Local_13.f_82[iVar0] == 0)
		{
		}
		else
		{
			bVar3 = false;
			if (&Local_13.f_82[iVar0] == 5)
			{
				bVar3 = true;
			}
			if (func_995(iVar0, 0))
			{
			}
			else if ((Local_13.f_82[iVar0]->f_1 == -1918493640 && !func_652(65536, Local_13.f_82[iVar0]->f_5)) && func_1449(Local_4089.f_3355, 448485414, iVar0, -1, -451432169, 0, 0, 0, 0))
			{
			}
			else
			{
				if ((Local_4089.f_1622[iVar0]->f_2[iParam0]->f_12 >= 0 && !is_bit_set(Local_13.f_366, Local_4089.f_1622[iVar0]->f_2[iParam0]->f_12)) && func_1394(&(Local_4089.f_3355), iVar0, iParam0))
				{
					bVar2 = true;
				}
				iVar1 = func_1506(&(Local_4089.f_3355), iVar0);
				if ((iVar1 > 1 && !bVar2) && Local_4089.f_1622[iVar0]->f_35 == -922798066)
				{
					if (!bVar3)
					{
						*uParam1 = (*uParam1 + (iVar1 - Local_13.f_82[iVar0]->f_9));
					}
					*uParam2 = (*uParam2 + (iVar1 - Local_13.f_82[iVar0]->f_9));
				}
				else
				{
					if (!bVar3)
					{
						*uParam1++;
					}
					*uParam2++;
				}
			}
		}
		iVar0++;
	}
}

bool func_1816(int iParam0, var uParam1)
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iVar0 != (*Global_1248240)[iParam0]->f_595)
	{
		bVar1 = _0xd6f6acf4392187fb((*Global_1248240)[iParam0]->f_595);
		if ((((*Global_1248240)[iParam0]->f_594 > 1 && _0x149a2751ab66ac02((*Global_1248240)[iParam0]->f_595) > 0) && _0x4be6c13a45cca8ec((*Global_1248240)[iParam0]->f_595) != 255) && _0x4be6c13a45cca8ec((*Global_1248240)[iParam0]->f_595) == (*Global_1248240)[iParam0]->f_596)
		{
			*uParam1 = 1;
		}
		(*Global_1248240)[iParam0]->f_595 = iVar0;
		return bVar1;
	}
	(*Global_1248240)[iParam0]->f_594 = _0x149a2751ab66ac02((*Global_1248240)[iParam0]->f_595);
	(*Global_1248240)[iParam0]->f_596 = _0x4be6c13a45cca8ec((*Global_1248240)[iParam0]->f_595);
	return false;
}

void func_1817(int iParam0)
{
	iVar0 = func_1338(Global_1237665[iParam0], (*Global_1237665)[iParam0]->f_6);
	if (iVar0 == -1)
	{
		return;
	}
	func_2921(iVar0);
}

void func_1818(int iParam0)
{
	if (!func_143(iParam0))
	{
		return;
	}
	if ((*Global_1248240)[iParam0]->f_559 == 1717788883)
	{
		return;
	}
	if (func_53(iParam0, 64, 255))
	{
		return;
	}
	Var0 = { (*Global_1248240)[iParam0]->f_584 };
	if (func_225(Var0))
	{
		return;
	}
	if (func_226(Var0))
	{
		return;
	}
	func_2922(Var0);
	if (!func_330((*Global_1248240)[iParam0]->f_559, 0))
	{
		iVar2 = func_1777(Var0);
		if (iVar2 != -1)
		{
			func_2923(iVar2);
		}
	}
}

void func_1819(int iParam0)
{
	if ((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_88() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_558(Global_1893587->f_2);
	Global_1900688->f_1 = 3;
	Global_1900688->f_2 = 0;
	Global_1900688->f_7 = iVar0;
	Global_1900688->f_8 = iParam0;
	Global_1900688->f_9 = iVar1;
	if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
	{
		func_560(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
	}
	else if (Global_1900688->f_11 != -1)
	{
		func_560(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
	}
}

bool func_1820(int iParam0)
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

void func_1821(int iParam0)
{
	if (func_29(iParam0, 134217728))
	{
		return;
	}
	iVar0 = (*Global_1237665)[iParam0]->f_5;
	if (!func_542(iVar0))
	{
		return;
	}
	switch ((*Global_1248240)[iParam0]->f_559)
	{
		case 1884341302:
			bVar1 = true;
			iVar2 = 3;
			break;
		case -260420884:
		case 850213441:
		case 1918154385:
			bVar1 = true;
			iVar2 = 3;
			break;
	}
	func_2924(iVar0, iVar2, bVar1);
	func_1069(iParam0, 134217728);
}

void func_1822()
{
	Var0 = { func_478(-1136577243) };
	stat_id_set_int(&Var0, Global_1296859->f_21, true);
}

void func_1823(int iParam0, bool bParam1)
{
	if (!func_510(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_251(&((*Global_1238240)[network_player_id_to_int()]->f_302), iParam0);
	}
}

bool func_1824(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_216(&Var1, iParam0) && func_1452(&Var1, iParam1))
	{
		func_1261(Var1, 572283279, &iVar0, 0);
	}
	return iVar0;
}

void func_1825(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_106(Param0))
	{
		return;
	}
	if (!func_226(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1360(Param0);
	}
	if (!func_106(func_564(0)))
	{
		func_563(Param0, 3);
		func_565(bParam3);
		func_566(!bParam4);
		func_2925(Param0, -1);
		if (bParam2 && !func_284(2))
		{
			func_1268(&Global_0, 1024);
		}
		func_568(1);
	}
	else
	{
		func_2925(Param0, -1);
		func_563(Param0, 4);
		func_2926(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_570(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_2229(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

int func_1826(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_571(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_464(Param0);
	Var0.f_3 = iParam3;
	func_2927(&Var0, bParam2, iParam4);
	return 1;
}

bool func_1827(int iParam0)
{
	return Local_4089.f_2890.f_34 == iParam0;
}

bool func_1828(int iParam0)
{
	if (func_195(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

void func_1829()
{
	if (Local_4089.f_2890.f_43 != -1)
	{
		Local_4089.f_2890.f_43 = -1;
		func_163(&(Local_4089.f_2890.f_42));
	}
}

bool func_1830()
{
	if (!func_1182(network_player_id_to_int()) && !func_519(49))
	{
		return false;
	}
	if (_is_ped_carrying(Global_34))
	{
		return false;
	}
	fVar0 = vdist(Global_35, (*Global_1237665)[Local_4089.f_3391]->f_18);
	if (fVar0 < 300f)
	{
		func_236(55, 1, 0);
		return false;
	}
	if (fVar0 > 1600f)
	{
		return false;
	}
	return true;
}

bool func_1831()
{
	if (func_1763() == -1)
	{
		return false;
	}
	if (!func_519(51))
	{
		return false;
	}
	if (_is_ped_carrying(Global_34))
	{
		return false;
	}
	fVar0 = func_1070(Global_35, func_736(Global_1237665[Local_4089.f_3391], (*Global_1237665)[Local_4089.f_3391]->f_6));
	fVar1 = func_1070(func_736(Global_1237665[Local_4089.f_3391], (*Global_1237665)[Local_4089.f_3391]->f_6), func_1764(func_1763()));
	if ((fVar0 < fVar1 && fVar0 < 2000f) || func_1765(player_id(), 1))
	{
		return false;
	}
	return true;
}

void func_1832()
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = 1105014447;
	Var0.f_19 = 1105014447;
	Var0.f_23 = 300;
	Var0.f_31.f_8 = 1105014447;
	Var0.f_31.f_11 = 1105014447;
	Var0.f_31.f_12 = 8000;
	Var0.f_31.f_13 = 1511356879;
	Var0.f_31.f_15 = 1433015236;
	Var0.f_31.f_21 = 1;
	Var0.f_25 = Local_4089.f_3391;
	Var0.f_24 = 23;
	func_2928(&Var0);
	Local_4089.f_4146 = func_2929(Var0);
}

bool func_1833()
{
	switch (Local_4089.f_3393)
	{
		case 1884341302:
			break;
		case -1784925006:
			if (Local_13.f_1 >= 2)
			{
				return true;
			}
			break;
	}
	return false;
}

float func_1834()
{
	if (func_1070(-3138.96f, -2534.56f, 71.638f, (*Global_1237665)[Local_4089.f_3391]->f_18) < 100f)
	{
		return 4f;
	}
	return 1f;
}

int func_1835(var uParam0, float fParam1)
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

void func_1836(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_2598(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_67(uParam0->f_17.f_6))
		{
			return;
		}
		if (vmag(uParam0->f_17) < 1f)
		{
			uParam0->f_17 = Global_1901947->f_50.f_1;
			uParam0->f_17.f_1 = Global_1901947->f_50.f_1;
			uParam0->f_17.f_2 = Global_1901947->f_50.f_1;
		}
	}
	if (func_67(uParam1->f_6))
	{
		return;
	}
	if (uParam0->f_16)
	{
		if (vmag(uParam0->f_6) < 1f)
		{
			return;
		}
		if (vmag(uParam0->f_17) < vmag(uParam0->f_6))
		{
			uParam0->f_16 = 0;
		}
	}
	func_99(0);
	func_99(3);
	Global_1102219->f_3919 = iParam2;
	Global_1102219->f_3920 = bParam3;
	Global_1102219->f_3921 = iParam4;
	func_2080(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = { *uParam0 };
	func_2081(&(Global_1102219->f_3888));
	Global_1102219->f_3888 = { *uParam1 };
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_2082(Global_1102219->f_3849, 36);
	func_2083(Global_1102219->f_3888, 36);
}

bool func_1837()
{
	return (((func_2930() || func_2931()) || func_148(32, -1)) || func_2932(1));
}

bool func_1838(var uParam0)
{
	return func_218(uParam0, 35788119, 0, -801742902, 0, 0, 0, 0, 0);
}

int func_1839(var uParam0, int iParam1, int iParam2)
{
	return func_1445(uParam0, 2062165358, -1256206172, -108566596, iParam1, func_1700(iParam2), 0, 0, 0, 0);
}

bool func_1840(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = player_id();
	}
	return func_166(iParam0, 64);
}

int func_1841(int iParam0)
{
	if (func_937(8, iParam0, 255) || func_1377(8, iParam0))
	{
		return 1;
	}
	if (((Local_13.f_2 != 0 && Local_13.f_2 != 2) && Local_13.f_2 != 9) && !func_2933(Local_4089.f_3027[iParam0]->f_9))
	{
		return 1;
	}
	if (Local_4089.f_3027[iParam0]->f_10 == 1642086148 && func_1377(2, iParam0))
	{
		return 0;
	}
	if (Local_13.f_1 <= 0)
	{
		return 0;
	}
	if ((Local_4089.f_3027[iParam0]->f_8 != -1 && Local_4089.f_3027[iParam0]->f_8 != func_182(255)) && Local_13.f_1 != 6)
	{
		return 0;
	}
	return func_2934(iParam0);
}

void func_1842(int iParam0)
{
	if (!func_937(8, iParam0, 255))
	{
		func_909(8, iParam0);
	}
}

bool func_1843(int iParam0, bool bParam1)
{
	if (Local_13.f_1 == 0 && !func_2935(Local_4089.f_3027[iParam0]->f_9))
	{
		return false;
	}
	if (!bParam1 && func_1377(2, iParam0))
	{
		return true;
	}
	if (Local_4089.f_3027[iParam0]->f_6 != -1 && !func_1377(2, Local_4089.f_3027[iParam0]->f_6))
	{
		return false;
	}
	if (func_937(16, iParam0, 255) && !func_120(16))
	{
		return false;
	}
	if (func_937(32, iParam0, 255) && func_120(16))
	{
		return false;
	}
	if (func_937(64, iParam0, 255) && Local_13.f_1 != 2)
	{
		return false;
	}
	if (func_937(128, iParam0, 255) && func_120(8192))
	{
		return false;
	}
	if (func_937(256, iParam0, 255) && func_370(255, 0, 0, 0, 0) != -1)
	{
		return false;
	}
	if (func_937(512, iParam0, 255) && (*Global_1237665)[Local_4089.f_3391]->f_16 != player_id())
	{
		return false;
	}
	if (func_937(1024, iParam0, 255) && !is_bit_set(Local_13.f_365, Local_4089.f_3027[iParam0]->f_3))
	{
		return false;
	}
	if (Local_4089.f_3027[iParam0]->f_8 != -1 && Local_4089.f_3027[iParam0]->f_8 != func_182(255))
	{
		return false;
	}
	return func_2936(iParam0);
}

void func_1844(int iParam0)
{
	if (func_937(2, iParam0, 255))
	{
		return;
	}
	func_2937(iParam0);
	func_909(2, iParam0);
}

void func_1845(int iParam0)
{
	if (!func_937(2, iParam0, 255))
	{
		return;
	}
	func_1847(2, iParam0);
}

void func_1846(int iParam0)
{
	if (!func_937(2, iParam0, 255))
	{
		return;
	}
	if (func_937(4, iParam0, 255))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (!func_2938(iVar0, iParam0))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	if (!bVar1)
	{
		func_909(4, iParam0);
	}
}

void func_1847(int iParam0, int iParam1)
{
	if (func_937(iParam0, iParam1, 255))
	{
		func_511(Local_920[participant_id_to_int()]->f_80[iParam1], iParam0);
	}
}

void func_1848(int iParam0, int iParam1)
{
	if (Local_4089.f_2890.f_1 == iParam0)
	{
		if (!func_2939(iParam1))
		{
			return;
		}
		Local_4089.f_2890.f_1 = 0;
		Local_4089.f_2890.f_2 = -1;
		Local_4089.f_2890.f_53 = 0;
	}
}

bool func_1849(int iParam0, bool bParam1)
{
	if (Local_4089.f_3138[iParam0]->f_4 != -1)
	{
		iVar0 = 2;
		if (bParam1)
		{
			iVar0 |= 8;
		}
		if (func_1377(iVar0, Local_4089.f_3138[iParam0]->f_4))
		{
			return true;
		}
	}
	return false;
}

bool func_1850(int iParam0)
{
	if (Local_4089.f_3138[iParam0]->f_3 != -1 && func_1377(2, Local_4089.f_3138[iParam0]->f_3))
	{
		return true;
	}
	return false;
}

void func_1851(int iParam0)
{
	if (Local_4089.f_3965 != iParam0)
	{
		if (func_1744(4, iParam0) && func_1744(8, iParam0))
		{
			func_2940(-1217230960, -1, 1);
		}
		Local_4089.f_3965 = iParam0;
		iVar0 = func_2941(&(Local_4089.f_3355), iParam0);
		if (iVar0 != 0)
		{
			switch (iVar0)
			{
				case 1509005751:
					func_1026(47, 0, 0, 0);
					break;
			}
		}
	}
}

bool func_1852(bool bParam0, int iParam1)
{
	return (Local_13.f_82[bParam0]->f_11 != 255 && Local_13.f_82[bParam0]->f_11 == func_829(iParam1));
}

bool func_1853(bool bParam0, int iParam1)
{
	return ((Local_13.f_82[bParam0]->f_1 == 886638433 && Local_409.f_1[Local_13.f_82[bParam0]->f_5]->f_15 != 255) && Local_409.f_1[Local_13.f_82[bParam0]->f_5]->f_15 == func_829(iParam1));
}

void func_1854(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	*iParam2 = -1;
	*iParam3 = 0;
	if (!func_311(bParam1))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_2942(bParam1, iParam0))
	{
		*iParam2 = &Local_4089.f_1622[bParam1]->f_2[iParam0]->f_1[1];
		*iParam3 = 1;
	}
	else if (func_2943(bParam1, iParam0))
	{
		*iParam2 = &Local_4089.f_1622[bParam1]->f_2[iParam0]->f_1[2];
		*iParam3 = 2;
	}
	else
	{
		*iParam2 = &Local_4089.f_1622[bParam1]->f_2[iParam0]->f_1[0];
		*iParam3 = 0;
	}
}

bool func_1855(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = participant_id_to_int();
	}
	return func_80(Local_920[iParam1]->f_48, iParam0);
}

void func_1856(int iParam0)
{
	if (Local_4089.f_1500 != iParam0)
	{
		Local_4089.f_1500 = iParam0;
	}
}

void func_1857(int iParam0)
{
	Global_1138828->f_2[iParam0]->f_9 = get_frame_count();
}

void func_1858()
{
	if (!func_1855(2, -1))
	{
		iVar0 = func_1385(0, 1015970717, 1731164987, 0, 0, 0, 0);
		Var1 = { func_2944(&(Local_4089.f_3355), iVar0) };
		Local_920[participant_id_to_int()]->f_48 = 0;
		Local_4089.f_1500.f_7 = iVar0;
		Local_4089.f_1500.f_4 = Var1.f_3;
		Local_4089.f_1500.f_5 = Var1.f_2;
		Local_4089.f_1500.f_1 = Var1;
		Local_4089.f_1500.f_2 = Var1.f_1;
		Local_4089.f_1500.f_3 = func_2945(func_34(Local_4089.f_3392), Local_4089.f_3972);
		if (func_2946(&(Local_4089.f_3355), iVar0))
		{
			func_2947(262144);
		}
		if (func_218(&(Local_4089.f_3355), 1434887695, 0, -1417610999, 0, 0, 0, 0, 0))
		{
			func_2947(1048576);
		}
		if (func_218(&(Local_4089.f_3355), -1699127071, 0, -1417610999, 0, 0, 0, 0, 0))
		{
			func_2947(2097152);
		}
		if (!func_2948())
		{
			func_2949(Local_4089.f_1500.f_3, 16);
		}
		func_2947(2);
	}
	else if (Local_409.f_460 > 1)
	{
		func_1856(Local_409.f_460);
	}
}

void func_1859()
{
	if (Local_409.f_460 > 3)
	{
		func_1856(Local_409.f_460);
	}
}

void func_1860()
{
	if (!does_blip_exist(Local_4089.f_1500.f_6))
	{
		iVar0 = func_654(Local_4089.f_1500.f_3);
		if (does_entity_exist(iVar0))
		{
			Local_4089.f_1500.f_6 = get_blip_from_entity(iVar0);
		}
	}
	if (Local_409.f_460 > 4)
	{
		func_1856(5);
	}
}

void func_1861()
{
	if (!func_1855(64, -1) && func_2950(Local_4089.f_1500.f_3, network_player_id_to_int()))
	{
		func_2947(64);
	}
	func_2951();
	func_2952();
	func_2953();
	if (func_2060(4194304))
	{
		func_2954(Local_4089.f_1500.f_3);
	}
	switch (Local_4089.f_1500.f_4)
	{
		case -726090311:
			func_2955();
			break;
		case 964169170:
			func_2955();
			break;
		case 699984925:
			func_2955();
			break;
	}
}

void func_1862()
{
	if (!func_1855(256, -1))
	{
		func_2947(256);
	}
}

void func_1863()
{
	if (!func_1855(128, -1))
	{
		func_2956(Local_4089.f_1500.f_3, 0);
		_set_blip_flash_style(Local_4089.f_1500.f_6, -1186550032);
		_0xedd964b7984ac291(Local_4089.f_1500.f_6, -399496385);
		func_2957(2);
		func_1856(0);
		func_2947(128);
	}
}

bool func_1864()
{
	return (Global_1940258->f_38 == 1652431022 && is_first_person_aim_cam_active());
}

void func_1865(float fParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!does_entity_exist(Local_4089.f_6[iVar0]->f_60))
		{
		}
		else if (!func_2225(Local_409.f_1[iVar0]->f_1))
		{
		}
		else if (func_626(4194304, iVar0, -1))
		{
		}
		else if (&Local_4089.f_6[iVar0] == 5)
		{
		}
		else if (_0x0e6846476906c9dd(player_id(), Local_4089.f_6[iVar0]->f_60))
		{
			_0x907b16b3834c69e2(Local_4089.f_6[iVar0]->f_60, fParam0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!does_entity_exist(Local_4089.f_1087[iVar0]->f_11))
		{
		}
		else if (Local_4089.f_1087[iVar0]->f_1 != 218600141)
		{
		}
		else if (func_653(131072, iVar0, -1))
		{
		}
		else if (&Local_4089.f_1087[iVar0] == 5)
		{
		}
		else if (_0x0e6846476906c9dd(player_id(), Local_4089.f_6[iVar0]->f_60))
		{
			_0x907b16b3834c69e2(Local_4089.f_1087[iVar0]->f_11, fParam0);
		}
		iVar0++;
	}
}

bool func_1866(int iParam0)
{
	switch (iParam0)
	{
		case -2104935250:
		case -184918272:
		case -69017634:
		case 763672902:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1867(int iParam0)
{
	switch (Local_409.f_1[iParam0]->f_1)
	{
		case -1305506499:
		case 1915478987:
			return true;
		default:
			break;
	}
	return false;
}

void func_1868(var uParam0)
{
	if (uParam0->f_1 == 0)
	{
		return;
	}
	iVar0 = (Global_1296859->f_21 - uParam0->f_1) * 1000;
	if (iVar0 < 4000)
	{
		return;
	}
	else if (iVar0 > 15000 && func_80(uParam0->f_2, 4))
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
		return;
	}
	else if (!func_80(uParam0->f_2, 4))
	{
		if (!does_entity_exist(Global_34))
		{
			return;
		}
		fVar1 = func_2324(Global_34, *uParam0, 1, 1);
		bVar2 = ((does_entity_exist(*uParam0) && _0x083d497d57b7400f(*uParam0)) && !is_entity_visible(*uParam0));
		if (fVar1 < 300f && (func_80(uParam0->f_2, 1) || func_80(uParam0->f_2, 2)))
		{
			if (!bVar2)
			{
				func_2958(*uParam0);
			}
		}
		if (!bVar2 && fVar1 < 300f)
		{
			func_2959(*uParam0);
		}
		if (func_80(uParam0->f_2, 1))
		{
			func_2960(2, *uParam0);
		}
		if (func_80(uParam0->f_2, 1) && does_entity_exist(*uParam0))
		{
			Var3 = { func_2890(1368284188, -1530824760) };
			if (_0x5420d398a42917fc(*uParam0, &Var3))
			{
				func_317(Var3, 1);
			}
		}
		func_105(&(uParam0->f_2), 4);
	}
}

void func_1869(int iParam0)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!func_56(Local_4089.f_6[iParam0]->f_68) && !func_56(Local_4089.f_6[iParam0]->f_69))
	{
		return;
	}
	if (Local_409.f_1[iParam0]->f_1 == 1787431880)
	{
		if (func_1888(Local_4089.f_6[iParam0]->f_68, 1))
		{
			if (func_2961(Global_34, 1, 0, 0) != -1569615261)
			{
				_hide_ped_weapons(Global_34, 2, false);
			}
			else
			{
				func_2305(Global_34, "SILENT_SPARE_VICTIM", 1017772929, Local_4089.f_6[iParam0]->f_60, 1, 0, 0, 1);
			}
			func_2962(-79139194);
			func_301(8192, iParam0);
		}
	}
	else if (func_2225(Local_409.f_1[iParam0]->f_1))
	{
		if (func_1886(Local_4089.f_6[iParam0]->f_68, 1))
		{
			func_301(8192, iParam0);
		}
	}
	else if (func_2963(iParam0) && (!func_120(8192) || !func_2964()))
	{
		if (func_1888(Local_4089.f_6[iParam0]->f_68, 1))
		{
			func_2965(iParam0);
		}
		if (func_1888(Local_4089.f_6[iParam0]->f_69, 1))
		{
			func_2965(iParam0);
		}
	}
	else if (func_1359(Local_409.f_1[iParam0]->f_1, 1, 1, 0))
	{
		if (Local_409.f_1[iParam0]->f_3 == 0 && func_1886(Local_4089.f_6[iParam0]->f_68, 1))
		{
			if (func_1411(16777216, iParam0))
			{
				func_1415(16777216, iParam0);
			}
			else
			{
				func_301(16777216, iParam0);
			}
		}
	}
	else if (func_1389(Local_409.f_1[iParam0]->f_1))
	{
		if (func_1888(Local_4089.f_6[iParam0]->f_68, 1))
		{
			func_301(524288, iParam0);
		}
	}
	else if (Local_409.f_1[iParam0]->f_1 == 294392114)
	{
		iVar0 = Local_920[participant_id_to_int()]->f_93;
		if (((func_56(Local_4089.f_6[iParam0]->f_68) && func_311(iVar0)) && Local_13.f_82[iVar0]->f_1 == -1918493640) && ((Local_4089.f_1087[Local_13.f_82[iVar0]->f_5]->f_1 == -1064014193 || Local_4089.f_1087[Local_13.f_82[iVar0]->f_5]->f_1 == 1475547288) || Local_4089.f_1087[Local_13.f_82[iVar0]->f_5]->f_1 == 110988383))
		{
			if (network_does_network_id_exist(Local_409.f_317[Local_13.f_82[iVar0]->f_5]->f_5))
			{
				iVar1 = Local_4089.f_1087[Local_13.f_82[iVar0]->f_5]->f_11;
				if (!is_entity_dead(iVar1) && _get_carrier_as_human(iVar1) == Global_34)
				{
					if (func_2966(Local_4089.f_6[iParam0]->f_68, 1))
					{
						_0x18ff3110cf47115d(iVar1, 4, 0);
					}
					else
					{
						_0x18ff3110cf47115d(iVar1, 4, 1);
					}
				}
			}
		}
		if (func_1888(Local_4089.f_6[iParam0]->f_68, 1))
		{
			func_301(8192, iParam0);
		}
	}
	else
	{
		if (func_1888(Local_4089.f_6[iParam0]->f_68, 1))
		{
			func_301(8192, iParam0);
		}
		if (func_1888(Local_4089.f_6[iParam0]->f_69, 1))
		{
			func_301(16384, iParam0);
		}
	}
}

void func_1870(int iParam0)
{
	if (func_331(Local_4089.f_3391, 16) || func_120(16))
	{
		return;
	}
	if (!func_58(32, iParam0))
	{
		return;
	}
	iVar0 = Local_4089.f_6[iParam0]->f_60;
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (!is_ped_shooting(iVar0))
	{
		return;
	}
	if (func_650(Local_4089.f_4092) && func_725(Local_4089.f_4092) <= 1000)
	{
		return;
	}
	fVar1 = vdist(Global_35, get_entity_coords(iVar0, false, false));
	if (fVar1 > 150f)
	{
		return;
	}
	func_656(&(Local_4089.f_4092));
	func_2967(1066055203, iVar0, 1, -1);
}

void func_1871(int iParam0, int iParam1, float fParam2)
{
	iVar0 = Local_4089.f_6[iParam0]->f_60;
	if (!func_1354(iParam0, 1))
	{
		return;
	}
	if (&Local_409.f_1[iParam0] == 22)
	{
		return;
	}
	if (func_626(32, iParam0, -1))
	{
		return;
	}
	if (func_58(3, iParam0))
	{
		if (is_bit_set(iParam1, Local_409.f_1[iParam0]->f_11))
		{
			return;
		}
		else
		{
			set_bit(&iParam1, Local_409.f_1[iParam0]->f_11);
		}
	}
	func_2664(&(Local_4089.f_3287.f_2), (Local_4089.f_3287.f_1 * fParam2));
	if (is_ped_in_any_vehicle(iVar0, false))
	{
		iVar1 = get_vehicle_ped_is_in(iVar0, false);
	}
	if ((func_1997(&(Local_4089.f_6[iParam0]->f_32)) && func_1999(&(Local_4089.f_6[iParam0]->f_32)) >= 500) && !func_718(iVar0, 0))
	{
		bVar2 = true;
	}
	if (func_2968(iParam0) && func_1095(0, 0, 0))
	{
		bVar2 = true;
	}
	func_2969(iParam0);
	bVar3 = true;
	bVar4 = false;
	if (!bVar2)
	{
		if (Local_409.f_1[iParam0]->f_1 == -1081499674)
		{
			if (&Local_409.f_1[iParam0] == 8)
			{
				bVar3 = false;
			}
		}
		if (bVar3)
		{
			bVar4 = func_2970(iVar0, 0, &(Local_4089.f_3287.f_2), &(Local_4089.f_3287.f_2.f_32), 1, 0);
		}
		else
		{
			bVar5 = ((is_ped_performing_melee_action(Global_34, 8, 0) || get_ped_config_flag(iVar0, 9, true)) || is_ped_being_stealth_killed(iVar0));
			if (!bVar5)
			{
				if (has_entity_been_damaged_by_entity(iVar0, Global_34, 1, 1) || decor_exist_on(iVar0, "DamagedByPlayer"))
				{
					if (!get_ped_config_flag(iVar0, 11, true))
					{
						bVar4 = true;
					}
				}
			}
		}
	}
	if ((bVar2 || bVar4) || (iVar1 != 0 && iVar1 == get_vehicle_ped_is_in(Global_34, false)))
	{
		if (Local_409.f_1[iParam0]->f_1 == -1081499674 && Local_4089.f_3287.f_2.f_32 == 8)
		{
			func_2971(&(Local_4089.f_3287.f_2), &(Local_4089.f_3287.f_2.f_32));
			return;
		}
		if (!bVar2 && func_1481(iParam0, 886638433, -52651766, 0, 0, 0, 0))
		{
			if (!func_1997(&(Local_4089.f_6[iParam0]->f_32)))
			{
				func_1998(&(Local_4089.f_6[iParam0]->f_32), 0);
			}
			return;
		}
		if (Local_4089.f_3287.f_2.f_32 != 0)
		{
			func_2971(&(Local_4089.f_3287.f_2), &(Local_4089.f_3287.f_2.f_32));
		}
		func_301(32, iParam0);
		func_1355(1, 0);
		func_20(524288, 1, 0);
		if (&Local_409.f_1[iParam0] == 22 && &Local_4089.f_6[iParam0] != 22)
		{
			func_2972(iParam0);
		}
	}
}

void func_1872(int iParam0)
{
	if (Local_409.f_1[iParam0]->f_1 != -126469426)
	{
		return;
	}
	if (func_182(255) != -1)
	{
		return;
	}
	if (Local_13.f_1 == 6)
	{
		return;
	}
	iVar0 = Local_4089.f_6[iParam0]->f_60;
	_0xc3abcfbc7d74afa5(iVar0, 12, 1);
	_0xc3abcfbc7d74afa5(iVar0, 14, 1);
	_0xc3abcfbc7d74afa5(iVar0, 5, 1);
	_0xc3abcfbc7d74afa5(iVar0, 2, 1);
}

void func_1873(int iParam0)
{
	if (Local_409.f_1[iParam0]->f_4 != 448485414)
	{
		return;
	}
	iVar0 = Local_4089.f_6[iParam0]->f_60;
	if (!_0x0ccfe72b43c9cf96(iVar0) && !get_ped_config_flag(iVar0, 11, true))
	{
		return;
	}
	_0xc3abcfbc7d74afa5(iVar0, 19, 1);
}

void func_1874()
{
	if ((func_28(146) || func_28(135)) || func_28(147))
	{
		_disable_first_person_cam_this_frame_2();
		_disable_first_person_cam_this_frame();
	}
}

void func_1875(int iParam0, int iParam1)
{
	iVar0 = func_310(iParam1, iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	switch (iParam1)
	{
		case 886638433:
			iVar1 = 1048576;
			break;
		case -1918493640:
			iVar1 = 16777216;
			break;
		case -584819812:
			iVar1 = 131072;
			break;
		default:
			return;
	}
	if (func_2973(iParam0, iParam1, iVar1, 0))
	{
		if (func_2974(iParam0, iParam1, iVar1, 0))
		{
			return;
		}
		if (func_719(iVar0))
		{
			func_2975(iParam0, iParam1, 1);
		}
		if (!_0x75df9e73f2f005fd(iVar0))
		{
			func_2976(iParam0, iParam1, iVar1, 0);
		}
	}
	else
	{
		if (!func_2974(iParam0, iParam1, iVar1, 0))
		{
			return;
		}
		if (func_719(iVar0))
		{
			func_2975(iParam0, iParam1, 0);
		}
		if (_0x75df9e73f2f005fd(iVar0))
		{
			func_2977(iParam0, iParam1, iVar1, 0);
		}
	}
}

void func_1876(int iParam0, int iParam1)
{
	if (&Local_4089.f_6[iParam1] != iParam0)
	{
		func_1415(128, iParam1);
		Local_4089.f_6[iParam1] = iParam0;
	}
}

void func_1877(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 886638433:
			func_2978(10, iParam1);
			break;
		case -916820003:
			break;
	}
}

void func_1878(int iParam0)
{
	if (!func_58(0, iParam0))
	{
		func_2979(iParam0);
		iVar0 = Local_409.f_1[iParam0]->f_5;
		if (func_1479(func_1357(iParam0)))
		{
			if (iVar0 != -1)
			{
				iVar2 = func_1385(iVar0, 886638433, 1731164987, 0, 0, 0, 0);
				iVar1 = func_1474(&(Local_4089.f_3355), iVar2);
			}
		}
		else
		{
			iVar1 = func_1385(iParam0, 886638433, 1731164987, 0, 0, 0, 0);
		}
		Var3 = { func_1477(&(Local_4089.f_3355), iVar1, Local_4089.f_3391) };
		func_2980(iParam0);
		Local_4089.f_6[iParam0]->f_49 = iVar1;
		Local_4089.f_6[iParam0]->f_1 = Var3.f_4;
		Local_4089.f_6[iParam0]->f_2 = Var3.f_5;
		Local_4089.f_6[iParam0]->f_24 = Var3.f_1;
		Local_4089.f_6[iParam0]->f_25 = Var3.f_2;
		Local_4089.f_6[iParam0]->f_3 = func_896(func_1385(iParam0, 886638433, -1131741768, 0, 0, 0, 0), -1);
		Local_4089.f_6[iParam0]->f_4 = func_896(func_1385(iParam0, 886638433, 1419403449, 0, 0, 0, 0), -1);
		Local_4089.f_6[iParam0]->f_6 = func_896(func_1385(iParam0, 886638433, 620696774, 0, 0, 0, 0), -1);
		Local_4089.f_6[iParam0]->f_35 = func_2981(iParam0, 886638433, 108859470, 0f, 0, 0, 0);
		Local_4089.f_6[iParam0]->f_5 = func_896(func_1385(iParam0, 886638433, 1244051302, 0, 0, 0, 0), -1);
		Local_4089.f_6[iParam0]->f_36 = func_2981(iParam0, 886638433, -392690813, 150f, 0, 0, 0);
		Local_4089.f_6[iParam0]->f_7 = func_1385(iParam0, 886638433, -1215268629, 0, 0, 0, 0);
		Local_4089.f_6[iParam0]->f_8 = func_1385(iParam0, 886638433, 1788673683, 0, 0, 0, 0);
		Local_4089.f_6[iParam0]->f_61 = { func_2982(iParam0, 886638433, -671196934, 0, 0, 0) };
		Local_4089.f_6[iParam0]->f_38 = func_2981(iParam0, 886638433, 1344536904, 0, 0, 0, 0);
		Local_4089.f_6[iParam0]->f_37 = func_2981(iParam0, 886638433, -276063638, -1f, 0, 0, 0);
		Local_4089.f_6[iParam0]->f_70 = func_1385(iParam0, 886638433, -2111408705, 0, 0, 0, 0);
		Local_4089.f_6[iParam0]->f_15 = func_1385(iParam0, 886638433, 250627920, 0, 0, 0, 0);
		Local_4089.f_6[iParam0]->f_16 = func_1480(iParam0, 886638433, -2137902654, -1, 0, 0, 0);
		Local_4089.f_6[iParam0]->f_9 = func_1385(iParam0, 886638433, 786834322, 0, 0, 0, 0);
		Local_4089.f_6[iParam0]->f_11 = func_1385(iParam0, 886638433, 880636905, 0, 0, 0, 0);
		Local_4089.f_6[iParam0]->f_12 = func_1480(iParam0, 886638433, -1532785326, -1, 0, 0, 0);
		if (func_1468())
		{
			Local_4089.f_6[iParam0]->f_59 = func_1480(iParam0, 886638433, 86422132, -1, 0, 0, 0);
		}
		Local_4089.f_6[iParam0]->f_51 = func_2983(iParam0, &Var3);
		if (Local_4089.f_6[iParam0]->f_70 == 0)
		{
			Local_4089.f_6[iParam0]->f_70 = func_2984(&(Local_4089.f_3355), iVar1);
		}
		iVar9 = -1;
		if (func_28(175) && func_1341(Local_4089.f_6[iParam0]->f_2, 1))
		{
			iVar9 = 0;
		}
		Local_4089.f_6[iParam0]->f_50 = func_1480(iParam0, 886638433, -571977951, iVar9, 0, 0, 0);
		iVar10 = func_2362(iParam0, 886638433, -1027663921);
		if (iVar10 > 0)
		{
			func_2978(57, iParam0);
		}
		if (Local_4089.f_6[iParam0]->f_37 == -1f)
		{
			Local_4089.f_6[iParam0]->f_37 = func_2985(iParam0);
		}
		if (Local_4089.f_6[iParam0]->f_5 == -1 && func_1359(Local_409.f_1[iParam0]->f_1, 1, 1, 0))
		{
			Local_4089.f_6[iParam0]->f_5 = func_2986(-1758418643);
		}
		else if ((Local_4089.f_6[iParam0]->f_5 == -1 && Local_409.f_1[iParam0]->f_1 == -126469426) && func_796(2, iParam0))
		{
			Local_4089.f_6[iParam0]->f_5 = func_2986(-1758418643);
		}
		if (func_2225(Local_409.f_1[iParam0]->f_1))
		{
			set_ped_config_flag(Local_4089.f_6[iParam0]->f_60, 48, true);
			set_entity_load_collision_flag(Local_4089.f_6[iParam0]->f_60, 1);
		}
		if (Local_409.f_1[iParam0]->f_1 == 468586057)
		{
			func_236(113, 1, 0);
		}
		if (!func_1481(iParam0, 886638433, -128086039, 1, 0, 0, 0))
		{
			func_2978(23, iParam0);
		}
		if (func_1481(iParam0, 886638433, -264715282, 0, 0, 0, 0))
		{
			func_2978(32, iParam0);
		}
		if (func_1479(func_1357(iParam0)) && iVar0 != -1)
		{
			Local_4089.f_6[iParam0]->f_2 = 21;
		}
		iVar11 = func_1385(iParam0, 886638433, 1635841872, 0, 0, 0, 0);
		iVar12 = func_1480(iParam0, 886638433, 116062788, -1, 0, 0, 0);
		if (iVar11 != 0 && iVar12 != -1)
		{
			func_2978(35, iParam0);
		}
		if (Local_4089.f_6[iParam0]->f_12 != -1)
		{
			func_944(Local_4089.f_6[iParam0]->f_11, Local_4089.f_6[iParam0]->f_12, -1, &(Local_4089.f_6[iParam0]->f_13), &(Local_4089.f_6[iParam0]->f_14));
		}
		if (Local_4089.f_6[iParam0]->f_16 != -1)
		{
			func_944(Local_4089.f_6[iParam0]->f_15, Local_4089.f_6[iParam0]->f_16, -1, &(Local_4089.f_6[iParam0]->f_17), &(Local_4089.f_6[iParam0]->f_18));
		}
		if (func_1357(iParam0) == 448485414)
		{
			if (func_1481(iParam0, 886638433, -1765648646, 0, 0, 0, 0))
			{
				func_2978(31, iParam0);
			}
		}
		if (func_1481(iParam0, 886638433, 363506554, 0, 0, 0, 0))
		{
			func_2978(39, iParam0);
		}
		if (func_1481(iParam0, 886638433, -876645969, 0, 0, 0, 0))
		{
			func_2978(38, iParam0);
		}
		if (func_1481(iParam0, 886638433, 1434887695, 0, 0, 0, 0))
		{
			func_2978(7, iParam0);
		}
		if (func_1481(iParam0, 886638433, -1510507197, 0, 0, 0, 0))
		{
			func_1362(1024, iParam0);
		}
		if (func_1481(iParam0, 886638433, 1421917527, 0, 0, 0, 0))
		{
			func_2978(61, iParam0);
		}
		if (func_1481(iParam0, 886638433, -964721427, 0, 0, 0, 0))
		{
			func_1362(2048, iParam0);
		}
		if (func_1481(iParam0, 886638433, 951926217, 0, 0, 0, 0))
		{
			func_1362(4194304, iParam0);
		}
		if (func_1481(iParam0, 886638433, 1422011512, 0, 0, 0, 0))
		{
			func_1362(4096, iParam0);
		}
		if (func_1481(iParam0, 886638433, 763328152, 0, 0, 0, 0))
		{
			func_2978(41, iParam0);
		}
		if (func_1481(iParam0, 886638433, -108519103, 0, 0, 0, 0))
		{
			func_2978(42, iParam0);
		}
		if (func_1481(iParam0, 886638433, -2042435267, 0, 0, 0, 0))
		{
			func_2978(44, iParam0);
		}
		if (func_1481(iParam0, 886638433, -1049824074, 0, 0, 0, 0))
		{
			func_2978(43, iParam0);
		}
		if (func_1481(iParam0, 886638433, 838256423, 0, 0, 0, 0))
		{
			func_2978(40, iParam0);
		}
		if (func_1481(iParam0, 886638433, -2072178913, 0, 0, 0, 0))
		{
			func_2978(29, iParam0);
		}
		if (func_1481(iParam0, 886638433, 740893539, 0, 0, 0, 0))
		{
			func_2978(26, iParam0);
		}
		if (func_1481(iParam0, 886638433, 207896517, 0, 0, 0, 0))
		{
			func_2978(25, iParam0);
		}
		if (func_1481(iParam0, 886638433, 491333121, 0, 0, 0, 0))
		{
			func_2978(28, iParam0);
		}
		if (func_1481(iParam0, 886638433, -457765729, 0, 0, 0, 0))
		{
			func_2978(47, iParam0);
		}
		if (func_1481(iParam0, 886638433, 1024132629, 0, 0, 0, 0))
		{
			func_2978(46, iParam0);
		}
		if (func_1481(iParam0, 886638433, -1346491938, 1, 0, 0, 0))
		{
			func_2978(48, iParam0);
		}
		if (func_1481(iParam0, 886638433, -1910506034, 0, 0, 0, 0))
		{
			func_2978(49, iParam0);
		}
		if (func_1481(iParam0, 886638433, 463720897, 0, 0, 0, 0))
		{
			func_2978(51, iParam0);
		}
		if (func_1481(iParam0, 886638433, 1906079293, 0, 0, 0, 0))
		{
			func_2978(50, iParam0);
		}
		if (func_1481(iParam0, 886638433, -1555379851, 1, 0, 0, 0))
		{
			func_2978(53, iParam0);
		}
		if (func_1385(iParam0, 886638433, -2061423469, 0, 0, 0, 0) != 0 || func_2362(iParam0, 886638433, -1027663921) > 0)
		{
			func_2978(55, iParam0);
		}
		if (func_1481(iParam0, 886638433, -28152540, 0, 0, 0, 0))
		{
			func_2978(30, iParam0);
		}
		if (func_1385(iParam0, 886638433, 1522620879, 0, 0, 0, 0) != 0)
		{
			func_2978(56, iParam0);
		}
		if (func_1481(iParam0, 886638433, -1769920009, 0, 0, 0, 0))
		{
			func_2978(58, iParam0);
		}
		if (func_1481(iParam0, 886638433, -1387056876, 0, 0, 0, 0))
		{
			func_2978(60, iParam0);
		}
		if (func_1481(iParam0, 886638433, 1790513278, 0, 0, 0, 0))
		{
			func_2978(62, iParam0);
		}
		if (func_1481(iParam0, 886638433, 1385378153, 0, 0, 0, 0))
		{
			func_2978(63, iParam0);
		}
		if (func_1481(iParam0, 886638433, -1984056278, 0, 0, 0, 0))
		{
			func_2978(64, iParam0);
		}
		if (func_1481(iParam0, 886638433, -747610147, 0, 0, 0, 0))
		{
			func_2978(65, iParam0);
		}
		if (func_1481(iParam0, 886638433, -1346728005, 0, 0, 0, 0))
		{
			func_2978(66, iParam0);
		}
		if (func_1481(iParam0, 886638433, -855236747, 0, 0, 0, 0))
		{
			func_2978(67, iParam0);
		}
		if (func_1481(iParam0, 886638433, 2136786732, 0, 0, 0, 0))
		{
			func_2978(68, iParam0);
		}
		if (func_1481(iParam0, 886638433, 1491748470, 0, 0, 0, 0))
		{
			iVar14 = 0;
			while (iVar14 <= 14)
			{
				if (func_58(52, iVar14))
				{
					bVar13 = true;
				}
				else
				{
					iVar14++;
				}
			}
			if (bVar13)
			{
			}
			else
			{
				func_2978(52, iParam0);
			}
		}
		iVar15 = func_1386(func_1385(iParam0, 886638433, -158647914, -1, 0, 0, 0));
		if (iVar15 == 0)
		{
			func_2978(21, iParam0);
		}
		else if (iVar15 == 1)
		{
			func_2978(22, iParam0);
		}
		iVar16 = func_2987(iParam0);
		if (iVar16 != 0)
		{
			func_2978(33, iParam0);
		}
		if (iVar16 == 775913483)
		{
			func_2978(36, iParam0);
		}
		if (iVar16 == 493038497)
		{
			func_2978(37, iParam0);
		}
		if (func_2988(iParam0) != 0)
		{
			func_2978(34, iParam0);
		}
		if (func_1481(iParam0, 886638433, 1167262415, 0, 0, 0, 0))
		{
			func_944(Local_4089.f_6[iParam0]->f_11, Local_4089.f_6[iParam0]->f_12, -1, &iVar17, &uVar18);
			if (iVar17 != 1015970717 || !func_1502(0))
			{
			}
			else
			{
				func_2978(27, iParam0);
			}
		}
		if (func_2989(Local_409.f_1[iParam0]->f_1))
		{
			if (Local_4089.f_4094 == -1)
			{
				Local_4089.f_4094 = iParam0;
			}
		}
		func_2990(iParam0);
		func_2991(iParam0);
		func_2992(iParam0);
		func_2978(0, iParam0);
	}
	else if (&Local_409.f_1[iParam0] > 1)
	{
		func_1876(2, iParam0);
	}
}

void func_1879(int iParam0)
{
	if (!func_58(1, iParam0))
	{
		bVar0 = true;
		if (!func_1695(Local_4089.f_6[iParam0]->f_51))
		{
			bVar0 = false;
		}
		if (func_1357(iParam0) == 448485414 && Local_4089.f_1622[Local_409.f_1[iParam0]->f_5]->f_31 < 2)
		{
			bVar0 = false;
		}
		if (func_58(55, iParam0))
		{
			Var1 = { func_59(iParam0) };
			request_waypoint_recording(&Var1);
			if (!get_is_waypoint_recording_loaded(&Var1))
			{
				bVar0 = false;
			}
		}
		if (func_58(56, iParam0))
		{
			Var1 = { func_245(iParam0, 886638433, 1522620879, 0, 0, 0) };
			request_waypoint_recording(&Var1);
			if (!get_is_waypoint_recording_loaded(&Var1))
			{
				bVar0 = false;
			}
		}
		if (!func_2993(iParam0, 886638433))
		{
			bVar0 = false;
		}
		if (!func_2994(iParam0))
		{
			bVar0 = false;
		}
		if (func_1866(Local_409.f_1[iParam0]->f_1))
		{
			request_clip_set("CLIPSET@MECH_MELEE@UNARMED@_MALE@_AMBIENT@_HEALTHY@_STREAMED");
			if (!has_clip_set_loaded("CLIPSET@MECH_MELEE@UNARMED@_MALE@_AMBIENT@_HEALTHY@_STREAMED"))
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			func_2978(1, iParam0);
		}
	}
	else if (&Local_409.f_1[iParam0] == 3)
	{
		func_1876(3, iParam0);
	}
	else if (&Local_409.f_1[iParam0] > 2)
	{
		func_1876(4, iParam0);
	}
}

void func_1880(int iParam0)
{
	if (&Local_409.f_1[iParam0] > 3)
	{
		func_1876(4, iParam0);
	}
}

void func_1881(int iParam0)
{
	if (func_54(iParam0) && !func_1411(2, iParam0))
	{
		if (!func_58(6, iParam0))
		{
			if (func_2995((*Global_1237665)[Local_4089.f_3391]->f_5, &uVar0, 1))
			{
				func_2996(uVar0, iParam0);
				func_2978(6, iParam0);
			}
		}
		return;
	}
	if (&Local_409.f_1[iParam0] == 4 && network_does_network_id_exist(Local_409.f_1[iParam0]->f_14))
	{
		if (network_has_control_of_network_id(Local_409.f_1[iParam0]->f_14))
		{
			_0x7182edda1ee7db5a(Local_409.f_1[iParam0]->f_14);
		}
	}
	if (func_1411(2, iParam0) && !func_626(2, iParam0, -1))
	{
		if (network_does_network_id_exist(Local_409.f_1[iParam0]->f_14))
		{
			Local_4089.f_6[iParam0]->f_60 = net_to_ped(Local_409.f_1[iParam0]->f_14);
			iVar1 = Local_4089.f_6[iParam0]->f_60;
			if (!does_entity_exist(iVar1))
			{
				return;
			}
			if (!func_2997(iParam0))
			{
				return;
			}
			func_2998(iParam0, iVar1);
			func_2999(iVar1, Local_409.f_1[iParam0]->f_4, Local_409.f_1[iParam0]->f_5, Local_409.f_1[iParam0]->f_6, 1);
			bVar2 = Local_409.f_1[iParam0]->f_1 == -126469426;
			if (func_3000(iParam0, 886638433))
			{
				func_3001(iParam0, 886638433);
				func_3002(iParam0, iVar1, 886638433, -1, 1, 0);
			}
			else if (func_1481(iParam0, 886638433, 1347395680, 0, 0, 0, 0))
			{
				bVar3 = func_1481(iParam0, 886638433, -695812384, 0, 0, 0, 0);
				_0x1ad922ab5038def3(iVar1);
				_0x543dfe14be720027(player_id(), iVar1, bVar3);
				if (bVar3 && is_ped_on_mount(iVar1))
				{
					iVar4 = get_mount(iVar1);
					if (does_entity_exist(iVar4))
					{
						_0x1ad922ab5038def3(iVar4);
						_0x543dfe14be720027(player_id(), iVar4, true);
					}
				}
			}
			iVar5 = func_1385(iParam0, 886638433, -687220838, 0, 0, 0, 0);
			if (iVar5 != 0)
			{
				_0x8c03cd6b5e0e85e8(iVar1, iVar5);
			}
			if (bVar2)
			{
				if (!_0x0e6846476906c9dd(player_id(), iVar1))
				{
					_0x1ad922ab5038def3(iVar1);
					_0x543dfe14be720027(player_id(), iVar1, false);
				}
				if (func_3003())
				{
					_0xbc02b3d151d3859f(iVar1, 1);
					_0x62ed71e133b6c9f1(iVar1, 255, 0, 0);
				}
			}
			if (func_1481(iParam0, 886638433, 954028338, 0, 0, 0, 0))
			{
				iVar6 = func_1385(iParam0, 886638433, -895932016, 0, 0, 0, 0);
				if (func_182(255) == 0)
				{
					uVar7 = _0x8e84119a23c16623(get_entity_model(iVar1), iVar6, 0);
					if (!_0x354f689c4ffaab37(uVar7))
					{
						_0x7c32191d9fb2bdea(_0x8e84119a23c16623(get_entity_model(iVar1), iVar6, 0));
					}
					func_2978(24, iParam0);
				}
			}
			switch (func_1357(iParam0))
			{
				case 448485414:
					_0x18ff3110cf47115d(iVar1, 10, 0);
					if (Local_409.f_1[iParam0]->f_1 == -126469426)
					{
						_0x6569f31a01b4c097(iVar1, 4, 0);
						_0x18ff3110cf47115d(iVar1, 31, 1);
						_0x18ff3110cf47115d(iVar1, 19, 1);
					}
					if (func_836(Local_409.f_1[iParam0]->f_1))
					{
						func_3004(iVar1, &(Local_4089.f_3961));
					}
					if (!is_damage_tracker_active_on_network_id(Local_409.f_1[iParam0]->f_14))
					{
						activate_damage_tracker_on_network_id(Local_409.f_1[iParam0]->f_14, true);
					}
					break;
				case -1276434456:
				case -428150648:
					if ((func_3005(Local_409.f_1[iParam0]->f_1) || func_3006(Local_409.f_1[iParam0]->f_1)) || func_796(8192, iParam0))
					{
						func_3007(886638433, iParam0);
					}
					break;
				case 401658241:
					if ((func_2968(iParam0) && func_104(32, 255)) && func_3008(get_player_index()) == 0)
					{
						if (func_2053(get_player_index(), 0, 0, 0))
						{
							_0xbd944a3d36e992de();
							report_police_spotted_player(get_player_index());
						}
						set_ped_config_flag(iVar1, 188, true);
						_0x009cf9a29972c298(454742288);
						func_1094(-683250308, 1);
						_0xdea083c16bb91345();
					}
					break;
			}
			if (func_602(Local_409.f_1[iParam0]->f_1))
			{
				set_ped_config_flag(iVar1, 557, true);
				set_ped_config_flag(iVar1, 521, true);
				_0xae6004120c18df97(iVar1, 0, false);
			}
			iVar8 = func_2125(Local_4089.f_3391, Local_4089.f_6[iParam0]->f_2);
			if (iVar8 == 0)
			{
			}
			if (func_796(1048576, iParam0) && (func_182(255) == 0 || func_449(Local_4089.f_3393)))
			{
				func_3009(iVar1, 0);
			}
			if (!func_1481(iParam0, 886638433, -699907606, 1, 0, 0, 0))
			{
				_0x6569f31a01b4c097(iVar1, 0, 0);
				_0x6569f31a01b4c097(iVar1, 1, 0);
			}
			if (!func_1481(iParam0, 886638433, 1150102991, 1, 0, 0, 0))
			{
				_0x18ff3110cf47115d(iVar1, 7, 0);
				set_ragdoll_blocking_flags(iVar1, 28672);
			}
			if (func_1481(iParam0, 886638433, -305163338, 0, 0, 0, 0))
			{
				_0x6569f31a01b4c097(iVar1, 15, 1);
			}
			if (func_2225(Local_409.f_1[iParam0]->f_1))
			{
				Local_4089.f_2968.f_4++;
			}
			if (func_836(Local_409.f_1[iParam0]->f_1))
			{
				func_3010(iVar1);
			}
			if (Local_409.f_1[iParam0]->f_1 == -1322096809)
			{
				set_entity_visible(iVar1, false);
			}
			if (Local_409.f_1[iParam0]->f_1 == 294392114)
			{
				func_3011(iParam0, Local_409.f_1[iParam0]->f_18, Local_409.f_1[iParam0]->f_17);
			}
			if (&Local_409.f_1[iParam0] == 4)
			{
				if (func_242(Local_409.f_1[iParam0]->f_14))
				{
					func_1465(iVar1, 1);
					if (func_1481(iParam0, 886638433, 108793726, 0, 0, 0, 0))
					{
						func_1465(iVar1, 2048);
					}
					if (!func_1479(func_1357(iParam0)))
					{
						func_3012(iParam0);
						func_3013(iParam0);
						func_3014(iVar1, iParam0, Local_4089.f_6[iParam0]->f_70);
						func_3015(iParam0);
						func_3016(iParam0);
						func_3017(iParam0);
						func_3018(iParam0);
						func_3019(iParam0);
						func_3020(iParam0);
						if (func_1481(iParam0, 886638433, 1746667266, 0, 0, 0, 0))
						{
							func_3021(iVar1, 1);
						}
						if (iVar8 != 623901053)
						{
							set_ped_relationship_group_hash(iVar1, iVar8);
						}
						if (func_28(94))
						{
							set_ped_combat_attributes(iVar1, 112, true);
						}
						if ((Local_4089.f_6[iParam0]->f_11 != 0 && Local_4089.f_6[iParam0]->f_12 >= 0) && func_1738(Local_4089.f_6[iParam0]->f_11, Local_4089.f_6[iParam0]->f_12, -1) == 1015970717)
						{
							_0x8b1e8e35a6e814ea(iVar1, 1075632931, -1f);
						}
					}
				}
			}
			func_301(2, iParam0);
		}
	}
	else if (&Local_409.f_1[iParam0] > 4)
	{
		func_1876(5, iParam0);
	}
}

void func_1882(int iParam0)
{
	if (!network_does_network_id_exist(Local_409.f_1[iParam0]->f_14))
	{
		return;
	}
	iVar0 = Local_4089.f_6[iParam0]->f_60;
	if (!does_entity_exist(iVar0) || (!func_3022(iParam0) && is_ped_dead_or_dying(iVar0, true)))
	{
		return;
	}
	if (network_has_control_of_network_id(Local_409.f_1[iParam0]->f_14))
	{
		if (get_ped_relationship_group_hash(iVar0) != func_2125(Local_4089.f_3391, Local_4089.f_6[iParam0]->f_2))
		{
			if (func_3023(iVar0, 1))
			{
				clear_ped_tasks(iVar0, 1, 0);
			}
			set_ped_relationship_group_hash(iVar0, func_2125(Local_4089.f_3391, Local_4089.f_6[iParam0]->f_2));
		}
	}
	if (!func_1479(func_1357(iParam0)))
	{
		func_3024(iParam0);
		func_3025(iParam0, iVar0);
		func_3026(iParam0, iVar0);
		func_3027(iParam0, iVar0);
		func_2998(iParam0, iVar0);
		func_3028(iParam0);
		func_3029(iParam0);
		func_3030(iParam0);
		func_3031(iParam0);
		func_3032(iParam0);
		func_3033(iParam0);
		func_3034(iParam0, 0);
		func_3035(iParam0, iVar0);
		func_3036(iParam0);
		func_3037(iParam0);
		func_3038(iParam0);
	}
	if ((&Local_4089.f_6[iParam0] == 22 || &Local_4089.f_6[iParam0] == 23) && func_58(52, iParam0))
	{
		func_3039(iParam0);
	}
	func_2972(iParam0);
}

void func_1883(int iParam0)
{
	if (!network_does_network_id_exist(Local_409.f_1[iParam0]->f_14))
	{
		return;
	}
	iVar0 = Local_4089.f_6[iParam0]->f_60;
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (func_67(Local_409.f_1[iParam0]->f_18))
	{
		return;
	}
	if (network_has_control_of_network_id(Local_409.f_1[iParam0]->f_14))
	{
		func_3040(iVar0);
		if (func_2079(iVar0))
		{
			func_3041(iParam0, 0);
			iVar1 = get_mount(iVar0);
			set_entity_invincible(iVar1, false);
		}
		set_entity_invincible(iVar0, false);
		if (!func_2079(iVar0))
		{
			_set_entity_coords_and_heading(iVar0, Local_409.f_1[iParam0]->f_18, Local_409.f_1[iParam0]->f_17, false, false, true);
		}
	}
}

void func_1884(int iParam0)
{
	if (!func_626(64, iParam0, -1))
	{
		if (network_does_network_id_exist(Local_409.f_1[iParam0]->f_14))
		{
			iVar0 = Local_4089.f_6[iParam0]->f_60;
			if (Local_409.f_1[iParam0]->f_1 == 227388558 && func_719(iVar0))
			{
				_0x9ebd34958ab6f824(iVar0);
			}
			if (func_629(iVar0) && func_1357(iParam0) == 448485414)
			{
				if (!get_ped_reset_flag(Global_34, 236))
				{
					if (Local_409.f_1[iParam0]->f_1 == 1461000558 && (func_832(8192, Local_409.f_1[iParam0]->f_5) || func_3042(iVar0)))
					{
						func_206(&(Local_4089.f_6[iParam0]->f_26), Local_4089.f_6[iParam0]->f_23, 0);
						if (func_242(Local_409.f_1[iParam0]->f_14))
						{
							func_3043(iParam0, 1, 0, 1);
							set_ped_can_ragdoll(iVar0, false);
							func_758(iVar0, 1, 0, 0);
						}
					}
					if (func_2127(Global_34, iVar0, 0))
					{
						task_dismount_animal(Global_34, 0, 0, 0, 0, 0);
					}
					set_ped_config_flag(iVar0, 136, true);
				}
			}
			if (Local_4089.f_6[iParam0]->f_8 == 2032048458)
			{
				func_3044(iParam0);
			}
		}
		func_301(64, iParam0);
	}
}

void func_1885(int iParam0)
{
	func_206(&(Local_4089.f_6[iParam0]->f_26), Local_4089.f_6[iParam0]->f_23, 0);
	if (func_56(Local_4089.f_6[iParam0]->f_68))
	{
		func_57(&(Local_4089.f_6[iParam0]->f_68), 1, 1);
	}
	if (func_56(Local_4089.f_6[iParam0]->f_69))
	{
		func_57(&(Local_4089.f_6[iParam0]->f_69), 1, 1);
	}
	if (func_836(Local_409.f_1[iParam0]->f_1))
	{
		if (network_does_network_id_exist(Local_409.f_1[iParam0]->f_14) && network_has_control_of_network_id(Local_409.f_1[iParam0]->f_14))
		{
			if (!_0xe4c11f104620ddce(Local_4089.f_6[iParam0]->f_60, 28))
			{
				_0x6569f31a01b4c097(Local_4089.f_6[iParam0]->f_60, 28, 1);
			}
			if (!_0xe4c11f104620ddce(Local_4089.f_6[iParam0]->f_60, 14))
			{
				_0x6569f31a01b4c097(Local_4089.f_6[iParam0]->f_60, 14, 1);
			}
		}
	}
	if (!func_626(4, iParam0, -1))
	{
		if (!func_3045(iParam0))
		{
			if (func_2433(iParam0))
			{
				func_1533(13, iParam0);
			}
			func_3046(iParam0);
			func_3047(iParam0, Local_4089.f_6[iParam0]->f_60);
			if (!func_3048(iParam0))
			{
				func_3049(iParam0);
				func_3050(iParam0);
				func_1533(0, iParam0);
				func_1876(0, iParam0);
				func_301(4, iParam0);
				func_3051();
			}
		}
	}
}

bool func_1886(int iParam0, bool bParam1)
{
	if (bParam1 && !func_56(iParam0))
	{
		return false;
	}
	iVar0 = func_243(iParam0);
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

void func_1887()
{
	if ((func_28(146) || func_28(135)) || func_28(147))
	{
		_disable_first_person_cam_this_frame_2();
		_disable_first_person_cam_this_frame();
	}
}

bool func_1888(int iParam0, bool bParam1)
{
	if (bParam1 && !func_56(iParam0))
	{
		return false;
	}
	iVar0 = func_243(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_1889(int iParam0)
{
	if (func_3052())
	{
		return;
	}
	func_328(64, iParam0);
	func_57(&(Local_4089.f_1087[iParam0]->f_12), 1, 1);
	func_1892(9, iParam0);
}

void func_1890(int iParam0)
{
	iVar0 = Local_4089.f_1087[iParam0]->f_11;
	switch (&Local_4089.f_1087[iParam0])
	{
		case 9:
			_set_ped_crouch_movement(Global_34, false, 0, false);
			set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
			set_current_ped_weapon(Global_34, -1569615261, false, 1, false, false);
			open_sequence_task(&iVar2);
			task_swap_weapon(0, 1, 0, 0, 0);
			task_follow_nav_mesh_to_coord(0, get_entity_coords(iVar0, false, false), 1f, 20000, 0.4f, 0, 40000f);
			task_turn_ped_to_face_entity(0, iVar0, 0, 3f, 0.25f, -1082130432);
			task_play_anim(0, func_3053(13), "enter_lf", 4f, -2f, -1, 24, 0f, false, 0, false, 0, false);
			close_sequence_task(iVar2);
			task_perform_sequence(Global_34, iVar2);
			clear_sequence_task(&iVar2);
			func_656(&(Local_4089.f_1087[iParam0]->f_10));
			func_1892(10, iParam0);
			break;
		case 10:
			if (func_494(Global_34, 242628503))
			{
				return;
			}
			fVar1 = _get_entity_anim_current_time(Global_34, func_3053(13), "enter_lf");
			if ((is_entity_playing_anim(Global_34, func_3053(13), "enter_lf", 1) && fVar1 < 0.9f) && func_725(Local_4089.f_1087[iParam0]->f_10) < 5000)
			{
				return;
			}
			task_play_anim(Global_34, func_3053(14), "lh_satchel", 4f, -4f, -1, 24, 0f, false, 0, false, 0, false);
			if (Local_4089.f_1087[iParam0]->f_1 == 1903241516)
			{
				func_2918(-105969105, &uVar3, 0, 255, 0, 0);
			}
			else if (Local_4089.f_1087[iParam0]->f_1 == -298209514)
			{
				func_2918(358818294, &uVar3, 0, 255, 0, 0);
			}
			func_3054(&uVar3, 0);
			func_3055(64, iParam0);
			func_1892(6, iParam0);
			break;
	}
}

void func_1891(var uParam0)
{
	if (func_56(*uParam0))
	{
		func_57(uParam0, 1, 1);
	}
}

void func_1892(int iParam0, int iParam1)
{
	if (&Local_4089.f_1087[iParam1] != iParam0)
	{
		Local_4089.f_1087[iParam1] = iParam0;
	}
}

void func_1893(int iParam0)
{
	if ((((func_1668(-1918493640, iParam0, 0) && func_652(4096, iParam0)) && !func_652(8192, iParam0)) && func_242(Local_409.f_317[iParam0]->f_5)) && has_collision_loaded_around_entity(Local_4089.f_1087[iParam0]->f_11))
	{
		_0x9587913b9e772d29(Local_4089.f_1087[iParam0]->f_11, 1);
		func_328(8192, iParam0);
	}
}

bool func_1894(int iParam0, int iParam1)
{
	if (&Local_4089.f_1087[iParam1] == 9 || &Local_4089.f_1087[iParam1] == 10)
	{
		if (iParam0 >= 5 && iParam0 <= 10)
		{
			return false;
		}
	}
	return true;
}

void func_1895(int iParam0)
{
	if (!func_653(2, iParam0, -1))
	{
		iVar0 = func_1385(iParam0, -1918493640, 1731164987, 0, 0, 0, 0);
		vVar1 = { func_3056(&(Local_4089.f_3355), iVar0) };
		Local_920[participant_id_to_int()]->f_31[iParam0] = 0;
		Local_4089.f_1087[iParam0]->f_9 = iVar0;
		Local_4089.f_1087[iParam0]->f_1 = vVar1.z;
		Local_4089.f_1087[iParam0]->f_2 = vVar1.x;
		Local_4089.f_1087[iParam0]->f_5 = func_3057(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_9);
		if (Local_409.f_317[iParam0]->f_3 != -1)
		{
			Local_4089.f_1087[iParam0]->f_20 = { func_2982(iParam0, -1918493640, 1125306326, 1727197243, Local_409.f_317[iParam0]->f_3, 0) };
		}
		else
		{
			Local_4089.f_1087[iParam0]->f_20 = { func_2982(iParam0, -1918493640, 1125306326, 0, 0, 0) };
		}
		Local_4089.f_1087[iParam0]->f_7 = func_1385(iParam0, -1918493640, -492144197, 0, 0, 0, 0);
		if (Local_4089.f_1087[iParam0]->f_7 == 0)
		{
			Local_4089.f_1087[iParam0]->f_7 = vVar1.y;
		}
		iVar4 = func_1385(iParam0, -1918493640, 880636905, 0, 0, 0, 0);
		iVar5 = func_1480(iParam0, -1918493640, -1532785326, -1, 0, 0, 0);
		func_944(iVar4, iVar5, -1, &(Local_4089.f_1087[iParam0]->f_27), &(Local_4089.f_1087[iParam0]->f_28));
		Local_4089.f_1087[iParam0]->f_24 = func_1480(iParam0, -1918493640, -2137902654, -1, 0, 0, 0);
		Local_4089.f_1087[iParam0]->f_10 = func_1480(iParam0, -1918493640, 216179116, 0, 0, 0, 0);
		Local_4089.f_1087[iParam0]->f_23 = func_1385(iParam0, -1918493640, 250627920, 0, 0, 0, 0);
		Local_4089.f_1087[iParam0]->f_19 = func_896(func_1385(iParam0, -1918493640, -1131741768, 0, 0, 0, 0), -1);
		func_944(Local_4089.f_1087[iParam0]->f_23, Local_4089.f_1087[iParam0]->f_24, -1, &(Local_4089.f_1087[iParam0]->f_25), &(Local_4089.f_1087[iParam0]->f_26));
		iVar6 = func_1385(iParam0, -1918493640, -1495932040, 0, 0, 0, 0);
		iVar7 = func_1480(iParam0, -1918493640, 1970372975, -1, 0, 0, 0);
		func_944(iVar6, iVar7, -1, &uVar8, &(Local_4089.f_1087[iParam0]->f_30));
		Local_4089.f_1087[iParam0]->f_29 = uVar8;
		if (Local_4089.f_1087[iParam0]->f_1 == -1687054743 || Local_4089.f_1087[iParam0]->f_1 == 1328791445)
		{
			Local_4089.f_1087[iParam0]->f_29 = 0;
			Local_4089.f_1087[iParam0]->f_30 = 0;
		}
		if (func_1481(iParam0, -1918493640, -451432169, 0, 0, 0, 0))
		{
			func_328(32768, iParam0);
		}
		if ((Local_409.f_317[iParam0]->f_1 == 448485414 && Local_4089.f_1087[iParam0]->f_1 == -1703696123) && Local_4089.f_1087[iParam0]->f_25 == -1091027173)
		{
			Local_4089.f_1508[Local_4089.f_1087[iParam0]->f_26]->f_6 = Local_409.f_317[iParam0]->f_2;
		}
		if (func_732(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_9))
		{
			func_3058(1024, iParam0);
		}
		else if (func_3059(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_9))
		{
			func_3058(32, iParam0);
		}
		else if (func_3060(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_9))
		{
			Local_4089.f_1087[iParam0]->f_8 = Local_4089.f_1087[iParam0]->f_7;
			func_3058(32, iParam0);
			func_3058(64, iParam0);
		}
		if (func_1481(iParam0, -1918493640, 1147132407, 1, 0, 0, 0))
		{
			func_3058(4096, iParam0);
		}
		if (func_1481(iParam0, -1918493640, 1434887695, 0, 0, 0, 0))
		{
			func_3058(32768, iParam0);
		}
		func_328(2, iParam0);
	}
	else if (&Local_409.f_317[iParam0] > 1)
	{
		func_1892(2, iParam0);
	}
}

void func_1896(int iParam0)
{
	if (!func_653(4, iParam0, -1))
	{
		bVar0 = true;
		if (func_652(262144, iParam0))
		{
			uVar1 = Local_4089.f_1087[iParam0]->f_7;
			vVar2 = { Local_4089.f_1087[iParam0]->f_20 };
			if (!func_653(524288, iParam0, -1))
			{
				Local_4089.f_1087[iParam0]->f_4 = _0x6f3068258a499e52(uVar1, vVar2, 15);
				func_328(524288, iParam0);
			}
			if (!_0x1ff441d7954f8709(Local_4089.f_1087[iParam0]->f_4))
			{
				bVar0 = false;
			}
		}
		if (func_61(32, iParam0))
		{
			if (func_61(64, iParam0) && !func_61(128, iParam0))
			{
				iVar7 = func_3061(iParam0, &bVar6);
				if (iVar7 != 0 || bVar6)
				{
					Local_4089.f_1087[iParam0]->f_7 = func_3062(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_8, iVar7);
					func_3058(128, iParam0);
				}
				else
				{
					bVar5 = true;
				}
			}
			if ((bVar5 || !_request_propset_2(Local_4089.f_1087[iParam0]->f_7)) || !_has_propset_loaded(Local_4089.f_1087[iParam0]->f_7))
			{
				bVar0 = false;
			}
		}
		else if (!func_1695(Local_4089.f_1087[iParam0]->f_7))
		{
			bVar0 = false;
		}
		if (!func_2993(iParam0, -1918493640))
		{
			bVar0 = false;
		}
		switch (Local_4089.f_1087[iParam0]->f_1)
		{
			case 110988383:
				request_anim_dict(func_3053(11));
				if (!has_anim_dict_loaded(func_3053(11)))
				{
					bVar0 = false;
				}
				break;
			case -1542718054:
				request_anim_dict(func_3053(12));
				if (!has_anim_dict_loaded(func_3053(12)))
				{
					bVar0 = false;
				}
				break;
			case -298209514:
			case 1903241516:
				request_anim_dict(func_3053(13));
				request_anim_dict(func_3053(14));
				if (!has_anim_dict_loaded(func_3053(13)))
				{
					bVar0 = false;
				}
				if (!has_anim_dict_loaded(func_3053(14)))
				{
					bVar0 = false;
				}
				break;
			case 218600141:
				request_anim_dict(func_3053(26));
				if (!has_anim_dict_loaded(func_3053(26)))
				{
					bVar0 = false;
				}
				break;
		}
		if (bVar0)
		{
			func_328(4, iParam0);
		}
	}
	else if (&Local_409.f_317[iParam0] > 2)
	{
		if (func_61(1024, iParam0))
		{
			vVar8 = { Local_4089.f_1087[iParam0]->f_20 };
			vVar8 = { vVar8 + func_3063(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_9) };
			Local_4089.f_1087[iParam0]->f_11 = create_object(Local_4089.f_1087[iParam0]->f_7, vVar8, false, false, false, false, true);
			vVar11 = { func_2982(iParam0, -1918493640, 1798497919, 0, 0, 0) };
			set_entity_rotation(Local_4089.f_1087[iParam0]->f_11, vVar11, 2, true);
			func_3064(iParam0, Local_4089.f_1087[iParam0]->f_11, vVar8);
			if (network_does_network_id_exist(func_2868(-1918493640, iParam0)))
			{
				set_entity_visible_in_cutscene(Local_4089.f_1087[iParam0]->f_11, 1, 1, 256);
			}
			func_745(vVar8);
		}
		func_1892(4, iParam0);
	}
}

void func_1897(int iParam0)
{
	if (&Local_409.f_317[iParam0] > 4)
	{
		bVar8 = (func_652(262144, iParam0) && func_653(524288, iParam0, -1));
		bVar9 = (bVar8 && does_entity_exist(_0x4735e2a4bb83d9da(Local_4089.f_1087[iParam0]->f_4)));
		bVar10 = func_61(1024, iParam0);
		bVar11 = (bVar10 && does_entity_exist(Local_4089.f_1087[iParam0]->f_11));
		if ((bVar9 || bVar11) || network_does_network_id_exist(Local_409.f_317[iParam0]->f_5))
		{
			if (bVar8)
			{
				Local_4089.f_1087[iParam0]->f_11 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(Local_4089.f_1087[iParam0]->f_4));
			}
			else if (!bVar10)
			{
				Local_4089.f_1087[iParam0]->f_11 = net_to_obj(Local_409.f_317[iParam0]->f_5);
			}
			iVar12 = Local_4089.f_1087[iParam0]->f_11;
			func_2999(iVar12, Local_409.f_317[iParam0]->f_1, Local_409.f_317[iParam0]->f_2, -1, 1);
			if (_0x0ccfe72b43c9cf96(iVar12))
			{
				Var0 = { func_3065(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_9) };
				if (!is_string_null_or_empty(&Var0))
				{
					_0xf63fa29d4a9aca86(iVar12, &Var0);
				}
			}
			if (func_652(4096, iParam0))
			{
				set_entity_load_collision_flag(iVar12, 1);
			}
			if (func_752(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_9))
			{
				_0xebdc12861d079aba(iVar12, 1);
			}
			if (_0x58de624fa7fb0e7f(iVar12) > 0)
			{
				fVar13 = func_3066(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_9, 0.75f);
				fVar14 = func_3067(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_9, 1f);
				_0xceab54f4632c6ef6(iVar12, fVar13);
				_0xffb99ffd17f65889(iVar12, fVar14);
			}
			if ((Local_4089.f_1087[iParam0]->f_1 == -152130529 || Local_4089.f_1087[iParam0]->f_1 == 1321175366) || Local_4089.f_1087[iParam0]->f_1 == 1740160671)
			{
				_network_set_vehicle_wheels_destructible(iVar12, 1);
			}
			if (func_3000(iParam0, -1918493640))
			{
				func_3002(iParam0, iVar12, -1918493640, -1, 1, 0);
			}
			switch (Local_4089.f_1087[iParam0]->f_1)
			{
				case -152130529:
				case 1740160671:
					if (func_307(255) == -1029285341)
					{
						_0xf6e88489b4e6ebe5(iVar12, 1);
						if (!_0x0e6846476906c9dd(player_id(), iVar12))
						{
							_0x543dfe14be720027(player_id(), iVar12, false);
							_0x6ecfc621a168424c(iVar12, iVar12, 0, 0f);
						}
					}
					break;
				case 218600141:
					func_758(iVar12, 1, 1, 0);
					func_2975(iParam0, -1918493640, 1);
					if (_0x58de624fa7fb0e7f(iVar12) > 0)
					{
						_0xffb99ffd17f65889(iVar12, 0f);
					}
					iVar15 = _get_entity_proofs(iVar12);
					if (!func_80(iVar15, 4))
					{
						iVar15 |= 4;
					}
					if (!func_80(iVar15, 8))
					{
						iVar15 |= 8;
					}
					set_entity_proofs(iVar12, iVar15, false);
					Local_4089.f_2968.f_4++;
					break;
			}
			if (bVar9 || func_242(Local_409.f_317[iParam0]->f_5))
			{
				func_1465(iVar12, 1);
				if (func_1481(iParam0, -1918493640, 108793726, 0, 0, 0, 0))
				{
					func_1465(iVar12, 2048);
				}
				if (((Local_4089.f_1087[iParam0]->f_1 == -1064014193 || Local_4089.f_1087[iParam0]->f_1 == 1968800194) || Local_4089.f_1087[iParam0]->f_1 == 1475547288) || Local_4089.f_1087[iParam0]->f_1 == 110988383)
				{
					Var0 = { func_3065(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_9) };
					if (!is_string_null_or_empty(&Var0))
					{
						_0xf63fa29d4a9aca86(iVar12, &Var0);
					}
					_0x18ff3110cf47115d(iVar12, 23, 1);
					set_entity_load_collision_flag(iVar12, 1);
					_0x18ff3110cf47115d(iVar12, 30, 1);
					if (func_61(4096, iParam0))
					{
						_0x18ff3110cf47115d(iVar12, 21, 1);
						_0xbd94cecfb2d65119(iVar12, 1, 1f, 1f, 1f, 1);
					}
					if (Local_4089.f_1087[iParam0]->f_1 == -1064014193 || Local_4089.f_1087[iParam0]->f_1 == 1475547288)
					{
						set_entity_invincible(iVar12, true);
					}
					_0xb7017da4d498269f(iVar12, 0);
				}
				else if (Local_4089.f_1087[iParam0]->f_1 == -1703696123)
				{
					func_758(iVar12, 1, 0, 0);
					set_entity_invincible(iVar12, true);
					set_entity_can_be_damaged(iVar12, false);
					if (!func_652(128, iParam0))
					{
						set_entity_collision(iVar12, false, false);
					}
				}
				else if ((Local_4089.f_1087[iParam0]->f_1 == -152130529 || Local_4089.f_1087[iParam0]->f_1 == 1321175366) || Local_4089.f_1087[iParam0]->f_1 == 1740160671)
				{
					_0xeb6f1a9b5510a5d2(iVar12, false);
					if (Local_4089.f_1087[iParam0]->f_27 == -584819812)
					{
						set_entity_proofs(iVar12, 112, true);
					}
					else
					{
						set_entity_proofs(iVar12, 120, true);
					}
				}
				else if ((Local_4089.f_1087[iParam0]->f_1 == 294392114 || Local_4089.f_1087[iParam0]->f_1 == 1903241516) || Local_4089.f_1087[iParam0]->f_1 == -298209514)
				{
					func_758(iVar12, 1, 1, 0);
					set_entity_can_be_damaged(iVar12, false);
					set_entity_invincible(iVar12, true);
					set_entity_proofs(iVar12, 159, false);
				}
				iVar16 = func_759(&(Local_4089.f_3355), Local_4089.f_1087[iParam0]->f_9, 500);
				set_entity_max_health(iVar12, iVar16);
				_set_entity_health(iVar12, iVar16, 0);
			}
			if (func_639(iParam0) == 448485414)
			{
				if (!bVar8 && !is_damage_tracker_active_on_network_id(Local_409.f_317[iParam0]->f_5))
				{
					activate_damage_tracker_on_network_id(Local_409.f_317[iParam0]->f_5, true);
				}
				if (Local_4089.f_1087[iParam0]->f_1 == -1703696123)
				{
					func_236(99, 1, 0);
				}
			}
			else if (func_652(2048, iParam0))
			{
				func_3007(-1918493640, iParam0);
			}
		}
		func_1892(5, iParam0);
	}
}

void func_1898(int iParam0)
{
	func_3068(iParam0);
	func_3069(iParam0);
	func_3070(iParam0);
	func_3071(iParam0);
	switch (Local_4089.f_1087[iParam0]->f_1)
	{
		case -1064014193:
			func_3072(iParam0);
			break;
		case 1475547288:
			func_3072(iParam0);
			break;
		case 110988383:
			func_3072(iParam0);
			break;
		case 1968800194:
			func_3073(iParam0);
			break;
		case -1703696123:
			func_3074(iParam0);
			break;
		case -1541730777:
			func_3075(iParam0);
			break;
		case 218600141:
			func_3076(iParam0);
			break;
		case 294392114:
			func_3077(iParam0);
			break;
		case -152130529:
			func_3078(iParam0);
			break;
		case 1321175366:
			func_3078(iParam0);
			break;
		case -1542718054:
			func_3079(iParam0);
			break;
		case -714084323:
			func_3080(iParam0);
			break;
		case -1856641468:
			func_3081(iParam0);
			break;
		case 1740160671:
			func_3082(iParam0);
			break;
		case 1903241516:
			func_3083(iParam0);
			break;
		case -298209514:
			func_3083(iParam0);
			break;
		case -1687054743:
			func_3084(iParam0);
			break;
		case 1328791445:
			func_3085(iParam0);
			break;
	}
}

void func_1899(int iParam0)
{
	if (!network_does_network_id_exist(Local_409.f_317[iParam0]->f_5))
	{
		return;
	}
	iVar0 = net_to_ent(Local_409.f_317[iParam0]->f_5);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (func_67(Local_4089.f_1087[iParam0]->f_20))
	{
		return;
	}
	if (network_has_control_of_network_id(Local_409.f_317[iParam0]->f_5))
	{
		func_3086(iVar0, 16);
		set_entity_invincible(iVar0, false);
		set_entity_proofs(iVar0, 0, false);
		set_disable_frag_damage(iVar0, false);
	}
}

void func_1900(int iParam0)
{
	if (!func_653(32, iParam0, -1))
	{
		if (func_56(Local_4089.f_1087[iParam0]->f_12))
		{
			func_57(&(Local_4089.f_1087[iParam0]->f_12), 1, 1);
		}
		func_206(&(Local_4089.f_1087[iParam0]->f_13), Local_4089.f_1087[iParam0]->f_3, 0);
		iVar0 = Local_4089.f_1087[iParam0]->f_11;
		switch (Local_4089.f_1087[iParam0]->f_1)
		{
			case -1064014193:
			case 110988383:
			case 1475547288:
			case 1968800194:
				bVar1 = _0x0ccfe72b43c9cf96(iVar0);
				bVar2 = func_3087(iParam0);
				iVar3 = Global_34;
				iVar4 = _get_carrier_as_human(iVar0);
				if (bVar1)
				{
					if (!bVar2)
					{
						_0xa21aa2f0c2180125(iVar0, 0);
					}
					if ((func_719(iVar0) && does_entity_exist(iVar4)) && !is_ped_a_player(iVar4))
					{
						_0x18ff3110cf47115d(iVar0, 27, 1);
					}
				}
				if (bVar1 && !bVar2)
				{
					if (is_ped_a_player(iVar4))
					{
						if (((does_entity_exist(iVar3) && !is_ped_dead_or_dying(iVar3, true)) && iVar4 == iVar3) && !func_494(iVar3, -208384378))
						{
							task_place_carried_entity_at_coord(iVar3, iVar0, Global_35, _0xca95924c893a0c91(Global_34, get_entity_speed(Global_34)), 1);
						}
						return;
					}
					else if (network_has_control_of_entity(iVar0))
					{
						if (!_0x808077647856de62(iVar0, 27))
						{
							_0x18ff3110cf47115d(iVar0, 2, 0);
						}
						_0x18ff3110cf47115d(iVar0, 12, 1);
					}
				}
				break;
			case -152130529:
			case 1321175366:
				if (func_61(2, iParam0))
				{
					set_object_targettable(iVar0, false);
					func_3088(2, iParam0);
				}
				break;
		}
		func_328(32, iParam0);
	}
}

void func_1901(int iParam0)
{
	if (!func_653(16, iParam0, -1))
	{
		if (func_56(Local_4089.f_1087[iParam0]->f_12))
		{
			func_57(&(Local_4089.f_1087[iParam0]->f_12), 1, 1);
		}
		func_206(&(Local_4089.f_1087[iParam0]->f_13), Local_4089.f_1087[iParam0]->f_3, 0);
		if (network_does_network_id_exist(Local_409.f_317[iParam0]->f_5))
		{
			if (is_damage_tracker_active_on_network_id(Local_409.f_317[iParam0]->f_5))
			{
				activate_damage_tracker_on_network_id(Local_409.f_317[iParam0]->f_5, false);
			}
		}
		if (func_652(262144, iParam0))
		{
			iVar0 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(Local_4089.f_1087[iParam0]->f_4));
		}
		else
		{
			iVar0 = Local_4089.f_1087[iParam0]->f_11;
		}
		func_60(iParam0, -1918493640, iVar0, 1);
		if (does_entity_exist(iVar0))
		{
			func_2999(iVar0, Local_409.f_317[iParam0]->f_1, Local_409.f_317[iParam0]->f_2, -1, 0);
			_set_pickup_object_glow_enabled(iVar0, false);
			switch (Local_4089.f_1087[iParam0]->f_1)
			{
				case -152130529:
					_0xf6e88489b4e6ebe5(iVar0, 0);
					break;
				case 294392114:
				case 1740160671:
					_0xe98d55c5983f2509(iVar0);
					_0xa22712e8471aa08e(iVar0, 0, 0);
					_0xf6e88489b4e6ebe5(iVar0, 0);
					if (func_61(8192, iParam0))
					{
						set_ped_config_flag(Global_34, 360, false);
						func_3088(8192, iParam0);
					}
					break;
			}
			if (func_61(1024, iParam0) || func_719(iVar0))
			{
				if (_0x0ccfe72b43c9cf96(iVar0) && Local_4089.f_1087[iParam0]->f_1 != 1968800194)
				{
					if (!func_3087(iParam0))
					{
						_0xa21aa2f0c2180125(iVar0, 0);
						iVar1 = _get_carrier_as_human(iVar0);
						if (does_entity_exist(iVar1) && (is_entity_dead(iVar1) || is_ped_a_player(iVar1)))
						{
							_0x18ff3110cf47115d(iVar0, 2, 0);
						}
						_0x18ff3110cf47115d(iVar0, 3, 0);
					}
				}
			}
		}
		if (!func_3089(iParam0))
		{
			if (!func_61(32, iParam0))
			{
				set_model_as_no_longer_needed(Local_4089.f_1087[iParam0]->f_7);
			}
			if (func_652(262144, iParam0) && _0x1ff441d7954f8709(Local_4089.f_1087[iParam0]->f_4))
			{
				_0xd2b9c78537ed5759(Local_4089.f_1087[iParam0]->f_4);
			}
			if (((Local_4089.f_1087[iParam0]->f_1 == -1856641468 || func_61(1024, iParam0)) && does_entity_exist(Local_4089.f_1087[iParam0]->f_11)) && is_entity_a_mission_entity(Local_4089.f_1087[iParam0]->f_11))
			{
				func_66(Local_4089.f_1087[iParam0]->f_11, 0);
			}
			iVar2 = 0;
			if (Local_4089.f_1087[iParam0]->f_1 == -1703696123)
			{
				iVar2 = 1;
			}
			if (Local_4089.f_1087[iParam0]->f_1 == 110988383)
			{
				if (Local_4089.f_1087[iParam0]->f_23 != 0 && Local_4089.f_1087[iParam0]->f_25 != 0)
				{
					iVar3 = Local_4089.f_1087[iParam0]->f_26;
				}
				iVar4 = func_310(Local_4089.f_1087[iParam0]->f_25, iVar3);
				if ((does_entity_exist(iVar4) && is_entity_attached(iVar4)) && network_has_control_of_entity(iVar4))
				{
					detach_entity(iVar4, true, true);
				}
			}
			if (((Local_4089.f_1087[iParam0]->f_1 == -1064014193 || Local_4089.f_1087[iParam0]->f_1 == 1968800194) || Local_4089.f_1087[iParam0]->f_1 == 1475547288) || Local_4089.f_1087[iParam0]->f_1 == 110988383)
			{
				_0x18ff3110cf47115d(iVar0, 23, 0);
			}
			if ((does_entity_exist(Local_4089.f_1087[iParam0]->f_11) && get_entity_collision_disabled(Local_4089.f_1087[iParam0]->f_11)) && func_1581(Local_4089.f_1087[iParam0]->f_11, 8))
			{
				iVar2 = 1;
			}
			func_55(Local_409.f_317[iParam0]->f_5, iVar2);
			func_63(Local_409.f_317[iParam0]->f_6, iVar2);
			func_3055(2, iParam0);
			func_1892(0, iParam0);
			func_328(16, iParam0);
		}
	}
}

bool func_1902(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = participant_id_to_int();
	}
	return func_80(&(Local_920[iParam2]->f_41[iParam1]), iParam0);
}

void func_1903(int iParam0, int iParam1)
{
	if (&Local_4089.f_1367[iParam1] != iParam0)
	{
		Local_4089.f_1367[iParam1] = iParam0;
	}
}

void func_1904(int iParam0)
{
	if (!func_1988(16, iParam0))
	{
		return;
	}
	if (!func_646(8192, iParam0))
	{
		return;
	}
	if (!does_entity_exist(Local_4089.f_1367[iParam0]->f_14))
	{
		return;
	}
	if (!func_719(Local_4089.f_1367[iParam0]->f_14))
	{
		return;
	}
	explode_vehicle(Local_4089.f_1367[iParam0]->f_14, true, false, 0);
}

void func_1905(int iParam0)
{
	if (!func_1902(2, iParam0, -1))
	{
		iVar0 = func_1385(iParam0, -584819812, 1731164987, 0, 0, 0, 0);
		Var1 = { func_3090(&(Local_4089.f_3355), iVar0) };
		Local_920[participant_id_to_int()]->f_41[iParam0] = 0;
		Local_4089.f_1367[iParam0]->f_18 = iVar0;
		Local_4089.f_1367[iParam0]->f_1 = Var1.f_3;
		Local_4089.f_1367[iParam0]->f_9 = Var1.f_4;
		if (func_3091(iParam0))
		{
			Local_4089.f_1367[iParam0]->f_17 = func_458(Local_4089.f_3391);
		}
		else
		{
			Local_4089.f_1367[iParam0]->f_17 = Var1.f_1;
		}
		Local_4089.f_1367[iParam0]->f_2 = Var1;
		Local_4089.f_1367[iParam0]->f_10 = func_896(func_1385(iParam0, -584819812, 1244051302, 0, 0, 0, 0), -1);
		Local_4089.f_1367[iParam0]->f_15 = func_2981(iParam0, -584819812, 146895972, 0f, 0, 0, 0);
		Local_4089.f_1367[iParam0]->f_12 = func_1480(iParam0, -584819812, -1532785326, -1, 0, 0, 0);
		Local_4089.f_1367[iParam0]->f_11 = func_1385(iParam0, -584819812, 880636905, 0, 0, 0, 0);
		if (Local_4089.f_1367[iParam0]->f_10 == -1)
		{
			Local_4089.f_1367[iParam0]->f_10 = func_2986(-1758418643);
		}
		if (func_3091(iParam0))
		{
			Local_4089.f_1367[iParam0]->f_19 = func_3092();
		}
		else if (Var1.f_2 != 0)
		{
			Local_4089.f_1367[iParam0]->f_19 = Var1.f_2;
		}
		else
		{
			Local_4089.f_1367[iParam0]->f_19 = func_3093(&(Local_4089.f_3355), Local_4089.f_1367[iParam0]->f_18);
			if (Local_4089.f_1367[iParam0]->f_19 != 0)
			{
				Local_4089.f_1367[iParam0]->f_19 = func_3062(&(Local_4089.f_3355), Local_4089.f_1367[iParam0]->f_19, Local_4089.f_1367[iParam0]->f_17);
				func_3094(2048, iParam0);
			}
		}
		if (func_645(Local_4089.f_1367[iParam0]->f_1))
		{
			if (func_28(94))
			{
			}
			func_236(94, 1, 0);
			if (func_1481(iParam0, -584819812, 171771755, 0, 0, 0, 0))
			{
				func_3094(32, iParam0);
			}
		}
		iVar6 = 0;
		if (func_647(iParam0) == 448485414)
		{
			iVar6 = 1;
		}
		if (func_3095(&(Local_4089.f_3355), Local_4089.f_1367[iParam0]->f_18) != 0)
		{
			func_3094(16384, iParam0);
		}
		if (func_1481(iParam0, -584819812, -624320642, iVar6, 0, 0, 0))
		{
			func_3094(1, iParam0);
		}
		if (func_1481(iParam0, -584819812, -1961699581, 0, 0, 0, 0))
		{
			func_3094(2, iParam0);
		}
		if (func_1481(iParam0, -584819812, 1411300059, 0, 0, 0, 0))
		{
			func_3094(64, iParam0);
		}
		if (func_1481(iParam0, -584819812, 240115369, 0, 0, 0, 0))
		{
			func_3094(128, iParam0);
			func_236(82, 1, 0);
		}
		if (func_1481(iParam0, -584819812, -310914520, 0, 0, 0, 0))
		{
			func_3094(8, iParam0);
		}
		if (func_1481(iParam0, -584819812, 360419901, 0, 0, 0, 0))
		{
			func_3094(1048576, iParam0);
		}
		if (func_1481(iParam0, -584819812, 1987443020, 0, 0, 0, 0))
		{
			func_3094(4, iParam0);
		}
		if (func_1481(iParam0, -584819812, -1342968445, 0, 0, 0, 0))
		{
			func_3094(16, iParam0);
		}
		if (func_1481(iParam0, -584819812, -868051705, 0, 0, 0, 0))
		{
			func_3094(256, iParam0);
		}
		if (func_3096(&(Local_4089.f_3355), Local_4089.f_1367[iParam0]->f_18))
		{
			func_3094(8192, iParam0);
		}
		if (func_1481(iParam0, -584819812, 1121260951, 1, 0, 0, 0))
		{
			func_3094(65536, iParam0);
		}
		if (func_1481(iParam0, -584819812, 1596868977, 0, 0, 0, 0))
		{
			func_3094(131072, iParam0);
		}
		if (func_1481(iParam0, -584819812, 1434887695, 0, 0, 0, 0))
		{
			func_3094(524288, iParam0);
		}
		if (func_1385(iParam0, -584819812, -2061423469, 0, 0, 0, 0) != 0)
		{
			func_3094(2097152, iParam0);
		}
		func_3097(iParam0);
		func_3098(2, iParam0);
	}
	else if (&Local_409.f_381[iParam0] > 1)
	{
		func_1903(2, iParam0);
	}
}

void func_1906(int iParam0)
{
	if (!func_1902(4, iParam0, -1))
	{
		bVar0 = true;
		if (!func_1695(Local_4089.f_1367[iParam0]->f_17))
		{
			bVar0 = false;
		}
		if (Local_4089.f_1367[iParam0]->f_19 != 0)
		{
			_request_propset(Local_4089.f_1367[iParam0]->f_19);
			if (!_has_propset_loaded(Local_4089.f_1367[iParam0]->f_19))
			{
				bVar0 = false;
			}
		}
		if (func_645(Local_4089.f_1367[iParam0]->f_1))
		{
			Local_4089.f_2173 = func_2981(iParam0, -584819812, -29359658, 3.75f, 0, 0, 0);
			Local_4089.f_2173.f_1 = func_2981(iParam0, -584819812, 1616161057, 0.5f, 0, 0, 0);
		}
		if (bVar0)
		{
			func_3098(4, iParam0);
		}
	}
	else if (&Local_409.f_381[iParam0] == 3)
	{
		func_1903(3, iParam0);
	}
	else if (&Local_409.f_381[iParam0] > 2)
	{
		func_1903(4, iParam0);
	}
}

void func_1907(int iParam0)
{
	if (&Local_409.f_381[iParam0] > 3)
	{
		func_1903(4, iParam0);
	}
}

void func_1908(int iParam0)
{
	if (&Local_409.f_381[iParam0] > 4 && network_does_network_id_exist(Local_409.f_381[iParam0]->f_10))
	{
		Local_4089.f_1367[iParam0]->f_14 = net_to_veh(Local_409.f_381[iParam0]->f_10);
		iVar0 = Local_4089.f_1367[iParam0]->f_14;
		func_2999(iVar0, Local_409.f_381[iParam0]->f_1, Local_409.f_381[iParam0]->f_2, Local_409.f_381[iParam0]->f_3, 1);
		if (func_1480(iParam0, -584819812, 651590667, -1, 0, 0, 0) != -1)
		{
			func_3094(8, iParam0);
		}
		if (func_242(Local_409.f_381[iParam0]->f_10))
		{
			func_1465(iVar0, 1);
			if ((Local_4089.f_1367[iParam0]->f_1 == -1325813532 || Local_4089.f_1367[iParam0]->f_1 == 1916690818) || Local_4089.f_1367[iParam0]->f_1 == 716572229)
			{
				set_boat_anchor(iVar0, true);
				set_entity_can_be_damaged(iVar0, false);
			}
			else
			{
				set_vehicle_on_ground_properly(iVar0, 0f);
				_0x87b974e54c71ba7b(iVar0, 1);
			}
			bVar4 = false;
			func_3099(iParam0, &bVar4, &fVar1, &uVar2, &uVar3);
			fVar5 = (IntToFloat(get_entity_max_health(iVar0, false)) * fVar1);
			if (bVar4)
			{
				if (fVar1 != 1f)
				{
					set_entity_max_health(iVar0, floor(fVar5));
					_set_entity_health(iVar0, floor(fVar5), 0);
					set_vehicle_body_health(iVar0, fVar5);
				}
				set_vehicle_explodes_on_high_explosion_damage(iVar0, false);
				if (_is_draft_vehicle(iVar0))
				{
					_0x6090a031c69f384e(iVar0, 0);
					_0xd826690b5cf3beff(iVar0, uVar3);
				}
			}
			if (!func_646(33554432, iParam0))
			{
				set_vehicle_can_break(iVar0, false);
			}
			if (((Local_4089.f_1367[iParam0]->f_1 == 1310737556 || Local_4089.f_1367[iParam0]->f_1 == -1325813532) || Local_4089.f_1367[iParam0]->f_1 == -152130529) || Local_4089.f_1367[iParam0]->f_1 == 1986585783)
			{
				if (is_this_model_a_boat(get_entity_model(iVar0)))
				{
					set_boat_sinks_when_wrecked(iVar0, true);
				}
			}
			set_entity_load_collision_flag(iVar0, 1);
			_set_vehicle_lights_can_be_visibly_damaged(iVar0, true);
		}
		switch (func_647(iParam0))
		{
			case 448485414:
				if (!is_damage_tracker_active_on_network_id(Local_409.f_381[iParam0]->f_10))
				{
					activate_damage_tracker_on_network_id(Local_409.f_381[iParam0]->f_10, true);
				}
				break;
			case -428150648:
				if (func_1988(4, iParam0) || func_649(iParam0) == -25013953)
				{
					func_3007(-584819812, iParam0);
				}
				switch (Local_4089.f_1367[iParam0]->f_1)
				{
					case 648180545:
						set_force_hd_vehicle(iVar0, true);
						break;
				}
				break;
		}
		if (_is_draft_vehicle(iVar0) && !func_1902(134217728, iParam0, -1))
		{
			_0xcbf88256e44d5d39(iVar0, 1);
		}
		func_1903(&(Local_409.f_381[iParam0]), iParam0);
	}
	else if (&Local_409.f_381[iParam0] == 7)
	{
		func_1903(7, iParam0);
	}
	else if (((&Local_409.f_381[iParam0] == 4 && network_does_network_id_exist(Local_409.f_381[iParam0]->f_10)) && func_646(1073741824, iParam0)) && !func_1902(1073741824, iParam0, -1))
	{
		func_3098(1073741824, iParam0);
	}
}

void func_1909(int iParam0)
{
	if (!network_does_network_id_exist(Local_409.f_381[iParam0]->f_10))
	{
		return;
	}
	iVar0 = Local_4089.f_1367[iParam0]->f_14;
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (Local_4089.f_1367[iParam0]->f_1 == 648180545)
	{
		if ((!func_1581(iVar0, 4) && func_719(iVar0)) && has_collision_loaded_around_entity(iVar0))
		{
			set_vehicle_on_ground_properly(iVar0, 1.401298E-45f);
			_0x445d7d8ea66e373e(iVar0, 0, get_entity_coords(iVar0, true, false), 0f, 0f, 0f, -1f, 1, 0, 0, 0, 0, 0, 0);
			_0xba8818212633500a(iVar0, 16, 1);
			func_1465(iVar0, 4);
		}
		return;
	}
	func_3100(iParam0);
	func_3101(iParam0, iVar0);
	if (func_242(Local_409.f_381[iParam0]->f_10))
	{
		if (func_1988(1048576, iParam0) && func_1581(iVar0, 128))
		{
			if (!_0x26a867c0b7a456d1(iVar0))
			{
				freeze_entity_position(iVar0, false);
				func_3086(iVar0, 128);
			}
		}
		iVar1 = _0x2963b5c1637e8a27(iVar0);
		bVar2 = (does_entity_exist(iVar1) && is_ped_a_player(iVar1));
		if (!does_entity_exist(iVar1) || bVar2)
		{
			func_3102(4096, iParam0);
		}
		func_3103(iParam0, bVar2);
		func_3104(iParam0);
		func_3105(iParam0, iVar0);
	}
	if ((!func_1827(36) && func_647(iParam0) == 448485414) && !func_2478(Local_4089.f_1367[iParam0]->f_1))
	{
		if ((_0xfe691e89c08937b6(player_id(), 44) && get_vehicle_ped_is_in(Global_34, false) == iVar0) && _0x2963b5c1637e8a27(iVar0) != Global_34)
		{
			func_1026(36, 0, 0, 0);
		}
	}
	if (func_1988(256, iParam0) && !func_1902(16384, iParam0, -1))
	{
		func_3106(iParam0);
	}
	if (_is_draft_vehicle(iVar0))
	{
		_0x0c3f0f7f92ca847c(iVar0, 10f);
	}
	if (func_647(iParam0) == 448485414 || func_1988(4, iParam0))
	{
		func_3107(iParam0, 0, 1);
		func_3108(iParam0);
	}
	if (Local_4089.f_1367[iParam0]->f_1 == -25013953)
	{
		func_3109(iParam0);
	}
	if (!func_646(65536, iParam0) && func_2128(Global_34, iVar0, 1))
	{
		func_3098(65536, iParam0);
	}
	func_3110(iParam0);
	func_3111(iParam0);
	func_3112(iParam0);
	switch (Local_4089.f_1367[iParam0]->f_1)
	{
		case 1941856241:
			func_3113(iParam0, 0);
			break;
		case -25013953:
			func_3113(iParam0, 0);
			break;
		case -704434053:
			func_3113(iParam0, 0);
			break;
		case 448088250:
			func_3114(iParam0);
			break;
		case 1776489902:
			func_3113(iParam0, 1);
			break;
		case 1310737556:
			func_3115(iParam0, 0);
			break;
		case -1325813532:
			func_3115(iParam0, 1);
			break;
		case 1916690818:
			func_3116(iParam0, 1);
			break;
		case 716572229:
			func_3116(iParam0, 1);
			break;
	}
}

void func_1910(int iParam0)
{
	func_3104(iParam0);
	if (!func_1902(64, iParam0, -1))
	{
		iVar0 = Local_4089.f_1367[iParam0]->f_14;
		bVar2 = false;
		bVar3 = false;
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			iVar1 = _0x2963b5c1637e8a27(iVar0);
			if ((((((does_entity_exist(iVar1) && !is_entity_dead(iVar1)) && !is_ped_a_player(iVar1)) && !func_453(512, Local_409.f_381[iParam0]->f_2)) && _0xb07d3185e11657a5(iVar1)) && get_entity_speed(iVar0) > 1.9f) && (get_active_vehicle_mission_type(iVar0) == 4 || get_script_task_status(iVar1, -1273030092, true) == 1))
			{
				bVar3 = true;
			}
			func_3107(iParam0, 0, 0);
			if (func_1988(1, iParam0) && (((!func_646(262144, iParam0) || Local_13.f_359 > 0) || !func_855(0, 0)) || !is_vehicle_driveable(iVar0, false, false)))
			{
				set_vehicle_is_considered_by_player(iVar0, false);
				if (is_ped_in_vehicle(Global_34, iVar0, true))
				{
					if (!func_494(Global_34, 451360105) && get_entity_speed(iVar0) <= 1.9f)
					{
						task_leave_vehicle(Global_34, iVar0, 0, 0);
					}
					bVar2 = true;
				}
			}
			if (func_2478(Local_4089.f_1367[iParam0]->f_1))
			{
				set_boat_anchor(iVar0, true);
			}
		}
		func_206(&(Local_4089.f_1367[iParam0]->f_3), Local_4089.f_1367[iParam0]->f_13, 0);
		if (!bVar2 && !bVar3)
		{
			func_3098(64, iParam0);
		}
	}
}

void func_1911(int iParam0)
{
	if (!func_1902(32, iParam0, -1))
	{
		func_3104(iParam0);
		func_3107(iParam0, func_1988(1, iParam0), 1);
		iVar0 = Local_4089.f_1367[iParam0]->f_14;
		func_2999(iVar0, Local_409.f_381[iParam0]->f_1, Local_409.f_381[iParam0]->f_2, Local_409.f_381[iParam0]->f_3, 0);
		if (network_does_network_id_exist(Local_409.f_381[iParam0]->f_10))
		{
			if (func_242(Local_409.f_381[iParam0]->f_10))
			{
				if (!func_646(33554432, iParam0) && !func_1581(iVar0, 16))
				{
					set_vehicle_can_break(iVar0, true);
				}
				if ((func_2478(Local_4089.f_1367[iParam0]->f_1) && !func_646(67108864, iParam0)) && !func_1902(67108864, iParam0, -1))
				{
					if (func_3117(iParam0, iVar0))
					{
						_set_boat_frozen_when_anchored(iVar0, 1, 0);
						set_boat_anchor(iVar0, true);
						func_3098(67108864, iParam0);
					}
				}
				if (func_646(512, iParam0))
				{
					if (func_2478(Local_4089.f_1367[iParam0]->f_1))
					{
						_0x9e8711c81aa17876(iVar0, 1);
					}
					_set_entity_health(iVar0, 0, 0);
				}
				if (!func_1988(1, iParam0))
				{
					_0x8e5da070bad3279e(iVar0, 750f, 1, 1);
				}
			}
			if (_is_draft_vehicle(iVar0))
			{
				iVar1 = 0;
				while (iVar1 <= (6 - 1))
				{
					iVar2 = _get_ped_in_draft_seat(iVar0, iVar1);
					if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
					{
						set_ped_config_flag(iVar2, 294, true);
						set_ped_config_flag(iVar2, 283, true);
					}
					iVar1++;
				}
			}
			if (is_damage_tracker_active_on_network_id(Local_409.f_381[iParam0]->f_10))
			{
				activate_damage_tracker_on_network_id(Local_409.f_381[iParam0]->f_10, false);
			}
		}
		func_206(&(Local_4089.f_1367[iParam0]->f_3), Local_4089.f_1367[iParam0]->f_13, 0);
		func_3098(268435456, iParam0);
		if (!func_3118(iParam0))
		{
			func_241(Local_409.f_381[iParam0]->f_10, 0);
			if ((does_entity_exist(Local_4089.f_1367[iParam0]->f_14) && get_entity_collision_disabled(Local_4089.f_1367[iParam0]->f_14)) && func_1581(Local_4089.f_1367[iParam0]->f_14, 8))
			{
				iVar3 = 1;
			}
			set_model_as_no_longer_needed(Local_4089.f_1367[iParam0]->f_17);
			func_62(iParam0);
			func_55(Local_409.f_381[iParam0]->f_10, iVar3);
			func_63(Local_409.f_381[iParam0]->f_11, iVar3);
			func_3119(2, iParam0);
			func_1903(0, iParam0);
			func_3098(32, iParam0);
		}
	}
}

bool func_1912(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = participant_id_to_int();
	}
	return func_80(&(Local_920[iParam2]->f_49[iParam1]), iParam0);
}

void func_1913(int iParam0, int iParam1)
{
	if (&Local_4089.f_1508[iParam1] != iParam0)
	{
		Local_4089.f_1508[iParam1] = iParam0;
	}
}

void func_1914(int iParam0)
{
	if (!func_1912(1, iParam0, -1))
	{
		Local_920[participant_id_to_int()]->f_49[iParam0] = 0;
		Local_4089.f_1508[iParam0]->f_1 = func_3120(&(Local_4089.f_3355), iParam0);
		Local_4089.f_1508[iParam0]->f_5 = func_919(func_3121(&(Local_4089.f_3355), iParam0));
		Local_4089.f_1508[iParam0]->f_7 = func_3122(iParam0);
		if (func_247(&(Local_4089.f_3355), iParam0) > 0)
		{
			func_1926(4096, iParam0);
		}
		func_1926(1, iParam0);
	}
	else if (&Local_409.f_467[iParam0] > 1)
	{
		func_1913(2, iParam0);
	}
}

void func_1915(int iParam0)
{
	if (!func_1912(16, iParam0, -1))
	{
		if (func_1912(4096, iParam0, -1))
		{
			iVar0 = func_3123(iParam0);
			func_3124(iParam0, iVar0, 0);
		}
		else
		{
			func_1304(Local_4089.f_1508[iParam0]->f_1, 1, 0);
		}
		func_1926(16, iParam0);
	}
	else if (!func_1912(2, iParam0, -1))
	{
		if (func_1912(4096, iParam0, -1))
		{
			iVar1 = func_3123(iParam0);
			if ((func_593(Local_4089.f_1508[iParam0]->f_1) && door_system_get_door_state(Local_4089.f_1508[iParam0]->f_1) == iVar1) || Local_4089.f_1508[iParam0]->f_8 > 300)
			{
				func_1926(2, iParam0);
			}
			Local_4089.f_1508[iParam0]->f_8++;
		}
		else if (func_593(Local_4089.f_1508[iParam0]->f_1))
		{
			func_1926(2, iParam0);
		}
	}
	else if (&Local_409.f_467[iParam0] > 2)
	{
		func_1913(3, iParam0);
	}
}

void func_1916(int iParam0)
{
	if (!func_1912(4, iParam0, -1))
	{
		iVar0 = func_3123(iParam0);
		func_3124(iParam0, iVar0, 0);
		func_1926(4, iParam0);
	}
	else if (&Local_409.f_467[iParam0] > 3)
	{
		func_1913(&(Local_409.f_467[iParam0]), iParam0);
	}
}

void func_1917(int iParam0)
{
	func_3125(iParam0);
	func_3126(iParam0);
}

void func_1918(int iParam0)
{
	if (!func_1912(8, iParam0, -1))
	{
		func_64(iParam0);
		func_207(&(Local_4089.f_1508[iParam0]->f_3));
		func_3127(1, iParam0);
		func_1913(0, iParam0);
		func_1926(8, iParam0);
	}
}

void func_1919(int iParam0, bool bParam1)
{
	if (Local_4089.f_1 <= 0)
	{
		return;
	}
	if (!func_28(140))
	{
		return;
	}
	if (Local_13.f_82[iParam0]->f_7 != -1)
	{
		iVar1 = func_182(255);
		iVar2 = func_3128(iParam0, bParam1);
		iVar3 = func_3129(iParam0);
		if ((iVar1 != -1 && Local_4089.f_1622[iParam0]->f_55 > 1) && Local_4089.f_1622[iParam0]->f_2[iVar1]->f_12 == -1)
		{
			bVar0 = true;
		}
		iVar4 = Global_1248240->f_9049[Local_13.f_82[iParam0]->f_7]->f_23;
		func_2111(Local_4089.f_3391, iVar2, iVar3, Local_4089.f_1622[iParam0]->f_54, Local_4089.f_1622[iParam0]->f_53, Local_4089.f_1622[iParam0]->f_56, Local_4089.f_1622[iParam0]->f_57, bVar0, Local_13.f_82[iParam0]->f_7, 1);
		func_3130(iParam0);
		iVar5 = Global_1248240->f_9049[Local_13.f_82[iParam0]->f_7]->f_23;
		if ((((Local_13.f_82[iParam0]->f_13 == player_id() && iVar5 == 7) && iVar4 != -1) && iVar4 != 0) && iVar4 != 7)
		{
			play_sound(func_3131(), func_3132(), false, 0, true, 2);
		}
		else if (((iVar5 == 2 || iVar5 == 6) || iVar5 == 8) && !((iVar4 == 2 || iVar4 == 6) || iVar4 == 8))
		{
			play_sound(func_3133(), func_2169(), false, 0, true, 2);
		}
	}
}

bool func_1920(int iParam0)
{
	return (&Local_13.f_82[iParam0] == 3 && Local_13.f_82[iParam0]->f_10 == _0x901e0dc25080c8b9(player_id()));
}

bool func_1921(int iParam0)
{
	return ((&Local_13.f_82[iParam0] == 2 || &Local_13.f_82[iParam0] == 3) || &Local_13.f_82[iParam0] == 4);
}

void func_1922(int iParam0)
{
	iVar0 = Local_13.f_82[iParam0]->f_1;
	if (func_307(255) != 404851220)
	{
		func_208(iParam0);
		return;
	}
	switch (iVar0)
	{
		case 886638433:
			if (func_3134(iParam0))
			{
				iVar1 = Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_60;
				func_3135(iParam0, iVar1, 1, -963477619, 1100884054, "Kurt Rustler");
			}
			else
			{
				func_208(iParam0);
			}
			break;
		case -1918493640:
			if (func_3136(iParam0))
			{
			}
			break;
	}
}

bool func_1923(int iParam0, int iParam1, bool bParam2)
{
	switch (Local_13.f_82[iParam0]->f_1)
	{
		case 886638433:
			if (bParam2)
			{
				switch (Local_409.f_1[Local_13.f_82[iParam0]->f_5]->f_1)
				{
					case 727593135:
						iVar0 = Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_60;
						if (((!is_entity_dead(iVar0) && !get_ped_config_flag(iVar0, 11, true)) && !func_2050(iParam1, iParam0, iVar0, 1, 0)) && func_1341(Local_4089.f_6[Local_13.f_82[iParam0]->f_5]->f_2, 1))
						{
							return true;
						}
						break;
				}
			}
			break;
		case -916820003:
			if (Local_4089.f_1983[Local_13.f_82[iParam0]->f_5]->f_1 != 1115966845)
			{
				return false;
			}
			break;
		default:
			return false;
	}
	return func_1093(2, iParam1);
}

bool func_1924(int iParam0)
{
	switch (iParam0)
	{
		case -2003068922:
		case -391787427:
		case -207712283:
		case 836347960:
		case 1665936245:
			return true;
	}
	return false;
}

bool func_1925(int iParam0)
{
	if (!func_602(Local_409.f_1[iParam0]->f_1))
	{
		return false;
	}
	if (Local_4089.f_6[iParam0]->f_17 != -1918493640)
	{
		return false;
	}
	if (!func_309(Local_4089.f_6[iParam0]->f_18, 0))
	{
		return false;
	}
	if (Local_4089.f_1087[Local_4089.f_6[iParam0]->f_18]->f_1 != -1687054743 && Local_4089.f_1087[Local_4089.f_6[iParam0]->f_18]->f_1 != 1328791445)
	{
		return false;
	}
	if (func_652(32, Local_4089.f_6[iParam0]->f_18) && !func_3137(iParam0))
	{
		return false;
	}
	return true;
}

void func_1926(int iParam0, int iParam1)
{
	if (!func_1912(iParam0, iParam1, -1))
	{
		func_105(Local_920[participant_id_to_int()]->f_49[iParam1], iParam0);
	}
}

void func_1927(int iParam0)
{
	if (Local_4089.f_1983[iParam0]->f_1 != 1115966845)
	{
		return;
	}
	if (*Global_1237665)[Local_4089.f_3391]->f_16 == player_id()
	{
		iVar0 = get_player_ped((*Global_1237665)[Local_4089.f_3391]->f_16);
		if (!network_is_player_active(Global_1248240->f_8903.f_116) && _is_ped_hogtied(iVar0))
		{
			Global_1248240->f_8903.f_116 = network_get_player_index_from_ped(_0x3d9f958834ab9c30(iVar0));
		}
		_0xc3abcfbc7d74afa5(Global_34, 22, 1);
	}
	if (func_182(255) != -1)
	{
		return;
	}
	if (Local_13.f_1 == 6)
	{
		return;
	}
	iVar1 = func_651(iParam0);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	_0xc3abcfbc7d74afa5(iVar1, 12, 1);
	_0xc3abcfbc7d74afa5(iVar1, 14, 1);
	_0xc3abcfbc7d74afa5(iVar1, 5, 1);
	_0xc3abcfbc7d74afa5(iVar1, 2, 1);
}

void func_1928(int iParam0)
{
	iVar0 = 0;
	if (func_714(16384, iParam0, -1))
	{
		if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
		{
			if (is_ped_shooting(Global_34))
			{
				iVar1 = func_2961(Global_34, 0, 0, 0);
				iVar2 = func_2961(Global_34, 0, 1, 0);
				if (func_3138(iVar1) || func_3138(iVar2))
				{
					iVar0 = (iVar0 + func_716(1));
				}
			}
		}
	}
	Local_4089.f_1983[iParam0]->f_13 = (Local_4089.f_1983[iParam0]->f_13 + iVar0);
}

void func_1929(int iParam0)
{
	Global_1940311->f_10895 = iParam0;
}

void func_1930(int iParam0, int iParam1)
{
	if (&Local_4089.f_1983[iParam1] != iParam0)
	{
		Local_4089.f_1983[iParam1] = iParam0;
	}
}

void func_1931(int iParam0)
{
	if (!func_714(1, iParam0, -1))
	{
		Local_920[participant_id_to_int()]->f_68[iParam0] = 0;
		Local_4089.f_1983[iParam0]->f_11 = func_1385(iParam0, -916820003, 1731164987, 0, 0, 0, 0);
		Local_4089.f_1983[iParam0]->f_1 = func_1758(&(Local_4089.f_3355), Local_4089.f_1983[iParam0]->f_11);
		Local_4089.f_1983[iParam0]->f_3 = func_3139(&(Local_4089.f_3355), Local_4089.f_1983[iParam0]->f_11);
		Local_4089.f_1983[iParam0]->f_19 = func_1385(iParam0, -916820003, 250627920, 0, 0, 0, 0);
		Local_4089.f_1983[iParam0]->f_17 = func_1480(iParam0, -916820003, -2137902654, -1, 0, 0, 0);
		Local_4089.f_1983[iParam0]->f_18 = func_1480(iParam0, -916820003, 1035844439, -1, 0, 0, 0);
		Local_4089.f_1983[iParam0]->f_10 = func_896(func_1385(iParam0, -916820003, -1131741768, -1, 0, 0, 0), -1);
		switch (Local_4089.f_1983[iParam0]->f_1)
		{
			case -948149899:
			case 206508773:
				Local_4089.f_1983[iParam0]->f_12 = func_3140(&(Local_4089.f_3355), Local_4089.f_1983[iParam0]->f_11);
				break;
			case -1767305912:
			case -1229553512:
				Local_4089.f_1983[iParam0]->f_14 = func_1480(iParam0, -916820003, -514910092, 0, 0, 0, 0);
				break;
			case 392881261:
				Local_4089.f_1983[iParam0]->f_12 = func_896(func_1385(iParam0, -916820003, 3085531, -1, 0, 0, 0), -1);
				break;
		}
		if (func_218(&(Local_4089.f_3355), 1434887695, 0, 24357435, Local_409.f_478[iParam0]->f_2, 0, 0, 0, 0))
		{
			func_3141(4194304, iParam0);
		}
		func_3141(1, iParam0);
	}
	else if (&Local_409.f_478[iParam0] > 1)
	{
		func_1930(2, iParam0);
	}
}

void func_1932(int iParam0)
{
	if (!func_714(2, iParam0, -1))
	{
		func_3141(2, iParam0);
	}
	else if (&Local_409.f_478[iParam0] > 2)
	{
		func_1930(4, iParam0);
	}
}

void func_1933(int iParam0)
{
	if (!func_714(4, iParam0, -1))
	{
		uVar2 = 6;
		switch (Local_4089.f_1983[iParam0]->f_1)
		{
			case -948149899:
				iVar0 = Local_4089.f_1983[iParam0]->f_12;
				iVar1 = func_2230(iVar0);
				func_3142(iVar0, &uVar2);
				func_3143(Local_4089.f_3391, iVar0, iVar1, &uVar2);
				break;
		}
		func_3141(4, iParam0);
	}
	else if (&Local_409.f_478[iParam0] > 4)
	{
		func_1930(5, iParam0);
	}
}

void func_1934(int iParam0)
{
	func_3144(iParam0);
	switch (Local_4089.f_1983[iParam0]->f_1)
	{
		case 102628183:
			func_3145(iParam0);
			break;
		case -948149899:
			func_3145(iParam0);
			break;
		case -463039475:
			func_3146(iParam0);
			break;
		case 206508773:
			func_3147(iParam0);
			break;
		case -1767305912:
			func_3148(iParam0);
			break;
		case -1229553512:
			func_3148(iParam0);
			break;
		case 392881261:
			func_3149(iParam0);
			break;
		case -1600622414:
			func_3150(iParam0);
			break;
		case 1115966845:
			func_3151(iParam0);
			break;
	}
}

void func_1935(int iParam0)
{
	if (!func_714(16, iParam0, -1))
	{
		func_206(&(Local_4089.f_1983[iParam0]->f_4), Local_4089.f_1983[iParam0]->f_2, 0);
		if (Local_4089.f_1983[iParam0]->f_19 == 860364721 && func_1960(Local_4089.f_1983[iParam0]->f_17, 1))
		{
			func_3152(16, Local_4089.f_1983[iParam0]->f_17);
		}
		switch (Local_4089.f_1983[iParam0]->f_1)
		{
			case -948149899:
				iVar0 = _0x5ca6bbd4a7d8145e(player_id());
				if (does_entity_exist(iVar0) && Local_4089.f_1983[iParam0]->f_15 == iVar0)
				{
					if (func_1750(8, Local_409.f_478[iParam0]->f_2, 255))
					{
						uVar1[0] = func_3153(Local_4089.f_3391);
						uVar1[1] = func_3154(Local_4089.f_3391);
						if (func_3155(&uVar1, 1) && func_3156(&(uVar1[0]), 1, 1, 0, 1, -142743235) == 0)
						{
							func_3156(&(uVar1[1]), 1, 1, 0, 1, -142743235);
						}
					}
				}
				else if (does_entity_exist(Local_4089.f_1983[iParam0]->f_15))
				{
					if (_0x808077647856de62(Local_4089.f_1983[iParam0]->f_15, 2))
					{
						_0x18ff3110cf47115d(Local_4089.f_1983[iParam0]->f_15, 2, 0);
					}
				}
				break;
		}
		func_3141(16, iParam0);
	}
}

void func_1936(int iParam0)
{
	if (!func_714(8, iParam0, -1))
	{
		if (func_3157(iParam0))
		{
			return;
		}
		func_206(&(Local_4089.f_1983[iParam0]->f_4), Local_4089.f_1983[iParam0]->f_2, 0);
		switch (Local_4089.f_1983[iParam0]->f_1)
		{
			case -463039475:
			case 102628183:
				if (network_does_network_id_exist(Local_409.f_478[iParam0]->f_1))
				{
					func_241(Local_409.f_478[iParam0]->f_1, 0);
					if (func_242(Local_409.f_478[iParam0]->f_1))
					{
						iVar0 = net_to_ent(Local_409.f_478[iParam0]->f_1);
						if (_0x0ccfe72b43c9cf96(iVar0))
						{
							_0x9ebd34958ab6f824(iVar0);
						}
						func_1465(iVar0, 2);
					}
				}
				break;
		}
		func_3158(1, iParam0);
		func_1930(0, iParam0);
		func_3141(8, iParam0);
	}
}

void func_1937(int iParam0)
{
	if (func_158(1048576, iParam0, -1))
	{
		return;
	}
	func_190(1048576, iParam0, 1);
	func_488(8, iParam0, 1);
	func_165(Local_4089.f_3391);
	if (func_158(32768, iParam0, -1))
	{
		func_3159(iParam0, func_503(iParam0, -1));
	}
	func_488(32768, iParam0, 1);
	if (func_158(2048, iParam0, -1))
	{
		func_486(2, iParam0);
		_0xdc6ad5c046f33ab4(0, 0);
		_0x89d803cd48622150(0);
		func_160(iParam0);
	}
	else
	{
		func_179(iParam0);
	}
	func_188();
}

void func_1938(bool bParam0)
{
	if (func_3160())
	{
		Global_1958008 = 1;
	}
	if (func_3161(-92416669))
	{
	}
	if (bParam0 && (Global_1940258->f_38 == -1016714371 || Global_1940258->f_38 == 332793555))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		Global_1940258->f_38 = -1569615261;
	}
}

void func_1939()
{
	if (is_bit_set(&Global_1958009, 4))
	{
	}
	else
	{
		set_bit(Global_1958009, 0);
	}
}

void func_1940()
{
	if (func_3162(2))
	{
	}
	else
	{
		func_3163(8);
	}
}

bool func_1941()
{
	return Global_1896738->f_382;
}

void func_1942()
{
	func_3164(0);
}

void func_1943(int iParam0)
{
	if (!func_178(256, iParam0))
	{
		return;
	}
	stop_fire_in_range(Global_35, 10f);
}

bool func_1944(int iParam0)
{
	if (func_503(iParam0, -1) == 0)
	{
		if (func_178(128, iParam0))
		{
			return false;
		}
		if (!func_3165(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_1945()
{
	func_3166(0);
}

void func_1946()
{
	Global_1904651->f_8685 = 1;
}

void func_1947()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 == 0)
	{
		return;
	}
	_0x2f901291ef177b02(iVar0, 1);
}

bool func_1948(int iParam0)
{
	if (&Local_13.f_226[iParam0] == 4)
	{
		return false;
	}
	if (func_158(32768, iParam0, -1) && func_159(8192, iParam0))
	{
		return true;
	}
	if (func_157(iParam0))
	{
		if (func_158(8, iParam0, -1))
		{
			return true;
		}
	}
	return false;
}

int func_1949(int iParam0)
{
	return (*Global_1248240)[Local_4089.f_3391]->f_19[iParam0]->f_74;
}

void func_1950(int iParam0)
{
	if (func_158(32768, iParam0, -1))
	{
		iVar0 = func_503(iParam0, -1);
	}
	else
	{
		iVar0 = Local_13.f_226[iParam0]->f_2;
	}
	if (func_503(iParam0, -1) == iVar0 && func_158(1, iParam0, -1))
	{
		return;
	}
	if (((iVar0 == 0 && !func_158(8, iParam0, -1)) && func_3167(Local_4089.f_3391, iParam0)) && func_3168(player_id(), iParam0, 1, 1))
	{
		func_3169(iParam0, -1);
	}
	if (!func_3170(iParam0, iVar0))
	{
		return;
	}
	if (!func_158(1, iParam0, -1))
	{
		func_3171(iParam0, iVar0);
	}
}

void func_1951(int iParam0)
{
	iVar0 = func_503(iParam0, -1);
	func_3172();
	if (!func_2525(iParam0))
	{
		return;
	}
	if (func_158(8, iParam0, -1))
	{
		func_3173(iParam0, iVar0);
	}
	func_3174(iParam0, iVar0);
	if (func_158(32768, iParam0, -1))
	{
		func_3175(iParam0, iVar0);
	}
}

bool func_1952(int iParam0)
{
	if (func_159(256, iParam0))
	{
		return false;
	}
	if (&Local_13.f_226[iParam0] == 2 && !func_158(1, iParam0, -1))
	{
		return true;
	}
	if (func_503(iParam0, -1) != Local_13.f_226[iParam0]->f_2 && &Local_13.f_226[iParam0] != 4)
	{
		return true;
	}
	return false;
}

void func_1953(int iParam0)
{
	if (((((func_178(128, iParam0) && func_159(128, iParam0)) && _0x72b2e00c9bac6789(&((*Global_1237665)[Local_4089.f_3391]->f_14), player_id())) && (*Global_1237665)[Local_4089.f_3391]->f_13 != _0x901e0dc25080c8b9(player_id())) && !func_170(255)) && (is_screen_faded_out() || is_screen_fading_out()))
	{
		do_screen_fade_in(1000);
	}
	if (func_3176(iParam0))
	{
		func_3177(iParam0);
	}
	else if (Local_4089.f_3779.f_6 == iParam0)
	{
		func_3178(iParam0);
	}
	func_3179(iParam0);
}

void func_1954(int iParam0)
{
	if (func_159(256, iParam0))
	{
		func_190(256, iParam0, 1);
		func_184(8192, iParam0);
		func_488(2, iParam0, 1);
		func_488(1, iParam0, 1);
	}
}

void func_1955(int iParam0)
{
	if (!func_3180(1, iParam0))
	{
		Local_4089.f_1601[iParam0]->f_3 = 0;
		if (func_218(&(Local_4089.f_3355), 1819449204, 0, 2043864919, iParam0, 0, 0, 0, 0))
		{
			func_3181(16, iParam0);
		}
		iVar0 = func_3182(&(Local_4089.f_3355), iParam0);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (func_3183(&(Local_4089.f_3355), iParam0, iVar1) > 0)
			{
				func_3181(32, iParam0);
			}
			else
			{
				iVar1++;
			}
		}
		if (func_3184(&(Local_4089.f_3355), iParam0))
		{
			func_3181(128, iParam0);
		}
		func_3181(1, iParam0);
		func_1961(2, iParam0);
	}
}

void func_1956(int iParam0)
{
	if (!func_3180(2, iParam0))
	{
		iVar0 = func_3185(&(Local_4089.f_3355), iParam0);
		if (iVar0 != 0)
		{
			request_named_ptfx_asset(iVar0);
			if (!has_named_ptfx_asset_loaded(iVar0))
			{
				return;
			}
		}
		func_3181(2, iParam0);
		func_1961(3, iParam0);
	}
}

void func_1957(int iParam0)
{
	if (!func_3180(4, iParam0) && !func_3180(16, iParam0))
	{
		iVar0 = func_3186(&(Local_4089.f_3355), iParam0);
		if (iVar0 != 0)
		{
			Var1 = { func_3187(&(Local_4089.f_3355), iParam0) };
			Var9 = { func_3188(&(Local_4089.f_3355), iParam0) };
			vVar17 = { func_3189(&(Local_4089.f_3355), iParam0) };
			vVar20 = { func_3190(&(Local_4089.f_3355), iParam0) };
			if (!func_67(vVar17))
			{
				if (func_3180(128, iParam0))
				{
					if (!get_ground_z_and_normal_for_3d_coord(vVar17, &uVar23, &vVar24))
					{
						return;
					}
					vVar17.f_2 = uVar23;
					vVar20 = { func_3191(vVar24, 0) };
				}
				use_particle_fx_asset(&Var1);
				Local_4089.f_1601[iParam0]->f_1 = start_particle_fx_looped_at_coord(&Var9, vVar17, vVar20, 1f, false, false, false, true);
				if (!_does_item_have_valid_base(Local_4089.f_1601[iParam0]->f_1))
				{
					return;
				}
				Local_4089.f_1601[iParam0]->f_2 = get_network_time_accurate();
				iVar30 = func_3182(&(Local_4089.f_3355), iParam0);
				iVar28 = 0;
				while (iVar28 <= iVar30)
				{
					iVar29 = func_3192(&(Local_4089.f_3355), iParam0, iVar28);
					if (iVar29 == 0)
					{
					}
					else
					{
						Var31 = { func_3193(&(Local_4089.f_3355), iParam0, iVar28) };
						fVar27 = func_3194(&(Local_4089.f_3355), iParam0, iVar28);
						set_particle_fx_looped_evolution(Local_4089.f_1601[iParam0]->f_1, &Var31, fVar27, true);
					}
					iVar28++;
				}
			}
			else
			{
				func_1961(5, iParam0);
				return;
			}
		}
		func_3181(4, iParam0);
		func_1961(4, iParam0);
	}
}

void func_1958(int iParam0)
{
	if (func_3180(32, iParam0) && !func_3180(64, iParam0))
	{
		fVar0 = to_float(get_time_difference(Local_4089.f_1601[iParam0]->f_2, get_network_time_accurate()));
		bVar2 = true;
		iVar8 = func_3182(&(Local_4089.f_3355), iParam0);
		iVar6 = 0;
		while (iVar6 <= iVar8)
		{
			iVar7 = func_3192(&(Local_4089.f_3355), iParam0, iVar6);
			if (iVar7 == 0)
			{
			}
			else
			{
				fVar1 = to_float(func_3183(&(Local_4089.f_3355), iParam0, iVar6));
				if (fVar1 <= 0f)
				{
				}
				else
				{
					if (fVar1 > fVar0)
					{
						bVar2 = false;
					}
					Var9 = { func_3193(&(Local_4089.f_3355), iParam0, iVar6) };
					fVar3 = func_3194(&(Local_4089.f_3355), iParam0, iVar6);
					fVar4 = func_3195(&(Local_4089.f_3355), iParam0, iVar6);
					fVar5 = func_3197(fVar3, fVar4, func_3196((fVar0 / fVar1), 0f, 1f));
					set_particle_fx_looped_evolution(Local_4089.f_1601[iParam0]->f_1, &Var9, fVar5, true);
				}
			}
			iVar6++;
		}
		if (bVar2)
		{
			func_3181(64, iParam0);
		}
	}
}

void func_1959(int iParam0)
{
	if (!func_3180(8, iParam0))
	{
		if (_does_item_have_valid_base(Local_4089.f_1601[iParam0]->f_1))
		{
			stop_particle_fx_looped(Local_4089.f_1601[iParam0]->f_1, true);
		}
		func_3152(1, iParam0);
		func_1961(0, iParam0);
		func_3181(8, iParam0);
	}
}

bool func_1960(int iParam0, bool bParam1)
{
	if (iParam0 == -1 || iParam0 > 4)
	{
		return false;
	}
	if (bParam1 && &Local_4089.f_1601[iParam0] == 5)
	{
		return false;
	}
	return &Local_4089.f_1601[iParam0] != 0;
}

void func_1961(int iParam0, int iParam1)
{
	if (&Local_4089.f_1601[iParam1] != iParam0)
	{
		Local_4089.f_1601[iParam1] = iParam0;
	}
}

void func_1962(int iParam0)
{
	switch (Local_4089.f_2156[iParam0]->f_2)
	{
		case -1967380511:
			func_3198(iParam0);
			break;
	}
}

bool func_1963(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = participant_id_to_int();
	}
	return func_80(&(Local_920[iParam2]->f_75[iParam1]), iParam0);
}

int func_1964(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_3199(iVar0, 1);
		if (iVar1 == 0)
		{
		}
		else if (func_3200(iVar1, &(Local_409.f_494[iParam0]->f_2)))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_1965(var uParam0, int iParam1, int iParam2)
{
	if (func_1701(uParam0, uParam0->f_2, &Var0, -1329560766, iParam1, iParam2, 1))
	{
		return _datafile_get_num_children(Var0, Var0.f_1);
	}
	return 0;
}

struct<8> func_1966(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return func_221(uParam0, 1412039830, "", -1329560766, iParam1, iParam2, 458298725, iParam3, 0);
}

int func_1967(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return func_1445(uParam0, -683230822, 0, -1329560766, iParam1, iParam2, 458298725, iParam3, 0, 0);
}

void func_1968(int iParam0, int iParam1)
{
	if (!func_1963(iParam0, iParam1, -1))
	{
		func_105(Local_920[participant_id_to_int()]->f_75[iParam1], iParam0);
	}
}

void func_1969(int iParam0, int iParam1)
{
	if (Local_4089.f_2156[iParam1]->f_1 != iParam0)
	{
		Local_4089.f_2156[iParam1]->f_1 = iParam0;
	}
}

void func_1970(int iParam0)
{
	if (&Local_409.f_494[iParam0] == 9)
	{
		func_1969(9, iParam0);
		return;
	}
	iVar0 = func_1964(iParam0);
	iVar1 = func_2527(iParam0);
	if (!func_1963(1, iParam0, -1))
	{
		Local_920[participant_id_to_int()]->f_75[iParam0] = 0;
		Local_4089.f_2156[iParam0]->f_2 = func_3201(&(Local_4089.f_3355), iParam0);
		func_1968(1, iParam0);
	}
	else if (iVar0 == 0 || iVar1 == 0)
	{
		return;
	}
	else if (&Local_409.f_494[iParam0] > 1)
	{
		iVar2 = func_2529(&(Local_4089.f_3355), iParam0, iVar1);
		Local_4089.f_2156[iParam0] = iVar2;
		func_1969(2, iParam0);
	}
}

void func_1971(int iParam0)
{
	if (&Local_409.f_494[iParam0] == 9)
	{
		func_1969(9, iParam0);
	}
	else if (&Local_409.f_494[iParam0] > 2)
	{
		func_1969(4, iParam0);
	}
}

void func_1972(int iParam0)
{
	if (network_does_network_id_exist(Local_409.f_494[iParam0]->f_1))
	{
		iVar0 = _net_to_anim_scene(Local_409.f_494[iParam0]->f_1);
		if (_network_has_control_of_anim_scene(iVar0))
		{
			_delete_anim_scene(iVar0);
			return;
		}
	}
	else if (&Local_409.f_494[iParam0] > 3)
	{
		if (func_1963(32768, iParam0, -1) && Local_4089.f_4113 != 0)
		{
			Local_4089.f_4113 = 0;
		}
		func_3202(iParam0, 0);
		Local_920[participant_id_to_int()]->f_75[iParam0] = 0;
		iVar1 = func_2527(iParam0);
		iVar2 = func_2529(&(Local_4089.f_3355), iParam0, iVar1);
		Local_4089.f_2156[iParam0] = iVar2;
		func_1968(1, iParam0);
		func_1969(4, iParam0);
	}
}

void func_1973(int iParam0)
{
	if (&Local_409.f_494[iParam0] > 4 && network_does_network_id_exist(Local_409.f_494[iParam0]->f_1))
	{
		func_1968(2, iParam0);
		func_1969(5, iParam0);
	}
}

void func_1974(int iParam0)
{
	if (&Local_409.f_494[iParam0] == 9)
	{
		func_1969(9, iParam0);
		return;
	}
	if (!func_1963(8, iParam0, -1))
	{
		bVar0 = true;
		if (!network_does_network_id_exist(Local_409.f_494[iParam0]->f_1))
		{
			bVar0 = false;
		}
		else
		{
			iVar1 = _net_to_anim_scene(Local_409.f_494[iParam0]->f_1);
			if (!_does_anim_scene_exist(iVar1))
			{
				bVar0 = false;
			}
			else if (!_is_anim_scene_loaded(iVar1, true, false))
			{
				bVar0 = false;
			}
			else if (!_is_anim_scene_metadata_loaded(iVar1, false))
			{
				bVar0 = false;
			}
			else if (!func_3203(iParam0, iVar1))
			{
				bVar0 = false;
			}
			else if (!func_3204(iParam0, iVar1))
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			func_1968(8, iParam0);
		}
	}
	else if (&Local_409.f_494[iParam0] > 5)
	{
		func_1969(6, iParam0);
	}
}

void func_1975(int iParam0)
{
	if (&Local_409.f_494[iParam0] == 9)
	{
		func_1969(9, iParam0);
		return;
	}
	if (func_2241(4096, iParam0))
	{
		func_3205(iParam0);
	}
	if (network_does_network_id_exist(Local_409.f_494[iParam0]->f_1))
	{
		func_3206(iParam0);
	}
}

void func_1976(int iParam0)
{
	if (&Local_409.f_494[iParam0] == 9)
	{
		func_1969(9, iParam0);
		return;
	}
	func_3207(iParam0);
	if (!func_2241(16, iParam0) && !func_1963(16, iParam0, -1))
	{
		func_3208(iParam0);
	}
	if (network_does_network_id_exist(Local_409.f_494[iParam0]->f_1))
	{
		func_3206(iParam0);
		if ((network_has_control_of_network_id(Local_409.f_494[iParam0]->f_1) && !func_1963(2048, iParam0, -1)) && func_3209(iParam0))
		{
			func_1968(2048, iParam0);
		}
	}
}

void func_1977(int iParam0)
{
	if (&Local_409.f_494[iParam0] == 9)
	{
		func_1969(9, iParam0);
		return;
	}
	if (!func_2241(32, iParam0) && !func_1963(32, iParam0, -1))
	{
		if (!func_2241(16, iParam0) && !func_1963(16, iParam0, -1))
		{
			func_3208(iParam0);
		}
		func_3210(iParam0);
	}
	if (network_does_network_id_exist(Local_409.f_494[iParam0]->f_1))
	{
		bVar0 = false;
		if (!func_1963(1024, iParam0, -1))
		{
			func_3211(iParam0);
			func_1968(1024, iParam0);
		}
		else if (!func_1963(512, iParam0, -1) || func_2241(4194304, iParam0))
		{
			bVar0 = !func_3212(iParam0);
		}
		func_3206(iParam0);
		if (bVar0 && network_has_control_of_network_id(Local_409.f_494[iParam0]->f_1))
		{
			func_1968(64, iParam0);
		}
		if (((func_2241(4194304, iParam0) && func_2241(256, iParam0)) && !func_2241(64, iParam0)) && !func_1963(512, iParam0, -1))
		{
			func_3213(iParam0);
		}
	}
	if (func_1963(262144, iParam0, -1) && !func_1963(524288, iParam0, -1))
	{
		iVar1 = Global_34;
		if (network_does_network_id_exist(Local_409.f_494[iParam0]->f_1))
		{
			iVar2 = _net_to_anim_scene(Local_409.f_494[iParam0]->f_1);
			if (_is_anim_scene_started(iVar2, false) && !_0x3ab6c7b0bb0df4b1(iVar1, iVar2))
			{
				func_1968(524288, iParam0);
				func_3202(iParam0, 0);
			}
		}
		else
		{
			func_1968(524288, iParam0);
			func_3202(iParam0, 0);
		}
	}
}

void func_1978(int iParam0)
{
	if (!func_1963(4, iParam0, -1))
	{
		bVar0 = !network_does_network_id_exist(Local_409.f_494[iParam0]->f_1);
		func_3213(iParam0);
		func_57(&(Local_4089.f_2156[iParam0]->f_3), 1, 1);
		if (!bVar0 && network_has_control_of_network_id(Local_409.f_494[iParam0]->f_1))
		{
			func_65(iParam0);
		}
		func_3202(iParam0, 0);
		if (bVar0)
		{
			func_3214(1, iParam0);
			func_1969(0, iParam0);
			func_1968(4, iParam0);
		}
	}
}

void func_1979(int iParam0)
{
	if (func_1987(Global_34, &(Local_4089.f_2190[iParam0]), 1, 0))
	{
		_0xc3abcfbc7d74afa5(Global_34, 0, 1);
	}
}

void func_1980(int iParam0)
{
	if (func_535(32, iParam0))
	{
		func_44(1);
	}
}

void func_1981(int iParam0)
{
	bVar0 = func_1987(Global_34, &(Local_4089.f_2190[iParam0]), 1, 0);
	bVar1 = func_28(126);
	if ((((bVar0 || !bVar1) || func_28(118)) || func_170(255)) || is_entity_dead(Global_34))
	{
		if (!func_535(32, iParam0))
		{
			if (!func_3215())
			{
				func_3216();
			}
			func_894(32, iParam0);
		}
	}
	else if (func_535(32, iParam0))
	{
		func_536(32, iParam0);
		if (!func_3215())
		{
			func_3217();
		}
	}
	else if (!func_3215())
	{
		func_3218();
	}
}

void func_1982()
{
	if (Local_920[participant_id_to_int()]->f_94 != -1)
	{
		Local_920[participant_id_to_int()]->f_94 = -1;
	}
}

bool func_1983(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = participant_id_to_int();
	}
	return Local_920[iParam0]->f_94 != -1;
}

void func_1984(int iParam0)
{
	if (func_311(iParam0) && Local_920[participant_id_to_int()]->f_94 != iParam0)
	{
		Local_920[participant_id_to_int()]->f_94 = iParam0;
		Local_4089.f_3971 = iParam0;
	}
}

bool func_1985()
{
	return ((func_28(79) && Local_4089.f_4076 == 0) && Local_4089.f_4073 == 1);
}

bool func_1986(int iParam0, int iParam1, bool bParam2)
{
	if (func_535(2097152, iParam0) && (*Global_1237665)[Local_4089.f_3391]->f_16 != player_id())
	{
		return false;
	}
	if (bParam2)
	{
		if (func_148(32768, iParam1))
		{
			return false;
		}
	}
	return (Local_4089.f_2190[iParam0]->f_10 == -1 || Local_4089.f_2190[iParam0]->f_10 == func_182(iParam1));
}

bool func_1987(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_1988(int iParam0, int iParam1)
{
	return func_80(Local_4089.f_1367[iParam1]->f_16, iParam0);
}

bool func_1989(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	switch (Local_13.f_82[iParam0]->f_1)
	{
		case 886638433:
			if (get_mount(get_ped_index_from_entity_index(iParam1)) == iParam2)
			{
				return true;
			}
		case -1918493640:
		case -916820003:
			if (_0x61914209c36efddb(iParam1) == 7 && _get_carrier_as_mount(iParam1) == iParam2)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1990(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Local_13.f_82[iVar0]->f_1 != 886638433)
		{
		}
		else if (iParam1 != 0 && &Local_13.f_82[iVar0] != iParam1)
		{
		}
		else
		{
			iVar1 = Local_13.f_82[iVar0]->f_5;
			if (!func_1097(iVar1, 0))
			{
			}
			else if (!does_entity_exist(Local_4089.f_6[iVar1]->f_60) || is_ped_dead_or_dying(Local_4089.f_6[iVar1]->f_60, true))
			{
			}
			else if (func_3219(Local_4089.f_6[iVar1]->f_60, iParam0, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1991(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

int func_1992(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Local_13.f_82[iVar0]->f_1 != -1918493640)
		{
		}
		else
		{
			iVar1 = Local_13.f_82[iVar0]->f_5;
			if (!func_309(iVar1, 0))
			{
			}
			else if (!func_652(128, iVar1))
			{
			}
			else if (Local_4089.f_1087[iVar1]->f_27 == -584819812 && Local_4089.f_1087[iVar1]->f_28 == iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_1993(int iParam0)
{
	return (Local_4089.f_4145 && iParam0) != 0;
}

int func_1994()
{
	iVar0 = 12576;
	if (func_28(42))
	{
		iVar0 = (iVar0 || Local_4089.f_4145);
	}
	else
	{
		iVar0 |= 1;
		iVar0 |= 2048;
	}
	return func_3220(Global_34, &(Local_4089.f_4029), iVar0, 0, 0, 1084227584, 100, 0, 0);
}

void func_1995()
{
	Local_4089.f_4145 = 0;
}

void func_1996(float fParam0, bool bParam1)
{
	if (is_ped_on_mount(Global_34) || is_ped_in_any_vehicle(Global_34, false))
	{
		if (fParam0 >= func_3221())
		{
			Global_1940085->f_9 = (func_3221() - 0.01f);
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

bool func_1997(var uParam0)
{
	return func_3222(*uParam0, 1);
}

void func_1998(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1997(uParam0))
	{
		func_3223(uParam0);
	}
}

int func_1999(var uParam0)
{
	if (!func_1997(uParam0))
	{
		return 0;
	}
	if (func_3224(uParam0))
	{
		return uParam0->f_2;
	}
	return func_3225(uParam0->f_1);
}

void func_2000()
{
	switch (Local_4089.f_3211)
	{
		case 313639473:
			Local_4089.f_3211.f_14 = 0f;
			Local_4089.f_3211 = 46999421;
			break;
		case -431929910:
			Local_4089.f_3211.f_14 = 0.25f;
			Local_4089.f_3211 = 313639473;
			break;
		case 1345212537:
			Local_4089.f_3211.f_14 = 0.5f;
			Local_4089.f_3211 = -431929910;
			break;
	}
}

void func_2001(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_2002(int iParam0, float fParam1)
{
	set_vehicle_steer_bias(iParam0, fParam1);
	Local_4089.f_3211.f_12 = fParam1;
}

void func_2003(int iParam0, float fParam1)
{
	set_vehicle_steer_bias(iParam0, (Local_4089.f_3211.f_12 + fParam1));
	Local_4089.f_3211.f_12 = (Local_4089.f_3211.f_12 + fParam1);
}

float func_2004()
{
	fVar0 = get_random_float_in_range(-Local_4089.f_3211.f_12, Local_4089.f_3211.f_12);
	if (fVar0 <= 0f && fVar0 > -Local_4089.f_3211.f_13)
	{
		fVar0 = -Local_4089.f_3211.f_13;
	}
	else if (fVar0 > 0f && fVar0 < Local_4089.f_3211.f_13)
	{
		fVar0 = Local_4089.f_3211.f_13;
	}
	return fVar0;
}

void func_2005(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fParam5 = func_3226(vParam1, fParam5);
	fVar0 = func_3227(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
		set_particle_fx_looped_alpha(*uParam0, fVar0);
	}
}

void func_2006(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fVar0 = (IntToFloat((get_frame_count() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		func_251(&(uParam0->f_1), 16);
		func_2005(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_3226(vParam1, fParam5);
		fVar1 = func_3227(fParam5, iParam4);
		fVar3 = func_3197(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_3197(0f, fVar1, fVar0);
	}
	_0x9ddc222d85d5af2a(*uParam0, fVar3);
	set_particle_fx_looped_alpha(*uParam0, fVar2);
}

float func_2007(float fParam0)
{
	fVar0 = func_3228(fParam0);
	return fVar0;
}

float func_2008(int iParam0)
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

float func_2009(float fParam0)
{
	fVar0 = func_3228(fParam0);
	return fVar0;
}

float func_2010(int iParam0)
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

float func_2011(int iParam0)
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

float func_2012(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_3229(0) };
	vVar3 = { func_2074(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

bool func_2013(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_849(iParam1) == 6)
	{
		func_3230(iParam1, 0);
	}
	switch (func_849(iParam1))
	{
		case 0:
			if (func_3231(iParam0, iParam1, bParam2, &bVar0, iParam3, iParam4))
			{
				if (bVar0)
				{
					func_3230(iParam1, 3);
					return false;
				}
				else
				{
					func_3230(iParam1, 1);
					return false;
				}
			}
			break;
		case 1:
			if (func_3232(iParam0, iParam1))
			{
				return false;
			}
			if (func_3233(iParam1, bParam2))
			{
				func_3230(iParam1, 2);
			}
			return false;
		case 2:
			func_1439(iParam0, iParam1);
			func_3230(iParam1, 4);
			return true;
		case 3:
			func_3234(iParam0, iParam1);
			func_3230(iParam1, 5);
			return true;
		case 4:
		case 5:
			return true;
	}
	return false;
}

void func_2014(int iParam0, int iParam1, int iParam2)
{
	iVar0 = Local_4089.f_3395[iParam0]->f_5;
	if (iVar0 == -1)
	{
		return;
	}
	if (func_2316(iParam0) == 0)
	{
		return;
	}
	iVar1 = func_2316(iParam0);
	bVar2 = iVar1 == 2;
	if (bVar2)
	{
		sVar3 = func_2301(iParam0, iVar0);
	}
	else
	{
		sVar3 = func_2310(iParam1, iParam0, iVar0);
	}
	switch (iVar1)
	{
		case 3:
			if (!func_3235(iParam2, sVar3))
			{
				func_2308(iParam0, 5);
			}
			break;
		case 4:
			if (!func_850(65536, iParam0) && !is_ambient_speech_playing(iParam2))
			{
				func_2308(iParam0, 5);
			}
			break;
		case 7:
			if (func_3236(iParam0, 489869217, &bVar4))
			{
				func_2308(iParam0, 5);
			}
			if (bVar4)
			{
				func_2308(iParam0, 5);
			}
			break;
		case 5:
			if (!func_1623(Local_4089.f_3395[iParam0]->f_6))
			{
				Var5 = { func_3237(iParam1, iParam0, Local_4089.f_3395[iParam0]->f_6) };
				if (is_string_null_or_empty(&Var5))
				{
					func_2308(iParam0, 8);
					return;
				}
				func_2305(iParam2, &Var5, 291934926, 0, 0, 0, 0, 1);
				func_2308(iParam0, 6);
			}
			break;
		case 6:
			if (!is_scripted_speech_playing(iParam2))
			{
				func_2308(iParam0, 8);
			}
			break;
		case 8:
			break;
		default:
			if (!func_3235(iParam2, sVar3))
			{
				func_2308(iParam0, 0);
				Local_4089.f_3395[iParam0]->f_5 = -1;
				return;
			}
			if (func_850(32768, iParam0) && func_850(65536, iParam0))
			{
				func_2303(iParam0, iParam1, 5);
			}
			if (is_ped_ragdoll(iParam2))
			{
				if (!bVar2 && func_1615(65536, iVar0))
				{
					return;
				}
				func_2303(iParam0, iParam1, 2);
			}
			if ((!bVar2 && !func_1615(4, iVar0)) && func_850(32, iParam0))
			{
				func_2303(iParam0, iParam1, 3);
			}
			break;
	}
}

void func_2015(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_2016(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Local_13.f_257.f_29 - 1))
	{
		if (Local_13.f_257[iVar0]->f_3 == iParam0)
		{
			if (func_850(1024, iVar0))
			{
				func_79(144, 1, 0);
			}
			if (func_850(2048, iVar0))
			{
				func_79(145, 1, 0);
			}
			func_1533(15, iParam0);
			func_3230(iVar0, 6);
		}
		iVar0++;
	}
}

void func_2017(int iParam0)
{
	if (func_850(64, iParam0) || func_850(128, iParam0))
	{
		func_163(&(Local_4089.f_3395[iParam0]->f_2));
	}
	else if (!func_650(Local_4089.f_3395[iParam0]->f_2))
	{
		func_656(&(Local_4089.f_3395[iParam0]->f_2));
	}
}

void func_2018(int iParam0, int iParam1, int iParam2)
{
	func_3238(iParam0, iParam1, iParam2);
	func_3239(iParam0, iParam1, iParam2);
	func_3240(iParam1, iParam2);
	if (func_1623(iParam1))
	{
		func_3241(iParam0, iParam1);
		return;
	}
	if (!func_3242(iParam0, iParam1, iParam2))
	{
		Local_4089.f_3395[iParam0]->f_1 = 1;
	}
	else
	{
		Local_4089.f_3395[iParam0]->f_1 = 0;
		return;
	}
	switch (&Local_4089.f_3395.f_46[iParam1])
	{
		case 474746674:
			if (Local_409.f_1[iParam2]->f_15 != 255)
			{
				Local_4089.f_3395.f_46[iParam1]->f_4 = Local_409.f_1[iParam2]->f_15;
			}
			else if (Local_4089.f_3395.f_46[iParam1]->f_4 != 255 && is_player_dead(int_to_playerindex(Local_4089.f_3395.f_46[iParam1]->f_4)))
			{
				Local_4089.f_3395.f_46[iParam1]->f_4 = 255;
			}
			break;
		case 489869217:
			func_3243(iParam1, iParam2);
			break;
		case 696123198:
			func_3243(iParam1, iParam2);
			if (func_1637(iParam1) == 1)
			{
				Local_4089.f_3395.f_46[iParam1]->f_5 = Local_409.f_1[iParam2]->f_15;
			}
			break;
		case -1156797251:
			if (Local_409.f_1[iParam2]->f_15 != 255)
			{
				Local_4089.f_3395.f_46[iParam1]->f_4 = Local_409.f_1[iParam2]->f_15;
			}
			break;
		case -119424049:
		case 394028191:
			if (Local_13.f_1 != 2)
			{
				return;
			}
			if (Local_409.f_1[iParam2]->f_15 == 255)
			{
				func_163(&(Local_4089.f_3395.f_46[iParam1]->f_6));
				return;
			}
			iVar0 = _0x849bd6c6314793d0(Local_4089.f_6[iParam2]->f_60);
			if (!does_entity_exist(iVar0))
			{
				func_163(&(Local_4089.f_3395.f_46[iParam1]->f_6));
				return;
			}
			vVar3 = { get_entity_coords(Local_4089.f_6[iParam2]->f_60, true, false) };
			if (!get_closest_vehicle_node(vVar3, &vVar6, 1, 3f, 0f))
			{
				if (!func_650(Local_4089.f_3395.f_46[iParam1]->f_6))
				{
					func_656(&(Local_4089.f_3395.f_46[iParam1]->f_6));
				}
				return;
			}
			if (vdist(vVar3, vVar6) >= 18f)
			{
				if (!func_650(Local_4089.f_3395.f_46[iParam1]->f_6))
				{
					func_656(&(Local_4089.f_3395.f_46[iParam1]->f_6));
				}
				return;
			}
			if (&Local_4089.f_3395.f_46[iParam1] == -119424049)
			{
				func_163(&(Local_4089.f_3395.f_46[iParam1]->f_6));
				return;
			}
			fVar2 = vdist(vVar3, _0xf70f00013a62f866(&(Local_4089.f_2190[Local_4089.f_3395.f_46[iParam1]->f_1])));
			if (fVar2 <= IntToFloat(Local_4089.f_3395.f_46[iParam1]->f_5) || Local_4089.f_3395.f_46[iParam1]->f_5 == -1)
			{
				Local_4089.f_3395.f_46[iParam1]->f_5 = floor(fVar2);
				func_163(&(Local_4089.f_3395.f_46[iParam1]->f_6));
				return;
			}
			if (!func_650(Local_4089.f_3395.f_46[iParam1]->f_6))
			{
				func_656(&(Local_4089.f_3395.f_46[iParam1]->f_6));
			}
			break;
		case 1519016685:
		case 2140731242:
			if (&Local_4089.f_3395.f_46[iParam1] == 2140731242 && (func_451(524288, 1) || func_451(262144, 1)))
			{
				func_163(&(Local_4089.f_3395.f_46[iParam1]->f_6));
				return;
			}
			if (Local_409.f_1[iParam2]->f_15 == 255)
			{
				func_163(&(Local_4089.f_3395.f_46[iParam1]->f_6));
				return;
			}
			vVar3 = { get_entity_coords(get_player_ped(Local_409.f_1[iParam2]->f_15), true, false) };
			fVar2 = vdist(vVar3, _0xf70f00013a62f866(&(Local_4089.f_2190[Local_4089.f_3395.f_46[iParam1]->f_1])));
			if (fVar2 <= IntToFloat(Local_4089.f_3395.f_46[iParam1]->f_5) || Local_4089.f_3395.f_46[iParam1]->f_5 == -1)
			{
				Local_4089.f_3395.f_46[iParam1]->f_5 = floor(fVar2);
				func_163(&(Local_4089.f_3395.f_46[iParam1]->f_6));
				return;
			}
			if (!func_650(Local_4089.f_3395.f_46[iParam1]->f_6))
			{
				func_656(&(Local_4089.f_3395.f_46[iParam1]->f_6));
			}
			break;
		case -1320306463:
		case -620369101:
			if (Local_4089.f_3395.f_46[iParam1]->f_4 != Local_13.f_369 && !func_650(Local_4089.f_3395.f_46[iParam1]->f_6))
			{
				func_656(&(Local_4089.f_3395.f_46[iParam1]->f_6));
			}
			Local_4089.f_3395.f_46[iParam1]->f_4 = Local_13.f_369;
			break;
		case -950743530:
			if (func_451(524288, 1) && !func_650(Local_4089.f_3395.f_46[iParam1]->f_6))
			{
				func_656(&(Local_4089.f_3395.f_46[iParam1]->f_6));
			}
			break;
		case -82379973:
			iVar1 = Local_4089.f_3395.f_46[iParam1]->f_4;
			if (!func_1097(iVar1, 1) || Local_409.f_1[iVar1]->f_4 != -428150648)
			{
				if (!func_650(Local_4089.f_3395.f_46[iParam1]->f_6))
				{
					func_656(&(Local_4089.f_3395.f_46[iParam1]->f_6));
				}
				return;
			}
			if (func_1642(iVar1))
			{
				if (!func_650(Local_4089.f_3395.f_46[iParam1]->f_6))
				{
					func_656(&(Local_4089.f_3395.f_46[iParam1]->f_6));
				}
			}
			else
			{
				func_163(&(Local_4089.f_3395.f_46[iParam1]->f_6));
			}
			break;
		case -160110394:
			if (Local_13.f_1 != 2)
			{
				return;
			}
			if (Local_409.f_1[iParam2]->f_15 != 255)
			{
				iVar0 = _0x849bd6c6314793d0(get_player_ped(Local_409.f_1[iParam2]->f_15));
				if (!does_entity_exist(iVar0))
				{
					if (!func_650(Local_4089.f_3395.f_46[iParam1]->f_6))
					{
						func_656(&(Local_4089.f_3395.f_46[iParam1]->f_6));
					}
				}
				else
				{
					func_163(&(Local_4089.f_3395.f_46[iParam1]->f_6));
				}
			}
			break;
	}
}

void func_2019(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		iParam2 = _0x35e5e21f9159849c(iParam1);
	}
	_0x0e3bdeed21beb945(iParam0, iParam2);
	iVar0 = _0x0bdfebcf40a5f7e3(iParam1);
	func_317(func_2890(579690730, iVar0), 1);
	func_317(func_2890(1116283105, iVar0), 1);
}

bool func_2020(var uParam0)
{
	return func_218(uParam0, 1429828708, 0, -801742902, 0, 0, 0, 0, 0);
}

int func_2021(int iParam0)
{
	iVar0 = func_3244(iParam0);
	iVar1 = func_3245(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_2022(iVar1))
		{
			func_3246(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

bool func_2022(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

bool func_2023(int iParam0, int iParam1)
{
	if (!func_613())
	{
		*iParam1 = 0;
		return true;
	}
	if (func_3247(iParam0, 2))
	{
		if (func_3247(iParam0, 3))
		{
			iVar3 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
			if (func_3248(player_id(), &uVar0, &iVar1, 1))
			{
				if (!_network_is_player_index_valid(iVar3))
				{
					return false;
				}
				if (!network_is_player_active(iVar3))
				{
					return false;
				}
				iVar2 = func_3249(iVar3, 1);
				if (iVar2 == iVar1)
				{
					return true;
				}
			}
		}
		else if (func_3250(func_466(iParam0)))
		{
			return false;
		}
	}
	else
	{
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			if (func_3251(iVar4) != iParam0)
			{
			}
			else if (func_3252(iVar4) != 2)
			{
			}
			else
			{
				*iParam1 = iVar4;
				return true;
			}
			iVar4++;
		}
	}
	return false;
}

Vector3 func_2024(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_7.f_1;
}

bool func_2025(int iParam0, int iParam1)
{
	return ((*Global_1128574)[iParam0]->f_48 && iParam1) != 0;
}

bool func_2026(int iParam0)
{
	iVar0 = func_2021(iParam0);
	if (!func_2022(iVar0))
	{
		return false;
	}
	iVar1 = func_1781(iVar0);
	if (!func_1782(iVar1))
	{
		return false;
	}
	if (!func_2023(iVar1, &iVar2))
	{
		return true;
	}
	if (func_3253(iVar2, 2))
	{
		return false;
	}
	return true;
}

void func_2027(int iParam0)
{
	(*Global_1128574)[player_id()]->f_48 = ((*Global_1128574)[player_id()]->f_48 || iParam0);
}

void func_2028(int iParam0)
{
	(*Global_1128574)[player_id()]->f_48 = ((*Global_1128574)[player_id()]->f_48 - ((*Global_1128574)[player_id()]->f_48 && iParam0));
}

void func_2029()
{
	Global_1051439->f_3259 = get_frame_count();
}

void func_2030()
{
	Global_1051439->f_3261 = get_frame_count();
}

bool func_2031(int iParam0, int iParam1)
{
	if (!func_542(iParam0))
	{
		return false;
	}
	return func_80(Global_1132288->f_1[iParam0]->f_61, iParam1);
}

int func_2032(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_3254(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_2033(int iParam0, int iParam1)
{
	return (Global_1107216->f_33[iParam0]->f_3.f_8 && iParam1) != 0;
}

bool func_2034(int iParam0, int iParam1)
{
	return ((*Global_1128574)[iParam0]->f_54 && iParam1) != 0;
}

void func_2035(int iParam0)
{
	(*Global_1128574)[player_id()]->f_54.f_1 = ((*Global_1128574)[player_id()]->f_54.f_1 || iParam0);
}

bool func_2036(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 1);
}

bool func_2037(int iParam0)
{
	return is_ped_male(get_player_ped((*Global_1237665)[iParam0]->f_16));
}

struct<8> func_2038(int iParam0, var uParam1)
{
	if (func_216(&Var8, iParam0) && func_1452(&Var8, uParam1))
	{
		func_217(Var8, 1867873889, &Var0, 1);
	}
	return Var0;
}

struct<8> func_2039(int iParam0)
{
	if (func_216(&Var8, iParam0))
	{
		func_217(Var8, 1867873889, &cVar0, 1);
	}
	else
	{
		StringCopy(&cVar0, "NOT FOUND", 64);
	}
	return cVar0;
}

char* func_2040(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_2041()
{
	if (Local_4089.f_3965 != -1 && func_1744(4, Local_4089.f_3965))
	{
		return Local_4089.f_3965;
	}
	return -1;
}

struct<8> func_2042(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	StringCopy(&cVar5, "INVALID", 64);
	if (func_1167(uParam0, &Var0, iParam1, iParam3, bParam4, iParam5))
	{
		func_3255(uParam0, &Var0, iParam2);
		func_217(Var0, 84801516, &cVar5, 1);
	}
	return cVar5;
}

void func_2043(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	iVar0 = 0;
	func_3256(iParam0, &iVar1, &iVar2);
	iVar3 = func_3257(iParam0, iVar1);
	if (bParam1)
	{
		iVar4 = func_3258(bParam1);
		if (_network_is_player_index_valid(iVar4))
		{
			iVar0 = _0x901e0dc25080c8b9(iVar4);
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((((Local_4089.f_2890.f_53 == iParam0 && Local_4089.f_2890.f_57 == iVar0) && (Local_4089.f_2890.f_58 == iParam3 || !bParam2)) && Local_4089.f_2890.f_59 == iParam4) && Local_4089.f_2890.f_56 == iVar3)
	{
		if (func_3259(Local_4089.f_2890.f_52))
		{
			return;
		}
	}
	if (func_3260(iParam3, iParam4, iVar0, iVar3))
	{
		bVar5 = true;
	}
	func_3261(iParam0, bParam1, bParam2, iParam3, iParam4, bParam5, iVar0, iParam6, iParam7, iVar3, iVar1, iVar2, bVar5);
}

bool func_2044(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_1039(iVar0, iParam0, bParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_2045(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (Local_4089.f_2190[iVar0]->f_7 == iParam1)
		{
			if (_does_volume_exist(&(Local_4089.f_2190[iVar0])) && is_entity_in_volume(iParam0, &(Local_4089.f_2190[iVar0]), true, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_2046()
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		switch (&Local_409.f_1[iVar0])
		{
			case 8:
			case 10:
			case 11:
			case 17:
				return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_2047(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && func_80(Local_920[iVar0][iParam1], iParam0))
		{
			return func_829(iVar0);
		}
		iVar0++;
	}
	return 255;
}

bool func_2048()
{
	if (func_28(118))
	{
		return true;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 <= 32)
	{
		if (Local_4089.f_2190[iVar1]->f_7 == 1729832790)
		{
			bVar0 = true;
			if (func_535(32, iVar1))
			{
				return true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

void func_2049(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_80(Local_4089.f_1622[iVar0]->f_41, 524288))
		{
			if (Local_13.f_82[iVar0]->f_1 == 886638433 && func_1925(Local_13.f_82[iVar0]->f_5))
			{
				*iParam1++;
			}
			else
			{
				*iParam0++;
			}
		}
		iVar0++;
	}
}

bool func_2050(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_1041(iParam0, iParam1);
	if (bParam4 && !func_1392(iParam1))
	{
		if (!func_1651(iParam1, 0, 0, 0, 1))
		{
			return false;
		}
		if (((Local_13.f_82[iParam1]->f_11 == 255 || !network_is_player_a_participant(Local_13.f_82[iParam1]->f_11)) || func_182(network_get_participant_index(Local_13.f_82[iParam1]->f_11)) != iParam0) && !func_453(32, iParam1))
		{
			return false;
		}
	}
	if ((iVar0 != -1 && _does_volume_exist(&(Local_4089.f_2190[iVar0]))) && !is_entity_in_volume(iParam2, &(Local_4089.f_2190[iVar0]), bParam3, 0))
	{
		return false;
	}
	if (func_3262(iParam1))
	{
		return false;
	}
	return true;
}

bool func_2051(int iParam0, int iParam1)
{
	iVar2 = Local_13.f_82[iParam0]->f_3;
	if (func_1392(iParam0))
	{
		iVar2 = func_182(255);
	}
	if (iVar2 == -1)
	{
		return false;
	}
	func_1854(iVar2, iParam0, &uVar0, &iVar1);
	if (iVar1 == -1)
	{
		return false;
	}
	if (!func_3263(1, iParam0, iVar2, iVar1))
	{
		return false;
	}
	if (func_28(110) && Local_13.f_359 == 1)
	{
		return false;
	}
	iVar3 = _0x61914209c36efddb(iParam1);
	switch (iVar3)
	{
		case 5:
		case 7:
		case 8:
		case 9:
			return true;
	}
	return false;
}

void func_2052()
{
	iVar1 = 0;
	while (iVar1 <= 32)
	{
		if (func_933(Local_4089.f_2190[iVar1]->f_7))
		{
			iVar2 = iVar1;
			if (Local_4089.f_2190[iVar1]->f_8 > 4)
			{
				iVar0++;
			}
		else
		{
			}
			else
			{
				iVar1++;
			}
			if (iVar0 <= 0)
			{
				func_2043(1160201638, 0, 1, iVar2, 255, 0, 0, -1);
			}
			else
			{
				func_2043(402516836, 0, 1, iVar2, 255, 0, 0, -1);
			}
		}
	}
}

bool func_2053(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1095(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
			{
				return false;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return false;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return false;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return true;
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
				return true;
			}
		}
	}
	return false;
}

{
	{