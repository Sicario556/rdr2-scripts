void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	iVar0 = 521;
	if (has_force_cleanup_occurred(iVar0))
	{
		func_1(&Local_16, &(Local_16.f_529), &(Local_16.f_754), &(Local_16.f_1718));
	}
	func_2(&Local_16, -1);
	while (true)
	{
		if (func_3(&Local_16))
		{
			func_4(&Local_16, 4);
		}
		else
		{
			func_5(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
			if (func_6(&Local_16) > 0)
			{
				func_7();
				func_8(&(Local_16.f_529));
				func_9(&Local_16, &(Local_16.f_529));
				func_10(&(Local_16.f_529), &(Local_16.f_754));
				func_11(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
			}
		}
		switch (func_6(&Local_16))
		{
			case 0:
				func_12(&Local_16);
				break;
			case 1:
				func_13(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
				break;
			case 2:
				func_14(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
				break;
			case 3:
				func_15(&Local_16);
				break;
			case 4:
				func_16(&Local_16, &(Local_16.f_529), &(Local_16.f_754), &(Local_16.f_1718));
				break;
		}
		func_17(&(Local_16.f_529), &(Local_16.f_754));
		func_18(&(Local_16.f_1718));
		wait(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_19(uParam0, uParam1, uParam2, 0);
	func_20(&(uParam0->f_19));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (&uParam2->f_1[iVar0] == 0)
		{
			func_21(uParam1, uParam2, iVar0, 1, 0);
		}
		else
		{
			func_21(uParam1, uParam2, iVar0, 0, 0);
		}
		iVar0++;
	}
	func_22(uParam1);
	func_23(uParam1);
	func_24(uParam1);
	func_25(uParam1);
	func_26(uParam3);
	func_27(uParam0);
	func_28(0);
	func_29(uParam0, 0);
	func_30();
	func_31(0);
	func_32();
	_0x160825dadf1b04b3();
	func_33();
}

void func_2(var uParam0, int iParam1)
{
	if (func_34(uParam0, 2))
	{
		return;
	}
	func_35(uParam0, 2);
	network_set_script_is_safe_for_network_game();
	set_this_script_can_be_paused(false);
}

bool func_3(var uParam0)
{
	if (!does_entity_exist(player_ped_id()))
	{
		return true;
	}
	if (is_ped_injured(player_ped_id()))
	{
		func_36();
		return true;
	}
	if (func_37(1, 1))
	{
		func_36();
		return true;
	}
	if (func_34(uParam0, 1) && !func_38(uParam0->f_24))
	{
		uParam0->f_46 = func_39(player_ped_id(), uParam0->f_24, 0);
		if (uParam0->f_46 > 15f)
		{
			return true;
		}
	}
	return false;
}

void func_4(var uParam0, int iParam1)
{
	if (func_6(uParam0) != iParam1)
	{
		uParam0->f_10 = iParam1;
	}
}

void func_5(var uParam0, var uParam1, var uParam2)
{
	if (func_34(uParam0, 1))
	{
		return;
	}
	func_35(uParam0, 1);
	func_30();
	func_28(1);
	func_29(uParam0, 1);
	func_40(&(uParam0->f_82), 1);
	func_41(uParam0);
	func_42(uParam1);
	func_43(uParam1, uParam2, -1);
	*uParam0->f_27[0] = { 0f, 0f, 0f };
	*uParam0->f_27[1] = { -20f, 20f, 0f };
	*uParam0->f_27[2] = { -20f, 50f, 0f };
	*uParam0->f_27[3] = { 20f, 50f, 0f };
	*uParam0->f_27[4] = { 20f, 20f, 0f };
	uParam0->f_24 = { Global_35 };
}

int func_6(var uParam0)
{
	return uParam0->f_10;
}

void func_7()
{
	if (!is_entity_dead(player_ped_id()) && func_44())
	{
		Global_1903071->f_35 = _0xf3735acd11acd500(player_ped_id(), &(Global_1903071->f_5));
	}
	else
	{
		Global_1903071->f_5 = 1;
		Global_1903071->f_35 = 0;
	}
}

void func_8(var uParam0)
{
	uParam0->f_4 = { get_entity_coords(player_ped_id(), true, false) };
	uParam0->f_7 = get_entity_heading(player_ped_id());
}

void func_9(var uParam0, var uParam1)
{
	_0x8ec7cd701f872f87(2f, 512, 0, 0, -1, -1);
	_0x8ec7cd701f872f87(0.1f, 1024, 0, 0, -1, -1);
	if (func_6(uParam0) == 0)
	{
		return;
	}
	func_45(uParam0);
	if (func_46())
	{
		func_47(uParam0);
	}
	if (func_48(2))
	{
		func_49(0);
		func_50(2);
	}
	if (func_48(4))
	{
		func_49(1);
		func_50(4);
	}
	if (func_51(&(uParam0->f_79)))
	{
		if (func_52(&(uParam0->f_79)) < 500)
		{
			disable_control_action(0, -1404316431, false);
		}
		else
		{
			func_53(&(uParam0->f_79));
		}
	}
	if (func_44())
	{
		if (!is_entity_dead(player_ped_id()))
		{
			if (Global_1903071->f_35 == 1 && _0x5407b7288d0478b7(player_ped_id(), 256) == 0)
			{
				set_ped_reset_flag(player_ped_id(), 134, true);
			}
			set_ped_max_move_blend_ratio(player_ped_id(), 1.5f);
		}
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
		func_54();
		_0x8910c24b7e0046ec();
		if (Global_1903071->f_35 == 1)
		{
			if (Global_1903071->f_5 > 1 && Global_1903071->f_5 != 12)
			{
				func_55(0);
			}
			if (Global_1903071->f_5 > 1)
			{
				disable_control_action(0, -1879280170, false);
				disable_control_action(0, -1304887797, false);
			}
			if (Global_1903071->f_5 == 12)
			{
				disable_control_action(0, -813019446, false);
			}
		}
		if ((Global_1903071->f_5 > 1 && Global_1903071->f_5 != 6) || func_56(uParam1, 4096))
		{
			disable_control_action(0, -1404316431, false);
		}
		uParam0->f_24 = { Global_35 };
	}
}

void func_10(var uParam0, var uParam1)
{
	if (Global_1903071->f_35 == 1 && (((Global_1903071->f_5 == 4 || Global_1903071->f_5 == 6) || Global_1903071->f_5 == 7) || Global_1903071->f_5 == 10))
	{
		func_57(uParam0);
		func_58(uParam0);
		if (Global_1903071->f_5 == 7)
		{
			func_59(uParam0, uParam1);
		}
	}
	else
	{
		uParam0->f_12 = -99999f;
		uParam0->f_13 = -99999f;
		uParam0->f_14 = -99999f;
		uParam0->f_15 = -99999f;
		uParam0->f_16 = -99999f;
		uParam0->f_17 = -99999f;
	}
}

void func_11(var uParam0, var uParam1, var uParam2)
{
	func_60(uParam0, uParam2);
	uParam2->f_797 = 0;
	uParam2->f_798 = 0;
	iVar54 = 0;
	iVar54 = 0;
	while (iVar54 < 30)
	{
		bVar53 = is_entity_dead(&(uParam2->f_123[iVar54]));
		if (bVar53 == 0)
		{
			iVar0++;
			if (func_61(&(uParam2->f_247[iVar54])))
			{
				uVar33[&uParam2->f_247[iVar54]] = &uVar33[&uParam2->f_247[iVar54]] + 1;
				if (&uParam2->f_340[iVar54] == 1)
				{
					uVar17[&uParam2->f_247[iVar54]] = &uVar17[&uParam2->f_247[iVar54]] + 1;
				}
				else
				{
					uVar1[&uParam2->f_247[iVar54]] = &uVar1[&uParam2->f_247[iVar54]] + 1;
				}
				if (func_62(&(uParam2->f_247[iVar54])))
				{
					iVar51++;
				}
				else
				{
					iVar52++;
				}
			}
			if (&uParam2->f_1[iVar54] == 1)
			{
				iVar49++;
			}
			else
			{
				iVar50++;
			}
		}
		if ((&uParam2->f_154[iVar54] >= 3 && &uParam2->f_154[iVar54] < 10) && bVar53 == 1)
		{
			func_21(uParam1, uParam2, iVar54, 0, 0);
		}
		switch (&uParam2->f_154[iVar54])
		{
			case 0:
				func_63(uParam2, iVar54);
				break;
			case 1:
				func_64(uParam0, uParam2, iVar54);
				break;
			case 2:
				func_65(uParam1, uParam2, iVar54);
				break;
			case 3:
				func_66(uParam1, uParam2, iVar54);
				break;
			case 4:
				func_67(uParam0, uParam1, uParam2, iVar54);
				break;
			case 5:
				func_68(uParam0, uParam1, uParam2, iVar54);
				break;
			case 6:
			case 7:
				func_69(uParam0, uParam1, uParam2, iVar54);
				break;
			case 8:
				func_70(uParam1, uParam2, iVar54);
				break;
			case 9:
				func_71(uParam2, iVar54);
				break;
			case 10:
				func_72(uParam1, uParam2, iVar54);
				break;
		}
		iVar54++;
	}
	uParam2->f_471 = iVar0;
	iVar55 = 0;
	iVar55 = 0;
	while (iVar55 < 15)
	{
		uParam2->f_472[iVar55] = &uVar1[iVar55];
		uParam2->f_488[iVar55] = &uVar17[iVar55];
		uParam2->f_504[iVar55] = &uVar33[iVar55];
		iVar55++;
	}
	uParam2->f_520 = iVar49;
	uParam2->f_521 = iVar50;
	uParam2->f_522 = iVar51;
	uParam2->f_523 = iVar52;
	uParam2->f_799++;
	if (uParam2->f_799 >= 30)
	{
		uParam2->f_799 = 0;
	}
}

void func_12(var uParam0)
{
	if (!func_34(uParam0, 1))
	{
		return;
	}
	func_73();
	if (func_74(uParam0))
	{
		func_4(uParam0, 1);
	}
}

void func_13(var uParam0, var uParam1, var uParam2)
{
	if (func_44())
	{
		func_19(uParam0, uParam1, uParam2, 1);
		func_4(uParam0, 2);
	}
}

void func_14(var uParam0, var uParam1, var uParam2)
{
	if (func_75(uParam0, uParam1, uParam2))
	{
		func_19(uParam0, uParam1, uParam2, 0);
		func_4(uParam0, 3);
	}
	else
	{
		func_76(uParam0, uParam1, uParam2);
	}
}

void func_15(var uParam0)
{
	func_4(uParam0, 1);
}

void func_16(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_1(uParam0, uParam1, uParam2, uParam3);
}

void func_17(var uParam0, var uParam1)
{
	if ((!is_entity_dead(player_ped_id()) && func_44()) && Global_1903071->f_35 == 1)
	{
		iVar0 = func_77(uParam0);
		if (func_78(uParam1, iVar0))
		{
			Global_1903071->f_5.f_7 = 0;
			Global_1903071->f_5.f_8 = func_79(uParam0, uParam1);
			Global_1903071->f_5.f_9 = 0f;
			Global_1903071->f_5.f_18 = &uParam1->f_309[iVar0];
			if (uParam0->f_163 == 0)
			{
				Global_1903071->f_5.f_19 = uParam1->f_962;
			}
			else
			{
				Global_1903071->f_5.f_19 = uParam1->f_963;
			}
			Global_1903071->f_5.f_17 = 0f;
			Global_1903071->f_5.f_13 = 0f;
			Global_1903071->f_5.f_20 = 0f;
			Global_1903071->f_5.f_21 = 0f;
		}
		else if (func_80(uParam1, iVar0))
		{
			Global_1903071->f_5.f_7 = &uParam1->f_123[iVar0];
			Global_1903071->f_5.f_8 = func_79(uParam0, uParam1);
			Global_1903071->f_5.f_9 = uParam0->f_202;
			Global_1903071->f_5.f_18 = &uParam1->f_309[iVar0];
			if (func_81(uParam1, iVar0))
			{
				Global_1903071->f_5.f_17 = 1f;
			}
			else
			{
				Global_1903071->f_5.f_17 = 0f;
			}
			Global_1903071->f_5.f_13 = func_82(uParam0);
			Global_1903071->f_5.f_20 = func_83(uParam0);
			Global_1903071->f_5.f_21 = func_84(uParam0);
		}
		else
		{
			Global_1903071->f_5.f_7 = 0;
			Global_1903071->f_5.f_8 = 0f;
			Global_1903071->f_5.f_9 = 0f;
			Global_1903071->f_5.f_17 = 0f;
			Global_1903071->f_5.f_13 = 0f;
			Global_1903071->f_5.f_20 = 0f;
			Global_1903071->f_5.f_21 = 0f;
		}
		_0xf3735acd11acd501(player_ped_id(), &(Global_1903071->f_5));
	}
}

void func_18(int* iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (iVar1 != player_id())
		{
			if (((!is_bit_set(*iParam0, iVar0) && func_85(iVar1, 1, 1)) && !is_entity_dead(get_player_ped(iVar1))) && func_86(get_player_ped(iVar1)))
			{
				set_bit(iParam0, iVar0);
			}
			if (is_bit_set(*iParam0, iVar0))
			{
				if (func_85(iVar1, 1, 1) && func_86(get_player_ped(iVar1)))
				{
					func_87(iParam0->f_1[iVar0], get_player_ped(iVar1), iVar0);
				}
				else
				{
					clear_bit(iParam0, iVar0);
					func_88(iParam0->f_1[iVar0], iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_19(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 1)
	{
		func_89(13);
		func_90();
		func_91();
		func_92();
		func_93(&(uParam0->f_12));
		func_93(&(uParam0->f_15));
		if (is_waypoint_active())
		{
			set_waypoint_off();
		}
		func_25(uParam1);
		func_94(1);
		func_95(1);
		func_96(uParam1, 1);
		func_97(uParam0);
		func_98();
		func_99(uParam0, 1);
		func_100(uParam0, uParam1);
		func_101();
		func_32();
		func_103(func_102());
		set_ped_config_flag(player_ped_id(), 174, true);
		set_random_trains(false);
		uParam0->f_528 = _0x5952dfa38fa529fe();
	}
	else
	{
		func_104(0);
		func_105();
		func_106(0, 0);
		if (!func_107(&(uParam0->f_82[55])))
		{
			func_108();
		}
		func_40(&(uParam0->f_82), 1);
		func_47(uParam0);
		func_20(&(uParam0->f_19));
		func_109(uParam0, 0);
		func_99(uParam0, 0);
		func_95(0);
		func_110(uParam1);
		func_111(uParam0, uParam1, uParam2, 0, 0);
		func_25(uParam1);
		func_94(0);
		uParam0->f_24 = { Global_35 };
		uParam0->f_18 = 0;
		func_112(uParam0);
		func_113(uParam0);
		_0xa33f5069b0cb89b8();
		func_114(uParam1, 0);
		set_ped_config_flag(player_ped_id(), 174, false);
		set_random_trains(true);
	}
}

void func_20(var uParam0)
{
	if (uParam0->f_2 == 0)
	{
		return;
	}
	if (_uiflowblock_is_loaded(uParam0->f_3))
	{
		_uistatemachine_destroy(-1295789154);
		_uiflowblock_release(&(uParam0->f_3));
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	_databinding_remove_data_entry(uParam0->f_4);
}

void func_21(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!is_entity_dead(&(uParam1->f_123[iParam2])))
	{
		if (!_0x88ad6cc10d8d35b2(&(uParam1->f_123[iParam2])) || !does_entity_belong_to_this_script(&(uParam1->f_123[iParam2]), false))
		{
			set_entity_as_mission_entity(&(uParam1->f_123[iParam2]), true, true);
		}
		set_ped_reset_flag(&(uParam1->f_123[iParam2]), 169, false);
		set_entity_invincible(&(uParam1->f_123[iParam2]), false);
		set_ped_config_flag(&(uParam1->f_123[iParam2]), 17, false);
		if (func_48(16))
		{
			set_entity_proofs(&(uParam1->f_123[iParam2]), 0, false);
		}
	}
	decor_remove(&(uParam1->f_123[iParam2]), "Fish_Prevent_Tasking");
	decor_remove(&(uParam1->f_123[iParam2]), "Fish_Weight");
	iVar0 = func_115(uParam0, iParam2);
	if (iVar0 != -1)
	{
		func_43(uParam0, uParam1, -1);
	}
	if (&uParam1->f_371[iParam2] == 1)
	{
		iParam3 = 0;
	}
	if (does_entity_exist(&(uParam1->f_123[iParam2])))
	{
		if (iParam3 == 1 && iParam4 == 1)
		{
			func_116(uParam1->f_123[iParam2]);
		}
		else
		{
			func_117(uParam1->f_123[iParam2], 1, 1, 1);
		}
	}
	if (&uParam1->f_216[iParam2] != 0)
	{
		set_model_as_no_longer_needed(&(uParam1->f_216[iParam2]));
	}
	func_118(uParam1, iParam2);
}

void func_22(var uParam0)
{
	if (!_0x84848e1c0fc67dbb(uParam0->f_69))
	{
		_0x3210bcb36af7621b(uParam0->f_69);
	}
}

void func_23(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!_0x84848e1c0fc67dbb(&(uParam0->f_62[iVar0])))
		{
			_0x3210bcb36af7621b(&(uParam0->f_62[iVar0]));
		}
		iVar0++;
	}
}

void func_24(var uParam0)
{
	if (!_0x84848e1c0fc67dbb(uParam0->f_68))
	{
		_0x3210bcb36af7621b(uParam0->f_68);
	}
}

void func_25(var uParam0)
{
	func_119(&(uParam0->f_8));
	uParam0->f_8 = 0;
}

void func_26(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_88(uParam0->f_1[iVar0], iVar0);
		iVar0++;
	}
}

void func_27(var uParam0)
{
	_text_database_delete("MGFSH");
	remove_ptfx_asset();
	release_script_audio_bank();
	_0x531a78d6bf27014b(*uParam0);
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		_0x247f86595d396344(1493307657);
		set_spawner_info_priority(953996926, 313480217, 3);
		set_spawner_info_priority(953996926, -1227780828, 3);
		set_spawner_info_priority(953996926, -1604520857, 3);
		set_spawner_info_priority(953996926, -1688703117, 3);
		set_spawner_info_priority(753476326, -1510975932, 3);
		set_spawner_info_priority(753476326, 168569674, 3);
		set_spawner_info_priority(753476326, -1725785792, 3);
		set_spawner_info_priority(753476326, -1732578984, 3);
		set_spawner_info_priority(1097366826, 611346020, 3);
		set_spawner_info_priority(1097366826, -1266430074, 3);
		set_spawner_info_priority(1097366826, 190319331, 3);
		set_spawner_info_priority(-1095210956, -1095210956, 3);
		set_spawner_info_priority(-1482332679, -1482332679, 3);
		set_spawner_info_priority(1404193962, 1404193962, 3);
		set_spawner_info_priority(-252502713, -252502713, 3);
		set_spawner_info_priority(207807619, 207807619, 3);
		set_spawner_info_priority(-1477335493, -1477335493, 3);
		set_spawner_info_priority(-1738466917, -1738466917, 3);
		set_spawner_info_priority(-1839535975, -1839535975, 3);
		set_spawner_info_priority(638269552, 638269552, 3);
		set_spawner_info_priority(-1881610067, -1563248673, 3);
		set_spawner_info_priority(-1881610067, 1729337451, 3);
		set_spawner_info_priority(-1881610067, 1031264513, 3);
		set_spawner_info_priority(809951616, -1563248673, 3);
		set_spawner_info_priority(809951616, 1729337451, 3);
		set_spawner_info_priority(809951616, 1031264513, 3);
		set_spawner_info_priority(718901240, -1563248673, 3);
		set_spawner_info_priority(718901240, -1387587743, 3);
		set_spawner_info_priority(718901240, 1119319615, 3);
	}
	else
	{
		clear_spawner_info_priority(953996926, 313480217);
		clear_spawner_info_priority(953996926, -1227780828);
		clear_spawner_info_priority(953996926, -1604520857);
		clear_spawner_info_priority(953996926, -1688703117);
		clear_spawner_info_priority(753476326, -1510975932);
		clear_spawner_info_priority(753476326, 168569674);
		clear_spawner_info_priority(753476326, -1725785792);
		clear_spawner_info_priority(753476326, -1732578984);
		clear_spawner_info_priority(1097366826, 611346020);
		clear_spawner_info_priority(1097366826, -1266430074);
		clear_spawner_info_priority(1097366826, 190319331);
		clear_spawner_info_priority(-1095210956, -1095210956);
		clear_spawner_info_priority(-1482332679, -1482332679);
		clear_spawner_info_priority(1404193962, 1404193962);
		clear_spawner_info_priority(-252502713, -252502713);
		clear_spawner_info_priority(207807619, 207807619);
		clear_spawner_info_priority(-1477335493, -1477335493);
		clear_spawner_info_priority(-1738466917, -1738466917);
		clear_spawner_info_priority(-1839535975, -1839535975);
		clear_spawner_info_priority(638269552, 638269552);
		clear_spawner_info_priority(-1881610067, -1563248673);
		clear_spawner_info_priority(-1881610067, 1729337451);
		clear_spawner_info_priority(-1881610067, 1031264513);
		clear_spawner_info_priority(809951616, -1563248673);
		clear_spawner_info_priority(809951616, 1729337451);
		clear_spawner_info_priority(809951616, 1031264513);
		clear_spawner_info_priority(718901240, -1563248673);
		clear_spawner_info_priority(718901240, -1387587743);
		clear_spawner_info_priority(718901240, 1119319615);
		_0x324ab2a68ad8aee5();
	}
}

void func_29(var uParam0, int iParam1)
{
	iVar0 = 31;
	if (iParam1 == 1)
	{
		if (!func_34(uParam0, 8))
		{
			reserve_network_client_mission_peds(iVar0);
			_0xed9582b3da8f02b4(iVar0);
			func_35(uParam0, 8);
		}
	}
	else if (func_34(uParam0, 8))
	{
		_0x7d4e70a67a651c71(iVar0);
		func_120(uParam0, 8);
	}
}

void func_30()
{
	func_50(1);
	Global_1903071->f_39 = 0;
	Global_1903071->f_41 = 0;
	Global_1903071->f_43 = 0;
	Global_1903071->f_36 = 0;
	Global_1903071->f_2 = 0;
	Global_1903071->f_5.f_6 = 0;
	Global_1903071->f_5.f_5 = 0;
}

void func_31(int iParam0)
{
	if (!has_ped_got_weapon(Global_34, -1415022764, 0, false))
	{
		return;
	}
	Global_1903071->f_4 = iParam0;
}

void func_32()
{
	func_121(4);
	func_50(2);
}

void func_33()
{
	terminate_this_thread();
}

bool func_34(var uParam0, int iParam1)
{
	return func_122(uParam0->f_11, iParam1);
}

void func_35(var uParam0, int iParam1)
{
	if (!func_34(uParam0, iParam1))
	{
		func_123(&(uParam0->f_11), iParam1);
	}
}

void func_36()
{
	if (is_screen_faded_in())
	{
		set_current_ped_weapon(player_ped_id(), -1569615261, false, 0, false, false);
	}
	else
	{
		set_current_ped_weapon(player_ped_id(), -1569615261, true, 0, false, false);
	}
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

bool func_38(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_39(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_40(var uParam0, int iParam1)
{
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 73)
	{
		iVar0 = iVar1;
		if (iParam1 == 1 || !func_124(iVar0))
		{
			func_125(uParam0, iVar0);
		}
		iVar1++;
	}
}

void func_41(var uParam0)
{
	*uParam0 = "MGFSH_Sounds";
	uParam0->f_1 = "Minigame_Fishing_Scenes";
	uParam0->f_2 = "None";
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_4 = "Rod_Equipped";
	uParam0->f_5 = "Cast";
	uParam0->f_6 = "Reel_In";
	uParam0->f_7 = "Fish_On_Line";
	uParam0->f_8 = "Snap";
	uParam0->f_9 = "Caught";
}

void func_42(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_57[iVar0] = get_sound_id();
		uParam0->f_62[iVar0] = get_sound_id();
		iVar0++;
	}
	uParam0->f_67 = get_sound_id();
	uParam0->f_68 = get_sound_id();
	uParam0->f_69 = get_sound_id();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_70[iVar0] = get_sound_id();
		iVar0++;
	}
}

void func_43(var uParam0, var uParam1, int iParam2)
{
	if (func_77(uParam0) != iParam2)
	{
		uParam0->f_2 = iParam2;
		if (func_126(iParam2) && !is_entity_dead(&(uParam1->f_123[iParam2])))
		{
			Global_1903071->f_37 = &uParam1->f_247[iParam2];
			Global_1903071->f_38 = &uParam1->f_278[iParam2];
		}
		else
		{
			Global_1903071->f_38 = 0f;
		}
	}
}

bool func_44()
{
	bVar1 = get_current_ped_weapon(player_ped_id(), &iVar0, true, 0, true);
	return (bVar1 == 1 && iVar0 == -1415022764);
}

void func_45(var uParam0)
{
	if (((func_127() != 0 || func_128() != 0) || func_129() != 0) || func_130() != 0)
	{
		func_93(&(uParam0->f_12));
	}
	if (func_131())
	{
		func_93(&(uParam0->f_15));
	}
}

bool func_46()
{
	return Global_1896738->f_382;
}

void func_47(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_132(uParam0, iVar0);
		iVar0++;
	}
}

bool func_48(int iParam0)
{
	return func_122(Global_1903071->f_1, iParam0);
}

void func_49(int iParam0)
{
	if (func_48(8))
	{
		_databinding_write_data_bool(Global_1903071->f_47, iParam0);
	}
}

void func_50(int iParam0)
{
	if (func_48(iParam0))
	{
		func_133(&(Global_1903071->f_1), iParam0);
	}
}

bool func_51(var uParam0)
{
	return func_134(*uParam0, 1);
}

int func_52(var uParam0)
{
	if (!func_51(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_135(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_136() - round((uParam0->f_1 * 1000f)));
}

void func_53(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_54()
{
	Global_1904651->f_8685 = 1;
}

void func_55(bool bParam0)
{
	if (bParam0)
	{
		func_137(4);
	}
	func_137(2);
	set_bit(&(Global_1957959->f_1), 0);
}

bool func_56(var uParam0, int iParam1)
{
	return func_122(uParam0->f_1, iParam1);
}

void func_57(var uParam0)
{
	if (does_entity_exist(func_138()))
	{
		vVar2 = { func_139() };
		bVar5 = test_vertical_probe_against_all_water(func_140(vVar2, 1092616192), 0, &fVar0);
		bVar6 = get_ground_z_for_3d_coord(func_140(vVar2, 1092616192), &fVar1, false);
		if (bVar5 == 1 && bVar6 == 1)
		{
			uParam0->f_12 = (vVar2.z - fVar0);
			uParam0->f_13 = (fVar0 - fVar1);
		}
		else
		{
			uParam0->f_12 = -99999f;
			uParam0->f_13 = -99999f;
		}
	}
}

void func_58(var uParam0)
{
	if (does_entity_exist(func_141()))
	{
		vVar2 = { func_142() };
		bVar5 = test_vertical_probe_against_all_water(func_140(vVar2, 1092616192), 0, &fVar0);
		bVar6 = get_ground_z_for_3d_coord(func_140(vVar2, 1092616192), &fVar1, false);
		if (bVar5 == 1 && bVar6 == 1)
		{
			uParam0->f_14 = (vVar2.z - fVar0);
			uParam0->f_15 = (fVar0 - fVar1);
		}
		else
		{
			uParam0->f_14 = -99999f;
			uParam0->f_15 = -99999f;
		}
	}
}

void func_59(var uParam0, var uParam1)
{
	iVar3 = func_77(uParam0);
	if (func_126(iVar3) && !is_entity_dead(&(uParam1->f_123[iVar3])))
	{
		vVar0 = { func_143(uParam1, iVar3) };
	}
	if (!func_38(vVar0))
	{
		bVar6 = test_vertical_probe_against_all_water(func_140(vVar0, 1092616192), 0, &fVar4);
		bVar7 = get_ground_z_for_3d_coord(func_140(vVar0, 1092616192), &fVar5, false);
		if (bVar6 == 1 && bVar7 == 1)
		{
			uParam0->f_16 = (vVar0.z - fVar4);
			uParam0->f_17 = (fVar4 - fVar5);
		}
		else
		{
			uParam0->f_16 = -99999f;
			uParam0->f_17 = -99999f;
		}
	}
}

void func_60(var uParam0, var uParam1)
{
	if (func_34(uParam0, 4))
	{
		return;
	}
	func_35(uParam0, 4);
	uParam1->f_470 = 54.25f;
	func_144(&(uParam1->f_800));
	func_93(&(uParam1->f_436));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_118(uParam1, iVar0);
		iVar0++;
	}
}

bool func_61(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 14);
}

bool func_62(int iParam0)
{
	if (((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11)
	{
		return true;
	}
	return false;
}

void func_63(var uParam0, int iParam1)
{
	func_145(uParam0, iParam1, 2);
}

void func_64(var uParam0, var uParam1, int iParam2)
{
	if (func_146(uParam0, uParam1, iParam2))
	{
		func_145(uParam1, iParam2, 3);
	}
}

void func_65(var uParam0, var uParam1, int iParam2)
{
	if (func_147(uParam0, uParam1, iParam2))
	{
		func_145(uParam1, iParam2, 3);
	}
	else if (func_148(uParam1, iParam2) && func_149(uParam1))
	{
		func_93(&(uParam1->f_436));
		func_145(uParam1, iParam2, 1);
	}
}

void func_66(var uParam0, var uParam1, int iParam2)
{
	if (func_150(uParam1, iParam2))
	{
		func_151(uParam0, uParam1, iParam2);
	}
}

void func_67(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_148(uParam2, iParam3) || !func_152(uParam2, iParam3))
	{
		return;
	}
	if (func_153(uParam1, uParam2->f_123[iParam3]))
	{
		func_145(uParam2, iParam3, 10);
	}
	else if (func_154(uParam1, uParam2, iParam3))
	{
		func_155(uParam0, uParam1, uParam2, iParam3);
	}
	else if (((!func_156(&(uParam2->f_123[iParam3]), 1139527981) && !func_156(&(uParam2->f_123[iParam3]), 518218985)) && !func_156(&(uParam2->f_123[iParam3]), -773337285)) && !is_ped_fleeing(&(uParam2->f_123[iParam3])))
	{
		set_blocking_of_non_temporary_events(&(uParam2->f_123[iParam3]), false);
		task_animal_unalerted(&(uParam2->f_123[iParam3]), -1, 0, 0, 0);
	}
}

void func_68(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_115(uParam1, iParam3);
	if (iVar0 == -1)
	{
		func_155(uParam0, uParam1, uParam2, iParam3);
	}
	else if (iVar0 != -1 && !func_156(&(uParam2->f_123[iParam3]), 1227113341))
	{
		if (!_0x88ad6cc10d8d35b2(&(uParam2->f_123[iParam3])) || !does_entity_belong_to_this_script(&(uParam2->f_123[iParam3]), false))
		{
			set_entity_as_mission_entity(&(uParam2->f_123[iParam3]), true, true);
		}
		set_blocking_of_non_temporary_events(&(uParam2->f_123[iParam3]), true);
		clear_ped_tasks(&(uParam2->f_123[iParam3]), 1, 0);
		task_go_to_entity(&(uParam2->f_123[iParam3]), func_141(), -1, 0f, 2f, 0f, 0);
	}
}

void func_69(var uParam0, var uParam1, var uParam2, int iParam3)
{
	set_ped_reset_flag(&(uParam2->f_123[iParam3]), 64, true);
	uParam1->f_224++;
	iVar0 = func_115(uParam1, iParam3);
	if (iVar0 != -1 && Global_1903071->f_5 == 7)
	{
		func_157(uParam0, uParam1, uParam2, iParam3);
		func_158(uParam1, uParam2, iParam3);
		func_159(uParam0, uParam1, uParam2, iParam3);
		func_160(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_70(var uParam0, var uParam1, int iParam2)
{
	if (is_entity_dead(&(uParam1->f_123[iParam2])))
	{
		func_145(uParam1, iParam2, 10);
		return;
	}
	if ((&uParam1->f_439[iParam2] == 0 && func_161(uParam1->f_524[iParam2]) >= 6f) || (&uParam1->f_439[iParam2] == 1 && func_161(uParam1->f_524[iParam2]) >= 20f))
	{
		clear_ped_tasks(&(uParam1->f_123[iParam2]), 1, 0);
		if (_0x88ad6cc10d8d35b2(&(uParam1->f_123[iParam2])) || does_entity_belong_to_this_script(&(uParam1->f_123[iParam2]), false))
		{
			decor_set_bool(&(uParam1->f_123[iParam2]), "Fish_Prevent_Tasking", false);
		}
		func_151(uParam0, uParam1, iParam2);
	}
	else if (!func_51(uParam1->f_615[iParam2]) || func_52(uParam1->f_615[iParam2]) >= 250)
	{
		func_93(uParam1->f_615[iParam2]);
		if ((!func_156(&(uParam1->f_123[iParam2]), 518218985) && !func_156(&(uParam1->f_123[iParam2]), -773337285)) && !is_ped_fleeing(&(uParam1->f_123[iParam2])))
		{
			set_blocking_of_non_temporary_events(&(uParam1->f_123[iParam2]), true);
			clear_ped_tasks(&(uParam1->f_123[iParam2]), 1, 0);
			if (&uParam1->f_439[iParam2] == 1)
			{
				task_smart_flee_coord(&(uParam1->f_123[iParam2]), *uParam1->f_706[iParam2], 40f, 20000, 8, 1077936128);
			}
			else
			{
				task_smart_flee_coord(&(uParam1->f_123[iParam2]), *uParam1->f_706[iParam2], 10f, 6000, 8, 1077936128);
			}
		}
	}
}

void func_71(var uParam0, int iParam1)
{
	if (func_156(&(uParam0->f_123[iParam1]), 1227113341))
	{
		clear_ped_tasks(&(uParam0->f_123[iParam1]), 1, 0);
	}
	set_ped_reset_flag(&(uParam0->f_123[iParam1]), 64, true);
}

void func_72(var uParam0, var uParam1, int iParam2)
{
	if (func_148(uParam1, iParam2))
	{
		func_21(uParam0, uParam1, iParam2, 1, 0);
	}
}

void func_73()
{
	_text_database_request("MGFSH");
	request_ptfx_asset();
}

bool func_74(var uParam0)
{
	if (!func_34(uParam0, 1))
	{
		return false;
	}
	if ((!is_string_null_or_empty("MGFSH") && _does_text_database_exist("MGFSH")) && !_text_database_has_loaded("MGFSH"))
	{
		return false;
	}
	if (!has_ptfx_asset_loaded())
	{
		return false;
	}
	if (!_0xd9130842d7226045(*uParam0, 1))
	{
		return false;
	}
	if (!_0x5e420ff293ee5472())
	{
	}
	return true;
}

bool func_75(var uParam0, var uParam1, var uParam2)
{
	if (!func_44())
	{
		func_162(uParam1, uParam2);
		return true;
	}
	if (!does_entity_exist(func_163()))
	{
		return true;
	}
	if (is_ped_in_combat(player_ped_id(), 0))
	{
		func_162(uParam1, uParam2);
		if (func_44())
		{
			set_current_ped_weapon(player_ped_id(), -1569615261, false, 0, false, false);
		}
		return true;
	}
	if (Global_1903071->f_3 == 0)
	{
		if (func_44())
		{
			set_current_ped_weapon(player_ped_id(), -1569615261, false, 0, false, false);
		}
		return true;
	}
	if (Global_1940144->f_25 == 1)
	{
		Global_1940144->f_25 = 0;
		func_93(&(uParam0->f_79));
		if (func_44())
		{
			set_current_ped_weapon(player_ped_id(), -1569615261, false, 0, false, false);
		}
		return true;
	}
	return false;
}

void func_76(var uParam0, var uParam1, var uParam2)
{
	func_164(uParam1, uParam2);
	switch (Global_1903071->f_5)
	{
		case 0:
			func_165(uParam0);
			break;
		case 1:
			func_166(uParam0, uParam1, uParam2);
			break;
		case 2:
			func_167(uParam0, uParam1, uParam2);
			break;
		case 3:
			func_168(uParam0);
			break;
		case 4:
			func_169(uParam0, uParam1);
			break;
		case 5:
			func_170();
			break;
		case 6:
			func_171(uParam0, uParam1, uParam2);
			break;
		case 7:
			func_172(uParam0, uParam1, uParam2);
			break;
		case 8:
			func_173(uParam0);
			break;
		case 9:
			func_174(uParam0, uParam1, uParam2);
			break;
		case 10:
			func_175(uParam0, uParam1, uParam2);
			break;
		case 11:
			func_176(uParam0, uParam1, uParam2);
			break;
		case 12:
			func_177(uParam0, uParam1, uParam2);
			break;
		case 13:
			func_178(uParam0);
			break;
	}
	_uiprompt_disable_prompt_type_this_frame(9);
	func_99(uParam0, 1);
	func_179(uParam0);
	if (is_control_just_pressed(0, -1304887797))
	{
		func_180(32768, 1);
	}
	if (!func_181())
	{
		disable_control_action(0, 1287709438, false);
	}
}

int func_77(var uParam0)
{
	if (uParam0->f_2 >= 30)
	{
	}
	return uParam0->f_2;
}

bool func_78(var uParam0, int iParam1)
{
	if (func_182(1))
	{
		return false;
	}
	if ((Global_1903071->f_5 == 6 && func_126(iParam1)) && !is_entity_dead(&(uParam0->f_123[iParam1])))
	{
		return true;
	}
	return false;
}

float func_79(var uParam0, var uParam1)
{
	iVar0 = func_77(uParam0);
	if (!func_126(iVar0))
	{
		return 0f;
	}
	return (&uParam1->f_278[iVar0] / uParam1->f_470);
}

bool func_80(var uParam0, int iParam1)
{
	if (((Global_1903071->f_5 == 7 || Global_1903071->f_5 == 12) && func_126(iParam1)) && !is_entity_dead(&(uParam0->f_123[iParam1])))
	{
		return true;
	}
	return false;
}

bool func_81(var uParam0, int iParam1)
{
	return &uParam0->f_154[iParam1] == 6;
}

float func_82(var uParam0)
{
	return func_183((to_float(uParam0->f_172) / 200f), 0f, 1f);
}

float func_83(var uParam0)
{
	return func_183((to_float(uParam0->f_173) / 200f), 0f, 1f);
}

float func_84(var uParam0)
{
	return func_183((to_float(uParam0->f_174) / 200f), 0f, 1f);
}

bool func_85(int iParam0, bool bParam1, bool bParam2)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (!is_player_playing(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (network_is_in_session())
		{
			iVar0 = iParam0;
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return false;
			}
			if (!&Global_1051215->f_1[iVar0])
			{
				return false;
			}
		}
	}
	return true;
}

bool func_86(int iParam0)
{
	bVar1 = get_current_ped_weapon(iParam0, &iVar0, true, 0, true);
	return (bVar1 == 1 && iVar0 == -1415022764);
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_30 = _0xf3735acd11acd500(iParam1, uParam0);
	func_184(uParam0, iParam1);
	switch (*uParam0)
	{
		case 0:
			func_185(uParam0, iParam1, iParam2);
			break;
		case 1:
			func_186(uParam0, iParam1, iParam2);
			break;
		case 2:
			func_187(uParam0, iParam1, iParam2);
			break;
		case 3:
			func_188(uParam0, iParam1, iParam2);
			break;
		case 4:
			func_189(uParam0, iParam1, iParam2);
			break;
		case 5:
			func_190(uParam0, iParam1, iParam2);
			break;
		case 6:
			func_191(uParam0, iParam1, iParam2);
			break;
		case 7:
			func_192(uParam0, iParam1, iParam2);
			break;
		case 8:
			func_193(uParam0, iParam1, iParam2);
			break;
		case 9:
			func_194(uParam0, iParam1, iParam2);
			break;
		case 10:
			func_195(uParam0, iParam1, iParam2);
			break;
		case 11:
			func_196(uParam0, iParam1, iParam2);
			break;
		case 12:
			func_197(uParam0, iParam1, iParam2);
			break;
		case 13:
			func_198(uParam0, iParam1, iParam2);
			break;
	}
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_30 = 0;
	func_199(uParam0);
}

void func_89(int iParam0)
{
	if ((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_200() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_201(Global_1893587->f_2);
	Global_1900688->f_1 = 3;
	Global_1900688->f_2 = 0;
	Global_1900688->f_7 = iVar0;
	Global_1900688->f_8 = iParam0;
	Global_1900688->f_9 = iVar1;
	if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
	{
		func_202(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
	}
	else if (Global_1900688->f_11 != -1)
	{
		func_202(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
	}
}

void func_90()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		sVar1 = func_203(iVar0);
		if (!is_string_null_or_empty(sVar1))
		{
			decor_set_float(player_ped_id(), sVar1, 0f);
		}
		iVar0++;
	}
}

void func_91()
{
	iVar0 = func_204();
	if (func_205(iVar0))
	{
		func_206(-1, -1, iVar0, 1, -1, 0);
	}
}

void func_92()
{
	Global_1903071->f_39 = 0;
	Global_1903071->f_41 = 0;
	Global_1903071->f_43 = 0;
	Global_1903071->f_36 = 0;
}

void func_93(var uParam0)
{
	func_207(uParam0, 0f);
}

void func_94(int iParam0)
{
	if (iParam0 == 1)
	{
		set_ragdoll_blocking_flags(player_ped_id(), 16);
		set_ragdoll_blocking_flags(player_ped_id(), 8192);
		set_ragdoll_blocking_flags(player_ped_id(), 16384);
		set_ragdoll_blocking_flags(player_ped_id(), 32768);
		set_ragdoll_blocking_flags(player_ped_id(), 262144);
	}
	else
	{
		clear_ragdoll_blocking_flags(player_ped_id(), 16);
		clear_ragdoll_blocking_flags(player_ped_id(), 8192);
		clear_ragdoll_blocking_flags(player_ped_id(), 16384);
		clear_ragdoll_blocking_flags(player_ped_id(), 32768);
		clear_ragdoll_blocking_flags(player_ped_id(), 262144);
	}
}

void func_95(int iParam0)
{
	if (!get_mission_flag())
	{
		if (iParam0 == 1)
		{
			sVar0 = "MMFSH";
			_0x1096603b519c905f(sVar0);
		}
		else
		{
			_0x1096603b519c905f("");
		}
	}
}

void func_96(var uParam0, int iParam1)
{
	if (func_56(uParam0, iParam1))
	{
		func_133(&(uParam0->f_1), iParam1);
	}
}

void func_97(var uParam0)
{
	if (!are_strings_equal(uParam0->f_3, uParam0->f_4))
	{
		uParam0->f_3 = uParam0->f_4;
		_0x6339c1ea3979b5f7(uParam0->f_3, uParam0->f_1);
	}
}

void func_98()
{
	if (!func_208(0) || func_209())
	{
		if ((((!func_210(1059426360, 1) || !func_210(488496242, 1)) || !func_210(1380607804, 1)) || !func_210(1872063208, 1)) || !func_210(1309979101, 1))
		{
			func_211(2047322594, 1, 255, 0, 0);
		}
		func_212();
	}
}

void func_99(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (uParam0->f_71 == 0)
		{
			uParam0->f_71 = 1;
			_hide_hud_component(100665617);
		}
	}
	else if (uParam0->f_71 == 1)
	{
		uParam0->f_71 = 0;
		_display_hud_component(100665617);
	}
}

void func_100(var uParam0, var uParam1)
{
	if (func_213(Global_39.f_5803) && func_210(Global_39.f_5803, 1))
	{
		func_214(uParam0, uParam1, Global_39.f_5803, 0, 1);
	}
	else
	{
		func_214(uParam0, uParam1, 1309979101, 0, 1);
	}
}

void func_101()
{
	if (func_48(8))
	{
		sVar0 = func_216(func_215(Global_39.f_5803), 109029619);
		if (func_213(Global_39.f_5803))
		{
			StringIntConCat(&cVar1, func_217(Global_39.f_5803, 0, 0, 0), 8);
		}
		iVar2 = -973584697;
		_databinding_write_data_string(Global_1903071->f_48, sVar0);
		if (func_218(Global_39.f_5803))
		{
			_databinding_write_data_string(Global_1903071->f_49, "");
		}
		else
		{
			_databinding_write_data_string(Global_1903071->f_49, &cVar1);
		}
		if (func_219(Global_39.f_5803) || func_220(Global_39.f_5803))
		{
			iVar2 = 1048406616;
		}
		_databinding_write_data_hash_string(Global_1903071->f_50, iVar2);
	}
}

int func_102()
{
	return 1;
}

void func_103(int iParam0)
{
	if (func_48(8))
	{
		_databinding_write_data_bool(Global_1903071->f_51, iParam0);
	}
}

void func_104(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_200() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_221(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_222();
		Global_1900688->f_9 = func_201(Global_1893587->f_2);
		Global_1900688->f_11 = func_223(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_202(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_202(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_202(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

void func_105()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		sVar1 = func_203(iVar0);
		if (!is_string_null_or_empty(sVar1))
		{
			decor_remove(player_ped_id(), sVar1);
		}
		iVar0++;
	}
}

void func_106(int iParam0, int iParam1)
{
	if (iParam0 <= 0 || iParam1 <= 0)
	{
		set_pad_shake(0, 0, 0);
		_0x14d29bb12d47f68c(0, 0, 0, 0, 0);
	}
	else
	{
		set_pad_shake(0, iParam0, iParam1);
		iVar0 = round((to_float(iParam1) / 2f));
		_0x14d29bb12d47f68c(0, 0, 0, iParam0, func_224(iVar0, 0, 255));
	}
}

bool func_107(int iParam0)
{
	iVar0 = 6;
	if (func_225(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

void func_108()
{
	func_226(1);
}

void func_109(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (uParam0->f_72 == 0)
		{
			uParam0->f_72 = 1;
			_hide_hud_component(-859384195);
		}
	}
	else if (uParam0->f_72 == 1)
	{
		uParam0->f_72 = 0;
		_display_hud_component(-859384195);
	}
}

void func_110(var uParam0)
{
	if (does_particle_fx_looped_exist(uParam0->f_18))
	{
		stop_particle_fx_looped(uParam0->f_18, false);
	}
}

void func_111(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	iVar0 = func_77(uParam1);
	if (func_126(iVar0))
	{
		set_entity_invincible(&(uParam2->f_123[iVar0]), false);
		set_ped_config_flag(&(uParam2->f_123[iVar0]), 17, false);
		*uParam2->f_706[iVar0] = { Global_35 };
		func_155(uParam0, uParam1, uParam2, iVar0);
		if (iParam4 == 1)
		{
			uParam2->f_402[iVar0] = uParam1->f_202;
		}
	}
	else
	{
		func_227(uParam0, uParam1);
		func_228(512);
	}
	func_22(uParam1);
	func_23(uParam1);
	if (iParam3 == 1)
	{
		func_229(uParam0, uParam1, uParam2, 2);
	}
	uParam1->f_167 = 0;
}

void func_112(var uParam0)
{
	if (!are_strings_equal(uParam0->f_3, uParam0->f_2))
	{
		uParam0->f_3 = uParam0->f_2;
		_0x9428447ded71fc7e(uParam0->f_1);
	}
}

void func_113(var uParam0)
{
	if (!func_34(uParam0, 32))
	{
		return;
	}
	if (func_230("BOB_FISHING_STOP", 0, 1))
	{
		func_120(uParam0, 32);
	}
}

void func_114(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		func_231(uParam0, iVar1);
		if (iParam1 == 1)
		{
			func_232(uParam0, iVar1, 0);
		}
		else
		{
			func_232(uParam0, iVar1, 2);
		}
		func_53(uParam0->f_109[iVar0]);
		iVar0++;
	}
}

int func_115(var uParam0, int iParam1)
{
	if (func_77(uParam0) == iParam1)
	{
		return 0;
	}
	return -1;
}

void func_116(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_entity_dead(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
	}
	delete_ped(iParam0);
}

void func_117(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

void func_118(var uParam0, int iParam1)
{
	func_145(uParam0, iParam1, 0);
	uParam0->f_216[iParam1] = 0;
	uParam0->f_247[iParam1] = 15;
	uParam0->f_278[iParam1] = 0f;
	uParam0->f_309[iParam1] = 0;
	uParam0->f_340[iParam1] = 0;
	uParam0->f_371[iParam1] = 0;
	*uParam0->f_32[iParam1] = { 0f, 0f, 0f };
}

void func_119(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (is_entity_attached_to_any_ped(*iParam0))
	{
		detach_entity(*iParam0, true, true);
	}
	delete_object(iParam0);
}

void func_120(var uParam0, int iParam1)
{
	if (func_34(uParam0, iParam1))
	{
		func_133(&(uParam0->f_11), iParam1);
	}
}

void func_121(int iParam0)
{
	if (!func_48(iParam0))
	{
		func_123(&(Global_1903071->f_1), iParam0);
	}
}

bool func_122(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_123(var uParam0, int iParam1)
{
	func_233(uParam0, iParam1);
}

bool func_124(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((iParam0 == 59 || iParam0 == 60) || iParam0 == 61) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64) || iParam0 == 65) || iParam0 == 66) || iParam0 == 67) || iParam0 == 68) || iParam0 == 69) || iParam0 == 70) || iParam0 == 71) || iParam0 == 22) || iParam0 == 23) || iParam0 == 25) || iParam0 == 27) || iParam0 == 29) || iParam0 == 37) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32) || iParam0 == 33) || iParam0 == 34) || iParam0 == 41) || iParam0 == 42) || iParam0 == 43) || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 72) || iParam0 == 49) || iParam0 == 39) || iParam0 == 55) || iParam0 == 57) || iParam0 == 56)
	{
		return true;
	}
	return false;
}

