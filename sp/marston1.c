void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_146 = 1;
	iLocal_147 = 2;
	iLocal_148 = 3;
	iLocal_149 = 4;
	iLocal_150 = 5;
	iLocal_151 = 6;
	iLocal_152 = 7;
	iLocal_153 = 8;
	iLocal_154 = 9;
	iLocal_155 = 10;
	iLocal_156 = 11;
	iLocal_157 = 12;
	iLocal_158 = 13;
	iLocal_159 = 25;
	iLocal_697 = -1;
	iLocal_720 = 15;
	sLocal_722 = "marston1_assisted_route_to_strawberry";
	sLocal_723 = "marston1_park_wagon";
	sLocal_724 = "marston1_park_wagon_alt01";
	sLocal_725 = "marston1_park_wagon_alt02";
	iLocal_729 = 1306345203;
	iLocal_730 = -81834080;
	iLocal_731 = 1996806757;
	iLocal_802 = 4;
	iLocal_803 = 724769646;
	iLocal_804 = 1331687942;
	iLocal_811 = -1;
	iLocal_902 = 769;
	iLocal_959 = 769;
	iLocal_960 = 11;
	iLocal_961 = 9;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_996, 1073741824);
		func_2(&uLocal_996, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_996);
	func_5(&uLocal_996);
	while (!func_6(&uLocal_996, -2147483648))
	{
		func_7(&uLocal_996);
		wait(0);
	}
	while (!func_2(&uLocal_996, 0))
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
	iLocal_104 = func_125(cParam0);
	iLocal_104 = iLocal_104;
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
	iVar0 = func_33(cParam0);
	if (iVar0 >= iLocal_151 && iVar0 <= iLocal_155)
	{
		func_163();
	}
	if (iVar0 == iLocal_145)
	{
		func_164(1);
	}
	if (iVar0 >= iLocal_149)
	{
		iVar1 = 61;
		func_165(iVar1, -15);
	}
	_0x93624b36e8851b42(get_player_index());
	if (_0x7409669c5ed50144(-1392528840))
	{
		_0x50b72a754ee64a71(-1392528840);
	}
	func_166(2048);
	set_ped_config_flag(Global_35, 170, false);
	set_ped_config_flag(Global_35, 360, false);
	set_ped_config_flag(Global_35, 65, false);
	func_167();
	func_168(&uLocal_482, &(iLocal_544[19]), 0);
	func_168(&uLocal_483, &(iLocal_544[21]), 0);
	func_168(&uLocal_484, &(iLocal_544[22]), 0);
	func_169();
	func_170(cParam0);
	func_171(cParam0);
	func_172(0);
	func_173(1);
	func_174();
	func_48(4);
	func_175(2);
	func_175(65536);
	func_176(cParam0);
	if (func_22(cParam0) == 0)
	{
		func_177(1);
	}
	if (func_22(cParam0) == 0)
	{
		func_178(100f);
	}
	if (iVar803 != 0)
	{
		_delete_propset(iVar803, true, true);
	}
	func_179();
	func_180();
	func_181(62, 1);
	func_182(0);
	func_181(61, 1);
	func_181(65, 1);
	func_181(63, 1);
	func_181(60, 1);
	func_183();
	func_184(883);
	func_184(884);
	set_player_control(get_player_index(), true, 0, false);
	_display_hud_component(iVar801);
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

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_10(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_185(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_186(iVar0);
	*uParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_188(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_189(iParam0) && !func_190(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_191(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_189(iParam0))
	{
		iParam2 = -1;
	}
	if (func_192(iParam0) == 3 || (func_192(iParam0) == 1 && _0x01f4d242765c6b24(func_191(iParam0))))
	{
		func_194(func_193(iParam0), func_191(iParam0), iParam2);
		if ((!func_188(Global_1572864->f_8) && !func_195(0, 1, 0)) && !func_196(&Global_1935630, 32768))
		{
			iVar0 = func_197(iParam0);
			if (iVar0 != -1)
			{
				func_198(0);
			}
			else if (func_193(iParam0) == 8)
			{
				iVar0 = func_199();
				if (iVar0 != -1)
				{
					func_198(0);
				}
			}
		}
	}
	func_200(iParam0, 0);
	if (func_201(0) == iParam0)
	{
		func_40(1);
		func_202(0);
		func_203(1);
	}
	func_204(iParam0, 1);
	func_205(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_206(0);
	func_207(0);
	func_64(0);
	func_65(0);
	func_208(0);
	func_209(1f);
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
		func_210();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_211())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_212())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(char[4] cParam0, bool bParam1)
{
	Var0 = func_191(func_12(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_213(0);
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
		func_214(iVar0, iParam0);
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
		if (func_215((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_216((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_216((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_216((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_217(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_218(uParam0);
	}
}

bool func_28(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 128) && func_29())
	{
		return true;
	}
	if (func_219(&(cParam0->f_13118)) >= 4000)
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
	func_220(!func_6(cParam0, 32), 1);
	func_1(cParam0, 32);
}

bool func_31(char[4] cParam0)
{
	return true;
}

bool func_32()
{
	return func_188(Global_1572864->f_8);
}

int func_33(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	if (iParam0 == iLocal_145)
	{
		func_222(&Var0, func_221(0, 1));
	}
	else if (iParam0 == iLocal_146)
	{
		func_222(&Var0, func_221(0, 2));
	}
	else if (iParam0 == iLocal_147)
	{
		func_222(&Var0, func_221(15, 2));
	}
	else if (iParam0 == iLocal_148)
	{
		func_222(&Var0, func_221(7, 3));
	}
	else if (iParam0 == iLocal_149)
	{
		func_222(&Var0, func_221(11, 4));
	}
	else if (iParam0 == iLocal_150)
	{
		func_222(&Var0, func_221(13, 4));
	}
	else if (iParam0 == iLocal_151)
	{
		func_222(&Var0, func_221(1, 2));
	}
	else if (iParam0 == iLocal_152)
	{
		func_222(&Var0, func_221(2, 2));
	}
	else if (iParam0 == iLocal_153)
	{
		func_222(&Var0, func_221(3, 2));
	}
	else if (iParam0 == iLocal_154)
	{
		func_222(&Var0, func_221(4, 2));
	}
	else if (iParam0 == iLocal_155)
	{
		func_222(&Var0, func_221(5, 0));
	}
	else if (iParam0 == iLocal_156)
	{
		func_222(&Var0, func_221(14, 0));
	}
	else if (iParam0 == iLocal_157)
	{
		func_222(&Var0, func_221(6, 1));
	}
	else if (iParam0 == iLocal_158)
	{
		func_222(&Var0, func_221(6, 1));
	}
	else if (iParam0 == iLocal_159)
	{
		func_222(&Var0, func_221(6, 1));
	}
	else if (iParam0 == 26)
	{
	}
	else
	{
		Var0 = { Global_36 };
	}
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_223(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_206(0);
	func_224(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_215((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_225((*uParam0)[iVar0]);
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
			func_226(iVar0, 4096);
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
		func_227(Global_1935630, 4194304);
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
	func_228();
	func_229();
	func_230();
	func_231();
}

void func_43()
{
	if (func_232())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_233(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_234();
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
	func_235(1, iParam0, iParam1);
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
	return (func_236() || func_54());
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
	func_237(uParam0);
	func_238(uParam0, 0);
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
		func_239(iVar0);
		iVar0++;
	}
	func_240();
	func_241();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_242())
	{
		if (func_243(255))
		{
			if (!func_244(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_245(Global_1894899->f_2) && func_246(Global_1894899->f_2))
		{
			func_247(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_248(16);
			}
		}
		else if (func_245(Global_1894899->f_2) && !func_249(Global_1894899->f_2, 2))
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
		func_250(16);
		func_251();
		if (bVar0)
		{
			func_250(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_252(cParam0->f_5423[iVar0]))
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
	if (func_253(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_254(cParam0->f_5421))
		{
			iVar1 = func_255(cParam0->f_5421, iVar0);
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
		if (func_256(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_257(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_258(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_259(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_260(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_261(7);
		}
		else
		{
			func_262(iVar0, 0);
		}
		func_263(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_265(iParam0, 32);
	func_266();
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
	Var0 = { func_267(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_268(iParam0) };
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
		func_208(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_208(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(char[4] cParam0)
{
	func_269(&(cParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_215((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_216((*uParam1)[iVar0], 1);
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
	iVar0 = func_193(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_270(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_271(iVar1))
			{
				if (func_272(iVar1, 4))
				{
					func_273(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_274(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_270(iParam0);
		if (iVar3 == 59)
		{
			func_274(1);
		}
		else if (iVar3 == 61)
		{
			func_274(0);
		}
		else if (iVar3 == 83)
		{
			func_274(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_271(iVar0))
		{
			if (func_272(iVar0, 4))
			{
				if (func_272(iVar0, 16))
				{
					func_275(iVar0, 1);
				}
				if (func_272(iVar0, 8))
				{
					func_276(iVar0, 1);
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
		if (func_277(cParam0) == 0 && iVar0 == 0)
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
		func_278(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_279(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	iVar0 = 0;
	if (func_280(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_281(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_245(iParam0))
	{
		return;
	}
	bVar0 = func_249(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_282(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_284(iParam0, func_283());
			func_285(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_286(iParam0, 67108864);
		func_284(iParam0, -15);
	}
	func_287(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_288(11);
	}
	else
	{
		func_289(11);
	}
}

void func_80(int iParam0)
{
	if (func_290(iParam0, 0))
	{
		func_291(262144, 5, 0, 1);
		func_292(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_293(101, 7, 1f, 0, 1);
			func_293(89, 7, 1f, 0, 1);
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
	if (!func_188(iParam0))
	{
		return;
	}
	if (func_294(iParam0) == 4)
	{
		func_295(iParam0, func_283());
		if (!func_192(iParam0) == 5 && !func_192(iParam0) == 6)
		{
			if (bParam3)
			{
				func_200(iParam0, 6);
			}
			else
			{
				func_200(iParam0, 5);
			}
			func_205(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_193(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_296(0, 2);
		if (!bVar1 && bParam1)
		{
			func_297();
		}
	}
	else
	{
		func_202(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_298(iParam0);
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
				if (bParam1 && func_192(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_270(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_270(iParam0)]->f_8), true);
						}
					}
					else if ((func_270(iParam0) != 95 && func_270(iParam0) != 82) && !func_299((*Global_1347702)[func_270(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_270(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_270(iParam0)]->f_8), true);
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
		func_301(func_270(iParam0), iVar6, func_300());
	}
	else if (iVar0 == 8)
	{
		func_303(func_270(iParam0), iVar6, func_300(), func_302());
	}
	if (!func_192(iParam0) == 5 && !func_192(iParam0) == 6)
	{
		iVar9 = func_304(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_305(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_306(func_270(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_307((iVar10 - 20), 0, iVar10);
					iVar11 = func_307((iVar11 - 10), 0, iVar11);
				}
				func_308(1);
				func_309(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_309(45, 0, 1);
				break;
			case 8:
				iVar10 = func_310(func_270(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_307((iVar10 - 20), 0, iVar10);
					iVar11 = func_307((iVar11 - 10), 0, iVar11);
				}
				func_309(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_311(func_270(iParam0)))
				{
					func_312(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_309(120, 0, 1);
				break;
			case 2:
				func_309(120, 0, 1);
				break;
			case 6:
				func_309(func_314(func_313(iParam0)), 0, 1);
				break;
			case 5:
				func_309(120, 0, 1);
				break;
		}
	}
	func_204(iParam0, 1);
	func_295(iParam0, func_283());
	func_205(iParam0);
	if ((!func_192(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_197(iParam0);
		if (iVar12 != -1)
		{
			func_198(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_199();
			if (iVar12 != -1)
			{
				func_198(0);
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
				switch (func_270(iParam0))
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
				if (func_271(func_270(iParam0)) && func_299((*Global_1347702)[func_270(iParam0)]->f_12, 4))
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
				if (func_270(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_270(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_192(iParam0) == 5 && !func_192(iParam0) == 6)
	{
		if (bParam3)
		{
			func_200(iParam0, 6);
		}
		else
		{
			func_200(iParam0, 5);
		}
		func_205(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_270(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_315();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_316(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-1267972061);
						func_316(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(1619534881);
						func_316(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-755457379);
						func_316(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(1015404643);
						func_316(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-1724192342);
						func_316(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(1310680212);
						func_316(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-566881549);
						func_316(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-1753730528);
						func_316(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(147796381);
						func_316(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-378547623);
						func_316(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(829545206);
						func_316(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(891318243);
						func_316(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318();
						func_319(967523420);
						func_320();
						func_321();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_322(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_316(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_323(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_323(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_324(304805134, 1, 1);
						if (!func_325((*Global_1347702)[21]->f_15, 1))
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
						func_326();
						break;
					case 26:
						func_327();
						break;
					case 17:
						func_328(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_329())
						{
							func_330(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_331(-514575035, -1))
						{
							iVar15 = func_283();
							func_332(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_333(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_329())
						{
							func_330(1529685685);
						}
						break;
					case 34:
						if (func_329())
						{
							func_330(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_334();
						break;
					case 37:
						func_335();
						if (func_336())
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
						func_337();
						break;
					case 43:
						func_338();
						break;
					case 44:
						if (!func_325((*Global_1347702)[82]->f_15, 1))
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
						if (!func_325((*Global_1347702)[83]->f_15, 1))
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
						func_339();
						break;
					case 59:
						func_340();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_341();
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
						func_342();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_323(451, 0);
						}
						if (!func_343(-1992824800))
						{
							if (func_343(1520110311))
							{
								iVar16 = func_283();
								func_332(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_333(1937177603, iVar16, 1);
							}
						}
						if (func_344(4))
						{
							if (!func_345(684296857, 1, 0))
							{
								iVar17 = func_283();
								func_332(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_333(-1439688706, iVar17, 1);
							}
						}
						func_316(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_346(89200);
						func_346(2300);
						func_346(2300);
						break;
					case 68:
						func_347();
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
						func_348();
						func_346(-139100);
						break;
					case 69:
						if (func_325((*Global_1347702)[9]->f_15, 1))
						{
							func_346(-6000);
						}
						break;
					case 70:
						func_346(23400);
						func_346(1900);
						func_346(-15000);
						break;
					case 71:
						func_346(-5500);
						break;
				}
				break;
			case 8:
				switch (func_270(iParam0))
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
						func_349();
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
						func_350();
						break;
					case 66:
						func_351();
						func_352();
						break;
					case 67:
						if (!func_353(6))
						{
							func_354(6);
						}
						if (!func_353(3))
						{
							func_354(3);
						}
						if (func_329())
						{
							func_330(1534638301);
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
						if (func_325((*Global_1835011)[69]->f_1, 1))
						{
							func_355(0);
							func_346(40500);
						}
						else
						{
							func_355(0);
							func_346(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_270(iParam0))
				{
					case 0:
						switch (func_313(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_356(iParam0);
		func_357();
		switch (iVar0)
		{
			case 1:
				switch (func_270(iParam0))
				{
					case 4:
						func_358(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_358(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_358(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_358(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_358(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_358(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_358(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_359(iParam0);
						func_358(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_358(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_358(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_345(-2046502963, 1, 0))
						{
							func_316(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_358(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_358(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_358(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_359(iParam0) == 0)
						{
							func_358(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_358(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_299((*Global_1347702)[func_270(iParam0)]->f_12, 536870912))
				{
					func_360(11, 1);
				}
				switch (func_270(iParam0))
				{
					case 109:
						func_358(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_360(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_358(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_358(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_358(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_358(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_361(0, 10, 11, 2116153146))
				{
					func_358(iParam0, func_359(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_361(0, 7, 11, -379687487))
				{
					func_358(iParam0, func_362(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_361(0, 8, 11, -1386089015))
				{
					func_358(iParam0, func_362(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_361(0, 11, 11, -1952009645))
				{
					func_358(iParam0, func_362(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_361(0, 12, 11, 2065895756))
				{
					func_358(iParam0, func_362(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_192(iParam0) == 0)
			{
				if (func_191(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_191(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_194(func_193(iParam0), func_191(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_270(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_364(func_363(Global_1879514->f_1));
						if (iVar0 == 8 && func_270(iParam0) == 58)
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
						if (func_271(func_270(iParam0)) && func_299((*Global_1347702)[func_270(iParam0)]->f_12, 1))
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
			func_365(bParam2, iVar20);
		}
	}
	func_203(1);
	if ((bVar13 || func_129()) && (func_193(iParam0) == 1 || func_193(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_191(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_194(func_193(iParam0), func_191(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_193(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_361(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_366();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_190(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_189(iParam0))
	{
		if (!func_192(iParam0) == 5 && !func_192(iParam0) == 6)
		{
			if (bParam1)
			{
				func_200(iParam0, 6);
			}
			else
			{
				func_200(iParam0, 5);
			}
			func_205(iParam0);
		}
	}
	switch (func_193(iParam0))
	{
		case 1:
			switch (func_270(iParam0))
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
			switch (func_270(iParam0))
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
	vVar2 = { func_367((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_368(vVar2, uVar1, uVar0, 0);
	func_369(vVar2);
	Global_40.f_9.f_15 = func_370(vVar2, 0);
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
	func_371();
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
	func_372(Var10, 0);
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
	if (!func_188(iParam0))
	{
		return;
	}
	if (iParam0 != func_201(0))
	{
		return;
	}
	if (func_191(iParam0) == 0)
	{
	}
	iVar0 = func_193(iParam0);
	if (func_192(iParam0) == 3)
	{
		if (func_191(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_191(iParam0)))
		{
			if (func_193(iParam0) != 1 && func_193(iParam0) != 8)
			{
				func_194(func_193(iParam0), func_191(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_205(iParam0);
	func_40(1);
	func_202(0);
	func_200(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_308(1);
			func_309(15, 0, 1);
			break;
		case 4:
			func_309(10, 0, 1);
			break;
		case 8:
			func_309(10, 0, 1);
			break;
		case 9:
			func_309(10, 0, 1);
			break;
		case 2:
			func_309(10, 0, 1);
			break;
		case 6:
			func_309(10, 0, 1);
			break;
		case 5:
			func_309(10, 0, 1);
			break;
	}
	func_203(1);
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
	if (func_373(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_374(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_374(&(Global_1347343->f_11), 16384);
	}
	if (func_375() >= 2)
	{
		if (!func_373(Global_1347343->f_11, 16384))
		{
			func_374(&(Global_1347343->f_11), 8);
		}
		func_209(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_227(Global_1935630, 2048);
	func_376(bParam5);
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
			func_377(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(cParam0->f_7375.f_804);
	}
	if (func_196(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_378(cParam0, 67108864);
	}
}

int func_101(char[4] cParam0)
{
	return func_379(&(cParam0->f_7375));
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
	return func_380() != -1;
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
	func_381(cParam0);
	cParam0->f_634[0] = 56933;
	cParam0->f_634[1] = 56933;
	cParam0->f_637 = 0;
	func_383(cParam0, *uParam1);
	func_384(cParam0);
}

void func_109(char[4] cParam0)
{
	func_103(cParam0, 1);
	func_386(cParam0, func_385(6, 2));
	iVar0 = func_33(cParam0);
	if (iVar0 > iLocal_146)
	{
		return;
	}
	func_387(cParam0);
	func_388(cParam0);
}

char[] func_110(int iParam0)
{
	if (!func_187(iParam0))
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
			func_389(iVar0, iVar1);
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
	if (!func_245(iParam0))
	{
		return false;
	}
	return func_249(iParam0, 33554432);
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
	return func_390(cParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_391(&(cParam0->f_7375));
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
	return func_392(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_393(Param0, Param0.f_3);
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
	if (!func_394())
	{
		return false;
	}
	if (!func_325((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_325((*Global_1835011)[2]->f_1, 1) && func_325((*Global_1347702)[120]->f_15, 1)) && !func_325((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_325((*Global_1835011)[37]->f_1, 1) && !func_325((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_325((*Global_1835011)[57]->f_1, 1) && !func_325((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_325((*Global_1835011)[26]->f_1, 1) && !func_325((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_325((*Global_1835011)[62]->f_1, 1) && func_325((*Global_1835011)[63]->f_1, 1)) && !func_325((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_325((*Global_1835011)[75]->f_1, 1) && !func_325((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_325((*Global_1835011)[76]->f_1, 1) && !func_325((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_325((*Global_1835011)[40]->f_1, 1) && func_325((*Global_1835011)[41]->f_1, 1)) && !func_325((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_325((*Global_1835011)[62]->f_1, 1) && func_325((*Global_1835011)[63]->f_1, 1)) && !func_325((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_325((*Global_1835011)[65]->f_1, 1) && func_325((*Global_1835011)[66]->f_1, 1)) && !func_325((*Global_1835011)[67]->f_1, 1))
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
	if (func_395(vParam1))
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
	func_218(&(cParam0->f_603));
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
		return func_396();
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
		func_397(cParam0->f_607);
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
	func_398(&(cParam0->f_638));
	func_399(&(cParam0->f_819));
	func_400(&(cParam0->f_1020));
	func_401(&(cParam0->f_1081));
	func_402(&(cParam0->f_1126));
	func_403(&(cParam0->f_5147));
	func_404(&(cParam0->f_1124));
	func_405(&(cParam0->f_5188));
	func_406(&(cParam0->f_5239));
	func_407(&(cParam0->f_5249));
	func_408(&(cParam0->f_5265));
	func_409(&(cParam0->f_5286));
}

void func_138(char[4] cParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_410(cParam0, 822759307, 67108863);
	func_410(cParam0, -1090280091, 8064);
	func_410(cParam0, 2130094044, 8064);
	func_410(cParam0, 1161833594, 62);
	func_410(cParam0, 96930969, 3584);
	func_410(cParam0, -1261814606, 3584);
	func_410(cParam0, 937246805, 3584);
	func_410(cParam0, -1924405794, 3584);
	func_410(cParam0, -727455979, 3584);
	func_410(cParam0, 1127589605, 67108863);
	func_410(cParam0, 1110710183, 67108863);
	func_410(cParam0, 1459778951, 67108863);
	func_410(cParam0, 2024948086, 67108863);
	func_410(cParam0, 2030804811, 67108863);
}

void func_139(char[4] cParam0)
{
	func_411(cParam0);
	func_410(cParam0, 822759307, 67108863);
	func_410(cParam0, -1693870200, 67108863);
	func_410(cParam0, -375651986, 56);
	func_412(cParam0);
	func_413(cParam0);
	func_414(cParam0, cVar719, 15, 2, -1);
	func_414(cParam0, cVar720, 12, 2, -1);
	func_414(cParam0, cVar721, 12, 2, -1);
	func_414(cParam0, cVar722, 12, 2, -1);
	func_414(cParam0, "mar1_outlaw_wagon_escape", 3584, 2, -1);
	func_415(cParam0);
	func_417(cParam0, func_416(0), uLocal_105[0], 3, 0, 0, 0, 1);
	func_417(cParam0, func_416(1), uLocal_105[1], 3, 0, 0, 0, 1);
	func_417(cParam0, func_416(12), uLocal_105[12], 536576, 0, 0, 0, 1);
	func_418(cParam0, &(uLocal_105[12]), "pl_IG12_WAKE_Idle01", 536576);
	func_418(cParam0, &(uLocal_105[12]), "pl_IG12_WAKE_Idle02", 536576);
	func_418(cParam0, &(uLocal_105[12]), "pl_IG12_WAKE_Exit", 536576);
	func_417(cParam0, func_416(13), uLocal_105[13], 12, 0, 0, 0, 1);
	func_418(cParam0, &(uLocal_105[13]), "pl_mar1_ig13_park", 12);
	func_417(cParam0, func_416(15), uLocal_105[15], 1024, 0, 0, 0, 1);
	func_418(cParam0, &(uLocal_105[15]), "PL_LookReactLeft", 1024);
	func_418(cParam0, &(uLocal_105[15]), "PL_LookReactFront", 1024);
	func_417(cParam0, func_416(16), uLocal_105[16], 6144, 0, 0, 0, 1);
	func_418(cParam0, &(uLocal_105[16]), "pl_Laughing", 6144);
	func_417(cParam0, func_416(17), uLocal_105[17], 6144, 0, 0, 0, 1);
	func_418(cParam0, &(uLocal_105[17]), "pl_ComeBackHere", 6144);
	func_417(cParam0, func_416(21), uLocal_105[21], 14336, 0, 0, 0, 1);
	func_418(cParam0, &(uLocal_105[21]), "pl_lookreactleft", 14336);
	func_418(cParam0, &(uLocal_105[21]), "pl_lookreactfront", 14336);
	func_417(cParam0, func_416(19), uLocal_105[19], 531456, 0, 0, 0, 1);
	func_418(cParam0, &(uLocal_105[19]), "pl_IG_ChapterTitleOutro_Exit", 531456);
	func_419(cParam0, iVar726, 4064);
	func_419(cParam0, iVar727, 4064);
	func_419(cParam0, iVar728, 67108863);
	cParam0->f_607 = cParam0->f_607;
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_420(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(char[4] cParam0)
{
	func_103(cParam0, 1);
	if (func_33(cParam0) > iLocal_151)
	{
		func_103(cParam0, 2);
	}
}

void func_142(char[4] cParam0, int iParam1)
{
	func_421(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_267(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_268(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_422(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_253(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_423() };
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
	func_424(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_425(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_426(cParam0, bParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_377(&(cParam0->f_10792), bParam1, sParam2, bParam6);
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
	if (!func_187(iParam0))
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
		if (func_427(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_428(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_427(cParam0, func_33(cParam0), 1))
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
	return 1;
}

bool func_158(char[4] cParam0)
{
	if (func_429(cParam0) < 1)
	{
		func_430(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_431(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
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
				func_432(cParam0);
			}
		}
		if (func_120(cParam0, 32))
		{
			func_433(cParam0);
		}
	}
	switch (func_429(cParam0))
	{
		case -1:
		case 0:
			func_434(cParam0, 1);
			break;
		case 1:
			if (func_435(cParam0))
			{
				if (func_120(cParam0, 4096))
				{
					func_434(cParam0, 2);
				}
				else
				{
					func_434(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_436(cParam0))
			{
				func_434(cParam0, 3);
			}
			break;
		case 3:
			if (func_437(cParam0))
			{
				func_434(cParam0, 4);
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
		func_438(cParam0, 0);
		return true;
	}
	if (func_439(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_438(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_439(cParam0);
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
	func_440(iLocal_144, uVar718);
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar0++;
	}
}

void func_164(int iParam0)
{
	if (func_105())
	{
		iVar0 = iParam0;
		if (iVar0 > -1 && iVar0 < 26)
		{
			Global_1572864->f_9 = iParam0;
		}
		else
		{
			Global_1572864->f_9 = -1;
		}
	}
	else if (func_441())
	{
		Global_1572864->f_9 = iParam0;
	}
	else if (func_442())
	{
		Global_1572864->f_9 = iParam0;
	}
	else if (func_443())
	{
		Global_1572864->f_9 = iParam0;
	}
	else if (func_444())
	{
		Global_1572864->f_9 = iParam0;
	}
}

void func_165(int iParam0, int iParam1)
{
	iVar0 = func_283();
	if (iParam1 != -15)
	{
		iVar0 = iParam1;
	}
	Global_20710.f_1630[iParam0] = iVar0;
	func_445(iParam0, 8);
}

void func_166(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 - (Global_1900383->f_316 && iParam0));
}

void func_167()
{
	if (is_interior_entity_set_active(iVar806, "str_dr_intgroup_curtains"))
	{
		deactivate_interior_entity_set(iVar806, "str_dr_intgroup_curtains", true);
	}
	func_446(&uLocal_807);
	func_446(&uLocal_808);
}

void func_168(var uParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam1);
	_0x74c2b3dc0b294102(iParam1);
	if (_0x91a5f9cbebb9d936(*uParam0))
	{
		remove_scenario_blocking_area(*uParam0, bParam2);
	}
}

void func_169()
{
	func_447();
	iVar0 = 0;
	while (iVar0 < iVar542)
	{
		if (9 == iVar0)
		{
			func_448(&(iLocal_544[iVar0]));
		}
		func_449(&(iLocal_544[iVar0]));
		iVar0++;
	}
}

void func_170(char[4] cParam0)
{
	func_450(13, 536870912, 0);
	if (does_entity_exist(&(iLocal_162[1])))
	{
		func_257(cParam0, func_451(1), &(iLocal_162[1]), 1, 0, 1, 0);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (does_entity_exist(&(uLocal_170[iVar0])))
		{
			func_452(cParam0, &(uLocal_170[iVar0]), 1);
			func_454(func_453(iVar0), 0, 1, 0, 0);
		}
		iVar0++;
	}
	if (func_455(&(iLocal_165[0]), iVar958))
	{
		func_456(cParam0, &(iLocal_165[0]));
		func_454(474, 0, 1, 0, 0);
	}
	if (func_455(&(iLocal_165[1]), iVar958))
	{
		func_456(cParam0, &(iLocal_165[1]));
		func_457(iLocal_165[1], 1, 0, 1);
	}
	if (func_455(&(iLocal_165[2]), iVar958))
	{
		func_456(cParam0, &(iLocal_165[2]));
		func_457(iLocal_165[2], 1, 0, 1);
	}
	if (func_455(&(iLocal_165[3]), iVar958))
	{
		func_456(cParam0, &(iLocal_165[3]));
		func_457(iLocal_165[3], 1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (does_entity_exist(&(uLocal_389[iVar0])))
		{
			func_458(uLocal_389[iVar0]);
		}
		iVar0++;
	}
}

void func_171(char[4] cParam0)
{
	func_459(iVar536, Local_14);
	if (does_entity_exist(iVar536))
	{
		delete_vehicle(&uLocal_539);
	}
}

void func_172(int iParam0)
{
	if (iVar802 != 0 && iParam0 == 0)
	{
		iLocal_805 = 0;
	}
	func_460(&uLocal_584, 65536);
	func_460(&uLocal_584, 4194304);
	func_460(&uLocal_584, 32768);
	func_460(&uLocal_584, 262144);
	func_461(&uLocal_609);
}

void func_173(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (!does_entity_exist(&(iLocal_501[iVar0])))
		{
		}
		else if (iParam0 == 1)
		{
			set_object_as_no_longer_needed(iLocal_501[iVar0]);
		}
		else
		{
			func_462(iLocal_501[iVar0]);
		}
		iVar0++;
	}
}

void func_174()
{
	_remove_imap(-1106517275);
	_remove_imap(131323483);
	_request_imap(-134556459);
}

void func_175(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 - (Global_1357549->f_1495 && iParam0));
			break;
	}
}

void func_176(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	func_463(0, 0, 1103626240);
	clear_weather_type_persist();
	iLocal_666 = 0;
}

void func_177(int iParam0)
{
	func_184(709);
	func_184(715);
	func_184(723);
	func_184(712);
	func_184(713);
	func_184(711);
	func_184(714);
	if (iParam0 == 1)
	{
		func_184(715);
	}
}

void func_178(float fParam0)
{
	if (func_464(1) < fParam0)
	{
		func_465(1, fParam0, 0);
	}
	if (func_464(2) < fParam0)
	{
		func_465(2, fParam0, 0);
	}
	if (func_464(0) < fParam0)
	{
		func_465(0, fParam0, 0);
	}
}

void func_179()
{
}

void func_180()
{
	func_44();
	_0xbc90bdf4e5228ea1();
}

void func_181(int iParam0, bool bParam1)
{
	if (!func_466(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_467(iParam0, 1);
	}
	else
	{
		func_468(iParam0, 1);
	}
	func_470(func_469(iParam0), bParam1);
}

void func_182(bool bParam0)
{
	vVar1 = { func_471(61) };
	if (!func_395(vVar1))
	{
		iVar0 = get_interior_at_coords(vVar1);
	}
	else
	{
		return;
	}
	if (!is_valid_interior(iVar0))
	{
		return;
	}
	if (bParam0)
	{
		func_472(iVar0, "_s_canBeans01x_dressing");
		func_472(iVar0, "_s_canPeas01x_dressing");
		func_472(iVar0, "_s_canPeaches01x_dressing");
		func_472(iVar0, "_s_canCorn01x_dressing");
		func_472(iVar0, "_s_crackers01x_dressing");
		func_472(iVar0, "_s_biscuits01x_dressing");
		func_472(iVar0, "_s_inv_baitMeat01x_dressing");
		func_472(iVar0, "_s_inv_baitHerb01x_dressing");
		func_472(iVar0, "_s_flask01x_dressing");
		func_472(iVar0, "_s_inv_tabacco01x_dressing");
		func_472(iVar0, "_p_cigarettebox01x_dressing");
		func_472(iVar0, "_p_cigar02x_dressing");
		func_472(iVar0, "_p_tin_soap01x_dressing");
		func_472(iVar0, "_s_inv_horsePills01x_dressing");
		func_472(iVar0, "_p_tin_pomade01x_dressing");
		func_472(iVar0, "_s_cricketTin01x_dressing");
		func_472(iVar0, "_s_wormCan01x_dressing");
		func_472(iVar0, "_p_int_fishing01_dressing");
		func_472(iVar0, "_p_apple01x_dressing");
		func_472(iVar0, "_p_carrots_01x_dressing");
	}
	else
	{
		func_473(iVar0, "_s_canBeans01x_dressing");
		func_473(iVar0, "_s_canPeas01x_dressing");
		func_473(iVar0, "_s_canPeaches01x_dressing");
		func_473(iVar0, "_s_canCorn01x_dressing");
		func_473(iVar0, "_s_crackers01x_dressing");
		func_473(iVar0, "_s_biscuits01x_dressing");
		func_473(iVar0, "_s_inv_baitMeat01x_dressing");
		func_473(iVar0, "_s_inv_baitHerb01x_dressing");
		func_473(iVar0, "_s_flask01x_dressing");
		func_473(iVar0, "_s_inv_tabacco01x_dressing");
		func_473(iVar0, "_p_cigarettebox01x_dressing");
		func_473(iVar0, "_p_cigar02x_dressing");
		func_473(iVar0, "_p_tin_soap01x_dressing");
		func_473(iVar0, "_s_inv_horsePills01x_dressing");
		func_473(iVar0, "_p_tin_pomade01x_dressing");
		func_473(iVar0, "_s_cricketTin01x_dressing");
		func_473(iVar0, "_s_wormCan01x_dressing");
		func_473(iVar0, "_p_int_fishing01_dressing");
		func_473(iVar0, "_p_apple01x_dressing");
		func_473(iVar0, "_p_carrots_01x_dressing");
	}
}

void func_183()
{
	_0x2f9ac754fe179d58(1f);
}

int func_184(int iParam0)
{
	if (!func_474(iParam0))
	{
		return 0;
	}
	if (!func_476(func_475(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_477(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_477(iParam0));
	return 1;
}

int func_185(int iParam0)
{
	return iParam0;
}

void func_186(int iParam0)
{
	if (!func_478(iParam0))
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

bool func_187(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_188(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_189(int iParam0)
{
	iVar0 = func_294(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_190(int iParam0)
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
		iVar0 = func_192(iParam0);
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

int func_191(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_192(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_479(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_193(int iParam0)
{
	if (!func_188(iParam0))
	{
		return 0;
	}
	return func_481(func_480(iParam0));
}

void func_194(int iParam0, int iParam1, int iParam2)
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

bool func_195(int iParam0, bool bParam1, bool bParam2)
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
		if (func_482())
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
		iVar0 = func_270(&(Global_1898164->f_1[0]));
		if (func_271(iVar0) && func_299((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_188(&(Global_1898164->f_1[0])))
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

bool func_196(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_197(int iParam0)
{
	switch (func_193(iParam0))
	{
		case 1:
			iVar0 = func_270(iParam0);
			return func_483(iVar0);
		case 8:
			iVar1 = func_270(iParam0);
			if (func_299((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_484(iVar1);
			}
			break;
	}
	return -1;
}

void func_198(bool bParam0)
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
		func_485(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_486();
		Global_1898077->f_9 = func_487(Global_1894899->f_2);
		func_488(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_199()
{
	if (!func_325((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_325((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_325((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_325((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_325((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_325((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_325((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_200(int iParam0, int iParam1)
{
	if (!func_188(iParam0))
	{
		return;
	}
	func_489(iParam0, iParam1);
}

int func_201(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_202(bool bParam0)
{
	if (!bParam0 && func_490(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_203(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_204(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_201(0) != iParam0)
	{
		return;
	}
	if (func_491(iParam0))
	{
		if (bParam1)
		{
			func_492(-525676072);
		}
		else
		{
			func_493(-525676072);
		}
	}
}

int func_205(int iParam0)
{
	return func_495(func_494(iParam0));
}

void func_206(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_207(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_208(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_209(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_210()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_211()
{
	return func_496(_0xc17f69e1418cd11f(3));
}

bool func_212()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_213(int iParam0)
{
	iParam0 = func_264(iParam0);
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

int func_214(int iParam0, int iParam1)
{
	if (!func_497(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_498(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_215(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_216(char* sParam0, bool bParam1)
{
	if (func_215(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_499(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_499(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_499(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_499(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_499(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_499(sParam0, 1);
		return true;
	}
	func_499(sParam0, 1);
	return false;
}

bool func_217(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_218(var uParam0)
{
	func_500(uParam0, 0f);
}

int func_219(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_501(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_502() - round((uParam0->f_1 * 1000f)));
}

void func_220(bool bParam0, bool bParam1)
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
		func_503(0);
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

struct<4> func_221(int iParam0, int iParam1)
{
	return func_504(iParam0, iParam1);
}

void func_222(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_223(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_9;
}

void func_224(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_193(iParam0) == 1)
	{
		cVar0 = func_110(func_505(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_193(iParam0) == 8)
	{
		cVar0 = func_507(func_506(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_508(1, 1);
	func_509(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_209(1f);
}

void func_225(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_499(sParam0, 2);
}

void func_226(int iParam0, int iParam1)
{
	if (!func_510(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_227(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_228()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_229()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_230()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_231()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_232()
{
	return func_511(get_id_of_this_thread());
}

void func_233(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_512(bParam0);
}

void func_234()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_235(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_236()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_237(var uParam0)
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

void func_238(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_239(int iParam0)
{
	if (!func_513(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_240()
{
	func_514(64);
}

void func_241()
{
	Global_1310750->f_16072 = 0;
}

bool func_242()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_243(int iParam0)
{
	return func_244(23, iParam0);
}

bool func_244(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_515(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_516())
	{
		return func_515(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_515(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_245(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_246(int iParam0)
{
	if (!func_245(iParam0))
	{
		return false;
	}
	return func_249(iParam0, 8);
}

void func_247(int iParam0, int iParam1)
{
	if (!func_245(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_248(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_249(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_250(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_251()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_249(iVar1, 1))
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
			else if (func_249(iVar1, 2))
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
				func_286(iVar1, 11);
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

bool func_252(var uParam0)
{
	if (func_517(uParam0, 1) || func_517(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_253(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_254(struct<2> Param0)
{
	if (!func_253(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_255(struct<2> Param0, int iParam2)
{
	if (!func_253(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_256(int iParam0)
{
	if (!func_518(iParam0))
	{
		return false;
	}
	if (!func_519(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_257(char[4] cParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_518(iParam1))
	{
		return;
	}
	if (!func_256(iParam1))
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
		func_456(cParam0, bParam2);
		func_520(bParam2);
	}
	func_521(iParam1);
	func_522(iParam1, 0);
	func_523(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_258(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_259(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_260(int iParam0)
{
	iParam0 = func_264(iParam0);
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

void func_261(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_524(iParam0);
	if (func_525(iParam0))
	{
		if (func_260(iParam0) != iVar0)
		{
			return;
		}
	}
	func_526(iParam0);
	func_527(iParam0);
	bVar1 = func_213(iParam0);
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
			if (!func_528(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_529(iParam0);
	}
}

void func_262(bool bParam0, bool bParam1)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	if (is_entity_dead(bParam0) || is_ped_injured(bParam0))
	{
		return;
	}
	if (!func_530(bParam0))
	{
		return;
	}
	iVar0 = func_259(bParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_524(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_260(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_525(iVar0))
		{
			return;
		}
	}
	func_531(iVar0);
	set_ped_keep_task(bParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(bParam0))
		{
			set_entity_as_mission_entity(bParam0, true, true);
		}
	}
}

void func_263(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_264(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_265(int iParam0, int iParam1)
{
	iParam0 = func_264(iParam0);
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

void func_266()
{
	if (func_532(0))
	{
		func_533(0);
	}
	if (func_532(1))
	{
		func_533(1);
	}
	if (func_532(5))
	{
		func_533(5);
	}
	if (func_532(6))
	{
		func_526(6);
	}
}

struct<2> func_267(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_268(int iParam0)
{
	Var0 = { func_267(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_269(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_270(int iParam0)
{
	if (!func_188(iParam0))
	{
		return -1;
	}
	return func_534(func_480(iParam0));
}

bool func_271(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_272(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_273(int iParam0, bool bParam1)
{
	iVar0 = func_535(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_536(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_536(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_536(iParam0)))
			{
				_uilog_remove_entry(2, func_536(iParam0));
			}
		}
	}
	func_537(iParam0, 4);
	func_537(iParam0, 8);
	func_537(iParam0, 16);
}

void func_274(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_271(iVar0))
		{
			if (func_272(iVar0, 4))
			{
				func_275(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_275(int iParam0, bool bParam1)
{
	if (!func_272(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_535(iParam0), func_536(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_535(iParam0), func_536(iParam0), 2, "");
		func_538(iParam0, 16);
	}
	else
	{
		if (func_272(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_535(iParam0), func_536(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_535(iParam0), func_536(iParam0), 0, "");
		}
		func_537(iParam0, 16);
	}
}

void func_276(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_272(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_535(iParam0), func_536(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_272(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_535(iParam0), func_536(iParam0), 1, "");
		}
		func_538(iParam0, 8);
	}
	else
	{
		if (func_272(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_535(iParam0), func_536(iParam0), 0, "");
		}
		func_537(iParam0, 8);
	}
}

int func_277(char[4] cParam0)
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

void func_278(int iParam0, int iParam1)
{
	if (func_532(0))
	{
		if (func_539(0))
		{
			func_540(0);
		}
	}
	if (func_532(1))
	{
		if (func_539(1))
		{
			func_540(1);
		}
	}
}

void func_279(char[4] cParam0)
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
		if (func_431(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_280(char[4] cParam0)
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

void func_281(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_541(iParam0, sParam4, iParam5);
	}
	func_542(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_282(int iParam0)
{
	if (!func_245(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_283()
{
	return &Global_1899515;
}

void func_284(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_285(int iParam0, int iParam1)
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

void func_286(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_287(int iParam0)
{
	if (!func_245(iParam0))
	{
		return;
	}
	if (func_543(iParam0))
	{
		func_544(iParam0);
	}
	else
	{
		func_545(iParam0);
	}
}

int func_288(int iParam0)
{
	if (func_546(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_289(int iParam0)
{
	if (func_547(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_290(int iParam0, int iParam1)
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

void func_291(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_548(Global_1310750[iVar0], iParam0))
		{
			if (!func_549(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_550(iVar0) < func_551(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_293(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_292(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_552();
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

void func_293(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_553(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_294(int iParam0)
{
	if (!func_188(iParam0))
	{
		return -1;
	}
	return func_192(iParam0);
}

void func_295(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_296(bool bParam0, int iParam1)
{
	if (!bParam0 && func_490(373691918))
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
	func_202(bParam0);
	return 1;
}

void func_297()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_518(iVar17))
		{
			bVar18 = func_554(iVar17);
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
	func_461(&(Global_1359489->f_55));
	if (func_555(1777191912, 1))
	{
		func_556(1777191912, 1, 0);
	}
}

void func_298(int iParam0)
{
	if (!func_188(iParam0))
	{
		return;
	}
	func_558(iParam0, (func_557(iParam0) + shift_left(1, 16)));
}

bool func_299(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_300()
{
	return func_559() > 0;
}

void func_301(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_560(-1032423150, iParam1);
			break;
		case 18:
			func_560(294066959, iParam1);
			func_560(-1925639563, iParam1);
			func_560(-378582304, iParam1);
			func_560(-338306437, iParam1);
			break;
		case 20:
			func_560(437270255, iParam1);
			break;
		case 2:
			func_560(-304000413, iParam1);
			func_560(-533612796, iParam1);
			func_560(48036954, iParam1);
			break;
		case 23:
			func_560(193108691, iParam1);
			func_560(491732588, iParam1);
			func_560(671962088, iParam1);
			func_561(1);
			break;
		case 16:
			func_560(-1836056650, iParam1);
			func_560(-754657922, iParam1);
			func_560(-1752355838, iParam1);
			func_560(-1375324510, iParam1);
			break;
		case 59:
			func_560(-514392105, iParam1);
			func_560(-822060246, iParam1);
			if (func_562(146))
			{
				func_560(1372748575, iParam1);
			}
			func_561(1);
			break;
		case 76:
			func_560(1991352213, iParam1);
			if (func_563() == 0)
			{
				func_560(1852488616, iParam1);
			}
			else
			{
				func_560(-9866350, iParam1);
			}
			break;
		case 44:
			func_560(863852599, iParam1);
			func_560(1228374935, iParam1);
			func_560(1517889050, iParam1);
			func_560(830657578, iParam1);
			func_560(1901354958, iParam1);
			break;
		case 46:
			func_560(-582805654, iParam1);
			func_560(250378940, iParam1);
			func_560(-2143265426, iParam1);
			break;
		case 17:
			func_560(-941494139, iParam1);
			func_560(1641489521, iParam1);
			break;
		case 19:
			func_560(-1829423531, iParam1);
			func_560(-1590504752, iParam1);
			func_560(1357221321, iParam1);
			break;
		case 21:
			func_560(-1037992610, iParam1);
			func_560(-1286414399, iParam1);
			func_561(0);
			break;
		case 15:
			func_560(-1014460309, iParam1);
			func_560(-1030502825, iParam1);
			break;
		case 33:
			func_560(479388090, iParam1);
			func_560(-1396342239, iParam1);
			func_560(-619618632, iParam1);
			break;
		case 34:
			func_560(1193561641, iParam1);
			break;
		case 64:
			func_560(1363960851, iParam1);
			break;
		case 60:
			func_560(-1232453926, iParam1);
			func_560(-882833584, iParam1);
			break;
		case 73:
			func_560(2023205767, iParam1);
			break;
		case 74:
			func_560(-2135286513, iParam1);
			if (func_563() == 0)
			{
				func_560(33799444, iParam1);
			}
			else
			{
				func_560(-161343203, iParam1);
			}
			break;
		case 8:
			func_560(841639693, iParam1);
			func_560(358952323, iParam1);
			break;
		case 36:
			func_560(852538149, iParam1);
			func_560(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_560(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_560(1116039310, iParam1);
			}
			break;
		case 27:
			func_560(107633428, iParam1);
			func_560(335902282, iParam1);
			func_560(575673055, iParam1);
			func_560(-425944207, iParam1);
			break;
		case 28:
			func_560(-1941530250, iParam1);
			func_560(1399269304, iParam1);
			func_560(1839684664, iParam1);
			func_560(923168503, iParam1);
			func_560(-1485078322, iParam1);
			break;
		case 29:
			func_560(574995900, iParam1);
			func_560(-1691275407, iParam1);
			func_560(-1725307861, iParam1);
			break;
		case 31:
			func_560(-2108383238, iParam1);
			func_560(-1321828931, iParam1);
			func_560(-1632118592, iParam1);
			func_560(334938948, iParam1);
			break;
		case 4:
			func_560(115823701, iParam1);
			func_560(-1896939736, iParam1);
			func_560(-1830746356, iParam1);
			func_560(-1235169781, iParam1);
			func_561(0);
			break;
		case 6:
			func_560(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_560(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_560(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_560(-384176140, iParam1);
			}
			break;
		case 25:
			func_560(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_560(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_560(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_560(-1374849484, iParam1);
			}
			break;
		case 48:
			func_560(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_560(217772674, iParam1);
			}
			else
			{
				func_560(2071798160, iParam1);
			}
			if (func_564(51))
			{
				func_560(-792802286, iParam1);
			}
			break;
		case 49:
			func_560(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_560(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_560(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_560(1402120602, iParam1);
			}
			break;
		case 58:
			func_560(-1661934591, iParam1);
			break;
		case 50:
			func_560(-1713759426, iParam1);
			break;
		case 52:
			func_560(-314799932, iParam1);
			func_560(-462260432, iParam1);
			func_560(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_560(345256028, iParam1);
				func_560(-1635084094, iParam1);
			}
			else
			{
				func_560(114267347, iParam1);
			}
			break;
		case 32:
			func_560(615304157, iParam1);
			break;
		case 47:
			func_560(415434835, iParam1);
			break;
		case 69:
			func_560(1373465877, iParam1);
			if (func_325((*Global_1347702)[9]->f_15, 1))
			{
				func_560(-2058273527, iParam1);
			}
			break;
		case 70:
			func_560(451334985, iParam1);
			if (func_563() == 0)
			{
				func_560(-224150200, iParam1);
			}
			else
			{
				func_560(289012628, iParam1);
			}
			break;
		case 71:
			if (func_563() == 0)
			{
				func_560(-41692120, iParam1);
			}
			else
			{
				func_560(1537840678, iParam1);
			}
			break;
		case 37:
			func_560(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_560(1842132550, iParam1);
			}
			else
			{
				func_560(-785735240, iParam1);
			}
			func_560(-1605690566, iParam1);
			break;
		case 13:
			func_560(-731367459, iParam1);
			func_560(224176585, iParam1);
			func_560(-14545580, iParam1);
			break;
		case 53:
			func_560(1095274522, iParam1);
			break;
		case 54:
			func_560(-572027988, iParam1);
			break;
		case 56:
			func_560(1339307101, iParam1);
			func_560(2102267732, iParam1);
			break;
		case 57:
			func_560(710102686, iParam1);
			break;
		case 22:
			func_560(-1754368482, iParam1);
			func_560(-2071408557, iParam1);
			break;
		case 12:
			func_560(-181334543, iParam1);
			break;
		case 0:
			func_560(-2134669864, iParam1);
			func_560(-548289709, iParam1);
			func_560(-911271922, iParam1);
			func_560(-604455775, iParam1);
			break;
		case 1:
			func_561(1);
			break;
		case 3:
			if (func_336())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_560(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_560(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_302()
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

void func_303(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_560(-145926707, iParam1);
			func_560(-604922090, iParam1);
			func_560(-848690769, iParam1);
			break;
		case 1:
			func_560(-1477631591, iParam1);
			break;
		case 2:
			func_560(76112544, iParam1);
			break;
		case 9:
			func_560(1396404308, iParam1);
			func_560(-1357381228, iParam1);
			if (func_325((*Global_1835011)[69]->f_1, 1))
			{
				func_560(1902679064, iParam1);
			}
			else
			{
				func_560(-2146422425, iParam1);
			}
			break;
		case 22:
			func_560(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_560(-1934184559, iParam1);
				func_560(1281755988, iParam1);
			}
			else
			{
				func_560(-1745220872, iParam1);
				func_560(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_560(-1641504538, iParam1);
				func_560(-988014485, iParam1);
			}
			else if (func_562(26))
			{
				func_560(-343043950, iParam1);
				func_560(-640062214, iParam1);
			}
			else
			{
				func_560(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_560(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_560(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_560(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_560(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_560(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_560(1301690984, iParam1);
				}
			}
			else
			{
				func_560(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_560(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_560(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_560(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_560(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_560(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_560(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_560(-754570528, iParam1);
			}
			else
			{
				func_560(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_560(-2072125821, iParam1);
			}
			else
			{
				func_560(270040030, iParam1);
			}
			break;
		case 37:
			func_560(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_560(-505314737, iParam1);
				func_560(-1853052860, iParam1);
			}
			else
			{
				func_560(-1975624994, iParam1);
				func_560(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_560(1690231002, iParam1);
			}
			else
			{
				func_560(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_560(1225386280, iParam1);
			}
			else if (func_562(54))
			{
				func_560(-283235773, iParam1);
			}
			else
			{
				func_560(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_560(1355398007, iParam1);
			}
			else
			{
				func_560(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_560(574636806, iParam1);
			}
			else
			{
				func_560(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_560(821118338, iParam1);
			}
			else if (func_562(39))
			{
				func_560(846829260, iParam1);
			}
			else
			{
				func_560(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_359((*Global_1835011)[33]->f_1) == 1)
				{
					func_560(1422779093, iParam1);
				}
				else
				{
					func_560(-1769536986, iParam1);
				}
			}
			else
			{
				func_560(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_560(352134789, iParam1);
			}
			else if (func_562(43))
			{
				func_560(260723113, iParam1);
			}
			else
			{
				func_560(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_560(-457958799, iParam1);
			}
			else
			{
				func_560(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_562(41))
			{
				func_560(-546824600, iParam1);
			}
			else
			{
				func_560(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_560(1297261593, iParam1);
			}
			else
			{
				func_560(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_560(2068484886, iParam1);
			}
			else if (func_562(49))
			{
				func_560(-1489080639, iParam1);
				func_560(-2102244050, iParam1);
			}
			else
			{
				func_560(-1863040467, iParam1);
			}
			break;
		case 51:
			func_560(-2055943209, iParam1);
			break;
		case 58:
			if (func_325((*Global_1347702)[23]->f_15, 1))
			{
				func_560(1650066845, iParam1);
			}
			else
			{
				func_560(151370023, iParam1);
			}
			func_560(1426057961, iParam1);
			func_560(476379584, iParam1);
			break;
		case 59:
			func_560(-1638117866, iParam1);
			break;
		case 62:
			func_560(199541730, iParam1);
			break;
		case 63:
			func_560(1703485804, iParam1);
			func_560(-800449045, iParam1);
			break;
		case 65:
			func_560(-1678210868, iParam1);
			func_560(-1448238026, iParam1);
			func_560(-1200864845, iParam1);
			func_560(1473511536, iParam1);
			break;
		case 66:
			func_560(-1774490051, iParam1);
			func_560(-34645921, iParam1);
			func_560(174027075, iParam1);
			func_560(-1155999, iParam1);
			func_561(1);
			break;
		case 67:
			func_560(701612593, iParam1);
			func_560(-1069631343, iParam1);
			func_560(1673428882, iParam1);
			break;
		case 68:
			func_560(-739133286, iParam1);
			func_560(-2130089358, iParam1);
			func_560(2056190391, iParam1);
			func_560(1941753817, iParam1);
			func_561(0);
			break;
		case 70:
			func_560(-1217555753, iParam1);
			break;
		case 71:
			func_560(697048821, iParam1);
			break;
		case 73:
			func_560(-553148661, iParam1);
			break;
		case 75:
			func_560(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_560(1414263863, iParam1);
			}
			else
			{
				func_560(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_560(1835465936, iParam1);
				func_560(523715611, iParam1);
			}
			else if (func_562(78))
			{
				func_560(1420338873, iParam1);
			}
			else
			{
				func_560(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_560(10180941, iParam1);
			}
			else if (func_562(79))
			{
				func_560(768420635, iParam1);
			}
			else
			{
				func_560(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_560(-383601523, iParam1);
			}
			else
			{
				func_560(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_560(1606472408, iParam1);
			}
			else
			{
				func_560(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_560(-203571927, iParam1);
			}
			else
			{
				func_560(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_560(729886222, iParam1);
			}
			else
			{
				func_560(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_560(-714816362, iParam1);
			}
			else
			{
				func_560(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_560(-932932179, iParam1);
				func_560(-1458537240, iParam1);
			}
			else
			{
				func_560(-1764383885, iParam1);
				func_560(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_560(1741466706, iParam1);
			}
			else
			{
				func_560(1405815775, iParam1);
			}
			break;
		case 94:
			func_560(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_560(1905280979, iParam1);
			}
			else
			{
				func_560(-1966245299, iParam1);
			}
			func_560(721468880, iParam1);
			break;
		case 99:
			func_560(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_560(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_560(-1117781095, iParam1);
				}
				else
				{
					func_560(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_560(141494548, iParam1);
			}
			else
			{
				func_560(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_560(-369525697, iParam1);
			}
			else if (func_562(101))
			{
				func_560(1595015219, iParam1);
			}
			else
			{
				func_560(-321486961, iParam1);
			}
			break;
		case 103:
			func_560(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_560(793460477, iParam1);
				func_560(-1610242176, iParam1);
			}
			else if (func_562(103))
			{
				func_560(1830897187, iParam1);
			}
			else
			{
				func_560(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_560(1528309077, iParam1);
			}
			else if (func_562(104))
			{
				func_560(1864966105, iParam1);
			}
			else
			{
				func_560(-103336013, iParam1);
			}
			break;
		case 108:
			func_560(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_560(-1123227713, iParam1);
				func_560(-889574341, iParam1);
			}
			else
			{
				func_560(2065385917, iParam1);
				func_560(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_560(-887421691, iParam1);
			}
			else if (func_562(109))
			{
				func_560(-1318117949, iParam1);
			}
			else
			{
				func_560(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_560(284822762, iParam1);
				}
				else
				{
					func_560(-1425017554, iParam1);
				}
			}
			else if (func_562(110))
			{
				if (&Global_1357515 == 0)
				{
					func_560(553087292, iParam1);
				}
				else
				{
					func_560(-1766870331, iParam1);
					func_560(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_560(-1980598735, iParam1);
			}
			else
			{
				func_560(-442732098, iParam1);
				func_560(1955756409, iParam1);
			}
			break;
		case 115:
			func_560(394303528, iParam1);
			func_560(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_560(1182403394, iParam1);
			}
			else
			{
				func_560(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_560(924445424, iParam1);
			}
			else
			{
				func_560(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_560(430755273, iParam1);
				func_560(-1473879802, iParam1);
			}
			else
			{
				func_560(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_560(73885747, iParam1);
			}
			else if (func_562(117))
			{
				func_560(1559707913, iParam1);
			}
			else
			{
				func_560(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_560(-2103887972, iParam1);
			}
			else if (func_562(118))
			{
				func_560(-435828462, iParam1);
			}
			else
			{
				func_560(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_560(2054486196, iParam1);
			}
			else
			{
				func_560(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_560(-570086056, iParam1);
			}
			else if (func_562(121))
			{
				func_560(32337856, iParam1);
			}
			else
			{
				func_560(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_560(813493663, iParam1);
			}
			else if (func_562(122))
			{
				func_560(-2132763590, iParam1);
			}
			else
			{
				func_560(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_560(-66240572, iParam1);
				func_560(1563075046, iParam1);
			}
			else
			{
				func_560(-787011772, iParam1);
				func_560(-1523377438, iParam1);
			}
			break;
		case 127:
			func_560(61020800, iParam1);
			break;
		case 129:
			func_560(428985222, iParam1);
			break;
		case 131:
			func_560(-1393851036, iParam1);
			break;
		case 133:
			func_560(1559531342, iParam1);
			break;
		case 134:
			func_560(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_560(-1374407408, iParam1);
				}
				else
				{
					func_560(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_560(-472672138, iParam1);
				}
				else
				{
					func_560(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_560(-1678710489, iParam1);
			}
			else
			{
				func_560(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_560(1717582460, iParam1);
			}
			else
			{
				func_560(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_560(1568112362, iParam1);
				func_560(1388317526, iParam1);
			}
			else if (func_562(136))
			{
				func_560(-1597534828, iParam1);
				func_560(-1207918353, iParam1);
			}
			else
			{
				func_560(-1940891082, iParam1);
				func_560(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_560(448334530, iParam1);
				func_560(2145375502, iParam1);
			}
			else
			{
				func_560(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_560(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_560(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_560(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_560(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_560(-66616327, iParam1);
			}
			else
			{
				func_560(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_560(1862916706, iParam1);
			}
			else if (func_562(147))
			{
				func_560(675105199, iParam1);
			}
			else
			{
				func_560(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_560(174409701, iParam1);
			}
			else if (func_562(148))
			{
				func_560(-1730895475, iParam1);
			}
			else
			{
				func_560(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_560(1295237052, iParam1);
			}
			else if (func_562(149))
			{
				func_560(-788577684, iParam1);
			}
			else
			{
				func_560(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_304(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_193(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_505(iParam0);
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
					if (func_359((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_270(iParam0);
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
			iVar3 = func_270(iParam0);
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

int func_305(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_565(iParam0);
	iVar3 = func_566(iParam0);
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
				iVar1 = func_283();
				func_332(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_567(iParam0, 1);
			if (func_568(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_569(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_570(1, iParam0);
				}
				else
				{
					func_571(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_306(int iParam0, int iParam1)
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

int func_307(int iParam0, int iParam1, int iParam2)
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

void func_308(bool bParam0)
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

void func_309(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_572(iParam0, iParam1, bParam2);
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

int func_310(int iParam0, int iParam1)
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

bool func_311(int iParam0)
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

void func_312(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_573(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_574(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_575(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_576(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_575(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_313(int iParam0)
{
	if (!func_188(iParam0))
	{
		return -1;
	}
	return func_577(func_480(iParam0));
}

int func_314(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_315()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_578(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_316(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_579(iParam0, 0))
	{
		return false;
	}
	if (!func_580(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_581(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_582(iParam0, bParam2);
	iVar2 = 0;
	if (func_583(iParam0, 0, 0) == 0)
	{
		if (func_584(iParam0))
		{
			iVar5 = func_585(iParam0);
			iVar6 = func_586(iVar5);
			iVar7 = func_587(iVar6) + 1;
			func_588(iVar5);
			if (func_589(38))
			{
				func_323(483, 0);
			}
			else
			{
				func_323(482, 0);
			}
			if (iVar7 == func_590(iVar6))
			{
				func_316(func_591(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_394() && func_592(4))
				{
					if (func_394() && (func_593(38) || func_589(38)))
					{
						func_595(38, func_591(iVar6), 0, 0, func_594(), 0, -1, 0);
						func_596(2);
					}
					else
					{
						func_595(38, func_591(iVar6), 0, 0, func_594(), 0, -1, 0);
						func_596(1);
					}
				}
			}
			else if (func_394() && func_592(4))
			{
				if (func_394() && (func_593(38) || func_589(38)))
				{
					func_595(38, 0, 0, 0, func_594(), 0, -1, 0);
					func_596(2);
				}
				else
				{
					func_595(38, 0, 0, 0, func_594(), 0, -1, 0);
					func_596(1);
				}
			}
			if (func_394() && func_592(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_394() && (func_593(38) || func_589(38)))
					{
						func_597(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_597(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_598(iParam0) == -1037537535)
	{
		if ((!func_599(iParam0, 866047851) && !func_599(iParam0, -1979000645)) && !func_599(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_600(iParam0, 8388608) && !func_601(28))
	{
		func_602(28);
	}
	if (!bVar3)
	{
		if (func_599(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_603(iParam0) == -1447088266)
			{
				iVar1 = func_605(func_604(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_606(iVar1);
					}
					if (func_607(0) && func_608(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_609(iParam0, iVar0, iParam5);
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
						func_606(iParam0);
					}
					if (func_607(0) && func_608(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_609(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_598(iParam0) == -427144552)
		{
			if (!func_610(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_598(iParam0) == 307971639 && func_611(iParam0))
		{
			if (!func_612(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_599(iParam0, 866047851))
		{
			func_613(iParam0);
		}
		else if (func_599(iParam0, 2000026003))
		{
			func_614(iParam0);
		}
		else if (func_599(iParam0, -103750053))
		{
			func_95(func_615(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_616(-717883113, 2091222383), iVar0);
		}
		else if (func_599(iParam0, -121341956) && !func_599(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_325((*Global_1835011)[4]->f_1, 1))
				{
					func_323(498, 0);
				}
			}
			if (func_599(iParam0, -2017733358) || func_599(iParam0, -1369131378))
			{
				func_617(iParam0);
			}
		}
		else if (func_599(iParam0, -136654233))
		{
			if (func_599(iParam0, -1021472396))
			{
			}
		}
		else if (func_599(iParam0, -1466706512) && func_599(iParam0, 1147021565))
		{
			func_323(484, 0);
		}
		else if (func_599(iParam0, 1147021565) && func_599(iParam0, -524514947))
		{
		}
		else if (func_599(iParam0, 554195525))
		{
		}
		else if (func_599(iParam0, 589988438))
		{
			if (func_618())
			{
				func_619(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_599(iParam0, 787083290) && func_599(iParam0, 949916894))
		{
			func_620(iParam0);
		}
		else if (func_599(iParam0, -1718133314))
		{
			func_621(iParam0);
		}
		else if (func_599(iParam0, -1738650224))
		{
			func_622(iParam0);
		}
		else if (func_599(iParam0, -1112814642) && func_599(iParam0, 949916894))
		{
			func_623(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_599(iParam0, 1841149704))
		{
			func_624();
		}
		else if (func_599(iParam0, 606799272))
		{
			func_625(iParam0, iParam1);
			func_626(iParam0);
		}
		else if (func_599(iParam0, -1112814642) && func_599(iParam0, -1697809989))
		{
			func_627(iParam0, 0, 0, 0);
		}
		else if (func_599(iParam0, -2017733358) || func_599(iParam0, -1369131378))
		{
			func_617(iParam0);
		}
		else if (func_599(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_628(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_599(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_345(215778062, 1, 0))
					{
						func_316(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_345(670273567, 1, 0))
					{
						func_316(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_345(-967317137, 1, 0))
					{
						func_316(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_345(526074061, 1, 0))
					{
						func_316(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_345(-1045488665, 1, 0))
					{
						func_316(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_345(471514780, 1, 0))
					{
						func_316(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_599(iParam0, -839724752) && func_600(iParam0, 4))
		{
			if (!func_589(42))
			{
				func_629(iParam0);
			}
		}
		else if (func_599(iParam0, 1399091007))
		{
			func_630(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_599(iParam0, 1248798204))
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
				func_316(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_602(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_631(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_632(&iVar9, 0))
				{
					func_608(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_631(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_323(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_633();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_634();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_635();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_636();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_637();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_638(499813453, 854119837, 0);
				func_639(499813453, 0);
				func_640(1);
				break;
			case 2127812557:
				func_638(499813453, -1292544588, 0);
				func_639(499813453, 0);
				func_640(2);
				break;
			case 808991383:
				func_638(499813453, -1003325394, 0);
				func_639(499813453, 0);
				func_640(4);
				break;
			case 1134518629:
				func_638(666607663, -335460405, 0);
				func_639(666607663, 0);
				func_641(1);
				break;
			case 902940106:
				func_638(666607663, 903797617, 0);
				func_639(666607663, 0);
				func_641(2);
				break;
			case -418174898:
				func_638(666607663, 669728650, 0);
				func_639(666607663, 0);
				func_641(4);
				break;
			case -648114971:
				func_638(-220219788, 1214120047, 0);
				func_639(-220219788, 0);
				func_642(1);
				break;
			case 211153747:
				func_638(-220219788, 655769340, 0);
				func_639(-220219788, 0);
				func_642(2);
				break;
			case -32876996:
				func_638(-220219788, 885316185, 0);
				func_639(-220219788, 0);
				func_642(4);
				break;
			case 1191437462:
				func_638(218622660, -1491419385, 0);
				func_639(218622660, 0);
				func_643(1);
				break;
			case 1119149048:
				func_638(218622660, 1809565830, 0);
				func_639(218622660, 0);
				func_643(2);
				break;
			case 506073827:
				func_638(390004462, -628873767, 0);
				func_639(390004462, 0);
				func_644(1);
				break;
			case -1876986168:
				func_638(390004462, -405421956, 0);
				func_639(390004462, 0);
				func_644(2);
				break;
			case 2142623221:
				func_638(390004462, -1108972386, 0);
				func_639(390004462, 0);
				func_644(4);
				break;
			case 1508215381:
				func_638(6410548, 1053716392, 0);
				func_639(6410548, 0);
				func_645(1);
				break;
			case -888935280:
				func_638(6410548, 806507056, 0);
				func_639(6410548, 0);
				func_645(2);
				break;
			case -1252474566:
				func_638(6410548, 1571925350, 0);
				func_639(6410548, 0);
				func_645(4);
				break;
			case -1465702449:
				func_638(6410548, 1330352282, 0);
				func_639(6410548, 0);
				func_645(8);
				break;
			case -21093309:
				func_647(242, func_646(-21093309), 0);
				break;
			case 204375141:
				func_647(240, func_646(204375141), 0);
				break;
			case -417963070:
				func_647(241, func_646(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_648(594, 1934060482, 1, 1);
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
					func_648(594, 1110018439, 1, 1);
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
					func_648(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_648(594, -1228016946, 1, 1);
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
					func_648(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_648(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_323(488, 0);
				break;
			case 1613651027:
				func_323(491, 0);
				break;
			case -885810591:
				func_323(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_316(func_649(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_316(func_650(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_601(1))
				{
					func_323(487, 0);
				}
				break;
			case -898386032:
				func_323(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_323(496, 0);
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
		func_651(&iVar10);
		if (!func_652(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_607(0))
		{
			return true;
		}
		if (func_598(iParam0) == -1037537535)
		{
			func_653(iParam0);
		}
		if (func_599(iParam0, -1979000645))
		{
			func_654(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_607(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_316(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_655(iVar2, 0);
		}
	}
	Var35 = { func_656(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_657(iParam0);
	if (fParam6 > 0f)
	{
		if (func_599(iParam0, -839724752))
		{
			func_658(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_659(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_317(int iParam0)
{
	if (func_599(iParam0, 1989861793))
	{
		iVar0 = func_660(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_661(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_662(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_663(iVar14, iVar1);
					if (iVar15 != iParam0 && func_579(iVar15, 0))
					{
						if (func_664(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_665(iVar1);
				if (bVar13)
				{
					func_666(iParam0);
				}
				else
				{
					func_323(306, 0);
				}
			}
		}
	}
}

void func_318()
{
	if (func_20() != -1)
	{
		return;
	}
	func_667();
	func_668();
	func_669();
	func_670();
	func_671();
	func_672();
	func_673();
}

void func_319(int iParam0)
{
	func_674(iParam0, 1, 1, -142743235, 1);
	if (func_675(iParam0))
	{
		func_676(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_678(func_677(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_679(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_680() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_681(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_681(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_682(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_682(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_682(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_682(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_682(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_682(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_682(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_682(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_682(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_683(iVar8, iVar0))
				{
					func_684(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_683(iVar8, iVar0))
		{
			func_684(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_320()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_683(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_680() == -2125499975 || func_680() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_684(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_684(&vVar2, iVar5, iVar0);
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

void func_321()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_578(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_322(int iParam0, bool bParam1)
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
			if ((func_325((*Global_1835011)[59]->f_1, 1) || func_325((*Global_1347702)[1]->f_15, 1)) || func_189((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_555(403634348, 1))
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

void func_323(int iParam0, bool bParam1)
{
	func_685(iParam0, &iVar0, &iVar1);
	if (!func_686(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_687(iVar0, iVar1);
}

void func_324(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_678(iParam0, 1);
	func_688(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_688(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_689(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_688(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_688(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_325(int iParam0, bool bParam1)
{
	switch (func_294(iParam0))
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

void func_326()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_578(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_327()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_578(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_328(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_690(iParam1, 1, 0) };
		iParam3 = func_691(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_692(iParam3);
	return func_631(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_329()
{
	return _unlock_is_unlocked(99890643);
}

void func_330(int iParam0)
{
	if (!func_693(iParam0))
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

bool func_331(int iParam0, int iParam1)
{
	if (!func_694(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_695(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_696(Global_40.f_9910[iParam1], 4);
}

void func_332(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_697(*iParam0);
	iVar1 = func_698(*iParam0);
	iVar2 = func_699(*iParam0);
	iVar3 = func_700(*iParam0);
	iVar4 = func_701(*iParam0);
	iVar5 = func_702(*iParam0);
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
	iVar6 = func_703(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_703(iVar1, iVar0);
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
	func_704(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_333(int iParam0, int iParam1, bool bParam2)
{
	if (!func_694(iParam0))
	{
		return;
	}
	if (!func_705(iParam1))
	{
		return;
	}
	if (func_706(iParam1, 1))
	{
		return;
	}
	iVar0 = func_695(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_331(iParam0, -1))
	{
		return;
	}
	else
	{
		func_707(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_195(0, 0, 1))
		{
			func_365(0, 17);
		}
	}
}

void func_334()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_578(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_335()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_578(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_336()
{
	return _unlock_is_unlocked(-121456797);
}

void func_337()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_578(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_338()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_578(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_339()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_578(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_340()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_578(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_341()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_578(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_342()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_578(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_343(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_344(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_345(int iParam0, int iParam1, bool bParam2)
{
	if (!func_579(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_598(iParam0);
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
		if (!func_708(iParam0, 1))
		{
			return false;
		}
	}
	return func_583(iParam0, 0, bParam2) >= iParam1;
}

void func_346(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_709(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_709(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_347()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_578(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_348()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_578(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_349()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_578(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_350()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_578(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_351()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_578(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_352()
{
	if (func_710() > 1)
	{
		func_711();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_323(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_323(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_323(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_323(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_323(452, 1);
		}
	}
}

bool func_353(int iParam0)
{
	return func_712(iParam0, 4, 1);
}

void func_354(int iParam0)
{
	func_713(iParam0, 4, 1);
}

void func_355(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_356(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_188(iParam0))
	{
		return;
	}
	func_227(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_193(iParam0))
	{
		case 1:
			func_95(func_616(909007663, -587839005), 1);
			iVar0 = func_270(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_483(iVar0))
			{
				case 0:
					func_95(func_616(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_616(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_616(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_616(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_616(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_616(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_616(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_616(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_616(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_616(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_616(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_270(iParam0);
			if (func_299((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_299((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_299((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_616(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_616(909007663, -2049243343), 1);
				}
			}
			if (func_299((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_484(iVar1))
				{
					case 0:
						func_95(func_616(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_616(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_616(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_616(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_616(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_616(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_616(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_616(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_616(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_616(909007663, 532323983), 1);
				}
			}
			else if (func_299((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_299((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_299((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_616(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_616(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_357()
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
	else if (func_196(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_195(0, 0, 1) || func_714()) || func_129())
	{
		return;
	}
	iVar0 = func_199();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_715(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_716(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_716(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_717(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_365(0, -1);
	}
	if (iVar2 > 0)
	{
		func_718("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_719(1, 0);
	Global_1956575->f_4 = 1;
}

void func_358(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_281(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_720(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_359(int iParam0)
{
	if (!func_188(iParam0))
	{
		return -1;
	}
	return func_721(iParam0);
}

int func_360(int iParam0, int iParam1)
{
	if (!func_722(iParam0))
	{
		return 0;
	}
	if (!func_394())
	{
		return 0;
	}
	if (!func_723(iParam0, &iVar0, &iVar1))
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

int func_361(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_724())
	{
		iVar2 = func_724();
	}
	iVar5 = func_725(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_480(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_480(iVar6) == 0)
			{
				return func_726(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_480(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_480(iVar6) == 0)
			{
				return func_726(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_726(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_727(1330954593, 0, -1);
		case 1:
			return func_727(1330954593, 0, -1);
		case 2:
			return func_727(1330954593, 0, -1) * 2;
		case 4:
			return func_727(1330954593, 0, -1);
		case 5:
			return func_727(1330954593, 0, -1);
		case 6:
			return func_727(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_727(1330954593, 0, -1) * 3;
		case 9:
			return func_727(1330954593, 0, -1) * 3;
		case 10:
			return func_727(1330954593, 0, -1) * 3;
		case 11:
			return func_727(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_363(int iParam0)
{
	if (!func_188(iParam0))
	{
		return cVar0;
	}
	switch (func_193(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_505(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_270(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_361(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_364(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_366();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_193(Global_1879514->f_1) == 1)
			{
				func_360(5, 1);
			}
			else if (func_193(Global_1879514->f_1) == 8 && (func_299((*Global_1347702)[func_270(Global_1879514->f_1)]->f_12, 1) || func_299((*Global_1347702)[func_270(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_360(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_365(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_728(&Global_0, 8);
	}
	if (!func_394() || func_20() != -1)
	{
		return;
	}
	func_728(&Global_0, 1);
}

int func_366()
{
	iVar0 = func_729(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_730(iVar0))
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

Vector3 func_367(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_731(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_395(vVar0))
	{
		vVar0 = { func_731(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_368(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_369(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_370(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_245(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_732(vParam0, iParam3);
}

void func_371()
{
	func_733();
	func_734();
	func_735();
	_0x11b0a0b282fa9b10(0);
}

void func_372(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_736(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_737(&(Param0.f_10)))
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
			func_738(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_373(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_374(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_375()
{
	return Global_1572864->f_12;
}

void func_376(bool bParam0)
{
	if (func_496(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_739();
	Var1.f_3.f_3 = iVar0;
	if ((!func_740(Global_1347343->f_2) && !func_373(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_741();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_373(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_742();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_373(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_743();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_744(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_745(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_374(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_374(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_377(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	func_746(uParam0);
	iVar0 = func_747(uParam0, bParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_748(bParam1);
		}
		iVar0 = func_749(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_750(uParam0);
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
		iVar0 = func_750(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0]->f_2 = bParam1;
	uParam0->f_3[iVar0]->f_1 = get_entity_model(bParam1);
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
	func_751(uParam0, 2);
}

void func_378(char[4] cParam0, int iParam1)
{
	func_752(&(cParam0->f_7375), iParam1);
}

int func_379(var uParam0)
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

int func_380()
{
	return func_505(func_753());
}

void func_381(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_396())
	{
		func_754(cParam0, iVar0);
		iVar0++;
	}
}

int func_382(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_383(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_384(char[4] cParam0)
{
	func_760(cParam0, iLocal_145, iLocal_146, 111986, 112041, 112228, 112321, 112543, "", 0, -1);
	func_760(cParam0, iLocal_146, iLocal_147, 112741, 112763, 112938, 113088, 113383, "MAR1_INT", 16386, -1);
	func_760(cParam0, iLocal_147, iLocal_148, 113417, 113539, 113595, 113728, 115598, "", 16384, -1);
	func_760(cParam0, iLocal_148, iLocal_149, 115635, 115698, 116030, 116414, 117315, "", 16386, -1);
	func_760(cParam0, iLocal_149, iLocal_150, 117341, 117414, 117652, 117951, 118628, "MAR1_MCS2", 147458, -1);
	func_760(cParam0, iLocal_150, iLocal_151, 118654, 118698, 118827, 118911, 119720, "MAR1_MCS3", 147458, -1);
	func_760(cParam0, iLocal_151, iLocal_152, 119757, 119801, 119879, 119993, 120273, "", 0, -1);
	func_760(cParam0, iLocal_152, iLocal_153, 120516, 120535, 120554, 120638, 120861, "", 0, -1);
	func_760(cParam0, iLocal_153, iLocal_154, 120884, 120903, 120957, 121041, 121254, "", 0, -1);
	func_760(cParam0, iLocal_154, iLocal_155, 121277, 121296, 121315, 121403, 121254, "", 0, -1);
	func_760(cParam0, iLocal_155, iLocal_156, 121575, 121594, 121622, 121749, 122755, "", 64, -1);
	func_760(cParam0, iLocal_156, iLocal_157, 122883, 122943, 123319, 123902, 125629, "MAR1_MCS4", 131138, -1);
	func_760(cParam0, iLocal_157, iLocal_158, 125740, 125779, 125917, 126052, 127068, "", 0, -1);
	func_760(cParam0, iLocal_158, iLocal_159, 127140, 127178, 127506, 127946, 128121, "MAR1_EXT", 132098, -1);
	func_760(cParam0, iLocal_159, 26, 128151, 128211, 128230, 128408, 128629, "", 0, -1);
	cParam0->f_607 = cParam0->f_607;
}

Vector3 func_385(int iParam0, int iParam1)
{
	return func_830(iParam0, iParam1);
}

void func_386(char[4] cParam0, vector3 vParam1)
{
	cParam0->f_5413 = { vParam1 };
}

bool func_387(char[4] cParam0)
{
	if (iVar961 == 0)
	{
	}
	if (iVar960 == 0)
	{
		if (!func_831(&uLocal_539, -1758.966f, 91.8824f, 159.1899f, 215.2604f, 822759307, -1693870200, &iLocal_540))
		{
			return false;
		}
		iLocal_963 = 1;
	}
	if (func_33(cParam0) == iLocal_145)
	{
		Var0 = { func_221(0, 4) };
	}
	else if (func_33(cParam0) <= iLocal_146)
	{
		Var0 = { func_221(0, 1) };
	}
	else if (func_33(cParam0) == iLocal_147)
	{
		Var0 = { func_221(15, 1) };
	}
	else if (func_33(cParam0) == iLocal_148)
	{
		Var0 = { func_221(7, 0) };
	}
	else if (func_33(cParam0) == iLocal_149)
	{
		Var0 = { func_221(11, 2) };
	}
	else if (func_33(cParam0) == iLocal_150)
	{
		Var0 = { func_221(13, 3) };
	}
	else if (func_33(cParam0) == iLocal_151)
	{
		Var0 = { func_221(1, 1) };
	}
	else if (func_33(cParam0) == iLocal_152)
	{
		Var0 = { func_221(2, 1) };
	}
	else if (func_33(cParam0) == iLocal_153)
	{
		Var0 = { func_221(3, 1) };
	}
	else if (func_33(cParam0) == iLocal_154)
	{
		Var0 = { func_221(4, 0) };
	}
	else if (func_33(cParam0) == iLocal_155)
	{
		Var0 = { func_221(5, 2) };
	}
	else if (func_33(cParam0) == iLocal_156)
	{
		Var0 = { func_221(14, 3) };
	}
	else if (func_33(cParam0) == iLocal_157)
	{
		Var0 = { func_221(6, 2) };
	}
	else if (func_33(cParam0) == iLocal_158)
	{
		Var0 = { func_221(6, 2) };
	}
	else if (func_33(cParam0) == iLocal_159)
	{
		Var0 = { func_221(6, 2) };
	}
	if (!func_832(bVar536) && iVar961 == 0)
	{
		_0x8268b098f6fca4e2(bVar536, 2);
		_0xf89d82a0582e46ed(bVar536, 2);
		set_vehicle_extra(bVar536, 2, false);
		set_vehicle_forward_speed(bVar536, 0f);
		_0xba8818212633500a(bVar536, 7, 1);
		_0x4c60c333f9cca2b6(bVar536, 1);
		_0x878e8104fa27cdae(bVar536, -1158045676);
		if (func_33(cParam0) < iLocal_150)
		{
			if (!func_833())
			{
				return false;
			}
		}
		if (_does_volume_exist(&(iLocal_544[17])) && iVar809 == 0)
		{
			_0x7c00cfc48a782dc0(&(iLocal_544[17]), bVar536, 0f, 1.5f, 0f, 0f, 0f, 0f, 2, 1);
			iLocal_812 = 1;
		}
		if (_does_volume_exist(&(iLocal_544[18])) && iVar810 == 0)
		{
			_0x7c00cfc48a782dc0(&(iLocal_544[18]), bVar536, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, 1);
			iLocal_813 = 1;
		}
		func_834();
		if (func_455(bVar537, 0))
		{
			set_ped_relationship_group_hash(bVar537, 1391706777);
		}
		if (func_33(cParam0) >= iLocal_148)
		{
			func_835(1);
		}
		func_836(80);
		_0x9587913b9e772d29(bVar536, 0);
		_0xba8818212633500a(bVar536, 12, 1);
		iVar4 = 1;
		iLocal_964 = 1;
	}
	else if (iVar961 == 0)
	{
		iLocal_963 = 0;
		iVar4 = 0;
	}
	if (iVar961 == 1)
	{
		if (func_33(cParam0) > iLocal_146 || (func_33(cParam0) == iLocal_146 && func_120(cParam0, 4)))
		{
			func_837(bVar536, Var0, 2, 1073741824);
		}
	}
	if (iVar4 || iVar961)
	{
		return true;
	}
	return false;
}

void func_388(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	func_838(cParam0, Global_35, 0, 0, 0);
	func_838(cParam0, &(iLocal_162[0]), 0, 0, 0);
	func_838(cParam0, &(iLocal_162[1]), "JackMarston_Teen", 0, 0);
	func_838(cParam0, &(uLocal_170[0]), 0, 0, 0);
	func_839(cParam0, bVar536, 0, 0, 0, 0, 0);
	if (iVar0 <= iLocal_146)
	{
		func_834();
		func_838(cParam0, bVar537, "horse_01", 0, 0);
	}
	if (iVar0 >= iLocal_147 && iVar0 <= iLocal_151)
	{
		func_838(cParam0, &(iLocal_165[0]), "U_M_M_STRGENSTOREOWNER_01", 0, 0);
		func_838(cParam0, &(iLocal_165[1]), "A_M_M_STRTOWNFOLK_01", 0, 0);
		func_838(cParam0, &(iLocal_165[2]), "A_M_M_STRTOWNFOLK_01^1", 0, 0);
		func_839(cParam0, &(iLocal_501[6]), 0, 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[7]), 0, 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[8]), 0, 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[0]), "p_pen01x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[1]), "p_amb_clipboard_01", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[2]), "p_cs_supplies01x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[3]), 0, 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[4]), "p_cs_supplies03x", 0, 0, 0, 1);
		func_839(cParam0, &(iLocal_501[9]), "p_cs_flourbag01x", 0, 0, 0, 1);
		func_839(cParam0, &(iLocal_501[10]), "p_cs_flourBag01x^1", 0, 0, 0, 1);
		func_840(cParam0, &(iLocal_501[5]), "p_doorstrawberry01x");
		func_840(cParam0, &(iLocal_501[11]), "p_door_val_genstore");
		func_839(cParam0, &(iLocal_501[11]), "p_door_val_genstore", 0, 0, 0, 0);
	}
	if (iVar0 == iLocal_155 || iVar0 == iLocal_156)
	{
		func_838(cParam0, &(uLocal_389[0]), "G_M_M_UNIRANCHERS_01^1", 0, 0);
		func_838(cParam0, &(uLocal_389[1]), "G_M_M_UNIRANCHERS_01", 0, 0);
		func_834();
		func_838(cParam0, bVar537, "horse_01", 0, 0);
		func_839(cParam0, &(iLocal_501[1]), "p_amb_clipboard_01", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[2]), "p_cs_supplies01x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[3]), "p_cs_supplies02x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[4]), "p_cs_supplies03x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[12]), "p_toolbox01x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[13]), "p_treestump02x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[14]), "P_AXE01X", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[15]), "P_SHARPENINGSTONE01X", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[16]), "p_bottleJD01x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[17]), "p_apple01x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[0]), "P_PACKAGE05X", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[1]), "P_PACKAGE05X^1", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[2]), "P_PACKAGE10", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[3]), "P_BOTTLEJD01X", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[4]), "P_BOTTLEJD01X^1", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[5]), "P_ROLLEDOATS01X", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[6]), "P_STARCHLAUNDRY01X", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[7]), "P_SYRUP01X", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[10]), "P_CRATE27X", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[11]), "P_CRATE27X^1", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[12]), "P_CRATE27X^2", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[8]), "P_APPLE01X", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[9]), "P_APPLE01X^1", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[13]), "P_SACK05X", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_485[14]), "P_SACK05X^1", 0, 0, 0, 0);
	}
	if (iVar0 == iLocal_157 || iVar0 == iLocal_158)
	{
		func_834();
		func_838(cParam0, bVar537, "horse_01", 0, 0);
		func_838(cParam0, &(uLocal_170[2]), "AngusGeddes", 0, 0);
		func_839(cParam0, &(iLocal_501[2]), "p_cs_supplies01x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[3]), "p_cs_supplies02x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[4]), "p_cs_supplies03x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[16]), "p_bottleJD01x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[18]), "p_cigarette_cs01x", 0, 0, 0, 0);
		func_839(cParam0, &(iLocal_501[19]), "p_cigarette_cs01x^1", 0, 0, 0, 0);
		func_840(cParam0, &(iLocal_501[20]), "p_door03x");
	}
}

void func_389(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_390(bool bParam0, bool bParam1)
{
	return (bParam0 && bParam1) != 0;
}

void func_391(var uParam0)
{
	if (!func_841(uParam0, 4))
	{
		if (func_842(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_843(uParam0) };
		if (!func_842(uParam0->f_860, 524288))
		{
			func_844(&(uParam0->f_872));
		}
		func_845(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_846(uParam0, 0f, 0f, 0f);
		func_847(uParam0);
		func_848(uParam0);
		func_849(uParam0, 0f, 0f, 0f, 0, 0);
		func_850(uParam0);
		func_752(uParam0, 4);
		func_851(uParam0, 0);
		func_852(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_392(int iParam0)
{
	if (func_853(iParam0))
	{
		return func_854(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_393(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_508(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_855(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_856(0, 0);
		if (func_693(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_857(1, 0);
		}
	}
	else
	{
		func_857(1, 0);
	}
	func_207(0);
	func_509(0, vParam0, uParam3);
	return 1;
}

bool func_394()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_395(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_396()
{
	return 26;
}

void func_397(int iParam0)
{
	if (!func_187(iParam0))
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

void func_398(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_858((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_399(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_859((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_400(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_860((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_401(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_861((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_402(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_862((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_863((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_405(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_864((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_406(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_865((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_866((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_408(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_867((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_409(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_868((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_410(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_869(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_870(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_411(char[4] cParam0)
{
	func_410(cParam0, -969349845, 6200);
	func_410(cParam0, -1473388640, 56);
	func_410(cParam0, -1809617345, 56);
	func_410(cParam0, 663716280, 56);
	func_410(cParam0, -2104766853, 56);
	func_410(cParam0, 1521462563, 67108863);
	func_410(cParam0, -589352772, 67108863);
	func_410(cParam0, 1376394832, 67108863);
	func_410(cParam0, 133961016, 15360);
	func_410(cParam0, 1540392720, 15360);
	func_410(cParam0, -422220273, 15360);
	func_410(cParam0, -989609930, 15360);
	func_410(cParam0, -1971689092, 15360);
	func_410(cParam0, -1646753329, 15360);
	func_410(cParam0, -967333571, 15360);
}

void func_412(char[4] cParam0)
{
	func_417(cParam0, "script@story@MAR1@IG@IG_3_StoreActivity@IG_3_Base_Owner", uLocal_698[0], 24, 0, 0, 0, 1);
	func_417(cParam0, "script@story@MAR1@IG@IG_3_StoreActivity@IG_3_CarryOut_Folk01", uLocal_698[1], 24, 0, 0, 0, 1);
	func_417(cParam0, "script@story@MAR1@IG@IG_3_StoreActivity@IG_3_CarryOut_Folk02", uLocal_698[2], 24, 0, 0, 0, 1);
}

void func_413(char[4] cParam0)
{
	func_417(cParam0, "script@story@MAR1@IG@IG_4_LoadWagon@IG_4_Base", uLocal_702[0], 32, 1, 0, 0, 1);
	func_417(cParam0, "script@story@MAR1@IG@IG_4_LoadWagon@IG_4_LoadWagon", uLocal_702[1], 32, 0, 0, 0, 1);
	func_417(cParam0, "script@story@MAR1@IG@IG_4_LoadWagon@IG_4_PartingWords", uLocal_702[3], 32, 0, 0, 0, 1);
	func_417(cParam0, "script@story@MAR1@IG@IG_4_LoadWagon@IG_4_WagonLoop", uLocal_702[2], 32, 1, 0, 0, 1);
}

void func_414(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_871(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_872(&(cParam0->f_819));
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

void func_415(char[4] cParam0)
{
	sLocal_726[0] = "mar1_outlaw_driveby01";
	sLocal_726[1] = "mar1_outlaw_driveby02";
	func_414(cParam0, &(sLocal_726[0]), 1024, 2, -1);
	func_414(cParam0, &(sLocal_726[1]), 1024, 2, -1);
}

char* func_416(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "script@titles@title_ch8_epilogue1";
			break;
		case 1:
			sVar0 = "script@story@MAR1@blendout";
			break;
		case 2:
			sVar0 = "script@story@MAR1@IG@IG_1_HeroInABook@IG_1_HeroInABook";
			break;
		case 3:
			sVar0 = "script@story@MAR1@IG@IG_3_StoreActivity@IG_3_Base_Owner";
			break;
		case 4:
			sVar0 = "script@story@MAR1@IG@IG_3_StoreActivity@IG_3_CarryOut_Folk01";
			break;
		case 5:
			sVar0 = "script@story@MAR1@IG@IG_3_StoreActivity@IG_3_CarryOut_Folk02";
			break;
		case 6:
			sVar0 = "script@story@MAR1@IG@IG_4_LoadWagon@IG_4_Base";
			break;
		case 7:
			sVar0 = "script@story@MAR1@IG@IG_4_LoadWagon@IG_4_LoadWagon";
			break;
		case 8:
			sVar0 = "script@story@MAR1@IG@IG_4_LoadWagon@IG_4_WagonLoop";
			break;
		case 9:
			sVar0 = "script@story@MAR1@IG@IG_4_LoadWagon@IG_4_PartingWords";
			break;
		case 10:
			sVar0 = "script@story@MAR1@IG@IG_5_DumberThanTurd@IG_5_PassOnLeft";
			break;
		case 11:
			sVar0 = "script@story@MAR1@IG@IG_5_DumberThanTurd@IG_5_PassOnRight";
			break;
		case 12:
			sVar0 = "script@story@MAR1@IG@IG12_WAKE@IG12_WAKE";
			break;
		case 13:
			sVar0 = "script@story@MAR1@IG@IG_13_PARK@IG_13_Park";
			break;
		case 15:
			sVar0 = "script@story@MAR1@leadin@mcs_4@Leadin";
			break;
		case 16:
			sVar0 = "script@story@MAR1@leadout@mcs_4@MAR1_MCS4_LEADOUT";
			break;
		case 17:
			sVar0 = "script@story@MAR1@leadout@mcs_4@MAR1_MCS4_LEADOUT_PLAYER";
			break;
		case 21:
			sVar0 = "script@story@MAR1@leadin@ext@Leadin_P1A1";
			break;
		case 19:
			sVar0 = "script@story@MAR1@IG@IG_ChapterTitleOutro@IG_ChapterTitleOutro";
			break;
		case 18:
			sVar0 = "script@ambient@town@wagon@sack@unload@left01";
			break;
	}
	return sVar0;
}

void func_417(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_873(iParam3, func_33(cParam0)) && !func_873(iParam3, func_35(cParam0)))
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
	iVar0 = func_874(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_875(&(cParam0->f_1126));
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
		func_876(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_418(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_873(iParam3, func_33(cParam0)) && !func_873(iParam3, func_35(cParam0)))
	{
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return;
	}
	if (_is_anim_scene_finished(iParam1, false))
	{
		return;
	}
	iVar0 = func_877(&(cParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!is_string_null_or_empty(&(cParam0->f_1126[iVar0]->f_4[iVar1])) && are_strings_equal(&(cParam0->f_1126[iVar0]->f_4[iVar1]), sParam2))
		{
			return;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (is_string_null_or_empty(&(cParam0->f_1126[iVar0]->f_4[iVar1])))
		{
			cParam0->f_1126[iVar0]->f_4[iVar1] = sParam2;
			cParam0->f_1126[iVar0]->f_4[iVar1]->f_2 = (cParam0->f_1126[iVar0]->f_4[iVar1]->f_2 || iParam3);
			return;
		}
		iVar1++;
	}
}

void func_419(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_878(&(cParam0->f_5147), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_879(&(cParam0->f_5147));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5147[iVar0] = iParam1;
	cParam0->f_5147[iVar0]->f_3 = (cParam0->f_5147[iVar0]->f_3 || iParam2);
}

void func_420(int iParam0, bool bParam1)
{
	func_880(iParam0, bParam1);
}

void func_421(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_881((*uParam0)[iVar0]))
		{
			if (func_873((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_882((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_883((*uParam1)[iVar0]))
		{
			if (func_873((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_884((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_885((*uParam2)[iVar0]))
		{
			if (func_873((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_886((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_887((*uParam3)[iVar0]))
		{
			if (func_873((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_888((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_873(uParam4->f_1, iParam12))
	{
		func_889(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_890((*uParam5)[iVar0]))
		{
			if (func_873((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_891((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_890((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_892((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_873((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_893((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_894((*uParam6)[iVar0]))
		{
			if (func_873((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_895((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_896((*uParam7)[iVar0]))
		{
			if (func_873((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_897((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_898((*uParam8)[iVar0]))
		{
			if (func_873((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_899((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_900((*uParam9)[iVar0]))
		{
			if (func_873((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_901((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_902((*uParam10)[iVar0]))
		{
			if (func_873((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_903((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_904((*uParam11)[iVar0]))
		{
			if (func_873((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_905((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_422(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_906(uParam0, iParam1, sParam2))
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

struct<2> func_423()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_424(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_425(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_426(char[4] cParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_907(&(cParam0->f_7375), bParam1, sParam2, iParam3, iParam4, bParam5);
	func_377(&(cParam0->f_10792), bParam1, sParam2, bParam6);
}

bool func_427(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_908(cParam0->f_607)}, 3);
			if (func_909(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_910(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_911(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_428(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_890((*uParam0)[iVar0]))
		{
			if (func_873((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_912((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_913((*uParam0)[iVar0]))
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

int func_429(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_430(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_914(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_915(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_431(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_120(cParam0, 16777216))
		{
			if (!func_916(cParam0))
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
				bVar12 = func_917(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(bVar12))
					{
						if (bVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_918(bVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_919(bVar12))
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
		if (func_920(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		bVar13 = func_917(&iVar29, &Var18);
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
		func_921(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_919(bVar13) || func_922(Global_35, bVar13, 1, 1) > 200f) && !func_395(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(bVar13, false);
						func_923(bVar13, vVar14, fParam5, 2, 1073741824);
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

void func_432(char[4] cParam0)
{
	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_924(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_925(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_433(char[4] cParam0)
{
	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_926(cParam0);
			if (func_927(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_928(cParam0, 2097152);
				func_263(cParam0, 16384);
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
			func_926(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_929(cParam0, Var0))
			{
				if (func_429(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_429(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(cParam0, 128);
		}
	}
}

void func_434(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_435(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_930(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_430(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_431(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_908(cParam0->f_607)}, 3);
		if (func_931(&(cParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_932(&(cParam0->f_13115)) < 30f)
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

bool func_436(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_932(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_933()) && func_932(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(cParam0->f_607)));
			func_263(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_934(0, 0);
		func_263(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_437(char[4] cParam0)
{
	func_935(7, 0);
	func_103(cParam0, 1);
	if (func_33(cParam0) == iLocal_145)
	{
		func_936();
	}
	func_937(cParam0);
	if (!func_938(cParam0))
	{
		return false;
	}
	if (func_33(cParam0) == iLocal_148 && !func_939(func_385(7, 10), 524288, &uLocal_807))
	{
		return false;
	}
	if (func_33(cParam0) == iLocal_149 && !func_939(func_385(11, 6), 1048576, &uLocal_808))
	{
		return false;
	}
	func_940();
	if (!func_387(cParam0))
	{
		return false;
	}
	func_941(cParam0);
	func_943(cParam0, 151152);
	func_945(cParam0, 151294);
	func_946(cParam0);
	func_947(cParam0);
	func_948();
	func_181(62, 0);
	func_181(61, 0);
	func_181(65, 0);
	func_181(63, 0);
	func_181(60, 0);
	func_949(cParam0);
	if (func_950(cParam0))
	{
		func_951(cParam0);
		if (func_33(cParam0) >= iLocal_151)
		{
			if (!func_952(cParam0, 0, 0, 1, func_33(cParam0) >= iLocal_157, 0))
			{
				return false;
			}
		}
		iVar0 = func_953(0f);
		if (_0xa0bc8faed8cfeb3c(Global_35))
		{
			_set_ped_body_component(Global_35, iVar0);
			_update_ped_variation(Global_35, true, true, true, true, false);
			func_954(Global_35, 1822769204, 1);
		}
		uLocal_482 = func_955(&(iLocal_544[19]), 0, 0, 0);
		uLocal_483 = func_955(&(iLocal_544[21]), 0, 0, 0);
		uLocal_484 = func_955(&(iLocal_544[22]), 0, 0, 0);
		_display_hud_component(iVar800);
		func_956(&uLocal_744);
		func_388(cParam0);
		func_957(4);
		func_958(65536);
		func_959();
		if (func_33(cParam0) <= iLocal_152)
		{
			func_181(61, 0);
			func_182(1);
		}
		if (func_33(cParam0) <= iLocal_152)
		{
			func_960();
		}
		func_961(883);
		func_961(884);
		return true;
	}
	return false;
}

void func_438(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_439(char[4] cParam0)
{
	func_962(cParam0);
	func_963(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_927(cParam0);
		}
	}
	func_964(cParam0);
	func_965(cParam0);
	func_966(cParam0);
	func_967(cParam0);
	func_968(cParam0);
	func_969(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_970(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_277(cParam0) == 0)
	{
		func_433(cParam0);
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
			if (func_971(cParam0, iVar0, 0))
			{
				if (func_972(cParam0, func_33(cParam0)) != -1 && _0x62de46f061caa468() < func_972(cParam0, func_33(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_972(cParam0, func_33(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_378(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_973(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_974(cParam0);
					func_975(cParam0, iVar0, 1);
				}
				else
				{
					func_975(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_930(cParam0))
			{
				if (func_976(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_928(cParam0, 4);
					}
					func_975(cParam0, iVar0, 2);
				}
			}
			else if (func_977(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_928(cParam0, 4);
				}
				func_975(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_971(cParam0, iVar0, 2))
			{
				if (!func_978(cParam0))
				{
					func_975(cParam0, iVar0, 4);
					if (func_979(cParam0, iVar0, iVar1))
					{
						func_975(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_980(cParam0);
					func_975(cParam0, iVar0, 3);
					if (func_981(cParam0, iVar0))
					{
						func_975(cParam0, iVar0, 4);
						if (func_979(cParam0, iVar0, iVar1))
						{
							func_975(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_982(cParam0))
			{
				func_981(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_981(cParam0, iVar0))
			{
				func_975(cParam0, iVar0, 4);
				if (func_979(cParam0, iVar0, iVar1))
				{
					func_975(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_979(cParam0, iVar0, iVar1))
			{
				func_975(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_983(cParam0);
				func_984(cParam0, iVar0);
				func_985(cParam0);
				func_986(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_987(cParam0, iVar1))
					{
						func_988(cParam0, iVar1);
					}
				}
			}
			if (func_971(cParam0, iVar0, 5))
			{
				if (func_971(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_989(cParam0, func_33(cParam0));
					}
					func_990(cParam0, iVar1);
					func_963(cParam0);
					return true;
				}
				else
				{
					func_975(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_991(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_992(get_player_index(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_993("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_994(cParam0))
					{
						func_975(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_928(cParam0, 268435456);
					}
				}
				if (func_120(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_263(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_983(cParam0);
				func_984(cParam0, iVar0);
				func_985(cParam0);
				func_986(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_987(cParam0, func_35(cParam0)))
					{
						func_988(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_992(get_player_index(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_971(cParam0, iVar0, 5))
				{
					if (func_995(cParam0))
					{
						func_975(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_995(cParam0);
					func_975(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_971(cParam0, iVar0, 5);
				func_996(cParam0);
			}
			break;
		case 7:
			if (func_971(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_989(cParam0, func_33(cParam0));
				}
				func_990(cParam0, iVar1);
				func_963(cParam0);
				return true;
			}
			break;
		default:
			func_975(cParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_440(int iParam0, var uParam1)
{
	Global_40.f_9.f_21.f_1[iParam0] = uParam1;
}

bool func_441()
{
	return func_997() != -1;
}

bool func_442()
{
	return func_998() != -1;
}

bool func_443()
{
	if (func_753() < 651 || func_753() > 750)
	{
		return false;
	}
	return true;
}

bool func_444()
{
	return func_999() != -1;
}

void func_445(int iParam0, int iParam1)
{
	if (!func_466(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (Global_20710.f_2246[iParam0] || iParam1);
	}
}

void func_446(var uParam0)
{
	if (is_valid_interior(*uParam0))
	{
		unpin_interior(*uParam0);
	}
}

void func_447()
{
	if (_does_volume_exist(&(iLocal_544[18])))
	{
		_0x74c2b3dc0b294102(&(iLocal_544[18]));
	}
}

void func_448(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam0);
	_0x74c2b3dc0b294102(iParam0);
}

void func_449(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_450(int iParam0, int iParam1, bool bParam2)
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
				func_1000(iParam0);
				func_1001(iParam0, 0);
				break;
		}
		func_1002(iParam0, iParam1);
		if (func_1003(iParam1, &iVar0))
		{
			if (does_entity_exist(Global_1360165[iParam0]))
			{
				if (func_1004(Global_1360165[iParam0], iVar0))
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
				func_1000(iParam0);
				func_1001(iParam0, 1);
				break;
		}
		func_1005(iParam0, iParam1);
		func_1006(iParam0, Global_1360165[iParam0], 1);
	}
}

int func_451(int iParam0)
{
	if (iParam0 == 0)
	{
		return 13;
	}
	else if (iParam0 == 1)
	{
		return 14;
	}
	return -1;
}

void func_452(char[4] cParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(bParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(bParam1) && func_1007(get_ped_index_from_entity_index(bParam1)));
	if (bVar0)
	{
		iVar1 = func_1008(get_ped_index_from_entity_index(bParam1));
	}
	if (is_entity_a_ped(bParam1))
	{
		iVar2 = get_ped_index_from_entity_index(bParam1);
		if (bVar0)
		{
			func_521(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_1009(cParam0, bParam1) && does_blip_exist(get_blip_from_entity(bParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(bParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(bParam1), 231194138);
		}
		else
		{
			func_1010(bParam1);
		}
	}
	if (func_1009(cParam0, bParam1))
	{
		func_1011(cParam0, bParam1, 1024);
		if (bParam2)
		{
			func_1012(cParam0, bParam1, 128);
		}
		else
		{
			func_1011(cParam0, bParam1, 128);
		}
		if (func_1013(cParam0, bParam1, &iVar3))
		{
			func_1014(cParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1015(iVar1);
	}
}

int func_453(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 710;
		case 2:
			return 712;
		default:
			return -1;
	}
	return -1;
}

void func_454(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_474(iParam0))
	{
		return;
	}
	if (!func_1016(iParam0, 1))
	{
		return;
	}
	if (!func_1016(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_1017(iParam0)) && func_1018(iParam0))
	{
		return;
	}
	func_1019(iParam0, 1);
	func_1020(iParam0);
	if (func_476(func_475(iParam0)))
	{
		iVar0 = func_477(iParam0);
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
		func_1019(iParam0, 16);
	}
	if (func_1016(iParam0, 128) && !bParam3)
	{
		func_1021(iParam0, 0);
	}
}

bool func_455(bool bParam0, int iParam1)
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
	if (func_390(iVar0, 1))
	{
		if (is_ped_fatally_injured(bParam0))
		{
			return false;
		}
	}
	if (func_390(iVar0, 2))
	{
		if (_is_ped_hogtied(bParam0))
		{
			return false;
		}
	}
	if (func_390(iVar0, 8))
	{
		if (get_ped_config_flag(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_390(iVar0, 16))
	{
		if (!is_ped_on_mount(bParam0) && !is_ped_in_any_vehicle(bParam0, false))
		{
			return false;
		}
	}
	if (func_390(iVar0, 32))
	{
		if (is_entity_in_water(bParam0))
		{
			return false;
		}
	}
	if (func_390(iVar0, 64))
	{
		if (_0xb655db7582aec805(bParam0))
		{
			return false;
		}
	}
	if (func_390(iVar0, 128))
	{
		if (is_ped_ragdoll(bParam0))
		{
			return false;
		}
	}
	if (func_390(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(bParam0))
		{
			return false;
		}
	}
	return true;
}

void func_456(char[4] cParam0, bool bParam1)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_1013(cParam0, bParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(bParam1) && func_1022(cParam0, get_object_index_from_entity_index(bParam1)))
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

void func_457(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_458(int* iParam0)
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

void func_459(int iParam0, int iParam1)
{
	if (!is_itemset_valid(iParam1))
	{
		return;
	}
	if (does_entity_exist(iParam0))
	{
		if (is_in_itemset(iParam0, iParam1))
		{
			remove_from_itemset(iParam0, iParam1);
		}
	}
}

void func_460(int iParam0, bool bParam1)
{
	func_1023(iParam0, bParam1);
}

void func_461(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_462(int* iParam0)
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

void func_463(int iParam0, bool bParam1, float fParam2)
{
	func_1024(iParam0, bParam1, fParam2);
}

float func_464(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_465(int iParam0, float fParam1, int iParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_601(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_1025(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_1026(iParam0), iVar0);
	func_1028(func_1027(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_1029(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_323(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_323(func_1030(iParam0), 1);
	}
	sVar1 = func_1031(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

bool func_466(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_467(int iParam0, int iParam1)
{
	if (!func_466(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_468(int iParam0, int iParam1)
{
	if (!func_466(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_469(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_470(int iParam0, bool bParam1)
{
	if (!func_1032(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1033(iParam0, 512)) || (!bParam1 && !func_1033(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_1034(iParam0, 512);
	}
	else
	{
		func_1035(iParam0, 512);
	}
	if (func_1036(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

Vector3 func_471(int iParam0)
{
	if (!func_466(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_472(int iParam0, char* sParam1)
{
	if (!is_string_null_or_empty(sParam1))
	{
		if (is_valid_interior(iParam0) && !is_interior_entity_set_active(iParam0, sParam1))
		{
			activate_interior_entity_set(iParam0, sParam1, 1);
		}
	}
}

void func_473(int iParam0, char* sParam1)
{
	if (!is_string_null_or_empty(sParam1))
	{
		if (is_valid_interior(iParam0) && is_interior_entity_set_active(iParam0, sParam1))
		{
			deactivate_interior_entity_set(iParam0, sParam1, true);
		}
	}
}

bool func_474(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_475(int iParam0)
{
	if (!func_474(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_476(int iParam0)
{
	return iParam0 != 0;
}

int func_477(int iParam0)
{
	if (!func_474(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_478(int iParam0)
{
	return func_1037(iParam0, 2);
}

int func_479(int iParam0)
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

int func_480(int iParam0)
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

int func_481(int iParam0)
{
	return iParam0 & 31;
}

bool func_482()
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

int func_483(int iParam0)
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

int func_484(int iParam0)
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

void func_485(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_486()
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

int func_487(int iParam0)
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

void func_488(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_489(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1038(iParam0);
	}
	else
	{
		func_1039(iParam0, iParam1);
	}
	func_1040();
}

bool func_490(int iParam0)
{
	iVar0 = func_1041(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_491(int iParam0)
{
	if (!func_188(iParam0))
	{
		return false;
	}
	switch (func_193(iParam0))
	{
		case 1:
			switch (func_270(iParam0))
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
			switch (func_270(iParam0))
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

void func_492(int iParam0)
{
	iVar2 = func_1042(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_603(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1044(func_1043(iParam0), 6);
}

void func_493(int iParam0)
{
	iVar2 = func_1042(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_603(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1045(func_1043(iParam0), 6);
}

int func_494(int iParam0)
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

int func_495(int iParam0)
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
	func_1046(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_496(int iParam0)
{
	return iParam0 != 0;
}

bool func_497(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_498(int iParam0, var uParam1)
{
	if (!func_497(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1047(iParam0, *uParam1, 0);
	func_1048(uParam1);
	Global_1935183->f_24 = 1;
}

void func_499(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_500(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_552() - fParam1);
	func_1049(uParam0, 1);
	func_1050(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_501(var uParam0)
{
	return func_217(*uParam0, 2);
}

int func_502()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_503(bool bParam0)
{
	if (func_1051())
	{
		Global_1357509 = 1;
	}
	if (func_1052(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_504(int iParam0, int iParam1)
{
	Var0 = { func_830(iParam0, iParam1) };
	Var0.f_3 = func_1053(iParam0, iParam1);
	return Var0;
}

int func_505(int iParam0)
{
	if (func_193(iParam0) == 1)
	{
		return func_270(iParam0);
	}
	return -1;
}

int func_506(int iParam0)
{
	if (func_193(iParam0) == 8)
	{
		return func_270(iParam0);
	}
	return -1;
}

char[] func_507(int iParam0)
{
	if (!func_271(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_508(int iParam0, bool bParam1)
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
		func_1054(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_283();
	}
}

void func_509(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_370(vParam1, 1);
}

bool func_510(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_511(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_512(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_513(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_514(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_515(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_516()
{
	return Global_1109400->f_245;
}

bool func_517(var uParam0, int iParam1)
{
	return func_390(uParam0->f_64, iParam1);
}

bool func_518(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_519(int iParam0)
{
	return func_712(iParam0, 16, 1);
}

void func_520(bool bParam0)
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

void func_521(int iParam0)
{
	func_1055(iParam0, 8, 0);
}

void func_522(int iParam0, bool bParam1)
{
	if (!func_1056(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1057(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1055(iParam0, 1, 0);
		}
	}
	func_1055(iParam0, 16, bParam1);
}

void func_523(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_518(iParam0))
	{
		return;
	}
	if (func_519(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1058(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_522(iParam0, 0);
	func_1055(iParam0, 4, 0);
	func_521(iParam0);
	func_1059(iParam0);
	func_1060(iParam0, 37, 1);
	bVar0 = func_455(Global_1360165[iParam0], 0);
	iVar1 = func_1061(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1062(iParam0, 64, 1))
	{
		func_1060(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1060(iParam0, 33, 1);
		func_1060(iParam0, 34, 1);
		func_1063(iParam0, 1056964608, -1, 1061158912);
		func_1064(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1058(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1058(iParam0, 35, 1);
			if (bParam8)
			{
				func_1058(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1065(iParam0, 0);
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
		func_1060(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_1058(iParam0, 33, 1);
		func_1064(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_461(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_1058(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1066(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1062(iParam0, 45, 1))
	{
		func_1060(iParam0, 45, 1);
	}
	func_1067(iParam0, 16, 1);
	func_1060(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_455(func_1068(iParam0), 0))
		{
			func_1069(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_524(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_260(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_531(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_531(iParam0);
	}
}

bool func_525(int iParam0)
{
	iParam0 = func_264(iParam0);
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

void func_526(int iParam0)
{
	iParam0 = func_264(iParam0);
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

void func_527(int iParam0)
{
	iParam0 = func_264(iParam0);
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

bool func_528(int iParam0)
{
	if (!func_1070(iParam0))
	{
		return false;
	}
	if (!func_329())
	{
		return true;
	}
	return false;
}

void func_529(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_532(iParam0))
	{
		return;
	}
	bVar0 = func_213(iParam0);
	func_1071(iParam0);
	if (!_0x88ad6cc10d8d35b2(bVar0))
	{
		set_entity_as_mission_entity(bVar0, true, true);
	}
	iVar1 = get_entity_model(bVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_528(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&bVar0);
	func_1072(iParam0, 0);
	func_531(iParam0);
}

bool func_530(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_259(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_531(int iParam0)
{
	iParam0 = func_264(iParam0);
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

bool func_532(int iParam0)
{
	iParam0 = func_264(iParam0);
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

void func_533(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	bVar0 = func_213(iParam0);
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
	if (func_1073(iParam0, 64))
	{
		func_526(iParam0);
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
	bVar3 = func_601(42);
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
				func_1074(&((*Global_1900383)[iParam0]->f_27));
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
		func_526(iParam0);
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
		if (func_1075(1) < 1)
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
		func_1076(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1073(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(bVar0);
	bVar10 = false;
	iVar11 = func_1077(iParam0);
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
	fVar15 = func_1078(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1079(iParam0))
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
		func_1080((*Global_1900383)[iParam0]->f_26);
		func_1081((*Global_1900383)[iParam0]->f_26);
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
	if (func_919(bVar0) && !bVar9)
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
	iVar21 = func_1075(iParam0);
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

int func_534(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_535(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_536(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_537(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_538(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_539(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_532(iParam0))
	{
		return false;
	}
	iVar0 = func_213(iParam0);
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

void func_540(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_532(iParam0))
	{
		return;
	}
	iVar0 = func_213(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_541(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_709(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_542(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1082())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_709(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1083(iVar0);
			func_1084(iVar0, 0, 0);
		}
		func_709(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_543(int iParam0)
{
	if (!func_245(iParam0))
	{
		return false;
	}
	return func_249(iParam0, 67108864);
}

void func_544(int iParam0)
{
	StringCopy(&cVar0, func_1085(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1086(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_545(int iParam0)
{
	StringCopy(&cVar0, func_1085(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1086(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_546(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_547(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_548(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_549(int iParam0)
{
	if (!func_513(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_550(int iParam0)
{
	if (func_513(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_551(int iParam0)
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

float func_552()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_553(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1087(iParam0) == 1 && bParam7)
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

bool func_554(int iParam0)
{
	if (!func_1056(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_555(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1088(iParam0);
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

int func_556(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_569(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_557(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_558(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_559()
{
	return Global_40.f_11095.f_35;
}

void func_560(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1089(iParam0, 0);
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
		func_561(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_561(int iParam0)
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
			func_1089(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1090(1);
	}
}

bool func_562(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_563()
{
	iVar0 = func_1091((*Global_1347702)[9]->f_15);
	iVar1 = func_1091((*Global_1835011)[69]->f_1);
	if (func_1092(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_564(int iParam0)
{
	if (!func_187(iParam0))
	{
		return false;
	}
	return func_325((*Global_1835011)[iParam0]->f_1, 1);
}

int func_565(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1093(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1094(iVar6);
	}
	return iVar5;
}

int func_566(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1095(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_567(int iParam0, bool bParam1)
{
	func_1096(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_568(int iParam0)
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

void func_569(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_567(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_570(2, *uParam0);
		}
		else
		{
			func_571(2, *uParam0);
		}
	}
	func_1097(uParam0);
}

void func_570(int iParam0, int iParam1)
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

void func_571(int iParam0, int iParam1)
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

void func_572(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1098(iParam0, iParam1, bParam2);
}

int func_573(int iParam0)
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

int func_574(int iParam0)
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

void func_575(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1099();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1100(iParam0);
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
	if (func_601(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1101())
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
	Global_40.f_11095.f_35 = func_307(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1099();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1102(iVar1);
		func_1104(func_1103(), 0, 4000);
		func_1105(Global_40.f_11095.f_35);
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
		func_1106(0);
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
				if (iParam0 > func_574(14))
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
					sParam4 = func_1107(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_709(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_709(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_574(4))
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
					sParam4 = func_1107(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_709(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_709(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_360(10, 1);
	}
}

void func_576(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_577(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_578(int iParam0)
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

bool func_579(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_580(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1108(iParam0) && func_1109(iParam0))
		{
			func_1110(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_581(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1111(iParam0, iParam1);
	Var0 = { func_690(iParam0, 0, 1) };
	iVar5 = func_1112(iParam0, &Var0, 0, 0);
	iVar6 = func_1113(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_599(iParam0, -2051813666))
		{
			func_323(583, 1);
		}
		else
		{
			func_323(582, 0);
		}
	}
	if (func_1114(iParam0, &Var0, *iParam1, 0, 0))
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

void func_582(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_660(iParam0, -949239683))
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

int func_583(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_598(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1115(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1116(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1042(bParam2), iParam0, 0);
	return iVar2;
}

bool func_584(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_585(iParam0) != 0;
}

int func_585(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1117())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1118(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_586(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_587(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1117())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_586(iVar0))
		{
			if (func_345(func_1118(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_588(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1119(48);
	func_365(0, -1);
}

bool func_589(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_325((*Global_1347702)[iParam0]->f_15, 1);
}

int func_590(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_591(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_592(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_325((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_593(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_271(iParam0))
	{
		return false;
	}
	return func_189((*Global_1347702)[iParam0]->f_15);
}

int func_594()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_345(func_1120(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_595(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_394() && (func_593(38) || func_589(38)))
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
			if (func_394() && (func_593(39) || func_589(39)))
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
			iVar9 = func_1121(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_394() && (func_593(41) || func_589(41)))
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
			if (func_394() && (func_593(49) || func_589(49)))
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
			iVar9 = func_1121(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1122(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1123(iParam0, iVar13, iVar14))
	{
	}
	if (func_1124(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1125(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1126(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1127(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1128(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_596(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_597(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_394() && (func_593(38) || func_589(38)))
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
			if (func_394() && (func_593(39) || func_589(39)))
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
			if (func_394() && (func_593(49) || func_589(49)))
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
		if (func_394() && (func_593(38) || func_589(38)))
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
			func_1129(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1129(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_716(_create_var_string(2, sVar0), _create_var_string(2, func_1130(func_591(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1129(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1129(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_394() && (func_593(39) || func_589(39)))
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
			func_1129(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1129(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_394() && (func_593(49) || func_589(49)))
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
			func_1129(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1129(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1129(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1129(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_598(int iParam0)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_599(int iParam0, int iParam1)
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

bool func_600(int iParam0, int iParam1)
{
	if (!func_579(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_601(int iParam0)
{
	if (!func_1131(iParam0))
	{
		return false;
	}
	return func_1132(iParam0);
}

void func_602(int iParam0)
{
	if (!func_1131(iParam0))
	{
		return;
	}
	func_1133(iParam0);
	func_1134(iParam0);
}

int func_603(int iParam0)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_604(int iParam0, bool bParam1)
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
	if (func_579(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1135(iVar0) || func_122(iVar0))
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

int func_605(int iParam0, bool bParam1)
{
	if (!func_579(iParam0, 0))
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

void func_606(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_693(iParam0))
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

bool func_607(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1042(bParam0));
}

bool func_608(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_690(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1136((386 + iVar28), 1);
			if (func_1137(iParam0, &Var0, iVar5, 0))
			{
				if (func_1138(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1139(iParam0, Var0, iVar5, 0) };
					func_1140(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_607(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_609(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1141(iParam0, iParam1);
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

bool func_609(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_611(iParam0))
	{
		return false;
	}
	if (!func_607(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_610(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_605(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_606(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1142(iVar0);
			}
		}
		if (!func_1114(iParam0, &uVar1, 1, 0, 0))
		{
			func_1110(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1143(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_608(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_608(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_608(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1101())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1144(iVar0))
				{
					func_608(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_608(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1145(Global_35, 2, 0, 1);
				if ((((func_693(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_601(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_693(iVar7) && func_601(24))
				{
					if (!func_608(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_608(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_608(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_323(480, 1);
	}
	return true;
}

bool func_611(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_612(int iParam0, int iParam1, int iParam2)
{
	if (!func_611(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_693(iVar4))
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
	if (func_345(611073244, 1, 0) && iParam2 == -897553835)
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
		func_647(func_1146(iParam0), func_646(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_325((*Global_1835011)[14]->f_1, 1))
			{
				func_323(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_607(0))
	{
		if (func_609(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_652(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_613(int iParam0)
{
	if ((iParam0 == -615217896 && !func_336()) || iParam0 != -615217896)
	{
		if (func_1147(Global_35, iParam0, &uVar0))
		{
			func_631(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_637();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_637();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_637();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_635();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_633();
			break;
	}
}

void func_614(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_633();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_634();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_635();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_636();
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
			func_637();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1148();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1149();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_615(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_616(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_617(int iParam0)
{
	bVar0 = func_599(iParam0, -2017733358);
	if (func_1150() < 3)
	{
		if (bVar0)
		{
			if (func_1152(func_1151(iParam0), iParam0))
			{
				func_647(79, func_646(func_1151(iParam0)), 1);
			}
			else
			{
				func_647(78, func_646(func_1151(iParam0)), 1);
			}
		}
		else
		{
			func_647(80, func_646(func_1153(iParam0)), 1);
		}
	}
}

bool func_618()
{
	if (((((func_1154(839908568, 400) || func_1154(-1134030454, 400)) || func_1154(623353496, 400)) || func_1154(-344413337, 400)) || func_1154(-1664948962, 400)) || func_1154(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_619(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_727(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_541(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_542(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_620(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_595(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_597(51, 0, 0, 0, 0, -1, 0);
			func_1155(8192);
			break;
		case 581047644:
			func_595(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_597(51, 0, 0, 0, 0, -1, 0);
			func_1155(524288);
			break;
		case -644199619:
			func_595(39, 0, 0, 0, 0, 0, 1, 0);
			func_597(39, 0, 0, 0, 0, -1, 0);
			func_1156(16);
			break;
		case 684296857:
			func_595(41, 0, 0, 0, 0, 0, 1, 0);
			func_597(41, 0, 0, 0, 0, -1, 0);
			func_1157(8);
			break;
		case 466137807:
			func_595(49, 0, 0, 0, 0, 0, 1, 0);
			func_597(49, 0, 0, 0, 0, -1, 0);
			func_1158(16);
			break;
		case -1087522507:
			func_595(43, 0, 0, -1791518714, func_1159(1), 0, -1, 0);
			func_1160(1);
			break;
		case -405829000:
			func_595(43, 0, 0, -2087881550, func_1159(2), 0, -1, 0);
			func_1160(2);
			break;
		case 378660860:
			func_595(43, 0, 0, 1908068621, func_1159(4), 0, -1, 0);
			func_1160(4);
			break;
		case 1566111097:
			func_595(43, 0, 0, 1611247019, func_1159(8), 0, -1, 0);
			func_1160(8);
			break;
		case 1276007140:
			func_595(43, 0, 0, 1319635688, func_1159(16), 0, -1, 0);
			func_1160(16);
			break;
	}
}

void func_621(int iParam0)
{
	if (func_1161() == 1)
	{
		if (func_589(39))
		{
			func_323(342, 0);
		}
		else
		{
			func_323(343, 0);
			func_1156(1);
		}
	}
	if (func_1161() >= 30)
	{
		func_323(344, 0);
	}
	func_595(39, 0, 0, 0, 0, 0, -1, 0);
	func_597(39, 0, 0, func_1161(), 30, 1, 0);
}

void func_622(int iParam0)
{
	if (func_1162() == 1)
	{
		if (func_589(49))
		{
			func_323(409, 0);
		}
		else
		{
			func_323(410, 0);
			func_1158(1);
		}
	}
	if (func_1162() >= 10)
	{
		func_323(411, 0);
	}
	func_595(49, 0, 0, 0, 0, 0, -1, 0);
	func_597(49, 0, 0, func_1162(), 10, 1, 0);
}

void func_623(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_323(437, 0);
			func_323(440, 0);
			func_1163(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_595(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_597(51, 0, 0, sVar0, func_1121(-949689219, 20), 1, 0);
			func_1155(1);
			func_1164(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1163(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_595(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_597(51, 0, 0, sVar0, func_1121(-1248968496, 20), 1, 0);
			func_1155(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1163(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_595(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_597(51, 0, 0, sVar0, func_1121(1706369307, 20), 1, 0);
			func_1155(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1163(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_595(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_597(51, 0, 0, sVar0, func_1121(1520110311, 20), 1, 0);
			func_1155(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_323(438, 0);
			func_1163(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_595(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_597(51, 0, 0, sVar0, func_1121(-1992824800, 20), 1, 0);
			func_1155(32768);
			break;
		default:
			func_323(439, 0);
			break;
	}
}

void func_624()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_625(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_589(43))
		{
			if (iParam0 == 281887510)
			{
				func_323(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_323(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_323(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_323(400, 0);
			}
		}
		else if (func_599(iParam0, 412399755))
		{
			func_1165(-1791518714);
			if (func_1166() == 0)
			{
				func_365(0, 10);
				iVar1 = func_1167(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1168(iParam0) < func_1169(iParam0))
					{
						func_595(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_597(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_589(44))
		{
			if (iParam0 == -222563712)
			{
				func_323(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_323(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_323(401, 0);
			}
		}
		else if (func_599(iParam0, 709057512))
		{
			func_1165(-2087881550);
			if (func_1166() == 1)
			{
				func_365(0, 10);
				iVar1 = func_1167(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1168(iParam0) < func_1169(iParam0))
					{
						func_595(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_597(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_589(45))
		{
			if (iParam0 == 2116770557)
			{
				func_323(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_323(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_323(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_323(398, 0);
			}
		}
		else if (func_599(iParam0, -1478961327))
		{
			func_1165(1908068621);
			if (func_1166() == 2)
			{
				func_365(0, 10);
				iVar1 = func_1167(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1170(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1171(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1119(48);
					}
					if (func_1168(iParam0) < func_1169(iParam0))
					{
						func_595(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_597(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1168(iParam0) < func_1169(iParam0))
					{
						func_595(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_597(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_589(46))
		{
			if (iParam0 == 2085530337)
			{
				func_323(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_323(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_323(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_323(406, 0);
			}
		}
		else if (func_599(iParam0, -1238404098))
		{
			func_1165(1611247019);
			if (func_1166() == 3)
			{
				func_365(0, 10);
				iVar1 = func_1167(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1168(iParam0) < func_1169(iParam0))
					{
						func_595(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_597(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_589(47))
		{
			if (iParam0 == -1521783510)
			{
				func_323(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_323(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_323(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_323(403, 0);
			}
		}
		else if (func_599(iParam0, 1160548794))
		{
			func_1165(1319635688);
			if (func_1166() == 4)
			{
				func_365(0, 10);
				iVar1 = func_1167(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1168(iParam0) < func_1169(iParam0))
					{
						func_595(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_597(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_626(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1170(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1171(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1119(48);
		}
	}
}

void func_627(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_345(func_1172(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1173(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1174(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_628(int iParam0, int iParam1, int iParam2)
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
				func_619(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_619(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_619(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_619(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_619(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_619(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_619(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_619(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_619(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_619(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_619(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_619(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_619(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1175())
			{
				func_619(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_619(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_619(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_619(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_619(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_619(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_619(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_619(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_619(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_619(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_619(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_619(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_619(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_629(int iParam0)
{
	if (func_589(41))
	{
		func_323(363, 0);
	}
	else
	{
		func_323(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1176(-1865241121);
			func_1177(-642026005);
			func_1178(-642026005);
			func_365(0, 10);
			break;
		case -2108314374:
			func_1176(2117142684);
			func_1177(-940584364);
			func_1178(-940584364);
			func_365(0, 10);
			break;
		case -1193798153:
			func_1176(-1409326024);
			func_1177(1972645282);
			func_1178(1972645282);
			func_365(0, 10);
			break;
		case -787702678:
			func_1176(-641744968);
			func_1177(1667205433);
			func_1178(1667205433);
			func_365(0, 10);
			break;
		case -804542901:
			func_1176(-946988203);
			func_1177(1362715885);
			func_1178(1362715885);
			func_365(0, 10);
			break;
		case -1696275132:
			func_1176(-646136018);
			func_1177(1053540370);
			func_1178(1053540370);
			func_365(0, 10);
			break;
		case -161595323:
			func_1176(-955835837);
			func_1177(-1100103852);
			func_1178(-1100103852);
			func_365(0, 10);
			break;
		case -1114363619:
			func_1176(-179276075);
			func_1177(-1409869209);
			func_1178(-1409869209);
			func_365(0, 10);
			break;
		case -368407134:
			func_1176(-492711560);
			func_1177(-1760235357);
			func_1178(-1760235357);
			func_365(0, 10);
			break;
		case 1997759228:
			func_1176(1764383959);
			func_1177(-138366827);
			func_1178(-138366827);
			func_365(0, 10);
			break;
		case 1265573293:
			func_1176(317501533);
			func_1177(-1261163843);
			func_1178(-1261163843);
			func_365(0, 10);
			break;
		case -1030441283:
			func_1176(817753087);
			func_1177(-963523016);
			func_1178(-963523016);
			func_365(0, 10);
			break;
		case -1490884871:
			func_1176(576606016);
			func_1177(560825326);
			func_1178(560825326);
			func_365(0, 10);
			break;
		case -395458616:
			func_1176(814934957);
			func_1177(858269539);
			func_1178(858269539);
			break;
	}
}

void func_630(int iParam0, int iParam1)
{
	func_1179(iParam0, iParam1, &uVar0);
}

int func_631(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_690(iParam1, 1, 0) };
		iParam3 = func_691(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1180(iParam1, iParam2, func_678(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1181(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_678(iParam3, 1)])
			{
				func_689(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1182(32768) && iParam1 != &Global_1946804->f_57[func_678(iParam3, 1)])
			{
				func_1183();
				func_689(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_689(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1184(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_689(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1185(0);
			func_1186(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_689(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_632(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1145(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1145(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1187("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1188(&Var3, iVar2, iVar0, iVar1))
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
						func_1189(iVar0);
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

void func_633()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_634()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_635()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_636()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_637()
{
	func_1190();
	func_1191();
	func_1192();
}

void func_638(int iParam0, int iParam1, bool bParam2)
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

void func_639(int iParam0, bool bParam1)
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
			Jump @184; //curOff = 137
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			Jump @184; //curOff = 159
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			sVar3 = "COL_CTX_PLAYER_LOG";
			if (bParam1)
			{
				sVar1 = "MISSION_COMPLETE";
			}
			_uilog_set_pending_details_id(1, iVar0);
			func_1129(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}

void func_640(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_641(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_642(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_643(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_644(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_645(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_646(int iParam0)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_647(int iParam0, int iParam1, bool bParam2)
{
	func_685(iParam0, &iVar0, &iVar1);
	if (!func_686(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1193(iParam0, 1024))
	{
		return;
	}
	func_687(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_648(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_685(iParam0, &iVar0, &iVar1);
	if (!func_686(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1193(iParam0, 1024))
	{
		return;
	}
	func_687(iVar0, iVar1);
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

int func_649()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1117())
	{
		return func_650();
	}
	iVar4 = (func_1117() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1117())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1194(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1118(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_650()
{
	iVar0 = get_random_int_in_range(0, func_1117());
	return func_1118(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_651(int iParam0)
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

bool func_652(int iParam0, int iParam1, int iParam2)
{
	if (!func_579(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_690(iParam0, 0, 1) };
	Var5 = { func_1139(iParam0, Var0, Var0.f_4, 0) };
	return func_1195(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_653(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_603(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1196(81053684, 0) <= 0)
			{
				func_689(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_689(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1197(iParam0);
			if (func_1198(iVar0))
			{
				func_1199(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_689(30, iParam0, 0, 0, 0);
			}
			if (func_680() == -2125499975 || func_680() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_689(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_680() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_689(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1200(-525676072, 0))
			{
				if (func_1201(-525676072, &iVar1))
				{
					func_689(33, iVar1, 0, 0, 0);
				}
			}
			func_689(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1202(99217379))
		{
			func_631(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_602(24);
		if (func_632(&iVar2, 0))
		{
			func_608(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_654(int iParam0)
{
	if (func_599(iParam0, 943695443))
	{
		func_1203(0, iParam0);
	}
	else if (func_599(iParam0, -2096528786))
	{
		func_1203(1, iParam0);
	}
	else if (func_599(iParam0, -1094167013))
	{
		func_1203(2, iParam0);
	}
	else if (func_599(iParam0, 1936654645))
	{
		func_1203(3, iParam0);
	}
	else if (func_599(iParam0, 1306489306))
	{
		func_1203(4, iParam0);
	}
	else if (func_599(iParam0, 435762317))
	{
		func_1203(5, iParam0);
	}
	else if (func_599(iParam0, 1259363210))
	{
		func_1203(6, iParam0);
	}
	else if (func_599(iParam0, 881398259))
	{
		func_1203(7, iParam0);
	}
	else if (func_599(iParam0, -541549214))
	{
		func_1203(8, iParam0);
	}
	else if (func_599(iParam0, 130796156))
	{
		func_1203(-1, iParam0);
	}
}

int func_655(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1204(&Var4, 1356624740);
	return func_1205(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_656(int iParam0)
{
	if (!func_579(iParam0, 0))
	{
		return Var0;
	}
	if (func_599(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_599(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_599(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_599(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_657(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_325((*Global_1835011)[4]->f_1, 1))
				{
					func_323(109, 1);
				}
			}
			break;
	}
}

void func_658(int iParam0, char* sParam1)
{
	sVar0 = func_1207(func_1206(0));
	func_709(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1208(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_659(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_579(iParam0, 0))
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
	if (!func_1209())
	{
		func_1210(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1211(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1211(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_600(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_598(iParam0);
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
	else if (!func_1212(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1213(_create_var_string(10, &cVar2, _create_var_string(0, func_646(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_599(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_646(iParam0));
	}
	func_709(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_660(int iParam0, int iParam1)
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

int func_663(int iParam0, int iParam1)
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

bool func_664(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_579(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1214(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1214(iParam0, Var2, 1))
				{
					if (func_1215(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1215(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_323(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_195(0, 0, 1))
		{
			func_365(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_665(int iParam0)
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

void func_666(int iParam0)
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
		func_323(iVar0, 0);
	}
}

void func_667()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1216(0);
			_unlock_set_unlocked(-121456797, false);
			func_1217();
		}
		return;
	}
	if (!func_325((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1218();
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
	func_1216(1);
}

void func_668()
{
	if (!func_325((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_316(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_669()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1219(0);
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
	if (!func_325((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1219(1);
}

void func_670()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1220(15000, 0, 0, 0, 1);
			func_1219(0);
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
	if (!func_325((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_281(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1219(1);
}

void func_671()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_345(1191437462, 1, 0) && !func_189((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_316(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1221(1))
			{
				func_643(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_345(1119149048, 1, 0) && !func_189((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_316(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1221(2))
			{
				func_643(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1221(4))
		{
			func_643(4);
		}
		if (func_1221(0))
		{
			func_1222(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_345(1191437462, 1, 0))
			{
				func_674(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_345(1119149048, 1, 0))
			{
				func_674(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1221(1))
		{
			func_1222(1);
		}
		if (func_1221(2))
		{
			func_1222(2);
		}
		if (func_1221(4))
		{
			func_1222(4);
		}
		if (!func_1221(0))
		{
			func_643(0);
		}
	}
}

void func_672()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_325((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1223() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_606(127400949);
		if (func_608(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1223() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1224(-2055673461, Var1, 1423542233);
		func_1224(-202131179, Var1, -1264898804);
		func_1224(2013836545, Var1, 1592019450);
		func_1224(1497476650, Var1, 1117400455);
		func_1224(1063571467, Var1, 1150213537);
		func_1224(2107224237, Var1, 1598825281);
		func_1224(1747981656, Var1, -712527121);
		func_1224(-1371140647, Var1, 454332195);
		func_1224(-19142973, Var1, 256105670);
		func_1224(-2074737817, Var1, -1328061889);
		func_1224(-1114256243, Var1, -782241404);
		func_1224(-1653277288, Var1, 1669853467);
		func_1224(1869398132, Var1, -1559225678);
		func_1224(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_693(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_601(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_601(24) && func_693(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_693(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_601(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_673()
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

int func_674(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1115(iParam0, 1);
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
			func_659(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_345(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_656(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_583(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_583(iParam0, 0, 0) - iParam1) < 0)
		{
			func_674(iParam0, func_583(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_598(iParam0) == -427144552)
	{
		if (!func_1225(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1226(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_607(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_659(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1227(iParam0, iParam1);
	return 1;
}

bool func_675(int iParam0)
{
	switch (func_603(iParam0))
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

void func_676(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_603(iParam0))
	{
		case -2061583405:
			bVar0 = func_1228(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1228(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1228(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1228(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1228(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1228(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1229();
	}
	if (bParam1)
	{
		func_1230(0, 0);
	}
}

int func_677(int iParam0)
{
	Var0 = { func_690(iParam0, 1, 0) };
	return func_691(Var0.f_4);
}

int func_678(int iParam0, int iParam1)
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

void func_679(int iParam0)
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
		iVar0 = func_678(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1231(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_680()
{
	return Global_1946804->f_1;
}

bool func_681(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1232(iParam6);
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
		func_1234(uParam0, func_1233(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_678(iVar3, 1);
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
							if (func_1235(iVar3) && func_1236(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1237(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_682(int iParam0, int iParam1)
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

int func_683(int iParam0, int iParam1)
{
	vVar0 = { func_682(iParam0, iParam1) };
	return vVar0.x;
}

void func_684(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_685(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_686(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1238(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1239(iParam0))
	{
		return false;
	}
	if (func_1240(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1193(iParam0, 1)) || func_82(32768))
	{
		if (!func_1193(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1241())
	{
		return false;
	}
	return true;
}

void func_687(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_688(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_689(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1242(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1243(Var0);
}

struct<5> func_690(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1244(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_598(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1139(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1245(bParam1) };
			if (bParam2 && func_1246(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1137(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1137(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1138(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1247(bParam1) };
			switch (func_603(iParam0))
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
			if (func_1248(iParam0, -1823706425))
			{
				Var0 = { func_1139(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1248(iParam0, -1483207246))
			{
				Var0 = { func_1139(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1249(Var0, &Var27, bParam1, 0))
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

int func_691(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1250(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_692(int iParam0)
{
	func_1231(Global_1946804->f_1497.f_1[func_678(iParam0, 1)], 2, 6);
	func_1231(Global_1946804->f_1378.f_1[func_678(iParam0, 1)], 2, 6);
}

bool func_693(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_694(int iParam0)
{
	return iParam0 != 0;
}

int func_695(int iParam0)
{
	iVar0 = -1;
	if (!func_694(iParam0))
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

bool func_696(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_697(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1251(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_698(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_699(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_700(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_701(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_702(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_703(int iParam0, int iParam1)
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

void func_704(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1252(iParam0, iParam6);
	func_1253(iParam0, iParam5);
	func_1254(iParam0, iParam4);
	func_1255(iParam0, iParam3);
	func_1256(iParam0, iParam2);
	func_1257(iParam0, iParam1);
}

bool func_705(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_702(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_701(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_700(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_697(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_698(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_699(iParam0);
	if (iVar5 < 1 || iVar5 > func_703(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_706(int iParam0, bool bParam1)
{
	return func_1092(func_283(), iParam0, bParam1);
}

void func_707(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_708(int iParam0, int iParam1)
{
	if (!func_579(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1115(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1187("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1188(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_693(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1189(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1189(iVar1);
	}
	return false;
}

var func_709(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1258(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_710()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1259(iVar1);
		if (!_unlock_is_visible(func_1260(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_711()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1259(iVar0);
		if (!_unlock_is_visible(func_1260(iVar1)))
		{
			_unlock_set_visible(func_1260(iVar1), true);
		}
		iVar0++;
	}
}

bool func_712(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1056(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_713(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_518(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_714()
{
	return (func_196(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_715(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_579(iVar0, 0))
	{
		return 0;
	}
	if (!func_1261(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1262(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_599(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_690(iVar0, 0, 1) };
	iVar10 = func_1263(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1264(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1265(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_316(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1220(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_716(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_717(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_709(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_718(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_719(bool bParam0, bool bParam1)
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

void func_720(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1082())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1082())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_191(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_270(iParam0);
	if (func_193(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_193(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1266(1, iVar1);
					func_1266(8, iVar1);
					func_1266(7, iVar1);
					break;
				case 12:
					func_1266(6, iVar1);
					break;
				case 53:
					func_1266(3, iVar1);
					func_1266(7, iVar1);
					func_1266(4, iVar1);
					break;
				case 20:
					func_1266(8, iVar1);
					break;
				case 19:
					func_1266(1, iVar1);
					func_1266(2, iVar1);
					break;
				case 24:
					func_1266(3, iVar1);
					func_1266(9, iVar1);
					func_1266(20, iVar1);
					break;
				case 28:
					func_1266(1, iVar1);
					break;
				case 34:
					func_1266(23, iVar1);
					func_1266(2, iVar1);
					func_1266(18, iVar1);
					break;
				case 29:
					func_1266(0, iVar1);
					func_1266(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1266(0, iVar1);
					func_1266(3, iVar1);
					func_1266(2, iVar1);
					func_1266(11, iVar1);
					func_1266(6, iVar1);
					func_1266(25, iVar1);
					func_1266(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1266(5, iVar1);
					break;
				case 63:
					func_1266(1, iVar1);
					func_1266(3, iVar1);
					break;
				case 37:
					func_1266(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_361(0, 10, 11, 2116153146))
			{
				func_1266(7, iVar1);
				func_1266(4, iVar1);
			}
			else if (iParam0 == func_361(0, 7, 11, -379687487))
			{
				func_1266(8, iVar1);
				func_1266(15, iVar1);
			}
			else if (iParam0 == func_361(0, 8, 11, -1386089015))
			{
				func_1266(3, iVar1);
			}
			else if (iParam0 == func_361(0, 11, 11, -1952009645))
			{
				func_1266(6, iVar1);
				func_1266(3, iVar1);
			}
			else if (iParam0 == func_361(0, 12, 11, 2065895756))
			{
				func_1266(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1267()));
	if (!func_1268(629))
	{
		func_323(629, 0);
	}
}

int func_721(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_722(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_723(int iParam0, int iParam1, int iParam2)
{
	if (!func_722(iParam0))
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

int func_724()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_725(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_726(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1269(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_724())
	{
		return -1;
	}
	iVar0 = func_725(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_489(iVar1, 0);
	func_558(iVar1, 0);
	func_1270(iVar1, 0);
	func_1271(iVar1, 0);
	func_1272(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1273(iVar1, iParam4);
	}
	return iVar1;
}

int func_727(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_345(1811977508, 1, 0))
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
			if (func_579(iVar25, 0) && func_599(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_728(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_729(int iParam0)
{
	if (!func_188(iParam0))
	{
		return 0;
	}
	cVar0 = func_363(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_730(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_731(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1274(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1275() == 0 && !func_1276(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1277(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1278();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1279(Global_1310720->f_21))
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
			vVar7 = { func_1280(iVar0, iVar1) };
			bVar11 = func_1281(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_395(vVar7)) && func_1282(iVar0, bParam8, iParam12)) && !func_1283(iVar0)) || bVar11)
			{
				if (func_1284(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_732(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1285(vParam0);
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

void func_733()
{
	disable_script_brain_set(1);
}

void func_734()
{
}

void func_735()
{
	disable_script_brain_set(2);
}

bool func_736(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_737(char* sParam0)
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

void func_738(int iParam0)
{
	if (func_736(iParam0, 1))
	{
		func_1286(1);
	}
}

int func_739()
{
	return -1904156936;
}

bool func_740(int iParam0)
{
	if (!func_188(iParam0))
	{
		return false;
	}
	switch (func_193(iParam0))
	{
		case 1:
			iVar0 = func_270(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_270(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_741()
{
	return 166188472;
}

int func_742()
{
	return 2015838421;
}

int func_743()
{
	return 207908017;
}

var func_744(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_745(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_746(var uParam0)
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

int func_747(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (does_entity_exist(uParam0->f_3[iVar0]->f_2) && uParam0->f_3[iVar0]->f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_748(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return "";
	}
	if (is_entity_a_ped(bParam0))
	{
		return func_1287(get_ped_index_from_entity_index(bParam0));
	}
	else if (is_entity_an_object(bParam0))
	{
		return func_1288(get_object_index_from_entity_index(bParam0));
	}
	else if (is_entity_a_vehicle(bParam0))
	{
		return func_1289(get_vehicle_index_from_entity_index(bParam0));
	}
	return "";
}

int func_749(var uParam0, char* sParam1)
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

int func_750(var uParam0)
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

void func_751(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_752(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_753()
{
	return Global_1572864->f_8;
}

void func_754(char[4] cParam0, int iParam1)
{
	func_1290(cParam0, iParam1);
	func_1291(cParam0, iParam1, 26);
}

bool func_755(char[4] cParam0)
{
	do_screen_fade_out(0);
	_0x98a7cd5ea379a854();
	func_1292();
	func_103(cParam0, 524288);
	func_387(cParam0);
	func_388(cParam0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_756(char[4] cParam0)
{
	do_screen_fade_out(0);
	func_1292();
	set_clock_time(6, 5, 0);
	_set_weather_type(1632247697, true, true, false, 0f, false);
	if (!func_387(cParam0))
	{
		return false;
	}
	func_388(cParam0);
	func_1293(&Global_35);
	func_1293(iLocal_162[1]);
	func_1293(iLocal_162[0]);
	_hide_hud_component(iVar801);
	if (does_scenario_group_exist("MAR1_ANIMALS") && !is_scenario_group_enabled("MAR1_ANIMALS"))
	{
		set_scenario_group_enabled("MAR1_ANIMALS", true);
	}
	_0x98a7cd5ea379a854();
	_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	func_1294(0);
	func_1295(&(uLocal_105[0]));
	_0x6339c1ea3979b5f7("Chapter_08", "Chapter_Screen_Scenes");
	func_103(cParam0, 524288);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_757(char[4] cParam0)
{
	_0x98a7cd5ea379a854();
	_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	func_1292();
	func_134(cParam0, 0);
	func_974(cParam0);
	func_99(cParam0, 33554432);
	func_1296(&(cParam0->f_7375), "Multistart");
	func_1297(cParam0, "MAR1_INT");
	func_387(cParam0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_758(char[4] cParam0)
{
	switch (func_1298(cParam0))
	{
		case 1:
			func_135(cParam0, -1);
			break;
	}
	func_1297(cParam0, "MAR1_INT");
	_0x98a7cd5ea379a854();
	func_1292();
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	disable_control_action(0, -668070958, false);
	disable_control_action(0, 1250966545, false);
	if (does_scenario_group_exist("MAR1_ANIMALS") && is_scenario_group_enabled("MAR1_ANIMALS"))
	{
		func_1299(cParam0);
	}
	switch (func_1300(cParam0))
	{
		case 0:
			if (func_1301(&(uLocal_105[0]), 0.99f))
			{
				func_263(cParam0, 524288);
				_0x9428447ded71fc7e("Chapter_Screen_Scenes");
				func_974(cParam0);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			set_player_control(get_player_index(), false, 256, false);
			_hide_hud_component(iVar801);
			return 1;
	}
	return 0;
}

bool func_759(char[4] cParam0)
{
	if (get_clock_hours() != 6)
	{
		set_clock_time(6, 5, 0);
		_set_weather_type(1632247697, true, true, false, 0f, false);
	}
	_0x98a7cd5ea379a854();
	func_387(cParam0);
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	return cParam0->f_607 == cParam0->f_607;
}

void func_760(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1302(cParam0, iParam1);
	func_1291(cParam0, iParam1, iParam2);
	func_1303(cParam0, &iParam3, iParam1, 0);
	func_1303(cParam0, &iParam4, iParam1, 2);
	func_1303(cParam0, &iParam5, iParam1, 4);
	func_1303(cParam0, &iParam6, iParam1, 5);
	func_1303(cParam0, &iParam7, iParam1, 7);
	func_975(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1304(cParam0, iParam1, cVar0);
	func_1305(cParam0, iParam1, iParam10);
}

int func_761(char[4] cParam0)
{
	func_387(cParam0);
	func_388(cParam0);
	return 1;
}

int func_762(char[4] cParam0)
{
	_0x98a7cd5ea379a854();
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (is_screen_faded_out())
	{
		do_screen_fade_in(3000);
	}
	if (!func_120(cParam0, 4))
	{
		func_263(cParam0, 524288);
		func_926(cParam0);
	}
	func_1306(0);
	if (does_scenario_group_exist("MAR1_ANIMALS") && !is_scenario_group_enabled("MAR1_ANIMALS"))
	{
		set_scenario_group_enabled("MAR1_ANIMALS", true);
	}
	func_1299(cParam0);
	func_388(cParam0);
	func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
	func_1308(1420417918, Global_35, 4, 4, 3, 0);
	func_1309();
	func_1311(func_1310(), Global_35, 3, 1);
	func_1312();
	return 1;
}

int func_763(char[4] cParam0)
{
	destroy_cam(iVar988, false);
	_display_hud_component(iVar801);
	func_1313(cParam0);
	if (func_120(cParam0, 4) || func_8(cParam0, 524288))
	{
		func_1314(1080033280);
	}
	else
	{
		func_1295(&(uLocal_105[1]));
	}
	func_134(cParam0, 0);
	func_135(cParam0, 1);
	func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
	func_1315(Local_176[0], 91, 1);
	func_1315(Local_176[1], 91, 1);
	use_waypoint_recording_as_assisted_movement_route(sVar719, 1, 0.5f, 1f, 0);
	return 1;
}

int func_764(char[4] cParam0)
{
	func_1316(cParam0, 1);
	func_1317(cParam0);
	func_1318(cParam0);
	func_1319(1061158912, 0.1f, 1048576000);
	func_1320(cParam0);
	if ((func_1321(&(iLocal_162[0]), -2017877118) && is_ped_in_vehicle(Global_35, iVar536, true)) || (iVar962 == 1 && func_1301(iVar715, -1082130432)))
	{
		disable_control_action(0, -17122892, false);
	}
	else if (iVar962 == 1)
	{
		disable_control_action(0, -17122892, false);
		iLocal_965 = 0;
	}
	switch (func_1300(cParam0))
	{
		case 0:
			if (func_1322())
			{
				reset_player_input_gait(get_player_index());
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_1323(Global_35, func_385(0, 3), func_385(0, 2)))
			{
				use_waypoint_recording_as_assisted_movement_route(sVar719, 0, 1f, 0.5f, 1);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (func_1324(0, 1097859072, 1))
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_765(var uParam0)
{
	func_1306(1);
	if (does_scenario_group_exist("MAR1_ANIMALS"))
	{
		set_scenario_group_enabled("MAR1_ANIMALS", false);
	}
	return 1;
}

bool func_766(var uParam0)
{
	func_1325(func_385(15, 0), 100f, 0);
	func_1326(func_385(15, 0), 100f, 0);
	func_1327(func_385(15, 0), 100f, 0, 0, 0, 0, 0);
	func_1315(Local_176[0], 90, 1);
	func_1315(Local_176[1], 90, 1);
	func_1328(1854467923, 0, 0);
	func_1328(1595373759, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_767(var uParam0)
{
	func_1329(1854467923, 1, 0, 0, 0, 0, 0, 0);
	func_1330(0);
	func_1331(&(iLocal_544[16]), 0, 0, 0, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_768(char[4] cParam0)
{
	bLocal_651 = func_8(cParam0, 8);
	if (iVar648 == 0)
	{
		func_1314(1080033280);
		func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
	}
	func_1332(cParam0);
	func_99(cParam0, 33554432);
	func_140(cParam0, func_33(cParam0), 65536);
	func_1333(cParam0, "normalstart");
	func_1333(cParam0, "multistart");
	func_134(cParam0, 0);
	func_135(cParam0, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_769(char[4] cParam0)
{
	func_1334(cParam0);
	func_1335(cParam0);
	func_1316(cParam0, func_1300(cParam0) <= 2);
	func_939(func_385(7, 10), 524288, &uLocal_807);
	func_1319(1061158912, 0.1f, 1048576000);
	func_1320(cParam0);
	if (!does_entity_exist(&(iLocal_501[11])) || !does_entity_have_drawable(&(iLocal_501[11])))
	{
		iLocal_501[11] = func_1336(11);
	}
	func_1297(cParam0, "MAR1_MCS2");
	switch (func_1300(cParam0))
	{
		case 0:
			func_1317(cParam0);
			if (func_1323(Global_35, func_385(15, 5), *vLocal_668[1]))
			{
				iLocal_666 = 0;
				use_waypoint_recording_as_assisted_movement_route(sVar719, 0, 1f, 0.5f, 1);
				func_1337(cParam0);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			func_1317(cParam0);
			if (func_1338(bVar536, *vLocal_668[1], 120f, 1, 1))
			{
				func_1339(Global_35, bVar536, *vLocal_668[1], 120f, 6.5f);
			}
			else if (func_1338(bVar536, *vLocal_668[1], 180f, 1, 1))
			{
				func_1339(Global_35, bVar536, *vLocal_668[1], 140f, 7.5f);
			}
			if ((func_1340(Global_35, &(iLocal_544[7]), 1, 0) || is_entity_in_volume(bVar536, &(iLocal_544[7]), true, 0)) || is_entity_in_volume(bVar536, &(iLocal_544[10]), true, 0))
			{
				use_waypoint_recording_as_assisted_movement_route(sVar720, 1, 0.5f, 1f, 0);
				func_134(cParam0, 2);
			}
			else if ((func_1340(Global_35, &(iLocal_544[8]), 1, 0) || is_entity_in_volume(bVar536, &(iLocal_544[8]), true, 0)) || is_entity_in_volume(bVar536, &(iLocal_544[11]), true, 0))
			{
				use_waypoint_recording_as_assisted_movement_route(sVar721, 1, 0.5f, 1f, 0);
				func_134(cParam0, 2);
			}
			else if (func_1340(Global_35, &(iLocal_544[12]), 1, 0) || is_entity_in_volume(bVar536, &(iLocal_544[12]), true, 0))
			{
				func_1341(8);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			func_1317(cParam0);
			if (func_1338(bVar536, *vLocal_668[1], 120f, 1, 1))
			{
				func_1339(Global_35, bVar536, *vLocal_668[1], 120f, 6.5f);
			}
			else if (func_1338(bVar536, *vLocal_668[1], 180f, 1, 1))
			{
				func_1339(Global_35, bVar536, *vLocal_668[1], 140f, 7.5f);
			}
			if (func_1340(Global_35, &(iLocal_544[10]), 1, 0) || is_entity_in_volume(bVar536, &(iLocal_544[10]), true, 0))
			{
				use_waypoint_recording_as_assisted_movement_route(sVar720, 0, 1f, 0.5f, 1);
				set_player_control(get_player_index(), false, 256, false);
				_display_hud_component(iVar800);
				clear_ped_tasks(Global_35, 1, 0);
				task_vehicle_follow_waypoint_recording(Global_35, bVar536, sVar720, 131, 0, 4872, -1, -1082130432, 0, 0.5f, 0);
				_0x2208438012482a1a(Global_35, false, false);
				func_461(&uLocal_615);
				func_135(cParam0, 20);
				func_134(cParam0, 12);
			}
			else if (func_1340(Global_35, &(iLocal_544[11]), 1, 0) || is_entity_in_volume(bVar536, &(iLocal_544[11]), true, 0))
			{
				use_waypoint_recording_as_assisted_movement_route(sVar721, 0, 1f, 0.5f, 1);
				set_player_control(get_player_index(), false, 256, false);
				_display_hud_component(iVar800);
				clear_ped_tasks(Global_35, 1, 0);
				task_vehicle_follow_waypoint_recording(Global_35, bVar536, sVar721, 131, 0, 4872, -1, -1082130432, 0, 0.5f, 0);
				_0x2208438012482a1a(Global_35, false, false);
				func_461(&uLocal_615);
				func_135(cParam0, 20);
				func_134(cParam0, 12);
			}
			else if (func_1340(Global_35, &(iLocal_544[12]), 1, 0) || is_entity_in_volume(bVar536, &(iLocal_544[12]), true, 0))
			{
				use_waypoint_recording_as_assisted_movement_route(sVar722, 0, 1f, 0.5f, 1);
				set_player_control(get_player_index(), false, 256, false);
				_display_hud_component(iVar800);
				clear_ped_tasks(Global_35, 1, 0);
				task_vehicle_follow_waypoint_recording(Global_35, bVar536, sVar722, 131, 0, 4872, -1, -1082130432, 0, 0.5f, 0);
				_0x2208438012482a1a(Global_35, false, false);
				func_461(&uLocal_615);
				func_135(cParam0, 20);
				func_134(cParam0, 12);
			}
			break;
		case 12:
			func_1317(cParam0);
			if (is_waypoint_playback_going_on_for_vehicle(bVar536, 0))
			{
				vehicle_waypoint_playback_override_speed(bVar536, 5f);
			}
			func_1342(&uLocal_539, 5f, 5f);
			if (func_1340(Global_35, &(iLocal_544[9]), 1, 0) || is_entity_in_volume(bVar536, &(iLocal_544[9]), true, 0))
			{
				func_27(&uLocal_615, 0);
			}
			if (((((!func_1321(Global_35, -235832601) || ((is_waypoint_playback_going_on_for_ped(Global_35, sVar720) && waypoint_recording_get_num_points(sVar720, &iVar0)) && (iVar0 - get_ped_waypoint_progress(Global_35)) < 5)) || ((is_waypoint_playback_going_on_for_ped(Global_35, sVar721) && waypoint_recording_get_num_points(sVar721, &iVar0)) && (iVar0 - get_ped_waypoint_progress(Global_35)) < 5)) || ((is_waypoint_playback_going_on_for_ped(Global_35, sVar722) && waypoint_recording_get_num_points(sVar722, &iVar0)) && (iVar0 - get_ped_waypoint_progress(Global_35)) < 5)) || func_1343(&uLocal_615, 6f)) && func_1344(&uLocal_539, 1.5f))
			{
				func_1345(&uLocal_539);
				_display_hud_component(iVar800);
				if (iVar652 == 1)
				{
					func_1346();
				}
				if (!does_blip_exist(iVar538))
				{
					func_1307(cParam0, "MAR1_GENERAL_STORE", -1082130432, 0, 0, -1, -1, 0);
					iLocal_541 = _blip_add_for_coord(408396114, *vLocal_668[2]);
				}
				disable_control_action(0, -17122892, false);
				if (!func_1347("MAR1_PULL_UP") && (((!func_1347("MAR1_RIDEBANT1") && func_1298(cParam0) != 20) && func_1298(cParam0) != 21) || is_disabled_control_pressed(0, -17122892)))
				{
					if (func_1347("MAR1_RIDEBANT1"))
					{
						func_1348("MAR1_RIDEBANT1", 1, 0);
						func_218(&uLocal_615);
					}
					task_clear_look_at(Global_35);
					func_134(cParam0, 3);
				}
			}
			break;
		case 3:
			func_1317(cParam0);
			if (is_waypoint_playback_going_on_for_vehicle(bVar536, 0))
			{
				vehicle_waypoint_playback_override_speed(bVar536, 5f);
			}
			func_1342(&uLocal_539, 5f, 5f);
			if (func_1340(Global_35, &(iLocal_544[9]), 1, 0) || is_entity_in_volume(bVar536, &(iLocal_544[9]), true, 0))
			{
				func_27(&uLocal_615, 0);
			}
			if (((((!func_1321(Global_35, -235832601) || func_1343(&uLocal_615, 4.5f)) && func_1344(&uLocal_539, 0.5f)) && !func_1347("MAR1_PULL_UP")) && !func_1347("MAR1_RIDEBANT1")) && (!func_26(&uLocal_615) || func_1343(&uLocal_615, 1f)))
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_770(var uParam0)
{
	set_player_control(get_player_index(), true, 0, false);
	_display_hud_component(iVar800);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_771(var uParam0)
{
	func_1328(1854467923, 0, 0);
	func_1328(1595373759, 0, 0);
	func_948();
	func_1331(&(iLocal_544[16]), 0, 0, 0, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_772(char[4] cParam0)
{
	if (!func_1335(cParam0))
	{
		return false;
	}
	if ((func_1349(&(uLocal_105[13]), "pl_mar1_ig13_park", 1) && !func_120(cParam0, 4)) && func_8(cParam0, 8))
	{
		_0xeaf529446488eb18(iVar536);
		func_1345(&uLocal_539);
		clear_ped_tasks_immediately(Global_35, false, true);
		_0x5e981c764df33117(iVar536, 0);
		set_player_control(get_player_index(), false, 256, false);
		_display_hud_component(iVar800);
		func_1294(13);
		attach_anim_scene_to_entity(&(uLocal_105[13]), iVar536, 0);
		set_anim_scene_origin(&(uLocal_105[13]), 0f, 0f, 0f, 0f, 0f, 0f, 2);
		func_1295(&(uLocal_105[13]));
		set_entity_no_collision_entity(Global_35, iVar536, false);
		set_entity_no_collision_entity(&(iLocal_162[1]), iVar536, false);
		set_entity_no_collision_entity(&(iLocal_162[0]), iVar536, false);
		_0x2208438012482a1a(Global_35, false, false);
		_0x2208438012482a1a(&(iLocal_162[1]), false, false);
		_0x2208438012482a1a(&(iLocal_162[0]), false, false);
		func_1329(1854467923, 1, 0, 0, 0, 0, 0, 0);
	}
	func_1350(cParam0);
	func_388(cParam0);
	func_1332(cParam0);
	func_99(cParam0, 33554432);
	func_140(cParam0, func_33(cParam0), 65536);
	func_1333(cParam0, "normalstart");
	func_1333(cParam0, "multistart");
	func_1330(0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_773(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		set_player_control(get_player_index(), true, 0, false);
		_display_hud_component(iVar800);
	}
	if (func_120(cParam0, 4) || (!func_8(cParam0, 8) && !_is_anim_scene_started(&(uLocal_105[13]), false)))
	{
		func_837(Global_35, func_221(7, 6), 2, 1073741824);
		func_837(&(iLocal_162[0]), func_221(7, 7), 2, 1073741824);
		func_837(&(iLocal_162[1]), func_221(7, 8), 2, 1073741824);
		func_837(bVar536, func_221(7, 0), 2, 1073741824);
		func_1351(&uLocal_801, iLocal_162[0], 1, 0);
		func_1352(iVar798, iLocal_162[1], 1);
		_0xe1103300f3456de7(iVar798, 1.25f, 2.65f);
		Local_176[0]->f_6 = { func_385(7, 4) };
		Local_176[0]->f_11 = 1f;
		func_1315(Local_176[0], 18, 1);
		func_1315(Local_176[1], 127, 1);
	}
	func_1345(&uLocal_539);
	func_1353(&iLocal_541);
	func_134(cParam0, 0);
	func_135(cParam0, 0);
	func_1307(cParam0, "MAR1_GENERAL_STORE", -1082130432, 0, 0, -1, -1, 0);
	iLocal_541 = func_1354(408396114, *vLocal_668[2], 1109393408, 1);
	func_1329(1854467923, 1, 0, 0, 0, 0, 0, 0);
	func_1329(1595373759, 0, 0, 0, 0, 0, 0, 0);
	func_1355(0);
	func_835(1);
	func_974(cParam0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_774(char[4] cParam0)
{
	func_1316(cParam0, 0);
	switch (func_1298(cParam0))
	{
		case 0:
			if (func_1301(&(uLocal_105[13]), -1082130432))
			{
				if (func_1356(cParam0, &(iLocal_544[15]), &(iLocal_544[16]), "MAR1_STRW_WARN", "MAR1_STRW_FAIL", 0, 0, 1, 408396114))
				{
					func_1353(&iLocal_541);
					func_135(cParam0, 1);
				}
				else if (func_1357(cParam0, 0) || func_1358(cParam0, "MAR1_GENERAL_STORE", 6, 1.25f, 0))
				{
					func_1307(cParam0, "MAR1_GENERAL_STORE", -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, 1);
				}
			}
			break;
		case 1:
			if (func_1356(cParam0, &(iLocal_544[15]), &(iLocal_544[16]), "MAR1_STRW_WARN", "MAR1_STRW_FAIL", 0, 0, 1, 408396114))
			{
				func_1353(&iLocal_541);
			}
			else if (!does_blip_exist(iVar538))
			{
				func_1307(cParam0, "MAR1_GENERAL_STORE", -1082130432, 0, 0, -1, -1, 0);
				iLocal_541 = func_1354(408396114, *vLocal_668[2], 1109393408, 1);
			}
			break;
	}
	func_1297(cParam0, "MAR1_MCS2");
	func_939(func_385(7, 10), 524288, &uLocal_807);
	func_1359(Global_35, func_385(7, 10), 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 0, 0);
	func_927(cParam0);
	switch (func_1300(cParam0))
	{
		case 0:
			if (func_1301(&(uLocal_105[13]), 0.085f))
			{
				func_1360(Global_35, 0);
				func_1360(&(iLocal_162[1]), 0);
				func_1360(&(iLocal_162[0]), 0);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if ((func_1301(&(uLocal_105[13]), -1082130432) || (_0xb89fcff19dafff28(&(uLocal_105[13]), "abigail") || _0x005e6f28dd7ed58d(&(uLocal_105[13]), "abigail"))) || (_0xb89fcff19dafff28(&(uLocal_105[13]), "Jack") || _0x005e6f28dd7ed58d(&(uLocal_105[13]), "Jack")))
			{
				set_entity_no_collision_entity(Global_35, iVar536, true);
				set_entity_no_collision_entity(&(iLocal_162[1]), iVar536, true);
				set_entity_no_collision_entity(&(iLocal_162[0]), iVar536, true);
				set_player_control(get_player_index(), true, 0, false);
				_display_hud_component(iVar800);
				if (is_cinematic_cam_rendering())
				{
					set_cinematic_mode_active(false);
				}
				func_1361(0);
				func_1351(&uLocal_801, iLocal_162[0], 1, 0);
				func_1352(iVar798, iLocal_162[1], 1);
				_0xe1103300f3456de7(iVar798, 1.25f, 2.65f);
				Local_176[0]->f_6 = { func_385(7, 4) };
				Local_176[0]->f_11 = 1f;
				func_1315(Local_176[0], 18, 1);
				func_1315(Local_176[1], 127, 1);
				func_388(cParam0);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			func_1317(cParam0);
			if ((does_entity_exist(&(iLocal_501[11])) && does_entity_have_drawable(&(iLocal_501[11]))) || func_1362(cParam0, 0, 0))
			{
				func_388(cParam0);
				func_134(cParam0, 3);
			}
			else
			{
				iLocal_501[11] = func_1336(11);
			}
			break;
		case 3:
			func_1317(cParam0);
			if (func_1362(cParam0, 0, 0))
			{
				if (func_992(player_id(), 1, 0, 1))
				{
					func_1363(cParam0, "MAR1_FAIL_LAW", "", 1, 0);
				}
				else
				{
					func_1364(cParam0, 0);
					func_1353(&iLocal_541);
					func_134(cParam0, 29);
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_775(var uParam0)
{
	func_446(&uLocal_807);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_776(var uParam0)
{
	func_948();
	func_1330(0);
	func_1331(&(iLocal_544[16]), 0, 0, 0, 0, 0);
	func_1355(0);
	func_1328(1854467923, 0, 0);
	func_1328(1595373759, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_777(char[4] cParam0)
{
	if (!func_1335(cParam0))
	{
		return false;
	}
	func_837(&(iLocal_162[0]), func_221(11, 0), 2, 1073741824);
	func_837(&(iLocal_162[1]), func_221(11, 1), 2, 1073741824);
	create_model_hide(func_385(7, 13), 3f, -375651986, true);
	create_model_hide(func_385(13, 12), 3f, 663716280, true);
	clear_ped_tasks(&(iLocal_162[0]), 1, 0);
	clear_ped_tasks(&(iLocal_162[1]), 1, 0);
	set_ped_config_flag(Global_35, 446, false);
	func_1350(cParam0);
	func_388(cParam0);
	func_448(&(iLocal_544[9]));
	func_1365(&(iLocal_544[13]), 0, 534496, 0);
	func_1329(1854467923, 1, 0, 0, 0, 0, 0, 0);
	func_1329(1595373759, 0, 0, 0, 0, 0, 0, 0);
	func_1307(cParam0, "MAR1_MEET_ABIGAIL", -1082130432, 0, 0, -1, -1, 0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_778(char[4] cParam0)
{
	if (func_120(cParam0, 4))
	{
		func_837(Global_35, func_221(11, 3), 2, 1073741824);
	}
	else if (func_8(cParam0, 8) || func_128(cParam0, 3))
	{
		_0xc6981aff6d2a71c2(Global_35);
		set_ped_reset_flag(Global_35, 323, true);
	}
	iVar0 = 61;
	func_165(iVar0, -15);
	remove_model_hide(func_385(7, 13), 3f, -375651986, 0);
	func_1366(cParam0);
	func_1315(Local_219[0], 0, 1);
	func_1315(Local_219[1], 0, 1);
	func_1315(Local_219[2], 0, 1);
	func_1315(Local_176[0], -1, 1);
	func_1315(Local_176[1], -1, 1);
	func_134(cParam0, 0);
	if (does_entity_exist(&(iLocal_501[4])))
	{
		delete_object(iLocal_501[4]);
	}
	if (does_entity_exist(&(iLocal_501[11])))
	{
		set_object_as_no_longer_needed(iLocal_501[11]);
	}
	func_99(cParam0, 33554432);
	func_1367(cParam0);
	func_461(&uLocal_585);
	func_1353(&iLocal_541);
	func_135(cParam0, 0);
	iLocal_541 = func_1368(408396114, func_385(11, 5), 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_779(char[4] cParam0)
{
	switch (func_1298(cParam0))
	{
		case 0:
			if (func_1356(cParam0, &(iLocal_544[15]), &(iLocal_544[16]), "MAR1_STRW_WARN", "MAR1_STRW_FAIL", 0, 0, 1, 408396114))
			{
				func_1353(&iLocal_541);
				func_135(cParam0, 1);
			}
			else if (func_1323(Global_35, func_385(7, 9), func_385(11, 5)) || func_1358(cParam0, "MAR1_MEET_ABIGAIL", 6, 0, 0))
			{
				func_1307(cParam0, "MAR1_MEET_ABIGAIL", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (func_1356(cParam0, &(iLocal_544[15]), &(iLocal_544[16]), "MAR1_STRW_WARN", "MAR1_STRW_FAIL", 0, 0, 1, 408396114))
			{
				func_1353(&iLocal_541);
			}
			else if (!does_blip_exist(iVar538))
			{
				func_1307(cParam0, "MAR1_MEET_ABIGAIL", -1082130432, 0, 0, -1, -1, 0);
				iLocal_541 = func_1368(408396114, func_385(11, 5), 1);
			}
			break;
	}
	func_1317(cParam0);
	func_1369();
	func_1370(cParam0, iLocal_165[0], Local_219[0]);
	func_1371(cParam0, iLocal_165[1], Local_219[1]);
	func_1371(cParam0, iLocal_165[2], Local_219[2]);
	func_938(cParam0);
	if (func_939(func_385(11, 0), 1048576, &uLocal_808))
	{
		if (!is_interior_entity_set_active(iVar805, "str_dr_intgroup_curtains"))
		{
			activate_interior_entity_set(iVar805, "str_dr_intgroup_curtains", 0);
		}
	}
	func_1359(Global_35, func_385(11, 0), 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 0, 0);
	switch (func_1300(cParam0))
	{
		case 0:
			_0xc6981aff6d2a71c2(Global_35);
			set_ped_reset_flag(Global_35, 323, true);
			if (!func_1340(Global_35, &(iLocal_544[4]), 1, 0) || func_26(&uLocal_624))
			{
				func_27(&uLocal_624, 0);
				if (func_1343(&uLocal_624, 2f))
				{
					func_388(cParam0);
					func_134(cParam0, 1);
				}
			}
			break;
		case 1:
			if (func_1362(cParam0, 0, 0))
			{
				if (func_992(player_id(), 1, 0, 1))
				{
					func_1363(cParam0, "MAR1_FAIL_LAW", "", 1, 0);
				}
				else
				{
					func_1364(cParam0, 0);
					func_1353(&iLocal_541);
					func_448(&(iLocal_544[13]));
					if (does_entity_exist(&(iLocal_501[2])))
					{
						delete_object(iLocal_501[2]);
					}
					if (does_entity_exist(&(iLocal_501[3])))
					{
						delete_object(iLocal_501[3]);
					}
					if (_does_anim_scene_exist(&(uLocal_698[1])))
					{
						remove_anim_scene_entity(&(uLocal_698[1]), "UTILLIWAG", uVar536);
					}
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_780(var uParam0)
{
	func_446(&uLocal_808);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_781(var uParam0)
{
	func_948();
	func_1330(0);
	func_1331(&(iLocal_544[16]), 0, 0, 0, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_782(char[4] cParam0)
{
	func_387(cParam0);
	if (!func_1372(cParam0) || !func_952(cParam0, 1, 0, 1, 0, 0))
	{
		return false;
	}
	create_model_hide(func_385(13, 12), 3f, 663716280, true);
	if (func_455(Global_35, iVar958))
	{
		func_145(cParam0, Global_35, "JOHN", 0);
	}
	func_388(cParam0);
	func_1307(cParam0, "MAR1_WAGON", -1082130432, 0, 0, -1, -1, 0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_783(char[4] cParam0)
{
	func_1373(cParam0);
	if (does_entity_exist(&(iLocal_501[5])))
	{
		set_object_as_no_longer_needed(iLocal_501[5]);
	}
	func_134(cParam0, 0);
	func_135(cParam0, 0);
	iLocal_993 = func_1374(bVar536, 408396114, 1, 1);
	func_1355(1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_784(char[4] cParam0)
{
	func_1316(cParam0, 0);
	switch (func_1298(cParam0))
	{
		case 0:
			if (func_1300(cParam0) < 2 && func_1356(cParam0, &(iLocal_544[15]), &(iLocal_544[16]), "MAR1_STRW_WARN", "MAR1_STRW_FAIL", 0, 0, 1, 408396114))
			{
				func_1353(&iLocal_993);
				func_1353(&iLocal_541);
				func_1010(bVar536);
				func_135(cParam0, 1);
			}
			else if ((is_ped_in_vehicle(Global_35, bVar536, false) || func_918(Global_35, bVar536, 10f, 1)) || func_1358(cParam0, "MAR1_WAGON", 6, 0, 0))
			{
				func_1307(cParam0, "MAR1_WAGON", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (func_1300(cParam0) < 2 && func_1356(cParam0, &(iLocal_544[15]), &(iLocal_544[16]), "MAR1_STRW_WARN", "MAR1_STRW_FAIL", 0, 0, 1, 408396114))
			{
				func_1353(&iLocal_993);
				func_1353(&iLocal_541);
				func_1010(bVar536);
			}
			else if (is_ped_in_vehicle(Global_35, bVar536, false))
			{
				func_1353(&iLocal_993);
				func_1353(&iLocal_541);
				func_1010(bVar536);
				func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, -1);
			}
			else if (!does_blip_exist(iVar990) && !is_ped_in_vehicle(Global_35, bVar536, false))
			{
				func_1307(cParam0, "MAR1_WAGON", -1082130432, 0, 0, -1, -1, 0);
				iLocal_993 = func_1374(bVar536, 408396114, 1, 1);
			}
			break;
		case 2:
			if (!func_1347("MAR1_LOADED") && func_1358(cParam0, "MAR1_GOTO_RANCH", 6, 1.25f, 0))
			{
				func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, -1);
			}
			break;
	}
	func_1317(cParam0);
	if (func_1375(cParam0))
	{
		func_1370(cParam0, iLocal_165[0], Local_219[0]);
		func_1371(cParam0, iLocal_165[1], Local_219[1]);
		func_1371(cParam0, iLocal_165[2], Local_219[2]);
	}
	switch (func_1300(cParam0))
	{
		case 0:
			if (func_922(Global_35, bVar536, 1, 1) <= 45f)
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (is_ped_in_vehicle(Global_35, bVar536, true))
			{
				disable_control_action(0, 1847550875, false);
				disable_control_action(0, -779584705, false);
				disable_control_action(0, -699865971, false);
			}
			if (is_ped_in_vehicle(Global_35, bVar536, false))
			{
				func_1353(&iLocal_993);
				func_1353(&iLocal_541);
				func_1010(bVar536);
				iLocal_541 = func_1354(408396114, func_385(5, 0), 1109393408, 1);
				if (does_blip_exist(iVar538))
				{
					set_blip_name_from_text_file(iVar538, "MAR1_RANCH_NAME");
				}
				func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 2);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (func_1375(cParam0))
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_785(var uParam0)
{
	create_model_hide(func_385(13, 12), 3f, 663716280, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_786(var uParam0)
{
	func_1330(0);
	func_948();
	func_1331(&(iLocal_544[16]), 0, 0, 0, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_787(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!func_952(cParam0, 1, 0, 1, 0, 0))
		{
			return false;
		}
	}
	func_163();
	if (!func_8(cParam0, 8))
	{
		func_1376(Global_35, iVar536, -1);
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_788(char[4] cParam0)
{
	func_134(cParam0, 0);
	func_1353(&iLocal_541);
	iLocal_541 = func_1354(408396114, func_385(5, 0), 1109393408, 1);
	if (does_blip_exist(iVar538))
	{
		set_blip_name_from_text_file(iVar538, "MAR1_RANCH_NAME");
	}
	if (func_120(cParam0, 4))
	{
		func_934(0, 0);
	}
	func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_789(char[4] cParam0)
{
	func_1316(cParam0, 1);
	func_1377(cParam0);
	if (func_1375(cParam0) && func_8(cParam0, 8))
	{
		func_1370(cParam0, iLocal_165[0], Local_219[0]);
		func_1371(cParam0, iLocal_165[1], Local_219[1]);
		func_1371(cParam0, iLocal_165[2], Local_219[2]);
	}
	switch (func_1298(cParam0))
	{
		case 0:
			if (func_1322() || func_1358(cParam0, "MAR1_GOTO_RANCH", 6, 20f, 0))
			{
				func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (func_1322() && func_1358(cParam0, "MAR1_PHR_DIR1", 0, 4f, 0))
			{
				func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 51);
			}
			break;
	}
	func_1375(cParam0);
	switch (func_1300(cParam0))
	{
		case 0:
			if (func_1324(4, 1097859072, 8))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_790(char[4] cParam0)
{
	if (func_455(&(iLocal_165[0]), iVar958))
	{
		func_1378(iLocal_165[0], "WORLD_HUMAN_CLIPBOARD", func_221(11, 7), 0, 60000);
		func_456(cParam0, &(iLocal_165[0]));
		func_454(474, 0, 1, 0, 0);
		iLocal_165[0] = 0;
	}
	if (func_455(&(iLocal_165[1]), iVar958))
	{
		func_1378(iLocal_165[1], "WORLD_HUMAN_WAITING_IMPATIENT", func_221(11, 8), 0, 60000);
		func_456(cParam0, &(iLocal_165[1]));
		func_457(iLocal_165[1], 1, 0, 1);
		iLocal_165[1] = 0;
	}
	if (func_455(&(iLocal_165[2]), iVar958))
	{
		func_1378(iLocal_165[2], "WORLD_HUMAN_WAITING_IMPATIENT", func_221(11, 9), 0, 60000);
		func_456(cParam0, &(iLocal_165[2]));
		func_457(iLocal_165[2], 1, 0, 1);
		iLocal_165[2] = 0;
	}
	func_183();
	func_182(0);
	func_1330(1);
	func_163();
	return cParam0->f_607 == cParam0->f_607;
}

bool func_791(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_792(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_793(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!func_952(cParam0, 0, 0, 1, 0, 0))
		{
			return false;
		}
	}
	func_134(cParam0, 0);
	func_135(cParam0, 0);
	func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_794(char[4] cParam0)
{
	func_1316(cParam0, 1);
	func_1377(cParam0);
	func_1379(cParam0);
	switch (func_1298(cParam0))
	{
		case 0:
			if (func_8(cParam0, 8) || (func_1322() || func_1358(cParam0, "MAR1_GOTO_RANCH", 6, 20f, 0)))
			{
				func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (func_1322() && func_1358(cParam0, "MAR1_PHR_DIR2", 0, 1f, 0))
			{
				func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 51);
			}
			break;
	}
	switch (func_1300(cParam0))
	{
		case 0:
			if (func_1324(5, 1097859072, 8))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_795(var uParam0)
{
	func_163();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_796(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_797(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (func_1380(func_1259(iVar0)))
		{
		}
		iVar0++;
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_798(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!func_952(cParam0, 0, 0, 1, 0, 0))
		{
			return false;
		}
	}
	func_134(cParam0, 0);
	func_135(cParam0, 0);
	func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_799(char[4] cParam0)
{
	func_1316(cParam0, 1);
	func_1377(cParam0);
	switch (func_1298(cParam0))
	{
		case 0:
			if (func_8(cParam0, 8) || (func_1322() || func_1358(cParam0, "MAR1_GOTO_RANCH", 6, 20f, 0)))
			{
				func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (func_1322() && func_1358(cParam0, "MAR1_PHR_DIR3", 0, 1f, 0))
			{
				func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 51);
			}
			break;
	}
	switch (func_1300(cParam0))
	{
		case 0:
			if (func_1324(6, 2f, 8))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_800(var uParam0)
{
	func_163();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_801(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_802(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_803(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!func_952(cParam0, 0, 0, 1, 0, 0))
		{
			return false;
		}
	}
	func_1381();
	func_134(cParam0, 0);
	func_135(cParam0, 0);
	func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_804(char[4] cParam0)
{
	func_1316(cParam0, 1);
	func_1377(cParam0);
	switch (func_1298(cParam0))
	{
		case 0:
			if (func_8(cParam0, 8) || (func_1322() || func_1358(cParam0, "MAR1_GOTO_RANCH", 6, 20f, 0)))
			{
				func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 51);
			}
			break;
	}
	func_1382(cParam0);
	switch (func_1300(cParam0))
	{
		case 0:
			if (func_1338(Global_35, func_385(14, 0), 200f, 1, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_805(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_806(var uParam0)
{
	func_1383();
	_0xc6dcc2a3a8825c85(1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_807(char[4] cParam0)
{
	if (!func_8(cParam0, 8) || func_120(cParam0, 4))
	{
		if (!func_952(cParam0, 1, 0, 1, 0, 0))
		{
			return 0;
		}
	}
	func_218(&uLocal_594);
	func_461(&uLocal_603);
	func_134(cParam0, 0);
	func_1384(cParam0, 1106247680, 1112014848);
	func_99(cParam0, 33554432);
	func_1367(cParam0);
	func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
	return 1;
}

int func_808(char[4] cParam0)
{
	switch (func_1298(cParam0))
	{
		case 0:
			if ((func_1322() && func_1323(Global_35, func_385(5, 1), *vLocal_668[8])) && func_1358(cParam0, "MAR1_PHR_DIR4", 0, 1f, 0))
			{
				func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if ((func_1338(Global_35, *vLocal_668[8], 20f, 1, 1) || func_1340(Global_35, &(iLocal_544[1]), 1, 0)) || func_1358(cParam0, "MAR1_GOTO_RANCH", 6, 20f, 0))
			{
				func_1307(cParam0, "MAR1_GOTO_RANCH", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, -1);
			}
			break;
	}
	func_1316(cParam0, 1);
	if (func_1300(cParam0) != 29)
	{
		func_1377(cParam0);
	}
	func_1385(cParam0, 0);
	func_1317(cParam0);
	func_1382(cParam0);
	func_1359(Global_35, func_385(5, 8), 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
	bVar0 = false;
	switch (func_1300(cParam0))
	{
		case 0:
			if (func_1382(cParam0))
			{
				set_ped_can_ragdoll_from_player_impact(&(uLocal_170[0]), false);
				func_1315(Local_304[0], 1, 1);
				func_1350(cParam0);
				func_388(cParam0);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_1386(Global_35, bVar536, 0))
			{
				func_1362(cParam0, 0, 0);
			}
			if (!_does_anim_scene_exist(&(uLocal_105[14])))
			{
				func_1387(&(cParam0->f_10792), uLocal_105[14]);
			}
			if ((func_1340(Global_35, &(iLocal_544[1]), 1, 0) && !func_1386(Global_35, bVar536, 0)) && _does_anim_scene_exist(&(uLocal_105[14])))
			{
				if (func_1388(&(uLocal_170[2]), Global_35, 0.5f) == 3)
				{
					bVar0 = true;
				}
				if (_does_anim_scene_exist(&(uLocal_105[15])))
				{
					if (iVar718 < 3 && (!func_26(&uLocal_603) || func_1343(&uLocal_603, 12f)))
					{
						if ((func_1349(&(uLocal_105[15]), func_1211(bVar0, "PL_LookReactLeft", "PL_LookReactFront"), 1) && !func_1390(func_1389(iVar718))) && func_1358(cParam0, func_1389(iVar718), 1, 0, 0))
						{
							func_1391(func_1389(iVar718), 1);
							if (iVar718 < 1 || iVar718 == 2)
							{
								iLocal_721 = iVar718 + 1;
							}
							func_218(&uLocal_603);
							func_1294(15);
							func_1295(&(uLocal_105[15]));
						}
					}
					else if (func_1392(&(uLocal_105[15]), "base"))
					{
						func_1294(14);
					}
				}
			}
			else if (iVar718 >= 1)
			{
				iLocal_721 = 2;
			}
			if (func_1386(Global_35, bVar536, 0) && (func_1393(cParam0, func_1357(cParam0, 0)) || func_1357(cParam0, 0)))
			{
				func_1344(&uLocal_539, 1082130432);
				func_1342(&uLocal_539, 0.05f, 1103626240);
				if (!func_1321(Global_35, -2118855366))
				{
					_hide_hud_component(iVar800);
					clear_ped_tasks_immediately(Global_35, false, true);
					set_player_control(get_player_index(), false, 256, false);
					task_vehicle_temp_action(Global_35, bVar536, 24, 1000);
				}
				func_1294(14);
				if (func_1357(cParam0, 0) || func_1394(&uLocal_645) >= 8f)
				{
					if (func_1394(&uLocal_645) < 8f)
					{
						func_1364(cParam0, 0);
					}
					else
					{
						func_1395(cParam0, "multistart");
						func_1396(cParam0);
					}
					func_1397(cParam0, 0f, 0f, 0f, 0, 0);
					if (iVar717 >= 14)
					{
						func_1341(9);
					}
					func_1353(&iLocal_541);
					func_218(&uLocal_603);
					func_134(cParam0, 29);
					return 1;
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_809(var uParam0)
{
	func_1398();
	func_1399(0);
	set_entity_load_collision_flag(&(uLocal_389[0]), 0);
	set_entity_load_collision_flag(&(uLocal_389[1]), 0);
	func_1400(&(uLocal_170[0]), -553176566, 1);
	func_1353(&iLocal_541);
	func_461(&uLocal_603);
	func_461(&uLocal_645);
	func_460(&uLocal_584, 2);
	func_460(&uLocal_584, 262144);
	func_460(&uLocal_584, 4194304);
	func_460(&uLocal_584, 65536);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_810(char[4] cParam0)
{
	func_1381();
	if (!func_1382(cParam0))
	{
		return false;
	}
	if (!func_1401())
	{
		return false;
	}
	func_1402(cParam0);
	_0xc6dcc2a3a8825c85(1);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_811(char[4] cParam0)
{
	func_1342(&uLocal_539, 0.05f, 1103626240);
	if (!func_1385(cParam0, 0))
	{
		return false;
	}
	_display_hud_component(iVar800);
	set_player_control(get_player_index(), true, 0, false);
	func_1403();
	func_1353(&iLocal_541);
	func_145(cParam0, &(uLocal_170[0]), "PHR_FOREMAN", 0);
	func_145(cParam0, &(uLocal_389[0]), "MAR1_OUTLAW_00", 0);
	func_145(cParam0, &(uLocal_389[1]), "MAR1_OUTLAW_01", 0);
	_set_entity_health(&(uLocal_170[0]), get_entity_max_health(&(uLocal_170[0]), false), 0);
	set_entity_invincible(&(uLocal_170[0]), true);
	func_1405(cParam0, &(uLocal_170[0]), 238506, 0, "MAR1_DICKENS", 67108863, 1023, 3, -1);
	func_1012(cParam0, &(uLocal_170[0]), 128);
	func_1374(&(uLocal_170[0]), 422991367, 1, 1);
	func_1406(cParam0, &(uLocal_170[0]), 1105014447, 422991367, 0, 1);
	iVar0 = get_blip_from_entity(&(uLocal_170[0]));
	if (does_blip_exist(iVar0))
	{
		set_blip_name_from_text_file(iVar0, "MAR1_DICKENS");
	}
	if (func_455(&(uLocal_389[0]), iVar957))
	{
		func_145(cParam0, &(uLocal_389[0]), "MAR1_OUTLAW_00", 0);
		remove_all_ped_weapons(&(uLocal_389[0]), true, true);
	}
	if (func_455(&(uLocal_389[1]), iVar957))
	{
		func_145(cParam0, &(uLocal_389[1]), "MAR1_OUTLAW_01", 0);
		remove_all_ped_weapons(&(uLocal_389[1]), true, true);
	}
	func_1350(cParam0);
	func_388(cParam0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_812(char[4] cParam0)
{
	if (!func_1401())
	{
		return false;
	}
	if (func_8(cParam0, 524288) || func_120(cParam0, 4))
	{
		func_837(Global_35, func_221(16, 19), 2, 1073741824);
		func_837(&(uLocal_170[0]), func_221(16, 20), 2, 1073741824);
		func_1407(cParam0, &uLocal_389, &Local_395, 0);
		set_ped_into_vehicle(&(uLocal_389[0]), iVar536, -1);
		set_ped_into_vehicle(&(uLocal_389[1]), iVar536, 0);
		func_1315(Local_395[0], 90, 1);
		func_1315(Local_395[1], 1, 1);
		func_1408(cParam0, uLocal_389[0], Local_395[0]);
		func_1409(cParam0, uLocal_389[1], Local_395[1]);
		func_934(0, 0);
		func_1294(16);
		func_1349(&(uLocal_105[16]), "pl_Laughing", 1);
		func_1295(&(uLocal_105[16]));
	}
	if ((func_855(Global_35, 1, 0, 0) == -1569615261 || func_855(Global_35, 1, 0, 0) == -618550132) && has_ped_got_weapon(Global_35, 2055893578, 0, false))
	{
		_0xcffc3eccd7a5cceb(get_player_index(), 2055893578, 0);
		set_current_ped_weapon(Global_35, 2055893578, false, 0, true, false);
	}
	func_1410(2048);
	set_entity_load_collision_flag(&(uLocal_389[0]), 0);
	set_entity_load_collision_flag(&(uLocal_389[1]), 0);
	_0xc325a6baa62cf8a2(iVar536, 1);
	_0xcbf88256e44d5d39(iVar536, 1);
	iLocal_811 = add_shocking_event_for_entity(-188263242, iVar536, 0f, 50f, 50f, 0f, 20f, 180f, false, false, -1, -1);
	func_1315(Local_304[0], 71, 1);
	func_1353(&iLocal_541);
	set_gps_multi_route_render(false);
	iLocal_541 = func_1411(-308585968, &(iLocal_544[26]), 1);
	if (iVar807 == 0)
	{
		iLocal_810 = add_cover_point(func_385(10, 16), func_1412(10, 16), 0, 0, 0, false);
	}
	func_218(&uLocal_618);
	func_145(cParam0, &(uLocal_170[0]), "RRCH1_Dickens", 0);
	if (!_0x7409669c5ed50144(-1392528840))
	{
		_0x7d654266025e921b(-1392528840);
	}
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_1341(5);
	func_227(Global_1935630, 262144);
	set_ped_config_flag(Global_35, 170, true);
	func_958(2);
	return cParam0->f_607 == cParam0->f_607;
}

int func_813(char[4] cParam0)
{
	switch (func_1298(cParam0))
	{
		case 0:
			if (func_1413(cParam0, "MAR1_HORSE", 0))
			{
				func_1353(&iLocal_541);
				func_1307(cParam0, "MAR1_LOST", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 10);
			}
			break;
		case 10:
			if (func_1358(cParam0, "MAR1_DNT_HURT", 0, 0, 0))
			{
				func_1353(&iLocal_541);
				func_1307(cParam0, "MAR1_LOST", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (func_1358(cParam0, "MAR1_LOST", 6, 2f, 0))
			{
				func_1307(cParam0, "MAR1_LOST", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 51);
			}
			break;
		case 2:
			if (is_ped_on_mount(Global_35))
			{
				func_27(&(cParam0->f_13106), 0);
			}
			else
			{
				func_461(&(cParam0->f_13106));
			}
			if ((func_918(Global_35, bVar536, 45f, 1) || func_1343(&(cParam0->f_13106), 8f)) && func_1358(cParam0, "MAR1_HLP_STP_WAGON", 8, 0, 0))
			{
				func_145(cParam0, &(uLocal_170[0]), "RRCH1_Dickens", 0);
				if (func_1358(cParam0, "MAR1_RUNAFTER", 0, 0, 0))
				{
					func_1307(cParam0, "MAR1_LOST", -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, 3);
				}
			}
			break;
		case 3:
			if (!func_1414(cParam0, bVar536, "WAGON_RET", "WAGON_FAIL", 150f, 200f, 0, 0, 1, 422991367, 1) && ((get_ped_in_vehicle_seat(bVar536, -1) == Global_35 || func_918(Global_35, bVar536, 15f, 1)) || func_1358(cParam0, "MAR1_LOST", 6, (20f * 2f), 0)))
			{
				func_1307(cParam0, "MAR1_LOST", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 4);
			}
			else if (func_1414(cParam0, bVar536, "WAGON_RET", "WAGON_FAIL", 150f, 200f, 0, 0, 1, 422991367, 1))
			{
				func_500(&(cParam0->f_13106), 25f);
			}
			break;
		case 4:
			if (!func_1415(&uLocal_389, iVar957) || ((!func_455(&(uLocal_389[0]), iVar957) || is_ped_fleeing(&(uLocal_389[0]))) && (!func_455(&(uLocal_389[1]), iVar957) || is_ped_fleeing(&(uLocal_389[1])))))
			{
				func_1307(cParam0, "MAR1_PHR_RETURN", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 6);
			}
			break;
		case 5:
			break;
		case 6:
			if (((func_1338(bVar536, *vLocal_668[8], 20f, 1, 1) || is_entity_in_volume(bVar536, &(iLocal_544[1]), true, 0)) || is_entity_in_volume(bVar536, &(iLocal_544[0]), true, 0)) || func_1358(cParam0, "MAR1_PHR_RETURN", 4, 3f, 0))
			{
				func_1307(cParam0, "MAR1_PHR_RETURN", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 51);
			}
			break;
	}
	if (func_1300(cParam0) > 0 || func_1343(&uLocal_618, 2.7f))
	{
		if (iVar658 == 0)
		{
			func_172(1);
			iLocal_661 = 1;
		}
		if (iVar658 == 1 && func_938(cParam0))
		{
			if (!func_952(cParam0, 0, 0, 1, 0, 1))
			{
			}
		}
	}
	func_1317(cParam0);
	func_1416();
	if (func_1417())
	{
		func_1418(cParam0, uLocal_170[2], Local_304[2]);
	}
	switch (func_1300(cParam0))
	{
		case 0:
			func_1316(cParam0, 1);
			if (is_ped_on_mount(Global_35))
			{
				func_1353(&iLocal_541);
				iLocal_541 = func_1374(bVar536, 408396114, 1, 1);
				bLocal_160 = get_mount(Global_35);
				func_135(cParam0, 2);
				func_134(cParam0, 1);
			}
			if (!func_455(&(uLocal_389[0]), iVar957) || func_1419(cParam0, 6))
			{
				func_1353(&iLocal_541);
				iLocal_541 = func_1374(bVar536, 408396114, 1, 1);
				func_135(cParam0, 3);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			func_1316(cParam0, 1);
			if ((!func_1415(&uLocal_389, iVar957) || (!func_1386(&(uLocal_389[0]), bVar536, 0) && !func_1386(&(uLocal_389[1]), bVar536, 0))) && get_ped_config_flag(Global_35, 65, true) == 1)
			{
				set_ped_config_flag(Global_35, 65, false);
			}
			if (func_1419(cParam0, 11))
			{
				if (func_455(&(uLocal_389[0]), 0) && get_ped_config_flag(&(uLocal_389[0]), 2, true) == 1)
				{
					set_ped_config_flag(&(uLocal_389[0]), 2, false);
				}
				if (func_455(&(uLocal_389[1]), 0) && get_ped_config_flag(&(uLocal_389[1]), 2, true) == 1)
				{
					set_ped_config_flag(&(uLocal_389[1]), 2, false);
				}
			}
			if (is_ped_on_mount(Global_35))
			{
				bLocal_160 = get_mount(Global_35);
			}
			if (func_1419(cParam0, 6))
			{
				func_1420();
				if (func_455(bLocal_160, 0) && !is_ped_on_mount(Global_35))
				{
					open_sequence_task(&uLocal_481);
					task_smart_flee_coord(0, get_entity_coords(bVar536, true, false), 15f, 30000, 16, 1f);
					task_animal_unalerted(0, -1, 0, 0, 0);
					close_sequence_task(iVar478);
					task_perform_sequence(bLocal_160, iVar478);
					clear_sequence_task(&uLocal_481);
				}
				if (get_ped_config_flag(Global_35, 65, true) == 1)
				{
					set_ped_config_flag(Global_35, 65, false);
				}
				remove_shocking_event(iVar808);
				func_1421();
				_0xbc90bdf4e5228ea1();
				_0x0c6b89876262a99d(get_player_index(), bVar536);
				use_waypoint_recording_as_assisted_movement_route("mar1_outlaw_wagon_escape", 0, 1f, 0.5f, 1);
				func_71(Global_1935630, 262144);
				func_1307(cParam0, "MAR1_PHR_RETURN", -1082130432, 0, 0, -1, -1, 0);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			if (!func_1419(cParam0, 7) && ((!func_1415(&uLocal_389, iVar957) || ((!func_455(&(uLocal_389[0]), 0) || (is_ped_on_mount(&(uLocal_389[0])) && !func_918(&(uLocal_389[0]), Global_35, 30f, 1))) && (!func_455(&(uLocal_389[1]), 0) || (is_ped_on_mount(&(uLocal_389[1])) && !func_918(&(uLocal_389[1]), Global_35, 30f, 1))))) || ((func_1340(Global_35, &(iLocal_544[2]), 1, 0) || func_1340(Global_35, &(iLocal_544[1]), 1, 0)) && func_1386(Global_35, bVar536, 0))))
			{
				func_1341(7);
			}
			if (func_1419(cParam0, 7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_814(char[4] cParam0)
{
	func_1422(cParam0);
	func_1423(cParam0);
	func_1353(&iLocal_541);
	set_ped_config_flag(Global_35, 170, false);
	if (func_455(&(uLocal_389[0]), iVar957))
	{
		set_entity_load_collision_flag(&(uLocal_389[0]), 0);
	}
	if (func_455(&(uLocal_389[1]), iVar957))
	{
		set_entity_load_collision_flag(&(uLocal_389[1]), 0);
	}
	func_179();
	func_175(2);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_815(var uParam0)
{
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_816(char[4] cParam0)
{
	if (!func_1424(uLocal_170[2], func_453(2), 22))
	{
		return false;
	}
	func_837(&(uLocal_170[2]), func_221(16, 6), 2, 1073741824);
	func_1315(Local_304[2], 1, 1);
	func_1425(&(uLocal_170[2]));
	set_ped_can_ragdoll_from_player_impact(&(uLocal_170[0]), false);
	set_ped_can_ragdoll_from_player_impact(&(uLocal_170[2]), false);
	func_1426();
	func_27(&uLocal_618, 0);
	func_1307(cParam0, "MAR1_PHR_RETURN", -1082130432, 0, 0, -1, -1, 0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_817(char[4] cParam0)
{
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_1307(cParam0, "MAR1_PHR_RETURN", -1082130432, 0, 0, -1, -1, 0);
	if (iVar807 == 0)
	{
		iLocal_810 = add_cover_point(func_385(10, 16), func_1412(10, 16), 0, 0, 0, false);
	}
	func_99(cParam0, 33554432);
	func_140(cParam0, func_33(cParam0), 65536);
	func_1367(cParam0);
	func_1333(cParam0, "multistart");
	func_461(&uLocal_603);
	return cParam0->f_607 == cParam0->f_607;
}

int func_818(char[4] cParam0)
{
	func_1316(cParam0, 1);
	switch (func_1298(cParam0))
	{
		case 0:
			if (((func_1338(bVar536, *vLocal_668[8], 20f, 1, 1) || is_entity_in_volume(bVar536, &(iLocal_544[1]), true, 0)) || is_entity_in_volume(bVar536, &(iLocal_544[0]), true, 0)) || func_1358(cParam0, "MAR1_PHR_RETURN", 6, func_1427(!func_8(cParam0, 8), 0f, 2f), 0))
			{
				func_1421();
				func_1307(cParam0, "MAR1_PHR_RETURN", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			func_1428(cParam0, 0);
			if (func_1429(cParam0) > 2f && !func_1430("MAR1_PHR_RETURN", 0, 0, -1, -1, 0))
			{
				func_1307(cParam0, "MAR1_PHR_RETURN", -1082130432, 0, 0, -1, -1, 0);
			}
			break;
	}
	func_1317(cParam0);
	func_1418(cParam0, uLocal_170[2], Local_304[2]);
	func_1359(Global_35, func_385(5, 8), 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
	if (!func_8(cParam0, 8) || func_120(cParam0, 4))
	{
		func_1377(cParam0);
	}
	_0x513f8aa5bf2f17cf(func_385(6, 0), 40f, 5);
	bVar0 = false;
	switch (func_1300(cParam0))
	{
		case 0:
			func_1350(cParam0);
			func_388(cParam0);
			func_134(cParam0, 1);
			break;
		case 1:
			if (func_1386(Global_35, bVar536, 0))
			{
				func_1362(cParam0, 0, 0);
			}
			if (!_does_anim_scene_exist(&(uLocal_105[20])))
			{
				func_1387(&(cParam0->f_10792), uLocal_105[20]);
			}
			if ((func_1340(Global_35, &(iLocal_544[1]), 1, 0) && !func_1386(Global_35, bVar536, 0)) && _does_anim_scene_exist(&(uLocal_105[20])))
			{
				if (func_1388(&(uLocal_170[2]), Global_35, 0.5f) == 3)
				{
					bVar0 = true;
				}
				if (_does_anim_scene_exist(&(uLocal_105[21])))
				{
					if (!func_26(&uLocal_603) || func_1343(&uLocal_603, 12f))
					{
						if (func_1349(&(uLocal_105[21]), func_1211(bVar0, "pl_lookreactleft", "pl_lookreactfront"), 1) && func_1358(cParam0, "MAR1_NO_WAGON", 1, 0, 0))
						{
							func_218(&uLocal_603);
							func_1294(21);
							func_1295(&(uLocal_105[21]));
						}
					}
					else if (func_1392(&(uLocal_105[21]), "s_Base"))
					{
						func_1294(20);
					}
				}
			}
			else if (func_1340(Global_35, &(iLocal_544[2]), 1, 0) && func_1386(Global_35, bVar536, 0))
			{
				if (!func_1390("MAR1_CALL") && func_1358(cParam0, "MAR1_CALL", 1, 0, 0))
				{
					func_1391("MAR1_CALL", 1);
				}
			}
			if (func_1386(Global_35, bVar536, 0) && (func_1393(cParam0, func_1362(cParam0, 0, 0)) || func_1357(cParam0, 0)))
			{
				func_1344(&uLocal_539, 1082130432);
				func_1342(&uLocal_539, 0.25f, 1103626240);
				if (is_player_control_on(get_player_index()))
				{
					_hide_hud_component(iVar800);
					clear_ped_tasks_immediately(Global_35, false, true);
					set_player_control(get_player_index(), false, 256, false);
					task_vehicle_temp_action(Global_35, bVar536, 24, 1000);
				}
				func_1294(20);
				if (func_1357(cParam0, 0) || func_1394(&uLocal_645) >= 8f)
				{
					if (func_1394(&uLocal_645) < 8f)
					{
						func_1364(cParam0, 0);
					}
					else
					{
						func_1395(cParam0, "multistart");
						func_1396(cParam0);
					}
					func_1397(cParam0, 0f, 0f, 0f, 0, 0);
					func_1341(10);
					func_1353(&iLocal_541);
					func_218(&uLocal_603);
					func_1422(cParam0);
					set_vehicle_is_considered_by_player(bVar536, false);
					func_134(cParam0, 29);
					return 1;
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_819(var uParam0)
{
	if (!is_ped_in_any_vehicle(Global_35, false))
	{
		set_player_control(get_player_index(), true, 0, false);
		_display_hud_component(iVar800);
	}
	else
	{
		_hide_hud_component(iVar800);
		set_player_control(get_player_index(), false, 256, false);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_820(var uParam0)
{
	func_837(Global_35, func_221(6, 4), 2, 1073741824);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_821(char[4] cParam0)
{
	func_1431();
	func_1432();
	func_1344(&uLocal_539, 1082130432);
	func_1342(&uLocal_539, 0.25f, 1103626240);
	_0xb958d97a0dfaa0c2("ChapterTitle_IntroCh08Epi01");
	if (!func_1424(uLocal_170[2], func_453(2), 22))
	{
		return false;
	}
	func_1425(&(uLocal_170[2]));
	func_1315(Local_304[2], 1, 1);
	_hide_hud_component(iVar801);
	set_player_control(get_player_index(), false, 256, false);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_45();
	func_1350(cParam0);
	func_388(cParam0);
	set_entity_no_collision_entity(&(iLocal_501[2]), iVar536, false);
	set_entity_no_collision_entity(&(iLocal_501[3]), iVar536, false);
	set_entity_no_collision_entity(&(iLocal_501[4]), iVar536, false);
	if (func_8(cParam0, 8))
	{
		func_99(cParam0, 33554432);
		func_140(cParam0, func_33(cParam0), 65536);
		func_1367(cParam0);
		func_1333(cParam0, "multistart");
		func_1433(cParam0, "multistart");
		if (_does_anim_scene_exist(cParam0->f_7375.f_804) && func_1434(cParam0->f_7375.f_804, "multistart"))
		{
			func_1395(cParam0, "multistart");
		}
	}
	func_184(883);
	func_184(884);
	func_177(0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_822(char[4] cParam0)
{
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	func_184(883);
	func_184(884);
	func_177(1);
	func_1435(cParam0);
	if (!func_1436(uLocal_105[19], func_416(19), 0, "pl_IG_ChapterTitleOutro_Exit"))
	{
		if (is_screen_faded_in() || is_screen_fading_in())
		{
			do_screen_fade_out(0);
		}
		return false;
	}
	func_1432();
	func_1437(Global_35, 73, 1, 1, 0);
	func_1292();
	_hide_hud_component(iVar801);
	set_player_control(get_player_index(), false, 256, false);
	if ((!_0xfbf161fcfec8589e("ChapterTitle_IntroCh08Epi01", 2, 0, &uVar0) || _0xfbf161fcfec8589e("ChapterTitle_IntroCh08Epi01", 1, 0, &uVar0)) || func_1438(cParam0, 512))
	{
		if (func_8(cParam0, 524288))
		{
			if (is_screen_faded_in() || is_screen_fading_in())
			{
				do_screen_fade_out(0);
			}
		}
		return false;
	}
	func_176(cParam0);
	set_clock_time(6, 30, 0);
	_set_weather_type(1500834021, true, false, false, 0f, false);
	if (is_screen_faded_out() || is_screen_fading_out())
	{
		do_screen_fade_in(1000);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (does_entity_exist(&(uLocal_389[iVar1])))
		{
			func_458(uLocal_389[iVar1]);
		}
		iVar1++;
	}
	_0xa201a3d0ac087c37("ChapterTitle_IntroCh08Epi01");
	_hide_hud_component(iVar801);
	func_1293(&Global_35);
	func_1294(19);
	func_1349(&(uLocal_105[19]), "pl_IG_ChapterTitleOutro_Exit", 1);
	func_1295(&(uLocal_105[19]));
	_0x9428447ded71fc7e("Chapter_Screen_Scenes");
	func_1329(-1899662469, 0, 0f, 0, 1, 0, 0, 0);
	func_134(cParam0, 0);
	func_1353(&iLocal_541);
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	func_1439();
	return cParam0->f_607 == cParam0->f_607;
}

int func_823(char[4] cParam0)
{
	switch (func_1298(cParam0))
	{
		case 0:
			if (func_1338(Global_35, func_385(6, 3), 6f, 1, 1))
			{
				func_135(cParam0, -1);
			}
			break;
	}
	func_1292();
	switch (func_1300(cParam0))
	{
		case 0:
			func_1432();
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (func_1301(&(uLocal_105[19]), -1082130432))
			{
				set_player_control(get_player_index(), true, 0, false);
				_display_hud_component(iVar801);
				func_1345(&uLocal_539);
				func_1353(&iLocal_541);
				func_135(cParam0, -1);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_824(var uParam0)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_45();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_825(var uParam0)
{
	set_clock_time(6, 30, 0);
	_set_weather_type(1500834021, true, false, false, 0f, false);
	func_837(Global_35, func_221(6, 4), 2, 1073741824);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_826(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_827(char[4] cParam0)
{
	func_171(cParam0);
	func_1432();
	func_172(0);
	func_462(iLocal_501[2]);
	func_462(iLocal_501[3]);
	func_462(iLocal_501[4]);
	func_1329(-1899662469, 0, 0f, 0, 1, 0, 0, 0);
	func_134(cParam0, 0);
	func_1353(&iLocal_541);
	set_player_control(get_player_index(), true, 0, false);
	_display_hud_component(iVar800);
	_0xd4b614179bcd0654(_0x112ddf56300bc6e5(708233372));
	_0xd4b614179bcd0654(_0x112ddf56300bc6e5(-662428360));
	_0xd4b614179bcd0654(_0x112ddf56300bc6e5(-1140790226));
	_0xd4b614179bcd0654(_0x112ddf56300bc6e5(-1438431053));
	_0xd4b614179bcd0654(_0x112ddf56300bc6e5(-1588250921));
	return cParam0->f_607 == cParam0->f_607;
}

int func_828(char[4] cParam0)
{
	switch (func_1300(cParam0))
	{
		case 0:
			return 1;
		case 1:
			if (((((is_control_pressed(0, 1301263553) || is_control_pressed(0, -39308912)) || is_control_pressed(0, -1882188328)) || is_control_pressed(0, -763919645)) || is_control_pressed(0, 1885667965)) || is_control_pressed(0, -1260100172))
			{
				func_974(cParam0);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (func_1349(&(uLocal_105[12]), "pl_IG12_WAKE_Exit", 1))
			{
				func_974(cParam0);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			if (func_1301(&(uLocal_105[12]), -1082130432))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_829(char[4] cParam0)
{
	func_456(cParam0, &(uLocal_170[0]));
	if (func_455(&(uLocal_170[0]), 0))
	{
		func_454(func_453(0), 1, 1, 0, 0);
	}
	if (func_455(&(uLocal_170[2]), 0))
	{
		func_454(func_453(2), 1, 1, 0, 0);
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_45();
	func_172(0);
	func_462(iLocal_501[2]);
	func_462(iLocal_501[3]);
	func_462(iLocal_501[4]);
	return cParam0->f_607 == cParam0->f_607;
}

Vector3 func_830(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1754.383f, 93.3634f, 157.002f;
				case 1:
					return -1758.966f, 91.8824f, 159.1899f;
				case 2:
					return -1750.134f, 78.5442f, 157.2546f;
				case 3:
					return -1723.877f, 11.6295f, 159.1581f;
				case 4:
					return -1445.06f, 328.0921f, 97.3387f;
				case 5:
					return -1749.615f, 341.1979f, 109.8134f;
				case 6:
					return -1739.105f, 61.211f, 155.0122f;
				case 7:
					return -1801.967f, -252.0811f, 178.8384f;
				case 8:
					return -1795.005f, -359.6993f, 162.2245f;
				case 9:
					return -2724.218f, 542.7889f, 198.2806f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1804.689f, -383.1339f, 160.5867f;
				case 1:
					return -1805.057f, -380.3111f, 160.1999f;
				case 2:
					return -1805.48f, -381.1086f, 162.8367f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2251.751f, -418.8086f, 159.9759f;
				case 1:
					return -2251.254f, -418.9276f, 159.622f;
				case 2:
					return -2252.829f, -419.0184f, 159.3515f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -2756.745f, -214.799f, 149.1959f;
				case 1:
					return -2756.592f, -214.933f, 149.2652f;
				case 2:
					return -2760.5f, -205.2642f, 149.2333f;
				case 3:
					return -2595.186f, -268.5782f, 165.2682f;
				case 4:
					return -2640.339f, -231.069f, 164.0182f;
				case 5:
					return -2320.843f, -318.1846f, 155.5715f;
				case 6:
					return -2477.543f, -288.7696f, 153.0038f;
				case 7:
					return -2656.155f, 97.411f, 164.7682f;
				case 8:
					return -2592.642f, 108.5605f, 165.2682f;
				case 9:
					return -2674.348f, 80.7261f, 162.0182f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2710.218f, 36.5786f, 161.8262f;
				case 1:
					return -2710.177f, 36.5247f, 161.6447f;
				case 2:
					return -2720.604f, 26.3655f, 161.601f;
				case 3:
					return -2755.831f, -6.1955f, 155.1343f;
				case 4:
					return -2755.361f, -11.1972f, 155.2195f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -2573.605f, 367.3811f, 149.7556f;
				case 1:
					return -2663.688f, 254.4349f, 150.0674f;
				case 2:
					return -2663.368f, 255.1334f, 149.421f;
				case 3:
					return -2598.877f, 412.5681f, 148.317f;
				case 4:
					return -2599.04f, 414.7952f, 148.317f;
				case 5:
					return -2614.895f, 397.1221f, 145.7419f;
				case 6:
					return -2609.44f, 395.5482f, 146.7099f;
				case 7:
					return -2599.6f, 388.5984f, 147.9569f;
				case 8:
					return -2570.761f, 362.2502f, 149.7368f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -2572.271f, 358.8523f, 150.2961f;
				case 1:
					return -2568.204f, 354.146f, 150.7175f;
				case 2:
					return -2594.043f, 569.5811f, 142.6309f;
				case 3:
					return -2592.813f, 457.3676f, 146.4973f;
				case 4:
					return -2590.305f, 457.1536f, 145.7725f;
				case 5:
					return -2581.736f, 356.9493f, 149.9835f;
				case 6:
					return -2585.809f, 408.7609f, 147.9659f;
				case 7:
					return -2584.702f, 410.5939f, 147.9722f;
				case 8:
					return -2585.118f, 409.5953f, 147.9588f;
				case 9:
					return -2583.395f, 409.1523f, 147.9729f;
				case 10:
					return -2584.068f, 410.1766f, 147.925f;
				case 11:
					return -2572.251f, 378.5712f, 149.3712f;
				case 12:
					return -2576.929f, 452.8764f, 145.379f;
				case 13:
					return -2589.843f, 457.0131f, 146.5842f;
				case 14:
					return -2587.794f, 456.5411f, 146.5616f;
				case 15:
					return -2593.437f, 457.2355f, 147.0616f;
				case 16:
					return -2587.219f, 459.4001f, 145.3469f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1802.93f, -375.8904f, 160.7221f;
				case 1:
					return -1795.185f, -382.338f, 159.3449f;
				case 2:
					return -1804.759f, -379.1375f, 162.4253f;
				case 3:
					return -1805.306f, -379.4716f, 160.4253f;
				case 4:
					return -1804.827f, -427.6983f, 158.2881f;
				case 5:
					return -1779.328f, -383.0702f, 156.8909f;
				case 6:
					return -1802.642f, -378.533f, 160.5302f;
				case 7:
					return -1806.344f, -378.8119f, 160.5102f;
				case 8:
					return -1806.629f, -377.7364f, 160.5682f;
				case 9:
					return -1815.105f, -394.4346f, 161.0986f;
				case 10:
					return -1794.435f, -381.7394f, 159.3145f;
				case 11:
					return -1795.073f, -384.6385f, 159.5787f;
				case 12:
					return -1805.903f, -427.1907f, 158.3065f;
				case 13:
					return -1790.519f, -387.3543f, 160.4147f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -2577.551f, 350.2164f, 150.8414f;
				case 1:
					return -2561.619f, 349.8036f, 150.5914f;
				case 2:
					return -2573.248f, 351.3814f, 150.7003f;
				case 3:
					return -2563.426f, 358.7567f, 150.8491f;
				case 4:
					return -2569.701f, 363.0588f, 149.498f;
				case 5:
					return -2566.666f, 369.5925f, 150.4133f;
				case 6:
					return -2568.075f, 354.0964f, 150.9829f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -2594.875f, 448.6356f, 146.3858f;
				case 1:
					return -2538.144f, 421.9789f, 147.3749f;
				case 2:
					return -2524.61f, 525.722f, 142.3213f;
				case 3:
					return -2513.437f, 443.238f, 147.674f;
				case 4:
					return -2581.611f, 377.2495f, 148.8281f;
				case 5:
					return -2566.992f, 377.8289f, 149.4229f;
				case 6:
					return -2578.877f, 419.3579f, 148.8642f;
				case 7:
					return -2564.208f, 413.1745f, 148.1347f;
				case 8:
					return -2587.279f, 389.6666f, 148.6994f;
				case 9:
					return -2566.888f, 414.8984f, 148.6779f;
				case 10:
					return -2560.43f, 406.3178f, 147.6358f;
				case 11:
					return -2560.648f, 410.039f, 147.89f;
				case 12:
					return -2579.204f, 419.9505f, 149.0806f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -2561.259f, 382.3611f, 148.9481f;
				case 1:
					return -2561.054f, 365.9668f, 150.5938f;
				case 2:
					return -2566.154f, 372.4891f, 149.8438f;
				case 3:
					return -2577.26f, 375.1743f, 148.9766f;
				case 4:
					return -2582.13f, 365.5098f, 149.5783f;
				case 5:
					return -2561.215f, 395.8308f, 147.3885f;
				case 6:
					return -2553.519f, 399.3919f, 147.6388f;
				case 7:
					return -2542.066f, 400.1807f, 147.3888f;
				case 8:
					return -2579.015f, 419.9363f, 148.736f;
				case 9:
					return -2570.11f, 334.7072f, 150.4675f;
				case 10:
					return -2569.965f, 354.1338f, 150.4675f;
				case 11:
					return -2580.838f, 344.0496f, 150.4675f;
				case 12:
					return -2569.84f, 370.1966f, 150.0121f;
				case 13:
					return -2574.343f, 388.8728f, 149.0989f;
				case 14:
					return -2550.301f, 399.3481f, 147.7722f;
				case 15:
					return -2577.961f, 417.4316f, 148.0763f;
				case 16:
					return -2568.065f, 354.3762f, 150.9675f;
				case 17:
					return -2573.141f, 354.3342f, 150.7175f;
				case 18:
					return -2584.551f, 359.8566f, 150.184f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -1802.822f, -431.404f, 157.8148f;
				case 1:
					return -1804.348f, -430.883f, 157.8148f;
				case 2:
					return -1805.057f, -380.3111f, 160.4499f;
				case 3:
					return -1797.819f, -380.9203f, 159.5768f;
				case 4:
					return -1797.697f, -380.8463f, 160.4253f;
				case 5:
					return -1802.492f, -428.3995f, 158.372f;
				case 6:
					return -1802.112f, -429.3925f, 157.815f;
				case 7:
					return -1789.661f, -387.7254f, 159.3286f;
				case 8:
					return -1789.37f, -385.567f, 159.3286f;
				case 9:
					return -1791.18f, -386.6312f, 159.5822f;
				case 10:
					return -1795.547f, -431.0735f, 155.1663f;
				case 11:
					return -1803.636f, -421.0915f, 156.8771f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -2568.21f, 354.1677f, 150.6753f;
				case 1:
					return -2574.016f, 384.1995f, 150.4253f;
				case 2:
					return -2573.891f, 383.9568f, 149.4253f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1803.942f, -430.0223f, 158.1753f;
				case 1:
					return -1803.349f, -431.4811f, 158.4253f;
				case 2:
					return -1804.704f, -426.3156f, 158.0922f;
				case 3:
					return -1805.057f, -380.3111f, 160.1999f;
				case 4:
					return -1805.006f, -426.3006f, 159.9253f;
				case 5:
					return -1802.398f, -428.4153f, 158.1871f;
				case 6:
					return -1796.497f, -379.4929f, 159.8411f;
				case 7:
					return -1789.693f, -381.9684f, 159.6215f;
				case 8:
					return -1808.509f, -383.1137f, 160.8588f;
				case 9:
					return -1802.538f, -374.7675f, 160.8588f;
				case 10:
					return -1823.147f, -406.4193f, 160.3588f;
				case 11:
					return -1786.665f, -378.9066f, 158.6088f;
				case 12:
					return -1803.272f, -428.3282f, 157.8447f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -2573.218f, 355.0271f, 152.6638f;
				case 1:
					return -2571.295f, 357.1899f, 149.8769f;
				case 2:
					return -2558.119f, 377.2539f, 150.2927f;
				case 3:
					return -2558.719f, 376.1324f, 150.3482f;
				case 4:
					return -2573.313f, 421.2268f, 148.036f;
				case 5:
					return -2555.985f, 377.5987f, 149.7402f;
				case 6:
					return -2564.793f, 449.3723f, 145.3003f;
				case 7:
					return -2567.413f, 453.9445f, 145.2428f;
				case 8:
					return -2562.747f, 454.7972f, 144.9193f;
				case 9:
					return -2575.386f, 459.969f, 145.6232f;
				case 10:
					return -2569.073f, 433.3567f, 147.3359f;
				case 11:
					return -2571.753f, 432.0218f, 147.1095f;
				case 12:
					return -2575.452f, 431.0793f, 147.6077f;
				case 13:
					return -2515.229f, 567.6675f, 139.1893f;
				case 14:
					return -2523.97f, 566.5925f, 140.2672f;
				case 15:
					return -2525.4f, 571.6852f, 139.8266f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return -1655.502f, -236.4703f, 162.7061f;
				case 1:
					return -1655.57f, -236.273f, 163.1085f;
				case 2:
					return -1654.155f, -258.8403f, 165.0683f;
				case 3:
					return -1815.397f, -256.0692f, 178.6676f;
				case 4:
					return -1727.002f, -417.1491f, 154.3488f;
				case 5:
					return -1694.189f, -272.3023f, 173.0433f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -2563.143f, 358.278f, 150.1398f;
				case 1:
					return -2577.758f, 385.7271f, 149.0392f;
				case 2:
					return -2581.563f, 384.9322f, 148.4977f;
				case 3:
					return -2579.006f, 386.0814f, 148.5619f;
				case 4:
					return -2572.109f, 365.5498f, 149.6958f;
				case 5:
					return -2574.443f, 367.2733f, 149.9545f;
				case 6:
					return -2599.352f, 411.1587f, 149.317f;
				case 7:
					return -2600.115f, 412.6425f, 148.3168f;
				case 8:
					return -2584.361f, 392.6443f, 150.8799f;
				case 9:
					return -2588.044f, 390.2245f, 150.5224f;
				case 10:
					return -2584.177f, 388.4385f, 148.7325f;
				case 11:
					return -2584.172f, 386.0493f, 148.3746f;
				case 12:
					return -2583.207f, 386.782f, 148.6931f;
				case 13:
					return -2580.844f, 389.6041f, 148.9724f;
				case 14:
					return -2551.161f, 402.5041f, 148.6262f;
				case 15:
					return -2200.716f, 736.3836f, 122.2248f;
				case 16:
					return -2687.076f, -327.7219f, 149.479f;
				case 17:
					return -2531.356f, 623.4544f, 140.3902f;
				case 18:
					return -2620.494f, 394.0274f, 144.7915f;
				case 19:
					return -2573.507f, 366.9514f, 150.2986f;
				case 20:
					return -2575.158f, 367.692f, 149.1783f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return -2600.765f, 492.7263f, 143.7344f;
				case 1:
					return -2527.893f, 529.4502f, 141.3401f;
				case 2:
					return -2634.579f, 542.9888f, 149.0776f;
				case 3:
					return -2632.374f, 388.6637f, 146.5163f;
				case 4:
					return -2616.396f, 309.324f, 146.6194f;
				case 5:
					return -2512.546f, 295.5202f, 157.4537f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return -2600.492f, 494.994f, 143.3837f;
				case 1:
					return -2526.818f, 528.7148f, 141.3351f;
				case 2:
					return -2633.392f, 543.7025f, 148.412f;
				case 3:
					return -2630.639f, 389.9205f, 146.2811f;
				case 4:
					return -2615.576f, 308.1949f, 146.4182f;
				case 5:
					return -2513.416f, 294.47f, 156.7598f;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return -2601.844f, 489.1718f, 143.7159f;
				case 1:
					return -2527.506f, 531.3837f, 141.2664f;
				case 2:
					return -2634.822f, 541.7157f, 148.8f;
				case 3:
					return -2631.532f, 387.8759f, 146.5311f;
				case 4:
					return -2616.873f, 310.0347f, 146.3806f;
				case 5:
					return -2510.973f, 296.8677f, 157.3002f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_831(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, var uParam7)
{
	if (iVar654 == 0)
	{
		request_model(iParam5, false);
		request_model(iParam6, false);
		iLocal_664 = 1;
	}
	if (iVar655 == 0)
	{
		if (!has_model_loaded(iParam5) || !has_model_loaded(iParam6))
		{
			return false;
		}
		iLocal_665 = 1;
	}
	if (!does_entity_exist(*uParam0))
	{
		*uParam0 = create_vehicle(iParam5, vParam1, fParam4, true, true, true, false);
	}
	else if (!func_455(*uParam7, 0))
	{
		*uParam7 = func_1440(iParam6, vParam1, fParam4, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0);
		_set_ped_body_component(*uParam7, -937613161);
		_update_ped_variation(*uParam7, false, true, true, true, false);
		_0x9587913b9e772d29(*uParam0, 0);
		_0x9587913b9e772d29(*uParam7, 0);
		_0x316cdb5b6e8f4110(*uParam7, *uParam0, 0);
	}
	else if (func_455(*uParam7, 0))
	{
		if (_0x316cdb5b6e8f4110(*uParam7, *uParam0, 0))
		{
			if (_0xddbea5506c848227(*uParam0))
			{
			}
			else if (func_832(*uParam0))
			{
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_832(bool bParam0)
{
	if (does_entity_exist(bParam0))
	{
		if (is_entity_dead(bParam0))
		{
			return true;
		}
		else if (!is_vehicle_driveable(bParam0, false, false))
		{
			if (!is_entity_on_fire(bParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_833()
{
	if (!func_390(iVar582, 131072))
	{
		_0xd80faf919a2e56ea(uVar537, uVar729);
		func_1441(&uLocal_584, 131072);
	}
	if (iVar804 == 0)
	{
		if (_0x53784cea0159439b(uVar537))
		{
			iLocal_806 = _0xce2acd6f602803e5(uVar537);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_834()
{
	if (!func_455(bVar538, 0))
	{
		iLocal_540 = func_1442(iVar537, 0);
	}
}

void func_835(bool bParam0)
{
	if (func_832(bVar536))
	{
		return;
	}
	func_834();
	if (!func_455(bVar537, 0))
	{
		return;
	}
	if (bParam0)
	{
		_0xa3db37edf9a74635(get_player_index(), bVar537, 10, 0, 1);
	}
	else
	{
		_0x9073ec5456651a90(get_player_index(), bVar537);
	}
}

void func_836(int iParam0)
{
	if (func_832(bVar536))
	{
		return;
	}
	func_834();
	if (!func_455(bVar537, 0))
	{
		return;
	}
	_set_attribute_core_value(bVar537, 1, iParam0);
}

void func_837(bool bParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_923(bParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_838(char[4] cParam0, bool bParam1, char* sParam2, int iParam3, int iParam4)
{
	if (!func_455(bParam1, 0))
	{
		return;
	}
	func_839(cParam0, bParam1, sParam2, iParam3, iParam4, 0, 0);
}

void func_839(char[4] cParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	func_426(cParam0, bParam1, sParam2, iParam3, iParam4, bParam5, bParam6);
}

void func_840(char[4] cParam0, bool bParam1, char* sParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	func_377(&(cParam0->f_10792), bParam1, sParam2, 0);
}

bool func_841(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_842(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_843(var uParam0)
{
	return uParam0->f_862;
}

void func_844(var uParam0)
{
	if (func_1443(&iVar0))
	{
		if (func_579(iVar0, 0))
		{
			if (func_603(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_631(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_579(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_845(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1444(-1);
	}
	func_1445(1);
	set_entity_invincible(Global_35, true);
	if (!func_842(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_842(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_842(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_842(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_842(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_842(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_842(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_842(*iParam0, 4) && !func_842(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_842(*iParam0, 2048))
	{
		func_857(0, 0);
	}
	if (func_842(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_842(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_842(*iParam0, 8192))
	{
		func_1446();
	}
	if (!func_842(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_842(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_842(*iParam0, 1024))
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
		if (!func_842(*iParam0, 16))
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
						if (func_1447() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_395(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1448(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1449(2);
						func_1450(-1);
						func_1451(vVar3);
						func_1453(func_1452());
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
	if (!func_842(*iParam0, 4096))
	{
		func_1454(Global_35);
	}
	if (!func_842(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_842(*iParam0, 2097152))
	{
		if (func_1455() || _0x50f124e6ef188b22(Global_35))
		{
			func_1456(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_846(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_847(var uParam0)
{
	if (func_841(uParam0, 2048) && !func_395(func_1457(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		bVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(bVar1) && ((bVar0 && is_entity_in_volume(bVar1, uParam0->f_4, true, 0)) || func_841(uParam0, -2147483648))) && get_mount(Global_35) != bVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(bVar1))
			{
				iVar2 |= 32;
			}
			func_923(bVar1, func_1457(uParam0), func_1458(uParam0), iVar2, 1073741824);
		}
		bVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(bVar3) && ((bVar0 && is_entity_in_volume(bVar3, uParam0->f_4, true, 0)) || func_841(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, bVar3, true))
		{
			func_923(bVar3, func_1457(uParam0), func_1458(uParam0), 2, 1073741824);
		}
	}
}

void func_848(var uParam0)
{
	if ((func_841(uParam0, 268435456) && !func_395(func_1457(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		bVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(bVar0))
		{
			vVar1 = { func_1457(uParam0) };
			func_923(bVar0, vVar1, func_1459(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(bVar0, 0f);
			set_entity_velocity(bVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(bVar0, 0f);
		}
	}
}

void func_849(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_395(vParam1))
	{
		func_1460(uParam0, 2048, 1);
	}
	else
	{
		func_752(uParam0, 2048);
		if (bParam5)
		{
			func_752(uParam0, -2147483648);
		}
	}
}

void func_850(var uParam0)
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
					if (!func_1461(uParam0->f_13[iVar0], 8))
					{
						if (func_693(func_1145(iVar1, 0, 1, 0)))
						{
							if (!func_1462(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_693(func_1145(iVar1, 1, 1, 0)))
						{
							if (!func_1462(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_851(var uParam0, bool bParam1)
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

void func_852(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_20() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				_set_ped_body_component(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				_set_ped_body_component(iParam1, Global_1347477->f_190);
			}
			func_1242(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1463(iParam1, 29, bVar4, 1, 0);
			func_1463(iParam1, 31, bVar4, 1, 0);
			func_1463(iParam1, 30, bVar4, 1, 0);
			func_1463(iParam1, 22, bVar4, 1, 0);
			func_1463(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1182(32768) && func_1464(1108822547, 8)) && func_1465(10, iParam3))
	{
		func_1466(iParam1, 0, 1);
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
			iVar3 = func_1250(iVar1, 1);
			if (func_1464(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1465(iVar1, iParam3))
				{
				}
				else if ((func_1464(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1464(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1463(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1467(iVar3, 1, 6);
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
								func_1463(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1464(iVar3, 1))
							{
								func_1468(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							_set_ped_component_enabled(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1]->f_1 != 0)
							{
								_0x66b957aac2eaaeab(iParam1, iVar2, uParam0->f_1[iVar1]->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							_0xaab86462966168ce(iParam1, bVar4);
							_update_ped_variation(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_853(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1469((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_854(int iParam0)
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

int func_855(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_856(int iParam0, int iParam1)
{
	return func_1470(&uVar0, iParam0, iParam1);
}

void func_857(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_693(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1471(1);
	}
}

void func_858(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_859(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_860(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_861(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_862(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_863(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_864(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_865(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_866(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_867(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_868(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_869(var uParam0, int iParam1)
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

int func_870(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_881((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_871(var uParam0, char* sParam1)
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

int func_872(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_883((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_873(int iParam0, int iParam1)
{
	iVar0 = func_1472(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_874(var uParam0, char* sParam1, int iParam2)
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

int func_875(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_890((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_876(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_877(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]) && (*uParam0)[iVar0]->f_1 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_878(var uParam0, int iParam1)
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

int func_879(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_894((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_880(int iParam0, bool bParam1)
{
	*iParam0 = (*iParam0 || bParam1);
}

bool func_881(var uParam0)
{
	return *uParam0 != 0;
}

void func_882(var uParam0)
{
	if (!func_912(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_876(&(uParam0->f_1), 1);
	}
}

bool func_883(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_884(var uParam0)
{
	if (!func_912(uParam0->f_3, 1))
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
		func_876(&(uParam0->f_3), 1);
	}
}

bool func_885(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_886(var uParam0)
{
	if (!func_912(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_876(&(uParam0->f_1), 1);
	}
}

bool func_887(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_888(var uParam0)
{
	if (func_912(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_912(uParam0->f_1, 1))
	{
		func_1473(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_876(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_889(var uParam0)
{
	if (func_912(*uParam0, 2))
	{
		return true;
	}
	if (!func_912(*uParam0, 1))
	{
		func_1474(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_876(uParam0, 2);
		return true;
	}
	return false;
}

bool func_890(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_891(var uParam0)
{
	if (!func_912(uParam0->f_2, 1))
	{
		if (func_1475(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1476(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_302())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1101())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_876(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_892(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_893(var uParam0, int iParam1)
{
	if (!func_912(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_876(&(uParam0->f_1), 1);
	}
}

bool func_894(var uParam0)
{
	return *uParam0 != 0;
}

void func_895(var uParam0)
{
	if (!func_912(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_876(&(uParam0->f_2), 1);
	}
}

bool func_896(var uParam0)
{
	return *uParam0 != 0;
}

void func_897(var uParam0)
{
	if (!func_912(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_876(&(uParam0->f_3), 1);
	}
}

bool func_898(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_899(var uParam0)
{
	if (!func_912(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_876(&(uParam0->f_1), 1);
	}
}

bool func_900(var uParam0)
{
	return func_1477(*uParam0);
}

void func_901(var uParam0)
{
	if (!func_912(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_876(&(uParam0->f_1), 1);
	}
}

bool func_902(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_903(var uParam0)
{
	if (!func_912(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_876(&(uParam0->f_2), 1);
	}
}

bool func_904(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_905(var uParam0)
{
	if (!func_912(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_876(&(uParam0->f_1), 1);
	}
}

bool func_906(var uParam0, int iParam1, char* sParam2)
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

void func_907(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (iParam3 == 0 && !does_entity_exist(bParam1))
	{
		return;
	}
	if (iParam3 == 0 && (is_entity_dead(bParam1) && !bParam5))
	{
		if (does_entity_exist(bParam1))
		{
		}
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_748(bParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(bParam1))
		{
		}
		return;
	}
	iVar0 = func_1478(uParam0, bParam1);
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
		bVar1 = func_1479(uParam0, sParam2);
		if (does_entity_exist(bVar1) && bVar1 != bParam1)
		{
			func_1480(uParam0, bVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1481(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = bParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1482(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1483(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_908(int iParam0)
{
	if (!func_187(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_909(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_931(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1484(uParam0, 0))
			{
				if (func_1485(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1486(uParam0, 1, &iVar0))
					{
					}
					if (func_1487(uParam0, 3, &cVar2))
					{
					}
					if (func_1486(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1486(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1486(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1486(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1486(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1488(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_499((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_499(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_499(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_215(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1488(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_499(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1484(uParam0, 12))
			{
				if (func_1486(uParam0, 13, &iVar0))
				{
				}
				if (func_1486(uParam0, 14, &iVar1))
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

void func_910(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_215((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_215((*uParam0)[iVar0], 1))
		{
			func_1489((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_911(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_881((*uParam0)[iVar1]))
		{
			if (func_873((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1490((*uParam0)[iVar1]))
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
		if (func_883((*uParam1)[iVar1]))
		{
			if (func_873((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1491((*uParam1)[iVar1]))
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
		if (func_885((*uParam2)[iVar1]))
		{
			if (func_873((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1492((*uParam2)[iVar1]))
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
		if (func_887((*uParam3)[iVar1]))
		{
			if (func_873((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_888((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_873(uParam4->f_1, iParam12))
	{
		if (!func_889(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_890((*uParam5)[iVar1]))
		{
			if (func_873((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1475((*uParam5)[iVar1]))
				{
					if (!func_913((*uParam5)[iVar1]))
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
		if (func_890((*uParam5)[iVar1]))
		{
			if (func_873((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1475((*uParam5)[iVar1]))
				{
					if (func_913((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_892((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1493((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_894((*uParam6)[iVar1]))
		{
			if (func_873((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1494((*uParam6)[iVar1]))
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
		if (func_896((*uParam7)[iVar1]))
		{
			if (func_873((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1495((*uParam7)[iVar1]))
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
		if (func_898((*uParam8)[iVar1]))
		{
			if (func_873((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1496((*uParam8)[iVar1]))
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
		if (func_900((*uParam9)[iVar1]))
		{
			if (func_873((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1497((*uParam9)[iVar1]))
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
		if (func_902((*uParam10)[iVar1]))
		{
			if (func_873((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1498((*uParam10)[iVar1]))
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
		if (func_904((*uParam11)[iVar1]))
		{
			if (func_873((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1499((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_912(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_913(var uParam0)
{
	if (func_912(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_912(uParam0->f_2, 1))
	{
		func_891(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_876(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_914(int iParam0)
{
	if (!func_187(iParam0))
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

bool func_915(char[4] cParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5, var uParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_518(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_256(iParam1)) && func_1500(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1501(iParam1, 1, 0, uParam4, uParam5, uParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1502(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1503(iParam1);
		return true;
	}
	return false;
}

bool func_916(char[4] cParam0)
{
	if (!func_395(cParam0->f_5417))
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
	return !func_395(cParam0->f_5417);
}

bool func_917(int iParam0, int iParam1)
{
	iParam1->f_10 = func_264(iParam1->f_10);
	if (iParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return false;
	}
	if (iParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return false;
	}
	if (*iParam1)
	{
		if (func_395(iParam1->f_6))
		{
		}
	}
	bVar0 = func_394();
	if (*iParam1)
	{
		if (bVar0 && !func_325((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1505(5))
			{
				func_529(5);
				func_1506(5);
				func_1450(0);
				func_1449(0);
			}
		}
	}
	if (func_1507(Global_36) == 8)
	{
		*iParam0 = 1;
		return false;
	}
	if ((bVar0 && func_325((*Global_1835011)[37]->f_1, 1)) && !func_325((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return false;
	}
	if ((bVar0 && func_325((*Global_1835011)[43]->f_1, 1)) && !func_325((*Global_1835011)[44]->f_1, 1))
	{
		if (iParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return false;
		}
	}
	iVar1 = iParam1->f_10;
	bVar2 = func_213(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_532(iVar1))
	{
		bVar3 = true;
		if (func_1508(iVar1))
		{
			bVar4 = true;
		}
		if (func_539(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*iParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !iParam1->f_5)
			{
				func_540(iParam1->f_10);
				*iParam0 = 0;
				return false;
			}
		}
	}
	if (*iParam1)
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
	if (iParam1->f_3)
	{
		if (iParam1->f_10 == 0)
		{
			if (!func_1505(0) && func_1505(1))
			{
				func_1509(1, 0);
				*iParam0 = 0;
				return false;
			}
		}
	}
	if (iParam1->f_4)
	{
		if (iParam1->f_10 == 0)
		{
			if (func_1510())
			{
				func_1511();
			}
			func_1450(0);
			func_1449(0);
			func_1451(iParam1->f_6);
		}
	}
	if (!func_532(iParam1->f_10))
	{
		if (*iParam1)
		{
			if ((func_1512(iParam1->f_10) == 0 || func_1513(iParam1->f_10) == 0) || func_1514(iParam1->f_10) == 0)
			{
				func_1515(iParam1->f_10);
			}
			func_1516(iParam1->f_10);
			func_1517(iParam1->f_10, iParam1->f_6, iParam1->f_9);
			*iParam0 = 0;
			return false;
		}
		*iParam0 = 1;
		return false;
	}
	iVar1 = iParam1->f_10;
	bVar2 = func_213(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_532(iVar1))
	{
		bVar3 = true;
		if (func_1508(iVar1))
		{
			bVar4 = true;
		}
		if (func_539(iVar1))
		{
			bVar5 = true;
		}
	}
	if (iParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(bVar2))
			{
				freeze_entity_position(bVar2, false);
			}
			if (!func_395(iParam1->f_6))
			{
				set_entity_coords(bVar2, iParam1->f_6, false, true, true, true);
				set_entity_heading(bVar2, iParam1->f_9);
				_0x9587913b9e772d29(bVar2, 0);
			}
		}
	}
	if (func_1518(iParam1->f_10))
	{
		*iParam0 = 0;
		return false;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*iParam1)
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
		if (bVar5 && !iParam1->f_5)
		{
			if (*iParam1)
			{
				*iParam0 = 0;
				return false;
			}
			*iParam0 = 1;
			return false;
		}
	}
	if (iParam1->f_4)
	{
		if (iParam1->f_10 == 0)
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
			Var8 = { func_1519(iParam1->f_10) };
			Var10 = { func_1520() };
			func_1521(bVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, bVar2);
			set_ped_config_flag(bVar2, 186, false);
		}
	}
	if (!iParam1->f_1)
	{
		*iParam0 = 2;
		return bVar2;
	}
	if (!func_525(iParam1->f_10))
	{
		set_entity_as_mission_entity(bVar2, true, true);
		func_1522(iParam1->f_10);
		if (iParam1->f_2 && !func_395(iParam1->f_6))
		{
			freeze_entity_position(bVar2, false);
			_0x0348469daa17576c(bVar2);
			set_entity_coords(bVar2, iParam1->f_6, false, true, true, true);
			set_entity_heading(bVar2, iParam1->f_9);
			_0x9587913b9e772d29(bVar2, 0);
		}
		*iParam0 = 2;
		return bVar2;
	}
	func_524(iParam1->f_10);
	if (func_525(iParam1->f_10))
	{
		iVar16 = func_260(iParam1->f_10);
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

bool func_918(bool bParam0, bool bParam1, float fParam2, bool bParam3)
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

bool func_919(bool bParam0)
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

bool func_920(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1523(iParam1))
	{
		return false;
	}
	iVar0 = func_1524(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
	*iParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*iParam0))
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
			set_network_id_exists_on_all_machines(*iParam0, true);
		}
		return true;
	}
	return false;
}

void func_921(char[4] cParam0, bool bParam1)
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

float func_922(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(bParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), get_entity_coords(bParam1, false, false), bParam2);
}

void func_923(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (bParam0 == func_1525(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1526(bParam0))
	{
		if (func_919(get_ped_index_from_entity_index(bParam0)))
		{
			_0x0348469daa17576c(bParam0);
		}
	}
	if (func_390(iParam5, 4) && is_entity_a_ped(bParam0))
	{
		iVar1 = get_ped_index_from_entity_index(bParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			bVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(bVar0) && !is_entity_dead(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_923(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			bVar2 = get_mount(iVar1);
			if (does_entity_exist(bVar2) && !is_entity_dead(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_923(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_390(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(bParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(bParam0), false, true);
		}
	}
	if (func_390(iParam5, 2))
	{
		if (is_entity_a_vehicle(bParam0))
		{
			_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_390(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_390(iParam5, 32), true);
			_0x9587913b9e772d29(bParam0, 0);
		}
	}
	else if (func_390(iParam5, 129))
	{
		if (func_390(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(bParam0, vParam1, func_390(iParam5, 32), true, true);
		set_entity_heading(bParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_390(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_390(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(bParam0), bVar3, 0, false);
		}
		if (func_1526(bParam0))
		{
			bVar6 = get_ped_index_from_entity_index(bParam0);
			_0x0348469daa17576c(bVar6);
			if (!func_390(iParam5, 32))
			{
				clear_ped_tasks(bVar6, 1, 0);
				task_stand_still(bVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(bParam0), 1);
		if (get_ped_index_from_entity_index(bParam0) == Global_35 && !func_390(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_924(int iParam0, int iParam1, int iParam2)
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

bool func_925(var uParam0, int iParam1)
{
	switch (func_1527(uParam0))
	{
		case 0:
			if (!func_1528(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1529(uParam0, 1);
			break;
		case 1:
			func_1530(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_845(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1529(uParam0, 2);
			break;
		case 2:
			if (func_1531(uParam0))
			{
				func_1325(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1529(uParam0, 3);
			}
			break;
		case 3:
			if (func_932(&(uParam0->f_3)) >= 1f)
			{
				func_1529(uParam0, 4);
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
			func_1532(&iVar1, 0);
			release_script_audio_bank();
			func_1529(uParam0, 0);
			return true;
	}
	return false;
}

void func_926(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1533(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_927(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1534(cParam0, iVar0) };
	if (func_1536(&(cParam0->f_10792), Var1, func_1535(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1537(&(cParam0->f_10792), 524288))
		{
			func_378(cParam0, 67108864);
			func_1538(&(cParam0->f_10792), 524288);
		}
		func_1539(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_928(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_929(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1540(cParam0);
		func_1541(cParam0);
		return true;
	}
	if (func_1542(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_963(cParam0);
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
			func_1543(cParam0);
			func_928(cParam0, 524288);
			func_1332(cParam0);
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

bool func_930(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1544(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1545(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1546(func_61(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_427(cParam0, func_33(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_908(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_931(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_931(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1547(uParam0);
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

bool func_932(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_501(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_552() - uParam0->f_1);
}

bool func_933()
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

void func_934(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_935(int iParam0, bool bParam1)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_59(iParam0);
	func_526(iParam0);
	func_527(iParam0);
	func_524(iParam0);
	if (func_525(iParam0))
	{
		iVar0 = get_id_of_this_thread();
		if (func_260(iParam0) != iVar0)
		{
			return;
		}
	}
	func_1548(iParam0, 4);
	if (bParam1)
	{
		func_1548(iParam0, 16);
	}
}

void func_936()
{
	get_screen_resolution(&iVar0, &iVar1);
	func_1549((iVar0 / 2), (iVar1 / 2), iVar0, iVar1, 0, 0, 0, 255);
}

void func_937(char[4] cParam0)
{
	if (iVar649 == 0)
	{
		if (is_player_teleport_active())
		{
			return;
		}
		func_1550(cParam0, 0);
		iLocal_652 = 1;
	}
}

bool func_938(char[4] cParam0)
{
	if (func_1551(cParam0) && func_1372(cParam0))
	{
		return true;
	}
	return false;
}

bool func_939(vector3 vParam0, int iParam3, var uParam4)
{
	if (!func_390(iVar577, iParam3))
	{
		*uParam4 = get_interior_at_coords(vParam0);
		if (is_valid_interior(*uParam4))
		{
			pin_interior_in_memory(*uParam4);
			if (is_interior_ready(*uParam4))
			{
				func_1441(&uLocal_584, iParam3);
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

void func_940()
{
	func_1552(iLocal_544[0], -2573.754f, 377.9465f, 147.4046f, -0.01348f, 0.172242f, -4.474882f, 31.33209f, 42.37819f, 13.79268f, "Ranch Park Vol (BiG)", 0, 0);
	func_1552(iLocal_544[1], -2570.195f, 355.044f, 149.7283f, 0f, 0f, 18.63195f, 13.29795f, 11.02194f, 5.744652f, "Ranch Park Vol", 0, 0);
	if (!_does_volume_exist(&(iLocal_544[2])))
	{
		iLocal_544[2] = _create_volume_aggregate_with_custom_name("Ranch Auto-Park Vol");
		func_1553(&iVar0, -2570.195f, 355.044f, 149.7283f, 0f, 0f, 18.63195f, 13.29795f, 11.02194f, 5.744652f, "Ranch Park Vol");
		_0x6e0d3c3f828da773(&(iLocal_544[2]), iVar0);
		iVar1 = _create_volume_box(-2572.944f, 361.3411f, 151.6f, 0f, 0f, 30.81623f, 18.54454f, 26.59785f, 7.852616f);
		_0x6e0d3c3f828da773(&(iLocal_544[2]), iVar1);
		iVar2 = _create_volume_box(-2563.745f, 368.6505f, 151.6f, 0f, 0f, 20.90722f, 10.12388f, 23.00273f, 7.853f);
		_0x6e0d3c3f828da773(&(iLocal_544[2]), iVar2);
	}
	if (!_does_volume_exist(&(iLocal_544[6])))
	{
		iLocal_544[6] = _create_volume_aggregate_with_custom_name("STR Sign Visible");
		iVar3 = _create_volume_box(-1816.477f, -255.9492f, 182.8093f, 0f, 0f, 18.49021f, 31.96567f, 35.59717f, 23.84335f);
		_0x6e0d3c3f828da773(&(iLocal_544[6]), iVar3);
		iVar4 = _create_volume_box(-1738.894f, -428.7224f, 150.8866f, 0f, 0f, -34.99216f, 31.96567f, 46.318f, 23.84335f);
		_0x6e0d3c3f828da773(&(iLocal_544[6]), iVar4);
	}
	func_1552(iLocal_544[7], -1817.186f, -281.4051f, 175.9114f, 0f, 0f, 12.08121f, 25.29854f, 4.433221f, 6.4998f, "Strawberry Assist Park Vol", 0, 0);
	func_1552(iLocal_544[8], -1744.033f, -406.2298f, 159.0503f, 0f, 0f, 49.22925f, 25.29854f, 4.433221f, 10.75723f, "Strawberry Assist Park ALT1 Vol", 0, 0);
	func_1552(iLocal_544[10], -1799.571f, -363.1917f, 161.0656f, 0f, 0f, 40.71401f, 25.29854f, 4.433221f, 6.4998f, "Strawberry Park Vol", 0, 0);
	func_1552(iLocal_544[11], -1786.292f, -378.6225f, 160.091f, 0f, 0f, 40.71401f, 25.29854f, 4.433221f, 6.4998f, "Strawberry Park ALT1 Vol", 0, 0);
	func_1552(iLocal_544[12], -1822.142f, -405.0896f, 161.7215f, 0f, 0f, -30.8203f, 25.29854f, 4.433221f, 9.409689f, "Strawberry Park ALT2 Vol", 0, 0);
	func_1552(iLocal_544[14], -1816.096f, -396.0056f, 163.6342f, 0f, 0f, -34.31683f, 9.762182f, 36.8191f, 8.809393f, "Strawberry Bride Vol", 0, 0);
	func_1552(iLocal_544[4], -1791.929f, -385.9676f, 160.2359f, 0f, 0f, -34.73787f, 8.833992f, 5.862757f, 3.105916f, "Strawberry Gen Store", 0, 0);
	func_1552(iLocal_544[15], -1789.022f, -403.1428f, 163.6342f, 0f, 0f, -32.58349f, 112.4583f, 110.5791f, 103.0807f, "Strawberry Leaving Warning", 0, 0);
	func_1552(iLocal_544[16], -1803.695f, -376.2975f, 163.6342f, 0f, 0f, -75.42432f, 270.2971f, 193.2179f, 101.0897f, "Strawberry Leaving Fail", 0, 0);
	func_1552(iLocal_544[17], -2328.859f, -317.2328f, 155.8543f, -0.19117f, -0.143905f, 70.60242f, 7.274593f, 2.839037f, 2.89679f, "Valid Wagon Jump Range", 0, 0);
	func_1552(iLocal_544[18], -2566.434f, 399.2157f, 148.3486f, -2.367301f, 2.699441f, 14.73953f, 6.38202f, 13.44436f, 6.070405f, "Valid Wagon Block Range", 0, 0);
	func_1552(iLocal_544[19], -2577.415f, 403.0747f, 147.4156f, 0.009768f, -0.172492f, 176.7591f, 42.88375f, 116.7131f, 34.36662f, "Ranch Vol", 0, 0);
	func_1552(iLocal_544[20], -2560.511f, 414.4507f, 138.2592f, -0.039043f, -0.168299f, -166.9391f, 54.57513f, 99.72757f, 42.91363f, "Ranch Event Vol", 1, 0);
	func_1552(iLocal_544[21], -1791.929f, -385.9676f, 160.2359f, 0f, 0f, -34.73787f, 8.155487f, 5.862757f, 3.105916f, "MCS2 Block Vol", 0, 0);
	func_1552(iLocal_544[22], -1803.989f, -427.6595f, 159.393f, 0f, 0f, -26.44327f, 6.834972f, 3.64481f, 8.383995f, "MCS3 Block Vol", 0, 0);
	func_1552(iLocal_544[23], -2572.182f, 353.6518f, 150.8911f, 0f, 0f, 0f, 20.42618f, 3.225707f, 5.17808f, "Porch Vol", 0, 0);
	func_1552(iLocal_544[24], -2594.34f, 457.2527f, 147.4666f, -0.028881f, 0.170338f, -9.622879f, 5.627902f, 8.866761f, 6.741638f, "Milton Homestead", 0, 0);
	func_1552(iLocal_544[25], -2592.849f, 457f, 147.4622f, -0.028881f, 0.170338f, -9.62288f, 36.12863f, 18.4928f, 6.741638f, "Near Milton Homestead", 0, 0);
	func_1552(iLocal_544[26], -2537.487f, 452.1667f, 147.2952f, -0.00381f, 0.172727f, -1.263596f, 25.39082f, 36.25793f, 11.65347f, "Horse Pen", 0, 0);
	func_1552(iLocal_544[13], -1803.83f, -427.3387f, 159.393f, 0f, 0f, -26.44327f, 11.25648f, 3.789861f, 8.383995f, "Strawberry Doc Entrance Blocking Vol", 0, 0);
	func_1552(iLocal_544[3], -1795.477f, -381.5676f, 160.5f, 0f, 0f, 0f, 1.892589f, 1.625026f, 1.970526f, "Ranch Event Vol", 1, 0);
	if (!_does_volume_exist(&(iLocal_544[5])))
	{
		iLocal_544[5] = _create_volume_aggregate_with_custom_name("To Strawberry Roads");
		iLocal_572[0] = _create_volume_box(-1707.245f, 376.611f, 109.9749f, 0f, 0f, -10.16995f, 48.47462f, 10.8469f, 13.13223f);
		_0x6e0d3c3f828da773(&(iLocal_544[5]), &(iLocal_572[0]));
		iLocal_572[1] = _create_volume_box(-1724.834f, 174.8505f, 137.5486f, 0f, 0f, -7.260907f, 77.89487f, 395.9456f, 115.6563f);
		_0x6e0d3c3f828da773(&(iLocal_544[5]), &(iLocal_572[1]));
		iLocal_572[2] = _create_volume_box(-1712.935f, -247.8706f, 163.885f, 0f, 0f, 2.01251f, 133.1203f, 69.00381f, 71.49031f);
		_0x6e0d3c3f828da773(&(iLocal_544[5]), &(iLocal_572[2]));
		iLocal_572[3] = _create_volume_box(-1797.46f, -254.1754f, 182.8093f, 0f, 0f, 18.49021f, 45.56882f, 17.3676f, 23.84335f);
		_0x6e0d3c3f828da773(&(iLocal_544[5]), &(iLocal_572[3]));
		iLocal_572[4] = _create_volume_box(-1804.207f, -312.4025f, 163.4654f, 0f, 0f, -71.4566f, 116.9772f, 30.67659f, 71.49031f);
		_0x6e0d3c3f828da773(&(iLocal_544[5]), &(iLocal_572[4]));
		iLocal_572[5] = _create_volume_box(-1730.007f, 389.8072f, 109.9749f, 0f, 0f, -2.625621f, 83.52462f, 16.38257f, 13.13223f);
		_0x6e0d3c3f828da773(&(iLocal_544[5]), &(iLocal_572[5]));
	}
	if (!_does_volume_exist(&(iLocal_544[9])))
	{
		func_1552(iLocal_544[9], -1800.732f, -374.8747f, 161.0656f, 0f, 0f, 51.91206f, 17.60275f, 8.378788f, 6.4998f, "Strawberry Park Blocking Vol", 0, 0);
		func_1365(&(iLocal_544[9]), 0, 534496, 0);
	}
}

void func_941(char[4] cParam0)
{
	*vLocal_668[0] = { func_385(15, 2) };
	*vLocal_668[1] = { func_385(7, 3) };
	*vLocal_668[2] = { func_385(7, 1) };
	*vLocal_668[3] = { func_385(11, 4) };
	*vLocal_668[4] = { func_385(2, 2) };
	*vLocal_668[5] = { func_385(3, 2) };
	*vLocal_668[6] = { func_385(4, 2) };
	*vLocal_668[7] = { func_385(5, 0) };
	*vLocal_668[8] = { func_385(5, 0) };
	if (func_33(cParam0) > iLocal_150 && func_33(cParam0) <= iLocal_155)
	{
		func_1353(&iLocal_541);
		iLocal_541 = func_1354(408396114, func_385(5, 0), 1109393408, 1);
		if (does_blip_exist(iVar538))
		{
			set_blip_name_from_text_file(iVar538, "MAR1_RANCH_NAME");
		}
	}
	else if (func_33(cParam0) == iLocal_146 || func_33(cParam0) == iLocal_147)
	{
		func_1554();
	}
	else
	{
		func_1353(&iLocal_541);
		clear_gps_custom_route();
		clear_gps_multi_route();
	}
}

int func_942(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_146)
	{
		_0x98a7cd5ea379a854();
		if (does_scenario_group_exist("MAR1_ANIMALS") && is_scenario_group_enabled("MAR1_ANIMALS"))
		{
			func_1299(cParam0);
		}
		if (func_387(cParam0))
		{
			func_388(cParam0);
		}
		else
		{
			return 0;
		}
	}
	if (iVar0 == iLocal_158)
	{
		if (does_entity_exist(iVar536))
		{
		}
	}
	if (iVar0 == iLocal_156)
	{
		func_1397(cParam0, 0f, 0f, 0f, 0, 0);
	}
	return 1;
}

void func_943(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

int func_944(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_146)
	{
		func_27(&uLocal_627, 0);
		if (!func_26(&uLocal_627) || !func_1343(&uLocal_627, 10f))
		{
			_0x98a7cd5ea379a854();
		}
		if (does_scenario_group_exist("MAR1_ANIMALS") && is_scenario_group_enabled("MAR1_ANIMALS"))
		{
			func_1299(cParam0);
		}
		if (func_1555(cParam0, &(iLocal_162[0]), 0, 0, 1, 1))
		{
			destroy_cam(iVar988, false);
			func_1556();
			func_387(cParam0);
			func_1557(cParam0);
			func_1558(cParam0);
			func_1315(Local_176[0], 91, 1);
			func_1315(Local_176[1], 91, 1);
		}
		if (func_1559(cParam0))
		{
			func_934(0, 0);
			if (!func_120(cParam0, 4))
			{
				func_1295(&(uLocal_105[1]));
			}
			func_1314(3.5f);
		}
		if (func_1555(cParam0, Global_35, 0, 0, 1, 1))
		{
			func_1560(cParam0);
		}
		if (func_832(bVar536))
		{
		}
	}
	if (iVar0 == iLocal_156)
	{
		if (func_1555(cParam0, Global_35, 0, 0, 1, 1))
		{
			func_934(0, 0);
			if (!func_8(cParam0, 524288) && !func_120(cParam0, 4))
			{
			}
		}
		if (func_1555(cParam0, &(uLocal_170[0]), 0, 0, 1, 1))
		{
			func_1561();
		}
		if (func_1555(cParam0, &(uLocal_389[0]), "G_M_M_UNIRANCHERS_01", 0, 1, 1) || func_1555(cParam0, &(uLocal_389[0]), "G_M_M_UNIRANCHERS_01^1", 0, 1, 1))
		{
			func_1562(uLocal_389[0], &uLocal_539, -1, 1);
			func_1315(Local_395[0], 90, 1);
			func_1408(cParam0, uLocal_389[0], Local_395[0]);
			func_1562(uLocal_389[1], &uLocal_539, 0, 1);
			func_1315(Local_395[1], 1, 1);
			func_1409(cParam0, uLocal_389[1], Local_395[1]);
			if (!func_8(cParam0, 524288) && !func_120(cParam0, 4))
			{
				func_1294(16);
				func_1349(&(uLocal_105[16]), "pl_Laughing", 1);
				func_1295(&(uLocal_105[16]));
			}
			if (does_extra_exist(bVar536, 2))
			{
				set_vehicle_extra(bVar536, 2, false);
			}
		}
		if (!func_1401())
		{
		}
	}
	if (iVar0 == iLocal_149)
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804) && _is_anim_scene_started(cParam0->f_7375.f_804, false))
		{
			if (_get_anim_scene_progress(cParam0->f_7375.f_804) >= 0f && iVar654 == 0)
			{
				func_1563(&Global_35, 0);
				iLocal_657 = 1;
			}
			else if (_get_anim_scene_progress(cParam0->f_7375.f_804) >= 0.9480122f && iVar655 == 0)
			{
				func_1563(&Global_35, 1);
				iLocal_658 = 1;
			}
			if (_get_anim_scene_progress(cParam0->f_7375.f_804) >= 0.5f && iVar656 == 0)
			{
				func_1564(1595373759, 1);
				func_1565(1595373759, 0f, 1);
				iLocal_659 = 1;
			}
		}
		if (func_841(&(cParam0->f_7375), 512))
		{
			func_1329(1595373759, 0, 0, 0, 0, 0, 1, 0);
		}
		if (func_1555(cParam0, Global_35, 0, 0, 1, 1))
		{
			func_1329(1595373759, 0, 0, 0, 0, 0, 1, 0);
			func_1566(-668482597, 4000, 0, 1, 1, 0, 0, 0);
		}
	}
	if ((iVar0 == iLocal_149 && (func_1555(cParam0, Global_35, 0, 0, 1, 1) || func_1559(cParam0))) || iVar664 == 1)
	{
		iLocal_667 = 1;
		_0xc6981aff6d2a71c2(Global_35);
		set_ped_reset_flag(Global_35, 323, true);
	}
	if (iVar0 == iLocal_150)
	{
		if (func_1555(cParam0, Global_35, 0, 0, 1, 1))
		{
			func_1566(-668482597, 2000, 0, 1, 1, 0, 0, 0);
		}
		if (func_1559(cParam0))
		{
			func_1567(13, 1);
			func_1567(14, 1);
			func_1011(cParam0, &(iLocal_162[0]), 128);
			func_1011(cParam0, &(iLocal_162[1]), 128);
		}
		if (func_1372(cParam0))
		{
			func_952(cParam0, 1, 0, 1, 0, 0);
		}
	}
	if (iVar0 == iLocal_158 && func_1555(cParam0, Global_35, 0, 0, 1, 1))
	{
	}
	if (iVar0 == iLocal_158)
	{
		func_1436(uLocal_105[19], func_416(19), 0, "pl_IG_ChapterTitleOutro_Exit");
		if (((_does_anim_scene_exist(cParam0->f_7375.f_804) && _is_anim_scene_started(cParam0->f_7375.f_804, false)) && has_anim_event_fired(Global_35, 508284207)) || func_8(cParam0, 524288))
		{
			func_1435(cParam0);
		}
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	if (iVar0 == iLocal_148 && func_1559(cParam0))
	{
		func_934(0, 0);
	}
	return 1;
}

void func_945(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

void func_946(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (!func_8(cParam0, 8) || func_120(cParam0, 4))
	{
		if (iVar0 == iLocal_147)
		{
			set_clock_time(15, 0, 0);
		}
		else if (iVar0 > iLocal_147 && iVar0 <= iLocal_152)
		{
			set_clock_time(16, 0, 0);
		}
		else if (iVar0 >= iLocal_153 && iVar0 <= iLocal_155)
		{
			set_clock_time(18, 15, 0);
		}
		else if (iVar0 == iLocal_156 || iVar0 == iLocal_157)
		{
			set_clock_time(19, 0, 0);
		}
		else if (iVar0 >= iLocal_158)
		{
			set_clock_time(19, 0, 0);
		}
	}
}

void func_947(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	func_1568(-1015925347, 0, 0, 1103626240);
	if (iVar0 >= iLocal_148 && iVar663 == 0)
	{
		_set_weather_type(-173507739, true, true, false, 0f, false);
		iLocal_666 = 1;
	}
}

void func_948()
{
	func_1569(0.9f, 0f, 0f, 0f);
	_0xc6dcc2a3a8825c85(1);
}

void func_949(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 <= iLocal_151 && _0x8a3945405b31048f() >= 1f)
	{
		_0x2f9ac754fe179d58(0.75f);
	}
}

bool func_950(char[4] cParam0)
{
	if (!func_1560(cParam0))
	{
		return false;
	}
	if (func_33(cParam0) <= iLocal_151)
	{
		if (!func_1557(cParam0))
		{
			return false;
		}
		if (!func_1558(cParam0))
		{
			return false;
		}
	}
	if ((func_33(cParam0) == iLocal_148 || func_33(cParam0) == iLocal_149) || func_33(cParam0) == iLocal_150)
	{
		if (!func_1335(cParam0))
		{
			return false;
		}
	}
	if (func_33(cParam0) >= iLocal_155 && func_33(cParam0) < iLocal_159)
	{
		if (!func_1382(cParam0))
		{
			return false;
		}
		func_1383();
	}
	if (func_33(cParam0) == iLocal_156)
	{
		if (!func_1385(cParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_951(char[4] cParam0)
{
	func_145(cParam0, Global_35, "JOHN", 0);
	func_145(cParam0, &(iLocal_162[0]), "ABIGAIL", 0);
	func_145(cParam0, &(iLocal_162[1]), "JACK", 0);
	func_145(cParam0, &(uLocal_170[0]), "RRCH1_Dickens", 0);
	func_145(cParam0, &(iLocal_165[0]), "STR_General_Store", 0);
	func_145(cParam0, &(iLocal_165[3]), "MAR1_STR_WORK3", 0);
}

bool func_952(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_1570(cParam0, &uLocal_539, iParam1, iParam2, iParam3, iParam5))
	{
		return false;
	}
	func_27(&uLocal_609, 0);
	if (bParam4 == 0 || (bParam4 == 1 && func_1343(&uLocal_609, 2f)))
	{
	}
	func_1571(16777216);
	return true;
}

int func_953(float fParam0)
{
	iVar0 = 1745919061;
	if (!Global_1347477->f_200)
	{
		if (fParam0 <= -100f)
		{
			iVar0 = -2045421226;
		}
		else if (fParam0 <= -90f)
		{
			iVar0 = -1745814259;
		}
		else if (fParam0 <= -80f)
		{
			iVar0 = -325933489;
		}
		else if (fParam0 <= -70f)
		{
			iVar0 = -1065791927;
		}
		else if (fParam0 <= -60f)
		{
			iVar0 = -844699484;
		}
		else if (fParam0 <= -50f)
		{
			iVar0 = -1273449080;
		}
		else if (fParam0 <= -40f)
		{
			iVar0 = 927185840;
		}
		else if (fParam0 <= -30f)
		{
			iVar0 = 149872391;
		}
		else if (fParam0 <= -20f)
		{
			iVar0 = 399015098;
		}
		else if (fParam0 <= -10f)
		{
			iVar0 = -644349862;
		}
		else if (fParam0 <= 0f)
		{
			iVar0 = 1745919061;
		}
		else if (fParam0 <= 10f)
		{
			iVar0 = 1004225511;
		}
		else if (fParam0 <= 20f)
		{
			iVar0 = 1278600348;
		}
		else if (fParam0 <= 30f)
		{
			iVar0 = 502499352;
		}
		else if (fParam0 <= 40f)
		{
			iVar0 = -2093198664;
		}
		else if (fParam0 <= 50f)
		{
			iVar0 = -1837436619;
		}
		else if (fParam0 <= 60f)
		{
			iVar0 = 1736416063;
		}
		else if (fParam0 <= 70f)
		{
			iVar0 = 2040610690;
		}
		else if (fParam0 <= 80f)
		{
			iVar0 = -1173634986;
		}
		else if (fParam0 <= 90f)
		{
			iVar0 = -867801909;
		}
		else if (fParam0 <= 100f)
		{
			iVar0 = 1960266524;
		}
	}
	return iVar0;
}

int func_954(int iParam0, int iParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return 0;
	}
	func_1572();
	iVar2 = 0;
	iVar3 = 2;
	iVar4 = 8;
	iVar5 = 9;
	if (!func_1573(&(Global_1946804->f_1378), &uVar1, iParam1, -1, 0, 0))
	{
		return 0;
	}
	*Global_1946804->f_1497.f_1[iVar2] = { *Global_1946804->f_1378.f_1[iVar2] };
	*Global_1946804->f_1497.f_1[iVar3] = { *Global_1946804->f_1378.f_1[iVar3] };
	*Global_1946804->f_1497.f_1[iVar4] = { *Global_1946804->f_1378.f_1[iVar4] };
	*Global_1946804->f_1497.f_1[iVar5] = { *Global_1946804->f_1378.f_1[iVar5] };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_684(Global_1946804->f_1497.f_1[iVar2], iVar2, iVar0);
		func_684(Global_1946804->f_1497.f_1[iVar3], iVar3, iVar0);
		func_684(Global_1946804->f_1497.f_1[iVar4], iVar4, iVar0);
		func_684(Global_1946804->f_1497.f_1[iVar5], iVar5, iVar0);
		iVar0++;
	}
	if (bParam2)
	{
		func_1574(iVar2, 0);
		func_1574(iVar3, 0);
		func_1574(iVar4, 0);
		func_1574(iVar5, 0);
		func_689(19, 0, 66, 0, 0);
	}
	else
	{
		_set_ped_component_enabled(iParam0, &(Global_1946804->f_1497.f_1[iVar2]), false, false, false);
		_set_ped_component_enabled(iParam0, &(Global_1946804->f_1497.f_1[iVar3]), false, false, false);
		_set_ped_component_enabled(iParam0, &(Global_1946804->f_1497.f_1[iVar4]), false, false, false);
		_set_ped_component_enabled(iParam0, &(Global_1946804->f_1497.f_1[iVar5]), false, false, false);
	}
	Global_1347477->f_185 = iParam1;
	func_1575(0);
	return 1;
}

var func_955(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_1576(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_956(var uParam0)
{
	func_1578(uParam0, (func_1577(uParam0) - 6f));
	func_1579(uParam0, 1);
}

void func_957(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_958(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

void func_959()
{
	func_1580(-134556459);
	func_1581(131323483);
	func_1581(-1106517275);
	func_1581(1423681694);
}

void func_960()
{
	if (iVar651 == 1)
	{
		return;
	}
	if (!_0x3d2674828a4e6b3c())
	{
		_0xc5eb2755fa25f1e9(1);
	}
	func_40(1);
	iLocal_653 = 1;
}

int func_961(int iParam0)
{
	if (!func_474(iParam0))
	{
		return 0;
	}
	if (!func_476(func_475(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_477(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_477(iParam0))))
		{
			return 1;
		}
	}
	bVar0 = _0x31c70a716cae1fee(func_477(iParam0));
	if (does_entity_exist(bVar0))
	{
		if (!_0x88ad6cc10d8d35b2(bVar0))
		{
			set_entity_as_mission_entity(bVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_477(iParam0));
	return 1;
}

void func_962(char[4] cParam0)
{
	func_1582(cParam0);
	iVar0 = func_33(cParam0);
	if ((((((iVar0 == iLocal_146 || iVar0 == iLocal_147) || iVar0 == iLocal_148) || iVar0 == iLocal_149) || iVar0 == iLocal_150) || iVar0 == iLocal_151) || (iVar0 >= iLocal_155 && func_1340(Global_35, &(iLocal_544[20]), 1, 0)))
	{
		func_1583(cParam0);
	}
	if (((iVar0 == iLocal_146 || iVar0 == iLocal_147) || iVar0 == iLocal_148) || iVar0 == iLocal_149)
	{
		func_959();
	}
	func_1584(0);
	func_1585(cParam0);
	if (iVar0 != iLocal_145)
	{
		func_1586(cParam0);
	}
	func_1587(cParam0);
	func_1588();
	func_949(cParam0);
}

void func_963(char[4] cParam0)
{
	if (!func_23(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 268435456))
	{
		return;
	}
	func_1589(cParam0);
}

void func_964(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_211())
			{
				if (func_932(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_218(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_965(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 8388608))
	{
		if (func_1590(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1591();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1592(cParam0, func_33(cParam0), 8388608);
		}
	}
}

void func_966(char[4] cParam0)
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
		if (func_236() || func_54())
		{
			func_99(cParam0, 1048576);
		}
	}
	else if (!func_236() && !func_54())
	{
		func_928(cParam0, 1048576);
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
			func_928(cParam0, 134217728);
		}
	}
}

void func_967(char[4] cParam0)
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

void func_968(char[4] cParam0)
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

void func_969(char[4] cParam0)
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

int func_970(char[4] cParam0)
{
	if ((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_252(cParam0->f_5423[iVar0]))
		{
			func_1014(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_971(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1593(iVar0))
	{
		return false;
	}
	iVar1 = func_1594(iParam2);
	if (!func_1595(iVar1))
	{
		return false;
	}
	if (!func_1596(cParam0, iParam1, iParam2))
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

int func_972(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_973(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_974(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_218(&(cParam0->f_603));
	}
}

void func_975(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_976(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(cParam0->f_13109)))
	{
		func_27(&(cParam0->f_13109), 0);
	}
	else if (func_932(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_253(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_254(cParam0->f_5421))
		{
			iVar2 = func_255(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					bVar3 = func_1597(cParam0->f_5421, iVar1);
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

float func_977(char[4] cParam0)
{
	return func_932(&(cParam0->f_603));
}

bool func_978(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_979(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_971(cParam0, iParam1, 4))
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
		func_1598(cParam0);
		if (func_1599(cParam0))
		{
			func_1600(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_928(cParam0, 524288);
		func_1601(&(cParam0->f_7375), 4);
		if (func_1590(cParam0))
		{
			func_140(cParam0, func_33(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1591();
		}
		return true;
	}
	return false;
}

void func_980(char[4] cParam0)
{
	func_1602(cParam0);
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

bool func_981(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_927(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_928(cParam0, 2097152);
			func_263(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_973(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1534(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_927(cParam0))
			{
				func_928(cParam0, 2097152);
				func_929(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_929(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_927(cParam0))
		{
			func_928(cParam0, 2097152);
			func_1541(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_929(cParam0, Var0);
	}
	return true;
}

bool func_982(char[4] cParam0)
{
	return func_1603(&(cParam0->f_7375));
}

void func_983(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1604(cParam0))
		{
			func_438(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1605(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

int func_984(char[4] cParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(cParam0, func_33(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_252(cParam0->f_5423[iVar1]))
		{
			if (func_1606(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1607(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_985(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1608(cParam0))
		{
			func_438(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1605(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

void func_986(char[4] cParam0)
{
	switch (func_1609(&iVar0))
	{
		case 1:
			func_1610(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_188(iVar0) && iVar0 == func_12(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_987(char[4] cParam0, int iParam1)
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

int func_988(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1540(cParam0);
		func_928(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1534(cParam0, iParam1) };
	if (func_1297(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_989(char[4] cParam0, int iParam1)
{
	func_1611(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_223(cParam0, iParam1));
}

void func_990(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_975(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_928(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_928(cParam0, 4);
		func_928(cParam0, 8192);
		func_928(cParam0, 536870912);
		func_263(cParam0, 4);
		func_65(0);
		func_64(0);
		func_928(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1612(cParam0);
		if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_82(32768))
		{
			func_378(cParam0, 524288);
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
				func_1613(1, 1);
			}
		}
	}
}

void func_991(bool bParam0)
{
	if (!func_195(0, 0, 1) || bParam0)
	{
		iVar0 = func_1099();
		iVar1 = func_1102(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1427(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1427(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
		animpostfx_play("RespawnWithHonor");
		_0xf972f0ab16dc5260("RespawnWithHonor", 1, fVar3);
		_0xf972f0ab16dc5260("RespawnWithHonor", 2, fVar2);
		_0xf972f0ab16dc5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		animpostfx_play("RespawnMissionCheckpoint");
	}
}

int func_992(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1614(bParam1, bParam2, bParam3);
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

var func_993(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1615(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1616(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1615(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_994(char[4] cParam0)
{
	return true;
}

bool func_995(char[4] cParam0)
{
	return true;
}

int func_996(char[4] cParam0)
{
	return 1;
}

int func_997()
{
	return func_506(func_753());
}

int func_998()
{
	return func_1617(func_753());
}

int func_999()
{
	if (func_193(func_753()) == 2)
	{
		if (func_270(func_753()) == 3)
		{
			iVar0 = func_313(func_753());
			if (func_1618(iVar0))
			{
				return iVar0;
			}
		}
	}
	return -1;
}

void func_1000(int iParam0)
{
	func_1002(iParam0, 1);
	func_1002(iParam0, 128);
	func_1002(iParam0, 256);
	func_1002(iParam0, 512);
	func_1002(iParam0, 1024);
	func_1002(iParam0, 2048);
	func_1002(iParam0, 4096);
	func_1002(iParam0, 65536);
	func_1002(iParam0, 16384);
	func_1002(iParam0, 262144);
	func_1002(iParam0, 524288);
	func_1002(iParam0, 1048576);
	func_1002(iParam0, 2097152);
	func_1002(iParam0, 32768);
	func_1002(iParam0, 131072);
	func_1002(iParam0, 134217728);
	func_1002(iParam0, 1073741824);
}

void func_1001(int iParam0, bool bParam1)
{
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		return;
	}
	if (!bParam1)
	{
		if (decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
		{
			decor_remove(Global_1360165[iParam0], "wearing_bandana");
		}
	}
	else if (!decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
	{
		decor_set_bool(Global_1360165[iParam0], "wearing_bandana", true);
	}
}

void func_1002(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_1003(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 860729266;
			return true;
		case 128:
			*iParam1 = 1606325429;
			return true;
		case 256:
			*iParam1 = 1743550585;
			return true;
		case 512:
			*iParam1 = 1064646155;
			return true;
		case 1024:
			*iParam1 = -536694793;
			return true;
		case 2048:
			*iParam1 = -1304053509;
			return true;
		case 4096:
			*iParam1 = 879715242;
			return true;
		case 65536:
			*iParam1 = -972364774;
			return true;
		case 16384:
			*iParam1 = -1100875244;
			return true;
		case 262144:
			*iParam1 = 1153596794;
			return true;
		case 524288:
			*iParam1 = 1016389820;
			return true;
		case 1048576:
			*iParam1 = -726966617;
			return true;
		case 2097152:
			*iParam1 = 1365901568;
			return true;
		case 32768:
			*iParam1 = -1658942149;
			return true;
		case 131072:
			*iParam1 = -1980913856;
			return true;
		case 134217728:
			*iParam1 = -1683207356;
			return true;
		case 1073741824:
			*iParam1 = -1712783565;
			return true;
	}
	return false;
}

bool func_1004(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	bVar0 = _does_metaped_outfit_exist_for_ped_model(iParam1, get_entity_model(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

void func_1005(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 || iParam1);
}

void func_1006(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	if (_is_metaped_using_component(iParam1, 1933068772))
	{
		_set_ped_component_disabled(iParam1, 1933068772, 1);
	}
	if (_is_metaped_using_component(iParam1, 494009478))
	{
		_set_ped_component_disabled(iParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_1004(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_1004(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_1004(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_1004(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_1004(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_1004(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_1004(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_1004(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_1004(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_1004(iParam1, -1100875244))
	{
		if (_is_metaped_using_component(iParam1, -134124598))
		{
			_set_ped_component_disabled(iParam1, -134124598, 1);
		}
		if (_is_metaped_using_component(iParam1, 2071466316))
		{
			_set_ped_component_disabled(iParam1, 2071466316, 1);
		}
		_set_ped_body_component(iParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_1004(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_1004(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_1004(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_1004(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_1004(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_1004(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_1004(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_1004(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_1004(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_1004(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_1004(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_1004(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_1004(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_1004(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_1004(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_1004(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

bool func_1007(int iParam0)
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

int func_1008(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (!func_1007(iParam0))
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

bool func_1009(char[4] cParam0, bool bParam1)
{
	return func_1013(cParam0, bParam1, &uVar0);
}

void func_1010(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(bParam0);
	func_1353(&iVar0);
}

void func_1011(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_1013(cParam0, bParam1, &iVar0))
	{
		return;
	}
	func_1619(cParam0->f_5423[iVar0], iParam2);
}

void func_1012(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_1013(cParam0, bParam1, &iVar0))
	{
		return;
	}
	func_1620(cParam0->f_5423[iVar0], iParam2);
}

bool func_1013(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_252(cParam0->f_5423[iVar0]))
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

void func_1014(var uParam0)
{
	if (func_517(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_517(uParam0, 1024);
	if (func_517(uParam0, 128) || bVar0)
	{
		if (func_517(uParam0, 4096))
		{
			if (!func_517(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1620(uParam0, 2048);
				return;
			}
		}
		else if (func_517(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1619(uParam0, 2048);
		}
		if (func_517(uParam0, 512))
		{
			if (func_518(uParam0->f_10))
			{
				if (func_918(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1621(uParam0->f_10))
					{
						func_522(uParam0->f_10, 1);
						func_1567(uParam0->f_10, 0);
					}
				}
				else if ((func_1621(uParam0->f_10) && !bVar0) && !func_517(uParam0, 16384))
				{
					func_522(uParam0->f_10, 0);
					func_1567(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_918(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_918(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_517(uParam0, 512))
	{
		if (func_518(uParam0->f_10))
		{
			if (func_1621(uParam0->f_10))
			{
				func_522(uParam0->f_10, 0);
				func_1567(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

void func_1015(int iParam0)
{
	if (!func_1056(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 != (*Global_1360165)[iParam0]->f_13 || func_1062(iParam0, 36, 1))
	{
		func_1060(iParam0, 36, 1);
		(*Global_1360165)[iParam0]->f_12 = (*Global_1360165)[iParam0]->f_13;
		func_1622(iParam0, &((*Global_1360165)[iParam0]->f_2));
	}
}

bool func_1016(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_474(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_1017(int iParam0)
{
	if (!func_474(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_1018(int iParam0)
{
	if (!func_474(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_1019(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_474(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_1020(int iParam0)
{
	if (!func_474(iParam0))
	{
		return;
	}
	iVar0 = func_1623(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_1021(int iParam0, bool bParam1)
{
	if (!func_474(iParam0))
	{
		return 0;
	}
	if (!func_1016(iParam0, 2))
	{
		return 0;
	}
	if (func_475(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_477(iParam0)))
	{
		return 1;
	}
	if (func_1016(iParam0, 1) && !bParam1)
	{
		func_1624(iParam0, 128);
		return 1;
	}
	func_1019(iParam0, 129);
	func_1020(iParam0);
	_0xfc77c5b44d5ff7c0(func_477(iParam0));
	func_1625(iParam0, 0);
	return 1;
}

bool func_1022(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_252(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1023(int iParam0, bool bParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
}

void func_1024(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_1626(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_1627(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_1628();
		}
		else
		{
			func_1629(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_1630();
	}
}

int func_1025(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_1026(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1027(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_1028(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1631(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_1029(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_1030(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_1031(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

bool func_1032(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_1033(int iParam0, int iParam1)
{
	if (!func_1032(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

void func_1034(int iParam0, int iParam1)
{
	if (!func_1032(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_1035(int iParam0, int iParam1)
{
	if (!func_1032(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

bool func_1036(int iParam0)
{
	if (func_1632())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_1037(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1038(int iParam0)
{
	iVar0 = func_479(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1633(iVar0);
}

int func_1039(int iParam0, int iParam1)
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
			func_1634(iVar2);
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

void func_1040()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1041(int iParam0, int iParam1)
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

int func_1042(bool bParam0)
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

int func_1043(int iParam0)
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

void func_1044(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1045(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1046(int iParam0, int iParam1)
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
			func_1635((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1635(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_188(&(Global_1898164->f_1[0])))
	{
		func_200(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1047(int iParam0, int iParam1, bool bParam2)
{
	if (!func_497(iParam0))
	{
		return;
	}
	func_1636(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1048(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1049(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1050(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1051()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1052(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1637(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_1053(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 131.0345f;
				case 1:
					return 215.2604f;
				case 2:
					return 213.0345f;
				case 3:
					return 191.0345f;
				case 4:
					return 425.91f;
				case 5:
					return 526.6117f;
				case 6:
					return 196.6117f;
				case 7:
					return 464.6117f;
				case 8:
					return 530.6117f;
				case 9:
					return 119.8781f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -336.189f;
				case 1:
					return 151.21f;
				case 2:
					return 147.811f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 91.6689f;
				case 1:
					return 93.6689f;
				case 2:
					return 91.6689f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 31.6689f;
				case 1:
					return 29.6689f;
				case 2:
					return 15.6689f;
				case 3:
					return 59.8754f;
				case 4:
					return 63.8754f;
				case 5:
					return 81.8754f;
				case 6:
					return 99.8754f;
				case 7:
					return -42.1246f;
				case 8:
					return 93.8754f;
				case 9:
					return -38.1246f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 318.9318f;
				case 1:
					return 316.9318f;
				case 2:
					return 312.9318f;
				case 3:
					return -46.4231f;
				case 4:
					return -42.4231f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 252.5189f;
				case 1:
					return 330.4704f;
				case 2:
					return 338.4704f;
				case 3:
					return 163.5769f;
				case 4:
					return 157.9827f;
				case 5:
					return 268.6117f;
				case 6:
					return 222.6117f;
				case 7:
					return 248.6117f;
				case 8:
					return -179.2413f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 210.4704f;
				case 1:
					return 32.4704f;
				case 2:
					return 142.4704f;
				case 3:
					return 444.5664f;
				case 4:
					return 258.5664f;
				case 5:
					return 19.7469f;
				case 6:
					return -109.8115f;
				case 7:
					return -71.8115f;
				case 8:
					return -95.8115f;
				case 9:
					return 211.1653f;
				case 10:
					return 45.1653f;
				case 11:
					return 352.0495f;
				case 12:
					return 433.1564f;
				case 13:
					return 76.2121f;
				case 14:
					return 72.2121f;
				case 15:
					return 82.2121f;
				case 16:
					return 73.1882f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 148.12f;
				case 1:
					return 609.1564f;
				case 2:
					return 509.1564f;
				case 3:
					return 503.1564f;
				case 4:
					return -22.8436f;
				case 5:
					return -128.8436f;
				case 6:
					return -123.9015f;
				case 7:
					return 150.0985f;
				case 8:
					return 150.0985f;
				case 9:
					return 148.0985f;
				case 10:
					return 148.0985f;
				case 11:
					return 351.1564f;
				case 12:
					return -25.9015f;
				case 13:
					return 180.1651f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 373.2219f;
				case 1:
					return 381.2219f;
				case 2:
					return 363.2219f;
				case 3:
					return 413.2219f;
				case 4:
					return -3.7972f;
				case 5:
					return 379.6949f;
				case 6:
					return 393.6949f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -95.3035f;
				case 1:
					return 133.4656f;
				case 2:
					return 159.4656f;
				case 3:
					return 105.4656f;
				case 4:
					return 211.4656f;
				case 5:
					return 191.4656f;
				case 6:
					return 177.4656f;
				case 7:
					return 157.4656f;
				case 8:
					return 205.4656f;
				case 9:
					return 167.4656f;
				case 10:
					return 149.4656f;
				case 11:
					return 165.4656f;
				case 12:
					return 187.4656f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 144.6965f;
				case 1:
					return 149.4656f;
				case 2:
					return 153.4656f;
				case 3:
					return 207.4656f;
				case 4:
					return 249.4656f;
				case 5:
					return 203.4656f;
				case 6:
					return 95.4656f;
				case 7:
					return 253.4656f;
				case 8:
					return 181.4656f;
				case 9:
					return 253.4656f;
				case 10:
					return 253.4656f;
				case 11:
					return 253.4656f;
				case 12:
					return 177.4656f;
				case 13:
					return 183.4656f;
				case 14:
					return 253.4656f;
				case 15:
					return 253.4656f;
				case 16:
					return 0f;
				case 17:
					return 0f;
				case 18:
					return 246.7884f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 351.1564f;
				case 1:
					return 313.1564f;
				case 2:
					return 151.21f;
				case 3:
					return 419.1564f;
				case 4:
					return 55.1564f;
				case 5:
					return 162.975f;
				case 6:
					return 162.975f;
				case 7:
					return 405.1564f;
				case 8:
					return 197.1564f;
				case 9:
					return 251.1564f;
				case 10:
					return 65.0119f;
				case 11:
					return 153.0119f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 393.1564f;
				case 1:
					return 197.1564f;
				case 2:
					return 195.1564f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 419.1564f;
				case 1:
					return 409.1564f;
				case 2:
					return 425.1564f;
				case 3:
					return 151.21f;
				case 4:
					return 429.1564f;
				case 5:
					return 152.2126f;
				case 6:
					return 60.6296f;
				case 7:
					return -43.3704f;
				case 8:
					return 151.7783f;
				case 9:
					return -64.2217f;
				case 10:
					return 145.7783f;
				case 11:
					return 51.7783f;
				case 12:
					return 81.4381f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -21.4811f;
				case 1:
					return 382.4704f;
				case 2:
					return 392.4704f;
				case 3:
					return 28.7587f;
				case 4:
					return 347.1301f;
				case 5:
					return -327.0626f;
				case 6:
					return 179.1564f;
				case 7:
					return 183.1564f;
				case 8:
					return 181.1564f;
				case 9:
					return 187.1564f;
				case 10:
					return 174.4011f;
				case 11:
					return -193.5989f;
				case 12:
					return -187.5989f;
				case 13:
					return 156.4011f;
				case 14:
					return -201.5989f;
				case 15:
					return -199.5989f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 187.0345f;
				case 1:
					return 185.2604f;
				case 2:
					return 189.0345f;
				case 3:
					return 116.1497f;
				case 4:
					return 61.5987f;
				case 5:
					return 69.2553f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 50.7587f;
				case 1:
					return 36.7587f;
				case 2:
					return 28.7587f;
				case 3:
					return 14.7587f;
				case 4:
					return -59.2413f;
				case 5:
					return 247.2219f;
				case 6:
					return 180.7587f;
				case 7:
					return -201.0626f;
				case 8:
					return 188.7587f;
				case 9:
					return -168.8497f;
				case 10:
					return -161.2413f;
				case 11:
					return -128.8497f;
				case 12:
					return 292.7587f;
				case 13:
					return -150.8497f;
				case 14:
					return -2.6876f;
				case 15:
					return 352.5185f;
				case 16:
					return 63.2628f;
				case 17:
					return 147.2628f;
				case 18:
					return 21.2628f;
				case 19:
					return 322.1286f;
				case 20:
					return 322.1286f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 267.0345f;
				case 1:
					return 115.0345f;
				case 2:
					return 225.0345f;
				case 3:
					return 271.0345f;
				case 4:
					return 297.0345f;
				case 5:
					return 67.0345f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 267.0345f;
				case 1:
					return 113.0345f;
				case 2:
					return 221.0345f;
				case 3:
					return 271.0345f;
				case 4:
					return -56.9655f;
				case 5:
					return 77.0345f;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 271.0345f;
				case 1:
					return 81.0345f;
				case 2:
					return 235.0345f;
				case 3:
					return 285.0345f;
				case 4:
					return 291.0345f;
				case 5:
					return 81.0345f;
			}
			break;
	}
	return 0f;
}

void func_1054(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1638();
	}
	else
	{
		return;
	}
	func_1639();
	Global_40.f_9.f_14 = func_283();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1640())
		{
			func_369(Global_1310720->f_1);
		}
		else if (func_1641() == func_370(Global_36, 1) && func_1642() != 2)
		{
			func_369(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_369(Global_36);
		}
		func_1643(Global_36, &vVar0, &uVar4);
		if (!func_1640())
		{
			if (func_1644(vVar0, Global_36) < func_1644(Global_40.f_9.f_7, Global_36))
			{
				func_369(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_370(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1643(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_227(Global_1935630, 8192);
	}
	func_1645();
}

void func_1055(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1056(iParam0))
	{
		return;
	}
	func_1646(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_1056(int iParam0)
{
	return iParam0 > -1;
}

bool func_1057(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1058(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1056(iParam0))
		{
			return;
		}
	}
	func_1647(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_1059(int iParam0)
{
	func_1058(iParam0, 36, 1);
}

void func_1060(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1056(iParam0))
		{
			return;
		}
	}
	func_1647(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_1061(int iParam0, bool bParam1)
{
	if (!func_518(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1648(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_1062(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1056(iParam0))
		{
			return false;
		}
	}
	func_1647(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_1063(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_518(iParam0))
	{
		bVar1 = func_554(iParam0);
		if (!is_entity_dead(bVar1))
		{
			iVar0 = get_ped_max_health(bVar1);
			set_ped_config_flag(bVar1, 179, true);
			func_1649(iParam0);
		}
	}
	if (func_1062(iParam0, 5, 1))
	{
		set_ped_config_flag(func_554(iParam0), 137, true);
	}
}

void func_1064(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1056(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1060(iParam0, 50, 1);
		func_1060(iParam0, 48, 1);
		func_1060(iParam0, 49, 1);
		func_1060(iParam0, 51, 1);
		func_1060(iParam0, 52, 1);
		func_1060(iParam0, 54, 1);
		func_1060(iParam0, 55, 1);
	}
	else
	{
		func_1058(iParam0, 50, 1);
		func_1058(iParam0, 48, 1);
		func_1058(iParam0, 49, 1);
		func_1058(iParam0, 51, 1);
		if (bParam3)
		{
			func_1058(iParam0, 54, 1);
		}
		else
		{
			func_1060(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1058(iParam0, 52, 1);
			if (bParam3)
			{
				func_1058(iParam0, 55, 1);
			}
		}
		else
		{
			func_1060(iParam0, 52, 1);
			if (!bParam3)
			{
				func_1060(iParam0, 55, 1);
			}
		}
	}
}

void func_1065(int iParam0, bool bParam1)
{
	if (!func_1056(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_554(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_554(iParam0), 204, false);
	}
}

void func_1066(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_518(iParam0))
	{
		return;
	}
	if (func_519(iParam0))
	{
		if (!func_256(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1062(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1061(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	bVar1 = func_554(iParam0);
	if (((does_entity_exist(bVar1) && func_1650(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_1058(iParam0, 2, 1);
	}
	else
	{
		func_1651(iParam0);
		func_1058(iParam0, 1, 1);
	}
}

void func_1067(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_518(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

bool func_1068(int iParam0)
{
	if (!func_518(iParam0))
	{
		return false;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_1069(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1056(iParam1))
	{
		return;
	}
	bVar0 = func_1068(iParam1);
	if (func_1652(iParam1))
	{
		if (!func_1653(iParam1))
		{
			return;
		}
	}
	func_1060(iParam1, 39, 1);
	func_1654(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1654(iParam1, 8, 0);
	if (does_entity_exist(bVar0))
	{
		if (!bParam2)
		{
			func_1654(iParam1, 512, 1);
			set_ped_keep_task(bVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(bVar0, false);
			func_1058(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1655(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_1070(int iParam0)
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

void func_1071(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_213(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1656(iVar6);
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

void func_1072(int iParam0, int iParam1)
{
	iParam0 = func_264(iParam0);
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

bool func_1073(int iParam0, int iParam1)
{
	iParam0 = func_264(iParam0);
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

void func_1074(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1658(func_1657(255), 109029619));
	}
	else if (func_302())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1101();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1075(int iParam0)
{
	iParam0 = func_264(iParam0);
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

void func_1076(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1658(func_1657(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_302())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1101())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1077(int iParam0)
{
	iParam0 = func_264(iParam0);
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

float func_1078(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1079(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1512(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1075(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1075(iParam0) + 1;
	fVar6 = func_1659(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1660(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1080(int iParam0)
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

void func_1081(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1082()
{
	if (func_336())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1083(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1661((Global_40.f_4283.f_325 + iParam0));
}

void func_1084(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1082())
	{
		func_709(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_709(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1085(int iParam0)
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

char* func_1086(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1087(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1088(int iParam0)
{
	func_1096(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1089(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1090(1);
	}
}

void func_1090(bool bParam0)
{
	if (bParam0)
	{
		func_1441(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1662(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1091(int iParam0)
{
	if (!func_188(iParam0))
	{
		return -15;
	}
	return func_1663(iParam0);
}

bool func_1092(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_705(iParam1) || !func_705(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1093(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1094(int iParam0)
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

bool func_1095(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1096(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1664(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1097(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1098(int iParam0, int iParam1, bool bParam2)
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

int func_1099()
{
	iVar0 = func_559();
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

int func_1100(int iParam0)
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
	bVar1 = func_1427(absf(bVar1) < 1f, func_1427(bVar1 < 0f, -1f, 1f), bVar1);
	return ceil(bVar1);
}

bool func_1101()
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

int func_1102(int iParam0)
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

int func_1103()
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

void func_1104(int iParam0, bool bParam1, int iParam2)
{
	func_1665((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1666(iParam0);
}

void func_1105(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1667(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1106(bool bParam0)
{
	bVar3 = false;
	if (func_1668(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1669(iVar5, &iVar2, &iVar0))
			{
				if (!func_579(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1670(iVar2);
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
							if (func_598(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1099() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1099() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1671();
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

char* func_1107(int iParam0)
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

bool func_1108(int iParam0)
{
	return func_598(iParam0) == -427144552;
}

bool func_1109(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_600(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1114(iParam0, &uVar0, 1, 0, 0);
	}
	return func_345(iParam0, 1, 0);
}

void func_1110(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_598(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_605(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_606(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_583(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_659(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1111(int iParam0, int iParam1)
{
	if (func_599(iParam0, 58855631))
	{
		func_1262(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1112(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (!func_607(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1042(bParam3), iParam0);
}

int func_1113(int iParam0, bool bParam1)
{
	if (func_611(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1042(bParam1), iParam0, 0);
}

bool func_1114(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1672(&iParam0);
	if (!func_579(iParam0, 0))
	{
		return false;
	}
	if (!func_607(0))
	{
		bParam3 = true;
	}
	if (func_1108(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1245(0) };
			Var4.f_9 = -1591664384;
			if (!func_1137(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1138(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1246(iParam0, 1))
			{
				if (!func_1137(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1138(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1673(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1112(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1674(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_1042(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1115(int iParam0, int iParam1)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_598(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_599(iParam0, 1399091007))
	{
		func_1179(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1116(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1675(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1676(&Var0, func_1245(0));
	}
	if (!func_1677(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1189(iVar14);
	return uVar15;
}

int func_1117()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1118(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1119(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1678(iParam0);
	fVar1 = func_1679(iParam0);
	if ((Global_1347477->f_117 || !func_601(31)) || !func_1680(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1681(iVar0) >= 7)
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
	func_1682(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_709(_create_var_string(6, func_1683(iParam0), fVar1), "itemtype_textures", func_1684(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1120(int iParam0)
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

int func_1121(int iParam0, int iParam1)
{
	if (!func_1277(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1122(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_594() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1685(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1686(), 12);
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
			else if (func_1161() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1687(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1161(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1688(), 13);
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
			else if (func_1162() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1689(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1162(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1121(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1123(int iParam0, int iParam1, int iParam2)
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

bool func_1124(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1125(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1690(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_345(iVar2, 1, 0) || func_1692(func_1691(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1130(func_1690(iVar0))), func_1130(func_1690(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1161() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1693(iVar0)), func_1693(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1687() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1693(iVar0)), func_1693(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1693(iVar0)), func_1693(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1172(iParam3, func_1694(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1168(iVar2) - iParam7) >= func_1121(iParam3, func_1695(iVar0));
				}
				else
				{
					bVar1 = func_1168(iVar2) >= func_1121(iParam3, func_1695(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1168(iVar2) + iParam7) >= func_1121(iParam3, func_1695(iVar0));
			}
			else
			{
				bVar1 = func_1168(iVar2) >= func_1121(iParam3, func_1695(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1696(iVar2)), func_1696(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1697(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1698(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1698(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1162() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1699(iVar0)), func_1699(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1689() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1699(iVar0)), func_1699(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1699(iVar0)), func_1699(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1172(iParam3, func_1694(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1168(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1700(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1700(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1701(iVar2)), func_1701(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1127(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1688() >= 13)
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

bool func_1128(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_188(func_201(0)) && ((func_1702(0) == 1 || func_1702(0) == 8) || func_1702(0) == 6))
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

var func_1129(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1130(int iParam0)
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

bool func_1131(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1132(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1133(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1134(int iParam0)
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
			func_1703(1);
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
			func_1704(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1704(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1704(3);
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
			func_1705(1);
			break;
		case 34:
			func_1706(1);
			break;
		case 35:
			func_1707(1);
			break;
		case 36:
			break;
		case 37:
			func_1708(0);
			break;
		case 38:
			func_1709(0);
			break;
		case 39:
			func_1710(0);
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
			if ((!&Global_1879534 && func_394()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_716("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_323(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_394()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_716("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_323(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_394()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_716("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_323(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_394()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_716("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_323(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1202(99217379) || func_1711(99217379) == 2110595215)
				{
					if (func_1101())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_345(iVar0, 1, 0))
					{
						func_652(iVar0, 1, 752097756);
					}
					func_631(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_345(1013902307, 1, 0))
				{
					func_652(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_345(1013902307, 1, 0))
				{
					func_652(1013902307, 1, 752097756);
				}
				if (!func_345(142640135, 1, 0))
				{
					func_652(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_345(786809402, 1, 0))
				{
					func_652(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_345(786809402, 1, 0))
				{
					func_652(786809402, 1, 752097756);
				}
				if (!func_345(-518019409, 1, 0))
				{
					func_652(-518019409, 1, 752097756);
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
			func_1712();
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

bool func_1135(int iParam0)
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

int func_1136(int iParam0, int iParam1)
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

bool func_1137(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1674(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1138(int iParam0, var uParam1, int iParam2)
{
	if (func_1713(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1139(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_579(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1042(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1140(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1714(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1249(*uParam1, &Var0, bParam6, 0))
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
	if (!func_607(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1042(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1141(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1715(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1142(int iParam0)
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
	iVar2 = func_283();
	func_332(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1143(int iParam0)
{
	if (func_1716(iParam0))
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

bool func_1144(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1145(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1146(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_601(50))
			{
				if (!func_601(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_601(51))
			{
				if (!func_601(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1147(int iParam0, int iParam1, var uParam2)
{
	if (!func_579(iParam1, 0))
	{
		return false;
	}
	if (func_598(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_603(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_677(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_599(iParam1, 866047851))
	{
		iVar5 = func_678(iVar4, 1);
		if (func_1717(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_603(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_599(iParam1, -1638171711))
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
			if (func_1718(1868067663, &uVar0))
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
				iVar10 = func_1719(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1719(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_603(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_599(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1720(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1148()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1149()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1150()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_345(func_1721(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1151(int iParam0)
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

bool func_1152(int iParam0, int iParam1)
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
	if (func_345(iVar0, 1, 0) && func_345(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1153(int iParam0)
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

bool func_1154(int iParam0, int iParam1)
{
	iVar0 = func_1722(iParam0);
	if (iVar0 != -15)
	{
		func_332(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_706(iVar0, 1);
	}
	return false;
}

void func_1155(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1156(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1157(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1158(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1159(int iParam0)
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
			iVar1 = func_1168(iVar9);
			iVar2 = func_1168(iVar10);
			iVar3 = func_1168(iVar11);
			iVar5 = func_1169(iVar9);
			iVar6 = func_1169(iVar10);
			iVar7 = func_1169(iVar11);
			if (iParam0 != 2)
			{
				iVar4 = func_1168(iVar12);
				iVar8 = func_1169(iVar12);
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

void func_1160(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1161()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1723(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1162()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1163(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1700(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1700(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1700(iVar0))
		{
			*sParam2++;
		}
		if (func_1700(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1700(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1700(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1700(iVar0))
		{
			*sParam2++;
		}
		if (func_1700(iVar1))
		{
			*sParam2++;
		}
		if (func_1700(iVar0) && func_1700(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1700(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1700(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1700(iVar0))
		{
			*sParam2++;
		}
		if (func_1700(iVar1))
		{
			*sParam2++;
		}
		if (func_1700(iVar2))
		{
			*sParam2++;
		}
		if ((func_1700(iVar0) && func_1700(iVar1)) && func_1700(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1700(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1700(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1700(iVar0))
		{
			*sParam2++;
		}
		if (func_1700(iVar1))
		{
			*sParam2++;
		}
		if (func_1700(iVar2))
		{
			*sParam2++;
		}
		if (func_1700(iVar3))
		{
			*sParam2++;
		}
		if (((func_1700(iVar0) && func_1700(iVar1)) && func_1700(iVar2)) && func_1700(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1164(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1724(1497516462);
			func_1725(2016141805);
			func_1725(1010885152);
			func_1725(-502324015);
			break;
		case 2016141805:
			func_1725(1497516462);
			func_1724(2016141805);
			func_1725(1010885152);
			func_1725(-502324015);
			break;
		case 1010885152:
			func_1725(1497516462);
			func_1725(2016141805);
			func_1724(1010885152);
			func_1725(-502324015);
			break;
		case -502324015:
			func_1725(1497516462);
			func_1725(2016141805);
			func_1725(1010885152);
			func_1724(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1725(-538889627);
			func_1725(-538880323);
			func_1725(-1056767524);
			func_1724(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1726();
			func_1724(iParam0);
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
			func_1727();
			func_1724(iParam0);
			break;
		case 2019386373:
			func_1725(-664252410);
			func_1725(2109952320);
			func_1724(2019386373);
			break;
		case -664252410:
			func_1725(2019386373);
			func_1725(2109952320);
			func_1724(-664252410);
			break;
		case 2109952320:
			func_1725(2019386373);
			func_1725(-664252410);
			func_1724(2109952320);
			break;
		case -1674179981:
			func_1725(-1835851517);
			func_1725(-1838352012);
			func_1724(-1674179981);
			break;
		case -1835851517:
			func_1725(-1674179981);
			func_1725(-1838352012);
			func_1724(-1835851517);
			break;
		case -1838352012:
			func_1725(-1674179981);
			func_1725(-1835851517);
			func_1724(-1838352012);
			break;
		case -1717960576:
			func_1725(210001842);
			func_1724(-1717960576);
			break;
		case 210001842:
			func_1725(-1717960576);
			func_1724(210001842);
			break;
		case -150493654:
			func_1725(-1271608261);
			func_1725(1846061697);
			func_1725(-1145519186);
			func_1724(-150493654);
			break;
		case -1271608261:
			func_1725(-150493654);
			func_1725(1846061697);
			func_1725(-1145519186);
			func_1724(-1271608261);
			break;
		case 1846061697:
			func_1725(-150493654);
			func_1725(-1271608261);
			func_1725(-1145519186);
			func_1724(1846061697);
			break;
		case -1145519186:
			func_1725(-150493654);
			func_1725(-1271608261);
			func_1725(1846061697);
			func_1724(-1145519186);
			break;
		case 1766284049:
			func_1725(280705402);
			func_1725(1926308480);
			func_1724(1766284049);
			break;
		case 280705402:
			func_1725(1766284049);
			func_1725(1926308480);
			func_1724(280705402);
			break;
		case 1926308480:
			func_1725(1766284049);
			func_1725(280705402);
			func_1724(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1725(439465264);
				func_1724(1609506757);
			}
			else
			{
				func_1725(1609506757);
				func_1725(439465264);
			}
			break;
		case 439465264:
			if (func_490(1609506757))
			{
				if (bParam1)
				{
					func_1724(439465264);
				}
				else
				{
					func_1725(439465264);
				}
			}
			break;
		case 1822001510:
			func_1725(-1612662716);
			func_1724(1822001510);
			break;
		case -1612662716:
			func_1725(1822001510);
			func_1724(-1612662716);
			break;
		case 1306158345:
			func_1725(1952610440);
			func_1725(-223469678);
			func_1725(-404698347);
			func_1725(1517904467);
			func_1724(1306158345);
			break;
		case 1952610440:
			func_1725(1306158345);
			func_1725(-223469678);
			func_1725(-404698347);
			func_1725(1517904467);
			func_1724(1952610440);
			break;
		case -223469678:
			func_1725(1306158345);
			func_1725(1952610440);
			func_1725(-404698347);
			func_1725(1517904467);
			func_1724(-223469678);
			break;
		case -404698347:
			func_1725(1306158345);
			func_1725(1952610440);
			func_1725(-223469678);
			func_1725(1517904467);
			func_1724(-404698347);
			break;
		case 1517904467:
			func_1725(1306158345);
			func_1725(1952610440);
			func_1725(-223469678);
			func_1725(-404698347);
			func_1724(1517904467);
			break;
		case 1376646519:
			func_1725(931649776);
			func_1725(-434590080);
			func_1725(1743048395);
			func_1725(449774763);
			func_1724(1376646519);
			break;
		case 931649776:
			func_1725(1376646519);
			func_1725(-434590080);
			func_1725(1743048395);
			func_1725(449774763);
			func_1724(931649776);
			break;
		case -434590080:
			func_1725(1376646519);
			func_1725(931649776);
			func_1725(1743048395);
			func_1725(449774763);
			func_1724(-434590080);
			break;
		case 1743048395:
			func_1725(1376646519);
			func_1725(931649776);
			func_1725(-434590080);
			func_1725(449774763);
			func_1724(1743048395);
			break;
		case 449774763:
			func_1725(1376646519);
			func_1725(931649776);
			func_1725(-434590080);
			func_1725(1743048395);
			func_1724(449774763);
			break;
		case -1414537028:
			func_1725(38162571);
			func_1725(1350391819);
			func_1725(54073871);
			func_1724(-1414537028);
			break;
		case 38162571:
			func_1725(-1414537028);
			func_1725(1350391819);
			func_1725(54073871);
			func_1724(38162571);
			break;
		case 1350391819:
			func_1725(-1414537028);
			func_1725(38162571);
			func_1725(54073871);
			func_1724(1350391819);
			break;
		case 54073871:
			func_1725(-1414537028);
			func_1725(38162571);
			func_1725(1350391819);
			func_1724(54073871);
			break;
		case 198200492:
			func_1724(198200492);
			func_1725(-1124061431);
			func_1725(52706132);
			func_1725(-259123672);
			break;
		case -1124061431:
			func_1725(198200492);
			func_1724(-1124061431);
			func_1725(52706132);
			func_1725(-259123672);
			break;
		case 52706132:
			func_1725(198200492);
			func_1725(-1124061431);
			func_1724(52706132);
			func_1725(-259123672);
			break;
		case -259123672:
			func_1725(198200492);
			func_1725(-1124061431);
			func_1725(52706132);
			func_1724(-259123672);
			break;
		case -919512195:
			func_1724(-919512195);
			func_1725(-1925798111);
			func_1725(420709909);
			func_1725(1703426636);
			break;
		case -1925798111:
			func_1724(-1925798111);
			func_1725(-919512195);
			func_1725(420709909);
			func_1725(1703426636);
			break;
		case 420709909:
			func_1724(420709909);
			func_1725(-919512195);
			func_1725(-1925798111);
			func_1725(1703426636);
			break;
		case 1703426636:
			func_1724(1703426636);
			func_1725(-919512195);
			func_1725(-1925798111);
			func_1725(420709909);
			break;
		case -1223121209:
			func_1724(-1223121209);
			func_1725(630808005);
			break;
		case 630808005:
			func_1724(630808005);
			func_1725(-1223121209);
			break;
		case 1453909576:
			func_1724(1453909576);
			func_1725(1643531967);
			break;
		case 1643531967:
			func_1724(1643531967);
			func_1725(1453909576);
			break;
		case 0:
			func_1724(0);
			func_1725(473295046);
			func_1725(-1738165526);
			break;
		case 473295046:
			func_1724(473295046);
			func_1725(0);
			func_1725(-1738165526);
			break;
		case -1738165526:
			func_1724(-1738165526);
			func_1725(0);
			func_1725(473295046);
			break;
		case 932909855:
			func_1724(932909855);
			func_1725(2051822093);
			break;
		case 2051822093:
			func_1724(2051822093);
			func_1725(932909855);
			break;
		case 405586984:
			func_1724(405586984);
			func_1725(1509509592);
			func_1725(-959357075);
			func_1725(-1311865656);
			break;
		case 1509509592:
			func_1724(1509509592);
			func_1725(405586984);
			func_1725(-959357075);
			func_1725(-1311865656);
			break;
		case -959357075:
			func_1724(-959357075);
			func_1725(1509509592);
			func_1725(405586984);
			func_1725(-1311865656);
			break;
		case -1311865656:
			func_1724(-1311865656);
			func_1725(1509509592);
			func_1725(-959357075);
			func_1725(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1724(-524145696);
			}
			else
			{
				func_1725(-524145696);
			}
			func_1725(1626481264);
			func_1725(282809459);
			break;
		case 282809459:
			func_1724(282809459);
			func_1725(1626481264);
			func_1725(-524145696);
			break;
		case 1626481264:
			func_1724(1626481264);
			func_1725(-524145696);
			func_1725(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1724(885203519);
			}
			else
			{
				func_1725(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1724(-1080627546);
			}
			else
			{
				func_1725(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_490(iParam0))
				{
					func_1724(iParam0);
				}
			}
			else if (func_490(iParam0))
			{
				func_1725(iParam0);
			}
			break;
	}
}

void func_1165(int iParam0)
{
	if (!func_1728(iParam0))
	{
		func_1730(func_1729(iParam0));
	}
}

int func_1166()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1728(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1167(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1168(iVar9);
	iVar2 = func_1168(iVar10);
	iVar3 = func_1168(iVar11);
	iVar5 = func_1169(iVar9);
	iVar6 = func_1169(iVar10);
	iVar7 = func_1169(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1168(iVar12);
		iVar8 = func_1169(iVar12);
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

int func_1168(int iParam0)
{
	if (func_345(iParam0, 1, 0))
	{
		iVar0 = func_583(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1169(int iParam0)
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

int func_1170(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1171(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1172(int iParam0, int iParam1)
{
	if (!func_1277(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1173(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1172(iParam1, 5) || iParam0 == func_1172(iParam1, 6)) || iParam0 == func_1172(iParam1, 7)) || iParam0 == func_1172(iParam1, 8)) || iParam0 == func_1172(iParam1, 9))
	{
		func_1163(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_595(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_597(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1174(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1172(iParam1, 5) || iParam0 == func_1172(iParam1, 6)) || iParam0 == func_1172(iParam1, 7)) || iParam0 == func_1172(iParam1, 8)) || iParam0 == func_1172(iParam1, 9))
	{
		if (func_1163(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_595(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_597(51, 0, 0, iVar0, func_1121(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_595(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_597(51, 0, 0, iVar0, func_1121(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1175()
{
	if (func_189((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1176(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1177(int iParam0)
{
	if (!func_1731(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1178(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1179(int iParam0, int iParam1, var uParam2)
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

bool func_1180(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1572();
	if (iParam2 == 39)
	{
		Var0 = { func_690(iParam0, 1, 0) };
		iParam2 = func_678(func_691(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_599(iParam0, 866047851) && func_1717(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1182(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1732(func_1250(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1733(iParam2);
	func_1574(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1231(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1231(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1237(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1734(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1735(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1735(&(Global_1946804->f_1378), 1, 0);
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
				func_1468(func_1250(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1181(bool bParam0, bool bParam1, bool bParam2)
{
	func_1736(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1182(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1183()
{
	func_1737(&(Global_1946804->f_2776));
	func_1738(32768);
	func_1468(1108822547, 8, 6);
}

int func_1184(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_678(iParam0, 1);
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

void func_1185(int iParam0)
{
	if (func_1739(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1740(Var0);
}

void func_1186(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1740(Var0);
}

bool func_1187(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1042(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1188(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1189(int iParam0)
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

float func_1190()
{
	if (func_1741())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_464(2);
	}
	if (Global_1347477->f_119)
	{
		return func_464(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1742();
	fVar2 = func_1743();
	fVar3 = func_1744();
	fVar4 = func_1745();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1746()));
	fVar7 = (func_464(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1747(3, round((to_float(iVar8) * fVar10)), 0);
	func_1748(3, fVar9, fVar9 > 100f);
	return func_1749(fVar7, -100f, 100f);
}

float func_1191()
{
	if (func_1741())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_464(1);
	}
	if (Global_1347477->f_119)
	{
		return func_464(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1742();
	fVar2 = func_1743();
	fVar3 = func_1744();
	fVar4 = func_1745();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1746()));
	fVar7 = (func_464(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1747(2, round((to_float(iVar8) * fVar10)), 0);
	func_1748(2, fVar9, fVar9 > 100f);
	return func_1749(fVar7, -100f, 100f);
}

float func_1192()
{
	if (func_1741())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_464(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1750())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1751())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_464(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1742();
	fVar2 = func_1743();
	fVar3 = func_1744();
	fVar4 = func_1745();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1746()));
	fVar7 = (func_464(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1747(1, round((to_float(iVar8) * fVar10)), 0);
	func_1748(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_464(0);
	}
	return func_1749(fVar7, -100f, 100f);
}

bool func_1193(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1194(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1195(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_579(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1114(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_607(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1042(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1196(int iParam0, bool bParam1)
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
				return func_1752();
			}
			break;
	}
	return 0;
}

int func_1197(int iParam0)
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

bool func_1198(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1199(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1198(iParam0))
	{
		return;
	}
	if (func_1753(iParam0))
	{
		return;
	}
	if (!func_1754(iParam0))
	{
		func_1755(iParam0, 1, 0);
	}
	iVar0 = func_1756(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1757(iParam0, 512))
		{
			func_689(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_212() && !bParam1) && !func_195(0, 0, 1))
	{
		func_718(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1758(iParam0, 6);
	if (bParam2)
	{
		if (!func_195(0, 0, 1))
		{
			func_365(1, 4);
		}
	}
}

bool func_1200(int iParam0, bool bParam1)
{
	return func_1196(iParam0, 0) < func_1759(iParam0, bParam1);
}

bool func_1201(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_603(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1202(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_678(iParam0, 1)] != &Global_1946804->f_57[func_678(iParam0, 1)];
}

void func_1203(int iParam0, int iParam1)
{
	if (func_599(iParam1, 130796156))
	{
		func_1760(iParam1, 0);
	}
	else if (func_599(iParam1, 930141731))
	{
		func_1760(iParam1, 1);
		func_1761(iParam0);
	}
}

void func_1204(var uParam0, int iParam1)
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

int func_1205(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1762(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1763(uParam2, iParam0, Var1);
	return 1;
}

int func_1206(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1207(int iParam0)
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

int func_1208(int iParam0)
{
	if (!func_1764(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1209()
{
	return !&Global_1911774;
}

void func_1210(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1211(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1212(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1213(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1214(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1765(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1215(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1765(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1216(bool bParam0)
{
	if (bParam0)
	{
		func_316(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1217();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1766(2032023096);
		func_319(-615217896);
		func_674(655868243, 1, 1, -142743235, 1);
		func_1768(146323340, func_1767());
		Var0 = { func_1520() };
		if (func_1769(&Var0) == -1387633835)
		{
			func_1770(&Var0);
			func_1771(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1772(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1513(iVar6) == 2010625508)
			{
				func_1773(iVar6, iVar7);
				func_1774(iVar6, iVar8);
				func_1775(iVar6, iVar9);
				func_1776(iVar6, 0);
				if (func_1777(iVar6))
				{
					func_1778(iVar6);
				}
				iVar10 = func_1779(iVar8);
				func_1780(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1217()
{
	if (!func_1781(-1898635967, func_1767(), 1))
	{
		return 0;
	}
	if (func_336())
	{
		if (!func_1781(146323340, func_1767(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1218()
{
	func_330(34411519);
	func_330(834124286);
	func_330(-570967010);
}

void func_1219(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_316(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_674(-1080874779, 3, 1, -142743235, 1);
		func_674(-223790555, 3, 1, -142743235, 1);
		func_674(1566032147, 3, 1, -142743235, 1);
		func_674(891311852, 5, 1, -142743235, 1);
		func_674(-1353737667, 5, 1, -142743235, 1);
		func_674(-330313895, 5, 1, -142743235, 1);
		func_674(-2051332199, 5, 1, -142743235, 1);
		func_674(1237770824, 5, 1, -142743235, 1);
		func_674(-1795542128, 3, 1, -142743235, 1);
		func_674(-1757588258, 3, 1, -142743235, 1);
		func_674(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1772(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1513(iVar0) == 153881023)
			{
				func_1773(iVar0, iVar1);
				func_1774(iVar0, iVar2);
				func_1775(iVar0, iVar3);
				func_1776(iVar0, 0);
				if (func_1777(iVar0))
				{
					func_1778(iVar0);
				}
				iVar4 = func_1779(iVar2);
				func_1780(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1217();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1220(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1782(iParam0);
	if (bParam3)
	{
		func_717(iParam0, sParam1, iParam2);
	}
}

bool func_1221(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1222(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1223()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1187("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1188(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1138(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1189(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1189(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1224(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1783(Param1, iParam5, &Var5, 0))
	{
		func_1140(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1195(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1784(Var19, 1);
}

bool func_1225(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1675(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1676(&Var0, func_1245(0));
	}
	if (!func_1677(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1188(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1140(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1189(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1226(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_579(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_690(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1785(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1139(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1140(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1227(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_599(iParam0, 606799272))
		{
			func_1786(iParam0, iParam1);
		}
		if (func_599(iParam0, -1112814642) && func_599(iParam0, -1697809989))
		{
			func_627(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1228(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1787(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_603(iParam0) != -999503751)
		{
			func_1788(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_603(iParam0) != -999503751)
	{
		func_1788(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1789(iParam0, 1);
	return 1;
}

void func_1229()
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

void func_1230(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1575(0);
	}
	if (bParam0)
	{
		func_1242(8);
		func_1242(512);
	}
	else
	{
		func_1242(8);
		func_1242(16);
	}
}

void func_1231(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1232(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_680();
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

int func_1233(int iParam0)
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

void func_1234(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1790(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1250(iVar0, 1);
			if (func_1465(iVar0, iParam1))
			{
				vVar4 = { func_682(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1464(iVar7, 4))
				{
					func_1468(iVar7, 4, 6);
				}
			}
			else
			{
				func_1467(iVar7, 4, 6);
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

bool func_1235(int iParam0)
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
	func_1791(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1236(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1237(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_603(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1465(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1574(iVar1, iVar3);
		}
	}
	if (func_1202(-1586649372) && func_1465(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1574(iVar1, iVar3);
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
						func_1574(iVar1, iVar3);
					}
				}
			}
			func_1792(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1792(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1574(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1792(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1574(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1574(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1792(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1792(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1574(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1792(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1574(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1574(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_603(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1574(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1720(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_603(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1574(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_599(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1574(iVar1, iVar3);
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
						func_1574(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1720(&(Global_1946804->f_1497.f_1[iVar1])) || func_599(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1574(iVar1, iVar3);
					}
				}
			}
			switch (func_603(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_603(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1574(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_603(&(uParam0->f_1[iVar1])) || func_599(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1574(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1238(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1239(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1193(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1193(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1240(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1193(iParam0, 65536) && !func_1193(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1193(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1193(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1241()
{
	return Global_1905944->f_5694;
}

void func_1242(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1243(struct<4> Param0)
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
			if (func_1793(Param0))
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
			func_1794(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1242(8);
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
			if (func_1793(Param0))
			{
				return;
			}
			func_1794(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1242(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1186(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1244(bool bParam0)
{
	return func_1139(1328661203, func_1795(), -1591664384, bParam0);
}

struct<4> func_1245(bool bParam0)
{
	iVar0 = func_1042(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1139(923904168, func_1244(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1139(923904168, func_1244(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1139(923904168, func_1244(bParam0), -740156546, 0);
}

bool func_1246(int iParam0, bool bParam1)
{
	if (func_603(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_601(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1247(bool bParam0)
{
	iVar0 = func_1042(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1139(271701509, func_1244(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1139(271701509, func_1244(bParam0), 12999093, 0);
}

bool func_1248(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_603(iParam0);
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

bool func_1249(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_1042(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1250(int iParam0, int iParam1)
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

int func_1251(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1252(int iParam0, int iParam1)
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

void func_1253(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1254(int iParam0, int iParam1)
{
	iVar0 = func_698(*iParam0);
	iVar1 = func_697(*iParam0);
	if (iParam1 < 1 || iParam1 > func_703(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1255(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1256(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1257(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1258(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1259(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1260(int iParam0)
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

bool func_1261(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1108(iParam0))
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

int func_1262(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_579(iParam0, 0))
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

int func_1263(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1672(&iParam0);
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (!func_607(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1112(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1674(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_1042(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1264(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_599(iParam0, -5284486))
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
		if (func_1796(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_660(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_663(iVar62, iVar61);
					if (func_579(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1264(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1264(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1796(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1265(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1797(1);
}

void func_1266(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1798(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_322(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1798(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_322(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1267()
{
	return Global_40.f_4283.f_325;
}

bool func_1268(int iParam0)
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

bool func_1269(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1270(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1271(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1272(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1273(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1274(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_394();
	bVar1 = false;
	if (bVar0 && !func_1799(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1799(37)) && !func_1799(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1799(43)) && !func_1799(44))
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
		if (func_1514(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1514(1) == 1)
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

int func_1275()
{
	return Global_40.f_1095.f_3054;
}

bool func_1276(int iParam0)
{
	iParam0 = func_264(iParam0);
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

bool func_1277(int iParam0, var uParam1)
{
	if (!func_1800(iParam0))
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

int func_1278()
{
	if (func_394())
	{
		if (!func_1799(3))
		{
			return func_1801(43);
		}
		if (func_1799(38) && !func_1799(43))
		{
			return func_1802(8);
		}
	}
	return 0;
}

bool func_1279(int iParam0)
{
	if (!func_245(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1803(iParam0));
}

Vector3 func_1280(int iParam0, int iParam1)
{
	func_1277(15, &Var0);
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

int func_1281(int iParam0, int iParam1)
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
	iVar0 = func_1804(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1277(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1805(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1282(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1806(iParam0);
	if (func_490(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1283(int iParam0)
{
	if (!func_1277(15, &Var0))
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

bool func_1284(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1807(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1808(5))
	{
		if (func_1809(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1507(vParam0);
	if (bParam6)
	{
		iVar1 = func_370(vParam0, 1);
		if (func_116(iVar1) || func_1810(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1811(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1812())
	{
		if (func_1813(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1814(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_370(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1815(iParam3, iParam4))
	{
		return false;
	}
	if (func_1816(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1817(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_394())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1818(vParam0, bParam10) || func_1819(vParam0, bParam10))
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

int func_1285(vector3 vParam0)
{
	iVar0 = func_1820(vParam0, 0f, 0f, 0, 2);
	return func_1820(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1286(int iParam0)
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

char* func_1287(bool bParam0)
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
	return func_1476(iVar0);
}

char* func_1288(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1821(iVar0);
}

char* func_1289(int iParam0)
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

void func_1290(char[4] cParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1593(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 56933;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1291(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1593(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1292()
{
	Global_1905944->f_5695 = 1;
}

void func_1293(var uParam0)
{
	if (!func_455(*uParam0, 0))
	{
		return;
	}
	clear_ped_wetness(*uParam0);
	clear_ped_env_dirt(*uParam0);
	func_1454(*uParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		clear_ped_damage_decal_by_zone(*uParam0, iVar0, "ALL");
		iVar0++;
	}
}

void func_1294(int iParam0)
{
	if (!_is_anim_scene_loaded(&(uLocal_105[iParam0]), true, false))
	{
		return;
	}
	switch (iParam0)
	{
		case 2:
			func_1822(&(uLocal_105[iParam0]), "John", Global_35);
			func_1822(&(uLocal_105[iParam0]), "AbigailRoberts", &(iLocal_162[0]));
			func_1822(&(uLocal_105[iParam0]), "JackMarston_Teen", &(iLocal_162[1]));
			func_1822(&(uLocal_105[iParam0]), "UTILLIWAG", iVar536);
			break;
		case 3:
			func_1823(iLocal_501[1], -969349845, get_entity_coords(&(iLocal_165[0]), true, false));
			func_1823(iLocal_501[0], -1473388640, get_entity_coords(&(iLocal_165[0]), true, false));
			func_1822(&(uLocal_105[iParam0]), "P_AMB_clipboard_01", &(iLocal_501[1]));
			func_1822(&(uLocal_105[iParam0]), "p_pen01x", &(iLocal_501[0]));
			func_1822(&(uLocal_105[iParam0]), "u_m_m_strgenstoreowner_01", &(iLocal_165[0]));
			break;
		case 4:
			func_1823(iLocal_501[2], 1521462563, get_entity_coords(&(iLocal_165[1]), true, false));
			func_1822(&(uLocal_105[iParam0]), "A_M_M_STRTOWNFOLK_01", &(iLocal_165[1]));
			func_1822(&(uLocal_105[iParam0]), "p_cs_supplies01x", &(iLocal_501[2]));
			func_1822(&(uLocal_105[iParam0]), "UTILLIWAG", iVar536);
			break;
		case 5:
			func_1823(iLocal_501[3], 1521462563, get_entity_coords(&(iLocal_165[2]), true, false));
			func_1822(&(uLocal_105[iParam0]), "A_M_M_StrTownfolk_02", &(iLocal_165[2]));
			func_1822(&(uLocal_105[iParam0]), "p_cs_supplies02x", &(iLocal_501[3]));
			break;
		case 6:
			func_1823(iLocal_501[1], -969349845, get_entity_coords(&(iLocal_165[0]), true, false));
			func_1823(iLocal_501[0], -1473388640, get_entity_coords(&(iLocal_165[0]), true, false));
			func_1822(&(uLocal_105[0]), "u_m_m_strgenstoreowner_01", &(iLocal_165[0]));
			func_1822(&(uLocal_105[0]), "P_AMB_clipboard_01", &(iLocal_501[1]));
			func_1822(&(uLocal_105[0]), "p_pen01x", &(iLocal_501[0]));
			break;
		case 7:
			func_1823(iLocal_501[1], -969349845, get_entity_coords(&(iLocal_165[0]), true, false));
			func_1823(iLocal_501[0], -1473388640, get_entity_coords(&(iLocal_165[0]), true, false));
			func_1822(&(uLocal_105[1]), "A_M_M_STRTOWNFOLK_01", &(iLocal_165[1]));
			func_1822(&(uLocal_105[1]), "u_m_m_strgenstoreowner_01", &(iLocal_165[0]));
			func_1822(&(uLocal_105[1]), "P_AMB_clipboard_01", &(iLocal_501[1]));
			func_1822(&(uLocal_105[1]), "p_pen01x", &(iLocal_501[0]));
			break;
		case 8:
			func_1823(iLocal_501[1], -969349845, get_entity_coords(&(iLocal_165[0]), true, false));
			func_1823(iLocal_501[0], -1473388640, get_entity_coords(&(iLocal_165[0]), true, false));
			func_1822(&(uLocal_105[2]), "A_M_M_STRTOWNFOLK_01", &(iLocal_165[1]));
			func_1822(&(uLocal_105[2]), "u_m_m_strgenstoreowner_01", &(iLocal_165[0]));
			func_1822(&(uLocal_105[2]), "P_AMB_clipboard_01", &(iLocal_501[1]));
			func_1822(&(uLocal_105[2]), "p_pen01x", &(iLocal_501[0]));
			break;
		case 9:
			func_1823(iLocal_501[1], -969349845, get_entity_coords(&(iLocal_165[0]), true, false));
			func_1823(iLocal_501[0], -1473388640, get_entity_coords(&(iLocal_165[0]), true, false));
			func_1822(&(uLocal_105[3]), "A_M_M_STRTOWNFOLK_01", &(iLocal_165[1]));
			func_1822(&(uLocal_105[3]), "u_m_m_strgenstoreowner_01", &(iLocal_165[0]));
			func_1822(&(uLocal_105[3]), "P_AMB_clipboard_01", &(iLocal_501[1]));
			func_1822(&(uLocal_105[3]), "p_pen01x", &(iLocal_501[0]));
			break;
		case 12:
			func_1822(&(uLocal_105[iParam0]), "PLAYER_THREE", Global_35);
			break;
		case 13:
			func_1822(&(uLocal_105[iParam0]), "John", Global_35);
			func_1822(&(uLocal_105[iParam0]), "Abigail", &(iLocal_162[0]));
			func_1822(&(uLocal_105[iParam0]), "Jack", &(iLocal_162[1]));
			func_1822(&(uLocal_105[iParam0]), "UTILLIWAG", iVar536);
			break;
		case 16:
			func_1822(&(uLocal_105[iParam0]), "UNIRanchers01", &(uLocal_389[0]));
			func_1822(&(uLocal_105[iParam0]), "UNIRanchers", &(uLocal_389[1]));
			break;
		case 17:
			func_1822(&(uLocal_105[iParam0]), "PLAYER_THREE", Global_35);
			break;
		case 14:
		case 15:
			func_1822(&(uLocal_105[iParam0]), "TomDickens", &(uLocal_170[0]));
			func_1822(&(uLocal_105[iParam0]), "p_treestump02x", &(iLocal_501[13]));
			func_1822(&(uLocal_105[iParam0]), "P_AXE01X", &(iLocal_501[14]));
			func_1822(&(uLocal_105[iParam0]), "P_SHARPENINGSTONE01X", &(iLocal_501[15]));
			break;
		case 19:
			func_1822(&(uLocal_105[iParam0]), "PLAYER_THREE", Global_35);
			break;
		case 20:
		case 21:
			func_1822(&(uLocal_105[iParam0]), "TomDickens", &(uLocal_170[0]));
			func_1822(&(uLocal_105[iParam0]), "AngusGeddes", &(uLocal_170[2]));
			func_1822(&(uLocal_105[iParam0]), "p_cigarette_cs01x", &(iLocal_501[18]));
			func_1822(&(uLocal_105[iParam0]), "p_cigarette_cs01x^1", &(iLocal_501[19]));
			break;
		case 18:
			func_1823(iLocal_501[2], 1521462563, func_385(6, 6));
			func_1823(iLocal_501[3], -589352772, func_385(6, 8));
			func_1823(iLocal_501[4], 1376394832, func_385(6, 7));
			func_1822(&(uLocal_105[iParam0]), "male01", iLocal_175);
			func_1822(&(uLocal_105[iParam0]), "sack", &(iLocal_501[2]));
			set_entity_no_collision_entity(iLocal_175, iVar536, false);
			set_entity_no_collision_entity(&(iLocal_501[2]), iVar536, false);
			break;
	}
}

void func_1295(int iParam0)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	if (!_is_anim_scene_loaded(iParam0, true, false))
	{
		return;
	}
	if (_is_anim_scene_started(iParam0, false))
	{
		return;
	}
	start_anim_scene(iParam0);
}

void func_1296(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_806), sParam1, 64);
}

bool func_1297(char[4] cParam0, char[4] cParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 256))
	{
		if (!func_121(cParam0, func_33(cParam0), 65536))
		{
			if (func_1824(cParam1))
			{
				func_140(cParam0, func_33(cParam0), 131072);
			}
			func_140(cParam0, func_33(cParam0), 65536);
		}
		if (func_121(cParam0, func_33(cParam0), 131072))
		{
			if (!func_1537(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_1825(&(cParam0->f_7375), &(cParam0->f_10792));
				func_140(cParam0, func_33(cParam0), 256);
			}
		}
		else
		{
			func_140(cParam0, func_33(cParam0), 256);
		}
	}
	return func_1826(&(cParam0->f_7375), cParam1, (func_8(cParam0, 33554432) || (is_screen_faded_out() && !func_8(cParam0, 1073741824))), 1);
}

int func_1298(char[4] cParam0)
{
	return cParam0->f_599;
}

void func_1299(char[4] cParam0)
{
	if (iVar660 == 1)
	{
		return;
	}
	iVar0 = func_33(cParam0);
	if (iVar660 == 0)
	{
		if (!func_1827(-1, 1))
		{
			return;
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!func_455(&(Local_14.f_83[iVar1]), 0))
			{
			}
			else if (!func_1321(&(Local_14.f_83[iVar1]), 1647992574))
			{
				set_entity_load_collision_flag(&(Local_14.f_83[iVar1]), 1);
				set_blocking_of_non_temporary_events(&(Local_14.f_83[iVar1]), true);
				set_ped_config_flag(&(Local_14.f_83[iVar1]), 48, true);
				_task_use_nearest_scenario_to_coord(&(Local_14.f_83[iVar1]), get_entity_coords(&(Local_14.f_83[iVar1]), true, false), 3f, 0, false, false, false, false);
			}
			iVar1++;
		}
		if (!func_1828(Local_14.f_83[4]) || !func_1828(Local_14.f_83[5]))
		{
			return;
		}
		iLocal_663 = 1;
	}
}

int func_1300(char[4] cParam0)
{
	return cParam0->f_598;
}

bool func_1301(int iParam0, float fParam1)
{
	if (!_does_anim_scene_exist(iParam0) || !_is_anim_scene_started(iParam0, false))
	{
		return true;
	}
	if (fParam1 > 0f && _get_anim_scene_progress(iParam0) >= fParam1)
	{
		return true;
	}
	return _is_anim_scene_finished(iParam0, false);
}

void func_1302(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1303(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1593(iVar0))
	{
		return;
	}
	iVar1 = func_1594(iParam3);
	if (!func_1595(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1304(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1305(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

void func_1306(bool bParam0)
{
	if (bParam0)
	{
		func_1829(func_385(0, 2), 300f, 5);
		func_1829(func_385(0, 0), 300f, 5);
		func_1829(func_385(0, 4), 300f, 5);
	}
	else
	{
		func_1327(func_385(0, 2), 300f, 0, 0, 0, 0, 0);
		func_1327(func_385(0, 0), 300f, 0, 0, 0, 0, 0);
		func_1327(func_385(0, 4), 300f, 0, 0, 0, 0, 0);
		func_1325(func_385(0, 2), 300f, 0);
		func_1325(func_385(0, 0), 300f, 0);
		func_1325(func_385(0, 4), 300f, 0);
	}
}

void func_1307(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1616(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != cParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		cParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(cParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_140(cParam0, func_33(cParam0), 33554432);
}

int func_1308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	iVar0 = 0;
	if (iParam0 == 0)
	{
		return 0;
	}
	func_1572();
	if (!func_1573(&(Global_1946804->f_1378), &iVar0, iParam0, -1, 0, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = &Global_40.f_7731[0];
	}
	if (iParam3 == -1)
	{
		iParam3 = &Global_40.f_7731[1];
	}
	if (iParam4 == -1)
	{
		iParam4 = &Global_40.f_7731[2];
	}
	func_1830(iParam2, iParam3, iParam4);
	if ((iParam2 == 0 && iParam3 == 0) && iParam4 == 0)
	{
		func_1831(iParam1, -7657935, -1889597427, 1, 1, 0);
	}
	else
	{
		func_1831(iParam1, 1155669136, -1889597427, 1, 1, 0);
	}
	if (bParam5)
	{
		if (is_ped_a_player(iParam1))
		{
			func_689(1, 96, 0, 0, 0);
		}
		else
		{
			func_689(1, 96, 1, iParam1, 0);
		}
	}
	func_1575(1);
	return 1;
}

void func_1309()
{
	func_1575(0);
	func_1832(0, Global_1946804->f_2653, 0);
	func_1832(1, Global_1946804->f_2654, 0);
	func_1832(2, Global_1946804->f_2655, 0);
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
	*Global_1946804->f_1497.f_1[iVar1] = { *Global_1946804->f_1378.f_1[iVar1] };
	*Global_1946804->f_1497.f_1[iVar2] = { *Global_1946804->f_1378.f_1[iVar2] };
	*Global_1946804->f_1497.f_1[iVar3] = { *Global_1946804->f_1378.f_1[iVar3] };
	func_1833();
	func_1834();
}

int func_1310()
{
	if (func_680() == 1160113249)
	{
		return -2091943191;
	}
	return 933586678;
}

int func_1311(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_1180(iParam0, 0, 1, 1, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7748.f_1;
	}
	func_1835(iParam2);
	if (bParam3)
	{
		if (is_ped_a_player(iParam1))
		{
			func_689(1, 64, 0, 0, 0);
		}
		else
		{
			func_689(1, 64, 1, iParam1, 0);
		}
	}
	func_1575(1);
	return 1;
}

void func_1312()
{
	iVar0 = 1;
	iVar1 = &Global_1946804->f_1378.f_1[iVar0];
	if (!func_1836() && func_1837(iVar1))
	{
		Global_1946804->f_1378.f_1[iVar0] = func_1838(iVar1);
	}
	func_1575(0);
	*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
	func_1839();
	Global_40.f_7748.f_2 = func_1840();
	func_1841(Global_1946804->f_2656, 0);
	func_1842();
}

void func_1313(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!func_455(&(Local_14.f_83[iVar1]), 0))
		{
		}
		else
		{
			set_entity_load_collision_flag(&(Local_14.f_83[iVar1]), 0);
			set_blocking_of_non_temporary_events(&(Local_14.f_83[iVar1]), false);
			set_ped_config_flag(&(Local_14.f_83[iVar1]), 48, false);
			set_ped_as_no_longer_needed(Local_14.f_83[iVar1]);
		}
		iVar1++;
	}
}

void func_1314(int iParam0)
{
	if (!func_832(bVar536))
	{
		func_834();
		if (func_455(bVar537, 0))
		{
			force_ped_motion_state(bVar537, -530524, false, 0, false);
		}
		simulate_player_input_gait(get_player_index(), 1f, 4000, 0f, true, false);
	}
}

void func_1315(var uParam0, int iParam1, int iParam2)
{
	func_461(&(uParam0->f_17));
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = uParam0->f_1;
	uParam0->f_1 = *uParam0;
	*uParam0 = iParam1;
}

int func_1316(char[4] cParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		if (func_33(cParam0) >= iLocal_157)
		{
			if (func_1843(cParam0, bVar535, 100f, 0, 0, 1, 408396114))
			{
				func_1353(&iLocal_541);
			}
			else if (!does_blip_exist(iVar537))
			{
				func_1421();
			}
		}
		else if (func_33(cParam0) >= iLocal_156 && func_1300(cParam0) < 2)
		{
			if (func_1414(cParam0, bVar535, "MAR1_WARN_WAGON_LOST", "MAR1_FAIL_WAGON_LOST", 100f, 160f, 0, 0, 1, 422991367, 1))
			{
				if (!does_blip_exist(iVar537))
				{
					iLocal_541 = func_1374(bVar535, 408396114, 1, 1);
				}
			}
			else if (!does_blip_exist(iVar537))
			{
				if (!is_ped_in_vehicle(Global_35, bVar535, false))
				{
					iLocal_541 = func_1374(bVar535, 408396114, 1, 1);
				}
			}
		}
		else
		{
			bVar0 = ((((func_1386(&(iLocal_162[0]), bVar535, 0) && func_1386(&(iLocal_162[1]), bVar535, 0)) || func_33(cParam0) >= iLocal_148) || (!is_string_null_or_empty(&(cParam0->f_13146)) && are_strings_equal(&(cParam0->f_13146), "MAR1_ABIGAIL_WAIT"))) || (!is_string_null_or_empty(&(cParam0->f_13146)) && are_strings_equal(&(cParam0->f_13146), "MAR1_ABIGAIL_JACK")));
			bVar1 = func_1427(func_33(cParam0) < iLocal_148, 100f, 150f);
			if (func_1843(cParam0, bVar535, bVar1, 0, 0, bVar0, 408396114))
			{
				func_1353(&iLocal_541);
				func_1414(cParam0, bVar535, "WAGON_RET", "WAGON_FAIL", (bVar1 / 2f), bVar1, 0, 0, 1, 422991367, 1);
			}
			else if (!does_blip_exist(iVar537))
			{
				if (func_33(cParam0) == iLocal_146 || func_33(cParam0) == iLocal_147)
				{
					if ((func_1386(&(iLocal_162[0]), bVar535, 0) && func_1386(&(iLocal_162[1]), bVar535, 0)) && func_1386(Global_35, bVar535, 0))
					{
						iLocal_541 = func_1354(408396114, *vLocal_668[1], 1109393408, 1);
					}
				}
				else if (func_33(cParam0) > iLocal_150 && func_33(cParam0) <= iLocal_156)
				{
					if (func_1386(Global_35, bVar535, 0))
					{
						iLocal_541 = func_1354(408396114, func_385(5, 0), 1109393408, 1);
					}
				}
			}
		}
	}
	if (func_1844(cParam0, &uLocal_539))
	{
		func_27(&uLocal_600, 0);
		if (func_1343(&uLocal_600, 3.75f))
		{
			if (is_vehicle_stuck_timer_up(bVar535, 3, 15000))
			{
				func_1363(cParam0, "MAR1_STUCK_WAGON", "", 1, 0);
			}
			else
			{
				func_1363(cParam0, "MAR1_FAIL_WAGON", "", 1, 0);
			}
			return 1;
		}
	}
	else
	{
		func_461(&uLocal_600);
	}
	if (func_33(cParam0) == iLocal_146 || func_33(cParam0) == iLocal_147)
	{
		if ((!func_1386(&(iLocal_162[1]), bVar535, 0) && is_entity_in_air(&(iLocal_162[1]), 1)) && is_ped_ragdoll(&(iLocal_162[1])))
		{
			func_1363(cParam0, "MAR1_FAIL_WAGON", "", 1, 0);
			func_1(cParam0, 64);
			return 1;
		}
	}
	return 0;
}

void func_1317(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 <= iLocal_150)
	{
		func_1845(cParam0, iLocal_162[0], Local_176[0]);
		func_1846(cParam0, iLocal_162[1], Local_176[1]);
	}
	if (iVar0 >= iLocal_155)
	{
		func_1408(cParam0, uLocal_389[0], Local_395[0]);
		func_1409(cParam0, uLocal_389[1], Local_395[1]);
	}
	if (iVar0 >= iLocal_155)
	{
		func_1847(cParam0, uLocal_170[0], Local_304[0]);
		if (func_455(&(uLocal_170[0]), iVar958) && _0xb655db7582aec805(&(uLocal_170[0])))
		{
			if (iVar799 == 4)
			{
				iLocal_802 = 0;
			}
		}
	}
}

void func_1318(char[4] cParam0)
{
	switch (func_1298(cParam0))
	{
		case 1:
			if (iVar962 == 1 || func_1358(cParam0, "MAR1_RIDEBANT1", 0, 0, 0))
			{
				func_1361(1);
				iLocal_965 = 1;
				func_1554();
				if (!func_1430("MAR1_STRAWBERRY", 0, 0, -1, -1, 0) && func_211())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 2);
			}
			else
			{
				func_1848(cParam0);
			}
			break;
		case 2:
			if (func_1322() || func_1358(cParam0, "MAR1_STRAWBERRY", 6, 4.5f, 0))
			{
				func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 3);
			}
			else
			{
				func_1848(cParam0);
			}
			break;
		case 3:
			func_1848(cParam0);
			break;
		case 4:
			if (func_1386(&(iLocal_162[0]), bVar536, 0))
			{
				func_135(cParam0, 6);
			}
			else if ((func_1322() && !func_1386(&(iLocal_162[0]), bVar536, 0)) && (func_1849(cParam0, 13, 70f, 100f, 0, 0, 1, 422991367) || func_1358(cParam0, "MAR1_ABIGAIL_WAIT", 6, 1f, 0)))
			{
				func_1353(&iLocal_541);
				func_1307(cParam0, "MAR1_ABIGAIL_WAIT", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 6);
			}
			break;
		case 5:
			if (func_1386(&(iLocal_162[1]), bVar536, 0))
			{
				func_135(cParam0, 7);
			}
			else if ((func_1322() && !func_1386(&(iLocal_162[1]), bVar536, 0)) && (func_1849(cParam0, 14, 70f, 100f, 0, 0, 1, 422991367) || func_1358(cParam0, "MAR1_ABIGAIL_JACK", 6, 1f, 0)))
			{
				func_1353(&iLocal_541);
				func_1307(cParam0, "MAR1_ABIGAIL_JACK", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 7);
			}
			break;
		case 6:
			func_1850(&(iLocal_162[0]), -401963276, 1);
			if (func_1849(cParam0, 13, 70f, 100f, 0, 0, 1, 422991367))
			{
			}
			else if (func_1386(Global_35, bVar536, 0) && func_1386(&(iLocal_162[0]), bVar536, 0))
			{
				func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
				if (func_1386(&(iLocal_162[1]), bVar536, 0))
				{
					func_135(cParam0, 1);
				}
				else
				{
					func_135(cParam0, 3);
				}
			}
			break;
		case 7:
			func_1850(&(iLocal_162[1]), -401963276, 1);
			if (func_1849(cParam0, 14, 70f, 100f, 0, 0, 1, 422991367))
			{
			}
			else if (func_1386(Global_35, bVar536, 0) && func_1386(&(iLocal_162[1]), bVar536, 0))
			{
				func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
				if (func_1386(&(iLocal_162[0]), bVar536, 0))
				{
					func_135(cParam0, 1);
				}
				else
				{
					func_135(cParam0, 3);
				}
			}
			break;
		case 10:
			disable_control_action(0, -17122892, false);
			if ((!func_1347("MAR1_IG1") && func_1301(iVar715, -1082130432)) && func_1358(cParam0, "MAR1_RIDEBANT1", 0, 0, 0))
			{
				func_1361(1);
				func_135(cParam0, 11);
			}
			break;
		case 11:
			if (!func_1347("MAR1_RIDEBANT1"))
			{
				func_135(cParam0, 3);
			}
			break;
	}
}

void func_1319(float fParam0, float fParam1, int iParam2)
{
	set_vehicle_density_multiplier_this_frame(fParam1);
	_0xc0258742b034dfaf(iParam2);
	_0xab0d553fe20a6e25(fParam0);
	set_random_vehicle_density_multiplier_this_frame(fParam1);
	set_parked_vehicle_density_multiplier_this_frame(fParam1);
	set_scenario_ped_density_multiplier_this_frame(fParam0);
	_0xba0980b5c0a11924(fParam0);
}

void func_1320(char[4] cParam0)
{
	vLocal_648.f_2 = 1;
	vLocal_648.f_1 = 0;
	if (_0xb331d8a73f9d2bdf(player_id(), &vLocal_648))
	{
		if (func_501(&uLocal_633) && func_26(&uLocal_633))
		{
			func_1851(&uLocal_633);
		}
		else if (!func_26(&uLocal_633))
		{
			func_27(&uLocal_633, 0);
		}
		if (func_1343(&uLocal_633, 8f))
		{
			func_461(&uLocal_636);
			if (iVar651 == 0 && func_1430("MAR1_STRAWBERRY", 0, 0, -1, -1, 0))
			{
				func_1358(cParam0, "MAR1_STRAWBERRY", 5, 0, 0);
				iLocal_654 = 1;
			}
			if (func_1343(&uLocal_633, 20f) && func_1430("MAR1_STRAWBERRY", 0, 0, -1, -1, 0))
			{
				func_1363(cParam0, "MAR1_STRW_DIR_FAIL", "", 1, 0);
			}
		}
		if (!func_501(&uLocal_633) && func_26(&uLocal_633))
		{
		}
	}
	else
	{
		if (func_501(&uLocal_636) && func_26(&uLocal_636))
		{
			func_1851(&uLocal_636);
		}
		else if (!func_26(&uLocal_636))
		{
			func_27(&uLocal_636, 0);
		}
		if (func_1343(&uLocal_636, 5f))
		{
			func_461(&uLocal_633);
			iLocal_654 = 0;
		}
		else if (func_26(&uLocal_633))
		{
		}
	}
}

bool func_1321(bool bParam0, int iParam1)
{
	if (does_entity_exist(bParam0))
	{
		if (!is_ped_injured(bParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(bParam0))
			{
				return true;
			}
			if (get_script_task_status(bParam0, iParam1, true) == 1 || get_script_task_status(bParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1322()
{
	if ((func_832(bVar537) || !func_455(Global_35, iVar959)) || !is_ped_in_vehicle(Global_35, bVar537, false))
	{
		return false;
	}
	if ((((is_control_pressed(0, -236813012) || is_control_pressed(0, -1971208180)) || is_control_pressed(0, 1301263553)) || is_control_pressed(0, -39308912)) || is_control_pressed(0, 1537201378))
	{
		return true;
	}
	return false;
}

bool func_1323(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vParam4 - vParam1 };
	vVar6 = { vParam4 - vVar0 };
	fVar9 = absf(vmag(vVar3));
	fVar10 = absf(vmag(vVar6));
	if (fVar10 < fVar9)
	{
		return true;
	}
	return false;
}

bool func_1324(int iParam0, float fParam1, int iParam2)
{
	vVar0 = { *vLocal_668[iParam2] - *vLocal_668[iParam0] };
	vVar3 = { *vLocal_668[iParam2] - func_1852(player_id()) };
	fVar6 = absf(vmag(vVar0));
	fVar7 = absf(vmag(vVar3));
	if ((fVar7 - fParam1) < fVar6)
	{
		return true;
	}
	return false;
}

void func_1325(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1326(vector3 vParam0, float fParam3, int iParam4)
{
	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1327(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_1328(int iParam0, bool bParam1, bool bParam2)
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

void func_1329(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_1328(iParam0, 0, 0);
	if (func_1853(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1854(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1855(iParam0, 1);
			}
			else
			{
				func_1856(iParam0, 1);
			}
		}
		else
		{
			func_1857(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1858())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_1330(bool bParam0)
{
	if (bParam0)
	{
		_0xa1cfb35069d23c23(&(iLocal_544[14]));
		_0x74c2b3dc0b294102(&(iLocal_544[14]));
	}
	else
	{
		_0x18262cafebb5fbe1(&(iLocal_544[14]), 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(&(iLocal_544[14]), 0, 0, 0, -1, -1, 2);
	}
}

void func_1331(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_1332(char[4] cParam0)
{
	func_1859(&(cParam0->f_7375));
}

void func_1333(char[4] cParam0, char[4] cParam1)
{
	func_1860(&(cParam0->f_7375), cParam1, func_162(cParam0, func_33(cParam0)) != 5);
}

void func_1334(char[4] cParam0)
{
	switch (func_1298(cParam0))
	{
		case 1:
			if (iVar648 == 0)
			{
				if (!func_1430("MAR1_STRAWBERRY", 0, 0, -1, -1, 0))
				{
					func_1358(cParam0, "MAR1_STRAWBERRY", 5, 0, 0);
					func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
				}
				func_1554();
				func_135(cParam0, 2);
			}
			else
			{
				func_1848(cParam0);
				func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 3);
			}
			break;
		case 2:
			if (func_1322() || func_1358(cParam0, "MAR1_STRAWBERRY", 6, 4.5f, 0))
			{
				func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 3);
			}
			else
			{
				func_1848(cParam0);
			}
			break;
		case 3:
			if ((func_1338(bVar536, *vLocal_668[1], 70f, 1, 1) && (func_1323(Global_35, func_385(15, 3), func_385(7, 3)) || func_1323(Global_35, func_385(15, 4), func_385(7, 3)))) || func_1340(Global_35, &(iLocal_544[6]), 1, 0))
			{
				if ((func_1861("MAR1_RIDEBANT1") && func_1347("MAR1_RIDEBANT1")) && func_1340(Global_35, &(iLocal_544[6]), 1, 0))
				{
					pause_scripted_conversation("MAR1_RIDEBANT1", false, true, false, true);
				}
				if ((func_1340(Global_35, &(iLocal_544[6]), 1, 0) && func_1358(cParam0, "MAR1_STRAW_SIGN", 3, 0, "MAR1_RIDEBANT1")) || (func_1338(bVar536, *vLocal_668[1], 70f, 1, 1) && (func_1323(Global_35, func_385(15, 3), func_385(7, 3)) || func_1323(Global_35, func_385(15, 4), func_385(7, 3)))))
				{
					func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, 10);
				}
			}
			else
			{
				func_1848(cParam0);
			}
			break;
		case 10:
			if (func_1861("MAR1_RIDEBANT1") && func_1862("MAR1_RIDEBANT1"))
			{
				restart_scripted_conversation("MAR1_RIDEBANT1");
			}
			func_1848(cParam0);
			break;
		case 4:
			if (func_1386(&(iLocal_162[0]), bVar536, 0))
			{
				func_135(cParam0, 6);
			}
			else if ((func_1322() && !func_1386(&(iLocal_162[0]), bVar536, 0)) && (func_1849(cParam0, 13, 70f, 100f, 0, 0, 1, 422991367) || func_1358(cParam0, "MAR1_ABIGAIL_WAIT", 6, 1f, 0)))
			{
				func_1353(&iLocal_541);
				func_1307(cParam0, "MAR1_ABIGAIL_WAIT", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 6);
			}
			break;
		case 5:
			if (func_1386(&(iLocal_162[1]), bVar536, 0))
			{
				func_135(cParam0, 7);
			}
			else if ((func_1322() && !func_1386(&(iLocal_162[1]), bVar536, 0)) && (func_1849(cParam0, 14, 70f, 100f, 0, 0, 1, 422991367) || func_1358(cParam0, "MAR1_ABIGAIL_JACK", 6, 1f, 0)))
			{
				func_1353(&iLocal_541);
				func_1307(cParam0, "MAR1_ABIGAIL_JACK", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 7);
			}
			break;
		case 6:
			func_1850(&(iLocal_162[0]), -401963276, 1);
			if (func_1849(cParam0, 13, 70f, 100f, 0, 0, 1, 422991367))
			{
			}
			else if (func_1386(Global_35, bVar536, 0) && func_1386(&(iLocal_162[0]), bVar536, 0))
			{
				func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
				if (func_1386(&(iLocal_162[1]), bVar536, 0))
				{
					func_135(cParam0, 1);
				}
				else if (func_1323(Global_35, func_385(15, 3), func_385(7, 3)))
				{
					func_135(cParam0, 10);
				}
				else
				{
					func_135(cParam0, 3);
				}
			}
			break;
		case 7:
			func_1850(&(iLocal_162[1]), -401963276, 1);
			if (func_1849(cParam0, 14, 70f, 100f, 0, 0, 1, 422991367))
			{
			}
			else if (func_1386(Global_35, bVar536, 0) && func_1386(&(iLocal_162[1]), bVar536, 0))
			{
				func_1307(cParam0, "MAR1_STRAWBERRY", -1082130432, 0, 0, -1, -1, 0);
				if (func_1386(&(iLocal_162[0]), bVar536, 0))
				{
					func_135(cParam0, 1);
				}
				else if (func_1323(Global_35, func_385(15, 3), func_385(7, 3)))
				{
					func_135(cParam0, 10);
				}
				else
				{
					func_135(cParam0, 3);
				}
			}
			break;
		case 20:
			disable_control_action(0, -17122892, false);
			if ((func_1861("MAR1_RIDEBANT1") && func_1347("MAR1_RIDEBANT1")) && !func_1862("MAR1_RIDEBANT1"))
			{
				task_look_at_entity(Global_35, &(iLocal_162[0]), -1, 1024, 51, 1);
				iVar0 = get_current_scripted_conversation_line("MAR1_RIDEBANT1");
				bVar1 = func_1863("MAR1_RIDEBANT1", iVar0) > 2250;
				pause_scripted_conversation("MAR1_RIDEBANT1", false, bVar1, false, true);
			}
			if (func_1358(cParam0, "MAR1_PULL_UP", 0, 0, 0))
			{
				func_135(cParam0, 21);
			}
			break;
		case 21:
			disable_control_action(0, -17122892, false);
			if (!func_1347("MAR1_PULL_UP") && !func_1347("MAR1_RIDEBANT1"))
			{
				if (func_1861("MAR1_RIDEBANT1") && func_1862("MAR1_RIDEBANT1"))
				{
					restart_scripted_conversation("MAR1_RIDEBANT1");
				}
				func_135(cParam0, 10);
			}
			break;
	}
}

bool func_1335(char[4] cParam0)
{
	if (iVar659 == 1)
	{
		return true;
	}
	if (!func_1864(cParam0))
	{
		return false;
	}
	if (!func_455(&(iLocal_165[0]), iVar958))
	{
		if (_0x800df3fc913355f3(func_477(func_1865(0))) || func_1866(func_1865(0), 1))
		{
			iLocal_165[0] = func_1867(func_1865(0), 1, 0, 0, 1, 1);
			if (!func_455(&(iLocal_165[0]), iVar958))
			{
				return false;
			}
		}
	}
	if (!_0xa0bc8faed8cfeb3c(&(iLocal_165[1])) || !_0xa0bc8faed8cfeb3c(&(iLocal_165[2])))
	{
		return false;
	}
	func_837(&(iLocal_165[0]), func_221(11, 7), 2, 1073741824);
	func_1378(iLocal_165[0], "WORLD_HUMAN_CLIPBOARD", func_221(11, 7), 1, 0);
	set_ped_can_use_auto_conversation_lookat(&(iLocal_165[0]), true);
	set_ped_can_use_auto_conversation_lookat(&(iLocal_165[1]), true);
	set_ped_can_use_auto_conversation_lookat(&(iLocal_165[2]), true);
	func_181(61, 0);
	func_182(1);
	set_blocking_of_non_temporary_events(&(iLocal_165[0]), true);
	set_ped_can_ragdoll_from_player_impact(&(iLocal_165[0]), false);
	set_ped_relationship_group_hash(&(iLocal_165[0]), -1538724068);
	func_1868(&(iLocal_165[1]), 2109321344);
	func_1868(&(iLocal_165[2]), -813050845);
	func_388(cParam0);
	iLocal_662 = 1;
	return true;
}

int func_1336(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 11:
			if (does_entity_exist(func_1869(1595373759, 0)))
			{
				iVar0 = get_object_index_from_entity_index(func_1869(1595373759, 0));
			}
			break;
		case 5:
			if (does_entity_exist(func_1869(-1751348037, 0)))
			{
				iVar0 = get_object_index_from_entity_index(func_1869(-1751348037, 0));
			}
			break;
		case 20:
			if (does_entity_exist(func_1869(-1220186332, 0)))
			{
				iVar0 = get_object_index_from_entity_index(func_1869(-1220186332, 0));
			}
			break;
	}
	return iVar0;
}

void func_1337(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_147 && iVar663 == 0)
	{
		_set_weather_type(-173507739, true, true, true, 35f, false);
		iLocal_666 = 1;
	}
	else if (iVar0 >= iLocal_148 && iVar663 == 0)
	{
		_set_weather_type(-173507739, true, true, false, 0f, false);
		iLocal_666 = 1;
	}
}

bool func_1338(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(bParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_1644(get_entity_coords(bParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_1339(var uParam0, bool bParam1, vector3 vParam2, float fParam5, float fParam6)
{
	if (func_1338(bParam1, vParam2, fParam5, 1, 1))
	{
		func_1342(&bParam1, fParam6, 10f);
	}
}

bool func_1340(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_1341(int iParam0)
{
	if (&iLocal_128[iParam0] == 0)
	{
		iLocal_128[iParam0] = 1;
	}
}

void func_1342(bool bParam0, float fParam1, float fParam2)
{
	if (func_832(*bParam0))
	{
		return;
	}
	fVar0 = get_entity_speed(*bParam0);
	if (fVar0 < fParam1)
	{
		return;
	}
	_0x104d9a7b1c0d0783(*bParam0, fParam1);
	fParam2 = absf(fParam2);
	fParam2 = func_1749(fParam2, 0f, 100f);
	fParam2 = (fParam2 / 100f);
	fVar0 = func_1749((fVar0 - (fVar0 * fParam2)), fParam1, fVar0);
	if (fParam1 == 0f && fVar0 < 0.75f)
	{
		fVar0 = 0f;
	}
	if (is_this_model_a_boat(get_entity_model(*bParam0)))
	{
		modify_vehicle_top_speed(*bParam0, -fParam2);
	}
	else
	{
		_0x0c3f0f7f92ca847c(*bParam0, fVar0);
	}
}

bool func_1343(var uParam0, bool bParam1)
{
	if (!func_26(uParam0))
	{
		return false;
	}
	if (func_932(uParam0) > bParam1)
	{
		return true;
	}
	return false;
}

bool func_1344(var uParam0, float fParam1)
{
	iVar0 = 0;
	if (!is_entity_dead(*uParam0))
	{
		func_27(&uLocal_639, 0);
		bVar1 = get_ped_in_vehicle_seat(*uParam0, -1);
		if (get_script_task_status(bVar1, -2118855366, true) != 1)
		{
			if (func_455(bVar1, iVar957) && bVar1 != Global_35)
			{
				clear_ped_tasks(bVar1, 1, 0);
			}
			task_vehicle_temp_action(bVar1, *uParam0, 24, floor((fParam1 * 1000f)));
		}
		if (get_entity_speed(*uParam0) <= 0.25f || func_1343(&uLocal_639, fParam1))
		{
			func_461(&uLocal_639);
			func_1345(uParam0);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_1345(var uParam0)
{
	if (!func_832(*uParam0))
	{
		set_entity_velocity(*uParam0, 0f, 0f, 0f);
		bring_vehicle_to_halt(*uParam0, 0.1f, 1, false);
		bVar0 = get_ped_in_vehicle_seat(*uParam0, -1);
		if (func_455(bVar0, iVar958) && bVar0 != Global_35)
		{
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			bVar2 = _get_ped_in_draft_seat(*uParam0, iVar1);
			if (func_455(bVar2, iVar958))
			{
				_0xbc1dc48270468444(bVar2);
			}
			iVar1++;
		}
	}
}

void func_1346()
{
	func_1353(&iLocal_541);
	clear_gps_custom_route();
	clear_gps_multi_route();
	iLocal_655 = 0;
}

bool func_1347(char* sParam0)
{
	return func_1870(sParam0);
}

void func_1348(char* sParam0, bool bParam1, bool bParam2)
{
	func_1871(sParam0, bParam1, bParam2);
}

bool func_1349(int iParam0, char* sParam1, bool bParam2)
{
	if (!_0x23e33cb9f4a3f547(iParam0, sParam1) && !func_1434(iParam0, sParam1))
	{
		return false;
	}
	_set_anim_scene_playback_list_bool(iParam0, sParam1, bParam2);
	return true;
}

void func_1350(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_148 || iVar0 == iLocal_149)
	{
		if (func_455(&(iLocal_165[0]), 0))
		{
			vVar1 = { func_385(7, 11) };
		}
		func_1823(iLocal_501[1], -969349845, vVar1);
		func_1823(iLocal_501[0], -1473388640, vVar1);
		func_1823(iLocal_501[2], -589352772, vVar1);
		func_1823(iLocal_501[3], 1521462563, vVar1);
		func_1823(iLocal_501[4], 1376394832, vVar1);
		func_1823(iLocal_501[9], -1809617345, vVar1);
		vVar1.x = (vVar1.x + -2f);
		func_1823(iLocal_501[10], -1809617345, vVar1);
		if (!does_entity_exist(&(iLocal_501[11])))
		{
			iLocal_501[11] = func_1336(11);
		}
	}
	if (iVar0 == iLocal_149)
	{
		if (func_455(&(iLocal_162[0]), 0))
		{
			vVar1 = { get_entity_coords(&(iLocal_162[0]), true, false) };
		}
		if (!does_entity_exist(&(iLocal_501[5])))
		{
			iLocal_501[5] = func_1336(5);
		}
		func_1823(iLocal_501[6], 663716280, vVar1);
		func_1823(iLocal_501[7], -2104766853, vVar1);
		func_1823(iLocal_501[8], -969349845, vVar1);
	}
	if (iVar0 == iLocal_155 || iVar0 == iLocal_156)
	{
		if (does_entity_exist(iVar536))
		{
			vVar1 = { get_entity_coords(iVar536, true, false) };
		}
		vVar1 = { get_offset_from_entity_in_world_coords(iVar536, 0.022f, -0.6976f, 0.2662f) };
		func_1823(iLocal_501[16], -1971689092, vVar1);
		func_1823(iLocal_501[17], -1646753329, vVar1);
		set_entity_collision(&(iLocal_501[17]), false, false);
		set_entity_collision(&(iLocal_501[16]), false, false);
		vVar1 = { func_385(16, 0) };
		func_1823(iLocal_501[1], -969349845, vVar1);
		func_1823(iLocal_501[12], 133961016, vVar1);
		func_1823(iLocal_501[13], 1540392720, vVar1);
		func_1823(iLocal_501[14], -422220273, vVar1);
		func_1823(iLocal_501[15], -989609930, vVar1);
	}
	if (iVar0 == iLocal_157 || iVar0 == iLocal_158)
	{
		if (does_entity_exist(iVar536))
		{
			vVar1 = { get_entity_coords(iVar536, true, false) };
		}
		if (iVar0 == iLocal_158)
		{
			vVar1 = { func_385(10, 7) };
			func_1823(iLocal_501[16], -1971689092, vVar1);
			func_1823(iLocal_501[2], 1521462563, vVar1);
			func_1823(iLocal_501[3], -589352772, vVar1);
			func_1823(iLocal_501[4], 1376394832, vVar1);
			set_entity_no_collision_entity(&(iLocal_501[2]), iVar536, false);
			set_entity_no_collision_entity(&(iLocal_501[3]), iVar536, false);
			set_entity_no_collision_entity(&(iLocal_501[4]), iVar536, false);
		}
		vVar1 = { func_385(16, 0) };
		func_1823(iLocal_501[18], -967333571, vVar1);
		func_1823(iLocal_501[19], -967333571, vVar1);
		if (!does_entity_exist(&(iLocal_501[20])))
		{
			iLocal_501[20] = func_1336(20);
		}
	}
}

void func_1351(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!does_group_exist(*uParam0))
	{
		*uParam0 = create_group(2);
	}
	if (does_group_exist(*uParam0))
	{
		set_group_formation(*uParam0, iParam3);
		if (!func_455(*uParam1, iVar955))
		{
			return;
		}
		set_ped_config_flag(*uParam1, 279, true);
		if (iParam2 == 0)
		{
			if (*uParam1 == Global_35)
			{
				func_1872(*uParam0);
			}
			else
			{
				set_ped_as_group_member(*uParam1, *uParam0);
				set_ped_config_flag(*uParam1, 280, true);
			}
		}
		else if (!_0x878b68960c1c2a35(*uParam1, *uParam0))
		{
			if (is_ped_in_group(*uParam1))
			{
				set_ped_config_flag(*uParam1, 279, false);
				remove_ped_from_group(*uParam1);
			}
			set_ped_as_group_leader(*uParam1, *uParam0, false);
		}
	}
}

void func_1352(int iParam0, var uParam1, int iParam2)
{
	if (!does_group_exist(iParam0) || !func_455(*uParam1, iVar956))
	{
		return;
	}
	if (is_ped_group_member(*uParam1, iParam0, 0))
	{
		return;
	}
	if (is_ped_in_group(*uParam1) && iParam2 == 1)
	{
		set_ped_config_flag(*uParam1, 279, false);
		remove_ped_from_group(*uParam1);
	}
	if (*uParam1 == Global_35)
	{
		func_1872(iParam0);
	}
	else
	{
		set_ped_config_flag(*uParam1, 279, true);
		set_ped_as_group_member(*uParam1, iParam0);
		set_ped_config_flag(*uParam1, 280, true);
	}
}

void func_1353(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

int func_1354(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (func_395(vParam1))
	{
		return 0;
	}
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (!does_blip_exist(iVar0))
	{
		return 0;
	}
	if (bParam5)
	{
		if ((iParam0 == 408396114 || iParam0 == 1259054292) || iParam0 == -308585968)
		{
			_blip_set_modifier(iVar0, 231194138);
		}
	}
	if (get_distance_between_coords(Global_36, vParam1, true) > fParam4)
	{
		_blip_set_modifier(iVar0, -1878373110);
	}
	return iVar0;
}

void func_1355(bool bParam0)
{
	if (func_832(bVar536))
	{
		return;
	}
	_0x63dc1f22c903b709(bVar536, !bParam0);
	set_vehicle_is_considered_by_player(bVar536, bParam0);
}

bool func_1356(char[4] cParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!_does_volume_exist(bParam1))
	{
		return false;
	}
	if (!_does_volume_exist(bParam2))
	{
		return false;
	}
	if (!_0xf256a75210c5c0eb(bParam2, Global_36))
	{
		func_1363(cParam0, sParam4, "", 1, 0);
		return true;
	}
	else if (!_0xf256a75210c5c0eb(bParam1, Global_36))
	{
		if (!func_1873(cParam0, 16))
		{
			func_1874(cParam0, sParam3, bParam6);
			if (does_blip_exist(cParam0->f_5303))
			{
				remove_blip(&(cParam0->f_5303));
			}
			cParam0->f_5303 = _0xa6ef0c54a3443e70(iParam8, bParam1);
			if (is_itemset_valid(iParam5))
			{
				func_1875(&iParam5, 0);
			}
			func_1876(cParam0, 16);
			func_1877(cParam0, 0, 0);
		}
		return true;
	}
	else if (func_1873(cParam0, 16))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
			if (is_itemset_valid(iParam5))
			{
				func_1875(&iParam5, 1);
			}
			func_1877(cParam0, 1, 0);
		}
		func_1878(cParam0, 16);
		if (!func_1879(cParam0))
		{
			if (bParam7)
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1880(cParam0);
			}
		}
		else
		{
			func_1881(cParam0);
		}
	}
	return false;
}

bool func_1357(char[4] cParam0, bool bParam1)
{
	func_927(cParam0);
	if (((bParam1 && func_1882(&(cParam0->f_10792)) != 11) && !func_1537(&(cParam0->f_10792), 131072)) && !func_1537(&(cParam0->f_10792), 32768))
	{
		return false;
	}
	return func_1883(&(cParam0->f_10792));
}

bool func_1358(char[4] cParam0, char* sParam1, int iParam2, float fParam3, char* sParam4)
{
	if (iParam2 == 0 || iParam2 == 4)
	{
		if (func_1884() || func_211())
		{
			return false;
		}
	}
	else if (iParam2 == 7 && func_212())
	{
		return false;
	}
	else if (iParam2 == 6 && func_1885(sParam1))
	{
		func_461(&(cParam0->f_13106));
		return true;
	}
	if (iParam2 != 2 && iParam2 != 3)
	{
		func_27(&(cParam0->f_13106), 0);
	}
	if ((func_1343(&(cParam0->f_13106), fParam3) || fParam3 <= 0f) || (iParam2 == 2 && iParam2 == 3))
	{
		switch (iParam2)
		{
			case 0:
				if (!func_1413(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 1:
				func_1413(cParam0, sParam1, 0);
				break;
			case 2:
			case 3:
				bVar0 = iParam2 == 2;
				if (!is_string_null_or_empty(sParam4))
				{
					if (_0x1ecc76792f661cf5(sParam4))
					{
						pause_scripted_conversation(sParam4, bVar0, true, false, true);
						func_461(&(cParam0->f_13106));
						return false;
					}
					else if (!_0xd89504d9d7d5057d(sParam4) || !_0xf01c570e0a0a1e67(sParam4))
					{
						if (iParam2 == 3)
						{
							func_1413(cParam0, sParam1, 0);
						}
						else if (!func_1413(cParam0, sParam1, 0))
						{
							return false;
						}
					}
					if (_0xd89504d9d7d5057d(sParam4) && _0xf01c570e0a0a1e67(sParam4))
					{
						if (!func_26(&(cParam0->f_13106)) && func_1413(cParam0, sParam1, 0))
						{
							func_27(&(cParam0->f_13106), 0);
							return false;
						}
						if (func_26(&(cParam0->f_13106)))
						{
							if (!_0x1ecc76792f661cf5(sParam1))
							{
								restart_scripted_conversation(sParam4);
								return true;
							}
							else
							{
								return false;
							}
						}
					}
				}
				else if (iParam2 == 3)
				{
					func_1413(cParam0, sParam1, 0);
				}
				else if (!func_1413(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 4:
			case 6:
				func_1886(cParam0, sParam1, 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 5:
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1886(cParam0, sParam1, 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 7:
				func_718(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 8:
				func_113(1);
				func_718(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 9:
				func_113(1);
				func_1887(sParam1, 0, 0, 1);
				break;
		}
		func_461(&(cParam0->f_13106));
		return true;
	}
	return false;
}

void func_1359(bool bParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
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
	if (func_1888(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = get_mount(bParam0);
	if (is_ped_in_any_vehicle(bParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(bParam0, false);
	}
	fVar3 = func_1889(bParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_1890() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
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
	if (fVar3 <= fParam6 && fVar3 > fParam7)
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
	if (fVar3 <= fParam7)
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
		if (fVar3 <= fParam8)
		{
			if (bParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_1891(bParam0, 501393341))
			{
				task_dismount_animal(bParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_1891(bParam0, -828834893))
			{
				task_leave_any_vehicle(bParam0, 0, iParam12);
			}
		}
	}
}

void func_1360(bool bParam0, int iParam1)
{
	if (func_455(bParam0, iVar957))
	{
		vVar0 = { get_ped_bone_coords(bParam0, 0, 0f, 0f, 0f) };
		fVar3 = 0f;
		fVar4 = 0f;
		if (bParam0 == Global_35)
		{
			fVar3 = get_gameplay_cam_relative_heading();
			fVar4 = get_gameplay_cam_relative_pitch();
		}
		_0xe0b61ed8bb37712f(bParam0);
		if (iParam1 == 1)
		{
			set_entity_coords(bParam0, vVar0, true, false, true, true);
		}
		if (bParam0 == Global_35)
		{
		}
	}
}

void func_1361(bool bParam0)
{
	if (bParam0)
	{
		_0x1e017404784aa6a3(&(iLocal_162[0]), 1107580957);
		_0x0d7fd6a55fd63aef(11, 3, bParam0);
		_0x0d7fd6a55fd63aef(21, 3, bParam0);
		_0x0d7fd6a55fd63aef(10, 3, bParam0);
		_0x0d7fd6a55fd63aef(8, 3, bParam0);
		_0x0d7fd6a55fd63aef(3, 3, bParam0);
		_0x0d7fd6a55fd63aef(5, 3, bParam0);
		_0x0d7fd6a55fd63aef(26, 3, bParam0);
	}
	else
	{
		_0x2b4ce170de09f346(&(iLocal_162[0]), 1107580957);
		_0x660a8f876df1d4f8(11);
		_0x660a8f876df1d4f8(21);
		_0x660a8f876df1d4f8(10);
		_0x660a8f876df1d4f8(8);
		_0x660a8f876df1d4f8(3);
		_0x660a8f876df1d4f8(5);
		_0x660a8f876df1d4f8(26);
	}
}

bool func_1362(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_1357(cParam0, 0) || iParam2 == 1)
	{
		return true;
	}
	return false;
}

void func_1363(char[4] cParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_438(cParam0, 2);
	}
	else
	{
		func_438(cParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1605(cParam0, cVar0);
	func_160(cParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(cParam0, 80)) && bParam3)
	{
		func_30(cParam0);
	}
	func_27(&(cParam0->f_13118), 0);
}

void func_1364(char[4] cParam0, int iParam1)
{
	Var0 = { func_1892(&(cParam0->f_7375)) };
	if ((((func_1537(&(cParam0->f_10792), 32768) && _does_anim_scene_exist(cParam0->f_7375.f_804)) && _is_anim_scene_loaded(cParam0->f_7375.f_804, true, false)) && _0xa9016536015de29d(cParam0->f_7375.f_804, &Var0)) && _0x23e33cb9f4a3f547(cParam0->f_7375.f_804, &Var0))
	{
		func_1395(cParam0, &Var0);
		func_1396(cParam0);
	}
	else
	{
		if (iParam1 == 1 && func_120(cParam0, 16384))
		{
			func_1893(&(cParam0->f_10792), Global_43805);
			func_751(&(cParam0->f_10792), 8);
		}
		func_238(&(cParam0->f_10792), iParam1);
		func_927(cParam0);
		func_99(cParam0, 2097152);
	}
}

void func_1365(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	func_1576(iParam0, bParam1);
	_0x18262cafebb5fbe1(iParam0, iParam2, iParam3, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam2, iParam3, 0, -1, -1, 2);
}

void func_1366(char[4] cParam0)
{
	func_1350(cParam0);
	if (!func_455(&(iLocal_165[0]), iVar958))
	{
	}
	if (!func_455(&(iLocal_165[1]), iVar958))
	{
	}
	if (!func_455(&(iLocal_165[2]), iVar958))
	{
	}
	if (!does_entity_exist(&(iLocal_501[1])))
	{
	}
	if (!does_entity_exist(&(iLocal_501[0])))
	{
	}
	if (!does_entity_exist(&(iLocal_501[2])))
	{
	}
	if (!does_entity_exist(&(iLocal_501[3])))
	{
	}
	if (func_832(bVar536))
	{
	}
	set_anim_scene_entity(&(uLocal_698[0]), "u_m_m_strgenstoreowner_01", &(iLocal_165[0]), 0);
	set_anim_scene_entity(&(uLocal_698[1]), "A_M_M_STRTOWNFOLK_01", &(iLocal_165[1]), 0);
	set_anim_scene_entity(&(uLocal_698[1]), "p_cs_supplies01x", &(iLocal_501[2]), 0);
	set_anim_scene_entity(&(uLocal_698[1]), "UTILLIWAG", bVar536, 0);
	set_anim_scene_entity(&(uLocal_698[2]), "A_M_M_StrTownfolk_02", &(iLocal_165[2]), 0);
	set_anim_scene_entity(&(uLocal_698[2]), "p_cs_supplies02x", &(iLocal_501[3]), 0);
	func_218(&uLocal_591);
	func_1378(iLocal_165[0], "WORLD_HUMAN_CLIPBOARD", func_221(11, 7), 1, 0);
	func_1378(iLocal_165[1], "WORLD_HUMAN_WAITING_IMPATIENT", func_221(11, 8), 1, 0);
	func_1378(iLocal_165[2], "WORLD_HUMAN_WAITING_IMPATIENT", func_221(11, 9), 1, 0);
	Local_219[0]->f_6 = { func_385(11, 7) };
	Local_219[0]->f_10 = func_1412(11, 7);
	Local_219[1]->f_6 = { func_385(11, 8) };
	Local_219[1]->f_10 = func_1412(11, 8);
	Local_219[2]->f_6 = { func_385(11, 9) };
	Local_219[2]->f_10 = func_1412(11, 9);
	func_1315(Local_219[0], 0, 1);
	func_1315(Local_219[1], 0, 1);
	func_1315(Local_219[2], 0, 1);
}

void func_1367(char[4] cParam0)
{
	func_1894(&(cParam0->f_7375));
}

int func_1368(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1369()
{
	switch (iVar695)
	{
		case 1:
			break;
		case 0:
			break;
	}
}

void func_1370(char[4] cParam0, var uParam1, var uParam2)
{
	if (func_1895(cParam0, uParam1))
	{
		if (*uParam2 != 131 && *uParam2 != 132)
		{
			func_1315(uParam2, 131, 1);
		}
	}
	else if (!func_455(*uParam1, iVar956))
	{
		return;
	}
	iVar0 = func_33(cParam0);
	switch (*uParam2)
	{
		case 0:
			Var3 = { uParam2->f_6 };
			Var3.f_3 = uParam2->f_10;
			func_1378(uParam1, "WORLD_HUMAN_CLIPBOARD", Var3, 1, 0);
			func_1315(uParam2, 1, 1);
			break;
		case 1:
			if (func_1340(Global_35, &(iLocal_544[4]), 1, 0))
			{
				if (((func_1896(Global_35, &(uParam2->f_4), &uVar1) || func_1897(Global_35, &(uParam2->f_4), &uVar1)) || _is_ped_using_scenario_hash(Global_35, -475370861)) || _is_ped_using_scenario_hash(Global_35, -282082536))
				{
					iVar2 = 1;
				}
				func_27(&(uParam2->f_17), 0);
				if (func_1343(&(uParam2->f_17), 2f) || iVar2 == 1)
				{
					func_145(cParam0, *uParam1, "STR_General_Store", 0);
					if (iVar2 == 1)
					{
						func_1315(uParam2, 6, 1);
					}
					else if (func_1898(*uParam1, 1, 1, 0, 0, 0) || func_1899(*uParam1, 1090519040, 1103626240, 1097859072, 0))
					{
						func_1315(uParam2, 8, 1);
					}
					else if (iVar0 <= iLocal_149)
					{
						func_1315(uParam2, 113, 1);
					}
				}
			}
			else
			{
				func_461(&(uParam2->f_17));
			}
			break;
		case 8:
			_0xf1c03a5352243a30(*uParam1);
			task_hands_up(*uParam1, -1, *uParam1, -1, false);
			func_1315(uParam2, 9, 1);
			break;
		case 9:
			if (!func_1898(*uParam1, 1, 1, 0, 0, 0) && !func_1899(*uParam1, 1090519040, 1103626240, 1097859072, 0))
			{
				func_27(&(uParam2->f_17), 0);
			}
			else
			{
				func_461(&(uParam2->f_17));
			}
			if (!func_1898(*uParam1, 1, 1, 0, 0, 0) && func_1343(&(uParam2->f_17), 5f))
			{
				func_1315(uParam2, 0, 1);
			}
			break;
		case 113:
			if (func_1358(cParam0, "MAR1_LOADGOODS", 0, 0, 0))
			{
				func_1315(uParam2, 114, 1);
			}
			break;
		case 114:
			func_27(&(uParam2->f_17), 0);
			if (func_1343(&(uParam2->f_17), 20f))
			{
				if (func_1340(Global_35, &(iLocal_544[4]), 1, 0))
				{
					func_1315(uParam2, 113, 1);
				}
				else
				{
					func_1315(uParam2, 1, 1);
				}
			}
			if (func_1896(Global_35, &(uParam2->f_4), &uVar1) || func_1897(Global_35, &(uParam2->f_4), &uVar1))
			{
				func_1315(uParam2, 6, 1);
			}
			else if (func_1898(*uParam1, 1, 1, 0, 0, 0) || func_1899(*uParam1, 1090519040, 1103626240, 1097859072, 0))
			{
				func_1315(uParam2, 8, 1);
			}
			break;
		case 6:
			clear_ped_secondary_task(*uParam1);
			_0xd8ceeed54c672b5d(*uParam1, Global_35, 0f, 0f, 0f, 3, 3);
			_0x9a77dfd295e29b09(*uParam1, true);
			func_1374(*uParam1, -1049390151, 1, 1);
			func_1315(uParam2, 7, 1);
			break;
		case 7:
			func_27(&(uParam2->f_17), 0);
			if (func_1343(&(uParam2->f_17), 2f))
			{
				func_1363(cParam0, "MAR1_FAIL_LAW", "", 1, 0);
			}
			break;
		case 131:
			func_1900(cParam0, uParam1, &(uParam2->f_17), "MAR1_ATTACK_STROWN", "MAR1_DEAD_STROWN", 1070386381);
			break;
	}
}

void func_1371(char[4] cParam0, var uParam1, var uParam2)
{
	if (func_1895(cParam0, uParam1))
	{
		if (*uParam2 != 131 && *uParam2 != 132)
		{
			func_1315(uParam2, 131, 1);
		}
	}
	else if (!func_455(*uParam1, iVar956))
	{
		return;
	}
	switch (*uParam2)
	{
		case 0:
			Var1 = { uParam2->f_6 };
			Var1.f_3 = uParam2->f_10;
			func_1378(uParam1, "WORLD_HUMAN_WAITING_IMPATIENT", Var1, 1, 0);
			func_1315(uParam2, 1, 1);
			break;
		case 1:
			if (func_1340(Global_35, &(iLocal_544[4]), 1, 0))
			{
				if (((func_1896(Global_35, &(uParam2->f_4), &uVar0) || func_1897(Global_35, &(uParam2->f_4), &uVar0)) || func_1898(*uParam1, 1, 1, 0, 0, 0)) || func_1899(*uParam1, 1090519040, 1103626240, 1097859072, 0))
				{
					uParam2->f_10 = get_random_float_in_range(0.25f, 1.25f);
					func_1315(uParam2, 8, 1);
				}
			}
			break;
		case 8:
			func_27(&(uParam2->f_17), 0);
			if (func_1343(&(uParam2->f_17), uParam2->f_10))
			{
				_0xf1c03a5352243a30(*uParam1);
				task_hands_up(*uParam1, -1, *uParam1, -1, false);
				uParam2->f_10 = 0f;
				func_1315(uParam2, 9, 1);
			}
			break;
		case 9:
			if (((!func_1896(Global_35, &(uParam2->f_4), &uVar0) && !func_1897(Global_35, &(uParam2->f_4), &uVar0)) && !func_1898(*uParam1, 1, 1, 0, 0, 0)) && !func_1899(*uParam1, 1090519040, 1103626240, 1097859072, 0))
			{
				func_27(&(uParam2->f_17), 0);
			}
			else
			{
				func_461(&(uParam2->f_17));
			}
			if (!func_1898(*uParam1, 1, 1, 0, 0, 0) && func_1343(&(uParam2->f_17), 5f))
			{
				func_1315(uParam2, 0, 1);
			}
			break;
		case 131:
			func_1900(cParam0, uParam1, &(uParam2->f_17), "MAR1_ATTACK_STRWRK", "MAR1_DEAD_STRWRK", 1070386381);
			break;
	}
}

bool func_1372(char[4] cParam0)
{
	if (!func_390(iVar581, 32768))
	{
		_request_propset(iVar726);
		_request_propset(iVar727);
		func_1441(&uLocal_584, 32768);
	}
	if (_has_propset_loaded(iVar726) && _has_propset_loaded(iVar727))
	{
		return true;
	}
	return false;
}

void func_1373(char[4] cParam0)
{
	func_1350(cParam0);
	if (!func_455(&(iLocal_165[0]), iVar958))
	{
	}
	if (!func_455(&(iLocal_165[1]), iVar958))
	{
	}
	if (!does_entity_exist(&(iLocal_501[1])))
	{
	}
	if (!does_entity_exist(&(iLocal_501[0])))
	{
	}
	if (!does_entity_exist(&(iLocal_501[3])))
	{
	}
	if (func_832(bVar536))
	{
	}
	set_anim_scene_entity(&(uLocal_702[0]), "u_m_m_strgenstoreowner_01", &(iLocal_165[0]), 0);
	set_anim_scene_entity(&(uLocal_702[0]), "P_AMB_clipboard_01", &(iLocal_501[1]), 0);
	set_anim_scene_entity(&(uLocal_702[0]), "p_pen01x", &(iLocal_501[0]), 0);
	set_anim_scene_entity(&(uLocal_702[1]), "A_M_M_STRTOWNFOLK_01", &(iLocal_165[1]), 0);
	set_anim_scene_entity(&(uLocal_702[1]), "u_m_m_strgenstoreowner_01", &(iLocal_165[0]), 0);
	set_anim_scene_entity(&(uLocal_702[1]), "P_AMB_clipboard_01", &(iLocal_501[1]), 0);
	set_anim_scene_entity(&(uLocal_702[1]), "p_pen01x", &(iLocal_501[0]), 0);
	set_anim_scene_entity(&(uLocal_702[2]), "A_M_M_STRTOWNFOLK_01", &(iLocal_165[1]), 0);
	set_anim_scene_entity(&(uLocal_702[2]), "u_m_m_strgenstoreowner_01", &(iLocal_165[0]), 0);
	set_anim_scene_entity(&(uLocal_702[2]), "P_AMB_clipboard_01", &(iLocal_501[1]), 0);
	set_anim_scene_entity(&(uLocal_702[2]), "p_pen01x", &(iLocal_501[0]), 0);
	set_anim_scene_entity(&(uLocal_702[3]), "A_M_M_STRTOWNFOLK_01", &(iLocal_165[1]), 0);
	set_anim_scene_entity(&(uLocal_702[3]), "u_m_m_strgenstoreowner_01", &(iLocal_165[0]), 0);
	set_anim_scene_entity(&(uLocal_702[3]), "P_AMB_clipboard_01", &(iLocal_501[1]), 0);
	set_anim_scene_entity(&(uLocal_702[3]), "p_pen01x", &(iLocal_501[0]), 0);
	start_anim_scene(&(uLocal_702[2]));
	iLocal_697 = 2;
	if (does_entity_exist(&(iLocal_501[2])))
	{
		delete_object(iLocal_501[2]);
	}
	if (does_entity_exist(&(iLocal_501[3])))
	{
		delete_object(iLocal_501[3]);
	}
}

int func_1374(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!does_entity_exist(bParam0) || (iParam2 == 1 && is_entity_dead(bParam0)))
	{
		return 0;
	}
	iVar0 = get_blip_from_entity(bParam0);
	if (!does_blip_exist(iVar0))
	{
		iVar0 = _blip_add_for_entity(iParam1, bParam0);
	}
	else
	{
		_0xedd964b7984ac291(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
		{
			_blip_set_modifier(iVar0, 231194138);
		}
	}
	return iVar0;
}

bool func_1375(char[4] cParam0)
{
	switch (iVar694)
	{
		case 0:
			if (func_922(Global_35, bVar536, 1, 1) <= 200f)
			{
				if (_does_anim_scene_exist(&(uLocal_702[0])))
				{
					_delete_anim_scene(&(uLocal_702[0]));
				}
				start_anim_scene(&(uLocal_702[2]));
				iLocal_697 = 2;
				delete_object(iLocal_501[2]);
				delete_object(iLocal_501[3]);
			}
			break;
		case 1:
			bVar0 = (_is_anim_scene_loaded(&(uLocal_702[1]), true, false) && _is_anim_scene_finished(&(uLocal_702[1]), false));
			if ((func_918(Global_35, bVar536, 20f, 1) || func_918(Global_35, &(iLocal_165[0]), 20f, 1)) || is_ped_in_vehicle(Global_35, bVar536, true))
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_145(cParam0, Global_35, "JOHN", 0);
				if (_does_anim_scene_exist(&(uLocal_702[1])))
				{
					_delete_anim_scene(&(uLocal_702[1]));
				}
				start_anim_scene(&(uLocal_702[3]));
				iLocal_697 = 3;
				delete_object(iLocal_501[2]);
				delete_object(iLocal_501[3]);
			}
			else if (bVar0 == 1)
			{
				start_anim_scene(&(uLocal_702[2]));
				iLocal_697 = 2;
				delete_object(iLocal_501[2]);
				delete_object(iLocal_501[3]);
			}
			break;
		case 2:
			if (is_ped_in_vehicle(Global_35, bVar536, true))
			{
				disable_control_action(0, 1847550875, false);
				disable_control_action(0, -779584705, false);
				disable_control_action(0, -699865971, false);
			}
			func_145(cParam0, Global_35, "JOHN", 0);
			if ((func_918(Global_35, bVar536, 20f, 1) || func_918(Global_35, &(iLocal_165[0]), 20f, 1)) || is_ped_in_vehicle(Global_35, bVar536, true))
			{
				if (_does_anim_scene_exist(&(uLocal_702[2])))
				{
					_delete_anim_scene(&(uLocal_702[2]));
				}
				start_anim_scene(&(uLocal_702[3]));
				iLocal_697 = 3;
				func_461(&(Local_219[0]->f_17));
			}
			break;
		case 3:
			if (!func_1301(&(uLocal_702[3]), 0.5f) && is_ped_in_vehicle(Global_35, bVar536, true))
			{
				disable_control_action(0, 1847550875, false);
				disable_control_action(0, -699865971, false);
				disable_control_action(0, -779584705, false);
			}
			if (func_1301(&(uLocal_702[3]), 0.945f))
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			if ((bVar0 == 1 || (_does_anim_scene_exist(&(uLocal_702[3])) && _0x005e6f28dd7ed58d(&(uLocal_702[3]), "u_m_m_strgenstoreowner_01"))) && func_455(&(iLocal_165[0]), iVar958))
			{
				func_1315(Local_219[0], 1, 1);
				func_1378(iLocal_165[0], "WORLD_HUMAN_CLIPBOARD", func_221(11, 7), 0, 60000);
			}
			if ((bVar0 == 1 || (_does_anim_scene_exist(&(uLocal_702[3])) && _0x005e6f28dd7ed58d(&(uLocal_702[3]), "A_M_M_STRTOWNFOLK_01"))) && func_455(&(iLocal_165[1]), iVar958))
			{
				func_1315(Local_219[1], 1, 1);
				func_1378(iLocal_165[1], "WORLD_HUMAN_WAITING_IMPATIENT", func_221(11, 8), 0, 60000);
			}
			if (bVar0 == 1 && func_455(&(iLocal_165[2]), iVar958))
			{
				func_1315(Local_219[2], 1, 1);
				func_1378(iLocal_165[2], "WORLD_HUMAN_WAITING_IMPATIENT", func_221(11, 9), 0, 60000);
			}
			if (bVar0 == 1)
			{
				func_1330(1);
				iLocal_697 = 4;
			}
			else if (func_1340(Global_35, &(iLocal_544[4]), 1, 0))
			{
				if (((func_1896(Global_35, &(Local_219[0]->f_4), &uVar1) || func_1897(Global_35, &(Local_219[0]->f_4), &uVar1)) || _is_ped_using_scenario_hash(Global_35, -475370861)) || _is_ped_using_scenario_hash(Global_35, -282082536))
				{
					func_27(&(Local_219[0]->f_17), 0);
				}
				if (func_1343(&(Local_219[0]->f_17), 2f))
				{
					func_1363(cParam0, "MAR1_FAIL_LAW", "", 1, 0);
				}
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_1376(bool bParam0, int iParam1, int iParam2)
{
	if (is_vehicle_seat_free(iParam1, iParam2) && !is_entity_dead(bParam0))
	{
		if (_0x083d497d57b7400f(bParam0))
		{
			freeze_entity_position(bParam0, false);
		}
		set_ped_into_vehicle(bParam0, iParam1, iParam2);
		return 1;
	}
	else if (func_1901(bParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

void func_1377(char[4] cParam0)
{
	bVar0 = iVar536;
	set_force_object_this_frame(get_entity_coords(iVar536, true, false), 10f);
	iVar1 = 0;
	while (iVar1 <= 14)
	{
		if (does_entity_exist(&(iLocal_485[iVar1])))
		{
			if (is_entity_attached(&(iLocal_485[iVar1])) && (get_entity_model(&(iLocal_485[iVar1])) == 319326044 || get_entity_model(&(iLocal_485[iVar1])) == -1943896774))
			{
				detach_entity(&(iLocal_485[iVar1]), false, false);
			}
			if (has_object_been_broken(&(iLocal_485[iVar1])))
			{
				if (get_entity_model(&(iLocal_485[iVar1])) == 279593638)
				{
					uLocal_696 = iVar693 + 1;
				}
				iLocal_720 = (iVar717 - 1);
				iLocal_523[iVar1] = 1;
				iLocal_485[iVar1] = 0;
			}
			else if (!func_918(bVar0, &(iLocal_485[iVar1]), 8f, 1))
			{
				if (get_entity_model(&(iLocal_485[iVar1])) == 279593638)
				{
					uLocal_696 = iVar693 + 1;
				}
				if (!func_26(&uLocal_642) || func_1343(&uLocal_642, 7f))
				{
					func_218(&uLocal_642);
					func_1358(cParam0, "MAR1_WAGONFALL", 1, 0, 0);
					func_1902(get_entity_coords(&(iLocal_485[iVar1]), true, false));
				}
				iLocal_720 = (iVar717 - 1);
				iLocal_523[iVar1] = 1;
				func_1903(iLocal_485[iVar1], 0);
			}
		}
		iVar1++;
	}
	if ((iVar717 <= 9 || iVar693 >= 2) && !func_1380(16777216))
	{
		func_163();
		func_1904(16777216);
		if (func_1844(cParam0, &uLocal_539))
		{
			func_1363(cParam0, "MAR1_FAIL_WAGON", "", 1, 0);
		}
		else
		{
			func_1363(cParam0, "MAR1_FAIL_HAY", "", 1, 0);
		}
	}
}

void func_1378(var uParam0, char* sParam1, struct<4> Param2, int iParam6, int iParam7)
{
	if (!func_455(*uParam0, iVar951))
	{
		return;
	}
	if (iParam6 == 1)
	{
		func_837(*uParam0, Param2, 2, 1073741824);
	}
	open_sequence_task(&uLocal_481);
	task_follow_nav_mesh_to_coord(0, Param2, 1f, 20000, 0.25f, 0, Param2.f_3);
	func_1905(0, get_hash_key(sParam1), iParam7, 0, 0, -1082130432);
	close_sequence_task(iVar471);
	task_perform_sequence(*uParam0, iVar471);
	clear_sequence_task(&uLocal_481);
}

void func_1379(char[4] cParam0)
{
	if (func_390(iVar581, 64))
	{
		return;
	}
	func_450(13, 536870912, 0);
	func_1567(13, 0);
	func_257(cParam0, func_451(0), &(iLocal_162[0]), 1, 0, 1, 0);
	iLocal_162[0] = 0;
	func_1567(14, 0);
	func_257(cParam0, func_451(1), &(iLocal_162[1]), 1, 0, 1, 0);
	iLocal_162[1] = 0;
	func_1441(&uLocal_584, 64);
}

bool func_1380(int iParam0)
{
	return (Global_40.f_9.f_21 && iParam0) != 0;
}

void func_1381()
{
	vVar0 = { func_385(16, 18) };
	func_1325(vVar0, 400f, 0);
	func_1326(vVar0, 400f, 0);
	func_1327(vVar0, 400f, 0, 0, 0, 0, 0);
}

bool func_1382(char[4] cParam0)
{
	if (func_390(iVar581, 32))
	{
		return true;
	}
	if (!func_1424(uLocal_170[0], func_453(0), 22))
	{
		return false;
	}
	func_1405(cParam0, &(uLocal_170[0]), 238506, 0, "MAR1_DICKENS", 67108863, 1023, 3, -1);
	iVar0 = func_33(cParam0);
	if (iVar0 <= iLocal_155)
	{
		func_1906(cParam0, uLocal_170[0], -1538724068, Local_304[0], 107, 0, 100);
		func_837(&(uLocal_170[0]), func_221(8, 3), 2, 1073741824);
		func_1011(cParam0, &(uLocal_170[0]), 128);
	}
	else
	{
		func_1906(cParam0, uLocal_170[0], -1538724068, Local_304[0], 0, 0, 100);
		func_837(&(uLocal_170[0]), func_221(8, 6), 2, 1073741824);
	}
	func_1425(&(uLocal_170[0]));
	set_ped_can_use_auto_conversation_lookat(&(uLocal_170[0]), true);
	func_1868(&(uLocal_170[0]), 41788943);
	remove_all_ped_weapons(&(uLocal_170[0]), true, false);
	func_1441(&uLocal_584, 32);
	return true;
}

void func_1383()
{
	func_961(709);
	func_961(715);
	func_961(723);
	func_961(712);
	func_961(713);
	func_961(711);
	func_961(714);
	func_961(715);
}

void func_1384(char[4] cParam0, float fParam1, float fParam2)
{
	func_149(cParam0, fParam1);
	func_150(cParam0, fParam2);
}

bool func_1385(char[4] cParam0, int iParam1)
{
	if (iParam1 == 0 && !func_1907(&uLocal_389))
	{
		if (!func_1908(-1, 1))
		{
			return false;
		}
		func_1909(&uLocal_389, &(Local_14.f_7));
		func_1407(cParam0, &uLocal_389, &Local_395, 18);
	}
	func_838(cParam0, &(uLocal_389[0]), "G_M_M_UNIRANCHERS_01^1", 0, 0);
	func_838(cParam0, &(uLocal_389[1]), "G_M_M_UNIRANCHERS_01", 0, 0);
	return true;
}

bool func_1386(int iParam0, bool bParam1, bool bParam2)
{
	if (does_entity_exist(bParam1))
	{
		if (is_vehicle_driveable(bParam1, false, false))
		{
			if (!is_entity_dead(iParam0))
			{
				return is_ped_in_vehicle(iParam0, bParam1, bParam2);
			}
		}
	}
	return false;
}

int func_1387(var uParam0, var uParam1)
{
	if (func_1910(uParam0) < 3)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_865[iVar0]->f_2 == 9 && uParam0->f_865[iVar0]->f_1 == 0) && _does_anim_scene_exist(uParam0->f_1912[uParam0->f_865[iVar0]->f_4]->f_8))
		{
			*uParam1 = uParam0->f_1912[uParam0->f_865[iVar0]->f_4]->f_8;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1388(bool bParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_1911(bParam0, vVar0, fParam2);
}

char* func_1389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "MAR1_VISITOR1";
			break;
		case 1:
			sVar0 = "MAR1_VIS1_HANG";
			break;
		case 2:
			sVar0 = "MAR1_VISITOR2";
			break;
	}
	return sVar0;
}

bool func_1390(char* sParam0)
{
	iVar0 = get_hash_key(sParam0);
	if (func_1912(iVar0) != -1)
	{
		return true;
	}
	return false;
}

void func_1391(char* sParam0, bool bParam1)
{
	iVar0 = get_hash_key(sParam0);
	if (bParam1)
	{
		if (!func_1390(sParam0))
		{
			iVar1 = iVar810;
			if (iVar841 < iVar1)
			{
				iLocal_814[iVar841] = iVar0;
				iLocal_845 = iVar841 + 1;
			}
		}
	}
	else
	{
		iVar2 = func_1912(iVar0);
		if (iVar2 != -1)
		{
			iLocal_814[iVar2] = 0;
			func_1913();
			iLocal_845 = (iVar841 - 1);
		}
	}
}

bool func_1392(int iParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(iParam0) || !_is_anim_scene_started(iParam0, false))
	{
		return false;
	}
	return _0x8d81e7824b7753f7(iParam0, sParam1, 1);
}

bool func_1393(char[4] cParam0, bool bParam1)
{
	if (!func_455(Global_35, iVar957))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(Global_35, false))
	{
		set_player_control(get_player_index(), true, 0, false);
		_display_hud_component(iVar799);
		return false;
	}
	if (is_entity_in_volume(bVar535, &(iLocal_544[19]), true, 0))
	{
		if (get_entity_speed(bVar535) >= 5f)
		{
			disable_control_action(0, 1537201378, false);
		}
		if (is_entity_in_volume(bVar535, &(iLocal_544[2]), true, 0))
		{
			func_1342(&uLocal_539, 2.5f, 1103626240);
		}
		else
		{
			func_1342(&uLocal_539, 6.5f, 5f);
		}
	}
	if ((is_entity_in_volume(bVar535, &(iLocal_544[19]), true, 0) || is_entity_in_volume(bVar535, &(iLocal_544[2]), true, 0)) || is_entity_in_volume(bVar535, &(iLocal_544[1]), true, 0))
	{
		disable_control_action(0, -17122892, false);
		disable_control_action(0, -955762792, false);
	}
	if ((is_entity_in_volume(bVar535, &(iLocal_544[2]), true, 0) || bParam1 == 1) && is_player_control_on(get_player_index()))
	{
		_hide_hud_component(iVar799);
		clear_ped_tasks_immediately(Global_35, false, true);
		set_player_control(get_player_index(), false, 256, false);
		_task_vehicle_drive_to_point(Global_35, bVar535, func_385(5, 8), 3.5f, 1.75f, 524419);
		if (!func_26(&uLocal_645))
		{
			func_218(&uLocal_645);
		}
	}
	if (!is_player_control_on(get_player_index()))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		_0x70a6658d476c6187();
	}
	if ((!is_player_control_on(get_player_index()) && func_1386(Global_35, bVar535, 0)) && (is_entity_in_volume(bVar535, &(iLocal_544[1]), true, 0) || func_1394(&uLocal_645) >= 8f))
	{
		return true;
	}
	return false;
}

float func_1394(var uParam0)
{
	if (!func_26(uParam0))
	{
		return 0f;
	}
	if (func_501(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_552() - uParam0->f_1);
}

void func_1395(char[4] cParam0, char[4] cParam1)
{
	func_1914(&(cParam0->f_7375), cParam1);
}

void func_1396(char[4] cParam0)
{
	Var0 = { func_1534(cParam0, func_35(cParam0)) };
	func_1915(cParam0, &Var0);
}

void func_1397(char[4] cParam0, vector3 vParam1, float fParam4, float fParam5)
{
	func_849(&(cParam0->f_7375), vParam1, fParam4, fParam5);
}

void func_1398()
{
	iVar0 = iVar812;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_814[iVar1] = 0;
		iVar1++;
	}
	iLocal_845 = 0;
}

void func_1399(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_455(&(uLocal_170[iVar0]), iVar958))
		{
			set_entity_invincible(&(uLocal_170[iVar0]), bParam0);
		}
		iVar0++;
	}
}

bool func_1400(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0) || (iParam2 == 1 && is_entity_dead(iParam0)))
	{
		return false;
	}
	iVar0 = get_blip_from_entity(iParam0);
	if (!does_blip_exist(iVar0))
	{
		return false;
	}
	return _set_blip_flash_style(iVar0, iParam1);
}

bool func_1401()
{
	if (!func_1916(-1, 1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!func_455(&(Local_14.f_69[iVar0]), 0))
		{
		}
		else
		{
			set_blocking_of_non_temporary_events(&(Local_14.f_69[iVar0]), true);
		}
		iVar0++;
	}
	return true;
}

void func_1402(char[4] cParam0)
{
	iVar0 = get_blip_from_entity(&(uLocal_170[0]));
	if (does_blip_exist(iVar0))
	{
		func_1353(&iVar0);
	}
	func_1374(&(uLocal_170[0]), 422991367, 1, 1);
	func_1406(cParam0, &(uLocal_170[0]), 1105014447, 422991367, 0, 1);
	if (does_blip_exist(iVar0))
	{
		set_blip_name_from_text_file(iVar0, "MAR1_DICKENS");
	}
}

void func_1403()
{
	vVar0 = { func_385(10, 12) };
	vVar3 = { func_385(10, 13) };
	remove_all_ped_weapons(&(uLocal_389[0]), true, true);
	remove_all_ped_weapons(&(uLocal_389[1]), true, true);
	func_1918(uLocal_389[0], func_1917(268435456, 1056964608, 1065353216), func_385(10, 4), func_385(10, 4), 8f, vVar3, 13f, 416676503, 1);
	func_1918(uLocal_389[1], func_1917(268435456, 1056964608, 1065353216), func_385(10, 18), func_385(10, 18), 5f, vVar0, 20f, 416676503, 1);
	iVar6 = 0;
	while (iVar6 <= 1)
	{
		func_1919(uLocal_389[iVar6], &uLocal_170, 0);
		iVar6++;
	}
}

bool func_1404(var uParam0)
{
	return *uParam0 == *uParam0;
}

void func_1405(char[4] cParam0, bool bParam1, int iParam2, bool bParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_1009(cParam0, bParam1))
	{
		if (!func_1920(cParam0, bParam1, &iVar0))
		{
			if (!func_1921(cParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	func_1620(cParam0->f_5423[iVar0], 1);
	cParam0->f_5423[iVar0] = bParam1;
	if (is_entity_a_ped(bParam1) && is_ped_human(get_ped_index_from_entity_index(bParam1)))
	{
		func_1620(cParam0->f_5423[iVar0], 128);
	}
	if (does_entity_exist(bParam3))
	{
		if (func_1526(bParam3))
		{
			cParam0->f_5423[iVar0]->f_1 = bParam3;
			func_1620(cParam0->f_5423[iVar0], 4);
			func_1620(cParam0->f_5423[iVar0], 16);
		}
		else if (is_entity_a_vehicle(bParam3))
		{
			cParam0->f_5423[iVar0]->f_1 = bParam3;
			func_1620(cParam0->f_5423[iVar0], 4);
			func_1620(cParam0->f_5423[iVar0], 8);
		}
	}
	cParam0->f_5423[iVar0]->f_4 = sParam4;
	cParam0->f_5423[iVar0]->f_7 = iParam5;
	cParam0->f_5423[iVar0]->f_6 = iParam6;
	if (is_entity_a_ped(bParam1))
	{
		if (iParam8 == -1)
		{
			if (get_ped_index_from_entity_index(bParam1) == func_213(7))
			{
				cParam0->f_5423[iVar0]->f_9 = 40;
			}
			else
			{
				cParam0->f_5423[iVar0]->f_9 = func_1922(bParam1);
			}
		}
		else
		{
			cParam0->f_5423[iVar0]->f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			cParam0->f_5423[iVar0]->f_10 = iParam8;
		}
		if (func_518(cParam0->f_5423[iVar0]->f_10))
		{
		}
	}
	cParam0->f_13145++;
	if (is_entity_an_object(bParam1))
	{
		if (_0x26054eb81ac0893b(get_object_index_from_entity_index(bParam1)))
		{
			_0x2dd42fad06e6f19e(get_object_index_from_entity_index(bParam1), 1, 1);
		}
	}
	else if (is_entity_a_ped(bParam1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			cParam0->f_5423[iVar0]->f_23[iVar1]->f_3 = 238506;
			iVar1++;
		}
		func_1923(cParam0, bParam1, 2, 4);
		func_1924(cParam0, bParam1, 2500, 8);
		func_1924(cParam0, bParam1, 2500, 512);
		func_1925(cParam0, bParam1, 5000, 512);
		if (cParam0->f_5423[iVar0]->f_9 == 14)
		{
			func_1926(cParam0, bParam1, -2147483648);
		}
	}
}

int func_1406(char[4] cParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(bParam1))
	{
		return iVar0;
	}
	bVar1 = func_1009(cParam0, bParam1);
	bVar2 = (is_entity_a_ped(bParam1) && func_1007(get_ped_index_from_entity_index(bParam1)));
	if (bVar2)
	{
		iVar3 = func_1008(get_ped_index_from_entity_index(bParam1));
	}
	if (bVar1)
	{
		func_1012(cParam0, bParam1, 128);
		if (bParam4)
		{
			func_1012(cParam0, bParam1, 1024);
		}
	}
	if (is_entity_a_ped(bParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(bParam1);
		if (bVar2)
		{
			func_1927(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_1009(cParam0, bParam1) && does_blip_exist(iVar0))
		{
			_blip_set_modifier(iVar0, -546708623);
			if (bParam5)
			{
				_blip_set_modifier(iVar0, 231194138);
			}
		}
		else
		{
			if (!does_blip_exist(iVar0))
			{
				iVar0 = _blip_add_for_entity(iParam3, bParam1);
			}
			_blip_set_modifier(iVar0, -546708623);
			if (bParam5)
			{
				_blip_set_modifier(iVar0, 231194138);
			}
		}
	}
	if (bVar1)
	{
		if (func_1013(cParam0, bParam1, &iVar4))
		{
			func_1014(cParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1015(iVar3);
	}
	return iVar0;
}

void func_1407(char[4] cParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam1 - 1))
	{
		if (!func_455(uParam1[iVar0], iVar955))
		{
		}
		else
		{
			func_1906(cParam0, (*uParam1)[iVar0], 1269650476, (*uParam2)[iVar0], iParam3, 0, -1);
			_0x18ff3110cf47115d(uParam1[iVar0], 1, 0);
			set_ped_config_flag(uParam1[iVar0], 448, true);
			set_ped_config_flag(uParam1[iVar0], 186, false);
			set_ped_can_use_auto_conversation_lookat(uParam1[iVar0], true);
		}
		iVar0++;
	}
}

void func_1408(char[4] cParam0, int* iParam1, var uParam2)
{
	if (!func_455(*iParam1, iVar955))
	{
		if (func_1928(iParam1, uParam2, -1, 0))
		{
			return;
		}
		else if (!func_1928(iParam1, uParam2, 131, 0) && !func_1928(iParam1, uParam2, 132, 0))
		{
			if (is_waypoint_playback_going_on_for_vehicle(bVar534, "mar1_outlaw_wagon_escape"))
			{
				vehicle_waypoint_playback_get_is_paused(bVar534);
			}
			func_1929(&iLocal_846, 0);
			func_1930(&Local_867, 1, 0, 1, 0);
			func_1315(uParam2, 131, 1);
		}
	}
	iVar0 = -1;
	switch (*uParam2)
	{
		case 0:
			remove_all_ped_weapons(*iParam1, true, true);
			func_1315(uParam2, 1, 1);
			break;
		case 1:
			break;
		case 90:
			_0xe98d55c5983f2509(*iParam1);
			set_ped_config_flag(*iParam1, 327, true);
			set_ped_config_flag(*iParam1, 376, true);
			set_ped_config_flag(*iParam1, 22, true);
			if (*iParam1 == &uLocal_389[0])
			{
				func_1931(Local_867[0], "MAR1_ILO_CNTXT_FAR", 0, -1616532217, 0, 0, 0, 1, 0);
				func_1932(*iParam1, "0711_G_M_M_UniRanchers_01_WHITE_01", 0);
			}
			else
			{
				func_1931(Local_924[0], "MAR1_ILO_CNTXT_FAR", 0, -1616532217, 0, 0, 0, 1, 0);
				func_1932(*iParam1, "0712_G_M_M_UniRanchers_01_WHITE_02", 0);
			}
			remove_all_ped_weapons(*iParam1, true, true);
			clear_ped_tasks_immediately(*iParam1, false, true);
			set_blocking_of_non_temporary_events(*iParam1, true);
			open_sequence_task(&uLocal_481);
			if (!is_ped_in_any_vehicle(*iParam1, false))
			{
				task_enter_vehicle(0, bVar534, 20000, -1, 2f, 1, 0);
			}
			else if (is_vehicle_seat_free(bVar534, -1))
			{
				task_shuffle_to_next_vehicle_seat(0, bVar534);
			}
			task_vehicle_follow_waypoint_recording(0, bVar534, "mar1_outlaw_wagon_escape", 524419, 0, 262668, -1, -1082130432, 1, 1073741824, 0);
			close_sequence_task(iVar476);
			task_perform_sequence(*iParam1, iVar476);
			clear_sequence_task(&uLocal_481);
			_0x2208438012482a1a(*iParam1, false, false);
			uParam2->f_14 = 0;
			func_1315(uParam2, 91, 1);
			break;
		case 91:
			if (*iParam1 == &uLocal_389[0])
			{
				iVar0 = func_1933(iParam1, &iLocal_846, 30f, &Local_867, 0f, 3, 0, "", iVar897, 0, 0, 2, -1082130432);
			}
			else
			{
				iVar0 = func_1933(iParam1, &iLocal_903, 30f, &Local_924, 0f, 3, 0, "", iVar954, 0, 0, 2, -1082130432);
			}
			if (!_0xea8f168a76a0b9bc(get_player_index(), *iParam1, 8, 1))
			{
				_0xa3db37edf9a74635(get_player_index(), *iParam1, 8, 1, 1);
			}
			if (func_1321(*iParam1, 242628503) && is_waypoint_playback_going_on_for_vehicle(bVar534, "mar1_outlaw_wagon_escape"))
			{
				if (get_vehicle_waypoint_progress(bVar534) >= 0 && get_vehicle_waypoint_progress(bVar534) <= 9)
				{
					vehicle_waypoint_playback_override_speed(bVar534, 8f);
				}
				else if ((get_vehicle_waypoint_progress(bVar534) >= 6 && get_vehicle_waypoint_progress(bVar534) <= 50) || (get_vehicle_waypoint_progress(bVar534) >= 86 && get_vehicle_waypoint_progress(bVar534) <= 100))
				{
					vehicle_waypoint_playback_use_default_speed(bVar534);
				}
				else if (((func_1347("MAR1_GETBACK") || func_1347("MAR1_TAUNT_WAG2")) || (get_vehicle_waypoint_progress(bVar534) >= 24 && get_vehicle_waypoint_progress(bVar534) <= 37)) || (get_vehicle_waypoint_progress(bVar534) >= 78 && get_vehicle_waypoint_progress(bVar534) <= 84))
				{
					vehicle_waypoint_playback_override_speed(bVar534, 6f);
				}
				else if (is_ped_on_mount(Global_35) || func_918(*iParam1, Global_35, 15f, 1))
				{
					if (func_918(*iParam1, Global_35, 30f, 1))
					{
						vehicle_waypoint_playback_override_speed(bVar534, 8f);
					}
					else
					{
						vehicle_waypoint_playback_override_speed(bVar534, 5f);
					}
				}
				else
				{
					vehicle_waypoint_playback_override_speed(bVar534, 5f);
				}
				if ((get_vehicle_waypoint_progress(bVar534) >= 20 && func_1343(&(uParam2->f_17), 8f)) && func_1358(cParam0, "MAR1_OUT_CHASE", 0, 0, 0))
				{
					uParam2->f_14 = 0;
					func_218(&(uParam2->f_17));
				}
			}
			func_27(&(uParam2->f_17), 0);
			if (is_ped_jacking(Global_35))
			{
				if (!func_1390("MAR1_PULLEDOFF") && func_1358(cParam0, "MAR1_PULLEDOFF", 1, 0, 0))
				{
					func_1391("MAR1_PULLEDOFF", 1);
				}
				func_218(&(uParam2->f_17));
			}
			if ((((((func_1934(Global_35, bVar534, "mar1_outlaw_wagon_escape", 1112014848) && func_1388(bVar534, Global_35, 0f) == 0) && func_918(bVar534, Global_35, 20f, 1)) && !func_1321(Global_35, 1404409630)) && !func_1340(Global_35, &(iLocal_544[18]), 1, 0)) || func_1419(cParam0, 13)) || (is_ped_on_specific_vehicle(Global_35, bVar534) && func_1340(Global_35, &(iLocal_544[17]), 1, 0)))
			{
				if (func_501(&uLocal_630) && func_26(&uLocal_630))
				{
					func_1851(&uLocal_630);
				}
				else if (!func_26(&uLocal_630) && !is_ped_jacking(Global_35))
				{
					func_27(&uLocal_630, 0);
				}
				if (!is_ped_jacking(Global_35) && func_1343(&uLocal_630, func_1427((is_ped_on_specific_vehicle(Global_35, bVar534) && func_1340(Global_35, &(iLocal_544[17]), 1, 0)), 2.25f, 1.5f)))
				{
					func_1341(13);
					func_1315(uParam2, 83, 1);
				}
			}
			else if ((func_1343(&(uParam2->f_17), 2f) || !is_ped_in_any_vehicle(*iParam1, false)) || func_1419(cParam0, 11))
			{
				if (!is_ped_in_any_vehicle(*iParam1, false))
				{
					if (func_1390("MAR1_PULLEDOFF") || func_1358(cParam0, "MAR1_PULLEDOFF", 1, 0, 0))
					{
						func_1391("MAR1_PULLEDOFF", 1);
						clear_ped_tasks(*iParam1, 1, 0);
						func_1315(uParam2, 98, 1);
					}
				}
				else if ((is_ped_in_vehicle(Global_35, bVar534, false) && _0x9420fb11b8d77948(Global_35) == -1) && !is_ped_jacking(Global_35))
				{
					if (func_1390("MAR1_PULLEDOFF") || func_1358(cParam0, "MAR1_PULLEDOFF", 1, 0, 0))
					{
						func_1391("MAR1_PULLEDOFF", 1);
						if (is_ped_in_vehicle(Global_35, bVar534, false) && !is_ped_in_vehicle(*iParam1, bVar534, false))
						{
							clear_ped_tasks(*iParam1, 1, 0);
							if (get_ped_in_vehicle_seat(bVar534, -1) == Global_35)
							{
								func_1315(uParam2, 100, 1);
							}
							else
							{
								func_1315(uParam2, 98, 1);
							}
						}
					}
				}
				func_461(&uLocal_630);
			}
			else
			{
				func_461(&uLocal_630);
			}
			if ((is_ped_jacking(Global_35) || _0x9420fb11b8d77948(Global_35) != -1) && !func_1419(cParam0, 11))
			{
				func_1341(11);
			}
			if ((((func_1340(Global_35, &(iLocal_544[17]), 1, 0) || func_918(bVar534, Global_35, 8f, 1)) && func_1935(Global_35)) && !_is_ped_lassoed(*iParam1)) && !_is_ped_hogtied(*iParam1))
			{
				if (uParam2->f_14 == 0)
				{
					if (*iParam1 == &uLocal_389[0])
					{
						func_1936(Local_867[0], "MAR1_ILO_CONTEXT");
					}
					else
					{
						func_1936(Local_924[0], "MAR1_ILO_CONTEXT");
					}
					uParam2->f_14 = 1;
				}
				if (*iParam1 == &uLocal_389[0])
				{
					func_1937(Local_867[0], 1, 0);
				}
				else
				{
					func_1937(Local_924[0], 1, 0);
				}
			}
			else
			{
				if (uParam2->f_14 == 1)
				{
					if (*iParam1 == &uLocal_389[0])
					{
						func_1936(Local_867[0], "MAR1_ILO_CNTXT_FAR");
					}
					else
					{
						func_1936(Local_924[0], "MAR1_ILO_CNTXT_FAR");
					}
					uParam2->f_14 = 0;
				}
				if (iVar714 >= 4)
				{
					if (*iParam1 == &uLocal_389[0])
					{
						func_1937(Local_867[0], 0, 0);
					}
					else
					{
						func_1937(Local_924[0], 0, 0);
					}
				}
			}
			if ((iVar0 == 0 && func_1343(&(uParam2->f_17), 2f)) || func_1419(cParam0, 12))
			{
				if ((func_1340(Global_35, &(iLocal_544[17]), 1, 0) || func_918(bVar534, Global_35, 8f, 1)) || func_1419(cParam0, 12))
				{
					func_1341(12);
					func_1315(uParam2, 83, 1);
				}
				else if ((iVar714 < 4 && !func_1390("MAR1_GETBACK")) && func_1358(cParam0, "MAR1_GETBACK", 1, 0, 0))
				{
					uLocal_719 = iVar714 + 1;
					func_1391("MAR1_GETBACK", 1);
					if (*iParam1 == &uLocal_389[0])
					{
						func_1937(Local_867[0], 0, 0);
					}
					else
					{
						func_1937(Local_924[0], 0, 0);
					}
				}
			}
			else if (!func_1390("MAR1_OUT_CHASE") && func_1390("MAR1_GETBACK"))
			{
				if (*iParam1 == &uLocal_389[0])
				{
					func_1937(Local_867[0], 0, 0);
				}
				else
				{
					func_1937(Local_924[0], 0, 0);
				}
				if ((!func_1390("MAR1_OUT_CHASE") && !func_1347("MAR1_GETBACK")) && (uParam2->f_14 == 1 || func_1358(cParam0, "MAR1_OUT_CHASE", 1, 1f, 0)))
				{
					func_1391("MAR1_OUT_CHASE", 1);
				}
			}
			else if (func_1390("MAR1_OUT_CHASE") && func_1390("MAR1_GETBACK"))
			{
				if (*iParam1 == &uLocal_389[0])
				{
					func_1937(Local_867[0], 0, 0);
				}
				else
				{
					func_1937(Local_924[0], 0, 0);
				}
				if (!func_1347("MAR1_OUT_CHASE") && !func_1347("MAR1_GETBACK"))
				{
					func_1391("MAR1_OUT_CHASE", 0);
					func_1391("MAR1_GETBACK", 0);
					if (*iParam1 == &uLocal_389[0])
					{
						func_1937(Local_867[0], 1, 0);
					}
					else
					{
						func_1937(Local_924[0], 1, 0);
					}
				}
			}
			break;
		default:
			func_1938(cParam0, iParam1, uParam2);
			break;
	}
}

void func_1409(char[4] cParam0, int* iParam1, var uParam2)
{
	if (!func_455(*iParam1, iVar955))
	{
		if (func_1928(iParam1, uParam2, -1, 0))
		{
			return;
		}
		else if (!func_1928(iParam1, uParam2, 131, 0) && !func_1928(iParam1, uParam2, 132, 0))
		{
			func_1929(&iLocal_903, 0);
			func_1930(&Local_924, 1, 0, 1, 0);
			func_1315(uParam2, 131, 1);
		}
	}
	switch (*uParam2)
	{
		case 0:
			remove_all_ped_weapons(*iParam1, true, true);
			func_1315(uParam2, 1, 1);
			break;
		case 1:
			func_1315(uParam2, 95, 1);
			break;
		case 95:
			_0xe98d55c5983f2509(*iParam1);
			set_ped_config_flag(*iParam1, 327, true);
			set_ped_config_flag(*iParam1, 376, true);
			set_ped_config_flag(*iParam1, 22, true);
			func_1931(Local_924[0], "MAR1_ILO_CNTXT_FAR", 0, -1616532217, 0, 0, 0, 1, 0);
			func_1932(*iParam1, "0712_G_M_M_UniRanchers_01_WHITE_02", 0);
			set_blocking_of_non_temporary_events(*iParam1, true);
			remove_all_ped_weapons(*iParam1, true, true);
			if (!is_ped_in_any_vehicle(*iParam1, false))
			{
				clear_ped_tasks_immediately(*iParam1, false, true);
				open_sequence_task(&uLocal_481);
				if (!is_ped_in_any_vehicle(*iParam1, false))
				{
					task_enter_vehicle(0, bVar534, 20000, 0, 2f, 1, 0);
				}
				task_stand_still(0, -1);
				close_sequence_task(iVar476);
				task_perform_sequence(*iParam1, iVar476);
				clear_sequence_task(&uLocal_481);
				_0x2208438012482a1a(*iParam1, false, false);
			}
			uParam2->f_14 = 0;
			func_1315(uParam2, 96, 1);
			break;
		case 96:
			iVar0 = func_1933(iParam1, &iLocal_903, 30f, &Local_924, 0f, 3, 0, "", iVar954, 0, 0, 2, -1082130432);
			if (!_0xea8f168a76a0b9bc(get_player_index(), *iParam1, 8, 1))
			{
				_0xa3db37edf9a74635(get_player_index(), *iParam1, 8, 1, 1);
			}
			if (is_ped_in_vehicle(Global_35, bVar534, true) || get_ped_in_vehicle_seat(bVar534, 0) == Global_35)
			{
				func_1939(&(uLocal_389[0]), 114, 1);
			}
			func_27(&(uParam2->f_17), 0);
			if (is_ped_jacking(Global_35))
			{
				func_218(&(uParam2->f_17));
			}
			if ((((((func_1934(Global_35, bVar534, "mar1_outlaw_wagon_escape", 1112014848) && func_1388(bVar534, Global_35, 0f) == 0) && func_918(bVar534, Global_35, 20f, 1)) && !func_1321(Global_35, 1404409630)) && !func_1340(Global_35, &(iLocal_544[18]), 1, 0)) || func_1419(cParam0, 13)) || (is_ped_on_specific_vehicle(Global_35, bVar534) && func_1340(Global_35, &(iLocal_544[17]), 1, 0)))
			{
				if (!is_ped_jacking(Global_35))
				{
					func_27(&uLocal_630, 0);
					if (!is_ped_jacking(Global_35) && func_1343(&uLocal_630, func_1427((is_ped_on_specific_vehicle(Global_35, bVar534) && func_1340(Global_35, &(iLocal_544[17]), 1, 0)), 2.25f, 1.5f)))
					{
						func_1341(13);
						func_1315(uParam2, 85, 1);
					}
				}
			}
			else if ((func_1343(&(uParam2->f_17), 2f) || !is_ped_in_any_vehicle(*iParam1, false)) || func_1419(cParam0, 11))
			{
				if (!is_ped_in_any_vehicle(*iParam1, false))
				{
					func_1939(&(uLocal_389[0]), 114, 1);
					func_1315(uParam2, 100, 1);
				}
				else if ((is_ped_in_vehicle(Global_35, bVar534, false) && _0x9420fb11b8d77948(Global_35) == -1) && !is_ped_jacking(Global_35))
				{
					if (is_ped_in_vehicle(Global_35, bVar534, false) && !is_ped_in_vehicle(*iParam1, bVar534, false))
					{
						func_1315(uParam2, 100, 1);
					}
				}
				else if (((is_vehicle_seat_free(bVar534, -1) || !func_455(get_ped_in_vehicle_seat(bVar534, -1), 0)) && func_1386(*iParam1, bVar534, 0)) && !is_ped_in_vehicle(Global_35, bVar534, true))
				{
					func_1315(uParam2, 90, 1);
				}
				func_461(&uLocal_630);
			}
			else
			{
				func_461(&uLocal_630);
			}
			if ((is_ped_jacking(Global_35) || _0x9420fb11b8d77948(Global_35) != -1) && !func_1419(cParam0, 11))
			{
				func_1341(11);
			}
			if ((((func_1340(Global_35, &(iLocal_544[17]), 1, 0) || func_918(bVar534, Global_35, 8f, 1)) && func_1935(Global_35)) && !_is_ped_lassoed(*iParam1)) && !_is_ped_hogtied(*iParam1))
			{
				if (uParam2->f_14 == 0)
				{
					func_1936(Local_924[0], "MAR1_ILO_CONTEXT");
					uParam2->f_14 = 1;
				}
				func_1937(Local_924[0], 0, 0);
			}
			else
			{
				if (uParam2->f_14 == 1)
				{
					func_1936(Local_924[0], "MAR1_ILO_CNTXT_FAR");
					uParam2->f_14 = 0;
				}
				if (iVar714 >= 4)
				{
					func_1937(Local_924[0], 0, 0);
				}
			}
			if ((iVar0 == 0 && func_1343(&(uParam2->f_17), 2f)) || func_1419(cParam0, 12))
			{
				if ((func_1340(Global_35, &(iLocal_544[17]), 1, 0) || func_918(bVar534, Global_35, 8f, 1)) || func_1419(cParam0, 12))
				{
					func_1341(12);
					func_1315(uParam2, 83, 1);
				}
				else if ((iVar714 < 4 && !func_1390("MAR1_GETBACK")) && func_1358(cParam0, "MAR1_GETBACK", 1, 0, 0))
				{
					uLocal_719 = iVar714 + 1;
					func_1391("MAR1_GETBACK", 1);
					func_1937(Local_924[0], 0, 0);
				}
			}
			else if (!func_1390("MAR1_OUT_CHASE") && func_1390("MAR1_GETBACK"))
			{
				func_1937(Local_924[0], 0, 0);
				if ((!func_1390("MAR1_OUT_CHASE") && !func_1347("MAR1_GETBACK")) && (uParam2->f_14 == 1 || func_1358(cParam0, "MAR1_OUT_CHASE", 1, 1f, 0)))
				{
					func_1391("MAR1_OUT_CHASE", 1);
				}
			}
			else if (func_1390("MAR1_OUT_CHASE") && func_1390("MAR1_GETBACK"))
			{
				func_1937(Local_924[0], 0, 0);
				if (!func_1347("MAR1_OUT_CHASE") && !func_1347("MAR1_GETBACK"))
				{
					func_1391("MAR1_OUT_CHASE", 0);
					func_1391("MAR1_GETBACK", 0);
					func_1937(Local_924[0], 1, 0);
				}
			}
			break;
		default:
			func_1408(cParam0, iParam1, uParam2);
			break;
	}
}

void func_1410(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_1411(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = _0xa6ef0c54a3443e70(iParam0, bParam1);
	if (bParam2)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

float func_1412(int iParam0, int iParam1)
{
	return func_1053(iParam0, iParam1);
}

bool func_1413(char[4] cParam0, char* sParam1, bool bParam2)
{
	StringCopy(&cVar0, sParam1, 24);
	if (func_1940(&(cParam0->f_5310), cVar0, 0, -1, bParam2, 0))
	{
		return true;
	}
	return false;
}

bool func_1414(char[4] cParam0, bool bParam1, char* sParam2, char* sParam3, char* sParam4, bool bParam5, int iParam6, float fParam7, float fParam8, int iParam9, bool bParam10)
{
	if (!does_entity_exist(bParam1))
	{
		return false;
	}
	if (is_entity_dead(bParam1))
	{
		return false;
	}
	if (!is_entity_a_ped(bParam1) && iParam9 == 422991367)
	{
		iParam9 = 408396114;
	}
	bVar0 = func_1941(cParam0, get_entity_coords(bParam1, true, false), sParam2, sParam3, 1, sParam4, bParam5, fParam7, fParam8);
	if (func_22(cParam0) != 1 && func_8(cParam0, 64))
	{
		if (bParam10)
		{
			func_1942(cParam0, bParam1, iParam9, bVar0, iParam6);
		}
		func_928(cParam0, 64);
	}
	return bVar0;
}

bool func_1415(var uParam0, int iParam1)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_455(uParam0[iVar1], iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_1416()
{
	if (is_ped_on_mount(Global_35) && iVar993 == 0)
	{
		bVar0 = get_mount(Global_35);
		if (bVar992 != bVar0 && func_455(bVar0, 0))
		{
			bLocal_994 = bVar0;
			func_1943(bVar992, 1);
			iLocal_995 = 1;
		}
	}
	else
	{
		if (func_455(bVar992, 0))
		{
			func_1943(bVar992, 0);
		}
		iLocal_995 = 0;
	}
}

bool func_1417()
{
	if (((!is_entity_on_screen(&(uLocal_170[0])) && is_entity_occluded(&(uLocal_170[0]))) && !func_455(&(uLocal_170[2]), 0)) && !func_918(Global_35, &(uLocal_170[0]), 15f, 1))
	{
		func_27(&uLocal_606, 0);
		if (((func_1343(&uLocal_606, 8f) && !is_entity_on_screen(&(uLocal_170[0]))) && is_entity_occluded(&(uLocal_170[0]))) && !func_1340(Global_35, &(iLocal_544[0]), 1, 0))
		{
			set_ped_config_flag(&(uLocal_170[0]), 336, false);
			_0x0e17378642156790(&(uLocal_170[0]), "OverloadMostInjuredBodyPart");
			if (!func_1424(uLocal_170[2], func_453(2), 22))
			{
			}
			if (func_455(&(uLocal_170[2]), 0))
			{
				func_1425(&(uLocal_170[2]));
				func_837(&(uLocal_170[2]), func_221(16, 6), 2, 1073741824);
				func_1315(Local_304[0], -1, 1);
				func_1315(Local_304[2], 1, 1);
				func_1294(21);
				func_1295(&(uLocal_105[21]));
				func_461(&uLocal_606);
			}
		}
	}
	else if (func_455(&(uLocal_170[2]), 0))
	{
		return true;
	}
	return false;
}

void func_1418(char[4] cParam0, var uParam1, var uParam2)
{
	if (func_1895(cParam0, uParam1))
	{
		if (*uParam2 != 131 && *uParam2 != 132)
		{
			func_1315(uParam2, 131, 1);
		}
	}
	else if (!func_455(*uParam1, iVar956))
	{
		return;
	}
	set_ped_reset_flag(*uParam1, 3, true);
	switch (*uParam2)
	{
		case 0:
			func_1294(18);
			if (func_1349(&(uLocal_105[18]), "pbl_action", 1))
			{
				set_anim_scene_origin(&(uLocal_105[18]), func_385(6, 2), 0f, 0f, func_1412(6, 2), 2);
				func_1295(&(uLocal_105[18]));
				func_145(cParam0, *uParam1, "PHR_WORKER", 0);
				set_entity_load_collision_flag(*uParam1, 1);
				func_1315(uParam2, 1, 1);
			}
			break;
		case 1:
			func_1944(&uLocal_772, 8f);
			if (func_1945(Global_35, *uParam1, &uLocal_772))
			{
				iVar0 = 1;
			}
			if (((func_1340(Global_35, &(iLocal_544[1]), 1, 0) && (func_1898(*uParam1, 1, 1, 0, 0, 0) || func_1899(*uParam1, 1090519040, 1103626240, 1097859072, 0))) && _0x705be297eebdb95d(func_1946(*uParam1, 0))) || iVar0 == 1)
			{
				if (iVar0 == 1)
				{
					uParam2->f_14 = 1;
				}
				func_1315(uParam2, 6, 1);
			}
			break;
		case 83:
			if (!func_1301(&(uLocal_105[18]), -1082130432))
			{
				return;
			}
			_0x18ff3110cf47115d(&(iLocal_501[2]), 4, 1);
			_0x18ff3110cf47115d(&(iLocal_501[2]), 14, 1);
			_0x18ff3110cf47115d(&(iLocal_501[2]), 10, 1);
			task_carriable(&(iLocal_501[2]), -940969101, *uParam1, 0, 0);
			func_1315(uParam2, 84, 1);
			break;
		case 84:
			func_27(&(uParam2->f_17), 0);
			if (_0x0ccfe72b43c9cf96(&(iLocal_501[2])))
			{
				func_1315(uParam2, 89, 1);
			}
			else if (func_1343(&(uParam2->f_17), 1.5f))
			{
				func_1315(uParam2, 83, 1);
			}
			break;
		case 89:
			clear_ped_tasks(*uParam1, 1, 0);
			open_sequence_task(&uLocal_481);
			task_place_carried_entity_at_coord(0, &(iLocal_501[2]), func_385(6, 10), 1f, 0);
			close_sequence_task(iVar476);
			task_perform_sequence(*uParam1, iVar476);
			clear_sequence_task(&uLocal_481);
			func_1315(uParam2, 90, 1);
			break;
		case 90:
			if (_get_carrier_as_human(&(iLocal_501[2])) != *uParam1 && !func_1321(*uParam1, 242628503))
			{
				_0x9ebd34958ab6f824(&(iLocal_501[2]));
				set_entity_no_collision_entity(iLocal_175, iVar534, true);
				activate_physics(iVar534);
				freeze_entity_position(iVar534, false);
				clear_ped_tasks(*uParam1, 1, 0);
				open_sequence_task(&uLocal_481);
				task_enter_vehicle(0, iVar534, 20000, -1, 2f, 1, 0);
				_task_vehicle_drive_to_destination(0, iVar534, func_385(11, 5), 5f, 131, 2, 4f, 2f, 0);
				close_sequence_task(iVar476);
				task_perform_sequence(*uParam1, iVar476);
				clear_sequence_task(&uLocal_481);
				func_1315(uParam2, 91, 1);
			}
			break;
		case 91:
			func_27(&(uParam2->f_17), 0);
			if (func_1343(&(uParam2->f_17), 1.5f))
			{
				func_1315(uParam2, 92, 1);
			}
			break;
		case 92:
			break;
		case 6:
			clear_ped_tasks(*uParam1, 1, 0);
			open_sequence_task(&uLocal_481);
			task_smart_flee_ped(0, Global_35, 4000f, -1, 0, 1077936128, 0);
			close_sequence_task(iVar476);
			task_perform_sequence(*uParam1, iVar476);
			clear_sequence_task(&uLocal_481);
			_0x2208438012482a1a(*uParam1, false, false);
			func_1374(*uParam1, -1049390151, 1, 1);
			func_1315(uParam2, 7, 1);
			break;
		case 7:
			func_27(&(uParam2->f_17), 0);
			if (func_1343(&(uParam2->f_17), 2f))
			{
				sVar1 = "MAR1_THREAT_RANCH";
				if (uParam2->f_14 == 1)
				{
					sVar1 = "MAR1_FAIL_LAW";
				}
				func_1363(cParam0, sVar1, "", 1, 0);
			}
			break;
		case 131:
			func_1900(cParam0, uParam1, &(uParam2->f_17), "MAR1_ATTACK_ANGUS", "MAR1_DEAD_ANGUS", 1070386381);
			break;
	}
}

bool func_1419(char[4] cParam0, int iParam1)
{
	if (!func_1947(iParam1))
	{
		return false;
	}
	if (&iLocal_128[iParam1] == 1)
	{
		return true;
	}
	return false;
}

void func_1420()
{
	if (_does_volume_exist(&(iLocal_544[18])))
	{
		_0xb56d41a694e42e86(&(iLocal_544[18]), 2016, 0, 0, -1, -1, 0);
	}
}

void func_1421()
{
	func_1353(&iLocal_541);
	clear_gps_custom_route();
	clear_gps_multi_route();
	iLocal_541 = func_1354(408396114, func_385(5, 0), 1109393408, 1);
	_blip_set_modifier(iVar539, 231194138);
	if (does_blip_exist(iVar539))
	{
		set_blip_name_from_text_file(iVar539, "MAR1_RANCH_NAME");
	}
}

void func_1422(char[4] cParam0)
{
	func_1353(&iLocal_542);
	func_1353(&iLocal_541);
	clear_gps_custom_route();
	clear_gps_multi_route();
}

void func_1423(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_33(cParam0) == iLocal_156 && &uLocal_170[iVar0] == &uLocal_170[0])
		{
		}
		else if (func_455(&(uLocal_170[iVar0]), iVar958))
		{
			func_452(cParam0, &(uLocal_170[iVar0]), 1);
		}
		iVar0++;
	}
}

bool func_1424(var uParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(*uParam0))
	{
		return true;
	}
	if (!func_246(iParam2))
	{
		return false;
	}
	if (_0x800df3fc913355f3(func_477(iParam1)) || func_1866(iParam1, 1))
	{
		if (func_1016(iParam1, 1))
		{
			func_1019(iParam1, 1);
		}
		*uParam0 = func_1867(iParam1, 1, 0, 0, 1, 1);
		if (does_entity_exist(*uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1425(var uParam0)
{
	iVar1 = _0x0139637a3bff8b6d(uParam0, &iVar0);
	if (!_0x0772f87d7b07719a(player_id(), iVar0, iVar1))
	{
		_0x946d46cd6dfb9742(player_id(), iVar0, iVar1);
	}
}

void func_1426()
{
}

bool func_1427(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

void func_1428(char[4] cParam0, bool bParam1)
{
	func_27(&(cParam0->f_13106), bParam1);
}

float func_1429(char[4] cParam0)
{
	return func_932(&(cParam0->f_13106));
}

bool func_1430(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5)
{
	sParam0 = func_1616(iParam5, sParam0, sParam1, sParam2, sParam3, sParam4);
	return are_strings_equal(sParam0, func_1948());
}

void func_1431()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!func_455(&(Local_14.f_69[iVar0]), 0))
		{
		}
		else
		{
			func_458(Local_14.f_69[iVar0]);
		}
		iVar0++;
	}
}

int func_1432()
{
	if (func_455(bLocal_161, 0))
	{
		return 1;
	}
	Local_733 = 1;
	Local_733.f_1 = 0;
	Local_733.f_4 = 1;
	Local_733.f_6 = { func_385(6, 16) };
	Local_733.f_9 = func_1412(6, 16);
	bLocal_161 = func_917(&uLocal_732, &Local_733);
	return 0;
}

void func_1433(char[4] cParam0, char[4] cParam1)
{
	func_1296(&(cParam0->f_7375), cParam1);
	func_378(cParam0, 33554432);
}

bool func_1434(int iParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	_0xdf7b5144e25cd3fe(iParam0, sParam1);
	if (_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		return true;
	}
	if (_0x0df57f86fe71dbe5(iParam0, sParam1))
	{
		return false;
	}
	return false;
}

void func_1435(char[4] cParam0)
{
	if (iVar657 == 0)
	{
		animpostfx_play("ChapterTitle_IntroCh08Epi01");
		_0x6339c1ea3979b5f7("Pass_Time", "Chapter_Screen_Scenes");
		func_135(cParam0, -1);
		_0xdd1232b332cbb9e7(3, 1, 0);
		func_45();
		iLocal_660 = 1;
	}
}

bool func_1436(var uParam0, char* sParam1, int iParam2, char* sParam3)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		*uParam0 = _create_anim_scene(sParam1, iParam2, sParam3, false, true);
	}
	else if (_is_anim_scene_finished(*uParam0, false) && !_is_anim_scene_loading(*uParam0, true))
	{
		reset_anim_scene(*uParam0, 0);
	}
	if (_does_anim_scene_exist(*uParam0))
	{
		if (_is_anim_scene_loaded(*uParam0, true, false))
		{
			return true;
		}
		else if (!_is_anim_scene_loading(*uParam0, true))
		{
			load_anim_scene(*uParam0);
		}
	}
	return false;
}

int func_1437(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1756(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1949(iParam1);
	}
	if ((bParam3 && func_1757(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_1950(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_1951(Global_40.f_7729, 4096);
		func_1758(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_1952(iParam0);
	}
	func_1953();
	if (!func_1954(iParam1))
	{
		func_1956(iVar0, iParam0, func_1955(iParam1), 1, 0, 1);
	}
	func_1957(iParam0);
	return 1;
}

bool func_1438(char[4] cParam0, int iParam1)
{
	return func_841(&(cParam0->f_7375), iParam1);
}

void func_1439()
{
	Global_1347477->f_201 = 1;
}

int func_1440(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1958(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_1441(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1442(int iParam0, int iParam1)
{
	iVar0 = _get_ped_in_draft_seat(iParam0, iParam1);
	if (!does_entity_exist(iVar0))
	{
	}
	if (is_entity_dead(iVar0))
	{
	}
	return iVar0;
}

bool func_1443(int iParam0)
{
	if (-1829635046 == func_1959(81053684))
	{
		if (func_1960(iParam0))
		{
			return true;
		}
	}
	else if (func_1718(-525676072, iParam0))
	{
		if (func_1960(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1444(int iParam0)
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

void func_1445(int iParam0)
{
	if (!network_is_in_session())
	{
		return;
	}
	if (network_is_in_mp_cutscene())
	{
		return;
	}
	set_entity_visible_in_cutscene(player_ped_id(), iParam0, 0, 256);
	network_set_in_mp_cutscene(true, true, 32, true);
}

void func_1446()
{
	iVar0 = func_1145(Global_35, 9, 1, 0);
	if (func_693(iVar0))
	{
		return;
	}
	iVar0 = func_1145(Global_35, 7, 1, 0);
	if (func_693(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1145(Global_35, 0, 1, 0);
	if (func_693(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1145(Global_35, 1, 1, 0);
	if (func_693(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1145(Global_35, 18, 1, 0);
	if (func_693(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1961();
	if (func_693(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1962(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1963(6291456, 0);
	if (func_693(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1962(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1447()
{
	return Global_1900383->f_393;
}

int func_1448(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1888(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	request_collision_at_coord(vVar4);
	while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			request_collision_at_coord(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		request_collision_at_coord(vVar4);
		while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				request_collision_at_coord(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_1449(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1450(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1451(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1452()
{
	return &Global_1899515;
}

void func_1453(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1454(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	clear_ped_blood_damage(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		_clear_ped_blood_damage_facial(iParam0, iVar0);
		iVar0++;
	}
}

bool func_1455()
{
	return (func_1964() || func_1965());
}

void func_1456(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	_0x3c4ae8506638c7e2(get_player_index(), 1);
	_0x8f44ebb3ba8f6d44(get_player_index(), 0);
	_0x06d26a96ca1bca75(Global_35, 10, 0f, 0);
	set_ped_is_drunk(Global_35, false);
	_0x406ccf555b04fad3(Global_35, 0, 0f);
	func_1966(0f);
	Global_1935436->f_11 = 1;
	if (func_302())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1967();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1457(var uParam0)
{
	return uParam0->f_865;
}

float func_1458(var uParam0)
{
	return uParam0->f_868;
}

float func_1459(struct<2> Param0, int iParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
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

void func_1460(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1461(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1462(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1463(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1250(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1968(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1])
		{
			iVar1 = _get_ped_component_category(iParam4, _get_metaped_type(bParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_0xdf631e4bce1b1fc4(bParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_set_ped_component_disabled(bParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_1464(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_678(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1465(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1466(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1464(1108822547, 6))
	{
		if (bParam2)
		{
			func_1463(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1467(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1468(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1467(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_678(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_678(iParam0, 1)])->f_10 || iParam1);
}

void func_1468(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_678(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_678(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_678(iParam0, 1)])->f_10 && iParam1));
}

bool func_1469(var uParam0)
{
	if (func_1969(&(uParam0->f_29), 62))
	{
		switch (func_1970())
		{
			case 1:
				if (!func_1969(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1969(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1969(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1969(&(uParam0->f_29), 32))
				{
					if (func_1969(&(uParam0->f_29), 2))
					{
						if (func_700(func_283()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

int func_1470(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1971(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1187("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1188(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_693(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1971(iParam1, 512) && func_1713(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1971(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1971(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1971(iParam1, 33554432)))
				{
					if (iVar0 == 0 || _0xa2091482ed42ef85(Global_35, &Var4) > _0xa2091482ed42ef85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_1189(iVar1);
	}
	if (func_693(iVar0))
	{
	}
	else if (!func_1971(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1470(uParam0, iParam1, iParam2);
	}
	else if (func_1971(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1471(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1472(int iParam0)
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
			return 1048576;
		case 20:
			return 2097152;
		case 21:
			return 4194304;
		case 22:
			return 8388608;
		case 23:
			return 16777216;
		case 24:
			return 33554432;
		case 25:
			return 524288;
	}
	return 0;
}

void func_1473(var uParam0)
{
	if (!func_912(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_876(&(uParam0->f_1), 1);
	}
}

void func_1474(var uParam0)
{
	if (!func_912(*uParam0, 1))
	{
		request_ptfx_asset();
		func_876(uParam0, 1);
	}
}

bool func_1475(var uParam0)
{
	if (func_912(uParam0->f_2, 1))
	{
		return true;
	}
	if (!uParam0->f_66)
	{
		return false;
	}
	if (uParam0->f_65 <= 0f)
	{
		return true;
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
	{
		_get_anim_scene_origin(uParam0->f_1, &vVar0, &uVar3, 2);
		if (get_distance_between_coords(Global_36, vVar0, true) > uParam0->f_65)
		{
			return false;
		}
		return true;
	}
	return false;
}

char* func_1476(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return "Arthur";
		case -1464743433:
			return "Abe";
		case 1483156731:
			return "EdmundLowry";
		case -1418951751:
			return "ABERDEENPIGFARMER";
		case 2029634351:
			return "ABERDEENSISTER";
		case -288068792:
			return "AbigailRoberts";
		case 513427234:
			return "AlbertMason";
		case -121985991:
			return "ArchieDown";
		case -205121720:
			return "Baptiste";
		case -77509825:
			return "BartholomewBraithwaite";
		case -55633154:
			return "CS_BEATENUPCAPTAIN";
		case 1266159496:
			return "BeauGray";
		case -2045269112:
			return "PenelopeBraithwaite";
		case 2070393450:
			return "BillWilliamson";
		case 477547053:
			return "BraithwaiteServant";
		case 1382164045:
			return "CatherineBraithwaite";
		case 1407031519:
			return "CharlesSmith";
		case -754733870:
			return "CS_CIGCARDGUY";
		case 1253299569:
			return "CS_DINOBONESLADY";
		case -464684897:
			return "Cleet";
		case -820975767:
			return "ColmODriscoll";
		case -1765531164:
			return "CreoleGuy";
		case -820854800:
			return "SDDoctor_01";
		case 382040614:
			return "DaleMaroney";
		case 1944593012:
			return "Dutch";
		case -450226655:
			return "EdithDown";
		case -1920451728:
			return "Fussar";
		case 1514128030:
			return "cs_fishcollector";
		case -1865855539:
			return "Bronte";
		case -1629501717:
			return "GuidoMartelli";
		case -1208814201:
			return "U_M_M_NBXBRONTEGOON_01";
		case 1478983280:
			return "G_M_M_UNIBRONTEGOONS_01";
		case -1769295812:
			return "GarethBraithwaite";
		case 1020041649:
			return "GenStoryFemale";
		case -639059862:
			return "GenStoryMale";
		case -920985758:
			return "Leon";
		case -1154137714:
			return "GeraldBraithwaite";
		case 1225208808:
			return "HoseaMatthews";
		case 1912073755:
			return "JackMarston";
		case -631664452:
			return "JackMarston_Teen";
		case 4991732:
			return "Jamie";
		case 1843625996:
			return "JavierEscuella";
		case 1815090590:
			return "JimCalloway";
		case -446093729:
			return "Joe";
		case 95866989:
			return "JohnMarston";
		case 2100656433:
			return "CS_JOHNWEATHERS";
		case 1006468445:
			return "JosiahTrelawny";
		case -1707202053:
			return "Karen";
		case 358502875:
			return "MrsAdler";
		case 1939579094:
			return "Kieran";
		case -100461901:
			return "LeoStrauss";
		case 1304311224:
			return "LondonderrySon";
		case -1690877284:
			return "MaryBeth";
		case 1051047356:
			return "MaryLinton";
		case -566878875:
			return "MicahBell";
		case -346700962:
			return "MollyOshea";
		case -272634447:
			return "CS_MrLinton";
		case 984264800:
			return "MrPearson";
		case 1367851675:
			return "MrsLondonderry";
		case -2075588078:
			return "Mud2BigGuy";
		case 2115504616:
			return "ProfessorBell";
		case 1618031732:
			return "RevSwanson";
		case -265719023:
			return "CS_Samaritan";
		case -1483559144:
			return "StrDeputy_01";
		case -572941403:
			return "StrDeputy_02";
		case -2081966149:
		case 2012148102:
			return "StrSheriff_01";
		case 1695129705:
			return "SusanGrimshaw";
		case 1407740785:
			return "TavishGray";
		case 1231309423:
			return "TheodoreLevin";
		case 65010948:
			return "ThomasDown";
		case 1038525765:
			return "Tilly";
		case -969464097:
			return "Uncle";
		case 1057570823:
			return "G_M_M_UniCriminals_01";
		case 347599949:
			return "G_M_M_UNIDUSTER_01";
		case -1884146832:
			return "CS_VALSHERIFF";
		case 826385717:
			return "S_M_M_MARSHALLSRURAL_01";
		case -831368594:
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case -522739022:
			return "Sean";
		case -122790003:
			return "Lenny";
		case 1276534479:
			return "Hercule";
		case -781994133:
			return "CreoleCaptain";
		case -628794682:
			return "U_M_M_CREOLECAPTAIN_01";
		case 1999476738:
			return "RingMaster";
		case -1221341425:
			return "U_M_M_VALBARTENDER_01";
		case -439429058:
			return "A_M_M_EMRFARMHAND_01";
		case -1646366239:
			return "A_M_M_GriSurvivalist_01";
		case 1439158431:
			return "LillyMillet";
		case -1384606398:
			return "A_F_M_STRTOWNFOLK_01";
		case 1127589605:
			return "A_M_M_STRTOWNFOLK_01";
		case 413771941:
			return "S_M_M_STRLUMBERJACK_01";
		case -1990962020:
			return "G_M_M_UniCriminals_02";
		case -1818007055:
			return "G_M_M_UNICORNWALLGOONS_01";
		case 79156795:
			return "A_M_M_NBXUPPERCLASS_01";
		case -1039531072:
			return "A_F_M_NBXUPPERCLASS_01";
		case 525529657:
			return "A_M_M_VALFARMER_01";
		case -2087759666:
			return "A_M_M_VALTOWNFOLK_01";
		case -1789856687:
			return "A_M_M_VALTOWNFOLK_02";
		case -161027961:
			return "A_F_M_VALTOWNFOLK_01";
		case 518339740:
			return "U_M_M_NBXBARTENDER_01";
		case 2041494024:
			return "NBXExecuted";
		case -944019243:
			return "RHODEPUTY_01";
		case -949242502:
			return "RHDSHERIFF_01";
		case -1745321414:
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case 273671859:
			return "U_M_M_StrGenStoreOwner_01";
		case -1161832176:
			return "TomDickens";
		case -1632694866:
			return "DavidGeddes";
		case 1446935015:
			return "ANSEL_ATHERTON";
		case -1101883765:
			return "CS_Wrobel";
		case -50684386:
			return "COW";
		case 195700131:
			return "BULL";
		case 686051865:
			return "ALBERTCAKEESQUIRE";
		case 1767420034:
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case -1033903759:
			return "A_C_DOGCATAHOULACUR_01";
		case 1591685812:
			return "A_C_DOGRUFUS_01";
		case -896926592:
			return "A_C_DOGLION_01";
		case -695175124:
			return "Handler";
		case 1891548111:
			return "VALAUCTIONBOSS_01";
		case -1049237750:
			return "NbxReceptionist_01";
		case -1206299098:
			return "U_M_M_BiVForeman_01";
		case -532378284:
			return "U_M_M_RACFOREMAN_01";
		case -2075028835:
			return "CHAINPRISONER_01";
		case -211291960:
			return "CHAINPRISONER_02";
		case -692960126:
			return "U_M_M_ValPokerPlayer_01";
		case 60202542:
			return "U_M_M_ValPokerPlayer_02";
		case -1614719852:
			return "DUNCANGEDDES";
		case -167880668:
			return "ANGUSGEDDES";
		case 743219360:
			return "EvelynMiller";
		case -2086875988:
			return "SISTERCALDERON";
		case -46607261:
			return "EDGARROSS";
		case 54030454:
			return "U_M_M_GriSurvivalist_01";
		case -378814141:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case -140869950:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case 1726657594:
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case 1057932105:
			return "StationWorker";
		case 1294255258:
			return "LEVISIMON";
		case -384354290:
			return "S_M_M_GULFUSSARS_01";
		case 1772321403:
			return "A_C_DONKEY_01";
		case 223197487:
			return "S_M_M_ISPWORKER_01";
		case 355963118:
			return "S_M_M_ISPWORKER_02";
		case -1874017143:
			return "U_M_O_ValBartender_01";
		case 219322615:
			return "U_M_M_NBXBARTENDER_02";
		case -2014377075:
			return "CS_UNIDUSTERJAIL_01";
		case 977834008:
			return "A_M_M_RHDTOWNFOLK_01";
		case 2052768310:
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case -1332334928:
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case 482703333:
			return "BrotherDorkins";
		case 731029607:
			return "G_M_M_UniBraithwaites_01";
		case -1918128574:
			return "A_M_M_GAMHIGHSOCIETY_01";
		case 292812873:
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case -1772051411:
			return "EagleFlies";
		case -2046943672:
			return "CS_RAINSFALL";
		case 830712509:
			return "A_M_M_WapWarriors_01";
		case 264503396:
			return "A_M_Y_NBXSTREETKIDS_01";
		case -2044758506:
			return "U_M_M_BHT_SHACKESCAPE";
		case -1445135526:
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case 988668512:
			return "LemiuxAssistant";
		case -1608851079:
			return "p_keys01x";
		case 624882545:
			return "CS_BALLOONOPERATOR";
		case -1820002752:
			return "Worker1";
		case 1624257462:
			return "U_M_M_BHT_MINEFOREMAN";
		case 1453686794:
			return "A_M_M_NbxSlums_01";
		case -454661055:
			return "U_M_M_NBXPRIEST_01";
		case -1124266369:
			return "A_C_BEAR_01";
		case 960530301:
			return "MARSHALL_THURWELL";
		case 1347320453:
			return "CS_FAMOUSGUNSLINGER_02";
		case -290265603:
			return "cs_sd_streetkid_01";
		case 1861707396:
			return "cs_sd_streetkid_02";
		case 68512371:
			return "ObediahHinton";
		case 774211111:
			return "PoisonWellShaman";
		case 1923327795:
			return "A_M_M_EMRFARMHAND_01";
		case 722156226:
			return "u_m_m_bht_benedictallbright";
		case -1258801034:
			return "Jules";
		case -1466017978:
			return "MRDEVON";
		case 1101050871:
			return "MRWAYNE";
		case -1135378761:
			return "PAYTAH";
		case 1812458547:
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case -310853585:
			return "A_M_M_NBXDOCKWORKERS_01";
		case -1817144219:
			return "U_M_M_VALSHERIFF_01";
		case 1086659483:
			return "S_M_M_BANKCLERK_01";
		case 1112571710:
			return "U_M_M_NBXBRONTEASC_01";
		case -363708904:
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_1477(int iParam0)
{
	return iParam0 != 0;
}

int func_1478(var uParam0, bool bParam1)
{
	if (!does_entity_exist(bParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1479(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_1480(var uParam0, bool bParam1)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 65)
	{
		if (&uParam0->f_13[iVar12] == bParam1)
		{
			*uParam0->f_13[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_1481(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!does_entity_exist(&(uParam0->f_13[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1482(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1483(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1484(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1485(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1486(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1486(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1486(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1486(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1486(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1486(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1486(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*iParam5 == 1 || *iParam5 == 3)
	{
		if (iParam1 == 0)
		{
			if ((cParam3->f_9 == 7 || cParam3->f_9 == 8) || cParam3->f_9 == 9)
			{
				bVar0 = true;
			}
		}
		else if (iParam1 == 1 || iParam1 == 2)
		{
			if (cParam3->f_9 == 3 || cParam3->f_9 == 5)
			{
				bVar0 = true;
			}
		}
		if ((bVar0 && !uParam0->f_2503) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (func_1486(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1486(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1486(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1487(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1488(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_215((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1489(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_499(sParam0, 1);
}

bool func_1490(var uParam0)
{
	if (func_912(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_912(uParam0->f_1, 1))
	{
		func_882(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_876(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1491(var uParam0)
{
	if (func_912(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_912(uParam0->f_3, 1))
	{
		func_884(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_876(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_876(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1492(var uParam0)
{
	if (func_912(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_912(uParam0->f_1, 1))
	{
		func_886(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_876(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1493(var uParam0, int iParam1)
{
	if (func_912(uParam0->f_1, 2))
	{
		return true;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(iParam1, true, false))
	{
		return false;
	}
	if (!func_912(uParam0->f_1, 1))
	{
		func_893(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_876(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1494(var uParam0)
{
	if (func_912(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_912(uParam0->f_2, 1))
	{
		func_895(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_876(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1495(var uParam0)
{
	if (func_912(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_912(uParam0->f_3, 1))
	{
		func_897(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_876(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1496(var uParam0)
{
	if (func_912(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_912(uParam0->f_1, 1))
	{
		func_899(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_876(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1497(var uParam0)
{
	if (func_912(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_912(uParam0->f_1, 1))
	{
		func_901(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_876(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1498(var uParam0)
{
	if (func_912(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_912(uParam0->f_2, 1))
	{
		func_903(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_876(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1499(var uParam0)
{
	if (func_912(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_912(uParam0->f_1, 1))
	{
		func_905(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_876(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1500(int iParam0)
{
	if (func_518(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1501(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_518(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_1062(iParam0, 2, 1))
			{
				func_1060(iParam0, 2, 1);
			}
			if (func_712(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_1058(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_523(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_455(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_455(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1972(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_1058(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1973(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_1058(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1973(iParam0, 1);
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
			if (!func_1062(iParam0, 44, 0))
			{
				func_1058(iParam0, 44, 0);
			}
			if (func_1974(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1973(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_1060(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1064(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1975(iParam0, 0, 0, 1);
			}
			func_1060(iParam0, 33, 1);
			func_1060(iParam0, 34, 1);
			func_1060(iParam0, 29, 1);
			if (!func_395(vVar0) && bParam7)
			{
				func_1973(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1973(iParam0, 4);
			}
			else
			{
				func_1973(iParam0, 5);
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
						func_1972(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_923(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1973(iParam0, 4);
			}
			else
			{
				func_1973(iParam0, 5);
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
				if (func_1976(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1977(iParam0, iParam13, 0);
						func_1978(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_1062(iParam0, 25, 0))
						{
							func_1060(iParam0, 25, 0);
						}
						func_1058(iParam0, 66, 0);
						func_1973(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1973(iParam0, 5);
				}
				func_1058(iParam0, 28, 1);
			}
			else
			{
				func_1973(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1973(iParam0, 6);
			}
			break;
		case 6:
			if (func_455(Global_1360165[iParam0], 0))
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
					func_1979(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1980(Global_1360165[iParam0], 1);
				}
			}
			func_1973(iParam0, 7);
		case 7:
			func_1064(iParam0, bParam9, bParam15, 0);
			func_1055(iParam0, 4, bParam11);
			func_1059(iParam0);
			if (bParam20)
			{
				if (func_1981(Global_1360165[iParam0]))
				{
				}
			}
			func_1982(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1973(iParam0, 0);
			func_713(iParam0, 16, 1);
			func_1060(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1502(char[4] cParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1983(bParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1984(bParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1985(cParam0, bParam1, iParam2, func_322(iParam2, 0));
	func_1012(cParam0, bParam1, 512);
	if (bParam5)
	{
		func_1012(cParam0, bParam1, 128);
	}
	else
	{
		func_1011(cParam0, bParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1503(int iParam0)
{
	if (!func_518(iParam0))
	{
		return;
	}
	bVar0 = func_554(iParam0);
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(bVar0, 0, 0f);
}

void func_1504(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1505(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1514(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1506(int iParam0)
{
	iParam0 = func_264(iParam0);
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
	func_1986(&Var0);
	func_1987(iParam0, Var0);
	func_1988(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1989(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1990(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1991(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1992(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1993(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1994(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1995(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1996(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1507(vector3 vParam0)
{
	return func_1997(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1508(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_532(iParam0))
	{
		return false;
	}
	iVar0 = func_213(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1509(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_526(iParam0);
	func_526(iParam0);
	func_1998(iParam0, iParam1);
	func_1999(iParam0, iParam1);
	func_2000(iParam0, iParam1);
	iVar1 = func_213(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_2001(iVar1);
		}
		if (iParam0 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = _0x227b06324234fb09(iVar0, iVar1);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar1)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar1)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	iVar3 = func_213(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_2001(iVar3);
		}
		if (iParam1 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = _0x227b06324234fb09(iVar0, iVar3);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar3)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar3)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	func_266();
}

bool func_1510()
{
	iVar0 = func_1447();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1511()
{
	bVar0 = func_1447();
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(bVar0))
	{
		set_entity_as_mission_entity(bVar0, true, true);
	}
	delete_object(&bVar0);
	func_2002(0);
}

int func_1512(int iParam0)
{
	iParam0 = func_264(iParam0);
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

int func_1513(int iParam0)
{
	iParam0 = func_264(iParam0);
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

int func_1514(int iParam0)
{
	iParam0 = func_264(iParam0);
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

void func_1515(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1772(&iVar0, &iVar1, &iVar2);
	func_1773(iParam0, iVar0);
	func_1774(iParam0, iVar1);
	func_1775(iParam0, iVar2);
	func_2003(iParam0, 1);
	func_2004(iParam0, 1);
}

void func_1516(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1548(iParam0, 1);
}

void func_1517(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_264(iParam0);
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

bool func_1518(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1073(iParam0, 1);
}

struct<2> func_1519(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_2005(iParam0, &uVar2))
	{
	}
	if (!func_2006(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1520()
{
	if (func_2007(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_2007(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_2007(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_2007(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_2007(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_2007(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1521(bool bParam0, var uParam1, var uParam2, int iParam3)
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
	func_2008(bParam0);
	func_2009(bParam0, uParam1);
	func_2010(bParam0);
	func_2011(bParam0, uParam2);
	if (iParam3 != 0)
	{
		func_2012(bParam0, iParam3, 0);
	}
	_update_ped_variation(bParam0, false, true, true, true, true);
}

void func_1522(int iParam0)
{
	iParam0 = func_264(iParam0);
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

bool func_1523(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1524(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

bool func_1525(int iParam0)
{
	return iParam0;
}

bool func_1526(bool bParam0)
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

int func_1527(var uParam0)
{
	return *uParam0;
}

bool func_1528(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_2013(iParam0) };
	if (func_1888(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_924(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_2014(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1529(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1530(var uParam0)
{
	destroy_cam(uParam0->f_2, false);
	uParam0->f_2 = create_cam("DEFAULT_SPLINE_CAMERA", false);
	iVar0 = 0;
	iVar1 = get_clock_hours();
	if (iVar1 > uParam0->f_6)
	{
		iVar0 = (iVar0 + (iVar1 - uParam0->f_6));
	}
	else
	{
		iVar0 = (iVar0 + (uParam0->f_6 - iVar1));
	}
	iVar0 *= 1000;
	iVar0 += 3000;
	iVar0 = (iVar0 / 2);
	add_cam_spline_node(uParam0->f_2, uParam0->f_8, uParam0->f_8.f_3, iVar0, 3, 2);
	add_cam_spline_node(uParam0->f_2, uParam0->f_8.f_6, uParam0->f_8.f_9, iVar0, 3, 2);
	set_cam_fov(uParam0->f_2, uParam0->f_8.f_12);
	set_cam_active(uParam0->f_2, true);
}

bool func_1531(var uParam0)
{
	switch (func_2015(uParam0))
	{
		case 0:
			uParam0->f_24 = func_283();
			iVar4 = func_283();
			func_1255(&iVar4, uParam0->f_6);
			func_1256(&iVar4, 0);
			func_1257(&iVar4, 0);
			if (func_1092(uParam0->f_24, iVar4, 1))
			{
				func_332(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_2016(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_2017(uParam0, 1);
			break;
		case 1:
			fVar5 = func_2018(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_2017(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_2018(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_332(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_700(iVar4), func_701(iVar4), func_702(iVar4));
				func_2019(get_clock_hours());
				func_2020(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1532(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_2021(2000);
	Global_16 = 0;
	func_2022();
	set_entity_invincible(Global_35, func_2023(*iParam0, 8));
	if (!func_2023(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_2023(*iParam0, 2) || func_2023(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_2023(*iParam0, 16))
	{
		func_233(1);
	}
	if (func_2023(*iParam0, 32))
	{
		func_631(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_2024(-1623728698, 0);
	}
	func_852(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1533(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = uParam0;
	uVar15 = _0x2024f4f333095fb1(&Var0, &Var13, iParam5);
	return uVar15;
}

struct<4> func_1534(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1535(var uParam0)
{
	return *uParam0;
}

bool func_1536(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1537(uParam0, 32768))
	{
		return true;
	}
	if (func_1910(uParam0) >= 3)
	{
		uParam0->f_2286 = func_992(get_player_index(), 0, 0, 1);
		uParam0->f_2287 = _is_ped_getting_into_a_mount_seat(Global_35, true);
		uParam0->f_2289 = is_ped_in_any_vehicle(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!is_entity_dead(Global_1935630->f_40))
			{
				uParam0->f_2288 = Global_1935630->f_40;
			}
			else
			{
				uParam0->f_2288 = get_mount(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = get_vehicle_ped_is_in(Global_35, true);
		}
		uParam0->f_2292 = get_interior_from_entity(Global_35);
		func_2025(uParam0);
	}
	if (func_1910(uParam0) < 10)
	{
		if (func_1910(uParam0) == 3)
		{
			func_2026(uParam0, iParam5, bParam6);
		}
		else if (func_1910(uParam0) > 3)
		{
			if (func_1535(uParam0) == 0)
			{
				if (!func_1537(uParam0, 524288))
				{
					func_2027(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_2028(uParam0, 4);
					func_2029(uParam0, 10);
					func_2030(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1537(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_2031(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1584(0);
			func_1292();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_2031(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_2032(uParam0, uParam0->f_2074))
				{
					if (func_1882(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_2033(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_2033(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_2034(uParam0);
			}
		}
	}
	bVar0 = func_2035(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1537(uParam0, 268435456) && bVar1) && !func_1537(uParam0, 262144))
		{
			bVar3 = is_valid_interior(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = get_interior_at_coords(uParam0->f_1406[uParam0->f_2074]->f_1);
				if ((is_valid_interior(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				func_751(uParam0, 131072);
				func_751(uParam0, 268435456);
			}
		}
		if (func_2036(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_2031(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1535(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1910(uParam0) == 3 || func_1537(uParam0, 131072))
	{
		func_2037(uParam0);
		if (!func_1537(uParam0, 262144))
		{
			if ((bVar0 && func_1537(uParam0, 65536)) || func_1537(uParam0, 131072))
			{
				func_751(uParam0, 32768);
				func_2028(uParam0, 4);
				func_2029(uParam0, 10);
				uParam0->f_2159 = 1;
				func_2030(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1910(uParam0) >= 3)
	{
		func_2038(uParam0, iParam5);
		func_2039(uParam0);
		if (!func_2040(uParam0, 1))
		{
			func_2041(uParam0);
		}
		func_2042(uParam0);
	}
	switch (func_1910(uParam0))
	{
		case 0:
			func_2043(uParam0, Param1, iParam5);
			break;
		case 1:
			func_2044(uParam0);
			break;
		case 2:
			func_2045(uParam0);
			break;
		case 3:
			if (func_1883(uParam0))
			{
				func_2046(2);
				func_2033(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_218(&(uParam0->f_2262));
				func_2028(uParam0, 1);
				func_2047();
				func_2029(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1537(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1910(uParam0) == 5)
			{
				if (func_2048(uParam0))
				{
					func_2028(uParam0, 2);
					func_2029(uParam0, 6);
				}
			}
			if (func_1910(uParam0) == 6)
			{
				if (func_2049(uParam0))
				{
					func_2028(uParam0, 3);
					func_2029(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1394(&(uParam0->f_2262)) >= 15f)
			{
				if (func_2050(uParam0, iParam5))
				{
					if (func_2051(uParam0))
					{
						uParam0->f_2075 = func_2052(uParam0);
						func_218(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_2028(uParam0, 6);
						func_2029(uParam0, 9);
					}
					else
					{
						func_2028(uParam0, 4);
						func_2029(uParam0, 10);
						func_2030(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_2050(uParam0, iParam5))
			{
				func_2030(uParam0, iParam5);
				func_2029(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1537(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1538(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1539(var uParam0, var uParam1)
{
	if (func_1537(uParam1, 32768))
	{
		Var0 = { func_1892(uParam0) };
		func_1914(uParam0, &Var0);
		if (func_1537(uParam1, 131072))
		{
			func_752(uParam0, 268435456);
			if (func_395(uParam0->f_865))
			{
				uParam0->f_865 = { func_2053(uParam1, uParam1->f_2074) };
			}
			if (func_395(uParam0->f_862))
			{
				uParam0->f_862 = { func_2053(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1537(uParam1, 268435456))
		{
			func_2054(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1537(uParam1, 524288))
	{
		func_752(uParam0, 67108864);
		func_1538(uParam1, 524288);
	}
	if (func_2036(uParam1, 128))
	{
		func_752(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_2031(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_2054(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1540(char[4] cParam0)
{
	if (func_841(&(cParam0->f_7375), 128) || func_841(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_2055(&(cParam0->f_7375));
		func_1460(&(cParam0->f_7375), 128, 1);
		func_1460(&(cParam0->f_7375), 256, 1);
		func_1460(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1541(char[4] cParam0)
{
	func_2056(&(cParam0->f_7375));
}

bool func_1542(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_2057(uParam4, &cParam0);
	if (func_841(uParam4, 2) && !func_841(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_2058(uParam4) != 1)
	{
		func_2059(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_2058(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_2060(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_2061(uParam4, 4);
					return false;
				}
				else
				{
					if (func_2062(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_2063(cParam5);
				}
				func_2061(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(cParam5, func_33(cParam5), 262144))
				{
					if (!func_841(uParam4, 2097152))
					{
						func_1859(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(cParam5, 8) || func_841(uParam4, 134217728)))
				{
				}
				else
				{
					func_1894(uParam4);
				}
				func_218(&(uParam4->f_1));
				func_2061(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_2064(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_932(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2061(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1826(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_2061(uParam4, 4);
					}
					else if (!func_395(func_2065(uParam4)) && !func_1338(Global_35, func_2065(uParam4), 100f, 1, 1))
					{
						func_1445(1);
						start_player_teleport(get_player_index(), func_2065(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_932(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2061(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_277(cParam5) != 0 || (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_2060(uParam4, &cParam0, cParam5);
						func_2061(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_932(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_2061(uParam4, 4);
			}
			break;
		case 3:
			func_391(uParam4);
			if (func_2062(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_2063(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_841(uParam4, 512)))
			{
				if (!func_841(uParam4, 1024) && func_2066(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_841(uParam4, 512))
				{
					func_218(&(uParam4->f_1));
					func_752(uParam4, 512);
					func_2061(uParam4, 4);
				}
				else if (func_841(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_2059(uParam4);
			}
			if (func_841(uParam4, 524288))
			{
				if (IntToFloat(absi((func_2067(uParam4) - func_2068(uParam4)))) <= 2f)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					if (_0xef324e9550a394d5(uParam4->f_804))
					{
						_0x1b70811d3bf75db9(1, 1);
					}
				}
				if (func_2069(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_2068(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_2070(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_2071(uParam4);
				return true;
			}
			else
			{
				if (func_841(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_218(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_752(uParam4, 512);
						func_1460(uParam4, 67108864, 1);
						func_2061(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_841(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_2068(uParam4) <= 5000) && func_2068(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_841(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1532(&(uParam4->f_861), 0);
					func_752(uParam4, 536870912);
				}
				if (func_2068(uParam4) >= 5000 && func_2068(uParam4) <= (func_2067(uParam4) - 5000))
				{
					func_2072();
				}
			}
			break;
		case 6:
			if (func_2070(uParam4))
			{
				func_2071(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_841(uParam4, 524288))
			{
				_0x1b70811d3bf75db9(1, 1);
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1000);
					if (_is_anim_scene_paused(uParam4->f_804))
					{
						func_752(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					if (!_is_anim_scene_paused(uParam4->f_804))
					{
						set_anim_scene_paused(uParam4->f_804, true);
						if (_0xc17f69e1418cd11f(9) != 0)
						{
							_0xdd1232b332cbb9e7(9, 1, 0);
						}
						return false;
					}
					else if (_0x4cdffe3189ebdbd0(uParam4->f_804))
					{
						return false;
					}
				}
				iVar0 = 1;
				if (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3)
				{
					if (func_2073(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2061(uParam4, 3);
					}
					else if (func_932(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2061(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_2062(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2061(uParam4, 3);
					}
					else if (func_932(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2061(uParam4, 3);
					}
				}
				if (func_2058(uParam4) == 3)
				{
					if (func_841(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_2061(uParam4, 4);
			break;
	}
	return false;
}

void func_1543(char[4] cParam0)
{
	if (!is_itemset_valid(Global_43616))
	{
		return;
	}
	iVar0 = (get_itemset_size(Global_43616) - 1);
	while (iVar0 >= 0)
	{
		bVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
		if (does_entity_exist(bVar1))
		{
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_2074()))
			{
				if (!_0x88ad6cc10d8d35b2(bVar1))
				{
					set_entity_as_mission_entity(bVar1, true, true);
				}
				delete_entity(&bVar1);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

bool func_1544(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_267(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_2075(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_268(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_2076(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1545(int iParam0)
{
	MemCopy(&cVar0, {func_267(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1546(int iParam0)
{
	Var0 = { func_1545(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1547(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_2077(iVar0));
		iVar0++;
	}
}

void func_1548(int iParam0, int iParam1)
{
	iParam0 = func_264(iParam0);
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

void func_1549(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	vVar0 = { func_2078(iParam0, iParam1) };
	vVar3 = { func_2078(iParam2, iParam3) };
	draw_rect(vVar0.x, vVar0.y, vVar3.x, vVar3.y, iParam4, iParam5, iParam6, iParam7, false, true);
}

struct<4> func_1550(char[4] cParam0, int iParam1)
{
	iVar4 = func_33(cParam0);
	if (iVar4 == iLocal_145)
	{
		Var0 = { func_221(0, 4) };
	}
	else if (iVar4 == iLocal_146)
	{
		Var0 = { func_221(0, 0) };
	}
	else if (iVar4 == iLocal_147)
	{
		Var0 = { func_221(15, 0) };
	}
	else if (iVar4 == iLocal_148)
	{
		Var0 = { func_221(7, 6) };
	}
	else if (iVar4 == iLocal_149)
	{
		Var0 = { func_221(11, 3) };
	}
	else if (iVar4 == iLocal_150)
	{
		Var0 = { func_221(13, 2) };
	}
	else if (iVar4 == iLocal_151)
	{
		Var0 = { func_221(1, 0) };
	}
	else if (iVar4 == iLocal_152)
	{
		Var0 = { func_221(2, 0) };
	}
	else if (iVar4 == iLocal_153)
	{
		Var0 = { func_221(3, 0) };
	}
	else if (iVar4 == iLocal_154)
	{
		Var0 = { func_221(4, 1) };
	}
	else if (iVar4 == iLocal_155)
	{
		Var0 = { func_221(5, 1) };
	}
	else if (iVar4 == iLocal_156)
	{
		Var0 = { func_221(14, 1) };
	}
	else if (iVar4 == iLocal_157)
	{
		Var0 = { func_221(12, 2) };
	}
	else if (iVar4 == iLocal_158)
	{
		Var0 = { func_221(6, 0) };
	}
	else if (iVar4 == iLocal_159)
	{
		Var0 = { func_221(6, 0) };
	}
	if ((((((((iVar4 == iLocal_146 || iVar4 == iLocal_147) || iVar4 == iLocal_151) || iVar4 == iLocal_152) || iVar4 == iLocal_153) || iVar4 == iLocal_154) || iVar4 == iLocal_155) || iVar4 == iLocal_157) && iParam1 == 1)
	{
		func_1376(Global_35, iVar535, -1);
	}
	else
	{
		func_2079(Global_35);
		func_837(Global_35, Var0, 2, 1073741824);
	}
	return Var0;
}

bool func_1551(char[4] cParam0)
{
	if (!func_390(iVar581, 32768))
	{
		if (func_33(cParam0) < iLocal_150 || func_33(cParam0) >= iLocal_156)
		{
			_request_propset(iVar728);
		}
	}
	if ((func_33(cParam0) >= iLocal_150 && func_33(cParam0) <= iLocal_155) || _has_propset_loaded(iVar728))
	{
		return true;
	}
	return false;
}

void func_1552(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10, bool bParam11, int iParam12)
{
	if (!_does_volume_exist(*iParam0))
	{
		if (bParam11)
		{
			if (iParam12 == 1)
			{
				*iParam0 = _0x0eb78c2b156635b1(665633627, vParam1, vParam4, vParam7);
				_0x5b23dff8e0948bb2(*iParam0, 1);
			}
			else
			{
				func_1553(iParam0, vParam1, vParam4, vParam7, sParam10);
			}
		}
		else if (iParam12 == 1)
		{
			*iParam0 = _0x0eb78c2b156635b1(-1612834106, vParam1, vParam4, vParam7);
			_0x5b23dff8e0948bb2(*iParam0, 1);
		}
		else
		{
			func_2080(iParam0, vParam1, vParam4, vParam7, sParam10);
		}
	}
}

void func_1553(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_1554()
{
	if (iVar653 == 1)
	{
		return;
	}
	func_1353(&iLocal_541);
	clear_gps_custom_route();
	clear_gps_multi_route();
	iLocal_541 = func_1354(408396114, *vLocal_668[1], 1109393408, 1);
	start_gps_multi_route(76603059, true, false);
	add_point_to_gps_multi_route(func_385(0, 8), false);
	add_point_to_gps_multi_route(func_385(7, 3), false);
	set_gps_multi_route_render(true);
	if (does_blip_exist(iVar539))
	{
		set_blip_name_from_text_file(iVar539, "MAR1_STRW_NAME");
	}
	iLocal_655 = 1;
}

bool func_1555(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_2081(cParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_1556()
{
	if (!_does_propset_exist(iVar804))
	{
		return;
	}
	iVar0 = create_itemset(true);
	iVar2 = _get_entities_from_propset(iVar804, iVar0, 0, false, true);
	if (iVar2 <= 0)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar1 = get_indexed_item_in_itemset(iVar3, iVar0);
		iVar4 = _get_entity_from_item(iVar1);
		if (does_entity_exist(iVar4))
		{
			set_entity_no_collision_entity(iVar4, &(iLocal_162[1]), false);
		}
		iVar3++;
	}
}

bool func_1557(char[4] cParam0)
{
	iVar4 = func_33(cParam0);
	if (iVar4 == iLocal_145)
	{
		Var0 = { func_221(0, 4) };
	}
	else if (iVar4 == iLocal_146)
	{
		Var0 = { func_221(0, 0) };
	}
	else if (iVar4 == iLocal_147)
	{
		Var0 = { func_221(15, 0) };
	}
	else if (iVar4 == iLocal_148)
	{
		Var0 = { func_221(7, 7) };
	}
	else if (iVar4 == iLocal_149)
	{
		Var0 = { func_221(11, 0) };
	}
	else if ((iVar4 == iLocal_150 || iVar4 == iLocal_151) || iVar4 == iLocal_152)
	{
		Var0 = { func_221(13, 0) };
	}
	if (!func_915(cParam0, 13, iLocal_162[0], 0, Var0, Var0.f_1, Var0.f_2, Var0.f_3, 1, -1341683964, 1, 0, 1, 0))
	{
		return false;
	}
	if (!func_455(&(iLocal_162[0]), iVar958))
	{
		return false;
	}
	func_1906(cParam0, iLocal_162[0], -1538724068, Local_176[0], 1, 0, -1);
	if (!func_2082(13, 536870912))
	{
		func_450(13, 536870912, 1);
	}
	func_1361(iVar4 <= iLocal_147);
	if (iVar4 != iLocal_146)
	{
		func_2079(&(iLocal_162[0]));
		func_837(&(iLocal_162[0]), Var0, 2, 1073741824);
	}
	if (func_33(cParam0) >= iLocal_150)
	{
		func_1567(13, 1);
		func_1011(cParam0, &(iLocal_162[0]), 128);
	}
	if (func_33(cParam0) == iLocal_146 || func_33(cParam0) == iLocal_147)
	{
		func_1315(Local_176[0], 91, 1);
		func_1376(&(iLocal_162[0]), iVar536, 0);
	}
	set_ped_can_use_auto_conversation_lookat(&(iLocal_162[0]), true);
	return true;
}

bool func_1558(char[4] cParam0)
{
	iVar4 = func_33(cParam0);
	if (iVar4 == iLocal_145)
	{
		Var0 = { func_221(0, 4) };
	}
	else if (iVar4 == iLocal_146)
	{
		Var0 = { func_221(0, 0) };
	}
	else if (iVar4 == iLocal_147)
	{
		Var0 = { func_221(15, 0) };
	}
	else if (iVar4 == iLocal_148)
	{
		Var0 = { func_221(7, 8) };
	}
	else if (iVar4 == iLocal_149)
	{
		Var0 = { func_221(11, 1) };
	}
	else if ((iVar4 == iLocal_150 || iVar4 == iLocal_151) || iVar4 == iLocal_152)
	{
		Var0 = { func_221(13, 1) };
	}
	if (!func_915(cParam0, 14, iLocal_162[1], 0, Var0, Var0.f_1, Var0.f_2, Var0.f_3, 1, 0, 1, 0, 1, 0))
	{
		return false;
	}
	func_1906(cParam0, iLocal_162[1], -1538724068, Local_176[1], 1, 0, -1);
	if (iVar4 != iLocal_146)
	{
		func_2079(&(iLocal_162[1]));
		func_837(&(iLocal_162[1]), Var0, 2, 1073741824);
	}
	if (func_33(cParam0) >= iLocal_150)
	{
		func_1567(14, 1);
		func_1011(cParam0, &(iLocal_162[1]), 128);
	}
	set_ped_can_use_auto_conversation_lookat(&(iLocal_162[1]), true);
	if (func_33(cParam0) == iLocal_146 || func_33(cParam0) == iLocal_147)
	{
		func_1315(Local_176[1], 91, 1);
		func_2083(iLocal_162[1], &uLocal_539);
	}
	return true;
}

bool func_1559(char[4] cParam0)
{
	return func_2066(&(cParam0->f_7375), 1);
}

bool func_1560(char[4] cParam0)
{
	iVar4 = func_33(cParam0);
	if (is_player_teleport_active())
	{
		return false;
	}
	Var0 = { func_1550(cParam0, 1) };
	set_ped_config_flag(Global_35, 360, true);
	func_70(0);
	set_ped_can_use_auto_conversation_lookat(Global_35, true);
	if (iVar4 <= iLocal_147)
	{
		func_178(100f);
		func_119(0, 0);
		func_1444(-1);
		func_1471(10);
	}
	func_145(cParam0, Global_35, "JOHN", 0);
	func_2084();
	if (iVar4 == iLocal_159)
	{
		func_1437(Global_35, 73, 1, 1, 0);
	}
	else
	{
		func_1437(Global_35, 61, 1, 1, 0);
	}
	return true;
}

void func_1561()
{
	if (!func_455(&(uLocal_170[0]), iVar959))
	{
		return;
	}
	func_837(&(uLocal_170[0]), func_221(16, 20), 2, 1073741824);
	_0x9587913b9e772d29(&(uLocal_170[0]), 0);
	set_blocking_of_non_temporary_events(&(uLocal_170[0]), true);
	set_ped_config_flag(&(uLocal_170[0]), 336, true);
	_0xa762c9d6cf165e0d(&(uLocal_170[0]), "OverloadMostInjuredBodyPart", "LeftLeg", -1);
	set_entity_heading(&(uLocal_170[0]), func_2085(iVar537, &(uLocal_170[0]), 1));
	_0x18ff3110cf47115d(&(uLocal_170[0]), 2, 0);
	task_carriable(&(uLocal_170[0]), -421224518, 0, 0, 0);
}

int func_1562(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (is_entity_dead(*uParam0))
	{
		return 0;
	}
	if (!is_vehicle_driveable(*uParam1, false, false))
	{
		return 0;
	}
	if (get_ped_in_vehicle_seat(*uParam1, iParam2) != *uParam0)
	{
		if (!is_vehicle_seat_free(*uParam1, iParam2))
		{
			if (iParam3 && func_2086(*uParam1))
			{
				iParam2 = func_2087(*uParam1);
			}
			else
			{
				return 0;
			}
		}
		if (is_ped_on_mount(*uParam0))
		{
			_remove_ped_from_mount(*uParam0, true, false);
		}
		set_ped_into_vehicle(*uParam0, *uParam1, iParam2);
	}
	return 1;
}

void func_1563(var uParam0, bool bParam1)
{
	if (!func_455(*uParam0, iVar957))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (29 == iVar0)
		{
		}
		else
		{
			_0x67e21acc5c0c970c(*uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_1564(int iParam0, int iParam1)
{
	func_1329(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

void func_1565(int iParam0, float fParam1, int iParam2)
{
	func_1328(iParam0, 0, 0);
	if (func_1853(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam1, iParam2);
	}
}

void func_1566(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	fVar0 = 1f;
	switch (iParam0)
	{
		case -1871534317:
		case 1140525470:
			fVar0 = 0f;
			break;
		case -1415276238:
		case 1823606944:
			fVar0 = 1.5f;
			break;
		case -530524:
		case 898879241:
			fVar0 = 2f;
			break;
		case -1115154469:
			fVar0 = 3f;
			break;
		case -668482597:
		case 147004056:
			break;
	}
	force_ped_motion_state(Global_35, iParam0, bParam2, iParam3, false);
	if (bParam4)
	{
		simulate_player_input_gait(player_id(), fVar0, iParam1, get_entity_heading(Global_35), bParam6, bParam7);
	}
	else
	{
		simulate_player_input_gait(player_id(), fVar0, iParam1, fParam5, bParam6, bParam7);
	}
}

void func_1567(int iParam0, bool bParam1)
{
	if (!func_1056(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1057(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_1055(iParam0, 16, 0);
		}
	}
	func_1055(iParam0, 1, bParam1);
}

void func_1568(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_2088(iParam0, iParam1, bParam2, fParam3);
}

void func_1569(float fParam0, float fParam1, float fParam2, float fParam3)
{
	_0xf5ffb08976911b50(fParam0, fParam1, fParam2, fParam3);
	Global_1894899->f_186 = 1;
}

bool func_1570(char[4] cParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_390(iVar576, 262144))
	{
		return true;
	}
	if (func_832(*uParam1))
	{
		return false;
	}
	if (!func_390(iVar576, 65536))
	{
		if (iParam5 == 0)
		{
			_0xd80faf919a2e56ea(*uParam1, uVar721);
		}
		else
		{
			_0xd80faf919a2e56ea(*uParam1, uVar722);
		}
		func_1441(&uLocal_584, 65536);
	}
	if (iVar797 == 0)
	{
		if (_0x53784cea0159439b(*uParam1))
		{
			iLocal_805 = _0xce2acd6f602803e5(*uParam1);
		}
		if (iVar797 == 0)
		{
			return false;
		}
	}
	if (!_0xf42db680a8b2a4d9(iVar797))
	{
		return false;
	}
	set_force_object_this_frame(get_entity_coords(*uParam1, true, false), 10f);
	iLocal_800 = create_itemset(false);
	iVar0 = _get_entities_from_propset(iVar797, iVar792, 0, true, false);
	if (iVar0 <= 0)
	{
	}
	if (!is_itemset_valid(iVar792))
	{
		return false;
	}
	if (func_2089(iLocal_144) <= 0)
	{
		iParam2 = 1;
	}
	iVar4 = iVar0;
	iVar1 = 0;
	while (iVar1 <= (iVar4 - 1))
	{
		if (iVar1 > 15)
		{
		}
		else
		{
			iVar2 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar1, iVar792));
			if (!does_entity_exist(iVar2))
			{
			}
			else
			{
				_0x18ff3110cf47115d(iVar2, 2, 0);
				_0x7e3f546acfe6c8d9(iVar2);
				_0x67bfced22909834d(iVar2);
				iVar3 = get_entity_model(iVar2);
				if (iVar3 == -1646753329)
				{
					if (!does_entity_exist(&(iLocal_485[8])))
					{
						iLocal_485[8] = iVar2;
					}
					else if (!does_entity_exist(&(iLocal_485[9])))
					{
						iLocal_485[9] = iVar2;
					}
				}
				else if (iVar3 == -1971689092)
				{
					if (!does_entity_exist(&(iLocal_485[3])))
					{
						iLocal_485[3] = iVar2;
					}
					else if (!does_entity_exist(&(iLocal_485[4])))
					{
						iLocal_485[4] = iVar2;
					}
				}
				else if (iVar3 == -2067867899)
				{
					if (!does_entity_exist(&(iLocal_485[0])))
					{
						iLocal_485[0] = iVar2;
					}
					else if (!does_entity_exist(&(iLocal_485[1])))
					{
						iLocal_485[1] = iVar2;
					}
				}
				else if (iVar3 == -474340954)
				{
					if (!does_entity_exist(&(iLocal_485[2])))
					{
						iLocal_485[2] = iVar2;
					}
				}
				else if (iVar3 == -689331657 || iVar3 == -1984110241)
				{
					if (!does_entity_exist(&(iLocal_485[5])))
					{
						iLocal_485[5] = iVar2;
					}
				}
				else if (iVar3 == 171990277)
				{
					if (!does_entity_exist(&(iLocal_485[6])))
					{
						iLocal_485[6] = iVar2;
					}
				}
				else if (iVar3 == 1827661866)
				{
					if (!does_entity_exist(&(iLocal_485[7])))
					{
						iLocal_485[7] = iVar2;
					}
				}
				else if (iVar3 == 279593638)
				{
					if (!does_entity_exist(&(iLocal_485[10])))
					{
						iLocal_485[10] = iVar2;
					}
					else if (!does_entity_exist(&(iLocal_485[11])))
					{
						iLocal_485[11] = iVar2;
					}
					else if (!does_entity_exist(&(iLocal_485[12])))
					{
						iLocal_485[12] = iVar2;
					}
				}
				else if (iVar3 == 1366354941)
				{
					if (!does_entity_exist(&(iLocal_485[13])))
					{
						iLocal_485[13] = iVar2;
					}
					else if (!does_entity_exist(&(iLocal_485[14])))
					{
						iLocal_485[14] = iVar2;
					}
				}
			}
			iVar1++;
		}
	}
	if (iParam5 == 0)
	{
		activate_physics(*uParam1);
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (!does_entity_exist(&(iLocal_485[iVar1])))
			{
			}
			else if (get_entity_model(&(iLocal_485[iVar1])) == 279593638)
			{
				activate_physics(&(iLocal_485[iVar1]));
			}
			iVar1++;
		}
	}
	func_1441(&uLocal_584, 262144);
	func_461(&uLocal_609);
	return false;
}

void func_1571(int iParam0)
{
	Global_40.f_9.f_21 = (Global_40.f_9.f_21 - (Global_40.f_9.f_21 && iParam0));
}

void func_1572()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

bool func_1573(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_2090(uParam0, iParam3, iParam2) && !func_681(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_1182(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_1732(1108822547);
		}
		else
		{
			func_2091(1108822547);
		}
	}
	func_1735(uParam0, 0, 0);
	func_1575(iParam5);
	return true;
}

void func_1574(int iParam0, int iParam1)
{
	func_2092(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1575(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_1576(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

float func_1577(var uParam0)
{
	return uParam0->f_24;
}

void func_1578(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_1579(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1441(uParam0, 1);
	}
	else
	{
		func_1662(uParam0, 1);
	}
}

void func_1580(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

void func_1581(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_1582(char[4] cParam0)
{
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar0 = iVar1;
		if (&iLocal_128[iVar0] == 1)
		{
		}
		else
		{
			func_2093(cParam0, iVar0);
		}
		iVar1++;
	}
}

void func_1583(char[4] cParam0)
{
	if (func_992(player_id(), func_982(cParam0), 0, 1) || iVar959 == 1)
	{
		if (iVar959 == 0)
		{
		}
		if (func_33(cParam0) < iLocal_148)
		{
			if (!func_26(&uLocal_597) && func_1358(cParam0, "MAR1_LAW", 0, 0, 0))
			{
				func_27(&uLocal_597, 0);
			}
		}
		else
		{
			func_27(&uLocal_597, 0);
		}
	}
	else
	{
		func_461(&uLocal_597);
	}
	if ((((func_26(&uLocal_597) && (func_992(player_id(), func_982(cParam0), 0, 1) || iVar959 == 1)) && func_1343(&uLocal_597, func_1427(((func_33(cParam0) < iLocal_148 || func_33(cParam0) >= iLocal_155) && !func_982(cParam0)), 2f, 0f))) && !func_1347("MAR1_LAW")) && !func_982(cParam0))
	{
		func_1363(cParam0, "MAR1_FAIL_LAW", "", 1, 0);
	}
}

void func_1584(bool bParam0)
{
	if (bParam0)
	{
		func_1410(4);
	}
	func_1410(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_1585(char[4] cParam0)
{
}

void func_1586(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 <= iLocal_150)
	{
		if (func_2094(16, 0, 0, 1))
		{
			_pause_clock_this_frame(true);
			return;
		}
	}
	else if (iVar0 <= iLocal_155)
	{
		if (func_2094(17, 30, 0, 1))
		{
			_pause_clock_this_frame(true);
			return;
		}
	}
	else if (iVar0 <= iLocal_158)
	{
		if (func_2094(19, 0, 0, 1))
		{
			_pause_clock_this_frame(true);
			return;
		}
	}
}

void func_1587(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (func_1419(cParam0, 9) && !chal_mission_is_goal_complete(540393028, -1959133129))
	{
		func_2095(cParam0, -1959133129);
	}
	if (iVar0 < iLocal_156 || ((iVar0 >= iLocal_156 && (func_29() || func_1419(cParam0, 10))) && _0x7409669c5ed50144(-1392528840)))
	{
		_0x50b72a754ee64a71(-1392528840);
	}
}

void func_1588()
{
	_0x0751d461f06e41ce(get_player_index(), 7, 0, 1);
	_0x0751d461f06e41ce(get_player_index(), 4, 0, 1);
}

void func_1589(char[4] cParam0)
{
	iVar16 = func_33(cParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(cParam0, iVar16);
	if (cParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2504)
		{
			if (func_215(cParam0->f_8269[iVar19], 1048576))
			{
				if (func_2096(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1489(cParam0->f_8269[iVar19]);
				}
				else if (func_2097(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_225(cParam0->f_8269[iVar19]);
					if (iVar19 < (cParam0->f_8269.f_2504 - 1))
					{
						_copy_memory(cParam0->f_8269[iVar19], cParam0->f_8269[(cParam0->f_8269.f_2504 - 1)], 16);
						_copy_memory(cParam0->f_8269[cParam0->f_8269.f_2504], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(cParam0->f_8269[iVar19], &uVar0, 16);
					}
					cParam0->f_8269.f_2504 = (cParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2505)
		{
			if (func_215(cParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_2098(cParam0, cParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2099(cParam0->f_8269.f_641[iVar19]);
					if (iVar19 < (cParam0->f_8269.f_2505 - 1))
					{
						_copy_memory(cParam0->f_8269.f_641[iVar19], cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1)], 16);
						_copy_memory(cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1)], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(cParam0->f_8269.f_641[iVar19], &uVar0, 16);
					}
					cParam0->f_8269.f_2505 = (cParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2506)
		{
			if (func_215(cParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_2098(cParam0, cParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_216(cParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_215(cParam0->f_8269.f_1282[iVar19], 4))
						{
							func_2100(&(cParam0->f_8269));
						}
						if (iVar19 < (cParam0->f_8269.f_2506 - 1))
						{
							_copy_memory(cParam0->f_8269.f_1282[iVar19], cParam0->f_8269.f_1282[(cParam0->f_8269.f_2506 - 1)], 16);
							_copy_memory(cParam0->f_8269.f_1282[(cParam0->f_8269.f_2506 - 1)], &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							_copy_memory(cParam0->f_8269.f_1282[iVar19], &uVar0, 16);
						}
						cParam0->f_8269.f_2506 = (cParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2507)
		{
			if (func_215(cParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_2096(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2101(cParam0, cParam0->f_8269.f_2243[iVar19], 1);
					func_499(cParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_2097(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2101(cParam0, cParam0->f_8269.f_2243[iVar19], 0);
					func_499(cParam0->f_8269.f_2243[iVar19], 2);
					if (iVar19 < (cParam0->f_8269.f_2507 - 1))
					{
						_copy_memory(cParam0->f_8269.f_2243[iVar19], cParam0->f_8269.f_2243[iVar19 + 1], 16);
						_copy_memory(cParam0->f_8269.f_2243[iVar19 + 1], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(cParam0->f_8269.f_2243[iVar19], &uVar0, 16);
					}
					cParam0->f_8269.f_2507 = (cParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

bool func_1590(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 16777216))
	{
		return false;
	}
	if (!func_121(cParam0, func_33(cParam0), 2))
	{
		return false;
	}
	if (!Global_1935630->f_12)
	{
		return ((get_is_task_active(Global_35, 3) || func_1891(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1591()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1584(0);
	func_2102();
}

void func_1592(char[4] cParam0, int iParam1, int iParam2)
{
	func_460(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

bool func_1593(int iParam0)
{
	return (iParam0 < func_396() && iParam0 >= 0);
}

int func_1594(int iParam0)
{
	if (iParam0 <= -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (iVar0 == iParam0 || iVar0 == 8)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1595(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1596(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1593(iVar0))
	{
		return false;
	}
	iVar1 = func_1594(iParam2);
	if (!func_1595(iVar1))
	{
		return false;
	}
	return is_bit_set(cParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1597(struct<2> Param0, int iParam2)
{
	if (!func_253(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1598(char[4] cParam0)
{
	func_2103(cParam0);
	if (func_277(cParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_277(cParam0) == 0 && !func_8(cParam0, 8))
	{
		func_926(cParam0);
	}
	func_51(&(cParam0->f_10792));
	func_2104(cParam0);
	func_2105(cParam0, 67108864);
	func_2105(cParam0, 8192);
	func_928(cParam0, 4);
	func_928(cParam0, 512);
	func_928(cParam0, 65536);
	func_928(cParam0, 1024);
	func_928(cParam0, 262144);
	func_928(cParam0, 16777216);
	func_928(cParam0, 64);
	func_263(cParam0, 128);
	func_99(cParam0, -2147483648);
	func_2106(cParam0, 1);
	if (func_120(cParam0, 4194304))
	{
		func_140(cParam0, func_33(cParam0), 1073741824);
	}
	func_263(cParam0, 4194304);
	func_263(cParam0, 8388608);
	if (!func_121(cParam0, func_33(cParam0), 2048))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	if (func_20() == 0)
	{
		func_21(8);
		func_79(1);
	}
	if (func_121(cParam0, func_33(cParam0), 64) || !func_115(cParam0))
	{
		func_40(0);
	}
	else
	{
		func_40(1);
	}
	_set_milliseconds_per_game_minute(2000);
	if (!func_8(cParam0, 131072))
	{
		set_everyone_ignore_player(get_player_index(), false);
	}
	func_461(&(cParam0->f_13106));
	func_218(&(cParam0->f_13112));
	func_2107(cParam0, func_121(cParam0, func_33(cParam0), 1));
	if (!func_121(cParam0, func_33(cParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(cParam0, func_33(cParam0), 32768))
	{
		func_233(1);
	}
	if (func_972(cParam0, func_35(cParam0)) != -1 && _0x62de46f061caa468() < func_972(cParam0, func_35(cParam0)))
	{
		_0xf008e0ba1fe1d644((func_972(cParam0, func_35(cParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_2108(cParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(cParam0, func_33(cParam0), 1))
	{
		func_227(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_2109(cParam0);
	if (func_33(cParam0) == 25 && func_82(32768))
	{
		func_2110(cParam0, 16);
	}
	if (func_121(cParam0, func_33(cParam0), 512))
	{
		func_1569(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1599(char[4] cParam0)
{
	if (func_120(cParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1600(char[4] cParam0)
{
	func_2063(cParam0);
}

void func_1601(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1483(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1602(char[4] cParam0)
{
	func_2111(cParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(cParam0, 1024);
	}
}

bool func_1603(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1604(char[4] cParam0)
{
	return true;
}

void func_1605(char[4] cParam0, char[32] cParam1)
{
	cParam0->f_10784 = { cParam1 };
}

bool func_1606(var uParam0, int iParam1)
{
	iVar0 = func_2112(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1607(char[4] cParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2113(cParam0, uParam1))
	{
		return 0;
	}
	if (func_518(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1014(uParam1);
	func_2114(uParam1);
	if (!bParam2)
	{
		func_2115(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2116(cParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2117(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2118(cParam0, uParam1);
	func_2119(uParam1);
	return 0;
}

bool func_1608(char[4] cParam0)
{
	return true;
}

int func_1609(int iParam0)
{
	iVar4 = -899457438;
	iVar5 = 0;
	while (_event_manager_is_event_pending(iVar4))
	{
		if (_event_manager_peek_event(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 2338895)
					{
						if (_is_app_active(1433015236))
						{
							_close_app_by_hash(1433015236);
						}
						iVar5 = 1;
					}
					break;
				case -1740156697:
					if (iVar5 != 1)
					{
						*iParam0 = func_2120(vVar0.z);
						iVar5 = 3;
					}
					break;
				case 922460030:
					iVar5 = 2;
					break;
				default:
					break;
			}
			_event_manager_pop_event(iVar4);
		}
	}
	return iVar5;
}

void func_1610(char[4] cParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1363(cParam0, &cParam1, "", bParam9, bParam10);
}

void func_1611(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_873((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2121(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2122(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2123((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_873((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2121(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2122(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2124((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_873((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2121(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2122(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2125((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_873((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2121(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2122(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2126((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_873(uParam4->f_1, iParam12))
	{
		func_2121(&(uParam4->f_1), iParam12);
		if (func_2122(&(uParam4->f_1), iParam13))
		{
			func_2127(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_873((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2121(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2122(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2128((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_873((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2121(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2122(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2129((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_873((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2121(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2122(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2130((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_873((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2121(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2122(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2131((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_873((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2121(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2122(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2132((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_873((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2121(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2122(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2133((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_873((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2121(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2122(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2134((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1612(char[4] cParam0)
{
	iVar0 = func_2135(cParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1613(bool bParam0, bool bParam1)
{
	if (func_2136(255) == 4)
	{
		return;
	}
	if (func_395(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_288(0);
	}
	else
	{
		if (bParam1)
		{
			func_2137(0, 0, 0, 1);
		}
		func_289(0);
		func_2138(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2139(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2140(Global_1109400->f_389, 42);
	func_2141(Global_1109400->f_428, 42);
}

int func_1614(bool bParam0, bool bParam1, bool bParam2)
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

var func_1615(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1616(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return _create_var_string(2, sParam1, sParam4);
		case 2:
			return _create_var_string(2, sParam1, sParam4, sParam5);
		case 3:
			return _create_var_string(10, sParam1, sParam2);
		case 4:
			return _create_var_string(42, sParam1, sParam2, sParam3);
	}
	return _create_var_string(2, func_2142(sParam1));
}

int func_1617(int iParam0)
{
	if (func_193(iParam0) == 6)
	{
		if (func_270(iParam0) == 0)
		{
			return func_313(iParam0);
		}
	}
	return -1;
}

bool func_1618(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 8)
	{
		return true;
	}
	return false;
}

void func_1619(var uParam0, int iParam1)
{
	func_460(&(uParam0->f_64), iParam1);
}

void func_1620(var uParam0, int iParam1)
{
	func_420(&(uParam0->f_64), iParam1);
}

bool func_1621(int iParam0)
{
	if (!func_1056(iParam0))
	{
		return false;
	}
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		return true;
	}
	return false;
}

void func_1622(int iParam0, var uParam1)
{
	if (!func_1056(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 == 0 || func_1057(&((*Global_1360165)[iParam0]->f_12), 1))
	{
		if (does_blip_exist(*uParam1))
		{
			func_2143(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_1057(&((*Global_1360165)[iParam0]->f_12), 512);
	if (func_1057(&((*Global_1360165)[iParam0]->f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (func_1057(&((*Global_1360165)[iParam0]->f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (func_1057(&((*Global_1360165)[iParam0]->f_12), 256))
	{
		iVar1 = func_2144(-1739349092);
	}
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(422991367, func_554(iParam0));
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
		if (bVar2 && !func_195(0, 0, 1))
		{
			_0xedd964b7984ac291(*uParam1, -1944754404);
			if (func_1057(&((*Global_1360165)[iParam0]->f_12), 1024))
			{
				_blip_set_modifier(*uParam1, -46775694);
			}
			if (func_1057(&((*Global_1360165)[iParam0]->f_12), 2048))
			{
				_blip_set_modifier(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			set_blip_sprite(*uParam1, iVar1, true);
		}
		if (!is_string_null_or_empty(&((*Global_1360165)[iParam0]->f_14)) && func_1057(&((*Global_1360165)[iParam0]->f_12), 8))
		{
			set_blip_name_from_text_file(*uParam1, &((*Global_1360165)[iParam0]->f_14));
		}
		else
		{
			set_blip_name_from_text_file(*uParam1, func_322(iParam0, 0));
		}
	}
}

int func_1623(int iParam0)
{
	iVar0 = func_477(iParam0);
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

void func_1624(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_474(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_1625(int iParam0, int iParam1)
{
	if (!func_474(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

int func_1626(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1934765->f_337)
	{
		if (Global_1934765->f_318[iVar0]->f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1627(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return;
	}
	if (Global_1934765->f_337 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1934765->f_337 - 2))
		{
			_copy_memory(Global_1934765->f_318[iVar0], Global_1934765->f_318[iVar0 + 1], 3);
			iVar0++;
		}
	}
	Global_1934765->f_337 = (Global_1934765->f_337 - 1);
}

void func_1628()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_1629(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1630();
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 6)
	{
		return;
	}
	if (iVar0 == Global_1934765->f_338)
	{
		return;
	}
	if (func_2145(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_1630()
{
	iVar0 = -1;
	iVar1 = -1;
	if (Global_1934765->f_337 <= 0)
	{
		return -1;
	}
	iVar2 = (Global_1934765->f_337 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = func_2146(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

char* func_1631(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_1211(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1211(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_1632()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_1633(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1058888->f_40501.f_1[iVar0] = { *(Global_1058888->f_40501.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1634(int iParam0)
{
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1]) = { *Global_1058888->f_40501.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1058888->f_40501.f_1[iParam0] = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

void func_1635(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1636(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2147(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1637(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (is_string_null_or_empty(&((*Global_1934603)[iParam0]->f_10)))
	{
		return;
	}
	*(*Global_1934603)[iParam0] = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

void func_1638()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_394())
	{
		return;
	}
	func_2148(&(Global_40.f_40));
}

void func_1639()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
		{
			Global_40.f_11029[iVar0]->f_1 = { _0x1e8a921112891651((*Global_1425371)[iVar0]->f_1) };
			Global_40.f_11029[iVar0]->f_4 = _0x67995318f5faa496((*Global_1425371)[iVar0]->f_1);
		}
		iVar0++;
	}
}

bool func_1640()
{
	return !func_395(Global_1310720->f_1);
}

int func_1641()
{
	return Global_40.f_4283.f_1;
}

int func_1642()
{
	return Global_40.f_4283.f_4;
}

void func_1643(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_2149())
	{
		fVar0 = func_1078(vParam0, Global_40.f_6);
	}
	if (func_2150(33554432))
	{
		if (!func_2151(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1078(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

float func_1644(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1645()
{
	if (!func_196(&Global_1935630, 8192))
	{
		return;
	}
	if (func_82(32768))
	{
		return;
	}
	func_71(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2152(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_2152(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_2152(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_2152(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2152(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_2152(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_2152(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_2152(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_2152(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_2153(10f, to_float(func_2152(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_2153(5f, to_float(func_2152(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_2153(25f, to_float(func_2154(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_2153(1f, to_float(func_2154(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_2153(6f, to_float(func_2154(64058978)))));
	fVar0 = (fVar0 + (3f * func_2153(1f, to_float(func_2154(795577402)))));
	iVar1 = func_2155();
	fVar0 = (fVar0 + (0.1111111f * func_2153(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_2153(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_2153(to_float(20), to_float(func_2157()))));
	if (func_2158(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2158(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2158(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2158(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2158(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_2156(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_2153(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_2153(5f, to_float(func_2154(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_2153(5f, to_float(func_2152(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1715(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1715(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1715(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1715(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1715(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1715(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_2159(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_2153((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_2153(1f, to_float(func_2160(-2116919750)))));
	fVar5 = to_float(func_2161());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_2153(1f, to_float(func_2152(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2153(1f, to_float(func_2152(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2153(1f, to_float(func_2152(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2153(1f, to_float(func_2152(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_2153(5f, to_float(func_2154(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_2153(1f, to_float(func_2154(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_2153(1f, to_float(func_2154(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_2153(1f, to_float(func_2154(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2153(1f, to_float(func_2152(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2153(1f, to_float(func_2152(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2153(1f, to_float(func_2152(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2153(1f, to_float(func_2152(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2153(1f, to_float(func_2152(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2153(1f, to_float(func_2152(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2153(1f, to_float(func_2152(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2153(1f, to_float(func_2152(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2153(1f, to_float(func_2152(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2153(1f, to_float(func_2152(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_2162(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_188(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_188(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_192(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_2163(Global_1898330[iVar61]);
				}
				else
				{
					func_2164(iVar61, 0);
					if (func_193(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_191(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_191((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										_0x51ec204a6e5b5a1a(func_191(&Global_1898437), &iVar9);
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

void func_1646(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

int func_1647(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1648(int iParam0)
{
	if (!func_1056(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2165(iParam0);
		if (iVar0 != 0)
		{
			(*Global_1360165)[iParam0]->f_1 = _create_persistent_character(iVar0);
			_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_1);
		}
		else
		{
			(*Global_1360165)[iParam0]->f_1 = 0;
		}
	}
}

void func_1649(int iParam0)
{
	if (func_518(iParam0))
	{
		if (does_entity_exist(func_554(iParam0)))
		{
			func_713(iParam0, 67108864, 1);
			func_1060(iParam0, 19, 1);
		}
	}
}

float func_1650(int iParam0)
{
	if (!func_1056(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1651(int iParam0)
{
	bVar0 = func_554(iParam0);
	iVar1 = func_1061(iParam0, 0);
	func_2166(iParam0, bVar0);
	if (does_entity_exist(bVar0))
	{
		if (!_0x88ad6cc10d8d35b2(bVar0))
		{
			_0xf008e0ba1fe1d644(1);
			bVar2 = true;
			set_entity_as_mission_entity(bVar0, true, true);
		}
		_0x7b204f88f6c3d287(iVar1);
		if (bVar2)
		{
			_0x7d4e70a67a651c71(1);
		}
	}
	_0xfcc6db8dbe709bc8(iVar1);
}

bool func_1652(int iParam0)
{
	if (!func_1056(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1653(int iParam0)
{
	if (!func_1056(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1654(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1056(iParam0))
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

int func_1655(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1056(iParam0))
	{
		return 0;
	}
	bVar0 = func_1068(iParam0);
	if (func_455(bVar0, 0))
	{
		if (func_455(_get_rider_of_mount(bVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1652(iParam0)) || func_1653(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(bVar0) && func_2167(player_ped_id(), bVar0, 1) < 10000f))
			{
				iVar1 = func_2168(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(bVar0))
					{
						set_entity_as_mission_entity(bVar0, true, true);
					}
					func_2169(iParam0);
					_0x7b204f88f6c3d287(func_2170(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_2170(iParam0, 0));
					func_2171(iParam0);
				}
			}
			else
			{
				if (func_712(iParam0, 32768, 1))
				{
					iVar2 = func_2170(iParam0, 0);
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
		if (func_455((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_712(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_2169(iParam0);
				_0x7b204f88f6c3d287(func_2170(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_2170(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_2169(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_2172(iParam0, 0);
	return 1;
}

int func_1656(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

char* func_1657(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_244(37, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1109400->f_12), get_length_of_literal_string(&(Global_1109400->f_12)));
		}
		else
		{
			return get_player_name(player_id());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225639->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_244(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1658(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1213(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1659(int iParam0)
{
	iParam0 = func_264(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372.f_1;
}

float func_1660(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1661(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_94(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1662(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1663(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1664(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

void func_1665(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_2173(bParam1);
	}
}

void func_1666(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1667(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_1668(int iParam0)
{
	if (!func_1277(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = _datafile_get_num_nodes(&vVar0);
		return true;
	}
	return false;
}

bool func_1669(int iParam0, int iParam1, int iParam2)
{
	if (!func_1277(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_1670(int iParam0)
{
	return iParam0;
}

int func_1671()
{
	iVar0 = func_1099();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

int func_1672(int iParam0)
{
	if (!func_579(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1673(int iParam0, var uParam1, bool bParam2)
{
	if (!func_579(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_690(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1136((386 + iVar29), 1);
		if (func_1137(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1138(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_1674(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1139(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_1042(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1675(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	return Var0;
}

void func_1676(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1677(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_1042(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1678(int iParam0)
{
	iVar0 = iParam0;
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

float func_1679(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_2174(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_2174(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_2174(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_1680(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_601(18);
		case 2:
			return func_601(20);
		case 1:
			return func_601(19);
		default:
			break;
	}
	return true;
}

int func_1681(int iParam0)
{
	return func_2175(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1682(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_601(31))
	{
		return;
	}
	iVar0 = func_1681(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1681(iParam0);
	if (func_2176(iParam0) && func_2177(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_2178(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_2179(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_323(func_2180(iParam0), 0);
					}
					func_2181(iParam0, iVar2, iVar3);
					func_2182(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1683(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1684(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

int func_1685()
{
	return func_2183(Global_40.f_12019);
}

int func_1686()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1120(iVar1);
		if (func_345(iVar2, 1, 0) || func_1692(func_1691(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1687()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_2184(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1688()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1697(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1689()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1690(int iParam0)
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

int func_1691(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1692(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1693(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1694(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_1695(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_1696(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1697(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1698(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1699(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_1700(int iParam0)
{
	if (func_2185(iParam0) && func_345(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_2186(iParam0) && func_2187(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1701(int iParam0)
{
	if (!func_579(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_646(iParam0));
}

int func_1702(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1703(bool bParam0)
{
	if (!does_entity_exist(Global_35))
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

void func_1704(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_1705(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_1706(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_1707(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_1708(bool bParam0)
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

void func_1709(bool bParam0)
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

void func_1710(bool bParam0)
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

int func_1711(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_678(iParam0, 1)]);
}

void func_1712()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_2188();
		_unlock_set_unlocked(-1526891582, true);
		func_606(-916314281);
		func_652(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_606(494733111);
		func_652(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1713(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_1042(0);
	*uParam1 = { func_1139(iParam0, func_1245(0), iParam3, 0) };
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

bool func_1714(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1715(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1716(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1717(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_599(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_599(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_599(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_599(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_599(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_599(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1718(int iParam0, int iParam1)
{
	iVar1 = func_678(func_2189(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_603(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1719(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_678(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1182(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + _0x31b2e7f2e3c58b89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

bool func_1720(int iParam0)
{
	switch (iParam0)
	{
		case -1511777811:
			return true;
		case 103395732:
			return true;
		case -874127761:
			return true;
		case -635667748:
			return true;
		case 1613924106:
			return true;
		default:
			break;
	}
	return false;
}

int func_1721(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_1722(int iParam0)
{
	return func_2190(iParam0, -1);
}

bool func_1723(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1724(int iParam0)
{
	iVar0 = func_1041(iParam0, 1);
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

void func_1725(int iParam0)
{
	iVar0 = func_1041(iParam0, 1);
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

void func_1726()
{
	func_1725(-939420910);
	func_1725(-1187950766);
	func_1725(356365161);
	func_1725(753127042);
	func_1725(-2038424081);
	func_1725(1884271742);
	func_1725(459290420);
}

void func_1727()
{
	func_1725(704802028);
	func_1725(588987611);
	func_1725(2008888900);
	func_1725(1649996811);
	func_1725(227918160);
	func_1725(168171957);
	func_1725(1193080109);
	func_1725(-491981251);
	func_1725(-639037538);
	func_1725(-618620429);
}

bool func_1728(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1729(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1730(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1731(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1732(int iParam0)
{
	func_1468(iParam0, 8, 6);
}

void func_1733(int iParam0)
{
	func_2191(&(Global_1946804->f_2589), iParam0);
}

int func_1734(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_2192(0);
	if (iParam2 != 0 && func_2193(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1236(iParam0, func_1250(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1735(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_20() != -1;
	iVar7 = func_2192(0);
	if (func_1182(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_1250(iVar0, 1);
			if (func_1464(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1464(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1719(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_2194(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1182(524288))
					{
						func_1242(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_1250(iVar0, 1);
							if (func_1464(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1464(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1719(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1574(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1738(524288);
				}
			}
		}
	}
}

void func_1736(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_2195(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_20() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_2196(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1756(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1756(Global_40.f_7729);
				Global_1946804->f_1378 = func_1756(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_2197(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1230(0, 1);
	}
}

void func_1737(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		_0x13e7320c762f0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1738(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1739(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1740(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1793(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1793(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1794(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1242(8);
}

bool func_1741()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1742()
{
	fVar0 = func_2198(13);
	iVar1 = func_2199(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1743()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1744()
{
	if (func_336())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1745()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1746()
{
	return Global_1955565->f_3;
}

void func_1747(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1631(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1748(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1631(iParam0, 2, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[2]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_DOWN");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 859817522);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_UP");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 1105014447);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), false);
	}
}

float func_1749(float fParam0, float fParam1, float fParam2)
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

bool func_1750()
{
	return func_2198(12) <= -99f;
}

bool func_1751()
{
	return func_2198(12) >= 99f;
}

int func_1752()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_603(iVar1) == -999503751)
		{
			if (func_2200() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1753(int iParam0)
{
	if (!func_1198(iParam0))
	{
		return false;
	}
	if (func_1757(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1754(int iParam0)
{
	if (!func_1198(iParam0))
	{
		return false;
	}
	if (func_1757(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1755(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1198(iParam0))
	{
		return;
	}
	if (!func_1754(iParam0))
	{
		func_1758(iParam0, 2);
		if (bParam2)
		{
			if (!func_195(0, 0, 1))
			{
				func_365(1, 4);
			}
		}
		if ((!func_212() && !bParam1) && !func_195(0, 0, 1))
		{
			func_718(_create_var_string(10, "OUT_JOURN_ADD", func_2201(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1756(int iParam0)
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

bool func_1757(int iParam0, int iParam1)
{
	if (!func_1198(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_1758(int iParam0, int iParam1)
{
	if (!func_1198(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1759(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
}