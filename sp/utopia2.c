void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_622, 1073741824);
		func_2(&uLocal_622, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_622);
	func_5(&uLocal_622);
	while (!func_6(&uLocal_622, -2147483648))
	{
		func_7(&uLocal_622);
		wait(0);
	}
	while (!func_2(&uLocal_622, 0))
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
	iLocal_15 = func_125(cParam0);
	iLocal_15 = iLocal_15;
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
	func_163(0, 0, 1103626240);
	if (func_164())
	{
		func_47(0, 0);
	}
	func_165(cParam0, 0);
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 254, false);
		if (_0x2009f8ab7a5e9d6d(get_player_index()))
		{
			_0x12e09e278c6c29b7(get_player_index());
		}
		_0x086549f3b0381cb1(get_player_index(), 0);
		if (assisted_movement_is_route_loaded("utopia2_ride_assist"))
		{
		}
		if (get_ped_config_flag(Global_35, 155, true))
		{
			set_ped_config_flag(Global_35, 155, false);
		}
		if (get_ped_config_flag(Global_35, 141, true))
		{
			set_ped_config_flag(Global_35, 141, false);
		}
		if (get_ped_config_flag(Global_35, 104, true))
		{
			set_ped_config_flag(Global_35, 104, false);
		}
		if (get_ped_config_flag(Global_35, 352, true))
		{
			set_ped_config_flag(Global_35, 352, false);
		}
		if (get_ped_config_flag(Global_35, 454, true))
		{
			set_ped_config_flag(Global_35, 454, false);
		}
		set_ped_can_use_auto_conversation_lookat(Global_35, false);
		if (func_166(&uVar0))
		{
			func_167();
		}
		if (!is_player_control_on(get_player_index()))
		{
			set_player_control(get_player_index(), true, 0, false);
		}
	}
	_0xbc90bdf4e5228ea1();
	func_168(cParam0, Global_35, 0, 1);
	if (_is_imap_active(-928367655))
	{
		_remove_imap(-928367655);
	}
	if (!is_entity_dead(cParam0->f_5408))
	{
		set_blocking_of_non_temporary_events(cParam0->f_5408, false);
		clear_ped_tasks(cParam0->f_5408, 1, 0);
		clear_ragdoll_blocking_flags(cParam0->f_5408, 1);
		if (get_ped_config_flag(cParam0->f_5408, 167, true))
		{
			set_ped_config_flag(cParam0->f_5408, 167, false);
		}
		if (!_0xcc2b20596e29e4e3(cParam0->f_5408, 0))
		{
			set_ped_combat_attributes(cParam0->f_5408, 0, true);
		}
		if (get_ped_config_flag(cParam0->f_5408, 135, true))
		{
			set_ped_config_flag(cParam0->f_5408, 135, false);
		}
		set_ped_can_use_auto_conversation_lookat(cParam0->f_5408, false);
		set_ped_config_flag(cParam0->f_5408, 254, false);
		if (func_169(6))
		{
			func_171(6, func_170(6), 0);
		}
		func_172(6, 1056964608, -1, 1061158912);
		func_173(cParam0);
	}
	if (!is_entity_dead(cParam0->f_5411))
	{
		set_entity_only_damaged_by_player(cParam0->f_5411, false);
		_0xfd6943b6df77e449(cParam0->f_5411, true);
		set_blocking_of_non_temporary_events(cParam0->f_5411, false);
		clear_ped_tasks(cParam0->f_5411, 1, 0);
	}
	if (!is_entity_dead(iLocal_94))
	{
		set_ped_config_flag(iLocal_94, 254, false);
		set_entity_only_damaged_by_player(iLocal_94, false);
		_0xfd6943b6df77e449(iLocal_94, true);
		set_blocking_of_non_temporary_events(iLocal_94, false);
		clear_ped_tasks(iLocal_94, 1, 0);
	}
	func_174(1);
	if (_does_volume_exist(Local_16))
	{
		func_175(Local_16);
	}
	if (_does_volume_exist(Local_16.f_1))
	{
		_0xa1cfb35069d23c23(Local_16.f_1);
	}
	if (_does_volume_exist(Local_16.f_1))
	{
		_0x74c2b3dc0b294102(Local_16.f_1);
	}
	if (_does_volume_exist(Local_16.f_2))
	{
		_0xa1cfb35069d23c23(Local_16.f_2);
	}
	if (_does_volume_exist(Local_16.f_2))
	{
		_0x74c2b3dc0b294102(Local_16.f_2);
	}
	_clear_tactical_analysis_points();
	if (does_cam_exist(iLocal_60))
	{
		destroy_cam(iLocal_60, false);
	}
	func_176(&uLocal_504);
	func_177();
	func_178(cParam0);
	func_179();
	func_180();
	_0x4f57397388e1dff8();
	func_181(cParam0);
	func_182(cParam0);
	func_183(cParam0);
	func_184(cParam0);
	func_185(cParam0);
	func_186();
	remove_relationship_group(iVar499);
	remove_relationship_group(iVar500);
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
	iVar0 = func_187(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_188(iVar0);
	*uParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_189(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_190(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_191(iParam0) && !func_192(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_193(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_191(iParam0))
	{
		iParam2 = -1;
	}
	if (func_194(iParam0) == 3 || (func_194(iParam0) == 1 && _0x01f4d242765c6b24(func_193(iParam0))))
	{
		func_196(func_195(iParam0), func_193(iParam0), iParam2);
		if ((!func_190(Global_1572864->f_8) && !func_197(0, 1, 0)) && !func_198(&Global_1935630, 32768))
		{
			iVar0 = func_199(iParam0);
			if (iVar0 != -1)
			{
				func_200(0);
			}
			else if (func_195(iParam0) == 8)
			{
				iVar0 = func_201();
				if (iVar0 != -1)
				{
					func_200(0);
				}
			}
		}
	}
	func_202(iParam0, 0);
	if (func_203(0) == iParam0)
	{
		func_40(1);
		func_204(0);
		func_205(1);
	}
	func_206(iParam0, 1);
	func_207(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_208(0);
	func_209(0);
	func_64(0);
	func_65(0);
	func_210(0);
	func_211(1f);
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
		func_212();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_213())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_214())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(char[4] cParam0, bool bParam1)
{
	Var0 = func_193(func_12(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_215(0);
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
		func_216(iVar0, iParam0);
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
		if (func_217((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_218((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_218((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_218((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(int iParam0)
{
	return func_219(*iParam0, 1);
}

void func_27(int iParam0, bool bParam1)
{
	if (bParam1 || !func_26(iParam0))
	{
		func_220(iParam0);
	}
}

bool func_28(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 128) && func_29())
	{
		return true;
	}
	if (func_221(&(cParam0->f_13118)) >= 4000)
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
	func_222(!func_6(cParam0, 32), 1);
	func_1(cParam0, 32);
}

bool func_31(char[4] cParam0)
{
	return true;
}

bool func_32()
{
	return func_190(Global_1572864->f_8);
}

int func_33(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	if (iParam0 == 0)
	{
		func_224(&Var0, func_223(0, 0));
	}
	else if (iParam0 == 1)
	{
		func_224(&Var0, func_223(1, 0));
	}
	else if (iParam0 == 2)
	{
		func_224(&Var0, func_223(2, 0));
	}
	else if (iParam0 == 3)
	{
		func_224(&Var0, func_223(3, 0));
	}
	else if (iParam0 == 4)
	{
		func_224(&Var0, func_223(4, 0));
	}
	else if (iParam0 == 5)
	{
		func_224(&Var0, func_223(5, 0));
	}
	else if (iParam0 == 6)
	{
		func_224(&Var0, func_223(6, 0));
	}
	else if (iParam0 == 7)
	{
		func_224(&Var0, func_223(7, 0));
	}
	else if (iParam0 == 25)
	{
		func_224(&Var0, func_223(8, 0));
	}
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_225(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_208(0);
	func_226(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_217((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_227((*uParam0)[iVar0]);
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
			func_228(iVar0, 4096);
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
		func_229(Global_1935630, 4194304);
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
	func_230();
	func_231();
	func_232();
	func_233();
}

void func_43()
{
	if (func_234())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_235(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_236();
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
	func_237(1, iParam0, iParam1);
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
	return (func_238() || func_54());
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
	func_239(uParam0);
	func_240(uParam0, 0);
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
		func_241(iVar0);
		iVar0++;
	}
	func_242();
	func_243();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_244())
	{
		if (func_245(255))
		{
			if (!func_246(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_247(Global_1894899->f_2) && func_248(Global_1894899->f_2))
		{
			func_249(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_250(16);
			}
		}
		else if (func_247(Global_1894899->f_2) && !func_251(Global_1894899->f_2, 2))
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
		func_252(16);
		func_253();
		if (bVar0)
		{
			func_252(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_254(cParam0->f_5423[iVar0]))
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
	if (func_255(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_256(cParam0->f_5421))
		{
			iVar1 = func_257(cParam0->f_5421, iVar0);
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
		if (func_258(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_259(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_260(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_261(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_262(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_263(7);
		}
		else
		{
			func_264(iVar0, 0);
		}
		func_265(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_267(iParam0, 32);
	func_268();
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
	Var0 = { func_269(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_270(iParam0) };
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
		func_210(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_210(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(char[4] cParam0)
{
	func_271(&(cParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_217((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_218((*uParam1)[iVar0], 1);
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
	iVar0 = func_195(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_272(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_273(iVar1))
			{
				if (func_274(iVar1, 4))
				{
					func_275(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_276(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_272(iParam0);
		if (iVar3 == 59)
		{
			func_276(1);
		}
		else if (iVar3 == 61)
		{
			func_276(0);
		}
		else if (iVar3 == 83)
		{
			func_276(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_273(iVar0))
		{
			if (func_274(iVar0, 4))
			{
				if (func_274(iVar0, 16))
				{
					func_277(iVar0, 1);
				}
				if (func_274(iVar0, 8))
				{
					func_278(iVar0, 1);
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
		if (func_279(cParam0) == 0 && iVar0 == 0)
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
		func_280(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_281(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	iVar0 = 0;
	if (func_282(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_283(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_247(iParam0))
	{
		return;
	}
	bVar0 = func_251(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_284(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_286(iParam0, func_285());
			func_287(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_288(iParam0, 67108864);
		func_286(iParam0, -15);
	}
	func_289(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_290(11);
	}
	else
	{
		func_291(11);
	}
}

void func_80(int iParam0)
{
	if (func_292(iParam0, 0))
	{
		func_293(262144, 5, 0, 1);
		func_294(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_295(101, 7, 1f, 0, 1);
			func_295(89, 7, 1f, 0, 1);
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
	if (!func_190(iParam0))
	{
		return;
	}
	if (func_296(iParam0) == 4)
	{
		func_297(iParam0, func_285());
		if (!func_194(iParam0) == 5 && !func_194(iParam0) == 6)
		{
			if (bParam3)
			{
				func_202(iParam0, 6);
			}
			else
			{
				func_202(iParam0, 5);
			}
			func_207(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_195(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_298(0, 2);
		if (!bVar1 && bParam1)
		{
			func_299();
		}
	}
	else
	{
		func_204(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_300(iParam0);
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
				if (bParam1 && func_194(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_272(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_272(iParam0)]->f_8), true);
						}
					}
					else if ((func_272(iParam0) != 95 && func_272(iParam0) != 82) && !func_301((*Global_1347702)[func_272(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_272(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_272(iParam0)]->f_8), true);
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
		func_303(func_272(iParam0), iVar6, func_302());
	}
	else if (iVar0 == 8)
	{
		func_305(func_272(iParam0), iVar6, func_302(), func_304());
	}
	if (!func_194(iParam0) == 5 && !func_194(iParam0) == 6)
	{
		iVar9 = func_306(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_307(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_308(func_272(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_309((iVar10 - 20), 0, iVar10);
					iVar11 = func_309((iVar11 - 10), 0, iVar11);
				}
				func_310(1);
				func_311(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_311(45, 0, 1);
				break;
			case 8:
				iVar10 = func_312(func_272(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_309((iVar10 - 20), 0, iVar10);
					iVar11 = func_309((iVar11 - 10), 0, iVar11);
				}
				func_311(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_313(func_272(iParam0)))
				{
					func_314(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_311(120, 0, 1);
				break;
			case 2:
				func_311(120, 0, 1);
				break;
			case 6:
				func_311(func_316(func_315(iParam0)), 0, 1);
				break;
			case 5:
				func_311(120, 0, 1);
				break;
		}
	}
	func_206(iParam0, 1);
	func_297(iParam0, func_285());
	func_207(iParam0);
	if ((!func_194(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_199(iParam0);
		if (iVar12 != -1)
		{
			func_200(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_201();
			if (iVar12 != -1)
			{
				func_200(0);
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
				switch (func_272(iParam0))
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
				if (func_273(func_272(iParam0)) && func_301((*Global_1347702)[func_272(iParam0)]->f_12, 4))
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
				if (func_272(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_272(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_194(iParam0) == 5 && !func_194(iParam0) == 6)
	{
		if (bParam3)
		{
			func_202(iParam0, 6);
		}
		else
		{
			func_202(iParam0, 5);
		}
		func_207(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_272(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_317();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_318(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-1267972061);
						func_318(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(1619534881);
						func_318(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-755457379);
						func_318(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(1015404643);
						func_318(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-1724192342);
						func_318(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(1310680212);
						func_318(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-566881549);
						func_318(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-1753730528);
						func_318(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(147796381);
						func_318(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-378547623);
						func_318(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(829545206);
						func_318(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(891318243);
						func_318(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320();
						func_321(967523420);
						func_322();
						func_323();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_324(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_318(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_325(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_325(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_326(304805134, 1, 1);
						if (!func_327((*Global_1347702)[21]->f_15, 1))
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
						func_328();
						break;
					case 26:
						func_329();
						break;
					case 17:
						func_330(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_331())
						{
							func_332(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_333(-514575035, -1))
						{
							iVar15 = func_285();
							func_334(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_335(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_331())
						{
							func_332(1529685685);
						}
						break;
					case 34:
						if (func_331())
						{
							func_332(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_336();
						break;
					case 37:
						func_337();
						if (func_338())
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
						func_339();
						break;
					case 43:
						func_340();
						break;
					case 44:
						if (!func_327((*Global_1347702)[82]->f_15, 1))
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
						if (!func_327((*Global_1347702)[83]->f_15, 1))
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
						func_341();
						break;
					case 59:
						func_342();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_343();
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
						func_344();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_325(451, 0);
						}
						if (!func_345(-1992824800))
						{
							if (func_345(1520110311))
							{
								iVar16 = func_285();
								func_334(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_335(1937177603, iVar16, 1);
							}
						}
						if (func_346(4))
						{
							if (!func_347(684296857, 1, 0))
							{
								iVar17 = func_285();
								func_334(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_335(-1439688706, iVar17, 1);
							}
						}
						func_318(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_348(89200);
						func_348(2300);
						func_348(2300);
						break;
					case 68:
						func_349();
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
						func_350();
						func_348(-139100);
						break;
					case 69:
						if (func_327((*Global_1347702)[9]->f_15, 1))
						{
							func_348(-6000);
						}
						break;
					case 70:
						func_348(23400);
						func_348(1900);
						func_348(-15000);
						break;
					case 71:
						func_348(-5500);
						break;
				}
				break;
			case 8:
				switch (func_272(iParam0))
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
						func_351();
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
						func_352();
						break;
					case 66:
						func_353();
						func_354();
						break;
					case 67:
						if (!func_355(6))
						{
							func_356(6);
						}
						if (!func_355(3))
						{
							func_356(3);
						}
						if (func_331())
						{
							func_332(1534638301);
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
						if (func_327((*Global_1835011)[69]->f_1, 1))
						{
							func_357(0);
							func_348(40500);
						}
						else
						{
							func_357(0);
							func_348(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_272(iParam0))
				{
					case 0:
						switch (func_315(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_358(iParam0);
		func_359();
		switch (iVar0)
		{
			case 1:
				switch (func_272(iParam0))
				{
					case 4:
						func_360(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_360(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_360(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_360(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_360(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_360(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_360(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_361(iParam0);
						func_360(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_360(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_360(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_347(-2046502963, 1, 0))
						{
							func_318(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_360(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_360(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_360(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_361(iParam0) == 0)
						{
							func_360(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_360(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_301((*Global_1347702)[func_272(iParam0)]->f_12, 536870912))
				{
					func_362(11, 1);
				}
				switch (func_272(iParam0))
				{
					case 109:
						func_360(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_362(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_360(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_360(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_360(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_360(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_363(0, 10, 11, 2116153146))
				{
					func_360(iParam0, func_361(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_363(0, 7, 11, -379687487))
				{
					func_360(iParam0, func_364(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_363(0, 8, 11, -1386089015))
				{
					func_360(iParam0, func_364(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_363(0, 11, 11, -1952009645))
				{
					func_360(iParam0, func_364(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_363(0, 12, 11, 2065895756))
				{
					func_360(iParam0, func_364(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_194(iParam0) == 0)
			{
				if (func_193(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_193(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_196(func_195(iParam0), func_193(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_272(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_366(func_365(Global_1879514->f_1));
						if (iVar0 == 8 && func_272(iParam0) == 58)
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
						if (func_273(func_272(iParam0)) && func_301((*Global_1347702)[func_272(iParam0)]->f_12, 1))
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
			func_367(bParam2, iVar20);
		}
	}
	func_205(1);
	if ((bVar13 || func_129()) && (func_195(iParam0) == 1 || func_195(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_193(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_196(func_195(iParam0), func_193(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_195(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_363(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_368();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_192(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_191(iParam0))
	{
		if (!func_194(iParam0) == 5 && !func_194(iParam0) == 6)
		{
			if (bParam1)
			{
				func_202(iParam0, 6);
			}
			else
			{
				func_202(iParam0, 5);
			}
			func_207(iParam0);
		}
	}
	switch (func_195(iParam0))
	{
		case 1:
			switch (func_272(iParam0))
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
			switch (func_272(iParam0))
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
	vVar2 = { func_369((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_370(vVar2, uVar1, uVar0, 0);
	func_371(vVar2);
	Global_40.f_9.f_15 = func_372(vVar2, 0);
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
	func_373();
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
	func_374(Var10, 0);
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
	if (!func_190(iParam0))
	{
		return;
	}
	if (iParam0 != func_203(0))
	{
		return;
	}
	if (func_193(iParam0) == 0)
	{
	}
	iVar0 = func_195(iParam0);
	if (func_194(iParam0) == 3)
	{
		if (func_193(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_193(iParam0)))
		{
			if (func_195(iParam0) != 1 && func_195(iParam0) != 8)
			{
				func_196(func_195(iParam0), func_193(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_207(iParam0);
	func_40(1);
	func_204(0);
	func_202(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_310(1);
			func_311(15, 0, 1);
			break;
		case 4:
			func_311(10, 0, 1);
			break;
		case 8:
			func_311(10, 0, 1);
			break;
		case 9:
			func_311(10, 0, 1);
			break;
		case 2:
			func_311(10, 0, 1);
			break;
		case 6:
			func_311(10, 0, 1);
			break;
		case 5:
			func_311(10, 0, 1);
			break;
	}
	func_205(1);
}

void func_93()
{
	if (!is_itemset_valid(iLocal_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(iLocal_14))
	{
		iVar1 = get_indexed_item_in_itemset(iVar0, iLocal_14);
		iVar2 = _get_entity_from_item(iVar1);
		if ((does_entity_exist(iVar2) && _0x88ad6cc10d8d35b2(iVar2)) && !_0xa7e51b53309eac97(iVar2))
		{
			delete_entity(&iVar2);
		}
		iVar0++;
	}
	destroy_itemset(iLocal_14);
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
	if (func_375(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_376(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_376(&(Global_1347343->f_11), 16384);
	}
	if (func_377() >= 2)
	{
		if (!func_375(Global_1347343->f_11, 16384))
		{
			func_376(&(Global_1347343->f_11), 8);
		}
		func_211(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_229(Global_1935630, 2048);
	func_378(bParam5);
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
			func_379(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(cParam0->f_7375.f_804);
	}
	if (func_198(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_380(cParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_381(&(uParam0->f_7375));
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
	return func_382() != -1;
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
	func_383(cParam0);
	cParam0->f_634[0] = 57774;
	cParam0->f_634[1] = 57774;
	cParam0->f_637 = 0;
	func_385(cParam0, *uParam1);
	func_386(cParam0);
}

int func_109(char[4] cParam0)
{
	func_387(cParam0, 24);
	func_389(cParam0, func_388(0, 2));
	return 1;
}

char[] func_110(int iParam0)
{
	if (!func_189(iParam0))
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
			func_390(iVar0, iVar1);
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
	if (!func_247(iParam0))
	{
		return false;
	}
	return func_251(iParam0, 33554432);
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
				iVar3 = get_ped_index_from_entity_index(iVar2);
				if (bParam0)
				{
					if (_0x800df3fc913355f3(_0x32a1e3b83d501096(iVar3)))
					{
						_0x7b204f88f6c3d287(_0x32a1e3b83d501096(iVar3));
					}
					else
					{
						delete_ped(&iVar3);
					}
				}
				else
				{
					clear_ped_tasks(iVar3, 0, 0);
					if (bParam2)
					{
						_0xdf94844d474f31e5(iVar3);
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
	return func_391(cParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_392(&(cParam0->f_7375));
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
	return func_393(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_394(Param0, Param0.f_3);
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
	if (!func_395())
	{
		return false;
	}
	if (!func_327((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_327((*Global_1835011)[2]->f_1, 1) && func_327((*Global_1347702)[120]->f_15, 1)) && !func_327((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_327((*Global_1835011)[37]->f_1, 1) && !func_327((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_327((*Global_1835011)[57]->f_1, 1) && !func_327((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_327((*Global_1835011)[26]->f_1, 1) && !func_327((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_327((*Global_1835011)[62]->f_1, 1) && func_327((*Global_1835011)[63]->f_1, 1)) && !func_327((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_327((*Global_1835011)[75]->f_1, 1) && !func_327((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_327((*Global_1835011)[76]->f_1, 1) && !func_327((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_327((*Global_1835011)[40]->f_1, 1) && func_327((*Global_1835011)[41]->f_1, 1)) && !func_327((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_327((*Global_1835011)[62]->f_1, 1) && func_327((*Global_1835011)[63]->f_1, 1)) && !func_327((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_327((*Global_1835011)[65]->f_1, 1) && func_327((*Global_1835011)[66]->f_1, 1)) && !func_327((*Global_1835011)[67]->f_1, 1))
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
	if (func_396(vParam1))
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
	func_220(&(cParam0->f_603));
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
		return func_397();
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
		func_398(cParam0->f_607);
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
	func_399(&(cParam0->f_638));
	func_400(&(cParam0->f_819));
	func_401(&(cParam0->f_1020));
	func_402(&(cParam0->f_1081));
	func_403(&(cParam0->f_1126));
	func_404(&(cParam0->f_5147));
	func_405(&(cParam0->f_1124));
	func_406(&(cParam0->f_5188));
	func_407(&(cParam0->f_5239));
	func_408(&(cParam0->f_5249));
	func_409(&(cParam0->f_5265));
	func_410(&(cParam0->f_5286));
}

void func_138(char[4] cParam0)
{
	if (!is_itemset_valid(iLocal_14))
	{
		iLocal_14 = create_itemset(true);
	}
}

int func_139(char[4] cParam0)
{
	func_411(cParam0, iLocal_15, 67108863);
	func_411(cParam0, -1688693650, 62);
	func_411(cParam0, -550289621, 6);
	func_411(cParam0, 482936557, 6);
	func_411(cParam0, 50483426, 52);
	func_411(cParam0, -1273613561, 52);
	func_411(cParam0, 1491155834, 3);
	func_411(cParam0, -1902239317, 62);
	func_411(cParam0, 799179000, 524540);
	func_411(cParam0, 566746786, 524540);
	func_411(cParam0, -285977940, 254);
	func_411(cParam0, 822933632, 524288);
	func_411(cParam0, -1281909308, 524288);
	func_411(cParam0, -283162583, 524512);
	func_412(cParam0, -851220308, 62);
	func_413(cParam0, "utopia2_ride_vista", 1, 2, -1);
	func_413(cParam0, "utopia2_ride_assist", 1, 2, -1);
	func_413(cParam0, "utopia2_follow_coach", 30, 2, -1);
	func_413(cParam0, "utopia2_follow_crash", 30, 2, -1);
	func_413(cParam0, "utopia2_GuardRiverLeft", 6, 2, -1);
	func_413(cParam0, "utopia2_GuardRiverRight", 6, 2, -1);
	func_413(cParam0, "utopia2_ride_ambush1", 36, 2, -1);
	func_413(cParam0, "utopia2_ride_ambush2", 36, 2, -1);
	func_413(cParam0, "utopia2_cross_river", 30, 2, -1);
	func_413(cParam0, "utopia2_micah_coach_l", 64, 2, -1);
	func_413(cParam0, "utopia2_micah_coach_r", 64, 2, -1);
	func_414(cParam0, "script@story@UTP2@IG@IG_1_MICAH_COACH_REACT_WAIT@IG_1_MICAH_COACH_REACT_WAIT", iLocal_310[0], 8, 0, "pl_base", 0, 1);
	func_414(cParam0, "script@story@UTP2@IG@IG_2_RIFLE_FOUND_ON_COACH@IG_2_RIFLE_FOUND_ON_COACH", iLocal_310[1], 8, 0, "pl_How_Long", 0, 1);
	func_414(cParam0, "script@story@UTP2@IG@IG_4_AMBUSH_REACT@IG_4_AMBUSH_REACT", iLocal_310[2], 16, 0, "pl_WeAreGettingRobbed_both", 0, 1);
	func_414(cParam0, "script@story@UTP2@IG@IG_5@IG_5_LOOT_COACH", iLocal_310[5], 192, 0, "pl_reminders", 0, 1);
	func_415(cParam0, &(iLocal_310[0]), "pl_line_YouGettinOn_front", 8);
	func_415(cParam0, &(iLocal_310[0]), "pl_line_YouGettinOn_left", 8);
	func_415(cParam0, &(iLocal_310[0]), "pl_line_YouGettinOn_right", 8);
	func_415(cParam0, &(iLocal_310[0]), "pl_line_ComeOnMorgan_front", 8);
	func_415(cParam0, &(iLocal_310[0]), "pl_line_ComeOnMorgan_left", 8);
	func_415(cParam0, &(iLocal_310[0]), "pl_line_ComeOnMorgan_right", 8);
	func_415(cParam0, &(iLocal_310[1]), "pl_Come_On_Boy", 8);
	func_415(cParam0, &(iLocal_310[2]), "pl_WeAreGettingRobbed_Micah", 16);
	func_415(cParam0, &(iLocal_310[5]), "pl_micah_shoot_lock", 128);
	func_415(cParam0, &(iLocal_310[5]), "pl_player_shot_lock", 128);
	return 1;
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_416(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(char[4] cParam0)
{
}

void func_142(char[4] cParam0, int iParam1)
{
	func_417(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_269(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_270(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_418(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_255(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_419() };
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
	func_420(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_421(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_422(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_379(&(cParam0->f_10792), iParam1, sParam2, bParam6);
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
	if (!func_189(iParam0))
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
		if (func_423(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_424(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_423(cParam0, func_33(cParam0), 1))
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
	if (func_425(cParam0) < 1)
	{
		func_426(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_427(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
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
				func_428(cParam0);
			}
		}
		if (func_120(cParam0, 32))
		{
			func_429(cParam0);
		}
	}
	switch (func_425(cParam0))
	{
		case -1:
		case 0:
			func_430(cParam0, 1);
			break;
		case 1:
			if (func_431(cParam0))
			{
				if (func_120(cParam0, 4096))
				{
					func_430(cParam0, 2);
				}
				else
				{
					func_430(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_432(cParam0))
			{
				func_430(cParam0, 3);
			}
			break;
		case 3:
			if (func_433(cParam0))
			{
				func_430(cParam0, 4);
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
		func_434(cParam0, 0);
		return true;
	}
	if (func_435(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_434(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_435(cParam0);
		}
	}
	return false;
}

int func_162(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_10;
}

void func_163(int iParam0, bool bParam1, float fParam2)
{
	func_436(iParam0, bParam1, fParam2);
}

bool func_164()
{
	return func_437(1);
}

void func_165(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!is_entity_dead(cParam0->f_5408))
		{
			_0x1e017404784aa6a3(cParam0->f_5408, 1788443154);
		}
		_0x0d7fd6a55fd63aef(25, 3, 1);
		_0x0d7fd6a55fd63aef(19, 3, 1);
		_0x0d7fd6a55fd63aef(21, 3, 1);
	}
	else
	{
		_0x660a8f876df1d4f8(25);
		_0x660a8f876df1d4f8(21);
		_0x660a8f876df1d4f8(19);
		if (!is_entity_dead(cParam0->f_5408))
		{
			_0x2b4ce170de09f346(cParam0->f_5408, 1788443154);
		}
	}
}

bool func_166(int iParam0)
{
	if (-1829635046 == func_438(81053684))
	{
		if (func_439(iParam0))
		{
			return true;
		}
	}
	else if (func_440(-525676072, iParam0))
	{
		if (func_439(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_167()
{
	if (!func_441())
	{
		return 0;
	}
	if (!func_439(&iVar0))
	{
		return 0;
	}
	if (!func_442(iVar0))
	{
		return 0;
	}
	return func_443(iVar0, 0);
}

void func_168(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	func_444(iParam1, bParam2);
	if (bParam3 && func_445(cParam0, iParam1, &uVar0))
	{
		if (bParam2)
		{
			if (!func_446(cParam0, iParam1, 32))
			{
				func_447(cParam0, iParam1, 32);
			}
		}
		else if (func_446(cParam0, iParam1, 32))
		{
			func_448(cParam0, iParam1, 32);
		}
	}
}

bool func_169(int iParam0)
{
	if (does_entity_exist(Global_1360165[iParam0]) && decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
	{
		return true;
	}
	if ((((((((((((((((func_449(iParam0, 1) || func_449(iParam0, 128)) || func_449(iParam0, 256)) || func_449(iParam0, 512)) || func_449(iParam0, 1024)) || func_449(iParam0, 2048)) || func_449(iParam0, 4096)) || func_449(iParam0, 65536)) || func_449(iParam0, 16384)) || func_449(iParam0, 262144)) || func_449(iParam0, 524288)) || func_449(iParam0, 1048576)) || func_449(iParam0, 2097152)) || func_449(iParam0, 32768)) || func_449(iParam0, 131072)) || func_449(iParam0, 134217728)) || func_449(iParam0, 1073741824))
	{
		return true;
	}
	return false;
}

int func_170(int iParam0)
{
	if (func_449(iParam0, 1))
	{
		return 1;
	}
	else if (func_449(iParam0, 128))
	{
		return 128;
	}
	else if (func_449(iParam0, 256))
	{
		return 256;
	}
	else if (func_449(iParam0, 512))
	{
		return 512;
	}
	else if (func_449(iParam0, 1024))
	{
		return 1024;
	}
	else if (func_449(iParam0, 2048))
	{
		return 2048;
	}
	else if (func_449(iParam0, 4096))
	{
		return 4096;
	}
	else if (func_449(iParam0, 65536))
	{
		return 65536;
	}
	else if (func_449(iParam0, 16384))
	{
		return 16384;
	}
	else if (func_449(iParam0, 262144))
	{
		return 262144;
	}
	else if (func_449(iParam0, 524288))
	{
		return 524288;
	}
	else if (func_449(iParam0, 1048576))
	{
		return 1048576;
	}
	else if (func_449(iParam0, 2097152))
	{
		return 2097152;
	}
	else if (func_449(iParam0, 32768))
	{
		return 32768;
	}
	else if (func_449(iParam0, 131072))
	{
		return 131072;
	}
	else if (func_449(iParam0, 134217728))
	{
		return 134217728;
	}
	else if (func_449(iParam0, 1073741824))
	{
		return 1073741824;
	}
	return 0;
}

void func_171(int iParam0, int iParam1, bool bParam2)
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
				func_450(iParam0);
				func_451(iParam0, 0);
				break;
		}
		func_452(iParam0, iParam1);
		if (func_453(iParam1, &iVar0))
		{
			if (does_entity_exist(Global_1360165[iParam0]))
			{
				if (func_454(Global_1360165[iParam0], iVar0))
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
				func_450(iParam0);
				func_451(iParam0, 1);
				break;
		}
		func_455(iParam0, iParam1);
		func_456(iParam0, Global_1360165[iParam0], 1);
	}
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_457(iParam0, iParam1, iParam2, iParam3);
	func_458(iParam0);
}

void func_173(char[4] cParam0)
{
	if (!is_entity_dead(cParam0->f_5408))
	{
		_0x0eabf182fbb63d72(cParam0->f_5408, 6, 0);
	}
}

void func_174(bool bParam0)
{
	iVar0 = 932;
	while (iVar0 <= 952)
	{
		iVar1 = iVar0;
		if (bParam0)
		{
			func_459(iVar1);
		}
		else
		{
			func_460(iVar1);
		}
		iVar0++;
	}
}

void func_175(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam0);
	_0x74c2b3dc0b294102(iParam0);
}

void func_176(var uParam0)
{
	if (func_461(player_ped_id()))
	{
		task_clear_look_at(player_ped_id());
	}
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
		if (uParam0->f_2)
		{
			uParam0->f_2 = 0;
		}
	}
	uParam0->f_4 = -1;
	*uParam0 = 1;
}

void func_177()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

void func_178(char[4] cParam0)
{
	if (!is_entity_dead(cParam0->f_5408))
	{
		remove_entity_from_audio_mix_group(cParam0->f_5408, 0f);
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(iLocal_95[iVar0])))
		{
			remove_entity_from_audio_mix_group(&(iLocal_95[iVar0]), 0f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_entity_dead(&(iLocal_126[iVar0])))
		{
			remove_entity_from_audio_mix_group(&(iLocal_126[iVar0]), 0f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_entity_dead(&(iLocal_98[iVar0])))
		{
			remove_entity_from_audio_mix_group(&(iLocal_98[iVar0]), 0f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_entity_dead(&(iLocal_131[iVar0])))
		{
			remove_entity_from_audio_mix_group(&(iLocal_131[iVar0]), 0f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		if (!is_entity_dead(&(iLocal_103[iVar0])))
		{
			remove_entity_from_audio_mix_group(&(iLocal_103[iVar0]), 0f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(iLocal_112[iVar0])))
		{
			remove_entity_from_audio_mix_group(&(iLocal_112[iVar0]), 0f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_entity_dead(&(iLocal_115[iVar0])))
		{
			remove_entity_from_audio_mix_group(&(iLocal_115[iVar0]), 0f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(iLocal_136[iVar0])))
		{
			remove_entity_from_audio_mix_group(&(iLocal_136[iVar0]), 0f);
		}
		iVar0++;
	}
}

void func_179()
{
	_delete_volume(Local_16);
	_delete_volume(Local_16.f_1);
	_delete_volume(Local_16.f_2);
	_delete_volume(Local_16.f_3);
	_delete_volume(Local_16.f_4);
	_delete_volume(Local_16.f_5);
	_delete_volume(Local_16.f_6);
	_delete_volume(Local_16.f_7);
	_delete_volume(Local_16.f_8);
	_delete_volume(Local_16.f_9);
	_delete_volume(Local_16.f_10);
	_delete_volume(Local_16.f_11);
	_delete_volume(Local_16.f_12);
	_delete_volume(Local_16.f_13);
	_delete_volume(Local_16.f_14);
	_delete_volume(Local_16.f_15);
	_delete_volume(Local_16.f_16);
	_delete_volume(Local_16.f_17);
	_delete_volume(Local_16.f_18);
	_delete_volume(Local_16.f_19);
	_delete_volume(Local_16.f_20);
	_delete_volume(Local_16.f_21);
	_delete_volume(Local_16.f_22);
	_delete_volume(Local_16.f_23);
	_delete_volume(Local_16.f_24);
	_delete_volume(Local_16.f_25);
	_delete_volume(Local_16.f_26);
	_delete_volume(Local_16.f_27);
	_delete_volume(Local_16.f_28);
	_delete_volume(Local_16.f_29);
	_delete_volume(Local_16.f_30);
	_delete_volume(Local_16.f_31);
	_delete_volume(Local_16.f_32);
	_delete_volume(Local_16.f_33);
	_delete_volume(Local_16.f_34);
	_delete_volume(Local_16.f_35);
	_delete_volume(Local_16.f_36);
	_delete_volume(Local_16.f_37);
	_delete_volume(Local_16.f_38);
	_delete_volume(Local_16.f_39);
	_delete_volume(Local_16.f_40);
	_delete_volume(Local_16.f_41);
}

void func_180()
{
	iVar0 = 0;
	while (iVar0 <= (iLocal_146 - 1))
	{
		if (_is_base_a_cover_point(&(iLocal_146[iVar0])))
		{
			remove_cover_point(&(iLocal_146[iVar0]));
		}
		iVar0++;
	}
}

void func_181(char[4] cParam0)
{
	func_462(cParam0, cParam0->f_5408, 1);
	func_59(7);
	func_463(&iLocal_93);
	func_464(&uLocal_62);
	func_464(&uLocal_65);
	func_464(&uLocal_70);
	func_464(&uLocal_79);
	func_464(&uLocal_82);
}

void func_182(char[4] cParam0)
{
	func_465(&iLocal_144, 0);
	if (func_22(cParam0) == 0)
	{
		func_465(&iLocal_145, 1);
	}
	else
	{
		func_465(&iLocal_145, 0);
	}
}

void func_183(char[4] cParam0)
{
	if (func_22(cParam0) == 0)
	{
	}
	func_466();
}

void func_184(char[4] cParam0)
{
	if (func_22(cParam0) == 0)
	{
		func_467(iLocal_94, 6, 1, 0, 0);
		func_468(&iLocal_95, 1);
		func_468(&iLocal_98, 1);
		func_468(&iLocal_103, 1);
		func_468(&iLocal_112, 1);
		func_468(&iLocal_115, 1);
		func_468(&iLocal_126, 1);
		func_468(&iLocal_131, 1);
		func_468(&iLocal_136, 1);
		func_468(&iLocal_120, 1);
		func_468(&iLocal_123, 1);
	}
	else
	{
		func_467(iLocal_94, 6, 1, 0, 0);
		func_468(&iLocal_95, 0);
		func_468(&iLocal_98, 0);
		func_468(&iLocal_103, 0);
		func_468(&iLocal_112, 0);
		func_468(&iLocal_115, 0);
		func_468(&iLocal_126, 0);
		func_468(&iLocal_131, 0);
		func_468(&iLocal_136, 0);
		func_468(&iLocal_120, 0);
		func_468(&iLocal_123, 0);
	}
}

void func_185(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_469(iVar0);
		iVar0++;
	}
}

void func_186()
{
	func_470(&uLocal_346);
	func_470(&uLocal_349);
	func_470(&uLocal_449);
	func_470(&uLocal_352);
	func_470(&uLocal_355);
	func_470(&uLocal_358);
	func_470(&uLocal_367);
	func_470(&uLocal_361);
	func_470(&uLocal_364);
	func_471(&vLocal_370);
	func_471(&vLocal_377);
	func_471(&vLocal_390);
	func_471(&vLocal_415);
	func_471(&vLocal_422);
}

int func_187(int iParam0)
{
	return iParam0;
}

void func_188(int iParam0)
{
	if (!func_472(iParam0))
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

bool func_189(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_190(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_191(int iParam0)
{
	iVar0 = func_296(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_192(int iParam0)
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
		iVar0 = func_194(iParam0);
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

int func_193(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_194(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_473(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_195(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0;
	}
	return func_475(func_474(iParam0));
}

void func_196(int iParam0, int iParam1, int iParam2)
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

bool func_197(int iParam0, bool bParam1, bool bParam2)
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
		if (func_476())
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
		iVar0 = func_272(&(Global_1898164->f_1[0]));
		if (func_273(iVar0) && func_301((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_190(&(Global_1898164->f_1[0])))
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

bool func_198(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_199(int iParam0)
{
	switch (func_195(iParam0))
	{
		case 1:
			iVar0 = func_272(iParam0);
			return func_477(iVar0);
		case 8:
			iVar1 = func_272(iParam0);
			if (func_301((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_478(iVar1);
			}
			break;
	}
	return -1;
}

void func_200(bool bParam0)
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
		func_479(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_480();
		Global_1898077->f_9 = func_481(Global_1894899->f_2);
		func_482(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_201()
{
	if (!func_327((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_327((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_327((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_327((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_327((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_327((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_327((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_202(int iParam0, int iParam1)
{
	if (!func_190(iParam0))
	{
		return;
	}
	func_483(iParam0, iParam1);
}

int func_203(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_204(bool bParam0)
{
	if (!bParam0 && func_484(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_205(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_206(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_203(0) != iParam0)
	{
		return;
	}
	if (func_485(iParam0))
	{
		if (bParam1)
		{
			func_486(-525676072);
		}
		else
		{
			func_487(-525676072);
		}
	}
}

int func_207(int iParam0)
{
	return func_489(func_488(iParam0));
}

void func_208(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_209(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_210(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_211(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_212()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_213()
{
	return func_490(_0xc17f69e1418cd11f(3));
}

bool func_214()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_215(int iParam0)
{
	iParam0 = func_266(iParam0);
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

int func_216(int iParam0, int iParam1)
{
	if (!func_491(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_492(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_217(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_218(char* sParam0, bool bParam1)
{
	if (func_217(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_493(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_493(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_493(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_493(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_493(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_493(sParam0, 1);
		return true;
	}
	func_493(sParam0, 1);
	return false;
}

bool func_219(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_220(int iParam0)
{
	func_494(iParam0, 0f);
}

int func_221(int iParam0)
{
	if (!func_26(iParam0))
	{
		return round((iParam0->f_1 * 1000f));
	}
	if (func_495(iParam0))
	{
		return round((iParam0->f_2 * 1000f));
	}
	return (func_496() - round((iParam0->f_1 * 1000f)));
}

void func_222(bool bParam0, bool bParam1)
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
		func_497(0);
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

struct<4> func_223(int iParam0, int iParam1)
{
	return func_498(iParam0, iParam1);
}

void func_224(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_225(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_9;
}

void func_226(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_195(iParam0) == 1)
	{
		cVar0 = func_110(func_499(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_195(iParam0) == 8)
	{
		cVar0 = func_501(func_500(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_502(1, 1);
	func_503(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_211(1f);
}

void func_227(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_493(sParam0, 2);
}

void func_228(int iParam0, int iParam1)
{
	if (!func_504(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_229(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_230()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_231()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_232()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_233()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_234()
{
	return func_505(get_id_of_this_thread());
}

void func_235(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_506(bParam0);
}

void func_236()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_237(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_238()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_239(var uParam0)
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

void func_240(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_241(int iParam0)
{
	if (!func_507(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_242()
{
	func_508(64);
}

void func_243()
{
	Global_1310750->f_16072 = 0;
}

bool func_244()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_245(int iParam0)
{
	return func_246(23, iParam0);
}

bool func_246(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_509(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_510())
	{
		return func_509(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_509(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_247(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_248(int iParam0)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	return func_251(iParam0, 8);
}

void func_249(int iParam0, int iParam1)
{
	if (!func_247(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_250(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_251(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_252(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_253()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_251(iVar1, 1))
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
			else if (func_251(iVar1, 2))
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
				func_288(iVar1, 11);
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

bool func_254(var uParam0)
{
	if (func_511(uParam0, 1) || func_511(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_255(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_256(struct<2> Param0)
{
	if (!func_255(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_257(struct<2> Param0, int iParam2)
{
	if (!func_255(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_258(int iParam0)
{
	if (!func_512(iParam0))
	{
		return false;
	}
	if (!func_513(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_259(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_512(iParam1))
	{
		return;
	}
	if (!func_258(iParam1))
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
	if (does_entity_exist(iParam2))
	{
		func_514(cParam0, iParam2);
		func_515(iParam2);
	}
	func_516(iParam1);
	func_517(iParam1, 0);
	func_518(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_260(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_261(int iParam0)
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

int func_262(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_263(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_519(iParam0);
	if (func_520(iParam0))
	{
		if (func_262(iParam0) != iVar0)
		{
			return;
		}
	}
	func_521(iParam0);
	func_522(iParam0);
	iVar1 = func_215(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (!is_entity_dead(iVar1) && !is_ped_injured(iVar1))
		{
		}
		if (!_0x88ad6cc10d8d35b2(iVar1))
		{
			set_entity_as_mission_entity(iVar1, true, true);
		}
		iVar2 = get_entity_model(iVar1);
		if (_0xaa9f048dcf69b6dc(iVar2))
		{
			if (!func_523(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_524(iParam0);
	}
}

void func_264(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_525(iParam0))
	{
		return;
	}
	iVar0 = func_261(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_519(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_262(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_520(iVar0))
		{
			return;
		}
	}
	func_526(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_265(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_266(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_267(int iParam0, int iParam1)
{
	iParam0 = func_266(iParam0);
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

void func_268()
{
	if (func_527(0))
	{
		func_528(0);
	}
	if (func_527(1))
	{
		func_528(1);
	}
	if (func_527(5))
	{
		func_528(5);
	}
	if (func_527(6))
	{
		func_521(6);
	}
}

struct<2> func_269(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_270(int iParam0)
{
	Var0 = { func_269(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_271(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_272(int iParam0)
{
	if (!func_190(iParam0))
	{
		return -1;
	}
	return func_529(func_474(iParam0));
}

bool func_273(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_274(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_275(int iParam0, bool bParam1)
{
	iVar0 = func_530(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_531(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_531(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_531(iParam0)))
			{
				_uilog_remove_entry(2, func_531(iParam0));
			}
		}
	}
	func_532(iParam0, 4);
	func_532(iParam0, 8);
	func_532(iParam0, 16);
}

void func_276(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_273(iVar0))
		{
			if (func_274(iVar0, 4))
			{
				func_277(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_277(int iParam0, bool bParam1)
{
	if (!func_274(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_530(iParam0), func_531(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_530(iParam0), func_531(iParam0), 2, "");
		func_533(iParam0, 16);
	}
	else
	{
		if (func_274(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_530(iParam0), func_531(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_530(iParam0), func_531(iParam0), 0, "");
		}
		func_532(iParam0, 16);
	}
}

void func_278(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_274(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_530(iParam0), func_531(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_274(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_530(iParam0), func_531(iParam0), 1, "");
		}
		func_533(iParam0, 8);
	}
	else
	{
		if (func_274(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_530(iParam0), func_531(iParam0), 0, "");
		}
		func_532(iParam0, 8);
	}
}

int func_279(char[4] cParam0)
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

void func_280(int iParam0, int iParam1)
{
	if (func_527(0))
	{
		if (func_534(0))
		{
			func_535(0);
		}
	}
	if (func_527(1))
	{
		if (func_534(1))
		{
			func_535(1);
		}
	}
}

void func_281(char[4] cParam0)
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
		if (func_427(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_282(char[4] cParam0)
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

void func_283(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_536(iParam0, sParam4, iParam5);
	}
	func_537(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_284(int iParam0)
{
	if (!func_247(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_285()
{
	return &Global_1899515;
}

void func_286(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_287(int iParam0, int iParam1)
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

void func_288(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_289(int iParam0)
{
	if (!func_247(iParam0))
	{
		return;
	}
	if (func_538(iParam0))
	{
		func_539(iParam0);
	}
	else
	{
		func_540(iParam0);
	}
}

int func_290(int iParam0)
{
	if (func_541(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_291(int iParam0)
{
	if (func_542(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_292(int iParam0, int iParam1)
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

void func_293(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_543(Global_1310750[iVar0], iParam0))
		{
			if (!func_544(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_545(iVar0) < func_546(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_295(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_294(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_547();
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

void func_295(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_548(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_296(int iParam0)
{
	if (!func_190(iParam0))
	{
		return -1;
	}
	return func_194(iParam0);
}

void func_297(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_298(bool bParam0, int iParam1)
{
	if (!bParam0 && func_484(373691918))
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
	func_204(bParam0);
	return 1;
}

void func_299()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_512(iVar17))
		{
			iVar18 = func_549(iVar17);
			if (does_entity_exist(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				_0x88bc5f4aef77fc4e(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_470(&(Global_1359489->f_55));
	if (func_550(1777191912, 1))
	{
		func_551(1777191912, 1, 0);
	}
}

void func_300(int iParam0)
{
	if (!func_190(iParam0))
	{
		return;
	}
	func_553(iParam0, (func_552(iParam0) + shift_left(1, 16)));
}

bool func_301(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_302()
{
	return func_554() > 0;
}

void func_303(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_555(-1032423150, iParam1);
			break;
		case 18:
			func_555(294066959, iParam1);
			func_555(-1925639563, iParam1);
			func_555(-378582304, iParam1);
			func_555(-338306437, iParam1);
			break;
		case 20:
			func_555(437270255, iParam1);
			break;
		case 2:
			func_555(-304000413, iParam1);
			func_555(-533612796, iParam1);
			func_555(48036954, iParam1);
			break;
		case 23:
			func_555(193108691, iParam1);
			func_555(491732588, iParam1);
			func_555(671962088, iParam1);
			func_556(1);
			break;
		case 16:
			func_555(-1836056650, iParam1);
			func_555(-754657922, iParam1);
			func_555(-1752355838, iParam1);
			func_555(-1375324510, iParam1);
			break;
		case 59:
			func_555(-514392105, iParam1);
			func_555(-822060246, iParam1);
			if (func_557(146))
			{
				func_555(1372748575, iParam1);
			}
			func_556(1);
			break;
		case 76:
			func_555(1991352213, iParam1);
			if (func_558() == 0)
			{
				func_555(1852488616, iParam1);
			}
			else
			{
				func_555(-9866350, iParam1);
			}
			break;
		case 44:
			func_555(863852599, iParam1);
			func_555(1228374935, iParam1);
			func_555(1517889050, iParam1);
			func_555(830657578, iParam1);
			func_555(1901354958, iParam1);
			break;
		case 46:
			func_555(-582805654, iParam1);
			func_555(250378940, iParam1);
			func_555(-2143265426, iParam1);
			break;
		case 17:
			func_555(-941494139, iParam1);
			func_555(1641489521, iParam1);
			break;
		case 19:
			func_555(-1829423531, iParam1);
			func_555(-1590504752, iParam1);
			func_555(1357221321, iParam1);
			break;
		case 21:
			func_555(-1037992610, iParam1);
			func_555(-1286414399, iParam1);
			func_556(0);
			break;
		case 15:
			func_555(-1014460309, iParam1);
			func_555(-1030502825, iParam1);
			break;
		case 33:
			func_555(479388090, iParam1);
			func_555(-1396342239, iParam1);
			func_555(-619618632, iParam1);
			break;
		case 34:
			func_555(1193561641, iParam1);
			break;
		case 64:
			func_555(1363960851, iParam1);
			break;
		case 60:
			func_555(-1232453926, iParam1);
			func_555(-882833584, iParam1);
			break;
		case 73:
			func_555(2023205767, iParam1);
			break;
		case 74:
			func_555(-2135286513, iParam1);
			if (func_558() == 0)
			{
				func_555(33799444, iParam1);
			}
			else
			{
				func_555(-161343203, iParam1);
			}
			break;
		case 8:
			func_555(841639693, iParam1);
			func_555(358952323, iParam1);
			break;
		case 36:
			func_555(852538149, iParam1);
			func_555(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_555(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_555(1116039310, iParam1);
			}
			break;
		case 27:
			func_555(107633428, iParam1);
			func_555(335902282, iParam1);
			func_555(575673055, iParam1);
			func_555(-425944207, iParam1);
			break;
		case 28:
			func_555(-1941530250, iParam1);
			func_555(1399269304, iParam1);
			func_555(1839684664, iParam1);
			func_555(923168503, iParam1);
			func_555(-1485078322, iParam1);
			break;
		case 29:
			func_555(574995900, iParam1);
			func_555(-1691275407, iParam1);
			func_555(-1725307861, iParam1);
			break;
		case 31:
			func_555(-2108383238, iParam1);
			func_555(-1321828931, iParam1);
			func_555(-1632118592, iParam1);
			func_555(334938948, iParam1);
			break;
		case 4:
			func_555(115823701, iParam1);
			func_555(-1896939736, iParam1);
			func_555(-1830746356, iParam1);
			func_555(-1235169781, iParam1);
			func_556(0);
			break;
		case 6:
			func_555(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_555(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_555(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_555(-384176140, iParam1);
			}
			break;
		case 25:
			func_555(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_555(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_555(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_555(-1374849484, iParam1);
			}
			break;
		case 48:
			func_555(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_555(217772674, iParam1);
			}
			else
			{
				func_555(2071798160, iParam1);
			}
			if (func_559(51))
			{
				func_555(-792802286, iParam1);
			}
			break;
		case 49:
			func_555(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_555(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_555(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_555(1402120602, iParam1);
			}
			break;
		case 58:
			func_555(-1661934591, iParam1);
			break;
		case 50:
			func_555(-1713759426, iParam1);
			break;
		case 52:
			func_555(-314799932, iParam1);
			func_555(-462260432, iParam1);
			func_555(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_555(345256028, iParam1);
				func_555(-1635084094, iParam1);
			}
			else
			{
				func_555(114267347, iParam1);
			}
			break;
		case 32:
			func_555(615304157, iParam1);
			break;
		case 47:
			func_555(415434835, iParam1);
			break;
		case 69:
			func_555(1373465877, iParam1);
			if (func_327((*Global_1347702)[9]->f_15, 1))
			{
				func_555(-2058273527, iParam1);
			}
			break;
		case 70:
			func_555(451334985, iParam1);
			if (func_558() == 0)
			{
				func_555(-224150200, iParam1);
			}
			else
			{
				func_555(289012628, iParam1);
			}
			break;
		case 71:
			if (func_558() == 0)
			{
				func_555(-41692120, iParam1);
			}
			else
			{
				func_555(1537840678, iParam1);
			}
			break;
		case 37:
			func_555(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_555(1842132550, iParam1);
			}
			else
			{
				func_555(-785735240, iParam1);
			}
			func_555(-1605690566, iParam1);
			break;
		case 13:
			func_555(-731367459, iParam1);
			func_555(224176585, iParam1);
			func_555(-14545580, iParam1);
			break;
		case 53:
			func_555(1095274522, iParam1);
			break;
		case 54:
			func_555(-572027988, iParam1);
			break;
		case 56:
			func_555(1339307101, iParam1);
			func_555(2102267732, iParam1);
			break;
		case 57:
			func_555(710102686, iParam1);
			break;
		case 22:
			func_555(-1754368482, iParam1);
			func_555(-2071408557, iParam1);
			break;
		case 12:
			func_555(-181334543, iParam1);
			break;
		case 0:
			func_555(-2134669864, iParam1);
			func_555(-548289709, iParam1);
			func_555(-911271922, iParam1);
			func_555(-604455775, iParam1);
			break;
		case 1:
			func_556(1);
			break;
		case 3:
			if (func_338())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_555(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_555(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_304()
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

void func_305(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_555(-145926707, iParam1);
			func_555(-604922090, iParam1);
			func_555(-848690769, iParam1);
			break;
		case 1:
			func_555(-1477631591, iParam1);
			break;
		case 2:
			func_555(76112544, iParam1);
			break;
		case 9:
			func_555(1396404308, iParam1);
			func_555(-1357381228, iParam1);
			if (func_327((*Global_1835011)[69]->f_1, 1))
			{
				func_555(1902679064, iParam1);
			}
			else
			{
				func_555(-2146422425, iParam1);
			}
			break;
		case 22:
			func_555(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_555(-1934184559, iParam1);
				func_555(1281755988, iParam1);
			}
			else
			{
				func_555(-1745220872, iParam1);
				func_555(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_555(-1641504538, iParam1);
				func_555(-988014485, iParam1);
			}
			else if (func_557(26))
			{
				func_555(-343043950, iParam1);
				func_555(-640062214, iParam1);
			}
			else
			{
				func_555(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_555(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_555(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_555(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_555(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_555(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_555(1301690984, iParam1);
				}
			}
			else
			{
				func_555(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_555(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_555(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_555(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_555(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_555(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_555(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_555(-754570528, iParam1);
			}
			else
			{
				func_555(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_555(-2072125821, iParam1);
			}
			else
			{
				func_555(270040030, iParam1);
			}
			break;
		case 37:
			func_555(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_555(-505314737, iParam1);
				func_555(-1853052860, iParam1);
			}
			else
			{
				func_555(-1975624994, iParam1);
				func_555(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_555(1690231002, iParam1);
			}
			else
			{
				func_555(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_555(1225386280, iParam1);
			}
			else if (func_557(54))
			{
				func_555(-283235773, iParam1);
			}
			else
			{
				func_555(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_555(1355398007, iParam1);
			}
			else
			{
				func_555(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_555(574636806, iParam1);
			}
			else
			{
				func_555(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_555(821118338, iParam1);
			}
			else if (func_557(39))
			{
				func_555(846829260, iParam1);
			}
			else
			{
				func_555(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_361((*Global_1835011)[33]->f_1) == 1)
				{
					func_555(1422779093, iParam1);
				}
				else
				{
					func_555(-1769536986, iParam1);
				}
			}
			else
			{
				func_555(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_555(352134789, iParam1);
			}
			else if (func_557(43))
			{
				func_555(260723113, iParam1);
			}
			else
			{
				func_555(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_555(-457958799, iParam1);
			}
			else
			{
				func_555(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_557(41))
			{
				func_555(-546824600, iParam1);
			}
			else
			{
				func_555(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_555(1297261593, iParam1);
			}
			else
			{
				func_555(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_555(2068484886, iParam1);
			}
			else if (func_557(49))
			{
				func_555(-1489080639, iParam1);
				func_555(-2102244050, iParam1);
			}
			else
			{
				func_555(-1863040467, iParam1);
			}
			break;
		case 51:
			func_555(-2055943209, iParam1);
			break;
		case 58:
			if (func_327((*Global_1347702)[23]->f_15, 1))
			{
				func_555(1650066845, iParam1);
			}
			else
			{
				func_555(151370023, iParam1);
			}
			func_555(1426057961, iParam1);
			func_555(476379584, iParam1);
			break;
		case 59:
			func_555(-1638117866, iParam1);
			break;
		case 62:
			func_555(199541730, iParam1);
			break;
		case 63:
			func_555(1703485804, iParam1);
			func_555(-800449045, iParam1);
			break;
		case 65:
			func_555(-1678210868, iParam1);
			func_555(-1448238026, iParam1);
			func_555(-1200864845, iParam1);
			func_555(1473511536, iParam1);
			break;
		case 66:
			func_555(-1774490051, iParam1);
			func_555(-34645921, iParam1);
			func_555(174027075, iParam1);
			func_555(-1155999, iParam1);
			func_556(1);
			break;
		case 67:
			func_555(701612593, iParam1);
			func_555(-1069631343, iParam1);
			func_555(1673428882, iParam1);
			break;
		case 68:
			func_555(-739133286, iParam1);
			func_555(-2130089358, iParam1);
			func_555(2056190391, iParam1);
			func_555(1941753817, iParam1);
			func_556(0);
			break;
		case 70:
			func_555(-1217555753, iParam1);
			break;
		case 71:
			func_555(697048821, iParam1);
			break;
		case 73:
			func_555(-553148661, iParam1);
			break;
		case 75:
			func_555(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_555(1414263863, iParam1);
			}
			else
			{
				func_555(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_555(1835465936, iParam1);
				func_555(523715611, iParam1);
			}
			else if (func_557(78))
			{
				func_555(1420338873, iParam1);
			}
			else
			{
				func_555(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_555(10180941, iParam1);
			}
			else if (func_557(79))
			{
				func_555(768420635, iParam1);
			}
			else
			{
				func_555(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_555(-383601523, iParam1);
			}
			else
			{
				func_555(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_555(1606472408, iParam1);
			}
			else
			{
				func_555(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_555(-203571927, iParam1);
			}
			else
			{
				func_555(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_555(729886222, iParam1);
			}
			else
			{
				func_555(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_555(-714816362, iParam1);
			}
			else
			{
				func_555(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_555(-932932179, iParam1);
				func_555(-1458537240, iParam1);
			}
			else
			{
				func_555(-1764383885, iParam1);
				func_555(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_555(1741466706, iParam1);
			}
			else
			{
				func_555(1405815775, iParam1);
			}
			break;
		case 94:
			func_555(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_555(1905280979, iParam1);
			}
			else
			{
				func_555(-1966245299, iParam1);
			}
			func_555(721468880, iParam1);
			break;
		case 99:
			func_555(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_555(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_555(-1117781095, iParam1);
				}
				else
				{
					func_555(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_555(141494548, iParam1);
			}
			else
			{
				func_555(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_555(-369525697, iParam1);
			}
			else if (func_557(101))
			{
				func_555(1595015219, iParam1);
			}
			else
			{
				func_555(-321486961, iParam1);
			}
			break;
		case 103:
			func_555(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_555(793460477, iParam1);
				func_555(-1610242176, iParam1);
			}
			else if (func_557(103))
			{
				func_555(1830897187, iParam1);
			}
			else
			{
				func_555(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_555(1528309077, iParam1);
			}
			else if (func_557(104))
			{
				func_555(1864966105, iParam1);
			}
			else
			{
				func_555(-103336013, iParam1);
			}
			break;
		case 108:
			func_555(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_555(-1123227713, iParam1);
				func_555(-889574341, iParam1);
			}
			else
			{
				func_555(2065385917, iParam1);
				func_555(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_555(-887421691, iParam1);
			}
			else if (func_557(109))
			{
				func_555(-1318117949, iParam1);
			}
			else
			{
				func_555(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_555(284822762, iParam1);
				}
				else
				{
					func_555(-1425017554, iParam1);
				}
			}
			else if (func_557(110))
			{
				if (&Global_1357515 == 0)
				{
					func_555(553087292, iParam1);
				}
				else
				{
					func_555(-1766870331, iParam1);
					func_555(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_555(-1980598735, iParam1);
			}
			else
			{
				func_555(-442732098, iParam1);
				func_555(1955756409, iParam1);
			}
			break;
		case 115:
			func_555(394303528, iParam1);
			func_555(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_555(1182403394, iParam1);
			}
			else
			{
				func_555(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_555(924445424, iParam1);
			}
			else
			{
				func_555(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_555(430755273, iParam1);
				func_555(-1473879802, iParam1);
			}
			else
			{
				func_555(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_555(73885747, iParam1);
			}
			else if (func_557(117))
			{
				func_555(1559707913, iParam1);
			}
			else
			{
				func_555(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_555(-2103887972, iParam1);
			}
			else if (func_557(118))
			{
				func_555(-435828462, iParam1);
			}
			else
			{
				func_555(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_555(2054486196, iParam1);
			}
			else
			{
				func_555(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_555(-570086056, iParam1);
			}
			else if (func_557(121))
			{
				func_555(32337856, iParam1);
			}
			else
			{
				func_555(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_555(813493663, iParam1);
			}
			else if (func_557(122))
			{
				func_555(-2132763590, iParam1);
			}
			else
			{
				func_555(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_555(-66240572, iParam1);
				func_555(1563075046, iParam1);
			}
			else
			{
				func_555(-787011772, iParam1);
				func_555(-1523377438, iParam1);
			}
			break;
		case 127:
			func_555(61020800, iParam1);
			break;
		case 129:
			func_555(428985222, iParam1);
			break;
		case 131:
			func_555(-1393851036, iParam1);
			break;
		case 133:
			func_555(1559531342, iParam1);
			break;
		case 134:
			func_555(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_555(-1374407408, iParam1);
				}
				else
				{
					func_555(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_555(-472672138, iParam1);
				}
				else
				{
					func_555(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_555(-1678710489, iParam1);
			}
			else
			{
				func_555(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_555(1717582460, iParam1);
			}
			else
			{
				func_555(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_555(1568112362, iParam1);
				func_555(1388317526, iParam1);
			}
			else if (func_557(136))
			{
				func_555(-1597534828, iParam1);
				func_555(-1207918353, iParam1);
			}
			else
			{
				func_555(-1940891082, iParam1);
				func_555(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_555(448334530, iParam1);
				func_555(2145375502, iParam1);
			}
			else
			{
				func_555(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_555(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_555(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_555(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_555(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_555(-66616327, iParam1);
			}
			else
			{
				func_555(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_555(1862916706, iParam1);
			}
			else if (func_557(147))
			{
				func_555(675105199, iParam1);
			}
			else
			{
				func_555(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_555(174409701, iParam1);
			}
			else if (func_557(148))
			{
				func_555(-1730895475, iParam1);
			}
			else
			{
				func_555(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_555(1295237052, iParam1);
			}
			else if (func_557(149))
			{
				func_555(-788577684, iParam1);
			}
			else
			{
				func_555(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_306(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_195(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_499(iParam0);
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
					if (func_361((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_272(iParam0);
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
			iVar3 = func_272(iParam0);
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

int func_307(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_560(iParam0);
	iVar3 = func_561(iParam0);
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
				iVar1 = func_285();
				func_334(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_562(iParam0, 1);
			if (func_563(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_564(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_565(1, iParam0);
				}
				else
				{
					func_566(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_308(int iParam0, int iParam1)
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

int func_309(int iParam0, int iParam1, int iParam2)
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

void func_310(bool bParam0)
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

void func_311(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_567(iParam0, iParam1, bParam2);
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

int func_312(int iParam0, int iParam1)
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

bool func_313(int iParam0)
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

void func_314(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_568(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_569(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_570(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_571(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_570(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_315(int iParam0)
{
	if (!func_190(iParam0))
	{
		return -1;
	}
	return func_572(func_474(iParam0));
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_317()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_573(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_318(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_574(iParam0, 0))
	{
		return false;
	}
	if (!func_575(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_576(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_577(iParam0, bParam2);
	iVar2 = 0;
	if (func_578(iParam0, 0, 0) == 0)
	{
		if (func_579(iParam0))
		{
			iVar5 = func_580(iParam0);
			iVar6 = func_581(iVar5);
			iVar7 = func_582(iVar6) + 1;
			func_583(iVar5);
			if (func_584(38))
			{
				func_325(483, 0);
			}
			else
			{
				func_325(482, 0);
			}
			if (iVar7 == func_585(iVar6))
			{
				func_318(func_586(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_395() && func_587(4))
				{
					if (func_395() && (func_588(38) || func_584(38)))
					{
						func_590(38, func_586(iVar6), 0, 0, func_589(), 0, -1, 0);
						func_591(2);
					}
					else
					{
						func_590(38, func_586(iVar6), 0, 0, func_589(), 0, -1, 0);
						func_591(1);
					}
				}
			}
			else if (func_395() && func_587(4))
			{
				if (func_395() && (func_588(38) || func_584(38)))
				{
					func_590(38, 0, 0, 0, func_589(), 0, -1, 0);
					func_591(2);
				}
				else
				{
					func_590(38, 0, 0, 0, func_589(), 0, -1, 0);
					func_591(1);
				}
			}
			if (func_395() && func_587(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_395() && (func_588(38) || func_584(38)))
					{
						func_592(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_592(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_593(iParam0) == -1037537535)
	{
		if ((!func_594(iParam0, 866047851) && !func_594(iParam0, -1979000645)) && !func_594(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_595(iParam0, 8388608) && !func_596(28))
	{
		func_597(28);
	}
	if (!bVar3)
	{
		if (func_594(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_598(iParam0) == -1447088266)
			{
				iVar1 = func_600(func_599(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_601(iVar1);
					}
					if (func_602(0) && func_603(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_604(iParam0, iVar0, iParam5);
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
						func_601(iParam0);
					}
					if (func_602(0) && func_603(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_604(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_593(iParam0) == -427144552)
		{
			if (!func_605(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_593(iParam0) == 307971639 && func_606(iParam0))
		{
			if (!func_607(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_594(iParam0, 866047851))
		{
			func_608(iParam0);
		}
		else if (func_594(iParam0, 2000026003))
		{
			func_609(iParam0);
		}
		else if (func_594(iParam0, -103750053))
		{
			func_95(func_610(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_611(-717883113, 2091222383), iVar0);
		}
		else if (func_594(iParam0, -121341956) && !func_594(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_327((*Global_1835011)[4]->f_1, 1))
				{
					func_325(498, 0);
				}
			}
			if (func_594(iParam0, -2017733358) || func_594(iParam0, -1369131378))
			{
				func_612(iParam0);
			}
		}
		else if (func_594(iParam0, -136654233))
		{
			if (func_594(iParam0, -1021472396))
			{
			}
		}
		else if (func_594(iParam0, -1466706512) && func_594(iParam0, 1147021565))
		{
			func_325(484, 0);
		}
		else if (func_594(iParam0, 1147021565) && func_594(iParam0, -524514947))
		{
		}
		else if (func_594(iParam0, 554195525))
		{
		}
		else if (func_594(iParam0, 589988438))
		{
			if (func_613())
			{
				func_614(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_594(iParam0, 787083290) && func_594(iParam0, 949916894))
		{
			func_615(iParam0);
		}
		else if (func_594(iParam0, -1718133314))
		{
			func_616(iParam0);
		}
		else if (func_594(iParam0, -1738650224))
		{
			func_617(iParam0);
		}
		else if (func_594(iParam0, -1112814642) && func_594(iParam0, 949916894))
		{
			func_618(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_594(iParam0, 1841149704))
		{
			func_619();
		}
		else if (func_594(iParam0, 606799272))
		{
			func_620(iParam0, iParam1);
			func_621(iParam0);
		}
		else if (func_594(iParam0, -1112814642) && func_594(iParam0, -1697809989))
		{
			func_622(iParam0, 0, 0, 0);
		}
		else if (func_594(iParam0, -2017733358) || func_594(iParam0, -1369131378))
		{
			func_612(iParam0);
		}
		else if (func_594(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_623(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_594(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_347(215778062, 1, 0))
					{
						func_318(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_347(670273567, 1, 0))
					{
						func_318(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_347(-967317137, 1, 0))
					{
						func_318(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_347(526074061, 1, 0))
					{
						func_318(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_347(-1045488665, 1, 0))
					{
						func_318(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_347(471514780, 1, 0))
					{
						func_318(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_594(iParam0, -839724752) && func_595(iParam0, 4))
		{
			if (!func_584(42))
			{
				func_624(iParam0);
			}
		}
		else if (func_594(iParam0, 1399091007))
		{
			func_625(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_594(iParam0, 1248798204))
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
				func_318(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_597(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_626(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_627(&iVar9, 0))
				{
					func_603(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_626(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_325(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_628();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_629();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_630();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_631();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_632();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_633(499813453, 854119837, 0);
				func_634(499813453, 0);
				func_635(1);
				break;
			case 2127812557:
				func_633(499813453, -1292544588, 0);
				func_634(499813453, 0);
				func_635(2);
				break;
			case 808991383:
				func_633(499813453, -1003325394, 0);
				func_634(499813453, 0);
				func_635(4);
				break;
			case 1134518629:
				func_633(666607663, -335460405, 0);
				func_634(666607663, 0);
				func_636(1);
				break;
			case 902940106:
				func_633(666607663, 903797617, 0);
				func_634(666607663, 0);
				func_636(2);
				break;
			case -418174898:
				func_633(666607663, 669728650, 0);
				func_634(666607663, 0);
				func_636(4);
				break;
			case -648114971:
				func_633(-220219788, 1214120047, 0);
				func_634(-220219788, 0);
				func_637(1);
				break;
			case 211153747:
				func_633(-220219788, 655769340, 0);
				func_634(-220219788, 0);
				func_637(2);
				break;
			case -32876996:
				func_633(-220219788, 885316185, 0);
				func_634(-220219788, 0);
				func_637(4);
				break;
			case 1191437462:
				func_633(218622660, -1491419385, 0);
				func_634(218622660, 0);
				func_638(1);
				break;
			case 1119149048:
				func_633(218622660, 1809565830, 0);
				func_634(218622660, 0);
				func_638(2);
				break;
			case 506073827:
				func_633(390004462, -628873767, 0);
				func_634(390004462, 0);
				func_639(1);
				break;
			case -1876986168:
				func_633(390004462, -405421956, 0);
				func_634(390004462, 0);
				func_639(2);
				break;
			case 2142623221:
				func_633(390004462, -1108972386, 0);
				func_634(390004462, 0);
				func_639(4);
				break;
			case 1508215381:
				func_633(6410548, 1053716392, 0);
				func_634(6410548, 0);
				func_640(1);
				break;
			case -888935280:
				func_633(6410548, 806507056, 0);
				func_634(6410548, 0);
				func_640(2);
				break;
			case -1252474566:
				func_633(6410548, 1571925350, 0);
				func_634(6410548, 0);
				func_640(4);
				break;
			case -1465702449:
				func_633(6410548, 1330352282, 0);
				func_634(6410548, 0);
				func_640(8);
				break;
			case -21093309:
				func_642(242, func_641(-21093309), 0);
				break;
			case 204375141:
				func_642(240, func_641(204375141), 0);
				break;
			case -417963070:
				func_642(241, func_641(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_643(594, 1934060482, 1, 1);
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
					func_643(594, 1110018439, 1, 1);
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
					func_643(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_643(594, -1228016946, 1, 1);
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
					func_643(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_643(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_325(488, 0);
				break;
			case 1613651027:
				func_325(491, 0);
				break;
			case -885810591:
				func_325(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_318(func_644(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_318(func_645(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_596(1))
				{
					func_325(487, 0);
				}
				break;
			case -898386032:
				func_325(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_325(496, 0);
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
		func_646(&iVar10);
		if (!func_647(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_602(0))
		{
			return true;
		}
		if (func_593(iParam0) == -1037537535)
		{
			func_648(iParam0);
		}
		if (func_594(iParam0, -1979000645))
		{
			func_649(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_602(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_318(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_650(iVar2, 0);
		}
	}
	Var35 = { func_651(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_652(iParam0);
	if (fParam6 > 0f)
	{
		if (func_594(iParam0, -839724752))
		{
			func_653(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_654(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_319(int iParam0)
{
	if (func_594(iParam0, 1989861793))
	{
		iVar0 = func_655(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_656(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_657(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_658(iVar14, iVar1);
					if (iVar15 != iParam0 && func_574(iVar15, 0))
					{
						if (func_659(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_660(iVar1);
				if (bVar13)
				{
					func_661(iParam0);
				}
				else
				{
					func_325(306, 0);
				}
			}
		}
	}
}

void func_320()
{
	if (func_20() != -1)
	{
		return;
	}
	func_662();
	func_663();
	func_664();
	func_665();
	func_666();
	func_667();
	func_668();
}

void func_321(int iParam0)
{
	func_669(iParam0, 1, 1, -142743235, 1);
	if (func_670(iParam0))
	{
		func_671(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_673(func_672(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_674(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_675() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_676(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_676(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_677(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_677(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_677(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_677(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_677(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_677(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_677(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_677(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_677(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_678(iVar8, iVar0))
				{
					func_679(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_678(iVar8, iVar0))
		{
			func_679(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_322()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_678(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_675() == -2125499975 || func_675() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_679(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_679(&vVar2, iVar5, iVar0);
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

void func_323()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_573(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_324(int iParam0, bool bParam1)
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
			if ((func_327((*Global_1835011)[59]->f_1, 1) || func_327((*Global_1347702)[1]->f_15, 1)) || func_191((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_550(403634348, 1))
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

void func_325(int iParam0, bool bParam1)
{
	func_680(iParam0, &iVar0, &iVar1);
	if (!func_681(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_682(iVar0, iVar1);
}

void func_326(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_673(iParam0, 1);
	func_683(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_683(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_684(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_683(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_683(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_327(int iParam0, bool bParam1)
{
	switch (func_296(iParam0))
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

void func_328()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_573(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_329()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_573(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_330(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_685(iParam1, 1, 0) };
		iParam3 = func_686(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_687(iParam3);
	return func_626(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_331()
{
	return _unlock_is_unlocked(99890643);
}

void func_332(int iParam0)
{
	if (!func_688(iParam0))
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

bool func_333(int iParam0, int iParam1)
{
	if (!func_689(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_690(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_691(Global_40.f_9910[iParam1], 4);
}

void func_334(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_692(*iParam0);
	iVar1 = func_693(*iParam0);
	iVar2 = func_694(*iParam0);
	iVar3 = func_695(*iParam0);
	iVar4 = func_696(*iParam0);
	iVar5 = func_697(*iParam0);
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
	iVar6 = func_698(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_698(iVar1, iVar0);
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
	func_699(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_335(int iParam0, int iParam1, bool bParam2)
{
	if (!func_689(iParam0))
	{
		return;
	}
	if (!func_700(iParam1))
	{
		return;
	}
	if (func_701(iParam1, 1))
	{
		return;
	}
	iVar0 = func_690(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_333(iParam0, -1))
	{
		return;
	}
	else
	{
		func_702(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_197(0, 0, 1))
		{
			func_367(0, 17);
		}
	}
}

void func_336()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_573(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_337()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_573(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_338()
{
	return _unlock_is_unlocked(-121456797);
}

void func_339()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_573(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_340()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_573(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_341()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_573(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_342()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_573(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_573(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_573(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_345(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_346(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_347(int iParam0, int iParam1, bool bParam2)
{
	if (!func_574(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_593(iParam0);
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
		if (!func_703(iParam0, 1))
		{
			return false;
		}
	}
	return func_578(iParam0, 0, bParam2) >= iParam1;
}

void func_348(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_704(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_704(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_349()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_573(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_350()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_573(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_351()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_573(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_352()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_573(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_353()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_573(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_354()
{
	if (func_705() > 1)
	{
		func_706();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_325(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_325(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_325(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_325(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_325(452, 1);
		}
	}
}

bool func_355(int iParam0)
{
	return func_707(iParam0, 4, 1);
}

void func_356(int iParam0)
{
	func_708(iParam0, 4, 1);
}

void func_357(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_358(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_190(iParam0))
	{
		return;
	}
	func_229(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_195(iParam0))
	{
		case 1:
			func_95(func_611(909007663, -587839005), 1);
			iVar0 = func_272(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_477(iVar0))
			{
				case 0:
					func_95(func_611(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_611(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_611(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_611(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_611(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_611(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_611(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_611(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_611(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_611(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_611(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_272(iParam0);
			if (func_301((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_301((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_301((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_611(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_611(909007663, -2049243343), 1);
				}
			}
			if (func_301((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_478(iVar1))
				{
					case 0:
						func_95(func_611(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_611(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_611(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_611(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_611(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_611(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_611(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_611(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_611(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_611(909007663, 532323983), 1);
				}
			}
			else if (func_301((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_301((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_301((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_611(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_611(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_359()
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
	else if (func_198(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_197(0, 0, 1) || func_709()) || func_129())
	{
		return;
	}
	iVar0 = func_201();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_710(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_711(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_711(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_712(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_367(0, -1);
	}
	if (iVar2 > 0)
	{
		func_713("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_714(1, 0);
	Global_1956575->f_4 = 1;
}

void func_360(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_283(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_715(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_361(int iParam0)
{
	if (!func_190(iParam0))
	{
		return -1;
	}
	return func_716(iParam0);
}

int func_362(int iParam0, int iParam1)
{
	if (!func_717(iParam0))
	{
		return 0;
	}
	if (!func_395())
	{
		return 0;
	}
	if (!func_718(iParam0, &iVar0, &iVar1))
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

int func_363(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_719())
	{
		iVar2 = func_719();
	}
	iVar5 = func_720(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_474(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_474(iVar6) == 0)
			{
				return func_721(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_474(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_474(iVar6) == 0)
			{
				return func_721(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_721(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_722(1330954593, 0, -1);
		case 1:
			return func_722(1330954593, 0, -1);
		case 2:
			return func_722(1330954593, 0, -1) * 2;
		case 4:
			return func_722(1330954593, 0, -1);
		case 5:
			return func_722(1330954593, 0, -1);
		case 6:
			return func_722(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_722(1330954593, 0, -1) * 3;
		case 9:
			return func_722(1330954593, 0, -1) * 3;
		case 10:
			return func_722(1330954593, 0, -1) * 3;
		case 11:
			return func_722(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_365(int iParam0)
{
	if (!func_190(iParam0))
	{
		return cVar0;
	}
	switch (func_195(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_499(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_272(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_363(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_366(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_368();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_195(Global_1879514->f_1) == 1)
			{
				func_362(5, 1);
			}
			else if (func_195(Global_1879514->f_1) == 8 && (func_301((*Global_1347702)[func_272(Global_1879514->f_1)]->f_12, 1) || func_301((*Global_1347702)[func_272(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_362(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_367(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_723(&Global_0, 8);
	}
	if (!func_395() || func_20() != -1)
	{
		return;
	}
	func_723(&Global_0, 1);
}

int func_368()
{
	iVar0 = func_724(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_725(iVar0))
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

Vector3 func_369(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_726(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_396(vVar0))
	{
		vVar0 = { func_726(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_370(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_371(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_372(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_247(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_727(vParam0, iParam3);
}

void func_373()
{
	func_728();
	func_729();
	func_730();
	_0x11b0a0b282fa9b10(0);
}

void func_374(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_731(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_732(&(Param0.f_10)))
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
			func_733(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_375(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_376(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_377()
{
	return Global_1572864->f_12;
}

void func_378(bool bParam0)
{
	if (func_490(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_734();
	Var1.f_3.f_3 = iVar0;
	if ((!func_735(Global_1347343->f_2) && !func_375(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_736();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_375(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_737();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_375(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_738();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_739(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_740(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_376(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_376(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_379(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_741(uParam0);
	iVar0 = func_742(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_743(iParam1);
		}
		iVar0 = func_744(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_745(uParam0);
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
		iVar0 = func_745(uParam0);
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
	func_746(uParam0, 2);
}

void func_380(char[4] cParam0, int iParam1)
{
	func_747(&(cParam0->f_7375), iParam1);
}

int func_381(var uParam0)
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

int func_382()
{
	return func_499(func_748());
}

void func_383(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_397())
	{
		func_749(cParam0, iVar0);
		iVar0++;
	}
}

int func_384(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_385(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_386(char[4] cParam0)
{
	func_755(cParam0, 0, 1, 108644, 108689, 108999, 109196, 109502, "UTP2_INT", 2, -1);
	func_755(cParam0, 1, 3, 109698, 109743, 109968, 110218, 111815, "UTP2_MCS1", 10, -1);
	func_755(cParam0, 2, 5, 111926, 111946, 112475, 112779, 113557, "", 8, -1);
	func_755(cParam0, 3, 4, 113583, 113603, 113989, 114151, 116750, "", 0, -1);
	func_755(cParam0, 4, 5, 116880, 116900, 117127, 117823, 118672, "", 0, -1);
	func_755(cParam0, 5, 6, 118704, 118749, 119433, 119997, 120784, "UTP2_MCS2", 3, -1);
	func_755(cParam0, 6, 7, 120820, 120829, 120849, 121210, 122677, "", 0, -1);
	func_755(cParam0, 7, 25, 122730, 122739, 122764, 123239, 123692, "", 0, -1);
	func_755(cParam0, 25, 26, 123724, 123769, 123807, 123863, 123897, "UTP2_EXT", 2, -1);
}

void func_387(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

Vector3 func_388(int iParam0, int iParam1)
{
	return func_796(iParam0, iParam1);
}

void func_389(char[4] cParam0, vector3 vParam1)
{
	cParam0->f_5413 = { vParam1 };
}

void func_390(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_391(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_392(var uParam0)
{
	if (!func_797(uParam0, 4))
	{
		if (func_798(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_799(uParam0) };
		if (!func_798(uParam0->f_860, 524288))
		{
			func_800(&(uParam0->f_872));
		}
		func_801(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_802(uParam0, 0f, 0f, 0f);
		func_803(uParam0);
		func_804(uParam0);
		func_805(uParam0, 0f, 0f, 0f, 0, 0);
		func_806(uParam0);
		func_747(uParam0, 4);
		func_807(uParam0, 0);
		func_808(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_393(int iParam0)
{
	if (func_809(iParam0))
	{
		return func_810(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_394(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_502(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_811(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_812(0, 0);
		if (func_688(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_813(1, 0);
		}
	}
	else
	{
		func_813(1, 0);
	}
	func_209(0);
	func_503(0, vParam0, uParam3);
	return 1;
}

bool func_395()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_396(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_397()
{
	return 26;
}

void func_398(int iParam0)
{
	if (!func_189(iParam0))
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

void func_399(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_814((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_400(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_815((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_401(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_816((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_402(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_817((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_818((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_819((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_405(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_406(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_820((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_821((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_408(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_822((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_409(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_823((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_410(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_824((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_411(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_825(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_826(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_412(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_827(&(cParam0->f_5147), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_828(&(cParam0->f_5147));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5147[iVar0] = iParam1;
	cParam0->f_5147[iVar0]->f_3 = (cParam0->f_5147[iVar0]->f_3 || iParam2);
}

void func_413(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_829(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_830(&(cParam0->f_819));
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

void func_414(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_831(iParam3, func_33(cParam0)) && !func_831(iParam3, func_35(cParam0)))
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
	iVar0 = func_832(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_833(&(cParam0->f_1126));
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
		func_834(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_415(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_831(iParam3, func_33(cParam0)) && !func_831(iParam3, func_35(cParam0)))
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
	iVar0 = func_835(&(cParam0->f_1126), iParam1);
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

void func_416(int iParam0, int iParam1)
{
	func_836(iParam0, iParam1);
}

void func_417(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_837((*uParam0)[iVar0]))
		{
			if (func_831((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_838((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_839((*uParam1)[iVar0]))
		{
			if (func_831((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_840((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_841((*uParam2)[iVar0]))
		{
			if (func_831((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_842((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_843((*uParam3)[iVar0]))
		{
			if (func_831((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_844((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_831(uParam4->f_1, iParam12))
	{
		func_845(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_846((*uParam5)[iVar0]))
		{
			if (func_831((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_847((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_846((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_848((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_831((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_849((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_850((*uParam6)[iVar0]))
		{
			if (func_831((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_851((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_852((*uParam7)[iVar0]))
		{
			if (func_831((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_853((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_854((*uParam8)[iVar0]))
		{
			if (func_831((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_855((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_856((*uParam9)[iVar0]))
		{
			if (func_831((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_857((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_858((*uParam10)[iVar0]))
		{
			if (func_831((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_859((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_860((*uParam11)[iVar0]))
		{
			if (func_831((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_861((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_418(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_862(uParam0, iParam1, sParam2))
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

struct<2> func_419()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_420(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_421(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_422(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_863(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_379(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_423(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_864(cParam0->f_607)}, 3);
			if (func_865(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_866(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_867(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_424(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_846((*uParam0)[iVar0]))
		{
			if (func_831((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_868((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_869((*uParam0)[iVar0]))
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

int func_425(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_426(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_870(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_871(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_427(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_120(cParam0, 16777216))
		{
			if (!func_872(cParam0))
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
				iVar12 = func_873(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_874(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_875(iVar12))
							{
								_0x0348469daa17576c(iVar12);
							}
							clear_ped_tasks_immediately(iVar12, false, true);
							_set_entity_coords_and_heading(iVar12, cParam0->f_5417, cParam0->f_5420, true, false, true);
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
		if (func_876(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			set_network_id_exists_on_all_machines(iVar17, true);
			iVar13 = net_to_ped(iVar17);
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
		iVar13 = func_873(&iVar29, &Var18);
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
	if (does_entity_exist(iVar13))
	{
		cParam0->f_5411 = iVar13;
		cParam0->f_5412 = iVar13;
		func_877(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_875(iVar13) || func_878(Global_35, iVar13, 1, 1) > 200f) && !func_396(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_879(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_428(char[4] cParam0)
{
	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_880(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_881(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_429(char[4] cParam0)
{
	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_882(cParam0);
			if (func_883(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_884(cParam0, 2097152);
				func_265(cParam0, 16384);
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
			func_882(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_885(cParam0, Var0))
			{
				if (func_425(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_425(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(cParam0, 128);
		}
	}
}

void func_430(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_431(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_886(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_426(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_427(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_864(cParam0->f_607)}, 3);
		if (func_887(&(cParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_888(&(cParam0->f_13115)) < 30f)
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

bool func_432(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_888(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_889()) && func_888(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(cParam0->f_607)));
			func_265(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_890(0, 0);
		func_265(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_433(char[4] cParam0)
{
	_0xc6dcc2a3a8825c85(1);
	func_891(cParam0);
	if (func_892(cParam0))
	{
	}
	else
	{
		return false;
	}
	if (func_893(cParam0))
	{
	}
	else
	{
		return false;
	}
	func_894();
	func_895();
	iLocal_268 = 0;
	iLocal_269 = 0;
	iLocal_270 = 0;
	iLocal_309 = 0;
	fLocal_318 = 1f;
	func_896(&iLocal_163);
	func_896(&iLocal_237);
	func_896(&iLocal_247);
	func_896(&iLocal_253);
	func_897(&uLocal_455, 0);
	func_898(&uLocal_456, 0);
	func_899(&uLocal_488, 0);
	func_900(&uLocal_457, 0);
	func_900(&uLocal_460, 0);
	func_900(&uLocal_465, 0);
	func_900(&uLocal_474, 0);
	func_900(&uLocal_477, 0);
	func_900(&uLocal_482, 0);
	func_900(&uLocal_485, 0);
	func_901(&uLocal_489, 0);
	func_901(&uLocal_490, 0);
	func_901(&uLocal_491, 0);
	func_174(0);
	func_902(Local_16, 0, 0, 262400);
	_0x2fcd528a397e5c88(Local_16.f_41, 2442170);
	_0x2161278c6322f740(4096, 0, 0, -1, -1, 0);
	if (_does_volume_exist(Local_16.f_1))
	{
		_0x18262cafebb5fbe1(Local_16.f_1, 4096, 0, 0, -1, -1, 0);
	}
	if (_does_volume_exist(Local_16.f_1))
	{
		_0xb56d41a694e42e86(Local_16.f_1, 4096, 0, 0, -1, -1, 0);
	}
	if (_does_volume_exist(Local_16.f_2))
	{
		_0x18262cafebb5fbe1(Local_16.f_2, 512, 0, 0, -1, -1, 0);
	}
	if (_does_volume_exist(Local_16.f_2))
	{
		_0xb56d41a694e42e86(Local_16.f_2, 512, 0, 0, -1, -1, 0);
	}
	func_903(Local_16.f_3, 0, 0, 0, 0, 0);
	func_904(-857562377, 0, 0, 1103626240);
	if (func_33(cParam0) >= 6 && func_33(cParam0) <= 25)
	{
		func_468(&iLocal_139, 0);
	}
	if (func_33(cParam0) >= 6)
	{
		func_905(-7594117);
		func_906(1388161943);
	}
	func_907(cParam0);
	func_909(cParam0, 146497);
	func_911(cParam0, 146650);
	return true;
}

void func_434(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_435(char[4] cParam0)
{
	func_912(cParam0);
	func_913(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_883(cParam0);
		}
	}
	func_914(cParam0);
	func_915(cParam0);
	func_916(cParam0);
	func_917(cParam0);
	func_918(cParam0);
	func_919(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_920(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_279(cParam0) == 0)
	{
		func_429(cParam0);
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
			if (func_921(cParam0, iVar0, 0))
			{
				if (func_922(cParam0, func_33(cParam0)) != -1 && _0x62de46f061caa468() < func_922(cParam0, func_33(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_922(cParam0, func_33(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_380(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_923(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_924(cParam0);
					func_925(cParam0, iVar0, 1);
				}
				else
				{
					func_925(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_886(cParam0))
			{
				if (func_926(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_884(cParam0, 4);
					}
					func_925(cParam0, iVar0, 2);
				}
			}
			else if (func_927(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_884(cParam0, 4);
				}
				func_925(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_921(cParam0, iVar0, 2))
			{
				if (!func_928(cParam0))
				{
					func_925(cParam0, iVar0, 4);
					if (func_929(cParam0, iVar0, iVar1))
					{
						func_925(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_930(cParam0);
					func_925(cParam0, iVar0, 3);
					if (func_931(cParam0, iVar0))
					{
						func_925(cParam0, iVar0, 4);
						if (func_929(cParam0, iVar0, iVar1))
						{
							func_925(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_932(cParam0))
			{
				func_931(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_931(cParam0, iVar0))
			{
				func_925(cParam0, iVar0, 4);
				if (func_929(cParam0, iVar0, iVar1))
				{
					func_925(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_929(cParam0, iVar0, iVar1))
			{
				func_925(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_933(cParam0);
				func_934(cParam0, iVar0);
				func_935(cParam0);
				func_936(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_937(cParam0, iVar1))
					{
						func_938(cParam0, iVar1);
					}
				}
			}
			if (func_921(cParam0, iVar0, 5))
			{
				if (func_921(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_939(cParam0, func_33(cParam0));
					}
					func_940(cParam0, iVar1);
					func_913(cParam0);
					return true;
				}
				else
				{
					func_925(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_941(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_942(get_player_index(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_943("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_944(cParam0))
					{
						func_925(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_884(cParam0, 268435456);
					}
				}
				if (func_120(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_265(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_933(cParam0);
				func_934(cParam0, iVar0);
				func_935(cParam0);
				func_936(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_937(cParam0, func_35(cParam0)))
					{
						func_938(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_942(get_player_index(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_921(cParam0, iVar0, 5))
				{
					if (func_945(cParam0))
					{
						func_925(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_945(cParam0);
					func_925(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_921(cParam0, iVar0, 5);
				func_946(cParam0);
			}
			break;
		case 7:
			if (func_921(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_939(cParam0, func_33(cParam0));
				}
				func_940(cParam0, iVar1);
				func_913(cParam0);
				return true;
			}
			break;
		default:
			func_925(cParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_436(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_947(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_948(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_949();
		}
		else
		{
			func_950(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_951();
	}
}

var func_437(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

int func_438(int iParam0)
{
	iVar0 = func_673(func_952(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_439(int iParam0)
{
	if (func_440(81053684, iParam0))
	{
		return true;
	}
	if (func_440(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_440(int iParam0, int iParam1)
{
	iVar1 = func_673(func_952(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_598(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_441()
{
	return Global_1946804->f_2792;
}

bool func_442(int iParam0)
{
	if (func_953())
	{
		return false;
	}
	if (!func_574(iParam0, 0))
	{
		return false;
	}
	if (!func_347(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_443(int iParam0, int iParam1)
{
	bVar3 = func_954(iParam0);
	if (func_594(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_166(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_955();
			}
			else
			{
				iVar0 = func_956();
			}
		}
		else if (func_391(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_957();
		}
		else
		{
			iVar0 = func_958();
		}
	}
	else if (func_439(&iVar2))
	{
		if (func_594(iVar2, -1303648999))
		{
			iVar0 = func_955();
		}
		else
		{
			iVar0 = func_956();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_957();
	}
	else
	{
		iVar0 = func_958();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

void func_444(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if ((!get_ped_config_flag(iParam0, 138, true) || _0xdc9273d95976ba22(iParam0) != 10f) || !_0x75df9e73f2f005fd(iParam0))
		{
			func_959(iParam0, 1);
			_0xc2266aa617668ad3(iParam0, 10f);
			_0xd05ad61f242c626b(iParam0, 10f);
			set_entity_invincible(iParam0, false);
			set_entity_only_damaged_by_player(iParam0, false);
			set_entity_can_be_damaged(iParam0, true);
		}
	}
	else if (get_ped_config_flag(iParam0, 138, true) || _0xdc9273d95976ba22(iParam0) != 1f)
	{
		func_959(iParam0, 0);
		_0xc2266aa617668ad3(iParam0, 1f);
		_0xd05ad61f242c626b(iParam0, 1f);
	}
}

bool func_445(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_254(cParam0->f_5423[iVar0]))
		{
			if (&cParam0->f_5423[iVar0] == iParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_446(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (!func_445(cParam0, iParam1, &iVar0))
	{
		return false;
	}
	return func_511(cParam0->f_5423[iVar0], iParam2);
}

void func_447(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_445(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_960(cParam0->f_5423[iVar0], iParam2);
}

void func_448(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_445(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_961(cParam0->f_5423[iVar0], iParam2);
}

bool func_449(int iParam0, int iParam1)
{
	return (Global_40.f_4942[iParam0]->f_5 && iParam1) > 0;
}

void func_450(int iParam0)
{
	func_452(iParam0, 1);
	func_452(iParam0, 128);
	func_452(iParam0, 256);
	func_452(iParam0, 512);
	func_452(iParam0, 1024);
	func_452(iParam0, 2048);
	func_452(iParam0, 4096);
	func_452(iParam0, 65536);
	func_452(iParam0, 16384);
	func_452(iParam0, 262144);
	func_452(iParam0, 524288);
	func_452(iParam0, 1048576);
	func_452(iParam0, 2097152);
	func_452(iParam0, 32768);
	func_452(iParam0, 131072);
	func_452(iParam0, 134217728);
	func_452(iParam0, 1073741824);
}

void func_451(int iParam0, bool bParam1)
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

void func_452(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_453(int iParam0, int iParam1)
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

bool func_454(int iParam0, int iParam1)
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

void func_455(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 || iParam1);
}

void func_456(int iParam0, int iParam1, bool bParam2)
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
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_454(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_454(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_454(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_454(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_454(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_454(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_454(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_454(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_454(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_454(iParam1, -1100875244))
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
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_454(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_454(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_454(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_454(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_454(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_454(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_454(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_454(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_454(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_454(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_454(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_454(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_454(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_454(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_454(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_454(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

void func_457(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_512(iParam0))
	{
		iVar1 = func_549(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_458(iParam0);
		}
	}
	if (func_962(iParam0, 5, 1))
	{
		set_ped_config_flag(func_549(iParam0), 137, true);
	}
}

void func_458(int iParam0)
{
	if (func_512(iParam0))
	{
		if (does_entity_exist(func_549(iParam0)))
		{
			func_708(iParam0, 67108864, 1);
			func_963(iParam0, 19, 1);
		}
	}
}

int func_459(int iParam0)
{
	if (!func_964(iParam0))
	{
		return 0;
	}
	if (!func_966(func_965(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_967(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_967(iParam0));
	return 1;
}

int func_460(int iParam0)
{
	if (!func_964(iParam0))
	{
		return 0;
	}
	if (!func_966(func_965(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_967(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_967(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_967(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_967(iParam0));
	return 1;
}

bool func_461(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			if (is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam0), false, false))
			{
				return true;
			}
		}
		else if (is_entity_a_ped(iParam0))
		{
			if (!is_ped_injured(get_ped_index_from_entity_index(iParam0)))
			{
				return true;
			}
		}
		else if (is_entity_an_object(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_462(char[4] cParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_968(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_969(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_516(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_970(cParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_971(iParam1);
		}
	}
	if (func_970(cParam0, iParam1))
	{
		func_448(cParam0, iParam1, 1024);
		if (bParam2)
		{
			func_447(cParam0, iParam1, 128);
		}
		else
		{
			func_448(cParam0, iParam1, 128);
		}
		if (func_445(cParam0, iParam1, &iVar3))
		{
			func_972(cParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_973(iVar1);
	}
}

void func_463(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_464(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_463((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_465(int* iParam0, bool bParam1)
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
		func_974(iParam0);
		delete_vehicle(iParam0);
	}
}

void func_466()
{
	iVar0 = 0;
	while (iVar0 <= (12 - 1))
	{
		func_975(iVar0);
		iVar0++;
	}
}

void func_467(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_976(iParam1))
	{
		return;
	}
	iVar0 = func_977(iParam1);
	if (func_978(iParam1))
	{
		if (!func_979(iParam1))
		{
			return;
		}
	}
	func_963(iParam1, 39, 1);
	func_980(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_980(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_980(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_981(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_982(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_468(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_983((*iParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_469(int iParam0)
{
	if (_does_anim_scene_exist(&(iLocal_310[iParam0])))
	{
		if (iParam0 == 0)
		{
		}
		else if (iParam0 == 1)
		{
		}
		else if (iParam0 == 3)
		{
		}
		else if (iParam0 == 2)
		{
		}
		else if (iParam0 == 4)
		{
		}
		else if (iParam0 == 5)
		{
		}
		_delete_anim_scene(&(iLocal_310[iParam0]));
	}
}

void func_470(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_471(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0]->f_1 = 0f;
		(*uParam0)[iVar0]->f_2 = 0f;
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

bool func_472(int iParam0)
{
	return func_984(iParam0, 2);
}

int func_473(int iParam0)
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

int func_474(int iParam0)
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

int func_475(int iParam0)
{
	return iParam0 & 31;
}

bool func_476()
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

int func_477(int iParam0)
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

int func_478(int iParam0)
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

void func_479(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_480()
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

int func_481(int iParam0)
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

void func_482(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_483(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_985(iParam0);
	}
	else
	{
		func_986(iParam0, iParam1);
	}
	func_987();
}

bool func_484(int iParam0)
{
	iVar0 = func_988(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_485(int iParam0)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	switch (func_195(iParam0))
	{
		case 1:
			switch (func_272(iParam0))
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
			switch (func_272(iParam0))
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

void func_486(int iParam0)
{
	iVar2 = func_989(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_598(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_991(func_990(iParam0), 6);
}

void func_487(int iParam0)
{
	iVar2 = func_989(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_598(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_992(func_990(iParam0), 6);
}

int func_488(int iParam0)
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

int func_489(int iParam0)
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
	func_993(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_490(int iParam0)
{
	return iParam0 != 0;
}

bool func_491(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_492(int iParam0, var uParam1)
{
	if (!func_491(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_994(iParam0, *uParam1, 0);
	func_995(uParam1);
	Global_1935183->f_24 = 1;
}

void func_493(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_494(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_547() - fParam1);
	func_996(iParam0, 1);
	func_997(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_495(int iParam0)
{
	return func_219(*iParam0, 2);
}

int func_496()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_497(bool bParam0)
{
	if (func_998())
	{
		Global_1357509 = 1;
	}
	if (func_999(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_498(int iParam0, int iParam1)
{
	Var0 = { func_796(iParam0, iParam1) };
	Var0.f_3 = func_1000(iParam0, iParam1);
	return Var0;
}

int func_499(int iParam0)
{
	if (func_195(iParam0) == 1)
	{
		return func_272(iParam0);
	}
	return -1;
}

int func_500(int iParam0)
{
	if (func_195(iParam0) == 8)
	{
		return func_272(iParam0);
	}
	return -1;
}

char[] func_501(int iParam0)
{
	if (!func_273(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_502(int iParam0, bool bParam1)
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
		func_1001(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_285();
	}
}

void func_503(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_372(vParam1, 1);
}

bool func_504(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_505(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_506(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_507(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_508(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_509(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_510()
{
	return Global_1109400->f_245;
}

bool func_511(var uParam0, int iParam1)
{
	return func_391(uParam0->f_64, iParam1);
}

bool func_512(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_513(int iParam0)
{
	return func_707(iParam0, 16, 1);
}

void func_514(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_445(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_1002(cParam0, get_object_index_from_entity_index(iParam1)))
	{
		_0x4465c3d1475bd3fd(get_entity_model(iParam1));
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

void func_515(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_group(iParam0))
		{
			remove_ped_from_group(iParam0);
		}
		set_ped_can_ragdoll(iParam0, true);
		set_ped_can_ragdoll_from_player_impact(iParam0, true);
	}
}

void func_516(int iParam0)
{
	func_1003(iParam0, 8, 0);
}

void func_517(int iParam0, bool bParam1)
{
	if (!func_976(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1004(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1003(iParam0, 1, 0);
		}
	}
	func_1003(iParam0, 16, bParam1);
}

void func_518(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_512(iParam0))
	{
		return;
	}
	if (func_513(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_981(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_517(iParam0, 0);
	func_1003(iParam0, 4, 0);
	func_516(iParam0);
	func_1005(iParam0);
	func_963(iParam0, 37, 1);
	bVar0 = func_1006(Global_1360165[iParam0], 0);
	iVar1 = func_1007(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_962(iParam0, 64, 1))
	{
		func_963(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_963(iParam0, 33, 1);
		func_963(iParam0, 34, 1);
		func_457(iParam0, 1056964608, -1, 1061158912);
		func_1008(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_981(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_981(iParam0, 35, 1);
			if (bParam8)
			{
				func_981(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1009(iParam0, 0);
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
		func_963(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_981(iParam0, 33, 1);
		func_1008(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_470(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_981(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1010(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_962(iParam0, 45, 1))
	{
		func_963(iParam0, 45, 1);
	}
	func_1011(iParam0, 16, 1);
	func_963(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_1006(func_977(iParam0), 0))
		{
			func_467(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_519(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_262(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_526(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_526(iParam0);
	}
}

bool func_520(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_521(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_522(int iParam0)
{
	iParam0 = func_266(iParam0);
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

bool func_523(int iParam0)
{
	if (!func_1012(iParam0))
	{
		return false;
	}
	if (!func_331())
	{
		return true;
	}
	return false;
}

void func_524(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_527(iParam0))
	{
		return;
	}
	iVar0 = func_215(iParam0);
	func_1013(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_523(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1014(iParam0, 0);
	func_526(iParam0);
}

bool func_525(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_261(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_526(int iParam0)
{
	iParam0 = func_266(iParam0);
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

bool func_527(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_528(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_215(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		bVar1 = true;
	}
	if (!_0xa0bc8faed8cfeb3c(iVar0))
	{
		return;
	}
	if (func_1015(iParam0, 64))
	{
		func_521(iParam0);
		return;
	}
	bVar2 = false;
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26) && !does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		if (!get_blip_from_entity(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_596(42);
	if (bVar1)
	{
		if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_26));
		}
		if (iVar0 == _get_saddle_horse_for_player(player_id()) && bVar3)
		{
			if (!does_blip_exist((*Global_1900383)[iParam0]->f_27))
			{
				(*Global_1900383)[iParam0]->f_27 = _blip_add_for_entity(-515518185, iVar0);
				set_blip_sprite((*Global_1900383)[iParam0]->f_27, -1327110633, true);
				func_1016(&((*Global_1900383)[iParam0]->f_27));
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
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26) && bVar4)
	{
		func_521(iParam0);
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
		if (func_1017(1) < 1)
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
		(*Global_1900383)[iParam0]->f_26 = _blip_add_for_entity(iVar5, iVar0);
		(*Global_1900383)[iParam0]->f_25 = 0;
		func_1018(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1015(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1019(iParam0);
	if (does_entity_exist(iVar11))
	{
		if (!is_entity_dead(iVar11))
		{
			if (get_mount(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { get_entity_coords(iVar0, true, false) };
	fVar15 = func_1020(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1021(iParam0))
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
		fVar19 = _get_ped_remaining_revival_time(iVar0, true);
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
		func_1022((*Global_1900383)[iParam0]->f_26);
		func_1023((*Global_1900383)[iParam0]->f_26);
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
	if ((_get_saddle_horse_for_player(player_id()) == iVar0 && bVar3) && !bVar9)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	if (func_875(iVar0) && !bVar9)
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
	iVar21 = func_1017(iParam0);
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
		_0x44813684f72b563c(iVar0, (*Global_1900383)[iParam0]->f_26);
	}
	else
	{
		_0x97f6f158cc5b5ca2(iVar0, (*Global_1900383)[iParam0]->f_26);
		_0x7563cbca99253d1a(iVar0, iVar22);
	}
}

int func_529(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_530(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_531(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_532(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_533(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_534(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_527(iParam0))
	{
		return false;
	}
	iVar0 = func_215(iParam0);
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

void func_535(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_527(iParam0))
	{
		return;
	}
	iVar0 = func_215(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_536(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_704(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_537(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1024())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_704(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1025(iVar0);
			func_1026(iVar0, 0, 0);
		}
		func_704(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_538(int iParam0)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	return func_251(iParam0, 67108864);
}

void func_539(int iParam0)
{
	StringCopy(&cVar0, func_1027(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1028(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_540(int iParam0)
{
	StringCopy(&cVar0, func_1027(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1028(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_541(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_542(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_543(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_544(int iParam0)
{
	if (!func_507(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_545(int iParam0)
{
	if (func_507(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_546(int iParam0)
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

float func_547()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_548(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1029(iParam0) == 1 && bParam7)
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

int func_549(int iParam0)
{
	if (!func_976(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_550(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1030(iParam0);
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

int func_551(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_564(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_552(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_553(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_554()
{
	return Global_40.f_11095.f_35;
}

void func_555(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1031(iParam0, 0);
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
		func_556(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_556(int iParam0)
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
			func_1031(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1032(1);
	}
}

bool func_557(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_558()
{
	iVar0 = func_1033((*Global_1347702)[9]->f_15);
	iVar1 = func_1033((*Global_1835011)[69]->f_1);
	if (func_1034(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_559(int iParam0)
{
	if (!func_189(iParam0))
	{
		return false;
	}
	return func_327((*Global_1835011)[iParam0]->f_1, 1);
}

int func_560(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1035(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1036(iVar6);
	}
	return iVar5;
}

int func_561(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1037(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_562(int iParam0, bool bParam1)
{
	func_1038(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_563(int iParam0)
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

void func_564(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_562(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_565(2, *uParam0);
		}
		else
		{
			func_566(2, *uParam0);
		}
	}
	func_1039(uParam0);
}

void func_565(int iParam0, int iParam1)
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

void func_566(int iParam0, int iParam1)
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

void func_567(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1040(iParam0, iParam1, bParam2);
}

int func_568(int iParam0)
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

int func_569(int iParam0)
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

void func_570(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1041();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1042(iParam0);
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
	if (func_596(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1043())
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
	Global_40.f_11095.f_35 = func_309(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1041();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1044(iVar1);
		func_1046(func_1045(), 0, 4000);
		func_1047(Global_40.f_11095.f_35);
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
		func_1048(0);
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
				if (iParam0 > func_569(14))
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
					sParam4 = func_1049(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_704(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_704(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_569(4))
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
					sParam4 = func_1049(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_704(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_704(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_362(10, 1);
	}
}

void func_571(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_572(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_573(int iParam0)
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

bool func_574(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_575(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1050(iParam0) && func_1051(iParam0))
		{
			func_1052(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_576(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1053(iParam0, iParam1);
	Var0 = { func_685(iParam0, 0, 1) };
	iVar5 = func_1054(iParam0, &Var0, 0, 0);
	iVar6 = func_1055(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_594(iParam0, -2051813666))
		{
			func_325(583, 1);
		}
		else
		{
			func_325(582, 0);
		}
	}
	if (func_1056(iParam0, &Var0, *iParam1, 0, 0))
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

void func_577(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_655(iParam0, -949239683))
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

int func_578(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_593(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1057(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1058(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_989(bParam2), iParam0, 0);
	return iVar2;
}

bool func_579(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_580(iParam0) != 0;
}

int func_580(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1059())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1060(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_581(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_582(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1059())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_581(iVar0))
		{
			if (func_347(func_1060(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_583(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1061(48);
	func_367(0, -1);
}

bool func_584(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_327((*Global_1347702)[iParam0]->f_15, 1);
}

int func_585(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_586(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_587(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_327((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_588(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_273(iParam0))
	{
		return false;
	}
	return func_191((*Global_1347702)[iParam0]->f_15);
}

int func_589()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_347(func_1062(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_590(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_395() && (func_588(38) || func_584(38)))
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
			if (func_395() && (func_588(39) || func_584(39)))
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
			iVar9 = func_1063(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_395() && (func_588(41) || func_584(41)))
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
			if (func_395() && (func_588(49) || func_584(49)))
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
			iVar9 = func_1063(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1064(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1065(iParam0, iVar13, iVar14))
	{
	}
	if (func_1066(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1067(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1068(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1069(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1070(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_591(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_592(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_395() && (func_588(38) || func_584(38)))
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
			if (func_395() && (func_588(39) || func_584(39)))
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
			if (func_395() && (func_588(49) || func_584(49)))
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
		if (func_395() && (func_588(38) || func_584(38)))
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
			func_1071(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1071(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_711(_create_var_string(2, sVar0), _create_var_string(2, func_1072(func_586(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1071(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1071(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_395() && (func_588(39) || func_584(39)))
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
			func_1071(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1071(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_395() && (func_588(49) || func_584(49)))
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
			func_1071(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1071(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1071(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1071(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_593(int iParam0)
{
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_594(int iParam0, int iParam1)
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

bool func_595(int iParam0, int iParam1)
{
	if (!func_574(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_596(int iParam0)
{
	if (!func_1073(iParam0))
	{
		return false;
	}
	return func_1074(iParam0);
}

void func_597(int iParam0)
{
	if (!func_1073(iParam0))
	{
		return;
	}
	func_1075(iParam0);
	func_1076(iParam0);
}

int func_598(int iParam0)
{
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_599(int iParam0, bool bParam1)
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
	if (func_574(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1077(iVar0) || func_122(iVar0))
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

int func_600(int iParam0, bool bParam1)
{
	if (!func_574(iParam0, 0))
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

void func_601(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_688(iParam0))
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

bool func_602(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_989(bParam0));
}

bool func_603(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_685(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1078((386 + iVar28), 1);
			if (func_1079(iParam0, &Var0, iVar5, 0))
			{
				if (func_1080(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1081(iParam0, Var0, iVar5, 0) };
					func_1082(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_602(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_604(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1083(iParam0, iParam1);
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

bool func_604(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_606(iParam0))
	{
		return false;
	}
	if (!func_602(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_605(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_600(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_601(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1084(iVar0);
			}
		}
		if (!func_1056(iParam0, &uVar1, 1, 0, 0))
		{
			func_1052(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1085(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_603(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_603(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_603(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1043())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1086(iVar0))
				{
					func_603(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_603(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1087(Global_35, 2, 0, 1);
				if ((((func_688(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_596(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_688(iVar7) && func_596(24))
				{
					if (!func_603(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_603(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_603(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_325(480, 1);
	}
	return true;
}

bool func_606(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_607(int iParam0, int iParam1, int iParam2)
{
	if (!func_606(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_688(iVar4))
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
	if (func_347(611073244, 1, 0) && iParam2 == -897553835)
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
		func_642(func_1088(iParam0), func_641(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_327((*Global_1835011)[14]->f_1, 1))
			{
				func_325(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_602(0))
	{
		if (func_604(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_647(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_608(int iParam0)
{
	if ((iParam0 == -615217896 && !func_338()) || iParam0 != -615217896)
	{
		if (func_1089(Global_35, iParam0, &uVar0))
		{
			func_626(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_632();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_632();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_632();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_630();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_628();
			break;
	}
}

void func_609(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_628();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_629();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_630();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_631();
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
			func_632();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1090();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1091();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_610(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_611(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_612(int iParam0)
{
	bVar0 = func_594(iParam0, -2017733358);
	if (func_1092() < 3)
	{
		if (bVar0)
		{
			if (func_1094(func_1093(iParam0), iParam0))
			{
				func_642(79, func_641(func_1093(iParam0)), 1);
			}
			else
			{
				func_642(78, func_641(func_1093(iParam0)), 1);
			}
		}
		else
		{
			func_642(80, func_641(func_1095(iParam0)), 1);
		}
	}
}

bool func_613()
{
	if (((((func_1096(839908568, 400) || func_1096(-1134030454, 400)) || func_1096(623353496, 400)) || func_1096(-344413337, 400)) || func_1096(-1664948962, 400)) || func_1096(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_614(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_722(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_536(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_537(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_615(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_590(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_592(51, 0, 0, 0, 0, -1, 0);
			func_1097(8192);
			break;
		case 581047644:
			func_590(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_592(51, 0, 0, 0, 0, -1, 0);
			func_1097(524288);
			break;
		case -644199619:
			func_590(39, 0, 0, 0, 0, 0, 1, 0);
			func_592(39, 0, 0, 0, 0, -1, 0);
			func_1098(16);
			break;
		case 684296857:
			func_590(41, 0, 0, 0, 0, 0, 1, 0);
			func_592(41, 0, 0, 0, 0, -1, 0);
			func_1099(8);
			break;
		case 466137807:
			func_590(49, 0, 0, 0, 0, 0, 1, 0);
			func_592(49, 0, 0, 0, 0, -1, 0);
			func_1100(16);
			break;
		case -1087522507:
			func_590(43, 0, 0, -1791518714, func_1101(1), 0, -1, 0);
			func_1102(1);
			break;
		case -405829000:
			func_590(43, 0, 0, -2087881550, func_1101(2), 0, -1, 0);
			func_1102(2);
			break;
		case 378660860:
			func_590(43, 0, 0, 1908068621, func_1101(4), 0, -1, 0);
			func_1102(4);
			break;
		case 1566111097:
			func_590(43, 0, 0, 1611247019, func_1101(8), 0, -1, 0);
			func_1102(8);
			break;
		case 1276007140:
			func_590(43, 0, 0, 1319635688, func_1101(16), 0, -1, 0);
			func_1102(16);
			break;
	}
}

void func_616(int iParam0)
{
	if (func_1103() == 1)
	{
		if (func_584(39))
		{
			func_325(342, 0);
		}
		else
		{
			func_325(343, 0);
			func_1098(1);
		}
	}
	if (func_1103() >= 30)
	{
		func_325(344, 0);
	}
	func_590(39, 0, 0, 0, 0, 0, -1, 0);
	func_592(39, 0, 0, func_1103(), 30, 1, 0);
}

void func_617(int iParam0)
{
	if (func_1104() == 1)
	{
		if (func_584(49))
		{
			func_325(409, 0);
		}
		else
		{
			func_325(410, 0);
			func_1100(1);
		}
	}
	if (func_1104() >= 10)
	{
		func_325(411, 0);
	}
	func_590(49, 0, 0, 0, 0, 0, -1, 0);
	func_592(49, 0, 0, func_1104(), 10, 1, 0);
}

void func_618(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_325(437, 0);
			func_325(440, 0);
			func_1105(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_590(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_592(51, 0, 0, sVar0, func_1063(-949689219, 20), 1, 0);
			func_1097(1);
			func_1106(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1105(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_590(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_592(51, 0, 0, sVar0, func_1063(-1248968496, 20), 1, 0);
			func_1097(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1105(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_590(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_592(51, 0, 0, sVar0, func_1063(1706369307, 20), 1, 0);
			func_1097(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1105(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_590(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_592(51, 0, 0, sVar0, func_1063(1520110311, 20), 1, 0);
			func_1097(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_325(438, 0);
			func_1105(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_590(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_592(51, 0, 0, sVar0, func_1063(-1992824800, 20), 1, 0);
			func_1097(32768);
			break;
		default:
			func_325(439, 0);
			break;
	}
}

void func_619()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_620(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_584(43))
		{
			if (iParam0 == 281887510)
			{
				func_325(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_325(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_325(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_325(400, 0);
			}
		}
		else if (func_594(iParam0, 412399755))
		{
			func_1107(-1791518714);
			if (func_1108() == 0)
			{
				func_367(0, 10);
				iVar1 = func_1109(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1110(iParam0) < func_1111(iParam0))
					{
						func_590(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_592(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_584(44))
		{
			if (iParam0 == -222563712)
			{
				func_325(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_325(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_325(401, 0);
			}
		}
		else if (func_594(iParam0, 709057512))
		{
			func_1107(-2087881550);
			if (func_1108() == 1)
			{
				func_367(0, 10);
				iVar1 = func_1109(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1110(iParam0) < func_1111(iParam0))
					{
						func_590(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_592(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_584(45))
		{
			if (iParam0 == 2116770557)
			{
				func_325(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_325(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_325(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_325(398, 0);
			}
		}
		else if (func_594(iParam0, -1478961327))
		{
			func_1107(1908068621);
			if (func_1108() == 2)
			{
				func_367(0, 10);
				iVar1 = func_1109(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1112(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1113(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1061(48);
					}
					if (func_1110(iParam0) < func_1111(iParam0))
					{
						func_590(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_592(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1110(iParam0) < func_1111(iParam0))
					{
						func_590(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_592(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_584(46))
		{
			if (iParam0 == 2085530337)
			{
				func_325(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_325(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_325(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_325(406, 0);
			}
		}
		else if (func_594(iParam0, -1238404098))
		{
			func_1107(1611247019);
			if (func_1108() == 3)
			{
				func_367(0, 10);
				iVar1 = func_1109(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1110(iParam0) < func_1111(iParam0))
					{
						func_590(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_592(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_584(47))
		{
			if (iParam0 == -1521783510)
			{
				func_325(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_325(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_325(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_325(403, 0);
			}
		}
		else if (func_594(iParam0, 1160548794))
		{
			func_1107(1319635688);
			if (func_1108() == 4)
			{
				func_367(0, 10);
				iVar1 = func_1109(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1110(iParam0) < func_1111(iParam0))
					{
						func_590(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_592(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_621(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1112(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1113(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1061(48);
		}
	}
}

void func_622(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_347(func_1114(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1115(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1116(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_623(int iParam0, int iParam1, int iParam2)
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
				func_614(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_614(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_614(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_614(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_614(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_614(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_614(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_614(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_614(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_614(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_614(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_614(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_614(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1117())
			{
				func_614(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_614(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_614(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_614(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_614(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_614(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_614(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_614(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_614(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_614(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_614(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_614(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_614(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_624(int iParam0)
{
	if (func_584(41))
	{
		func_325(363, 0);
	}
	else
	{
		func_325(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1118(-1865241121);
			func_1119(-642026005);
			func_1120(-642026005);
			func_367(0, 10);
			break;
		case -2108314374:
			func_1118(2117142684);
			func_1119(-940584364);
			func_1120(-940584364);
			func_367(0, 10);
			break;
		case -1193798153:
			func_1118(-1409326024);
			func_1119(1972645282);
			func_1120(1972645282);
			func_367(0, 10);
			break;
		case -787702678:
			func_1118(-641744968);
			func_1119(1667205433);
			func_1120(1667205433);
			func_367(0, 10);
			break;
		case -804542901:
			func_1118(-946988203);
			func_1119(1362715885);
			func_1120(1362715885);
			func_367(0, 10);
			break;
		case -1696275132:
			func_1118(-646136018);
			func_1119(1053540370);
			func_1120(1053540370);
			func_367(0, 10);
			break;
		case -161595323:
			func_1118(-955835837);
			func_1119(-1100103852);
			func_1120(-1100103852);
			func_367(0, 10);
			break;
		case -1114363619:
			func_1118(-179276075);
			func_1119(-1409869209);
			func_1120(-1409869209);
			func_367(0, 10);
			break;
		case -368407134:
			func_1118(-492711560);
			func_1119(-1760235357);
			func_1120(-1760235357);
			func_367(0, 10);
			break;
		case 1997759228:
			func_1118(1764383959);
			func_1119(-138366827);
			func_1120(-138366827);
			func_367(0, 10);
			break;
		case 1265573293:
			func_1118(317501533);
			func_1119(-1261163843);
			func_1120(-1261163843);
			func_367(0, 10);
			break;
		case -1030441283:
			func_1118(817753087);
			func_1119(-963523016);
			func_1120(-963523016);
			func_367(0, 10);
			break;
		case -1490884871:
			func_1118(576606016);
			func_1119(560825326);
			func_1120(560825326);
			func_367(0, 10);
			break;
		case -395458616:
			func_1118(814934957);
			func_1119(858269539);
			func_1120(858269539);
			break;
	}
}

void func_625(int iParam0, int iParam1)
{
	func_1121(iParam0, iParam1, &uVar0);
}

int func_626(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_685(iParam1, 1, 0) };
		iParam3 = func_686(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1122(iParam1, iParam2, func_673(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1123(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_673(iParam3, 1)])
			{
				func_684(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1124(32768) && iParam1 != &Global_1946804->f_57[func_673(iParam3, 1)])
			{
				func_1125();
				func_684(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_684(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1126(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_684(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1127(0);
			func_1128(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_684(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_627(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1087(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1087(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1129("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1130(&Var3, iVar2, iVar0, iVar1))
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
						func_1131(iVar0);
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

void func_628()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_629()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_630()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_631()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_632()
{
	func_1132();
	func_1133();
	func_1134();
}

void func_633(int iParam0, int iParam1, bool bParam2)
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

void func_634(int iParam0, bool bParam1)
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
	func_1071(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_635(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_636(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_637(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_638(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_639(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_640(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_641(int iParam0)
{
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_642(int iParam0, int iParam1, bool bParam2)
{
	func_680(iParam0, &iVar0, &iVar1);
	if (!func_681(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1135(iParam0, 1024))
	{
		return;
	}
	func_682(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_643(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_680(iParam0, &iVar0, &iVar1);
	if (!func_681(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1135(iParam0, 1024))
	{
		return;
	}
	func_682(iVar0, iVar1);
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

int func_644()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1059())
	{
		return func_645();
	}
	iVar4 = (func_1059() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1059())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1136(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1060(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_645()
{
	iVar0 = get_random_int_in_range(0, func_1059());
	return func_1060(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_646(int iParam0)
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

bool func_647(int iParam0, int iParam1, int iParam2)
{
	if (!func_574(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_685(iParam0, 0, 1) };
	Var5 = { func_1081(iParam0, Var0, Var0.f_4, 0) };
	return func_1137(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_648(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_598(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1138(81053684, 0) <= 0)
			{
				func_684(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_684(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1139(iParam0);
			if (func_1140(iVar0))
			{
				func_1141(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_684(30, iParam0, 0, 0, 0);
			}
			if (func_675() == -2125499975 || func_675() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_684(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_675() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_684(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1142(-525676072, 0))
			{
				if (func_1143(-525676072, &iVar1))
				{
					func_684(33, iVar1, 0, 0, 0);
				}
			}
			func_684(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1144(99217379))
		{
			func_626(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_597(24);
		if (func_627(&iVar2, 0))
		{
			func_603(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_649(int iParam0)
{
	if (func_594(iParam0, 943695443))
	{
		func_1145(0, iParam0);
	}
	else if (func_594(iParam0, -2096528786))
	{
		func_1145(1, iParam0);
	}
	else if (func_594(iParam0, -1094167013))
	{
		func_1145(2, iParam0);
	}
	else if (func_594(iParam0, 1936654645))
	{
		func_1145(3, iParam0);
	}
	else if (func_594(iParam0, 1306489306))
	{
		func_1145(4, iParam0);
	}
	else if (func_594(iParam0, 435762317))
	{
		func_1145(5, iParam0);
	}
	else if (func_594(iParam0, 1259363210))
	{
		func_1145(6, iParam0);
	}
	else if (func_594(iParam0, 881398259))
	{
		func_1145(7, iParam0);
	}
	else if (func_594(iParam0, -541549214))
	{
		func_1145(8, iParam0);
	}
	else if (func_594(iParam0, 130796156))
	{
		func_1145(-1, iParam0);
	}
}

int func_650(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1146(&Var4, 1356624740);
	return func_1147(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_651(int iParam0)
{
	if (!func_574(iParam0, 0))
	{
		return Var0;
	}
	if (func_594(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_594(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_594(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_594(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_652(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_327((*Global_1835011)[4]->f_1, 1))
				{
					func_325(109, 1);
				}
			}
			break;
	}
}

void func_653(int iParam0, char* sParam1)
{
	sVar0 = func_1149(func_1148(0));
	func_704(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1150(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_654(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_574(iParam0, 0))
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
	if (!func_1151())
	{
		func_1152(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1153(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1153(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_595(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_593(iParam0);
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
	else if (!func_1154(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1155(_create_var_string(10, &cVar2, _create_var_string(0, func_641(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_594(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_641(iParam0));
	}
	func_704(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_655(int iParam0, int iParam1)
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

struct<10> func_656(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_657(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_658(int iParam0, int iParam1)
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

bool func_659(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_574(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1156(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1156(iParam0, Var2, 1))
				{
					if (func_1157(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1157(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_325(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_197(0, 0, 1))
		{
			func_367(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_660(int iParam0)
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

void func_661(int iParam0)
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
		func_325(iVar0, 0);
	}
}

void func_662()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1158(0);
			_unlock_set_unlocked(-121456797, false);
			func_1159();
		}
		return;
	}
	if (!func_327((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1160();
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
	func_1158(1);
}

void func_663()
{
	if (!func_327((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_318(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_664()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1161(0);
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
	if (!func_327((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1161(1);
}

void func_665()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1162(15000, 0, 0, 0, 1);
			func_1161(0);
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
	if (!func_327((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_283(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1161(1);
}

void func_666()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_347(1191437462, 1, 0) && !func_191((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_318(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1163(1))
			{
				func_638(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_347(1119149048, 1, 0) && !func_191((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_318(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1163(2))
			{
				func_638(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1163(4))
		{
			func_638(4);
		}
		if (func_1163(0))
		{
			func_1164(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_347(1191437462, 1, 0))
			{
				func_669(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_347(1119149048, 1, 0))
			{
				func_669(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1163(1))
		{
			func_1164(1);
		}
		if (func_1163(2))
		{
			func_1164(2);
		}
		if (func_1163(4))
		{
			func_1164(4);
		}
		if (!func_1163(0))
		{
			func_638(0);
		}
	}
}

void func_667()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_327((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1165() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_601(127400949);
		if (func_603(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1165() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1166(-2055673461, Var1, 1423542233);
		func_1166(-202131179, Var1, -1264898804);
		func_1166(2013836545, Var1, 1592019450);
		func_1166(1497476650, Var1, 1117400455);
		func_1166(1063571467, Var1, 1150213537);
		func_1166(2107224237, Var1, 1598825281);
		func_1166(1747981656, Var1, -712527121);
		func_1166(-1371140647, Var1, 454332195);
		func_1166(-19142973, Var1, 256105670);
		func_1166(-2074737817, Var1, -1328061889);
		func_1166(-1114256243, Var1, -782241404);
		func_1166(-1653277288, Var1, 1669853467);
		func_1166(1869398132, Var1, -1559225678);
		func_1166(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_688(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_596(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_596(24) && func_688(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_688(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_596(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_668()
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

int func_669(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1057(iParam0, 1);
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
			func_654(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_347(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_651(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_578(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_578(iParam0, 0, 0) - iParam1) < 0)
		{
			func_669(iParam0, func_578(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_593(iParam0) == -427144552)
	{
		if (!func_1167(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1168(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_602(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_654(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1169(iParam0, iParam1);
	return 1;
}

bool func_670(int iParam0)
{
	switch (func_598(iParam0))
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

void func_671(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_598(iParam0))
	{
		case -2061583405:
			bVar0 = func_1170(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1170(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1170(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1170(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1170(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1170(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1171();
	}
	if (bParam1)
	{
		func_1172(0, 0);
	}
}

int func_672(int iParam0)
{
	Var0 = { func_685(iParam0, 1, 0) };
	return func_686(Var0.f_4);
}

int func_673(int iParam0, int iParam1)
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

void func_674(int iParam0)
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
		iVar0 = func_673(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1173(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_675()
{
	return Global_1946804->f_1;
}

bool func_676(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1174(iParam6);
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
		func_1176(uParam0, func_1175(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_673(iVar3, 1);
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
							if (func_1177(iVar3) && func_1178(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1179(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_677(int iParam0, int iParam1)
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

int func_678(int iParam0, int iParam1)
{
	vVar0 = { func_677(iParam0, iParam1) };
	return vVar0.x;
}

void func_679(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_680(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_681(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1180(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1181(iParam0))
	{
		return false;
	}
	if (func_1182(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1135(iParam0, 1)) || func_82(32768))
	{
		if (!func_1135(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1183())
	{
		return false;
	}
	return true;
}

void func_682(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_683(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_684(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1184(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1185(Var0);
}

struct<5> func_685(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1186(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_593(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1081(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1187(bParam1) };
			if (bParam2 && func_1188(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1079(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1079(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1080(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1189(bParam1) };
			switch (func_598(iParam0))
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
			if (func_1190(iParam0, -1823706425))
			{
				Var0 = { func_1081(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1190(iParam0, -1483207246))
			{
				Var0 = { func_1081(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1191(Var0, &Var27, bParam1, 0))
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

int func_686(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1192(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_687(int iParam0)
{
	func_1173(Global_1946804->f_1497.f_1[func_673(iParam0, 1)], 2, 6);
	func_1173(Global_1946804->f_1378.f_1[func_673(iParam0, 1)], 2, 6);
}

bool func_688(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_689(int iParam0)
{
	return iParam0 != 0;
}

int func_690(int iParam0)
{
	iVar0 = -1;
	if (!func_689(iParam0))
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

bool func_691(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_692(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1193(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_693(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_694(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_695(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_696(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_697(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_698(int iParam0, int iParam1)
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

void func_699(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1194(iParam0, iParam6);
	func_1195(iParam0, iParam5);
	func_1196(iParam0, iParam4);
	func_1197(iParam0, iParam3);
	func_1198(iParam0, iParam2);
	func_1199(iParam0, iParam1);
}

bool func_700(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_697(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_696(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_695(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_692(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_693(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_694(iParam0);
	if (iVar5 < 1 || iVar5 > func_698(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_701(int iParam0, bool bParam1)
{
	return func_1034(func_285(), iParam0, bParam1);
}

void func_702(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_703(int iParam0, int iParam1)
{
	if (!func_574(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1057(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1129("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1130(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_688(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1131(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1131(iVar1);
	}
	return false;
}

var func_704(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1200(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_705()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1201(iVar1);
		if (!_unlock_is_visible(func_1202(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_706()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1201(iVar0);
		if (!_unlock_is_visible(func_1202(iVar1)))
		{
			_unlock_set_visible(func_1202(iVar1), true);
		}
		iVar0++;
	}
}

bool func_707(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_976(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_708(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_512(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_709()
{
	return (func_198(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_710(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_574(iVar0, 0))
	{
		return 0;
	}
	if (!func_1203(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1204(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_594(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_685(iVar0, 0, 1) };
	iVar10 = func_1205(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1206(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1207(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_318(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1162(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_711(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_712(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_704(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_713(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_714(bool bParam0, bool bParam1)
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

void func_715(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1024())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1024())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_193(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_272(iParam0);
	if (func_195(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_195(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1208(1, iVar1);
					func_1208(8, iVar1);
					func_1208(7, iVar1);
					break;
				case 12:
					func_1208(6, iVar1);
					break;
				case 53:
					func_1208(3, iVar1);
					func_1208(7, iVar1);
					func_1208(4, iVar1);
					break;
				case 20:
					func_1208(8, iVar1);
					break;
				case 19:
					func_1208(1, iVar1);
					func_1208(2, iVar1);
					break;
				case 24:
					func_1208(3, iVar1);
					func_1208(9, iVar1);
					func_1208(20, iVar1);
					break;
				case 28:
					func_1208(1, iVar1);
					break;
				case 34:
					func_1208(23, iVar1);
					func_1208(2, iVar1);
					func_1208(18, iVar1);
					break;
				case 29:
					func_1208(0, iVar1);
					func_1208(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1208(0, iVar1);
					func_1208(3, iVar1);
					func_1208(2, iVar1);
					func_1208(11, iVar1);
					func_1208(6, iVar1);
					func_1208(25, iVar1);
					func_1208(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1208(5, iVar1);
					break;
				case 63:
					func_1208(1, iVar1);
					func_1208(3, iVar1);
					break;
				case 37:
					func_1208(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_363(0, 10, 11, 2116153146))
			{
				func_1208(7, iVar1);
				func_1208(4, iVar1);
			}
			else if (iParam0 == func_363(0, 7, 11, -379687487))
			{
				func_1208(8, iVar1);
				func_1208(15, iVar1);
			}
			else if (iParam0 == func_363(0, 8, 11, -1386089015))
			{
				func_1208(3, iVar1);
			}
			else if (iParam0 == func_363(0, 11, 11, -1952009645))
			{
				func_1208(6, iVar1);
				func_1208(3, iVar1);
			}
			else if (iParam0 == func_363(0, 12, 11, 2065895756))
			{
				func_1208(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1209()));
	if (!func_1210(629))
	{
		func_325(629, 0);
	}
}

int func_716(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_717(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_718(int iParam0, int iParam1, int iParam2)
{
	if (!func_717(iParam0))
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

int func_719()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_720(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_721(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1211(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_719())
	{
		return -1;
	}
	iVar0 = func_720(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_483(iVar1, 0);
	func_553(iVar1, 0);
	func_1212(iVar1, 0);
	func_1213(iVar1, 0);
	func_1214(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1215(iVar1, iParam4);
	}
	return iVar1;
}

int func_722(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_347(1811977508, 1, 0))
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
			if (func_574(iVar25, 0) && func_594(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_723(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_724(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0;
	}
	cVar0 = func_365(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_725(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_726(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1216(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1217() == 0 && !func_1218(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1219(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1220();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1221(Global_1310720->f_21))
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
			vVar7 = { func_1222(iVar0, iVar1) };
			bVar11 = func_1223(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_396(vVar7)) && func_1224(iVar0, bParam8, iParam12)) && !func_1225(iVar0)) || bVar11)
			{
				if (func_1226(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_727(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1227(vParam0);
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

void func_728()
{
	disable_script_brain_set(1);
}

void func_729()
{
}

void func_730()
{
	disable_script_brain_set(2);
}

bool func_731(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_732(char* sParam0)
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

void func_733(int iParam0)
{
	if (func_731(iParam0, 1))
	{
		func_1228(1);
	}
}

int func_734()
{
	return -1904156936;
}

bool func_735(int iParam0)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	switch (func_195(iParam0))
	{
		case 1:
			iVar0 = func_272(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_272(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_736()
{
	return 166188472;
}

int func_737()
{
	return 2015838421;
}

int func_738()
{
	return 207908017;
}

var func_739(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_740(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_741(var uParam0)
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

int func_742(var uParam0, int iParam1)
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

char* func_743(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1229(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1230(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1231(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_744(var uParam0, char* sParam1)
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

int func_745(var uParam0)
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

void func_746(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_747(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_748()
{
	return Global_1572864->f_8;
}

void func_749(char[4] cParam0, int iParam1)
{
	func_1232(cParam0, iParam1);
	func_1233(cParam0, iParam1, 26);
}

int func_750(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_128(cParam0, 2)) || func_128(cParam0, 1))
	{
	}
	return 1;
}

int func_751(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_128(cParam0, 2)) || func_128(cParam0, 1))
	{
	}
	if (!is_entity_dead(cParam0->f_5411))
	{
		set_blocking_of_non_temporary_events(cParam0->f_5411, true);
		open_sequence_task(&iLocal_61);
		task_follow_nav_mesh_to_coord(0, func_388(0, 4), 0.101f, -1, 1f, 0, 40000f);
		task_stand_still(0, -1);
		close_sequence_task(iLocal_61);
		task_perform_sequence(cParam0->f_5411, iLocal_61);
		clear_sequence_task(&iLocal_61);
	}
	if (!is_entity_dead(iLocal_94))
	{
		set_blocking_of_non_temporary_events(iLocal_94, true);
		open_sequence_task(&iLocal_61);
		task_stand_still(0, 5000);
		task_follow_nav_mesh_to_coord(0, func_388(0, 3), 0.101f, -1, 1f, 0, 40000f);
		task_follow_nav_mesh_to_coord(0, func_388(0, 5), 0.101f, -1, 1f, 0, 40000f);
		task_stand_still(0, -1);
		close_sequence_task(iLocal_61);
		task_perform_sequence(iLocal_94, iLocal_61);
		clear_sequence_task(&iLocal_61);
	}
	func_1234(cParam0->f_5411, 5, -1537.67f, -312.21f, 141.61f, 0);
	func_1234(cParam0->f_5411, 4, -1536.9f, -311.28f, 141.67f, 0);
	func_1234(cParam0->f_5411, 6, -1535.41f, -311.63f, 141.57f, 0);
	return 1;
}

int func_752(char[4] cParam0)
{
	if (func_1235(1))
	{
		func_1236(1);
	}
	func_55(1, 0);
	func_165(cParam0, 1);
	func_420(&(cParam0->f_7375), 75f);
	func_421(&(cParam0->f_7375), 100f);
	func_1237(cParam0);
	func_1238(cParam0, 1);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_897(&uLocal_455, 0);
	func_898(&uLocal_456, 0);
	func_901(&uLocal_489, 0);
	func_901(&uLocal_490, 0);
	func_896(&iLocal_163);
	func_896(&iLocal_237);
	func_896(&iLocal_253);
	func_896(&iLocal_247);
	if (!is_entity_dead(Global_35))
	{
		iLocal_163[2] = 1;
		set_ped_max_move_blend_ratio(Global_35, 1.5f);
		iLocal_163[2] = 1;
	}
	func_27(&uLocal_349, 0);
	func_27(&uLocal_346, 0);
	return 1;
}

int func_753(char[4] cParam0)
{
	if (func_1239(cParam0) > -1 && func_1239(cParam0) < 29)
	{
		func_1240(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5408))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5411))
		{
			return 0;
		}
		if (is_entity_dead(iLocal_94))
		{
			return 0;
		}
		if (&iLocal_163[34])
		{
			if (func_1241(cParam0))
			{
				if (func_1242(cParam0))
				{
					if (!bVar587)
					{
						iLocal_590 = 1;
						func_1238(cParam0, 1);
						func_1243(0, 1);
					}
				}
			}
		}
		else
		{
			func_1244();
		}
		func_1245(cParam0);
		func_1246(cParam0);
		func_1247(cParam0);
		func_1248(cParam0);
		func_1249(cParam0);
	}
	switch (func_1239(cParam0))
	{
		case 0:
			if (is_ped_on_mount(Global_35))
			{
				func_59(7);
				func_220(&uLocal_349);
				func_220(&uLocal_346);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (iLocal_163[4] && get_script_task_status(cParam0->f_5411, 713668775, true) == 8)
			{
				func_1250(cParam0, 0, 0, -1061158912);
				return 1;
			}
			break;
	}
	return 0;
}

int func_754(char[4] cParam0)
{
	func_165(cParam0, 0);
	if (func_1241(cParam0))
	{
		func_1242(cParam0);
	}
	if (&iLocal_260[2])
	{
		iLocal_260[2] = 0;
		if (assisted_movement_is_route_loaded("utopia2_ride_assist"))
		{
		}
	}
	func_181(cParam0);
	func_186();
	return 1;
}

void func_755(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1251(cParam0, iParam1);
	func_1233(cParam0, iParam1, iParam2);
	func_1252(cParam0, &iParam3, iParam1, 0);
	func_1252(cParam0, &iParam4, iParam1, 2);
	func_1252(cParam0, &iParam5, iParam1, 4);
	func_1252(cParam0, &iParam6, iParam1, 5);
	func_1252(cParam0, &iParam7, iParam1, 7);
	func_925(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1253(cParam0, iParam1, cVar0);
	func_1254(cParam0, iParam1, iParam10);
}

int func_756(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_128(cParam0, 2)) || func_128(cParam0, 1))
	{
	}
	return 1;
}

int func_757(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!is_entity_dead(Global_35))
		{
			if (!is_entity_dead(cParam0->f_5411))
			{
				func_1255(Global_35, cParam0->f_5411);
			}
			if (!func_128(cParam0, 2))
			{
				if (!func_166(&uVar0))
				{
					if (func_1235(1))
					{
						func_1256(-1623728698, 0);
					}
				}
			}
		}
		else
		{
			return 0;
		}
		if (!is_entity_dead(cParam0->f_5408))
		{
			if (!is_entity_dead(iLocal_94))
			{
				func_1255(cParam0->f_5408, iLocal_94);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		func_1243(1, 0);
		if (func_166(&uVar1))
		{
			if (!func_1235(1))
			{
				func_1257(1);
			}
		}
		else if (func_1235(1))
		{
			func_1236(1);
		}
	}
	func_1258(cParam0);
	func_1259(cParam0, "UTP2_OBJ02", -1082130432, 0, 0, -1, -1, 0);
	return 1;
}

int func_758(char[4] cParam0)
{
	func_1260(&(cParam0->f_5408), &iLocal_94, 1073741824);
	func_1260(&Global_35, &(cParam0->f_5411), 1073741824);
	_0x06d26a96ca1bca75(cParam0->f_5411, 3, 0f, 0);
	if (!is_entity_dead(iLocal_144))
	{
		set_vehicle_is_considered_by_player(iLocal_144, false);
	}
	if (does_entity_exist(&(iLocal_149[0])))
	{
		func_1261(cParam0, &(iLocal_149[0]));
		func_975(0);
	}
	func_900(&uLocal_457, 0);
	func_900(&uLocal_460, 0);
	func_900(&uLocal_465, 0);
	func_898(&uLocal_456, 0);
	func_897(&uLocal_455, 0);
	func_901(&uLocal_489, 0);
	func_901(&uLocal_490, 0);
	func_899(&uLocal_488, 0);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	iLocal_268 = 0;
	func_896(&iLocal_253);
	func_896(&iLocal_247);
	iLocal_163[64] = 0;
	func_27(&uLocal_349, 0);
	func_27(&uLocal_346, 0);
	stop_ped_speaking(cParam0->f_5408, true);
	if (!func_166(&uVar0))
	{
		func_1256(-1623728698, 0);
	}
	return 1;
}

int func_759(char[4] cParam0)
{
	if (func_1239(cParam0) > -1 && func_1239(cParam0) < 29)
	{
		func_1240(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5408))
		{
			return 0;
		}
		else if (!is_ped_on_mount(cParam0->f_5408))
		{
		}
		if (is_entity_dead(cParam0->f_5411))
		{
		}
		if (is_entity_dead(iLocal_94))
		{
			return 0;
		}
		if (is_entity_dead(iLocal_144))
		{
			return 0;
		}
		if (((is_entity_dead(&(iLocal_126[0])) && is_entity_dead(&(iLocal_126[1]))) && is_entity_dead(&(iLocal_126[2]))) && is_entity_dead(&(iLocal_126[3])))
		{
			return 0;
		}
		if (&iLocal_163[36])
		{
			if (&iLocal_163[35])
			{
				if (!&iLocal_163[37])
				{
					if (func_1262())
					{
						iLocal_163[37] = 1;
					}
				}
				if (!&iLocal_163[38])
				{
					if (does_rayfire_map_object_exist(iLocal_59))
					{
						if (!_does_anim_scene_exist(&(iLocal_310[3])))
						{
							iLocal_310[3] = _create_anim_scene("script@story@UTP2@IG@IG_4@IG_4_CHOP_TREE_RUN_AWAY", 0, 0, false, true);
							load_anim_scene(&(iLocal_310[3]));
						}
						else if (_is_anim_scene_loaded(&(iLocal_310[3]), true, false))
						{
							iLocal_163[38] = 1;
						}
					}
				}
				if (!&iLocal_163[40])
				{
					iLocal_163[40] = 1;
				}
			}
			else
			{
				func_1263();
			}
			func_1242(cParam0);
		}
		else
		{
			func_1264();
		}
		if (!&iLocal_163[64])
		{
			if (func_1265())
			{
				iLocal_163[64] = 1;
				func_1266(cParam0, 1691759731);
			}
		}
		func_1267(&iLocal_95, iLocal_144, 110f, 90f);
		func_1267(&iLocal_98, iLocal_144, 110f, 90f);
		func_1267(&iLocal_131, iLocal_144, 110f, 90f);
		func_1268(cParam0);
		if (!&iLocal_163[26])
		{
			func_1269(cParam0);
			func_1270(cParam0);
			func_1271(cParam0);
			func_1272(cParam0);
			func_1273(cParam0);
			func_1274(cParam0);
		}
		func_1249(cParam0);
	}
	if (!&iLocal_163[26])
	{
		if (!&iLocal_163[28])
		{
			if (func_1275(Global_35, iLocal_144, -1) || (!func_1276(&iLocal_95, 2) && !func_1276(&iLocal_98, 2)))
			{
				iLocal_163[28] = 1;
			}
		}
		if (!&iLocal_163[31])
		{
			if (!func_1276(&iLocal_95, 2) && !func_1276(&iLocal_98, 2))
			{
				iLocal_163[31] = 1;
			}
		}
		if (!&iLocal_163[30])
		{
			if ((get_ped_in_vehicle_seat(iLocal_144, -1) == 0 || get_ped_in_vehicle_seat(iLocal_144, -1) == Global_35) && (get_ped_in_vehicle_seat(iLocal_144, 0) == 0 || get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35))
			{
				_0xcbf88256e44d5d39(iLocal_144, 0);
				iLocal_163[30] = 1;
			}
		}
		if (does_entity_exist(iLocal_144))
		{
			_0x0794199b25e499e1(iLocal_144, 1);
		}
		switch (func_1239(cParam0))
		{
			case 0:
				func_1277(&uLocal_504, iLocal_144, 0, 0, 1, 1);
				if (!func_1276(&iLocal_95, 2) && !func_1276(&iLocal_98, 2))
				{
					func_181(cParam0);
					func_898(&uLocal_456, 69);
					func_220(&uLocal_349);
					func_135(cParam0, 51);
					func_220(&uLocal_346);
					func_134(cParam0, 2);
				}
				else if (!func_1276(&iLocal_95, 2))
				{
					if (func_1278())
					{
						func_47(1, 0);
					}
					func_899(&uLocal_488, 16);
					func_898(&uLocal_456, 45);
					func_900(&uLocal_460, 15);
					func_134(cParam0, 1);
				}
				else if (is_entity_in_volume(iLocal_144, Local_16.f_12, true, 0) || is_entity_in_volume(Global_35, Local_16.f_12, true, 0))
				{
					if (is_entity_in_volume(iLocal_144, Local_16.f_12, true, 0))
					{
					}
					else if (is_entity_in_volume(Global_35, Local_16.f_12, true, 0))
					{
					}
					if (func_213())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					func_469(0);
					func_469(1);
					func_898(&uLocal_456, 69);
					func_1233(cParam0, 1, 2);
					func_220(&uLocal_349);
					func_135(cParam0, 51);
					func_220(&uLocal_346);
					func_134(cParam0, 29);
				}
				else if (!func_1279(&(iLocal_95[0]), iLocal_144, 0) && !func_1279(&(iLocal_95[1]), iLocal_144, 0))
				{
					if (((!func_1280(&iLocal_95, iLocal_144, 90f) && !func_1281(&iLocal_95, Global_35, 90f)) && !func_1280(&iLocal_98, iLocal_144, 90f)) && !func_1281(&iLocal_98, Global_35, 90f))
					{
						func_181(cParam0);
						func_899(&uLocal_488, 16);
						func_898(&uLocal_456, 69);
						func_220(&uLocal_349);
						func_135(cParam0, 51);
						func_220(&uLocal_346);
						func_134(cParam0, 2);
					}
				}
				break;
			case 1:
				func_1277(&uLocal_504, iLocal_144, 0, 0, 1, 1);
				if (!func_1276(&iLocal_95, 2) && !func_1276(&iLocal_98, 2))
				{
					iLocal_163[28] = 1;
					func_181(cParam0);
					func_898(&uLocal_456, 69);
					func_220(&uLocal_349);
					func_135(cParam0, 51);
					func_220(&uLocal_346);
					func_134(cParam0, 2);
				}
				else if (is_entity_in_volume(iLocal_144, Local_16.f_12, true, 0) || is_entity_in_volume(Global_35, Local_16.f_12, true, 0))
				{
					if (is_entity_in_volume(iLocal_144, Local_16.f_12, true, 0))
					{
					}
					else if (is_entity_in_volume(Global_35, Local_16.f_12, true, 0))
					{
					}
					if (func_213())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					func_469(0);
					func_469(1);
					func_898(&uLocal_456, 69);
					func_1233(cParam0, 1, 2);
					func_220(&uLocal_349);
					func_135(cParam0, 51);
					func_220(&uLocal_346);
					func_134(cParam0, 29);
				}
				else if (!func_1280(&iLocal_98, iLocal_144, 90f) && !func_1281(&iLocal_98, Global_35, 90f))
				{
					func_181(cParam0);
					func_898(&uLocal_456, 69);
					func_220(&uLocal_349);
					func_135(cParam0, 51);
					func_220(&uLocal_346);
					func_134(cParam0, 2);
				}
				break;
			case 2:
				if (func_888(&uLocal_346) >= 2.5f)
				{
					if (func_213())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					func_220(&uLocal_349);
					func_135(cParam0, 51);
					func_220(&uLocal_346);
					func_134(cParam0, 29);
				}
				break;
			case 29:
				set_vehicle_doors_locked(iLocal_144, 1);
				return 1;
		}
	}
	return 0;
}

int func_760(var uParam0)
{
	if (!is_entity_dead(Global_35))
	{
		_0xbbadfb5e5e5766fb(get_player_index(), 0.75f);
	}
	if (!is_entity_dead(iLocal_144))
	{
		set_vehicle_is_considered_by_player(iLocal_144, true);
		if (!is_entity_dead(uParam0->f_5408))
		{
			if (&iLocal_163[28])
			{
				_set_vehicle_exclusive_driver_2(iLocal_144, uParam0->f_5408, 0);
			}
		}
	}
	if (func_1278())
	{
		func_47(1, 0);
	}
	func_176(&uLocal_504);
	func_186();
	return 1;
}

int func_761(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
	}
	return 1;
}

int func_762(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		if (!&iLocal_163[37])
		{
			if (func_1262())
			{
				iLocal_163[37] = 1;
			}
		}
		func_1242(cParam0);
		if (!is_entity_dead(&(iLocal_149[3])))
		{
			set_entity_invincible(&(iLocal_149[3]), true);
			set_entity_visible(&(iLocal_149[3]), false);
			freeze_entity_position(&(iLocal_149[3]), true);
			set_entity_collision(&(iLocal_149[3]), false, false);
		}
		if (!is_entity_dead(cParam0->f_5408))
		{
			if (_0xb655db7582aec805(cParam0->f_5408))
			{
				_0xf6262491c7704a63(cParam0->f_5408, 0);
			}
			func_172(6, 1056964608, -1, 1061158912);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (!&iLocal_163[0])
		{
			iLocal_163[0] = 1;
			iLocal_163[37] = 1;
			if (!is_entity_dead(Global_35))
			{
				func_1255(Global_35, cParam0->f_5411);
			}
			else
			{
				return 0;
			}
			if (!is_entity_dead(cParam0->f_5408))
			{
				func_1255(cParam0->f_5408, iLocal_94);
				if (has_ped_got_weapon(cParam0->f_5408, 36703333, 0, false))
				{
					set_current_ped_weapon(cParam0->f_5408, 36703333, true, 0, false, false);
				}
				if (has_ped_got_weapon(cParam0->f_5408, 13903789, 0, false))
				{
					set_current_ped_weapon(cParam0->f_5408, 13903789, true, 1, false, false);
				}
			}
			else
			{
				return 0;
			}
			if (!is_entity_dead(iLocal_144))
			{
				_task_vehicle_follow_waypoint_recording_2(iLocal_144, "utopia2_cross_river", 0, 0, 4194856, -1, -1082130432, 0, 1073741824, 0);
				set_vehicle_forward_speed(iLocal_144, 6f);
			}
			else
			{
				return 0;
			}
			func_983(iLocal_98[2], 0);
			func_983(iLocal_131[2], 0);
			func_983(iLocal_98[3], 0);
			func_983(iLocal_131[3], 0);
			if (!is_entity_dead(&(iLocal_149[3])))
			{
				set_entity_invincible(&(iLocal_149[3]), true);
				set_entity_visible(&(iLocal_149[3]), false);
				set_entity_no_collision_entity(&(iLocal_149[3]), iLocal_144, false);
				freeze_entity_position(&(iLocal_149[3]), true);
				set_entity_collision(&(iLocal_149[3]), false, false);
			}
			func_890(0f, -10f);
			func_220(&uLocal_346);
		}
		if (func_888(&uLocal_346) < 0.8f)
		{
			return 0;
		}
	}
	return 1;
}

int func_763(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		if (!&iLocal_163[37])
		{
			if (func_1262())
			{
				iLocal_163[37] = 1;
			}
		}
		func_1242(cParam0);
		if (!is_entity_dead(iLocal_144))
		{
			iVar0 = 0;
			while (iVar0 <= (2 - 1))
			{
				if (!is_entity_dead(&(iLocal_95[iVar0])))
				{
					if (get_ped_in_vehicle_seat(iLocal_144, -1) == &iLocal_95[iVar0])
					{
						clear_ped_tasks(&(iLocal_95[iVar0]), 1, 0);
					}
				}
				iVar0++;
			}
			_task_vehicle_follow_waypoint_recording_2(iLocal_144, "utopia2_cross_river", 0, 0, 520, -1, -1082130432, 0, 1073741824, 0);
		}
		else
		{
			return 0;
		}
	}
	func_1282(cParam0, 3);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_898(&uLocal_456, 0);
	func_899(&uLocal_488, 0);
	func_900(&uLocal_457, 0);
	func_900(&uLocal_460, 0);
	func_900(&uLocal_465, 0);
	func_900(&uLocal_474, 0);
	_0x098036cab8373d36(1);
	_0x10c44f633e2d6d9e(2);
	_0x7fb78b2199c10e92(25f);
	func_1283();
	func_901(&uLocal_489, 0);
	func_901(&uLocal_490, 0);
	iLocal_268 = 0;
	iLocal_163[61] = 0;
	iLocal_272 = 0;
	func_896(&iLocal_247);
	func_220(&uLocal_349);
	func_220(&uLocal_346);
	return 1;
}

int func_764(char[4] cParam0)
{
	if (func_1239(cParam0) > -1 && func_1239(cParam0) < 29)
	{
		func_1240(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5408))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5411))
		{
		}
		if (is_entity_dead(iLocal_94))
		{
		}
		if (!iVar485 >= 12)
		{
			if (is_entity_dead(iLocal_144))
			{
				return 0;
			}
			if (((is_entity_dead(&(iLocal_126[0])) && is_entity_dead(&(iLocal_126[1]))) && is_entity_dead(&(iLocal_126[2]))) && is_entity_dead(&(iLocal_126[3])))
			{
				return 0;
			}
		}
		if (!&iLocal_163[37])
		{
			if (func_1262())
			{
				iLocal_163[37] = 1;
			}
		}
		if (!&iLocal_163[42])
		{
			if (does_rayfire_map_object_exist(iLocal_59))
			{
				if (_does_anim_scene_exist(&(iLocal_310[3])))
				{
					if (_is_anim_scene_loaded(&(iLocal_310[3]), true, false))
					{
						if (_is_anim_scene_started(&(iLocal_310[3]), false))
						{
							if (_get_anim_scene_time(&(iLocal_310[3])) >= 6.325138f)
							{
								iLocal_163[42] = 1;
							}
						}
						else if (get_state_of_rayfire_map_object(iLocal_59) == 5)
						{
							func_1282(cParam0, 3);
							iLocal_163[42] = 1;
						}
					}
				}
			}
		}
		func_1284(cParam0);
		func_1285(cParam0);
		func_1286(cParam0);
		func_1287(cParam0);
		func_1288(cParam0);
		func_1249(cParam0);
	}
	switch (func_1239(cParam0))
	{
		case 0:
			fVar1 = func_1289(iLocal_144, func_388(5, 4), 0);
			if (fVar1 < 10f)
			{
				if (fVar1 < fVar564 || fVar564 == 0f)
				{
					fLocal_567 = fVar1;
				}
				else
				{
					bVar0 = true;
				}
				if (fVar1 < 1f)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				iLocal_163[49] = 1;
				func_1290(1);
				set_entity_load_collision_flag(Global_35, 1);
				set_entity_load_collision_flag(cParam0->f_5411, 1);
				freeze_entity_position(cParam0->f_5411, true);
				freeze_entity_position(Global_35, true);
				if (func_1278())
				{
					func_47(1, 0);
				}
				func_220(&uLocal_349);
				func_135(cParam0, 10);
				func_220(&uLocal_346);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (&iLocal_163[58])
			{
				iLocal_163[59] = 1;
				func_1291(cParam0, 5, 2);
				if (does_cam_exist(iLocal_60))
				{
					if (is_cam_rendering(iLocal_60))
					{
						render_script_cams(false, false, 3000, true, false, 0);
						set_cam_active(iLocal_60, false);
						destroy_cam(iLocal_60, false);
					}
				}
				if (&iLocal_163[1])
				{
					iLocal_163[1] = 0;
					set_player_control(get_player_index(), true, 0, false);
				}
				if (func_213())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_463(&iLocal_93);
				set_entity_load_collision_flag(cParam0->f_5411, 0);
				_0x9587913b9e772d29(cParam0->f_5411, 0);
				set_entity_load_collision_flag(Global_35, 0);
				_0x9587913b9e772d29(Global_35, 0);
				freeze_entity_position(cParam0->f_5411, false);
				freeze_entity_position(Global_35, false);
				func_898(&uLocal_456, 69);
				func_220(&uLocal_349);
				func_135(cParam0, 51);
				func_220(&uLocal_346);
				func_134(cParam0, 29);
				return 1;
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_765(var uParam0)
{
	if (func_1278())
	{
		func_47(0, 0);
	}
	func_186();
	return 1;
}

int func_766(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
	}
	return 1;
}

int func_767(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		if (!is_entity_dead(Global_35))
		{
			if (!get_ped_config_flag(Global_35, 104, true))
			{
				set_ped_config_flag(Global_35, 104, true);
			}
			set_ped_can_use_auto_conversation_lookat(Global_35, true);
		}
		else
		{
			return 0;
		}
		if (!is_entity_dead(cParam0->f_5408))
		{
			set_ped_can_use_auto_conversation_lookat(cParam0->f_5408, true);
			if (_0xb655db7582aec805(cParam0->f_5408))
			{
				_0xf6262491c7704a63(cParam0->f_5408, 0);
			}
			func_172(6, 1056964608, -1, 1061158912);
			if (!is_entity_dead(iLocal_144))
			{
				_set_vehicle_exclusive_driver_2(iLocal_144, cParam0->f_5408, 0);
				_0x0794199b25e499e1(iLocal_144, 0);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (!&iLocal_163[0])
		{
			iLocal_163[0] = 1;
			if (!is_entity_dead(iLocal_144))
			{
				if (!is_entity_dead(Global_35))
				{
					set_ped_into_vehicle(Global_35, iLocal_144, 0);
					iLocal_163[17] = 1;
				}
				if (!is_entity_dead(Global_35))
				{
					if (!get_ped_config_flag(Global_35, 104, true))
					{
						set_ped_config_flag(Global_35, 104, true);
					}
				}
				else
				{
					return 0;
				}
				if (!is_entity_dead(cParam0->f_5408))
				{
					set_ped_into_vehicle(cParam0->f_5408, iLocal_144, -1);
					_set_vehicle_exclusive_driver_2(iLocal_144, cParam0->f_5408, 0);
					set_ped_can_use_auto_conversation_lookat(cParam0->f_5408, true);
					func_1292(cParam0, 0);
				}
				else
				{
					return 0;
				}
				set_vehicle_forward_speed(iLocal_144, 6f);
			}
			else
			{
				return 0;
			}
			func_469(0);
			func_469(1);
			func_890(0f, 0f);
			func_220(&uLocal_346);
		}
		if (func_888(&uLocal_346) < 0.8f)
		{
			return 0;
		}
	}
	return 1;
}

int func_768(char[4] cParam0)
{
	func_898(&uLocal_456, 0);
	set_ped_config_flag(cParam0->f_5408, 167, false);
	func_899(&uLocal_488, 0);
	func_900(&uLocal_457, 0);
	func_900(&uLocal_460, 0);
	func_900(&uLocal_465, 0);
	iLocal_268 = 0;
	iLocal_595 = 0;
	iLocal_269 = 0;
	iLocal_270 = 0;
	func_896(&iLocal_247);
	iLocal_309 = 0;
	func_220(&uLocal_349);
	func_220(&uLocal_346);
	if (!func_8(cParam0, 8))
	{
		func_135(cParam0, 20);
		func_134(cParam0, 4);
	}
	else
	{
		iLocal_163[17] = 0;
		func_135(cParam0, 0);
		func_134(cParam0, 0);
	}
	stop_ped_speaking(cParam0->f_5408, true);
	return 1;
}

int func_769(char[4] cParam0)
{
	if (func_1239(cParam0) > -1 && func_1239(cParam0) < 29)
	{
		func_1240(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5408))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5411))
		{
		}
		if (is_entity_dead(iLocal_94))
		{
		}
		if (is_entity_dead(iLocal_144))
		{
			return 0;
		}
		if (&iLocal_163[32])
		{
			set_vehicle_doors_locked(iLocal_144, 0);
			iLocal_163[32] = 0;
		}
		if (!is_ped_in_vehicle(cParam0->f_5408, iLocal_144, false))
		{
			set_ped_reset_flag(cParam0->f_5408, 335, true);
		}
		if (_0x1d46b417f926d34d(Global_35))
		{
			get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
			if (iVar0 != -1569615261)
			{
				_hide_ped_weapons(Global_35, 2, true);
			}
		}
		if (!is_ped_in_vehicle(Global_35, iLocal_144, false))
		{
			set_ped_reset_flag(Global_35, 335, true);
		}
		if (((is_entity_dead(&(iLocal_126[0])) && is_entity_dead(&(iLocal_126[1]))) && is_entity_dead(&(iLocal_126[2]))) && is_entity_dead(&(iLocal_126[3])))
		{
			return 0;
		}
		if (is_control_just_pressed(0, 613911080))
		{
			func_1293(Global_35, 869278708, 1971704925);
		}
		if (&iLocal_163[36])
		{
			if (&iLocal_163[35])
			{
				if (!&iLocal_163[37])
				{
					if (func_1262())
					{
						iLocal_163[37] = 1;
					}
				}
				if (!&iLocal_163[38])
				{
					if (does_rayfire_map_object_exist(iLocal_59))
					{
						if (!_does_anim_scene_exist(&(iLocal_310[3])))
						{
							iLocal_310[3] = _create_anim_scene("script@story@UTP2@IG@IG_4@IG_4_CHOP_TREE_RUN_AWAY", 0, 0, false, true);
							load_anim_scene(&(iLocal_310[3]));
						}
						else if (_is_anim_scene_loaded(&(iLocal_310[3]), true, false))
						{
							func_1282(cParam0, 3);
							if (_is_anim_scene_started(&(iLocal_310[3]), false))
							{
								set_anim_scene_paused(&(iLocal_310[3]), true);
								iLocal_163[38] = 1;
							}
						}
					}
				}
				if (!&iLocal_163[40])
				{
					iLocal_163[40] = 1;
				}
			}
			else
			{
				func_1263();
			}
			func_1242(cParam0);
		}
		else
		{
			func_1264();
		}
		func_1294(&iLocal_95, &uLocal_62);
		func_1294(&iLocal_98, &uLocal_65);
		func_1294(&iLocal_103, &uLocal_70);
		func_1267(&iLocal_95, iLocal_144, 110f, 90f);
		func_1267(&iLocal_98, iLocal_144, 110f, 90f);
		func_1267(&iLocal_131, iLocal_144, 110f, 90f);
		func_1295(cParam0);
		func_1296(cParam0);
		func_1297(cParam0);
		func_1298(cParam0);
		func_1249(cParam0);
	}
	switch (func_1239(cParam0))
	{
		case 0:
			if ((get_seat_ped_is_trying_to_enter(Global_35) == 0 || get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35) && get_ped_in_vehicle_seat(iLocal_144, -1) == cParam0->f_5408)
			{
				disable_control_action(0, -17122892, false);
			}
			if (!&iLocal_163[14])
			{
				if ((get_vehicle_ped_is_entering(Global_35) == iLocal_144 && get_seat_ped_is_trying_to_enter(Global_35) == 0) || get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35)
				{
					iLocal_163[14] = 1;
					func_463(&iLocal_93);
					if (func_213())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					func_135(cParam0, 15);
				}
			}
			else if (!(get_vehicle_ped_is_entering(Global_35) == iLocal_144 && get_seat_ped_is_trying_to_enter(Global_35) == 0) && !is_ped_in_vehicle(Global_35, iLocal_144, true))
			{
				iLocal_163[14] = 0;
			}
			if (&iLocal_163[13])
			{
				func_220(&uLocal_449);
				func_220(&uLocal_346);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (get_ped_in_vehicle_seat(iLocal_144, -1) == cParam0->f_5408)
			{
				if ((get_seat_ped_is_trying_to_enter(Global_35) == 0 || get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35) && get_ped_in_vehicle_seat(iLocal_144, -1) == cParam0->f_5408)
				{
					disable_control_action(0, -17122892, false);
				}
				if (func_888(&uLocal_346) <= 2f)
				{
					if (!&iLocal_163[14])
					{
						if ((get_vehicle_ped_is_entering(Global_35) == iLocal_144 && get_seat_ped_is_trying_to_enter(Global_35) == 0) || get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35)
						{
							iLocal_163[14] = 1;
						}
					}
					else if (!(get_vehicle_ped_is_entering(Global_35) == iLocal_144 && get_seat_ped_is_trying_to_enter(Global_35) == 0) && !is_ped_in_vehicle(Global_35, iLocal_144, true))
					{
						iLocal_163[14] = 0;
					}
				}
				if (!&iLocal_163[16])
				{
					if ((get_vehicle_ped_is_entering(Global_35) == iLocal_144 && get_seat_ped_is_trying_to_enter(Global_35) == 0) || get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35)
					{
						iLocal_163[16] = 1;
						if (!&iLocal_163[14])
						{
							iLocal_163[19] = 1;
						}
						if (func_213())
						{
							_0xdd1232b332cbb9e7(3, 1, 0);
						}
						if (func_1278())
						{
							func_47(1, 0);
						}
						func_469(0);
						func_220(&uLocal_361);
						func_898(&uLocal_456, 27);
						if (&iLocal_163[14])
						{
							func_220(&uLocal_349);
							func_135(cParam0, 10);
						}
						else
						{
							func_220(&uLocal_349);
							func_135(cParam0, 15);
						}
					}
				}
				else if (get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35)
				{
					iLocal_163[17] = 1;
					if (func_213())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					if (!get_ped_config_flag(Global_35, 141, true))
					{
						set_ped_config_flag(Global_35, 141, true);
					}
					func_462(cParam0, cParam0->f_5408, 1);
					func_463(&iLocal_93);
					func_220(&uLocal_346);
					func_134(cParam0, 2);
				}
				else if (is_entity_in_volume(iLocal_144, Local_16.f_29, true, 0) || is_entity_in_volume(Global_35, Local_16.f_29, true, 0))
				{
					if (!_0x660639bc60157048(Global_35, iLocal_144))
					{
						if (is_entity_in_volume(iLocal_144, Local_16.f_29, true, 0))
						{
						}
						else if (is_entity_in_volume(Global_35, Local_16.f_29, true, 0))
						{
						}
						if (func_213())
						{
							_0xdd1232b332cbb9e7(3, 1, 0);
						}
						func_462(cParam0, cParam0->f_5408, 1);
						func_463(&iLocal_93);
						func_469(0);
						func_469(1);
						func_1292(cParam0, 0);
						func_220(&uLocal_361);
						func_898(&uLocal_456, 69);
						func_220(&uLocal_349);
						func_135(cParam0, 51);
						func_220(&uLocal_346);
						func_134(cParam0, 29);
					}
				}
			}
			break;
		case 2:
			if ((get_seat_ped_is_trying_to_enter(Global_35) == 0 || get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35) && get_ped_in_vehicle_seat(iLocal_144, -1) == cParam0->f_5408)
			{
				disable_control_action(0, -17122892, false);
			}
			if (&iLocal_163[20])
			{
				func_220(&uLocal_349);
				func_135(cParam0, 20);
				func_220(&uLocal_346);
				func_134(cParam0, 4);
			}
			else if (is_entity_in_volume(iLocal_144, Local_16.f_29, true, 0) || is_entity_in_volume(Global_35, Local_16.f_29, true, 0))
			{
				if (is_entity_in_volume(iLocal_144, Local_16.f_29, true, 0))
				{
				}
				else if (is_entity_in_volume(Global_35, Local_16.f_29, true, 0))
				{
				}
				if (func_213())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_469(0);
				func_469(1);
				func_1292(cParam0, 0);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 69);
				func_220(&uLocal_349);
				func_135(cParam0, 51);
				func_220(&uLocal_346);
				func_134(cParam0, 29);
			}
			break;
		case 3:
			if (is_ped_in_vehicle(Global_35, iLocal_144, false) && get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35)
			{
				iLocal_163[17] = 1;
				if (func_213())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				if (!get_ped_config_flag(Global_35, 141, true))
				{
					set_ped_config_flag(Global_35, 141, true);
				}
				func_462(cParam0, cParam0->f_5408, 1);
				func_463(&iLocal_93);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 53);
				func_220(&uLocal_349);
				func_135(cParam0, 20);
				func_220(&uLocal_346);
				func_134(cParam0, 4);
			}
			else if (is_entity_in_volume(iLocal_144, Local_16.f_29, true, 0) || is_entity_in_volume(Global_35, Local_16.f_29, true, 0))
			{
				if (is_entity_in_volume(iLocal_144, Local_16.f_29, true, 0))
				{
				}
				else if (is_entity_in_volume(Global_35, Local_16.f_29, true, 0))
				{
				}
				if (func_213())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_469(0);
				func_469(1);
				func_1292(cParam0, 0);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 69);
				func_220(&uLocal_349);
				func_135(cParam0, 51);
				func_220(&uLocal_346);
				func_134(cParam0, 29);
			}
			break;
		case 4:
			if (is_entity_in_volume(iLocal_144, Local_16.f_29, true, 0) || is_entity_in_volume(Global_35, Local_16.f_29, true, 0))
			{
				if (is_entity_in_volume(iLocal_144, Local_16.f_29, true, 0))
				{
				}
				else if (is_entity_in_volume(Global_35, Local_16.f_29, true, 0))
				{
				}
				if (func_213())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_469(0);
				func_469(1);
				func_1292(cParam0, 0);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 69);
				func_220(&uLocal_349);
				func_135(cParam0, 51);
				func_220(&uLocal_346);
				func_134(cParam0, 29);
			}
			else if (iVar453 == 54)
			{
				if (get_ped_in_vehicle_seat(iLocal_144, -1) == cParam0->f_5408)
				{
					if (!get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35)
					{
						iLocal_163[17] = 0;
						iLocal_598 = 1;
						if (func_213())
						{
							_0xdd1232b332cbb9e7(3, 1, 0);
						}
						func_220(&uLocal_367);
						func_899(&uLocal_488, 18);
						func_220(&uLocal_361);
						func_898(&uLocal_456, 59);
						func_220(&uLocal_349);
						func_135(cParam0, 40);
						func_220(&uLocal_346);
						func_134(cParam0, 3);
					}
				}
			}
			break;
		case 5:
			iLocal_596 = 1;
			if (bVar593)
			{
				if ((get_seat_ped_is_trying_to_enter(Global_35) == 0 || get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35) && get_ped_in_vehicle_seat(iLocal_144, -1) == cParam0->f_5408)
				{
					disable_control_action(0, -17122892, false);
				}
			}
			if (is_entity_in_volume(iLocal_144, Local_16.f_29, true, 0) || is_entity_in_volume(Global_35, Local_16.f_29, true, 0))
			{
				if (is_entity_in_volume(iLocal_144, Local_16.f_29, true, 0))
				{
				}
				else if (is_entity_in_volume(Global_35, Local_16.f_29, true, 0))
				{
				}
				if (func_213())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_469(0);
				func_469(1);
				func_1292(cParam0, 0);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 69);
				func_220(&uLocal_349);
				func_135(cParam0, 51);
				func_220(&uLocal_346);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_770(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (!is_entity_dead(iLocal_144))
		{
			if (get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35)
			{
				iLocal_163[59] = 0;
			}
			else
			{
				iLocal_163[59] = 1;
			}
		}
		set_ped_can_use_auto_conversation_lookat(Global_35, false);
	}
	if (!is_entity_dead(cParam0->f_5408))
	{
		set_ped_can_use_auto_conversation_lookat(cParam0->f_5408, false);
		stop_ped_speaking(cParam0->f_5408, false);
	}
	set_player_control(player_id(), false, 256, false);
	func_181(cParam0);
	func_186();
	return 1;
}

int func_771(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
	}
	return 1;
}

int func_772(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		if (!&iLocal_163[37])
		{
			if (func_1262())
			{
				iLocal_163[37] = 1;
			}
		}
		func_1242(cParam0);
	}
	else
	{
		if (!&iLocal_163[0])
		{
			iLocal_163[0] = 1;
			iLocal_163[37] = 1;
			if (!is_entity_dead(iLocal_144))
			{
				if (!is_entity_dead(Global_35))
				{
					set_ped_into_vehicle(Global_35, iLocal_144, 0);
				}
				else
				{
					return 0;
				}
				if (!is_entity_dead(cParam0->f_5408))
				{
					set_ped_into_vehicle(cParam0->f_5408, iLocal_144, -1);
				}
				else
				{
					return 0;
				}
				_task_vehicle_follow_waypoint_recording_2(iLocal_144, "utopia2_cross_river", 0, 0, 520, -1, -1082130432, 0, 1073741824, 0);
				set_vehicle_forward_speed(iLocal_144, 6f);
			}
			else
			{
				return 0;
			}
			func_890(0f, 0f);
			func_220(&uLocal_346);
		}
		if (func_888(&uLocal_346) < 0.8f)
		{
			return 0;
		}
	}
	return 1;
}

int func_773(char[4] cParam0)
{
	set_player_control(player_id(), false, 256, false);
	if (func_8(cParam0, 8))
	{
		if (!&iLocal_163[37])
		{
			if (func_1262())
			{
				iLocal_163[37] = 1;
			}
		}
		func_1242(cParam0);
		if (!is_entity_dead(iLocal_144))
		{
			if (!is_entity_dead(cParam0->f_5408))
			{
				clear_ped_tasks(cParam0->f_5408, 1, 0);
			}
			_task_vehicle_follow_waypoint_recording_2(iLocal_144, "utopia2_cross_river", 0, 0, 520, -1, -1082130432, 0, 1073741824, 0);
		}
		else
		{
			return 0;
		}
	}
	func_1261(cParam0, cParam0->f_5411);
	func_1261(cParam0, iLocal_94);
	if (!&iLocal_163[59])
	{
		func_420(&(cParam0->f_7375), 75f);
		func_421(&(cParam0->f_7375), 100f);
		func_1237(cParam0);
		func_1238(cParam0, 2);
	}
	if (!is_entity_dead(&(iLocal_103[2])))
	{
		if (_get_ped_crouch_movement(&(iLocal_103[2])))
		{
			_set_ped_crouch_movement(&(iLocal_103[2]), false, 0, false);
		}
		set_blocking_of_non_temporary_events(&(iLocal_103[2]), true);
		open_sequence_task(&iLocal_61);
		task_go_to_coord_while_aiming_at_coord(0, func_388(5, 7), func_388(5, 21), 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 0);
		task_put_ped_directly_into_cover(0, func_388(5, 7), -1, 0, 0, 0, 0, 0, 0, 0, 0);
		task_aim_at_entity(0, Global_35, -1, 1, 0);
		close_sequence_task(iLocal_61);
		task_perform_sequence(&(iLocal_103[2]), iLocal_61);
		clear_sequence_task(&iLocal_61);
	}
	if (!is_entity_dead(&(iLocal_103[3])))
	{
		if (_get_ped_crouch_movement(&(iLocal_103[3])))
		{
			_set_ped_crouch_movement(&(iLocal_103[3]), false, 0, false);
		}
		set_blocking_of_non_temporary_events(&(iLocal_103[3]), true);
		open_sequence_task(&iLocal_61);
		task_go_to_coord_while_aiming_at_coord(0, func_388(5, 8), func_388(5, 21), 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 0);
		task_put_ped_directly_into_cover(0, func_388(5, 8), -1, 0, 0, 0, 0, 0, 0, 0, 0);
		task_aim_at_entity(0, Global_35, -1, 1, 0);
		close_sequence_task(iLocal_61);
		task_perform_sequence(&(iLocal_103[3]), iLocal_61);
		clear_sequence_task(&iLocal_61);
	}
	if (!_is_anim_scene_started(&(iLocal_310[3]), false))
	{
		func_1282(cParam0, 3);
	}
	else if (_is_anim_scene_paused(&(iLocal_310[3])))
	{
		set_anim_scene_paused(&(iLocal_310[3]), false);
	}
	if (is_ped_in_vehicle(Global_35, iLocal_144, true))
	{
		_set_anim_scene_playback_list_bool(&(iLocal_310[2]), "pl_WeAreGettingRobbed_both", true);
		func_1299(&iLocal_103, 0);
	}
	else
	{
		_set_anim_scene_playback_list_bool(&(iLocal_310[2]), "pl_WeAreGettingRobbed_Micah", true);
	}
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_898(&uLocal_456, 0);
	func_899(&uLocal_488, 0);
	func_900(&uLocal_457, 0);
	func_900(&uLocal_460, 0);
	func_900(&uLocal_465, 0);
	func_900(&uLocal_474, 0);
	func_901(&uLocal_489, 0);
	func_901(&uLocal_490, 0);
	iLocal_268 = 0;
	func_896(&iLocal_247);
	func_220(&uLocal_349);
	func_220(&uLocal_346);
	return 1;
}

int func_774(char[4] cParam0)
{
	set_player_control(player_id(), false, 256, false);
	if (func_1239(cParam0) > -1 && func_1239(cParam0) < 29)
	{
		func_1240(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5408))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5411))
		{
		}
		if (is_entity_dead(iLocal_94))
		{
		}
		if (!iVar485 >= 12)
		{
			if (is_entity_dead(iLocal_144))
			{
				return 0;
			}
			if (((is_entity_dead(&(iLocal_126[0])) && is_entity_dead(&(iLocal_126[1]))) && is_entity_dead(&(iLocal_126[2]))) && is_entity_dead(&(iLocal_126[3])))
			{
				return 0;
			}
		}
		if (!&iLocal_163[37])
		{
			if (func_1262())
			{
				iLocal_163[37] = 1;
			}
		}
		if (!&iLocal_163[42])
		{
			if (does_rayfire_map_object_exist(iLocal_59))
			{
				if (_does_anim_scene_exist(&(iLocal_310[3])))
				{
					if (_is_anim_scene_loaded(&(iLocal_310[3]), true, false))
					{
						if (_is_anim_scene_started(&(iLocal_310[3]), false))
						{
							if (_get_anim_scene_time(&(iLocal_310[3])) >= 6.325138f)
							{
								iLocal_163[42] = 1;
							}
						}
						else if (get_state_of_rayfire_map_object(iLocal_59) == 5)
						{
							func_1282(cParam0, 3);
							iLocal_163[42] = 1;
						}
					}
				}
			}
		}
		func_1300(cParam0);
		func_1301(cParam0);
		func_1302(cParam0);
		func_1303(cParam0);
		func_1304(cParam0);
		func_1305();
		func_1249(cParam0);
	}
	switch (func_1239(cParam0))
	{
		case 0:
			if (!&iLocal_163[69])
			{
				if (_is_anim_scene_started(&(iLocal_310[2]), false))
				{
					if (_get_anim_scene_time(&(iLocal_310[2])) > 1.6f)
					{
						func_47(0, 0);
						iLocal_163[69] = 1;
					}
				}
				else if (is_entity_in_volume(iLocal_144, Local_16.f_12, true, 0))
				{
					func_1282(cParam0, 2);
				}
			}
			if (_does_anim_scene_exist(&(iLocal_310[2])))
			{
				if (_is_anim_scene_loaded(&(iLocal_310[2]), true, false))
				{
					if (_is_anim_scene_started(&(iLocal_310[2]), false))
					{
					}
					if (has_anim_event_fired(Global_35, -1706437966) || &iLocal_163[66] == 1)
					{
						iLocal_163[66] = 1;
						_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
					}
					if (has_anim_event_fired(Global_35, -2067416993))
					{
						if (func_1278())
						{
							func_47(1, 0);
						}
						if (get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35)
						{
							set_ped_config_flag(Global_35, 254, true);
						}
						iLocal_163[65] = 1;
						set_ped_config_flag(cParam0->f_5408, 254, true);
						func_220(&uLocal_364);
						if (&iLocal_163[59])
						{
							iLocal_163[49] = 1;
							func_220(&uLocal_346);
							func_134(cParam0, 1);
						}
						else
						{
							if (func_213())
							{
								_0xdd1232b332cbb9e7(3, 1, 0);
							}
							func_462(cParam0, cParam0->f_5408, 1);
							func_220(&uLocal_367);
							func_899(&uLocal_488, 20);
							func_220(&uLocal_349);
							func_135(cParam0, 51);
							return 1;
						}
					}
				}
			}
			break;
		case 1:
			if (&iLocal_163[58])
			{
				iLocal_163[59] = 1;
				func_1291(cParam0, 5, 2);
				if (func_213())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_898(&uLocal_456, 69);
				func_220(&uLocal_349);
				func_135(cParam0, 51);
				func_220(&uLocal_346);
				func_134(cParam0, 29);
				return 1;
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_775(char[4] cParam0)
{
	if (func_1278())
	{
		func_47(0, 0);
	}
	func_181(cParam0);
	func_186();
	return 1;
}

int func_776(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_128(cParam0, 2)) || func_128(cParam0, 1))
	{
	}
	return 1;
}

int func_777(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		func_1242(cParam0);
	}
	func_469(2);
	if (!is_entity_dead(cParam0->f_5408))
	{
		set_ped_config_flag(cParam0->f_5408, 254, true);
		if (func_8(cParam0, 8))
		{
			if (has_ped_got_weapon(cParam0->f_5408, 36703333, 0, false))
			{
				set_current_ped_weapon(cParam0->f_5408, 36703333, false, 2, false, false);
			}
			if (has_ped_got_weapon(cParam0->f_5408, 13903789, 0, false))
			{
				set_current_ped_weapon(cParam0->f_5408, 13903789, false, 3, false, false);
			}
		}
		_0x83b8d50eb9446bba(cParam0->f_5408, 0);
	}
	if (!&iLocal_163[59])
	{
		iVar0 = 0;
		while (iVar0 <= (8 - 1))
		{
			if (!is_entity_dead(&(iLocal_103[iVar0])))
			{
				if (func_8(cParam0, 8))
				{
					if (iVar0 == 0)
					{
						func_1306(&(iLocal_103[iVar0]), func_223(5, 5), 2, 1073741824);
					}
					else if (iVar0 == 1)
					{
						func_1306(&(iLocal_103[iVar0]), func_223(5, 6), 2, 1073741824);
					}
					else if (iVar0 == 2)
					{
						func_1306(&(iLocal_103[iVar0]), func_223(5, 7), 2, 1073741824);
					}
					else if (iVar0 == 3)
					{
						func_1306(&(iLocal_103[iVar0]), func_223(5, 8), 2, 1073741824);
					}
					else if (iVar0 == 4)
					{
						func_1306(&(iLocal_103[iVar0]), func_223(4, 9), 2, 1073741824);
					}
					else if (iVar0 == 5)
					{
						func_1306(&(iLocal_103[iVar0]), func_223(4, 10), 2, 1073741824);
					}
					else if (iVar0 == 6)
					{
						func_1306(&(iLocal_103[iVar0]), func_223(5, 11), 2, 1073741824);
					}
					else if (iVar0 == 7)
					{
						func_1306(&(iLocal_103[iVar0]), func_223(5, 12), 2, 1073741824);
					}
				}
				_set_ped_crouch_movement(&(iLocal_103[iVar0]), false, 0, false);
				if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 7)
				{
					set_current_ped_weapon(&(iLocal_103[iVar0]), -1471716628, true, 0, false, false);
				}
				else
				{
					set_current_ped_weapon(&(iLocal_103[iVar0]), 379542007, true, 0, false, false);
				}
				set_blocking_of_non_temporary_events(&(iLocal_103[iVar0]), true);
				task_aim_at_entity(&(iLocal_103[iVar0]), Global_35, -1, 1, 0);
			}
			iVar0++;
		}
	}
	func_1259(cParam0, "UTP2_OBJ05", -1082130432, 0, 0, -1, -1, 0);
	func_380(cParam0, 65536);
	if (has_ped_got_weapon(Global_35, -1471716628, 0, false))
	{
		_hide_ped_weapons(Global_35, 2, true);
		set_current_ped_weapon(Global_35, -1471716628, true, 0, false, false);
	}
	_0x72d4cb5db927009c(func_1307(0, 0), -1, 0);
	_0x72d4cb5db927009c(13903789, -1, 0);
	_0x140b3cb1d424a945(cParam0->f_5408, -1);
	_0x140b3cb1d424a945(Global_35, -1);
	func_901(&uLocal_491, 0);
	return 1;
}

int func_778(char[4] cParam0)
{
	if (does_entity_exist(&(iLocal_149[3])))
	{
	}
	if (!_is_imap_active(-928367655))
	{
		_request_imap(-928367655);
	}
	if (func_8(cParam0, 8))
	{
		func_1242(cParam0);
	}
	else
	{
		if (does_rayfire_map_object_exist(iLocal_58))
		{
			if (get_state_of_rayfire_map_object(iLocal_58) != 9)
			{
				set_state_of_rayfire_map_object(iLocal_58, 9);
			}
		}
		if (does_rayfire_map_object_exist(iLocal_59))
		{
			if (get_state_of_rayfire_map_object(iLocal_59) != 9)
			{
				set_state_of_rayfire_map_object(iLocal_59, 9);
			}
		}
	}
	if (!&iLocal_163[59])
	{
		if (!is_entity_dead(cParam0->f_5411))
		{
			func_1306(cParam0->f_5411, func_223(5, 19), 2, 1073741824);
		}
		if (!is_entity_dead(iLocal_94))
		{
			func_1306(iLocal_94, func_223(5, 20), 2, 1073741824);
		}
		if (!is_entity_dead(Global_35))
		{
			if (is_ped_in_cover(Global_35, 0, 0))
			{
				if (func_120(cParam0, 4))
				{
					func_890(60f, 0f);
					func_897(&uLocal_455, 6);
				}
				else
				{
					func_897(&uLocal_455, 0);
				}
			}
			else
			{
				func_897(&uLocal_455, 0);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		func_897(&uLocal_455, 4);
	}
	func_1299(&iLocal_103, 1);
	if (_does_volume_exist(Local_16.f_18))
	{
		_0x2a10538d0a005e81(Local_16.f_18, 2);
	}
	if (!has_ped_got_weapon(cParam0->f_5408, 13903789, 0, false))
	{
		func_1308(cParam0->f_5408, 13903789, 50, 5, 3, 1056964608, 1065353216, 0);
	}
	else
	{
		set_current_ped_weapon(cParam0->f_5408, 13903789, true, 3, true, false);
	}
	func_975(2);
	iLocal_163[65] = 1;
	set_ped_config_flag(cParam0->f_5408, 254, true);
	func_220(&uLocal_364);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_898(&uLocal_456, 0);
	func_900(&uLocal_457, 0);
	func_900(&uLocal_460, 0);
	func_900(&uLocal_465, 0);
	func_900(&uLocal_474, 0);
	_0x098036cab8373d36(1);
	_0x10c44f633e2d6d9e(2);
	_0x7fb78b2199c10e92(25f);
	func_1283();
	func_901(&uLocal_489, 0);
	func_901(&uLocal_490, 0);
	iLocal_268 = 0;
	iLocal_163[61] = 0;
	iLocal_272 = 0;
	func_896(&iLocal_247);
	func_27(&uLocal_349, 0);
	func_27(&uLocal_346, 0);
	set_player_control(player_id(), true, 0, false);
	return 1;
}

int func_779(char[4] cParam0)
{
	if (func_1239(cParam0) > -1 && func_1239(cParam0) < 29)
	{
		func_1240(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5408))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5411))
		{
		}
		if (is_entity_dead(iLocal_94))
		{
		}
		if (is_entity_dead(&(iLocal_149[3])))
		{
		}
		if (!is_entity_dead(iLocal_144))
		{
			func_465(&iLocal_144, 0);
		}
		if (!is_entity_dead(&(iLocal_126[0])))
		{
			func_983(iLocal_126[0], 0);
		}
		if (!is_entity_dead(&(iLocal_126[1])))
		{
			func_983(iLocal_126[1], 0);
		}
		if (!is_entity_dead(&(iLocal_126[2])))
		{
			func_983(iLocal_126[2], 0);
		}
		if (!is_entity_dead(&(iLocal_126[3])))
		{
			func_983(iLocal_126[3], 0);
		}
		if (!&iLocal_163[55])
		{
			if (does_entity_exist(&(iLocal_149[4])))
			{
				if (is_entity_dead(&(iLocal_149[4])) || has_entity_been_damaged_by_entity(&(iLocal_149[4]), Global_35, 1, 1))
				{
					iLocal_163[55] = 1;
					func_1309();
				}
			}
		}
		func_1310(cParam0);
		func_1311(cParam0);
		func_1312(cParam0);
		func_1313(cParam0);
		func_1314(cParam0);
		func_1249(cParam0);
	}
	switch (func_1239(cParam0))
	{
		case 0:
			if (&iLocal_492[6] == 2)
			{
				func_220(&uLocal_349);
				func_135(cParam0, 15);
				func_220(&uLocal_346);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (&iLocal_492[7] == 2)
			{
				func_220(&uLocal_349);
				func_135(cParam0, 17);
				func_220(&uLocal_346);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (&iLocal_163[57])
			{
				if (func_888(&uLocal_346) > 5f && !func_164())
				{
					if (func_213())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					func_181(cParam0);
					func_220(&uLocal_346);
					func_134(cParam0, 3);
				}
			}
			if (func_1315(cParam0) >= 51)
			{
				if ((((((&iLocal_492[0] == 2 && &iLocal_492[2] == 2) && &iLocal_492[3] == 2) && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
				{
					if ((((((!func_1276(&iLocal_95, 2) && !func_1276(&iLocal_98, 2)) && !func_1276(&iLocal_103, 2)) && !func_1276(&iLocal_112, 2)) && !func_1276(&iLocal_115, 2)) && !func_1276(&iLocal_120, 2)) && !func_1276(&iLocal_123, 2))
					{
						if (func_213())
						{
							_0xdd1232b332cbb9e7(3, 1, 0);
						}
						func_181(cParam0);
						func_220(&uLocal_346);
						func_134(cParam0, 3);
					}
				}
			}
			break;
		case 3:
			if (func_888(&uLocal_346) >= 2.5f)
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
				func_220(&uLocal_346);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_780(char[4] cParam0)
{
	_0x4f57397388e1dff8();
	if (func_1278())
	{
		func_47(0, 0);
	}
	func_181(cParam0);
	func_186();
	return 1;
}

int func_781(var uParam0)
{
	return 1;
}

int func_782(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
	}
	return 1;
}

int func_783(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!is_entity_dead(Global_35))
		{
		}
		else
		{
			return 0;
		}
		if (!is_entity_dead(cParam0->f_5408))
		{
			if (has_ped_got_weapon(cParam0->f_5408, 36703333, 0, false))
			{
				set_current_ped_weapon(cParam0->f_5408, 36703333, true, 0, false, false);
			}
			if (has_ped_got_weapon(cParam0->f_5408, 13903789, 0, false))
			{
				set_current_ped_weapon(cParam0->f_5408, 13903789, true, 1, false, false);
			}
		}
		else
		{
			return 0;
		}
		set_gameplay_cam_relative_heading(0f, 1f);
		set_gameplay_cam_relative_pitch(0f, 1f);
	}
	if (!is_entity_dead(cParam0->f_5411))
	{
	}
	if (!is_entity_dead(iLocal_94))
	{
	}
	if (!is_entity_dead(&(iLocal_149[4])))
	{
		set_entity_invincible(&(iLocal_149[4]), false);
		set_entity_visible(&(iLocal_149[4]), true);
		set_object_targettable(&(iLocal_149[4]), true);
		_0xa22712e8471aa08e(&(iLocal_149[4]), 1, 0);
		_0x870708a6e147a9ad(&(iLocal_149[4]), "", 15f, 0, 72, 0, 0, 0, 0, -1);
	}
	if (!_is_imap_active(-928367655))
	{
		_request_imap(-928367655);
	}
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_897(&uLocal_455, 0);
	func_898(&uLocal_456, 0);
	func_901(&uLocal_489, 0);
	func_901(&uLocal_490, 0);
	func_896(&iLocal_247);
	iLocal_163[1] = 0;
	func_27(&uLocal_349, 0);
	func_27(&uLocal_346, 0);
	return 1;
}

int func_784(char[4] cParam0)
{
	if (func_1239(cParam0) > -1 && func_1239(cParam0) < 29)
	{
		func_1240(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5408))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5411))
		{
		}
		if (is_entity_dead(iLocal_94))
		{
		}
		if (is_entity_dead(&(iLocal_149[3])))
		{
		}
		if (!&iLocal_163[55])
		{
			if (does_entity_exist(&(iLocal_149[4])))
			{
				if (is_entity_dead(&(iLocal_149[4])) || has_entity_been_damaged_by_entity(&(iLocal_149[4]), Global_35, 1, 1))
				{
					iLocal_163[55] = 1;
					func_1309();
				}
			}
		}
		func_1316(cParam0);
		func_1317(cParam0);
		func_1318(cParam0);
		func_1319(cParam0);
		func_1249(cParam0);
	}
	switch (func_1239(cParam0))
	{
		case 0:
			if (!&iLocal_163[62])
			{
				if (func_1320(Global_35, func_388(5, 22), 8f, 1, 1))
				{
					iLocal_163[62] = 1;
				}
				else if (func_888(&uLocal_346) >= 6f)
				{
					iLocal_163[62] = 1;
				}
			}
			if (!&iLocal_163[63])
			{
				if (((iLocal_163[55] && bVar617) && func_1320(Global_35, func_388(5, 22), (8f + 3f), 1, 1)) && func_1320(cParam0->f_5408, func_388(5, 22), (8f + 6f), 1, 1))
				{
					if ((((!_0x1ecc76792f661cf5("UT2P_IG5_LOOT1") && !_0x1ecc76792f661cf5("UT2P_IG5_LOOT2")) && !_0x1ecc76792f661cf5("UT2P_IG5_LOOT3")) && !_0x1ecc76792f661cf5("UT2P_IG5_LOOT4")) && !_0x1ecc76792f661cf5("UT2P_IG5_LOOT5"))
					{
						iLocal_163[63] = 1;
					}
				}
			}
			if (&iLocal_163[63])
			{
				func_220(&uLocal_346);
				func_134(cParam0, 1);
			}
			else if (func_888(&uLocal_346) >= 50f)
			{
				func_220(&uLocal_346);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (iLocal_163[55] && bVar617)
			{
				if (func_1278())
				{
					func_47(1, 0);
				}
				if (func_213())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_181(cParam0);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 69);
				func_220(&uLocal_349);
				func_135(cParam0, 51);
				func_220(&uLocal_346);
				func_134(cParam0, 3);
			}
			else if (func_1320(Global_35, func_388(7, 2), 8f, 1, 1) && bVar617)
			{
				iLocal_163[62] = 1;
				if (func_1278())
				{
					func_47(1, 0);
				}
				if (func_213())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_181(cParam0);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 69);
				func_220(&uLocal_349);
				func_135(cParam0, 51);
				func_220(&uLocal_346);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (is_ped_on_mount(Global_35))
			{
				if (!&iLocal_163[50])
				{
					iLocal_143 = get_mount(Global_35);
					if (!is_entity_dead(iLocal_143))
					{
						iLocal_163[50] = 1;
					}
				}
			}
			else
			{
				if (!is_entity_dead(Global_35))
				{
					iVar0 = func_1087(Global_35, 0, 1, 0);
					if ((((!is_weapon_valid(iVar0) || iVar0 == -1569615261) || iVar0 == 2055893578) || _is_weapon_throwable(iVar0)) || _is_weapon_melee(iVar0))
					{
						set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar0))
					{
						set_current_ped_weapon(Global_35, func_1087(Global_35, 0, 1, 0), false, 1, false, false);
					}
				}
				if (!is_entity_dead(iLocal_143))
				{
					if (func_1320(iLocal_143, func_388(8, 0), 4.5f, 1, 1))
					{
						set_blocking_of_non_temporary_events(iLocal_143, true);
						open_sequence_task(&iLocal_61);
						if (iLocal_143 == cParam0->f_5411)
						{
							task_follow_nav_mesh_to_coord(0, func_388(8, 2), 1f, 20000, 0.25f, 0, func_1321(8, 2));
						}
						else
						{
							task_follow_nav_mesh_to_coord(0, func_388(8, 2), 1f, 45000, 15f, 0, 40000f);
						}
						task_stand_still(0, -1);
						close_sequence_task(iLocal_61);
						task_perform_sequence(iLocal_143, iLocal_61);
						clear_sequence_task(&iLocal_61);
					}
				}
				func_220(&uLocal_346);
				func_134(cParam0, 3);
			}
			break;
		case 3:
			if (!func_1278())
			{
				if (!is_entity_dead(iLocal_143))
				{
					if (!iLocal_143 == cParam0->f_5411)
					{
						set_blocking_of_non_temporary_events(iLocal_143, false);
						clear_ped_tasks(iLocal_143, 1, 0);
					}
				}
				func_220(&uLocal_346);
				func_134(cParam0, 29);
			}
			if (func_888(&uLocal_346) >= 10f)
			{
				if (!is_entity_dead(iLocal_143))
				{
					if (!iLocal_143 == cParam0->f_5411)
					{
						set_blocking_of_non_temporary_events(iLocal_143, false);
						clear_ped_tasks(iLocal_143, 1, 0);
					}
				}
				func_220(&uLocal_346);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			if ((iLocal_163[55] || iLocal_163[54]) // PointerArith)
			{
				if (get_script_task_status(cParam0->f_5408, 242628503, true) == 8)
				{
					return 1;
				}
			}
			else if ((((!_0x1ecc76792f661cf5("UT2P_IG5_LOOT1") && !_0x1ecc76792f661cf5("UT2P_IG5_LOOT2")) && !_0x1ecc76792f661cf5("UT2P_IG5_LOOT3")) && !_0x1ecc76792f661cf5("UT2P_IG5_LOOT4")) && !_0x1ecc76792f661cf5("UT2P_IG5_LOOT5"))
			{
				if (_is_anim_scene_started(&(iLocal_310[5]), false))
				{
					if (((_0x8d81e7824b7753f7(&(iLocal_310[5]), "S_Wait01", 1) || _0x8d81e7824b7753f7(&(iLocal_310[5]), "S_Wait02", 1)) || _0x8d81e7824b7753f7(&(iLocal_310[5]), "S_Wait03", 1)) || _0x8d81e7824b7753f7(&(iLocal_310[5]), "S_Wait04", 1))
					{
						if (!_0xa2cac9def0195e6f(1))
						{
							return 1;
						}
					}
				}
				else if (!_0xa2cac9def0195e6f(1))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_785(char[4] cParam0)
{
	if (!is_entity_dead(cParam0->f_5408))
	{
		set_ped_path_prefer_to_avoid_water(cParam0->f_5408, true, 1f);
	}
	func_181(cParam0);
	func_186();
	func_173(cParam0);
	return 1;
}

int func_786(var uParam0)
{
	return 1;
}

int func_787(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
	}
	func_975(2);
	return 1;
}

int func_788(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!is_entity_dead(Global_35))
		{
		}
		else
		{
			return 0;
		}
		if (!is_entity_dead(cParam0->f_5408))
		{
			if (has_ped_got_weapon(cParam0->f_5408, 36703333, 0, false))
			{
				set_current_ped_weapon(cParam0->f_5408, 36703333, true, 0, false, false);
			}
			if (has_ped_got_weapon(cParam0->f_5408, 13903789, 0, false))
			{
				set_current_ped_weapon(cParam0->f_5408, 13903789, true, 1, false, false);
			}
		}
		else
		{
			return 0;
		}
		if (!is_entity_dead(&(iLocal_149[4])))
		{
			set_entity_invincible(&(iLocal_149[4]), false);
			set_entity_visible(&(iLocal_149[4]), true);
			set_object_targettable(&(iLocal_149[4]), true);
			_0xa22712e8471aa08e(&(iLocal_149[4]), 1, 0);
			_0x870708a6e147a9ad(&(iLocal_149[4]), "", 15f, 0, 72, 0, 0, 0, 0, -1);
		}
		_set_anim_scene_playback_list_bool(&(iLocal_310[5]), "pl_micah_shoot_lock", true);
		set_gameplay_cam_relative_heading(0f, 1f);
		set_gameplay_cam_relative_pitch(-5f, 1f);
	}
	else if (!&iLocal_163[55])
	{
		if (_does_anim_scene_exist(&(iLocal_310[5])))
		{
			if (_is_anim_scene_loaded(&(iLocal_310[5]), true, false))
			{
				_set_anim_scene_playback_list_bool(&(iLocal_310[5]), "pl_micah_shoot_lock", true);
			}
		}
	}
	else
	{
		iLocal_163[54] = 1;
		_set_anim_scene_playback_list_bool(&(iLocal_310[5]), "pl_player_shot_lock", true);
	}
	func_1282(cParam0, 5);
	if (!is_entity_dead(Global_35))
	{
		clear_ped_tasks(Global_35, 1, 0);
		func_1322(0);
		if (!func_1323())
		{
			iLocal_621 = 1;
		}
	}
	if (!_is_imap_active(-928367655))
	{
		_request_imap(-928367655);
	}
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_898(&uLocal_456, 0);
	func_901(&uLocal_489, 0);
	func_901(&uLocal_490, 0);
	iLocal_268 = 0;
	func_896(&iLocal_247);
	func_27(&uLocal_349, 0);
	func_27(&uLocal_346, 0);
	func_1324(cParam0);
	return 1;
}

int func_789(char[4] cParam0)
{
	if (func_1239(cParam0) > -1 && func_1239(cParam0) < 29)
	{
		func_1240(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5408))
		{
			return 0;
		}
		if (is_entity_dead(cParam0->f_5411))
		{
		}
		if (is_entity_dead(iLocal_94))
		{
		}
		if (is_entity_dead(&(iLocal_149[3])))
		{
		}
		if (!&iLocal_163[55])
		{
			if (does_entity_exist(&(iLocal_149[4])))
			{
				if (has_entity_been_damaged_by_entity(&(iLocal_149[4]), Global_35, 1, 1))
				{
					if (!func_26(&uLocal_561))
					{
						func_27(&uLocal_561, 0);
					}
					else if (func_888(&uLocal_561) > 1f)
					{
						_set_anim_scene_playback_list_bool(&(iLocal_310[5]), "pl_player_shot_lock", true);
						_hide_ped_weapons(Global_35, 2, false);
						func_47(0, 0);
						iLocal_163[68] = 1;
						iLocal_163[55] = 1;
						func_1309();
					}
				}
			}
		}
		func_1325(cParam0);
		func_1326(cParam0);
		func_1327(cParam0);
		func_1249(cParam0);
	}
	switch (func_1239(cParam0))
	{
		case 0:
			set_ped_reset_flag(Global_35, 175, true);
			if (_does_anim_scene_exist(func_1328(cParam0)) && _is_anim_scene_loaded(func_1328(cParam0), true, false))
			{
				func_1238(cParam0, 3);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (_is_anim_scene_loaded(&(iLocal_310[5]), true, false))
			{
				if (((_0x005e6f28dd7ed58d(&(iLocal_310[5]), "MicahBell") || _is_anim_scene_active(&(iLocal_310[5]))) || _0xf94692eb9dc15d74(&(iLocal_310[5]), 0)) || !_is_anim_scene_started(&(iLocal_310[5]), false))
				{
					func_1329(cParam0);
					if (func_213())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					func_181(cParam0);
					func_975(4);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_790(char[4] cParam0)
{
	if (func_1278())
	{
		func_47(0, 0);
	}
	func_181(cParam0);
	func_186();
	return 1;
}

int func_791(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_128(cParam0, 2)) || func_128(cParam0, 1))
	{
	}
	return 1;
}

int func_792(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
	}
	func_975(2);
	func_1330();
	func_901(&uLocal_491, 0);
	return 1;
}

int func_793(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
	}
	func_975(5);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_27(&uLocal_349, 0);
	func_27(&uLocal_346, 0);
	return 1;
}

int func_794(char[4] cParam0)
{
	switch (func_1239(cParam0))
	{
		case 0:
			return 1;
	}
	return 0;
}

int func_795(var uParam0)
{
	if (does_entity_exist(iLocal_94))
	{
		delete_ped(&iLocal_94);
	}
	func_1331(33, 1);
	func_325(618, 0);
	return 1;
}

Vector3 func_796(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1531.301f, -310.1555f, 141.4455f;
				case 1:
					return -1531.901f, -307.4734f, 141.4547f;
				case 2:
					return -1543.385f, -312.9805f, 142.4005f;
				case 3:
					return -1523.723f, -310.7769f, 141.6034f;
				case 4:
					return -1535.127f, -312.7686f, 141.7706f;
				case 5:
					return -1536.798f, -315.0134f, 142.134f;
				case 6:
					return -1531.241f, -310.7661f, 142.4302f;
				case 7:
					return -1532.859f, -313.7812f, 142.2262f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1967.563f, 275.1523f, 164.7033f;
				case 1:
					return -1971.208f, 276.2682f, 165.0167f;
				case 2:
					return -1968.736f, 275.085f, 165.8076f;
				case 3:
					return -1970.215f, 276.4036f, 166.0223f;
				case 4:
					return -1993.236f, 491.8763f, 118.0578f;
				case 5:
					return -1979.6f, 498.1172f, 117.3216f;
				case 6:
					return -1985.623f, 484.2889f, 117.7172f;
				case 7:
					return -1974.159f, 498.098f, 116.9478f;
				case 8:
					return -1976.74f, 498.4513f, 117.1554f;
				case 9:
					return -1987.783f, 498.726f, 117.6986f;
				case 10:
					return -1990.222f, 485.068f, 118.1221f;
				case 11:
					return -1987.802f, 496.6867f, 117.74f;
				case 12:
					return -1988.578f, 487.9543f, 117.5714f;
				case 13:
					return -1998.834f, 497.7709f, 118.3129f;
				case 14:
					return -2001.299f, 488.5046f, 118.4924f;
				case 15:
					return -1970.226f, 276.7628f, 164.2705f;
				case 16:
					return -1966.562f, 278.6591f, 165.6026f;
				case 17:
					return -1965.313f, 283.6023f, 163.7995f;
				case 18:
					return -1900.651f, 431.5993f, 114.8299f;
				case 19:
					return -1895.765f, 425.3892f, 114.6579f;
				case 20:
					return -1904.099f, 423.3567f, 115.0837f;
				case 21:
					return -1895.431f, 435.6547f, 114.8856f;
				case 22:
					return -1904.458f, 434.4661f, 115.1463f;
				case 23:
					return -1715.776f, 394.9778f, 109.8f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1237.122f, 5.8986f, 45.8769f;
				case 1:
					return -1241.514f, -2.478f, 47.4048f;
				case 2:
					return -1268.505f, 17.1292f, 50.2813f;
				case 3:
					return -1261.962f, 14.5089f, 49.2906f;
				case 4:
					return -1235.094f, 11.4683f, 45.4143f;
				case 5:
					return -1232.111f, 14.3013f, 44.5342f;
				case 6:
					return -1231.464f, 8.5125f, 44.6016f;
				case 7:
					return -1227.644f, 0.5514f, 45.3037f;
				case 8:
					return -1226.781f, 0.2258f, 45.3277f;
				case 9:
					return -1229.525f, 0.9389f, 45.3875f;
				case 10:
					return -1228.604f, 0.6381f, 45.3493f;
				case 11:
					return -1238.141f, 14.6015f, 45.6123f;
				case 12:
					return -1237.988f, 8.1343f, 45.8648f;
				case 13:
					return -1245.117f, 15.0621f, 46.9307f;
				case 14:
					return -1244.064f, 7.7677f, 46.9611f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1579.175f, 145.7787f, 107.7567f;
				case 1:
					return -1577.958f, 144.7272f, 107.5983f;
				case 2:
					return -1595.177f, 145.9263f, 112.9113f;
				case 3:
					return -1597.967f, 147.7479f, 113.8107f;
				case 4:
					return -1582.973f, 148.5057f, 108.4355f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1237.06f, 6.2891f, 45.7732f;
				case 1:
					return -1236.677f, 15.1816f, 45.2735f;
				case 2:
					return -1259.243f, 7.9087f, 49.4411f;
				case 3:
					return -1257.591f, 10.7376f, 48.9075f;
				case 4:
					return -1254.453f, 13.5919f, 49.1658f;
				case 5:
					return -1181.807f, -31.2442f, 42.6419f;
				case 6:
					return -1161.961f, -29.1894f, 40.5877f;
				case 7:
					return -1150.997f, 12.0989f, 40.1917f;
				case 8:
					return -1154.078f, -8.4087f, 40.1631f;
				case 9:
					return -1131.469f, 15.0576f, 42.9449f;
				case 10:
					return -1136.906f, 29.1884f, 43.7928f;
				case 11:
					return -1117.244f, 30.2488f, 46.5242f;
				case 12:
					return -1096.65f, 7.7896f, 48.9557f;
				case 13:
					return -1119.869f, 56.1986f, 49.2394f;
				case 14:
					return -1118.991f, 55.3357f, 49.3451f;
				case 15:
					return -1122.889f, 54.3895f, 47.7312f;
				case 16:
					return -1116.817f, 55.655f, 50.0986f;
				case 17:
					return -1181.046f, -29.5731f, 41.39f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1175.979f, -14.58f, 40.6172f;
				case 1:
					return -1178.506f, -9.2647f, 40.6257f;
				case 2:
					return -1244.171f, 5.8146f, 47.2333f;
				case 3:
					return -1246.464f, 4.7384f, 47.8155f;
				case 4:
					return -1188.472f, -11.5643f, 41.7563f;
				case 5:
					return -1156.315f, -16.525f, 40.1638f;
				case 6:
					return -1154.304f, -6.704f, 40.1629f;
				case 7:
					return -1150.179f, 3.1042f, 40.1709f;
				case 8:
					return -1157.119f, -1.527f, 40.1502f;
				case 9:
					return -1144.734f, 5.165f, 40.2298f;
				case 10:
					return -1159.824f, 16.4549f, 40.1769f;
				case 11:
					return -1150.213f, 11.4313f, 40.2084f;
				case 12:
					return -1100.6f, 3.0207f, 47.3514f;
				case 13:
					return -1082.563f, 21.331f, 54.7211f;
				case 14:
					return -1113.633f, 70.3638f, 52.7919f;
				case 15:
					return -1074.558f, 9.1727f, 54.4813f;
				case 16:
					return -1095.4f, 43.4743f, 53.5648f;
				case 17:
					return -1176.172f, -5.7577f, 40.4797f;
				case 18:
					return -1177.201f, -4.4374f, 40.4628f;
				case 19:
					return -1238.123f, 4.6273f, 46.299f;
				case 20:
					return -1238.605f, 1.9987f, 46.5697f;
				case 21:
					return -1170.431f, -10.3928f, 40.3778f;
				case 22:
					return -1170.781f, -8.5364f, 40.3778f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -1152.554f, 0.1964f, 40.1501f;
				case 1:
					return -1162.272f, 2.2751f, 40.1501f;
				case 2:
					return -1064.916f, 13.9759f, 54.665f;
				case 3:
					return -1147.235f, 10.5422f, 40.1839f;
				case 4:
					return -1062.011f, 15.8563f, 54.589f;
				case 5:
					return -1060.547f, 15.3564f, 54.4479f;
				case 6:
					return -1113.641f, 68.6694f, 52.9368f;
				case 7:
					return -1121.907f, 91.7689f, 53.8411f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1174.95f, -10.901f, 40.3175f;
				case 1:
					return -1174.903f, -8.1401f, 40.4844f;
				case 2:
					return -1174.824f, -9.4497f, 41.3335f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -1178.677f, -13.0149f, 40.7535f;
				case 1:
					return -1177.494f, -13.2778f, 40.6865f;
				case 2:
					return -1214.253f, -6.4796f, 45.2617f;
				case 3:
					return -1215.118f, 1.4428f, 43.3423f;
				case 4:
					return -1177.856f, -15.3559f, 40.4968f;
				case 5:
					return -1178.952f, -13.2348f, 40.7769f;
				case 6:
					return -1181.674f, -18.7374f, 41.1741f;
				case 7:
					return -1180.943f, -14.853f, 40.8776f;
				case 8:
					return -1171.459f, -8.3681f, 40.875f;
				case 9:
					return -1172.466f, -9.1299f, 40.8023f;
				case 10:
					return -1172.461f, -9.1167f, 40.7991f;
				case 11:
					return -1172.44f, -9.141f, 40.8047f;
				case 12:
					return -1172.422f, -9.1329f, 40.9302f;
				case 13:
					return -1172.417f, -9.1477f, 40.9509f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -1173.24f, -10.8519f, 40.2417f;
				case 1:
					return -1173.681f, -12.0227f, 40.3283f;
				case 2:
					return -1174.278f, -11.948f, 40.325f;
				case 3:
					return -1174.278f, -11.948f, 40.325f;
				case 4:
					return -1182.907f, -31.5138f, 41.8518f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -1970.215f, 276.4036f, 166.0223f;
				case 1:
					return -1189.05f, -16.7368f, 41.8195f;
				case 2:
					return -1157.733f, -5.2504f, 40.4188f;
				case 3:
					return -1306.13f, 77.383f, 69.5347f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -1172.9f, -7.8316f, 40.7298f;
				case 1:
					return -1161.489f, -18.5999f, 40.6674f;
				case 2:
					return -1168.094f, 1.4429f, 40.7115f;
				case 3:
					return -1160.04f, -10.3341f, 40.6464f;
				case 4:
					return -1169.676f, 3.5572f, 40.6531f;
				case 5:
					return -1166.332f, -22.4695f, 40.6968f;
				case 6:
					return -1160.019f, -6.1602f, 40.6546f;
				case 7:
					return -1156.379f, -13.4059f, 40.6485f;
				case 8:
					return -1150.533f, 10.4095f, 40.6528f;
				case 9:
					return -1156.504f, -2.5064f, 40.5675f;
				case 10:
					return -1145.468f, 5.0153f, 40.6886f;
				case 11:
					return -1159.304f, 16.139f, 40.6071f;
				case 12:
					return -1158.574f, 6.5894f, 40.6581f;
				case 13:
					return -1138.516f, -0.506f, 40.6293f;
				case 14:
					return -1156.199f, 4.4347f, 41.6397f;
				case 15:
					return -1160.466f, 8.006f, 40.8083f;
				case 16:
					return -1153.8f, 3.9114f, 41.6812f;
				case 17:
					return -1155.839f, -17.2386f, 40.705f;
				case 18:
					return -1150.259f, 3.0411f, 40.628f;
				case 19:
					return -1136.75f, -14.3406f, 40.6133f;
				case 20:
					return -1098.991f, 9.8449f, 49.0077f;
				case 21:
					return -1137.169f, 29.9214f, 43.8342f;
				case 22:
					return -1150.175f, 3.0573f, 40.6852f;
				case 23:
					return -1150.71f, 11.2795f, 40.8158f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1184.373f, -0.1963f, 40.9319f;
				case 1:
					return -1175.818f, -21.6113f, 41.2666f;
				case 2:
					return -1185.575f, -1.7785f, 40.8825f;
				case 3:
					return -1160.298f, -20.6742f, 40.6217f;
				case 4:
					return -1186.637f, -3.3148f, 41.1437f;
				case 5:
					return -1190.56f, -25.7001f, 42.89f;
				case 6:
					return -1136.899f, -7.4951f, 40.7171f;
				case 7:
					return -1159.061f, 7.7907f, 40.624f;
				case 8:
					return -1139.785f, 0.9627f, 40.6592f;
				case 9:
					return -1151.245f, 12.3875f, 40.7152f;
				case 10:
					return -1160.452f, 23.0314f, 40.6432f;
				case 11:
					return -1152.597f, 14.4566f, 40.6995f;
				case 12:
					return -1142.599f, 3.2087f, 40.6552f;
				case 13:
					return -1153.932f, -4.6987f, 40.7538f;
				case 14:
					return -1156.713f, 16.0853f, 40.5847f;
				case 15:
					return -1143.643f, 4.3728f, 40.7395f;
				case 16:
					return -1141.078f, 1.9373f, 40.7398f;
				case 17:
					return -1164.675f, 2.921f, 40.6159f;
				case 18:
					return -1136.861f, 29.1673f, 43.7976f;
				case 19:
					return -1158.108f, 16.1707f, 40.6769f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1177.201f, -4.4374f, 40.6267f;
				case 1:
					return -1168.833f, 2.6611f, 40.6947f;
				case 2:
					return -1161.138f, 5.1423f, 40.8258f;
				case 3:
					return -1162.275f, 2.2735f, 40.6992f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -2546.63f, 561.5939f, -15.4776f;
				case 1:
					return -903.8778f, -185.6718f, 158.5224f;
				case 2:
					return -1613.501f, 148.3649f, 112.8528f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return -1176.198f, -5.8046f, 40.4814f;
				case 1:
					return -1177.11f, -4.3992f, 40.4603f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -1153.865f, -8.6037f, 40.5615f;
				case 1:
					return -1165.818f, 4.6293f, 40.5824f;
				case 2:
					return -1146.593f, 5.9742f, 40.6466f;
				case 3:
					return -1138.327f, 4.6144f, 40.4856f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_797(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_798(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_799(var uParam0)
{
	return uParam0->f_862;
}

void func_800(var uParam0)
{
	if (func_166(&iVar0))
	{
		if (func_574(iVar0, 0))
		{
			if (func_598(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_626(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_574(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_801(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1332(-1);
	}
	func_1333(1);
	set_entity_invincible(Global_35, true);
	if (!func_798(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_798(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_798(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_798(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_798(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_798(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_798(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_798(*iParam0, 4) && !func_798(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_798(*iParam0, 2048))
	{
		func_813(0, 0);
	}
	if (func_798(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_798(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_798(*iParam0, 8192))
	{
		func_1334();
	}
	if (!func_798(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_798(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_798(*iParam0, 1024))
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
		if (!func_798(*iParam0, 16))
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
						if (func_1335() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_396(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1336(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1337(2);
						func_1338(-1);
						func_1339(vVar3);
						func_1341(func_1340());
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
		iVar9 = get_mount(Global_35);
		if (!is_entity_dead(iVar9))
		{
			clear_ped_tasks(iVar9, 1, 0);
			task_stand_still(iVar9, -1);
		}
	}
	if (!func_798(*iParam0, 4096))
	{
		func_1342(Global_35);
	}
	if (!func_798(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_798(*iParam0, 2097152))
	{
		if (func_1343() || _0x50f124e6ef188b22(Global_35))
		{
			func_1344(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_802(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_803(var uParam0)
{
	if (func_797(uParam0, 2048) && !func_396(func_1345(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_797(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_879(iVar1, func_1345(uParam0), func_1346(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_797(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_879(iVar3, func_1345(uParam0), func_1346(uParam0), 2, 1073741824);
		}
	}
}

void func_804(var uParam0)
{
	if ((func_797(uParam0, 268435456) && !func_396(func_1345(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1345(uParam0) };
			func_879(iVar0, vVar1, func_1347(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_805(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_396(vParam1))
	{
		func_1348(uParam0, 2048, 1);
	}
	else
	{
		func_747(uParam0, 2048);
		if (bParam5)
		{
			func_747(uParam0, -2147483648);
		}
	}
}

void func_806(var uParam0)
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
					if (!func_1349(uParam0->f_13[iVar0], 8))
					{
						if (func_688(func_1087(iVar1, 0, 1, 0)))
						{
							if (!func_1350(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_688(func_1087(iVar1, 1, 1, 0)))
						{
							if (!func_1350(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_807(var uParam0, bool bParam1)
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

void func_808(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1184(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1351(iParam1, 29, bVar4, 1, 0);
			func_1351(iParam1, 31, bVar4, 1, 0);
			func_1351(iParam1, 30, bVar4, 1, 0);
			func_1351(iParam1, 22, bVar4, 1, 0);
			func_1351(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1124(32768) && func_1352(1108822547, 8)) && func_1353(10, iParam3))
	{
		func_1354(iParam1, 0, 1);
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
			iVar3 = func_1192(iVar1, 1);
			if (func_1352(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1353(iVar1, iParam3))
				{
				}
				else if ((func_1352(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1352(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1351(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1355(iVar3, 1, 6);
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
								func_1351(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1352(iVar3, 1))
							{
								func_1356(iVar3, 1, 6);
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

bool func_809(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1357((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_810(int iParam0)
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

int func_811(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_812(int iParam0, int iParam1)
{
	return func_1358(&uVar0, iParam0, iParam1);
}

void func_813(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_688(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1359(1);
	}
}

void func_814(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_815(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_816(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_817(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_818(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_819(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_820(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_821(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_822(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_823(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_824(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_825(var uParam0, int iParam1)
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

int func_826(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_837((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_827(var uParam0, int iParam1)
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

int func_828(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_850((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_829(var uParam0, char* sParam1)
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

int func_830(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_839((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_831(int iParam0, int iParam1)
{
	iVar0 = func_1360(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_832(var uParam0, char* sParam1, int iParam2)
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

int func_833(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_846((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_834(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_835(var uParam0, int iParam1)
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

void func_836(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_837(var uParam0)
{
	return *uParam0 != 0;
}

void func_838(var uParam0)
{
	if (!func_868(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_834(&(uParam0->f_1), 1);
	}
}

bool func_839(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_840(var uParam0)
{
	if (!func_868(uParam0->f_3, 1))
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
		func_834(&(uParam0->f_3), 1);
	}
}

bool func_841(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_842(var uParam0)
{
	if (!func_868(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_834(&(uParam0->f_1), 1);
	}
}

bool func_843(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_844(var uParam0)
{
	if (func_868(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_868(uParam0->f_1, 1))
	{
		func_1361(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_834(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_845(var uParam0)
{
	if (func_868(*uParam0, 2))
	{
		return true;
	}
	if (!func_868(*uParam0, 1))
	{
		func_1362(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_834(uParam0, 2);
		return true;
	}
	return false;
}

bool func_846(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_847(var uParam0)
{
	if (!func_868(uParam0->f_2, 1))
	{
		if (func_1363(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1364(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_304())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1043())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_834(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_848(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_849(var uParam0, int iParam1)
{
	if (!func_868(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_834(&(uParam0->f_1), 1);
	}
}

bool func_850(var uParam0)
{
	return *uParam0 != 0;
}

void func_851(var uParam0)
{
	if (!func_868(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_834(&(uParam0->f_2), 1);
	}
}

bool func_852(var uParam0)
{
	return *uParam0 != 0;
}

void func_853(var uParam0)
{
	if (!func_868(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_834(&(uParam0->f_3), 1);
	}
}

bool func_854(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_855(var uParam0)
{
	if (!func_868(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_834(&(uParam0->f_1), 1);
	}
}

bool func_856(var uParam0)
{
	return func_1365(*uParam0);
}

void func_857(var uParam0)
{
	if (!func_868(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_834(&(uParam0->f_1), 1);
	}
}

bool func_858(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_859(var uParam0)
{
	if (!func_868(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_834(&(uParam0->f_2), 1);
	}
}

bool func_860(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_861(var uParam0)
{
	if (!func_868(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_834(&(uParam0->f_1), 1);
	}
}

bool func_862(var uParam0, int iParam1, char* sParam2)
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

void func_863(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_743(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1366(uParam0, iParam1);
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
		iVar1 = func_1367(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1368(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1369(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1370(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1371(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_864(int iParam0)
{
	if (!func_189(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_865(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_887(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1372(uParam0, 0))
			{
				if (func_1373(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1374(uParam0, 1, &iVar0))
					{
					}
					if (func_1375(uParam0, 3, &cVar2))
					{
					}
					if (func_1374(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1374(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1374(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1374(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1374(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1376(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_493((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_493(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_493(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_217(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1376(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_493(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1372(uParam0, 12))
			{
				if (func_1374(uParam0, 13, &iVar0))
				{
				}
				if (func_1374(uParam0, 14, &iVar1))
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

void func_866(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_217((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_217((*uParam0)[iVar0], 1))
		{
			func_1377((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_867(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_837((*uParam0)[iVar1]))
		{
			if (func_831((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1378((*uParam0)[iVar1]))
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
		if (func_839((*uParam1)[iVar1]))
		{
			if (func_831((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1379((*uParam1)[iVar1]))
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
		if (func_841((*uParam2)[iVar1]))
		{
			if (func_831((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1380((*uParam2)[iVar1]))
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
		if (func_843((*uParam3)[iVar1]))
		{
			if (func_831((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_844((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_831(uParam4->f_1, iParam12))
	{
		if (!func_845(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_846((*uParam5)[iVar1]))
		{
			if (func_831((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1363((*uParam5)[iVar1]))
				{
					if (!func_869((*uParam5)[iVar1]))
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
		if (func_846((*uParam5)[iVar1]))
		{
			if (func_831((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1363((*uParam5)[iVar1]))
				{
					if (func_869((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_848((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1381((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_850((*uParam6)[iVar1]))
		{
			if (func_831((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1382((*uParam6)[iVar1]))
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
		if (func_852((*uParam7)[iVar1]))
		{
			if (func_831((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1383((*uParam7)[iVar1]))
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
		if (func_854((*uParam8)[iVar1]))
		{
			if (func_831((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1384((*uParam8)[iVar1]))
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
		if (func_856((*uParam9)[iVar1]))
		{
			if (func_831((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1385((*uParam9)[iVar1]))
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
		if (func_858((*uParam10)[iVar1]))
		{
			if (func_831((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1386((*uParam10)[iVar1]))
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
		if (func_860((*uParam11)[iVar1]))
		{
			if (func_831((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1387((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_868(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_869(var uParam0)
{
	if (func_868(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_868(uParam0->f_2, 1))
	{
		func_847(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_834(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_870(int iParam0)
{
	if (!func_189(iParam0))
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

bool func_871(char[4] cParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5, var uParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_512(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_258(iParam1)) && func_1388(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1389(iParam1, 1, 0, uParam4, uParam5, uParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1390(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1391(iParam1);
		return true;
	}
	return false;
}

bool func_872(char[4] cParam0)
{
	if (!func_396(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1392(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1392(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1392(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1392(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1392(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1392(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1392(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1392(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1392(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1392(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1392(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1392(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1392(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1392(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1392(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1392(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1392(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1392(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1392(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1392(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1392(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1392(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1392(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1392(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1392(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1392(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1392(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1392(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1392(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1392(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1392(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1392(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1392(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_396(cParam0->f_5417);
}

int func_873(int iParam0, var uParam1)
{
	uParam1->f_10 = func_266(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_396(uParam1->f_6))
		{
		}
	}
	bVar0 = func_395();
	if (*uParam1)
	{
		if (bVar0 && !func_327((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1393(5))
			{
				func_524(5);
				func_1394(5);
				func_1338(0);
				func_1337(0);
			}
		}
	}
	if (func_1395(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_327((*Global_1835011)[37]->f_1, 1)) && !func_327((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_327((*Global_1835011)[43]->f_1, 1)) && !func_327((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_215(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_527(iVar1))
	{
		bVar3 = true;
		if (func_1396(iVar1))
		{
			bVar4 = true;
		}
		if (func_534(iVar1))
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
				func_535(uParam1->f_10);
				*iParam0 = 0;
				return 0;
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
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1393(0) && func_1393(1))
			{
				func_1397(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1398())
			{
				func_1399();
			}
			func_1338(0);
			func_1337(0);
			func_1339(uParam1->f_6);
		}
	}
	if (!func_527(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1400(uParam1->f_10) == 0 || func_1401(uParam1->f_10) == 0) || func_1402(uParam1->f_10) == 0)
			{
				func_1403(uParam1->f_10);
			}
			func_1404(uParam1->f_10);
			func_1405(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_215(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_527(iVar1))
	{
		bVar3 = true;
		if (func_1396(iVar1))
		{
			bVar4 = true;
		}
		if (func_534(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(iVar2))
			{
				freeze_entity_position(iVar2, false);
			}
			if (!func_396(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1406(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = player_id();
			iVar7 = _get_saddle_horse_for_player(iVar6);
			if (does_entity_exist(iVar7))
			{
				if (iVar7 != iVar2)
				{
					_set_ped_as_saddle_horse_for_player(iVar6, 0);
				}
			}
			Var8 = { func_1407(uParam1->f_10) };
			Var10 = { func_1408() };
			func_1409(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_520(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1410(uParam1->f_10);
		if (uParam1->f_2 && !func_396(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_519(uParam1->f_10);
	if (func_520(uParam1->f_10))
	{
		iVar16 = func_262(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

bool func_874(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_875(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, -1805387726))
	{
		return true;
	}
	return false;
}

bool func_876(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1411(iParam1))
	{
		return false;
	}
	iVar0 = func_1412(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_877(char[4] cParam0, bool bParam1)
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

float func_878(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_879(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	bVar4 = is_entity_a_ped(iParam0);
	if (bVar4)
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		bVar3 = _get_ped_crouch_movement(iVar1);
		if (is_ped_ragdoll(iVar1))
		{
			_0x221f4d9912b7fe86(iVar1, 1);
		}
	}
	if (iParam0 == func_1413(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1414(iParam0))
	{
		if (func_875(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_391(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_879(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_879(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_391(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_391(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_391(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_391(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_391(iParam5, 129))
	{
		if (func_391(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_391(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_391(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_391(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1414(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_391(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_391(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_880(int iParam0, int iParam1, int iParam2)
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

bool func_881(var uParam0, int iParam1)
{
	switch (func_1415(uParam0))
	{
		case 0:
			if (!func_1416(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1417(uParam0, 1);
			break;
		case 1:
			func_1418(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_801(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1417(uParam0, 2);
			break;
		case 2:
			if (func_1419(uParam0))
			{
				func_1420(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1417(uParam0, 3);
			}
			break;
		case 3:
			if (func_888(&(uParam0->f_3)) >= 1f)
			{
				func_1417(uParam0, 4);
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
			func_1421(&iVar1, 0);
			release_script_audio_bank();
			func_1417(uParam0, 0);
			return true;
	}
	return false;
}

void func_882(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1422(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_883(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1423(cParam0, iVar0) };
	if (func_1425(&(cParam0->f_10792), Var1, func_1424(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1426(&(cParam0->f_10792), 524288))
		{
			func_380(cParam0, 67108864);
			func_1427(&(cParam0->f_10792), 524288);
		}
		func_1428(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_884(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_885(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1429(cParam0);
		func_1430(cParam0);
		return true;
	}
	if (func_1431(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_913(cParam0);
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
			func_1432(cParam0);
			func_884(cParam0, 524288);
			func_1433(cParam0);
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

bool func_886(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1434(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1435(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1436(func_61(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_423(cParam0, func_33(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_864(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_887(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_887(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1437(uParam0);
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

float func_888(int iParam0)
{
	if (!func_26(iParam0))
	{
		return iParam0->f_1;
	}
	if (func_495(iParam0))
	{
		return iParam0->f_2;
	}
	return (func_547() - iParam0->f_1);
}

bool func_889()
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

void func_890(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_891(char[4] cParam0)
{
	if (func_33(cParam0) >= 1 && func_33(cParam0) <= 5)
	{
		func_1438(cParam0);
	}
	if (func_33(cParam0) >= 6 && func_33(cParam0) <= 25)
	{
		func_1439(cParam0);
	}
}

bool func_892(char[4] cParam0)
{
	if (!bVar287)
	{
		iLocal_290 = 1;
		func_1106(-1271608261, 1, 0);
		Global_1934765->f_272 = 1;
	}
	func_1440(cParam0);
	if (((((func_33(cParam0) == 2 || func_33(cParam0) == 4) || func_33(cParam0) == 5) || func_33(cParam0) == 6) || func_33(cParam0) == 7) || func_33(cParam0) == 25)
	{
		if (!does_rayfire_map_object_exist(iLocal_58))
		{
			iLocal_58 = get_rayfire_map_object(func_388(9, 3), 5f, "DES_utp2_rvrbed");
		}
		if (!does_rayfire_map_object_exist(iLocal_59))
		{
			iLocal_59 = get_rayfire_map_object(func_388(9, 4), 5f, "DES_utp2_treefall");
		}
	}
	if ((func_33(cParam0) == 2 || func_33(cParam0) == 4) || func_33(cParam0) == 5)
	{
		if (does_rayfire_map_object_exist(iLocal_58))
		{
			if (get_state_of_rayfire_map_object(iLocal_58) == -1)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 0)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 1)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 2)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 3)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 4)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 5)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 6)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 7)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 8)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 9)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 10)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 11)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 12)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 13)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 14)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_58) == 15)
			{
			}
			if (get_state_of_rayfire_map_object(iLocal_58) != 5)
			{
				if (!&iLocal_163[41])
				{
					if (get_state_of_rayfire_map_object(iLocal_58) != 4)
					{
						iLocal_163[41] = 1;
						set_state_of_rayfire_map_object(iLocal_58, 4);
					}
				}
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = true;
		}
		if (does_rayfire_map_object_exist(iLocal_59))
		{
			if (func_33(cParam0) == 2 || func_33(cParam0) == 4)
			{
				if (!&iLocal_163[38])
				{
					if (!_does_anim_scene_exist(&(iLocal_310[3])))
					{
						iLocal_310[3] = _create_anim_scene("script@story@UTP2@IG@IG_4@IG_4_CHOP_TREE_RUN_AWAY", 0, 0, false, true);
						load_anim_scene(&(iLocal_310[3]));
					}
					else if (_is_anim_scene_loaded(&(iLocal_310[3]), true, false))
					{
						iLocal_163[38] = 1;
					}
					else
					{
						bVar0 = true;
					}
				}
			}
			if (get_state_of_rayfire_map_object(iLocal_59) == -1)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 0)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 1)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 2)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 3)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 4)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 5)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 6)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 7)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 8)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 9)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 10)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 11)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 12)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 13)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 14)
			{
			}
			else if (get_state_of_rayfire_map_object(iLocal_59) == 15)
			{
			}
			if (get_state_of_rayfire_map_object(iLocal_59) != 5)
			{
				if (get_state_of_rayfire_map_object(iLocal_59) == 15)
				{
					iLocal_163[39] = 0;
				}
				if (!&iLocal_163[39])
				{
					if (get_state_of_rayfire_map_object(iLocal_59) != 4)
					{
						iLocal_163[39] = 1;
						set_state_of_rayfire_map_object(iLocal_59, 4);
					}
				}
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	if (func_33(cParam0) >= 6)
	{
		if (does_rayfire_map_object_exist(iLocal_58))
		{
			if (get_state_of_rayfire_map_object(iLocal_58) != 9)
			{
				set_state_of_rayfire_map_object(iLocal_58, 9);
			}
		}
		if (does_rayfire_map_object_exist(iLocal_59))
		{
			if (get_state_of_rayfire_map_object(iLocal_59) != 9)
			{
				set_state_of_rayfire_map_object(iLocal_59, 9);
			}
		}
	}
	return !bVar0;
}

bool func_893(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (!&iLocal_256[0])
		{
			iLocal_256[0] = 1;
			func_1441(cParam0);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (func_1442(cParam0))
	{
	}
	else
	{
		bVar0 = true;
	}
	if (func_1443(cParam0))
	{
	}
	else
	{
		bVar0 = true;
	}
	if (func_1444(cParam0))
	{
	}
	else
	{
		bVar0 = true;
	}
	if (func_33(cParam0) >= 1 && func_33(cParam0) <= 5)
	{
		if (func_1445(cParam0))
		{
		}
		else
		{
			bVar0 = true;
		}
	}
	if (func_33(cParam0) >= 6 && func_33(cParam0) <= 25)
	{
		if (func_1446(cParam0))
		{
		}
		else
		{
			bVar0 = true;
		}
	}
	if (func_33(cParam0) == 1)
	{
		func_1447(cParam0, 1);
		func_1448(cParam0, 1);
		func_1449(cParam0, 1);
	}
	else if (func_33(cParam0) == 2)
	{
		func_1447(cParam0, 1);
		func_1448(cParam0, 1);
		func_1449(cParam0, 1);
		func_1450(cParam0, 1);
		func_1451(cParam0, 1);
		func_1452(cParam0, 1);
	}
	else if (func_33(cParam0) == 4)
	{
		func_1450(cParam0, 1);
		func_1451(cParam0, 1);
		func_1452(cParam0, 1);
	}
	else if (func_33(cParam0) == 5)
	{
		func_1450(cParam0, 1);
		func_1451(cParam0, 1);
		func_1452(cParam0, 1);
	}
	return !bVar0;
}

void func_894()
{
	Local_16 = _create_volume_box(-1568.443f, 211.842f, 77.69713f, 0f, 0f, 146.3588f, 1235.797f, 486.9576f, 540.5155f);
	Local_16.f_1 = _create_volume_box(-1568.443f, 211.842f, 77.69713f, 0f, 0f, 146.3588f, 1235.797f, 486.9576f, 540.5155f);
	Local_16.f_2 = _create_volume_box(-1168.222f, -8.40328f, 40.5698f, 0f, 0f, 37.95209f, 27.7534f, 34.78064f, 14.23724f);
	Local_16.f_3 = _create_volume_box(-1568.443f, 211.842f, 77.69713f, 0f, 0f, 146.3588f, 1235.797f, 486.9576f, 540.5155f);
	Local_16.f_4 = _create_volume_box(-1161.868f, -27.80965f, 40.63759f, 0f, 0f, -6.698905f, 0.240585f, 0.35414f, 1.41358f);
	Local_16.f_5 = _create_volume_box(-1600.039f, -298.0327f, 173.7286f, 0f, 0f, 109.543f, 52.943f, 9.314621f, 92.30907f);
	Local_16.f_6 = _create_volume_box(-1727.497f, 4.934671f, 165.9228f, 0f, 0f, 6.516351f, 512.7056f, 11.13764f, 224.0014f);
	Local_16.f_7 = _create_volume_box(-1920.452f, 283.2975f, 110.3079f, 0f, 0f, -76.43132f, 57.33527f, 9.39374f, 231.1161f);
	Local_16.f_8 = _create_volume_box(-1938.213f, 267.8531f, 165.9228f, 0f, 0f, 102.6303f, 512.7056f, 11.13764f, 224.0014f);
	Local_16.f_9 = _create_volume_box(-1952.368f, 306.1855f, 165.9228f, 0f, 0f, -8.081068f, 512.7056f, 11.13764f, 224.0014f);
	Local_16.f_10 = _create_volume_box(-1967.859f, 274.7575f, 162.9809f, 0f, 0f, 108.9489f, 13.66192f, 16.12615f, 21.86954f);
	Local_16.f_11 = _create_volume_box(-1263.127f, 27.56353f, 50.5047f, 0f, 0f, 52.50273f, 177.8387f, 17.3899f, 61.28953f);
	Local_16.f_12 = _create_volume_box(-1145.044f, 6.952559f, 51.43785f, 0f, 0f, -90.46999f, 209.7724f, 170.2489f, 66.29894f);
	Local_16.f_13 = _create_volume_box(-1170.08f, -2.706413f, 40.5698f, 0f, 0f, 34.20811f, 27.7534f, 57.28762f, 31.50541f);
	Local_16.f_14 = _create_volume_box(-1149.586f, 1.130373f, 41.22473f, 0f, 0f, 32.53551f, 58.76465f, 56.59272f, 51.16173f);
	Local_16.f_15 = _create_volume_box(-1145.135f, 2.617084f, 41.22473f, 0f, 0f, 32.53551f, 43.83348f, 45.08284f, 51.16173f);
	Local_16.f_16 = _create_volume_box(-1172.068f, -3.32457f, 41.22473f, 0f, 0f, 36.92249f, 31.36405f, 46.8062f, 51.16173f);
	Local_16.f_17 = _create_volume_box(-1165.123f, 2.258573f, 41.22473f, 0f, 0f, 36.92249f, 32.26448f, 33.44773f, 51.16173f);
	Local_16.f_18 = _create_volume_box(-1139.43f, 7.420393f, 51.43785f, 0f, 0f, -63.43047f, 43.30475f, 75.13147f, 66.29894f);
	Local_16.f_19 = _create_volume_box(-1398.856f, 165.862f, 95.87599f, 0f, 0f, -3.006781f, 177.8387f, 47.34473f, 61.28953f);
	Local_16.f_20 = _create_volume_box(-1286.605f, 24.07991f, 56.45853f, 0f, 0f, 51.54373f, 177.8387f, 17.3899f, 61.28953f);
	Local_16.f_21 = _create_volume_box(-1200.337f, -2.380593f, 49.91032f, 0f, 0f, 50.60652f, 115.7242f, 17.84405f, 55.68228f);
	Local_16.f_22 = _create_volume_box(-1303.955f, 33.81371f, 71.07247f, 0f, 0f, -3.006781f, 177.8387f, 72.20657f, 61.28953f);
	Local_16.f_23 = _create_volume_box(-1127.14f, 46.43692f, 49.91032f, 0f, 0f, -57.48806f, 581.6844f, 17.84405f, 97.76824f);
	Local_16.f_24 = _create_volume_box(-1122.278f, 46.55953f, 49.91032f, 0f, 0f, -57.44316f, 581.6844f, 17.84405f, 97.76824f);
	Local_16.f_25 = _create_volume_box(-1162.416f, 0.923995f, 44.69077f, 0f, 0f, -55.32431f, 18.86203f, 14.5339f, 20.04124f);
	Local_16.f_26 = _create_volume_box(-1153.267f, 7.973927f, 47.92368f, 0f, 0f, -55.492f, 20.04507f, 14.88605f, 23.87399f);
	Local_16.f_27 = _create_volume_box(-1141.782f, 12.3527f, 41.22473f, 0f, 0f, 32.53551f, 25.16456f, 48.34063f, 51.16173f);
	Local_16.f_28 = _create_volume_box(-1162.548f, 2.516119f, 41.22473f, 0f, 0f, 34.71233f, 45.44522f, 79.74723f, 51.16173f);
	Local_16.f_29 = _create_volume_box(-1166.538f, 7.128876f, 51.43785f, 0f, 0f, -90.46999f, 209.7724f, 170.2489f, 66.29894f);
	Local_16.f_30 = _create_volume_box(-1146.941f, 11.27892f, 41.82784f, 0f, 0f, -50.01733f, 5.034768f, 8.014721f, 4.906774f);
	Local_16.f_31 = _create_volume_box(-1557.221f, -316.0397f, 150.3264f, 0f, 0f, 0f, 25.99768f, 16.14555f, 24.25972f);
	Local_16.f_32 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_16.f_32, -1651.088f, -232.4173f, 174.8995f, 0f, 0f, 10.12071f, 35.69477f, 42.26434f, 92.30907f);
	_0x39816f6f94f385ad(Local_16.f_32, -1732.207f, 16.12613f, 174.8995f, 0f, 0f, 15.92424f, 58.44531f, 198.9205f, 92.30907f);
	Local_16.f_33 = _create_volume_box(-1944.655f, 277.4564f, 110.3079f, 0f, 0f, -76.43132f, 45.98181f, 15.45212f, 231.1161f);
	Local_16.f_34 = _create_volume_box(-1170.44f, -4.626863f, 44.69077f, 0f, 0f, -55.32431f, 33.76815f, 17.95727f, 20.04124f);
	Local_16.f_35 = _create_volume_box(-1551.961f, -305.7558f, 150.3264f, 0f, 0f, 0f, 71.74554f, 38.08725f, 24.25972f);
	Local_16.f_36 = _create_volume_box(-1794.723f, 235.2386f, 174.8995f, 0f, 0f, 15.92424f, 213.8735f, 273.5121f, 136.5515f);
	Local_16.f_37 = _create_volume_box(-1742.266f, 51.37976f, 174.8994f, 0f, 0f, 15.92424f, 58.44531f, 98.22892f, 92.30907f);
	Local_16.f_38 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_16.f_38, -1645.538f, -231.4266f, 174.8995f, 0f, 0f, 10.12071f, 91.52827f, 89.12661f, 92.30907f);
	_0x39816f6f94f385ad(Local_16.f_38, -1684.693f, -72.01734f, 185.4245f, 0f, 0f, 10.12071f, 91.52827f, 188.8058f, 92.30907f);
	Local_16.f_39 = _create_volume_box(-1170.967f, -7.684945f, 38.52908f, 0f, 0f, 12.52649f, 3.860726f, 1.238778f, 9.542653f);
	Local_16.f_40 = _create_volume_box(-1296.579f, 167.8156f, 65.28689f, 0f, 0f, 34.91692f, 21.25308f, 12.51135f, 30.80147f);
	Local_16.f_41 = _create_volume_box(-1561.446f, -305.7558f, 150.3264f, 0f, 0f, 0f, 52.74688f, 38.08725f, 24.25972f);
}

void func_895()
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!_is_base_a_cover_point(&(iLocal_146[iVar0])))
		{
			if (iVar0 == 0)
			{
				Var1 = { func_223(15, 0) };
				iLocal_146[iVar0] = add_cover_point(Var1, Var1.f_3, 0, 0, 0, false);
			}
			else if (iVar0 == 1)
			{
				Var1 = { func_223(15, 1) };
				iLocal_146[iVar0] = add_cover_point(Var1, Var1.f_3, 2, 0, 0, false);
			}
		}
		iVar0++;
	}
}

void func_896(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_897(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_898(var uParam0, int iParam1)
{
	if (!&iLocal_163[26])
	{
		*uParam0 = iParam1;
	}
}

void func_899(var uParam0, int iParam1)
{
	if (&iLocal_163[26])
	{
		if (((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7)
		{
			*uParam0 = iParam1;
		}
	}
	else
	{
		*uParam0 = iParam1;
	}
}

void func_900(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_901(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_902(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	func_1453(iParam0, bParam1);
	_0x18262cafebb5fbe1(iParam0, iParam2, iParam3, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam2, iParam3, 0, -1, -1, 2);
}

void func_903(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_904(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1454(iParam0, iParam1, bParam2, fParam3);
}

void func_905(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

void func_906(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_907(char[4] cParam0)
{
	if (func_33(cParam0) == 0)
	{
		func_1238(cParam0, 0);
	}
	else if (func_33(cParam0) == 1)
	{
		func_1238(cParam0, 1);
	}
	else if (func_33(cParam0) == 5)
	{
		func_1238(cParam0, 2);
	}
	else if (func_33(cParam0) == 25)
	{
		func_1238(cParam0, 3);
	}
}

int func_908(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 0:
			if (!is_entity_dead(Global_35))
			{
				if (is_ped_on_mount(Global_35))
				{
					_remove_ped_from_mount(Global_35, true, false);
				}
			}
			stop_gameplay_hint(true);
			break;
		case 1:
		case 5:
			stop_gameplay_hint(true);
			break;
		case 25:
			if (!is_entity_dead(Global_35))
			{
				if (is_ped_on_mount(Global_35))
				{
					_remove_ped_from_mount(Global_35, true, false);
				}
			}
			stop_gameplay_hint(true);
			break;
	}
	return 0;
}

void func_909(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

int func_910(char[4] cParam0)
{
	if (&iLocal_163[68])
	{
		iLocal_163[68] = 0;
	}
	switch (func_33(cParam0))
	{
		case 0:
			if ((func_120(cParam0, 4) || func_128(cParam0, 2)) || func_128(cParam0, 1))
			{
				fVar0 = 41000f;
			}
			else
			{
				fVar0 = 30000f;
			}
			if (!is_entity_dead(Global_35))
			{
				if (func_1455(cParam0, Global_35, 0, 0, 1, 1))
				{
					if (func_120(cParam0, 4) || func_8(cParam0, 524288))
					{
						func_1306(Global_35, func_223(0, 6), 2, 1073741824);
						func_890(-43.0672f, -6.0413f);
					}
					if (!is_entity_dead(cParam0->f_5411))
					{
						if (func_120(cParam0, 4) || func_8(cParam0, 524288))
						{
							func_1306(cParam0->f_5411, func_223(0, 4), 2, 1073741824);
						}
					}
					iLocal_163[2] = 1;
					set_ped_max_move_blend_ratio(Global_35, 1.5f);
				}
			}
			if (!is_entity_dead(cParam0->f_5408))
			{
				if (func_1455(cParam0, cParam0->f_5408, 0, 0, 1, 1))
				{
					if (func_120(cParam0, 4) || func_8(cParam0, 524288))
					{
						func_1306(cParam0->f_5408, func_223(0, 7), 2, 1073741824);
					}
					set_ped_cloth_package_index(cParam0->f_5408, 1);
					_hide_ped_weapons(cParam0->f_5408, 2, true);
					if (has_ped_got_weapon(cParam0->f_5408, 36703333, 0, false))
					{
						set_current_ped_weapon(cParam0->f_5408, 36703333, true, 2, false, false);
					}
					if (has_ped_got_weapon(cParam0->f_5408, 13903789, 0, false))
					{
						set_current_ped_weapon(cParam0->f_5408, 13903789, true, 3, false, false);
					}
					if (!is_entity_dead(iLocal_94))
					{
						if (func_120(cParam0, 4) || func_8(cParam0, 524288))
						{
							func_1306(iLocal_94, func_223(0, 5), 2, 1073741824);
						}
						if (get_ped_config_flag(cParam0->f_5408, 167, true))
						{
							set_ped_config_flag(cParam0->f_5408, 167, false);
						}
						set_blocking_of_non_temporary_events(cParam0->f_5408, true);
						task_mount_animal(cParam0->f_5408, iLocal_94, 20000, -1, 1f, 262144, 0, 0);
					}
				}
			}
			if (!bVar283)
			{
				if ((IntToFloat(func_1456(cParam0)) >= fVar0 || func_120(cParam0, 4)) || func_8(cParam0, 524288))
				{
					if (!is_sphere_visible(func_388(0, 4), 1f))
					{
						iLocal_286 = 1;
						if (!is_entity_dead(cParam0->f_5411))
						{
							func_1306(cParam0->f_5411, func_223(0, 4), 2, 1073741824);
							set_blocking_of_non_temporary_events(cParam0->f_5411, true);
							task_stand_still(cParam0->f_5411, -1);
						}
					}
				}
			}
			if (!bVar284)
			{
				if ((IntToFloat(func_1456(cParam0)) >= fVar0 || func_120(cParam0, 4)) || func_8(cParam0, 524288))
				{
					if (!is_sphere_visible(func_388(0, 5), 1f))
					{
						iLocal_287 = 1;
						if (!is_entity_dead(iLocal_94))
						{
							func_1306(iLocal_94, func_223(0, 5), 2, 1073741824);
							set_blocking_of_non_temporary_events(iLocal_94, true);
							task_stand_still(iLocal_94, -1);
						}
					}
				}
			}
			break;
		case 1:
			if (!&iLocal_163[22])
			{
				if ((func_1456(cParam0) >= 30000 || func_120(cParam0, 4)) || func_8(cParam0, 524288))
				{
					iLocal_163[22] = 1;
					trigger_music_event("UTP2_COACH");
				}
			}
			if (!is_entity_dead(iLocal_94))
			{
				if (func_1455(cParam0, iLocal_94, "Horse_01^1", 0, 1, 1))
				{
				}
			}
			if (!is_entity_dead(Global_35))
			{
				if (&iLocal_256[2])
				{
					func_1260(&Global_35, &(cParam0->f_5411), 1073741824);
				}
				if (func_1455(cParam0, Global_35, 0, 0, 1, 1))
				{
					if (!func_166(&uVar2))
					{
						func_1256(-1623728698, 0);
					}
					if (func_120(cParam0, 4))
					{
						if (!is_entity_dead(cParam0->f_5411))
						{
							func_1306(cParam0->f_5411, func_223(1, 16), 2, 1073741824);
							force_ped_motion_state(cParam0->f_5411, -1115154469, false, 0, false);
						}
						func_890(-5f, -4.09f);
					}
					if (!is_entity_dead(cParam0->f_5411))
					{
						if (!is_ped_on_mount(Global_35))
						{
							_set_ped_on_mount(Global_35, cParam0->f_5411, -1, true);
						}
					}
					iLocal_163[1] = 0;
					iLocal_256[2] = 1;
				}
			}
			if (!is_entity_dead(cParam0->f_5408))
			{
				if (&iLocal_260[2])
				{
					func_1260(&(cParam0->f_5408), &iLocal_94, 1073741824);
				}
				if (func_1455(cParam0, cParam0->f_5408, 0, 0, 1, 1))
				{
					if (!func_169(6))
					{
						func_171(6, 16384, 1);
					}
					if (func_120(cParam0, 4))
					{
						if (!is_entity_dead(iLocal_94))
						{
							func_1306(iLocal_94, func_223(1, 17), 2, 1073741824);
							force_ped_motion_state(iLocal_94, -1115154469, false, 0, false);
						}
					}
					if (!is_entity_dead(iLocal_94))
					{
						if (!is_ped_on_mount(cParam0->f_5408))
						{
							_set_ped_on_mount(cParam0->f_5408, iLocal_94, -1, true);
						}
					}
					if (!get_ped_config_flag(cParam0->f_5408, 167, true))
					{
						set_ped_config_flag(cParam0->f_5408, 167, true);
					}
					func_1457(6, 0, 0, 1);
					if (has_ped_got_weapon(cParam0->f_5408, 36703333, 0, false))
					{
						set_current_ped_weapon(cParam0->f_5408, 36703333, false, 0, false, false);
					}
					if (has_ped_got_weapon(cParam0->f_5408, 13903789, 0, false))
					{
						set_current_ped_weapon(cParam0->f_5408, 13903789, false, 1, false, false);
					}
					iLocal_260[2] = 1;
					set_blocking_of_non_temporary_events(cParam0->f_5408, true);
					task_follow_waypoint_recording(cParam0->f_5408, "utopia2_follow_coach", 0, 4204040, -1, 0, 0, -1);
				}
			}
			if (!is_entity_dead(iLocal_144))
			{
				if (func_1458(cParam0, iLocal_144, "STAGECOACH004X", 0, 1, 1))
				{
					func_1306(iLocal_144, func_223(1, 18), 2, 1073741824);
					iLocal_163[21] = 1;
				}
			}
			if (&iLocal_163[21])
			{
				iVar1 = 0;
				while (iVar1 <= (2 - 1))
				{
					if (!is_entity_dead(&(iLocal_95[iVar1])))
					{
						if (!&iLocal_278[iVar1])
						{
							set_ped_reset_flag(&(iLocal_95[iVar1]), 3, true);
							if (has_collision_loaded_around_entity(&(iLocal_95[iVar1])))
							{
								iLocal_278[iVar1] = 1;
								if (iVar1 == 0)
								{
									if (!is_ped_in_vehicle(&(iLocal_95[iVar1]), iLocal_144, false))
									{
										set_ped_into_vehicle(&(iLocal_95[iVar1]), iLocal_144, -1);
									}
									func_1459(iLocal_95[iVar1], 10f, 1);
									if (!is_entity_dead(iLocal_144))
									{
										set_vehicle_forward_speed(iLocal_144, 6f);
									}
								}
								else if (iVar1 == 1)
								{
									if (!is_ped_in_vehicle(&(iLocal_95[iVar1]), iLocal_144, false))
									{
										set_ped_into_vehicle(&(iLocal_95[iVar1]), iLocal_144, 0);
									}
								}
							}
						}
					}
					iVar1++;
				}
			}
			if (!is_entity_dead(&(iLocal_131[0])))
			{
				if (func_1455(cParam0, &(iLocal_131[0]), "Horse_01^5", 0, 1, 1))
				{
					set_ped_reset_flag(&(iLocal_131[0]), 3, true);
					func_1306(&(iLocal_131[0]), func_223(1, 19), 2, 1073741824);
					set_ped_reset_flag(&(iLocal_131[0]), 3, true);
					if (has_collision_loaded_around_entity(&(iLocal_131[0])))
					{
					}
				}
			}
			if (!is_entity_dead(&(iLocal_131[1])))
			{
				if (func_1455(cParam0, &(iLocal_131[1]), "Horse_01^4", 0, 1, 1))
				{
					set_ped_reset_flag(&(iLocal_131[1]), 3, true);
					func_1306(&(iLocal_131[1]), func_223(1, 20), 2, 1073741824);
					set_ped_reset_flag(&(iLocal_131[1]), 3, true);
					if (has_collision_loaded_around_entity(&(iLocal_131[1])))
					{
					}
				}
			}
			if (!is_entity_dead(&(iLocal_131[2])))
			{
				if (func_1455(cParam0, &(iLocal_131[2]), "Horse_01^3", 0, 1, 1))
				{
					set_ped_reset_flag(&(iLocal_131[2]), 3, true);
					func_1306(&(iLocal_131[2]), func_223(1, 21), 2, 1073741824);
					set_ped_reset_flag(&(iLocal_131[2]), 3, true);
					if (has_collision_loaded_around_entity(&(iLocal_131[2])))
					{
					}
				}
			}
			if (!is_entity_dead(&(iLocal_131[3])))
			{
				if (func_1455(cParam0, &(iLocal_131[3]), "Horse_01^2", 0, 1, 1))
				{
					set_ped_reset_flag(&(iLocal_131[3]), 3, true);
					func_1306(&(iLocal_131[3]), func_223(1, 22), 2, 1073741824);
					set_ped_reset_flag(&(iLocal_131[3]), 3, true);
					if (has_collision_loaded_around_entity(&(iLocal_131[3])))
					{
					}
				}
			}
			if (!is_entity_dead(&(iLocal_98[0])))
			{
				if (func_1455(cParam0, &(iLocal_98[0]), "A_M_M_UNICOACHGUARDS_01^1", 0, 1, 1))
				{
					if (!&iLocal_281[0])
					{
						set_ped_reset_flag(&(iLocal_98[0]), 3, true);
						if (func_120(cParam0, 4))
						{
						}
						if (has_collision_loaded_around_entity(&(iLocal_98[0])))
						{
							iLocal_281[0] = 1;
							if (!is_entity_dead(&(iLocal_131[0])))
							{
								if (!is_ped_on_mount(&(iLocal_98[0])))
								{
									func_1255(&(iLocal_98[0]), &(iLocal_131[0]));
								}
							}
							set_ped_config_flag(&(iLocal_98[0]), 167, true);
							if (!is_entity_dead(&(iLocal_131[0])))
							{
								set_blocking_of_non_temporary_events(&(iLocal_131[0]), false);
								clear_ped_tasks(&(iLocal_131[0]), 1, 0);
							}
							set_blocking_of_non_temporary_events(&(iLocal_98[0]), true);
							if (!is_entity_dead(iLocal_144))
							{
								task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[0]), iLocal_144, "utopia2_GuardRiverLeft", 0f, 4.75f, 0, 4204040, -1, 0);
							}
						}
					}
				}
			}
			if (!is_entity_dead(&(iLocal_98[1])))
			{
				if (func_1455(cParam0, &(iLocal_98[1]), "A_M_M_UNICOACHGUARDS_01", 0, 1, 1))
				{
					if (!&iLocal_281[1])
					{
						set_ped_reset_flag(&(iLocal_98[1]), 3, true);
						if (func_120(cParam0, 4))
						{
						}
						if (has_collision_loaded_around_entity(&(iLocal_98[1])))
						{
							iLocal_281[1] = 1;
							if (!is_entity_dead(&(iLocal_131[1])))
							{
								if (!is_ped_on_mount(&(iLocal_98[1])))
								{
									func_1255(&(iLocal_98[1]), &(iLocal_131[1]));
								}
							}
							set_ped_config_flag(&(iLocal_98[1]), 167, true);
							if (!is_entity_dead(&(iLocal_131[1])))
							{
								set_blocking_of_non_temporary_events(&(iLocal_131[1]), false);
								clear_ped_tasks(&(iLocal_131[1]), 1, 0);
							}
							set_blocking_of_non_temporary_events(&(iLocal_98[1]), true);
							if (!is_entity_dead(iLocal_144))
							{
								task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[1]), iLocal_144, "utopia2_GuardRiverRight", 0f, 4.75f, 0, 4204040, -1, 0);
							}
						}
					}
				}
			}
			if (!is_entity_dead(&(iLocal_98[2])))
			{
				if (func_1455(cParam0, &(iLocal_98[2]), "A_M_M_UNICOACHGUARDS_01^3", 0, 1, 1))
				{
					if (!&iLocal_281[2])
					{
						set_ped_reset_flag(&(iLocal_98[2]), 3, true);
						if (func_120(cParam0, 4))
						{
						}
						if (has_collision_loaded_around_entity(&(iLocal_98[2])))
						{
							iLocal_281[2] = 1;
							if (!is_entity_dead(&(iLocal_131[2])))
							{
								if (!is_ped_on_mount(&(iLocal_98[2])))
								{
									func_1255(&(iLocal_98[2]), &(iLocal_131[2]));
								}
							}
							set_ped_config_flag(&(iLocal_98[2]), 167, true);
							if (!is_entity_dead(&(iLocal_131[2])))
							{
								set_blocking_of_non_temporary_events(&(iLocal_131[2]), false);
								clear_ped_tasks(&(iLocal_131[2]), 1, 0);
							}
							set_blocking_of_non_temporary_events(&(iLocal_98[2]), true);
							if (!is_entity_dead(iLocal_144))
							{
								task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[2]), iLocal_144, "utopia2_GuardRiverLeft", 0f, -4.75f, 0, 4204040, -1, 0);
							}
						}
					}
				}
			}
			if (!is_entity_dead(&(iLocal_98[3])))
			{
				if (func_1455(cParam0, &(iLocal_98[3]), "A_M_M_UNICOACHGUARDS_01^2", 0, 1, 1))
				{
					if (!&iLocal_281[3])
					{
						set_ped_reset_flag(&(iLocal_98[3]), 3, true);
						if (func_120(cParam0, 4))
						{
						}
						if (has_collision_loaded_around_entity(&(iLocal_98[3])))
						{
							iLocal_281[3] = 1;
							if (!is_entity_dead(&(iLocal_131[3])))
							{
								if (!is_ped_on_mount(&(iLocal_98[3])))
								{
									func_1255(&(iLocal_98[3]), &(iLocal_131[3]));
								}
							}
							set_ped_config_flag(&(iLocal_98[3]), 167, true);
							if (!is_entity_dead(&(iLocal_131[3])))
							{
								set_blocking_of_non_temporary_events(&(iLocal_131[3]), false);
								clear_ped_tasks(&(iLocal_131[3]), 1, 0);
							}
							set_blocking_of_non_temporary_events(&(iLocal_98[3]), true);
							if (!is_entity_dead(iLocal_144))
							{
								task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[3]), iLocal_144, "utopia2_GuardRiverRight", 0f, -4.75f, 0, 4204040, -1, 0);
							}
						}
					}
				}
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 5:
			if (func_1460(cParam0) <= 7f)
			{
				func_380(cParam0, 2);
			}
			if (has_anim_event_fired(iLocal_144, 886554851))
			{
				_0xa0cefcea390aab9b(0);
				set_pad_shake(0, 1000, 200);
			}
			if (has_anim_event_fired(&(iLocal_126[0]), -1104006014))
			{
				_0xb36d3ec70963be60(iLocal_144, &(iLocal_126[0]));
			}
			if (has_anim_event_fired(&(iLocal_126[1]), -1104006014))
			{
				_0xb36d3ec70963be60(iLocal_144, &(iLocal_126[1]));
			}
			if (has_anim_event_fired(&(iLocal_126[2]), -1104006014))
			{
				_0xb36d3ec70963be60(iLocal_144, &(iLocal_126[2]));
			}
			if (has_anim_event_fired(&(iLocal_126[3]), -1104006014))
			{
				_0xb36d3ec70963be60(iLocal_144, &(iLocal_126[3]));
			}
			func_1242(cParam0);
			if (!&iLocal_163[43])
			{
				iLocal_163[43] = 1;
				func_975(2);
			}
			if (!&iLocal_163[44])
			{
				if ((func_1456(cParam0) >= 1950 || func_120(cParam0, 4)) || func_8(cParam0, 524288))
				{
					iLocal_163[44] = 1;
					if (!is_entity_dead(Global_35))
					{
						apply_damage_to_ped(Global_35, 25, 0, -1, 0);
					}
				}
			}
			if (!&iLocal_163[45])
			{
				if ((func_1456(cParam0) >= 4500 || func_120(cParam0, 4)) || func_8(cParam0, 524288))
				{
					iLocal_163[45] = 1;
					set_ped_config_flag(Global_35, 454, true);
					set_ped_config_flag(cParam0->f_5408, 454, true);
					if (!is_entity_dead(&(iLocal_103[3])))
					{
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_103[3])), 1269650476);
						register_target(&(iLocal_103[3]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_103[3]), true);
						_0x1f44b7e283c09ede(&(iLocal_103[3]), 0.01f, 1500);
						task_shoot_at_entity(&(iLocal_103[3]), cParam0->f_5408, 1500, -957453492, 0);
					}
				}
			}
			if (!&iLocal_163[46])
			{
				if ((func_1456(cParam0) >= 5000 || func_120(cParam0, 4)) || func_8(cParam0, 524288))
				{
					iLocal_163[46] = 1;
					if (!is_entity_dead(&(iLocal_103[1])))
					{
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_103[1])), 1269650476);
						register_target(&(iLocal_103[1]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_103[1]), true);
						_0x1f44b7e283c09ede(&(iLocal_103[1]), 0.01f, 1500);
						task_shoot_at_entity(&(iLocal_103[1]), cParam0->f_5408, 1500, -957453492, 0);
					}
				}
			}
			if (!&iLocal_163[47])
			{
				if ((func_1456(cParam0) >= 10000 || func_120(cParam0, 4)) || func_8(cParam0, 524288))
				{
					iLocal_163[47] = 1;
					if (!is_entity_dead(&(iLocal_103[2])))
					{
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_103[2])), 1269650476);
						register_target(&(iLocal_103[2]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_103[2]), true);
						_0x1f44b7e283c09ede(&(iLocal_103[2]), 0.01f, 10000);
						task_shoot_at_entity(&(iLocal_103[2]), cParam0->f_5408, -1, -957453492, 0);
					}
					if (!is_entity_dead(&(iLocal_103[3])))
					{
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_103[3])), 1269650476);
						register_target(&(iLocal_103[3]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_103[3]), true);
						_0x1f44b7e283c09ede(&(iLocal_103[3]), 0.01f, 10000);
						task_shoot_at_entity(&(iLocal_103[3]), cParam0->f_5408, -1, -957453492, 0);
					}
					if (!is_entity_dead(&(iLocal_103[6])))
					{
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_103[6])), 1269650476);
						register_target(&(iLocal_103[6]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_103[6]), true);
						_0x1f44b7e283c09ede(&(iLocal_103[6]), 0.01f, 10000);
						task_shoot_at_entity(&(iLocal_103[6]), cParam0->f_5408, -1, -957453492, 0);
					}
					if (!is_entity_dead(&(iLocal_103[7])))
					{
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_103[7])), 1269650476);
						register_target(&(iLocal_103[7]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_103[7]), true);
						_0x1f44b7e283c09ede(&(iLocal_103[7]), 0.01f, 10000);
						task_shoot_at_entity(&(iLocal_103[7]), cParam0->f_5408, -1, -957453492, 0);
					}
				}
			}
			if (!&iLocal_163[48])
			{
				if ((func_1456(cParam0) >= 16000 || func_120(cParam0, 4)) || func_8(cParam0, 524288))
				{
					iLocal_163[48] = 1;
					if (!is_entity_dead(&(iLocal_103[2])))
					{
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_103[2])), 1269650476);
						register_target(&(iLocal_103[2]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_103[2]), true);
						_0x1f44b7e283c09ede(&(iLocal_103[2]), 0.01f, 10000);
						set_ped_path_prefer_to_avoid_water(&(iLocal_103[2]), false, 0f);
						task_combat_hated_targets(&(iLocal_103[2]), 5f);
					}
					if (!is_entity_dead(&(iLocal_103[4])))
					{
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_103[4])), 1269650476);
						register_target(&(iLocal_103[4]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_103[4]), true);
						_0x1f44b7e283c09ede(&(iLocal_103[4]), 0.01f, 10000);
						set_ped_path_prefer_to_avoid_water(&(iLocal_103[4]), false, 0f);
						task_combat_hated_targets(&(iLocal_103[4]), 5f);
					}
					if (!is_entity_dead(&(iLocal_103[5])))
					{
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_103[5])), 1269650476);
						register_target(&(iLocal_103[5]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_103[5]), true);
						_0x1f44b7e283c09ede(&(iLocal_103[5]), 0.01f, 10000);
						set_ped_path_prefer_to_avoid_water(&(iLocal_103[5]), false, 0f);
						task_combat_hated_targets(&(iLocal_103[5]), 5f);
					}
					if (!is_entity_dead(&(iLocal_103[6])))
					{
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_103[6])), 1269650476);
						register_target(&(iLocal_103[6]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_103[6]), true);
						_0x1f44b7e283c09ede(&(iLocal_103[6]), 0.01f, 10000);
						set_ped_path_prefer_to_avoid_water(&(iLocal_103[6]), false, 0f);
						task_combat_hated_targets(&(iLocal_103[6]), 5f);
					}
					if (!is_entity_dead(&(iLocal_103[3])))
					{
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_103[3])), 1269650476);
						register_target(&(iLocal_103[3]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_103[3]), true);
						_0x1f44b7e283c09ede(&(iLocal_103[3]), 0.01f, 10000);
						task_shoot_at_entity(&(iLocal_103[3]), cParam0->f_5408, -1, -687903391, 0);
						set_ped_path_prefer_to_avoid_water(&(iLocal_103[3]), false, 0f);
					}
					func_983(iLocal_103[1], 0);
				}
			}
			if (!is_entity_dead(iLocal_144))
			{
				if (func_1458(cParam0, iLocal_144, "STAGECOACH004X", 0, 1, 1))
				{
					func_465(&iLocal_144, 0);
					set_entity_visible(&(iLocal_149[3]), true);
					_0x6dad6630ae4a74cb(&(iLocal_149[3]), 1);
					_0x19c7567d2f2287d6(Local_16.f_39, 7);
					func_975(11);
					if (!is_entity_dead(&(iLocal_149[4])))
					{
						set_entity_invincible(&(iLocal_149[4]), false);
						set_entity_visible(&(iLocal_149[4]), true);
					}
				}
			}
			if (!is_entity_dead(&(iLocal_126[1])))
			{
				if (func_1455(cParam0, &(iLocal_126[1]), "A_C_HorseDraft_01^2", 0, 1, 1))
				{
					set_entity_visible(&(iLocal_126[1]), false);
				}
			}
			if (!is_entity_dead(&(iLocal_126[0])))
			{
				if (func_1455(cParam0, &(iLocal_126[0]), "A_C_HorseDraft_01", 0, 1, 1))
				{
					set_entity_visible(&(iLocal_126[0]), false);
				}
			}
			if (!is_entity_dead(&(iLocal_126[3])))
			{
				if (func_1455(cParam0, &(iLocal_126[3]), "A_C_HorseDraft_01^3", 0, 1, 1))
				{
					set_entity_visible(&(iLocal_126[3]), false);
				}
			}
			if (!is_entity_dead(&(iLocal_126[2])))
			{
				if (func_1455(cParam0, &(iLocal_126[2]), "A_C_HorseDraft_01^1", 0, 1, 1))
				{
					set_entity_visible(&(iLocal_126[2]), false);
				}
			}
			if (!is_entity_dead(Global_35))
			{
				if (func_1455(cParam0, Global_35, 0, 0, 1, 1))
				{
					func_1461(-1157.227f, 6.3894f, 41.9455f, 0);
					if (func_120(cParam0, 4) || func_8(cParam0, 524288))
					{
						task_put_ped_directly_into_cover(Global_35, func_388(15, 0), 1000, 0, 0, 1, 0, &(iLocal_146[0]), 0, 1, 0);
					}
					else if (!is_ped_on_mount(Global_35))
					{
						task_put_ped_directly_into_cover(Global_35, func_388(15, 0), 1000, 0, 0, 1, 0, &(iLocal_146[0]), 0, 0, 0);
					}
					if (!is_ped_on_mount(Global_35))
					{
						set_ped_reset_flag(Global_35, 166, true);
						_0x2208438012482a1a(Global_35, true, true);
					}
				}
			}
			if (!is_entity_dead(cParam0->f_5408))
			{
				if (func_1455(cParam0, cParam0->f_5408, 0, 0, 1, 1))
				{
					set_blocking_of_non_temporary_events(cParam0->f_5408, true);
					if (func_120(cParam0, 4) || func_8(cParam0, 524288))
					{
						task_put_ped_directly_into_cover(cParam0->f_5408, func_388(15, 1), -1, 0, 0, 1, 1, &(iLocal_146[1]), 0, 1, 0);
					}
					else
					{
						task_put_ped_directly_into_cover(cParam0->f_5408, func_388(15, 1), -1, 0, 0, 1, 1, &(iLocal_146[1]), 0, 0, 0);
					}
					set_ped_reset_flag(cParam0->f_5408, 166, true);
					_0x2208438012482a1a(cParam0->f_5408, true, false);
				}
			}
			break;
		case 25:
			if (!bLocal_162)
			{
				bLocal_162 = true;
				func_905(-7594117);
				func_906(1388161943);
			}
			if (!is_entity_dead(Global_35))
			{
				if (func_1455(cParam0, Global_35, 0, 0, 1, 1))
				{
					if (func_120(cParam0, 4) || func_8(cParam0, 524288))
					{
						func_890(0f, 0f);
					}
					if (!is_entity_dead(cParam0->f_5411))
					{
						clear_ped_tasks_immediately(cParam0->f_5411, false, true);
						func_1306(cParam0->f_5411, func_223(8, 6), 2, 1073741824);
					}
				}
			}
			if (!is_entity_dead(iLocal_94))
			{
				if (func_1455(cParam0, iLocal_94, 0, 0, 1, 1))
				{
					delete_ped(&iLocal_94);
				}
			}
			if (!is_entity_dead(cParam0->f_5408))
			{
				if (func_1455(cParam0, cParam0->f_5408, 0, 0, 1, 1))
				{
					if (func_120(cParam0, 4) || func_8(cParam0, 524288))
					{
						func_1306(cParam0->f_5408, func_223(8, 7), 2, 1073741824);
					}
					delete_ped(&(cParam0->f_5408));
				}
			}
			if (!is_entity_dead(&(iLocal_149[5])))
			{
				if (func_1458(cParam0, &(iLocal_149[5]), "P_STRONGBOX01X", 0, 1, 1))
				{
					func_906(45121961);
					if (does_navmesh_blocking_object_exist(&(Global_1934765->f_5[3])))
					{
						remove_navmesh_blocking_object(Global_1934765->f_5[3]);
					}
					if (!does_navmesh_blocking_object_exist(&(Global_1934765->f_5[3])))
					{
						Global_1934765->f_5[3] = add_navmesh_blocking_object(-1177.013f, -8.2166f, 40.5358f, 0.5065f, 0.3454f, 9f, 80.43f, false, 7);
					}
				}
			}
			if (!is_entity_dead(&(iLocal_149[3])))
			{
				if (func_1458(cParam0, &(iLocal_149[3]), "S_COACH2CRASHEDUTOPIA2", 0, 1, 1))
				{
					_0x7c334ff4d9215912("utp2_nav_tree_fallen");
					func_906(-1614141377);
					if (does_navmesh_blocking_object_exist(&(Global_1934765->f_5[2])))
					{
						remove_navmesh_blocking_object(Global_1934765->f_5[2]);
					}
					if (!does_navmesh_blocking_object_exist(&(Global_1934765->f_5[2])))
					{
						Global_1934765->f_5[2] = add_navmesh_blocking_object(-1170.829f, -8.3252f, 40.5603f, 4.2334f, 2.5136f, 21.1796f, 14.4119f, false, 7);
					}
				}
			}
			break;
	}
	return 1;
}

void func_911(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

void func_912(char[4] cParam0)
{
	func_1462(8, 0, 0, 0);
	if (!bVar286)
	{
		iLocal_289 = 1;
		func_903(Local_16.f_3, 0, 0, 0, 0, 0);
	}
	set_vehicle_density_multiplier_this_frame(0f);
	set_random_vehicle_density_multiplier_this_frame(0f);
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	func_1463(cParam0);
	switch (func_33(cParam0))
	{
		case 2:
		case 4:
		case 5:
			if (func_1006(Global_35, 0))
			{
				set_ped_reset_flag(Global_35, 54, true);
			}
			break;
	}
	if (!&iLocal_163[67])
	{
		if (func_33(cParam0) >= 3 && func_33(cParam0) <= 5)
		{
			if (func_1006(Global_35, 0) && _0x23bf601a42f329a0(Global_35))
			{
				iLocal_163[67] = 1;
				func_1464(3);
			}
		}
	}
	if (&iLocal_163[68])
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		disable_control_action(0, -1275885380, false);
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 129547951, false);
	}
}

void func_913(char[4] cParam0)
{
	if (!func_23(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 268435456))
	{
		return;
	}
	func_1465(cParam0);
}

void func_914(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_213())
			{
				if (func_888(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_220(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_915(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 8388608))
	{
		if (func_1466(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1467();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1291(cParam0, func_33(cParam0), 8388608);
		}
	}
}

void func_916(char[4] cParam0)
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
		if (func_238() || func_54())
		{
			func_99(cParam0, 1048576);
		}
	}
	else if (!func_238() && !func_54())
	{
		func_884(cParam0, 1048576);
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
			func_884(cParam0, 134217728);
		}
	}
}

void func_917(char[4] cParam0)
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

void func_918(char[4] cParam0)
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

void func_919(char[4] cParam0)
{
	if (!is_itemset_valid(iLocal_14))
	{
		return;
	}
	iVar0 = get_itemset_size(iLocal_14);
	if (cParam0->f_13179 == -1 || cParam0->f_13179 > (iVar0 - 1))
	{
		cParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = cParam0->f_13179;
	while (iVar1 >= 0)
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, iLocal_14));
		if (does_entity_exist(iVar3) && is_entity_dead(iVar3))
		{
			remove_from_itemset(iVar3, iLocal_14);
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
		cParam0->f_13179 = (get_itemset_size(iLocal_14) - 1);
	}
}

int func_920(char[4] cParam0)
{
	if ((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_254(cParam0->f_5423[iVar0]))
		{
			func_972(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_921(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1468(iVar0))
	{
		return false;
	}
	iVar1 = func_1469(iParam2);
	if (!func_1470(iVar1))
	{
		return false;
	}
	if (!func_1471(cParam0, iParam1, iParam2))
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

int func_922(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_923(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_924(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_220(&(cParam0->f_603));
	}
}

void func_925(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_926(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(cParam0->f_13109)))
	{
		func_27(&(cParam0->f_13109), 0);
	}
	else if (func_888(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_255(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_256(cParam0->f_5421))
		{
			iVar2 = func_257(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1472(cParam0->f_5421, iVar1);
					if (!is_entity_dead(iVar3) && !_0xa0bc8faed8cfeb3c(iVar3))
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
						iVar5 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(iVar2), iVar4);
						if (!is_entity_dead(iVar5))
						{
							if (!_0xa0bc8faed8cfeb3c(iVar5))
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
	while (iVar1 < get_itemset_size(iLocal_14))
	{
		iVar6 = get_indexed_item_in_itemset(iVar1, iLocal_14);
		iVar7 = _get_entity_from_item(iVar6);
		if (does_entity_exist(iVar7))
		{
			if (is_entity_a_ped(iVar7))
			{
				iVar8 = get_ped_index_from_entity_index(iVar7);
				if (!is_entity_dead(iVar8) && !_0xa0bc8faed8cfeb3c(iVar8))
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
					iVar10 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(iVar7), iVar9);
					if (!is_entity_dead(iVar10))
					{
						if (!_0xa0bc8faed8cfeb3c(iVar10))
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

float func_927(char[4] cParam0)
{
	return func_888(&(cParam0->f_603));
}

bool func_928(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_929(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_921(cParam0, iParam1, 4))
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
		func_1473(cParam0);
		if (func_1474(cParam0))
		{
			func_1475(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_884(cParam0, 524288);
		func_1476(&(cParam0->f_7375), 4);
		if (func_1466(cParam0))
		{
			func_140(cParam0, func_33(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1467();
		}
		return true;
	}
	return false;
}

void func_930(char[4] cParam0)
{
	func_1477(cParam0);
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

bool func_931(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_883(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_884(cParam0, 2097152);
			func_265(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_923(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1423(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_883(cParam0))
			{
				func_884(cParam0, 2097152);
				func_885(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_885(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_883(cParam0))
		{
			func_884(cParam0, 2097152);
			func_1430(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_885(cParam0, Var0);
	}
	return true;
}

bool func_932(char[4] cParam0)
{
	return func_1478(&(cParam0->f_7375));
}

void func_933(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1479(cParam0))
		{
			func_434(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1480(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

int func_934(char[4] cParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(cParam0, func_33(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_254(cParam0->f_5423[iVar1]))
		{
			if (func_1481(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1482(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_935(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1483(cParam0))
		{
			func_434(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1480(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

void func_936(char[4] cParam0)
{
	switch (func_1484(&iVar0))
	{
		case 1:
			func_1485(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_190(iVar0) && iVar0 == func_12(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_937(char[4] cParam0, int iParam1)
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

int func_938(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1429(cParam0);
		func_884(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1423(cParam0, iParam1) };
	if (func_1486(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_939(char[4] cParam0, int iParam1)
{
	func_1487(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_225(cParam0, iParam1));
}

void func_940(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_925(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_884(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_884(cParam0, 4);
		func_884(cParam0, 8192);
		func_884(cParam0, 536870912);
		func_265(cParam0, 4);
		func_65(0);
		func_64(0);
		func_884(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1488(cParam0);
		if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_82(32768))
		{
			func_380(cParam0, 524288);
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
				func_1489(1, 1);
			}
		}
	}
}

void func_941(bool bParam0)
{
	if (!func_197(0, 0, 1) || bParam0)
	{
		iVar0 = func_1041();
		iVar1 = func_1044(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1490(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1490(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

int func_942(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1491(bParam1, bParam2, bParam3);
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

var func_943(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1492(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1493(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1492(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_944(char[4] cParam0)
{
	return true;
}

bool func_945(char[4] cParam0)
{
	return true;
}

int func_946(char[4] cParam0)
{
	return 1;
}

int func_947(int iParam0)
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

void func_948(int iParam0)
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

void func_949()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_950(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_951();
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
	if (func_1494(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_951()
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
		iVar3 = func_1495(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

int func_952(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_686(iVar0);
}

bool func_953()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_1496())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

int func_954(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_439(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_955()
{
	iVar0 = 1549701178;
	switch (func_1497())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_956()
{
	iVar0 = 614608656;
	switch (func_1497())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_957()
{
	iVar0 = -1832677570;
	switch (func_1497())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_958()
{
	iVar0 = 1623252156;
	switch (func_1497())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_959(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(iParam0, 263, !bParam1);
		}
		set_ped_config_flag(iParam0, 138, bParam1);
		set_ped_config_flag(iParam0, 488, bParam1);
	}
}

void func_960(var uParam0, int iParam1)
{
	func_416(&(uParam0->f_64), iParam1);
}

void func_961(var uParam0, int iParam1)
{
	func_1498(&(uParam0->f_64), iParam1);
}

bool func_962(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_976(iParam0))
		{
			return false;
		}
	}
	func_1499(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_963(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_976(iParam0))
		{
			return;
		}
	}
	func_1499(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_964(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_965(int iParam0)
{
	if (!func_964(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_966(int iParam0)
{
	return iParam0 != 0;
}

int func_967(int iParam0)
{
	if (!func_964(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_968(int iParam0)
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

int func_969(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (!func_968(iParam0))
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

bool func_970(char[4] cParam0, int iParam1)
{
	return func_445(cParam0, iParam1, &uVar0);
}

void func_971(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_463(&iVar0);
}

void func_972(var uParam0)
{
	if (func_511(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_511(uParam0, 1024);
	if (func_511(uParam0, 128) || bVar0)
	{
		if (func_511(uParam0, 4096))
		{
			if (!func_511(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_960(uParam0, 2048);
				return;
			}
		}
		else if (func_511(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_961(uParam0, 2048);
		}
		if (func_511(uParam0, 512))
		{
			if (func_512(uParam0->f_10))
			{
				if (func_874(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1500(uParam0->f_10))
					{
						func_517(uParam0->f_10, 1);
						func_1501(uParam0->f_10, 0);
					}
				}
				else if ((func_1500(uParam0->f_10) && !bVar0) && !func_511(uParam0, 16384))
				{
					func_517(uParam0->f_10, 0);
					func_1501(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_874(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_874(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_511(uParam0, 512))
	{
		if (func_512(uParam0->f_10))
		{
			if (func_1500(uParam0->f_10))
			{
				func_517(uParam0->f_10, 0);
				func_1501(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

void func_973(int iParam0)
{
	if (!func_976(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 != (*Global_1360165)[iParam0]->f_13 || func_962(iParam0, 36, 1))
	{
		func_963(iParam0, 36, 1);
		(*Global_1360165)[iParam0]->f_12 = (*Global_1360165)[iParam0]->f_13;
		func_1502(iParam0, &((*Global_1360165)[iParam0]->f_2));
	}
}

void func_974(int* iParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (is_vehicle_driveable(*iParam0, false, false))
		{
			if (!is_vehicle_seat_free(*iParam0, iVar12))
			{
				iVar1[iVar0] = get_ped_in_vehicle_seat(*iParam0, iVar12);
				if (!is_entity_dead(&(iVar1[iVar0])))
				{
					_0xf9acf4a08098ea25(&(iVar1[iVar0]), true);
					func_879(&(iVar1[iVar0]), get_offset_from_entity_in_world_coords(*iParam0, 3f, 3f, 0f), get_entity_heading(*iParam0), 2, 1073741824);
				}
			}
		}
		iVar0++;
	}
}

void func_975(int iParam0)
{
	if (does_entity_exist(&(iLocal_149[iParam0])))
	{
		delete_object(iLocal_149[iParam0]);
	}
}

bool func_976(int iParam0)
{
	return iParam0 > -1;
}

int func_977(int iParam0)
{
	if (!func_512(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_978(int iParam0)
{
	if (!func_976(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_979(int iParam0)
{
	if (!func_976(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_980(int iParam0, int iParam1, bool bParam2)
{
	if (!func_976(iParam0))
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

void func_981(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_976(iParam0))
		{
			return;
		}
	}
	func_1499(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_982(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_976(iParam0))
	{
		return 0;
	}
	iVar0 = func_977(iParam0);
	if (func_1006(iVar0, 0))
	{
		if (func_1006(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_978(iParam0)) || func_979(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_1503(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_1504(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_1505(iParam0);
					_0x7b204f88f6c3d287(func_1506(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_1506(iParam0, 0));
					func_1507(iParam0);
				}
			}
			else
			{
				if (func_707(iParam0, 32768, 1))
				{
					iVar2 = func_1506(iParam0, 0);
					_0xb65e7f733956cf25(iVar2);
					_0xfcc6db8dbe709bc8(iVar2);
				}
				else
				{
					set_ped_as_no_longer_needed(&iVar0);
				}
				set_blocking_of_non_temporary_events(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_1006((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_707(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_1505(iParam0);
				_0x7b204f88f6c3d287(func_1506(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_1506(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_1505(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_1508(iParam0, 0);
	return 1;
}

void func_983(int* iParam0, bool bParam1)
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

bool func_984(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_985(int iParam0)
{
	iVar0 = func_473(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1509(iVar0);
}

int func_986(int iParam0, int iParam1)
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
			func_1510(iVar2);
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

void func_987()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_988(int iParam0, int iParam1)
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

int func_989(bool bParam0)
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

int func_990(int iParam0)
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

void func_991(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_992(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_993(int iParam0, int iParam1)
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
			func_1511((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1511(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_190(&(Global_1898164->f_1[0])))
	{
		func_202(&(Global_1898164->f_1[0]), 3);
	}
}

void func_994(int iParam0, int iParam1, bool bParam2)
{
	if (!func_491(iParam0))
	{
		return;
	}
	func_1512(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_995(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_996(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_997(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_998()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_999(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1513(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_1000(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 8f;
				case 1:
					return 175.5f;
				case 2:
					return 265.4765f;
				case 3:
					return -924f;
				case 4:
					return 94.26f;
				case 5:
					return 87.99f;
				case 6:
					return 120.58f;
				case 7:
					return 93.74f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -6.5f;
				case 1:
					return -4.5f;
				case 2:
					return -7.3f;
				case 3:
					return -4.73f;
				case 4:
					return 259.5f;
				case 5:
					return 266f;
				case 6:
					return 262f;
				case 7:
					return 268f;
				case 8:
					return 268f;
				case 9:
					return 262f;
				case 10:
					return 264f;
				case 11:
					return 262f;
				case 12:
					return 268.5f;
				case 13:
					return 259.5f;
				case 14:
					return 266.5f;
				case 15:
					return 173.61f;
				case 16:
					return -31.93f;
				case 17:
					return -45.55f;
				case 18:
					return 184.84f;
				case 19:
					return -181.12f;
				case 20:
					return 189.91f;
				case 21:
					return -182.95f;
				case 22:
					return -172.96f;
				case 23:
					return -103.9817f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -95f;
				case 1:
					return -68.5f;
				case 2:
					return -104.5f;
				case 3:
					return -100.5f;
				case 4:
					return -90.47f;
				case 5:
					return 272.5f;
				case 6:
					return 260.5f;
				case 7:
					return 340.5f;
				case 8:
					return 342.5f;
				case 9:
					return 342.5f;
				case 10:
					return 342.5f;
				case 11:
					return 270f;
				case 12:
					return 266.5f;
				case 13:
					return 268.5f;
				case 14:
					return 270.5f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -68f;
				case 1:
					return 288f;
				case 2:
					return 270f;
				case 3:
					return 272f;
				case 4:
					return 289.5f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -96.5f;
				case 1:
					return -90f;
				case 2:
					return -86f;
				case 3:
					return -86f;
				case 4:
					return -109.97f;
				case 5:
					return 113.3716f;
				case 6:
					return 13f;
				case 7:
					return 204.5f;
				case 8:
					return 387f;
				case 9:
					return -251.5f;
				case 10:
					return 548.5f;
				case 11:
					return -245.5f;
				case 12:
					return 138f;
				case 13:
					return 134f;
				case 14:
					return 146.5f;
				case 15:
					return 133.5f;
				case 16:
					return 173f;
				case 17:
					return 268.3667f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -64.5f;
				case 1:
					return -66f;
				case 2:
					return -84f;
				case 3:
					return -86f;
				case 4:
					return -110.76f;
				case 5:
					return 68.5f;
				case 6:
					return 87f;
				case 7:
					return 110.5f;
				case 8:
					return 459f;
				case 9:
					return 475f;
				case 10:
					return 507f;
				case 11:
					return -225.5f;
				case 12:
					return 90f;
				case 13:
					return 103f;
				case 14:
					return 126.5f;
				case 15:
					return 103f;
				case 16:
					return 94.5f;
				case 17:
					return -41.34f;
				case 18:
					return -68.22f;
				case 19:
					return -112f;
				case 20:
					return -78f;
				case 21:
					return -67.33f;
				case 22:
					return -76.51f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 95.5f;
				case 1:
					return -102.5f;
				case 2:
					return 73.24f;
				case 3:
					return 129.59f;
				case 4:
					return 68.5f;
				case 5:
					return 73f;
				case 6:
					return 184.5f;
				case 7:
					return 519f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -40f;
				case 1:
					return -114.25f;
				case 2:
					return -84.47f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -57f;
				case 1:
					return 62f;
				case 2:
					return -31.87f;
				case 3:
					return -97.58f;
				case 4:
					return -58.5f;
				case 5:
					return 169.66f;
				case 6:
					return -79.5f;
				case 7:
					return 114.69f;
				case 8:
					return -109.53f;
				case 9:
					return -163.21f;
				case 10:
					return -167.79f;
				case 11:
					return -169.38f;
				case 12:
					return 185.66f;
				case 13:
					return 195.69f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -52.5f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 4:
					return -18f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -4.73f;
				case 1:
					return -52f;
				case 2:
					return -52f;
				case 3:
					return -14f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 285.5f;
				case 1:
					return 299f;
				case 2:
					return 287f;
				case 3:
					return 316f;
				case 4:
					return 294f;
				case 5:
					return 331f;
				case 6:
					return 80f;
				case 7:
					return 66.5f;
				case 8:
					return 128f;
				case 9:
					return 472f;
				case 10:
					return 138.5f;
				case 11:
					return 145.5f;
				case 12:
					return 128.5f;
				case 13:
					return 119f;
				case 14:
					return 129f;
				case 15:
					return 153.5f;
				case 16:
					return 126.5f;
				case 17:
					return 69.5f;
				case 18:
					return 118.5f;
				case 19:
					return 76f;
				case 20:
					return 118.5f;
				case 21:
					return 134f;
				case 22:
					return 118.5f;
				case 23:
					return 132.5f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 270f;
				case 1:
					return 399f;
				case 2:
					return 252.5f;
				case 3:
					return 317f;
				case 4:
					return 263f;
				case 5:
					return 296.5f;
				case 6:
					return 99.5f;
				case 7:
					return 129f;
				case 8:
					return 135f;
				case 9:
					return 480.5f;
				case 10:
					return 150f;
				case 11:
					return 137.5f;
				case 12:
					return 144f;
				case 13:
					return 103f;
				case 14:
					return 144.5f;
				case 15:
					return 482f;
				case 16:
					return 120f;
				case 17:
					return 516f;
				case 18:
					return 120f;
				case 19:
					return 516f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -68.22f;
				case 1:
					return -84.5f;
				case 2:
					return -69.5f;
				case 3:
					return -69.5f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return 0f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return -41.34f;
				case 1:
					return -68.22f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 113.2667f;
				case 1:
					return 125.2667f;
				case 2:
					return 122.2667f;
				case 3:
					return 127.7667f;
			}
			break;
	}
	return 0f;
}

void func_1001(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1514();
	}
	else
	{
		return;
	}
	func_1515();
	Global_40.f_9.f_14 = func_285();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1516())
		{
			func_371(Global_1310720->f_1);
		}
		else if (func_1517() == func_372(Global_36, 1) && func_1518() != 2)
		{
			func_371(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_371(Global_36);
		}
		func_1519(Global_36, &vVar0, &uVar4);
		if (!func_1516())
		{
			if (func_1520(vVar0, Global_36) < func_1520(Global_40.f_9.f_7, Global_36))
			{
				func_371(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_372(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1519(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_229(Global_1935630, 8192);
	}
	func_1521();
}

bool func_1002(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_254(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1003(int iParam0, int iParam1, bool bParam2)
{
	if (!func_976(iParam0))
	{
		return;
	}
	func_1522(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_1004(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1005(int iParam0)
{
	func_981(iParam0, 36, 1);
}

bool func_1006(int iParam0, int iParam1)
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
	if (func_391(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_391(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_391(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_391(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_391(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_391(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_391(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_391(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_1007(int iParam0, bool bParam1)
{
	if (!func_512(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1523(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_1008(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_976(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_963(iParam0, 50, 1);
		func_963(iParam0, 48, 1);
		func_963(iParam0, 49, 1);
		func_963(iParam0, 51, 1);
		func_963(iParam0, 52, 1);
		func_963(iParam0, 54, 1);
		func_963(iParam0, 55, 1);
	}
	else
	{
		func_981(iParam0, 50, 1);
		func_981(iParam0, 48, 1);
		func_981(iParam0, 49, 1);
		func_981(iParam0, 51, 1);
		if (bParam3)
		{
			func_981(iParam0, 54, 1);
		}
		else
		{
			func_963(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_981(iParam0, 52, 1);
			if (bParam3)
			{
				func_981(iParam0, 55, 1);
			}
		}
		else
		{
			func_963(iParam0, 52, 1);
			if (!bParam3)
			{
				func_963(iParam0, 55, 1);
			}
		}
	}
}

void func_1009(int iParam0, bool bParam1)
{
	if (!func_976(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_549(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_549(iParam0), 204, false);
	}
}

void func_1010(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_512(iParam0))
	{
		return;
	}
	if (func_513(iParam0))
	{
		if (!func_258(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_962(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1007(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_549(iParam0);
	if (((does_entity_exist(iVar1) && func_1524(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
	{
		return;
	}
	if (does_entity_exist(iVar1) && is_entity_attached(iVar1))
	{
		if (((is_ped_active_in_scenario(iVar1, 1) || _0x0c3cb2e600c8977d(iVar1, 1)) || is_ped_on_mount(iVar1)) || is_ped_in_any_vehicle(iVar1, false))
		{
			_0xf1c03a5352243a30(iVar1);
			clear_ped_tasks_immediately(iVar1, true, true);
		}
		detach_entity(iVar1, true, true);
	}
	if (bParam4)
	{
		func_981(iParam0, 2, 1);
	}
	else
	{
		func_1525(iParam0);
		func_981(iParam0, 1, 1);
	}
}

void func_1011(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_512(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

bool func_1012(int iParam0)
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

void func_1013(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_215(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1526(iVar6);
		if (!_0x608bc6a6aacd5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!does_entity_exist(iVar7))
			{
			}
			else if (is_entity_a_mission_entity(iVar7) && !_0x88ad6cc10d8d35b2(iVar7))
			{
			}
			else
			{
				if (!is_entity_a_mission_entity(iVar7))
				{
					set_entity_as_mission_entity(iVar7, true, true);
				}
				_0x0d0db2b6af19a987(&iVar7);
			}
		}
		iVar6++;
	}
}

void func_1014(int iParam0, int iParam1)
{
	iParam0 = func_266(iParam0);
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

bool func_1015(int iParam0, int iParam1)
{
	iParam0 = func_266(iParam0);
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

void func_1016(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1528(func_1527(255), 109029619));
	}
	else if (func_304())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1043();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1017(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_1018(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1528(func_1527(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_304())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1043())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1019(int iParam0)
{
	iParam0 = func_266(iParam0);
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

float func_1020(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1021(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1400(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1017(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1017(iParam0) + 1;
	fVar6 = func_1529(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1530(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1022(int iParam0)
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

void func_1023(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1024()
{
	if (func_338())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1025(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1531((Global_40.f_4283.f_325 + iParam0));
}

void func_1026(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1024())
	{
		func_704(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_704(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1027(int iParam0)
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

char* func_1028(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1029(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1030(int iParam0)
{
	func_1038(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1031(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1032(1);
	}
}

void func_1032(bool bParam0)
{
	if (bParam0)
	{
		func_1532(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1533(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1033(int iParam0)
{
	if (!func_190(iParam0))
	{
		return -15;
	}
	return func_1534(iParam0);
}

bool func_1034(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_700(iParam1) || !func_700(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1035(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1036(int iParam0)
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

bool func_1037(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1038(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1535(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1039(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1040(int iParam0, int iParam1, bool bParam2)
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

int func_1041()
{
	iVar0 = func_554();
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

int func_1042(int iParam0)
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
	fVar1 = (to_float(iParam0) * fVar0);
	fVar1 = func_1490(absf(fVar1) < 1f, func_1490(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1043()
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

int func_1044(int iParam0)
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

int func_1045()
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

void func_1046(int iParam0, bool bParam1, int iParam2)
{
	func_1536((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1537(iParam0);
}

void func_1047(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1538(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1048(bool bParam0)
{
	bVar3 = false;
	if (func_1539(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1540(iVar5, &iVar2, &iVar0))
			{
				if (!func_574(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1541(iVar2);
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
							if (func_593(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1041() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1041() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1542();
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

char* func_1049(int iParam0)
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

bool func_1050(int iParam0)
{
	return func_593(iParam0) == -427144552;
}

bool func_1051(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_595(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1056(iParam0, &uVar0, 1, 0, 0);
	}
	return func_347(iParam0, 1, 0);
}

void func_1052(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_593(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_600(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_601(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_578(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_654(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1053(int iParam0, int iParam1)
{
	if (func_594(iParam0, 58855631))
	{
		func_1204(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1054(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	if (!func_602(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_989(bParam3), iParam0);
}

int func_1055(int iParam0, bool bParam1)
{
	if (func_606(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_989(bParam1), iParam0, 0);
}

bool func_1056(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1543(&iParam0);
	if (!func_574(iParam0, 0))
	{
		return false;
	}
	if (!func_602(0))
	{
		bParam3 = true;
	}
	if (func_1050(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1187(0) };
			Var4.f_9 = -1591664384;
			if (!func_1079(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1080(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1188(iParam0, 1))
			{
				if (!func_1079(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1080(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1544(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1054(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1545(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_989(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1057(int iParam0, int iParam1)
{
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_593(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_594(iParam0, 1399091007))
	{
		func_1121(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1058(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1546(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1547(&Var0, func_1187(0));
	}
	if (!func_1548(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1131(iVar14);
	return uVar15;
}

int func_1059()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1060(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1061(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1549(iParam0);
	fVar1 = func_1550(iParam0);
	if ((Global_1347477->f_117 || !func_596(31)) || !func_1551(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1552(iVar0) >= 7)
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
	func_1553(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_704(_create_var_string(6, func_1554(iParam0), fVar1), "itemtype_textures", func_1555(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1062(int iParam0)
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

int func_1063(int iParam0, int iParam1)
{
	if (!func_1219(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1064(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_589() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1556(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1557(), 12);
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
			else if (func_1103() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1558(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1103(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1559(), 13);
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
			else if (func_1104() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1560(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1104(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1063(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1065(int iParam0, int iParam1, int iParam2)
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

bool func_1066(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1067(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1068(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1561(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_347(iVar2, 1, 0) || func_1563(func_1562(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1072(func_1561(iVar0))), func_1072(func_1561(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1103() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1564(iVar0)), func_1564(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1558() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1564(iVar0)), func_1564(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1564(iVar0)), func_1564(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1114(iParam3, func_1565(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1110(iVar2) - iParam7) >= func_1063(iParam3, func_1566(iVar0));
				}
				else
				{
					bVar1 = func_1110(iVar2) >= func_1063(iParam3, func_1566(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1110(iVar2) + iParam7) >= func_1063(iParam3, func_1566(iVar0));
			}
			else
			{
				bVar1 = func_1110(iVar2) >= func_1063(iParam3, func_1566(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1567(iVar2)), func_1567(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1568(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1569(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1569(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1104() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1570(iVar0)), func_1570(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1560() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1570(iVar0)), func_1570(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1570(iVar0)), func_1570(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1114(iParam3, func_1565(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1110(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1571(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1571(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1572(iVar2)), func_1572(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1069(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1559() >= 13)
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

bool func_1070(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_190(func_203(0)) && ((func_1573(0) == 1 || func_1573(0) == 8) || func_1573(0) == 6))
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

var func_1071(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1072(int iParam0)
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

bool func_1073(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1074(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1075(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1076(int iParam0)
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
			func_1574(1);
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
			func_1575(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1575(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1575(3);
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
			func_1576(1);
			break;
		case 34:
			func_1577(1);
			break;
		case 35:
			func_1578(1);
			break;
		case 36:
			break;
		case 37:
			func_1579(0);
			break;
		case 38:
			func_1580(0);
			break;
		case 39:
			func_1581(0);
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
			if ((!&Global_1879534 && func_395()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_711("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_325(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_395()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_711("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_325(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_395()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_711("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_325(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_395()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_711("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_325(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1144(99217379) || func_1582(99217379) == 2110595215)
				{
					if (func_1043())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_347(iVar0, 1, 0))
					{
						func_647(iVar0, 1, 752097756);
					}
					func_626(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_347(1013902307, 1, 0))
				{
					func_647(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_347(1013902307, 1, 0))
				{
					func_647(1013902307, 1, 752097756);
				}
				if (!func_347(142640135, 1, 0))
				{
					func_647(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_347(786809402, 1, 0))
				{
					func_647(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_347(786809402, 1, 0))
				{
					func_647(786809402, 1, 752097756);
				}
				if (!func_347(-518019409, 1, 0))
				{
					func_647(-518019409, 1, 752097756);
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
			func_1583();
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

bool func_1077(int iParam0)
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

int func_1078(int iParam0, int iParam1)
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

bool func_1079(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1545(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1080(int iParam0, var uParam1, int iParam2)
{
	if (func_1584(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1081(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_574(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_989(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1082(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1585(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1191(*uParam1, &Var0, bParam6, 0))
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
	if (!func_602(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_989(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1083(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1586(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1084(int iParam0)
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
	iVar2 = func_285();
	func_334(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1085(int iParam0)
{
	if (func_1587(iParam0))
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

bool func_1086(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1087(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1088(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_596(50))
			{
				if (!func_596(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_596(51))
			{
				if (!func_596(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1089(int iParam0, int iParam1, var uParam2)
{
	if (!func_574(iParam1, 0))
	{
		return false;
	}
	if (func_593(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_598(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_672(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_594(iParam1, 866047851))
	{
		iVar5 = func_673(iVar4, 1);
		if (func_1588(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_598(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_594(iParam1, -1638171711))
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
			if (func_440(1868067663, &uVar0))
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
				iVar10 = func_1589(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1589(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_598(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_594(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1590(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1090()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1091()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1092()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_347(func_1591(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1093(int iParam0)
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

bool func_1094(int iParam0, int iParam1)
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
	if (func_347(iVar0, 1, 0) && func_347(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1095(int iParam0)
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

bool func_1096(int iParam0, int iParam1)
{
	iVar0 = func_1592(iParam0);
	if (iVar0 != -15)
	{
		func_334(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_701(iVar0, 1);
	}
	return false;
}

void func_1097(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1098(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1099(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1100(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1101(int iParam0)
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
	iVar1 = func_1110(iVar9);
	iVar2 = func_1110(iVar10);
	iVar3 = func_1110(iVar11);
	iVar5 = func_1111(iVar9);
	iVar6 = func_1111(iVar10);
	iVar7 = func_1111(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1110(iVar12);
		iVar8 = func_1111(iVar12);
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

void func_1102(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1103()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1593(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1104()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1105(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1571(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1571(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1571(iVar0))
		{
			*sParam2++;
		}
		if (func_1571(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1571(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1571(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1571(iVar0))
		{
			*sParam2++;
		}
		if (func_1571(iVar1))
		{
			*sParam2++;
		}
		if (func_1571(iVar0) && func_1571(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1571(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1571(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1571(iVar0))
		{
			*sParam2++;
		}
		if (func_1571(iVar1))
		{
			*sParam2++;
		}
		if (func_1571(iVar2))
		{
			*sParam2++;
		}
		if ((func_1571(iVar0) && func_1571(iVar1)) && func_1571(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1571(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1571(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1571(iVar0))
		{
			*sParam2++;
		}
		if (func_1571(iVar1))
		{
			*sParam2++;
		}
		if (func_1571(iVar2))
		{
			*sParam2++;
		}
		if (func_1571(iVar3))
		{
			*sParam2++;
		}
		if (((func_1571(iVar0) && func_1571(iVar1)) && func_1571(iVar2)) && func_1571(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1106(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1594(1497516462);
			func_1595(2016141805);
			func_1595(1010885152);
			func_1595(-502324015);
			break;
		case 2016141805:
			func_1595(1497516462);
			func_1594(2016141805);
			func_1595(1010885152);
			func_1595(-502324015);
			break;
		case 1010885152:
			func_1595(1497516462);
			func_1595(2016141805);
			func_1594(1010885152);
			func_1595(-502324015);
			break;
		case -502324015:
			func_1595(1497516462);
			func_1595(2016141805);
			func_1595(1010885152);
			func_1594(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1595(-538889627);
			func_1595(-538880323);
			func_1595(-1056767524);
			func_1594(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1596();
			func_1594(iParam0);
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
			func_1597();
			func_1594(iParam0);
			break;
		case 2019386373:
			func_1595(-664252410);
			func_1595(2109952320);
			func_1594(2019386373);
			break;
		case -664252410:
			func_1595(2019386373);
			func_1595(2109952320);
			func_1594(-664252410);
			break;
		case 2109952320:
			func_1595(2019386373);
			func_1595(-664252410);
			func_1594(2109952320);
			break;
		case -1674179981:
			func_1595(-1835851517);
			func_1595(-1838352012);
			func_1594(-1674179981);
			break;
		case -1835851517:
			func_1595(-1674179981);
			func_1595(-1838352012);
			func_1594(-1835851517);
			break;
		case -1838352012:
			func_1595(-1674179981);
			func_1595(-1835851517);
			func_1594(-1838352012);
			break;
		case -1717960576:
			func_1595(210001842);
			func_1594(-1717960576);
			break;
		case 210001842:
			func_1595(-1717960576);
			func_1594(210001842);
			break;
		case -150493654:
			func_1595(-1271608261);
			func_1595(1846061697);
			func_1595(-1145519186);
			func_1594(-150493654);
			break;
		case -1271608261:
			func_1595(-150493654);
			func_1595(1846061697);
			func_1595(-1145519186);
			func_1594(-1271608261);
			break;
		case 1846061697:
			func_1595(-150493654);
			func_1595(-1271608261);
			func_1595(-1145519186);
			func_1594(1846061697);
			break;
		case -1145519186:
			func_1595(-150493654);
			func_1595(-1271608261);
			func_1595(1846061697);
			func_1594(-1145519186);
			break;
		case 1766284049:
			func_1595(280705402);
			func_1595(1926308480);
			func_1594(1766284049);
			break;
		case 280705402:
			func_1595(1766284049);
			func_1595(1926308480);
			func_1594(280705402);
			break;
		case 1926308480:
			func_1595(1766284049);
			func_1595(280705402);
			func_1594(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1595(439465264);
				func_1594(1609506757);
			}
			else
			{
				func_1595(1609506757);
				func_1595(439465264);
			}
			break;
		case 439465264:
			if (func_484(1609506757))
			{
				if (bParam1)
				{
					func_1594(439465264);
				}
				else
				{
					func_1595(439465264);
				}
			}
			break;
		case 1822001510:
			func_1595(-1612662716);
			func_1594(1822001510);
			break;
		case -1612662716:
			func_1595(1822001510);
			func_1594(-1612662716);
			break;
		case 1306158345:
			func_1595(1952610440);
			func_1595(-223469678);
			func_1595(-404698347);
			func_1595(1517904467);
			func_1594(1306158345);
			break;
		case 1952610440:
			func_1595(1306158345);
			func_1595(-223469678);
			func_1595(-404698347);
			func_1595(1517904467);
			func_1594(1952610440);
			break;
		case -223469678:
			func_1595(1306158345);
			func_1595(1952610440);
			func_1595(-404698347);
			func_1595(1517904467);
			func_1594(-223469678);
			break;
		case -404698347:
			func_1595(1306158345);
			func_1595(1952610440);
			func_1595(-223469678);
			func_1595(1517904467);
			func_1594(-404698347);
			break;
		case 1517904467:
			func_1595(1306158345);
			func_1595(1952610440);
			func_1595(-223469678);
			func_1595(-404698347);
			func_1594(1517904467);
			break;
		case 1376646519:
			func_1595(931649776);
			func_1595(-434590080);
			func_1595(1743048395);
			func_1595(449774763);
			func_1594(1376646519);
			break;
		case 931649776:
			func_1595(1376646519);
			func_1595(-434590080);
			func_1595(1743048395);
			func_1595(449774763);
			func_1594(931649776);
			break;
		case -434590080:
			func_1595(1376646519);
			func_1595(931649776);
			func_1595(1743048395);
			func_1595(449774763);
			func_1594(-434590080);
			break;
		case 1743048395:
			func_1595(1376646519);
			func_1595(931649776);
			func_1595(-434590080);
			func_1595(449774763);
			func_1594(1743048395);
			break;
		case 449774763:
			func_1595(1376646519);
			func_1595(931649776);
			func_1595(-434590080);
			func_1595(1743048395);
			func_1594(449774763);
			break;
		case -1414537028:
			func_1595(38162571);
			func_1595(1350391819);
			func_1595(54073871);
			func_1594(-1414537028);
			break;
		case 38162571:
			func_1595(-1414537028);
			func_1595(1350391819);
			func_1595(54073871);
			func_1594(38162571);
			break;
		case 1350391819:
			func_1595(-1414537028);
			func_1595(38162571);
			func_1595(54073871);
			func_1594(1350391819);
			break;
		case 54073871:
			func_1595(-1414537028);
			func_1595(38162571);
			func_1595(1350391819);
			func_1594(54073871);
			break;
		case 198200492:
			func_1594(198200492);
			func_1595(-1124061431);
			func_1595(52706132);
			func_1595(-259123672);
			break;
		case -1124061431:
			func_1595(198200492);
			func_1594(-1124061431);
			func_1595(52706132);
			func_1595(-259123672);
			break;
		case 52706132:
			func_1595(198200492);
			func_1595(-1124061431);
			func_1594(52706132);
			func_1595(-259123672);
			break;
		case -259123672:
			func_1595(198200492);
			func_1595(-1124061431);
			func_1595(52706132);
			func_1594(-259123672);
			break;
		case -919512195:
			func_1594(-919512195);
			func_1595(-1925798111);
			func_1595(420709909);
			func_1595(1703426636);
			break;
		case -1925798111:
			func_1594(-1925798111);
			func_1595(-919512195);
			func_1595(420709909);
			func_1595(1703426636);
			break;
		case 420709909:
			func_1594(420709909);
			func_1595(-919512195);
			func_1595(-1925798111);
			func_1595(1703426636);
			break;
		case 1703426636:
			func_1594(1703426636);
			func_1595(-919512195);
			func_1595(-1925798111);
			func_1595(420709909);
			break;
		case -1223121209:
			func_1594(-1223121209);
			func_1595(630808005);
			break;
		case 630808005:
			func_1594(630808005);
			func_1595(-1223121209);
			break;
		case 1453909576:
			func_1594(1453909576);
			func_1595(1643531967);
			break;
		case 1643531967:
			func_1594(1643531967);
			func_1595(1453909576);
			break;
		case 0:
			func_1594(0);
			func_1595(473295046);
			func_1595(-1738165526);
			break;
		case 473295046:
			func_1594(473295046);
			func_1595(0);
			func_1595(-1738165526);
			break;
		case -1738165526:
			func_1594(-1738165526);
			func_1595(0);
			func_1595(473295046);
			break;
		case 932909855:
			func_1594(932909855);
			func_1595(2051822093);
			break;
		case 2051822093:
			func_1594(2051822093);
			func_1595(932909855);
			break;
		case 405586984:
			func_1594(405586984);
			func_1595(1509509592);
			func_1595(-959357075);
			func_1595(-1311865656);
			break;
		case 1509509592:
			func_1594(1509509592);
			func_1595(405586984);
			func_1595(-959357075);
			func_1595(-1311865656);
			break;
		case -959357075:
			func_1594(-959357075);
			func_1595(1509509592);
			func_1595(405586984);
			func_1595(-1311865656);
			break;
		case -1311865656:
			func_1594(-1311865656);
			func_1595(1509509592);
			func_1595(-959357075);
			func_1595(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1594(-524145696);
			}
			else
			{
				func_1595(-524145696);
			}
			func_1595(1626481264);
			func_1595(282809459);
			break;
		case 282809459:
			func_1594(282809459);
			func_1595(1626481264);
			func_1595(-524145696);
			break;
		case 1626481264:
			func_1594(1626481264);
			func_1595(-524145696);
			func_1595(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1594(885203519);
			}
			else
			{
				func_1595(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1594(-1080627546);
			}
			else
			{
				func_1595(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_484(iParam0))
				{
					func_1594(iParam0);
				}
			}
			else if (func_484(iParam0))
			{
				func_1595(iParam0);
			}
			break;
	}
}

void func_1107(int iParam0)
{
	if (!func_1598(iParam0))
	{
		func_1600(func_1599(iParam0));
	}
}

int func_1108()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1598(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1109(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1110(iVar9);
	iVar2 = func_1110(iVar10);
	iVar3 = func_1110(iVar11);
	iVar5 = func_1111(iVar9);
	iVar6 = func_1111(iVar10);
	iVar7 = func_1111(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1110(iVar12);
		iVar8 = func_1111(iVar12);
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

int func_1110(int iParam0)
{
	if (func_347(iParam0, 1, 0))
	{
		iVar0 = func_578(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1111(int iParam0)
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

int func_1112(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1113(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1114(int iParam0, int iParam1)
{
	if (!func_1219(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1115(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1114(iParam1, 5) || iParam0 == func_1114(iParam1, 6)) || iParam0 == func_1114(iParam1, 7)) || iParam0 == func_1114(iParam1, 8)) || iParam0 == func_1114(iParam1, 9))
	{
		func_1105(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_590(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_592(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1116(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1114(iParam1, 5) || iParam0 == func_1114(iParam1, 6)) || iParam0 == func_1114(iParam1, 7)) || iParam0 == func_1114(iParam1, 8)) || iParam0 == func_1114(iParam1, 9))
	{
		if (func_1105(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_590(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_592(51, 0, 0, iVar0, func_1063(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_590(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_592(51, 0, 0, iVar0, func_1063(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1117()
{
	if (func_191((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1118(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1119(int iParam0)
{
	if (!func_1601(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1120(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1121(int iParam0, int iParam1, var uParam2)
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

bool func_1122(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1602();
	if (iParam2 == 39)
	{
		Var0 = { func_685(iParam0, 1, 0) };
		iParam2 = func_673(func_686(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_594(iParam0, 866047851) && func_1588(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1124(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1603(func_1192(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1604(iParam2);
	func_1605(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1173(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1173(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1179(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1606(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1607(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1607(&(Global_1946804->f_1378), 1, 0);
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
				func_1356(func_1192(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1123(bool bParam0, bool bParam1, bool bParam2)
{
	func_1608(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1124(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1125()
{
	func_1609(&(Global_1946804->f_2776));
	func_1610(32768);
	func_1356(1108822547, 8, 6);
}

int func_1126(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_673(iParam0, 1);
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

void func_1127(int iParam0)
{
	if (func_1611(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1612(Var0);
}

void func_1128(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1612(Var0);
}

bool func_1129(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_989(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1130(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1131(int iParam0)
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

float func_1132()
{
	if (func_1613())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1614(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1614(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1615();
	fVar2 = func_1616();
	fVar3 = func_1617();
	fVar4 = func_1618();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1619()));
	fVar7 = (func_1614(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1620(3, round((to_float(iVar8) * fVar10)), 0);
	func_1621(3, fVar9, fVar9 > 100f);
	return func_1622(fVar7, -100f, 100f);
}

float func_1133()
{
	if (func_1613())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1614(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1614(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1615();
	fVar2 = func_1616();
	fVar3 = func_1617();
	fVar4 = func_1618();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1619()));
	fVar7 = (func_1614(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1620(2, round((to_float(iVar8) * fVar10)), 0);
	func_1621(2, fVar9, fVar9 > 100f);
	return func_1622(fVar7, -100f, 100f);
}

float func_1134()
{
	if (func_1613())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1614(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1623())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1624())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1614(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1615();
	fVar2 = func_1616();
	fVar3 = func_1617();
	fVar4 = func_1618();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1619()));
	fVar7 = (func_1614(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1620(1, round((to_float(iVar8) * fVar10)), 0);
	func_1621(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1614(0);
	}
	return func_1622(fVar7, -100f, 100f);
}

bool func_1135(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1136(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1137(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_574(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1056(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_602(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_989(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1138(int iParam0, bool bParam1)
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
				return func_1625();
			}
			break;
	}
	return 0;
}

int func_1139(int iParam0)
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

bool func_1140(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1141(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1140(iParam0))
	{
		return;
	}
	if (func_1626(iParam0))
	{
		return;
	}
	if (!func_1627(iParam0))
	{
		func_1628(iParam0, 1, 0);
	}
	iVar0 = func_1629(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1630(iParam0, 512))
		{
			func_684(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_214() && !bParam1) && !func_197(0, 0, 1))
	{
		func_713(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1631(iParam0, 6);
	if (bParam2)
	{
		if (!func_197(0, 0, 1))
		{
			func_367(1, 4);
		}
	}
}

bool func_1142(int iParam0, bool bParam1)
{
	return func_1138(iParam0, 0) < func_1632(iParam0, bParam1);
}

bool func_1143(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_598(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1144(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_673(iParam0, 1)] != &Global_1946804->f_57[func_673(iParam0, 1)];
}

void func_1145(int iParam0, int iParam1)
{
	if (func_594(iParam1, 130796156))
	{
		func_1633(iParam1, 0);
	}
	else if (func_594(iParam1, 930141731))
	{
		func_1633(iParam1, 1);
		func_1634(iParam0);
	}
}

void func_1146(var uParam0, int iParam1)
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

int func_1147(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1635(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1636(uParam2, iParam0, Var1);
	return 1;
}

int func_1148(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1149(int iParam0)
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

int func_1150(int iParam0)
{
	if (!func_1637(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1151()
{
	return !&Global_1911774;
}

void func_1152(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1153(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1154(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1155(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1156(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1638(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1157(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1638(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1158(bool bParam0)
{
	if (bParam0)
	{
		func_318(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1159();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1639(2032023096);
		func_321(-615217896);
		func_669(655868243, 1, 1, -142743235, 1);
		func_1641(146323340, func_1640());
		Var0 = { func_1408() };
		if (func_1642(&Var0) == -1387633835)
		{
			func_1643(&Var0);
			func_1644(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1645(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1401(iVar6) == 2010625508)
			{
				func_1646(iVar6, iVar7);
				func_1647(iVar6, iVar8);
				func_1648(iVar6, iVar9);
				func_1649(iVar6, 0);
				if (func_1650(iVar6))
				{
					func_1651(iVar6);
				}
				iVar10 = func_1652(iVar8);
				func_1653(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1159()
{
	if (!func_1654(-1898635967, func_1640(), 1))
	{
		return 0;
	}
	if (func_338())
	{
		if (!func_1654(146323340, func_1640(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1160()
{
	func_332(34411519);
	func_332(834124286);
	func_332(-570967010);
}

void func_1161(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_318(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_669(-1080874779, 3, 1, -142743235, 1);
		func_669(-223790555, 3, 1, -142743235, 1);
		func_669(1566032147, 3, 1, -142743235, 1);
		func_669(891311852, 5, 1, -142743235, 1);
		func_669(-1353737667, 5, 1, -142743235, 1);
		func_669(-330313895, 5, 1, -142743235, 1);
		func_669(-2051332199, 5, 1, -142743235, 1);
		func_669(1237770824, 5, 1, -142743235, 1);
		func_669(-1795542128, 3, 1, -142743235, 1);
		func_669(-1757588258, 3, 1, -142743235, 1);
		func_669(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1645(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1401(iVar0) == 153881023)
			{
				func_1646(iVar0, iVar1);
				func_1647(iVar0, iVar2);
				func_1648(iVar0, iVar3);
				func_1649(iVar0, 0);
				if (func_1650(iVar0))
				{
					func_1651(iVar0);
				}
				iVar4 = func_1652(iVar2);
				func_1653(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1159();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1162(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1655(iParam0);
	if (bParam3)
	{
		func_712(iParam0, sParam1, iParam2);
	}
}

bool func_1163(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1164(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1165()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1129("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1130(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1080(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1131(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1131(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1166(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1656(Param1, iParam5, &Var5, 0))
	{
		func_1082(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1137(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1657(Var19, 1);
}

bool func_1167(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1546(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1547(&Var0, func_1187(0));
	}
	if (!func_1548(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1130(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1082(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1131(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1168(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_574(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_685(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1658(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1081(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1082(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1169(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_594(iParam0, 606799272))
		{
			func_1659(iParam0, iParam1);
		}
		if (func_594(iParam0, -1112814642) && func_594(iParam0, -1697809989))
		{
			func_622(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1170(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1660(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_598(iParam0) != -999503751)
		{
			func_1661(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_598(iParam0) != -999503751)
	{
		func_1661(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1662(iParam0, 1);
	return 1;
}

void func_1171()
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

void func_1172(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1663(0);
	}
	if (bParam0)
	{
		func_1184(8);
		func_1184(512);
	}
	else
	{
		func_1184(8);
		func_1184(16);
	}
}

void func_1173(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1174(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_675();
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

int func_1175(int iParam0)
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

void func_1176(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1664(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1192(iVar0, 1);
			if (func_1353(iVar0, iParam1))
			{
				vVar4 = { func_677(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1352(iVar7, 4))
				{
					func_1356(iVar7, 4, 6);
				}
			}
			else
			{
				func_1355(iVar7, 4, 6);
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

bool func_1177(int iParam0)
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
	func_1665(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1178(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1179(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_598(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1353(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1605(iVar1, iVar3);
		}
	}
	if (func_1144(-1586649372) && func_1353(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1605(iVar1, iVar3);
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
						func_1605(iVar1, iVar3);
					}
				}
			}
			func_1666(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1666(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1605(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1666(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1605(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1605(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1666(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1666(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1605(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1666(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1605(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1605(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_598(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1605(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1590(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_598(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1605(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_594(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1605(iVar1, iVar3);
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
						func_1605(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1590(&(Global_1946804->f_1497.f_1[iVar1])) || func_594(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1605(iVar1, iVar3);
					}
				}
			}
			switch (func_598(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_598(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1605(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_598(&(uParam0->f_1[iVar1])) || func_594(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1605(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1180(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1181(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1135(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1135(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1182(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1135(iParam0, 65536) && !func_1135(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1135(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1135(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1183()
{
	return Global_1905944->f_5694;
}

void func_1184(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1185(struct<4> Param0)
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
			if (func_1667(Param0))
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
			func_1668(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1184(8);
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
			if (func_1667(Param0))
			{
				return;
			}
			func_1668(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1184(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1128(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1186(bool bParam0)
{
	return func_1081(1328661203, func_1669(), -1591664384, bParam0);
}

struct<4> func_1187(bool bParam0)
{
	iVar0 = func_989(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1081(923904168, func_1186(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1081(923904168, func_1186(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1081(923904168, func_1186(bParam0), -740156546, 0);
}

bool func_1188(int iParam0, bool bParam1)
{
	if (func_598(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_596(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1189(bool bParam0)
{
	iVar0 = func_989(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1081(271701509, func_1186(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1081(271701509, func_1186(bParam0), 12999093, 0);
}

bool func_1190(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_598(iParam0);
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

bool func_1191(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_989(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1192(int iParam0, int iParam1)
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

int func_1193(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1194(int iParam0, int iParam1)
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

void func_1195(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1196(int iParam0, int iParam1)
{
	iVar0 = func_693(*iParam0);
	iVar1 = func_692(*iParam0);
	if (iParam1 < 1 || iParam1 > func_698(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1197(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1198(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1199(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1200(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1201(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1202(int iParam0)
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

bool func_1203(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1050(iParam0))
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

int func_1204(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_574(iParam0, 0))
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

int func_1205(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1543(&iParam0);
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	if (!func_602(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1054(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1545(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_989(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1206(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_594(iParam0, -5284486))
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
		if (func_1670(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_655(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_658(iVar62, iVar61);
					if (func_574(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1206(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1206(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1670(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1207(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1671(1);
}

void func_1208(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1672(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_324(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1672(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_324(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1209()
{
	return Global_40.f_4283.f_325;
}

bool func_1210(int iParam0)
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

bool func_1211(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1212(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1213(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1214(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1215(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1216(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_395();
	bVar1 = false;
	if (bVar0 && !func_1673(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1673(37)) && !func_1673(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1673(43)) && !func_1673(44))
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
		if (func_1402(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1402(1) == 1)
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

int func_1217()
{
	return Global_40.f_1095.f_3054;
}

bool func_1218(int iParam0)
{
	iParam0 = func_266(iParam0);
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

bool func_1219(int iParam0, var uParam1)
{
	if (!func_1674(iParam0))
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

int func_1220()
{
	if (func_395())
	{
		if (!func_1673(3))
		{
			return func_1675(43);
		}
		if (func_1673(38) && !func_1673(43))
		{
			return func_1676(8);
		}
	}
	return 0;
}

bool func_1221(int iParam0)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1677(iParam0));
}

Vector3 func_1222(int iParam0, int iParam1)
{
	func_1219(15, &Var0);
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

int func_1223(int iParam0, int iParam1)
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
	iVar0 = func_1678(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1219(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1679(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1224(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1680(iParam0);
	if (func_484(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1225(int iParam0)
{
	if (!func_1219(15, &Var0))
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

bool func_1226(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1681(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1682(5))
	{
		if (func_1683(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1395(vParam0);
	if (bParam6)
	{
		iVar1 = func_372(vParam0, 1);
		if (func_116(iVar1) || func_1684(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1685(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1686())
	{
		if (func_1687(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1688(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_372(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1689(iParam3, iParam4))
	{
		return false;
	}
	if (func_1690(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1691(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_395())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1692(vParam0, bParam10) || func_1693(vParam0, bParam10))
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

int func_1227(vector3 vParam0)
{
	iVar0 = func_1694(vParam0, 0f, 0f, 0, 2);
	return func_1694(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1228(int iParam0)
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

char* func_1229(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
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
	iVar0 = get_entity_model(iParam0);
	return func_1364(iVar0);
}

char* func_1230(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1695(iVar0);
}

char* func_1231(int iParam0)
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

void func_1232(char[4] cParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1468(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 57774;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1233(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1468(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1234(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	iVar8 = 1;
	if (!is_ped_injured(iParam0))
	{
		if (_0x608bc6a6aacd5036(&Var4, iParam0, iParam1, 0))
		{
			if (does_entity_exist(Var4.f_3))
			{
				iVar3 = func_1696(Var4.f_3);
				if (func_574(iVar3, 0))
				{
					if (iParam5 == 0)
					{
						_0xed00d72f81cf7278(Var4.f_3, 0, 1);
						vVar0.x = fParam2;
						vVar0.f_1 = fParam3;
						vVar0.f_2 = fParam4;
						if (func_396(vVar0))
						{
							vVar0 = { get_offset_from_entity_in_world_coords(iParam0, 0f, -1f, 0f) };
							func_1336(&vVar0, 50, 10, 0);
						}
						set_entity_coords(Var4.f_3, vVar0, false, false, true, true);
					}
					func_1697(&iParam0, iVar3, &iVar8, 1, -142743235);
				}
				else if (is_entity_a_ped(Var4.f_3))
				{
					iVar9 = get_ped_index_from_entity_index(Var4.f_3);
					if (is_ped_human(iVar9))
					{
						_0xed00d72f81cf7278(Var4.f_3, 0, 1);
						vVar0.x = fParam2;
						vVar0.f_1 = fParam3;
						vVar0.f_2 = fParam4;
						if (func_396(vVar0))
						{
							vVar0 = { get_offset_from_entity_in_world_coords(iParam0, 0f, -1f, 0f) };
							func_1336(&vVar0, 50, 10, 0);
						}
						set_entity_coords(Var4.f_3, vVar0, false, _is_ped_hogtied(iVar9), true, true);
					}
				}
			}
		}
	}
}

bool func_1235(int iParam0)
{
	return (Global_40.f_9.f_21 && iParam0) != 0;
}

void func_1236(int iParam0)
{
	Global_40.f_9.f_21 = (Global_40.f_9.f_21 - (Global_40.f_9.f_21 && iParam0));
}

void func_1237(char[4] cParam0)
{
	func_1698(&(cParam0->f_7375));
}

void func_1238(char[4] cParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
		if (!is_entity_dead(cParam0->f_5408))
		{
			func_151(cParam0, cParam0->f_5408, 0, 0, 0, 0, 0);
			func_1699(cParam0, cParam0->f_5408, 8);
			if (func_128(cParam0, 2) || func_105())
			{
				if (!has_ped_got_weapon(cParam0->f_5408, 36703333, 0, false))
				{
					func_1308(cParam0->f_5408, 36703333, 50, 5, 2, 1056964608, 1065353216, 0);
				}
				else
				{
					set_current_ped_weapon(cParam0->f_5408, 36703333, true, 2, false, false);
				}
				if (has_ped_got_weapon(cParam0->f_5408, 13903789, 0, false))
				{
					remove_weapon_from_ped(cParam0->f_5408, 13903789, true, -142743235);
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
		if (!is_entity_dead(cParam0->f_5408))
		{
			func_151(cParam0, cParam0->f_5408, 0, 0, 0, 0, 0);
		}
		if (!is_entity_dead(cParam0->f_5411))
		{
			func_151(cParam0, cParam0->f_5411, "Horse_01", 0, 0, 0, 0);
		}
		if (!is_entity_dead(iLocal_94))
		{
			func_151(cParam0, iLocal_94, "Horse_01^1", 0, 0, 0, 0);
		}
		if (!does_entity_exist(&(iLocal_149[0])))
		{
			if (has_model_loaded(1491155834))
			{
				func_1700(0);
			}
		}
		if (!is_entity_dead(&(iLocal_149[0])))
		{
			func_422(cParam0, &(iLocal_149[0]), "s_inv_pocketwatch03X", 0, 0, 0, 0);
		}
		if (!is_entity_dead(iLocal_144))
		{
			func_422(cParam0, iLocal_144, "STAGECOACH004X", 0, 0, 0, 0);
		}
		func_151(cParam0, &(iLocal_126[0]), "A_C_HorseDraft_01", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_126[1]), "A_C_HorseDraft_01^2", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_126[2]), "A_C_HorseDraft_01^1", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_126[3]), "A_C_HorseDraft_01^3", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_95[0]), "CS_BIVCOACHDRIVER", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_95[1]), "A_M_M_UNICOACHGUARDS_01^3", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_98[0]), "A_M_M_UNICOACHGUARDS_01^1", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_98[1]), "A_M_M_UNICOACHGUARDS_01", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_98[2]), "A_M_M_UNICOACHGUARDS_01^4", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_98[3]), "A_M_M_UNICOACHGUARDS_01^2", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_131[0]), "Horse_01^5", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_131[1]), "Horse_01^4", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_131[2]), "Horse_01^3", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_131[3]), "Horse_01^2", 0, 0, 0, 0);
	}
	else if (iParam1 == 2)
	{
		func_1237(cParam0);
		func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
		if (!is_entity_dead(cParam0->f_5408))
		{
			func_151(cParam0, cParam0->f_5408, 0, 0, 0, 0, 0);
		}
		func_151(cParam0, &(iLocal_126[0]), "A_C_HorseDraft_01", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_126[1]), "A_C_HorseDraft_01^2", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_126[2]), "A_C_HorseDraft_01^1", 0, 0, 0, 0);
		func_151(cParam0, &(iLocal_126[3]), "A_C_HorseDraft_01^3", 0, 0, 0, 0);
		if (!is_entity_dead(iLocal_144))
		{
			set_vehicle_doors_locked(iLocal_144, 1);
			func_422(cParam0, iLocal_144, "STAGECOACH004X", 0, 0, 0, 0);
		}
		if (!does_entity_exist(&(iLocal_149[3])))
		{
			func_1700(3);
		}
		if (!is_entity_dead(&(iLocal_149[3])))
		{
			func_422(cParam0, &(iLocal_149[3]), "S_COACH2CRASHEDUTOPIA2", 0, 0, 0, 0);
		}
	}
	else if (iParam1 == 3)
	{
		func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
		if (!is_entity_dead(cParam0->f_5408))
		{
			func_151(cParam0, cParam0->f_5408, 0, 0, 0, 0, 0);
		}
		func_151(cParam0, cParam0->f_5411, "Horse_01", 0, 0, 0, 0);
		func_151(cParam0, iLocal_94, "Horse_01^1", 0, 0, 0, 0);
		if (!is_entity_dead(&(iLocal_149[3])))
		{
			func_422(cParam0, &(iLocal_149[3]), "S_COACH2CRASHEDUTOPIA2", 1, 0, 0, 0);
		}
		if (!does_entity_exist(&(iLocal_149[5])))
		{
			func_1700(5);
		}
		if (!is_entity_dead(&(iLocal_149[5])))
		{
			func_422(cParam0, &(iLocal_149[5]), "P_STRONGBOX01X", 0, 0, 0, 0);
		}
		if (!does_entity_exist(&(iLocal_149[6])))
		{
			func_1700(6);
		}
		if (!is_entity_dead(&(iLocal_149[6])))
		{
			func_422(cParam0, &(iLocal_149[6]), "P_CS_BILLSTACK01X", 0, 0, 0, 0);
		}
		if (!does_entity_exist(&(iLocal_149[7])))
		{
			func_1700(7);
		}
		if (!is_entity_dead(&(iLocal_149[7])))
		{
			func_422(cParam0, &(iLocal_149[7]), "P_CS_BILLSTACK01X^1", 0, 0, 0, 0);
		}
		if (!does_entity_exist(&(iLocal_149[8])))
		{
			func_1700(8);
		}
		if (!is_entity_dead(&(iLocal_149[8])))
		{
			func_422(cParam0, &(iLocal_149[8]), "P_CS_BILLSTACK01X^2", 0, 0, 0, 0);
		}
		if (!does_entity_exist(&(iLocal_149[9])))
		{
			func_1700(9);
		}
		if (!is_entity_dead(&(iLocal_149[9])))
		{
			func_422(cParam0, &(iLocal_149[9]), "P_CS_BILLSTACK01X^3", 0, 0, 0, 0);
		}
		if (!does_entity_exist(&(iLocal_149[10])))
		{
			func_1700(10);
		}
		if (!is_entity_dead(&(iLocal_149[10])))
		{
			func_422(cParam0, &(iLocal_149[10]), "P_CS_BILLSTACK01X^4", 0, 0, 0, 0);
		}
		func_1701(cParam0, "MultiStart");
	}
}

int func_1239(char[4] cParam0)
{
	return cParam0->f_598;
}

void func_1240(char[4] cParam0)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (is_entity_dead(cParam0->f_5411) || is_ped_fatally_injured(cParam0->f_5411))
		{
			func_1485(cParam0, func_1702(), 1, 0);
		}
	}
	if (is_entity_dead(cParam0->f_5411))
	{
		func_1485(cParam0, func_1702(), 1, 0);
	}
	if (iVar485 == 7)
	{
		if (is_entity_in_volume(iLocal_144, Local_16.f_40, true, 0))
		{
			func_1703(cParam0, "UTP2_FAIL_CLIFF", "", 1, 0);
		}
		else
		{
			func_1703(cParam0, "UTP2_FAIL_COACH", "", 1, 0);
		}
	}
	switch (func_33(cParam0))
	{
		case 1:
		case 3:
		case 4:
			if (!is_entity_dead(iLocal_144))
			{
				if (is_vehicle_stuck_timer_up(iLocal_144, 3, 60000))
				{
					func_1703(cParam0, "UTP2_FAIL_COACH", "", 1, 0);
				}
				else if (((!is_vehicle_driveable(iLocal_144, false, false) && iVar485 != 5) && iVar485 != 6) && iVar485 != 4)
				{
					if (iVar485 == 7)
					{
						func_1703(cParam0, "UTP2_FAIL_CLIFF", "", 1, 0);
					}
					else
					{
						func_1703(cParam0, "UTP2_FAIL_COACH", "", 1, 0);
					}
				}
				else if (func_1704() >= 2)
				{
					func_1703(cParam0, "UTP2_FAIL_COACH", "", 1, 0);
				}
			}
			else
			{
				func_1703(cParam0, "UTP2_FAIL_COACH", "", 1, 0);
			}
			break;
	}
}

bool func_1241(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 0:
			if (!&iLocal_273[0])
			{
				if (func_1438(cParam0))
				{
					iLocal_273[0] = 1;
				}
			}
			else if (!&iLocal_273[1])
			{
				if (func_1445(cParam0))
				{
					iLocal_273[1] = 1;
				}
			}
			else
			{
				return true;
			}
			break;
		case 1:
		case 2:
		case 3:
		case 4:
			break;
		case 5:
			if (!&iLocal_273[2])
			{
				if (func_1439(cParam0))
				{
					iLocal_273[2] = 1;
				}
			}
			else if (!&iLocal_273[3])
			{
				if (func_1446(cParam0))
				{
					iLocal_273[3] = 1;
				}
			}
			else
			{
				return true;
			}
			break;
		case 6:
		case 7:
		case 25:
			break;
	}
	return false;
}

bool func_1242(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 0:
			if (has_model_loaded(-550289621))
			{
				if (has_model_loaded(482936557))
				{
					if (!&iLocal_492[0] == 2)
					{
						func_1447(cParam0, 0);
					}
					else if (!&iLocal_492[1] == 2)
					{
						func_1448(cParam0, 0);
					}
					else if (!&iLocal_492[2] == 2)
					{
						func_1449(cParam0, 0);
					}
					else
					{
						return true;
					}
				}
			}
			break;
		case 1:
			if (!&iLocal_163[36])
			{
				if (!&iLocal_492[0] == 2)
				{
					func_1447(cParam0, 0);
				}
				else if (!&iLocal_492[1] == 2)
				{
					func_1448(cParam0, 0);
				}
				else if (!&iLocal_492[2] == 2)
				{
					func_1449(cParam0, 0);
				}
				else
				{
					return true;
				}
			}
			else if (has_model_loaded(-1273613561))
			{
				if (!&iLocal_492[3] == 2)
				{
					func_1450(cParam0, 0);
				}
				else if (!&iLocal_492[4] == 2)
				{
					func_1451(cParam0, 0);
				}
				else if (!&iLocal_492[5] == 2)
				{
					func_1452(cParam0, 0);
				}
				else
				{
					return true;
				}
			}
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			if (has_model_loaded(-1273613561))
			{
				if (!&iLocal_492[3] == 2)
				{
					func_1450(cParam0, 0);
				}
				else if (!&iLocal_492[4] == 2)
				{
					func_1451(cParam0, 0);
				}
				else if (!&iLocal_492[5] == 2)
				{
					func_1452(cParam0, 0);
				}
				else
				{
					return true;
				}
			}
			break;
		default:
			break;
	}
	return false;
}

void func_1243(bool bParam0, bool bParam1)
{
	if (!is_entity_dead(iLocal_144))
	{
		set_entity_visible(iLocal_144, bParam0);
		set_entity_invincible(iLocal_144, bParam1);
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(iLocal_95[iVar0])))
		{
			set_entity_visible(&(iLocal_95[iVar0]), bParam0);
			set_entity_invincible(&(iLocal_95[iVar0]), bParam1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_entity_dead(&(iLocal_98[iVar0])))
		{
			set_entity_visible(&(iLocal_98[iVar0]), bParam0);
			set_entity_invincible(&(iLocal_98[iVar0]), bParam1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_entity_dead(&(iLocal_131[iVar0])))
		{
			set_entity_visible(&(iLocal_131[iVar0]), bParam0);
			set_entity_invincible(&(iLocal_131[iVar0]), bParam1);
		}
		iVar0++;
	}
}

int func_1244()
{
	if (!&iLocal_163[34])
	{
		if (func_1320(Global_35, func_388(10, 0), (2f * 75f), 1, 1))
		{
			iLocal_163[34] = 1;
			func_1705();
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_1245(char[4] cParam0)
{
	if (!func_1706(cParam0, cParam0->f_5411, 1125515264, 0, 1, 1, -1925605092, 1084227584, 1103626240))
	{
		if (func_1707(cParam0, 6, "utopia2_ride_vista", 100f, 200f, 0, 0, 1, 1117126656, 422991367))
		{
			if (!&iLocal_247[1])
			{
				iLocal_247[1] = 1;
			}
		}
		else if (&iLocal_247[1])
		{
			iLocal_247[1] = 0;
		}
	}
	switch (func_1315(cParam0))
	{
		case 0:
			func_1708(7);
			func_1259(cParam0, "UTP2_OBJ01b", -1082130432, 0, 0, -1, -1, 0);
			func_1709(cParam0, "UTP2_OBJ01", 0);
			func_135(cParam0, 1);
			func_220(&uLocal_349);
			break;
		case 1:
			if (!is_ped_on_mount(Global_35))
			{
				if (func_888(&uLocal_349) >= 1f)
				{
					if (!&iLocal_247[4])
					{
						func_1710(cParam0, "UTP2_OBJ01b", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
						iLocal_247[4] = 1;
					}
				}
			}
			else
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_517(6, 1);
				func_1711(6);
				func_59(7);
				func_1710(cParam0, "UTP2_OBJ01", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_470(&uLocal_349);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!func_164())
			{
				if (!func_26(&uLocal_349))
				{
					func_220(&uLocal_349);
				}
				else if (func_888(&uLocal_349) > 3f && func_874(Global_35, cParam0->f_5408, 15f, 1))
				{
					if (is_ped_on_mount(Global_35))
					{
						if (func_1709(cParam0, "UTP2_BANT01", 0))
						{
							func_135(cParam0, 3);
						}
					}
				}
			}
			break;
		case 3:
			if (is_entity_in_volume(cParam0->f_5408, Local_16.f_7, true, 0))
			{
				if (func_164())
				{
					func_47(1, 0);
				}
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (!func_164())
			{
				func_1709(cParam0, "UTP2_SPOT", 0);
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1246(char[4] cParam0)
{
	if (iVar486 > 0 && iVar486 < 11)
	{
	}
	switch (iVar486)
	{
		case 0:
			if (!func_8(cParam0, 8))
			{
			}
			func_220(&uLocal_352);
			func_901(&uLocal_489, 1);
			break;
		case 1:
			if (&iLocal_163[12])
			{
				trigger_music_event("UTP2_RIDGE");
				func_220(&uLocal_352);
				func_901(&uLocal_489, 11);
			}
			break;
		case 11:
			break;
	}
}

void func_1247(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		switch (iVar452)
		{
			case 0:
				func_220(&uLocal_358);
				func_897(&uLocal_455, 3);
				break;
			case 3:
				if (is_ped_on_mount(Global_35) && _is_ped_getting_into_a_mount_seat(Global_35, true))
				{
					iLocal_163[1] = 0;
					func_220(&uLocal_358);
					func_897(&uLocal_455, 4);
				}
				break;
			case 4:
				if (!is_entity_dead(cParam0->f_5411))
				{
					set_blocking_of_non_temporary_events(cParam0->f_5411, false);
					clear_ped_tasks(cParam0->f_5411, 1, 0);
				}
				func_220(&uLocal_358);
				func_897(&uLocal_455, 5);
				break;
			case 5:
				if (!&iLocal_163[4])
				{
					if (func_1320(Global_35, func_388(10, 0), 65f, 1, 1))
					{
						func_1712(Global_35, func_388(10, 0), 0, 1112014848, 1106247680, 3f, 1f, 1, 1, 1, 0);
					}
				}
				if (!&iLocal_163[4])
				{
					if (is_ped_on_mount(Global_35) && !_0x660639bc60157048(Global_35, cParam0->f_5411))
					{
						if (is_entity_in_volume(Global_35, Local_16.f_10, true, 0))
						{
							set_player_control(get_player_index(), false, 256, false);
							set_blocking_of_non_temporary_events(cParam0->f_5411, true);
							set_ped_reset_flag(cParam0->f_5411, 105, true);
							task_follow_nav_mesh_to_coord(cParam0->f_5411, func_388(1, 2), 1.5f, -1, 0.25f, 0, -14f);
							set_gameplay_coord_hint(_get_object_offset_from_coords(func_388(1, 2), func_1321(1, 2), 0f, 190f, 0f), 10000, 4000, 4000, 0);
							iLocal_163[68] = 1;
							iLocal_163[4] = 1;
						}
					}
				}
				else
				{
					set_ped_reset_flag(cParam0->f_5411, 105, true);
				}
				break;
			case 6:
				break;
		}
	}
}

void func_1248(char[4] cParam0)
{
	if (!is_entity_dead(cParam0->f_5408))
	{
		switch (iVar453)
		{
			case 0:
				func_220(&uLocal_361);
				func_898(&uLocal_456, 1);
				break;
			case 1:
				if (func_888(&uLocal_361) >= 10f)
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 8);
				}
				else if (is_ped_on_mount(cParam0->f_5408) && _is_ped_getting_into_a_mount_seat(cParam0->f_5408, true))
				{
					if (!&iLocal_163[5])
					{
						task_look_at_entity(cParam0->f_5408, Global_35, -1, 0, 51, 0);
						iLocal_163[5] = 1;
					}
					if (is_ped_on_mount(Global_35) || is_entity_in_volume(Global_35, Local_16.f_31, true, 0))
					{
						task_clear_look_at(cParam0->f_5408);
						func_220(&uLocal_361);
						func_898(&uLocal_456, 8);
					}
				}
				break;
			case 8:
				if (!get_ped_config_flag(cParam0->f_5408, 167, true))
				{
					set_ped_config_flag(cParam0->f_5408, 167, true);
				}
				task_follow_waypoint_recording(cParam0->f_5408, "utopia2_ride_vista", 0, 1800, -1, 0, 0, -1);
				func_1250(cParam0, 1, 1, -8f);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 9);
				break;
			case 9:
				if (is_entity_in_volume(cParam0->f_5408, Local_16.f_35, true, 0))
				{
					fLocal_318 = 1f;
				}
				else if (is_entity_in_volume(cParam0->f_5408, Local_16.f_36, true, 0))
				{
					fLocal_318 = 1.6f;
				}
				else if (is_entity_in_volume(cParam0->f_5408, Local_16.f_37, true, 0))
				{
					fLocal_318 = 1.25f;
				}
				else if (is_entity_in_volume(cParam0->f_5408, Local_16.f_38, true, 0))
				{
					fLocal_318 = 1.501f;
				}
				else
				{
					fLocal_318 = 2f;
				}
				if (!&iLocal_163[7])
				{
					if (is_entity_in_volume(cParam0->f_5408, Local_16.f_5, true, 0))
					{
						iLocal_163[7] = 1;
						func_1250(cParam0, 1, 0, -1061158912);
					}
				}
				if (!&iLocal_163[8])
				{
					if (is_entity_in_volume(cParam0->f_5408, Local_16.f_32, true, 0))
					{
						func_1250(cParam0, 1, 1, -1061158912);
						iLocal_163[8] = 1;
					}
				}
				else if (!is_entity_in_volume(cParam0->f_5408, Local_16.f_32, true, 0))
				{
					func_1250(cParam0, 1, 0, -1061158912);
					iLocal_163[8] = 0;
				}
				if (get_script_task_status(cParam0->f_5408, 658540077, true) == 8)
				{
					set_blocking_of_non_temporary_events(cParam0->f_5408, true);
					open_sequence_task(&iLocal_61);
					task_turn_ped_to_face_coord(0, func_388(1, 4), -1);
					close_sequence_task(iLocal_61);
					task_perform_sequence(cParam0->f_5408, iLocal_61);
					clear_sequence_task(&iLocal_61);
					func_220(&uLocal_361);
					func_898(&uLocal_456, 69);
				}
				else
				{
					func_1713(cParam0->f_5408, uVar315, 0, 1045220557, 1, 1077936128, 1106247680, (60f - 10f), 1033476506, 1061158912, 1, 1, 1045220557, 0);
				}
				if (is_entity_in_volume(cParam0->f_5408, Local_16.f_33, true, 0))
				{
					if (!&iLocal_163[11])
					{
						func_1250(cParam0, 1, 0, -1061158912);
						iLocal_163[11] = 1;
					}
				}
				break;
			case 10:
				set_blocking_of_non_temporary_events(cParam0->f_5408, true);
				open_sequence_task(&iLocal_61);
				if (&iLocal_247[3])
				{
				}
				task_stand_still(0, -1);
				close_sequence_task(iLocal_61);
				task_perform_sequence(cParam0->f_5408, iLocal_61);
				clear_sequence_task(&iLocal_61);
				func_1250(cParam0, 0, 0, -1061158912);
				if (&iLocal_260[2])
				{
					iLocal_260[2] = 0;
					if (assisted_movement_is_route_loaded("utopia2_ride_assist"))
					{
					}
				}
				func_220(&uLocal_361);
				func_898(&uLocal_456, 12);
				break;
			case 12:
				if (func_874(Global_35, cParam0->f_5408, 20f, 1))
				{
					iLocal_247[3] = 0;
					func_220(&uLocal_361);
					func_898(&uLocal_456, 8);
				}
				break;
			case 43:
				if (!is_entity_dead(iLocal_94))
				{
					if (_0x2d64376cf437363e(iLocal_94))
					{
						set_blocking_of_non_temporary_events(cParam0->f_5408, true);
						open_sequence_task(&iLocal_61);
						task_mount_animal(0, iLocal_94, 20000, -1, 1073741824, 1, 0, 0);
						task_stand_still(0, -1);
						close_sequence_task(iLocal_61);
						task_perform_sequence(cParam0->f_5408, iLocal_61);
						clear_sequence_task(&iLocal_61);
						func_220(&uLocal_361);
						func_898(&uLocal_456, 44);
					}
					else if (func_888(&uLocal_361) >= 7f)
					{
						func_220(&uLocal_361);
						func_898(&uLocal_456, 8);
					}
				}
				break;
			case 44:
				if (is_ped_on_mount(cParam0->f_5408) && _is_ped_getting_into_a_mount_seat(cParam0->f_5408, true))
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 8);
				}
				break;
			case 69:
				break;
		}
	}
}

void func_1249(char[4] cParam0)
{
}

int func_1250(char[4] cParam0, bool bParam1, bool bParam2, float fParam3)
{
	if (is_entity_dead(Global_35))
	{
		return 0;
	}
	if (is_entity_dead(cParam0->f_5408))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!does_group_exist(iVar583))
		{
			iLocal_589 = create_group(2);
			set_ped_config_flag(cParam0->f_5408, 279, true);
			set_ped_as_group_leader(cParam0->f_5408, iVar583, false);
			set_group_formation(iVar583, 10);
			_0xac22aa6df4d1c1de(get_player_index(), cParam0->f_5408, -1082130432, -1082130432, 4, 2, 0);
			_0x0e9e95fdedcc9d35(player_ped_id(), 0, 0);
		}
		if (bParam2)
		{
			set_group_formation(iVar583, 5);
			add_custom_formation_location(iVar583, 0f, fParam3, 0f, 0);
			_0x9bbeaf8b0c007f1e(cParam0->f_5408, 0);
		}
		else
		{
			set_group_formation(iVar583, 10);
			_0x9bbeaf8b0c007f1e(cParam0->f_5408, 1);
		}
	}
	else if (_0x2009f8ab7a5e9d6d(get_player_index()))
	{
		_0x12e09e278c6c29b7(get_player_index());
		set_ped_reset_flag(Global_35, 210, true);
		if (!does_group_exist(iVar583))
		{
			remove_group(iVar583);
		}
	}
	return 1;
}

void func_1251(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1252(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1468(iVar0))
	{
		return;
	}
	iVar1 = func_1469(iParam3);
	if (!func_1470(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1253(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1254(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

void func_1255(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			if (!is_ped_on_mount(iParam0))
			{
				if (_get_rider_of_mount(iParam1, false) == 0)
				{
					_set_ped_on_mount(iParam0, iParam1, -1, false);
				}
			}
		}
	}
}

int func_1256(int iParam0, bool bParam1)
{
	if (!func_441())
	{
		return 0;
	}
	if (!func_442(iParam0))
	{
		return 0;
	}
	if (func_1714(iParam0))
	{
		iVar0 = 0;
		if (func_598(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_416(&iVar0, 2);
			}
		}
		return func_443(iParam0, iVar0);
	}
	return 0;
}

void func_1257(int iParam0)
{
	Global_40.f_9.f_21 = (Global_40.f_9.f_21 || iParam0);
}

void func_1258(char[4] cParam0)
{
	iVar4 = func_285();
	iVar3 = func_695(iVar4);
	if (iVar3 >= 0 && iVar3 < 6)
	{
		StringCopy(&cVar0, "Bool_Timelapse3", 24);
	}
	else if (iVar3 >= 6 && iVar3 < 17)
	{
		StringCopy(&cVar0, "Bool_Timelapse1", 24);
	}
	else if (iVar3 == 17)
	{
		StringCopy(&cVar0, "Bool_Timelapse2", 24);
	}
	else if (iVar3 > 17 && iVar3 < 24)
	{
		StringCopy(&cVar0, "Bool_Timelapse3", 24);
	}
	else
	{
		StringCopy(&cVar0, "Bool_Timelapse1", 24);
	}
	if (_does_anim_scene_exist(func_1328(cParam0)))
	{
		if (_0x6f1f0b17109309da(func_1328(cParam0), &cVar0))
		{
			set_anim_scene_bool(func_1328(cParam0), &cVar0, true, false);
		}
	}
}

void func_1259(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1493(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != cParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		cParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(cParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_140(cParam0, func_33(cParam0), 33554432);
}

void func_1260(var uParam0, int iParam1, float fParam2)
{
	if (!is_entity_dead(*iParam1))
	{
		if (_get_rider_of_mount(*iParam1, false) == *uParam0)
		{
			set_ped_min_move_blend_ratio(*iParam1, fParam2);
		}
	}
}

void func_1261(char[4] cParam0, int iParam1)
{
	func_1368(&(cParam0->f_7375), iParam1);
	func_1715(&(cParam0->f_10792), iParam1);
}

bool func_1262()
{
	if (func_1716())
	{
	}
	else
	{
		bVar0 = true;
	}
	if (!does_rayfire_map_object_exist(iLocal_58))
	{
		iLocal_58 = get_rayfire_map_object(func_388(9, 3), 5f, "DES_utp2_rvrbed");
	}
	if (!does_rayfire_map_object_exist(iLocal_59))
	{
		iLocal_59 = get_rayfire_map_object(func_388(9, 4), 5f, "DES_utp2_treefall");
	}
	if (does_rayfire_map_object_exist(iLocal_58))
	{
		if (get_state_of_rayfire_map_object(iLocal_58) == -1)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 0)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 1)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 2)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 3)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 4)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 5)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 6)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 7)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 8)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 9)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 10)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 11)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 12)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 13)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 14)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_58) == 15)
		{
		}
		if (get_state_of_rayfire_map_object(iLocal_58) != 5)
		{
			if (!&iLocal_163[41])
			{
				if (get_state_of_rayfire_map_object(iLocal_58) != 4)
				{
					iLocal_163[41] = 1;
					set_state_of_rayfire_map_object(iLocal_58, 4);
				}
			}
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (does_rayfire_map_object_exist(iLocal_59))
	{
		if (get_state_of_rayfire_map_object(iLocal_59) == -1)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 0)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 1)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 2)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 3)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 4)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 5)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 6)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 7)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 8)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 9)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 10)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 11)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 12)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 13)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 14)
		{
		}
		else if (get_state_of_rayfire_map_object(iLocal_59) == 15)
		{
		}
		if (get_state_of_rayfire_map_object(iLocal_59) != 5)
		{
			if (get_state_of_rayfire_map_object(iLocal_59) == 15)
			{
				iLocal_163[39] = 0;
			}
			if (!&iLocal_163[39])
			{
				if (get_state_of_rayfire_map_object(iLocal_59) != 4)
				{
					iLocal_163[39] = 1;
					set_state_of_rayfire_map_object(iLocal_59, 4);
				}
			}
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	return !bVar0;
}

int func_1263()
{
	if (!&iLocal_163[35])
	{
		if (!is_entity_dead(iLocal_144))
		{
			if (is_entity_in_volume(iLocal_144, Local_16.f_11, true, 0))
			{
				iLocal_163[35] = 1;
				func_1717();
				return 1;
			}
		}
		if (!is_entity_dead(Global_35))
		{
			if (is_entity_in_volume(Global_35, Local_16.f_11, true, 0))
			{
				iLocal_163[35] = 1;
				func_1717();
				return 1;
			}
			else if (func_1320(Global_35, func_388(4, 5), 95f, 1, 1))
			{
				iLocal_163[35] = 1;
				func_1717();
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_1264()
{
	if (!&iLocal_163[36])
	{
		if (!is_entity_dead(iLocal_144))
		{
			if (is_entity_in_volume(iLocal_144, Local_16.f_22, true, 0))
			{
				if (is_ped_in_vehicle(Global_35, iLocal_144, false) && !_0x660639bc60157048(Global_35, iLocal_144))
				{
					iLocal_163[36] = 1;
					func_1718();
					set_player_control(player_id(), false, 256, false);
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1265()
{
	if (((((((((((does_entity_exist(&(iLocal_98[0])) && _0x06fa94c835787c64(&(iLocal_98[0]))) && get_ped_source_of_death(&(iLocal_98[0])) == func_1413(Global_35)) && does_entity_exist(&(iLocal_98[1]))) && _0x06fa94c835787c64(&(iLocal_98[1]))) && get_ped_source_of_death(&(iLocal_98[1])) == func_1413(Global_35)) && does_entity_exist(&(iLocal_98[2]))) && _0x06fa94c835787c64(&(iLocal_98[2]))) && get_ped_source_of_death(&(iLocal_98[2])) == func_1413(Global_35)) && does_entity_exist(&(iLocal_98[3]))) && _0x06fa94c835787c64(&(iLocal_98[3]))) && get_ped_source_of_death(&(iLocal_98[3])) == func_1413(Global_35))
	{
		return true;
	}
	return false;
}

void func_1266(char[4] cParam0, int iParam1)
{
	iVar0 = func_724(func_12(cParam0->f_607));
	if (func_725(iVar0))
	{
		func_1719(iVar0, iParam1);
	}
}

void func_1267(int iParam0, int iParam1, float fParam2, float fParam3)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!is_entity_dead(iParam1))
		{
			if (!is_entity_dead(iParam0[iVar0]))
			{
				if (!is_entity_dead(Global_35))
				{
					if (!func_874(iParam0[iVar0], iParam1, fParam2, 1))
					{
						if (!func_874(iParam0[iVar0], Global_35, fParam2, 1))
						{
							if (!func_1720(iParam0[iVar0], fParam3, -1082130432, -1082130432, -1082130432))
							{
								func_983((*iParam0)[iVar0], 0);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1268(char[4] cParam0)
{
	cParam0->f_607 = cParam0->f_607;
	if (&iLocal_163[26])
	{
		vehicle_waypoint_playback_override_speed(iLocal_144, 10f);
	}
	if (!is_entity_dead(iLocal_144))
	{
		switch (iVar485)
		{
			case 0:
				func_220(&uLocal_367);
				func_899(&uLocal_488, 2);
				break;
			case 2:
				func_220(&uLocal_367);
				func_899(&uLocal_488, 3);
				break;
			case 3:
				if (waypoint_recording_get_closest_waypoint("utopia2_follow_coach", get_entity_coords(iLocal_144, true, false), &iVar0))
				{
					if (iVar0 >= 89)
					{
						if (!&iLocal_163[31])
						{
							_task_vehicle_follow_waypoint_recording_2(iLocal_144, "utopia2_follow_crash", 0, 0, 520, -1, -1082130432, 0, 1073741824, 0);
							_0x0794199b25e499e1(iLocal_144, 0);
							_0xcec4ca2cab8fa98c(iLocal_144, true);
							_set_vehicle_jet_engine_on(iLocal_144, true);
							if (!is_entity_dead(get_ped_in_vehicle_seat(iLocal_144, -1)))
							{
								if (get_ped_in_vehicle_seat(iLocal_144, -1) != Global_35)
								{
									set_entity_invincible(get_ped_in_vehicle_seat(iLocal_144, -1), true);
								}
							}
							func_220(&uLocal_367);
							iLocal_163[26] = 1;
							func_899(&uLocal_488, 4);
						}
					}
				}
				break;
			case 4:
				if (func_888(&uLocal_367) >= 0.5f)
				{
					_0xd4f5efb55769d272(iLocal_144, 1);
					func_899(&uLocal_488, 5);
				}
				break;
			case 5:
				if (func_888(&uLocal_367) >= 1f)
				{
					if (!is_entity_dead(get_ped_in_vehicle_seat(iLocal_144, -1)))
					{
					}
					if (!is_entity_dead(get_ped_in_vehicle_seat(iLocal_144, 0)))
					{
						task_leave_any_vehicle(get_ped_in_vehicle_seat(iLocal_144, 0), 0, 4160);
					}
					_task_vehicle_follow_waypoint_recording_2(iLocal_144, "utopia2_follow_crash", 0, 0, 520, -1, -1082130432, 0, 1073741824, 0);
					func_899(&uLocal_488, 6);
				}
				break;
			case 6:
				if (func_888(&uLocal_367) >= 7f)
				{
					func_899(&uLocal_488, 7);
				}
				break;
			case 16:
				func_220(&uLocal_367);
				func_899(&uLocal_488, 17);
				break;
			case 17:
				if (get_entity_speed(iLocal_144) <= 1.75f)
				{
					iLocal_163[27] = 1;
					func_220(&uLocal_367);
					func_899(&uLocal_488, 20);
				}
				else if (func_888(&uLocal_367) >= 20f)
				{
					iLocal_163[27] = 1;
					func_220(&uLocal_367);
					func_899(&uLocal_488, 20);
				}
				else
				{
					iLocal_163[27] = 0;
				}
				break;
			case 20:
				break;
		}
	}
}

void func_1269(char[4] cParam0)
{
	if (!&iLocal_163[26])
	{
		if (func_1315(cParam0) > 0 && func_1315(cParam0) <= 51)
		{
			func_1721(cParam0);
		}
		if (func_1315(cParam0) >= 3)
		{
			if (func_1722(cParam0, iLocal_144, "utopia2_follow_coach", "UTP2_COACH", "UTP2_COACH_FAIL", 125f, 250f, 0, 0, 1, 1117126656, 422991367, 1))
			{
				if (!&iLocal_247[1])
				{
					func_1259(cParam0, "UTP2_COACH_CATCH_UP", -1082130432, 0, 0, -1, -1, 0);
					iLocal_247[1] = 1;
				}
			}
			else if (&iLocal_247[1])
			{
				iLocal_247[1] = 0;
				func_1259(cParam0, "UTP2_OBJ02", -1082130432, 0, 0, -1, -1, 0);
				if (does_blip_exist(iLocal_93))
				{
					_0xedd964b7984ac291(iLocal_93, 631964804);
					_blip_set_modifier(iLocal_93, -401963276);
					set_blip_name_from_text_file(iLocal_93, "BLIP_PROC_COACH");
				}
				else
				{
					iLocal_93 = _blip_add_for_entity(631964804, iLocal_144);
					_blip_set_modifier(iLocal_93, -401963276);
					set_blip_name_from_text_file(iLocal_93, "BLIP_PROC_COACH");
				}
			}
		}
		if (func_1315(cParam0) >= 2)
		{
			if (&iLocal_163[23])
			{
				if (!&iLocal_237[0])
				{
					if (!func_1278())
					{
						if (func_1709(cParam0, "UTP2_APPROACH", 0))
						{
							iLocal_237[0] = 1;
						}
					}
				}
			}
			if (&iLocal_237[0])
			{
				if (!&iLocal_237[1])
				{
					if (!func_1278())
					{
						iLocal_237[1] = 1;
						func_1709(cParam0, "UTP2_REACT", 0);
					}
				}
			}
			if (!&iLocal_237[2])
			{
				if (!&iLocal_163[27])
				{
					if (!func_1278())
					{
						if (!func_1276(&iLocal_98, 2))
						{
							if (!func_1006(&(iLocal_95[1]), 2) && func_1006(&(iLocal_95[0]), 2))
							{
								iLocal_237[2] = 1;
								func_1709(cParam0, "UTP2_ONELEFT", 0);
							}
							else if ((!func_1006(&(iLocal_95[0]), 2) && func_1006(&(iLocal_95[1]), 2)) && get_ped_in_vehicle_seat(iLocal_144, -1) == &iLocal_95[1])
							{
								iLocal_237[2] = 1;
								func_1709(cParam0, "UTP2_ONELEFT", 0);
							}
						}
					}
				}
			}
			if (&iLocal_247[2])
			{
				if (!&iLocal_237[6])
				{
					if (!func_213())
					{
						if (!func_1278())
						{
							iLocal_237[6] = 1;
							func_1709(cParam0, "UTP2_HIJACK", 0);
						}
					}
				}
			}
		}
		switch (func_1315(cParam0))
		{
			case 0:
				if (!does_blip_exist(iLocal_93))
				{
					iLocal_93 = _blip_add_for_entity(631964804, iLocal_144);
					_blip_set_modifier(iLocal_93, -401963276);
					set_blip_name_from_text_file(iLocal_93, "BLIP_PROC_COACH");
				}
				func_220(&uLocal_349);
				func_135(cParam0, 1);
				break;
			case 1:
				if (!&iLocal_247[0])
				{
					if (func_213())
					{
						iLocal_247[0] = 1;
					}
				}
				if (!func_1278())
				{
					func_220(&uLocal_349);
					func_135(cParam0, 2);
				}
				break;
			case 2:
				if (!&iLocal_247[0])
				{
					if (func_213())
					{
						iLocal_247[0] = 1;
					}
					else if (func_888(&uLocal_349) >= 3f)
					{
						iLocal_247[0] = 1;
						func_1710(cParam0, "UTP2_OBJ02", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					}
				}
				if (&iLocal_163[23])
				{
					func_220(&uLocal_349);
					func_135(cParam0, 3);
				}
				else if (func_888(&uLocal_349) >= 20f)
				{
					func_220(&uLocal_349);
					func_135(cParam0, 3);
				}
				break;
			case 3:
				if (&iLocal_237[1])
				{
					func_220(&uLocal_349);
					func_135(cParam0, 4);
				}
				break;
			case 4:
				if (!&iLocal_163[28])
				{
					if (!is_entity_dead(&(iLocal_95[0])))
					{
						if (!func_1278())
						{
							if (func_888(&uLocal_349) >= 3f)
							{
								func_1709(cParam0, "UTP2_DRIVR_YELL", 0);
								func_220(&uLocal_349);
								func_135(cParam0, 5);
							}
						}
						else
						{
							func_220(&uLocal_349);
						}
					}
					else
					{
						func_220(&uLocal_349);
						func_135(cParam0, 5);
					}
				}
				else
				{
					func_220(&uLocal_349);
					func_135(cParam0, 51);
				}
				break;
			case 5:
				if (!&iLocal_163[28])
				{
					if (!func_1278())
					{
						if (func_888(&uLocal_349) >= 2.5f)
						{
							if (iVar589 == 0)
							{
								func_1709(cParam0, "UTP2_MCH_YELL1", 0);
							}
							else
							{
								func_1709(cParam0, "UTP2_MCH_YELL2", 0);
							}
							func_220(&uLocal_349);
							func_135(cParam0, 6);
						}
					}
					else
					{
						func_220(&uLocal_349);
					}
				}
				else
				{
					func_220(&uLocal_349);
					func_135(cParam0, 51);
				}
				break;
			case 6:
				if (!&iLocal_163[28])
				{
					if (!func_1278())
					{
						if (func_888(&uLocal_349) >= 3f)
						{
							if (iVar589 == 0)
							{
								if (!is_entity_dead(&(iLocal_98[1])))
								{
									func_1709(cParam0, "UTP2_GRD1_YELL", 0);
								}
								else if (!is_entity_dead(&(iLocal_98[2])))
								{
									func_1709(cParam0, "UTP2_GRD2_YELL", 0);
								}
								else if (!is_entity_dead(&(iLocal_98[3])))
								{
									func_1709(cParam0, "UTP2_GRD3_YELL", 0);
								}
							}
							else if (iVar589 == 1)
							{
								if (!is_entity_dead(&(iLocal_98[2])))
								{
									func_1709(cParam0, "UTP2_GRD2_YELL", 0);
								}
								else if (!is_entity_dead(&(iLocal_98[3])))
								{
									func_1709(cParam0, "UTP2_GRD3_YELL", 0);
								}
								else if (!is_entity_dead(&(iLocal_98[1])))
								{
									func_1709(cParam0, "UTP2_GRD1_YELL", 0);
								}
							}
							else if (iVar589 == 2)
							{
								if (!is_entity_dead(&(iLocal_98[3])))
								{
									func_1709(cParam0, "UTP2_GRD3_YELL", 0);
								}
								else if (!is_entity_dead(&(iLocal_98[1])))
								{
									func_1709(cParam0, "UTP2_GRD1_YELL", 0);
								}
								else if (!is_entity_dead(&(iLocal_98[2])))
								{
									func_1709(cParam0, "UTP2_GRD2_YELL", 0);
								}
							}
							func_220(&uLocal_349);
							func_135(cParam0, 7);
						}
					}
					else
					{
						func_220(&uLocal_349);
					}
				}
				else
				{
					func_220(&uLocal_349);
					func_135(cParam0, 51);
				}
				break;
			case 7:
				if (!&iLocal_163[28])
				{
					if (!func_1278())
					{
						if (func_888(&uLocal_349) >= 2.5f && func_874(Global_35, cParam0->f_5408, 30f, 1))
						{
							if (iVar589 == 0)
							{
								func_1709(cParam0, "UTP2_CMBT_BANT1", 0);
							}
							else if (iVar589 == 1)
							{
								if (!&iLocal_163[30] && get_vehicle_ped_is_in(Global_35, false) != iLocal_144)
								{
									func_1709(cParam0, "UTP2_CMBT_BANT2", 0);
								}
								else
								{
									func_1709(cParam0, "UTP2_CMBT_BANT3", 0);
									uLocal_592 = iVar589 + 1;
								}
							}
							else if (iVar589 == 2)
							{
								func_1709(cParam0, "UTP2_CMBT_BANT3", 0);
							}
							func_220(&uLocal_349);
							if (iVar589 >= 2)
							{
								func_135(cParam0, 51);
							}
							else
							{
								uLocal_592 = iVar589 + 1;
								func_135(cParam0, 4);
							}
						}
					}
					else
					{
						func_220(&uLocal_349);
						if (&iLocal_163[30])
						{
							if (func_1723("UTP2_CMBT_BANT2"))
							{
								func_1724("UTP2_CMBT_BANT2", 0, 1);
							}
						}
					}
				}
				else
				{
					func_220(&uLocal_349);
					func_135(cParam0, 51);
				}
				break;
			case 51:
				break;
		}
	}
}

void func_1270(char[4] cParam0)
{
	if (iVar486 > 0 && iVar486 < 11)
	{
	}
	switch (iVar486)
	{
		case 0:
			if (!func_8(cParam0, 8))
			{
			}
			if (!get_ped_config_flag(Global_35, 141, true))
			{
				set_ped_config_flag(Global_35, 141, true);
			}
			func_220(&uLocal_352);
			func_901(&uLocal_489, 1);
			break;
		case 1:
			if (is_entity_in_volume(Global_35, Local_16.f_9, true, 0))
			{
				trigger_music_event("UTP2_HILL_RIDE");
				func_220(&uLocal_352);
				func_901(&uLocal_489, 11);
			}
			break;
		case 11:
			break;
	}
}

void func_1271(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(iLocal_95[iVar0])))
		{
			if (&uLocal_457[iVar0] >= 5)
			{
				if (&uLocal_457[iVar0] != 25 && &uLocal_457[iVar0] != 26)
				{
					if (!is_ped_in_vehicle(&(iLocal_95[iVar0]), iLocal_144, false))
					{
						func_1725(uLocal_457[iVar0], 25);
					}
				}
			}
			switch (&uLocal_457[iVar0])
			{
				case 0:
					set_ped_reset_flag(&(iLocal_95[iVar0]), 3, true);
					if (iVar0 == 0)
					{
						fLocal_319[iVar0] = 1.5f;
					}
					else if (iVar0 == 1)
					{
						fLocal_319[iVar0] = (1.5f + 1f);
					}
					else
					{
						fLocal_319[iVar0] = 1.5f;
					}
					if (has_collision_loaded_around_entity(&(iLocal_95[iVar0])))
					{
						func_1726(iLocal_95[iVar0], uLocal_62[iVar0], 1);
						if (iVar0 == 0)
						{
							if ((iLocal_163[21] && iLocal_278[iVar0]) // PointerArith)
							{
							}
							else
							{
								func_1459(iLocal_95[iVar0], 10f, 1);
								if (!is_entity_dead(iLocal_144))
								{
									set_vehicle_forward_speed(iLocal_144, 6f);
								}
							}
						}
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 5);
					}
					else
					{
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 2);
					}
					break;
				case 2:
					set_ped_reset_flag(&(iLocal_95[iVar0]), 3, true);
					if (has_collision_loaded_around_entity(&(iLocal_95[iVar0])) || func_888(vLocal_370[iVar0]) >= 5f)
					{
						if (func_888(vLocal_370[iVar0]) >= 5f)
						{
						}
						func_1726(iLocal_95[iVar0], uLocal_62[iVar0], 1);
						if (iVar0 == 0)
						{
							if ((iLocal_163[21] && iLocal_278[iVar0]) // PointerArith)
							{
							}
							else
							{
								func_1459(iLocal_95[iVar0], 10f, 1);
								if (!is_entity_dead(iLocal_144))
								{
									set_vehicle_forward_speed(iLocal_144, 6f);
								}
							}
						}
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 5);
					}
					break;
				case 5:
					if (!bVar268)
					{
						iLocal_271 = 1;
						_0x1d125814ebc517eb(iLocal_144, func_388(10, 2));
					}
					if (iVar0 == 0)
					{
						if (!bVar590)
						{
							if (!bVar591)
							{
								if (func_888(vLocal_370[iVar0]) >= 2f)
								{
									iLocal_594 = 1;
									set_drive_task_cruise_speed(&(iLocal_95[iVar0]), 8f);
								}
							}
							if (!is_entity_dead(iLocal_144))
							{
								if (func_874(iLocal_144, Global_35, (50f * 2.4f), 1))
								{
									if (!func_1727(iLocal_144, Global_35, "utopia2_follow_coach", 1112014848) || func_874(iLocal_144, Global_35, (50f * 2.3f), 1))
									{
										iLocal_593 = 1;
										set_drive_task_cruise_speed(&(iLocal_95[iVar0]), 10f);
									}
								}
							}
						}
					}
					if ((is_ped_shooting(Global_35) && (func_874(&(iLocal_95[iVar0]), Global_35, (50f * 3f), 1) || func_874(&(iLocal_95[iVar0]), cParam0->f_5408, (50f * 3f), 1))) || is_ped_shooting(cParam0->f_5408))
					{
						iLocal_163[23] = 1;
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 8);
					}
					else if (func_874(&(iLocal_95[iVar0]), Global_35, 50f, 1))
					{
						iLocal_163[23] = 1;
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 8);
					}
					else if (func_874(&(iLocal_95[iVar0]), cParam0->f_5408, 50f, 1))
					{
						iLocal_163[23] = 1;
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 8);
					}
					else if (is_ped_shooting(&(iLocal_95[iVar0])))
					{
						iLocal_163[23] = 1;
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 8);
					}
					break;
				case 25:
					set_ped_relationship_group_hash(&(iLocal_95[iVar0]), 1269650476);
					register_target(&(iLocal_95[iVar0]), Global_35, 1);
					register_target(&(iLocal_95[iVar0]), cParam0->f_5408, 1);
					set_blocking_of_non_temporary_events(&(iLocal_95[iVar0]), true);
					clear_ped_tasks(&(iLocal_95[iVar0]), 1, 0);
					task_combat_hated_targets(&(iLocal_95[iVar0]), 5f);
					func_1725(uLocal_457[iVar0], 26);
					break;
				case 8:
					if (func_888(vLocal_370[iVar0]) >= &fLocal_319[iVar0])
					{
						iLocal_253[iVar0] = 0;
						iLocal_163[25] = 1;
						set_ped_relationship_group_hash(&(iLocal_95[iVar0]), 1269650476);
						if (!iVar0 == 0)
						{
							register_target(&(iLocal_95[iVar0]), Global_35, 1);
							register_target(&(iLocal_95[iVar0]), cParam0->f_5408, 1);
							set_blocking_of_non_temporary_events(&(iLocal_95[iVar0]), true);
							task_combat_hated_targets(&(iLocal_95[iVar0]), 5f);
						}
						else
						{
							set_drive_task_cruise_speed(&(iLocal_95[iVar0]), 12f);
						}
						if (!_0x5102307ce88798eb(&(iLocal_95[iVar0])))
						{
							request_ped_visibility_tracking(&(iLocal_95[iVar0]));
						}
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 9);
					}
					break;
				case 9:
					func_1729(&iLocal_95, &iLocal_291, iVar0, func_1728(&iLocal_95, 2, 1), 2, 75f, 200f);
					if (!bVar268)
					{
						iLocal_271 = 1;
						_0x1d125814ebc517eb(iLocal_144, func_388(10, 2));
					}
					if (get_ped_in_vehicle_seat(iLocal_144, -1) == &iLocal_95[iVar0])
					{
						if (func_1727(iLocal_144, Global_35, "utopia2_GuardRiverRight", 1112014848))
						{
							if (func_874(iLocal_144, Global_35, 70f, 1))
							{
								set_drive_task_cruise_speed(&(iLocal_95[iVar0]), 12f);
							}
							else
							{
								set_drive_task_cruise_speed(&(iLocal_95[iVar0]), 9.5f);
							}
						}
					}
					if (func_888(vLocal_370[iVar0]) >= 5f)
					{
						if (!&iLocal_253[iVar0])
						{
							if (is_entity_in_volume(iLocal_144, Local_16.f_19, true, 0))
							{
								if (iVar0 == 0)
								{
									func_220(vLocal_370[iVar0]);
									func_1725(uLocal_457[iVar0], 27);
								}
								else if (is_entity_dead(&(iLocal_95[0])))
								{
									func_220(vLocal_370[iVar0]);
									func_1725(uLocal_457[iVar0], 27);
								}
							}
							else if (iVar0 == 0)
							{
								if (!func_874(Global_35, &(iLocal_95[iVar0]), 90f, 1))
								{
									func_220(vLocal_370[iVar0]);
									func_1725(uLocal_457[iVar0], 27);
								}
							}
						}
						else if (iVar0 == 0)
						{
							if (!is_entity_in_volume(iLocal_144, Local_16.f_19, true, 0))
							{
								if (func_874(Global_35, &(iLocal_95[iVar0]), 90f, 1))
								{
									func_220(vLocal_370[iVar0]);
									func_1725(uLocal_457[iVar0], 29);
								}
							}
						}
					}
					if (is_entity_dead(&(iLocal_95[0])) || !get_ped_in_vehicle_seat(iLocal_144, -1) == &iLocal_95[0])
					{
						if (!get_ped_in_vehicle_seat(iLocal_144, -1) == &iLocal_95[1])
						{
							func_220(vLocal_370[iVar0]);
							func_1725(uLocal_457[iVar0], 23);
						}
					}
					if (func_888(vLocal_370[iVar0]) >= 3f)
					{
						if (!is_ped_in_vehicle(&(iLocal_95[iVar0]), iLocal_144, true))
						{
							func_220(vLocal_370[iVar0]);
							func_1725(uLocal_457[iVar0], 33);
						}
						func_220(vLocal_370[iVar0]);
					}
					break;
				case 28:
					if (is_entity_dead(&(iLocal_95[0])) || !get_ped_in_vehicle_seat(iLocal_144, -1) == &iLocal_95[0])
					{
						if (!get_ped_in_vehicle_seat(iLocal_144, -1) == &iLocal_95[1])
						{
							func_220(vLocal_370[iVar0]);
							func_1725(uLocal_457[iVar0], 23);
						}
					}
					if (func_888(vLocal_370[iVar0]) >= 3f)
					{
						if (!is_ped_in_vehicle(&(iLocal_95[iVar0]), iLocal_144, true))
						{
							func_220(vLocal_370[iVar0]);
							func_1725(uLocal_457[iVar0], 33);
						}
						func_220(vLocal_370[iVar0]);
					}
					break;
				case 23:
					iLocal_291[iVar0] = 1;
					set_entity_only_damaged_by_player(&(iLocal_95[iVar0]), true);
					func_959(&(iLocal_95[iVar0]), 1);
					if (is_ped_in_any_vehicle(&(iLocal_95[iVar0]), true))
					{
						set_blocking_of_non_temporary_events(&(iLocal_95[iVar0]), true);
						task_shuffle_to_next_vehicle_seat(&(iLocal_95[iVar0]), iLocal_144);
					}
					func_220(vLocal_370[iVar0]);
					func_1725(uLocal_457[iVar0], 24);
					break;
				case 24:
					if (get_ped_in_vehicle_seat(iLocal_144, -1) == &iLocal_95[iVar0])
					{
						func_1459(iLocal_95[iVar0], 12f, 0);
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 9);
					}
					else if (func_888(vLocal_370[iVar0]) >= 15f)
					{
						func_1459(iLocal_95[iVar0], 12f, 0);
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 9);
					}
					break;
				case 27:
					iLocal_253[iVar0] = 1;
					set_drive_task_cruise_speed(&(iLocal_95[iVar0]), 9.5f);
					if (is_entity_in_volume(iLocal_144, Local_16.f_19, true, 0))
					{
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 28);
					}
					else
					{
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 9);
					}
					break;
				case 29:
					iLocal_253[iVar0] = 0;
					set_drive_task_cruise_speed(&(iLocal_95[iVar0]), 12f);
					func_220(vLocal_370[iVar0]);
					func_1725(uLocal_457[iVar0], 9);
					break;
				case 33:
					clear_ped_tasks(&(iLocal_95[iVar0]), 1, 0);
					set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_95[iVar0])), 1269650476);
					set_ped_flee_attributes(&(iLocal_95[iVar0]), 2, false);
					set_blocking_of_non_temporary_events(&(iLocal_95[iVar0]), false);
					open_sequence_task(&iLocal_61);
					task_set_blocking_of_non_temporary_events(0, true);
					task_smart_flee_ped(0, Global_35, 350f, 120000, 0, 1077936128, 0);
					task_set_blocking_of_non_temporary_events(0, false);
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_95[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					func_220(vLocal_370[iVar0]);
					func_1725(uLocal_457[iVar0], 34);
					break;
				case 34:
					func_1729(&iLocal_95, &iLocal_291, iVar0, func_1728(&iLocal_95, 2, 1), 2, 75f, 200f);
					break;
				case 35:
					break;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_entity_dead(&(iLocal_98[iVar0])))
		{
			if (&iLocal_163[28] == 1 && !&iLocal_163[31] == 1)
			{
				if (&uLocal_460[iVar0] != 10 && &uLocal_460[iVar0] != 11)
				{
					func_1725(uLocal_460[iVar0], 10);
				}
			}
			switch (&uLocal_460[iVar0])
			{
				case 0:
					set_ped_reset_flag(&(iLocal_98[iVar0]), 3, true);
					if (iVar0 == 0)
					{
						fLocal_322[iVar0] = (1.5f + 1f);
					}
					else if (iVar0 == 1)
					{
						fLocal_322[iVar0] = (1.5f + 0.75f);
					}
					else if (iVar0 == 2)
					{
						fLocal_322[iVar0] = (1.5f + 0.35f);
					}
					else if (iVar0 == 3)
					{
						fLocal_322[iVar0] = 1.5f;
					}
					else
					{
						fLocal_322[iVar0] = 1.5f;
					}
					if (has_collision_loaded_around_entity(&(iLocal_98[iVar0])))
					{
						func_1726(iLocal_98[iVar0], uLocal_65[iVar0], 1);
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_460[iVar0], 5);
					}
					else
					{
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_460[iVar0], 2);
					}
					break;
				case 2:
					set_ped_reset_flag(&(iLocal_98[iVar0]), 3, true);
					if (has_collision_loaded_around_entity(&(iLocal_98[iVar0])) || func_888(vLocal_377[iVar0]) >= 5f)
					{
						if (func_888(vLocal_377[iVar0]) >= 5f)
						{
						}
						func_1726(iLocal_98[iVar0], uLocal_65[iVar0], 1);
						set_ped_config_flag(&(iLocal_98[iVar0]), 167, true);
						if (!is_entity_dead(&(iLocal_131[iVar0])))
						{
							set_blocking_of_non_temporary_events(&(iLocal_131[iVar0]), false);
							clear_ped_tasks(&(iLocal_131[iVar0]), 1, 0);
						}
						set_blocking_of_non_temporary_events(&(iLocal_98[iVar0]), true);
						if (iVar0 == 0)
						{
							task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[iVar0]), iLocal_144, "utopia2_GuardRiverLeft", 0f, 4.75f, 0, 4204040, -1, 0);
						}
						else if (iVar0 == 1)
						{
							task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[iVar0]), iLocal_144, "utopia2_GuardRiverRight", 0f, 4.75f, 0, 4204040, -1, 0);
						}
						else if (iVar0 == 2)
						{
							task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[iVar0]), iLocal_144, "utopia2_GuardRiverLeft", 0f, -4.75f, 0, 4204040, -1, 0);
						}
						else if (iVar0 == 3)
						{
							task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[iVar0]), iLocal_144, "utopia2_GuardRiverRight", 0f, -4.75f, 0, 4204040, -1, 0);
						}
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_460[iVar0], 5);
					}
					break;
				case 5:
					if ((is_ped_shooting(Global_35) && (func_874(&(iLocal_98[iVar0]), Global_35, (50f * 3f), 1) || func_874(&(iLocal_98[iVar0]), cParam0->f_5408, (50f * 3f), 1))) || is_ped_shooting(cParam0->f_5408))
					{
						iLocal_163[23] = 1;
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_460[iVar0], 8);
					}
					else if (func_874(&(iLocal_98[iVar0]), Global_35, 50f, 1))
					{
						iLocal_163[23] = 1;
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_460[iVar0], 8);
					}
					else if (func_874(&(iLocal_98[iVar0]), cParam0->f_5408, 50f, 1))
					{
						iLocal_163[23] = 1;
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_460[iVar0], 8);
					}
					else if (is_ped_shooting(&(iLocal_98[iVar0])))
					{
						iLocal_163[23] = 1;
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_457[iVar0], 8);
					}
					break;
				case 8:
					if (func_888(vLocal_377[iVar0]) >= &fLocal_322[iVar0])
					{
						set_ped_relationship_group_hash(&(iLocal_98[iVar0]), 1269650476);
						register_target(&(iLocal_98[iVar0]), Global_35, 1);
						register_target(&(iLocal_98[iVar0]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_98[iVar0]), true);
						if (iVar0 == 0)
						{
							task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[iVar0]), iLocal_144, "utopia2_GuardRiverLeft", 0f, -4.75f, 0, 4204040, -1, 1);
						}
						else if (iVar0 == 1)
						{
							task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[iVar0]), iLocal_144, "utopia2_GuardRiverRight", 0f, -4.75f, 0, 4204040, -1, 1);
						}
						else if (iVar0 == 2)
						{
							task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[iVar0]), iLocal_144, "utopia2_GuardRiverLeft", 0.75f, -14.25f, 0, 4204040, -1, 1);
						}
						else if (iVar0 == 3)
						{
							task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[iVar0]), iLocal_144, "utopia2_GuardRiverRight", -0.75f, -14.25f, 0, 4204040, -1, 1);
						}
						if (!_0x5102307ce88798eb(&(iLocal_98[iVar0])))
						{
							request_ped_visibility_tracking(&(iLocal_98[iVar0]));
						}
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_460[iVar0], 9);
					}
					break;
				case 9:
					func_1729(&iLocal_98, &iLocal_294, iVar0, func_1728(&iLocal_98, 2, 1), 4, 75f, 200f);
					if (!is_ped_on_mount(&(iLocal_98[iVar0])))
					{
						if (func_888(vLocal_377[iVar0]) >= 0.5f)
						{
							func_1730(&(iLocal_98[iVar0]), 0, 0);
						}
					}
					else
					{
						func_220(vLocal_377[iVar0]);
					}
					if (&iLocal_163[26] == 1)
					{
						func_1725(uLocal_460[iVar0], 10);
					}
					if (iVar0 == 1)
					{
						if (func_1728(&iLocal_98, 2, 1) >= 2)
						{
							if (func_874(&(iLocal_98[iVar0]), Global_35, 50f, 1))
							{
								func_220(vLocal_377[iVar0]);
								func_1725(uLocal_460[iVar0], 10);
							}
						}
					}
					break;
				case 10:
					func_1729(&iLocal_98, &iLocal_294, iVar0, func_1728(&iLocal_98, 2, 1), 4, 75f, 200f);
					register_target(&(iLocal_98[iVar0]), Global_35, 1);
					register_target(&(iLocal_98[iVar0]), cParam0->f_5408, 1);
					set_blocking_of_non_temporary_events(&(iLocal_98[iVar0]), true);
					task_combat_hated_targets_in_area(&(iLocal_98[iVar0]), get_entity_coords(iLocal_144, true, false), 150f, 0, 0);
					if (!is_entity_dead(iLocal_144))
					{
						_0x1854217c640b39ec(&(iLocal_98[iVar0]), iLocal_144, 0f, 0f, 0f, 25f, 0, 0);
					}
					func_220(vLocal_377[iVar0]);
					func_1725(uLocal_460[iVar0], 11);
					break;
				case 11:
					func_1729(&iLocal_98, &iLocal_294, iVar0, func_1728(&iLocal_98, 2, 1), 4, 75f, 200f);
					if (!is_ped_on_mount(&(iLocal_98[iVar0])))
					{
						if (func_888(vLocal_377[iVar0]) >= 0.5f)
						{
							func_1730(&(iLocal_98[iVar0]), 0, 0);
						}
					}
					else
					{
						func_220(vLocal_377[iVar0]);
					}
					break;
				case 15:
					func_1729(&iLocal_98, &iLocal_294, iVar0, func_1728(&iLocal_98, 2, 1), 4, 75f, 200f);
					if (&iLocal_163[27])
					{
						register_target(&(iLocal_98[iVar0]), Global_35, 1);
						register_target(&(iLocal_98[iVar0]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_98[iVar0]), true);
						task_combat_hated_targets_in_area(&(iLocal_98[iVar0]), get_entity_coords(iLocal_144, true, false), 150f, 0, 0);
						if (!is_entity_dead(iLocal_144))
						{
							_0x1854217c640b39ec(&(iLocal_98[iVar0]), iLocal_144, 0f, 0f, 0f, 25f, 0, 0);
						}
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_460[iVar0], 16);
					}
					break;
				case 16:
					func_1729(&iLocal_98, &iLocal_294, iVar0, func_1728(&iLocal_98, 2, 1), 4, 75f, 200f);
					if (func_1728(&iLocal_98, 2, 1) >= (4 - 2))
					{
						if (iVar0 == 0)
						{
							fLocal_322[iVar0] = 0f;
						}
						else if (iVar0 == 1)
						{
							fLocal_322[iVar0] = 0.75f;
						}
						else if (iVar0 == 2)
						{
							fLocal_322[iVar0] = 1.5f;
						}
						else if (iVar0 == 3)
						{
							fLocal_322[iVar0] = 2.25f;
						}
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_460[iVar0], 17);
					}
					else if (func_888(vLocal_377[iVar0]) >= 3f)
					{
						if (!is_ped_on_mount(&(iLocal_98[iVar0])))
						{
							if (!func_874(&(iLocal_98[iVar0]), Global_35, 90f, 1))
							{
								func_220(vLocal_377[iVar0]);
								func_1725(uLocal_460[iVar0], 33);
							}
						}
						func_220(vLocal_377[iVar0]);
					}
					break;
				case 17:
					func_1729(&iLocal_98, &iLocal_294, iVar0, func_1728(&iLocal_98, 2, 1), 4, 75f, 200f);
					if (func_888(vLocal_377[iVar0]) >= &fLocal_322[iVar0])
					{
						register_target(&(iLocal_98[iVar0]), Global_35, 1);
						if (get_ped_config_flag(&(iLocal_98[iVar0]), 167, true))
						{
							set_ped_config_flag(&(iLocal_98[iVar0]), 167, false);
						}
						set_ped_config_flag(&(iLocal_98[iVar0]), 112, true);
						set_blocking_of_non_temporary_events(&(iLocal_98[iVar0]), true);
						open_sequence_task(&iLocal_61);
						if (!func_874(&(iLocal_98[iVar0]), iLocal_144, 15f, 1))
						{
							task_go_to_entity_while_aiming_at_entity(0, iLocal_144, cParam0->f_5408, 2.5f, 1, 15f, 25f, 1, 0, -687903391, 0);
						}
						if (is_ped_on_mount(&(iLocal_98[iVar0])))
						{
							task_dismount_animal(0, 0, 0, 0, 0, 0);
						}
						task_combat_ped(0, Global_35, 0, 0);
						close_sequence_task(iLocal_61);
						task_perform_sequence(&(iLocal_98[iVar0]), iLocal_61);
						clear_sequence_task(&iLocal_61);
						if (!is_entity_dead(iLocal_144))
						{
							_0x1854217c640b39ec(&(iLocal_98[iVar0]), iLocal_144, 0f, 0f, 0f, 15f, 0, 0);
						}
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_460[iVar0], 18);
					}
					break;
				case 18:
					func_1729(&iLocal_98, &iLocal_294, iVar0, func_1728(&iLocal_98, 2, 1), 4, 75f, 200f);
					if (func_888(vLocal_377[iVar0]) >= 3f)
					{
						if (!is_ped_on_mount(&(iLocal_98[iVar0])))
						{
							if (!func_874(&(iLocal_98[iVar0]), Global_35, 90f, 1))
							{
								func_220(vLocal_377[iVar0]);
								func_1725(uLocal_460[iVar0], 33);
							}
						}
						func_220(vLocal_377[iVar0]);
					}
					break;
				case 33:
					clear_ped_tasks(&(iLocal_98[iVar0]), 1, 0);
					set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_98[iVar0])), 1269650476);
					set_ped_flee_attributes(&(iLocal_98[iVar0]), 2, false);
					set_blocking_of_non_temporary_events(&(iLocal_98[iVar0]), false);
					open_sequence_task(&iLocal_61);
					task_set_blocking_of_non_temporary_events(0, true);
					task_smart_flee_ped(0, Global_35, 350f, 120000, 0, 1077936128, 0);
					task_set_blocking_of_non_temporary_events(0, false);
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_98[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					remove_ped_defensive_area(&(iLocal_98[iVar0]), false);
					func_220(vLocal_377[iVar0]);
					func_1725(uLocal_460[iVar0], 34);
					break;
				case 34:
					func_1729(&iLocal_98, &iLocal_294, iVar0, func_1728(&iLocal_98, 2, 1), 4, 75f, 200f);
					break;
				case 35:
					break;
			}
		}
		iVar0++;
	}
}

void func_1272(char[4] cParam0)
{
	if (iLocal_163[28] && !&iLocal_163[31])
	{
		if (is_ped_in_vehicle(Global_35, iLocal_144, false))
		{
			if (get_script_task_status(Global_35, -828834893, true) == 8)
			{
				task_leave_any_vehicle(Global_35, 0, 4096);
			}
		}
		if (!&iLocal_163[32])
		{
			set_vehicle_doors_locked(iLocal_144, 3);
			iLocal_163[32] = 1;
		}
	}
	if (!is_entity_dead(Global_35))
	{
		switch (iVar452)
		{
			case 0:
				clear_ped_tasks(Global_35, 1, 0);
				_0xbbadfb5e5e5766fb(get_player_index(), 0.75f);
				if (!is_entity_dead(cParam0->f_5411))
				{
					clear_ped_tasks(cParam0->f_5411, 1, 0);
				}
				func_1260(&Global_35, &(cParam0->f_5411), 1073741824);
				func_220(&uLocal_358);
				func_897(&uLocal_455, 1);
				break;
			case 1:
				if (&iLocal_256[2])
				{
					if (func_888(&uLocal_358) >= 2f)
					{
						iLocal_256[2] = 0;
					}
					func_1260(&Global_35, &(cParam0->f_5411), 1073741824);
				}
				if (!is_entity_dead(cParam0->f_5411))
				{
					set_ped_reset_flag(cParam0->f_5411, 214, true);
				}
				if (func_166(&uVar0))
				{
					if (!func_1235(1))
					{
						func_1257(1);
					}
				}
				else if (func_1235(1))
				{
					func_1236(1);
				}
				break;
			case 6:
				break;
		}
	}
}

void func_1273(char[4] cParam0)
{
	if (!is_entity_dead(cParam0->f_5408))
	{
		if (&iLocal_163[65])
		{
			if (iVar453 == 36)
			{
				if (func_888(&uLocal_364) >= 20f)
				{
					iLocal_163[65] = 0;
					set_ped_config_flag(cParam0->f_5408, 254, false);
				}
			}
		}
		switch (iVar453)
		{
			case 0:
				set_ped_relationship_group_hash(get_ped_index_from_entity_index(cParam0->f_5408), -1538724068);
				iLocal_163[65] = 1;
				set_ped_config_flag(cParam0->f_5408, 254, true);
				set_ped_combat_attributes(cParam0->f_5408, 46, true);
				set_ped_combat_attributes(cParam0->f_5408, 35, true);
				set_ped_combat_attributes(cParam0->f_5408, 50, true);
				set_ped_combat_attributes(cParam0->f_5408, 0, true);
				set_ped_combat_attributes(cParam0->f_5408, 2, true);
				set_ped_combat_attributes(cParam0->f_5408, 30, true);
				set_ped_combat_attributes(cParam0->f_5408, 98, false);
				_0x83b8d50eb9446bba(cParam0->f_5408, 0);
				set_ped_combat_attributes(cParam0->f_5408, 116, false);
				set_ped_flee_attributes(cParam0->f_5408, 512, true);
				func_1260(&(cParam0->f_5408), &iLocal_94, 1073741824);
				iLocal_260[2] = 0;
				func_220(&uLocal_449);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 62);
				break;
			case 62:
				if (func_888(&uLocal_361) >= 0.75f)
				{
					func_1731(&(cParam0->f_5408), &iLocal_94, &fLocal_591);
				}
				else
				{
					fLocal_591 = 2f;
					func_1260(&(cParam0->f_5408), &iLocal_94, 1073741824);
				}
				if (func_888(&uLocal_449) >= 15f)
				{
					if (!func_874(cParam0->f_5408, iLocal_144, 125f, 1))
					{
						iLocal_247[2] = 1;
						iLocal_237[6] = 0;
						func_220(&uLocal_449);
					}
				}
				if (&iLocal_163[23])
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 35);
				}
				else if (func_874(cParam0->f_5408, iLocal_144, 50f, 1))
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 35);
				}
				break;
			case 35:
				func_1732(&(cParam0->f_5408), &iLocal_94, &iLocal_144, &fLocal_591);
				func_220(&uLocal_364);
				func_1733(cParam0->f_5408, &iLocal_95);
				func_1733(cParam0->f_5408, &iLocal_98);
				set_blocking_of_non_temporary_events(cParam0->f_5408, true);
				task_follow_entity_along_waypoint_recording_at_offset(cParam0->f_5408, iLocal_144, "utopia2_follow_coach", 0f, -19f, 0, 4204040, -1, 1);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 36);
				break;
			case 36:
				if (func_888(&uLocal_361) <= 1.5f)
				{
					func_1732(&(cParam0->f_5408), &iLocal_94, &iLocal_144, &fLocal_591);
				}
				if (!is_ped_on_mount(cParam0->f_5408))
				{
					func_898(&uLocal_456, 43);
				}
				if ((iLocal_163[28] || iLocal_163[30]) // PointerArith)
				{
					func_898(&uLocal_456, 45);
				}
				break;
			case 43:
				if (!is_entity_dead(iLocal_94))
				{
					if (_0x2d64376cf437363e(iLocal_94))
					{
						set_blocking_of_non_temporary_events(cParam0->f_5408, true);
						open_sequence_task(&iLocal_61);
						task_mount_animal(0, iLocal_94, 20000, -1, 1073741824, 1, 0, 0);
						task_stand_still(0, -1);
						close_sequence_task(iLocal_61);
						task_perform_sequence(cParam0->f_5408, iLocal_61);
						clear_sequence_task(&iLocal_61);
						func_220(&uLocal_361);
						func_898(&uLocal_456, 44);
					}
					else if (func_888(&uLocal_361) >= 15f)
					{
						if (&iLocal_163[27])
						{
							func_220(&uLocal_361);
							func_898(&uLocal_456, 45);
						}
						else
						{
							func_220(&uLocal_361);
							func_898(&uLocal_456, 35);
						}
					}
				}
				else if (&iLocal_163[27])
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 45);
				}
				else
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 35);
				}
				break;
			case 44:
				if (is_ped_on_mount(cParam0->f_5408) && _is_ped_getting_into_a_mount_seat(cParam0->f_5408, true))
				{
					if (&iLocal_163[27])
					{
						func_220(&uLocal_361);
						func_898(&uLocal_456, 45);
					}
					else
					{
						func_220(&uLocal_361);
						func_898(&uLocal_456, 35);
					}
				}
				break;
			case 45:
				if ((iLocal_163[28] || iLocal_163[30]) // PointerArith)
				{
					func_1733(cParam0->f_5408, &iLocal_98);
					func_1733(cParam0->f_5408, &iLocal_95);
					set_blocking_of_non_temporary_events(cParam0->f_5408, false);
					task_combat_hated_targets_in_area(cParam0->f_5408, get_entity_coords(iLocal_144, true, false), 150f, 0, 0);
					if (!is_entity_dead(iLocal_144))
					{
						_0x1854217c640b39ec(cParam0->f_5408, iLocal_144, 0f, 0f, 0f, 35f, 0, 0);
					}
					if (!is_entity_dead(iLocal_94))
					{
						set_blocking_of_non_temporary_events(iLocal_94, false);
						clear_ped_tasks(iLocal_94, 1, 0);
					}
					func_220(&uLocal_361);
					func_898(&uLocal_456, 46);
				}
				break;
			case 46:
				if (!&iLocal_163[29])
				{
					if (func_888(&uLocal_361) > 8f)
					{
						set_entity_only_damaged_by_player(&(iLocal_95[0]), false);
						set_entity_only_damaged_by_player(&(iLocal_95[1]), false);
						iLocal_163[29] = 1;
					}
				}
				break;
			case 69:
				break;
		}
	}
}

void func_1274(char[4] cParam0)
{
	if (!&iLocal_163[72])
	{
		iVar0 = 0;
		while (iVar0 < iLocal_95)
		{
			if (is_entity_dead(&(iLocal_95[iVar0])))
			{
				iVar1++;
				if (_0x06fa94c835787c64(&(iLocal_95[iVar0])))
				{
					iVar2++;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_98)
		{
			if (is_entity_dead(&(iLocal_98[iVar0])))
			{
				iVar1++;
				if (_0x06fa94c835787c64(&(iLocal_98[iVar0])))
				{
					iVar2++;
				}
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_95 + iLocal_98))
		{
			if (iVar1 == iVar2)
			{
				func_1266(cParam0, 1691759731);
			}
			iLocal_163[72] = 1;
		}
	}
}

bool func_1275(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, iParam2) == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1276(int iParam0, int iParam1)
{
	iVar0 = *iParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_1006(iParam0[iVar1], iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_1277(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	func_1734(uParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

bool func_1278()
{
	return func_1735(1);
}

bool func_1279(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam1))
	{
		if (is_vehicle_driveable(iParam1, false, false))
		{
			if (!is_entity_dead(iParam0))
			{
				return is_ped_in_vehicle(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

bool func_1280(int iParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!is_entity_dead(iParam0[iVar0]))
		{
			if (func_874(iParam0[iVar0], iParam1, fParam2, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1281(int iParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!is_entity_dead(iParam0[iVar0]))
		{
			if (func_874(iParam0[iVar0], iParam1, fParam2, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1282(char[4] cParam0, int iParam1)
{
	if (_does_anim_scene_exist(&(iLocal_310[iParam1])))
	{
		if (_is_anim_scene_loaded(&(iLocal_310[iParam1]), true, false))
		{
			if (!_is_anim_scene_started(&(iLocal_310[iParam1]), false))
			{
				if (iParam1 == 0)
				{
				}
				else if (iParam1 == 1)
				{
				}
				else if (iParam1 == 3)
				{
				}
				else if (iParam1 == 2)
				{
				}
				else if (iParam1 == 4)
				{
				}
				else if (iParam1 == 5)
				{
				}
				func_1736(cParam0, iParam1);
				func_1737(cParam0, iParam1);
				start_anim_scene(&(iLocal_310[iParam1]));
			}
		}
	}
}

void func_1283()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		vVar1 = { func_796(16, iVar0) };
		_add_tactical_analysis_point(vVar1, 0);
		iVar0++;
	}
}

void func_1284(char[4] cParam0)
{
	if (func_1315(cParam0) > 0 && func_1315(cParam0) <= 51)
	{
		func_1721(cParam0);
	}
	if (func_1315(cParam0) >= 4)
	{
		if (!is_entity_dead(iLocal_144))
		{
			if (func_1722(cParam0, iLocal_144, "utopia2_follow_coach", "UTP2_COACH", "UTP2_COACH_FAIL", 75f, 150f, 0, 0, 1, 1117126656, 422991367, 1))
			{
				if (!&iLocal_247[1])
				{
					iLocal_247[1] = 1;
				}
			}
			else if (&iLocal_247[1])
			{
				iLocal_247[1] = 0;
			}
		}
		else if (func_1738(cParam0, &(iLocal_149[3]), "UTP2_COACH_RETURN", "UTP2_COACH_FAIL", 75f, 150f, 0, 0, 1, 422991367, 1))
		{
			if (!&iLocal_247[1])
			{
				iLocal_247[1] = 1;
			}
		}
		else if (&iLocal_247[1])
		{
			iLocal_247[1] = 0;
		}
	}
	switch (func_1315(cParam0))
	{
		case 0:
			func_1259(cParam0, "UTP2_OBJ02", -1082130432, 0, 0, -1, -1, 0);
			if (!does_blip_exist(iLocal_93))
			{
				iLocal_93 = _blip_add_for_entity(631964804, iLocal_144);
				_blip_set_modifier(iLocal_93, 942020339);
				set_blip_name_from_text_file(iLocal_93, "BLIP_PROC_COACH");
			}
			func_220(&uLocal_349);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_874(Global_35, cParam0->f_5408, 60f, 1))
			{
				func_1709(cParam0, "UTP2_OBJ03a", 0);
			}
			func_220(&uLocal_349);
			func_135(cParam0, 2);
			break;
		case 2:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 10:
			func_1259(cParam0, "UTP2_OBJ03", -1082130432, 0, 0, -1, -1, 0);
			func_220(&uLocal_349);
			func_135(cParam0, 11);
			break;
		case 11:
			if (func_888(&uLocal_349) >= 2f)
			{
				if (!func_1278())
				{
					if (func_874(Global_35, cParam0->f_5408, 45f, 1))
					{
						func_1709(cParam0, "UTP2_OBJ03b", 0);
					}
					func_220(&uLocal_349);
					func_135(cParam0, 12);
				}
			}
			break;
		case 12:
			if (func_888(&uLocal_349) >= 6.5f)
			{
				func_220(&uLocal_349);
				func_135(cParam0, 13);
			}
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 13);
			}
			break;
		case 13:
			if (func_888(&uLocal_349) >= 1f)
			{
				func_220(&uLocal_349);
				func_135(cParam0, 14);
			}
			break;
		case 14:
			if (!func_213())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 15);
			}
			break;
		case 15:
			if (func_888(&uLocal_349) >= 1f)
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 20:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 21);
			}
			break;
		case 21:
			if (!is_entity_dead(iLocal_142))
			{
				func_145(cParam0, iLocal_142, "UTP2_RHO_DUSTER", 0);
				func_1709(cParam0, "UTP2_FLEEb", 0);
				func_220(&uLocal_349);
				func_135(cParam0, 22);
			}
			else if (func_888(&uLocal_349) >= 2.5f)
			{
				func_220(&uLocal_349);
				func_135(cParam0, 22);
			}
			break;
		case 22:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 23);
			}
			break;
		case 23:
			if (func_874(Global_35, cParam0->f_5408, 100f, 1))
			{
				func_1709(cParam0, "UTP2_FLEEa", 0);
			}
			func_220(&uLocal_349);
			func_135(cParam0, 24);
			break;
		case 24:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1285(char[4] cParam0)
{
	if (!is_entity_dead(iLocal_144))
	{
	}
	switch (iVar485)
	{
		case 0:
			if (!func_8(cParam0, 8))
			{
			}
			track_vehicle_visibility(iLocal_144);
			func_220(&uLocal_367);
			func_899(&uLocal_488, 3);
			break;
		case 3:
			if (&iLocal_163[49])
			{
				func_220(&uLocal_367);
				func_899(&uLocal_488, 12);
			}
			break;
		case 12:
			func_1282(cParam0, 4);
			func_220(&uLocal_367);
			func_899(&uLocal_488, 13);
			break;
		case 13:
			if (_does_anim_scene_exist(&(iLocal_310[4])))
			{
				if (_is_anim_scene_loaded(&(iLocal_310[4]), true, false))
				{
					if (_is_anim_scene_started(&(iLocal_310[4]), false))
					{
						if (_get_anim_scene_time(&(iLocal_310[4])) >= 0.25f)
						{
							if (!is_entity_dead(&(iLocal_95[0])))
							{
								task_leave_vehicle(&(iLocal_95[0]), iLocal_144, 4096, 0);
							}
							if (!is_entity_dead(&(iLocal_95[1])))
							{
								task_leave_vehicle(&(iLocal_95[1]), iLocal_144, 4096, 0);
							}
							func_220(&uLocal_367);
							func_899(&uLocal_488, 14);
						}
					}
				}
			}
			if (func_888(&uLocal_367) >= 2f)
			{
				if (!is_entity_dead(&(iLocal_95[0])))
				{
					task_leave_vehicle(&(iLocal_95[0]), iLocal_144, 4096, 0);
				}
				if (!is_entity_dead(&(iLocal_95[1])))
				{
					task_leave_vehicle(&(iLocal_95[1]), iLocal_144, 4096, 0);
				}
				func_220(&uLocal_367);
				func_899(&uLocal_488, 14);
			}
			break;
		case 14:
			if (_does_anim_scene_exist(&(iLocal_310[4])))
			{
				if (_is_anim_scene_loaded(&(iLocal_310[4]), true, false))
				{
					if (_is_anim_scene_started(&(iLocal_310[4]), false))
					{
						if (_get_anim_scene_time(&(iLocal_310[4])) >= 1.3f)
						{
							func_975(2);
							func_220(&uLocal_367);
							func_899(&uLocal_488, 15);
						}
					}
				}
			}
			if (func_888(&uLocal_367) >= 3f)
			{
				func_975(2);
				func_220(&uLocal_367);
				func_899(&uLocal_488, 15);
			}
			break;
		case 15:
			if (!bVar285)
			{
				if (func_888(&uLocal_367) >= 0.6f)
				{
					iLocal_288 = 1;
					if (does_entity_exist(&(iLocal_126[0])))
					{
						delete_ped(iLocal_126[0]);
					}
					if (does_entity_exist(&(iLocal_126[1])))
					{
						delete_ped(iLocal_126[1]);
					}
					if (does_entity_exist(&(iLocal_126[2])))
					{
						delete_ped(iLocal_126[2]);
					}
					if (does_entity_exist(&(iLocal_126[3])))
					{
						delete_ped(iLocal_126[3]);
					}
					func_983(iLocal_95[0], 0);
					func_983(iLocal_95[1], 0);
				}
			}
			if (_does_anim_scene_exist(&(iLocal_310[4])))
			{
				if (_is_anim_scene_loaded(&(iLocal_310[4]), true, false))
				{
					if (_is_anim_scene_started(&(iLocal_310[4]), false))
					{
						if (_get_anim_scene_time(&(iLocal_310[4])) >= 3f)
						{
							iLocal_163[58] = 1;
							func_469(4);
							if (does_entity_exist(&(iLocal_126[0])))
							{
								delete_ped(iLocal_126[0]);
							}
							if (does_entity_exist(&(iLocal_126[1])))
							{
								delete_ped(iLocal_126[1]);
							}
							if (does_entity_exist(&(iLocal_126[2])))
							{
								delete_ped(iLocal_126[2]);
							}
							if (does_entity_exist(&(iLocal_126[3])))
							{
								delete_ped(iLocal_126[3]);
							}
							func_983(iLocal_95[0], 0);
							func_983(iLocal_95[1], 0);
							func_975(11);
							func_465(&iLocal_144, 0);
							if (!is_entity_dead(&(iLocal_149[3])))
							{
								set_entity_invincible(&(iLocal_149[3]), false);
								set_entity_visible(&(iLocal_149[3]), true);
							}
							if (!is_entity_dead(&(iLocal_149[4])))
							{
								set_entity_invincible(&(iLocal_149[4]), false);
								set_entity_visible(&(iLocal_149[4]), true);
							}
							func_220(&uLocal_367);
							func_899(&uLocal_488, 16);
						}
					}
				}
			}
			if (func_888(&uLocal_367) >= 5f)
			{
				iLocal_163[58] = 1;
				func_469(4);
				if (does_entity_exist(&(iLocal_126[0])))
				{
					delete_ped(iLocal_126[0]);
				}
				if (does_entity_exist(&(iLocal_126[1])))
				{
					delete_ped(iLocal_126[1]);
				}
				if (does_entity_exist(&(iLocal_126[2])))
				{
					delete_ped(iLocal_126[2]);
				}
				if (does_entity_exist(&(iLocal_126[3])))
				{
					delete_ped(iLocal_126[3]);
				}
				func_983(iLocal_95[0], 0);
				func_983(iLocal_95[1], 0);
				func_975(11);
				func_465(&iLocal_144, 0);
				if (!is_entity_dead(&(iLocal_149[3])))
				{
					set_entity_invincible(&(iLocal_149[3]), false);
					set_entity_visible(&(iLocal_149[3]), true);
					set_entity_collision(&(iLocal_149[3]), true, false);
					freeze_entity_position(&(iLocal_149[3]), false);
				}
				if (!is_entity_dead(&(iLocal_149[4])))
				{
					set_entity_invincible(&(iLocal_149[4]), false);
					set_entity_visible(&(iLocal_149[4]), true);
					set_entity_collision(&(iLocal_149[4]), true, false);
					freeze_entity_position(&(iLocal_149[4]), false);
				}
				func_220(&uLocal_367);
				func_899(&uLocal_488, 16);
			}
			break;
		case 16:
			if (func_888(&uLocal_367) >= 0.5f)
			{
				func_220(&uLocal_367);
				func_899(&uLocal_488, 17);
			}
			break;
		case 17:
			break;
		case 20:
			break;
	}
}

void func_1286(char[4] cParam0)
{
	func_1242(cParam0);
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(iLocal_95[iVar0])))
		{
			switch (&uLocal_457[iVar0])
			{
				case 0:
					func_1726(iLocal_95[iVar0], uLocal_62[iVar0], 1);
					if (iVar0 == 0)
					{
						add_relationship_group("CoachGuardGroup", &uLocal_502);
						add_relationship_group("DusterGangGroup", &uLocal_503);
						set_relationship_between_groups(6, iVar499, iVar500);
						set_relationship_between_groups(6, iVar499, 1862763509);
						set_relationship_between_groups(6, iVar500, iVar499);
						set_relationship_between_groups(6, iVar500, 1862763509);
					}
					else if (is_entity_dead(&(iLocal_95[0])))
					{
						add_relationship_group("CoachGuardGroup", &uLocal_502);
						add_relationship_group("DusterGangGroup", &uLocal_503);
						set_relationship_between_groups(6, iVar499, iVar500);
						set_relationship_between_groups(6, iVar499, 1862763509);
						set_relationship_between_groups(6, iVar500, iVar499);
						set_relationship_between_groups(6, iVar500, 1862763509);
					}
					if (iVar0 == 0)
					{
						set_ped_config_flag(&(iLocal_95[iVar0]), 254, true);
						func_959(&(iLocal_95[iVar0]), 1);
					}
					else if (iVar0 == 1)
					{
						if (is_entity_dead(&(iLocal_95[0])))
						{
							if (!is_entity_dead(iLocal_144))
							{
								if (get_ped_in_vehicle_seat(iLocal_144, -1) == &iLocal_95[iVar0])
								{
									set_ped_config_flag(&(iLocal_95[iVar0]), 254, true);
								}
							}
						}
					}
					func_220(vLocal_370[iVar0]);
					func_1725(uLocal_457[iVar0], 21);
					break;
				case 21:
					set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_95[iVar0])), iVar499);
					register_target(&(iLocal_95[iVar0]), Global_35, 1);
					register_target(&(iLocal_95[iVar0]), cParam0->f_5408, 1);
					set_blocking_of_non_temporary_events(&(iLocal_95[iVar0]), true);
					task_combat_hated_targets(&(iLocal_95[iVar0]), 5f);
					func_220(vLocal_370[iVar0]);
					func_1725(uLocal_457[iVar0], 22);
					break;
				case 22:
					if (func_888(vLocal_370[iVar0]) >= 3f)
					{
						if (!is_ped_in_vehicle(&(iLocal_95[iVar0]), iLocal_144, true))
						{
							func_220(vLocal_370[iVar0]);
							func_1725(uLocal_457[iVar0], 33);
						}
						func_220(vLocal_370[iVar0]);
					}
					break;
				case 33:
					set_blocking_of_non_temporary_events(&(iLocal_95[iVar0]), false);
					open_sequence_task(&iLocal_61);
					task_set_blocking_of_non_temporary_events(0, true);
					task_smart_flee_ped(0, Global_35, 350f, 120000, 0, 1077936128, 0);
					task_set_blocking_of_non_temporary_events(0, false);
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_95[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					set_ped_flee_attributes(&(iLocal_95[iVar0]), 2, false);
					set_ped_path_prefer_to_avoid_water(&(iLocal_95[iVar0]), false, 0.7f);
					func_220(vLocal_370[iVar0]);
					func_1725(uLocal_457[iVar0], 34);
					break;
				case 34:
					func_1739(iLocal_95[iVar0], func_388(5, 22), 90f);
					break;
				case 35:
					break;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_entity_dead(&(iLocal_98[iVar0])))
		{
			switch (&uLocal_460[iVar0])
			{
				case 0:
					func_1726(iLocal_98[iVar0], uLocal_65[iVar0], 1);
					if (!is_entity_dead(&(iLocal_131[iVar0])))
					{
						set_blocking_of_non_temporary_events(&(iLocal_131[iVar0]), false);
						clear_ped_tasks(&(iLocal_131[iVar0]), 1, 0);
					}
					set_ped_config_flag(&(iLocal_98[iVar0]), 167, true);
					set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_98[iVar0])), iVar499);
					register_target(&(iLocal_98[iVar0]), Global_35, 1);
					register_target(&(iLocal_98[iVar0]), cParam0->f_5408, 1);
					set_blocking_of_non_temporary_events(&(iLocal_98[iVar0]), true);
					if (iVar0 == 0)
					{
						task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[iVar0]), iLocal_144, "utopia2_GuardRiverLeft", 0f, -4.75f, 0, 4204040, -1, 1);
					}
					else if (iVar0 == 1)
					{
						task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_98[iVar0]), iLocal_144, "utopia2_GuardRiverRight", 0f, -4.75f, 0, 4204040, -1, 1);
					}
					else if (iVar0 == 2)
					{
						task_combat_hated_targets_in_area(&(iLocal_98[iVar0]), get_entity_coords(iLocal_144, true, false), 150f, 0, 0);
					}
					else if (iVar0 == 3)
					{
						task_combat_hated_targets_in_area(&(iLocal_98[iVar0]), get_entity_coords(iLocal_144, true, false), 150f, 0, 0);
					}
					if (iVar0 == 2 || iVar0 == 3)
					{
						if (!is_entity_dead(iLocal_144))
						{
							_0x1854217c640b39ec(&(iLocal_98[iVar0]), iLocal_144, 0f, 0f, 0f, 25f, 0, 0);
						}
					}
					func_220(vLocal_377[iVar0]);
					func_1725(uLocal_460[iVar0], 5);
					break;
				case 5:
					if (func_888(vLocal_377[iVar0]) >= 3f)
					{
						if (!is_ped_on_mount(&(iLocal_98[iVar0])))
						{
							if (!func_874(&(iLocal_98[iVar0]), Global_35, 90f, 1))
							{
								func_220(vLocal_377[iVar0]);
								func_1725(uLocal_460[iVar0], 33);
							}
							if (is_ped_defensive_area_active(&(iLocal_98[iVar0]), false))
							{
								remove_ped_defensive_area(&(iLocal_98[iVar0]), false);
							}
						}
						func_220(vLocal_377[iVar0]);
					}
					break;
				case 33:
					set_blocking_of_non_temporary_events(&(iLocal_98[iVar0]), false);
					open_sequence_task(&iLocal_61);
					task_set_blocking_of_non_temporary_events(0, true);
					task_smart_flee_ped(0, Global_35, 350f, 120000, 0, 1077936128, 0);
					task_set_blocking_of_non_temporary_events(0, false);
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_98[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					set_ped_flee_attributes(&(iLocal_98[iVar0]), 2, false);
					set_ped_path_prefer_to_avoid_water(&(iLocal_98[iVar0]), false, 0.7f);
					func_220(vLocal_377[iVar0]);
					func_1725(uLocal_460[iVar0], 34);
					break;
				case 34:
					func_1739(iLocal_98[iVar0], func_388(5, 22), 75f);
					break;
				case 35:
					break;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		if (!is_entity_dead(&(iLocal_103[iVar0])))
		{
			switch (&uLocal_465[iVar0])
			{
				case 0:
					if (iVar0 == 6)
					{
						fLocal_327[iVar0] = 3.5f;
					}
					else if (iVar0 == 7)
					{
						fLocal_327[iVar0] = 1.5f;
					}
					else
					{
						fLocal_327[iVar0] = 0f;
					}
					if (iVar0 == 0)
					{
						func_220(vLocal_390[iVar0]);
						func_1725(uLocal_465[iVar0], 7);
					}
					else if (iVar0 == 6 || iVar0 == 7)
					{
						func_220(vLocal_390[iVar0]);
						func_1725(uLocal_465[iVar0], 17);
					}
					else
					{
						func_220(vLocal_390[iVar0]);
						func_1725(uLocal_465[iVar0], 3);
					}
					break;
				case 7:
					if (_does_anim_scene_exist(&(iLocal_310[3])))
					{
						if (_is_anim_scene_loaded(&(iLocal_310[3]), true, false))
						{
							if ((_is_anim_scene_finished(&(iLocal_310[3]), false) || !_is_anim_scene_started(&(iLocal_310[3]), false)) || _0xb89fcff19dafff28(&(iLocal_310[3]), "G_M_M_UNIDUSTER_03"))
							{
								func_220(vLocal_390[iVar0]);
								func_1725(uLocal_465[iVar0], 31);
							}
						}
					}
					break;
				case 17:
					if (func_888(vLocal_390[iVar0]) >= &fLocal_327[iVar0])
					{
						if (_get_ped_crouch_movement(&(iLocal_103[iVar0])))
						{
							_set_ped_crouch_movement(&(iLocal_103[iVar0]), false, 0, false);
						}
						set_blocking_of_non_temporary_events(&(iLocal_103[iVar0]), true);
						open_sequence_task(&iLocal_61);
						if (iVar0 == 4)
						{
							task_follow_nav_mesh_to_coord(0, func_388(5, 9), 2f, 20000, 1f, 0, 40000f);
						}
						else if (iVar0 == 5)
						{
							task_follow_nav_mesh_to_coord(0, func_388(5, 10), 2f, 20000, 1f, 0, 40000f);
						}
						else if (iVar0 == 6)
						{
							task_follow_nav_mesh_to_coord(0, func_388(5, 11), 2f, 20000, 1f, 0, 40000f);
						}
						else if (iVar0 == 7)
						{
							task_follow_nav_mesh_to_coord(0, func_388(5, 12), 2f, 20000, 1f, 0, 40000f);
						}
						task_aim_at_entity(0, Global_35, -1, 1, 0);
						close_sequence_task(iLocal_61);
						task_perform_sequence(&(iLocal_103[iVar0]), iLocal_61);
						clear_sequence_task(&iLocal_61);
						func_220(vLocal_390[iVar0]);
						func_1725(uLocal_465[iVar0], 18);
					}
					break;
				case 18:
					break;
				case 31:
					func_1726(iLocal_103[iVar0], uLocal_70[iVar0], 1);
					if (_get_ped_crouch_movement(&(iLocal_103[iVar0])))
					{
						_set_ped_crouch_movement(&(iLocal_103[iVar0]), false, 0, false);
					}
					set_blocking_of_non_temporary_events(&(iLocal_103[iVar0]), true);
					open_sequence_task(&iLocal_61);
					if (iVar0 == 0)
					{
						task_follow_nav_mesh_to_coord(0, func_388(5, 5), 2f, 20000, 1f, 0, 40000f);
					}
					task_set_crouch_movement(0, true, 0, false);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_103[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					func_220(vLocal_390[iVar0]);
					func_1725(uLocal_465[iVar0], 3);
					break;
				case 3:
					break;
				case 35:
					break;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(iLocal_112[iVar0])))
		{
			switch (&uLocal_474[iVar0])
			{
				case 0:
					func_220(vLocal_415[iVar0]);
					func_1725(uLocal_474[iVar0], 3);
					break;
				case 3:
					break;
				case 35:
					break;
			}
		}
		iVar0++;
	}
}

void func_1287(char[4] cParam0)
{
	if (!is_entity_dead(cParam0->f_5408))
	{
		if (&iLocal_163[65])
		{
			if (func_888(&uLocal_364) >= 8f)
			{
				iLocal_163[65] = 0;
				set_ped_config_flag(cParam0->f_5408, 254, false);
			}
		}
		switch (iVar453)
		{
			case 0:
				iLocal_163[65] = 1;
				set_ped_config_flag(cParam0->f_5408, 254, true);
				func_220(&uLocal_364);
				if (has_ped_got_weapon(cParam0->f_5408, 36703333, 0, false))
				{
					set_current_ped_weapon(cParam0->f_5408, 36703333, false, 0, false, false);
				}
				if (has_ped_got_weapon(cParam0->f_5408, 13903789, 0, false))
				{
					set_current_ped_weapon(cParam0->f_5408, 13903789, false, 1, false, false);
				}
				set_ped_relationship_group_hash(get_ped_index_from_entity_index(cParam0->f_5408), -1538724068);
				remove_ped_defensive_area(cParam0->f_5408, false);
				if (!get_ped_config_flag(cParam0->f_5408, 167, true))
				{
					set_ped_config_flag(cParam0->f_5408, 167, true);
				}
				func_1733(cParam0->f_5408, &iLocal_95);
				func_1733(cParam0->f_5408, &iLocal_98);
				set_blocking_of_non_temporary_events(cParam0->f_5408, true);
				task_follow_entity_along_waypoint_recording_at_offset(cParam0->f_5408, iLocal_144, "utopia2_follow_coach", 0f, -19f, 0, 4204040, -1, 1);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 9);
				break;
			case 9:
				break;
			case 69:
				break;
		}
	}
}

void func_1288(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (iVar452 < 6)
		{
		}
		switch (iVar452)
		{
			case 0:
				func_220(&uLocal_358);
				func_897(&uLocal_455, 1);
				break;
			case 1:
				if (&iLocal_163[49])
				{
					func_220(&uLocal_358);
					func_897(&uLocal_455, 5);
				}
				break;
			case 5:
				if (iLocal_163[58] || func_888(&uLocal_358) >= 4f)
				{
					if (does_cam_exist(iLocal_60))
					{
						if (is_cam_rendering(iLocal_60))
						{
							render_script_cams(false, false, 3000, true, false, 0);
							set_cam_active(iLocal_60, false);
							destroy_cam(iLocal_60, false);
						}
					}
					if (&iLocal_163[1])
					{
						iLocal_163[1] = 0;
						set_player_control(get_player_index(), true, 0, false);
					}
					func_220(&uLocal_358);
					func_897(&uLocal_455, 6);
				}
				break;
			case 6:
				break;
		}
	}
}

float func_1289(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_1290(bool bParam0)
{
	vVar0 = { -1188.6f, -5.1f, 42.8f };
	vVar3 = { -4.5f, 0f, -129.4f };
	fVar6 = 50f;
	if (!is_entity_dead(iLocal_144))
	{
		if (!is_vehicle_visible(iLocal_144) || !func_874(Global_35, iLocal_144, 65f, 1))
		{
			if (!does_cam_exist(iLocal_60))
			{
				iLocal_60 = create_camera_with_params(26379945, vVar0, vVar3, fVar6, bParam0, 2);
			}
			if (does_cam_exist(iLocal_60))
			{
				if (!is_cam_rendering(iLocal_60))
				{
					render_script_cams(true, false, 3000, true, false, 0);
				}
			}
			iLocal_163[1] = 1;
			set_player_control(get_player_index(), false, 0, false);
		}
	}
}

void func_1291(char[4] cParam0, int iParam1, int iParam2)
{
	func_1498(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1292(char[4] cParam0, bool bParam1)
{
	if (!is_entity_dead(iLocal_144))
	{
		if (!is_entity_dead(cParam0->f_5408))
		{
			set_blocking_of_non_temporary_events(cParam0->f_5408, true);
			if (bParam1)
			{
				fVar0 = 5f;
			}
			else
			{
				fVar0 = 8f;
			}
			iLocal_271 = 1;
			_task_vehicle_drive_to_destination(cParam0->f_5408, iLocal_144, func_388(10, 2), fVar0, 262144, 3, 5f, 5f, 0);
		}
		if (!is_entity_dead(iLocal_94))
		{
			if (_get_rider_of_mount(iLocal_94, false) == 0)
			{
				set_blocking_of_non_temporary_events(iLocal_94, false);
				open_sequence_task(&iLocal_61);
				task_stand_still(0, 3000);
				task_follow_entity_along_waypoint_recording_at_offset(0, iLocal_144, "utopia2_follow_coach", -0.3f, -16f, 0, 4195338, -1, 0);
				task_stand_still(0, -1);
				close_sequence_task(iLocal_61);
				task_perform_sequence(iLocal_94, iLocal_61);
				clear_sequence_task(&iLocal_61);
			}
		}
		if (!is_entity_dead(cParam0->f_5411))
		{
			if (_get_rider_of_mount(cParam0->f_5411, false) == 0)
			{
				if (get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35)
				{
					set_blocking_of_non_temporary_events(cParam0->f_5411, false);
					open_sequence_task(&iLocal_61);
					task_stand_still(0, 2000);
					task_follow_entity_along_waypoint_recording_at_offset(0, iLocal_144, "utopia2_follow_coach", 0.6f, -13f, 0, 4194314, -1, 0);
					task_stand_still(0, -1);
					close_sequence_task(iLocal_61);
					task_perform_sequence(cParam0->f_5411, iLocal_61);
					clear_sequence_task(&iLocal_61);
				}
				else if (_get_rider_of_mount(iLocal_94, false) == Global_35)
				{
					set_blocking_of_non_temporary_events(cParam0->f_5411, false);
					open_sequence_task(&iLocal_61);
					task_stand_still(0, 2000);
					task_follow_entity_along_waypoint_recording_at_offset(0, iLocal_144, "utopia2_follow_coach", 0.6f, -13f, 0, 4194314, -1, 0);
					task_stand_still(0, -1);
					close_sequence_task(iLocal_61);
					task_perform_sequence(cParam0->f_5411, iLocal_61);
					clear_sequence_task(&iLocal_61);
				}
			}
		}
	}
}

void func_1293(var uParam0, int iParam1, int iParam2)
{
	task_whistle_anim(uParam0, iParam1, iParam2);
}

void func_1294(int iParam0, var uParam1)
{
	iVar0 = *iParam0;
	if (iVar0 > *uParam1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (is_entity_dead(iParam0[iVar1]))
		{
			func_463((*uParam1)[iVar1]);
		}
		iVar1++;
	}
}

void func_1295(char[4] cParam0)
{
	if (func_1315(cParam0) > 0 && func_1315(cParam0) < 51)
	{
	}
	if (func_1315(cParam0) >= 4)
	{
		if (bVar595)
		{
			if (func_1707(cParam0, 6, "utopia2_follow_coach", 35f, 90f, 0, 0, 1, 1117126656, 422991367))
			{
				if (!&iLocal_247[1])
				{
					iLocal_247[1] = 1;
				}
			}
			else if (&iLocal_247[1])
			{
				iLocal_247[1] = 0;
			}
		}
		else if (func_1738(cParam0, iLocal_144, "UTP2_COACH_RETURN", "UTP2_COACH_FAIL", 125f, 250f, 0, 0, 1, 422991367, 1))
		{
			if (!&iLocal_247[1])
			{
				iLocal_247[1] = 1;
			}
		}
		else if (&iLocal_247[1])
		{
			iLocal_247[1] = 0;
		}
		if (bVar594)
		{
			if (!&iLocal_237[3])
			{
				iLocal_237[3] = 1;
				if (func_166(&uVar0))
				{
					func_1709(cParam0, "UTP2_BDANA", 0);
				}
			}
		}
	}
	if (&iLocal_163[18])
	{
		if (!&iLocal_237[8])
		{
			iLocal_237[8] = 1;
			if (!is_entity_dead(iLocal_94))
			{
				play_animal_vocalization(iLocal_94, "WHINNY_SHORT", false);
			}
		}
	}
	switch (func_1315(cParam0))
	{
		case 0:
			if (!does_blip_exist(iLocal_93))
			{
				if (!is_entity_dead(iLocal_144))
				{
					iLocal_93 = func_1740(408396114, iLocal_144, 1);
					set_blip_name_from_text_file(iLocal_93, "BLIP_PROC_COACH");
				}
			}
			iLocal_595 = 1;
			func_1259(cParam0, "UTP2_OBJ04a", -1082130432, 0, 0, -1, -1, 0);
			func_220(&uLocal_349);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_874(Global_35, cParam0->f_5408, 60f, 1))
			{
				func_1709(cParam0, "UTP2_OBJ04a", 0);
			}
			func_220(&uLocal_349);
			func_135(cParam0, 2);
			break;
		case 2:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 3);
			}
			else if (func_213())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 3:
			if (func_888(&uLocal_349) >= 1f)
			{
				func_1710(cParam0, "UTP2_OBJ04a", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			else if (&iLocal_163[17])
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			else if (func_213())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 10:
			func_1259(cParam0, "UTP2_OBJ04c", -1082130432, 0, 0, -1, -1, 0);
			func_1709(cParam0, "UTP2_ONFAST", 0);
			func_220(&uLocal_349);
			func_135(cParam0, 11);
			break;
		case 11:
			if (!func_1278())
			{
				iLocal_163[19] = 1;
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 15:
			func_1259(cParam0, "UTP2_OBJ04c", -1082130432, 0, 0, -1, -1, 0);
			func_220(&uLocal_349);
			func_135(cParam0, 51);
			break;
		case 20:
			func_1259(cParam0, "UTP2_OBJ04c", -1082130432, 0, 0, -1, -1, 0);
			if ((iLocal_163[17] && bVar595) && !bVar597)
			{
				iLocal_600 = 1;
				func_1709(cParam0, "UTP2_IG4_BACKON", 0);
			}
			func_220(&uLocal_349);
			func_135(cParam0, 21);
			break;
		case 21:
			if (!func_1278())
			{
				if (_0xf01c570e0a0a1e67("UTP2_BANT04"))
				{
					restart_scripted_conversation("UTP2_BANT04");
				}
				func_220(&uLocal_349);
				func_135(cParam0, 22);
			}
			break;
		case 22:
			if (func_888(&uLocal_349) >= 1f)
			{
				func_220(&uLocal_349);
				func_135(cParam0, 23);
			}
			break;
		case 23:
			if (func_888(&uLocal_349) >= 1f)
			{
				func_220(&uLocal_349);
				func_135(cParam0, 24);
			}
			break;
		case 24:
			if (!func_213())
			{
				if (&iLocal_163[33])
				{
					func_220(&uLocal_349);
					func_135(cParam0, 51);
				}
				else
				{
					func_220(&uLocal_349);
					func_135(cParam0, 25);
				}
			}
			break;
		case 25:
			if (func_888(&uLocal_349) >= 2f)
			{
				if (!func_213())
				{
					if (get_ped_in_vehicle_seat(iLocal_144, -1) == cParam0->f_5408)
					{
						if (iVar453 == 54)
						{
							if (get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35 || is_ped_on_mount(Global_35))
							{
								if (func_874(Global_35, cParam0->f_5408, 45f, 1))
								{
									if (!&iLocal_163[33])
									{
										iLocal_163[33] = 1;
										func_1709(cParam0, "UTP2_BANT04", 0);
									}
									func_220(&uLocal_349);
									func_135(cParam0, 26);
								}
							}
						}
					}
				}
			}
			break;
		case 26:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 40:
			func_1259(cParam0, "UTP2_OBJ04a", -1082130432, 0, 0, -1, -1, 0);
			if (_0x1ecc76792f661cf5("UTP2_BANT04"))
			{
				pause_scripted_conversation("UTP2_BANT04", false, true, false, true);
			}
			if (!does_blip_exist(iLocal_93))
			{
				if (!is_entity_dead(iLocal_144))
				{
					iLocal_93 = func_1740(408396114, iLocal_144, 1);
					set_blip_name_from_text_file(iLocal_93, "BLIP_PROC_COACH");
				}
			}
			func_220(&uLocal_349);
			func_135(cParam0, 41);
			break;
		case 41:
			if (!func_213())
			{
				if (!func_1278())
				{
					func_1741(cParam0, &iLocal_309);
					func_220(&uLocal_349);
					func_135(cParam0, 42);
				}
			}
			break;
		case 42:
			if (!func_1278())
			{
				if (!bVar592)
				{
					func_220(&uLocal_349);
					func_135(cParam0, 3);
				}
				else
				{
					func_220(&uLocal_349);
					func_135(cParam0, 51);
				}
			}
			break;
		case 45:
			if (!func_213())
			{
				if (!func_1278())
				{
					func_1741(cParam0, &iLocal_309);
					func_220(&uLocal_349);
					func_135(cParam0, 46);
				}
			}
			break;
		case 46:
			if (!func_1278())
			{
				iLocal_268 = 0;
				func_220(&uLocal_449);
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1296(char[4] cParam0)
{
	if (!is_entity_dead(iLocal_144))
	{
		switch (iVar485)
		{
			case 0:
				if (!func_8(cParam0, 8))
				{
					func_220(&uLocal_367);
					func_899(&uLocal_488, 3);
				}
				else
				{
					func_220(&uLocal_367);
					func_899(&uLocal_488, 17);
				}
				break;
			case 17:
				if (get_entity_speed(iLocal_144) <= 1.75f)
				{
					iLocal_163[27] = 1;
					func_220(&uLocal_367);
					func_899(&uLocal_488, 2);
				}
				else if (func_888(&uLocal_367) >= 20f)
				{
					iLocal_163[27] = 1;
					func_220(&uLocal_367);
					func_899(&uLocal_488, 2);
				}
				else
				{
					iLocal_163[27] = 0;
				}
				break;
			case 2:
				if (iVar453 == 54)
				{
					func_220(&uLocal_367);
					func_899(&uLocal_488, 3);
				}
				break;
			case 3:
				break;
			case 20:
				break;
		}
	}
}

void func_1297(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(iLocal_95[iVar0])))
		{
			switch (&uLocal_457[iVar0])
			{
				case 0:
					func_220(vLocal_370[iVar0]);
					func_1725(uLocal_457[iVar0], 33);
					break;
				case 33:
					set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_95[iVar0])), 1269650476);
					set_ped_flee_attributes(&(iLocal_95[iVar0]), 2, false);
					set_blocking_of_non_temporary_events(&(iLocal_95[iVar0]), false);
					open_sequence_task(&iLocal_61);
					task_set_blocking_of_non_temporary_events(0, true);
					task_smart_flee_ped(0, Global_35, 350f, 120000, 0, 1077936128, 0);
					task_set_blocking_of_non_temporary_events(0, false);
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_95[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					if (!_0x5102307ce88798eb(&(iLocal_95[iVar0])))
					{
						request_ped_visibility_tracking(&(iLocal_95[iVar0]));
					}
					func_220(vLocal_370[iVar0]);
					func_1725(uLocal_457[iVar0], 34);
					break;
				case 34:
					break;
				case 35:
					break;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_entity_dead(&(iLocal_98[iVar0])))
		{
			switch (&uLocal_460[iVar0])
			{
				case 0:
					func_220(vLocal_377[iVar0]);
					func_1725(uLocal_460[iVar0], 33);
					break;
				case 33:
					set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_98[iVar0])), 1269650476);
					set_ped_flee_attributes(&(iLocal_98[iVar0]), 2, false);
					set_blocking_of_non_temporary_events(&(iLocal_98[iVar0]), false);
					open_sequence_task(&iLocal_61);
					task_set_blocking_of_non_temporary_events(0, true);
					task_smart_flee_ped(0, Global_35, 350f, 120000, 0, 1077936128, 0);
					task_set_blocking_of_non_temporary_events(0, false);
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_98[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					if (!_0x5102307ce88798eb(&(iLocal_98[iVar0])))
					{
						request_ped_visibility_tracking(&(iLocal_98[iVar0]));
					}
					func_220(vLocal_377[iVar0]);
					func_1725(uLocal_460[iVar0], 34);
					break;
				case 34:
					break;
				case 35:
					break;
			}
		}
		iVar0++;
	}
}

void func_1298(char[4] cParam0)
{
	if (!is_entity_dead(cParam0->f_5408))
	{
		switch (iVar453)
		{
			case 0:
				iLocal_163[65] = 0;
				set_ped_config_flag(cParam0->f_5408, 254, false);
				set_ped_relationship_group_hash(get_ped_index_from_entity_index(cParam0->f_5408), -1538724068);
				remove_ped_defensive_area(cParam0->f_5408, false);
				if (!func_8(cParam0, 8))
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 54);
				}
				else if (&iLocal_163[27])
				{
					if (func_874(cParam0->f_5408, iLocal_144, 10f, 1))
					{
						func_220(&uLocal_361);
						func_898(&uLocal_456, 2);
					}
					else
					{
						set_blocking_of_non_temporary_events(cParam0->f_5408, true);
						open_sequence_task(&iLocal_61);
						if (func_874(cParam0->f_5408, iLocal_144, (2f * 10f), 1))
						{
							task_go_to_entity(0, iLocal_144, 25000, 10f, 1.75f, (20f - 5f), 0);
						}
						else
						{
							task_go_to_entity(0, iLocal_144, 25000, 10f, 2.5f, 20f, 0);
						}
						close_sequence_task(iLocal_61);
						task_perform_sequence(cParam0->f_5408, iLocal_61);
						clear_sequence_task(&iLocal_61);
						func_220(&uLocal_361);
						func_898(&uLocal_456, 62);
					}
				}
				break;
			case 62:
				if (func_888(&uLocal_361) >= 25f)
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 2);
				}
				else if (get_script_task_status(cParam0->f_5408, 242628503, true) == 1)
				{
				}
				else if (get_script_task_status(cParam0->f_5408, 242628503, true) == 8)
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 2);
				}
				break;
			case 2:
				if (has_ped_got_weapon(cParam0->f_5408, 36703333, 0, false))
				{
					set_current_ped_weapon(cParam0->f_5408, 36703333, false, 2, false, false);
				}
				if (has_ped_got_weapon(cParam0->f_5408, 13903789, 0, false))
				{
					set_current_ped_weapon(cParam0->f_5408, 13903789, false, 3, false, false);
				}
				_hide_ped_weapons(cParam0->f_5408, 2, true);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 3);
				break;
			case 3:
				if (func_888(&uLocal_361) >= 0.5f)
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 6);
				}
				break;
			case 6:
				iLocal_597 = 1;
				if (func_169(6))
				{
					func_171(6, func_170(6), 0);
				}
				func_220(&uLocal_361);
				func_898(&uLocal_456, 7);
				break;
			case 7:
				if (func_888(&uLocal_361) >= 0.5f)
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 49);
				}
				break;
			case 49:
				if (get_ped_config_flag(cParam0->f_5408, 167, true))
				{
					set_ped_config_flag(cParam0->f_5408, 167, false);
				}
				if (!get_ped_config_flag(cParam0->f_5408, 135, true))
				{
					set_ped_config_flag(cParam0->f_5408, 135, true);
				}
				set_blocking_of_non_temporary_events(cParam0->f_5408, true);
				open_sequence_task(&iLocal_61);
				task_dismount_animal(0, 4096, 0, 0, 0, 0);
				task_swap_weapon(0, 0, 0, 0, 0);
				task_enter_vehicle(0, iLocal_144, 15000, -1, 2f, 1, 0);
				close_sequence_task(iLocal_61);
				task_perform_sequence(cParam0->f_5408, iLocal_61);
				clear_sequence_task(&iLocal_61);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 50);
				break;
			case 50:
				if (get_ped_in_vehicle_seat(iLocal_144, -1) == Global_35 && get_ped_in_vehicle_seat(iLocal_144, 0) == cParam0->f_5408)
				{
					if (get_script_task_status(Global_35, -828834893, true) == 8)
					{
						clear_ped_tasks_immediately(Global_35, false, true);
						task_leave_any_vehicle(Global_35, 0, 0);
					}
				}
				if (get_script_task_status(cParam0->f_5408, 242628503, true) == 1)
				{
				}
				else if (get_script_task_status(cParam0->f_5408, 242628503, true) == 8)
				{
					if (!is_ped_on_mount(cParam0->f_5408))
					{
						if (get_ped_in_vehicle_seat(iLocal_144, -1) == cParam0->f_5408)
						{
							iLocal_163[13] = 1;
							if (!func_122(-1471716628))
							{
								func_601(-1471716628);
							}
							if (!&iLocal_163[16] && !&iLocal_163[14])
							{
								func_220(&uLocal_361);
								func_898(&uLocal_456, 15);
							}
							else
							{
								func_220(&uLocal_361);
								func_898(&uLocal_456, 69);
							}
						}
						else
						{
							if (get_ped_in_vehicle_seat(iLocal_144, -1) == Global_35)
							{
							}
							if (get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35)
							{
							}
							if (!is_ped_in_vehicle(cParam0->f_5408, iLocal_144, false))
							{
								if (iVar553 < 2)
								{
									open_sequence_task(&iLocal_61);
									task_stand_still(0, 1000);
									task_enter_vehicle(0, iLocal_144, 15000, -1, 2f, 1, 0);
									close_sequence_task(iLocal_61);
									task_perform_sequence(cParam0->f_5408, iLocal_61);
									clear_sequence_task(&iLocal_61);
									uLocal_556 = iVar553 + 1;
								}
								else if (!get_ped_in_vehicle_seat(iLocal_144, -1) == Global_35)
								{
									func_468(&iLocal_95, 0);
									set_ped_into_vehicle(cParam0->f_5408, iLocal_144, -1);
									func_220(&uLocal_361);
								}
							}
						}
					}
					else
					{
						func_220(&uLocal_361);
					}
				}
				break;
			case 15:
				if (func_888(&uLocal_361) >= 1f)
				{
					if (_does_anim_scene_exist(&(iLocal_310[0])))
					{
						if (_is_anim_scene_loaded(&(iLocal_310[0]), true, false))
						{
							set_current_ped_weapon(cParam0->f_5408, -1569615261, true, 0, false, false);
							set_current_ped_weapon(cParam0->f_5408, -1569615261, true, 1, false, false);
							StringCopy(&cLocal_342, "pl_base", 32);
							func_1282(cParam0, 0);
							func_220(&uLocal_361);
							func_898(&uLocal_456, 16);
						}
					}
				}
				if (func_888(&uLocal_361) >= 45f)
				{
					func_469(0);
					func_220(&uLocal_361);
					func_898(&uLocal_456, 69);
				}
				break;
			case 16:
				if (func_888(&uLocal_361) >= 10f)
				{
					if (_does_anim_scene_exist(&(iLocal_310[0])))
					{
						if (_is_anim_scene_loaded(&(iLocal_310[0]), true, false))
						{
							if (_is_anim_scene_started(&(iLocal_310[0]), false))
							{
								if (_0x1f0e401031e20146(&(iLocal_310[0]), &cLocal_342))
								{
									if (func_1742(Global_35, _get_object_offset_from_coords(get_entity_coords(iLocal_144, true, false), get_entity_heading(iLocal_144), 0f, 2.7f, 0f), get_entity_heading(iLocal_144), 1065353216))
									{
										StringCopy(&cLocal_342, "pl_line_YouGettinOn_front", 32);
									}
									else if (func_1743(Global_35, get_entity_coords(iLocal_144, true, false), get_entity_heading(iLocal_144), 1065353216))
									{
										StringCopy(&cLocal_342, "pl_line_YouGettinOn_right", 32);
									}
									else
									{
										StringCopy(&cLocal_342, "pl_line_YouGettinOn_left", 32);
									}
									_set_anim_scene_playback_list_bool(&(iLocal_310[0]), &cLocal_342, true);
									func_220(&uLocal_361);
									func_898(&uLocal_456, 18);
								}
							}
						}
					}
				}
				if (func_888(&uLocal_361) >= 45f)
				{
					func_469(0);
					func_220(&uLocal_361);
					func_898(&uLocal_456, 69);
				}
				break;
			case 18:
				if (func_888(&uLocal_361) >= 10f)
				{
					if (_does_anim_scene_exist(&(iLocal_310[0])))
					{
						if (_is_anim_scene_loaded(&(iLocal_310[0]), true, false))
						{
							if (_is_anim_scene_started(&(iLocal_310[0]), false))
							{
								if (_0x1f0e401031e20146(&(iLocal_310[0]), &cLocal_342))
								{
									if (_0xa9016536015de29d(&(iLocal_310[0]), "pl_line_ComeOn_front"))
									{
										if (!_0x23e33cb9f4a3f547(&(iLocal_310[0]), "pl_line_ComeOn_front"))
										{
											_0xdf7b5144e25cd3fe(&(iLocal_310[0]), "pl_line_ComeOn_front");
										}
									}
									if (_0xa9016536015de29d(&(iLocal_310[0]), "pl_line_ComeOn_left"))
									{
										if (!_0x23e33cb9f4a3f547(&(iLocal_310[0]), "pl_line_ComeOn_left"))
										{
											_0xdf7b5144e25cd3fe(&(iLocal_310[0]), "pl_line_ComeOn_left");
										}
									}
									if (_0xa9016536015de29d(&(iLocal_310[0]), "pl_line_ComeOn_right"))
									{
										if (!_0x23e33cb9f4a3f547(&(iLocal_310[0]), "pl_line_ComeOn_right"))
										{
											_0xdf7b5144e25cd3fe(&(iLocal_310[0]), "pl_line_ComeOn_right");
										}
									}
									if (func_1742(Global_35, _get_object_offset_from_coords(get_entity_coords(iLocal_144, true, false), get_entity_heading(iLocal_144), 0f, 2.7f, 0f), get_entity_heading(iLocal_144), 1065353216))
									{
										StringCopy(&cLocal_342, "pl_line_ComeOnMorgan_front", 32);
									}
									else if (func_1743(Global_35, get_entity_coords(iLocal_144, true, false), get_entity_heading(iLocal_144), 1065353216))
									{
										StringCopy(&cLocal_342, "pl_line_ComeOnMorgan_right", 32);
									}
									else
									{
										StringCopy(&cLocal_342, "pl_line_ComeOnMorgan_left", 32);
									}
									_set_anim_scene_playback_list_bool(&(iLocal_310[0]), &cLocal_342, true);
									func_220(&uLocal_361);
									func_898(&uLocal_456, 20);
								}
							}
						}
					}
				}
				if (func_888(&uLocal_361) >= 45f)
				{
					func_469(0);
					func_220(&uLocal_361);
					func_898(&uLocal_456, 69);
				}
				break;
			case 20:
				if (func_888(&uLocal_361) >= 10f)
				{
					if (_does_anim_scene_exist(&(iLocal_310[0])))
					{
						if (_is_anim_scene_loaded(&(iLocal_310[0]), true, false))
						{
							if (_is_anim_scene_started(&(iLocal_310[0]), false))
							{
								if (_0x1f0e401031e20146(&(iLocal_310[0]), &cLocal_342))
								{
									if (_0xa9016536015de29d(&(iLocal_310[0]), "pl_line_WhatTheHell_front"))
									{
										if (!_0x23e33cb9f4a3f547(&(iLocal_310[0]), "pl_line_WhatTheHell_front"))
										{
											_0xdf7b5144e25cd3fe(&(iLocal_310[0]), "pl_line_WhatTheHell_front");
										}
									}
									if (_0xa9016536015de29d(&(iLocal_310[0]), "pl_line_WhatTheHell_left"))
									{
										if (!_0x23e33cb9f4a3f547(&(iLocal_310[0]), "pl_line_WhatTheHell_left"))
										{
											_0xdf7b5144e25cd3fe(&(iLocal_310[0]), "pl_line_WhatTheHell_left");
										}
									}
									if (_0xa9016536015de29d(&(iLocal_310[0]), "pl_line_WhatTheHell_right"))
									{
										if (!_0x23e33cb9f4a3f547(&(iLocal_310[0]), "pl_line_WhatTheHell_right"))
										{
											_0xdf7b5144e25cd3fe(&(iLocal_310[0]), "pl_line_WhatTheHell_right");
										}
									}
									if (func_1742(Global_35, _get_object_offset_from_coords(get_entity_coords(iLocal_144, true, false), get_entity_heading(iLocal_144), 0f, 2.7f, 0f), get_entity_heading(iLocal_144), 1065353216))
									{
										StringCopy(&cLocal_342, "pl_line_ComeOn_front", 32);
									}
									else if (func_1743(Global_35, get_entity_coords(iLocal_144, true, false), get_entity_heading(iLocal_144), 1065353216))
									{
										StringCopy(&cLocal_342, "pl_line_ComeOn_right", 32);
									}
									else
									{
										StringCopy(&cLocal_342, "pl_line_ComeOn_left", 32);
									}
									_set_anim_scene_playback_list_bool(&(iLocal_310[0]), &cLocal_342, true);
									func_220(&uLocal_361);
									func_898(&uLocal_456, 22);
								}
							}
						}
					}
				}
				if (func_888(&uLocal_361) >= 45f)
				{
					func_469(0);
					func_220(&uLocal_361);
					func_898(&uLocal_456, 69);
				}
				break;
			case 22:
				if (func_888(&uLocal_361) >= 10f)
				{
					if (_does_anim_scene_exist(&(iLocal_310[0])))
					{
						if (_is_anim_scene_loaded(&(iLocal_310[0]), true, false))
						{
							if (_is_anim_scene_started(&(iLocal_310[0]), false))
							{
								if (_0x1f0e401031e20146(&(iLocal_310[0]), &cLocal_342))
								{
									if (_0xa9016536015de29d(&(iLocal_310[0]), "pl_line_DevilBe_front"))
									{
										if (!_0x23e33cb9f4a3f547(&(iLocal_310[0]), "pl_line_DevilBe_front"))
										{
											_0xdf7b5144e25cd3fe(&(iLocal_310[0]), "pl_line_DevilBe_front");
										}
									}
									if (_0xa9016536015de29d(&(iLocal_310[0]), "pl_line_DevilBe_left"))
									{
										if (!_0x23e33cb9f4a3f547(&(iLocal_310[0]), "pl_line_DevilBe_left"))
										{
											_0xdf7b5144e25cd3fe(&(iLocal_310[0]), "pl_line_DevilBe_left");
										}
									}
									if (_0xa9016536015de29d(&(iLocal_310[0]), "pl_line_DevilBe_right"))
									{
										if (!_0x23e33cb9f4a3f547(&(iLocal_310[0]), "pl_line_DevilBe_right"))
										{
											_0xdf7b5144e25cd3fe(&(iLocal_310[0]), "pl_line_DevilBe_right");
										}
									}
									if (func_1742(Global_35, _get_object_offset_from_coords(get_entity_coords(iLocal_144, true, false), get_entity_heading(iLocal_144), 0f, 2.7f, 0f), get_entity_heading(iLocal_144), 1065353216))
									{
										StringCopy(&cLocal_342, "pl_line_WhatTheHell_front", 32);
									}
									else if (func_1743(Global_35, get_entity_coords(iLocal_144, true, false), get_entity_heading(iLocal_144), 1065353216))
									{
										StringCopy(&cLocal_342, "pl_line_WhatTheHell_right", 32);
									}
									else
									{
										StringCopy(&cLocal_342, "pl_line_WhatTheHell_left", 32);
									}
									_set_anim_scene_playback_list_bool(&(iLocal_310[0]), &cLocal_342, true);
									func_220(&uLocal_361);
									func_898(&uLocal_456, 24);
								}
							}
						}
					}
				}
				if (func_888(&uLocal_361) >= 45f)
				{
					func_469(0);
					func_220(&uLocal_361);
					func_898(&uLocal_456, 69);
				}
				break;
			case 24:
				if (func_888(&uLocal_361) >= 10f)
				{
					if (_does_anim_scene_exist(&(iLocal_310[0])))
					{
						if (_is_anim_scene_loaded(&(iLocal_310[0]), true, false))
						{
							if (_is_anim_scene_started(&(iLocal_310[0]), false))
							{
								if (_0x1f0e401031e20146(&(iLocal_310[0]), &cLocal_342))
								{
									if (func_1742(Global_35, _get_object_offset_from_coords(get_entity_coords(iLocal_144, true, false), get_entity_heading(iLocal_144), 0f, 2.7f, 0f), get_entity_heading(iLocal_144), 1065353216))
									{
										StringCopy(&cLocal_342, "pl_line_DevilBe_front", 32);
									}
									else if (func_1743(Global_35, get_entity_coords(iLocal_144, true, false), get_entity_heading(iLocal_144), 1065353216))
									{
										StringCopy(&cLocal_342, "pl_line_DevilBe_right", 32);
									}
									else
									{
										StringCopy(&cLocal_342, "pl_line_DevilBe_left", 32);
									}
									_set_anim_scene_playback_list_bool(&(iLocal_310[0]), &cLocal_342, true);
									func_220(&uLocal_361);
									func_898(&uLocal_456, 26);
								}
							}
						}
					}
				}
				if (func_888(&uLocal_361) >= 45f)
				{
					func_469(0);
					func_220(&uLocal_361);
					func_898(&uLocal_456, 69);
				}
				break;
			case 26:
				if (_does_anim_scene_exist(&(iLocal_310[0])))
				{
					if (_is_anim_scene_loaded(&(iLocal_310[0]), true, false))
					{
						if (_is_anim_scene_started(&(iLocal_310[0]), false))
						{
							if (_0x1f0e401031e20146(&(iLocal_310[0]), &cLocal_342))
							{
								if (_0x8d81e7824b7753f7(&(iLocal_310[0]), "s_base", 1))
								{
									func_469(0);
									func_220(&uLocal_361);
									func_898(&uLocal_456, 69);
								}
							}
						}
					}
				}
				if (func_888(&uLocal_361) >= 45f)
				{
					func_469(0);
					func_220(&uLocal_361);
					func_898(&uLocal_456, 69);
				}
				break;
			case 27:
				if (&iLocal_163[19])
				{
					if (_does_anim_scene_exist(&(iLocal_310[1])))
					{
						if (_is_anim_scene_loaded(&(iLocal_310[1]), true, false))
						{
							_0x31160ec47e7c9549(iLocal_144, 3);
							if (!&iLocal_163[15])
							{
								if (!_0x1d46b417f926d34d(Global_35) && is_ped_in_vehicle(Global_35, iLocal_144, false))
								{
									_hide_ped_weapons(Global_35, 2, false);
									iLocal_163[15] = 1;
								}
							}
							if (&iLocal_163[14])
							{
								if (&iLocal_163[17])
								{
									if (&iLocal_163[15])
									{
										if (func_1087(Global_35, 0, 1, 0) == -1569615261 && func_1087(Global_35, 1, 1, 0) == -1569615261)
										{
											if ((is_ped_in_vehicle(Global_35, iLocal_144, false) && get_ped_in_vehicle_seat(iLocal_144, 0) == Global_35) && !get_seat_ped_is_trying_to_enter(Global_35) == 0)
											{
												StringCopy(&cLocal_342, "pl_Come_On_Boy", 32);
												if (!func_122(-1471716628))
												{
													func_601(-1471716628);
												}
												func_1292(cParam0, 0);
												_set_anim_scene_playback_list_bool(&(iLocal_310[1]), &cLocal_342, true);
												func_1282(cParam0, 1);
												func_220(&uLocal_361);
												func_898(&uLocal_456, 32);
											}
										}
									}
								}
							}
							else
							{
								StringCopy(&cLocal_342, "pl_How_Long", 32);
								if (!func_122(-1471716628))
								{
									func_601(-1471716628);
								}
								_set_anim_scene_playback_list_bool(&(iLocal_310[1]), &cLocal_342, true);
								func_1282(cParam0, 1);
								func_220(&uLocal_361);
								func_898(&uLocal_456, 30);
							}
						}
					}
					if (func_888(&uLocal_361) >= 45f)
					{
						func_469(1);
						iLocal_163[20] = 1;
						func_220(&uLocal_361);
						func_898(&uLocal_456, 53);
					}
				}
				break;
			case 30:
				if (_does_anim_scene_exist(&(iLocal_310[1])))
				{
					if (_is_anim_scene_loaded(&(iLocal_310[1]), true, false))
					{
						if (_is_anim_scene_started(&(iLocal_310[1]), false))
						{
							if (_0x1f0e401031e20146(&(iLocal_310[1]), &cLocal_342))
							{
								if (_0x8d81e7824b7753f7(&(iLocal_310[1]), "s_Come_On_Boy", 1))
								{
									if (&iLocal_163[17])
									{
										func_1292(cParam0, 0);
										func_220(&uLocal_361);
										func_898(&uLocal_456, 32);
									}
								}
							}
						}
					}
				}
				break;
			case 32:
				if (!&iLocal_163[18])
				{
					if (func_888(&uLocal_361) >= 2.5f)
					{
						iLocal_163[18] = 1;
					}
				}
				if (!bVar268)
				{
					iLocal_271 = 1;
					_0x1d125814ebc517eb(iLocal_144, func_388(10, 2));
				}
				if (_does_anim_scene_exist(&(iLocal_310[1])))
				{
					if (_is_anim_scene_loaded(&(iLocal_310[1]), true, false))
					{
						if (_is_anim_scene_started(&(iLocal_310[1]), false))
						{
							if (_0x1f0e401031e20146(&(iLocal_310[1]), &cLocal_342))
							{
								if (!bVar596)
								{
									if (&iLocal_163[14])
									{
										if (has_anim_event_fired(Global_35, 1224598222))
										{
											iLocal_599 = 1;
											_0xcc9c4393523833e2(Global_35, -1471716628, 231465488);
											func_318(231465488, 30, 1, 0, 0, 752097756, 0, 0, 0, 0);
											func_654(-1471716628, 1, 0, 0, 1);
										}
									}
									else if (has_anim_event_fired(Global_35, 1224598222))
									{
										iLocal_599 = 1;
										_0xcc9c4393523833e2(Global_35, -1471716628, 231465488);
										func_318(231465488, 30, 1, 0, 0, 752097756, 0, 0, 0, 0);
										func_654(-1471716628, 1, 0, 0, 1);
									}
								}
								if (_0x8d81e7824b7753f7(&(iLocal_310[1]), "s_Here_You_Go", 1) && _get_anim_scene_progress(&(iLocal_310[1])) >= 0.9f)
								{
									func_469(1);
									iLocal_163[20] = 1;
									func_220(&uLocal_361);
									func_898(&uLocal_456, 54);
									_0x31160ec47e7c9549(iLocal_144, 1);
								}
							}
						}
					}
				}
				if (func_888(&uLocal_361) >= 45f)
				{
					func_469(1);
					iLocal_163[20] = 1;
					func_220(&uLocal_361);
					func_898(&uLocal_456, 54);
					_0x31160ec47e7c9549(iLocal_144, 1);
				}
				break;
			case 53:
				func_1292(cParam0, 0);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 54);
				break;
			case 55:
				iLocal_269 = 1;
				func_1292(cParam0, 1);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 54);
				break;
			case 54:
				if (!bVar268)
				{
					iLocal_271 = 1;
					_0x1d125814ebc517eb(iLocal_144, func_388(10, 2));
				}
				if (!bVar266)
				{
					if (is_entity_in_volume(cParam0->f_5408, Local_16.f_19, true, 0))
					{
					}
				}
				else if (!bVar267)
				{
					if (is_entity_in_volume(cParam0->f_5408, Local_16.f_20, true, 0))
					{
					}
				}
				if (&iLocal_163[35])
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 68);
				}
				break;
			case 68:
				if (!bVar593)
				{
					iLocal_596 = 1;
				}
				break;
			case 59:
				if (func_888(&uLocal_361) >= 0.5f)
				{
					if (!is_entity_dead(iLocal_144))
					{
						if (get_ped_in_vehicle_seat(iLocal_144, -1) == cParam0->f_5408)
						{
							set_blocking_of_non_temporary_events(cParam0->f_5408, true);
							task_vehicle_temp_action(cParam0->f_5408, iLocal_144, 24, 5000);
						}
					}
					if (!is_entity_dead(cParam0->f_5411))
					{
						clear_ped_tasks(cParam0->f_5411, 1, 0);
						set_blocking_of_non_temporary_events(cParam0->f_5411, false);
					}
					if (!is_entity_dead(iLocal_94))
					{
						clear_ped_tasks(iLocal_94, 1, 0);
						set_blocking_of_non_temporary_events(iLocal_94, false);
					}
					func_220(&uLocal_361);
					func_898(&uLocal_456, 60);
				}
				break;
			case 60:
				break;
			case 69:
				break;
		}
	}
}

void func_1299(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_1744((*iParam0)[iVar0], bParam1, iVar0);
		iVar0++;
	}
}

void func_1300(char[4] cParam0)
{
	if (func_1315(cParam0) > 0 && func_1315(cParam0) <= 51)
	{
		func_1721(cParam0);
	}
	if (func_1315(cParam0) >= 4)
	{
		if (func_1745(cParam0, 6, 75f, 150f, 0, 0, 1, 422991367))
		{
			if (!&iLocal_247[1])
			{
				iLocal_247[1] = 1;
			}
		}
		else if (&iLocal_247[1])
		{
			iLocal_247[1] = 0;
		}
	}
	switch (func_1315(cParam0))
	{
		case 0:
			func_1259(cParam0, "UTP2_OBJ04c", -1082130432, 0, 0, -1, -1, 0);
			func_220(&uLocal_349);
			func_135(cParam0, 1);
			break;
		case 1:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1301(char[4] cParam0)
{
	if (iVar486 > 0 && iVar486 < 11)
	{
	}
	switch (iVar486)
	{
		case 0:
			if (!func_8(cParam0, 8))
			{
			}
			func_220(&uLocal_352);
			func_901(&uLocal_489, 1);
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 11:
			break;
	}
	if (iVar487 > 0 && iVar487 < 11)
	{
	}
	switch (iVar487)
	{
		case 0:
			if (!func_8(cParam0, 8))
			{
			}
			func_220(&uLocal_355);
			func_901(&uLocal_490, 1);
			break;
		case 1:
			break;
		case 11:
			break;
	}
}

void func_1302(char[4] cParam0)
{
	if (!is_entity_dead(iLocal_144))
	{
	}
	switch (iVar485)
	{
		case 0:
			func_220(&uLocal_367);
			func_899(&uLocal_488, 3);
			break;
		case 3:
			if (&iLocal_163[49])
			{
				func_220(&uLocal_367);
				func_899(&uLocal_488, 12);
			}
			break;
		case 12:
			func_1282(cParam0, 4);
			func_220(&uLocal_367);
			func_899(&uLocal_488, 13);
			break;
		case 13:
			if (func_888(&uLocal_367) >= 2f)
			{
				if (!is_entity_dead(cParam0->f_5408))
				{
					set_blocking_of_non_temporary_events(cParam0->f_5408, true);
					task_leave_vehicle(cParam0->f_5408, iLocal_144, 4096, 0);
				}
				func_220(&uLocal_367);
				func_899(&uLocal_488, 14);
			}
			break;
		case 14:
			if (func_888(&uLocal_367) >= 3f)
			{
				func_975(2);
				func_220(&uLocal_367);
				func_899(&uLocal_488, 15);
			}
			break;
		case 15:
			if (!bVar285)
			{
				if (func_888(&uLocal_367) >= 0.6f)
				{
					iLocal_288 = 1;
					if (does_entity_exist(&(iLocal_126[0])))
					{
						delete_ped(iLocal_126[0]);
					}
					if (does_entity_exist(&(iLocal_126[1])))
					{
						delete_ped(iLocal_126[1]);
					}
					if (does_entity_exist(&(iLocal_126[2])))
					{
						delete_ped(iLocal_126[2]);
					}
					if (does_entity_exist(&(iLocal_126[3])))
					{
						delete_ped(iLocal_126[3]);
					}
				}
			}
			if (func_888(&uLocal_367) >= 5f)
			{
				iLocal_163[58] = 1;
				func_469(4);
				if (does_entity_exist(&(iLocal_126[0])))
				{
					delete_ped(iLocal_126[0]);
				}
				if (does_entity_exist(&(iLocal_126[1])))
				{
					delete_ped(iLocal_126[1]);
				}
				if (does_entity_exist(&(iLocal_126[2])))
				{
					delete_ped(iLocal_126[2]);
				}
				if (does_entity_exist(&(iLocal_126[3])))
				{
					delete_ped(iLocal_126[3]);
				}
				func_975(11);
				func_465(&iLocal_144, 0);
				if (!is_entity_dead(&(iLocal_149[3])))
				{
					set_entity_invincible(&(iLocal_149[3]), false);
					set_entity_visible(&(iLocal_149[3]), true);
				}
				if (!is_entity_dead(&(iLocal_149[4])))
				{
					set_entity_invincible(&(iLocal_149[4]), false);
					set_entity_visible(&(iLocal_149[4]), true);
				}
				func_220(&uLocal_367);
				func_899(&uLocal_488, 16);
			}
			break;
		case 16:
			if (func_888(&uLocal_367) >= 0.5f)
			{
				func_220(&uLocal_367);
				func_899(&uLocal_488, 17);
			}
			break;
		case 17:
			break;
		case 20:
			break;
	}
}

void func_1303(char[4] cParam0)
{
	func_1242(cParam0);
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		if (!is_entity_dead(&(iLocal_103[iVar0])))
		{
			switch (&uLocal_465[iVar0])
			{
				case 0:
					if (iVar0 == 4)
					{
						fLocal_327[iVar0] = 0.2f;
					}
					else if (iVar0 == 5)
					{
						fLocal_327[iVar0] = 0.7f;
					}
					else if (iVar0 == 6)
					{
						fLocal_327[iVar0] = 1f;
					}
					else if (iVar0 == 7)
					{
						fLocal_327[iVar0] = 1.2f;
					}
					else
					{
						fLocal_327[iVar0] = 0f;
					}
					if (iVar0 == 0)
					{
						func_220(vLocal_390[iVar0]);
						func_1725(uLocal_465[iVar0], 7);
					}
					else if (iVar0 == 1)
					{
						func_220(vLocal_390[iVar0]);
						func_1725(uLocal_465[iVar0], 3);
					}
					else if (iVar0 == 2 || iVar0 == 3)
					{
						func_220(vLocal_390[iVar0]);
						func_1725(uLocal_465[iVar0], 18);
					}
					else
					{
						func_220(vLocal_390[iVar0]);
						func_1725(uLocal_465[iVar0], 17);
					}
					break;
				case 7:
					if (_does_anim_scene_exist(&(iLocal_310[3])))
					{
						if (_is_anim_scene_loaded(&(iLocal_310[3]), true, false))
						{
							if ((_is_anim_scene_finished(&(iLocal_310[3]), false) || !_is_anim_scene_started(&(iLocal_310[3]), false)) || _0xb89fcff19dafff28(&(iLocal_310[3]), "G_M_M_UNIDUSTER_03"))
							{
								func_220(vLocal_390[iVar0]);
								func_1725(uLocal_465[iVar0], 31);
							}
						}
					}
					break;
				case 17:
					if (_get_ped_crouch_movement(&(iLocal_103[iVar0])))
					{
						_set_ped_crouch_movement(&(iLocal_103[iVar0]), false, 0, false);
					}
					set_blocking_of_non_temporary_events(&(iLocal_103[iVar0]), true);
					open_sequence_task(&iLocal_61);
					if (iVar0 == 2)
					{
						task_go_to_coord_while_aiming_at_coord(0, func_388(5, 7), func_388(5, 21), 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 0);
						task_put_ped_directly_into_cover(0, func_388(5, 7), -1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else if (iVar0 == 3)
					{
						task_go_to_coord_while_aiming_at_coord(0, func_388(5, 8), func_388(5, 21), 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 0);
						task_put_ped_directly_into_cover(0, func_388(5, 8), -1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else if (iVar0 == 4)
					{
						task_go_to_coord_while_aiming_at_coord(0, func_388(5, 9), func_388(5, 21), 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 0);
						task_put_ped_directly_into_cover(0, func_388(5, 9), -1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else if (iVar0 == 5)
					{
						task_go_to_coord_while_aiming_at_coord(0, func_388(5, 10), func_388(5, 21), 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 0);
						task_put_ped_directly_into_cover(0, func_388(5, 10), -1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else if (iVar0 == 6)
					{
						task_go_to_coord_while_aiming_at_coord(0, func_388(5, 11), func_388(5, 21), 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 0);
						task_put_ped_directly_into_cover(0, func_388(5, 11), -1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else if (iVar0 == 7)
					{
						task_go_to_coord_while_aiming_at_coord(0, func_388(5, 12), func_388(5, 21), 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 0);
						task_put_ped_directly_into_cover(0, func_388(5, 12), -1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					task_aim_at_entity(0, Global_35, -1, 1, 0);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_103[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					func_220(vLocal_390[iVar0]);
					func_1725(uLocal_465[iVar0], 18);
					break;
				case 18:
					break;
				case 31:
					func_1726(iLocal_103[iVar0], uLocal_70[iVar0], 1);
					if (_get_ped_crouch_movement(&(iLocal_103[iVar0])))
					{
						_set_ped_crouch_movement(&(iLocal_103[iVar0]), false, 0, false);
					}
					set_blocking_of_non_temporary_events(&(iLocal_103[iVar0]), true);
					open_sequence_task(&iLocal_61);
					if (iVar0 == 0)
					{
						task_follow_nav_mesh_to_coord(0, func_388(5, 5), 2f, 20000, 1f, 0, 40000f);
					}
					task_set_crouch_movement(0, true, 0, false);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_103[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					func_220(vLocal_390[iVar0]);
					func_1725(uLocal_465[iVar0], 3);
					break;
				case 3:
					break;
				case 35:
					break;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(iLocal_112[iVar0])))
		{
			switch (&uLocal_474[iVar0])
			{
				case 0:
					func_220(vLocal_415[iVar0]);
					func_1725(uLocal_474[iVar0], 3);
					break;
				case 3:
					break;
				case 35:
					break;
			}
		}
		iVar0++;
	}
}

void func_1304(char[4] cParam0)
{
	if (!is_entity_dead(cParam0->f_5408))
	{
		if (&iLocal_163[65])
		{
			if (func_888(&uLocal_364) >= 8f)
			{
				iLocal_163[65] = 0;
				set_ped_config_flag(cParam0->f_5408, 254, false);
			}
		}
		switch (iVar453)
		{
			case 0:
				set_ped_relationship_group_hash(get_ped_index_from_entity_index(cParam0->f_5408), -1538724068);
				remove_ped_defensive_area(cParam0->f_5408, false);
				if (!is_entity_dead(cParam0->f_5411))
				{
					if (_get_rider_of_mount(cParam0->f_5411, false) == 0)
					{
						set_blocking_of_non_temporary_events(cParam0->f_5411, false);
						open_sequence_task(&iLocal_61);
						task_follow_nav_mesh_to_coord(0, func_388(5, 2), 1.25f, 20000, 0.25f, 0, 40000f);
						task_stand_still(0, -1);
						close_sequence_task(iLocal_61);
						task_perform_sequence(cParam0->f_5411, iLocal_61);
						clear_sequence_task(&iLocal_61);
					}
				}
				if (!is_entity_dead(iLocal_94))
				{
					if (_get_rider_of_mount(iLocal_94, false) == 0)
					{
						set_blocking_of_non_temporary_events(iLocal_94, false);
						open_sequence_task(&iLocal_61);
						task_follow_nav_mesh_to_coord(0, func_388(5, 3), 1.25f, 20000, 0.25f, 0, 40000f);
						task_stand_still(0, -1);
						close_sequence_task(iLocal_61);
						task_perform_sequence(iLocal_94, iLocal_61);
						clear_sequence_task(&iLocal_61);
					}
				}
				func_220(&uLocal_361);
				func_898(&uLocal_456, 54);
				break;
			case 54:
				break;
			case 69:
				break;
		}
	}
}

void func_1305()
{
	switch (iVar599)
	{
		case 0:
			request_model(-1935140274, false);
			if (has_model_loaded(-1935140274))
			{
				StringCopy(&Local_569, "utp2_hint_cam", 64);
				StringCopy(&(Local_569.f_8), "UTP2_AMBUSH_CAM_HINT", 64);
				Local_569.f_19 = create_object(-1935140274, -1151.66f, -65.63f, 41.8f, true, true, false, false, true);
				iLocal_601 = 1;
			}
			break;
		case 1:
			if (!_0xdd0b7c5ae58f721d(&Local_569))
			{
				_0x6a4d224fc7643941(&Local_569);
				iLocal_601 = 2;
			}
			break;
		case 2:
			if (_does_anim_scene_exist(&(iLocal_310[2])))
			{
				if (_is_anim_scene_loaded(&(iLocal_310[2]), true, false))
				{
					if (_is_anim_scene_started(&(iLocal_310[2]), false))
					{
						if (_get_anim_scene_time(&(iLocal_310[2])) >= 1.8f)
						{
							iLocal_601 = 3;
						}
					}
				}
			}
			break;
		case 3:
			if (_0xdd0b7c5ae58f721d(&Local_569) && !_0x927b810e43e99932(&Local_569))
			{
				_0xb8b207c34285e978(&Local_569);
				iLocal_601 = 4;
			}
			break;
		case 4:
			if (_0x927b810e43e99932(&Local_569))
			{
				_0x7b0279170961a73f(&Local_569);
			}
			else
			{
				iLocal_601 = 5;
				if (does_entity_exist(Local_569.f_19))
				{
					delete_entity(&(Local_569.f_19));
				}
			}
			break;
		case 5:
			break;
	}
}

void func_1306(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_879(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

int func_1307(int iParam0, int iParam1)
{
	return func_1746(&uVar0, iParam0, iParam1);
}

int func_1308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_1747(iParam3, 1);
	bVar1 = func_1747(iParam3, 2);
	bVar2 = !func_1747(iParam3, 4);
	bVar3 = func_1747(iParam3, 8);
	bVar4 = !func_1747(iParam3, 16);
	bVar5 = func_1747(iParam3, 32);
	bVar6 = func_1747(iParam3, 64);
	return func_1748(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_1309()
{
	if (does_entity_exist(&(iLocal_149[4])))
	{
		_0xe98d55c5983f2509(&(iLocal_149[4]));
		set_object_targettable(&(iLocal_149[4]), false);
		_0xa22712e8471aa08e(&(iLocal_149[4]), 0, 0);
		detach_entity(&(iLocal_149[4]), true, true);
	}
	if (func_1436(12))
	{
		_play_sound_from_position("Padlock_Impact", -1172.641f, -9.4961f, 41.3383f, "UTP2_Sounds", false, 0, true, 0);
	}
}

void func_1310(char[4] cParam0)
{
	if (func_1315(cParam0) > 0 && func_1315(cParam0) <= 51)
	{
		func_1721(cParam0);
	}
	if (func_1315(cParam0) >= 4)
	{
		if (func_1738(cParam0, &(iLocal_149[3]), "UTP2_COACH_RETURN", "UTP2_COACH_FAIL", 75f, 150f, 0, 0, 1, 422991367, 1))
		{
			if (!&iLocal_247[1])
			{
				iLocal_247[1] = 1;
			}
		}
		else if (&iLocal_247[1])
		{
			iLocal_247[1] = 0;
		}
	}
	switch (func_1315(cParam0))
	{
		case 0:
			func_220(&uLocal_349);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_874(Global_35, cParam0->f_5408, 45f, 1))
			{
				if (func_1709(cParam0, "UTP2_AFTER", 0))
				{
					func_220(&uLocal_349);
					func_135(cParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_1278())
			{
				if (func_1709(cParam0, "UTP2_ODRISC", 0))
				{
					func_220(&uLocal_349);
					func_135(cParam0, 3);
				}
			}
			break;
		case 3:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 4);
			}
			else if (func_213())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 4:
			if (is_ped_shooting(Global_35))
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			else if (func_213())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			else if (func_888(&uLocal_349) >= 10f)
			{
				func_1710(cParam0, "UTP2_OBJ05", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_220(&uLocal_349);
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if (!func_213())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 15:
			if (func_888(&uLocal_349) >= 2.5f)
			{
				if (!func_1278())
				{
					if (func_874(Global_35, cParam0->f_5408, 60f, 1))
					{
						func_1709(cParam0, "UTP2_ENEMY", 0);
					}
					func_220(&uLocal_349);
					func_135(cParam0, 16);
				}
			}
			break;
		case 16:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 17:
			if (func_888(&uLocal_349) >= 4f)
			{
				if (!func_1278())
				{
					if (func_874(Global_35, cParam0->f_5408, 60f, 1))
					{
						func_1709(cParam0, "UTP2_WAGON", 0);
					}
					func_220(&uLocal_349);
					func_135(cParam0, 16);
				}
			}
			break;
		case 20:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 21);
			}
			break;
		case 21:
			if (!is_entity_dead(iLocal_142))
			{
				func_145(cParam0, iLocal_142, "UTP2_RHO_DUSTER", 0);
				func_1709(cParam0, "UTP2_FLEEb", 0);
				func_220(&uLocal_349);
				func_135(cParam0, 22);
			}
			else if (func_888(&uLocal_349) >= 2.5f)
			{
				func_220(&uLocal_349);
				func_135(cParam0, 22);
			}
			break;
		case 22:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 23);
			}
			break;
		case 23:
			if (func_874(Global_35, cParam0->f_5408, 100f, 1))
			{
				func_1709(cParam0, "UTP2_FLEEa", 0);
			}
			func_220(&uLocal_349);
			iLocal_163[57] = 1;
			func_220(&uLocal_346);
			func_135(cParam0, 24);
			break;
		case 24:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 51:
			if (&iLocal_163[56])
			{
				if (!func_1278())
				{
					func_1709(cParam0, "UTP2_MOVEUP", 0);
					iLocal_163[56] = 0;
				}
			}
			break;
	}
}

void func_1311(char[4] cParam0)
{
	if (iVar486 > 0 && iVar486 < 11)
	{
	}
	switch (iVar486)
	{
		case 0:
			if (!func_8(cParam0, 8))
			{
			}
			func_220(&uLocal_352);
			func_901(&uLocal_489, 1);
			break;
		case 1:
			if (func_377() == 0)
			{
				trigger_music_event("UTP2_AMBUSH_2");
			}
			func_220(&uLocal_352);
			func_901(&uLocal_489, 2);
			break;
		case 2:
			break;
		case 11:
			break;
	}
	if (iVar487 > 0 && iVar487 < 11)
	{
	}
	switch (iVar487)
	{
		case 0:
			if (!func_8(cParam0, 8))
			{
			}
			func_220(&uLocal_355);
			func_901(&uLocal_490, 1);
			break;
		case 1:
			break;
		case 2:
			break;
		case 11:
			break;
	}
}

void func_1312(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		if (!is_entity_dead(&(iLocal_103[iVar0])))
		{
			switch (&uLocal_465[iVar0])
			{
				case 0:
					if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iVar0 == 3)
					{
						func_1726(iLocal_103[iVar0], uLocal_70[iVar0], 0);
					}
					if (iVar0 == 0)
					{
						fLocal_327[iVar0] = 0.5f;
					}
					else if (iVar0 == 1)
					{
						fLocal_327[iVar0] = 0.8f;
					}
					else if (iVar0 == 2)
					{
						fLocal_327[iVar0] = 1.2f;
					}
					else if (iVar0 == 3)
					{
						fLocal_327[iVar0] = 1f;
					}
					else if (iVar0 == 4)
					{
						fLocal_327[iVar0] = 0.2f;
					}
					else if (iVar0 == 5)
					{
						fLocal_327[iVar0] = 0.1f;
					}
					else if (iVar0 == 6)
					{
						fLocal_327[iVar0] = 0f;
					}
					else if (iVar0 == 7)
					{
						fLocal_327[iVar0] = 0.7f;
					}
					else
					{
						fLocal_327[iVar0] = 1f;
					}
					func_220(vLocal_390[iVar0]);
					func_1725(uLocal_465[iVar0], 8);
					break;
				case 8:
					func_1726(iLocal_103[iVar0], uLocal_70[iVar0], 1);
					if (_get_ped_crouch_movement(&(iLocal_103[iVar0])))
					{
						_set_ped_crouch_movement(&(iLocal_103[iVar0]), false, 0, false);
					}
					set_ped_path_prefer_to_avoid_water(&(iLocal_103[iVar0]), false, 0f);
					set_ped_combat_attributes(&(iLocal_103[iVar0]), 0, true);
					set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_103[iVar0])), 1269650476);
					register_target(&(iLocal_103[iVar0]), Global_35, 1);
					register_target(&(iLocal_103[iVar0]), cParam0->f_5408, 1);
					set_blocking_of_non_temporary_events(&(iLocal_103[iVar0]), true);
					open_sequence_task(&iLocal_61);
					task_combat_hated_targets_in_area(0, func_388(9, 0), 150f, 0, 0);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_103[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					if (iVar0 == 0)
					{
						set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(11, 6), 1.5f, 0, 0, 0);
						_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(11, 6));
					}
					else if (iVar0 == 1)
					{
						set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(11, 7), 1.5f, 0, 0, 0);
						_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(11, 7));
					}
					else if (iVar0 == 2)
					{
						set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(11, 8), 1.5f, 0, 0, 0);
						_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(11, 8));
					}
					else if (iVar0 == 3)
					{
						set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(11, 9), 2f, 0, 0, 0);
						_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(11, 9));
					}
					else if (iVar0 == 4)
					{
						set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(11, 10), 2f, 0, 0, 0);
						_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(11, 10));
					}
					else if (iVar0 == 5)
					{
						set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(11, 11), 2f, 0, 0, 0);
						_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(11, 11));
					}
					else if (iVar0 == 6)
					{
						set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(11, 12), 2f, 0, 0, 0);
						_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(11, 12));
					}
					else if (iVar0 == 7)
					{
						set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(11, 13), 2f, 0, 0, 0);
						_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(11, 13));
					}
					if (_does_volume_exist(Local_16.f_14))
					{
						_0xfc3db99c8144cd81(&(iLocal_103[iVar0]), Local_16.f_14, 0, 1, 0);
					}
					if (!_0x5102307ce88798eb(&(iLocal_103[iVar0])))
					{
						request_ped_visibility_tracking(&(iLocal_103[iVar0]));
					}
					func_220(vLocal_390[iVar0]);
					func_1725(uLocal_465[iVar0], 9);
					break;
				case 9:
					func_1739(iLocal_103[iVar0], func_388(5, 22), 90f);
					if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iVar0 == 3)
					{
						if (!&iLocal_602[iVar0])
						{
							if (func_888(vLocal_390[iVar0]) >= 5f)
							{
								if (func_1006(&(iLocal_103[iVar0]), 2))
								{
									if (does_blip_exist(&(uLocal_70[iVar0])))
									{
										iLocal_602[iVar0] = 1;
										_blip_set_modifier(&(uLocal_70[iVar0]), -1034486097);
									}
								}
							}
						}
					}
					if (!&iLocal_607[iVar0])
					{
						if (func_874(Global_35, &(iLocal_103[iVar0]), 6f, 1))
						{
							iLocal_607[iVar0] = 1;
							remove_ped_defensive_area(&(iLocal_103[iVar0]), true);
							if (_does_volume_exist(Local_16.f_14))
							{
								_0xfc3db99c8144cd81(&(iLocal_103[iVar0]), Local_16.f_14, 0, 0, 0);
							}
						}
					}
					if (func_888(vLocal_390[iVar0]) >= 9f)
					{
						if (((!func_1006(&(iLocal_103[0]), 2) && !func_1006(&(iLocal_103[1]), 2)) && !func_1006(&(iLocal_112[0]), 2)) && !func_1006(&(iLocal_112[1]), 2))
						{
							if (func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) >= (8 + 2 - 2)
							{
								func_220(vLocal_390[iVar0]);
								func_1725(uLocal_465[iVar0], 10);
							}
						}
						else if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
						{
							if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 2)
							{
								func_220(vLocal_390[iVar0]);
								func_1725(uLocal_465[iVar0], 33);
							}
						}
					}
					break;
				case 10:
					if (func_874(&(iLocal_103[iVar0]), Global_35, 7f, 1))
					{
						set_blocking_of_non_temporary_events(&(iLocal_103[iVar0]), true);
						open_sequence_task(&iLocal_61);
						task_combat_hated_targets_in_area(0, func_388(9, 0), 150f, 0, 0);
						close_sequence_task(iLocal_61);
						task_perform_sequence(&(iLocal_103[iVar0]), iLocal_61);
						clear_sequence_task(&iLocal_61);
						set_ped_config_flag(&(iLocal_103[iVar0]), 112, true);
						if (_does_volume_exist(Local_16.f_14))
						{
							_0xfc3db99c8144cd81(&(iLocal_103[iVar0]), Local_16.f_14, 0, 0, 0);
						}
						func_220(vLocal_390[iVar0]);
						func_1725(uLocal_465[iVar0], 11);
					}
					else if (func_888(vLocal_390[iVar0]) >= (get_random_float_in_range(0.25f, 1.25f) + 0.25f))
					{
						iLocal_607[iVar0] = 0;
						set_blocking_of_non_temporary_events(&(iLocal_103[iVar0]), true);
						open_sequence_task(&iLocal_61);
						task_combat_hated_targets_in_area(0, func_388(9, 0), 150f, 0, 0);
						close_sequence_task(iLocal_61);
						task_perform_sequence(&(iLocal_103[iVar0]), iLocal_61);
						clear_sequence_task(&iLocal_61);
						if (iVar0 == 0)
						{
							set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(12, 6), 2f, 0, 0, 0);
							_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(12, 6));
						}
						else if (iVar0 == 1)
						{
							set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(12, 7), 2f, 0, 0, 0);
							_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(12, 7));
						}
						else if (iVar0 == 2)
						{
							set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(12, 8), 2f, 0, 0, 0);
							_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(12, 8));
						}
						else if (iVar0 == 3)
						{
							set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(12, 9), 2f, 0, 0, 0);
							_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(12, 9));
						}
						else if (iVar0 == 4)
						{
							set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(12, 10), 2f, 0, 0, 0);
							_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(12, 10));
						}
						else if (iVar0 == 5)
						{
							set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(12, 11), 2f, 0, 0, 0);
							_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(12, 11));
						}
						else if (iVar0 == 6)
						{
							set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(12, 12), 2f, 0, 0, 0);
							_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(12, 12));
						}
						else if (iVar0 == 7)
						{
							set_ped_sphere_defensive_area(&(iLocal_103[iVar0]), func_388(12, 13), 2f, 0, 0, 0);
							_0xcf0b19806473d324(&(iLocal_103[iVar0]), func_388(12, 13));
						}
						if (_does_volume_exist(Local_16.f_14))
						{
							_0xfc3db99c8144cd81(&(iLocal_103[iVar0]), Local_16.f_14, 0, 1, 0);
						}
						func_220(vLocal_390[iVar0]);
						func_1725(uLocal_465[iVar0], 11);
					}
					break;
				case 11:
					func_1739(iLocal_103[iVar0], func_388(5, 22), 90f);
					if (!&iLocal_607[iVar0])
					{
						if (func_874(Global_35, &(iLocal_103[iVar0]), 6f, 1))
						{
							iLocal_607[iVar0] = 1;
							remove_ped_defensive_area(&(iLocal_103[iVar0]), true);
							if (_does_volume_exist(Local_16.f_14))
							{
								_0xfc3db99c8144cd81(&(iLocal_103[iVar0]), Local_16.f_14, 0, 0, 0);
							}
						}
					}
					if ((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2)
					{
						if ((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) >= (8 + 2 + 4 - 7)
						{
							func_220(vLocal_390[iVar0]);
							func_1725(uLocal_465[iVar0], 12);
						}
					}
					else if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
					{
						if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 2)
						{
							func_220(vLocal_390[iVar0]);
							func_1725(uLocal_465[iVar0], 33);
						}
					}
					break;
				case 12:
					set_ped_combat_attributes(&(iLocal_103[iVar0]), 50, true);
					set_ped_combat_attributes(&(iLocal_103[iVar0]), 0, true);
					set_ped_combat_attributes(&(iLocal_103[iVar0]), 71, true);
					set_combat_float(&(iLocal_103[iVar0]), 21, 10f);
					set_combat_float(&(iLocal_103[iVar0]), 20, 10f);
					if (!&iLocal_163[60])
					{
						iLocal_163[60] = 1;
						if (_does_volume_exist(Local_16.f_14))
						{
							_0xfc3db99c8144cd81(&(iLocal_103[iVar0]), Local_16.f_14, 0, 0, 0);
						}
						set_ped_config_flag(&(iLocal_103[iVar0]), 112, true);
					}
					func_220(vLocal_390[iVar0]);
					func_1725(uLocal_465[iVar0], 13);
					break;
				case 13:
					func_1739(iLocal_103[iVar0], func_388(5, 22), 90f);
					if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
					{
						if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 4)
						{
							if (_does_volume_exist(Local_16.f_27))
							{
								_0xfc3db99c8144cd81(&(iLocal_103[iVar0]), Local_16.f_27, 0, 0, 0);
							}
							func_1725(uLocal_465[iVar0], 14);
						}
					}
					break;
				case 14:
					func_1739(iLocal_103[iVar0], func_388(5, 22), 90f);
					if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
					{
						if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 2)
						{
							func_220(vLocal_390[iVar0]);
							func_1725(uLocal_465[iVar0], 33);
						}
					}
					break;
				case 33:
					iLocal_163[61] = 1;
					set_blocking_of_non_temporary_events(&(iLocal_103[iVar0]), false);
					open_sequence_task(&iLocal_61);
					task_set_blocking_of_non_temporary_events(0, true);
					task_smart_flee_ped(0, Global_35, 350f, 120000, 0, 1077936128, 0);
					task_set_blocking_of_non_temporary_events(0, false);
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_103[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					set_ped_path_prefer_to_avoid_water(&(iLocal_103[iVar0]), false, 0.7f);
					if (!does_entity_exist(iLocal_142))
					{
						iLocal_142 = &iLocal_103[iVar0];
						fLocal_317 = func_1749(&(iLocal_103[iVar0]), 1, 1);
					}
					else if (func_1749(&(iLocal_103[iVar0]), 1, 1) < fVar314)
					{
						iLocal_142 = &iLocal_103[iVar0];
						fLocal_317 = func_1749(&(iLocal_103[iVar0]), 1, 1);
					}
					func_220(vLocal_390[iVar0]);
					func_1725(uLocal_465[iVar0], 34);
					break;
				case 34:
					func_1739(iLocal_103[iVar0], func_388(5, 22), 75f);
					if (!bVar269 && func_888(vLocal_390[iVar0]) > 3f)
					{
						iLocal_272 = 1;
						func_135(cParam0, 20);
					}
					break;
				case 35:
					break;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(iLocal_112[iVar0])))
		{
			switch (&uLocal_474[iVar0])
			{
				case 0:
					if (iVar0 == 1)
					{
						func_220(vLocal_415[iVar0]);
						func_1725(uLocal_474[iVar0], 3);
					}
					else
					{
						func_220(vLocal_415[iVar0]);
						func_1725(uLocal_474[iVar0], 15);
					}
					break;
				case 3:
					if (!func_1006(&(iLocal_112[0]), 0))
					{
						func_220(vLocal_415[iVar0]);
						func_1725(uLocal_474[iVar0], 15);
					}
					else if (func_888(vLocal_415[iVar0]) >= 12f)
					{
						func_220(vLocal_415[iVar0]);
						func_1725(uLocal_474[iVar0], 15);
					}
					break;
				case 15:
					func_1726(iLocal_112[iVar0], uLocal_79[iVar0], 1);
					if (!is_entity_dead(&(iLocal_136[iVar0])))
					{
						set_blocking_of_non_temporary_events(&(iLocal_136[iVar0]), false);
						clear_ped_tasks(&(iLocal_136[iVar0]), 1, 0);
						set_ped_config_flag(&(iLocal_136[iVar0]), 138, true);
					}
					set_ped_config_flag(&(iLocal_112[iVar0]), 138, true);
					set_ped_combat_attributes(&(iLocal_112[iVar0]), 0, true);
					set_ped_path_prefer_to_avoid_water(&(iLocal_112[iVar0]), false, 0f);
					set_ped_combat_movement(&(iLocal_112[iVar0]), 1);
					set_ped_combat_attributes(&(iLocal_112[iVar0]), 121, true);
					set_combat_float(&(iLocal_112[iVar0]), 31, 100f);
					set_combat_float(&(iLocal_112[iVar0]), 63, 0f);
					set_combat_float(&(iLocal_112[iVar0]), 64, 0f);
					set_combat_float(&(iLocal_112[iVar0]), 65, 0f);
					set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_112[iVar0])), 1269650476);
					register_target(&(iLocal_112[iVar0]), Global_35, 1);
					register_target(&(iLocal_112[iVar0]), cParam0->f_5408, 1);
					set_blocking_of_non_temporary_events(&(iLocal_112[iVar0]), true);
					open_sequence_task(&iLocal_61);
					if (iVar0 == 0)
					{
						task_follow_waypoint_recording(0, "utopia2_ride_ambush1", 0, 1544, -1, 0, 1, -1);
					}
					else if (iVar0 == 1)
					{
						task_follow_waypoint_recording(0, "utopia2_ride_ambush2", 0, 1544, -1, 0, 1, -1);
					}
					task_combat_hated_targets_in_area(0, func_388(9, 0), 150f, 0, 0);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_112[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					if (iVar0 == 0)
					{
						set_ped_sphere_defensive_area(&(iLocal_112[iVar0]), func_388(11, 14), (2f * 1.5f), 0, 0, 0);
					}
					else if (iVar0 == 1)
					{
						set_ped_sphere_defensive_area(&(iLocal_112[iVar0]), func_388(11, 16), (2f * 1.5f), 0, 0, 0);
					}
					if (_does_volume_exist(Local_16.f_14))
					{
						_0xfc3db99c8144cd81(&(iLocal_112[iVar0]), Local_16.f_14, 0, 1, 0);
					}
					func_220(vLocal_415[iVar0]);
					func_1725(uLocal_474[iVar0], 16);
					break;
				case 16:
					set_ped_reset_flag(&(iLocal_112[iVar0]), 3, true);
					if (!is_entity_dead(&(iLocal_136[iVar0])))
					{
						set_ped_reset_flag(&(iLocal_136[iVar0]), 3, true);
					}
					if (_is_ped_getting_into_a_mount_seat(&(iLocal_112[iVar0]), true))
					{
						if (get_script_task_status(&(iLocal_112[iVar0]), 242628503, true) == 1)
						{
							if (get_sequence_progress(&(iLocal_112[iVar0])) >= 1)
							{
								if (func_888(vLocal_415[iVar0]) >= (1f + to_float(iVar0)))
								{
									set_blocking_of_non_temporary_events(&(iLocal_112[iVar0]), false);
									if (!is_entity_dead(&(iLocal_136[iVar0])))
									{
										if (!get_ped_config_flag(&(iLocal_136[iVar0]), 145, true))
										{
											set_ped_config_flag(&(iLocal_136[iVar0]), 145, true);
										}
									}
									func_220(vLocal_415[iVar0]);
									func_1725(uLocal_474[iVar0], 8);
								}
							}
							else
							{
								func_220(vLocal_415[iVar0]);
							}
						}
						else if (func_888(vLocal_415[iVar0]) >= 1f)
						{
							set_blocking_of_non_temporary_events(&(iLocal_112[iVar0]), false);
							if (!is_entity_dead(&(iLocal_136[iVar0])))
							{
								if (!get_ped_config_flag(&(iLocal_136[iVar0]), 145, true))
								{
									set_ped_config_flag(&(iLocal_136[iVar0]), 145, true);
								}
							}
							func_220(vLocal_415[iVar0]);
							func_1725(uLocal_474[iVar0], 8);
						}
					}
					else if (!_is_ped_getting_into_a_mount_seat(&(iLocal_112[iVar0]), true) && func_888(vLocal_415[iVar0]) >= 1.5f)
					{
						set_blocking_of_non_temporary_events(&(iLocal_136[iVar0]), false);
						if (!is_entity_dead(&(iLocal_136[iVar0])))
						{
							if (!get_ped_config_flag(&(iLocal_136[iVar0]), 145, true))
							{
								set_ped_config_flag(&(iLocal_136[iVar0]), 145, true);
							}
						}
						func_220(vLocal_415[iVar0]);
						func_1725(uLocal_474[iVar0], 8);
					}
					break;
				case 8:
					set_blocking_of_non_temporary_events(&(iLocal_112[iVar0]), true);
					open_sequence_task(&iLocal_61);
					task_combat_hated_targets_in_area(0, func_388(9, 0), 150f, 0, 0);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_112[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					if (!_0x5102307ce88798eb(&(iLocal_112[iVar0])))
					{
						request_ped_visibility_tracking(&(iLocal_112[iVar0]));
					}
					if (iVar0 == 0)
					{
						set_ped_sphere_defensive_area(&(iLocal_112[iVar0]), func_388(11, 15), 1.5f, 0, 0, 0);
						_0xcf0b19806473d324(&(iLocal_112[iVar0]), func_388(11, 15));
					}
					else if (iVar0 == 1)
					{
						set_ped_sphere_defensive_area(&(iLocal_112[iVar0]), func_388(11, 17), 1.5f, 0, 0, 0);
						_0xcf0b19806473d324(&(iLocal_112[iVar0]), func_388(11, 17));
					}
					if (_does_volume_exist(Local_16.f_14))
					{
						_0xfc3db99c8144cd81(&(iLocal_112[iVar0]), Local_16.f_14, 0, 1, 0);
					}
					func_220(vLocal_415[iVar0]);
					func_1725(uLocal_474[iVar0], 9);
					break;
				case 9:
					func_1739(iLocal_112[iVar0], func_388(5, 22), 90f);
					if (!&iLocal_616[iVar0])
					{
						if (func_874(Global_35, &(iLocal_112[iVar0]), 6f, 1))
						{
							iLocal_616[iVar0] = 1;
							remove_ped_defensive_area(&(iLocal_112[iVar0]), true);
							if (_does_volume_exist(Local_16.f_14))
							{
								_0xfc3db99c8144cd81(&(iLocal_112[iVar0]), Local_16.f_14, 0, 0, 0);
							}
						}
					}
					if (func_888(vLocal_415[iVar0]) >= 9f)
					{
						if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
						{
							if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 2)
							{
								func_220(vLocal_415[iVar0]);
								func_1725(uLocal_474[iVar0], 33);
							}
						}
					}
					break;
				case 10:
					if (func_874(&(iLocal_112[iVar0]), Global_35, 7f, 1))
					{
						set_ped_config_flag(&(iLocal_112[iVar0]), 112, true);
						if (_does_volume_exist(Local_16.f_14))
						{
							_0xfc3db99c8144cd81(&(iLocal_112[iVar0]), Local_16.f_14, 0, 0, 0);
						}
						func_220(vLocal_415[iVar0]);
						func_1725(uLocal_474[iVar0], 11);
					}
					else if (func_888(vLocal_415[iVar0]) >= (get_random_float_in_range(0.25f, 1.25f) + 0.25f))
					{
						iLocal_616[iVar0] = 0;
						if (iVar0 == 0)
						{
							set_ped_sphere_defensive_area(&(iLocal_112[iVar0]), func_388(12, 14), 2f, 0, 0, 0);
							_0xcf0b19806473d324(&(iLocal_112[iVar0]), func_388(12, 14));
						}
						else if (iVar0 == 1)
						{
							set_ped_sphere_defensive_area(&(iLocal_112[iVar0]), func_388(12, 15), 2f, 0, 0, 0);
							_0xcf0b19806473d324(&(iLocal_112[iVar0]), func_388(12, 15));
						}
						func_220(vLocal_415[iVar0]);
						func_1725(uLocal_474[iVar0], 11);
					}
					break;
				case 11:
					func_1739(iLocal_112[iVar0], func_388(5, 22), 90f);
					if (!&iLocal_616[iVar0])
					{
						if (func_874(Global_35, &(iLocal_112[iVar0]), 6f, 1))
						{
							iLocal_616[iVar0] = 1;
							remove_ped_defensive_area(&(iLocal_112[iVar0]), true);
							if (_does_volume_exist(Local_16.f_14))
							{
								_0xfc3db99c8144cd81(&(iLocal_112[iVar0]), Local_16.f_14, 0, 0, 0);
							}
						}
					}
					if ((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2)
					{
						if ((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) >= (8 + 2 + 4 - 7)
						{
							func_220(vLocal_415[iVar0]);
							func_1725(uLocal_474[iVar0], 12);
						}
					}
					break;
				case 12:
					set_ped_combat_attributes(&(iLocal_112[iVar0]), 50, true);
					set_ped_combat_attributes(&(iLocal_112[iVar0]), 71, true);
					set_combat_float(&(iLocal_112[iVar0]), 21, 10f);
					set_combat_float(&(iLocal_112[iVar0]), 20, 10f);
					if (!&iLocal_163[60])
					{
						iLocal_163[60] = 1;
						if (_does_volume_exist(Local_16.f_14))
						{
							_0xfc3db99c8144cd81(&(iLocal_112[iVar0]), Local_16.f_14, 0, 0, 0);
						}
						set_ped_config_flag(&(iLocal_112[iVar0]), 112, true);
					}
					func_220(vLocal_415[iVar0]);
					func_1725(uLocal_474[iVar0], 13);
					break;
				case 13:
					func_1739(iLocal_112[iVar0], func_388(5, 22), 90f);
					if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
					{
						if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 4)
						{
							if (_does_volume_exist(Local_16.f_27))
							{
								_0xfc3db99c8144cd81(&(iLocal_112[iVar0]), Local_16.f_27, 0, 0, 0);
							}
							func_1725(uLocal_474[iVar0], 14);
						}
					}
					break;
				case 14:
					func_1739(iLocal_112[iVar0], func_388(5, 22), 90f);
					if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
					{
						if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 2)
						{
							func_220(vLocal_415[iVar0]);
							func_1725(uLocal_474[iVar0], 33);
						}
					}
					break;
				case 33:
					iLocal_163[61] = 1;
					set_blocking_of_non_temporary_events(&(iLocal_112[iVar0]), false);
					open_sequence_task(&iLocal_61);
					task_set_blocking_of_non_temporary_events(0, true);
					task_smart_flee_ped(0, Global_35, 350f, 120000, 0, 1077936128, 0);
					task_set_blocking_of_non_temporary_events(0, false);
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iLocal_61);
					task_perform_sequence(&(iLocal_112[iVar0]), iLocal_61);
					clear_sequence_task(&iLocal_61);
					set_ped_path_prefer_to_avoid_water(&(iLocal_112[iVar0]), false, 0.7f);
					if (!does_entity_exist(iLocal_142))
					{
						iLocal_142 = &iLocal_112[iVar0];
						fLocal_317 = func_1749(&(iLocal_112[iVar0]), 1, 1);
					}
					else if (func_1749(&(iLocal_112[iVar0]), 1, 1) < fVar314)
					{
						iLocal_142 = &iLocal_112[iVar0];
						fLocal_317 = func_1749(&(iLocal_112[iVar0]), 1, 1);
					}
					func_220(vLocal_415[iVar0]);
					func_1725(uLocal_474[iVar0], 34);
					break;
				case 34:
					func_1739(iLocal_112[iVar0], func_388(5, 22), 75f);
					if (!bVar269 && func_888(vLocal_415[iVar0]) > 3f)
					{
						iLocal_272 = 1;
						func_135(cParam0, 20);
					}
					break;
				case 35:
					break;
			}
		}
		iVar0++;
	}
	if (!&iLocal_264[0])
	{
		if (is_entity_in_volume(Global_35, Local_16.f_23, true, 0))
		{
			iLocal_264[0] = 1;
		}
		else if ((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && (func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) >= (8 + 2 - 4))
		{
			iLocal_264[0] = 1;
		}
		else if (func_888(&uLocal_346) >= 100f)
		{
			iLocal_264[0] = 1;
		}
	}
	else
	{
		if (!&iLocal_492[6] == 2)
		{
			func_1750(cParam0, 0);
		}
		if (func_1751(cParam0, Local_16.f_28) <= 1)
		{
			iLocal_163[70] = 1;
		}
		else
		{
			iLocal_163[70] = 0;
		}
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			if (!is_entity_dead(&(iLocal_115[iVar0])))
			{
				switch (&uLocal_477[iVar0])
				{
					case 0:
						func_1726(iLocal_115[iVar0], uLocal_82[iVar0], 1);
						func_220(vLocal_422[iVar0]);
						func_1725(uLocal_477[iVar0], 8);
						break;
					case 8:
						set_ped_path_prefer_to_avoid_water(&(iLocal_115[iVar0]), false, 0f);
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_115[iVar0])), 1269650476);
						register_target(&(iLocal_115[iVar0]), Global_35, 1);
						register_target(&(iLocal_115[iVar0]), cParam0->f_5408, 1);
						set_blocking_of_non_temporary_events(&(iLocal_115[iVar0]), false);
						if (_does_volume_exist(Local_16.f_18))
						{
							_0xfc3db99c8144cd81(&(iLocal_115[iVar0]), Local_16.f_18, 0, 0, 0);
						}
						_0x9238a3d970bbb0a9(&(iLocal_115[iVar0]), -2080992549);
						task_combat_hated_targets_around_ped(&(iLocal_115[iVar0]), 200f, 0, 0);
						if (!_0x5102307ce88798eb(&(iLocal_115[iVar0])))
						{
							request_ped_visibility_tracking(&(iLocal_115[iVar0]));
						}
						func_220(vLocal_422[iVar0]);
						func_1725(uLocal_477[iVar0], 9);
						break;
					case 9:
						if (&iLocal_163[70])
						{
							if (_does_volume_exist(Local_16.f_27))
							{
								_0xfc3db99c8144cd81(&(iLocal_115[iVar0]), Local_16.f_27, 0, 0, 0);
							}
							func_1725(uLocal_477[iVar0], 14);
						}
						break;
					case 14:
						if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
						{
							if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 2)
							{
								func_220(vLocal_422[iVar0]);
								func_1725(uLocal_477[iVar0], 33);
							}
						}
						break;
					case 33:
						iLocal_163[61] = 1;
						set_blocking_of_non_temporary_events(&(iLocal_115[iVar0]), false);
						open_sequence_task(&iLocal_61);
						task_set_blocking_of_non_temporary_events(0, true);
						task_smart_flee_ped(0, Global_35, 350f, 120000, 0, 1077936128, 0);
						task_set_blocking_of_non_temporary_events(0, false);
						task_combat_ped(0, Global_35, 0, 0);
						close_sequence_task(iLocal_61);
						task_perform_sequence(&(iLocal_115[iVar0]), iLocal_61);
						clear_sequence_task(&iLocal_61);
						set_ped_path_prefer_to_avoid_water(&(iLocal_115[iVar0]), false, 0.7f);
						if (!does_entity_exist(iLocal_142))
						{
							iLocal_142 = &iLocal_115[iVar0];
							fLocal_317 = func_1749(&(iLocal_115[iVar0]), 1, 1);
						}
						else if (func_1749(&(iLocal_115[iVar0]), 1, 1) < fVar314)
						{
							iLocal_142 = &iLocal_115[iVar0];
							fLocal_317 = func_1749(&(iLocal_115[iVar0]), 1, 1);
						}
						func_220(vLocal_422[iVar0]);
						func_1725(uLocal_477[iVar0], 34);
						break;
					case 34:
						func_1739(iLocal_115[iVar0], func_388(5, 22), 75f);
						if (!bVar269 && func_888(vLocal_422[iVar0]) > 3f)
						{
							iLocal_272 = 1;
							func_135(cParam0, 20);
						}
						break;
					case 35:
						break;
				}
			}
			iVar0++;
		}
	}
	if (!&iLocal_264[1])
	{
		if (is_entity_in_volume(Global_35, Local_16.f_24, true, 0))
		{
			iLocal_264[1] = 1;
		}
		else if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && ((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) >= (8 + 2 + 4 - 3)) && !is_ped_on_mount(&(iLocal_103[1])))
		{
			iLocal_264[1] = 1;
		}
		else if (func_888(&uLocal_346) >= 200f)
		{
			iLocal_264[1] = 1;
		}
	}
	else
	{
		if (func_1241(cParam0))
		{
			if (!&iLocal_492[7] == 2)
			{
				func_1752(cParam0, 0);
			}
			else if (!&iLocal_163[71])
			{
				if (func_1751(cParam0, Local_16.f_30) == 0)
				{
					if (!is_entity_dead(&(iLocal_139[0])))
					{
						if (_get_ped_in_draft_seat(iLocal_145, 0) == &iLocal_139[0])
						{
							if ((is_entity_dead(&(iLocal_120[0])) || !is_ped_in_vehicle(&(iLocal_120[0]), iLocal_145, false)) && (is_entity_dead(&(iLocal_120[1])) || !is_ped_in_vehicle(&(iLocal_120[1]), iLocal_145, false)))
							{
								if (!is_entity_dead(&(iLocal_139[0])))
								{
									if (!get_ped_config_flag(&(iLocal_139[0]), 145, true))
									{
										if (_0xb36d3ec70963be60(iLocal_145, &(iLocal_139[0])))
										{
											task_smart_flee_ped(&(iLocal_139[0]), Global_35, 300f, -1, 0, 1077936128, 0);
											set_blocking_of_non_temporary_events(&(iLocal_139[0]), false);
											set_ped_config_flag(&(iLocal_139[0]), 145, true);
											iLocal_163[71] = 1;
										}
									}
								}
							}
						}
					}
					if (!is_entity_dead(&(iLocal_139[1])))
					{
						if (_get_ped_in_draft_seat(iLocal_145, 1) == &iLocal_139[1])
						{
							if ((is_entity_dead(&(iLocal_120[0])) || !is_ped_in_vehicle(&(iLocal_120[0]), iLocal_145, false)) && (is_entity_dead(&(iLocal_120[1])) || !is_ped_in_vehicle(&(iLocal_120[1]), iLocal_145, false)))
							{
								if (!is_entity_dead(&(iLocal_139[1])))
								{
									if (!get_ped_config_flag(&(iLocal_139[1]), 145, true))
									{
										if (_0xb36d3ec70963be60(iLocal_145, &(iLocal_139[1])))
										{
											task_smart_flee_ped(&(iLocal_139[1]), Global_35, 300f, -1, 0, 1077936128, 0);
											set_blocking_of_non_temporary_events(&(iLocal_139[1]), false);
											set_ped_config_flag(&(iLocal_139[1]), 145, true);
											iLocal_163[71] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!is_entity_dead(&(iLocal_120[iVar0])))
			{
				switch (&uLocal_482[iVar0])
				{
					case 0:
						if (iVar0 == 0)
						{
							fLocal_336[iVar0] = 6f;
						}
						else if (iVar0 == 1)
						{
							fLocal_336[iVar0] = 1f;
						}
						func_1726(iLocal_120[iVar0], uLocal_87[iVar0], 1);
						func_220(vLocal_435[iVar0]);
						func_1725(uLocal_482[iVar0], 2);
						break;
					case 2:
						set_ped_reset_flag(&(iLocal_120[iVar0]), 3, true);
						if (has_collision_loaded_around_entity(&(iLocal_120[iVar0])) || func_888(vLocal_435[iVar0]) >= 5f)
						{
							if (func_888(vLocal_435[iVar0]) >= 5f)
							{
							}
							if (iVar0 == 0)
							{
								if (!is_entity_dead(iLocal_145))
								{
									if (!is_entity_dead(&(iLocal_120[iVar0])))
									{
										set_ped_config_flag(&(iLocal_120[iVar0]), 138, true);
										set_blocking_of_non_temporary_events(&(iLocal_120[iVar0]), true);
										iLocal_271 = 0;
										_task_vehicle_drive_to_destination(&(iLocal_120[iVar0]), iLocal_145, func_388(6, 3), 8f, 69468168, 3, 5f, 5f, 0);
									}
									set_vehicle_forward_speed(iLocal_145, 6f);
									if (!is_entity_dead(&(iLocal_139[0])))
									{
										set_blocking_of_non_temporary_events(&(iLocal_139[0]), false);
										clear_ped_tasks(&(iLocal_139[0]), 1, 0);
										set_ped_config_flag(&(iLocal_139[0]), 138, true);
									}
									if (!is_entity_dead(&(iLocal_139[1])))
									{
										set_blocking_of_non_temporary_events(&(iLocal_139[1]), false);
										clear_ped_tasks(&(iLocal_139[1]), 1, 0);
										set_ped_config_flag(&(iLocal_139[1]), 138, true);
									}
								}
							}
							func_220(vLocal_435[iVar0]);
							func_1725(uLocal_482[iVar0], 8);
						}
						break;
					case 8:
						if (func_888(vLocal_435[iVar0]) >= &fLocal_336[iVar0])
						{
							set_ped_path_prefer_to_avoid_water(&(iLocal_120[iVar0]), false, 0f);
							set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_120[iVar0])), 1269650476);
							register_target(&(iLocal_120[iVar0]), Global_35, 1);
							register_target(&(iLocal_120[iVar0]), cParam0->f_5408, 1);
							if (iVar0 == 0)
							{
							}
							else
							{
								set_blocking_of_non_temporary_events(&(iLocal_120[iVar0]), true);
								task_combat_hated_targets(&(iLocal_120[iVar0]), 5f);
							}
							if (!_0x5102307ce88798eb(&(iLocal_120[iVar0])))
							{
								request_ped_visibility_tracking(&(iLocal_120[iVar0]));
							}
							func_220(vLocal_435[iVar0]);
							func_1725(uLocal_482[iVar0], 9);
						}
						break;
					case 9:
						if (iVar0 == 0)
						{
							fLocal_336[iVar0] = 0.5f;
						}
						else if (iVar0 == 1)
						{
							fLocal_336[iVar0] = 1f;
						}
						if (func_888(vLocal_435[iVar0]) >= 15f)
						{
							func_1739(iLocal_120[iVar0], func_388(5, 22), 75f);
						}
						if (is_entity_dead(iLocal_145))
						{
							func_220(vLocal_435[iVar0]);
							func_1725(uLocal_482[iVar0], 10);
						}
						else if (!is_vehicle_driveable(iLocal_145, false, false))
						{
							func_220(vLocal_435[iVar0]);
							func_1725(uLocal_482[iVar0], 10);
						}
						else if (!is_ped_in_vehicle(&(iLocal_120[iVar0]), iLocal_145, false))
						{
							func_220(vLocal_435[iVar0]);
							func_1725(uLocal_482[iVar0], 10);
						}
						else if (is_entity_dead(&(iLocal_139[0])) && is_entity_dead(&(iLocal_139[1])))
						{
							func_220(vLocal_435[iVar0]);
							func_1725(uLocal_482[iVar0], 10);
						}
						else if (_get_ped_in_draft_seat(iLocal_145, 0) != &iLocal_139[0] && _get_ped_in_draft_seat(iLocal_145, 1) != &iLocal_139[1])
						{
							func_220(vLocal_435[iVar0]);
							func_1725(uLocal_482[iVar0], 10);
						}
						else if (func_1320(iLocal_145, func_388(6, 3), (5f + 1.5f), 1, 1))
						{
							func_220(vLocal_435[iVar0]);
							func_1725(uLocal_482[iVar0], 10);
						}
						break;
					case 10:
						if (func_888(vLocal_435[iVar0]) >= &fLocal_336[iVar0])
						{
							if (iVar0 == 0)
							{
								set_blocking_of_non_temporary_events(&(iLocal_120[iVar0]), true);
								task_vehicle_temp_action(&(iLocal_120[iVar0]), iLocal_145, 24, 5000);
								func_220(vLocal_435[iVar0]);
								func_1725(uLocal_482[iVar0], 27);
							}
							else
							{
								set_blocking_of_non_temporary_events(&(iLocal_120[iVar0]), true);
								task_leave_vehicle(&(iLocal_120[iVar0]), iLocal_145, 268435456, 0);
								func_220(vLocal_435[iVar0]);
								func_1725(uLocal_482[iVar0], 11);
							}
						}
						break;
					case 27:
						if (func_221(vLocal_435[iVar0]) >= 5000 || get_entity_speed(iLocal_145) <= 1.75f)
						{
							set_blocking_of_non_temporary_events(&(iLocal_120[iVar0]), true);
							task_leave_vehicle(&(iLocal_120[iVar0]), iLocal_145, 268435456, 0);
							func_220(vLocal_435[iVar0]);
							func_1725(uLocal_482[iVar0], 11);
						}
						break;
					case 11:
						func_1739(iLocal_120[iVar0], func_388(5, 22), 75f);
						if (!is_ped_in_vehicle(&(iLocal_120[iVar0]), iLocal_145, false))
						{
							func_220(vLocal_435[iVar0]);
							func_1725(uLocal_482[iVar0], 12);
						}
						if (func_888(vLocal_435[iVar0]) >= 5f)
						{
							set_blocking_of_non_temporary_events(&(iLocal_120[iVar0]), true);
							task_leave_vehicle(&(iLocal_120[iVar0]), iLocal_145, 4096, 0);
							func_220(vLocal_435[iVar0]);
							func_1725(uLocal_482[iVar0], 12);
						}
						break;
					case 12:
						set_ped_combat_attributes(&(iLocal_120[iVar0]), 0, true);
						set_blocking_of_non_temporary_events(&(iLocal_120[iVar0]), true);
						task_combat_hated_targets_in_area(&(iLocal_120[iVar0]), func_388(9, 0), 150f, 0, 0);
						if (iVar0 == 0)
						{
							set_ped_sphere_defensive_area(&(iLocal_120[iVar0]), func_388(11, 22), (2f * 1.5f), 0, 0, 0);
						}
						else if (iVar0 == 1)
						{
							set_ped_sphere_defensive_area(&(iLocal_120[iVar0]), func_388(11, 23), (2f * 1.5f), 0, 0, 0);
						}
						if (_does_volume_exist(Local_16.f_14))
						{
							_0xfc3db99c8144cd81(&(iLocal_120[iVar0]), Local_16.f_14, 0, 1, 0);
						}
						func_220(vLocal_435[iVar0]);
						func_1725(uLocal_482[iVar0], 13);
						break;
					case 13:
						func_1739(iLocal_112[iVar0], func_388(5, 22), 90f);
						if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
						{
							if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 4)
							{
								if (_does_volume_exist(Local_16.f_27))
								{
									_0xfc3db99c8144cd81(&(iLocal_120[iVar0]), Local_16.f_27, 0, 0, 0);
								}
								func_1725(uLocal_482[iVar0], 14);
							}
						}
						break;
					case 14:
						func_1739(iLocal_120[iVar0], func_388(5, 22), 75f);
						if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
						{
							if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 2)
							{
								func_220(vLocal_435[iVar0]);
								func_1725(uLocal_482[iVar0], 33);
							}
						}
						break;
					case 33:
						iLocal_163[61] = 1;
						set_blocking_of_non_temporary_events(&(iLocal_120[iVar0]), false);
						open_sequence_task(&iLocal_61);
						task_set_blocking_of_non_temporary_events(0, true);
						task_smart_flee_ped(0, Global_35, 350f, 120000, 0, 1077936128, 0);
						task_set_blocking_of_non_temporary_events(0, false);
						task_combat_ped(0, Global_35, 0, 0);
						close_sequence_task(iLocal_61);
						task_perform_sequence(&(iLocal_120[iVar0]), iLocal_61);
						clear_sequence_task(&iLocal_61);
						set_ped_path_prefer_to_avoid_water(&(iLocal_120[iVar0]), false, 0.7f);
						if (!does_entity_exist(iLocal_142))
						{
							iLocal_142 = &iLocal_120[iVar0];
							fLocal_317 = func_1749(&(iLocal_120[iVar0]), 1, 1);
						}
						else if (func_1749(&(iLocal_120[iVar0]), 1, 1) < fVar314)
						{
							iLocal_142 = &iLocal_120[iVar0];
							fLocal_317 = func_1749(&(iLocal_120[iVar0]), 1, 1);
						}
						func_220(vLocal_435[iVar0]);
						func_1725(uLocal_482[iVar0], 34);
						break;
					case 34:
						func_1739(iLocal_120[iVar0], func_388(5, 22), 75f);
						if (!bVar269 && func_888(vLocal_435[iVar0]) > 3f)
						{
							iLocal_272 = 1;
							func_135(cParam0, 20);
						}
						break;
					case 35:
						break;
				}
			}
			iVar0++;
		}
	}
	if (!&iLocal_264[2])
	{
		if (&iLocal_492[7] == 2)
		{
			iLocal_264[2] = 1;
		}
	}
	else
	{
		if (!&iLocal_492[8] == 2)
		{
			func_1753(cParam0, 0);
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!is_entity_dead(&(iLocal_123[iVar0])))
			{
				switch (&uLocal_485[iVar0])
				{
					case 0:
						if (iVar0 == 0)
						{
							fLocal_339[iVar0] = (2f + 0.75f);
						}
						else if (iVar0 == 1)
						{
							fLocal_339[iVar0] = (2f + 1.25f);
						}
						func_1726(iLocal_123[iVar0], uLocal_90[iVar0], 1);
						func_220(vLocal_442[iVar0]);
						func_1725(uLocal_485[iVar0], 8);
						break;
					case 8:
						if (func_888(vLocal_442[iVar0]) >= &fLocal_339[iVar0])
						{
							set_ped_path_prefer_to_avoid_water(&(iLocal_123[iVar0]), false, 0f);
							set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_123[iVar0])), 1269650476);
							register_target(&(iLocal_123[iVar0]), Global_35, 1);
							register_target(&(iLocal_123[iVar0]), cParam0->f_5408, 1);
							set_blocking_of_non_temporary_events(&(iLocal_123[iVar0]), false);
							if (_does_volume_exist(Local_16.f_18))
							{
								_0xfc3db99c8144cd81(&(iLocal_123[iVar0]), Local_16.f_18, 0, 0, 0);
							}
							_0x9238a3d970bbb0a9(&(iLocal_123[iVar0]), -2080992549);
							task_combat_hated_targets_around_ped(&(iLocal_123[iVar0]), 200f, 0, 0);
							if (!_0x5102307ce88798eb(&(iLocal_123[iVar0])))
							{
								request_ped_visibility_tracking(&(iLocal_123[iVar0]));
							}
							func_220(vLocal_442[iVar0]);
							func_1725(uLocal_485[iVar0], 9);
						}
						break;
					case 9:
						if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
						{
							if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 2)
							{
								func_220(vLocal_442[iVar0]);
								func_1725(uLocal_485[iVar0], 33);
							}
						}
						break;
					case 33:
						iLocal_163[61] = 1;
						set_blocking_of_non_temporary_events(&(iLocal_123[iVar0]), false);
						open_sequence_task(&iLocal_61);
						task_set_blocking_of_non_temporary_events(0, true);
						task_smart_flee_ped(0, Global_35, 350f, 120000, 0, 1077936128, 0);
						task_set_blocking_of_non_temporary_events(0, false);
						task_combat_ped(0, Global_35, 0, 0);
						close_sequence_task(iLocal_61);
						task_perform_sequence(&(iLocal_123[iVar0]), iLocal_61);
						clear_sequence_task(&iLocal_61);
						set_ped_path_prefer_to_avoid_water(&(iLocal_123[iVar0]), false, 0.7f);
						if (!does_entity_exist(iLocal_142))
						{
							iLocal_142 = &iLocal_123[iVar0];
							fLocal_317 = func_1749(&(iLocal_123[iVar0]), 1, 1);
						}
						else if (func_1749(&(iLocal_123[iVar0]), 1, 1) < fVar314)
						{
							iLocal_142 = &iLocal_123[iVar0];
							fLocal_317 = func_1749(&(iLocal_123[iVar0]), 1, 1);
						}
						func_220(vLocal_442[iVar0]);
						func_1725(uLocal_485[iVar0], 34);
						break;
					case 34:
						func_1739(iLocal_123[iVar0], func_388(5, 22), 75f);
						if (!bVar269 && func_888(vLocal_442[iVar0]) > 3f)
						{
							iLocal_272 = 1;
							func_135(cParam0, 20);
						}
						break;
					case 35:
						break;
				}
			}
			iVar0++;
		}
	}
	if (&iLocal_163[59])
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!is_entity_dead(&(iLocal_95[iVar0])))
			{
				switch (&uLocal_457[iVar0])
				{
					case 0:
						func_220(vLocal_370[iVar0]);
						func_1725(uLocal_457[iVar0], 35);
						break;
					case 35:
						break;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			if (!is_entity_dead(&(iLocal_98[iVar0])))
			{
				switch (&uLocal_460[iVar0])
				{
					case 0:
						func_1726(iLocal_98[iVar0], uLocal_65[iVar0], 1);
						if (!is_entity_dead(&(iLocal_131[iVar0])))
						{
							set_blocking_of_non_temporary_events(&(iLocal_131[iVar0]), false);
							clear_ped_tasks(&(iLocal_131[iVar0]), 1, 0);
						}
						set_ped_relationship_group_hash(get_ped_index_from_entity_index(&(iLocal_98[iVar0])), iVar499);
						register_target(&(iLocal_98[iVar0]), Global_35, 1);
						register_target(&(iLocal_98[iVar0]), cParam0->f_5408, 1);
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_460[iVar0], 8);
						break;
					case 8:
						if (func_888(vLocal_377[iVar0]) >= (1.5f + get_random_float_in_range(0.25f, 1f)))
						{
							if (!is_entity_dead(&(iLocal_131[iVar0])))
							{
								set_blocking_of_non_temporary_events(&(iLocal_131[iVar0]), false);
								clear_ped_tasks(&(iLocal_131[iVar0]), 1, 0);
							}
							if (iVar0 == 1)
							{
								set_entity_only_damaged_by_player(&(iLocal_98[iVar0]), false);
								if (!is_entity_dead(&(iLocal_131[iVar0])))
								{
									set_entity_only_damaged_by_player(&(iLocal_131[iVar0]), false);
								}
							}
							set_ped_path_prefer_to_avoid_water(&(iLocal_98[iVar0]), false, 0f);
							set_ped_config_flag(&(iLocal_98[iVar0]), 167, false);
							register_target(&(iLocal_98[iVar0]), Global_35, 1);
							register_target(&(iLocal_98[iVar0]), cParam0->f_5408, 1);
							func_1733(&(iLocal_98[iVar0]), &iLocal_103);
							func_1733(&(iLocal_98[iVar0]), &iLocal_112);
							if (iVar0 == 0 || iVar0 == 1)
							{
								set_blocking_of_non_temporary_events(&(iLocal_98[iVar0]), true);
								open_sequence_task(&iLocal_61);
								task_dismount_animal(0, 0, 0, 0, 0, 0);
								task_combat_hated_targets_in_area(0, func_388(9, 0), 150f, 0, 0);
								close_sequence_task(iLocal_61);
								task_perform_sequence(&(iLocal_98[iVar0]), iLocal_61);
								clear_sequence_task(&iLocal_61);
							}
							else if (iVar0 == 2 || iVar0 == 3)
							{
								set_blocking_of_non_temporary_events(&(iLocal_98[iVar0]), true);
								open_sequence_task(&iLocal_61);
								task_combat_hated_targets_in_area(0, func_388(9, 0), 150f, 0, 0);
								close_sequence_task(iLocal_61);
								task_perform_sequence(&(iLocal_98[iVar0]), iLocal_61);
								clear_sequence_task(&iLocal_61);
							}
							if (iVar0 == 0)
							{
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(11, 2), 2f, 1, 0, 0);
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(12, 2), 2f, 1, 1, 0);
								_0xcf0b19806473d324(&(iLocal_98[iVar0]), func_388(11, 2));
							}
							else if (iVar0 == 1)
							{
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(11, 3), 2f, 1, 0, 0);
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(12, 3), 2f, 1, 1, 0);
								_0xcf0b19806473d324(&(iLocal_98[iVar0]), func_388(11, 3));
							}
							else if (iVar0 == 2)
							{
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(11, 4), 2f, 1, 0, 0);
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(12, 4), 2f, 1, 1, 0);
								_0xcf0b19806473d324(&(iLocal_98[iVar0]), func_388(11, 4));
							}
							else if (iVar0 == 3)
							{
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(11, 5), 2f, 1, 0, 0);
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(12, 5), 2f, 1, 1, 0);
								_0xcf0b19806473d324(&(iLocal_98[iVar0]), func_388(11, 5));
							}
							if (!_0x5102307ce88798eb(&(iLocal_98[iVar0])))
							{
								request_ped_visibility_tracking(&(iLocal_98[iVar0]));
							}
							func_220(vLocal_377[iVar0]);
							func_1725(uLocal_460[iVar0], 9);
						}
						break;
					case 9:
						func_1739(iLocal_98[iVar0], func_388(5, 22), 90f);
						if (func_1728(&iLocal_95, 2, 1) + func_1728(&iLocal_98, 2, 1)) >= (2 + 4 - 3)
						{
							func_220(vLocal_377[iVar0]);
							func_1725(uLocal_460[iVar0], 10);
						}
						else if (func_1728(&iLocal_95, 2, 1) + func_1728(&iLocal_98, 2, 1)) >= (2 + 4 - 2)
						{
							func_220(vLocal_377[iVar0]);
							func_1725(uLocal_460[iVar0], 33);
						}
						else if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
						{
							if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 2)
							{
								func_220(vLocal_377[iVar0]);
								func_1725(uLocal_460[iVar0], 33);
							}
						}
						break;
					case 10:
						if (func_874(&(iLocal_98[iVar0]), Global_35, 7f, 1))
						{
							set_ped_config_flag(&(iLocal_98[iVar0]), 112, true);
							func_220(vLocal_377[iVar0]);
							func_1725(uLocal_460[iVar0], 11);
						}
						else if (func_888(vLocal_377[iVar0]) >= (get_random_float_in_range(0.25f, 1.25f) + 0.25f))
						{
							if (iVar0 == 0)
							{
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(12, 2), 2f, 1, 0, 0);
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(11, 2), 2f, 1, 1, 0);
								_0xcf0b19806473d324(&(iLocal_98[iVar0]), func_388(12, 2));
							}
							else if (iVar0 == 1)
							{
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(12, 3), 2f, 1, 0, 0);
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(11, 3), 2f, 1, 1, 0);
								_0xcf0b19806473d324(&(iLocal_98[iVar0]), func_388(12, 3));
							}
							else if (iVar0 == 2)
							{
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(12, 4), 2f, 1, 0, 0);
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(11, 4), 2f, 1, 1, 0);
								_0xcf0b19806473d324(&(iLocal_98[iVar0]), func_388(12, 4));
							}
							else if (iVar0 == 3)
							{
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(12, 5), 2f, 1, 0, 0);
								set_ped_sphere_defensive_area(&(iLocal_98[iVar0]), func_388(11, 5), 2f, 1, 1, 0);
								_0xcf0b19806473d324(&(iLocal_98[iVar0]), func_388(12, 5));
							}
							func_220(vLocal_377[iVar0]);
							func_1725(uLocal_460[iVar0], 11);
						}
						break;
					case 11:
						func_1739(iLocal_112[iVar0], func_388(5, 22), 90f);
						if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
						{
							if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 4)
							{
								if (_does_volume_exist(Local_16.f_27))
								{
									_0xfc3db99c8144cd81(&(iLocal_123[iVar0]), Local_16.f_27, 0, 0, 0);
								}
								func_1725(uLocal_485[iVar0], 14);
							}
						}
						break;
					case 14:
						func_1739(iLocal_98[iVar0], func_388(5, 22), 90f);
						if (func_1728(&iLocal_95, 2, 1) + func_1728(&iLocal_98, 2, 1)) >= (2 + 4 - 2)
						{
							func_220(vLocal_377[iVar0]);
							func_1725(uLocal_460[iVar0], 33);
						}
						else if ((((&iLocal_492[3] == 2 && &iLocal_492[5] == 2) && &iLocal_492[6] == 2) && &iLocal_492[7] == 2) && &iLocal_492[8] == 2)
						{
							if ((((func_1728(&iLocal_103, 2, 1) + func_1728(&iLocal_112, 2, 1)) + func_1728(&iLocal_115, 2, 1)) + func_1728(&iLocal_120, 2, 1)) + func_1728(&iLocal_123, 2, 1)) >= (8 + 2 + 4 + 2 + 2 - 2)
							{
								func_220(vLocal_377[iVar0]);
								func_1725(uLocal_460[iVar0], 33);
							}
						}
						break;
					case 33:
						set_blocking_of_non_temporary_events(&(iLocal_98[iVar0]), false);
						open_sequence_task(&iLocal_61);
						task_set_blocking_of_non_temporary_events(0, true);
						task_smart_flee_ped(0, Global_35, 350f, 120000, 0, 1077936128, 0);
						task_set_blocking_of_non_temporary_events(0, false);
						task_combat_ped(0, Global_35, 0, 0);
						close_sequence_task(iLocal_61);
						task_perform_sequence(&(iLocal_98[iVar0]), iLocal_61);
						clear_sequence_task(&iLocal_61);
						set_ped_flee_attributes(&(iLocal_98[iVar0]), 2, false);
						set_ped_path_prefer_to_avoid_water(&(iLocal_98[iVar0]), false, 0.7f);
						func_220(vLocal_377[iVar0]);
						func_1725(uLocal_460[iVar0], 34);
						break;
					case 34:
						func_1739(iLocal_98[iVar0], func_388(5, 22), 75f);
						break;
					case 35:
						break;
				}
			}
			iVar0++;
		}
	}
	else
	{
		if (!&iLocal_492[0] == 2)
		{
			iLocal_492[0] = 2;
		}
		if (!&iLocal_492[2] == 2)
		{
			iLocal_492[2] = 2;
		}
	}
}

void func_1313(char[4] cParam0)
{
	if (!is_entity_dead(cParam0->f_5408))
	{
		if (&iLocal_163[65])
		{
			if (func_888(&uLocal_364) >= 8f)
			{
				iLocal_163[65] = 0;
				set_ped_config_flag(cParam0->f_5408, 254, false);
			}
		}
		switch (iVar453)
		{
			case 0:
				set_blocking_of_non_temporary_events(cParam0->f_5408, false);
				set_ped_relationship_group_hash(get_ped_index_from_entity_index(cParam0->f_5408), -1538724068);
				remove_ped_defensive_area(cParam0->f_5408, false);
				_0xfc3db99c8144cd81(cParam0->f_5408, Local_16.f_34, 0, 0, 0);
				set_ped_config_flag(cParam0->f_5408, 167, false);
				func_1754(6, 1, 0, 0, 1, 0);
				set_ped_path_prefer_to_avoid_water(cParam0->f_5408, false, 1f);
				set_combat_float(cParam0->f_5408, 44, 3f);
				set_ped_config_flag(cParam0->f_5408, 516, true);
				if (!is_entity_dead(iLocal_94))
				{
					clear_ped_tasks(iLocal_94, 1, 0);
					set_blocking_of_non_temporary_events(iLocal_94, false);
				}
				if (has_ped_got_weapon(cParam0->f_5408, 36703333, 0, false))
				{
					set_current_ped_weapon(cParam0->f_5408, 36703333, true, 0, false, false);
				}
				if (has_ped_got_weapon(cParam0->f_5408, 13903789, 0, false))
				{
					set_current_ped_weapon(cParam0->f_5408, 13903789, true, 1, false, false);
				}
				_0x83b8d50eb9446bba(cParam0->f_5408, 1);
				if (&iLocal_163[59])
				{
					if (!func_1320(cParam0->f_5408, func_388(13, 0), 30f, 1, 1))
					{
						func_220(&uLocal_361);
						func_898(&uLocal_456, 8);
					}
					else
					{
						func_220(&uLocal_361);
						func_898(&uLocal_456, 47);
					}
				}
				else
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 35);
				}
				break;
			case 8:
				func_1733(cParam0->f_5408, &iLocal_95);
				func_1733(cParam0->f_5408, &iLocal_98);
				set_blocking_of_non_temporary_events(cParam0->f_5408, true);
				task_follow_waypoint_recording(cParam0->f_5408, "utopia2_follow_coach", 0, 4204040, -1, 0, 1, -1);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 9);
				break;
			case 9:
				if (func_888(&uLocal_361) >= 30f)
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 47);
				}
				else if (func_1320(cParam0->f_5408, func_388(13, 0), 30f, 1, 1))
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 47);
				}
				break;
			case 47:
				if (get_ped_config_flag(cParam0->f_5408, 167, true))
				{
					set_ped_config_flag(cParam0->f_5408, 167, false);
				}
				set_blocking_of_non_temporary_events(cParam0->f_5408, true);
				Var0.f_5 = 1073741824;
				Var0.f_6 = 1;
				Var0.f_3 = cParam0->f_5408;
				Var0.f_4 = iLocal_94;
				task_exit_transport(&Var0);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 48);
				break;
			case 48:
				if (func_888(&uLocal_361) >= 6f)
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 41);
				}
				else if (get_script_task_status(cParam0->f_5408, 1920417248, true) == 1)
				{
				}
				else if (get_script_task_status(cParam0->f_5408, 1920417248, true) == 8)
				{
					if (!is_entity_dead(iLocal_94))
					{
						set_blocking_of_non_temporary_events(iLocal_94, false);
						task_follow_nav_mesh_to_coord(iLocal_94, func_388(5, 20), 1.25f, 20000, 0.25f, 0, 40000f);
					}
					func_220(&uLocal_361);
					func_898(&uLocal_456, 41);
				}
				break;
			case 41:
				set_ped_path_prefer_to_avoid_water(cParam0->f_5408, false, 1f);
				func_1733(cParam0->f_5408, &iLocal_95);
				func_1733(cParam0->f_5408, &iLocal_98);
				func_1733(cParam0->f_5408, &iLocal_103);
				set_blocking_of_non_temporary_events(cParam0->f_5408, true);
				open_sequence_task(&iLocal_61);
				task_go_to_coord_while_aiming_at_coord(0, func_388(15, 1), func_388(5, 21), 2f, 1, 2f, 1082130432, 1, 0, 0, -687903391, 0);
				task_put_ped_directly_into_cover(0, func_388(15, 1), 1000, 0, 0, 1, 1, &(iLocal_146[1]), 1, 0, 0);
				task_combat_hated_targets_in_area(0, func_388(13, 0), 150f, 0, 0);
				close_sequence_task(iLocal_61);
				task_perform_sequence(cParam0->f_5408, iLocal_61);
				clear_sequence_task(&iLocal_61);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 42);
				break;
			case 42:
				if (func_888(&uLocal_361) >= 6f && func_874(cParam0->f_5408, Global_35, 15f, 1))
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 35);
				}
				break;
			case 35:
				if (func_888(&uLocal_361) >= 6f)
				{
					func_220(&uLocal_361);
					func_1733(cParam0->f_5408, &iLocal_103);
					set_ped_accuracy(cParam0->f_5408, 80);
					set_ped_shoot_rate(cParam0->f_5408, 150);
					if (_does_volume_exist(Local_16.f_34))
					{
						_0xfc3db99c8144cd81(cParam0->f_5408, Local_16.f_34, 0, 0, 0);
					}
					func_220(&uLocal_361);
					func_898(&uLocal_456, 36);
				}
				break;
			case 36:
			case 38:
			case 40:
				if (iVar453 != 40)
				{
					if (func_888(&uLocal_361) >= 4f)
					{
						iVar8 = create_itemset(false);
						func_220(&uLocal_361);
						if (iVar453 == 36)
						{
							_0x84ccf9a12942c83d(Local_16.f_16, iVar8, 1, 3, 0, 0);
						}
						else if (iVar453 == 38)
						{
							_0x84ccf9a12942c83d(Local_16.f_17, iVar8, 1, 3, 0, 0);
						}
						if (get_itemset_size(iVar8) > 0)
						{
							iLocal_619 = 0;
							iVar12 = 0;
							while (iVar12 < get_itemset_size(iVar8))
							{
								iVar9 = get_indexed_item_in_itemset(iVar12, iVar8);
								iVar10 = _get_entity_from_item(iVar9);
								iVar11 = get_ped_index_from_entity_index(iVar10);
								if (((iVar11 != Global_35 && iVar11 != cParam0->f_5408) && iVar11 != cParam0->f_5411) && iVar11 != iLocal_94)
								{
									if (!is_ped_injured(iVar11))
									{
										iLocal_619 = iVar616 + 1;
									}
								}
								iVar12++;
							}
						}
						if (iVar616 == 0)
						{
							if (iVar453 == 36)
							{
								_0xb4b7c92fce7347b7(cParam0->f_5408);
								set_ped_combat_attributes(cParam0->f_5408, 35, false);
								task_combat_hated_targets_in_area(cParam0->f_5408, func_388(13, 0), 150f, 0, 0);
								set_ped_target_loss_response(cParam0->f_5408, 1);
								_0xfc3db99c8144cd81(cParam0->f_5408, Local_16.f_25, 0, 0, 0);
								iLocal_163[56] = 1;
								func_898(&uLocal_456, 38);
								func_27(&uLocal_564, 0);
							}
							else if (iVar453 == 38)
							{
								if (func_26(&uLocal_564))
								{
									if (func_888(&uLocal_564) > 10f)
									{
										_0xfc3db99c8144cd81(cParam0->f_5408, Local_16.f_26, 0, 0, 0);
										iLocal_163[56] = 1;
										func_898(&uLocal_456, 40);
									}
								}
							}
						}
						destroy_itemset(iVar8);
					}
				}
				if (&iLocal_163[61])
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 10);
				}
				break;
			case 10:
				if (_0xcc2b20596e29e4e3(cParam0->f_5408, 0))
				{
					set_ped_combat_attributes(cParam0->f_5408, 0, false);
				}
				set_blocking_of_non_temporary_events(cParam0->f_5408, true);
				clear_ped_tasks(cParam0->f_5408, 1, 0);
				iVar13 = func_1755(cParam0, cParam0->f_5408);
				open_sequence_task(&iLocal_61);
				if (iVar13 != 0)
				{
					task_go_to_entity_while_aiming_at_entity(0, iVar13, iVar13, 1f, 1, 0.5f, 4f, 1, 0, -687903391, 0);
				}
				else
				{
					task_go_to_coord_and_aim_at_hated_entities_near_coord(0, -1154.063f, 4.9455f, 40.1758f, -1112.391f, 22.2049f, 49.2967f, 1f, true, 0.5f, 4f, true, 0, 0, -687903391);
				}
				task_aim_at_coord(0, -1112.391f, 22.2049f, 49.2967f, 4000, 0, 0);
				close_sequence_task(iLocal_61);
				task_perform_sequence(cParam0->f_5408, iLocal_61);
				clear_sequence_task(&iLocal_61);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 11);
				break;
			case 11:
				if (func_888(&uLocal_361) >= 4f)
				{
					task_go_to_coord_and_aim_at_hated_entities_near_coord(cParam0->f_5408, -1154.063f, 4.9455f, 40.1758f, -1112.391f, 22.2049f, 49.2967f, 1f, true, 0.5f, 4f, true, 0, 0, -687903391);
					func_898(&uLocal_456, 12);
				}
				break;
			case 12:
				if (func_888(&uLocal_361) >= 10f)
				{
					func_220(&uLocal_361);
					task_go_to_entity(cParam0->f_5408, Global_35, -1, 0.5f, 1f, 2f, 0);
					func_898(&uLocal_456, 13);
				}
				break;
			case 13:
				func_1756();
				func_220(&uLocal_361);
				func_898(&uLocal_456, 14);
				break;
			case 14:
				func_1757(cParam0);
				break;
			case 69:
				break;
		}
	}
}

void func_1314(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		func_1758(551416228);
		if (iVar452 < 6)
		{
		}
		switch (iVar452)
		{
			case 0:
				if (is_ped_in_cover(Global_35, 0, 0))
				{
					_0x1a7a802b2301edc0(Global_35);
					if (func_120(cParam0, 4))
					{
						func_890(60f, 0f);
					}
					func_220(&uLocal_358);
					func_897(&uLocal_455, 6);
				}
				else
				{
					func_220(&uLocal_358);
					func_897(&uLocal_455, 1);
				}
				break;
			case 1:
				if (is_ped_in_cover(Global_35, 0, 0))
				{
					if (func_120(cParam0, 4))
					{
						func_890(60f, 0f);
					}
					func_220(&uLocal_358);
					func_897(&uLocal_455, 6);
				}
				break;
			case 4:
				func_220(&uLocal_358);
				func_897(&uLocal_455, 5);
				break;
			case 5:
				if (!is_entity_dead(cParam0->f_5411))
				{
					if (_get_rider_of_mount(cParam0->f_5411, false) == 0)
					{
						set_blocking_of_non_temporary_events(cParam0->f_5411, false);
						task_follow_nav_mesh_to_coord(cParam0->f_5411, func_388(5, 19), 1.25f, 20000, 0.25f, 0, 40000f);
						func_220(&uLocal_358);
						func_897(&uLocal_455, 6);
					}
				}
				break;
			case 6:
				break;
		}
	}
}

int func_1315(char[4] cParam0)
{
	return cParam0->f_599;
}

void func_1316(char[4] cParam0)
{
	if (func_1315(cParam0) >= 4)
	{
		if (func_1738(cParam0, &(iLocal_149[3]), "UTP2_COACH_RETURN", "UTP2_COACH_FAIL", 75f, 150f, 0, 0, 1, 422991367, 1))
		{
			if (!&iLocal_247[1])
			{
				iLocal_247[1] = 1;
			}
		}
		else if (&iLocal_247[1])
		{
			iLocal_247[1] = 0;
		}
	}
	switch (func_1315(cParam0))
	{
		case 0:
			func_1259(cParam0, "UTP2_OBJ06", -1082130432, 0, 0, -1, -1, 0);
			if (!does_blip_exist(iLocal_93))
			{
				if (!is_entity_dead(&(iLocal_149[3])))
				{
					iLocal_93 = func_1740(408396114, &(iLocal_149[3]), 1);
					set_blip_name_from_text_file(iLocal_93, "BLIP_PROC_COACH");
				}
			}
			func_220(&uLocal_349);
			func_135(cParam0, 1);
			break;
		case 1:
			if (!func_1278())
			{
				if (func_874(Global_35, cParam0->f_5408, 45f, 1))
				{
					if (iLocal_163[55] && func_1320(Global_35, func_388(5, 22), (8f + 3f), 1, 1))
					{
						func_1709(cParam0, "UTP2_DEAD_ALT", 0);
					}
					else
					{
						func_1709(cParam0, "UTP2_DEAD", 0);
					}
				}
				func_220(&uLocal_349);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 4);
			}
			break;
		case 3:
			if (func_888(&uLocal_349) >= 1f)
			{
				iLocal_620 = 1;
				func_220(&uLocal_349);
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (!func_1723("UTP2_DEAD") && !func_1723("UTP2_DEAD_ALT"))
			{
				if (!&iLocal_163[55])
				{
					if (func_874(Global_35, cParam0->f_5408, 30f, 1))
					{
						if (func_347(1305393429, 1, 0))
						{
							func_1759(cParam0, "UTP2_OBJ06", 0, 0);
							func_135(cParam0, 5);
						}
						else if (func_1709(cParam0, "UTP2_OBJ06", 0))
						{
							func_135(cParam0, 5);
						}
					}
				}
				else
				{
					iLocal_620 = 1;
					func_135(cParam0, 51);
				}
			}
			break;
		case 5:
			if (!func_1278())
			{
				iLocal_620 = 1;
				func_220(&uLocal_349);
				func_135(cParam0, 6);
			}
			break;
		case 6:
			if (func_1320(Global_35, func_388(7, 2), 8f, 1, 1))
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			else if (func_1320(Global_35, func_388(5, 22), 8f, 1, 1))
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			else if (func_213())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			else if (func_888(&uLocal_349) >= 5f)
			{
				func_1710(cParam0, "UTP2_OBJ06", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_220(&uLocal_349);
				func_135(cParam0, 7);
			}
			break;
		case 7:
			if (!func_213())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1317(char[4] cParam0)
{
	if (iVar486 > 0 && iVar486 < 11)
	{
	}
	switch (iVar486)
	{
		case 0:
			if (!func_8(cParam0, 8))
			{
			}
			func_220(&uLocal_352);
			func_901(&uLocal_489, 1);
			break;
		case 1:
			trigger_music_event("UTP2_DEAD");
			func_220(&uLocal_352);
			func_901(&uLocal_489, 2);
			break;
		case 2:
			break;
		case 11:
			break;
	}
	if (iVar487 > 0 && iVar487 < 11)
	{
	}
	switch (iVar487)
	{
		case 0:
			if (!func_8(cParam0, 8))
			{
			}
			func_220(&uLocal_355);
			func_901(&uLocal_490, 1);
			break;
		case 1:
			break;
		case 2:
			break;
		case 11:
			break;
	}
}

void func_1318(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (iVar452 < 6)
		{
		}
		switch (iVar452)
		{
			case 0:
				func_220(&uLocal_358);
				func_897(&uLocal_455, 1);
				break;
			case 1:
				if (&iLocal_163[50])
				{
					func_220(&uLocal_358);
					func_897(&uLocal_455, 5);
				}
				break;
			case 5:
				if (func_888(&uLocal_358) >= 15f)
				{
					if (is_ped_on_mount(Global_35))
					{
						_remove_ped_from_mount(Global_35, true, false);
					}
					func_220(&uLocal_358);
					func_897(&uLocal_455, 6);
				}
				else if (func_1760(Global_35, func_388(7, 0), &uLocal_358, 1112014848, 1106247680, 1097859072, 1084227584, 1082130432, 0, 0, 1, 1, 1))
				{
					func_220(&uLocal_358);
					func_897(&uLocal_455, 6);
				}
				break;
			case 6:
				break;
		}
	}
}

void func_1319(char[4] cParam0)
{
	if (!is_entity_dead(cParam0->f_5408))
	{
		if (iVar453 > 0 && iVar453 < 69)
		{
			func_1757(cParam0);
		}
		switch (iVar453)
		{
			case 0:
				if (!is_entity_dead(cParam0->f_5411))
				{
					clear_ped_tasks(cParam0->f_5411, 1, 0);
					set_blocking_of_non_temporary_events(cParam0->f_5411, false);
				}
				if (!is_entity_dead(iLocal_94))
				{
					clear_ped_tasks(iLocal_94, 1, 0);
					set_blocking_of_non_temporary_events(iLocal_94, false);
				}
				func_1756();
				func_220(&uLocal_361);
				func_898(&uLocal_456, 10);
				break;
			case 10:
				set_blocking_of_non_temporary_events(cParam0->f_5408, true);
				open_sequence_task(&iLocal_61);
				task_turn_ped_to_face_entity(0, Global_35, 1000, -1082130432, -1082130432, -1082130432);
				task_go_to_entity(0, Global_35, -1, 3f, 1f, 2f, 0);
				close_sequence_task(iLocal_61);
				task_perform_sequence(cParam0->f_5408, iLocal_61);
				clear_sequence_task(&iLocal_61);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 1);
				break;
			case 1:
				if (&iLocal_163[62])
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 49);
				}
				break;
			case 49:
				set_ped_path_prefer_to_avoid_water(cParam0->f_5408, false, 1f);
				if (func_1743(cParam0->f_5408, func_388(5, 22), func_1321(5, 22), 1065353216))
				{
					Local_541 = "utopia2_micah_coach_r";
				}
				else
				{
					Local_541 = "utopia2_micah_coach_l";
				}
				Local_541.f_1 = 0;
				Local_541.f_2 = -1;
				Local_541.f_3 = 67114505;
				Local_541.f_13 = 1;
				Local_541.f_14 = -1f;
				set_blocking_of_non_temporary_events(cParam0->f_5408, true);
				open_sequence_task(&iLocal_61);
				task_follow_waypoint_recording_advanced(0, &Local_541);
				close_sequence_task(iLocal_61);
				task_perform_sequence(cParam0->f_5408, iLocal_61);
				clear_sequence_task(&iLocal_61);
				func_220(&uLocal_361);
				func_898(&uLocal_456, 50);
				break;
			case 50:
				if (func_888(&uLocal_361) >= 90f)
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 15);
				}
				else if (get_script_task_status(cParam0->f_5408, 242628503, true) == 1)
				{
				}
				else if (get_script_task_status(cParam0->f_5408, 242628503, true) == 8)
				{
					func_220(&uLocal_361);
					func_898(&uLocal_456, 15);
				}
				break;
			case 15:
				if (!&iLocal_163[55] && !&iLocal_163[54])
				{
					if (func_888(&uLocal_361) > 1f)
					{
						iLocal_163[63] = 1;
						func_1282(cParam0, 5);
						func_220(&uLocal_361);
						func_898(&uLocal_456, 16);
					}
				}
				break;
			case 16:
				if (_does_anim_scene_exist(&(iLocal_310[5])))
				{
					if (_is_anim_scene_loaded(&(iLocal_310[5]), true, false))
					{
						if (_is_anim_scene_started(&(iLocal_310[5]), false))
						{
							if (!func_164())
							{
								if (!get_anim_scene_bool(&(iLocal_310[5]), "bLine01"))
								{
									if (func_888(&uLocal_361) >= 16f)
									{
										set_anim_scene_bool(&(iLocal_310[5]), "bLine01", true, false);
										func_470(&uLocal_361);
									}
								}
								else if (!get_anim_scene_bool(&(iLocal_310[5]), "bLine02"))
								{
									if (!func_26(&uLocal_361))
									{
										if (_0x8d81e7824b7753f7(&(iLocal_310[5]), "S_Wait02", 1))
										{
											func_27(&uLocal_361, 0);
										}
									}
									else if (func_888(&uLocal_361) >= 10f)
									{
										set_anim_scene_bool(&(iLocal_310[5]), "bLine02", true, false);
										func_470(&uLocal_361);
									}
								}
								else if (!get_anim_scene_bool(&(iLocal_310[5]), "bLine03"))
								{
									if (!func_26(&uLocal_361))
									{
										if (_0x8d81e7824b7753f7(&(iLocal_310[5]), "S_Wait03", 1))
										{
											func_27(&uLocal_361, 0);
										}
									}
									else if (func_888(&uLocal_361) >= 10f)
									{
										set_anim_scene_bool(&(iLocal_310[5]), "bLine03", true, false);
										func_470(&uLocal_361);
									}
								}
							}
						}
					}
				}
				break;
			case 69:
				break;
		}
	}
}

bool func_1320(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_1520(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

float func_1321(int iParam0, int iParam1)
{
	return func_1000(iParam0, iParam1);
}

void func_1322(bool bParam0)
{
	if (!is_entity_dead(Global_35))
	{
		iVar0 = func_1087(Global_35, 0, 1, 0);
		if ((!is_weapon_valid(iVar0) || iVar0 == -1569615261) || _is_weapon_two_handed(iVar0))
		{
			iVar0 = func_1087(Global_35, 2, 1, 0);
		}
		if (!is_weapon_valid(iVar0) || iVar0 == -1569615261)
		{
			return;
		}
		_0xcffc3eccd7a5cceb(get_player_index(), iVar0, 0);
		if (bParam0)
		{
			set_current_ped_weapon(Global_35, iVar0, true, 0, false, false);
		}
	}
}

bool func_1323()
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	iVar0 = func_1087(Global_35, 0, 1, 0);
	if (((!is_weapon_valid(iVar0) || iVar0 == -1569615261) || _is_weapon_two_handed(iVar0)) || _is_weapon_melee(iVar0))
	{
		iVar0 = func_1087(Global_35, 2, 1, 0);
	}
	if (!is_weapon_valid(iVar0) || iVar0 == -1569615261)
	{
		return false;
	}
	if (get_ammo_in_ped_weapon(Global_35, iVar0) > 0)
	{
		return true;
	}
	return false;
}

void func_1324(char[4] cParam0)
{
	func_1761(cParam0);
	func_1430(cParam0);
}

void func_1325(char[4] cParam0)
{
	if (func_1315(cParam0) >= 4)
	{
		if (func_1738(cParam0, &(iLocal_149[3]), "UTP2_COACH_RETURN", "UTP2_COACH_FAIL", 75f, 150f, 0, 0, 1, 422991367, 1))
		{
			if (!&iLocal_247[1])
			{
				iLocal_247[1] = 1;
			}
		}
		else if (&iLocal_247[1])
		{
			iLocal_247[1] = 0;
		}
	}
	if (&iLocal_163[53])
	{
		if (!&iLocal_237[7])
		{
			iLocal_237[7] = 1;
			func_220(&uLocal_349);
			func_135(cParam0, 20);
		}
	}
	switch (func_1315(cParam0))
	{
		case 0:
			if (!does_blip_exist(iLocal_93))
			{
				if (!is_entity_dead(&(iLocal_149[3])))
				{
					iLocal_93 = _blip_add_for_entity(1055493006, &(iLocal_149[3]));
					set_blip_name_from_text_file(iLocal_93, "BLIP_PROC_COACH");
				}
			}
			func_1259(cParam0, "UTP2_OBJ07", -1082130432, 0, 0, -1, -1, 0);
			func_220(&uLocal_349);
			func_135(cParam0, 1);
			break;
		case 1:
			if (!&iLocal_247[0])
			{
				if (func_213())
				{
					iLocal_247[0] = 1;
				}
			}
			if (!func_1278())
			{
				if (!&iLocal_163[55])
				{
					if (!func_1762(151))
					{
						func_325(151, 1);
					}
				}
				func_220(&uLocal_349);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!&iLocal_247[0])
			{
				if (func_213())
				{
					iLocal_247[0] = 1;
				}
				else if (&iLocal_163[55])
				{
					iLocal_247[0] = 1;
				}
			}
			if (func_888(&uLocal_349) >= 13f)
			{
				if (!&iLocal_247[0])
				{
					iLocal_247[0] = 1;
					func_1710(cParam0, "UTP2_OBJ07", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				}
				func_220(&uLocal_349);
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (func_888(&uLocal_349) >= 1f)
			{
				func_220(&uLocal_349);
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (func_888(&uLocal_349) >= 1f)
			{
				if (!&iLocal_163[55])
				{
					func_1709(cParam0, "UTP2_OBJ07", 0);
				}
				func_220(&uLocal_349);
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 6);
			}
			break;
		case 6:
			if (!func_213())
			{
				if (!func_1763(151))
				{
					if (!func_214())
					{
						func_220(&uLocal_349);
						func_135(cParam0, 7);
					}
				}
			}
			break;
		case 7:
			if (iVar565 < 3)
			{
				if (func_888(&uLocal_349) > (6f + (IntToFloat(iVar565) * 2f)))
				{
					if (!&iLocal_163[55] && !&iLocal_163[68])
					{
						func_1709(cParam0, "UTP2_OBJ07", 0);
						func_220(&uLocal_349);
						uLocal_568 = iVar565 + 1;
					}
				}
			}
			else
			{
				func_135(cParam0, 51);
			}
			break;
		case 20:
			if (func_874(Global_35, cParam0->f_5408, 45f, 1))
			{
			}
			func_220(&uLocal_349);
			func_135(cParam0, 21);
			break;
		case 21:
			if (!func_1278())
			{
				func_220(&uLocal_349);
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1326(char[4] cParam0)
{
	if (iVar486 > 0 && iVar486 < 11)
	{
	}
	switch (iVar486)
	{
		case 0:
			if (!func_8(cParam0, 8))
			{
			}
			func_220(&uLocal_352);
			func_901(&uLocal_489, 1);
			break;
		case 1:
			break;
		case 2:
			break;
		case 11:
			break;
	}
	if (iVar487 > 0 && iVar487 < 11)
	{
	}
	switch (iVar487)
	{
		case 0:
			if (!func_8(cParam0, 8))
			{
			}
			func_220(&uLocal_355);
			func_901(&uLocal_490, 1);
			break;
		case 1:
			break;
		case 2:
			break;
		case 11:
			break;
	}
}

void func_1327(char[4] cParam0)
{
	if (!is_entity_dead(cParam0->f_5408))
	{
		switch (iVar453)
		{
			case 0:
				func_220(&uLocal_361);
				func_898(&uLocal_456, 1);
				break;
			case 1:
				if (bVar618 || func_888(&uLocal_361) >= 35f)
				{
					iLocal_163[53] = 1;
					func_220(&uLocal_361);
					func_898(&uLocal_456, 35);
				}
				break;
			case 35:
				if (_does_anim_scene_exist(&(iLocal_310[5])))
				{
					if (_is_anim_scene_loaded(&(iLocal_310[5]), true, false))
					{
						if (_is_anim_scene_started(&(iLocal_310[5]), false))
						{
							if (func_878(Global_35, cParam0->f_5408, 1, 1) < 15f)
							{
								set_anim_scene_bool(&(iLocal_310[5]), "bMicahShootLock", true, false);
							}
						}
					}
				}
				func_220(&uLocal_361);
				func_898(&uLocal_456, 36);
				break;
			case 36:
				if (_does_anim_scene_exist(&(iLocal_310[5])))
				{
					if (_is_anim_scene_loaded(&(iLocal_310[5]), true, false))
					{
						if (_is_anim_scene_started(&(iLocal_310[5]), false))
						{
							if (_get_anim_scene_time(&(iLocal_310[5])) >= 22.1f)
							{
								if (!is_entity_dead(&(iLocal_149[4])))
								{
									_set_entity_health(&(iLocal_149[4]), 0, 0);
								}
								iLocal_163[68] = 1;
								_hide_ped_weapons(Global_35, 2, false);
								func_220(&uLocal_361);
								func_898(&uLocal_456, 69);
							}
						}
					}
				}
				break;
			case 10:
				func_220(&uLocal_361);
				func_898(&uLocal_456, 12);
				break;
			case 12:
				break;
			case 69:
				break;
		}
	}
}

var func_1328(char[4] cParam0)
{
	return cParam0->f_7375.f_804;
}

void func_1329(char[4] cParam0)
{
	Var0 = { func_1423(cParam0, func_35(cParam0)) };
	func_1764(cParam0, &Var0);
}

int func_1330()
{
	if (!func_439(&iVar0))
	{
		return 0;
	}
	_0x2208438012482a1a(Global_35, false, false);
	_0xc494c76a34266e82(Global_35, 13);
	iVar1 = func_672(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_1765(&(Global_1946804->f_57[func_673(iVar1, 1)]), 8);
	func_684(26, 0, 0, 0, 0);
	return 1;
}

void func_1331(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (&Global_40.f_9536[iParam0])
	{
		case -1:
			Global_40.f_9536[iParam0] = 0;
			if (bParam1)
			{
				iVar0 = func_1766();
				if (iVar0 != -1)
				{
					if (Global_40.f_9479[iVar0]->f_1 == -1)
					{
						Global_40.f_9479[iVar0]->f_1 = iParam0;
					}
					else if (Global_40.f_9479[iVar0]->f_2 == -1)
					{
						Global_40.f_9479[iVar0]->f_2 = iParam0;
					}
					else
					{
						Global_40.f_9479[iVar0]->f_2 = Global_40.f_9479[iVar0]->f_1;
						Global_40.f_9479[iVar0]->f_1 = iParam0;
					}
				}
			}
			break;
		case 0:
			break;
		case 1:
			break;
	}
}

void func_1332(int iParam0)
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

void func_1333(int iParam0)
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

void func_1334()
{
	iVar0 = func_1087(Global_35, 9, 1, 0);
	if (func_688(iVar0))
	{
		return;
	}
	iVar0 = func_1087(Global_35, 7, 1, 0);
	if (func_688(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1087(Global_35, 0, 1, 0);
	if (func_688(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1087(Global_35, 1, 1, 0);
	if (func_688(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1087(Global_35, 18, 1, 0);
	if (func_688(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1767();
	if (func_688(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1748(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1307(6291456, 0);
	if (func_688(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1748(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1335()
{
	return Global_1900383->f_393;
}

int func_1336(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1768(*uParam0, 0f, 0f, 0f))
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

void func_1337(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1338(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1339(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1340()
{
	return &Global_1899515;
}

void func_1341(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1342(int iParam0)
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

bool func_1343()
{
	return (func_1769() || func_1770());
}

void func_1344(bool bParam0)
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
	func_1771(0f);
	Global_1935436->f_11 = 1;
	if (func_304())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1772();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1345(var uParam0)
{
	return uParam0->f_865;
}

float func_1346(var uParam0)
{
	return uParam0->f_868;
}

float func_1347(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1348(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1349(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1350(var uParam0, int iParam1)
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

void func_1351(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1192(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1773(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1])
		{
			iVar1 = _get_ped_component_category(iParam4, _get_metaped_type(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_0xdf631e4bce1b1fc4(iParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0, bParam2);
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
				_set_ped_component_disabled(iParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_1352(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_673(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1353(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1354(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1352(1108822547, 6))
	{
		if (bParam2)
		{
			func_1351(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1355(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1356(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1355(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_673(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_673(iParam0, 1)])->f_10 || iParam1);
}

void func_1356(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_673(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_673(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_673(iParam0, 1)])->f_10 && iParam1));
}

bool func_1357(var uParam0)
{
	if (func_1774(&(uParam0->f_29), 62))
	{
		switch (func_1775())
		{
			case 1:
				if (!func_1774(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1774(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1774(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1774(&(uParam0->f_29), 32))
				{
					if (func_1774(&(uParam0->f_29), 2))
					{
						if (func_695(func_285()) < 5)
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

int func_1358(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1776(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1129("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1130(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_688(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1776(iParam1, 512) && func_1584(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1776(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1776(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1776(iParam1, 33554432)))
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
		func_1131(iVar1);
	}
	if (func_688(iVar0))
	{
	}
	else if (!func_1776(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1358(uParam0, iParam1, iParam2);
	}
	else if (func_1776(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1359(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1360(int iParam0)
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

void func_1361(var uParam0)
{
	if (!func_868(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_834(&(uParam0->f_1), 1);
	}
}

void func_1362(var uParam0)
{
	if (!func_868(*uParam0, 1))
	{
		request_ptfx_asset();
		func_834(uParam0, 1);
	}
}

bool func_1363(var uParam0)
{
	if (func_868(uParam0->f_2, 1))
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

char* func_1364(int iParam0)
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

bool func_1365(int iParam0)
{
	return iParam0 != 0;
}

int func_1366(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1367(var uParam0, char* sParam1)
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

void func_1368(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 65)
	{
		if (&uParam0->f_13[iVar12] == iParam1)
		{
			*uParam0->f_13[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_1369(var uParam0)
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

void func_1370(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1371(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1372(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1373(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1374(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1374(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1374(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1374(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1374(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1374(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1374(uParam0, 5, iParam4))
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
			if (func_1374(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1374(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1374(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1375(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1376(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_217((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1377(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_493(sParam0, 1);
}

bool func_1378(var uParam0)
{
	if (func_868(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_868(uParam0->f_1, 1))
	{
		func_838(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_834(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1379(var uParam0)
{
	if (func_868(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_868(uParam0->f_3, 1))
	{
		func_840(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_834(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_834(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1380(var uParam0)
{
	if (func_868(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_868(uParam0->f_1, 1))
	{
		func_842(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_834(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1381(var uParam0, int iParam1)
{
	if (func_868(uParam0->f_1, 2))
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
	if (!func_868(uParam0->f_1, 1))
	{
		func_849(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_834(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1382(var uParam0)
{
	if (func_868(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_868(uParam0->f_2, 1))
	{
		func_851(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_834(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1383(var uParam0)
{
	if (func_868(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_868(uParam0->f_3, 1))
	{
		func_853(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_834(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1384(var uParam0)
{
	if (func_868(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_868(uParam0->f_1, 1))
	{
		func_855(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_834(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1385(var uParam0)
{
	if (func_868(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_868(uParam0->f_1, 1))
	{
		func_857(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_834(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1386(var uParam0)
{
	if (func_868(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_868(uParam0->f_2, 1))
	{
		func_859(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_834(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1387(var uParam0)
{
	if (func_868(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_868(uParam0->f_1, 1))
	{
		func_861(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_834(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1388(int iParam0)
{
	if (func_512(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1389(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_512(iParam0))
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
			if (func_962(iParam0, 2, 1))
			{
				func_963(iParam0, 2, 1);
			}
			if (func_707(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_981(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_518(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_1006(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_1006(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1777(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_981(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1778(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_981(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1778(iParam0, 1);
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
			if (!func_962(iParam0, 44, 0))
			{
				func_981(iParam0, 44, 0);
			}
			if (func_1779(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1778(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_963(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1008(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1457(iParam0, 0, 0, 1);
			}
			func_963(iParam0, 33, 1);
			func_963(iParam0, 34, 1);
			func_963(iParam0, 29, 1);
			if (!func_396(vVar0) && bParam7)
			{
				func_1778(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1778(iParam0, 4);
			}
			else
			{
				func_1778(iParam0, 5);
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
						func_1777(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_879(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1778(iParam0, 4);
			}
			else
			{
				func_1778(iParam0, 5);
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
				if (func_1780(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1781(iParam0, iParam13, 0);
						func_1782(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_962(iParam0, 25, 0))
						{
							func_963(iParam0, 25, 0);
						}
						func_981(iParam0, 66, 0);
						func_1778(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1778(iParam0, 5);
				}
				func_981(iParam0, 28, 1);
			}
			else
			{
				func_1778(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1778(iParam0, 6);
			}
			break;
		case 6:
			if (func_1006(Global_1360165[iParam0], 0))
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
					func_1783(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1784(Global_1360165[iParam0], 1);
				}
			}
			func_1778(iParam0, 7);
		case 7:
			func_1008(iParam0, bParam9, bParam15, 0);
			func_1003(iParam0, 4, bParam11);
			func_1005(iParam0);
			if (bParam20)
			{
				if (func_1785(Global_1360165[iParam0]))
				{
				}
			}
			func_1786(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1778(iParam0, 0);
			func_708(iParam0, 16, 1);
			func_963(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1390(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1787(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1788(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1789(cParam0, iParam1, iParam2, func_324(iParam2, 0));
	func_447(cParam0, iParam1, 512);
	if (bParam5)
	{
		func_447(cParam0, iParam1, 128);
	}
	else
	{
		func_448(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1391(int iParam0)
{
	if (!func_512(iParam0))
	{
		return;
	}
	iVar0 = func_549(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1392(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1393(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1402(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1394(int iParam0)
{
	iParam0 = func_266(iParam0);
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
	func_1790(&Var0);
	func_1791(iParam0, Var0);
	func_1792(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1793(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1794(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1795(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1796(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1797(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1798(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1799(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1800(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1395(vector3 vParam0)
{
	return func_1801(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1396(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_527(iParam0))
	{
		return false;
	}
	iVar0 = func_215(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1397(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_521(iParam0);
	func_521(iParam0);
	func_1802(iParam0, iParam1);
	func_1803(iParam0, iParam1);
	func_1804(iParam0, iParam1);
	iVar1 = func_215(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1805(iVar1);
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
	iVar3 = func_215(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1805(iVar3);
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
	func_268();
}

bool func_1398()
{
	iVar0 = func_1335();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1399()
{
	iVar0 = func_1335();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1806(0);
}

int func_1400(int iParam0)
{
	iParam0 = func_266(iParam0);
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

int func_1401(int iParam0)
{
	iParam0 = func_266(iParam0);
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

int func_1402(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_1403(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1645(&iVar0, &iVar1, &iVar2);
	func_1646(iParam0, iVar0);
	func_1647(iParam0, iVar1);
	func_1648(iParam0, iVar2);
	func_1807(iParam0, 1);
	func_1808(iParam0, 1);
}

void func_1404(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1809(iParam0, 1);
}

void func_1405(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_266(iParam0);
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

bool func_1406(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1015(iParam0, 1);
}

struct<2> func_1407(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1810(iParam0, &uVar2))
	{
	}
	if (!func_1811(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1408()
{
	if (func_1812(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1812(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1812(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1812(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1812(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1812(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1409(int iParam0, var uParam1, var uParam2, int iParam3)
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
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return;
	}
	func_1813(iParam0);
	func_1814(iParam0, uParam1);
	func_1815(iParam0);
	func_1816(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1817(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1410(int iParam0)
{
	iParam0 = func_266(iParam0);
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

bool func_1411(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1412(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1413(int iParam0)
{
	return iParam0;
}

bool func_1414(int iParam0)
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

int func_1415(var uParam0)
{
	return *uParam0;
}

bool func_1416(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_1818(iParam0) };
	if (func_1768(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_880(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1819(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1417(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1418(var uParam0)
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

bool func_1419(var uParam0)
{
	switch (func_1820(uParam0))
	{
		case 0:
			uParam0->f_24 = func_285();
			iVar4 = func_285();
			func_1197(&iVar4, uParam0->f_6);
			func_1198(&iVar4, 0);
			func_1199(&iVar4, 0);
			if (func_1034(uParam0->f_24, iVar4, 1))
			{
				func_334(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1821(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1822(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1823(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1822(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1823(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_334(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_695(iVar4), func_696(iVar4), func_697(iVar4));
				func_1824(get_clock_hours());
				func_1825(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1420(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1421(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1826(2000);
	Global_16 = 0;
	func_1827();
	set_entity_invincible(Global_35, func_1828(*iParam0, 8));
	if (!func_1828(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1828(*iParam0, 2) || func_1828(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1828(*iParam0, 16))
	{
		func_235(1);
	}
	if (func_1828(*iParam0, 32))
	{
		func_626(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1829(-1623728698, 0);
	}
	func_808(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1422(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1423(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1424(var uParam0)
{
	return *uParam0;
}

bool func_1425(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1426(uParam0, 32768))
	{
		return true;
	}
	if (func_1830(uParam0) >= 3)
	{
		uParam0->f_2286 = func_942(get_player_index(), 0, 0, 1);
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
		func_1831(uParam0);
	}
	if (func_1830(uParam0) < 10)
	{
		if (func_1830(uParam0) == 3)
		{
			func_1832(uParam0, iParam5, bParam6);
		}
		else if (func_1830(uParam0) > 3)
		{
			if (func_1424(uParam0) == 0)
			{
				if (!func_1426(uParam0, 524288))
				{
					func_1833(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1834(uParam0, 4);
					func_1835(uParam0, 10);
					func_1836(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1426(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1837(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1838(0);
			func_1839();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_1837(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1840(uParam0, uParam0->f_2074))
				{
					if (func_1841(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_1842(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_1842(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_1843(uParam0);
			}
		}
	}
	bVar0 = func_1844(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1426(uParam0, 268435456) && bVar1) && !func_1426(uParam0, 262144))
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
				func_746(uParam0, 131072);
				func_746(uParam0, 268435456);
			}
		}
		if (func_1845(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_1837(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1424(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1830(uParam0) == 3 || func_1426(uParam0, 131072))
	{
		func_1846(uParam0);
		if (!func_1426(uParam0, 262144))
		{
			if ((bVar0 && func_1426(uParam0, 65536)) || func_1426(uParam0, 131072))
			{
				func_746(uParam0, 32768);
				func_1834(uParam0, 4);
				func_1835(uParam0, 10);
				uParam0->f_2159 = 1;
				func_1836(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1830(uParam0) >= 3)
	{
		func_1847(uParam0, iParam5);
		func_1848(uParam0);
		if (!func_1849(uParam0, 1))
		{
			func_1850(uParam0);
		}
		func_1851(uParam0);
	}
	switch (func_1830(uParam0))
	{
		case 0:
			func_1852(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1853(uParam0);
			break;
		case 2:
			func_1854(uParam0);
			break;
		case 3:
			if (func_1855(uParam0))
			{
				func_1856(2);
				func_1842(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_220(&(uParam0->f_2262));
				func_1834(uParam0, 1);
				func_1857();
				func_1835(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1426(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1830(uParam0) == 5)
			{
				if (func_1858(uParam0))
				{
					func_1834(uParam0, 2);
					func_1835(uParam0, 6);
				}
			}
			if (func_1830(uParam0) == 6)
			{
				if (func_1859(uParam0))
				{
					func_1834(uParam0, 3);
					func_1835(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1860(&(uParam0->f_2262)) >= 15f)
			{
				if (func_1861(uParam0, iParam5))
				{
					if (func_1862(uParam0))
					{
						uParam0->f_2075 = func_1863(uParam0);
						func_220(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1834(uParam0, 6);
						func_1835(uParam0, 9);
					}
					else
					{
						func_1834(uParam0, 4);
						func_1835(uParam0, 10);
						func_1836(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1861(uParam0, iParam5))
			{
				func_1836(uParam0, iParam5);
				func_1835(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1426(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1427(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1428(var uParam0, var uParam1)
{
	if (func_1426(uParam1, 32768))
	{
		Var0 = { func_1864(uParam0) };
		func_1865(uParam0, &Var0);
		if (func_1426(uParam1, 131072))
		{
			func_747(uParam0, 268435456);
			if (func_396(uParam0->f_865))
			{
				uParam0->f_865 = { func_1866(uParam1, uParam1->f_2074) };
			}
			if (func_396(uParam0->f_862))
			{
				uParam0->f_862 = { func_1866(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1426(uParam1, 268435456))
		{
			func_1867(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1426(uParam1, 524288))
	{
		func_747(uParam0, 67108864);
		func_1427(uParam1, 524288);
	}
	if (func_1845(uParam1, 128))
	{
		func_747(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_1837(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1867(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1429(char[4] cParam0)
{
	if (func_797(&(cParam0->f_7375), 128) || func_797(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_1868(&(cParam0->f_7375));
		func_1348(&(cParam0->f_7375), 128, 1);
		func_1348(&(cParam0->f_7375), 256, 1);
		func_1348(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1430(char[4] cParam0)
{
	func_1869(&(cParam0->f_7375));
}

bool func_1431(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_1870(uParam4, &cParam0);
	if (func_797(uParam4, 2) && !func_797(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1871(uParam4) != 1)
	{
		func_1872(uParam4);
	}
	{
	}