void func_125(var uParam0, int iParam1)
{
	if (uParam0[iParam1] != 0)
	{
		(*uParam0)[iParam1] = 0;
		uParam0->f_74[iParam1] = 0;
	}
}

bool func_126(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 30);
}

int func_127()
{
	return floor((get_control_normal(0, 1773209123) * 127f));
}

int func_128()
{
	return floor((get_control_normal(0, 163530309) * 127f));
}

int func_129()
{
	return floor((get_control_normal(0, 1339352408) * 127f));
}

int func_130()
{
	return floor((get_control_normal(0, -1779240557) * 127f));
}

bool func_131()
{
	return Global_1903071->f_5.f_4 > 0f;
}

void func_132(var uParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (_uiprompt_is_valid(uParam0->f_70))
		{
			_uiprompt_delete(uParam0->f_70);
		}
	}
	else if (func_234(&(uParam0->f_60[iParam1])))
	{
		func_235(uParam0->f_60[iParam1], 0, 1);
	}
}

void func_133(var uParam0, int iParam1)
{
	func_236(uParam0, iParam1);
}

bool func_134(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_135(var uParam0)
{
	return func_134(*uParam0, 2);
}

int func_136()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_137(int iParam0)
{
	Global_1903136->f_302 = (Global_1903136->f_302 || iParam0);
}

int func_138()
{
	if (does_entity_exist(Global_1903071->f_5.f_11) && Global_1903071->f_35 == 1)
	{
		return Global_1903071->f_5.f_11;
	}
	return 0;
}

Vector3 func_139()
{
	if (does_entity_exist(func_138()))
	{
		return get_entity_coords(func_138(), true, false);
	}
	return 0f, 0f, 0f;
}

Vector3 func_140(vector3 vParam0, float fParam3)
{
	vVar0 = { vParam0 };
	vVar0.f_2 = (vVar0.z + fParam3);
	return vVar0;
}

int func_141()
{
	if (does_entity_exist(Global_1903071->f_5.f_12) && Global_1903071->f_35 == 1)
	{
		return Global_1903071->f_5.f_12;
	}
	return 0;
}

Vector3 func_142()
{
	if (does_entity_exist(func_141()))
	{
		return get_entity_coords(func_141(), true, false);
	}
	return 0f, 0f, 0f;
}

Vector3 func_143(var uParam0, int iParam1)
{
	if (func_126(iParam1) && !is_entity_dead(&(uParam0->f_123[iParam1])))
	{
		return get_entity_coords(&(uParam0->f_123[iParam1]), true, false);
	}
	return 0f, 0f, 0f;
}

void func_144(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		(*uParam0)[iVar0] = 1;
		(*uParam0)[iVar0]->f_1[0] = 1;
		iVar0++;
	}
	(*uParam0)[0] = 4;
	(*uParam0)[0]->f_1[0] = 0;
	(*uParam0)[0]->f_1[1] = 1;
	(*uParam0)[0]->f_1[2] = 0;
	(*uParam0)[0]->f_1[3] = 1;
	(*uParam0)[1] = 5;
	(*uParam0)[1]->f_1[0] = 0;
	(*uParam0)[1]->f_1[1] = 0;
	(*uParam0)[1]->f_1[2] = 0;
	(*uParam0)[1]->f_1[3] = 1;
	(*uParam0)[1]->f_1[4] = 1;
	(*uParam0)[2] = 4;
	(*uParam0)[2]->f_1[0] = 1;
	(*uParam0)[2]->f_1[1] = 0;
	(*uParam0)[2]->f_1[2] = 0;
	(*uParam0)[2]->f_1[3] = 1;
	(*uParam0)[3] = 6;
	(*uParam0)[3]->f_1[0] = 0;
	(*uParam0)[3]->f_1[1] = 0;
	(*uParam0)[3]->f_1[2] = 0;
	(*uParam0)[3]->f_1[3] = 1;
	(*uParam0)[3]->f_1[4] = 1;
	(*uParam0)[3]->f_1[5] = 1;
	(*uParam0)[4] = 8;
	(*uParam0)[4]->f_1[0] = 0;
	(*uParam0)[4]->f_1[1] = 0;
	(*uParam0)[4]->f_1[2] = 0;
	(*uParam0)[4]->f_1[3] = 0;
	(*uParam0)[4]->f_1[4] = 1;
	(*uParam0)[4]->f_1[5] = 1;
	(*uParam0)[4]->f_1[6] = 1;
	(*uParam0)[4]->f_1[7] = 1;
	(*uParam0)[5] = 4;
	(*uParam0)[5]->f_1[0] = 1;
	(*uParam0)[5]->f_1[1] = 1;
	(*uParam0)[5]->f_1[2] = 1;
	(*uParam0)[5]->f_1[3] = 0;
	(*uParam0)[6] = 8;
	(*uParam0)[6]->f_1[0] = 0;
	(*uParam0)[6]->f_1[1] = 0;
	(*uParam0)[6]->f_1[2] = 0;
	(*uParam0)[6]->f_1[3] = 0;
	(*uParam0)[6]->f_1[4] = 0;
	(*uParam0)[6]->f_1[5] = 0;
	(*uParam0)[6]->f_1[6] = 0;
	(*uParam0)[6]->f_1[7] = 1;
	(*uParam0)[7] = 8;
	(*uParam0)[7]->f_1[0] = 1;
	(*uParam0)[7]->f_1[1] = 0;
	(*uParam0)[7]->f_1[2] = 1;
	(*uParam0)[7]->f_1[3] = 1;
	(*uParam0)[7]->f_1[4] = 0;
	(*uParam0)[7]->f_1[5] = 1;
	(*uParam0)[7]->f_1[6] = 1;
	(*uParam0)[7]->f_1[7] = 1;
	(*uParam0)[8] = 7;
	(*uParam0)[8]->f_1[0] = 1;
	(*uParam0)[8]->f_1[1] = 1;
	(*uParam0)[8]->f_1[2] = 1;
	(*uParam0)[8]->f_1[3] = 1;
	(*uParam0)[8]->f_1[4] = 1;
	(*uParam0)[8]->f_1[5] = 1;
	(*uParam0)[8]->f_1[6] = 1;
	(*uParam0)[9] = 2;
	(*uParam0)[9]->f_1[0] = 0;
	(*uParam0)[9]->f_1[1] = 1;
	(*uParam0)[10] = 3;
	(*uParam0)[10]->f_1[0] = 0;
	(*uParam0)[10]->f_1[1] = 1;
	(*uParam0)[10]->f_1[2] = 1;
	(*uParam0)[11] = 4;
	(*uParam0)[11]->f_1[0] = 0;
	(*uParam0)[11]->f_1[1] = 1;
	(*uParam0)[11]->f_1[2] = 1;
	(*uParam0)[11]->f_1[3] = 1;
	(*uParam0)[12] = 4;
	(*uParam0)[12]->f_1[0] = 0;
	(*uParam0)[12]->f_1[1] = 0;
	(*uParam0)[12]->f_1[2] = 1;
	(*uParam0)[12]->f_1[3] = 1;
	(*uParam0)[13] = 3;
	(*uParam0)[13]->f_1[0] = 1;
	(*uParam0)[13]->f_1[1] = 0;
	(*uParam0)[13]->f_1[2] = 1;
	(*uParam0)[14] = 6;
	(*uParam0)[14]->f_1[0] = 0;
	(*uParam0)[14]->f_1[1] = 1;
	(*uParam0)[14]->f_1[2] = 1;
	(*uParam0)[14]->f_1[3] = 1;
	(*uParam0)[14]->f_1[4] = 1;
	(*uParam0)[14]->f_1[5] = 0;
}

void func_145(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_154[iParam1] != iParam2)
	{
		uParam0->f_154[iParam1] = iParam2;
		uParam0->f_185[iParam1] = iParam2;
	}
}

bool func_146(var uParam0, var uParam1, int iParam2)
{
	if (!is_entity_dead(&(uParam1->f_123[iParam2])))
	{
		return true;
	}
	if (&uParam1->f_216[iParam2] == 0)
	{
		func_237(uParam1, iParam2);
	}
	if (&uParam1->f_216[iParam2] != 0 && func_38(*uParam1->f_32[iParam2]))
	{
		if (func_38(*uParam1->f_32[iParam2]))
		{
			vVar3 = { Global_35 };
			vVar0.x = (vVar3.x + get_random_float_in_range(-30f, 30f));
			vVar0.f_1 = (vVar3.y + get_random_float_in_range(-30f, 30f));
			vVar0.f_2 = vVar3.z;
			if (func_38(vVar0))
			{
				return false;
			}
			else if (get_distance_between_coords(vVar3, vVar0, false) < 10f)
			{
				return false;
			}
			else if (!func_238(uParam0, vVar0))
			{
				return false;
			}
			else if (func_239(vVar0))
			{
				return false;
			}
			else if (!func_240(vVar0, &(uParam1->f_216[iParam2]), &(vVar0.f_2)))
			{
				return false;
			}
			else
			{
				*uParam1->f_32[iParam2] = { vVar0 };
			}
		}
	}
	if ((uParam1->f_797 == 0 && &uParam1->f_216[iParam2] != 0) && !func_38(*uParam1->f_32[iParam2]))
	{
		request_model(&(uParam1->f_216[iParam2]), false);
		if (has_model_loaded(&(uParam1->f_216[iParam2])))
		{
			uParam1->f_123[iParam2] = func_241(&(uParam1->f_216[iParam2]), *uParam1->f_32[iParam2], 0f, 1, 1, 0, 1, 1, 1, 0, 0);
			uParam1->f_1[iParam2] = 0;
			_0x8b6f0f59b1b99801(&(uParam1->f_123[iParam2]), 0);
			set_model_as_no_longer_needed(&(uParam1->f_216[iParam2]));
			uParam1->f_797 = 1;
		}
	}
	return !is_entity_dead(&(uParam1->f_123[iParam2]));
}

bool func_147(var uParam0, var uParam1, int iParam2)
{
	if (func_51(&(uParam1->f_433)) && func_52(&(uParam1->f_433)) < (200 + uParam1->f_471 * 20))
	{
		return false;
	}
	func_93(&(uParam1->f_433));
	iVar16 = get_ped_nearby_peds(player_ped_id(), &uVar0, -1, 8);
	if (iVar16 == 0)
	{
		return false;
	}
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < iVar16)
	{
		if (((!is_entity_dead(&(uVar0[iVar18])) && func_242(&(uVar0[iVar18]))) && !func_243(uParam1, uVar0[iVar18])) && !func_153(uParam0, uVar0[iVar18]))
		{
			uParam1->f_123[iParam2] = &uVar0[iVar18];
			set_entity_as_mission_entity(&(uParam1->f_123[iParam2]), true, false);
			uParam1->f_1[iParam2] = 1;
			iVar17 = _0x30569f348d126a5a(&(uParam1->f_123[iParam2]));
			if ((((iVar17 == 1451491046 || iVar17 == -7367611) || iVar17 == 1492558869) || iVar17 == -2111653907) || iVar17 == 1942171995)
			{
				uParam1->f_340[iParam2] = 1;
			}
			else
			{
				uParam1->f_340[iParam2] = 0;
			}
			func_93(&(uParam1->f_436));
			return true;
		}
		iVar18++;
	}
	return false;
}

bool func_148(var uParam0, int iParam1)
{
	return iParam1 == uParam0->f_799;
}

bool func_149(var uParam0)
{
	if (((uParam0->f_471 < 5 && func_244(&(uParam0->f_436)) > 15000) && !func_48(64)) && Global_1903071->f_5 == 6)
	{
		return true;
	}
	return false;
}

bool func_150(var uParam0, int iParam1)
{
	if ((uParam0->f_798 == 1 || is_entity_dead(&(uParam0->f_123[iParam1]))) || !_0xa0bc8faed8cfeb3c(&(uParam0->f_123[iParam1])))
	{
		return false;
	}
	func_245(&(uParam0->f_123[iParam1]));
	bVar0 = decor_exist_on(&(uParam0->f_123[iParam1]), "Fish_Prevent_Tasking");
	bVar1 = decor_exist_on(&(uParam0->f_123[iParam1]), "Fish_Weight");
	uParam0->f_216[iParam1] = get_entity_model(&(uParam0->f_123[iParam1]));
	uParam0->f_247[iParam1] = func_246(&(uParam0->f_216[iParam1]));
	if (bVar1 == 0)
	{
		uParam0->f_278[iParam1] = func_247(&(uParam0->f_247[iParam1]));
		decor_set_float(&(uParam0->f_123[iParam1]), "Fish_Weight", &(uParam0->f_278[iParam1]));
	}
	else
	{
		uParam0->f_278[iParam1] = decor_get_float(&(uParam0->f_123[iParam1]), "Fish_Weight");
	}
	uParam0->f_309[iParam1] = func_248(&(uParam0->f_216[iParam1]));
	uParam0->f_402[iParam1] = 0f;
	func_249(&(uParam0->f_123[iParam1]), 0);
	set_blocking_of_non_temporary_events(&(uParam0->f_123[iParam1]), false);
	func_250(uParam0, iParam1);
	set_ped_reset_flag(&(uParam0->f_123[iParam1]), 169, true);
	if (bVar0 == 0)
	{
		decor_set_bool(&(uParam0->f_123[iParam1]), "Fish_Prevent_Tasking", false);
		if (func_48(16))
		{
			set_entity_proofs(&(uParam0->f_123[iParam1]), 20, false);
		}
		if (((!func_156(&(uParam0->f_123[iParam1]), 1139527981) && !func_156(&(uParam0->f_123[iParam1]), 518218985)) && !func_156(&(uParam0->f_123[iParam1]), -773337285)) && !is_ped_fleeing(&(uParam0->f_123[iParam1])))
		{
			task_animal_unalerted(&(uParam0->f_123[iParam1]), -1, 0, 0, 0);
		}
	}
	uParam0->f_798 = 1;
	return true;
}

