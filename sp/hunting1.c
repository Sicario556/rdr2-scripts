void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = 1692;
	iLocal_15 = 802784330;
	iLocal_17 = 1;
	iLocal_18 = 2;
	iLocal_19 = 3;
	iLocal_20 = 4;
	iLocal_21 = 5;
	iLocal_22 = 6;
	iLocal_23 = 7;
	iLocal_24 = 8;
	iLocal_25 = 9;
	iLocal_26 = 10;
	iLocal_27 = 11;
	iLocal_28 = 12;
	iLocal_29 = 25;
	sLocal_806 = "hunting1_HSO_HoseaGotoHorseshop";
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_807, 1073741824);
		func_2(&uLocal_807, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_807);
	func_5(&uLocal_807);
	while (!func_6(&uLocal_807, -2147483648))
	{
		func_7(&uLocal_807);
		wait(0);
	}
	while (!func_2(&uLocal_807, 0))
	{
		wait(0);
	}
	terminate_this_thread();
}

void func_1(var uParam0, int iParam1)
{
	uParam0->f_5309 = (uParam0->f_5309 || iParam1);
}

bool func_2(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 4096))
	{
		return true;
	}
	if (get_cause_of_most_recent_force_cleanup() == 4096)
	{
		func_9(uParam0);
		_display_hud_component(-1679307491);
		_display_hud_component(1331687942);
		if (func_10(Global_43801))
		{
			func_11(&Global_43801, 1, 1);
		}
		_uilog_clear_cached_objective();
		_0x1096603b519c905f("");
		func_13(func_12(uParam0->f_607), 0, 2);
		func_14();
		func_15(1);
		func_16(1, 0);
		func_17(uParam0, 1);
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
		if (!func_6(uParam0, 1048576))
		{
			if (func_20() == 0)
			{
				func_21(0);
			}
			else if (func_22(uParam0) != 0)
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					if (_0x1204eb53a5fbc63d())
					{
						return false;
					}
					if (func_22(uParam0) == 1 || func_22(uParam0) == 2)
					{
						if (func_23(&(uParam0->f_8269)) && func_24(&(uParam0->f_8269)))
						{
							func_25(0, &(uParam0->f_8269.f_1282));
						}
					}
					if (!func_26(&(uParam0->f_13118)))
					{
						func_27(&(uParam0->f_13118), 0);
					}
					bVar0 = _0x139efb0a71dd9011();
					if (bVar0)
					{
						func_1(uParam0, 256);
					}
					bVar1 = _0x7ce9dc58e3e4755f();
					if (bVar1 && func_6(uParam0, 256))
					{
						_0x16e9abdd34ddd931();
						do_screen_fade_out(0);
					}
					else
					{
						if (((!bVar0 && !func_28(uParam0, bVar1)) && !func_29()) && !func_6(uParam0, 80))
						{
							if (!bVar1)
							{
								func_30(uParam0);
							}
							return false;
						}
						if (func_6(uParam0, 64))
						{
							_0x16e9abdd34ddd931();
							do_screen_fade_out(0);
						}
						else if (func_22(uParam0) == 2)
						{
							if (uParam0->f_13104 == -1)
							{
								if (func_31(uParam0))
								{
									uParam0->f_13104 = get_game_timer();
								}
							}
							if ((uParam0->f_13104 != -1 && get_game_timer() > uParam0->f_13104 + 4000) || bVar1)
							{
								_0x16e9abdd34ddd931();
								do_screen_fade_out(0);
							}
						}
						else if (func_22(uParam0) == 1)
						{
							if (func_28(uParam0, bVar1))
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
			else if (func_6(uParam0, 2))
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
			if (!func_32() && func_22(uParam0) != 0)
			{
				func_36(uParam0, func_34(func_33(uParam0)), func_34(func_35(uParam0)), func_33(uParam0), func_35(uParam0));
			}
		}
	}
	if (_does_anim_scene_exist(uParam0->f_7375.f_804))
	{
		if (check_ownership_of_anim_scene(uParam0->f_7375.f_804))
		{
			_delete_anim_scene(uParam0->f_7375.f_804);
		}
	}
	func_1(uParam0, 1048576);
	if (!func_6(uParam0, 2097152))
	{
		if (!func_9(uParam0))
		{
			return false;
		}
		func_1(uParam0, 2097152);
	}
	_0x1096603b519c905f("");
	clear_focus();
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	set_time_scale(1f);
	func_37(&(uParam0->f_8269));
	if (func_23(&(uParam0->f_8269)))
	{
		func_38(&(uParam0->f_8269));
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
	if (!func_6(uParam0, 8))
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
	func_46(uParam0);
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
	if (does_cam_exist(uParam0->f_609.f_2))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(uParam0->f_609.f_2, false);
	}
	func_51(&(uParam0->f_10792));
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
	if (func_22(uParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		func_56(uParam0);
	}
	func_57(uParam0, 0, !bVar2, bVar2);
	func_58(uParam0, !bVar2);
	func_59(0);
	func_59(1);
	_0xdf93973251fb2ca5(player_id(), 1);
	func_60(0);
	func_62(func_61(uParam0));
	func_63(func_61(uParam0));
	func_64(0);
	func_65(0);
	func_66(func_22(uParam0));
	func_67(uParam0);
	if (!bVar2)
	{
		func_16(1, 0);
	}
	if (func_22(uParam0) != 1)
	{
		func_68(0, &(uParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	func_69(1);
	func_70(0);
	func_71(Global_1935630, 2097152);
	func_18(0);
	_uilog_mark_all_entries_availability(0, "");
	if (func_22(uParam0) == 0)
	{
		func_72((*Global_1835011)[uParam0->f_607]->f_1);
	}
	func_73();
	if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, true);
	}
	if (!bParam1)
	{
		switch (func_22(uParam0))
		{
			case 0:
				if (!is_screen_faded_in())
				{
					if ((!is_screen_fading_in() && !func_6(uParam0, 4)) && !func_6(uParam0, 2))
					{
						do_screen_fade_in(1000);
					}
				}
				func_74(uParam0);
				func_75(uParam0);
				func_76();
				func_78(func_77(), 0);
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_80(uParam0->f_607);
				bVar3 = func_81();
				if (!func_82(32768))
				{
					func_83(func_12(uParam0->f_607), !func_6(uParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_84(func_12(uParam0->f_607), bVar3);
				}
				func_17(uParam0, bParam1);
				if (uParam0->f_607 != 77)
				{
					_uilog_mark_mission_completed(func_85(uParam0));
				}
				func_14();
				if (func_82(32768))
				{
					do_screen_fade_out(0);
					func_86();
					func_87(0);
				}
				else if (func_6(uParam0, 2))
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
				func_92(func_12(uParam0->f_607));
				func_93();
				if (func_22(uParam0) == 2)
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
				func_13(func_12(uParam0->f_607), 0, 2);
				break;
			default:
				func_83(func_12(uParam0->f_607), 1, 1, 0, 1);
				func_14();
				break;
		}
		if (func_22(uParam0) != 0)
		{
			Var6 = { func_96(uParam0) };
			func_97(func_12(uParam0->f_607), func_22(uParam0), &Var6, 0, 0, func_6(uParam0, 64));
		}
	}
	func_98(1);
	func_19(3);
	func_99(uParam0, 4096);
	return true;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4(var uParam0, var uParam1)
{
	_0xed9582b3da8f02b4(20);
	uParam1->f_608 = uParam0->f_1;
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
	func_100(uParam1);
	if (!func_20() == 0)
	{
		if (func_101(uParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < uParam1->f_7375.f_13)
			{
				if (((!is_entity_dead(&(uParam1->f_7375.f_13[iVar4])) && is_entity_a_ped(&(uParam1->f_7375.f_13[iVar4]))) && !is_in_itemset(&(uParam1->f_7375.f_13[iVar4]), iVar0)) && get_ped_index_from_entity_index(&(uParam1->f_7375.f_13[iVar4])) != Global_35)
				{
					add_to_itemset(&(uParam1->f_7375.f_13[iVar4]), iVar0);
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
		func_103(uParam1, 4194304);
	}
	if (func_104())
	{
		func_103(uParam1, 8388608);
	}
	if (func_105())
	{
		if (!func_104() && !func_102())
		{
			func_103(uParam1, 4);
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
		func_107(uParam1, func_106());
	}
	func_108(uParam1, uParam0);
	func_109(uParam1);
	if (uParam1->f_13105 > _0x62de46f061caa468())
	{
		_0xf008e0ba1fe1d644((uParam1->f_13105 - _0x62de46f061caa468()));
	}
}

void func_5(var uParam0)
{
	cVar0 = func_110(uParam0->f_607);
	set_mission_name(true, &cVar0);
	if (!get_mission_flag())
	{
		set_mission_flag(true);
	}
	_0x1096603b519c905f(&cVar0);
	if (uParam0->f_607 != 77)
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
	func_40(func_115(uParam0));
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
	func_118(uParam0);
	_0x33d51f801cb16e4f();
	if (!Global_1935630->f_12)
	{
		func_119(0, 0);
		_set_ped_crouch_movement(Global_35, false, 0, false);
		if (!func_120(uParam0, 16384) && (func_121(uParam0, func_33(uParam0), 2) || func_105()))
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
				if (!func_105() && !func_121(uParam0, func_33(uParam0), 2))
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
		func_123(uParam0);
	}
	func_70(1);
	func_39(0);
	func_124(uParam0, -1038436471);
	if (!Global_1935630->f_12)
	{
		if (!func_105())
		{
			Var2 = { func_34(func_33(uParam0)) };
			if (func_33(uParam0) != 0)
			{
				Var2 = { func_125(uParam0->f_607) };
			}
			if (!func_126(Var2))
			{
				func_103(uParam0, 1048576);
			}
			func_107(uParam0, 0);
			if (func_127(uParam0, 3) || func_128())
			{
				func_129(uParam0, func_125(uParam0->f_607), 0);
			}
		}
		else
		{
			if (!is_ped_injured(player_ped_id()))
			{
				freeze_entity_position(player_ped_id(), false);
				set_entity_visible(player_ped_id(), true);
				func_130(get_entity_coords(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			func_107(uParam0, func_106());
		}
		_0x15b0cc1b36f1de29(&((*Global_1835011)[uParam0->f_607]->f_8), 0, func_131(func_33(uParam0)), func_105());
	}
	func_132(uParam0);
	func_133(uParam0, 0);
	func_134(uParam0, 0);
	if (!func_135(uParam0, func_33(uParam0)))
	{
		func_107(uParam0, 0);
	}
	func_136(uParam0);
	func_137(uParam0);
	func_138(uParam0);
	func_103(uParam0, 2097152);
	func_139(uParam0, func_33(uParam0), 134217728);
	if (func_82(32768))
	{
		func_1(uParam0, 4);
	}
	func_140(uParam0);
	func_141(uParam0, func_33(uParam0));
	func_142(func_61(uParam0));
	if (!func_120(uParam0, 65536))
	{
		func_143(func_61(uParam0));
	}
	func_144(uParam0, player_ped_id(), "ARTHUR", 0);
	func_145(uParam0);
	func_146(uParam0);
	func_147(uParam0);
	func_148(uParam0, 30f);
	func_149(uParam0, 40f);
	func_150(uParam0, Global_35, 0, 0, 0, 0, 0);
	func_98(0);
	_0xa6a3a3f96b8b030e();
	func_18(1);
	_uilog_mark_all_entries_availability(2, "");
	if (uParam0->f_607 != 77)
	{
		cVar6 = func_110(uParam0->f_607);
		_uilog_mark_entry_availability(1, get_hash_key(&cVar6), 0, "");
	}
	if (is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, false);
	}
}

bool func_6(var uParam0, int iParam1)
{
	return (uParam0->f_5309 && iParam1) != 0;
}

void func_7(var uParam0)
{
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_116(func_77()))
	{
		_0xf45e46deecf7df6e(16384, 0, 0, -1, -1);
	}
	if (!func_121(uParam0, func_33(uParam0), 16384))
	{
		func_151();
	}
	if (!func_8(uParam0, 32768))
	{
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	}
	if (!func_8(uParam0, 2048))
	{
		func_152(1, 0);
	}
	switch (func_153(uParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {func_154(func_61(uParam0))}, 4);
			if (!is_string_null_or_empty(&uVar0))
			{
				func_103(uParam0, 64);
			}
			func_155(uParam0, 0);
			func_156(uParam0);
			if (func_157(uParam0))
			{
				if (!is_entity_dead(func_158(uParam0)) && func_127(uParam0, 3))
				{
					freeze_entity_position(func_158(uParam0), false);
				}
				func_159(uParam0, 1);
			}
			if (func_6(uParam0, -2147483648))
			{
				func_159(uParam0, 2);
			}
			break;
		case 1:
			if (func_160(uParam0))
			{
				func_1(uParam0, -2147483648);
				func_159(uParam0, 2);
			}
			func_155(uParam0, func_161(uParam0, func_33(uParam0)) > 4);
			break;
		case 2:
			if (func_2(uParam0, 0))
			{
				func_1(uParam0, -2147483648);
				func_159(uParam0, 3);
			}
			break;
		case 3:
			terminate_this_thread();
			break;
	}
	if (func_153(uParam0) < 2)
	{
	}
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0->f_5307 && iParam1) != 0;
}

bool func_9(var uParam0)
{
	func_162(76, 0);
	func_163(76, 0, 1);
	func_164(0, 0, 1103626240);
	_set_far_shadows_suppressed(true);
	_0x0d7fd6a55fd63aef(22, 2, 0);
	_0x160825dadf1b04b3();
	_0x0751d461f06e41ce(player_id(), 33, 0, 0);
	_0x0751d461f06e41ce(player_id(), 49, 0, 0);
	_0x0751d461f06e41ce(player_id(), 50, 0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (func_165(7))
	{
		func_59(7);
	}
	set_ped_config_flag(Global_35, 159, false);
	set_ped_config_flag(Global_35, 308, false);
	set_ped_config_flag(Global_35, 511, false);
	if (does_entity_exist(Global_1900383->f_393))
	{
		_0x18ff3110cf47115d(Global_1900383->f_393, 4, 1);
	}
	set_ped_config_flag(func_166(uParam0), 367, false);
	if (does_entity_exist(Local_30.f_158))
	{
		if (get_entity_model(Local_30.f_158) == 802784330)
		{
			_0x2eb75fb86c41f026(Local_30.f_158, 3, 1);
			set_ped_config_flag(Local_30.f_158, 284, false);
			set_ped_flee_attributes(Local_30.f_158, 512, false);
			set_ped_flee_attributes(Local_30.f_158, 16384, false);
			set_ped_config_flag(Local_30.f_158, 297, false);
			_0x6569f31a01b4c097(Local_30.f_158, 17, 0);
		}
		set_ped_config_flag(Local_30.f_158, 367, false);
		set_ped_can_be_targetted(Local_30.f_158, true);
		_0xa3db37edf9a74635(player_id(), Local_30.f_158, 33, 0, 0);
	}
	if (does_entity_exist(Local_30.f_159))
	{
		_0xba8818212633500a(Local_30.f_159, 0, 0);
		_0xf74e134f40192884(Local_30.f_159, 0);
	}
	if (func_22(uParam0) == 0)
	{
		func_167(76, 1);
		func_168(101, 32);
	}
	else
	{
		func_167(76, 0);
	}
	func_163(76, 0, 1);
	func_169(76, 0);
	if (func_170(5))
	{
		func_172(uParam0, 5, func_171(), 0, 0, 1, 0);
	}
	if (func_173())
	{
		if (func_22(uParam0) == 0)
		{
			func_174((*Global_1835011)[uParam0->f_607]->f_1, 1);
		}
		else
		{
			func_174((*Global_1835011)[uParam0->f_607]->f_1, 0);
		}
	}
	if (func_10(Local_30.f_305))
	{
		func_11(&(Local_30.f_305), 1, 1);
	}
	func_175();
	func_18(0);
	func_176(Local_30.f_223[0], Local_30.f_223[0]->f_1, 0);
	func_177(Local_30.f_223[0]->f_1);
	func_177(Local_30.f_339);
	func_177(&(Local_30.f_254[14]));
	func_177(&(Local_30.f_254[15]));
	func_177(&(Local_30.f_254[17]));
	func_177(&(Local_30.f_254[18]));
	func_177(&(Local_30.f_254[19]));
	func_177(&(Local_30.f_254[25]));
	func_177(&(Local_30.f_254[27]));
	func_177(&(Local_30.f_254[26]));
	if (_does_volume_exist(&(Local_30.f_254[9])))
	{
		_0xd17672447692478e(&(Local_30.f_254[9]), 0);
	}
	func_177(&(Local_30.f_254[9]));
	if (_does_volume_exist(&(Local_30.f_254[3])))
	{
		_0xe5ef9de716ff737e(&(Local_30.f_254[3]), 1, 0);
	}
	func_177(&(Local_30.f_254[3]));
	if (_does_volume_exist(&(Local_30.f_254[4])))
	{
		_0xe5ef9de716ff737e(&(Local_30.f_254[4]), 1, 0);
	}
	func_177(&(Local_30.f_254[4]));
	if (_does_volume_exist(&(Local_30.f_254[5])))
	{
		_0xe5ef9de716ff737e(&(Local_30.f_254[5]), 1, 0);
	}
	func_177(&(Local_30.f_254[5]));
	if (_does_volume_exist(&(Local_30.f_254[6])))
	{
		_0xe5ef9de716ff737e(&(Local_30.f_254[6]), 1, 0);
	}
	func_177(&(Local_30.f_254[6]));
	if (_does_volume_exist(&(Local_30.f_254[7])))
	{
		_0xe5ef9de716ff737e(&(Local_30.f_254[7]), 1, 0);
	}
	func_177(&(Local_30.f_254[7]));
	if (_does_volume_exist(&(Local_30.f_254[1])))
	{
		_0xd17672447692478e(&(Local_30.f_254[1]), 0);
	}
	func_177(&(Local_30.f_254[1]));
	if (_does_volume_exist(&(Local_30.f_254[2])))
	{
		_0xd17672447692478e(&(Local_30.f_254[2]), 0);
	}
	func_177(&(Local_30.f_254[2]));
	if (_does_volume_exist(&(Local_30.f_254[10])))
	{
		_0xd17672447692478e(&(Local_30.f_254[10]), 0);
	}
	func_177(&(Local_30.f_254[10]));
	if (_does_volume_exist(&(Local_30.f_254[11])))
	{
		_0xd17672447692478e(&(Local_30.f_254[11]), 0);
	}
	func_177(&(Local_30.f_254[11]));
	if (_does_volume_exist(&(Local_30.f_254[12])))
	{
		_0xd17672447692478e(&(Local_30.f_254[12]), 0);
	}
	func_177(&(Local_30.f_254[12]));
	if (_does_volume_exist(&(Local_30.f_254[13])))
	{
		_0xd17672447692478e(&(Local_30.f_254[13]), 0);
	}
	func_177(&(Local_30.f_254[13]));
	remove_all_cover_blocking_areas();
	func_178();
	func_179(&(Local_30.f_318), 1);
	func_179(&(Local_30.f_319), 1);
	func_179(&(Local_30.f_320), 1);
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_179(Local_30.f_322[iVar0], 1);
		iVar0++;
	}
	if (!func_180(13))
	{
		_0x28a13bf6b05c3d83(player_id(), 0);
	}
	if (Local_30.f_138)
	{
		iVar1 = _find_closest_active_scenario_point_of_type(1527.352f, 1677.043f, 139.962f, 859201438, 1f, 0, false);
		if (_does_scenario_point_exist(iVar1))
		{
			_0x5a40040bb5ae3ea2(iVar1);
		}
	}
	if (does_entity_exist(func_181()))
	{
		if (!is_ped_injured(func_181()))
		{
			set_entity_invincible(func_181(), false);
		}
	}
	if (does_entity_exist(Global_1392040->f_9))
	{
		if (_0x88ad6cc10d8d35b2(Global_1392040->f_9))
		{
			uVar2 = Global_1392040->f_9;
			delete_entity(&uVar2);
		}
	}
	func_182();
	func_183();
	func_184(4096);
	func_184(1024);
	if (Local_30.f_141)
	{
		_0x0751d461f06e41ce(player_id(), 6, 0, 0);
	}
	_text_database_delete("RHUNT");
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

void func_17(var uParam0, bool bParam1)
{
	Var0 = func_191(func_12(uParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_131(func_33(uParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_213(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = func_22(uParam0);
	}
	_0xd894437e12c17aec(&((*Global_1835011)[uParam0->f_607]->f_8), &Var0);
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

int func_22(var uParam0)
{
	return uParam0->f_10783;
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

bool func_28(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 128) && func_29())
	{
		return true;
	}
	if (func_219(&(uParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!func_31(uParam0))
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

void func_30(var uParam0)
{
	func_220(!func_6(uParam0, 32), 1);
	func_1(uParam0, 32);
}

bool func_31(var uParam0)
{
	return true;
}

bool func_32()
{
	return func_188(Global_1572864->f_8);
}

int func_33(var uParam0)
{
	return uParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	if (iParam0 == iLocal_16)
	{
		func_222(&Var0, func_221(-115.2764f, -19.3922f, 94.919f, 347.0219f));
	}
	else if (iParam0 == iLocal_17)
	{
		func_222(&Var0, func_221(-108.6454f, -14.7981f, 94.7809f, 268.5526f));
	}
	else if (iParam0 == iLocal_18)
	{
		func_222(&Var0, func_221(-366.1518f, 788.3132f, 115.1694f, 72.34f));
	}
	else if (iParam0 == iLocal_19)
	{
		func_222(&Var0, func_221(-358.8489f, 787.681f, 115.172f, 277.0979f));
	}
	else if (iParam0 == iLocal_20)
	{
		func_222(&Var0, func_221(1769.113f, 1265.011f, 189.1195f, 194.1072f));
	}
	else if (iParam0 == iLocal_21)
	{
		func_222(&Var0, func_221(1769.682f, 1263.484f, 189.6674f, 72.34f));
	}
	else if (iParam0 == iLocal_22)
	{
		func_222(&Var0, func_221(1779.859f, 1251.595f, 190.042f, 72.34f));
	}
	else if (iParam0 == iLocal_23)
	{
		func_222(&Var0, func_221(1570.091f, 1560.277f, 145.0866f, 137.4707f));
	}
	else if (iParam0 == iLocal_24)
	{
		func_222(&Var0, func_221(1537.193f, 1657.208f, 139.9977f, 35.0718f));
	}
	else if (iParam0 == iLocal_25)
	{
		func_222(&Var0, func_221(1508.058f, 1680.79f, 139.112f, 137.4707f));
	}
	else if (iParam0 == iLocal_26)
	{
		func_222(&Var0, func_221(1536.307f, 1656.527f, 140.0207f, 17.0706f));
	}
	else if (iParam0 == iLocal_27)
	{
		func_222(&Var0, func_221(1520.126f, 1685.467f, 140.2808f, 72.897f));
	}
	else if (iParam0 == iLocal_28)
	{
		func_222(&Var0, func_221(1536.307f, 1656.527f, 140.0207f, 137.4707f));
	}
	else if (iParam0 == iLocal_29)
	{
		func_222(&Var0, func_221(-115.2764f, -19.3922f, 94.919f, 347.0219f));
	}
	return Var0;
}

int func_35(var uParam0)
{
	return func_223(uParam0, func_33(uParam0));
}

void func_36(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_206(0);
	func_224(func_12(uParam0->f_607), Var0, Var4, func_131(iParam9), func_131(iParam10));
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

void func_46(var uParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (uParam0->f_607)
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

void func_56(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_252(uParam0->f_5423[iVar0]))
		{
			if (!is_entity_dead(&(uParam0->f_5423[iVar0])))
			{
				if (is_entity_a_ped(&(uParam0->f_5423[iVar0])))
				{
					clear_ped_tasks_immediately(get_ped_index_from_entity_index(&(uParam0->f_5423[iVar0])), false, true);
				}
			}
		}
		iVar0++;
	}
	if (func_253(uParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_254(uParam0->f_5421))
		{
			iVar1 = func_255(uParam0->f_5421, iVar0);
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

void func_57(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_170(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_172(uParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(var uParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_166(uParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_256(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_257(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_258(7);
		}
		else
		{
			func_259(iVar0, 0);
		}
		func_260(uParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_262(iParam0, 32);
	func_263();
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

int func_61(var uParam0)
{
	return uParam0->f_607;
}

void func_62(int iParam0)
{
	Var0 = { func_264(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_265(iParam0) };
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

void func_67(var uParam0)
{
	func_266(&(uParam0->f_13121));
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
		iVar2 = func_267(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_268(iVar1))
			{
				if (func_269(iVar1, 4))
				{
					func_270(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_271(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_267(iParam0);
		if (iVar3 == 59)
		{
			func_271(1);
		}
		else if (iVar3 == 61)
		{
			func_271(0);
		}
		else if (iVar3 == 83)
		{
			func_271(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_268(iVar0))
		{
			if (func_269(iVar0, 4))
			{
				if (func_269(iVar0, 16))
				{
					func_272(iVar0, 1);
				}
				if (func_269(iVar0, 8))
				{
					func_273(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_74(var uParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	iVar0 = func_33(uParam0);
	iVar1 = func_161(uParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_274(uParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (func_22(uParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		func_275(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_276(uParam0);
	}
}

void func_75(var uParam0)
{
	iVar0 = 0;
	if (func_277(uParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_278(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
		if (((!bVar0 && func_279(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_281(iParam0, func_280());
			func_168(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_282(iParam0, 67108864);
		func_281(iParam0, -15);
	}
	func_283(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_284(11);
	}
	else
	{
		func_285(11);
	}
}

void func_80(int iParam0)
{
	if (func_286(iParam0, 0))
	{
		func_287(262144, 5, 0, 1);
		func_288(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_289(101, 7, 1f, 0, 1);
			func_289(89, 7, 1f, 0, 1);
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
	if (func_290(iParam0) == 4)
	{
		func_291(iParam0, func_280());
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
		func_292(0, 2);
		if (!bVar1 && bParam1)
		{
			func_293();
		}
	}
	else
	{
		func_202(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_294(iParam0);
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
						if (func_267(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_267(iParam0)]->f_8), true);
						}
					}
					else if ((func_267(iParam0) != 95 && func_267(iParam0) != 82) && !func_295((*Global_1347702)[func_267(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_267(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_267(iParam0)]->f_8), true);
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
		func_297(func_267(iParam0), iVar6, func_296());
	}
	else if (iVar0 == 8)
	{
		func_299(func_267(iParam0), iVar6, func_296(), func_298());
	}
	if (!func_192(iParam0) == 5 && !func_192(iParam0) == 6)
	{
		iVar9 = func_300(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_301(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_302(func_267(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_303((iVar10 - 20), 0, iVar10);
					iVar11 = func_303((iVar11 - 10), 0, iVar11);
				}
				func_304(1);
				func_305(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_305(45, 0, 1);
				break;
			case 8:
				iVar10 = func_306(func_267(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_303((iVar10 - 20), 0, iVar10);
					iVar11 = func_303((iVar11 - 10), 0, iVar11);
				}
				func_305(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_307(func_267(iParam0)))
				{
					func_308(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_305(120, 0, 1);
				break;
			case 2:
				func_305(120, 0, 1);
				break;
			case 6:
				func_305(func_310(func_309(iParam0)), 0, 1);
				break;
			case 5:
				func_305(120, 0, 1);
				break;
		}
	}
	func_204(iParam0, 1);
	func_291(iParam0, func_280());
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
				switch (func_267(iParam0))
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
				if (func_268(func_267(iParam0)) && func_295((*Global_1347702)[func_267(iParam0)]->f_12, 4))
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
				if (func_267(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_128();
				}
				break;
			case 8:
				if (func_267(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_128();
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
				switch (func_267(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_311();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_312(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(-1267972061);
						func_312(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(1619534881);
						func_312(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(-755457379);
						func_312(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(1015404643);
						func_312(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(-1724192342);
						func_312(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(1310680212);
						func_312(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(-566881549);
						func_312(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(-1753730528);
						func_312(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(147796381);
						func_312(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(-378547623);
						func_312(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(829545206);
						func_312(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(891318243);
						func_312(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_314();
						func_315(967523420);
						func_316();
						func_317();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_318(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_312(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_319(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_319(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_320(304805134, 1, 1);
						if (!func_321((*Global_1347702)[21]->f_15, 1))
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
						func_322();
						break;
					case 26:
						func_323();
						break;
					case 17:
						func_324(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_325())
						{
							func_326(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_327(-514575035, -1))
						{
							iVar15 = func_280();
							func_328(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_329(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_325())
						{
							func_326(1529685685);
						}
						break;
					case 34:
						if (func_325())
						{
							func_326(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_330();
						break;
					case 37:
						func_331();
						if (func_332())
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
						func_333();
						break;
					case 43:
						func_334();
						break;
					case 44:
						if (!func_321((*Global_1347702)[82]->f_15, 1))
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
						if (!func_321((*Global_1347702)[83]->f_15, 1))
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
						func_335();
						break;
					case 59:
						func_336();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_337();
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
						func_338();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_319(451, 0);
						}
						if (!func_339(-1992824800))
						{
							if (func_339(1520110311))
							{
								iVar16 = func_280();
								func_328(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_329(1937177603, iVar16, 1);
							}
						}
						if (func_340(4))
						{
							if (!func_341(684296857, 1, 0))
							{
								iVar17 = func_280();
								func_328(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_329(-1439688706, iVar17, 1);
							}
						}
						func_312(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_342(89200);
						func_342(2300);
						func_342(2300);
						break;
					case 68:
						func_343();
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
						func_344();
						func_342(-139100);
						break;
					case 69:
						if (func_321((*Global_1347702)[9]->f_15, 1))
						{
							func_342(-6000);
						}
						break;
					case 70:
						func_342(23400);
						func_342(1900);
						func_342(-15000);
						break;
					case 71:
						func_342(-5500);
						break;
				}
				break;
			case 8:
				switch (func_267(iParam0))
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
						func_345();
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
						func_346();
						break;
					case 66:
						func_347();
						func_348();
						break;
					case 67:
						if (!func_349(6))
						{
							func_350(6);
						}
						if (!func_349(3))
						{
							func_350(3);
						}
						if (func_325())
						{
							func_326(1534638301);
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
						if (func_321((*Global_1835011)[69]->f_1, 1))
						{
							func_351(0);
							func_342(40500);
						}
						else
						{
							func_351(0);
							func_342(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_267(iParam0))
				{
					case 0:
						switch (func_309(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_352(iParam0);
		func_353();
		switch (iVar0)
		{
			case 1:
				switch (func_267(iParam0))
				{
					case 4:
						func_354(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_354(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_354(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_354(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_354(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_354(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_354(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_355(iParam0);
						func_354(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_354(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_354(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_341(-2046502963, 1, 0))
						{
							func_312(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_354(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_354(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_354(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_355(iParam0) == 0)
						{
							func_354(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_354(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_295((*Global_1347702)[func_267(iParam0)]->f_12, 536870912))
				{
					func_356(11, 1);
				}
				switch (func_267(iParam0))
				{
					case 109:
						func_354(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_356(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_354(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_354(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_354(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_354(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_357(0, 10, 11, 2116153146))
				{
					func_354(iParam0, func_355(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_357(0, 7, 11, -379687487))
				{
					func_354(iParam0, func_358(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_357(0, 8, 11, -1386089015))
				{
					func_354(iParam0, func_358(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_357(0, 11, 11, -1952009645))
				{
					func_354(iParam0, func_358(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_357(0, 12, 11, 2065895756))
				{
					func_354(iParam0, func_358(11), 1, 0.5f, 2, 0, 0, 1);
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
						if (iVar0 == 8 && func_267(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_360(func_359(Global_1879514->f_1));
						if (iVar0 == 8 && func_267(iParam0) == 58)
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
						if (func_268(func_267(iParam0)) && func_295((*Global_1347702)[func_267(iParam0)]->f_12, 1))
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
			func_361(bParam2, iVar20);
		}
	}
	func_203(1);
	if ((bVar13 || func_128()) && (func_193(iParam0) == 1 || func_193(iParam0) == 8))
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
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_357(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_362();
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
			switch (func_267(iParam0))
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
			switch (func_267(iParam0))
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

int func_85(var uParam0)
{
	cVar0 = func_110(uParam0->f_607);
	return get_hash_key(&cVar0);
}

void func_86()
{
	func_91(4112);
	func_90(6);
	vVar2 = { func_363((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_364(vVar2, uVar1, uVar0, 0);
	func_365(vVar2);
	Global_40.f_9.f_15 = func_366(vVar2, 0);
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
	func_367();
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
	func_368(Var10, 0);
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
			func_304(1);
			func_305(15, 0, 1);
			break;
		case 4:
			func_305(10, 0, 1);
			break;
		case 8:
			func_305(10, 0, 1);
			break;
		case 9:
			func_305(10, 0, 1);
			break;
		case 2:
			func_305(10, 0, 1);
			break;
		case 6:
			func_305(10, 0, 1);
			break;
		case 5:
			func_305(10, 0, 1);
			break;
	}
	func_203(1);
}

void func_93()
{
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

struct<8> func_96(var uParam0)
{
	return uParam0->f_10784;
}

void func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_369(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_370(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_370(&(Global_1347343->f_11), 16384);
	}
	if (func_371() >= 2)
	{
		if (!func_369(Global_1347343->f_11, 16384))
		{
			func_370(&(Global_1347343->f_11), 8);
		}
		func_209(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_227(Global_1935630, 2048);
	func_372(bParam5);
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
	}
	_0x6ac4af46a6b8dfb2(bParam0);
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 || iParam1);
}

void func_100(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (does_entity_exist(&(Global_43619[iVar0])))
		{
			*uParam0->f_7375.f_13[iVar0] = { *Global_43619[iVar0] };
			func_373(&(uParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		uParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(uParam0->f_7375.f_804);
	}
	if (func_196(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_374(uParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_375(&(uParam0->f_7375));
}

bool func_102()
{
	return Global_1572864->f_14;
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 || iParam1);
}

bool func_104()
{
	return Global_1572864->f_13;
}

bool func_105()
{
	return func_376() != -1;
}

int func_106()
{
	return Global_1572864->f_9;
}

void func_107(var uParam0, int iParam1)
{
	uParam0->f_597 = iParam1;
	settimera(0);
}

void func_108(var uParam0, var uParam1)
{
	uParam0->f_607 = -1;
	func_377(uParam0);
	uParam0->f_634[0] = 59059;
	uParam0->f_634[1] = 59059;
	uParam0->f_637 = 0;
	func_379(uParam0, *uParam1);
	func_380(uParam0);
}

void func_109(var uParam0)
{
	func_381(uParam0);
	Local_30.f_158 = get_ped_index_from_entity_index(func_382(uParam0, iLocal_15, 0));
	if (!does_entity_exist(Local_30.f_158))
	{
		iVar0 = func_383(uParam0, "Horse_01^1");
		if (does_entity_exist(iVar0))
		{
			Local_30.f_158 = get_ped_index_from_entity_index(iVar0);
		}
	}
	func_385(uParam0, func_384(func_33(uParam0)));
	func_386(uParam0, 4);
	_text_database_request("RHUNT");
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
			func_387(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

bool func_115(var uParam0)
{
	switch (uParam0->f_607)
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

void func_118(var uParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (uParam0->f_607)
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

bool func_120(var uParam0, int iParam1)
{
	return (uParam0->f_5308 && iParam1) != 0;
}

bool func_121(var uParam0, int iParam1, int iParam2)
{
	return func_388(uParam0->f_1[func_131(iParam1)]->f_11, iParam2);
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

void func_123(var uParam0)
{
	if (func_29())
	{
		func_389(&(uParam0->f_7375));
	}
}

void func_124(var uParam0, int iParam1)
{
	if (!_is_this_model_a_horse(iParam1))
	{
		return;
	}
	uParam0->f_8268 = iParam1;
}

Vector3 func_125(int iParam0)
{
	return func_390(iParam0);
}

bool func_126(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_391(Param0, Param0.f_3);
}

bool func_127(var uParam0, int iParam1)
{
	return (uParam0->f_608 && iParam1) != 0;
}

bool func_128()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_392())
	{
		return false;
	}
	if (!func_321((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[2]->f_1, 1) && func_321((*Global_1347702)[120]->f_15, 1)) && !func_321((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[37]->f_1, 1) && !func_321((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[57]->f_1, 1) && !func_321((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[26]->f_1, 1) && !func_321((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[62]->f_1, 1) && func_321((*Global_1835011)[63]->f_1, 1)) && !func_321((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[75]->f_1, 1) && !func_321((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[76]->f_1, 1) && !func_321((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[40]->f_1, 1) && func_321((*Global_1835011)[41]->f_1, 1)) && !func_321((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[62]->f_1, 1) && func_321((*Global_1835011)[63]->f_1, 1)) && !func_321((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[65]->f_1, 1) && func_321((*Global_1835011)[66]->f_1, 1)) && !func_321((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_129(var uParam0, vector3 vParam1, float fParam4)
{
	if (func_120(uParam0, 33554432))
	{
		return;
	}
	if (func_120(uParam0, 4096))
	{
		return;
	}
	if (func_393(vParam1))
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
		func_103(uParam0, 8);
	}
	func_103(uParam0, 4096);
	_0x4759cc730f947c81();
	_0x1ff00db43026b12f();
	start_player_teleport(player_id(), vParam1, fParam4, false, true, true, false);
	do_screen_fade_out(0);
	_set_milliseconds_per_game_minute(9999999);
	func_218(&(uParam0->f_603));
}

void func_130(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_131(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return func_394();
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

void func_132(var uParam0)
{
	if (_uilog_is_entry_registered(2, func_85(uParam0)))
	{
		_uilog_remove_entry(2, func_85(uParam0));
	}
	if (!_uilog_is_entry_registered(1, func_85(uParam0)))
	{
		func_395(uParam0->f_607);
	}
}

void func_133(var uParam0, int iParam1)
{
	uParam0->f_598 = iParam1;
}

void func_134(var uParam0, int iParam1)
{
	uParam0->f_599 = iParam1;
	func_27(&(uParam0->f_600), 1);
}

bool func_135(var uParam0, int iParam1)
{
	return uParam0->f_1[func_131(iParam1)]->f_12;
}

void func_136(var uParam0)
{
	func_396(&(uParam0->f_638));
	func_397(&(uParam0->f_819));
	func_398(&(uParam0->f_1020));
	func_399(&(uParam0->f_1081));
	func_400(&(uParam0->f_1126));
	func_401(&(uParam0->f_5147));
	func_402(&(uParam0->f_1124));
	func_403(&(uParam0->f_5188));
	func_404(&(uParam0->f_5239));
	func_405(&(uParam0->f_5249));
	func_406(&(uParam0->f_5265));
	func_407(&(uParam0->f_5286));
}

void func_137(var uParam0)
{
}

void func_138(var uParam0)
{
	func_408(uParam0, iLocal_15, 7);
	func_408(uParam0, -261930923, 14);
	func_408(uParam0, -1025740342, 14);
	func_408(uParam0, 320465243, 14);
	func_408(uParam0, -450053710, 8184);
	func_408(uParam0, 319326044, 1);
	func_408(uParam0, 556781651, 8);
	func_408(uParam0, -2077833597, 8);
	func_408(uParam0, -1473388640, 8);
	func_408(uParam0, -802660899, 8);
	func_408(uParam0, 896703492, 8);
	func_408(uParam0, -771866010, 16);
	func_408(uParam0, -1124266369, 4032);
	func_408(uParam0, -541762431, 24);
	func_408(uParam0, 1496261474, 48);
	func_408(uParam0, 737690157, 48);
	func_408(uParam0, 305182125, 48);
	func_408(uParam0, 312012583, 48);
	func_408(uParam0, -1456646750, 48);
	func_408(uParam0, 1948816661, 48);
	func_408(uParam0, 1307267863, 48);
	func_408(uParam0, 2119789466, 48);
	func_408(uParam0, -82199229, 48);
	func_408(uParam0, 1600083684, 48);
	func_408(uParam0, -841644977, 1408);
	func_408(uParam0, 1913959575, 128);
	func_408(uParam0, func_409(), 128);
	func_408(uParam0, -174543198, 128);
	func_408(uParam0, 1573336691, 2048);
	func_410(uParam0, 834622637, 48);
	func_412(uParam0, func_411(0), 6, 2, -1);
	func_412(uParam0, func_411(1), 12, 2, -1);
	func_412(uParam0, func_411(2), 24, 2, -1);
	func_412(uParam0, func_411(12), 16, 2, -1);
	func_412(uParam0, func_411(8), 64, 2, -1);
	func_412(uParam0, func_411(3), 128, 2, -1);
	func_412(uParam0, func_411(4), 128, 2, -1);
	func_412(uParam0, func_411(5), 128, 2, -1);
	func_412(uParam0, func_411(6), 3840, 2, -1);
	func_412(uParam0, func_411(7), 3328, 2, -1);
	func_412(uParam0, func_411(9), 3072, 2, -1);
	func_412(uParam0, func_411(9), 2048, 2, -1);
	func_412(uParam0, func_411(10), 4096, 2, -1);
	func_412(uParam0, func_411(11), 4096, 2, -1);
	func_413(uParam0, "script@rcm@hnt1@leadin@mcs1@base_exit_breakout", Local_30.f_13[0], 6, 0, "pl_base", 100f, 1);
	func_413(uParam0, "script@rcm@chnt1@ig@ig11_hosea_point_cme@ig11_hosea_point_cme", Local_30.f_13[1], 8, 0, "pl_point_right", 0, 1);
	func_413(uParam0, "script@rcm@chnt1@ig@ig1_hoseahorse@ig1_hoseahorse", Local_30.f_13[3], 16, 0, "pl_hosea_on_horse_loop", 0, 1);
	func_413(uParam0, "script@rcm@hntn@stage_01@ig_cme_blendout", Local_30.f_13[2], 8, 0, 0, 0, 1);
	func_413(uParam0, "script@rcm@chnt1@ig@ig2_hosea_cook_eat@ig2_hosea_cook_eat", Local_30.f_13[4], 16, 0, "pl_exit_good_girl", 0, 1);
	func_413(uParam0, "script@rcm@chnt1@ig@ig3_hoseasleep@ig3_hoseasleep", Local_30.f_13[5], 16, 2, "Pl_hosea_exit_eating_from_knife", 0, 1);
	func_413(uParam0, "script@rcm@chnt1@leadout@mcs2@leadout", Local_30.f_13[6], 32, 0, "pl_leadout", 0, 1);
	func_413(uParam0, "script@rcm@chnt1@ig@ig4_hoseapack@ig4_hoseapack", Local_30.f_13[7], 32, 0, "pl_leadout_to_loop", 0, 1);
	func_413(uParam0, "script@rcm@chnt1@ig@ig4_hoseapack@ig4_hoseapack", Local_30.f_13[9], 32, 0, "Pl_prompt_player_to_packup", 0, 1);
	func_413(uParam0, "script@rcm@chnt1@ig@ig4_hoseapack@ig4_hoseapack", Local_30.f_13[8], 32, 0, "Pl_readying_horse_loop", 0, 1);
	func_413(uParam0, "script@rcm@chnt1@ig@ig10_bait@ig10_bait", Local_30.f_13[14], 3840, 0, "pl_boulder_loop", 0, 1);
	func_413(uParam0, "script@rcm@chnt1@ig@ig10_bait@ig10_bait", Local_30.f_13[15], 2048, 0, "Pl_Matthew_enter_bait", 0, 1);
	func_413(uParam0, "script@rcm@chnt1@ig@ig10_bait@ig10_bait", Local_30.f_13[13], 2048, 0, "pl_arthur_enterl", 0, 1);
	func_413(uParam0, "script@rcm@chnt1@leadin@ext@leadin", Local_30.f_13[16], 3584, 2, "pl_base", 0, 1);
	func_413(uParam0, "script@ambient@animal@bear_legendary_hunted@action", Local_30.f_13[11], 512, 0, "pl_action", 0, 1);
	func_413(uParam0, "script@ambient@animal@bear_legendary_hunted@action_alt", Local_30.f_13[12], 2048, 0, "pl_action", 0, 1);
	func_413(uParam0, "script@rcm@CHNT1@IG@IG_INVESTIGATE@ig_investigate", Local_30.f_13[17], 128, 0, "pl_investigate_enter", 0, 1);
	func_413(uParam0, "script@rcm@CHNT1@IG@IG_INVESTIGATE@ig_investigate", Local_30.f_13[18], 128, 0, "pl_investigate_enter", 0, 1);
	func_413(uParam0, "script@rcm@CHNT1@IG@IG_INVESTIGATE@ig_investigate", Local_30.f_13[20], 128, 0, "pl_investigate_enter", 0, 1);
	func_413(uParam0, "script@rcm@CHNT1@IG@IG_INVESTIGATE@ig_investigate", Local_30.f_13[19], 256, 0, "pl_investigate_enter", 0, 1);
}

void func_139(var uParam0, int iParam1, int iParam2)
{
	func_414(&(uParam0->f_1[func_131(iParam1)]->f_11), iParam2);
}

void func_140(var uParam0)
{
}

void func_141(var uParam0, int iParam1)
{
	func_415(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_142(int iParam0)
{
	Var0 = { func_264(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_143(int iParam0)
{
	Var0 = { func_265(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_416(&(uParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_145(var uParam0)
{
	if (!func_253(uParam0->f_5421))
	{
		uParam0->f_5421 = { func_417() };
	}
}

void func_146(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_27(&(uParam0->f_603), 1);
	}
}

void func_147(var uParam0)
{
}

void func_148(var uParam0, float fParam1)
{
	func_418(&(uParam0->f_7375), fParam1);
}

void func_149(var uParam0, float fParam1)
{
	func_419(&(uParam0->f_7375), fParam1);
}

void func_150(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_420(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_373(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

void func_151()
{
	_0x15abd5004cad2d99(0);
	_0x785177e4d57d7389(player_id(), 1352191066, 3, 3, 1);
	_0x785177e4d57d7389(player_id(), 1171995096, 4, 0, -1);
}

void func_152(bool bParam0, bool bParam1)
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

int func_153(var uParam0)
{
	return *uParam0;
}

Vector3 func_154(int iParam0)
{
	if (!func_187(iParam0))
	{
		return vVar0;
	}
	return (*Global_1835011)[iParam0]->f_9;
}

void func_155(var uParam0, bool bParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 134217728))
	{
		func_138(uParam0);
		func_139(uParam0, func_33(uParam0), 134217728);
	}
	if (bParam1 && !func_121(uParam0, func_35(uParam0), 536870912))
	{
		if (func_421(uParam0, func_35(uParam0), 0))
		{
			func_139(uParam0, func_35(uParam0), 536870912);
		}
	}
	if (func_8(uParam0, 8192))
	{
		if (!func_8(uParam0, 536870912))
		{
			if (func_422(&(uParam0->f_1126), func_33(uParam0)))
			{
				func_99(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_421(uParam0, func_33(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_99(uParam0, 8192);
	}
}

int func_156(var uParam0)
{
	return 1;
}

bool func_157(var uParam0)
{
	if (func_423(uParam0) < 1)
	{
		func_424(uParam0, func_127(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0);
		func_425(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
	}
	if ((!func_120(uParam0, 4) && !func_105()) && !func_127(uParam0, 3))
	{
		if (!func_120(uParam0, 32))
		{
			if (func_20() == 0)
			{
				func_103(uParam0, 32);
			}
			else
			{
				func_426(uParam0);
			}
		}
		if (func_120(uParam0, 32))
		{
			func_427(uParam0);
		}
	}
	switch (func_423(uParam0))
	{
		case -1:
		case 0:
			func_428(uParam0, 1);
			break;
		case 1:
			if (func_429(uParam0))
			{
				if (func_120(uParam0, 4096))
				{
					func_428(uParam0, 2);
				}
				else
				{
					func_428(uParam0, 3);
				}
			}
			break;
		case 2:
			if (func_430(uParam0))
			{
				func_428(uParam0, 3);
			}
			break;
		case 3:
			if (func_431(uParam0))
			{
				func_428(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

var func_158(var uParam0)
{
	return uParam0->f_5408;
}

void func_159(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_160(var uParam0)
{
	if (func_33(uParam0) == 26)
	{
		func_432(uParam0, 0);
		return true;
	}
	if (func_433(uParam0))
	{
		iVar0 = func_33(uParam0);
		func_107(uParam0, func_35(uParam0));
		if (func_33(uParam0) == 26)
		{
			func_432(uParam0, 0);
			return true;
		}
		else if (func_121(uParam0, iVar0, 128))
		{
			func_433(uParam0);
		}
	}
	return false;
}

int func_161(var uParam0, int iParam1)
{
	return uParam0->f_1[func_131(iParam1)]->f_10;
}

void func_162(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_434(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = &Global_1914319->f_15936[iParam0];
	if (iVar1 != -1)
	{
		if (!func_435(iVar1))
		{
			func_436(&iVar1, 0);
			Global_1914319->f_15936[iParam0] = -1;
			return;
		}
	}
	if (bParam1)
	{
		if (func_437(iParam0, 32))
		{
			func_438(iParam0, iVar0, 0, 0);
			func_439(iVar1, -1186550032);
		}
		if (!func_437(iParam0, 128))
		{
			func_440(iVar1, -401963276);
			func_440(iVar1, 231194138);
			func_441(iParam0, 128);
			func_441(iParam0, 8);
		}
	}
	else if (func_437(iParam0, 128))
	{
		func_439(iVar1, -401963276);
		func_442(iParam0, 128);
		func_442(iParam0, 8);
		if (func_443(iVar0))
		{
			func_440(iVar1, -1186550032);
			func_441(iParam0, 32);
			func_438(iParam0, iVar0, 1, 0);
		}
	}
	func_444(iParam0);
}

void func_163(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_445(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_441(iParam0, 256);
		func_442(iParam0, 512);
		func_442(iParam0, 1048576);
	}
	else
	{
		func_442(iParam0, 256);
	}
	if (bParam2)
	{
		func_446(iParam0);
	}
}

void func_164(int iParam0, bool bParam1, float fParam2)
{
	func_447(iParam0, bParam1, fParam2);
}

bool func_165(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_448(iParam0, 32))
	{
		return true;
	}
	return false;
}

int func_166(var uParam0)
{
	return uParam0->f_5411;
}

void func_167(int iParam0, bool bParam1)
{
	if (!func_445(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_442(iParam0, 1);
	}
	else
	{
		func_441(iParam0, 1);
	}
	func_449(func_434(iParam0), bParam1);
}

void func_168(int iParam0, int iParam1)
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

void func_169(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_450(iParam0))
		{
			func_441(iParam0, 67108864);
		}
	}
	else if (func_450(iParam0))
	{
		func_442(iParam0, 67108864);
	}
}

bool func_170(int iParam0)
{
	if (!func_451(iParam0))
	{
		return false;
	}
	if (!func_452(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

int func_171()
{
	return &(Local_30.f_143[0]);
}

void func_172(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_451(iParam1))
	{
		return;
	}
	if (!func_170(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_22(uParam0) != 0 && func_153(uParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (does_entity_exist(iParam2))
	{
		func_453(uParam0, iParam2);
		func_454(iParam2);
	}
	func_455(iParam1);
	func_456(iParam1, 0);
	func_457(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

bool func_173()
{
	return func_388(Local_30.f_2, 2);
}

void func_174(int iParam0, bool bParam1)
{
	if (!func_188(iParam0))
	{
		return;
	}
	iVar0 = func_193(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	if (iVar0 == 1)
	{
		iVar4 = func_267(iParam0);
		if (iVar4 == 23)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_458(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_459(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_460(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
			if (func_461(134, 0) && func_462(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
		}
		else if (iVar4 == 16)
		{
			iVar2 = 0;
			if (bParam1)
			{
				if (func_463(134))
				{
					if (func_458(134, iVar2, 0, 0, 0))
					{
					}
					else
					{
						func_459(134, iVar2, 0);
					}
				}
				else
				{
					func_460(134, iVar2, 0);
				}
				if (!func_464(138) && func_463(138))
				{
					if (func_458(138, 1, 0, 0, 0))
					{
					}
					else
					{
						func_459(138, 1, 0);
					}
				}
				else
				{
					func_460(138, 1, 0);
				}
			}
			else
			{
				func_460(134, iVar2, 0);
				func_460(138, 1, 0);
			}
			return;
		}
		else if (iVar4 == 46)
		{
			if (func_464(58))
			{
				iVar1 = 140;
				if (bParam1)
				{
					if (func_458(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_459(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_460(iVar1, iVar2, bVar3);
				}
			}
		}
		else if (iVar4 == 17)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_458(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_459(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_460(iVar1, iVar2, bVar3);
			}
			if (func_464(5) && func_465(12))
			{
				iVar1 = 21;
				iVar2 = 1;
				if (bParam1)
				{
					if (func_458(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_459(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_460(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = 138;
			iVar2 = 0;
		}
		else if (iVar4 == 15)
		{
			iVar1 = 63;
			if (bParam1)
			{
				if (func_458(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_459(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_460(iVar1, iVar2, bVar3);
			}
			iVar1 = 59;
			if (bParam1)
			{
				if (func_458(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_459(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_460(iVar1, iVar2, bVar3);
			}
		}
		else if (iVar4 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar4 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar4 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar4 == 10)
		{
			iVar1 = 63;
			if (bParam1)
			{
				if (func_458(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_459(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_460(iVar1, iVar2, bVar3);
			}
			if ((func_321((*Global_1835011)[11]->f_1, 1) && func_321((*Global_1835011)[14]->f_1, 1)) && func_321((*Global_1347702)[61]->f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (bParam1)
				{
					if (func_458(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_459(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_460(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = 59;
			iVar2 = 0;
		}
		else if (iVar4 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar5 = func_267(iParam0);
		if (iVar5 == 0)
		{
			if (func_466(15))
			{
				if (bParam1)
				{
					if (func_467(15, 0, 0))
					{
					}
				}
				else
				{
					func_468(15, 0);
				}
			}
			iVar1 = 97;
		}
		else if (iVar5 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar5 == 61)
		{
			if (func_466(15))
			{
				if (bParam1)
				{
					if (func_467(15, 0, 0))
					{
					}
				}
				else
				{
					func_468(15, 0);
				}
			}
			if (func_466(9))
			{
				if (bParam1)
				{
					if (func_467(9, 0, 0))
					{
					}
				}
				else
				{
					func_468(9, 0);
				}
			}
			if (!func_321((*Global_1347702)[63]->f_15, 1))
			{
				iVar1 = 63;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
		}
		else if (iVar5 == 62)
		{
			if (func_466(15))
			{
				if (bParam1)
				{
					if (func_467(15, 0, 0))
					{
					}
				}
				else
				{
					func_468(15, 0);
				}
			}
			if (func_466(9))
			{
				if (bParam1)
				{
					if (func_467(9, 0, 0))
					{
					}
				}
				else
				{
					func_468(9, 0);
				}
			}
			iVar1 = 112;
			if (bParam1)
			{
				if (func_458(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_459(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_460(iVar1, iVar2, bVar3);
			}
			iVar1 = 97;
			if (bParam1)
			{
				if (func_458(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_459(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_460(iVar1, iVar2, bVar3);
			}
			iVar1 = 63;
		}
		else if (iVar5 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar5 == 76)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_458(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_459(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_460(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
		}
		else if (iVar5 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
			bVar3 = true;
		}
		else if (iVar5 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar5 == 84)
		{
			iVar1 = 85;
			iVar2 = 1;
		}
		else if (iVar5 == 97)
		{
			if (func_321((*Global_1835011)[6]->f_1, 1) && func_321((*Global_1835011)[13]->f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (bParam1)
				{
					if (func_458(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_459(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_460(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = -1;
		}
		else if (iVar5 == 114)
		{
			if (func_321((*Global_1835011)[9]->f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar5 == 134)
		{
			iVar1 = 95;
			if (bParam1)
			{
				if (func_458(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_459(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_460(iVar1, iVar2, bVar3);
			}
			iVar1 = 138;
		}
	}
	if (iVar1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (func_458(iVar1, iVar2, bVar3, 0, 0))
		{
		}
		else
		{
			func_459(iVar1, iVar2, bVar3);
		}
	}
	else
	{
		func_460(iVar1, iVar2, bVar3);
	}
}

void func_175()
{
	if (does_entity_exist(Local_30.f_248))
	{
		delete_object(&(Local_30.f_248));
	}
	if (does_entity_exist(Local_30.f_250))
	{
		delete_object(&(Local_30.f_250));
	}
}

void func_176(var uParam0, int iParam1, bool bParam2)
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

void func_177(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_178()
{
	_databinding_write_data_bool(Global_1911643->f_3, false);
	iVar0 = 0;
	while (iVar0 < &Global_1911643)
	{
		_databinding_remove_data_entry(&(Global_1911643->f_5[iVar0]));
		iVar0++;
	}
	_databinding_clear_binding_array(Global_1911643->f_4);
	Global_1911643 = 0;
	Global_1911643->f_1 = 0;
}

void func_179(var uParam0, int iParam1)
{
	if (func_469(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

bool func_180(int iParam0)
{
	return func_470(Global_1425247, iParam0, 2);
}

int func_181()
{
	return Local_30.f_161;
}

void func_182()
{
	func_11(&(Local_30.f_302), 1, 1);
	func_11(&(Local_30.f_303), 1, 1);
	func_11(&(Local_30.f_304), 1, 1);
}

void func_183()
{
	if (func_471(1048576))
	{
		func_472(1048576);
	}
	if (func_471(8192))
	{
		func_472(8192);
	}
	func_472(1);
	func_472(2);
	func_472(32);
	func_472(64);
	func_472(256);
	func_472(512);
	func_472(2048);
	func_472(8192);
	func_472(524288);
	func_472(2097152);
	func_472(2048);
	func_472(1048576);
	func_472(536870912);
	func_473(1);
	func_474(32);
	func_474(64);
	func_474(128);
}

void func_184(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 - (Global_1900383->f_316 && iParam0));
}

int func_185(int iParam0)
{
	return iParam0;
}

void func_186(int iParam0)
{
	if (!func_475(iParam0))
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
	iVar0 = func_290(iParam0);
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
	iVar0 = func_476(iParam0);
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
	return func_478(func_477(iParam0));
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
		if (func_479())
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
		iVar0 = func_267(&(Global_1898164->f_1[0]));
		if (func_268(iVar0) && func_295((*Global_1347702)[iVar0]->f_12, 131072))
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
			iVar0 = func_267(iParam0);
			return func_480(iVar0);
		case 8:
			iVar1 = func_267(iParam0);
			if (func_295((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_481(iVar1);
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
		func_482(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_483();
		Global_1898077->f_9 = func_484(Global_1894899->f_2);
		func_485(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_199()
{
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_321((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_321((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_321((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_321((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_321((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_321((*Global_1835011)[67]->f_1, 1))
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
	func_486(iParam0, iParam1);
}

int func_201(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_202(bool bParam0)
{
	if (!bParam0 && func_487(373691918))
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
	if (func_488(iParam0))
	{
		if (bParam1)
		{
			func_489(-525676072);
		}
		else
		{
			func_490(-525676072);
		}
	}
}

int func_205(int iParam0)
{
	return func_492(func_491(iParam0));
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
	return func_493(_0xc17f69e1418cd11f(3));
}

bool func_212()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_213(int iParam0)
{
	iParam0 = func_261(iParam0);
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
	if (!func_494(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_495(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
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
		func_496(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_496(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_496(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_496(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_496(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_496(sParam0, 1);
		return true;
	}
	func_496(sParam0, 1);
	return false;
}

bool func_217(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_218(var uParam0)
{
	func_497(uParam0, 0f);
}

int func_219(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_498(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_499() - round((uParam0->f_1 * 1000f)));
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
		func_500(0);
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

struct<4> func_221(vector3 vParam0, float fParam3)
{
	Var0 = { vParam0 };
	Var0.f_3 = fParam3;
	return Var0;
}

void func_222(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_223(var uParam0, int iParam1)
{
	return uParam0->f_1[func_131(iParam1)]->f_9;
}

void func_224(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_193(iParam0) == 1)
	{
		cVar0 = func_110(func_501(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_193(iParam0) == 8)
	{
		cVar0 = func_503(func_502(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_504(1, 1);
	func_505(1, Param1, Param1.f_3);
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
	func_496(sParam0, 2);
}

void func_226(int iParam0, int iParam1)
{
	if (!func_506(iParam0))
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
	return func_507(get_id_of_this_thread());
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
	func_508(bParam0);
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
	if (!func_509(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_240()
{
	func_510(64);
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
		return func_470(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_511())
	{
		return func_470(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_470(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
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
				func_282(iVar1, 11);
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
	if (func_512(uParam0, 1) || func_512(uParam0, 2))
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

int func_256(int iParam0)
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

int func_257(int iParam0)
{
	iParam0 = func_261(iParam0);
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

void func_258(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_513(iParam0);
	if (func_514(iParam0))
	{
		if (func_257(iParam0) != iVar0)
		{
			return;
		}
	}
	func_515(iParam0);
	func_516(iParam0);
	iVar1 = func_213(iParam0);
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
			if (!func_517(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_518(iParam0);
	}
}

void func_259(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_519(iParam0))
	{
		return;
	}
	iVar0 = func_256(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_513(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_257(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_514(iVar0))
		{
			return;
		}
	}
	func_520(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_260(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 - (uParam0->f_5308 && iParam1));
}

int func_261(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_262(int iParam0, int iParam1)
{
	iParam0 = func_261(iParam0);
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

void func_263()
{
	if (func_521(0))
	{
		func_522(0);
	}
	if (func_521(1))
	{
		func_522(1);
	}
	if (func_521(5))
	{
		func_522(5);
	}
	if (func_521(6))
	{
		func_515(6);
	}
}

struct<2> func_264(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_265(int iParam0)
{
	Var0 = { func_264(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_266(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_267(int iParam0)
{
	if (!func_188(iParam0))
	{
		return -1;
	}
	return func_523(func_477(iParam0));
}

bool func_268(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_269(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_270(int iParam0, bool bParam1)
{
	iVar0 = func_524(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_525(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_525(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_525(iParam0)))
			{
				_uilog_remove_entry(2, func_525(iParam0));
			}
		}
	}
	func_526(iParam0, 4);
	func_526(iParam0, 8);
	func_526(iParam0, 16);
}

void func_271(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_268(iVar0))
		{
			if (func_269(iVar0, 4))
			{
				func_272(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_272(int iParam0, bool bParam1)
{
	if (!func_269(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_524(iParam0), func_525(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_524(iParam0), func_525(iParam0), 2, "");
		func_527(iParam0, 16);
	}
	else
	{
		if (func_269(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_524(iParam0), func_525(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_524(iParam0), func_525(iParam0), 0, "");
		}
		func_526(iParam0, 16);
	}
}

void func_273(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_269(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_524(iParam0), func_525(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_269(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_524(iParam0), func_525(iParam0), 1, "");
		}
		func_527(iParam0, 8);
	}
	else
	{
		if (func_269(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_524(iParam0), func_525(iParam0), 0, "");
		}
		func_526(iParam0, 8);
	}
}

int func_274(var uParam0)
{
	if (func_120(uParam0, 8388608))
	{
		return 2;
	}
	if (func_120(uParam0, 4194304))
	{
		return 4;
	}
	if (func_120(uParam0, 4))
	{
		return 1;
	}
	if (func_127(uParam0, 1) && func_82(32768))
	{
		return 3;
	}
	return 0;
}

void func_275(int iParam0, int iParam1)
{
	if (func_521(0))
	{
		if (func_528(0))
		{
			func_529(0);
		}
	}
	if (func_521(1))
	{
		if (func_528(1))
		{
			func_529(1);
		}
	}
}

void func_276(var uParam0)
{
	if (func_120(uParam0, 1))
	{
		return;
	}
	if (is_entity_dead(uParam0->f_5411))
	{
		if (func_120(uParam0, 16))
		{
			func_58(uParam0, 0);
		}
		if (func_425(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_277(var uParam0)
{
	return false;
	switch (uParam0->f_607)
	{
		case 11:
		case 12:
			return true;
	}
	return false;
}

void func_278(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_530(iParam0, sParam4, iParam5);
	}
	func_531(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_279(int iParam0)
{
	if (!func_245(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_280()
{
	return &Global_1899515;
}

void func_281(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_282(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_283(int iParam0)
{
	if (!func_245(iParam0))
	{
		return;
	}
	if (func_532(iParam0))
	{
		func_533(iParam0);
	}
	else
	{
		func_534(iParam0);
	}
}

int func_284(int iParam0)
{
	if (func_535(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_285(int iParam0)
{
	if (func_536(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_286(int iParam0, int iParam1)
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

void func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_537(Global_1310750[iVar0], iParam0))
		{
			if (!func_538(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_539(iVar0) < func_540(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_289(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_288(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_541();
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

void func_289(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_542(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_290(int iParam0)
{
	if (!func_188(iParam0))
	{
		return -1;
	}
	return func_192(iParam0);
}

void func_291(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_292(bool bParam0, int iParam1)
{
	if (!bParam0 && func_487(373691918))
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

void func_293()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_451(iVar17))
		{
			iVar18 = func_543(iVar17);
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
	func_544(&(Global_1359489->f_55));
	if (func_545(1777191912, 1))
	{
		func_546(1777191912, 1, 0);
	}
}

void func_294(int iParam0)
{
	if (!func_188(iParam0))
	{
		return;
	}
	func_548(iParam0, (func_547(iParam0) + shift_left(1, 16)));
}

bool func_295(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_296()
{
	return func_549() > 0;
}

void func_297(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_550(-1032423150, iParam1);
			break;
		case 18:
			func_550(294066959, iParam1);
			func_550(-1925639563, iParam1);
			func_550(-378582304, iParam1);
			func_550(-338306437, iParam1);
			break;
		case 20:
			func_550(437270255, iParam1);
			break;
		case 2:
			func_550(-304000413, iParam1);
			func_550(-533612796, iParam1);
			func_550(48036954, iParam1);
			break;
		case 23:
			func_550(193108691, iParam1);
			func_550(491732588, iParam1);
			func_550(671962088, iParam1);
			func_551(1);
			break;
		case 16:
			func_550(-1836056650, iParam1);
			func_550(-754657922, iParam1);
			func_550(-1752355838, iParam1);
			func_550(-1375324510, iParam1);
			break;
		case 59:
			func_550(-514392105, iParam1);
			func_550(-822060246, iParam1);
			if (func_552(146))
			{
				func_550(1372748575, iParam1);
			}
			func_551(1);
			break;
		case 76:
			func_550(1991352213, iParam1);
			if (func_553() == 0)
			{
				func_550(1852488616, iParam1);
			}
			else
			{
				func_550(-9866350, iParam1);
			}
			break;
		case 44:
			func_550(863852599, iParam1);
			func_550(1228374935, iParam1);
			func_550(1517889050, iParam1);
			func_550(830657578, iParam1);
			func_550(1901354958, iParam1);
			break;
		case 46:
			func_550(-582805654, iParam1);
			func_550(250378940, iParam1);
			func_550(-2143265426, iParam1);
			break;
		case 17:
			func_550(-941494139, iParam1);
			func_550(1641489521, iParam1);
			break;
		case 19:
			func_550(-1829423531, iParam1);
			func_550(-1590504752, iParam1);
			func_550(1357221321, iParam1);
			break;
		case 21:
			func_550(-1037992610, iParam1);
			func_550(-1286414399, iParam1);
			func_551(0);
			break;
		case 15:
			func_550(-1014460309, iParam1);
			func_550(-1030502825, iParam1);
			break;
		case 33:
			func_550(479388090, iParam1);
			func_550(-1396342239, iParam1);
			func_550(-619618632, iParam1);
			break;
		case 34:
			func_550(1193561641, iParam1);
			break;
		case 64:
			func_550(1363960851, iParam1);
			break;
		case 60:
			func_550(-1232453926, iParam1);
			func_550(-882833584, iParam1);
			break;
		case 73:
			func_550(2023205767, iParam1);
			break;
		case 74:
			func_550(-2135286513, iParam1);
			if (func_553() == 0)
			{
				func_550(33799444, iParam1);
			}
			else
			{
				func_550(-161343203, iParam1);
			}
			break;
		case 8:
			func_550(841639693, iParam1);
			func_550(358952323, iParam1);
			break;
		case 36:
			func_550(852538149, iParam1);
			func_550(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_550(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_550(1116039310, iParam1);
			}
			break;
		case 27:
			func_550(107633428, iParam1);
			func_550(335902282, iParam1);
			func_550(575673055, iParam1);
			func_550(-425944207, iParam1);
			break;
		case 28:
			func_550(-1941530250, iParam1);
			func_550(1399269304, iParam1);
			func_550(1839684664, iParam1);
			func_550(923168503, iParam1);
			func_550(-1485078322, iParam1);
			break;
		case 29:
			func_550(574995900, iParam1);
			func_550(-1691275407, iParam1);
			func_550(-1725307861, iParam1);
			break;
		case 31:
			func_550(-2108383238, iParam1);
			func_550(-1321828931, iParam1);
			func_550(-1632118592, iParam1);
			func_550(334938948, iParam1);
			break;
		case 4:
			func_550(115823701, iParam1);
			func_550(-1896939736, iParam1);
			func_550(-1830746356, iParam1);
			func_550(-1235169781, iParam1);
			func_551(0);
			break;
		case 6:
			func_550(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_550(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_550(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_550(-384176140, iParam1);
			}
			break;
		case 25:
			func_550(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_550(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_550(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_550(-1374849484, iParam1);
			}
			break;
		case 48:
			func_550(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_550(217772674, iParam1);
			}
			else
			{
				func_550(2071798160, iParam1);
			}
			if (func_554(51))
			{
				func_550(-792802286, iParam1);
			}
			break;
		case 49:
			func_550(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_550(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_550(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_550(1402120602, iParam1);
			}
			break;
		case 58:
			func_550(-1661934591, iParam1);
			break;
		case 50:
			func_550(-1713759426, iParam1);
			break;
		case 52:
			func_550(-314799932, iParam1);
			func_550(-462260432, iParam1);
			func_550(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_550(345256028, iParam1);
				func_550(-1635084094, iParam1);
			}
			else
			{
				func_550(114267347, iParam1);
			}
			break;
		case 32:
			func_550(615304157, iParam1);
			break;
		case 47:
			func_550(415434835, iParam1);
			break;
		case 69:
			func_550(1373465877, iParam1);
			if (func_321((*Global_1347702)[9]->f_15, 1))
			{
				func_550(-2058273527, iParam1);
			}
			break;
		case 70:
			func_550(451334985, iParam1);
			if (func_553() == 0)
			{
				func_550(-224150200, iParam1);
			}
			else
			{
				func_550(289012628, iParam1);
			}
			break;
		case 71:
			if (func_553() == 0)
			{
				func_550(-41692120, iParam1);
			}
			else
			{
				func_550(1537840678, iParam1);
			}
			break;
		case 37:
			func_550(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_550(1842132550, iParam1);
			}
			else
			{
				func_550(-785735240, iParam1);
			}
			func_550(-1605690566, iParam1);
			break;
		case 13:
			func_550(-731367459, iParam1);
			func_550(224176585, iParam1);
			func_550(-14545580, iParam1);
			break;
		case 53:
			func_550(1095274522, iParam1);
			break;
		case 54:
			func_550(-572027988, iParam1);
			break;
		case 56:
			func_550(1339307101, iParam1);
			func_550(2102267732, iParam1);
			break;
		case 57:
			func_550(710102686, iParam1);
			break;
		case 22:
			func_550(-1754368482, iParam1);
			func_550(-2071408557, iParam1);
			break;
		case 12:
			func_550(-181334543, iParam1);
			break;
		case 0:
			func_550(-2134669864, iParam1);
			func_550(-548289709, iParam1);
			func_550(-911271922, iParam1);
			func_550(-604455775, iParam1);
			break;
		case 1:
			func_551(1);
			break;
		case 3:
			if (func_332())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_550(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_550(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_298()
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

void func_299(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_550(-145926707, iParam1);
			func_550(-604922090, iParam1);
			func_550(-848690769, iParam1);
			break;
		case 1:
			func_550(-1477631591, iParam1);
			break;
		case 2:
			func_550(76112544, iParam1);
			break;
		case 9:
			func_550(1396404308, iParam1);
			func_550(-1357381228, iParam1);
			if (func_321((*Global_1835011)[69]->f_1, 1))
			{
				func_550(1902679064, iParam1);
			}
			else
			{
				func_550(-2146422425, iParam1);
			}
			break;
		case 22:
			func_550(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_550(-1934184559, iParam1);
				func_550(1281755988, iParam1);
			}
			else
			{
				func_550(-1745220872, iParam1);
				func_550(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_550(-1641504538, iParam1);
				func_550(-988014485, iParam1);
			}
			else if (func_552(26))
			{
				func_550(-343043950, iParam1);
				func_550(-640062214, iParam1);
			}
			else
			{
				func_550(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_550(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_550(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_550(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_550(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_550(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_550(1301690984, iParam1);
				}
			}
			else
			{
				func_550(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_550(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_550(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_550(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_550(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_550(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_550(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_550(-754570528, iParam1);
			}
			else
			{
				func_550(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_550(-2072125821, iParam1);
			}
			else
			{
				func_550(270040030, iParam1);
			}
			break;
		case 37:
			func_550(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_550(-505314737, iParam1);
				func_550(-1853052860, iParam1);
			}
			else
			{
				func_550(-1975624994, iParam1);
				func_550(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_550(1690231002, iParam1);
			}
			else
			{
				func_550(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_550(1225386280, iParam1);
			}
			else if (func_552(54))
			{
				func_550(-283235773, iParam1);
			}
			else
			{
				func_550(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_550(1355398007, iParam1);
			}
			else
			{
				func_550(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_550(574636806, iParam1);
			}
			else
			{
				func_550(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_550(821118338, iParam1);
			}
			else if (func_552(39))
			{
				func_550(846829260, iParam1);
			}
			else
			{
				func_550(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_355((*Global_1835011)[33]->f_1) == 1)
				{
					func_550(1422779093, iParam1);
				}
				else
				{
					func_550(-1769536986, iParam1);
				}
			}
			else
			{
				func_550(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_550(352134789, iParam1);
			}
			else if (func_552(43))
			{
				func_550(260723113, iParam1);
			}
			else
			{
				func_550(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_550(-457958799, iParam1);
			}
			else
			{
				func_550(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_552(41))
			{
				func_550(-546824600, iParam1);
			}
			else
			{
				func_550(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_550(1297261593, iParam1);
			}
			else
			{
				func_550(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_550(2068484886, iParam1);
			}
			else if (func_552(49))
			{
				func_550(-1489080639, iParam1);
				func_550(-2102244050, iParam1);
			}
			else
			{
				func_550(-1863040467, iParam1);
			}
			break;
		case 51:
			func_550(-2055943209, iParam1);
			break;
		case 58:
			if (func_321((*Global_1347702)[23]->f_15, 1))
			{
				func_550(1650066845, iParam1);
			}
			else
			{
				func_550(151370023, iParam1);
			}
			func_550(1426057961, iParam1);
			func_550(476379584, iParam1);
			break;
		case 59:
			func_550(-1638117866, iParam1);
			break;
		case 62:
			func_550(199541730, iParam1);
			break;
		case 63:
			func_550(1703485804, iParam1);
			func_550(-800449045, iParam1);
			break;
		case 65:
			func_550(-1678210868, iParam1);
			func_550(-1448238026, iParam1);
			func_550(-1200864845, iParam1);
			func_550(1473511536, iParam1);
			break;
		case 66:
			func_550(-1774490051, iParam1);
			func_550(-34645921, iParam1);
			func_550(174027075, iParam1);
			func_550(-1155999, iParam1);
			func_551(1);
			break;
		case 67:
			func_550(701612593, iParam1);
			func_550(-1069631343, iParam1);
			func_550(1673428882, iParam1);
			break;
		case 68:
			func_550(-739133286, iParam1);
			func_550(-2130089358, iParam1);
			func_550(2056190391, iParam1);
			func_550(1941753817, iParam1);
			func_551(0);
			break;
		case 70:
			func_550(-1217555753, iParam1);
			break;
		case 71:
			func_550(697048821, iParam1);
			break;
		case 73:
			func_550(-553148661, iParam1);
			break;
		case 75:
			func_550(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_550(1414263863, iParam1);
			}
			else
			{
				func_550(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_550(1835465936, iParam1);
				func_550(523715611, iParam1);
			}
			else if (func_552(78))
			{
				func_550(1420338873, iParam1);
			}
			else
			{
				func_550(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_550(10180941, iParam1);
			}
			else if (func_552(79))
			{
				func_550(768420635, iParam1);
			}
			else
			{
				func_550(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_550(-383601523, iParam1);
			}
			else
			{
				func_550(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_550(1606472408, iParam1);
			}
			else
			{
				func_550(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_550(-203571927, iParam1);
			}
			else
			{
				func_550(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_550(729886222, iParam1);
			}
			else
			{
				func_550(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_550(-714816362, iParam1);
			}
			else
			{
				func_550(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_550(-932932179, iParam1);
				func_550(-1458537240, iParam1);
			}
			else
			{
				func_550(-1764383885, iParam1);
				func_550(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_550(1741466706, iParam1);
			}
			else
			{
				func_550(1405815775, iParam1);
			}
			break;
		case 94:
			func_550(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_550(1905280979, iParam1);
			}
			else
			{
				func_550(-1966245299, iParam1);
			}
			func_550(721468880, iParam1);
			break;
		case 99:
			func_550(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_550(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_550(-1117781095, iParam1);
				}
				else
				{
					func_550(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_550(141494548, iParam1);
			}
			else
			{
				func_550(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_550(-369525697, iParam1);
			}
			else if (func_552(101))
			{
				func_550(1595015219, iParam1);
			}
			else
			{
				func_550(-321486961, iParam1);
			}
			break;
		case 103:
			func_550(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_550(793460477, iParam1);
				func_550(-1610242176, iParam1);
			}
			else if (func_552(103))
			{
				func_550(1830897187, iParam1);
			}
			else
			{
				func_550(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_550(1528309077, iParam1);
			}
			else if (func_552(104))
			{
				func_550(1864966105, iParam1);
			}
			else
			{
				func_550(-103336013, iParam1);
			}
			break;
		case 108:
			func_550(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_550(-1123227713, iParam1);
				func_550(-889574341, iParam1);
			}
			else
			{
				func_550(2065385917, iParam1);
				func_550(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_550(-887421691, iParam1);
			}
			else if (func_552(109))
			{
				func_550(-1318117949, iParam1);
			}
			else
			{
				func_550(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_550(284822762, iParam1);
				}
				else
				{
					func_550(-1425017554, iParam1);
				}
			}
			else if (func_552(110))
			{
				if (&Global_1357515 == 0)
				{
					func_550(553087292, iParam1);
				}
				else
				{
					func_550(-1766870331, iParam1);
					func_550(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_550(-1980598735, iParam1);
			}
			else
			{
				func_550(-442732098, iParam1);
				func_550(1955756409, iParam1);
			}
			break;
		case 115:
			func_550(394303528, iParam1);
			func_550(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_550(1182403394, iParam1);
			}
			else
			{
				func_550(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_550(924445424, iParam1);
			}
			else
			{
				func_550(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_550(430755273, iParam1);
				func_550(-1473879802, iParam1);
			}
			else
			{
				func_550(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_550(73885747, iParam1);
			}
			else if (func_552(117))
			{
				func_550(1559707913, iParam1);
			}
			else
			{
				func_550(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_550(-2103887972, iParam1);
			}
			else if (func_552(118))
			{
				func_550(-435828462, iParam1);
			}
			else
			{
				func_550(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_550(2054486196, iParam1);
			}
			else
			{
				func_550(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_550(-570086056, iParam1);
			}
			else if (func_552(121))
			{
				func_550(32337856, iParam1);
			}
			else
			{
				func_550(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_550(813493663, iParam1);
			}
			else if (func_552(122))
			{
				func_550(-2132763590, iParam1);
			}
			else
			{
				func_550(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_550(-66240572, iParam1);
				func_550(1563075046, iParam1);
			}
			else
			{
				func_550(-787011772, iParam1);
				func_550(-1523377438, iParam1);
			}
			break;
		case 127:
			func_550(61020800, iParam1);
			break;
		case 129:
			func_550(428985222, iParam1);
			break;
		case 131:
			func_550(-1393851036, iParam1);
			break;
		case 133:
			func_550(1559531342, iParam1);
			break;
		case 134:
			func_550(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_550(-1374407408, iParam1);
				}
				else
				{
					func_550(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_550(-472672138, iParam1);
				}
				else
				{
					func_550(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_550(-1678710489, iParam1);
			}
			else
			{
				func_550(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_550(1717582460, iParam1);
			}
			else
			{
				func_550(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_550(1568112362, iParam1);
				func_550(1388317526, iParam1);
			}
			else if (func_552(136))
			{
				func_550(-1597534828, iParam1);
				func_550(-1207918353, iParam1);
			}
			else
			{
				func_550(-1940891082, iParam1);
				func_550(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_550(448334530, iParam1);
				func_550(2145375502, iParam1);
			}
			else
			{
				func_550(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_550(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_550(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_550(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_550(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_550(-66616327, iParam1);
			}
			else
			{
				func_550(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_550(1862916706, iParam1);
			}
			else if (func_552(147))
			{
				func_550(675105199, iParam1);
			}
			else
			{
				func_550(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_550(174409701, iParam1);
			}
			else if (func_552(148))
			{
				func_550(-1730895475, iParam1);
			}
			else
			{
				func_550(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_550(1295237052, iParam1);
			}
			else if (func_552(149))
			{
				func_550(-788577684, iParam1);
			}
			else
			{
				func_550(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_300(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_193(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_501(iParam0);
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
					if (func_355((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_267(iParam0);
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
			iVar3 = func_267(iParam0);
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

int func_301(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_555(iParam0);
	iVar3 = func_556(iParam0);
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
				iVar1 = func_280();
				func_328(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_557(iParam0, 1);
			if (func_558(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_559(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_560(1, iParam0);
				}
				else
				{
					func_561(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_302(int iParam0, int iParam1)
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

int func_303(int iParam0, int iParam1, int iParam2)
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

void func_304(bool bParam0)
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

void func_305(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_562(iParam0, iParam1, bParam2);
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

int func_306(int iParam0, int iParam1)
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

bool func_307(int iParam0)
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

void func_308(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_563(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_564(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_565(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_566(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_565(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_309(int iParam0)
{
	if (!func_188(iParam0))
	{
		return -1;
	}
	return func_567(func_477(iParam0));
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_311()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_568(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_312(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_569(iParam0, 0))
	{
		return false;
	}
	if (!func_570(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_571(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_572(iParam0, bParam2);
	iVar2 = 0;
	if (func_573(iParam0, 0, 0) == 0)
	{
		if (func_574(iParam0))
		{
			iVar5 = func_575(iParam0);
			iVar6 = func_576(iVar5);
			iVar7 = func_577(iVar6) + 1;
			func_578(iVar5);
			if (func_579(38))
			{
				func_319(483, 0);
			}
			else
			{
				func_319(482, 0);
			}
			if (iVar7 == func_580(iVar6))
			{
				func_312(func_581(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_392() && func_582(4))
				{
					if (func_392() && (func_583(38) || func_579(38)))
					{
						func_585(38, func_581(iVar6), 0, 0, func_584(), 0, -1, 0);
						func_586(2);
					}
					else
					{
						func_585(38, func_581(iVar6), 0, 0, func_584(), 0, -1, 0);
						func_586(1);
					}
				}
			}
			else if (func_392() && func_582(4))
			{
				if (func_392() && (func_583(38) || func_579(38)))
				{
					func_585(38, 0, 0, 0, func_584(), 0, -1, 0);
					func_586(2);
				}
				else
				{
					func_585(38, 0, 0, 0, func_584(), 0, -1, 0);
					func_586(1);
				}
			}
			if (func_392() && func_582(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_392() && (func_583(38) || func_579(38)))
					{
						func_587(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_587(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_588(iParam0) == -1037537535)
	{
		if ((!func_589(iParam0, 866047851) && !func_589(iParam0, -1979000645)) && !func_589(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_590(iParam0, 8388608) && !func_591(28))
	{
		func_592(28);
	}
	if (!bVar3)
	{
		if (func_589(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_593(iParam0) == -1447088266)
			{
				iVar1 = func_595(func_594(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_596(iVar1);
					}
					if (func_597(0) && func_598(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_599(iParam0, iVar0, iParam5);
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
						func_596(iParam0);
					}
					if (func_597(0) && func_598(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_599(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_588(iParam0) == -427144552)
		{
			if (!func_600(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_588(iParam0) == 307971639 && func_601(iParam0))
		{
			if (!func_602(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_589(iParam0, 866047851))
		{
			func_603(iParam0);
		}
		else if (func_589(iParam0, 2000026003))
		{
			func_604(iParam0);
		}
		else if (func_589(iParam0, -103750053))
		{
			func_95(func_605(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_606(-717883113, 2091222383), iVar0);
		}
		else if (func_589(iParam0, -121341956) && !func_589(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_321((*Global_1835011)[4]->f_1, 1))
				{
					func_319(498, 0);
				}
			}
			if (func_589(iParam0, -2017733358) || func_589(iParam0, -1369131378))
			{
				func_607(iParam0);
			}
		}
		else if (func_589(iParam0, -136654233))
		{
			if (func_589(iParam0, -1021472396))
			{
			}
		}
		else if (func_589(iParam0, -1466706512) && func_589(iParam0, 1147021565))
		{
			func_319(484, 0);
		}
		else if (func_589(iParam0, 1147021565) && func_589(iParam0, -524514947))
		{
		}
		else if (func_589(iParam0, 554195525))
		{
		}
		else if (func_589(iParam0, 589988438))
		{
			if (func_608())
			{
				func_609(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_589(iParam0, 787083290) && func_589(iParam0, 949916894))
		{
			func_610(iParam0);
		}
		else if (func_589(iParam0, -1718133314))
		{
			func_611(iParam0);
		}
		else if (func_589(iParam0, -1738650224))
		{
			func_612(iParam0);
		}
		else if (func_589(iParam0, -1112814642) && func_589(iParam0, 949916894))
		{
			func_613(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_589(iParam0, 1841149704))
		{
			func_614();
		}
		else if (func_589(iParam0, 606799272))
		{
			func_615(iParam0, iParam1);
			func_616(iParam0);
		}
		else if (func_589(iParam0, -1112814642) && func_589(iParam0, -1697809989))
		{
			func_617(iParam0, 0, 0, 0);
		}
		else if (func_589(iParam0, -2017733358) || func_589(iParam0, -1369131378))
		{
			func_607(iParam0);
		}
		else if (func_589(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_618(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_589(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_341(215778062, 1, 0))
					{
						func_312(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_341(670273567, 1, 0))
					{
						func_312(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_341(-967317137, 1, 0))
					{
						func_312(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_341(526074061, 1, 0))
					{
						func_312(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_341(-1045488665, 1, 0))
					{
						func_312(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_341(471514780, 1, 0))
					{
						func_312(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_589(iParam0, -839724752) && func_590(iParam0, 4))
		{
			if (!func_579(42))
			{
				func_619(iParam0);
			}
		}
		else if (func_589(iParam0, 1399091007))
		{
			func_620(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_589(iParam0, 1248798204))
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
				func_312(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_592(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_621(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_622(&iVar9, 0))
				{
					func_598(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_621(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_319(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_623();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_624();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_625();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_626();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_627();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_628(499813453, 854119837, 0);
				func_629(499813453, 0);
				func_630(1);
				break;
			case 2127812557:
				func_628(499813453, -1292544588, 0);
				func_629(499813453, 0);
				func_630(2);
				break;
			case 808991383:
				func_628(499813453, -1003325394, 0);
				func_629(499813453, 0);
				func_630(4);
				break;
			case 1134518629:
				func_628(666607663, -335460405, 0);
				func_629(666607663, 0);
				func_631(1);
				break;
			case 902940106:
				func_628(666607663, 903797617, 0);
				func_629(666607663, 0);
				func_631(2);
				break;
			case -418174898:
				func_628(666607663, 669728650, 0);
				func_629(666607663, 0);
				func_631(4);
				break;
			case -648114971:
				func_628(-220219788, 1214120047, 0);
				func_629(-220219788, 0);
				func_632(1);
				break;
			case 211153747:
				func_628(-220219788, 655769340, 0);
				func_629(-220219788, 0);
				func_632(2);
				break;
			case -32876996:
				func_628(-220219788, 885316185, 0);
				func_629(-220219788, 0);
				func_632(4);
				break;
			case 1191437462:
				func_628(218622660, -1491419385, 0);
				func_629(218622660, 0);
				func_633(1);
				break;
			case 1119149048:
				func_628(218622660, 1809565830, 0);
				func_629(218622660, 0);
				func_633(2);
				break;
			case 506073827:
				func_628(390004462, -628873767, 0);
				func_629(390004462, 0);
				func_634(1);
				break;
			case -1876986168:
				func_628(390004462, -405421956, 0);
				func_629(390004462, 0);
				func_634(2);
				break;
			case 2142623221:
				func_628(390004462, -1108972386, 0);
				func_629(390004462, 0);
				func_634(4);
				break;
			case 1508215381:
				func_628(6410548, 1053716392, 0);
				func_629(6410548, 0);
				func_635(1);
				break;
			case -888935280:
				func_628(6410548, 806507056, 0);
				func_629(6410548, 0);
				func_635(2);
				break;
			case -1252474566:
				func_628(6410548, 1571925350, 0);
				func_629(6410548, 0);
				func_635(4);
				break;
			case -1465702449:
				func_628(6410548, 1330352282, 0);
				func_629(6410548, 0);
				func_635(8);
				break;
			case -21093309:
				func_637(242, func_636(-21093309), 0);
				break;
			case 204375141:
				func_637(240, func_636(204375141), 0);
				break;
			case -417963070:
				func_637(241, func_636(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_638(594, 1934060482, 1, 1);
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
					func_638(594, 1110018439, 1, 1);
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
					func_638(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_638(594, -1228016946, 1, 1);
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
					func_638(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_638(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_319(488, 0);
				break;
			case 1613651027:
				func_319(491, 0);
				break;
			case -885810591:
				func_319(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_312(func_639(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_312(func_640(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_591(1))
				{
					func_319(487, 0);
				}
				break;
			case -898386032:
				func_319(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_319(496, 0);
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
		func_641(&iVar10);
		if (!func_642(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_597(0))
		{
			return true;
		}
		if (func_588(iParam0) == -1037537535)
		{
			func_643(iParam0);
		}
		if (func_589(iParam0, -1979000645))
		{
			func_644(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_597(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_312(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_645(iVar2, 0);
		}
	}
	Var35 = { func_646(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_647(iParam0);
	if (fParam6 > 0f)
	{
		if (func_589(iParam0, -839724752))
		{
			func_648(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_649(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_313(int iParam0)
{
	if (func_589(iParam0, 1989861793))
	{
		iVar0 = func_650(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_651(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_652(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_653(iVar14, iVar1);
					if (iVar15 != iParam0 && func_569(iVar15, 0))
					{
						if (func_654(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_655(iVar1);
				if (bVar13)
				{
					func_656(iParam0);
				}
				else
				{
					func_319(306, 0);
				}
			}
		}
	}
}

void func_314()
{
	if (func_20() != -1)
	{
		return;
	}
	func_657();
	func_658();
	func_659();
	func_660();
	func_661();
	func_662();
	func_663();
}

void func_315(int iParam0)
{
	func_664(iParam0, 1, 1, -142743235, 1);
	if (func_665(iParam0))
	{
		func_666(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_668(func_667(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_669(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_670() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_671(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_671(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_672(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_672(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_672(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_672(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_672(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_672(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_672(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_672(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_672(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_673(iVar8, iVar0))
				{
					func_674(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_673(iVar8, iVar0))
		{
			func_674(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_316()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_673(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_670() == -2125499975 || func_670() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_674(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_674(&vVar2, iVar5, iVar0);
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

void func_317()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_568(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_318(int iParam0, bool bParam1)
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
			if ((func_321((*Global_1835011)[59]->f_1, 1) || func_321((*Global_1347702)[1]->f_15, 1)) || func_189((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_545(403634348, 1))
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

void func_319(int iParam0, bool bParam1)
{
	func_675(iParam0, &iVar0, &iVar1);
	if (!func_676(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_677(iVar0, iVar1);
}

void func_320(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_668(iParam0, 1);
	func_678(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_678(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_679(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_678(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_678(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_321(int iParam0, bool bParam1)
{
	switch (func_290(iParam0))
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

void func_322()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_568(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_323()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_568(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_324(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_680(iParam1, 1, 0) };
		iParam3 = func_681(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_682(iParam3);
	return func_621(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_325()
{
	return _unlock_is_unlocked(99890643);
}

void func_326(int iParam0)
{
	if (!func_683(iParam0))
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

bool func_327(int iParam0, int iParam1)
{
	if (!func_684(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_685(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_686(Global_40.f_9910[iParam1], 4);
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_687(*iParam0);
	iVar1 = func_688(*iParam0);
	iVar2 = func_689(*iParam0);
	iVar3 = func_690(*iParam0);
	iVar4 = func_691(*iParam0);
	iVar5 = func_692(*iParam0);
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
	iVar6 = func_693(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_693(iVar1, iVar0);
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
	func_694(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_329(int iParam0, int iParam1, bool bParam2)
{
	if (!func_684(iParam0))
	{
		return;
	}
	if (!func_695(iParam1))
	{
		return;
	}
	if (func_696(iParam1, 1))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_327(iParam0, -1))
	{
		return;
	}
	else
	{
		func_697(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_195(0, 0, 1))
		{
			func_361(0, 17);
		}
	}
}

void func_330()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_568(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_331()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_568(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_332()
{
	return _unlock_is_unlocked(-121456797);
}

void func_333()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_568(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_334()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_568(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_335()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_568(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_336()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_568(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_337()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_568(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_338()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_568(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_339(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_340(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_341(int iParam0, int iParam1, bool bParam2)
{
	if (!func_569(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_588(iParam0);
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
		if (!func_698(iParam0, 1))
		{
			return false;
		}
	}
	return func_573(iParam0, 0, bParam2) >= iParam1;
}

void func_342(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_699(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_699(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_568(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_568(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_345()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_568(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_346()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_568(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_347()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_568(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_348()
{
	if (func_700() > 1)
	{
		func_701();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_319(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_319(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_319(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_319(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_319(452, 1);
		}
	}
}

bool func_349(int iParam0)
{
	return func_702(iParam0, 4, 1);
}

void func_350(int iParam0)
{
	func_703(iParam0, 4, 1);
}

void func_351(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_352(int iParam0)
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
			func_95(func_606(909007663, -587839005), 1);
			iVar0 = func_267(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_480(iVar0))
			{
				case 0:
					func_95(func_606(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_606(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_606(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_606(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_606(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_606(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_606(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_606(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_606(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_606(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_606(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_267(iParam0);
			if (func_295((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_295((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_295((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_606(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_606(909007663, -2049243343), 1);
				}
			}
			if (func_295((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_481(iVar1))
				{
					case 0:
						func_95(func_606(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_606(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_606(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_606(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_606(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_606(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_606(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_606(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_606(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_606(909007663, 532323983), 1);
				}
			}
			else if (func_295((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_295((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_295((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_606(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_606(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_353()
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
	else if ((func_195(0, 0, 1) || func_704()) || func_128())
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
		if (!_spactionproxy_process_action(uVar4, func_705(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_706(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_706(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_707(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_361(0, -1);
	}
	if (iVar2 > 0)
	{
		func_708("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_709(1, 0);
	Global_1956575->f_4 = 1;
}

void func_354(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_278(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_710(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_355(int iParam0)
{
	if (!func_188(iParam0))
	{
		return -1;
	}
	return func_711(iParam0);
}

int func_356(int iParam0, int iParam1)
{
	if (!func_712(iParam0))
	{
		return 0;
	}
	if (!func_392())
	{
		return 0;
	}
	if (!func_713(iParam0, &iVar0, &iVar1))
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

int func_357(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_714())
	{
		iVar2 = func_714();
	}
	iVar5 = func_715(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_477(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_477(iVar6) == 0)
			{
				return func_716(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_477(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_477(iVar6) == 0)
			{
				return func_716(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_716(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_717(1330954593, 0, -1);
		case 1:
			return func_717(1330954593, 0, -1);
		case 2:
			return func_717(1330954593, 0, -1) * 2;
		case 4:
			return func_717(1330954593, 0, -1);
		case 5:
			return func_717(1330954593, 0, -1);
		case 6:
			return func_717(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_717(1330954593, 0, -1) * 3;
		case 9:
			return func_717(1330954593, 0, -1) * 3;
		case 10:
			return func_717(1330954593, 0, -1) * 3;
		case 11:
			return func_717(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_359(int iParam0)
{
	if (!func_188(iParam0))
	{
		return cVar0;
	}
	switch (func_193(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_501(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_267(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_357(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_360(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_362();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_193(Global_1879514->f_1) == 1)
			{
				func_356(5, 1);
			}
			else if (func_193(Global_1879514->f_1) == 8 && (func_295((*Global_1347702)[func_267(Global_1879514->f_1)]->f_12, 1) || func_295((*Global_1347702)[func_267(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_356(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_361(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_718(&Global_0, 8);
	}
	if (!func_392() || func_20() != -1)
	{
		return;
	}
	func_718(&Global_0, 1);
}

int func_362()
{
	iVar0 = func_719(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_720(iVar0))
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

Vector3 func_363(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_721(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_393(vVar0))
	{
		vVar0 = { func_721(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_364(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_365(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_366(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_245(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_722(vParam0, iParam3);
}

void func_367()
{
	func_723();
	func_724();
	func_725();
	_0x11b0a0b282fa9b10(0);
}

void func_368(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_726(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_727(&(Param0.f_10)))
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
			func_728(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_369(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_370(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_371()
{
	return Global_1572864->f_12;
}

void func_372(bool bParam0)
{
	if (func_493(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_729();
	Var1.f_3.f_3 = iVar0;
	if ((!func_730(Global_1347343->f_2) && !func_369(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_731();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_369(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_732();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_369(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_733();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_734(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_735(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_370(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_370(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_373(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_736(uParam0);
	iVar0 = func_737(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_738(iParam1);
		}
		iVar0 = func_739(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_740(uParam0);
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
		iVar0 = func_740(uParam0);
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
	func_741(uParam0, 2);
}

void func_374(var uParam0, int iParam1)
{
	func_742(&(uParam0->f_7375), iParam1);
}

int func_375(var uParam0)
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

int func_376()
{
	return func_501(func_743());
}

void func_377(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_394())
	{
		func_744(uParam0, iVar0);
		iVar0++;
	}
}

int func_378(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_379(var uParam0, var uParam1)
{
	uParam0->f_607 = uParam1;
}

void func_380(var uParam0)
{
	func_750(uParam0, iLocal_16, iLocal_17, 110085, 110961, 111121, 111571, 111971, "RCHNT1_INT", 2, -1);
	func_750(uParam0, iLocal_17, iLocal_18, 112208, 112633, 113160, 113339, 113982, "", 0, -1);
	func_750(uParam0, iLocal_18, iLocal_19, 114034, 114819, 114936, 115148, 115524, "RCHNT1_MCS1A", 82, -1);
	func_750(uParam0, iLocal_19, iLocal_20, 115547, 116082, 116520, 117183, 118016, "RCHNT1_MCS1B", 2, -1);
	func_750(uParam0, iLocal_20, iLocal_21, 118109, 118813, 118906, 119302, 120359, "", 64, -1);
	func_750(uParam0, iLocal_21, iLocal_22, 120458, 121283, 121474, 121752, 122245, "RCHNT1_MCS2", 16777282, -1);
	func_750(uParam0, iLocal_22, iLocal_23, 122296, 122915, 122957, 123137, 123819, "", 64, -1);
	func_750(uParam0, iLocal_23, iLocal_24, 123871, 124453, 124472, 124849, 126724, "", 64, -1);
	func_750(uParam0, iLocal_24, iLocal_25, 126807, 127398, 127432, 127614, 127748, "RCHNT1_MCS3", 66, -1);
	func_750(uParam0, iLocal_25, iLocal_28, 127827, 128604, 128685, 128911, 129261, "RCHNT1_MCS4", 66, -1);
	func_750(uParam0, iLocal_26, iLocal_27, 129335, 129909, 130054, 130165, 130270, "", 64, -1);
	func_750(uParam0, iLocal_27, iLocal_28, 130305, 130856, 130892, 131126, 132165, "", 64, -1);
	func_750(uParam0, iLocal_28, iLocal_29, 132290, 132874, 132975, 133172, 133529, "RCHNT1_EXT", 2114, -1);
	func_750(uParam0, iLocal_29, 26, 133685, 133831, 133850, 133878, 133912, "", 72, -1);
}

void func_381(var uParam0)
{
	iVar0 = func_280();
	iVar1 = func_690(iVar0);
	iVar2 = func_691(iVar0);
	if (iVar1 >= 21)
	{
		bVar3 = true;
	}
	else if (iVar1 == 20 && iVar2 >= 21)
	{
		bVar3 = true;
	}
	else if (iVar1 < 4)
	{
		bVar3 = true;
	}
	else if (iVar1 == 4 && iVar2 <= 30)
	{
		bVar3 = true;
	}
	if (iVar1 >= 5 && iVar1 < 16)
	{
		bVar4 = true;
	}
	else if (iVar1 == 4 && iVar2 > 31)
	{
		bVar4 = true;
	}
	else if (iVar1 == 16 && iVar2 <= 30)
	{
		bVar4 = true;
	}
	if (iVar1 >= 17 && iVar1 < 19)
	{
		bVar5 = true;
	}
	else if (iVar1 == 19 && iVar2 == 0)
	{
		bVar5 = true;
	}
	else if (iVar1 == 16 && iVar2 >= 31)
	{
		bVar5 = true;
	}
	if (iVar1 == 19)
	{
		if (iVar2 >= 1 && iVar2 <= 39)
		{
			bVar6 = true;
		}
		else if (iVar2 >= 40 && iVar2 <= 59)
		{
			bVar7 = true;
		}
	}
	else if (iVar1 == 20)
	{
		if (iVar2 < 21)
		{
			bVar7 = true;
		}
	}
	if (bVar3)
	{
		if (func_33(uParam0) == iLocal_16)
		{
			func_816(&iVar0, 4);
			func_817(&iVar0, 30);
			func_818(iVar0);
		}
		func_414(&(Local_30.f_36), 4);
	}
	else if (bVar4)
	{
		func_414(&(Local_30.f_36), 2);
	}
	else if (bVar5)
	{
		pause_clock(true, 0);
		func_414(&(Local_30.f_36), 1);
	}
	else if (bVar6)
	{
		func_414(&(Local_30.f_36), 8);
		if (func_33(uParam0) == iLocal_16)
		{
			func_816(&iVar0, 6);
			func_817(&iVar0, 0);
			func_818(iVar0);
			_set_weather_type(1500834021, true, true, false, 0f, false);
		}
	}
	else if (bVar7)
	{
		func_414(&(Local_30.f_36), 16);
		if (func_33(uParam0) == iLocal_16)
		{
			func_816(&iVar0, 6);
			func_817(&iVar0, 0);
			func_818(iVar0);
			_set_weather_type(1632247697, true, true, false, 0f, false);
		}
	}
}

int func_382(var uParam0, int iParam1, bool bParam2)
{
	if (!is_itemset_valid(Global_43616))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(Global_43616))
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
		if (does_entity_exist(iVar1))
		{
			if (!decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_819()) && get_entity_model(iVar1) == iParam1)
			{
				if (!_0x88ad6cc10d8d35b2(iVar1))
				{
					set_entity_as_mission_entity(iVar1, true, true);
				}
				if (bParam2)
				{
					remove_from_itemset(get_indexed_item_in_itemset(iVar0, Global_43616), Global_43616);
				}
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_383(var uParam0, char[4] cParam1)
{
	return func_820(&(uParam0->f_7375), cParam1);
}

Vector3 func_384(int iParam0)
{
	vVar0 = { 0f, 0f, 0f };
	if (iParam0 == iLocal_16)
	{
		vVar0 = { -115.0887f, -19.3281f, 94.9184f };
	}
	else if (iParam0 == iLocal_17)
	{
		vVar0 = { -108.6454f, -14.7981f, 94.7809f };
	}
	else if (iParam0 == iLocal_18)
	{
		vVar0 = { -366.1518f, 788.3132f, 115.1694f };
	}
	else if (iParam0 == iLocal_19)
	{
		vVar0 = { -355.2263f, 789.1247f, 115.2208f };
	}
	else if (iParam0 == iLocal_20)
	{
		vVar0 = { 1769.086f, 1265.119f, 189.7204f };
	}
	else if (iParam0 == iLocal_21)
	{
		vVar0 = { 1769.086f, 1265.119f, 189.7204f };
	}
	else if (iParam0 == iLocal_22)
	{
		vVar0 = { 1780.69f, 1252.2f, 191.19f };
	}
	else if (iParam0 == iLocal_23)
	{
		vVar0 = { 1568.323f, 1561.555f, 145.1749f };
	}
	else if (iParam0 == iLocal_24)
	{
		vVar0 = { 1536.965f, 1653.42f, 140.3316f };
	}
	else if (iParam0 == iLocal_25)
	{
		vVar0 = { 1536.965f, 1653.42f, 140.3316f };
	}
	else if (iParam0 == iLocal_26)
	{
		vVar0 = { 1536.965f, 1653.42f, 140.3316f };
	}
	else if (iParam0 == iLocal_27)
	{
		vVar0 = { 1536.965f, 1653.42f, 140.3316f };
	}
	else if (iParam0 == iLocal_28)
	{
		vVar0 = { 1515.868f, 1675.052f, 138.9941f };
	}
	if (func_393(vVar0))
	{
		vVar0 = { -115.0887f, -19.3281f, 94.9184f };
	}
	return vVar0;
}

void func_385(var uParam0, vector3 vParam1)
{
	uParam0->f_5413 = { vParam1 };
}

void func_386(var uParam0, int iParam1)
{
	uParam0->f_13105 = iParam1;
}

void func_387(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_388(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_389(var uParam0)
{
	if (!func_821(uParam0, 4))
	{
		if (func_822(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_823(uParam0) };
		if (!func_822(uParam0->f_860, 524288))
		{
			func_824(&(uParam0->f_872));
		}
		func_825(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_826(uParam0, 0f, 0f, 0f);
		func_827(uParam0);
		func_828(uParam0);
		func_829(uParam0, 0f, 0f, 0f, 0, 0);
		func_830(uParam0);
		func_742(uParam0, 4);
		func_831(uParam0, 0);
		func_832(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_390(int iParam0)
{
	if (func_833(iParam0))
	{
		return func_834(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_391(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_504(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_835(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_836(0, 0);
		if (func_683(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_837(1, 0);
		}
	}
	else
	{
		func_837(1, 0);
	}
	func_207(0);
	func_505(0, vParam0, uParam3);
	return 1;
}

bool func_392()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_393(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_394()
{
	return 26;
}

void func_395(int iParam0)
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

void func_396(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_838((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_397(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_839((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_398(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_840((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_399(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_841((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_400(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_842((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_401(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_843((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_402(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_844((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_845((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_405(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_846((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_406(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_847((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_848((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_408(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_849(&(uParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_850(&(uParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_638[iVar0] = iParam1;
	uParam0->f_638[iVar0]->f_2 = (uParam0->f_638[iVar0]->f_2 || iParam2);
}

int func_409()
{
	return 1434209677;
}

void func_410(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_851(&(uParam0->f_5147), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_852(&(uParam0->f_5147));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_5147[iVar0] = iParam1;
	uParam0->f_5147[iVar0]->f_3 = (uParam0->f_5147[iVar0]->f_3 || iParam2);
}

char[] func_411(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "hunting1_HSO_HoseaGotoHorseshop";
			break;
		case 1:
			sVar0 = "hunting1_HSO_HoseaGotoRabbitHunt";
			break;
		case 2:
			sVar0 = "hunting1_HoseaGotoCampSite";
			break;
		case 3:
			sVar0 = "hunting1_BearTrackingSalmon";
			break;
		case 4:
			sVar0 = "hunting1_BearTrackingPoop";
			break;
		case 5:
			sVar0 = "hunting1_BearTrackingEnd";
			break;
		case 6:
			sVar0 = "hunting1_BaitBearFlee";
			break;
		case 7:
			sVar0 = "hunting1_BearSplitTrackingStart";
			break;
		case 8:
			sVar0 = "hunting1_GotoHunt";
			break;
		case 9:
			sVar0 = "hunting1_BearApproach";
			break;
		case 10:
			sVar0 = "hunting1_return_to_camp_cme1";
			break;
		case 11:
			sVar0 = "hunting1_return_to_camp_cme2";
			break;
		case 12:
			sVar0 = "hunting1_HoseaToCamp";
			break;
	}
	return sVar0;
}

void func_412(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_853(&(uParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_854(&(uParam0->f_819));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_819[iVar0] = cParam1;
	uParam0->f_819[iVar0]->f_4 = (uParam0->f_819[iVar0]->f_4 || iParam2);
	uParam0->f_819[iVar0]->f_1 = iParam3;
	uParam0->f_819[iVar0]->f_2 = iParam4;
}

void func_413(var uParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, float fParam6, bool bParam7)
{
	if (!func_855(iParam3, func_33(uParam0)) && !func_855(iParam3, func_35(uParam0)))
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
	iVar0 = func_856(&(uParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_857(&(uParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!_does_anim_scene_exist(*uParam2))
	{
		*uParam2 = _create_anim_scene(cParam1, iParam4, sParam5, false, true);
	}
	uParam0->f_1126[iVar0]->f_1 = *uParam2;
	uParam0->f_1126[iVar0] = cParam1;
	uParam0->f_1126[iVar0]->f_3 = (uParam0->f_1126[iVar0]->f_3 || iParam3);
	uParam0->f_1126[iVar0]->f_65 = fParam6;
	uParam0->f_1126[iVar0]->f_66 = bParam7;
	if (!bParam7)
	{
		func_858(&(uParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_414(int iParam0, int iParam1)
{
	func_859(iParam0, iParam1);
}

void func_415(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_860((*uParam0)[iVar0]))
		{
			if (func_855((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_861((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_862((*uParam1)[iVar0]))
		{
			if (func_855((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_863((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_864((*uParam2)[iVar0]))
		{
			if (func_855((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_865((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_866((*uParam3)[iVar0]))
		{
			if (func_855((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_867((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_855(uParam4->f_1, iParam12))
	{
		func_868(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_869((*uParam5)[iVar0]))
		{
			if (func_855((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_870((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_869((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_871((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_855((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_872((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_873((*uParam6)[iVar0]))
		{
			if (func_855((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_874((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_875((*uParam7)[iVar0]))
		{
			if (func_855((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_876((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_877((*uParam8)[iVar0]))
		{
			if (func_855((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_878((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_879((*uParam9)[iVar0]))
		{
			if (func_855((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_880((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_881((*uParam10)[iVar0]))
		{
			if (func_855((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_882((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_883((*uParam11)[iVar0]))
		{
			if (func_855((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_884((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_416(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_885(uParam0, iParam1, sParam2))
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

struct<2> func_417()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_418(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_419(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_420(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_886(&(uParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_373(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_421(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(uParam0->f_8269)))
	{
		if (!func_121(uParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_887(uParam0->f_607)}, 3);
			if (func_888(&(uParam0->f_8269), &cVar1, 0, func_131(iParam1), 1, 0))
			{
				if (func_24(&(uParam0->f_8269)))
				{
					func_889(&(uParam0->f_8269));
				}
				func_139(uParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_890(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_422(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_869((*uParam0)[iVar0]))
		{
			if (func_855((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_891((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_892((*uParam0)[iVar0]))
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

int func_423(var uParam0)
{
	return uParam0->f_596;
}

bool func_424(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_120(uParam0, 2))
	{
		return true;
	}
	if (func_20() == 0)
	{
		return true;
	}
	if (does_entity_exist(uParam0->f_5408))
	{
		return true;
	}
	iVar0 = func_893(func_61(uParam0));
	if (!func_29())
	{
		vVar2 = { func_125(uParam0->f_607) };
	}
	if (func_894(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_425(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(uParam0->f_5411))
	{
		if (!func_120(uParam0, 16777216))
		{
			if (!func_895(uParam0))
			{
				func_103(uParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = iParam2;
				Var0.f_6.f_1 = iParam3;
				Var0.f_6.f_2 = iParam4;
				Var0.f_9 = iParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = func_896(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(uParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							func_103(uParam0, 16777216);
						}
						else if (func_897(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (func_898(iVar12))
							{
								_0x0348469daa17576c(iVar12);
							}
							clear_ped_tasks_immediately(iVar12, false, true);
							_set_entity_coords_and_heading(iVar12, uParam0->f_5417, uParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!is_entity_dead(uParam0->f_5411))
		{
			return true;
		}
	}
	if (func_120(uParam0, 1))
	{
		return true;
	}
	vVar14 = { func_125(uParam0->f_607) };
	if (func_20() == 0)
	{
		request_model(func_899(uParam0), false);
		if (!has_model_loaded(func_899(uParam0)))
		{
			return false;
		}
		if (func_900(&iVar17, func_899(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			set_network_id_exists_on_all_machines(iVar17, true);
			iVar13 = net_to_ped(iVar17);
		}
	}
	else
	{
		if (((((uParam0->f_607 == 38 || uParam0->f_607 == 39) || uParam0->f_607 == 43) || uParam0->f_607 == 40) || uParam0->f_607 == 41) || uParam0->f_607 == 42)
		{
			func_103(uParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = iParam2;
		Var18.f_6.f_1 = iParam3;
		Var18.f_6.f_2 = iParam4;
		Var18.f_9 = iParam5;
		if (func_120(uParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_120(uParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = func_896(&iVar29, &Var18);
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
			if (!func_120(uParam0, 16))
			{
				func_103(uParam0, 16);
			}
		}
	}
	if (does_entity_exist(iVar13))
	{
		uParam0->f_5411 = iVar13;
		uParam0->f_5412 = iVar13;
		func_901(uParam0, bParam1);
		if (!func_120(uParam0, 256))
		{
			if (!func_120(uParam0, 32768))
			{
				vVar14.x = iParam2;
				vVar14.f_1 = iParam3;
				vVar14.f_2 = iParam4;
				if ((!func_898(iVar13) || func_902(Global_35, iVar13, 1, 1) > 200f) && !func_393(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_903(iVar13, vVar14, iParam5, 2, 1073741824);
					}
				}
			}
		}
		else
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_426(var uParam0)
{
	if (!func_120(uParam0, 32) && func_127(uParam0, 3))
	{
		if (func_904(uParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(uParam0, 32);
		}
	}
	if (!func_120(uParam0, 32))
	{
		if (func_905(&(uParam0->f_609), uParam0->f_607))
		{
			func_103(uParam0, 32);
		}
	}
}

void func_427(var uParam0)
{
	if (!func_120(uParam0, 128))
	{
		if (func_120(uParam0, 16384))
		{
			func_906(uParam0);
			if (func_907(uParam0))
			{
				func_51(&(uParam0->f_10792));
				func_908(uParam0, 2097152);
				func_260(uParam0, 16384);
				func_103(uParam0, 128);
			}
			return;
		}
		if (func_127(uParam0, 1))
		{
			return;
		}
		if (func_120(uParam0, 64))
		{
			func_906(uParam0);
			MemCopy(&Var0, {func_154(func_61(uParam0))}, 4);
			if (func_909(uParam0, Var0))
			{
				if (func_423(uParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(uParam0, 128);
			}
		}
		else
		{
			if (func_423(uParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(uParam0, 128);
		}
	}
}

void func_428(var uParam0, int iParam1)
{
	uParam0->f_596 = iParam1;
}

bool func_429(var uParam0)
{
	iVar0 = 1;
	if (!func_910(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_424(uParam0, func_127(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_425(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !_0x0ee3f0d7feccc54f())
	{
		iVar0 = 0;
	}
	if (!func_23(&(uParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_887(uParam0->f_607)}, 3);
		if (func_911(&(uParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_127(uParam0, 1))
	{
		if (!func_26(&(uParam0->f_13115)))
		{
			func_27(&(uParam0->f_13115), 0);
		}
		if (func_912(&(uParam0->f_13115)) < 30f)
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

bool func_430(var uParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_912(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_913()) && func_912(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(uParam0, 8) && is_valid_interior(get_interior_at_coords(func_125(uParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_125(uParam0->f_607)));
			func_260(uParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_914(0, 0);
		func_260(uParam0, 4096);
		return true;
	}
	return false;
}

bool func_431(var uParam0)
{
	if (!_text_database_has_loaded("RHUNT"))
	{
		return false;
	}
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, -107.3907f, -26.0774f, 95.2773f, 126.31f, 1, 0, 1, 0, 1, 0))
	{
		return false;
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return false;
	}
	func_592(30);
	if (!func_425(uParam0, 1, 0, 0, 0, 0, 1, 1, 1))
	{
		return false;
	}
	func_916();
	func_144(uParam0, Global_35, "ARTHUR", 0);
	func_144(uParam0, &(Local_30.f_143[0]), "HOSEA", 0);
	func_918(uParam0, 147835);
	func_919(-1015925347, 0, 0, 1103626240);
	func_920(4096);
	func_921();
	return true;
}

void func_432(var uParam0, int iParam1)
{
	func_66(iParam1);
	uParam0->f_10783 = iParam1;
}

bool func_433(var uParam0)
{
	func_922(uParam0);
	func_923(uParam0);
	iVar0 = func_33(uParam0);
	iVar1 = func_35(uParam0);
	iVar2 = func_161(uParam0, iVar0);
	if (func_8(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_907(uParam0);
		}
	}
	func_924(uParam0);
	func_925(uParam0);
	func_926(uParam0);
	func_927(uParam0);
	func_928(uParam0);
	func_929(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_930(uParam0);
	}
	if ((func_33(uParam0) == 0 && iVar2 < 3) && func_274(uParam0) == 0)
	{
		func_427(uParam0);
	}
	if (func_121(uParam0, iVar0, 512))
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
	}
	func_74(uParam0);
	switch (iVar2)
	{
		case 0:
			if (func_931(uParam0, iVar0, 0))
			{
				if (func_932(uParam0, func_33(uParam0)) != -1 && _0x62de46f061caa468() < func_932(uParam0, func_33(uParam0)))
				{
					_0xf008e0ba1fe1d644((func_932(uParam0, func_33(uParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(uParam0) == 25 || func_33(uParam0) == 26) && func_82(32768))
				{
					func_374(uParam0, 524288);
				}
				if (func_120(uParam0, 4))
				{
					if (!func_8(uParam0, 4))
					{
						func_933(uParam0, iVar0);
						func_99(uParam0, 4);
					}
					func_934(uParam0);
					func_935(uParam0, iVar0, 1);
				}
				else
				{
					func_935(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_910(uParam0))
			{
				if (func_936(uParam0))
				{
					if (func_8(uParam0, 4))
					{
						func_908(uParam0, 4);
					}
					func_935(uParam0, iVar0, 2);
				}
			}
			else if (func_937(uParam0) >= uParam0->f_13144)
			{
				if (func_8(uParam0, 4))
				{
					func_908(uParam0, 4);
				}
				func_935(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_931(uParam0, iVar0, 2))
			{
				if (!func_938(uParam0))
				{
					func_935(uParam0, iVar0, 4);
					if (func_939(uParam0, iVar0, iVar1))
					{
						func_935(uParam0, iVar0, 5);
					}
				}
				else
				{
					func_940(uParam0);
					func_935(uParam0, iVar0, 3);
					if (func_941(uParam0, iVar0))
					{
						func_935(uParam0, iVar0, 4);
						if (func_939(uParam0, iVar0, iVar1))
						{
							func_935(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_942(uParam0))
			{
				func_941(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_941(uParam0, iVar0))
			{
				func_935(uParam0, iVar0, 4);
				if (func_939(uParam0, iVar0, iVar1))
				{
					func_935(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_939(uParam0, iVar0, iVar1))
			{
				func_935(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_943(uParam0);
				func_944(uParam0, iVar0);
				func_945(uParam0);
				func_946(uParam0);
				if (func_121(uParam0, iVar1, 2))
				{
					if (func_947(uParam0, iVar1))
					{
						func_948(uParam0, iVar1);
					}
				}
			}
			if (func_931(uParam0, iVar0, 5))
			{
				if (func_931(uParam0, iVar0, 7))
				{
					if (!func_121(uParam0, func_33(uParam0), 67108864))
					{
						func_949(uParam0, func_33(uParam0));
					}
					func_950(uParam0, iVar1);
					func_923(uParam0);
					return true;
				}
				else
				{
					func_935(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(uParam0, func_33(uParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(uParam0, func_33(uParam0), 16))
					{
						do_screen_fade_in(0);
						func_951(0);
					}
					func_139(uParam0, func_33(uParam0), 4194304);
				}
				if ((func_952(get_player_index(), 0, 0, 1) && !func_120(uParam0, 8192)) && !func_121(uParam0, func_33(uParam0), 8))
				{
					func_47(1, 0);
					func_953("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_954(uParam0))
					{
						func_935(uParam0, iVar0, 6);
					}
				}
				if (func_8(uParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_908(uParam0, 268435456);
					}
				}
				if (func_120(uParam0, 1048576))
				{
					if (func_126(func_34(0)))
					{
						func_260(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_943(uParam0);
				func_944(uParam0, iVar0);
				func_945(uParam0);
				func_946(uParam0);
				if (func_121(uParam0, func_35(uParam0), 2))
				{
					if (func_947(uParam0, func_35(uParam0)))
					{
						func_948(uParam0, func_35(uParam0));
					}
				}
			}
			if ((!func_952(get_player_index(), 0, 0, 1) || func_120(uParam0, 8192)) || func_121(uParam0, func_33(uParam0), 8))
			{
				if (func_931(uParam0, iVar0, 5))
				{
					if (func_955(uParam0))
					{
						func_935(uParam0, iVar0, 7);
					}
				}
				else
				{
					func_955(uParam0);
					func_935(uParam0, iVar0, 5);
				}
			}
			else
			{
				func_931(uParam0, iVar0, 5);
				func_956(uParam0);
			}
			break;
		case 7:
			if (func_931(uParam0, iVar0, 7))
			{
				if (!func_121(uParam0, func_33(uParam0), 67108864))
				{
					func_949(uParam0, func_33(uParam0));
				}
				func_950(uParam0, iVar1);
				func_923(uParam0);
				return true;
			}
			break;
		default:
			func_935(uParam0, iVar0, 7);
			break;
	}
	return false;
}

int func_434(int iParam0)
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

bool func_435(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

void func_436(int iParam0, bool bParam1)
{
	if (*iParam0 != -1)
	{
		func_957(*iParam0, -1);
		func_958(*iParam0, 0);
		func_959(*iParam0, 0);
		if (does_blip_exist(&(Global_36308[*iParam0])))
		{
			if (bParam1)
			{
				set_radar_zoom(&(Global_36308[*iParam0]));
			}
			remove_blip(Global_36308[*iParam0]);
		}
	}
	*iParam0 = -1;
}

bool func_437(int iParam0, int iParam1)
{
	if (!func_445(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_438(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_960(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_961(iParam0, 4))
		{
			func_962(iParam0, 4);
		}
	}
	else
	{
		func_963(iParam0, 4);
	}
	func_444(iParam0);
}

void func_439(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (does_blip_exist(&(Global_36308[iParam0])))
		{
			_set_blip_flash_style(&(Global_36308[iParam0]), iParam1);
		}
	}
}

void func_440(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		_blip_set_modifier(&(Global_36308[iParam0]), iParam1);
	}
}

void func_441(int iParam0, int iParam1)
{
	if (!func_445(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_442(int iParam0, int iParam1)
{
	if (!func_445(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

bool func_443(int iParam0)
{
	if (func_964())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_444(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1914319->f_15922 = iParam0;
	}
}

bool func_445(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_446(int iParam0)
{
	func_965(func_434(iParam0));
}

void func_447(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_966(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_967(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_968();
		}
		else
		{
			func_969(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_970();
	}
}

bool func_448(int iParam0, int iParam1)
{
	iParam0 = func_261(iParam0);
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

void func_449(int iParam0, bool bParam1)
{
	if (!func_971(iParam0))
	{
		return;
	}
	if ((bParam1 && func_972(iParam0, 512)) || (!bParam1 && !func_972(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_973(iParam0, 512);
	}
	else
	{
		func_974(iParam0, 512);
	}
	if (func_443(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_450(int iParam0)
{
	return func_437(iParam0, 67108864);
}

bool func_451(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_452(int iParam0)
{
	return func_702(iParam0, 16, 1);
}

void func_453(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_975(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_976(uParam0, get_object_index_from_entity_index(iParam1)))
	{
		_0x4465c3d1475bd3fd(get_entity_model(iParam1));
	}
	if (does_blip_exist(uParam0->f_5423[iVar0]->f_8))
	{
		remove_blip(&(uParam0->f_5423[iVar0]->f_8));
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
	_copy_memory(uParam0->f_5423[iVar0], uParam0->f_5423[(uParam0->f_13145 - 1)], 65);
	_copy_memory(uParam0->f_5423[(uParam0->f_13145 - 1)], &Var1, 65);
	uParam0->f_13145 = (uParam0->f_13145 - 1);
}

void func_454(int iParam0)
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

void func_455(int iParam0)
{
	func_977(iParam0, 8, 0);
}

void func_456(int iParam0, bool bParam1)
{
	if (!func_978(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_979(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_977(iParam0, 1, 0);
		}
	}
	func_977(iParam0, 16, bParam1);
}

void func_457(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_451(iParam0))
	{
		return;
	}
	if (func_452(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_980(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_456(iParam0, 0);
	func_977(iParam0, 4, 0);
	func_455(iParam0);
	func_981(iParam0);
	func_982(iParam0, 37, 1);
	bVar0 = func_983(Global_1360165[iParam0], 0);
	iVar1 = func_984(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_985(iParam0, 64, 1))
	{
		func_982(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_982(iParam0, 33, 1);
		func_982(iParam0, 34, 1);
		func_986(iParam0, 1056964608, -1, 1061158912);
		func_987(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_980(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_980(iParam0, 35, 1);
			if (bParam8)
			{
				func_980(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_988(iParam0, 0);
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
		func_982(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_980(iParam0, 33, 1);
		func_987(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_544(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_980(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_989(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_985(iParam0, 45, 1))
	{
		func_982(iParam0, 45, 1);
	}
	func_990(iParam0, 16, 1);
	func_982(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_983(func_991(iParam0), 0))
		{
			func_992(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_458(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_268(iParam0))
	{
		return true;
	}
	if (!func_461(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return true;
		}
		func_993(iParam0, 0);
	}
	if (bParam2)
	{
		if (!func_994((*Global_1347702)[iParam0]->f_13, 1024))
		{
			func_995(&((*Global_1347702)[iParam0]->f_13), 1024);
		}
	}
	if (bParam4 && !func_994((*Global_1347702)[iParam0]->f_13, 8192))
	{
		func_995(&((*Global_1347702)[iParam0]->f_13), 8192);
	}
	if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
	{
		if (func_994((*Global_1347702)[iParam0]->f_13, 64))
		{
			return true;
		}
		return false;
	}
	if (!func_996(iParam0))
	{
		func_997((*Global_1347702)[iParam0]->f_15);
	}
	else if (bParam3 && !func_998((*Global_1347702)[iParam0]->f_15))
	{
		func_999((*Global_1347702)[iParam0]->f_15);
	}
	if (!func_994((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_995(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	return false;
}

void func_459(int iParam0, int iParam1, bool bParam2)
{
	if (func_464(iParam0))
	{
		return;
	}
	if (iParam1 == 1 || func_461(iParam0, 0))
	{
		if ((bParam2 || func_295((*Global_1347702)[iParam0]->f_12, 65536)) || func_1000(iParam0))
		{
			if (bParam2 && !func_994((*Global_1347702)[iParam0]->f_13, 1024))
			{
				func_995(&((*Global_1347702)[iParam0]->f_13), 1024);
			}
			func_1001(&((*Global_1347702)[iParam0]->f_12), 1024);
			func_1001(&((*Global_1347702)[iParam0]->f_12), 32768);
			func_1002(iParam0);
		}
	}
}

void func_460(int iParam0, int iParam1, bool bParam2)
{
	if (!func_268(iParam0))
	{
		return;
	}
	func_1003(iParam0, 1, iParam1, 1, 32);
	if (bParam2 && func_994((*Global_1347702)[iParam0]->f_13, 1024))
	{
		func_1004(&((*Global_1347702)[iParam0]->f_13), 1024);
	}
	if (func_996(iParam0))
	{
		func_1005((*Global_1347702)[iParam0]->f_15);
	}
	if (iParam1 == 1)
	{
		func_1006(iParam0, 1);
	}
}

bool func_461(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (*Global_1347702)[iVar0]->f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_462(bool bParam0)
{
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1])
				{
					case 987244216:
						iVar1 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1]->f_2;
						if (func_295((*Global_1347702)[iVar1]->f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1]->f_2;
							if (func_187(iVar2) && !func_1007(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_463(int iParam0)
{
	if (func_192((*Global_1347702)[iParam0]->f_15) == 2 || iParam0 == func_502(Global_1347343->f_2))
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 32 != 0)
	{
		return true;
	}
	fVar0 = vdist2(func_1008(iParam0), Global_36);
	if (fVar0 < ((*Global_1347702)[iParam0]->f_16 * (*Global_1347702)[iParam0]->f_16))
	{
		return true;
	}
	return false;
}

bool func_464(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_268(iParam0))
	{
		return false;
	}
	return func_321((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_465(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_321((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_466(int iParam0)
{
	if (!func_187(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1])
				{
					case -2093459088:
						if (Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1]->f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_467(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_187(iParam0))
	{
		return true;
	}
	if (func_82(32768))
	{
		return true;
	}
	if (is_thread_active((*Global_1835011)[iParam0]->f_16, false))
	{
		return true;
	}
	iVar0 = func_1009(func_12(iParam0));
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return true;
	}
	if (!func_190(func_12(iParam0)))
	{
		func_1010(iParam0, 0, 0, -1);
	}
	if (func_1011(iVar0))
	{
		if (!(*Global_1835011)[iParam0]->f_71)
		{
			if (bParam1)
			{
				func_1012(iVar0, 256);
			}
			if (bParam2)
			{
				func_1012(iVar0, 512);
			}
			(*Global_1835011)[iParam0]->f_71 = 1;
			return true;
		}
	}
	return false;
}

void func_468(int iParam0, bool bParam1)
{
	if (!func_187(iParam0))
	{
		return;
	}
	iVar0 = func_1009(func_12(iParam0));
	if (func_1011(iVar0) && (*Global_1835011)[iParam0]->f_71)
	{
		(*Global_1835011)[iParam0]->f_71 = 0;
	}
	if (!bParam1)
	{
		func_1013(iParam0, -1, 0, 1, 0, 0, 0);
		func_13(func_12(iParam0), 1, 2);
	}
}

bool func_469(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_470(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_471(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

void func_472(int iParam0)
{
	if (func_471(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

void func_473(int iParam0)
{
	Global_1914296->f_22 = (Global_1914296->f_22 - (Global_1914296->f_22 && iParam0));
}

void func_474(int iParam0)
{
	if (func_1014(iParam0))
	{
		Global_1392040->f_1 = (Global_1392040->f_1 - (Global_1392040->f_1 && iParam0));
	}
}

bool func_475(int iParam0)
{
	return func_1015(iParam0, 2);
}

int func_476(int iParam0)
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

int func_477(int iParam0)
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

int func_478(int iParam0)
{
	return iParam0 & 31;
}

bool func_479()
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

int func_480(int iParam0)
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

int func_481(int iParam0)
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

void func_482(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_483()
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

int func_484(int iParam0)
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

void func_485(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_486(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1016(iParam0);
	}
	else
	{
		func_1017(iParam0, iParam1);
	}
	func_1018();
}

bool func_487(int iParam0)
{
	iVar0 = func_1019(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_488(int iParam0)
{
	if (!func_188(iParam0))
	{
		return false;
	}
	switch (func_193(iParam0))
	{
		case 1:
			switch (func_267(iParam0))
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
			switch (func_267(iParam0))
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

void func_489(int iParam0)
{
	iVar2 = func_1020(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_593(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1022(func_1021(iParam0), 6);
}

void func_490(int iParam0)
{
	iVar2 = func_1020(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_593(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1023(func_1021(iParam0), 6);
}

int func_491(int iParam0)
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

int func_492(int iParam0)
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
	func_1024(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_493(int iParam0)
{
	return iParam0 != 0;
}

bool func_494(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_495(int iParam0, var uParam1)
{
	if (!func_494(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1025(iParam0, *uParam1, 0);
	func_1026(uParam1);
	Global_1935183->f_24 = 1;
}

void func_496(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_497(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_541() - fParam1);
	func_1027(uParam0, 1);
	func_1028(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_498(var uParam0)
{
	return func_217(*uParam0, 2);
}

int func_499()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_500(bool bParam0)
{
	if (func_1029())
	{
		Global_1357509 = 1;
	}
	if (func_1030(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

int func_501(int iParam0)
{
	if (func_193(iParam0) == 1)
	{
		return func_267(iParam0);
	}
	return -1;
}

int func_502(int iParam0)
{
	if (func_193(iParam0) == 8)
	{
		return func_267(iParam0);
	}
	return -1;
}

char[] func_503(int iParam0)
{
	if (!func_268(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_504(int iParam0, bool bParam1)
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
		func_1031(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_280();
	}
}

void func_505(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_366(vParam1, 1);
}

bool func_506(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_507(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_508(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_509(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_510(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

int func_511()
{
	return Global_1109400->f_245;
}

bool func_512(var uParam0, int iParam1)
{
	return func_388(uParam0->f_64, iParam1);
}

void func_513(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_257(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_520(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_520(iParam0);
	}
}

bool func_514(int iParam0)
{
	iParam0 = func_261(iParam0);
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

void func_515(int iParam0)
{
	iParam0 = func_261(iParam0);
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

void func_516(int iParam0)
{
	iParam0 = func_261(iParam0);
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

bool func_517(int iParam0)
{
	if (!func_1032(iParam0))
	{
		return false;
	}
	if (!func_325())
	{
		return true;
	}
	return false;
}

void func_518(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_521(iParam0))
	{
		return;
	}
	iVar0 = func_213(iParam0);
	func_1033(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_517(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1034(iParam0, 0);
	func_520(iParam0);
}

bool func_519(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_256(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_520(int iParam0)
{
	iParam0 = func_261(iParam0);
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

bool func_521(int iParam0)
{
	iParam0 = func_261(iParam0);
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

void func_522(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_213(iParam0);
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
	if (func_448(iParam0, 64))
	{
		func_515(iParam0);
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
	bVar3 = func_591(42);
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
				func_1035(&((*Global_1900383)[iParam0]->f_27));
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
		func_515(iParam0);
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
		if (func_1036(1) < 1)
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
		func_1037(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_448(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1038(iParam0);
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
	fVar15 = func_1039(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1040(iParam0))
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
		func_1041((*Global_1900383)[iParam0]->f_26);
		func_1042((*Global_1900383)[iParam0]->f_26);
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
	if (func_898(iVar0) && !bVar9)
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
	iVar21 = func_1036(iParam0);
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

int func_523(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_524(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_525(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_526(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_527(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_528(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_521(iParam0))
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

void func_529(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_521(iParam0))
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

void func_530(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_699(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_531(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1043())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_699(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1044(iVar0);
			func_1045(iVar0, 0, 0);
		}
		func_699(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_532(int iParam0)
{
	if (!func_245(iParam0))
	{
		return false;
	}
	return func_249(iParam0, 67108864);
}

void func_533(int iParam0)
{
	StringCopy(&cVar0, func_1046(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1047(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_534(int iParam0)
{
	StringCopy(&cVar0, func_1046(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1047(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_535(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_536(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_537(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_538(int iParam0)
{
	if (!func_509(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_539(int iParam0)
{
	if (func_509(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_540(int iParam0)
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

float func_541()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_542(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1048(iParam0) == 1 && bParam7)
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

int func_543(int iParam0)
{
	if (!func_978(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_544(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_545(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1049(iParam0);
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

int func_546(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_559(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_547(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_548(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_549()
{
	return Global_40.f_11095.f_35;
}

void func_550(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1050(iParam0, 0);
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
		func_551(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_551(int iParam0)
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
			func_1050(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1051(1);
	}
}

bool func_552(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_553()
{
	iVar0 = func_1052((*Global_1347702)[9]->f_15);
	iVar1 = func_1052((*Global_1835011)[69]->f_1);
	if (func_1053(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_554(int iParam0)
{
	if (!func_187(iParam0))
	{
		return false;
	}
	return func_321((*Global_1835011)[iParam0]->f_1, 1);
}

int func_555(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1054(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1055(iVar6);
	}
	return iVar5;
}

int func_556(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1056(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_557(int iParam0, bool bParam1)
{
	func_1057(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_558(int iParam0)
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

void func_559(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_557(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_560(2, *uParam0);
		}
		else
		{
			func_561(2, *uParam0);
		}
	}
	func_1058(uParam0);
}

void func_560(int iParam0, int iParam1)
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

void func_561(int iParam0, int iParam1)
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

void func_562(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1059(iParam0, iParam1, bParam2);
}

int func_563(int iParam0)
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

int func_564(int iParam0)
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

void func_565(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1060();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1061(iParam0);
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
	if (func_591(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1062())
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
	Global_40.f_11095.f_35 = func_303(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1060();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1063(iVar1);
		func_1065(func_1064(), 0, 4000);
		func_1066(Global_40.f_11095.f_35);
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
		func_1067(0);
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
				if (iParam0 > func_564(14))
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
					sParam4 = func_1068(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_699(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_699(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_564(4))
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
					sParam4 = func_1068(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_699(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_699(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_356(10, 1);
	}
}

void func_566(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_567(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_568(int iParam0)
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

bool func_569(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_570(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1069(iParam0) && func_1070(iParam0))
		{
			func_1071(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_571(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1072(iParam0, iParam1);
	Var0 = { func_680(iParam0, 0, 1) };
	iVar5 = func_1073(iParam0, &Var0, 0, 0);
	iVar6 = func_1074(iParam0, 0);
	if ((iVar5 > 1 && !func_128()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_589(iParam0, -2051813666))
		{
			func_319(583, 1);
		}
		else
		{
			func_319(582, 0);
		}
	}
	if (func_1075(iParam0, &Var0, *iParam1, 0, 0))
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

void func_572(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_650(iParam0, -949239683))
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

int func_573(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_569(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_588(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1076(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1077(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1020(bParam2), iParam0, 0);
	return iVar2;
}

bool func_574(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_575(iParam0) != 0;
}

int func_575(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1078())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1079(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_576(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_577(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1078())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_576(iVar0))
		{
			if (func_341(func_1079(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_578(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1080(48);
	func_361(0, -1);
}

bool func_579(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_321((*Global_1347702)[iParam0]->f_15, 1);
}

int func_580(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_581(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_582(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_321((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_583(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_268(iParam0))
	{
		return false;
	}
	return func_189((*Global_1347702)[iParam0]->f_15);
}

int func_584()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_341(func_1081(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_585(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_392() && (func_583(38) || func_579(38)))
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
			if (func_392() && (func_583(39) || func_579(39)))
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
			iVar9 = func_1082(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_392() && (func_583(41) || func_579(41)))
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
			if (func_392() && (func_583(49) || func_579(49)))
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
			iVar9 = func_1082(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1083(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1084(iParam0, iVar13, iVar14))
	{
	}
	if (func_1085(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1086(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1087(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1088(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1089(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_586(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_587(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_392() && (func_583(38) || func_579(38)))
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
			if (func_392() && (func_583(39) || func_579(39)))
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
			if (func_392() && (func_583(49) || func_579(49)))
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
		if (func_392() && (func_583(38) || func_579(38)))
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
			func_1090(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1090(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_706(_create_var_string(2, sVar0), _create_var_string(2, func_1091(func_581(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1090(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1090(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_392() && (func_583(39) || func_579(39)))
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
			func_1090(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1090(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_392() && (func_583(49) || func_579(49)))
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
			func_1090(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1090(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1090(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1090(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_588(int iParam0)
{
	if (!func_569(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_589(int iParam0, int iParam1)
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

bool func_590(int iParam0, int iParam1)
{
	if (!func_569(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_591(int iParam0)
{
	if (!func_1092(iParam0))
	{
		return false;
	}
	return func_1093(iParam0);
}

void func_592(int iParam0)
{
	if (!func_1092(iParam0))
	{
		return;
	}
	func_1094(iParam0);
	func_1095(iParam0);
}

int func_593(int iParam0)
{
	if (!func_569(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_594(int iParam0, bool bParam1)
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
	if (func_569(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1096(iVar0) || func_122(iVar0))
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

int func_595(int iParam0, bool bParam1)
{
	if (!func_569(iParam0, 0))
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

void func_596(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_683(iParam0))
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

bool func_597(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1020(bParam0));
}

bool func_598(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_680(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1097((386 + iVar28), 1);
			if (func_1098(iParam0, &Var0, iVar5, 0))
			{
				if (func_1099(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1100(iParam0, Var0, iVar5, 0) };
					func_1101(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_597(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_599(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1102(iParam0, iParam1);
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

bool func_599(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_601(iParam0))
	{
		return false;
	}
	if (!func_597(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_600(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_595(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_596(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1103(iVar0);
			}
		}
		if (!func_1075(iParam0, &uVar1, 1, 0, 0))
		{
			func_1071(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1104(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_598(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_598(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_598(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1062())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1105(iVar0))
				{
					func_598(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_598(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1106(Global_35, 2, 0, 1);
				if ((((func_683(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_591(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_683(iVar7) && func_591(24))
				{
					if (!func_598(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_598(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_598(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_319(480, 1);
	}
	return true;
}

bool func_601(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_602(int iParam0, int iParam1, int iParam2)
{
	if (!func_601(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_683(iVar4))
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
	if (func_341(611073244, 1, 0) && iParam2 == -897553835)
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
		func_637(func_1107(iParam0), func_636(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_321((*Global_1835011)[14]->f_1, 1))
			{
				func_319(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_597(0))
	{
		if (func_599(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_642(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_603(int iParam0)
{
	if ((iParam0 == -615217896 && !func_332()) || iParam0 != -615217896)
	{
		if (func_1108(Global_35, iParam0, &uVar0))
		{
			func_621(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_627();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_627();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_627();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_625();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_623();
			break;
	}
}

void func_604(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_623();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_624();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_625();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_626();
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
			func_627();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1109();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1110();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_605(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_606(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_607(int iParam0)
{
	bVar0 = func_589(iParam0, -2017733358);
	if (func_1111() < 3)
	{
		if (bVar0)
		{
			if (func_1113(func_1112(iParam0), iParam0))
			{
				func_637(79, func_636(func_1112(iParam0)), 1);
			}
			else
			{
				func_637(78, func_636(func_1112(iParam0)), 1);
			}
		}
		else
		{
			func_637(80, func_636(func_1114(iParam0)), 1);
		}
	}
}

bool func_608()
{
	if (((((func_1115(839908568, 400) || func_1115(-1134030454, 400)) || func_1115(623353496, 400)) || func_1115(-344413337, 400)) || func_1115(-1664948962, 400)) || func_1115(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_609(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_717(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_530(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_531(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_610(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_585(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_587(51, 0, 0, 0, 0, -1, 0);
			func_1116(8192);
			break;
		case 581047644:
			func_585(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_587(51, 0, 0, 0, 0, -1, 0);
			func_1116(524288);
			break;
		case -644199619:
			func_585(39, 0, 0, 0, 0, 0, 1, 0);
			func_587(39, 0, 0, 0, 0, -1, 0);
			func_1117(16);
			break;
		case 684296857:
			func_585(41, 0, 0, 0, 0, 0, 1, 0);
			func_587(41, 0, 0, 0, 0, -1, 0);
			func_1118(8);
			break;
		case 466137807:
			func_585(49, 0, 0, 0, 0, 0, 1, 0);
			func_587(49, 0, 0, 0, 0, -1, 0);
			func_1119(16);
			break;
		case -1087522507:
			func_585(43, 0, 0, -1791518714, func_1120(1), 0, -1, 0);
			func_1121(1);
			break;
		case -405829000:
			func_585(43, 0, 0, -2087881550, func_1120(2), 0, -1, 0);
			func_1121(2);
			break;
		case 378660860:
			func_585(43, 0, 0, 1908068621, func_1120(4), 0, -1, 0);
			func_1121(4);
			break;
		case 1566111097:
			func_585(43, 0, 0, 1611247019, func_1120(8), 0, -1, 0);
			func_1121(8);
			break;
		case 1276007140:
			func_585(43, 0, 0, 1319635688, func_1120(16), 0, -1, 0);
			func_1121(16);
			break;
	}
}

void func_611(int iParam0)
{
	if (func_1122() == 1)
	{
		if (func_579(39))
		{
			func_319(342, 0);
		}
		else
		{
			func_319(343, 0);
			func_1117(1);
		}
	}
	if (func_1122() >= 30)
	{
		func_319(344, 0);
	}
	func_585(39, 0, 0, 0, 0, 0, -1, 0);
	func_587(39, 0, 0, func_1122(), 30, 1, 0);
}

void func_612(int iParam0)
{
	if (func_1123() == 1)
	{
		if (func_579(49))
		{
			func_319(409, 0);
		}
		else
		{
			func_319(410, 0);
			func_1119(1);
		}
	}
	if (func_1123() >= 10)
	{
		func_319(411, 0);
	}
	func_585(49, 0, 0, 0, 0, 0, -1, 0);
	func_587(49, 0, 0, func_1123(), 10, 1, 0);
}

void func_613(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_319(437, 0);
			func_319(440, 0);
			func_1124(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_585(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_587(51, 0, 0, sVar0, func_1082(-949689219, 20), 1, 0);
			func_1116(1);
			func_1125(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1124(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_585(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_587(51, 0, 0, sVar0, func_1082(-1248968496, 20), 1, 0);
			func_1116(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1124(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_585(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_587(51, 0, 0, sVar0, func_1082(1706369307, 20), 1, 0);
			func_1116(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1124(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_585(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_587(51, 0, 0, sVar0, func_1082(1520110311, 20), 1, 0);
			func_1116(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_319(438, 0);
			func_1124(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_585(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_587(51, 0, 0, sVar0, func_1082(-1992824800, 20), 1, 0);
			func_1116(32768);
			break;
		default:
			func_319(439, 0);
			break;
	}
}

void func_614()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_615(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_579(43))
		{
			if (iParam0 == 281887510)
			{
				func_319(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_319(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_319(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_319(400, 0);
			}
		}
		else if (func_589(iParam0, 412399755))
		{
			func_1126(-1791518714);
			if (func_1127() == 0)
			{
				func_361(0, 10);
				iVar1 = func_1128(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1129(iParam0) < func_1130(iParam0))
					{
						func_585(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_587(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_579(44))
		{
			if (iParam0 == -222563712)
			{
				func_319(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_319(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_319(401, 0);
			}
		}
		else if (func_589(iParam0, 709057512))
		{
			func_1126(-2087881550);
			if (func_1127() == 1)
			{
				func_361(0, 10);
				iVar1 = func_1128(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1129(iParam0) < func_1130(iParam0))
					{
						func_585(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_587(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_579(45))
		{
			if (iParam0 == 2116770557)
			{
				func_319(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_319(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_319(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_319(398, 0);
			}
		}
		else if (func_589(iParam0, -1478961327))
		{
			func_1126(1908068621);
			if (func_1127() == 2)
			{
				func_361(0, 10);
				iVar1 = func_1128(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1131(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1132(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1080(48);
					}
					if (func_1129(iParam0) < func_1130(iParam0))
					{
						func_585(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_587(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1129(iParam0) < func_1130(iParam0))
					{
						func_585(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_587(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_579(46))
		{
			if (iParam0 == 2085530337)
			{
				func_319(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_319(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_319(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_319(406, 0);
			}
		}
		else if (func_589(iParam0, -1238404098))
		{
			func_1126(1611247019);
			if (func_1127() == 3)
			{
				func_361(0, 10);
				iVar1 = func_1128(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1129(iParam0) < func_1130(iParam0))
					{
						func_585(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_587(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_579(47))
		{
			if (iParam0 == -1521783510)
			{
				func_319(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_319(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_319(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_319(403, 0);
			}
		}
		else if (func_589(iParam0, 1160548794))
		{
			func_1126(1319635688);
			if (func_1127() == 4)
			{
				func_361(0, 10);
				iVar1 = func_1128(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1129(iParam0) < func_1130(iParam0))
					{
						func_585(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_587(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_616(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1131(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1132(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1080(48);
		}
	}
}

void func_617(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_341(func_1133(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1134(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1135(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_618(int iParam0, int iParam1, int iParam2)
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
				func_609(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_609(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_609(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_609(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_609(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_609(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_609(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_609(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_609(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_609(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_609(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_609(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_609(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1136())
			{
				func_609(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_609(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_609(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_609(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_609(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_609(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_609(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_609(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_609(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_609(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_609(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_609(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_609(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_619(int iParam0)
{
	if (func_579(41))
	{
		func_319(363, 0);
	}
	else
	{
		func_319(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1137(-1865241121);
			func_1138(-642026005);
			func_1139(-642026005);
			func_361(0, 10);
			break;
		case -2108314374:
			func_1137(2117142684);
			func_1138(-940584364);
			func_1139(-940584364);
			func_361(0, 10);
			break;
		case -1193798153:
			func_1137(-1409326024);
			func_1138(1972645282);
			func_1139(1972645282);
			func_361(0, 10);
			break;
		case -787702678:
			func_1137(-641744968);
			func_1138(1667205433);
			func_1139(1667205433);
			func_361(0, 10);
			break;
		case -804542901:
			func_1137(-946988203);
			func_1138(1362715885);
			func_1139(1362715885);
			func_361(0, 10);
			break;
		case -1696275132:
			func_1137(-646136018);
			func_1138(1053540370);
			func_1139(1053540370);
			func_361(0, 10);
			break;
		case -161595323:
			func_1137(-955835837);
			func_1138(-1100103852);
			func_1139(-1100103852);
			func_361(0, 10);
			break;
		case -1114363619:
			func_1137(-179276075);
			func_1138(-1409869209);
			func_1139(-1409869209);
			func_361(0, 10);
			break;
		case -368407134:
			func_1137(-492711560);
			func_1138(-1760235357);
			func_1139(-1760235357);
			func_361(0, 10);
			break;
		case 1997759228:
			func_1137(1764383959);
			func_1138(-138366827);
			func_1139(-138366827);
			func_361(0, 10);
			break;
		case 1265573293:
			func_1137(317501533);
			func_1138(-1261163843);
			func_1139(-1261163843);
			func_361(0, 10);
			break;
		case -1030441283:
			func_1137(817753087);
			func_1138(-963523016);
			func_1139(-963523016);
			func_361(0, 10);
			break;
		case -1490884871:
			func_1137(576606016);
			func_1138(560825326);
			func_1139(560825326);
			func_361(0, 10);
			break;
		case -395458616:
			func_1137(814934957);
			func_1138(858269539);
			func_1139(858269539);
			break;
	}
}

void func_620(int iParam0, int iParam1)
{
	func_1140(iParam0, iParam1, &uVar0);
}

int func_621(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_680(iParam1, 1, 0) };
		iParam3 = func_681(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1141(iParam1, iParam2, func_668(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1142(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_668(iParam3, 1)])
			{
				func_679(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1143(32768) && iParam1 != &Global_1946804->f_57[func_668(iParam3, 1)])
			{
				func_1144();
				func_679(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_679(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1145(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_679(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1146(0);
			func_1147(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_679(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_622(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1106(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1106(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1148("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1149(&Var3, iVar2, iVar0, iVar1))
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
						func_1150(iVar0);
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

void func_623()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_624()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_625()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_626()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_627()
{
	func_1151();
	func_1152();
	func_1153();
}

void func_628(int iParam0, int iParam1, bool bParam2)
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

void func_629(int iParam0, bool bParam1)
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
	func_1090(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_630(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_631(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_632(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_633(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_634(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_635(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_636(int iParam0)
{
	if (!func_569(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_637(int iParam0, int iParam1, bool bParam2)
{
	func_675(iParam0, &iVar0, &iVar1);
	if (!func_676(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1154(iParam0, 1024))
	{
		return;
	}
	func_677(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_638(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_675(iParam0, &iVar0, &iVar1);
	if (!func_676(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1154(iParam0, 1024))
	{
		return;
	}
	func_677(iVar0, iVar1);
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

int func_639()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1078())
	{
		return func_640();
	}
	iVar4 = (func_1078() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1078())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1155(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1079(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_640()
{
	iVar0 = get_random_int_in_range(0, func_1078());
	return func_1079(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_641(int iParam0)
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

bool func_642(int iParam0, int iParam1, int iParam2)
{
	if (!func_569(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_680(iParam0, 0, 1) };
	Var5 = { func_1100(iParam0, Var0, Var0.f_4, 0) };
	return func_1156(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_643(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_593(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1157(81053684, 0) <= 0)
			{
				func_679(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_679(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1158(iParam0);
			if (func_1159(iVar0))
			{
				func_1160(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_679(30, iParam0, 0, 0, 0);
			}
			if (func_670() == -2125499975 || func_670() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_679(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_670() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_679(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1161(-525676072, 0))
			{
				if (func_1162(-525676072, &iVar1))
				{
					func_679(33, iVar1, 0, 0, 0);
				}
			}
			func_679(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1163(99217379))
		{
			func_621(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_592(24);
		if (func_622(&iVar2, 0))
		{
			func_598(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_644(int iParam0)
{
	if (func_589(iParam0, 943695443))
	{
		func_1164(0, iParam0);
	}
	else if (func_589(iParam0, -2096528786))
	{
		func_1164(1, iParam0);
	}
	else if (func_589(iParam0, -1094167013))
	{
		func_1164(2, iParam0);
	}
	else if (func_589(iParam0, 1936654645))
	{
		func_1164(3, iParam0);
	}
	else if (func_589(iParam0, 1306489306))
	{
		func_1164(4, iParam0);
	}
	else if (func_589(iParam0, 435762317))
	{
		func_1164(5, iParam0);
	}
	else if (func_589(iParam0, 1259363210))
	{
		func_1164(6, iParam0);
	}
	else if (func_589(iParam0, 881398259))
	{
		func_1164(7, iParam0);
	}
	else if (func_589(iParam0, -541549214))
	{
		func_1164(8, iParam0);
	}
	else if (func_589(iParam0, 130796156))
	{
		func_1164(-1, iParam0);
	}
}

int func_645(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1165(&Var4, 1356624740);
	return func_1166(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_646(int iParam0)
{
	if (!func_569(iParam0, 0))
	{
		return Var0;
	}
	if (func_589(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_589(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_589(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_589(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_647(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_321((*Global_1835011)[4]->f_1, 1))
				{
					func_319(109, 1);
				}
			}
			break;
	}
}

void func_648(int iParam0, char* sParam1)
{
	sVar0 = func_1168(func_1167(0));
	func_699(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1169(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_649(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_569(iParam0, 0))
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
	if (!func_1170())
	{
		func_1171(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1172(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1172(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_590(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_588(iParam0);
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
	else if (!func_1173(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1174(_create_var_string(10, &cVar2, _create_var_string(0, func_636(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_589(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_636(iParam0));
	}
	func_699(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_650(int iParam0, int iParam1)
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

struct<10> func_651(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_652(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_653(int iParam0, int iParam1)
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

bool func_654(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_569(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1175(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1175(iParam0, Var2, 1))
				{
					if (func_1176(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1176(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_319(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_195(0, 0, 1))
		{
			func_361(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_655(int iParam0)
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

void func_656(int iParam0)
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
		func_319(iVar0, 0);
	}
}

void func_657()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1177(0);
			_unlock_set_unlocked(-121456797, false);
			func_1178();
		}
		return;
	}
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1179();
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
	func_1177(1);
}

void func_658()
{
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_312(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_659()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1180(0);
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
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1180(1);
}

void func_660()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1181(15000, 0, 0, 0, 1);
			func_1180(0);
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
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_278(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1180(1);
}

void func_661()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_341(1191437462, 1, 0) && !func_189((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_312(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1182(1))
			{
				func_633(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_341(1119149048, 1, 0) && !func_189((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_312(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1182(2))
			{
				func_633(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1182(4))
		{
			func_633(4);
		}
		if (func_1182(0))
		{
			func_1183(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_341(1191437462, 1, 0))
			{
				func_664(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_341(1119149048, 1, 0))
			{
				func_664(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1182(1))
		{
			func_1183(1);
		}
		if (func_1182(2))
		{
			func_1183(2);
		}
		if (func_1182(4))
		{
			func_1183(4);
		}
		if (!func_1182(0))
		{
			func_633(0);
		}
	}
}

void func_662()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1184() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_596(127400949);
		if (func_598(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1184() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1185(-2055673461, Var1, 1423542233);
		func_1185(-202131179, Var1, -1264898804);
		func_1185(2013836545, Var1, 1592019450);
		func_1185(1497476650, Var1, 1117400455);
		func_1185(1063571467, Var1, 1150213537);
		func_1185(2107224237, Var1, 1598825281);
		func_1185(1747981656, Var1, -712527121);
		func_1185(-1371140647, Var1, 454332195);
		func_1185(-19142973, Var1, 256105670);
		func_1185(-2074737817, Var1, -1328061889);
		func_1185(-1114256243, Var1, -782241404);
		func_1185(-1653277288, Var1, 1669853467);
		func_1185(1869398132, Var1, -1559225678);
		func_1185(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_683(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_591(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_591(24) && func_683(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_683(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_591(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_663()
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

bool func_664(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_569(iParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1076(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_649(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_341(iParam0, 1, bParam4))
	{
		return false;
	}
	Var5 = { func_646(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_573(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_573(iParam0, 0, 0) - iParam1) < 0)
		{
			func_664(iParam0, func_573(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (func_588(iParam0) == -427144552)
	{
		if (!func_1186(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_1187(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_597(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_649(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1188(iParam0, iParam1);
	return true;
}

bool func_665(int iParam0)
{
	switch (func_593(iParam0))
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

void func_666(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_593(iParam0))
	{
		case -2061583405:
			bVar0 = func_1189(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1189(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1189(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1189(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1189(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1189(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1190();
	}
	if (bParam1)
	{
		func_1191(0, 0);
	}
}

int func_667(int iParam0)
{
	Var0 = { func_680(iParam0, 1, 0) };
	return func_681(Var0.f_4);
}

int func_668(int iParam0, int iParam1)
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

void func_669(int iParam0)
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
		iVar0 = func_668(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1192(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_670()
{
	return Global_1946804->f_1;
}

bool func_671(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1193(iParam6);
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
		func_1195(uParam0, func_1194(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_668(iVar3, 1);
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
							if (func_1196(iVar3) && func_1197(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1198(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_672(int iParam0, int iParam1)
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

int func_673(int iParam0, int iParam1)
{
	vVar0 = { func_672(iParam0, iParam1) };
	return vVar0.x;
}

void func_674(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_675(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_676(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1199(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1200(iParam0))
	{
		return false;
	}
	if (func_1201(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1154(iParam0, 1)) || func_82(32768))
	{
		if (!func_1154(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1202())
	{
		return false;
	}
	return true;
}

void func_677(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_678(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_679(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1203(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1204(Var0);
}

struct<5> func_680(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1205(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_588(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1100(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1206(bParam1) };
			if (bParam2 && func_1207(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1098(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1098(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1099(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1208(bParam1) };
			switch (func_593(iParam0))
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
			if (func_1209(iParam0, -1823706425))
			{
				Var0 = { func_1100(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1209(iParam0, -1483207246))
			{
				Var0 = { func_1100(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1210(Var0, &Var27, bParam1, 0))
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

int func_681(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1211(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_682(int iParam0)
{
	func_1192(Global_1946804->f_1497.f_1[func_668(iParam0, 1)], 2, 6);
	func_1192(Global_1946804->f_1378.f_1[func_668(iParam0, 1)], 2, 6);
}

bool func_683(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_684(int iParam0)
{
	return iParam0 != 0;
}

int func_685(int iParam0)
{
	iVar0 = -1;
	if (!func_684(iParam0))
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

bool func_686(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_687(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1212(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_688(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_689(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_690(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_691(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_692(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_693(int iParam0, int iParam1)
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

void func_694(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1213(iParam0, iParam6);
	func_1214(iParam0, iParam5);
	func_1215(iParam0, iParam4);
	func_816(iParam0, iParam3);
	func_817(iParam0, iParam2);
	func_1216(iParam0, iParam1);
}

bool func_695(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_692(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_691(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_690(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_687(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_688(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_689(iParam0);
	if (iVar5 < 1 || iVar5 > func_693(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_696(int iParam0, bool bParam1)
{
	return func_1053(func_280(), iParam0, bParam1);
}

void func_697(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_698(int iParam0, int iParam1)
{
	if (!func_569(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1076(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1148("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1149(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_683(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1150(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1150(iVar1);
	}
	return false;
}

var func_699(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1217(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_700()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1218(iVar1);
		if (!_unlock_is_visible(func_1219(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_701()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1218(iVar0);
		if (!_unlock_is_visible(func_1219(iVar1)))
		{
			_unlock_set_visible(func_1219(iVar1), true);
		}
		iVar0++;
	}
}

bool func_702(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_978(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_703(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_451(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_704()
{
	return (func_196(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_705(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_569(iVar0, 0))
	{
		return 0;
	}
	if (!func_1220(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1221(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_589(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_680(iVar0, 0, 1) };
	iVar10 = func_1222(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1223(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1224(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_312(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1181(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_706(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_707(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_699(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_708(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_709(bool bParam0, bool bParam1)
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

void func_710(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1043())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1043())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_191(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_267(iParam0);
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
					func_1225(1, iVar1);
					func_1225(8, iVar1);
					func_1225(7, iVar1);
					break;
				case 12:
					func_1225(6, iVar1);
					break;
				case 53:
					func_1225(3, iVar1);
					func_1225(7, iVar1);
					func_1225(4, iVar1);
					break;
				case 20:
					func_1225(8, iVar1);
					break;
				case 19:
					func_1225(1, iVar1);
					func_1225(2, iVar1);
					break;
				case 24:
					func_1225(3, iVar1);
					func_1225(9, iVar1);
					func_1225(20, iVar1);
					break;
				case 28:
					func_1225(1, iVar1);
					break;
				case 34:
					func_1225(23, iVar1);
					func_1225(2, iVar1);
					func_1225(18, iVar1);
					break;
				case 29:
					func_1225(0, iVar1);
					func_1225(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1225(0, iVar1);
					func_1225(3, iVar1);
					func_1225(2, iVar1);
					func_1225(11, iVar1);
					func_1225(6, iVar1);
					func_1225(25, iVar1);
					func_1225(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1225(5, iVar1);
					break;
				case 63:
					func_1225(1, iVar1);
					func_1225(3, iVar1);
					break;
				case 37:
					func_1225(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_357(0, 10, 11, 2116153146))
			{
				func_1225(7, iVar1);
				func_1225(4, iVar1);
			}
			else if (iParam0 == func_357(0, 7, 11, -379687487))
			{
				func_1225(8, iVar1);
				func_1225(15, iVar1);
			}
			else if (iParam0 == func_357(0, 8, 11, -1386089015))
			{
				func_1225(3, iVar1);
			}
			else if (iParam0 == func_357(0, 11, 11, -1952009645))
			{
				func_1225(6, iVar1);
				func_1225(3, iVar1);
			}
			else if (iParam0 == func_357(0, 12, 11, 2065895756))
			{
				func_1225(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1226()));
	if (!func_1227(629))
	{
		func_319(629, 0);
	}
}

int func_711(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_712(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_713(int iParam0, int iParam1, var uParam2)
{
	if (!func_712(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

int func_714()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_715(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_716(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1228(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_714())
	{
		return -1;
	}
	iVar0 = func_715(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_486(iVar1, 0);
	func_548(iVar1, 0);
	func_1229(iVar1, 0);
	func_1230(iVar1, 0);
	func_1231(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1232(iVar1, iParam4);
	}
	return iVar1;
}

int func_717(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_341(1811977508, 1, 0))
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
			if (func_569(iVar25, 0) && func_589(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_718(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_719(int iParam0)
{
	if (!func_188(iParam0))
	{
		return 0;
	}
	cVar0 = func_359(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_720(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_721(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	fVar2 = 9999999f;
	func_1233(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1234() == 0 && !func_1235(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1236(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1237();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1238(Global_1310720->f_21))
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
			vVar7 = { func_1239(iVar0, iVar1) };
			bVar11 = func_1240(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !func_393(vVar7)) && func_1241(iVar0, bParam8, iParam12)) && !func_1242(iVar0)) || bVar11)
			{
				if (func_1243(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = vdist(vParam0, vVar7);
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

int func_722(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1244(vParam0);
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

void func_723()
{
	disable_script_brain_set(1);
}

void func_724()
{
}

void func_725()
{
	disable_script_brain_set(2);
}

bool func_726(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_727(char* sParam0)
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

void func_728(int iParam0)
{
	if (func_726(iParam0, 1))
	{
		func_1245(1);
	}
}

int func_729()
{
	return -1904156936;
}

bool func_730(int iParam0)
{
	if (!func_188(iParam0))
	{
		return false;
	}
	switch (func_193(iParam0))
	{
		case 1:
			iVar0 = func_267(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_267(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_731()
{
	return 166188472;
}

int func_732()
{
	return 2015838421;
}

int func_733()
{
	return 207908017;
}

var func_734(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_735(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_736(var uParam0)
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

int func_737(var uParam0, int iParam1)
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

char* func_738(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1246(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1247(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1248(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_739(var uParam0, char* sParam1)
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

int func_740(var uParam0)
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

void func_741(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_742(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_743()
{
	return Global_1572864->f_8;
}

void func_744(var uParam0, int iParam1)
{
	func_1249(uParam0, iParam1);
	func_1250(uParam0, iParam1, 26);
}

bool func_745(var uParam0)
{
	func_1251();
	vVar0 = { -112.4884f, -14.9513f, 95.8481f };
	fVar3 = 56.74f;
	vVar4 = { -111.2165f, -17.5508f, 94.8776f };
	fVar7 = 58.7218f;
	vVar8 = { -115.0601f, -18.4425f, 95.9251f };
	fVar11 = 73.69f;
	iVar12 = 0;
	if (!func_425(uParam0, 1, 0, 0, 0, 0, 1, 1, 1))
	{
		return false;
	}
	_text_database_request("RHUNT");
	if (!func_942(uParam0))
	{
		if (!_does_volume_exist(&(Local_30.f_254[14])))
		{
			Local_30.f_254[14] = _create_volume_sphere(-111.4327f, -20.53263f, 94.7981f, 0f, 0f, 0f, 10f, 10f, 10f);
		}
		if (!is_ped_injured(Global_35))
		{
			if (func_1252(Global_35, -115.2764f, -19.3922f, 94.919f, 1) > 10f)
			{
				func_903(Global_35, -115.2764f, -19.3922f, 94.919f, 347.0219f, 2, 1073741824);
			}
		}
		if (!does_entity_exist(Local_30.f_252))
		{
			if (has_model_loaded(319326044))
			{
				Local_30.f_252 = create_object_no_offset(319326044, -105.8484f, -26.4675f, 95.3867f, true, true, false, true);
				iVar12 = 1;
			}
		}
		if (!func_894(uParam0, 5, Local_30.f_143[0], 0, -107.3907f, -26.0774f, 95.2773f, 126.31f, 1, 0, 1, 0, 1, 0))
		{
			iVar12 = 1;
		}
		if (!does_entity_exist(Local_30.f_143[0]->f_9))
		{
			Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			iVar12 = 1;
		}
		if (!does_entity_exist(Local_30.f_158))
		{
			Local_30.f_158 = func_1253(iLocal_15, -113.717f, -16.283f, 94.9184f, 44.95619f, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0);
			iVar12 = 1;
		}
		if (!_text_database_has_loaded("RHUNT"))
		{
			iVar12 = 1;
		}
		if (!_0xa0bc8faed8cfeb3c(Local_30.f_158))
		{
			iVar12 = 1;
		}
		if (iVar12 == 1)
		{
			return false;
		}
		remove_all_ped_weapons(func_171(), true, true);
		if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
		{
			_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			set_ped_drops_weapons_when_dead(func_171(), false);
		}
		func_903(func_171(), vVar4, fVar7, 2, 1073741824);
		func_903(func_1254(), vVar0, fVar3, 2, 1073741824);
		func_903(func_166(uParam0), vVar8, fVar11, 2, 1073741824);
		_0x06aade17334f7a40(func_166(uParam0), -116.5623f, -18.0716f, 95.8973f);
		func_150(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
		func_150(uParam0, func_1254(), "Horse_01^2", 0, 0, 0, 0);
		func_150(uParam0, func_171(), "HoseaMatthews", 0, 0, 0, 0);
		func_150(uParam0, func_166(uParam0), "Horse_01", 0, 0, 0, 0);
		func_150(uParam0, Local_30.f_158, "Horse_01^1", 0, 0, 0, 0);
	}
	else
	{
		if (!_does_volume_exist(&(Local_30.f_254[14])))
		{
			Local_30.f_254[14] = _create_volume_sphere(-111.4327f, -20.53263f, 94.7981f, 0f, 0f, 0f, 10f, 10f, 10f);
		}
		func_1255(uParam0, &(Local_30.f_254[14]));
	}
	func_163(76, 1, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_746(var uParam0)
{
	func_1256();
	func_381(uParam0);
	func_414(&(Local_30.f_2), 1);
	_0x0751d461f06e41ce(player_id(), 33, 0, 1);
	_0x0751d461f06e41ce(player_id(), 49, 0, 1);
	_0x0751d461f06e41ce(player_id(), 50, 0, 1);
	if (does_entity_exist(uParam0->f_5411))
	{
		_0xf74e134f40192884(uParam0->f_5411, 2);
	}
	if (!is_ped_injured(Local_30.f_158))
	{
		_0x2eb75fb86c41f026(Local_30.f_158, 3, 0);
		set_ped_config_flag(Local_30.f_158, 284, true);
		set_ped_flee_attributes(Local_30.f_158, 512, true);
		set_ped_flee_attributes(Local_30.f_158, 16384, true);
	}
	func_1257(uParam0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_747(var uParam0)
{
	func_177(&(Local_30.f_254[14]));
	set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
	set_player_control(player_id(), true, 0, false);
	display_hud(true);
	task_animal_interaction(&(Local_30.f_143[0]), Local_30.f_143[0]->f_9, 391681984, 0, 0);
	_0x6569f31a01b4c097(&(Local_30.f_143[0]), 2, 0);
	_0x6569f31a01b4c097(&(Local_30.f_143[0]), 3, 0);
	settimera(0);
	if (does_entity_exist(uParam0->f_5411))
	{
		if (!is_ped_injured(uParam0->f_5411))
		{
			iVar0 = func_256(uParam0->f_5411);
			_set_ped_as_saddle_horse_for_player(player_id(), uParam0->f_5411);
			func_1258(iVar0);
			func_1259(0);
			func_1260(uParam0);
			_0xba8818212633500a(uParam0->f_5411, 0, 1);
		}
	}
	if (does_entity_exist(Local_30.f_158))
	{
		func_1261(Local_30.f_158, 0);
		func_1262(Local_30.f_158, 1);
		func_592(42);
		func_1263(Local_30.f_158, 0);
		set_ped_config_flag(Global_35, 367, false);
		task_stand_still(Local_30.f_158, -1);
		set_blocking_of_non_temporary_events(Local_30.f_158, true);
		_0xba8818212633500a(Local_30.f_158, 0, 1);
		_0x6569f31a01b4c097(Local_30.f_158, 17, 1);
		func_1264(uParam0, Local_30.f_158);
	}
	Local_30.f_159 = uParam0->f_5411;
	if (!does_entity_exist(Local_30.f_159))
	{
	}
	func_1265(7);
	Local_30.f_1 = 0;
	_0x0d7fd6a55fd63aef(22, 2, 1);
	_0x380a2e353ad30917(func_171(), 10f, 8f);
	func_134(uParam0, 0);
	if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_ped_drops_weapons_when_dead(func_171(), false);
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_748(var uParam0)
{
	func_1266(uParam0);
	func_1267(uParam0);
	func_1268();
	switch (func_1269(uParam0))
	{
		case 0:
			set_cinematic_mode_active(false);
			iVar0 = func_256(Local_30.f_158);
			if (_get_saddle_horse_for_player(player_id()) != Local_30.f_159)
			{
				func_1270(Local_30.f_159, -1186550032, 1);
			}
			if (does_entity_exist(Global_1900383->f_393))
			{
				if (_0x808077647856de62(Global_1900383->f_393, 4))
				{
					_0x18ff3110cf47115d(Global_1900383->f_393, 4, 0);
				}
			}
			if (!func_1271(uParam0))
			{
				if (iVar0 == 0)
				{
					if (func_1272(iVar0) == 1)
					{
						func_113(1);
						func_133(uParam0, 1);
						func_218(Local_30.f_168[1]);
						_0xba8818212633500a(Local_30.f_158, 0, 0);
						if (!is_ped_injured(Local_30.f_158))
						{
							_0x2eb75fb86c41f026(Local_30.f_158, 3, 1);
							set_ped_config_flag(Local_30.f_158, 284, false);
							set_ped_flee_attributes(Local_30.f_158, 512, false);
							set_ped_flee_attributes(Local_30.f_158, 16384, false);
						}
						func_920(1024);
					}
				}
			}
			disable_control_action(0, 399753205, false);
			break;
		case 1:
			if (!func_1271(uParam0))
			{
				if (func_1273(Global_35, Local_30.f_158, 0))
				{
					func_133(uParam0, 2);
					settimera(0);
				}
			}
			break;
		case 2:
			if (func_388(Local_30, 8) && func_388(Local_30.f_2, 2))
			{
				return 1;
			}
			break;
	}
	if (does_entity_exist(Local_30.f_158))
	{
		func_1274(Local_30.f_158, 0f, 0);
	}
	if (does_entity_exist(func_1254()))
	{
		func_1274(func_1254(), 0f, 0);
	}
	return 0;
}

bool func_749(var uParam0)
{
	func_1275();
	if (does_entity_exist(Local_30.f_159))
	{
		_0xf74e134f40192884(Local_30.f_159, 0);
	}
	_0x6569f31a01b4c097(Local_30.f_158, 17, 0);
	if (does_entity_exist(Local_30.f_158))
	{
		set_ped_config_flag(Local_30.f_158, 297, false);
	}
	_0x0751d461f06e41ce(player_id(), 33, 0, 0);
	func_1251();
	_0x380a2e353ad30917(iVar0, 0f, 0f);
	_0x0d7fd6a55fd63aef(22, 2, 0);
	return uParam0->f_607 == uParam0->f_607;
}

void func_750(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_139(uParam0, iParam1, iParam9);
	func_1276(uParam0, iParam1);
	func_1250(uParam0, iParam1, iParam2);
	func_1277(uParam0, &iParam3, iParam1, 0);
	func_1277(uParam0, &iParam4, iParam1, 2);
	func_1277(uParam0, &iParam5, iParam1, 4);
	func_1277(uParam0, &iParam6, iParam1, 5);
	func_1277(uParam0, &iParam7, iParam1, 7);
	func_935(uParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1278(uParam0, iParam1, cVar0);
	func_1279(uParam0, iParam1, iParam10);
}

bool func_751(var uParam0)
{
	func_1251();
	iVar0 = 0;
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, -107.3907f, -26.0774f, 95.2773f, 126.31f, 1, 0, 1, 0, 1, 0))
	{
		iVar0 = 1;
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar0 = 1;
	}
	if (!func_1280(uParam0, &(Local_30.f_158), -108.6454f, -14.7981f, 94.7809f, 268.5526f))
	{
		iVar0 = 1;
	}
	_text_database_request("RHUNT");
	if (!_text_database_has_loaded("RHUNT"))
	{
		iVar0 = 1;
	}
	_0xf7ea250b9a919e03(-2085380454, func_1254());
	if (!_0x854bc9b1a1ccd034(-2085380454, func_1254()))
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		return false;
	}
	remove_all_ped_weapons(func_171(), true, true);
	if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_ped_drops_weapons_when_dead(func_171(), false);
	}
	if (!is_ped_injured(func_1254()))
	{
		func_903(func_1254(), -103.5198f, -15.3647f, 94.8233f, 272.349f, 2, 1073741824);
		if (!is_ped_injured(func_171()))
		{
			func_1281(func_171(), func_1254(), 0, -1, 1);
		}
	}
	if (!is_ped_on_mount(func_171()))
	{
		return false;
	}
	func_381(uParam0);
	func_1281(Global_35, Local_30.f_158, 0, -1, 1);
	set_gameplay_cam_relative_heading(0f, 1f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_752(var uParam0)
{
	Local_30.f_254[1] = _create_volume_sphere(-316.7518f, 698.9667f, 114.2988f, 0f, 0f, 0f, 60f, 60f, 60f);
	Local_30.f_254[2] = _create_volume_box(-250.6236f, 574.4445f, 111.8318f, 0f, 0f, 9.25f, 51.25f, 10.25f, 26.75f);
	_0xc1799fafd2fdf52b(&(Local_30.f_254[2]), 0, 0, 0);
	Local_30.f_254[3] = _create_volume_box(-360.3717f, 776.9361f, 116.0623f, 0f, 0f, 21.24999f, 19.5f, 39.25f, 37.75f);
	Local_30.f_254[4] = _create_volume_box(-344.7822f, 740.8355f, 116.0623f, 0f, 0f, 21.24999f, 32.5f, 40.25f, 37.75f);
	Local_30.f_254[5] = _create_volume_box(-322.0756f, 705.8132f, 116.0623f, 0f, 0f, 21.25f, 37.5f, 40.25f, 37.75f);
	Local_30.f_254[6] = _create_volume_box(-307.8257f, 669.1697f, 116.0623f, 0f, 0f, 21.25f, 37.5f, 40.25f, 37.75f);
	Local_30.f_254[7] = _create_volume_box(-293.9368f, 633.4548f, 116.0623f, 0f, 0f, 21.25f, 37.5f, 40.25f, 37.75f);
	_0xe5ef9de716ff737e(&(Local_30.f_254[3]), 0, 0);
	_0xe5ef9de716ff737e(&(Local_30.f_254[4]), 0, 0);
	_0xe5ef9de716ff737e(&(Local_30.f_254[5]), 0, 0);
	_0xe5ef9de716ff737e(&(Local_30.f_254[6]), 0, 0);
	_0xe5ef9de716ff737e(&(Local_30.f_254[7]), 0, 0);
	_0xb56d41a694e42e86(&(Local_30.f_254[3]), 10208, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(&(Local_30.f_254[4]), 10208, 0, 0, -1, -1, 0);
	Local_30.f_254[0] = _create_volume_box_with_custom_name(-369.2139f, 787.134f, 115.0464f, 0f, 0f, 3f, 15.25f, 14f, 7.75f, "HorseShop");
	set_ped_config_flag(func_171(), 178, true);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_753(var uParam0)
{
	func_1282(-109.5263f, -17.6717f, 95.8276f, -111.1245f, -18.23042f, 94.85939f, -351.7358f, 796.5907f, 115.2197f, -351.7358f, 796.5907f, 115.2197f);
	func_1283(uVar803);
	func_1284(10, 999);
	func_1285(0, 1);
	_0x1e017404784aa6a3(func_171(), -1063823711);
	_0x0d7fd6a55fd63aef(25, 2, 1);
	_0x0d7fd6a55fd63aef(21, 2, 1);
	_0x0d7fd6a55fd63aef(1, 3, 1);
	func_167(76, 1);
	func_163(76, 1, 1);
	func_1286(76);
	func_169(76, 1);
	set_blocking_of_non_temporary_events(func_171(), true);
	return uParam0->f_607 == uParam0->f_607;
}

int func_754(var uParam0)
{
	func_1287(uParam0);
	func_1288(uParam0);
	func_1289();
	func_1290();
	switch (func_1269(uParam0))
	{
		case 0:
			if (func_1252(Global_35, -359.434f, 787.8343f, 115.1653f, 1) < 40f)
			{
				func_133(uParam0, 1);
			}
			break;
		case 1:
			if (func_1291(0, 0))
			{
				set_anim_scene_entity(&(Local_30.f_13[0]), "Horse_01", Local_30.f_164, 0);
				set_anim_scene_entity(&(Local_30.f_13[0]), "RCSP_HUNTING1_MALES_01", Local_30.f_162, 0);
				set_anim_scene_entity(&(Local_30.f_13[0]), "RCSP_HUNTING1_MALES_01^1", Local_30.f_163, 0);
				set_anim_scene_entity(&(Local_30.f_13[0]), "p_brushHorse01x", Local_30.f_231, 0);
				set_anim_scene_entity(&(Local_30.f_13[0]), "p_gate_horse01a", Local_30.f_232, 0);
				start_anim_scene(&(Local_30.f_13[0]));
				func_150(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
				func_150(uParam0, Local_30.f_158, "Horse_01", 0, 0, 0, 0);
				if (does_entity_exist(Local_30.f_164))
				{
					func_150(uParam0, Local_30.f_164, "Horse_01^1", 0, 0, 0, 0);
				}
				func_150(uParam0, Local_30.f_162, "RCSP_HUNTING1_MALES_01", 0, 0, 0, 0);
				func_150(uParam0, Local_30.f_163, "RCSP_HUNTING1_MALES_01^1", 0, 0, 0, 0);
				func_420(uParam0, Local_30.f_231, "p_brushHorse02x", 0, 0, 0, 0);
				func_420(uParam0, Local_30.f_232, "p_gate_horse01a", 0, 0, 0, 0);
				func_420(uParam0, Local_30.f_233, "p_chair02x", 0, 0, 0, 0);
				func_1292();
				func_133(uParam0, 2);
			}
			func_1293();
			if (!is_ped_injured(func_171()))
			{
				set_ped_reset_flag(func_171(), 303, true);
			}
			break;
		case 2:
			func_1293();
			if (func_1294())
			{
				func_162(76, 0);
				if (_0x2009f8ab7a5e9d6d(player_id()))
				{
					_0x0c6b89876262a99d(player_id(), func_171());
				}
				_0x12e09e278c6c29b7(player_id());
				if (!func_388(Local_30.f_2, 64))
				{
					iVar0 = func_1295();
					if (iVar0 > 0)
					{
						func_278(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
					}
					func_414(&(Local_30.f_2), 64);
				}
				Local_30.f_254[8] = _create_volume_box(-368.6374f, 786.9443f, 115.2735f, 0f, 0f, 4.25f, 14.25f, 5f, 8.75f);
				func_1296(uParam0, &(Local_30.f_254[8]));
				func_1297(&(Local_30.f_254[8]));
				return 1;
			}
			else
			{
				func_1292();
			}
			if (!is_ped_injured(func_171()))
			{
				set_ped_reset_flag(func_171(), 303, true);
			}
			break;
	}
	func_1298(uParam0);
	return 0;
}

bool func_755(var uParam0)
{
	func_162(76, 0);
	func_1251();
	func_177(&(Local_30.f_254[0]));
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_756(var uParam0)
{
	func_1251();
	if (func_1299(76))
	{
		func_167(76, 0);
	}
	if (!is_ped_injured(Global_35))
	{
		if (func_1252(Global_35, -366.1518f, 788.3132f, 115.1694f, 1) > 10f)
		{
			func_903(Global_35, -366.1518f, 788.3132f, 115.1694f, 72.34f, 2, 1073741824);
		}
	}
	iVar0 = 0;
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, -352.9879f, 788.8015f, 115.1747f, 126.31f, 1, 0, 1, 0, 1, 0))
	{
		iVar0 = 1;
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar0 = 1;
	}
	if (!func_1280(uParam0, &(Local_30.f_158), -366.1518f, 788.3132f, 115.1694f, 89.1721f))
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		return false;
	}
	if (!func_1291(0, 1))
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		return false;
	}
	remove_all_ped_weapons(func_171(), true, true);
	if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_ped_drops_weapons_when_dead(func_171(), false);
	}
	if (!is_ped_injured(func_1254()))
	{
		func_903(func_1254(), -354.2381f, 790.827f, 116.2304f, 72.34f, 2, 1073741824);
		if (!is_ped_injured(func_171()))
		{
			func_1281(func_171(), func_1254(), 0, -1, 1);
		}
	}
	uParam0->f_5411 = Local_30.f_158;
	func_1281(Global_35, Local_30.f_158, 0, -1, 1);
	if (does_entity_exist(Local_30.f_164))
	{
		set_anim_scene_entity(&(Local_30.f_13[0]), "Horse_01", Local_30.f_164, 0);
	}
	set_anim_scene_entity(&(Local_30.f_13[0]), "RCSP_HUNTING1_MALES_01", Local_30.f_162, 0);
	set_anim_scene_entity(&(Local_30.f_13[0]), "RCSP_HUNTING1_MALES_01^1", Local_30.f_163, 0);
	set_anim_scene_entity(&(Local_30.f_13[0]), "p_brushHorse02x", Local_30.f_231, 0);
	set_anim_scene_entity(&(Local_30.f_13[0]), "p_gate_horse01a", Local_30.f_232, 0);
	start_anim_scene(&(Local_30.f_13[0]));
	func_150(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	func_150(uParam0, Local_30.f_158, "Horse_01", 0, 0, 0, 0);
	if (does_entity_exist(Local_30.f_164))
	{
		func_150(uParam0, Local_30.f_164, "Horse_01^1", 0, 0, 0, 0);
	}
	func_150(uParam0, Local_30.f_162, "RCSP_HUNTING1_MALES_01", 0, 0, 0, 0);
	func_150(uParam0, Local_30.f_163, "RCSP_HUNTING1_MALES_01^1", 0, 0, 0, 0);
	func_420(uParam0, Local_30.f_231, "p_brushHorse02x", 0, 0, 0, 0);
	func_420(uParam0, Local_30.f_232, "p_gate_horse01a", 0, 0, 0, 0);
	func_420(uParam0, Local_30.f_233, "p_chair02x", 0, 0, 0, 0);
	func_167(76, 0);
	func_1300();
	iVar1 = func_1295();
	if (iVar1 > 0)
	{
		func_278(iVar1, 0, 1065353216, 1, 0, 0, 1, 752097756);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_757(var uParam0)
{
	func_1301(Global_1901327, 2);
	func_1301(Global_1901327, 4);
	_set_weather_type_transition(-173507739, 1500834021, 0.25f, 1);
	func_130(-369.8832f, 787f, 116.06f, 15f, 1, 0, 0, 0, 0);
	_0x2eb75fb86c41f026(Local_30.f_158, 3, 0);
	func_1302(uParam0, 524288);
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_758(var uParam0)
{
	if (!func_388(Local_30.f_2, 8))
	{
		func_1303();
		func_414(&(Local_30.f_2), 8);
	}
	func_167(76, 1);
	func_163(76, 1, 1);
	func_1304(uParam0);
	func_218(Local_30.f_168[1]);
	func_1264(uParam0, Global_35);
	func_1264(uParam0, Local_30.f_158);
	func_1264(uParam0, Local_30.f_164);
	func_1264(uParam0, Local_30.f_162);
	func_1264(uParam0, Local_30.f_163);
	func_1264(uParam0, Local_30.f_231);
	func_1264(uParam0, Local_30.f_233);
	func_1264(uParam0, Local_30.f_232);
	if (does_entity_exist(Local_30.f_158))
	{
		Local_30.f_165 = Local_30.f_158;
	}
	if (does_entity_exist(Local_30.f_165))
	{
		func_150(uParam0, Local_30.f_165, "Horse_01", 0, 0, 0, 0);
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_759(var uParam0)
{
	func_1305(uParam0);
	switch (func_1269(uParam0))
	{
		case 0:
			if (func_388(&Global_1901327, 2))
			{
				if (func_256(Local_30.f_158) != func_1306())
				{
					Local_30.f_283 = 1;
					Local_30.f_283.f_1 = 0;
					Local_30.f_283.f_6 = { -355.2263f, 789.1247f, 115.2208f };
					func_385(uParam0, func_384(func_33(uParam0)));
					Local_30.f_158 = func_896(&(Local_30.f_294), &(Local_30.f_283));
					uParam0->f_5411 = Local_30.f_158;
				}
				else if (func_388(&Global_1901327, 4))
				{
					if (!does_entity_exist(Local_30.f_158))
					{
						return 0;
					}
					if (!func_1291(1, 0))
					{
						return 0;
					}
					if (!is_ped_injured(Local_30.f_158))
					{
						freeze_entity_position(Local_30.f_158, false);
					}
					return 1;
				}
			}
			else
			{
				func_1307();
			}
			break;
		case 1:
			if (!does_entity_exist(Local_30.f_158))
			{
				return 0;
			}
			if (!func_1291(1, 0))
			{
				return 0;
			}
			if (!is_ped_injured(Local_30.f_158))
			{
				freeze_entity_position(Local_30.f_158, false);
			}
			_0xb65e7f733956cf25(func_1308(45));
			func_1309(45, 0, 1, 0, 0);
			return 1;
		case 2:
			if (func_388(Local_30.f_2, 1) || func_912(Local_30.f_168[1]) > 10f)
			{
				_0xb65e7f733956cf25(func_1308(45));
				func_1309(45, 0, 1, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_760(var uParam0)
{
	func_1251();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_761(var uParam0)
{
	func_1251();
	vVar0 = { -357.8013f, 785.0747f, 115.1391f };
	fVar3 = 272.8054f;
	vVar4 = { -357.0687f, 796.135f, 115.2526f };
	fVar7 = 319.0601f;
	vVar8 = { -358.4086f, 798.1682f, 115.2511f };
	fVar11 = 25.9224f;
	if (!is_ped_injured(Global_35))
	{
		if (func_1252(Global_35, -358.8489f, 787.681f, 115.172f, 1) > 10f)
		{
			func_903(Global_35, -358.8489f, 787.681f, 115.172f, 277.0979f, 2, 1073741824);
		}
	}
	iVar12 = 0;
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, vVar8.x, vVar8.y, vVar8.z, fVar11, 1, 0, 1, 0, 1, 0))
	{
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_158))
	{
		Local_30.f_158 = func_166(uParam0);
		func_903(Local_30.f_158, vVar0, fVar3, 2, 1073741824);
		iVar12 = 1;
	}
	if (!func_1291(1, 0))
	{
		iVar12 = 1;
	}
	remove_all_ped_weapons(func_171(), true, true);
	if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_ped_drops_weapons_when_dead(func_171(), false);
	}
	if (!is_ped_injured(func_1254()))
	{
		func_903(func_1254(), vVar4, fVar7, 2, 1073741824);
		if (!is_ped_injured(func_171()))
		{
			func_1281(func_171(), func_1254(), 0, -1, 1);
		}
	}
	_text_database_request("RHUNT");
	if (!_text_database_has_loaded("RHUNT"))
	{
		iVar12 = 1;
	}
	if (iVar12 == 1)
	{
		return false;
	}
	func_381(uParam0);
	func_1300();
	iVar13 = func_280();
	func_816(&iVar13, 17);
	func_817(&iVar13, 0);
	func_818(iVar13);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_762(var uParam0)
{
	func_167(76, 0);
	func_1310(uParam0, 1);
	func_1311();
	_set_weather_type(-173507739, true, true, false, 0f, false);
	_set_weather_type_transition(-173507739, 1500834021, 0.25f, 1);
	set_entity_visible(func_171(), false);
	set_entity_visible(func_1254(), false);
	func_130(1829.826f, 1288.261f, 199.7559f, 1500f, 1, 0, 0, 0, 0);
	Local_30.f_254[9] = _create_volume_sphere(1829.826f, 1288.261f, 199.7559f, 0f, 0f, 0f, 400f, 400f, 400f);
	_0xc1799fafd2fdf52b(&(Local_30.f_254[9]), 0, 0, 0);
	Local_30.f_254[10] = _create_volume_sphere(70.10789f, 1097.672f, 177.4224f, 0f, 0f, 0f, 90f, 90f, 90f);
	_0xc1799fafd2fdf52b(&(Local_30.f_254[10]), 0, 0, 0);
	Local_30.f_254[11] = _create_volume_sphere(1280.538f, 1207.928f, 144.547f, 0f, 0f, 0f, 120.25f, 120.25f, 120.25f);
	_0xc1799fafd2fdf52b(&(Local_30.f_254[11]), 0, 0, 0);
	Local_30.f_254[12] = _create_volume_box(134.0574f, 1102.985f, 184.0974f, 0f, 0f, 27f, 533.5f, 41.75f, 20.25f);
	_0xc1799fafd2fdf52b(&(Local_30.f_254[12]), 0, 0, 0);
	Local_30.f_254[19] = _create_volume_sphere(1769.682f, 1263.484f, 189.6674f, 0f, 0f, 0f, 1500f, 1500f, 1500f);
	_0x2161278c6322f740(2016, 0, 0, -1, -1, &(Local_30.f_254[19]));
	func_177(&(Local_30.f_254[19]));
	return uParam0->f_607 == uParam0->f_607;
}

bool func_763(var uParam0)
{
	func_167(76, 0);
	func_1282(-352.3459f, 796.0154f, 115.2283f, -351.7358f, 796.5907f, 115.2197f, 539.3207f, 1346.264f, 178.1126f, 541.2661f, 1352.374f, 178.8926f);
	set_entity_visible(func_171(), true);
	set_entity_visible(func_1254(), true);
	if (!func_341(-1516555556, 1, 0))
	{
		func_312(-1516555556, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (!func_341(516844411, 1, 0))
	{
		func_312(516844411, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (!func_341(-635441454, 1, 0))
	{
		func_312(-635441454, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (!func_388(Local_30.f_2, 128))
	{
		if (!is_ped_injured(func_171()))
		{
			task_follow_nav_mesh_to_coord(func_171(), -351.8194f, 788.3896f, 115.1231f, 1f, -1, 0.25f, 1, 36.9727f);
		}
		func_218(&(Local_30.f_143[0]->f_4));
	}
	func_1283(func_411(1));
	func_1285(0, 1);
	func_1284(10, 895);
	func_177(&(Local_30.f_254[0]));
	Local_30.f_254[0] = _create_volume_sphere(-370.328f, 787.5651f, 115.2151f, 0f, 0f, 0f, 17f, 17f, 17f);
	func_1312(0, 5);
	StringCopy(&Local_774, "camera_treatments", 64);
	StringCopy(&(Local_774.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	_0x6a4d224fc7643941(&Local_774);
	StringCopy(&Local_790, "camera_treatments", 64);
	StringCopy(&(Local_790.f_8), "HNTN1_RABBIT_PUSH_IN_TREATMENT_REQUEST", 64);
	_0x0751d461f06e41ce(player_id(), 49, 0, 0);
	_0x0751d461f06e41ce(player_id(), 50, 0, 0);
	_0x1e017404784aa6a3(func_171(), 1504217285);
	_0x0d7fd6a55fd63aef(25, 2, 1);
	_0x0d7fd6a55fd63aef(21, 2, 1);
	_0x0d7fd6a55fd63aef(19, 2, 1);
	_0x0d7fd6a55fd63aef(16, 3, 0);
	if (does_entity_exist(Local_30.f_163))
	{
		uVar0 = Local_30.f_163;
		delete_entity(&uVar0);
	}
	if (does_entity_exist(Local_30.f_162))
	{
		uVar0 = Local_30.f_162;
		delete_entity(&uVar0);
	}
	if (does_entity_exist(Local_30.f_165))
	{
		set_entity_as_mission_entity(Local_30.f_165, true, true);
		if (func_519(Local_30.f_165))
		{
			iVar1 = func_256(Local_30.f_165);
			func_518(iVar1);
		}
		else
		{
			uVar0 = Local_30.f_165;
			delete_entity(&uVar0);
		}
	}
	func_1274(Local_30.f_158, 0f, 0);
	task_lead_horse(Global_35, Local_30.f_158);
	_0x0751d461f06e41ce(player_id(), 6, 0, 1);
	Local_30.f_141 = 1;
	func_218(Local_30.f_168[1]);
	func_184(1024);
	return uParam0->f_607 == uParam0->f_607;
}

int func_764(var uParam0)
{
	func_1313(uParam0);
	func_1314(uParam0);
	func_1315();
	if (func_388(Local_30.f_2, 512))
	{
		func_1316(uParam0);
	}
	switch (func_1269(uParam0))
	{
		case 0:
			if (is_screen_faded_in())
			{
				if (func_1273(Global_35, Local_30.f_158, 0))
				{
					func_133(uParam0, 1);
				}
			}
			break;
		case 1:
			if (func_388(Local_30.f_2, 1) || func_912(Local_30.f_168[1]) > 10f)
			{
				func_218(Local_30.f_168[1]);
				func_133(uParam0, 2);
			}
			break;
		case 2:
			if (func_912(Local_30.f_168[1]) > 1.5f)
			{
				func_134(uParam0, 1);
				func_133(uParam0, 3);
			}
			break;
		case 3:
			func_1317(uParam0);
			if (!is_ped_injured(Global_35))
			{
				if (func_1252(Global_35, 66f, 1092.7f, 178.3f, 1) < 10f)
				{
					bVar0 = true;
				}
			}
			if (!is_ped_injured(func_171()))
			{
				if (func_1252(func_171(), 87.7525f, 1092.175f, 180.0438f, 1) < 10f)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				func_133(uParam0, 4);
			}
			break;
		case 4:
			if (func_1318(uParam0))
			{
				func_1282(539.3207f, 1346.264f, 178.1126f, 541.2661f, 1352.374f, 178.8926f, 1789.439f, 1257.095f, 191.5743f, 1777.462f, 1250.292f, 189.9805f);
				func_1283(func_411(2));
				func_1284(10, 893);
				func_1319(&(Local_30.f_334), 1774.073f, 1256.452f, 189.5453f, 5f, 1, -1, 0);
				func_414(&(Local_30.f_2), 512);
				func_134(uParam0, 2);
				func_1320(Local_30.f_158, 1, 55);
				func_1320(Local_30.f_158, 0, 65);
				func_133(uParam0, 5);
			}
			break;
		case 5:
			func_1321();
			bVar2 = func_1322(uParam0, 895);
			bVar1 = func_1323(uParam0, "RH1_HOSEA_FLW");
			if (!bVar1)
			{
				return 0;
			}
			if (!bVar2)
			{
				return 0;
			}
			func_1324(func_171(), 13, 725);
			if (func_465(13))
			{
				StringCopy(&cVar3, "RH1_ILO_SEAN_A", 24);
			}
			else if (func_465(5))
			{
				StringCopy(&cVar3, "RH1_ILO_SEAN_C", 24);
			}
			else
			{
				StringCopy(&cVar3, "RH1_ILO_SEAN_B", 24);
			}
			if (!func_465(9))
			{
				StringCopy(&cVar6, "RH1_ILO_LENNY_A", 24);
			}
			else
			{
				StringCopy(&cVar6, "RH1_ILO_LENNY_B", 24);
			}
			iVar9 = func_171();
			func_1325(uParam0, &iVar9, "HNT1_UC_SEAN", "HNT1_UC_LEN", cVar3, cVar6);
			if (func_1326())
			{
				if (func_10(Local_30.f_295))
				{
					func_11(&(Local_30.f_295), 1, 1);
				}
				if (func_10(Local_30.f_296))
				{
					func_11(&(Local_30.f_296), 1, 1);
				}
				set_ped_reset_flag(func_171(), 53, false);
				func_1327(func_171(), 0, 1, 0);
				if (is_player_playing(player_id()))
				{
					_0xc67a4910425f11f1(player_id(), 0);
				}
				func_133(uParam0, 6);
			}
			break;
		case 6:
			return 1;
		case 19:
			break;
	}
	func_1328();
	if (!_0x6614f9039bd31931(player_id(), 6, 0))
	{
		_0x0751d461f06e41ce(player_id(), 6, 0, 1);
	}
	return 0;
}

bool func_765(var uParam0)
{
	if (get_ped_config_flag(func_171(), 167, true))
	{
		set_ped_config_flag(func_171(), 167, false);
	}
	_0x2b4ce170de09f346(func_171(), 1504217285);
	_0x0a5a4f1979abb40e(&Local_774);
	_0x798be43c9393632b(&Local_774);
	_0x660a8f876df1d4f8(21);
	_0x660a8f876df1d4f8(25);
	_0x660a8f876df1d4f8(19);
	func_1251();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_766(var uParam0)
{
	func_1251();
	vVar0 = { 1818.381f, 1279.986f, 196.0927f };
	fVar3 = 130.6884f;
	vVar4 = { 1810.587f, 1274.937f, 194.0072f };
	fVar7 = 124.5709f;
	vVar8 = { 1776.753f, 1255.411f, 189.6771f };
	fVar11 = 25.9224f;
	if (!is_ped_injured(Global_35))
	{
		if (func_1252(Global_35, 1769.682f, 1263.484f, 189.6674f, 1) > 10f)
		{
			func_903(Global_35, 1769.682f, 1263.484f, 189.6674f, 72.34f, 2, 1073741824);
		}
	}
	iVar12 = 0;
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, vVar8.x, vVar8.y, vVar8.z, fVar11, 1, 0, 1, 0, 1, 0))
	{
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_158))
	{
		Local_30.f_158 = func_166(uParam0);
		func_903(Local_30.f_158, vVar0, fVar3, 2, 1073741824);
		iVar12 = 1;
	}
	if (!is_ped_injured(func_1254()))
	{
		func_903(func_1254(), vVar4, fVar7, 2, 1073741824);
		if (!is_ped_injured(func_171()))
		{
			func_1281(func_171(), func_1254(), 0, -1, 1);
		}
	}
	if (iVar12 == 1)
	{
		return false;
	}
	remove_all_ped_weapons(func_171(), true, true);
	if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_ped_drops_weapons_when_dead(func_171(), false);
	}
	if (!is_ped_injured(Global_35))
	{
		if (!is_ped_injured(Local_30.f_158))
		{
			func_1281(Global_35, Local_30.f_158, 0, -1, 1);
			freeze_entity_position(Local_30.f_158, false);
		}
	}
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	_set_weather_type(-173507739, true, true, false, 0f, false);
	_0x2161278c6322f740(992, 0, 0, -1, -1, 0);
	iVar13 = func_280();
	func_816(&iVar13, 20);
	func_817(&iVar13, 0);
	func_818(iVar13);
	if (!_does_volume_exist(&(Local_30.f_254[9])))
	{
		func_130(1829.826f, 1288.261f, 199.7559f, 1500f, 1, 0, 0, 0, 0);
		Local_30.f_254[9] = _create_volume_sphere(1829.826f, 1288.261f, 199.7559f, 0f, 0f, 0f, 400f, 400f, 400f);
		_0xc1799fafd2fdf52b(&(Local_30.f_254[9]), 0, 0, 0);
	}
	_0x0751d461f06e41ce(player_id(), 6, 0, 1);
	Local_30.f_141 = 1;
	return uParam0->f_607 == uParam0->f_607;
}

bool func_767(var uParam0)
{
	if (!func_1329(5))
	{
		func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
	}
	if (!is_waypoint_playback_going_on_for_ped(func_171(), 0))
	{
		task_follow_waypoint_recording(func_171(), func_411(2), 0, 9736, -1, 0, 0, -1);
	}
	_0x0d7fd6a55fd63aef(16, 3, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_768(var uParam0)
{
	if (func_573(-1448210800, 0, 0) < 1)
	{
		func_312(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	}
	_0xf74e134f40192884(Local_30.f_158, 2);
	set_player_control(player_id(), true, 0, false);
	func_312(732091142, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	Global_40.f_2 = { func_1331() };
	func_1332(2);
	func_1333(1);
	func_1333(2);
	func_1333(32);
	func_1333(64);
	func_1333(256);
	func_1333(512);
	func_1333(2048);
	func_1333(4096);
	func_1333(8192);
	func_1333(524288);
	func_1333(2097152);
	func_1334(32);
	func_1334(64);
	func_1335();
	if (has_ped_got_weapon(Global_35, -570967010, 0, false))
	{
		if (get_current_ped_weapon(Global_35, &iVar0, false, 9, false))
		{
			if (iVar0 == -1569615261 || iVar0 == 0)
			{
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			set_current_ped_weapon(Global_35, -570967010, true, 9, false, false);
			_0x5230d3f6ee56cfe6(Global_35, 9);
		}
		else
		{
			set_current_ped_weapon(Global_35, -570967010, true, 10, false, false);
			_0x5230d3f6ee56cfe6(Global_35, 10);
		}
	}
	else
	{
		func_1336(5);
	}
	Local_30.f_254[15] = _create_volume_sphere(1771.816f, 1250.211f, 190.5721f, 0f, 0f, 0f, 30f, 30f, 30f);
	func_374(uParam0, 16);
	Global_1935496->f_32 = 0;
	return uParam0->f_607 == uParam0->f_607;
}

int func_769(var uParam0)
{
	func_1337(uParam0);
	func_1338(uParam0);
	func_1339();
	func_1340();
	func_1341();
	bVar0 = false;
	switch (func_1269(uParam0))
	{
		case 0:
			if (!func_388(Local_30.f_40, 8))
			{
				func_414(&(Local_30.f_40), 8);
			}
			if (func_388(Local_30.f_40, 8) && !func_388(Local_30.f_2, 8192))
			{
				if (func_1342())
				{
					if (func_388(Local_30.f_2, 524288))
					{
						func_414(&(Local_30.f_2), 8192);
						func_218(Local_30.f_168[1]);
						_0x10adfdf07b7dffba(Global_35, 999999, 1224625121);
					}
				}
				else if (!func_1343())
				{
					if (!func_388(Local_30.f_2, 2))
					{
						func_1315();
					}
				}
				else
				{
					func_1344();
				}
			}
			else
			{
				if (!func_388(Local_30.f_2, 512))
				{
					func_414(&(Local_30.f_2), 512);
				}
				if (!func_388(Local_30.f_2, 1))
				{
					bVar0 = true;
				}
				if (!func_388(Local_30.f_2, 2))
				{
					bVar0 = true;
				}
				if (!func_1345())
				{
					bVar0 = true;
				}
				if (!bVar0)
				{
					func_1346();
					func_133(uParam0, 1);
				}
				func_1344();
			}
			break;
		case 1:
			if (func_1347() >= 6)
			{
				if (!func_471(1048576))
				{
					func_1333(1048576);
				}
				if (!func_471(256))
				{
					func_1333(256);
				}
				if (!func_471(2048))
				{
					func_1333(2048);
				}
				if (func_471(2))
				{
					func_472(2);
				}
				if (func_471(4))
				{
					func_472(4);
				}
				if (func_471(2097152))
				{
					func_472(2097152);
				}
				func_1333(4194304);
				if (!func_341(1970477904, 2, 0))
				{
					if (func_573(1970477904, 0, 0) < 2)
					{
						func_312(1970477904, 5, 1, 0, 0, 752097756, 0, 0, 0, 0);
					}
				}
				remove_blip(&(Local_30.f_167));
				func_113(1);
				Local_30.f_308 = _create_propset_2(834622637, 1775.353f, 1255.754f, 189.6069f, 1, 60f, 1200f, false, true);
				func_1319(&(Local_30.f_333), 1776.646f, 1253.532f, 189.7736f, 2f, 2, -1, 0);
				_0xdfea23ec90113657(get_hash_key("vegmod_camp_hunting1"));
				func_133(uParam0, 2);
			}
			func_1344();
			break;
		case 2:
			if (func_1347() >= 11)
			{
				if (!func_471(2048))
				{
					func_1333(2048);
				}
				if (func_10(Local_30.f_305))
				{
					func_11(&(Local_30.f_305), 1, 1);
				}
				func_414(&(Local_30.f_2), 16384);
				func_1348(1);
				task_look_at_entity(Global_35, func_171(), -1, 0, 51, 0);
				func_133(uParam0, 3);
			}
			break;
		case 3:
			if (func_1349(uParam0))
			{
				if (func_388(Local_30.f_2, 1024))
				{
					if (func_471(32))
					{
						func_472(32);
					}
					if (func_1350())
					{
						func_1350();
						func_133(uParam0, 4);
					}
				}
			}
			if (!func_471(2048))
			{
				func_1333(2048);
			}
			_disable_first_person_cam_this_frame();
			disable_control_action(0, -1404316431, false);
			break;
		case 4:
			if (func_388(Local_30.f_2, 4))
			{
				if (func_471(2048))
				{
					func_472(2048);
				}
				func_1351();
				func_134(uParam0, 11);
				func_133(uParam0, 5);
				func_218(Local_30.f_168[0]);
				Local_30.f_1 = 6;
			}
			_disable_first_person_cam_this_frame();
			disable_control_action(0, -1404316431, false);
			break;
		case 5:
			if (func_1352())
			{
				func_113(1);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_218(Local_30.f_168[1]);
				func_1333(2048);
				func_1333(2097152);
				func_1333(1048576);
				func_133(uParam0, 6);
			}
			_disable_first_person_cam_this_frame();
			disable_control_action(0, -1404316431, false);
			break;
		case 6:
			disable_control_action(0, -1404316431, false);
			if (func_1291(2, 0) && func_1353(Local_30.f_168[1], 2f))
			{
				func_1310(uParam0, 2);
				return 1;
			}
			break;
	}
	if (func_388(Local_30.f_40, 8))
	{
		func_1316(uParam0);
	}
	if (!func_1354(uParam0, 16))
	{
		func_374(uParam0, 16);
	}
	return 0;
}

bool func_770(var uParam0)
{
	func_178();
	func_1346();
	func_1251();
	_0x160825dadf1b04b3();
	_0x0d7fd6a55fd63aef(16, 3, 1);
	func_1333(2097152);
	if (func_471(1048576))
	{
		func_472(1048576);
	}
	func_474(32);
	if (func_10(Local_30.f_305))
	{
		func_11(&(Local_30.f_305), 1, 1);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_771(var uParam0)
{
	vVar0 = { 1769.086f, 1265.119f, 189.7204f };
	fVar3 = 120.4882f;
	vVar4 = { 1778.077f, 1249.156f, 189.9727f };
	fVar7 = 149.8182f;
	vVar8 = { 1775.66f, 1249.397f, 189.7702f };
	fVar11 = 260.142f;
	if (!is_ped_injured(Global_35))
	{
		if (func_1252(Global_35, 1769.682f, 1263.484f, 189.6674f, 1) > 10f)
		{
			func_903(Global_35, 1769.682f, 1263.484f, 189.6674f, 72.34f, 2, 1073741824);
		}
	}
	if (!_does_volume_exist(&(Local_30.f_254[9])))
	{
		func_130(1829.826f, 1288.261f, 199.7559f, 1500f, 1, 0, 0, 0, 0);
		Local_30.f_254[9] = _create_volume_sphere(1829.826f, 1288.261f, 199.7559f, 0f, 0f, 0f, 400f, 400f, 400f);
		_0xc1799fafd2fdf52b(&(Local_30.f_254[9]), 0, 0, 0);
	}
	if (!func_388(Local_30.f_2, 16))
	{
		if (func_1347() == 0)
		{
			func_1355();
			func_414(&(Local_30.f_2), 16);
		}
	}
	if (func_1347() < 11)
	{
		return false;
	}
	iVar12 = 0;
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, vVar8.x, vVar8.y, vVar8.z, fVar11, 1, 0, 1, 0, 1, 0))
	{
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_158))
	{
		Local_30.f_158 = func_166(uParam0);
		func_903(Local_30.f_158, vVar0, fVar3, 2, 1073741824);
		iVar12 = 1;
	}
	if (!is_ped_injured(func_1254()))
	{
		func_903(func_1254(), vVar4, fVar7, 2, 1073741824);
		if (!is_ped_injured(func_171()))
		{
			func_903(func_171(), vVar8, fVar11, 2, 1073741824);
		}
	}
	if (iVar12 == 1)
	{
		return false;
	}
	if (!is_ped_injured(Global_35))
	{
		if (!is_ped_injured(Local_30.f_158))
		{
			freeze_entity_position(Local_30.f_158, false);
		}
	}
	if (!func_1291(2, 0))
	{
		return false;
	}
	remove_all_ped_weapons(func_171(), true, true);
	if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_ped_drops_weapons_when_dead(func_171(), false);
	}
	func_1310(uParam0, 2);
	func_1251();
	if (func_120(uParam0, 4) && !func_127(uParam0, 2))
	{
		if (!_does_scenario_point_exist(Local_30.f_312))
		{
			Local_30.f_312 = _find_closest_active_scenario_point_of_type(1774.519f, 1256.189f, 189.8569f, 889554021, 1.5f, 0, false);
			_request_scenario_type(-229964281, 15, 0, 0);
		}
		if (_does_scenario_point_exist(Local_30.f_312))
		{
			_task_use_scenario_point(Global_35, Local_30.f_312, "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1", 0, false, true, 0, false, -1f, false);
		}
		func_1356();
	}
	_0x0751d461f06e41ce(player_id(), 6, 0, 1);
	Local_30.f_141 = 1;
	return uParam0->f_607 == uParam0->f_607;
}

bool func_772(var uParam0)
{
	if (!func_388(Local_30.f_2, 64))
	{
		func_1357(Global_35);
		func_1358();
		func_1359();
		iVar0 = func_280();
		func_328(&iVar0, 0, 0, 0, 1, 0, 0, 0);
		func_816(&iVar0, 7);
		func_818(iVar0);
		_set_weather_type(1632247697, true, true, false, 0f, false);
		func_654(1831763320, 600942249, 1, 0, 1);
		func_1333(1048576);
		func_1333(256);
		func_1333(2097152);
		func_414(&(Local_30.f_2), 64);
	}
	if (func_1360())
	{
		return false;
	}
	func_1361();
	clear_ped_tasks(Local_30.f_158, 1, 0);
	task_stand_still(Local_30.f_158, -1);
	set_animal_tuning_bool_param(Local_30.f_158, 48, true);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_773(var uParam0)
{
	func_1362();
	func_1333(1);
	func_1333(2);
	func_1333(32);
	func_1333(64);
	func_1333(256);
	func_1333(512);
	func_1333(2048);
	func_1333(8192);
	func_1333(524288);
	func_1334(32);
	func_1334(128);
	if (func_471(1))
	{
		func_472(1);
	}
	if (!func_471(2))
	{
		func_1333(2);
	}
	func_472(4096);
	if (!func_341(1471975165, 1, 0))
	{
		func_312(1471975165, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (!func_341(500564674, 1, 0))
	{
		func_312(500564674, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (!func_341(-1991037110, 1, 0))
	{
		func_312(-1991037110, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	}
	_0xa3db37edf9a74635(player_id(), Local_30.f_158, 33, 0, 1);
	task_look_at_entity(Global_35, func_171(), -1, 0, 51, 0);
	func_1363(1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_774(var uParam0)
{
	func_1364(uParam0);
	func_1365(uParam0);
	func_1366();
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	switch (func_1269(uParam0))
	{
		case 0:
			if (func_1367())
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				if (!func_471(1))
				{
					func_1333(1);
				}
				if (func_471(256))
				{
					func_472(256);
				}
				func_474(32);
				func_134(uParam0, 2);
				func_1368(1774.525f, 1256.636f, 190.0089f, 100f, 0, 0);
				func_414(&(Local_30.f_2), 4);
				func_133(uParam0, 1);
			}
			if (does_entity_exist(&(Global_43619[2])))
			{
				set_entity_coords(&(Global_43619[2]), 1774.144f, 1256.474f, 189.58f, true, false, true, true);
				set_entity_heading(&(Global_43619[2]), 57.02f);
			}
			disable_control_action(0, -1404316431, false);
			_disable_first_person_cam_this_frame();
			break;
		case 1:
			if (!func_1345())
			{
				if (func_471(524288))
				{
					func_472(524288);
				}
				if (_does_propset_exist(Local_30.f_308))
				{
					_set_propset_as_no_longer_needed(Local_30.f_308);
					_delete_propset(Local_30.f_308, true, true);
				}
				_0xdd0bc0edcb2162f6(get_hash_key("vegmod_camp_hunting1"));
				func_473(1);
				func_414(&(Local_30.f_2), 1);
				if (!func_341(-1516555556, 1, 0))
				{
					func_312(-1516555556, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
				}
				func_133(uParam0, 4);
			}
			disable_control_action(0, -1404316431, false);
			_disable_first_person_cam_this_frame();
			break;
		case 4:
			func_134(uParam0, 10);
			func_218(Local_30.f_168[1]);
			func_133(uParam0, 5);
			break;
		case 5:
			if (!is_ped_injured(Local_30.f_158))
			{
				if (func_1273(Global_35, Local_30.f_158, 0))
				{
					if (func_165(7))
					{
						func_59(7);
					}
					if (func_1273(func_171(), func_1254(), 0))
					{
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

bool func_775(var uParam0)
{
	func_178();
	func_1251();
	if (!is_ped_injured(func_171()))
	{
		task_clear_look_at(func_171());
	}
	func_183();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_776(var uParam0)
{
	vVar0 = { 1780.69f, 1252.2f, 191.19f };
	fVar3 = 165f;
	vVar4 = { 1777.405f, 1249.34f, 190.897f };
	fVar7 = 127.17f;
	vVar8 = { 1775.984f, 1250.184f, 189.7766f };
	fVar11 = 25.9224f;
	if (!is_ped_injured(Global_35))
	{
		if (func_1252(Global_35, 1779.859f, 1251.595f, 190.042f, 1) > 10f)
		{
			func_903(Global_35, 1779.859f, 1251.595f, 190.042f, 72.34f, 2, 1073741824);
		}
	}
	iVar12 = 0;
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, vVar8.x, vVar8.y, vVar8.z, fVar11, 1, 0, 1, 0, 1, 0))
	{
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_158))
	{
		Local_30.f_158 = func_166(uParam0);
		func_903(Local_30.f_158, vVar0, fVar3, 2, 1073741824);
		iVar12 = 1;
	}
	if (!is_ped_injured(func_1254()))
	{
		func_903(func_1254(), vVar4, fVar7, 2, 1073741824);
		if (!is_ped_injured(func_171()))
		{
			func_1281(func_171(), func_1254(), 0, -1, 1);
		}
	}
	if (iVar12 == 1)
	{
		return false;
	}
	if (!is_ped_injured(Global_35))
	{
		if (!is_ped_injured(Local_30.f_158))
		{
			func_1281(Global_35, Local_30.f_158, 0, -1, 1);
			freeze_entity_position(Local_30.f_158, false);
		}
	}
	_text_database_request("RHUNT");
	if (!_text_database_has_loaded("RHUNT"))
	{
		iVar12 = 1;
	}
	if (!func_341(1831763320, 1, 0))
	{
		if (func_573(1831763320, 0, 0) < 1)
		{
			func_312(1831763320, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	remove_all_ped_weapons(func_171(), true, true);
	if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_ped_drops_weapons_when_dead(func_171(), false);
	}
	func_1251();
	func_1369();
	_set_weather_type(-173507739, true, true, false, 0f, false);
	_0x0751d461f06e41ce(player_id(), 6, 0, 1);
	Local_30.f_141 = 1;
	return uParam0->f_607 == uParam0->f_607;
}

bool func_777(var uParam0)
{
	if (!_text_database_has_loaded("RHUNT"))
	{
		_text_database_request("RHUNT");
		return false;
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_778(var uParam0)
{
	if (func_26(Local_30.f_168[2]))
	{
		func_544(Local_30.f_168[2]);
	}
	Local_30.f_254[13] = _create_volume_sphere(1589.985f, 1508.424f, 146.2391f, 0f, 0f, 0f, 500f, 500f, 500f);
	_0xc1799fafd2fdf52b(&(Local_30.f_254[13]), 0, 0, 0);
	_0x1e017404784aa6a3(func_171(), -1956221888);
	_0x0d7fd6a55fd63aef(25, 2, 1);
	_0x0d7fd6a55fd63aef(21, 2, 1);
	_0x0d7fd6a55fd63aef(19, 2, 1);
	Local_30.f_254[27] = _0x0eb78c2b156635b1(665633627, 1565.69f, 1559.457f, 145.3808f, 0f, 0f, 0f, 1f, 1f, 2f);
	return uParam0->f_607 == uParam0->f_607;
}

int func_779(var uParam0)
{
	func_1370(uParam0);
	func_1371(uParam0);
	func_1372();
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	switch (func_1269(uParam0))
	{
		case 0:
			func_1282(1768.829f, 1256.08f, 189.2915f, 1768.829f, 1256.08f, 189.2915f, 1563.21f, 1576.3f, 147.678f, 1563.21f, 1576.3f, 147.678f);
			func_1283(func_411(8));
			func_1284(10, 345);
			func_1285(0, 1);
			func_133(uParam0, 1);
			break;
		case 1:
			if (!is_ped_injured(func_171()))
			{
				if (func_902(Global_35, func_171(), 1, 1) < 5f)
				{
					if (is_waypoint_playback_going_on_for_ped(func_171(), 0))
					{
						iVar1 = get_ped_waypoint_progress(func_171());
						if (iVar1 < 320)
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (iVar0 == 1)
			{
				set_ped_max_move_blend_ratio(Global_35, 1.75f);
				if (!is_ped_injured(Local_30.f_158))
				{
					set_ped_max_move_blend_ratio(Local_30.f_158, 1.75f);
				}
			}
			if (!is_ped_injured(func_171()))
			{
				set_ped_max_move_blend_ratio(func_171(), 1.75f);
			}
			if (!is_ped_injured(func_1254()))
			{
				set_ped_max_move_blend_ratio(func_1254(), 1.75f);
			}
			bVar2 = func_1322(uParam0, -1);
			bVar3 = func_1323(uParam0, "RH1_HOSEA_FLW");
			if (!bVar2 || !bVar3)
			{
				return 0;
			}
			if (func_1373(1564.448f, 1569.825f, 146.1035f, 0, 7.5f, -1, 4, 1071644672, 1))
			{
				if (!is_waypoint_playback_going_on_for_ped(func_171(), 0))
				{
					if (_0x2009f8ab7a5e9d6d(player_id()))
					{
						_0x0c6b89876262a99d(player_id(), func_171());
					}
					_0x12e09e278c6c29b7(player_id());
					func_414(&(Local_30.f_2), 512);
					func_133(uParam0, 5);
				}
				else
				{
					func_1374(func_171(), Local_30.f_7, Local_30.f_8, 1071644672);
				}
			}
			break;
		case 4:
			if (func_1375(Global_35) && is_ped_on_mount(Global_35))
			{
				func_414(&(Local_30.f_2), 32);
				remove_blip(&(Local_30.f_167));
				func_134(uParam0, 9);
				func_133(uParam0, 5);
			}
			break;
		case 5:
			if (func_388(Local_30.f_2, 64) && (func_902(Global_35, func_171(), 1, 1) < 10f || func_1375(Global_35)))
			{
				func_414(&(Local_30.f_2), 32);
				func_133(uParam0, 6);
			}
			break;
		case 6:
			if (func_388(Local_30.f_2, 64) || func_912(Local_30.f_168[1]) > 15f)
			{
				return 1;
			}
			break;
	}
	func_1376(uParam0);
	func_1377();
	return 0;
}

bool func_780(var uParam0)
{
	func_1251();
	func_178();
	_0x2b4ce170de09f346(func_171(), -1956221888);
	_0x660a8f876df1d4f8(25);
	_0x660a8f876df1d4f8(21);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_781(var uParam0)
{
	vVar0 = { 1568.323f, 1561.555f, 145.1749f };
	fVar3 = 153.5306f;
	vVar4 = { 1564.523f, 1563.427f, 145.05f };
	fVar7 = 182.0022f;
	vVar8 = { 1566.905f, 1558.04f, 145.0677f };
	fVar11 = 25.9224f;
	if (!is_ped_injured(Global_35))
	{
		if (func_1252(Global_35, 1570.091f, 1560.277f, 145.0866f, 1) > 10f)
		{
			func_903(Global_35, 1570.091f, 1560.277f, 145.0866f, 137.4707f, 2, 1073741824);
		}
	}
	iVar12 = 0;
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, vVar8.x, vVar8.y, vVar8.z, fVar11, 1, 0, 1, 0, 1, 0))
	{
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_158))
	{
		Local_30.f_158 = func_166(uParam0);
		func_903(Local_30.f_158, vVar0, fVar3, 2, 1073741824);
		iVar12 = 1;
	}
	if (!is_ped_injured(func_1254()))
	{
		func_903(func_1254(), vVar4, fVar7, 2, 1073741824);
		if (!is_ped_injured(func_171()))
		{
			func_1281(func_171(), func_1254(), 0, -1, 1);
		}
	}
	_text_database_request("RHUNT");
	if (!_text_database_has_loaded("RHUNT"))
	{
		iVar12 = 1;
	}
	if (iVar12 == 1)
	{
		return false;
	}
	if (!is_ped_injured(Global_35))
	{
		if (!is_ped_injured(Local_30.f_158))
		{
			freeze_entity_position(Local_30.f_158, false);
		}
	}
	if (!func_341(1831763320, 1, 0))
	{
		if (func_573(1831763320, 0, 0) < 1)
		{
			func_312(1831763320, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	remove_all_ped_weapons(func_171(), true, true);
	func_1251();
	func_1369();
	Local_30.f_254[13] = _create_volume_sphere(1589.985f, 1508.424f, 146.2391f, 0f, 0f, 0f, 500f, 500f, 500f);
	_0xc1799fafd2fdf52b(&(Local_30.f_254[13]), 0, 0, 0);
	_0x0751d461f06e41ce(player_id(), 6, 0, 1);
	Local_30.f_141 = 1;
	return uParam0->f_607 == uParam0->f_607;
}

bool func_782(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_783(var uParam0)
{
	if (does_entity_exist(Local_30.f_158))
	{
		clear_ped_tasks(Local_30.f_158, 1, 0);
		task_stand_still(Local_30.f_158, -1);
	}
	if (does_entity_exist(func_181()))
	{
		iVar0 = func_181();
		delete_ped(&iVar0);
	}
	func_18(1);
	Local_30.f_254[22] = _create_volume_sphere(1531.966f, 1605.379f, 146.6007f, 0f, 0f, 0f, 15f, 15f, 15f);
	func_1378(&(Local_30.f_254[22]), 1);
	Local_30.f_254[23] = _create_volume_sphere(1531.966f, 1657.038f, 140.0962f, 0f, 0f, 0f, 15f, 15f, 15f);
	func_1378(&(Local_30.f_254[23]), 1);
	Local_30.f_254[17] = _create_volume_sphere(1567.233f, 1555.337f, 145.0264f, 0f, 0f, 0f, 9f, 9f, 9f);
	Local_30.f_254[18] = _create_volume_box(1537.525f, 1673.509f, 140.3182f, 0f, 0f, 36.5f, 95.25f, 8.75f, 19.25f);
	func_1379(uParam0);
	func_99(uParam0, 33554432);
	func_1380(uParam0, "PL_Player_Choice_Loop");
	if (!_does_volume_exist(&(Local_30.f_254[27])))
	{
		Local_30.f_254[27] = _0x0eb78c2b156635b1(665633627, 1565.69f, 1559.457f, 145.3808f, 0f, 0f, 0f, 1f, 1f, 2f);
	}
	_0x330ca55a3647fa1c(player_id(), 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_784(var uParam0)
{
	func_1381(uParam0);
	func_1382(uParam0);
	func_1383(uParam0);
	func_1384();
	func_1385();
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	switch (func_1269(uParam0))
	{
		case 0:
			if (!func_388(Local_30.f_2, 536870912))
			{
				if (func_1386(1464.936f, 1775.879f, 161.6783f, 192.1736f))
				{
					if (func_1387())
					{
						if (func_1388())
						{
							_0xfca8fb9e15fa80d3(func_181(), 332097791);
							func_1319(&(Local_30.f_318), func_1389(), 3f, 2, -1, 0);
							func_1319(&(Local_30.f_319), func_1390(), 3f, 1, -1, 0);
							func_1319(&(Local_30.f_320), func_1391(), 3f, 1, -1, 0);
							func_1319(Local_30.f_322[0], 1555.137f, 1584.465f, 146.5651f, 5f, 2, -1, 0);
							func_1319(Local_30.f_322[1], 1552.064f, 1588.599f, 146.0704f, 5f, 2, -1, 0);
							func_1319(Local_30.f_322[2], 1549.581f, 1591.888f, 145.6394f, 5f, 2, -1, 0);
							func_1319(Local_30.f_322[3], 1546.782f, 1595.282f, 145.4694f, 5f, 2, -1, 0);
							func_1319(Local_30.f_322[4], 1545.325f, 1597.729f, 145.3237f, 5f, 2, -1, 0);
							func_1319(Local_30.f_322[8], 1527.852f, 1606.184f, 146.1389f, 8f, 2, -1, 0);
							func_1319(Local_30.f_322[5], 1538.32f, 1603.897f, 145.3569f, 5f, 2, -1, 0);
							func_1319(Local_30.f_322[6], 1536.087f, 1607.338f, 145.4097f, 5f, 2, -1, 0);
							func_1319(Local_30.f_322[7], 1534.696f, 1610.584f, 145.4013f, 5f, 2, -1, 0);
							_0xfca8fb9e15fa80d3(func_181(), 332097791);
							func_414(&(Local_30.f_2), 536870912);
						}
					}
				}
			}
			else if (func_1392(uParam0))
			{
				func_414(&(Local_30.f_2), 4);
				func_1393();
				func_133(uParam0, 1);
			}
			func_1376(uParam0);
			break;
		case 1:
			if (does_entity_exist(func_181()))
			{
				if (!_0x0e6846476906c9dd(player_id(), func_181()))
				{
					_0x543dfe14be720027(player_id(), func_181(), 0);
					set_ped_reset_flag(func_181(), 170, true);
					_0xfca8fb9e15fa80d3(func_181(), 332097791);
					if (func_1394(func_181(), "hunting1_BearTrackingSalmon", 0, 1061360239, 1053609165, 0, 0, 1))
					{
					}
					_0x543dfe14be720027(player_id(), Local_30.f_248, 0);
					_0x6ecfc621a168424c(Local_30.f_248, Local_30.f_248, 0, 0);
					if (_0x0e6846476906c9dd(player_id(), func_181()))
					{
						if (!_0xe022cc1b545f1d9f(player_id()))
						{
							_0xa63fcad3a6fec6d2(player_id(), 1);
						}
						_0xfa437fa0738c370c(player_id(), 1f, 1, 0, 0);
						_0x28a13bf6b05c3d83(player_id(), 1);
						func_133(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			_0xfa437fa0738c370c(player_id(), 1f, 1, 0, 0);
			if (!func_388(Local_30.f_2, 2))
			{
				if (_0x45ab66d02b601fa7(player_id()))
				{
					func_414(&(Local_30.f_2), 2);
				}
			}
			if (!func_388(Local_30.f_2, 32) && func_388(Local_30.f_2, 2))
			{
				if (!is_ped_injured(Global_35))
				{
					if (func_1395(Global_35) < 25f)
					{
						func_414(&(Local_30.f_2), 32);
						func_133(uParam0, 4);
					}
				}
			}
			break;
		case 3:
			break;
		case 4:
			_0xfa437fa0738c370c(player_id(), 1f, 1, 0, 0);
			if (func_1398(Local_30.f_248, func_1390(), func_1396(), func_1397(1), &(Local_30.f_303), 1))
			{
				func_414(&(Local_30.f_2), 4194304);
				func_133(uParam0, 5);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_218(Local_30.f_168[1]);
				func_1393();
				if (does_blip_exist(Local_30.f_167))
				{
					remove_blip(&(Local_30.f_167));
				}
				_0x9dae1380cc5c6451(player_id(), func_181());
				_0xe5d3eb37abc1eb03(player_id());
				func_1399();
				func_134(uParam0, -1);
			}
			break;
		case 5:
			if (func_1400())
			{
				if (func_1386(1464.936f, 1775.879f, 161.6783f, 192.1736f))
				{
					if (func_912(Local_30.f_168[1]) > 0f)
					{
						if (!_0x0e6846476906c9dd(player_id(), func_181()))
						{
							_0xfca8fb9e15fa80d3(func_181(), 332097791);
							_0x543dfe14be720027(player_id(), func_181(), 0);
							set_ped_reset_flag(func_181(), 170, true);
							if (func_1394(func_181(), func_411(4), 0, 1061360239, 1053609165, 0, 0, 1))
							{
							}
							if (_0x0e6846476906c9dd(player_id(), func_181()))
							{
								func_1301(&(Local_30.f_2), 256);
							}
							_0x543dfe14be720027(player_id(), Local_30.f_250, 0);
							_0x6ecfc621a168424c(Local_30.f_250, Local_30.f_250, 0, 0);
							_0x2af423d6ecb2c485(player_id(), func_181());
							func_134(uParam0, 7);
							func_1401();
							func_133(uParam0, 6);
							Local_30.f_1 = 4;
						}
					}
				}
			}
			break;
		case 6:
			_0xfa437fa0738c370c(player_id(), 1f, 1, 0, 0);
			if (func_1398(Local_30.f_250, func_1391(), func_1396(), func_1397(3), &(Local_30.f_304), 3))
			{
				func_414(&(Local_30.f_2), 8192);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1393();
				if (does_blip_exist(Local_30.f_167))
				{
					remove_blip(&(Local_30.f_167));
				}
				_0x9dae1380cc5c6451(player_id(), func_181());
				_0xe5d3eb37abc1eb03(player_id());
				func_1399();
				func_218(Local_30.f_168[1]);
				func_134(uParam0, -1);
				func_133(uParam0, 7);
			}
			break;
		case 7:
			if (func_1400())
			{
				if (func_1386(1464.936f, 1775.879f, 161.6783f, 192.1736f))
				{
					if (func_912(Local_30.f_168[1]) > 0f)
					{
						if (!_0x0e6846476906c9dd(player_id(), func_181()))
						{
							_0x543dfe14be720027(player_id(), func_181(), 0);
							_0xfca8fb9e15fa80d3(func_181(), 332097791);
							set_ped_reset_flag(func_181(), 170, true);
							if (func_1394(func_181(), func_411(5), 0, 1061360239, 1053609165, 0, 0, 1))
							{
							}
							if (_0x0e6846476906c9dd(player_id(), func_181()))
							{
								func_1301(&(Local_30.f_2), 256);
							}
							_0x2af423d6ecb2c485(player_id(), func_181());
							func_1401();
							func_134(uParam0, 8);
							func_133(uParam0, 8);
						}
					}
				}
			}
			break;
		case 8:
			if (func_1402())
			{
				_0x9dae1380cc5c6451(player_id(), func_181());
				_0xe5d3eb37abc1eb03(player_id());
				_0x64ff4bf9af59e139(player_id(), 1);
				_0x107f2a66e1c4c83a(player_id());
				_0xdd1232b332cbb9e7(3, 1, 0);
				Local_30.f_1 = 5;
				func_218(Local_30.f_168[1]);
				func_134(uParam0, -1);
				func_133(uParam0, 9);
			}
			break;
		case 9:
			if ((Local_30.f_1 == -1 && !func_1403()) && !is_ped_on_mount(Global_35))
			{
				func_1399();
				func_175();
				func_133(uParam0, 10);
				return 1;
			}
			else if (Local_30.f_1 == -1)
			{
				if (!func_1403())
				{
					if (!func_1404(Global_35, 501393341))
					{
						task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
					}
				}
			}
			break;
	}
	if (Local_30.f_43 > 2)
	{
		func_1405(Local_30.f_249, func_1397(0));
	}
	if (func_388(Local_30.f_2, 4194304))
	{
		func_1405(Local_30.f_248, func_1397(1));
	}
	if (func_388(Local_30.f_2, 8192))
	{
		func_1405(Local_30.f_250, func_1397(3));
	}
	set_ped_reset_flag(Global_35, 129, true);
	return 0;
}

bool func_785(var uParam0)
{
	func_182();
	func_1251();
	func_177(&(Local_30.f_254[27]));
	if (does_blip_exist(Local_30.f_167))
	{
		remove_blip(&(Local_30.f_167));
	}
	func_18(0);
	set_ped_config_flag(Global_35, 308, false);
	_0x330ca55a3647fa1c(player_id(), 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_786(var uParam0)
{
	vVar0 = { 1536.965f, 1653.42f, 140.3316f };
	fVar3 = 14.0054f;
	vVar4 = { 1533.901f, 1651.704f, 140.4204f };
	fVar7 = 10.8078f;
	vVar8 = { 1534.614f, 1656.583f, 140.0398f };
	fVar11 = 30.5257f;
	if (!is_ped_injured(Global_35))
	{
		if (func_1252(Global_35, 1536.307f, 1656.527f, 140.0207f, 1) > 10f)
		{
			func_903(Global_35, 1536.307f, 1656.527f, 140.0207f, 137.4707f, 2, 1073741824);
		}
	}
	iVar12 = 0;
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, vVar8.x, vVar8.y, vVar8.z, fVar11, 1, 0, 1, 0, 1, 0))
	{
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_158))
	{
		Local_30.f_158 = func_166(uParam0);
		func_903(Local_30.f_158, vVar0, fVar3, 2, 1073741824);
		iVar12 = 1;
	}
	if (!is_ped_injured(func_1254()))
	{
		func_903(func_1254(), vVar4, fVar7, 2, 1073741824);
		func_903(&(Local_30.f_143[0]), vVar8, fVar11, 2, 1073741824);
		if (!is_ped_injured(func_171()))
		{
		}
	}
	_text_database_request("RHUNT");
	if (!_text_database_has_loaded("RHUNT"))
	{
		iVar12 = 1;
	}
	if (iVar12 == 1)
	{
		return false;
	}
	if (!is_ped_injured(Global_35))
	{
		if (!is_ped_injured(Local_30.f_158))
		{
			freeze_entity_position(Local_30.f_158, false);
		}
	}
	if (!func_341(1831763320, 1, 0))
	{
		if (func_573(1831763320, 0, 0) < 1)
		{
			func_312(1831763320, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	remove_all_ped_weapons(func_171(), true, true);
	if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_ped_drops_weapons_when_dead(func_171(), false);
	}
	func_1251();
	func_1369();
	func_1380(uParam0, "PL_Player_Choice_Loop");
	return uParam0->f_607 == uParam0->f_607;
}

bool func_787(var uParam0)
{
	_0x5199405eabfbd7f0("MissionChoice");
	func_1310(uParam0, 3);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_788(var uParam0)
{
	if (!func_388(Local_30.f_2, 512) && !func_388(Local_30.f_2, 1024))
	{
		func_414(&(Local_30.f_2), 1024);
	}
	else if (func_388(Local_30.f_2, 1024))
	{
		func_139(uParam0, func_33(uParam0), 256);
		func_99(uParam0, 33554432);
	}
	else
	{
		func_99(uParam0, 512);
	}
	_0x2161278c6322f740(992, 0, 0, -1, -1, 0);
	_0x37d7bdba89f13959("MissionChoice");
	Local_30.f_254[21] = _create_volume_sphere(1560.619f, 1696.791f, 144.1025f, 0f, 0f, 0f, 8f, 8f, 8f);
	return uParam0->f_607 == uParam0->f_607;
}

int func_789(var uParam0)
{
	_0xf45e46deecf7df6e(1024, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(224, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(480, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(128, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(32, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(64, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	func_1406(uParam0);
	func_1407(uParam0);
	func_1408(uParam0);
	func_1409(uParam0);
	if (func_1410())
	{
		func_1411(uParam0, iLocal_26, 1, 1, 0);
		return 1;
	}
	return func_1412(uParam0);
}

bool func_790(var uParam0)
{
	if (func_1329(5))
	{
		func_1413(uParam0, func_171(), 1);
	}
	func_177(Local_30.f_339);
	allow_sonar_blips(false);
	func_175();
	if (!func_180(13))
	{
		_0x28a13bf6b05c3d83(player_id(), 0);
	}
	func_1251();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_791(var uParam0)
{
	vVar0 = { 1536.965f, 1653.42f, 140.3316f };
	fVar3 = 14.0054f;
	vVar4 = { 1533.901f, 1651.704f, 140.4204f };
	fVar7 = 10.8078f;
	vVar8 = { 1503.551f, 1682.428f, 139.5198f };
	fVar11 = 30.5257f;
	if (!is_ped_injured(Global_35))
	{
		if (func_1252(Global_35, 1508.058f, 1680.79f, 139.112f, 1) > 10f)
		{
			func_1399();
			func_903(Global_35, 1508.058f, 1680.79f, 139.112f, 137.4707f, 2, 1073741824);
		}
	}
	iVar12 = 0;
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, vVar8.x, vVar8.y, vVar8.z, fVar11, 1, 0, 1, 0, 1, 0))
	{
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_158))
	{
		Local_30.f_158 = func_166(uParam0);
		func_903(Local_30.f_158, vVar0, fVar3, 2, 1073741824);
		iVar12 = 1;
	}
	if (!is_ped_injured(func_1254()))
	{
		func_903(func_1254(), vVar4, fVar7, 2, 1073741824);
		func_903(&(Local_30.f_143[0]), vVar8, fVar11, 2, 1073741824);
		if (!is_ped_injured(func_171()))
		{
		}
	}
	func_903(Global_35, 1512.227f, 1682.522f, 139.1779f, 67.4325f, 2, 1073741824);
	bVar13 = false;
	if (bVar13)
	{
		vVar14 = { 1502.87f, 1688.9f, 140.217f };
		fVar17 = -114.4303f;
	}
	else
	{
		vVar14 = { 1494.083f, 1693.659f, 140.1528f };
		fVar17 = 238.7895f;
	}
	if (!func_1414(vVar14, fVar17))
	{
		iVar12 = 1;
	}
	_text_database_request("RHUNT");
	if (!_text_database_has_loaded("RHUNT"))
	{
		iVar12 = 1;
	}
	if (iVar12 == 1)
	{
		return false;
	}
	if (bVar13)
	{
		func_903(Global_35, 1517.1f, 1681.509f, 139.5005f, 61.4355f, 2, 1073741824);
		func_903(func_181(), vVar14, fVar17, 2, 1073741824);
	}
	else
	{
		func_903(Global_35, 1509.505f, 1684.29f, 139.1135f, 55.8197f, 2, 1073741824);
		func_903(func_181(), vVar14, fVar17, 2, 1073741824);
	}
	if (!is_ped_injured(Global_35))
	{
		if (!is_ped_injured(Local_30.f_158))
		{
			freeze_entity_position(Local_30.f_158, false);
		}
	}
	if (!_0xa0bc8faed8cfeb3c(func_181()))
	{
		return false;
	}
	remove_all_ped_weapons(func_171(), true, true);
	if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_ped_drops_weapons_when_dead(func_171(), false);
	}
	func_1251();
	func_1369();
	func_1415(0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_792(var uParam0)
{
	if (does_entity_exist(func_181()))
	{
		set_entity_visible(func_181(), true);
	}
	func_1380(uParam0, "MultiStart");
	func_1310(uParam0, 5);
	_0x2161278c6322f740(992, 0, 0, -1, -1, 0);
	func_18(1);
	Local_30.f_136 = 1;
	return uParam0->f_607 == uParam0->f_607;
}

bool func_793(var uParam0)
{
	func_1416();
	func_414(&(Local_30.f_2), 1);
	iVar0 = get_best_ped_weapon(Global_35, false, false);
	set_current_ped_weapon(Global_35, iVar0, false, 0, false, false);
	task_swap_weapon(Global_35, 1, 0, 0, 0);
	func_1310(uParam0, 4);
	func_1379(uParam0);
	func_139(uParam0, func_33(uParam0), 256);
	func_99(uParam0, 33554432);
	if (does_entity_exist(func_181()))
	{
		freeze_entity_position(func_181(), false);
	}
	func_1417();
	bVar1 = true;
	if (bVar1)
	{
		Local_30.f_342.f_45 = { 1509.179f, 1686.217f, 139.2517f };
	}
	else
	{
		Local_30.f_342.f_45 = { get_entity_coords(func_181(), true, false) };
	}
	func_544(Local_30.f_168[12]);
	func_544(Local_30.f_168[10]);
	func_1380(uParam0, "1-Start-MultiStart");
	func_1418();
	return uParam0->f_607 == uParam0->f_607;
}

int func_794(var uParam0)
{
	_0xf45e46deecf7df6e(1024, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(224, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(480, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(128, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(32, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(64, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	func_1419(uParam0);
	func_1420(uParam0);
	func_1421(uParam0);
	func_1422(uParam0);
	switch (func_1269(uParam0))
	{
		case 0:
			func_414(&(Local_30.f_2), 1);
			func_133(uParam0, 1);
			break;
		case 1:
			if (func_388(Local_30.f_2, 2))
			{
				func_218(Local_30.f_168[1]);
				func_218(Local_30.f_168[0]);
				func_134(uParam0, 1);
				func_133(uParam0, 2);
			}
			break;
		case 2:
			if (!Local_30.f_136)
			{
				if (!func_1403())
				{
					if (func_902(Global_35, func_171(), 1, 1) < 5f)
					{
						return 1;
					}
				}
			}
			else if (func_1423(uParam0))
			{
				return 1;
			}
			break;
	}
	func_1424();
	if (!func_388(Local_30.f_2, 16))
	{
		if (Local_30.f_140)
		{
			if (!func_1425(&(Local_30.f_433), 16))
			{
				if (func_902(func_181(), Global_35, 1, 1) < 2.5f)
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_414(&(Local_30.f_2), 16);
				}
			}
		}
	}
	func_1418();
	return 0;
}

bool func_795(var uParam0)
{
	func_1426(1);
	if (func_1427())
	{
		func_1428(uParam0, 2046224123);
	}
	if (func_1329(5))
	{
		func_1413(uParam0, func_171(), 1);
	}
	_0xc67a4910425f11f1(player_id(), 0);
	func_1251();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_796(var uParam0)
{
	vVar0 = { 1536.965f, 1653.42f, 140.3316f };
	fVar3 = 14.0054f;
	vVar4 = { 1533.901f, 1651.704f, 140.4204f };
	fVar7 = 10.8078f;
	vVar8 = { 1534.614f, 1656.583f, 140.0398f };
	fVar11 = 30.5257f;
	if (!is_ped_injured(Global_35))
	{
		if (func_1252(Global_35, 1536.307f, 1656.527f, 140.0207f, 1) > 10f)
		{
			func_903(Global_35, 1536.307f, 1656.527f, 140.0207f, 17.0706f, 2, 1073741824);
		}
	}
	iVar12 = 0;
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, vVar8.x, vVar8.y, vVar8.z, fVar11, 1, 0, 1, 0, 1, 0))
	{
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_158))
	{
		Local_30.f_158 = func_166(uParam0);
		func_903(Local_30.f_158, vVar0, fVar3, 2, 1073741824);
		iVar12 = 1;
	}
	if (!is_ped_injured(func_1254()))
	{
		func_903(func_1254(), vVar4, fVar7, 2, 1073741824);
		func_903(&(Local_30.f_143[0]), vVar8, fVar11, 2, 1073741824);
		if (!is_ped_injured(func_171()))
		{
		}
	}
	_text_database_request("RHUNT");
	if (!_text_database_has_loaded("RHUNT"))
	{
		iVar12 = 1;
	}
	if (iVar12 == 1)
	{
		return false;
	}
	if (!is_ped_injured(Global_35))
	{
		if (!is_ped_injured(Local_30.f_158))
		{
			freeze_entity_position(Local_30.f_158, false);
		}
	}
	if (!func_341(1831763320, 1, 0))
	{
		if (func_573(1831763320, 0, 0) < 1)
		{
			func_312(1831763320, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	remove_all_ped_weapons(func_171(), true, true);
	if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_ped_drops_weapons_when_dead(func_171(), false);
	}
	func_1251();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_797(var uParam0)
{
	_0x2161278c6322f740(992, 0, 0, -1, -1, 0);
	func_414(&(Local_30.f_2), 512);
	func_18(1);
	Local_30.f_254[25] = _0x0eb78c2b156635b1(665633627, 1516.917f, 1684.452f, 139.1118f, 0f, 0f, 0f, 1.2f, 1.2f, 3f);
	Local_30.f_549 = _create_volume_box(1515.848f, 1685.887f, 140.6091f, 0f, 0f, 0f, 3f, 3f, 3f);
	Local_30.f_549.f_2 = 1;
	_0x733077295ab51304(&(Local_30.f_549));
	Local_30.f_136 = 1;
	return uParam0->f_607 == uParam0->f_607;
}

bool func_798(var uParam0)
{
	func_414(&(Local_30.f_2), 512);
	func_1301(&(Local_30.f_2), 1024);
	func_1379(uParam0);
	func_139(uParam0, func_33(uParam0), 256);
	func_99(uParam0, 33554432);
	Local_30.f_47 = -1;
	Local_30.f_254[20] = _create_volume_sphere(1499.187f, 1693.496f, 140.116f, 0f, 0f, 0f, 5f, 5f, 5f);
	return uParam0->f_607 == uParam0->f_607;
}

int func_799(var uParam0)
{
	_0xf45e46deecf7df6e(1024, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(224, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(480, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(128, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(32, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(64, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	func_1429(uParam0);
	func_1430(uParam0);
	func_1431(uParam0);
	return func_1432(uParam0);
}

bool func_800(var uParam0)
{
	func_177(&(Local_30.f_254[25]));
	func_1251();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_801(var uParam0)
{
	vVar0 = { 1536.965f, 1653.42f, 140.3316f };
	fVar3 = 14.0054f;
	vVar4 = { 1533.901f, 1651.704f, 140.4204f };
	fVar7 = 10.8078f;
	vVar8 = { 1517.44f, 1682.747f, 139.6949f };
	fVar11 = 64.6763f;
	if (!is_ped_injured(Global_35))
	{
		if (func_1252(Global_35, 1520.126f, 1685.467f, 140.2808f, 1) > 10f)
		{
			func_903(Global_35, 1520.126f, 1685.467f, 140.2808f, 72.897f, 2, 1073741824);
		}
	}
	iVar12 = 0;
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, vVar8.x, vVar8.y, vVar8.z, fVar11, 1, 0, 1, 0, 1, 0))
	{
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_158))
	{
		Local_30.f_158 = func_166(uParam0);
		func_903(Local_30.f_158, vVar0, fVar3, 2, 1073741824);
		iVar12 = 1;
	}
	if (!is_ped_injured(func_1254()))
	{
		func_903(func_1254(), vVar4, fVar7, 2, 1073741824);
		func_903(&(Local_30.f_143[0]), vVar8, fVar11, 2, 1073741824);
	}
	_text_database_request("RHUNT");
	if (!_text_database_has_loaded("RHUNT"))
	{
		iVar12 = 1;
	}
	if (iVar12 == 1)
	{
		return false;
	}
	if (!is_ped_injured(Global_35))
	{
		if (!is_ped_injured(Local_30.f_158))
		{
			freeze_entity_position(Local_30.f_158, false);
		}
	}
	remove_all_ped_weapons(func_171(), true, true);
	if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_ped_drops_weapons_when_dead(func_171(), false);
	}
	_0x437c08db4febe2bd(Global_35, "Cautious", 1f, -1);
	func_1433(uParam0, "HOSEA_FOLLOW", -1082130432, 0, 0, -1, -1, 0);
	func_1251();
	func_1369();
	func_1415(0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_802(var uParam0)
{
	func_18(1);
	_0x2161278c6322f740(992, 0, 0, -1, -1, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_803(var uParam0)
{
	func_1310(uParam0, 4);
	func_1379(uParam0);
	func_139(uParam0, func_33(uParam0), 256);
	func_99(uParam0, 33554432);
	func_1380(uParam0, "1-Start-MultiStart");
	if (!does_entity_exist(Global_1392040->f_9))
	{
		Global_1392040->f_9 = create_object_no_offset(1573336691, 1498.356f, 1693.405f, 140.2256f, true, true, false, true);
	}
	if (does_entity_exist(Global_1392040->f_9))
	{
		set_entity_as_mission_entity(Global_1392040->f_9, true, false);
		set_entity_coords(Global_1392040->f_9, 1498.356f, 1693.405f, 140.2256f, true, false, true, true);
	}
	_0xf74e134f40192884(Local_30.f_158, 0);
	Local_30.f_254[26] = _0x0eb78c2b156635b1(665633627, 1498.714f, 1693.703f, 140.6363f, 0f, 0f, 0f, 1.5f, 1.5f, 1.5f);
	return uParam0->f_607 == uParam0->f_607;
}

int func_804(var uParam0)
{
	_0xf45e46deecf7df6e(1024, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(224, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(480, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(128, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(32, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(64, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	func_1434(uParam0);
	func_1435(uParam0);
	func_1436();
	func_1437();
	switch (func_1269(uParam0))
	{
		case 0:
			if (!is_ped_on_mount(Global_35))
			{
				if (!_0x1d46b417f926d34d(Global_35))
				{
					if (func_388(Local_30.f_2, 2097152))
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
						func_1438(uParam0, "RH1_HOSEA_GO", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
						func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
						func_1301(&(Local_30.f_2), 2097152);
					}
					if (func_388(Local_30.f_2, 1))
					{
						func_1439();
						func_1440(Global_1392040->f_9);
						if (func_1441())
						{
							func_218(Local_30.f_168[1]);
							set_player_control(player_id(), false, 256, false);
							set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
							set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
							task_swap_weapon(Global_35, 0, 1, 0, 0);
							func_139(uParam0, func_33(uParam0), 2048);
							vVar0 = { func_1442(&(Local_30.f_13[13]), "arthur", "pl_arthur_enterl") };
							fVar3 = func_1443(&(Local_30.f_13[13]), "arthur", "pl_arthur_enterl");
							func_177(&(Local_30.f_254[26]));
							open_sequence_task(&(Local_30.f_337));
							if (is_ped_on_mount(Global_35))
							{
								task_dismount_animal(0, 0, 0, 0, 0, 0);
							}
							if (_get_ped_crouch_movement(Global_35))
							{
								task_set_crouch_movement(0, false, 0, false);
							}
							task_follow_nav_mesh_to_coord(0, vVar0, 1f, -1, 0.25f, 0, fVar3);
							close_sequence_task(Local_30.f_337);
							task_perform_sequence(Global_35, Local_30.f_337);
							func_414(&(Local_30.f_2), 4194304);
							func_133(uParam0, 1);
						}
					}
				}
			}
			else if (!func_388(Local_30.f_2, 2097152))
			{
				func_134(uParam0, 5);
				func_414(&(Local_30.f_2), 2097152);
			}
			break;
		case 1:
			if (!func_1404(Global_35, 242628503))
			{
				task_clear_look_at(Global_35);
				func_1444();
				func_414(&(Local_30.f_2), 524288);
				_text_database_request("MGDUL");
				func_218(Local_30.f_168[1]);
				func_133(uParam0, 2);
			}
			break;
		case 2:
			set_anim_scene_bool(&(Local_30.f_13[13]), "b_breakout", true, false);
			func_414(&(Local_30.f_2), 128);
			func_414(&(Local_30.f_2), 2);
			func_218(Local_30.f_168[1]);
			func_133(uParam0, 3);
			func_1445();
			break;
		case 3:
			func_218(Local_30.f_168[1]);
			func_133(uParam0, 4);
			func_1445();
			break;
		case 4:
			if (_is_anim_scene_started(&(Local_30.f_13[13]), false))
			{
				if (_0x005e6f28dd7ed58d(&(Local_30.f_13[13]), "ARTHUR"))
				{
					func_218(Local_30.f_168[1]);
					func_133(uParam0, 5);
					func_414(&(Local_30.f_2), 256);
					func_414(&(Local_30.f_2), 65536);
					func_414(&(Local_30.f_2), 131072);
					func_1301(&(Local_30.f_2), 4194304);
					func_1446();
					func_218(Local_30.f_168[11]);
				}
			}
			else
			{
				func_218(Local_30.f_168[1]);
				func_133(uParam0, 5);
				func_414(&(Local_30.f_2), 256);
			}
			func_1445();
			break;
		case 5:
			func_133(uParam0, 6);
			break;
		case 6:
			if (func_388(Local_30.f_2, 2048))
			{
				func_1301(&(Local_30.f_2), 4096);
				func_218(Local_30.f_168[1]);
				func_218(Local_30.f_168[0]);
				func_134(uParam0, 1);
				func_133(uParam0, 7);
			}
			break;
		case 7:
			if (func_388(Local_30.f_2, 64))
			{
				if (func_1423(uParam0))
				{
					return 1;
				}
			}
			break;
	}
	if (func_388(Local_30.f_2, 4194304))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	func_1447(uParam0);
	func_1424();
	return 0;
}

bool func_805(var uParam0)
{
	func_1426(1);
	if (does_entity_exist(Global_1392040->f_9))
	{
		uVar0 = Global_1392040->f_9;
		delete_entity(&uVar0);
	}
	if (func_1427())
	{
		func_1428(uParam0, 2046224123);
	}
	if (is_player_playing(player_id()))
	{
		_0xc67a4910425f11f1(player_id(), 0);
	}
	if (func_1329(5))
	{
		func_1413(uParam0, func_171(), 1);
	}
	func_177(Local_30.f_339);
	func_175();
	func_1251();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_806(var uParam0)
{
	func_1251();
	vVar0 = { 1515.868f, 1675.052f, 138.9941f };
	fVar3 = 248.8573f;
	vVar4 = { 1512.911f, 1683.521f, 140.3436f };
	fVar7 = -12.67f;
	vVar8 = { 1510.65f, 1683.116f, 139.0912f };
	fVar11 = 30.5257f;
	if (!is_ped_injured(Global_35))
	{
		if (func_1252(Global_35, 1536.307f, 1656.527f, 140.0207f, 1) > 10f)
		{
			func_903(Global_35, 1536.307f, 1656.527f, 140.0207f, 137.4707f, 2, 1073741824);
		}
	}
	iVar12 = 0;
	if (!func_894(uParam0, 5, Local_30.f_143[0], 0, vVar8.x, vVar8.y, vVar8.z, fVar11, 1, 0, 1, 0, 1, 0))
	{
		iVar12 = 1;
	}
	if (!is_ped_injured(func_171()))
	{
		if (func_1252(func_171(), vVar8, 1) > 10f)
		{
			func_903(Global_35, vVar8, fVar11, 2, 1073741824);
		}
	}
	if (!does_entity_exist(Local_30.f_143[0]->f_9))
	{
		Local_30.f_143[0]->f_9 = func_915(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar12 = 1;
	}
	if (!does_entity_exist(Local_30.f_158))
	{
		Local_30.f_158 = func_166(uParam0);
		func_903(Local_30.f_158, vVar0, fVar3, 2, 1073741824);
		iVar12 = 1;
	}
	if (!is_ped_injured(func_1254()))
	{
		func_903(func_1254(), vVar4, fVar7, 2, 1073741824);
		func_903(&(Local_30.f_143[0]), vVar8, fVar11, 2, 1073741824);
		if (!is_ped_injured(func_171()))
		{
		}
	}
	_text_database_request("RHUNT");
	if (!_text_database_has_loaded("RHUNT"))
	{
		iVar12 = 1;
	}
	if (iVar12 == 1)
	{
		return false;
	}
	if (!is_ped_injured(Global_35))
	{
		if (!is_ped_injured(Local_30.f_158))
		{
			freeze_entity_position(Local_30.f_158, false);
		}
	}
	remove_all_ped_weapons(func_171(), true, true);
	if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_ped_drops_weapons_when_dead(func_171(), false);
	}
	func_1310(uParam0, 4);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_807(var uParam0)
{
	func_903(Local_30.f_158, 1511.101f, 1677.369f, 139.0791f, 327.5209f, 2, 1073741824);
	func_1380(uParam0, "1-Start-MultiStart");
	func_1448(uParam0, 1);
	_0x5199405eabfbd7f0("MissionChoice");
	if (does_entity_exist(func_181()))
	{
		iVar0 = func_181();
		delete_entity(&iVar0);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_808(var uParam0)
{
	if (func_388(Local_30.f_2, 1024))
	{
		if (does_entity_exist(Local_30.f_253))
		{
			set_entity_visible(Local_30.f_253, true);
		}
	}
	StringCopy(&Local_790, "camera_treatments", 64);
	StringCopy(&(Local_790.f_8), "GENERIC_CME_PUSH_IN_TREATMENT_REQUEST", 64);
	_0x6a4d224fc7643941(&Local_790);
	func_312(1030791766, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	StringCopy(&Local_774, "camera_treatments", 64);
	StringCopy(&(Local_774.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	if (func_388(Local_30.f_2, 1))
	{
	}
	else if (func_388(Local_30.f_2, 2))
	{
	}
	_0x37d7bdba89f13959("MissionChoice");
	func_1357(func_171());
	if (func_173())
	{
		func_1449(uParam0);
	}
	else
	{
		func_1450(uParam0);
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_809(var uParam0)
{
	func_1451(uParam0);
	func_1452(uParam0);
	func_1453(uParam0);
	switch (func_1269(uParam0))
	{
		case 0:
			if (func_173())
			{
				func_1449(uParam0);
				func_133(uParam0, 1);
			}
			else if (func_1450(uParam0))
			{
				return 1;
			}
			break;
		case 1:
			bVar0 = true;
			if (bVar0)
			{
				if (func_1449(uParam0))
				{
					if (func_466(6))
					{
						if (!func_388(Local_30.f_2, 512))
						{
							if (func_467(6, 1, 0))
							{
								func_414(&(Local_30.f_2), 512);
							}
						}
					}
					func_1454();
					func_218(Local_30.f_168[1]);
					func_133(uParam0, 2);
				}
			}
			break;
		case 2:
			if (func_466(6))
			{
				if (!func_388(Local_30.f_2, 512))
				{
					if (func_467(6, 1, 0))
					{
						func_414(&(Local_30.f_2), 512);
					}
				}
			}
			func_1454();
			func_1455((*Global_1835011)[uParam0->f_607]->f_1);
			if (!is_ped_injured(func_171()))
			{
				if (!func_1403() && Local_30.f_1 > 1)
				{
					if (!is_waypoint_playback_going_on_for_ped(func_171(), 0))
					{
						return 1;
					}
					else
					{
						waypoint_playback_override_speed(func_171(), 1.5f, 0, -1082130432, 0);
						if (func_912(Local_30.f_168[1]) > 20f)
						{
							return 1;
						}
					}
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_810(var uParam0)
{
	if (func_1456(5, 0))
	{
		func_1457(5);
	}
	if (func_1458(5))
	{
		func_1459(5);
	}
	if (func_173())
	{
		if (func_466(6))
		{
			func_467(6, 0, 0);
		}
	}
	func_1454();
	iVar0 = get_game_timer();
	func_1460(1);
	if (func_173())
	{
		func_1461(iVar0 + 5000);
	}
	else
	{
		func_1461(iVar0 + 10000);
	}
	if (func_173())
	{
		func_172(uParam0, 5, func_171(), 0, 0, 1, 0);
	}
	else
	{
		func_172(uParam0, 5, func_171(), 0, 1, 1, 0);
	}
	func_1251();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_811(var uParam0)
{
	vVar0 = { -116.3872f, -33.3869f, 94.7574f };
	vVar4 = { -115.0463f, -19.3805f, 94.9124f };
	fVar7 = 65.3264f;
	if (!func_1280(uParam0, &(Local_30.f_158), vVar4, fVar7))
	{
		bVar3 = true;
	}
	if (func_1252(Global_35, vVar0, 1) > 100f)
	{
		func_903(Global_35, -116.3872f, -33.3869f, 94.7574f, 0f, 2, 1073741824);
	}
	if (bVar3)
	{
		return false;
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_812(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_813(var uParam0)
{
	func_57(uParam0, 0, 0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_814(var uParam0)
{
	switch (func_1269(uParam0))
	{
		case 0:
			return 1;
	}
	return 0;
}

bool func_815(var uParam0)
{
	func_319(620, 0);
	return uParam0->f_607 == uParam0->f_607;
}

void func_816(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_817(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_818(int iParam0)
{
	set_clock_time(func_690(iParam0), func_691(iParam0), func_692(iParam0));
	set_clock_date(func_689(iParam0), func_688(iParam0), func_687(iParam0));
}

char* func_819()
{
	return "cutDeleteMe";
}

int func_820(var uParam0, char* sParam1)
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

bool func_821(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_822(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_823(var uParam0)
{
	return uParam0->f_862;
}

void func_824(var uParam0)
{
	if (func_1462(&iVar0))
	{
		if (func_569(iVar0, 0))
		{
			if (func_593(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_621(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_569(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_825(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1463(-1);
	}
	func_1464(1);
	set_entity_invincible(Global_35, true);
	if (!func_822(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_822(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_822(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_822(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_822(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_822(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_822(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_822(*iParam0, 4) && !func_822(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_822(*iParam0, 2048))
	{
		func_837(0, 0);
	}
	if (func_822(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_822(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_822(*iParam0, 8192))
	{
		func_1465();
	}
	if (!func_822(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_822(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_822(*iParam0, 1024))
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
		if (!func_822(*iParam0, 16))
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
						if (func_1466() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_393(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1467(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1259(2);
						func_1258(-1);
						func_1468(vVar3);
						func_1470(func_1469());
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
	if (!func_822(*iParam0, 4096))
	{
		func_1471(Global_35);
	}
	if (!func_822(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_822(*iParam0, 2097152))
	{
		if (func_1472() || _0x50f124e6ef188b22(Global_35))
		{
			func_1473(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_826(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_827(var uParam0)
{
	if (func_821(uParam0, 2048) && !func_393(func_1474(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_821(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_903(iVar1, func_1474(uParam0), func_1475(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_821(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_903(iVar3, func_1474(uParam0), func_1475(uParam0), 2, 1073741824);
		}
	}
}

void func_828(var uParam0)
{
	if ((func_821(uParam0, 268435456) && !func_393(func_1474(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1474(uParam0) };
			func_903(iVar0, vVar1, func_1476(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_829(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_393(vParam1))
	{
		func_1477(uParam0, 2048, 1);
	}
	else
	{
		func_742(uParam0, 2048);
		if (bParam5)
		{
			func_742(uParam0, -2147483648);
		}
	}
}

void func_830(var uParam0)
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
					if (!func_1478(uParam0->f_13[iVar0], 8))
					{
						if (func_683(func_1106(iVar1, 0, 1, 0)))
						{
							if (!func_1479(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_683(func_1106(iVar1, 1, 1, 0)))
						{
							if (!func_1479(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_831(var uParam0, bool bParam1)
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

void func_832(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1203(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1480(iParam1, 29, bVar4, 1, 0);
			func_1480(iParam1, 31, bVar4, 1, 0);
			func_1480(iParam1, 30, bVar4, 1, 0);
			func_1480(iParam1, 22, bVar4, 1, 0);
			func_1480(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1143(32768) && func_1481(1108822547, 8)) && func_1482(10, iParam3))
	{
		func_1483(iParam1, 0, 1);
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
			iVar3 = func_1211(iVar1, 1);
			if (func_1481(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1482(iVar1, iParam3))
				{
				}
				else if ((func_1481(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1481(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1480(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1484(iVar3, 1, 6);
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
								func_1480(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1481(iVar3, 1))
							{
								func_1485(iVar3, 1, 6);
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

bool func_833(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1486((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_834(int iParam0)
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

int func_835(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_836(int iParam0, int iParam1)
{
	return func_1487(&uVar0, iParam0, iParam1);
}

void func_837(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_683(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1488(1);
	}
}

void func_838(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_839(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_840(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_841(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_842(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_843(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_844(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_845(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_846(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_847(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_848(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_849(var uParam0, int iParam1)
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

int func_850(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_860((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_851(var uParam0, int iParam1)
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

int func_852(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_873((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_853(var uParam0, char* sParam1)
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

int func_854(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_862((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_855(int iParam0, int iParam1)
{
	iVar0 = func_1489(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_856(var uParam0, char* sParam1, int iParam2)
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

int func_857(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_869((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_858(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_859(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_860(var uParam0)
{
	return *uParam0 != 0;
}

void func_861(var uParam0)
{
	if (!func_891(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_858(&(uParam0->f_1), 1);
	}
}

bool func_862(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_863(var uParam0)
{
	if (!func_891(uParam0->f_3, 1))
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
		func_858(&(uParam0->f_3), 1);
	}
}

bool func_864(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_865(var uParam0)
{
	if (!func_891(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_858(&(uParam0->f_1), 1);
	}
}

bool func_866(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_867(var uParam0)
{
	if (func_891(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_891(uParam0->f_1, 1))
	{
		func_1490(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_858(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_868(var uParam0)
{
	if (func_891(*uParam0, 2))
	{
		return true;
	}
	if (!func_891(*uParam0, 1))
	{
		func_1491(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_858(uParam0, 2);
		return true;
	}
	return false;
}

bool func_869(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_870(var uParam0)
{
	if (!func_891(uParam0->f_2, 1))
	{
		if (func_1492(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1493(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_298())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1062())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_858(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_871(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_872(var uParam0, int iParam1)
{
	if (!func_891(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_858(&(uParam0->f_1), 1);
	}
}

bool func_873(var uParam0)
{
	return *uParam0 != 0;
}

void func_874(var uParam0)
{
	if (!func_891(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_858(&(uParam0->f_2), 1);
	}
}

bool func_875(var uParam0)
{
	return *uParam0 != 0;
}

void func_876(var uParam0)
{
	if (!func_891(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_858(&(uParam0->f_3), 1);
	}
}

bool func_877(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_878(var uParam0)
{
	if (!func_891(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_858(&(uParam0->f_1), 1);
	}
}

bool func_879(var uParam0)
{
	return func_1494(*uParam0);
}

void func_880(var uParam0)
{
	if (!func_891(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_858(&(uParam0->f_1), 1);
	}
}

bool func_881(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_882(var uParam0)
{
	if (!func_891(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_858(&(uParam0->f_2), 1);
	}
}

bool func_883(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_884(var uParam0)
{
	if (!func_891(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_858(&(uParam0->f_1), 1);
	}
}

bool func_885(var uParam0, int iParam1, char* sParam2)
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

void func_886(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_738(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1495(uParam0, iParam1);
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
		iVar1 = func_820(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1496(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1497(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1498(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1499(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_887(int iParam0)
{
	if (!func_187(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_888(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_911(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1500(uParam0, 0))
			{
				if (func_1501(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1502(uParam0, 1, &iVar0))
					{
					}
					if (func_1503(uParam0, 3, &cVar2))
					{
					}
					if (func_1502(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1502(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1502(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1502(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1502(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1504(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_496((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_496(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_496(uParam0->f_1282[uParam0->f_2506], 1048576);
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
						if (!func_1504(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_496(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1500(uParam0, 12))
			{
				if (func_1502(uParam0, 13, &iVar0))
				{
				}
				if (func_1502(uParam0, 14, &iVar1))
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

void func_889(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_215((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_215((*uParam0)[iVar0], 1))
		{
			func_1505((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_890(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_860((*uParam0)[iVar1]))
		{
			if (func_855((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1506((*uParam0)[iVar1]))
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
		if (func_862((*uParam1)[iVar1]))
		{
			if (func_855((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1507((*uParam1)[iVar1]))
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
		if (func_864((*uParam2)[iVar1]))
		{
			if (func_855((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1508((*uParam2)[iVar1]))
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
		if (func_866((*uParam3)[iVar1]))
		{
			if (func_855((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_867((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_855(uParam4->f_1, iParam12))
	{
		if (!func_868(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_869((*uParam5)[iVar1]))
		{
			if (func_855((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1492((*uParam5)[iVar1]))
				{
					if (!func_892((*uParam5)[iVar1]))
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
		if (func_869((*uParam5)[iVar1]))
		{
			if (func_855((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1492((*uParam5)[iVar1]))
				{
					if (func_892((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_871((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1509((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_873((*uParam6)[iVar1]))
		{
			if (func_855((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1510((*uParam6)[iVar1]))
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
		if (func_875((*uParam7)[iVar1]))
		{
			if (func_855((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1511((*uParam7)[iVar1]))
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
		if (func_877((*uParam8)[iVar1]))
		{
			if (func_855((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1512((*uParam8)[iVar1]))
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
		if (func_879((*uParam9)[iVar1]))
		{
			if (func_855((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1513((*uParam9)[iVar1]))
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
		if (func_881((*uParam10)[iVar1]))
		{
			if (func_855((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1514((*uParam10)[iVar1]))
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
		if (func_883((*uParam11)[iVar1]))
		{
			if (func_855((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1515((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_891(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_892(var uParam0)
{
	if (func_891(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_891(uParam0->f_2, 1))
	{
		func_870(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_858(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_893(int iParam0)
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

bool func_894(var uParam0, int iParam1, var uParam2, bool bParam3, float fParam4, float fParam5, float fParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_451(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_170(iParam1)) && func_1516(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1517(iParam1, 1, 0, fParam4, fParam5, fParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1518(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1519(iParam1);
		return true;
	}
	return false;
}

bool func_895(var uParam0)
{
	if (!func_393(uParam0->f_5417))
	{
		return true;
	}
	switch (uParam0->f_607)
	{
		case 7:
			func_1520(uParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1520(uParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1520(uParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1520(uParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1520(uParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1520(uParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1520(uParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1520(uParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1520(uParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1520(uParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1520(uParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1520(uParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1520(uParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1520(uParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1520(uParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1520(uParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1520(uParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1520(uParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1520(uParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1520(uParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1520(uParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1520(uParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1520(uParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1520(uParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1520(uParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1520(uParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1520(uParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1520(uParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1520(uParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1520(uParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1520(uParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1520(uParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1520(uParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_393(uParam0->f_5417);
}

int func_896(int iParam0, var uParam1)
{
	uParam1->f_10 = func_261(uParam1->f_10);
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
		if (func_393(uParam1->f_6))
		{
		}
	}
	bVar0 = func_392();
	if (*uParam1)
	{
		if (bVar0 && !func_321((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1521(5))
			{
				func_518(5);
				func_1522(5);
				func_1258(0);
				func_1259(0);
			}
		}
	}
	if (func_1523(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_321((*Global_1835011)[37]->f_1, 1)) && !func_321((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_321((*Global_1835011)[43]->f_1, 1)) && !func_321((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_213(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_521(iVar1))
	{
		bVar3 = true;
		if (func_1524(iVar1))
		{
			bVar4 = true;
		}
		if (func_528(iVar1))
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
				func_529(uParam1->f_10);
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
			if (!func_1521(0) && func_1521(1))
			{
				func_1525(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1526())
			{
				func_1527();
			}
			func_1258(0);
			func_1259(0);
			func_1468(uParam1->f_6);
		}
	}
	if (!func_521(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1528(uParam1->f_10) == 0 || func_1529(uParam1->f_10) == 0) || func_1272(uParam1->f_10) == 0)
			{
				func_1530(uParam1->f_10);
			}
			func_1531(uParam1->f_10);
			func_1532(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_213(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_521(iVar1))
	{
		bVar3 = true;
		if (func_1524(iVar1))
		{
			bVar4 = true;
		}
		if (func_528(iVar1))
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
			if (!func_393(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1533(uParam1->f_10))
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
			Var8 = { func_1534(uParam1->f_10) };
			Var10 = { func_1535() };
			func_1536(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_514(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1537(uParam1->f_10);
		if (uParam1->f_2 && !func_393(uParam1->f_6))
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
	func_513(uParam1->f_10);
	if (func_514(uParam1->f_10))
	{
		iVar16 = func_257(uParam1->f_10);
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

bool func_897(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_898(int iParam0)
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

int func_899(var uParam0)
{
	return uParam0->f_8268;
}

bool func_900(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1538(iParam1))
	{
		return false;
	}
	iVar0 = func_1539(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_901(var uParam0, bool bParam1)
{
	if (!is_entity_dead(uParam0->f_5411))
	{
		if (!_0x88ad6cc10d8d35b2(uParam0->f_5411))
		{
			set_entity_as_mission_entity(uParam0->f_5411, true, true);
		}
		if ((bParam1 && !_0x3ab6c7b0bb0df4b1(uParam0->f_5411, -1)) && !func_120(uParam0, 32768))
		{
			clear_ped_tasks(uParam0->f_5411, 1, 0);
		}
		if (!func_20() == 0)
		{
			set_ped_relationship_group_hash(uParam0->f_5411, 1030835986);
		}
		else
		{
			set_ped_relationship_group_hash(uParam0->f_5411, get_ped_relationship_group_default_hash(player_ped_id()));
			set_entity_can_be_damaged(uParam0->f_5411, false);
		}
		if (get_ped_config_flag(uParam0->f_5411, 136, true))
		{
			set_ped_config_flag(uParam0->f_5411, 136, false);
		}
	}
}

float func_902(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_903(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1540(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1541(iParam0))
	{
		if (func_898(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_388(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_903(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_903(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_388(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_388(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_388(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_388(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_388(iParam5, 129))
	{
		if (func_388(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_388(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_388(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_388(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1541(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_388(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_388(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_904(int iParam0, int iParam1, int iParam2)
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

bool func_905(var uParam0, int iParam1)
{
	switch (func_1542(uParam0))
	{
		case 0:
			if (!func_1543(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1544(uParam0, 1);
			break;
		case 1:
			func_1545(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_825(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1544(uParam0, 2);
			break;
		case 2:
			if (func_1546(uParam0))
			{
				func_1547(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1544(uParam0, 3);
			}
			break;
		case 3:
			if (func_912(&(uParam0->f_3)) >= 1f)
			{
				func_1544(uParam0, 4);
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
			func_1548(&iVar1, 0);
			release_script_audio_bank();
			func_1544(uParam0, 0);
			return true;
	}
	return false;
}

void func_906(var uParam0)
{
	if (!func_120(uParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(uParam0->f_607)}, 8);
		func_1549(&uVar0, 15000, 0, 0, 0, 1);
		func_103(uParam0, 524288);
	}
}

bool func_907(var uParam0)
{
	iVar0 = func_35(uParam0);
	if (func_161(uParam0, func_33(uParam0)) <= 3)
	{
		iVar0 = func_33(uParam0);
	}
	Var1 = { func_1550(uParam0, iVar0) };
	if (func_1552(&(uParam0->f_10792), Var1, func_1551(&(uParam0->f_10792)), 0))
	{
		func_139(uParam0, func_33(uParam0), 262144);
		if (func_1553(&(uParam0->f_10792), 524288))
		{
			func_374(uParam0, 67108864);
			func_1554(&(uParam0->f_10792), 524288);
		}
		func_1555(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

void func_908(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 - (uParam0->f_5307 && iParam1));
}

bool func_909(var uParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(uParam0, 16777216))
	{
		func_1556(uParam0);
		func_1557(uParam0);
		return true;
	}
	if (func_1558(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (func_153(uParam0) == 0)
	{
		func_923(uParam0);
	}
	if (func_29())
	{
		if (!func_8(uParam0, 262144))
		{
			stop_gameplay_hint(true);
			render_script_cams(false, false, 3000, true, false, 0);
			if (does_cam_exist(uParam0->f_609.f_2))
			{
				destroy_cam(uParam0->f_609.f_2, false);
			}
			func_51(&(uParam0->f_10792));
			func_1559(uParam0);
			func_908(uParam0, 524288);
			func_1379(uParam0);
			func_148(uParam0, 30f);
			func_149(uParam0, 40f);
			func_99(uParam0, 262144);
		}
		if (!func_8(uParam0, 524288) && _0xef324e9550a394d5(uParam0->f_7375.f_804))
		{
			func_99(uParam0, 524288);
		}
	}
	return false;
}

bool func_910(var uParam0)
{
	iVar0 = 1;
	if (!func_1560(func_61(uParam0), func_120(uParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1561(func_61(uParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1562(func_61(uParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_421(uParam0, func_33(uParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_887(uParam0->f_607)}, 3);
	if (!func_23(&(uParam0->f_8269)))
	{
		if (!func_911(&(uParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_911(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1563(uParam0);
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

float func_912(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_498(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_541() - uParam0->f_1);
}

bool func_913()
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

void func_914(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

int func_915(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	if (!func_978(iParam0))
	{
		return 0;
	}
	iVar1 = func_1564(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iVar1) && _0xa0bc8faed8cfeb3c(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

void func_916()
{
	Local_30.f_49[0]->f_2 = { 1806.686f, 1274.257f, 193.2764f };
	Local_30.f_49[0]->f_5 = 139.3766f;
	*Local_30.f_49[0]->f_6[0] = { 1739.738f, 1244.49f, 183.4818f };
	*Local_30.f_49[0]->f_6[1] = { 1716.765f, 1259.427f, 174.6067f };
	Local_30.f_49[1]->f_2 = { 1809.315f, 1273.836f, 193.6935f };
	Local_30.f_49[1]->f_5 = 196.3425f;
	*Local_30.f_49[1]->f_6[0] = { 1745.062f, 1241.281f, 185.2131f };
	*Local_30.f_49[1]->f_6[1] = { 1709.541f, 1257.189f, 173.8014f };
	Local_30.f_49[2]->f_2 = { 1807.911f, 1270.057f, 193.2203f };
	Local_30.f_49[2]->f_5 = 47.7071f;
	*Local_30.f_49[2]->f_6[0] = { 1741.23f, 1247.613f, 183.7731f };
	*Local_30.f_49[2]->f_6[1] = { 1715.766f, 1262.115f, 174.0825f };
}

int func_917(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
			if (func_1565(uParam0))
			{
				if (!is_ped_injured(func_171()))
				{
					func_903(func_171(), -111.0453f, -16.1835f, 94.8673f, 51.1604f, 2, 1073741824);
				}
				if (!is_ped_injured(func_1254()))
				{
					_set_ped_outfit_preset(func_1254(), 0, 0);
					func_1566(func_1254(), 0);
					_update_ped_variation(func_1254(), false, true, true, true, false);
				}
				func_177(&(Local_30.f_254[14]));
				func_1260(uParam0);
			}
			if (is_screen_faded_out())
			{
				if (!func_388(Local_30.f_2, 64))
				{
					func_177(&(Local_30.f_254[14]));
					vVar0 = { -115.0601f, -18.4425f, 95.9251f };
					fVar3 = 73.69f;
					func_903(func_166(uParam0), vVar0, fVar3, 34, 1073741824);
					func_414(&(Local_30.f_2), 64);
				}
				func_1260(uParam0);
			}
			if (!func_388(Local_30.f_2, 4096))
			{
				if (!is_ped_injured(func_171()))
				{
					func_414(&(Local_30.f_2), 4096);
					if (has_ped_got_weapon(func_171(), -506285289, 0, false))
					{
						remove_weapon_from_ped(func_171(), -506285289, true, -142743235);
					}
				}
			}
			if ((get_frame_count() % 10) == 0)
			{
				if (!_does_volume_exist(&(Local_30.f_254[14])))
				{
					Local_30.f_254[14] = _create_volume_sphere(-111.4327f, -20.53263f, 94.7981f, 0f, 0f, 0f, 10f, 10f, 10f);
				}
				func_1255(uParam0, &(Local_30.f_254[14]));
			}
			break;
		case 2:
			if (!func_388(Local_30.f_2, 8))
			{
				if (_get_anim_scene_time(uParam0->f_7375.f_804) > 2f)
				{
					func_1303();
					func_414(&(Local_30.f_2), 8);
				}
			}
			if (!func_388(Local_30.f_2, 4))
			{
				set_entity_visible(func_171(), false);
				set_entity_visible(func_1254(), false);
				func_414(&(Local_30.f_2), 4);
			}
			if (_0xb89fcff19dafff28(uParam0->f_7375.f_804, "ARTHUR"))
			{
				if (!is_ped_injured(Local_30.f_158))
				{
					func_903(Local_30.f_158, -368.3582f, 787.498f, 115.1617f, 99.9355f, 2, 1073741824);
					if (!is_ped_injured(Global_35))
					{
						func_1281(Global_35, Local_30.f_158, 1, -1, 1);
					}
				}
			}
			if (func_1565(uParam0))
			{
				if (does_entity_exist(Local_30.f_164))
				{
					func_903(Local_30.f_164, -369.4892f, 792.4187f, 115.1454f, -176.78f, 2, 1073741824);
				}
			}
			set_all_random_peds_flee_this_frame(player_id());
			break;
		case 3:
			if (!func_388(Local_30.f_2, 32))
			{
				func_414(&(Local_30.f_2), 32);
				func_218(&(Local_30.f_143[0]->f_4));
			}
			if (!func_388(Local_30.f_2, 64))
			{
				if (((func_26(&(Local_30.f_143[0]->f_4)) && func_912(&(Local_30.f_143[0]->f_4)) >= 15f) || func_1565(uParam0)) || is_screen_faded_out())
				{
					if (!is_ped_injured(func_1254()))
					{
						set_entity_visible(func_171(), true);
						set_entity_visible(func_1254(), true);
						func_903(func_1254(), -339.5152f, 790.2858f, 115.1451f, 96.9203f, 2, 1073741824);
						if (!is_ped_injured(func_171()))
						{
							clear_ped_tasks_immediately(func_171(), false, true);
							func_1281(func_171(), func_1254(), 0, -1, 1);
						}
						func_1567();
						func_414(&(Local_30.f_2), 64);
					}
					func_1568(-354.2803f, 786.9348f, 115.0787f, 100f, 0, 0, 0, 0, 0);
				}
			}
			if (func_388(Local_30.f_2, 64))
			{
				if (func_912(&(Local_30.f_143[0]->f_4)) >= 47f || func_1565(uParam0))
				{
					func_1567();
					if (!is_ped_injured(func_171()))
					{
						task_follow_nav_mesh_to_coord(func_171(), -351.8194f, 788.3896f, 115.1231f, 1f, -1, 0.25f, 1, 36.9727f);
					}
					func_218(&(Local_30.f_143[0]->f_4));
					func_414(&(Local_30.f_2), 128);
				}
			}
			if (func_1569(uParam0, Local_30.f_163, "RCSP_HUNTING1_MALES_01^1", 0, 1, 1))
			{
				if (!is_ped_injured(Local_30.f_163))
				{
					task_follow_nav_mesh_to_coord(Local_30.f_163, -375.4931f, 789.1668f, 115.1601f, 1f, -1, 0.25f, 0, 349.7689f);
				}
			}
			if (func_1565(uParam0))
			{
				func_1274(Local_30.f_158, 0f, 0);
			}
			break;
		case 5:
			if (!_does_scenario_point_exist(Local_30.f_312))
			{
				Local_30.f_312 = _find_closest_active_scenario_point_of_type(1774.519f, 1256.189f, 189.8569f, 889554021, 1.5f, 0, false);
				_request_scenario_type(889554021, 15, 0, 0);
			}
			if (_0x005e6f28dd7ed58d(uParam0->f_7375.f_804, "ARTHUR"))
			{
				set_anim_scene_entity(&(Local_30.f_13[6]), "p_can10x", Local_30.f_239, 0);
				set_anim_scene_entity(&(Local_30.f_13[6]), "ARTHUR", Global_35, 0);
				if (_has_scenario_type_loaded(889554021, false))
				{
				}
				Local_30.f_137 = 1;
				if (!_does_scenario_point_exist(Local_30.f_312))
				{
					return 0;
				}
				if (_does_scenario_point_exist(Local_30.f_312))
				{
					_task_use_scenario_point(Global_35, Local_30.f_312, "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1", 0, false, true, 0, false, -1f, false);
				}
				if (does_entity_exist(&(Global_43619[2])))
				{
					set_entity_coords(&(Global_43619[2]), 1774.144f, 1256.474f, 189.58f, true, false, true, true);
					set_entity_heading(&(Global_43619[2]), 57.02f);
				}
			}
			if (func_1565(uParam0))
			{
				func_1356();
			}
			break;
		case 8:
			if (!func_388(Local_30.f_2, 512) && !func_388(Local_30.f_2, 1024))
			{
				if (!func_1570(&(Local_30.f_531)))
				{
					if ((_does_anim_scene_exist(uParam0->f_7375.f_804) && _is_anim_scene_started(uParam0->f_7375.f_804, false)) && _0x8d81e7824b7753f7(uParam0->f_7375.f_804, "RCHNT1_MCS3_p1_T02_Shot_2", 1))
					{
						func_1571(&(Local_30.f_531), "RH1_CHOICE_TRAIL", "RH1_CHOICE_BAIT", 0, 1, 0, 1, -1, -1);
					}
				}
				else
				{
					if (_get_anim_scene_time(uParam0->f_7375.f_804) > 27.6f)
					{
						if (!get_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff"))
						{
							set_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff", true, false);
						}
					}
					if (func_1572(&(Local_30.f_531)))
					{
						if (func_1573(&(Local_30.f_531)))
						{
							if (_0x8d81e7824b7753f7(uParam0->f_7375.f_804, "RCHNT1_MCS3_p1_T02_Shot_2", 1))
							{
								set_anim_scene_bool(uParam0->f_7375.f_804, "Bait_bool", false, false);
								set_anim_scene_bool(uParam0->f_7375.f_804, "loop_bool", true, false);
							}
							else
							{
								if (get_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff"))
								{
									set_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff", false, false);
								}
								func_414(&(Local_30.f_2), 1024);
								func_1574(&(Local_30.f_531));
							}
						}
						else if (func_1575(&(Local_30.f_531)))
						{
							if (_0x8d81e7824b7753f7(uParam0->f_7375.f_804, "RCHNT1_MCS3_p1_T02_Shot_2", 1))
							{
								set_anim_scene_bool(uParam0->f_7375.f_804, "Bait_bool", true, false);
								set_anim_scene_bool(uParam0->f_7375.f_804, "loop_bool", true, false);
							}
							else
							{
								if (get_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff"))
								{
									set_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff", false, false);
								}
								func_414(&(Local_30.f_2), 512);
								func_1574(&(Local_30.f_531));
							}
						}
					}
				}
			}
			if (func_1576(uParam0, Global_35, "ARTHUR", 0, 1, 1))
			{
				if (func_388(Local_30.f_2, 1024))
				{
					simulate_player_input_gait(player_id(), 1f, 2000, 0f, true, false);
				}
			}
			if (func_1576(uParam0, Global_35, "HoseaMatthews", 0, 1, 1))
			{
				if (func_1458(5))
				{
					func_1459(5);
				}
				if (func_388(Local_30.f_2, 1024))
				{
					func_1577(0);
					if (func_1578(func_171()))
					{
						task_dismount_animal(0, 0, 0, 0, 0, 0);
					}
					task_follow_nav_mesh_to_coord(0, 1484.106f, 1706.582f, 143.5336f, 1f, -1, 0.25f, 0, 24.4122f);
					func_1579(0);
				}
				else
				{
					func_1577(0);
					if (func_1578(func_171()))
					{
						task_dismount_animal(0, 0, 0, 0, 0, 0);
					}
					task_follow_nav_mesh_to_coord(0, 1503.132f, 1693.436f, 139.504f, 1f, -1, 0.25f, 0, 40000f);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					task_follow_nav_mesh_to_coord(0, 1550.435f, 1577.504f, 146.6849f, 1f, -1, 0.25f, 0, 342.6649f);
					func_1579(0);
				}
			}
			break;
		case 9:
			bVar4 = false;
			if (func_1565(uParam0))
			{
				if (bVar4)
				{
					func_903(Global_35, 1517.1f, 1681.509f, 139.5005f, 61.4355f, 2, 1073741824);
					func_903(func_181(), 1502.87f, 1688.9f, 140.217f, -114.4303f, 2, 1073741824);
					func_1580();
				}
				else
				{
					func_903(Global_35, 1506.701f, 1686.014f, 139.3098f, 71.4571f, 2, 1073741824);
				}
			}
			if (_0xb89fcff19dafff28(uParam0->f_7375.f_804, "A_C_BEAR_01"))
			{
				func_903(func_181(), 1494.083f, 1693.659f, 140.1528f, 238.7895f, 2, 1073741824);
				force_ped_motion_state(func_181(), -530524, false, 0, false);
				if (!Local_30.f_140)
				{
					Local_30.f_140 = 1;
					if (!is_ped_injured(Global_35))
					{
						set_ped_reset_flag(Global_35, 134, false);
					}
					open_sequence_task(&(Local_30.f_336));
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(Local_30.f_336);
					task_perform_sequence(func_181(), Local_30.f_336);
					clear_sequence_task(&(Local_30.f_336));
				}
			}
			if (func_1576(uParam0, func_181(), "A_C_BEAR_01", 0, 1, 1))
			{
				if (!bVar4)
				{
				}
			}
			break;
		case 11:
			if (func_1565(uParam0))
			{
				if (!is_ped_injured(Local_30.f_158))
				{
					func_903(Local_30.f_158, 1509.756f, 1676.992f, 139.3209f, 238.6238f, 2, 1073741824);
				}
				func_1281(func_171(), func_1254(), 0, -1, 1);
			}
			break;
		case 12:
			if (!func_388(Local_30.f_2, 64))
			{
				func_414(&(Local_30.f_2), 64);
				_0x1b3c2d961f5fc0e1("script@Cinematics@TripSkip@Horseshoe_Overlook");
				prefetch_srl("script@tripskip@hntn_1_srl");
				_0xef1a8a484118735e();
				_0xae00387e53b1e9fc();
			}
			if (!func_388(Local_30.f_2, 1) && !func_388(Local_30.f_2, 2))
			{
				if (!func_1570(&(Local_30.f_531)))
				{
					if ((_does_anim_scene_exist(uParam0->f_7375.f_804) && _is_anim_scene_started(uParam0->f_7375.f_804, false)) && _0x8d81e7824b7753f7(uParam0->f_7375.f_804, "RCHNT1_EXT_P1_T04_SHOT_4", 1))
					{
						func_1571(&(Local_30.f_531), "RH1_CHOICE_STAY", "RH1_CHOICE_CAMP", 0, 1, 0, 1, -1, -1);
					}
				}
				else
				{
					if (!get_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff"))
					{
						if (_get_anim_scene_progress(uParam0->f_7375.f_804) > 0.99f)
						{
							set_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff", true, false);
						}
					}
					if (func_1572(&(Local_30.f_531)))
					{
						if (func_1573(&(Local_30.f_531)))
						{
							if (_0x8d81e7824b7753f7(uParam0->f_7375.f_804, "RCHNT1_EXT_P1_T04_SHOT_4", 1))
							{
								set_anim_scene_bool(uParam0->f_7375.f_804, "Go_is", false, false);
								set_anim_scene_bool(uParam0->f_7375.f_804, "loop", true, false);
							}
							else
							{
								Local_30.f_138 = 1;
								if (func_388(Local_30.f_2, 64))
								{
									end_srl();
								}
								func_414(&(Local_30.f_2), 1);
								if (get_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff"))
								{
									set_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff", false, false);
								}
								func_1574(&(Local_30.f_531));
							}
						}
						else if (func_1575(&(Local_30.f_531)))
						{
							if (_0x8d81e7824b7753f7(uParam0->f_7375.f_804, "RCHNT1_EXT_P1_T04_SHOT_4", 1))
							{
								set_anim_scene_bool(uParam0->f_7375.f_804, "Go_is", true, false);
								set_anim_scene_bool(uParam0->f_7375.f_804, "loop", true, false);
							}
							else
							{
								func_414(&(Local_30.f_2), 2);
								if (get_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff"))
								{
									set_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff", false, false);
								}
								func_1574(&(Local_30.f_531));
							}
						}
					}
				}
			}
			if (func_1565(uParam0))
			{
				if (func_388(Local_30.f_2, 2))
				{
					func_1449(uParam0);
				}
			}
			if (func_388(Local_30.f_2, 1))
			{
				if (func_1576(uParam0, func_171(), "HoseaMatthews", 0, 1, 1))
				{
					func_1450(uParam0);
				}
			}
			if (!func_388(Local_30.f_2, 1024))
			{
				if (func_1581())
				{
					func_414(&(Local_30.f_2), 1024);
				}
			}
			break;
	}
	return 1;
}

void func_918(var uParam0, int iParam1)
{
	uParam0->f_8266 = iParam1;
	func_103(uParam0, 1024);
}

void func_919(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1582(iParam0, iParam1, bParam2, fParam3);
}

void func_920(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_921()
{
	Local_30.f_37 = 0;
}

void func_922(var uParam0)
{
	_0xf45e46deecf7df6e(992, 0, 0, -1, -1);
	func_1583(uParam0);
	func_1584(uParam0);
}

void func_923(var uParam0)
{
	if (!func_23(&(uParam0->f_8269)))
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 268435456))
	{
		return;
	}
	func_1585(uParam0);
}

void func_924(var uParam0)
{
	if (!func_8(uParam0, 8388608))
	{
		if (func_161(uParam0, func_33(uParam0)) == 5 || func_161(uParam0, func_33(uParam0)) == 6)
		{
			if (!func_211())
			{
				if (func_912(&(uParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_218(&(uParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_925(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 8388608))
	{
		if (func_1586(uParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1587();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1588(uParam0, func_33(uParam0), 8388608);
		}
	}
}

void func_926(var uParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_8(uParam0, 256))
	{
		return;
	}
	if (!func_8(uParam0, 1048576))
	{
		if (func_236() || func_54())
		{
			func_99(uParam0, 1048576);
		}
	}
	else if (!func_236() && !func_54())
	{
		func_908(uParam0, 1048576);
	}
	if (!func_8(uParam0, 134217728))
	{
		if ((func_8(uParam0, 1048576) && !func_121(uParam0, func_33(uParam0), 524288)) && !func_121(uParam0, func_33(uParam0), 1))
		{
			if (!Global_1935630->f_12)
			{
				_0xb832f1a686b9b810(Global_35, true, 0);
				func_99(uParam0, 134217728);
			}
		}
	}
	else if ((!func_8(uParam0, 1048576) || func_121(uParam0, func_33(uParam0), 524288)) || func_121(uParam0, func_33(uParam0), 1))
	{
		if (!Global_1935630->f_12)
		{
			_0xb832f1a686b9b810(Global_35, false, 0);
			func_908(uParam0, 134217728);
		}
	}
}

void func_927(var uParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_121(uParam0, func_33(uParam0), 1) && !func_121(uParam0, func_33(uParam0), 1048576))
	{
		set_ped_reset_flag(Global_35, 175, true);
	}
}

void func_928(var uParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 2097152))
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
}

void func_929(var uParam0)
{
}

int func_930(var uParam0)
{
	if ((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_252(uParam0->f_5423[iVar0]))
		{
			func_1589(uParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_931(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_131(iParam1);
	if (!func_1590(iVar0))
	{
		return false;
	}
	iVar1 = func_1591(iParam2);
	if (!func_1592(iVar1))
	{
		return false;
	}
	if (!func_1593(uParam0, iParam1, iParam2))
	{
		return true;
	}
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_1[iVar0][iVar1]);
	if (StackVal)
	{
		return true;
	}
	return false;
}

int func_932(var uParam0, int iParam1)
{
	return uParam0->f_1[func_131(iParam1)]->f_21;
}

int func_933(var uParam0, int iParam1)
{
	return 1;
}

void func_934(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_218(&(uParam0->f_603));
	}
}

void func_935(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_131(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_936(var uParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(uParam0->f_13109)))
	{
		func_27(&(uParam0->f_13109), 0);
	}
	else if (func_912(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_253(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_254(uParam0->f_5421))
		{
			iVar2 = func_255(uParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1594(uParam0->f_5421, iVar1);
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
	return iVar0;
}

float func_937(var uParam0)
{
	return func_912(&(uParam0->f_603));
}

bool func_938(var uParam0)
{
	if ((func_120(uParam0, 4) || func_120(uParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_939(var uParam0, int iParam1, int iParam2)
{
	if (func_8(uParam0, -2147483648))
	{
		return true;
	}
	if (func_931(uParam0, iParam1, 4))
	{
		if (func_33(uParam0) != 25 && func_33(uParam0) != 26)
		{
			if (!func_8(uParam0, 512) && !func_120(uParam0, 4))
			{
				func_36(uParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				*Global_1347394 = { Var0 };
				Global_1347394->f_3 = Var0.f_3;
				Global_1572864->f_10 = func_131(iParam2);
			}
		}
		func_1595(uParam0);
		if (func_1596(uParam0))
		{
			func_1597(uParam0);
		}
		if (func_121(uParam0, func_33(uParam0), 33554432) && func_8(uParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_908(uParam0, 524288);
		func_1598(&(uParam0->f_7375), 4);
		if (func_1586(uParam0))
		{
			func_139(uParam0, func_33(uParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1587();
		}
		return true;
	}
	return false;
}

void func_940(var uParam0)
{
	func_1599(uParam0);
	if (func_121(uParam0, func_33(uParam0), 2))
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

bool func_941(var uParam0, int iParam1)
{
	if (func_120(uParam0, 16384))
	{
		if (func_907(uParam0))
		{
			func_51(&(uParam0->f_10792));
			func_908(uParam0, 2097152);
			func_260(uParam0, 16384);
			func_103(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(uParam0, 4))
	{
		func_933(uParam0, iParam1);
		func_99(uParam0, 4);
	}
	Var0 = { func_1550(uParam0, iParam1) };
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		if (func_8(uParam0, 2097152))
		{
			if (func_907(uParam0))
			{
				func_908(uParam0, 2097152);
				func_909(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_909(uParam0, Var0);
		}
	}
	else if (func_8(uParam0, 2097152))
	{
		if (func_907(uParam0))
		{
			func_908(uParam0, 2097152);
			func_1557(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		return func_909(uParam0, Var0);
	}
	return true;
}

bool func_942(var uParam0)
{
	return func_1600(&(uParam0->f_7375));
}

void func_943(var uParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1601(uParam0))
		{
			func_432(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1602(uParam0, cVar0);
			func_159(uParam0, 2);
		}
	}
}

int func_944(var uParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(uParam0, func_33(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (func_252(uParam0->f_5423[iVar1]))
		{
			if (func_1603(uParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1604(uParam0, uParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_945(var uParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1605(uParam0))
		{
			func_432(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1602(uParam0, cVar0);
			func_159(uParam0, 2);
		}
	}
}

void func_946(var uParam0)
{
	switch (func_1606(&iVar0))
	{
		case 1:
			func_1607(uParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(uParam0->f_13178))
			{
				uParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_188(iVar0) && iVar0 == func_12(uParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(uParam0->f_13178, bVar9);
			break;
	}
}

bool func_947(var uParam0, int iParam1)
{
	if (func_8(uParam0, 4194304))
	{
		return false;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return false;
	}
	return true;
}

int func_948(var uParam0, int iParam1)
{
	if (func_8(uParam0, 16777216))
	{
		func_1556(uParam0);
		func_908(uParam0, 65536);
		return 0;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1550(uParam0, iParam1) };
	if (func_1608(uParam0, &Var0))
	{
		if (!func_8(uParam0, 65536))
		{
			func_99(uParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_949(var uParam0, int iParam1)
{
	func_1609(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, func_223(uParam0, iParam1));
}

void func_950(var uParam0, int iParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 67108864))
	{
		if (does_blip_exist(uParam0->f_5303))
		{
			remove_blip(&(uParam0->f_5303));
		}
		uParam0->f_7374 = 0;
		func_935(uParam0, iParam1, 2);
		func_133(uParam0, 0);
		func_134(uParam0, 0);
		func_99(uParam0, 8);
		func_908(uParam0, -2147483648);
		func_139(uParam0, func_33(uParam0), 67108864);
		func_908(uParam0, 4);
		func_908(uParam0, 8192);
		func_908(uParam0, 536870912);
		func_260(uParam0, 4);
		func_65(0);
		func_64(0);
		func_908(uParam0, 2);
		func_45();
		uParam0->f_5302 = 0;
		func_1610(uParam0);
		if ((func_35(uParam0) == 25 || func_35(uParam0) == 26) && func_82(32768))
		{
			func_374(uParam0, 524288);
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
				func_1611(1, 1);
			}
		}
	}
}

void func_951(bool bParam0)
{
	if (!func_195(0, 0, 1) || bParam0)
	{
		iVar0 = func_1060();
		iVar1 = func_1063(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1612(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1612(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

bool func_952(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1613(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
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

var func_953(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1614(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1615(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1614(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_954(var uParam0)
{
	return true;
}

bool func_955(var uParam0)
{
	return true;
}

int func_956(var uParam0)
{
	return 1;
}

void func_957(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0] = iParam1;
		return;
	}
	Global_42606[iParam0] = iParam1;
	return;
}

void func_958(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_1 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_1 = iParam1;
	return;
}

void func_959(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_2 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_2 = iParam1;
	return;
}

bool func_960(int iParam0)
{
	if (!func_445(iParam0))
	{
		return false;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return false;
	}
	iVar0 = func_434(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return true;
	}
	return false;
}

bool func_961(int iParam0, int iParam1)
{
	if (!func_445(iParam0))
	{
		return false;
	}
	return (Global_20710.f_2246[iParam0] && iParam1) != 0;
}

void func_962(int iParam0, int iParam1)
{
	if (!func_445(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (Global_20710.f_2246[iParam0] || iParam1);
	}
}

void func_963(int iParam0, int iParam1)
{
	if (!func_445(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (&Global_20710.f_2246[iParam0] - (Global_20710.f_2246[iParam0] && iParam1));
	}
}

bool func_964()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

void func_965(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

int func_966(int iParam0)
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

void func_967(int iParam0)
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

void func_968()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_969(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_970();
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
	if (func_1616(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_970()
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
		iVar3 = func_1617(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

bool func_971(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_972(int iParam0, int iParam1)
{
	if (!func_971(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

void func_973(int iParam0, int iParam1)
{
	if (!func_971(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_974(int iParam0, int iParam1)
{
	if (!func_971(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

bool func_975(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_252(uParam0->f_5423[iVar0]))
		{
			if (&uParam0->f_5423[iVar0] == iParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_976(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (((func_252(uParam0->f_5423[iVar0]) && is_entity_an_object(&(uParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(uParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(uParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_977(int iParam0, int iParam1, bool bParam2)
{
	if (!func_978(iParam0))
	{
		return;
	}
	func_1618(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_978(int iParam0)
{
	return iParam0 > -1;
}

bool func_979(int iParam0, int iParam1)
{
	return (*iParam0 && iParam1) != 0;
}

void func_980(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_978(iParam0))
		{
			return;
		}
	}
	func_1619(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_981(int iParam0)
{
	func_980(iParam0, 36, 1);
}

void func_982(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_978(iParam0))
		{
			return;
		}
	}
	func_1619(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_983(int iParam0, int iParam1)
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
	if (func_388(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_388(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_388(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_984(int iParam0, bool bParam1)
{
	if (!func_451(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1620(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_985(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_978(iParam0))
		{
			return false;
		}
	}
	func_1619(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_986(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_451(iParam0))
	{
		iVar1 = func_543(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1621(iParam0);
		}
	}
	if (func_985(iParam0, 5, 1))
	{
		set_ped_config_flag(func_543(iParam0), 137, true);
	}
}

void func_987(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_978(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_982(iParam0, 50, 1);
		func_982(iParam0, 48, 1);
		func_982(iParam0, 49, 1);
		func_982(iParam0, 51, 1);
		func_982(iParam0, 52, 1);
		func_982(iParam0, 54, 1);
		func_982(iParam0, 55, 1);
	}
	else
	{
		func_980(iParam0, 50, 1);
		func_980(iParam0, 48, 1);
		func_980(iParam0, 49, 1);
		func_980(iParam0, 51, 1);
		if (bParam3)
		{
			func_980(iParam0, 54, 1);
		}
		else
		{
			func_982(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_980(iParam0, 52, 1);
			if (bParam3)
			{
				func_980(iParam0, 55, 1);
			}
		}
		else
		{
			func_982(iParam0, 52, 1);
			if (!bParam3)
			{
				func_982(iParam0, 55, 1);
			}
		}
	}
}

void func_988(int iParam0, bool bParam1)
{
	if (!func_978(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_543(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_543(iParam0), 204, false);
	}
}

void func_989(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_451(iParam0))
	{
		return;
	}
	if (func_452(iParam0))
	{
		if (!func_170(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_985(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_984(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_543(iParam0);
	if (((does_entity_exist(iVar1) && func_1622(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_980(iParam0, 2, 1);
	}
	else
	{
		func_1623(iParam0);
		func_980(iParam0, 1, 1);
	}
}

void func_990(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_451(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_991(int iParam0)
{
	if (!func_451(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_992(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_978(iParam1))
	{
		return;
	}
	iVar0 = func_991(iParam1);
	if (func_1624(iParam1))
	{
		if (!func_1625(iParam1))
		{
			return;
		}
	}
	func_982(iParam1, 39, 1);
	func_1626(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1626(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1626(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_980(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1627(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_993(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_295((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			if (func_321((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_295((*Global_1347702)[iParam0]->f_12, 256))
		{
			if (!func_321((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_1628(iParam0);
}

bool func_994(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_995(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_996(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_268(iParam0))
	{
		return false;
	}
	return func_190((*Global_1347702)[iParam0]->f_15);
}

int func_997(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_1629(iParam0))
	{
		return -1;
	}
	if (func_20() != -1)
	{
		iVar2 = func_1009(iParam0);
		if (iVar2 >= 0)
		{
			func_1630(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_1631(iVar1, 1);
			func_1630(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_1009(iParam0);
		if (iVar2 >= 0)
		{
			func_1630(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_188(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_1631(iVar0, 1);
					func_1630(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

bool func_998(int iParam0)
{
	return func_290(iParam0) == 2;
}

void func_999(int iParam0)
{
	func_1632(iParam0);
}

bool func_1000(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_44 != -1)
	{
		if ((*Global_1347702)[iParam0]->f_44 != 0)
		{
			if (!func_1633((*Global_1347702)[iParam0]->f_44))
			{
				return false;
			}
		}
	}
	return true;
}

void func_1001(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1002(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_451(&((*Global_1347702)[iParam0]->f_29[iVar1])))
			{
				func_1635(&iVar0, func_1634(&((*Global_1347702)[iParam0]->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_995(&((*Global_1347702)[iParam0]->f_13), 2);
		}
		else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
		{
			if (func_1637(iVar0, (*Global_1347702)[iParam0]->f_15, 1, (*Global_1347702)[iParam0]->f_27, func_1636()))
			{
				func_995(&((*Global_1347702)[iParam0]->f_13), 2);
			}
		}
		else
		{
			func_995(&((*Global_1347702)[iParam0]->f_13), 2);
		}
	}
}

void func_1003(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_268(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_1638(iParam0);
	}
	if (func_994((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_1004(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	if (func_295((*Global_1347702)[iParam0]->f_12, 1024))
	{
		func_1639(&((*Global_1347702)[iParam0]->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_1640(iParam0, 0);
	}
	func_1641(iParam0);
	if (iParam3 == 1)
	{
		if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
		{
			force_cleanup_for_thread_with_this_id((*Global_1347702)[iParam0]->f_42, iParam4);
		}
		else
		{
			(*Global_1347702)[iParam0]->f_43 = 0;
		}
	}
}

void func_1004(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1005(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_188(iParam0))
	{
		return;
	}
	if (func_190(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	iVar0 = func_1009(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*(*Global_1898346)[iVar1] = { *((*Global_1898346)[(&Global_1898329 - 1)]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1)]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*(*Global_1898346)[iVar1] = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_1006(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			func_1004(&((*Global_1347702)[iParam0]->f_13), 2);
			_0x748c5f51a18cb8f0(0);
			func_1003(iParam0, 1, 1, iParam1, 32);
			_0x748c5f51a18cb8f0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_268(&(Global_40.f_450[iVar1])))
				{
					Global_40.f_450[iVar0] = &Global_40.f_450[iVar1];
					Global_40.f_450[iVar1] = -1;
				}
			}
			else
			{
				Global_40.f_450[iVar0] = -1;
			}
			Global_40.f_1094 = (Global_40.f_1094 - 1);
			return;
		}
		iVar0++;
	}
}

bool func_1007(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

Vector3 func_1008(int iParam0)
{
	if (!func_268(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1642(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

int func_1009(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1010(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_1643(iParam0))
	{
		return 0;
	}
	if ((func_321((*Global_1347702)[59]->f_15, 1) && !func_321((*Global_1347702)[61]->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_1644(player_id(), 1, 0))
	{
		if ((!does_blip_exist((*Global_1835011)[iParam0]->f_27) && !func_1645(iParam0)) && !Global_43891)
		{
			func_1647(iParam0, vdist2(func_1646(iParam0), Global_36), -1, 1, 1);
			func_1648((*Global_1835011)[iParam0], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_1637(func_1649(iParam0), func_12(iParam0), 0, (*Global_1835011)[iParam0]->f_21, iParam3))
		{
			return 0;
		}
		if (func_462(1) > 1)
		{
			if ((*Global_1835011)[iParam0]->f_73 <= 0)
			{
				(*Global_1835011)[iParam0]->f_73 = get_game_timer();
			}
			if ((get_game_timer() - (*Global_1835011)[iParam0]->f_73) < 60000)
			{
				if (func_1650(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_1651(Global_35, func_125(iParam0), 50f, 1, 1))
				{
					if (!_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
					{
						(*Global_1835011)[iParam0]->f_72 = create_tracked_point();
						set_tracked_point_info((*Global_1835011)[iParam0]->f_72, func_125(iParam0), 5f);
					}
					if (is_screen_faded_in() && (is_tracked_point_visible((*Global_1835011)[iParam0]->f_72) || is_sphere_visible(func_125(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_997((*Global_1835011)[iParam0]->f_1);
	if (!func_1011(iVar0))
	{
		return 0;
	}
	else if ((*Global_1835011)[iParam0]->f_73 != 0)
	{
		(*Global_1835011)[iParam0]->f_73 = 0;
		func_1652(iParam0);
		if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
		{
			destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
		}
	}
	if (bParam1)
	{
		func_999((*Global_1835011)[iParam0]->f_1);
	}
	else if (!&Global_1879534)
	{
		func_203(4);
	}
	return 1;
}

bool func_1011(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_1012(int iParam0, int iParam1)
{
	if (!func_1011(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

void func_1013(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_1011(iParam1))
	{
		iParam1 = func_1009(func_12(iParam0));
		if (!func_1011(iParam1))
		{
			return;
		}
	}
	if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		if ((bParam2 || bParam6) && (!func_1653(iParam0, -1) || (*Global_1835011)[iParam0]->f_70))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
		}
		else
		{
			if (func_212())
			{
				if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
				{
					if ((*Global_1835011)[iParam0]->f_27 == Global_1905944->f_5698)
					{
						func_1654(1);
					}
				}
			}
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1835011)[iParam0]->f_27));
			if (func_1653(iParam0, -1) && func_1655(iParam0))
			{
				func_1647(iParam0, fParam5, iParam1, bParam2, 1);
				func_1648((*Global_1835011)[iParam0], 2);
			}
		}
	}
	else if ((bParam2 && !func_1007(iParam0)) && !Global_43891)
	{
		func_1647(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_1656(iParam1, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_12));
	}
	if ((is_thread_active((*Global_1835011)[iParam0]->f_16, false) && !func_1657(iParam0)) && !func_1656(iParam1, 1024))
	{
		force_cleanup_for_thread_with_this_id((*Global_1835011)[iParam0]->f_16, 1);
	}
	if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
	{
		destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
	}
	if (bParam4)
	{
		func_1005((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_1658(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_73 = 0;
}

bool func_1014(int iParam0)
{
	return (Global_1392040->f_1 && iParam0) != 0;
}

bool func_1015(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1016(int iParam0)
{
	iVar0 = func_476(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1659(iVar0);
}

int func_1017(int iParam0, int iParam1)
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
			func_1660(iVar2);
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

void func_1018()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1019(int iParam0, int iParam1)
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

int func_1020(bool bParam0)
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

int func_1021(int iParam0)
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

void func_1022(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1023(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1024(int iParam0, int iParam1)
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
			func_1661((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1661(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_188(&(Global_1898164->f_1[0])))
	{
		func_200(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1025(int iParam0, int iParam1, bool bParam2)
{
	if (!func_494(iParam0))
	{
		return;
	}
	func_1662(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1026(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1027(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1028(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1029()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1030(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1663(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1031(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1664();
	}
	else
	{
		return;
	}
	func_1665();
	Global_40.f_9.f_14 = func_280();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1666())
		{
			func_365(Global_1310720->f_1);
		}
		else if (func_1636() == func_366(Global_36, 1) && func_1667() != 2)
		{
			func_365(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_365(Global_36);
		}
		func_1668(Global_36, &vVar0, &uVar4);
		if (!func_1666())
		{
			if (func_1669(vVar0, Global_36) < func_1669(Global_40.f_9.f_7, Global_36))
			{
				func_365(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_366(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1668(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_227(Global_1935630, 8192);
	}
	func_1670();
}

bool func_1032(int iParam0)
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

void func_1033(int iParam0)
{
	iParam0 = func_261(iParam0);
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
		iVar1 = func_1671(iVar6);
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

void func_1034(int iParam0, int iParam1)
{
	iParam0 = func_261(iParam0);
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

void func_1035(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1673(func_1672(255), 109029619));
	}
	else if (func_298())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1062();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1036(int iParam0)
{
	iParam0 = func_261(iParam0);
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

void func_1037(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1673(func_1672(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_298())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1062())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1038(int iParam0)
{
	iParam0 = func_261(iParam0);
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

float func_1039(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1040(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1528(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1036(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1036(iParam0) + 1;
	fVar6 = func_1674(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1675(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1041(int iParam0)
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

void func_1042(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1043()
{
	if (func_332())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1044(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1676((Global_40.f_4283.f_325 + iParam0));
}

void func_1045(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1043())
	{
		func_699(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_699(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1046(int iParam0)
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

char* func_1047(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1048(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1049(int iParam0)
{
	func_1057(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1050(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1051(1);
	}
}

void func_1051(bool bParam0)
{
	if (bParam0)
	{
		func_1677(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1678(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1052(int iParam0)
{
	if (!func_188(iParam0))
	{
		return -15;
	}
	return func_1679(iParam0);
}

bool func_1053(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_695(iParam1) || !func_695(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1054(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1055(int iParam0)
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

bool func_1056(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1057(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1680(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1058(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1059(int iParam0, int iParam1, bool bParam2)
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

int func_1060()
{
	iVar0 = func_549();
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

int func_1061(int iParam0)
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
	fVar1 = func_1612(absf(fVar1) < 1f, func_1612(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1062()
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

int func_1063(int iParam0)
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

int func_1064()
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

void func_1065(int iParam0, bool bParam1, int iParam2)
{
	func_1681((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1682(iParam0);
}

void func_1066(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1683(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1067(bool bParam0)
{
	bVar3 = false;
	if (func_1684(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1685(iVar5, &iVar2, &iVar0))
			{
				if (!func_569(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1686(iVar2);
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
							if (func_588(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1060() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1060() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1687();
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

char* func_1068(int iParam0)
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

bool func_1069(int iParam0)
{
	return func_588(iParam0) == -427144552;
}

bool func_1070(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_590(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1075(iParam0, &uVar0, 1, 0, 0);
	}
	return func_341(iParam0, 1, 0);
}

void func_1071(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_588(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_595(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_596(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_573(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_649(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1072(int iParam0, int iParam1)
{
	if (func_589(iParam0, 58855631))
	{
		func_1221(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1073(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_569(iParam0, 0))
	{
		return 0;
	}
	if (!func_597(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1020(bParam3), iParam0);
}

int func_1074(int iParam0, bool bParam1)
{
	if (func_601(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1020(bParam1), iParam0, 0);
}

bool func_1075(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1688(&iParam0);
	if (!func_569(iParam0, 0))
	{
		return false;
	}
	if (!func_597(0))
	{
		bParam3 = true;
	}
	if (func_1069(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1206(0) };
			Var4.f_9 = -1591664384;
			if (!func_1098(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1099(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1207(iParam0, 1))
			{
				if (!func_1098(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1099(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1689(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1073(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1690(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_1020(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1076(int iParam0, int iParam1)
{
	if (!func_569(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_588(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_589(iParam0, 1399091007))
	{
		func_1140(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1077(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1691(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1692(&Var0, func_1206(0));
	}
	if (!func_1693(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1150(iVar14);
	return uVar15;
}

int func_1078()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1079(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1080(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1694(iParam0);
	fVar1 = func_1695(iParam0);
	if ((Global_1347477->f_117 || !func_591(31)) || !func_1696(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1697(iVar0) >= 7)
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
	func_1698(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_699(_create_var_string(6, func_1699(iParam0), fVar1), "itemtype_textures", func_1700(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1081(int iParam0)
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

int func_1082(int iParam0, int iParam1)
{
	if (!func_1236(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1083(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_584() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1701(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1702(), 12);
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
			else if (func_1122() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1703(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1122(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1704(), 13);
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
			else if (func_1123() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1705(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1123(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1082(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1084(int iParam0, int iParam1, int iParam2)
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

bool func_1085(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1086(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1087(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1706(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_341(iVar2, 1, 0) || func_1708(func_1707(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1091(func_1706(iVar0))), func_1091(func_1706(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1122() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1709(iVar0)), func_1709(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1703() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1709(iVar0)), func_1709(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1709(iVar0)), func_1709(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1133(iParam3, func_1710(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1129(iVar2) - iParam7) >= func_1082(iParam3, func_1711(iVar0));
				}
				else
				{
					bVar1 = func_1129(iVar2) >= func_1082(iParam3, func_1711(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1129(iVar2) + iParam7) >= func_1082(iParam3, func_1711(iVar0));
			}
			else
			{
				bVar1 = func_1129(iVar2) >= func_1082(iParam3, func_1711(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1712(iVar2)), func_1712(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1713(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1714(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1714(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1123() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1715(iVar0)), func_1715(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1705() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1715(iVar0)), func_1715(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1715(iVar0)), func_1715(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1133(iParam3, func_1710(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1129(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1716(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1716(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1717(iVar2)), func_1717(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1088(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1704() >= 13)
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

bool func_1089(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_188(func_201(0)) && ((func_1718(0) == 1 || func_1718(0) == 8) || func_1718(0) == 6))
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

var func_1090(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1091(int iParam0)
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

bool func_1092(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1093(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1094(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1095(int iParam0)
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
			func_1719(1);
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
			func_1720(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1720(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1720(3);
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
			func_1721(1);
			break;
		case 34:
			func_1722(1);
			break;
		case 35:
			func_1723(1);
			break;
		case 36:
			break;
		case 37:
			func_1724(0);
			break;
		case 38:
			func_1725(0);
			break;
		case 39:
			func_1726(0);
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
			if ((!&Global_1879534 && func_392()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_706("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_319(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_392()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_706("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_319(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_392()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_706("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_319(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_392()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_706("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_319(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1163(99217379) || func_1727(99217379) == 2110595215)
				{
					if (func_1062())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_341(iVar0, 1, 0))
					{
						func_642(iVar0, 1, 752097756);
					}
					func_621(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_341(1013902307, 1, 0))
				{
					func_642(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_341(1013902307, 1, 0))
				{
					func_642(1013902307, 1, 752097756);
				}
				if (!func_341(142640135, 1, 0))
				{
					func_642(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_341(786809402, 1, 0))
				{
					func_642(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_341(786809402, 1, 0))
				{
					func_642(786809402, 1, 752097756);
				}
				if (!func_341(-518019409, 1, 0))
				{
					func_642(-518019409, 1, 752097756);
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
			func_1728();
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

bool func_1096(int iParam0)
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

int func_1097(int iParam0, int iParam1)
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

bool func_1098(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1690(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1099(int iParam0, var uParam1, int iParam2)
{
	if (func_1729(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1100(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_569(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1020(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1101(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1730(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1210(*uParam1, &Var0, bParam6, 0))
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
	if (!func_597(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1020(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1102(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1731(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1103(int iParam0)
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
	iVar2 = func_280();
	func_328(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1104(int iParam0)
{
	if (func_1732(iParam0))
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

bool func_1105(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1106(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1107(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_591(50))
			{
				if (!func_591(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_591(51))
			{
				if (!func_591(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1108(int iParam0, int iParam1, var uParam2)
{
	if (!func_569(iParam1, 0))
	{
		return false;
	}
	if (func_588(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_593(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_667(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_589(iParam1, 866047851))
	{
		iVar5 = func_668(iVar4, 1);
		if (func_1733(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_593(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_589(iParam1, -1638171711))
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
			if (func_1734(1868067663, &uVar0))
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
				iVar10 = func_1735(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1735(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_593(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_589(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1736(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1109()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1110()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1111()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_341(func_1737(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1112(int iParam0)
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

bool func_1113(int iParam0, int iParam1)
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
	if (func_341(iVar0, 1, 0) && func_341(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1114(int iParam0)
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

bool func_1115(int iParam0, int iParam1)
{
	iVar0 = func_1738(iParam0);
	if (iVar0 != -15)
	{
		func_328(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_696(iVar0, 1);
	}
	return false;
}

void func_1116(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1117(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1118(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1119(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1120(int iParam0)
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
	iVar1 = func_1129(iVar9);
	iVar2 = func_1129(iVar10);
	iVar3 = func_1129(iVar11);
	iVar5 = func_1130(iVar9);
	iVar6 = func_1130(iVar10);
	iVar7 = func_1130(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1129(iVar12);
		iVar8 = func_1130(iVar12);
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

void func_1121(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1122()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1739(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1123()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1124(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1716(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1716(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1716(iVar0))
		{
			*sParam2++;
		}
		if (func_1716(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1716(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1716(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1716(iVar0))
		{
			*sParam2++;
		}
		if (func_1716(iVar1))
		{
			*sParam2++;
		}
		if (func_1716(iVar0) && func_1716(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1716(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1716(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1716(iVar0))
		{
			*sParam2++;
		}
		if (func_1716(iVar1))
		{
			*sParam2++;
		}
		if (func_1716(iVar2))
		{
			*sParam2++;
		}
		if ((func_1716(iVar0) && func_1716(iVar1)) && func_1716(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1716(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1716(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1716(iVar0))
		{
			*sParam2++;
		}
		if (func_1716(iVar1))
		{
			*sParam2++;
		}
		if (func_1716(iVar2))
		{
			*sParam2++;
		}
		if (func_1716(iVar3))
		{
			*sParam2++;
		}
		if (((func_1716(iVar0) && func_1716(iVar1)) && func_1716(iVar2)) && func_1716(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1125(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1740(1497516462);
			func_1741(2016141805);
			func_1741(1010885152);
			func_1741(-502324015);
			break;
		case 2016141805:
			func_1741(1497516462);
			func_1740(2016141805);
			func_1741(1010885152);
			func_1741(-502324015);
			break;
		case 1010885152:
			func_1741(1497516462);
			func_1741(2016141805);
			func_1740(1010885152);
			func_1741(-502324015);
			break;
		case -502324015:
			func_1741(1497516462);
			func_1741(2016141805);
			func_1741(1010885152);
			func_1740(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1741(-538889627);
			func_1741(-538880323);
			func_1741(-1056767524);
			func_1740(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1742();
			func_1740(iParam0);
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
			func_1743();
			func_1740(iParam0);
			break;
		case 2019386373:
			func_1741(-664252410);
			func_1741(2109952320);
			func_1740(2019386373);
			break;
		case -664252410:
			func_1741(2019386373);
			func_1741(2109952320);
			func_1740(-664252410);
			break;
		case 2109952320:
			func_1741(2019386373);
			func_1741(-664252410);
			func_1740(2109952320);
			break;
		case -1674179981:
			func_1741(-1835851517);
			func_1741(-1838352012);
			func_1740(-1674179981);
			break;
		case -1835851517:
			func_1741(-1674179981);
			func_1741(-1838352012);
			func_1740(-1835851517);
			break;
		case -1838352012:
			func_1741(-1674179981);
			func_1741(-1835851517);
			func_1740(-1838352012);
			break;
		case -1717960576:
			func_1741(210001842);
			func_1740(-1717960576);
			break;
		case 210001842:
			func_1741(-1717960576);
			func_1740(210001842);
			break;
		case -150493654:
			func_1741(-1271608261);
			func_1741(1846061697);
			func_1741(-1145519186);
			func_1740(-150493654);
			break;
		case -1271608261:
			func_1741(-150493654);
			func_1741(1846061697);
			func_1741(-1145519186);
			func_1740(-1271608261);
			break;
		case 1846061697:
			func_1741(-150493654);
			func_1741(-1271608261);
			func_1741(-1145519186);
			func_1740(1846061697);
			break;
		case -1145519186:
			func_1741(-150493654);
			func_1741(-1271608261);
			func_1741(1846061697);
			func_1740(-1145519186);
			break;
		case 1766284049:
			func_1741(280705402);
			func_1741(1926308480);
			func_1740(1766284049);
			break;
		case 280705402:
			func_1741(1766284049);
			func_1741(1926308480);
			func_1740(280705402);
			break;
		case 1926308480:
			func_1741(1766284049);
			func_1741(280705402);
			func_1740(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1741(439465264);
				func_1740(1609506757);
			}
			else
			{
				func_1741(1609506757);
				func_1741(439465264);
			}
			break;
		case 439465264:
			if (func_487(1609506757))
			{
				if (bParam1)
				{
					func_1740(439465264);
				}
				else
				{
					func_1741(439465264);
				}
			}
			break;
		case 1822001510:
			func_1741(-1612662716);
			func_1740(1822001510);
			break;
		case -1612662716:
			func_1741(1822001510);
			func_1740(-1612662716);
			break;
		case 1306158345:
			func_1741(1952610440);
			func_1741(-223469678);
			func_1741(-404698347);
			func_1741(1517904467);
			func_1740(1306158345);
			break;
		case 1952610440:
			func_1741(1306158345);
			func_1741(-223469678);
			func_1741(-404698347);
			func_1741(1517904467);
			func_1740(1952610440);
			break;
		case -223469678:
			func_1741(1306158345);
			func_1741(1952610440);
			func_1741(-404698347);
			func_1741(1517904467);
			func_1740(-223469678);
			break;
		case -404698347:
			func_1741(1306158345);
			func_1741(1952610440);
			func_1741(-223469678);
			func_1741(1517904467);
			func_1740(-404698347);
			break;
		case 1517904467:
			func_1741(1306158345);
			func_1741(1952610440);
			func_1741(-223469678);
			func_1741(-404698347);
			func_1740(1517904467);
			break;
		case 1376646519:
			func_1741(931649776);
			func_1741(-434590080);
			func_1741(1743048395);
			func_1741(449774763);
			func_1740(1376646519);
			break;
		case 931649776:
			func_1741(1376646519);
			func_1741(-434590080);
			func_1741(1743048395);
			func_1741(449774763);
			func_1740(931649776);
			break;
		case -434590080:
			func_1741(1376646519);
			func_1741(931649776);
			func_1741(1743048395);
			func_1741(449774763);
			func_1740(-434590080);
			break;
		case 1743048395:
			func_1741(1376646519);
			func_1741(931649776);
			func_1741(-434590080);
			func_1741(449774763);
			func_1740(1743048395);
			break;
		case 449774763:
			func_1741(1376646519);
			func_1741(931649776);
			func_1741(-434590080);
			func_1741(1743048395);
			func_1740(449774763);
			break;
		case -1414537028:
			func_1741(38162571);
			func_1741(1350391819);
			func_1741(54073871);
			func_1740(-1414537028);
			break;
		case 38162571:
			func_1741(-1414537028);
			func_1741(1350391819);
			func_1741(54073871);
			func_1740(38162571);
			break;
		case 1350391819:
			func_1741(-1414537028);
			func_1741(38162571);
			func_1741(54073871);
			func_1740(1350391819);
			break;
		case 54073871:
			func_1741(-1414537028);
			func_1741(38162571);
			func_1741(1350391819);
			func_1740(54073871);
			break;
		case 198200492:
			func_1740(198200492);
			func_1741(-1124061431);
			func_1741(52706132);
			func_1741(-259123672);
			break;
		case -1124061431:
			func_1741(198200492);
			func_1740(-1124061431);
			func_1741(52706132);
			func_1741(-259123672);
			break;
		case 52706132:
			func_1741(198200492);
			func_1741(-1124061431);
			func_1740(52706132);
			func_1741(-259123672);
			break;
		case -259123672:
			func_1741(198200492);
			func_1741(-1124061431);
			func_1741(52706132);
			func_1740(-259123672);
			break;
		case -919512195:
			func_1740(-919512195);
			func_1741(-1925798111);
			func_1741(420709909);
			func_1741(1703426636);
			break;
		case -1925798111:
			func_1740(-1925798111);
			func_1741(-919512195);
			func_1741(420709909);
			func_1741(1703426636);
			break;
		case 420709909:
			func_1740(420709909);
			func_1741(-919512195);
			func_1741(-1925798111);
			func_1741(1703426636);
			break;
		case 1703426636:
			func_1740(1703426636);
			func_1741(-919512195);
			func_1741(-1925798111);
			func_1741(420709909);
			break;
		case -1223121209:
			func_1740(-1223121209);
			func_1741(630808005);
			break;
		case 630808005:
			func_1740(630808005);
			func_1741(-1223121209);
			break;
		case 1453909576:
			func_1740(1453909576);
			func_1741(1643531967);
			break;
		case 1643531967:
			func_1740(1643531967);
			func_1741(1453909576);
			break;
		case 0:
			func_1740(0);
			func_1741(473295046);
			func_1741(-1738165526);
			break;
		case 473295046:
			func_1740(473295046);
			func_1741(0);
			func_1741(-1738165526);
			break;
		case -1738165526:
			func_1740(-1738165526);
			func_1741(0);
			func_1741(473295046);
			break;
		case 932909855:
			func_1740(932909855);
			func_1741(2051822093);
			break;
		case 2051822093:
			func_1740(2051822093);
			func_1741(932909855);
			break;
		case 405586984:
			func_1740(405586984);
			func_1741(1509509592);
			func_1741(-959357075);
			func_1741(-1311865656);
			break;
		case 1509509592:
			func_1740(1509509592);
			func_1741(405586984);
			func_1741(-959357075);
			func_1741(-1311865656);
			break;
		case -959357075:
			func_1740(-959357075);
			func_1741(1509509592);
			func_1741(405586984);
			func_1741(-1311865656);
			break;
		case -1311865656:
			func_1740(-1311865656);
			func_1741(1509509592);
			func_1741(-959357075);
			func_1741(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1740(-524145696);
			}
			else
			{
				func_1741(-524145696);
			}
			func_1741(1626481264);
			func_1741(282809459);
			break;
		case 282809459:
			func_1740(282809459);
			func_1741(1626481264);
			func_1741(-524145696);
			break;
		case 1626481264:
			func_1740(1626481264);
			func_1741(-524145696);
			func_1741(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1740(885203519);
			}
			else
			{
				func_1741(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1740(-1080627546);
			}
			else
			{
				func_1741(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_487(iParam0))
				{
					func_1740(iParam0);
				}
			}
			else if (func_487(iParam0))
			{
				func_1741(iParam0);
			}
			break;
	}
}

void func_1126(int iParam0)
{
	if (!func_1744(iParam0))
	{
		func_1746(func_1745(iParam0));
	}
}

int func_1127()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1744(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1128(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1129(iVar9);
	iVar2 = func_1129(iVar10);
	iVar3 = func_1129(iVar11);
	iVar5 = func_1130(iVar9);
	iVar6 = func_1130(iVar10);
	iVar7 = func_1130(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1129(iVar12);
		iVar8 = func_1130(iVar12);
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

int func_1129(int iParam0)
{
	if (func_341(iParam0, 1, 0))
	{
		iVar0 = func_573(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1130(int iParam0)
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

int func_1131(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1132(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1133(int iParam0, int iParam1)
{
	if (!func_1236(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1134(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1133(iParam1, 5) || iParam0 == func_1133(iParam1, 6)) || iParam0 == func_1133(iParam1, 7)) || iParam0 == func_1133(iParam1, 8)) || iParam0 == func_1133(iParam1, 9))
	{
		func_1124(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_585(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_587(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1135(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1133(iParam1, 5) || iParam0 == func_1133(iParam1, 6)) || iParam0 == func_1133(iParam1, 7)) || iParam0 == func_1133(iParam1, 8)) || iParam0 == func_1133(iParam1, 9))
	{
		if (func_1124(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_585(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_587(51, 0, 0, iVar0, func_1082(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_585(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_587(51, 0, 0, iVar0, func_1082(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1136()
{
	if (func_189((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1137(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1138(int iParam0)
{
	if (!func_1747(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1139(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1140(int iParam0, int iParam1, var uParam2)
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

bool func_1141(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1748();
	if (iParam2 == 39)
	{
		Var0 = { func_680(iParam0, 1, 0) };
		iParam2 = func_668(func_681(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_589(iParam0, 866047851) && func_1733(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1143(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1749(func_1211(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1750(iParam2);
	func_1751(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1192(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1192(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1198(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1752(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1753(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1753(&(Global_1946804->f_1378), 1, 0);
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
				func_1485(func_1211(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1142(bool bParam0, bool bParam1, bool bParam2)
{
	func_1754(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1143(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1144()
{
	func_1755(&(Global_1946804->f_2776));
	func_1756(32768);
	func_1485(1108822547, 8, 6);
}

int func_1145(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_668(iParam0, 1);
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

void func_1146(int iParam0)
{
	if (func_1757(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1758(Var0);
}

void func_1147(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1758(Var0);
}

bool func_1148(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1020(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1149(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1150(int iParam0)
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

float func_1151()
{
	if (func_1759())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1760(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1760(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1761();
	fVar2 = func_1762();
	fVar3 = func_1763();
	fVar4 = func_1764();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1765()));
	fVar7 = (func_1760(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1766(3, round((to_float(iVar8) * fVar10)), 0);
	func_1767(3, fVar9, fVar9 > 100f);
	return func_1768(fVar7, -100f, 100f);
}

float func_1152()
{
	if (func_1759())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1760(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1760(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1761();
	fVar2 = func_1762();
	fVar3 = func_1763();
	fVar4 = func_1764();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1765()));
	fVar7 = (func_1760(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1766(2, round((to_float(iVar8) * fVar10)), 0);
	func_1767(2, fVar9, fVar9 > 100f);
	return func_1768(fVar7, -100f, 100f);
}

float func_1153()
{
	if (func_1759())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1760(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1769())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1770())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1760(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1761();
	fVar2 = func_1762();
	fVar3 = func_1763();
	fVar4 = func_1764();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1765()));
	fVar7 = (func_1760(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1766(1, round((to_float(iVar8) * fVar10)), 0);
	func_1767(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1760(0);
	}
	return func_1768(fVar7, -100f, 100f);
}

bool func_1154(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1155(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1156(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_569(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1075(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_597(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1020(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1157(int iParam0, bool bParam1)
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
				return func_1771();
			}
			break;
	}
	return 0;
}

int func_1158(int iParam0)
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

bool func_1159(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1160(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1159(iParam0))
	{
		return;
	}
	if (func_1772(iParam0))
	{
		return;
	}
	if (!func_1773(iParam0))
	{
		func_1774(iParam0, 1, 0);
	}
	iVar0 = func_1775(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1776(iParam0, 512))
		{
			func_679(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_212() && !bParam1) && !func_195(0, 0, 1))
	{
		func_708(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1777(iParam0, 6);
	if (bParam2)
	{
		if (!func_195(0, 0, 1))
		{
			func_361(1, 4);
		}
	}
}

bool func_1161(int iParam0, bool bParam1)
{
	return func_1157(iParam0, 0) < func_1778(iParam0, bParam1);
}

bool func_1162(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_593(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1163(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_668(iParam0, 1)] != &Global_1946804->f_57[func_668(iParam0, 1)];
}

void func_1164(int iParam0, int iParam1)
{
	if (func_589(iParam1, 130796156))
	{
		func_1779(iParam1, 0);
	}
	else if (func_589(iParam1, 930141731))
	{
		func_1779(iParam1, 1);
		func_1780(iParam0);
	}
}

void func_1165(var uParam0, int iParam1)
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

int func_1166(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1781(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1782(uParam2, iParam0, Var1);
	return 1;
}

int func_1167(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1168(int iParam0)
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

int func_1169(int iParam0)
{
	if (!func_1783(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1170()
{
	return !&Global_1911774;
}

void func_1171(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1172(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1173(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1174(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1175(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1784(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1176(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1784(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1177(bool bParam0)
{
	if (bParam0)
	{
		func_312(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1178();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1785(2032023096);
		func_315(-615217896);
		func_664(655868243, 1, 1, -142743235, 1);
		func_1787(146323340, func_1786());
		Var0 = { func_1535() };
		if (func_1788(&Var0) == -1387633835)
		{
			func_1789(&Var0);
			func_1790(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1791(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1529(iVar6) == 2010625508)
			{
				func_1792(iVar6, iVar7);
				func_1793(iVar6, iVar8);
				func_1794(iVar6, iVar9);
				func_1795(iVar6, 0);
				if (func_1796(iVar6))
				{
					func_1797(iVar6);
				}
				iVar10 = func_1798(iVar8);
				func_1799(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1178()
{
	if (!func_1800(-1898635967, func_1786(), 1))
	{
		return 0;
	}
	if (func_332())
	{
		if (!func_1800(146323340, func_1786(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1179()
{
	func_326(34411519);
	func_326(834124286);
	func_326(-570967010);
}

void func_1180(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_312(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_664(-1080874779, 3, 1, -142743235, 1);
		func_664(-223790555, 3, 1, -142743235, 1);
		func_664(1566032147, 3, 1, -142743235, 1);
		func_664(891311852, 5, 1, -142743235, 1);
		func_664(-1353737667, 5, 1, -142743235, 1);
		func_664(-330313895, 5, 1, -142743235, 1);
		func_664(-2051332199, 5, 1, -142743235, 1);
		func_664(1237770824, 5, 1, -142743235, 1);
		func_664(-1795542128, 3, 1, -142743235, 1);
		func_664(-1757588258, 3, 1, -142743235, 1);
		func_664(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1791(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1529(iVar0) == 153881023)
			{
				func_1792(iVar0, iVar1);
				func_1793(iVar0, iVar2);
				func_1794(iVar0, iVar3);
				func_1795(iVar0, 0);
				if (func_1796(iVar0))
				{
					func_1797(iVar0);
				}
				iVar4 = func_1798(iVar2);
				func_1799(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1178();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1181(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1801(iParam0);
	if (bParam3)
	{
		func_707(iParam0, sParam1, iParam2);
	}
}

bool func_1182(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1183(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1184()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1148("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1149(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1099(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1150(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1150(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1185(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1802(Param1, iParam5, &Var5, 0))
	{
		func_1101(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1156(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1803(Var19, 1);
}

bool func_1186(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1691(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1692(&Var0, func_1206(0));
	}
	if (!func_1693(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1149(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1101(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1150(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1187(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_569(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_680(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1804(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1100(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1101(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1188(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_589(iParam0, 606799272))
		{
			func_1805(iParam0, iParam1);
		}
		if (func_589(iParam0, -1112814642) && func_589(iParam0, -1697809989))
		{
			func_617(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1189(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1806(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_593(iParam0) != -999503751)
		{
			func_1807(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_593(iParam0) != -999503751)
	{
		func_1807(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1808(iParam0, 1);
	return 1;
}

void func_1190()
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

void func_1191(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1809(0);
	}
	if (bParam0)
	{
		func_1203(8);
		func_1203(512);
	}
	else
	{
		func_1203(8);
		func_1203(16);
	}
}

void func_1192(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1193(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_670();
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

int func_1194(int iParam0)
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

void func_1195(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1810(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1211(iVar0, 1);
			if (func_1482(iVar0, iParam1))
			{
				vVar4 = { func_672(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1481(iVar7, 4))
				{
					func_1485(iVar7, 4, 6);
				}
			}
			else
			{
				func_1484(iVar7, 4, 6);
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

bool func_1196(int iParam0)
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
	func_1811(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1197(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1198(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_593(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1482(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1751(iVar1, iVar3);
		}
	}
	if (func_1163(-1586649372) && func_1482(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1751(iVar1, iVar3);
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
						func_1751(iVar1, iVar3);
					}
				}
			}
			func_1812(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1812(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1751(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1812(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1751(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1751(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1812(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1812(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1751(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1812(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1751(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1751(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_593(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1751(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1736(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_593(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1751(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_589(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1751(iVar1, iVar3);
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
						func_1751(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1736(&(Global_1946804->f_1497.f_1[iVar1])) || func_589(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1751(iVar1, iVar3);
					}
				}
			}
			switch (func_593(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_593(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1751(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_593(&(uParam0->f_1[iVar1])) || func_589(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1751(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1199(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1200(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1154(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1154(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1201(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1154(iParam0, 65536) && !func_1154(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1154(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1154(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1202()
{
	return Global_1905944->f_5694;
}

void func_1203(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1204(struct<4> Param0)
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
			if (func_1813(Param0))
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
			func_1814(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1203(8);
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
			if (func_1813(Param0))
			{
				return;
			}
			func_1814(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1203(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1147(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1205(bool bParam0)
{
	return func_1100(1328661203, func_1815(), -1591664384, bParam0);
}

struct<4> func_1206(bool bParam0)
{
	iVar0 = func_1020(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1100(923904168, func_1205(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1100(923904168, func_1205(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1100(923904168, func_1205(bParam0), -740156546, 0);
}

bool func_1207(int iParam0, bool bParam1)
{
	if (func_593(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_591(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1208(bool bParam0)
{
	iVar0 = func_1020(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1100(271701509, func_1205(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1100(271701509, func_1205(bParam0), 12999093, 0);
}

bool func_1209(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_593(iParam0);
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

bool func_1210(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_1020(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1211(int iParam0, int iParam1)
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

int func_1212(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1213(int iParam0, int iParam1)
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

void func_1214(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1215(int iParam0, int iParam1)
{
	iVar0 = func_688(*iParam0);
	iVar1 = func_687(*iParam0);
	if (iParam1 < 1 || iParam1 > func_693(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1216(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1217(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1218(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1219(int iParam0)
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

bool func_1220(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1069(iParam0))
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

int func_1221(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_569(iParam0, 0))
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

int func_1222(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1688(&iParam0);
	if (!func_569(iParam0, 0))
	{
		return 0;
	}
	if (!func_597(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1073(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1690(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_1020(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1223(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_589(iParam0, -5284486))
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
		if (func_1816(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_650(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_653(iVar62, iVar61);
					if (func_569(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1223(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1223(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1816(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1224(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1817(1);
}

void func_1225(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1818(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_318(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1818(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_318(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1226()
{
	return Global_40.f_4283.f_325;
}

bool func_1227(int iParam0)
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

bool func_1228(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1229(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1230(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1231(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1232(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1233(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_392();
	bVar1 = false;
	if (bVar0 && !func_465(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_465(37)) && !func_465(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_465(43)) && !func_465(44))
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
		if (func_1272(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1272(1) == 1)
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

int func_1234()
{
	return Global_40.f_1095.f_3054;
}

bool func_1235(int iParam0)
{
	iParam0 = func_261(iParam0);
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

bool func_1236(int iParam0, var uParam1)
{
	if (!func_1819(iParam0))
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

int func_1237()
{
	if (func_392())
	{
		if (!func_465(3))
		{
			return func_1820(43);
		}
		if (func_465(38) && !func_465(43))
		{
			return func_1821(8);
		}
	}
	return 0;
}

bool func_1238(int iParam0)
{
	if (!func_245(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1822(iParam0));
}

Vector3 func_1239(int iParam0, int iParam1)
{
	func_1236(15, &Var0);
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

int func_1240(int iParam0, int iParam1)
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
	iVar0 = func_1823(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1236(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1824(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1241(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1825(iParam0);
	if (func_487(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1242(int iParam0)
{
	if (!func_1236(15, &Var0))
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

bool func_1243(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam5)
	{
		if (func_1826(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1827(5))
	{
		if (func_1828(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1523(vParam0);
	if (bParam6)
	{
		iVar1 = func_366(vParam0, 1);
		if (func_116(iVar1) || func_1829(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1830(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1831())
	{
		if (func_1832(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1833(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_366(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1834(iParam3, iParam4))
	{
		return false;
	}
	if (func_1835(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1836(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_392())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1837(vParam0, iParam10) || func_1838(vParam0, iParam10))
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

int func_1244(vector3 vParam0)
{
	iVar0 = func_1839(vParam0, 0f, 0f, 0, 2);
	return func_1839(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1245(int iParam0)
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

char* func_1246(int iParam0)
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
	return func_1493(iVar0);
}

char* func_1247(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1840(iVar0);
}

char* func_1248(int iParam0)
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

void func_1249(var uParam0, int iParam1)
{
	iVar0 = func_131(iParam1);
	if (!func_1590(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*uParam0->f_1[iVar0])[iVar1] = 59059;
		clear_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1250(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_131(iParam1);
	if (func_1590(iVar0))
	{
		uParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1251()
{
	Local_30 = 0;
	Local_30.f_1 = 0;
	Local_30.f_2 = 0;
	Local_30.f_10 = 0;
	Local_30.f_11 = 0;
	Local_30.f_12 = 0;
	Local_30.f_3 = 0;
	Local_30.f_3 = 0;
	Local_30.f_44 = 0;
	Local_30.f_340 = 0;
	Local_30.f_143[0]->f_11 = 0;
	Local_30.f_143[0]->f_2 = 0;
	Local_30.f_530 = 0;
}

float func_1252(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_1253(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1841(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_1254()
{
	return Local_30.f_143[0]->f_9;
}

void func_1255(var uParam0, int iParam1)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	*vVar12[0] = { -96.8945f, -37.8453f, 94.8175f };
	*vVar12[1] = { -94.75f, -34.7363f, 94.8738f };
	*vVar12[2] = { -94.6059f, -38.9066f, 94.7907f };
	*vVar12[3] = { -92.244f, -38.941f, 94.799f };
	*vVar12[4] = { -92.5393f, -41.7706f, 94.7397f };
	*vVar12[5] = { -100.3237f, -37.0447f, 94.8651f };
	*vVar12[6] = { -100.3007f, -40.3652f, 94.752f };
	*vVar12[7] = { -102.5633f, -41.8397f, 94.6926f };
	*vVar12[8] = { -104.6245f, -40.1101f, 94.8184f };
	*vVar12[9] = { -104.756f, -37.3723f, 94.914f };
	iVar43 = func_1842(&uVar1, iParam1);
	bVar44 = false;
	if (iVar43 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar43)
		{
			bVar44 = false;
			if (does_entity_exist(&(uVar1[iVar0])) && !func_1843(uParam0, &(uVar1[iVar0])))
			{
				if (func_519(&(uVar1[iVar0])))
				{
					if (func_898(&(uVar1[iVar0])))
					{
						bVar44 = true;
					}
				}
				func_903(&(uVar1[iVar0]), *vVar12[iVar0], 0f, 2, 1073741824);
				if (bVar44)
				{
					iVar45 = _find_closest_active_scenario_point_of_type(-106.2657f, -32.3489f, 94.9608f, -1805387726, 2f, 1, false);
					if (_does_scenario_point_exist(iVar45))
					{
						_task_use_scenario_point(&(uVar1[iVar0]), iVar45, 0, 0, false, true, 0, false, -1f, false);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_1256()
{
	if (!is_ped_injured(Local_30.f_158))
	{
		if (_0xa0bc8faed8cfeb3c(Local_30.f_158))
		{
			_0x34c11114887150fd(Local_30.f_158, 10);
			_0xa7a806677f8de138(Local_30.f_158);
			clear_ped_env_dirt(Local_30.f_158);
			set_attribute_points(Local_30.f_158, 16, 0);
		}
	}
}

void func_1257(var uParam0)
{
	func_1844(uParam0->f_5411, 0, 0);
	func_1844(uParam0->f_5411, 0, 0);
	func_1844(uParam0->f_5411, 0, 0);
	func_1845(uParam0->f_5411, 5, 0, 0, 0, 1);
	func_1845(uParam0->f_5411, 4, 0, 0, 0, 1);
	func_1845(uParam0->f_5411, 6, 0, 0, 0, 1);
}

void func_1258(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1259(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1260(var uParam0)
{
	if (!func_388(Local_30.f_2, 8192))
	{
		if (get_script_task_status(uParam0->f_5411, 993674639, true) != 1)
		{
			iVar0 = _find_closest_active_scenario_point_of_type(-116.6157f, -17.9844f, 95.9412f, -1805387726, 5f, 0, false);
			if (_does_scenario_point_exist(iVar0))
			{
				_task_start_scenario_in_place_2(uParam0->f_5411, iVar0, 0, 0, false, -1f, false);
			}
		}
	}
}

void func_1261(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_563(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

void func_1262(int iParam0, int iParam1)
{
	iVar0 = func_1846(iParam0);
	func_1847(iParam0, (iVar0 + iParam1));
}

void func_1263(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	sVar0 = "HorseMission";
	if (bParam1)
	{
		if (!decor_exist_on(iParam0, sVar0))
		{
			decor_set_bool(iParam0, sVar0, bParam1);
		}
	}
	else if (decor_exist_on(iParam0, sVar0))
	{
		decor_remove(iParam0, sVar0);
	}
}

void func_1264(var uParam0, int iParam1)
{
	func_1496(&(uParam0->f_7375), iParam1);
	func_1848(&(uParam0->f_10792), iParam1);
}

void func_1265(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1849(iParam0, 32);
	func_263();
}

void func_1266(var uParam0)
{
	if (func_1271(uParam0))
	{
		return;
	}
	switch (func_1850(uParam0))
	{
		case 0:
			iVar0 = func_166(uParam0);
			if (func_902(Global_35, uParam0->f_5411, 1, 1) <= 3f || _0x3ee1f7a8c32f24e1(player_id(), &iVar0, 0, 0))
			{
				if (func_388(Local_30.f_2, 2048))
				{
					func_1301(&(Local_30.f_2), 2048);
				}
				if (func_388(Local_30.f_2, 4))
				{
					func_1301(&(Local_30.f_2), 4);
				}
				func_1851();
				func_1852(4);
				func_134(uParam0, 1);
			}
			else if (!func_388(Local_30.f_2, 2048))
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_178();
				func_1438(uParam0, "HORSE_RET", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_414(&(Local_30.f_2), 2048);
			}
			break;
		case 1:
			if (func_902(Global_35, uParam0->f_5411, 1, 1) <= 5f)
			{
				if (!func_388(Local_30.f_2, 4))
				{
					func_1853(0);
					if (!func_388(Local_30.f_2, 8))
					{
						func_708("RH1_TUT_SADDLE", 10000, 0, 0, 0, 1);
						func_414(&(Local_30.f_2), 8);
					}
					func_1433(uParam0, "RH1_SDDL_CONT", -1082130432, 0, 0, -1, -1, 0);
					func_1438(uParam0, "RH1_SDDL_CONT", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
					func_414(&(Local_30.f_2), 4);
					func_1265(7);
				}
				else
				{
					iVar0 = func_166(uParam0);
					if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, 0, 0))
					{
						func_1853(1);
						_0xdd1232b332cbb9e7(3, 1, 0);
						func_1433(uParam0, "RH1_NRMV_SDDL", -1082130432, 0, 0, -1, -1, 0);
						func_1438(uParam0, "RH1_NRMV_SDDL", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
						func_134(uParam0, 2);
					}
				}
			}
			else
			{
				func_134(uParam0, 0);
			}
			break;
		case 2:
			iVar2 = _0x5463c962bc7777c3(Global_35, 5, &uVar1, 1, 0);
			if (iVar2 >= 4)
			{
				if (!func_388(Local_30.f_2, 16))
				{
					func_414(&(Local_30.f_2), 16);
				}
			}
			else if (func_388(Local_30.f_2, 16))
			{
				func_1301(&(Local_30.f_2), 16);
			}
			if (!func_388(Local_30.f_2, 16))
			{
				if (!_0x3ee1f7a8c32f24e1(player_id(), &iVar0, 0, 0))
				{
					func_1301(&(Local_30.f_2), 4);
					func_134(uParam0, 1);
				}
			}
			if (func_388(Local_30.f_2, 16))
			{
				if (does_entity_exist(Local_30.f_159) && _get_saddle_horse_for_player(player_id()) != Local_30.f_159)
				{
					set_ped_config_flag(func_166(uParam0), 367, true);
					func_1853(2);
					_0xdd1232b332cbb9e7(3, 1, 0);
					if (!does_blip_exist(Local_30.f_167))
					{
						Local_30.f_167 = func_1854(Local_30.f_158, 408396114, 1, 1);
						set_blip_name_from_text_file(Local_30.f_167, "RH1_NEW_HRSE");
					}
					func_59(7);
					if (does_entity_exist(Local_30.f_158))
					{
						set_ped_config_flag(Local_30.f_158, 297, true);
					}
					func_1438(uParam0, "RH1_GOH_SDDL", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
					func_134(uParam0, 3);
				}
			}
			break;
		case 3:
			if (!is_ped_injured(Global_35))
			{
				if (!is_ped_injured(Local_30.f_158))
				{
					fVar3 = func_902(Global_35, Local_30.f_158, 1, 1);
					if (fVar3 < 1.15f)
					{
						func_1853(3);
						_0xdd1232b332cbb9e7(3, 1, 0);
						func_1438(uParam0, "RH1_NTRAN_SDDL", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
						func_134(uParam0, 4);
						if (does_blip_exist(Local_30.f_167))
						{
							remove_blip(&(Local_30.f_167));
						}
					}
					else if (func_1269(uParam0) > 0)
					{
					}
				}
			}
			break;
		case 4:
			if (func_1269(uParam0) > 0)
			{
				func_1855(&(Local_30.f_167));
				func_1265(7);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_178();
				set_ped_config_flag(Local_30.f_158, 367, true);
				func_1433(uParam0, "RH1_MOUNT_UP", -1082130432, 0, 0, -1, -1, 0);
				func_134(uParam0, 5);
			}
			break;
		case 5:
			if (func_1273(Global_35, Local_30.f_158, 0))
			{
				func_59(7);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_134(uParam0, 51);
			}
			else if (!func_388(Local_30.f_2, 512))
			{
				if (func_912(Local_30.f_168[1]) > 5f)
				{
					func_1438(uParam0, "RH1_MOUNT_UP", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_414(&(Local_30.f_2), 512);
				}
			}
			if (func_912(Local_30.f_168[1]) > 5f)
			{
				func_1856();
			}
			break;
	}
}

void func_1267(var uParam0)
{
	switch (Local_30.f_1)
	{
		case 0:
			if (is_screen_faded_in())
			{
				if (func_1857(uParam0, "RH1_SADDLEWHY", 0))
				{
					func_218(Local_30.f_168[0]);
					Local_30.f_1++;
				}
				else
				{
					Local_30.f_1++;
				}
			}
			break;
		case 1:
			if (!func_1403())
			{
				func_218(Local_30.f_168[0]);
				Local_30.f_1++;
			}
			break;
		case 2:
			if (!func_388(Local_30, 4))
			{
				if (is_ped_on_mount(Global_35) && !func_1273(Global_35, Local_30.f_158, 0))
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RH1_MNT_WRONG", 0))
						{
							func_414(&Local_30, 4);
						}
					}
				}
			}
			if (func_1269(uParam0) > 0)
			{
				if (!func_1403())
				{
					func_218(Local_30.f_168[0]);
					Local_30.f_1++;
				}
			}
			else if (!func_388(Local_30.f_2, 128))
			{
				if (func_912(Local_30.f_168[0]) > 3f)
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RH1_SADDLEBANT", 0))
						{
							func_414(&(Local_30.f_2), 128);
						}
					}
				}
			}
			else if (!func_388(Local_30.f_2, 1024))
			{
				if (!func_1403())
				{
					func_414(&(Local_30.f_2), 1024);
					func_218(Local_30.f_168[0]);
				}
			}
			else if (!func_1403())
			{
				if (func_912(Local_30.f_168[0]) >= 7f)
				{
					if (func_1857(uParam0, "RH1_TRNS_SDDL", 0))
					{
						func_218(Local_30.f_168[0]);
					}
				}
			}
			break;
		case 3:
			if (!func_388(Local_30, 16))
			{
				if (func_912(Local_30.f_168[0]) >= 3.5f)
				{
					if (func_1857(uParam0, "RH1_SAD_CORRECT", 0))
					{
						func_414(&Local_30, 16);
					}
				}
			}
			if (func_1273(Global_35, Local_30.f_158, 0))
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_ARTH_MOUNT", 0))
					{
						func_414(&Local_30, 8);
						func_218(Local_30.f_168[0]);
						Local_30.f_1++;
					}
				}
			}
			else if (!func_388(Local_30, 2))
			{
				if (func_912(Local_30.f_168[0]) > 10f)
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RH1_MOUNT_DAWD", 0))
						{
							func_414(&Local_30, 2);
						}
					}
				}
			}
			break;
	}
}

void func_1268()
{
	if (!func_388(Local_30.f_2, 2))
	{
		if (!is_ped_injured(&(Local_30.f_143[0])))
		{
			if (func_1273(Global_35, Local_30.f_158, 0))
			{
				open_sequence_task(&(Local_30.f_143[0]->f_13));
				task_mount_animal(0, Local_30.f_143[0]->f_9, -1, -1, 1f, 1, 0, 0);
				task_follow_nav_mesh_to_coord(0, -109.1669f, -17.0152f, 94.9116f, 1f, -1, 0.25f, 0, 40000f);
				task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				func_1858(&(Local_30.f_143[0]), &(Local_30.f_143[0]->f_13), 0, 0, 1, 1);
				func_414(&(Local_30.f_2), 2);
			}
		}
	}
}

int func_1269(var uParam0)
{
	return uParam0->f_598;
}

bool func_1270(int iParam0, int iParam1, int iParam2)
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
	return _blip_set_modifier(iVar0, iParam1);
}

bool func_1271(var uParam0)
{
	if (func_388(Local_30.f_2, 32))
	{
		return true;
	}
	iVar0 = _get_saddle_horse_for_player(player_id());
	if (!func_388(Local_30.f_2, 16))
	{
		return false;
	}
	if (iVar0 != 0)
	{
		if (iVar0 != Local_30.f_159 && iVar0 != Local_30.f_158)
		{
			func_414(&(Local_30.f_2), 32);
			_0xdd1232b332cbb9e7(3, 1, 0);
			return true;
		}
		else if (iVar0 == Local_30.f_159)
		{
		}
		else if (iVar0 == func_166(uParam0))
		{
		}
		else if (iVar0 == Local_30.f_158)
		{
		}
	}
	return false;
}

int func_1272(int iParam0)
{
	iParam0 = func_261(iParam0);
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

bool func_1273(int iParam0, int iParam1, bool bParam2)
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

void func_1274(int iParam0, float fParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return;
	}
	_0x06d26a96ca1bca75(iParam0, 3, fParam1, iParam2);
}

void func_1275()
{
	if (!does_entity_exist(Local_30.f_166))
	{
		if (func_1521(6))
		{
			Local_30.f_166 = func_213(6);
			set_entity_as_mission_entity(Local_30.f_166, true, true);
			func_1522(6);
		}
	}
}

void func_1276(var uParam0, int iParam1)
{
	uParam0->f_1[func_131(iParam1)]->f_12 = 1;
}

void func_1277(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_131(iParam2);
	if (!func_1590(iVar0))
	{
		return;
	}
	iVar1 = func_1591(iParam3);
	if (!func_1592(iVar1))
	{
		return;
	}
	(*uParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1278(var uParam0, int iParam1, char[16] cParam2)
{
	uParam0->f_1[func_131(iParam1)]->f_13 = { cParam2 };
}

void func_1279(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_131(iParam1)]->f_21 = iParam2;
}

bool func_1280(var uParam0, var uParam1, vector3 vParam2, float fParam5)
{
	iVar0 = func_1859();
	switch (iVar0)
	{
		case 0:
			if (func_1860())
			{
				func_1861(1);
			}
			else if (func_1862(uParam0))
			{
				if (func_1863())
				{
					func_1861(1);
				}
				else
				{
					func_1861(4);
				}
			}
			else
			{
				func_1861(4);
			}
			break;
		case 1:
			*uParam1 = func_166(uParam0);
			if (does_entity_exist(*uParam1))
			{
				func_903(*uParam1, vParam2, fParam5, 2, 1073741824);
				return true;
			}
			break;
		case 4:
			if (func_1864())
			{
				if (func_1862(uParam0))
				{
					func_1861(2);
				}
				else
				{
					func_1861(3);
				}
			}
			break;
		case 2:
			if (func_1865())
			{
				func_1861(3);
			}
			break;
		case 3:
			if (func_1866())
			{
				if (func_1862(uParam0))
				{
					func_1861(5);
				}
				else
				{
					func_1861(6);
				}
			}
			break;
		case 5:
			*uParam1 = func_1867(vParam2, fParam5);
			if (does_entity_exist(*uParam1))
			{
				return true;
			}
			break;
		case 6:
			if (func_1868(vParam2, fParam5, uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_1281(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	if (get_mount(iParam0) != iParam1)
	{
		_set_ped_on_mount(iParam0, iParam1, iParam3, bParam4);
		set_ped_can_be_targetted(iParam1, bParam2);
	}
	return 1;
}

void func_1282(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	Local_30.f_123 = { vParam0 };
	Local_30.f_126 = { vParam3 };
	Local_30.f_129 = { vParam6 };
	Local_30.f_132 = { vParam9 };
}

void func_1283(char[4] cParam0)
{
	Local_30.f_142 = cParam0;
}

void func_1284(int iParam0, int iParam1)
{
	Local_30.f_7 = iParam0;
	Local_30.f_8 = iParam1;
}

void func_1285(int iParam0, bool bParam1)
{
	if (Local_30.f_228 != iParam0)
	{
		Local_30.f_229 = Local_30.f_228;
		Local_30.f_228 = iParam0;
	}
	if (bParam1)
	{
		Local_30.f_143[0]->f_11 = 0;
	}
}

void func_1286(int iParam0)
{
	func_441(iParam0, 134217728);
}

void func_1287(var uParam0)
{
	func_1869(func_171(), "RH1_VRIDEBANT1", 1, 1);
	switch (Local_30.f_1)
	{
		case 0:
			func_218(Local_30.f_168[0]);
			Local_30.f_1++;
			break;
		case 1:
			if (func_465(5) && func_465(9))
			{
				sVar1 = "RH1_LETSGO_C";
			}
			else if (func_465(5) && !func_465(9))
			{
				sVar1 = "RH1_LETSGO_B";
			}
			else if (!func_465(5) && !func_465(9))
			{
				sVar1 = "RH1_LETSGO_A";
			}
			if (!func_1403())
			{
				if (func_1857(uParam0, sVar1, 0))
				{
					func_218(Local_30.f_168[0]);
					Local_30.f_1++;
				}
			}
			break;
		case 2:
			if (!func_388(Local_30.f_2, 16384))
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_LEAVECAMP", 0))
					{
						func_414(&(Local_30.f_2), 16384);
					}
				}
			}
			else if (func_388(Local_30.f_2, 128))
			{
				if (!func_388(Local_30.f_2, 256))
				{
					if (!func_388(Local_30.f_2, 512))
					{
						if (!func_1403())
						{
							if (func_912(Local_30.f_168[0]) > 5f)
							{
								func_218(Local_30.f_168[0]);
								func_414(&(Local_30.f_2), 512);
							}
						}
					}
					else
					{
						func_218(Local_30.f_168[0]);
						func_414(&(Local_30.f_2), 256);
					}
				}
				else if (func_912(Local_30.f_168[0]) > 1f)
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RH1_VRIDEBANT1", 0))
						{
							func_218(Local_30.f_168[0]);
							func_1301(&(Local_30.f_2), 512);
							Local_30.f_1++;
						}
					}
				}
			}
			break;
		case 3:
			iVar0 = func_1870(func_171(), func_411(0));
			if (iVar0 > 142)
			{
				if (!func_1403())
				{
					func_218(Local_30.f_168[0]);
					Local_30.f_1++;
				}
			}
			break;
		case 4:
			iVar0 = func_1870(func_171(), func_411(0));
			if (iVar0 > 177)
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_HSHOP_APRCH", 0))
					{
						func_218(Local_30.f_168[0]);
						func_134(uParam0, 6);
						Local_30.f_1++;
					}
				}
			}
			if (func_388(Local_30.f_2, 128))
			{
				if (!func_388(Local_30.f_2, 1024))
				{
					if (!func_388(Local_30.f_2, 2048))
					{
						if (!func_1403())
						{
							func_218(Local_30.f_168[0]);
							func_414(&(Local_30.f_2), 2048);
						}
					}
					else if (!func_388(Local_30.f_2, 512))
					{
						if (func_912(Local_30.f_168[0]) > 2f)
						{
							_0x2eb75fb86c41f026(Local_30.f_158, 3, 1);
							_0x06d26a96ca1bca75(Local_30.f_158, 3, 1f, 0);
							func_218(Local_30.f_168[0]);
							func_414(&(Local_30.f_2), 512);
						}
					}
					else if (func_912(Local_30.f_168[0]) > 2f)
					{
						if (func_1857(uParam0, "RH1_UNRLYHORSE2", 0))
						{
							func_218(Local_30.f_168[0]);
							func_414(&(Local_30.f_2), 1024);
						}
					}
				}
			}
			break;
		case 5:
			iVar0 = func_1870(func_171(), func_411(0));
			if (func_388(Local_30.f_2, 1) || (is_waypoint_playback_going_on_for_ped(func_171(), 0) && func_1870(func_171(), func_411(0)) >= 177))
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RHUNT_IG0_SELL", 0))
					{
						func_414(&(Local_30.f_2), 8);
						func_218(Local_30.f_168[0]);
						Local_30.f_1++;
					}
				}
			}
			break;
		case 6:
			if (func_912(Local_30.f_168[0]) >= 3f)
			{
				func_134(uParam0, 2);
				func_218(Local_30.f_168[0]);
				Local_30.f_1++;
			}
			break;
		case 7:
			if (!func_1403())
			{
				if (func_1857(uParam0, "RHUNT_IG0_GEN", 0))
				{
					func_218(Local_30.f_168[0]);
					Local_30.f_1++;
				}
			}
			break;
		case 8:
			if (func_388(Local_30.f_2, 8))
			{
				func_218(Local_30.f_168[0]);
				Local_30.f_1++;
			}
			break;
		case 9:
			if (func_912(Local_30.f_168[0]) >= 15f)
			{
				if (!func_1403())
				{
					if (func_902(Global_35, func_171(), 1, 1) < 20f)
					{
						if (func_1857(uParam0, "RH1_HSHOP_DAWD", 0))
						{
							func_218(Local_30.f_168[0]);
						}
					}
				}
			}
			break;
	}
}

void func_1288(var uParam0)
{
	switch (func_1850(uParam0))
	{
		case 0:
			func_218(Local_30.f_168[1]);
			func_134(uParam0, 1);
			break;
		case 1:
			if (func_912(Local_30.f_168[0]) > 3f)
			{
				if (func_1273(Global_35, Local_30.f_158, 0))
				{
					if (func_1273(func_171(), func_1254(), 0))
					{
						func_1433(uParam0, "RH1_HOSEA_FLW", -1082130432, 0, 0, -1, -1, 0);
						func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
						func_134(uParam0, 4);
					}
				}
			}
			break;
		case 2:
			func_1438(uParam0, "RH1_BUY_HORSE", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			if (func_165(7))
			{
				func_59(7);
			}
			func_1413(uParam0, func_171(), 1);
			func_162(76, 1);
			func_134(uParam0, -1);
			func_414(&(Local_30.f_2), 32);
			break;
		case 3:
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1438(uParam0, "RH1_MOUNT_UP", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_162(76, 0);
			func_1301(&(Local_30.f_2), 32);
			if (!func_165(7))
			{
				func_1265(7);
			}
			func_134(uParam0, -1);
			break;
		case 4:
			if (func_388(Local_30.f_2, 256))
			{
				if (func_1403())
				{
					if (!func_212())
					{
						iVar0 = _0x3e593df9c2962ec6(-1925605092);
						_blip_set_modifier(iVar0, 673950256);
						func_708(_create_var_string(0, 287196071, iVar0), 10000, 0, 0, 0, 1);
						func_134(uParam0, 5);
					}
				}
			}
			break;
		case 5:
			if (func_388(Local_30.f_2, 1024))
			{
				if (func_1403())
				{
					if (!func_212())
					{
						func_708("RH1_TUT_CALM", 10000, 0, 0, 0, 1);
						func_134(uParam0, -1);
					}
				}
			}
			break;
		case 6:
			func_1871();
			break;
	}
}

void func_1289()
{
	if (is_ped_injured(func_171()))
	{
		return;
	}
	switch (Local_30.f_143[0]->f_2)
	{
		case 0:
			if (is_waypoint_playback_going_on_for_ped(func_171(), 0))
			{
				if (func_1870(func_171(), func_411(0)) >= 190)
				{
					func_414(&(Local_30.f_2), 4);
					_0x2b4ce170de09f346(func_171(), -1063823711);
					_0x660a8f876df1d4f8(25);
					_0x660a8f876df1d4f8(21);
					Local_30.f_143[0]->f_2++;
				}
			}
			break;
		case 1:
			if (!is_waypoint_playback_going_on_for_ped(func_171(), 0))
			{
				Var0 = { -351.7358f, 796.5907f, 115.2197f };
				Var0.f_3 = 153.4962f;
				func_1577(0);
				task_achieve_heading(0, 200.2752f, 0);
				func_1579(0);
				func_218(&(Local_30.f_143[0]->f_4));
				if (!func_388(Local_30.f_2, 1))
				{
					func_414(&(Local_30.f_2), 1);
				}
				Local_30.f_143[0]->f_11 = 1;
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 2:
			if (func_388(Local_30.f_2, 8))
			{
				if (func_912(&(Local_30.f_143[0]->f_4)) >= 10f)
				{
					if (!func_1404(func_171(), 242628503) || get_sequence_progress(func_171()) > 0)
					{
						Var0 = { -319.2576f, 790.6564f, 116.1225f };
						Var0.f_3 = 347.2895f;
						func_1577(0);
						func_1872(0, Var0, 1f, -1, 1f, 0);
						task_animal_interaction(0, Local_30.f_143[0]->f_9, -1897367196, 0, 0);
						func_1579(0);
						func_218(&(Local_30.f_143[0]->f_4));
						Local_30.f_143[0]->f_2++;
					}
				}
			}
			break;
	}
}

void func_1290()
{
}

bool func_1291(int iParam0, bool bParam1)
{
	bVar0 = false;
	switch (iParam0)
	{
		case 0:
			if (!func_1873(0))
			{
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_231))
			{
				Local_30.f_231 = create_object_no_offset(-261930923, -363.5573f, 781.9949f, 115.3772f, true, true, false, true);
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_232))
			{
				Local_30.f_232 = get_object_index_from_entity_index(func_1874(131573063, 0));
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_233))
			{
				Local_30.f_233 = create_object_no_offset(-1025740342, -364.2398f, 783.9947f, 115.3645f, true, true, false, true);
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_162))
			{
				if (!bVar1)
				{
					Local_30.f_162 = func_1253(320465243, -362.3606f, 782.2236f, 115.1752f, 271.8661f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					bVar1 = true;
				}
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_163))
			{
				if (!bVar1)
				{
					Local_30.f_163 = func_1253(320465243, -362.3968f, 781.0195f, 115.1687f, 262.9659f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					bVar1 = true;
				}
				bVar0 = true;
			}
			if (bParam1)
			{
				if (!func_26(Local_30.f_168[15]))
				{
					func_218(Local_30.f_168[15]);
				}
			}
			if (!does_entity_exist(Local_30.f_164))
			{
				bVar8 = true;
			}
			if (bParam1)
			{
				if (func_912(Local_30.f_168[15]) > 20f)
				{
					bVar8 = false;
				}
			}
			if (bVar8)
			{
				Local_30.f_254[24] = _create_volume_box(-369.4314f, 792.137f, 115.4211f, 0f, 0f, 3.000001f, 3f, 4f, 4f);
				iVar9 = func_1842(&uVar2, &(Local_30.f_254[24]));
				if (does_entity_exist(&(uVar2[0])))
				{
					Local_30.f_164 = &uVar2[0];
				}
				func_177(&(Local_30.f_254[24]));
				bVar0 = true;
			}
			break;
		case 1:
			if (!func_1873(1))
			{
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_231))
			{
				Local_30.f_231 = create_object_no_offset(-261930923, -363.5573f, 781.9949f, 115.3772f, true, true, false, true);
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_232))
			{
				Local_30.f_232 = get_object_index_from_entity_index(func_1874(131573063, 0));
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_233))
			{
				Local_30.f_233 = create_object_no_offset(-1025740342, -364.2398f, 783.9947f, 115.3645f, true, true, false, true);
				set_entity_visible(Local_30.f_233, false);
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_162))
			{
				if (!bVar1)
				{
					Local_30.f_162 = func_1253(320465243, -362.3606f, 782.2236f, 115.1752f, 271.8661f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					set_entity_visible(Local_30.f_162, false);
					bVar1 = true;
				}
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_163))
			{
				if (!bVar1)
				{
					Local_30.f_163 = func_1253(320465243, -362.3968f, 781.0195f, 115.1687f, 262.9659f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					set_entity_visible(Local_30.f_163, false);
					bVar1 = true;
				}
				bVar0 = true;
			}
			break;
		case 2:
			if (!_does_propset_exist(Local_30.f_308))
			{
				Local_30.f_308 = _create_propset_2(834622637, 1775.353f, 1255.754f, 189.6069f, 1, 60f, 1200f, false, true);
			}
			if (!does_entity_exist(Local_30.f_237))
			{
				Local_30.f_237 = create_object_no_offset(305182125, 1775.202f, 1255.487f, 189.5818f, true, true, false, true);
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_239))
			{
				Local_30.f_239 = create_object_no_offset(-1456646750, 1775.402f, 1255.487f, 189.5818f, true, true, false, true);
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_240))
			{
			}
			if (!does_entity_exist(Local_30.f_241))
			{
				Local_30.f_241 = create_object_no_offset(1307267863, 1775.402f, 1255.487f, 189.5818f, true, true, false, true);
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_242))
			{
				Local_30.f_242 = create_object_no_offset(2119789466, 1775.402f, 1255.487f, 189.5818f, true, true, false, true);
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_243))
			{
				Local_30.f_243 = create_object_no_offset(-82199229, 1775.402f, 1255.487f, 189.5818f, true, true, false, true);
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_244))
			{
				Local_30.f_244 = create_object_no_offset(-82199229, 1775.402f, 1255.487f, 189.5818f, true, true, false, true);
				bVar0 = true;
			}
			if (!does_entity_exist(Local_30.f_246))
			{
				iVar12 = create_itemset(true);
				iVar13 = _get_entities_from_propset(Local_30.f_308, iVar12, 0, false, false);
				if (iVar13 > 0)
				{
					iVar14 = 0;
					while (iVar14 < iVar13)
					{
						iVar10 = get_indexed_item_in_itemset(iVar14, iVar12);
						iVar11 = _0x18013392501ce5dc(iVar10);
						if (get_entity_model(iVar11) == 1600083684)
						{
							Local_30.f_246 = iVar11;
						}
						iVar14++;
					}
				}
				else
				{
					Local_30.f_246 = create_object_no_offset(-771866010, 1775.402f, 1255.487f, 189.5818f, true, true, false, true);
				}
				bVar0 = true;
			}
			break;
	}
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_1292()
{
	iVar0 = 0;
	while (iVar0 < Global_1914319->f_3[9]->f_408)
	{
		iVar1 = &Global_1914319->f_3[9]->f_317[iVar0];
		if (iVar1 == 1876749464 || iVar1 == 1331491364)
		{
			func_1875(iVar1, 0f, 1);
			func_1876(iVar1, 1, 0);
		}
		iVar0++;
	}
}

void func_1293()
{
	if (func_1299(76))
	{
		if (!is_ped_injured(Global_35))
		{
			if (func_1252(Global_35, -364.3158f, 787.4852f, 115.1776f, 1) < 3f || func_1877(Global_35))
			{
				func_167(76, 0);
			}
		}
	}
	else if (!is_ped_injured(Global_35))
	{
		if (func_1252(Global_35, -364.3158f, 787.4852f, 115.1776f, 1) > 4f && !func_1877(Global_35))
		{
			func_167(76, 1);
		}
	}
	if (func_388(Local_30.f_2, 32))
	{
		if (!func_1878(76))
		{
			func_162(76, 1);
		}
	}
}

bool func_1294()
{
	if (func_952(player_id(), 1, 0, 1))
	{
		return false;
	}
	if (func_388(Local_30.f_2, 4096))
	{
		if (!func_1879())
		{
			return false;
		}
	}
	if (!func_388(Local_30.f_2, 2))
	{
		if (!is_ped_injured(Global_35))
		{
			if (!is_ped_injured(Local_30.f_158))
			{
				if (func_1879() || func_388(Local_30.f_2, 262144))
				{
					if (!func_1273(Global_35, Local_30.f_158, 0))
					{
						func_218(Local_30.f_168[1]);
						func_414(&(Local_30.f_2), 2);
					}
				}
			}
		}
	}
	else if (func_912(Local_30.f_168[1]) >= 1f)
	{
		if (_0xa2b1c7ef759a63ce() >= 1f)
		{
			if (!func_1403())
			{
				return true;
			}
		}
	}
	return false;
}

int func_1295()
{
	iVar0 = func_1817(1);
	iVar1 = 0;
	if (iVar0 < 1500)
	{
		iVar1 = (1500 - iVar0);
	}
	return iVar1;
}

void func_1296(var uParam0, int iParam1)
{
	*vVar7[0] = { -367.8438f, 760.9066f, 114.7828f };
	*vVar7[1] = { -372.485f, 757.4346f, 114.561f };
	*vVar7[2] = { -377.6237f, 756.7433f, 114.3814f };
	*vVar7[3] = { -381.5943f, 759.3199f, 114.5218f };
	*vVar7[4] = { -385.8319f, 756.9172f, 114.8219f };
	iVar23 = func_1842(&uVar1, iParam1);
	if (iVar23 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar23)
		{
			if (does_entity_exist(&(uVar1[iVar0])))
			{
				if (!func_1843(uParam0, &(uVar1[iVar0])))
				{
					func_903(&(uVar1[iVar0]), *vVar7[iVar0], 0f, 2, 1073741824);
				}
			}
			iVar0++;
		}
	}
}

void func_1297(var uParam0)
{
	*vVar5[0] = { -386.8766f, 763.7363f, 114.8323f };
	*vVar5[1] = { -389.837f, 760.5339f, 115.1659f };
	*vVar5[2] = { -392.3673f, 756.093f, 114.5579f };
	iVar15 = func_1880(&uVar1, uParam0);
	if (iVar15 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar15)
		{
			if (does_entity_exist(&(uVar1[iVar0])))
			{
				func_903(&(uVar1[iVar0]), *vVar5[iVar0], 0f, 2, 1073741824);
			}
			iVar0++;
		}
	}
}

void func_1298(var uParam0)
{
	if (!func_388(Local_30.f_2, 1))
	{
		if (!is_ped_injured(&(Local_30.f_143[0])))
		{
			set_ped_max_move_blend_ratio(&(Local_30.f_143[0]), 1.75f);
		}
		if (!is_ped_injured(Local_30.f_143[0]->f_9))
		{
			set_ped_max_move_blend_ratio(Local_30.f_143[0]->f_9, 1.75f);
		}
		bVar0 = func_1322(uParam0, 178);
		bVar1 = func_1323(uParam0, "RH1_HOSEA_FLW");
		if ((!bVar0 || !bVar1) && !func_1651(Global_35, 1775.903f, 1255.647f, 189.6069f, 10f, 1, 1))
		{
			if (func_388(Local_30.f_2, 128))
			{
				func_1301(&(Local_30.f_2), 128);
			}
			return;
		}
		if (!func_388(Local_30.f_2, 128))
		{
			func_414(&(Local_30.f_2), 128);
		}
		func_1324(&(Local_30.f_143[0]), 30, 195);
		if (func_1373(-364.3158f, 787.4852f, 115.1776f, 1, 0, -1, 4, 1071644672, 0))
		{
			func_414(&(Local_30.f_2), 1);
			Local_30.f_143[0]->f_11 = 0;
		}
	}
	else if (!func_388(Local_30.f_2, 262144))
	{
		if (!func_1879())
		{
			if (func_1252(Global_35, -364.3158f, 787.4852f, 115.1776f, 1) > 3f)
			{
				if (is_ped_on_mount(Global_35))
				{
					func_1881(Global_35, -364.3158f, 787.4852f, 115.1776f, 0, 35f, 25f, 1097859072, 1084227584, 1, 1, 1, 0);
				}
			}
		}
		else if (!func_388(Local_30.f_2, 262144))
		{
			func_414(&(Local_30.f_2), 262144);
		}
	}
	else if (func_1273(Global_35, Local_30.f_158, 0))
	{
		if (!func_388(Local_30.f_2, 32768))
		{
			func_414(&(Local_30.f_2), 32768);
		}
		if (func_1882(Global_35, &(Local_30.f_341), 64, 256, 0, 1084227584, 100, 0, 0))
		{
		}
	}
	else if (func_1879())
	{
		if (!func_388(Local_30.f_2, 32768))
		{
			func_414(&(Local_30.f_2), 32768);
		}
	}
	if (func_388(Local_30.f_2, 32768))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
}

bool func_1299(int iParam0)
{
	return !func_437(iParam0, 1);
}

void func_1300()
{
	iVar0 = 0;
	while (iVar0 < Global_1914319->f_3[9]->f_408)
	{
		iVar1 = &Global_1914319->f_3[9]->f_317[iVar0];
		if (iVar1 == 1696121221)
		{
			func_1883(iVar1, 0, -1f, 1, 1, 0, 0, 0);
		}
		else if (iVar1 == 1132010214)
		{
			func_1883(iVar1, 0, 1f, 1, 1, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_1301(int iParam0, int iParam1)
{
	func_1884(iParam0, iParam1);
}

void func_1302(var uParam0, int iParam1)
{
	func_742(&(uParam0->f_7375), iParam1);
}

void func_1303()
{
	if (func_1885())
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = func_1886();
	}
	if (iVar0 != -1 && func_1521(1))
	{
		func_1525(1, iVar0);
		func_1887(iVar0, 2);
		func_1522(1);
		func_1888(&(Global_1914319->f_17042), iVar0, func_213(iVar0));
	}
	if (does_entity_exist(Local_30.f_166))
	{
		iVar1 = func_256(Local_30.f_166);
		if (iVar1 == -1)
		{
			if (!func_1521(1))
			{
				func_1889(Local_30.f_166, 1, 0);
			}
		}
		else if (!func_1521(1) && iVar1 == 6)
		{
			func_1525(iVar1, 1);
			func_1522(6);
		}
	}
}

void func_1304(var uParam0)
{
	if (does_entity_exist(Local_30.f_162))
	{
		uVar0 = Local_30.f_162;
		delete_entity(&uVar0);
	}
	if (does_entity_exist(Local_30.f_163))
	{
		uVar0 = Local_30.f_163;
		delete_entity(&uVar0);
	}
	if (does_entity_exist(Local_30.f_158))
	{
		func_1264(uParam0, Local_30.f_158);
	}
}

void func_1305(var uParam0)
{
	switch (Local_30.f_1)
	{
		case 0:
			func_218(Local_30.f_168[0]);
			Local_30.f_1++;
			break;
		case 1:
			if (func_1269(uParam0) == 1)
			{
				if (!func_1403())
				{
					fVar0 = func_1890();
					if (fVar0 > 300f)
					{
						sVar1 = "RH1_DECENT_HRSE";
					}
					else if (fVar0 > 180f)
					{
						sVar1 = "RH1_AVERGE_HRSE";
					}
					else if (fVar0 > 140f)
					{
						sVar1 = "RH1_POOR_HRSE";
					}
					if (func_1857(uParam0, sVar1, 0))
					{
						func_218(Local_30.f_168[0]);
						Local_30.f_1++;
					}
				}
			}
			break;
		case 2:
			if (!func_1403())
			{
				func_414(&(Local_30.f_2), 1);
				Local_30.f_1++;
			}
			break;
	}
}

int func_1306()
{
	if (Global_40.f_1095 <= -1 || Global_40.f_1095 >= 7)
	{
		Global_40.f_1095 = 0;
	}
	return Global_40.f_1095;
}

void func_1307()
{
}

int func_1308(int iParam0)
{
	if (!func_1891(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_1309(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1891(iParam0))
	{
		return;
	}
	if (!func_1892(iParam0, 1))
	{
		return;
	}
	if (!func_1892(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_1893(iParam0)) && func_1894(iParam0))
	{
		return;
	}
	func_1895(iParam0, 1);
	func_1896(iParam0);
	if (func_1898(func_1897(iParam0)))
	{
		iVar0 = func_1308(iParam0);
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
		func_1895(iParam0, 16);
	}
	if (func_1892(iParam0, 128) && !bParam3)
	{
		func_1899(iParam0, 0);
	}
}

void func_1310(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			func_1264(uParam0, Global_35);
			func_1264(uParam0, Local_30.f_158);
			func_1264(uParam0, Local_30.f_164);
			func_1264(uParam0, Local_30.f_162);
			func_1264(uParam0, Local_30.f_163);
			func_1264(uParam0, Local_30.f_231);
			func_1264(uParam0, Local_30.f_233);
			func_1264(uParam0, Local_30.f_232);
			func_150(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_150(uParam0, Local_30.f_158, "Horse_01^1", 0, 0, 0, 0);
			set_entity_visible(Local_30.f_162, true);
			func_150(uParam0, Local_30.f_162, "RCSP_HUNTING1_MALES_01", 0, 0, 0, 0);
			set_entity_visible(Local_30.f_163, true);
			func_150(uParam0, Local_30.f_163, "RCSP_HUNTING1_MALES_01^1", 0, 0, 0, 0);
			func_420(uParam0, Local_30.f_231, "p_brushHorse02x", 0, 0, 0, 0);
			set_entity_visible(Local_30.f_163, true);
			func_420(uParam0, Local_30.f_233, "p_chair02x", 0, 0, 0, 0);
			func_420(uParam0, Local_30.f_232, "p_gate_horse01a", 0, 0, 0, 0);
			break;
		case 2:
			func_1264(uParam0, Local_30.f_158);
			func_1264(uParam0, func_171());
			func_1264(uParam0, func_1254());
			func_150(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_150(uParam0, func_171(), "HoseaMatthews", 0, 0, 0, 0);
			func_150(uParam0, Local_30.f_158, "Horse_01", 0, 0, 0, 0);
			func_150(uParam0, func_1254(), "Horse_01^1", 0, 0, 0, 0);
			func_420(uParam0, Local_30.f_246, "p_stoolfolding01x^1", 0, 0, 0, 0);
			func_420(uParam0, Local_30.f_237, "p_boiler01x", 0, 0, 0, 0);
			if (does_entity_exist(&(Global_43619[0])))
			{
				func_420(uParam0, &(Global_43619[0]), &(Global_43619[0]->f_1), 0, 0, 0, 0);
			}
			if (does_entity_exist(&(Global_43619[1])))
			{
				func_420(uParam0, &(Global_43619[1]), &(Global_43619[1]->f_1), 0, 0, 0, 0);
			}
			if (does_entity_exist(&(Global_43619[2])))
			{
				func_420(uParam0, &(Global_43619[2]), &(Global_43619[2]->f_1), 0, 0, 0, 0);
			}
			if (does_entity_exist(&(Global_43619[3])))
			{
				func_420(uParam0, &(Global_43619[3]), &(Global_43619[3]->f_1), 0, 0, 0, 0);
			}
			func_420(uParam0, Local_30.f_239, "p_can10x", 0, 0, 0, 0);
			if (does_entity_exist(Local_30.f_240))
			{
				func_420(uParam0, Local_30.f_240, "p_cookGrate01x", 0, 0, 0, 0);
			}
			func_420(uParam0, Local_30.f_241, "p_cs_duckmeat01x", 0, 0, 0, 0);
			func_420(uParam0, Local_30.f_243, "p_mugCoffee01x", 0, 0, 0, 0);
			func_420(uParam0, Local_30.f_244, "p_mugCoffee01x^1", 0, 0, 0, 0);
			func_420(uParam0, Local_30.f_242, "p_package03x", 0, 0, 0, 0);
			break;
		case 3:
			func_150(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_150(uParam0, func_171(), "HoseaMatthews", 0, 0, 0, 0);
			func_150(uParam0, Local_30.f_158, "Horse_01", 0, 0, 0, 0);
			func_150(uParam0, func_1254(), "Horse_01^1", 0, 0, 0, 0);
			if (has_ped_got_weapon(func_171(), -506285289, 0, false))
			{
				set_current_ped_weapon(func_171(), -506285289, true, 0, false, false);
				func_1264(uParam0, get_current_ped_weapon_entity_index(func_171(), 0));
				func_1900(uParam0, func_171(), 0, "w_rifle_rollingBlock01", 0, 0);
			}
			break;
		case 5:
			func_150(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_150(uParam0, func_171(), "HoseaMatthews", 0, 0, 0, 0);
			func_150(uParam0, func_181(), "A_C_BEAR_01", 0, 0, 0, 0);
			func_1264(uParam0, get_current_ped_weapon_entity_index(func_171(), 0));
			if (has_ped_got_weapon(func_171(), -506285289, 0, false))
			{
				set_current_ped_weapon(func_171(), -506285289, true, 0, false, false);
				func_1900(uParam0, func_171(), 0, "w_rifle_boltaction01", 0, 0);
			}
			break;
		case 4:
			func_1264(uParam0, func_171());
			func_1264(uParam0, func_1254());
			func_1264(uParam0, get_current_ped_weapon_entity_index(func_171(), 0));
			func_150(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_150(uParam0, func_171(), "HoseaMatthews", 0, 0, 0, 0);
			func_150(uParam0, func_1254(), "Horse_01", 0, 0, 0, 0);
			break;
	}
}

void func_1311()
{
}

void func_1312(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_591(43))
		{
			return;
		}
	}
	iVar0 = func_1528(iParam0);
	if (func_1901(iVar0) || func_1902(iVar0))
	{
		return;
	}
	iVar1 = func_1036(iParam0);
	if (iVar1 >= func_1903(iVar0))
	{
		return;
	}
	if (func_1904(iParam0, iParam1))
	{
		return;
	}
	if (func_1905(iParam0, iParam1))
	{
		return;
	}
	fVar2 = func_1906(iParam0, iParam1);
	fVar3 = func_1907(iParam1);
	fVar3 = (fVar3 * (1f + Global_40.f_11095.f_68));
	switch (iParam1)
	{
		case 1:
			iVar4 = func_213(iParam0);
			if (func_1908(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			Global_1900383->f_317.f_2[iParam0]->f_2 = (Global_1900383->f_317.f_2[iParam0]->f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (func_1909())
			{
				fVar3 = (fVar3 * 2f);
			}
			Global_1900383->f_317.f_2[iParam0]->f_2 = (Global_1900383->f_317.f_2[iParam0]->f_2 + fVar3);
			break;
		case 4:
			Global_1900383->f_317.f_2[iParam0]->f_4 = (Global_1900383->f_317.f_2[iParam0]->f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = func_1674(iParam0);
				fVar6 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
				fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			func_1910(iParam1, fVar3);
			break;
	}
	func_1911(iParam0, fVar3);
	func_1912(iParam0, iParam1, (fVar2 + fVar3));
}

void func_1313(var uParam0)
{
	switch (func_1850(uParam0))
	{
		case 0:
			if (func_912(Local_30.f_168[1]) > 5f)
			{
				if (is_screen_faded_in())
				{
					if (!func_1273(Global_35, Local_30.f_158, 0))
					{
						func_1265(7);
						func_1438(uParam0, "RH1_O_MNT", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					}
					func_218(Local_30.f_168[1]);
					func_134(uParam0, -1);
				}
			}
			else if (func_1273(Global_35, Local_30.f_158, 0))
			{
				func_218(Local_30.f_168[1]);
				func_134(uParam0, -1);
			}
			break;
		case 1:
			if (func_1273(Global_35, Local_30.f_158, 0))
			{
				if (func_1273(func_171(), func_1254(), 0))
				{
					func_59(7);
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1438(uParam0, "RH1_HOSEA_FLW", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
					func_134(uParam0, -1);
				}
			}
			break;
		case 2:
			if (func_1273(Global_35, Local_30.f_158, 0))
			{
				if (func_1273(func_171(), func_1254(), 0))
				{
					func_1438(uParam0, "RH1_HOSEA_FLW", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
					func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
					func_134(uParam0, 3);
				}
			}
			break;
		case 3:
			if (!func_212())
			{
				func_708("RH1_TUT_FEED", 15000, 0, 0, 0, 1);
				func_134(uParam0, -1);
			}
			break;
	}
}

void func_1314(var uParam0)
{
	func_1869(func_171(), "RH1_CAMP_RIDE1", 1, 1);
	switch (Local_30.f_1)
	{
		case 0:
			func_218(Local_30.f_168[0]);
			Local_30.f_1++;
			break;
		case 1:
			if (is_screen_faded_in())
			{
				if (!func_1403())
				{
					iVar0 = func_1529(0);
					if (iVar0 == 648301150)
					{
						sVar1 = "RH1_POOR_HRSE";
					}
					else if (iVar0 == 1583029039)
					{
						sVar1 = "RH1_AVERGE_HRSE";
					}
					else if (iVar0 == 697143532)
					{
						sVar1 = "RH1_DECENT_HRSE";
					}
					else if (iVar0 == 2010625508)
					{
						sVar1 = "RH1_DECENT_HRSE";
					}
					else if (iVar0 == 153881023)
					{
						sVar1 = "RH1_DECENT_HRSE";
					}
					else
					{
						sVar1 = "RH1_POOR_HRSE";
					}
					if (func_1857(uParam0, sVar1, 0))
					{
						func_218(Local_30.f_168[0]);
						Local_30.f_1++;
					}
				}
			}
			break;
		case 2:
			if (is_screen_faded_in())
			{
				if (!func_1403())
				{
					func_218(Local_30.f_168[0]);
					Local_30.f_1++;
				}
			}
			break;
		case 3:
			if (func_1273(Global_35, Local_30.f_158, 0))
			{
				if (func_912(Local_30.f_168[0]) > 1.5f)
				{
					if (func_1273(func_171(), func_1254(), 0))
					{
						if (!func_1403())
						{
							if (func_1857(uParam0, "RH1_CAMP_RIDE1", 0))
							{
								func_218(Local_30.f_168[0]);
								Local_30.f_1++;
							}
						}
					}
				}
				else if (func_912(Local_30.f_168[0]) > 1.5f)
				{
					if (!func_388(Local_30.f_2, 1))
					{
						func_218(Local_30.f_168[0]);
						func_414(&(Local_30.f_2), 1);
					}
				}
			}
			else if (func_912(Local_30.f_168[0]) > 10f)
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_HSHOP_MOUNT", 0))
					{
						func_218(Local_30.f_168[0]);
					}
				}
			}
			break;
		case 4:
			if (func_1273(Global_35, Local_30.f_158, 0))
			{
				if (func_1273(func_171(), func_1254(), 0))
				{
					if (!func_1403())
					{
						func_218(Local_30.f_168[0]);
						Local_30.f_1++;
					}
				}
			}
			break;
		case 5:
			if (func_912(Local_30.f_168[0]) > 1.5f)
			{
				if (func_1273(Global_35, Local_30.f_158, 0))
				{
					if (func_1273(func_171(), func_1254(), 0))
					{
						if (!func_1403())
						{
							if (func_1857(uParam0, "RH1_CAMP_RIDE2", 0))
							{
								func_218(Local_30.f_168[0]);
								Local_30.f_1++;
							}
						}
					}
				}
			}
			break;
		case 6:
			if (func_1913())
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_RAB_CTH", 0))
					{
						func_414(&(Local_30.f_40), 1024);
						Local_30.f_1++;
					}
				}
			}
			break;
	}
}

void func_1315()
{
	if (is_ped_on_mount(Global_35))
	{
		func_1881(Global_35, 1773.727f, 1257.989f, 189.4598f, 0, 35f, 25f, 5f, 1f, 1, 1, 1, 0);
	}
}

int func_1316(var uParam0)
{
	func_1914();
	switch (Local_30.f_48)
	{
		case 0:
			if (func_1915())
			{
				if (!does_entity_exist(&(Local_30.f_49[0])))
				{
					Local_30.f_49[0] = func_1916(0);
				}
				else if (!does_entity_exist(&(Local_30.f_49[1])))
				{
					Local_30.f_49[1] = func_1916(1);
				}
				else if (!does_entity_exist(&(Local_30.f_49[2])))
				{
					Local_30.f_49[2] = func_1916(2);
				}
				if ((does_entity_exist(&(Local_30.f_49[0])) && does_entity_exist(&(Local_30.f_49[1]))) && does_entity_exist(&(Local_30.f_49[2])))
				{
					if (func_33(uParam0) == iLocal_20)
					{
						Local_30.f_42 = func_573(1970477904, 0, 0);
						func_1917(1);
						func_134(uParam0, 20);
					}
				}
			}
			break;
		case 1:
			if (func_1343())
			{
				func_134(uParam0, 22);
				func_1917(3);
				func_1918();
			}
			else if (func_1919())
			{
				func_134(uParam0, 21);
				func_1917(2);
			}
			break;
		case 2:
			if (func_1343())
			{
				func_1918();
				func_134(uParam0, 22);
				func_1917(3);
			}
			else if (func_1920())
			{
				func_1917(1);
				func_134(uParam0, 20);
			}
			break;
		case 3:
			if (func_1921())
			{
				bVar0 = true;
			}
			if (func_1922())
			{
				bVar0 = true;
			}
			if (func_1923())
			{
				if (func_1924())
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				func_1925();
				func_1917(5);
			}
			break;
		case 5:
			func_1926(uParam0);
			break;
		case 6:
			return 1;
	}
	func_1927();
	func_1928();
	return 0;
}

void func_1317(var uParam0)
{
	if (!func_388(Local_30.f_2, 2))
	{
		fVar0 = 2.5f;
		if (is_waypoint_playback_going_on_for_ped(func_171(), 0))
		{
			if (func_1870(func_171(), 0) > 225)
			{
				fVar0 = 1.75f;
			}
		}
		if (func_902(Global_35, &(Local_30.f_143[0]), 1, 1) <= 7f)
		{
			set_ped_max_move_blend_ratio(Global_35, fVar0);
			if (!is_ped_injured(Local_30.f_158))
			{
				set_ped_max_move_blend_ratio(Local_30.f_158, fVar0);
			}
		}
		else
		{
			fVar0 = 1.75f;
		}
		if (!is_ped_injured(&(Local_30.f_143[0])))
		{
			set_ped_max_move_blend_ratio(&(Local_30.f_143[0]), fVar0);
		}
		if (!is_ped_injured(Local_30.f_143[0]->f_9))
		{
			set_ped_max_move_blend_ratio(Local_30.f_143[0]->f_9, fVar0);
		}
		bVar1 = func_1322(uParam0, -1);
		bVar2 = func_1323(uParam0, "RH1_HOSEA_FLW");
		if ((!bVar1 || !bVar2) && !func_1651(Global_35, 1775.903f, 1255.647f, 189.6069f, 10f, 1, 1))
		{
			return;
		}
		func_1324(&(Local_30.f_143[0]), 30, 195);
		if (func_1373(Local_30.f_129, 0, 0, -1, 4, fVar0, 0))
		{
			func_414(&(Local_30.f_2), 2);
			Local_30.f_143[0]->f_11 = 0;
		}
	}
}

bool func_1318(var uParam0)
{
	sVar0 = "Script@Story@Hunting1@ride_to_camping_spot";
	bVar1 = false;
	if (Local_30.f_9 > 2 && Local_30.f_9 < 7)
	{
		_0x702b75dc9d3ede56(true);
		func_1929();
	}
	func_1930(uParam0, Local_30.f_9);
	switch (Local_30.f_9)
	{
		case 0:
			set_player_control(player_id(), false, 0, false);
			_0x1b3c2d961f5fc0e1(sVar0);
			if (!func_26(Local_30.f_168[3]))
			{
				func_218(Local_30.f_168[3]);
			}
			_0x5e3ccf03995388b5(1336227632, 111.4f, 1108.5f, 180.5f);
			prefetch_srl("script@cme@Hunting1_CME_CumberlandForest1_srl");
			_0xae00387e53b1e9fc();
			func_1283(func_411(1));
			if (_0xdd0b7c5ae58f721d(&Local_774) && !_0x927b810e43e99932(&Local_774))
			{
				func_414(&(Local_30.f_2), 8192);
				_0xb8b207c34285e978(&Local_774);
			}
			if (func_1931("RH1_CAMP_RIDE1"))
			{
				func_235(1, 1, 0);
			}
			if (func_1931("RH1_CAMP_RIDE2"))
			{
				func_235(1, 1, 0);
			}
			Local_30.f_9++;
			break;
		case 1:
			if (!is_srl_loaded())
			{
				bVar1 = true;
			}
			if (!_0xdd0b7c5ae58f721d("Script@Story@Hunting1@ride_to_camping_spot"))
			{
			}
			if (_0xa2b1c7ef759a63ce() < 1f)
			{
				bVar1 = true;
			}
			if (!bVar1)
			{
				func_218(Local_30.f_168[3]);
				_set_weather_type(-173507739, true, true, false, 0f, false);
				Global_16 = 1;
				func_60(1);
				_0xbc016635d6a73b31(sVar0, "1_CumberlandForest_1", 5);
				set_player_control(player_id(), false, 0, false);
				func_1932(Global_35, Local_30.f_158, 76.9572f, 1090.182f, 178.4957f, 284.1515f, -530524, 1);
				func_1932(func_171(), func_1254(), 88.0693f, 1092.453f, 179.6497f, 283.5492f, -530524, 1);
				task_follow_waypoint_recording(func_171(), Local_30.f_142, 0, 9736, -1, 0, 0, -1);
				waypoint_recording_get_closest_waypoint(Local_30.f_142, func_1933(player_id()), &(Local_30.f_6));
				fVar2 = get_distance_between_coords(76.9572f, 1090.182f, 178.4957f, 88.0693f, 1092.453f, 179.6497f, true);
				fVar2 = (fVar2 * -0.9f);
				task_follow_entity_along_waypoint_recording_at_offset(Global_35, func_171(), Local_30.f_142, -0.5f, fVar2, Local_30.f_6, 25864, -1, 0);
				_0x2208438012482a1a(Global_35, true, false);
				end_srl();
				prefetch_srl("script@cme@Hunting1_CME_CumberlandForest2_srl");
				_0xae00387e53b1e9fc();
				_0x5a8b01199c3e79c3();
				_0x513f8aa5bf2f17cf(74f, 1091.2f, 179.6f, 20f, 0);
				func_1283(func_411(2));
				Local_30.f_9++;
			}
			break;
		case 2:
			bVar9 = is_srl_loaded();
			if (!bVar9)
			{
			}
			if (!_0x0909f71b5c070797())
			{
				bVar1 = true;
			}
			if (!_0xdd0b7c5ae58f721d(sVar0))
			{
				bVar1 = true;
			}
			iVar7 = _0xea113bf9b0c0c5d7(sVar0, "1_CumberlandForest_1", 5);
			iVar8 = _0x465f04f68ad38197(sVar0, "1_CumberlandForest_1", 5);
			if (iVar7 == 0)
			{
				iVar7 = 4000;
			}
			iVar3 = (iVar7 - func_219(Local_30.f_168[3]));
			if (!_0xffe9c53deea3db0b(iVar3, 213933346, 108.1f, 1144.1f, 203.8f, bVar9, (iVar8 - func_219(Local_30.f_168[3]))))
			{
				bVar1 = true;
			}
			if (!bVar1)
			{
				func_218(Local_30.f_168[3]);
				_0xa54d643d0773eb65(sVar0, "1_CumberlandForest_1", 5);
				_0xbc016635d6a73b31(sVar0, "2_CumberlandForest_2", 5);
				end_srl();
				prefetch_srl("script@cme@Hunting1_CME_SignPost1_srl");
				_0xae00387e53b1e9fc();
				_0x5a8b01199c3e79c3();
				Local_30.f_9++;
			}
			break;
		case 3:
			bVar9 = is_srl_loaded();
			if (!bVar9)
			{
			}
			if (!_0xdd0b7c5ae58f721d(sVar0))
			{
				bVar1 = true;
			}
			iVar7 = _0xea113bf9b0c0c5d7(sVar0, "2_CumberlandForest_2", 5);
			iVar8 = _0x465f04f68ad38197(sVar0, "2_CumberlandForest_2", 5);
			if (iVar7 == 0)
			{
				iVar7 = 13000;
			}
			iVar3 = (iVar7 - func_219(Local_30.f_168[3]));
			if (!_0xffe9c53deea3db0b(iVar3, 639801163, 668f, 1415.4f, 181.5f, bVar9, (iVar8 - func_219(Local_30.f_168[3]))))
			{
				bVar1 = true;
			}
			if (!bVar1)
			{
				_set_weather_type(-173507739, true, true, false, 0f, false);
				func_218(Local_30.f_168[3]);
				_0xa54d643d0773eb65(sVar0, "2_CumberlandForest_2", 5);
				_0xbc016635d6a73b31(sVar0, "3_SignPost_1", 5);
				task_follow_waypoint_recording(func_171(), Local_30.f_142, 0, 4208136, -1, 0, 0, -1);
				waypoint_recording_get_closest_waypoint(Local_30.f_142, func_1933(player_id()), &(Local_30.f_6));
				task_follow_entity_along_waypoint_recording_at_offset(Global_35, func_171(), Local_30.f_142, 0.5f, -10f, Local_30.f_6, 4224264, -1, 0);
				_set_entity_coords_and_heading(Local_30.f_158, 666.4928f, 1409.523f, 180.5142f, 320.2058f, true, false, true);
				_set_entity_coords_and_heading(func_1254(), 672.0754f, 1414.15f, 180.4187f, 305.5297f, true, false, true);
				end_srl();
				prefetch_srl("script@cme@Hunting1_CME_LeavingCumberland_srl");
				_0xae00387e53b1e9fc();
				_0x513f8aa5bf2f17cf(1227.7f, 1225f, 154.9f, 20f, 0);
				Local_30.f_9++;
			}
			break;
		case 4:
			bVar9 = is_srl_loaded();
			if (!bVar9)
			{
			}
			if (!_0x0909f71b5c070797())
			{
				bVar1 = true;
			}
			if (!_0xdd0b7c5ae58f721d(sVar0))
			{
				bVar1 = true;
			}
			func_1934();
			iVar7 = _0xea113bf9b0c0c5d7(sVar0, "3_SignPost_1", 5);
			iVar8 = _0x465f04f68ad38197(sVar0, "3_SignPost_1", 5);
			if (iVar7 == 0)
			{
				iVar7 = 8000;
			}
			iVar3 = (iVar7 - func_219(Local_30.f_168[3]));
			if (!_0xffe9c53deea3db0b(iVar3, -315125468, 746.9f, 1301.5f, 173f, bVar9, (iVar8 - func_219(Local_30.f_168[3]))))
			{
				bVar1 = true;
			}
			if (!bVar1)
			{
				func_218(Local_30.f_168[3]);
				_set_far_shadows_suppressed(false);
				_0xa54d643d0773eb65(sVar0, "3_SignPost_1", 5);
				_0xbc016635d6a73b31(sVar0, "4_LeavingCumberland_1", 5);
				_set_entity_coords_and_heading(Local_30.f_158, 753.5082f, 1387.4f, 167.579f, 232.6861f, true, false, true);
				_set_entity_coords_and_heading(func_1254(), 758.1647f, 1384.078f, 166.012f, 218.4355f, true, false, true);
				task_follow_waypoint_recording(func_171(), Local_30.f_142, 0, 9736, -1, 0, 0, -1);
				waypoint_recording_get_closest_waypoint(Local_30.f_142, func_1933(player_id()), &(Local_30.f_6));
				fVar2 = get_distance_between_coords(753.5082f, 1387.4f, 167.579f, 758.1647f, 1384.078f, 166.012f, true);
				fVar2 = (fVar2 * -1.2f);
				task_follow_entity_along_waypoint_recording_at_offset(Global_35, func_171(), Local_30.f_142, -0.5f, fVar2, Local_30.f_6, 25864, -1, 0);
				_0x2208438012482a1a(Global_35, true, false);
				end_srl();
				prefetch_srl("script@cme@Hunting1_CME_Moonstone_srl");
				_0xae00387e53b1e9fc();
				_0x5a8b01199c3e79c3();
				_0x513f8aa5bf2f17cf(1238.8f, 1227.9f, 152.2f, 20f, 0);
				Local_30.f_9++;
			}
			break;
		case 5:
			bVar9 = is_srl_loaded();
			if (!bVar9)
			{
			}
			if (!_0x0909f71b5c070797())
			{
				bVar1 = true;
			}
			if (!_0xdd0b7c5ae58f721d(sVar0))
			{
				bVar1 = true;
			}
			iVar7 = _0xea113bf9b0c0c5d7(sVar0, "4_LeavingCumberland_1", 5);
			iVar8 = _0x465f04f68ad38197(sVar0, "4_LeavingCumberland_1", 5);
			if (iVar7 == 0)
			{
				iVar7 = 5500;
			}
			iVar3 = (iVar7 - func_219(Local_30.f_168[3]));
			if (!_0xffe9c53deea3db0b(iVar3, 1977425107, 1292.9f, 1178.6f, 149.6f, bVar9, (iVar8 - func_219(Local_30.f_168[3]))))
			{
				bVar1 = true;
			}
			if (!bVar1)
			{
				func_218(Local_30.f_168[3]);
				_0xa54d643d0773eb65(sVar0, "4_LeavingCumberland_1", 5);
				_0xbc016635d6a73b31(sVar0, "5_Moonstone_1", 5);
				func_1932(Global_35, Local_30.f_158, 1227.7f, 1225f, 153.1f, -75.3f, -530524, 1);
				func_1932(func_171(), func_1254(), 1238.8f, 1227.9f, 150.9f, -75.3f, -530524, 1);
				task_follow_waypoint_recording(func_171(), Local_30.f_142, 384, 9728, -1, 0, 0, -1);
				waypoint_recording_get_closest_waypoint(Local_30.f_142, func_1933(player_id()), &(Local_30.f_6));
				fVar2 = get_distance_between_coords(1227.7f, 1225f, 153.1f, 1238.8f, 1227.9f, 150.9f, true);
				fVar2 = (fVar2 * -1f);
				task_follow_entity_along_waypoint_recording_at_offset(Global_35, func_171(), Local_30.f_142, -0.5f, fVar2, Local_30.f_6, 25864, -1, 0);
				_0x2208438012482a1a(Global_35, true, false);
				end_srl();
				prefetch_srl("script@cme@Hunting1_CME_ThreeSisters1_srl");
				_0xae00387e53b1e9fc();
				StringCopy(&cVar4, "RH1_LANDMARK", 24);
				func_1857(uParam0, &cVar4, 0);
				_0x5a8b01199c3e79c3();
				Local_30.f_9++;
			}
			break;
		case 6:
			bVar9 = is_srl_loaded();
			if (!bVar9)
			{
			}
			if (!_0xdd0b7c5ae58f721d(sVar0))
			{
				bVar1 = true;
			}
			iVar7 = _0xea113bf9b0c0c5d7(sVar0, "5_Moonstone_1", 5);
			iVar8 = _0x465f04f68ad38197(sVar0, "5_Moonstone_1", 5);
			if (iVar7 == 0)
			{
				iVar7 = 12500;
			}
			iVar3 = (iVar7 - func_219(Local_30.f_168[3]));
			if (!_0xffe9c53deea3db0b(iVar3, -254096064, 1756.1f, 1128.8f, 249f, bVar9, (iVar8 - func_219(Local_30.f_168[3]))))
			{
				bVar1 = true;
			}
			if (!bVar1)
			{
				_set_weather_type_transition(-173507739, 1500834021, 0.25f, 1);
				set_player_control(player_id(), false, 0, false);
				func_218(Local_30.f_168[3]);
				_0xa54d643d0773eb65(sVar0, "5_Moonstone_1", 5);
				_0xbc016635d6a73b31(sVar0, "6_ThreeSisters_1", 5);
				func_1932(Global_35, Local_30.f_158, 1653.6f, 1153.3f, 220.6f, -24.4f, -668482597, 1);
				func_1932(func_171(), func_1254(), 1657.2f, 1160.6f, 221.3f, -21.2f, -668482597, 1);
				task_follow_waypoint_recording(func_171(), Local_30.f_142, 0, 9736, -1, 0, 0, -1);
				waypoint_recording_get_closest_waypoint(Local_30.f_142, func_1933(player_id()), &(Local_30.f_6));
				fVar2 = get_distance_between_coords(1653.6f, 1153.3f, 220.6f, 1657.2f, 1160.6f, 221.3f, true);
				fVar2 = (fVar2 * -1.2f);
				task_follow_entity_along_waypoint_recording_at_offset(Global_35, func_171(), Local_30.f_142, -0.5f, fVar2, Local_30.f_6, 25864, -1, 0);
				_0x2208438012482a1a(Global_35, true, false);
				end_srl();
				prefetch_srl("script@cme@Hunting1_CME_ThreeSisters2_srl");
				_0xae00387e53b1e9fc();
				if (_0xdd0b7c5ae58f721d(&Local_790))
				{
				}
				Local_30.f_9++;
			}
			break;
		case 7:
			bVar9 = is_srl_loaded();
			if (!bVar9)
			{
			}
			if (!_0xdd0b7c5ae58f721d(sVar0))
			{
				bVar1 = true;
			}
			iVar7 = _0xea113bf9b0c0c5d7(sVar0, "6_ThreeSisters_1", 5);
			iVar8 = _0x465f04f68ad38197(sVar0, "6_ThreeSisters_1", 5);
			if (iVar7 == 0)
			{
				iVar7 = 6000;
			}
			if (!_0xffe9c53deea3db0b((iVar7 - func_219(Local_30.f_168[3])), 0, 16661.1f, 1171.6f, 226f, bVar9, (iVar8 - func_219(Local_30.f_168[3]))))
			{
				bVar1 = true;
			}
			if (!bVar1)
			{
				_0xa54d643d0773eb65(sVar0, "6_ThreeSisters_1", 5);
				end_srl();
				_0x43037abfe214a851();
				_set_weather_type_transition(-173507739, 1500834021, 0.45f, 1);
				func_218(Local_30.f_168[3]);
				StringCopy(&cVar4, "RH1_ARRIVELAKE", 24);
				func_1857(uParam0, &cVar4, 0);
				_0x0a5a4f1979abb40e(&Local_774);
				_0xb8b207c34285e978(&Local_790);
				_set_far_shadows_suppressed(true);
				Local_30.f_9++;
			}
			break;
		case 8:
			if (!func_1403())
			{
			}
			else if (func_388(Local_30.f_2, 8192))
			{
				_0x0a5a4f1979abb40e(&Local_790);
				func_1301(&(Local_30.f_2), 8192);
			}
			if (!bVar1)
			{
				func_218(Local_30.f_168[3]);
				Local_30.f_9++;
			}
			break;
		case 9:
			if (func_912(Local_30.f_168[3]) > 2f)
			{
				set_player_control(player_id(), true, 0, false);
				clear_ped_tasks(Global_35, 1, 0);
				Local_30.f_9++;
				Global_16 = 0;
				func_60(0);
				return true;
			}
			break;
		case 10:
			return true;
	}
	if (func_388(Local_30.f_2, 8192))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	return false;
}

void func_1319(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_469(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_469(uParam0))
		{
		}
	}
}

void func_1320(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_303(iParam2, 0, 100);
	if (func_1935(iParam1, &iVar0))
	{
		_set_attribute_core_value(iParam0, iVar0, iParam2);
	}
}

bool func_1321()
{
	if (func_388(Local_30.f_2, 1024))
	{
		return true;
	}
	if (!func_388(Local_30.f_2, 1024))
	{
		if (!is_ped_injured(func_171()))
		{
			if (is_waypoint_playback_going_on_for_ped(func_171(), 0))
			{
				iVar0 = get_ped_waypoint_progress(func_171());
				if (iVar0 >= 892)
				{
					func_414(&(Local_30.f_2), 1024);
					return true;
				}
			}
		}
	}
	return false;
}

int func_1322(var uParam0, int iParam1)
{
	switch (Local_30.f_226)
	{
		case 0:
			if (is_waypoint_playback_going_on_for_ped(func_171(), 0))
			{
				if (iParam1 > -1)
				{
					iVar1 = get_ped_waypoint_progress(func_171());
					if (iVar1 >= iParam1)
					{
						bVar0 = true;
					}
				}
			}
			if (func_902(Global_35, func_171(), 1, 1) > 30f && !bVar0)
			{
				if (is_waypoint_playback_going_on_for_ped(func_171(), 0))
				{
					if (!waypoint_playback_get_is_paused(func_171()))
					{
						waypoint_playback_pause(func_171(), 1, 0, 0);
					}
				}
				Local_30.f_226 = 1;
				if (func_1273(Global_35, Local_30.f_158, 0))
				{
					func_1438(uParam0, "RH1_HOSEA_FLW", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				}
				return 0;
			}
			break;
		case 1:
			if (func_902(Global_35, func_171(), 1, 1) > 60f)
			{
			}
			else if (func_902(Global_35, func_171(), 1, 1) < 20f)
			{
				if (func_1273(Global_35, Local_30.f_158, 0))
				{
					if (is_waypoint_playback_going_on_for_ped(func_171(), 0))
					{
						waypoint_playback_resume(func_171(), false, -1, 0);
					}
					func_1438(uParam0, "RH1_HOSEA_FLW", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					Local_30.f_226 = 0;
				}
			}
			return 0;
		case 2:
			return 0;
	}
	return 1;
}

int func_1323(var uParam0, char* sParam1)
{
	switch (Local_30.f_227)
	{
		case 0:
			if (!func_1273(Global_35, Local_30.f_158, 0))
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1438(uParam0, "RH1_O_MNT", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				if (func_1329(5))
				{
					func_1413(uParam0, func_171(), 1);
				}
				func_1265(7);
				Local_30.f_227 = 1;
				return 0;
			}
			break;
		case 1:
			if (func_1273(Global_35, Local_30.f_158, 0))
			{
				func_59(7);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1438(uParam0, sParam1, 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
				Local_30.f_227 = 0;
			}
			return 0;
	}
	return 1;
}

void func_1324(int iParam0, int iParam1, int iParam2)
{
	if (!func_983(iParam0, 0))
	{
		return;
	}
	if (Local_30.f_228 == 0)
	{
		return;
	}
	if (!is_ped_on_mount(iParam0))
	{
		_0x0c6b89876262a99d(player_id(), func_171());
		return;
	}
	iVar0 = func_1870(iParam0, 0);
	bVar1 = true;
	if (iVar0 < iParam1)
	{
		bVar1 = false;
	}
	if (iVar0 > iParam2)
	{
		bVar1 = false;
	}
	if (is_waypoint_playback_going_on_for_ped(iParam0, 0))
	{
		if (waypoint_playback_get_is_paused(iParam0))
		{
			waypoint_playback_resume(iParam0, true, -1, 0);
		}
	}
	if (!_0x2009f8ab7a5e9d6d(player_id()))
	{
		if (bVar1)
		{
			iVar2 = 3;
		}
		else
		{
			iVar2 = 2;
		}
		_0x0c6b89876262a99d(player_id(), func_171());
		_0xac22aa6df4d1c1de(player_id(), func_171(), -1082130432, -1082130432, iVar2, 2, 0);
	}
}

int func_1325(var uParam0, int iParam1, char* sParam2, char* sParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9)
{
	if (func_388(Local_30.f_2, 4))
	{
		return 1;
	}
	if ((!is_ped_injured(*iParam1) && !is_ped_injured(Global_35)) && is_player_playing(player_id()))
	{
		set_ped_reset_flag(*iParam1, 53, true);
		if (!func_388(Local_30.f_2, 8))
		{
			if (func_902(*iParam1, Global_35, 1, 1) <= 15f && !func_1936())
			{
				func_1937(*iParam1, func_318(5, 0), 15f, 0, 0, 0);
				func_414(&(Local_30.f_2), 8);
			}
		}
		else
		{
			if (func_902(*iParam1, Global_35, 1, 1) > 15f && !func_1938(player_id(), *iParam1))
			{
				bVar0 = true;
			}
			else if (func_1936())
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_1327(*iParam1, 0, 1, 0);
				if (func_10(Local_30.f_295))
				{
					func_11(&(Local_30.f_295), 1, 1);
				}
				if (func_10(Local_30.f_296))
				{
					func_11(&(Local_30.f_296), 1, 1);
				}
				func_1301(&(Local_30.f_2), 8);
			}
		}
		if (!func_388(Local_30.f_2, 4))
		{
			if (func_388(Local_30.f_2, 8))
			{
				if (func_1938(player_id(), *iParam1))
				{
					if (!func_10(Local_30.f_295))
					{
						Local_30.f_295 = func_1939(sParam2, -163964935, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						func_1940(Local_30.f_295, func_171(), 0, 1, -1);
					}
					if (!func_10(Local_30.f_296))
					{
						Local_30.f_296 = func_1939(sParam3, 648122183, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						func_1940(Local_30.f_296, func_171(), 0, 1, -1);
					}
				}
				else
				{
					if (func_10(Local_30.f_295))
					{
						func_11(&(Local_30.f_295), 1, 1);
					}
					if (func_10(Local_30.f_296))
					{
						func_11(&(Local_30.f_296), 1, 1);
					}
				}
				if (func_10(Local_30.f_295) && func_1941(Local_30.f_296, 0))
				{
					if (func_1942(Local_30.f_295, 1))
					{
						if (func_10(Local_30.f_295))
						{
							func_11(&(Local_30.f_295), 1, 1);
						}
						if (func_10(Local_30.f_296))
						{
							func_11(&(Local_30.f_296), 1, 1);
						}
						func_1327(*iParam1, 0, 1, 0);
						set_ped_reset_flag(*iParam1, 53, false);
						func_1857(uParam0, &cParam4, 0);
						func_1327(*iParam1, 0, 1, 0);
						_0x3946fc742ac305cd(player_id(), *iParam1, "ForcedILO", 0f, 0f, 0f, 0, 0);
						if (is_player_playing(player_id()))
						{
							_0xc67a4910425f11f1(player_id(), 0);
						}
						func_414(&(Local_30.f_2), 4);
						return 1;
					}
					if (func_1942(Local_30.f_296, 1))
					{
						if (func_10(Local_30.f_295))
						{
							func_11(&(Local_30.f_295), 1, 1);
						}
						if (func_10(Local_30.f_296))
						{
							func_11(&(Local_30.f_296), 1, 1);
						}
						func_1327(*iParam1, 0, 1, 0);
						set_ped_reset_flag(*iParam1, 53, false);
						func_1857(uParam0, &cParam7, 0);
						func_1327(*iParam1, 0, 1, 0);
						_0x3946fc742ac305cd(player_id(), *iParam1, "ForcedILO", 0f, 0f, 0f, 0, 0);
						if (is_player_playing(player_id()))
						{
							_0xc67a4910425f11f1(player_id(), 0);
						}
						func_414(&(Local_30.f_2), 4);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_1326()
{
	if (func_1321())
	{
		return true;
	}
	if (func_1373(Local_30.f_129, 0, 20f, -1, 4, 1071644672, 0))
	{
	}
	return false;
}

void func_1327(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			set_ped_config_flag(iVar0, 130, bParam1);
			set_ped_config_flag(iVar0, 315, bParam1);
			set_ped_config_flag(iVar0, 297, bParam3);
			set_ped_config_flag(iVar0, 317, false);
			set_ped_config_flag(iVar0, 359, false);
		}
		else if (is_entity_an_object(iParam0))
		{
			iVar1 = get_object_index_from_entity_index(iParam0);
			_0xa22712e8471aa08e(iVar1, 0, 0);
		}
		if (iParam2 == 1)
		{
			_0xe98d55c5983f2509(iParam0);
		}
	}
}

void func_1328()
{
	if (!func_388(Local_30.f_2, 16384))
	{
		if (!is_entity_in_volume(Global_35, &(Local_30.f_254[0]), true, 0) && !is_entity_in_volume(Local_30.f_158, &(Local_30.f_254[0]), true, 0))
		{
			if (!is_sphere_visible(-360.6667f, 788.1912f, 117.4936f, 4f))
			{
				iVar0 = 0;
				while (iVar0 < Global_1914319->f_3[9]->f_408)
				{
					iVar1 = &Global_1914319->f_3[9]->f_317[iVar0];
					func_1875(iVar1, 0f, 1);
					func_1876(iVar1, 1, 0);
					iVar0++;
				}
				func_414(&(Local_30.f_2), 16384);
			}
		}
	}
}

bool func_1329(int iParam0)
{
	iVar0 = func_1943(iParam0);
	if (func_979(&iVar0, 8))
	{
		return true;
	}
	return false;
}

int func_1330(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam1))
	{
		return iVar0;
	}
	bVar1 = func_1944(uParam0, iParam1);
	bVar2 = (is_entity_a_ped(iParam1) && func_1945(get_ped_index_from_entity_index(iParam1)));
	if (bVar2)
	{
		iVar3 = func_1946(get_ped_index_from_entity_index(iParam1));
	}
	if (bVar1)
	{
		func_1947(uParam0, iParam1, 128);
		if (bParam4)
		{
			func_1947(uParam0, iParam1, 1024);
		}
	}
	if (is_entity_a_ped(iParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(iParam1);
		if (bVar2)
		{
			func_1948(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_1944(uParam0, iParam1) && does_blip_exist(iVar0))
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
				iVar0 = _blip_add_for_entity(iParam3, iParam1);
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
		if (func_975(uParam0, iParam1, &iVar4))
		{
			func_1589(uParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1949(iVar3);
	}
	return iVar0;
}

Vector3 func_1331()
{
	return 1775.903f, 1255.647f, 189.6069f;
}

void func_1332(int iParam0)
{
	Global_1914296->f_22 = (Global_1914296->f_22 || iParam0);
}

void func_1333(int iParam0)
{
	if (!func_471(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

void func_1334(int iParam0)
{
	if (!func_1014(iParam0))
	{
		Global_1392040->f_1 = (Global_1392040->f_1 || iParam0);
	}
}

void func_1335()
{
	func_1333(536870912);
}

void func_1336(int iParam0)
{
	Global_36606 = { func_1815() };
	Global_36610 = { func_1815() };
	Global_36605 = iParam0;
}

void func_1337(var uParam0)
{
	switch (func_1850(uParam0))
	{
		case 0:
			func_218(Local_30.f_168[1]);
			func_1433(uParam0, "RH1_HOSEA_FLW", -1082130432, 0, 0, -1, -1, 0);
			func_134(uParam0, 1);
			break;
		case 1:
			if (func_388(Local_30.f_40, 8) && !func_1342())
			{
				func_134(uParam0, 20);
			}
			else if (func_1950())
			{
				if (!func_388(Local_30.f_40, 256))
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1438(uParam0, "RH1_CAMP_SETUP", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_1413(uParam0, func_171(), 1);
					if (func_573(-1838434463, 0, 0) < 1)
					{
						func_312(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
					}
					Local_30.f_306 = 2;
					Local_30.f_306.f_1 = -1838434463;
					_0x8a59d44189af2bc5(&(Local_30.f_306), -431151253);
					Local_30.f_167 = func_1951(408396114, func_1331(), 20f, 1);
					func_134(uParam0, 2);
				}
				else if ((get_frame_count() % 30) == 0)
				{
				}
			}
			else if ((get_frame_count() % 30) == 0)
			{
			}
			break;
		case 2:
			if (func_1952())
			{
				func_1851();
				func_1852(3);
				func_134(uParam0, 3);
			}
			break;
		case 3:
			func_1953();
			func_1853(0);
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1438(uParam0, "RH1_TUTN_CAMP1", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
			func_134(uParam0, 4);
			set_cinematic_mode_active(false);
			break;
		case 4:
			if (func_1952())
			{
				if (func_1954() || func_1955())
				{
					if (!func_1956())
					{
						func_1853(1);
						_0xdd1232b332cbb9e7(3, 1, 0);
						func_1438(uParam0, "RH1_TUTN_CAMP2", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
					}
					func_134(uParam0, 5);
				}
				set_cinematic_mode_active(false);
			}
			else
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_178();
				func_134(uParam0, 1);
			}
			break;
		case 5:
			if (func_1956())
			{
				func_1853(2);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1438(uParam0, "RH1_TUTN_CAMP3", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
				func_134(uParam0, 6);
			}
			else if (!func_1954() && !func_1955())
			{
				func_134(uParam0, 3);
			}
			set_cinematic_mode_active(false);
			break;
		case 6:
			if (func_1956())
			{
				if (func_1269(uParam0) == 1 || Global_1935496->f_32 == -1838434463)
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_178();
					func_134(uParam0, -1);
				}
			}
			else if (func_1954() || func_1955())
			{
				func_134(uParam0, 4);
			}
			else
			{
				func_134(uParam0, 3);
			}
			set_cinematic_mode_active(false);
			break;
		case 7:
			func_1851();
			func_1852(4);
			func_1957();
			func_1853(0);
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1438(uParam0, "RH1_COOK_TUT1", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
			func_134(uParam0, 8);
			break;
		case 8:
			if (!func_388(Local_30.f_2, 8388608))
			{
				if (func_471(8))
				{
					func_1853(1);
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1438(uParam0, "RH1_COOK_TUT2", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
					func_414(&(Local_30.f_2), 8388608);
				}
			}
			else if (Local_30.f_309 == 4)
			{
				func_1853(2);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1438(uParam0, "RH1_COOK_TUT8", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
				func_134(uParam0, -1);
			}
			break;
		case 9:
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_178();
			func_1438(uParam0, "RH1_COOK_TUT4", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
			func_134(uParam0, -1);
			break;
		case 10:
			func_1853(3);
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1438(uParam0, "RH1_COOK_TUT7", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
			func_134(uParam0, -1);
			break;
		case 11:
			func_1851();
			func_1852(2);
			func_134(uParam0, 12);
			break;
		case 12:
			func_1853(0);
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1438(uParam0, "RH1_CAMP_REST0", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
			func_134(uParam0, 13);
			break;
		case 13:
			if (_uiprompt_get_group_active_page(1323335645) == 0)
			{
				func_1853(1);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1438(uParam0, "RH1_CAMP_REST", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_134(uParam0, 14);
			}
			break;
		case 14:
			if (_uiprompt_get_group_active_page(1754796591) == 0)
			{
				func_134(uParam0, 12);
			}
			break;
		case 20:
			if (func_1958())
			{
				func_1413(uParam0, func_171(), 1);
				if (!does_blip_exist(Local_30.f_167))
				{
					Local_30.f_167 = func_1951(408396114, func_1959(), func_1960(), 1);
				}
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1438(uParam0, "RH1_RABB_GOTO", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_134(uParam0, -1);
			}
			break;
		case 21:
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1438(uParam0, "RH1_RABB_KILL", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_134(uParam0, -1);
			break;
		case 22:
			if (does_blip_exist(Local_30.f_167))
			{
				remove_blip(&(Local_30.f_167));
			}
			_0xdd1232b332cbb9e7(3, 1, 0);
			if (!func_165(7))
			{
			}
			if (func_1329(5))
			{
				func_1413(uParam0, func_171(), 1);
			}
			func_1438(uParam0, "RH1_RABB_PICK", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_134(uParam0, -1);
			break;
		case 23:
			if (func_165(7))
			{
				func_59(7);
			}
			func_414(&(Local_30.f_2), 524288);
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
			func_1438(uParam0, "RH1_HOSEA_GO", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_134(uParam0, 24);
			break;
		case 24:
			if (func_388(Local_30.f_2, 512))
			{
				func_134(uParam0, 1);
			}
			break;
		case 25:
			if (!func_165(7))
			{
				func_1265(7);
			}
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1438(uParam0, "RH1_MOUNT_UP", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_134(uParam0, -1);
			break;
		case 26:
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1438(uParam0, "RH1_RABB_STOW", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			if (func_1329(5))
			{
				func_1413(uParam0, func_171(), 1);
			}
			if (!func_165(7))
			{
				func_1265(7);
			}
			func_134(uParam0, -1);
			break;
	}
}

void func_1338(var uParam0)
{
	func_1961(uParam0);
	if (!func_388(Local_30.f_2, 67108864))
	{
		if (func_1014(256))
		{
			func_414(&(Local_30.f_2), 67108864);
		}
	}
	switch (Local_30.f_1)
	{
		case 0:
			if (is_screen_faded_in())
			{
				func_218(Local_30.f_168[0]);
				Local_30.f_1++;
			}
			break;
		case 1:
			if (!func_1403())
			{
				if (func_388(Local_30.f_40, 8) && !func_1342())
				{
					if (!func_388(Local_30.f_40, 1024))
					{
						if (func_1913())
						{
							if (func_1857(uParam0, "RH1_RAB_CTH", 0))
							{
								func_218(Local_30.f_168[0]);
								Local_30.f_1++;
							}
						}
					}
					else
					{
						func_218(Local_30.f_168[0]);
						Local_30.f_1++;
					}
				}
				else
				{
					func_218(Local_30.f_168[0]);
					Local_30.f_1++;
				}
			}
			break;
		case 2:
			if (!func_388(Local_30.f_2, 1048576))
			{
				if (!func_1343())
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RH1_RHNT_WEAPON", 0))
						{
							func_218(Local_30.f_168[0]);
							func_414(&(Local_30.f_2), 1048576);
							Local_30.f_1++;
						}
					}
				}
				else
				{
					func_218(Local_30.f_168[0]);
					func_414(&(Local_30.f_2), 1048576);
					Local_30.f_1++;
				}
			}
			break;
		case 3:
			if (!func_1403())
			{
				if (func_388(Local_30.f_2, 262144))
				{
					func_218(Local_30.f_168[0]);
					Local_30.f_1 = 5;
				}
			}
			break;
		case 4:
			if (!func_388(Local_30.f_2, 134217728))
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_COOK_EAT", 0))
					{
						Local_30.f_1 = -1;
						func_414(&(Local_30.f_2), 134217728);
					}
				}
			}
			else
			{
				Local_30.f_1 = -1;
			}
			break;
		case 5:
			if (func_912(Local_30.f_168[0]) > 15f)
			{
				if (func_902(Global_35, func_171(), 1, 1) <= 20f)
				{
					if (!func_1345() && !func_388(Local_30.f_40, 256))
					{
						if (!func_1403())
						{
							if (func_1857(uParam0, "RH1_CAMP_WAIT", 0))
							{
								func_218(Local_30.f_168[0]);
							}
						}
					}
				}
				else if (!func_388(Local_30.f_40, 256))
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RH1_CAMP_WANDER", 0))
						{
							func_218(Local_30.f_168[0]);
						}
					}
				}
			}
			if (func_1950())
			{
				if (func_912(Local_30.f_168[0]) >= 1.25f)
				{
					if (func_1347() < 8)
					{
						if (!func_1403())
						{
							if (func_1857(uParam0, "RHUNT_SILVER", 0))
							{
								Local_30.f_1 = -1;
							}
						}
					}
				}
			}
			break;
		case 6:
			if (!func_388(Local_30.f_2, 16777216))
			{
				if (func_388(Local_30.f_2, 67108864))
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RHUNT_PSLEEP", 0))
						{
							func_414(&(Local_30.f_2), 16777216);
						}
					}
				}
			}
			if (!func_388(Local_30.f_2, 16777216))
			{
				if (!func_388(Local_30.f_2, 33554432))
				{
					if (!func_1403())
					{
						if (func_912(Local_30.f_168[0]) > 15f)
						{
							if (func_1857(uParam0, "RHUNT_HSLEEP", 0))
							{
								func_414(&(Local_30.f_2), 33554432);
							}
						}
					}
				}
			}
			break;
	}
}

void func_1339()
{
	if (is_ped_injured(func_171()))
	{
		return;
	}
	switch (Local_30.f_143[0]->f_2)
	{
		case 0:
			_0xb832f1a686b9b810(func_171(), true, 0);
			_0x94a3c1b804d291ec(func_171(), 0, 0, 1, 0);
			Local_30.f_143[0]->f_2++;
			break;
		case 1:
			if (!is_waypoint_playback_going_on_for_ped(func_171(), 0) && !func_1404(func_171(), 1920390111))
			{
				if (_0x2009f8ab7a5e9d6d(player_id()))
				{
					_0x0c6b89876262a99d(player_id(), func_171());
				}
				_0x12e09e278c6c29b7(player_id());
				task_achieve_heading(func_171(), 54.8223f, 0);
				Local_30.f_143[0]->f_2++;
				func_414(&(Local_30.f_2), 2);
			}
			break;
		case 2:
			if (((func_1921() || func_1922()) || func_1919()) || func_1342())
			{
				vVar0 = { func_1442(&(Local_30.f_13[3]), "P_c_horse_01^1", "pl_hosea_on_horse_loop") };
				fVar3 = func_1443(&(Local_30.f_13[3]), "P_c_horse_01^1", "pl_hosea_on_horse_loop");
				func_1577(0);
				task_follow_nav_mesh_to_coord(0, vVar0, 1f, -1, 0.25f, 0, fVar3);
				func_1579(0);
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 3:
			if (!func_1404(func_171(), 242628503))
			{
				if (!func_388(Local_30.f_2, 32768))
				{
					func_1962();
					func_414(&(Local_30.f_2), 32768);
				}
				if (func_388(Local_30.f_2, 512))
				{
					func_1963(&(Local_30.f_13[3]), "pl_enter");
					if (func_388(Local_30.f_41, 4))
					{
						if (!func_1931("RH1_RAB_YES"))
						{
							if (_is_anim_scene_started(&(Local_30.f_13[3]), false))
							{
								if (_get_anim_scene_progress(&(Local_30.f_13[3])) >= 0.98f)
								{
									if (func_1963(&(Local_30.f_13[3]), "pl_enter"))
									{
										_set_anim_scene_playback_list_bool(&(Local_30.f_13[3]), "pl_enter", true);
										func_414(&(Local_30.f_2), 16);
										Local_30.f_143[0]->f_2++;
									}
								}
							}
						}
					}
				}
			}
			break;
		case 4:
			if (func_388(Local_30.f_2, 16384) || (_does_propset_exist(Local_30.f_308) && is_screen_faded_out()))
			{
				reset_anim_scene(&(Local_30.f_13[3]), 0);
				func_1964();
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 5:
			if (!func_388(Local_30.f_2, 1024))
			{
				if (func_1965())
				{
					func_414(&(Local_30.f_2), 1024);
				}
			}
			else if (_is_anim_scene_started(&(Local_30.f_13[5]), false))
			{
				func_218(&(Local_30.f_143[0]->f_4));
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 6:
			if (_is_anim_scene_started(&(Local_30.f_13[5]), false))
			{
				if (_get_anim_scene_time(&(Local_30.f_13[5])) >= 15f)
				{
					bVar4 = true;
				}
			}
			else if (func_912(&(Local_30.f_143[0]->f_4)) > 27f)
			{
				bVar4 = true;
			}
			if (bVar4)
			{
				func_414(&(Local_30.f_2), 4);
				Local_30.f_143[0]->f_2++;
			}
			break;
	}
}

void func_1340()
{
	if (!func_388(Local_30.f_2, 1))
	{
		if (!func_1273(Global_35, Local_30.f_158, 0))
		{
			clear_ped_tasks(Local_30.f_158, 1, 0);
			task_stand_still(Local_30.f_158, -1);
			set_animal_tuning_bool_param(Local_30.f_158, 48, true);
			func_414(&(Local_30.f_2), 1);
		}
	}
}

void func_1341()
{
	if (func_1252(Global_35, func_1331(), 1) > 20f || !func_1950())
	{
		if (func_1966(1))
		{
			func_473(1);
		}
	}
	else if (!func_1966(1))
	{
		func_1332(1);
	}
}

bool func_1342()
{
	if (func_388(Local_30.f_40, 128))
	{
		return true;
	}
	if (!func_388(Local_30.f_40, 128))
	{
		if ((func_1921() || func_1922()) || func_1924())
		{
			fVar0 = 30f;
			if (is_ped_on_mount(Global_35))
			{
				fVar0 = 40f;
			}
			if (func_902(Global_35, func_171(), 1, 1) <= fVar0)
			{
				func_414(&(Local_30.f_40), 128);
				return true;
			}
		}
	}
	return false;
}

bool func_1343()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(&(Local_30.f_49[iVar0])))
		{
			if (is_ped_injured(&(Local_30.f_49[iVar0])))
			{
				if (!func_26(Local_30.f_168[16]))
				{
					func_218(Local_30.f_168[16]);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1344()
{
	if (is_ped_on_mount(Global_35))
	{
		func_1881(Global_35, 1776.064f, 1249.111f, 189.8052f, 0, 35f, 25f, 5f, 1f, 1, 1, 1, 0);
	}
}

bool func_1345()
{
	if (!does_script_with_name_hash_exist(954940763))
	{
		return false;
	}
	return _get_number_of_references_of_script_with_name_hash(954940763) > 0;
}

void func_1346()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_blip_exist(Local_30.f_49[iVar0]->f_1))
		{
			remove_blip(&(Local_30.f_49[iVar0]->f_1));
		}
		iVar0++;
	}
}

int func_1347()
{
	return Global_43885;
}

void func_1348(int iParam0)
{
	if (Local_30.f_309 != iParam0)
	{
		Local_30.f_310 = Local_30.f_309;
		Local_30.f_309 = iParam0;
	}
}

bool func_1349(var uParam0)
{
	switch (Local_30.f_309)
	{
		case 0:
			break;
		case 1:
			if (func_1967())
			{
				task_clear_look_at(Global_35);
				func_1351();
				func_1348(2);
			}
			break;
		case 2:
			func_312(1970477904, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_1348(3);
			func_134(uParam0, 7);
			break;
		case 3:
			if (func_471(16384))
			{
				Local_30.f_1 = 3;
				func_1348(4);
			}
			else
			{
				func_1968();
			}
			break;
		case 4:
			if (!func_471(16384))
			{
				if (!func_388(Local_30.f_2, 2097152))
				{
					func_414(&(Local_30.f_2), 2097152);
					func_134(uParam0, 10);
				}
				func_1348(5);
				func_218(Local_30.f_168[1]);
			}
			break;
		case 5:
			if (func_471(32768))
			{
				Local_30.f_1 = 4;
				func_1348(6);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_178();
			}
			else if (func_471(8))
			{
				func_134(uParam0, 9);
				func_1348(8);
			}
			break;
		case 6:
			if (!func_471(32768))
			{
				func_1348(7);
				func_474(32);
			}
			else if (func_471(1024))
			{
				func_134(uParam0, 9);
				func_1348(8);
			}
			break;
		case 8:
			if (!func_471(32768))
			{
				if (!func_471(8))
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1348(7);
				}
			}
			break;
		case 7:
			if (func_471(65536))
			{
				if (!func_471(131072))
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_472(4096);
					func_1333(1);
					func_1333(2);
					func_1335();
					func_1348(9);
				}
				else if (!func_388(Local_30.f_2, 4194304))
				{
					func_414(&(Local_30.f_2), 4194304);
					func_134(uParam0, 9);
				}
			}
			else if (func_471(8))
			{
				func_1348(8);
			}
			else if (func_471(16384))
			{
				func_1348(5);
			}
			break;
		case 9:
			return true;
	}
	return false;
}

bool func_1350()
{
	if (!does_entity_exist(Local_30.f_236))
	{
		iVar2 = create_itemset(true);
		iVar3 = _get_entities_from_propset(Local_30.f_308, iVar2, 0, false, false);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar0 = get_indexed_item_in_itemset(iVar4, iVar2);
				iVar1 = _0x18013392501ce5dc(iVar0);
				if (get_entity_model(iVar1) == 737690157)
				{
					Local_30.f_236 = iVar1;
				}
				iVar4++;
			}
		}
		else
		{
			Local_30.f_236 = create_object_no_offset(305182125, 1773.47f, 1254.88f, 189.54f, true, true, false, true);
		}
	}
	if (!does_entity_exist(Local_30.f_236))
	{
	}
	else
	{
		set_anim_scene_entity(&(Local_30.f_13[5]), "p_bedRollOpen03x", Local_30.f_236, 0);
	}
	set_anim_scene_entity(&(Local_30.f_13[5]), "P_C_Horse_01", Local_30.f_158, 0);
	set_anim_scene_entity(&(Local_30.f_13[5]), "P_C_Horse_01^1", func_1254(), 0);
	set_anim_scene_entity(&(Local_30.f_13[5]), "hosea", func_171(), 0);
	set_anim_scene_entity(&(Local_30.f_13[5]), "ARTHUR", Global_35, 0);
	start_anim_scene(&(Local_30.f_13[5]));
	return true;
}

void func_1351()
{
	func_472(536870912);
}

bool func_1352()
{
	if (_is_ped_using_scenario_hash(Global_35, 1097070152))
	{
		return true;
	}
	if (!func_388(Local_30.f_2, 8))
	{
		if (is_screen_fading_out())
		{
			func_414(&(Local_30.f_2), 8);
			func_218(Local_30.f_168[1]);
		}
	}
	else if (func_912(Local_30.f_168[1]) > 6.5f)
	{
		return true;
	}
	return false;
}

bool func_1353(var uParam0, float fParam1)
{
	if (!func_26(uParam0))
	{
		return false;
	}
	if (func_912(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_1354(var uParam0, int iParam1)
{
	return func_821(&(uParam0->f_7375), iParam1);
}

void func_1355()
{
	StringCopy(&(Var0.f_10), "player_camp", 32);
	Var0.f_14 = 6096;
	Var16.f_6 = { 1775.353f, 1255.573f, 189.607f };
	Var16.f_6.f_3 = -52f;
	iVar26 |= 2048 | 4096;
	Var16 = iVar26;
	Var0 = { Var16 };
	Var0.f_15 = 1;
	if (does_blip_exist(&(Global_1357522->f_16[0])))
	{
		remove_blip(Global_1357522->f_16[0]);
	}
	func_1332(1);
	Global_1357522->f_10[0] = 0;
	Global_1357522->f_13[0] = 0;
	func_368(Var0, 2);
}

void func_1356()
{
	set_anim_scene_entity(&(Local_30.f_13[7]), "P_C_HORSE_01_1", func_1254(), 0);
	set_anim_scene_entity(&(Local_30.f_13[7]), "IG_HoseaMatthews", func_171(), 0);
	if (does_entity_exist(Local_30.f_245))
	{
		set_anim_scene_entity(&(Local_30.f_13[7]), "p_stoolFolding01x", Local_30.f_245, 0);
	}
	if (does_entity_exist(Local_30.f_246))
	{
		set_anim_scene_entity(&(Local_30.f_13[7]), "p_stoolFolding01x_1", Local_30.f_246, 0);
	}
	start_anim_scene(&(Local_30.f_13[7]));
}

bool func_1357(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		get_current_ped_weapon(iParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			_0xe9bd19f8121ade3e(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_1358()
{
	iVar2 = create_itemset(true);
	find_all_attached_carriable_entities(Local_30.f_158, iVar2);
	iVar3 = get_itemset_size(iVar2);
	if (iVar3 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar3)
		{
			iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, iVar2));
			if (does_entity_exist(iVar1))
			{
				if (func_1969(iVar1))
				{
					_0x0d0db2b6af19a987(&iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_1359()
{
	return;
	if (func_388(Local_30.f_36, 2))
	{
		func_1301(&(Local_30.f_36), 2);
	}
	if (func_388(Local_30.f_36, 1))
	{
		func_1301(&(Local_30.f_36), 1);
	}
	if (func_388(Local_30.f_36, 4))
	{
		func_1301(&(Local_30.f_36), 4);
	}
}

bool func_1360()
{
	return Global_1392040->f_6;
}

void func_1361()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(&(Local_30.f_49[iVar0])))
		{
			uVar1 = &Local_30.f_49[iVar0];
			delete_entity(&uVar1);
		}
		iVar0++;
	}
}

void func_1362()
{
	func_1970(Local_30.f_237);
	func_1970(Local_30.f_239);
	func_1970(Local_30.f_241);
	func_1970(Local_30.f_242);
	func_1970(Local_30.f_243);
	func_1970(Local_30.f_244);
	func_1970(Local_30.f_247);
}

void func_1363(int iParam0)
{
	if (Local_30.f_311 != iParam0)
	{
		Local_30.f_311 = iParam0;
	}
}

void func_1364(var uParam0)
{
	switch (func_1850(uParam0))
	{
		case 0:
			if (is_screen_faded_in())
			{
				func_218(Local_30.f_168[1]);
				func_1851();
				func_1852(2);
				func_1853(0);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1438(uParam0, "RH1_COOK_TUT1", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			if (!func_388(Local_30.f_2, 256))
			{
				if (func_471(8))
				{
					func_1853(1);
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1438(uParam0, "RH1_COOK_TUT3", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
					func_414(&(Local_30.f_2), 256);
				}
			}
			else if (!func_471(8))
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_178();
				func_134(uParam0, -1);
			}
			break;
		case 2:
			if (func_1971())
			{
				func_1351();
				func_474(128);
				func_134(uParam0, 3);
			}
			if (!func_388(Local_30.f_2, 128))
			{
				if (!func_471(8))
				{
					if (!func_212())
					{
						func_708("RH1_TUT_CRAFT", 10000, 0, 0, 0, 1);
						func_414(&(Local_30.f_2), 128);
					}
				}
			}
			break;
		case 3:
			if (func_1972(uParam0))
			{
				func_134(uParam0, -1);
			}
			break;
		case 4:
			break;
		case 5:
			func_1265(7);
			func_1438(uParam0, "RH1_GROOM_HORSE", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_134(uParam0, -1);
			break;
		case 10:
			func_1438(uParam0, "RH1_MOUNT_UP", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_1265(7);
			func_134(uParam0, -1);
			break;
	}
}

void func_1365(var uParam0)
{
	switch (Local_30.f_1)
	{
		case 0:
			if (is_screen_faded_in())
			{
				if (func_1857(uParam0, "RH1_MCS2_LO_A", 0))
				{
					func_218(Local_30.f_168[0]);
					Local_30.f_1++;
				}
			}
			break;
		case 1:
			if (Local_30.f_311 != 6)
			{
				if (func_912(Local_30.f_168[0]) > 10f)
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RH1_CAMP_BAIT", 0))
						{
							Local_30.f_1++;
							func_218(Local_30.f_168[0]);
						}
					}
					else
					{
						func_218(Local_30.f_168[0]);
					}
				}
			}
			else
			{
				func_218(Local_30.f_168[0]);
				Local_30.f_1++;
			}
			break;
		case 2:
			if (Local_30.f_311 == 6)
			{
				if (!func_1973(0) && !_0x84d0bf2b21862059(Global_35))
				{
					if (!func_1403())
					{
						func_218(Local_30.f_168[0]);
						Local_30.f_1++;
					}
				}
				else if (func_912(Local_30.f_168[0]) > 10f)
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RH1_CAMP_LEAVE", 0))
						{
							func_218(Local_30.f_168[0]);
						}
					}
				}
			}
			break;
		case 3:
			if (func_388(Local_30.f_2, 1))
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_CAMP_PACKED", 0))
					{
						func_218(Local_30.f_168[0]);
						Local_30.f_1++;
					}
				}
			}
			break;
	}
}

void func_1366()
{
	switch (Local_30.f_143[0]->f_2)
	{
		case 0:
			Local_30.f_143[0]->f_2++;
			break;
		case 1:
			if (_does_anim_scene_exist(&(Local_30.f_13[7])))
			{
				if (_is_anim_scene_started(&(Local_30.f_13[7]), false))
				{
					if (func_388(Local_30.f_2, 4))
					{
						set_anim_scene_bool(&(Local_30.f_13[7]), "b_breakout", true, false);
						if (_0x005e6f28dd7ed58d(&(Local_30.f_13[7]), "IG_HoseaMatthews"))
						{
							func_1974();
							Local_30.f_143[0]->f_2 = 99;
						}
						else
						{
							Local_30.f_143[0]->f_2++;
						}
					}
				}
			}
			break;
		case 2:
			if (_is_anim_scene_started(&(Local_30.f_13[7]), false))
			{
				if (_0x005e6f28dd7ed58d(&(Local_30.f_13[7]), "IG_HoseaMatthews"))
				{
					func_1974();
					Local_30.f_143[0]->f_2++;
				}
			}
			else
			{
				func_1974();
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 3:
			if (_is_anim_scene_started(&(Local_30.f_13[9]), false))
			{
				if (_0x005e6f28dd7ed58d(&(Local_30.f_13[9]), "IG_HoseaMatthews"))
				{
					func_1975();
					Local_30.f_143[0]->f_2++;
				}
			}
			else
			{
				func_1975();
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 4:
			func_1963(&(Local_30.f_13[8]), "pl_exit_readying_horse");
			if (func_388(Local_30.f_2, 1))
			{
				if (func_1963(&(Local_30.f_13[8]), "pl_exit_readying_horse"))
				{
					_set_anim_scene_playback_list_bool(&(Local_30.f_13[8]), "pl_exit_readying_horse", true);
					Local_30.f_143[0]->f_2++;
				}
			}
			break;
		case 5:
			if (!_is_anim_scene_started(&(Local_30.f_13[8]), false))
			{
				if (!func_1578(func_171()))
				{
					_set_ped_on_mount(func_171(), func_1254(), -1, true);
				}
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 6:
			func_1577(0);
			task_follow_nav_mesh_to_coord(0, 1775.231f, 1249.628f, 190.772f, 1f, -1, 0.25f, 0, 63.64f);
			task_look_at_entity(0, Global_35, -1, 0, 51, 0);
			func_1579(0);
			Local_30.f_143[0]->f_2++;
			break;
	}
}

bool func_1367()
{
	switch (Local_30.f_311)
	{
		case 0:
			break;
		case 1:
			func_1363(2);
			break;
		case 2:
			if (func_1973(0))
			{
				func_1363(3);
			}
			break;
		case 3:
			if (!func_1973(1))
			{
				func_1363(2);
			}
			if (func_471(131072))
			{
				task_clear_look_at(Global_35);
				func_1363(4);
			}
			break;
		case 4:
			if (!func_471(131072))
			{
				if (!func_471(8))
				{
					func_1363(5);
				}
			}
			break;
		case 5:
			if (func_471(262144))
			{
				func_1335();
				func_1363(6);
				func_218(Local_30.f_168[0]);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_1368(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1369()
{
	_0x6569f31a01b4c097(func_171(), 2, 0);
	_0x6569f31a01b4c097(func_171(), 3, 0);
}

void func_1370(var uParam0)
{
	switch (func_1850(uParam0))
	{
		case 0:
			if (is_screen_faded_in())
			{
				func_1438(uParam0, "RH1_HOSEA_FLW", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
				func_134(uParam0, -1);
			}
			break;
	}
}

void func_1371(var uParam0)
{
	switch (Local_30.f_1)
	{
		case 0:
			if (is_screen_faded_in())
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_TRACK_CHAT", 0))
					{
						func_218(Local_30.f_168[0]);
						Local_30.f_1++;
					}
				}
			}
			break;
		case 1:
			if (!is_ped_injured(func_171()))
			{
				if (is_waypoint_playback_going_on_for_ped(func_171(), 0))
				{
					if (get_ped_waypoint_progress(func_171()) >= 345)
					{
						if (!func_1403())
						{
							if (func_1857(uParam0, "RH1_TRK_FND4", 0))
							{
								Local_30.f_1++;
							}
						}
					}
				}
			}
			break;
		case 2:
			if (func_388(Local_30.f_2, 8))
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_BEAR_SPOT", 0))
					{
						func_218(Local_30.f_168[0]);
						Local_30.f_1++;
					}
				}
			}
			break;
		case 3:
			if (func_1269(uParam0) > 3)
			{
				if (func_1273(Global_35, Local_30.f_158, 0))
				{
					func_218(Local_30.f_168[0]);
					Local_30.f_1++;
				}
			}
			break;
		case 4:
			if (func_1273(Global_35, Local_30.f_158, 0))
			{
				if (func_912(Local_30.f_168[0]) > 15f)
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RH1_BEAR_RIDE1", 0))
						{
							func_218(Local_30.f_168[0]);
							Local_30.f_1++;
						}
					}
				}
			}
			break;
	}
}

void func_1372()
{
	vVar0 = { 1561.297f, 1528.701f, 144.2702f };
	fVar3 = -167.81f;
	if (func_388(Local_30.f_2, 2) && func_388(Local_30.f_2, 1))
	{
		func_1368(vVar0, 1500f, 0, 0);
		if (!func_388(Local_30.f_2, 4))
		{
			func_1976(vVar0, 1500f);
			func_414(&(Local_30.f_2), 4);
		}
		if (!func_388(Local_30.f_2, 16))
		{
			if (!does_entity_exist(func_181()))
			{
				if (func_1414(vVar0, fVar3))
				{
					set_entity_load_collision_flag(func_181(), 1);
					set_entity_lod_dist(func_181(), 300);
					set_ped_lod_multiplier(func_181(), 5f);
					func_1977();
				}
			}
			else if (func_983(func_181(), 0))
			{
				set_ped_reset_flag(func_181(), 3, true);
			}
		}
		else if (does_entity_exist(func_181()))
		{
			if (func_902(Global_35, func_181(), 1, 1) <= 200f)
			{
				iVar4 = func_181();
				delete_ped(&iVar4);
			}
		}
	}
}

bool func_1373(vector3 vParam0, bool bParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	iVar0 = 0;
	fVar1 = (15f * 3f);
	if (fParam4 > 0f)
	{
		fVar1 = fParam4;
	}
	switch (Local_30.f_228)
	{
		case 0:
			if (!get_ped_config_flag(func_171(), 167, true))
			{
				set_ped_config_flag(func_171(), 167, true);
			}
			func_1978(func_171(), Local_30.f_168[14]);
			settimera(0);
			func_1285(1, 1);
			break;
		case 1:
			if (timera() < iVar0)
			{
				return false;
			}
			settimera(0);
			if (!func_1273(func_171(), Local_30.f_143[0]->f_9, 0))
			{
				if (!Local_30.f_143[0]->f_12)
				{
					clear_ped_tasks(Local_30.f_143[0]->f_9, 1, 0);
					task_stand_still(Local_30.f_143[0]->f_9, -1);
					Local_30.f_143[0]->f_12 = 1;
				}
				if (!Local_30.f_143[0]->f_11)
				{
					func_1577(0);
					task_mount_animal(0, Local_30.f_143[0]->f_9, -1, -1, 1f, 1, 0, 0);
					task_follow_nav_mesh_to_coord(0, Local_30.f_123, 1f, -1, 0.25f, 0, 40000f);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_1579(0);
					Local_30.f_143[0]->f_11 = 1;
				}
			}
			else if (Local_30.f_229 == 5)
			{
				func_1285(4, 1);
			}
			else
			{
				func_1285(2, 1);
			}
			break;
		case 2:
			if (timera() < iVar0)
			{
				return false;
			}
			settimera(0);
			if (func_1273(func_171(), Local_30.f_143[0]->f_9, 0))
			{
				_0xac22aa6df4d1c1de(player_id(), func_171(), -1082130432, -1082130432, iParam6, 2, 1);
				func_1285(3, 1);
			}
			else
			{
				func_1285(1, 1);
			}
			break;
		case 3:
			if (timera() < iVar0)
			{
				return false;
			}
			settimera(0);
			if (func_1252(Global_35, Local_30.f_126, 1) >= 15f && func_902(Global_35, func_171(), 1, 1) >= 10f)
			{
			}
			else
			{
				func_1285(4, 1);
			}
			break;
		case 4:
			if (timera() < iVar0)
			{
				return false;
			}
			settimera(0);
			if (waypoint_recording_get_closest_waypoint(Local_30.f_142, get_entity_coords(func_171(), true, false), &(Local_30.f_5)))
			{
				func_1577(0);
				task_follow_waypoint_recording(0, Local_30.f_142, Local_30.f_5, 25866, iParam5, 0, 1, -1);
				func_1579(0);
				func_218(Local_30.f_168[8]);
				func_1285(5, 1);
			}
			break;
		case 5:
			if (timera() < iVar0)
			{
				return false;
			}
			settimera(0);
			if (!func_1273(func_171(), Local_30.f_143[0]->f_9, 0))
			{
				func_1285(1, 1);
			}
			if (is_waypoint_playback_going_on_for_ped(func_171(), 0))
			{
				func_1374(func_171(), Local_30.f_7, Local_30.f_8, iParam7);
			}
			else if (func_1252(func_171(), vParam0, 1) > fVar1)
			{
				if (func_912(Local_30.f_168[8]) > 5f)
				{
					func_1285(4, 1);
				}
			}
			else
			{
				iVar2 = 1;
			}
			if (bParam3)
			{
				if (func_1979(Global_35, -364.3158f, 787.4852f, 115.1776f, Local_30.f_168[2], 35f, 25f, 15f, 6f, 1f, 0, 0, 1, 1, 1))
				{
					func_1285(6, 1);
				}
			}
			else if ((func_1252(Global_35, vParam0, 1) < fVar1 && func_902(Global_35, func_171(), 1, 1) < 10f) || (iParam8 && iVar2))
			{
				func_1285(6, 1);
			}
			break;
		case 6:
			if (get_ped_config_flag(func_171(), 167, true))
			{
				set_ped_config_flag(func_171(), 167, false);
			}
			Local_30.f_229 = -1;
			return true;
	}
	return false;
}

void func_1374(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (!func_983(iParam0, 0))
	{
		return;
	}
	iVar0 = func_1870(iParam0, 0);
	bVar1 = true;
	if (iVar0 < iParam1)
	{
		bVar1 = false;
	}
	if (iVar0 > iParam2)
	{
		bVar1 = false;
	}
	fVar2 = func_902(Global_35, iParam0, 1, 1);
	if (fVar2 > 20f)
	{
		bVar1 = false;
	}
	if (fVar2 > 30f)
	{
		if (!waypoint_playback_get_is_paused(iParam0))
		{
			waypoint_playback_pause(iParam0, 1, 1, 0);
		}
	}
	else
	{
		if (waypoint_playback_get_is_paused(iParam0))
		{
			waypoint_playback_resume(iParam0, true, -1, 0);
		}
		if (bVar1)
		{
			waypoint_playback_override_speed(iParam0, fParam3, 0, -1082130432, 0);
		}
		else
		{
			waypoint_playback_override_speed(iParam0, 1.25f, 0, -1082130432, 0);
		}
	}
}

bool func_1375(int iParam0)
{
	fVar0 = func_1252(iParam0, func_1980(), 0);
	return fVar0 < (func_1981() * 1.2f);
}

void func_1376(var uParam0)
{
	if (!is_ped_on_mount(Global_35))
	{
		return;
	}
	bVar0 = true;
	if (func_33(uParam0) == iLocal_22)
	{
		if (!func_388(Local_30.f_2, 512))
		{
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		func_1881(Global_35, 1570.155f, 1558.586f, 145.0396f, 0, 50f, 40f, 15f, 1084227584, 1, 1, 1, 0);
	}
	else
	{
		func_1979(Global_35, 1570.155f, 1558.586f, 145.0396f, Local_30.f_168[2], 50f, 40f, 15f, 5f, 1f, 0, 0, 1, 1, 1);
	}
}

void func_1377()
{
	if (is_ped_injured(func_171()))
	{
		return;
	}
	switch (Local_30.f_143[0]->f_2)
	{
		case 0:
			if (func_388(Local_30.f_2, 512))
			{
				vVar0 = { 1565.3f, 1559.518f, 145.0661f };
				fVar3 = 164.728f;
				if (!func_393(vVar0))
				{
					func_1577(0);
					task_follow_nav_mesh_to_coord(0, vVar0, 1f, -1, 0.25f, 0, fVar3);
					func_1579(0);
					Local_30.f_143[0]->f_2++;
				}
			}
			break;
		case 1:
			if (!func_388(Local_30.f_2, 64))
			{
				if (!func_1404(func_171(), 242628503))
				{
					vVar0 = { get_entity_coords(func_1254(), true, false) };
					func_414(&(Local_30.f_2), 64);
				}
			}
			else if (func_388(Local_30.f_2, 32))
			{
				Local_30.f_143[0]->f_2++;
			}
			break;
	}
}

void func_1378(int iParam0, int iParam1)
{
	if (func_1982(iParam0))
	{
		return;
	}
	if (func_1983(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602]->f_1 = iParam1;
	Global_36581[Global_36602] = iParam0;
	Global_36602++;
}

void func_1379(var uParam0)
{
	func_1984(&(uParam0->f_7375));
}

void func_1380(var uParam0, char[4] cParam1)
{
	func_1985(&(uParam0->f_7375), cParam1);
	func_374(uParam0, 33554432);
}

void func_1381(var uParam0)
{
	switch (func_1850(uParam0))
	{
		case 0:
			if (is_screen_faded_in())
			{
				if (Local_30.f_1 > 1)
				{
					if (!func_1329(5))
					{
						func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
					}
					func_134(uParam0, 15);
				}
			}
			break;
		case 1:
			if (func_388(Local_30.f_2, 512))
			{
				if (!_0x45ab66d02b601fa7(player_id()))
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1438(uParam0, "RH1_TUT_EAGLEYE", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
				}
				if (func_1329(5))
				{
					func_1413(uParam0, func_171(), 1);
				}
				if (!func_388(Local_30.f_2, 2097152))
				{
					func_414(&(Local_30.f_2), 2097152);
					func_708("RH1_TUT_LGDZN", 10000, 0, 0, 0, 1);
				}
				func_134(uParam0, 2);
			}
			break;
		case 2:
			if (!func_388(Local_30.f_2, 256))
			{
				if (_0x45ab66d02b601fa7(player_id()))
				{
					if (_0x1da5c5b0923e1b85(player_id()))
					{
						func_1301(&(Local_30.f_2), 8);
						_0xdd1232b332cbb9e7(3, 1, 0);
						func_1438(uParam0, "RH1_TUT_EAGLEYE3", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
						func_134(uParam0, 3);
						settimera(0);
					}
					else if (!func_388(Local_30.f_2, 8))
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
						func_1438(uParam0, "RH1_TUT_EAGLEYE5", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
						func_414(&(Local_30.f_2), 8);
					}
				}
			}
			break;
		case 3:
			if (func_1986(Global_35) < 15.7f)
			{
				if (func_1987())
				{
					if (!func_388(Local_30.f_2, 64))
					{
						if (!func_212())
						{
							func_414(&(Local_30.f_2), 64);
						}
					}
				}
				if (!func_388(Local_30.f_2, 8388608))
				{
					if (!_0x45ab66d02b601fa7(player_id()))
					{
						func_1438(uParam0, "RH1_TUT_EAGLEYE2", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
						func_414(&(Local_30.f_2), 8388608);
					}
				}
			}
			else if (!_0x45ab66d02b601fa7(player_id()) && !func_1988())
			{
				if (timera() > 5000)
				{
					if (!func_212())
					{
						func_708("RH1_LSE_TRACK", 10000, 0, 0, 0, 1);
						settimera(0);
					}
				}
			}
			else
			{
				settimera(0);
			}
			if (!func_388(Local_30.f_2, 16777216))
			{
				if (_0x3813e11a378958a5(player_id()) != 0)
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1438(uParam0, "RH1_BEAR_TRACK", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_414(&(Local_30.f_2), 16777216);
				}
				else if (!_0x1da5c5b0923e1b85(player_id()))
				{
					func_134(uParam0, 1);
				}
			}
			break;
		case 4:
			func_1438(uParam0, "RH1_TUT_EAGLEYE", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
			if (!does_blip_exist(Local_30.f_167))
			{
			}
			func_134(uParam0, 5);
			break;
		case 5:
			if (!func_388(Local_30.f_2, 256))
			{
				if (_0x45ab66d02b601fa7(player_id()))
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1438(uParam0, "RH1_BEAR_TRACK", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_134(uParam0, 6);
				}
			}
			break;
		case 6:
			if (!_0x45ab66d02b601fa7(player_id()))
			{
				func_134(uParam0, 4);
			}
			break;
		case 7:
			if (!func_388(Local_30.f_2, 8192))
			{
				if (!does_blip_exist(Local_30.f_167))
				{
				}
			}
			func_134(uParam0, 8);
			break;
		case 8:
			if (!func_388(Local_30.f_2, 256))
			{
				if (_0x45ab66d02b601fa7(player_id()) || func_1988())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1438(uParam0, "RH1_BEAR_TRACK", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_134(uParam0, 9);
					settimera(0);
				}
			}
			break;
		case 9:
			if (func_1989(Global_35) < 10f && !func_388(Local_30.f_2, 268435456))
			{
				if (!_0x45ab66d02b601fa7(player_id()))
				{
					func_1438(uParam0, "RH1_TUT_EAGLEYE2", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_414(&(Local_30.f_2), 268435456);
					func_134(uParam0, 10);
				}
			}
			else if (!_0x45ab66d02b601fa7(player_id()) && !func_1988())
			{
				if (timera() > 5000)
				{
					if (!func_212())
					{
						func_708("RH1_LSE_TRACK", 10000, 0, 0, 0, 1);
						settimera(0);
					}
				}
			}
			else
			{
				settimera(0);
			}
			break;
		case 15:
			if (!func_1403())
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1438(uParam0, "RH1_TUT_EAGLEYE4", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				if (func_1329(5))
				{
					func_1413(uParam0, func_171(), 1);
				}
				if (!func_388(Local_30.f_2, 2097152))
				{
					func_414(&(Local_30.f_2), 2097152);
					func_708("RH1_TUT_LGDZN", 10000, 0, 0, 0, 1);
				}
				func_414(&(Local_30.f_2), 1073741824);
				func_134(uParam0, 16);
			}
			break;
		case 16:
			if (func_1269(uParam0) > 0)
			{
				func_414(&(Local_30.f_2), 512);
				func_134(uParam0, 1);
			}
			if (!func_388(Local_30.f_2, 32768))
			{
				if (!func_212())
				{
					if (_0x45ab66d02b601fa7(player_id()))
					{
						func_708("RH1_TUT_LGD4", 10000, 0, 0, 0, 1);
						func_414(&(Local_30.f_2), 32768);
					}
				}
			}
			if (!func_388(Local_30.f_2, 4096))
			{
				if (func_1990())
				{
					if (!func_212())
					{
						func_708("RH1_TUT_LGD3", 10000, 0, 0, 0, 1);
						func_414(&(Local_30.f_2), 4096);
					}
				}
			}
			break;
		case 20:
			if (!func_1329(5))
			{
				func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
			}
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1438(uParam0, "RH1_HOSEA_RTRN", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_134(uParam0, 21);
			break;
	}
}

void func_1382(var uParam0)
{
	switch (Local_30.f_1)
	{
		case 0:
			Local_30.f_1++;
			break;
		case 1:
			if (is_screen_faded_in())
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_TRK_FND1", 0))
					{
						func_218(Local_30.f_168[0]);
						Local_30.f_1++;
					}
				}
			}
			break;
		case 2:
			if (func_388(Local_30.f_2, 4))
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_TRK_FND2", 0))
					{
						Local_30.f_1++;
					}
				}
			}
			else if (!func_388(Local_30.f_2, 128))
			{
				if (func_1991())
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RH1_TRK_CL1", 0))
						{
							func_414(&(Local_30.f_2), 128);
						}
					}
				}
			}
			else if (func_912(Local_30.f_168[0]) > 7f)
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_TRK_FCLUE", 0))
					{
						func_218(Local_30.f_168[0]);
					}
				}
			}
			break;
		case 3:
			if (func_1991())
			{
				if (func_912(Local_30.f_168[0]) > 1f)
				{
					if (!func_1403())
					{
						if (!func_1403())
						{
							if (func_1857(uParam0, "RH1_HOSEA_FISH", 0))
							{
								func_218(Local_30.f_168[0]);
								func_414(&(Local_30.f_2), 256);
								Local_30.f_1 = -1;
							}
						}
					}
				}
			}
			else if (!func_388(Local_30.f_2, 67108864))
			{
				if (!func_1403())
				{
					if (func_1988())
					{
						if (func_1857(uParam0, "RH1_TRK_FND3", 0))
						{
							func_414(&(Local_30.f_2), 67108864);
						}
					}
				}
			}
			else if (!func_388(Local_30.f_3, 64))
			{
				if (func_388(Local_30.f_2, 131072))
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RH1_TRK_WHOS1", 0))
						{
							func_414(&(Local_30.f_3), 64);
						}
					}
				}
			}
			break;
		case 4:
			if (func_1991())
			{
				if (func_912(Local_30.f_168[0]) > 1f)
				{
					if (!func_1403())
					{
						if (!func_1403())
						{
							if (func_1857(uParam0, "RH1_BEAR_POOP", 0))
							{
								func_218(Local_30.f_168[0]);
								func_414(&(Local_30.f_2), 256);
								Local_30.f_1 = -1;
							}
						}
					}
				}
			}
			else if (!func_388(Local_30.f_3, 128))
			{
				if (func_1252(Global_35, func_1391(), 1) < 10f)
				{
					if (func_388(Local_30.f_2, 524288))
					{
						if (!func_1403())
						{
							if (func_1857(uParam0, "RH1_TRK_WHOS2", 0))
							{
								func_414(&(Local_30.f_3), 128);
							}
						}
					}
				}
			}
			break;
		case 5:
			if (!func_1403())
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_TRAIL_END", 0))
					{
						func_218(Local_30.f_168[0]);
						func_414(&(Local_30.f_2), 256);
						Local_30.f_1 = -1;
					}
				}
			}
			break;
	}
	func_1992(uParam0);
	func_1993(uParam0);
}

void func_1383(var uParam0)
{
	if (is_ped_injured(func_171()))
	{
		return;
	}
	switch (Local_30.f_143[0]->f_2)
	{
		case 0:
			set_blocking_of_non_temporary_events(func_171(), true);
			Local_30.f_143[0]->f_2++;
			Local_30.f_313[0] = create_scenario_point(1546182539, 1562.946f, 1558.067f, 144.9768f, 148.4244f, 0, 0, 0);
			Local_30.f_313[1] = create_scenario_point(1546182539, 1567.029f, 1555.276f, 145.0236f, 203.4315f, 0, 0, 0);
			Local_30.f_313[2] = create_scenario_point(1546182539, 1569.501f, 1557.089f, 145.0503f, 295.5375f, 0, 0, 0);
			break;
		case 1:
			if (!has_ped_got_weapon(func_171(), -506285289, 0, false))
			{
				_give_weapon_to_ped_2(func_171(), -506285289, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				set_ped_drops_weapons_when_dead(func_171(), false);
			}
			if (has_ped_got_weapon(func_171(), -506285289, 0, false))
			{
				if (!func_1404(func_171(), 242628503))
				{
					vVar0 = { 1565.513f, 1554.123f, 146f };
					fVar3 = 129.65f;
					func_1577(0);
					if (func_1578(func_171()))
					{
						task_dismount_animal(0, 0, 0, 0, 0, 0);
					}
					func_1579(0);
					_0x437c08db4febe2bd(func_171(), "Searching", 1f, -1);
					Local_30.f_143[0]->f_2++;
				}
			}
			break;
		case 2:
			if (!func_1578(func_171()))
			{
				func_1577(0);
				set_sequence_to_repeat(Local_30.f_143[0]->f_13, true);
				task_follow_nav_mesh_to_coord(0, 1562.946f, 1558.067f, 144.9768f, 1f, -1, 0.25f, 0, 148.4244f);
				task_pause(0, 2000);
				task_follow_nav_mesh_to_coord(0, 1567.029f, 1555.276f, 145.0236f, 1f, -1, 0.25f, 0, 203.4315f);
				task_pause(0, 2000);
				task_follow_nav_mesh_to_coord(0, 1569.501f, 1557.089f, 145.0503f, 1f, -1, 0.25f, 0, 295.5375f);
				task_pause(0, 2000);
				close_sequence_task(Local_30.f_143[0]->f_13);
				task_perform_sequence(func_171(), Local_30.f_143[0]->f_13);
				clear_sequence_task(&(Local_30.f_143[0]->f_13));
				Local_30.f_143[0]->f_2 = 3;
			}
			break;
		case 3:
			if (func_388(Local_30.f_2, 4))
			{
				clear_ped_tasks(func_171(), 1, 0);
				task_turn_ped_to_face_entity(func_171(), Global_35, 0, -1082130432, -1082130432, -1082130432);
				_0x437c08db4febe2bd(func_171(), "Searching", 1f, -1);
				Local_30.f_143[0]->f_2 = 8;
				func_218(Local_30.f_168[0]);
				func_218(&(Local_30.f_143[0]->f_4));
				Local_30.f_1 = 3;
			}
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
			if (!func_388(Local_30.f_2, 512))
			{
				if (func_219(&(Local_30.f_143[0]->f_4)) > 2000)
				{
					func_414(&(Local_30.f_2), 512);
				}
			}
			if (func_1269(uParam0) >= 4 || func_1988())
			{
				func_1994();
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 9:
			if (func_1991())
			{
				func_1457(5);
				task_turn_ped_to_face_coord(func_171(), func_1390(), 0);
				Local_30.f_143[0]->f_2++;
			}
			else
			{
				func_1994();
			}
			break;
		case 10:
			if (func_1269(uParam0) == 6)
			{
				func_218(&(Local_30.f_143[0]->f_4));
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 11:
			if (func_912(&(Local_30.f_143[0]->f_4)) > 3f)
			{
				func_1994();
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 12:
			if (func_1991())
			{
				func_1457(5);
				task_turn_ped_to_face_coord(func_171(), func_1391(), 0);
				Local_30.f_143[0]->f_2++;
			}
			else
			{
				func_1994();
			}
			break;
		case 13:
			if (func_1269(uParam0) == 8)
			{
				func_218(&(Local_30.f_143[0]->f_4));
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 14:
			if (func_912(&(Local_30.f_143[0]->f_4)) > 3f)
			{
				func_1994();
			}
			break;
	}
}

void func_1384()
{
	if (!func_388(Local_30.f_3, 32))
	{
		if (_0x3813e11a378958a5(player_id()) != 0)
		{
			func_414(&(Local_30.f_3), 32);
		}
	}
	else if (_0x3813e11a378958a5(player_id()) == 0)
	{
		func_1301(&(Local_30.f_3), 32);
	}
}

void func_1385()
{
	if (!func_388(Local_30.f_2, 1024))
	{
		Var0 = { func_94(85200619) };
		if (stat_id_get_int(&Var0, &(Local_30.f_39)))
		{
			func_414(&(Local_30.f_2), 1024);
		}
	}
}

bool func_1386(vector3 vParam0, float fParam3)
{
	if (!does_entity_exist(func_181()))
	{
		if (func_1414(vParam0, fParam3))
		{
			set_blocking_of_non_temporary_events(func_181(), true);
			freeze_entity_position(func_181(), true);
		}
	}
	if (!does_entity_exist(func_181()))
	{
		return false;
	}
	return true;
}

bool func_1387()
{
	if ((func_1394(func_181(), "hunting1_BearTrackingSalmon", 1, 1061360239, 1053609165, 0, 0, 0) && func_1394(func_181(), func_411(4), 1, 1061360239, 1053609165, 0, 0, 0)) && func_1394(func_181(), func_411(5), 1, 1061360239, 1053609165, 0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_1388()
{
	if (!does_entity_exist(Local_30.f_249))
	{
		Local_30.f_249 = create_object(func_409(), func_1995(), true, true, false, false, true);
	}
	if (!does_entity_exist(Local_30.f_249))
	{
		return false;
	}
	if (!does_entity_exist(Local_30.f_248))
	{
		Local_30.f_248 = create_object(-841644977, func_1390(), true, true, false, false, true);
		set_entity_rotation(Local_30.f_248, 0f, 90f, 0f, 2, true);
	}
	if (!does_entity_exist(Local_30.f_248))
	{
		return false;
	}
	if (!does_entity_exist(Local_30.f_250))
	{
		Local_30.f_250 = create_object(1913959575, func_1391(), true, true, false, false, true);
	}
	if (!does_entity_exist(Local_30.f_250))
	{
		return false;
	}
	if (does_entity_exist(Local_30.f_249))
	{
		freeze_entity_position(Local_30.f_249, true);
		_0x543dfe14be720027(player_id(), Local_30.f_249, 0);
		_0x6ecfc621a168424c(Local_30.f_249, Local_30.f_249, 0, 0);
	}
	if (does_entity_exist(Local_30.f_248))
	{
		freeze_entity_position(Local_30.f_248, true);
	}
	if (does_entity_exist(Local_30.f_250))
	{
	}
	return true;
}

Vector3 func_1389()
{
	return 1551.115f, 1586.794f, 146.099f;
}

Vector3 func_1390()
{
	return 1531.553f, 1608.043f, 145.6916f;
}

Vector3 func_1391()
{
	return 1533.722f, 1645.945f, 140.9289f;
}

bool func_1392(var uParam0)
{
	switch (Local_30.f_43)
	{
		case 0:
			if (does_entity_exist(func_181()))
			{
				if (!_0x0e6846476906c9dd(player_id(), func_181()))
				{
					_0x543dfe14be720027(player_id(), func_181(), 0);
					set_ped_reset_flag(func_181(), 170, true);
					Local_30.f_43++;
				}
			}
			break;
		case 1:
			if (func_1996())
			{
				if (func_1997())
				{
					if (func_388(Local_30.f_2, 2048))
					{
						func_1301(&(Local_30.f_2), 2048);
						func_134(uParam0, 15);
					}
					Local_30.f_43++;
				}
				else if (!func_388(Local_30.f_2, 2048))
				{
					func_414(&(Local_30.f_2), 2048);
					func_134(uParam0, 20);
				}
			}
			break;
		case 2:
			if (func_1997())
			{
				if (func_1398(Local_30.f_249, func_1995(), func_1396(), func_1397(0), &(Local_30.f_302), 0))
				{
					func_218(Local_30.f_168[1]);
					func_1393();
					_0x9dae1380cc5c6451(player_id(), func_181());
					_0xe5d3eb37abc1eb03(player_id());
					func_1399();
					Local_30.f_43++;
				}
			}
			else
			{
				Local_30.f_43 = (Local_30.f_43 - 1);
			}
			break;
		case 3:
			if (func_1400())
			{
				func_1401();
				Local_30.f_43++;
			}
			break;
		case 4:
			if (func_1386(1464.936f, 1775.879f, 161.6783f, 192.1736f))
			{
				Local_30.f_43 = 99;
				return true;
			}
			break;
		case 99:
			return true;
	}
	return false;
}

void func_1393()
{
	func_1998();
}

bool func_1394(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!get_is_waypoint_recording_loaded(sParam1))
	{
		return false;
	}
	if (!waypoint_recording_get_num_points(sParam1, &iVar0))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return false;
	}
	if (_0x29ba9f78321e5a6c(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0, iParam6, 0, iParam7))
	{
		return true;
	}
	return false;
}

float func_1395(int iParam0)
{
	vVar0 = { func_1389() };
	return func_1252(iParam0, vVar0, 1);
}

struct<4> func_1396()
{
	if (!func_388(Local_30.f_2, 4))
	{
		StringCopy(&cVar0, "HNT1_INS_FT2", 32);
	}
	else if (!func_388(Local_30.f_2, 4194304))
	{
		StringCopy(&cVar0, "HNT1_INS_FSH2", 32);
	}
	else
	{
		StringCopy(&cVar0, "HNT1_INS_EXC2", 32);
	}
	return cVar0;
}

struct<4> func_1397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "HNT1_INS_FT3", 32);
			break;
		case 1:
			StringCopy(&cVar0, "HNT1_INS_FSH3", 32);
			break;
		case 3:
			StringCopy(&cVar0, "HNT1_INS_EXC3", 32);
			break;
	}
	return cVar0;
}

bool func_1398(int iParam0, vector3 vParam1, char[4] cParam4, int iParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, var uParam12, int iParam13)
{
	bVar2 = false;
	iVar3 = 0;
	bVar4 = is_ped_on_mount(Global_35);
	bVar5 = false;
	if (bVar4)
	{
		iVar0 = 1750;
	}
	else
	{
		iVar0 = 6000;
	}
	set_ped_reset_flag(Global_35, 211, true);
	if (!func_388(Local_30.f_3, 2))
	{
		bVar6 = true;
		if (does_entity_exist(iParam0))
		{
			iVar7 = iParam0;
			fVar8 = func_1999(Global_35, iParam0, 1);
			if (func_2000(iParam0, fVar8))
			{
				if (!bVar2)
				{
					bVar2 = true;
				}
				if (func_2001(fVar8))
				{
					if (_0xa24c1d341c6e0d53(1, 0, 0))
					{
						set_ped_max_move_blend_ratio(Global_35, 0.55f);
					}
					else
					{
						set_ped_max_move_blend_ratio(Global_35, 0.101f);
					}
					if (!func_388(Local_30.f_3, 16))
					{
						func_2002(Global_35, Local_30.f_562[iParam13], 999999, iParam0);
						func_414(&(Local_30.f_3), 16);
					}
					if (!func_388(Local_30.f_3, 4))
					{
						set_pad_shake(0, 200, 125);
						func_414(&(Local_30.f_3), 4);
					}
					bVar6 = false;
					if (!func_10(*uParam12))
					{
						*uParam12 = func_2003("INSPECT_GENERIC", -719620017, iParam0, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
						func_2004(uParam12, iParam0);
						if (func_1988())
						{
						}
						func_2005(*uParam12, 10f, 0);
					}
					else if (fVar8 <= 6.25f)
					{
						_uiprompt_set_ambient_group_this_frame(iParam0, 2.5f, 3, 1, _uiprompt_get_group_id_for_target_entity(iParam0), &cParam4, 0);
						func_2006(*uParam12, 1, 1);
					}
					else
					{
						func_2006(*uParam12, 0, 1);
					}
					if (func_2007(*uParam12, 1))
					{
						func_2006(*uParam12, 0, 1);
						Local_30.f_122 = 0f;
						func_414(&(Local_30.f_3), 2);
						func_218(Local_30.f_168[4]);
						if (_0x45ab66d02b601fa7(player_id()))
						{
							_0x64ff4bf9af59e139(player_id(), 1);
						}
						_0xa22712e8471aa08e(get_object_index_from_entity_index(iParam0), 0, 0);
						_0xdc5e09d012d759c4(Local_30.f_248, Local_30.f_248, 0);
						set_player_control(player_id(), false, 256, false);
						_hide_ped_weapons(Global_35, 2, false);
						task_swap_weapon(Global_35, 0, 1, 0, 0);
						open_sequence_task(&iVar1);
						task_turn_ped_to_face_coord(0, vParam1, 0);
						close_sequence_task(iVar1);
						if (!is_ped_on_mount(Global_35))
						{
							if (!_get_ped_crouch_movement(Global_35))
							{
							}
						}
						task_perform_sequence(Global_35, iVar1);
						clear_sequence_task(&iVar1);
						func_414(&(Local_30.f_3), 8);
						func_218(Local_30.f_168[0]);
					}
				}
				else if (func_388(Local_30.f_3, 4))
				{
					_0xe98d55c5983f2509(iVar7);
					_0xa22712e8471aa08e(get_object_index_from_entity_index(iVar7), 0, 0);
					func_1301(&(Local_30.f_3), 4);
					func_1301(&(Local_30.f_3), 16);
				}
			}
			else if (func_388(Local_30.f_3, 4))
			{
				_0xe98d55c5983f2509(iVar7);
				_0xa22712e8471aa08e(get_object_index_from_entity_index(iVar7), 0, 0);
				func_1301(&(Local_30.f_3), 4);
				func_1301(&(Local_30.f_3), 16);
			}
			if (bVar6)
			{
				func_11(uParam12, 1, 1);
			}
		}
	}
	else
	{
		if (func_10(*uParam12))
		{
			_uiprompt_set_ambient_group_this_frame(iParam0, 2.5f, 3, 1, _uiprompt_get_group_id_for_target_entity(iParam0), &cParam8, 0);
		}
		if (func_2008(iVar0))
		{
			bVar5 = true;
			if (func_2009(iParam13))
			{
				func_414(&(Local_30.f_3), 256);
				func_2010(Global_35);
				set_player_control(player_id(), true, 0, false);
				iVar3 = 1;
			}
		}
	}
	set_ped_config_flag(Global_35, 308, bVar2);
	if (!_0xa24c1d341c6e0d53(1, 0, 0))
	{
		if (!is_ped_on_mount(Global_35))
		{
			func_2011(iParam13, bVar5);
		}
	}
	else
	{
		func_2012(iParam0, iParam13, bVar5);
	}
	return iVar3;
}

void func_1399()
{
	if (does_entity_exist(func_181()))
	{
		iVar0 = func_181();
		delete_ped(&iVar0);
	}
}

bool func_1400()
{
	if (func_388(Local_30.f_2, 134217728))
	{
		return true;
	}
	if (!does_entity_exist(func_181()))
	{
		func_2013();
		return true;
	}
	return false;
}

void func_1401()
{
	func_1301(&(Local_30.f_2), 134217728);
}

bool func_1402()
{
	if (func_1252(Global_35, func_2014(), 1) <= 5f)
	{
		return true;
	}
	if (is_entity_in_volume(Global_35, &(Local_30.f_254[18]), true, 0))
	{
		return true;
	}
	if (!func_26(Local_30.f_168[17]))
	{
		if (func_1252(Global_35, func_2014(), 1) <= 10f)
		{
			func_218(Local_30.f_168[17]);
		}
	}
	else if (func_912(Local_30.f_168[17]) >= 15f)
	{
		return true;
	}
	return false;
}

bool func_1403()
{
	return func_2015(1);
}

bool func_1404(int iParam0, int iParam1)
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

void func_1405(int iParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4)
{
	bVar0 = true;
	if (func_1999(Global_35, iParam0, 1) > 6.25f)
	{
		bVar0 = false;
	}
	if (func_1988())
	{
		bVar0 = false;
	}
	if (_0x1da5c5b0923e1b85(player_id()))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		_uiprompt_set_ambient_group_this_frame(iParam0, 2.5f, 1, 1, _uiprompt_get_group_id_for_target_entity(iParam0), &cParam1, 0);
	}
}

void func_1406(var uParam0)
{
	if (func_2016())
	{
		func_2017(uParam0);
	}
}

void func_1407(var uParam0)
{
	if (func_2016())
	{
		func_2018(uParam0);
	}
}

void func_1408(var uParam0)
{
	if (func_2016())
	{
		func_2019(uParam0);
	}
}

void func_1409(var uParam0)
{
	if (func_2016())
	{
		func_2020(uParam0);
	}
}

bool func_1410()
{
	return func_388(Local_30.f_2, 512);
}

int func_1411(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 <= -1 || iParam1 >= 27)
	{
		return 0;
	}
	if (!bParam2)
	{
		func_99(uParam0, 512);
	}
	func_1250(uParam0, func_33(uParam0), iParam1);
	if (bParam3)
	{
		func_935(uParam0, iParam1, 2);
	}
	if (bParam4)
	{
		func_2021(uParam0);
	}
	return 1;
}

int func_1412(var uParam0)
{
	func_1384();
	switch (func_1269(uParam0))
	{
		case 0:
			if (func_1651(Global_35, func_2022(), 16f, 1, 1) || func_2023(Global_35, func_2022(), 1568.554f, 1718.991f, 149.6878f))
			{
				func_414(&(Local_30.f_2), 32);
				func_414(&(Local_30.f_2), 16384);
				func_414(&(Local_30.f_2), 32768);
				_0x28a13bf6b05c3d83(player_id(), 1);
				remove_blip(&(Local_30.f_167));
				func_133(uParam0, 1);
				func_134(uParam0, 2);
			}
			break;
		case 1:
			_0xfa437fa0738c370c(player_id(), 1f, 1, 0, 0);
			StringCopy(&cVar0, "HNT1_INS_FSH2", 32);
			StringCopy(&cVar4, "HNT1_INS_FSH3", 32);
			if (func_1398(Local_30.f_248, func_2024(), cVar0, cVar4, &(Local_30.f_303), 2) || func_388(Local_30.f_2, 131072))
			{
				if (!func_180(13))
				{
					_0x28a13bf6b05c3d83(player_id(), 0);
				}
				if (does_blip_exist(Local_30.f_167))
				{
					remove_blip(&(Local_30.f_167));
				}
				func_414(&(Local_30.f_2), 65536);
				func_1301(&(Local_30.f_2), 32768);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_134(uParam0, -1);
				_0x64ff4bf9af59e139(get_player_index(), 1);
				_0x9dae1380cc5c6451(player_id(), func_181());
				_0xe5d3eb37abc1eb03(player_id());
				func_133(uParam0, 2);
			}
			break;
		case 2:
			if (func_902(Global_35, func_171(), 1, 1) < 48f)
			{
				return 1;
			}
			else if (func_902(Global_35, func_171(), 1, 1) < 60f)
			{
				if (!func_388(Local_30.f_2, 262144))
				{
					func_414(&(Local_30.f_2), 262144);
				}
			}
			break;
	}
	if (func_388(Local_30.f_2, 65536))
	{
		StringCopy(&cVar8, "HNT1_INS_FSH3", 32);
		func_1405(Local_30.f_248, cVar8);
	}
	return 0;
}

void func_1413(var uParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_1945(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_1946(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_455(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_1944(uParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_2025(iParam1);
		}
	}
	if (func_1944(uParam0, iParam1))
	{
		func_2026(uParam0, iParam1, 1024);
		if (bParam2)
		{
			func_1947(uParam0, iParam1, 128);
		}
		else
		{
			func_2026(uParam0, iParam1, 128);
		}
		if (func_975(uParam0, iParam1, &iVar3))
		{
			func_1589(uParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1949(iVar1);
	}
}

bool func_1414(vector3 vParam0, float fParam3)
{
	iVar0 = -1124266369;
	if (!does_entity_exist(Local_30.f_161))
	{
		Local_30.f_161 = func_1253(iVar0, vParam0, fParam3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(Local_30.f_161, true);
		set_ped_relationship_group_hash(Local_30.f_161, -989642646);
		_set_ped_body_component(Local_30.f_161, 597297690);
		_update_ped_variation(Local_30.f_161, false, true, true, true, false);
		set_entity_invincible(Local_30.f_161, true);
		set_ped_combat_attributes(Local_30.f_161, 5, true);
		set_ped_combat_attributes(Local_30.f_161, 46, true);
		set_ped_combat_attributes(Local_30.f_161, 50, true);
		_0x8b6f0f59b1b99801(Local_30.f_161, 2);
		set_animal_tuning_bool_param(func_181(), 31, true);
		_0x4f27603e44a8e4c0(Local_30.f_161, 4, 1);
		_0x4f27603e44a8e4c0(Local_30.f_161, 6, 1);
		_0x4f27603e44a8e4c0(Local_30.f_161, 7, 1);
		_0x4f27603e44a8e4c0(Local_30.f_161, 8, 1);
		set_entity_proofs(Local_30.f_161, 6, false);
		set_ped_config_flag(Local_30.f_161, 388, true);
	}
	if (does_entity_exist(Local_30.f_161))
	{
		return true;
	}
	return false;
}

void func_1415(int iParam0)
{
	Local_30.f_527 = iParam0;
}

void func_1416()
{
	set_anim_scene_entity(&(Local_30.f_13[16]), "ARTHUR", Global_35, 0);
	set_anim_scene_entity(&(Local_30.f_13[16]), "HoseaMatthews", func_171(), 0);
	if (has_ped_got_weapon(func_171(), -506285289, 0, false))
	{
		set_current_ped_weapon(func_171(), -506285289, true, 0, false, false);
		set_anim_scene_entity(&(Local_30.f_13[16]), "w_rifle_boltaction01", get_current_ped_weapon_entity_index(func_171(), 0), 0);
	}
	start_anim_scene(&(Local_30.f_13[16]));
}

void func_1417()
{
	Local_30.f_254[16] = _0x0eb78c2b156635b1(665633627, 1513.175f, 1688.825f, 140.7891f, 0f, 0f, 0f, 2f, 2f, 1f);
	_0x5b23dff8e0948bb2(&(Local_30.f_254[16]), 1);
}

int func_1418()
{
	switch (Local_30.f_527)
	{
		case 0:
			func_2027();
			func_1446();
			set_ped_using_action_mode(Global_35, true, -1, 0);
			set_player_forced_aim(player_id(), true, func_181(), -1, false);
			set_ped_config_flag(Global_35, 511, true);
			set_player_control(player_id(), true, 0, false);
			func_2028(1);
			func_1415(1);
			break;
		case 1:
			if (!_0xb16223cb7da965f0(player_id()))
			{
				set_player_forced_aim(player_id(), false, func_181(), -1, false);
				set_ped_config_flag(Global_35, 511, false);
				set_ped_using_action_mode(Global_35, false, -1, 0);
				func_1415(2);
			}
			break;
		case 2:
			break;
	}
	if (Local_30.f_527 > 0 && Local_30.f_527 < 2)
	{
		set_ped_reset_flag(player_ped_id(), 159, true);
	}
	return 0;
}

void func_1419(var uParam0)
{
	bVar0 = false;
	switch (func_1850(uParam0))
	{
		case 0:
			if (bVar0)
			{
				if (Local_30.f_530 > 0)
				{
					if (Local_30.f_433.f_55 >= 7)
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
						if (func_2029(Global_40.f_9145, 1))
						{
							func_1438(uParam0, "RH1_BEAR_SHOOT", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
						}
						func_134(uParam0, -1);
					}
				}
			}
			else
			{
				func_1438(uParam0, "RH1_BEAR_SHOOT", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_134(uParam0, -1);
			}
			break;
		case 1:
			if (func_912(Local_30.f_168[1]) > 3f)
			{
				func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1438(uParam0, "RH1_HOSEA_GO", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_218(Local_30.f_168[1]);
				func_134(uParam0, 2);
			}
			break;
		case 2:
			if (!func_212())
			{
				if (func_912(Local_30.f_168[1]) > 3f)
				{
					func_708("RH1_TUT_LGDAN", 10000, 0, 0, 0, 1);
					func_134(uParam0, -1);
				}
			}
			break;
	}
}

void func_1420(var uParam0)
{
	switch (Local_30.f_1)
	{
		case 0:
			if (func_388(Local_30.f_2, 2))
			{
				if (func_912(Local_30.f_168[0]) >= 7f)
				{
					if (!func_1403())
					{
						if (func_1857(uParam0, "RH1_ISITGONE", 0))
						{
							func_218(Local_30.f_168[0]);
						}
					}
				}
			}
			break;
	}
}

void func_1421(var uParam0)
{
	if (is_ped_injured(func_171()))
	{
		return;
	}
	switch (Local_30.f_143[0]->f_2)
	{
		case 0:
			if (!Local_30.f_136)
			{
				if (func_1963(&(Local_30.f_13[14]), "pl_early_react_loop"))
				{
					_set_anim_scene_playback_list_bool(&(Local_30.f_13[14]), "pl_early_react_loop", true);
					Local_30.f_143[0]->f_2++;
				}
			}
			else
			{
				func_1416();
				Local_30.f_143[0]->f_2++;
			}
			break;
	}
}

void func_1422(var uParam0)
{
	switch (Local_30.f_10)
	{
		case 0:
			if (!is_ped_injured(func_181()))
			{
				set_entity_invincible(func_181(), false);
				set_blocking_of_non_temporary_events(func_181(), true);
				if (does_blip_exist(Local_30.f_167))
				{
					remove_blip(&(Local_30.f_167));
				}
				func_1854(func_181(), 831283580, 1, 1);
				if (!Local_30.f_140)
				{
					Local_30.f_140 = 1;
					if (!is_ped_injured(Global_35))
					{
						set_ped_reset_flag(Global_35, 134, false);
					}
					open_sequence_task(&(Local_30.f_336));
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(Local_30.f_336);
					task_perform_sequence(func_181(), Local_30.f_336);
					clear_sequence_task(&(Local_30.f_336));
				}
				Local_30.f_10++;
			}
			break;
		case 1:
			Local_30.f_10++;
			break;
		case 2:
			_0x600bbdd29820370c(func_181());
			if (func_2030())
			{
				if ((_0x0e99e3bf11bb6367(func_181()) || _0x3bdfcf25b58b0415(func_171())) || is_ped_performing_melee_action(func_181(), 4096, 0))
				{
					_0x8301d87b1b89e219(Global_35, -83520643);
					_0x789dabd18e9024db(func_181(), 4096, 0);
					clear_ped_tasks(func_181(), 1, 0);
					clear_ped_tasks(func_181(), 1, 0);
				}
				Local_30.f_10++;
			}
			else if (func_2031())
			{
			}
			break;
		case 3:
			if (!is_ped_performing_melee_action(func_181(), 4096, 0) || !func_983(func_181(), 0))
			{
				set_ped_can_be_targetted(func_171(), true);
				if (func_983(func_181(), 0))
				{
					func_2025(func_181());
					clear_ped_tasks(func_181(), 1, 0);
					set_blocking_of_non_temporary_events(func_181(), true);
					open_sequence_task(&(Local_30.f_336));
					task_clear_look_at(0);
					task_follow_waypoint_recording(0, func_411(6), 0, 522, -1, 0, 0, -1);
					close_sequence_task(Local_30.f_336);
					task_perform_sequence(func_181(), Local_30.f_336);
					clear_sequence_task(&(Local_30.f_336));
				}
				Local_30.f_10++;
			}
			break;
		case 4:
			if ((Local_30.f_530 == 2 || func_388(Local_30.f_2, 16)) || Local_30.f_527 == 2)
			{
				func_414(&(Local_30.f_2), 2);
				Local_30.f_10++;
			}
			break;
		case 5:
			if (does_entity_exist(func_181()))
			{
				if (get_script_task_status(func_181(), 242628503, true) != 1)
				{
					if (func_1252(func_181(), 1438f, 1817f, 169f, 1) < 10f)
					{
						iVar0 = func_181();
						delete_entity(&iVar0);
					}
				}
			}
			break;
	}
	if (Local_30.f_10 >= 4)
	{
		if (!is_ped_injured(func_181()))
		{
			if (is_waypoint_playback_going_on_for_ped(func_181(), 0))
			{
				waypoint_playback_override_speed(func_181(), 2.5f, 0, -1082130432, 0);
			}
		}
	}
	if (!is_ped_injured(func_181()))
	{
		if (Local_30.f_10 < 4)
		{
			set_ped_reset_flag(func_181(), 258, true);
		}
	}
}

bool func_1423(var uParam0)
{
	if (!func_388(Local_30.f_4, 16))
	{
		if (!func_1403())
		{
			if (func_1857(uParam0, "RH1_EXT_LEADINH", 0))
			{
				func_414(&(Local_30.f_4), 16);
			}
		}
	}
	if (!func_388(Local_30.f_4, 4))
	{
		if (!is_ped_injured(func_171()))
		{
			if (func_902(Global_35, func_171(), 1, 1) < 5f)
			{
				if (!func_1403())
				{
					func_414(&(Local_30.f_4), 4);
				}
			}
		}
	}
	else if (!func_1403())
	{
		if (func_1029())
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		}
		return true;
	}
	return false;
}

void func_1424()
{
	if (!func_983(func_181(), 0))
	{
		return;
	}
	if (has_entity_been_damaged_by_entity(func_181(), Global_35, 1, 1))
	{
		Local_30.f_12++;
		Local_30.f_11++;
		clear_entity_last_damage_entity(func_181());
	}
	if (func_2032(func_181(), 1090519040, 1103626240, 1097859072, 0) && func_2033(&Global_35))
	{
		Local_30.f_11++;
	}
	func_1426(0);
}

bool func_1425(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1426(bool bParam0)
{
	if (!func_983(func_181(), 0))
	{
		return;
	}
	if (!Local_30.f_139)
	{
		if (Local_30.f_12 >= 6 || bParam0)
		{
			set_entity_invincible(func_181(), true);
			Local_30.f_139 = 1;
		}
	}
}

bool func_1427()
{
	return Local_30.f_12 >= 6;
}

void func_1428(var uParam0, int iParam1)
{
	iVar0 = func_719(func_12(uParam0->f_607));
	if (func_720(iVar0))
	{
		func_2034(iVar0, iParam1);
	}
}

void func_1429(var uParam0)
{
	if (func_2035())
	{
		func_2036(uParam0);
	}
}

void func_1430(var uParam0)
{
	if (func_2035())
	{
		func_2037(uParam0);
	}
}

void func_1431(var uParam0)
{
	if (is_ped_injured(func_171()))
	{
		return;
	}
	switch (Local_30.f_143[0]->f_2)
	{
		case 0:
			if (Local_30.f_1 > 0)
			{
				if (!func_1403())
				{
					_0x437c08db4febe2bd(func_171(), "Cautious", 1f, -1);
					if (!func_1404(func_171(), 242628503))
					{
						func_1577(0);
						if (func_1578(func_171()))
						{
							task_dismount_animal(0, 0, 0, 0, 0, 0);
						}
						task_follow_nav_mesh_to_coord(0, 1503.132f, 1693.436f, 139.504f, 1f, -1, 0.25f, 0, 40000f);
						task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						task_follow_nav_mesh_to_coord(0, 1550.435f, 1577.504f, 146.6849f, 1f, -1, 0.25f, 0, 342.6649f);
						func_1579(0);
					}
					Local_30.f_143[0]->f_2++;
				}
			}
			break;
		case 1:
			if (func_2038())
			{
				clear_ped_tasks(func_171(), 1, 0);
				set_blocking_of_non_temporary_events(func_171(), true);
				vVar0 = { func_1442(&(Local_30.f_13[14]), "IG_HoseaMatthews ", "pl_boulder_loop") };
				fVar3 = func_1443(&(Local_30.f_13[14]), "IG_HoseaMatthews ", "pl_boulder_loop");
				task_follow_nav_mesh_to_coord(func_171(), vVar0, 2f, -1, 0.25f, 0, fVar3);
				if (has_ped_got_weapon(func_171(), -506285289, 0, false))
				{
					set_current_ped_weapon(func_171(), -506285289, true, 0, false, false);
				}
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 2:
			if (func_1252(func_171(), 1513.371f, 1686.808f, 139.703f, 1) < 10f)
			{
				if (!func_1404(func_171(), 713668775))
				{
					func_2039();
					Local_30.f_143[0]->f_2++;
				}
			}
			break;
	}
}

int func_1432(var uParam0)
{
	switch (func_1269(uParam0))
	{
		case 0:
			if (func_2040())
			{
				func_134(uParam0, 2);
				func_133(uParam0, 1);
			}
			break;
		case 1:
			if (func_388(Local_30.f_2, 1))
			{
				if (func_1252(Global_35, func_2041(), 1) < 5f)
				{
					func_218(Local_30.f_168[1]);
					func_134(uParam0, 7);
					func_133(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_388(Local_30.f_2, 2))
			{
				if (func_912(Local_30.f_168[1]) > 5f)
				{
					func_414(&(Local_30.f_2), 2);
					_0x437c08db4febe2bd(Global_35, "Cautious", 1f, -1);
				}
			}
			else if (func_388(Local_30.f_2, 33554432))
			{
				return 1;
			}
			break;
	}
	if (func_388(Local_30.f_2, 64))
	{
		func_2042(iLocal_14, 1.5f);
	}
	return 0;
}

void func_1433(var uParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1615(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != uParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		uParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(uParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_139(uParam0, func_33(uParam0), 33554432);
}

void func_1434(var uParam0)
{
	if (is_ped_injured(func_171()))
	{
		return;
	}
	func_2043(uParam0);
	switch (Local_30.f_143[0]->f_2)
	{
		case 0:
			func_2044();
			func_218(&(Local_30.f_143[0]->f_4));
			Local_30.f_143[0]->f_2++;
			break;
		case 1:
			if (!func_388(Local_30.f_2, 1))
			{
				if (_is_anim_scene_started(&(Local_30.f_13[15]), false))
				{
					if (_get_anim_scene_time(&(Local_30.f_13[15])) > 18.5f)
					{
						func_414(&(Local_30.f_2), 1);
						func_500(1);
						Local_30.f_143[0]->f_2++;
					}
				}
			}
			break;
		case 2:
			if (func_1252(func_171(), func_2045(), 1) < 10f)
			{
				func_414(&(Local_30.f_2), 1);
				Local_30.f_143[0]->f_2++;
			}
			else if ((get_frame_count() % 50) == 0)
			{
				if (_is_anim_scene_started(&(Local_30.f_13[15]), false))
				{
				}
			}
			break;
		case 3:
			if (func_388(Local_30.f_2, 2))
			{
				set_blocking_of_non_temporary_events(func_171(), true);
				set_ped_config_flag(func_171(), 159, true);
				set_ped_can_be_targetted(func_171(), false);
				_0xfd6943b6df77e449(func_171(), false);
				func_218(&(Local_30.f_143[0]->f_4));
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 4:
			if (func_388(Local_30.f_2, 2048))
			{
				bVar0 = true;
			}
			if (func_388(Local_30.f_2, 8192))
			{
				bVar0 = true;
			}
			if (func_1425(&(Local_30.f_433), 16))
			{
				bVar0 = true;
			}
			if (Local_30.f_527 > 0)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_414(&(Local_30.f_2), 64);
				Local_30.f_143[0]->f_2++;
			}
			break;
		case 5:
			func_1416();
			Local_30.f_143[0]->f_2++;
			break;
	}
}

void func_1435(var uParam0)
{
	switch (func_1850(uParam0))
	{
		case 0:
			if (_is_anim_scene_started(&(Local_30.f_13[15]), false))
			{
				if (_get_anim_scene_time(&(Local_30.f_13[15])) >= 3.5f)
				{
					func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1438(uParam0, "HOSEA_FOLLOW", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_134(uParam0, 4);
				}
			}
			break;
		case 1:
			if (func_912(Local_30.f_168[1]) > 3f)
			{
				func_1330(uParam0, func_171(), 1105014447, 422991367, 1, 1);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1438(uParam0, "RH1_HOSEA_GO", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_218(Local_30.f_168[1]);
				func_134(uParam0, 2);
			}
			break;
		case 2:
			if (!func_212())
			{
				if (func_912(Local_30.f_168[1]) > 3f)
				{
					func_708("RH1_TUT_LGDAN", 10000, 0, 0, 0, 1);
					func_134(uParam0, -1);
				}
			}
			break;
		case 4:
			if (func_388(Local_30.f_2, 65536))
			{
				func_1438(uParam0, "RH1_BEAR_SHOOT", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_134(uParam0, -1);
			}
			break;
		case 5:
			func_1438(uParam0, "RH1_DISMOUNT", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_1413(uParam0, func_171(), 1);
			func_134(uParam0, -1);
			break;
	}
}

void func_1436()
{
	if (does_entity_exist(Global_1392040->f_9))
	{
		if (func_2046(Global_1392040->f_9, 1498.356f, 1693.405f, 140.2256f, 1) >= 25f)
		{
			set_entity_coords(Global_1392040->f_9, 1498.356f, 1693.405f, 140.2256f, true, false, true, true);
		}
	}
}

void func_1437()
{
	bVar0 = true;
	if (func_1441())
	{
		bVar0 = false;
	}
	if (does_entity_exist(Global_1392040->f_9))
	{
		fVar1 = func_1999(Global_35, Global_1392040->f_9, 1);
		if (!func_388(Local_30.f_2, 16777216))
		{
			if (fVar1 > 25f)
			{
				bVar0 = false;
			}
		}
		else if (fVar1 > 56.25f)
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (!func_388(Local_30.f_2, 16777216))
		{
			func_414(&(Local_30.f_2), 16777216);
			if (_get_ped_crouch_movement(Global_35))
			{
				task_set_crouch_movement(Global_35, false, 0, false);
			}
		}
		disable_control_action(0, -620139643, false);
	}
	else if (func_388(Local_30.f_2, 16777216))
	{
		func_1301(&(Local_30.f_2), 16777216);
	}
}

var func_1438(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
	func_1433(uParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
	if (bParam4)
	{
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_953(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
	}
	else if (!func_2047(uParam0, sParam1))
	{
		sVar1 = func_1615(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_1614(sVar1, iParam3, 0, 0, 0, 1);
	}
	return uVar0;
}

void func_1439()
{
	if (is_bit_set(&Global_1357510, 4))
	{
	}
	else
	{
		set_bit(Global_1357510, 0);
	}
}

void func_1440(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!func_388(Local_30.f_2, 8388608))
		{
			fVar0 = func_902(Global_35, iParam0, 1, 1);
			if (fVar0 <= 5f)
			{
				if (!func_10(Local_30.f_297))
				{
					Local_30.f_297 = func_2003("INSPECT_GENERIC", -719620017, iParam0, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_2004(&(Local_30.f_297), iParam0);
					func_2005(Local_30.f_297, 10f, 0);
				}
				else if (fVar0 <= 4.5f)
				{
					_uiprompt_set_ambient_group_this_frame(iParam0, 4.5f, 3, 1, _uiprompt_get_group_id_for_target_entity(iParam0), "HNT1_INS_BAIT", 0);
					func_2006(Local_30.f_297, 1, 1);
				}
				else
				{
					func_2006(Local_30.f_297, 0, 1);
				}
				if (func_2007(Local_30.f_297, 1))
				{
					func_2006(Local_30.f_297, 0, 1);
					func_11(&(Local_30.f_297), 1, 1);
					func_414(&(Local_30.f_2), 8388608);
				}
			}
			else if (func_10(Local_30.f_297))
			{
				func_11(&(Local_30.f_297), 1, 1);
			}
		}
	}
}

bool func_1441()
{
	return func_388(Local_30.f_2, 8388608);
}

Vector3 func_1442(int iParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !is_string_null_or_empty(sParam2);
	if (_get_anim_scene_entity_matrix(iParam0, sParam1, &vVar0, bVar12, sParam2, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

float func_1443(int iParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return 40000f;
	}
	bVar12 = !is_string_null_or_empty(sParam2);
	if (_get_anim_scene_entity_matrix(iParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_3.f_2;
	}
	return 40000f;
}

void func_1444()
{
	set_anim_scene_entity(&(Local_30.f_13[13]), "ARTHUR", Global_35, 0);
	set_anim_scene_entity(&(Local_30.f_13[13]), "IG_HoseaMatthews ", func_171(), 0);
	set_anim_scene_entity(&(Local_30.f_13[13]), "bear", func_181(), 0);
	start_anim_scene(&(Local_30.f_13[13]));
}

void func_1445()
{
	if (_is_anim_scene_started(&(Local_30.f_13[13]), false))
	{
		if (_get_anim_scene_time(&(Local_30.f_13[13])) >= 2.31f)
		{
			if (func_2046(Local_30.f_158, func_2045(), 1) <= 400f)
			{
				func_903(Local_30.f_158, 1536.965f, 1653.42f, 140.3316f, 14.0054f, 2, 1073741824);
			}
		}
	}
}

void func_1446()
{
	fVar0 = _0xa81d24ae0af99a5e(get_player_index());
	if (fVar0 < 28f)
	{
		func_1488(2);
	}
}

void func_1447(var uParam0)
{
	switch (Local_30.f_10)
	{
		case 0:
			if (!func_388(Local_30.f_2, 128))
			{
				func_414(&(Local_30.f_2), 128);
			}
			if (func_388(Local_30.f_2, 128))
			{
				if (func_1414(1448.588f, 1683.119f, 188.1179f, 92.7242f))
				{
					set_entity_visible(func_181(), false);
					set_blocking_of_non_temporary_events(func_181(), true);
					set_ped_combat_attributes(func_181(), 5, true);
					set_entity_invincible(func_181(), false);
					Local_30.f_10++;
				}
			}
			break;
		case 1:
			if (func_388(Local_30.f_2, 2))
			{
				task_look_at_entity(func_181(), Global_35, -1, 0, 51, 0);
				Local_30.f_10++;
			}
			break;
		case 2:
			if (!func_388(Local_30.f_2, 16384))
			{
				if (_is_anim_scene_started(&(Local_30.f_13[13]), false))
				{
					if (!is_ped_injured(func_181()))
					{
						set_entity_visible(func_181(), true);
						func_414(&(Local_30.f_2), 16384);
					}
				}
			}
			if (func_2048(0, 500))
			{
				set_anim_scene_bool(&(Local_30.f_13[13]), "bear_breakout", true, false);
				if (does_blip_exist(Local_30.f_167))
				{
					remove_blip(&(Local_30.f_167));
				}
				func_1413(uParam0, func_171(), 1);
				func_414(&(Local_30.f_2), 4);
				func_1854(func_181(), 831283580, 1, 1);
				Local_30.f_10++;
			}
			break;
		case 3:
			if (func_2030())
			{
				if ((_0x0e99e3bf11bb6367(func_181()) || _0x3bdfcf25b58b0415(func_171())) || is_ped_performing_melee_action(func_181(), 4096, 0))
				{
					_0x8301d87b1b89e219(Global_35, -83520643);
					_0x789dabd18e9024db(func_181(), 4096, 0);
					clear_ped_tasks(func_181(), 1, 0);
					clear_ped_tasks(func_181(), 1, 0);
				}
				Local_30.f_10++;
			}
			else if (!Local_30.f_140 && func_2049())
			{
				if (!Local_30.f_140)
				{
					Local_30.f_140 = 1;
					open_sequence_task(&(Local_30.f_336));
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(Local_30.f_336);
					task_perform_sequence(func_181(), Local_30.f_336);
					clear_sequence_task(&(Local_30.f_336));
				}
			}
			break;
		case 4:
			if (!is_ped_performing_melee_action(func_181(), 4096, 0) || !func_983(func_181(), 0))
			{
				set_ped_can_be_targetted(func_171(), true);
				if (func_983(func_181(), 0))
				{
					func_2025(func_181());
					clear_ped_tasks(func_181(), 1, 0);
					set_blocking_of_non_temporary_events(func_181(), true);
					open_sequence_task(&(Local_30.f_336));
					task_clear_look_at(0);
					task_follow_waypoint_recording(0, func_411(6), 0, 10, -1, 0, 0, -1);
					close_sequence_task(Local_30.f_336);
					task_perform_sequence(func_181(), Local_30.f_336);
					clear_sequence_task(&(Local_30.f_336));
				}
				Local_30.f_10++;
			}
			break;
		case 5:
			if (Local_30.f_527 == 2)
			{
				func_414(&(Local_30.f_2), 2048);
				Local_30.f_10++;
			}
			break;
		case 6:
			if (does_entity_exist(func_181()))
			{
				if (get_script_task_status(func_181(), 242628503, true) != 1)
				{
					if (func_1252(func_181(), 1438f, 1817f, 169f, 1) < 10f)
					{
						iVar0 = func_181();
						delete_entity(&iVar0);
					}
				}
			}
			break;
	}
	if (!is_ped_injured(func_181()))
	{
		if (Local_30.f_10 < 4)
		{
			set_ped_reset_flag(func_181(), 258, true);
		}
	}
	if (func_388(Local_30.f_2, 65536))
	{
		func_1418();
	}
	if (Local_30.f_10 >= 4)
	{
		if (!is_ped_injured(func_181()))
		{
			if (is_waypoint_playback_going_on_for_ped(func_181(), 0))
			{
				waypoint_playback_override_speed(func_181(), 2.5f, 0, -1082130432, 0);
			}
		}
	}
}

void func_1448(var uParam0, int iParam1)
{
	func_2050(&(uParam0->f_7375.f_861), iParam1);
}

bool func_1449(var uParam0)
{
	sVar0 = "script@Cinematics@TripSkip@Horseshoe_Overlook";
	if (Local_30.f_230 < 3)
	{
		if (_0xdd0b7c5ae58f721d(&Local_774) && !_0x927b810e43e99932(&Local_774))
		{
			_0xb8b207c34285e978(&Local_774);
		}
	}
	disable_control_action(0, -1046962283, false);
	switch (Local_30.f_230)
	{
		case 0:
			_0x1b3c2d961f5fc0e1(sVar0);
			func_1283(func_411(10));
			_0x5e3ccf03995388b5(1737180037, 1529f, 1596.3f, 147.3f);
			if (_0xdd0b7c5ae58f721d(&Local_774) && !_0x927b810e43e99932(&Local_774))
			{
				_0xb8b207c34285e978(&Local_774);
			}
			else if (!_0xdd0b7c5ae58f721d(&Local_774))
			{
			}
			else if (_0x927b810e43e99932(&Local_774))
			{
			}
			func_60(1);
			func_414(&(Local_30.f_2), 16);
			func_2051(1);
			break;
		case 1:
			if (!_0xdd0b7c5ae58f721d(sVar0))
			{
				bVar1 = true;
			}
			if (!is_srl_loaded())
			{
				bVar1 = true;
			}
			if (!bVar1)
			{
				_0xbc016635d6a73b31(sVar0, "2_ThreeSisters_1", 5);
				set_player_control(player_id(), false, 0, false);
				func_1281(Global_35, Local_30.f_158, 1, -1, 1);
				func_1281(func_171(), func_1254(), 0, -1, 1);
				_set_entity_coords_and_heading(Local_30.f_158, 1531.4f, 1604.6f, 147.2f, -176.5f, true, false, true);
				_set_entity_coords_and_heading(func_1254(), 1531.8f, 1597.7f, 147.6f, -176.5f, true, false, true);
				task_follow_waypoint_recording(func_171(), Local_30.f_142, 0, 9736, -1, 0, 0, -1);
				waypoint_recording_get_closest_waypoint(Local_30.f_142, func_1933(player_id()), &(Local_30.f_6));
				task_follow_entity_along_waypoint_recording_at_offset(Global_35, func_171(), Local_30.f_142, -0.5f, -2f, Local_30.f_6, 25864, -1, 0);
				end_srl();
				func_218(Local_30.f_168[3]);
				func_2051(2);
			}
			break;
		case 2:
			iVar2 = _0xea113bf9b0c0c5d7(sVar0, "2_ThreeSisters_1", 5);
			iVar3 = _0x465f04f68ad38197(sVar0, "2_ThreeSisters_1", 5);
			if (iVar2 == 0)
			{
				iVar2 = 12500;
			}
			iVar5 = (iVar2 - func_219(Local_30.f_168[3]));
			if (!_0xffe9c53deea3db0b(iVar5, 1339531659, -17.9f, 57.3f, 93.8f, bVar4, (iVar3 - func_219(Local_30.f_168[3]))))
			{
				bVar1 = true;
			}
			if (!is_ped_injured(func_171()))
			{
				if (is_waypoint_playback_going_on_for_ped(func_171(), 0))
				{
					waypoint_playback_override_speed(func_171(), 1.75f, 0, -1082130432, 0);
				}
			}
			if (!func_388(Local_30.f_2, 4))
			{
				if (func_219(Local_30.f_168[3]) > (iVar2 - 3500))
				{
					do_screen_fade_out(3000);
					func_414(&(Local_30.f_2), 4);
				}
			}
			if (func_388(Local_30.f_2, 4) && is_screen_faded_out())
			{
				if (!func_388(Local_30.f_2, 256))
				{
					func_1283(func_411(11));
					_set_entity_coords_and_heading(Local_30.f_158, -9.6f, 63.9f, 93.4f, 126f, true, false, true);
					_set_entity_coords_and_heading(func_1254(), -14.5f, 60.1f, 93f, 126f, true, false, true);
					clear_ped_tasks_immediately(Global_35, false, true);
					clear_ped_tasks_immediately(func_171(), false, true);
					prefetch_srl("script@tripskip@horseshoe_overlook_srl");
					_0xef1a8a484118735e();
					_0xae00387e53b1e9fc();
					func_414(&(Local_30.f_2), 256);
					bVar1 = true;
				}
				else
				{
					bVar4 = is_srl_loaded();
					if (!bVar4)
					{
						bVar1 = true;
					}
					if (func_466(6))
					{
						if (!func_388(Local_30.f_2, 512))
						{
							if (func_467(6, 1, 0))
							{
								func_414(&(Local_30.f_2), 512);
							}
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (!bVar1)
			{
				func_218(Local_30.f_168[3]);
				_0xa54d643d0773eb65(sVar0, "2_ThreeSisters_1", 5);
				_0xbc016635d6a73b31(sVar0, "1_TripSkip_Horseshoe_1", 5);
				task_follow_waypoint_recording(func_171(), Local_30.f_142, 0, 9736, -1, 0, 0, -1);
				waypoint_recording_get_closest_waypoint(Local_30.f_142, func_1933(player_id()), &(Local_30.f_6));
				task_follow_entity_along_waypoint_recording_at_offset(Global_35, func_171(), Local_30.f_142, 0f, -3f, Local_30.f_6, 4220168, -1, 0);
				_0x5a8b01199c3e79c3();
				end_srl();
				do_screen_fade_in(3000);
				func_2051(3);
			}
			break;
		case 3:
			iVar2 = _0xea113bf9b0c0c5d7(sVar0, "1_TripSkip_Horseshoe_1", 5);
			iVar3 = _0x465f04f68ad38197(sVar0, "1_TripSkip_Horseshoe_1", 5);
			if (iVar2 == 0)
			{
				iVar2 = 8000;
			}
			if (!is_ped_injured(func_171()))
			{
				if (is_waypoint_playback_going_on_for_ped(func_171(), 0))
				{
					waypoint_playback_override_speed(func_171(), 1.5f, 0, -1082130432, 0);
				}
			}
			if (!_0xffe9c53deea3db0b((iVar2 - func_219(Local_30.f_168[3])), 0, -17.9f, 57.3f, 93.8f, bVar4, (iVar3 - func_219(Local_30.f_168[3]))))
			{
				bVar1 = true;
			}
			if (func_466(6))
			{
				if (!func_388(Local_30.f_2, 512))
				{
					if (func_467(6, 1, 0))
					{
						func_414(&(Local_30.f_2), 512);
					}
				}
			}
			func_1454();
			if (!bVar1)
			{
				if (!is_ped_injured(func_171()))
				{
					if (is_waypoint_playback_going_on_for_ped(func_171(), 0))
					{
						waypoint_playback_override_speed(func_171(), 1.5f, 0, -1082130432, 0);
					}
				}
				func_218(Local_30.f_168[3]);
				_0xa54d643d0773eb65(sVar0, "1_TripSkip_Horseshoe_1", 5);
				end_srl();
				_0x43037abfe214a851();
				func_1301(&(Local_30.f_2), 16);
				if (_0xdd0b7c5ae58f721d(&Local_790))
				{
				}
				if (!is_ped_injured(Global_35))
				{
				}
				func_218(Local_30.f_168[3]);
				display_hud(true);
				set_player_control(player_id(), true, 0, false);
				clear_ped_tasks(Global_35, 1, 0);
				_0x0a5a4f1979abb40e(&Local_774);
				_0x798be43c9393632b(&Local_774);
				_0x0a5a4f1979abb40e(&Local_790);
				_0x798be43c9393632b(&Local_790);
				func_60(0);
				func_2051(5);
				func_1357(func_171());
				return true;
			}
			break;
		case 4:
			break;
		case 5:
			return true;
	}
	if (func_388(Local_30.f_2, 16))
	{
		_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	}
	return false;
}

bool func_1450(var uParam0)
{
	disable_control_action(0, -1046962283, false);
	switch (Local_30.f_45)
	{
		case 0:
			Local_30.f_528 = create_camera_with_params(26379945, 1521.406f, 1676.701f, 140.2191f, 5.4173f, -0.008f, 42.6503f, 29.7429f, true, 2);
			Local_30.f_529 = create_camera_with_params(26379945, 1521.756f, 1677.023f, 140.2191f, 5.4173f, -0.008f, 42.6503f, 29.7429f, false, 2);
			func_1577(0);
			task_follow_nav_mesh_to_coord(0, 1527.009f, 1673.119f, 139.976f, 1f, -1, 0.25f, 0, 221.4988f);
			func_1579(0);
			force_ped_motion_state(func_1254(), -668482597, false, 0, false);
			_0x2208438012482a1a(func_1254(), true, true);
			set_player_control(player_id(), false, 0, false);
			task_look_at_entity(Global_35, func_171(), -1, 0, 51, 0);
			render_script_cams(true, false, 3000, true, false, 0);
			set_cam_active_with_interp(Local_30.f_529, Local_30.f_528, 5000, 1, 1);
			shake_cam(Local_30.f_528, "HAND_SHAKE", 0.2f);
			shake_cam(Local_30.f_529, "HAND_SHAKE", 0.2f);
			settimera(0);
			_disable_first_person_cam_this_frame_2();
			Local_30.f_45++;
			break;
		case 1:
			if (timera() >= 4500)
			{
				render_script_cams(false, false, 3000, true, false, 0);
				destroy_cam(Local_30.f_528, false);
				destroy_cam(Local_30.f_529, false);
				task_clear_look_at(Global_35);
				func_914(0, 0);
				set_player_control(player_id(), true, 0, false);
				Local_30.f_45 = 99;
			}
			else
			{
				_disable_first_person_cam_this_frame_2();
			}
			break;
		case 99:
			return true;
	}
	_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	return false;
}

void func_1451(var uParam0)
{
	switch (func_1850(uParam0))
	{
		case 0:
			break;
		case 1:
			break;
	}
}

void func_1452(var uParam0)
{
	switch (Local_30.f_1)
	{
		case 0:
			if (func_1269(uParam0) == 2)
			{
				if (!func_1403())
				{
					if (func_1857(uParam0, "RH1_CAMPARRIVE", 0))
					{
						Local_30.f_1++;
					}
				}
			}
			break;
		case 1:
			if (!func_1403())
			{
				if (func_1857(uParam0, "RH1_GOODBYE", 0))
				{
					Local_30.f_1++;
				}
			}
			break;
	}
}

void func_1453(var uParam0)
{
	if (is_ped_injured(func_171()))
	{
		return;
	}
	if (get_current_ped_weapon(func_171(), &iVar0, true, 0, false))
	{
		if (iVar0 != -1569615261)
		{
			set_current_ped_weapon(func_171(), -1569615261, false, 0, false, false);
		}
	}
}

void func_1454()
{
	if (func_466(9))
	{
		if (!func_388(Local_30.f_2, 2048))
		{
			if (func_467(9, 1, 0))
			{
				func_414(&(Local_30.f_2), 2048);
			}
		}
	}
}

int func_1455(int iParam0)
{
	if (!func_188(iParam0))
	{
		return 1;
	}
	iVar0 = func_193(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	iVar4 = 1;
	if (iVar0 == 1)
	{
		iVar5 = func_267(iParam0);
		if (iVar5 == 23)
		{
			iVar4 = 1;
			iVar1 = 134;
			bVar3 = false;
			iVar2 = 0;
			if (func_458(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			bVar3 = false;
			if (func_461(134, 0) && func_462(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
			if (func_458(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 16)
		{
			iVar4 = 1;
			if (func_458(134, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (func_458(138, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 46)
		{
			if (func_464(58))
			{
				iVar4 = 1;
				iVar1 = 140;
				if (func_458(iVar1, 0, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
				return iVar4;
			}
			else
			{
				return 1;
			}
		}
		else if (iVar5 == 17)
		{
			iVar4 = 1;
			iVar1 = 134;
			if (func_458(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (func_458(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (func_464(5) && func_465(12))
			{
				iVar1 = 21;
				if (func_458(iVar1, 1, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar5 == 15)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (func_458(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 59;
			if (func_458(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar5 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar5 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar5 == 10)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (func_458(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if ((func_321((*Global_1835011)[11]->f_1, 1) && func_321((*Global_1835011)[14]->f_1, 1)) && func_321((*Global_1347702)[61]->f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (func_458(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 59;
			iVar2 = 0;
			if (func_458(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar6 = func_267(iParam0);
		if (iVar6 == 0)
		{
			iVar4 = 1;
			if (func_466(15))
			{
				if (func_467(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 97;
			if (func_458(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 2)
		{
			iVar1 = 96;
		}
		else if (iVar6 == 61)
		{
			iVar4 = 1;
			if (func_466(15))
			{
				if (func_467(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (func_466(9))
			{
				if (func_467(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (!func_321((*Global_1347702)[63]->f_15, 1))
			{
				iVar1 = 63;
				iVar2 = 0;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
			if (func_458(iVar1, iVar2, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 62)
		{
			iVar4 = 1;
			if (func_466(15))
			{
				if (func_467(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (func_466(9))
			{
				if (func_467(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 112;
			if (func_458(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 63;
			if (func_458(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar6 == 76)
		{
			iVar1 = 134;
			if (func_458(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			if (func_458(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
		}
		else if (iVar6 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar6 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar6 == 97)
		{
			iVar4 = 1;
			if (func_321((*Global_1835011)[6]->f_1, 1) && func_321((*Global_1835011)[13]->f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (func_458(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar6 == 114)
		{
			if (func_321((*Global_1835011)[9]->f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar6 == 134)
		{
			iVar4 = 1;
			iVar1 = 95;
			if (func_458(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (func_458(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
	}
	if (iVar1 == -1)
	{
		return 1;
	}
	if (func_458(iVar1, iVar2, bVar3, 0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_1456(int iParam0, bool bParam1)
{
	iVar0 = func_543(iParam0);
	if (bParam1)
	{
		if (!func_983(iVar0, 0))
		{
			return false;
		}
	}
	return is_ped_group_member(iVar0, func_2052(), 1);
}

void func_1457(int iParam0)
{
	if (!func_451(iParam0))
	{
		return;
	}
	if (!func_1456(iParam0, 0))
	{
	}
	func_1459(iParam0);
	Global_1359489->f_15 = func_2053(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_2054();
	func_982(iParam0, 32, 1);
	if (func_983(Global_1360165[iParam0], 0))
	{
		set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		set_ped_combat_attributes(Global_1360165[iParam0], 83, false);
		set_ped_config_flag(Global_1360165[iParam0], 152, false);
		Var1 = get_player_ped(get_player_index());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0];
		Var1.f_7 = func_77();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0];
		_0x88bc5f4aef77fc4e(&Var1, 17);
	}
}

bool func_1458(int iParam0)
{
	iVar0 = Global_1360165[iParam0];
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0))
		{
			iVar1 = get_player_group(get_player_index());
			return is_ped_group_member(iVar0, iVar1, 0);
		}
	}
	return false;
}

void func_1459(int iParam0)
{
	iVar0 = Global_1360165[iParam0];
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_451(iParam0))
	{
		return;
	}
	if (!is_ped_in_group(iVar0))
	{
		return;
	}
	if (get_ped_group_index(iVar0) != get_player_group(get_player_index()))
	{
		return;
	}
	if (_0x917760cfe7a0e0f1(iVar0))
	{
		_0xd747979c053efa7a(func_2052());
	}
	set_ped_config_flag(iVar0, 279, false);
	remove_ped_from_group(iVar0);
	func_2055(iParam0, 0, 0);
}

void func_1460(int iParam0)
{
	Global_1900383->f_444.f_3 = iParam0;
}

void func_1461(var uParam0)
{
	Global_1900383->f_444.f_4 = uParam0;
}

bool func_1462(int iParam0)
{
	if (-1829635046 == func_2056(81053684))
	{
		if (func_2057(iParam0))
		{
			return true;
		}
	}
	else if (func_1734(-525676072, iParam0))
	{
		if (func_2057(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1463(int iParam0)
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

void func_1464(int iParam0)
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

void func_1465()
{
	iVar0 = func_1106(Global_35, 9, 1, 0);
	if (func_683(iVar0))
	{
		return;
	}
	iVar0 = func_1106(Global_35, 7, 1, 0);
	if (func_683(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1106(Global_35, 0, 1, 0);
	if (func_683(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1106(Global_35, 1, 1, 0);
	if (func_683(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1106(Global_35, 18, 1, 0);
	if (func_683(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_2058();
	if (func_683(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_2059(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_2060(6291456, 0);
	if (func_683(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_2059(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1466()
{
	return Global_1900383->f_393;
}

int func_1467(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_2061(*uParam0, 0f, 0f, 0f))
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

void func_1468(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1469()
{
	return &Global_1899515;
}

void func_1470(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1471(int iParam0)
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

bool func_1472()
{
	return (func_2062() || func_2063());
}

void func_1473(bool bParam0)
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
	func_2064(0f);
	Global_1935436->f_11 = 1;
	if (func_298())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_2065();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1474(var uParam0)
{
	return uParam0->f_865;
}

float func_1475(var uParam0)
{
	return uParam0->f_868;
}

float func_1476(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1477(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1478(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1479(var uParam0, int iParam1)
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

void func_1480(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1211(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_2066(iParam4);
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

bool func_1481(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_668(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1482(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1483(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1481(1108822547, 6))
	{
		if (bParam2)
		{
			func_1480(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1484(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1485(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1484(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_668(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_668(iParam0, 1)])->f_10 || iParam1);
}

void func_1485(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_668(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_668(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_668(iParam0, 1)])->f_10 && iParam1));
}

bool func_1486(var uParam0)
{
	if (func_2067(&(uParam0->f_29), 62))
	{
		switch (func_2068())
		{
			case 1:
				if (!func_2067(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_2067(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_2067(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_2067(&(uParam0->f_29), 32))
				{
					if (func_2067(&(uParam0->f_29), 2))
					{
						if (func_690(func_280()) < 5)
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

int func_1487(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_2069(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1148("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1149(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_683(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_2069(iParam1, 512) && func_1729(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_2069(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_2069(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_2069(iParam1, 33554432)))
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
		func_1150(iVar1);
	}
	if (func_683(iVar0))
	{
	}
	else if (!func_2069(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1487(uParam0, iParam1, iParam2);
	}
	else if (func_2069(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1488(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1489(int iParam0)
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

void func_1490(var uParam0)
{
	if (!func_891(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_858(&(uParam0->f_1), 1);
	}
}

void func_1491(var uParam0)
{
	if (!func_891(*uParam0, 1))
	{
		request_ptfx_asset();
		func_858(uParam0, 1);
	}
}

bool func_1492(var uParam0)
{
	if (func_891(uParam0->f_2, 1))
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

char* func_1493(int iParam0)
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

bool func_1494(int iParam0)
{
	return iParam0 != 0;
}

int func_1495(var uParam0, int iParam1)
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

void func_1496(var uParam0, int iParam1)
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

int func_1497(var uParam0)
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

void func_1498(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1499(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1500(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1501(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1502(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1502(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1502(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1502(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1502(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1502(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1502(uParam0, 5, iParam4))
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
			if (func_1502(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1502(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1502(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1503(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1504(var uParam0, char* sParam1, int iParam2)
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

void func_1505(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_496(sParam0, 1);
}

bool func_1506(var uParam0)
{
	if (func_891(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_891(uParam0->f_1, 1))
	{
		func_861(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_858(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1507(var uParam0)
{
	if (func_891(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_891(uParam0->f_3, 1))
	{
		func_863(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_858(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_858(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1508(var uParam0)
{
	if (func_891(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_891(uParam0->f_1, 1))
	{
		func_865(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_858(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1509(var uParam0, int iParam1)
{
	if (func_891(uParam0->f_1, 2))
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
	if (!func_891(uParam0->f_1, 1))
	{
		func_872(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_858(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1510(var uParam0)
{
	if (func_891(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_891(uParam0->f_2, 1))
	{
		func_874(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_858(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1511(var uParam0)
{
	if (func_891(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_891(uParam0->f_3, 1))
	{
		func_876(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_858(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1512(var uParam0)
{
	if (func_891(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_891(uParam0->f_1, 1))
	{
		func_878(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_858(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1513(var uParam0)
{
	if (func_891(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_891(uParam0->f_1, 1))
	{
		func_880(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_858(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1514(var uParam0)
{
	if (func_891(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_891(uParam0->f_2, 1))
	{
		func_882(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_858(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1515(var uParam0)
{
	if (func_891(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_891(uParam0->f_1, 1))
	{
		func_884(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_858(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1516(int iParam0)
{
	if (func_451(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1517(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_451(iParam0))
	{
		return 0;
	}
	vVar0.x = fParam3;
	vVar0.f_1 = fParam4;
	vVar0.f_2 = fParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_985(iParam0, 2, 1))
			{
				func_982(iParam0, 2, 1);
			}
			if (func_702(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_980(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_457(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_983(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_983(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_2070(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_980(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_2071(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_980(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_2071(iParam0, 1);
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
			if (!func_985(iParam0, 44, 0))
			{
				func_980(iParam0, 44, 0);
			}
			if (func_2072(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_2071(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_982(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_987(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_2073(iParam0, 0, 0, 1);
			}
			func_982(iParam0, 33, 1);
			func_982(iParam0, 34, 1);
			func_982(iParam0, 29, 1);
			if (!func_393(vVar0) && bParam7)
			{
				func_2071(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_2071(iParam0, 4);
			}
			else
			{
				func_2071(iParam0, 5);
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
						func_2070(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_903(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_2071(iParam0, 4);
			}
			else
			{
				func_2071(iParam0, 5);
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
				if (func_2074(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_2075(iParam0, iParam13, 0);
						func_2076(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_985(iParam0, 25, 0))
						{
							func_982(iParam0, 25, 0);
						}
						func_980(iParam0, 66, 0);
						func_2071(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_2071(iParam0, 5);
				}
				func_980(iParam0, 28, 1);
			}
			else
			{
				func_2071(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_2071(iParam0, 6);
			}
			break;
		case 6:
			if (func_983(Global_1360165[iParam0], 0))
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
					func_2077(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_2078(Global_1360165[iParam0], 1);
				}
			}
			func_2071(iParam0, 7);
		case 7:
			func_987(iParam0, bParam9, bParam15, 0);
			func_977(iParam0, 4, bParam11);
			func_981(iParam0);
			if (bParam20)
			{
				if (func_1357(Global_1360165[iParam0]))
				{
				}
			}
			func_2079(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_2071(iParam0, 0);
			func_703(iParam0, 16, 1);
			func_982(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1518(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_2080(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(uParam0, 512))
	{
		if (func_120(uParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_2081(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_2082(uParam0, iParam1, iParam2, func_318(iParam2, 0));
	func_1947(uParam0, iParam1, 512);
	if (bParam5)
	{
		func_1947(uParam0, iParam1, 128);
	}
	else
	{
		func_2026(uParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1519(int iParam0)
{
	if (!func_451(iParam0))
	{
		return;
	}
	iVar0 = func_543(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1520(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_5417 = { vParam1 };
	uParam0->f_5420 = fParam4;
}

bool func_1521(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1272(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1522(int iParam0)
{
	iParam0 = func_261(iParam0);
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
	func_2083(&Var0);
	func_2084(iParam0, Var0);
	func_2085(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_2086(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_2087(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_2088(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_2089(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_2090(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_2091(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_2092(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_2093(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1523(vector3 vParam0)
{
	return func_2094(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1524(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_521(iParam0))
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

void func_1525(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_515(iParam0);
	func_515(iParam0);
	func_2095(iParam0, iParam1);
	func_2096(iParam0, iParam1);
	func_2097(iParam0, iParam1);
	iVar1 = func_213(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_2098(iVar1);
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
			func_2098(iVar3);
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
	func_263();
}

bool func_1526()
{
	iVar0 = func_1466();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1527()
{
	iVar0 = func_1466();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_2099(0);
}

int func_1528(int iParam0)
{
	iParam0 = func_261(iParam0);
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

int func_1529(int iParam0)
{
	iParam0 = func_261(iParam0);
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

void func_1530(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1791(&iVar0, &iVar1, &iVar2);
	func_1792(iParam0, iVar0);
	func_1793(iParam0, iVar1);
	func_1794(iParam0, iVar2);
	func_1887(iParam0, 1);
	func_2100(iParam0, 1);
}

void func_1531(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1849(iParam0, 1);
}

void func_1532(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_261(iParam0);
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

bool func_1533(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_448(iParam0, 1);
}

struct<2> func_1534(int iParam0)
{
	iParam0 = func_261(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_2101(iParam0, &uVar2))
	{
	}
	if (!func_2102(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1535()
{
	if (func_2103(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_2103(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_2103(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_2103(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_2103(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_2103(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1536(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_2104(iParam0);
	func_2105(iParam0, uParam1);
	func_2106(iParam0);
	func_2107(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_2108(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1537(int iParam0)
{
	iParam0 = func_261(iParam0);
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

bool func_1538(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1539(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1540(int iParam0)
{
	return iParam0;
}

bool func_1541(int iParam0)
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

int func_1542(var uParam0)
{
	return *uParam0;
}

bool func_1543(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_2109(iParam0) };
	if (func_2061(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_904(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_2110(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1544(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1545(var uParam0)
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

bool func_1546(var uParam0)
{
	switch (func_2111(uParam0))
	{
		case 0:
			uParam0->f_24 = func_280();
			iVar4 = func_280();
			func_816(&iVar4, uParam0->f_6);
			func_817(&iVar4, 0);
			func_1216(&iVar4, 0);
			if (func_1053(uParam0->f_24, iVar4, 1))
			{
				func_328(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_2112(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_2113(uParam0, 1);
			break;
		case 1:
			fVar5 = func_2114(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_2113(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_2114(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_328(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_690(iVar4), func_691(iVar4), func_692(iVar4));
				func_2115(get_clock_hours());
				func_2116(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1547(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1548(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_2117(2000);
	Global_16 = 0;
	func_2118();
	set_entity_invincible(Global_35, func_2119(*iParam0, 8));
	if (!func_2119(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_2119(*iParam0, 2) || func_2119(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_2119(*iParam0, 16))
	{
		func_233(1);
	}
	if (func_2119(*iParam0, 32))
	{
		func_621(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_2120(-1623728698, 0);
	}
	func_832(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1549(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1550(var uParam0, int iParam1)
{
	return uParam0->f_1[func_131(iParam1)]->f_13;
}

int func_1551(var uParam0)
{
	return *uParam0;
}

bool func_1552(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1553(uParam0, 32768))
	{
		return true;
	}
	if (func_2121(uParam0) >= 3)
	{
		uParam0->f_2286 = func_952(get_player_index(), 0, 0, 1);
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
		func_2122(uParam0);
	}
	if (func_2121(uParam0) < 10)
	{
		if (func_2121(uParam0) == 3)
		{
			func_2123(uParam0, iParam5, bParam6);
		}
		else if (func_2121(uParam0) > 3)
		{
			if (func_1551(uParam0) == 0)
			{
				if (!func_1553(uParam0, 524288))
				{
					func_2124(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_2125(uParam0, 4);
					func_2126(uParam0, 10);
					func_2127(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1553(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_2128(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_2129(0);
			func_2130();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_2128(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_2131(uParam0, uParam0->f_2074))
				{
					if (func_2132(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_2133(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_2133(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_2134(uParam0);
			}
		}
	}
	bVar0 = func_2135(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1553(uParam0, 268435456) && bVar1) && !func_1553(uParam0, 262144))
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
				func_741(uParam0, 131072);
				func_741(uParam0, 268435456);
			}
		}
		if (func_2136(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_2128(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1551(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_2121(uParam0) == 3 || func_1553(uParam0, 131072))
	{
		func_2137(uParam0);
		if (!func_1553(uParam0, 262144))
		{
			if ((bVar0 && func_1553(uParam0, 65536)) || func_1553(uParam0, 131072))
			{
				func_741(uParam0, 32768);
				func_2125(uParam0, 4);
				func_2126(uParam0, 10);
				uParam0->f_2159 = 1;
				func_2127(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_2121(uParam0) >= 3)
	{
		func_2138(uParam0, iParam5);
		func_2139(uParam0);
		if (!func_2140(uParam0, 1))
		{
			func_2141(uParam0);
		}
		func_2142(uParam0);
	}
	switch (func_2121(uParam0))
	{
		case 0:
			func_2143(uParam0, Param1, iParam5);
			break;
		case 1:
			func_2144(uParam0);
			break;
		case 2:
			func_2145(uParam0);
			break;
		case 3:
			if (func_2146(uParam0))
			{
				func_2147(2);
				func_2133(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_218(&(uParam0->f_2262));
				func_2125(uParam0, 1);
				func_2148();
				func_2126(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1553(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_2121(uParam0) == 5)
			{
				if (func_2149(uParam0))
				{
					func_2125(uParam0, 2);
					func_2126(uParam0, 6);
				}
			}
			if (func_2121(uParam0) == 6)
			{
				if (func_2150(uParam0))
				{
					func_2125(uParam0, 3);
					func_2126(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_2151(&(uParam0->f_2262)) >= 15f)
			{
				if (func_2152(uParam0, iParam5))
				{
					if (func_2153(uParam0))
					{
						uParam0->f_2075 = func_2154(uParam0);
						func_218(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_2125(uParam0, 6);
						func_2126(uParam0, 9);
					}
					else
					{
						func_2125(uParam0, 4);
						func_2126(uParam0, 10);
						func_2127(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_2152(uParam0, iParam5))
			{
				func_2127(uParam0, iParam5);
				func_2126(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1553(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1554(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1555(var uParam0, var uParam1)
{
	if (func_1553(uParam1, 32768))
	{
		Var0 = { func_2155(uParam0) };
		func_2156(uParam0, &Var0);
		if (func_1553(uParam1, 131072))
		{
			func_742(uParam0, 268435456);
			if (func_393(uParam0->f_865))
			{
				uParam0->f_865 = { func_2157(uParam1, uParam1->f_2074) };
			}
			if (func_393(uParam0->f_862))
			{
				uParam0->f_862 = { func_2157(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1553(uParam1, 268435456))
		{
			func_2158(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1553(uParam1, 524288))
	{
		func_742(uParam0, 67108864);
		func_1554(uParam1, 524288);
	}
	if (func_2136(uParam1, 128))
	{
		func_742(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_2128(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_2158(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1556(var uParam0)
{
	if (func_821(&(uParam0->f_7375), 128) || func_821(&(uParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(uParam0->f_7375.f_804))
		{
			_delete_anim_scene(uParam0->f_7375.f_804);
		}
		func_2159(&(uParam0->f_7375));
		func_1477(&(uParam0->f_7375), 128, 1);
		func_1477(&(uParam0->f_7375), 256, 1);
		func_1477(&(uParam0->f_7375), 4096, 1);
	}
}

void func_1557(var uParam0)
{
	func_2160(&(uParam0->f_7375));
}

bool func_1558(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	func_2161(uParam4, &uParam0);
	if (func_821(uParam4, 2) && !func_821(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_2162(uParam4) != 1)
	{
		func_2163(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_2162(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_2164(uParam4, &uParam0, uParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_2165(uParam4, 4);
					return false;
				}
				else
				{
					if (func_2166(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_2167(uParam5);
				}
				func_2165(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(uParam5, func_33(uParam5), 262144))
				{
					if (!func_821(uParam4, 2097152))
					{
						func_1984(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(uParam5, 8) || func_821(uParam4, 134217728)))
				{
				}
				else
				{
					func_2168(uParam4);
				}
				func_218(&(uParam4->f_1));
				func_2165(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_2169(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_912(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2165(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_2170(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_2165(uParam4, 4);
					}
					else if (!func_393(func_2171(uParam4)) && !func_1651(Global_35, func_2171(uParam4), 100f, 1, 1))
					{
						func_1464(1);
						start_player_teleport(get_player_index(), func_2171(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_912(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2165(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_274(uParam5) != 0 || (func_153(uParam5) == 1 && func_161(uParam5, func_33(uParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_2164(uParam4, &uParam0, uParam5);
						func_2165(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_912(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_2165(uParam4, 4);
			}
			break;
		case 3:
			func_389(uParam4);
			if (func_2166(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_2167(uParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_821(uParam4, 512)))
			{
				if (!func_821(uParam4, 1024) && func_2172(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_821(uParam4, 512))
				{
					func_218(&(uParam4->f_1));
					func_742(uParam4, 512);
					func_2165(uParam4, 4);
				}
				else if (func_821(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_2163(uParam4);
			}
			if (func_821(uParam4, 524288))
			{
				if (IntToFloat(absi((func_2173(uParam4) - func_2174(uParam4)))) <= 2f)
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
				if (func_2175(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_2174(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_2176(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_2177(uParam4);
				return true;
			}
			else
			{
				if (func_821(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_218(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_742(uParam4, 512);
						func_1477(uParam4, 67108864, 1);
						func_2165(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_821(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_2174(uParam4) <= 5000) && func_2174(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_821(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1548(&(uParam4->f_861), 0);
					func_742(uParam4, 536870912);
				}
				if (func_2174(uParam4) >= 5000 && func_2174(uParam4) <= (func_2173(uParam4) - 5000))
				{
					func_2178();
				}
			}
			break;
		case 6:
			if (func_2176(uParam4))
			{
				func_2177(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_821(uParam4, 524288))
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
						func_742(uParam4, 1073741824);
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
				if (func_153(uParam5) == 1 && func_161(uParam5, func_33(uParam5)) >= 3)
				{
					if (func_2179(uParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2165(uParam4, 3);
					}
					else if (func_912(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2165(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_2166(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2165(uParam4, 3);
					}
					else if (func_912(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2165(uParam4, 3);
					}
				}
				if (func_2162(uParam4) == 3)
				{
					if (func_821(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_2165(uParam4, 4);
			break;
	}
	return false;
}

void func_1559(var uParam0)
{
	if (!is_itemset_valid(Global_43616))
	{
		return;
	}
	iVar0 = (get_itemset_size(Global_43616) - 1);
	while (iVar0 >= 0)
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
		if (does_entity_exist(iVar1))
		{
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_819()))
			{
				if (!_0x88ad6cc10d8d35b2(iVar1))
				{
					set_entity_as_mission_entity(iVar1, true, true);
				}
				delete_entity(&iVar1);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

bool func_1560(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_264(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_2180(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_265(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_2181(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1561(int iParam0)
{
	MemCopy(&cVar0, {func_264(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1562(int iParam0)
{
	Var0 = { func_1561(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1563(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_2182(iVar0));
		iVar0++;
	}
}

int func_1564(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	if (!func_978(iParam1))
	{
		return 0;
	}
	iVar0 = func_991(iParam1);
	if ((!does_entity_exist(iVar0) || !func_983(iVar0, 0)) || (bParam3 && !func_1625(iParam1)))
	{
		if (bParam2)
		{
			if (func_2183(iParam1, 1) != 0)
			{
				iVar0 = func_2184(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (does_entity_exist(iVar0) && func_983(iVar0, 0))
	{
		*uParam0 = 2;
		(*Global_1360165)[iParam1]->f_70.f_2 = 0;
		func_2185(iParam1, iVar0);
		func_2186(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

bool func_1565(var uParam0)
{
	return func_2172(&(uParam0->f_7375), 1);
}

void func_1566(int iParam0, bool bParam1)
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

void func_1567()
{
	if (get_current_ped_weapon(func_171(), &iVar0, true, 0, false))
	{
		if (iVar0 != -1569615261)
		{
			set_current_ped_weapon(func_171(), -1569615261, false, 0, false, false);
			set_current_ped_weapon(func_171(), -1569615261, false, 1, false, false);
			task_swap_weapon(func_171(), 0, 1, 0, 0);
		}
	}
}

void func_1568(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

bool func_1569(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_1576(uParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

bool func_1570(var uParam0)
{
	return uParam0->f_3;
}

void func_1571(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8)
{
	if (!uParam0->f_3)
	{
		uParam0->f_13 = sParam7;
		uParam0->f_14 = iParam8;
		if (uParam0->f_13 != -1)
		{
			uParam0->f_7 = _create_var_string(2, sParam1, sParam7);
		}
		else
		{
			uParam0->f_7 = sParam1;
		}
		uParam0->f_8 = sParam2;
		uParam0->f_5 = func_1939(uParam0->f_7, -163964935, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
		uParam0->f_6 = func_1939(uParam0->f_8, 648122183, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
		if (uParam0->f_14 < uParam0->f_13)
		{
			func_2187(uParam0->f_5, 1);
		}
		func_2188(uParam0->f_5, 17, 1, 1);
		func_2188(uParam0->f_6, 17, 1, 1);
		func_2189(uParam0->f_5, 6, 1);
		func_2189(uParam0->f_6, 6, 1);
		*uParam0 = 0;
		uParam0->f_1 = iParam4;
		uParam0->f_10 = iParam3;
		if (iParam5 == 0)
		{
			uParam0->f_11 = get_game_timer();
			uParam0->f_9 = get_game_timer() + 10000;
			uParam0->f_12 = 0;
		}
		else
		{
			uParam0->f_11 = get_game_timer();
			uParam0->f_9 = (get_game_timer() + round((to_float(iParam5) / 2f)));
			uParam0->f_12 = iParam5;
		}
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_2 = iParam6;
		uParam0->f_4 = 0;
		uParam0->f_15 = _uiprompt_set_register_horizontal_orientation();
		uParam0->f_3 = 1;
		if (uParam0->f_2 != 0)
		{
			animpostfx_play("MissionChoice");
		}
		_0x6339c1ea3979b5f7("make_decision", "player_decision_moment_scenes");
	}
}

bool func_1572(var uParam0)
{
	if (*uParam0 == 0)
	{
		if (!func_10(uParam0->f_5) || !func_10(uParam0->f_6))
		{
			return false;
		}
		if ((_uiprompt_has_hold_mode((*Global_1945938)[uParam0->f_5]->f_3) && func_2007(uParam0->f_5, 1)) || func_1942(uParam0->f_5, 1))
		{
			if (func_2190(uParam0->f_5, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 1;
			return true;
		}
		if ((_uiprompt_has_hold_mode((*Global_1945938)[uParam0->f_6]->f_3) && func_2007(uParam0->f_6, 1)) || func_1942(uParam0->f_6, 1))
		{
			if (func_2190(uParam0->f_6, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 2;
			return true;
		}
		iVar0 = get_game_timer();
		if (iVar0 > uParam0->f_9)
		{
			if (uParam0->f_1 == 1 || (uParam0->f_1 == 0 && uParam0->f_10 > 0))
			{
				if (!_uiprompt_has_hold_auto_fill_mode((*Global_1945938)[uParam0->f_5]->f_3))
				{
					fVar2 = func_2191(uParam0->f_6, 1);
					fVar3 = func_2191(uParam0->f_5, 1);
					if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
					{
						func_11(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = func_1939(uParam0->f_7, -163964935, 6, 600, iVar1, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
						}
						else
						{
							uParam0->f_5 = func_1939(uParam0->f_7, -163964935, 6, 600, 10000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
						}
						func_11(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = func_1939(uParam0->f_8, 648122183, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						if (uParam0->f_14 < uParam0->f_13)
						{
							func_2187(uParam0->f_5, 1);
						}
						func_2189(uParam0->f_5, 6, 1);
						func_2189(uParam0->f_6, 6, 1);
						func_2188(uParam0->f_5, 17, 1, 1);
						func_2188(uParam0->f_6, 17, 1, 1);
					}
					else
					{
						uParam0->f_16 = fVar2;
						uParam0->f_17 = fVar3;
					}
				}
			}
			else if (!_uiprompt_has_hold_auto_fill_mode((*Global_1945938)[uParam0->f_6]->f_3))
			{
				fVar2 = func_2191(uParam0->f_5, 1);
				fVar3 = func_2191(uParam0->f_6, 1);
				if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
				{
					func_11(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = func_1939(uParam0->f_8, 648122183, 6, 600, iVar1, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
					}
					else
					{
						uParam0->f_6 = func_1939(uParam0->f_8, 648122183, 6, 600, 10000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
					}
					func_11(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = func_1939(uParam0->f_7, -163964935, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					if (uParam0->f_14 < uParam0->f_13)
					{
						func_2187(uParam0->f_5, 1);
					}
					func_2189(uParam0->f_5, 6, 1);
					func_2189(uParam0->f_6, 6, 1);
					func_2188(uParam0->f_5, 17, 1, 1);
					func_2188(uParam0->f_6, 17, 1, 1);
				}
				else
				{
					uParam0->f_16 = fVar2;
					uParam0->f_17 = fVar3;
				}
			}
		}
		return false;
	}
	return true;
}

bool func_1573(var uParam0)
{
	return *uParam0 == 1;
}

void func_1574(var uParam0)
{
	if (uParam0->f_3)
	{
		switch (*uParam0)
		{
			case 0:
				animpostfx_stop("MissionChoice");
				break;
			case 1:
				if (uParam0->f_2 != 0)
				{
					if (uParam0->f_2 != 3 && uParam0->f_1 == 0)
					{
						animpostfx_stop("MissionChoice");
						animpostfx_play("PlayerHonorChoiceGood");
					}
					else
					{
						_0xc5cb91d65852ed7e("MissionChoice");
					}
				}
				break;
			case 2:
				if (uParam0->f_2 != 0)
				{
					if (uParam0->f_2 != 2 && uParam0->f_1 == 0)
					{
						animpostfx_stop("MissionChoice");
						animpostfx_play("PlayerHonorChoiceBad");
					}
					else
					{
						_0xc5cb91d65852ed7e("MissionChoice");
					}
				}
				break;
		}
		if (func_10(uParam0->f_5))
		{
			func_11(&(uParam0->f_5), 1, 1);
		}
		if (func_10(uParam0->f_6))
		{
			func_11(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		uParam0->f_2 = 0;
		_uiprompt_clear_horizontal_orientation(uParam0->f_15);
		uParam0->f_15 = -1;
		_0x9428447ded71fc7e("player_decision_moment_scenes");
	}
}

bool func_1575(var uParam0)
{
	return *uParam0 == 2;
}

bool func_1576(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (func_1596(uParam0))
	{
		if (!func_2175(&(uParam0->f_7375), iParam1, 4))
		{
			func_2192(&(uParam0->f_7375), iParam1, 4);
			return true;
		}
	}
	return func_2193(&(uParam0->f_7375), iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_1577(int iParam0)
{
	open_sequence_task(&(Local_30.f_143[iParam0]->f_13));
}

bool func_1578(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_1579(int iParam0)
{
	func_1858(&(Local_30.f_143[iParam0]), &(Local_30.f_143[iParam0]->f_13), 0, 0, 1, 1);
}

void func_1580()
{
	if (!_is_anim_scene_started(&(Local_30.f_13[11]), false))
	{
		set_anim_scene_entity(&(Local_30.f_13[11]), "BEAR", func_181(), 0);
		start_anim_scene(&(Local_30.f_13[11]));
	}
}

bool func_1581()
{
	Local_30.f_253 = get_current_ped_weapon_entity_index(func_171(), 10);
	if (does_entity_exist(Local_30.f_253))
	{
		set_entity_visible(Local_30.f_253, false);
		return true;
	}
	else
	{
		Local_30.f_253 = get_current_ped_weapon_entity_index(func_171(), 9);
		if (does_entity_exist(Local_30.f_253))
		{
			set_entity_visible(Local_30.f_253, false);
			return true;
		}
	}
	return false;
}

void func_1582(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	iVar0 = func_966(iParam1);
	if (iVar0 == -1)
	{
		func_2194(iParam0, iParam1, fParam3);
		func_969(bParam2, fParam3);
		return;
	}
	if (iParam0 != &Global_1934765->f_318[iVar0])
	{
		func_967(iVar0);
		func_2194(iParam0, iParam1, fParam3);
		Global_1934765->f_338 = -1;
		func_969(bParam2, fParam3);
		return;
	}
}

void func_1583(var uParam0)
{
	iVar0 = func_33(uParam0);
	iVar1 = func_280();
	if (func_388(Local_30.f_36, 4))
	{
		if (iVar0 < iLocal_18)
		{
			func_2195(19, 0, 0, 0);
		}
		else if (iVar0 == iLocal_18)
		{
			if (func_942(uParam0))
			{
				func_816(&iVar1, 19);
				func_817(&iVar1, 0);
				func_818(iVar1);
			}
		}
		else if (iVar0 == iLocal_19)
		{
			if (Local_30.f_9 == 0)
			{
				func_2195(14, 0, 0, 0);
			}
			else if (Local_30.f_9 >= 9)
			{
				func_2195(18, 0, 0, 0);
			}
		}
	}
	else if (func_388(Local_30.f_36, 2))
	{
		if (iVar0 < iLocal_18)
		{
			func_2195(17, 0, 0, 0);
		}
		else if (iVar0 == iLocal_18)
		{
			if (func_942(uParam0))
			{
				func_816(&iVar1, 17);
				func_817(&iVar1, 0);
				func_818(iVar1);
			}
		}
		else if (iVar0 == iLocal_19 && Local_30.f_9 == 0)
		{
			func_2195(18, 0, 0, 0);
		}
	}
	else if (func_388(Local_30.f_36, 1))
	{
	}
	else if (func_388(Local_30.f_36, 8))
	{
		if (iVar0 < iLocal_18)
		{
			if (!func_388(Local_30.f_36, 32))
			{
				pause_clock(true, 0);
				func_414(&(Local_30.f_36), 32);
			}
		}
		else if (iVar0 == iLocal_18)
		{
			if (func_388(Local_30.f_36, 32))
			{
				if (func_942(uParam0))
				{
					pause_clock(false, 0);
					func_816(&iVar1, 17);
					func_817(&iVar1, 0);
					func_818(iVar1);
					func_1301(&(Local_30.f_36), 32);
				}
			}
		}
	}
	else if (func_388(Local_30.f_36, 16))
	{
		if (iVar0 < iLocal_18)
		{
			if (!func_388(Local_30.f_36, 32))
			{
				pause_clock(true, 0);
				func_414(&(Local_30.f_36), 32);
			}
		}
		else if (iVar0 == iLocal_18)
		{
			if (func_942(uParam0))
			{
				if (func_388(Local_30.f_36, 32))
				{
					pause_clock(false, 0);
					func_816(&iVar1, 17);
					func_817(&iVar1, 0);
					func_818(iVar1);
					func_1301(&(Local_30.f_36), 32);
				}
			}
		}
	}
	if (iVar0 == iLocal_19)
	{
		if (Local_30.f_9 >= 9)
		{
			func_2195(20, 30, 0, 0);
		}
	}
	else if (iVar0 == iLocal_20)
	{
		if (!func_388(Local_30.f_40, 128))
		{
			func_2195(20, 30, 0, 0);
		}
		else
		{
			if (!func_388(Local_30.f_36, 64))
			{
				if (is_screen_faded_out())
				{
					func_816(&iVar1, 23);
					func_817(&iVar1, 0);
					func_818(iVar1);
					func_414(&(Local_30.f_36), 64);
				}
			}
			func_2195(23, 0, 0, 0);
		}
	}
}

void func_1584(var uParam0)
{
	if (!is_screen_faded_in())
	{
		return;
	}
	if (func_161(uParam0, func_33(uParam0)) != 5 && func_161(uParam0, func_33(uParam0)) != 6)
	{
		return;
	}
	switch (Local_30.f_35)
	{
		case 0:
			if (Local_30.f_340 == 0)
			{
				if (func_33(uParam0) == iLocal_16)
				{
					if (!is_ped_injured(func_171()))
					{
						if (func_902(Global_35, func_171(), 1, 1) > 60f)
						{
							if (func_388(Local_30.f_2, 1))
							{
								Local_30.f_340 = 1;
							}
						}
					}
					if (does_entity_exist(Local_30.f_158))
					{
						if (is_entity_dead(Local_30.f_158) || is_ped_fatally_injured(Local_30.f_158))
						{
							Local_30.f_340 = 2;
						}
					}
					if (func_388(Local_30.f_2, 32))
					{
						Local_30.f_340 = 4;
					}
				}
				else if (func_33(uParam0) == iLocal_17)
				{
					if (!func_388(Local_30.f_2, 1))
					{
						func_2196(uParam0, 5, 50f, 100f, 0, 0, 1, 422991367);
					}
					else
					{
						func_2197(uParam0, -368.2197f, 787.1858f, 115.0464f, "RH1_BUY_HORSE", "RH1_FL_HSE", 80f, 100f, 0, 0, 0, 1, 1);
					}
					func_2198();
					if (does_entity_exist(Local_30.f_158))
					{
						if (is_entity_dead(Local_30.f_158) || is_ped_fatally_injured(Local_30.f_158))
						{
							Local_30.f_340 = 2;
						}
					}
					if (func_952(player_id(), 1, 0, 1))
					{
						Local_30.f_340 = 3;
					}
					if (func_2199())
					{
						Local_30.f_340 = 8;
					}
				}
				else if (func_33(uParam0) == iLocal_19)
				{
					if (!func_942(uParam0))
					{
						func_2196(uParam0, 5, 80f, 95f, 0, 0, 1, 422991367);
					}
					if (does_entity_exist(Local_30.f_158))
					{
						if (is_entity_dead(Local_30.f_158) || is_ped_fatally_injured(Local_30.f_158))
						{
							Local_30.f_340 = 2;
						}
					}
					if (func_952(player_id(), 1, 0, 1))
					{
						Local_30.f_340 = 3;
					}
					func_2198();
				}
				else if (func_33(uParam0) == iLocal_20)
				{
					func_2197(uParam0, 1709.959f, 1264.478f, 173.5852f, "RH1_RABB_RETN", "RH1_FL_RBH", 150f, 180f, 0, 0, 0, 1, 1);
					if (func_2200())
					{
						Local_30.f_340 = 6;
					}
					if (does_entity_exist(Local_30.f_158))
					{
						if (is_entity_dead(Local_30.f_158) || is_ped_fatally_injured(Local_30.f_158))
						{
							Local_30.f_340 = 2;
						}
					}
					func_2198();
				}
				else if (func_33(uParam0) == iLocal_21)
				{
					if (does_entity_exist(Local_30.f_158))
					{
						if (is_entity_dead(Local_30.f_158) || is_ped_fatally_injured(Local_30.f_158))
						{
							Local_30.f_340 = 2;
						}
					}
					if (func_1269(uParam0) >= 4)
					{
						if (func_902(Global_35, Local_30.f_158, 1, 1) > 45f)
						{
							func_2201(uParam0, Local_30.f_158, 60f, 0, 0, 1, -1925605092, 1084227584, 1103626240);
						}
						if (func_2202())
						{
							Local_30.f_340 = 7;
						}
					}
					func_2198();
				}
				else if (func_33(uParam0) == iLocal_22)
				{
					func_2196(uParam0, 5, 100f, 120f, 0, 0, 1, 422991367);
					if (func_2202())
					{
						Local_30.f_340 = 7;
					}
					if (does_entity_exist(Local_30.f_158))
					{
						if (is_entity_dead(Local_30.f_158) || is_ped_fatally_injured(Local_30.f_158))
						{
							Local_30.f_340 = 2;
						}
					}
					func_2198();
				}
				else if (func_33(uParam0) == iLocal_23)
				{
					if (does_entity_exist(Local_30.f_158))
					{
						if (is_entity_dead(Local_30.f_158) || is_ped_fatally_injured(Local_30.f_158))
						{
							Local_30.f_340 = 2;
						}
					}
					func_2198();
					if (func_2202())
					{
						Local_30.f_340 = 7;
					}
					if (!func_388(Local_30.f_2, 4))
					{
						func_2196(uParam0, 5, 50f, 75f, 0, 0, 1, 422991367);
					}
					else if (!func_388(Local_30.f_2, 4194304))
					{
						vVar0 = { 1554.941f, 1583.502f, 146.5446f };
						if (func_2197(uParam0, vVar0, "RH1_RET_TRAIL", "RH1_FL_NSRCH", 50f, 75f, 0, 0, 0, 1, 1))
						{
							if (!does_blip_exist(Local_30.f_167))
							{
								Local_30.f_167 = _blip_add_for_coord(408396114, vVar0);
							}
						}
						else if (does_blip_exist(Local_30.f_167))
						{
							remove_blip(&(Local_30.f_167));
						}
					}
					else if (!func_388(Local_30.f_2, 8192))
					{
						vVar0 = { 1532.469f, 1632.012f, 142.8057f };
						if (func_2197(uParam0, vVar0, "RH1_RET_TRAIL", "RH1_FL_NSRCH", 50f, 75f, 0, 0, 0, 1, 1))
						{
							if (!does_blip_exist(Local_30.f_167))
							{
								Local_30.f_167 = _blip_add_for_coord(408396114, vVar0);
							}
						}
						else if (does_blip_exist(Local_30.f_167))
						{
							remove_blip(&(Local_30.f_167));
						}
					}
					else
					{
						vVar0 = { 1533.2f, 1653.536f, 140.2507f };
						if (func_2197(uParam0, vVar0, "RH1_RET_TRAIL", "RH1_FL_NSRCH", 50f, 75f, 0, 0, 0, 1, 1))
						{
							if (!does_blip_exist(Local_30.f_167))
							{
								Local_30.f_167 = _blip_add_for_coord(408396114, vVar0);
							}
						}
						else if (does_blip_exist(Local_30.f_167))
						{
							remove_blip(&(Local_30.f_167));
						}
					}
				}
				else if (func_33(uParam0) == iLocal_24)
				{
					if (does_entity_exist(Local_30.f_158))
					{
						if (is_entity_dead(Local_30.f_158) || is_ped_fatally_injured(Local_30.f_158))
						{
							Local_30.f_340 = 2;
						}
					}
					if (Local_30.f_143[0]->f_2 > 0)
					{
						if (!func_388(Local_30.f_2, 131072))
						{
							func_2197(uParam0, func_2022(), "RH1_SEARCH_TRAIL", "RH1_FL_NSRCH", 70f, 80f, 0, 0, 0, 1, 1);
						}
						else
						{
							func_2196(uParam0, 5, 100f, 120f, 0, 0, 1, 422991367);
						}
					}
					func_2198();
				}
				else if (func_33(uParam0) == iLocal_25)
				{
					if (does_entity_exist(Local_30.f_158))
					{
						if (is_entity_dead(Local_30.f_158) || is_ped_fatally_injured(Local_30.f_158))
						{
							Local_30.f_340 = 2;
						}
					}
					func_2198();
					if (func_388(Local_30.f_2, 2))
					{
						func_2196(uParam0, 5, 45f, 100f, 0, 0, 1, 422991367);
					}
				}
				else if (func_33(uParam0) == iLocal_26)
				{
					if (does_entity_exist(Local_30.f_158))
					{
						if (is_entity_dead(Local_30.f_158) || is_ped_fatally_injured(Local_30.f_158))
						{
							Local_30.f_340 = 2;
						}
					}
					func_2198();
					if (func_388(Local_30.f_2, 8388608))
					{
						Local_30.f_340 = 5;
					}
					else if (!func_388(Local_30.f_2, 1))
					{
						func_2197(uParam0, func_2045(), "RH1_PLACE_BAIT", "RH1_FL_NBAIT", 80f, 100f, 0, 0, 0, 1, 1);
					}
					else if (!func_388(Local_30.f_2, 2))
					{
						func_2197(uParam0, func_2041(), "RH1_BAIT_ROCKS", "RH1_FL_WAIT", 50f, 60f, 0, 0, 0, 1, 1);
					}
					else if (!func_388(Local_30.f_2, 32))
					{
						func_2196(uParam0, 5, 50f, 60f, 0, 0, 1, 422991367);
					}
					else if (func_388(Local_30.f_2, 256))
					{
						func_2196(uParam0, 5, 35f, 45f, 0, 0, 1, 422991367);
					}
				}
				else if (func_33(uParam0) == iLocal_27)
				{
					if (func_388(Local_30.f_2, 2048))
					{
						func_2196(uParam0, 5, 45f, 100f, 0, 0, 1, 422991367);
					}
					else
					{
						func_2196(uParam0, 5, 50f, 60f, 0, 0, 1, 422991367);
					}
					func_2198();
					if (does_entity_exist(Local_30.f_158))
					{
						if (is_entity_dead(Local_30.f_158) || is_ped_fatally_injured(Local_30.f_158))
						{
							Local_30.f_340 = 2;
						}
					}
				}
			}
			if (Local_30.f_340 != 0)
			{
				func_218(Local_30.f_168[6]);
				Local_30.f_35++;
			}
			break;
		case 1:
			if (func_912(Local_30.f_168[6]) >= 1.5f)
			{
				switch (Local_30.f_340)
				{
					case 1:
						StringCopy(&cVar3, "RH1_F_ABH", 64);
						break;
					case 2:
						cVar3 = { func_2203() };
						break;
					case 4:
						StringCopy(&cVar3, "RH1_FL_SDDL", 64);
						break;
					case 3:
						StringCopy(&cVar3, "LAW_FAIL", 64);
						break;
					case 5:
						StringCopy(&cVar3, "RH1_FL_BAIT", 64);
						break;
					case 6:
						StringCopy(&cVar3, "RH1_FL_GAME", 64);
						break;
					case 7:
						StringCopy(&cVar3, "RH1_FL_BAITD", 64);
						break;
					case 8:
						StringCopy(&cVar3, "RH1_FL_STBLE", 64);
						break;
					case 9:
						cVar3 = { func_2204(5, 0) };
						break;
				}
				func_2205(uParam0, &cVar3, "", 1, 0);
				Local_30.f_35++;
			}
			break;
	}
}

void func_1585(var uParam0)
{
	iVar16 = func_33(uParam0);
	iVar17 = func_131(iVar16);
	iVar18 = func_161(uParam0, iVar16);
	if (uParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2504)
		{
			if (func_215(uParam0->f_8269[iVar19], 1048576))
			{
				if (func_2206(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1505(uParam0->f_8269[iVar19]);
				}
				else if (func_2207(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_225(uParam0->f_8269[iVar19]);
					if (iVar19 < (uParam0->f_8269.f_2504 - 1))
					{
						_copy_memory(uParam0->f_8269[iVar19], uParam0->f_8269[(uParam0->f_8269.f_2504 - 1)], 16);
						_copy_memory(uParam0->f_8269[uParam0->f_8269.f_2504], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(uParam0->f_8269[iVar19], &uVar0, 16);
					}
					uParam0->f_8269.f_2504 = (uParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2505)
		{
			if (func_215(uParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_2208(uParam0, uParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2209(uParam0->f_8269.f_641[iVar19]);
					if (iVar19 < (uParam0->f_8269.f_2505 - 1))
					{
						_copy_memory(uParam0->f_8269.f_641[iVar19], uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1)], 16);
						_copy_memory(uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1)], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(uParam0->f_8269.f_641[iVar19], &uVar0, 16);
					}
					uParam0->f_8269.f_2505 = (uParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2506)
		{
			if (func_215(uParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_2208(uParam0, uParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_216(uParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_215(uParam0->f_8269.f_1282[iVar19], 4))
						{
							func_2210(&(uParam0->f_8269));
						}
						if (iVar19 < (uParam0->f_8269.f_2506 - 1))
						{
							_copy_memory(uParam0->f_8269.f_1282[iVar19], uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1)], 16);
							_copy_memory(uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1)], &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							_copy_memory(uParam0->f_8269.f_1282[iVar19], &uVar0, 16);
						}
						uParam0->f_8269.f_2506 = (uParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2507)
		{
			if (func_215(uParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_2206(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2211(uParam0, uParam0->f_8269.f_2243[iVar19], 1);
					func_496(uParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_2207(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2211(uParam0, uParam0->f_8269.f_2243[iVar19], 0);
					func_496(uParam0->f_8269.f_2243[iVar19], 2);
					if (iVar19 < (uParam0->f_8269.f_2507 - 1))
					{
						_copy_memory(uParam0->f_8269.f_2243[iVar19], uParam0->f_8269.f_2243[iVar19 + 1], 16);
						_copy_memory(uParam0->f_8269.f_2243[iVar19 + 1], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(uParam0->f_8269.f_2243[iVar19], &uVar0, 16);
					}
					uParam0->f_8269.f_2507 = (uParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

bool func_1586(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 16777216))
	{
		return false;
	}
	if (!func_121(uParam0, func_33(uParam0), 2))
	{
		return false;
	}
	if (!Global_1935630->f_12)
	{
		return ((get_is_task_active(Global_35, 3) || func_2212(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1587()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_2129(0);
	func_2213();
}

void func_1588(var uParam0, int iParam1, int iParam2)
{
	func_1301(&(uParam0->f_1[func_131(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1589(var uParam0)
{
	if (func_512(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_512(uParam0, 1024);
	if (func_512(uParam0, 128) || bVar0)
	{
		if (func_512(uParam0, 4096))
		{
			if (!func_512(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_2214(uParam0, 2048);
				return;
			}
		}
		else if (func_512(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_2215(uParam0, 2048);
		}
		if (func_512(uParam0, 512))
		{
			if (func_451(uParam0->f_10))
			{
				if (func_897(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_2216(uParam0->f_10))
					{
						func_456(uParam0->f_10, 1);
						func_2217(uParam0->f_10, 0);
					}
				}
				else if ((func_2216(uParam0->f_10) && !bVar0) && !func_512(uParam0, 16384))
				{
					func_456(uParam0->f_10, 0);
					func_2217(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_897(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_897(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_512(uParam0, 512))
	{
		if (func_451(uParam0->f_10))
		{
			if (func_2216(uParam0->f_10))
			{
				func_456(uParam0->f_10, 0);
				func_2217(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

bool func_1590(int iParam0)
{
	return (iParam0 < func_394() && iParam0 >= 0);
}

int func_1591(int iParam0)
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

bool func_1592(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1593(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_131(iParam1);
	if (!func_1590(iVar0))
	{
		return false;
	}
	iVar1 = func_1591(iParam2);
	if (!func_1592(iVar1))
	{
		return false;
	}
	return is_bit_set(uParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1594(struct<2> Param0, int iParam2)
{
	if (!func_253(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1595(var uParam0)
{
	func_2218(uParam0);
	if (func_274(uParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_274(uParam0) == 0 && !func_8(uParam0, 8))
	{
		func_906(uParam0);
	}
	func_51(&(uParam0->f_10792));
	func_2219(uParam0);
	func_2220(uParam0, 67108864);
	func_2220(uParam0, 8192);
	func_908(uParam0, 4);
	func_908(uParam0, 512);
	func_908(uParam0, 65536);
	func_908(uParam0, 1024);
	func_908(uParam0, 262144);
	func_908(uParam0, 16777216);
	func_908(uParam0, 64);
	func_260(uParam0, 128);
	func_99(uParam0, -2147483648);
	func_2221(uParam0, 1);
	if (func_120(uParam0, 4194304))
	{
		func_139(uParam0, func_33(uParam0), 1073741824);
	}
	func_260(uParam0, 4194304);
	func_260(uParam0, 8388608);
	if (!func_121(uParam0, func_33(uParam0), 2048))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	if (func_20() == 0)
	{
		func_21(8);
		func_79(1);
	}
	if (func_121(uParam0, func_33(uParam0), 64) || !func_115(uParam0))
	{
		func_40(0);
	}
	else
	{
		func_40(1);
	}
	_set_milliseconds_per_game_minute(2000);
	if (!func_8(uParam0, 131072))
	{
		set_everyone_ignore_player(get_player_index(), false);
	}
	func_544(&(uParam0->f_13106));
	func_218(&(uParam0->f_13112));
	func_2222(uParam0, func_121(uParam0, func_33(uParam0), 1));
	if (!func_121(uParam0, func_33(uParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(uParam0, func_33(uParam0), 32768))
	{
		func_233(1);
	}
	if (func_932(uParam0, func_35(uParam0)) != -1 && _0x62de46f061caa468() < func_932(uParam0, func_35(uParam0)))
	{
		_0xf008e0ba1fe1d644((func_932(uParam0, func_35(uParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_2223(uParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(uParam0, func_33(uParam0), 1))
	{
		func_227(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_2224(uParam0);
	if (func_33(uParam0) == 25 && func_82(32768))
	{
		func_2225(uParam0, 16);
	}
	if (func_121(uParam0, func_33(uParam0), 512))
	{
		func_2226(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1596(var uParam0)
{
	if (func_120(uParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1597(var uParam0)
{
	func_2167(uParam0);
}

void func_1598(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1499(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1599(var uParam0)
{
	func_2227(uParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(uParam0, 1024);
	}
}

bool func_1600(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1601(var uParam0)
{
	return true;
}

void func_1602(var uParam0, char[32] cParam1)
{
	uParam0->f_10784 = { cParam1 };
}

bool func_1603(var uParam0, int iParam1)
{
	iVar0 = func_2228(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1604(var uParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2229(uParam0, uParam1))
	{
		return 0;
	}
	if (func_451(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1589(uParam1);
	func_2230(uParam1);
	if (!bParam2)
	{
		func_2231(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2232(uParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2233(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2234(uParam0, uParam1);
	func_2235(uParam1);
	return 0;
}

bool func_1605(var uParam0)
{
	return true;
}

int func_1606(int iParam0)
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
						*iParam0 = func_2236(vVar0.z);
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

void func_1607(var uParam0, char[4] cParam1, bool bParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_2205(uParam0, &cParam1, "", bParam9, bParam10);
}

bool func_1608(var uParam0, char[4] cParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 256))
	{
		if (!func_121(uParam0, func_33(uParam0), 65536))
		{
			if (func_2237(cParam1))
			{
				func_139(uParam0, func_33(uParam0), 131072);
			}
			func_139(uParam0, func_33(uParam0), 65536);
		}
		if (func_121(uParam0, func_33(uParam0), 131072))
		{
			if (!func_1553(&(uParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_2238(&(uParam0->f_7375), &(uParam0->f_10792));
				func_139(uParam0, func_33(uParam0), 256);
			}
		}
		else
		{
			func_139(uParam0, func_33(uParam0), 256);
		}
	}
	return func_2170(&(uParam0->f_7375), cParam1, (func_8(uParam0, 33554432) || (is_screen_faded_out() && !func_8(uParam0, 1073741824))), 1);
}

void func_1609(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_855((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2239(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2240(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2241((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_855((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2239(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2240(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2242((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_855((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2239(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2240(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2243((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_855((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2239(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2240(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2244((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_855(uParam4->f_1, iParam12))
	{
		func_2239(&(uParam4->f_1), iParam12);
		if (func_2240(&(uParam4->f_1), iParam13))
		{
			func_2245(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_855((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2239(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2240(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2246((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_855((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2239(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2240(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2247((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_855((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2239(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2240(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2248((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_855((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2239(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2240(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2249((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_855((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2239(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2240(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2250((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_855((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2239(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2240(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2251((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_855((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2239(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2240(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2252((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1610(var uParam0)
{
	iVar0 = func_2253(uParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1611(bool bParam0, bool bParam1)
{
	if (func_2254(255) == 4)
	{
		return;
	}
	if (func_393(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_284(0);
	}
	else
	{
		if (bParam1)
		{
			func_2255(0, 0, 0, 1);
		}
		func_285(0);
		func_2256(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2257(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2258(Global_1109400->f_389, 42);
	func_2259(Global_1109400->f_428, 42);
}

float func_1612(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_1613(bool bParam0, bool bParam1, bool bParam2)
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

var func_1614(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1615(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_2260(sParam1));
}

int func_1616(int iParam0, bool bParam1, float fParam2)
{
	if (!is_bit_set(Global_1934765->f_301, 0))
	{
		return 0;
	}
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return 0;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		_0x243cede8f916b994();
		return 0;
	}
	iVar0 = func_2261(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_2262(iVar1, 1);
		if (iVar2 == 0 || iVar2 == -1439599467)
		{
		}
		else if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar1))
		{
			_0xd3f943b88f55376a(iVar2);
		}
		else
		{
			_0x2916b30dc6c41179(iVar2);
		}
		iVar1++;
	}
	return func_2263(iParam0, bParam1, fParam2);
}

int func_1617(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 3;
		case 4:
			return 2;
		case 5:
			return 1;
		default:
			break;
	}
	return -1;
}

void func_1618(var uParam0, int iParam1, bool bParam2)
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

int func_1619(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1620(int iParam0)
{
	if (!func_978(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2264(iParam0);
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

void func_1621(int iParam0)
{
	if (func_451(iParam0))
	{
		if (does_entity_exist(func_543(iParam0)))
		{
			func_703(iParam0, 67108864, 1);
			func_982(iParam0, 19, 1);
		}
	}
}

float func_1622(int iParam0)
{
	if (!func_978(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1623(int iParam0)
{
	iVar0 = func_543(iParam0);
	iVar1 = func_984(iParam0, 0);
	func_2265(iParam0, iVar0);
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			_0xf008e0ba1fe1d644(1);
			bVar2 = true;
			set_entity_as_mission_entity(iVar0, true, true);
		}
		_0x7b204f88f6c3d287(iVar1);
		if (bVar2)
		{
			_0x7d4e70a67a651c71(1);
		}
	}
	_0xfcc6db8dbe709bc8(iVar1);
}

bool func_1624(int iParam0)
{
	if (!func_978(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1625(int iParam0)
{
	if (!func_978(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1626(int iParam0, int iParam1, bool bParam2)
{
	if (!func_978(iParam0))
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

int func_1627(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_978(iParam0))
	{
		return 0;
	}
	iVar0 = func_991(iParam0);
	if (func_983(iVar0, 0))
	{
		if (func_983(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1624(iParam0)) || func_1625(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_1999(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_2183(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_2266(iParam0);
					_0x7b204f88f6c3d287(func_2267(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_2267(iParam0, 0));
					func_2268(iParam0);
				}
			}
			else
			{
				if (func_702(iParam0, 32768, 1))
				{
					iVar2 = func_2267(iParam0, 0);
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
		if (func_983((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_702(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_2266(iParam0);
				_0x7b204f88f6c3d287(func_2267(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_2267(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_2266(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_2269(iParam0, 0);
	return 1;
}

int func_1628(int iParam0)
{
	if (func_464(iParam0))
	{
		return 0;
	}
	if (func_461(iParam0, 0))
	{
		func_1002(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_1002(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1629(int iParam0)
{
	return func_290(iParam0) == 0;
}

void func_1630(int iParam0, bool bParam1)
{
	if (!func_188(iParam0))
	{
		return;
	}
	if (!func_1629(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_191(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_191(iParam0)))
		{
			_0xca41e86545413b5b(func_193(iParam0), func_267(iParam0), func_309(iParam0), func_191(iParam0), Global_36);
		}
	}
	func_200(iParam0, 1);
	bParam1 = bParam1;
}

void func_1631(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_477(Global_1898330[iParam0]);
		func_2270((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

void func_1632(int iParam0)
{
	if (!func_188(iParam0))
	{
		return;
	}
	if (!func_190(iParam0))
	{
		return;
	}
	func_200(iParam0, 2);
}

bool func_1633(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_690(func_280());
	if (func_2029(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2029(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

int func_1634(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_1635(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_1636()
{
	return Global_40.f_4283.f_1;
}

bool func_1637(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_20() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_195(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_2271(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_2272(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_703(iVar0, 512, 1);
			}
			else
			{
				func_990(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

void func_1638(int iParam0)
{
	if (_does_volume_exist((*Global_1347702)[iParam0]->f_41))
	{
		func_2273((*Global_1347702)[iParam0]->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			_0xd17672447692478e((*Global_1347702)[iParam0]->f_41, 0);
		}
		_delete_volume((*Global_1347702)[iParam0]->f_41);
	}
}

void func_1639(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1640(int iParam0, bool bParam1)
{
	if (!func_268(iParam0))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		func_2274(&((*Global_1347702)[iParam0]->f_14));
		func_1004(&((*Global_1347702)[iParam0]->f_13), 16);
		func_2275(iParam0);
		if ((!func_2276(player_id(), 1, 0, 1) || Global_43891) || bParam1)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			_0x2f901291ef177b02((*Global_1347702)[iParam0]->f_40, 0);
			func_1004(&((*Global_1347702)[iParam0]->f_13), 4096);
			func_1855(&((*Global_1347702)[iParam0]->f_37));
		}
		else
		{
			func_2277(iParam0, 16384);
			func_2278(iParam0, 1, func_1008(iParam0));
		}
	}
}

void func_1641(int iParam0)
{
	if (func_2279(iParam0, &iVar1, &iVar0))
	{
		if (func_2280(iVar1, iVar0, 1))
		{
			func_2281(iVar1, iVar0);
		}
	}
}

bool func_1642(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_355((*Global_1347702)[iParam0]->f_15) != 0)
		{
			(*Global_1347702)[iParam0]->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((*Global_1347702)[iParam0]->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

bool func_1643(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_1629((*Global_1835011)[iParam0]->f_1);
}

bool func_1644(int iParam0, bool bParam1, bool bParam2)
{
	if (func_952(iParam0, bParam1, bParam2, 1))
	{
		return true;
	}
	return false;
}

bool func_1645(int iParam0)
{
	return func_1007(iParam0);
}

Vector3 func_1646(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_1647(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_82(32768))
	{
		return 0;
	}
	iVar0 = func_20();
	if ((bParam4 && func_2067(&((*Global_1835011)[iParam0]->f_29), 512)) && !func_2067(&((*Global_1835011)[iParam0]->f_29), 1024))
	{
		if (func_212())
		{
			return 0;
		}
	}
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return 0;
	}
	if (!func_2282(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_321((*Global_1835011)[20]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[20]->f_1) && (get_game_timer() - func_2283()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_321((*Global_1835011)[19]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[19]->f_1) && (get_game_timer() - func_2283()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_321((*Global_1347702)[62]->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_70;
		if (func_1653(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_2284((*Global_1835011)[iParam0], 2))
			{
				if (func_833(iParam0))
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_834(iParam0));
					bVar2 = true;
				}
				else
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_390(iParam0));
				}
			}
			else if (func_833(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_area(1673015813, func_834(iParam0), func_2285(iParam0), func_2286(iParam0));
				bVar2 = true;
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_radius(1673015813, func_2287(iParam0), func_2288(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_833(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_1646(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_834(iParam0));
				bVar2 = true;
			}
		}
		else if (func_1645(iParam0))
		{
			if (iParam0 == 7)
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(-1337945352, func_390(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_390(iParam0));
			}
		}
		else
		{
			(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_390(iParam0));
		}
		(*Global_1835011)[iParam0]->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_833(iParam0))
			{
				func_1012(iParam2, 4194304);
			}
			else
			{
				func_1658(iParam2, 4194304);
			}
		}
		set_blip_flash_timer((*Global_1835011)[iParam0]->f_27, 63, iParam0);
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		set_blip_sprite((*Global_1835011)[iParam0]->f_27, (*Global_1835011)[iParam0]->f_26, true);
		if (iVar0 != -1)
		{
			_set_blip_name_from_player_string((*Global_1835011)[iParam0]->f_27, &((*Global_1835011)[iParam0]->f_39));
		}
		if (!func_2067(&((*Global_1835011)[iParam0]->f_29), 1024) && !func_1645(iParam0))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 580546400);
			func_2289(&((*Global_1835011)[iParam0]->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_1645(iParam0))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, -1986290853);
	}
	if (bParam3 || func_2284((*Global_1835011)[iParam0], 2))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	else
	{
		_set_blip_flash_style((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	iVar4 = func_2290(Global_40.f_4283);
	if (func_245(iVar4) && func_435((*Global_1888801)[iVar4]->f_13))
	{
		bVar5 = true;
		bVar6 = func_2291(iVar4);
	}
	if (func_2292(iParam0, bVar5, iVar4))
	{
		func_2293((*Global_1835011)[iParam0]->f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_1227(579))
	{
		func_2294(579, (*Global_1835011)[iParam0]->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_2067(&((*Global_1835011)[iParam0]->f_29), 4096) && !func_2067(&((*Global_1835011)[iParam0]->f_29), 8192)) && IntToFloat(func_2283()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_2295(Global_35, -2016812721)) && !_is_ped_using_scenario_hash(Global_35, -1054012177)) && !_is_ped_using_scenario_hash(Global_35, 1097070152))
	{
		if (!func_1653(iParam0, iVar0) || (fParam1 >= (func_2296(iParam0) * func_2296(iParam0)) && !(*Global_1835011)[iParam0]->f_70))
		{
			MemCopy(&cVar7, {(*Global_1835011)[iParam0]->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_708(&cVar7, 10000, 0, 0, 0, 1);
			func_2289(&((*Global_1835011)[iParam0]->f_29), 8192);
		}
	}
	return 1;
}

{