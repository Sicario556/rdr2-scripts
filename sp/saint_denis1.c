void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_225 = 1;
	iLocal_226 = 2;
	iLocal_227 = 3;
	iLocal_228 = 4;
	iLocal_229 = 5;
	iLocal_230 = 6;
	iLocal_231 = 7;
	iLocal_232 = 8;
	iLocal_233 = 9;
	iLocal_234 = 10;
	iLocal_235 = 11;
	iLocal_930 = 1;
	iLocal_933 = 1;
	iLocal_935 = 1;
	iLocal_938 = 1;
	iLocal_941 = 1;
	iLocal_943 = 1;
	iLocal_944 = 1;
	iLocal_945 = 1;
	iLocal_947 = 1;
	iLocal_957 = 1;
	iLocal_961 = 1;
	iLocal_1450 = -1;
	iLocal_1452 = -1;
	iLocal_1453 = -1;
	iLocal_1456 = -1;
	iLocal_1460 = -1;
	iLocal_1461 = -1;
	iLocal_1462 = -1;
	iLocal_1677 = 1024;
	iLocal_1678 = 250;
	iLocal_1679 = 1000;
	vLocal_1680 = { 1.5f, 1.5f, 1.5f };
	vLocal_1683 = { 2642.062f, -1284.602f, 62.5f };
	vLocal_1686 = { 2639.443f, -1277.262f, 61f };
	vLocal_1741 = { -2f, 0f, 0f };
	vLocal_1744 = { 1.75f, -4f, 0f };
	vLocal_1747 = { -1.5f, -8f, 0f };
	vLocal_1750 = { 0.5f, -12f, 0f };
	vLocal_1753 = { 0f, 0f, 0f };
	iLocal_1840 = 6;
	iLocal_1855 = 999999;
	fLocal_1871 = 2f;
	fLocal_1872 = 5f;
	fLocal_1873 = 5f;
	fLocal_1874 = 15f;
	fLocal_1875 = 0f;
	iLocal_1876 = 1;
	sLocal_1877 = "nbd1_GoBank_PreDistTraff";
	sLocal_1878 = "nbd1_GoBank_PreDistTraff1";
	sLocal_1879 = "nbd1_GoBank_PreDistTraff2";
	sLocal_1880 = "nbd1_GoToNBD1_DutchToBank";
	sLocal_1881 = "nbd1_GoToNBD1_MicahToHitch";
	sLocal_1882 = "nbd1_GoToNBD1_JohnToHitch";
	sLocal_1883 = "nbd1_GoToNBD1_PlayerToHitch";
	sLocal_1884 = "nbd1_GoToNBD_saint_denis";
	sLocal_1885 = "nbd1_GoToNBD_Intro";
	sLocal_1886 = "nbd1_GoToNBD_ArthurHitch";
	sLocal_1887 = "nbd1_GoToNBD_CMEWagon";
	sLocal_1888 = "nbd1_GoBank_Wagon02";
	sLocal_1889 = "nbd1_GoBank_Cop01";
	sLocal_1890 = "nbd1_GoBank_Cop02";
	sLocal_1891 = "nbd1_GangToRoof_GatlingWagon";
	sLocal_1892 = "nbd1_RoofJump_JumpAssist_Middle";
	sLocal_1893 = "nbd1_RoofJump_JumpAssist_Left";
	sLocal_1894 = "nbd1_RoofJump_JumpAssist_Right";
	sLocal_1895 = "nbd1_RoofEscape_GangRuns";
	sLocal_1896 = "nbd1_RoofEscape_PlayerRun";
	sLocal_1897 = "nbd1_GoToDocks_TrainEnter";
	sLocal_1898 = "nbd1_GoToDocks_ToEnd";
	sLocal_1899 = "nbd1_GoToDocks_CharlesRuns";
	sLocal_1900 = "nbd1_GoToDocks_Train";
	sLocal_1901 = "nbd1_GoToDocks_ToIG13";
	sLocal_1902 = "nbd1_BankFight_Wagon1";
	sLocal_1903 = "nbd1_BankFight_Wagon2";
	sLocal_1904 = "nbd1_BankFight_Horse1";
	sLocal_1905 = "nbd1_BankFight_Horse2";
	sLocal_1906 = "nbd1_GoToRoof_Assist";
	sLocal_1907 = "nbd1_GoRoof_ToLadder";
	sLocal_1908 = "nbd1_GoRoof_AssistLeft";
	sLocal_1909 = "nbd1_GoRoof_AssistRight";
	sLocal_1910 = "nbd1_HoleInWall_ToWall";
	sLocal_1930 = "NBD1_WAGON";
	iLocal_1931 = -1477943109;
	iLocal_1932 = 2089945615;
	iLocal_1933 = -2136681514;
	iLocal_1934 = 1733501235;
	iLocal_1935 = 1751238140;
	iLocal_1936 = 965922748;
	iLocal_1937 = 1634115439;
	iLocal_1938 = 1830999060;
	iLocal_1939 = -89662225;
	sLocal_1940 = "DES_nbd1_bankwall";
	sLocal_1941 = "des_nbd1_bankwall_int";
	iLocal_2181 = 1845102363;
	iLocal_2598 = -2040421904;
	iLocal_2599 = -447184114;
	iLocal_2600 = -967333571;
	iLocal_2601 = -1098117563;
	iLocal_2602 = -1502733730;
	iLocal_2603 = -1814268450;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_2700, 1073741824);
		func_2(&uLocal_2700, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_2700);
	func_5(&uLocal_2700);
	while (!func_6(&uLocal_2700, -2147483648))
	{
		func_7(&uLocal_2700);
		wait(0);
	}
	while (!func_2(&uLocal_2700, 0))
	{
		wait(0);
	}
	terminate_this_thread();
}

void func_1(char[4] cParam0, int iParam1)
{
	cParam0->f_5309 = (cParam0->f_5309 || iParam1);
}

bool func_2(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 4096))
	{
		return true;
	}
	if (get_cause_of_most_recent_force_cleanup() == 4096)
	{
		func_9(cParam0);
		_display_hud_component(-1679307491);
		_display_hud_component(1331687942);
		if (func_10(Global_43801))
		{
			func_11(&Global_43801, 1, 1);
		}
		_uilog_clear_cached_objective();
		_0x1096603b519c905f("");
		func_13(func_12(cParam0->f_607), 0, 2);
		func_14();
		func_15(1);
		func_16(1, 0);
		func_17(cParam0, 1);
		func_18(0);
		_uilog_mark_all_entries_availability(0, "");
		Global_36605 = 0;
		func_19(3);
		if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
		{
			_set_scenario_type_enabled_hash(-2012097661, true);
		}
		terminate_this_thread();
	}
	if (!bParam1)
	{
		if (!func_6(cParam0, 1048576))
		{
			if (func_20() == 0)
			{
				func_21(0);
			}
			else if (func_22(cParam0) != 0)
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					if (_0x1204eb53a5fbc63d())
					{
						return false;
					}
					if (func_22(cParam0) == 1 || func_22(cParam0) == 2)
					{
						if (func_23(&(cParam0->f_8269)) && func_24(&(cParam0->f_8269)))
						{
							func_25(0, &(cParam0->f_8269.f_1282));
						}
					}
					if (!func_26(&(cParam0->f_13118)))
					{
						func_27(&(cParam0->f_13118), 0);
					}
					bVar0 = _0x139efb0a71dd9011();
					if (bVar0)
					{
						func_1(cParam0, 256);
					}
					bVar1 = _0x7ce9dc58e3e4755f();
					if (bVar1 && func_6(cParam0, 256))
					{
						_0x16e9abdd34ddd931();
						do_screen_fade_out(0);
					}
					else
					{
						if (((!bVar0 && !func_28(cParam0, bVar1)) && !func_29()) && !func_6(cParam0, 80))
						{
							if (!bVar1)
							{
								func_30(cParam0);
							}
							return false;
						}
						if (func_6(cParam0, 64))
						{
							_0x16e9abdd34ddd931();
							do_screen_fade_out(0);
						}
						else if (func_22(cParam0) == 2)
						{
							if (cParam0->f_13104 == -1)
							{
								if (func_31(cParam0))
								{
									cParam0->f_13104 = get_game_timer();
								}
							}
							if ((cParam0->f_13104 != -1 && get_game_timer() > cParam0->f_13104 + 4000) || bVar1)
							{
								_0x16e9abdd34ddd931();
								do_screen_fade_out(0);
							}
						}
						else if (func_22(cParam0) == 1)
						{
							if (func_28(cParam0, bVar1))
							{
								_0x16e9abdd34ddd931();
								do_screen_fade_out(0);
							}
						}
						else
						{
							_0x16e9abdd34ddd931();
							do_screen_fade_out(0);
						}
						is_screen_fading_in();
						if (!is_screen_faded_out())
						{
							return false;
						}
					}
				}
			}
			else if (func_6(cParam0, 2))
			{
				if (!is_screen_faded_out())
				{
					if (!is_screen_fading_out())
					{
						do_screen_fade_out(1000);
					}
					return false;
				}
				if (_0x1b065a2bf7953815(1) == 1)
				{
					return false;
				}
			}
			if (!func_32() && func_22(cParam0) != 0)
			{
				func_36(cParam0, func_34(func_33(cParam0)), func_34(func_35(cParam0)), func_33(cParam0), func_35(cParam0));
			}
		}
	}
	if (_does_anim_scene_exist(cParam0->f_7375.f_804))
	{
		if (check_ownership_of_anim_scene(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
	}
	func_1(cParam0, 1048576);
	if (!func_6(cParam0, 2097152))
	{
		if (!func_9(cParam0))
		{
			return false;
		}
		func_1(cParam0, 2097152);
	}
	_0x1096603b519c905f("");
	clear_focus();
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	set_time_scale(1f);
	func_37(&(cParam0->f_8269));
	if (func_23(&(cParam0->f_8269)))
	{
		func_38(&(cParam0->f_8269));
	}
	set_gps_active(false);
	set_player_invincible(get_player_index(), false);
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	set_random_trains(false);
	func_39(1);
	func_40(1);
	_0xc5eb2755fa25f1e9(1);
	func_41(0);
	func_42();
	func_19(3);
	if (!func_6(cParam0, 8))
	{
		_display_hud_component(-1679307491);
		_display_hud_component(724769646);
	}
	func_15(1);
	func_43();
	func_44();
	set_mission_name(false, 0);
	func_45();
	_set_milliseconds_per_game_minute(2000);
	pause_clock(false, 0);
	_0x914071ff93af2692(player_id(), 1f);
	_0x19b2c7a6c34fad54(player_id(), 1f);
	func_46(cParam0);
	func_47(1, 0);
	func_48(2);
	if (!Global_1935630->f_12)
	{
		set_ped_config_flag(Global_35, 141, false);
		_0xaac0ee3b4999abb5(Global_35, 0);
		_0xb832f1a686b9b810(Global_35, func_49(), 0);
		set_ped_config_flag(Global_35, 308, false);
		set_ped_can_use_auto_conversation_lookat(Global_35, false);
		set_ped_config_flag(Global_35, 446, false);
		_0xeae3b5b019c8d23f(Global_35, 262143);
		func_50(Global_35);
		set_ped_config_flag(Global_35, 170, false);
		set_ped_config_flag(Global_35, 43, false);
		set_ped_config_flag(Global_35, 360, false);
	}
	if (_0x2009f8ab7a5e9d6d(get_player_index()))
	{
		_0x12e09e278c6c29b7(get_player_index());
	}
	set_everyone_ignore_player(get_player_index(), false);
	if (does_cam_exist(cParam0->f_609.f_2))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(cParam0->f_609.f_2, false);
	}
	func_51(&(cParam0->f_10792));
	func_52();
	stop_gameplay_hint(true);
	func_39(1);
	func_53();
	if (func_54())
	{
		_0x2f9ac754fe179d58(0.3f);
	}
	func_55(0, 14);
	bVar2 = false;
	if (func_22(cParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		func_56(cParam0);
	}
	func_57(cParam0, 0, !bVar2, bVar2);
	func_58(cParam0, !bVar2);
	func_59(0);
	func_59(1);
	_0xdf93973251fb2ca5(player_id(), 1);
	func_60(0);
	func_62(func_61(cParam0));
	func_63(func_61(cParam0));
	func_64(0);
	func_65(0);
	func_66(func_22(cParam0));
	func_67(cParam0);
	if (!bVar2)
	{
		func_16(1, 0);
	}
	if (func_22(cParam0) != 1)
	{
		func_68(0, &(cParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	func_69(1);
	func_70(0);
	func_71(Global_1935630, 2097152);
	func_18(0);
	_uilog_mark_all_entries_availability(0, "");
	if (func_22(cParam0) == 0)
	{
		func_72((*Global_1835011)[cParam0->f_607]->f_1);
	}
	func_73();
	if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, true);
	}
	if (!bParam1)
	{
		switch (func_22(cParam0))
		{
			case 0:
				if (!is_screen_faded_in())
				{
					if ((!is_screen_fading_in() && !func_6(cParam0, 4)) && !func_6(cParam0, 2))
					{
						do_screen_fade_in(1000);
					}
				}
				func_74(cParam0);
				func_75(cParam0);
				func_76();
				func_78(func_77(), 0);
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_80(cParam0->f_607);
				bVar3 = func_81();
				if (!func_82(32768))
				{
					func_83(func_12(cParam0->f_607), !func_6(cParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_84(func_12(cParam0->f_607), bVar3);
				}
				func_17(cParam0, bParam1);
				if (cParam0->f_607 != 77)
				{
					_uilog_mark_mission_completed(func_85(cParam0));
				}
				func_14();
				if (func_82(32768))
				{
					do_screen_fade_out(0);
					func_86();
					func_87(0);
				}
				else if (func_6(cParam0, 2))
				{
					if (!is_screen_faded_out() && !is_screen_fading_out())
					{
						do_screen_fade_out(0);
					}
					func_88(1);
					func_89();
					func_90(6);
					func_91(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				func_92(func_12(cParam0->f_607));
				func_93();
				if (func_22(cParam0) == 2)
				{
					func_95(func_94(-1876607090), 1);
				}
				_0x55f37f5f3f2475e1();
				_0x062b4a4a3396351d(get_player_index());
				_0x07e8b8b20570271c(get_player_index());
				break;
			case 5:
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_93();
				Var4 = { func_94(-1876607090) };
				_0x0fee2561120f3333(&Var4);
				func_13(func_12(cParam0->f_607), 0, 2);
				break;
			default:
				func_83(func_12(cParam0->f_607), 1, 1, 0, 1);
				func_14();
				break;
		}
		if (func_22(cParam0) != 0)
		{
			Var6 = { func_96(cParam0) };
			func_97(func_12(cParam0->f_607), func_22(cParam0), &Var6, 0, 0, func_6(cParam0, 64));
		}
	}
	func_98(1);
	func_19(3);
	func_99(cParam0, 4096);
	return true;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4(var uParam0, char[4] cParam1)
{
	_0xed9582b3da8f02b4(20);
	cParam1->f_608 = uParam0->f_1;
	iVar0 = create_itemset(true);
	if (!func_20() == 0)
	{
		if (is_itemset_valid(Global_43616) && get_itemset_size(Global_43616) > 0)
		{
			iVar1 = 0;
			while (iVar1 < get_itemset_size(Global_43616))
			{
				iVar2 = get_indexed_item_in_itemset(iVar1, Global_43616);
				iVar3 = _get_entity_from_item(iVar2);
				if (((!is_entity_dead(iVar3) && is_entity_a_ped(iVar3)) && !is_in_itemset(iVar2, iVar0)) && get_ped_index_from_entity_index(iVar3) != Global_35)
				{
					add_to_itemset(iVar2, iVar0);
				}
				iVar1++;
			}
		}
	}
	func_100(cParam1);
	if (!func_20() == 0)
	{
		if (func_101(cParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < cParam1->f_7375.f_13)
			{
				if (((!is_entity_dead(&(cParam1->f_7375.f_13[iVar4])) && is_entity_a_ped(&(cParam1->f_7375.f_13[iVar4]))) && !is_in_itemset(&(cParam1->f_7375.f_13[iVar4]), iVar0)) && get_ped_index_from_entity_index(&(cParam1->f_7375.f_13[iVar4])) != Global_35)
				{
					add_to_itemset(&(cParam1->f_7375.f_13[iVar4]), iVar0);
				}
				iVar4++;
			}
		}
	}
	if (get_itemset_size(iVar0) > 0)
	{
		_0xf008e0ba1fe1d644(get_itemset_size(iVar0));
	}
	destroy_itemset(iVar0);
	if (func_102())
	{
		func_103(cParam1, 4194304);
	}
	if (func_104())
	{
		func_103(cParam1, 8388608);
	}
	if (func_105())
	{
		if (!func_104() && !func_102())
		{
			func_103(cParam1, 4);
		}
		else
		{
			if (func_104())
			{
			}
			if (func_102())
			{
			}
		}
		func_107(cParam1, func_106());
	}
	func_108(cParam1, uParam0);
	func_109(cParam1);
	if (cParam1->f_13105 > _0x62de46f061caa468())
	{
		_0xf008e0ba1fe1d644((cParam1->f_13105 - _0x62de46f061caa468()));
	}
}

void func_5(char[4] cParam0)
{
	cVar0 = func_110(cParam0->f_607);
	set_mission_name(true, &cVar0);
	if (!get_mission_flag())
	{
		set_mission_flag(true);
	}
	_0x1096603b519c905f(&cVar0);
	if (cParam0->f_607 != 77)
	{
		func_111();
		func_112(&cVar0, 0);
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_113(1);
	func_114();
	_0xa565fac215cbc77d();
	shutdown_loading_screen();
	func_45();
	func_40(func_115(cParam0));
	_0x55f37f5f3f2475e1();
	_0x292ad61a33a7a485();
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_116(func_77()))
	{
		_0x2161278c6322f740(16384, 0, 0, -1, -1, 0);
	}
	func_117(1, 0, 1);
	_0x2161278c6322f740(4096, 0, 0, -1, -1, 0);
	delete_all_trains();
	set_random_trains(false);
	func_39(0);
	func_118(cParam0);
	_0x33d51f801cb16e4f();
	if (!Global_1935630->f_12)
	{
		func_119(0, 0);
		_set_ped_crouch_movement(Global_35, false, 0, false);
		if (!func_120(cParam0, 16384) && (func_121(cParam0, func_33(cParam0), 2) || func_105()))
		{
			set_player_control(get_player_index(), false, 0, false);
		}
		clear_ped_wetness(Global_35);
		clear_ped_blood_damage(Global_35);
		remove_particle_fx_from_entity(Global_35);
		if (get_current_ped_weapon(Global_35, &iVar1, true, 0, false))
		{
			if ((((_0x2c83212a7aa51d3d(iVar1) || iVar1 == 1549070292) || iVar1 == 1030402560) || iVar1 == -135813381) || iVar1 == -351498939)
			{
				if (!func_105() && !func_121(cParam0, func_33(cParam0), 2))
				{
				}
			}
			else if (!func_122(iVar1) && !func_82(32768))
			{
				remove_weapon_from_ped(Global_35, iVar1, true, -142743235);
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			}
		}
		_0xb832f1a686b9b810(Global_35, false, 0);
		set_ped_can_use_auto_conversation_lookat(Global_35, true);
		func_123(cParam0);
	}
	func_70(1);
	func_39(0);
	func_124(cParam0, -1038436471);
	iLocal_222 = func_125(cParam0);
	iLocal_222 = iLocal_222;
	if (!Global_1935630->f_12)
	{
		if (!func_105())
		{
			Var2 = { func_34(func_33(cParam0)) };
			if (func_33(cParam0) != 0)
			{
				Var2 = { func_126(cParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				func_103(cParam0, 1048576);
			}
			func_107(cParam0, 0);
			if (func_128(cParam0, 3) || func_129())
			{
				func_130(cParam0, func_126(cParam0->f_607), 0);
			}
		}
		else
		{
			if (!is_ped_injured(player_ped_id()))
			{
				freeze_entity_position(player_ped_id(), false);
				set_entity_visible(player_ped_id(), true);
				func_131(get_entity_coords(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			func_107(cParam0, func_106());
		}
		_0x15b0cc1b36f1de29(&((*Global_1835011)[cParam0->f_607]->f_8), 0, func_132(func_33(cParam0)), func_105());
	}
	func_133(cParam0);
	func_134(cParam0, 0);
	func_135(cParam0, 0);
	if (!func_136(cParam0, func_33(cParam0)))
	{
		func_107(cParam0, 0);
	}
	func_137(cParam0);
	func_138(cParam0);
	func_139(cParam0);
	func_103(cParam0, 2097152);
	func_140(cParam0, func_33(cParam0), 134217728);
	if (func_82(32768))
	{
		func_1(cParam0, 4);
	}
	func_141(cParam0);
	func_142(cParam0, func_33(cParam0));
	func_143(func_61(cParam0));
	if (!func_120(cParam0, 65536))
	{
		func_144(func_61(cParam0));
	}
	func_145(cParam0, player_ped_id(), "ARTHUR", 0);
	func_146(cParam0);
	func_147(cParam0);
	func_148(cParam0);
	func_149(cParam0, 30f);
	func_150(cParam0, 40f);
	func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
	func_98(0);
	_0xa6a3a3f96b8b030e();
	func_18(1);
	_uilog_mark_all_entries_availability(2, "");
	if (cParam0->f_607 != 77)
	{
		cVar6 = func_110(cParam0->f_607);
		_uilog_mark_entry_availability(1, get_hash_key(&cVar6), 0, "");
	}
	if (is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, false);
	}
}

bool func_6(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5309 && iParam1) != 0;
}

void func_7(char[4] cParam0)
{
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_116(func_77()))
	{
		_0xf45e46deecf7df6e(16384, 0, 0, -1, -1);
	}
	if (!func_121(cParam0, func_33(cParam0), 16384))
	{
		func_152();
	}
	if (!func_8(cParam0, 32768))
	{
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	}
	if (!func_8(cParam0, 2048))
	{
		func_153(1, 0);
	}
	switch (func_154(cParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {func_155(func_61(cParam0))}, 4);
			if (!is_string_null_or_empty(&uVar0))
			{
				func_103(cParam0, 64);
			}
			func_156(cParam0, 0);
			func_157(cParam0);
			if (func_158(cParam0))
			{
				if (!is_entity_dead(func_159(cParam0)) && func_128(cParam0, 3))
				{
					freeze_entity_position(func_159(cParam0), false);
				}
				func_160(cParam0, 1);
			}
			if (func_6(cParam0, -2147483648))
			{
				func_160(cParam0, 2);
			}
			break;
		case 1:
			if (func_161(cParam0))
			{
				func_1(cParam0, -2147483648);
				func_160(cParam0, 2);
			}
			func_156(cParam0, func_162(cParam0, func_33(cParam0)) > 4);
			break;
		case 2:
			if (func_2(cParam0, 0))
			{
				func_1(cParam0, -2147483648);
				func_160(cParam0, 3);
			}
			break;
		case 3:
			terminate_this_thread();
			break;
	}
	if (func_154(cParam0) < 2)
	{
	}
}

bool func_8(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5307 && iParam1) != 0;
}

bool func_9(char[4] cParam0)
{
	func_163();
	if (!func_164(0, 1))
	{
		return false;
	}
	end_srl();
	_0xf01d21df39554115(1);
	func_69(1);
	func_165(1, 1);
	func_166();
	func_167();
	func_168(cParam0);
	func_169();
	func_170();
	func_171();
	func_172(0);
	func_173(cParam0, 0);
	func_174();
	func_175(cParam0, 0);
	func_176(0);
	func_177(0);
	func_178(0);
	func_179();
	func_180();
	func_181();
	func_182();
	func_183();
	func_184();
	func_185();
	func_186();
	func_187(cParam0, 0);
	func_188(cParam0);
	func_189();
	func_190();
	func_191();
	func_192();
	func_193(1);
	func_71(Global_1935630, 262144);
	func_194(1);
	_0xbc90bdf4e5228ea1();
	remove_model_hide(2251.48f, -1999.597f, 41.8739f, 10f, -1436029642, 1);
	remove_model_hide(2460.272f, -1606.838f, 45.0163f, 10f, -1832370395, 1);
	if (func_195(iVar1754, 2097152))
	{
		func_196(&uLocal_1757, 2097152);
	}
	func_197();
	func_198();
	if (does_entity_exist(Global_35) && !is_entity_dead(Global_35))
	{
		_set_ped_infinite_ammo_clip(Global_35, false);
	}
	_0x914071ff93af2692(player_id(), 1f);
	func_199(208);
	func_200();
	func_201(cParam0, &(iLocal_2449[0]), 1);
	func_202();
	Global_1911667 = 0;
	func_203(1947931439, 0, 0);
	Global_1934765->f_271 = 0;
	set_time_scale(1f);
	if (has_ptfx_asset_loaded())
	{
		remove_ptfx_asset();
	}
	return true;
}

bool func_10(int iParam0)
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

void func_11(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_10(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_204(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_205(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_206(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_207(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_208(iParam0) && !func_209(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_210(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_208(iParam0))
	{
		iParam2 = -1;
	}
	if (func_211(iParam0) == 3 || (func_211(iParam0) == 1 && _0x01f4d242765c6b24(func_210(iParam0))))
	{
		func_213(func_212(iParam0), func_210(iParam0), iParam2);
		if ((!func_207(Global_1572864->f_8) && !func_214(0, 1, 0)) && !func_215(&Global_1935630, 32768))
		{
			iVar0 = func_216(iParam0);
			if (iVar0 != -1)
			{
				func_217(0);
			}
			else if (func_212(iParam0) == 8)
			{
				iVar0 = func_218();
				if (iVar0 != -1)
				{
					func_217(0);
				}
			}
		}
	}
	func_219(iParam0, 0);
	if (func_220(0) == iParam0)
	{
		func_40(1);
		func_221(0);
		func_222(1);
	}
	func_223(iParam0, 1);
	func_224(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_225(0);
	func_226(0);
	func_64(0);
	func_65(0);
	func_227(0);
	func_228(1f);
}

void func_15(bool bParam0)
{
	if (_does_anim_scene_exist(Global_43800))
	{
		if (check_ownership_of_anim_scene(Global_43800))
		{
			_delete_anim_scene(Global_43800);
		}
	}
	Global_43800 = -1;
	StringCopy(&Global_43802, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_229();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_230())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_231())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(char[4] cParam0, bool bParam1)
{
	Var0 = func_210(func_12(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_232(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = func_22(cParam0);
	}
	_0xd894437e12c17aec(&((*Global_1835011)[cParam0->f_607]->f_8), &Var0);
}

void func_18(int iParam0)
{
	Global_36580 = iParam0;
}

int func_19(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_233(iVar0, iParam0);
		iVar0++;
	}
	return 1;
}

int func_20()
{
	return Global_1572887->f_12;
}

void func_21(int iParam0)
{
	Global_1109400->f_22.f_10 = iParam0;
}

int func_22(char[4] cParam0)
{
	return cParam0->f_10783;
}

bool func_23(var uParam0)
{
	return uParam0->f_2501;
}

bool func_24(var uParam0)
{
	return uParam0->f_2500;
}

void func_25(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_234((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_235((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_235((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_235((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_236(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_237(uParam0);
	}
}

bool func_28(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 128) && func_29())
	{
		return true;
	}
	if (func_238(&(cParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!func_31(cParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

bool func_29()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_30(char[4] cParam0)
{
	func_239(!func_6(cParam0, 32), 1);
	func_1(cParam0, 32);
}

bool func_31(char[4] cParam0)
{
	return true;
}

bool func_32()
{
	return func_207(Global_1572864->f_8);
}

int func_33(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	if (iParam0 == iLocal_224)
	{
		func_241(&Var0, func_240(3, 35));
	}
	else if (iParam0 == iLocal_225)
	{
		func_241(&Var0, func_240(15, 25));
	}
	else if (iParam0 == iLocal_226)
	{
		func_241(&Var0, func_240(4, 0));
	}
	else if (iParam0 == iLocal_227)
	{
		func_241(&Var0, func_240(5, 0));
	}
	else if (iParam0 == iLocal_228)
	{
		func_241(&Var0, func_240(6, 6));
	}
	else if (iParam0 == iLocal_229)
	{
		func_241(&Var0, func_240(7, 0));
	}
	else if (iParam0 == iLocal_230)
	{
		func_241(&Var0, func_240(8, 0));
	}
	else if (iParam0 == iLocal_231)
	{
		func_241(&Var0, func_240(8, 1));
	}
	else if (iParam0 == iLocal_232)
	{
		func_241(&Var0, func_240(8, 1));
	}
	else if (iParam0 == iLocal_233)
	{
		func_241(&Var0, func_240(0, 4));
	}
	else if (iParam0 == iLocal_234)
	{
		func_241(&Var0, func_240(2, 0));
	}
	else if (iParam0 == iLocal_235)
	{
		func_241(&Var0, func_240(15, 8));
	}
	else if (iParam0 == 25)
	{
		func_241(&Var0, func_240(2, 0));
	}
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_242(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_225(0);
	func_243(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_234((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_244((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_38(var uParam0)
{
	_datafile_unload(uParam0->f_2495);
	uParam0->f_2495 = 0;
	uParam0->f_2501 = 0;
}

void func_39(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_245(iVar0, 4096);
			if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar0]->f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (_0xc29996a337bdd099((*Global_1425371)[iVar1]->f_1))
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar1]->f_1, 1);
			}
			iVar1++;
		}
		_0x4c05b42a8d937796();
		_0x16b86a49e072aa85();
	}
	if (func_20() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_40(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_71(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_246(Global_1935630, 4194304);
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

void func_41(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

void func_42()
{
	func_247();
	func_248();
	func_249();
	func_250();
}

void func_43()
{
	if (func_251())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_252(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_253();
}

void func_45()
{
	_uilog_clear_cached_objective();
}

void func_46(char[4] cParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (cParam0->f_607)
	{
		case 0:
			break;
		case 1:
			break;
		case 31:
			_set_weather_type(-173507739, false, true, false, 0f, false);
			break;
	}
}

void func_47(int iParam0, int iParam1)
{
	func_254(1, iParam0, iParam1);
}

void func_48(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_49()
{
	return (func_255() || func_54());
}

void func_50(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

void func_51(var uParam0)
{
	func_256(uParam0);
	func_257(uParam0, 0);
	uParam0->f_1 = 0;
	func_43();
}

void func_52()
{
	iVar12 = 0;
	while (iVar12 < Global_43619)
	{
		*Global_43619[iVar12] = { Var0 };
		iVar12++;
	}
}

void func_53()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_258(iVar0);
		iVar0++;
	}
	func_259();
	func_260();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_261())
	{
		if (func_262(255))
		{
			if (!func_263(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_264(Global_1894899->f_2) && func_265(Global_1894899->f_2))
		{
			func_266(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_267(16);
			}
		}
		else if (func_264(Global_1894899->f_2) && !func_268(Global_1894899->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!is_screen_faded_out())
		{
		}
		Global_1894899->f_7 = 0;
		func_269(16);
		func_270();
		if (bVar0)
		{
			func_269(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_271(cParam0->f_5423[iVar0]))
		{
			if (!is_entity_dead(&(cParam0->f_5423[iVar0])))
			{
				if (is_entity_a_ped(&(cParam0->f_5423[iVar0])))
				{
					clear_ped_tasks_immediately(get_ped_index_from_entity_index(&(cParam0->f_5423[iVar0])), false, true);
				}
			}
		}
		iVar0++;
	}
	if (func_272(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_273(cParam0->f_5421))
		{
			iVar1 = func_274(cParam0->f_5421, iVar0);
			if (!is_entity_dead(iVar1))
			{
				if (is_entity_a_ped(iVar1))
				{
					clear_ped_tasks_immediately(get_ped_index_from_entity_index(iVar1), false, true);
				}
			}
			iVar0++;
		}
	}
}

void func_57(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_275(iVar1))
		{
			bVar2 = Global_1360165[iVar0];
			func_276(cParam0, iVar1, bVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	bVar0 = func_277(cParam0);
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	if (is_entity_dead(bVar0) || is_ped_injured(bVar0))
	{
	}
	iVar1 = func_278(bVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_279(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_280(7);
		}
		else
		{
			func_281(bVar0, 0);
		}
		func_282(cParam0, 16);
		set_ped_config_flag(bVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_284(iParam0, 32);
	func_285();
}

void func_60(bool bParam0)
{
	Global_1956584 = bParam0;
	if (bParam0)
	{
		_set_minimap_fow_should_update(false, 0);
	}
	else
	{
		_set_minimap_fow_should_update(true, 0);
	}
}

int func_61(char[4] cParam0)
{
	return cParam0->f_607;
}

void func_62(int iParam0)
{
	Var0 = { func_286(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_287(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_64(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_227(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_227(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(char[4] cParam0)
{
	func_288(&(cParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_234((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_235((*uParam1)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_69(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

void func_70(int iParam0)
{
	if (!has_ped_got_weapon(Global_35, -1415022764, 0, false))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_72(int iParam0)
{
	iVar0 = func_212(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_289(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_290(iVar1))
			{
				if (func_291(iVar1, 4))
				{
					func_292(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_293(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_289(iParam0);
		if (iVar3 == 59)
		{
			func_293(1);
		}
		else if (iVar3 == 61)
		{
			func_293(0);
		}
		else if (iVar3 == 83)
		{
			func_293(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_290(iVar0))
		{
			if (func_291(iVar0, 4))
			{
				if (func_291(iVar0, 16))
				{
					func_294(iVar0, 1);
				}
				if (func_291(iVar0, 8))
				{
					func_295(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_74(char[4] cParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	iVar0 = func_33(cParam0);
	iVar1 = func_162(cParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_296(cParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (func_22(cParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		func_297(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_298(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	iVar0 = 0;
	if (func_299(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_300(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
}

void func_76()
{
	Global_40.f_9.f_21 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9.f_21.f_1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_9.f_21.f_6[iVar0] = 0f;
		iVar0++;
	}
}

int func_77()
{
	return Global_1894899->f_2;
}

void func_78(int iParam0, bool bParam1)
{
	if (!func_264(iParam0))
	{
		return;
	}
	bVar0 = func_268(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_301(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_303(iParam0, func_302());
			func_304(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_305(iParam0, 67108864);
		func_303(iParam0, -15);
	}
	func_306(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_307(11);
	}
	else
	{
		func_308(11);
	}
}

void func_80(int iParam0)
{
	if (func_309(iParam0, 0))
	{
		func_310(262144, 5, 0, 1);
		func_311(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_312(101, 7, 1f, 0, 1);
			func_312(89, 7, 1f, 0, 1);
			break;
	}
}

bool func_81()
{
	return Global_1572864->f_15;
}

bool func_82(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_207(iParam0))
	{
		return;
	}
	if (func_313(iParam0) == 4)
	{
		func_314(iParam0, func_302());
		if (!func_211(iParam0) == 5 && !func_211(iParam0) == 6)
		{
			if (bParam3)
			{
				func_219(iParam0, 6);
			}
			else
			{
				func_219(iParam0, 5);
			}
			func_224(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_212(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_315(0, 2);
		if (!bVar1 && bParam1)
		{
			func_316();
		}
	}
	else
	{
		func_221(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_317(iParam0);
	}
	else
	{
		Var2 = { func_94(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_82(32768))
		{
			Var4 = { func_94(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_211(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_289(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_289(iParam0)]->f_8), true);
						}
					}
					else if ((func_289(iParam0) != 95 && func_289(iParam0) != 82) && !func_318((*Global_1347702)[func_289(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_289(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_289(iParam0)]->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_320(func_289(iParam0), iVar6, func_319());
	}
	else if (iVar0 == 8)
	{
		func_322(func_289(iParam0), iVar6, func_319(), func_321());
	}
	if (!func_211(iParam0) == 5 && !func_211(iParam0) == 6)
	{
		iVar9 = func_323(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_324(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_325(func_289(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_326((iVar10 - 20), 0, iVar10);
					iVar11 = func_326((iVar11 - 10), 0, iVar11);
				}
				func_327(1);
				func_328(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_328(45, 0, 1);
				break;
			case 8:
				iVar10 = func_329(func_289(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_326((iVar10 - 20), 0, iVar10);
					iVar11 = func_326((iVar11 - 10), 0, iVar11);
				}
				func_328(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_330(func_289(iParam0)))
				{
					func_331(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_328(120, 0, 1);
				break;
			case 2:
				func_328(120, 0, 1);
				break;
			case 6:
				func_328(func_333(func_332(iParam0)), 0, 1);
				break;
			case 5:
				func_328(120, 0, 1);
				break;
		}
	}
	func_223(iParam0, 1);
	func_314(iParam0, func_302());
	func_224(iParam0);
	if ((!func_211(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_216(iParam0);
		if (iVar12 != -1)
		{
			func_217(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_218();
			if (iVar12 != -1)
			{
				func_217(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = get_game_timer();
				break;
			case 6:
				switch (func_289(iParam0))
				{
					case 0:
						Global_1898438 = (get_game_timer() - 5000);
						break;
					case 1:
						Global_1898438 = get_game_timer();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = get_game_timer();
				break;
			case 8:
				if (func_290(func_289(iParam0)) && func_318((*Global_1347702)[func_289(iParam0)]->f_12, 4))
				{
					Global_1898438 = get_game_timer();
				}
				else
				{
					Global_1898438 = (get_game_timer() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_289(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_289(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_211(iParam0) == 5 && !func_211(iParam0) == 6)
	{
		if (bParam3)
		{
			func_219(iParam0, 6);
		}
		else
		{
			func_219(iParam0, 5);
		}
		func_224(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_289(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_334();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_335(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_336(-1267972061);
						func_335(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_336(1619534881);
						func_335(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_336(-755457379);
						func_335(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_336(1015404643);
						func_335(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_336(-1724192342);
						func_335(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_336(1310680212);
						func_335(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_336(-566881549);
						func_335(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_336(-1753730528);
						func_335(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_336(147796381);
						func_335(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_336(-378547623);
						func_335(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_336(829545206);
						func_335(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_336(891318243);
						func_335(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_337();
						func_338(967523420);
						func_339();
						func_340();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_341(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_335(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_342(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_342(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_343(304805134, 1, 1);
						if (!func_344((*Global_1347702)[21]->f_15, 1))
						{
							func_83((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[21]->f_3)), iVar14);
						}
						break;
					case 20:
						func_345();
						break;
					case 26:
						func_346();
						break;
					case 17:
						func_347(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_348())
						{
							func_349(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_350(-514575035, -1))
						{
							iVar15 = func_302();
							func_351(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_352(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_348())
						{
							func_349(1529685685);
						}
						break;
					case 34:
						if (func_348())
						{
							func_349(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_353();
						break;
					case 37:
						func_354();
						if (func_355())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(2116153146, iVar14);
						}
						break;
					case 38:
						func_356();
						break;
					case 43:
						func_357();
						break;
					case 44:
						if (!func_344((*Global_1347702)[82]->f_15, 1))
						{
							func_83((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[82]->f_3)), iVar14);
						}
						if (!func_344((*Global_1347702)[83]->f_15, 1))
						{
							func_83((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[83]->f_3)), iVar14);
						}
						break;
					case 45:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_MONROE"));
						break;
					case 49:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLEET_GOON"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_358();
						break;
					case 59:
						func_359();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_360();
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_DAVID_GEDDES"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_361();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_342(451, 0);
						}
						if (!func_362(-1992824800))
						{
							if (func_362(1520110311))
							{
								iVar16 = func_302();
								func_351(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_352(1937177603, iVar16, 1);
							}
						}
						if (func_363(4))
						{
							if (!func_364(684296857, 1, 0))
							{
								iVar17 = func_302();
								func_351(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_352(-1439688706, iVar17, 1);
							}
						}
						func_335(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_365(89200);
						func_365(2300);
						func_365(2300);
						break;
					case 68:
						func_366();
						break;
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[108]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[69]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[70]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[7]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[22]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[23]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[65]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[7]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[8]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[36]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[48]->f_8)), iVar14);
						func_367();
						func_365(-139100);
						break;
					case 69:
						if (func_344((*Global_1347702)[9]->f_15, 1))
						{
							func_365(-6000);
						}
						break;
					case 70:
						func_365(23400);
						func_365(1900);
						func_365(-15000);
						break;
					case 71:
						func_365(-5500);
						break;
				}
				break;
			case 8:
				switch (func_289(iParam0))
				{
					case 0:
						if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILTON")))
						{
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILTON"));
						}
						if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDGAR")))
						{
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						_0x946d46cd6dfb9742(get_player_index(), 0, -812886857);
						_0x946d46cd6dfb9742(get_player_index(), 0, -751847444);
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1843499806);
						_0x946d46cd6dfb9742(get_player_index(), 0, -259499455);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1193930411);
						break;
					case 22:
						_0x946d46cd6dfb9742(get_player_index(), 0, -433459459);
						break;
					case 24:
						_0x946d46cd6dfb9742(player_id(), 0, -1230369426);
						break;
					case 26:
						_0x946d46cd6dfb9742(get_player_index(), 0, 2049954876);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1851064008);
						_0x946d46cd6dfb9742(get_player_index(), 0, -511263105);
						_0x946d46cd6dfb9742(get_player_index(), 0, -837057898);
						_0x946d46cd6dfb9742(get_player_index(), 0, -258195548);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1110794082);
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1324848767);
						break;
					case 30:
						_0x946d46cd6dfb9742(get_player_index(), 0, -461700465);
						_0x946d46cd6dfb9742(get_player_index(), 0, -489179187);
						break;
					case 37:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1595707554);
						break;
					case 56:
						_0x946d46cd6dfb9742(get_player_index(), 0, 883682516);
						break;
					case 57:
						_0x946d46cd6dfb9742(get_player_index(), 0, 780151577);
						break;
					case 58:
						func_368();
						break;
					case 59:
						_0x946d46cd6dfb9742(get_player_index(), 0, -121001171);
						_0x946d46cd6dfb9742(get_player_index(), 0, 727067922);
						break;
					case 61:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_369();
						break;
					case 66:
						func_370();
						func_371();
						break;
					case 67:
						if (!func_372(6))
						{
							func_373(6);
						}
						if (!func_372(3))
						{
							func_373(3);
						}
						if (func_348())
						{
							func_349(1534638301);
						}
						break;
					case 68:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1085773120);
						break;
					case 91:
						_0x946d46cd6dfb9742(get_player_index(), 0, 753448360);
						break;
					case 98:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1853266833);
						break;
					case 101:
						_0x946d46cd6dfb9742(get_player_index(), 0, 709011912);
						break;
					case 115:
						_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("ALLY_RAINSFALL"));
						_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("COMP_EAGLE_FLIES"));
						break;
					case 120:
						_0xd8c7162ab2e2af45(1720279629);
						break;
					case 138:
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						break;
					case 139:
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						_0x946d46cd6dfb9742(get_player_index(), 0, 989551914);
						break;
					case 140:
						_0x946d46cd6dfb9742(get_player_index(), 0, 2131140554);
						break;
					case 143:
						_0x946d46cd6dfb9742(get_player_index(), 0, 240200131);
						_0x946d46cd6dfb9742(get_player_index(), 0, -480463506);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1901360117);
						break;
					case 147:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1841532568);
						break;
					case 9:
						if (func_344((*Global_1835011)[69]->f_1, 1))
						{
							func_374(0);
							func_365(40500);
						}
						else
						{
							func_374(0);
							func_365(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_289(iParam0))
				{
					case 0:
						switch (func_332(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_375(iParam0);
		func_376();
		switch (iVar0)
		{
			case 1:
				switch (func_289(iParam0))
				{
					case 4:
						func_377(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_377(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_377(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_377(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_377(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_377(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_377(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_378(iParam0);
						func_377(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_377(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_377(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_364(-2046502963, 1, 0))
						{
							func_335(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_377(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_377(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_377(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_378(iParam0) == 0)
						{
							func_377(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_377(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_318((*Global_1347702)[func_289(iParam0)]->f_12, 536870912))
				{
					func_379(11, 1);
				}
				switch (func_289(iParam0))
				{
					case 109:
						func_377(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_379(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_377(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_377(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_377(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_377(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_380(0, 10, 11, 2116153146))
				{
					func_377(iParam0, func_378(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_380(0, 7, 11, -379687487))
				{
					func_377(iParam0, func_381(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_380(0, 8, 11, -1386089015))
				{
					func_377(iParam0, func_381(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_380(0, 11, 11, -1952009645))
				{
					func_377(iParam0, func_381(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_380(0, 12, 11, 2065895756))
				{
					func_377(iParam0, func_381(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_211(iParam0) == 0)
			{
				if (func_210(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_210(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_213(func_212(iParam0), func_210(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_289(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_383(func_382(Global_1879514->f_1));
						if (iVar0 == 8 && func_289(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_290(func_289(iParam0)) && func_318((*Global_1347702)[func_289(iParam0)]->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_384(bParam2, iVar20);
		}
	}
	func_222(1);
	if ((bVar13 || func_129()) && (func_212(iParam0) == 1 || func_212(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_210(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_213(func_212(iParam0), func_210(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_212(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_380(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_385();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_209(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_208(iParam0))
	{
		if (!func_211(iParam0) == 5 && !func_211(iParam0) == 6)
		{
			if (bParam1)
			{
				func_219(iParam0, 6);
			}
			else
			{
				func_219(iParam0, 5);
			}
			func_224(iParam0);
		}
	}
	switch (func_212(iParam0))
	{
		case 1:
			switch (func_289(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514->f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (func_289(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514->f_12 = 1;
					break;
				case 9:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
	}
}

int func_85(char[4] cParam0)
{
	cVar0 = func_110(cParam0->f_607);
	return get_hash_key(&cVar0);
}

void func_86()
{
	func_91(4112);
	func_90(6);
	vVar2 = { func_386((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_387(vVar2, uVar1, uVar0, 0);
	func_388(vVar2);
	Global_40.f_9.f_15 = func_389(vVar2, 0);
	clear_weather_type_persist();
	set_random_weather_type(false, true);
}

void func_87(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	func_91(32);
	if (iParam0 == 0)
	{
		func_91(16);
	}
	else if (iParam0 == 1)
	{
		func_91(8);
	}
	func_390();
	Global_43889 = 1;
}

void func_88(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_89()
{
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_391(Var10, 0);
}

void func_90(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

void func_91(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_92(int iParam0)
{
	if (!func_207(iParam0))
	{
		return;
	}
	if (iParam0 != func_220(0))
	{
		return;
	}
	if (func_210(iParam0) == 0)
	{
	}
	iVar0 = func_212(iParam0);
	if (func_211(iParam0) == 3)
	{
		if (func_210(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_210(iParam0)))
		{
			if (func_212(iParam0) != 1 && func_212(iParam0) != 8)
			{
				func_213(func_212(iParam0), func_210(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_224(iParam0);
	func_40(1);
	func_221(0);
	func_219(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_327(1);
			func_328(15, 0, 1);
			break;
		case 4:
			func_328(10, 0, 1);
			break;
		case 8:
			func_328(10, 0, 1);
			break;
		case 9:
			func_328(10, 0, 1);
			break;
		case 2:
			func_328(10, 0, 1);
			break;
		case 6:
			func_328(10, 0, 1);
			break;
		case 5:
			func_328(10, 0, 1);
			break;
	}
	func_222(1);
}

void func_93()
{
	if (!is_itemset_valid(Local_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(Local_14))
	{
		iVar1 = get_indexed_item_in_itemset(iVar0, Local_14);
		bVar2 = _get_entity_from_item(iVar1);
		if ((does_entity_exist(bVar2) && _0x88ad6cc10d8d35b2(bVar2)) && !_0xa7e51b53309eac97(bVar2))
		{
			delete_entity(&bVar2);
		}
		iVar0++;
	}
	destroy_itemset(Local_14);
}

struct<2> func_94(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_95(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<8> func_96(char[4] cParam0)
{
	return cParam0->f_10784;
}

void func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_392(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_393(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_393(&(Global_1347343->f_11), 16384);
	}
	if (func_394() >= 2)
	{
		if (!func_392(Global_1347343->f_11, 16384))
		{
			func_393(&(Global_1347343->f_11), 8);
		}
		func_228(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_246(Global_1935630, 2048);
	func_395(bParam5);
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
	}
	_0x6ac4af46a6b8dfb2(bParam0);
}

void func_99(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 || iParam1);
}

void func_100(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (does_entity_exist(&(Global_43619[iVar0])))
		{
			*cParam0->f_7375.f_13[iVar0] = { *Global_43619[iVar0] };
			func_396(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(cParam0->f_7375.f_804);
	}
	if (func_215(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_397(cParam0, 67108864);
	}
}

int func_101(char[4] cParam0)
{
	return func_398(&(cParam0->f_7375));
}

bool func_102()
{
	return Global_1572864->f_14;
}

void func_103(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 || iParam1);
}

bool func_104()
{
	return Global_1572864->f_13;
}

bool func_105()
{
	return func_399() != -1;
}

int func_106()
{
	return Global_1572864->f_9;
}

void func_107(char[4] cParam0, int iParam1)
{
	cParam0->f_597 = iParam1;
	settimera(0);
}

void func_108(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_400(cParam0);
	cParam0->f_634[0] = 74312;
	cParam0->f_634[1] = 74312;
	cParam0->f_637 = 0;
	func_402(cParam0, *uParam1);
	func_403(cParam0);
}

void func_109(char[4] cParam0)
{
	if (is_screen_faded_out())
	{
		do_screen_fade_out(3000);
	}
	func_404(Global_35);
	func_405(cParam0, 32);
	func_406(cParam0, 0);
	func_187(cParam0, 1);
	if (!func_195(iVar1754, 256))
	{
		if (func_407(cParam0))
		{
			func_408(&uLocal_1757, 256);
		}
	}
	vVar0 = { func_409(3, 14) };
	fVar3 = func_410(3, 14);
	func_411(cParam0, vVar0);
	if (func_412(cParam0, 1, vVar0.x, vVar0.y, vVar0.z, fVar3, 1, 1, 1))
	{
		bLocal_2448 = func_277(cParam0);
		set_animal_tuning_bool_param(bVar2445, 48, true);
		_0xf74e134f40192884(bVar2445, 2);
		set_blocking_of_non_temporary_events(bVar2445, true);
		remove_all_shocking_events(false);
		set_ped_flee_attributes(bVar2445, 512, true);
		set_ped_flee_attributes(bVar2445, 16384, true);
	}
	if (!func_105() && !func_128(cParam0, 2))
	{
		iLocal_2444 = _get_anim_scene_vehicle(cParam0->f_7375.f_804, "COACH2", true);
		iLocal_2445 = _get_anim_scene_vehicle(cParam0->f_7375.f_804, "WAGON02X", true);
		if (func_413(bLocal_2459[1], "NBD1_INTRO_DUTCHSHORSE", 0, 1, 1))
		{
		}
		if (func_413(bLocal_2459[2], "NBD1_INTRO_MICAHSHORSE", 6, 1, 1))
		{
		}
		if (func_413(bLocal_2459[0], "NBD1_INTRO_JOHNSHORSE", 1, 1, 1))
		{
		}
	}
	func_411(cParam0, func_409(3, 14));
	func_414();
}

char[] func_110(int iParam0)
{
	if (!func_206(iParam0))
	{
		return uVar0;
	}
	return (*Global_1835011)[iParam0]->f_8;
}

void func_111()
{
	Var0.f_1 = -1;
	_copy_memory(Global_1879514, &Var0, 20);
}

void func_112(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_113(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_114()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_415(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

bool func_115(char[4] cParam0)
{
	switch (cParam0->f_607)
	{
		case 12:
		case 21:
		case 26:
		case 35:
		case 37:
		case 41:
		case 42:
		case 43:
		case 44:
		case 46:
		case 52:
		case 54:
		case 58:
			return false;
	}
	return true;
}

bool func_116(int iParam0)
{
	if (!func_264(iParam0))
	{
		return false;
	}
	return func_268(iParam0, 33554432);
}

void func_117(bool bParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(Global_35))
	{
		return;
	}
	iVar0 = create_itemset(true);
	if (_0x7be607daff382fd2(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (get_itemset_size(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, iVar0));
			if (!is_entity_dead(iVar2) && is_entity_a_ped(iVar2))
			{
				bVar3 = get_ped_index_from_entity_index(iVar2);
				if (bParam0)
				{
					if (_0x800df3fc913355f3(_0x32a1e3b83d501096(bVar3)))
					{
						_0x7b204f88f6c3d287(_0x32a1e3b83d501096(bVar3));
					}
					else
					{
						delete_ped(&bVar3);
					}
				}
				else
				{
					clear_ped_tasks(bVar3, 0, 0);
					if (bParam2)
					{
						_0xdf94844d474f31e5(bVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	destroy_itemset(iVar0);
}

void func_118(char[4] cParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (cParam0->f_607)
	{
		case 31:
			_set_weather_type(-702816767, false, true, true, 45f, false);
			break;
	}
}

void func_119(int iParam0, bool bParam1)
{
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + get_entity_health(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		_0x835f131e7dc8f97a(Global_35, to_float(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > get_entity_max_health(Global_35, false))
	{
		_set_entity_health(Global_35, get_entity_max_health(Global_35, false), 0);
	}
	else
	{
		_set_entity_health(Global_35, iVar1, 0);
	}
}

bool func_120(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5308 && iParam1) != 0;
}

bool func_121(char[4] cParam0, int iParam1, int iParam2)
{
	return func_195(cParam0->f_1[func_132(iParam1)]->f_11, iParam2);
}

bool func_122(int iParam0)
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

void func_123(char[4] cParam0)
{
	if (func_29())
	{
		func_416(&(cParam0->f_7375));
	}
}

void func_124(char[4] cParam0, int iParam1)
{
	if (!_is_this_model_a_horse(iParam1))
	{
		return;
	}
	cParam0->f_8268 = iParam1;
}

int func_125(char[4] cParam0)
{
	return cParam0->f_8268;
}

Vector3 func_126(int iParam0)
{
	return func_417(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_418(Param0, Param0.f_3);
}

bool func_128(char[4] cParam0, int iParam1)
{
	return (cParam0->f_608 && iParam1) != 0;
}

bool func_129()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_419())
	{
		return false;
	}
	if (!func_344((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_344((*Global_1835011)[2]->f_1, 1) && func_344((*Global_1347702)[120]->f_15, 1)) && !func_344((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_344((*Global_1835011)[37]->f_1, 1) && !func_344((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_344((*Global_1835011)[57]->f_1, 1) && !func_344((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_344((*Global_1835011)[26]->f_1, 1) && !func_344((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_344((*Global_1835011)[62]->f_1, 1) && func_344((*Global_1835011)[63]->f_1, 1)) && !func_344((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_344((*Global_1835011)[75]->f_1, 1) && !func_344((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_344((*Global_1835011)[76]->f_1, 1) && !func_344((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_344((*Global_1835011)[40]->f_1, 1) && func_344((*Global_1835011)[41]->f_1, 1)) && !func_344((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_344((*Global_1835011)[62]->f_1, 1) && func_344((*Global_1835011)[63]->f_1, 1)) && !func_344((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_344((*Global_1835011)[65]->f_1, 1) && func_344((*Global_1835011)[66]->f_1, 1)) && !func_344((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_130(char[4] cParam0, vector3 vParam1, float fParam4)
{
	if (func_120(cParam0, 33554432))
	{
		return;
	}
	if (func_120(cParam0, 4096))
	{
		return;
	}
	if (func_420(vParam1))
	{
		return;
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1))
	{
		return;
	}
	if (is_screen_faded_in())
	{
		return;
	}
	if (is_player_teleport_active())
	{
		stop_player_teleport();
	}
	if (is_valid_interior(get_interior_at_coords(vParam1)))
	{
		pin_interior_in_memory(get_interior_at_coords(vParam1));
		func_103(cParam0, 8);
	}
	func_103(cParam0, 4096);
	_0x4759cc730f947c81();
	_0x1ff00db43026b12f();
	start_player_teleport(player_id(), vParam1, fParam4, false, true, true, false);
	do_screen_fade_out(0);
	_set_milliseconds_per_game_minute(9999999);
	func_237(&(cParam0->f_603));
}

void func_131(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_132(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return func_421();
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (iVar0 == iParam0)
		{
			return iVar0;
		}
		if (iVar0 == 26)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_133(char[4] cParam0)
{
	if (_uilog_is_entry_registered(2, func_85(cParam0)))
	{
		_uilog_remove_entry(2, func_85(cParam0));
	}
	if (!_uilog_is_entry_registered(1, func_85(cParam0)))
	{
		func_422(cParam0->f_607);
	}
}

void func_134(char[4] cParam0, int iParam1)
{
	cParam0->f_598 = iParam1;
}

void func_135(char[4] cParam0, int iParam1)
{
	cParam0->f_599 = iParam1;
	func_27(&(cParam0->f_600), 1);
}

bool func_136(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_12;
}

void func_137(char[4] cParam0)
{
	func_423(&(cParam0->f_638));
	func_424(&(cParam0->f_819));
	func_425(&(cParam0->f_1020));
	func_426(&(cParam0->f_1081));
	func_427(&(cParam0->f_1126));
	func_428(&(cParam0->f_5147));
	func_429(&(cParam0->f_1124));
	func_430(&(cParam0->f_5188));
	func_431(&(cParam0->f_5239));
	func_432(&(cParam0->f_5249));
	func_433(&(cParam0->f_5265));
	func_434(&(cParam0->f_5286));
}

void func_138(char[4] cParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_435(cParam0, -443425498, 3);
	func_435(cParam0, 2055697445, 3072);
	func_435(cParam0, -1782470881, 67108863);
	func_435(cParam0, 1549600109, 67108863);
	func_435(cParam0, 1761016051, 3);
	func_435(cParam0, -283162583, 3);
	func_435(cParam0, -232859331, 67108863);
	func_435(cParam0, -1448273283, 67108863);
	func_435(cParam0, 2004906833, 67108863);
	func_435(cParam0, 737910671, 67108863);
	func_435(cParam0, -1308375373, 67108863);
	func_435(cParam0, 219205323, 1020);
	func_435(cParam0, -1289781131, 224);
	func_435(cParam0, 2133848994, 67108863);
	func_435(cParam0, -1250098797, 67108863);
	func_435(cParam0, -789646981, 67108863);
	func_435(cParam0, -1736327942, 67108863);
	func_435(cParam0, 928344684, 67108863);
	func_435(cParam0, 286955722, 67108863);
	func_435(cParam0, 1809883183, 67108863);
	func_435(cParam0, 1854820959, 67108863);
	func_435(cParam0, 79156795, 67108863);
	func_435(cParam0, -443425498, 3);
	func_435(cParam0, 2055697445, 3072);
	func_435(cParam0, -1782470881, 67108863);
	func_435(cParam0, 1549600109, 67108863);
}

void func_139(char[4] cParam0)
{
	func_436(cParam0, "AI_REACT@GUNFIRE@INTRO", 48);
	func_436(cParam0, "ai_temp@base", 12);
	func_436(cParam0, "MINI_GAMES@STORY@MUD5@CRACKSAFE_LOOK_AT_DIAL@SMALL_R@PED", 8);
	func_436(cParam0, "MINI_GAMES@STORY@MUD5@CRACKSAFE@SMALL_R@SAFE", 8);
	func_436(cParam0, "MINI_GAMES@STORY@MUD5@CRACKSAFE_LOOK_AT_DIAL@MED_R@PED", 8);
	func_436(cParam0, "MINI_GAMES@STORY@MUD5@CRACKSAFE@MED_R@SAFE", 8);
	func_436(cParam0, "MINI_GAMES@STORY@MUD5@CRACKSAFE_LOOK_AT_DIAL@LARGE_R@PED", 8);
	func_436(cParam0, "MINI_GAMES@STORY@MUD5@CRACKSAFE@LARGE_R@SAFE", 8);
	func_437(cParam0, "CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE_LOOK_AT_DIAL@SMALL_R@PED", 8);
	func_437(cParam0, "CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@SMALL_R@SAFE", 8);
	func_437(cParam0, "CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE_LOOK_AT_DIAL@MED_R@PED", 8);
	func_437(cParam0, "CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@MED_R@SAFE", 8);
	func_437(cParam0, "CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE_LOOK_AT_DIAL@LARGE_R@PED", 8);
	func_437(cParam0, "CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@LARGE_R@SAFE", 8);
	func_438(cParam0, "script@story@NBD1@IG@IG_1_OneMoreTime@IG_1_OneMoreTime", uLocal_1769[0], 1, 0, 0, 0, 1);
	func_438(cParam0, "script@story@NBD1@IG@IG_3_ArriveAtBank@IG_3_Arrival_Dutch", uLocal_1769[1], 3, 0, "pblMain_Dutch", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_3_ArriveAtBank@IG_3_Arrival_Bill", uLocal_1769[4], 3, 0, "pblMain_Bill", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_3_ArriveAtBank@IG_3_Arrival_John", uLocal_1769[2], 3, 0, "pblMain_John", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_3_ArriveAtBank@IG_3_Arrival_Micah", uLocal_1769[3], 3, 0, "pblMain_Micah", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_6_OpenTheVault@IG_6_Loops", uLocal_1769[6], 12, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_7_DutchLootLoops@IG_7_DutchLootLoops", uLocal_1769[9], 12, 0, "pblLoop", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_8_BlowUpWall@IG_8_BlowUpWall", uLocal_1769[10], 48, 0, "Pbl_TakeCover_Enter", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_10_PlacingDynamite@IG_10_PlacingDynamite", uLocal_1769[13], 48, 0, "pbl_Left_Gun_Look", 0, 1);
	func_438(cParam0, "script@story@NBD1@IG@IG_10_DynamiteReact@IG_10_DynamiteReact", uLocal_1769[14], 112, 0, 0, 0, 1);
	func_438(cParam0, "script@story@NBD1@IG@IG_13_Distraction@IG13_Distraction", uLocal_1769[16], 3072, 0, 0, 0, 1);
	func_438(cParam0, "script@story@NBD1@IG@IG_13_Distraction@IG13_Distraction_Goon_Idles", uLocal_1769[17], 3072, 0, 0, 0, 1);
	func_438(cParam0, "script@story@NBD1@IG@IG_14_RoofJump@RoofJump_Approach_Gang", uLocal_1769[18], 768, 0, "pl_IG14_Gang_Approach_Jump_to_Cover", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_14_RoofJump@RoofJump_Approach_Player", uLocal_1769[19], 768, 0, "pl_IG14_Player_Lenny_approach", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_14_RoofJump@RoofJump_Bill", uLocal_1769[20], 768, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_14_RoofJump@RoofJump_Charles", uLocal_1769[21], 768, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_14_RoofJump@RoofJump_Dutch", uLocal_1769[22], 768, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_14_RoofJump@RoofJump_Javier", uLocal_1769[23], 768, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_14_RoofJump@RoofJump_Micah", uLocal_1769[24], 768, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_14_RoofJump@RoofJump_Player_LFoot", uLocal_1769[25], 768, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_14_RoofJump@RoofJump_Player_RFoot", uLocal_1769[26], 768, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_15_Coughing@IG_15_Coughing", uLocal_1769[27], 262, 0, 0, 0, 1);
	func_438(cParam0, "script@story@NBD1@IG@IG_16_ArrivalAtBank@IG_16_ArrivalAtBankGang", uLocal_1769[28], 14, 0, "PL_ArriveAtBank", 50f, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_16_ArrivalAtBank@IG_16_NBBankFolks1_Idle", uLocal_1769[30], 7, 0, "PL_NBDFolks1_Idle", 50f, 1);
	func_438(cParam0, "script@story@NBD1@IG@IG_16_ArrivalAtBank@IG_16_NBBankFolks2_Idle", uLocal_1769[31], 7, 0, "PL_NBDFolks2_Idle", 50f, 1);
	func_438(cParam0, "script@story@NBD1@IG@IG_16_ArrivalAtBank@IG_16_GangIdleAtWall", uLocal_1769[32], 3, 0, "PL_GangIdleAtWall", 50f, 1);
	func_438(cParam0, "script@story@NBD1@IG@IG_16_ArrivalAtBank@IG_16_NBBankLeadoutComp", uLocal_1769[29], 15, 0, "PL_Leadout_All", 50f, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_17_LennyShotSlowMo@IG_17_LennyShotSlowMo", uLocal_1769[33], 256, 0, "pl_EnterLennyRunsAcrossRoof", 0, 1);
	func_438(cParam0, "script@story@NBD1@IG@IG_17_LennyShotSlowMo@IG_17_LennyShotSlowMo_Arthur", uLocal_1769[34], 256, 0, "pl_LennyGetsShot", 0, 1);
	func_438(cParam0, "script@story@NBD1@IG@IG_18_GuardSearchesWithLantern@IG_18_Guard01SearchesWithLantern", uLocal_1769[35], 3072, 0, "PL_Guard1_SearchesTrain", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_18_GuardSearchesWithLantern@IG_18_Guard02SearchesWithLantern", uLocal_1769[36], 3072, 0, "PL_Guard2_SearchesTrain", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_18_DutchHidesBehindTrainSeat@IG_18_DutchHidesBehindTrainV", uLocal_1769[37], 3072, 0, "PL_Dutch_Enter_Right", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_19_LEFT_TRAIN_INSPECT@IG_19_LeftTrainInspect_Dutch", uLocal_1769[38], 1024, 0, "pl_Left_Side_Train_Inspect_Dutch_Line_Someone_Coming", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_19_LEFT_TRAIN_INSPECT@IG_19_LeftTrainInspect_Guard", uLocal_1769[39], 1024, 0, "pl_Left_Side_Train_Inspect_Guard", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_20_BankManagerStandMelee@IG_20_BankManagerStandMelee_Arthur", uLocal_1769[40], 12, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_20_BankManagerStandMelee@IG_20_BankManagerStandMelee_BankM", uLocal_1769[41], 12, 0, "PL_BankM_Hands_Up_Loop", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_21_DutchPullManagerAndEnter@IG_21_DutchPullManagerAndEnter", uLocal_1769[42], 12, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_22_BankDoorBlindfireJohnLenny@IG_22_BankDoorBlindfireJohnLenny", uLocal_1769[43], 112, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_24_ShootoutLoop@IG_24_ShootoutLoopCharles", uLocal_1769[44], 240, 0, "PL_IG24_Shootout_Loop", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_24_ShootoutLoop@IG_24_ShootoutLoopJavier", uLocal_1769[45], 240, 0, "PL_IG24_Shootout_Loop", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_24_ShootoutLoop@IG_24_ShootoutLoopMicah", uLocal_1769[46], 240, 0, "PL_IG24_Shootout_Loop", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_24_ShootoutLoop@IG_24_ShootoutLoopBill", uLocal_1769[47], 240, 0, "PL_IG24_Shootout_Loop", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_28_GroundSearch@IG_28_GroundSearch", uLocal_1769[48], 512, 0, "pl_IG28_PinLaw_Enter", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_28_GroundSearch@IG_28_GroundSearch", uLocal_1769[49], 512, 0, "pl_IG28_PinLaw^1_Enter", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_29_BillForceManager@IG_29_BillForceManager", uLocal_1769[50], 24, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_29_BillForceManager@IG_29_BillForceManager_Arthur", uLocal_1769[51], 8, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_29_BillForceManager@IG_29_BillForceManager_Arthur_Alt", uLocal_1769[52], 8, 0, 0, 0, 0);
	func_438(cParam0, "script@story@NBD1@LEADIN@MCS2@Leadin", uLocal_1769[11], 24, 0, 0, 0, 1);
	func_438(cParam0, "script@story@NBD1@LEADIN@MCS5@ClimbThroughWindow", uLocal_1769[15], 1536, 0, "pl_ClimbThroughWindow", 0, 1);
	func_438(cParam0, "script@story@NBD1@IG@IG_32_DutchEntersTrain@ig_32_DutchEntersTrain", uLocal_1769[53], 1024, 0, "pl_Dutch_Enters_Train", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_33_DutchGuardsAhead@IG_33_DutchGuardsAhead", uLocal_1769[54], 3072, 0, "pl_Dutch_Line_HeadOverToWater", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@ig_36_PostDynamiteRifleThrow@ig_36_PostDynamiteRifleThrow", uLocal_1769[55], 64, 0, "pl_IG36_post_dynamite_rifle_throw_LFoot", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_37_RooftopClimb@IG_37_RooftopClimb_Bill", uLocal_1769[56], 384, 0, "pl_IG37_Rooftop_Climb_Bill", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_37_RooftopClimb@IG_37_RooftopClimb_Charles", uLocal_1769[57], 384, 0, "pl_IG37_Rooftop_Climb_Charles", 0, 0);
	func_438(cParam0, "script@story@NBD1@IG@IG_37_RooftopClimb@IG_37_RooftopClimb_Javier", uLocal_1769[58], 384, 0, "pl_IG37_Rooftop_Climb_Javier", 0, 0);
	func_438(cParam0, "script@story@NBD1@LEADIN@EXT@Base", uLocal_1769[59], 2048, 0, 0, 0, 1);
	func_438(cParam0, "script@story@NBD1@LEADIN@EXT@Leadin_Front", uLocal_1769[60], 2048, 0, 0, 0, 1);
	func_439(cParam0, cVar1874, 2, 2, -1);
	func_439(cParam0, cVar1875, 2, 2, -1);
	func_439(cParam0, cVar1876, 2, 2, -1);
	func_439(cParam0, cVar1877, 3, 2, -1);
	func_439(cParam0, cVar1878, 3, 2, -1);
	func_439(cParam0, cVar1879, 3, 2, -1);
	func_439(cParam0, cVar1880, 3, 2, -1);
	func_439(cParam0, cVar1884, 3, 2, -1);
	func_439(cParam0, cVar1881, 1, 2, -1);
	func_439(cParam0, cVar1882, 1, 2, -1);
	func_439(cParam0, cVar1883, 3, 2, -1);
	func_439(cParam0, cVar1885, 2, 2, -1);
	func_439(cParam0, cVar1886, 2, 2, -1);
	func_439(cParam0, cVar1887, 2, 2, -1);
	func_439(cParam0, cVar1899, 48, 2, -1);
	func_439(cParam0, cVar1900, 48, 2, -1);
	func_439(cParam0, cVar1901, 48, 2, -1);
	func_439(cParam0, cVar1902, 48, 2, -1);
	func_439(cParam0, cVar1907, 48, 2, -1);
	func_439(cParam0, cVar1903, 64, 2, -1);
	func_439(cParam0, cVar1904, 64, 2, -1);
	func_439(cParam0, cVar1905, 64, 2, -1);
	func_439(cParam0, cVar1906, 64, 2, -1);
	func_439(cParam0, cVar1888, 128, 2, -1);
	func_439(cParam0, cVar1927, 128, 1, 1);
	func_439(cParam0, cVar1889, 256, 2, -1);
	func_439(cParam0, cVar1890, 256, 2, -1);
	func_439(cParam0, cVar1891, 256, 2, -1);
	func_439(cParam0, cVar1892, 512, 2, -1);
	func_439(cParam0, cVar1893, 512, 2, -1);
	func_439(cParam0, cVar1894, 1024, 2, -1);
	func_439(cParam0, cVar1895, 3072, 2, -1);
	func_439(cParam0, cVar1896, 3072, 2, -1);
	func_439(cParam0, cVar1897, 3072, 2, -1);
	func_439(cParam0, cVar1898, 3072, 2, -1);
	func_435(cParam0, 737910671, 768);
	func_435(cParam0, iVar2596, 7);
	func_435(cParam0, iVar2597, 6);
	func_435(cParam0, iVar2595, 67108863);
	func_435(cParam0, -62869733, 8);
	func_435(cParam0, 2146878165, 8);
	func_435(cParam0, -113326389, 8);
	func_435(cParam0, 676755041, 8);
	func_435(cParam0, -872756370, 8);
	func_435(cParam0, iVar2598, 48);
	func_435(cParam0, iVar2599, 48);
	func_435(cParam0, -765914358, 8);
	func_435(cParam0, -1190396102, 30);
	func_435(cParam0, 1592327736, 30);
	func_435(cParam0, -1006516120, 30);
	func_435(cParam0, 1086659483, 15);
	func_435(cParam0, 78425823, 60);
	func_435(cParam0, -987625046, 2032);
	func_435(cParam0, -1098117563, 48);
	func_435(cParam0, -807564273, 256);
	func_435(cParam0, iVar2600, 1792);
	func_435(cParam0, 2018178577, 3072);
	func_440(cParam0, 67108863);
	func_441(cParam0, iVar2178, 128, -1, 0);
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_408(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(char[4] cParam0)
{
}

void func_142(char[4] cParam0, int iParam1)
{
	func_442(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_286(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_287(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(char[4] cParam0, bool bParam1, char* sParam2, bool bParam3)
{
	func_443(&(cParam0->f_5310), bParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_272(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_444() };
	}
}

void func_147(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_27(&(cParam0->f_603), 1);
	}
}

void func_148(char[4] cParam0)
{
}

void func_149(char[4] cParam0, float fParam1)
{
	func_445(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_446(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_447(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_396(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

void func_152()
{
	_0x15abd5004cad2d99(0);
	_0x785177e4d57d7389(player_id(), 1352191066, 3, 3, 1);
	_0x785177e4d57d7389(player_id(), 1171995096, 4, 0, -1);
}

void func_153(bool bParam0, bool bParam1)
{
	if (_0x450769c833d58844() && (!bParam0 || !is_cinematic_cam_rendering()))
	{
		_0xc9caeaeec1256e54(-1679307491);
		if (!bParam1)
		{
			disable_control_action(2, 1287709438, false);
			if (Global_1935689->f_1 || &Global_1935689 == 1)
			{
				Global_1935689 = 2;
			}
		}
	}
}

int func_154(char[4] cParam0)
{
	return *cParam0;
}

Vector3 func_155(int iParam0)
{
	if (!func_206(iParam0))
	{
		return vVar0;
	}
	return (*Global_1835011)[iParam0]->f_9;
}

void func_156(char[4] cParam0, bool bParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 134217728))
	{
		func_139(cParam0);
		func_140(cParam0, func_33(cParam0), 134217728);
	}
	if (bParam1 && !func_121(cParam0, func_35(cParam0), 536870912))
	{
		if (func_448(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_449(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_448(cParam0, func_33(cParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_99(cParam0, 8192);
	}
}

int func_157(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_195(iVar1754, 256))
	{
		if (func_407(cParam0))
		{
			func_408(&uLocal_1757, 256);
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_158(char[4] cParam0)
{
	if (func_450(cParam0) < 1)
	{
		func_451(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_412(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
	}
	if ((!func_120(cParam0, 4) && !func_105()) && !func_128(cParam0, 3))
	{
		if (!func_120(cParam0, 32))
		{
			if (func_20() == 0)
			{
				func_103(cParam0, 32);
			}
			else
			{
				func_452(cParam0);
			}
		}
		if (func_120(cParam0, 32))
		{
			func_453(cParam0);
		}
	}
	switch (func_450(cParam0))
	{
		case -1:
		case 0:
			func_454(cParam0, 1);
			break;
		case 1:
			if (func_455(cParam0))
			{
				if (func_120(cParam0, 4096))
				{
					func_454(cParam0, 2);
				}
				else
				{
					func_454(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_456(cParam0))
			{
				func_454(cParam0, 3);
			}
			break;
		case 3:
			if (func_457(cParam0))
			{
				func_454(cParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

var func_159(char[4] cParam0)
{
	return cParam0->f_5408;
}

void func_160(char[4] cParam0, int iParam1)
{
	*cParam0 = iParam1;
}

bool func_161(char[4] cParam0)
{
	if (func_33(cParam0) == 26)
	{
		func_458(cParam0, 0);
		return true;
	}
	if (func_459(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_458(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_459(cParam0);
		}
	}
	return false;
}

int func_162(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_10;
}

void func_163()
{
	iLocal_881 = 0;
	func_196(&iLocal_881, 2);
}

bool func_164(bool bParam0, bool bParam1)
{
	if (bParam0 != func_460())
	{
		if (bParam0)
		{
			func_461(-1623728698, bParam0);
			func_408(&uLocal_882, 1);
		}
		else
		{
			func_461(func_462(), bParam0);
			func_196(&uLocal_882, 1);
		}
		func_408(&iLocal_881, 2);
	}
	else if (bParam0)
	{
		func_408(&uLocal_882, 1);
	}
	else
	{
		func_196(&uLocal_882, 1);
	}
	func_463(0, 2, bParam0, 0, bParam1);
	func_463(6, 8, bParam0, 0, bParam1);
	func_463(3, 128, bParam0, 0, bParam1);
	func_463(7, 32, bParam0, 0, bParam1);
	func_463(2, 64, bParam0, 0, bParam1);
	if (func_464(bParam0))
	{
		return true;
	}
	return false;
}

void func_165(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (29 - 1))
	{
		if (bParam1 || ((((!bParam1 && iVar0 != 3) && iVar0 != 2) && iVar0 != 14) && iVar0 != 4))
		{
			_0x67e21acc5c0c970c(Global_35, iVar0, bParam0);
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_166()
{
	_0xdad6cd07caa4f382();
}

void func_167()
{
	_0x2a1625858887d4e6(1f);
}

void func_168(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		clear_ped_tasks(Global_35, 1, 0);
		func_196(&uLocal_1757, 4);
		_0x949b2f9ed2917f5d(Global_35, 1);
		_0x949b2f9ed2917f5d(Global_35, 2);
		set_ped_config_flag(Global_35, 174, false);
		set_ped_config_flag(Global_35, 218, false);
		set_ped_using_action_mode(Global_35, false, -1, 0);
		_0x0751d461f06e41ce(player_id(), 35, 0, 0);
	}
	_0xa0cefcea390aab9b(0);
	func_465(Global_35);
	func_466();
	if (_0x2009f8ab7a5e9d6d(get_player_index()))
	{
		_0x12e09e278c6c29b7(player_id());
	}
	if (func_467(Global_35, 1, 0, 0) == -1504859554)
	{
		set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	}
	func_373(16);
	func_468();
	func_469();
	iLocal_1756 = 0;
	while (iVar1753 < 9)
	{
		if (!is_entity_dead(&(iLocal_2449[iVar1753])))
		{
			_0x88e32db8c1a4aa4b(&(iLocal_2449[iVar1753]), 1f);
			remove_entity_from_audio_mix_group(&(iLocal_2449[iVar1753]), 0f);
		}
		iLocal_1756 = iVar1753 + 1;
	}
	func_465(&(iLocal_2449[0]));
	func_465(&(iLocal_2449[1]));
	func_465(&(iLocal_2449[2]));
	func_465(&(iLocal_2449[3]));
	func_465(&(iLocal_2449[4]));
	func_465(&(iLocal_2449[5]));
	func_465(&(iLocal_2449[6]));
	func_465(&(iLocal_2449[7]));
	func_465(&(iLocal_2449[8]));
	set_entity_invincible(&(iLocal_2449[8]), false);
	func_276(cParam0, 0, &(iLocal_2449[0]), 0, 1, 0, 0);
	func_276(cParam0, 1, &(iLocal_2449[1]), 0, 1, 0, 0);
	func_276(cParam0, 3, &(iLocal_2449[2]), 0, 1, 0, 0);
	func_276(cParam0, 7, &(iLocal_2449[3]), 0, 1, 0, 0);
	func_276(cParam0, 6, &(iLocal_2449[4]), 0, 1, 0, 0);
	func_276(cParam0, 5, &(iLocal_2449[6]), 0, 1, 0, 0);
	func_276(cParam0, 13, &(iLocal_2449[8]), 0, 1, 0, 0);
	func_276(cParam0, 2, &(iLocal_2449[5]), 0, 1, 0, 0);
	func_276(cParam0, 9, &(iLocal_2449[7]), 0, 1, 0, 0);
	if (does_entity_exist(iVar2445))
	{
		set_ped_config_flag(iVar2445, 219, false);
		set_ped_config_flag(iVar2445, 136, false);
		set_ped_config_flag(iVar2445, 295, false);
	}
	func_470(7, 0);
	if (!is_entity_dead(&(bLocal_2459[0])))
	{
		func_471(&(bLocal_2459[0]), 1, 1, 0, 0);
	}
	if (!is_entity_dead(&(bLocal_2459[2])))
	{
		func_471(&(bLocal_2459[2]), 6, 1, 0, 0);
	}
	if (!is_entity_dead(&(bLocal_2459[1])))
	{
		func_471(&(bLocal_2459[1]), 0, 1, 0, 0);
	}
	func_472();
	func_473(&(Local_14.f_8), 0);
	func_473(&(Local_14.f_22), 0);
	func_473(&(Local_14.f_31), 0);
	func_473(&(Local_14.f_41), 0);
	func_473(&(Local_14.f_56), 0);
	func_473(&(Local_14.f_94), 0);
	func_473(&(Local_14.f_145), 0);
	func_473(&(Local_14.f_158), 0);
	func_474(1);
	func_475();
}

void func_169()
{
	func_477(func_476(), 0);
}

void func_170()
{
	_0x2412216fcc7b4e3e("script@Story@NBD1@ride_to_saint_denis");
	if (does_cam_exist(iVar2576))
	{
		destroy_cam(iVar2576, false);
	}
	if (does_cam_exist(iVar2575))
	{
		destroy_cam(iVar2575, false);
	}
	func_196(&uLocal_1760, 8388608);
}

void func_171()
{
	_0xd17672447692478e(&(iLocal_2325[79]), 0);
	_0x74c2b3dc0b294102(&(iLocal_2325[79]));
}

void func_172(bool bParam0)
{
	if (bParam0)
	{
		if (!_does_volume_exist(&(iLocal_2325[1])))
		{
			iLocal_2325[1] = _create_volume_box_with_custom_name(2523.348f, -1467.297f, 46.67265f, 0f, 0f, 0f, 89.27757f, 8.131363f, 9.306223f, "NBD1VOLUME_CME_SCENARIO_STREET1");
		}
		if (!_does_volume_exist(&(iLocal_2325[2])))
		{
			iLocal_2325[2] = _create_volume_box_with_custom_name(2672.754f, -1380.897f, 47.20012f, 0f, 0f, 40.50021f, 44.93316f, 60.42995f, 15.25999f, "NBD1VOLUME_CME_SCENARIO_STREET2");
		}
		if (!_does_volume_exist(&(iLocal_2325[0])))
		{
			iLocal_2325[0] = _create_volume_box_with_custom_name(2229.543f, -1354.394f, 47.21284f, 0f, 0f, -21.49994f, 357.0041f, 50.99164f, 16.61952f, "NBD1VOLUME_CME_ROAD_OFF");
		}
		if (!_does_volume_exist(&(iLocal_2325[3])))
		{
			iLocal_2325[3] = _create_volume_box_with_custom_name(2234.344f, -1355.256f, 45.69769f, 0f, 0f, -22.34892f, 10.91138f, 11.73809f, 7.778296f, "NBD1VOLUME_CME_BRIDGE_TRIGGER");
		}
		if (!_does_volume_exist(&(iLocal_2325[4])))
		{
			iLocal_2325[4] = _create_volume_box_with_custom_name(2644.839f, -1294.104f, 53.84987f, 0f, 0f, 115.8f, 18.87333f, 16.26834f, 7.715045f, "NBD1VOLUME_BANK");
		}
		if (!_does_volume_exist(&(iLocal_2325[5])))
		{
			iLocal_2325[5] = _create_volume_box_with_custom_name(2615.958f, -1296.89f, 53.64848f, 0f, 0f, 115.2962f, 26.45177f, 20f, 6.96917f, "NBD1VOLUME_BANK_ARRIVAL");
		}
		if (!_does_volume_exist(&(iLocal_2325[6])))
		{
			iLocal_2325[6] = _create_volume_box_with_custom_name(2637.246f, -1283.446f, 52.88311f, 0f, 0f, -65.26937f, 7.45754f, 11.90274f, 3.973817f, "NBD1VOLUME_BANK_FRONT");
		}
		if (!_does_volume_exist(&(iLocal_2325[8])))
		{
			iLocal_2325[8] = _create_volume_box_with_custom_name(2644.497f, -1306.466f, 52.13899f, 0f, 0f, 115.2771f, 1.005592f, 1.246076f, 3f, "NBD1VOLUME_BANKVAULT_SAFELARGE");
		}
		if (!_does_volume_exist(&(iLocal_2325[9])))
		{
			iLocal_2325[9] = _create_volume_box_with_custom_name(2641.64f, -1303.326f, 51.79115f, 0f, 0f, 115.2771f, 1.047274f, 1.128875f, 3f, "NBD1VOLUME_BANKVAULT_SAFEMEDIUM");
		}
		if (!_does_volume_exist(&(iLocal_2325[10])))
		{
			iLocal_2325[10] = _create_volume_box_with_custom_name(2657.042f, -1278.709f, 66.72962f, 0f, 0f, 115.601f, 3.9529f, 13.7606f, 5.1428f, "NBD1VOLUME_ADJROOF_BALCONY");
		}
		if (!_does_volume_exist(&(iLocal_2325[11])))
		{
			iLocal_2325[11] = _create_volume_box_with_custom_name(2661.751f, -1288.112f, 65.94344f, 0f, 0f, 115.2085f, 25.05748f, 14.39899f, 5.1428f, "NBD1VOLUME_ADJFROOF_FULL");
		}
		if (!_does_volume_exist(&(iLocal_2325[14])))
		{
			iLocal_2325[14] = _create_volume_box_with_custom_name(2656.84f, -1291.756f, 61.63831f, 0f, 0f, 24.472f, 2.363084f, 2.850461f, 3.616058f, "NBD1VOLUME_LADDERSPAWN");
		}
		if (!_does_volume_exist(&(iLocal_2325[12])))
		{
			iLocal_2325[12] = _create_volume_box_with_custom_name(2694.869f, -1278.486f, 65.34019f, 0f, 0f, 25.49847f, 4.920092f, 4.648091f, 2.875655f, "NBD1VOLUME_ROOFTOP_JUMP_POS");
		}
		if (!_does_volume_exist(&(iLocal_2325[13])))
		{
			iLocal_2325[13] = _create_volume_box_with_custom_name(2706.974f, -1273.593f, 65.92324f, 0f, 0f, -154.8608f, 15.5926f, 12.13878f, 9.909025f, "NBD1VOLUME_ROOFTOP_JUMP");
		}
		if (!_does_volume_exist(&(iLocal_2325[17])))
		{
			iLocal_2325[17] = _create_volume_box_with_custom_name(1821.166f, -1809.709f, 51.93385f, 0f, 0f, 51.41721f, 20.21416f, 13.17872f, 10.66636f, "NBD1VOLUME_WAGON_SPEEDUP");
		}
		if (!_does_volume_exist(&(iLocal_2325[18])))
		{
			iLocal_2325[18] = _create_volume_box_with_custom_name(1764.984f, -1747.764f, 52.27406f, 0f, 0f, 93.08485f, 20f, 32.10029f, 10f, "NBD1VOLUME_WAGON_MAXSPEED");
		}
		if (!_does_volume_exist(&(iLocal_2325[19])))
		{
			iLocal_2325[19] = _create_volume_box_with_custom_name(2034.299f, -1448.578f, 42.59401f, 0f, 0f, -28.09107f, 34.93708f, 9.087109f, 16.62439f, "NBD1VOLUME_TOWN_VIEW");
		}
		if (!_does_volume_exist(&(iLocal_2325[20])))
		{
			iLocal_2325[20] = _create_volume_box_with_custom_name(2689.303f, -1387.948f, 47.27905f, 0f, 0f, 39.9133f, 32.47382f, 12.13469f, 7.055178f, "NBD1VOLUME_ROAD_TURN");
		}
		if (!_does_volume_exist(&(iLocal_2325[21])))
		{
			iLocal_2325[21] = _create_volume_box_with_custom_name(2020.444f, -1462.554f, 46.20644f, 0f, 0f, 61.59095f, 20f, 20f, 10f, "NBD1VOLUME_WAGON_IG1_TRIGGER");
		}
		if (!_does_volume_exist(&(iLocal_2325[22])))
		{
			iLocal_2325[22] = _create_volume_box_with_custom_name(2644.261f, -1334.516f, 49.96507f, 0f, 0f, 40.45515f, 29.12551f, 20f, 10f, "NBD1VOLUME_WAGON_PARKATBANK");
		}
		if (!_does_volume_exist(&(iLocal_2325[15])))
		{
			iLocal_2325[15] = _create_volume_box_with_custom_name(func_409(3, 20), 0f, 0f, func_410(3, 20), 20f, 20f, 20f, "NBD1VOLUME_FORCE_DESPAWN_HOSEACOACH");
		}
		if (!_does_volume_exist(&(iLocal_2325[16])))
		{
			iLocal_2325[16] = _create_volume_box_with_custom_name(func_409(3, 16), 0f, 0f, func_410(3, 16), 20f, 20f, 20f, "NBD1VOLUME_FORCE_TELEPORT_BILLSWAGON");
		}
		if (!_does_volume_exist(&(iLocal_2325[23])))
		{
			iLocal_2325[23] = _create_volume_box_with_custom_name(2646.89f, -1294.825f, 51.35504f, 0f, 0f, -65.6367f, 3.499693f, 1.265088f, 1.93052f, "NBD1VOLUME_COVERINBANK");
		}
		if (!_does_volume_exist(&(iLocal_2325[24])))
		{
			iLocal_2325[24] = _create_volume_box_with_custom_name(2651.71f, -1292.771f, 53.19403f, 0f, 0f, -65.63669f, 3.52984f, 3.217971f, 3.951665f, "NBD1VOLUME_BANKEXPLOSION");
		}
		if (!_does_volume_exist(&(iLocal_2325[25])))
		{
			iLocal_2325[25] = _create_volume_box_with_custom_name(2761.98f, -1449.48f, 46.80537f, 0f, 0f, -39.61657f, 19.85703f, 20.13166f, 4.625854f, "NBD1VOLUME_TOBOAT_COVER");
		}
		if (!_does_volume_exist(&(iLocal_2325[26])))
		{
			iLocal_2325[26] = _create_volume_box_with_custom_name(2782.601f, -1515.162f, 47.38803f, 0f, 0f, -60.6693f, 24.46264f, 17.74268f, 5.351315f, "NBD1VOLUME_TOBOAT_END");
		}
		if (!_does_volume_exist(&(iLocal_2325[27])))
		{
			iLocal_2325[27] = _create_volume_box_with_custom_name(2667.503f, -1438.761f, 45.887f, 0f, 0f, -64.4007f, 20f, 5f, 10f, "NBD1VOLUME_TOBOAT_DESPAWN_CHARLES");
		}
		if (!_does_volume_exist(&(iLocal_2325[28])))
		{
			iLocal_2325[28] = _create_volume_box_with_custom_name(2670.245f, -1289.038f, 65.22262f, 0f, 0f, -64.25841f, 5.086542f, 1.353268f, 3.852423f, "NBD1VOLUME_START_LENNY_RUNNING");
		}
		if (!_does_volume_exist(&(iLocal_2325[31])))
		{
			iLocal_2325[31] = _create_volume_box_with_custom_name(2614.512f, -1305.167f, 51.47867f, 0f, 0f, -6.722498f, 4.743025f, 4.54739f, 5.096177f, "NBD1VOLUME_ACTIVATE_BRINGPEDTOHALT");
		}
		if (!_does_volume_exist(&(iLocal_2325[29])))
		{
			iLocal_2325[29] = _create_volume_aggregate_with_custom_name("NBD1VOLUME_ACTIVATE_GOTONBD_ASSIST_ROUTE");
			_0x39816f6f94f385ad(&(iLocal_2325[29]), 2638.595f, -1340.361f, 49.96507f, 0f, 0f, 40.45515f, 10.16663f, 45.69544f, 10f);
			_0x39816f6f94f385ad(&(iLocal_2325[29]), 2621.497f, -1313.068f, 49.96507f, 0f, 0f, 26.16988f, 10.16663f, 37.7162f, 10f);
		}
		if (!_does_volume_exist(&(iLocal_2325[30])))
		{
			iLocal_2325[30] = _create_volume_aggregate_with_custom_name("NBD1VOLUME_ACTIVATE_GOTONBD_ASSIST_ROUTE_BUFFER");
			_0x39816f6f94f385ad(&(iLocal_2325[30]), 2638.595f, -1340.361f, 49.96507f, 0f, 0f, 40.45515f, 13.16663f, 48.69544f, 10f);
			_0x39816f6f94f385ad(&(iLocal_2325[30]), 2621.497f, -1313.068f, 49.96507f, 0f, 0f, 26.16988f, 13.16663f, 40.7162f, 10f);
		}
		if (!_does_volume_exist(&(iLocal_2325[7])))
		{
			iLocal_2325[7] = _create_volume_aggregate_with_custom_name("NBD1VOLUME_BANKVAULT");
			_0x39816f6f94f385ad(&(iLocal_2325[7]), 2642.834f, -1301.859f, 51.77792f, 0f, 0f, 70.24588f, 2.193669f, 2.986759f, 3.103481f);
			_0x39816f6f94f385ad(&(iLocal_2325[7]), 2643.346f, -1304.132f, 51.81622f, 0f, 0f, 114.8671f, 5.984064f, 3.339302f, 3.103481f);
			_0x39816f6f94f385ad(&(iLocal_2325[7]), 2643.894f, -1302.557f, 51.77792f, 0f, 0f, 114.5023f, 1.763342f, 2.271444f, 3.103481f);
			_0x39816f6f94f385ad(&(iLocal_2325[7]), 2641.465f, -1301.42f, 51.77792f, 0f, 0f, 114.5023f, 1.763342f, 2.271444f, 3.103481f);
		}
		if (!_does_volume_exist(&(iLocal_2325[32])))
		{
			iLocal_2325[32] = _create_volume_box_with_custom_name(2718.501f, -1314.461f, 57.09327f, 0f, 0f, -53.47586f, 14.57454f, 2.311806f, 3.637078f, "NBD1VOLUME_COP_PATROL_TRIGGER_STAIRS");
		}
		if (!_does_volume_exist(&(iLocal_2325[33])))
		{
			iLocal_2325[33] = _create_volume_box_with_custom_name(2746.734f, -1328.957f, 57.26619f, 0f, 0f, -26.7502f, 15.97307f, 11.02682f, 4.326469f, "NBD1VOLUME_COP_PATROL_TRIGGER_ROAD");
		}
		if (!_does_volume_exist(&(iLocal_2325[34])))
		{
			iLocal_2325[34] = _create_volume_box_with_custom_name(2743.795f, -1323.431f, 57.13251f, 0f, 0f, -36.77109f, 29.07421f, 11.74916f, 3.686153f, "NBD1VOLUME_COP_PATROL_TRIGGER_ROAD2");
		}
		if (!_does_volume_exist(&(iLocal_2325[35])))
		{
			iLocal_2325[35] = _create_volume_box_with_custom_name(2769.527f, -1428.906f, 46.12502f, 0f, 0f, -36.50063f, 12.75746f, 15.79252f, 4.140701f, "NBD1VOLUME_GO_DOCKS_TRIGGER_2");
		}
		if (!_does_volume_exist(&(iLocal_2325[36])))
		{
			iLocal_2325[36] = _create_volume_box_with_custom_name(2644.625f, -1303.603f, 52.05609f, 0f, 0f, 25.47239f, 1f, 1f, 2.012901f, "NBD1VOLUME_BANKVAULT_SAFESMALL");
		}
		if (!_does_volume_exist(&(iLocal_2325[37])))
		{
			iLocal_2325[37] = _create_volume_box_with_custom_name(2646.042f, -1296.567f, 51.59322f, 0f, 0f, 22.30083f, 2.826755f, 3.756933f, 2.739674f, "NBD1VOLUME_BANKDESK");
		}
		if (!_does_volume_exist(&(iLocal_2325[38])))
		{
			iLocal_2325[38] = _create_volume_box_with_custom_name(2649.516f, -1304.527f, 52.53399f, 0f, 0f, 24.08929f, 6.164634f, 7.718099f, 2.674736f, "NBD1VOLUME_MANAGERS_OFFICE");
		}
		if (!_does_volume_exist(&(iLocal_2325[39])))
		{
			iLocal_2325[39] = _create_volume_box_with_custom_name(2648.076f, -1300.698f, 52.52231f, 0f, 0f, 25.6153f, 2.640609f, 3.375994f, 2.795688f, "NBD1VOLUME_MANAGERS_OFFICE_DOORS");
		}
		if (!_does_volume_exist(&(iLocal_2325[40])))
		{
			iLocal_2325[40] = _create_volume_cylinder_with_custom_name(2645.716f, -1295.341f, 50.58123f, 0f, 0f, 0f, 2.573967f, 2.681346f, 2.829881f, "NBD1VOLUME_BANK_MIDDLE_COUNTER");
		}
		if (!_does_volume_exist(&(iLocal_2325[41])))
		{
			iLocal_2325[41] = _create_volume_box_with_custom_name(2645.845f, -1295.698f, 52.64182f, 0f, 0f, 25.97816f, 9.868299f, 11.66618f, 3.112684f, "NBD1VOLUME_BANK_MIDDLE_DUTCH_BLOWWALL_TRIGGER");
		}
		if (!_does_volume_exist(&(iLocal_2325[42])))
		{
			iLocal_2325[42] = _create_volume_box_with_custom_name(2753.769f, -1333.485f, 56.8709f, 0f, 0f, -31.42833f, 2.941317f, 1.233589f, 4.455594f, "NBD1VOLUME_ABANDONED_WINDOW");
		}
		if (!_does_volume_exist(&(iLocal_2325[43])))
		{
			iLocal_2325[43] = _create_volume_box_with_custom_name(2701.966f, -1282.238f, 62.85685f, 0f, 0f, 23.68904f, 1.302893f, 11.0484f, 6.660703f, "NBD1VOLUME_BACKUP_WARP");
		}
		if (!_does_volume_exist(&(iLocal_2325[44])))
		{
			iLocal_2325[44] = _create_volume_box_with_custom_name(2708.545f, -1283.894f, 62.85685f, 0f, 0f, 23.68904f, 1.302893f, 11.0484f, 6.660703f, "NBD1VOLUME_BACKUP_WARP");
		}
		if (!_does_volume_exist(&(iLocal_2325[45])))
		{
			iLocal_2325[45] = _create_volume_box_with_custom_name(2704.939f, -1278.173f, 63.19857f, 0f, 0f, 24.23228f, 6.762046f, 15.81983f, 3.849018f, "NBD1VOLUME_ROOFJUMP_BACKUP");
		}
		if (!_does_volume_exist(&(iLocal_2325[50])))
		{
			iLocal_2325[50] = _create_volume_box_with_custom_name(2714.03f, -1311.905f, 58.96113f, 0f, 0f, 34.55013f, 1.984015f, 6.642963f, 3.861667f, "NBD1VOLUME_ROOFJUMP2_BACKUP");
		}
		if (!_does_volume_exist(&(iLocal_2325[46])))
		{
			iLocal_2325[46] = _create_volume_box_with_custom_name(2651.381f, -1292.913f, 52.30567f, 0.459587f, -0.014521f, 25.32764f, 4.648362f, 3.461642f, 3.678874f, "NBD1VOLUME_EXPLOSION_DAMAGE");
		}
		if (!_does_volume_exist(&(iLocal_2325[47])))
		{
			iLocal_2325[47] = _create_volume_box_with_custom_name(2759.896f, -1454.304f, 45.6512f, 0f, 0f, -52.53048f, 12.83256f, 10.00317f, 3.511373f, "NBD1VOLUME_IG13_TRIGGER");
		}
		if (!_does_volume_exist(&(iLocal_2325[48])))
		{
			iLocal_2325[48] = _create_volume_box_with_custom_name(2756.982f, -1456.971f, 45.78059f, 0f, 0f, 30.53675f, 7.68475f, 8.745427f, 4.053465f, "NBD1VOLUME_IG13_IMMEDIATE_TRIGGER");
		}
		if (!_does_volume_exist(&(iLocal_2325[49])))
		{
			iLocal_2325[49] = _create_volume_box_with_custom_name(2657.66f, -1294.131f, 52.90194f, 0f, 0f, 24.46036f, 1.697661f, 3.063811f, 5.249437f, "NBD1VOLUME_LADDER_FAIL");
		}
		if (!_does_volume_exist(&(iLocal_2325[51])))
		{
			iLocal_2325[51] = _create_volume_box_with_custom_name(2655.58f, -1294.083f, 51.76031f, 0.00297f, 9.9E-05f, 114.939f, 22.22041f, 2.125791f, 3.173592f, "NBD1VOLUME_GATE_GUARD_TIMER_1");
		}
		if (!_does_volume_exist(&(iLocal_2325[52])))
		{
			iLocal_2325[52] = _create_volume_box_with_custom_name(2658.561f, -1295.98f, 51.83331f, 0f, 0f, 23.82184f, 2.379439f, 5.012467f, 3.431196f, "NBD1VOLUME_GATE_GUARD_TIMER_2");
		}
		if (!_does_volume_exist(&(iLocal_2325[53])))
		{
			iLocal_2325[53] = _create_volume_box_with_custom_name(2651.924f, -1286.458f, 51.69166f, 0f, 0f, 24.84375f, 2.071238f, 6.090982f, 3.00959f, "NBD1VOLUME_GATE_GUARD_CLOSE");
		}
		if (!_does_volume_exist(&(iLocal_2325[54])))
		{
			iLocal_2325[54] = _create_volume_box_with_custom_name(2788.91f, -1387.089f, 46.41705f, 0f, 0f, -40.49693f, 6.111613f, 35.87374f, 3.099439f, "NBD1VOLUME_TRAIN_ENTER_1");
		}
		if (!_does_volume_exist(&(iLocal_2325[55])))
		{
			iLocal_2325[55] = _create_volume_box_with_custom_name(2789.675f, -1392.979f, 47.40398f, 0f, 0f, 51.04211f, 3.346564f, 2.509537f, 2.217461f, "NBD1VOLUME_TRAIN_ENTER_NBD1VOLUME_TRAIN_ENTER_DOOR");
		}
		if (!_does_volume_exist(&(iLocal_2325[56])))
		{
			iLocal_2325[56] = _create_volume_box_with_custom_name(2777.6f, -1407.248f, 47.39465f, 0f, -0.707339f, 51.04209f, 1f, 2.509537f, 2.217461f, "NBD1VOLUME_TRAIN_ENTER_NBD1VOLUME_TRAIN_ENTER_DOOR_2");
		}
		if (!_does_volume_exist(&(iLocal_2325[57])))
		{
			iLocal_2325[57] = _create_volume_box_with_custom_name(2768.236f, -1418.411f, 46.99024f, 0f, 0f, 51.0811f, 2.259315f, 2.826842f, 2.571036f, "NBD1VOLUME_TRAIN_EXIT");
		}
		if (!_does_volume_exist(&(iLocal_2325[58])))
		{
			iLocal_2325[58] = _create_volume_box_with_custom_name(2775.083f, -1412.188f, 47.22038f, 0f, 0f, 50.35439f, 15.24985f, 1.490918f, 2.393396f, "NBD1VOLUME_TRAIN_SEATS_LEFT");
		}
		if (!_does_volume_exist(&(iLocal_2325[59])))
		{
			iLocal_2325[59] = _create_volume_box_with_custom_name(2773.329f, -1410.734f, 47.22038f, 0f, 0f, 50.35439f, 15.24985f, 1.490918f, 2.393396f, "NBD1VOLUME_TRAIN_SEATS_RIGHT");
		}
		if (!_does_volume_exist(&(iLocal_2325[60])))
		{
			iLocal_2325[60] = _create_volume_box_with_custom_name(2785.514f, -1397.848f, 47.50488f, 0f, 0f, 50.71798f, 17.77804f, 3.749532f, 2.49776f, "NBD1VOLUME_NBD1VOLUME_TRAIN_CARRIAGE1");
		}
		if (!_does_volume_exist(&(iLocal_2325[61])))
		{
			iLocal_2325[61] = _create_volume_box_with_custom_name(2774.28f, -1411.151f, 47.50488f, 0f, 0f, 50.71798f, 16.26577f, 3.749532f, 2.49776f, "NBD1VOLUME_TRAIN_CARRIAGE2");
		}
		if (!_does_volume_exist(&(iLocal_2325[62])))
		{
			iLocal_2325[62] = _create_volume_box_with_custom_name(2769.196f, -1429.378f, 45.85027f, 0f, 0f, -38.59f, 28.86386f, 23.73167f, 3.319021f, "NBD1VOLUME_GUARD_DISTRACTION");
		}
		if (!_does_volume_exist(&(iLocal_2325[63])))
		{
			iLocal_2325[63] = _create_volume_box_with_custom_name(2771.422f, -1421.486f, 45.69069f, 0f, 0f, 49.346f, 3.099538f, 4.310707f, 2.636028f, "NBD1VOLUME_DISTRATION_TRIGGER");
		}
		if (!_does_volume_exist(&(iLocal_2325[64])))
		{
			iLocal_2325[64] = _create_volume_box_with_custom_name(2785.73f, -1451.267f, 45.89996f, 0f, 0f, -41.48609f, 7.27083f, 13.47699f, 3.407754f, "NBD1VOLUME_DISTRACTION_DOCKS_GUARD_WALK_TRIGGER");
		}
		if (!_does_volume_exist(&(iLocal_2325[65])))
		{
			iLocal_2325[65] = _create_volume_box_with_custom_name(2773.332f, -1452.849f, 45.89996f, 0f, 0f, -41.4861f, 7.27083f, 6.869458f, 3.407754f, "NBD1VOLUME_DISTRACTION_DOCKS_GUARD_WALK_TRIGGER2");
		}
		if (!_does_volume_exist(&(iLocal_2325[66])))
		{
			iLocal_2325[66] = _create_volume_box_with_custom_name(2799.575f, -1436.184f, 45.13212f, 0f, 0f, -40.47132f, 22.64715f, 16.54821f, 3.737683f, "NBD1VOLUME_GUARD_DISTRACTION_GOTO");
		}
		if (!_does_volume_exist(&(iLocal_2325[67])))
		{
			iLocal_2325[67] = _create_volume_box_with_custom_name(2652.772f, -1292.283f, 52.58308f, 0f, 0f, 25.06702f, 1.903964f, 1.921098f, 3.458874f, "NBD1VOLUME_DYNAMITE_WALL");
		}
		if (!_does_volume_exist(&(iLocal_2325[68])))
		{
			iLocal_2325[68] = _create_volume_box_with_custom_name(2726.603f, -1324.314f, 55.97515f, 0f, 0f, 42.50375f, 6.923346f, 4.712873f, 3.518331f, "NBD1VOLUME_STEALTH_ROOF");
		}
		if (!_does_volume_exist(&(iLocal_2325[69])))
		{
			iLocal_2325[69] = _create_volume_box_with_custom_name(2414.098f, -1437.406f, 47.46224f, 0.280807f, 2.190897f, -123.7718f, 19.11999f, 11.63974f, 7.284223f, "NBD1VOLUME_CITY_DIALOGUE_TRIGGER");
		}
		if (!_does_volume_exist(&(iLocal_2325[70])))
		{
			iLocal_2325[70] = _create_volume_box_with_custom_name(2544.517f, -1477.549f, 47.19554f, 0f, 0f, 0f, 6.933468f, 26.07454f, 4.232437f, "NBD1VOLUME_CHECKIN_DIALOGUE_TRIGGER");
		}
		if (!_does_volume_exist(&(iLocal_2325[71])))
		{
			iLocal_2325[71] = _create_volume_box_with_custom_name(2641.018f, -1285.336f, 52.70915f, 0f, 0f, 24.7961f, 3.337441f, 5.912042f, 3.016214f, "NBD1VOLUME_FRONT_DOORS_LOCK");
		}
		if (!_does_volume_exist(&(iLocal_2325[72])))
		{
			iLocal_2325[72] = _create_volume_box_with_custom_name(2646.56f, -1294.815f, 52.32603f, 0f, 0f, 24.02229f, 2.588266f, 2.280208f, 2.497525f, "NBD1VOLUME_DYNAMITE_PICKUP");
		}
		if (!_does_volume_exist(&(iLocal_2325[73])))
		{
			iLocal_2325[73] = _create_volume_box_with_custom_name(2773.711f, -1411.854f, 47.15392f, 0f, 0f, -39.69653f, 1.271014f, 18.48944f, 2.083952f, "NBD1VOLUME_TRAIN_PASSAGE");
		}
		if (!_does_volume_exist(&(iLocal_2325[74])))
		{
			iLocal_2325[74] = _create_volume_box_with_custom_name(2696.364f, -1273.498f, 55.24842f, 0f, 0f, 26.00761f, 4.291422f, 6.356068f, 3.173681f, "NBD1VOLUME_TRELLIS_DEATH");
		}
		if (!_does_volume_exist(&(iLocal_2325[75])))
		{
			iLocal_2325[75] = _create_volume_cylinder_with_custom_name(2610.615f, -1297.284f, 52.07722f, 0f, 0f, 28.14183f, 2.360178f, 2.416946f, 1f, "NBD1VOLUME_PLAYER_HITCH_OUTSIDE_BANK");
		}
		if (!_does_volume_exist(&(iLocal_2325[77])))
		{
			iLocal_2325[77] = _create_volume_box_with_custom_name(2674.417f, -1285.763f, 64.92654f, 0f, 0f, 25.49961f, 9.292827f, 10.76103f, 4.260268f, "NBD1VOLUME_IG17_JUMP_ALREADY_TRIGGER");
		}
		if (!_does_volume_exist(&(iLocal_2325[78])))
		{
			iLocal_2325[78] = _create_volume_box_with_custom_name(2741.214f, -1328.155f, 56.94717f, 0f, 0f, -38.72793f, 28.276f, 24.25275f, 10.6549f, "NBD1VOLUME_AT_ROOF");
		}
		if (!_does_volume_exist(&(iLocal_2325[79])))
		{
			iLocal_2325[79] = _create_volume_box_with_custom_name(2637.075f, -1280.437f, 56.22042f, 0f, 0f, 24.51281f, 213.0134f, 288.4119f, 31.64166f, "NBD1VOLUME_BANK_ROADS_VOL");
		}
		if (!_does_volume_exist(&(iLocal_2325[76])))
		{
			iLocal_2325[76] = _create_volume_box_with_custom_name(2613.8f, -1301.121f, 51.64086f, 0f, 0f, 30.88093f, 11.30435f, 24.22078f, 6.359377f, "NBD1VOLUME_PLAYER_HITCH_OUTSIDE_BANK_LARGE");
		}
		if (!_does_volume_exist(&(iLocal_2325[80])))
		{
			iLocal_2325[80] = _create_volume_box_with_custom_name(2688.764f, -1275.558f, 66.01418f, 0f, 0f, 25.92972f, 5.157351f, 5.319752f, 3.902017f, "NBD1VOLUME_LENNY_ENEMY_ROOM");
		}
		if (!_does_volume_exist(&(iLocal_2325[81])))
		{
			iLocal_2325[81] = _create_volume_box_with_custom_name(2282.38f, -1371.636f, 47.24554f, 0f, 0f, -20.249f, 8.071376f, 13.07444f, 5.799594f, "NBD1VOLUME_POPULATION_SAINT_DENIS_UPDATE");
		}
		if (!_does_volume_exist(&(iLocal_2325[82])))
		{
			iLocal_2325[82] = _create_volume_box_with_custom_name(2696.083f, -1277.881f, 65.14919f, 0f, 0f, -64.57617f, 2.451079f, 2.60798f, 3.492615f, "NBD1VOLUME_ROOF_JUMP_UC");
		}
		if (!_does_volume_exist(&(iLocal_2325[83])))
		{
			iLocal_2325[83] = _create_volume_box_with_custom_name(2713.114f, -1307.67f, 60.07674f, 0f, 0f, 36.12047f, 2.77647f, 3.100272f, 2.580834f, "NBD1VOLUME_ROOF_IG28_VOL");
		}
		if (!_does_volume_exist(&(iLocal_2325[84])))
		{
			iLocal_2325[84] = _create_volume_box_with_custom_name(2773.929f, -1412.502f, 47.67405f, 0f, 0f, -40.9754f, 3.508499f, 16.44173f, 4.952693f, "NBD1VOLUME_TRAIN_SECOND_CARRIAGE");
		}
		if (!_does_volume_exist(&(iLocal_2325[85])))
		{
			iLocal_2325[85] = _create_volume_box_with_custom_name(2771.167f, -1428.028f, 45.59085f, 0f, 0f, 50.13813f, 2.520407f, 2.495319f, 3.065167f, "NBD1VOLUME_DUTCH_POST_TRAIN_CORNER");
		}
		if (!_does_volume_exist(&(iLocal_2325[86])))
		{
			iLocal_2325[86] = _create_volume_box_with_custom_name(2768.856f, -1524.841f, 48.53851f, 0f, 0f, 31.24124f, 14.82933f, 77.44463f, 8.723039f, "NBD1VOLUME_EXT_MULTISTART_TRIGGER");
		}
		if (!_does_volume_exist(&(iLocal_2325[87])))
		{
			iLocal_2325[87] = _create_volume_box_with_custom_name(2658.534f, -1297.27f, 60.40746f, 0f, 0f, 22.98149f, 2.466874f, 2.289351f, 2.540252f, "NBD1VOLUME_GOROOF_LAST_LANDING");
		}
		if (!_does_volume_exist(&(iLocal_2325[88])))
		{
			iLocal_2325[88] = _create_volume_box_with_custom_name(2651.344f, -1293.051f, 52.16364f, 0f, 0f, -65.8888f, 3.704717f, 2.207628f, 2.468107f, "NBD1VOLUME_GOROOF_GIVE_RIFLE_TRIGGER");
		}
		if (!_does_volume_exist(&(iLocal_2325[89])))
		{
			iLocal_2325[89] = _create_volume_box_with_custom_name(2802.206f, -1394.599f, 45.72749f, -1.726981f, -0.031421f, -39.80333f, 16.6945f, 50.1824f, 9.321453f, "NBD1VOLUME_IDLE_WALK_FAIL");
		}
		if (!_does_volume_exist(&(iLocal_2325[90])))
		{
			iLocal_2325[90] = _create_volume_box_with_custom_name(2645.728f, -1298.22f, 51.49877f, 0f, 0f, 0f, 2.990534f, 1.577837f, 2.599684f, "NBD1VOLUME_IG21_DUTCH_NO_WALK");
		}
		if (!_does_volume_exist(&(iLocal_2325[91])))
		{
			iLocal_2325[91] = _create_volume_box_with_custom_name(2779.764f, -1404.611f, 45.67714f, 0f, 0f, -40.76081f, 5.100823f, 4.856867f, 7.953552f, "NBD1VOLUME_TRAIN_MIDDLE_NO_JUMP");
		}
		if (!_does_volume_exist(&(iLocal_2325[92])))
		{
			iLocal_2325[92] = _create_volume_box_with_custom_name(2790.946f, -1391.443f, 46.81698f, 0f, 0f, -40.49748f, 4.306809f, 4.498139f, 3.926668f, "NBD1VOLUME_TRAIN_ENTRY_NO_JUMP");
		}
		if (!_does_volume_exist(&(iLocal_2325[93])))
		{
			iLocal_2325[93] = _create_volume_box_with_custom_name(2770.194f, -1441.479f, 46.08553f, 0f, 0f, -38.50249f, 13.84757f, 64.49846f, 4.603025f, "NBD1VOLUME_WHISTLE_NO_PROGRESS");
		}
		if (!_does_volume_exist(&(iLocal_2420[0])))
		{
			iLocal_2420[0] = _create_volume_aggregate_with_custom_name("m_volMissionDefensive[NBD1DEFVOLUME_LAW_DEFVOL_LARGE]");
			_0x39816f6f94f385ad(&(iLocal_2420[0]), 2626.992f, -1301.26f, 53.752f, 0f, 0f, 116.2845f, 21.968f, 18.447f, 10f);
			_0x39816f6f94f385ad(&(iLocal_2420[0]), 2636.225f, -1277.53f, 54.374f, 0f, 0f, 116.1963f, 14.544f, 24.562f, 10f);
		}
		if (!_does_volume_exist(&(iLocal_2420[1])))
		{
			iLocal_2420[1] = _create_volume_box_with_custom_name(2634.86f, -1276.11f, 52.883f, 0f, 0f, -65.26898f, 10.42175f, 18.85118f, 5.697f, "NBD1DEFVOLUME_LAW_DEFVOL_CLOSE");
		}
		if (!_does_volume_exist(&(iLocal_2420[2])))
		{
			iLocal_2420[2] = _create_volume_box_with_custom_name(2623.402f, -1284.958f, 52.42302f, 0f, 0f, 25.48372f, 6.956074f, 9.502603f, 3.487016f, "NBD1DEFVOLUME_LAW_DEFVOL_FAR");
		}
		if (!_does_volume_exist(&(iLocal_2420[3])))
		{
			iLocal_2420[3] = _create_volume_box_with_custom_name(2634.141f, -1273.614f, 57.40791f, 0f, 0f, -66.54778f, 3.52984f, 10.5909f, 5.234001f, "NBD1DEFVOLUME_LAW_DEFVOL_BALCONY");
		}
		if (!_does_volume_exist(&(iLocal_2420[4])))
		{
			iLocal_2420[4] = _create_volume_box_with_custom_name(2690.095f, -1280.562f, 65.22213f, 0f, 0f, -65.52977f, 4.437184f, 4.276758f, 2.683832f, "NBD1DEFVOLUME_LAW_DEFVOL_KILLLENNY");
		}
		if (!_does_volume_exist(&(iLocal_2426[0])))
		{
			iLocal_2426[0] = _create_volume_box_with_custom_name(2758.479f, -1433.68f, 44.9992f, 0f, 0f, 186.689f, 20f, 5f, 10f, "NBD1CONVVOLUME_PLAY_GTINCVR");
		}
		func_478(uLocal_2428[0], 2788.006f, -1353.375f, 46.60382f, 0f, 0f, -34.49838f, 15.55981f, 14.45842f, 3.024f, "NBD1NMVOLUME_DOCKS_STALL");
		func_478(uLocal_2428[1], 2818.083f, -1394.015f, 45.54592f, 0f, 0f, 143.2209f, 8.376214f, 12.13031f, 2.639913f, "NBD1NMVOLUME_DOCKS_STALL_2");
		func_478(uLocal_2428[2], 2769.226f, -1478.6f, 44.81675f, 0f, 0f, -38.87833f, 4.394001f, 6.691849f, 3.232575f, "NBD1NMVOLUME_DOCKS_PIER");
		func_478(uLocal_2432[0], 2665.524f, -1360.936f, 49.65312f, 0f, 0f, 38.77272f, 19.38113f, 92.31184f, 9.854159f, "NBD1MOVERESTVOLUME_BANK_ROAD");
		func_478(uLocal_2432[1], 2492.956f, -1491.45f, 47.04811f, 0f, 0f, 0f, 14.16456f, 45.6284f, 4.665219f, "NBD1MOVERESTVOLUME_JUNCTION");
		func_478(uLocal_2432[2], 2515.712f, -1474.76f, 45.76046f, 0f, 0f, 0f, 61.35714f, 12.10903f, 5.179045f, "NBD1MOVERESTVOLUME_CME_STREET1");
	}
	else
	{
		iLocal_1756 = 0;
		while (iVar1753 < 94)
		{
			if (_does_volume_exist(&(iLocal_2325[iVar1753])))
			{
				_delete_volume(&(iLocal_2325[iVar1753]));
			}
			iLocal_1756 = iVar1753 + 1;
		}
		iLocal_1756 = 0;
		while (iVar1753 < 5)
		{
			if (_does_volume_exist(&(iLocal_2420[iVar1753])))
			{
				_delete_volume(&(iLocal_2420[iVar1753]));
			}
			iLocal_1756 = iVar1753 + 1;
		}
		iLocal_1756 = 0;
		while (iVar1753 < 1)
		{
			if (_does_volume_exist(&(iLocal_2426[iVar1753])))
			{
				_delete_volume(&(iLocal_2426[iVar1753]));
			}
			iLocal_1756 = iVar1753 + 1;
		}
		iLocal_1756 = 0;
		while (iVar1753 < 3)
		{
			if (_does_volume_exist(&(uLocal_2432[iVar1753])))
			{
				_delete_volume(&(uLocal_2432[iVar1753]));
			}
			iLocal_1756 = iVar1753 + 1;
		}
	}
}

void func_173(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (_does_volume_exist(&(uLocal_2432[iVar0])))
			{
				_0xb56d41a694e42e86(&(uLocal_2432[iVar0]), 0, 0, 0, -1, -1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (_does_volume_exist(&(uLocal_2432[iVar0])))
			{
				_0x74c2b3dc0b294102(&(uLocal_2432[iVar0]));
			}
			iVar0++;
		}
	}
}

void func_174()
{
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		if (_does_volume_exist(&(Local_236[iVar0])))
		{
			_0x74c2b3dc0b294102(&(Local_236[iVar0]));
			_delete_volume(&(Local_236[iVar0]));
		}
		iVar0++;
	}
}

bool func_175(char[4] cParam0, bool bParam1)
{
	bVar0 = true;
	if (bParam1)
	{
		switch (func_33(cParam0))
		{
			case 4:
			case 5:
				if (&iLocal_2182[7] == 0)
				{
					vVar2 = { func_409(6, 6) };
					if (get_ground_z_for_3d_coord(func_409(6, 6), &uVar1, false))
					{
						vVar2.f_2 = uVar1;
					}
					iLocal_2182[7] = add_cover_point(vVar2, func_410(6, 6), 2, 2, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[0] == 0)
				{
					iLocal_2182[0] = add_cover_point(func_409(6, 3), func_410(6, 3), 3, 2, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[20] == 0)
				{
					iLocal_2182[20] = add_cover_point(func_409(6, 30), func_410(6, 30), 3, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[8] == 0)
				{
					iLocal_2182[8] = add_cover_point(func_409(6, 22), func_410(6, 22), 2, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[9] == 0)
				{
					iLocal_2182[9] = add_cover_point(func_409(6, 23), func_410(6, 23), 2, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[10] == 0)
				{
					iLocal_2182[10] = add_cover_point(func_409(5, 13), func_410(5, 13), 3, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[11] == 0)
				{
					iLocal_2182[11] = add_cover_point(func_409(5, 14), func_410(5, 14), 3, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[12] == 0)
				{
					iLocal_2182[12] = add_cover_point(func_409(5, 15), func_410(5, 15), 3, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[13] == 0)
				{
					iLocal_2182[13] = add_cover_point(func_409(5, 16), func_410(5, 16), 3, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[14] == 0)
				{
					iLocal_2182[14] = add_cover_point(func_409(5, 17), func_410(5, 17), 3, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[15] == 0)
				{
					iLocal_2182[15] = add_cover_point(func_409(5, 18), func_410(5, 18), 3, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[16] == 0)
				{
					iLocal_2182[16] = add_cover_point(func_409(5, 19), func_410(5, 19), 3, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[17] == 0)
				{
					iLocal_2182[17] = add_cover_point(func_409(5, 20), func_410(5, 20), 3, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[18] == 0)
				{
					iLocal_2182[18] = add_cover_point(func_409(6, 18), func_410(6, 18), 3, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[19] == 0)
				{
					iLocal_2182[19] = add_cover_point(func_409(6, 19), func_410(6, 19), 3, 0, 0, false);
					bVar0 = false;
				}
				if (bVar0)
				{
					return true;
				}
				break;
			case 6:
			case 7:
			case 8:
				if (&iLocal_2182[21] == 0)
				{
					bVar0 = false;
					func_479(iLocal_2182[21], func_409(8, 3), func_410(8, 3), 2, 0, 0, 0);
				}
				if (&iLocal_2182[22] == 0)
				{
					bVar0 = false;
					func_479(iLocal_2182[22], func_409(8, 11), func_410(8, 11), 2, 0, 0, 0);
				}
				if (&iLocal_2182[24] == 0)
				{
					bVar0 = false;
					func_479(iLocal_2182[24], func_409(8, 9), func_410(8, 9), 2, 0, 0, 0);
				}
				if (&iLocal_2245[0] == 0)
				{
					bVar0 = false;
					iLocal_2245[0] = add_cover_point(func_409(9, 4), func_410(9, 4), 1, 2, 0, false);
				}
				if (&iLocal_2245[1] == 0)
				{
					bVar0 = false;
					iLocal_2245[1] = add_cover_point(func_409(9, 5), func_410(9, 5), 2, 0, 0, false);
				}
				if (bVar0)
				{
					return true;
				}
				break;
			case 9:
				if (&iLocal_2182[27] == 0)
				{
					iLocal_2182[27] = add_cover_point(func_409(1, 2), func_410(1, 2), 3, 0, 0, false);
				}
				if (&iLocal_2182[28] == 0)
				{
					iLocal_2182[28] = add_cover_point(func_409(1, 1), func_410(1, 1), 3, 0, 0, false);
				}
				if (&iLocal_2182[29] == 0)
				{
					iLocal_2182[29] = add_cover_point(func_409(1, 0), func_410(1, 0), 3, 0, 0, false);
				}
				if (&iLocal_2182[30] == 0)
				{
					iLocal_2182[30] = add_cover_point(func_409(1, 4), func_410(1, 4), 3, 0, 0, false);
				}
				return true;
			case 10:
			case 11:
				if (&iLocal_2182[39] == 0)
				{
					if (!func_479(iLocal_2182[39], func_409(2, 26), func_410(2, 26), 2, 0, 0, 0))
					{
						bVar0 = false;
					}
				}
				if (&iLocal_2182[40] == 0)
				{
					if (!func_479(iLocal_2182[40], func_409(2, 27), func_410(2, 27), 2, 0, 0, 0))
					{
						bVar0 = false;
					}
				}
				if (&iLocal_2182[41] == 0)
				{
					if (!func_479(iLocal_2182[41], func_409(15, 35), func_410(15, 35), 2, 0, 0, 0))
					{
						bVar0 = false;
					}
				}
				if (&iLocal_2182[42] == 0)
				{
					if (!func_479(iLocal_2182[42], func_409(2, 28), func_410(2, 28), 2, 0, 0, 0))
					{
						bVar0 = false;
					}
				}
				if (&iLocal_2182[43] == 0)
				{
					if (!func_479(iLocal_2182[43], func_409(15, 33), func_410(15, 33), 2, 0, 0, 0))
					{
						bVar0 = false;
					}
				}
				if (&iLocal_2182[44] == 0)
				{
					if (!func_479(iLocal_2182[44], func_409(2, 29), func_410(2, 29), 2, 0, 0, 0))
					{
						bVar0 = false;
					}
				}
				if (&iLocal_2182[45] == 0)
				{
					if (!func_479(iLocal_2182[45], func_409(15, 34), func_410(15, 34), 2, 0, 0, 0))
					{
						bVar0 = false;
					}
				}
				if (&iLocal_2182[46] == 0)
				{
					if (!func_479(iLocal_2182[46], func_409(2, 30), func_410(2, 30), 2, 0, 0, 0))
					{
						bVar0 = false;
					}
				}
				if (&iLocal_2182[47] == 0)
				{
					if (!func_479(iLocal_2182[47], func_409(2, 18), func_410(2, 18), 0, 1, 0, 0))
					{
						bVar0 = false;
					}
				}
				if (&iLocal_2182[52] == 0)
				{
					iLocal_2182[52] = add_cover_point(func_409(2, 12), func_410(2, 12), 2, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[53] == 0)
				{
					iLocal_2182[53] = add_cover_point(func_409(2, 13), func_410(2, 13), 2, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[54] == 0)
				{
					iLocal_2182[54] = add_cover_point(func_409(2, 14), func_410(2, 14), 2, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[55] == 0)
				{
					iLocal_2182[55] = add_cover_point(func_409(2, 15), func_410(2, 15), 2, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[56] == 0)
				{
					iLocal_2182[56] = add_cover_point(func_409(2, 16), func_410(2, 16), 2, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[57] == 0)
				{
					iLocal_2182[57] = add_cover_point(func_409(2, 1), func_410(2, 1), 2, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[58] == 0)
				{
					iLocal_2182[58] = add_cover_point(func_409(2, 10), func_410(2, 10), 3, 2, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[59] == 0)
				{
					iLocal_2182[59] = add_cover_point(func_409(2, 3), func_410(2, 3), 3, 2, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[60] == 0)
				{
					iLocal_2182[60] = add_cover_point(func_409(2, 4), func_410(2, 4), 3, 2, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[61] == 0)
				{
					iLocal_2182[61] = add_cover_point(func_409(15, 9), func_410(15, 9), 2, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[48] == 0)
				{
					iLocal_2182[48] = add_cover_point(func_409(15, 4), func_410(15, 4), 2, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[49] == 0)
				{
					iLocal_2182[49] = add_cover_point(func_409(15, 5), func_410(15, 5), 2, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[50] == 0)
				{
					iLocal_2182[50] = add_cover_point(func_409(15, 7), func_410(15, 7), 2, 0, 0, false);
					bVar0 = false;
				}
				if (&iLocal_2182[51] == 0)
				{
					iLocal_2182[51] = add_cover_point(func_409(15, 6), func_410(15, 6), 2, 0, 0, false);
					bVar0 = false;
				}
				if (does_entity_exist(iVar2442))
				{
					iVar5 = get_train_carriage(iVar2442, 5);
					iVar6 = get_train_carriage(iVar2442, 4);
					if (does_entity_exist(iVar5))
					{
						if (&iLocal_2182[32] == 0)
						{
							iLocal_2182[32] = _0x59872ea4cbd11c56(iVar5, get_offset_from_entity_given_world_coords(iVar5, func_409(2, 20)), (get_entity_heading(iVar5) - 45f), 2, 0, 0, 0);
							bVar0 = false;
						}
						if (&iLocal_2182[33] == 0)
						{
							iLocal_2182[33] = _0x59872ea4cbd11c56(iVar5, get_offset_from_entity_given_world_coords(iVar5, func_409(15, 32)), (get_entity_heading(iVar5) - 45f), 2, 0, 0, 0);
							bVar0 = false;
						}
						if (&iLocal_2182[34] == 0)
						{
							iLocal_2182[34] = _0x59872ea4cbd11c56(iVar6, get_offset_from_entity_given_world_coords(iVar6, func_409(2, 21)), (get_entity_heading(iVar6) - 45f), 2, 0, 0, 0);
							bVar0 = false;
						}
						if (&iLocal_2182[35] == 0)
						{
							iLocal_2182[35] = _0x59872ea4cbd11c56(iVar6, get_offset_from_entity_given_world_coords(iVar6, func_409(15, 30)), (get_entity_heading(iVar6) - 45f), 2, 0, 0, 0);
							bVar0 = false;
						}
						if (&iLocal_2182[36] == 0)
						{
							iLocal_2182[36] = _0x59872ea4cbd11c56(iVar5, get_offset_from_entity_given_world_coords(iVar5, func_409(2, 22)), (get_entity_heading(iVar5) - 45f), 2, 0, 0, 0);
							bVar0 = false;
						}
						if (&iLocal_2182[37] == 0)
						{
							iLocal_2182[37] = _0x59872ea4cbd11c56(iVar5, get_offset_from_entity_given_world_coords(iVar5, func_409(15, 31)), (get_entity_heading(iVar5) - 45f), 2, 0, 0, 0);
							bVar0 = false;
						}
						if (&iLocal_2182[38] == 0)
						{
							iLocal_2182[38] = _0x59872ea4cbd11c56(iVar5, get_offset_from_entity_given_world_coords(iVar5, func_409(2, 23)), (get_entity_heading(iVar5) - 45f), 2, 0, 0, 0);
							bVar0 = false;
						}
						if (bVar0 == 1)
						{
							vVar7 = { get_scripted_cover_point_coords(&(iLocal_2182[32])) };
							vVar7 = { get_scripted_cover_point_coords(&(iLocal_2182[34])) };
							vVar7 = { get_scripted_cover_point_coords(&(iLocal_2182[36])) };
							vVar7 = { get_scripted_cover_point_coords(&(iLocal_2182[38])) };
						}
					}
					else
					{
						bVar0 = false;
					}
					return bVar0;
				}
				break;
		}
	}
	else
	{
		remove_all_cover_blocking_areas();
		iLocal_1756 = 0;
		while (iVar1752 < 62)
		{
			remove_cover_point(&(iLocal_2182[iVar1752]));
			iLocal_2182[iVar1752] = 0;
			iLocal_1756 = iVar1752 + 1;
		}
		return true;
	}
	return false;
}

void func_176(bool bParam0)
{
	if (bParam0)
	{
		iLocal_1756 = 0;
		while (iVar1753 < 5)
		{
			if (iVar1753 == 0)
			{
				iVar0 = _create_volume_box_with_custom_name(func_409(3, 14), 0f, 0f, 0f, 2f, 2f, 2f, "NBD1SBIVOLUME_HORSEHITCH");
			}
			else if (iVar1753 == 1)
			{
				iVar0 = _create_volume_box_with_custom_name(2637.075f, -1280.437f, 56.22042f, 0f, 0f, 24.51281f, 171.102f, 236.8125f, 31.64166f, "NBD1SBIVOLUME_BANK");
			}
			else if (iVar1753 == 2)
			{
				iVar0 = _create_volume_box_with_custom_name(2664.15f, -1410.096f, 46.9318f, 0f, 0f, -63.17642f, 27.84854f, 74.36714f, 20f, "NBD1SBIVOLUME_ROADSIDEPARKING");
			}
			else if (iVar1753 == 3)
			{
				iVar0 = _create_volume_box_with_custom_name(2769.661f, -1441.798f, 46.56796f, 0f, 0f, -128.8285f, 273.314f, 172.3245f, 40f, "NBD1SBIVOLUME_DOCKS");
			}
			else if (iVar1753 == 4)
			{
				iVar0 = _create_volume_box_with_custom_name(2766.105f, -1504.33f, 46.61039f, 0f, 0f, 30.03955f, 62.68678f, 122.5938f, 10.88696f, "NBD1SBIVOLUME_DOCKS_PIER");
			}
			if (_does_volume_exist(iVar0))
			{
				uLocal_2436[iVar1753] = func_480(iVar0, 0, 0, 0);
			}
			iLocal_1756 = iVar1753 + 1;
		}
	}
	else
	{
		iLocal_1756 = 0;
		while (iVar1753 < 5)
		{
			remove_scenario_blocking_area(&(uLocal_2436[iVar1753]), false);
			iLocal_1756 = iVar1753 + 1;
		}
	}
}

void func_177(bool bParam0)
{
	if (bParam0)
	{
		iLocal_1756 = 0;
		while (iVar1753 < 3)
		{
			_0x19c7567d2f2287d6(&(uLocal_2428[iVar1753]), 7);
			iLocal_1756 = iVar1753 + 1;
		}
	}
	else
	{
		iLocal_1756 = 0;
		while (iVar1753 < 3)
		{
			_0x2c87c3e1c7b96ee2(&(uLocal_2428[iVar1753]));
			iLocal_1756 = iVar1753 + 1;
		}
	}
}

void func_178(bool bParam0)
{
	if (bParam0)
	{
	}
	else if (get_is_waypoint_recording_loaded(sVar1880))
	{
		use_waypoint_recording_as_assisted_movement_route(sVar1880, 0, 1065353216, 1056964608, 1);
	}
	func_481(0);
	func_482(0);
}

void func_179()
{
	iVar0 = func_483(-1828437268);
	if (!_0x113857d66a9cabe6(iVar0))
	{
		_0xbfcb17895bb99e4e(iVar0, 1);
	}
}

void func_180()
{
	if (does_entity_exist(iVar2442))
	{
		delete_vehicle(&iLocal_2444);
	}
	if (does_entity_exist(iVar2443))
	{
		delete_vehicle(&iLocal_2445);
	}
	set_random_trains(true);
	func_39(1);
	func_484(&(Local_14.f_3), 0);
	func_484(&(Local_14.f_80), 0);
	func_484(&(Local_14.f_172), 0);
	func_485();
}

void func_181()
{
	func_486(&iLocal_2248);
	func_487(&iLocal_2250);
	func_487(&iLocal_2254);
	func_487(&iLocal_2261);
	func_487(&iLocal_2269);
	func_487(&iLocal_2299);
	func_487(&iLocal_2302);
}

void func_182()
{
	func_488();
	func_489();
	func_490();
	func_491();
	func_492(0);
}

void func_183()
{
	if (does_entity_exist(iVar2549))
	{
		delete_object(&iLocal_2551);
	}
}

void func_184()
{
	func_493(0);
	func_494(-928815382);
	func_494(-645247737);
	func_203(1376646519, 1, 0);
}

void func_185()
{
	if (func_195(iVar1758, 524288))
	{
		_0x0e71c80fa4ec8147("overcastdark", false);
	}
}

void func_186()
{
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (_does_anim_scene_exist(&(uLocal_1769[iVar0])))
		{
			_delete_anim_scene(&(uLocal_1769[iVar0]));
		}
		iVar0++;
	}
}

void func_187(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = func_33(cParam0);
		if (!func_495(cParam0))
		{
			if (iVar0 == iLocal_224)
			{
				if (!func_495(cParam0))
				{
					if (!func_195(iVar1755, 512))
					{
						_set_weather_type_transition(1632247697, 1500834021, 0.63f, 1);
						func_408(&uLocal_1759, 512);
					}
				}
				else if (!func_195(iVar1757, 67108864))
				{
					_set_weather_type(1500834021, true, true, false, 0f, false);
				}
			}
			if (iVar0 > iLocal_224 && iVar0 < iLocal_230)
			{
				if (!func_195(iVar1755, 512))
				{
					_set_weather_type_transition(1632247697, 1500834021, 0.63f, 1);
					func_408(&uLocal_1759, 512);
				}
			}
			if (iVar0 >= iLocal_230 && iVar0 < iLocal_232)
			{
				if (!func_195(iVar1755, 2048))
				{
					_set_weather_type_transition(1632247697, 1500834021, 0.45f, 1);
					func_408(&uLocal_1759, 2048);
				}
			}
			if (iVar0 == iLocal_232 || iVar0 == iLocal_233)
			{
				if (func_162(cParam0, func_33(cParam0)) == 5)
				{
					if (!func_195(iVar1755, 1024))
					{
						_set_weather_type(1500834021, true, true, true, 10f, false);
						func_408(&uLocal_1759, 1024);
					}
				}
			}
			if (iVar0 == iLocal_234 || iVar0 == iLocal_235)
			{
				if (func_162(cParam0, func_33(cParam0)) == 5)
				{
					_set_weather_type(-1721991356, true, true, false, 0f, false);
				}
			}
		}
	}
	else
	{
		clear_weather_type_persist();
	}
}

void func_188(char[4] cParam0)
{
	iVar0 = get_entity_model(func_277(cParam0));
	if (func_195(iVar1755, 16777216))
	{
		remove_vehicle_asset(iVar0);
	}
}

void func_189()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (_does_scenario_point_exist(&(Local_724[iVar0])))
		{
			_delete_scenario_point(&(Local_724[iVar0]));
		}
		iVar0++;
	}
}

void func_190()
{
	iLocal_1756 = 0;
	while (iVar1754 <= 2)
	{
		if (_does_scenario_point_exist(Local_1494[iVar1754]->f_26))
		{
			_delete_scenario_point(Local_1494[iVar1754]->f_26);
		}
		iLocal_1756 = iVar1754 + 1;
	}
}

void func_191()
{
	func_247();
	func_249();
	func_169();
}

void func_192()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_496(&(Local_1045[iVar0]->f_1));
		iVar0++;
	}
}

void func_193(bool bParam0)
{
	func_497(5, bParam0);
}

void func_194(bool bParam0)
{
	func_499(func_498(0), bParam0);
}

bool func_195(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_196(int iParam0, int iParam1)
{
	func_500(iParam0, iParam1);
}

void func_197()
{
	iVar0 = 955;
	iLocal_1756 = 0;
	while (iVar1754 < iVar0)
	{
		if (func_501(iVar1754))
		{
			func_199(iVar1754);
		}
		iLocal_1756 = iVar1754 + 1;
	}
}

void func_198()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1934765->f_275[iVar0] == get_id_of_this_thread())
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + Global_1934765->f_275[iVar0]->f_1);
			Global_1934765->f_275[iVar0] = 0;
			Global_1934765->f_275[iVar0]->f_1 = 0;
			func_502();
			return;
		}
		iVar0++;
	}
}

int func_199(int iParam0)
{
	if (!func_501(iParam0))
	{
		return 0;
	}
	if (!func_504(func_503(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_505(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_505(iParam0));
	return 1;
}

void func_200()
{
	func_506(128);
}

void func_201(char[4] cParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(bParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(bParam1) && func_507(get_ped_index_from_entity_index(bParam1)));
	if (bVar0)
	{
		iVar1 = func_508(get_ped_index_from_entity_index(bParam1));
	}
	if (is_entity_a_ped(bParam1))
	{
		iVar2 = get_ped_index_from_entity_index(bParam1);
		if (bVar0)
		{
			func_509(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_510(cParam0, bParam1) && does_blip_exist(get_blip_from_entity(bParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(bParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(bParam1), 231194138);
		}
		else
		{
			func_511(bParam1);
		}
	}
	if (func_510(cParam0, bParam1))
	{
		func_512(cParam0, bParam1, 1024);
		if (bParam2)
		{
			func_513(cParam0, bParam1, 128);
		}
		else
		{
			func_512(cParam0, bParam1, 128);
		}
		if (func_514(cParam0, bParam1, &iVar3))
		{
			func_515(cParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_516(iVar1);
	}
}

void func_202()
{
	func_517(7);
}

void func_203(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_518(1497516462);
			func_519(2016141805);
			func_519(1010885152);
			func_519(-502324015);
			break;
		case 2016141805:
			func_519(1497516462);
			func_518(2016141805);
			func_519(1010885152);
			func_519(-502324015);
			break;
		case 1010885152:
			func_519(1497516462);
			func_519(2016141805);
			func_518(1010885152);
			func_519(-502324015);
			break;
		case -502324015:
			func_519(1497516462);
			func_519(2016141805);
			func_519(1010885152);
			func_518(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_519(-538889627);
			func_519(-538880323);
			func_519(-1056767524);
			func_518(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_520();
			func_518(iParam0);
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
			func_521();
			func_518(iParam0);
			break;
		case 2019386373:
			func_519(-664252410);
			func_519(2109952320);
			func_518(2019386373);
			break;
		case -664252410:
			func_519(2019386373);
			func_519(2109952320);
			func_518(-664252410);
			break;
		case 2109952320:
			func_519(2019386373);
			func_519(-664252410);
			func_518(2109952320);
			break;
		case -1674179981:
			func_519(-1835851517);
			func_519(-1838352012);
			func_518(-1674179981);
			break;
		case -1835851517:
			func_519(-1674179981);
			func_519(-1838352012);
			func_518(-1835851517);
			break;
		case -1838352012:
			func_519(-1674179981);
			func_519(-1835851517);
			func_518(-1838352012);
			break;
		case -1717960576:
			func_519(210001842);
			func_518(-1717960576);
			break;
		case 210001842:
			func_519(-1717960576);
			func_518(210001842);
			break;
		case -150493654:
			func_519(-1271608261);
			func_519(1846061697);
			func_519(-1145519186);
			func_518(-150493654);
			break;
		case -1271608261:
			func_519(-150493654);
			func_519(1846061697);
			func_519(-1145519186);
			func_518(-1271608261);
			break;
		case 1846061697:
			func_519(-150493654);
			func_519(-1271608261);
			func_519(-1145519186);
			func_518(1846061697);
			break;
		case -1145519186:
			func_519(-150493654);
			func_519(-1271608261);
			func_519(1846061697);
			func_518(-1145519186);
			break;
		case 1766284049:
			func_519(280705402);
			func_519(1926308480);
			func_518(1766284049);
			break;
		case 280705402:
			func_519(1766284049);
			func_519(1926308480);
			func_518(280705402);
			break;
		case 1926308480:
			func_519(1766284049);
			func_519(280705402);
			func_518(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_519(439465264);
				func_518(1609506757);
			}
			else
			{
				func_519(1609506757);
				func_519(439465264);
			}
			break;
		case 439465264:
			if (func_522(1609506757))
			{
				if (bParam1)
				{
					func_518(439465264);
				}
				else
				{
					func_519(439465264);
				}
			}
			break;
		case 1822001510:
			func_519(-1612662716);
			func_518(1822001510);
			break;
		case -1612662716:
			func_519(1822001510);
			func_518(-1612662716);
			break;
		case 1306158345:
			func_519(1952610440);
			func_519(-223469678);
			func_519(-404698347);
			func_519(1517904467);
			func_518(1306158345);
			break;
		case 1952610440:
			func_519(1306158345);
			func_519(-223469678);
			func_519(-404698347);
			func_519(1517904467);
			func_518(1952610440);
			break;
		case -223469678:
			func_519(1306158345);
			func_519(1952610440);
			func_519(-404698347);
			func_519(1517904467);
			func_518(-223469678);
			break;
		case -404698347:
			func_519(1306158345);
			func_519(1952610440);
			func_519(-223469678);
			func_519(1517904467);
			func_518(-404698347);
			break;
		case 1517904467:
			func_519(1306158345);
			func_519(1952610440);
			func_519(-223469678);
			func_519(-404698347);
			func_518(1517904467);
			break;
		case 1376646519:
			func_519(931649776);
			func_519(-434590080);
			func_519(1743048395);
			func_519(449774763);
			func_518(1376646519);
			break;
		case 931649776:
			func_519(1376646519);
			func_519(-434590080);
			func_519(1743048395);
			func_519(449774763);
			func_518(931649776);
			break;
		case -434590080:
			func_519(1376646519);
			func_519(931649776);
			func_519(1743048395);
			func_519(449774763);
			func_518(-434590080);
			break;
		case 1743048395:
			func_519(1376646519);
			func_519(931649776);
			func_519(-434590080);
			func_519(449774763);
			func_518(1743048395);
			break;
		case 449774763:
			func_519(1376646519);
			func_519(931649776);
			func_519(-434590080);
			func_519(1743048395);
			func_518(449774763);
			break;
		case -1414537028:
			func_519(38162571);
			func_519(1350391819);
			func_519(54073871);
			func_518(-1414537028);
			break;
		case 38162571:
			func_519(-1414537028);
			func_519(1350391819);
			func_519(54073871);
			func_518(38162571);
			break;
		case 1350391819:
			func_519(-1414537028);
			func_519(38162571);
			func_519(54073871);
			func_518(1350391819);
			break;
		case 54073871:
			func_519(-1414537028);
			func_519(38162571);
			func_519(1350391819);
			func_518(54073871);
			break;
		case 198200492:
			func_518(198200492);
			func_519(-1124061431);
			func_519(52706132);
			func_519(-259123672);
			break;
		case -1124061431:
			func_519(198200492);
			func_518(-1124061431);
			func_519(52706132);
			func_519(-259123672);
			break;
		case 52706132:
			func_519(198200492);
			func_519(-1124061431);
			func_518(52706132);
			func_519(-259123672);
			break;
		case -259123672:
			func_519(198200492);
			func_519(-1124061431);
			func_519(52706132);
			func_518(-259123672);
			break;
		case -919512195:
			func_518(-919512195);
			func_519(-1925798111);
			func_519(420709909);
			func_519(1703426636);
			break;
		case -1925798111:
			func_518(-1925798111);
			func_519(-919512195);
			func_519(420709909);
			func_519(1703426636);
			break;
		case 420709909:
			func_518(420709909);
			func_519(-919512195);
			func_519(-1925798111);
			func_519(1703426636);
			break;
		case 1703426636:
			func_518(1703426636);
			func_519(-919512195);
			func_519(-1925798111);
			func_519(420709909);
			break;
		case -1223121209:
			func_518(-1223121209);
			func_519(630808005);
			break;
		case 630808005:
			func_518(630808005);
			func_519(-1223121209);
			break;
		case 1453909576:
			func_518(1453909576);
			func_519(1643531967);
			break;
		case 1643531967:
			func_518(1643531967);
			func_519(1453909576);
			break;
		case 0:
			func_518(0);
			func_519(473295046);
			func_519(-1738165526);
			break;
		case 473295046:
			func_518(473295046);
			func_519(0);
			func_519(-1738165526);
			break;
		case -1738165526:
			func_518(-1738165526);
			func_519(0);
			func_519(473295046);
			break;
		case 932909855:
			func_518(932909855);
			func_519(2051822093);
			break;
		case 2051822093:
			func_518(2051822093);
			func_519(932909855);
			break;
		case 405586984:
			func_518(405586984);
			func_519(1509509592);
			func_519(-959357075);
			func_519(-1311865656);
			break;
		case 1509509592:
			func_518(1509509592);
			func_519(405586984);
			func_519(-959357075);
			func_519(-1311865656);
			break;
		case -959357075:
			func_518(-959357075);
			func_519(1509509592);
			func_519(405586984);
			func_519(-1311865656);
			break;
		case -1311865656:
			func_518(-1311865656);
			func_519(1509509592);
			func_519(-959357075);
			func_519(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_518(-524145696);
			}
			else
			{
				func_519(-524145696);
			}
			func_519(1626481264);
			func_519(282809459);
			break;
		case 282809459:
			func_518(282809459);
			func_519(1626481264);
			func_519(-524145696);
			break;
		case 1626481264:
			func_518(1626481264);
			func_519(-524145696);
			func_519(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_518(885203519);
			}
			else
			{
				func_519(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_518(-1080627546);
			}
			else
			{
				func_519(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_522(iParam0))
				{
					func_518(iParam0);
				}
			}
			else if (func_522(iParam0))
			{
				func_519(iParam0);
			}
			break;
	}
}

int func_204(int iParam0)
{
	return iParam0;
}

void func_205(int iParam0)
{
	if (!func_523(iParam0))
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

bool func_206(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_207(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_208(int iParam0)
{
	iVar0 = func_313(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_209(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_211(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

int func_210(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_211(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_524(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_212(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	return func_526(func_525(iParam0));
}

void func_213(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_20() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_214(int iParam0, bool bParam1, bool bParam2)
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
		if (func_527())
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
		iVar0 = func_289(&(Global_1898164->f_1[0]));
		if (func_290(iVar0) && func_318((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_207(&(Global_1898164->f_1[0])))
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

bool func_215(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_216(int iParam0)
{
	switch (func_212(iParam0))
	{
		case 1:
			iVar0 = func_289(iParam0);
			return func_528(iVar0);
		case 8:
			iVar1 = func_289(iParam0);
			if (func_318((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_529(iVar1);
			}
			break;
	}
	return -1;
}

void func_217(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_20() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_530(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_531();
		Global_1898077->f_9 = func_532(Global_1894899->f_2);
		func_533(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_218()
{
	if (!func_344((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_344((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_344((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_344((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_344((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_344((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_344((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_219(int iParam0, int iParam1)
{
	if (!func_207(iParam0))
	{
		return;
	}
	func_534(iParam0, iParam1);
}

int func_220(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_221(bool bParam0)
{
	if (!bParam0 && func_522(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_222(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_223(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_220(0) != iParam0)
	{
		return;
	}
	if (func_535(iParam0))
	{
		if (bParam1)
		{
			func_536(-525676072);
		}
		else
		{
			func_537(-525676072);
		}
	}
}

int func_224(int iParam0)
{
	return func_539(func_538(iParam0));
}

void func_225(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_226(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_227(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_228(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_229()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_230()
{
	return func_540(_0xc17f69e1418cd11f(3));
}

bool func_231()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_232(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0];
}

int func_233(int iParam0, int iParam1)
{
	if (!func_541(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_542(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_234(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_235(char* sParam0, bool bParam1)
{
	if (func_234(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_543(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_543(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_543(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_543(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_543(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_543(sParam0, 1);
		return true;
	}
	func_543(sParam0, 1);
	return false;
}

bool func_236(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_237(var uParam0)
{
	func_544(uParam0, 0f);
}

int func_238(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_545(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_546() - round((uParam0->f_1 * 1000f)));
}

void func_239(bool bParam0, bool bParam1)
{
	if (((is_weapon_valid(Global_1935630->f_44) && _is_weapon_sniper(Global_1935630->f_44)) && get_ped_reset_flag(Global_35, 0)) && _0xa24c1d341c6e0d53(1, 1, 1))
	{
		_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -160924582 && get_ped_reset_flag(Global_35, 0))
	{
		_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -1016714371)
	{
		func_547(0);
		_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		return;
	}
	if (bParam0)
	{
		animpostfx_stop_all();
	}
	if (bParam1)
	{
		_trigger_mission_failed_cam();
	}
}

struct<4> func_240(int iParam0, int iParam1)
{
	return func_548(iParam0, iParam1);
}

void func_241(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_242(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_9;
}

void func_243(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_212(iParam0) == 1)
	{
		cVar0 = func_110(func_549(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_212(iParam0) == 8)
	{
		cVar0 = func_551(func_550(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_552(1, 1);
	func_553(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_228(1f);
}

void func_244(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_543(sParam0, 2);
}

void func_245(int iParam0, int iParam1)
{
	if (!func_554(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_246(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_247()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_248()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_249()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_250()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_251()
{
	return func_555(get_id_of_this_thread());
}

void func_252(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_556(bParam0);
}

void func_253()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_254(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_255()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_256(var uParam0)
{
	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_849 = { Var1 };
	StringCopy(&(uParam0->f_849), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_865)
	{
		*uParam0->f_865[iVar0] = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1912)
	{
		*uParam0->f_1912[iVar0] = { Var76 };
		iVar0++;
	}
	uParam0->f_2073 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1406)
	{
		*uParam0->f_1406[iVar0] = { Var35 };
		*uParam0->f_1735[iVar0] = { Var86 };
		iVar0++;
	}
	uParam0->f_2074 = -1;
	uParam0->f_2155 = { Global_36 };
	uParam0->f_2158 = 0;
	uParam0->f_2159 = 0;
	uParam0->f_2078 = -1;
	uParam0->f_2079 = -1f;
	uParam0->f_2054 = 0;
	uParam0->f_2056 = 0;
	uParam0->f_2056.f_1 = 0;
	uParam0->f_2293 = 0;
	if (_0x927b810e43e99932(&(uParam0->f_2082)))
	{
		_0x0a5a4f1979abb40e(&(uParam0->f_2082));
	}
}

void func_257(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_258(int iParam0)
{
	if (!func_557(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_259()
{
	func_558(64);
}

void func_260()
{
	Global_1310750->f_16072 = 0;
}

bool func_261()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_262(int iParam0)
{
	return func_263(23, iParam0);
}

bool func_263(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_559(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_560())
	{
		return func_559(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_559(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_264(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_265(int iParam0)
{
	if (!func_264(iParam0))
	{
		return false;
	}
	return func_268(iParam0, 8);
}

void func_266(int iParam0, int iParam1)
{
	if (!func_264(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_267(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_268(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_269(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_270()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_268(iVar1, 1))
		{
			if (does_script_exist(&((*Global_1888801)[iVar1]->f_26)))
			{
				set_script_as_no_longer_needed(&((*Global_1888801)[iVar1]->f_26));
			}
		}
		if ((*Global_1888801)[iVar1]->f_9 != 0)
		{
			if (is_thread_active((*Global_1888801)[iVar1]->f_9, false))
			{
				if (func_20() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1888801)[iVar1]->f_9, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1888801)[iVar1]->f_9))
				{
					_0x7de4643157ad646c((*Global_1888801)[iVar1]->f_9);
				}
			}
			else if (func_268(iVar1, 2))
			{
				if (func_20() == -1)
				{
					force_cleanup_for_all_threads_with_this_name(&((*Global_1888801)[iVar1]->f_26), 523);
				}
				else
				{
					_0x7423f7835770f619(get_hash_key(&((*Global_1888801)[iVar1]->f_26)));
				}
			}
			if (!_does_thread_exist((*Global_1888801)[iVar1]->f_9))
			{
				(*Global_1888801)[iVar1]->f_9 = 0;
				func_305(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_271(var uParam0)
{
	if (func_561(uParam0, 1) || func_561(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_272(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_273(struct<2> Param0)
{
	if (!func_272(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_274(struct<2> Param0, int iParam2)
{
	if (!func_272(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_275(int iParam0)
{
	if (!func_562(iParam0))
	{
		return false;
	}
	if (!func_563(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_276(char[4] cParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_562(iParam1))
	{
		return;
	}
	if (!func_275(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_22(cParam0) != 0 && func_154(cParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (does_entity_exist(bParam2))
	{
		func_564(cParam0, bParam2);
		func_565(bParam2);
	}
	func_509(iParam1);
	func_566(iParam1, 0);
	func_567(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

bool func_277(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_278(bool bParam0)
{
	if (bParam0 == 0)
	{
		return -1;
	}
	if (!does_entity_exist(bParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (bParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_279(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_3;
}

void func_280(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_568(iParam0);
	if (func_569(iParam0))
	{
		if (func_279(iParam0) != iVar0)
		{
			return;
		}
	}
	func_570(iParam0);
	func_571(iParam0);
	bVar1 = func_232(iParam0);
	if (does_entity_exist(bVar1))
	{
		if (!is_entity_dead(bVar1) && !is_ped_injured(bVar1))
		{
		}
		if (!_0x88ad6cc10d8d35b2(bVar1))
		{
			set_entity_as_mission_entity(bVar1, true, true);
		}
		iVar2 = get_entity_model(bVar1);
		if (_0xaa9f048dcf69b6dc(iVar2))
		{
			if (!func_572(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_573(iParam0);
	}
}

void func_281(bool bParam0, bool bParam1)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	if (is_entity_dead(bParam0) || is_ped_injured(bParam0))
	{
		return;
	}
	if (!func_574(bParam0))
	{
		return;
	}
	iVar0 = func_278(bParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_568(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_279(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_569(iVar0))
		{
			return;
		}
	}
	func_575(iVar0);
	set_ped_keep_task(bParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(bParam0))
		{
			set_entity_as_mission_entity(bParam0, true, true);
		}
	}
}

void func_282(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_283(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_284(int iParam0, int iParam1)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 - ((*Global_1900383)[iParam0]->f_24 && iParam1));
}

void func_285()
{
	if (func_576(0))
	{
		func_577(0);
	}
	if (func_576(1))
	{
		func_577(1);
	}
	if (func_576(5))
	{
		func_577(5);
	}
	if (func_576(6))
	{
		func_570(6);
	}
}

struct<2> func_286(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_287(int iParam0)
{
	Var0 = { func_286(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_288(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_289(int iParam0)
{
	if (!func_207(iParam0))
	{
		return -1;
	}
	return func_578(func_525(iParam0));
}

bool func_290(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_291(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_292(int iParam0, bool bParam1)
{
	iVar0 = func_579(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_580(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_580(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_580(iParam0)))
			{
				_uilog_remove_entry(2, func_580(iParam0));
			}
		}
	}
	func_581(iParam0, 4);
	func_581(iParam0, 8);
	func_581(iParam0, 16);
}

void func_293(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_290(iVar0))
		{
			if (func_291(iVar0, 4))
			{
				func_294(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_294(int iParam0, bool bParam1)
{
	if (!func_291(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_579(iParam0), func_580(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_579(iParam0), func_580(iParam0), 2, "");
		func_582(iParam0, 16);
	}
	else
	{
		if (func_291(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_579(iParam0), func_580(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_579(iParam0), func_580(iParam0), 0, "");
		}
		func_581(iParam0, 16);
	}
}

void func_295(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_291(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_579(iParam0), func_580(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_291(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_579(iParam0), func_580(iParam0), 1, "");
		}
		func_582(iParam0, 8);
	}
	else
	{
		if (func_291(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_579(iParam0), func_580(iParam0), 0, "");
		}
		func_581(iParam0, 8);
	}
}

int func_296(char[4] cParam0)
{
	if (func_120(cParam0, 8388608))
	{
		return 2;
	}
	if (func_120(cParam0, 4194304))
	{
		return 4;
	}
	if (func_120(cParam0, 4))
	{
		return 1;
	}
	if (func_128(cParam0, 1) && func_82(32768))
	{
		return 3;
	}
	return 0;
}

void func_297(int iParam0, int iParam1)
{
	if (func_576(0))
	{
		if (func_583(0))
		{
			func_584(0);
		}
	}
	if (func_576(1))
	{
		if (func_583(1))
		{
			func_584(1);
		}
	}
}

void func_298(char[4] cParam0)
{
	if (func_120(cParam0, 1))
	{
		return;
	}
	if (is_entity_dead(cParam0->f_5411))
	{
		if (func_120(cParam0, 16))
		{
			func_58(cParam0, 0);
		}
		if (func_412(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_299(char[4] cParam0)
{
	return false;
	switch (cParam0->f_607)
	{
		case 11:
		case 12:
			return true;
	}
	return false;
}

void func_300(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_585(iParam0, sParam4, iParam5);
	}
	func_586(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_301(int iParam0)
{
	if (!func_264(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_302()
{
	return &Global_1899515;
}

void func_303(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_304(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (Global_23118[iParam0] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0] = (Global_1058888->f_40615[iParam0] || iParam1);
	}
}

void func_305(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_306(int iParam0)
{
	if (!func_264(iParam0))
	{
		return;
	}
	if (func_587(iParam0))
	{
		func_588(iParam0);
	}
	else
	{
		func_589(iParam0);
	}
}

int func_307(int iParam0)
{
	if (func_590(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_308(int iParam0)
{
	if (func_591(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_309(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return iParam1;
		case 3:
			return iParam1;
		case 11:
		case 12:
		case 13:
		case 14:
			return true;
		case 53:
			return true;
		case 24:
			return iParam1;
		case 23:
			return iParam1;
		case 21:
			return iParam1;
		case 26:
			return iParam1;
		case 35:
			return true;
		case 34:
			return iParam1;
		case 32:
			return iParam1;
		case 29:
			return true;
		case 31:
			return true;
		case 37:
			return iParam1;
		case 39:
			return iParam1;
		case 42:
			return iParam1;
		case 43:
			return iParam1;
		case 44:
			return iParam1;
		case 46:
			return iParam1;
		case 54:
			return true;
		case 50:
			return true;
		case 51:
			return iParam1;
		case 52:
			return true;
		case 49:
			return true;
		case 58:
			return iParam1;
		case 57:
			return true;
		case 59:
			return iParam1;
		default:
			break;
	}
	return false;
}

void func_310(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_592(Global_1310750[iVar0], iParam0))
		{
			if (!func_593(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_594(iVar0) < func_595(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_312(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_311(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_596();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

void func_312(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_597(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_313(int iParam0)
{
	if (!func_207(iParam0))
	{
		return -1;
	}
	return func_211(iParam0);
}

void func_314(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_315(bool bParam0, int iParam1)
{
	if (!bParam0 && func_522(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (_0x76cf93d4b416b288(752193127) < 2)
	{
		iVar0 = (_0x76cf93d4b416b288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	_0xf19706b1f8ffa88f(752193127, iVar0);
	func_221(bParam0);
	return 1;
}

void func_316()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_562(iVar17))
		{
			bVar18 = func_598(iVar17);
			if (does_entity_exist(bVar18))
			{
				Var0.f_14 = bVar18;
				Var0.f_3 = bVar18;
				_0x88bc5f4aef77fc4e(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_599(&(Global_1359489->f_55));
	if (func_600(1777191912, 1))
	{
		func_601(1777191912, 1, 0);
	}
}

void func_317(int iParam0)
{
	if (!func_207(iParam0))
	{
		return;
	}
	func_603(iParam0, (func_602(iParam0) + shift_left(1, 16)));
}

bool func_318(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_319()
{
	return func_604() > 0;
}

void func_320(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_605(-1032423150, iParam1);
			break;
		case 18:
			func_605(294066959, iParam1);
			func_605(-1925639563, iParam1);
			func_605(-378582304, iParam1);
			func_605(-338306437, iParam1);
			Jump @2198; //curOff = 388
			func_605(437270255, iParam1);
			Jump @2198; //curOff = 402
			func_605(-304000413, iParam1);
			func_605(-533612796, iParam1);
			func_605(48036954, iParam1);
			Jump @2198; //curOff = 438
			func_605(193108691, iParam1);
			func_605(491732588, iParam1);
			func_605(671962088, iParam1);
			func_606(1);
			Jump @2198; //curOff = 479
			func_605(-1836056650, iParam1);
			func_605(-754657922, iParam1);
			func_605(-1752355838, iParam1);
			func_605(-1375324510, iParam1);
			Jump @2198; //curOff = 526
			func_605(-514392105, iParam1);
			func_605(-822060246, iParam1);
			if (func_607(146))
			{
				func_605(1372748575, iParam1);
			}
			func_606(1);
			Jump @2198; //curOff = 576
			func_605(1991352213, iParam1);
			if (func_608() == 0)
			{
				func_605(1852488616, iParam1);
			}
			else
			{
				func_605(-9866350, iParam1);
			}
			Jump @2198; //curOff = 623
			func_605(863852599, iParam1);
			func_605(1228374935, iParam1);
			func_605(1517889050, iParam1);
			func_605(830657578, iParam1);
			func_605(1901354958, iParam1);
			Jump @2198; //curOff = 681
			func_605(-582805654, iParam1);
			func_605(250378940, iParam1);
			func_605(-2143265426, iParam1);
			Jump @2198; //curOff = 717
			func_605(-941494139, iParam1);
			func_605(1641489521, iParam1);
			Jump @2198; //curOff = 742
			func_605(-1829423531, iParam1);
			func_605(-1590504752, iParam1);
			func_605(1357221321, iParam1);
			Jump @2198; //curOff = 778
			func_605(-1037992610, iParam1);
			func_605(-1286414399, iParam1);
			func_606(0);
			Jump @2198; //curOff = 808
			func_605(-1014460309, iParam1);
			func_605(-1030502825, iParam1);
			Jump @2198; //curOff = 833
			func_605(479388090, iParam1);
			func_605(-1396342239, iParam1);
			func_605(-619618632, iParam1);
			Jump @2198; //curOff = 869
			func_605(1193561641, iParam1);
			Jump @2198; //curOff = 883
			func_605(1363960851, iParam1);
			Jump @2198; //curOff = 897
			func_605(-1232453926, iParam1);
			func_605(-882833584, iParam1);
			Jump @2198; //curOff = 922
			func_605(2023205767, iParam1);
			Jump @2198; //curOff = 936
			func_605(-2135286513, iParam1);
			if (func_608() == 0)
			{
				func_605(33799444, iParam1);
			}
			else
			{
				func_605(-161343203, iParam1);
			}
			Jump @2198; //curOff = 983
			func_605(841639693, iParam1);
			func_605(358952323, iParam1);
			Jump @2198; //curOff = 1008
			func_605(852538149, iParam1);
			func_605(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_605(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_605(1116039310, iParam1);
			}
			Jump @2198; //curOff = 1074
			func_605(107633428, iParam1);
			func_605(335902282, iParam1);
			func_605(575673055, iParam1);
			func_605(-425944207, iParam1);
			Jump @2198; //curOff = 1121
			func_605(-1941530250, iParam1);
			func_605(1399269304, iParam1);
			func_605(1839684664, iParam1);
			func_605(923168503, iParam1);
			func_605(-1485078322, iParam1);
			Jump @2198; //curOff = 1179
			func_605(574995900, iParam1);
			func_605(-1691275407, iParam1);
			func_605(-1725307861, iParam1);
			Jump @2198; //curOff = 1215
			func_605(-2108383238, iParam1);
			func_605(-1321828931, iParam1);
			func_605(-1632118592, iParam1);
			func_605(334938948, iParam1);
			Jump @2198; //curOff = 1262
			func_605(115823701, iParam1);
			func_605(-1896939736, iParam1);
			func_605(-1830746356, iParam1);
			func_605(-1235169781, iParam1);
			func_606(0);
			Jump @2198; //curOff = 1314
			func_605(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_605(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_605(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_605(-384176140, iParam1);
			}
			Jump @2198; //curOff = 1391
			func_605(1056132658, iParam1);
			Jump @2198; //curOff = 1405
			if (&Global_1357515 == -1)
			{
				func_605(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_605(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_605(-1374849484, iParam1);
			}
			Jump @2198; //curOff = 1471
			func_605(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_605(217772674, iParam1);
			}
			else
			{
				func_605(2071798160, iParam1);
			}
			if (func_609(51))
			{
				func_605(-792802286, iParam1);
			}
			Jump @2198; //curOff = 1538
			func_605(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_605(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_605(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_605(1402120602, iParam1);
			}
			Jump @2198; //curOff = 1615
			func_605(-1661934591, iParam1);
			Jump @2198; //curOff = 1629
			func_605(-1713759426, iParam1);
			Jump @2198; //curOff = 1643
			func_605(-314799932, iParam1);
			func_605(-462260432, iParam1);
			func_605(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_605(345256028, iParam1);
				func_605(-1635084094, iParam1);
			}
			else
			{
				func_605(114267347, iParam1);
			}
			Jump @2198; //curOff = 1721
			func_605(615304157, iParam1);
			Jump @2198; //curOff = 1735
			func_605(415434835, iParam1);
			Jump @2198; //curOff = 1749
			func_605(1373465877, iParam1);
			if (func_344((*Global_1347702)[9]->f_15, 1))
			{
				func_605(-2058273527, iParam1);
			}
			Jump @2198; //curOff = 1792
			func_605(451334985, iParam1);
			if (func_608() == 0)
			{
				func_605(-224150200, iParam1);
			}
			else
			{
				func_605(289012628, iParam1);
			}
			Jump @2198; //curOff = 1839
			if (func_608() == 0)
			{
				func_605(-41692120, iParam1);
			}
			else
			{
				func_605(1537840678, iParam1);
			}
			Jump @2198; //curOff = 1875
			func_605(1520478365, iParam1);
			Jump @2198; //curOff = 1889
			if (&Global_1357515 == -1)
			{
				func_605(1842132550, iParam1);
			}
			else
			{
				func_605(-785735240, iParam1);
			}
			func_605(-1605690566, iParam1);
			Jump @2198; //curOff = 1936
			func_605(-731367459, iParam1);
			func_605(224176585, iParam1);
			func_605(-14545580, iParam1);
			Jump @2198; //curOff = 1972
			func_605(1095274522, iParam1);
			Jump @2198; //curOff = 1986
			func_605(-572027988, iParam1);
			Jump @2198; //curOff = 2000
			func_605(1339307101, iParam1);
			func_605(2102267732, iParam1);
			Jump @2198; //curOff = 2025
			func_605(710102686, iParam1);
			Jump @2198; //curOff = 2039
			func_605(-1754368482, iParam1);
			func_605(-2071408557, iParam1);
			Jump @2198; //curOff = 2064
			func_605(-181334543, iParam1);
			Jump @2198; //curOff = 2078
			func_605(-2134669864, iParam1);
			func_605(-548289709, iParam1);
			func_605(-911271922, iParam1);
			func_605(-604455775, iParam1);
			Jump @2198; //curOff = 2125
			func_606(1);
			Jump @2198; //curOff = 2133
			if (func_355())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_605(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_605(-1478534115, iParam1);
			}
		}

bool func_321()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_322(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_605(-145926707, iParam1);
			func_605(-604922090, iParam1);
			func_605(-848690769, iParam1);
			break;
		case 1:
			func_605(-1477631591, iParam1);
			break;
		case 2:
			func_605(76112544, iParam1);
			break;
		case 9:
			func_605(1396404308, iParam1);
			func_605(-1357381228, iParam1);
			if (func_344((*Global_1835011)[69]->f_1, 1))
			{
				func_605(1902679064, iParam1);
			}
			else
			{
				func_605(-2146422425, iParam1);
			}
			break;
		case 22:
			func_605(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_605(-1934184559, iParam1);
				func_605(1281755988, iParam1);
			}
			else
			{
				func_605(-1745220872, iParam1);
				func_605(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_605(-1641504538, iParam1);
				func_605(-988014485, iParam1);
			}
			else if (func_607(26))
			{
				func_605(-343043950, iParam1);
				func_605(-640062214, iParam1);
			}
			else
			{
				func_605(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_605(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_605(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_605(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_605(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_605(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_605(1301690984, iParam1);
				}
			}
			else
			{
				func_605(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_605(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_605(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_605(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_605(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_605(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_605(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_605(-754570528, iParam1);
			}
			else
			{
				func_605(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_605(-2072125821, iParam1);
			}
			else
			{
				func_605(270040030, iParam1);
			}
			break;
		case 37:
			func_605(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_605(-505314737, iParam1);
				func_605(-1853052860, iParam1);
			}
			else
			{
				func_605(-1975624994, iParam1);
				func_605(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_605(1690231002, iParam1);
			}
			else
			{
				func_605(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_605(1225386280, iParam1);
			}
			else if (func_607(54))
			{
				func_605(-283235773, iParam1);
			}
			else
			{
				func_605(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_605(1355398007, iParam1);
			}
			else
			{
				func_605(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_605(574636806, iParam1);
			}
			else
			{
				func_605(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_605(821118338, iParam1);
			}
			else if (func_607(39))
			{
				func_605(846829260, iParam1);
			}
			else
			{
				func_605(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_378((*Global_1835011)[33]->f_1) == 1)
				{
					func_605(1422779093, iParam1);
				}
				else
				{
					func_605(-1769536986, iParam1);
				}
			}
			else
			{
				func_605(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_605(352134789, iParam1);
			}
			else if (func_607(43))
			{
				func_605(260723113, iParam1);
			}
			else
			{
				func_605(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_605(-457958799, iParam1);
			}
			else
			{
				func_605(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_607(41))
			{
				func_605(-546824600, iParam1);
			}
			else
			{
				func_605(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_605(1297261593, iParam1);
			}
			else
			{
				func_605(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_605(2068484886, iParam1);
			}
			else if (func_607(49))
			{
				func_605(-1489080639, iParam1);
				func_605(-2102244050, iParam1);
			}
			else
			{
				func_605(-1863040467, iParam1);
			}
			break;
		case 51:
			func_605(-2055943209, iParam1);
			break;
		case 58:
			if (func_344((*Global_1347702)[23]->f_15, 1))
			{
				func_605(1650066845, iParam1);
			}
			else
			{
				func_605(151370023, iParam1);
			}
			func_605(1426057961, iParam1);
			func_605(476379584, iParam1);
			break;
		case 59:
			func_605(-1638117866, iParam1);
			break;
		case 62:
			func_605(199541730, iParam1);
			break;
		case 63:
			func_605(1703485804, iParam1);
			func_605(-800449045, iParam1);
			break;
		case 65:
			func_605(-1678210868, iParam1);
			func_605(-1448238026, iParam1);
			func_605(-1200864845, iParam1);
			func_605(1473511536, iParam1);
			break;
		case 66:
			func_605(-1774490051, iParam1);
			func_605(-34645921, iParam1);
			func_605(174027075, iParam1);
			func_605(-1155999, iParam1);
			func_606(1);
			break;
		case 67:
			func_605(701612593, iParam1);
			func_605(-1069631343, iParam1);
			func_605(1673428882, iParam1);
			break;
		case 68:
			func_605(-739133286, iParam1);
			func_605(-2130089358, iParam1);
			func_605(2056190391, iParam1);
			func_605(1941753817, iParam1);
			func_606(0);
			break;
		case 70:
			func_605(-1217555753, iParam1);
			break;
		case 71:
			func_605(697048821, iParam1);
			break;
		case 73:
			func_605(-553148661, iParam1);
			break;
		case 75:
			func_605(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_605(1414263863, iParam1);
			}
			else
			{
				func_605(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_605(1835465936, iParam1);
				func_605(523715611, iParam1);
			}
			else if (func_607(78))
			{
				func_605(1420338873, iParam1);
			}
			else
			{
				func_605(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_605(10180941, iParam1);
			}
			else if (func_607(79))
			{
				func_605(768420635, iParam1);
			}
			else
			{
				func_605(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_605(-383601523, iParam1);
			}
			else
			{
				func_605(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_605(1606472408, iParam1);
			}
			else
			{
				func_605(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_605(-203571927, iParam1);
			}
			else
			{
				func_605(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_605(729886222, iParam1);
			}
			else
			{
				func_605(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_605(-714816362, iParam1);
			}
			else
			{
				func_605(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_605(-932932179, iParam1);
				func_605(-1458537240, iParam1);
			}
			else
			{
				func_605(-1764383885, iParam1);
				func_605(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_605(1741466706, iParam1);
			}
			else
			{
				func_605(1405815775, iParam1);
			}
			break;
		case 94:
			func_605(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_605(1905280979, iParam1);
			}
			else
			{
				func_605(-1966245299, iParam1);
			}
			func_605(721468880, iParam1);
			break;
		case 99:
			func_605(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_605(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_605(-1117781095, iParam1);
				}
				else
				{
					func_605(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_605(141494548, iParam1);
			}
			else
			{
				func_605(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_605(-369525697, iParam1);
			}
			else if (func_607(101))
			{
				func_605(1595015219, iParam1);
			}
			else
			{
				func_605(-321486961, iParam1);
			}
			break;
		case 103:
			func_605(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_605(793460477, iParam1);
				func_605(-1610242176, iParam1);
			}
			else if (func_607(103))
			{
				func_605(1830897187, iParam1);
			}
			else
			{
				func_605(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_605(1528309077, iParam1);
			}
			else if (func_607(104))
			{
				func_605(1864966105, iParam1);
			}
			else
			{
				func_605(-103336013, iParam1);
			}
			break;
		case 108:
			func_605(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_605(-1123227713, iParam1);
				func_605(-889574341, iParam1);
			}
			else
			{
				func_605(2065385917, iParam1);
				func_605(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_605(-887421691, iParam1);
			}
			else if (func_607(109))
			{
				func_605(-1318117949, iParam1);
			}
			else
			{
				func_605(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_605(284822762, iParam1);
				}
				else
				{
					func_605(-1425017554, iParam1);
				}
			}
			else if (func_607(110))
			{
				if (&Global_1357515 == 0)
				{
					func_605(553087292, iParam1);
				}
				else
				{
					func_605(-1766870331, iParam1);
					func_605(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_605(-1980598735, iParam1);
			}
			else
			{
				func_605(-442732098, iParam1);
				func_605(1955756409, iParam1);
			}
			break;
		case 115:
			func_605(394303528, iParam1);
			func_605(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_605(1182403394, iParam1);
			}
			else
			{
				func_605(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_605(924445424, iParam1);
			}
			else
			{
				func_605(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_605(430755273, iParam1);
				func_605(-1473879802, iParam1);
			}
			else
			{
				func_605(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_605(73885747, iParam1);
			}
			else if (func_607(117))
			{
				func_605(1559707913, iParam1);
			}
			else
			{
				func_605(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_605(-2103887972, iParam1);
			}
			else if (func_607(118))
			{
				func_605(-435828462, iParam1);
			}
			else
			{
				func_605(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_605(2054486196, iParam1);
			}
			else
			{
				func_605(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_605(-570086056, iParam1);
			}
			else if (func_607(121))
			{
				func_605(32337856, iParam1);
			}
			else
			{
				func_605(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_605(813493663, iParam1);
			}
			else if (func_607(122))
			{
				func_605(-2132763590, iParam1);
			}
			else
			{
				func_605(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_605(-66240572, iParam1);
				func_605(1563075046, iParam1);
			}
			else
			{
				func_605(-787011772, iParam1);
				func_605(-1523377438, iParam1);
			}
			break;
		case 127:
			func_605(61020800, iParam1);
			break;
		case 129:
			func_605(428985222, iParam1);
			break;
		case 131:
			func_605(-1393851036, iParam1);
			break;
		case 133:
			func_605(1559531342, iParam1);
			break;
		case 134:
			func_605(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_605(-1374407408, iParam1);
				}
				else
				{
					func_605(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_605(-472672138, iParam1);
				}
				else
				{
					func_605(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_605(-1678710489, iParam1);
			}
			else
			{
				func_605(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_605(1717582460, iParam1);
			}
			else
			{
				func_605(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_605(1568112362, iParam1);
				func_605(1388317526, iParam1);
			}
			else if (func_607(136))
			{
				func_605(-1597534828, iParam1);
				func_605(-1207918353, iParam1);
			}
			else
			{
				func_605(-1940891082, iParam1);
				func_605(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_605(448334530, iParam1);
				func_605(2145375502, iParam1);
			}
			else
			{
				func_605(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_605(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_605(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_605(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_605(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_605(-66616327, iParam1);
			}
			else
			{
				func_605(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_605(1862916706, iParam1);
			}
			else if (func_607(147))
			{
				func_605(675105199, iParam1);
			}
			else
			{
				func_605(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_605(174409701, iParam1);
			}
			else if (func_607(148))
			{
				func_605(-1730895475, iParam1);
			}
			else
			{
				func_605(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_605(1295237052, iParam1);
			}
			else if (func_607(149))
			{
				func_605(-788577684, iParam1);
			}
			else
			{
				func_605(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_323(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_212(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_549(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_378((*Global_1835011)[9]->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			iVar2 = func_289(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_289(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_324(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_610(iParam0);
	iVar3 = func_611(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_302();
				func_351(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_612(iParam0, 1);
			if (func_613(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_614(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_615(1, iParam0);
				}
				else
				{
					func_616(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_325(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

int func_326(int iParam0, int iParam1, int iParam2)
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

void func_327(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_328(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_617(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + get_game_timer()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (get_game_timer() + iVar0);
		}
	}
}

int func_329(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

bool func_330(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return true;
	}
	return false;
}

void func_331(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_618(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_619(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_620(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_621(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_620(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_332(int iParam0)
{
	if (!func_207(iParam0))
	{
		return -1;
	}
	return func_622(func_525(iParam0));
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_334()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_623(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_335(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	if (!func_625(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_626(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_627(iParam0, bParam2);
	iVar2 = 0;
	if (func_628(iParam0, 0, 0) == 0)
	{
		if (func_629(iParam0))
		{
			iVar5 = func_630(iParam0);
			iVar6 = func_631(iVar5);
			iVar7 = func_632(iVar6) + 1;
			func_633(iVar5);
			if (func_634(38))
			{
				func_342(483, 0);
			}
			else
			{
				func_342(482, 0);
			}
			if (iVar7 == func_635(iVar6))
			{
				func_335(func_636(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_419() && func_637(4))
				{
					if (func_419() && (func_638(38) || func_634(38)))
					{
						func_640(38, func_636(iVar6), 0, 0, func_639(), 0, -1, 0);
						func_641(2);
					}
					else
					{
						func_640(38, func_636(iVar6), 0, 0, func_639(), 0, -1, 0);
						func_641(1);
					}
				}
			}
			else if (func_419() && func_637(4))
			{
				if (func_419() && (func_638(38) || func_634(38)))
				{
					func_640(38, 0, 0, 0, func_639(), 0, -1, 0);
					func_641(2);
				}
				else
				{
					func_640(38, 0, 0, 0, func_639(), 0, -1, 0);
					func_641(1);
				}
			}
			if (func_419() && func_637(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_419() && (func_638(38) || func_634(38)))
					{
						func_642(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_642(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_643(iParam0) == -1037537535)
	{
		if ((!func_644(iParam0, 866047851) && !func_644(iParam0, -1979000645)) && !func_644(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_645(iParam0, 8388608) && !func_646(28))
	{
		func_647(28);
	}
	if (!bVar3)
	{
		if (func_644(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_648(iParam0) == -1447088266)
			{
				iVar1 = func_650(func_649(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_651(iVar1);
					}
					if (func_652(0) && func_653(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_654(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_651(iParam0);
					}
					if (func_652(0) && func_653(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_654(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_643(iParam0) == -427144552)
		{
			if (!func_655(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_643(iParam0) == 307971639 && func_656(iParam0))
		{
			if (!func_657(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_644(iParam0, 866047851))
		{
			func_658(iParam0);
		}
		else if (func_644(iParam0, 2000026003))
		{
			func_659(iParam0);
		}
		else if (func_644(iParam0, -103750053))
		{
			func_95(func_660(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_661(-717883113, 2091222383), iVar0);
		}
		else if (func_644(iParam0, -121341956) && !func_644(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_344((*Global_1835011)[4]->f_1, 1))
				{
					func_342(498, 0);
				}
			}
			if (func_644(iParam0, -2017733358) || func_644(iParam0, -1369131378))
			{
				func_662(iParam0);
			}
		}
		else if (func_644(iParam0, -136654233))
		{
			if (func_644(iParam0, -1021472396))
			{
			}
		}
		else if (func_644(iParam0, -1466706512) && func_644(iParam0, 1147021565))
		{
			func_342(484, 0);
		}
		else if (func_644(iParam0, 1147021565) && func_644(iParam0, -524514947))
		{
		}
		else if (func_644(iParam0, 554195525))
		{
		}
		else if (func_644(iParam0, 589988438))
		{
			if (func_663())
			{
				func_664(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_644(iParam0, 787083290) && func_644(iParam0, 949916894))
		{
			func_665(iParam0);
		}
		else if (func_644(iParam0, -1718133314))
		{
			func_666(iParam0);
		}
		else if (func_644(iParam0, -1738650224))
		{
			func_667(iParam0);
		}
		else if (func_644(iParam0, -1112814642) && func_644(iParam0, 949916894))
		{
			func_668(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_644(iParam0, 1841149704))
		{
			func_669();
		}
		else if (func_644(iParam0, 606799272))
		{
			func_670(iParam0, iParam1);
			func_671(iParam0);
		}
		else if (func_644(iParam0, -1112814642) && func_644(iParam0, -1697809989))
		{
			func_672(iParam0, 0, 0, 0);
		}
		else if (func_644(iParam0, -2017733358) || func_644(iParam0, -1369131378))
		{
			func_662(iParam0);
		}
		else if (func_644(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_673(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_644(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_364(215778062, 1, 0))
					{
						func_335(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_364(670273567, 1, 0))
					{
						func_335(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_364(-967317137, 1, 0))
					{
						func_335(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_364(526074061, 1, 0))
					{
						func_335(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_364(-1045488665, 1, 0))
					{
						func_335(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_364(471514780, 1, 0))
					{
						func_335(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_644(iParam0, -839724752) && func_645(iParam0, 4))
		{
			if (!func_634(42))
			{
				func_674(iParam0);
			}
		}
		else if (func_644(iParam0, 1399091007))
		{
			func_675(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_644(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_335(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
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
			case -1185145312:
				func_647(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_676(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_677(&iVar9, 0))
				{
					func_653(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_676(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_342(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_678();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_679();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_680();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_681();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_682();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_683(499813453, 854119837, 0);
				func_684(499813453, 0);
				func_685(1);
				break;
			case 2127812557:
				func_683(499813453, -1292544588, 0);
				func_684(499813453, 0);
				func_685(2);
				break;
			case 808991383:
				func_683(499813453, -1003325394, 0);
				func_684(499813453, 0);
				func_685(4);
				break;
			case 1134518629:
				func_683(666607663, -335460405, 0);
				func_684(666607663, 0);
				func_686(1);
				break;
			case 902940106:
				func_683(666607663, 903797617, 0);
				func_684(666607663, 0);
				func_686(2);
				break;
			case -418174898:
				func_683(666607663, 669728650, 0);
				func_684(666607663, 0);
				func_686(4);
				break;
			case -648114971:
				func_683(-220219788, 1214120047, 0);
				func_684(-220219788, 0);
				func_687(1);
				break;
			case 211153747:
				func_683(-220219788, 655769340, 0);
				func_684(-220219788, 0);
				func_687(2);
				break;
			case -32876996:
				func_683(-220219788, 885316185, 0);
				func_684(-220219788, 0);
				func_687(4);
				break;
			case 1191437462:
				func_683(218622660, -1491419385, 0);
				func_684(218622660, 0);
				func_688(1);
				break;
			case 1119149048:
				func_683(218622660, 1809565830, 0);
				func_684(218622660, 0);
				func_688(2);
				break;
			case 506073827:
				func_683(390004462, -628873767, 0);
				func_684(390004462, 0);
				func_689(1);
				break;
			case -1876986168:
				func_683(390004462, -405421956, 0);
				func_684(390004462, 0);
				func_689(2);
				break;
			case 2142623221:
				func_683(390004462, -1108972386, 0);
				func_684(390004462, 0);
				func_689(4);
				break;
			case 1508215381:
				func_683(6410548, 1053716392, 0);
				func_684(6410548, 0);
				func_690(1);
				break;
			case -888935280:
				func_683(6410548, 806507056, 0);
				func_684(6410548, 0);
				func_690(2);
				break;
			case -1252474566:
				func_683(6410548, 1571925350, 0);
				func_684(6410548, 0);
				func_690(4);
				break;
			case -1465702449:
				func_683(6410548, 1330352282, 0);
				func_684(6410548, 0);
				func_690(8);
				break;
			case -21093309:
				func_692(242, func_691(-21093309), 0);
				break;
			case 204375141:
				func_692(240, func_691(204375141), 0);
				break;
			case -417963070:
				func_692(241, func_691(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_693(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_693(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_693(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_693(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
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
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_693(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_693(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_342(488, 0);
				break;
			case 1613651027:
				func_342(491, 0);
				break;
			case -885810591:
				func_342(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_335(func_694(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_335(func_695(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_646(1))
				{
					func_342(487, 0);
				}
				break;
			case -898386032:
				func_342(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_342(496, 0);
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
		iVar10 = iParam0;
		func_696(&iVar10);
		if (!func_697(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_652(0))
		{
			return true;
		}
		if (func_643(iParam0) == -1037537535)
		{
			func_698(iParam0);
		}
		if (func_644(iParam0, -1979000645))
		{
			func_699(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_652(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_335(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_700(iVar2, 0);
		}
	}
	Var35 = { func_701(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_702(iParam0);
	if (fParam6 > 0f)
	{
		if (func_644(iParam0, -839724752))
		{
			func_703(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_704(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_336(int iParam0)
{
	if (func_644(iParam0, 1989861793))
	{
		iVar0 = func_705(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_706(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_707(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_708(iVar14, iVar1);
					if (iVar15 != iParam0 && func_624(iVar15, 0))
					{
						if (func_709(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_710(iVar1);
				if (bVar13)
				{
					func_711(iParam0);
				}
				else
				{
					func_342(306, 0);
				}
			}
		}
	}
}

void func_337()
{
	if (func_20() != -1)
	{
		return;
	}
	func_712();
	func_713();
	func_714();
	func_715();
	func_716();
	func_717();
	func_718();
}

void func_338(int iParam0)
{
	func_719(iParam0, 1, 1, -142743235, 1);
	if (func_720(iParam0))
	{
		func_721(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_723(func_722(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_724(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_725() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_726(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_726(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_727(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_727(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_727(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_727(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_727(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_727(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_727(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_727(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_727(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_728(iVar8, iVar0))
				{
					func_729(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_728(iVar8, iVar0))
		{
			func_729(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8])
			{
				*Global_1946804->f_1497.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
				bVar3 = true;
			}
			if (iParam0 == &Global_26796.f_627.f_1.f_1.f_1[iVar8])
			{
				*Global_26796.f_627.f_1.f_1.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8])
		{
			*Global_1946804->f_1497.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
		}
		if (iParam0 == &Global_26796.f_627.f_1.f_1.f_1[iVar8])
		{
			*Global_26796.f_627.f_1.f_1.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar1] = { *Global_1946804->f_1616.f_1[iVar1] };
		iVar1++;
	}
}

void func_339()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_728(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_725() == -2125499975 || func_725() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_729(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_729(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5] == &Global_26796.f_627.f_1.f_1.f_1[iVar5] || 0 == &Global_26796.f_627.f_1.f_1.f_1[iVar5])
	{
		*Global_26796.f_627.f_1.f_1.f_1[iVar5] = { vVar2 };
	}
}

void func_340()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_623(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_341(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_344((*Global_1835011)[59]->f_1, 1) || func_344((*Global_1347702)[1]->f_15, 1)) || func_208((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_600(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_342(int iParam0, bool bParam1)
{
	func_730(iParam0, &iVar0, &iVar1);
	if (!func_731(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_732(iVar0, iVar1);
}

void func_343(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_723(iParam0, 1);
	func_733(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_733(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_734(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_733(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_26796.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_733(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_344(int iParam0, bool bParam1)
{
	switch (func_313(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_345()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_623(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_346()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_623(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_347(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_735(iParam1, 1, 0) };
		iParam3 = func_736(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_737(iParam3);
	return func_676(bParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_348()
{
	return _unlock_is_unlocked(99890643);
}

void func_349(int iParam0)
{
	if (!func_738(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_visible(iVar0, true);
}

bool func_350(int iParam0, int iParam1)
{
	if (!func_739(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_740(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_741(Global_40.f_9910[iParam1], 4);
}

void func_351(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_742(*iParam0);
	iVar1 = func_743(*iParam0);
	iVar2 = func_744(*iParam0);
	iVar3 = func_745(*iParam0);
	iVar4 = func_746(*iParam0);
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

void func_352(int iParam0, int iParam1, bool bParam2)
{
	if (!func_739(iParam0))
	{
		return;
	}
	if (!func_750(iParam1))
	{
		return;
	}
	if (func_751(iParam1, 1))
	{
		return;
	}
	iVar0 = func_740(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_350(iParam0, -1))
	{
		return;
	}
	else
	{
		func_752(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_214(0, 0, 1))
		{
			func_384(0, 17);
		}
	}
}

void func_353()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_623(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_354()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_623(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_355()
{
	return _unlock_is_unlocked(-121456797);
}

void func_356()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_623(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_357()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_623(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_358()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_623(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_359()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_623(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_360()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_623(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_361()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_623(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_362(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_363(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_364(int iParam0, int iParam1, bool bParam2)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_643(iParam0);
	if (iVar0 == -427144552)
	{
		if (has_ped_got_weapon(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_753(iParam0, 1))
		{
			return false;
		}
	}
	return func_628(iParam0, 0, bParam2) >= iParam1;
}

void func_365(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_754(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_754(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_366()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_623(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_367()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_623(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_368()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_623(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_369()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_623(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_370()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_623(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_371()
{
	if (func_755() > 1)
	{
		func_756();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_342(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_342(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_342(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_342(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_342(452, 1);
		}
	}
}

bool func_372(int iParam0)
{
	return func_757(iParam0, 4, 1);
}

void func_373(int iParam0)
{
	func_758(iParam0, 4, 1);
}

void func_374(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_375(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_207(iParam0))
	{
		return;
	}
	func_246(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_212(iParam0))
	{
		case 1:
			func_95(func_661(909007663, -587839005), 1);
			iVar0 = func_289(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_528(iVar0))
			{
				case 0:
					func_95(func_661(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_661(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_661(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_661(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_661(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_661(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_661(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_661(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_661(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_661(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_661(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_289(iParam0);
			if (func_318((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_318((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_318((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_661(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_661(909007663, -2049243343), 1);
				}
			}
			if (func_318((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_529(iVar1))
				{
					case 0:
						func_95(func_661(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_661(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_661(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_661(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_661(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_661(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_661(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_661(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_661(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_661(909007663, 532323983), 1);
				}
			}
			else if (func_318((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_318((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_318((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_661(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_661(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_376()
{
	if (func_20() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_4)
	{
		return;
	}
	if (!func_3(64))
	{
		return;
	}
	else if (func_215(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_214(0, 0, 1) || func_759()) || func_129())
	{
		return;
	}
	iVar0 = func_218();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_760(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_761(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_761(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_762(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_384(0, -1);
	}
	if (iVar2 > 0)
	{
		func_763("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_764(1, 0);
	Global_1956575->f_4 = 1;
}

void func_377(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_300(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!_unlock_is_unlocked(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_765(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_378(int iParam0)
{
	if (!func_207(iParam0))
	{
		return -1;
	}
	return func_766(iParam0);
}

int func_379(int iParam0, int iParam1)
{
	if (!func_767(iParam0))
	{
		return 0;
	}
	if (!func_419())
	{
		return 0;
	}
	if (!func_768(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, iVar1, iParam1);
	return 1;
}

int func_380(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_769())
	{
		iVar2 = func_769();
	}
	iVar5 = func_770(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_525(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_525(iVar6) == 0)
			{
				return func_771(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_525(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_525(iVar6) == 0)
			{
				return func_771(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_771(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_772(1330954593, 0, -1);
		case 1:
			return func_772(1330954593, 0, -1);
		case 2:
			return func_772(1330954593, 0, -1) * 2;
		case 4:
			return func_772(1330954593, 0, -1);
		case 5:
			return func_772(1330954593, 0, -1);
		case 6:
			return func_772(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_772(1330954593, 0, -1) * 3;
		case 9:
			return func_772(1330954593, 0, -1) * 3;
		case 10:
			return func_772(1330954593, 0, -1) * 3;
		case 11:
			return func_772(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_382(int iParam0)
{
	if (!func_207(iParam0))
	{
		return cVar0;
	}
	switch (func_212(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_549(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_289(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_380(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_383(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_385();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_212(Global_1879514->f_1) == 1)
			{
				func_379(5, 1);
			}
			else if (func_212(Global_1879514->f_1) == 8 && (func_318((*Global_1347702)[func_289(Global_1879514->f_1)]->f_12, 1) || func_318((*Global_1347702)[func_289(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_379(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_384(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_773(&Global_0, 8);
	}
	if (!func_419() || func_20() != -1)
	{
		return;
	}
	func_773(&Global_0, 1);
}

int func_385()
{
	iVar0 = func_774(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_775(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = chal_mission_get_num_goals(iVar0);
		iVar2 = chal_mission_get_num_goals_complete(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

Vector3 func_386(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_776(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_420(vVar0))
	{
		vVar0 = { func_776(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_387(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_388(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_389(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_264(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_777(vParam0, iParam3);
}

void func_390()
{
	func_778();
	func_779();
	func_780();
	_0x11b0a0b282fa9b10(0);
}

void func_391(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_781(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_782(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1934603)[iVar0]->f_10)))
		{
			*(*Global_1934603)[iVar0] = { Param0 };
			Global_1934603->f_161++;
			func_783(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_392(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_393(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_394()
{
	return Global_1572864->f_12;
}

void func_395(bool bParam0)
{
	if (func_540(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_784();
	Var1.f_3.f_3 = iVar0;
	if ((!func_785(Global_1347343->f_2) && !func_392(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_786();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_392(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_787();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_392(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_788();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_789(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_790(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_393(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_393(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_396(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_791(uParam0);
	iVar0 = func_792(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_793(iParam1);
		}
		iVar0 = func_794(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_795(uParam0);
		}
		else
		{
			Var1.f_10 = -1569615261;
			_copy_memory(uParam0->f_3[iVar0], &Var1, 13);
		}
	}
	else if (iVar0 != -1)
	{
	}
	else
	{
		iVar0 = func_795(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0]->f_2 = iParam1;
	uParam0->f_3[iVar0]->f_1 = get_entity_model(iParam1);
	if (is_string_null_or_empty(uParam0->f_3[iVar0]->f_9))
	{
		uParam0->f_3[iVar0]->f_9 = sParam2;
	}
	else if (!is_string_null_or_empty(sParam2))
	{
		if (!are_strings_equal(uParam0->f_3[iVar0]->f_9, sParam2))
		{
		}
		uParam0->f_3[iVar0]->f_9 = sParam2;
	}
	func_796(uParam0, 2);
}

void func_397(char[4] cParam0, int iParam1)
{
	func_797(&(cParam0->f_7375), iParam1);
}

int func_398(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar1])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_399()
{
	return func_549(func_798());
}

void func_400(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_421())
	{
		func_799(cParam0, iVar0);
		iVar0++;
	}
}

int func_401(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_402(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_403(char[4] cParam0)
{
	func_805(cParam0, iLocal_224, iLocal_225, 127500, 127607, 127756, 127935, 128019, "NBD1_INT", 514, -1);
	func_805(cParam0, iLocal_225, iLocal_226, 128182, 128221, 128369, 128696, 128962, "", 512, -1);
	func_805(cParam0, iLocal_226, iLocal_227, 128982, 128991, 129223, 129289, 129552, "", 0, -1);
	func_805(cParam0, iLocal_227, iLocal_228, 129572, 129592, 130308, 130377, 130777, "", 0, -1);
	func_805(cParam0, iLocal_228, iLocal_230, 130835, 130844, 131387, 131544, 131680, "NBD1_MCS2", 3, -1);
	func_805(cParam0, iLocal_229, iLocal_230, 131696, 131705, 131926, 131954, 132584, "", 0, -1);
	func_805(cParam0, iLocal_230, iLocal_231, 132614, 132623, 132818, 132886, 133232, "", 1, -1);
	func_805(cParam0, iLocal_231, iLocal_232, 133260, 133269, 133514, 133591, 133810, "", 1, -1);
	func_805(cParam0, iLocal_232, iLocal_233, 133845, 133869, 133992, 134162, 134662, "NBD1_MCS3", 4099, -1);
	func_805(cParam0, iLocal_233, iLocal_234, 134710, 134719, 134919, 135008, 135142, "", 2048, -1);
	func_805(cParam0, iLocal_234, iLocal_235, 135179, 135238, 135371, 135621, 135682, "NBD1_MCS5", 2, -1);
	func_805(cParam0, iLocal_235, 25, 135712, 135721, 136029, 136078, 136300, "", 0, -1);
	func_805(cParam0, 25, 26, 136309, 136318, 136446, 136519, 136553, "NBD1_EXT", 2, -1);
}

bool func_404(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (is_entity_dead(bParam0))
	{
		return false;
	}
	if (!is_ped_human(bParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		get_current_ped_weapon(bParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			_0xe9bd19f8121ade3e(bParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_405(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

void func_406(char[4] cParam0, bool bParam1)
{
	iVar0 = func_33(cParam0);
	iVar1 = get_clock_hours();
	iVar2 = get_clock_minutes();
	if (bParam1)
	{
	}
	if (!func_495(cParam0))
	{
		if (iVar0 == iLocal_224)
		{
			if (!func_495(cParam0))
			{
				if (!func_195(iVar1757, 16777216))
				{
					set_clock_time(12, 35, 0);
					func_408(&uLocal_1761, 16777216);
				}
				if (iVar1028 < 6)
				{
					if (iVar1 >= 14 && iVar2 > 0)
					{
						set_clock_time(14, 0, 0);
					}
				}
				else if (!func_195(iVar1757, 134217728))
				{
					set_clock_time(15, 0, 0);
					func_408(&uLocal_1761, 134217728);
				}
			}
			else if (!func_195(iVar1757, 33554432))
			{
				if (get_clock_hours() >= 6 && get_clock_hours() <= 18)
				{
					set_clock_time(15, 21, 0);
				}
				func_408(&uLocal_1761, 33554432);
			}
		}
		if (iVar0 >= iLocal_225 && iVar0 < iLocal_232)
		{
			if (!func_195(iVar1757, 33554432))
			{
				set_clock_time(15, 21, 0);
				func_408(&uLocal_1761, 33554432);
			}
			if (iVar1 >= 15 && iVar2 >= 21)
			{
				set_clock_time(15, 21, 0);
			}
		}
		if (iVar0 == iLocal_232 || iVar0 == iLocal_233)
		{
			if (func_162(cParam0, func_33(cParam0)) == 5)
			{
				if (!func_195(iVar1757, 268435456))
				{
					set_clock_time(17, 20, 0);
					func_408(&uLocal_1761, 268435456);
				}
				if (iVar1 >= 19 && iVar2 >= 0)
				{
					set_clock_time(19, 0, 0);
				}
			}
		}
		if (bParam1)
		{
			if (iVar0 >= iLocal_234 && iVar0 != 25)
			{
				set_clock_time(23, 0, 0);
			}
		}
	}
}

bool func_407(char[4] cParam0)
{
	iVar0 = 1;
	if (!does_entity_exist(&(iLocal_2449[0])))
	{
		if ((func_33(cParam0) == iLocal_224 && func_866(cParam0, 0, iLocal_2449[0], 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0)) || (func_33(cParam0) > iLocal_224 && func_866(cParam0, 0, iLocal_2449[0], 0, 0, 0, 0, 0, 1, 1018353621, 1, 0, 1, 0)))
		{
			if (func_33(cParam0) > iLocal_224)
			{
				if (!func_867(cParam0, 0, &(iLocal_2449[0])))
				{
					iVar0 = 0;
				}
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		set_ped_config_flag(&(iLocal_2449[0]), 297, true);
	}
	if (!does_entity_exist(&(iLocal_2449[1])))
	{
		if (func_866(cParam0, 1, iLocal_2449[1], 0, 0, 0, 0, 0, 1, 1018353621, 1, 0, 1, 0))
		{
			if (!func_867(cParam0, 1, &(iLocal_2449[1])))
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		set_ped_config_flag(&(iLocal_2449[1]), 297, true);
	}
	if (!does_entity_exist(&(iLocal_2449[2])))
	{
		if (func_866(cParam0, 3, iLocal_2449[2], 0, 0, 0, 0, 0, 1, 1018353621, 1, 0, 1, 0))
		{
			if (!func_867(cParam0, 3, &(iLocal_2449[2])))
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		set_ped_config_flag(&(iLocal_2449[2]), 297, true);
		func_868(cParam0, &(iLocal_2449[2]), 10, 512);
		func_869(cParam0, &(iLocal_2449[2]), 60000, 512);
		func_870(cParam0, &(iLocal_2449[2]), 2000, 512);
	}
	if (!does_entity_exist(&(iLocal_2449[3])))
	{
		if (func_866(cParam0, 7, iLocal_2449[3], 0, 0, 0, 0, 0, 1, 1018353621, 1, 0, 1, 0))
		{
			if (!func_867(cParam0, 7, &(iLocal_2449[3])))
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		func_404(&(iLocal_2449[3]));
		if (has_ped_got_weapon(&(iLocal_2449[3]), -2002235300, 0, true))
		{
			_0xe9bd19f8121ade3e(&(iLocal_2449[3]), -2002235300);
		}
		if (has_ped_got_weapon(&(iLocal_2449[3]), 2031861036, 0, true))
		{
			_0xe9bd19f8121ade3e(&(iLocal_2449[3]), 2031861036);
		}
	}
	if (!does_entity_exist(&(iLocal_2449[4])))
	{
		if (func_866(cParam0, 6, iLocal_2449[4], 0, 0, 0, 0, 0, 1, 1018353621, 1, 0, 1, 0))
		{
			if (!func_867(cParam0, 6, &(iLocal_2449[4])))
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		set_ped_config_flag(&(iLocal_2449[4]), 297, true);
	}
	if (!does_entity_exist(&(iLocal_2449[5])))
	{
		if (func_866(cParam0, 2, iLocal_2449[5], 0, 0, 0, 0, 0, 1, 1018353621, 1, 0, 1, 0))
		{
			if (!func_867(cParam0, 2, &(iLocal_2449[5])))
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_33(cParam0) <= iLocal_233)
	{
		if (!does_entity_exist(&(iLocal_2449[6])))
		{
			if (func_866(cParam0, 5, iLocal_2449[6], 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0))
			{
				if (func_33(cParam0) > iLocal_224)
				{
					if (!func_867(cParam0, 5, &(iLocal_2449[6])))
					{
						iVar0 = 0;
					}
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (func_33(cParam0) < iLocal_233)
	{
		if (!does_entity_exist(&(iLocal_2449[7])))
		{
			if (func_866(cParam0, 9, iLocal_2449[7], 0, 0, 0, 0, 0, 1, 1018353621, 1, 0, 1, 0))
			{
				if (!func_867(cParam0, 9, &(iLocal_2449[7])))
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (func_33(cParam0) <= iLocal_228)
	{
		if (!does_entity_exist(&(iLocal_2449[8])))
		{
			if (func_866(cParam0, 13, iLocal_2449[8], 0, 0, 0, 0, 0, 1, 1018353621, 1, 0, 1, 0))
			{
				if (!func_867(cParam0, 13, &(iLocal_2449[8])))
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (func_33(cParam0) < iLocal_226)
	{
		if (!does_entity_exist(bVar2445))
		{
			bLocal_2448 = func_277(cParam0);
			if (does_entity_exist(bVar2445))
			{
				func_871(bVar2445, func_240(3, 14), 2, 1073741824);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

void func_408(int iParam0, int iParam1)
{
	func_872(iParam0, iParam1);
}

Vector3 func_409(int iParam0, int iParam1)
{
	return func_873(iParam0, iParam1);
}

float func_410(int iParam0, int iParam1)
{
	return func_874(iParam0, iParam1);
}

void func_411(char[4] cParam0, vector3 vParam1)
{
	cParam0->f_5413 = { vParam1 };
}

bool func_412(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_120(cParam0, 16777216))
		{
			if (!func_875(cParam0))
			{
				func_103(cParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = uParam2;
				Var0.f_6.f_1 = uParam3;
				Var0.f_6.f_2 = uParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				bVar12 = func_876(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(bVar12))
					{
						if (bVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_877(bVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_878(bVar12))
							{
								_0x0348469daa17576c(bVar12);
							}
							clear_ped_tasks_immediately(bVar12, false, true);
							_set_entity_coords_and_heading(bVar12, cParam0->f_5417, cParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!is_entity_dead(cParam0->f_5411))
		{
			return true;
		}
	}
	if (func_120(cParam0, 1))
	{
		return true;
	}
	vVar14 = { func_126(cParam0->f_607) };
	if (func_20() == 0)
	{
		request_model(func_125(cParam0), false);
		if (!has_model_loaded(func_125(cParam0)))
		{
			return false;
		}
		if (func_879(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			set_network_id_exists_on_all_machines(iVar17, true);
			bVar13 = net_to_ped(iVar17);
		}
	}
	else
	{
		if (((((cParam0->f_607 == 38 || cParam0->f_607 == 39) || cParam0->f_607 == 43) || cParam0->f_607 == 40) || cParam0->f_607 == 41) || cParam0->f_607 == 42)
		{
			func_103(cParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = uParam2;
		Var18.f_6.f_1 = uParam3;
		Var18.f_6.f_2 = uParam4;
		Var18.f_9 = fParam5;
		if (func_120(cParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_120(cParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		bVar13 = func_876(&iVar29, &Var18);
		if (iVar29 == 0)
		{
			return false;
		}
		else if (iVar29 == 1)
		{
			return false;
		}
		else if (iVar29 == 2)
		{
			if (!func_120(cParam0, 16))
			{
				func_103(cParam0, 16);
			}
		}
	}
	if (does_entity_exist(bVar13))
	{
		cParam0->f_5411 = bVar13;
		cParam0->f_5412 = bVar13;
		func_880(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_878(bVar13) || func_881(Global_35, bVar13, 1, 1) > 200f) && !func_420(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(bVar13, false);
						func_882(bVar13, vVar14, fParam5, 2, 1073741824);
					}
				}
			}
		}
		else
		{
			Stack.Push(cParam0);
			Call_Loc(cParam0->f_10782);
		}
		return false;
	}
	return false;
}

bool func_413(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	*uParam0 = func_883(sParam1);
	if (*uParam0 == 0)
	{
		return false;
	}
	if (bParam3)
	{
		set_entity_as_mission_entity(*uParam0, true, true);
	}
	if (bParam4 && iParam2 != -1)
	{
		func_884(iParam2, *uParam0, 0, 0, 1);
	}
	return true;
}

void func_414()
{
	iLocal_1756 = 0;
	while (iVar1754 <= 8)
	{
		if (does_entity_exist(&(iLocal_2449[iVar1754])))
		{
			if (!is_entity_visible(&(iLocal_2449[iVar1754])))
			{
				set_entity_visible(&(iLocal_2449[iVar1754]), true);
			}
		}
		iLocal_1756 = iVar1754 + 1;
	}
	iLocal_1756 = 0;
	while (iVar1754 <= 2)
	{
		if (does_entity_exist(&(bLocal_2459[iVar1754])))
		{
			if (!is_entity_visible(&(bLocal_2459[iVar1754])))
			{
				set_entity_visible(&(bLocal_2459[iVar1754]), true);
			}
		}
		iLocal_1756 = iVar1754 + 1;
	}
	if (!is_entity_visible(iVar2446))
	{
		set_entity_visible(iVar2446, true);
	}
	if (!is_entity_visible(iVar2443))
	{
		set_entity_visible(iVar2443, true);
		func_885(iVar2443);
	}
	func_886(iVar2443, 1);
	if (!is_entity_visible(iVar2442))
	{
		set_entity_visible(iVar2442, true);
		func_885(iVar2442);
	}
	func_886(iVar2442, 1);
}

void func_415(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_416(var uParam0)
{
	if (!func_887(uParam0, 4))
	{
		if (func_888(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_889(uParam0) };
		if (!func_888(uParam0->f_860, 524288))
		{
			func_890(&(uParam0->f_872));
		}
		func_891(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_892(uParam0, 0f, 0f, 0f);
		func_893(uParam0);
		func_894(uParam0);
		func_895(uParam0, 0f, 0f, 0f, 0, 0);
		func_896(uParam0);
		func_797(uParam0, 4);
		func_897(uParam0, 0);
		func_898(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_417(int iParam0)
{
	if (func_899(iParam0))
	{
		return func_900(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_418(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_552(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_467(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_901(0, 0);
		if (func_738(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_902(1, 0);
		}
	}
	else
	{
		func_902(1, 0);
	}
	func_226(0);
	func_553(0, vParam0, uParam3);
	return 1;
}

bool func_419()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_420(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_421()
{
	return 26;
}

void func_422(int iParam0)
{
	if (!func_206(iParam0))
	{
		return;
	}
	uVar0 = (*Global_1835011)[iParam0]->f_8;
	iVar1 = get_hash_key(&uVar0);
	if (_uilog_is_entry_registered(1, iVar1))
	{
		_uilog_remove_entry(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { (*Global_1835011)[iParam0]->f_18 };
	MemCopy(&Var5, {(*Global_1835011)[iParam0]->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	_uilog_add_entry_hash(1, iVar1, vVar2, (*Global_1835011)[iParam0]->f_26, get_hash_key(&Var13), iVar21);
	_uilog_set_entry_icon_texture(1, iVar1, (*Global_1835011)[iParam0]->f_26, 676312963);
}

void func_423(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_903((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_424(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_904((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_425(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_905((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_426(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_906((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_427(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_907((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_428(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_908((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_429(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_430(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_909((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_431(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_910((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_432(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_911((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_433(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_912((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_434(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_913((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_435(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_914(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_915(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_436(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_916(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_917(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0] = cParam1;
	cParam0->f_1020[iVar0]->f_2 = (cParam0->f_1020[iVar0]->f_2 || iParam2);
}

void func_437(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_918(&(cParam0->f_1081), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_919(&(cParam0->f_1081));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1081[iVar0] = cParam1;
	cParam0->f_1081[iVar0]->f_2 = (cParam0->f_1081[iVar0]->f_2 || iParam2);
}

void func_438(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_920(iParam3, func_33(cParam0)) && !func_920(iParam3, func_35(cParam0)))
	{
		return;
	}
	if (_does_anim_scene_exist(*uParam2))
	{
		return;
	}
	if (is_string_null_or_empty(cParam1))
	{
		return;
	}
	iVar0 = func_921(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_922(&(cParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!_does_anim_scene_exist(*uParam2))
	{
		*uParam2 = _create_anim_scene(cParam1, iParam4, sParam5, false, true);
	}
	cParam0->f_1126[iVar0]->f_1 = *uParam2;
	cParam0->f_1126[iVar0] = cParam1;
	cParam0->f_1126[iVar0]->f_3 = (cParam0->f_1126[iVar0]->f_3 || iParam3);
	cParam0->f_1126[iVar0]->f_65 = iParam6;
	cParam0->f_1126[iVar0]->f_66 = bParam7;
	if (!bParam7)
	{
		func_923(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_439(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_924(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_925(&(cParam0->f_819));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_819[iVar0] = cParam1;
	cParam0->f_819[iVar0]->f_4 = (cParam0->f_819[iVar0]->f_4 || iParam2);
	cParam0->f_819[iVar0]->f_1 = iParam3;
	cParam0->f_819[iVar0]->f_2 = iParam4;
}

void func_440(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	cParam0->f_1124.f_1 = (cParam0->f_1124.f_1 || iParam1);
}

void func_441(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_926(&(cParam0->f_5188), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_927(&(cParam0->f_5188));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5188[iVar0] = iParam1;
	cParam0->f_5188[iVar0]->f_1 = iParam3;
	cParam0->f_5188[iVar0]->f_2 = iParam4;
	cParam0->f_5188[iVar0]->f_4 = (cParam0->f_5188[iVar0]->f_4 || iParam2);
}

void func_442(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_928((*uParam0)[iVar0]))
		{
			if (func_920((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_929((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_930((*uParam1)[iVar0]))
		{
			if (func_920((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_931((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_932((*uParam2)[iVar0]))
		{
			if (func_920((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_933((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_934((*uParam3)[iVar0]))
		{
			if (func_920((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_935((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_920(uParam4->f_1, iParam12))
	{
		func_936(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_937((*uParam5)[iVar0]))
		{
			if (func_920((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_938((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_937((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_939((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_920((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_940((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_941((*uParam6)[iVar0]))
		{
			if (func_920((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_942((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_943((*uParam7)[iVar0]))
		{
			if (func_920((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_944((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_945((*uParam8)[iVar0]))
		{
			if (func_920((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_946((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_947((*uParam9)[iVar0]))
		{
			if (func_920((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_948((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_949((*uParam10)[iVar0]))
		{
			if (func_920((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_950((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_951((*uParam11)[iVar0]))
		{
			if (func_920((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_952((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_443(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (is_entity_dead(bParam1))
	{
		return;
	}
	if (func_953(uParam0, bParam1, sParam2))
	{
		if (!is_ped_injured(bParam1))
		{
			if (!network_is_game_in_progress() || (network_is_game_in_progress() && network_has_control_of_entity(bParam1)))
			{
				set_ped_can_play_ambient_anims(bParam1, bParam3);
			}
		}
	}
}

struct<2> func_444()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_445(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_446(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_447(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_954(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_396(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_448(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_955(cParam0->f_607)}, 3);
			if (func_956(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_957(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_958(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_449(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_937((*uParam0)[iVar0]))
		{
			if (func_920((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_959((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_960((*uParam0)[iVar0]))
					{
						iVar1 = 0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_450(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_451(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_120(cParam0, 2))
	{
		return true;
	}
	if (func_20() == 0)
	{
		return true;
	}
	if (does_entity_exist(cParam0->f_5408))
	{
		return true;
	}
	iVar0 = func_961(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_866(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

void func_452(char[4] cParam0)
{
	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_962(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_963(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_453(char[4] cParam0)
{
	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_964(cParam0);
			if (func_965(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_966(cParam0, 2097152);
				func_282(cParam0, 16384);
				func_103(cParam0, 128);
			}
			return;
		}
		if (func_128(cParam0, 1))
		{
			return;
		}
		if (func_120(cParam0, 64))
		{
			func_964(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_967(cParam0, Var0))
			{
				if (func_450(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_450(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(cParam0, 128);
		}
	}
}

void func_454(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_455(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_968(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_451(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_412(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x0ee3f0d7feccc54f())
	{
		iVar0 = 0;
	}
	if (!func_23(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_955(cParam0->f_607)}, 3);
		if (func_969(&(cParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_128(cParam0, 1))
	{
		if (!func_26(&(cParam0->f_13115)))
		{
			func_27(&(cParam0->f_13115), 0);
		}
		if (func_970(&(cParam0->f_13115)) < 30f)
		{
			if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
			{
				iVar0 = 0;
			}
			if (Global_1935630->f_2 != Global_40.f_39 || (!Global_1935630->f_12 && get_entity_model(player_ped_id()) != Global_40.f_39))
			{
				iVar0 = 0;
			}
			if (Global_40.f_7729 != &Global_1905941)
			{
				iVar0 = 0;
			}
			if (!Global_1935630->f_12 && !_0xa0bc8faed8cfeb3c(player_ped_id()))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_456(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_970(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_971()) && func_970(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(cParam0->f_607)));
			func_282(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_972(0, 0);
		func_282(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_457(char[4] cParam0)
{
	if (!func_195(iVar1757, 2097152))
	{
		if (func_973(Global_35, func_409(6, 8), 1) > 100f)
		{
			func_131(get_entity_coords(Global_35, true, false), 100f, 1, 0, 0, 0, 0);
		}
		func_474(0);
		func_408(&uLocal_1760, 2097152);
	}
	Global_1934765->f_271 = 1;
	func_163();
	func_187(cParam0, 1);
	func_406(cParam0, 0);
	func_193(0);
	func_974();
	func_975();
	func_1(cParam0, 4);
	if (!func_195(iVar1754, 256))
	{
		if (func_407(cParam0))
		{
			func_408(&uLocal_1757, 256);
		}
		else
		{
			return false;
		}
	}
	if (!func_976())
	{
		return false;
	}
	if ((func_105() || (func_128(cParam0, 2) && func_33(cParam0) != iLocal_224)) && !func_104())
	{
		if (func_33(cParam0) < iLocal_228)
		{
			if (func_977(-1, 0))
			{
				iLocal_2445 = &Local_14.f_3[1];
				iLocal_2444 = &Local_14.f_3[0];
				if (does_entity_exist(&(Local_14.f_3[1])) && !is_entity_dead(&(Local_14.f_3[1])))
				{
					_0xd80faf919a2e56ea(&(Local_14.f_3[1]), -906226543);
				}
			}
			else
			{
				return false;
			}
		}
	}
	if (!func_195(iVar1754, 512))
	{
		if (func_33(cParam0) < iLocal_226)
		{
			if (func_978(cParam0))
			{
				func_408(&uLocal_1757, 512);
			}
			else
			{
				return false;
			}
		}
		else
		{
			func_408(&uLocal_1757, 512);
		}
	}
	func_979();
	if (!func_980(cParam0))
	{
		return false;
	}
	if (func_33(cParam0) == iLocal_224)
	{
		func_981();
	}
	func_982(cParam0);
	func_983(cParam0);
	func_984(cParam0);
	func_985(cParam0);
	func_172(1);
	func_176(1);
	func_986();
	func_177(1);
	func_173(cParam0, 1);
	func_987();
	func_175(cParam0, 1);
	func_988(cParam0);
	func_414();
	func_989(cParam0);
	func_194(0);
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_990(208);
	func_991();
	func_203(1947931439, 1, 0);
	if (func_33(cParam0) < iLocal_226)
	{
		func_992(-1, 1);
	}
	func_994(cParam0, 171245);
	func_996(cParam0, 171711);
	func_998(cParam0, 177446);
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
	return true;
}

void func_458(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_459(char[4] cParam0)
{
	func_999(cParam0);
	func_1000(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_965(cParam0);
		}
	}
	func_1001(cParam0);
	func_1002(cParam0);
	func_1003(cParam0);
	func_1004(cParam0);
	func_1005(cParam0);
	func_1006(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_1007(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_296(cParam0) == 0)
	{
		func_453(cParam0);
	}
	if (func_121(cParam0, iVar0, 512))
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
	}
	func_74(cParam0);
	switch (iVar2)
	{
		case 0:
			if (func_1008(cParam0, iVar0, 0))
			{
				if (func_1009(cParam0, func_33(cParam0)) != -1 && _0x62de46f061caa468() < func_1009(cParam0, func_33(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_1009(cParam0, func_33(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_397(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_1010(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_1011(cParam0);
					func_1012(cParam0, iVar0, 1);
				}
				else
				{
					func_1012(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_968(cParam0))
			{
				if (func_1013(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_966(cParam0, 4);
					}
					func_1012(cParam0, iVar0, 2);
				}
			}
			else if (func_1014(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_966(cParam0, 4);
				}
				func_1012(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_1008(cParam0, iVar0, 2))
			{
				if (!func_1015(cParam0))
				{
					func_1012(cParam0, iVar0, 4);
					if (func_1016(cParam0, iVar0, iVar1))
					{
						func_1012(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_1017(cParam0);
					func_1012(cParam0, iVar0, 3);
					if (func_1018(cParam0, iVar0))
					{
						func_1012(cParam0, iVar0, 4);
						if (func_1016(cParam0, iVar0, iVar1))
						{
							func_1012(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_495(cParam0))
			{
				func_1018(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_1018(cParam0, iVar0))
			{
				func_1012(cParam0, iVar0, 4);
				if (func_1016(cParam0, iVar0, iVar1))
				{
					func_1012(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_1016(cParam0, iVar0, iVar1))
			{
				func_1012(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_1019(cParam0);
				func_1020(cParam0, iVar0);
				func_1021(cParam0);
				func_1022(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_1023(cParam0, iVar1))
					{
						func_1024(cParam0, iVar1);
					}
				}
			}
			if (func_1008(cParam0, iVar0, 5))
			{
				if (func_1008(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_1025(cParam0, func_33(cParam0));
					}
					func_1026(cParam0, iVar1);
					func_1000(cParam0);
					return true;
				}
				else
				{
					func_1012(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_1027(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_1028(get_player_index(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_1029("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_1030(cParam0))
					{
						func_1012(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_966(cParam0, 268435456);
					}
				}
				if (func_120(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_282(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_1019(cParam0);
				func_1020(cParam0, iVar0);
				func_1021(cParam0);
				func_1022(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_1023(cParam0, func_35(cParam0)))
					{
						func_1024(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_1028(get_player_index(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_1008(cParam0, iVar0, 5))
				{
					if (func_1031(cParam0))
					{
						func_1012(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_1031(cParam0);
					func_1012(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_1008(cParam0, iVar0, 5);
				func_1032(cParam0);
			}
			break;
		case 7:
			if (func_1008(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_1025(cParam0, func_33(cParam0));
				}
				func_1026(cParam0, iVar1);
				func_1000(cParam0);
				return true;
			}
			break;
		default:
			func_1012(cParam0, iVar0, 7);
			break;
	}
	return false;
}

bool func_460()
{
	return func_1033(&uVar0);
}

int func_461(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (func_1035(iParam0))
	{
		if (func_1033(&uVar0))
		{
			if (bParam1)
			{
				return 0;
			}
		}
		else if (!bParam1)
		{
			return 0;
		}
	}
	_0x2208438012482a1a(Global_35, false, false);
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
		_0xc494c76a34266e82(Global_35, 0);
		if (add_shocking_event_for_entity(1925708505, Global_35, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
		{
		}
	}
	else
	{
		iVar1 = 2;
		_0xc494c76a34266e82(Global_35, 13);
	}
	func_1036(iParam0, iVar1);
	func_734(26, 0, 0, 0, 0);
	return 1;
}

int func_462()
{
	func_1037(&uVar0);
	return uVar0;
}

void func_463(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_195(iVar874, 2))
	{
		if (bParam2)
		{
			if (!func_195(iVar875, iParam1))
			{
				if (!func_1038(iParam0))
				{
					func_1039(iParam0, 1048576, 1);
					if (iParam0 == 3 || iParam0 == 7)
					{
						if (_is_metaped_using_component(&(iLocal_2449[iParam0]), -134124598))
						{
							_set_ped_component_disabled(&(iLocal_2449[iParam0]), -134124598, 1);
						}
						if (_is_metaped_using_component(&(iLocal_2449[iParam0]), -2041904210))
						{
							_set_ped_component_disabled(&(iLocal_2449[iParam0]), -2041904210, 1);
						}
					}
				}
				func_408(&uLocal_882, iParam1);
				if (!is_screen_faded_out())
				{
					if (!bParam3)
					{
						func_408(&iLocal_881, 2);
					}
				}
			}
		}
		else if (func_195(iVar875, iParam1) || bParam4)
		{
			if (func_1038(iParam0))
			{
				func_1039(iParam0, func_1040(iParam0), 0);
			}
			func_196(&uLocal_882, iParam1);
			if (!is_screen_faded_out())
			{
				if (!bParam3)
				{
					func_408(&iLocal_881, 2);
				}
			}
		}
	}
}

bool func_464(bool bParam0)
{
	iVar0 = 1;
	if (bParam0)
	{
		if (!func_195(iVar879, 1))
		{
			iVar0 = 0;
		}
		else if (!func_195(iVar879, 2))
		{
			iVar0 = 0;
		}
		else if (!func_195(iVar879, 8))
		{
			iVar0 = 0;
		}
		else if (!func_195(iVar879, 32))
		{
			iVar0 = 0;
		}
		else if (!func_195(iVar879, 64))
		{
			iVar0 = 0;
		}
		else if (!func_195(iVar879, 128))
		{
			iVar0 = 0;
		}
	}
	else if (func_195(iVar879, 1))
	{
		iVar0 = 0;
	}
	else if (func_195(iVar879, 2))
	{
		iVar0 = 0;
	}
	else if (func_195(iVar879, 8))
	{
		iVar0 = 0;
	}
	else if (func_195(iVar879, 32))
	{
		iVar0 = 0;
	}
	else if (func_195(iVar879, 64))
	{
		iVar0 = 0;
	}
	else if (func_195(iVar879, 128))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_465(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	if (!decor_exist_on(bParam0, "metaped_outfit_request") || !decor_exist_on(bParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = decor_get_int(bParam0, "metaped_outfit_request");
	if (_is_metaped_outfit_request_valid(iVar0))
	{
		_release_metaped_outfit_request(iVar0);
	}
	decor_remove(bParam0, "metaped_outfit_request");
	decor_remove(bParam0, "metaped_outfit_request_name");
}

int func_466()
{
	func_1041(Global_35, 454681054, 0, 1);
	return 1;
}

int func_467(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = -1569615261;
	if (is_entity_dead(bParam0) || !is_ped_human(bParam0))
	{
		return iVar0;
	}
	if (get_current_ped_weapon(bParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

void func_468()
{
	func_1042(&(iLocal_2449[0]));
	func_1042(&(iLocal_2449[2]));
	func_1042(&(iLocal_2449[5]));
	func_1042(&(iLocal_2449[4]));
	func_1042(&(iLocal_2449[3]));
	func_1042(Global_35);
}

void func_469()
{
	func_1043(&(iLocal_2449[0]));
	func_1043(&(iLocal_2449[2]));
	func_1043(&(iLocal_2449[5]));
	func_1043(&(iLocal_2449[4]));
	func_1043(&(iLocal_2449[3]));
	func_1043(Global_35);
}

void func_470(int iParam0, bool bParam1)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_59(iParam0);
	func_570(iParam0);
	func_571(iParam0);
	func_568(iParam0);
	if (func_569(iParam0))
	{
		iVar0 = get_id_of_this_thread();
		if (func_279(iParam0) != iVar0)
		{
			return;
		}
	}
	func_1044(iParam0, 4);
	if (bParam1)
	{
		func_1044(iParam0, 16);
	}
}

void func_471(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1045(iParam1))
	{
		return;
	}
	bVar0 = func_1046(iParam1);
	if (func_1047(iParam1))
	{
		if (!func_1048(iParam1))
		{
			return;
		}
	}
	func_1049(iParam1, 39, 1);
	func_1050(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1050(iParam1, 8, 0);
	if (does_entity_exist(bVar0))
	{
		if (!bParam2)
		{
			func_1050(iParam1, 512, 1);
			set_ped_keep_task(bVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(bVar0, false);
			func_1051(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1052(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_472()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (does_entity_exist(&(Local_14.f_176[iVar0])))
		{
			delete_ped(Local_14.f_176[iVar0]);
		}
		iVar0++;
	}
}

void func_473(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_1053((*uParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_474(bool bParam0)
{
	if (!func_195(iVar1762, 1))
	{
		_0x9d16896f0dbe78a2(func_409(6, 8), 100f);
		if (bParam0)
		{
			func_131(func_409(6, 8), 100f, 1, 0, 0, 0, 0);
		}
		func_408(&uLocal_1765, 1);
	}
}

void func_475()
{
	func_1054(&iLocal_2463);
}

int func_476()
{
	return Global_1934266->f_4;
}

void func_477(int iParam0, int iParam1)
{
	if (!func_1055(iParam0))
	{
		return;
	}
	iVar0 = func_1056();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	_set_max_wanted_level_2(iVar0);
	if (iParam0 == func_476())
	{
		_set_bounty_for_player(player_id(), iParam1);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (&Global_40.f_358[iParam0] != iParam1)
		{
			func_1057(iParam0, iParam1);
			func_1058(iParam0);
		}
		Global_40.f_358[iParam0] = iParam1;
		if (!func_1059(iParam0, 4))
		{
			if (&Global_40.f_358[iParam0] >= get_wanted_level_threshold(1))
			{
				func_1060(iParam0, 1);
			}
		}
		else if (&Global_40.f_358[iParam0] == 0)
		{
			func_1060(iParam0, 0);
		}
		return;
	}
	Global_1058888->f_42266[iParam0] = iParam1;
}

void func_478(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

bool func_479(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (get_ground_z_for_3d_coord(vParam1, &uVar0, false))
	{
		vParam1.f_2 = uVar0;
		*uParam0 = add_cover_point(vParam1, fParam4, iParam5, iParam6, iParam7, bParam8);
		return true;
	}
	return false;
}

var func_480(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_1061(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_481(bool bParam0)
{
	if (bParam0)
	{
		use_waypoint_recording_as_assisted_movement_route(sVar1903, 1, 0.5f, 1f, 0);
		use_waypoint_recording_as_assisted_movement_route(sVar1904, 1, 0.5f, 1f, 0);
	}
	else
	{
		if (get_is_waypoint_recording_loaded(sVar1903))
		{
			use_waypoint_recording_as_assisted_movement_route(sVar1903, 0, 1065353216, 1056964608, 1);
		}
		if (get_is_waypoint_recording_loaded(sVar1904))
		{
			use_waypoint_recording_as_assisted_movement_route(sVar1904, 0, 1065353216, 1056964608, 1);
		}
	}
}

void func_482(bool bParam0)
{
	if (bParam0)
	{
		use_waypoint_recording_as_assisted_movement_route(sVar1907, 1, 0.5f, 1f, 0);
	}
	else if (get_is_waypoint_recording_loaded(sVar1907))
	{
		use_waypoint_recording_as_assisted_movement_route(sVar1907, 0, 1065353216, 1056964608, 1);
	}
}

int func_483(int iParam0)
{
	return iParam0;
}

void func_484(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1062((*uParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_485()
{
	if (does_entity_exist(iVar2444))
	{
		delete_mission_train(&iLocal_2446);
	}
	func_1063();
	func_1064();
}

void func_486(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_487(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_486((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_488()
{
	func_1065(iVar1929, 0, 0f, 0, 1, 0, 0, 0);
	func_1065(iVar1930, 0, 0f, 0, 1, 0, 0, 0);
}

void func_489()
{
	func_1065(iVar1933, 0, 1f, 0, 1, 0, 0, 0);
}

void func_490()
{
	func_1065(iVar1934, 0, 0f, 0, 1, 0, 0, 0);
	func_1065(iVar1935, 0, 0f, 0, 1, 0, 0, 0);
	func_492(0);
}

void func_491()
{
	func_1065(iVar1931, 0, 0f, 0, 1, 0, 0, 0);
	func_1065(iVar1932, 0, 0f, 0, 1, 0, 0, 0);
	_0x0c0a373d181bf900(iVar1931);
	_0x0c0a373d181bf900(iVar1932);
	func_1065(iVar1936, 0, 0f, 0, 1, 0, 0, 0);
	func_1065(iVar1937, 0, 0f, 0, 1, 0, 0, 0);
}

void func_492(bool bParam0)
{
	if (bParam0)
	{
		_0x7f458b543006c8fe(965922748, 8);
		_0x7f458b543006c8fe(965922748, 4);
		_0x7f458b543006c8fe(965922748, 16);
		_0x7f458b543006c8fe(1634115439, 8);
		_0x7f458b543006c8fe(1634115439, 4);
		_0x7f458b543006c8fe(1634115439, 16);
	}
	else
	{
		_0x0c0a373d181bf900(965922748);
		_0x0c0a373d181bf900(1634115439);
	}
}

void func_493(bool bParam0)
{
	if (!does_rayfire_map_object_exist(iVar2546))
	{
		iLocal_2549 = get_rayfire_map_object(func_409(7, 1), 10f, sVar1937);
	}
	if (!does_rayfire_map_object_exist(iVar2547))
	{
		iLocal_2550 = get_rayfire_map_object(func_409(7, 1), 10f, sVar1938);
	}
	if (bParam0)
	{
		if (does_rayfire_map_object_exist(iVar2546))
		{
			if (get_state_of_rayfire_map_object(iVar2546) != 10)
			{
				set_state_of_rayfire_map_object(iVar2546, 9);
			}
		}
		if (does_rayfire_map_object_exist(iVar2547))
		{
			if (get_state_of_rayfire_map_object(iVar2547) != 10)
			{
				set_state_of_rayfire_map_object(iVar2547, 9);
			}
		}
		func_203(1743048395, 1, 0);
		iLocal_1005 = 7;
	}
	else
	{
		iLocal_1005 = 0;
		func_196(&uLocal_1757, 128);
		if (does_rayfire_map_object_exist(iVar2546))
		{
			if (get_state_of_rayfire_map_object(iVar2546) != 5)
			{
				set_state_of_rayfire_map_object(iVar2546, 4);
			}
		}
		if (does_rayfire_map_object_exist(iVar2547))
		{
			if (get_state_of_rayfire_map_object(iVar2547) != 5)
			{
				set_state_of_rayfire_map_object(iVar2547, 4);
			}
		}
	}
}

void func_494(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

bool func_495(char[4] cParam0)
{
	return func_1066(&(cParam0->f_7375));
}

void func_496(var uParam0)
{
	func_1067(uParam0);
	if (does_cam_exist(uParam0->f_70))
	{
		destroy_cam(uParam0->f_70, false);
	}
}

void func_497(int iParam0, bool bParam1)
{
	if (!func_264(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 35)
	{
		iVar0 = func_1068(iParam0, iVar1);
		if (func_1069(iVar0))
		{
			func_1070(iVar0, bParam1);
		}
		iVar1++;
	}
}

int func_498(bool bParam0)
{
	if (func_20() == -1)
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

void func_499(int iParam0, bool bParam1)
{
	func_1071(iParam0, -727924611, bParam1);
	iVar0 = 0;
	while (iVar0 < 95)
	{
		if (!func_1072(iVar0))
		{
		}
		else
		{
			func_1071(iParam0, func_1073(iVar0), bParam1);
		}
		iVar0++;
	}
}

void func_500(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_501(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

void func_502()
{
	if (Global_1934765->f_286 > 300)
	{
		Global_1934765->f_286 = 300;
	}
	_0x2f9ac754fe179d58(func_1074());
}

int func_503(int iParam0)
{
	if (!func_501(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_504(int iParam0)
{
	return iParam0 != 0;
}

int func_505(int iParam0)
{
	if (!func_501(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_506(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 - (Global_1359489->f_16 && iParam0));
}

bool func_507(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_20() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_508(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (!func_507(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_509(int iParam0)
{
	func_1075(iParam0, 8, 0);
}

bool func_510(char[4] cParam0, bool bParam1)
{
	return func_514(cParam0, bParam1, &uVar0);
}

void func_511(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(bParam0);
	func_486(&iVar0);
}

void func_512(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_514(cParam0, bParam1, &iVar0))
	{
		return;
	}
	func_1076(cParam0->f_5423[iVar0], iParam2);
}

void func_513(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_514(cParam0, bParam1, &iVar0))
	{
		return;
	}
	func_1077(cParam0->f_5423[iVar0], iParam2);
}

bool func_514(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_271(cParam0->f_5423[iVar0]))
		{
			if (&cParam0->f_5423[iVar0] == bParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_515(var uParam0)
{
	if (func_561(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_561(uParam0, 1024);
	if (func_561(uParam0, 128) || bVar0)
	{
		if (func_561(uParam0, 4096))
		{
			if (!func_561(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1077(uParam0, 2048);
				return;
			}
		}
		else if (func_561(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1076(uParam0, 2048);
		}
		if (func_561(uParam0, 512))
		{
			if (func_562(uParam0->f_10))
			{
				if (func_877(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1078(uParam0->f_10))
					{
						func_566(uParam0->f_10, 1);
						func_1079(uParam0->f_10, 0);
					}
				}
				else if ((func_1078(uParam0->f_10) && !bVar0) && !func_561(uParam0, 16384))
				{
					func_566(uParam0->f_10, 0);
					func_1079(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_877(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_877(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_561(uParam0, 512))
	{
		if (func_562(uParam0->f_10))
		{
			if (func_1078(uParam0->f_10))
			{
				func_566(uParam0->f_10, 0);
				func_1079(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

void func_516(int iParam0)
{
	if (!func_1045(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 != (*Global_1360165)[iParam0]->f_13 || func_1080(iParam0, 36, 1))
	{
		func_1049(iParam0, 36, 1);
		(*Global_1360165)[iParam0]->f_12 = (*Global_1360165)[iParam0]->f_13;
		func_1081(iParam0, &((*Global_1360165)[iParam0]->f_2));
	}
}

void func_517(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_284(iParam0, 64);
	func_285();
}

void func_518(int iParam0)
{
	iVar0 = func_1082(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_519(int iParam0)
{
	iVar0 = func_1082(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_520()
{
	func_519(-939420910);
	func_519(-1187950766);
	func_519(356365161);
	func_519(753127042);
	func_519(-2038424081);
	func_519(1884271742);
	func_519(459290420);
}

void func_521()
{
	func_519(704802028);
	func_519(588987611);
	func_519(2008888900);
	func_519(1649996811);
	func_519(227918160);
	func_519(168171957);
	func_519(1193080109);
	func_519(-491981251);
	func_519(-639037538);
	func_519(-618620429);
}

bool func_522(int iParam0)
{
	iVar0 = func_1082(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_523(int iParam0)
{
	return func_1083(iParam0, 2);
}

int func_524(int iParam0)
{
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2] < iParam0)
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

int func_525(int iParam0)
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

int func_526(int iParam0)
{
	return iParam0 & 31;
}

bool func_527()
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

int func_528(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_529(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_530(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_531()
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

int func_532(int iParam0)
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
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_533(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_534(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1084(iParam0);
	}
	else
	{
		func_1085(iParam0, iParam1);
	}
	func_1086();
}

bool func_535(int iParam0)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	switch (func_212(iParam0))
	{
		case 1:
			switch (func_289(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_289(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_536(int iParam0)
{
	iVar2 = func_498(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_648(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1088(func_1087(iParam0), 6);
}

void func_537(int iParam0)
{
	iVar2 = func_498(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_648(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1089(func_1087(iParam0), 6);
}

int func_538(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_539(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*Global_1898164->f_1[0] = { Var0 };
		return 1;
	}
	*Global_1898164->f_1[iParam0] = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_1090(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_540(int iParam0)
{
	return iParam0 != 0;
}

bool func_541(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_542(int iParam0, var uParam1)
{
	if (!func_541(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1091(iParam0, *uParam1, 0);
	func_1092(uParam1);
	Global_1935183->f_24 = 1;
}

void func_543(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_544(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_596() - fParam1);
	func_1093(uParam0, 1);
	func_1094(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_545(var uParam0)
{
	return func_236(*uParam0, 2);
}

int func_546()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_547(bool bParam0)
{
	if (func_1095())
	{
		Global_1357509 = 1;
	}
	if (func_1096(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_548(int iParam0, int iParam1)
{
	Var0 = { func_873(iParam0, iParam1) };
	Var0.f_3 = func_874(iParam0, iParam1);
	return Var0;
}

int func_549(int iParam0)
{
	if (func_212(iParam0) == 1)
	{
		return func_289(iParam0);
	}
	return -1;
}

int func_550(int iParam0)
{
	if (func_212(iParam0) == 8)
	{
		return func_289(iParam0);
	}
	return -1;
}

char[] func_551(int iParam0)
{
	if (!func_290(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_552(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_82(32768))
	{
		return;
	}
	if (!func_82(32768))
	{
		func_1097(1, bParam1);
	}
	_queue_savegame_operation(iParam0);
	_copy_memory((*Global_2621440)[iParam0], &Global_40, 12066);
	_copy_memory((*Global_2645573)[iParam0], &Global_12106, 5398);
	_copy_memory((*Global_2656370)[iParam0], &Global_17504, 3206);
	_copy_memory((*Global_2662783)[iParam0], &Global_20710, 2408);
	_copy_memory((*Global_2667600)[iParam0], &Global_23118, 1769);
	_copy_memory((*Global_2671139)[iParam0], &Global_24887, 1909);
	_copy_memory((*Global_2674958)[iParam0], &Global_26796, 777);
	_copy_memory((*Global_2676513)[iParam0], &Global_27573, 4501);
	_copy_memory((*Global_2685516)[iParam0], &Global_32074, 4234);
	if (func_82(32768))
	{
		(*Global_2621440)[iParam0]->f_9.f_14 = func_302();
	}
}

void func_553(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_389(vParam1, 1);
}

bool func_554(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_555(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_556(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_557(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_558(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_559(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_560()
{
	return Global_1109400->f_245;
}

bool func_561(var uParam0, int iParam1)
{
	return func_195(uParam0->f_64, iParam1);
}

bool func_562(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_563(int iParam0)
{
	return func_757(iParam0, 16, 1);
}

void func_564(char[4] cParam0, bool bParam1)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_514(cParam0, bParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(bParam1) && func_1098(cParam0, get_object_index_from_entity_index(bParam1)))
	{
		_0x4465c3d1475bd3fd(get_entity_model(bParam1));
	}
	if (does_blip_exist(cParam0->f_5423[iVar0]->f_8))
	{
		remove_blip(&(cParam0->f_5423[iVar0]->f_8));
	}
	Var1.f_5 = 3;
	Var1.f_10 = -1;
	Var1.f_12 = 5;
	Var1.f_23 = 10;
	Var1.f_23.f_1 = 3;
	Var1.f_23.f_1.f_1 = 500;
	Var1.f_23.f_1.f_2 = 10000;
	Var1.f_23.f_1.f_4 = 3;
	Var1.f_23.f_1.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	_copy_memory(cParam0->f_5423[iVar0], cParam0->f_5423[(cParam0->f_13145 - 1)], 65);
	_copy_memory(cParam0->f_5423[(cParam0->f_13145 - 1)], &Var1, 65);
	cParam0->f_13145 = (cParam0->f_13145 - 1);
}

void func_565(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	if (!is_entity_dead(bParam0))
	{
		if (is_ped_in_group(bParam0))
		{
			remove_ped_from_group(bParam0);
		}
		set_ped_can_ragdoll(bParam0, true);
		set_ped_can_ragdoll_from_player_impact(bParam0, true);
	}
}

void func_566(int iParam0, bool bParam1)
{
	if (!func_1045(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1099(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1075(iParam0, 1, 0);
		}
	}
	func_1075(iParam0, 16, bParam1);
}

void func_567(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_562(iParam0))
	{
		return;
	}
	if (func_563(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1051(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_566(iParam0, 0);
	func_1075(iParam0, 4, 0);
	func_509(iParam0);
	func_1100(iParam0);
	func_1049(iParam0, 37, 1);
	bVar0 = func_1101(Global_1360165[iParam0], 0);
	iVar1 = func_1102(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1080(iParam0, 64, 1))
	{
		func_1049(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1049(iParam0, 33, 1);
		func_1049(iParam0, 34, 1);
		func_1103(iParam0, 1056964608, -1, 1061158912);
		func_1104(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1051(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1051(iParam0, 35, 1);
			if (bParam8)
			{
				func_1051(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1105(iParam0, 0);
			if (is_ped_in_group(Global_1360165[iParam0]))
			{
				set_ped_keep_task(Global_1360165[iParam0], true);
			}
			_0xf74e134f40192884(Global_1360165[iParam0], 1);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		}
		if (bVar2)
		{
			_0xbb68908cd11aebdc(iVar1);
		}
		func_1049(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_1051(iParam0, 33, 1);
		func_1104(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_599(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_1051(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1106(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1080(iParam0, 45, 1))
	{
		func_1049(iParam0, 45, 1);
	}
	func_1107(iParam0, 16, 1);
	func_1049(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_1101(func_1046(iParam0), 0))
		{
			func_471(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_568(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_279(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_575(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_575(iParam0);
	}
}

bool func_569(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (*Global_1900383)[iParam0]->f_2;
}

void func_570(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_25 = 0;
}

void func_571(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
}

bool func_572(int iParam0)
{
	if (!func_1108(iParam0))
	{
		return false;
	}
	if (!func_348())
	{
		return true;
	}
	return false;
}

void func_573(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_576(iParam0))
	{
		return;
	}
	bVar0 = func_232(iParam0);
	func_1109(iParam0);
	if (!_0x88ad6cc10d8d35b2(bVar0))
	{
		set_entity_as_mission_entity(bVar0, true, true);
	}
	iVar1 = get_entity_model(bVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_572(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&bVar0);
	func_1110(iParam0, 0);
	func_575(iParam0);
}

bool func_574(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (is_entity_dead(bParam0) || is_ped_injured(bParam0))
	{
	}
	iVar0 = func_278(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_575(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
}

bool func_576(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

void func_577(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	bVar0 = func_232(iParam0);
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	bVar1 = false;
	if (is_entity_dead(bVar0) || is_ped_injured(bVar0))
	{
		bVar1 = true;
	}
	if (!_0xa0bc8faed8cfeb3c(bVar0))
	{
		return;
	}
	if (func_1111(iParam0, 64))
	{
		func_570(iParam0);
		return;
	}
	bVar2 = false;
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26) && !does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		if (!get_blip_from_entity(bVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_646(42);
	if (bVar1)
	{
		if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_26));
		}
		if (bVar0 == _get_saddle_horse_for_player(player_id()) && bVar3)
		{
			if (!does_blip_exist((*Global_1900383)[iParam0]->f_27))
			{
				(*Global_1900383)[iParam0]->f_27 = _blip_add_for_entity(-515518185, bVar0);
				set_blip_sprite((*Global_1900383)[iParam0]->f_27, -1327110633, true);
				func_1112(&((*Global_1900383)[iParam0]->f_27));
			}
		}
		else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_27));
		}
		return;
	}
	else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	bVar4 = false;
	if (is_ped_on_mount(Global_35))
	{
		if (Global_1935630->f_40 == bVar0)
		{
			bVar4 = true;
		}
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26) && bVar4)
	{
		func_570(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0]->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_1113(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
			{
				remove_blip(&((*Global_1900383)[iParam0]->f_26));
			}
			return;
		}
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		(*Global_1900383)[iParam0]->f_26 = _blip_add_for_entity(iVar5, bVar0);
		(*Global_1900383)[iParam0]->f_25 = 0;
		func_1114(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1111(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(bVar0);
	bVar10 = false;
	iVar11 = func_1115(iParam0);
	if (does_entity_exist(iVar11))
	{
		if (!is_entity_dead(iVar11))
		{
			if (get_mount(iVar11) == bVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { get_entity_coords(bVar0, true, false) };
	fVar15 = func_1116(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1117(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 3)
		{
			iVar17 = -401963276;
			(*Global_1900383)[iParam0]->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = _get_ped_remaining_revival_time(bVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 4)
		{
			iVar17 = -1380599892;
			(*Global_1900383)[iParam0]->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 2)
		{
			iVar17 = 1313031610;
			(*Global_1900383)[iParam0]->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 1)
		{
			iVar17 = -1012863186;
			(*Global_1900383)[iParam0]->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1118((*Global_1900383)[iParam0]->f_26);
		func_1119((*Global_1900383)[iParam0]->f_26);
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar18);
	}
	if ((_get_saddle_horse_for_player(player_id()) == bVar0 && bVar3) && !bVar9)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	if (func_878(bVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar20);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 561559387);
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, -201249929);
	}
	iVar21 = func_1113(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		_0x44813684f72b563c(bVar0, (*Global_1900383)[iParam0]->f_26);
	}
	else
	{
		_0x97f6f158cc5b5ca2(bVar0, (*Global_1900383)[iParam0]->f_26);
		_0x7563cbca99253d1a(bVar0, iVar22);
	}
}

int func_578(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_579(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_580(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_581(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_582(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_583(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_576(iParam0))
	{
		return false;
	}
	iVar0 = func_232(iParam0);
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return true;
	}
	return false;
}

void func_584(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_576(iParam0))
	{
		return;
	}
	iVar0 = func_232(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_585(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_754(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_586(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1120())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_754(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1121(iVar0);
			func_1122(iVar0, 0, 0);
		}
		func_754(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_95(func_94(1644987397), iVar1);
	}
}

bool func_587(int iParam0)
{
	if (!func_264(iParam0))
	{
		return false;
	}
	return func_268(iParam0, 67108864);
}

void func_588(int iParam0)
{
	StringCopy(&cVar0, func_1123(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1124(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_589(int iParam0)
{
	StringCopy(&cVar0, func_1123(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1124(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_590(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_591(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_592(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_593(int iParam0)
{
	if (!func_557(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_594(int iParam0)
{
	if (func_557(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_595(int iParam0)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = round((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

float func_596()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_597(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1125(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0]->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_20() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

bool func_598(int iParam0)
{
	if (!func_1045(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_599(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_600(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1126(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_601(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_614(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_602(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_603(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_604()
{
	return Global_40.f_11095.f_35;
}

void func_605(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1127(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_606(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_606(int iParam0)
{
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_1127(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1128(1);
	}
}

bool func_607(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_608()
{
	iVar0 = func_1129((*Global_1347702)[9]->f_15);
	iVar1 = func_1129((*Global_1835011)[69]->f_1);
	if (func_1130(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_609(int iParam0)
{
	if (!func_206(iParam0))
	{
		return false;
	}
	return func_344((*Global_1835011)[iParam0]->f_1, 1);
}

int func_610(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1131(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1132(iVar6);
	}
	return iVar5;
}

int func_611(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1133(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_612(int iParam0, bool bParam1)
{
	func_1134(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_613(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
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
			return false;
		default:
			break;
	}
	return false;
}

void func_614(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_612(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_615(2, *uParam0);
		}
		else
		{
			func_616(2, *uParam0);
		}
	}
	func_1135(uParam0);
}

void func_615(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483] = iParam0;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_1 = iParam1;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_616(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406] = iParam0;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_1 = iParam1;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

void func_617(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1136(iParam0, iParam1, bParam2);
}

int func_618(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_619(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_620(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1137();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1138(iParam0);
		}
		if (does_entity_exist(iParam5))
		{
			if (decor_exist_on(iParam5, "honor_override"))
			{
				iParam0 = (decor_get_int(iParam5, "honor_override") * -1);
				decor_remove(iParam5, "honor_override");
			}
			else if (decor_exist_on(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - decor_get_int(iParam5, "honor_bank"));
				decor_set_int(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_646(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1139())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = ceil((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = floor((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_326(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1137();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1140(iVar1);
		func_1142(func_1141(), 0, 4000);
		func_1143(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1144(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_95(func_94(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_619(14))
				{
					sVar7 = "Honor_Increase_Big";
					animpostfx_play("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_1145(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_754(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_754(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_619(4))
				{
					sVar7 = "Honor_Decrease_Big";
					animpostfx_play("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_1145(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_754(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_754(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_94(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_379(10, 1);
	}
}

void func_621(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_622(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_623(int iParam0)
{
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_624(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_625(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1146(iParam0) && func_1147(iParam0))
		{
			func_1148(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_626(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1149(iParam0, iParam1);
	Var0 = { func_735(iParam0, 0, 1) };
	iVar5 = func_1150(iParam0, &Var0, 0, 0);
	iVar6 = func_1151(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_644(iParam0, -2051813666))
		{
			func_342(583, 1);
		}
		else
		{
			func_342(582, 0);
		}
	}
	if (func_1152(iParam0, &Var0, *iParam1, 0, 0))
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

void func_627(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_705(iParam0, -949239683))
	{
		case -1565009253:
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
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

int func_628(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_643(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1153(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1154(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_498(bParam2), iParam0, 0);
	return iVar2;
}

bool func_629(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_630(iParam0) != 0;
}

int func_630(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1155())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1156(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_631(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_632(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1155())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_631(iVar0))
		{
			if (func_364(func_1156(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_633(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1157(48);
	func_384(0, -1);
}

bool func_634(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_344((*Global_1347702)[iParam0]->f_15, 1);
}

int func_635(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_636(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_637(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_344((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_638(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_290(iParam0))
	{
		return false;
	}
	return func_208((*Global_1347702)[iParam0]->f_15);
}

int func_639()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_364(func_1158(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_640(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_419() && (func_638(38) || func_634(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_419() && (func_638(39) || func_634(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_1159(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_419() && (func_638(41) || func_634(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_419() && (func_638(49) || func_634(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_1159(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1160(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1161(iParam0, iVar13, iVar14))
	{
	}
	if (func_1162(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1163(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1164(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1165(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1166(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_641(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_642(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_419() && (func_638(38) || func_634(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_419() && (func_638(39) || func_634(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_419() && (func_638(49) || func_634(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_419() && (func_638(38) || func_634(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_1167(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1167(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_761(_create_var_string(2, sVar0), _create_var_string(2, func_1168(func_636(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1167(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1167(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_419() && (func_638(39) || func_634(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1167(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1167(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_419() && (func_638(49) || func_634(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1167(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1167(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1167(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1167(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_643(int iParam0)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_644(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
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

bool func_645(int iParam0, int iParam1)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_646(int iParam0)
{
	if (!func_1169(iParam0))
	{
		return false;
	}
	return func_1170(iParam0);
}

void func_647(int iParam0)
{
	if (!func_1169(iParam0))
	{
		return;
	}
	func_1171(iParam0);
	func_1172(iParam0);
}

int func_648(int iParam0)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_649(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
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
	if (func_624(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1173(iVar0) || func_122(iVar0))
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

int func_650(int iParam0, bool bParam1)
{
	if (!func_624(iParam0, 0))
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

void func_651(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_738(iParam0))
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

bool func_652(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_498(bParam0));
}

bool func_653(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_735(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1174((386 + iVar28), 1);
			if (func_1175(iParam0, &Var0, iVar5, 0))
			{
				if (func_1176(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1177(iParam0, Var0, iVar5, 0) };
					func_1178(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_652(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_654(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1179(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_654(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_656(iParam0))
	{
		return false;
	}
	if (!func_652(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_655(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_650(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_651(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1180(iVar0);
			}
		}
		if (!func_1152(iParam0, &uVar1, 1, 0, 0))
		{
			func_1148(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1181(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_653(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_653(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_653(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1139())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1182(iVar0))
				{
					func_653(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_653(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1183(Global_35, 2, 0, 1);
				if ((((func_738(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_646(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_738(iVar7) && func_646(24))
				{
					if (!func_653(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_653(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_653(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_342(480, 1);
	}
	return true;
}

bool func_656(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_657(int iParam0, int iParam1, int iParam2)
{
	if (!func_656(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_738(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
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
	if (func_364(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
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
		func_692(func_1184(iParam0), func_691(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_344((*Global_1835011)[14]->f_1, 1))
			{
				func_342(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_652(0))
	{
		if (func_654(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_697(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_658(int iParam0)
{
	if ((iParam0 == -615217896 && !func_355()) || iParam0 != -615217896)
	{
		if (func_1185(Global_35, iParam0, &uVar0))
		{
			func_676(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_682();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_682();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_682();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_680();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_678();
			break;
	}
}

void func_659(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_678();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_679();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_680();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_681();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_682();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1186();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1187();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_660(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_661(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_662(int iParam0)
{
	bVar0 = func_644(iParam0, -2017733358);
	if (func_1188() < 3)
	{
		if (bVar0)
		{
			if (func_1190(func_1189(iParam0), iParam0))
			{
				func_692(79, func_691(func_1189(iParam0)), 1);
			}
			else
			{
				func_692(78, func_691(func_1189(iParam0)), 1);
			}
		}
		else
		{
			func_692(80, func_691(func_1191(iParam0)), 1);
		}
	}
}

bool func_663()
{
	if (((((func_1192(839908568, 400) || func_1192(-1134030454, 400)) || func_1192(623353496, 400)) || func_1192(-344413337, 400)) || func_1192(-1664948962, 400)) || func_1192(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_664(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_772(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_585(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_586(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_665(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_640(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_642(51, 0, 0, 0, 0, -1, 0);
			func_1193(8192);
			break;
		case 581047644:
			func_640(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_642(51, 0, 0, 0, 0, -1, 0);
			func_1193(524288);
			break;
		case -644199619:
			func_640(39, 0, 0, 0, 0, 0, 1, 0);
			func_642(39, 0, 0, 0, 0, -1, 0);
			func_1194(16);
			break;
		case 684296857:
			func_640(41, 0, 0, 0, 0, 0, 1, 0);
			func_642(41, 0, 0, 0, 0, -1, 0);
			func_1195(8);
			break;
		case 466137807:
			func_640(49, 0, 0, 0, 0, 0, 1, 0);
			func_642(49, 0, 0, 0, 0, -1, 0);
			func_1196(16);
			break;
		case -1087522507:
			func_640(43, 0, 0, -1791518714, func_1197(1), 0, -1, 0);
			func_1198(1);
			break;
		case -405829000:
			func_640(43, 0, 0, -2087881550, func_1197(2), 0, -1, 0);
			func_1198(2);
			break;
		case 378660860:
			func_640(43, 0, 0, 1908068621, func_1197(4), 0, -1, 0);
			func_1198(4);
			break;
		case 1566111097:
			func_640(43, 0, 0, 1611247019, func_1197(8), 0, -1, 0);
			func_1198(8);
			break;
		case 1276007140:
			func_640(43, 0, 0, 1319635688, func_1197(16), 0, -1, 0);
			func_1198(16);
			break;
	}
}

void func_666(int iParam0)
{
	if (func_1199() == 1)
	{
		if (func_634(39))
		{
			func_342(342, 0);
		}
		else
		{
			func_342(343, 0);
			func_1194(1);
		}
	}
	if (func_1199() >= 30)
	{
		func_342(344, 0);
	}
	func_640(39, 0, 0, 0, 0, 0, -1, 0);
	func_642(39, 0, 0, func_1199(), 30, 1, 0);
}

void func_667(int iParam0)
{
	if (func_1200() == 1)
	{
		if (func_634(49))
		{
			func_342(409, 0);
		}
		else
		{
			func_342(410, 0);
			func_1196(1);
		}
	}
	if (func_1200() >= 10)
	{
		func_342(411, 0);
	}
	func_640(49, 0, 0, 0, 0, 0, -1, 0);
	func_642(49, 0, 0, func_1200(), 10, 1, 0);
}

void func_668(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_342(437, 0);
			func_342(440, 0);
			func_1201(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_640(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_642(51, 0, 0, sVar0, func_1159(-949689219, 20), 1, 0);
			func_1193(1);
			func_203(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1201(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_640(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_642(51, 0, 0, sVar0, func_1159(-1248968496, 20), 1, 0);
			func_1193(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1201(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_640(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_642(51, 0, 0, sVar0, func_1159(1706369307, 20), 1, 0);
			func_1193(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1201(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_640(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_642(51, 0, 0, sVar0, func_1159(1520110311, 20), 1, 0);
			func_1193(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_342(438, 0);
			func_1201(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_640(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_642(51, 0, 0, sVar0, func_1159(-1992824800, 20), 1, 0);
			func_1193(32768);
			break;
		default:
			func_342(439, 0);
			break;
	}
}

void func_669()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_670(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_634(43))
		{
			if (iParam0 == 281887510)
			{
				func_342(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_342(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_342(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_342(400, 0);
			}
		}
		else if (func_644(iParam0, 412399755))
		{
			func_1202(-1791518714);
			if (func_1203() == 0)
			{
				func_384(0, 10);
				iVar1 = func_1204(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1205(iParam0) < func_1206(iParam0))
					{
						func_640(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_642(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_634(44))
		{
			if (iParam0 == -222563712)
			{
				func_342(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_342(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_342(401, 0);
			}
		}
		else if (func_644(iParam0, 709057512))
		{
			func_1202(-2087881550);
			if (func_1203() == 1)
			{
				func_384(0, 10);
				iVar1 = func_1204(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1205(iParam0) < func_1206(iParam0))
					{
						func_640(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_642(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_634(45))
		{
			if (iParam0 == 2116770557)
			{
				func_342(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_342(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_342(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_342(398, 0);
			}
		}
		else if (func_644(iParam0, -1478961327))
		{
			func_1202(1908068621);
			if (func_1203() == 2)
			{
				func_384(0, 10);
				iVar1 = func_1204(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1207(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1208(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1157(48);
					}
					if (func_1205(iParam0) < func_1206(iParam0))
					{
						func_640(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_642(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1205(iParam0) < func_1206(iParam0))
					{
						func_640(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_642(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_634(46))
		{
			if (iParam0 == 2085530337)
			{
				func_342(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_342(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_342(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_342(406, 0);
			}
		}
		else if (func_644(iParam0, -1238404098))
		{
			func_1202(1611247019);
			if (func_1203() == 3)
			{
				func_384(0, 10);
				iVar1 = func_1204(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1205(iParam0) < func_1206(iParam0))
					{
						func_640(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_642(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_634(47))
		{
			if (iParam0 == -1521783510)
			{
				func_342(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_342(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_342(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_342(403, 0);
			}
		}
		else if (func_644(iParam0, 1160548794))
		{
			func_1202(1319635688);
			if (func_1203() == 4)
			{
				func_384(0, 10);
				iVar1 = func_1204(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1205(iParam0) < func_1206(iParam0))
					{
						func_640(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_642(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_671(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1207(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1208(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1157(48);
		}
	}
}

void func_672(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_364(func_1209(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1210(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1211(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_673(int iParam0, int iParam1, int iParam2)
{
	if (func_20() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_664(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_664(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_664(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_664(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_664(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_664(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_664(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_664(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_664(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_664(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_664(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_664(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_664(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1212())
			{
				func_664(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_664(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_664(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_664(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_664(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_664(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_664(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_664(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_664(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_664(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_664(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_664(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_664(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_674(int iParam0)
{
	if (func_634(41))
	{
		func_342(363, 0);
	}
	else
	{
		func_342(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1213(-1865241121);
			func_1214(-642026005);
			func_1215(-642026005);
			func_384(0, 10);
			break;
		case -2108314374:
			func_1213(2117142684);
			func_1214(-940584364);
			func_1215(-940584364);
			func_384(0, 10);
			break;
		case -1193798153:
			func_1213(-1409326024);
			func_1214(1972645282);
			func_1215(1972645282);
			func_384(0, 10);
			break;
		case -787702678:
			func_1213(-641744968);
			func_1214(1667205433);
			func_1215(1667205433);
			func_384(0, 10);
			break;
		case -804542901:
			func_1213(-946988203);
			func_1214(1362715885);
			func_1215(1362715885);
			func_384(0, 10);
			break;
		case -1696275132:
			func_1213(-646136018);
			func_1214(1053540370);
			func_1215(1053540370);
			func_384(0, 10);
			break;
		case -161595323:
			func_1213(-955835837);
			func_1214(-1100103852);
			func_1215(-1100103852);
			func_384(0, 10);
			break;
		case -1114363619:
			func_1213(-179276075);
			func_1214(-1409869209);
			func_1215(-1409869209);
			func_384(0, 10);
			break;
		case -368407134:
			func_1213(-492711560);
			func_1214(-1760235357);
			func_1215(-1760235357);
			func_384(0, 10);
			break;
		case 1997759228:
			func_1213(1764383959);
			func_1214(-138366827);
			func_1215(-138366827);
			func_384(0, 10);
			break;
		case 1265573293:
			func_1213(317501533);
			func_1214(-1261163843);
			func_1215(-1261163843);
			func_384(0, 10);
			break;
		case -1030441283:
			func_1213(817753087);
			func_1214(-963523016);
			func_1215(-963523016);
			func_384(0, 10);
			break;
		case -1490884871:
			func_1213(576606016);
			func_1214(560825326);
			func_1215(560825326);
			func_384(0, 10);
			break;
		case -395458616:
			func_1213(814934957);
			func_1214(858269539);
			func_1215(858269539);
			break;
	}
}

void func_675(int iParam0, int iParam1)
{
	func_1216(iParam0, iParam1, &uVar0);
}

int func_676(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_735(iParam1, 1, 0) };
		iParam3 = func_736(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1217(iParam1, iParam2, func_723(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1218(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_723(iParam3, 1)])
			{
				func_734(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1219(32768) && iParam1 != &Global_1946804->f_57[func_723(iParam3, 1)])
			{
				func_1220();
				func_734(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(bParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(bParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_734(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1221(iParam3);
	if (is_ped_a_player(bParam0))
	{
		func_734(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1222(0);
			func_1223(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_734(19, 0, iVar5, bParam0, 0);
	}
	return 1;
}

bool func_677(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1183(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1183(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1224("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1225(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_1226(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_678()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_679()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_680()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_681()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_682()
{
	func_1227();
	func_1228();
	func_1229();
}

void func_683(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_684(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_1167(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_685(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_686(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_687(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_688(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_689(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_690(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_691(int iParam0)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_692(int iParam0, int iParam1, bool bParam2)
{
	func_730(iParam0, &iVar0, &iVar1);
	if (!func_731(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1230(iParam0, 1024))
	{
		return;
	}
	func_732(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_693(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_730(iParam0, &iVar0, &iVar1);
	if (!func_731(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1230(iParam0, 1024))
	{
		return;
	}
	func_732(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_694()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1155())
	{
		return func_695();
	}
	iVar4 = (func_1155() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1155())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1231(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1156(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_695()
{
	iVar0 = get_random_int_in_range(0, func_1155());
	return func_1156(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_696(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

bool func_697(int iParam0, int iParam1, int iParam2)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_735(iParam0, 0, 1) };
	Var5 = { func_1177(iParam0, Var0, Var0.f_4, 0) };
	return func_1232(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_698(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_648(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1233(81053684, 0) <= 0)
			{
				func_734(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_734(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1234(iParam0);
			if (func_1235(iVar0))
			{
				func_1236(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_734(30, iParam0, 0, 0, 0);
			}
			if (func_725() == -2125499975 || func_725() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_734(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_725() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_734(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1237(-525676072, 0))
			{
				if (func_1238(-525676072, &iVar1))
				{
					func_734(33, iVar1, 0, 0, 0);
				}
			}
			func_734(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1239(99217379))
		{
			func_676(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_647(24);
		if (func_677(&iVar2, 0))
		{
			func_653(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_699(int iParam0)
{
	if (func_644(iParam0, 943695443))
	{
		func_1240(0, iParam0);
	}
	else if (func_644(iParam0, -2096528786))
	{
		func_1240(1, iParam0);
	}
	else if (func_644(iParam0, -1094167013))
	{
		func_1240(2, iParam0);
	}
	else if (func_644(iParam0, 1936654645))
	{
		func_1240(3, iParam0);
	}
	else if (func_644(iParam0, 1306489306))
	{
		func_1240(4, iParam0);
	}
	else if (func_644(iParam0, 435762317))
	{
		func_1240(5, iParam0);
	}
	else if (func_644(iParam0, 1259363210))
	{
		func_1240(6, iParam0);
	}
	else if (func_644(iParam0, 881398259))
	{
		func_1240(7, iParam0);
	}
	else if (func_644(iParam0, -541549214))
	{
		func_1240(8, iParam0);
	}
	else if (func_644(iParam0, 130796156))
	{
		func_1240(-1, iParam0);
	}
}

int func_700(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1241(&Var4, 1356624740);
	return func_1242(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_701(int iParam0)
{
	if (!func_624(iParam0, 0))
	{
		return Var0;
	}
	if (func_644(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_644(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_644(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_644(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_702(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_344((*Global_1835011)[4]->f_1, 1))
				{
					func_342(109, 1);
				}
			}
			break;
	}
}

void func_703(int iParam0, char* sParam1)
{
	sVar0 = func_1244(func_1243(0));
	func_754(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1245(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_704(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_624(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1246())
	{
		func_1247(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1248(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1248(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_645(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_643(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1249(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_1250(_create_var_string(10, &cVar2, _create_var_string(0, func_691(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_644(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_691(iParam0));
	}
	func_754(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_705(int iParam0, int iParam1)
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

struct<10> func_706(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_707(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_708(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= _0xd389a2549c4efb30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!_0x8750f69a720c2e41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_709(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1251(iParam0, iParam1, 1))
	{
		return false;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = _item_database_get_acquire_costs_count(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (_item_database_get_acquire_cost(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_1251(iParam0, Var2, 1))
				{
					if (func_1252(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1252(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_342(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_214(0, 0, 1))
		{
			func_384(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_710(int iParam0)
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

void func_711(int iParam0)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		case -1704241585:
			iVar0 = 308;
			break;
		case -1267972061:
			iVar0 = 309;
			break;
		case -142033055:
			iVar0 = 310;
			break;
		case 890514341:
			iVar0 = 311;
			break;
		case -58963793:
			iVar0 = 312;
			break;
		case 1882019322:
			iVar0 = 313;
			break;
		case 807302083:
			iVar0 = 314;
			break;
		case 617759310:
			iVar0 = 315;
			break;
		case -378547623:
			iVar0 = 316;
			break;
		case 829545206:
			iVar0 = 317;
			break;
		case 891318243:
			iVar0 = 319;
			break;
		case 431374225:
			iVar0 = 320;
			break;
		case 1619534881:
			iVar0 = 321;
			break;
		case -755457379:
			iVar0 = 322;
			break;
		case 2141714005:
			iVar0 = 323;
			break;
		case 1015404643:
			iVar0 = 324;
			break;
		case 983875052:
			iVar0 = 325;
			break;
		case -1753730528:
			iVar0 = 326;
			break;
		case 2131765035:
			iVar0 = 327;
			break;
		case -1740272183:
			iVar0 = 328;
			break;
		case 1310680212:
			iVar0 = 329;
			break;
		case -1724192342:
			iVar0 = 330;
			break;
		case 912296423:
			iVar0 = 331;
			break;
		case -566881549:
			iVar0 = 332;
			break;
		case 147796381:
			iVar0 = 333;
			break;
		case -120865369:
			iVar0 = 334;
			break;
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_342(iVar0, 0);
	}
}

void func_712()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1253(0);
			_unlock_set_unlocked(-121456797, false);
			func_1254();
		}
		return;
	}
	if (!func_344((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1255();
	if (_0x57e798b54c45ee1a(1685912227) >= 2)
	{
		if (_0x57e798b54c45ee1a(2116153146) < 2)
		{
			_0xe824ce7d13fcb300(2116153146, 2);
		}
	}
	if (_unlock_is_unlocked(-121456797))
	{
		return;
	}
	_unlock_set_unlocked(-121456797, true);
	if (_unlock_is_unlocked(645322743))
	{
		return;
	}
	func_1253(1);
}

void func_713()
{
	if (!func_344((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_335(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_714()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1256(0);
			_unlock_set_unlocked(1244328330, false);
		}
		return;
	}
	if (_unlock_is_unlocked(1244328330))
	{
		return;
	}
	if (_unlock_is_unlocked(-1383789777))
	{
		return;
	}
	if (!func_344((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1256(1);
}

void func_715()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1257(15000, 0, 0, 0, 1);
			func_1256(0);
			_unlock_set_unlocked(398807247, false);
		}
		return;
	}
	if (_unlock_is_unlocked(398807247))
	{
		return;
	}
	if (_unlock_is_unlocked(-1651350587))
	{
		return;
	}
	if (!func_344((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_300(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1256(1);
}

void func_716()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_364(1191437462, 1, 0) && !func_208((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_335(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1258(1))
			{
				func_688(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_364(1119149048, 1, 0) && !func_208((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_335(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1258(2))
			{
				func_688(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1258(4))
		{
			func_688(4);
		}
		if (func_1258(0))
		{
			func_1259(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_364(1191437462, 1, 0))
			{
				func_719(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_364(1119149048, 1, 0))
			{
				func_719(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1258(1))
		{
			func_1259(1);
		}
		if (func_1258(2))
		{
			func_1259(2);
		}
		if (func_1258(4))
		{
			func_1259(4);
		}
		if (!func_1258(0))
		{
			func_688(0);
		}
	}
}

void func_717()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_344((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1260() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_651(127400949);
		if (func_653(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1260() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1261(-2055673461, Var1, 1423542233);
		func_1261(-202131179, Var1, -1264898804);
		func_1261(2013836545, Var1, 1592019450);
		func_1261(1497476650, Var1, 1117400455);
		func_1261(1063571467, Var1, 1150213537);
		func_1261(2107224237, Var1, 1598825281);
		func_1261(1747981656, Var1, -712527121);
		func_1261(-1371140647, Var1, 454332195);
		func_1261(-19142973, Var1, 256105670);
		func_1261(-2074737817, Var1, -1328061889);
		func_1261(-1114256243, Var1, -782241404);
		func_1261(-1653277288, Var1, 1669853467);
		func_1261(1869398132, Var1, -1559225678);
		func_1261(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_738(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_646(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_646(24) && func_738(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_738(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_646(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_718()
{
	if (_unlock_is_unlocked(99890643))
	{
		return;
	}
	if (is_pc_version() || _is_stadia_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
	if (is_orbis_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
	if (is_durango_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
}

int func_719(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1153(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_704(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_364(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_701(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_628(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_628(iParam0, 0, 0) - iParam1) < 0)
		{
			func_719(iParam0, func_628(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_643(iParam0) == -427144552)
	{
		if (!func_1262(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1263(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_652(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_704(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1264(iParam0, iParam1);
	return 1;
}

bool func_720(int iParam0)
{
	switch (func_648(iParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case -413129408:
			return true;
		default:
			break;
	}
	return false;
}

void func_721(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_648(iParam0))
	{
		case -2061583405:
			bVar0 = func_1265(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1265(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1265(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1265(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1265(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1265(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1266();
	}
	if (bParam1)
	{
		func_1267(0, 0);
	}
}

int func_722(int iParam0)
{
	Var0 = { func_735(iParam0, 1, 0) };
	return func_736(Var0.f_4);
}

int func_723(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

void func_724(int iParam0)
{
	if (func_20() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	_0x91ded5dd64bb2691(&Var2);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_723(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1268(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_725()
{
	return Global_1946804->f_1;
}

bool func_726(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1269(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0xed4413cee1bf142c(&Var4))
	{
		return false;
	}
	_0xa63cd20f19b961ab(&bVar2, &Var4, -1516819610);
	_0x44b3a36933ac009c(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1271(uParam0, func_1270(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_723(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1] = iVar0;
				if (bParam5)
				{
					if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1]->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1194786549))
						{
							if (func_1272(iVar3) && func_1273(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
							{
								uParam0->f_1[iVar1]->f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1]->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_1274(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

Vector3 func_727(int iParam0, int iParam1)
{
	if (func_20() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		return *Global_26796.f_26[iParam1]->f_1.f_1[iParam0];
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	return *Global_36638.f_45.f_350.f_26[iParam1]->f_1.f_1[iParam0];
}

int func_728(int iParam0, int iParam1)
{
	vVar0 = { func_727(iParam0, iParam1) };
	return vVar0.x;
}

void func_729(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_730(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_731(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1275(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1276(iParam0))
	{
		return false;
	}
	if (func_1277(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1230(iParam0, 1)) || func_82(32768))
	{
		if (!func_1230(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1278())
	{
		return false;
	}
	return true;
}

void func_732(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_733(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_734(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1279(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = bParam3;
	func_1280(Var0);
}

struct<5> func_735(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1281(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_643(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1177(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1282(bParam1) };
			if (bParam2 && func_1283(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1175(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1175(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1176(iParam0, &Var5, 1728382685))
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
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_1284(bParam1) };
			switch (func_648(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
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
			if (func_1285(iParam0, -1823706425))
			{
				Var0 = { func_1177(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1285(iParam0, -1483207246))
			{
				Var0 = { func_1177(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
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
				Var27.f_9 = -1591664384;
				if (!func_1286(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
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

int func_736(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1287(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_737(int iParam0)
{
	func_1268(Global_1946804->f_1497.f_1[func_723(iParam0, 1)], 2, 6);
	func_1268(Global_1946804->f_1378.f_1[func_723(iParam0, 1)], 2, 6);
}

bool func_738(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_739(int iParam0)
{
	return iParam0 != 0;
}

int func_740(int iParam0)
{
	iVar0 = -1;
	if (!func_739(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_741(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_742(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1288(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_743(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_744(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_745(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_746(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
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
	func_1289(iParam0, iParam6);
	func_1290(iParam0, iParam5);
	func_1291(iParam0, iParam4);
	func_1292(iParam0, iParam3);
	func_1293(iParam0, iParam2);
	func_1294(iParam0, iParam1);
}

bool func_750(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_747(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_746(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_745(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_742(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_743(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_744(iParam0);
	if (iVar5 < 1 || iVar5 > func_748(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_751(int iParam0, bool bParam1)
{
	return func_1130(func_302(), iParam0, bParam1);
}

void func_752(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_753(int iParam0, int iParam1)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1153(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1224("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1225(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_738(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1226(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1226(iVar1);
	}
	return false;
}

var func_754(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_1295(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_755()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1296(iVar1);
		if (!_unlock_is_visible(func_1297(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_756()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1296(iVar0);
		if (!_unlock_is_visible(func_1297(iVar1)))
		{
			_unlock_set_visible(func_1297(iVar1), true);
		}
		iVar0++;
	}
}

bool func_757(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1045(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_758(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_562(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_759()
{
	return (func_215(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_760(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_624(iVar0, 0))
	{
		return 0;
	}
	if (!func_1298(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1299(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_644(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_735(iVar0, 0, 1) };
	iVar10 = func_1300(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1301(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1302(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_335(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1257(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_761(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_762(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_754(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_763(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_764(bool bParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (_spactionproxy_get_next_pending_crafting_action(&uVar0))
		{
			if (!_spactionproxy_process_action(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (_spactionproxy_get_next_pending_buy_action(&uVar9))
		{
			if (!_spactionproxy_process_action(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_765(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1120())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1120())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_210(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_289(iParam0);
	if (func_212(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_212(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1303(1, iVar1);
					func_1303(8, iVar1);
					func_1303(7, iVar1);
					break;
				case 12:
					func_1303(6, iVar1);
					break;
				case 53:
					func_1303(3, iVar1);
					func_1303(7, iVar1);
					func_1303(4, iVar1);
					break;
				case 20:
					func_1303(8, iVar1);
					break;
				case 19:
					func_1303(1, iVar1);
					func_1303(2, iVar1);
					break;
				case 24:
					func_1303(3, iVar1);
					func_1303(9, iVar1);
					func_1303(20, iVar1);
					break;
				case 28:
					func_1303(1, iVar1);
					break;
				case 34:
					func_1303(23, iVar1);
					func_1303(2, iVar1);
					func_1303(18, iVar1);
					break;
				case 29:
					func_1303(0, iVar1);
					func_1303(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1303(0, iVar1);
					func_1303(3, iVar1);
					func_1303(2, iVar1);
					func_1303(11, iVar1);
					func_1303(6, iVar1);
					func_1303(25, iVar1);
					func_1303(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1303(5, iVar1);
					break;
				case 63:
					func_1303(1, iVar1);
					func_1303(3, iVar1);
					break;
				case 37:
					func_1303(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_380(0, 10, 11, 2116153146))
			{
				func_1303(7, iVar1);
				func_1303(4, iVar1);
			}
			else if (iParam0 == func_380(0, 7, 11, -379687487))
			{
				func_1303(8, iVar1);
				func_1303(15, iVar1);
			}
			else if (iParam0 == func_380(0, 8, 11, -1386089015))
			{
				func_1303(3, iVar1);
			}
			else if (iParam0 == func_380(0, 11, 11, -1952009645))
			{
				func_1303(6, iVar1);
				func_1303(3, iVar1);
			}
			else if (iParam0 == func_380(0, 12, 11, 2065895756))
			{
				func_1303(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1304()));
	if (!func_1305(629))
	{
		func_342(629, 0);
	}
}

int func_766(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_767(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_768(int iParam0, int iParam1, int iParam2)
{
	if (!func_767(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*iParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*iParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*iParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*iParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*iParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*iParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*iParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*iParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*iParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*iParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*iParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*iParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*iParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*iParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*iParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*iParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*iParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

int func_769()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_770(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_771(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1306(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_769())
	{
		return -1;
	}
	iVar0 = func_770(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_534(iVar1, 0);
	func_603(iVar1, 0);
	func_1307(iVar1, 0);
	func_1308(iVar1, 0);
	func_1309(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1310(iVar1, iParam4);
	}
	return iVar1;
}

int func_772(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_364(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
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
			if (func_624(iVar25, 0) && func_644(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_773(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_774(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	cVar0 = func_382(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_775(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_776(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1311(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1312() == 0 && !func_1313(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1314(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1315();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1316(Global_1310720->f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	_datafile_get_data_node_index(&uVar25, &Var15);
	while (_datafile_get_num_children(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		_datafile_get_data_node_index(&uVar26, &Var20);
		while (_datafile_get_num_children(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_1317(iVar0, iVar1) };
			bVar11 = func_1318(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_420(vVar7)) && func_1319(iVar0, bParam8, iParam12)) && !func_1320(iVar0)) || bVar11)
			{
				if (func_1321(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					bVar2 = vdist(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					_0x748c5f51a18cb8f0(1);
					return vVar4;
				}
			}
		}
	}
}

int func_777(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1322(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1888801)[iVar4]->f_3))
			{
				if (_0xf256a75210c5c0eb((*Global_1888801)[iVar4]->f_3, vParam0))
				{
					switch ((*Global_1888801)[iVar4]->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

void func_778()
{
	disable_script_brain_set(1);
}

void func_779()
{
}

void func_780()
{
	disable_script_brain_set(2);
}

bool func_781(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_782(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (are_strings_equal(&((*Global_1934603)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_783(int iParam0)
{
	if (func_781(iParam0, 1))
	{
		func_1323(1);
	}
}

int func_784()
{
	return -1904156936;
}

bool func_785(int iParam0)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	switch (func_212(iParam0))
	{
		case 1:
			iVar0 = func_289(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_289(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_786()
{
	return 166188472;
}

int func_787()
{
	return 2015838421;
}

int func_788()
{
	return 207908017;
}

var func_789(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_790(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_791(var uParam0)
{
	Var1.f_10 = -1569615261;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!is_string_null_or_empty(uParam0->f_3[iVar0]->f_9) && is_entity_dead(uParam0->f_3[iVar0]->f_2))
		{
			_copy_memory(uParam0->f_3[iVar0], &Var1, 13);
		}
		iVar0++;
	}
}

int func_792(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (does_entity_exist(uParam0->f_3[iVar0]->f_2) && uParam0->f_3[iVar0]->f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_793(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return "";
	}
	if (is_entity_a_ped(bParam0))
	{
		return func_1324(get_ped_index_from_entity_index(bParam0));
	}
	else if (is_entity_an_object(bParam0))
	{
		return func_1325(get_object_index_from_entity_index(bParam0));
	}
	else if (is_entity_a_vehicle(bParam0))
	{
		return func_1326(get_vehicle_index_from_entity_index(bParam0));
	}
	return "";
}

int func_794(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((!is_string_null_or_empty(uParam0->f_3[iVar0]->f_9) && !is_string_null_or_empty(sParam1)) && are_strings_equal(uParam0->f_3[iVar0]->f_9, sParam1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_795(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!does_entity_exist(uParam0->f_3[iVar0]->f_2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_796(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_797(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_798()
{
	return Global_1572864->f_8;
}

void func_799(char[4] cParam0, int iParam1)
{
	func_1327(cParam0, iParam1);
	func_1328(cParam0, iParam1, 26);
}

int func_800(char[4] cParam0)
{
	if (!func_1329())
	{
		return 0;
	}
	if ((func_128(cParam0, 2) || func_120(cParam0, 4)) || func_128(cParam0, 1))
	{
		if (func_120(cParam0, 4) && !func_128(cParam0, 2))
		{
		}
		else
		{
			func_1330(cParam0, "1-Day-Multi1");
			func_1332(cParam0, func_1331("1-Day-Multi1"));
		}
	}
	return 1;
}

int func_801(char[4] cParam0)
{
	if (!func_1333(0, 0))
	{
		return 0;
	}
	if (_does_anim_scene_exist(cParam0->f_7375.f_804) && !_is_anim_scene_started(cParam0->f_7375.f_804, false))
	{
		iVar0 = get_clock_hours();
		if (iVar0 > 20 || iVar0 < 8)
		{
			func_1330(cParam0, "2-Night-Normal");
			func_1332(cParam0, func_1331("2-Night-Multi1"));
		}
		else
		{
			func_1330(cParam0, "1-Day-Normal");
			func_1332(cParam0, func_1331("1-Day-Multi1"));
		}
	}
	func_175(cParam0, 1);
	func_404(Global_35);
	return 1;
}

int func_802(char[4] cParam0)
{
	iVar0 = 1;
	if ((func_120(cParam0, 4) || func_128(cParam0, 2)) || func_128(cParam0, 1))
	{
		if (!func_1334(1))
		{
			return 0;
		}
	}
	iLocal_1031 = 0;
	iLocal_1033 = 0;
	iLocal_1035 = 0;
	create_model_hide(2251.48f, -1999.597f, 41.8739f, 10f, -1436029642, true);
	create_model_hide(2460.272f, -1606.838f, 45.0163f, 10f, -1832370395, true);
	func_1335(1);
	func_1336();
	func_1337(1, 0);
	func_1338();
	func_404(Global_35);
	if (_0x083d497d57b7400f(bVar2445))
	{
		freeze_entity_position(bVar2445, false);
	}
	return iVar0;
}

int func_803(char[4] cParam0)
{
	func_1339(cParam0);
	func_1340(cParam0);
	switch (func_1341(cParam0))
	{
		case 0:
			if (iVar1028 >= 11 && func_973(&(iLocal_2449[0]), func_409(3, 18), 1) < 50f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_804(char[4] cParam0)
{
	use_waypoint_recording_as_assisted_movement_route(sVar1880, 0, 1065353216, 1056964608, 1);
	func_1342(cParam0, 1);
	return 1;
}

void func_805(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1343(cParam0, iParam1);
	func_1328(cParam0, iParam1, iParam2);
	func_1344(cParam0, &iParam3, iParam1, 0);
	func_1344(cParam0, &iParam4, iParam1, 2);
	func_1344(cParam0, &iParam5, iParam1, 4);
	func_1344(cParam0, &iParam6, iParam1, 5);
	func_1344(cParam0, &iParam7, iParam1, 7);
	func_1012(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1345(cParam0, iParam1, cVar0);
	func_1346(cParam0, iParam1, iParam10);
}

int func_806(char[4] cParam0)
{
	if (!func_1347(cParam0, 0))
	{
		return 0;
	}
	if (!func_1348(cParam0, 0))
	{
		return 0;
	}
	return 1;
}

int func_807(char[4] cParam0)
{
	iVar0 = 1;
	func_175(cParam0, 1);
	func_1349(cParam0);
	if (!func_8(cParam0, 8))
	{
		if (!func_1347(cParam0, 1))
		{
			return 0;
		}
		if (!func_1348(cParam0, 1))
		{
			return 0;
		}
		func_408(&uLocal_1760, 2);
		func_1350(cParam0);
		if (!func_164(0, 0))
		{
			return 0;
		}
		if (!func_1351(cParam0))
		{
			return 0;
		}
		iLocal_1035 = 3;
		iLocal_1031 = 11;
		iLocal_1033 = 8;
		iLocal_1032 = 10;
		func_237(&uLocal_1971);
		func_408(&uLocal_1758, 8192);
	}
	return iVar0;
}

int func_808(char[4] cParam0)
{
	func_1349(cParam0);
	if (!func_8(cParam0, 8))
	{
		func_1352(&uLocal_2442);
		if (does_group_exist(iVar2439))
		{
			func_1353(vLocal_1741, &uLocal_2442, -1);
			func_1353(vLocal_1744, &uLocal_2442, 0);
			func_1353(vLocal_1747, &uLocal_2442, 1);
			func_1353(vLocal_1750, &uLocal_2442, 2);
			func_1354(&(iLocal_2449[0]), iVar2439, 0, -1, 1, 0);
			func_1354(&(iLocal_2449[1]), iVar2439, 1, 1, 0, 0);
			func_1354(&(iLocal_2449[4]), iVar2439, 6, 2, 0, 0);
			func_1355(&(iLocal_2449[0]), 0, fVar1747, vLocal_1750.y);
		}
		else
		{
			return 0;
		}
		force_ped_motion_state(&(iLocal_2449[0]), -668482597, false, 0, false);
		force_ped_motion_state(&(iLocal_2449[1]), -668482597, false, 0, false);
		force_ped_motion_state(&(iLocal_2449[4]), -668482597, false, 0, false);
		simulate_player_input_gait(player_id(), 1.5f, 2000, 0f, true, false);
		func_408(&uLocal_1757, 16);
		func_408(&uLocal_1763, 16384);
		func_1356(cParam0, 0, 1);
		func_135(cParam0, 2);
	}
	_0xf74e134f40192884(bVar2445, 1);
	func_404(Global_35);
	func_140(cParam0, func_33(cParam0), 256);
	func_1357(cParam0);
	func_1337(1, 0);
	return 1;
}

int func_809(char[4] cParam0)
{
	func_1358(cParam0);
	func_1359(cParam0);
	switch (func_1341(cParam0))
	{
		case 0:
			if (is_screen_faded_out())
			{
				do_screen_fade_in(2000);
			}
			if (iVar1028 > 9)
			{
				func_1360(cParam0);
			}
			if (iVar1028 > 9)
			{
				func_1361(cParam0);
			}
			func_1362(Global_35, func_409(4, 6), 0, 30f, 20f, 10f, 5f, 1, 1, 1, 0);
			if (iVar1028 > 20 && (func_1363(cParam0) || func_1364()))
			{
				set_ped_flee_attributes(iVar2445, 512, true);
				set_ped_config_flag(iVar2445, 66, true);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (!func_195(iVar1754, 1024))
			{
				if (iVar1028 == 27)
				{
					func_408(&uLocal_1757, 1024);
					return 1;
				}
				else if (!func_195(iVar1755, 32) && is_entity_in_volume(Global_35, &(iLocal_2325[6]), true, 0))
				{
					func_408(&uLocal_1758, 32);
				}
			}
			break;
	}
	return 0;
}

int func_810(char[4] cParam0)
{
	func_1342(cParam0, 2);
	_0xdad6cd07caa4f382();
	return 1;
}

int func_811(var uParam0)
{
	return 1;
}

int func_812(char[4] cParam0)
{
	func_175(cParam0, 1);
	func_408(&uLocal_1759, 256);
	if (!func_8(cParam0, 8))
	{
		func_27(&uLocal_1977, 0);
		if (!func_1347(cParam0, 0))
		{
			return 0;
		}
		if (!func_1365(cParam0))
		{
			return 0;
		}
		if (!func_1366())
		{
			return 0;
		}
		func_1350(cParam0);
		if (!func_1367(cParam0))
		{
			return 0;
		}
		if (!func_164(1, 0))
		{
			return 0;
		}
		func_1368(iVar1928, 2, 0);
		func_1368(iVar1929, 2, 0);
		func_1368(965922748, 1, 0);
		func_1368(1634115439, 1, 0);
		func_131(get_entity_coords(Global_35, true, false), 50f, 1, 0, 0, 0, 0);
	}
	if (is_ped_on_mount(Global_35))
	{
		_remove_ped_from_mount(Global_35, true, false);
	}
	iLocal_1450 = 0;
	iLocal_1035 = 2;
	func_1369(1);
	func_1370();
	func_1371(Global_35);
	func_1372();
	return 1;
}

int func_813(var uParam0)
{
	func_1373(1);
	func_1374();
	func_599(&uLocal_1953);
	func_1368(iVar1928, 0, 0);
	func_1368(iVar1929, 0, 0);
	func_1368(965922748, 0, 0);
	func_1368(1634115439, 0, 0);
	return 1;
}

int func_814(char[4] cParam0)
{
	func_1375(cParam0);
	func_1376(cParam0);
	switch (func_1341(cParam0))
	{
		case 0:
			func_1333(1, 0);
			if ((_is_anim_scene_finished(&(uLocal_1769[29]), false) || _0x8d81e7824b7753f7(&(uLocal_1769[29]), "s_InBankIdles", 1)) || func_195(iVar1763, 16777216))
			{
				func_134(cParam0, 1);
			}
			if (_is_anim_scene_finished(&(uLocal_1769[29]), false) || ((_is_anim_scene_started(&(uLocal_1769[29]), false) && _get_anim_scene_time(&(uLocal_1769[29])) >= 32f) && !func_1377()))
			{
				if (!func_195(iVar1755, 16384))
				{
					func_135(cParam0, 2);
					func_408(&uLocal_1758, 16384);
				}
			}
			break;
		case 1:
			if ((_is_anim_scene_finished(&(uLocal_1769[6]), false) || iVar1447 >= 4) || func_195(iVar1763, 16777216))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_815(char[4] cParam0)
{
	func_1378();
	func_1342(cParam0, 3);
	return 1;
}

int func_816(char[4] cParam0)
{
	func_135(cParam0, 2);
	iLocal_1450 = 2;
	return 1;
}

int func_817(char[4] cParam0)
{
	func_175(cParam0, 1);
	if (!func_8(cParam0, 8))
	{
		if (!func_1347(cParam0, 0))
		{
			return 0;
		}
		if (!func_1379(cParam0, 0))
		{
			return 0;
		}
		if (!func_1366())
		{
			return 0;
		}
		if (!func_1380(cParam0, 1))
		{
			return 0;
		}
		if (!func_1381(cParam0))
		{
			return 0;
		}
		func_1350(cParam0);
		func_1382(cParam0);
		if (iVar1447 < 3)
		{
			return 0;
		}
		func_1383(&(iLocal_2449[0]), -95736505, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		func_1383(&(iLocal_2449[4]), 36703333, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		func_1383(&(iLocal_2449[3]), -1098045850, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		if (!func_1384())
		{
			func_1383(Global_35, 379542007, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		func_1383(&(iLocal_2449[2]), -665597951, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		func_1383(&(iLocal_2449[5]), -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		_0xb8de69d9473b7593(Global_35, 1);
		_0xb8de69d9473b7593(Global_35, 2);
		func_871(&(Local_14.f_8[0]), func_240(5, 12), 2, 1073741824);
		func_1385(1);
		iLocal_1044 = 2;
		func_408(&uLocal_1760, 4);
		func_1333(1, 0);
		func_1386();
		func_1387();
		if (!func_1367(cParam0))
		{
			return 0;
		}
		if (!is_entity_dead(iVar2460) && !is_entity_dead(Global_35))
		{
			apply_ped_damage_pack(iVar2460, "PD_Pissing_Pants", 0f, 1f);
			if (func_1380(cParam0, 1))
			{
				func_1388("PL_BankM_Hands_Up_Loop");
			}
		}
		if (func_1101(Global_35, 0))
		{
			if (!func_1384())
			{
				if (has_ped_got_weapon(Global_35, 379542007, 0, false))
				{
					func_335(379542007, 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
					set_current_ped_weapon(Global_35, 379542007, true, 0, false, false);
				}
				else
				{
					func_1383(Global_35, 379542007, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					func_335(379542007, 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
					set_current_ped_weapon(Global_35, 379542007, true, 0, false, false);
				}
			}
			else
			{
				iVar0 = func_901(0, 0);
				set_current_ped_weapon(Global_35, iVar0, true, 0, true, false);
			}
		}
	}
	else if (!func_1379(cParam0, 1))
	{
		return 0;
	}
	iLocal_1831 = 0;
	func_40(0);
	func_1389();
	func_1390();
	func_1370();
	func_1369(1);
	func_1371(Global_35);
	func_1372();
	return 1;
}

int func_818(char[4] cParam0)
{
	if (func_1101(Global_35, 0))
	{
		clear_ped_tasks(Global_35, 1, 0);
	}
	func_1332(cParam0, func_1331("NormalStart"));
	func_1391(cParam0, "NormalStart_Override");
	func_1392(cParam0, 256);
	func_599(&uLocal_1953);
	return 1;
}

int func_819(char[4] cParam0)
{
	func_1393(cParam0);
	func_1394(cParam0);
	switch (func_1341(cParam0))
	{
		case 0:
			if (iVar1447 >= 4)
			{
				if (!func_195(iVar1754, 16777216))
				{
					func_135(cParam0, 1);
					func_408(&uLocal_1757, 16777216);
				}
			}
			if (func_195(iVar1754, 268435456))
			{
				func_135(cParam0, 3);
				func_134(cParam0, 1);
				if (does_blip_exist(iVar2245))
				{
					remove_blip(&iLocal_2248);
				}
				func_1395();
				func_237(&uLocal_1992);
			}
			break;
		case 1:
			if (!func_195(iVar1755, 134217728))
			{
				if (func_1396())
				{
					func_408(&uLocal_1758, 134217728);
				}
			}
			if (iVar1828 >= 2)
			{
				if (!func_195(iVar1760, 128))
				{
					func_135(cParam0, 11);
					func_408(&uLocal_1763, 128);
				}
			}
			if (func_1397(Global_35, &(iLocal_2325[7]), 1, 0))
			{
				if (iVar1447 <= 14 && !func_195(iVar1760, 256))
				{
					if (!func_26(&uLocal_2028))
					{
						func_237(&uLocal_2028);
					}
					else if (func_1398(&uLocal_2028) > 10000)
					{
						if (func_1399(cParam0) == -1)
						{
							func_135(cParam0, 12);
							func_237(&uLocal_2028);
						}
					}
				}
			}
			if (func_1400() && func_1398(&uLocal_2004) > 5000)
			{
				func_1401();
				func_135(cParam0, 5);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (iVar1447 == 18 && !is_entity_dead(Global_35))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_820(char[4] cParam0)
{
	Global_1911667 = 0;
	func_201(cParam0, &(iLocal_2449[0]), 1);
	func_1385(0);
	func_1042(Global_35);
	func_1402();
	func_1401();
	func_1403();
	func_1342(cParam0, 4);
	return 1;
}

int func_821(var uParam0)
{
	return 1;
}

int func_822(char[4] cParam0)
{
	iVar0 = 1;
	func_175(cParam0, 1);
	func_1404();
	if (func_102())
	{
		func_140(cParam0, iLocal_228, 4096);
	}
	if (!func_8(cParam0, 8))
	{
		if (!func_1405(0))
		{
			return 0;
		}
		if (!func_1366())
		{
			return 0;
		}
		if (!func_1406())
		{
			return 0;
		}
		func_871(Global_35, func_240(6, 6), 2, 1073741824);
		func_1350(cParam0);
		func_1407(cParam0);
		if (!func_1367(cParam0))
		{
			return 0;
		}
		if (!func_1408())
		{
			if (func_1101(Global_35, 0))
			{
				_give_weapon_to_ped_2(Global_35, -183018591, 200, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
			func_335(-183018591, 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
		if (!func_1384())
		{
			if (!has_ped_got_weapon(Global_35, 379542007, 0, false))
			{
				func_1383(Global_35, 379542007, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			}
			func_335(379542007, 200, 1, 0, 0, 752097756, 0, 0, 0, 0);
			set_current_ped_weapon(Global_35, 379542007, true, 0, false, false);
		}
		else
		{
			iVar1 = func_901(0, 0);
			set_current_ped_weapon(Global_35, iVar1, true, 0, true, false);
		}
		func_408(&uLocal_1757, 134217728);
	}
	else if (has_anim_event_fired(Global_35, -372912327))
	{
		if (!func_195(iVar1759, 8))
		{
			_0xa2f8b3b5fedfc100(Global_35, -1625272662);
			_update_ped_variation(Global_35, false, true, true, true, false);
			func_408(&uLocal_1762, 8);
		}
	}
	else if (!_0xa24c1d341c6e0d53(0, 0, 0) && !is_first_person_aim_cam_active())
	{
		iVar0 = 0;
	}
	func_246(Global_1935630, 262144);
	set_entity_visible(&(iLocal_2449[5]), false);
	func_1409(5, func_240(6, 0), 1);
	func_1337(0, 0);
	if (!func_1410(cParam0, 0))
	{
		return 0;
	}
	func_1411(&(iLocal_2449[0]), 0);
	func_1412(cParam0);
	func_1389();
	func_1413(cParam0, 1);
	func_1370();
	func_486(&iLocal_2248);
	return iVar0;
}

int func_823(char[4] cParam0)
{
	func_989(cParam0);
	set_ped_using_action_mode(Global_35, false, -1, 0);
	func_1414(cParam0);
	func_1415(cParam0);
	func_475();
	func_1416(cParam0, 0);
	func_1368(iVar1928, 2, 0);
	func_1368(iVar1929, 2, 0);
	func_1417();
	func_1390();
	func_27(&uLocal_1956, 1);
	func_599(&uLocal_1953);
	_add_ammo_to_ped(Global_35, 379542007, 250, 752097756);
	if (!func_1410(cParam0, 1))
	{
		return 0;
	}
	_0x1a7a802b2301edc0(Global_35);
	_0x1a7a802b2301edc0(&(iLocal_2449[0]));
	set_relationship_between_groups(6, 1862763509, 707888648);
	return 1;
}

int func_824(char[4] cParam0)
{
	func_1418(cParam0);
	func_1419(cParam0);
	switch (func_1341(cParam0))
	{
		case 0:
			if (func_1420(&(Local_14.f_22), 1) > 2 || func_1421(&uLocal_1956) > 15f)
			{
				func_237(&uLocal_1953);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_1421(&uLocal_1953) > 2f && iVar1454 >= 6)
			{
				func_1422(cParam0, iLocal_229, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_825(char[4] cParam0)
{
	func_1342(cParam0, 5);
	return 1;
}

int func_826(var uParam0)
{
	return 1;
}

int func_827(char[4] cParam0)
{
	func_99(cParam0, 512);
	func_175(cParam0, 1);
	func_1404();
	if (!func_8(cParam0, 8))
	{
		if (!func_1423(-1, 0))
		{
			return 0;
		}
		if (!func_1405(1))
		{
			return 0;
		}
		if (!func_1366())
		{
			return 0;
		}
		func_1413(cParam0, 1);
		if (!func_1406())
		{
			return 0;
		}
		func_1424();
		func_1425(Local_14.f_20);
		if (!func_1367(cParam0))
		{
			return 0;
		}
		func_1350(cParam0);
		func_1414(cParam0);
		func_1415(cParam0);
		func_1426();
		func_972(0, 0);
		func_1389();
		func_1390();
		func_1368(iVar1928, 2, 0);
		func_1368(iVar1929, 2, 0);
		func_1417();
		if (!func_1333(0, 0))
		{
			return 0;
		}
		iLocal_1457 = 6;
	}
	func_1370();
	func_246(Global_1935630, 262144);
	return 1;
}

int func_828(var uParam0)
{
	iLocal_1005 = 0;
	set_relationship_between_groups(6, 1862763509, 707888648);
	return 1;
}

int func_829(char[4] cParam0)
{
	func_1427(cParam0);
	func_1428(cParam0);
	if (func_1341(cParam0) >= 2)
	{
		func_1429(cParam0);
	}
	switch (func_1341(cParam0))
	{
		case 0:
			if (iVar1454 >= 9)
			{
				if (!func_26(&uLocal_1959))
				{
					func_237(&uLocal_1959);
				}
			}
			if (func_1421(&uLocal_1959) > 2f && iVar1454 >= 9)
			{
				func_408(&uLocal_1757, 4096);
				func_27(&uLocal_1950, 1);
				func_27(&uLocal_1965, 1);
				func_27(&uLocal_1995, 1);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (iVar1454 >= 11)
			{
				if (!func_195(iVar1754, 8388608))
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_135(cParam0, 10);
					func_408(&uLocal_1757, 8388608);
				}
			}
			if (!func_1397(Global_35, &(iLocal_2325[40]), 1, 0) && iVar1454 <= 10)
			{
				if (func_1398(&uLocal_1995) > 5000)
				{
					if (func_1399(cParam0) == -1)
					{
						func_135(cParam0, 11);
						func_237(&uLocal_1995);
					}
				}
			}
			if (iVar1454 == 18)
			{
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (iVar1454 == 18)
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_486(&iLocal_2248);
				func_1430();
				func_408(&uLocal_1757, 2097152);
				func_1431(1);
				func_135(cParam0, 5);
				func_134(cParam0, 3);
			}
			break;
		case 3:
			func_1432(cParam0);
			func_1430();
			if (func_195(iVar1754, 1))
			{
				func_1433(cParam0);
			}
			if (!func_195(iVar1754, 1) && func_1434())
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1431(0);
				func_482(0);
				func_237(&uLocal_2037);
				func_135(cParam0, 7);
				func_408(&uLocal_1757, 1);
			}
			if (func_1435())
			{
				func_1436();
				if (!func_195(iVar1756, 1073741824) && !func_1437(Global_35, 1))
				{
					if (func_1432(cParam0))
					{
						if (func_1438())
						{
							func_408(&uLocal_1759, 1073741824);
						}
					}
				}
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_486(&iLocal_2248);
				if (iVar1002 == 7)
				{
					func_27(&uLocal_1962, 1);
					func_1439();
					func_134(cParam0, 4);
				}
			}
			break;
		case 4:
			if (func_1440(&uLocal_1962, 2f))
			{
				if (func_195(iVar1754, 2097152))
				{
					func_196(&uLocal_1757, 2097152);
				}
				func_201(cParam0, &(iLocal_2449[0]), 1);
				func_486(&iLocal_2248);
				return 1;
			}
			break;
	}
	return 0;
}

int func_830(char[4] cParam0)
{
	set_model_as_no_longer_needed(78425823);
	func_482(0);
	func_1342(cParam0, 6);
	return 1;
}

int func_831(var uParam0)
{
	return 1;
}

int func_832(char[4] cParam0)
{
	if (!func_175(cParam0, 1))
	{
		return 0;
	}
	func_1404();
	set_ped_config_flag(Global_35, 43, false);
	if (!func_8(cParam0, 8))
	{
		func_1413(cParam0, 0);
		if (func_971() || !func_1441())
		{
			return 0;
		}
		func_408(&uLocal_1759, 1);
		if (!func_1405(1))
		{
			return 0;
		}
		func_1424();
		func_1425(Local_14.f_20);
		if (!func_1442(1, 1))
		{
			return 0;
		}
		if (!func_1366())
		{
			return 0;
		}
		func_1350(cParam0);
		func_1414(cParam0);
		func_1415(cParam0);
		func_972(0, 0);
		func_1333(0, 0);
	}
	func_1413(cParam0, 0);
	func_1370();
	func_246(Global_1935630, 262144);
	return 1;
}

int func_833(var uParam0)
{
	func_27(&uLocal_1950, 1);
	func_27(&uLocal_1965, 1);
	func_481(1);
	set_relationship_between_groups(6, 1862763509, 707888648);
	_add_ammo_to_ped(Global_35, 379542007, 250, 752097756);
	func_472();
	return 1;
}

int func_834(char[4] cParam0)
{
	func_1443(cParam0);
	func_1444(cParam0);
	switch (func_1341(cParam0))
	{
		case 0:
			if (func_973(Global_35, func_409(8, 14), 1) <= 2.5f)
			{
				if (!func_195(iVar1754, 33554432))
				{
					if (does_blip_exist(iVar2245))
					{
						remove_blip(&iLocal_2248);
					}
					func_1445();
					func_1424();
					func_1425(Local_14.f_20);
					func_1446();
					func_1425(Local_14.f_29);
					func_1447();
					func_1425(Local_14.f_136);
					func_1448();
					func_1425(Local_14.f_129);
					iLocal_2248 = func_1449(408396114, func_409(8, 1), 1);
					func_408(&uLocal_1757, 33554432);
				}
			}
			if (func_1397(Global_35, &(iLocal_2325[14]), 1, 0) && !func_195(iVar1754, 2))
			{
				func_1450(1);
				func_408(&uLocal_1757, 2);
			}
			if (func_1440(&uLocal_1950, 60f))
			{
				func_135(cParam0, 2);
			}
			if (func_1440(&uLocal_1965, 120f))
			{
				if (!func_195(iVar1758, 2))
				{
					func_1451(&(iLocal_2449[0]), 0, 0);
					func_1452(cParam0, "NBD1_BANK_FAIL", "", 1, 0);
					func_408(&uLocal_1761, 2);
				}
			}
			if (func_1397(Global_35, &(iLocal_2325[10]), 1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_835(char[4] cParam0)
{
	func_486(&iLocal_2248);
	func_481(0);
	func_1342(cParam0, 7);
	return 1;
}

int func_836(var uParam0)
{
	return 1;
}

int func_837(char[4] cParam0)
{
	if (!func_175(cParam0, 1))
	{
		return 0;
	}
	func_408(&uLocal_1758, 2048);
	func_1453();
	func_1404();
	if (!func_1450(1))
	{
		return 0;
	}
	if (!func_8(cParam0, 8))
	{
		if (!func_1405(1))
		{
			return 0;
		}
		if (!func_1442(1, 0))
		{
			return 0;
		}
		if (!func_1366())
		{
			return 0;
		}
		func_1350(cParam0);
		func_1445();
		func_1333(0, 0);
		if (!func_1408())
		{
			if (!has_ped_got_weapon(Global_35, -1471716628, 0, true))
			{
				func_1383(Global_35, -1471716628, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_335(-1471716628, 200, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
	}
	func_1424();
	func_1425(Local_14.f_20);
	func_1446();
	func_1425(Local_14.f_29);
	func_599(&uLocal_1953);
	func_1370();
	return 1;
}

int func_838(char[4] cParam0)
{
	func_1415(cParam0);
	func_1454(cParam0, 1, 1);
	func_27(&uLocal_1974, 1);
	func_99(cParam0, 33554432);
	set_relationship_between_groups(6, 1862763509, 707888648);
	_add_ammo_to_ped(Global_35, 379542007, 250, 752097756);
	return 1;
}

int func_839(char[4] cParam0)
{
	func_1455(cParam0);
	func_1456(cParam0);
	switch (func_1341(cParam0))
	{
		case 0:
			if (func_1421(&uLocal_1974) > 90f)
			{
				func_135(cParam0, 2);
				func_134(cParam0, 1);
			}
			if (func_1421(&uLocal_1974) > 30f)
			{
				if ((is_entity_dead(&(Local_14.f_41[9])) || is_ped_injured(&(Local_14.f_41[9]))) || !does_entity_exist(&(Local_14.f_41[9])))
				{
					func_599(&uLocal_1974);
					func_135(cParam0, 2);
					func_134(cParam0, 1);
				}
			}
			break;
		case 1:
			if (!func_26(&uLocal_1953))
			{
				if (!func_1377())
				{
					func_237(&uLocal_1953);
				}
			}
			if (func_970(&uLocal_1953) > 5f)
			{
				func_1457();
				return 1;
			}
			break;
	}
	return 0;
}

int func_840(char[4] cParam0)
{
	func_599(&uLocal_1974);
	func_486(&iLocal_2248);
	func_1342(cParam0, 8);
	func_189();
	return 1;
}

int func_841(char[4] cParam0)
{
	func_1350(cParam0);
	func_1369(1);
	iLocal_1462 = 7;
	return 1;
}

int func_842(char[4] cParam0)
{
	if (!func_1458(cParam0))
	{
		return 0;
	}
	func_175(cParam0, 1);
	if (!func_8(cParam0, 8))
	{
		func_1459(cParam0);
		if (iVar1459 != 8)
		{
			return 0;
		}
		if (!func_1366())
		{
			return 0;
		}
		func_1442(1, 0);
		func_1450(1);
		func_871(Global_35, func_240(9, 1), 2, 1073741824);
		func_1333(0, 0);
	}
	func_1337(1, 0);
	func_1370();
	return 1;
}

int func_843(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!func_1367(cParam0))
		{
			return 0;
		}
	}
	if (!func_1415(cParam0))
	{
		return 0;
	}
	iLocal_1042 = 0;
	func_1460();
	set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
	set_current_ped_weapon(Global_35, 379542007, true, 2, false, false);
	_hide_ped_weapons(Global_35, 1, true);
	_set_ped_infinite_ammo_clip(Global_35, false);
	func_237(&uLocal_1950);
	func_237(&uLocal_1965);
	set_relationship_between_groups(6, 1862763509, 707888648);
	iLocal_1478[0] = -1;
	iLocal_1478[1] = -1;
	iLocal_1478[2] = -1;
	iLocal_1478[4] = -1;
	iLocal_1478[3] = -1;
	return 1;
}

int func_844(char[4] cParam0)
{
	func_1461(cParam0);
	func_1462(cParam0);
	func_1463(cParam0);
	if (func_1440(&uLocal_1965, 240f))
	{
		if (!func_195(iVar1758, 2))
		{
			func_1451(&(iLocal_2449[0]), 0, 0);
			func_1452(cParam0, "NBD1_BANK_FAIL", "", 1, 0);
			func_408(&uLocal_1761, 2);
		}
	}
	if (!func_195(iVar1760, 2))
	{
		if (iVar1460 >= 4 && _is_anim_scene_started(&(uLocal_1769[33]), false))
		{
			if (func_1464(&(Local_14.f_56[0]), 100f, -1082130432, -1082130432, -1082130432))
			{
				func_1335(1);
				func_135(cParam0, 3);
				func_408(&uLocal_1763, 2);
			}
		}
	}
	switch (func_1341(cParam0))
	{
		case 0:
			if (iVar1460 == 2)
			{
				if (func_1440(&uLocal_1950, 10f))
				{
					func_237(&uLocal_1950);
				}
			}
			if (func_1465(Local_14.f_54) == 0 || func_1466(Local_14.f_54, 0) == 0)
			{
				func_45();
			}
			if (iVar1460 == 15)
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_1465(Local_14.f_54) == 0 || func_1466(Local_14.f_54, 0) == 0)
			{
				func_487(&iLocal_2299);
				func_511(&(Local_14.f_56[0]));
				func_511(&(Local_14.f_56[1]));
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (func_1465(Local_14.f_54) == 0 || func_1466(Local_14.f_54, 0) == 0)
			{
				func_1335(0);
				set_ped_config_flag(Global_35, 218, true);
				func_134(cParam0, 3);
			}
			break;
		case 3:
			set_ped_config_flag(Global_35, 218, true);
			_0xc3abcfbc7d74afa5(Global_35, 9, 1);
			set_ped_reset_flag(Global_35, 277, true);
			func_1467();
			func_1468(cParam0);
			if (iVar1462 >= 4)
			{
				set_ped_config_flag(Global_35, 218, false);
				return 1;
			}
			break;
	}
	return 0;
}

int func_845(char[4] cParam0)
{
	func_486(&iLocal_2248);
	func_1469();
	func_473(&(Local_14.f_56), 0);
	func_487(&iLocal_2299);
	func_1470();
	func_1342(cParam0, 9);
	return 1;
}

int func_846(var uParam0)
{
	return 1;
}

int func_847(char[4] cParam0)
{
	func_175(cParam0, 1);
	if (!func_8(cParam0, 8))
	{
		func_1471(cParam0, "NBD1_RE_OBJ1", -1082130432, 0, 0, -1, -1, 0);
		func_1350(cParam0);
		if (!func_1366())
		{
			return 0;
		}
		if (!func_1462(cParam0))
		{
			return 0;
		}
		iLocal_1465 = 5;
		iLocal_1463 = 17;
		iLocal_1478[0] = 5;
		iLocal_1478[1] = 5;
		iLocal_1478[2] = 5;
		iLocal_1478[4] = 5;
		iLocal_1478[3] = 5;
		func_1333(0, 0);
		if (!_get_ped_crouch_movement(Global_35))
		{
			_set_ped_crouch_movement(Global_35, true, 0, false);
		}
		set_player_control(player_id(), false, 256, false);
	}
	func_1369(1);
	func_1370();
	func_1472();
	func_140(cParam0, func_33(cParam0), 256);
	func_1357(cParam0);
	return 1;
}

int func_848(char[4] cParam0)
{
	func_1473(cParam0);
	if (!func_1474(-1, 1))
	{
		return 0;
	}
	if (!func_1423(-1, 1))
	{
		return 0;
	}
	func_1475();
	func_1460();
	func_140(cParam0, func_33(cParam0), 256);
	func_99(cParam0, 33554432);
	func_1476(cParam0);
	func_989(cParam0);
	return 1;
}

int func_849(char[4] cParam0)
{
	func_1477(cParam0);
	func_1478(cParam0);
	switch (func_1341(cParam0))
	{
		case 0:
			if (func_195(iVar1763, 524288))
			{
				func_135(cParam0, 1);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			func_1479(cParam0);
			func_1362(Global_35, _0xf70f00013a62f866(&(iLocal_2325[42])), 0, 20f, 10f, 5f, 1f, 1, 1, 1, 0);
			if (&iLocal_1472[0] == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_850(char[4] cParam0)
{
	func_486(&iLocal_2248);
	func_201(cParam0, &(iLocal_2449[0]), 1);
	func_1342(cParam0, 10);
	return 1;
}

int func_851(char[4] cParam0)
{
	func_1350(cParam0);
	func_1480();
	if (func_102())
	{
		func_882(Global_35, 2754.136f, -1333.758f, 56.3686f, 256.9632f, 2, 1073741824);
	}
	return 1;
}

int func_852(char[4] cParam0)
{
	func_1481(-928815382);
	func_1481(-645247737);
	if (!func_8(cParam0, 8))
	{
		if (!func_1366())
		{
			return 0;
		}
		if (!func_26(&uLocal_1944))
		{
			func_27(&uLocal_1944, 0);
		}
		if (func_238(&uLocal_1944) < 3000)
		{
			return 0;
		}
	}
	func_1370();
	if (func_8(cParam0, 8))
	{
		func_1482(cParam0);
		if (&iLocal_1472[0] == 7)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_468();
	return 1;
}

int func_853(char[4] cParam0)
{
	func_406(cParam0, 1);
	func_1414(cParam0);
	if (!func_8(cParam0, 8))
	{
		if (!func_1483())
		{
			return 0;
		}
		func_1480();
	}
	if (func_887(&(cParam0->f_7375), 512))
	{
		func_1480();
	}
	if (!func_1484(1))
	{
		return 0;
	}
	if (!func_1485(1))
	{
		return 0;
	}
	if (!func_1483())
	{
		return 0;
	}
	func_1486(cParam0);
	if (!func_1487(cParam0))
	{
		return 0;
	}
	if (func_1101(Global_35, 0))
	{
		set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	}
	_hide_ped_weapons(Global_35, 0, false);
	if (!func_1333(0, 0))
	{
		return 0;
	}
	if (!func_175(cParam0, 1))
	{
		return 0;
	}
	if (_does_anim_scene_exist(&(uLocal_1769[15])))
	{
		_delete_anim_scene(&(uLocal_1769[15]));
	}
	func_989(cParam0);
	func_1488();
	func_1488();
	Local_236[8]->f_3 = 1;
	func_1489();
	func_165(1, 1);
	return 1;
}

int func_854(char[4] cParam0)
{
	func_1490(cParam0);
	func_1491(cParam0);
	func_1487(cParam0);
	switch (func_1341(cParam0))
	{
		case 0:
			if (iVar1489 >= 18)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_855(char[4] cParam0)
{
	func_201(cParam0, &(iLocal_2449[0]), 1);
	func_1342(cParam0, 11);
	return 1;
}

int func_856(var uParam0)
{
	return 1;
}

int func_857(char[4] cParam0)
{
	func_1481(-928815382);
	func_1481(-645247737);
	if (!func_8(cParam0, 8))
	{
		if (!func_1483())
		{
			return 0;
		}
		if (!func_1484(1))
		{
			return 0;
		}
		if (!func_1485(1))
		{
			return 0;
		}
		if (!func_1366())
		{
			return 0;
		}
		func_1350(cParam0);
		func_871(&(Local_14.f_120[2]), func_240(14, 4), 2, 1073741824);
		func_871(&(Local_14.f_120[4]), func_240(14, 2), 2, 1073741824);
		func_871(&(Local_14.f_120[0]), func_240(14, 0), 2, 1073741824);
		func_871(&(Local_14.f_120[1]), func_240(14, 1), 2, 1073741824);
		_set_ped_crouch_movement(Global_35, true, 0, true);
		simulate_player_input_gait(player_id(), 1f, 2000, 0f, true, false);
		iLocal_1484 = 21;
		iLocal_1492 = 18;
		func_406(cParam0, 1);
		if (!func_1333(0, 0))
		{
			return 0;
		}
		func_1480();
		if (!func_1367(cParam0))
		{
			return 0;
		}
		iLocal_1485[0] = 5;
		iLocal_1485[3] = 5;
		iLocal_1485[1] = 5;
		iLocal_1485[2] = 5;
	}
	if (!func_175(cParam0, 1))
	{
		return 0;
	}
	return 1;
}

int func_858(char[4] cParam0)
{
	func_1486(cParam0);
	func_99(cParam0, 33554432);
	func_1330(cParam0, "MultiStart");
	func_1488();
	func_1492(cParam0, 512);
	return 1;
}

int func_859(char[4] cParam0)
{
	func_1491(cParam0);
	func_1493(cParam0);
	func_1487(cParam0);
	switch (func_1341(cParam0))
	{
		case 0:
			if (func_1494() && func_877(Global_35, &(iLocal_2449[0]), 10f, 1))
			{
				func_486(&iLocal_2248);
				func_134(cParam0, 1);
			}
			if (!func_195(iVar1760, 1))
			{
				if (is_entity_in_volume(&(iLocal_2449[0]), &(iLocal_2426[0]), true, 0))
				{
					func_135(cParam0, 2);
					func_408(&uLocal_1763, 1);
				}
			}
			break;
		case 1:
			if (iVar1481 >= 32)
			{
				if (!func_195(iVar1754, 2048))
				{
					if (func_1495(cParam0))
					{
						func_408(&uLocal_1757, 2048);
					}
				}
			}
			if (iVar1481 == 35)
			{
				_0xc9caeaeec1256e54(-1679307491);
				if (func_1333(0, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_860(var uParam0)
{
	return 1;
}

int func_861(var uParam0)
{
	return 1;
}

int func_862(char[4] cParam0)
{
	func_1481(-1721168110);
	func_1492(cParam0, 512);
	func_397(cParam0, 524288);
	func_1(cParam0, 4);
	_0xc9caeaeec1256e54(-1679307491);
	if (!func_8(cParam0, 8))
	{
		func_1350(cParam0);
		func_406(cParam0, 1);
	}
	if (!func_195(iVar1758, 524288))
	{
		_0x0e3bdeed21beb945(get_player_index(), _0x35e5e21f9159849c(1780145725) * 3);
		func_408(&uLocal_1761, 524288);
	}
	_0xf01d21df39554115(0);
	return 1;
}

int func_863(var uParam0)
{
	func_871(Global_35, func_240(11, 0), 2, 1073741824);
	func_494(-1721168110);
	func_203(449774763, 1, 0);
	clear_ped_tasks_immediately(Global_35, false, true);
	_set_ped_crouch_movement(Global_35, false, 0, false);
	_0xf01d21df39554115(1);
	return 1;
}

int func_864(char[4] cParam0)
{
	switch (func_1341(cParam0))
	{
		case 0:
			return 1;
	}
	return 0;
}

int func_865(var uParam0)
{
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(0);
	}
	return 1;
}

bool func_866(char[4] cParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_562(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_275(iParam1)) && func_1496(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1497(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1498(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1499(iParam1);
		return true;
	}
	return false;
}

bool func_867(char[4] cParam0, int iParam1, bool bParam2)
{
	if (func_120(cParam0, 4))
	{
		if (func_1500(iParam1, 1018353621))
		{
			func_1501(iParam1, bParam2, 1018353621);
			if (!func_1502(bParam2))
			{
				return false;
			}
		}
	}
	return true;
}

void func_868(char[4] cParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_514(cParam0, bParam1, &iVar0))
	{
		return;
	}
	if (!func_1503(iParam3, &iVar1))
	{
		return;
	}
	cParam0->f_5423[iVar0]->f_23[iVar1] = iParam2;
}

void func_869(char[4] cParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_514(cParam0, bParam1, &iVar0))
	{
		return;
	}
	if (!func_1503(iParam3, &iVar1))
	{
		return;
	}
	cParam0->f_5423[iVar0]->f_23[iVar1]->f_2 = iParam2;
}

void func_870(char[4] cParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_514(cParam0, bParam1, &iVar0))
	{
		return;
	}
	if (!func_1503(iParam3, &iVar1))
	{
		return;
	}
	cParam0->f_5423[iVar0]->f_23[iVar1]->f_1 = iParam2;
}

void func_871(bool bParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_882(bParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_872(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

Vector3 func_873(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2704.279f, -1278.829f, 61.5361f;
				case 1:
					return 2702.543f, -1277.568f, 61.6078f;
				case 2:
					return 2706.983f, -1276.451f, 61.4555f;
				case 3:
					return 2705.549f, -1276.232f, 61.5573f;
				case 4:
					return 2702.925f, -1275.868f, 62.6708f;
				case 5:
					return 2702.101f, -1278.393f, 61.5527f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2752.789f, -1335.489f, 56.876f;
				case 1:
					return 2757.037f, -1329.286f, 55.5458f;
				case 2:
					return 2756.036f, -1330.971f, 55.827f;
				case 3:
					return 2753.806f, -1333.389f, 56.3161f;
				case 4:
					return 2751.662f, -1336.999f, 56.7248f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2769.323f, -1360.252f, 45.564f;
				case 1:
					return 2783.835f, -1517.28f, 44.9564f;
				case 2:
					return 2716.897f, -1470.495f, 45.0363f;
				case 3:
					return 2786.347f, -1516.004f, 44.9564f;
				case 4:
					return 2785.233f, -1516.544f, 44.9564f;
				case 5:
					return 2768.458f, -1500.461f, 45.4923f;
				case 6:
					return 2766.536f, -1357.94f, 45.314f;
				case 7:
					return 2767.037f, -1360.18f, 45.314f;
				case 8:
					return 2770.207f, -1358.353f, 45.314f;
				case 9:
					return 2770.536f, -1362.151f, 45.314f;
				case 10:
					return 2787.036f, -1515.526f, 44.9564f;
				case 11:
					return 2768.342f, -1357.357f, 45.314f;
				case 12:
					return 2755.896f, -1455.612f, 45f;
				case 13:
					return 2753.016f, -1447.883f, 45f;
				case 14:
					return 2763.239f, -1454.162f, 45f;
				case 15:
					return 2753.792f, -1448.5f, 45f;
				case 16:
					return 2757.609f, -1451.449f, 45f;
				case 17:
					return 2665.38f, -1438.943f, 45.5842f;
				case 18:
					return 2757.349f, -1458.096f, 44.544f;
				case 19:
					return 2789.048f, -1390.082f, 45.2726f;
				case 20:
					return 2791.669f, -1386.244f, 45.2726f;
				case 21:
					return 2787.754f, -1390.718f, 45.2726f;
				case 22:
					return 2793.303f, -1384.274f, 45.2726f;
				case 23:
					return 2794.834f, -1382.409f, 45.2726f;
				case 24:
					return 2802.236f, -1424.37f, 44.5226f;
				case 25:
					return 2793.847f, -1440.83f, 44.3725f;
				case 26:
					return 2767.213f, -1423.656f, 45.1225f;
				case 27:
					return 2768.352f, -1425.551f, 45.3725f;
				case 28:
					return 2770.607f, -1427.419f, 45.3725f;
				case 29:
					return 2769.522f, -1426.416f, 45.3725f;
				case 30:
					return 2766.962f, -1425.863f, 45.3725f;
				case 31:
					return 2773.186f, -1410.656f, 46.8178f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1843.448f, -1827.614f, 43.0972f;
				case 1:
					return 1846.106f, -1824.959f, 43.1262f;
				case 2:
					return 1848.456f, -1816.863f, 43.1775f;
				case 3:
					return 1848.44f, -1816.935f, 43.2017f;
				case 4:
					return 1871.215f, -1837.619f, 41.5496f;
				case 5:
					return 1846.948f, -1818.081f, 43.3081f;
				case 6:
					return 1846.891f, -1818.068f, 43.2291f;
				case 7:
					return 1845.573f, -1820.548f, 43.1955f;
				case 8:
					return 1845.65f, -1820.499f, 43.1984f;
				case 9:
					return 1875.132f, -1836.972f, 41.4925f;
				case 10:
					return 1873.17f, -1837.737f, 41.5245f;
				case 11:
					return 1872.824f, -1836.987f, 41.5287f;
				case 12:
					return 2649.346f, -1282.282f, 51.5006f;
				case 13:
					return 2649.892f, -1281.605f, 51.5012f;
				case 14:
					return 1848.015f, -1825.554f, 43.0261f;
				case 15:
					return 1852.687f, -1818.746f, 43.0787f;
				case 16:
					return 2618.169f, -1309.497f, 51.0627f;
				case 17:
					return 2614.203f, -1301.692f, 51.3042f;
				case 18:
					return 2613.44f, -1300.193f, 51.3081f;
				case 19:
					return 2614.912f, -1303.162f, 51.3018f;
				case 20:
					return 2766.421f, -1323.794f, 45.6432f;
				case 21:
					return 2605.682f, -1291.831f, 51.2627f;
				case 22:
					return 2675.79f, -1363.022f, 47.2798f;
				case 23:
					return 2679.951f, -1369.299f, 46.7138f;
				case 24:
					return 2679.155f, -1365.632f, 46.9638f;
				case 25:
					return 2682.936f, -1371.938f, 46.4638f;
				case 26:
					return 2656.722f, -1143.842f, 50.3369f;
				case 27:
					return 1895.847f, -1848.705f, 41.6544f;
				case 28:
					return 2677.397f, -1161.075f, 63.4305f;
				case 29:
					return 2677.3f, -1162.378f, 63.4305f;
				case 30:
					return 1792.398f, -1791.509f, 48.4381f;
				case 31:
					return 1803.202f, -1798.531f, 48.0359f;
				case 32:
					return 1833.658f, -1818.088f, 44.1881f;
				case 33:
					return 1835.947f, -1822.44f, 43.6881f;
				case 34:
					return 1840.389f, -1818.298f, 43.4381f;
				case 35:
					return 1893.175f, -1863.679f, 42.3336f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2613.586f, -1308.934f, 51.2412f;
				case 1:
					return 2610.498f, -1300.828f, 51.2627f;
				case 2:
					return 2636.685f, -1286.82f, 51.2532f;
				case 3:
					return 2610.362f, -1301.762f, 51.2627f;
				case 4:
					return 2638.109f, -1286.026f, 51.2627f;
				case 5:
					return 2638.206f, -1285.837f, 51.2627f;
				case 6:
					return 2611.517f, -1296.127f, 51.2405f;
				case 7:
					return 2649.599f, -1283.099f, 51.494f;
				case 8:
					return 2639.835f, -1284.932f, 51.2627f;
				case 9:
					return 2610.919f, -1302.473f, 51.2627f;
				case 10:
					return 2645.127f, -1294.25f, 51.2461f;
				case 11:
					return 2640.234f, -1285.703f, 51.4633f;
				case 12:
					return 2638.094f, -1286.003f, 51.4633f;
				case 13:
					return 2644.889f, -1282.573f, 51.4633f;
				case 14:
					return 2641.552f, -1285.098f, 51.4633f;
				case 15:
					return 2639.769f, -1284.828f, 51.4633f;
				case 16:
					return 2641.561f, -1284.274f, 51.3787f;
				case 17:
					return 2636.43f, -1299.797f, 50.8787f;
				case 18:
					return 2639.933f, -1283.086f, 51.6287f;
				case 19:
					return 2645.786f, -1295.531f, 51.4961f;
				case 20:
					return 2283.312f, -1942.539f, 41.4963f;
				case 21:
					return 2611.144f, -1294.449f, 51.2389f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2644.101f, -1292.238f, 51.2462f;
				case 1:
					return 2647.156f, -1296.136f, 51.4961f;
				case 2:
					return 2643.945f, -1300.09f, 51.2461f;
				case 3:
					return 2651.754f, -1305.328f, 51.2461f;
				case 4:
					return 2649.203f, -1288.314f, 51.2464f;
				case 5:
					return 2648.377f, -1299.632f, 51.4961f;
				case 6:
					return 2639.783f, -1298.109f, 51.2461f;
				case 7:
					return 2644.849f, -1282.584f, 51.5127f;
				case 8:
					return 2638.165f, -1286.089f, 51.2627f;
				case 9:
					return 2636.826f, -1290.436f, 51.2461f;
				case 10:
					return 2645.333f, -1300.003f, 51.2461f;
				case 11:
					return 2641.728f, -1302.783f, 51.2461f;
				case 12:
					return 2646.121f, -1300.509f, 51.2552f;
				case 13:
					return 2630.146f, -1275.632f, 51.4169f;
				case 14:
					return 2628.478f, -1275.802f, 51.4169f;
				case 15:
					return 2624.907f, -1275.776f, 51.1669f;
				case 16:
					return 2631.078f, -1275.362f, 51.4169f;
				case 17:
					return 2625.517f, -1299.925f, 51.2146f;
				case 18:
					return 2626.91f, -1302.676f, 50.9646f;
				case 19:
					return 2627.371f, -1303.913f, 50.9646f;
				case 20:
					return 2627.779f, -1305.337f, 50.9646f;
				case 21:
					return 2644.581f, -1303.504f, 51.02f;
				case 22:
					return 2641.402f, -1303.49f, 51.2461f;
				case 23:
					return 2644.727f, -1306.504f, 51.2461f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2648.08f, -1288.604f, 51.2464f;
				case 1:
					return 2647.071f, -1283.781f, 51.4961f;
				case 2:
					return 2642.724f, -1285.991f, 51.2466f;
				case 3:
					return 2638.681f, -1287.854f, 51.2627f;
				case 4:
					return 2645.349f, -1284.615f, 51.4961f;
				case 5:
					return 2640.442f, -1287.021f, 51.2462f;
				case 6:
					return 2636.702f, -1288.677f, 52.2461f;
				case 7:
					return 2637.249f, -1294.881f, 51.2461f;
				case 8:
					return 2632.203f, -1281.574f, 51.0627f;
				case 9:
					return 2638.624f, -1279.86f, 51.0627f;
				case 10:
					return 2639.417f, -1281.45f, 51.0627f;
				case 11:
					return 2652.114f, -1277.287f, 51.2627f;
				case 12:
					return 2637.238f, -1294.766f, 51.7461f;
				case 13:
					return 2635.349f, -1290.815f, 51.7461f;
				case 14:
					return 2646.02f, -1294.014f, 51.7461f;
				case 15:
					return 2653.017f, -1292.071f, 52.4961f;
				case 16:
					return 2633.826f, -1274.72f, 51.4961f;
				case 17:
					return 2636.354f, -1274.772f, 51.4961f;
				case 18:
					return 2630.343f, -1275.279f, 55.9826f;
				case 19:
					return 2633.033f, -1273.975f, 55.9826f;
				case 20:
					return 2624.912f, -1261.78f, 51.4961f;
				case 21:
					return 2648.697f, -1258.445f, 51.4961f;
				case 22:
					return 2633.689f, -1274.442f, 51.5145f;
				case 23:
					return 2632.827f, -1274.801f, 51.2645f;
				case 24:
					return 2618.899f, -1289.784f, 51.4785f;
				case 25:
					return 2614.177f, -1297.335f, 51.2285f;
				case 26:
					return 2633.318f, -1282.457f, 51.3334f;
				case 27:
					return 2636.221f, -1276.821f, 51.3334f;
				case 28:
					return 2628.675f, -1285.616f, 51.3334f;
				case 29:
					return 2621.961f, -1280.493f, 51.5834f;
				case 30:
					return 2646.09f, -1293.902f, 51.7461f;
				case 31:
					return 2628.656f, -1279.228f, 51.4914f;
				case 32:
					return 2621.841f, -1277.332f, 51.2414f;
				case 33:
					return 2615.631f, -1312.655f, 51.4739f;
				case 34:
					return 2621.086f, -1308.331f, 50.9739f;
				case 35:
					return 2605.875f, -1270.884f, 51.7239f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 2646.198f, -1296.635f, 51.2461f;
				case 1:
					return 2652.9f, -1292.174f, 51.2462f;
				case 2:
					return 2627.833f, -1299.211f, 50.6749f;
				case 3:
					return 2634.997f, -1279.813f, 51.0627f;
				case 4:
					return 2620.435f, -1284.163f, 51.0627f;
				case 5:
					return 2654.213f, -1293.598f, 51.2462f;
				case 6:
					return 2649.43f, -1291.881f, 55.1734f;
				case 7:
					return 2651.872f, -1292.668f, 51.246f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2649.506f, -1293.645f, 51.2462f;
				case 1:
					return 2653.008f, -1279.835f, 63.4707f;
				case 2:
					return 2657.418f, -1298.934f, 50.4295f;
				case 3:
					return 2654.427f, -1287.468f, 63.9711f;
				case 4:
					return 2658.028f, -1297.39f, 50.4353f;
				case 5:
					return 2656.296f, -1282.524f, 63.9712f;
				case 6:
					return 2657.913f, -1297.713f, 50.4342f;
				case 7:
					return 2657.94f, -1281.729f, 63.9707f;
				case 8:
					return 2657.584f, -1298.562f, 50.4312f;
				case 9:
					return 2653.156f, -1284.701f, 63.9711f;
				case 10:
					return 2657.736f, -1298.085f, 50.4331f;
				case 11:
					return 2654.744f, -1283.253f, 63.9708f;
				case 12:
					return 2657.19f, -1299.417f, 50.4293f;
				case 13:
					return 2654.126f, -1284.652f, 63.7213f;
				case 14:
					return 2655.874f, -1293.881f, 50.403f;
				case 15:
					return 2650.187f, -1282.749f, 51.4915f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2696.296f, -1277.587f, 64.154f;
				case 1:
					return 2656.309f, -1284.752f, 63.7212f;
				case 2:
					return 2664.387f, -1288.299f, 63.7213f;
				case 3:
					return 2688.756f, -1278.367f, 64.154f;
				case 4:
					return 2685.784f, -1279.099f, 64.154f;
				case 5:
					return 2691.067f, -1281.691f, 64.154f;
				case 6:
					return 2694.121f, -1279.346f, 64.25f;
				case 7:
					return 2692.945f, -1278.333f, 64.25f;
				case 8:
					return 2693.785f, -1278.582f, 64.25f;
				case 9:
					return 2694.154f, -1277.63f, 64.1755f;
				case 10:
					return 2693.436f, -1279.592f, 64.25f;
				case 11:
					return 2676.737f, -1287.062f, 64.1336f;
				case 12:
					return 2670.867f, -1286.724f, 64.1336f;
				case 13:
					return 2671.049f, -1288.213f, 64.1336f;
				case 14:
					return 2671.811f, -1289.043f, 64.1336f;
				case 15:
					return 2671.427f, -1284.923f, 64.1336f;
				case 16:
					return 2682.377f, -1283.361f, 64.3849f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 1771.267f, -1702.318f, 48.4339f;
				case 1:
					return 1947.949f, -1553.982f, 42.6839f;
				case 2:
					return 2082.36f, -1342.178f, 41.6839f;
				case 3:
					return 2292.249f, -1373.578f, 44.4339f;
				case 4:
					return 2445.994f, -1460.02f, 44.9339f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 2782.069f, -1535.872f, 47.4786f;
				case 1:
					return 2782.375f, -1528.83f, 46.4786f;
				case 2:
					return 2781.359f, -1527.198f, 45.9786f;
				case 3:
					return 2779.982f, -1524.522f, 45.2286f;
				case 4:
					return 2779.007f, -1522.151f, 44.9786f;
				case 5:
					return 2777.728f, -1520.043f, 45.2286f;
				case 6:
					return 2782.003f, -1540.093f, 47.7286f;
				case 7:
					return 2782.793f, -1539.304f, 47.7286f;
				case 8:
					return 2778.429f, -1533.498f, 47.7286f;
				case 9:
					return 2779.509f, -1533.251f, 47.7286f;
				case 10:
					return 2779.852f, -1535.25f, 47.7286f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 2713.07f, -1326.563f, 50.5922f;
				case 1:
					return 2706.841f, -1318.445f, 50.5922f;
				case 2:
					return 2708.154f, -1319.909f, 50.5922f;
				case 3:
					return 2713.816f, -1322.689f, 51.3422f;
				case 4:
					return 2760.938f, -1299.688f, 46.7111f;
				case 5:
					return 2789.704f, -1266.923f, 46.7595f;
				case 6:
					return 2798.793f, -1273.414f, 46.5095f;
				case 7:
					return 2782.407f, -1262.816f, 46.7595f;
				case 8:
					return 2766.042f, -1251.136f, 47.7595f;
				case 9:
					return 2797.793f, -1184.472f, 46.5519f;
				case 10:
					return 2703.952f, -1289.152f, 59.3657f;
				case 11:
					return 2706.324f, -1294.663f, 59.3657f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2630.437f, -1275.422f, 61.0149f;
				case 1:
					return 2641.76f, -1270.119f, 60.7649f;
				case 2:
					return 2638.715f, -1271.83f, 55.9536f;
				case 3:
					return 2635.208f, -1273.609f, 55.9536f;
				case 4:
					return 2608.548f, -1286.469f, 51.4227f;
				case 5:
					return 2639.289f, -1271.268f, 61.683f;
				case 6:
					return 2633.024f, -1274.117f, 55.933f;
				case 7:
					return 2622.256f, -1286.297f, 51.4837f;
				case 8:
					return 2616.323f, -1286.16f, 51.4837f;
				case 9:
					return 2618.897f, -1281.738f, 51.4837f;
				case 10:
					return 2628.523f, -1280.706f, 51.4837f;
				case 11:
					return 2644.062f, -1269.102f, 60.6788f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 2804.724f, -1398.753f, 44.622f;
				case 1:
					return 2803.884f, -1399.826f, 44.622f;
				case 2:
					return 2807.838f, -1378.713f, 45.0671f;
				case 3:
					return 2768.57f, -1418.216f, 46.4618f;
				case 4:
					return 2761.165f, -1396.538f, 45.2118f;
				case 5:
					return 2766.479f, -1416.059f, 45.2751f;
				case 6:
					return 2781.049f, -1456.998f, 44.558f;
				case 7:
					return 2766.328f, -1502.097f, 45.1248f;
				case 8:
					return 2765.601f, -1502.498f, 45.0413f;
				case 9:
					return 2770.046f, -1419.305f, 45.3356f;
				case 10:
					return 2762.545f, -1395.958f, 45.4156f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 2765.133f, -1473.046f, 44.6248f;
				case 1:
					return 2779.112f, -1515.937f, 44.8748f;
				case 2:
					return 2783.455f, -1518.776f, 45.1248f;
				case 3:
					return 2780.411f, -1515.108f, 44.8748f;
				case 4:
					return 2767.928f, -1494.793f, 45.063f;
				case 5:
					return 2766.886f, -1492.99f, 45.063f;
				case 6:
					return 2766.261f, -1491.976f, 45.063f;
				case 7:
					return 2765.757f, -1491.059f, 45.063f;
				case 8:
					return 2768.922f, -1417.908f, 46.2258f;
				case 9:
					return 2758.342f, -1453.844f, 44.3991f;
				case 10:
					return 2261.1f, -1362f, 44.6f;
				case 11:
					return 2260.6f, -1363.9f, 44.6f;
				case 12:
					return 2260.3f, -1364.9f, 44.6f;
				case 13:
					return 2260.9f, -1363f, 44.6f;
				case 14:
					return 2483.741f, -1472.198f, 45.2296f;
				case 15:
					return 2481.629f, -1473.349f, 45.2296f;
				case 16:
					return 2482.149f, -1470.612f, 45.4796f;
				case 17:
					return 2479.46f, -1471.651f, 45.2296f;
				case 18:
					return 2672.974f, -1412.767f, 45.2722f;
				case 19:
					return 2676.571f, -1410.592f, 45.5222f;
				case 20:
					return 2675.927f, -1412.625f, 45.5222f;
				case 21:
					return 2674.662f, -1410.253f, 45.5222f;
				case 22:
					return 2621.49f, -1296.283f, 51.4467f;
				case 23:
					return 2624.221f, -1296.864f, 51.1967f;
				case 24:
					return 2627.403f, -1296.684f, 51.1967f;
				case 25:
					return 2625.803f, -1289.079f, 51.4467f;
				case 26:
					return 2771.901f, -1414.038f, 46.2429f;
				case 27:
					return 2774.577f, -1410.886f, 46.2429f;
				case 28:
					return 2776.829f, -1408.252f, 46.2429f;
				case 29:
					return 2778.842f, -1405.734f, 46.2429f;
				case 30:
					return 2786.738f, -1391.962f, 45.3084f;
				case 31:
					return 2796.023f, -1381.073f, 45.3084f;
				case 32:
					return 2796.914f, -1380.054f, 45.3084f;
				case 33:
					return 2766.21f, -1426.824f, 45.2413f;
				case 34:
					return 2763.668f, -1429.815f, 44.9913f;
				case 35:
					return 2762.864f, -1430.699f, 44.9913f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 2630.632f, -1275.837f, 56.671f;
				case 1:
					return 2633.355f, -1274.587f, 56.671f;
				case 2:
					return 2636.122f, -1273.286f, 56.671f;
				case 3:
					return 2638.958f, -1271.979f, 56.671f;
				case 4:
					return 2639.095f, -1271.877f, 61.671f;
				case 5:
					return 2635.831f, -1273.368f, 61.671f;
				case 6:
					return 2633.234f, -1274.618f, 61.671f;
				case 7:
					return 2630.533f, -1275.828f, 61.671f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 2651.735f, -1272.42f, 51.3982f;
				case 1:
					return 2657.599f, -1269.403f, 51.3982f;
				case 2:
					return 2667.281f, -1264.893f, 51.1482f;
				case 3:
					return 2673.329f, -1261.867f, 50.8982f;
				case 4:
					return 2681.83f, -1258.042f, 50.6482f;
				case 5:
					return 2693.086f, -1253.149f, 49.8982f;
				case 6:
					return 2708.42f, -1245.696f, 49.1482f;
				case 7:
					return 2684.912f, -1293.46f, 49.6482f;
				case 8:
					return 2691.674f, -1288.082f, 49.6482f;
				case 9:
					return 2698.223f, -1284.959f, 49.6482f;
				case 10:
					return 2700.246f, -1293.578f, 48.6482f;
				case 11:
					return 2714.797f, -1256.54f, 48.8982f;
				case 12:
					return 2719.438f, -1266.225f, 48.8982f;
				case 13:
					return 2707.319f, -1308.221f, 47.8982f;
				case 14:
					return 2710.603f, -1313.111f, 47.1482f;
				case 15:
					return 2724.946f, -1278.524f, 48.6482f;
				case 16:
					return 2725.178f, -1333.659f, 46.6482f;
				case 17:
					return 2733.941f, -1296.641f, 47.3982f;
				case 18:
					return 2740.34f, -1308.426f, 46.6482f;
				case 19:
					return 2754.75f, -1317.807f, 46.8982f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_874(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 206.4062f;
				case 1:
					return 222.5165f;
				case 2:
					return 159.6006f;
				case 3:
					return 164.5165f;
				case 4:
					return -153.6469f;
				case 5:
					return 600.9624f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 234.1707f;
				case 1:
					return 238.4339f;
				case 2:
					return 234.4339f;
				case 3:
					return 234.4143f;
				case 4:
					return 233.6252f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -148.0799f;
				case 1:
					return -153.2138f;
				case 2:
					return 113.9548f;
				case 3:
					return 207.6571f;
				case 4:
					return 211.6879f;
				case 5:
					return 30f;
				case 6:
					return 217.8403f;
				case 7:
					return 215.8403f;
				case 8:
					return 571.8403f;
				case 9:
					return -512.16f;
				case 10:
					return -153.7533f;
				case 11:
					return 208.895f;
				case 12:
					return 476.895f;
				case 13:
					return 138.895f;
				case 14:
					return 134.895f;
				case 15:
					return 142.895f;
				case 16:
					return 109.3972f;
				case 17:
					return 25.3972f;
				case 18:
					return 119.7547f;
				case 19:
					return 230.5251f;
				case 20:
					return 228.5251f;
				case 21:
					return 230.5251f;
				case 22:
					return 226.5251f;
				case 23:
					return 226.5251f;
				case 24:
					return 216.6872f;
				case 25:
					return 143.1243f;
				case 26:
					return 232.6573f;
				case 27:
					return 140.6573f;
				case 28:
					return 142.6573f;
				case 29:
					return 136.6573f;
				case 30:
					return 230.6573f;
				case 31:
					return 142.5759f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 72.06f;
				case 1:
					return 60.5f;
				case 2:
					return -310f;
				case 3:
					return 39.37f;
				case 4:
					return 80.23f;
				case 5:
					return 54.64f;
				case 6:
					return 47.72f;
				case 7:
					return -293.14f;
				case 8:
					return 63.5f;
				case 9:
					return 114.29f;
				case 10:
					return 112.26f;
				case 11:
					return -167.1f;
				case 12:
					return -425.5081f;
				case 13:
					return 67.9561f;
				case 14:
					return 58.34f;
				case 15:
					return 42.6536f;
				case 16:
					return 27.269f;
				case 17:
					return 115.269f;
				case 18:
					return 117.269f;
				case 19:
					return 113.269f;
				case 20:
					return 421.3309f;
				case 21:
					return 274.5909f;
				case 22:
					return 38.1548f;
				case 23:
					return 35.7989f;
				case 24:
					return 41.7989f;
				case 25:
					return 39.7989f;
				case 26:
					return 264.3831f;
				case 27:
					return 241.6389f;
				case 28:
					return 180.884f;
				case 29:
					return -3.116f;
				case 30:
					return 57.0374f;
				case 31:
					return 55.0374f;
				case 32:
					return 61.0374f;
				case 33:
					return 61.0374f;
				case 34:
					return 63.0374f;
				case 35:
					return 141.0617f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 25.986f;
				case 1:
					return -60.014f;
				case 2:
					return -334f;
				case 3:
					return -80.6132f;
				case 4:
					return 25.3925f;
				case 5:
					return 108f;
				case 6:
					return 476.5199f;
				case 7:
					return -70.26f;
				case 8:
					return 248.5199f;
				case 9:
					return 588.5199f;
				case 10:
					return 380.873f;
				case 11:
					return -17.1725f;
				case 12:
					return 24.8275f;
				case 13:
					return 390.8275f;
				case 14:
					return 110.8275f;
				case 15:
					return 250.8275f;
				case 16:
					return 73.5714f;
				case 17:
					return 295.5714f;
				case 18:
					return 201.5714f;
				case 19:
					return 19.9366f;
				case 20:
					return 314.2344f;
				case 21:
					return 114.7684f;
			}
			Jump @5719; //curOff = 1901
			switch (iParam1)
			{
				case 0:
					return 203.396f;
				case 1:
					return -108f;
				case 2:
					return 158.873f;
				case 3:
					return 384.873f;
				case 4:
					return 135.9836f;
				case 5:
					return 31.9836f;
				case 6:
					return 291.9836f;
				case 7:
					return 391.9836f;
				case 8:
					return 385.9836f;
				case 9:
					return 245.9836f;
				case 10:
					return 91.808f;
				case 11:
					return 367.808f;
				case 12:
					return 367.0001f;
				case 13:
					return 199.2374f;
				case 14:
					return 185.2374f;
				case 15:
					return -132.7626f;
				case 16:
					return 205.2374f;
				case 17:
					return 294.4882f;
				case 18:
					return 294.4882f;
				case 19:
					return 294.4882f;
				case 20:
					return 294.4882f;
				case 21:
					return 292.6063f;
				case 22:
					return 106.937f;
				case 23:
					return 202.937f;
			}
			Jump @5719; //curOff = 2320
			switch (iParam1)
			{
				case 0:
					return 22.0816f;
				case 1:
					return 24.3918f;
				case 2:
					return 22f;
				case 3:
					return 386.4158f;
				case 4:
					return 24.4158f;
				case 5:
					return 22.4158f;
				case 6:
					return 22.4158f;
				case 7:
					return 112.4158f;
				case 8:
					return 204.7542f;
				case 9:
					return -155.5143f;
				case 10:
					return -155.5143f;
				case 11:
					return -69.0366f;
				case 12:
					return 293.8138f;
				case 13:
					return 293.8138f;
				case 14:
					return 161.1215f;
				case 15:
					return 115.3074f;
				case 16:
					return 205.9992f;
				case 17:
					return 205.9992f;
				case 18:
					return 203.5164f;
				case 19:
					return 205.5164f;
				case 20:
					return -169.146f;
				case 21:
					return -157.146f;
				case 22:
					return 207.9981f;
				case 23:
					return 203.9981f;
				case 24:
					return 22.3682f;
				case 25:
					return 24.3682f;
				case 26:
					return -84.546f;
				case 27:
					return -90.546f;
				case 28:
					return -88.546f;
				case 29:
					return -84.546f;
				case 30:
					return 340.3323f;
				case 31:
					return 247.7758f;
				case 32:
					return 225.7758f;
				case 33:
					return 379.9406f;
				case 34:
					return 381.9406f;
				case 35:
					return 153.9406f;
			}
			Jump @5719; //curOff = 2943
			switch (iParam1)
			{
				case 0:
					return 24.4232f;
				case 1:
					return -68f;
				case 2:
					return 294.7542f;
				case 3:
					return 208.7542f;
				case 4:
					return 238.7542f;
				case 5:
					return 291.2391f;
				case 6:
					return 297.2391f;
				case 7:
					return 296.115f;
			}
			Jump @5719; //curOff = 3090
			switch (iParam1)
			{
				case 0:
					return 294.5818f;
				case 1:
					return 83.3196f;
				case 2:
					return -23.2848f;
				case 3:
					return 115.0333f;
				case 4:
					return 5.2486f;
				case 5:
					return 21.1039f;
				case 6:
					return -1.062f;
				case 7:
					return 23.1871f;
				case 8:
					return -10.3f;
				case 9:
					return 115.5127f;
				case 10:
					return -18.1238f;
				case 11:
					return 24.3528f;
				case 12:
					return -24.2603f;
				case 13:
					return 49.7397f;
				case 14:
					return -68.611f;
				case 15:
					return 205.8901f;
			}
			Jump @5719; //curOff = 3373
			switch (iParam1)
			{
				case 0:
					return 296.8888f;
				case 1:
					return -112f;
				case 2:
					return -468.2603f;
				case 3:
					return -156.13f;
				case 4:
					return 113.3549f;
				case 5:
					return 113.3549f;
				case 6:
					return 267.1721f;
				case 7:
					return 273.1721f;
				case 8:
					return 249.1721f;
				case 9:
					return 289.1721f;
				case 10:
					return 325.1721f;
				case 11:
					return 293.7418f;
				case 12:
					return 283.7418f;
				case 13:
					return 295.7418f;
				case 14:
					return 287.7418f;
				case 15:
					return 257.7418f;
				case 16:
					return 294.818f;
			}
			Jump @5719; //curOff = 3673
			switch (iParam1)
			{
				case 0:
					return -9.897f;
				case 1:
					return -43.897f;
				case 2:
					return -53.897f;
				case 3:
					return -109.897f;
				case 4:
					return -115.897f;
			}
			Jump @5719; //curOff = 3769
			switch (iParam1)
			{
				case 0:
					return 119.2433f;
				case 1:
					return 203.2433f;
				case 2:
					return 213.2433f;
				case 3:
					return 207.2433f;
				case 4:
					return 201.2433f;
				case 5:
					return 207.2433f;
				case 6:
					return 153.2433f;
				case 7:
					return 183.2433f;
				case 8:
					return 43.2433f;
				case 9:
					return 29.2433f;
				case 10:
					return 61.2433f;
			}
			Jump @5719; //curOff = 3967
			switch (iParam1)
			{
				case 0:
					return 36.7803f;
				case 1:
					return -139.2197f;
				case 2:
					return 44.7803f;
				case 3:
					return 23.6417f;
				case 4:
					return 329.827f;
				case 5:
					return -34.2028f;
				case 6:
					return -124.2028f;
				case 7:
					return -38.2028f;
				case 8:
					return 59.7972f;
				case 9:
					return 419.1483f;
				case 10:
					return 386.6382f;
				case 11:
					return 386.6382f;
			}
			Jump @5719; //curOff = 4182
			switch (iParam1)
			{
				case 0:
					return -106.655f;
				case 1:
					return 205.345f;
				case 2:
					return 206.4049f;
				case 3:
					return 204.4049f;
				case 4:
					return -154.536f;
				case 5:
					return 202.7999f;
				case 6:
					return 200.7999f;
				case 7:
					return 280.405f;
				case 8:
					return 272.405f;
				case 9:
					return 270.405f;
				case 10:
					return 272.405f;
				case 11:
					return 205.2923f;
			}
			Jump @5719; //curOff = 4397
			switch (iParam1)
			{
				case 0:
					return 501.5818f;
				case 1:
					return 321.5818f;
				case 2:
					return 317.7062f;
				case 3:
					return -38.9969f;
				case 4:
					return -64.9969f;
				case 5:
					return -3.7641f;
				case 6:
					return 135.3237f;
				case 7:
					return 120.9784f;
				case 8:
					return 120.7861f;
				case 9:
					return 51.205f;
				case 10:
					return 115.6258f;
			}
			Jump @5719; //curOff = 4595
			switch (iParam1)
			{
				case 0:
					return 144.9256f;
				case 1:
					return 30.9256f;
				case 2:
					return 300.9256f;
				case 3:
					return 32.9256f;
				case 4:
					return 119.8727f;
				case 5:
					return 119.8727f;
				case 6:
					return 121.8727f;
				case 7:
					return 119.8727f;
				case 8:
					return 231.622f;
				case 9:
					return 106.5012f;
				case 10:
					return 250.7624f;
				case 11:
					return 248.7624f;
				case 12:
					return 248.7624f;
				case 13:
					return 250.7624f;
				case 14:
					return -97.8594f;
				case 15:
					return -97.8594f;
				case 16:
					return -97.8594f;
				case 17:
					return -99.8594f;
				case 18:
					return 299.299f;
				case 19:
					return 301.299f;
				case 20:
					return 299.299f;
				case 21:
					return 301.299f;
				case 22:
					return 113.605f;
				case 23:
					return 113.7598f;
				case 24:
					return 113.7598f;
				case 25:
					return 117.7598f;
				case 26:
					return 140.082f;
				case 27:
					return 140.082f;
				case 28:
					return 140.082f;
				case 29:
					return 140.082f;
				case 30:
					return 231.0731f;
				case 31:
					return 231.0731f;
				case 32:
					return 227.0731f;
				case 33:
					return 231.7247f;
				case 34:
					return 229.7247f;
				case 35:
					return 229.7247f;
			}
			Jump @5719; //curOff = 5218
			switch (iParam1)
			{
				case 0:
					return 208.6203f;
				case 1:
					return -157.3797f;
				case 2:
					return -155.3797f;
				case 3:
					return -155.3797f;
				case 4:
					return -153.3797f;
				case 5:
					return 206.6203f;
				case 6:
					return -151.3797f;
				case 7:
					return -151.3797f;
			}
			Jump @5719; //curOff = 5365
			switch (iParam1)
			{
				case 0:
					return 223.313f;
				case 1:
					return 209.313f;
				case 2:
					return 203.313f;
				case 3:
					return 203.313f;
				case 4:
					return 203.313f;
				case 5:
					return 199.313f;
				case 6:
					return 163.313f;
				case 7:
					return 27.313f;
				case 8:
					return 25.313f;
				case 9:
					return 27.313f;
				case 10:
					return 297.313f;
				case 11:
					return 119.313f;
				case 12:
					return 119.313f;
				case 13:
					return 119.313f;
				case 14:
					return 125.313f;
				case 15:
					return 119.313f;
				case 16:
					return 133.313f;
				case 17:
					return 119.313f;
				case 18:
					return 133.313f;
				case 19:
					return 119.313f;
			}
			return 0f;
		}

bool func_875(char[4] cParam0)
{
	if (!func_420(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1504(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1504(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1504(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1504(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1504(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1504(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1504(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1504(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1504(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1504(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1504(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1504(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1504(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1504(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1504(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1504(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1504(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1504(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1504(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1504(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1504(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1504(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1504(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1504(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1504(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1504(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1504(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1504(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1504(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1504(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1504(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1504(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1504(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_420(cParam0->f_5417);
}

bool func_876(int iParam0, var uParam1)
{
	uParam1->f_10 = func_283(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return false;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return false;
	}
	if (*uParam1)
	{
		if (func_420(uParam1->f_6))
		{
		}
	}
	bVar0 = func_419();
	if (*uParam1)
	{
		if (bVar0 && !func_344((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1505(5))
			{
				func_573(5);
				func_1506(5);
				func_1507(0);
				func_1508(0);
			}
		}
	}
	if (func_1509(Global_36) == 8)
	{
		*iParam0 = 1;
		return false;
	}
	if ((bVar0 && func_344((*Global_1835011)[37]->f_1, 1)) && !func_344((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return false;
	}
	if ((bVar0 && func_344((*Global_1835011)[43]->f_1, 1)) && !func_344((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return false;
		}
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_232(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_576(iVar1))
	{
		bVar3 = true;
		if (func_1510(iVar1))
		{
			bVar4 = true;
		}
		if (func_583(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_584(uParam1->f_10);
				*iParam0 = 0;
				return false;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return false;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1505(0) && func_1505(1))
			{
				func_1511(1, 0);
				*iParam0 = 0;
				return false;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1512())
			{
				func_1513();
			}
			func_1507(0);
			func_1508(0);
			func_1514(uParam1->f_6);
		}
	}
	if (!func_576(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1515(uParam1->f_10) == 0 || func_1516(uParam1->f_10) == 0) || func_1517(uParam1->f_10) == 0)
			{
				func_1518(uParam1->f_10);
			}
			func_1519(uParam1->f_10);
			func_1520(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return false;
		}
		*iParam0 = 1;
		return false;
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_232(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_576(iVar1))
	{
		bVar3 = true;
		if (func_1510(iVar1))
		{
			bVar4 = true;
		}
		if (func_583(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(bVar2))
			{
				freeze_entity_position(bVar2, false);
			}
			if (!func_420(uParam1->f_6))
			{
				set_entity_coords(bVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(bVar2, uParam1->f_9);
				_0x9587913b9e772d29(bVar2, 0);
			}
		}
	}
	if (func_1521(uParam1->f_10))
	{
		*iParam0 = 0;
		return false;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return false;
			}
			*iParam0 = 1;
			return false;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return false;
			}
			*iParam0 = 1;
			return false;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(bVar2))
			{
				*iParam0 = 0;
				return false;
			}
			iVar6 = player_id();
			iVar7 = _get_saddle_horse_for_player(iVar6);
			if (does_entity_exist(iVar7))
			{
				if (iVar7 != bVar2)
				{
					_set_ped_as_saddle_horse_for_player(iVar6, 0);
				}
			}
			Var8 = { func_1522(uParam1->f_10) };
			Var10 = { func_1523() };
			func_1524(bVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, bVar2);
			set_ped_config_flag(bVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return bVar2;
	}
	if (!func_569(uParam1->f_10))
	{
		set_entity_as_mission_entity(bVar2, true, true);
		func_1525(uParam1->f_10);
		if (uParam1->f_2 && !func_420(uParam1->f_6))
		{
			freeze_entity_position(bVar2, false);
			_0x0348469daa17576c(bVar2);
			set_entity_coords(bVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(bVar2, uParam1->f_9);
			_0x9587913b9e772d29(bVar2, 0);
		}
		*iParam0 = 2;
		return bVar2;
	}
	func_568(uParam1->f_10);
	if (func_569(uParam1->f_10))
	{
		iVar16 = func_279(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return false;
		}
	}
	*iParam0 = 2;
	return bVar2;
}

bool func_877(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (!does_entity_exist(bParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(bParam0, bParam3, false), get_entity_coords(bParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_878(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (is_entity_dead(bParam0) || is_ped_injured(bParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(bParam0, -1805387726))
	{
		return true;
	}
	return false;
}

bool func_879(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1526(iParam1))
	{
		return false;
	}
	bVar0 = func_1527(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
	*iParam0 = ped_to_net(bVar0);
	if (network_does_network_id_exist(*iParam0))
	{
		if (bParam9)
		{
			_0x899a04afcc725d04(bVar0, _0xd42514c182121c23(iParam1));
		}
		if (bParam10)
		{
			set_ped_relationship_group_hash(bVar0, _get_default_relationship_group_hash(iParam1));
		}
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*iParam0, true);
		}
		return true;
	}
	return false;
}

void func_880(char[4] cParam0, bool bParam1)
{
	if (!is_entity_dead(cParam0->f_5411))
	{
		if (!_0x88ad6cc10d8d35b2(cParam0->f_5411))
		{
			set_entity_as_mission_entity(cParam0->f_5411, true, true);
		}
		if ((bParam1 && !_0x3ab6c7b0bb0df4b1(cParam0->f_5411, -1)) && !func_120(cParam0, 32768))
		{
			clear_ped_tasks(cParam0->f_5411, 1, 0);
		}
		if (!func_20() == 0)
		{
			set_ped_relationship_group_hash(cParam0->f_5411, 1030835986);
		}
		else
		{
			set_ped_relationship_group_hash(cParam0->f_5411, get_ped_relationship_group_default_hash(player_ped_id()));
			set_entity_can_be_damaged(cParam0->f_5411, false);
		}
		if (get_ped_config_flag(cParam0->f_5411, 136, true))
		{
			set_ped_config_flag(cParam0->f_5411, 136, false);
		}
	}
}

float func_881(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(bParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(bParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(bParam0, false, false), get_entity_coords(bParam1, false, false), bParam2);
}

void func_882(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	if (is_entity_dead(bParam0))
	{
		return;
	}
	bVar4 = is_entity_a_ped(bParam0);
	if (bVar4)
	{
		iVar1 = get_ped_index_from_entity_index(bParam0);
		bVar3 = _get_ped_crouch_movement(iVar1);
		if (is_ped_ragdoll(iVar1))
		{
			_0x221f4d9912b7fe86(iVar1, 1);
		}
	}
	if (bParam0 == func_1528(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1529(bParam0))
	{
		if (func_878(get_ped_index_from_entity_index(bParam0)))
		{
			_0x0348469daa17576c(bParam0);
		}
	}
	if (func_195(iParam5, 4) && is_entity_a_ped(bParam0))
	{
		iVar1 = get_ped_index_from_entity_index(bParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			bVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(bVar0) && !is_entity_dead(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_882(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			bVar2 = get_mount(iVar1);
			if (does_entity_exist(bVar2) && !is_entity_dead(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_882(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_195(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(bParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(bParam0), false, true);
		}
	}
	if (func_195(iParam5, 2))
	{
		if (is_entity_a_vehicle(bParam0))
		{
			_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_195(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_195(iParam5, 32), true);
			_0x9587913b9e772d29(bParam0, 0);
		}
	}
	else if (func_195(iParam5, 129))
	{
		if (func_195(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(bParam0, vParam1, func_195(iParam5, 32), true, true);
		set_entity_heading(bParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_195(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_195(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(bParam0), bVar3, 0, false);
		}
		if (func_1529(bParam0))
		{
			bVar6 = get_ped_index_from_entity_index(bParam0);
			_0x0348469daa17576c(bVar6);
			if (!func_195(iParam5, 32))
			{
				clear_ped_tasks(bVar6, 1, 0);
				task_stand_still(bVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(bParam0), 1);
		if (get_ped_index_from_entity_index(bParam0) == Global_35 && !func_195(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

int func_883(char* sParam0)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return 0;
	}
	iVar0 = get_hash_key(sParam0);
	iVar1 = get_itemset_size(&Global_1396084);
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar2 = get_indexed_item_in_itemset(iVar3, &Global_1396084);
		if (_does_item_have_valid_base(iVar2))
		{
			if (decor_exist_on(iVar2, "pedRoam_hashKey"))
			{
				if (decor_get_int(iVar2, "pedRoam_hashKey") == iVar0)
				{
					iVar4 = _0x3ffb15534067dcd4(iVar2);
					decor_remove(iVar4, "pedRoam_hashKey");
					remove_from_itemset(iVar2, &Global_1396084);
					return iVar4;
				}
			}
		}
		iVar3++;
	}
	return 0;
}

int func_884(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1045(iParam0))
	{
	}
	bVar0 = false;
	if (func_1530(bParam1) == iParam0)
	{
	}
	else
	{
		func_1531(iParam0, bParam1, bParam3, 0);
		bVar0 = true;
	}
	if (bParam2)
	{
		if (!func_1047(iParam0))
		{
			if (!func_1532(iParam0, bParam4, 1, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	if (!bVar0)
	{
		func_1533(bParam1, iParam0);
	}
	return 1;
}

void func_885(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		iLocal_1756 = 0;
		while (iVar1753 < 6)
		{
			iVar0 = _get_ped_in_draft_seat(iParam0, iVar1753);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				if (!is_entity_visible(iVar0))
				{
					set_entity_visible(iVar0, true);
				}
			}
			iLocal_1756 = iVar1753 + 1;
		}
	}
}

void func_886(int iParam0, bool bParam1)
{
	iLocal_1756 = 0;
	while (iVar1752 < 6)
	{
		iVar0 = _get_ped_in_draft_seat(iParam0, iVar1752);
		if (does_entity_exist(iVar0))
		{
			set_entity_visible(iVar0, bParam1);
			set_entity_collision(iVar0, bParam1, false);
			freeze_entity_position(iVar0, false);
		}
		iLocal_1756 = iVar1752 + 1;
	}
}

bool func_887(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_888(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_889(var uParam0)
{
	return uParam0->f_862;
}

void func_890(var uParam0)
{
	if (func_1033(&iVar0))
	{
		if (func_624(iVar0, 0))
		{
			if (func_648(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_676(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_624(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_891(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1534(-1);
	}
	func_1535(1);
	set_entity_invincible(Global_35, true);
	if (!func_888(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_888(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_888(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_888(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_888(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_888(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_888(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_888(*iParam0, 4) && !func_888(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_888(*iParam0, 2048))
	{
		func_902(0, 0);
	}
	if (func_888(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_888(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_888(*iParam0, 8192))
	{
		func_1536();
	}
	if (!func_888(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_888(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_888(*iParam0, 1024))
	{
		set_cinematic_mode_active(false);
	}
	if (iParam2 != 2)
	{
		set_ped_stealth_movement(Global_35, iParam2 == 1, 0, 0);
	}
	if (is_ped_on_foot(Global_35))
	{
		if (bParam6)
		{
			set_ped_desired_move_blend_ratio(Global_35, 0f);
			set_ped_desired_heading(Global_35, get_entity_heading(Global_35));
			set_entity_velocity(Global_35, 0f, 0f, 0f);
		}
		if (!func_888(*iParam0, 16))
		{
			iVar0 = create_itemset(true);
			bVar1 = false;
			find_all_attached_carriable_entities(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < get_itemset_size(iVar0))
			{
				iVar6 = get_indexed_item_in_itemset(iVar2, iVar0);
				iVar7 = _get_entity_from_item(iVar6);
				if (!does_entity_exist(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (is_entity_an_object(iVar7))
					{
						if (func_1537() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_420(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1538(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1508(2);
						func_1507(-1);
						func_1514(vVar3);
						func_1540(func_1539());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!_0x3ab6c7b0bb0df4b1(Global_35, -1))
				{
					clear_ped_tasks_immediately(Global_35, false, true);
					_0x2208438012482a1a(Global_35, false, false);
				}
			}
			destroy_itemset(iVar0);
		}
	}
	if (bParam6 && is_ped_on_mount(Global_35))
	{
		bVar9 = get_mount(Global_35);
		if (!is_entity_dead(bVar9))
		{
			clear_ped_tasks(bVar9, 1, 0);
			task_stand_still(bVar9, -1);
		}
	}
	if (!func_888(*iParam0, 4096))
	{
		func_1541(Global_35);
	}
	if (!func_888(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_888(*iParam0, 2097152))
	{
		if (func_1542() || _0x50f124e6ef188b22(Global_35))
		{
			func_1543(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_892(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_893(var uParam0)
{
	if (func_887(uParam0, 2048) && !func_420(func_1544(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		bVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(bVar1) && ((bVar0 && is_entity_in_volume(bVar1, uParam0->f_4, true, 0)) || func_887(uParam0, -2147483648))) && get_mount(Global_35) != bVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(bVar1))
			{
				iVar2 |= 32;
			}
			func_882(bVar1, func_1544(uParam0), func_1545(uParam0), iVar2, 1073741824);
		}
		bVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(bVar3) && ((bVar0 && is_entity_in_volume(bVar3, uParam0->f_4, true, 0)) || func_887(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, bVar3, true))
		{
			func_882(bVar3, func_1544(uParam0), func_1545(uParam0), 2, 1073741824);
		}
	}
}

void func_894(var uParam0)
{
	if ((func_887(uParam0, 268435456) && !func_420(func_1544(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		bVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(bVar0))
		{
			vVar1 = { func_1544(uParam0) };
			func_882(bVar0, vVar1, func_1546(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(bVar0, 0f);
			set_entity_velocity(bVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(bVar0, 0f);
		}
	}
}

void func_895(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_420(vParam1))
	{
		func_1547(uParam0, 2048, 1);
	}
	else
	{
		func_797(uParam0, 2048);
		if (bParam5)
		{
			func_797(uParam0, -2147483648);
		}
	}
}

void func_896(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((!is_entity_dead(&(uParam0->f_13[iVar0])) && is_entity_a_ped(&(uParam0->f_13[iVar0]))) && get_ped_index_from_entity_index(&(uParam0->f_13[iVar0])) != Global_35)
		{
			iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
			if (is_ped_human(iVar1))
			{
				if (_0x6f1f0b17109309da(uParam0->f_804, &(uParam0->f_13[iVar0]->f_1)))
				{
					if (!func_1548(uParam0->f_13[iVar0], 8))
					{
						if (func_738(func_1183(iVar1, 0, 1, 0)))
						{
							if (!func_1549(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_738(func_1183(iVar1, 1, 1, 0)))
						{
							if (!func_1549(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_897(var uParam0, bool bParam1)
{
	_0x67e21acc5c0c970c(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			_set_ped_component_disabled(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_898(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_20() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(bParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				_set_ped_body_component(bParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				_set_ped_body_component(bParam1, Global_1347477->f_190);
			}
			func_1279(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1550(bParam1, 29, bVar4, 1, 0);
			func_1550(bParam1, 31, bVar4, 1, 0);
			func_1550(bParam1, 30, bVar4, 1, 0);
			func_1550(bParam1, 22, bVar4, 1, 0);
			func_1550(bParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1219(32768) && func_1551(1108822547, 8)) && func_1552(10, iParam3))
	{
		func_1553(bParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1287(iVar1, 1);
			if (func_1551(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1552(iVar1, iParam3))
				{
				}
				else if ((func_1551(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1551(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1550(bParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1554(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1] == &Global_1946804->f_2456[iVar1]) && uParam0->f_1[iVar1]->f_1 == Global_1946804->f_2456[iVar1]->f_1)
						{
						}
						else
						{
							if (Global_1946804->f_57[iVar1]->f_1 > 1)
							{
								func_1550(bParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1551(iVar3, 1))
							{
								func_1555(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							_set_ped_component_enabled(bParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1]->f_1 != 0)
							{
								_0x66b957aac2eaaeab(bParam1, iVar2, uParam0->f_1[iVar1]->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							_0xaab86462966168ce(bParam1, bVar4);
							_update_ped_variation(bParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_899(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1556((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_900(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_901(int iParam0, int iParam1)
{
	return func_1557(&uVar0, iParam0, iParam1);
}

void func_902(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_738(iVar3) && _0x705be297eebdb95d(iVar3))
			{
				if (bParam0)
				{
					if (get_ammo_in_ped_weapon(Global_35, iVar3) < _get_weapon_clip_size(iVar3) * 4)
					{
						_add_ammo_to_ped_by_type(Global_35, _get_ammo_type_for_weapon(iVar3), (_get_weapon_clip_size(iVar3) * 4 - get_ped_ammo_by_type(Global_35, get_ped_ammo_type_from_weapon(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = get_ammo_in_ped_weapon(Global_35, iVar3);
				if (iVar0 > _get_weapon_clip_size(iVar3))
				{
					iVar1 = _get_weapon_clip_size(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					set_ammo_in_clip(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && _0x21091b4beb6376ee(get_player_index()) == 0)
	{
		func_1558(1);
	}
}

void func_903(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_904(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_905(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_906(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_907(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_908(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_909(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_910(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_911(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_912(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_913(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_914(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (uParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_915(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_928((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_916(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]))
		{
			if (are_strings_equal(uParam0[iVar0], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_917(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_932((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_918(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]))
		{
			if (are_strings_equal(uParam0[iVar0], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_919(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!func_934((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_920(int iParam0, int iParam1)
{
	iVar0 = func_1559(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_921(var uParam0, char* sParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]))
		{
			if (are_strings_equal(uParam0[iVar0], sParam1) && (*uParam0)[iVar0]->f_1 == iParam2)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_922(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_937((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_923(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_924(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]))
		{
			if (are_strings_equal(uParam0[iVar0], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_925(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_930((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_926(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0[iVar0] != 0)
		{
			if (uParam0[iVar0] == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_927(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_943((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_928(var uParam0)
{
	return *uParam0 != 0;
}

void func_929(var uParam0)
{
	if (!func_959(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_923(&(uParam0->f_1), 1);
	}
}

bool func_930(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_931(var uParam0)
{
	if (!func_959(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 2:
				request_waypoint_recording(*uParam0);
				break;
			case 1:
				request_vehicle_recording(uParam0->f_2, *uParam0);
				break;
			default:
				break;
		}
		func_923(&(uParam0->f_3), 1);
	}
}

bool func_932(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_933(var uParam0)
{
	if (!func_959(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_923(&(uParam0->f_1), 1);
	}
}

bool func_934(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_935(var uParam0)
{
	if (func_959(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_959(uParam0->f_1, 1))
	{
		func_1560(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_923(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_936(var uParam0)
{
	if (func_959(*uParam0, 2))
	{
		return true;
	}
	if (!func_959(*uParam0, 1))
	{
		func_1561(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_923(uParam0, 2);
		return true;
	}
	return false;
}

bool func_937(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_938(var uParam0)
{
	if (!func_959(uParam0->f_2, 1))
	{
		if (func_1562(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1563(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_321())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1139())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_923(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_939(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_940(var uParam0, int iParam1)
{
	if (!func_959(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_923(&(uParam0->f_1), 1);
	}
}

bool func_941(var uParam0)
{
	return *uParam0 != 0;
}

void func_942(var uParam0)
{
	if (!func_959(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_923(&(uParam0->f_2), 1);
	}
}

bool func_943(var uParam0)
{
	return *uParam0 != 0;
}

void func_944(var uParam0)
{
	if (!func_959(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_923(&(uParam0->f_3), 1);
	}
}

bool func_945(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_946(var uParam0)
{
	if (!func_959(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_923(&(uParam0->f_1), 1);
	}
}

bool func_947(var uParam0)
{
	return func_1564(*uParam0);
}

void func_948(var uParam0)
{
	if (!func_959(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_923(&(uParam0->f_1), 1);
	}
}

bool func_949(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_950(var uParam0)
{
	if (!func_959(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_923(&(uParam0->f_2), 1);
	}
}

bool func_951(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_952(var uParam0)
{
	if (!func_959(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_923(&(uParam0->f_1), 1);
	}
}

bool func_953(var uParam0, bool bParam1, char* sParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (are_strings_equal(sParam2, &((*uParam0)[iVar1]->f_1)))
		{
			(*uParam0)[iVar1] = bParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97] = bParam1;
			StringCopy(&((*uParam0)[uParam0->f_97]->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_954(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (iParam3 == 0 && !does_entity_exist(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (is_entity_dead(iParam1) && !bParam5))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_793(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1565(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0]->f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0]->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_1566(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1567(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1568(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1569(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1570(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_955(int iParam0)
{
	if (!func_206(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_956(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_969(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return false;
		}
	}
	if (!uParam0->f_2502)
	{
		iVar20 = uParam0->f_2509;
		while (iVar20 <= (uParam0->f_2508 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			if (func_1571(uParam0, 0))
			{
				if (func_1572(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1573(uParam0, 1, &iVar0))
					{
					}
					if (func_1574(uParam0, 3, &cVar2))
					{
					}
					if (func_1573(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1573(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1573(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1573(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1573(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1575(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_543((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_543(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_543(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_234(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1575(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_543(uParam0->f_2243[uParam0->f_2507], 1048576);
							uParam0->f_2507++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_2509 = iVar20 + 1;
				uParam0->f_2500 = 0;
				return false;
			}
			iVar20++;
		}
		uParam0->f_2502 = 1;
	}
	if (!func_24(uParam0) && uParam0->f_2510 > 0)
	{
		iVar20 = uParam0->f_2511;
		while (iVar20 <= (uParam0->f_2510 - 1))
		{
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			iVar22 = 0;
			if (func_1571(uParam0, 12))
			{
				if (func_1573(uParam0, 13, &iVar0))
				{
				}
				if (func_1573(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (is_model_valid(iVar22) && iVar22 != 0)
			{
				uParam0->f_2484[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_2511 = iVar20 + 1;
				uParam0->f_2500 = 0;
				return false;
			}
			iVar20++;
		}
	}
	uParam0->f_2500 = 1;
	uParam0->f_2509 = 0;
	uParam0->f_2511 = 0;
	uParam0->f_2502 = 0;
	uParam0->f_2503 = 1;
	if (!bParam4)
	{
		func_38(uParam0);
	}
	return true;
}

void func_957(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_234((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_234((*uParam0)[iVar0], 1))
		{
			func_1576((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_958(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_928((*uParam0)[iVar1]))
		{
			if (func_920((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1577((*uParam0)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (func_930((*uParam1)[iVar1]))
		{
			if (func_920((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1578((*uParam1)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (func_932((*uParam2)[iVar1]))
		{
			if (func_920((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1579((*uParam2)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (func_934((*uParam3)[iVar1]))
		{
			if (func_920((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_935((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_920(uParam4->f_1, iParam12))
	{
		if (!func_936(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_937((*uParam5)[iVar1]))
		{
			if (func_920((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1562((*uParam5)[iVar1]))
				{
					if (!func_960((*uParam5)[iVar1]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_937((*uParam5)[iVar1]))
		{
			if (func_920((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1562((*uParam5)[iVar1]))
				{
					if (func_960((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_939((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1580((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (func_941((*uParam6)[iVar1]))
		{
			if (func_920((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1581((*uParam6)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (func_943((*uParam7)[iVar1]))
		{
			if (func_920((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1582((*uParam7)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (func_945((*uParam8)[iVar1]))
		{
			if (func_920((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1583((*uParam8)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (func_947((*uParam9)[iVar1]))
		{
			if (func_920((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1584((*uParam9)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (func_949((*uParam10)[iVar1]))
		{
			if (func_920((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1585((*uParam10)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (func_951((*uParam11)[iVar1]))
		{
			if (func_920((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1586((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_959(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_960(var uParam0)
{
	if (func_959(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_959(uParam0->f_2, 1))
	{
		func_938(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_923(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_961(int iParam0)
{
	if (!func_206(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

bool func_962(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = 5;
			*iParam2 = 8;
			break;
		case 14:
			*iParam1 = 9;
			*iParam2 = 17;
			break;
		case 16:
			*iParam1 = 9;
			*iParam2 = 18;
			break;
		case 33:
			*iParam1 = 17;
			*iParam2 = 18;
			break;
		case 29:
			*iParam1 = 9;
			*iParam2 = 17;
			break;
		case 30:
			*iParam1 = 6;
			*iParam2 = 18;
			break;
		case 20:
		case 26:
		case 37:
		case 40:
		case 54:
			*iParam1 = 22;
			*iParam2 = 5;
			break;
		case 11:
			*iParam1 = 12;
			*iParam2 = 18;
			break;
		default:
			return false;
	}
	return true;
}

bool func_963(var uParam0, int iParam1)
{
	switch (func_1587(uParam0))
	{
		case 0:
			if (!func_1588(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1589(uParam0, 1);
			break;
		case 1:
			func_1590(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_891(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1589(uParam0, 2);
			break;
		case 2:
			if (func_1591(uParam0))
			{
				func_1592(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1589(uParam0, 3);
			}
			break;
		case 3:
			if (func_970(&(uParam0->f_3)) >= 1f)
			{
				func_1589(uParam0, 4);
			}
			break;
		case 4:
			if (!func_29())
			{
				render_script_cams(false, false, 3000, true, false, 0);
				if (does_cam_exist(uParam0->f_2))
				{
					destroy_cam(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			func_1593(&iVar1, 0);
			release_script_audio_bank();
			func_1589(uParam0, 0);
			return true;
	}
	return false;
}

void func_964(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1594(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_965(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1595(cParam0, iVar0) };
	if (func_1597(&(cParam0->f_10792), Var1, func_1596(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1598(&(cParam0->f_10792), 524288))
		{
			func_397(cParam0, 67108864);
			func_1599(&(cParam0->f_10792), 524288);
		}
		func_1600(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_966(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_967(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1601(cParam0);
		func_1602(cParam0);
		return true;
	}
	if (func_1603(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_1000(cParam0);
	}
	if (func_29())
	{
		if (!func_8(cParam0, 262144))
		{
			stop_gameplay_hint(true);
			render_script_cams(false, false, 3000, true, false, 0);
			if (does_cam_exist(cParam0->f_609.f_2))
			{
				destroy_cam(cParam0->f_609.f_2, false);
			}
			func_51(&(cParam0->f_10792));
			func_1604(cParam0);
			func_966(cParam0, 524288);
			func_1357(cParam0);
			func_149(cParam0, 30f);
			func_150(cParam0, 40f);
			func_99(cParam0, 262144);
		}
		if (!func_8(cParam0, 524288) && _0xef324e9550a394d5(cParam0->f_7375.f_804))
		{
			func_99(cParam0, 524288);
		}
	}
	return false;
}

bool func_968(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1605(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1606(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1607(func_61(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_448(cParam0, func_33(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_955(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_969(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_969(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_2500 = 0;
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	bVar0 = _0x7907969497ea92f5(uParam0->f_2495);
	if (!bVar0)
	{
		if (!_0x4f9e3ed7617123ac(get_hash_key(sParam1)))
		{
			return true;
		}
		if (!bParam4)
		{
			uParam0->f_2495 = _0xca56dd6ab7a39f64(get_hash_key(sParam1));
		}
		else
		{
			uParam0->f_2495 = _0xd97d8d905f1562f2(get_hash_key(sParam1));
		}
	}
	uParam0->f_2501 = _0x603ac35fd4602c76(uParam0->f_2495);
	if (!uParam0->f_2501)
	{
		if (!bParam4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	func_1608(uParam0);
	uParam0->f_2495.f_2 = 0;
	uParam0->f_2508 = _datafile_get_num_nodes(&(uParam0->f_2495));
	uParam0->f_2495.f_2 = 12;
	uParam0->f_2510 = _datafile_get_num_nodes(&(uParam0->f_2495));
	uParam0->f_2501 = 1;
	uParam0->f_2509 = 0;
	uParam0->f_2511 = 0;
	if (bParam3)
	{
		return false;
	}
	return true;
}

float func_970(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_545(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_596() - uParam0->f_1);
}

bool func_971()
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			if (&Global_1934765->f_39[iVar0] != &Global_40.f_283[iVar0])
			{
				return true;
			}
		}
		else if (&Global_1934765->f_39[iVar0] != &Global_1058888->f_40567[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_972(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_973(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(bParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(bParam0, false, false), vParam1, bParam4);
}

void func_974()
{
	func_990(208);
}

void func_975()
{
	if (!func_195(iVar1758, 8388608))
	{
		_0x1b3c2d961f5fc0e1("script@Story@NBD1@ride_to_saint_denis");
		func_408(&uLocal_1760, 8388608);
	}
}

bool func_976()
{
	switch (iVar1653)
	{
		case 0:
			StringCopy(&Local_1657, "nbd1_hint_cams", 64);
			StringCopy(&(Local_1657.f_8), "NBD1_HOSEA_DISTRACTION_CAM_HINT", 64);
			Local_1657.f_16 = { 2629.6f, -1231.5f, 71f };
			iLocal_1655 = 1;
			break;
		case 1:
			if (!_0xdd0b7c5ae58f721d(&Local_1657))
			{
				_0x6a4d224fc7643941(&Local_1657);
				iLocal_1655 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_977(int iParam0, bool bParam1)
{
	if (!func_272(Local_14.f_1))
	{
		Local_14.f_1 = { func_444() };
	}
	if (func_1609(&(Local_14.f_1), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_3[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_3[0] = create_vehicle(1761016051, 1846.166f, -1824.991f, 43.8659f, 62.1856f, true, true, false, false);
		func_1610(Local_14.f_1, &(Local_14.f_3[0]));
		func_1611(&(Local_14.f_3[0]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_3[1] = create_vehicle(-283162583, 1843.268f, -1827.557f, 43.9328f, 71.5302f, true, true, false, false);
		func_1610(Local_14.f_1, &(Local_14.f_3[1]));
		func_1611(&(Local_14.f_3[1]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	func_1612(&(Local_14.f_1), 1);
	return true;
}

bool func_978(char[4] cParam0)
{
	if (!does_entity_exist(&(bLocal_2459[1])))
	{
		bLocal_2459[1] = func_1613(0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		set_ped_config_flag(&(bLocal_2459[1]), 367, true);
	}
	if (!does_entity_exist(&(bLocal_2459[2])))
	{
		bLocal_2459[2] = func_1613(6, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		set_ped_config_flag(&(bLocal_2459[2]), 367, true);
	}
	if (!does_entity_exist(&(bLocal_2459[0])))
	{
		bLocal_2459[0] = func_1613(1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		set_ped_config_flag(&(bLocal_2459[0]), 367, true);
	}
	if (!does_entity_exist(bVar2445))
	{
	}
	else
	{
		if (!func_510(cParam0, bVar2445))
		{
			func_1615(cParam0, bVar2445, 305658, 0, "HORSE_PLAYER", 3, 1023, 3, 40);
		}
		set_ped_config_flag(bVar2445, 367, true);
	}
	if (!does_entity_exist(&(bLocal_2459[1])))
	{
	}
	else
	{
		func_1616(cParam0, &(bLocal_2459[1]), &(iLocal_2449[0]));
	}
	if (!does_entity_exist(&(bLocal_2459[2])))
	{
	}
	else
	{
		func_1616(cParam0, &(bLocal_2459[2]), &(iLocal_2449[4]));
	}
	if (!does_entity_exist(&(bLocal_2459[0])))
	{
	}
	else
	{
		func_1616(cParam0, &(bLocal_2459[0]), &(iLocal_2449[1]));
	}
	if (((does_entity_exist(&(bLocal_2459[1])) && does_entity_exist(&(bLocal_2459[2]))) && does_entity_exist(&(bLocal_2459[0]))) && does_entity_exist(bVar2445))
	{
		return true;
	}
	return false;
}

bool func_979()
{
	return true;
}

bool func_980(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (func_33(cParam0) > iLocal_226)
		{
			func_408(&uLocal_1757, 4);
			func_1617();
		}
		_0x0751d461f06e41ce(player_id(), 35, 0, 1);
	}
	if (func_33(cParam0) > iLocal_226 && func_33(cParam0) < iLocal_228)
	{
		if (!func_1333(1, 0))
		{
			return false;
		}
	}
	if (func_33(cParam0) == iLocal_224)
	{
		if (!func_1334(0))
		{
			return false;
		}
	}
	else if (!func_1334(1))
	{
		return false;
	}
	if (!func_195(iVar1759, 8192))
	{
		if (func_33(cParam0) > iLocal_231)
		{
			if (_0xa0bc8faed8cfeb3c(&(iLocal_2449[0])))
			{
				_set_ped_body_component(&(iLocal_2449[0]), -1625272662);
				_update_ped_variation(&(iLocal_2449[0]), false, true, true, true, false);
				func_408(&uLocal_1762, 8192);
			}
			else
			{
				return false;
			}
		}
	}
	if (!func_195(iVar1759, 16384))
	{
		if (func_33(cParam0) > iLocal_231)
		{
			if (_0xa0bc8faed8cfeb3c(&(iLocal_2449[2])))
			{
				_set_ped_body_component(&(iLocal_2449[2]), -1625272662);
				_update_ped_variation(&(iLocal_2449[2]), false, true, true, true, false);
				func_408(&uLocal_1762, 16384);
			}
			else
			{
				return false;
			}
		}
	}
	if (!_does_anim_scene_exist(cParam0->f_7375.f_804) || (_does_anim_scene_exist(cParam0->f_7375.f_804) && !_is_anim_scene_started(cParam0->f_7375.f_804, false)))
	{
		if (func_33(cParam0) == iLocal_224)
		{
			func_871(Global_35, func_240(3, 15), 2, 1073741824);
		}
		func_871(&(iLocal_2449[0]), func_240(3, 7), 2, 1073741824);
		func_871(&(iLocal_2449[1]), func_240(3, 2), 2, 1073741824);
		func_871(&(iLocal_2449[2]), func_240(3, 10), 2, 1073741824);
		func_871(&(iLocal_2449[3]), func_240(3, 11), 2, 1073741824);
		func_871(&(iLocal_2449[4]), func_240(3, 5), 2, 1073741824);
		func_871(&(iLocal_2449[6]), func_240(3, 4), 2, 1073741824);
		func_871(&(iLocal_2449[8]), func_240(3, 9), 2, 1073741824);
	}
	if (func_33(cParam0) <= iLocal_226)
	{
		func_1618();
	}
	if (func_33(cParam0) > iLocal_231)
	{
		func_1454(cParam0, 1, 1);
		iLocal_2449[1] = 0;
	}
	if (func_33(cParam0) > iLocal_232)
	{
		func_1454(cParam0, 7, 9);
		iLocal_2449[7] = 0;
	}
	if (func_33(cParam0) > iLocal_228 && func_33(cParam0) < iLocal_233)
	{
		func_871(&(iLocal_2449[6]), func_240(6, 10), 2, 1073741824);
		func_1619(cParam0, 6);
	}
	else if (func_33(cParam0) >= iLocal_225 && func_33(cParam0) <= iLocal_228)
	{
		func_1620(cParam0);
	}
	else if (func_33(cParam0) >= iLocal_233)
	{
		func_1454(cParam0, 6, 5);
		iLocal_2449[6] = 0;
	}
	if (func_33(cParam0) >= iLocal_226)
	{
		func_1454(cParam0, 8, 13);
		iLocal_2449[8] = 0;
	}
	func_145(cParam0, Global_35, "ARTHUR", 0);
	func_145(cParam0, &(iLocal_2449[0]), "DUTCH", 0);
	func_145(cParam0, &(iLocal_2449[1]), "JOHN", 0);
	func_145(cParam0, &(iLocal_2449[4]), "MICAH_BELL", 0);
	func_145(cParam0, &(iLocal_2449[3]), "CHARLES_SMITH", 0);
	func_145(cParam0, &(iLocal_2449[5]), "JAVIER", 0);
	func_145(cParam0, &(iLocal_2449[6]), "HOSEA", 0);
	func_145(cParam0, &(iLocal_2449[2]), "BILL", 0);
	func_145(cParam0, &(iLocal_2449[7]), "LENNY", 0);
	func_145(cParam0, &(iLocal_2449[8]), "ABIGAIL", 0);
	func_1621(cParam0, &(iLocal_2449[0]), 0, 0);
	func_1621(cParam0, &(iLocal_2449[1]), 1, 0);
	func_1621(cParam0, &(iLocal_2449[4]), 6, 0);
	func_1621(cParam0, &(iLocal_2449[3]), 7, 0);
	func_1621(cParam0, &(iLocal_2449[5]), 2, 0);
	func_1621(cParam0, &(iLocal_2449[2]), 3, 0);
	func_1621(cParam0, &(iLocal_2449[7]), 9, 0);
	if (does_entity_exist(&(iLocal_2449[8])))
	{
		func_1621(cParam0, &(iLocal_2449[8]), 13, 0);
	}
	if (func_33(cParam0) < iLocal_228)
	{
		func_1621(cParam0, &(iLocal_2449[6]), 5, 0);
	}
	iLocal_1756 = 0;
	while (iVar1753 < 9)
	{
		if (does_entity_exist(&(iLocal_2449[iVar1753])))
		{
			if (!is_entity_dead(&(iLocal_2449[iVar1753])))
			{
				set_ped_can_ragdoll(&(iLocal_2449[iVar1753]), true);
				set_ped_can_ragdoll_from_player_impact(&(iLocal_2449[iVar1753]), false);
				set_entity_proofs(&(iLocal_2449[0]), 8, false);
				set_ped_accuracy(&(iLocal_2449[iVar1753]), 30);
				func_513(cParam0, &(iLocal_2449[iVar1753]), 256);
				set_ped_config_flag(&(iLocal_2449[iVar1753]), 168, false);
				set_ped_config_flag(&(iLocal_2449[iVar1753]), 66, true);
				set_ped_flee_attributes(&(iLocal_2449[iVar1753]), 512, true);
				set_ped_can_be_knocked_off_vehicle(&(iLocal_2449[iVar1753]), 1);
				add_entity_to_audio_mix_group(&(iLocal_2449[iVar1753]), "Default_Mission_Buddy_Group", 0f);
				set_blocking_of_non_temporary_events(&(iLocal_2449[iVar1753]), true);
			}
		}
		iLocal_1756 = iVar1753 + 1;
	}
	func_1622();
	if (func_33(cParam0) < iLocal_226)
	{
		bLocal_2448 = func_277(cParam0);
	}
	else
	{
		func_58(cParam0, 1);
	}
	if (does_entity_exist(bVar2445))
	{
		if (!is_entity_dead(bVar2445))
		{
			_0xd05ad61f242c626b(bVar2445, 0f);
			set_ped_config_flag(bVar2445, 219, true);
		}
	}
	if (does_entity_exist(bVar2445))
	{
		if (func_973(bVar2445, func_409(3, 14), 1) > 100f)
		{
			if (!is_entity_dead(bVar2445))
			{
				func_871(bVar2445, func_240(3, 14), 2, 1073741824);
			}
		}
	}
	if (does_entity_exist(bVar2445))
	{
		if (!is_entity_dead(bVar2445))
		{
			set_animal_tuning_bool_param(bVar2445, 48, true);
		}
	}
	if (!_does_anim_scene_exist(cParam0->f_7375.f_804) || (_does_anim_scene_exist(cParam0->f_7375.f_804) && !_is_anim_scene_started(cParam0->f_7375.f_804, false)))
	{
		if (does_entity_exist(&(bLocal_2459[1])))
		{
			func_871(&(bLocal_2459[1]), func_240(3, 8), 2, 1073741824);
		}
		if (does_entity_exist(&(bLocal_2459[2])))
		{
			func_871(&(bLocal_2459[2]), func_240(3, 6), 2, 1073741824);
		}
		if (does_entity_exist(&(bLocal_2459[0])))
		{
			func_871(&(bLocal_2459[0]), func_240(3, 3), 2, 1073741824);
		}
	}
	iLocal_1756 = 0;
	while (iVar1753 < 3)
	{
		if (does_entity_exist(&(bLocal_2459[iVar1753])))
		{
			if (!is_entity_dead(&(bLocal_2459[iVar1753])))
			{
				set_animal_tuning_bool_param(&(bLocal_2459[iVar1753]), 48, true);
				set_ped_config_flag(&(bLocal_2459[iVar1753]), 324, true);
				_0xd05ad61f242c626b(&(bLocal_2459[iVar1753]), 0f);
			}
		}
		iLocal_1756 = iVar1753 + 1;
	}
	return true;
}

void func_981()
{
	func_1623();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!Local_1006[iVar0]->f_5)
		{
			create_model_hide(*Local_1006[iVar0], Local_1006[iVar0]->f_3, Local_1006[iVar0]->f_4, false);
			Local_1006[iVar0]->f_5 = 1;
		}
		iVar0++;
	}
}

void func_982(char[4] cParam0)
{
	if (func_33(cParam0) > iLocal_226)
	{
		func_40(0);
	}
}

void func_983(char[4] cParam0)
{
	func_203(-1825294305, 1, 0);
	if (func_33(cParam0) > iLocal_229)
	{
		func_493(1);
	}
	else if (func_33(cParam0) == iLocal_228 || func_33(cParam0) == iLocal_229)
	{
		func_493(0);
	}
	func_1413(cParam0, 0);
}

void func_984(char[4] cParam0)
{
	set_random_trains(false);
	func_39(0);
	if (!is_entity_dead(iVar2441))
	{
		set_vehicle_can_be_targetted(iVar2441, false);
		set_vehicle_doors_locked(iVar2441, 3);
		_0xba8818212633500a(iVar2441, 0, 1);
		set_entity_can_be_damaged(iVar2441, false);
		_0xcbf88256e44d5d39(iVar2441, 0);
	}
	if (!is_entity_dead(iVar2442))
	{
		set_vehicle_can_be_targetted(iVar2442, false);
		set_vehicle_doors_locked(iVar2442, 3);
		_0xba8818212633500a(iVar2442, 0, 1);
		set_entity_can_be_damaged(iVar2442, false);
		_0xcbf88256e44d5d39(iVar2442, 0);
	}
	if (does_entity_exist(iVar2441) && !is_entity_dead(iVar2441))
	{
		iLocal_1756 = 0;
		while (iVar1753 < 6)
		{
			iLocal_2447 = _get_ped_in_draft_seat(iVar2441, iVar1753);
			if (does_entity_exist(bVar2444) && !is_entity_dead(bVar2444))
			{
				set_ped_relationship_group_hash(bVar2444, -1538724068);
				set_ped_can_be_targetted(bVar2444, false);
				_0xd05ad61f242c626b(bVar2444, 0f);
				set_ped_config_flag(bVar2444, 136, true);
			}
			iLocal_1756 = iVar1753 + 1;
		}
	}
	if (does_entity_exist(iVar2442) && !is_entity_dead(iVar2442))
	{
		iLocal_1756 = 0;
		while (iVar1753 < 6)
		{
			iLocal_2447 = _get_ped_in_draft_seat(iVar2442, iVar1753);
			if (does_entity_exist(bVar2444) && !is_entity_dead(bVar2444))
			{
				set_ped_relationship_group_hash(bVar2444, -1538724068);
				set_ped_can_be_targetted(bVar2444, false);
				_0xd05ad61f242c626b(bVar2444, 0f);
				set_ped_config_flag(bVar2444, 136, true);
			}
			iLocal_1756 = iVar1753 + 1;
		}
	}
}

void func_985(char[4] cParam0)
{
	func_1624();
	if (func_33(cParam0) <= iLocal_227)
	{
		func_488();
	}
	else
	{
		func_1368(iVar1928, 2, 0);
		func_1368(iVar1929, 2, 0);
		func_1417();
	}
	if (func_33(cParam0) <= iLocal_227)
	{
		func_1386();
		func_1389();
	}
	else
	{
		func_1625();
		func_490();
	}
}

void func_986()
{
	Local_236[0]->f_1 = iLocal_225;
	Local_236[0]->f_2 = iLocal_226;
	Local_236[0]->f_7 = { 2614.91f, -1306.5f, 52.75888f };
	Local_236[0]->f_10 = { 0f, 0f, 26.50025f };
	Local_236[0]->f_13 = { 5.807298f, 13.91707f, 3.877371f };
	Local_236[1]->f_1 = 19;
	Local_236[1]->f_2 = 19;
	Local_236[1]->f_7 = { 2614.126f, -1296.545f, 51.96528f };
	Local_236[1]->f_10 = { 0f, 0f, 50.58749f };
	Local_236[1]->f_13 = { 10.63382f, 2.659227f, 2.491096f };
	Local_236[2]->f_1 = iLocal_225;
	Local_236[2]->f_2 = iLocal_226;
	Local_236[2]->f_7 = { 2641.766f, -1284.431f, 53.1768f };
	Local_236[2]->f_10 = { 0f, 0f, 24.00005f };
	Local_236[2]->f_13 = { 19.40619f, 10.55643f, 4.562824f };
	Local_236[3]->f_1 = iLocal_225;
	Local_236[3]->f_2 = iLocal_226;
	Local_236[3]->f_7 = { 2640.75f, -1285.414f, 52.98235f };
	Local_236[3]->f_10 = { 0f, 0f, 24.48226f };
	Local_236[3]->f_13 = { 3.891382f, 2.062853f, 3.501223f };
	Local_236[4]->f_1 = iLocal_225;
	Local_236[4]->f_2 = iLocal_228;
	Local_236[4]->f_7 = { 2647.905f, -1300.297f, 52.24838f };
	Local_236[4]->f_10 = { 0f, 0f, 24.68985f };
	Local_236[4]->f_13 = { 2.710626f, 1.209034f, 3.379746f };
	Local_236[5]->f_1 = -1;
	Local_236[5]->f_2 = -1;
	Local_236[5]->f_7 = { 2643.41f, -1301.244f, 51.83086f };
	Local_236[5]->f_10 = { 0f, 0f, 13.44586f };
	Local_236[5]->f_13 = { 6.553801f, 4.657171f, 2.684789f };
	Local_236[6]->f_1 = 4;
	Local_236[6]->f_2 = 7;
	Local_236[6]->f_7 = { 2646.967f, -1283.902f, 52.23088f };
	Local_236[6]->f_10 = { 0f, 0f, 25.54778f };
	Local_236[6]->f_13 = { 1f, 1.421782f, 2.063541f };
	Local_236[7]->f_1 = -1;
	Local_236[7]->f_2 = -1;
	Local_236[7]->f_7 = { 2645.048f, -1298.496f, 52.08376f };
	Local_236[7]->f_10 = { 0f, 0f, -20.40505f };
	Local_236[7]->f_13 = { 1.212201f, 1f, 2.122804f };
	Local_236[8]->f_1 = -1;
	Local_236[8]->f_2 = -1;
	Local_236[8]->f_7 = { 2790.737f, -1390.474f, 45.91803f };
	Local_236[8]->f_10 = { 0f, 0f, -39.75359f };
	Local_236[8]->f_13 = { 4.346236f, 2.814354f, 2.993529f };
	Local_236[9]->f_1 = 10;
	Local_236[9]->f_2 = 11;
	Local_236[9]->f_7 = { 2788.834f, -1393.996f, 50.10405f };
	Local_236[9]->f_10 = { 0f, 0f, -40.95298f };
	Local_236[9]->f_13 = { 5.182481f, 6.889534f, 2.67817f };
	Local_236[10]->f_1 = 10;
	Local_236[10]->f_2 = 25;
	Local_236[10]->f_7 = { 2778.702f, -1403.787f, 46.2269f };
	Local_236[10]->f_10 = { 0f, 0f, -36.50194f };
	Local_236[10]->f_13 = { 1f, 4.10768f, 3.057752f };
	Local_236[11]->f_1 = 10;
	Local_236[11]->f_2 = 25;
	Local_236[11]->f_7 = { 2781.057f, -1405.529f, 46.2269f };
	Local_236[11]->f_10 = { 0f, 0f, -36.50194f };
	Local_236[11]->f_13 = { 1f, 4.10768f, 3.057752f };
	Local_236[12]->f_1 = 7;
	Local_236[12]->f_2 = 8;
	Local_236[12]->f_7 = { 2657.58f, -1285.667f, 64.07299f };
	Local_236[12]->f_10 = { 0f, 0f, 25.99969f };
	Local_236[12]->f_13 = { 8.022783f, 9.419696f, 4.152401f };
	Local_236[13]->f_1 = iLocal_233;
	Local_236[13]->f_2 = iLocal_234;
	Local_236[13]->f_7 = { 2704.076f, -1277.983f, 62.51225f };
	Local_236[13]->f_10 = { 0f, 0f, 113.6833f };
	Local_236[13]->f_13 = { 3.98882f, 6.555666f, 8.536359f };
	Local_236[14]->f_1 = iLocal_233;
	Local_236[14]->f_2 = iLocal_234;
	Local_236[14]->f_7 = { 2722.906f, -1301.284f, 61.62178f };
	Local_236[14]->f_10 = { 0f, 0f, 24.41674f };
	Local_236[14]->f_13 = { 13.65874f, 35.96524f, 14.57631f };
	Local_236[15]->f_1 = iLocal_232;
	Local_236[15]->f_2 = iLocal_233;
	Local_236[15]->f_7 = { 2693.82f, -1279.015f, 64.61496f };
	Local_236[15]->f_10 = { 0f, 0f, 26.72434f };
	Local_236[15]->f_13 = { 6.484675f, 5.978074f, 5.534398f };
	Local_236[18]->f_1 = iLocal_230;
	Local_236[18]->f_2 = iLocal_233;
	Local_236[18]->f_7 = { 2646.434f, -1294.618f, 68.98463f };
	Local_236[18]->f_10 = { 0f, 0f, 24.59898f };
	Local_236[18]->f_13 = { 17.51911f, 28.2709f, 16.23123f };
	Local_236[16]->f_1 = iLocal_232;
	Local_236[16]->f_2 = iLocal_233;
	Local_236[16]->f_7 = { 2676.724f, -1292.024f, 65.01189f };
	Local_236[16]->f_10 = { 0f, 0f, 27.05761f };
	Local_236[16]->f_13 = { 15.86963f, 6.519643f, 5.345239f };
	Local_236[17]->f_1 = iLocal_232;
	Local_236[17]->f_2 = iLocal_233;
	Local_236[17]->f_7 = { 2670.302f, -1278.187f, 65.01189f };
	Local_236[17]->f_10 = { 0f, 0f, 27.05761f };
	Local_236[17]->f_13 = { 10.63686f, 15.2779f, 5.345239f };
	Local_236[19]->f_1 = iLocal_230;
	Local_236[19]->f_2 = iLocal_233;
	Local_236[19]->f_7 = { 2680.739f, -1279.707f, 64.6847f };
	Local_236[19]->f_10 = { 0f, 0f, 26.03282f };
	Local_236[19]->f_13 = { 9.805952f, 20.89665f, 10.35454f };
	Local_236[20]->f_1 = iLocal_233;
	Local_236[20]->f_2 = iLocal_234;
	Local_236[20]->f_7 = { 2753.795f, -1333.444f, 56.8709f };
	Local_236[20]->f_10 = { 0f, 0f, -31.42833f };
	Local_236[20]->f_13 = { 2.941317f, 3.062479f, 4.455594f };
	Local_236[20]->f_6 = 1;
	Local_236[21]->f_1 = iLocal_234;
	Local_236[21]->f_2 = 25;
	Local_236[21]->f_7 = { 2771.437f, -1428.347f, 45.96933f };
	Local_236[21]->f_10 = { 0f, 0f, -41.50822f };
	Local_236[21]->f_13 = { 1.250708f, 1.254778f, 2.829832f };
	Local_236[21]->f_6 = 1;
}

void func_987()
{
	func_1626();
}

void func_988(char[4] cParam0)
{
	func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_2449[0]), 0, 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_2449[1]), 0, 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_2449[2]), 0, 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_2449[3]), 0, 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_2449[4]), 0, 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_2449[6]), 0, 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_2449[8]), 0, 0, 0, 0, 0);
	func_151(cParam0, &(bLocal_2459[0]), "Horse_01", 0, 0, 0, 0);
	func_151(cParam0, &(bLocal_2459[2]), "Horse_01^1", 0, 0, 0, 0);
	func_151(cParam0, &(bLocal_2459[1]), "Horse_01^3", 0, 0, 0, 0);
	func_151(cParam0, iVar2445, "Horse_01^4", 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_2449[7]), 0, 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_2449[5]), 0, 0, 0, 0, 0);
}

void func_989(char[4] cParam0)
{
	StringCopy(&cVar0, "LAW_UI_DEAD_OR_ALIVE", 24);
	iVar3 = func_33(cParam0);
	switch (iVar3)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			func_1627(6);
			func_1628(cVar0);
			break;
		case 9:
		case 10:
		case 11:
			func_1627(7);
			func_1628(cVar0);
			break;
	}
}

int func_990(int iParam0)
{
	if (!func_501(iParam0))
	{
		return 0;
	}
	if (!func_504(func_503(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_505(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_505(iParam0))))
		{
			return 1;
		}
	}
	bVar0 = _0x31c70a716cae1fee(func_505(iParam0));
	if (does_entity_exist(bVar0))
	{
		if (!_0x88ad6cc10d8d35b2(bVar0))
		{
			set_entity_as_mission_entity(bVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_505(iParam0));
	return 1;
}

void func_991()
{
	func_1629(128);
}

void func_992(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_192))
	{
		Local_14.f_192 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_193[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_193[0] = create_object(-443425498, 2609.789f, -1297.012f, 51.2628f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_193[0]), 0f, 0f, 116.6723f, 2, true);
		freeze_entity_position(&(Local_14.f_193[0]), bParam1);
	}
	func_1611(&(Local_14.f_193[0]), Local_14);
	func_1611(&(Local_14.f_193[0]), Local_14.f_192);
	if (!does_entity_exist(&(Local_14.f_193[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_193[1] = create_object(-443425498, 2609.04f, -1295.43f, 51.2607f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_193[1]), 0f, 0f, 112.6726f, 2, true);
		freeze_entity_position(&(Local_14.f_193[1]), bParam1);
	}
	func_1611(&(Local_14.f_193[1]), Local_14);
	func_1611(&(Local_14.f_193[1]), Local_14.f_192);
}

int func_993(char[4] cParam0)
{
	func_1630();
	switch (func_33(cParam0))
	{
		case 0:
			iVar0 = get_clock_hours();
			if (iVar0 > 20 || iVar0 < 8)
			{
				set_anim_scene_bool(cParam0->f_7375.f_804, "Bool_Timelapse_ifNight", true, false);
			}
			else
			{
				set_anim_scene_bool(cParam0->f_7375.f_804, "Bool_Timelapse_ifNight", false, false);
			}
			if (does_entity_exist(iVar2552))
			{
				func_1631(cParam0, iVar2552, "P_MAP03X", 1);
			}
			break;
		case 2:
			break;
		case 4:
			func_1632(cParam0, 32);
			func_1633(cParam0, 1024);
			if (does_entity_exist(&(iLocal_2449[3])))
			{
				set_entity_visible(&(iLocal_2449[3]), false);
			}
			if (does_entity_exist(&(iLocal_2449[5])))
			{
				set_entity_visible(&(iLocal_2449[5]), false);
			}
			remove_all_ped_weapons(&(iLocal_2449[6]), true, true);
			set_current_ped_weapon(&(Local_14.f_22[1]), -183018591, true, 0, false, false);
			set_current_ped_weapon(&(Local_14.f_22[2]), -183018591, true, 0, false, false);
			func_1634(cParam0, &(iLocal_2449[6]));
			break;
		case 8:
			func_404(&(iLocal_2449[7]));
			func_1633(cParam0, 1024);
			func_1635(cParam0, &(iLocal_2449[4]), -183018591, "w_repeater_carbine01");
			func_1636(&(iLocal_2449[0]));
			func_1636(&(iLocal_2449[7]));
			break;
		case 10:
			func_1633(cParam0, 16384);
			func_1635(cParam0, &(iLocal_2449[2]), -665597951, "w_rifle_boltaction01");
			func_1635(cParam0, &(iLocal_2449[4]), -183018591, "w_repeater_carbine01^1");
			func_1636(Global_35);
			func_1636(&(iLocal_2449[0]));
			break;
		case 25:
			func_404(Global_35);
			func_1633(cParam0, 16384);
			break;
	}
	return 1;
}

void func_994(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

int func_995(char[4] cParam0)
{
	set_ped_reset_flag(bVar2445, 154, true);
	switch (func_33(cParam0))
	{
		case 0:
			func_1637();
			if (_does_anim_scene_exist(cParam0->f_7375.f_804))
			{
				if (_is_anim_scene_started(cParam0->f_7375.f_804, false))
				{
					if (!does_entity_exist(bVar2441))
					{
						iLocal_2444 = _get_anim_scene_vehicle(cParam0->f_7375.f_804, "COACH2", true);
					}
					if (!does_entity_exist(bVar2442))
					{
						iLocal_2445 = _get_anim_scene_vehicle(cParam0->f_7375.f_804, "WAGON02X", true);
					}
				}
			}
			if (!func_195(iVar1757, 16))
			{
				if (has_anim_event_fired(Global_35, -372912327))
				{
					if (func_1637())
					{
						if (func_1638(1))
						{
							remove_all_ped_weapons(&(iLocal_2449[6]), true, false);
							func_408(&uLocal_1760, 16);
						}
					}
				}
			}
			if (!func_195(iVar1765, 4194304))
			{
				if (func_1639(cParam0, bVar2441, 0, 0, 1, 0))
				{
					if (_does_anim_scene_exist(cParam0->f_7375.f_804))
					{
						remove_anim_scene_entity(cParam0->f_7375.f_804, "COACH2", bVar2441);
						remove_anim_scene_entity(cParam0->f_7375.f_804, "HoseaMatthews", &(iLocal_2449[6]));
						remove_anim_scene_entity(cParam0->f_7375.f_804, "AbigailRoberts", &(iLocal_2449[8]));
					}
					_set_entity_coords_and_heading(bVar2441, func_409(3, 30), func_410(3, 30), true, true, true);
					set_vehicle_on_ground_properly(bVar2441, 1.401298E-45f);
					set_vehicle_forward_speed(bVar2441, 14f);
					_0x104d9a7b1c0d0783(bVar2441, 14f);
					func_1640(bVar2441);
					func_1641(bVar2441, 2f);
					func_408(&iLocal_1768, 4194304);
				}
			}
			if (!func_195(iVar1765, 128))
			{
				if (func_1642(cParam0, &(iLocal_2449[6]), 0, 0, 1, 1))
				{
					func_1643(iLocal_2449[6], &iLocal_2444, -1, 1);
					func_408(&iLocal_1768, 128);
					func_1644(&(iLocal_2449[6]), bVar2441, 20f, 524419);
					_0x2208438012482a1a(&(iLocal_2449[6]), true, true);
					func_408(&uLocal_1759, 64);
				}
			}
			if (!func_195(iVar1765, 8388608))
			{
				if (func_1639(cParam0, bVar2442, 0, 0, 1, 0))
				{
					if (_does_anim_scene_exist(cParam0->f_7375.f_804))
					{
						remove_anim_scene_entity(cParam0->f_7375.f_804, "wagon02x", bVar2442);
						remove_anim_scene_entity(cParam0->f_7375.f_804, "BillWilliamson", &(iLocal_2449[2]));
						remove_anim_scene_entity(cParam0->f_7375.f_804, "CharlesSmith", &(iLocal_2449[3]));
					}
					_set_entity_coords_and_heading(bVar2442, func_409(3, 31), func_410(3, 31), true, true, true);
					set_vehicle_on_ground_properly(bVar2442, 0f);
					set_vehicle_forward_speed(bVar2442, 14f);
					_0x104d9a7b1c0d0783(bVar2442, 14f);
					set_drive_task_cruise_speed(&(iLocal_2449[2]), 20f);
					iVar1 = 69734915;
					task_vehicle_escort(&(iLocal_2449[2]), bVar2442, bVar2441, 3, 14f, iVar1, 10f, 20, 20f);
					func_1352(&uLocal_2443);
					set_ped_as_group_leader(&(iLocal_2449[2]), iVar2440, false);
					add_custom_formation_location(iVar2440, 0f, -10f, 0f, 0);
					_0x154b7e841ac7412f(iVar2440, 1);
					set_ped_config_flag(&(iLocal_2449[2]), 279, true);
					func_1640(bVar2442);
					func_1641(bVar2442, 2f);
					func_408(&uLocal_1759, 4);
					func_408(&iLocal_1768, 8388608);
				}
			}
			if (!func_195(iVar1765, 8) && func_195(iVar1765, 128))
			{
				if (func_1642(cParam0, &(iLocal_2449[2]), 0, 0, 1, 1))
				{
					func_1643(iLocal_2449[2], &iLocal_2445, -1, 1);
					_0x2208438012482a1a(&(iLocal_2449[2]), true, true);
					func_408(&iLocal_1768, 8);
				}
			}
			if (!func_195(iVar1765, 1))
			{
				if (func_1642(cParam0, Global_35, 0, 0, 1, 1))
				{
					if (_does_anim_scene_exist(cParam0->f_7375.f_804))
					{
						remove_anim_scene_entity(cParam0->f_7375.f_804, "ARTHUR", Global_35);
						remove_anim_scene_entity(cParam0->f_7375.f_804, "Horse_01^4", bVar2445);
					}
					clear_ped_tasks_immediately(Global_35, false, true);
					func_871(Global_35, func_240(3, 14), 6, 1073741824);
					if (!is_ped_on_mount(Global_35))
					{
						_set_ped_on_mount(Global_35, bVar2445, -1, true);
					}
					_0x9587913b9e772d29(bVar2445, 0);
					if (!is_ped_in_vehicle(&(iLocal_2449[7]), bVar2441, false))
					{
						set_ped_into_vehicle(&(iLocal_2449[7]), bVar2441, 1);
					}
					if (!is_ped_in_vehicle(&(iLocal_2449[5]), bVar2441, false))
					{
						set_ped_into_vehicle(&(iLocal_2449[5]), bVar2441, 2);
					}
					set_ped_config_flag(bVar2445, 295, true);
					force_ped_motion_state(bVar2445, -1115154469, false, 0, false);
					simulate_player_input_gait(player_id(), 3f, 3000, 0f, true, false);
					_0x2208438012482a1a(Global_35, true, true);
					set_gameplay_cam_relative_heading(0f, 1f);
					func_408(&iLocal_1768, 1);
				}
			}
			if (!func_195(iVar1765, 1048576))
			{
				if (_does_anim_scene_exist(cParam0->f_7375.f_804))
				{
					if (_0xb89fcff19dafff28(cParam0->f_7375.f_804, "Horse_01^4"))
					{
						func_408(&iLocal_1768, 1048576);
					}
				}
			}
			if (func_195(iVar1765, 8) && !func_195(iVar1765, 2))
			{
				if (func_1642(cParam0, &(iLocal_2449[0]), 0, 0, 1, 1))
				{
					if (_does_anim_scene_exist(cParam0->f_7375.f_804))
					{
						remove_anim_scene_entity(cParam0->f_7375.f_804, "dutch", &(iLocal_2449[0]));
						remove_anim_scene_entity(cParam0->f_7375.f_804, "Horse_01^3", &(bLocal_2459[1]));
					}
					func_871(&(iLocal_2449[0]), func_240(3, 32), 6, 1073741824);
					if (!is_ped_on_mount(&(iLocal_2449[0])))
					{
						_set_ped_on_mount(&(iLocal_2449[0]), &(bLocal_2459[1]), -1, true);
					}
					set_ped_as_group_member(&(iLocal_2449[0]), iVar2440);
					set_ped_config_flag(&(iLocal_2449[0]), 279, true);
					set_ped_config_flag(&(bLocal_2459[1]), 295, true);
					if (is_ped_in_group(&(iLocal_2449[0])))
					{
						_0x0e9e95fdedcc9d35(&(iLocal_2449[0]), 1, 0);
						func_1645();
						set_ped_config_flag(&(iLocal_2449[0]), 167, true);
						func_1354(&(iLocal_2449[0]), iVar2439, 0, -1, 1, 0);
						func_408(&uLocal_1759, 8);
					}
					func_1329();
					force_ped_motion_state(&(bLocal_2459[1]), -1115154469, false, 0, false);
					func_408(&iLocal_1768, 2);
				}
			}
			if (!func_195(iVar1765, 32) && func_195(iVar1765, 2))
			{
				if (func_1642(cParam0, &(iLocal_2449[4]), 0, 0, 1, 1))
				{
					if (_does_anim_scene_exist(cParam0->f_7375.f_804))
					{
						remove_anim_scene_entity(cParam0->f_7375.f_804, "MicahBell", &(iLocal_2449[4]));
						remove_anim_scene_entity(cParam0->f_7375.f_804, "Horse_01^1", &(bLocal_2459[2]));
					}
					func_871(&(iLocal_2449[4]), func_240(3, 34), 6, 1073741824);
					if (!is_ped_on_mount(&(iLocal_2449[4])))
					{
						_set_ped_on_mount(&(iLocal_2449[4]), &(bLocal_2459[2]), -1, true);
					}
					func_1354(&(iLocal_2449[4]), iVar2439, 6, 2, 0, 0);
					set_ped_config_flag(&(iLocal_2449[4]), 167, true);
					set_ped_config_flag(&(bLocal_2459[2]), 295, true);
					func_408(&uLocal_1759, 16);
					force_ped_motion_state(&(bLocal_2459[2]), -1115154469, false, 0, false);
					func_408(&iLocal_1768, 32);
				}
			}
			if (!func_195(iVar1765, 4) && func_195(iVar1765, 32))
			{
				if (func_1642(cParam0, &(iLocal_2449[1]), 0, 0, 1, 1))
				{
					if (_does_anim_scene_exist(cParam0->f_7375.f_804))
					{
						remove_anim_scene_entity(cParam0->f_7375.f_804, "JohnMarston", &(iLocal_2449[1]));
						remove_anim_scene_entity(cParam0->f_7375.f_804, "Horse_01", &(bLocal_2459[0]));
					}
					func_871(&(iLocal_2449[1]), func_240(3, 33), 6, 1073741824);
					if (!is_ped_on_mount(&(iLocal_2449[1])))
					{
						_set_ped_on_mount(&(iLocal_2449[1]), &(bLocal_2459[0]), -1, true);
					}
					func_1354(&(iLocal_2449[1]), iVar2439, 1, 1, 0, 0);
					set_ped_config_flag(&(iLocal_2449[1]), 167, true);
					set_ped_config_flag(&(bLocal_2459[0]), 295, true);
					force_ped_motion_state(&(bLocal_2459[0]), -1115154469, false, 0, false);
					func_408(&uLocal_1759, 32);
					func_408(&iLocal_1768, 4);
				}
			}
			if (!func_195(iVar1765, 512))
			{
				if (func_1642(cParam0, &(iLocal_2449[8]), 0, 0, 1, 1))
				{
					func_1643(iLocal_2449[8], &iLocal_2444, 0, 1);
					_0x2208438012482a1a(&(iLocal_2449[8]), true, true);
					func_408(&iLocal_1768, 512);
				}
			}
			if (!func_195(iVar1765, 16))
			{
				if (func_1642(cParam0, &(iLocal_2449[3]), 0, 0, 1, 1))
				{
					func_1643(iLocal_2449[3], &iLocal_2445, 0, 1);
					_0x2208438012482a1a(&(iLocal_2449[3]), true, true);
					func_408(&iLocal_1768, 16);
				}
			}
			if (!func_195(iVar1765, 524288))
			{
				if (func_1639(cParam0, bVar2551, "p_cs_bedRollClsd01x", 0, 1, 1))
				{
					func_1646(&(bLocal_2459[1]), -1613128323);
					_update_ped_variation(&(bLocal_2459[1]), false, true, true, true, false);
					func_408(&iLocal_1768, 524288);
				}
			}
			if (!func_195(iVar1765, 1024))
			{
				if (func_1647(cParam0))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
					func_408(&iLocal_1768, 1024);
				}
			}
			break;
		case 4:
			if (!func_1384())
			{
				_0x140b3cb1d424a945(Global_35, 379542007);
			}
			else
			{
				_0x72d4cb5db927009c(_0x9f67929d98e7c6e8(Global_35, -1101297303, 0, 1), -1, 0);
			}
			_0x140b3cb1d424a945(&(iLocal_2449[0]), -95736505);
			if (!func_1384())
			{
				_0x72d4cb5db927009c(379542007, -1, 0);
			}
			else
			{
				_0x72d4cb5db927009c(_0x9f67929d98e7c6e8(Global_35, -1101297303, 0, 1), -1, 0);
			}
			_0x72d4cb5db927009c(-183018591, -1, 0);
			set_entity_visible(&(iLocal_2449[5]), true);
			if ((_does_anim_scene_exist(cParam0->f_7375.f_804) && _is_anim_scene_started(cParam0->f_7375.f_804, false)) && _get_anim_scene_progress(cParam0->f_7375.f_804) > 0.9f)
			{
				func_1648(cParam0);
			}
			func_1649(cParam0);
			func_1650(cParam0);
			func_1651(cParam0);
			func_1652(cParam0);
			if (!func_195(iVar1765, 1024))
			{
				if (func_1647(cParam0) || func_1653(cParam0))
				{
					if (does_entity_exist(&(iLocal_2449[3])))
					{
						set_entity_visible(&(iLocal_2449[3]), true);
					}
					if (does_entity_exist(&(iLocal_2449[5])))
					{
						set_entity_visible(&(iLocal_2449[5]), true);
					}
					if (does_entity_exist(&(iLocal_2449[2])))
					{
						set_entity_visible(&(iLocal_2449[2]), true);
					}
					func_408(&iLocal_1768, 1024);
				}
			}
			if (!func_195(iVar1765, 1))
			{
				if (func_1642(cParam0, Global_35, 0, 0, 1, !func_1654()))
				{
					if (!func_1384())
					{
						func_1383(Global_35, 379542007, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
						func_335(379542007, 200, 1, 0, 0, 752097756, 0, 0, 0, 0);
					}
					func_1634(cParam0, &(iLocal_2449[6]));
					if (!func_1384())
					{
						set_current_ped_weapon(Global_35, 379542007, true, 0, false, false);
					}
					else
					{
						iVar2 = func_901(0, 0);
						set_current_ped_weapon(Global_35, iVar2, true, 0, true, false);
					}
					task_put_ped_directly_into_cover(Global_35, func_409(6, 6), -1, 1, 0, 1, 0, &(iLocal_2182[7]), 0, 0, 0);
					func_1655(get_entity_coords(&(Local_14.f_22[1]), true, false), 0);
					_0x2208438012482a1a(Global_35, true, false);
					func_408(&iLocal_1768, 1);
				}
			}
			if (!func_195(iVar1759, 4))
			{
				if (has_anim_event_fired(Global_35, 161162092))
				{
					func_1656(0);
					func_408(&uLocal_1762, 4);
				}
			}
			if (!func_195(iVar1757, 67108864))
			{
				if (has_anim_event_fired(&(iLocal_2449[0]), -388188829) || func_195(iVar1765, 2))
				{
					if (func_1657(cParam0, "NBD1_POSTHOS_D", 1, 0, 0))
					{
						func_408(&uLocal_1760, 67108864);
					}
				}
			}
			if (!func_195(iVar1765, 2))
			{
				if (func_1642(cParam0, &(iLocal_2449[0]), 0, 0, 1, 1))
				{
					open_sequence_task(&uLocal_2525);
					task_put_ped_directly_into_cover(false, func_409(6, 3), -1, 0, 0, 1, 1, &(iLocal_2182[0]), 0, 1, 0);
					task_combat_hated_targets_in_area(0, get_entity_coords(&(iLocal_2449[0]), true, false), 200f, 0, 2);
					close_sequence_task(iVar2522);
					task_perform_sequence(&(iLocal_2449[0]), iVar2522);
					clear_sequence_task(&uLocal_2525);
					_0x2208438012482a1a(&(iLocal_2449[0]), true, false);
					func_408(&iLocal_1768, 2);
				}
			}
			if (!func_195(iVar1765, 32))
			{
				if (func_1642(cParam0, &(iLocal_2449[4]), 0, 0, 1, 1))
				{
					func_871(&(iLocal_2449[4]), func_240(6, 4), 2, 1073741824);
					set_current_ped_weapon(&(iLocal_2449[4]), 379542007, true, 0, false, false);
					task_combat_hated_targets(&(iLocal_2449[4]), -1f);
					func_408(&iLocal_1768, 32);
				}
			}
			if (!func_195(iVar1765, 128))
			{
				if (func_1642(cParam0, &(iLocal_2449[6]), 0, 0, 1, 1))
				{
					func_1634(cParam0, &(iLocal_2449[6]));
					func_408(&iLocal_1768, 128);
				}
			}
			if (!func_195(iVar1755, 1024))
			{
				if (func_1642(cParam0, &(Local_14.f_22[5]), "S_M_M_PinLaw_01^2", 0, 1, 1))
				{
					set_ped_combat_movement(&(Local_14.f_22[5]), 1);
					task_combat_hated_targets(&(Local_14.f_22[5]), -1f);
					func_408(&uLocal_1758, 1024);
				}
			}
			if (!func_195(iVar1755, 256))
			{
				if (func_1642(cParam0, &(Local_14.f_22[1]), "S_M_M_PINLAW_01", 0, 1, 1))
				{
					set_ped_combat_attributes(&(Local_14.f_22[1]), 30, true);
					set_ped_combat_attributes(&(Local_14.f_22[1]), 111, true);
					set_current_ped_weapon(&(Local_14.f_22[1]), -183018591, true, 0, false, false);
					open_sequence_task(&iVar0);
					task_aim_gun_at_entity(0, Global_35, 5000, 1, 1);
					task_combat_hated_targets(0, -1f);
					close_sequence_task(iVar0);
					task_perform_sequence(&(Local_14.f_22[1]), iVar0);
					clear_sequence_task(&iVar0);
					set_ped_sphere_defensive_area(&(Local_14.f_22[1]), func_409(6, 16), 0.75f, 0, 0, 0);
					set_ped_combat_attributes(&(Local_14.f_22[1]), 0, true);
					set_ped_combat_attributes(&(Local_14.f_22[1]), 35, true);
					set_combat_float(&(Local_14.f_22[1]), 3, 0.5f);
					set_ped_combat_attributes(&(Local_14.f_22[1]), 12, false);
					force_ped_motion_state(&(Local_14.f_22[1]), 1063765679, false, 1, true);
					func_408(&uLocal_1758, 256);
				}
			}
			if (!func_195(iVar1755, 512))
			{
				if (func_1642(cParam0, &(Local_14.f_22[2]), "S_M_M_PinLaw_01^1", 0, 1, 1))
				{
					set_ped_combat_attributes(&(Local_14.f_22[2]), 30, true);
					set_ped_combat_attributes(&(Local_14.f_22[2]), 111, true);
					set_current_ped_weapon(&(Local_14.f_22[2]), -183018591, true, 0, false, false);
					set_ammo_in_clip(&(Local_14.f_22[2]), -183018591, 1);
					open_sequence_task(&iVar0);
					task_aim_gun_at_entity(0, Global_35, 3000, 1, 1);
					task_combat_hated_targets(0, -1f);
					close_sequence_task(iVar0);
					task_perform_sequence(&(Local_14.f_22[2]), iVar0);
					clear_sequence_task(&iVar0);
					set_ped_sphere_defensive_area(&(Local_14.f_22[2]), func_409(6, 23), 1f, 0, 0, 0);
					set_ped_combat_attributes(&(Local_14.f_22[2]), 0, true);
					set_ped_combat_attributes(&(Local_14.f_22[2]), 35, true);
					set_combat_float(&(Local_14.f_22[2]), 3, 0.5f);
					set_ped_combat_attributes(&(Local_14.f_22[2]), 12, false);
					force_ped_motion_state(&(Local_14.f_22[2]), 1063765679, false, 1, true);
					func_408(&uLocal_1758, 512);
				}
			}
			if (!func_195(iVar1765, 1024))
			{
				if (func_1647(cParam0) || func_1653(cParam0))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					func_408(&iLocal_1768, 1024);
				}
			}
			break;
		case 8:
			func_1658();
			func_1659(cParam0);
			func_1458(cParam0);
			if (!func_195(iVar1756, 131072))
			{
				task_clear_look_at(Global_35);
				func_408(&uLocal_1759, 131072);
			}
			if (!func_195(iVar1765, 1))
			{
				if (func_1642(cParam0, Global_35, 0, 0, 1, 1) || func_1653(cParam0))
				{
					set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
					set_current_ped_weapon(Global_35, 379542007, false, 0, false, false);
					_hide_ped_weapons(Global_35, 1, true);
					func_1660(-1415276238, 1500, 0, 1, 1, 0, 0, 0);
					func_408(&iLocal_1768, 1);
				}
			}
			if (!func_195(iVar1765, 256))
			{
				if (func_1642(cParam0, &(iLocal_2449[7]), 0, 0, 1, 1) || func_1653(cParam0))
				{
					force_ped_motion_state(&(iLocal_2449[7]), -530524, false, 0, false);
					if (func_1458(cParam0))
					{
						func_1661();
						func_408(&iLocal_1768, 256);
					}
				}
			}
			if (!func_195(iVar1765, 2))
			{
				if (func_1642(cParam0, &(iLocal_2449[0]), 0, 0, 1, 1) || func_1653(cParam0))
				{
					if (func_1366())
					{
						func_408(&iLocal_1768, 2);
					}
				}
			}
			if (!func_195(iVar1765, 32))
			{
				if (func_1642(cParam0, &(iLocal_2449[4]), 0, 0, 1, 1) || func_1653(cParam0))
				{
					func_408(&iLocal_1768, 32);
				}
			}
			if (!func_195(iVar1765, 1024))
			{
				if (func_1647(cParam0) || func_1653(cParam0))
				{
					func_408(&iLocal_1768, 1024);
				}
			}
			break;
		case 10:
			func_1662(cParam0);
			_0xf7ea250b9a919e03(1956691127, Global_35);
			if (!func_195(iVar1759, 1024))
			{
				if (has_anim_event_fired(Global_35, -467277032))
				{
					func_165(0, 0);
					func_408(&uLocal_1762, 1024);
				}
			}
			if (!func_195(iVar1759, 2048))
			{
				if (has_anim_event_fired(Global_35, -758144434))
				{
					func_165(1, 1);
					func_408(&uLocal_1762, 2048);
				}
			}
			if (!func_8(cParam0, 524288))
			{
				if (_does_anim_scene_exist(cParam0->f_7375.f_804))
				{
					if (_is_anim_scene_started(cParam0->f_7375.f_804, false))
					{
						if (_get_anim_scene_progress(cParam0->f_7375.f_804) < 0.2f)
						{
							if (is_screen_faded_out())
							{
								do_screen_fade_in(2000);
							}
						}
					}
				}
			}
			if (!func_195(iVar1755, 67108864))
			{
				if (func_1483())
				{
					if (func_175(cParam0, 1))
					{
						func_408(&uLocal_1758, 67108864);
					}
				}
			}
			if (func_1663(cParam0) > 24000)
			{
				if (!func_195(iVar1754, 536870912))
				{
					func_1333(0, 0);
					func_1337(0, 0);
					func_408(&uLocal_1757, 536870912);
				}
			}
			if (func_1663(cParam0) > 111000 || (_does_anim_scene_exist(cParam0->f_7375.f_804) && _0x8d81e7824b7753f7(cParam0->f_7375.f_804, "NBD1_MCS5_P3_T04_Shot_1_382-1214", 1)))
			{
				if (!func_195(iVar1765, 2097152))
				{
					func_1480();
					func_408(&iLocal_1768, 2097152);
				}
			}
			if (!func_195(iVar1765, 1))
			{
				if (func_1642(cParam0, Global_35, 0, 0, 1, 1))
				{
					func_1664(Global_35);
					set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
					set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
					if (!func_1655(get_entity_coords(&(iLocal_2449[0]), true, false), 1))
					{
						simulate_player_input_gait(player_id(), 1.5f, 5000, 0f, true, false);
					}
					func_408(&iLocal_1768, 1);
				}
			}
			if (!func_195(iVar1765, 2))
			{
				if (func_1642(cParam0, &(iLocal_2449[0]), 0, 0, 1, 1))
				{
					if (func_1662(cParam0))
					{
						iVar7 = get_train_carriage(iVar2443, 4);
						if (does_entity_exist(iVar7))
						{
							vVar8 = { get_entity_coords(iVar7, true, false) };
							vVar11 = { get_entity_rotation(iVar7, 2) };
							set_anim_scene_origin(&(uLocal_1769[53]), vVar8, vVar11, 2);
							vVar3 = { func_1665(&(uLocal_1769[53]), "CS_Dutch", "pl_Dutch_Enters_Train") };
							fVar6 = func_1666(&(uLocal_1769[53]), "CS_Dutch", "pl_Dutch_Enters_Train");
							func_1667(&(iLocal_2449[0]), vVar3, fVar6, 0, 1073741824, 1, 0);
							func_1664(&(iLocal_2449[0]));
							if (func_1366())
							{
								func_408(&iLocal_1768, 2);
							}
						}
					}
				}
			}
			if (!func_195(iVar1765, 32))
			{
				if (func_1642(cParam0, &(iLocal_2449[4]), 0, 0, 1, 1))
				{
					func_1668(&(iLocal_2449[4]), func_409(2, 20), &(iLocal_2182[32]), 0, 1, 0, 1.75f);
					func_1664(&(iLocal_2449[4]));
					func_408(&iLocal_1768, 32);
				}
			}
			if (!func_195(iVar1765, 8))
			{
				if (func_1642(cParam0, &(iLocal_2449[2]), 0, 0, 1, 1))
				{
					func_1668(&(iLocal_2449[2]), func_409(2, 22), &(iLocal_2182[36]), 0, 0, 0, 1.75f);
					func_1664(&(iLocal_2449[2]));
					func_408(&iLocal_1768, 8);
				}
			}
			if (!func_195(iVar1765, 64))
			{
				if (func_1642(cParam0, &(iLocal_2449[5]), 0, 0, 1, 1))
				{
					func_1668(&(iLocal_2449[5]), func_409(2, 21), &(iLocal_2182[34]), 0, 0, 0, 1.75f);
					func_1664(&(iLocal_2449[5]));
					func_408(&iLocal_1768, 64);
				}
			}
			if (!func_195(iVar1765, 16))
			{
				if (func_1642(cParam0, &(iLocal_2449[3]), 0, 0, 1, 1))
				{
					func_1668(&(iLocal_2449[3]), func_409(2, 23), &(iLocal_2182[38]), 0, 1, 0, 1.75f);
					func_1664(&(iLocal_2449[3]));
					func_408(&iLocal_1768, 16);
				}
			}
			break;
		case 25:
			_0x5651516d947abc53();
			if (_does_anim_scene_exist(cParam0->f_7375.f_804))
			{
				if (_is_anim_scene_started(cParam0->f_7375.f_804, false))
				{
					if (_get_anim_scene_progress(cParam0->f_7375.f_804) < 0.2f)
					{
						if (is_screen_faded_out())
						{
							do_screen_fade_in(2000);
						}
					}
				}
			}
			if (!func_195(iVar1757, 524288))
			{
				if (_does_anim_scene_exist(cParam0->f_7375.f_804))
				{
					if (_is_anim_scene_started(cParam0->f_7375.f_804, false))
					{
						if (has_anim_event_fired(Global_35, -1310335444))
						{
							_0x3373779baf7caf48("overcastdark", "overcastdark_STD1");
							_set_weather_type(433385945, true, true, false, 0f, false);
							func_408(&uLocal_1760, 524288);
						}
					}
				}
			}
			if (!func_195(iVar1759, 32))
			{
				if (_does_anim_scene_exist(cParam0->f_7375.f_804))
				{
					if (_is_anim_scene_started(cParam0->f_7375.f_804, false))
					{
						if (has_anim_event_fired(Global_35, -1310335444))
						{
							func_1669();
							func_408(&uLocal_1762, 32);
						}
					}
				}
			}
			if (!func_195(iVar1759, 1))
			{
				if (has_anim_event_fired(Global_35, 1052006631))
				{
					if (func_1670(18, 0, 1, 0))
					{
						func_408(&uLocal_1762, 1);
					}
				}
			}
			if (!func_195(iVar1759, 2))
			{
				if (has_anim_event_fired(Global_35, -819537751))
				{
					if (func_1670(19, 0, 1, 0))
					{
						func_408(&uLocal_1762, 2);
					}
				}
			}
			if (!func_195(iVar1765, 1024))
			{
				if (func_1647(cParam0) || func_1653(cParam0))
				{
					do_screen_fade_out(0);
					func_408(&iLocal_1768, 1024);
				}
			}
			break;
	}
	return 1;
}

void func_996(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

int func_997(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 0:
			if (!func_1334(1))
			{
				return 0;
			}
			func_1671();
			if (!does_entity_exist(iVar2441))
			{
				iLocal_2444 = _get_anim_scene_vehicle(cParam0->f_7375.f_804, "COACH2", true);
			}
			if (!does_entity_exist(iVar2442))
			{
				iLocal_2445 = _get_anim_scene_vehicle(cParam0->f_7375.f_804, "WAGON02X", true);
			}
			iLocal_2248 = _blip_add_for_entity(408396114, iVar2441);
			func_1471(cParam0, "NBD1_FOLLOW", -1082130432, 0, 0, -1, -1, 0);
			if (does_blip_exist(iVar2245))
			{
				set_blip_name_from_text_file(iVar2245, "NBD1_BLIP_CONVOY");
			}
			break;
		case 1:
			func_1471(cParam0, "NBD1_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 2:
			func_1471(cParam0, "NBD1_RE_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 3:
			func_1471(cParam0, "NBD1_BIB_OBJ3", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 4:
			func_1471(cParam0, "NBD1_BF_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 5:
			func_1471(cParam0, "NBD1_BF_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 6:
			func_1471(cParam0, "NBD1_GTR1_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 7:
			func_1471(cParam0, "NBD1_GTR2_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 8:
			func_1672(cParam0);
			if (iVar1460 < 2)
			{
				return 0;
			}
			else if (!func_26(&uLocal_1947))
			{
				func_237(&uLocal_1947);
				return 0;
			}
			else if (func_238(&uLocal_1947) < 1000)
			{
				return 0;
			}
			func_1471(cParam0, "NBD1_RJ_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 9:
			func_1471(cParam0, "NBD1_RE_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 10:
			if (!func_1662(cParam0))
			{
				return 0;
			}
			func_1471(cParam0, "NBD1_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
			break;
		case 11:
			func_1471(cParam0, "NBD1_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
			break;
	}
	return 1;
}

void func_998(char[4] cParam0, int iParam1)
{
	cParam0->f_8267 = iParam1;
	func_103(cParam0, 131072);
}

void func_999(char[4] cParam0)
{
	func_1674(cParam0);
	func_406(cParam0, 0);
	func_187(cParam0, 1);
	func_1675(cParam0);
	func_1676(cParam0);
	func_1677();
	func_1678(cParam0);
	func_1679(cParam0);
	func_990(208);
	iVar0 = func_33(cParam0);
	if (iVar0 >= iLocal_228 && iVar0 < iLocal_231)
	{
		func_1680(Global_35);
	}
	func_1681(cParam0, iVar0);
	func_163();
}

void func_1000(char[4] cParam0)
{
	if (!func_23(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 268435456))
	{
		return;
	}
	func_1682(cParam0);
}

void func_1001(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_230())
			{
				if (func_970(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_237(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_1002(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 8388608))
	{
		if (func_1683(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1684();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1685(cParam0, func_33(cParam0), 8388608);
		}
	}
}

void func_1003(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_8(cParam0, 256))
	{
		return;
	}
	if (!func_8(cParam0, 1048576))
	{
		if (func_255() || func_54())
		{
			func_99(cParam0, 1048576);
		}
	}
	else if (!func_255() && !func_54())
	{
		func_966(cParam0, 1048576);
	}
	if (!func_8(cParam0, 134217728))
	{
		if ((func_8(cParam0, 1048576) && !func_121(cParam0, func_33(cParam0), 524288)) && !func_121(cParam0, func_33(cParam0), 1))
		{
			if (!Global_1935630->f_12)
			{
				_0xb832f1a686b9b810(Global_35, true, 0);
				func_99(cParam0, 134217728);
			}
		}
	}
	else if ((!func_8(cParam0, 1048576) || func_121(cParam0, func_33(cParam0), 524288)) || func_121(cParam0, func_33(cParam0), 1))
	{
		if (!Global_1935630->f_12)
		{
			_0xb832f1a686b9b810(Global_35, false, 0);
			func_966(cParam0, 134217728);
		}
	}
}

void func_1004(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_121(cParam0, func_33(cParam0), 1) && !func_121(cParam0, func_33(cParam0), 1048576))
	{
		set_ped_reset_flag(Global_35, 175, true);
	}
}

void func_1005(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 2097152))
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
}

void func_1006(char[4] cParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		return;
	}
	iVar0 = get_itemset_size(Local_14);
	if (cParam0->f_13179 == -1 || cParam0->f_13179 > (iVar0 - 1))
	{
		cParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = cParam0->f_13179;
	while (iVar1 >= 0)
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, Local_14));
		if (does_entity_exist(iVar3) && is_entity_dead(iVar3))
		{
			remove_from_itemset(iVar3, Local_14);
		}
		iVar2++;
		if (iVar2 > 5)
		{
		}
		else
		{
			iVar1 = (iVar1 + -1);
		}
	}
	cParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		cParam0->f_13179 = (get_itemset_size(Local_14) - 1);
	}
}

int func_1007(char[4] cParam0)
{
	if ((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_271(cParam0->f_5423[iVar0]))
		{
			func_515(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_1008(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1686(iVar0))
	{
		return false;
	}
	iVar1 = func_1687(iParam2);
	if (!func_1688(iVar1))
	{
		return false;
	}
	if (!func_1689(cParam0, iParam1, iParam2))
	{
		return true;
	}
	Stack.Push(cParam0);
	Call_Loc(cParam0->f_1[iVar0][iVar1]);
	if (StackVal)
	{
		return true;
	}
	return false;
}

int func_1009(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_1010(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_1011(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_237(&(cParam0->f_603));
	}
}

void func_1012(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_1013(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(cParam0->f_13109)))
	{
		func_27(&(cParam0->f_13109), 0);
	}
	else if (func_970(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_272(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_273(cParam0->f_5421))
		{
			iVar2 = func_274(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					bVar3 = func_1690(cParam0->f_5421, iVar1);
					if (!is_entity_dead(bVar3) && !_0xa0bc8faed8cfeb3c(bVar3))
					{
						iVar0 = 0;
					}
				}
				else if ((!is_entity_dead(iVar2) && is_entity_a_vehicle(iVar2)) && _is_draft_vehicle(get_vehicle_index_from_entity_index(iVar2)))
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 6)
					{
						bVar5 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(iVar2), iVar4);
						if (!is_entity_dead(bVar5))
						{
							if (!_0xa0bc8faed8cfeb3c(bVar5))
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
				}
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < get_itemset_size(Local_14))
	{
		iVar6 = get_indexed_item_in_itemset(iVar1, Local_14);
		iVar7 = _get_entity_from_item(iVar6);
		if (does_entity_exist(iVar7))
		{
			if (is_entity_a_ped(iVar7))
			{
				bVar8 = get_ped_index_from_entity_index(iVar7);
				if (!is_entity_dead(bVar8) && !_0xa0bc8faed8cfeb3c(bVar8))
				{
					iVar0 = 0;
				}
			}
			else if ((!is_entity_dead(iVar7) && is_entity_a_vehicle(iVar7)) && _is_draft_vehicle(get_vehicle_index_from_entity_index(iVar7)))
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 6)
				{
					bVar10 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(iVar7), iVar9);
					if (!is_entity_dead(bVar10))
					{
						if (!_0xa0bc8faed8cfeb3c(bVar10))
						{
							iVar0 = 0;
						}
					}
					iVar9++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_1014(char[4] cParam0)
{
	return func_970(&(cParam0->f_603));
}

bool func_1015(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_1016(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_1008(cParam0, iParam1, 4))
	{
		if (func_33(cParam0) != 25 && func_33(cParam0) != 26)
		{
			if (!func_8(cParam0, 512) && !func_120(cParam0, 4))
			{
				func_36(cParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				*Global_1347394 = { Var0 };
				Global_1347394->f_3 = Var0.f_3;
				Global_1572864->f_10 = func_132(iParam2);
			}
		}
		func_1691(cParam0);
		if (func_1692(cParam0))
		{
			func_1693(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_966(cParam0, 524288);
		func_1694(&(cParam0->f_7375), 4);
		if (func_1683(cParam0))
		{
			func_140(cParam0, func_33(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1684();
		}
		return true;
	}
	return false;
}

void func_1017(char[4] cParam0)
{
	func_1695(cParam0);
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (_0xcf45df50c7775f2a())
		{
			_0x5a8b01199c3e79c3();
		}
		if (_0xcf45df50c7775f2a())
		{
			_0x5a8b01199c3e79c3();
		}
	}
	if (is_player_teleport_active())
	{
		stop_player_teleport();
	}
	_set_milliseconds_per_game_minute(9999999);
}

bool func_1018(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_965(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_966(cParam0, 2097152);
			func_282(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_1010(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1595(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_965(cParam0))
			{
				func_966(cParam0, 2097152);
				func_967(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_967(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_965(cParam0))
		{
			func_966(cParam0, 2097152);
			func_1602(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_967(cParam0, Var0);
	}
	return true;
}

void func_1019(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1696(cParam0))
		{
			func_458(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1697(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

int func_1020(char[4] cParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(cParam0, func_33(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_271(cParam0->f_5423[iVar1]))
		{
			if (func_1698(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1699(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_1021(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1700(cParam0))
		{
			func_458(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1697(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

void func_1022(char[4] cParam0)
{
	switch (func_1701(&iVar0))
	{
		case 1:
			func_1702(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_207(iVar0) && iVar0 == func_12(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_1023(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 4194304))
	{
		return false;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return false;
	}
	return true;
}

int func_1024(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1601(cParam0);
		func_966(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1595(cParam0, iParam1) };
	if (func_1703(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_1025(char[4] cParam0, int iParam1)
{
	func_1704(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_242(cParam0, iParam1));
}

void func_1026(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_1012(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_966(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_966(cParam0, 4);
		func_966(cParam0, 8192);
		func_966(cParam0, 536870912);
		func_282(cParam0, 4);
		func_65(0);
		func_64(0);
		func_966(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1705(cParam0);
		if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_82(32768))
		{
			func_397(cParam0, 524288);
		}
		if (func_20() == 0)
		{
			if (_0xb655db7582aec805(Global_35))
			{
				func_21(0);
				_0xf6262491c7704a63(Global_35, 0);
			}
			else if (Global_1935630->f_12)
			{
				func_1706(1, 1);
			}
		}
	}
}

void func_1027(bool bParam0)
{
	if (!func_214(0, 0, 1) || bParam0)
	{
		iVar0 = func_1137();
		iVar1 = func_1140(iVar0);
		bVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		bVar3 = func_1707(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		bVar4 = func_1707(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
		animpostfx_play("RespawnWithHonor");
		_0xf972f0ab16dc5260("RespawnWithHonor", 1, bVar3);
		_0xf972f0ab16dc5260("RespawnWithHonor", 2, bVar2);
		_0xf972f0ab16dc5260("RespawnWithHonor", 3, bVar4);
	}
	else
	{
		animpostfx_play("RespawnMissionCheckpoint");
	}
}

int func_1028(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1708(bParam1, bParam2, bParam3);
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

var func_1029(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1709(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1710(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1709(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_1030(char[4] cParam0)
{
	return true;
}

bool func_1031(char[4] cParam0)
{
	return true;
}

int func_1032(char[4] cParam0)
{
	return 1;
}

bool func_1033(int iParam0)
{
	if (-1829635046 == func_1711(81053684))
	{
		if (func_1037(iParam0))
		{
			return true;
		}
	}
	else if (func_1712(-525676072, iParam0))
	{
		if (func_1037(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_1034(int iParam0)
{
	return func_1713(iParam0);
}

bool func_1035(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	if (func_1037(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_1036(int iParam0, int iParam1)
{
	iVar0 = func_722(iParam0);
	iVar1 = func_723(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (func_720(iParam0) && func_1714(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && func_1219(32768)) || &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1]) && iParam0 != &Global_1946804->f_1497.f_1[iVar1])
	{
		if (func_720(&(Global_1946804->f_1497.f_1[iVar1])) && func_1714(&(Global_1946804->f_1497.f_1[iVar1])))
		{
			iParam1 |= 32;
		}
		if (Global_1946804->f_57[iVar1]->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (func_648(iParam0))
		{
			case 81053684:
				if (func_1712(-525676072, &uVar3))
				{
					iVar2 = func_723(func_1715(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804->f_2377[iVar2] = &Global_1946804->f_57[iVar2];
						Jump @434; //curOff = 294
						if (func_1219(32768))
						{
							func_1716(func_1287(iVar1, 1));
						}
						if (func_1219(32768) || (func_1712(-2061583405, &iVar4) && !func_1714(iVar4)))
						{
							knock_off_ped_prop(Global_35, false, true, false, true);
						}
						if (func_1712(81053684, &iVar4))
						{
							iVar2 = func_723(func_1715(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804->f_2377[iVar2] = &Global_1946804->f_57[iVar2];
							}
							Global_1946804->f_2377[iVar1] = iParam0;
							func_1717(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

bool func_1037(int iParam0)
{
	if (func_1712(81053684, iParam0))
	{
		return true;
	}
	if (func_1712(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1038(int iParam0)
{
	if (does_entity_exist(Global_1360165[iParam0]) && decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
	{
		return true;
	}
	if ((((((((((((((((func_1718(iParam0, 1) || func_1718(iParam0, 128)) || func_1718(iParam0, 256)) || func_1718(iParam0, 512)) || func_1718(iParam0, 1024)) || func_1718(iParam0, 2048)) || func_1718(iParam0, 4096)) || func_1718(iParam0, 65536)) || func_1718(iParam0, 16384)) || func_1718(iParam0, 262144)) || func_1718(iParam0, 524288)) || func_1718(iParam0, 1048576)) || func_1718(iParam0, 2097152)) || func_1718(iParam0, 32768)) || func_1718(iParam0, 131072)) || func_1718(iParam0, 134217728)) || func_1718(iParam0, 1073741824))
	{
		return true;
	}
	return false;
}

void func_1039(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_1719(iParam0);
				func_1720(iParam0, 0);
				break;
		}
		func_1721(iParam0, iParam1);
		if (func_1722(iParam1, &iVar0))
		{
			if (does_entity_exist(Global_1360165[iParam0]))
			{
				if (func_1723(Global_1360165[iParam0], iVar0))
				{
					_0xa2f8b3b5fedfc100(Global_1360165[iParam0], iVar0);
				}
				_set_ped_body_component(Global_1360165[iParam0], _0x30569f348d126a5a(Global_1360165[iParam0]));
				_update_ped_variation(Global_1360165[iParam0], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_1719(iParam0);
				func_1720(iParam0, 1);
				break;
		}
		func_1724(iParam0, iParam1);
		func_1725(iParam0, Global_1360165[iParam0], 1);
	}
}

int func_1040(int iParam0)
{
	if (func_1718(iParam0, 1))
	{
		return 1;
	}
	else if (func_1718(iParam0, 128))
	{
		return 128;
	}
	else if (func_1718(iParam0, 256))
	{
		return 256;
	}
	else if (func_1718(iParam0, 512))
	{
		return 512;
	}
	else if (func_1718(iParam0, 1024))
	{
		return 1024;
	}
	else if (func_1718(iParam0, 2048))
	{
		return 2048;
	}
	else if (func_1718(iParam0, 4096))
	{
		return 4096;
	}
	else if (func_1718(iParam0, 65536))
	{
		return 65536;
	}
	else if (func_1718(iParam0, 16384))
	{
		return 16384;
	}
	else if (func_1718(iParam0, 262144))
	{
		return 262144;
	}
	else if (func_1718(iParam0, 524288))
	{
		return 524288;
	}
	else if (func_1718(iParam0, 1048576))
	{
		return 1048576;
	}
	else if (func_1718(iParam0, 2097152))
	{
		return 2097152;
	}
	else if (func_1718(iParam0, 32768))
	{
		return 32768;
	}
	else if (func_1718(iParam0, 131072))
	{
		return 131072;
	}
	else if (func_1718(iParam0, 134217728))
	{
		return 134217728;
	}
	else if (func_1718(iParam0, 1073741824))
	{
		return 1073741824;
	}
	return 0;
}

int func_1041(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_1726(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_1727(iParam1);
	return func_1728(iParam0, iVar0, bParam2, bParam2);
}

void func_1042(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		_0x411189e51b8020ba(iParam0, "Cautious");
	}
}

void func_1043(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		_0x411189e51b8020ba(iParam0, "Stealth");
	}
}

void func_1044(int iParam0, int iParam1)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 || iParam1);
}

bool func_1045(int iParam0)
{
	return iParam0 > -1;
}

bool func_1046(int iParam0)
{
	if (!func_562(iParam0))
	{
		return false;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_1047(int iParam0)
{
	if (!func_1045(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1048(int iParam0)
{
	if (!func_1045(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1049(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1045(iParam0))
		{
			return;
		}
	}
	func_1729(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_1050(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1045(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 - ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1));
	}
}

void func_1051(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1045(iParam0))
		{
			return;
		}
	}
	func_1729(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_1052(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1045(iParam0))
	{
		return 0;
	}
	bVar0 = func_1046(iParam0);
	if (func_1101(bVar0, 0))
	{
		if (func_1101(_get_rider_of_mount(bVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1047(iParam0)) || func_1048(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(bVar0) && func_1730(player_ped_id(), bVar0, 1) < 10000f))
			{
				iVar1 = func_1731(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(bVar0))
					{
						set_entity_as_mission_entity(bVar0, true, true);
					}
					func_1732(iParam0);
					_0x7b204f88f6c3d287(func_1733(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_1733(iParam0, 0));
					func_1734(iParam0);
				}
			}
			else
			{
				if (func_757(iParam0, 32768, 1))
				{
					iVar2 = func_1733(iParam0, 0);
					_0xb65e7f733956cf25(iVar2);
					_0xfcc6db8dbe709bc8(iVar2);
				}
				else
				{
					set_ped_as_no_longer_needed(&bVar0);
				}
				set_blocking_of_non_temporary_events(bVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_1101((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_757(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_1732(iParam0);
				_0x7b204f88f6c3d287(func_1733(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_1733(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_1732(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_1735(iParam0, 0);
	return 1;
}

void func_1053(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (_0xa7e51b53309eac97(*iParam0))
		{
			return;
		}
		if (!does_entity_belong_to_this_script(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			set_ped_as_no_longer_needed(iParam0);
		}
		else
		{
			if (!is_entity_dead(*iParam0) && is_ped_in_any_vehicle(*iParam0, true))
			{
			}
			delete_ped(iParam0);
		}
	}
}

void func_1054(int* iParam0)
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

bool func_1055(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_1056()
{
	if (func_20() == 0)
	{
		return -1;
	}
	iVar0 = func_218();
	if (iVar0 == -1)
	{
		return 150000;
	}
	if (iVar0 <= 1)
	{
		return 30000;
	}
	if (iVar0 == 2 && !func_1736(24))
	{
		return 50000;
	}
	return 150000;
}

void func_1057(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			_0x74bcceb233ad95b2(-1743273232, iParam1);
			break;
		case 1:
			_0x74bcceb233ad95b2(-948016518, iParam1);
			break;
		case 2:
			_0x74bcceb233ad95b2(580522491, iParam1);
			break;
		case 3:
			_0x74bcceb233ad95b2(1176390239, iParam1);
			break;
		case 4:
			_0x74bcceb233ad95b2(1791198853, iParam1);
			break;
		default:
			break;
	}
}

void func_1058(int iParam0)
{
	iVar0 = func_1737(iParam0);
	switch (iParam0)
	{
		case 0:
			_0x74bcceb233ad95b2(-1047841819, iVar0);
			break;
		case 1:
			_0x74bcceb233ad95b2(-1349566727, iVar0);
			break;
		case 2:
			_0x74bcceb233ad95b2(613491521, iVar0);
			break;
		case 3:
			_0x74bcceb233ad95b2(1452147132, iVar0);
			break;
		case 4:
			_0x74bcceb233ad95b2(-885198919, iVar0);
			break;
		default:
			break;
	}
}

bool func_1059(int iParam0, int iParam1)
{
	if (!func_1055(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

void func_1060(int iParam0, bool bParam1)
{
	if (!func_1055(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1738(iParam0, 4);
	}
	else
	{
		func_1739(iParam0, 4);
	}
	func_1740(iParam0, bParam1);
}

void func_1061(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_1062(int* iParam0, bool bParam1)
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
	if (bParam1)
	{
		set_vehicle_as_no_longer_needed(iParam0);
	}
	else
	{
		func_1741(iParam0);
		delete_vehicle(iParam0);
	}
}

void func_1063()
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (does_entity_exist(&(Local_797[iVar0])))
		{
			delete_object(Local_797[iVar0]);
		}
		iVar0++;
	}
}

void func_1064()
{
	if (!func_195(iVar1757, 65536))
	{
		iLocal_1756 = 0;
		while (iVar1754 < _0x635423d55ca84fc8(-651487570))
		{
			if (has_model_loaded(_0x8df5f6a19f99f0d5(-651487570, iVar1754)))
			{
				set_model_as_no_longer_needed(_0x8df5f6a19f99f0d5(-651487570, iVar1754));
			}
			iLocal_1756 = iVar1754 + 1;
		}
		func_408(&uLocal_1759, 65536);
	}
}

void func_1065(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_1742(iParam0, 0, 0);
	if (func_1743(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1744(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1745(iParam0, 1);
			}
			else
			{
				func_1746(iParam0, 1);
			}
		}
		else
		{
			func_1747(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1748())
	{
	}
	else if (network_is_in_session())
	{
	}
}

bool func_1066(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

void func_1067(var uParam0)
{
	_text_database_delete("MGCRK");
	if (uParam0->f_68 == 1)
	{
		_0x57a197ad83f66bbf("Script_MUD5_Safecrack_Player");
		uParam0->f_68 = 0;
	}
	if (uParam0->f_69 == 1)
	{
		_0x57a197ad83f66bbf("Script_MUD5_Safecrack_Safe");
		uParam0->f_69 = 0;
	}
	if (does_cam_exist(uParam0->f_70))
	{
		destroy_cam(uParam0->f_70, false);
	}
	uParam0->f_71 = 1;
	uParam0->f_78 = 0;
	uParam0->f_79 = 0;
	uParam0->f_80 = 1;
	func_196(&(uParam0->f_81), 1);
	func_196(&(uParam0->f_81), 2);
	uParam0->f_86 = 19;
	uParam0->f_87 = 72;
	uParam0->f_88 = 54;
	uParam0->f_92 = 0f;
	uParam0->f_95 = 0f;
	uParam0->f_96 = 0f;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_97 = 0;
	uParam0->f_98 = { 0f, 0f, 0f };
	uParam0->f_101 = { 0f, 0f, 0f };
	func_599(&(uParam0->f_107));
	uParam0->f_116 = 0.05f;
}

int func_1068(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_1069(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_1070(int iParam0, bool bParam1)
{
	if (!func_1069(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1749(iParam0, 1);
	}
	else
	{
		func_1750(iParam0, 1);
	}
	func_1752(func_1751(iParam0), bParam1);
}

void func_1071(int iParam0, int iParam1, bool bParam2)
{
	if (!func_364(iParam1, 1, 0))
	{
		return;
	}
	if (iParam1 == -727924611 || func_1072(func_1234(iParam1)))
	{
		if (bParam2)
		{
			_0x6a564540fac12211(iParam0, iParam1);
		}
		else
		{
			_0x766315a564594401(iParam0, iParam1, 0);
		}
	}
}

bool func_1072(int iParam0)
{
	if (!func_1235(iParam0))
	{
		return false;
	}
	if (func_1753(iParam0, 4))
	{
		return true;
	}
	return false;
}

int func_1073(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

float func_1074()
{
	return (func_1754(150f, to_float(Global_1934765->f_286)) / to_float(300));
}

void func_1075(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1045(iParam0))
	{
		return;
	}
	func_1755(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_1076(var uParam0, int iParam1)
{
	func_196(&(uParam0->f_64), iParam1);
}

void func_1077(var uParam0, int iParam1)
{
	func_408(&(uParam0->f_64), iParam1);
}

bool func_1078(int iParam0)
{
	if (!func_1045(iParam0))
	{
		return false;
	}
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		return true;
	}
	return false;
}

void func_1079(int iParam0, bool bParam1)
{
	if (!func_1045(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1099(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_1075(iParam0, 16, 0);
		}
	}
	func_1075(iParam0, 1, bParam1);
}

bool func_1080(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1045(iParam0))
		{
			return false;
		}
	}
	func_1729(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_1081(int iParam0, var uParam1)
{
	if (!func_1045(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 == 0 || func_1099(&((*Global_1360165)[iParam0]->f_12), 1))
	{
		if (does_blip_exist(*uParam1))
		{
			func_1756(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_1099(&((*Global_1360165)[iParam0]->f_12), 512);
	if (func_1099(&((*Global_1360165)[iParam0]->f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (func_1099(&((*Global_1360165)[iParam0]->f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (func_1099(&((*Global_1360165)[iParam0]->f_12), 256))
	{
		iVar1 = func_1757(-1739349092);
	}
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(422991367, func_598(iParam0));
	}
	if (does_blip_exist(*uParam1))
	{
		if (iVar0 != 0)
		{
			_blip_set_modifier(*uParam1, iVar0);
			if (iVar0 == -546708623)
			{
				_blip_set_modifier(*uParam1, 231194138);
			}
		}
		else
		{
			_set_blip_flash_style(*uParam1, iVar0);
		}
		if (bVar2 && !func_214(0, 0, 1))
		{
			_0xedd964b7984ac291(*uParam1, -1944754404);
			if (func_1099(&((*Global_1360165)[iParam0]->f_12), 1024))
			{
				_blip_set_modifier(*uParam1, -46775694);
			}
			if (func_1099(&((*Global_1360165)[iParam0]->f_12), 2048))
			{
				_blip_set_modifier(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			set_blip_sprite(*uParam1, iVar1, true);
		}
		if (!is_string_null_or_empty(&((*Global_1360165)[iParam0]->f_14)) && func_1099(&((*Global_1360165)[iParam0]->f_12), 8))
		{
			set_blip_name_from_text_file(*uParam1, &((*Global_1360165)[iParam0]->f_14));
		}
		else
		{
			set_blip_name_from_text_file(*uParam1, func_341(iParam0, 0));
		}
	}
}

int func_1082(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

bool func_1083(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1084(int iParam0)
{
	iVar0 = func_524(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1758(iVar0);
}

int func_1085(int iParam0, int iParam1)
{
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2])
		{
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2])
		{
			func_1759(iVar2);
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_1086()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1087(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_1088(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1089(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1090(int iParam0, int iParam1)
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
			func_1760((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1760(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_207(&(Global_1898164->f_1[0])))
	{
		func_219(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1091(int iParam0, int iParam1, bool bParam2)
{
	if (!func_541(iParam0))
	{
		return;
	}
	func_1761(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1092(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1093(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1094(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1095()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1096(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1762(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1097(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1763();
	}
	else
	{
		return;
	}
	func_1764();
	Global_40.f_9.f_14 = func_302();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1765())
		{
			func_388(Global_1310720->f_1);
		}
		else if (func_1766() == func_389(Global_36, 1) && func_1767() != 2)
		{
			func_388(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_388(Global_36);
		}
		func_1768(Global_36, &vVar0, &uVar4);
		if (!func_1765())
		{
			if (func_1769(vVar0, Global_36) < func_1769(Global_40.f_9.f_7, Global_36))
			{
				func_388(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_389(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1768(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_246(Global_1935630, 8192);
	}
	func_1770();
}

bool func_1098(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_271(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1099(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1100(int iParam0)
{
	func_1051(iParam0, 36, 1);
}

bool func_1101(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (is_entity_dead(bParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_195(iVar0, 1))
	{
		if (is_ped_fatally_injured(bParam0))
		{
			return false;
		}
	}
	if (func_195(iVar0, 2))
	{
		if (_is_ped_hogtied(bParam0))
		{
			return false;
		}
	}
	if (func_195(iVar0, 8))
	{
		if (get_ped_config_flag(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_195(iVar0, 16))
	{
		if (!is_ped_on_mount(bParam0) && !is_ped_in_any_vehicle(bParam0, false))
		{
			return false;
		}
	}
	if (func_195(iVar0, 32))
	{
		if (is_entity_in_water(bParam0))
		{
			return false;
		}
	}
	if (func_195(iVar0, 64))
	{
		if (_0xb655db7582aec805(bParam0))
		{
			return false;
		}
	}
	if (func_195(iVar0, 128))
	{
		if (is_ped_ragdoll(bParam0))
		{
			return false;
		}
	}
	if (func_195(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(bParam0))
		{
			return false;
		}
	}
	return true;
}

int func_1102(int iParam0, bool bParam1)
{
	if (!func_562(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1771(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_1103(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_562(iParam0))
	{
		bVar1 = func_598(iParam0);
		if (!is_entity_dead(bVar1))
		{
			iVar0 = get_ped_max_health(bVar1);
			set_ped_config_flag(bVar1, 179, true);
			func_1772(iParam0);
		}
	}
	if (func_1080(iParam0, 5, 1))
	{
		set_ped_config_flag(func_598(iParam0), 137, true);
	}
}

void func_1104(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1045(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1049(iParam0, 50, 1);
		func_1049(iParam0, 48, 1);
		func_1049(iParam0, 49, 1);
		func_1049(iParam0, 51, 1);
		func_1049(iParam0, 52, 1);
		func_1049(iParam0, 54, 1);
		func_1049(iParam0, 55, 1);
	}
	else
	{
		func_1051(iParam0, 50, 1);
		func_1051(iParam0, 48, 1);
		func_1051(iParam0, 49, 1);
		func_1051(iParam0, 51, 1);
		if (bParam3)
		{
			func_1051(iParam0, 54, 1);
		}
		else
		{
			func_1049(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1051(iParam0, 52, 1);
			if (bParam3)
			{
				func_1051(iParam0, 55, 1);
			}
		}
		else
		{
			func_1049(iParam0, 52, 1);
			if (!bParam3)
			{
				func_1049(iParam0, 55, 1);
			}
		}
	}
}

void func_1105(int iParam0, bool bParam1)
{
	if (!func_1045(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_598(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_598(iParam0), 204, false);
	}
}

void func_1106(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_562(iParam0))
	{
		return;
	}
	if (func_563(iParam0))
	{
		if (!func_275(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1080(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1102(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	bVar1 = func_598(iParam0);
	if (((does_entity_exist(bVar1) && func_1773(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
	{
		return;
	}
	if (does_entity_exist(bVar1) && is_entity_attached(bVar1))
	{
		if (((is_ped_active_in_scenario(bVar1, 1) || _0x0c3cb2e600c8977d(bVar1, 1)) || is_ped_on_mount(bVar1)) || is_ped_in_any_vehicle(bVar1, false))
		{
			_0xf1c03a5352243a30(bVar1);
			clear_ped_tasks_immediately(bVar1, true, true);
		}
		detach_entity(bVar1, true, true);
	}
	if (bParam4)
	{
		func_1051(iParam0, 2, 1);
	}
	else
	{
		func_1774(iParam0);
		func_1051(iParam0, 1, 1);
	}
}

void func_1107(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_562(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

bool func_1108(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return true;
	}
	return false;
}

void func_1109(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_232(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1775(iVar6);
		if (!_0x608bc6a6aacd5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			bVar7 = Var2.f_3;
			if (!does_entity_exist(bVar7))
			{
			}
			else if (is_entity_a_mission_entity(bVar7) && !_0x88ad6cc10d8d35b2(bVar7))
			{
			}
			else
			{
				if (!is_entity_a_mission_entity(bVar7))
				{
					set_entity_as_mission_entity(bVar7, true, true);
				}
				_0x0d0db2b6af19a987(&bVar7);
			}
		}
		iVar6++;
	}
}

void func_1110(int iParam0, int iParam1)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0] = iParam1;
}

bool func_1111(int iParam0, int iParam1)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return ((*Global_1900383)[iParam0]->f_24 && iParam1) != 0;
}

void func_1112(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1777(func_1776(255), 109029619));
	}
	else if (func_321())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1139();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1113(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372;
}

void func_1114(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1777(func_1776(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_321())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1139())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1115(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_37;
}

float func_1116(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1117(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1515(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1113(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1113(iParam0) + 1;
	fVar6 = func_1778(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1779(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1118(int iParam0)
{
	_set_blip_flash_style(iParam0, -401963276);
	_set_blip_flash_style(iParam0, 231194138);
	_set_blip_flash_style(iParam0, -1012863186);
	_set_blip_flash_style(iParam0, -272772079);
	_set_blip_flash_style(iParam0, 1313031610);
	_set_blip_flash_style(iParam0, -1814032670);
	_set_blip_flash_style(iParam0, -1380599892);
	_set_blip_flash_style(iParam0, 430539302);
	_set_blip_flash_style(iParam0, -995247980);
	_set_blip_flash_style(iParam0, -25056193);
	_set_blip_flash_style(iParam0, -264630352);
}

void func_1119(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1120()
{
	if (func_355())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1121(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1780((Global_40.f_4283.f_325 + iParam0));
}

void func_1122(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1120())
	{
		func_754(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_754(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1123(int iParam0)
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
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_1124(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1125(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1126(int iParam0)
{
	func_1134(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1127(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1128(1);
	}
}

void func_1128(bool bParam0)
{
	if (bParam0)
	{
		func_1781(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1782(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1129(int iParam0)
{
	if (!func_207(iParam0))
	{
		return -15;
	}
	return func_1783(iParam0);
}

bool func_1130(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_750(iParam1) || !func_750(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1131(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1132(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case 1155669136:
			return 1;
		case 1871598:
			return 9;
		case -1379218218:
			return 6;
		case 1059981727:
			return 2;
		case -1216736853:
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

bool func_1133(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1134(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1784(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1135(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1136(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (get_game_timer() + ((Global_1327479->f_4 - get_game_timer()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (get_game_timer() + iParam1 * 1000);
	}
}

int func_1137()
{
	iVar0 = func_604();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_1138(int iParam0)
{
	if (func_20() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < get_game_timer()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = get_game_timer();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = get_game_timer();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	bVar1 = (to_float(iParam0) * fVar0);
	bVar1 = func_1707(absf(bVar1) < 1f, func_1707(bVar1 < 0f, -1f, 1f), bVar1);
	return ceil(bVar1);
}

bool func_1139()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_1140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_1141()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_1142(int iParam0, bool bParam1, int iParam2)
{
	func_1785((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1786(iParam0);
}

void func_1143(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1787(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1144(bool bParam0)
{
	bVar3 = false;
	if (func_1788(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1789(iVar5, &iVar2, &iVar0))
			{
				if (!func_624(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1790(iVar2);
					if (_unlock_is_unlocked(iVar1))
					{
						if (bParam0)
						{
							_unlock_set_unlocked(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_643(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1137() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1137() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1791();
							}
							if (bVar3)
							{
								_unlock_set_unlocked(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

char* func_1145(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

bool func_1146(int iParam0)
{
	return func_643(iParam0) == -427144552;
}

bool func_1147(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_645(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1152(iParam0, &uVar0, 1, 0, 0);
	}
	return func_364(iParam0, 1, 0);
}

void func_1148(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_643(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_650(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_651(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_628(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_704(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1149(int iParam0, int iParam1)
{
	if (func_644(iParam0, 58855631))
	{
		func_1299(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1150(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	if (!func_652(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_498(bParam3), iParam0);
}

int func_1151(int iParam0, bool bParam1)
{
	if (func_656(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_498(bParam1), iParam0, 0);
}

bool func_1152(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1792(&iParam0);
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	if (!func_652(0))
	{
		bParam3 = true;
	}
	if (func_1146(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1282(0) };
			Var4.f_9 = -1591664384;
			if (!func_1175(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1176(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1283(iParam0, 1))
			{
				if (!func_1175(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1176(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1793(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1150(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_1794(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_498(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1153(int iParam0, int iParam1)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_643(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_644(iParam0, 1399091007))
	{
		func_1216(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1154(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1795(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1796(&Var0, func_1282(0));
	}
	if (!func_1797(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1226(iVar14);
	return uVar15;
}

int func_1155()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1156(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1157(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1798(iParam0);
	fVar1 = func_1799(iParam0);
	if ((Global_1347477->f_117 || !func_646(31)) || !func_1800(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1801(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_1802(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_754(_create_var_string(6, func_1803(iParam0), fVar1), "itemtype_textures", func_1804(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1159(int iParam0, int iParam1)
{
	if (!func_1314(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1160(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_639() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1805(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1806(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_1199() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1807(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1199(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1808(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_1200() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1809(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1200(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1159(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1161(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_1162(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1163(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1164(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1810(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_364(iVar2, 1, 0) || func_1812(func_1811(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1168(func_1810(iVar0))), func_1168(func_1810(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1199() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1813(iVar0)), func_1813(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1807() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1813(iVar0)), func_1813(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1813(iVar0)), func_1813(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1209(iParam3, func_1814(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1205(iVar2) - iParam7) >= func_1159(iParam3, func_1815(iVar0));
				}
				else
				{
					bVar1 = func_1205(iVar2) >= func_1159(iParam3, func_1815(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1205(iVar2) + iParam7) >= func_1159(iParam3, func_1815(iVar0));
			}
			else
			{
				bVar1 = func_1205(iVar2) >= func_1159(iParam3, func_1815(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1816(iVar2)), func_1816(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1817(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1818(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1818(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1200() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1819(iVar0)), func_1819(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1809() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1819(iVar0)), func_1819(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1819(iVar0)), func_1819(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1209(iParam3, func_1814(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1205(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1820(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1820(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1821(iVar2)), func_1821(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1165(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1808() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_1166(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_207(func_220(0)) && ((func_1822(0) == 1 || func_1822(0) == 8) || func_1822(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

var func_1167(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_1168(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

bool func_1169(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1170(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1171(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1172(int iParam0)
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
			func_1823(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_1824(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1824(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1824(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1825(1);
			break;
		case 34:
			func_1826(1);
			break;
		case 35:
			func_1827(1);
			break;
		case 36:
			break;
		case 37:
			func_1828(0);
			break;
		case 38:
			func_1829(0);
			break;
		case 39:
			func_1830(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_419()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_761("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_342(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_419()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_761("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_342(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_419()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_761("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_342(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_419()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_761("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_342(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1239(99217379) || func_1831(99217379) == 2110595215)
				{
					if (func_1139())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_364(iVar0, 1, 0))
					{
						func_697(iVar0, 1, 752097756);
					}
					func_676(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_364(1013902307, 1, 0))
				{
					func_697(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_364(1013902307, 1, 0))
				{
					func_697(1013902307, 1, 752097756);
				}
				if (!func_364(142640135, 1, 0))
				{
					func_697(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_364(786809402, 1, 0))
				{
					func_697(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_364(786809402, 1, 0))
				{
					func_697(786809402, 1, 752097756);
				}
				if (!func_364(-518019409, 1, 0))
				{
					func_697(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
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
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1832();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_1173(int iParam0)
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

int func_1174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return -997150586;
		case 237:
			return -1189569496;
		case 238:
			return 46488141;
		case 239:
			return 1046566686;
		case 240:
			return 325139909;
		case 241:
			return -1585141069;
		case 242:
			return 802754820;
		case 243:
			return 1415981582;
		case 244:
			return -1886147520;
		case 245:
			return 654877947;
		case 246:
			return -415648720;
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return 1310070322;
		case 258:
			return 724026534;
		case 259:
			return 137387616;
		case 260:
			return -653439684;
		case 261:
			return 1376835592;
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return 986998820;
		case 268:
			return -2119169513;
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return -1990194462;
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685;
		case 387:
			return -649335959;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
			return 756214903;
		case 405:
			return -718417579;
		case 406:
			return -1445516411;
		case 407:
			return 1232060796;
		case 408:
			return -672392892;
		case 409:
			return 1465341584;
		case 410:
			return -427758369;
		case 411:
			return -735647142;
		case 412:
			return 1535838048;
		case 413:
			return -602272282;
		case 414:
			return 2051264661;
		case 415:
			return 487172188;
		case 416:
			return 282270687;
		case 417:
			return 1607708943;
		case 418:
			return 1686264939;
		case 419:
			return 314786149;
		case 420:
			return 1402841185;
		case 421:
			return 1099170772;
		case 422:
			return 2125676786;
		case 423:
			return -363896735;
		case 424:
			return -468790222;
		case 425:
			return -1779133048;
		case 426:
			return 1732537631;
		case 427:
			return 1755095401;
		case 428:
			return 835771095;
		case 429:
			return 1963317232;
		case 430:
			return 259627919;
		case 431:
			return 1299075397;
		case 432:
			return -1509094230;
		case 433:
			return 61132362;
		case 434:
			return 1549741908;
		case 435:
			return 288484254;
		case 436:
			return -1877032947;
		case 437:
			return -1395676456;
		case 438:
			return 1136146715;
		case 439:
			return 468034421;
		case 440:
			return 1079459546;
		case 441:
			return -140369351;
		case 442:
			return 1822341990;
		case 443:
			return 1219701681;
		case 444:
			return 1601295268;
		case 445:
			return -1692460667;
		case 446:
			return 1471419228;
		case 447:
			return 907446160;
		case 448:
			return -1126482585;
		case 449:
			return 1911050315;
		case 450:
			return -1343525599;
		case 451:
			return 1261891225;
		case 452:
			return 763162704;
		case 453:
			return 1335861197;
		case 454:
			return 526744654;
		case 455:
			return -1177461517;
		case 456:
			return -241638635;
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
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

bool func_1175(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1794(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1176(int iParam0, var uParam1, int iParam2)
{
	if (func_1833(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1177(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_624(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_498(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1178(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1834(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1286(*uParam1, &Var0, bParam6, 0))
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
	if (!func_652(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_498(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1179(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1835(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1180(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
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
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_302();
	func_351(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1181(int iParam0)
{
	if (func_1836(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
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
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
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

bool func_1182(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1183(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1184(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_646(50))
			{
				if (!func_646(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_646(51))
			{
				if (!func_646(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1185(int iParam0, int iParam1, var uParam2)
{
	if (!func_624(iParam1, 0))
	{
		return false;
	}
	if (func_643(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_648(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_722(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_644(iParam1, 866047851))
	{
		iVar5 = func_723(iVar4, 1);
		if (func_1837(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_648(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_644(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_1712(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_1838(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1838(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_648(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_644(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1839(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*uParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_1186()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1187()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1188()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_364(func_1840(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1189(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_1190(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_364(iVar0, 1, 0) && func_364(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1191(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_1192(int iParam0, int iParam1)
{
	iVar0 = func_1841(iParam0);
	if (iVar0 != -15)
	{
		func_351(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_751(iVar0, 1);
	}
	return false;
}

void func_1193(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1194(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1195(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1196(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_1197(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_1205(iVar9);
	iVar2 = func_1205(iVar10);
	iVar3 = func_1205(iVar11);
	iVar5 = func_1206(iVar9);
	iVar6 = func_1206(iVar10);
	iVar7 = func_1206(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1205(iVar12);
		iVar8 = func_1206(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_1198(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1199()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1842(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1200()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1201(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1820(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1820(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1820(iVar0))
		{
			*sParam2++;
		}
		if (func_1820(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1820(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1820(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1820(iVar0))
		{
			*sParam2++;
		}
		if (func_1820(iVar1))
		{
			*sParam2++;
		}
		if (func_1820(iVar0) && func_1820(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1820(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1820(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1820(iVar0))
		{
			*sParam2++;
		}
		if (func_1820(iVar1))
		{
			*sParam2++;
		}
		if (func_1820(iVar2))
		{
			*sParam2++;
		}
		if ((func_1820(iVar0) && func_1820(iVar1)) && func_1820(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1820(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1820(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1820(iVar0))
		{
			*sParam2++;
		}
		if (func_1820(iVar1))
		{
			*sParam2++;
		}
		if (func_1820(iVar2))
		{
			*sParam2++;
		}
		if (func_1820(iVar3))
		{
			*sParam2++;
		}
		if (((func_1820(iVar0) && func_1820(iVar1)) && func_1820(iVar2)) && func_1820(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1202(int iParam0)
{
	if (!func_1843(iParam0))
	{
		func_1845(func_1844(iParam0));
	}
}

int func_1203()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1843(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1204(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_1205(iVar9);
	iVar2 = func_1205(iVar10);
	iVar3 = func_1205(iVar11);
	iVar5 = func_1206(iVar9);
	iVar6 = func_1206(iVar10);
	iVar7 = func_1206(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1205(iVar12);
		iVar8 = func_1206(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1205(int iParam0)
{
	if (func_364(iParam0, 1, 0))
	{
		iVar0 = func_628(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1206(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1207(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1208(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1209(int iParam0, int iParam1)
{
	if (!func_1314(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1210(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1209(iParam1, 5) || iParam0 == func_1209(iParam1, 6)) || iParam0 == func_1209(iParam1, 7)) || iParam0 == func_1209(iParam1, 8)) || iParam0 == func_1209(iParam1, 9))
	{
		func_1201(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_640(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_642(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1211(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1209(iParam1, 5) || iParam0 == func_1209(iParam1, 6)) || iParam0 == func_1209(iParam1, 7)) || iParam0 == func_1209(iParam1, 8)) || iParam0 == func_1209(iParam1, 9))
	{
		if (func_1201(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_640(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_642(51, 0, 0, iVar0, func_1159(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_640(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_642(51, 0, 0, iVar0, func_1159(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1212()
{
	if (func_208((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1213(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1214(int iParam0)
{
	if (!func_1846(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1215(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1216(int iParam0, int iParam1, var uParam2)
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

bool func_1217(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1847();
	if (iParam2 == 39)
	{
		Var0 = { func_735(iParam0, 1, 0) };
		iParam2 = func_723(func_736(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_644(iParam0, 866047851) && func_1837(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1219(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1716(func_1287(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1848(iParam2);
	func_1849(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1268(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1268(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1274(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1850(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1851(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1851(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_1555(func_1287(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1218(bool bParam0, bool bParam1, bool bParam2)
{
	func_1852(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1219(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1220()
{
	func_1853(&(Global_1946804->f_2776));
	func_1854(32768);
	func_1555(1108822547, 8, 6);
}

int func_1221(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_723(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_1222(int iParam0)
{
	if (func_1855(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1856(Var0);
}

void func_1223(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1856(Var0);
}

bool func_1224(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_498(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1225(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1226(int iParam0)
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

bool func_1227()
{
	if (func_1857())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1858(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1858(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1859();
	fVar2 = func_1860();
	fVar3 = func_1861();
	fVar4 = func_1862();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1863()));
	bVar7 = (func_1858(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((bVar7 + 100f) / 200f);
	func_1864(3, round((to_float(iVar8) * fVar10)), 0);
	func_1865(3, fVar9, fVar9 > 100f);
	return func_1866(bVar7, -100f, 100f);
}

bool func_1228()
{
	if (func_1857())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1858(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1858(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1859();
	fVar2 = func_1860();
	fVar3 = func_1861();
	fVar4 = func_1862();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1863()));
	bVar7 = (func_1858(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((bVar7 + 100f) / 200f);
	func_1864(2, round((to_float(iVar8) * fVar10)), 0);
	func_1865(2, fVar9, fVar9 > 100f);
	return func_1866(bVar7, -100f, 100f);
}

bool func_1229()
{
	if (func_1857())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1858(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1867())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1868())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1858(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1859();
	fVar2 = func_1860();
	fVar3 = func_1861();
	fVar4 = func_1862();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1863()));
	bVar7 = (func_1858(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((bVar7 + 100f) / 200f);
	func_1864(1, round((to_float(iVar8) * fVar10)), 0);
	func_1865(1, fVar9, fVar9 > 100f);
	if (bVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1858(0);
	}
	return func_1866(bVar7, -100f, 100f);
}

bool func_1230(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1231(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1232(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_624(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1152(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_652(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_498(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1233(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1869();
			}
			break;
	}
	return 0;
}

int func_1234(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_1235(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1236(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1235(iParam0))
	{
		return;
	}
	if (func_1072(iParam0))
	{
		return;
	}
	if (!func_1870(iParam0))
	{
		func_1871(iParam0, 1, 0);
	}
	iVar0 = func_1073(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1753(iParam0, 512))
		{
			func_734(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_231() && !bParam1) && !func_214(0, 0, 1))
	{
		func_763(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1872(iParam0, 6);
	if (bParam2)
	{
		if (!func_214(0, 0, 1))
		{
			func_384(1, 4);
		}
	}
}

bool func_1237(int iParam0, bool bParam1)
{
	return func_1233(iParam0, 0) < func_1873(iParam0, bParam1);
}

bool func_1238(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_648(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1239(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_723(iParam0, 1)] != &Global_1946804->f_57[func_723(iParam0, 1)];
}

void func_1240(int iParam0, int iParam1)
{
	if (func_644(iParam1, 130796156))
	{
		func_1874(iParam1, 0);
	}
	else if (func_644(iParam1, 930141731))
	{
		func_1874(iParam1, 1);
		func_1875(iParam0);
	}
}

void func_1241(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1242(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1876(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1877(uParam2, iParam0, Var1);
	return 1;
}

int func_1243(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1244(int iParam0)
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

int func_1245(int iParam0)
{
	if (!func_1878(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1246()
{
	return !&Global_1911774;
}

void func_1247(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1248(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1249(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1250(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1251(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1879(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1252(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1879(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!_unlock_is_unlocked(iVar13))
					{
						bVar0 = true;
					}
				}
				_unlock_set_unlocked(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_1253(bool bParam0)
{
	if (bParam0)
	{
		func_335(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_335(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_335(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1254();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1880(2032023096);
		func_338(-615217896);
		func_719(655868243, 1, 1, -142743235, 1);
		func_1882(146323340, func_1881());
		Var0 = { func_1523() };
		if (func_1883(&Var0) == -1387633835)
		{
			func_1884(&Var0);
			func_1885(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1886(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1516(iVar6) == 2010625508)
			{
				func_1887(iVar6, iVar7);
				func_1888(iVar6, iVar8);
				func_1889(iVar6, iVar9);
				func_1890(iVar6, 0);
				if (func_1891(iVar6))
				{
					func_1892(iVar6);
				}
				iVar10 = func_1893(iVar8);
				func_1894(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1254()
{
	if (!func_1895(-1898635967, func_1881(), 1))
	{
		return 0;
	}
	if (func_355())
	{
		if (!func_1895(146323340, func_1881(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1255()
{
	func_349(34411519);
	func_349(834124286);
	func_349(-570967010);
}

void func_1256(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_335(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_335(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_335(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_335(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_335(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_335(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_335(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_335(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_335(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_335(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_335(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_719(-1080874779, 3, 1, -142743235, 1);
		func_719(-223790555, 3, 1, -142743235, 1);
		func_719(1566032147, 3, 1, -142743235, 1);
		func_719(891311852, 5, 1, -142743235, 1);
		func_719(-1353737667, 5, 1, -142743235, 1);
		func_719(-330313895, 5, 1, -142743235, 1);
		func_719(-2051332199, 5, 1, -142743235, 1);
		func_719(1237770824, 5, 1, -142743235, 1);
		func_719(-1795542128, 3, 1, -142743235, 1);
		func_719(-1757588258, 3, 1, -142743235, 1);
		func_719(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1886(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1516(iVar0) == 153881023)
			{
				func_1887(iVar0, iVar1);
				func_1888(iVar0, iVar2);
				func_1889(iVar0, iVar3);
				func_1890(iVar0, 0);
				if (func_1891(iVar0))
				{
					func_1892(iVar0);
				}
				iVar4 = func_1893(iVar2);
				func_1894(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1254();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1257(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1896(iParam0);
	if (bParam3)
	{
		func_762(iParam0, sParam1, iParam2);
	}
}

bool func_1258(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1259(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1260()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1224("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1225(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @137; //curOff = 81
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1176(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1226(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1226(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1261(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1897(Param1, iParam5, &Var5, 0))
	{
		func_1178(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1232(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1898(Var19, 1);
}

bool func_1262(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1795(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1796(&Var0, func_1282(0));
	}
	if (!func_1797(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1225(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1178(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1226(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1263(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_735(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1899(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1177(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1178(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1264(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_644(iParam0, 606799272))
		{
			func_1900(iParam0, iParam1);
		}
		if (func_644(iParam0, -1112814642) && func_644(iParam0, -1697809989))
		{
			func_672(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1265(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1901(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_648(iParam0) != -999503751)
		{
			func_1902(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_648(iParam0) != -999503751)
	{
		func_1902(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1903(iParam0, 1);
	return 1;
}

void func_1266()
{
	if (func_20() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

void func_1267(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1904(0);
	}
	if (bParam0)
	{
		func_1279(8);
		func_1279(512);
	}
	else
	{
		func_1279(8);
		func_1279(16);
	}
}

void func_1268(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1269(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_725();
	}
	if (func_20() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_1270(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1271(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1905(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1287(iVar0, 1);
			if (func_1552(iVar0, iParam1))
			{
				vVar4 = { func_727(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1551(iVar7, 4))
				{
					func_1555(iVar7, 4, 6);
				}
			}
			else
			{
				func_1554(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0];
					*uParam0->f_1[iVar0] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

bool func_1272(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_20() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1906(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1273(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1274(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_648(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1552(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1849(iVar1, iVar3);
		}
	}
	if (func_1239(-1586649372) && func_1552(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1849(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1] == 1516947474)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1849(iVar1, iVar3);
					}
				}
			}
			func_1907(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1907(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0]->f_1 == 1155669136 || uParam0->f_1[iVar0]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1849(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1907(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1849(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1849(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1907(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1907(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1849(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1907(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1849(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1849(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_648(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1849(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1839(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_648(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1849(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_644(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1849(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1849(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1839(&(Global_1946804->f_1497.f_1[iVar1])) || func_644(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1849(iVar1, iVar3);
					}
				}
			}
			switch (func_648(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_648(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1849(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_648(&(uParam0->f_1[iVar1])) || func_644(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1849(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1275(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1276(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1230(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1230(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1277(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1230(iParam0, 65536) && !func_1230(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1230(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1230(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1278()
{
	return Global_1905944->f_5694;
}

void func_1279(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1280(struct<4> Param0)
{
	switch (Param0)
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
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1908(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1] == Param0 && Global_1946804->f_668[iVar1]->f_1 == Param0.f_1) && Global_1946804->f_668[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1909(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1279(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1908(Param0))
			{
				return;
			}
			func_1909(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1279(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1223(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1281(bool bParam0)
{
	return func_1177(1328661203, func_1910(), -1591664384, bParam0);
}

struct<4> func_1282(bool bParam0)
{
	iVar0 = func_498(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1177(923904168, func_1281(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1177(923904168, func_1281(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1177(923904168, func_1281(bParam0), -740156546, 0);
}

bool func_1283(int iParam0, bool bParam1)
{
	if (func_648(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_646(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1284(bool bParam0)
{
	iVar0 = func_498(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1177(271701509, func_1281(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1177(271701509, func_1281(bParam0), 12999093, 0);
}

bool func_1285(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_648(iParam0);
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &uVar0))
		{
			if (_item_database_can_equip_item_on_category(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1286(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_498(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1287(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

int func_1288(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1289(int iParam0, int iParam1)
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

void func_1290(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1291(int iParam0, int iParam1)
{
	iVar0 = func_743(*iParam0);
	iVar1 = func_742(*iParam0);
	if (iParam1 < 1 || iParam1 > func_748(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1292(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1293(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1294(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1295(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1296(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1297(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -707360575;
		case 2:
			return -1201174711;
		case 4:
			return 151582343;
		case 8:
			return -642492359;
		case 16:
			return 5171247;
		default:
			break;
	}
	return 0;
}

bool func_1298(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1146(iParam0))
		{
			iVar1 = _get_weapon_unlock(iParam0);
			bVar0 = _unlock_is_visible(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = _unlock_is_visible(iParam0);
	}
	return bVar0;
}

int func_1299(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_624(iParam0, 0))
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

int func_1300(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1792(&iParam0);
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	if (!func_652(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1150(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1794(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_498(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1301(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_644(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			_0x42a2f33a1942e865(iVar33);
		}
		iVar49 = 0;
		if (func_1911(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
				{
					iVar49 = (iVar49 + Var0[iVar32]->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_705(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_708(iVar62, iVar61);
					if (func_624(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1301(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1301(iVar63, -915411861, 1, 0, 0));
								}
								_0x42a2f33a1942e865(iVar33);
							}
						}
					}
					iVar62++;
				}
				_0xcbb7b6edfa933ade(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1911(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
	if (!bParam3)
	{
	}
	return 0;
}

bool func_1302(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1912(1);
}

void func_1303(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1913(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_341(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1913(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_341(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1304()
{
	return Global_40.f_4283.f_325;
}

bool func_1305(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_1306(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1307(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1308(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1309(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1310(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1311(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_419();
	bVar1 = false;
	if (bVar0 && !func_1736(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1736(37)) && !func_1736(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1736(43)) && !func_1736(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*bParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_1517(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1517(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*bParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_1312()
{
	return Global_40.f_1095.f_3054;
}

bool func_1313(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0]->f_420;
}

bool func_1314(int iParam0, var uParam1)
{
	if (!func_1914(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_1315()
{
	if (func_419())
	{
		if (!func_1736(3))
		{
			return func_1915(43);
		}
		if (func_1736(38) && !func_1736(43))
		{
			return func_1916(8);
		}
	}
	return 0;
}

bool func_1316(int iParam0)
{
	if (!func_264(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1917(iParam0));
}

Vector3 func_1317(int iParam0, int iParam1)
{
	func_1314(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		_datafile_get_vector(&vVar5, &Var0);
	}
	return vVar5;
}

int func_1318(int iParam0, int iParam1)
{
	if (_get_bounty_for_player(player_id()) <= 0)
	{
		return 0;
	}
	if (Global_1310720->f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720->f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_1068(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1314(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1918(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1319(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1919(iParam0);
	if (func_522(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1320(int iParam0)
{
	if (!func_1314(15, &Var0))
	{
		return false;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (_datafile_get_bool(&uVar5, &Var0))
	{
	}
	return uVar5;
}

bool func_1321(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1920(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1921(5))
	{
		if (func_1922(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1509(vParam0);
	if (bParam6)
	{
		iVar1 = func_389(vParam0, 1);
		if (func_116(iVar1) || func_1923(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1924(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1925())
	{
		if (func_1926(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1927(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_389(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1928(iParam3, iParam4))
	{
		return false;
	}
	if (func_1929(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1930(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_419())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1931(vParam0, bParam10) || func_1932(vParam0, bParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

int func_1322(vector3 vParam0)
{
	iVar0 = func_1933(vParam0, 0f, 0f, 0, 2);
	return func_1933(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1323(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

char* func_1324(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return "";
	}
	if (bParam0 == Global_35)
	{
		if (get_entity_model(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = get_entity_model(bParam0);
	return func_1563(iVar0);
}

char* func_1325(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1934(iVar0);
}

char* func_1326(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case 1468884243:
			return "CANOE";
		case -283162583:
			return "WAGON02X";
		case 1874711736:
			return "WAGON04X";
		case -1758092337:
			return "WAGON05X";
		case 1596452133:
			return "CHUCKWAGON000X";
		case -293448458:
			return "WAGONCIRCUS02X";
		case 1761016051:
			return "COACH2";
		case 1192745176:
			return "PRIVATECOALCAR01X";
		case 703203753:
			return "NORTHPASSENGER01X";
		case 89913743:
			return "PRIVATESTEAMER01X";
		case 572854005:
			return "PRIVATEDINING01X";
		case 822759307:
			return "UTILLIWAG";
		case -623113369:
			return "SKIFF";
		case 1493442814:
			return "HANDCART";
		case -397513868:
			return "ROWBOATSWAMP";
		case -258491284:
			return "ROWBOATSWAMP02";
	}
	return "";
}

void func_1327(char[4] cParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1686(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 74312;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1328(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1686(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

bool func_1329()
{
	return true;
}

void func_1330(char[4] cParam0, char[4] cParam1)
{
	func_1935(&(cParam0->f_7375), cParam1);
	func_397(cParam0, 33554432);
}

struct<8> func_1331(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_1332(char[4] cParam0, struct<8> Param1)
{
	func_1936(&(cParam0->f_7375), Param1);
}

bool func_1333(bool bParam0, bool bParam1)
{
	if (bParam0 != func_460())
	{
		if (bParam0)
		{
			func_1937(-1623728698, 0);
			func_408(&uLocal_882, 1);
		}
		else
		{
			func_1937(func_462(), 0);
			func_196(&uLocal_882, 1);
		}
		func_408(&iLocal_881, 2);
	}
	else if (bParam0)
	{
		func_408(&uLocal_882, 1);
	}
	else
	{
		func_196(&uLocal_882, 1);
	}
	func_463(0, 2, bParam0, 0, bParam1);
	func_463(6, 8, bParam0, 0, bParam1);
	func_463(3, 128, bParam0, 0, bParam1);
	func_463(7, 32, bParam0, 0, bParam1);
	func_463(2, 64, bParam0, 0, bParam1);
	if (func_464(bParam0))
	{
		return true;
	}
	return false;
}

bool func_1334(bool bParam0)
{
	if (bParam0)
	{
		if (!func_195(iVar1757, 16))
		{
			func_1638(0);
			func_408(&iLocal_881, 1);
		}
	}
	if (bParam0)
	{
		if (!is_bit_set(iVar875, 0))
		{
			if (!func_195(iVar878, 1))
			{
				func_1938(0, &(iLocal_2449[0]), 1018353621, 1);
				set_bit(&uLocal_878, 0);
				func_408(&iLocal_881, 1);
			}
		}
	}
	if (!is_bit_set(iVar875, 1))
	{
		if (!func_195(iVar878, 1))
		{
			func_1938(1, &(iLocal_2449[1]), 1018353621, 1);
			set_bit(&uLocal_878, 1);
			func_408(&iLocal_881, 1);
		}
	}
	if (!is_bit_set(iVar875, 2))
	{
		if (!func_195(iVar878, 1))
		{
			func_1938(3, &(iLocal_2449[2]), 1018353621, 1);
			if (func_195(iVar879, 128))
			{
				if (_is_metaped_using_component(&(iLocal_2449[2]), -134124598))
				{
					_set_ped_component_disabled(&(iLocal_2449[2]), -134124598, 1);
				}
				if (_is_metaped_using_component(&(iLocal_2449[2]), -2041904210))
				{
					_set_ped_component_disabled(&(iLocal_2449[2]), -2041904210, 1);
				}
			}
			set_bit(&uLocal_878, 2);
			func_408(&iLocal_881, 1);
		}
	}
	if (!is_bit_set(iVar875, 7))
	{
		if (!func_195(iVar878, 1))
		{
			func_1938(9, &(iLocal_2449[7]), 1018353621, 1);
			set_bit(&uLocal_878, 7);
			func_408(&iLocal_881, 1);
		}
	}
	if (!is_bit_set(iVar875, 5))
	{
		if (!func_195(iVar878, 1))
		{
			func_1938(2, &(iLocal_2449[5]), 1018353621, 1);
			set_bit(&uLocal_878, 5);
			func_408(&iLocal_881, 1);
		}
	}
	if (!is_bit_set(iVar875, 3))
	{
		if (!func_195(iVar878, 1))
		{
			func_1938(7, &(iLocal_2449[3]), 1018353621, 1);
			if (func_195(iVar879, 32))
			{
				if (_is_metaped_using_component(&(iLocal_2449[3]), -134124598))
				{
					_set_ped_component_disabled(&(iLocal_2449[3]), -134124598, 1);
				}
				if (_is_metaped_using_component(&(iLocal_2449[3]), -2041904210))
				{
					_set_ped_component_disabled(&(iLocal_2449[3]), -2041904210, 1);
				}
			}
			set_bit(&uLocal_878, 3);
			func_408(&iLocal_881, 1);
		}
	}
	if (!is_bit_set(iVar875, 4))
	{
		if (!func_195(iVar878, 1))
		{
			func_1938(6, &(iLocal_2449[4]), 1018353621, 1);
			set_bit(&uLocal_878, 4);
			func_408(&iLocal_881, 1);
		}
	}
	if (bParam0)
	{
		if (does_entity_exist(&(iLocal_2449[6])))
		{
			if (!is_bit_set(iVar875, 6))
			{
				if (!func_195(iVar878, 1))
				{
					func_1938(5, &(iLocal_2449[6]), 1018353621, 1);
					set_bit(&uLocal_878, 6);
					func_408(&iLocal_881, 1);
				}
			}
		}
		else
		{
			set_bit(&uLocal_878, 6);
		}
	}
	if (does_entity_exist(&(iLocal_2449[8])))
	{
		if (!is_bit_set(iVar875, 8))
		{
			if (!func_195(iVar878, 1))
			{
				func_1938(13, &(iLocal_2449[8]), 1018353621, 1);
				set_bit(&uLocal_878, 8);
				func_408(&iLocal_881, 1);
			}
		}
	}
	else
	{
		set_bit(&uLocal_878, 8);
	}
	if (((((((is_bit_set(iVar875, 1) && is_bit_set(iVar875, 2)) && is_bit_set(iVar875, 7)) && is_bit_set(iVar875, 5)) && is_bit_set(iVar875, 3)) && is_bit_set(iVar875, 4)) && is_bit_set(iVar875, 8)) && (!bParam0 || (((bParam0 && is_bit_set(iVar875, 0)) && is_bit_set(iVar875, 6)) && func_195(iVar1757, 16))))
	{
		return true;
	}
	func_196(&iLocal_881, 1);
	return false;
}

void func_1335(bool bParam0)
{
	if (func_231())
	{
		func_113(1);
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (bParam0)
	{
		func_47(0, 0);
	}
}

void func_1336()
{
	func_1939(Global_35, bVar2446, 0, -1, 1);
	func_1939(&(iLocal_2449[0]), &(bLocal_2459[1]), 0, -1, 1);
	func_1939(&(iLocal_2449[4]), &(bLocal_2459[2]), 0, -1, 1);
	func_1939(&(iLocal_2449[1]), &(bLocal_2459[0]), 0, -1, 1);
	func_1643(iLocal_2449[6], &iLocal_2444, -1, 1);
	func_1643(iLocal_2449[8], &iLocal_2444, 0, 1);
	func_1643(iLocal_2449[2], &iLocal_2445, -1, 1);
	func_1643(iLocal_2449[3], &iLocal_2445, 0, 1);
}

void func_1337(bool bParam0, bool bParam1)
{
	if (does_entity_exist(&(iLocal_2449[0])) && !is_entity_dead(&(iLocal_2449[0])))
	{
		func_1383(&(iLocal_2449[0]), -1569615261, bParam0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(iLocal_2449[0]), -1569615261, bParam0, 0, false, false);
	}
	if (does_entity_exist(&(iLocal_2449[5])) && !is_entity_dead(&(iLocal_2449[5])))
	{
		func_1383(&(iLocal_2449[5]), -1569615261, bParam0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(iLocal_2449[5]), -1569615261, bParam0, 0, false, false);
	}
	if (does_entity_exist(&(iLocal_2449[4])) && !is_entity_dead(&(iLocal_2449[4])))
	{
		func_1383(&(iLocal_2449[4]), -1569615261, bParam0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(iLocal_2449[4]), -1569615261, bParam0, 0, false, false);
	}
	if (does_entity_exist(&(iLocal_2449[2])) && !is_entity_dead(&(iLocal_2449[2])))
	{
		func_1383(&(iLocal_2449[2]), -1569615261, bParam0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(iLocal_2449[2]), -1569615261, bParam0, 0, false, false);
	}
	if (does_entity_exist(&(iLocal_2449[3])) && !is_entity_dead(&(iLocal_2449[3])))
	{
		func_1383(&(iLocal_2449[3]), -1569615261, bParam0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(iLocal_2449[3]), -1569615261, bParam0, 0, false, false);
	}
	if (does_entity_exist(&(iLocal_2449[1])) && !is_entity_dead(&(iLocal_2449[1])))
	{
		func_1383(&(iLocal_2449[1]), -1569615261, bParam0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(iLocal_2449[1]), -1569615261, bParam0, 0, false, false);
	}
	if (does_entity_exist(&(iLocal_2449[7])) && !is_entity_dead(&(iLocal_2449[7])))
	{
		func_1383(&(iLocal_2449[7]), -1569615261, bParam0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(iLocal_2449[7]), -1569615261, bParam0, 0, false, false);
	}
	if (bParam1)
	{
		func_1383(Global_35, -1569615261, bParam0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(Global_35, -1569615261, bParam0, 0, false, false);
	}
}

void func_1338()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_1006[iVar0]->f_5)
		{
			remove_model_hide(*Local_1006[iVar0], Local_1006[iVar0]->f_3, Local_1006[iVar0]->f_4, 1);
			Local_1006[iVar0]->f_5 = 0;
		}
		iVar0++;
	}
}

void func_1339(char[4] cParam0)
{
	switch (func_1399(cParam0))
	{
		case 0:
			func_135(cParam0, 1);
			break;
		case 1:
			func_1471(cParam0, "NBD1_FOLLOW", -1082130432, 0, 0, -1, -1, 0);
			func_27(&uLocal_1971, 0);
			iLocal_2248 = _blip_add_for_entity(408396114, iVar2441);
			if (does_blip_exist(iVar2245))
			{
				set_blip_name_from_text_file(iVar2245, "NBD1_BLIP_CONVOY");
			}
			func_135(cParam0, -1);
			break;
		case 2:
			if (does_blip_exist(iVar2245))
			{
				remove_blip(&iLocal_2248);
			}
			func_1471(cParam0, "NBD1_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			iLocal_2248 = func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
			func_135(cParam0, -1);
			break;
		case 3:
			if (func_1657(cParam0, "NBD1_IG3", 0, 0, 0))
			{
				func_135(cParam0, 2);
			}
			break;
		case 4:
			func_135(cParam0, -1);
			break;
		case 5:
			if (func_1657(cParam0, "NBD1_CITY", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 20:
			func_135(cParam0, -1);
			break;
		case 21:
			if (func_1657(cParam0, "NBD1_TROUBLE", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 22:
			if (func_1657(cParam0, "NBD1_IG1", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 47:
			func_135(cParam0, -1);
			break;
		case 48:
			func_135(cParam0, -1);
			break;
		case 49:
			func_135(cParam0, -1);
			break;
	}
}

void func_1340(char[4] cParam0)
{
	func_1940(cParam0);
	func_1941(cParam0);
	func_1942(cParam0);
	func_1349(cParam0);
	func_1943(cParam0);
	func_1944(cParam0);
	func_1945(cParam0);
	func_1946(cParam0);
	if (iVar1028 > 9)
	{
		func_1360(cParam0);
	}
	if (iVar1028 > 9)
	{
		func_1361(cParam0);
	}
}

int func_1341(char[4] cParam0)
{
	return cParam0->f_598;
}

void func_1342(char[4] cParam0, int iParam1)
{
	sLocal_1942 = "";
	switch (iParam1)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (_does_anim_scene_exist(&(uLocal_1769[0])))
			{
				_delete_anim_scene(&(uLocal_1769[0]));
			}
			break;
		case 4:
			if (_does_anim_scene_exist(&(uLocal_1769[7])))
			{
				_delete_anim_scene(&(uLocal_1769[7]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[40])))
			{
				_delete_anim_scene(&(uLocal_1769[40]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[41])))
			{
				_delete_anim_scene(&(uLocal_1769[41]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[30])))
			{
				_delete_anim_scene(&(uLocal_1769[30]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[31])))
			{
				_delete_anim_scene(&(uLocal_1769[31]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[32])))
			{
				_delete_anim_scene(&(uLocal_1769[32]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[29])))
			{
				_delete_anim_scene(&(uLocal_1769[29]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[6])))
			{
				_delete_anim_scene(&(uLocal_1769[6]));
			}
			break;
		case 5:
			if (_does_anim_scene_exist(&(uLocal_1769[11])))
			{
				_delete_anim_scene(&(uLocal_1769[11]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[7])))
			{
				_delete_anim_scene(&(uLocal_1769[7]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[40])))
			{
				_delete_anim_scene(&(uLocal_1769[40]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[41])))
			{
				_delete_anim_scene(&(uLocal_1769[41]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[30])))
			{
				_delete_anim_scene(&(uLocal_1769[30]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[31])))
			{
				_delete_anim_scene(&(uLocal_1769[31]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[32])))
			{
				_delete_anim_scene(&(uLocal_1769[32]));
			}
			break;
		case 6:
			if (_does_anim_scene_exist(&(uLocal_1769[10])))
			{
				_delete_anim_scene(&(uLocal_1769[10]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[13])))
			{
				_delete_anim_scene(&(uLocal_1769[13]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[28])))
			{
				_delete_anim_scene(&(uLocal_1769[28]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[29])))
			{
				_delete_anim_scene(&(uLocal_1769[29]));
			}
			break;
		case 7:
			if (_does_anim_scene_exist(&(uLocal_1769[10])))
			{
				_delete_anim_scene(&(uLocal_1769[10]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[13])))
			{
				_delete_anim_scene(&(uLocal_1769[13]));
			}
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			if (_does_anim_scene_exist(&(uLocal_1769[20])))
			{
				_delete_anim_scene(&(uLocal_1769[20]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[21])))
			{
				_delete_anim_scene(&(uLocal_1769[21]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[22])))
			{
				_delete_anim_scene(&(uLocal_1769[22]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[23])))
			{
				_delete_anim_scene(&(uLocal_1769[23]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[24])))
			{
				_delete_anim_scene(&(uLocal_1769[24]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[25])))
			{
				_delete_anim_scene(&(uLocal_1769[25]));
			}
			if (_does_anim_scene_exist(&(uLocal_1769[26])))
			{
				_delete_anim_scene(&(uLocal_1769[26]));
			}
			func_1470();
			func_1947();
			break;
	}
	func_175(cParam0, 0);
}

void func_1343(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1344(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1686(iVar0))
	{
		return;
	}
	iVar1 = func_1687(iParam3);
	if (!func_1688(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1345(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1346(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

bool func_1347(char[4] cParam0, bool bParam1)
{
	if (func_33(cParam0) <= 3)
	{
		if (func_1948(-1, bParam1))
		{
			iLocal_2463 = &Local_14.f_8[0];
			if (does_entity_exist(bVar2459) && !is_entity_dead(bVar2459))
			{
				task_stand_still(bVar2459, -1);
				func_871(bVar2459, func_240(4, 10), 2, 1073741824);
				set_blocking_of_non_temporary_events(bVar2459, true);
				_0x18ff3110cf47115d(bVar2459, 7, 0);
				set_ped_config_flag(bVar2459, 66, true);
				set_ped_config_flag(bVar2459, 124, false);
				set_ped_config_flag(bVar2459, 169, true);
				set_ped_reset_flag(bVar2459, 91, true);
				set_ped_config_flag(bVar2459, 297, false);
				set_ped_config_flag(bVar2459, 26, true);
				_0xe98d55c5983f2509(bVar2459);
				_0xae6004120c18df97(bVar2459, 0, 0);
				set_ped_can_ragdoll_from_player_impact(bVar2459, false);
				set_ragdoll_blocking_flags(bVar2459, 128);
				set_ped_can_torso_react_ik(bVar2459, false);
				set_ped_config_flag(bVar2459, 26, true);
				func_1949(bVar2459, 1);
				func_145(cParam0, bVar2459, "NBX_Bank_Teller", 0);
			}
			iLocal_1756 = 0;
			while (iVar1752 <= 10)
			{
				func_1949(&(Local_14.f_8[iVar1752]), 1);
				set_blocking_of_non_temporary_events(&(Local_14.f_8[iVar1752]), true);
				_0x18ff3110cf47115d(&(Local_14.f_8[iVar1752]), 7, 0);
				func_1950(iVar1752);
				if (&Local_14.f_8[iVar1752] == &Local_14.f_8[1] || &Local_14.f_8[iVar1752] == &Local_14.f_8[10])
				{
					set_ped_can_be_targetted(&(Local_14.f_8[iVar1752]), false);
				}
				if (&Local_14.f_8[iVar1752] == &Local_14.f_8[10])
				{
					remove_weapon_from_ped(&(Local_14.f_8[iVar1752]), -1471716628, true, -142743235);
					if (!has_ped_got_weapon(&(Local_14.f_8[iVar1752]), 379542007, 0, false))
					{
						_give_weapon_to_ped_2(&(Local_14.f_8[iVar1752]), 379542007, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				_0xae6004120c18df97(&(Local_14.f_8[iVar1752]), 0, 0);
				set_ped_config_flag(&(Local_14.f_8[iVar1752]), 26, true);
				iLocal_1756 = iVar1752 + 1;
			}
			return true;
		}
	}
	else
	{
		func_1951();
		return true;
	}
	return false;
}

bool func_1348(char[4] cParam0, bool bParam1)
{
	iVar0 = 1;
	if (func_1952(-1, bParam1))
	{
		iLocal_1756 = 0;
		while (iVar1752 <= 7)
		{
			if (does_entity_exist(&(Local_14.f_69[iVar1752])) && !is_entity_dead(&(Local_14.f_69[iVar1752])))
			{
				set_blocking_of_non_temporary_events(&(Local_14.f_69[iVar1752]), true);
				_0x18ff3110cf47115d(&(Local_14.f_69[iVar1752]), 7, 0);
				func_1953(iVar1752);
			}
			iLocal_1756 = iVar1752 + 1;
		}
	}
	else
	{
		return false;
	}
	if (func_1954(-1, bParam1))
	{
		iLocal_1756 = 0;
		while (iVar1752 <= 1)
		{
			if (does_entity_exist(&(Local_14.f_106[iVar1752])) && !is_entity_dead(&(Local_14.f_106[iVar1752])))
			{
				set_blocking_of_non_temporary_events(&(Local_14.f_106[iVar1752]), true);
				_0x18ff3110cf47115d(&(Local_14.f_106[iVar1752]), 7, 0);
				_0xae6004120c18df97(&(Local_14.f_106[iVar1752]), 0, 0);
			}
			iLocal_1756 = iVar1752 + 1;
		}
	}
	else
	{
		return false;
	}
	if (func_1955(-1, bParam1))
	{
		iLocal_1756 = 0;
		while (iVar1752 <= 1)
		{
			if (does_entity_exist(&(Local_14.f_101[iVar1752])) && !is_entity_dead(&(Local_14.f_101[iVar1752])))
			{
				set_entity_load_collision_flag(&(Local_14.f_101[iVar1752]), 1);
				set_vehicle_on_ground_properly(&(Local_14.f_101[iVar1752]), 0f);
				_0xba8818212633500a(&(Local_14.f_101[iVar1752]), 0, 1);
			}
			iLocal_1756 = iVar1752 + 1;
		}
	}
	else
	{
		return false;
	}
	return iVar0;
}

int func_1349(char[4] cParam0)
{
	bVar0 = true;
	iVar1 = 0;
	iVar2 = 0;
	if (iVar1029 >= 4 && iVar1029 < 11)
	{
		_0x702b75dc9d3ede56(true);
		disable_control_action(0, -1453452184, false);
		_set_far_shadows_suppressed(false);
	}
	if (iVar1029 >= 2)
	{
		func_1956(cParam0);
	}
	if (iVar1029 >= 7)
	{
		func_1957(cParam0);
	}
	if (iVar1029 >= 3 && iVar1029 < 12)
	{
		_0xe296208c273bd7f0(-1, 1750, 0, 17, 1, 0);
	}
	while (bVar0)
	{
		bVar0 = false;
		switch (iVar1029)
		{
			case 0:
				func_1958();
				func_408(&uLocal_1761, 4096);
				iLocal_1032 = 1;
				break;
			case 1:
				func_975();
				if (_0xdd0b7c5ae58f721d("script@Story@NBD1@ride_to_saint_denis") && (_does_anim_scene_exist(&(uLocal_1769[0])) && _is_anim_scene_started(&(uLocal_1769[0]), false)))
				{
					bVar0 = true;
					_0xc1799fafd2fdf52b(&(iLocal_2325[0]), 0, 0, 0);
					_0xb56d41a694e42e86(&(iLocal_2325[0]), 10208, 0, 0, -1, -1, 0);
					_0x18262cafebb5fbe1(&(iLocal_2325[0]), 10208, 0, 0, -1, -1, 0);
					end_srl();
					prefetch_srl("script@cme@NBD1_CME_SHOT3_srl");
					iLocal_1032 = 2;
				}
				break;
			case 2:
				if (func_1397(&(iLocal_2449[0]), &(iLocal_2325[3]), 1, 0) && is_srl_loaded())
				{
					bVar0 = true;
					_0xf239400e16c23e08(0, 1984);
					iLocal_1032 = 3;
				}
				break;
			case 3:
				if (_0xdd0b7c5ae58f721d(&Local_2582))
				{
					if (!func_195(iVar1758, 262144))
					{
						_0xb8b207c34285e978(&Local_2582);
						func_408(&uLocal_1761, 262144);
					}
					else
					{
						if (!func_26(&uLocal_2121))
						{
							func_237(&uLocal_2121);
						}
						if (func_238(&uLocal_2121) >= 3000 || _0xa2b1c7ef759a63ce() >= 1f)
						{
							_0x0a5a4f1979abb40e(&Local_2582);
							_0x798be43c9393632b(&Local_2582);
							if (does_entity_exist(bVar2442))
							{
								_0x226c6a4e3346d288(bVar2442, 0);
							}
							if (does_entity_exist(bVar2441))
							{
								_0x226c6a4e3346d288(bVar2441, 0);
							}
							if (!func_1959(Global_35, bVar2445, 0))
							{
								_set_ped_on_mount(Global_35, bVar2445, -1, true);
							}
							if (!func_1959(&(iLocal_2449[0]), &(bLocal_2459[1]), 0))
							{
								_set_ped_on_mount(&(iLocal_2449[0]), &(bLocal_2459[1]), -1, true);
							}
							if (!func_1959(&(iLocal_2449[1]), &(bLocal_2459[0]), 0))
							{
								_set_ped_on_mount(&(iLocal_2449[1]), &(bLocal_2459[0]), -1, true);
							}
							if (!func_1959(&(iLocal_2449[4]), &(bLocal_2459[2]), 0))
							{
								_set_ped_on_mount(&(iLocal_2449[4]), &(bLocal_2459[2]), -1, true);
							}
							set_player_control(player_id(), false, 0, false);
							func_408(&uLocal_1758, 8192);
							end_srl();
							iLocal_1032 = 4;
						}
					}
				}
				break;
			case 4:
				_0x5e3ccf03995388b5(-1246391063, 2260.5f, -1357.6f, 47.4f);
				func_60(1);
				func_1070(44, 0);
				_0xbc016635d6a73b31("script@Story@NBD1@ride_to_saint_denis", "SaintDenisBridge", 5);
				prefetch_srl("script@cme@NBD1_CME_SHOT4_srl");
				remove_ped_from_group(&(iLocal_2449[1]));
				remove_ped_from_group(&(iLocal_2449[4]));
				remove_ped_from_group(&(iLocal_2449[0]));
				func_59(7);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_871(&(bLocal_2459[1]), func_240(15, 10), 2, 1073741824);
				func_871(&(bLocal_2459[0]), func_240(15, 11), 2, 1073741824);
				func_871(&(bLocal_2459[2]), func_240(15, 12), 2, 1073741824);
				func_871(bVar2445, func_240(15, 13), 2, 1073741824);
				if (!func_1959(Global_35, bVar2445, 1))
				{
					_set_ped_on_mount(Global_35, bVar2445, -1, true);
				}
				if (!func_1959(&(iLocal_2449[0]), &(bLocal_2459[1]), 1))
				{
					_set_ped_on_mount(&(iLocal_2449[0]), &(bLocal_2459[1]), -1, true);
				}
				if (!func_1959(&(iLocal_2449[4]), &(bLocal_2459[2]), 1))
				{
					_set_ped_on_mount(&(iLocal_2449[4]), &(bLocal_2459[2]), -1, true);
				}
				if (!func_1959(&(iLocal_2449[1]), &(bLocal_2459[0]), 1))
				{
					_set_ped_on_mount(&(iLocal_2449[1]), &(bLocal_2459[0]), -1, true);
				}
				task_follow_waypoint_recording_at_offset(&(iLocal_2449[1]), sVar1877, -0.5f, 0, 4194920, -1, 0);
				task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_2449[0]), &(iLocal_2449[1]), sVar1877, -2.5f, 0f, 0, 4194920, -1, 0);
				task_follow_entity_along_waypoint_recording_at_offset(Global_35, &(iLocal_2449[1]), sVar1877, -1.5f, 0f, 0, 4194920, -1, 0);
				task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_2449[4]), &(iLocal_2449[1]), sVar1877, 0.5f, 0f, 0, 4194920, -1, 0);
				force_ped_motion_state(&(bLocal_2459[1]), -530524, false, 1, true);
				force_ped_motion_state(&(bLocal_2459[0]), -530524, false, 1, true);
				force_ped_motion_state(&(bLocal_2459[2]), -530524, false, 1, true);
				force_ped_motion_state(bVar2445, -530524, false, 1, true);
				func_237(&uLocal_2121);
				iLocal_1032 = 5;
				break;
			case 5:
				if (is_waypoint_playback_going_on_for_ped(Global_35, 0))
				{
					func_1960(Global_35, 2f);
					set_ped_min_move_blend_ratio(bVar2445, 2f);
				}
				if (is_waypoint_playback_going_on_for_ped(&(iLocal_2449[4]), 0))
				{
					func_1960(&(iLocal_2449[4]), 2f);
					set_ped_min_move_blend_ratio(&(bLocal_2459[2]), 2f);
				}
				if (is_waypoint_playback_going_on_for_ped(&(iLocal_2449[1]), 0))
				{
					func_1960(&(iLocal_2449[1]), 2f);
					set_ped_min_move_blend_ratio(&(bLocal_2459[0]), 2f);
				}
				if (is_waypoint_playback_going_on_for_ped(&(iLocal_2449[0]), 0))
				{
					func_1960(&(iLocal_2449[0]), 2f);
					set_ped_min_move_blend_ratio(&(bLocal_2459[1]), 2f);
				}
				iVar1 = (_0xea113bf9b0c0c5d7("script@Story@NBD1@ride_to_saint_denis", "SaintDenisBridge", 5) - func_1398(&uLocal_2121));
				iVar2 = (_0x465f04f68ad38197("script@Story@NBD1@ride_to_saint_denis", "SaintDenisBridge", 5) - func_1398(&uLocal_2121));
				if (_0xffe9c53deea3db0b(iVar1, 1004786182, 2518.2f, -1478.4f, 45.9f, is_srl_loaded(), iVar2))
				{
					bVar0 = true;
					end_srl();
					iLocal_1032 = 6;
				}
				break;
			case 6:
				_0xbc016635d6a73b31("script@Story@NBD1@ride_to_saint_denis", "Street1", 5);
				prefetch_srl("script@cme@NBD1_CME_SHOT5_srl");
				_0x98a7cd5ea379a854();
				if (iVar1030 < 9)
				{
					iLocal_1033 = 8;
				}
				if (iVar1032 < 4)
				{
					iLocal_1035 = 3;
				}
				func_871(&(bLocal_2459[1]), func_240(15, 14), 2, 1073741824);
				func_871(&(bLocal_2459[0]), func_240(15, 15), 2, 1073741824);
				func_871(&(bLocal_2459[2]), func_240(15, 16), 2, 1073741824);
				func_871(bVar2445, func_240(15, 17), 2, 1073741824);
				iLocal_1031 = 12;
				force_ped_motion_state(&(bLocal_2459[1]), -1415276238, false, 0, true);
				force_ped_motion_state(&(bLocal_2459[0]), -1415276238, false, 0, true);
				force_ped_motion_state(&(bLocal_2459[2]), -1415276238, false, 0, true);
				force_ped_motion_state(bVar2445, -1415276238, false, 0, true);
				task_follow_waypoint_recording(&(iLocal_2449[0]), sVar1877, 0, 4194312, -1, 0, 0, -1);
				task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_2449[4]), &(iLocal_2449[0]), sVar1877, -0.75f, -0.5f, 0, 4194312, -1, 0);
				task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_2449[1]), &(iLocal_2449[0]), sVar1877, 0.75f, -0.5f, 0, 4194312, -1, 0);
				task_follow_entity_along_waypoint_recording_at_offset(Global_35, &(iLocal_2449[0]), sVar1877, 0f, -3f, 0, 4194312, -1, 0);
				func_237(&uLocal_2121);
				iLocal_1032 = 7;
				break;
			case 7:
				if (is_waypoint_playback_going_on_for_ped(Global_35, 0))
				{
					func_1960(Global_35, 1.001f);
				}
				if (is_waypoint_playback_going_on_for_ped(&(iLocal_2449[4]), 0))
				{
					func_1960(&(iLocal_2449[4]), 1.001f);
				}
				if (is_waypoint_playback_going_on_for_ped(&(iLocal_2449[1]), 0))
				{
					func_1960(&(iLocal_2449[1]), 1.001f);
				}
				if (is_waypoint_playback_going_on_for_ped(&(iLocal_2449[0]), 0))
				{
					func_1960(&(iLocal_2449[0]), 1.001f);
				}
				if (!func_195(iVar1760, 16384))
				{
					if (func_238(&uLocal_2121) > 3000)
					{
						func_135(cParam0, 5);
						func_408(&uLocal_1763, 16384);
					}
				}
				_0x98a7cd5ea379a854();
				iVar1 = (_0xea113bf9b0c0c5d7("script@Story@NBD1@ride_to_saint_denis", "Street1", 5) - func_1398(&uLocal_2121));
				iVar2 = (_0x465f04f68ad38197("script@Story@NBD1@ride_to_saint_denis", "Street1", 5) - func_1398(&uLocal_2121));
				if (_0xffe9c53deea3db0b(iVar1, 1744194877, 2685.1f, -1414.6f, 46.1f, is_srl_loaded(), iVar2))
				{
					bVar0 = true;
					end_srl();
					iLocal_1032 = 8;
				}
				break;
			case 8:
				_0xbc016635d6a73b31("script@Story@NBD1@ride_to_saint_denis", "Street2", 5);
				prefetch_srl("script@cme@NBD1_CME_SHOT6_srl");
				_0xef1a8a484118735e();
				func_871(&(bLocal_2459[1]), func_240(15, 19), 2, 1073741824);
				func_871(&(bLocal_2459[0]), func_240(15, 20), 2, 1073741824);
				func_871(&(bLocal_2459[2]), func_240(15, 21), 2, 1073741824);
				func_871(bVar2445, func_240(15, 18), 2, 1073741824);
				force_ped_motion_state(&(bLocal_2459[1]), -1415276238, false, 0, true);
				force_ped_motion_state(&(bLocal_2459[0]), -1415276238, false, 0, true);
				force_ped_motion_state(&(bLocal_2459[2]), -1415276238, false, 0, true);
				force_ped_motion_state(bVar2445, -1415276238, false, 0, true);
				task_follow_waypoint_recording(Global_35, sVar1877, 0, 4203784, -1, 0, 0, -1);
				task_follow_waypoint_recording_at_offset(&(iLocal_2449[4]), sVar1877, -0.5f, 0, 4203784, -1, 0);
				task_follow_waypoint_recording_at_offset(&(iLocal_2449[1]), sVar1877, 0.5f, 0, 4203784, -1, 0);
				task_follow_waypoint_recording(&(iLocal_2449[0]), sVar1877, 0, 4203784, -1, 0, 0, -1);
				func_237(&uLocal_2121);
				iLocal_1032 = 9;
				break;
			case 9:
				func_1351(cParam0);
				iVar1 = (_0xea113bf9b0c0c5d7("script@Story@NBD1@ride_to_saint_denis", "Street2", 5) - func_1398(&uLocal_2121));
				iVar2 = (_0x465f04f68ad38197("script@Story@NBD1@ride_to_saint_denis", "Street2", 5) - func_1398(&uLocal_2121));
				if (_0xffe9c53deea3db0b(iVar1, 1363931261, 2613.4f, -1294.2f, 54.7f, is_srl_loaded(), iVar2))
				{
					bVar0 = true;
					iLocal_1032 = 10;
				}
				break;
			case 10:
				_0xbc016635d6a73b31("script@Story@NBD1@ride_to_saint_denis", "Arrival", 5);
				func_131(func_409(15, 22), 500f, 1, 0, 0, 0, 0);
				func_871(&(bLocal_2459[1]), func_240(15, 22), 2, 1073741824);
				func_871(&(bLocal_2459[0]), func_240(15, 23), 2, 1073741824);
				func_871(&(bLocal_2459[2]), func_240(15, 24), 2, 1073741824);
				func_871(bVar2445, func_240(15, 25), 2, 1073741824);
				func_871(&(iLocal_2449[2]), func_240(3, 21), 2, 1073741824);
				force_ped_motion_state(&(bLocal_2459[1]), -1415276238, false, 0, true);
				force_ped_motion_state(&(bLocal_2459[0]), -1415276238, false, 0, true);
				force_ped_motion_state(&(bLocal_2459[2]), -1415276238, false, 0, true);
				force_ped_motion_state(bVar2445, -1415276238, false, 0, true);
				if (func_1961() || func_1351(cParam0))
				{
					func_1962();
				}
				open_sequence_task(&uLocal_2525);
				task_follow_nav_mesh_to_coord(0, func_409(4, 6), 1f, 20000, 1f, 1050628, func_410(4, 6));
				close_sequence_task(iVar2522);
				task_perform_sequence(Global_35, iVar2522);
				clear_sequence_task(&uLocal_2525);
				iLocal_1031 = 13;
				func_237(&uLocal_2121);
				iLocal_1032 = 11;
				break;
			case 11:
				func_1351(cParam0);
				iVar1 = (_0xea113bf9b0c0c5d7("script@Story@NBD1@ride_to_saint_denis", "Arrival", 5) - func_1398(&uLocal_2121));
				iVar2 = (_0x465f04f68ad38197("script@Story@NBD1@ride_to_saint_denis", "Arrival", 5) - func_1398(&uLocal_2121));
				if (_0xffe9c53deea3db0b(iVar1, 0, func_409(4, 6), true, iVar2))
				{
					_0xa54d643d0773eb65("script@Story@NBD1@ride_to_saint_denis", "Arrival", 5);
					set_player_control(player_id(), true, 0, false);
					bVar0 = true;
					func_882(&(bLocal_2459[1]), func_1665(&(uLocal_1769[1]), "Horse_01", "pblMain_Dutch"), func_1666(&(uLocal_1769[1]), "Horse_01", "pblMain_Dutch"), 34, 1073741824);
					func_882(&(bLocal_2459[0]), func_1665(&(uLocal_1769[2]), "Horse_01^1", "pblMain_John"), func_1666(&(uLocal_1769[2]), "Horse_01^1", "pblMain_John"), 34, 1073741824);
					func_882(&(bLocal_2459[2]), func_1665(&(uLocal_1769[3]), "Horse_01^2", "pblMain_Micah"), func_1666(&(uLocal_1769[3]), "Horse_01^2", "pblMain_Micah"), 34, 1073741824);
					func_882(bVar2445, func_409(4, 6), func_410(4, 6), 2, 1073741824);
					_0x9587913b9e772d29(bVar2442, 0);
					iVar3 = _find_closest_active_scenario_point_of_type(func_409(4, 6), -1805387726, 2f, 0, false);
					task_hitch_animal(Global_35, iVar3, 0);
					set_ped_config_flag(bVar2445, 136, true);
					_0x3946fc742ac305cd(player_id(), bVar2445, "NBD1_GoBank", 0f, 0f, 0f, bVar2445, 0);
					Local_236[1]->f_3 = 1;
					if (func_1961() || func_1351(cParam0))
					{
						iLocal_1031 = 19;
					}
					_0xd17672447692478e(&(iLocal_2325[0]), 0);
					_0x74c2b3dc0b294102(&(iLocal_2325[0]));
					_0xa1cfb35069d23c23(&(iLocal_2325[0]));
					set_gameplay_cam_relative_heading(0f, 1f);
					func_1673(cParam0, &(iLocal_2449[2]), 1105014447, 422991367, 0, 0);
					func_135(cParam0, 11);
					_0xa0cefcea390aab9b(0);
					end_srl();
					_0x43037abfe214a851();
					func_60(0);
					iLocal_1032 = 12;
				}
				else
				{
					_0x702b75dc9d3ede56(true);
				}
				break;
			case 12:
				set_player_control(player_id(), true, 0, false);
				func_1070(44, 1);
				func_196(&uLocal_1761, 4096);
				return 1;
		}
	}
	func_406(cParam0, 0);
	return 0;
}

void func_1350(char[4] cParam0)
{
	func_1369(1);
	switch (func_33(cParam0))
	{
		case 1:
			func_1963(1, func_240(3, 22), 0);
			func_1963(0, func_240(3, 24), 0);
			func_1963(2, func_240(3, 23), 0);
			func_871(func_277(cParam0), func_240(3, 25), 2, 1073741824);
			func_1939(&(iLocal_2449[0]), &(bLocal_2459[1]), 0, -1, 1);
			func_1939(&(iLocal_2449[1]), &(bLocal_2459[0]), 0, -1, 1);
			func_1939(&(iLocal_2449[4]), &(bLocal_2459[2]), 0, -1, 1);
			func_1939(Global_35, func_277(cParam0), 0, -1, 1);
			vVar0 = { get_entity_coords(&(iLocal_2449[4]), true, false) };
			break;
		case 2:
			func_871(Global_35, func_240(4, 18), 2, 1073741824);
			func_1409(1, func_240(4, 12), 1);
			func_1409(0, func_240(4, 11), 1);
			func_1409(4, func_240(4, 15), 1);
			func_1409(2, func_240(4, 14), 1);
			func_1409(5, func_240(4, 17), 1);
			func_1409(3, func_240(4, 16), 1);
			func_1409(7, func_240(4, 13), 1);
			func_1963(1, func_240(3, 18), 0);
			func_1963(0, func_240(3, 17), 0);
			func_1963(2, func_240(3, 19), 0);
			func_871(bVar2445, func_240(4, 6), 2, 1073741824);
			break;
		case 3:
			func_871(Global_35, func_240(5, 0), 2, 1073741824);
			func_1409(1, func_240(5, 8), 1);
			func_1409(0, func_240(5, 1), 1);
			func_1409(4, func_240(5, 9), 1);
			func_1409(3, func_240(5, 4), 1);
			func_1409(2, func_240(5, 5), 1);
			func_1409(7, func_240(5, 7), 1);
			func_1409(5, func_240(5, 6), 1);
			func_871(bVar2445, func_240(4, 6), 2, 1073741824);
			func_1963(1, func_240(3, 18), 0);
			func_1963(0, func_240(3, 17), 0);
			func_1963(2, func_240(3, 19), 0);
			func_871(bVar2442, func_240(3, 16), 2, 1073741824);
			break;
		case 4:
			func_1409(0, func_240(6, 3), 1);
			func_1409(1, func_240(6, 5), 1);
			func_1409(4, func_240(6, 4), 1);
			func_1409(3, func_240(6, 7), 1);
			func_1409(2, func_240(6, 1), 1);
			func_1409(7, func_240(6, 2), 1);
			func_1409(5, func_240(6, 0), 1);
			func_1369(1);
			break;
		case 5:
			func_871(Global_35, func_240(6, 6), 2, 1073741824);
			func_1409(0, func_240(6, 3), 1);
			func_1409(1, func_240(6, 5), 1);
			func_1409(4, func_240(6, 4), 1);
			func_1409(3, func_240(6, 7), 1);
			func_1409(2, func_240(6, 1), 1);
			func_1409(7, func_240(6, 2), 1);
			func_1409(5, func_240(6, 0), 1);
			break;
		case 6:
			func_871(Global_35, func_240(8, 0), 2, 1073741824);
			func_1409(0, func_240(6, 3), 1);
			func_1409(1, func_240(6, 5), 1);
			func_1409(4, func_240(6, 4), 1);
			func_1409(3, func_240(6, 7), 1);
			func_1409(2, func_240(6, 1), 1);
			func_1409(7, func_240(6, 2), 1);
			func_1409(5, func_240(6, 0), 1);
			break;
		case 7:
			func_871(Global_35, func_240(8, 1), 2, 1073741824);
			func_871(&(iLocal_2449[6]), func_240(6, 10), 2, 1073741824);
			func_1409(0, func_240(6, 3), 1);
			func_1409(1, func_240(6, 5), 1);
			func_1409(4, func_240(6, 4), 1);
			func_1409(3, func_240(6, 7), 1);
			func_1409(2, func_240(6, 1), 1);
			func_1409(7, func_240(6, 2), 1);
			func_1409(5, func_240(6, 0), 1);
			break;
		case 8:
			func_1409(0, func_240(8, 3), 1);
			func_1409(5, func_240(8, 7), 1);
			func_1409(2, func_240(8, 9), 1);
			func_1409(4, func_240(8, 11), 1);
			func_1409(3, func_240(8, 5), 1);
			func_1409(7, func_240(9, 2), 1);
			break;
		case 9:
			func_871(Global_35, func_240(0, 4), 2, 1073741824);
			func_1409(0, func_240(0, 0), 1);
			func_1409(5, func_240(0, 2), 1);
			func_1409(2, func_240(0, 3), 1);
			func_1409(4, func_240(0, 1), 1);
			func_1409(3, func_240(0, 5), 1);
			break;
		case 10:
			func_871(Global_35, func_240(2, 0), 2, 1073741824);
			func_1409(0, func_240(2, 9), 1);
			func_1409(5, func_240(2, 7), 1);
			func_1409(2, func_240(2, 8), 1);
			func_1409(4, func_240(2, 11), 1);
			func_1409(3, func_240(2, 6), 1);
			break;
		case 11:
			func_871(Global_35, func_240(15, 8), 2, 1073741824);
			func_1409(0, func_240(2, 26), 1);
			func_1409(5, func_240(15, 27), 1);
			func_1409(2, func_240(15, 28), 1);
			func_1409(4, func_240(15, 29), 1);
			func_1409(3, func_240(15, 26), 1);
			break;
		case 25:
			func_1409(0, func_240(2, 26), 1);
			func_1409(5, func_240(2, 21), 1);
			func_1409(2, func_240(2, 22), 1);
			func_1409(4, func_240(2, 20), 1);
			func_1409(3, func_240(2, 23), 1);
			break;
		default:
			break;
	}
}

bool func_1351(char[4] cParam0)
{
	bVar0 = true;
	switch (iVar928)
	{
		case 0:
			if (((_does_anim_scene_exist(&(uLocal_1769[4])) && _does_anim_scene_exist(&(uLocal_1769[1]))) && _does_anim_scene_exist(&(uLocal_1769[2]))) && _does_anim_scene_exist(&(uLocal_1769[3])))
			{
				iLocal_931 = 2;
			}
			break;
		case 2:
			func_979();
			if (!does_entity_exist(iVar2548))
			{
				iLocal_2551 = create_object(iVar2596, func_409(3, 18), true, true, false, false, true);
			}
			if (!does_entity_exist(&(iLocal_2449[0])))
			{
			}
			if (!does_entity_exist(&(iLocal_2449[1])))
			{
			}
			if (!does_entity_exist(&(iLocal_2449[4])))
			{
			}
			if (!does_entity_exist(&(iLocal_2449[2])))
			{
			}
			if (!does_entity_exist(&(bLocal_2459[1])))
			{
			}
			if (!does_entity_exist(&(bLocal_2459[0])))
			{
			}
			if (!does_entity_exist(&(bLocal_2459[2])))
			{
			}
			if (!does_entity_exist(iVar2548))
			{
			}
			if (((((((does_entity_exist(&(iLocal_2449[0])) && does_entity_exist(&(iLocal_2449[1]))) && does_entity_exist(&(iLocal_2449[4]))) && does_entity_exist(&(iLocal_2449[2]))) && does_entity_exist(&(bLocal_2459[1]))) && does_entity_exist(&(bLocal_2459[0]))) && does_entity_exist(&(bLocal_2459[2]))) && does_entity_exist(iVar2548))
			{
				set_model_as_no_longer_needed(iVar2595);
				set_model_as_no_longer_needed(iVar2596);
				iLocal_931 = 3;
			}
			break;
		case 3:
			set_anim_scene_entity(&(uLocal_1769[4]), "BillWilliamson", &(iLocal_2449[2]), 0);
			set_anim_scene_entity(&(uLocal_1769[1]), "dutch", &(iLocal_2449[0]), 0);
			set_anim_scene_entity(&(uLocal_1769[1]), "Horse_01", &(bLocal_2459[1]), 0);
			set_anim_scene_entity(&(uLocal_1769[1]), "p_cigarlit01x", iVar2548, 0);
			set_anim_scene_entity(&(uLocal_1769[2]), "JohnMarston", &(iLocal_2449[1]), 0);
			set_anim_scene_entity(&(uLocal_1769[2]), "Horse_01^1", &(bLocal_2459[0]), 0);
			set_anim_scene_entity(&(uLocal_1769[3]), "MicahBell", &(iLocal_2449[4]), 0);
			set_anim_scene_entity(&(uLocal_1769[3]), "Horse_01^2", &(bLocal_2459[2]), 0);
			func_1964(cParam0, &(uLocal_1769[1]));
			func_1964(cParam0, &(uLocal_1769[4]));
			func_1964(cParam0, &(uLocal_1769[3]));
			func_1964(cParam0, &(uLocal_1769[2]));
			iLocal_931 = 1;
			break;
		case 1:
			if (!_is_anim_scene_loaded(&(uLocal_1769[1]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[1]), true))
				{
					func_1964(cParam0, &(uLocal_1769[1]));
				}
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[1]), "pblMain_Dutch"))
			{
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[4]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[4]), true))
				{
					func_1964(cParam0, &(uLocal_1769[4]));
				}
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[4]), "pblMain_Bill"))
			{
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[3]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[3]), true))
				{
					func_1964(cParam0, &(uLocal_1769[3]));
				}
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[3]), "pblMain_Micah"))
			{
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[2]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[2]), true))
				{
					func_1964(cParam0, &(uLocal_1769[2]));
				}
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[2]), "pblMain_John"))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_931 = 5;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_1352(var uParam0)
{
	if (!does_group_exist(*uParam0))
	{
		*uParam0 = create_group(0);
		set_group_formation(*uParam0, 5);
	}
}

void func_1353(vector3 vParam0, var uParam3, int iParam4)
{
	if (does_group_exist(*uParam3))
	{
		add_custom_formation_location(*uParam3, vParam0, iParam4);
	}
}

void func_1354(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam4)
	{
		set_ped_config_flag(iParam0, 279, true);
		set_ped_as_group_leader(iParam0, iParam1, false);
		return;
	}
	if (bParam5)
	{
		_0xbad2a311667a50d7(iParam0, 1);
	}
	set_ped_can_ragdoll(iParam0, false);
	if (!is_ped_in_group(iParam0))
	{
		set_ped_config_flag(iParam0, 279, true);
		set_ped_as_group_member(iParam0, iParam1);
	}
	if (iParam3 != -1 && (iParam2 == 0 || bParam5))
	{
		if (is_ped_in_group(iParam0))
		{
			_0x0e9e95fdedcc9d35(iParam0, iParam3, 0);
		}
	}
	set_ped_config_flag(iParam0, 280, true);
}

void func_1355(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (does_group_exist(iVar2436))
	{
		add_custom_formation_location(iVar2436, fParam2, fParam3, 0f, 3);
	}
	if (!is_entity_dead(iParam0))
	{
		if (_0x2009f8ab7a5e9d6d(get_player_index()))
		{
			_0x12e09e278c6c29b7(player_id());
		}
		_0xac22aa6df4d1c1de(get_player_index(), iParam0, fParam2, fParam3, 2, 2, 1);
		_0x086549f3b0381cb1(player_id(), 1);
	}
}

void func_1356(char[4] cParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(&(iLocal_2449[2])))
	{
		if (is_ped_in_group(&(iLocal_2449[2])))
		{
			set_ped_config_flag(&(iLocal_2449[2]), 279, false);
			remove_ped_from_group(&(iLocal_2449[2]));
		}
	}
	if (func_33(cParam0) < iLocal_225)
	{
		func_201(cParam0, &(iLocal_2449[2]), 1);
	}
	func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
	func_1471(cParam0, "NBD1_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
	_0x154b7e841ac7412f(iVar2437, 1);
	if (!bParam2)
	{
		iLocal_1035 = 1;
	}
	func_408(&uLocal_1757, 32);
	if (bParam1)
	{
		if (is_ped_in_group(&(iLocal_2449[0])))
		{
			remove_ped_from_group(&(iLocal_2449[0]));
		}
	}
	if (!is_entity_dead(&(iLocal_2449[0])))
	{
		task_follow_waypoint_recording(&(iLocal_2449[0]), sVar1875, 0, 25864, -1, 0, 0, -1);
	}
}

void func_1357(char[4] cParam0)
{
	func_1966(&(cParam0->f_7375));
}

void func_1358(char[4] cParam0)
{
	switch (func_1399(cParam0))
	{
		case 2:
			func_1471(cParam0, "NBD1_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
			func_135(cParam0, -1);
			break;
		case 3:
			func_135(cParam0, -1);
			break;
		case 4:
			if (func_1657(cParam0, "NBD1_IG4", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 6:
			func_135(cParam0, -1);
			break;
		case 7:
			func_135(cParam0, -1);
			break;
		case 8:
			if (!func_1377())
			{
				if (func_1657(cParam0, "NBD1_HITCH", 4, 0, 0))
				{
					iLocal_2248 = func_1967(-308585968, &(iLocal_2325[75]), 1);
					func_1968();
					func_135(cParam0, -1);
				}
			}
			break;
		case 9:
			func_1471(cParam0, "NBD1_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, -1);
			break;
		case 10:
			if (func_1657(cParam0, "NBD1_IG4_GEST", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 11:
			if (func_1657(cParam0, "NBD1_HEXP", 4, 0, 0))
			{
				func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
				func_135(cParam0, -1);
			}
			break;
		case 20:
			func_135(cParam0, -1);
			break;
		case 40:
			func_135(cParam0, -1);
			break;
	}
}

void func_1359(char[4] cParam0)
{
	func_1969(cParam0);
	func_1970(cParam0, &uLocal_2642, &uLocal_2670);
	func_1971(cParam0, &uLocal_2613, &uLocal_2641);
	func_1972(cParam0);
	func_1941(cParam0);
	func_1973();
	func_1349(cParam0);
	func_1365(cParam0);
	func_1974(cParam0);
	func_1944(cParam0);
	func_1945(cParam0);
	func_1943(cParam0);
	func_1946(cParam0);
	func_1975();
	func_1976(cParam0);
}

void func_1360(char[4] cParam0)
{
	switch (iVar1030)
	{
		case 0:
			break;
		case 1:
			func_1977();
			set_entity_invincible(&(iLocal_2449[6]), true);
			set_entity_invincible(&(iLocal_2449[8]), true);
			func_201(cParam0, &(iLocal_2449[6]), 1);
			func_201(cParam0, &(iLocal_2449[8]), 1);
			iLocal_1033 = 2;
			break;
		case 2:
			if (does_entity_exist(bVar2441) && !is_entity_dead(bVar2441))
			{
				if (((((func_1978(&(iLocal_2449[6]), &(iLocal_2449[0])) > 125f && func_1978(&(iLocal_2449[6]), Global_35) > 125f) && !is_tracked_ped_visible(&(iLocal_2449[6]))) && !func_1377()) && !is_entity_on_screen(bVar2441)) || is_entity_in_volume(bVar2441, &(iLocal_2325[15]), true, 0))
				{
					iLocal_1033 = 3;
				}
			}
			break;
		case 3:
			if (func_1101(&(iLocal_2449[6]), 0))
			{
				set_entity_invincible(&(iLocal_2449[6]), false);
				func_871(&(iLocal_2449[6]), func_240(3, 28), 2, 1073741824);
			}
			iLocal_1033 = 4;
			break;
		case 4:
			if (func_1101(&(iLocal_2449[8]), 0))
			{
				set_entity_invincible(&(iLocal_2449[8]), false);
				func_276(cParam0, 13, &(iLocal_2449[8]), 0, 1, 0, 0);
			}
			iLocal_1033 = 5;
			break;
		case 5:
			if (!is_entity_dead(&(iLocal_2449[5])))
			{
				func_871(&(iLocal_2449[5]), func_240(3, 13), 2, 1073741824);
				set_entity_load_collision_flag(&(iLocal_2449[5]), 1);
			}
			iLocal_1033 = 6;
			break;
		case 6:
			if (!is_entity_dead(&(iLocal_2449[7])))
			{
				func_871(&(iLocal_2449[7]), func_240(3, 12), 2, 1073741824);
				set_entity_load_collision_flag(&(iLocal_2449[7]), 1);
			}
			iLocal_1033 = 7;
			break;
		case 7:
			if (does_entity_exist(bVar2441))
			{
				func_871(bVar2441, func_240(3, 28), 2, 1073741824);
			}
			if (does_entity_exist(bVar2441))
			{
				delete_vehicle(&iLocal_2444);
			}
			iLocal_1033 = 9;
			break;
		case 8:
			func_1620(cParam0);
			iLocal_1033 = 9;
			break;
		case 9:
			break;
	}
}

void func_1361(char[4] cParam0)
{
	switch (iVar1032)
	{
		case 0:
			break;
		case 1:
			func_1979();
			func_201(cParam0, &(iLocal_2449[2]), 1);
			func_201(cParam0, &(iLocal_2449[3]), 1);
			iLocal_1035 = 2;
			break;
		case 2:
			if (does_entity_exist(bVar2442) && !is_entity_dead(bVar2442))
			{
				if (((((func_1978(&(iLocal_2449[2]), &(iLocal_2449[0])) > 75f && func_1978(&(iLocal_2449[2]), Global_35) > 75f) && !is_tracked_ped_visible(&(iLocal_2449[2]))) && !func_1377()) && !is_entity_on_screen(bVar2442)) || is_entity_in_volume(bVar2442, &(iLocal_2325[16]), true, 0))
				{
					if (!is_entity_dead(&(iLocal_2449[2])))
					{
						set_entity_load_collision_flag(&(iLocal_2449[2]), 1);
						clear_ped_tasks_immediately(&(iLocal_2449[2]), false, true);
						_0xe0b61ed8bb37712f(&(iLocal_2449[2]));
						func_871(&(iLocal_2449[2]), func_240(3, 21), 2, 1073741824);
						task_stand_still(&(iLocal_2449[2]), -1);
					}
					if (!is_entity_dead(bVar2442))
					{
						func_871(bVar2442, func_240(3, 16), 2, 1073741824);
						set_entity_velocity(bVar2442, 0f, 0f, 0f);
						freeze_entity_position(bVar2442, true);
					}
					if (!is_entity_dead(&(iLocal_2449[3])))
					{
						func_871(&(iLocal_2449[3]), func_240(4, 7), 2, 1073741824);
						set_entity_load_collision_flag(&(iLocal_2449[7]), 1);
					}
					iLocal_1035 = 4;
				}
			}
			break;
		case 3:
			func_1980();
			iLocal_1035 = 4;
			break;
		case 4:
			break;
	}
}

void func_1362(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	if (bParam4)
	{
	}
	if (is_entity_dead(bParam0))
	{
		return;
	}
	if (!is_ped_human(bParam0))
	{
		return;
	}
	if (func_1981(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((bParam5 < 0f || bParam6 < 0f) || bParam7 < 0f) || bParam8 < 0f)
	{
		return;
	}
	if (((((!bParam5 > bParam6 || !bParam5 > bParam7) || !bParam5 > bParam8) || !bParam6 > bParam7) || !bParam6 > bParam8) || !bParam7 > bParam8)
	{
		return;
	}
	iVar0 = get_mount(bParam0);
	if (is_ped_in_any_vehicle(bParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(bParam0, false);
	}
	bVar3 = func_973(bParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_1982() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.75f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam6 && bVar3 > bParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(bParam0, 1.5f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.25f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.25f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(bParam0, 1f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (_0x33fa048675821da7(iVar0, 3))
				{
					_0x06d26a96ca1bca75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
						{
							if (_0x33fa048675821da7(iVar0, 3))
							{
								_0x06d26a96ca1bca75(iVar2, 3, 0f, 0);
							}
						}
					}
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (bVar3 <= bParam8)
		{
			if (bParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_1983(bParam0, 501393341))
			{
				task_dismount_animal(bParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_1983(bParam0, -828834893))
			{
				task_leave_any_vehicle(bParam0, 0, iParam12);
			}
		}
	}
}

bool func_1363(char[4] cParam0)
{
	func_1362(Global_35, func_409(4, 6), 0, 50f, 30f, 10f, 1084227584, 1, 1, 1, 0);
	if (!func_195(iVar1754, 65536))
	{
		if (is_entity_in_volume(Global_35, &(iLocal_2325[31]), true, 0) || func_973(Global_35, func_409(4, 6), 1) <= 10f)
		{
			func_408(&uLocal_1757, 65536);
		}
	}
	else
	{
		switch (iVar1033)
		{
			case 0:
				iLocal_1036 = 1;
				break;
			case 1:
				if (func_1984(7) || (func_1397(bVar2445, &(iLocal_2325[76]), 1, 0) && !func_1959(Global_35, bVar2445, 0)))
				{
					if (!func_878(bVar2445))
					{
						if (func_973(bVar2445, func_409(4, 6), 1) < func_973(bVar2445, func_409(4, 21), 1))
						{
							task_follow_nav_mesh_to_coord(bVar2445, func_409(4, 6), 1f, 20000, 0.25f, 0, func_410(4, 6));
						}
						else
						{
							task_follow_nav_mesh_to_coord(bVar2445, func_409(4, 21), 1f, 20000, 0.25f, 0, func_410(4, 21));
						}
					}
					if (does_blip_exist(iVar2245))
					{
						remove_blip(&iLocal_2248);
					}
					func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
					iLocal_1036 = 2;
				}
				break;
			case 2:
				return true;
		}
	}
	return false;
}

bool func_1364()
{
	if (is_ped_on_mount(Global_35))
	{
		return false;
	}
	if (is_entity_in_volume(Global_35, &(iLocal_2325[6]), true, 0))
	{
		return true;
	}
	return false;
}

bool func_1365(char[4] cParam0)
{
	if (func_1985(cParam0) && func_1986(cParam0))
	{
		if (!func_195(iVar1763, 256))
		{
			func_1987();
			func_408(&uLocal_1766, 256);
		}
		return true;
	}
	return false;
}

bool func_1366()
{
	return true;
}

bool func_1367(char[4] cParam0)
{
	iVar0 = 1;
	switch (func_33(cParam0))
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			if (!_0xa0bc8faed8cfeb3c(Global_35))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_2449[0])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_2449[2])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_2449[5])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_2449[7])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_2449[4])))
			{
				iVar0 = 0;
			}
			break;
		case 3:
			if (!_0xa0bc8faed8cfeb3c(bVar2460))
			{
				iVar0 = 0;
			}
			break;
		case 4:
			iLocal_1756 = 0;
			while (iVar1753 < 6)
			{
				if (does_entity_exist(&(Local_14.f_22[iVar1753])))
				{
					if (!_0xa0bc8faed8cfeb3c(&(Local_14.f_22[iVar1753])))
					{
						iVar0 = 0;
					}
				}
				iLocal_1756 = iVar1753 + 1;
			}
			break;
		case 5:
			iLocal_1756 = 0;
			while (iVar1753 < 6)
			{
				if (does_entity_exist(&(Local_14.f_22[iVar1753])))
				{
					if (!_0xa0bc8faed8cfeb3c(&(Local_14.f_22[iVar1753])))
					{
						iVar0 = 0;
					}
				}
				iLocal_1756 = iVar1753 + 1;
			}
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!_0xa0bc8faed8cfeb3c(Global_35))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_2449[0])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_2449[2])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_2449[5])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_2449[7])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_2449[4])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_2449[2])))
			{
				iVar0 = 0;
			}
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			if (!_0xa0bc8faed8cfeb3c(&(Local_14.f_120[5])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(Local_14.f_120[6])))
			{
				iVar0 = 0;
			}
			break;
	}
	return iVar0;
}

void func_1368(int iParam0, int iParam1, bool bParam2)
{
	func_1742(iParam0, 0, 0);
	if (func_1743(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_1369(bool bParam0)
{
	iLocal_1756 = 0;
	while (iVar1753 < 9)
	{
		if (!is_entity_dead(&(iLocal_2449[iVar1753])))
		{
			set_blocking_of_non_temporary_events(&(iLocal_2449[iVar1753]), bParam0);
			set_ped_config_flag(&(iLocal_2449[iVar1753]), 66, true);
		}
		iLocal_1756 = iVar1753 + 1;
	}
}

void func_1370()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_570(iVar0);
		func_571(iVar0);
		iVar0++;
	}
}

void func_1371(bool bParam0)
{
	if (does_entity_exist(bParam0))
	{
		_0x437c08db4febe2bd(bParam0, "Cautious", 1f, -1);
	}
}

void func_1372()
{
	func_1371(&(iLocal_2449[1]));
	func_1371(&(iLocal_2449[7]));
}

bool func_1373(bool bParam0)
{
	iVar0 = 1;
	iLocal_1756 = 0;
	while (iVar1753 <= 7)
	{
		if (does_entity_exist(&(Local_14.f_69[iVar1753])))
		{
			if (func_1101(&(Local_14.f_69[iVar1753]), 0))
			{
				if (!is_entity_on_screen(&(Local_14.f_69[iVar1753])))
				{
					delete_ped(Local_14.f_69[iVar1753]);
					if (bParam0)
					{
						return false;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		iLocal_1756 = iVar1753 + 1;
	}
	iLocal_1756 = 0;
	while (iVar1753 <= 1)
	{
		if (does_entity_exist(&(Local_14.f_106[iVar1753])))
		{
			if (func_1101(&(Local_14.f_106[iVar1753]), 0))
			{
				if (!is_entity_on_screen(&(Local_14.f_106[iVar1753])))
				{
					delete_ped(Local_14.f_106[iVar1753]);
					if (bParam0)
					{
						return false;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		iLocal_1756 = iVar1753 + 1;
	}
	iLocal_1756 = 0;
	while (iVar1753 <= 1)
	{
		if (does_entity_exist(&(Local_14.f_101[iVar1753])))
		{
			if (!is_entity_on_screen(&(Local_14.f_101[iVar1753])))
			{
				delete_vehicle(Local_14.f_101[iVar1753]);
				if (bParam0)
				{
					return false;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		iLocal_1756 = iVar1753 + 1;
	}
	return iVar0;
}

void func_1374()
{
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		iLocal_1859[iVar0] = -1;
		iVar0++;
	}
}

void func_1375(char[4] cParam0)
{
	switch (func_1399(cParam0))
	{
		case 1:
			func_1471(cParam0, "NBD1_RE_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
			func_135(cParam0, -1);
			break;
		case 2:
			if (!func_1377())
			{
				if (func_1657(cParam0, "NBD1_BIB_OBJ3", 4, 0, 0))
				{
					func_201(cParam0, &(iLocal_2449[0]), 1);
					func_486(&iLocal_2248);
					if (!does_blip_exist(iVar2245))
					{
						iLocal_2248 = _blip_add_for_entity(-1749618580, iVar2460);
						_blip_set_modifier(iVar2245, -401963276);
						set_blip_name_from_text_file(iVar2245, "NBD1_BANKM");
					}
					func_135(cParam0, -1);
				}
			}
			break;
		case 8:
			if (func_1657(cParam0, "NBD1_OPEN", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 9:
			if (func_1657(cParam0, "NBD1_FLW", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 10:
			if (func_1657(cParam0, "NBD1_PUBKILL", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 30:
			if (func_1657(cParam0, "NBD1_WALKOUT", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
	}
}

void func_1376(char[4] cParam0)
{
	func_1988(cParam0);
	func_1382(cParam0);
	func_1989(cParam0);
	func_1990();
	func_1991();
	func_1992();
	func_1993();
	func_1976(cParam0);
	func_1994();
	func_1995(cParam0);
}

bool func_1377()
{
	return func_1996(1);
}

void func_1378()
{
	if (!is_entity_dead(&(iLocal_2449[3])))
	{
		freeze_entity_position(&(iLocal_2449[3]), false);
	}
}

bool func_1379(char[4] cParam0, bool bParam1)
{
	if (func_1997(-1, bParam1))
	{
		if (func_1423(-1, bParam1))
		{
			if (func_1998())
			{
				_set_entity_coords_and_heading(&(Local_14.f_80[1]), func_1999(8, 1), func_2000(8, 1), true, false, true);
				set_vehicle_on_ground_properly(&(Local_14.f_80[1]), 0f);
				iLocal_1756 = 0;
				while (iVar1752 < 2)
				{
					if (!is_entity_dead(&(Local_14.f_80[iVar1752])))
					{
						if (!is_entity_attached(&(Local_14.f_80[iVar1752])))
						{
							freeze_entity_position(&(Local_14.f_80[iVar1752]), true);
						}
						set_entity_visible(&(Local_14.f_80[iVar1752]), false);
						set_entity_collision(&(Local_14.f_80[iVar1752]), false, false);
						_0x18ff3110cf47115d(&(Local_14.f_80[iVar1752]), 7, 0);
					}
					iLocal_1756 = iVar1752 + 1;
				}
				iLocal_1756 = 0;
				while (iVar1752 < 6)
				{
					if (!is_entity_dead(&(Local_14.f_22[iVar1752])))
					{
						set_blocking_of_non_temporary_events(&(Local_14.f_22[iVar1752]), true);
						if (!is_entity_attached(&(Local_14.f_22[iVar1752])))
						{
							freeze_entity_position(&(Local_14.f_22[iVar1752]), true);
						}
						set_entity_visible(&(Local_14.f_22[iVar1752]), false);
						set_entity_collision(&(Local_14.f_22[iVar1752]), false, false);
						_0x18ff3110cf47115d(&(Local_14.f_22[iVar1752]), 7, 0);
						set_ped_combat_range(&(Local_14.f_22[iVar1752]), 3);
						if (!func_195(iVar876, 1))
						{
							if (iVar1752 == 1)
							{
								_set_ped_body_component(&(Local_14.f_22[iVar1752]), 816175408);
								_update_ped_variation(&(Local_14.f_22[iVar1752]), false, true, true, true, false);
								func_408(&uLocal_880, 1);
							}
						}
						if (!func_195(iVar876, 2))
						{
							if (iVar1752 == 2)
							{
								_set_ped_body_component(&(Local_14.f_22[iVar1752]), 525317764);
								_update_ped_variation(&(Local_14.f_22[iVar1752]), false, true, true, true, false);
								func_408(&uLocal_880, 2);
							}
						}
					}
					iLocal_1756 = iVar1752 + 1;
				}
				func_1407(cParam0);
				return true;
			}
		}
	}
	return false;
}

bool func_1380(char[4] cParam0, bool bParam1)
{
	bVar0 = true;
	switch (iVar944)
	{
		case 0:
			if (_does_anim_scene_exist(&(uLocal_1769[40])) && _does_anim_scene_exist(&(uLocal_1769[41])))
			{
				iLocal_948 = 2;
			}
			break;
		case 2:
			bVar0 = true;
			func_1742(1751238140, 0, 0);
			if (bVar0)
			{
				iLocal_948 = 3;
			}
			break;
		case 3:
			set_anim_scene_entity(&(uLocal_1769[40]), "ARTHUR", Global_35, 0);
			set_anim_scene_entity(&(uLocal_1769[40]), "Dutch", &(iLocal_2449[0]), 0);
			set_anim_scene_entity(&(uLocal_1769[40]), "S_M_M_BankClerk_01", iVar2459, 0);
			set_anim_scene_entity(&(uLocal_1769[41]), "ARTHUR", Global_35, 0);
			set_anim_scene_entity(&(uLocal_1769[41]), "Dutch", &(iLocal_2449[0]), 0);
			set_anim_scene_entity(&(uLocal_1769[41]), "S_M_M_BankClerk_01", iVar2459, 0);
			func_1964(cParam0, &(uLocal_1769[40]));
			func_1964(cParam0, &(uLocal_1769[41]));
			iLocal_948 = 1;
			break;
		case 1:
			if (!_is_anim_scene_loaded(&(uLocal_1769[40]), true, false))
			{
				if (bParam1)
				{
					if (!_is_anim_scene_loading(&(uLocal_1769[40]), true))
					{
						func_1964(cParam0, &(uLocal_1769[40]));
					}
				}
				else if (!_is_anim_scene_loading(&(uLocal_1769[40]), true))
				{
					if (_is_anim_scene_finished(&(uLocal_1769[40]), false))
					{
						reset_anim_scene(&(uLocal_1769[40]), 0);
					}
					load_anim_scene(&(uLocal_1769[40]));
				}
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[41]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[41]), true))
				{
					func_1964(cParam0, &(uLocal_1769[41]));
				}
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[41]), "PL_BankM_Hands_Up_Loop"))
			{
				bVar0 = false;
			}
			if (bParam1)
			{
				if (!func_2001())
				{
					bVar0 = false;
				}
			}
			else if (!func_2002())
			{
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[41]), "PL_BankM_Dutch_Entry_Pistol_Aim"))
			{
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[41]), "PL_BankM_Dutch_Forces_BM_to_vault"))
			{
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[41]), "PL_BankM_Dutch_Forces_Into_Vault"))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_948 = 5;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_1381(char[4] cParam0)
{
	bVar0 = true;
	switch (iVar929)
	{
		case 0:
			if (_does_anim_scene_exist(&(uLocal_1769[6])))
			{
				iLocal_932 = 2;
			}
			break;
		case 2:
			if (!func_979())
			{
				bVar0 = false;
			}
			if (!does_entity_exist(&(iLocal_2449[0])))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_932 = 3;
			}
			break;
		case 3:
			set_anim_scene_entity(&(uLocal_1769[6]), "DUTCH", &(iLocal_2449[0]), 0);
			func_1964(cParam0, &(uLocal_1769[6]));
			iLocal_932 = 1;
			break;
		case 1:
			if (!_is_anim_scene_loaded(&(uLocal_1769[6]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[6]), true))
				{
					func_1964(cParam0, &(uLocal_1769[6]));
				}
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_932 = 5;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_1382(char[4] cParam0)
{
	bVar0 = true;
	if (!func_195(iVar1754, 67108864))
	{
		if (_does_anim_scene_exist(&(uLocal_1769[29])))
		{
			if (_is_anim_scene_finished(&(uLocal_1769[29]), false))
			{
				if (func_2003())
				{
					func_1951();
					func_408(&uLocal_1757, 67108864);
				}
			}
		}
	}
	func_2004();
	if (iVar1447 >= 4 && iVar1447 < 18)
	{
		func_2005(cParam0);
	}
	if ((iVar1447 == 4 && !func_1397(Global_35, &(iLocal_2325[7]), 1, 0)) && !func_1397(&(iLocal_2449[0]), &(iLocal_2325[7]), 1, 0))
	{
		func_2006(cParam0);
	}
	while (bVar0)
	{
		bVar0 = false;
		switch (iVar1447)
		{
			case 0:
				_0xb8de69d9473b7593(Global_35, 1);
				_0xb8de69d9473b7593(Global_35, 2);
				iLocal_1450 = 1;
				break;
			case 1:
				if (func_1986(cParam0))
				{
					if (func_1965(&(uLocal_1769[29]), "PL_Leadout_All"))
					{
						func_2007();
						func_1624();
						func_135(cParam0, 1);
						iLocal_1450 = 3;
					}
				}
				break;
			case 2:
				if (func_1986(cParam0))
				{
					if (func_1965(&(uLocal_1769[29]), "PL_InBankIdles"))
					{
						func_2008();
						iLocal_1450 = 3;
					}
				}
				break;
			case 3:
				func_1381(cParam0);
				func_1380(cParam0, 1);
				if (((_0xb89fcff19dafff28(&(uLocal_1769[29]), "CS_DUTCH") || _0x005e6f28dd7ed58d(&(uLocal_1769[29]), "CS_DUTCH")) || _is_anim_scene_finished(&(uLocal_1769[29]), false)) || func_195(iVar1757, 4))
				{
					if (!func_195(iVar1763, 512))
					{
						if (func_1381(cParam0))
						{
							func_2009();
							func_408(&uLocal_1766, 512);
						}
					}
				}
				if ((_0xb89fcff19dafff28(&(uLocal_1769[29]), "CS_BILLWILLIAMSON") || _is_anim_scene_finished(&(uLocal_1769[29]), false)) || func_195(iVar1757, 4))
				{
					if (get_script_task_status(&(iLocal_2449[2]), 150319005, true) != 0 && get_script_task_status(&(iLocal_2449[2]), 150319005, true) != 1)
					{
						task_look_at_entity(&(iLocal_2449[2]), iVar2460, -1, 1036, 51, 0);
					}
				}
				if (!func_195(iVar1763, 16777216))
				{
					if (does_entity_exist(iVar2460) && !is_entity_dead(iVar2460))
					{
						if (((_0xb89fcff19dafff28(&(uLocal_1769[29]), "U_M_M_NBXBANKWORKER_01^2") || _0x005e6f28dd7ed58d(&(uLocal_1769[29]), "U_M_M_NBXBANKWORKER_01^2")) || func_195(iVar1757, 4)) || (_is_anim_scene_started(&(uLocal_1769[29]), false) && _get_anim_scene_time(&(uLocal_1769[29])) >= 32f))
						{
							apply_ped_damage_pack(iVar2460, "PD_Pissing_Pants", 0f, 1f);
							if (func_1380(cParam0, 1))
							{
								func_1388("PL_BankM_Hands_Up_Loop");
								func_408(&uLocal_1766, 16777216);
							}
						}
					}
				}
				if (_0xb89fcff19dafff28(&(uLocal_1769[29]), "p_door_nbxbank02x_l") || _is_anim_scene_finished(&(uLocal_1769[29]), false))
				{
					if (!func_1397(Global_35, &(iLocal_2325[38]), 1, 0))
					{
						if (!func_195(iVar1755, 64))
						{
							func_408(&uLocal_1758, 64);
						}
						func_1368(965922748, 1, 0);
						func_1368(965922748, 1, 0);
						func_492(1);
					}
				}
				if (_0xb89fcff19dafff28(&(uLocal_1769[29]), "p_door_nbxbank02x_r") || _is_anim_scene_finished(&(uLocal_1769[29]), false))
				{
					if (!func_1397(Global_35, &(iLocal_2325[38]), 1, 0))
					{
						if (!func_195(iVar1755, 64))
						{
							func_408(&uLocal_1758, 64);
						}
						func_1368(1634115439, 1, 0);
						func_1368(1634115439, 1, 0);
						func_492(1);
					}
				}
				func_2010(&(Local_14.f_8[3]), "U_M_M_NBXBANKWORKER_01", 0);
				func_2010(&(Local_14.f_8[2]), "U_M_M_NBXBANKWORKER_01^1", 1);
				func_2010(&(Local_14.f_8[8]), "U_F_M_NBXRESIDENT_01", 0);
				func_2010(&(Local_14.f_8[6]), "U_F_M_NBXRESIDENT_01^1", 0);
				func_2010(&(Local_14.f_8[9]), "U_M_M_NBXRESIDENT_01", 0);
				func_2010(&(Local_14.f_8[7]), "U_M_M_NBXRESIDENT_01^1", 1);
				func_2010(&(Local_14.f_8[4]), "U_M_M_NBXRESIDENT_01^2", 0);
				func_2010(&(Local_14.f_8[5]), "U_M_M_NBXRESIDENT_01^3", 0);
				if (_0xb89fcff19dafff28(&(uLocal_1769[29]), "NBSecurityGuard") || _is_anim_scene_finished(&(uLocal_1769[29]), false))
				{
					if (!is_entity_dead(&(Local_14.f_8[1])))
					{
						disable_ped_pain_audio(&(Local_14.f_8[1]), true);
						_set_entity_health(&(Local_14.f_8[1]), 0, 0);
						freeze_entity_position(&(Local_14.f_8[1]), true);
					}
				}
				if (_0xb89fcff19dafff28(&(uLocal_1769[29]), "NBSecurityGuard^1") || _is_anim_scene_finished(&(uLocal_1769[29]), false))
				{
					if (!is_entity_dead(&(Local_14.f_8[10])))
					{
						disable_ped_pain_audio(&(Local_14.f_8[10]), true);
						_set_entity_health(&(Local_14.f_8[10]), 0, 0);
					}
				}
				if (((_is_anim_scene_finished(&(uLocal_1769[29]), false) || _0x8d81e7824b7753f7(&(uLocal_1769[29]), "s_InBankIdles", 1)) && func_195(iVar1763, 512)) || (func_195(iVar1757, 4) && func_195(iVar1763, 512)))
				{
					if (func_195(iVar1763, 16777216))
					{
						iLocal_1450 = 4;
					}
				}
				break;
			case 4:
				if (!func_26(&uLocal_2061))
				{
					func_237(&uLocal_2061);
				}
				if (iVar1041 >= 6)
				{
					if (!func_1397(Global_35, &(iLocal_2325[90]), 1, 0))
					{
						if ((_is_anim_scene_started(&(uLocal_1769[40]), false) && !_0x8d81e7824b7753f7(&(uLocal_1769[40]), "s_Arthur_Entry_Pistol_Aim", 1)) || func_195(iVar1757, 8))
						{
							Local_236[7]->f_3 = 1;
							iLocal_1450 = 6;
						}
					}
				}
				if (func_2011(cParam0) && func_1380(cParam0, 1))
				{
					if (_0xb89fcff19dafff28(&(uLocal_1769[6]), "DUTCH") || ((func_1398(&uLocal_2061) > 60000 && !func_1397(Global_35, &(iLocal_2325[90]), 1, 0)) && !func_195(iVar1757, 8)))
					{
						Local_236[7]->f_3 = 1;
						func_237(&uLocal_2061);
						func_113(1);
						func_135(cParam0, 17);
						func_2012("PL_BankM_Dutch_Forces_BM_to_Vault", "PL_BankM_Dutch_Forces_BM_to_Vault");
						iLocal_1450 = 5;
					}
				}
				break;
			case 5:
				if (_0x8d81e7824b7753f7(&(uLocal_1769[42]), "s_Dutch_Open_Door_Loop", 1))
				{
					iLocal_1450 = 8;
				}
				break;
			case 6:
				if (func_2011(cParam0) && func_1380(cParam0, 0))
				{
					func_2013("PL_Dutch_Entry_Wait");
					func_237(&uLocal_2061);
					iLocal_1450 = 7;
				}
				break;
			case 7:
				if (_0x8d81e7824b7753f7(&(uLocal_1769[42]), "s_Dutch_Open_Door_Loop", 1))
				{
					iLocal_1450 = 8;
				}
				break;
			case 8:
				if (get_script_task_status(&(iLocal_2449[0]), 242628503, true) != 0 && get_script_task_status(&(iLocal_2449[0]), 242628503, true) != 1)
				{
					if (func_2011(cParam0) && func_1380(cParam0, 0))
					{
						func_2013("PL_Dutch_Open_Door_Loop");
						iLocal_1450 = 9;
					}
				}
				break;
			case 9:
				if (!func_26(&uLocal_2061))
				{
					func_237(&uLocal_2061);
				}
				if ((iVar1041 == 11 || func_195(iVar1763, 2)) || func_195(iVar1759, 4096))
				{
					iLocal_1450 = 10;
				}
				if (func_1398(&uLocal_2061) > 60000 && !func_195(iVar1759, 4096))
				{
					iLocal_1450 = 11;
				}
				break;
			case 10:
				if (func_2011(cParam0) && func_1380(cParam0, 0))
				{
					if (iVar1041 == 11 || (func_195(iVar1763, 2) && func_195(iVar1763, 4)))
					{
						if (func_1397(Global_35, &(iLocal_2325[7]), 1, 0) || func_973(Global_35, _0xf70f00013a62f866(&(iLocal_2325[7])), 1) > func_973(&(iLocal_2449[0]), _0xf70f00013a62f866(&(iLocal_2325[7])), 1))
						{
							Local_236[7]->f_4 = 1;
							func_2013("PL_Dutch_Into_Vault");
							if (does_blip_exist(iVar2245))
							{
								remove_blip(&iLocal_2248);
							}
							_0xdd1232b332cbb9e7(3, 1, 0);
							iLocal_1450 = 12;
						}
					}
				}
				break;
			case 11:
				if (func_2011(cParam0) && func_1380(cParam0, 0))
				{
					Local_236[7]->f_4 = 1;
					func_2012("PL_Dutch_Forces_Into_Vault", "PL_BankM_Dutch_Forces_Into_Vault");
					func_2014();
					if (does_blip_exist(iVar2245))
					{
						remove_blip(&iLocal_2248);
					}
					iLocal_1450 = 12;
				}
				break;
			case 12:
				func_2015(cParam0);
				if (!func_195(iVar1754, 268435456))
				{
					func_408(&uLocal_1757, 268435456);
				}
				if (func_2016())
				{
					bVar0 = true;
					iLocal_1450 = 13;
				}
				break;
			case 13:
				if (func_2015(cParam0))
				{
					func_2017();
					iLocal_1450 = 14;
				}
				break;
			case 14:
				if (!func_1397(Global_35, &(iLocal_2325[7]), 1, 0) && func_1397(Global_35, &(iLocal_2325[4]), 1, 0))
				{
					if (!func_26(&uLocal_2025))
					{
						func_237(&uLocal_2025);
					}
					else if (func_1398(&uLocal_2025) > 10000)
					{
						func_135(cParam0, 10);
						func_237(&uLocal_2025);
					}
				}
				if (func_1400() && func_1398(&uLocal_2004) > 2000)
				{
					if (!func_195(iVar1760, 256))
					{
						if (!func_1377())
						{
							func_408(&uLocal_1763, 256);
						}
					}
					else if (!func_26(&uLocal_2031))
					{
						func_237(&uLocal_2031);
					}
					if (((func_26(&uLocal_2031) && func_1398(&uLocal_2031) > 3000) && func_195(iVar1760, 256)) && !_0x54b187f111d9c6f8(&(iLocal_2449[0]), 0))
					{
						if (func_2018())
						{
							if (func_1410(cParam0, 0))
							{
								iLocal_1450 = 15;
							}
						}
					}
				}
				break;
			case 15:
				func_2019(cParam0);
				if (_0x005e6f28dd7ed58d(&(uLocal_1769[9]), "dutch") || _0xb89fcff19dafff28(&(uLocal_1769[9]), "dutch"))
				{
					Local_236[5]->f_4 = 1;
					iLocal_1450 = 16;
				}
				break;
			case 16:
				if (func_2020(cParam0))
				{
					func_237(&uLocal_2064);
					iLocal_1450 = 17;
				}
				break;
			case 17:
				if (func_2021(cParam0, 0))
				{
					func_2022(cParam0, 0);
					func_408(&uLocal_1757, 134217728);
					iLocal_1450 = 18;
				}
				if (!func_1397(Global_35, &(iLocal_2325[7]), 1, 0))
				{
					if (!func_26(&uLocal_2067))
					{
						func_237(&uLocal_2067);
					}
				}
				if (func_26(&uLocal_2067) && func_1398(&uLocal_2067) > 2000)
				{
					iLocal_1450 = 18;
				}
				break;
			case 18:
				break;
		}
	}
}

int func_1383(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!bParam12 && is_entity_dead(bParam0))
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
			if ((_0x705be297eebdb95d(iVar0) || _is_weapon_melee(iVar0)) && get_ped_relationship_group_hash(bParam0) == 1030835986)
			{
				StringCopy(&cVar5, _get_weapon_name(iVar0), 128);
				iVar2 = _0xd42514c182121c23(get_entity_model(bParam0));
				if (!Global_43891 && _does_string_exist_in_string(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, _0x806862e5d266cf38(&cVar5, 0, (get_length_of_literal_string(&cVar5) - get_length_of_literal_string("_DUALWIELD"))), 128);
					iVar3 = get_hash_key(&cVar5);
					if (func_738(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
						if (!Global_43891)
						{
							if (func_738(iVar4) && iVar4 != iVar0)
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
	if (func_20() == -1 && !func_122(iVar0))
	{
		if (has_ped_got_weapon(bParam0, iVar0, 0, false) && bParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && bParam0 != Global_35) && get_ped_relationship_group_hash(bParam0) == 1030835986)
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
				if (func_122(-183018591))
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
	else if (iVar0 == -164645981 && bParam0 == Global_35)
	{
		iVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (bParam0 != Global_35 && func_738(iVar0))
		{
			get_max_ammo(bParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!_is_weapon_melee(iVar0) && iVar0 != -1569615261) && !_is_weapon_lantern(iVar0))
		{
			iVar23 = get_ped_ammo_by_type(bParam0, get_ped_ammo_type_from_weapon(bParam0, iVar0));
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
	if (bParam0 == Global_35)
	{
		func_653(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_2023(bParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(bParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (bParam0 != Global_35)
	{
		if (func_1182(iVar0))
		{
			set_ped_infinite_ammo(bParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		_0xcffc3eccd7a5cceb(get_player_index(), iVar0, iParam4);
	}
	return iVar0;
}

bool func_1384()
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 117)
	{
		iVar3 = func_2024(iVar0, 1);
		if (iVar3 != 0)
		{
			iVar2 = _0xdbc4b552b2ae9a83(Global_35, iVar3);
			if (is_weapon_valid(iVar2))
			{
				if (has_ped_got_weapon(Global_35, iVar2, 0, true))
				{
					if ((_is_weapon_pistol(iVar2) || _is_weapon_revolver(iVar2)) || func_2025(iVar2))
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 >= 1)
	{
		return true;
	}
	return false;
}

void func_1385(bool bParam0)
{
	func_2026(iLocal_2449[0], 0, bParam0);
	func_2026(iLocal_2449[7], 9, bParam0);
	func_2026(iLocal_2449[5], 2, bParam0);
	func_2026(iLocal_2449[1], 1, bParam0);
}

void func_1386()
{
	func_1065(1751238140, 1, 0f, 0, 0, 0, 0, 0);
	door_system_set_open_ratio(1751238140, 0f, 1);
}

void func_1387()
{
	iLocal_1756 = 0;
	while (iVar1754 <= 10)
	{
		if (does_entity_exist(&(Local_14.f_8[iVar1754])))
		{
			if (&Local_14.f_8[iVar1754] != &Local_14.f_8[0])
			{
				delete_ped(Local_14.f_8[iVar1754]);
			}
		}
		iLocal_1756 = iVar1754 + 1;
	}
}

void func_1388(char* sParam0)
{
	_set_anim_scene_playback_list_bool(&(uLocal_1769[41]), sParam0, true);
	set_entity_invincible(iVar2460, false);
	if (!_is_anim_scene_started(&(uLocal_1769[41]), false))
	{
		start_anim_scene(&(uLocal_1769[41]));
	}
}

void func_1389()
{
	func_1065(iVar1934, 1, 0f, 0, 0, 0, 0, 0);
	func_1065(iVar1935, 1, 0f, 0, 0, 0, 0, 0);
	func_492(1);
}

void func_1390()
{
	func_1065(-89662225, 1, 0f, 0, 0, 0, 0, 0);
}

void func_1391(char[4] cParam0, char[4] cParam1)
{
	func_2027(&(cParam0->f_7375), cParam1, func_162(cParam0, func_33(cParam0)) != 5);
}

void func_1392(char[4] cParam0, int iParam1)
{
	func_140(cParam0, func_33(cParam0), iParam1);
}

void func_1393(char[4] cParam0)
{
	switch (func_1399(cParam0))
	{
		case 0:
			func_1471(cParam0, "NBD1_BIB_OBJ3", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, -1);
			break;
		case 1:
			func_135(cParam0, -1);
			break;
		case 2:
			if (!func_1377())
			{
				if (func_1657(cParam0, "NBD1_BIB_OBJ3", 4, 0, 0))
				{
					func_486(&iLocal_2248);
					if (!does_blip_exist(iVar2245))
					{
						iLocal_2248 = _blip_add_for_entity(-1749618580, iVar2460);
						_blip_set_modifier(iVar2245, -401963276);
						set_blip_name_from_text_file(iVar2245, "NBD1_BANKM");
					}
					func_135(cParam0, -1);
				}
			}
			break;
		case 3:
			func_1471(cParam0, "NBD1_AV_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			if (func_1657(cParam0, "NBD1_CLR", 0, 0, 0))
			{
				func_135(cParam0, 21);
			}
			break;
		case 4:
			if (func_1657(cParam0, "NBD1_AV_OBJ1", 4, 0, 0))
			{
				func_2028(cParam0);
				func_135(cParam0, -1);
			}
			break;
		case 5:
			if (func_1657(cParam0, "NBD1_HOS", 0, 0, 0))
			{
				func_237(&uLocal_2031);
				func_135(cParam0, 6);
			}
			break;
		case 6:
			if (func_1657(cParam0, "NBD1_HOS_BACK", 0, 0, 0))
			{
				func_135(cParam0, 7);
			}
			break;
		case 7:
			func_1471(cParam0, "NBD1_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_2029();
			func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
			func_135(cParam0, -1);
			break;
		case 8:
			if (func_1657(cParam0, "NBD1_OPEN", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 9:
			if (func_1657(cParam0, "NBD1_FLW", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 10:
			if (func_1657(cParam0, "NBD1_CLR_STAND", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 11:
			if (func_1657(cParam0, "NBD1_LOOTING", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 12:
			if (func_1657(cParam0, "NBD1_LOOTTALK", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 13:
			if (func_1657(cParam0, "NBD1_PROB", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 14:
			if (func_1657(cParam0, "NBD1_HURRY", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 15:
			if (func_1657(cParam0, "NBD1_VAULT", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 16:
			if (func_1657(cParam0, "NBD1_AV_VAULT", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 17:
			if (func_1657(cParam0, "NBD1_IG21_COME", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 18:
			if (func_1657(cParam0, "NBD1_ASKCOMBO", 1, 0, 0))
			{
				func_135(cParam0, 25);
			}
			break;
		case 20:
			if (func_1657(cParam0, "NBD1_TOCHARLES", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 21:
			if (!func_1377() && !_0x54b187f111d9c6f8(&(iLocal_2449[0]), 1))
			{
				if (func_1657(cParam0, "NBD1_BIGVAULTS", 0, 0, 0))
				{
					func_135(cParam0, 4);
				}
			}
			break;
		case 22:
			if (func_1657(cParam0, "NBD1_COMBO_CR", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 23:
			if (func_1657(cParam0, "NBD1_COMBO_CR2", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 24:
			if (func_1657(cParam0, "NBD1_COMBO_CR3", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 25:
			if (!func_2030("NBD1_ASKCOMBO"))
			{
				_0xf232c2c546ac16d0("NBD1_COMBO");
				if (func_1657(cParam0, "NBD1_COMBO", 1, 1f, 0))
				{
					func_135(cParam0, -1);
				}
			}
			break;
		case 30:
			if (func_1657(cParam0, "NBD1_WALKOUT", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
	}
}

void func_1394(char[4] cParam0)
{
	func_1988(cParam0);
	func_1989(cParam0);
	func_2031(cParam0);
	func_1382(cParam0);
	func_2032(cParam0);
	func_1991();
	func_1992();
	func_2033();
	func_1993();
	func_1976(cParam0);
}

void func_1395()
{
	if (!Local_1494[2]->f_8)
	{
		Local_1494[2] = func_2034("NBD1_BIB_USE0", -473983589, &(iLocal_2325[8]), 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		Local_1494[2]->f_8 = 1;
	}
	if (!Local_1494[1]->f_8)
	{
		Local_1494[1] = func_2034("NBD1_BIB_USE0", -473983589, &(iLocal_2325[9]), 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		Local_1494[1]->f_8 = 1;
	}
	if (!Local_1494[0]->f_8)
	{
		Local_1494[0] = func_2034("NBD1_BIB_USE0", -473983589, &(iLocal_2325[36]), 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		Local_1494[0]->f_8 = 1;
	}
	Local_1494[0]->f_1 = { 2645.074f, -1303.787f, 51.566f };
	Local_1494[0]->f_4 = { 0f, 0f, -60f };
	Local_1494[0]->f_7 = 1408938498;
	StringCopy(&(Local_1494[0]->f_13), "RANSACK_VOLUME_0m8_0m5_2m0", 64);
	Local_1494[0]->f_22 = { 2644.84f, -1303.58f, 51.25f };
	Local_1494[0]->f_25 = -65.213f;
	Local_1494[0]->f_27 = -1623205626;
	Local_1494[0]->f_28 = "pl_Arthur_Enter_Sm_Vault";
	Local_1494[1]->f_1 = { 2640.984f, -1303.317f, 51.416f };
	Local_1494[1]->f_4 = { 0f, 0f, 130f };
	Local_1494[1]->f_7 = 230276839;
	StringCopy(&(Local_1494[1]->f_13), "RANSACK_VOLUME_0m8_0m5_2m0", 64);
	Local_1494[1]->f_22 = { 2641.21f, -1303.5f, 51.25f };
	Local_1494[1]->f_25 = 113.48f;
	Local_1494[1]->f_27 = -1623205626;
	Local_1494[1]->f_28 = "pl_Arthur_Enter_Md_Vault";
	Local_1494[2]->f_1 = { 2644.424f, -1307.077f, 51.546f };
	Local_1494[2]->f_4 = { 0f, 0f, 220f };
	Local_1494[2]->f_7 = -1319989508;
	StringCopy(&(Local_1494[2]->f_13), "RANSACK_VOLUME_1m5_0m5_2m0", 64);
	Local_1494[2]->f_22 = { 2644.59f, -1306.87f, 51.25f };
	Local_1494[2]->f_25 = -154.675f;
	Local_1494[2]->f_27 = -1472414463;
	Local_1494[2]->f_28 = "pl_Arthur_Enter_Lg_Vault";
	iLocal_1756 = 0;
	while (iVar1754 <= 2)
	{
		request_model(Local_1494[iVar1754]->f_7, false);
		iLocal_1756 = iVar1754 + 1;
	}
	iLocal_2250[2] = _blip_add_for_coord(408396114, _0xf70f00013a62f866(&(iLocal_2325[8])));
	iLocal_2250[1] = _blip_add_for_coord(408396114, _0xf70f00013a62f866(&(iLocal_2325[9])));
	iLocal_2250[0] = _blip_add_for_coord(408396114, _0xf70f00013a62f866(&(iLocal_2325[36])));
	func_1968();
}

bool func_1396()
{
	iVar0 = 1;
	iLocal_1756 = 0;
	while (iVar1754 <= 10)
	{
		if (does_entity_exist(&(Local_14.f_8[iVar1754])))
		{
			if (!is_entity_on_screen(&(Local_14.f_8[iVar1754])))
			{
				if (&Local_14.f_8[iVar1754] != &Local_14.f_8[0])
				{
					delete_ped(Local_14.f_8[iVar1754]);
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		iLocal_1756 = iVar1754 + 1;
	}
	return iVar0;
}

bool func_1397(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(bParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(bParam0, iParam1, bParam2, iParam3);
}

int func_1398(var uParam0)
{
	if (!func_26(uParam0))
	{
		return 0;
	}
	if (func_545(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_546() - round((uParam0->f_1 * 1000f)));
}

int func_1399(char[4] cParam0)
{
	return cParam0->f_599;
}

bool func_1400()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (&Local_1045[iVar0] >= 10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1401()
{
	iLocal_1756 = 0;
	while (iVar1754 <= 2)
	{
		func_11(Local_1494[iVar1754], 1, 1);
		func_486(iLocal_2250[iVar1754]);
		iLocal_1756 = iVar1754 + 1;
	}
}

void func_1402()
{
	func_1042(&(iLocal_2449[1]));
	func_1042(&(iLocal_2449[7]));
}

void func_1403()
{
	iLocal_1756 = 0;
	while (iVar1754 <= 2)
	{
		set_model_as_no_longer_needed(Local_1494[iVar1754]->f_7);
		iLocal_1756 = iVar1754 + 1;
	}
}

void func_1404()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (!_does_scenario_point_exist(&(Local_724[iVar0])))
		{
			Local_724[iVar0] = func_2035(-1354153129, func_873(16, iVar0), func_874(16, iVar0), 5f, 0, 0);
			StringCopy(&(Local_724[iVar0]->f_1), "FALL_OVER_WALL", 64);
		}
		iVar0++;
	}
}

bool func_1405(bool bParam0)
{
	if (func_1997(-1, bParam0))
	{
		if (func_1423(-1, bParam0))
		{
			if (func_1998())
			{
				_set_entity_coords_and_heading(&(Local_14.f_80[1]), func_1999(8, 1), func_2000(8, 1), true, false, true);
				set_vehicle_on_ground_properly(&(Local_14.f_80[1]), 0f);
				iLocal_1756 = 0;
				while (iVar1753 < 6)
				{
					if (!is_entity_dead(&(Local_14.f_22[iVar1753])))
					{
						set_entity_visible(&(Local_14.f_22[iVar1753]), true);
						set_entity_collision(&(Local_14.f_22[iVar1753]), true, false);
						set_ped_config_flag(&(Local_14.f_22[iVar1753]), 186, false);
						_0x18ff3110cf47115d(&(Local_14.f_22[iVar1753]), 7, 0);
						set_ped_flee_attributes(&(Local_14.f_22[iVar1753]), 512, true);
						if (!func_195(iVar877, 1))
						{
							if (iVar1753 == 1)
							{
								_set_ped_body_component(&(Local_14.f_22[iVar1753]), 816175408);
								_update_ped_variation(&(Local_14.f_22[iVar1753]), false, true, true, true, false);
								func_408(&uLocal_880, 1);
							}
						}
						if (!func_195(iVar877, 2))
						{
							if (iVar1753 == 2)
							{
								_set_ped_body_component(&(Local_14.f_22[iVar1753]), 525317764);
								_update_ped_variation(&(Local_14.f_22[iVar1753]), false, true, true, true, false);
								func_408(&uLocal_880, 2);
							}
						}
						if (!func_2036(&(Local_14.f_22[iVar1753])))
						{
							if (iVar1753 != 3 && iVar1753 != 4)
							{
								func_1383(&(Local_14.f_22[iVar1753]), 379542007, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
							}
							if (get_script_task_status(&(Local_14.f_22[iVar1753]), 1237250926, true) != 0 && get_script_task_status(&(Local_14.f_22[iVar1753]), 1237250926, true) != 1)
							{
								task_aim_gun_at_coord(&(Local_14.f_22[iVar1753]), func_409(6, 6), -1, true, false);
							}
							if (iVar0 == 0)
							{
								set_ped_accuracy(&(Local_14.f_22[iVar1753]), 18);
							}
							else
							{
								set_ped_accuracy(&(Local_14.f_22[iVar1753]), 20);
							}
						}
					}
					iLocal_1756 = iVar1753 + 1;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_1406()
{
	iVar0 = get_interior_at_coords(2638.399f, -1290.197f, 51.2461f);
	if (!is_interior_entity_set_active(iVar0, "new_com_bank_shootout"))
	{
	}
	else
	{
		return true;
	}
	return false;
}

void func_1407(char[4] cParam0)
{
	func_151(cParam0, &(Local_14.f_22[1]), "S_M_M_PINLAW_01", 0, 0, 0, 0);
	func_151(cParam0, &(Local_14.f_22[2]), "S_M_M_PinLaw_01^1", 0, 0, 0, 0);
	func_151(cParam0, &(Local_14.f_22[0]), "S_M_M_PinLaw_02^2", 0, 0, 0, 0);
}

bool func_1408()
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 117)
	{
		iVar3 = func_2024(iVar0, 1);
		if (iVar3 != 0)
		{
			iVar2 = _0xdbc4b552b2ae9a83(Global_35, iVar3);
			if (is_weapon_valid(iVar2))
			{
				if (has_ped_got_weapon(Global_35, iVar2, 0, true))
				{
					if ((((_is_weapon_repeater(iVar2) || _is_weapon_rifle(iVar2)) || _is_weapon_sniper(iVar2)) || _is_weapon_shotgun(iVar2)) || _is_weapon_bow(iVar2))
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 >= 2)
	{
		return true;
	}
	return false;
}

void func_1409(int iParam0, struct<4> Param1, bool bParam5)
{
	if (!is_entity_dead(&(iLocal_2449[iParam0])))
	{
		if (bParam5)
		{
			if (func_2037(&(iLocal_2449[iParam0])))
			{
				_remove_ped_from_mount(&(iLocal_2449[iParam0]), true, false);
			}
		}
		func_871(&(iLocal_2449[iParam0]), Param1, 2, 1073741824);
		set_blocking_of_non_temporary_events(&(iLocal_2449[iParam0]), true);
	}
}

bool func_1410(char[4] cParam0, bool bParam1)
{
	iVar0 = 1;
	bVar1 = false;
	func_2038();
	iLocal_1756 = 0;
	while (iVar1752 < 6)
	{
		if (!is_entity_dead(&(Local_14.f_22[iVar1752])))
		{
			if ((get_script_task_status(&(Local_14.f_22[iVar1752]), 1237250926, true) != 0 && get_script_task_status(&(Local_14.f_22[iVar1752]), 1237250926, true) != 1) && !bVar1)
			{
				_0x9587913b9e772d29(&(Local_14.f_22[iVar1752]), 0);
				set_entity_visible(&(Local_14.f_22[iVar1752]), true);
				set_entity_collision(&(Local_14.f_22[iVar1752]), true, false);
				freeze_entity_position(&(Local_14.f_22[iVar1752]), false);
				if (((iVar1752 != 1 && iVar1752 != 2) && iVar1752 != 3) && iVar1752 != 4)
				{
					func_1383(&(Local_14.f_22[iVar1752]), 379542007, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				}
				else
				{
					func_1383(&(Local_14.f_22[iVar1752]), -183018591, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					set_current_ped_weapon(&(Local_14.f_22[iVar1752]), -183018591, true, 0, false, false);
				}
				if (func_195(iVar1753, 134217728))
				{
					if ((!bParam1 && (iVar1752 != 1 && iVar1752 != 2)) || (bParam1 && (iVar1752 != 1 && iVar1752 != 2)))
					{
						set_ped_target_loss_response(&(Local_14.f_22[iVar1752]), 1);
						set_ped_combat_attributes(&(Local_14.f_22[iVar1752]), 30, true);
						task_aim_gun_at_coord(&(Local_14.f_22[iVar1752]), func_409(6, 6), -1, true, false);
						iVar2 = get_random_int_in_range(0, 2);
						if (iVar2 == 0)
						{
							set_ped_accuracy(&(Local_14.f_22[iVar1752]), 18);
						}
						else
						{
							set_ped_accuracy(&(Local_14.f_22[iVar1752]), 20);
						}
						bVar1 = true;
						iVar0 = 0;
					}
				}
			}
			else if (!bVar1)
			{
			}
		}
		iLocal_1756 = iVar1752 + 1;
	}
	return iVar0;
}

void func_1411(bool bParam0, int iParam1)
{
	if (does_entity_exist(bParam0))
	{
		if (!is_entity_dead(bParam0))
		{
			if (_0xb655db7582aec805(bParam0))
			{
				_0xf6262491c7704a63(bParam0, 0);
			}
			_set_entity_health(bParam0, get_entity_max_health(bParam0, false), 0);
		}
	}
}

void func_1412(char[4] cParam0)
{
	func_408(&uLocal_1757, 4);
	if (does_entity_exist(iVar2442))
	{
		delete_vehicle(&iLocal_2445);
	}
	if (func_1101(bVar2445, 0))
	{
		func_1634(cParam0, bVar2445);
		func_564(cParam0, bVar2445);
		func_2039(cParam0, Global_35);
		func_470(7, 0);
	}
	if (func_1101(&(bLocal_2459[1]), 0))
	{
		func_1634(cParam0, &(bLocal_2459[1]));
		func_564(cParam0, &(bLocal_2459[1]));
		func_2039(cParam0, &(iLocal_2449[0]));
		func_471(&(bLocal_2459[1]), 0, 1, 1, 1);
	}
	if (func_1101(&(bLocal_2459[0]), 0))
	{
		func_1634(cParam0, &(bLocal_2459[0]));
		func_564(cParam0, &(bLocal_2459[0]));
		func_2039(cParam0, &(iLocal_2449[1]));
		func_471(&(bLocal_2459[0]), 1, 1, 1, 1);
	}
	if (func_1101(&(bLocal_2459[2]), 0))
	{
		func_1634(cParam0, &(bLocal_2459[2]));
		func_564(cParam0, &(bLocal_2459[2]));
		func_2039(cParam0, &(iLocal_2449[4]));
		func_471(&(bLocal_2459[2]), 6, 1, 1, 1);
	}
}

void func_1413(char[4] cParam0, bool bParam1)
{
	if (func_33(cParam0) < iLocal_228 && !bParam1)
	{
		func_203(931649776, 1, 0);
	}
	else if ((func_33(cParam0) >= iLocal_228 && func_33(cParam0) < iLocal_230) || bParam1)
	{
		if (iVar1001 <= 3)
		{
			func_203(-434590080, 1, 0);
		}
	}
	else if (func_33(cParam0) >= iLocal_230 && !bParam1)
	{
		if (iVar1001 <= 3)
		{
			func_203(1743048395, 1, 0);
			func_493(1);
		}
	}
}

void func_1414(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 3:
		case 4:
		case 5:
			func_2040(0, 0, &uLocal_2527, func_409(6, 3));
			func_2040(4, 6, &uLocal_2528, func_409(6, 4));
			func_2040(5, 2, &uLocal_2529, func_409(6, 0));
			func_2040(2, 3, &uLocal_2530, func_409(6, 1));
			func_2040(1, 1, &uLocal_2531, func_409(6, 5));
			func_2040(3, 7, &uLocal_2532, func_409(6, 7));
			func_2040(7, 9, &uLocal_2533, func_409(6, 2));
			break;
		case 7:
			func_2040(0, 0, &uLocal_2534, func_409(8, 3));
			func_2040(4, 6, &uLocal_2535, func_409(8, 11));
			func_2040(5, 2, &uLocal_2536, func_409(8, 7));
			func_2040(2, 3, &uLocal_2537, func_409(8, 9));
			func_2040(3, 7, &uLocal_2538, func_409(8, 5));
			break;
		case 8:
			func_2040(0, 0, &uLocal_2539, func_409(0, 0));
			func_2040(4, 6, &uLocal_2540, func_409(0, 1));
			func_2040(5, 2, &uLocal_2541, func_409(0, 2));
			func_2040(2, 3, &uLocal_2542, func_409(0, 3));
			func_2040(3, 7, &uLocal_2543, func_409(0, 5));
			break;
		case 9:
			func_2040(0, 0, &uLocal_2544, func_409(2, 12));
			func_2040(4, 6, &uLocal_2545, func_409(2, 13));
			func_2040(3, 7, &uLocal_2546, func_409(2, 16));
			func_2040(5, 2, &uLocal_2547, func_409(2, 14));
			func_2040(2, 3, &uLocal_2548, func_409(2, 15));
			break;
		default:
			break;
	}
}

bool func_1415(char[4] cParam0)
{
	iVar0 = 1;
	switch (func_33(cParam0))
	{
		case 4:
		case 5:
		case 6:
		case 7:
			func_2041(0, 0, func_409(6, 3), 1f);
			func_2041(4, 6, func_409(6, 4), 1f);
			func_2041(5, 2, func_409(6, 0), 1f);
			func_2041(2, 3, func_409(6, 1), 1f);
			func_2041(1, 1, func_409(6, 5), 1f);
			func_2041(3, 7, func_409(6, 7), 1f);
			func_2041(7, 9, func_409(6, 2), 1f);
			break;
		case 8:
			if (!func_2042(4, &(iLocal_2182[22])))
			{
				iVar0 = 0;
			}
			if (!func_2042(0, &(iLocal_2182[21])))
			{
				iVar0 = 0;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

int func_1416(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!does_entity_exist(&(iLocal_2449[6])))
		{
			if (func_866(cParam0, 5, iLocal_2449[6], 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0))
			{
			}
			else
			{
				return 0;
			}
		}
		func_871(&(iLocal_2449[6]), func_240(6, 10), 2, 1073741824);
		if (!is_entity_dead(&(iLocal_2449[6])))
		{
			func_1634(cParam0, &(iLocal_2449[6]));
			func_1949(&(iLocal_2449[6]), 1);
			task_set_blocking_of_non_temporary_events(&(iLocal_2449[6]), true);
			_set_entity_health(&(iLocal_2449[6]), 201, 0);
			clear_ped_tasks(&(iLocal_2449[6]), 1, 0);
			task_react(&(iLocal_2449[6]), Global_35, 0f, 0f, 0f, "TaskIntimidated_OnFoot", -1f, 0, 4);
		}
		return 1;
	}
	else
	{
		func_1619(cParam0, 6);
		return 1;
	}
	return 0;
}

void func_1417()
{
	func_1065(iVar1929, 1, 0f, 0, 0, 0, 0, 0);
	func_1065(iVar1930, 1, 0f, 0, 0, 0, 0, 0);
	_0x7f458b543006c8fe(-1477943109, 8);
	_0x7f458b543006c8fe(-1477943109, 4);
	_0x7f458b543006c8fe(-1477943109, 16);
	_0x7f458b543006c8fe(2089945615, 8);
	_0x7f458b543006c8fe(2089945615, 4);
	_0x7f458b543006c8fe(2089945615, 16);
}

void func_1418(char[4] cParam0)
{
	switch (func_1399(cParam0))
	{
		case 0:
			func_201(cParam0, &(iLocal_2449[0]), 1);
			if (!func_195(iVar1757, 67108864))
			{
				if (func_1657(cParam0, "NBD1_POSTHOS_D", 1, 0, 0))
				{
					_0xf232c2c546ac16d0("NBD1_POSTHOS_D");
					func_135(cParam0, 1);
				}
			}
			else
			{
				func_135(cParam0, 1);
			}
			break;
		case 1:
			func_1471(cParam0, "NBD1_BF_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_237(&uLocal_2034);
			func_135(cParam0, -1);
			break;
		case 2:
			if (func_1657(cParam0, "NBD1_DIDEA", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 3:
			func_135(cParam0, -1);
			break;
		case 20:
			if (func_1657(cParam0, "NBD1_POSTHOS", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 21:
			if (func_1657(cParam0, "NBD1_HOLDPINK", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 22:
			if (func_1657(cParam0, "NBD1_DAMMIT", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 25:
			if (func_1657(cParam0, "NBD1_CHARCALL", 0, 0, 0))
			{
				func_1673(cParam0, &(iLocal_2449[3]), 1105014447, 422991367, 1, 1);
				func_1471(cParam0, "NBD1_HIW_OBJC", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, -1);
			}
			break;
		case 45:
			if (func_1657(cParam0, "NBD1_ARTJOHN", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
	}
}

void func_1419(char[4] cParam0)
{
	func_2043(cParam0);
	func_2044(cParam0);
	func_2045(cParam0);
	func_1648(cParam0);
	func_2046();
	func_1993();
	func_2047(cParam0);
	func_2048();
	if (func_195(iVar1754, 8))
	{
		func_2049();
	}
	func_2050(cParam0);
	func_2051(cParam0);
}

int func_1420(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (does_entity_exist(uParam0[iVar0]))
		{
			if (is_entity_dead(uParam0[iVar0]))
			{
				iVar1++;
			}
		}
		else if (bParam1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

float func_1421(var uParam0)
{
	if (!func_26(uParam0))
	{
		return 0f;
	}
	if (func_545(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_596() - uParam0->f_1);
}

int func_1422(char[4] cParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 <= -1 || iParam1 >= 27)
	{
		return 0;
	}
	if (!bParam2)
	{
		func_99(cParam0, 512);
	}
	func_1328(cParam0, func_33(cParam0), iParam1);
	if (bParam3)
	{
		func_1012(cParam0, iParam1, 2);
	}
	if (bParam4)
	{
		func_2052(cParam0);
	}
	return 1;
}

bool func_1423(int iParam0, bool bParam1)
{
	if (!func_272(Local_14.f_78))
	{
		Local_14.f_78 = { func_444() };
	}
	if (func_1609(&(Local_14.f_78), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_80[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_80[0] = create_vehicle(-1308375373, 2749.334f, -1315.748f, 47.5163f, 330.6937f, true, true, false, false);
		func_1610(Local_14.f_78, &(Local_14.f_80[0]));
		func_1611(&(Local_14.f_80[0]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_80[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_80[1] = create_vehicle(219205323, 2638.246f, -1275.206f, 52.1894f, 305.8941f, true, true, false, false);
		func_1610(Local_14.f_78, &(Local_14.f_80[1]));
		func_1611(&(Local_14.f_80[1]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	func_1612(&(Local_14.f_78), 1);
	return true;
}

void func_1424()
{
	iLocal_1756 = 0;
	while (iVar1754 < 6)
	{
		if (func_1101(&(Local_14.f_22[iVar1754]), 0))
		{
			disable_ped_pain_audio(&(Local_14.f_22[iVar1754]), true);
		}
		iLocal_1756 = iVar1754 + 1;
	}
}

void func_1425(struct<2> Param0)
{
	if (!func_272(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_273(Param0))
	{
		iVar1 = func_1690(Param0, iVar0);
		if (does_entity_exist(iVar1))
		{
			if (!is_entity_dead(iVar1))
			{
				if (is_entity_a_ped(iVar1))
				{
					_set_entity_health(iVar1, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_1426()
{
	if (!is_entity_dead(Global_35))
	{
		func_2053(Global_35, get_entity_coords(Global_35, true, false), func_410(6, 6), 1, 2, 5, 1, 0, 0, 0, 0);
		if (func_1384())
		{
			iVar0 = func_901(0, 0);
			set_current_ped_weapon(Global_35, iVar0, true, 0, true, false);
		}
		else
		{
			func_2054(Global_35, 379542007, 100, 0, 0, 1056964608, 1065353216, 0);
			func_335(379542007, 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	_0x2208438012482a1a(Global_35, true, false);
}

void func_1427(char[4] cParam0)
{
	switch (func_1399(cParam0))
	{
		case 0:
			func_1471(cParam0, "NBD1_BF_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			iVar0 = get_random_int_in_range(0, 2);
			if (is_string_null_or_empty(sVar1939))
			{
				switch (iVar0)
				{
					case 0:
						sLocal_1942 = "NBD1_TIMEPLN";
						break;
					case 1:
						sLocal_1942 = "NBD1_TIMEPLN_B";
						break;
					default:
						sLocal_1942 = "NBD1_TIMEPLN";
						break;
				}
			}
			if (func_1657(cParam0, sVar1939, 0, 0, 0))
			{
				func_27(&uLocal_1959, 0);
				sLocal_1942 = "";
				func_135(cParam0, -1);
			}
			break;
		case 1:
			func_1453();
			func_486(&iLocal_2248);
			func_201(cParam0, &(iLocal_2449[3]), 1);
			func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
			func_135(cParam0, 2);
			break;
		case 2:
			if (func_1657(cParam0, "NBD1_HIW_OBJ2", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 4:
			if (func_1657(cParam0, "NBD1_HIW_PLACE", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 5:
			if (func_1657(cParam0, "NBD1_STDBACK", 0, 0, 0))
			{
				func_135(cParam0, 6);
			}
			break;
		case 6:
			if (func_1657(cParam0, "NBD1_HIW_OBJ5", 4, 0, 0))
			{
				func_201(cParam0, &(iLocal_2449[0]), 1);
				iLocal_2248 = func_1967(1259054292, &(iLocal_2325[37]), 1);
				func_135(cParam0, -1);
			}
			break;
		case 7:
			if (func_1657(cParam0, "NBD1_HIW_OBJ6", 4, 0, 0))
			{
				func_486(&iLocal_2248);
				func_2055(&iLocal_2248);
				func_135(cParam0, -1);
			}
			break;
		case 10:
			func_486(&iLocal_2248);
			func_135(cParam0, -1);
			break;
		case 11:
			if (func_1657(cParam0, "NBD1_PLAN_STAND", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 12:
			if (func_1657(cParam0, "NBD1_HIW_WALL", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 13:
			if (func_1657(cParam0, "NBD1_STD_IDLE", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 14:
			if (func_1657(cParam0, "NBD1_IG8_OKAY", 0, 0, 0))
			{
				func_135(cParam0, 24);
			}
			break;
		case 15:
			if (func_1657(cParam0, "NBD1_DYNA_DAWD", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 20:
			if (func_1657(cParam0, "NBD1_POSTHOS", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 21:
			if (func_1657(cParam0, "NBD1_HOLDPINK", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 22:
			if (func_1657(cParam0, "NBD1_DAMMIT", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 23:
			if (func_1657(cParam0, "NBD1_IG8_CALL", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 24:
			if (func_1657(cParam0, "NBD1_HIW_P", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 25:
			if (func_1657(cParam0, "NBD1_CHARCALL", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 45:
			if (func_1657(cParam0, "NBD1_ARTJOHN", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 48:
			func_135(cParam0, -1);
			break;
		case 49:
			func_135(cParam0, -1);
			break;
	}
	if (func_1399(cParam0) != -1)
	{
	}
}

void func_1428(char[4] cParam0)
{
	func_1988(cParam0);
	func_2043(cParam0);
	func_2045(cParam0);
	func_2044(cParam0);
	func_1648(cParam0);
	func_2047(cParam0);
	func_2048();
	func_2056(cParam0);
	func_2049();
	func_2050(cParam0);
	func_2051(cParam0);
}

void func_1429(char[4] cParam0)
{
	switch (iVar1002)
	{
		case 0:
			iLocal_1005 = 1;
			break;
		case 1:
			iLocal_2549 = get_rayfire_map_object(func_409(7, 7), 10f, sVar1937);
			iLocal_2550 = get_rayfire_map_object(func_409(7, 7), 10f, sVar1938);
			if (does_rayfire_map_object_exist(iVar2546) && does_rayfire_map_object_exist(iVar2547))
			{
				set_state_of_rayfire_map_object(iVar2546, 4);
				set_state_of_rayfire_map_object(iVar2547, 4);
				iLocal_1005 = 2;
			}
			break;
		case 2:
			func_2057();
			if (((does_rayfire_map_object_exist(iVar2546) && get_state_of_rayfire_map_object(iVar2546) == 5) && does_rayfire_map_object_exist(iVar2547)) && get_state_of_rayfire_map_object(iVar2547) == 5)
			{
				iLocal_1005 = 3;
			}
			break;
		case 3:
			func_2057();
			if (func_1435() || func_195(iVar1754, 128))
			{
				if (does_rayfire_map_object_exist(iVar2546) && does_rayfire_map_object_exist(iVar2547))
				{
					func_237(&uLocal_1980);
					set_time_scale(0.1f);
					func_135(cParam0, 48);
					if (!func_26(&uLocal_2019))
					{
						func_237(&uLocal_2019);
					}
					if (!is_entity_dead(&(iLocal_2449[0])))
					{
						open_sequence_task(&iVar0);
						task_play_anim(0, "AI_REACT@GUNFIRE@INTRO", "REACT_FRONT", 8f, -8f, -1, 8, 0f, false, 0, false, 0, false);
						task_put_ped_directly_into_cover(false, get_entity_coords(&(iLocal_2449[0]), true, false), -1, 0, 0, 0, 0, 0, 1, 0, 0);
						task_stay_in_cover(0);
						close_sequence_task(iVar0);
						task_perform_sequence(&(iLocal_2449[0]), iVar0);
						clear_sequence_task(&iVar0);
					}
					set_state_of_rayfire_map_object(iVar2546, 6);
					set_state_of_rayfire_map_object(iVar2547, 6);
					func_494(1017355491);
					func_1481(-920505696);
					func_2058(134);
					func_2059(137);
					func_2060(2638.399f, -1290.197f, 51.2461f, "new_com_bank_before", 134, 0, 1, 0, 0);
					func_2060(2638.399f, -1290.197f, 51.2461f, "new_com_bank_after", 137, 0, 1, 0, 0);
					iLocal_1005 = 5;
				}
			}
			break;
		case 5:
			if (func_1398(&uLocal_1980) >= 0)
			{
				func_203(1743048395, 1, 0);
				iLocal_1005 = 6;
			}
			break;
		case 6:
			if (func_1398(&uLocal_1980) > 250)
			{
				func_135(cParam0, 49);
				set_time_scale(1f);
				iLocal_1005 = 7;
			}
			break;
		case 7:
			break;
	}
}

void func_1430()
{
	if (iVar2551 != 0)
	{
		set_object_targettable(iVar2551, true);
		set_entity_can_be_targeted_without_los(iVar2551, true);
		set_entity_is_target_priority(iVar2551, true, 15f);
	}
}

void func_1431(bool bParam0)
{
	if (func_1101(Global_35, 0))
	{
		iVar0 = func_467(Global_35, 1, 0, 0);
		if ((iVar0 == -1569615261 || iVar0 == -1504859554) || bParam0)
		{
			if (func_1384())
			{
				iVar1 = func_901(0, 0);
				set_current_ped_weapon(Global_35, iVar1, true, 0, true, false);
			}
			else
			{
				func_2054(Global_35, 379542007, 100, 0, 0, 1056964608, 1065353216, 0);
				func_335(379542007, 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
	}
}

bool func_1432(char[4] cParam0)
{
	switch (iVar934)
	{
		case 0:
			if (_does_anim_scene_exist(&(uLocal_1769[14])))
			{
				iLocal_937 = 2;
			}
			break;
		case 2:
			iLocal_937 = 3;
			break;
		case 3:
			set_anim_scene_entity(&(uLocal_1769[14]), "ARTHUR", Global_35, 0);
			func_1964(cParam0, &(uLocal_1769[14]));
			iLocal_937 = 1;
			break;
		case 1:
			if (!_is_anim_scene_loaded(&(uLocal_1769[14]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[14]), true))
				{
					func_1964(cParam0, &(uLocal_1769[14]));
				}
				bVar0 = false;
			}
			bVar0 = true;
			if (bVar0)
			{
				iLocal_937 = 5;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_1433(char[4] cParam0)
{
	if (func_26(&uLocal_2037))
	{
		if (func_1398(&uLocal_2037) > 10000)
		{
			func_135(cParam0, 13);
			func_237(&uLocal_2037);
		}
	}
}

bool func_1434()
{
	if (!is_entity_dead(Global_35))
	{
		if (is_entity_in_volume(Global_35, &(iLocal_2325[23]), true, 0) || is_entity_in_volume(Global_35, &(iLocal_2325[40]), true, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_1435()
{
	if (func_195(iVar1755, 524288))
	{
		return true;
	}
	if (!is_ped_planting_bomb(Global_35))
	{
		if (does_entity_exist(iVar2551))
		{
		}
		if (iVar1455 >= 16)
		{
			_0x68f6a75fdf5a70d6(_0xf70f00013a62f866(&(iLocal_2325[67])), 5f);
		}
		vVar0 = { get_entity_coords(iVar2551, true, false) };
		vVar3 = { (vVar0.x - 0.25f), (vVar0.y - 0.25f), (vVar0.z - 0.25f) };
		vVar6 = { (vVar0.x + 0.25f), (vVar0.y + 0.25f), (vVar0.z + 0.25f) };
		if ((((((has_bullet_impacted_in_area(get_entity_coords(iVar2551, true, false), 0.25f, true, true) || !does_entity_exist(iVar2551)) || is_bullet_in_area(get_entity_coords(iVar2551, true, false), 0.25f, true)) || is_projectile_in_area(vVar3, vVar6, true)) || is_explosion_in_area(-1, vVar3, vVar6)) && func_195(iVar1755, 2097152)) && !func_195(iVar1755, 524288))
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_45();
			func_408(&uLocal_1757, 524288);
			shake_gameplay_cam("SMALL_EXPLOSION_SHAKE", 0.5f);
			func_2061();
			return true;
		}
	}
	return false;
}

void func_1436()
{
	if (iVar2551 != 0)
	{
		set_entity_visible(iVar2551, false);
		set_entity_collision(iVar2551, false, false);
		set_object_as_no_longer_needed(&iLocal_2553);
	}
}

bool func_1437(bool bParam0, bool bParam1)
{
	if (does_entity_exist(bParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(bParam0, true);
		}
		else
		{
			return is_entity_dead(bParam0);
		}
	}
	return true;
}

bool func_1438()
{
	iVar3 = 0;
	vVar0 = { get_offset_from_entity_given_world_coords(iVar2551, get_entity_coords(Global_35, true, false)) };
	if (vVar0.x < -10f)
	{
		if ((_is_weapon_pistol(func_2062(Global_35, 0)) || _is_weapon_revolver(func_2062(Global_35, 0))) && (_is_weapon_pistol(func_2062(Global_35, 1)) || _is_weapon_revolver(func_2062(Global_35, 1))))
		{
			if (func_2063("pl_Dynamite_React_Left_DualWield"))
			{
				iVar3 = 1;
			}
		}
		else if ((_is_weapon_pistol(func_2062(Global_35, 0)) || _is_weapon_revolver(func_2062(Global_35, 0))) || func_1183(Global_35, 0, 1, 0) == 392538360)
		{
			if (func_2063("pl_Dynamite_React_Left_Pistol"))
			{
				iVar3 = 1;
			}
		}
		else if (_is_weapon_shotgun(func_2062(Global_35, 0)))
		{
			if (func_2063("pl_Dynamite_React_Left_Shotgun"))
			{
				iVar3 = 1;
			}
		}
		else if (_is_weapon_rifle(func_2062(Global_35, 0)) || _is_weapon_repeater(func_2062(Global_35, 0)))
		{
			if (func_2063("pl_Dynamite_React_Left_Rifle"))
			{
				iVar3 = 1;
			}
		}
		else
		{
			_hide_ped_weapons(Global_35, 2, true);
			if (func_2063("pl_Dynamite_React_Left_Unarmed"))
			{
				iVar3 = 1;
			}
		}
	}
	else if (vVar0.x > 10f)
	{
		if ((_is_weapon_pistol(func_2062(Global_35, 0)) || _is_weapon_revolver(func_2062(Global_35, 0))) && (_is_weapon_pistol(func_2062(Global_35, 1)) || _is_weapon_revolver(func_2062(Global_35, 1))))
		{
			if (func_2063("pl_Dynamite_React_Right_DualWield"))
			{
				iVar3 = 1;
			}
		}
		else if ((_is_weapon_pistol(func_2062(Global_35, 0)) || _is_weapon_revolver(func_2062(Global_35, 0))) || func_1183(Global_35, 0, 1, 0) == 392538360)
		{
			if (func_2063("pl_Dynamite_React_Right_Pistol"))
			{
				iVar3 = 1;
			}
		}
		else if (_is_weapon_shotgun(func_2062(Global_35, 0)))
		{
			if (func_2063("pl_Dynamite_React_Right_Shotgun"))
			{
				iVar3 = 1;
			}
		}
		else if (_is_weapon_rifle(func_2062(Global_35, 0)) || _is_weapon_repeater(func_2062(Global_35, 0)))
		{
			if (func_2063("pl_Dynamite_React_Right_Rifle"))
			{
				iVar3 = 1;
			}
		}
		else
		{
			_hide_ped_weapons(Global_35, 2, true);
			if (func_2063("pl_Dynamite_React_Right_Unarmed"))
			{
				iVar3 = 1;
			}
		}
	}
	else if ((_is_weapon_pistol(func_2062(Global_35, 0)) || _is_weapon_revolver(func_2062(Global_35, 0))) && (_is_weapon_pistol(func_2062(Global_35, 1)) || _is_weapon_revolver(func_2062(Global_35, 1))))
	{
		if (func_2063("pl_Dynamite_React_Front_DualWield"))
		{
			iVar3 = 1;
		}
	}
	else if (_is_weapon_pistol(func_2062(Global_35, 0)) || _is_weapon_revolver(func_2062(Global_35, 0)))
	{
		if (func_2063("pl_IG10_Dynamite_React_Front_Pistol"))
		{
			iVar3 = 1;
		}
	}
	else if (_is_weapon_shotgun(func_2062(Global_35, 0)))
	{
		if (func_2063("pl_Dynamite_React_Front_Shotgun"))
		{
			iVar3 = 1;
		}
	}
	else if (_is_weapon_rifle(func_2062(Global_35, 0)) || _is_weapon_repeater(func_2062(Global_35, 0)))
	{
		if (func_2063("pl_Dynamite_React_Front_Rifle"))
		{
			iVar3 = 1;
		}
	}
	else
	{
		_hide_ped_weapons(Global_35, 2, true);
		if (func_2063("pl_Dynamite_React_Front_Unarmed"))
		{
			iVar3 = 1;
		}
	}
	return iVar3;
}

void func_1439()
{
	func_1411(&(iLocal_2449[0]), 0);
	func_1411(&(iLocal_2449[1]), 1);
	func_1411(&(iLocal_2449[4]), 6);
	func_1411(&(iLocal_2449[2]), 3);
	func_1411(&(iLocal_2449[3]), 7);
	func_1411(&(iLocal_2449[7]), 9);
	func_1411(&(iLocal_2449[5]), 2);
}

bool func_1440(var uParam0, float fParam1)
{
	if (func_2064(uParam0, fParam1))
	{
		func_599(uParam0);
		return true;
	}
	return false;
}

bool func_1441()
{
	iVar0 = get_interior_at_coords(2638.399f, -1290.197f, 51.2461f);
	if (is_valid_interior(iVar0))
	{
		if (is_interior_ready(iVar0))
		{
			return is_interior_entity_set_active(iVar0, "new_com_bank_after");
		}
	}
	return false;
}

bool func_1442(bool bParam0, bool bParam1)
{
	if (func_2065(-1, bParam0))
	{
		iLocal_1756 = 0;
		while (iVar1752 < 7)
		{
			if (!is_entity_dead(&(Local_14.f_31[iVar1752])))
			{
				if ((!func_2066(&(Local_14.f_31[iVar1752])) && !bParam1) || bParam1)
				{
					set_ped_combat_movement(&(Local_14.f_31[iVar1752]), 1);
					set_blocking_of_non_temporary_events(&(Local_14.f_31[iVar1752]), false);
					set_ped_combat_range(&(Local_14.f_31[iVar1752]), 1);
					register_hated_targets_around_ped(&(Local_14.f_31[iVar1752]), 200f);
					set_ped_config_flag(&(Local_14.f_31[iVar1752]), 186, false);
					task_combat_hated_targets_in_area(&(Local_14.f_31[iVar1752]), get_entity_coords(&(Local_14.f_31[iVar1752]), true, false), 200f, 0, 2);
					set_ped_combat_attributes(&(Local_14.f_31[iVar1752]), 111, false);
					set_ped_combat_attributes(&(Local_14.f_31[iVar1752]), 30, true);
					set_ped_combat_attributes(&(Local_14.f_31[iVar1752]), 35, true);
					set_combat_float(&(Local_14.f_31[iVar1752]), 3, 0.5f);
					set_ped_accuracy(&(Local_14.f_31[iVar1752]), func_2067());
					_0x18ff3110cf47115d(&(Local_14.f_31[iVar1752]), 7, 0);
					set_ped_flee_attributes(&(Local_14.f_31[iVar1752]), 512, true);
					func_2068(&(Local_14.f_31[iVar1752]), 0);
					if (!does_blip_exist(&(iLocal_2261[iVar1752])))
					{
						iLocal_2261[iVar1752] = _blip_add_for_entity(-1595050198, &(Local_14.f_31[iVar1752]));
					}
					_blip_set_modifier(&(iLocal_2261[iVar1752]), -1034486097);
					set_entity_load_collision_flag(&(Local_14.f_31[iVar1752]), 1);
					_0x18ff3110cf47115d(&(Local_14.f_31[iVar1752]), 7, 0);
					if (iVar1752 == 5 || iVar1752 == 6)
					{
						set_ped_flee_attributes(&(Local_14.f_31[iVar1752]), 512, true);
						set_ped_combat_attributes(&(Local_14.f_31[iVar1752]), 0, true);
						set_ped_combat_attributes(&(Local_14.f_31[iVar1752]), 11, true);
						_0xfc3db99c8144cd81(&(Local_14.f_31[iVar1752]), &(iLocal_2420[3]), 0, 0, 0);
					}
					else
					{
						_0xfc3db99c8144cd81(&(Local_14.f_31[iVar1752]), &(iLocal_2420[1]), 0, 0, 0);
					}
				}
				if (!does_blip_exist(&(iLocal_2261[iVar1752])))
				{
					iLocal_2261[iVar1752] = _blip_add_for_entity(-1595050198, &(Local_14.f_31[iVar1752]));
					_blip_set_modifier(&(iLocal_2261[iVar1752]), -1034486097);
				}
			}
			iLocal_1756 = iVar1752 + 1;
		}
		return true;
	}
	return false;
}

void func_1443(char[4] cParam0)
{
	switch (func_1399(cParam0))
	{
		case 0:
			if (func_1657(cParam0, "NBD1_CLIMB", 0, 0, 0))
			{
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (func_1657(cParam0, "NBD1_GTR1_OBJ1", 4, 0, 0))
			{
				if (!does_blip_exist(iVar2245))
				{
					iLocal_2248 = func_1449(408396114, func_409(8, 14), 1);
				}
				func_135(cParam0, -1);
			}
			break;
		case 2:
			if (func_1657(cParam0, "NBD1_HRYCLMB", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 3:
			if (func_1657(cParam0, "NBD1_HOLE_IDLE", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 4:
			if (func_1657(cParam0, "NBD1_GETUPTHR", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 40:
			func_135(cParam0, -1);
			break;
		case 41:
			func_135(cParam0, -1);
			break;
		case 42:
			func_135(cParam0, -1);
			break;
		case 43:
			func_135(cParam0, -1);
			break;
		case 45:
			if (func_1657(cParam0, "NBD1_ARTJOHN", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
	}
}

void func_1444(char[4] cParam0)
{
	func_2069(cParam0);
	func_2043(cParam0);
	func_2070(cParam0);
	func_2071(cParam0);
	func_2072();
	func_2073(cParam0);
	if (!func_195(iVar1758, 131072))
	{
		func_2047(cParam0);
	}
	func_2074();
	func_2075();
	func_2076(cParam0);
	func_2049();
	func_2056(cParam0);
}

void func_1445()
{
	if (does_entity_exist(&(Local_14.f_85[0])))
	{
		delete_vehicle(Local_14.f_85[0]);
	}
	if (does_entity_exist(&(Local_14.f_85[1])))
	{
		delete_vehicle(Local_14.f_85[1]);
	}
}

void func_1446()
{
	iLocal_1756 = 0;
	while (iVar1754 < 7)
	{
		if (func_1101(&(Local_14.f_31[iVar1754]), 0))
		{
			disable_ped_pain_audio(&(Local_14.f_31[iVar1754]), true);
		}
		iLocal_1756 = iVar1754 + 1;
	}
}

void func_1447()
{
	iLocal_1756 = 0;
	while (iVar1754 < 4)
	{
		if (func_1101(&(Local_14.f_138[iVar1754]), 0))
		{
			disable_ped_pain_audio(&(Local_14.f_138[iVar1754]), true);
		}
		iLocal_1756 = iVar1754 + 1;
	}
}

void func_1448()
{
	iLocal_1756 = 0;
	while (iVar1754 < 4)
	{
		if (func_1101(&(Local_14.f_131[iVar1754]), 0))
		{
			disable_ped_pain_audio(&(Local_14.f_131[iVar1754]), true);
		}
		iLocal_1756 = iVar1754 + 1;
	}
}

int func_1449(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

bool func_1450(bool bParam0)
{
	if (func_2077(-1, bParam0))
	{
		iLocal_1756 = 0;
		while (iVar1753 < 12)
		{
			if (!is_entity_dead(&(Local_14.f_41[iVar1753])))
			{
				if (!func_2078(&(Local_14.f_41[iVar1753])))
				{
					set_blocking_of_non_temporary_events(&(Local_14.f_41[iVar1753]), false);
					set_ped_combat_range(&(Local_14.f_41[iVar1753]), 3);
					set_ped_hearing_range(&(Local_14.f_41[iVar1753]), 200f);
					set_ped_seeing_range(&(Local_14.f_41[iVar1753]), 200f);
					set_ped_config_flag(&(Local_14.f_41[iVar1753]), 186, false);
					set_ped_combat_movement(&(Local_14.f_41[iVar1753]), 1);
					set_ped_accuracy(&(Local_14.f_41[iVar1753]), func_2067());
					register_hated_targets_around_ped(&(Local_14.f_41[iVar1753]), 200f);
					if (!is_ped_in_combat(&(Local_14.f_41[iVar1753]), 0))
					{
						task_combat_ped(&(Local_14.f_41[iVar1753]), Global_35, 33554432, 0);
					}
					set_ped_combat_attributes(&(Local_14.f_41[iVar1753]), 111, false);
					set_ped_combat_attributes(&(Local_14.f_41[iVar1753]), 30, true);
					_0x18ff3110cf47115d(&(Local_14.f_41[iVar1753]), 7, 0);
					set_ped_combat_attributes(&(Local_14.f_41[iVar1753]), 35, true);
					set_combat_float(&(Local_14.f_41[iVar1753]), 3, 0.5f);
					set_ped_config_flag(&(Local_14.f_41[iVar1753]), 268, true);
					set_ped_flee_attributes(&(Local_14.f_41[iVar1753]), 512, true);
					func_2068(&(Local_14.f_41[iVar1753]), 0);
					if (!does_blip_exist(&(iLocal_2269[iVar1753])))
					{
						iLocal_2269[iVar1753] = _blip_add_for_entity(-1595050198, &(Local_14.f_41[iVar1753]));
					}
					_blip_set_modifier(&(iLocal_2269[iVar1753]), -1034486097);
					if (((((((iVar1753 != 4 && iVar1753 != 5) && iVar1753 != 11) && iVar1753 != 6) && iVar1753 != 7) && iVar1753 != 10) && iVar1753 != 8) && iVar1753 != 9)
					{
						set_ped_sphere_defensive_area(&(Local_14.f_41[iVar1753]), get_entity_coords(&(Local_14.f_41[iVar1753]), true, false), 2f, 0, 0, 0);
					}
					_0x18ff3110cf47115d(&(Local_14.f_41[iVar1753]), 7, 0);
				}
				else
				{
					set_blocking_of_non_temporary_events(&(Local_14.f_41[iVar1753]), true);
				}
				set_ped_accuracy(&(Local_14.f_41[iVar1753]), func_2067());
				set_entity_load_collision_flag(&(Local_14.f_41[iVar1753]), 1);
			}
			iLocal_1756 = iVar1753 + 1;
		}
		return true;
	}
	return false;
}

void func_1451(int iParam0, bool bParam1, bool bParam2)
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
		if (Global_35 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

void func_1452(char[4] cParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_458(cParam0, 2);
	}
	else
	{
		func_458(cParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1697(cParam0, cVar0);
	func_160(cParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(cParam0, 80)) && bParam3)
	{
		func_30(cParam0);
	}
	func_27(&(cParam0->f_13118), 0);
}

void func_1453()
{
	iLocal_1756 = 0;
	while (iVar1754 < 2)
	{
		if (func_1101(&(Local_14.f_56[iVar1754]), 0))
		{
			set_ped_accuracy(&(Local_14.f_56[iVar1754]), func_2067());
		}
		iLocal_1756 = iVar1754 + 1;
	}
	iLocal_1756 = 0;
	while (iVar1754 < 12)
	{
		if (func_1101(&(Local_14.f_41[iVar1754]), 0))
		{
			set_ped_accuracy(&(Local_14.f_41[iVar1754]), func_2067());
		}
		iLocal_1756 = iVar1754 + 1;
	}
	iLocal_1756 = 0;
	while (iVar1754 < 7)
	{
		if (func_1101(&(Local_14.f_31[iVar1754]), 0))
		{
			set_ped_accuracy(&(Local_14.f_31[iVar1754]), func_2067());
		}
		iLocal_1756 = iVar1754 + 1;
	}
	iLocal_1756 = 0;
	while (iVar1754 < 6)
	{
		if (func_1101(&(Local_14.f_22[iVar1754]), 0))
		{
			set_ped_accuracy(&(Local_14.f_22[iVar1754]), func_2067());
		}
		iLocal_1756 = iVar1754 + 1;
	}
	iLocal_1756 = 0;
	while (iVar1754 < 6)
	{
		if (func_1101(&(bLocal_2499[iVar1754]), 0))
		{
			set_ped_accuracy(&(bLocal_2499[iVar1754]), func_2067());
		}
		iLocal_1756 = iVar1754 + 1;
	}
}

void func_1454(char[4] cParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(&(iLocal_2449[iParam1])))
	{
		remove_entity_from_audio_mix_group(&(iLocal_2449[iParam1]), 0f);
	}
	set_entity_invincible(&(iLocal_2449[iParam1]), false);
	func_1634(cParam0, &(iLocal_2449[iParam1]));
	func_276(cParam0, iParam2, &(iLocal_2449[iParam1]), 0, 1, 0, 0);
}

void func_1455(char[4] cParam0)
{
	switch (func_1399(cParam0))
	{
		case 0:
			func_145(cParam0, &(Local_14.f_41[7]), "NBD1_Cop1", 0);
			if (func_1657(cParam0, "NBD1_COPSEES", 0, 0, 0))
			{
				func_135(cParam0, 5);
			}
			break;
		case 1:
			if (func_1657(cParam0, "NBD1_GTR2_OBJ1", 5, 0, 0))
			{
				func_135(cParam0, 7);
			}
			break;
		case 2:
			if (func_1657(cParam0, "NBD1_WRHR", 0, 0, 0))
			{
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (!func_1377())
			{
				func_237(&uLocal_1953);
				vVar1 = { get_offset_from_entity_in_world_coords(Global_35, -90f, 0f, 0f) };
				task_look_at_coord(Global_35, 2617.764f, -1363.397f, 64.48306f, -1, 48, 41, 0);
				func_135(cParam0, -1);
			}
			break;
		case 4:
			if (func_1657(cParam0, "NBD1_GAT", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 5:
			iVar0 = get_random_int_in_range(0, 2);
			if (is_string_null_or_empty(sVar1939))
			{
				switch (iVar0)
				{
					case 0:
						sLocal_1942 = "NBD1_CLIMCVR";
						break;
					case 1:
						sLocal_1942 = "NBD1_CLIMCVR_B";
						break;
					default:
						sLocal_1942 = "NBD1_CLIMCVR";
						break;
				}
			}
			if (func_1657(cParam0, sVar1939, 0, 0, 0))
			{
				sLocal_1942 = "";
				func_135(cParam0, 1);
			}
			break;
		case 6:
			func_135(cParam0, -1);
			break;
		case 7:
			if (func_1657(cParam0, "NBD1_GOALLEY", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 8:
			if (func_1657(cParam0, "NBD1_GATFIRE", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 9:
			if (func_1657(cParam0, "NBD1_LOSTCTRL", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 10:
			if (func_1657(cParam0, "NBD1_GETSHOOT", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 40:
			func_135(cParam0, -1);
			break;
	}
}

void func_1456(char[4] cParam0)
{
	func_2069(cParam0);
	func_2079(cParam0);
	func_2080(cParam0);
	func_2043(cParam0);
	func_1459(cParam0);
	func_2047(cParam0);
	func_2074();
	func_1479(cParam0);
	func_2081(cParam0);
}

void func_1457()
{
	if (!is_entity_dead(&(iLocal_2449[3])))
	{
		set_entity_invincible(&(iLocal_2449[3]), false);
	}
	if (!is_entity_dead(&(iLocal_2449[7])))
	{
		set_entity_invincible(&(iLocal_2449[7]), false);
	}
	if (!is_entity_dead(&(iLocal_2449[2])))
	{
		set_entity_invincible(&(iLocal_2449[2]), false);
	}
	if (!is_entity_dead(&(iLocal_2449[5])))
	{
		set_entity_invincible(&(iLocal_2449[5]), false);
	}
	if (!is_entity_dead(&(iLocal_2449[4])))
	{
		set_entity_invincible(&(iLocal_2449[4]), false);
	}
	if (!is_entity_dead(&(iLocal_2449[0])))
	{
		set_entity_invincible(&(iLocal_2449[0]), false);
	}
}

bool func_1458(char[4] cParam0)
{
	bVar0 = true;
	switch (iVar942)
	{
		case 1:
			if (_does_anim_scene_exist(&(uLocal_1769[33])))
			{
				if (!_is_anim_scene_loaded(&(uLocal_1769[33]), true, false))
				{
					if (!_is_anim_scene_loading(&(uLocal_1769[33]), true))
					{
						load_anim_scene(&(uLocal_1769[33]));
					}
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
			if (!func_2082(1))
			{
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[33]), "pl_EnterLennyRunsAcrossRoof"))
			{
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[33]), "pl_LennyGetsShot"))
			{
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[34]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[34]), true))
				{
					load_anim_scene(&(uLocal_1769[34]));
				}
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[34]), "pl_LennyGetsShot"))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_945 = 2;
			}
			break;
		case 2:
			if (bVar0)
			{
				iLocal_945 = 3;
			}
			break;
		case 3:
			set_anim_scene_entity(&(uLocal_1769[33]), "ARTHUR", Global_35, 0);
			set_anim_scene_entity(&(uLocal_1769[33]), "CS_Lenny", &(iLocal_2449[7]), 0);
			set_anim_scene_entity(&(uLocal_1769[33]), "S_M_M_PINLAW_01", &(Local_14.f_56[0]), 0);
			set_anim_scene_entity(&(uLocal_1769[33]), "S_M_M_PINLAW_01^1", &(Local_14.f_56[1]), 0);
			set_anim_scene_entity(&(uLocal_1769[34]), "ARTHUR", Global_35, 0);
			set_anim_scene_entity(&(uLocal_1769[34]), "CS_Lenny", &(iLocal_2449[7]), 0);
			set_anim_scene_entity(&(uLocal_1769[34]), "S_M_M_PINLAW_01", &(Local_14.f_56[0]), 0);
			set_anim_scene_entity(&(uLocal_1769[34]), "S_M_M_PINLAW_01^1", &(Local_14.f_56[1]), 0);
			iLocal_945 = 5;
			break;
		case 5:
			return true;
	}
	return false;
}

void func_1459(char[4] cParam0)
{
	if (!func_195(iVar1760, 67108864))
	{
		if (_is_anim_scene_started(&(uLocal_1769[58]), false))
		{
			if (_0x8d81e7824b7753f7(&(uLocal_1769[58]), "s_IG37_Cover_Loop", 1))
			{
				func_135(cParam0, 9);
				func_408(&uLocal_1763, 67108864);
			}
		}
	}
	if (!func_195(iVar1760, 134217728))
	{
		if (_is_anim_scene_started(&(uLocal_1769[58]), false))
		{
			if (_get_anim_scene_time(&(uLocal_1769[58])) > 2f)
			{
				func_135(cParam0, 10);
				func_408(&uLocal_1763, 134217728);
			}
		}
	}
	switch (iVar1459)
	{
		case 0:
			iLocal_1462 = 1;
			break;
		case 1:
			if (func_2083(cParam0))
			{
				func_1673(cParam0, &(iLocal_2449[5]), 1105014447, 422991367, 0, 1);
				func_2084(cParam0, &(iLocal_2449[5]), 2, 1);
				func_882(&(iLocal_2449[5]), func_1665(&(uLocal_1769[58]), "CS_JavierEscuella", "pl_ig37_Rooftop_Climb_Javier"), func_1666(&(uLocal_1769[58]), "CS_JavierEscuella", "pl_ig37_Rooftop_Climb_Javier"), 2, 1073741824);
				func_2085(&(uLocal_1769[58]), "pl_ig37_Rooftop_Climb_Javier");
				iLocal_1462 = 2;
			}
			break;
		case 2:
			if (_is_anim_scene_started(&(uLocal_1769[58]), false) && _get_anim_scene_time(&(uLocal_1769[58])) > 3f)
			{
				iLocal_1462 = 3;
			}
			break;
		case 3:
			if (func_2083(cParam0))
			{
				func_1673(cParam0, &(iLocal_2449[2]), 1105014447, 422991367, 0, 1);
				func_2084(cParam0, &(iLocal_2449[2]), 3, 1);
				func_882(&(iLocal_2449[2]), func_1665(&(uLocal_1769[56]), "CS_BillWilliamson", "pl_ig37_Rooftop_Climb_Bill"), func_1666(&(uLocal_1769[56]), "CS_BillWilliamson", "pl_ig37_Rooftop_Climb_Bill"), 2, 1073741824);
				func_2085(&(uLocal_1769[56]), "pl_ig37_Rooftop_Climb_Bill");
				iLocal_1462 = 4;
			}
			break;
		case 4:
			if (_is_anim_scene_started(&(uLocal_1769[56]), false) && _get_anim_scene_time(&(uLocal_1769[56])) > 6f)
			{
				iLocal_1462 = 5;
			}
			break;
		case 5:
			if (func_2083(cParam0))
			{
				func_1673(cParam0, &(iLocal_2449[3]), 1105014447, 422991367, 0, 1);
				func_2084(cParam0, &(iLocal_2449[3]), 7, 1);
				func_882(&(iLocal_2449[3]), func_1665(&(uLocal_1769[57]), "CS_CharlesSmith", "pl_ig37_Rooftop_Climb_Charles"), func_1666(&(uLocal_1769[57]), "CS_CharlesSmith", "pl_ig37_Rooftop_Climb_Charles"), 2, 1073741824);
				func_2085(&(uLocal_1769[57]), "pl_ig37_Rooftop_Climb_Charles");
				iLocal_1462 = 6;
			}
			break;
		case 6:
			if (_is_anim_scene_started(&(uLocal_1769[57]), false) && _get_anim_scene_time(&(uLocal_1769[57])) > 8f)
			{
				iLocal_1461 = 0;
				iLocal_1462 = 8;
			}
			break;
		case 7:
			if (func_2083(cParam0))
			{
				func_2085(&(uLocal_1769[57]), "pl_ig37_Charles_Idle");
				func_2085(&(uLocal_1769[58]), "pl_ig37_Javier_Idle");
				func_2085(&(uLocal_1769[56]), "pl_ig37_Bill_Idle");
				iLocal_1462 = 8;
			}
			break;
		case 8:
			break;
	}
}

void func_1460()
{
	func_1371(&(iLocal_2449[0]));
	func_1371(&(iLocal_2449[2]));
	func_1371(&(iLocal_2449[5]));
	func_1371(&(iLocal_2449[4]));
	func_1371(&(iLocal_2449[3]));
	func_1371(Global_35);
}

void func_1461(char[4] cParam0)
{
	switch (func_1399(cParam0))
	{
		case 0:
			func_1673(cParam0, &(iLocal_2449[7]), 1105014447, 422991367, 1, 1);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1657(cParam0, "NBD1_RJ_OBJ1", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 2:
			func_135(cParam0, -1);
			break;
		case 3:
			set_audio_flag("AllowScriptedSpeechInSlowMo", true);
			if (func_1657(cParam0, "NBD1_LENNY", 1, 0, 0))
			{
				func_135(cParam0, 4);
			}
			break;
		case 4:
			func_1471(cParam0, "NBD1_RJ_OBJ2", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, -1);
			break;
		case 5:
			if (func_1657(cParam0, "NBD1_PREJUMP", 0, 0, 0))
			{
				func_135(cParam0, 6);
			}
			break;
		case 6:
			if (func_1657(cParam0, "NBD1_RJ_OBJ3", 5, 0, 0))
			{
				func_201(cParam0, &(iLocal_2449[0]), 1);
				iLocal_2248 = func_1967(1259054292, &(iLocal_2325[13]), 1);
				func_135(cParam0, -1);
			}
			break;
		case 7:
			iVar0 = get_random_int_in_range(0, 2);
			if (is_string_null_or_empty(sVar1939))
			{
				switch (iVar0)
				{
					case 0:
						sLocal_1942 = "NBD1_LENDIE";
						break;
					case 1:
						sLocal_1942 = "NBD1_LENDIE_B";
						break;
					default:
						sLocal_1942 = "NBD1_LENDIE";
						break;
				}
			}
			if (func_1657(cParam0, sVar1939, 0, 0, 0))
			{
				sLocal_1942 = "";
				func_135(cParam0, -1);
			}
			break;
		case 8:
			if (func_1657(cParam0, "NBD1_JUMPIDLE", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 9:
			_0xf232c2c546ac16d0("NBD1_JUMP1");
			start_preloaded_conversation("NBD1_JUMP1");
			func_135(cParam0, -1);
			break;
		case 10:
			iVar1 = get_random_int_in_range(0, 3);
			switch (iVar1)
			{
				case 0:
					if (func_1657(cParam0, "NBD1_IG17_GEST1", 0, 0, 0))
					{
						func_135(cParam0, -1);
					}
					break;
				case 1:
					if (func_1657(cParam0, "NBD1_IG17_GEST2", 0, 0, 0))
					{
						func_135(cParam0, -1);
					}
					break;
				case 2:
					if (func_1657(cParam0, "NBD1_IG17_GEST3", 0, 0, 0))
					{
						func_135(cParam0, -1);
					}
					break;
			}
			break;
		case 11:
			func_135(cParam0, -1);
			break;
		case 12:
			if (func_1657(cParam0, "NBD1_LENNY_APPR", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 13:
			if (func_1657(cParam0, "NBD1_BILLJUMP", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 40:
			func_135(cParam0, -1);
			break;
	}
}

bool func_1462(char[4] cParam0)
{
	bVar0 = true;
	switch (iVar937)
	{
		case 0:
			if ((((((((_does_anim_scene_exist(&(uLocal_1769[18])) && _does_anim_scene_exist(&(uLocal_1769[19]))) && _does_anim_scene_exist(&(uLocal_1769[20]))) && _does_anim_scene_exist(&(uLocal_1769[22]))) && _does_anim_scene_exist(&(uLocal_1769[21]))) && _does_anim_scene_exist(&(uLocal_1769[23]))) && _does_anim_scene_exist(&(uLocal_1769[24]))) && _does_anim_scene_exist(&(uLocal_1769[25]))) && _does_anim_scene_exist(&(uLocal_1769[26])))
			{
				iLocal_940 = 2;
			}
			break;
		case 2:
			bVar0 = true;
			if (!does_entity_exist(&(iLocal_2449[0])))
			{
				bVar0 = false;
			}
			if (!does_entity_exist(&(iLocal_2449[2])))
			{
				bVar0 = false;
			}
			if (!does_entity_exist(&(iLocal_2449[3])))
			{
				bVar0 = false;
			}
			if (!does_entity_exist(&(iLocal_2449[5])))
			{
				bVar0 = false;
			}
			if (!does_entity_exist(&(iLocal_2449[4])))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_940 = 3;
			}
			break;
		case 3:
			set_anim_scene_entity(&(uLocal_1769[19]), "player_zero", Global_35, 0);
			set_anim_scene_entity(&(uLocal_1769[19]), "CS_Lenny", &(iLocal_2449[7]), 0);
			set_anim_scene_entity(&(uLocal_1769[18]), "CS_BillWilliamson", &(iLocal_2449[2]), 0);
			set_anim_scene_entity(&(uLocal_1769[18]), "CS_CharlesSmith", &(iLocal_2449[3]), 0);
			set_anim_scene_entity(&(uLocal_1769[18]), "CS_Dutch", &(iLocal_2449[0]), 0);
			set_anim_scene_entity(&(uLocal_1769[18]), "CS_JavierEscuella", &(iLocal_2449[5]), 0);
			set_anim_scene_entity(&(uLocal_1769[18]), "CS_MicahBell", &(iLocal_2449[4]), 0);
			set_anim_scene_entity(&(uLocal_1769[20]), "BILLWILLIAMSON", &(iLocal_2449[2]), 0);
			set_anim_scene_entity(&(uLocal_1769[21]), "CHARLESSMITH", &(iLocal_2449[3]), 0);
			set_anim_scene_entity(&(uLocal_1769[22]), "DUTCH", &(iLocal_2449[0]), 0);
			set_anim_scene_entity(&(uLocal_1769[23]), "JAVIERESCUELA", &(iLocal_2449[5]), 0);
			set_anim_scene_entity(&(uLocal_1769[24]), "MICAHBELL", &(iLocal_2449[4]), 0);
			set_anim_scene_entity(&(uLocal_1769[25]), "ARTHUR", Global_35, 0);
			set_anim_scene_entity(&(uLocal_1769[26]), "ARTHUR", Global_35, 0);
			func_1964(cParam0, &(uLocal_1769[25]));
			func_1964(cParam0, &(uLocal_1769[26]));
			func_1964(cParam0, &(uLocal_1769[19]));
			func_1964(cParam0, &(uLocal_1769[18]));
			func_1964(cParam0, &(uLocal_1769[20]));
			func_1964(cParam0, &(uLocal_1769[21]));
			func_1964(cParam0, &(uLocal_1769[22]));
			func_1964(cParam0, &(uLocal_1769[23]));
			func_1964(cParam0, &(uLocal_1769[24]));
			iLocal_940 = 1;
			break;
		case 1:
			if (!_is_anim_scene_loaded(&(uLocal_1769[18]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[18]), true))
				{
					func_1964(cParam0, &(uLocal_1769[18]));
				}
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[18]), "pl_IG14_Gang_Approach_Jump_to_Cover"))
			{
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[19]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[19]), true))
				{
					func_1964(cParam0, &(uLocal_1769[19]));
				}
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[19]), "pl_IG14_Player_Lenny_approach"))
			{
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[19]), "pl_IG14_Player_Lenny_approach_rifle"))
			{
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[20]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[20]), true))
				{
					func_1964(cParam0, &(uLocal_1769[20]));
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_1769[20]), "pl_IG14_Bill_ExitFromCover"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_1769[20]), "pl_IG14_Bill_ExitFromCover"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_1769[20]), "pl_IG14_Bill_ExitFromCover");
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_1769[20]), "pl_IG14_Bill_CoverFlinch"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_1769[20]), "pl_IG14_Bill_CoverFlinch"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_1769[20]), "pl_IG14_Bill_CoverFlinch");
				}
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[21]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[21]), true))
				{
					func_1964(cParam0, &(uLocal_1769[21]));
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_1769[21]), "pl_IG14_Charles_ExitFromCover"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_1769[21]), "pl_IG14_Charles_ExitFromCover"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_1769[21]), "pl_IG14_Charles_ExitFromCover");
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_1769[21]), "pl_IG14_Charles_CoverFlinch"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_1769[21]), "pl_IG14_Charles_CoverFlinch"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_1769[21]), "pl_IG14_Charles_CoverFlinch");
				}
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[22]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[22]), true))
				{
					func_1964(cParam0, &(uLocal_1769[22]));
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_1769[22]), "pl_IG14_Dutch_ExitFromCover"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_1769[22]), "pl_IG14_Dutch_ExitFromCover"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_1769[22]), "pl_IG14_Dutch_ExitFromCover");
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_1769[22]), "pl_IG14_Dutch_CoverFlinch"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_1769[22]), "pl_IG14_Dutch_CoverFlinch"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_1769[22]), "pl_IG14_Dutch_CoverFlinch");
				}
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[23]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[23]), true))
				{
					func_1964(cParam0, &(uLocal_1769[23]));
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_1769[23]), "pl_IG14_Javier_ExitFromCover"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_1769[23]), "pl_IG14_Javier_ExitFromCover"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_1769[23]), "pl_IG14_Javier_ExitFromCover");
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_1769[23]), "pl_IG14_Javier_CoverFlinch"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_1769[23]), "pl_IG14_Javier_CoverFlinch"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_1769[23]), "pl_IG14_Javier_CoverFlinch");
				}
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[24]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[24]), true))
				{
					func_1964(cParam0, &(uLocal_1769[24]));
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_1769[24]), "pl_IG14_Micah_ExitFromCover"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_1769[24]), "pl_IG14_Micah_ExitFromCover"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_1769[24]), "pl_IG14_Micah_ExitFromCover");
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_1769[24]), "pl_IG14_Micah_CoverFlinch"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_1769[24]), "pl_IG14_Micah_CoverFlinch"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_1769[24]), "pl_IG14_Micah_CoverFlinch");
				}
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[25]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[25]), true))
				{
					func_1964(cParam0, &(uLocal_1769[25]));
				}
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[26]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[26]), true))
				{
					func_1964(cParam0, &(uLocal_1769[26]));
				}
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_940 = 5;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_1463(char[4] cParam0)
{
	func_1473(cParam0);
	func_1672(cParam0);
	func_2086(cParam0);
	func_2047(cParam0);
	func_2087(cParam0);
	func_2088();
	func_2089();
	func_1479(cParam0);
}

bool func_1464(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		bVar0 = fParam3;
	}
	else
	{
		bVar0 = func_973(bParam0, Global_36, 1);
	}
	if (bParam2 > 0f)
	{
		if (bVar0 < bParam2)
		{
			return true;
		}
	}
	if (bVar0 < bParam1)
	{
		if (_0x5102307ce88798eb(bParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(bParam0, fParam4))
				{
					return true;
				}
			}
			else if (is_tracked_ped_visible(bParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(bParam0))
		{
			if (is_entity_on_screen(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_1465(struct<2> Param0)
{
	iVar0 = 0;
	if (!func_272(Param0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < func_273(Param0))
	{
		iVar2 = func_1690(Param0, iVar1);
		if (does_entity_exist(iVar2))
		{
			if (!is_entity_dead(iVar2))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_1466(struct<2> Param0, int iParam2)
{
	iVar0 = 0;
	if (!func_272(Param0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < func_273(Param0))
	{
		iVar2 = func_1690(Param0, iVar1);
		if (does_entity_exist(iVar2))
		{
			if (!is_entity_dead(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					bVar3 = get_ped_index_from_entity_index(iVar2);
					if (func_1101(bVar3, iParam2))
					{
						iVar0++;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_1467()
{
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -1304887797, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
	disable_control_action(0, 42190210, false);
	disable_control_action(0, -1292666904, false);
	set_ped_config_flag(Global_35, 334, true);
	_0x0751d461f06e41ce(player_id(), 8, 0, 1);
}

void func_1468(char[4] cParam0)
{
	switch (iVar1462)
	{
		case 0:
			if (func_195(iVar1757, 1073741824))
			{
				if (func_33(cParam0) == iLocal_232)
				{
					func_135(cParam0, 5);
				}
				Local_236[15]->f_4 = 1;
				iLocal_2608 = func_2034("NBD1_UC_JUMP", -640622144, &(iLocal_2325[82]), 3, 0, 1, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				if (get_is_waypoint_recording_loaded(sVar1889))
				{
					use_waypoint_recording_as_assisted_movement_route(sVar1889, 1, 1065353216, 1f, 0);
				}
				if (get_is_waypoint_recording_loaded(sVar1890))
				{
					use_waypoint_recording_as_assisted_movement_route(sVar1890, 1, 1065353216, 1f, 0);
				}
				if (get_is_waypoint_recording_loaded(sVar1891))
				{
					use_waypoint_recording_as_assisted_movement_route(sVar1891, 1, 1065353216, 1f, 0);
				}
				iLocal_1465 = 1;
			}
			break;
		case 1:
			func_2090(cParam0);
			if (func_1397(Global_35, &(iLocal_2325[45]), 1, 0))
			{
				iLocal_1465 = 5;
			}
			func_2091(cParam0, "NBD1_JUMP1", 1);
			if (func_1397(Global_35, &(iLocal_2325[12]), 1, 0))
			{
				set_ragdoll_blocking_flags(Global_35, 512);
				if (func_2092(Global_35, 2702.689f, -1274.419f, 65.8512f, 0.75f))
				{
					if ((is_disabled_control_just_pressed(0, -640622144) || func_2093(iVar2605, 1)) && !is_ped_climbing(Global_35))
					{
						func_135(cParam0, 40);
						set_ped_reset_flag(Global_35, 29, true);
						if (_0xa218d2bbcaa7388c(Global_35, 1))
						{
							func_2094();
						}
						else if (_0xa218d2bbcaa7388c(Global_35, 0))
						{
							func_2095();
						}
						else
						{
							func_2095();
						}
						func_11(&iLocal_2608, 1, 1);
						_0xdd1232b332cbb9e7(3, 1, 0);
						iLocal_1465 = 2;
					}
				}
			}
			else
			{
				enable_control_action(0, -640622144, true);
			}
			break;
		case 2:
			set_ragdoll_blocking_flags(Global_35, 512);
			set_ped_reset_flag(Global_35, 29, true);
			iLocal_1465 = 3;
			break;
		case 3:
			set_ragdoll_blocking_flags(Global_35, 512);
			set_ped_reset_flag(Global_35, 29, true);
			if (!func_195(iVar1755, 131072))
			{
				func_135(cParam0, 9);
				func_408(&uLocal_1758, 131072);
			}
			if (_get_anim_scene_time(&(uLocal_1769[26])) > 2f || _get_anim_scene_time(&(uLocal_1769[25])) > 2f)
			{
				if (!func_195(iVar1755, 262144))
				{
					set_time_scale(1f);
					func_408(&uLocal_1758, 262144);
				}
			}
			if (_get_anim_scene_time(&(uLocal_1769[26])) > 4f || _get_anim_scene_time(&(uLocal_1769[25])) > 4f)
			{
				iLocal_1465 = 4;
			}
			break;
		case 4:
			set_ped_reset_flag(Global_35, 29, true);
			if (_is_anim_scene_finished(&(uLocal_1769[26]), false) || _is_anim_scene_finished(&(uLocal_1769[25]), false))
			{
				if (!_get_ped_crouch_movement(Global_35))
				{
					_set_ped_crouch_movement(Global_35, true, 0, false);
				}
				set_player_control(player_id(), false, 256, false);
				iLocal_1465 = 5;
			}
			break;
		case 5:
			break;
	}
}

void func_1469()
{
	set_ped_config_flag(Global_35, 334, false);
	_0x0751d461f06e41ce(player_id(), 8, 0, 0);
}

void func_1470()
{
	iLocal_1756 = 0;
	while (iVar1754 < 6)
	{
		if (does_entity_exist(&(Local_14.f_22[iVar1754])))
		{
			delete_ped(Local_14.f_22[iVar1754]);
		}
		iLocal_1756 = iVar1754 + 1;
	}
	iLocal_1756 = 0;
	while (iVar1754 < 7)
	{
		if (does_entity_exist(&(Local_14.f_31[iVar1754])))
		{
			delete_ped(Local_14.f_31[iVar1754]);
		}
		iLocal_1756 = iVar1754 + 1;
	}
	iLocal_1756 = 0;
	while (iVar1754 < 12)
	{
		if (does_entity_exist(&(Local_14.f_41[iVar1754])))
		{
			delete_ped(Local_14.f_41[iVar1754]);
		}
		iLocal_1756 = iVar1754 + 1;
	}
	iLocal_1756 = 0;
	while (iVar1754 < 6)
	{
		if (does_entity_exist(&(bLocal_2499[iVar1754])))
		{
			delete_ped(bLocal_2499[iVar1754]);
		}
		iLocal_1756 = iVar1754 + 1;
	}
	iLocal_1756 = 0;
	while (iVar1754 < 4)
	{
		if (does_entity_exist(&(Local_14.f_131[iVar1754])))
		{
			delete_ped(Local_14.f_131[iVar1754]);
		}
		iLocal_1756 = iVar1754 + 1;
	}
}

void func_1471(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1710(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != cParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		cParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(cParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_140(cParam0, func_33(cParam0), 33554432);
}

void func_1472()
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iLocal_1472[iVar0] = -1;
		iVar0++;
	}
}

void func_1473(char[4] cParam0)
{
	func_2096(cParam0);
	func_2097(cParam0);
	func_2098(cParam0);
	func_2099(cParam0);
	func_2100(cParam0);
}

bool func_1474(int iParam0, bool bParam1)
{
	if (!func_272(Local_14.f_59))
	{
		Local_14.f_59 = { func_444() };
	}
	if (func_1609(&(Local_14.f_59), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_61[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_61[0] = func_2101(737910671, 2718.213f, -1322.37f, 49.677f, 132.78f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_61[0]), "Lawman01");
		func_1610(Local_14.f_59, &(Local_14.f_61[0]));
		func_1611(&(Local_14.f_61[0]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_61[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_61[1] = func_2101(737910671, 2721.167f, -1319.058f, 48.0922f, 134.78f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_61[1]), "Lawman02");
		func_1610(Local_14.f_59, &(Local_14.f_61[1]));
		func_1611(&(Local_14.f_61[1]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_61[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_61[2] = func_2101(737910671, 2758.089f, -1311.006f, 47.6049f, 325.7967f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_61[2]), "Lawman03");
		func_1610(Local_14.f_59, &(Local_14.f_61[2]));
		func_1611(&(Local_14.f_61[2]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_61[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_61[3] = func_2101(737910671, 2750.824f, -1307.497f, 47.6414f, 325.7967f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_61[3]), "Lawman04");
		func_1610(Local_14.f_59, &(Local_14.f_61[3]));
		func_1611(&(Local_14.f_61[3]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 3)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_61[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_61[4] = func_2101(737910671, 2749.903f, -1312.269f, 47.6975f, 243.8222f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_61[4]), "Lawman05");
		func_1610(Local_14.f_59, &(Local_14.f_61[4]));
		func_1611(&(Local_14.f_61[4]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	func_1612(&(Local_14.f_59), 1);
	return true;
}

void func_1475()
{
	iLocal_1756 = 0;
	while (iVar1754 <= 4)
	{
		set_blocking_of_non_temporary_events(&(Local_14.f_61[iVar1754]), true);
		func_1383(&(Local_14.f_61[iVar1754]), -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		_0xae6004120c18df97(&(Local_14.f_61[iVar1754]), 0, 0);
		iLocal_1756 = iVar1754 + 1;
	}
}

void func_1476(char[4] cParam0)
{
	func_2102(&(cParam0->f_7375));
}

void func_1477(char[4] cParam0)
{
	switch (func_1399(cParam0))
	{
		case 1:
			if (func_1657(cParam0, "NBD1_KEEPMOV", 0, 0, 0))
			{
				iLocal_2248 = func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
				func_1414(cParam0);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			func_1471(cParam0, "NBD1_RE_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, -1);
			break;
		case 3:
			if (func_1657(cParam0, "NBD1_COPSPOT", 0, 0, 0))
			{
				func_135(cParam0, 10);
			}
			break;
		case 4:
			if (!_0x54b187f111d9c6f8(&(iLocal_2449[0]), 0))
			{
				if (func_1657(cParam0, "NBD1_COPPATROL", 0, 0, 0))
				{
					func_135(cParam0, -1);
				}
			}
			break;
		case 5:
			func_135(cParam0, -1);
			break;
		case 6:
			func_135(cParam0, -1);
			break;
		case 7:
			if (func_1657(cParam0, "NBD1_JUMP1", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 8:
			func_1471(cParam0, "NBD1_CLIMB", -1082130432, 0, 0, -1, -1, 0);
			func_201(cParam0, &(iLocal_2449[0]), 1);
			if (does_blip_exist(iVar2245))
			{
				remove_blip(&iLocal_2248);
			}
			iLocal_2248 = func_1449(408396114, func_409(1, 3), 1);
			func_135(cParam0, -1);
			break;
		case 9:
			func_135(cParam0, -1);
			break;
		case 10:
			if (func_1657(cParam0, "NBD1_IG28_A", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 11:
			if (func_1657(cParam0, "NBD1_IG28_B", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 12:
			if (func_1657(cParam0, "NBD1_IG27", 0, 0, 0))
			{
				iLocal_2248 = func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
				func_135(cParam0, -1);
			}
			break;
		case 13:
			if (func_1657(cParam0, "NBD1_WINDOW", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 14:
			if (func_1657(cParam0, "NBD1_COPPATROL2", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 15:
			if (func_1657(cParam0, "NBD1_NOSHOT", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
	}
}

void func_1478(char[4] cParam0)
{
	func_1473(cParam0);
	func_2103(cParam0);
	func_1468(cParam0);
	func_1672(cParam0);
	func_2104(cParam0);
	func_2105(cParam0);
	func_2089();
	func_1479(cParam0);
	func_2086(cParam0);
	func_2106(cParam0);
	func_2107(cParam0);
	func_2108();
}

void func_1479(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		vVar0 = { get_entity_coords(Global_35, true, false) };
		if (vVar0.z < 54f || func_1397(Global_35, &(iLocal_2325[74]), 1, 0))
		{
			if (is_entity_in_air(Global_35, 1) || is_ped_ragdoll(Global_35))
			{
				func_1451(Global_35, 0, 0);
			}
			else
			{
				func_1452(cParam0, "NBD1_FAIL_GANG", "", 1, 0);
			}
		}
	}
}

void func_1480()
{
	vVar0 = { 2764.914f, -1358.174f, 45.1407f };
	if (!func_195(iVar1757, -2147483648))
	{
		func_131(vVar0, 50f, 1, 0, 0, 0, 0);
		func_408(&uLocal_1759, -2147483648);
	}
}

void func_1481(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_1482(char[4] cParam0)
{
	bVar1 = true;
	while (bVar1)
	{
		bVar1 = false;
		switch (&iLocal_1472[0])
		{
			case 0:
				if (func_2109(cParam0))
				{
					func_2110();
					iLocal_1472[0] = 1;
				}
				break;
			case 1:
				if ((func_881(Global_35, &(iLocal_2449[0]), 1, 1) < 7.5f || func_2111(Global_35, &(iLocal_2449[0]), cVar1892, 1112014848)) || func_1397(Global_35, &(iLocal_2325[78]), 1, 0))
				{
					open_sequence_task(&iVar0);
					task_follow_waypoint_recording(0, cVar1892, 0, 134219816, -1, 0, 0, 90000);
					task_follow_nav_mesh_to_coord(0, func_1665(&(uLocal_1769[15]), "DUTCH", 0), 1f, 20000, 0.25f, 1, 40000f);
					close_sequence_task(iVar0);
					task_perform_sequence(&(iLocal_2449[0]), iVar0);
					clear_sequence_task(&iVar0);
					if (func_195(iVar1757, 4096))
					{
						if (&iLocal_1472[1] != -1)
						{
							iLocal_1472[1] = 1;
						}
						if (&iLocal_1472[2] != -1)
						{
							iLocal_1472[2] = 1;
						}
						if (&iLocal_1472[3] != -1)
						{
							iLocal_1472[3] = 1;
						}
						if (&iLocal_1472[4] != -1)
						{
							iLocal_1472[4] = 1;
						}
						func_196(&uLocal_1760, 4096);
					}
					iLocal_1472[0] = 2;
				}
				break;
			case 2:
				if ((get_script_task_status(&(iLocal_2449[0]), 242628503, true) != 0 && get_script_task_status(&(iLocal_2449[0]), 242628503, true) != 1) && func_973(&(iLocal_2449[0]), func_1665(&(uLocal_1769[15]), "DUTCH", 0), 1) < 10f)
				{
					iLocal_1472[0] = 4;
				}
				else if ((func_881(Global_35, &(iLocal_2449[0]), 1, 1) > 20f && !func_2111(Global_35, &(iLocal_2449[0]), cVar1892, 1112014848)) && !func_1397(Global_35, &(iLocal_2325[78]), 1, 0))
				{
					func_135(cParam0, 4);
					iLocal_1472[0] = 3;
				}
				else if (get_script_task_status(&(iLocal_2449[0]), 242628503, true) != 0 && get_script_task_status(&(iLocal_2449[0]), 242628503, true) != 1)
				{
					iLocal_1472[0] = 1;
				}
				break;
			case 3:
				if (&iLocal_1472[1] != -1)
				{
					iLocal_1472[1] = 3;
				}
				if (&iLocal_1472[2] != -1)
				{
					iLocal_1472[2] = 3;
				}
				if (&iLocal_1472[3] != -1)
				{
					iLocal_1472[3] = 3;
				}
				if (&iLocal_1472[4] != -1)
				{
					iLocal_1472[4] = 3;
				}
				func_2112();
				iLocal_1472[0] = 1;
				break;
			case 4:
				if (!_0x54b187f111d9c6f8(&(iLocal_2449[0]), 0))
				{
					func_2113();
					iLocal_1472[0] = 5;
				}
				break;
			case 5:
				if (_does_anim_scene_exist(&(uLocal_1769[15])) && _get_anim_scene_time(&(uLocal_1769[15])) > 6f)
				{
					if (!func_10(iVar2603))
					{
						iLocal_2606 = func_2034("NBD1_UC_WINDOW", -640622144, &(iLocal_2325[42]), 3, 0, 1, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
						Local_236[20]->f_4 = 1;
					}
				}
				if (!func_195(iVar1760, 32))
				{
					if (!is_entity_dead(&(iLocal_2449[0])))
					{
						if (is_entity_playing_anim(&(iLocal_2449[0]), "script_story@nbd1@leadin@mcs5", "wait_idle_dutch", 1))
						{
							func_135(cParam0, 8);
							func_408(&uLocal_1763, 32);
						}
					}
				}
				vVar2 = { _0xf70f00013a62f866(&(iLocal_2325[42])) };
				if (func_973(Global_35, vVar2, 1) < 7.5f)
				{
					set_ped_reset_flag(Global_35, 2, true);
				}
				if (func_1397(Global_35, &(iLocal_2325[42]), 1, 0))
				{
					if (func_2093(iVar2603, 1))
					{
						func_2114();
						func_11(&iLocal_2606, 1, 1);
						iLocal_1472[0] = 6;
					}
				}
				else
				{
					func_2115(cParam0);
				}
				break;
			case 6:
				if (_0xb89fcff19dafff28(&(uLocal_1769[15]), "arthur") || _0x005e6f28dd7ed58d(&(uLocal_1769[15]), "arthur"))
				{
					iLocal_1472[0] = 7;
					bVar1 = true;
				}
				break;
			case 7:
				break;
		}
	}
}

bool func_1483()
{
	if (!func_195(iVar1757, 1048576))
	{
		if (func_2116())
		{
			_0x4c05b42a8d937796();
			vVar0 = { _0x35d302397e524939(_0x6c87f49bfa181db5(2749.011f, -1440.904f, 44.9837f), 2749.011f, -1440.904f, 44.9837f, 1f, 1) };
			if (!does_entity_exist(iVar2444))
			{
				iLocal_2446 = _create_mission_train(-651487570, vVar0, true, false, true, true);
				set_train_speed(iVar2444, 0f);
				set_train_cruise_speed(iVar2444, 0f);
				set_vehicle_engine_on(iVar2444, false, true);
				_0x1bfbafcc6760ff02(iVar2444, 0);
				_0x3660bcab3a6bb734(iVar2444);
				_0xba8818212633500a(iVar2444, 0, 1);
			}
			else
			{
				set_train_speed(iVar2444, 0f);
				set_train_cruise_speed(iVar2444, 0f);
				set_vehicle_engine_on(iVar2444, false, true);
				_0x1bfbafcc6760ff02(iVar2444, 0);
				_0x3660bcab3a6bb734(iVar2444);
				if (_0xbd3c4a2ed509205e(iVar2444))
				{
					vVar3 = { get_entity_coords(iVar2444, true, false) };
					func_2117(iVar2444);
					func_1064();
					func_408(&uLocal_1759, 1048576);
					return true;
				}
			}
		}
	}
	else
	{
		func_1064();
		return true;
	}
	return false;
}

bool func_1484(bool bParam0)
{
	if (func_2118(-1, bParam0))
	{
		iLocal_1756 = 0;
		while (iVar1753 < 4)
		{
			if (!is_entity_dead(&(Local_14.f_94[iVar1753])))
			{
				set_blocking_of_non_temporary_events(&(Local_14.f_94[iVar1753]), true);
				set_ped_relationship_group_hash(&(Local_14.f_94[iVar1753]), 1269650476);
				set_ped_config_flag(&(Local_14.f_94[iVar1753]), 233, false);
				set_entity_load_collision_flag(&(Local_14.f_94[iVar1753]), 1);
				set_ped_seeing_range(&(Local_14.f_94[iVar1753]), 8f);
				_0x18ff3110cf47115d(&(Local_14.f_94[iVar1753]), 7, 0);
				_0x88e32db8c1a4aa4b(&(Local_14.f_94[iVar1753]), 10f);
				set_ped_path_can_use_climbovers(&(Local_14.f_94[iVar1753]), false);
				_0x18ff3110cf47115d(&(Local_14.f_94[iVar1753]), 7, 0);
				if (iVar1753 == 0)
				{
					_set_ped_body_component(&(Local_14.f_94[iVar1753]), 905024571);
				}
				else if (iVar1753 == 1)
				{
					_set_ped_body_component(&(Local_14.f_94[iVar1753]), -295271134);
				}
				else if (iVar1753 == 2)
				{
					_set_ped_body_component(&(Local_14.f_94[iVar1753]), 1477728384);
				}
				else if (iVar1753 == 3)
				{
					_set_ped_body_component(&(Local_14.f_94[iVar1753]), 218350172);
				}
				_update_ped_variation(&(Local_14.f_94[iVar1753]), false, true, true, true, false);
			}
			iLocal_1756 = iVar1753 + 1;
		}
		return true;
	}
	return false;
}

bool func_1485(bool bParam0)
{
	iVar0 = 1;
	iVar1 = 0;
	iLocal_1756 = 0;
	while (iVar1753 <= 7)
	{
		if (!does_entity_exist(&(Local_14.f_120[iVar1753])))
		{
			if (iVar1 == 0 && func_2119(iVar1753, bParam0))
			{
				if (bParam0)
				{
					iVar1 = 1;
				}
				set_blocking_of_non_temporary_events(&(Local_14.f_120[iVar1753]), true);
				set_ped_relationship_group_hash(&(Local_14.f_120[iVar1753]), 1269650476);
				set_ped_config_flag(&(Local_14.f_120[iVar1753]), 233, false);
				set_entity_load_collision_flag(&(Local_14.f_120[iVar1753]), 1);
				func_2120(Local_14.f_120[iVar1753]);
				if (iVar1753 != 2)
				{
					set_ped_seeing_range(&(Local_14.f_120[iVar1753]), 8f);
				}
				else
				{
					set_ped_seeing_range(&(Local_14.f_120[iVar1753]), 12f);
				}
				_0x18ff3110cf47115d(&(Local_14.f_120[iVar1753]), 7, 0);
				_0x88e32db8c1a4aa4b(&(Local_14.f_120[iVar1753]), 10f);
				set_ped_path_can_use_climbovers(&(Local_14.f_120[iVar1753]), false);
				_0x18ff3110cf47115d(&(Local_14.f_120[iVar1753]), 7, 0);
				if (iVar1753 == 5 || iVar1753 == 6)
				{
					request_ped_visibility_tracking(&(Local_14.f_120[iVar1753]));
					func_882(&(Local_14.f_120[iVar1753]), func_1999(16, iVar1753), func_2000(16, iVar1753), 2, 1073741824);
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		iLocal_1756 = iVar1753 + 1;
	}
	return iVar0;
}

void func_1486(char[4] cParam0)
{
	if (!func_195(iVar1756, 2097152))
	{
		func_145(cParam0, &(Local_14.f_120[0]), "NBD1_Guard1", 0);
		func_145(cParam0, &(Local_14.f_120[1]), "NBD1_Guard2", 0);
		func_145(cParam0, &(Local_14.f_120[3]), "NBD1_Guard4", 0);
		func_145(cParam0, &(Local_14.f_120[2]), "NBD1_Guard3", 0);
		func_145(cParam0, &(Local_14.f_120[7]), "NBD1_Guard5", 0);
		func_408(&uLocal_1759, 2097152);
	}
}

bool func_1487(char[4] cParam0)
{
	switch (iVar936)
	{
		case 0:
			if (_does_anim_scene_exist(&(uLocal_1769[16])) && _does_anim_scene_exist(&(uLocal_1769[17])))
			{
				iLocal_939 = 2;
			}
			break;
		case 2:
			iLocal_939 = 3;
			break;
		case 3:
			set_anim_scene_entity(&(uLocal_1769[16]), "Dutch", &(iLocal_2449[0]), 0);
			set_anim_scene_entity(&(uLocal_1769[16]), "ARTHUR", Global_35, 0);
			set_anim_scene_entity(&(uLocal_1769[16]), "CharlesSmith", &(iLocal_2449[3]), 0);
			set_anim_scene_entity(&(uLocal_1769[16]), "CharlesSmith", &(iLocal_2449[3]), 0);
			set_anim_scene_entity(&(uLocal_1769[16]), "S_M_M_PinLaw_01^1", &(Local_14.f_94[0]), 0);
			func_145(cParam0, &(Local_14.f_94[0]), "NBD1_Pinkerton", 0);
			set_anim_scene_entity(&(uLocal_1769[16]), "S_M_M_PinLaw_01", &(Local_14.f_94[1]), 0);
			func_145(cParam0, &(Local_14.f_94[1]), "NBD1_Cop2", 0);
			set_anim_scene_entity(&(uLocal_1769[16]), "S_M_M_PinLaw_01^2", &(Local_14.f_94[2]), 0);
			set_anim_scene_entity(&(uLocal_1769[16]), "S_M_M_PinLaw_01^3", &(Local_14.f_94[3]), 0);
			set_anim_scene_entity(&(uLocal_1769[17]), "ARTHUR", Global_35, 0);
			set_anim_scene_entity(&(uLocal_1769[17]), "Dutch", &(iLocal_2449[0]), 0);
			set_anim_scene_entity(&(uLocal_1769[17]), "CharlesSmith", &(iLocal_2449[3]), 0);
			set_anim_scene_entity(&(uLocal_1769[17]), "S_M_M_PinLaw_01^1", &(Local_14.f_94[0]), 0);
			set_anim_scene_entity(&(uLocal_1769[17]), "S_M_M_PinLaw_01", &(Local_14.f_94[1]), 0);
			set_anim_scene_entity(&(uLocal_1769[17]), "S_M_M_PinLaw_01^2", &(Local_14.f_94[2]), 0);
			set_anim_scene_entity(&(uLocal_1769[17]), "S_M_M_PinLaw_01^3", &(Local_14.f_94[3]), 0);
			func_1964(cParam0, &(uLocal_1769[16]));
			func_1964(cParam0, &(uLocal_1769[17]));
			iLocal_939 = 1;
			break;
		case 1:
			bVar0 = true;
			if (!_is_anim_scene_loaded(&(uLocal_1769[16]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[16]), true))
				{
					func_1964(cParam0, &(uLocal_1769[16]));
				}
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[16]), "PL_Distraction"))
			{
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_1769[17]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_1769[17]), true))
				{
					func_1964(cParam0, &(uLocal_1769[17]));
				}
				bVar0 = false;
			}
			if (!func_1965(&(uLocal_1769[17]), "PL_Distraction_Goon_Idles"))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_939 = 4;
			}
			break;
		case 4:
			bVar0 = true;
			if (!does_entity_exist(&(Local_14.f_94[0])))
			{
				bVar0 = false;
			}
			else
			{
				vVar1 = { func_1665(&(uLocal_1769[16]), "S_M_M_PinLaw01^1", 0) };
				if (!func_1981(vVar1, vLocal_1753))
				{
					_set_entity_coords_and_heading(&(Local_14.f_94[0]), func_1665(&(uLocal_1769[16]), "S_M_M_PinLaw01^1", 0), func_1666(&(uLocal_1769[16]), "S_M_M_PinLaw01^1", 0), true, true, true);
				}
			}
			if (!does_entity_exist(&(Local_14.f_94[1])))
			{
				bVar0 = false;
			}
			else
			{
				vVar1 = { func_1665(&(uLocal_1769[16]), "S_M_M_PinLaw01", 0) };
				if (!func_1981(vVar1, vLocal_1753))
				{
					_set_entity_coords_and_heading(&(Local_14.f_94[1]), func_1665(&(uLocal_1769[16]), "S_M_M_PinLaw01", 0), func_1666(&(uLocal_1769[16]), "S_M_M_PinLaw01", 0), true, true, true);
				}
			}
			if (!does_entity_exist(&(Local_14.f_94[2])))
			{
				bVar0 = false;
			}
			else
			{
				vVar1 = { func_1665(&(uLocal_1769[16]), "S_M_M_PinLaw01^2", 0) };
				if (!func_1981(vVar1, vLocal_1753))
				{
					_set_entity_coords_and_heading(&(Local_14.f_94[2]), func_1665(&(uLocal_1769[16]), "S_M_M_PinLaw01^2", 0), func_1666(&(uLocal_1769[16]), "S_M_M_PinLaw01^2", 0), true, true, true);
				}
			}
			if (!does_entity_exist(&(Local_14.f_94[3])))
			{
				bVar0 = false;
			}
			else
			{
				vVar1 = { func_1665(&(uLocal_1769[16]), "S_M_M_PinLaw01^3", 0) };
				if (!func_1981(vVar1, vLocal_1753))
				{
					_set_entity_coords_and_heading(&(Local_14.f_94[3]), func_1665(&(uLocal_1769[16]), "S_M_M_PinLaw01^3", 0), func_1666(&(uLocal_1769[16]), "S_M_M_PinLaw01^3", 0), true, true, true);
				}
			}
			if (bVar0)
			{
				iLocal_939 = 5;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_1488()
{
	func_1664(&(iLocal_2449[0]));
	func_1664(&(iLocal_2449[2]));
	func_1664(&(iLocal_2449[5]));
	func_1664(&(iLocal_2449[4]));
	func_1664(&(iLocal_2449[3]));
	func_1664(Global_35);
}

void func_1489()
{
	func_1065(-1159860591, 1, 0f, 0, 0, 0, 1, 0);
	func_1065(-1664699805, 1, 0f, 0, 0, 0, 1, 0);
}

void func_1490(char[4] cParam0)
{
	switch (func_1399(cParam0))
	{
		case 0:
			if (func_1657(cParam0, "NBD1_GODOCKS", 0, 0, 0))
			{
				func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			func_1471(cParam0, "NBD1_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, -1);
			break;
		case 2:
			iVar0 = get_random_int_in_range(0, 2);
			if (is_string_null_or_empty(sVar1939))
			{
				switch (iVar0)
				{
					case 0:
						sLocal_1942 = "NBD1_DCOV1";
						break;
					case 1:
						sLocal_1942 = "NBD1_DCOV1_B";
						break;
					default:
						sLocal_1942 = "NBD1_DCOV1";
						break;
				}
			}
			if (func_1657(cParam0, sVar1939, 1, 0, 0))
			{
				sLocal_1942 = "";
				func_135(cParam0, 7);
			}
			break;
		case 3:
			func_135(cParam0, -1);
			break;
		case 4:
			func_486(&iLocal_2248);
			func_135(cParam0, -1);
			break;
		case 5:
			func_1471(cParam0, "NBD1_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
			func_135(cParam0, -1);
			break;
		case 6:
			func_135(cParam0, -1);
			break;
		case 7:
			if ((func_881(Global_35, &(iLocal_2449[0]), 1, 1) < 60f && func_2121()) && !func_1377())
			{
				if (func_1657(cParam0, "NBD1_GTCVR", 1, 0, 0))
				{
					func_135(cParam0, -1);
				}
			}
			break;
		case 8:
			iVar0 = get_random_int_in_range(0, 2);
			if (is_string_null_or_empty(sVar1939))
			{
				switch (iVar0)
				{
					case 0:
						sLocal_1942 = "NBD1_DCOV2";
						break;
					case 1:
						sLocal_1942 = "NBD1_DCOV2_B";
						break;
					default:
						sLocal_1942 = "NBD1_DCOV2";
						break;
				}
			}
			if (func_1657(cParam0, sVar1939, 0, 1f, 0))
			{
				sLocal_1942 = "";
				func_237(&uLocal_1998);
				func_135(cParam0, 14);
			}
			break;
		case 9:
			_0xdd1232b332cbb9e7(3, 1, 0);
			if (func_1657(cParam0, "NBD1_DCOV3", 0, 0.25f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 10:
			if (!func_1377())
			{
				if (func_1657(cParam0, "NBD1_DCOV4", 0, 2f, 0))
				{
					func_135(cParam0, -1);
				}
			}
			break;
		case 11:
			if (!func_1377())
			{
				if (func_1657(cParam0, "NBD1_DCOV5", 0, 3f, 0))
				{
					func_135(cParam0, -1);
				}
			}
			break;
		case 12:
			iVar0 = get_random_int_in_range(0, 2);
			if (is_string_null_or_empty(sVar1939))
			{
				switch (iVar0)
				{
					case 0:
						sLocal_1942 = "NBD1_DCOV6";
						break;
					case 1:
						sLocal_1942 = "NBD1_DCOV6_B";
						break;
					default:
						sLocal_1942 = "NBD1_DCOV6";
						break;
				}
			}
			if (func_1657(cParam0, sVar1939, 0, 0, 0))
			{
				sLocal_1942 = "";
				func_135(cParam0, -1);
			}
			break;
		case 13:
			if (func_1657(cParam0, "NBD1_DCOV7", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 14:
			func_1471(cParam0, "NBD1_GTD_OBJ3", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, -1);
			break;
		case 15:
			if (func_1657(cParam0, "NBD1_GTD_DISTR", 4, 0, 0))
			{
				func_135(cParam0, -1);
				func_408(&uLocal_1763, 8192);
			}
			break;
		case 16:
			if (func_1657(cParam0, "NBD1_GTD_REGROUP", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 17:
			func_135(cParam0, 15);
			break;
		case 18:
			if (func_1657(cParam0, "NBD1_GUARDD", 0, 1f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 19:
			if (func_1657(cParam0, "NBD1_GTDENEMY", 0, 0, 0))
			{
				func_135(cParam0, 20);
			}
			break;
		case 20:
			func_135(cParam0, -1);
			break;
		case 21:
			func_145(cParam0, &(Local_14.f_94[0]), "NBD1_Cop1", 0);
			if (func_1657(cParam0, "NBD1_RUNCHARLES", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 22:
			if (func_1657(cParam0, "NBD1_WHISTLE_A", 0, 0, 0))
			{
				func_135(cParam0, 23);
			}
			break;
		case 23:
			if (func_1657(cParam0, "NBD1_WHISTLE_B", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 24:
			if (func_1657(cParam0, "NBD1_TRAINIDLE", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 25:
			if (func_1657(cParam0, "NBD1_DIVER_IDLE", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 26:
			iVar0 = get_random_int_in_range(0, 2);
			if (is_string_null_or_empty(sVar1939))
			{
				switch (iVar0)
				{
					case 0:
						sLocal_1942 = "NBD1_GUARDtalkA";
						break;
					case 1:
						sLocal_1942 = "NBD1_GUARDtalkB";
						break;
					default:
						sLocal_1942 = "NBD1_GUARDtalkA";
						break;
				}
			}
			if (func_1657(cParam0, sVar1939, 1, 0, 0))
			{
				sLocal_1942 = "";
				func_135(cParam0, 2);
			}
			break;
		case 27:
			if (func_1657(cParam0, "NBD1_GTD_SEAT", 4, 0, 0))
			{
				if (!does_blip_exist(&(iLocal_2320[0])))
				{
					iLocal_2320[0] = func_1967(1259054292, &(iLocal_2325[58]), 1);
				}
				if (!does_blip_exist(&(iLocal_2320[1])))
				{
					iLocal_2320[1] = func_1967(1259054292, &(iLocal_2325[59]), 1);
				}
				func_201(cParam0, &(iLocal_2449[0]), 1);
				func_135(cParam0, -1);
			}
			break;
	}
}

void func_1491(char[4] cParam0)
{
	func_2105(cParam0);
	func_2122(cParam0);
	func_2123(cParam0);
	func_2124(cParam0);
	func_2125();
	func_2126();
	func_406(cParam0, 1);
	func_2127(cParam0);
}

void func_1492(char[4] cParam0, int iParam1)
{
	func_796(&(cParam0->f_10792), iParam1);
}

void func_1493(char[4] cParam0)
{
	switch (func_1399(cParam0))
	{
		case 0:
			func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
			func_135(cParam0, 1);
			break;
		case 1:
			func_1471(cParam0, "NBD1_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, -1);
			break;
		case 2:
			if (func_881(Global_35, &(iLocal_2449[0]), 1, 1) < 60f)
			{
				if (func_1657(cParam0, "NBD1_GTCVR", 0, 0, 0))
				{
					func_135(cParam0, 3);
				}
			}
			break;
		case 3:
			func_135(cParam0, -1);
			break;
		case 4:
			func_486(&iLocal_2248);
			func_135(cParam0, 27);
			break;
		case 5:
			func_1471(cParam0, "NBD1_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
			func_135(cParam0, -1);
			break;
		case 6:
			func_135(cParam0, -1);
			break;
		case 7:
			iVar0 = get_random_int_in_range(0, 2);
			if (is_string_null_or_empty(sVar1939))
			{
				switch (iVar0)
				{
					case 0:
						sLocal_1942 = "NBD1_DCOV1";
						break;
					case 1:
						sLocal_1942 = "NBD1_DCOV1_B";
						break;
					default:
						sLocal_1942 = "NBD1_DCOV1";
						break;
				}
			}
			if (func_1657(cParam0, sVar1939, 0, 0, 0))
			{
				sLocal_1942 = "";
				func_135(cParam0, -1);
			}
			break;
		case 8:
			iVar0 = get_random_int_in_range(0, 2);
			if (is_string_null_or_empty(sVar1939))
			{
				switch (iVar0)
				{
					case 0:
						sLocal_1942 = "NBD1_DCOV2";
						break;
					case 1:
						sLocal_1942 = "NBD1_DCOV2_B";
						break;
					default:
						sLocal_1942 = "NBD1_DCOV2";
						break;
				}
			}
			if (func_1657(cParam0, sVar1939, 0, 0, 0))
			{
				sLocal_1942 = "";
				func_237(&uLocal_1998);
				func_135(cParam0, 14);
			}
			break;
		case 9:
			_0xdd1232b332cbb9e7(3, 1, 0);
			if (func_1657(cParam0, "NBD1_DCOV3", 0, 0.25f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 10:
			if (func_1657(cParam0, "NBD1_DCOV4", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 11:
			if (func_1657(cParam0, "NBD1_DCOV5", 0, 0, 0))
			{
				func_135(cParam0, 12);
			}
			break;
		case 12:
			iVar0 = get_random_int_in_range(0, 2);
			if (is_string_null_or_empty(sVar1939))
			{
				switch (iVar0)
				{
					case 0:
						sLocal_1942 = "NBD1_DCOV6";
						break;
					case 1:
						sLocal_1942 = "NBD1_DCOV6_B";
						break;
					default:
						sLocal_1942 = "NBD1_DCOV6";
						break;
				}
			}
			if (func_1657(cParam0, sVar1939, 0, 0, 0))
			{
				sLocal_1942 = "";
				func_135(cParam0, -1);
			}
			break;
		case 13:
			if (func_1657(cParam0, "NBD1_DCOV7", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 14:
			func_1471(cParam0, "NBD1_GTD_OBJ3", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, -1);
			break;
		case 15:
			if (func_1657(cParam0, "NBD1_GTD_DISTR", 4, 0, 0))
			{
				func_135(cParam0, -1);
				func_408(&uLocal_1763, 8192);
			}
			break;
		case 16:
			if (func_1657(cParam0, "NBD1_GTD_REGROUP", 4, 0, 0))
			{
				func_1673(cParam0, &(iLocal_2449[0]), 1105014447, 422991367, 1, 1);
				func_135(cParam0, -1);
			}
			break;
		case 17:
			func_135(cParam0, 15);
			break;
		case 18:
			if (func_1657(cParam0, "NBD1_GUARDD", 0, 1f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 19:
			if (func_1657(cParam0, "NBD1_GTDENEMY", 0, 0, 0))
			{
				func_135(cParam0, 20);
			}
			break;
		case 20:
			func_135(cParam0, -1);
			break;
		case 21:
			func_145(cParam0, &(Local_14.f_94[0]), "NBD1_Cop1", 0);
			if (func_1657(cParam0, "NBD1_RUNCHARLES", 0, 0, 0))
			{
				func_135(cParam0, 28);
			}
			break;
		case 22:
			if (func_1657(cParam0, "NBD1_WHISTLE_A", 1, 0, 0))
			{
				func_135(cParam0, 23);
			}
			break;
		case 23:
			if (func_1657(cParam0, "NBD1_WHISTLE_B", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 24:
			if (func_1657(cParam0, "NBD1_TRAINIDLE", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 25:
			if (func_1657(cParam0, "NBD1_DIVER_IDLE", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 26:
			if (func_1657(cParam0, "NBD1_SHIP_DAWD", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 27:
			if (func_1657(cParam0, "NBD1_PINKR_CHAT", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 28:
			if (func_1657(cParam0, "NBD1_CHRLRUN", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
	}
}

bool func_1494()
{
	if (func_1397(Global_35, &(iLocal_2325[48]), 1, 0))
	{
		return true;
	}
	if (func_1397(&(iLocal_2449[0]), &(iLocal_2325[25]), 1, 0) && func_1397(Global_35, &(iLocal_2325[47]), 1, 0))
	{
		if (func_973(&(iLocal_2449[0]), func_1665(&(uLocal_1769[16]), "DUTCH", 0), 1) > 1f)
		{
			if (get_script_task_status(&(iLocal_2449[0]), 242628503, true) != 0 && get_script_task_status(&(iLocal_2449[0]), 242628503, true) != 1)
			{
				func_1667(&(iLocal_2449[0]), func_1665(&(uLocal_1769[16]), "DUTCH", 0), func_1666(&(uLocal_1769[16]), "DUTCH", 0), 1, 1073741824, 0, 0);
			}
		}
		if (!_is_anim_scene_started(&(uLocal_1769[16]), false) && iVar1482 < 30)
		{
			if (func_973(&(iLocal_2449[3]), func_1665(&(uLocal_1769[16]), "CHARLESSMITH", 0), 1) > 1f)
			{
				if (get_script_task_status(&(iLocal_2449[3]), 242628503, true) != 0 && get_script_task_status(&(iLocal_2449[3]), 242628503, true) != 1)
				{
					func_1667(&(iLocal_2449[3]), func_1665(&(uLocal_1769[16]), "CHARLESSMITH", 0), func_1666(&(uLocal_1769[16]), "CHARLESSMITH", 0), 1, 1073741824, 0, 0);
				}
			}
		}
		if (get_script_task_status(&(iLocal_2449[0]), 242628503, true) != 0 && get_script_task_status(&(iLocal_2449[0]), 242628503, true) != 1)
		{
			if (get_script_task_status(&(iLocal_2449[3]), 242628503, true) != 0 && get_script_task_status(&(iLocal_2449[3]), 242628503, true) != 1)
			{
				if (get_script_task_status(Global_35, 242628503, true) != 0 && get_script_task_status(Global_35, 242628503, true) != 1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1495(char[4] cParam0)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (does_entity_exist(&(Local_14.f_94[iVar1])))
		{
			bVar0 = false;
			if (!is_entity_on_screen(&(Local_14.f_94[iVar1])))
			{
				func_1053(Local_14.f_94[iVar1], 0);
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		if (does_entity_exist(&(iLocal_2449[3])))
		{
			bVar0 = false;
			if (!is_entity_on_screen(&(iLocal_2449[3])))
			{
				func_1454(cParam0, 3, 7);
			}
		}
	}
	return bVar0;
}

int func_1496(int iParam0)
{
	if (func_562(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1497(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_562(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_1080(iParam0, 2, 1))
			{
				func_1049(iParam0, 2, 1);
			}
			if (func_757(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_1051(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_567(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_1101(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_1101(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_2128(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_1051(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_2129(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_1051(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_2129(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0]->f_4;
				}
			}
			if (!func_1080(iParam0, 44, 0))
			{
				func_1051(iParam0, 44, 0);
			}
			if (func_2130(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_2129(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_1049(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1104(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_2131(iParam0, 0, 0, 1);
			}
			func_1049(iParam0, 33, 1);
			func_1049(iParam0, 34, 1);
			func_1049(iParam0, 29, 1);
			if (!func_420(vVar0) && bParam7)
			{
				func_2129(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_2129(iParam0, 4);
			}
			else
			{
				func_2129(iParam0, 5);
			}
			break;
		case 3:
			if (!is_entity_dead(Global_1360165[iParam0]) && !_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
			{
				if (is_entity_attached(Global_1360165[iParam0]))
				{
					if (is_ped_on_mount(Global_1360165[iParam0]) && bParam10)
					{
					}
					else if (is_ped_using_any_scenario(Global_1360165[iParam0]))
					{
						func_2128(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						detach_entity(Global_1360165[iParam0], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_882(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (is_ped_active_in_scenario(Global_1360165[iParam0], 0) && !_0x0c3cb2e600c8977d(Global_1360165[iParam0], 1))
				{
					clear_ped_tasks(Global_1360165[iParam0], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_2129(iParam0, 4);
			}
			else
			{
				func_2129(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0]->f_4;
					}
				}
				if (func_1500(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_2132(iParam0, iParam13, 0);
						func_1938(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_1080(iParam0, 25, 0))
						{
							func_1049(iParam0, 25, 0);
						}
						func_1051(iParam0, 66, 0);
						func_2129(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_2129(iParam0, 5);
				}
				func_1051(iParam0, 28, 1);
			}
			else
			{
				func_2129(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_2129(iParam0, 6);
			}
			break;
		case 6:
			if (func_1101(Global_1360165[iParam0], 0))
			{
				if (bParam24)
				{
					set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], true);
				}
				if (bParam18)
				{
					if (!_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							clear_ped_blood_damage_by_zone(Global_1360165[iParam0], iVar5);
							clear_ped_damage_decal_by_zone(Global_1360165[iParam0], iVar5, "ALL");
							iVar5++;
						}
						_0xe3144b932dfdff65(Global_1360165[iParam0], 0f, -1, 1, 1);
						_0xd049920cd29f6cc8(Global_1360165[iParam0], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_2133(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_2134(Global_1360165[iParam0], 1);
				}
			}
			func_2129(iParam0, 7);
		case 7:
			func_1104(iParam0, bParam9, bParam15, 0);
			func_1075(iParam0, 4, bParam11);
			func_1100(iParam0);
			if (bParam20)
			{
				if (func_404(Global_1360165[iParam0]))
				{
				}
			}
			func_2135(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_2129(iParam0, 0);
			func_758(iParam0, 16, 1);
			func_1049(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1498(char[4] cParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_2136(bParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_2137(bParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1621(cParam0, bParam1, iParam2, func_341(iParam2, 0));
	func_513(cParam0, bParam1, 512);
	if (bParam5)
	{
		func_513(cParam0, bParam1, 128);
	}
	else
	{
		func_512(cParam0, bParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1499(int iParam0)
{
	if (!func_562(iParam0))
	{
		return;
	}
	bVar0 = func_598(iParam0);
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(bVar0, 0, 0f);
}

bool func_1500(int iParam0, int iParam1)
{
	if (!func_562(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_2138(iParam0, iParam1);
	return bVar0;
}

int func_1501(int iParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return 0;
	}
	if (!func_2139(iParam2))
	{
		return 0;
	}
	iVar0 = func_2140(iParam2, -1);
	if (!func_1723(bParam1, iVar0))
	{
		return 1;
	}
	if (decor_exist_on(bParam1, "metaped_outfit_request") && decor_exist_on(bParam1, "metaped_outfit_request_name"))
	{
		iVar1 = decor_get_int(bParam1, "metaped_outfit_request_name");
		if (iVar1 == iVar0)
		{
			return 1;
		}
		else
		{
			func_2141(iParam0, bParam1);
		}
	}
	iVar2 = _request_metaped_outfit(get_entity_model(bParam1), iVar0);
	decor_set_int(bParam1, "metaped_outfit_request", iVar2);
	decor_set_int(bParam1, "metaped_outfit_request_name", iVar0);
	return 1;
}

bool func_1502(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return true;
	}
	if (!decor_exist_on(bParam0, "metaped_outfit_request") || !decor_exist_on(bParam0, "metaped_outfit_request_name"))
	{
		return true;
	}
	iVar0 = decor_get_int(bParam0, "metaped_outfit_request_name");
	if (!func_1723(bParam0, iVar0))
	{
		return true;
	}
	iVar1 = decor_get_int(bParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

bool func_1503(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 1023)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			*iParam1 = 0;
			break;
		case 2:
			*iParam1 = 1;
			break;
		case 4:
			*iParam1 = 2;
			break;
		case 8:
			*iParam1 = 3;
			break;
		case 16:
			*iParam1 = 4;
			break;
		case 32:
			*iParam1 = 5;
			break;
		case 64:
			*iParam1 = 6;
			break;
		case 128:
			*iParam1 = 7;
			break;
		case 256:
			*iParam1 = 8;
			break;
		case 512:
			*iParam1 = 9;
			break;
		default:
			return false;
	}
	return true;
}

void func_1504(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1505(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1517(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1506(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0], "", 64);
	Global_40.f_1095.f_1[iParam0]->f_8 = 0;
	Global_40.f_1095.f_1[iParam0]->f_9 = 0;
	Global_40.f_1095.f_1[iParam0]->f_10 = 0;
	Global_40.f_1095.f_1[iParam0]->f_11 = 0;
	Global_40.f_1095.f_1[iParam0]->f_12 = -1;
	Global_40.f_1095.f_1[iParam0]->f_13 = -15;
	Global_40.f_1095.f_1[iParam0]->f_14 = 0;
	func_2142(&Var0);
	func_2143(iParam0, Var0);
	func_2144(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_2145(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_2146(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_2147(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_2148(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_2149(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_2150(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_2151(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_2152(&(Global_40.f_1095.f_1[iParam0]->f_425));
	Global_40.f_1095.f_1[iParam0]->f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0]->f_430 = 0f;
	Global_40.f_1095.f_1[iParam0]->f_431 = -1;
	Global_40.f_1095.f_1[iParam0]->f_432 = -1;
	Global_40.f_1095.f_1[iParam0]->f_433 = 0;
	Global_40.f_1095.f_1[iParam0]->f_434 = 0;
	Global_40.f_1095.f_1[iParam0]->f_435 = 0;
	(*Global_1900383)[iParam0] = 0;
	(*Global_1900383)[iParam0]->f_1 = 0;
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
	(*Global_1900383)[iParam0]->f_19 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_22 = 0f;
	(*Global_1900383)[iParam0]->f_23 = 0;
	(*Global_1900383)[iParam0]->f_24 = 0;
	(*Global_1900383)[iParam0]->f_25 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_26 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	(*Global_1900383)[iParam0]->f_27 = 0;
	(*Global_1900383)[iParam0]->f_28 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_31 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_34 = 0f;
	(*Global_1900383)[iParam0]->f_35 = 0;
	(*Global_1900383)[iParam0]->f_36 = 0;
	(*Global_1900383)[iParam0]->f_37 = 0;
	(*Global_1900383)[iParam0]->f_38 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_41 = 0;
	(*Global_1900383)[iParam0]->f_42 = 0;
	(*Global_1900383)[iParam0]->f_43 = 0;
	(*Global_1900383)[iParam0]->f_44 = -1;
}

void func_1507(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1508(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1509(vector3 vParam0)
{
	return func_2153(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1510(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_576(iParam0))
	{
		return false;
	}
	iVar0 = func_232(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1511(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_570(iParam0);
	func_570(iParam0);
	func_2154(iParam0, iParam1);
	func_2155(iParam0, iParam1);
	func_2156(iParam0, iParam1);
	bVar1 = func_232(iParam0);
	if (does_entity_exist(bVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_2157(bVar1);
		}
		if (iParam0 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, bVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = _0x227b06324234fb09(iVar0, bVar1);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == bVar1)
			{
				_0x8fbf9edb378ccb8c(iVar0, false);
			}
			if (_0xd3f7445cea2e5035(iVar0) == bVar1)
			{
				_0x227b06324234fb09(iVar0, false);
			}
		}
	}
	bVar3 = func_232(iParam1);
	if (does_entity_exist(bVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_2157(bVar3);
		}
		if (iParam1 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, bVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = _0x227b06324234fb09(iVar0, bVar3);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == bVar3)
			{
				_0x8fbf9edb378ccb8c(iVar0, false);
			}
			if (_0xd3f7445cea2e5035(iVar0) == bVar3)
			{
				_0x227b06324234fb09(iVar0, false);
			}
		}
	}
	func_285();
}

bool func_1512()
{
	iVar0 = func_1537();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1513()
{
	bVar0 = func_1537();
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(bVar0))
	{
		set_entity_as_mission_entity(bVar0, true, true);
	}
	delete_object(&bVar0);
	func_2158(0);
}

void func_1514(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1515(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_9;
}

int func_1516(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_8;
}

int func_1517(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_14;
}

void func_1518(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1886(&iVar0, &iVar1, &iVar2);
	func_1887(iParam0, iVar0);
	func_1888(iParam0, iVar1);
	func_1889(iParam0, iVar2);
	func_2159(iParam0, 1);
	func_2160(iParam0, 1);
}

void func_1519(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1044(iParam0, 1);
}

void func_1520(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_19 = { vParam1 };
	(*Global_1900383)[iParam0]->f_22 = uParam4;
}

bool func_1521(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1111(iParam0, 1);
}

struct<2> func_1522(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_2161(iParam0, &uVar2))
	{
	}
	if (!func_2162(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1523()
{
	if (func_2163(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_2163(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_2163(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_2163(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_2163(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_2163(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1524(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	if (is_entity_dead(bParam0))
	{
	}
	if (is_ped_injured(bParam0))
	{
	}
	if (is_ped_in_writhe(bParam0))
	{
	}
	if (!_0xa0bc8faed8cfeb3c(bParam0))
	{
		return;
	}
	func_2164(bParam0);
	func_2165(bParam0, uParam1);
	func_2166(bParam0);
	func_2167(bParam0, uParam2);
	if (iParam3 != 0)
	{
		func_2168(bParam0, iParam3, 0);
	}
	_update_ped_variation(bParam0, false, true, true, true, true);
}

void func_1525(int iParam0)
{
	iParam0 = func_283(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 1;
	(*Global_1900383)[iParam0]->f_3 = get_id_of_this_thread();
}

bool func_1526(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1527(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

bool func_1528(int iParam0)
{
	return iParam0;
}

bool func_1529(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(bParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(bParam0);
	return _is_this_model_a_horse(iVar0);
}

int func_1530(bool bParam0)
{
	iVar0 = -1;
	if (func_1101(bParam0, 0))
	{
		iVar1 = _0xf103823ffe72bb49(bParam0);
		iVar0 = func_508(iVar1);
	}
	return iVar0;
}

int func_1531(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_562(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(bParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_1051(iParam0, 43, 1);
	}
	bVar0 = func_1046(iParam0);
	if ((does_entity_exist(bVar0) && bVar0 != bParam1) && _0xf103823ffe72bb49(bVar0) == func_598(iParam0))
	{
		_0xbcc76708e5677e1d(bVar0, 0);
		set_ped_as_no_longer_needed(&bVar0);
	}
	bVar1 = get_ped_in_vehicle_seat(bParam1, -1);
	if (does_entity_exist(bVar1) && bVar1 != func_598(iParam0))
	{
		return 0;
	}
	iVar2 = _0xf103823ffe72bb49(bParam1);
	if (does_entity_exist(iVar2))
	{
		iVar3 = func_508(iVar2);
		if (func_562(iVar3))
		{
			if (iVar3 != iParam0)
			{
				return 0;
			}
		}
		else if (is_entity_a_mission_entity(iVar2))
		{
			return 0;
		}
		else if (_is_mount_seat_free(bParam1, -1))
		{
			_0xbcc76708e5677e1d(bParam1, 0);
		}
		else
		{
			return 0;
		}
	}
	bVar4 = func_1101(func_598(iParam0), 0);
	if (bParam3 || bVar4)
	{
		if (bVar4)
		{
			_0x931b241409216c1f(func_598(iParam0), bParam1, 0);
			_0xed1c764997a86d5a(func_598(iParam0), bParam1);
		}
	}
	else
	{
		func_1051(iParam0, 38, 1);
	}
	func_1533(bParam1, iParam0);
	(*Global_1360165)[iParam0]->f_70 = bParam1;
	(*Global_1360165)[iParam0]->f_124 = 0;
	return 1;
}

bool func_1532(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7)
{
	if (!func_1045(iParam0))
	{
		return false;
	}
	bVar0 = func_1046(iParam0);
	if (func_1101((*Global_1360165)[iParam0]->f_70, 0))
	{
		if (!func_1047(iParam0))
		{
			if (bParam2)
			{
				if (!func_2169(iParam0, bVar0, 1))
				{
					return false;
				}
			}
			else if (!func_2170(iParam0, bVar0))
			{
				return false;
			}
			if (*Global_1360165)[iParam0]->f_70.f_11 != get_id_of_this_thread()
			{
				if (!_0x88ad6cc10d8d35b2(bVar0))
				{
					set_entity_as_mission_entity(bVar0, true, true);
				}
				_0xf74e134f40192884(bVar0, 0);
				func_1051(iParam0, 39, 1);
				func_1050(iParam0, 8, 1);
				func_1050(iParam0, 64, 0);
				func_2171(iParam0, 0, 0, 1);
				(*Global_1360165)[iParam0]->f_70.f_11 = get_id_of_this_thread();
			}
			vVar1.x = iParam3;
			vVar1.f_1 = iParam4;
			vVar1.f_2 = iParam5;
			if (!func_420(vVar1) && bParam7)
			{
				if (!is_entity_dead(bVar0) && !_0x3ab6c7b0bb0df4b1(bVar0, -1))
				{
					if (is_entity_attached(bVar0))
					{
						if (is_ped_using_any_scenario(bVar0))
						{
							clear_ped_tasks(bVar0, 1, 0);
						}
						else
						{
							detach_entity(bVar0, true, true);
						}
					}
					func_882(bVar0, vVar1, fParam6, 2, 1073741824);
					return true;
				}
				else
				{
					if (is_ped_active_in_scenario(bVar0, 0) && !_0x0c3cb2e600c8977d(bVar0, 1))
					{
						clear_ped_tasks(bVar0, 1, 0);
					}
					return false;
				}
			}
			return true;
		}
		else if (bParam1)
		{
			set_entity_as_mission_entity(bVar0, true, true);
			func_1051(iParam0, 39, 1);
			func_1050(iParam0, 8, 1);
			func_1050(iParam0, 64, 0);
			func_2171(iParam0, 0, 0, 1);
			(*Global_1360165)[iParam0]->f_70.f_11 = get_id_of_this_thread();
			return true;
		}
	}
	return false;
}

void func_1533(bool bParam0, int iParam1)
{
	decor_set_bool(bParam0, "HorseCompanion", true);
	func_2173(bParam0, func_2172(iParam1));
	if (func_2174(iParam1, 8))
	{
		_0xf74e134f40192884(bParam0, 2);
		set_ped_config_flag(bParam0, 412, true);
	}
	else
	{
		set_ped_config_flag(bParam0, 412, false);
	}
	if (does_entity_exist(func_598(iParam1)))
	{
		_0x931b241409216c1f(func_598(iParam1), bParam0, 0);
		_0xed1c764997a86d5a(func_598(iParam1), bParam0);
		set_ped_config_flag(bParam0, 367, true);
	}
	else
	{
		func_1051(iParam1, 38, 1);
	}
	set_ped_relationship_group_default_hash(bParam0, -1856989775);
	set_ped_relationship_group_hash(bParam0, -1856989775);
	if (Global_40.f_4283 == 0)
	{
		set_ped_config_flag(bParam0, 172, true);
	}
	set_ped_config_flag(bParam0, 324, true);
	set_ped_config_flag(bParam0, 330, true);
	set_ped_config_flag(bParam0, 331, true);
	set_ped_config_flag(bParam0, 471, true);
	set_ped_config_flag(bParam0, 442, true);
	if (func_2174(iParam1, 4096))
	{
		set_ped_config_flag(bParam0, 1, false);
		set_ped_config_flag(bParam0, 54, false);
		set_ped_config_flag(bParam0, 121, false);
		set_ped_config_flag(bParam0, 302, false);
	}
	else
	{
		set_ped_config_flag(bParam0, 1, true);
		set_ped_config_flag(bParam0, 54, true);
		set_ped_config_flag(bParam0, 121, true);
		set_ped_config_flag(bParam0, 302, true);
	}
	_0xae6004120c18df97(bParam0, 2, 0);
	_0xae6004120c18df97(bParam0, 3, 0);
	func_2171(iParam1, func_2174(iParam1, 8192), func_2174(iParam1, 16384), 1);
}

void func_1534(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		_restore_ped_stamina(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		_charge_ped_stamina(Global_35, to_float((iParam0 * iVar0)));
	}
}

void func_1535(int iParam0)
{
	if (!network_is_in_session())
	{
		return;
	}
	if (network_is_in_mp_cutscene())
	{
		return;
	}
}

void func_1536()
{
	{
		return;
	}