void func_151(var uParam0, var uParam1, int iParam2)
{
	*uParam1->f_706[iParam2] = { 0f, 0f, 0f };
	uParam1->f_439[iParam2] = 0;
	iVar0 = func_115(uParam0, iParam2);
	if (iVar0 != -1)
	{
		func_43(uParam0, uParam1, -1);
	}
	func_145(uParam1, iParam2, 4);
}

bool func_152(var uParam0, int iParam1)
{
	if (!is_entity_dead(&(uParam0->f_123[iParam1])))
	{
		if (decor_exist_on(&(uParam0->f_123[iParam1]), "Fish_Prevent_Tasking"))
		{
			if (decor_get_bool(&(uParam0->f_123[iParam1]), "Fish_Prevent_Tasking") == 0)
			{
				return true;
			}
		}
		else
		{
			decor_set_bool(&(uParam0->f_123[iParam1]), "Fish_Prevent_Tasking", false);
		}
	}
	return false;
}

bool func_153(var uParam0, var uParam1)
{
	if ((!func_38(uParam0->f_4) && !is_entity_dead(*uParam1)) && func_39(*uParam1, uParam0->f_4, 0) < 50f)
	{
		return false;
	}
	return true;
}

bool func_154(var uParam0, var uParam1, int iParam2)
{
	if (is_ped_fleeing(&(uParam1->f_123[iParam2])))
	{
		return false;
	}
	if (func_56(uParam0, 512) && func_39(func_138(), func_143(uParam1, iParam2), 0) < 5f)
	{
		*uParam1->f_706[iParam2] = { func_139() };
		return true;
	}
	return false;
}

void func_155(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 1;
	iVar1 = func_115(uParam1, iParam3);
	if (iVar1 != -1)
	{
		func_251();
		func_227(uParam0, uParam1);
		func_228(512);
		func_43(uParam1, uParam2, -1);
		Global_1903071->f_5.f_7 = 0;
	}
	else if (func_38(*uParam2->f_706[iParam3]))
	{
		*uParam2->f_706[iParam3] = { Global_35 };
	}
	func_93(uParam2->f_524[iParam3]);
	func_53(uParam2->f_615[iParam3]);
	if (!is_entity_dead(&(uParam2->f_123[iParam3])))
	{
		func_250(uParam2, iParam3);
		set_entity_invincible(&(uParam2->f_123[iParam3]), false);
		set_ped_config_flag(&(uParam2->f_123[iParam3]), 17, false);
	}
	if (iVar0 == 1)
	{
		func_145(uParam2, iParam3, 8);
	}
	else
	{
		func_145(uParam2, iParam3, 4);
	}
}

bool func_156(int iParam0, int iParam1)
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

void func_157(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (&uParam2->f_154[iParam3] == 6)
	{
		func_252(uParam1, uParam2, iParam3);
		func_253(uParam0, uParam1, uParam2, iParam3);
		if (func_254(uParam1) || func_255(uParam1))
		{
			if (!func_256(uParam0, uParam2, iParam3))
			{
				uParam2->f_154[iParam3] = 7;
			}
		}
	}
	else
	{
		func_257(uParam1, uParam2, iParam3);
		func_22(uParam1);
		if ((func_258(uParam1) || func_259(uParam0, uParam1)) || func_256(uParam0, uParam2, iParam3))
		{
			uParam2->f_154[iParam3] = 6;
		}
	}
	if (&uParam2->f_185[iParam3] != &uParam2->f_154[iParam3])
	{
		uParam2->f_185[iParam3] = &uParam2->f_154[iParam3];
		uParam1->f_176 = 0;
		clear_ped_tasks(&(uParam2->f_123[iParam3]), 1, 0);
	}
}

void func_158(var uParam0, var uParam1, int iParam2)
{
	if (((uParam0->f_200 == 0 || uParam0->f_200 == 6) || uParam0->f_200 == 7) || uParam0->f_200 == 8)
	{
		uParam0->f_201 = 0;
		if (func_51(&(uParam0->f_188)))
		{
			func_260(&(uParam0->f_188));
		}
		if (func_51(&(uParam0->f_191)))
		{
			func_260(&(uParam0->f_191));
		}
		return;
	}
	fVar0 = get_entity_heading(&(uParam1->f_123[iParam2]));
	fVar1 = get_entity_heading(player_ped_id());
	fVar2 = (fVar0 - fVar1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 + 360f);
	}
	if (fVar2 >= 180f)
	{
		uParam0->f_201 = 4;
	}
	else
	{
		uParam0->f_201 = 3;
	}
	if (uParam0->f_201 == 4)
	{
		if (IntToFloat(func_127()) < -25f && func_261())
		{
			if (func_81(uParam1, iParam2))
			{
				if (func_51(&(uParam0->f_188)))
				{
					func_262(&(uParam0->f_188));
				}
				else
				{
					func_93(&(uParam0->f_188));
				}
			}
			else if (func_51(&(uParam0->f_191)))
			{
				func_262(&(uParam0->f_191));
			}
			else
			{
				func_93(&(uParam0->f_191));
			}
		}
		else
		{
			if (func_51(&(uParam0->f_188)))
			{
				func_260(&(uParam0->f_188));
			}
			if (func_51(&(uParam0->f_191)))
			{
				func_260(&(uParam0->f_191));
			}
		}
	}
	else if (uParam0->f_201 == 3)
	{
		if (IntToFloat(func_127()) > 25f && func_261())
		{
			if (func_81(uParam1, iParam2))
			{
				if (func_51(&(uParam0->f_188)))
				{
					func_262(&(uParam0->f_188));
				}
				else
				{
					func_93(&(uParam0->f_188));
				}
			}
			else if (func_51(&(uParam0->f_191)))
			{
				func_262(&(uParam0->f_191));
			}
			else
			{
				func_93(&(uParam0->f_191));
			}
		}
		else
		{
			if (func_51(&(uParam0->f_188)))
			{
				func_260(&(uParam0->f_188));
			}
			if (func_51(&(uParam0->f_191)))
			{
				func_260(&(uParam0->f_191));
			}
		}
	}
	else
	{
		if (func_51(&(uParam0->f_188)))
		{
			func_260(&(uParam0->f_188));
		}
		if (func_51(&(uParam0->f_191)))
		{
			func_260(&(uParam0->f_191));
		}
	}
}

void func_159(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_263(uParam1, 0))
	{
		if (func_156(&(uParam2->f_123[iParam3]), 1227113341))
		{
			clear_ped_tasks(&(uParam2->f_123[iParam3]), 1, 0);
		}
		return;
	}
	if (!func_264(uParam1))
	{
		return;
	}
	vVar0 = { func_143(uParam2, iParam3) };
	uParam1->f_218 = 0;
	if (uParam1->f_17 < 0.1f)
	{
		uParam1->f_200 = 7;
	}
	else if (func_265(uParam1, uParam2, iParam3))
	{
		uParam1->f_200 = 8;
	}
	else if (!func_238(uParam0, vVar0))
	{
		func_266(uParam1, uParam2, iParam3);
	}
	else if (func_267(uParam1, uParam2, iParam3))
	{
		func_268(uParam0, uParam1, uParam2, iParam3, vVar0);
	}
	if (((uParam1->f_200 == 8 || uParam1->f_200 == 7) || uParam1->f_200 == 6) || uParam1->f_200 == 0)
	{
		uParam1->f_222 = 0f;
		uParam1->f_223 = 0;
		uParam1->f_224 = 0;
		if (func_156(&(uParam2->f_123[iParam3]), 1227113341))
		{
			clear_ped_tasks(&(uParam2->f_123[iParam3]), 1, 0);
		}
	}
	else
	{
		func_269(uParam1, uParam2, iParam3);
		if (uParam1->f_223 == 1 || !func_156(&(uParam2->f_123[iParam3]), 1227113341))
		{
			if (!_0x88ad6cc10d8d35b2(&(uParam2->f_123[iParam3])) || !does_entity_belong_to_this_script(&(uParam2->f_123[iParam3]), false))
			{
				set_entity_as_mission_entity(&(uParam2->f_123[iParam3]), true, true);
			}
			task_go_to_entity(&(uParam2->f_123[iParam3]), uParam1->f_8, -1, 0.1f, uParam1->f_222, 0.1f, 1);
			uParam1->f_223 = 0;
			uParam1->f_224 = 0;
		}
	}
	if (uParam1->f_200 == 7)
	{
		if (!func_51(&(uParam1->f_219)))
		{
			func_93(&(uParam1->f_219));
		}
		if (func_135(&(uParam1->f_219)))
		{
			func_262(&(uParam1->f_219));
		}
	}
	else if (func_51(&(uParam1->f_219)) && !func_135(&(uParam1->f_219)))
	{
		func_260(&(uParam1->f_219));
	}
}

void func_160(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (((func_51(&(uParam1->f_196)) && func_52(&(uParam1->f_196)) < uParam1->f_199) || !func_81(uParam2, iParam3)) || !func_270(uParam1))
	{
		return;
	}
	vVar0 = { func_271(func_143(uParam2, iParam3), 0) };
	if (func_38(vVar0))
	{
		return;
	}
	func_93(&(uParam1->f_196));
	if (func_82(uParam1) > 0.8f)
	{
		uParam1->f_199 = get_random_int_in_range(150, 250);
	}
	else
	{
		uParam1->f_199 = get_random_int_in_range(250, 350);
	}
	fVar3 = 1f;
	if (&uParam2->f_309[iParam3] == 0)
	{
		fVar3 = 0.8f;
	}
	else if (&uParam2->f_309[iParam3] == 1)
	{
		fVar3 = 0.9f;
	}
	else if (&uParam2->f_309[iParam3] == 2)
	{
		fVar3 = 1f;
	}
	else if (&uParam2->f_309[iParam3] == 3)
	{
		fVar3 = 1.1f;
	}
	else if (&uParam2->f_309[iParam3] == 4)
	{
		fVar3 = 1.2f;
	}
	start_networked_particle_fx_non_looped_at_coord("scr_mg_fish_struggle", vVar0, 0f, 0f, get_random_float_in_range(0f, 360f), fVar3, 0, 0, 0);
	func_272(uParam0, uParam1, uParam2, iParam3);
}

float func_161(var uParam0)
{
	if (!func_51(uParam0))
	{
		return 0f;
	}
	if (func_135(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_273() - uParam0->f_1);
}

void func_162(var uParam0, var uParam1)
{
	if (func_56(uParam0, 32))
	{
		iVar0 = func_77(uParam0);
		if (func_126(iVar0) && &uParam1->f_309[iVar0] != 4)
		{
			if (&uParam1->f_154[iVar0] == 9)
			{
				func_21(uParam0, uParam1, iVar0, 1, 1);
			}
		}
	}
}

int func_163()
{
	if (func_44())
	{
		return get_current_ped_weapon_entity_index(player_ped_id(), 0);
	}
	return 0;
}

void func_164(var uParam0, var uParam1)
{
	bVar0 = does_entity_exist(func_141());
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (((Global_1903071->f_5 == 6 || Global_1903071->f_5 == 10) && bVar0 == 1) && !is_entity_dead(&(uParam1->f_123[iVar1])))
		{
			uParam0->f_23[iVar1] = func_274(func_143(uParam1, iVar1), func_142());
		}
		else
		{
			uParam0->f_23[iVar1] = 99999f;
		}
		iVar1++;
	}
}

void func_165(var uParam0)
{
	func_47(uParam0);
	uParam0->f_18 = 0;
}

void func_166(var uParam0, var uParam1, var uParam2)
{
	func_275(uParam0, uParam1, uParam2);
	func_96(uParam1, 1024);
	if (func_276() || is_control_pressed(0, -1404316431))
	{
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		if (func_277())
		{
			func_108();
		}
		_0xdd1232b332cbb9e7(2, 1, 0);
		func_47(uParam0);
	}
	else
	{
		func_278(&(uParam0->f_82), 25, 0);
		func_278(&(uParam0->f_82), 27, 0);
		func_278(&(uParam0->f_82), 29, 0);
		if (func_279())
		{
			disable_control_action(0, -128997553, false);
			disable_control_action(0, 130948705, false);
		}
		else if (func_213(Global_39.f_5803))
		{
			if (_is_using_keyboard(0) && _0xf4cb347d7b5eb0fd())
			{
				func_280(uParam0, 23, 0, -1, 1);
			}
			else
			{
				func_280(uParam0, 22, 0, -1, 1);
			}
		}
		if (func_281())
		{
			func_282(uParam0, 7, 0, 1);
		}
		func_283(uParam0, uParam1, uParam2);
	}
	func_284(uParam0, uParam1);
}

void func_167(var uParam0, var uParam1, var uParam2)
{
	func_275(uParam0, uParam1, uParam2);
	func_285(uParam1);
	if (func_279())
	{
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
	}
	func_278(&(uParam0->f_82), 22, 0);
	func_278(&(uParam0->f_82), 23, 0);
	func_278(&(uParam0->f_82), 27, 0);
	func_278(&(uParam0->f_82), 29, 0);
	func_286(uParam0);
	func_47(uParam0);
}

void func_168(var uParam0)
{
	func_278(&(uParam0->f_82), 22, 0);
	func_278(&(uParam0->f_82), 23, 0);
	func_278(&(uParam0->f_82), 25, 0);
	func_280(uParam0, 27, 1, -1, 1);
}

void func_169(var uParam0, var uParam1)
{
	func_47(uParam0);
	func_278(&(uParam0->f_82), 27, 0);
	func_278(&(uParam0->f_82), 29, 0);
	func_287(uParam0, uParam0->f_5);
	func_288(uParam0);
	func_289(uParam1);
	func_96(uParam1, 1);
}

void func_170()
{
}

void func_171(var uParam0, var uParam1, var uParam2)
{
	if (func_182(1))
	{
		return;
	}
	func_290(uParam0, uParam1);
	func_291(uParam1);
	func_289(uParam1);
	func_264(uParam1);
	func_292(uParam0, uParam1);
	if (!func_56(uParam1, 4096) && !func_293())
	{
		func_295(uParam0, func_294(uParam0));
		func_296(uParam0, uParam1);
		func_297(uParam0, uParam1, uParam2);
	}
	func_298(uParam0, uParam1);
	func_299(uParam0, uParam1, uParam2);
	if (func_300(uParam0, uParam1))
	{
		func_301(uParam1, 4096);
		func_180(128, 1);
		func_302(8);
		func_23(uParam1);
		func_229(uParam0, uParam1, uParam2, 2);
		func_287(uParam0, uParam0->f_6);
		func_47(uParam0);
		if ((!func_213(Global_39.f_5803) && uParam1->f_54 == 0) && uParam1->f_3 == 1)
		{
			func_280(uParam0, 54, 1, -2, 1);
		}
		else if (func_277())
		{
			func_108();
		}
	}
	else if (func_303(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_304(uParam1);
	}
}

void func_172(var uParam0, var uParam1, var uParam2)
{
	func_302(1);
	if (!func_51(&(uParam1->f_179)))
	{
		func_93(&(uParam1->f_179));
	}
	func_278(&(uParam0->f_82), 30, 0);
	func_278(&(uParam0->f_82), 37, 0);
	func_278(&(uParam0->f_82), 31, 0);
	func_278(&(uParam0->f_82), 32, 0);
	func_278(&(uParam0->f_82), 33, 0);
	func_278(&(uParam0->f_82), 34, 0);
	func_278(&(uParam0->f_82), 39, 0);
	func_297(uParam0, uParam1, uParam2);
	if (!func_293())
	{
		func_282(uParam0, 4, 0, 1);
	}
	iVar0 = func_77(uParam1);
	if (func_126(iVar0) && !func_81(uParam2, iVar0))
	{
		if (func_51(uParam0->f_82.f_148[57]))
		{
			func_280(uParam0, 57, 0, -2, 0);
		}
		if (func_51(uParam0->f_82.f_148[56]) && !_0x5952dfa38fa529fe())
		{
			func_280(uParam0, 56, 0, -2, 0);
		}
	}
	if (func_263(uParam1, 1))
	{
		func_180(8, 1);
	}
	else if (func_305(uParam0, uParam1, uParam2))
	{
		func_306(uParam0, uParam1, uParam2);
		func_180(2, 1);
	}
	else
	{
		func_307(uParam0, uParam1, uParam2);
	}
}

void func_173(var uParam0)
{
	func_47(uParam0);
	uParam0->f_18 = 0;
}

void func_174(var uParam0, var uParam1, var uParam2)
{
	if (func_308(256, 1))
	{
		func_309(uParam0, uParam1, uParam2);
	}
}

void func_175(var uParam0, var uParam1, var uParam2)
{
	func_228(1);
	func_171(uParam0, uParam1, uParam2);
	func_278(&(uParam0->f_82), 30, 0);
	func_278(&(uParam0->f_82), 37, 0);
	func_278(&(uParam0->f_82), 31, 0);
	func_278(&(uParam0->f_82), 32, 0);
	func_278(&(uParam0->f_82), 33, 0);
	func_278(&(uParam0->f_82), 34, 0);
	func_278(&(uParam0->f_82), 39, 0);
}

void func_176(var uParam0, var uParam1, var uParam2)
{
	func_306(uParam0, uParam1, uParam2);
	func_278(&(uParam0->f_82), 43, 0);
	func_278(&(uParam0->f_82), 45, 0);
	func_278(&(uParam0->f_82), 46, 0);
	func_278(&(uParam0->f_82), 47, 0);
	func_278(&(uParam0->f_82), 72, 0);
	func_278(&(uParam0->f_82), 49, 0);
	func_287(uParam0, uParam0->f_8);
}

void func_177(var uParam0, var uParam1, var uParam2)
{
	func_310(uParam0, uParam1, uParam2);
	if (!func_56(uParam1, 32768) && func_308(32, 1))
	{
		func_301(uParam1, 32768);
	}
	if ((func_56(uParam1, 32768) && !func_56(uParam1, 64)) && !func_56(uParam1, 32))
	{
		func_311(uParam1, uParam2);
		func_312(uParam0, uParam1);
		iVar0 = func_77(uParam1);
		if (func_126(iVar0))
		{
			func_313(&(uParam0->f_19), &(uParam2->f_340[iVar0]));
		}
		if (func_308(4, 1))
		{
			func_314(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else if (!func_126(iVar0))
		{
			func_314(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else if (is_entity_dead(&(uParam2->f_123[iVar0])))
		{
			func_314(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else
		{
			func_315(uParam0, uParam1, uParam2);
		}
	}
	func_316(uParam1);
	func_317(uParam1);
	func_318(uParam0, uParam1, uParam2);
	func_319();
	func_320(uParam0, uParam1, uParam2);
}

void func_178(var uParam0)
{
	func_47(uParam0);
	uParam0->f_18 = 0;
	func_321(uParam0);
}

void func_179(var uParam0)
{
	if ((Global_1903071->f_5 <= 1 || Global_1903071->f_5 == 9) || Global_1903071->f_5 == 13)
	{
		func_109(uParam0, 0);
	}
	else
	{
		func_109(uParam0, 1);
	}
}

void func_180(int iParam0, int iParam1)
{
	if (!func_322(iParam0))
	{
		func_123(&(Global_1903071->f_5.f_6), iParam0);
		if (iParam1 == 1)
		{
		}
	}
}

bool func_181()
{
	if (Global_1903071->f_5 == 1)
	{
		return true;
	}
	return false;
}

bool func_182(int iParam0)
{
	return func_122(Global_1903071->f_2, iParam0);
}

float func_183(float fParam0, float fParam1, float fParam2)
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

void func_184(var uParam0, int iParam1)
{
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		sVar0 = func_203(iVar2);
		fVar1 = 0f;
		if (!is_string_null_or_empty(sVar0) && decor_exist_on(iParam1, sVar0))
		{
			fVar1 = decor_get_float(iParam1, sVar0);
		}
		if (fVar1 > 0f && does_entity_exist(uParam0->f_12))
		{
			func_323(uParam0, iVar2, fVar1);
		}
		else
		{
			func_324(uParam0, iVar2);
		}
		iVar2++;
	}
}

void func_185(var uParam0, int iParam1, int iParam2)
{
}

void func_186(var uParam0, int iParam1, int iParam2)
{
}

void func_187(var uParam0, int iParam1, int iParam2)
{
}

void func_188(var uParam0, int iParam1, int iParam2)
{
}

void func_189(var uParam0, int iParam1, int iParam2)
{
}

void func_190(var uParam0, int iParam1, int iParam2)
{
}

void func_191(var uParam0, int iParam1, int iParam2)
{
}

void func_192(var uParam0, int iParam1, int iParam2)
{
}

void func_193(var uParam0, int iParam1, int iParam2)
{
}

void func_194(var uParam0, int iParam1, int iParam2)
{
}

void func_195(var uParam0, int iParam1, int iParam2)
{
}

void func_196(var uParam0, int iParam1, int iParam2)
{
}

void func_197(var uParam0, int iParam1, int iParam2)
{
}

void func_198(var uParam0, int iParam1, int iParam2)
{
}

void func_199(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_324(uParam0, iVar0);
		iVar0++;
	}
}

int func_200()
{
	return Global_1572887->f_13;
}

int func_201(int iParam0)
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

void func_202(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

char* func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Fish_Attractor_Bluegill";
		case 1:
			return "Fish_Attractor_BullheadCatfish";
		case 2:
			return "Fish_Attractor_ChainPickerel";
		case 3:
			return "Fish_Attractor_ChannelCatfish";
		case 4:
			return "Fish_Attractor_LakeSturgeon";
		case 5:
			return "Fish_Attractor_LargemouthBass";
		case 6:
			return "Fish_Attractor_LongnoseGar";
		case 7:
			return "Fish_Attractor_Muskie";
		case 8:
			return "Fish_Attractor_NorthernPike";
		case 9:
			return "Fish_Attractor_Perch";
		case 10:
			return "Fish_Attractor_RedfinPickerel";
		case 11:
			return "Fish_Attractor_RockBass";
		case 12:
			return "Fish_Attractor_SmallmouthBass";
		case 13:
			return "Fish_Attractor_SockeyeSalmon";
		case 14:
			return "Fish_Attractor_SteelheadTrout";
		default:
			break;
	}
	return "";
}

int func_204()
{
	return _get_water_map_zone_at_coords(Global_35);
}

bool func_205(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 0);
}

void func_206(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_325())
	{
		return;
	}
	sVar1 = func_326(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_327(iParam4))
	{
		if (func_328(iParam0))
		{
			iParam4 = func_330(func_329(iParam0));
		}
		else
		{
			iParam4 = func_330(iParam1);
		}
	}
	if (func_327(iParam4))
	{
		iVar3 = func_331(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_333(func_332(iParam2));
	}
	else if ((func_334(iParam1, 2) || func_335(iParam4, 2)) && !Global_1893587->f_9)
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (is_ped_male(player_ped_id()))
			{
				sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1893587->f_9 = 1;
	}
	else if ((func_328(iParam0) && func_336(iParam0, 16777216)) && !Global_1893587->f_9)
	{
		sVar2 = _create_var_string(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893587->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893587->f_9)
	{
		sVar2 = _create_var_string(2, "REGION_BOUNTY", iVar3);
		Global_1893587->f_9 = 1;
	}
	else
	{
		iVar4 = func_338(func_337());
		iVar5 = func_339(func_337());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = _get_temperature_at_coords(Global_35);
		if (!_should_use_24_hour_clock())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_340(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_216(&cVar6, 109029619), sVar9, func_216(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_340(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_216(&cVar6, 109029619), func_216(&cVar10, 109029619));
		}
		Global_1893587->f_9 = 0;
	}
	Global_1939161->f_145 = func_341(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_207(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_273() - fParam1);
	func_342(uParam0, 1);
	func_343(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_208(bool bParam0)
{
	if (func_200() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_344(bParam0));
}

bool func_209()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

bool func_210(int iParam0, int iParam1)
{
	if (!func_345(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_346(iParam0);
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
			if (!func_347(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_348(iParam0))
			{
				return true;
			}
			break;
	}
	return func_217(iParam0, 0, 0, 0) >= iParam1;
}

int func_211(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_349(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_212()
{
	if ((((((!func_210(-978159653, 1) && !func_210(2100131425, 1)) && !func_210(-2041382104, 1)) && !func_210(1815744868, 1)) && !func_210(1334018438, 1)) && !func_210(1055480217, 1)) && !func_210(-1916584960, 1))
	{
		iVar0 = func_344(0);
		Var1 = { func_350(1872063208, 0, 0) };
		Var6 = { func_351(1872063208, Var1, Var1.f_4, 0) };
		if (_0xf9933164965533b7(iVar0, &Var6))
		{
			_0xd740f11fbc8aef43(iVar0, &Var6, 0);
		}
	}
	else
	{
		iVar10 = func_344(0);
		Var11 = { func_350(1872063208, 0, 0) };
		Var16 = { func_351(1872063208, Var11, Var11.f_4, 0) };
		if (!_0xf9933164965533b7(iVar10, &Var16))
		{
			_0xd740f11fbc8aef43(iVar10, &Var16, 1);
		}
	}
}

bool func_213(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if ((((((((((((iParam0 == -1527293029 || iParam0 == 1059426360) || iParam0 == 488496242) || iParam0 == 1380607804) || iParam0 == -1753819339) || iParam0 == 149706141) || iParam0 == 2100131425) || iParam0 == -978159653) || iParam0 == -2041382104) || iParam0 == 1334018438) || iParam0 == 1815744868) || iParam0 == 1055480217) || iParam0 == -1916584960)
	{
		return true;
	}
	return false;
}

void func_214(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_39.f_5803 != iParam2 || iParam4 == 1)
	{
		Global_39.f_5803 = iParam2;
		uParam1->f_55 = 0;
		uParam1->f_56 = 0;
		func_352(uParam1, Global_39.f_5803);
		iVar0 = func_353(uParam1);
		sVar1 = func_354(Global_39.f_5803);
		if (iParam3 == 1)
		{
			task_swap_fishing_bait(player_ped_id(), sVar1, iVar0);
		}
		else
		{
			_0x9b0c7fa063e67629(player_ped_id(), sVar1, iVar0, 1);
		}
		func_355(uParam0);
		func_212();
		uParam0->f_58 = 0;
		func_356();
		func_101();
		func_357(uParam0);
	}
}

char* func_215(int iParam0)
{
	if (!func_345(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_358(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

char* func_216(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_359(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_217(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_346(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_360(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_361(iParam0, 0);
	}
	if (func_362(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_344(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_363(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_344(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_218(int iParam0)
{
	if (((((iParam0 == 1059426360 || iParam0 == 488496242) || iParam0 == 1380607804) || func_220(iParam0)) || iParam0 == 1309979101) || iParam0 == 1872063208)
	{
		return true;
	}
	return false;
}

bool func_219(int iParam0)
{
	if ((iParam0 == 2100131425 || iParam0 == -978159653) || iParam0 == -2041382104)
	{
		return true;
	}
	return false;
}

bool func_220(int iParam0)
{
	if (((iParam0 == 1334018438 || iParam0 == 1815744868) || iParam0 == 1055480217) || iParam0 == -1916584960)
	{
		return true;
	}
	return false;
}

void func_221(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_222()
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

int func_223(int iParam0)
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

int func_224(int iParam0, int iParam1, int iParam2)
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

bool func_225(int iParam0)
{
	return iParam0 != 0;
}

void func_226(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_227(var uParam0, var uParam1)
{
	uParam1->f_165 = get_random_int_in_range(uParam0->f_52, uParam0->f_53 + 1);
	func_93(&(uParam1->f_203));
}

void func_228(int iParam0)
{
	if (func_322(iParam0))
	{
		func_133(&(Global_1903071->f_5.f_6), iParam0);
	}
}

void func_229(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_56(uParam1, 8192) && func_56(uParam1, 16384))
	{
		return;
	}
	if (uParam1->f_163 == 0)
	{
		return;
	}
	if ((func_51(&(uParam1->f_160)) && func_52(&(uParam1->f_160)) > uParam1->f_166) && iParam3 != 0)
	{
		return;
	}
	iVar0 = func_77(uParam1);
	if (!func_126(iVar0))
	{
		return;
	}
	if (iParam3 == 0)
	{
		sVar1 = "LARGE_BITE_FISH_END";
		sVar2 = "LARGE_BITE_ROD_END";
	}
	else if (iParam3 == 1)
	{
		sVar1 = "LARGE_BITE_FISH_HOOKED";
		sVar2 = "LARGE_BITE_ROD_HOOKED";
	}
	else
	{
		sVar1 = "LARGE_BITE_FISH_FLEE";
		sVar2 = "LARGE_BITE_ROD_FLEE";
	}
	if (!func_56(uParam1, 8192) && _0x84848e1c0fc67dbb(uParam1->f_67))
	{
		_0xf1c5310feaa36b48(uParam1->f_67, sVar1, func_138(), *uParam0, 0, 0);
		_0x503703ec1781b7d6(uParam1->f_67, "FishSize", &(uParam2->f_278[iVar0]));
		func_301(uParam1, 8192);
	}
	if (!func_56(uParam1, 16384) && _0x84848e1c0fc67dbb(uParam1->f_68))
	{
		_0xf1c5310feaa36b48(uParam1->f_68, sVar2, player_ped_id(), *uParam0, 0, 0);
		_0x503703ec1781b7d6(uParam1->f_68, "FishSize", &(uParam2->f_278[iVar0]));
		func_301(uParam1, 16384);
	}
}

bool func_230(char* sParam0, int iParam1, bool bParam2)
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
		return true;
	}
	return false;
}

void func_231(var uParam0, int iParam1)
{
	iVar0 = func_364(iParam1);
	if (func_365(iVar0) && _0x19870c40c7ee15be(iVar0, &(uParam0->f_77[iParam1])))
	{
		_0xc3d581a34bc0a1f0(iVar0, &(uParam0->f_77[iParam1]));
		func_366(iParam1, 0f);
	}
}

void func_232(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_93[iParam1] != iParam2)
	{
		uParam0->f_93[iParam1] = iParam2;
	}
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_234(int iParam0)
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

void func_235(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_234(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_367(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_368(iVar0);
	*uParam0 = 0;
}

void func_236(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_237(var uParam0, int iParam1)
{
	iVar0 = func_369();
	if (func_61(iVar0))
	{
		iVar1 = func_370(iVar0);
		uParam0->f_216[iParam1] = iVar1;
	}
}

bool func_238(var uParam0, vector3 vParam1)
{
	iVar0 = func_371(uParam0, vParam1);
	iVar1 = func_372(vParam1);
	return (iVar0 == 1 && iVar1 == 1);
}

bool func_239(vector3 vParam0)
{
	if (get_distance_between_coords(vParam0, 2331.62f, -1216.34f, 45f, false) < 15f || get_distance_between_coords(vParam0, 210.38f, 1876.39f, 200.66f, false) < 125f)
	{
		return true;
	}
	return false;
}

bool func_240(vector3 vParam0, var uParam3, var uParam4)
{
	bVar4 = test_vertical_probe_against_all_water(func_140(vParam0, 1092616192), 0, &fVar0);
	bVar5 = get_ground_z_for_3d_coord(func_140(vParam0, 1092616192), &fVar1, false);
	fVar2 = (fVar0 - fVar1);
	fVar3 = func_373(uParam3);
	if ((bVar4 == 1 && bVar5 == 1) && fVar2 > fVar3)
	{
		if (fVar2 > 2f)
		{
			fVar2 = 2f;
		}
		*uParam4 = (fVar0 - (fVar2 / 2f));
		return true;
	}
	return false;
}

int func_241(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_374(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_242(int iParam0)
{
	if (!is_entity_dead(iParam0) && get_animal_tuning_bool_param(iParam0, 64))
	{
		return true;
	}
	return false;
}

bool func_243(var uParam0, var uParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (!is_entity_dead(&(uParam0->f_123[iVar0])) && &uParam0->f_123[iVar0] == *uParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_244(var uParam0)
{
	if (!func_51(uParam0))
	{
		return 0;
	}
	if (func_135(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_136() - round((uParam0->f_1 * 1000f)));
}

void func_245(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!network_get_entity_is_networked(iParam0))
	{
		network_register_entity_as_networked(iParam0);
	}
}

int func_246(int iParam0)
{
	iVar0 = 15;
	switch (iParam0)
	{
		case -2116748615:
		case 1867262572:
			iVar0 = 0;
			break;
		case 703712157:
		case 1493541632:
			iVar0 = 1;
			break;
		case -1182983171:
		case 264156159:
			iVar0 = 2;
			break;
		case -2022921611:
		case 1538187374:
			iVar0 = 3;
			break;
		case -300867788:
			iVar0 = 4;
			break;
		case 122748261:
		case 463643368:
			iVar0 = 5;
			break;
		case -711779521:
			iVar0 = 6;
			break;
		case -1553593715:
			iVar0 = 7;
			break;
		case 697075200:
			iVar0 = 8;
			break;
		case -452224784:
		case 706485280:
			iVar0 = 9;
			break;
		case -243188398:
		case 513249462:
			iVar0 = 10;
			break;
		case -1981561472:
		case 1520661:
			iVar0 = 11;
			break;
		case -1884490195:
		case 1860580756:
			iVar0 = 12;
			break;
		case 41707457:
		case 543892122:
			iVar0 = 13;
			break;
		case 134747314:
		case 490159652:
			iVar0 = 14;
			break;
		default:
			break;
	}
	return iVar0;
}

float func_247(int iParam0)
{
	fVar0 = func_375(iParam0, 1);
	fVar1 = func_376(iParam0, 1);
	fVar2 = get_random_float_in_range(fVar0, fVar1);
	fVar3 = func_377(fVar2);
	return fVar3;
}

int func_248(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2116748615:
		case 1520661:
		case 264156159:
		case 513249462:
		case 706485280:
		case 1493541632:
			iVar0 = 0;
			break;
		case -1981561472:
		case -1182983171:
		case -452224784:
		case -243188398:
		case 41707457:
		case 122748261:
		case 490159652:
		case 703712157:
		case 1860580756:
		case 1867262572:
			iVar0 = 1;
			break;
		case -2022921611:
		case -1884490195:
		case -1553593715:
		case -711779521:
		case -300867788:
		case 134747314:
		case 463643368:
		case 543892122:
		case 697075200:
		case 1538187374:
			iVar0 = 4;
			break;
		default:
			break;
	}
	return iVar0;
}

void func_249(int iParam0, int iParam1)
{
	func_378(iParam0, iParam1);
}

void func_250(var uParam0, int iParam1)
{
	if (does_entity_exist(func_138()))
	{
		set_entity_no_collision_entity(&(uParam0->f_123[iParam1]), func_138(), false);
	}
	if (does_entity_exist(func_141()))
	{
		set_entity_no_collision_entity(&(uParam0->f_123[iParam1]), func_141(), false);
	}
}

void func_251()
{
	if (does_entity_exist(func_141()) && is_entity_attached(func_141()))
	{
		detach_entity(func_141(), true, true);
	}
}

void func_252(var uParam0, var uParam1, int iParam2)
{
	if (func_51(&(uParam0->f_182)))
	{
		return;
	}
	if (!func_61(&(uParam1->f_247[iParam2])))
	{
		return;
	}
	if (uParam0->f_177 == 0)
	{
		uParam0->f_194 = func_379(uParam1, iParam2);
	}
	else
	{
		uParam0->f_194 = round((IntToFloat(uParam0->f_194) * 0.95f));
	}
	if (uParam0->f_194 < 4000)
	{
		uParam0->f_194 = 4000;
	}
	if (uParam0->f_177 > 0)
	{
		func_380(uParam0);
	}
	uParam0->f_177++;
	func_53(&(uParam0->f_185));
	func_53(&(uParam0->f_191));
	func_93(&(uParam0->f_182));
	func_53(&(uParam0->f_188));
	func_53(&(uParam0->f_196));
}

void func_253(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_126(iParam3))
	{
		return;
	}
	if (_0x84848e1c0fc67dbb(uParam1->f_69))
	{
		_0xf1c5310feaa36b48(uParam1->f_69, "STRUGGLE", &(uParam2->f_123[iParam3]), *uParam0, 0, 0);
		_0x503703ec1781b7d6(uParam1->f_69, "FishSize", &(uParam2->f_278[iParam3]));
	}
}

int func_254(var uParam0)
{
	if (func_51(&(uParam0->f_188)))
	{
		iVar0 = round((to_float(func_52(&(uParam0->f_188))) / 2f));
	}
	iVar1 = (uParam0->f_194 - iVar0);
	if (iVar1 < 4000)
	{
		iVar1 = 4000;
	}
	if (func_51(&(uParam0->f_182)) && func_52(&(uParam0->f_182)) >= iVar1)
	{
		return 1;
	}
	return 0;
}

int func_255(var uParam0)
{
	if (func_263(uParam0, 0) || uParam0->f_200 == 7)
	{
		return 1;
	}
	return 0;
}

bool func_256(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_381(uParam1, iParam2);
	iVar0 = round((IntToFloat(iVar0) * 0.95f));
	return to_float(func_244(&(uParam0->f_12))) >= IntToFloat(iVar0 * 1000);
}

void func_257(var uParam0, var uParam1, int iParam2)
{
	if (func_51(&(uParam0->f_185)))
	{
		return;
	}
	if (!func_61(&(uParam1->f_247[iParam2])))
	{
		return;
	}
	if (uParam0->f_178 == 0)
	{
		uParam0->f_195 = func_382(uParam1, iParam2);
	}
	else
	{
		uParam0->f_195 = round((IntToFloat(uParam0->f_195) / 0.98f));
	}
	if (uParam0->f_195 > 10000)
	{
		uParam0->f_195 = 10000;
	}
	uParam0->f_178++;
	func_53(&(uParam0->f_182));
	func_53(&(uParam0->f_188));
	func_93(&(uParam0->f_185));
	func_53(&(uParam0->f_191));
}

int func_258(var uParam0)
{
	if (func_51(&(uParam0->f_191)))
	{
		iVar0 = round((to_float(func_52(&(uParam0->f_191))) / 2f));
	}
	iVar1 = (uParam0->f_195 + iVar0);
	if (iVar1 > 10000)
	{
		iVar1 = 10000;
	}
	if ((((func_51(&(uParam0->f_185)) && func_52(&(uParam0->f_185)) >= iVar1) && !func_263(uParam0, 0)) && uParam0->f_200 != 7) && func_270(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_259(var uParam0, var uParam1)
{
	iVar0 = round((to_float(uParam1->f_195) / 2f));
	if ((((((func_51(&(uParam1->f_185)) && func_52(&(uParam1->f_185)) >= iVar0) && func_51(&(uParam0->f_12))) && func_52(&(uParam0->f_12)) >= iVar0) && !func_263(uParam1, 0)) && uParam1->f_200 != 7) && func_270(uParam1))
	{
		return 1;
	}
	return 0;
}

void func_260(var uParam0)
{
	if (!func_51(uParam0))
	{
	}
	if (!func_135(uParam0))
	{
		uParam0->f_2 = (func_273() - uParam0->f_1);
		func_342(uParam0, 2);
	}
}

bool func_261()
{
	return true;
}

void func_262(var uParam0)
{
	if (!func_51(uParam0))
	{
	}
	if (func_135(uParam0))
	{
		uParam0->f_1 = (func_273() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_343(uParam0, 2);
	}
}

bool func_263(var uParam0, int iParam1)
{
	if (func_308(2, 1))
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	else if (Global_1903071->f_5.f_2 <= 1f)
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	else if (uParam0->f_200 == 8)
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	return false;
}

bool func_264(var uParam0)
{
	if (!does_entity_exist(uParam0->f_8))
	{
		iVar0 = func_383(1059426360);
		if (iVar0 != 0)
		{
			request_model(iVar0, false);
			if (has_model_loaded(iVar0))
			{
				uParam0->f_8 = create_object(iVar0, Global_35, false, false, false, false, false);
				set_entity_visible(uParam0->f_8, false);
				set_entity_collision(uParam0->f_8, false, false);
				set_entity_invincible(uParam0->f_8, true);
				set_object_targettable(uParam0->f_8, false);
				set_model_as_no_longer_needed(iVar0);
			}
		}
	}
	return does_entity_exist(uParam0->f_8);
}

bool func_265(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_16 != -99999f)
	{
		fVar0 = func_274(Global_35, func_143(uParam1, iParam2));
		if ((fVar0 < 5f && uParam0->f_16 > 0.01f) || (fVar0 < 10f && uParam0->f_16 > 0.05f))
		{
			return true;
		}
	}
	return false;
}

void func_266(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_200 != 5)
	{
		vVar0 = { get_offset_from_entity_in_world_coords(player_ped_id(), 0f, 15f, 0f) };
		vVar0.x = (vVar0.x + get_random_float_in_range(-10f, 10f));
		vVar0.f_1 = (vVar0.y + get_random_float_in_range(-10f, 10f));
		vVar3 = { func_271(vVar0, 0) };
		if (!func_38(vVar3))
		{
			fVar6 = func_384(vVar3, 0);
			fVar7 = func_373(get_entity_model(&(uParam1->f_123[iParam2])));
			if (fVar6 > fVar7 && !func_385(vVar3))
			{
				vVar8 = { vVar3 };
				vVar8.f_2 = (vVar8.z - 0.25f);
				func_386(uParam0, vVar8);
				uParam0->f_200 = 5;
				uParam0->f_223 = 1;
			}
			else
			{
				uParam0->f_200 = 6;
			}
		}
		else
		{
			uParam0->f_200 = 6;
		}
	}
}

bool func_267(var uParam0, var uParam1, int iParam2)
{
	if (!func_270(uParam0))
	{
		return false;
	}
	if (func_387(uParam0, uParam1, iParam2))
	{
		return true;
	}
	if (!func_156(&(uParam1->f_123[iParam2]), 1227113341))
	{
		return true;
	}
	if (func_388(&(uParam1->f_123[iParam2]), uParam0->f_8, 0, 1) < 1f)
	{
		return true;
	}
	if (uParam0->f_200 != 2 && func_388(player_ped_id(), &(uParam1->f_123[iParam2]), 0, 1) < 6f)
	{
		return true;
	}
	if (func_51(&(uParam0->f_215)) && func_52(&(uParam0->f_215)) > 3000)
	{
		if ((uParam0->f_201 == 4 && IntToFloat(func_127()) < -25f) || (uParam0->f_201 == 3 && IntToFloat(func_127()) > 25f))
		{
			uParam0->f_218 = 1;
			return true;
		}
	}
	return false;
}

void func_268(var uParam0, var uParam1, var uParam2, int iParam3, vector3 vParam4)
{
	fVar0 = func_389(player_ped_id(), &(uParam2->f_123[iParam3]), 1);
	iVar2 = get_random_int_in_range(0, 2);
	fVar3 = func_373(get_entity_model(&(uParam2->f_123[iParam3])));
	if (uParam1->f_218 == 1)
	{
		if (func_127() < 0)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = 1;
		}
	}
	if (func_388(player_ped_id(), &(uParam2->f_123[iParam3]), 0, 1) < 6f)
	{
		uParam1->f_200 = 2;
	}
	else if (!func_81(uParam2, iParam3))
	{
		fVar1 = (fVar0 + IntToFloat(get_random_int_in_range(-10, 10)));
		uParam1->f_200 = 1;
	}
	else if (func_390(iVar2))
	{
		fVar1 = (fVar0 - IntToFloat(get_random_int_in_range(65, 85)));
		uParam1->f_200 = 4;
	}
	else if (func_391(iVar2))
	{
		fVar1 = (fVar0 + IntToFloat(get_random_int_in_range(65, 85)));
		uParam1->f_200 = 3;
	}
	else
	{
		fVar1 = (fVar0 + IntToFloat(get_random_int_in_range(-10, 10)));
		uParam1->f_200 = 1;
	}
	if (uParam1->f_200 == 2)
	{
		vVar4 = { get_offset_from_entity_in_world_coords(player_ped_id(), 0f, (6f + 1f), 0f) };
		vVar7 = { func_271(vVar4, 0) };
	}
	else
	{
		vVar4 = { _get_object_offset_from_coords(vParam4, fVar1, 0f, 2.5f, 0f) };
		vVar7 = { func_271(vVar4, 0) };
	}
	if (!func_38(vVar7))
	{
		fVar10 = func_384(vVar7, 0);
		if ((!func_392(uParam1, fVar10, fVar3) || !func_238(uParam0, vVar7)) || func_385(vVar7))
		{
			uParam1->f_200 = 6;
		}
		else
		{
			vVar11 = { vVar7 };
			vVar11.f_2 = (vVar11.z - 0.25f);
			func_386(uParam1, vVar11);
		}
	}
}

void func_269(var uParam0, var uParam1, int iParam2)
{
	if (func_131())
	{
		uParam0->f_222 = 1f;
	}
	else if (func_393())
	{
		uParam0->f_222 = 1.5f;
	}
	else if (func_81(uParam1, iParam2))
	{
		uParam0->f_222 = 3f;
	}
	else
	{
		uParam0->f_222 = 1.5f;
	}
}

bool func_270(var uParam0)
{
	return (uParam0->f_16 != -99999f && uParam0->f_16 < 0.03f);
}

Vector3 func_271(vector3 vParam0, int iParam3)
{
	iVar0 = 1;
	if (iParam3 == 1)
	{
		iVar0 = 0;
	}
	vVar1 = { 0f, 0f, 0f };
	bVar6 = test_vertical_probe_against_all_water(func_140(vParam0, 1092616192), iVar0, &fVar4);
	bVar7 = get_ground_z_for_3d_coord(func_140(vParam0, 1092616192), &fVar5, false);
	if ((bVar6 == 1 || bVar7 == 0) || fVar4 > fVar5)
	{
		vVar1.x = vParam0.x;
		vVar1.f_1 = vParam0.y;
		vVar1.f_2 = fVar4;
	}
	return vVar1;
}

void func_272(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_126(iParam3))
	{
		return;
	}
	iVar0 = func_394(uParam1);
	if (iVar0 > -1)
	{
		_0xdcf5ba95bbf0faba(&(uParam1->f_70[iVar0]), "VFX_SPLASH", func_139(), *uParam0, 0, 0, 1);
		_0x503703ec1781b7d6(&(uParam1->f_70[iVar0]), "FishSize", &(uParam2->f_278[iParam3]));
	}
}

float func_273()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

float func_274(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_275(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 1))
	{
		return;
	}
	func_110(uParam1);
	if (func_56(uParam1, 128))
	{
		func_395(uParam1, uParam2);
		func_111(uParam0, uParam1, uParam2, 0, 0);
	}
	func_43(uParam1, uParam2, -1);
	func_228(512);
	uParam1->f_1 = 0;
	func_301(uParam1, 1);
	Global_1903071->f_5.f_6 = 0;
	func_302(1);
	func_302(2);
	func_302(4);
	func_302(8);
	func_302(16);
	func_302(32);
	uParam1->f_167 = 0;
	uParam1->f_194 = 0;
	uParam1->f_195 = 0;
	uParam1->f_177 = 0;
	uParam1->f_178 = 0;
	uParam1->f_200 = 0;
	uParam1->f_202 = 0f;
	uParam1->f_172 = 0;
	uParam1->f_173 = 0;
	uParam1->f_174 = 0;
	uParam1->f_175 = 0;
	uParam1->f_176 = 0;
	uParam1->f_156 = 0;
	uParam1->f_3 = 0;
	uParam1->f_168 = 1f;
	func_53(&(uParam1->f_169));
	func_53(&(uParam1->f_203));
	func_53(&(uParam1->f_182));
	func_53(&(uParam1->f_185));
	func_53(&(uParam1->f_188));
	func_53(&(uParam1->f_191));
	func_53(&(uParam1->f_179));
	func_53(&(uParam1->f_160));
	func_114(uParam1, 0);
	func_40(&(uParam0->f_82), 0);
	func_287(uParam0, uParam0->f_4);
	func_47(uParam0);
	func_120(uParam0, 16);
	func_20(&(uParam0->f_19));
	func_53(&(uParam0->f_73));
	func_53(&(uParam0->f_76));
	uParam0->f_47 = func_204();
	uParam0->f_48 = func_332(uParam0->f_47);
	func_357(uParam0);
	func_22(uParam1);
	func_23(uParam1);
	func_24(uParam1);
	func_212();
}

bool func_276()
{
	return ((func_396() || func_397()) || func_398());
}

bool func_277()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_278(var uParam0, int iParam1, int iParam2)
{
	if (func_107(uParam0[iParam1]))
	{
		func_108();
		func_207(&(uParam0->f_442), 3f);
	}
	if (iParam2 == 1)
	{
		func_125(uParam0, iParam1);
	}
}

bool func_279()
{
	if (func_276())
	{
		return true;
	}
	return false;
}

int func_280(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (((((func_276() || func_399(&(uParam0->f_82), iParam1)) || func_107(&(uParam0->f_82[iParam1]))) || func_400(&(uParam0->f_82), iParam1)) || ((iParam2 == 0 && func_51(&(uParam0->f_82.f_442))) && func_52(&(uParam0->f_82.f_442)) < 3000)) || (iParam2 == 0 && func_277()))
	{
		return 0;
	}
	func_108();
	if (iParam1 == 58)
	{
		uParam0->f_82[iParam1] = func_403(_create_var_string(10, func_401(iParam1), func_402(Global_1903071->f_37)), iParam3, 0, 0, 0, 1);
	}
	else
	{
		uParam0->f_82[iParam1] = func_403(func_401(iParam1), iParam3, 0, 0, 0, 1);
	}
	if (iParam4 == 1)
	{
		uParam0->f_82.f_74[iParam1] = 1;
	}
	func_93(&(uParam0->f_82.f_442));
	return 1;
}

bool func_281()
{
	if (func_293())
	{
		return false;
	}
	return true;
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_46())
	{
		return;
	}
	if (iParam1 == 3)
	{
		if (_uiprompt_is_valid(uParam0->f_70))
		{
			return;
		}
	}
	else if (func_234(&(uParam0->f_60[iParam1])))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_GRIP", -128997553, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_405(&(uParam0->f_60[iParam1]), 1);
			iVar0 = func_367(&(uParam0->f_60[iParam1]));
			if (_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
			{
				_uiprompt_set_tag((*Global_1951255)[iVar0]->f_3, "CTX_GRIP");
			}
			break;
		case 1:
			if (Global_1903071->f_5 == 6 || Global_1903071->f_5 == 10)
			{
				uParam0->f_60[iParam1] = func_404("MGFSH_CTX_RESET", -1274373157, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			else
			{
				uParam0->f_60[iParam1] = func_404("MGFSH_CTX_CUT_LINE", -1274373157, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			break;
		case 2:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_HOOK", -1580396486, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_406(&(uParam0->f_60[iParam1]), 0, 1, 1);
			func_405(&(uParam0->f_60[iParam1]), 1);
			func_407(&(uParam0->f_60[iParam1]), 130948705);
			iVar0 = func_367(&(uParam0->f_60[iParam1]));
			if (_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
			{
				_uiprompt_set_tag((*Global_1951255)[iVar0]->f_3, "CTX_HOOK");
			}
			break;
		case 3:
			uParam0->f_528 = _0x5952dfa38fa529fe();
			uParam0->f_70 = _uiprompt_register_begin();
			_0xf4a5c4509bf923b1(uParam0->f_70, 0);
			if (_is_using_keyboard(0) || uParam0->f_528 == 1)
			{
				_uiprompt_set_control_action(uParam0->f_70, -1560021918);
			}
			else
			{
				_uiprompt_set_control_action(uParam0->f_70, 1339352408);
				_uiprompt_set_control_action(uParam0->f_70, -1779240557);
				_uiprompt_set_rotate_mode(uParam0->f_70, 0f, 0);
			}
			_uiprompt_set_attribute(uParam0->f_70, 10, 1);
			_uiprompt_set_attribute(uParam0->f_70, 11, 1);
			_uiprompt_set_attribute(uParam0->f_70, 18, 1);
			if (iParam2 == 1)
			{
				_uiprompt_set_text(uParam0->f_70, "MGFSH_CTX_REEL_LURE");
			}
			else
			{
				_uiprompt_set_text(uParam0->f_70, "MGFSH_CTX_REEL_IN");
			}
			_uiprompt_set_tag(uParam0->f_70, "CTX_REEL");
			_uiprompt_register_end(uParam0->f_70);
			break;
		case 4:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_CONTROL", 1773209123, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_405(&(uParam0->f_60[iParam1]), 1);
			break;
		case 5:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_THROW_BACK", -246426571, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			break;
		case 6:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_KEEP", 1388692298, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			if (iParam3 == 0)
			{
				func_406(&(uParam0->f_60[iParam1]), 0, 1, 1);
			}
			break;
		case 7:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_CHOOSE", -1404316431, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_405(&(uParam0->f_60[iParam1]), 1);
			func_407(&(uParam0->f_60[iParam1]), -1304887797);
			func_407(&(uParam0->f_60[iParam1]), 1618006066);
			break;
		case 8:
			uParam0->f_60[iParam1] = func_404(_create_var_string(10, "MGFSH_CTX_EQUIP", func_216(func_215(uParam0->f_58), 109029619)), 636822989, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			break;
	}
}

void func_283(var uParam0, var uParam1, var uParam2)
{
	if ((!func_213(uParam0->f_57) || Global_39.f_5803 == uParam0->f_57) || func_293())
	{
		func_132(uParam0, 8);
		return;
	}
	if (!func_213(Global_39.f_5803))
	{
		if (uParam0->f_58 == 0)
		{
			if (func_210(uParam0->f_57, 1))
			{
				uParam0->f_58 = uParam0->f_57;
			}
			else if (func_210(1059426360, 1))
			{
				uParam0->f_58 = 1059426360;
			}
			else if (func_210(488496242, 1))
			{
				uParam0->f_58 = 488496242;
			}
			else if (func_210(1380607804, 1))
			{
				uParam0->f_58 = 1380607804;
			}
			else if (func_210(-1753819339, 1))
			{
				uParam0->f_58 = -1753819339;
			}
			else if (func_210(-1527293029, 1))
			{
				uParam0->f_58 = -1527293029;
			}
			else if (func_210(149706141, 1))
			{
				uParam0->f_58 = 149706141;
			}
			else if (func_210(2100131425, 1))
			{
				uParam0->f_58 = 2100131425;
			}
			else if (func_210(-978159653, 1))
			{
				uParam0->f_58 = -978159653;
			}
			else if (func_210(-2041382104, 1))
			{
				uParam0->f_58 = -2041382104;
			}
			else if (func_210(1334018438, 1))
			{
				uParam0->f_58 = 1334018438;
			}
			else if (func_210(1815744868, 1))
			{
				uParam0->f_58 = 1815744868;
			}
			else if (func_210(1055480217, 1))
			{
				uParam0->f_58 = 1055480217;
			}
			else if (func_210(-1916584960, 1))
			{
				uParam0->f_58 = -1916584960;
			}
			else
			{
				uParam0->f_58 = 0;
			}
		}
		if (uParam0->f_58 == 0)
		{
			func_132(uParam0, 8);
		}
		else
		{
			func_282(uParam0, 8, 0, 1);
		}
	}
	if (func_408(&(uParam0->f_60[8]), 1))
	{
		Global_1903071->f_36 = uParam0->f_58;
	}
}

void func_284(var uParam0, var uParam1)
{
	if (Global_1903071->f_36 != 0)
	{
		if (Global_1903071->f_36 != Global_39.f_5803 && func_213(Global_1903071->f_36))
		{
			func_214(uParam0, uParam1, Global_1903071->f_36, 1, 0);
		}
		Global_1903071->f_36 = 0;
	}
}

void func_285(var uParam0)
{
	if (!func_56(uParam0, 1024))
	{
		Global_1903071->f_5.f_1 = 30f;
		func_301(uParam0, 1024);
	}
}

void func_286(var uParam0)
{
	switch (Global_1903071->f_5.f_16)
	{
		case -1:
			func_278(&(uParam0->f_82), 15, 1);
			func_278(&(uParam0->f_82), 16, 1);
			func_278(&(uParam0->f_82), 17, 1);
			func_278(&(uParam0->f_82), 18, 1);
			func_278(&(uParam0->f_82), 19, 1);
			func_278(&(uParam0->f_82), 20, 1);
			func_278(&(uParam0->f_82), 21, 1);
			if (func_213(Global_39.f_5803))
			{
				func_280(uParam0, 25, 1, -1, 1);
			}
			break;
		case 1:
			if (is_control_just_pressed(0, 130948705))
			{
				func_280(uParam0, 15, 1, -2, 0);
			}
			break;
		case 3:
			if (is_control_just_pressed(0, 130948705))
			{
				func_280(uParam0, 16, 1, -2, 0);
			}
			break;
		case 2:
			if (is_control_just_pressed(0, 130948705))
			{
				func_280(uParam0, 17, 1, -2, 0);
			}
			break;
		case 4:
			if (is_control_just_pressed(0, 130948705))
			{
				func_280(uParam0, 18, 1, -2, 0);
			}
			break;
		case 5:
			if (is_control_just_pressed(0, 130948705))
			{
				func_280(uParam0, 19, 1, -2, 0);
			}
			break;
		case 6:
			if (is_control_just_pressed(0, 130948705))
			{
				func_280(uParam0, 20, 1, -2, 0);
			}
			break;
		case 7:
			if (is_control_just_pressed(0, 130948705))
			{
				func_280(uParam0, 21, 1, -2, 0);
			}
			break;
	}
}

void func_287(var uParam0, char* sParam1)
{
	if (!are_strings_equal(uParam0->f_3, sParam1))
	{
		uParam0->f_3 = sParam1;
		_0xac84686c06184b0d(uParam0->f_3, uParam0->f_1);
	}
}

void func_288(var uParam0)
{
	if (func_34(uParam0, 32))
	{
		return;
	}
	if (func_230("BOB_FISHING_START", 0, 0))
	{
		func_35(uParam0, 32);
	}
}

void func_289(var uParam0)
{
	if (!func_182(2))
	{
		if (func_308(16, 1) || func_409(uParam0))
		{
			func_93(&(uParam0->f_157));
			func_410(2);
		}
	}
}

void func_290(var uParam0, var uParam1)
{
	if (func_56(uParam1, 2))
	{
		return;
	}
	func_301(uParam1, 2);
	func_227(uParam0, uParam1);
	func_8(uParam1);
	func_114(uParam1, 1);
	uParam1->f_155++;
	func_47(uParam0);
	func_411(&(uParam0->f_82), 39, 30);
	if (does_entity_exist(func_138()))
	{
		_0x978aa2323ed32209(func_138(), 0.1f);
	}
	if (does_entity_exist(func_141()))
	{
		_0x978aa2323ed32209(func_141(), 0.1f);
	}
}

void func_291(var uParam0)
{
	if ((!func_56(uParam0, 512) && func_51(&(uParam0->f_169))) && func_412(&(uParam0->f_169)) < 6f)
	{
		uParam0->f_168 = 2f;
	}
	else
	{
		uParam0->f_168 = 1f;
	}
}

void func_292(var uParam0, var uParam1)
{
	if (!func_182(2))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		switch (&uParam1->f_93[iVar0])
		{
			case 0:
				if (func_413(uParam0, uParam1, iVar1))
				{
					func_232(uParam1, iVar1, 1);
					func_93(uParam1->f_109[iVar0]);
				}
				else
				{
					func_231(uParam1, iVar1);
				}
				break;
			case 1:
				if (func_414(uParam0, uParam1, iVar1))
				{
					func_231(uParam1, iVar1);
					func_232(uParam1, iVar1, 0);
					func_93(uParam1->f_109[iVar0]);
				}
				else
				{
					func_415(uParam0, uParam1, iVar1);
				}
				break;
			case 2:
				func_231(uParam1, iVar1);
				break;
		}
		iVar0++;
	}
}

bool func_293()
{
	if (func_46())
	{
		return true;
	}
	return false;
}

int func_294(var uParam0)
{
	if (!func_51(&(uParam0->f_73)) || func_161(&(uParam0->f_73)) < 3f)
	{
		return 0;
	}
	if (func_213(Global_39.f_5803))
	{
		if (func_219(Global_39.f_5803) || func_220(Global_39.f_5803))
		{
			return 1;
		}
	}
	return 0;
}

void func_295(var uParam0, int iParam1)
{
	if (!is_control_pressed(0, -128997553))
	{
		func_282(uParam0, 0, 0, 1);
		func_416(uParam0, 0, iParam1);
		if (!func_51(&(uParam0->f_73)))
		{
			func_93(&(uParam0->f_73));
		}
	}
	else
	{
		func_416(uParam0, 0, iParam1);
		func_132(uParam0, 0);
		func_53(&(uParam0->f_73));
	}
}

void func_296(var uParam0, var uParam1)
{
	if (uParam1->f_54 == 0 || uParam1->f_54 == 1)
	{
		func_282(uParam0, 2, 0, 1);
	}
	else
	{
		func_132(uParam0, 2);
	}
}

void func_297(var uParam0, var uParam1, var uParam2)
{
	if ((((((func_293() || (Global_1903071->f_5 == 6 && !func_182(2))) || (Global_1903071->f_5 == 6 && !is_control_pressed(0, -128997553))) || (Global_1903071->f_5 == 10 && !func_182(2))) || (Global_1903071->f_5 == 10 && !is_control_pressed(0, -128997553))) || _0x6cd79468a1e595c6(0)) || uParam0->f_528 != _0x5952dfa38fa529fe())
	{
		func_132(uParam0, 3);
		func_53(&(uParam0->f_76));
		uParam0->f_528 = _0x5952dfa38fa529fe();
		return;
	}
	if (!_uiprompt_is_valid(uParam0->f_70))
	{
		iVar0 = 0;
		if (Global_1903071->f_5 == 6)
		{
			if (func_219(Global_39.f_5803) || func_220(Global_39.f_5803))
			{
				iVar0 = 1;
			}
		}
		func_282(uParam0, 3, iVar0, 1);
	}
	if (!_uiprompt_is_valid(uParam0->f_70))
	{
		return;
	}
	fVar1 = 0f;
	if (Global_1903071->f_5.f_4 != 0f)
	{
		func_416(uParam0, 3, 0);
		func_53(&(uParam0->f_76));
		fVar1 = Global_1903071->f_5.f_4;
	}
	else if (Global_1903071->f_5 == 6 || Global_1903071->f_5 == 10)
	{
		if (uParam1->f_54 != 0)
		{
			if (func_417(uParam0))
			{
				func_416(uParam0, 3, 1);
			}
			else
			{
				func_416(uParam0, 3, 0);
			}
		}
		else
		{
			func_416(uParam0, 3, 0);
		}
	}
	else
	{
		iVar2 = func_77(uParam1);
		if (func_126(iVar2) && !func_81(uParam2, iVar2))
		{
			if (func_418(uParam0))
			{
				func_416(uParam0, 3, 1);
			}
			else
			{
				func_416(uParam0, 3, 0);
			}
		}
		else
		{
			func_416(uParam0, 3, 0);
			func_53(&(uParam0->f_76));
		}
	}
	fVar1 = func_183(fVar1, -1f, 1f);
	if (fVar1 > 0f)
	{
		fVar3 = get_control_normal(2, 1339352408);
		fVar4 = get_control_normal(2, -1779240557);
		vVar5 = { func_419(fVar3, fVar4, 0f) };
		vVar8 = { 0f, -1f, 0f };
		fVar11 = get_angle_between_2d_vectors(vVar5.x, vVar5.y, vVar8.x, vVar8.y);
		fVar12 = (fVar11 / 360f);
		if (fVar3 < 0f)
		{
			fVar12 = (1f - fVar12);
		}
		fVar12 = func_183(fVar12, 0f, 1f);
		fVar12 = (fVar12 + 0.5f);
		if (fVar12 > 1f)
		{
			fVar12 = (fVar12 - 1f);
		}
		if (!_is_using_keyboard(0))
		{
			_uiprompt_set_spinner_position(uParam0->f_70, fVar12);
		}
	}
}

void func_298(var uParam0, var uParam1)
{
	if ((Global_1903071->f_5 == 6 && !func_56(uParam1, 4096)) && func_213(Global_39.f_5803))
	{
		if (uParam1->f_54 == 1)
		{
			func_280(uParam0, 30, 1, func_420(uParam0), 1);
			if (_is_using_keyboard(0) && _0xf4cb347d7b5eb0fd())
			{
				if (_0x5952dfa38fa529fe())
				{
					func_280(uParam0, 34, 0, -2, 1);
				}
				else
				{
					func_280(uParam0, 33, 0, -2, 1);
				}
			}
			else if (_0x5952dfa38fa529fe())
			{
				func_280(uParam0, 32, 0, -2, 1);
			}
			else
			{
				func_280(uParam0, 31, 0, -2, 1);
			}
			func_280(uParam0, 37, 0, -2, 1);
			func_280(uParam0, 39, 0, -2, 1);
		}
		else
		{
			func_280(uParam0, 30, 1, func_420(uParam0), 1);
			func_280(uParam0, 37, 0, -2, 1);
			func_280(uParam0, 39, 0, -2, 1);
		}
	}
}

void func_299(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_77(uParam1);
	if ((!func_126(iVar0) && func_213(Global_39.f_5803)) && !func_293())
	{
		func_421(uParam0, uParam1, uParam2);
	}
	iVar0 = func_77(uParam1);
	if (func_126(iVar0))
	{
		if (!func_422(uParam0, uParam1, uParam2))
		{
			func_423(uParam0, uParam1, uParam2);
		}
		else
		{
			func_228(512);
			if (uParam1->f_163 == 1)
			{
				func_23(uParam1);
				if (func_51(&(uParam1->f_160)) && func_52(&(uParam1->f_160)) > uParam1->f_166)
				{
					func_229(uParam0, uParam1, uParam2, 0);
				}
				else
				{
					func_229(uParam0, uParam1, uParam2, 2);
				}
			}
			func_416(uParam0, 2, 0);
			func_424(uParam0, 2, 0);
			func_111(uParam0, uParam1, uParam2, 1, 0);
			uParam1->f_156 = 0;
			uParam1->f_55++;
			func_425(uParam0, uParam1, 1, 0);
		}
	}
}

bool func_300(var uParam0, var uParam1)
{
	if (func_56(uParam1, 4096))
	{
		return true;
	}
	else if (func_322(128))
	{
		return true;
	}
	else if (func_426(uParam0, uParam1))
	{
		return true;
	}
	else if (uParam1->f_54 == 0 && !func_213(Global_39.f_5803))
	{
		return true;
	}
	else if (func_427())
	{
		return true;
	}
	else if (func_182(8))
	{
		return true;
	}
	return false;
}

void func_301(var uParam0, int iParam1)
{
	if (!func_56(uParam0, iParam1))
	{
		func_123(&(uParam0->f_1), iParam1);
	}
}

void func_302(int iParam0)
{
	if (func_182(iParam0))
	{
		func_133(&(Global_1903071->f_2), iParam0);
	}
}

bool func_303(var uParam0, var uParam1, var uParam2)
{
	if (func_213(Global_39.f_5803))
	{
		if (func_408(&(uParam0->f_60[2]), 1) || func_308(1, 1))
		{
			if (func_428(uParam0, uParam1, uParam2))
			{
				func_429(uParam0, uParam1, uParam2, func_77(uParam1));
				func_47(uParam0);
				func_287(uParam0, uParam0->f_7);
				return true;
			}
			else if (func_430(uParam1))
			{
				func_111(uParam0, uParam1, uParam2, 1, 0);
				if (uParam1->f_163 == 1)
				{
					func_280(uParam0, 41, 1, -2, 1);
				}
				else
				{
					func_280(uParam0, 42, 1, -2, 1);
				}
				uParam1->f_55++;
				func_425(uParam0, uParam1, 1, 0);
				func_180(1, 1);
				return true;
			}
		}
	}
	return false;
}

void func_304(var uParam0)
{
	if (!func_56(uParam0, 256))
	{
		if (func_308(1, 1))
		{
			func_301(uParam0, 256);
			if (func_51(&(uParam0->f_169)) && func_161(&(uParam0->f_169)) < 10f)
			{
				func_301(uParam0, 512);
			}
			else
			{
				func_96(uParam0, 512);
			}
			func_93(&(uParam0->f_169));
		}
		else if ((func_56(uParam0, 512) && func_51(&(uParam0->f_169))) && func_161(&(uParam0->f_169)) > 10f)
		{
			func_96(uParam0, 512);
		}
	}
	else if (!func_308(1, 0))
	{
		func_96(uParam0, 256);
	}
}

bool func_305(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_77(uParam1);
	if (func_126(iVar0))
	{
		func_431(uParam0, uParam1, uParam2, iVar0);
		func_432(uParam0, uParam1, uParam2, iVar0);
		func_433(uParam1);
	}
	else
	{
		uParam1->f_174 = 0;
		uParam1->f_173 = 0;
		uParam1->f_172 = 0;
	}
	if (func_434(uParam0, uParam1, uParam2, iVar0))
	{
		return true;
	}
	return false;
}

void func_306(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 524288))
	{
		return;
	}
	func_301(uParam1, 524288);
	func_47(uParam0);
	_0xa33f5069b0cb89b8();
	func_435();
	func_251();
	uParam1->f_56++;
	iVar0 = 0;
	iVar1 = func_77(uParam1);
	if (!func_126(iVar1) || is_entity_dead(&(uParam2->f_123[iVar1])))
	{
		iVar0 = 1;
	}
	func_425(uParam0, uParam1, 2, iVar0);
	func_111(uParam0, uParam1, uParam2, 0, 1);
}

void func_307(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	iVar1 = func_77(uParam1);
	if (func_126(iVar1))
	{
		if (func_81(uParam2, iVar1))
		{
			func_278(&(uParam0->f_82), 46, iVar0);
			func_278(&(uParam0->f_82), 47, iVar0);
			if (func_51(&(uParam1->f_182)) && func_52(&(uParam1->f_182)) < 4000)
			{
				if (uParam1->f_177 <= 1)
				{
					func_280(uParam0, 43, 1, 10000, 1);
				}
				else
				{
					func_280(uParam0, 45, 0, 10000, 1);
				}
			}
		}
		else
		{
			func_278(&(uParam0->f_82), 43, iVar0);
			func_278(&(uParam0->f_82), 45, iVar0);
			if (uParam1->f_178 > 0)
			{
				if (_0x5952dfa38fa529fe())
				{
					func_280(uParam0, 47, 1, 10000, 1);
				}
				else
				{
					func_280(uParam0, 46, 1, 10000, 1);
				}
				if (_is_using_keyboard(0) && !_0x5952dfa38fa529fe())
				{
					func_280(uParam0, 72, 0, 10000, 1);
				}
			}
		}
	}
	else
	{
		func_278(&(uParam0->f_82), 43, iVar0);
		func_278(&(uParam0->f_82), 45, iVar0);
		func_278(&(uParam0->f_82), 46, iVar0);
		func_278(&(uParam0->f_82), 47, iVar0);
		func_278(&(uParam0->f_82), 72, iVar0);
	}
}

bool func_308(int iParam0, int iParam1)
{
	if (func_122(Global_1903071->f_5.f_5, iParam0))
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	return false;
}

void func_309(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 131072))
	{
		return;
	}
	func_301(uParam1, 131072);
	func_436(uParam0, uParam1, uParam2);
	iVar0 = func_77(uParam1);
	if (func_126(iVar0))
	{
		if (!is_entity_dead(&(uParam2->f_123[iVar0])))
		{
			_0x8ac1d721b2097b6e(&(uParam2->f_123[iVar0]), 75f, 75f);
		}
		func_21(uParam1, uParam2, iVar0, 0, 0);
	}
	if (!func_48(16))
	{
		func_280(uParam0, 55, 1, -2, 1);
	}
}

void func_310(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 8))
	{
		return;
	}
	func_301(uParam1, 8);
	iVar0 = func_77(uParam1);
	if (!func_126(iVar0))
	{
	}
	else
	{
		Global_1903071->f_52 = Global_1903071->f_38;
		Global_1903071->f_53 = get_entity_model(&(uParam2->f_123[iVar0]));
		func_145(uParam2, iVar0, 9);
		uParam0->f_59 = 1;
		iVar1 = func_437(uParam1);
		iVar2 = func_438(&(uParam2->f_247[iVar0]), iVar1);
		if (func_439(iVar2) && &uParam2->f_309[iVar0] != 4)
		{
			uParam0->f_59 = 0;
		}
	}
	func_47(uParam0);
	_0xa33f5069b0cb89b8();
	func_278(&(uParam0->f_82), 43, 0);
	func_278(&(uParam0->f_82), 45, 0);
	func_278(&(uParam0->f_82), 46, 0);
	func_278(&(uParam0->f_82), 47, 0);
	func_278(&(uParam0->f_82), 72, 0);
	func_278(&(uParam0->f_82), 49, 0);
	func_287(uParam0, uParam0->f_9);
	func_22(uParam1);
	func_440(uParam1);
	func_228(64);
	func_228(32);
	if (func_51(&(uParam1->f_219)))
	{
		if (!func_135(&(uParam1->f_219)))
		{
			func_260(&(uParam1->f_219));
		}
	}
}

void func_311(var uParam0, var uParam1)
{
	if (func_56(uParam0, 65536))
	{
		return;
	}
	iVar0 = func_77(uParam0);
	Global_1903071->f_40++;
	Global_1903071->f_39++;
	if (func_441(Global_39.f_5803))
	{
		iVar1 = -1555359431;
	}
	else if (func_442(Global_39.f_5803))
	{
		iVar1 = -886011719;
	}
	else if (func_219(Global_39.f_5803))
	{
		iVar1 = 1013286855;
	}
	else if (func_220(Global_39.f_5803))
	{
		iVar1 = 750344149;
	}
	if (func_443(Global_1903071->f_37))
	{
		iVar2 = -208442209;
	}
	else
	{
		iVar2 = -868741806;
	}
	if (func_126(iVar0))
	{
		uVar3 = &uParam1->f_123[iVar0];
		_0xda26263c87cce9c1(uVar3, Global_1903071->f_38, iVar1, iVar2);
		compendium_fish_caught(uVar3, Global_39.f_5803);
	}
	func_301(uParam0, 65536);
	func_410(64);
}

void func_312(var uParam0, var uParam1)
{
	if (func_56(uParam1, 262144))
	{
		return;
	}
	func_425(uParam0, uParam1, 3, 0);
	func_301(uParam1, 262144);
}

void func_313(var uParam0, int iParam1)
{
	bVar0 = is_pause_menu_active();
	if (uParam0->f_2 == 1)
	{
		if (bVar0 == 1)
		{
			func_20(uParam0);
		}
		return;
	}
	if (bVar0 == 1)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		if (!func_61(Global_1903071->f_37))
		{
			func_20(uParam0);
			return;
		}
		if (iParam1 == 1)
		{
			sVar1 = _create_var_string(38, "MGFSH_CAUGHT_POI", Global_1903071->f_38, func_402(Global_1903071->f_37));
		}
		else
		{
			sVar1 = _create_var_string(38, "ITEM_CAUGHT_PUMP", Global_1903071->f_38, func_402(Global_1903071->f_37));
		}
		sVar2 = func_444(Global_1903071->f_37);
		uParam0->f_3 = _uiflowblock_request(1303994909);
		uParam0->f_4 = _databinding_add_data_container_from_path("", "InfoBox");
		_databinding_add_data_bool(uParam0->f_4, "isVisible", 1);
		_databinding_add_data_string(uParam0->f_4, "itemLabel", sVar1);
		_databinding_add_data_string(uParam0->f_4, "itemDescription", sVar2);
		*uParam0 = 1;
	}
	if ((((*uParam0 == 1 && uParam0->f_1 == 0) && _uiflowblock_is_loaded(uParam0->f_3)) && _uiflowblock_enter(uParam0->f_3, -1645363952)) && _uistatemachine_create(-1295789154, uParam0->f_3))
	{
		uParam0->f_1 = 1;
		uParam0->f_2 = 1;
	}
}

void func_314(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 64) || func_56(uParam1, 32))
	{
		return;
	}
	func_301(uParam1, 64);
	if (func_182(4))
	{
		iVar0 = func_77(uParam1);
		if (func_126(iVar0))
		{
			uParam2->f_371[iVar0] = 1;
		}
	}
	func_445(uParam1, uParam2);
	func_20(&(uParam0->f_19));
	Global_1903071->f_43++;
	Global_1903071->f_44++;
	func_110(uParam1);
	func_301(uParam1, 128);
	func_180(64, 1);
}

void func_315(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 64) || func_56(uParam1, 32))
	{
		return;
	}
	iVar0 = func_77(uParam1);
	if (!func_293())
	{
		func_282(uParam0, 5, 0, 1);
		if (func_126(iVar0))
		{
			if (func_446(uParam2, iVar0))
			{
				func_282(uParam0, 6, 0, uParam0->f_59);
				if (uParam0->f_59 == 0)
				{
					func_280(uParam0, 58, 1, -2, 1);
				}
			}
		}
		if (func_234(&(uParam0->f_60[5])) && func_408(&(uParam0->f_60[5]), 1))
		{
			func_314(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else if ((func_234(&(uParam0->f_60[6])) && func_447(&(uParam0->f_60[6]), 0)) && func_408(&(uParam0->f_60[6]), 1))
		{
			func_436(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else if (func_182(32))
		{
			func_436(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
			func_302(32);
		}
	}
}

void func_316(var uParam0)
{
	if ((does_particle_fx_looped_exist(uParam0->f_18) && func_51(&(uParam0->f_20))) && func_52(&(uParam0->f_20)) > 100)
	{
		func_93(&(uParam0->f_20));
		uParam0->f_19 = (uParam0->f_19 + 0.01f);
		if (uParam0->f_19 > 1f)
		{
			func_110(uParam0);
		}
		else
		{
			set_particle_fx_looped_evolution(uParam0->f_18, "fade", uParam0->f_19, false);
		}
	}
}

void func_317(var uParam0)
{
	if (func_56(uParam0, 16))
	{
		return;
	}
	if (has_anim_event_fired(player_ped_id(), -1947554776))
	{
		func_301(uParam0, 16);
		if (does_entity_exist(func_138()))
		{
			if (is_entity_attached(func_138()))
			{
				detach_entity(func_138(), true, true);
				activate_physics(func_138());
			}
		}
		if (does_entity_exist(func_141()))
		{
			if (is_entity_attached(func_141()))
			{
				detach_entity(func_141(), true, true);
				activate_physics(func_141());
			}
		}
	}
}

void func_318(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 131072))
	{
		return;
	}
	if (func_308(64, 1))
	{
		func_301(uParam1, 131072);
		iVar0 = func_77(uParam1);
		if (func_126(iVar0))
		{
			func_21(uParam1, uParam2, iVar0, 1, 1);
		}
	}
	else if (func_308(256, 1))
	{
		func_309(uParam0, uParam1, uParam2);
	}
	else if (func_308(128, 1))
	{
		func_301(uParam1, 131072);
	}
}

void func_319()
{
	if (!func_182(4) && func_308(1024, 1))
	{
		func_410(4);
	}
}

void func_320(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 4))
	{
		return;
	}
	if (func_308(512, 1))
	{
		func_301(uParam1, 4);
		iVar0 = func_77(uParam1);
		if (func_126(iVar0) && !is_entity_dead(&(uParam2->f_123[iVar0])))
		{
			clear_ped_tasks(&(uParam2->f_123[iVar0]), 1, 0);
			set_entity_invincible(&(uParam2->f_123[iVar0]), false);
			set_ped_config_flag(&(uParam2->f_123[iVar0]), 17, false);
		}
		func_111(uParam0, uParam1, uParam2, 0, 0);
	}
}

void func_321(var uParam0)
{
	if (Global_39.f_5803 == 1380607804)
	{
		func_280(uParam0, 59, 1, -2, 1);
	}
	else if (Global_39.f_5803 == 1059426360)
	{
		func_280(uParam0, 60, 1, -2, 1);
	}
	else if (Global_39.f_5803 == 488496242)
	{
		func_280(uParam0, 61, 1, -2, 1);
	}
	else if (Global_39.f_5803 == -1527293029)
	{
		func_280(uParam0, 62, 1, -2, 1);
	}
	else if (Global_39.f_5803 == -1753819339)
	{
		func_280(uParam0, 63, 1, -2, 1);
	}
	else if (Global_39.f_5803 == 149706141)
	{
		func_280(uParam0, 64, 1, -2, 1);
	}
	else if (Global_39.f_5803 == -978159653)
	{
		func_280(uParam0, 65, 1, -2, 1);
	}
	else if (Global_39.f_5803 == 2100131425)
	{
		func_280(uParam0, 66, 1, -2, 1);
	}
	else if (Global_39.f_5803 == -2041382104)
	{
		func_280(uParam0, 67, 1, -2, 1);
	}
	else if (Global_39.f_5803 == 1815744868)
	{
		func_280(uParam0, 68, 1, -2, 1);
	}
	else if (Global_39.f_5803 == 1334018438)
	{
		func_280(uParam0, 69, 1, -2, 1);
	}
	else if (Global_39.f_5803 == 1055480217)
	{
		func_280(uParam0, 70, 1, -2, 1);
	}
	else if (Global_39.f_5803 == -1916584960)
	{
		func_280(uParam0, 71, 1, -2, 1);
	}
}

bool func_322(int iParam0)
{
	return func_122(Global_1903071->f_5.f_6, iParam0);
}

void func_323(var uParam0, int iParam1, float fParam2)
{
	iVar0 = func_364(iParam1);
	if (func_365(iVar0) && !_0x19870c40c7ee15be(iVar0, &(uParam0->f_31[iParam1])))
	{
		uParam0->f_31[iParam1] = _0xe93415b3307208e5(iVar0, uParam0->f_12, 0f, fParam2, 10000f, 0f, 0f, 0f, 1);
	}
}

void func_324(var uParam0, int iParam1)
{
	iVar0 = func_364(iParam1);
	if (func_365(iVar0) && _0x19870c40c7ee15be(iVar0, &(uParam0->f_31[iParam1])))
	{
		_0xc3d581a34bc0a1f0(iVar0, &(uParam0->f_31[iParam1]));
	}
}

bool func_325()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_448())
	{
		return false;
	}
	if (_databinding_read_data_bool(Global_1939161->f_75.f_55))
	{
		return false;
	}
	if (func_449(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_326(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!is_string_null_or_empty(&(Global_1893587->f_162)))
	{
		sVar0 = func_450(Global_1893587->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_452(func_451(Global_35));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_453(iParam0) || func_454(44))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				case 135:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 136:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 139:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (is_string_null_or_empty(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*bParam6 = 1;
				break;
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case -1229593481:
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case -1504425495:
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
				break;
		}
	}
	if (is_string_null_or_empty(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (is_string_null_or_empty(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_327(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

bool func_328(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_329(int iParam0)
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
	else if (iParam0 <= 122)
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

int func_330(int iParam0)
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

int func_331(int iParam0)
{
	if (!func_327(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_190[iParam0]);
	}
	iVar0 = 0;
	Var1 = { func_455(player_id()) };
	_0x4ef23e04a0c8ff51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1071686->f_21325[iVar0] = uVar8;
		iVar0++;
	}
	return &(Global_1071686->f_21325[iParam0]);
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return 0;
		case 795414694:
			return 0;
		case -557290573:
			return 2;
		case 650214731:
			return 1;
		case -1073312073:
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007:
			return 1;
		case 1245451421:
			return 1;
		case 469159176:
			return 1;
		case -105598602:
			return 0;
		case -1356490953:
			return 0;
		case -1276586360:
			return 1;
		case 1755369577:
			return 0;
		case 1175365009:
			return 0;
		case -1229593481:
			return 1;
		case -1369817450:
			return 0;
		case 592454541:
			return 0;
		case -2040708515:
			return 1;
		case -1410384421:
			return 1;
		case -1308233316:
			return 1;
		case 301094150:
			return 0;
		case -811730579:
			return 0;
		case -1817904483:
			return 0;
		case -1300497193:
			return 0;
		case 2005774838:
			return 1;
		case -1504425495:
			return 1;
		case -247856387:
			return 1;
		case -823661292:
			return 0;
		case -218679770:
			return 1;
		case -1287619521:
			return 1;
		case -1781130443:
			return 1;
		case -261541730:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_334(int iParam0, int iParam1)
{
	if (!func_456(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_21398[iParam0] && iParam1) != 0;
}

bool func_335(int iParam0, int iParam1)
{
	if (!func_327(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

bool func_336(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

int func_337()
{
	return &Global_1902818;
}

int func_338(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_339(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

float func_340(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

var func_341(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _show_location_notification(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

void func_342(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_343(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_344(bool bParam0)
{
	if (func_200() == -1)
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

bool func_345(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_346(int iParam0)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_347(int iParam0, int iParam1)
{
	if (!func_345(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_360(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_457("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_458(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_459(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_460(iVar1);
				return true;
			}
			iVar3++;
		}
		func_460(iVar1);
	}
	return false;
}

bool func_348(int iParam0)
{
	if (!func_345(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_461(iParam0);
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
	iVar1 = func_462(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_463(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_464(iParam0);
	iVar2 = func_463(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_349(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_465(iParam2, -372840566);
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
	func_466(uParam1, iParam0, Var3);
	return 1;
}

struct<5> func_350(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_467(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_346(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_351(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_468(bParam1) };
			if (bParam2 && func_469(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_470(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_470(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_471(iParam0, &Var6, 1728382685))
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
			Var0 = { func_472(bParam1) };
			switch (func_461(iParam0))
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
			if (func_473(iParam0, -1823706425))
			{
				Var0 = { func_351(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_473(iParam0, -1483207246))
			{
				Var0 = { func_351(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_351(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_473(iParam0, -1653629781))
			{
				Var0 = { func_351(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_474(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_473(iParam0, -1653629781))
			{
				Var0 = { func_351(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_351(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_345(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_344(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_352(var uParam0, int iParam1)
{
	if ((func_441(iParam1) || func_442(iParam1)) || iParam1 == 1309979101)
	{
		uParam0->f_54 = 0;
	}
	else
	{
		uParam0->f_54 = 1;
	}
}

int func_353(var uParam0)
{
	iVar0 = 1;
	if (uParam0->f_54 == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

char* func_354(int iParam0)
{
	switch (iParam0)
	{
		case 1059426360:
			return "p_baitBread01x";
		case 488496242:
			return "p_baitCorn01x";
		case 1380607804:
			return "p_baitCheese01x";
		case -1527293029:
			return "p_baitWorm01x";
		case -1753819339:
			return "p_baitCricket01x";
		case 149706141:
			return "P_CRAWDAD01X";
		case 2100131425:
			return "p_finishedragonfly01x";
		case -978159653:
			return "p_FinisdFishlure01x";
		case -2041382104:
			return "p_finishdcrawd01x";
		case 1334018438:
			return "P_FINISHEDRAGONFLYLEGENDARY01X";
		case 1815744868:
			return "P_FINISDFISHLURELEGENDARY01X";
		case 1055480217:
			return "P_FINISHDCRAWDLEGENDARY01X";
		case -1916584960:
			return "P_LGOC_SPINNER_V4";
		case 1309979101:
			return "P_FISHHOOK02X";
		default:
			break;
	}
	return "P_FISHHOOK02X";
}

void func_355(var uParam0)
{
	if (Global_39.f_5803 == 1309979101)
	{
		iVar0 = func_344(0);
		Var1 = { func_350(1309979101, 0, 0) };
		Var6 = { func_351(1309979101, Var1, Var1.f_4, 0) };
		if (_0xf9933164965533b7(iVar0, &Var6))
		{
			_0xd740f11fbc8aef43(iVar0, &Var6, 0);
		}
	}
	else
	{
		iVar10 = func_344(0);
		Var11 = { func_350(1309979101, 0, 0) };
		Var16 = { func_351(1309979101, Var11, Var11.f_4, 0) };
		if (!_0xf9933164965533b7(iVar10, &Var16))
		{
			_0xd740f11fbc8aef43(iVar10, &Var16, 1);
		}
		uParam0->f_57 = Global_39.f_5803;
	}
}

void func_356()
{
	Var0 = 0;
	iVar2 = 0;
	if (func_213(Global_39.f_5803) && func_210(Global_39.f_5803, 1))
	{
		iVar2 = Global_39.f_5803;
	}
	else if (Global_39.f_5803 == 1309979101)
	{
		iVar2 = 1309979101;
	}
	else if (func_210(1059426360, 1))
	{
		iVar2 = 1059426360;
	}
	else if (func_210(488496242, 1))
	{
		iVar2 = 488496242;
	}
	else if (func_210(1380607804, 1))
	{
		iVar2 = 1380607804;
	}
	if (iVar2 != 0)
	{
		Var0 = 2;
		switch (iVar2)
		{
			case 1059426360:
				Var0.f_1 = 1059426360;
				break;
			case 488496242:
				Var0.f_1 = 488496242;
				break;
			case 1380607804:
				Var0.f_1 = 1380607804;
				break;
			case -1753819339:
				Var0.f_1 = -1753819339;
				break;
			case -1527293029:
				Var0.f_1 = -1527293029;
				break;
			case 149706141:
				Var0.f_1 = 149706141;
				break;
			case 2100131425:
				Var0.f_1 = 2100131425;
				break;
			case -978159653:
				Var0.f_1 = -978159653;
				break;
			case -2041382104:
				Var0.f_1 = -2041382104;
				break;
			case 1334018438:
				Var0.f_1 = 1334018438;
				break;
			case 1815744868:
				Var0.f_1 = 1815744868;
				break;
			case 1055480217:
				Var0.f_1 = 1055480217;
				break;
			case -1916584960:
				Var0.f_1 = -1916584960;
				break;
			case 1309979101:
				Var0.f_1 = 1309979101;
				break;
		}
		_0x8a59d44189af2bc5(&Var0, 1856029758);
	}
}

void func_357(var uParam0)
{
	uParam0->f_49 = 0;
	if (uParam0->f_48 == -1)
	{
	}
	else if (uParam0->f_48 == 0)
	{
		uParam0->f_49 = func_475(Global_39.f_5803);
	}
	else if (uParam0->f_48 == 1)
	{
		uParam0->f_49 = func_476(Global_39.f_5803);
	}
	else if (uParam0->f_48 == 2)
	{
		uParam0->f_49 = func_477(Global_39.f_5803);
	}
}

int func_358(int iParam0)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_478(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

char* func_359(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_360(int iParam0, int iParam1)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_346(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_479(iParam0, 1399091007))
	{
		func_480(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_361(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_481(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_482(&Var0, func_468(0));
	}
	if (!func_483(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_460(iVar14);
	return uVar15;
}

int func_362(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_363(int iParam0, bool bParam1)
{
	Var0 = { func_350(iParam0, bParam1, 0) };
	return func_351(iParam0, Var0, Var0.f_4, bParam1);
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1278441537;
		case 1:
			return 1425512580;
		case 2:
			return 83214795;
		case 3:
			return -1189840933;
		case 4:
			return -1170018056;
		case 5:
			return 1186597014;
		case 6:
			return 1544478729;
		case 7:
			return 745813108;
		case 8:
			return 1370028657;
		case 9:
			return 974958915;
		case 10:
			return 1568146875;
		case 11:
			return 1630785893;
		case 12:
			return 430222648;
		case 13:
			return -1788538969;
		case 14:
			return -823988763;
		default:
			break;
	}
	return 0;
}

bool func_365(int iParam0)
{
	if ((((((((((((((iParam0 == -1278441537 || iParam0 == 1425512580) || iParam0 == 83214795) || iParam0 == -1189840933) || iParam0 == -1170018056) || iParam0 == 1186597014) || iParam0 == 1544478729) || iParam0 == 745813108) || iParam0 == 1370028657) || iParam0 == 974958915) || iParam0 == 1568146875) || iParam0 == 1630785893) || iParam0 == -1788538969) || iParam0 == 430222648) || iParam0 == -823988763)
	{
		return true;
	}
	return false;
}

void func_366(int iParam0, float fParam1)
{
	sVar0 = func_203(iParam0);
	if (!is_string_null_or_empty(sVar0))
	{
		decor_set_float(player_ped_id(), sVar0, fParam1);
	}
}

int func_367(int iParam0)
{
	return iParam0;
}

void func_368(int iParam0)
{
	if (!func_484(iParam0))
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

int func_369()
{
	iVar0 = 0;
	iVar1 = _0x595478b3bbc3076d();
	iVar2 = func_246(iVar1);
	if (iVar2 != 15)
	{
		if ((((iVar2 == 3 || iVar2 == 4) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8)
		{
			return 15;
		}
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_370(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			return -2116748615;
		case 1:
			return 1493541632;
		case 2:
			return 264156159;
		case 3:
			return 1538187374;
		case 4:
			return -300867788;
		case 5:
			return 122748261;
		case 6:
			return -711779521;
		case 7:
			return -1553593715;
		case 8:
			return 697075200;
		case 9:
			return 706485280;
		case 10:
			return 513249462;
		case 11:
			return 1520661;
		case 12:
			return 1860580756;
		case 13:
			return 41707457;
		case 14:
			return 490159652;
		default:
			break;
	}
	return iVar0;
}

int func_371(var uParam0, vector3 vParam1)
{
	vVar0 = { get_offset_from_entity_given_world_coords(player_ped_id(), vParam1) };
	if ((vVar0.x < &uParam0->f_27[1] || vVar0.x > &uParam0->f_27[4]) || vVar0.y > uParam0->f_27[2]->f_1)
	{
		return 0;
	}
	return 1;
}

int func_372(vector3 vParam0)
{
	vVar0 = { get_entity_forward_vector(player_ped_id()) };
	vVar3 = { func_419(vParam0 - Global_35) };
	fVar6 = func_485(vVar0, vVar3);
	fVar7 = cos(45f);
	if (fVar6 < fVar7)
	{
		return 0;
	}
	return 1;
}

float func_373(int iParam0)
{
	return _0x53187e563f938e76(iParam0);
}

void func_374(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			_set_random_outfit_variation(iParam0, true);
			bVar0 = true;
		}
	}
	if (is_ped_human(iParam0))
	{
		if (bParam6)
		{
			_0x899a04afcc725d04(iParam0, _0xd42514c182121c23(iParam1));
		}
		if (is_ped_male(iParam0) && !bParam3)
		{
			func_486(iParam0, 0, 1);
		}
		set_ped_config_flag(iParam0, 502, true);
	}
	else if (_is_this_model_a_horse(get_entity_model(iParam0)))
	{
		if (!bParam5)
		{
			_set_ped_outfit_preset(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_487(iParam0, 0);
			bVar0 = true;
		}
		func_488(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

float func_375(int iParam0, int iParam1)
{
	fVar0 = func_489(iParam0);
	if (iParam1 == 1)
	{
		fVar1 = (fVar0 * 0.25f);
		if (func_490())
		{
			fVar0 = (fVar0 + fVar1);
		}
	}
	return fVar0;
}

float func_376(int iParam0, int iParam1)
{
	fVar0 = func_491(iParam0);
	if (iParam1 == 1)
	{
		fVar1 = (fVar0 * 0.25f);
		if (!func_490())
		{
			fVar0 = (fVar0 - fVar1);
		}
	}
	return fVar0;
}

float func_377(float fParam0)
{
	iVar0 = floor(fParam0);
	fVar1 = (fParam0 - IntToFloat(iVar0));
	if (fVar1 < 0.0625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0f);
	}
	else if (fVar1 < 0.125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.0625f);
	}
	else if (fVar1 < 0.1875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.125f);
	}
	else if (fVar1 < 0.25f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.1875f);
	}
	else if (fVar1 < 0.3125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.25f);
	}
	else if (fVar1 < 0.375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.3125f);
	}
	else if (fVar1 < 0.4375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.375f);
	}
	else if (fVar1 < 0.5f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.4375f);
	}
	else if (fVar1 < 0.5625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.5f);
	}
	else if (fVar1 < 0.625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.5625f);
	}
	else if (fVar1 < 0.6875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.625f);
	}
	else if (fVar1 < 0.75f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.6875f);
	}
	else if (fVar1 < 0.8125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.75f);
	}
	else if (fVar1 < 0.875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.8125f);
	}
	else if (fVar1 < 0.9375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.875f);
	}
	else
	{
		fVar2 = (IntToFloat(iVar0) + 0.9375f);
	}
	return fVar2;
}

void func_378(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	_0x6569f31a01b4c097(iVar0, 0, iParam1);
	_0x6569f31a01b4c097(iVar0, 1, iParam1);
}

int func_379(var uParam0, int iParam1)
{
	fVar0 = (&uParam0->f_278[iParam1] / uParam0->f_470);
	iVar1 = round((to_float(6000) * fVar0));
	iVar1 += 4000;
	return iVar1;
}

void func_380(var uParam0)
{
	if (uParam0->f_202 == 0f)
	{
		return;
	}
	uParam0->f_202 = (uParam0->f_202 * 0.9f);
	if (uParam0->f_202 < 0.001f)
	{
		uParam0->f_202 = 0f;
	}
}

int func_381(var uParam0, int iParam1)
{
	iVar0 = 30;
	if (&uParam0->f_309[iParam1] == 4)
	{
		iVar0 = 20;
	}
	else if (&uParam0->f_309[iParam1] == 2 || &uParam0->f_309[iParam1] == 3)
	{
		iVar0 = 25;
	}
	return iVar0;
}

int func_382(var uParam0, int iParam1)
{
	fVar0 = (&uParam0->f_278[iParam1] / uParam0->f_470);
	iVar1 = round((to_float(-4000) * fVar0));
	iVar1 += 10000;
	return iVar1;
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case 1059426360:
			return 235447016;
		case 488496242:
			return -1239966175;
		case 1380607804:
			return -294392875;
		case -1527293029:
			return 553077066;
		case -1753819339:
			return -295546062;
		case 149706141:
			return -24360095;
		case 2100131425:
			return -2027043009;
		case -978159653:
			return 1434620179;
		case -2041382104:
			return 1818203080;
		case 1334018438:
			return -2057172418;
		case 1815744868:
			return 721472341;
		case 1055480217:
			return -1290802922;
		case -1916584960:
			return -1809586742;
		default:
			break;
	}
	return 0;
}

float func_384(vector3 vParam0, int iParam3)
{
	iVar0 = 1;
	if (iParam3 == 1)
	{
		iVar0 = 0;
	}
	bVar4 = test_vertical_probe_against_all_water(func_140(vParam0, 1092616192), iVar0, &fVar2);
	bVar5 = get_ground_z_for_3d_coord(func_140(vParam0, 1092616192), &fVar3, false);
	if ((bVar4 == 1 && bVar5 == 1) && fVar2 > fVar3)
	{
		fVar1 = (fVar2 - fVar3);
	}
	return fVar1;
}

bool func_385(vector3 vParam0)
{
	vVar0 = { func_271(vParam0, 1) };
	if (!_0x0c9dbf48c6ba6e4c(player_ped_id(), vVar0, 1))
	{
		return true;
	}
	return false;
}

void func_386(var uParam0, vector3 vParam1)
{
	if (does_entity_exist(uParam0->f_8))
	{
		set_entity_coords(uParam0->f_8, vParam1, true, false, true, true);
		func_93(&(uParam0->f_215));
	}
}

bool func_387(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_224 > 1)
	{
		if (func_131())
		{
			if (uParam0->f_222 != 1f)
			{
				uParam0->f_223 = 1;
			}
		}
		else if (func_393())
		{
			if (uParam0->f_222 != 1.5f)
			{
				uParam0->f_223 = 1;
			}
		}
		else if (func_81(uParam1, iParam2))
		{
			if (uParam0->f_222 != 3f)
			{
				uParam0->f_223 = 1;
			}
		}
		else if (uParam0->f_222 != 1.5f)
		{
			uParam0->f_223 = 1;
		}
	}
	return uParam0->f_223;
}

float func_388(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_389(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam0, false, false) };
	vVar3 = { get_entity_coords(iParam1, false, false) };
	return func_492(vVar0, vVar3, iParam2);
}

bool func_390(int iParam0)
{
	if (Global_1903071->f_5.f_3 > 0.5f)
	{
		return false;
	}
	return iParam0 > 0;
}

bool func_391(int iParam0)
{
	if (Global_1903071->f_5.f_3 > 0.5f)
	{
		return false;
	}
	return iParam0 == 0;
}

bool func_392(var uParam0, float fParam1, float fParam2)
{
	if (uParam0->f_200 == 2)
	{
		if (fParam1 >= (fParam2 / 3f))
		{
			return true;
		}
	}
	if (((uParam0->f_200 == 1 || uParam0->f_200 == 3) || uParam0->f_200 == 4) || uParam0->f_200 == 5)
	{
		if (fParam1 >= (fParam2 / 2f))
		{
			return true;
		}
	}
	return false;
}

bool func_393()
{
	if (!_is_using_keyboard(0))
	{
		if (func_129() != 0 || func_130() != 0)
		{
			return true;
		}
	}
	else if (is_control_pressed(0, -1560021918) && is_control_pressed(0, 867346636))
	{
		return true;
	}
	return false;
}

int func_394(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (_0x84848e1c0fc67dbb(&(uParam0->f_70[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_395(var uParam0, var uParam1)
{
	if (func_56(uParam0, 32))
	{
		iVar0 = func_77(uParam0);
		if (func_126(iVar0) && &uParam1->f_309[iVar0] != 4)
		{
			if (&uParam1->f_154[iVar0] == 9)
			{
				func_21(uParam0, uParam1, iVar0, 1, 1);
			}
		}
	}
}

var func_396()
{
	return Global_1940144->f_10;
}

var func_397()
{
	return Global_1940144->f_11;
}

var func_398()
{
	return Global_1940144->f_13;
}

bool func_399(var uParam0, int iParam1)
{
	return &uParam0->f_74[iParam1] == 1;
}

bool func_400(var uParam0, int iParam1)
{
	if ((&uParam0->f_368[iParam1] > 0 && func_51(uParam0->f_148[iParam1])) && func_161(uParam0->f_148[iParam1]) < IntToFloat(&uParam0->f_368[iParam1]))
	{
		return true;
	}
	return false;
}

char* func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MGFSH_EQ_ROD1";
		case 1:
			return "MGFSH_EQ_ROD2";
		case 2:
			return "MGFSH_EQ_ROD3";
		case 3:
			return "MGFSH_EQ_BAIT1";
		case 4:
			return "MGFSH_EQ_BAIT2_ABI1";
		case 5:
			return "MGFSH_EQ_BAIT2_FUD1";
		case 6:
			return "MGFSH_EQ_BAIT2_WAR1";
		case 7:
			return "MGFSH_EQ_BAIT2_FSH1";
		case 8:
			return "MGFSH_EQ_BAIT3_ABI1";
		case 9:
			return "MGFSH_EQ_BAIT3_FUD1";
		case 10:
			return "MGFSH_EQ_BAIT3_WAR1";
		case 11:
			return "MGFSH_EQ_BAIT3_FSH1";
		case 12:
			return "MGFSH_EQ_REBAIT";
		case 13:
			return "MGFSH_EQ_BAIT1";
		case 14:
			return "MGFSH_EQ_BAIT_ANY";
		case 15:
			return "MGFSH_CAST_DEEP";
		case 16:
			return "MGFSH_CAST_HIGH";
		case 17:
			return "MGFSH_CAST_WATER";
		case 18:
			return "MGFSH_CAST_CLOSE";
		case 19:
			return "MGFSH_CAST_LOS";
		case 20:
			return "MGFSH_CAST_BAIT";
		case 21:
			return "MGFSH_CAST_NOT_HERE";
		case 22:
			return "MGFSH_BEGIN_AIM_HLP";
		case 23:
			return "MGFSH_BEGIN_AIM_TOG_HLP";
		case 24:
			return "MGFSH_BEGIN_AIM_OBJ";
		case 25:
			return "MGFSH_CAST_AIMING_HLP";
		case 26:
			return "MGFSH_CAST_AIMING_OBJ";
		case 27:
			return "MGFSH_CAST_RELEASE_HLP";
		case 28:
			return "MGFSH_CAST_RELEASE_OBJ";
		case 29:
			return "MGFSH_CAST_POWER";
		case 30:
			return "MGFSH_NIBBLE_DESC";
		case 31:
			return "MGFSH_WAIT_LURE_HLP";
		case 32:
			return "MGFSH_WAIT_LURE_AUTO_HLP";
		case 33:
			return "MGFSH_WAIT_LURE_TOG_HLP";
		case 34:
			return "MGFSH_WAIT_LURE_TOG_AUTO_HLP";
		case 35:
			return "MGFSH_WAIT_LURE_GRIP";
		case 36:
			return "MGFSH_WAIT_LURE_HOOK";
		case 37:
			return "MGFSH_HOOK_FISH_HLP";
		case 38:
			return "MGFSH_HOOK_FISH_OBJ";
		case 39:
			return "MGFSH_FLICK_BAIT";
		case 40:
			return "MGFSH_SPOOL_EMPTY";
		case 41:
			return "MGFSH_MISSED_BITE1";
		case 42:
			return "MGFSH_MISSED_BITE2";
		case 43:
			return "MGFSH_HOOK_ROD1_HLP";
		case 44:
			return "MGFSH_HOOK_ROD1_OBJ";
		case 45:
			return "MGFSH_HOOK_ROD2";
		case 46:
			return "MGFSH_REEL_FISH_HLP";
		case 47:
			return "MGFSH_REEL_FISH_AUTO_HLP";
		case 48:
			return "MGFSH_REEL_FISH_OBJ";
		case 49:
			return "MGFSH_OBJECT_REEL";
		case 50:
			return "MGFSH_FISH_ESC1";
		case 51:
			return "MGFSH_FISH_ESC2";
		case 52:
			return "MGFSH_FISH_ESC3";
		case 53:
			return "MGFSH_FISH_ESC4";
		case 54:
			return "MGFSH_BAIT_LOST";
		case 55:
			return "MGFSH_STOW_HORSE";
		case 56:
			return "MGFSH_HOLD_REEL";
		case 57:
			return "MGFSH_PUMP_ROD";
		case 58:
			return "MGFSH_FULL_SAT";
		case 59:
			return "MGFSH_EQD_CHEESE";
		case 60:
			return "MGFSH_EQD_BREAD";
		case 61:
			return "MGFSH_EQD_CORN";
		case 62:
			return "MGFSH_EQD_WORM";
		case 63:
			return "MGFSH_EQD_CRICKET";
		case 64:
			return "MGFSH_EQD_CRAYFISH";
		case 65:
			return "MGFSH_EQD_LURE_LAKE";
		case 66:
			return "MGFSH_EQD_LURE_RIVER";
		case 67:
			return "MGFSH_EQD_LURE_SWAMP";
		case 68:
			return "MGFSH_EQD_LURE_LAKE";
		case 69:
			return "MGFSH_EQD_LURE_RIVER";
		case 70:
			return "MGFSH_EQD_LURE_SWAMP";
		case 71:
			return "MGFSH_EQD_SPECIAL_SPINNER_MP";
		case 72:
			return "MGFSH_REEL_FISH_HLP2_KM";
		default:
			break;
	}
	return "";
}

char* func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "";
}

var func_403(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_404(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_493(iVar0, 2))
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
		func_494(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_405(int iParam0, int iParam1)
{
	if (!func_234(iParam0))
	{
		return;
	}
	iVar0 = func_367(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_0xa520c7b05fa4eb2a((*Global_1951255)[iVar0]->f_3, iParam1);
}

void func_406(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_234(iParam0))
	{
		return;
	}
	iVar0 = func_367(iParam0);
	if (bParam1)
	{
		func_495(iParam0, 4);
		if (bParam3)
		{
			func_496(iVar0, 1);
		}
		func_497(iVar0, 1);
	}
	else
	{
		func_498(iParam0, 4);
		func_497(iVar0, 0);
	}
}

void func_407(int iParam0, int iParam1)
{
	if (!func_234(iParam0))
	{
		return;
	}
	iVar0 = func_367(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1951255)[iVar0]->f_3, iParam1);
}

bool func_408(int iParam0, bool bParam1)
{
	if (bParam1 && !func_234(iParam0))
	{
		return false;
	}
	iVar0 = func_367(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

bool func_409(var uParam0)
{
	return (uParam0->f_12 != -99999f && uParam0->f_12 < 0.03f);
}

void func_410(int iParam0)
{
	if (!func_182(iParam0))
	{
		func_123(&(Global_1903071->f_2), iParam0);
	}
}

void func_411(var uParam0, int iParam1, int iParam2)
{
	func_93(uParam0->f_148[iParam1]);
	uParam0->f_368[iParam1] = iParam2;
}

float func_412(var uParam0)
{
	if (!func_51(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_135(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_273() - uParam0->f_1);
}

bool func_413(var uParam0, var uParam1, int iParam2)
{
	if ((((func_499(uParam0, uParam1, 1) && !func_56(uParam1, 512)) && func_213(Global_39.f_5803)) && func_500(uParam0, iParam2) > 0f) && func_501(uParam1, iParam2))
	{
		return true;
	}
	return false;
}

bool func_414(var uParam0, var uParam1, int iParam2)
{
	if (!func_499(uParam0, uParam1, 1))
	{
		return true;
	}
	else if (func_56(uParam1, 512))
	{
		return true;
	}
	else if (!func_213(Global_39.f_5803))
	{
		return true;
	}
	else if (func_500(uParam0, iParam2) == 0f)
	{
		return true;
	}
	else if (!func_501(uParam1, iParam2))
	{
		return true;
	}
	return false;
}

void func_415(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_364(iParam2);
	if (func_365(iVar0) && !_0x19870c40c7ee15be(iVar0, &(uParam1->f_77[iParam2])))
	{
		fVar1 = func_500(uParam0, iParam2);
		uParam1->f_77[iParam2] = _0xe93415b3307208e5(iVar0, func_141(), 0f, fVar1, 10000f, 0f, 0f, 0f, 1);
		func_366(iParam2, fVar1);
	}
}

void func_416(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 3)
	{
		if (iParam2 == 1)
		{
			if (!_uiprompt_get_urgent_pulsing_enabled(uParam0->f_70))
			{
				_uiprompt_set_urgent_pulsing_enabled(uParam0->f_70, 1);
			}
		}
		else if (_uiprompt_get_urgent_pulsing_enabled(uParam0->f_70))
		{
			_uiprompt_set_urgent_pulsing_enabled(uParam0->f_70, 0);
		}
	}
	else if (func_234(&(uParam0->f_60[iParam1])))
	{
		iVar0 = func_367(&(uParam0->f_60[iParam1]));
		if (_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
		{
			if (iParam2 == 1)
			{
				if (!_uiprompt_get_urgent_pulsing_enabled((*Global_1951255)[iVar0]->f_3))
				{
					_uiprompt_set_urgent_pulsing_enabled((*Global_1951255)[iVar0]->f_3, 1);
				}
			}
			else if (_uiprompt_get_urgent_pulsing_enabled((*Global_1951255)[iVar0]->f_3))
			{
				_uiprompt_set_urgent_pulsing_enabled((*Global_1951255)[iVar0]->f_3, 0);
			}
		}
	}
}

bool func_417(var uParam0)
{
	if (!func_51(&(uParam0->f_76)))
	{
		func_93(&(uParam0->f_76));
	}
	if (func_161(&(uParam0->f_76)) >= 3f && func_213(Global_39.f_5803))
	{
		if (func_219(Global_39.f_5803) || func_220(Global_39.f_5803))
		{
			return true;
		}
	}
	return false;
}

bool func_418(var uParam0)
{
	if (!func_51(&(uParam0->f_76)))
	{
		func_93(&(uParam0->f_76));
	}
	return func_161(&(uParam0->f_76)) >= 3f;
}

Vector3 func_419(vector3 vParam0)
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

int func_420(var uParam0)
{
	return uParam0->f_53 * 1000;
}

void func_421(var uParam0, var uParam1, var uParam2)
{
	if (!func_499(uParam0, uParam1, 1) || func_56(uParam1, 256))
	{
		return;
	}
	iVar0 = -1;
	if (!func_126(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((!is_entity_dead(&(uParam2->f_123[iVar1])) && &uParam2->f_154[iVar1] == 4) && func_152(uParam2, iVar1))
			{
				iVar9 = &uParam2->f_247[iVar1];
				iVar2 = func_364(&(uParam2->f_247[iVar1]));
				if (func_365(iVar2) && _0x19870c40c7ee15be(iVar2, &(uParam1->f_77[iVar9])))
				{
					fVar16 = &uParam1->f_23[iVar1];
					if (fVar16 != 99999f && fVar16 < uParam1->f_168)
					{
						fVar17 = func_502(uParam0, &(uParam2->f_247[iVar1]), Global_39.f_5803);
						if (fVar17 == 5f)
						{
							if (fVar10 <= 0f || fVar16 < fVar10)
							{
								fVar10 = fVar16;
								iVar3 = iVar1;
							}
						}
						else if (fVar17 == 4f)
						{
							if (fVar11 <= 0f || fVar16 < fVar11)
							{
								fVar11 = fVar16;
								iVar4 = iVar1;
							}
						}
						else if (fVar17 == 3f)
						{
							if (fVar12 <= 0f || fVar16 < fVar12)
							{
								fVar12 = fVar16;
								iVar5 = iVar1;
							}
						}
						else if (fVar17 == 2f)
						{
							if (fVar13 <= 0f || fVar16 < fVar13)
							{
								fVar13 = fVar16;
								iVar6 = iVar1;
							}
						}
						else if (fVar17 == 1f)
						{
							if (fVar14 <= 0f || fVar16 < fVar14)
							{
								fVar14 = fVar16;
								iVar7 = iVar1;
							}
						}
						else if (fVar17 == 0.5f)
						{
							if (fVar15 <= 0f || fVar16 < fVar15)
							{
								fVar15 = fVar16;
								iVar8 = iVar1;
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (fVar10 > 0f)
		{
			iVar0 = iVar3;
		}
		else if (fVar11 > 0f)
		{
			iVar0 = iVar4;
		}
		else if (fVar12 > 0f)
		{
			iVar0 = iVar5;
		}
		else if (fVar13 > 0f)
		{
			iVar0 = iVar6;
		}
		else if (fVar14 > 0f)
		{
			iVar0 = iVar7;
		}
		else if (fVar15 > 0f)
		{
			iVar0 = iVar8;
		}
	}
	if (func_126(iVar0))
	{
		func_503(uParam1, uParam2, iVar0);
	}
}

bool func_422(var uParam0, var uParam1, var uParam2)
{
	if ((!func_499(uParam0, uParam1, 0) || func_504(uParam1, uParam2)) || func_293())
	{
		return true;
	}
	iVar0 = func_77(uParam1);
	if ((func_126(iVar0) && &uParam1->f_23[iVar0] != 99999f) && &uParam1->f_23[iVar0] > (uParam1->f_168 + 2f))
	{
		return true;
	}
	return false;
}

void func_423(var uParam0, var uParam1, var uParam2)
{
	if (func_505(uParam1, uParam2))
	{
		uParam1->f_163 = func_506(uParam1, uParam2);
		uParam1->f_166 = func_507(uParam1, uParam2);
		uParam1->f_167 = func_508(uParam1, uParam2);
		uParam1->f_164 = func_509(uParam1, uParam2);
		func_106(uParam1->f_166, uParam1->f_167);
		func_424(uParam0, 2, 1);
		if (uParam1->f_163 == 1)
		{
			func_416(uParam0, 2, 1);
		}
		func_510(uParam0, uParam1, uParam2);
		func_511(uParam0, uParam1);
		func_180(512, 0);
		uParam1->f_156++;
		func_93(&(uParam1->f_160));
		func_96(uParam1, 8192);
		func_96(uParam1, 16384);
	}
	if (func_322(512))
	{
		iVar0 = func_77(uParam1);
		if (!func_126(iVar0) || (func_51(&(uParam1->f_160)) && func_52(&(uParam1->f_160)) > uParam1->f_166))
		{
			func_228(512);
			if (uParam1->f_163 == 1)
			{
				func_23(uParam1);
				func_229(uParam0, uParam1, uParam2, 0);
			}
			uParam1->f_167 = 0;
			func_416(uParam0, 2, 0);
			func_424(uParam0, 2, 0);
		}
	}
}

void func_424(var uParam0, int iParam1, int iParam2)
{
	if (func_234(&(uParam0->f_60[iParam1])))
	{
		if (iParam2 == 1)
		{
			if (func_512(&(uParam0->f_60[iParam1]), 1))
			{
				func_406(&(uParam0->f_60[iParam1]), 1, 1, 1);
			}
		}
		else if (!func_512(&(uParam0->f_60[iParam1]), 1))
		{
			func_406(&(uParam0->f_60[iParam1]), 0, 1, 1);
		}
	}
}

void func_425(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam1->f_3 = iParam2;
	switch (uParam1->f_3)
	{
		case 1:
			if ((func_441(Global_39.f_5803) && uParam1->f_55 > 3) || (func_442(Global_39.f_5803) && uParam1->f_55 > 4))
			{
				if (!func_218(Global_39.f_5803))
				{
					func_513(Global_39.f_5803);
				}
				func_214(uParam0, uParam1, 1309979101, 0, 0);
			}
			break;
		case 2:
			if (iParam3 == 1)
			{
				func_280(uParam0, 53, 1, -2, 1);
			}
			else
			{
				if (func_514(uParam1))
				{
					if (!func_34(uParam0, 16))
					{
						if (func_441(Global_39.f_5803) || func_442(Global_39.f_5803))
						{
							func_280(uParam0, 50, 1, -2, 1);
						}
						else
						{
							func_280(uParam0, 51, 1, -2, 1);
						}
					}
					if (!func_218(Global_39.f_5803))
					{
						func_513(Global_39.f_5803);
					}
					func_214(uParam0, uParam1, 1309979101, 0, 0);
				}
				if (!func_34(uParam0, 16))
				{
					func_280(uParam0, 52, 1, -2, 1);
				}
			}
			break;
		case 3:
			if (func_441(Global_39.f_5803) || func_442(Global_39.f_5803))
			{
				if (!func_218(Global_39.f_5803))
				{
					func_513(Global_39.f_5803);
				}
				func_214(uParam0, uParam1, 1309979101, 0, 0);
			}
			break;
	}
}

bool func_426(var uParam0, var uParam1)
{
	if (func_56(uParam1, 4096) || func_293())
	{
		return false;
	}
	func_282(uParam0, 1, 0, 1);
	if (func_408(&(uParam0->f_60[1]), 1))
	{
		func_35(uParam0, 16);
		return true;
	}
	return false;
}

bool func_427()
{
	if (Global_1903071->f_36 != Global_39.f_5803 && func_213(Global_1903071->f_36))
	{
		return true;
	}
	return false;
}

bool func_428(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_77(uParam1);
	if ((((((func_126(iVar0) && !is_entity_dead(&(uParam2->f_123[iVar0]))) && func_499(uParam0, uParam1, 0)) && func_51(&(uParam1->f_160))) && func_52(&(uParam1->f_160)) < uParam1->f_166) && &uParam1->f_23[iVar0] != 99999f) && &uParam1->f_23[iVar0] < (uParam1->f_168 + 2f))
	{
		return true;
	}
	return false;
}

void func_429(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!_0x88ad6cc10d8d35b2(&(uParam2->f_123[iParam3])) || !does_entity_belong_to_this_script(&(uParam2->f_123[iParam3]), false))
	{
		set_entity_as_mission_entity(&(uParam2->f_123[iParam3]), true, true);
	}
	clear_ped_tasks(&(uParam2->f_123[iParam3]), 1, 0);
	func_145(uParam2, iParam3, 6);
	_0xf0fbf193f1f5c0ea(&(uParam2->f_123[iParam3]));
	func_93(&(uParam0->f_12));
	func_411(&(uParam0->f_82), 43, 2);
	func_411(&(uParam0->f_82), 45, 2);
	func_411(&(uParam0->f_82), 46, 2);
	func_411(&(uParam0->f_82), 47, 2);
	if (func_515(&(uParam2->f_247[iParam3])))
	{
		func_411(&(uParam0->f_82), 56, 50);
		func_411(&(uParam0->f_82), 57, 30);
	}
	else
	{
		func_53(uParam0->f_82.f_148[56]);
		func_53(uParam0->f_82.f_148[57]);
	}
	uParam1->f_172 = 0;
	uParam1->f_173 = 0;
	uParam1->f_174 = 0;
	uParam1->f_177 = 0;
	uParam1->f_178 = 0;
	uParam1->f_155 = 0;
	uParam1->f_222 = 3f;
	uParam1->f_223 = 0;
	uParam1->f_224 = 0;
	uParam2->f_439[iParam3] = 1;
	fVar0 = (&uParam2->f_278[iParam3] / uParam2->f_470);
	fVar1 = (0.5f * fVar0);
	fVar2 = (fVar1 / 2f);
	if (&uParam2->f_402[iParam3] > 0f)
	{
		if (&uParam2->f_402[iParam3] >= fVar2)
		{
			uParam1->f_202 = &uParam2->f_402[iParam3];
		}
		else
		{
			uParam1->f_202 = fVar2;
		}
	}
	else
	{
		uParam1->f_202 = fVar1;
	}
	set_entity_invincible(&(uParam2->f_123[iParam3]), true);
	set_ped_config_flag(&(uParam2->f_123[iParam3]), 17, true);
	func_53(&(uParam1->f_219));
	func_228(512);
	_0x1f298c7bd30d1240(player_ped_id());
	clear_ped_tasks_immediately(&(uParam2->f_123[iParam3]), false, true);
	_0x1a52076d26e09004(player_ped_id(), &(uParam2->f_123[iParam3]));
	func_410(1);
	func_180(4, 1);
	func_114(uParam1, 0);
	func_23(uParam1);
	func_229(uParam0, uParam1, uParam2, 1);
}

bool func_430(var uParam0)
{
	if (Global_1903071->f_5 != 6)
	{
		return false;
	}
	if (func_51(&(uParam0->f_160)) && func_52(&(uParam0->f_160)) < uParam0->f_164 + 2000)
	{
		return true;
	}
	return false;
}

void func_431(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_51(&(uParam0->f_12)))
	{
		uParam1->f_174 = 0;
		return;
	}
	iVar0 = func_381(uParam2, iParam3);
	fVar1 = (to_float(func_244(&(uParam0->f_12))) / IntToFloat(iVar0 * 1000));
	if (round((fVar1 * 200f)) >= uParam1->f_174)
	{
		uParam1->f_174 = round((fVar1 * 200f));
	}
	else if (!func_51(&(uParam1->f_212)) || func_244(&(uParam1->f_212)) > uParam0->f_55)
	{
		func_93(&(uParam1->f_212));
		if (uParam1->f_174 > 0)
		{
			uParam1->f_174 = (uParam1->f_174 - 1);
		}
	}
	func_224(uParam1->f_174, 0, 200);
}

void func_432(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((!func_81(uParam2, iParam3) || !func_261()) || func_263(uParam1, 0))
	{
		func_516(uParam0, uParam1, uParam2, iParam3);
	}
	else if ((func_131() || func_393()) || func_517())
	{
		func_518(uParam0, uParam1, uParam2);
	}
	else
	{
		func_516(uParam0, uParam1, uParam2, iParam3);
	}
	func_224(uParam1->f_173, 0, 200);
}

void func_433(var uParam0)
{
	if (uParam0->f_174 > 0 && uParam0->f_174 >= uParam0->f_173)
	{
		uParam0->f_172 = uParam0->f_174;
	}
	else
	{
		uParam0->f_172 = uParam0->f_173;
	}
	func_224(uParam0->f_172, 0, 200);
}

bool func_434(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam1->f_172 >= 200)
	{
		return true;
	}
	else if (!func_126(iParam3))
	{
		return true;
	}
	else if (is_entity_dead(&(uParam2->f_123[iParam3])))
	{
		return true;
	}
	else if (func_426(uParam0, uParam1))
	{
		return true;
	}
	else if (func_182(16))
	{
		return true;
	}
	return false;
}

void func_435()
{
	Var0 = { func_519(-1000152764) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_436(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 64) || func_56(uParam1, 32))
	{
		return;
	}
	func_301(uParam1, 32);
	func_520(uParam1, uParam2);
	func_445(uParam1, uParam2);
	func_20(&(uParam0->f_19));
	Global_1903071->f_41++;
	Global_1903071->f_42++;
	func_110(uParam1);
	func_301(uParam1, 128);
	func_521(0, 6);
	func_180(32, 1);
}

int func_437(var uParam0)
{
	if (func_51(&(uParam0->f_219)) && func_52(&(uParam0->f_219)) >= 6000)
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				iVar0 = -151356522;
			}
			else
			{
				iVar0 = 1006434513;
			}
			break;
		case 1:
			if (iParam1 == 1)
			{
				iVar0 = 1481288777;
			}
			else
			{
				iVar0 = 306916738;
			}
			break;
		case 2:
			if (iParam1 == 1)
			{
				iVar0 = -1824685471;
			}
			else
			{
				iVar0 = 724563284;
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
				iVar0 = 803930024;
			}
			else
			{
				iVar0 = 1917027383;
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				iVar0 = 1111663869;
			}
			else
			{
				iVar0 = -855052577;
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				iVar0 = 1425358430;
			}
			else
			{
				iVar0 = -5376850;
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				iVar0 = 1297433586;
			}
			else
			{
				iVar0 = 1338219162;
			}
			break;
		case 7:
			if (iParam1 == 1)
			{
				iVar0 = -293259613;
			}
			else
			{
				iVar0 = -1538397860;
			}
			break;
		case 8:
			if (iParam1 == 1)
			{
				iVar0 = 588902637;
			}
			else
			{
				iVar0 = 193037129;
			}
			break;
		case 9:
			if (iParam1 == 1)
			{
				iVar0 = -861419347;
			}
			else
			{
				iVar0 = 1416872916;
			}
			break;
		case 10:
			if (iParam1 == 1)
			{
				iVar0 = 357567274;
			}
			else
			{
				iVar0 = 1500919793;
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				iVar0 = 683583793;
			}
			else
			{
				iVar0 = 1042542561;
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				iVar0 = -1202625002;
			}
			else
			{
				iVar0 = 56657913;
			}
			break;
		case 13:
			if (iParam1 == 1)
			{
				iVar0 = 485620834;
			}
			else
			{
				iVar0 = 1570826681;
			}
			break;
		case 14:
			if (iParam1 == 1)
			{
				iVar0 = 727522818;
			}
			else
			{
				iVar0 = 785407605;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_439(int iParam0)
{
	iVar0 = func_217(iParam0, 0, 0, 0);
	iVar1 = func_522(iParam0, 0);
	return iVar0 >= iVar1;
}

void func_440(var uParam0)
{
	if (does_particle_fx_looped_exist(uParam0->f_18))
	{
		return;
	}
	if (!does_entity_exist(Global_1903071->f_5.f_7))
	{
		return;
	}
	uParam0->f_19 = 0f;
	func_93(&(uParam0->f_20));
	uParam0->f_18 = start_networked_particle_fx_looped_on_entity_bone("scr_mg_fishing_drips", Global_1903071->f_5.f_7, 0f, 0f, 0f, 0f, 0f, 0f, get_entity_bone_index_by_name(Global_1903071->f_5.f_7, "SKEL_Tail5"), 1065353216, 0, 0, 0);
	set_particle_fx_looped_evolution(uParam0->f_18, "fade", uParam0->f_19, false);
}

bool func_441(int iParam0)
{
	if ((iParam0 == 1059426360 || iParam0 == 488496242) || iParam0 == 1380607804)
	{
		return true;
	}
	return false;
}

bool func_442(int iParam0)
{
	if ((iParam0 == -1527293029 || iParam0 == -1753819339) || iParam0 == 149706141)
	{
		return true;
	}
	return false;
}

bool func_443(int iParam0)
{
	if ((((iParam0 == 2 || iParam0 == 3) || iParam0 == 5) || iParam0 == 7) || iParam0 == 8)
	{
		return true;
	}
	return false;
}

char* func_444(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_BLUEGILL_DESC";
		case 1:
			return "PROVISION_BULHDCATFSH_DESC";
		case 2:
			return "PROVISION_CHNPKRL_DESC";
		case 3:
			return "PROVISION_CHNCATFSH_DESC";
		case 4:
			return "PROVISION_LKSTURG_DESC";
		case 5:
			return "PROVISION_LRGMTHBASS_DESC";
		case 6:
			return "PROVISION_LNGNOSEGAR_DESC";
		case 7:
			return "PROVISION_MUSKIE_DESC";
		case 8:
			return "PROVISION_NPIKE_DESC";
		case 9:
			return "PROVISION_PERCH_DESC";
		case 10:
			return "PROVISION_RDFNPCKREL_DESC";
		case 11:
			return "PROVISION_ROCKBASS_DESC";
		case 12:
			return "PROVISION_SMLMTHBASS_DESC";
		case 13:
			return "PROVISION_SCKEYESAL_DESC";
		case 14:
			return "PROVISION_FISH_STHDTROUT_DESC";
		default:
			break;
	}
	return "";
}

void func_445(var uParam0, var uParam1)
{
	iVar0 = func_523(uParam0, uParam1);
	iVar1 = func_77(uParam0);
	if (!func_126(iVar1))
	{
		return;
	}
	func_525(func_524(uParam0, uParam1, iVar0, iVar1));
}

bool func_446(var uParam0, int iParam1)
{
	if (&uParam0->f_340[iParam1] == 1)
	{
		return false;
	}
	return true;
}

bool func_447(int iParam0, bool bParam1)
{
	if (bParam1 && !func_234(iParam0))
	{
		return false;
	}
	return !func_493(iParam0, 4);
}

bool func_448()
{
	if (func_200() != 0)
	{
		return true;
	}
	if (func_526())
	{
		return false;
	}
	if (_0x7ec0d68233e391ac(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_527() };
	if (func_528(Var0))
	{
		return false;
	}
	Var2 = { func_529() };
	if (func_528(Var2))
	{
		return false;
	}
	return true;
}

bool func_449(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736->f_68;
		}
		if (func_526())
		{
			return true;
		}
		if (Global_1071686->f_3 && !Global_1572887->f_9)
		{
			if (((*Global_1056141)[network_player_id_to_int()]->f_463 && network_is_game_in_progress()) && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736->f_67;
		}
		else
		{
			return Global_1900736->f_68;
		}
	}
	if (iParam0 == 0 && func_528(func_530(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1900871)
		{
			return true;
		}
	}
	switch (func_531(func_530(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

char* func_450(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_451(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_532(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_453(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}
	return false;
}

bool func_454(int iParam0)
{
	if (!func_533(iParam0))
	{
		return false;
	}
	return func_534(iParam0);
}

struct<7> func_455(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

bool func_456(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_457(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_344(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_458(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_459(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_460(int iParam0)
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

int func_461(int iParam0)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_462(int iParam0)
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

int func_463(var uParam0, int iParam1)
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

int func_464(int iParam0)
{
	iVar0 = func_461(iParam0);
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

void func_465(int iParam0, int iParam1)
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

void func_466(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_535(uParam0))
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

struct<4> func_467(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_344(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_351(1328661203, func_536(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_351(1328661203, func_536(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_351(1328661203, func_536(), -1591664384, bParam0);
}

struct<4> func_468(bool bParam0)
{
	iVar0 = func_344(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_351(923904168, func_467(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_351(923904168, func_467(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_351(923904168, func_467(bParam0), -740156546, 0);
}

bool func_469(int iParam0, bool bParam1)
{
	if (func_461(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_537();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_470(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_538(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_471(int iParam0, var uParam1, int iParam2)
{
	if (func_539(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_472(bool bParam0)
{
	iVar0 = func_344(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_351(271701509, func_467(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_351(271701509, func_467(bParam0), 12999093, 0);
}

bool func_473(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_461(iParam0);
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
			if (func_540(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_474(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_541(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_475(int iParam0)
{
	if ((((iParam0 == 1380607804 || iParam0 == -1527293029) || iParam0 == -978159653) || iParam0 == 1815744868) || iParam0 == -1916584960)
	{
		return true;
	}
	return false;
}

bool func_476(int iParam0)
{
	if ((((iParam0 == 1059426360 || iParam0 == -1753819339) || iParam0 == 2100131425) || iParam0 == 1334018438) || iParam0 == -1916584960)
	{
		return true;
	}
	return false;
}

bool func_477(int iParam0)
{
	if ((((iParam0 == 488496242 || iParam0 == 149706141) || iParam0 == -2041382104) || iParam0 == 1055480217) || iParam0 == -1916584960)
	{
		return true;
	}
	return false;
}

int func_478(int iParam0)
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

int func_479(int iParam0, int iParam1)
{
	if (!func_345(iParam0, 0))
	{
		return func_543(func_542(iParam0), iParam1);
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

void func_480(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*iParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*iParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*iParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*iParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*iParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*iParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*iParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*iParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*iParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*iParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*iParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*iParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*iParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*iParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*iParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*iParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*iParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*iParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_481(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_482(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_483(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_344(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_484(int iParam0)
{
	return func_493(iParam0, 2);
}

float func_485(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_486(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		_0xdf631e4bce1b1fc4(iParam0, -1725579161, 0, 1);
	}
	else
	{
		_set_ped_component_disabled(iParam0, -1725579161, 1);
	}
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_487(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	_set_ped_body_component(iParam0, 1268180497);
	if (bParam1)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_488(int iParam0, int iParam1)
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

float func_489(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.5f;
		case 1:
			return 0.5f;
		case 2:
			return 0.5f;
		case 3:
			return 14f;
		case 4:
			return 14f;
		case 5:
			return 4f;
		case 6:
			return 14f;
		case 7:
			return 14f;
		case 8:
			return 14f;
		case 9:
			return 0.5f;
		case 10:
			return 0.5f;
		case 11:
			return 0.5f;
		case 12:
			return 4f;
		case 13:
			return 4f;
		case 14:
			return 4f;
		default:
			break;
	}
	return 0f;
}

bool func_490()
{
	return (func_544(1) || func_544(4));
}

float func_491(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2f;
		case 1:
			return 2f;
		case 2:
			return 2f;
		case 3:
			return 20f;
		case 4:
			return 20f;
		case 5:
			return 6f;
		case 6:
			return 20f;
		case 7:
			return 20f;
		case 8:
			return 20f;
		case 9:
			return 2f;
		case 10:
			return 2f;
		case 11:
			return 2f;
		case 12:
			return 6f;
		case 13:
			return 6f;
		case 14:
			return 6f;
		default:
			break;
	}
	return 0f;
}

float func_492(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_493(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_494(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, float fParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			_uiprompt_set_rotate_mode(iVar0, fParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1951255)[iParam0]->f_3 = iVar0;
	func_496(iParam0, 1);
	func_497(iParam0, 1);
	func_498(iParam0, 128);
}

void func_495(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_496(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_493(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_497(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_498(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_499(var uParam0, var uParam1, int iParam2)
{
	if ((func_107(&(uParam0->f_82[41])) || func_107(&(uParam0->f_82[42]))) || func_107(&(uParam0->f_82[35])))
	{
		return false;
	}
	if (iParam2 == 1)
	{
		if (uParam1->f_54 == 0)
		{
			if (Global_1903071->f_5.f_4 > 0.9f)
			{
				return false;
			}
		}
		else if ((!func_131() && func_51(&(uParam0->f_15))) && func_52(&(uParam0->f_15)) > 2000)
		{
			return false;
		}
	}
	if ((((((Global_1903071->f_5 != 6 || func_56(uParam1, 4096)) || !func_51(&(uParam1->f_203))) || func_161(&(uParam1->f_203)) <= IntToFloat(uParam1->f_165)) || func_545()) || !func_546(uParam1)) || (does_entity_exist(func_141()) && func_385(func_142())))
	{
		return false;
	}
	return true;
}

float func_500(var uParam0, int iParam1)
{
	return func_547(uParam0, iParam1);
}

bool func_501(var uParam0, int iParam1)
{
	return (func_546(uParam0) && uParam0->f_15 > func_373(func_370(iParam1)));
}

float func_502(var uParam0, int iParam1, int iParam2)
{
	if (!func_213(iParam2))
	{
		return 0f;
	}
	fVar0 = 0f;
	iVar1 = func_548(iParam1);
	iVar2 = compendium_fish_get_lure_suitability_by_stat_item(iVar1, iParam2);
	switch (iVar2)
	{
		case -682307487:
			fVar0 = 4f;
			break;
		case -1096944649:
			fVar0 = 3f;
			break;
		case -1092237143:
			fVar0 = 2f;
			break;
		case 1330140418:
			fVar0 = 1f;
			break;
		case -116686167:
			fVar0 = 0.5f;
			break;
		case 0:
			fVar0 = 0f;
			break;
		default:
			break;
	}
	if (fVar0 > 0f && uParam0->f_48 != -1)
	{
		if (func_219(Global_39.f_5803) || func_220(Global_39.f_5803))
		{
			if (((uParam0->f_48 == 0 && func_475(Global_39.f_5803)) || (uParam0->f_48 == 1 && func_476(Global_39.f_5803))) || (uParam0->f_48 == 2 && func_477(Global_39.f_5803)))
			{
				fVar0 = func_549(fVar0);
			}
		}
	}
	return fVar0;
}

void func_503(var uParam0, var uParam1, int iParam2)
{
	if (!_0x88ad6cc10d8d35b2(&(uParam1->f_123[iParam2])) || !does_entity_belong_to_this_script(&(uParam1->f_123[iParam2]), false))
	{
		set_entity_as_mission_entity(&(uParam1->f_123[iParam2]), true, true);
		return;
	}
	func_43(uParam0, uParam1, iParam2);
	func_145(uParam1, iParam2, 5);
	uParam0->f_156 = 0;
	uParam0->f_163 = 0;
	func_250(uParam1, iParam2);
	decor_set_bool(&(uParam1->f_123[iParam2]), "Fish_Prevent_Tasking", true);
}

bool func_504(var uParam0, var uParam1)
{
	if ((func_550(uParam0, uParam1) && func_51(&(uParam0->f_160))) && func_52(&(uParam0->f_160)) > uParam0->f_166)
	{
		return true;
	}
	if (func_322(1))
	{
		return true;
	}
	return false;
}

bool func_505(var uParam0, var uParam1)
{
	iVar0 = func_77(uParam0);
	if ((func_126(iVar0) && func_61(&(uParam1->f_247[iVar0]))) && uParam0->f_156 < &uParam1->f_800[&uParam1->f_247[iVar0]])
	{
		if (!func_51(&(uParam0->f_160)) || func_244(&(uParam0->f_160)) >= uParam0->f_164)
		{
			return true;
		}
	}
	return false;
}

int func_506(var uParam0, var uParam1)
{
	iVar0 = func_77(uParam0);
	if ((func_126(iVar0) && func_61(&(uParam1->f_247[iVar0]))) && &uParam1->f_800[&uParam1->f_247[iVar0]]->f_1[uParam0->f_156] == 1)
	{
		return 1;
	}
	return 0;
}

int func_507(var uParam0, var uParam1)
{
	iVar0 = func_77(uParam0);
	if (!func_126(iVar0) || uParam0->f_163 == 0)
	{
		return uParam1->f_955;
	}
	iVar1 = uParam1->f_956;
	switch (&uParam1->f_309[iVar0])
	{
		case 0:
			iVar1 = uParam1->f_956;
			break;
		case 1:
			iVar1 = uParam1->f_957;
			break;
		case 2:
			iVar1 = uParam1->f_958;
			break;
		case 3:
			iVar1 = uParam1->f_959;
			break;
		case 4:
			iVar1 = uParam1->f_960;
			break;
	}
	if (uParam0->f_54 == 1)
	{
		iVar1 = (iVar1 + uParam1->f_961);
	}
	return iVar1;
}

int func_508(var uParam0, var uParam1)
{
	if (uParam0->f_163 == 0)
	{
		return 1;
	}
	iVar0 = func_77(uParam0);
	fVar1 = (func_551(uParam1, iVar0) * 100f);
	return (150 + round(fVar1));
}

int func_509(var uParam0, var uParam1)
{
	iVar0 = uParam0->f_166;
	if (uParam0->f_163 == 0)
	{
		iVar0 = (iVar0 + get_random_int_in_range(uParam1->f_951, uParam1->f_952));
	}
	else
	{
		iVar0 = (iVar0 + get_random_int_in_range(uParam1->f_953, uParam1->f_954));
	}
	return iVar0;
}

void func_510(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_77(uParam1);
	if (!func_126(iVar0))
	{
		return;
	}
	if (uParam1->f_163 == 1)
	{
		sVar1 = "LARGE_BITE";
		sVar2 = "LARGE_BITE_ROD";
	}
	else
	{
		sVar1 = "SMALL_BITE";
		sVar2 = "SMALL_BITE_ROD";
	}
	iVar3 = func_552(uParam1);
	if (iVar3 > -1)
	{
		_0xf1c5310feaa36b48(&(uParam1->f_57[iVar3]), sVar1, func_138(), *uParam0, 0, 0);
		_0x503703ec1781b7d6(&(uParam1->f_57[iVar3]), "FishSize", &(uParam2->f_278[iVar0]));
	}
	iVar3 = func_553(uParam1);
	if (iVar3 > -1)
	{
		_0xf1c5310feaa36b48(&(uParam1->f_62[iVar3]), sVar2, player_ped_id(), *uParam0, 0, 0);
		_0x503703ec1781b7d6(&(uParam1->f_62[iVar3]), "FishSize", &(uParam2->f_278[iVar0]));
	}
}

void func_511(var uParam0, var uParam1)
{
	if ((uParam1->f_54 == 0 && does_entity_exist(func_138())) && uParam1->f_12 > -0.05f)
	{
		iVar0 = func_77(uParam1);
		if (func_126(iVar0))
		{
			vVar1 = { func_139() };
			vVar4 = { vVar1 };
			vVar4.f_2 = (vVar4.z - 1f);
			vVar7 = { func_419(vVar4 - vVar1) };
			if (uParam1->f_163 == 1)
			{
				fVar10 = uParam0->f_50;
			}
			else
			{
				fVar10 = uParam0->f_51;
			}
			vVar11 = { vVar7 * Vector(fVar10, fVar10, fVar10) };
			apply_force_to_entity(func_138(), 3, vVar11, 0f, 0f, 0f, 0, false, true, true, false, true);
		}
	}
}

bool func_512(int iParam0, bool bParam1)
{
	if (bParam1 && !func_234(iParam0))
	{
		return true;
	}
	return func_493(iParam0, 4);
}

void func_513(int iParam0)
{
	if (func_218(iParam0))
	{
		return;
	}
	if (func_554(iParam0, 1, 0, -142743235))
	{
	}
}

bool func_514(var uParam0)
{
	if (func_182(16))
	{
		return false;
	}
	if (func_441(Global_39.f_5803) || func_442(Global_39.f_5803))
	{
		return true;
	}
	if (func_219(Global_39.f_5803))
	{
		iVar0 = get_random_int_in_range(0, 5);
		if (iVar0 <= uParam0->f_175)
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

bool func_515(int iParam0)
{
	if ((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 7) || iParam0 == 8) || iParam0 == 12) || iParam0 == 13) || iParam0 == 14)
	{
		return true;
	}
	return false;
}

void func_516(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam1->f_173 > 0)
	{
		if (!func_51(&(uParam1->f_209)) || func_244(&(uParam1->f_209)) > uParam0->f_55)
		{
			func_93(&(uParam1->f_209));
			if (func_81(uParam2, iParam3))
			{
				iVar0++;
			}
			else
			{
				iVar0 += 2;
			}
			uParam1->f_173 = (uParam1->f_173 - iVar0);
		}
	}
}

bool func_517()
{
	return Global_1903071->f_5.f_2 > (IntToFloat(func_555()) - 0.1f);
}

void func_518(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam0->f_54;
	if (func_270(uParam1) && (!func_51(&(uParam1->f_206)) || func_244(&(uParam1->f_206)) > iVar0))
	{
		func_93(&(uParam1->f_206));
		iVar1 = func_77(uParam1);
		if (func_126(iVar1))
		{
			iVar2 = 1;
			if (func_517())
			{
				func_280(uParam0, 40, 1, -2, 1);
			}
			if (func_131())
			{
				if (func_515(&(uParam2->f_247[iVar1])))
				{
					iVar2 += 2;
				}
				else
				{
					iVar2++;
				}
			}
			if (uParam1->f_176 == 0 && uParam1->f_173 > 75)
			{
				uParam1->f_176 = 1;
				uParam1->f_175++;
			}
			iVar2 = (iVar2 + uParam1->f_175);
			uParam1->f_173 = (uParam1->f_173 + iVar2);
		}
	}
}

struct<2> func_519(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_520(var uParam0, var uParam1)
{
	iVar0 = func_77(uParam0);
	if (!func_126(iVar0))
	{
		return;
	}
	iVar1 = func_437(uParam0);
	iVar2 = func_438(&(uParam1->f_247[iVar0]), iVar1);
	if (&uParam1->f_309[iVar0] == 4)
	{
		return;
	}
	else if (func_439(iVar2))
	{
		return;
	}
	if (!func_208(0) || func_209())
	{
		iVar3 = func_556(&(uParam1->f_247[iVar0]));
		iVar4 = func_557(iVar1);
		Var5.f_1 = 10;
		func_558(&Var5, iVar4);
		if (func_559(iVar3, &Var5, &uVar17, 0, 0))
		{
			Var21.f_3.f_1 = 10;
			Var21.f_1 = &uParam1->f_278[iVar0];
			func_560(&uVar17, Var21);
		}
		return;
	}
	func_561(iVar2, &(uParam1->f_278[iVar0]));
}

void func_521(int iParam0, int iParam1)
{
	if (!func_562(iParam0))
	{
		return;
	}
	if (func_563(iParam0))
	{
		return;
	}
	if (!func_564(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = func_565(iParam1);
	if (iVar1 == 0 || iParam1 == -1)
	{
		return;
	}
	iVar2 = (&Global_1139381->f_5693[iVar0] + iVar1);
	if (&Global_1139381->f_5693[iVar0] <= (Global_1901947->f_801.f_1 + Global_1901947->f_801.f_3))
	{
		iVar2 = (Global_1901947->f_801.f_1 + Global_1901947->f_801.f_3);
	}
	if (&Global_1139381->f_5693[iVar0] >= (Global_1901947->f_801.f_2 + Global_1901947->f_801.f_11))
	{
		iVar2 = (Global_1901947->f_801.f_2 + Global_1901947->f_801.f_11);
	}
	if (func_566(iParam0, iVar2))
	{
		iVar3 = func_567(iVar2);
		iVar4 = func_568(iVar3);
		iVar2 = iVar4;
	}
	if (func_569(iParam0))
	{
		return;
	}
	func_570(iParam0, iVar2);
	Global_1139381->f_5693[iVar0] = iVar2;
}

int func_522(int iParam0, bool bParam1)
{
	Var0 = { func_350(iParam0, 0, 0) };
	return func_571(iParam0, &Var0, 0, bParam1);
}

int func_523(var uParam0, var uParam1)
{
	iVar0 = func_77(uParam0);
	if (!func_126(iVar0))
	{
		return 15;
	}
	return &(uParam1->f_247[iVar0]);
}

int func_524(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = func_437(uParam0);
	if (iVar0 == 1 || &uParam1->f_340[iParam3] == 1)
	{
		return 12;
	}
	else if (func_515(iParam2))
	{
		return 13;
	}
	return 12;
}

int func_525(int iParam0)
{
	if (func_572())
	{
		return 0;
	}
	if (!_0xdd73c9838ce7181d())
	{
		return 0;
	}
	if (func_573())
	{
		return 0;
	}
	iVar0 = func_574(iParam0);
	iVar1 = func_575(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_211(func_576(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_526()
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
	if (!func_528(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_527()
{
	return *Global_1051213;
}

bool func_528(struct<2> Param0)
{
	if (!func_577(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_578(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_529()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_530(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_530(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

struct<2> func_530(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_531(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_532(vector3 vParam0, int iParam3)
{
	func_579(iParam3, &vVar0, &Var3, &uVar6);
	if (func_580(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_533(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_534(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

bool func_535(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

struct<4> func_536()
{
	return Var0;
}

bool func_537()
{
	return (func_581(-1185145312, 0, 0, 0) > 0 && func_582(func_351(889965687, func_467(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_538(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_362(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_351(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_344(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_344(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_539(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_344(0);
	*uParam1 = { func_351(iParam0, func_468(0), iParam3, 0) };
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

bool func_540(int iParam0, int iParam1, int iParam2)
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

bool func_541(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_344(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_542(int iParam0)
{
	return iParam0;
}

int func_543(int iParam0, int iParam1)
{
	if (!func_583(iParam0, 2))
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

int func_544(int iParam0)
{
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_338(func_337());
	if (func_584(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_545()
{
	if (Global_1903071->f_5.f_2 <= 3f)
	{
		return true;
	}
	vVar0 = { func_142() };
	if (!func_38(vVar0) && func_274(Global_35, vVar0) < 3f)
	{
		return true;
	}
	return false;
}

bool func_546(var uParam0)
{
	return (uParam0->f_14 != -99999f && uParam0->f_14 < 0.03f);
}

float func_547(var uParam0, int iParam1)
{
	fVar0 = 0f;
	fVar1 = func_502(uParam0, iParam1, Global_39.f_5803);
	if (fVar1 > 0f)
	{
		fVar0 = (5f * fVar1);
	}
	if (fVar0 > 0f)
	{
		iVar2 = _get_prev_weather_type_hash_name();
		fVar0 = (fVar0 * func_585(iVar2));
	}
	return fVar0;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 158537911;
		case 1:
			return -1062286052;
		case 2:
			return -785236358;
		case 3:
			return -1450728546;
		case 4:
			return -1295437670;
		case 5:
			return 1767657451;
		case 6:
			return -1222065966;
		case 7:
			return -897542141;
		case 8:
			return -1458047097;
		case 9:
			return -1713740144;
		case 10:
			return -1518011865;
		case 11:
			return -1268607968;
		case 12:
			return -1666587802;
		case 13:
			return 759956813;
		case 14:
			return -129858069;
		default:
			break;
	}
	return 0;
}

float func_549(float fParam0)
{
	if (fParam0 == 4f)
	{
		fParam0 = 5f;
	}
	else if (fParam0 == 3f)
	{
		fParam0 = 4f;
	}
	else if (fParam0 == 2f)
	{
		fParam0 = 3f;
	}
	else if (fParam0 == 1f)
	{
		fParam0 = 2f;
	}
	else if (fParam0 == 0.5f)
	{
		fParam0 = 1f;
	}
	return fParam0;
}

bool func_550(var uParam0, var uParam1)
{
	iVar0 = func_77(uParam0);
	if ((func_126(iVar0) && func_61(&(uParam1->f_247[iVar0]))) && uParam0->f_156 >= &uParam1->f_800[&uParam1->f_247[iVar0]])
	{
		return true;
	}
	return false;
}

float func_551(var uParam0, int iParam1)
{
	fVar0 = func_375(&(uParam0->f_247[iParam1]), 0);
	fVar1 = func_376(&(uParam0->f_247[iParam1]), 0);
	fVar2 = (fVar1 - fVar0);
	fVar3 = (&uParam0->f_278[iParam1] - fVar0);
	fVar4 = func_183((fVar3 / fVar2), 0f, 1f);
	return fVar4;
}

int func_552(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (_0x84848e1c0fc67dbb(&(uParam0->f_57[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_553(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (_0x84848e1c0fc67dbb(&(uParam0->f_62[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_554(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_345(iParam0, 0))
	{
		return false;
	}
	if (iParam3 == -142743235)
	{
		if (func_586(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_360(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		_remove_ammo_from_ped_by_type(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_587(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_210(iParam0, 1))
	{
		return false;
	}
	Var5 = { func_588(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_217(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_217(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_554(iParam0, func_217(iParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_346(iParam0) == -427144552)
	{
		if (!func_589(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_590(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_350(iParam0, 0, 0) };
		if (func_208(0) && Var7.f_4 == 1084182731)
		{
			func_591(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1940144->f_21 = 0;
	}
	if (!func_208(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_587(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

int func_555()
{
	return round(Global_1903071->f_5.f_1);
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		default:
			return 0;
	}
	return RDR_LOCAL_LOAD_S;
}

int func_557(int iParam0)
{
	if (iParam0 == 1)
	{
		return -1850666435;
	}
	return 1551239286;
}

void func_558(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

bool func_559(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	func_592(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return false;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_593(uParam2, iParam0, Var1);
	return true;
}

void func_560(var uParam0, struct<15> Param1)
{
	if (!func_535(uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_2538)
	{
		if (func_594(Global_1293346->f_2538.f_1[iVar0], uParam0))
		{
			if (Global_1293346->f_2538.f_1[iVar0]->f_6 == 1)
			{
				Global_1293346->f_2538.f_1[iVar0]->f_7 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

void func_561(int iParam0, float fParam1)
{
	bVar0 = func_595(iParam0);
	if (func_208(0) && !func_209())
	{
		if (func_596(iParam0, 1, bVar0, 0, 0, 752097756, fParam1, 0, 0, 0))
		{
		}
	}
}

bool func_562(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 1);
}

bool func_563(int iParam0)
{
	if (!func_562(iParam0))
	{
		return false;
	}
	iVar0 = get_frame_count();
	if (&Global_1139381->f_5693.f_10[iParam0] == iVar0 || &Global_1139381->f_5693.f_10[iParam0] == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_564(int iParam0)
{
	if (!func_562(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (!func_122(&(Global_1139381->f_5693.f_6[iVar0]), 4))
	{
		return true;
	}
	if (&Global_1139381->f_5693.f_4[iVar0] != 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			if (func_210(273608212, 1))
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

int func_565(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
		case 6:
			return Global_1901947->f_801.f_12;
		case 7:
			return Global_1901947->f_801.f_13;
		case 8:
			return Global_1901947->f_801.f_14;
		case 9:
			return Global_1901947->f_801.f_15;
		case 10:
			return Global_1901947->f_801.f_16;
		case 11:
			return Global_1901947->f_801.f_17;
		case 12:
			return Global_1901947->f_801.f_18;
		case 0:
			return Global_1901947->f_801.f_19;
		case 1:
			return Global_1901947->f_801.f_20;
		case 2:
			return Global_1901947->f_801.f_21;
		case 3:
			return Global_1901947->f_801.f_22;
		case 4:
			return Global_1901947->f_801.f_23;
		case 5:
			return Global_1901947->f_801.f_24;
		default:
			break;
	}
	return 0;
}

bool func_566(int iParam0, int iParam1)
{
	if (!func_562(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (!func_122(&(Global_1139381->f_5693.f_6[iVar0]), 2))
	{
		return false;
	}
	iVar1 = func_597(iParam0);
	iVar2 = iVar1;
	iVar3 = func_567(iParam1);
	iVar4 = iVar3;
	if (iVar4 < iVar2)
	{
		return true;
	}
	return false;
}

int func_567(int iParam0)
{
	if (iParam0 <= Global_1901947->f_801.f_3)
	{
		return 0;
	}
	if (iParam0 <= Global_1901947->f_801.f_4)
	{
		if (Global_1901947->f_801.f_4 > 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam0 <= Global_1901947->f_801.f_5)
	{
		if (Global_1901947->f_801.f_5 > 0)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (iParam0 <= Global_1901947->f_801.f_6)
	{
		if (Global_1901947->f_801.f_6 > 0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (iParam0 <= Global_1901947->f_801.f_7)
	{
		if (Global_1901947->f_801.f_7 > 0)
		{
			return 3;
		}
		else
		{
			return 4;
		}
	}
	if (iParam0 <= Global_1901947->f_801.f_8)
	{
		if (Global_1901947->f_801.f_8 > 0)
		{
			return 4;
		}
		else
		{
			return 5;
		}
	}
	if (iParam0 <= Global_1901947->f_801.f_9)
	{
		if (Global_1901947->f_801.f_9 > 0)
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	if (iParam0 <= Global_1901947->f_801.f_10)
	{
		if (Global_1901947->f_801.f_10 > 0)
		{
			return 6;
		}
		else
		{
			return 7;
		}
	}
	if (iParam0 <= Global_1901947->f_801.f_11)
	{
		if (Global_1901947->f_801.f_11 > 0)
		{
			return 7;
		}
		else
		{
			return 8;
		}
	}
	return 8;
}

int func_568(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901947->f_801.f_3;
		case 1:
			return Global_1901947->f_801.f_4;
		case 2:
			return Global_1901947->f_801.f_5;
		case 3:
			return Global_1901947->f_801.f_6;
		case 4:
			return Global_1901947->f_801.f_7;
		case 5:
			return Global_1901947->f_801.f_8;
		case 6:
			return Global_1901947->f_801.f_9;
		case 7:
			return Global_1901947->f_801.f_10;
		case 8:
			return Global_1901947->f_801.f_11;
		default:
			break;
	}
	return 0;
}

bool func_569(int iParam0)
{
	if (!func_562(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (!func_122(&(Global_1139381->f_5693.f_6[iVar0]), 1))
	{
		return false;
	}
	if (func_122(&(Global_1139381->f_5693.f_8[iVar0]), 1))
	{
		return true;
	}
	return false;
}

void func_570(int iParam0, int iParam1)
{
	if (!func_562(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!func_122(&(Global_1139381->f_5693.f_6[iVar0]), 1))
	{
		return;
	}
	if (func_569(iParam0))
	{
		return;
	}
	iVar1 = func_567(iParam1);
	iVar2 = iVar1;
	if (&Global_1139381->f_5693.f_2[iVar0] > iVar2)
	{
		if ((func_122(&(Global_1139381->f_5693.f_6[iVar0]), 2) && (iParam1 - 1) <= func_568(iVar1)) && iParam1 <= 0)
		{
			if (!func_122(&(Global_1139381->f_5693.f_8[iVar0]), 1))
			{
				func_123(Global_1139381->f_5693.f_8[iVar0], 1);
				return;
			}
			return;
		}
		else if (iParam1 > 0 && (iParam1 - 1) <= func_568(iVar1))
		{
			if (!func_122(&(Global_1139381->f_5693.f_8[iVar0]), 1))
			{
				func_123(Global_1139381->f_5693.f_8[iVar0], 1);
				return;
			}
		}
	}
}

int func_571(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_345(iParam0, 0) && !func_583(func_542(iParam0), 2))
	{
		return 0;
	}
	if (func_346(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_362(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_344(bParam3), iParam0);
}

bool func_572()
{
	return (func_598(0) && func_598(1));
}

bool func_573()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

int func_574(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

int func_575(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_599(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_50[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_50[iParam0]);
		default:
			break;
	}
	return 1;
}

int func_576(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return 0;
}

bool func_577(int iParam0)
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

int func_578(int iParam0)
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

void func_579(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_580(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * cos(fParam8)) + (vVar0.y * sin(fParam8)));
	Var3.f_1 = ((vVar0.x * sin(fParam8)) - (vVar0.y * cos(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_581(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_600(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_344(bParam1), iParam0, iParam3);
}

int func_582(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_601(&uParam0, iParam4, bParam5, iParam6);
}

bool func_583(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_584(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_585(int iParam0)
{
	fVar0 = 1f;
	switch (iParam0)
	{
		case -1721991356:
		case -416908843:
			fVar0 = (fVar0 * 1.25f);
			break;
		case -1317052143:
		case -1233681761:
		case -273223690:
		case 212278652:
		case 603685163:
		case 669657108:
		case 725623432:
		case 839715153:
		case 1679686673:
		case 1974067816:
		case 2082228755:
		case 2137137442:
			fVar0 = (fVar0 * 0.5f);
			break;
	}
	return fVar0;
}

bool func_586(int iParam0)
{
	return func_346(iParam0) == 2085633299;
}

void func_587(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_345(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_602() || bParam6)
	{
		func_603(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_604(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_604(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_605(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_346(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_461(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_606(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar13 = 109029619;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_479(iParam0, 474910316))
	{
		sVar17 = func_607(iParam0);
		if (!is_string_null_or_empty(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_479(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_608(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -1777836132;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	iVar18 = func_358(iParam0);
	if ((func_609(iVar12) && func_479(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_610(iParam0);
	}
	else if (func_346(iParam0) == -1037537535)
	{
		iVar19 = func_611(iParam0);
		if (func_345(iVar19, 0))
		{
			iVar18 = func_358(iVar19);
		}
	}
	if (func_612(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_613(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_359(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_614(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_615(iParam0, &cVar22))
		{
			sVar21 = func_216(func_616(cVar22), 109029619);
		}
	}
	func_617(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_588(int iParam0)
{
	if (!func_345(iParam0, 0))
	{
		return Var0;
	}
	if (func_479(iParam0, -305066475))
	{
		if (func_200() == -1)
		{
			if (func_479(iParam0, -537818634))
			{
				return func_519(189951448);
			}
			else
			{
				return func_519(1176172851);
			}
		}
	}
	else if (func_479(iParam0, -537818634))
	{
		return func_519(-963660207);
	}
	if (func_479(iParam0, 2084895747))
	{
		return func_519(1694039471);
	}
	return Var2;
}

bool func_589(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_481(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_482(&Var0, func_468(0));
	}
	if (!func_483(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_458(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_618(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_460(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_590(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_345(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_362(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_619(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_350(iParam0, bParam4, 0) };
	Var6 = { func_351(iParam0, Var1, Var1.f_4, bParam4) };
	return func_618(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

void func_591(int iParam0, bool bParam1, int iParam2)
{
	Global_1940311->f_4 = iParam0;
	Global_1940311->f_34 = iParam2;
	if (bParam1 || (func_620() && iParam2 == 0))
	{
		func_621(1);
		func_622(1);
	}
}

void func_592(var uParam0)
{
	func_558(uParam0, 143479330);
	if (func_623() == 2026485318)
	{
		func_558(uParam0, 617531372);
	}
	else
	{
		func_558(uParam0, 291123060);
	}
}

void func_593(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_535(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2538 < 20)
	{
		Global_1293346->f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2538.f_1[iVar0] = { *(Global_1293346->f_2538.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1293346->f_2538.f_1[(Global_1293346->f_2538 - 1)]) = { Var1 };
}

bool func_594(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_595(int iParam0)
{
	if (((((((((((((((((((((((((((((iParam0 == -151356522 || iParam0 == 1006434513) || iParam0 == 1481288777) || iParam0 == 306916738) || iParam0 == -1824685471) || iParam0 == 724563284) || iParam0 == 803930024) || iParam0 == 1917027383) || iParam0 == 1111663869) || iParam0 == -855052577) || iParam0 == 1425358430) || iParam0 == -5376850) || iParam0 == 1297433586) || iParam0 == 1338219162) || iParam0 == -293259613) || iParam0 == -1538397860) || iParam0 == 588902637) || iParam0 == 193037129) || iParam0 == -861419347) || iParam0 == 1416872916) || iParam0 == 357567274) || iParam0 == 1500919793) || iParam0 == 683583793) || iParam0 == 1042542561) || iParam0 == -1202625002) || iParam0 == 56657913) || iParam0 == 485620834) || iParam0 == 1570826681) || iParam0 == 727522818) || iParam0 == 785407605)
	{
		return 0;
	}
	return 1;
}

bool func_596(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_345(iParam0, 0))
	{
		return false;
	}
	if (!func_624(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_625(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_626(iParam0, bParam2);
	iVar2 = 0;
	if (func_346(iParam0) == -1037537535)
	{
		if (!func_479(iParam0, 866047851) && !func_479(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_605(iParam0, 8388608) && !func_454(27))
	{
		func_627(27);
	}
	func_628(iParam0);
	if (!bVar3)
	{
		if (func_479(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_630(func_629(iParam0, 1), 0);
			if (is_weapon_valid(iVar1))
			{
				if (func_200() == -1)
				{
					func_631(iVar1);
				}
				if (func_208(0) && func_632(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_633(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_634(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_346(iParam0) == -427144552)
		{
			if (!func_635(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_346(iParam0) == 307971639 && func_600(iParam0))
		{
			if (!func_636(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_479(iParam0, -103750053))
		{
			func_638(func_637(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_638(func_639(-717883113, 2091222383), iVar0);
		}
		else if (func_479(iParam0, -121341956) && !func_479(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_640(536, 0);
			}
			if (func_479(iParam0, -2017733358) || func_479(iParam0, -1369131378))
			{
			}
		}
		else if (func_479(iParam0, -136654233))
		{
			if (func_479(iParam0, -1021472396))
			{
			}
		}
		else if (func_479(iParam0, -1466706512) && func_479(iParam0, 1147021565))
		{
			func_640(519, 0);
		}
		else if (func_479(iParam0, 1147021565) && func_479(iParam0, -524514947))
		{
		}
		else if (func_479(iParam0, 554195525))
		{
		}
		else if (func_479(iParam0, 589988438))
		{
			if (func_641())
			{
				func_642(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_479(iParam0, 787083290) && func_479(iParam0, 949916894))
		{
			func_643(iParam0);
		}
		else if (func_479(iParam0, -1718133314))
		{
			func_644(iParam0);
		}
		else if (func_479(iParam0, -1738650224))
		{
			func_645(iParam0);
		}
		else if (func_479(iParam0, -1112814642) && func_479(iParam0, 949916894))
		{
			func_646(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1940144->f_21 = 0;
		}
		else if (func_479(iParam0, 1841149704))
		{
			func_647();
		}
		else if (func_479(iParam0, -1979000645))
		{
		}
		else if (func_479(iParam0, 606799272))
		{
		}
		else if (func_479(iParam0, -1112814642) && func_479(iParam0, -1697809989))
		{
		}
		else if (func_479(iParam0, -2017733358) || func_479(iParam0, -1369131378))
		{
		}
		else if (func_479(iParam0, -1921346699))
		{
			return false;
		}
		else if (func_479(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_210(215778062, 1))
					{
						func_596(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_210(670273567, 1))
					{
						func_596(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_210(-967317137, 1))
					{
						func_596(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_210(526074061, 1))
					{
						func_596(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_210(-1045488665, 1))
					{
						func_596(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_210(471514780, 1))
					{
						func_596(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_479(iParam0, -839724752) && func_605(iParam0, 4))
		{
		}
		else if (func_479(iParam0, 1399091007))
		{
			func_648(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1127253961:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1531214887;
				break;
			case -160924582:
			case 1652431022:
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -21093309:
				func_649(272, func_358(-21093309), 0);
				break;
			case 204375141:
				func_649(270, func_358(204375141), 0);
				break;
			case -417963070:
				func_649(271, func_358(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_650(685, 1934060482, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_650(685, 1110018439, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_650(685, 1408511260, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_650(685, -1228016946, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_650(686, -103579, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_650(686, -1531530025, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case 80178851:
				func_640(526, 0);
				break;
			case 1613651027:
				func_640(529, 0);
				break;
			case -885810591:
				break;
			case -601932535:
				if (func_454(1))
				{
					func_640(522, 0);
				}
				break;
			case -898386032:
				func_640(521, 0);
				break;
			case -2035110427:
				if (func_200() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_640(534, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar5 = iParam0;
		func_651(&iVar5);
		if (!func_634(iVar5, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_208(0))
		{
			return true;
		}
		if (func_346(iParam0) == -1037537535)
		{
			func_652(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_208(0) && !func_209())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_596(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_653(iVar2, 0);
		}
	}
	Var30 = { func_588(iParam0) };
	if (_stat_id_is_valid(&Var30))
	{
		_0x6a0184e904cdf25e(&Var30, iVar0);
	}
	func_654(iParam0);
	if (fParam6 > 0f)
	{
		if (func_479(iParam0, -839724752))
		{
			func_655(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_587(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return true;
}

int func_597(int iParam0)
{
	if (!func_562(iParam0))
	{
		return -1;
	}
	iVar0 = iParam0;
	iVar1 = func_567(&(Global_1139381->f_5693[iVar0]));
	return iVar1;
}

bool func_598(int iParam0)
{
	return func_656(&(Global_1956200->f_1565), iParam0, 1);
}

int func_599(int iParam0)
{
	return func_657(func_598(iParam0));
}

bool func_600(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_601(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_658(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_602()
{
	return !&Global_1913504;
}

void func_603(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_1913504->f_3)
	{
		if ((((&Global_1913504->f_4[iVar0] == iParam0 && Global_1913504->f_4[iVar0]->f_2 == bParam2) && Global_1913504->f_4[iVar0]->f_3 == bParam3) && Global_1913504->f_4[iVar0]->f_4 == bParam4) && Global_1913504->f_4[iVar0]->f_5 == bParam5)
		{
			Global_1913504->f_4[iVar0]->f_1 = (Global_1913504->f_4[iVar0]->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504->f_3 < 19)
	{
		Global_1913504->f_4[Global_1913504->f_3] = iParam0;
		Global_1913504->f_4[Global_1913504->f_3]->f_1 = iParam1;
		Global_1913504->f_4[Global_1913504->f_3]->f_2 = bParam2;
		Global_1913504->f_4[Global_1913504->f_3]->f_3 = bParam3;
		Global_1913504->f_4[Global_1913504->f_3]->f_4 = bParam4;
		Global_1913504->f_4[Global_1913504->f_3]->f_5 = bParam5;
		Global_1913504->f_3++;
	}
}

char* func_604(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_605(int iParam0, int iParam1)
{
	if (!func_345(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_606(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @227; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_607(int iParam0)
{
	if (func_479(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_479(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_479(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_479(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_479(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_479(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_479(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_479(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_479(iParam0, -352095726) || func_479(iParam0, -2014783736)) || func_479(iParam0, -545064757)) || func_479(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_608(int iParam0)
{
	if (func_479(iParam0, -189374246))
	{
		if (((func_659(iParam0, -1305775593) || func_659(iParam0, 1384151091)) || func_659(iParam0, 2075388272)) || func_659(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_479(iParam0, -753854379) || func_479(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_609(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_610(int iParam0)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35]->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35] != 0)
				{
					return &(Var0.f_18[iVar35]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_611(int iParam0)
{
	iVar0 = func_660(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_661(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_662(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_663(iVar14))
			{
				func_664(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_664(iVar11);
	}
	return 0;
}

bool func_612(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_613(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_345(iParam0, 0) && !func_583(func_542(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_614(int iParam0, int iParam1)
{
	iVar0 = func_665(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_615(int iParam0, char* sParam1)
{
	if (!func_345(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_215(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_666(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_667(iParam0), 128);
	if (is_string_null_or_empty(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + get_length_of_literal_string(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_616(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

var func_617(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_668(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_618(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_669(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_474(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_208(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_200() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_670(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_671(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_344(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_619(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_669(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_362(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_208(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_672(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_673(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_670(1702063850, &Var65, 1);
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
			Var81 = bParam3;
			Var81.f_7 = iParam2;
			func_671(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_344(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_620()
{
	if ((Global_1940311->f_10901 != (Global_1940311->f_38.f_203 - 1) || func_675(func_674(0), Global_1940311->f_10893, 0, 1, 1) > 0) || Global_1940311->f_10901 == 15)
	{
		return true;
	}
	func_676();
	if (Global_1940311->f_6)
	{
		return true;
	}
	return false;
}

void func_621(int iParam0)
{
	Global_1940311->f_10 = iParam0;
}

void func_622(int iParam0)
{
	Global_1940311->f_9 = iParam0;
}

int func_623()
{
	return Global_1952637->f_1;
}

bool func_624(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_200() == -1)
	{
		if (func_677(iParam0) && func_678(iParam0))
		{
			func_679(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == -1569615261)
	{
		return false;
	}
	return true;
}

bool func_625(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_680(iParam0, iParam1);
	Var0 = { func_350(iParam0, 0, 1) };
	iVar5 = func_571(iParam0, &Var0, 0, 0);
	iVar6 = func_581(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_479(iParam0, -2051813666))
		{
			func_640(674, 1);
		}
		else if (func_200() == -1)
		{
			func_640(673, 0);
		}
	}
	if (func_681(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_626(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_682())
	{
		return;
	}
	switch (func_683(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1940144->f_70.f_5 = 1;
			Global_1940144->f_70.f_6 = 0;
			Global_1940144->f_70.f_1 = iParam0;
			break;
	}
}

void func_627(int iParam0)
{
	if (!func_533(iParam0))
	{
		return;
	}
	func_684(iParam0);
	func_685(iParam0);
}

void func_628(int iParam0)
{
	if (func_479(iParam0, -1522723129))
	{
		func_211(-848633709, 0, 255, 0, 0);
	}
	else if (func_479(iParam0, -283942357))
	{
		func_211(-981153234, 0, 255, 0, 0);
	}
	else if (func_479(iParam0, 683680997))
	{
		func_211(-756350192, 0, 255, 0, 0);
	}
	else if (func_479(iParam0, 1307628809))
	{
		func_211(603094518, 0, 255, 0, 0);
	}
}

int func_629(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case -1860710511:
			iVar0 = -764310200;
			break;
		case 1507636870:
			iVar0 = -764310200;
			break;
		case 1828724907:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 1270940175:
			iVar0 = -764310200;
			break;
		case -1857826511:
			iVar0 = -764310200;
			break;
		case 480079517:
			iVar0 = -1504859554;
			break;
		case 840671577:
			iVar0 = -1504859554;
			break;
		case 1446246869:
			iVar0 = 1885857703;
			break;
		case -2006166057:
			iVar0 = 1885857703;
			break;
		case 1235846615:
			iVar0 = -1511427369;
			break;
		case -228768324:
			iVar0 = 2133046983;
			break;
		case -1411922943:
			iVar0 = -1511427369;
			break;
		case -834103244:
			iVar0 = -1511427369;
			break;
		case 34372170:
			iVar0 = 1151374672;
			break;
		case 963726415:
			iVar0 = -577893115;
			break;
		case 424030678:
			iVar0 = 165751297;
			break;
		case 446901936:
			iVar0 = 710736342;
			break;
		case -1092841802:
			iVar0 = -462374995;
			break;
		case -1452241321:
			iVar0 = 567069252;
			break;
		case -1188697038:
			iVar0 = -281894307;
			break;
		case 1671758975:
			iVar0 = -1127860381;
			break;
		case -893514737:
			iVar0 = -1894785522;
			break;
		case -2063089161:
			iVar0 = 469927692;
			break;
		case -452897925:
			iVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_345(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_686(iVar0) || func_687(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_630(int iParam0, bool bParam1)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_631(int iParam0)
{
	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_459(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

bool func_632(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		Var0 = { func_350(iParam0, 0, 1) };
		if (func_470(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_471(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_351(iParam0, Var0, Var0.f_4, 0) };
				func_618(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_208(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_633(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_688(iParam0, iParam1);
		return true;
	}
	if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_633(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_600(iParam0))
	{
		return false;
	}
	if (!func_208(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return true;
}

int func_634(int iParam0, int iParam1, int iParam2)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_362(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_689(iParam0, iParam1, iParam2);
	}
	Var1 = { func_350(iParam0, 0, 1) };
	Var6 = { func_351(iParam0, Var1, Var1.f_4, 0) };
	return func_690(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_635(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_630(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_200() == -1)
		{
			func_631(iVar0);
			if (iParam1 == 1248274121)
			{
				func_691(iVar0);
			}
		}
		if (!func_681(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_679(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_692(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_632(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || _is_weapon_binoculars(iVar0))
			{
				func_632(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_lasso(iVar0))
			{
				func_632(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_693())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_694(iVar0))
				{
					func_632(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_632(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_695(Global_34, 2, 0, 1);
				if ((((func_459(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_210(-1185145312, 1)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_34, iVar7);
				}
				if (func_459(iVar7) && func_210(-1185145312, 1))
				{
					if (!func_632(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_632(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_632(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (_0x9f0e1892c7f228a8(1) != 0 && iParam1 == 1248274121)
	{
		func_640(515, 1);
	}
	return true;
}

int func_636(int iParam0, int iParam1, int iParam2)
{
	if (!func_600(iParam0))
	{
		return 0;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_34, iParam0);
	if (func_459(iVar4))
	{
		get_max_ammo(Global_34, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (_is_weapon_bow(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = _get_weapon_clip_size(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * absi(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_649(func_696(iParam0), func_358(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_208(0))
	{
		if (func_633(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_634(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_637(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_638(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<2> func_639(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_640(int iParam0, bool bParam1)
{
	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_699(iVar0, iVar1);
}

bool func_641()
{
	return false;
}

int func_642(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	if (func_200() == 0)
	{
		func_653(iParam0, 0);
		return 0;
	}
	iVar0 = func_700(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_701(iVar0, sParam4, iParam5, 0);
	}
	func_702(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_643(int iParam0)
{
}

void func_644(int iParam0)
{
}

void func_645(int iParam0)
{
}

void func_646(int iParam0)
{
}

void func_647()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_648(int iParam0, int iParam1)
{
	func_480(iParam0, iParam1, &uVar0);
}

void func_649(int iParam0, int iParam1, bool bParam2)
{
	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_703(iParam0, 1024))
	{
		return;
	}
	func_699(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 2;
}

void func_650(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_703(iParam0, 1024))
	{
		return;
	}
	func_699(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 5;
	}
}

void func_651(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

void func_652(int iParam0)
{
	if (func_200() != -1)
	{
		return;
	}
}

bool func_653(int iParam0, int iParam1)
{
	if (0 == iParam0)
	{
		return false;
	}
	Var4.f_1 = 10;
	func_558(&Var4, 1356624740);
	return func_559(iParam0, &Var4, &uVar0, iParam1, 0);
}

void func_654(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			break;
	}
}

void func_655(int iParam0, char* sParam1)
{
	sVar0 = func_704(Global_1903071->f_37);
	func_617(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_705(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_656(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_657(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_658(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_344(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_541(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_659(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

int func_660(int iParam0)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

struct<10> func_661(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_662(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_663(int iParam0)
{
	if (!func_345(iParam0, 0))
	{
	}
	if (func_479(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_664(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0xcbb7b6edfa933ade(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_665(int iParam0, int iParam1)
{
	iVar41 = 0;
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43]->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

bool func_666(int iParam0)
{
	if (func_461(iParam0) == -126813555 || func_461(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_667(int iParam0)
{
	if (!func_345(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_610(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

void func_668(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_669(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_670(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_706(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_708(func_707(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_709(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_671(int iParam0, struct<17> Param1)
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

bool func_672(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_362(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_710(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_673(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_351(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_674(int iParam0)
{
	return _0xf49f14462f0ae27c(get_player_index());
}

int func_675(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_217(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_711(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_712(iParam1, bParam4));
	}
	return iVar0;
}

void func_676()
{
	if (!func_345(Global_1940311->f_10893, 0))
	{
		Global_1940311->f_6 = 0;
	}
	else if ((((func_683(Global_1940311->f_10893, 1224357681) != 0 && Global_1940311->f_10892 != 0) && Global_1940311->f_10892 != -2074770370) && !Global_1915715->f_20638) && !Global_1915715->f_22504.f_1)
	{
		Global_1940311->f_6 = 1;
	}
	else
	{
		Global_1940311->f_6 = 0;
	}
}

bool func_677(int iParam0)
{
	return func_346(iParam0) == -427144552;
}

bool func_678(int iParam0)
{
	if (func_200() != -1)
	{
		return false;
	}
	if (func_605(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_681(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_210(iParam0, 1);
}

void func_679(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_346(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_630(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_687(iVar0))
	{
		if (bParam2 || (!has_ped_got_weapon(Global_34, iVar0, 0, false) && func_217(iParam0, 0, 0, 0) == 0))
		{
			if (func_200() == -1)
			{
				func_631(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_587(iParam0, iParam1, 0, 0, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_680(int iParam0, int iParam1)
{
	if (func_479(iParam0, 58855631))
	{
		func_613(iParam0, -915411861, iParam1, 1);
	}
}

bool func_681(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_713(&iParam0);
	if (!func_345(iParam0, 0) && !func_583(func_542(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_362(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_677(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_468(0) };
		Var4.f_9 = -1591664384;
		if (!func_470(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_471(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_469(iParam0, 1))
		{
			if (!func_470(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_471(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_571(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_538(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_682()
{
	if (((((!_0x3ab6c7b0bb0df4b1(Global_34, -1) && !is_ped_using_any_scenario(Global_34)) && !func_714(Global_34, 1369124074)) && !func_714(Global_34, 713668775)) && !_0xec7e480ff8bd0bed(Global_34)) && !is_ped_in_any_vehicle(Global_34, false))
	{
		return true;
	}
	return false;
}

int func_683(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return &(Var0[iVar42]);
			}
			iVar42++;
		}
	}
	return 0;
}

void func_684(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3643[iVar1];
	set_bit(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_685(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_715(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_716(1);
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_716(2);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_716(3);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_717(1);
			break;
		case 33:
			func_718(1);
			break;
		case 34:
			func_719(1);
			break;
		case 35:
			break;
		case 36:
			func_720(0);
			break;
		case 37:
			func_721(0);
			break;
		case 38:
			func_722(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if (func_723() && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_724("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_640(677, 0);
			break;
		case 3:
			if (func_723() && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_724("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_640(678, 0);
			break;
		case 4:
			if (func_723() && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_724("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_640(679, 0);
			break;
		case 5:
			if (func_723() && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_724("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_640(680, 0);
			break;
		case 23:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			break;
		case 47:
			if (func_200() == -1)
			{
				if (!func_210(1013902307, 1))
				{
					func_634(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_200() == -1)
			{
				if (!func_210(1013902307, 1))
				{
					func_634(1013902307, 1, 752097756);
				}
				if (!func_210(142640135, 1))
				{
					func_634(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_200() == -1)
			{
				if (!func_210(786809402, 1))
				{
					func_634(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_200() == -1)
			{
				if (!func_210(786809402, 1))
				{
					func_634(786809402, 1, 752097756);
				}
				if (!func_210(-518019409, 1))
				{
					func_634(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			_0x5b9813ecf7633fe8(0);
			break;
		case 24:
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 43:
			break;
		case 44:
			_unlock_set_unlocked(-843169622, true);
			Global_1940258->f_41 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 51:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 52:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 53:
			_unlock_set_unlocked(296662302, true);
			break;
		case 54:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 55:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_686(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_visible(iVar0))
	{
		return true;
	}
	return false;
}

bool func_687(int iParam0)
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

void func_688(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_725(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

int func_689(int iParam0, int iParam1, int iParam2)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_362(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_350(iParam0, 0, 0) };
	if (func_681(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_208(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_344(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_690(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_681(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_208(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_344(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_691(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_34) || Global_1940258->f_6)
	{
		return;
	}
	if (_is_weapon_bow(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (_is_weapon_pistol(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (_is_weapon_revolver(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (_is_weapon_rifle(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	decor_set_int(Global_34, sVar0, iParam0);
	iVar2 = func_337();
	func_726(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_34, sVar1, iVar2);
}

int func_692(int iParam0)
{
	if (func_727(iParam0))
	{
		if (get_ped_ammo_by_type(Global_34, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (_0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_sniper(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = _get_weapon_clip_size(iParam0) * 4;
		}
		iVar1 = get_ped_ammo_by_type(Global_34, _get_ammo_type_for_weapon(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_693()
{
	return false;
}

bool func_694(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_695(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_696(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_454(49))
			{
				if (!func_454(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_454(50))
			{
				if (!func_454(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_697(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_698(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_728(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_729(iParam0))
	{
		return false;
	}
	if (func_730(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_703(iParam0, 1)) || func_731(32768))
	{
		if (!func_703(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_732())
	{
		return false;
	}
	return true;
}

void func_699(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

int func_700(int iParam0, bool bParam1, int iParam2)
{
	if (func_200() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_210(1811977508, 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_34, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_345(iVar25, 0) && func_479(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_701(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		if (bParam3)
		{
			func_733(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_617(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_702(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_734() || func_735())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_617(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_617(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, 752097756);
		func_638(func_519(1644987397), iVar1);
	}
}

bool func_703(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

char* func_704(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_705(int iParam0)
{
	if (!func_736(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_706(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_737(uParam1->f_8, iParam0, uVar0, 2048) || func_737(uParam1->f_8, iParam0, uVar0, 32768)) || func_737(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_737(uParam1->f_8, iParam0, uVar0, 4) || func_737(uParam1->f_8, iParam0, uVar0, 256)) || func_737(uParam1->f_8, iParam0, uVar0, 65536)) || func_737(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_737(uParam1->f_8, iParam0, uVar0, 1) || func_737(uParam1->f_8, iParam0, uVar0, 8)) || func_737(uParam1->f_8, iParam0, uVar0, 65536)) || func_737(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_737(uParam1->f_8, iParam0, uVar0, 1) || func_737(uParam1->f_8, iParam0, uVar0, 16)) || func_737(uParam1->f_8, iParam0, uVar0, 2)) || func_737(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_737(uParam1->f_8, iParam0, uVar0, 8) || func_737(uParam1->f_8, iParam0, uVar0, 4096)) || func_737(uParam1->f_8, iParam0, uVar0, 256)) || func_737(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_707(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_708(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_738(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_738(iParam1, 2, 0, 0);
	return -1;
}

int func_709(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_738(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_710(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_739((*uParam0)[iVar0]))
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
				*(*uParam0)[iVar0] = { func_536() };
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

int func_711(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (func_740(iParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1904087->f_113[iVar1]->f_1 == iParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_741(_inventory_get_ped_inventory_id(iParam0), iParam1);
		}
	}
	return 0;
}

int func_712(int iParam0, bool bParam1)
{
	if (!bParam1 || func_742())
	{
		return func_538(iParam0, func_467(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_713(int iParam0)
{
	if (!func_345(*iParam0, 0))
	{
		return 0;
	}
	if (!func_743(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			break;
		case 1903483453:
			*iParam0 = -1527293029;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case -1424823393:
			*iParam0 = -885810591;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_714(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_715(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (bParam0)
	{
		_0xa0c683284df027c7(player_id(), 15, 1);
	}
	else
	{
		_0xa0c683284df027c7(player_id(), 15, 0);
		_0xa0c683284df027c7(player_id(), 1, 1);
	}
}

void func_716(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1956200->f_5.f_7))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1956200->f_5.f_7) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1956200->f_5.f_7, iParam0);
		if (iVar0 == &Global_1956200->f_5.f_14[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1956200->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1956200->f_5.f_14[iParam0]));
}

void func_717(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 440, !bParam0);
}

void func_718(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 439, !bParam0);
}

void func_719(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 438, !bParam0);
}

void func_720(bool bParam0)
{
	iVar0 = 398076311;
	if (bParam0)
	{
		_hide_hud_component(iVar0);
	}
	else
	{
		_display_hud_component(iVar0);
	}
}

void func_721(bool bParam0)
{
	iVar0 = 50;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

void func_722(bool bParam0)
{
	iVar0 = 49;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

bool func_723()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

var func_724(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_725(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_726(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_744(*iParam0);
	iVar1 = func_745(*iParam0);
	iVar2 = func_746(*iParam0);
	iVar3 = func_338(*iParam0);
	iVar4 = func_339(*iParam0);
	iVar5 = func_747(*iParam0);
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
	iVar6 = func_748(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_748(iVar1, iVar0);
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
	func_749(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_727(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_728(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_729(int iParam0)
{
	if (func_703(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_730(int iParam0)
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

bool func_731(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_732()
{
	if (!func_750())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

void func_733(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_751())
	{
		Global_1913504->f_125 = get_game_timer();
		Global_1913504->f_126 = iParam1;
	}
	Global_1913504->f_127 = (Global_1913504->f_127 + iParam0);
}

bool func_734()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_735()
{
	return is_dlc_present(-2112896652);
}

bool func_736(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @230; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_737(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_122(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_738(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_752(iParam0, iParam1, iParam2, iParam3);
}

bool func_739(var uParam0)
{
	if (!func_753(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

bool func_740(int iParam0)
{
	if (!func_612(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_754(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_741(int iParam0, int iParam1)
{
	if (!func_345(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_755(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	iVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return iVar4;
}

bool func_742()
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
	if (!func_756(iVar0))
	{
		return false;
	}
	return true;
}

bool func_743(int iParam0)
{
	return func_479(iParam0, 1279601681);
}

int func_744(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_757(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_745(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_746(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_747(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_748(int iParam0, int iParam1)
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

void func_749(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_758(iParam0, iParam6);
	func_759(iParam0, iParam5);
	func_760(iParam0, iParam4);
	func_761(iParam0, iParam3);
	func_762(iParam0, iParam2);
	func_763(iParam0, iParam1);
}

bool func_750()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_751()
{
	return Global_1913504->f_127 == 0;
}

void func_752(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_764(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_753(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_754(int iParam0, int iParam1)
{
	iVar0 = func_765(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_755(int iParam0, int iParam1)
{
	Var0 = { func_766(iParam0) };
	return func_767(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_756(int iParam0)
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

int func_757(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_758(int iParam0, int iParam1)
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

void func_759(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_760(int iParam0, int iParam1)
{
	iVar0 = func_745(*iParam0);
	iVar1 = func_744(*iParam0);
	if (iParam1 < 1 || iParam1 > func_748(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_761(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_762(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_763(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_764(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_768(&(uParam0->f_4));
}

int func_765(int iParam0)
{
	if (!_item_database_fillout_satchel_data(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_766(int iParam0)
{
	Var0 = { func_767(iParam0, 1328661203, func_536(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_767(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_345(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

void func_768(var uParam0)
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

